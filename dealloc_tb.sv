`include "mpu_common.svh"

module dealloc_tb;
    
    logic clk;
    logic rst_n;

    logic dealloc_cs;
    logic [ADDR_WIDTH-1:0] dealloc_addr;
    logic [CORE_ID_WIDTH-1:0] dealloc_core_id;
    entry_t dealloc_act_rdata;
    logic dealloc_act_cs;
    logic dealloc_act_we;
    entry_t dealloc_act_wdata;
    logic [BLOCK_COUNT_BITS-1:0] dealloc_act_addr;
    logic dealloc_bsy;
    logic dealloc_rdy;
    logic dealloc_err;
    logic [BLOCK_COUNT_BITS-1:0] reservation_id_out;
    logic reservation_enqueue;

    logic [BLOCK_COUNT_BITS-1:0] dummy_reservation_id;
    logic act_bsy;

    act_mem act_mem_inst (
        .clk(clk),
        .rst_n(rst_n),
        .cs(dealloc_act_cs),
        .malloc_dealloc(1'b1),
        .malloc_we(1'b0),
        .malloc_wdata('0),
        .malloc_addr('0),
        .dealloc_we(dealloc_act_we),
        .dealloc_wdata(dealloc_act_wdata),
        .dealloc_addr(dealloc_act_addr),
        .malloc_rdata(),
        .dealloc_rdata(dealloc_act_rdata),
        .bsy(act_bsy)
    );

    reservation_counter reservation_counter_inst(
        .clk(clk),
        .rst_n(rst_n),
        .enqueue(reservation_enqueue),
        .dequeue(1'b0),
        .freed_reservation_id(reservation_id_out),
        .new_reservation_id(),
        .full(),
        .empty(),
        .rdy()
    );

    dealloc dealloc_inst(
        .clk(clk),
        .rst_n(rst_n),
        .cs(dealloc_cs),
        .addr(dealloc_addr),
        .core_id(dealloc_core_id),
        .act_rdata(dealloc_act_rdata),
        .act_cs(dealloc_act_cs),
        .act_we(dealloc_act_we),
        .act_wdata(dealloc_act_wdata),
        .act_addr(dealloc_act_addr),
        .reservation_id_out(reservation_id_out),
        .reservation_enqueue(reservation_enqueue),
        .bsy(dealloc_bsy),
        .rdy(dealloc_rdy),
        .err(dealloc_err)
    );

    always #5 clk = ~clk;

    initial begin
        clk = 0;
        rst_n = 1;
        dealloc_cs = 0;
        dealloc_addr = '0;
        dealloc_core_id = '0;

        @(posedge clk);
        rst_n = 0;
        @(posedge clk);
        rst_n = 1;
        @(posedge clk);
        wait(!act_bsy);

        $display("memory initialized");
        act_mem_inst.write(0, '{valid: 1'b1, write_mask: 16'hFF, read_mask: 16'hFF, owner: 4'd1, reservation_id: 0});
        act_mem_inst.write(1, '{valid: 1'b1, write_mask: 16'hFF, read_mask: 16'hFF, owner: 4'd1, reservation_id: 0});
        act_mem_inst.write(2, '{valid: 1'b1, write_mask: 16'h0A, read_mask: 16'h0C, owner: 4'd0, reservation_id: 1});
        act_mem_inst.write(3, '{valid: 1'b1, write_mask: 16'h0A, read_mask: 16'h0C, owner: 4'd0, reservation_id: 1});
        act_mem_inst.write(4, '{valid: 1'b1, write_mask: 16'hA0, read_mask: 16'hA0, owner: 4'd2, reservation_id: 2});
        act_mem_inst.write(5, '{valid: 1'b1, write_mask: 16'hFF, read_mask: 16'hFF, owner: 4'd2, reservation_id: 2});
        act_mem_inst.print_valid_entries();
        $display("starting deallocation tests");
        reservation_counter_inst.print_status();
        reservation_counter_inst._dequeue(dummy_reservation_id);
        reservation_counter_inst._dequeue(dummy_reservation_id);
        reservation_counter_inst._dequeue(dummy_reservation_id);
        reservation_counter_inst.print_status();
        reservation_counter_inst.print_head();
        reservation_counter_inst.print_tail();


        deallocate('0, 4'd2); // dealloc block 0 owned by core 1 by core 2 -> invalid
        deallocate(2<<REGION_SHIFT, 4'd0); // dealloc block 2 owned by core 0 by core 0 -> valid

        reservation_counter_inst.print_status();
        reservation_counter_inst.print_head();
        reservation_counter_inst.print_tail();
        act_mem_inst.print_valid_entries();
        $finish;
    end

    task automatic deallocate(input logic [ADDR_WIDTH-1:0] addr, input logic [CORE_ID_WIDTH-1:0] core_id);
        @(posedge clk);
        @(negedge clk);
        #5;
        dealloc_addr = addr;
        dealloc_core_id = core_id;
        dealloc_cs = 1'b1;
        @(negedge clk);
        dealloc_cs = 1'b0;
        wait(dealloc_rdy);
    endtask

endmodule
