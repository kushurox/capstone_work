`include "mpu_common.svh"



module access_check(
    input logic clk,
    input logic rst_n,
    input logic cs,
    input logic [CORE_ID_WIDTH-1:0] core_id,
    input logic [ADDR_WIDTH-1:0] addr,
    input logic we,
    input entry_t act_rdata,
    output access_check_result_t result,
    output logic bsy,
    output logic rdy,
    output logic act_cs,
    output logic [BLOCK_COUNT_BITS-1:0] act_addr
);

    access_check_state_t current_state;


    always_ff @( posedge clk or negedge rst_n ) begin
        if(!rst_n) begin
            current_state <= ACCESS_CHECK_IDLE;
            bsy <= 1'b0;
            rdy <= 1'b1;
            result <= ACCESS_DENIED;
            act_cs <= 1'b0;
            act_addr <= '0;
        end
        else begin
            case(current_state)
                ACCESS_CHECK_IDLE: begin
                    if(cs) begin
                        bsy <= 1'b1;
                        act_cs <= 1'b1;
                        act_addr <= BLOCK_COUNT_BITS'(addr >> REGION_SHIFT);
                        current_state <= W;
                    end
                end
                W: begin
                    act_cs <= '0;
                    current_state <= ACCESS_CHECK_READ;
                end
                ACCESS_CHECK_READ: begin
                    result <= (we ?
                                (act_rdata.write_mask[core_id] ? ACCESS_GRANTED : ACCESS_DENIED) :
                                (act_rdata.read_mask[core_id] ? ACCESS_GRANTED : ACCESS_DENIED)
                             );
                    rdy <= 1'b1;
                    current_state <= ACCESS_CHECK_RESULT;
                end
                ACCESS_CHECK_RESULT: begin
                    bsy <= 1'b0;
                    rdy <= 1'b0;
                    current_state <= ACCESS_CHECK_IDLE;
                end
            endcase
        end
    end


endmodule