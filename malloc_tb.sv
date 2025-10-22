`include "mpu_common.svh"

module malloc_revised_tb;

    logic clk;
    longint cycle_count = 0;
    logic rst_n;

    logic act_mem_cs;
    logic malloc_we;
    entry_t malloc_wdata;
    logic [BLOCK_COUNT_BITS-1:0] malloc_addr;
    entry_t malloc_rdata;

    logic mem_bsy;

    logic malloc_cs;
    logic [CORE_ID_WIDTH-1:0] core_id;
    logic [BLOCK_COUNT_BITS-1:0] num_blocks;
    logic [CORE_COUNT-1:0] read_mask;
    logic [CORE_COUNT-1:0] write_mask;
    logic [ADDR_WIDTH-1:0] base_addr;
    logic rdy;
    logic malloc_bsy;
    logic err;

    logic malloc_dequeue;
    logic [BLOCK_COUNT_BITS-1:0] reservation_id;

    logic queue_rdy;
    logic queue_full;
    logic queue_empty;


    act_mem act_mem_inst (
        .clk(clk),
        .rst_n(rst_n),
        .cs(act_mem_cs),
        .malloc_dealloc('0),
        .malloc_we(malloc_we),
        .malloc_wdata(malloc_wdata),
        .malloc_addr(malloc_addr),
        .dealloc_we(0),
        .dealloc_wdata('0),
        .dealloc_addr('0),
        .malloc_rdata(malloc_rdata),
        .dealloc_rdata(),
        .bsy(mem_bsy)
    );

    reservation_counter reservation_counter_inst (
        .clk(clk),
        .rst_n(rst_n),
        .dequeue(malloc_dequeue),
        .new_reservation_id(reservation_id),
        .freed_reservation_id('0),
        .enqueue(1'b0),
        .full(queue_full),
        .empty(queue_empty),
        .rdy(queue_rdy)
    );

    malloc dut ( 
        .clk(clk),
        .rst_n(rst_n),
        .cs(malloc_cs),
        .core_id(core_id),
        .num_blocks(num_blocks),
        .read_mask(read_mask),
        .write_mask(write_mask),
        .act_rdata(malloc_rdata),
        .reservation_id(reservation_id),
        .act_cs(act_mem_cs),
        .act_we(malloc_we),
        .act_wdata(malloc_wdata),
        .act_addr(malloc_addr),
        .base_addr(base_addr),
        .rdy(rdy),
        .bsy(malloc_bsy),
        .err(err),
        .reservation_dequeue(malloc_dequeue)
    );

    always #5 begin
        clk = ~clk;
        cycle_count = cycle_count + 1;
    end

    initial begin

        $dumpfile("malloc_revised_tb.vcd");
        $dumpvars(1, malloc_revised_tb);
        clk = 0;
        rst_n = 1;
        act_mem_cs = 0;
        malloc_we = 0;
        malloc_wdata = '0;
        malloc_addr = '0;
        malloc_cs = 0;
        core_id = 0;
        num_blocks = 0;
        read_mask = 0;
        write_mask = 0;
        @(posedge clk);
        rst_n = 0;
        @(posedge clk);
        rst_n = 1;
        @(posedge clk);
        wait(!mem_bsy);
        $display("act_mem initialized, cycle: %0d", cycle_count);

        // test malloc
        // make reservation for core 1, 4 blocks
        request_malloc(1, 4, 16'b1111, 16'b1111);

        // make reservation for core 2, 2 blocks
        request_malloc(2, 2, 16'b1011, 16'b1101);

        print_valid_entries();


        $finish;

    end

    task automatic request_malloc(input logic [CORE_ID_WIDTH-1:0] core_id_in, input logic [BLOCK_COUNT_BITS-1:0] num_blocks_in, input logic [CORE_COUNT-1:0] read_mask_in, input logic [CORE_COUNT-1:0] write_mask_in);
        $display("Requesting malloc: core_id=%0d, num_blocks=%0d, read_mask=0x%0h, write_mask=0x%0h", core_id_in, num_blocks_in, read_mask_in, write_mask_in);
        @(posedge clk);
        @(negedge clk);
        #5;
        malloc_cs = 1;
        core_id = core_id_in;
        num_blocks = num_blocks_in;
        read_mask = read_mask_in;
        write_mask = write_mask_in;
        @(negedge clk);
        malloc_cs = 0;
        core_id = 0;
        num_blocks = 0;
        read_mask = 0;
        write_mask = 0;
        wait(rdy);
        // get dut err and base_addr
        $display("DUT error: %0d, base_addr: 0x%0h", err, base_addr);
    endtask

    task automatic print_valid_entries();
        for(int i=0; i<BLOCK_COUNT; i++) begin
            if(act_mem_inst.act_mem[i].valid) begin
                $display("ACT[%0d]: owner_core_id=%0d, read_mask=0x%0h, write_mask=0x%0h, reservation_id=%0d", i, act_mem_inst.act_mem[i].owner, act_mem_inst.act_mem[i].read_mask, act_mem_inst.act_mem[i].write_mask, act_mem_inst.act_mem[i].reservation_id);
            end
        end
    endtask

endmodule