`include "mpu_common.svh"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Design Name: TileLink Arbiter
// Module Name: ARB_TL_V1
// Project Name: Custom MPU for multicore RISC-V Environment
// Description: Round-robin + age-based TileLink arbiter
//////////////////////////////////////////////////////////////////////////////////

// ======================================================
// TileLink A and D Channel Struct Definitions
// ======================================================


// A CHANNEL

// D CHANNEL
typedef struct packed {
    logic [2:0]  opcode;
    logic [31:0] address;
    logic [31:0] data;
    logic [3:0]  source;
    logic        valid;
    logic        ready;
} tl_d_channel;

// ======================================================
// Arbiter Module
// ======================================================
module ARB_TL_V1 #(
   // parameter ADDRESS_WIDTH     = 32, 
     //parameter DATA_WIDTH        = 32,
   // parameter REQUEST_WIDTH     = 1,
    //parameter QUERY_WIDTH       = 1,
    //parameter READ_WRITE_WIDTH  = 1,
    parameter NUM_CORES         = 4,
   // parameter CORE_ID_WIDTH     = $clog2(NUM_CORES),
    parameter AGE_WIDTH         = 8
)(
    input  logic clk,
    input  logic rst_n,
    
    input  tl_a_channel [NUM_CORES-1:0] req,
    output tl_a_channel win_req,
    output logic [NUM_CORES-1:0] ack,
    
    input  logic a_ready,
    
    // D Channel
    output  logic d_ready,
    input  logic d_valid,
    input  tl_d_channel resp,
    output tl_d_channel [NUM_CORES-1:0] c_resp 
);

    // --------------------------------------------------
    // Internal Signals
    // --------------------------------------------------
    logic [AGE_WIDTH-1:0]      ages      [NUM_CORES];
    logic [31:0]  winner_id, next_winner_id;
    logic [31:0]  rr_ptr; 
    logic [AGE_WIDTH-1:0]      best_age;
    logic [NUM_CORES-1:0]      candidates;
    logic [31:0]  idx;
    //logic [31:0]  rr_ptr_next;
    logic found;

    typedef enum logic [1:0] {IDLE, GRANT} state_t;
    state_t cs, ns;

    //assign ages_dbg = ages;

    logic [NUM_CORES-1:0] reqs;   
    always_comb begin
        for (int i = 0; i < NUM_CORES; i++)begin
            reqs[i] = req[i].valid;
        end
    end

    // --------------------------------------------------
    // Next State Logic
    // --------------------------------------------------
    always_comb begin
        ns = cs;
        next_winner_id = winner_id;
        best_age   = '0;
        candidates = '0;
        idx='0;
        found=0;

        case (cs)
            IDLE: begin
                if (reqs != '0) begin
                    best_age   = '0;
                    candidates = '0;
                    //win_req = '0;
                    
                    // Find maximum age
                    for (int i = 0; i < NUM_CORES; i++) begin
                        if (reqs[i] && (ages[i] > best_age))
                            best_age = ages[i];
                    end

                    // Mark candidates with max age
                    for (int i = 0; i < NUM_CORES; i++) begin
                        if (reqs[i] && (ages[i] == best_age))
                            candidates[i] = 1'b1;
                    end

                    // Round robin selection among candidates
                    next_winner_id = '0;
                    found=0;
                    for (int offset = 0; offset < NUM_CORES; offset++) begin
                         
			idx = (offset + rr_ptr) % NUM_CORES;
                        
                        if (!found && candidates[idx]) begin
                            next_winner_id = idx;
                            found=1;
                        end
                    end
                    ns = GRANT;
                end
                else ns = IDLE;
            end

            GRANT: begin
              if (reqs[winner_id] && a_ready)  ns = IDLE;
              else ns=GRANT;
            end

            default: ns = IDLE;
        endcase
    end

    // --------------------------------------------------
    // State and Age Update Logic
    // --------------------------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cs         <= IDLE;
            winner_id  <= '0;
            ack        <= '0;
            rr_ptr     <= '0;
            for (int i = 0; i < NUM_CORES; i++)
                ages[i] <= '0;
        end 
        else begin
            cs        <= ns;
            winner_id <= next_winner_id;
            ack       <= '0;

            if (cs == GRANT) begin
            
                if (reqs[winner_id] && a_ready) begin
                    ack[winner_id] <= 1'b1;
                    rr_ptr <= (winner_id + 1) % NUM_CORES;
                   
                end
            

                // Update ages
                for (int i = 0; i < NUM_CORES; i++) begin
                    if (reqs[i]) begin
                        if (i == winner_id)
                            ages[i] <= '0;
                        else if (ages[i] != {AGE_WIDTH{1'b1}})
                            ages[i] <= ages[i] + 1'b1;
                    end
                end
            end
        end
    end

    // --------------------------------------------------
    // A-Channel Output (Winning Request)
    // --------------------------------------------------

    
always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        win_req <= '0;
    end
    else begin
        if (cs == IDLE && ns == GRANT ) begin
            // Load the request when GRANT is issued
            case (next_winner_id)
                0: win_req <= req[0];
                1: win_req <= req[1];
                2: win_req <= req[2];
                3: win_req <= req[3];
                default: win_req <= '0;
            endcase
        end
        else if (cs == GRANT) begin
            // HOLD during transition from GRANT ? IDLE
            win_req <= win_req;
        end
        else begin
            // Only clear if the winning request is dropped
            if (!reqs[winner_id])
                win_req <= '0;
        end
    end
end

    

    // --------------------------------------------------
    // D-Channel Routing Logic
    // --------------------------------------------------
    always_comb begin
        d_ready=1'b1;
        for (int i = 0; i < NUM_CORES; i++)
            c_resp[i] = '0;

        if (d_ready && d_valid) begin
            //c_resp[resp.source[CORE_ID_WIDTH-1:0]] = resp;
            case (resp.source)
                0: c_resp[0] = resp;
                1: c_resp[1] = resp;
                2: c_resp[2] = resp;
                3: c_resp[3] = resp;
            endcase
            
        end
    end

endmodule