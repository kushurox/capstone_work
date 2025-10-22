// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vact_mem_tb.h for the primary calling header

#ifndef VERILATED_VACT_MEM_TB___024ROOT_H_
#define VERILATED_VACT_MEM_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vact_mem_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vact_mem_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ act_mem_tb__DOT__clk;
    CData/*0:0*/ act_mem_tb__DOT__rst_n;
    CData/*0:0*/ act_mem_tb__DOT__bsy;
    CData/*0:0*/ act_mem_tb__DOT__cs;
    CData/*0:0*/ act_mem_tb__DOT__malloc_dealloc;
    CData/*0:0*/ act_mem_tb__DOT__malloc_we;
    CData/*0:0*/ act_mem_tb__DOT__dealloc_we;
    CData/*0:0*/ act_mem_tb__DOT__dut__DOT__current_state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__act_mem_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__act_mem_tb__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__act_mem_tb__DOT__bsy__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ act_mem_tb__DOT__malloc_addr;
    SData/*9:0*/ act_mem_tb__DOT__dealloc_addr;
    SData/*10:0*/ act_mem_tb__DOT__dut__DOT__index;
    IData/*31:0*/ __VactIterCount;
    QData/*46:0*/ act_mem_tb__DOT__malloc_wdata;
    QData/*46:0*/ act_mem_tb__DOT__dealloc_wdata;
    QData/*46:0*/ act_mem_tb__DOT__malloc_rdata;
    QData/*46:0*/ act_mem_tb__DOT__dealloc_rdata;
    VlUnpacked<QData/*46:0*/, 1024> act_mem_tb__DOT__dut__DOT__act_mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h990cb9ed__0;
    VlTriggerScheduler __VtrigSched_hc39cdf13__0;
    VlTriggerScheduler __VtrigSched_h990cb9ac__0;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vact_mem_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vact_mem_tb___024root(Vact_mem_tb__Syms* symsp, const char* v__name);
    ~Vact_mem_tb___024root();
    VL_UNCOPYABLE(Vact_mem_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
