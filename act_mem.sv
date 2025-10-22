`include "mpu_common.svh"

typedef enum logic {ACT_RESET, ACT_OP} act_state_t;

// module for access control table memory
// contains BLOCK_COUNT entries of type entry_t
// will never be accessed by multiple modules at the same time
// will never be read and written in the same cycle

module act_mem(
    input logic clk,
    input logic rst_n,
    input logic cs, // chip select
    input logic malloc_dealloc, // 0 for malloc, 1 for dealloc
    input logic malloc_we,
    input entry_t malloc_wdata,
    input logic [BLOCK_COUNT_BITS-1:0] malloc_addr,
    input logic dealloc_we,
    input entry_t dealloc_wdata,
    input logic [BLOCK_COUNT_BITS-1:0] dealloc_addr,
    output entry_t malloc_rdata,
    output entry_t dealloc_rdata,
    output logic bsy
);

    entry_t act_mem [0:BLOCK_COUNT-1];
    act_state_t current_state;
    logic [BLOCK_COUNT_BITS:0] index;

    always_ff @( posedge clk or negedge rst_n ) begin
        if(!rst_n) begin
            index <= 0;
            bsy <= 1;
            current_state <= ACT_RESET;
        end
        else begin
            if(current_state == ACT_RESET) begin
                if (index == BLOCK_COUNT) begin
                    current_state <= ACT_OP;
                    bsy <= 0;
                    // don't forget to wait a cycle after reset before starting operations. raising cs while bsy is going to low doesnt work
                end
                act_mem[index[BLOCK_COUNT_BITS-1:0]] <= '0;
                index <= index + 1;
            end
            else begin
                if(cs) begin
                    if(!malloc_dealloc) begin // malloc chosen
                        if(malloc_we) begin
                            act_mem[malloc_addr] <= malloc_wdata;
                        end
                        else begin 
                            malloc_rdata <= act_mem[malloc_addr];
                        end
                    end
                    else begin
                        // dealloc chosen
                        if(dealloc_we) act_mem[dealloc_addr] <= dealloc_wdata;
                        else dealloc_rdata <= act_mem[dealloc_addr];
                    end
                end
            end
        end
    end

    task automatic write(input logic [BLOCK_COUNT_BITS-1:0] addr, input entry_t data);
        act_mem[addr] = data;
    endtask

    task automatic read(input logic [BLOCK_COUNT_BITS-1:0] addr);
        entry_t data = act_mem[addr];
        $display("ACT_MEM READ TASK: addr=%0d, valid=%0b, write_mask=0x%0h, read_mask=0x%0h, core_id=%0d, reservation_id=%0d", addr, data.valid, data.write_mask, data.read_mask, data.owner, data.reservation_id);
    endtask

    task automatic print_valid_entries();
        for(int i=0; i<BLOCK_COUNT; i++) begin
            if(act_mem[i].valid) begin
                $display("ACT[%0d]: owner_core_id=%0d, read_mask=0x%0h, write_mask=0x%0h, reservation_id=%0d", i, act_mem[i].owner, act_mem[i].read_mask, act_mem[i].write_mask, act_mem[i].reservation_id);
            end
        end
    endtask

    task automatic reset_mem();
        index = 0;
        current_state = ACT_RESET;
        bsy = 1;
    endtask

endmodule