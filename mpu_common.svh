`ifndef MPU_H
`define MPU_H
parameter ADDR_WIDTH = 32;
parameter DATA_WIDTH = 32;
parameter CORE_COUNT = 16; // cause of write mask and read mask core count has to be <= DATA_WIDTH/2
parameter SHARED_MEM_SIZE = 1 * 1024 * 1024; // 1MiB
parameter BLOCK_SIZE = 1024; // minimum block size in bytes

localparam CORE_ID_WIDTH = $clog2(CORE_COUNT); // bits required to represent core id
localparam BLOCK_COUNT = (SHARED_MEM_SIZE / BLOCK_SIZE); // number of blocks in shared memory
localparam BLOCK_COUNT_BITS = $clog2(SHARED_MEM_SIZE / BLOCK_SIZE); // bits required to represent block count
localparam REGION_SHIFT = $clog2(BLOCK_SIZE); // bits to shift address to get block number

typedef enum logic [2:0] { MPU_NO_ERROR, MPU_ACCESS_GRANTED, MPU_ACCESS_DENIED } mpu_error_t;
typedef enum logic [1:0] {MALLOC, DEALLOC, CHECK} act_op_t;

typedef union packed {
    logic [ADDR_WIDTH-1:0] addr;
    struct packed {
        logic   fr;   // free/reserve
        logic   [BLOCK_COUNT_BITS-1:0] size; // size to reserve/free. NOTE: size in blocks
        logic   [ADDR_WIDTH-BLOCK_COUNT_BITS-2:0] unused;
    } bits;
} addr_bits_t;


typedef union packed {
    logic [DATA_WIDTH-1:0] data;
    struct packed {
        logic [CORE_COUNT-1:0] write_mask;
        logic [CORE_COUNT-1:0] read_mask;
    } bits;
} data_bits_t;

typedef struct packed {
    logic valid;
    logic [CORE_COUNT-1:0] write_mask;
    logic [CORE_COUNT-1:0] read_mask;
    logic [CORE_ID_WIDTH-1:0] owner; // core id of the owner
    logic [BLOCK_COUNT_BITS-1: 0] reservation_id; // note that since reservation id is block_count + 1, we will never run into collisions after wrapping around
} entry_t;

typedef enum logic [2:0] { DEALLOC_IDLE, DEALLOC_READ, DEALLOC_FREE, DEALLOC_RESULT, DEALLOC_CHECK, LE, WE } dealloc_state_t;
typedef enum logic { DEALLOC_NO_ERROR, DEALLOC_INVALID_ADDR } dealloc_error_t;

typedef enum logic { MALLOC_NO_ERROR, OUT_OF_MEMORY } malloc_error_t;
typedef enum logic [2:0] { 
                            MALLOC_IDLE, MALLOC_SEARCH_LEFT, MALLOC_SEARCH_RIGHT, 
                            MALLOC_FOUND, MALLOC_RESULT, MALLOC_RESERVATION_ID0, 
                            MALLOC_RESERVATION_ID1, MALLOC_LOAD_E 
                        } malloc_state_t;

typedef enum logic {
    ACCESS_DENIED,
    ACCESS_GRANTED
} access_check_result_t;

typedef enum logic [1:0] {
    ACCESS_CHECK_IDLE,
    ACCESS_CHECK_READ,
    W,  // wait state for act to read data
    ACCESS_CHECK_RESULT
} access_check_state_t;

typedef struct packed {
    logic [2:0]            opcode;
    logic [2:0]            param;
    logic [31:0]           address;
    logic [31:0]           data;
    logic [3:0]            source;
    logic                  valid;
    logic                  ready;
} tl_a_channel;
`endif // MPU_H