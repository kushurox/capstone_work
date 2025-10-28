`include "mpu_common.svh"

module mpu_tb;

    logic clk;
    logic rst_n;
    logic cs;
    logic cfg; // 1 for configure, 0 for access check
    logic [CORE_ID_WIDTH-1:0] core_id;
    addr_bits_t addr;
    data_bits_t wdata;
    logic free_reserve;
    logic we;
    logic rdy;
    logic bsy;
    logic [DATA_WIDTH-1:0] rdata;
    mpu_error_t err;

    mpu dut(
        .clk(clk),
        .rst_n(rst_n),
        .cs(cs),
        .cfg(cfg),
        .core_id(core_id),
        .addr(addr),
        .wdata(wdata),
        .free_reserve(free_reserve),
        .we(we),
        .rdy(rdy),
        .bsy(bsy),
        .rdata(rdata),
        .err(err)
    );

    always #5 clk = ~clk;

    initial begin
        $dumpfile("waveforms/mpu_tb.vcd");
        $dumpvars(2, mpu_tb);

        clk = 0;
        rst_n = 1;
        cs = 0;
        cfg = 0;
        core_id = '0;
        addr = '0;
        wdata = '0;
        free_reserve = 0;
        we = 0;

        @(posedge clk);
        rst_n = 0;
        @(posedge clk);
        rst_n = 1;

        wait(!bsy); // wait for reset to complete
        make_reservation(2, 4, 16'b1111, 16'b1100); // core 2, 4 blocks, read all, write first two
        @(posedge clk);
        make_reservation(1, 2, 16'b0011, 16'b0011); // core 1, 2 blocks, read/write last two

        @(posedge clk);
        $finish;


    end

    task automatic make_reservation(
        input logic [CORE_ID_WIDTH-1:0] t_core_id,
        input [BLOCK_COUNT_BITS-1:0] t_block_count,
        input logic [CORE_COUNT-1:0] t_read_mask,
        input logic [CORE_COUNT-1:0] t_write_mask,
    );
        @(negedge clk); // setting it up before next posedge
        core_id = t_core_id;
        addr.bits.size = t_block_count;
        wdata.bits.read_mask = t_read_mask;
        wdata.bits.write_mask = t_write_mask;
        free_reserve = 1;
        we = 0; // shouldnt matter for malloc
        cfg = 1; // configure
        cs = 1;
        @(negedge clk);
        cs = 0;
        @(posedge clk);
        wait(rdy);
        $display("base address allocated: %0h", rdata);
        dut.act_mem_inst.print_valid_entries();
    endtask

    task automatic release_reservation(
        input logic [CORE_ID_WIDTH-1:0] t_core_id,
        input addr_bits_t t_addr,
    );
        @(negedge clk); // setting it up before next posedge
        core_id = t_core_id;
        addr = t_addr;
        free_reserve = 0;
        we = 0; // shouldnt matter for dealloc
        cfg = 1; // configure
        cs = 1;
        @(negedge clk);
        cs = 0;
        @(posedge clk);
        wait(rdy);
        dut.act_mem_inst.print_valid_entries();
    endtask


endmodule