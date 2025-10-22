// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vdealloc_tb___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"ACT_RESET", "ACT_OP"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(1, "$unit::act_state_t", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DEALLOC_NO_ERROR", "DEALLOC_INVALID_ADDR"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(2, "$unit::dealloc_error_t", 2, 1, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"DEALLOC_IDLE", "DEALLOC_READ", "DEALLOC_FREE", 
                                "DEALLOC_RESULT", "DEALLOC_CHECK", 
                                "LE", "WE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(3, "$unit::dealloc_state_t", 7, 3, __VenumItemNames, __VenumItemValues);
    }
}

void Vdealloc_tb___024root__trace_decl_types(VerilatedFst* tracep) {
    Vdealloc_tb___024root__traceDeclTypesSub0(tracep);
}
