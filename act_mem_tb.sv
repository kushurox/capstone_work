`include "mpu_common.svh"

module act_mem_tb;

    logic clk;
    logic rst_n;
    logic cs;

    logic malloc_dealloc;
    logic malloc_we;
    entry_t malloc_wdata;
    logic [BLOCK_COUNT_BITS-1:0] malloc_addr;
    logic dealloc_we;
    entry_t dealloc_wdata;
    logic [BLOCK_COUNT_BITS-1:0] dealloc_addr;
    entry_t malloc_rdata;
    entry_t dealloc_rdata;
    logic bsy;

    act_mem dut (
        .clk(clk),
        .rst_n(rst_n),
        .cs(cs),
        .malloc_dealloc(malloc_dealloc),
        .malloc_we(malloc_we),
        .malloc_wdata(malloc_wdata),
        .malloc_addr(malloc_addr),
        .dealloc_we(dealloc_we),
        .dealloc_wdata(dealloc_wdata),
        .dealloc_addr(dealloc_addr),
        .malloc_rdata(malloc_rdata),
        .dealloc_rdata(dealloc_rdata),
        .bsy(bsy)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 10 time units clock period
    end

    initial begin
        $dumpfile("act_mem_tb.vcd");
        $dumpvars(1, act_mem_tb);

        // Reset the DUT
        reset_mem();

        // Test write and read operations
        write_entry(1, 5, '{1, 16'b0000_0000_0000_1111, 16'b1111_0000_0000_0000, 3, 5});
        write_entry(1, 10, '{1, 16'b1111_1111_1111_1111, 16'b0000_0000_0000_0000, 7, 10});
        
        read_entry(0, 5);
        read_entry(1, 10);

        // Finish simulation
        print_valid_entries();
        $finish;
    end

    task automatic reset_mem();
        rst_n = 1;
        malloc_dealloc = 0;
        malloc_we = 0;
        malloc_wdata = '0;
        malloc_addr = '0;
        dealloc_we = 0;
        dealloc_wdata = '0;
        dealloc_addr = '0;
        @(posedge clk);
        rst_n = 0;
        $display("ACT_MEM_TB: Resetting memory...");
        @(posedge clk);
        rst_n = 1;
        @(negedge bsy);
        @(posedge clk);
        $display("ACT_MEM_TB: Memory reset complete");
    endtask

    task automatic write_entry(
        input logic malloc_or_dealloc, // 0 for malloc, 1 for dealloc
        input logic [BLOCK_COUNT_BITS-1:0] addr,
        input entry_t data
    );
        begin
            if(malloc_or_dealloc == 0) begin
                cs = 1;
                malloc_dealloc = 0;
                malloc_we = 1;
                malloc_addr = addr;
                malloc_wdata = data;
            end
            else begin
                cs = 1;
                malloc_dealloc = 1;
                dealloc_we = 1;
                dealloc_addr = addr;
                dealloc_wdata = data;
            end
            @(negedge clk);
            malloc_we = 0;
            cs = 0;
            dealloc_we = 0;
            @(posedge clk);
        end
    endtask

    task automatic read_entry(
        input logic malloc_or_dealloc, // 0 for malloc, 1 for dealloc
        input logic [BLOCK_COUNT_BITS-1:0] addr,
    );
        begin
            if(malloc_or_dealloc == 0) begin
                cs = 1;
                malloc_dealloc = 0;
                malloc_we = 0;
                malloc_addr = addr;
            end
            else begin
                cs = 1;
                malloc_dealloc = 1;
                dealloc_we = 0;
                dealloc_addr = addr;
            end
            @(negedge clk);
            cs = 0;
            @(posedge clk);
            if(malloc_or_dealloc == 0) begin
                // displays the act's entry data
                $display("MALLOC_READ: reservation_id=%0d, owner=%0d, read_mask=%b, write_mask=%b, valid=%b",
                    malloc_rdata.reservation_id,
                    malloc_rdata.owner,
                    malloc_rdata.read_mask,
                    malloc_rdata.write_mask,
                    malloc_rdata.valid
                );
            end
            else begin
                $display("DEALLOC_READ: reservation_id=%0d, owner=%0d, read_mask=%b, write_mask=%b, valid=%b",
                    dealloc_rdata.reservation_id,
                    dealloc_rdata.owner,
                    dealloc_rdata.read_mask,
                    dealloc_rdata.write_mask,
                    dealloc_rdata.valid
                );
            end
        end
    endtask

    task automatic print_valid_entries();
        entry_t e;
        for(int i=0; i<BLOCK_COUNT; i++) begin
            e = dut.act_mem[i];
            if(e.valid) begin
                $display("VALID ENTRY at addr %0d: reservation_id=%0d, owner=%0d, read_mask=%b, write_mask=%b, valid=%b",
                    i,
                    e.reservation_id,
                    e.owner,
                    e.read_mask,
                    e.write_mask,
                    e.valid
                );
            end
        end
    endtask

endmodule