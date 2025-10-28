// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ARB_TL_V1.h for the primary calling header

#ifndef VERILATED_VTB_ARB_TL_V1___024ROOT_H_
#define VERILATED_VTB_ARB_TL_V1___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ARB_TL_V1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ARB_TL_V1___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_ARB_TL_V1__DOT__clk;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__rst_n;
        CData/*3:0*/ tb_ARB_TL_V1__DOT__ack;
        CData/*0:0*/ tb_ARB_TL_V1__DOT____Vcellinp__dut2__dequeue;
        CData/*0:0*/ tb_ARB_TL_V1__DOT____Vcellinp__dut2__enqueue;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_bsy;
        CData/*0:0*/ tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__free_reserve;
        CData/*3:0*/ tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__core_id;
        CData/*0:0*/ tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__we;
        CData/*0:0*/ tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__cfg;
        CData/*1:0*/ tb_ARB_TL_V1__DOT__dut__DOT__cs;
        CData/*1:0*/ tb_ARB_TL_V1__DOT__dut__DOT__ns;
        CData/*3:0*/ tb_ARB_TL_V1__DOT__dut__DOT__reqs;
        CData/*3:0*/ tb_ARB_TL_V1__DOT__dut2__DOT__queue_length;
        CData/*2:0*/ tb_ARB_TL_V1__DOT__dut2__DOT__head;
        CData/*2:0*/ tb_ARB_TL_V1__DOT__dut2__DOT__tail;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_cs;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_cs;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_cs;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_cs;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_cs;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_act_cs;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_rdy;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_rdy;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_bsy;
        CData/*1:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_sender;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_dequeue;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_enqueue;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_full;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_rdy;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_we;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_err;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_we;
        CData/*3:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__we_reg;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_result;
        CData/*2:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__current_state;
        CData/*1:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_inst__DOT__current_state;
        CData/*2:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state;
        CData/*3:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__core_id_reg;
        CData/*2:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__current_state;
        CData/*3:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__core_id_reg;
        CData/*0:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__from;
        CData/*3:0*/ __Vdly__tb_ARB_TL_V1__DOT__dut2__DOT__queue_length;
        CData/*0:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_bsy;
        CData/*0:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_rdy;
        CData/*0:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__access_check_result;
        CData/*0:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_rdy;
        CData/*2:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__current_state;
        CData/*0:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_cs;
        CData/*3:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__core_id_reg;
        CData/*2:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__current_state;
        CData/*0:0*/ __VdlySet__tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ARB_TL_V1__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ARB_TL_V1__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr_h60381e42__0;
        CData/*0:0*/ __Vtrigprevexpr_h603e4c74__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_from_counter;
        SData/*9:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_to_counter;
    };
    struct {
        SData/*9:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_addr;
        SData/*9:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_addr;
        SData/*9:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__check_act_addr;
        SData/*10:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__index;
        SData/*9:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__num_blocks_reg;
        SData/*15:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__read_mask_reg;
        SData/*15:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__write_mask_reg;
        SData/*9:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__reservation_id_reg;
        SData/*10:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left;
        SData/*10:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right;
        SData/*9:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__block_index;
        SData/*9:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_inst__DOT__reservation_id;
        SData/*10:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__queue_length;
        SData/*9:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__left;
        SData/*9:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__right;
        SData/*10:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i;
        SData/*9:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_id_from_counter;
        SData/*9:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__reservation_id_reg;
        SData/*10:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__left;
        SData/*10:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_inst__DOT__right;
        IData/*31:0*/ tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__wdata;
        IData/*31:0*/ tb_ARB_TL_V1__DOT____Vcellinp__mpu_inst__addr;
        IData/*31:0*/ tb_ARB_TL_V1__DOT__addr_cool;
        IData/*31:0*/ tb_ARB_TL_V1__DOT__dut__DOT__winner_id;
        IData/*31:0*/ tb_ARB_TL_V1__DOT__dut__DOT__next_winner_id;
        IData/*31:0*/ tb_ARB_TL_V1__DOT__dut__DOT__rr_ptr;
        IData/*31:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_base_addr;
        IData/*31:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg;
        IData/*31:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg;
        IData/*31:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__addr_reg;
        IData/*31:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__wdata_reg;
        IData/*31:0*/ __VactIterCount;
        VlWide<10>/*303:0*/ tb_ARB_TL_V1__DOT__req;
        VlWide<3>/*75:0*/ tb_ARB_TL_V1__DOT__win_req;
        VlWide<3>/*75:0*/ tb_ARB_TL_V1__DOT__dut2__DOT____Vlvbound_h0ac5ac17__0;
        QData/*46:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_malloc_rdata;
        QData/*46:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_dealloc_rdata;
        QData/*46:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_check_rdata;
        QData/*46:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__malloc_act_wdata;
        QData/*46:0*/ tb_ARB_TL_V1__DOT__mpu_inst__DOT__dealloc_act_wdata;
        QData/*46:0*/ __Vdly__tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_malloc_rdata;
        VlUnpacked<CData/*7:0*/, 4> tb_ARB_TL_V1__DOT__dut__DOT__ages;
        VlUnpacked<VlWide<3>/*75:0*/, 6> tb_ARB_TL_V1__DOT__dut2__DOT__fifo_storage;
        VlUnpacked<IData/*31:0*/, 262144> tb_ARB_TL_V1__DOT__mpu_inst__DOT__memory;
        VlUnpacked<QData/*46:0*/, 1024> tb_ARB_TL_V1__DOT__mpu_inst__DOT__act_mem_inst__DOT__act_mem;
        VlUnpacked<SData/*9:0*/, 1024> tb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids;
    };
    VlNBACommitQueue<VlUnpacked<SData/*9:0*/, 1024>, false, SData/*9:0*/, 1> __VdlyCommitQueuetb_ARB_TL_V1__DOT__mpu_inst__DOT__reservation_counter_inst__DOT__reservation_ids;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc8006972__0;
    VlTriggerScheduler __VtrigSched_hc809928c__0;
    VlTriggerScheduler __VtrigSched_h7f6617e2__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ARB_TL_V1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ARB_TL_V1___024root(Vtb_ARB_TL_V1__Syms* symsp, const char* v__name);
    ~Vtb_ARB_TL_V1___024root();
    VL_UNCOPYABLE(Vtb_ARB_TL_V1___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
