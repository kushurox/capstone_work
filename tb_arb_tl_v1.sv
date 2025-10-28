`include "mpu_common.svh"

module tb_ARB_TL_V1;

    // Parameters
    parameter NUM_CORES = 4;
    parameter AGE_WIDTH = 8;

    // Clock and reset
    logic clk;
    logic rst_n;

    // A-Channel (struct array)
    // typedef struct packed {
    //     logic [2:0]  opcode;
    //     logic [2:0]  param;
    //     logic [31:0] address;
    //     logic [31:0] data;
    //     logic [3:0]  source;
    //     logic        valid;
    //     logic        ready;
    // } tl_a_channel;

    tl_a_channel  [NUM_CORES-1:0] req;
    tl_a_channel win_req;

    logic [NUM_CORES-1:0] ack;

    logic mpu_cs;

    logic a_ready;
    tl_a_channel  in_req;
   // input  logic         enqueue,
    logic          dequeue;
    logic          rdy;        // for tilelink handshake (from receiver to sender)
    tl_a_channel  out_req;
    

    // D-Channel
    typedef struct packed {
        logic [2:0]  opcode;
        logic [31:0] address;
        logic [31:0] data;
        logic [3:0]  source;
        logic        valid;
        logic        ready;
    } tl_d_channel;

    logic d_ready, d_valid;
    tl_d_channel resp;
   // tl_d_channel c_resp [NUM_CORES];
    tl_d_channel [NUM_CORES-1:0] c_resp ;

    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk;  // 100MHz clock

    // Instantiate DUT
    ARB_TL_V1 dut (
        .clk(clk),
        .rst_n(rst_n),
        .req(req),
        .win_req(win_req),
        .ack(ack), 
        .a_ready(rdy),
        .d_ready(d_ready),
        .d_valid(d_valid),
        .resp(resp),
        .c_resp(c_resp)
    );
    reqs_fifo dut2(
    .clk(clk),
    .rst_n(rst_n),
    .enqueue(win_req.valid&rdy&(|ack)),
    .in_req(win_req),
    .rdy(rdy),
    .dequeue(!mpu_bsy && mpu_cs),
    .out_req(out_req),
    .mpu_cs(mpu_cs)
    );

    logic [DATA_WIDTH-1:0] rdata;
    mpu_error_t err;
    logic mpu_rdy, mpu_bsy;

    mpu mpu_inst(
        .clk(clk),
        .rst_n(rst_n),
        .cs(mpu_cs),
        .cfg(out_req.opcode[0]), // for now out_req.opcode[0] decides free/reserve
        .we(out_req.opcode[1]), // for now out_req.opcode[1] decides read/write
        .core_id(out_req.source),
        .free_reserve(out_req.opcode[2]), // for now out_req.opcode[2] decides free(0)/reserve(1)
        .addr(out_req.address),
        .wdata(out_req.data),
        .rdata(rdata),
        .err(err),
        .rdy(mpu_rdy),
        .bsy(mpu_bsy)
    );

    addr_bits_t addr_cool;

    // Stimulus
    initial begin 
        rst_n = 0; 
        a_ready = 0;
        //d_ready = 1;
        d_valid = 0;

// Initialize all request fields to avoid Xs
for (int i = 0; i < NUM_CORES; i++) begin
    req[i].valid   = 0;
    req[i].ready   = 0;
    req[i].opcode  = '0;
    req[i].param   = '0;
    req[i].address = '0;
    req[i].data    = '0;
    req[i].source  = 4'(i);
end


        // Reset
        #10;
        rst_n = 1;
    //    a_ready = 1;
    
     // Issue 4 Requests
           addr_cool.bits.fr = 1; // reserve
           addr_cool.bits.size = 4; // 4 blocks
           req[0].valid = 1; req[0].ready = 1;
           req[0].opcode = 3'b101; req[0].address = addr_cool; req[0].data = 32'hFFFFFFFF;
   
           addr_cool.bits.fr = 1; // reserve
           addr_cool.bits.size = 6; // 6 blocks
           req[1].valid = 1; req[1].ready = 1;
           req[1].opcode = 3'b101; req[1].address = addr_cool; req[1].data = 32'hFFFFFFFF;

           wait(ack[0]); req[0].valid = 0;
           $display("win_req = %0d", win_req);

           wait(ack[1]); req[1].valid = 0;
           $display("win_req = %0d", win_req);


           req[0].valid = 1; req[0].ready = 1;
           req[0].opcode = 3'b010; req[0].address = 'h0; req[0].data = 32'hFFFF;

           wait(ack[0]); req[0].valid = 0;

           @(posedge clk);
           @(posedge clk);

           req[0].valid = 1; req[0].ready = 1;
           req[0].opcode = 3'b000; req[0].address = 'h0; req[0].data = 32'hFFFF;
           wait(ack[0]); req[0].valid = 0;

           $display("All requests issued");



        @(posedge clk);

        // Provide D-channel response
        d_valid = 1;
        resp.source  = 3;
        resp.opcode  = 3;
        resp.address = 32'd3;
        resp.data    = 32'd33;
        resp.valid=1;
        resp.ready=1;
        #10;

        dut2.print_fifo_contents();
        
        

    end

    // Monitor outputs
    initial begin
        // $monitor("t=%0t | win_core=%0d valid=%b ack=%b", 
        //           $time, win_req.source, win_req.valid, ack);

    end

endmodule