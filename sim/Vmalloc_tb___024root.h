// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmalloc_tb.h for the primary calling header

#ifndef VERILATED_VMALLOC_TB___024ROOT_H_
#define VERILATED_VMALLOC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmalloc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmalloc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ malloc_tb__DOT__clk;
    CData/*0:0*/ malloc_tb__DOT__rst_n;
    CData/*0:0*/ malloc_tb__DOT__rdy;
    CData/*0:0*/ malloc_tb__DOT__cs;
    CData/*3:0*/ malloc_tb__DOT__core_id;
    CData/*0:0*/ malloc_tb__DOT__bsy;
    CData/*1:0*/ malloc_tb__DOT__err;
    CData/*2:0*/ malloc_tb__DOT__dut__DOT__current_state;
    CData/*3:0*/ malloc_tb__DOT__dut__DOT__core_id_reg;
    CData/*0:0*/ __Vtrigprevexpr___TOP__malloc_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__malloc_tb__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__malloc_tb__DOT__rdy__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ malloc_tb__DOT__num_blocks;
    SData/*15:0*/ malloc_tb__DOT__read_mask;
    SData/*15:0*/ malloc_tb__DOT__write_mask;
    SData/*9:0*/ malloc_tb__DOT__dut__DOT__num_blocks_reg;
    SData/*15:0*/ malloc_tb__DOT__dut__DOT__read_mask_reg;
    SData/*15:0*/ malloc_tb__DOT__dut__DOT__write_mask_reg;
    SData/*10:0*/ malloc_tb__DOT__dut__DOT__left;
    SData/*10:0*/ malloc_tb__DOT__dut__DOT__right;
    SData/*10:0*/ malloc_tb__DOT__dut__DOT__reservation_counter;
    IData/*31:0*/ malloc_tb__DOT__base_addr;
    IData/*31:0*/ __VactIterCount;
    VlWide<15>/*479:0*/ malloc_tb__DOT____Vcellout__dut__act;
    QData/*47:0*/ malloc_tb__DOT__dut__DOT__e;
    QData/*47:0*/ malloc_tb__DOT__dut__DOT____Vlvbound_h0225cb74__0;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0f16816a__0;
    VlTriggerScheduler __VtrigSched_hf3646918__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmalloc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmalloc_tb___024root(Vmalloc_tb__Syms* symsp, const char* v__name);
    ~Vmalloc_tb___024root();
    VL_UNCOPYABLE(Vmalloc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
