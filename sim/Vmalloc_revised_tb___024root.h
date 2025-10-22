// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmalloc_revised_tb.h for the primary calling header

#ifndef VERILATED_VMALLOC_REVISED_TB___024ROOT_H_
#define VERILATED_VMALLOC_REVISED_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmalloc_revised_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmalloc_revised_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ malloc_revised_tb__DOT__clk;
    CData/*0:0*/ malloc_revised_tb__DOT__rst_n;
    CData/*0:0*/ malloc_revised_tb__DOT__act_mem_cs;
    CData/*0:0*/ malloc_revised_tb__DOT__malloc_we;
    CData/*0:0*/ malloc_revised_tb__DOT__mem_bsy;
    CData/*0:0*/ malloc_revised_tb__DOT__malloc_cs;
    CData/*3:0*/ malloc_revised_tb__DOT__core_id;
    CData/*0:0*/ malloc_revised_tb__DOT__rdy;
    CData/*0:0*/ malloc_revised_tb__DOT__malloc_bsy;
    CData/*0:0*/ malloc_revised_tb__DOT__err;
    CData/*0:0*/ malloc_revised_tb__DOT__malloc_dequeue;
    CData/*0:0*/ malloc_revised_tb__DOT__queue_rdy;
    CData/*0:0*/ malloc_revised_tb__DOT__act_mem_inst__DOT__current_state;
    CData/*2:0*/ malloc_revised_tb__DOT__dut__DOT__current_state;
    CData/*3:0*/ malloc_revised_tb__DOT__dut__DOT__core_id_reg;
    CData/*0:0*/ __Vtrigprevexpr___TOP__malloc_revised_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__malloc_revised_tb__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr_hdfdbb016__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__malloc_revised_tb__DOT__rdy__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ malloc_revised_tb__DOT__malloc_addr;
    SData/*9:0*/ malloc_revised_tb__DOT__num_blocks;
    SData/*15:0*/ malloc_revised_tb__DOT__read_mask;
    SData/*15:0*/ malloc_revised_tb__DOT__write_mask;
    SData/*9:0*/ malloc_revised_tb__DOT__reservation_id;
    SData/*10:0*/ malloc_revised_tb__DOT__act_mem_inst__DOT__index;
    SData/*10:0*/ malloc_revised_tb__DOT__reservation_counter_inst__DOT__queue_length;
    SData/*9:0*/ malloc_revised_tb__DOT__reservation_counter_inst__DOT__left;
    SData/*9:0*/ malloc_revised_tb__DOT__reservation_counter_inst__DOT__right;
    SData/*10:0*/ malloc_revised_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i;
    SData/*9:0*/ malloc_revised_tb__DOT__dut__DOT__num_blocks_reg;
    SData/*15:0*/ malloc_revised_tb__DOT__dut__DOT__read_mask_reg;
    SData/*15:0*/ malloc_revised_tb__DOT__dut__DOT__write_mask_reg;
    SData/*9:0*/ malloc_revised_tb__DOT__dut__DOT__reservation_id_reg;
    SData/*10:0*/ malloc_revised_tb__DOT__dut__DOT__left;
    SData/*10:0*/ malloc_revised_tb__DOT__dut__DOT__right;
    IData/*31:0*/ malloc_revised_tb__DOT__base_addr;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ malloc_revised_tb__DOT__cycle_count;
    QData/*46:0*/ malloc_revised_tb__DOT__malloc_wdata;
    QData/*46:0*/ malloc_revised_tb__DOT__malloc_rdata;
    QData/*46:0*/ malloc_revised_tb__DOT__act_mem_inst__DOT__dealloc_rdata;
    VlUnpacked<QData/*46:0*/, 1024> malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem;
    VlUnpacked<SData/*9:0*/, 1024> malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<SData/*9:0*/, 1024>, false, SData/*9:0*/, 1> __VdlyCommitQueuemalloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he432af85__0;
    VlTriggerScheduler __VtrigSched_h47ecf72e__0;
    VlTriggerScheduler __VtrigSched_he432b044__0;
    VlTriggerScheduler __VtrigSched_h2520cd0e__0;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmalloc_revised_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmalloc_revised_tb___024root(Vmalloc_revised_tb__Syms* symsp, const char* v__name);
    ~Vmalloc_revised_tb___024root();
    VL_UNCOPYABLE(Vmalloc_revised_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
