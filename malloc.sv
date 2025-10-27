// module for memory allocation
// revised version with improved reservation id handling

`include "mpu_common.svh"



module malloc(
    input logic clk,
    input logic rst_n,

    input logic cs,
    input logic [CORE_ID_WIDTH-1:0] core_id, // owner core id
    input logic [BLOCK_COUNT_BITS-1:0] num_blocks, // number of blocks to allocate
    input logic [CORE_COUNT-1:0] read_mask, // read access mask
    input logic [CORE_COUNT-1:0] write_mask, // write access mask
    input entry_t act_rdata,
    input logic [BLOCK_COUNT_BITS-1:0] reservation_id, // reservation id obtained from reservation counter
    output logic act_cs,
    output logic act_we,
    output entry_t act_wdata,
    output logic [BLOCK_COUNT_BITS-1:0] act_addr,
    output logic [ADDR_WIDTH-1:0] base_addr, // base address of allocated region
    output logic rdy,
    output logic bsy,
    output malloc_error_t err,
    output logic reservation_dequeue // signal to dequeue reservation id
);

    malloc_state_t current_state;


    logic [CORE_ID_WIDTH-1:0] core_id_reg;
    logic [BLOCK_COUNT_BITS-1:0] num_blocks_reg;
    logic [CORE_COUNT-1:0] read_mask_reg;
    logic [CORE_COUNT-1:0] write_mask_reg;
    logic [BLOCK_COUNT_BITS-1:0] reservation_id_reg;

    logic [BLOCK_COUNT_BITS:0] left; // index to search for free blocks. keeping it BLOCK_COUNT_BITS+1 to avoid overflow
    logic [BLOCK_COUNT_BITS:0] right; // count of contiguous free blocks found

    always_ff @( posedge clk ) begin
        if(!rst_n) begin
            $display("MALLOC_RESET");
            current_state <= MALLOC_IDLE;
            rdy <= 1'b0;
            bsy <= 1'b0;
            err <= MALLOC_NO_ERROR;
            base_addr <= '0;
            left <= '0;
            right <= '0;
            act_we <= 1'b0;
            act_cs <= 1'b0;
            reservation_dequeue <= 1'b0;
        end
        else begin
            // $display("MALLOC_STATE: %0b", current_state);
            case(current_state)
                MALLOC_IDLE: begin
                    if(cs) begin
                        $display("Malloc request received at cycle %0d", $time);
                        $display("core_id: %0d, num_blocks: %0d, read_mask: %0b, write_mask: %0b", core_id, num_blocks, read_mask, write_mask);
                        // start malloc operation
                        core_id_reg <= core_id;
                        num_blocks_reg <= num_blocks;
                        read_mask_reg <= read_mask;
                        write_mask_reg <= write_mask;
                        left <= '0;
                        right <= '0;
                        bsy <= 1'b1;
                        err <= MALLOC_NO_ERROR;
                        current_state <= MALLOC_LOAD_E;
                        // reading first entry
                        act_cs <= 1'b1;
                        act_we <= 1'b0;
                        act_addr <= '0;
                    end
                end
                MALLOC_LOAD_E: begin
                    current_state <= MALLOC_SEARCH_LEFT; // extra cycle to load first entry
                end
                MALLOC_SEARCH_LEFT: begin
                    if(left == BLOCK_COUNT) begin
                        $display("MALLOC_SEARCH_LEFT: left == BLOCK_COUNT");
                        err <= OUT_OF_MEMORY;
                        rdy <= 1'b1;
                        current_state <= MALLOC_RESULT;
                    end 
                    else begin
                        if(!act_rdata.valid) begin
                            $display("req_core_id=%0d, owner: %0d valid=%0b", core_id_reg, act_rdata.owner, act_rdata.valid);
                            $display("MALLOC_SEARCH_LEFT: found free block at %0d", left);
                            right <= left;
                            current_state <= MALLOC_SEARCH_RIGHT;
                            act_addr <= left[BLOCK_COUNT_BITS-1:0];
                        end else begin
                            left <= left + 1;
                            // read next entry
                            act_addr <= left[BLOCK_COUNT_BITS-1:0] + 1;
                            current_state <= MALLOC_LOAD_E; // extra cycle to load next entry
                            // TODO: later change this to pipelined reads, for now keep it simple
                        end
                    end
                end
                MALLOC_SEARCH_RIGHT: begin
                    if(right == BLOCK_COUNT) begin
                        $display("MALLOC_SEARCH_RIGHT: right == BLOCK_COUNT");
                        err <= OUT_OF_MEMORY;
                        rdy <= 1'b1;
                        current_state <= MALLOC_RESULT;
                    end
                    else begin
                        if(right[BLOCK_COUNT_BITS-1:0] - left[BLOCK_COUNT_BITS-1:0] + 1 == num_blocks_reg) begin
                            $display("MALLOC_SEARCH_RIGHT: found enough contiguous blocks from %0d to %0d", left, right);
                            current_state <= MALLOC_RESERVATION_ID0; // to get a reservation id
                            reservation_dequeue <= 1'b1;
                        end

                        else begin
                            if(act_rdata.valid) begin
                                $display("MALLOC_SEARCH_RIGHT: couldn't find enough contiguous blocks, restarting search from %0d", right + 1);
                                left <= right + 1;
                                act_addr <= right[BLOCK_COUNT_BITS-1:0] + 1;
                            end
                            else begin
                                right <= right + 1;
                                act_addr <= right[BLOCK_COUNT_BITS-1:0] + 1;
                            end
                        end
                    end
                end
                MALLOC_RESERVATION_ID0: begin
                    // got reservation id, proceed to allocation
                    reservation_dequeue <= 1'b0;
                    current_state <= MALLOC_RESERVATION_ID1;
                end
                MALLOC_RESERVATION_ID1: begin
                    // wait state for reservation id to be valid
                    $display("MALLOC_RESERVATION_ID: obtained reservation_id=%0d", reservation_id);
                    reservation_id_reg <= reservation_id;
                    current_state <= MALLOC_FOUND;
                end
                MALLOC_FOUND: begin
                    if(left > right) begin
                        $display("MALLOC_FOUND: allocation done from %0d to %0d with reservation_id=%0d", left-num_blocks_reg+1, right, reservation_id_reg);
                        current_state <= MALLOC_RESULT;
                        act_we <= 1'b0;
                        act_cs <= 1'b0;
                        base_addr <= (ADDR_WIDTH'(right[BLOCK_COUNT_BITS-1:0] - num_blocks_reg) + 1) << REGION_SHIFT;
                        rdy <= 1'b1;
                    end
                    else begin
                        $display("MALLOC_FOUND: writing allocation entry at %0d, act_addr=%0d", left, act_addr);
                        act_we <= 1'b1;
                        act_addr <= left[BLOCK_COUNT_BITS-1:0];
                        act_wdata <= entry_t'({1'b1, write_mask_reg, read_mask_reg, core_id_reg, reservation_id_reg});
                        left <= left + 1;
                    end
                end
                MALLOC_RESULT: begin
                    // hold state for one cycle to output results
                    current_state <= MALLOC_IDLE;
                    rdy <= 1'b0;
                    bsy <= 1'b0;
                    err <= MALLOC_NO_ERROR;
                    base_addr <= '0;
                    reservation_dequeue <= 0;
                    act_we <= 1'b0;
                    act_cs <= 1'b0;
                end
                default: begin
                    $display("Invalid state in malloc state machine");
                    current_state <= MALLOC_IDLE;
                    rdy <= 1'b0;
                    bsy <= 1'b0;
                    err <= MALLOC_NO_ERROR;
                    base_addr <= '0;
                    reservation_dequeue <= 0;
                    act_we <= 1'b0;
                    act_cs <= 1'b0;
                end
            endcase
        end
    end

endmodule