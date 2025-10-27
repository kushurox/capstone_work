`include "mpu_common.svh"

parameter FIFO_DEPTH = 4;
parameter FIFO_DEPTH_BITS = 2;

typedef struct packed {
    logic [2:0]  opcode;
    logic [31:0] address;
    logic [31:0] data;
    logic [3:0]  source;
    logic        valid;
    logic        ready;
} tl_d_channel;
 
module fifo_out_req(
    input  logic         clk,
    input  logic         rst_n,
    input  tl_d_channel  in_req,
    input  logic         enqueue,
    input  logic         dequeue,   // analogous to d_rdy
    output logic         d_valid,   
    output tl_d_channel  out_req
);

    // FIFO storage
    (*ramstyle = "registers"*) tl_d_channel fifo_storage [FIFO_DEPTH-1:0];
    logic [FIFO_DEPTH_BITS:0] queue_length;
    logic [FIFO_DEPTH_BITS-1:0] head; // write pointer
    logic [FIFO_DEPTH_BITS-1:0] tail; // read pointer
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
                fifo_storage[head] <= in_req;
                head <= head + 1;
                queue_length <= queue_length + 1;
            end
            if(dequeue && (queue_length > 0)) begin
                tail <= tail + 1;
                queue_length <= queue_length - 1;
            end
        end
    end

    assign out_req = dequeue ? fifo_storage[tail] : '0;

endmodule