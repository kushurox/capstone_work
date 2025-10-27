`include "mpu_common.svh"

// final top module instantiating all MPU components
// reservation counter, malloc unit, dealloc unit, act memory
// peforms access checks

typedef enum logic [2:0] {
    MPU_IDLE,
    MPU_MALLOC,
    MPU_DEALLOC,
    MPU_ACCESS_CHECK,
    MPU_RESULT
} mpu_state_t;

module MPU(
    input logic clk,
    input logic rst_n,
    input logic cs,
    input logic cfg, // 1 for configure, 0 for access check
    input logic we,
    input logic [CORE_ID_WIDTH-1:0] core_id,
    input logic free_reserve,
    input addr_bits_t addr,
    input data_bits_t wdata,
    output logic rdy,
    output logic bsy,
    output logic [DATA_WIDTH-1:0] rdata,
    output mpu_error_t error
);

    logic malloc_cs, dealloc_cs, check_cs;  // chip select signals to malloc, dealloc, check units
    logic malloc_act_cs, dealloc_act_cs, check_act_cs; // from malloc/dealloc/check to act memory
    logic malloc_rdy, dealloc_rdy, check_rdy;
    logic malloc_bsy, dealloc_bsy, check_bsy, act_bsy;
    act_op_t act_sender;

    entry_t act_malloc_rdata, act_dealloc_rdata, act_check_rdata;

    logic malloc_dequeue, dealloc_enqueue;
    logic [BLOCK_COUNT_BITS-1:0] reservation_id_from_counter; // goes to malloc unit
    logic [BLOCK_COUNT_BITS-1:0] reservation_id_to_counter;   // comes from dealloc unit
    logic reservation_counter_full, reservation_counter_empty, reservation_counter_rdy;

    logic malloc_act_we;
    entry_t malloc_act_wdata;
    logic [BLOCK_COUNT_BITS-1:0] malloc_act_addr;
    logic [ADDR_WIDTH-1:0] malloc_base_addr;
    malloc_error_t malloc_err;

    logic dealloc_act_we;
    entry_t dealloc_act_wdata;
    logic [BLOCK_COUNT_BITS-1:0] dealloc_act_addr;
    dealloc_error_t dealloc_err;

    logic [DATA_WIDTH-1:0] memory [0:(SHARED_MEM_SIZE/(DATA_WIDTH/8))-1]; // shared memory
    logic [BLOCK_COUNT_BITS-1:0] memory_addr;

    logic [BLOCK_COUNT_BITS-1:0] check_act_addr;

    logic [CORE_ID_WIDTH-1:0] core_id_reg;
    addr_bits_t addr_reg;
    data_bits_t wdata_reg;
    logic free_reserve_reg;
    logic we_reg;

    access_check_result_t access_check_result;

    mpu_state_t current_state;


    always_ff @(posedge clk) begin
        if(!rst_n) begin
            current_state <= MPU_IDLE;
            rdy <= 1'b0;
            bsy <= 1'b0;
            rdata <= '0;
            error <= MPU_NO_ERROR;
            malloc_cs <= 1'b0;
            dealloc_cs <= 1'b0;
            check_cs <= 1'b0;
        end
        else begin
            case(current_state)
                MPU_IDLE: begin
                    if(cs) begin: mpu_idle_transition
                        bsy <= 1'b1;
                        core_id_reg <= core_id;
                        addr_reg <= addr;
                        wdata_reg <= wdata;
                        free_reserve_reg <= free_reserve;
                        we_reg <= we;
                        if(cfg) begin
                            if(free_reserve) begin
                                malloc_cs <= 1'b1;
                                current_state <= MPU_MALLOC;
                            end
                            else begin
                                dealloc_cs <= 1'b1;
                                current_state <= MPU_DEALLOC;
                            end
                        end
                        else begin
                            check_cs <= 1'b1;
                            current_state <= MPU_ACCESS_CHECK;
                        end
                    end: mpu_idle_transition
                end
                MPU_MALLOC: begin
                    malloc_cs <= '0;
                    if(malloc_rdy) begin
                        if(malloc_err == MALLOC_NO_ERROR) begin
                            rdata <= malloc_base_addr;
                            error <= MPU_NO_ERROR;
                        end
                        else begin
                            rdata <= '0;
                            error <= MPU_ACCESS_DENIED;
                        end
                        current_state <= MPU_RESULT;
                        rdy <= 1'b1;
                    end
                    else begin
                        current_state <= MPU_MALLOC; // wait for malloc to be ready
                    end
                end
                MPU_DEALLOC: begin
                    dealloc_cs <= '0;
                    if(dealloc_rdy) begin
                        if(dealloc_err == DEALLOC_NO_ERROR) begin
                            rdata <= '0;
                            error <= MPU_NO_ERROR;
                        end
                        else begin
                            rdata <= '0;
                            error <= MPU_ACCESS_DENIED;
                        end
                        current_state <= MPU_RESULT;
                        rdy <= 1'b1;
                    end
                    else begin
                        current_state <= MPU_DEALLOC; // wait for dealloc to be ready
                    end
                end
                MPU_ACCESS_CHECK: begin
                    check_cs <= '0;
                    if(check_rdy) begin
                        if(access_check_result == ACCESS_GRANTED) begin
                            if(we_reg) begin
                                memory[addr_reg] <= wdata_reg;
                            end
                            else begin
                                rdata <= memory[addr_reg];
                            end
                            error <= MPU_ACCESS_GRANTED;
                        end
                        else begin
                            rdata <= '0;
                            error <= MPU_ACCESS_DENIED;
                        end
                        current_state <= MPU_RESULT;
                        rdy <= 1'b1;
                    end
                    else begin
                        current_state <= MPU_ACCESS_CHECK; // wait for access check to be ready
                    end
                end
                MPU_RESULT: begin
                    rdy <= 1'b0;
                    bsy <= 1'b0;
                    current_state <= MPU_IDLE;
                end
                default: begin
                    current_state <= MPU_IDLE;
                    rdy <= 1'b0;
                    bsy <= 1'b0;
                end
            endcase
        end

    end

    act_mem act_mem_inst(
        .clk(clk),
        .rst_n(rst_n),
        .cs(malloc_act_cs | dealloc_act_cs | check_act_cs),
        .malloc_dealloc(act_sender),
        .malloc_we(malloc_act_we),
        .malloc_wdata(malloc_act_wdata),
        .malloc_addr(malloc_act_addr),
        .dealloc_we(dealloc_act_we),
        .dealloc_wdata(dealloc_act_wdata),
        .dealloc_addr(dealloc_act_addr),
        .check_addr(check_act_addr),
        .malloc_rdata(act_malloc_rdata),
        .dealloc_rdata(act_dealloc_rdata),
        .check_rdata(act_check_rdata),
        .bsy(act_bsy)
    );

    access_check access_check_inst(
        .clk(clk),
        .rst_n(rst_n),
        .cs(check_cs),
        .core_id(core_id_reg),
        .addr(addr_reg),
        .we(we_reg),
        .act_rdata(act_check_rdata),
        .result(access_check_result),
        .bsy(check_bsy),
        .rdy(check_rdy),
        .act_cs(check_act_cs),
        .act_addr(check_act_addr)
    );


    malloc malloc_inst(
        .clk(clk),
        .rst_n(rst_n),
        .cs(malloc_cs),
        .core_id(core_id_reg),
        .num_blocks(addr_reg.bits.size),
        .read_mask(wdata_reg.bits.read_mask),
        .write_mask(wdata_reg.bits.write_mask),
        .act_rdata(act_malloc_rdata),
        .reservation_id(reservation_id_from_counter),
        .act_cs(malloc_act_cs),
        .act_we(malloc_act_we),
        .act_wdata(malloc_act_wdata),
        .act_addr(malloc_act_addr),
        .base_addr(malloc_base_addr),
        .rdy(malloc_rdy),
        .bsy(malloc_bsy),
        .err(malloc_err),
        .reservation_dequeue(malloc_dequeue)
    );

    dealloc dealloc_inst(
        .clk(clk),
        .rst_n(rst_n),
        .cs(dealloc_cs),
        .addr(wdata_reg), // when in reserve or free mode, data contains the starting address
        .core_id(core_id_reg),
        .act_rdata(act_dealloc_rdata),
        .act_cs(dealloc_act_cs),
        .act_we(dealloc_act_we),
        .act_wdata(dealloc_act_wdata),
        .act_addr(dealloc_act_addr),
        .reservation_id_out(reservation_id_to_counter),
        .reservation_enqueue(dealloc_enqueue),
        .bsy(dealloc_bsy),
        .rdy(dealloc_rdy),
        .err(dealloc_err)
    );

    reservation_counter reservation_counter_inst(
        .clk(clk),
        .rst_n(rst_n),
        .enqueue(dealloc_enqueue),
        .dequeue(malloc_dequeue),
        .freed_reservation_id(reservation_id_to_counter),
        .new_reservation_id(reservation_id_from_counter),
        .full(reservation_counter_full),
        .empty(reservation_counter_empty),
        .rdy(reservation_counter_rdy)  // unused for now
    );

    always_comb begin
        if(malloc_act_cs) begin
            act_sender = MALLOC;
        end
        else if(dealloc_act_cs) begin
            act_sender = DEALLOC;
        end
        else begin
            act_sender = CHECK; // default to check
        end
    end

endmodule