`include "mpu_common.svh"

// note this module expects the input to be the starting address of the region to deallocate.
// if input addr is not aligned to block size, the block containing the address and all subsequent blocks are deallocated.
// once reservation id is not matching anymore, deallocation stops.
// reservation id is inferred from input address.


// TODO: enqueue the freed reservation id back to reservation counter
module dealloc(
    input logic clk,
    input logic rst_n,
    input logic cs,
    input logic [ADDR_WIDTH-1:0] addr, // starting address to deallocate
    input logic [CORE_ID_WIDTH-1:0] core_id, // owner core id
    input entry_t act_rdata,
    output logic act_cs,
    output logic act_we,
    output entry_t act_wdata,
    output logic [BLOCK_COUNT_BITS-1:0] act_addr,
    output logic [BLOCK_COUNT_BITS-1:0] reservation_id_out,
    output logic reservation_enqueue,
    output logic bsy,
    output logic rdy,
    output dealloc_error_t err

);

    dealloc_state_t current_state;
    logic [BLOCK_COUNT_BITS-1:0] block_index;
    logic [BLOCK_COUNT_BITS-1:0] reservation_id;

    logic [CORE_ID_WIDTH-1:0] core_id_reg;
    logic from;

    always_ff @( posedge clk or negedge rst_n ) begin
        if(!rst_n) begin
            current_state <= DEALLOC_IDLE;
            act_cs <= 1'b0;
            act_we <= 1'b0;
            act_wdata <= '0;
            act_addr <= '0;
            bsy <= 1'b0;
            block_index <= '0;
            reservation_id <= '0;
            core_id_reg <= '0;
            err <= DEALLOC_NO_ERROR;
            reservation_id_out <= '0;
            reservation_enqueue <= 1'b0;
            rdy <= 1'b1;
            from <= '0;
        end
        else begin
            case(current_state)
                DEALLOC_IDLE: begin
                    if(cs) begin
                        $display("DEALLOC: Deallocation started for core id %0d at address %0h", core_id, addr);
                        bsy <= 1'b1;
                        rdy <= 1'b0;
                        act_addr <= BLOCK_COUNT_BITS'(addr >> REGION_SHIFT);
                        block_index <= BLOCK_COUNT_BITS'(addr >> REGION_SHIFT);
                        act_cs <= 1'b1;
                        act_we <= 1'b0;
                        core_id_reg <= core_id;
                        current_state <= DEALLOC_READ;
                        reservation_id_out <= '0;
                        reservation_enqueue <= 1'b0;
                        reservation_id <= '0;
                        from <= '0;
                        err <= DEALLOC_NO_ERROR;
                    end
                end
                DEALLOC_READ: begin // waiting for act_rdata
                    act_cs <= 1'b0;
                    current_state <= from ? WE : DEALLOC_CHECK;
                end
                DEALLOC_CHECK: begin
                    if(act_rdata.owner != core_id_reg) begin
                        $display("DEALLOC: Owner core id mismatch. Deallocation complete.");
                        current_state <= DEALLOC_RESULT;
                        err <= DEALLOC_INVALID_ADDR;
                        act_cs <= 1'b0;
                        act_we <= 1'b0;
                    end
                    else begin
                        $display("DEALLOC: Deallocating block at index %0d", block_index);
                        reservation_id <= act_rdata.reservation_id;
                        current_state <= LE;
                        act_cs <= 1'b1;
                        act_we <= 1'b1;
                        act_addr <= block_index;
                        act_wdata <= '0; // mark block as free
                        block_index <= block_index + 1;
                    end
                end
                LE: begin   // write inputs are taken here. at the same time prepare read inputs for next block
                    act_we <= 1'b0;
                    act_addr <= block_index;
                    from <= 1'b1;
                    current_state <= DEALLOC_READ;
                end
                WE: begin
                    if(act_rdata.reservation_id != reservation_id || !act_rdata.valid) begin
                        $display("DEALLOC: Reservation id mismatch. Deallocation complete.");
                        current_state <= DEALLOC_RESULT;
                        act_cs <= 1'b0;
                        act_we <= 1'b0;
                        reservation_id_out <= reservation_id;
                        reservation_enqueue <= 1'b1;
                    end
                    else begin
                        $display("DEALLOC: Deallocated block at index %0d", block_index);
                        act_cs <= 1'b1;
                        act_we <= 1'b1;
                        act_addr <= block_index;
                        act_wdata <= '0; // mark block as free
                        block_index <= block_index + 1;
                        current_state <= LE;
                    end
                end
                DEALLOC_RESULT: begin
                    bsy <= 1'b0;
                    rdy <= 1'b1;
                    current_state <= DEALLOC_IDLE;
                    reservation_id_out <= '0;
                    reservation_enqueue <= 1'b0;
                    $display("DEALLOC: Deallocation operation complete at cycle %0d", $time);
                end
                default: begin
                    current_state <= DEALLOC_IDLE;
                    bsy <= 1'b0;
                    rdy <= 1'b0;
                    act_cs <= 1'b0;
                    act_we <= 1'b0;
                    block_index <= '0;
                    reservation_id <= '0;
                end
            endcase
        end
    end

    task automatic print_hello();
        $display("Hello from dealloc module!");
    endtask
endmodule