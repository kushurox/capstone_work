`include "mpu_common.svh"


module reservation_counter(
    input logic clk,
    input logic rst_n,
    input logic enqueue,
    input logic dequeue,
    input logic [BLOCK_COUNT_BITS-1:0] freed_reservation_id,    // new available reservation id to enqueue. comes from deallocation unit
    output logic [BLOCK_COUNT_BITS-1:0] new_reservation_id,     // reservation id to dequeue. goes to malloc unit
    output logic full,
    output logic empty,
    output logic rdy
);
    // fifo, index 0 is next to dequeue
    (*ramstyle = "registers"*) logic [BLOCK_COUNT_BITS-1:0] reservation_ids [BLOCK_COUNT-1:0];
    logic [BLOCK_COUNT_BITS:0] queue_length;


    logic [BLOCK_COUNT_BITS-1:0] left;
    logic [BLOCK_COUNT_BITS-1:0] right;

    always_ff @( posedge clk or negedge rst_n ) begin
        if(!rst_n) begin
            rdy <= 1'b1;
            left <= '0;
            right <= '0;
            queue_length <= BLOCK_COUNT;
            new_reservation_id <= '0;
            for(logic [BLOCK_COUNT_BITS:0] i = 0; i < BLOCK_COUNT; i++) begin
                reservation_ids[i[BLOCK_COUNT_BITS-1:0]] <= i[BLOCK_COUNT_BITS-1:0];
            end
        end
        else begin
            if(enqueue && rdy && !full) begin
                $display("RESERVATION_COUNTER: Enqueue reservation id %0d", freed_reservation_id);
                reservation_ids[right] <= freed_reservation_id;
                right <= right + 1;
                queue_length <= queue_length + 1;
            end
            else if(dequeue && rdy && (queue_length > 0)) begin
                new_reservation_id <= reservation_ids[left];
                $display("RESERVATION_COUNTER: Dequeue reservation id %0d", reservation_ids[left]);
                $display("New Reservation head index: %0d", reservation_ids[left+1]);
                left <= left + 1;
                queue_length <= queue_length - 1;
            end
        end
    end

    assign full = (queue_length == BLOCK_COUNT);
    assign empty = (queue_length == 0);

    task automatic print_status();
        $display("RESERVATION_COUNTER STATUS: left=%0d, right=%0d, queue_length=%0d, full=%0b, empty=%0b", left, right, queue_length, full, empty);
    endtask

    task automatic print_head();
        if(queue_length > 0) begin
            $display("RESERVATION_COUNTER HEAD: reservation id=%0d", reservation_ids[left]);
        end
        else begin
            $display("RESERVATION_COUNTER HEAD: EMPTY");
        end
    endtask

    task automatic print_tail();
        if(queue_length > 0) begin
            $display("RESERVATION_COUNTER TAIL: reservation id=%0d", reservation_ids[right-1]); // ring buffer so right points to next free slot
        end
        else begin
            $display("RESERVATION_COUNTER TAIL: EMPTY");
        end
    endtask

    task automatic _dequeue(output logic [BLOCK_COUNT_BITS-1:0] reservation_id);
        if(queue_length > 0) begin
            reservation_id = reservation_ids[left];
            $display("RESERVATION_COUNTER TASK: Dequeued reservation id %0d", reservation_id);
            left = left + 1;
            queue_length = queue_length - 1;
        end
        else begin
            $display("RESERVATION_COUNTER TASK: Dequeue failed, queue is empty");
            reservation_id = '0;
        end
    endtask

endmodule