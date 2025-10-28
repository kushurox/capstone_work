`include "mpu_common.svh"





module reqs_fifo#(parameter FIFO_DEPTH = 6,
parameter FIFO_DEPTH_BITS = $clog2(FIFO_DEPTH))(
    input  logic         clk,
    input  logic         rst_n,
    input  tl_a_channel  in_req,
    input  logic         enqueue,
    input logic          dequeue,
    output logic mpu_cs,
    output logic          rdy,        // for tilelink handshake (from receiver to sender)
    output tl_a_channel  out_req
   // output logic         valid,      // for tilelink handshake (from sender to receiver)
);

    // fifo storage
    (*ramstyle = "registers"*) tl_a_channel fifo_storage [FIFO_DEPTH-1:0];
    logic [FIFO_DEPTH_BITS:0] queue_length;
    logic [FIFO_DEPTH_BITS-1:0] head; // write pointer
    logic [FIFO_DEPTH_BITS-1:0] tail; // read pointer

    assign rdy = (queue_length<FIFO_DEPTH);
    assign out_req = (queue_length>0)?fifo_storage[tail]:'0;
    assign mpu_cs = (queue_length>0);

    
    // Enqueue logic
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            head <= '0;
            tail <= '0;
            queue_length <= '0;
            for(logic [FIFO_DEPTH_BITS:0] i = 0; i < FIFO_DEPTH; i++) begin
                fifo_storage[i[FIFO_DEPTH_BITS-1:0]] <= '0;
            end
        end
        else begin
            if(enqueue && (queue_length < FIFO_DEPTH) && in_req.valid) begin
                $display("ENQUEUE req, time=%0t: %0d", $time, in_req);
                fifo_storage[head] <= in_req;
                head <= head + 1;
                queue_length <= queue_length + 1;
            end
            //if nothing is dequeuing, tail doesnt move -> out_req the same indefinetley.
            if(dequeue && (queue_length > 0)) begin
                $display("DEQUEUE req, time=%0t: %0d", $time, fifo_storage[tail]);
                tail <= tail + 1;
                queue_length <= queue_length - 1;
            end
        end
    end

    task automatic print_head_tail();
        $display("FIFO Head: %0d, Tail: %0d, Length: %0d", head, tail, queue_length);
        $display("FIFO HEAD: %0h, FIFO TAIL: %0h", fifo_storage[head], fifo_storage[tail]);
    endtask

    task automatic print_fifo_contents();
        $display("FIFO Contents:");
        for(logic [FIFO_DEPTH_BITS:0] i = 0; i < FIFO_DEPTH; i++) begin
            $display("Index %0d: %0d", i, fifo_storage[i[FIFO_DEPTH_BITS-1:0]]);
        end
    endtask

endmodule