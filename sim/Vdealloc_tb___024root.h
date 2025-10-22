// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdealloc_tb.h for the primary calling header

#ifndef VERILATED_VDEALLOC_TB___024ROOT_H_
#define VERILATED_VDEALLOC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdealloc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdealloc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ dealloc_tb__DOT__clk;
    CData/*0:0*/ dealloc_tb__DOT__rst_n;
    CData/*0:0*/ dealloc_tb__DOT__dealloc_cs;
    CData/*3:0*/ dealloc_tb__DOT__dealloc_core_id;
    CData/*0:0*/ dealloc_tb__DOT__dealloc_act_cs;
    CData/*0:0*/ dealloc_tb__DOT__dealloc_act_we;
    CData/*0:0*/ dealloc_tb__DOT__dealloc_bsy;
    CData/*0:0*/ dealloc_tb__DOT__dealloc_rdy;
    CData/*0:0*/ dealloc_tb__DOT__dealloc_err;
    CData/*0:0*/ dealloc_tb__DOT__reservation_enqueue;
    CData/*0:0*/ dealloc_tb__DOT__act_bsy;
    CData/*0:0*/ dealloc_tb__DOT__act_mem_inst__DOT__current_state;
    CData/*0:0*/ dealloc_tb__DOT__reservation_counter_inst__DOT__full;
    CData/*0:0*/ dealloc_tb__DOT__reservation_counter_inst__DOT__empty;
    CData/*0:0*/ dealloc_tb__DOT__reservation_counter_inst__DOT__rdy;
    CData/*2:0*/ dealloc_tb__DOT__dealloc_inst__DOT__current_state;
    CData/*3:0*/ dealloc_tb__DOT__dealloc_inst__DOT__core_id_reg;
    CData/*0:0*/ dealloc_tb__DOT__dealloc_inst__DOT__from;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dealloc_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dealloc_tb__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr_h98ba7952__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dealloc_tb__DOT__dealloc_rdy__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ dealloc_tb__DOT__dealloc_act_addr;
    SData/*9:0*/ dealloc_tb__DOT__reservation_id_out;
    SData/*9:0*/ dealloc_tb__DOT__dummy_reservation_id;
    SData/*10:0*/ dealloc_tb__DOT__act_mem_inst__DOT__index;
    SData/*9:0*/ dealloc_tb__DOT__reservation_counter_inst__DOT__new_reservation_id;
    SData/*10:0*/ dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length;
    SData/*9:0*/ dealloc_tb__DOT__reservation_counter_inst__DOT__left;
    SData/*9:0*/ dealloc_tb__DOT__reservation_counter_inst__DOT__right;
    SData/*10:0*/ dealloc_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i;
    SData/*9:0*/ dealloc_tb__DOT__dealloc_inst__DOT__block_index;
    SData/*9:0*/ dealloc_tb__DOT__dealloc_inst__DOT__reservation_id;
    IData/*31:0*/ dealloc_tb__DOT__dealloc_addr;
    IData/*31:0*/ __VactIterCount;
    QData/*46:0*/ dealloc_tb__DOT__dealloc_act_rdata;
    QData/*46:0*/ dealloc_tb__DOT__dealloc_act_wdata;
    QData/*46:0*/ dealloc_tb__DOT__act_mem_inst__DOT__malloc_rdata;
    VlUnpacked<QData/*46:0*/, 1024> dealloc_tb__DOT__act_mem_inst__DOT__act_mem;
    VlUnpacked<SData/*9:0*/, 1024> dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<SData/*9:0*/, 1024>, false, SData/*9:0*/, 1> __VdlyCommitQueuedealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3433110d__0;
    VlTriggerScheduler __VtrigSched_h0c8dbe42__0;
    VlTriggerScheduler __VtrigSched_h343309cc__0;
    VlTriggerScheduler __VtrigSched_h1770a44d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdealloc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdealloc_tb___024root(Vdealloc_tb__Syms* symsp, const char* v__name);
    ~Vdealloc_tb___024root();
    VL_UNCOPYABLE(Vdealloc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
