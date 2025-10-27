`include "mpu_common.svh"

parameter FIFO_DEPTH = 4;
parameter FIFO_DEPTH_BITS = $clog2(FIFO_DEPTH);

typedef struct packed {
    logic [2:0]            opcode;
    logic [2:0]            param;
    logic [31:0]           address;
    logic [31:0]           data;
    logic [3:0]            source;
    logic                  valid;
    logic                  ready;
} tl_a_channel;

module reqs_fifo(
    input  logic         clk,
    input  logic         rst_n,
    input  tl_a_channel  in_req,
    input  logic         enqueue,
    input logic          dequeue,
    input logic          rdy,        // for tilelink handshake (from receiver to sender)
    output tl_a_channel  out_req,
    output logic         valid,      // for tilelink handshake (from sender to receiver)
);

    // fifo storage
    (*ramstyle = "registers"*) tl_a_channel fifo_storage [FIFO_DEPTH-1:0];
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

endmodule