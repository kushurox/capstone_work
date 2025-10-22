// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vact_mem_tb___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"ACT_RESET", "ACT_OP"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(1, "$unit::act_state_t", 2, 1, __VenumItemNames, __VenumItemValues);
    }
}

void Vact_mem_tb___024root__trace_decl_types(VerilatedFst* tracep) {
    Vact_mem_tb___024root__traceDeclTypesSub0(tracep);
}
