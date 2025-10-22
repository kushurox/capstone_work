module reservation_counter_tb;

    logic clk;
    logic rst_n;
    logic enqueue;
    logic dequeue;
    logic [BLOCK_COUNT_BITS-1:0] freed_reservation_id;
    logic [BLOCK_COUNT_BITS-1:0] new_reservation_id;
    logic full;
    logic empty;
    logic rdy;

    reservation_counter dut (
        .clk(clk),
        .rst_n(rst_n),
        .enqueue(enqueue),
        .dequeue(dequeue),
        .freed_reservation_id(freed_reservation_id),
        .new_reservation_id(new_reservation_id),
        .full(full),
        .empty(empty),
        .rdy(rdy)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        rst_n = 1;
        enqueue = 0;
        dequeue = 0;
        freed_reservation_id = '0;
        #10;
        rst_n = 0;
        #10;
        rst_n = 1;
        #10;
        dequeue_all();
        enqueue_task(69);
        print_first(5);
        $finish;

    end

    task automatic dequeue_task();
        @(posedge clk);
        dequeue = 1;
        @(posedge clk);
        dequeue = 0;
        $display("Dequeued reservation id: %0d", new_reservation_id);
    endtask

    task automatic enqueue_task(input logic [BLOCK_COUNT_BITS-1:0] reservation_id_in);
        @(posedge clk);
        freed_reservation_id = reservation_id_in;
        enqueue = 1;
        @(posedge clk);
        enqueue = 0;
        $display("Enqueued reservation id: %0d", reservation_id_in);
    endtask

    task automatic print_first(int n);
        // uses internal left and right to print first n reservation ids
        logic [BLOCK_COUNT_BITS-1:0] temp_left;
        logic [BLOCK_COUNT_BITS-1:0] temp_right;
        temp_left = dut.left;
        temp_right = dut.right;
        if(dut.empty) begin
            $display("Reservation counter is empty.");
            return;
        end
        while(temp_left != temp_right && n > 0) begin
            $display("Reservation id at position %0d: %0d", temp_left, dut.reservation_ids[temp_left]);
            temp_left = temp_left + 1;
            n = n - 1;
        end
    endtask

    task automatic dequeue_all();
        while(!empty) begin
            dequeue_task();
        end
    endtask

endmodule