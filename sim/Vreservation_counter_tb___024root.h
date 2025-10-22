// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vreservation_counter_tb.h for the primary calling header

#ifndef VERILATED_VRESERVATION_COUNTER_TB___024ROOT_H_
#define VERILATED_VRESERVATION_COUNTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vreservation_counter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vreservation_counter_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ reservation_counter_tb__DOT__clk;
    CData/*0:0*/ reservation_counter_tb__DOT__rst_n;
    CData/*0:0*/ reservation_counter_tb__DOT__enqueue;
    CData/*0:0*/ reservation_counter_tb__DOT__dequeue;
    CData/*0:0*/ reservation_counter_tb__DOT__full;
    CData/*0:0*/ reservation_counter_tb__DOT__rdy;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reservation_counter_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reservation_counter_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ reservation_counter_tb__DOT__freed_reservation_id;
    SData/*9:0*/ reservation_counter_tb__DOT__new_reservation_id;
    SData/*10:0*/ reservation_counter_tb__DOT__dut__DOT__queue_length;
    SData/*9:0*/ reservation_counter_tb__DOT__dut__DOT__left;
    SData/*9:0*/ reservation_counter_tb__DOT__dut__DOT__right;
    SData/*10:0*/ reservation_counter_tb__DOT__dut__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*9:0*/, 1024> reservation_counter_tb__DOT__dut__DOT__reservation_ids;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<SData/*9:0*/, 1024>, false, SData/*9:0*/, 1> __VdlyCommitQueuereservation_counter_tb__DOT__dut__DOT__reservation_ids;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h13c28b1e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vreservation_counter_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vreservation_counter_tb___024root(Vreservation_counter_tb__Syms* symsp, const char* v__name);
    ~Vreservation_counter_tb___024root();
    VL_UNCOPYABLE(Vreservation_counter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
