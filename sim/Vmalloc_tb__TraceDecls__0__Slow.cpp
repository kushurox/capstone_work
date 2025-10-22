// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vmalloc_tb___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"MALLOC_NO_ERROR", "OUT_OF_MEMORY"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(1, "$unit::malloc_error_t", 2, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MALLOC_IDLE", "MALLOC_SEARCH_LEFT", "MALLOC_SEARCH_RIGHT", 
                                "MALLOC_FOUND", "MALLOC_RESULT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100"};
        tracep->declDTypeEnum(2, "$unit::malloc_state_t", 5, 3, __VenumItemNames, __VenumItemValues);
    }
}

void Vmalloc_tb___024root__trace_decl_types(VerilatedFst* tracep) {
    Vmalloc_tb___024root__traceDeclTypesSub0(tracep);
}
