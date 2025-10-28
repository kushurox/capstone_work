`include "mpu_common.svh"

parameter FIFO_DEPTH = 4;
parameter FIFO_DEPTH_BITS = 2;


 
module response_fifo(
    input  logic         clk,
    input  logic         rst_n,
    input  tl_d_channel  in_req,
    input  logic         enqueue,
    input  logic         dequeue,   // analogous to d_rdy
    output logic         d_valid,   
    output tl_d_channel  out_req,
    output logic fifo_rdy // unless queue_length is <= FIFO_DEPTH
);

    // FIFO storage
    (*ramstyle = "registers"*) tl_d_channel fifo_storage [FIFO_DEPTH-1:0];
    logic [FIFO_DEPTH_BITS:0] queue_length;
    logic [FIFO_DEPTH_BITS-1:0] head; // write pointer
    logic [FIFO_DEPTH_BITS-1:0] tail; // read pointer

    assign fifo_rdy = (queue_length != FIFO_DEPTH);

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
            if(enqueue && (queue_length < FIFO_DEPTH)) begin
                $display("ENQUEUED FROM MPU: data = %0h, source = %0h", in_req.data, in_req.source);
                fifo_storage[head] <= in_req;
                head <= head + 1;
                queue_length <= queue_length + 1;
            end
            if(dequeue && (queue_length > 0)) begin
                $display("DEQUEUED FROM RESP MPU: data = %0h, source = %0h, time=%t", fifo_storage[tail].data, fifo_storage[tail].source, $time);
                tail <= tail + 1;
                queue_length <= queue_length - 1;
            end
        end
    end
    assign d_valid = (queue_length>0);
    assign out_req = dequeue ? fifo_storage[tail] : '0;

endmodule