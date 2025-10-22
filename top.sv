`include "mpu_common.svh"

// final top module instantiating all MPU components
// reservation counter, malloc unit, dealloc unit, act memory

module top(
    input logic clk,
    input logic rst_n,
    input logic [CORE_ID_WIDTH-1:0] core_id,
    input logic fr, // 0 for free (memory deallocation), 1 for reserve (allocation)
    input logic [CORE_COUNT-1:0] read_mask,
    input logic [CORE_COUNT-1:0] write_mask,
    input logic [BLOCK_COUNT_BITS-1:0] num_blocks,
    input logic [ADDR_WIDTH-1:0] addr, // for deallocation
    output logic [ADDR_WIDTH-1:0] base_addr, // base address of allocated region
    output logic rdy,
    output logic bsy
);

    logic act_bsy;

    // signals between reservation counter and malloc
    logic reservation_dequeue;
    logic [BLOCK_COUNT_BITS-1:0] new_reservation_id;
    logic reservation_counter_full; // malloc wont use these
    logic reservation_counter_empty;
    logic reservation_counter_rdy;

    // signals between malloc and act memory
    logic malloc_cs;
    logic malloc_act_cs;
    logic malloc_we;
    entry_t malloc_wdata;
    logic [BLOCK_COUNT_BITS-1:0] malloc_addr;
    entry_t malloc_rdata;
    logic malloc_bsy;
    logic malloc_rdy;
    malloc_error_t malloc_err;
    logic [ADDR_WIDTH-1:0] malloc_base_addr;

    // signals between dealloc and act memory
    logic dealloc_cs;
    logic dealloc_act_cs;
    logic dealloc_we;
    entry_t dealloc_wdata;
    logic [BLOCK_COUNT_BITS-1:0] dealloc_addr;
    entry_t dealloc_rdata;
    logic dealloc_bsy;
    logic dealloc_rdy;
    dealloc_error_t dealloc_err;

    // signals between reservation counter and dealloc
    logic [BLOCK_COUNT_BITS-1:0] reservation_id_out;
    logic reservation_enqueue;

    reservation_counter rc(
        .clk(clk),
        .rst_n(rst_n),
        .dequeue(reservation_dequeue),
        .new_reservation_id(new_reservation_id),
        .freed_reservation_id(reservation_id_out),
        .enqueue(reservation_enqueue),
        .full(reservation_counter_full),
        .empty(reservation_counter_empty),
        .rdy(reservation_counter_rdy)
    );

    malloc malloc_inst(
        .clk(clk),
        .rst_n(rst_n),
        .cs(malloc_cs),
        .core_id(core_id),
        .num_blocks(num_blocks),
        .read_mask(read_mask),
        .write_mask(write_mask),
        .act_rdata(malloc_rdata),
        .reservation_id(new_reservation_id),
        .act_cs(malloc_act_cs),
        .act_we(malloc_we),
        .act_wdata(malloc_wdata),
        .act_addr(malloc_addr),
        .base_addr(malloc_base_addr),
        .rdy(malloc_rdy),
        .bsy(malloc_bsy),
        .err(malloc_err),
        .reservation_dequeue(reservation_dequeue)
    );

    dealloc dealloc_inst(
        .clk(clk),
        .rst_n(rst_n),
        .cs(dealloc_cs),
        .addr(addr),
        .core_id(core_id),
        .act_rdata(dealloc_rdata),
        .act_cs(dealloc_act_cs),
        .act_we(dealloc_we),
        .act_wdata(dealloc_wdata),
        .act_addr(dealloc_addr),
        .reservation_id_out(reservation_id_out),
        .reservation_enqueue(reservation_enqueue),
        .bsy(dealloc_bsy),
        .rdy(dealloc_rdy),
        .err(dealloc_err)
    );

    act_mem act_mem_inst(
        .clk(clk),
        .rst_n(rst_n),
        .cs(malloc_act_cs | dealloc_act_cs),
        .malloc_dealloc(malloc_act_cs), // because only one of malloc or dealloc is active at a time
        .malloc_we(malloc_we),
        .malloc_wdata(malloc_wdata),
        .malloc_addr(malloc_addr),
        .dealloc_we(dealloc_we),
        .dealloc_wdata(dealloc_wdata),
        .dealloc_addr(dealloc_addr),
        .malloc_rdata(malloc_rdata),
        .dealloc_rdata(dealloc_rdata),
        .bsy(act_bsy)
    );

endmodule