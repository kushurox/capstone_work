// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmalloc_revised_tb.h for the primary calling header

#include "Vmalloc_revised_tb__pch.h"
#include "Vmalloc_revised_tb__Syms.h"
#include "Vmalloc_revised_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmalloc_revised_tb___024root___eval_initial__TOP__Vtiming__0(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtask_malloc_revised_tb__DOT__request_malloc__0__core_id_in;
    __Vtask_malloc_revised_tb__DOT__request_malloc__0__core_id_in = 0;
    SData/*9:0*/ __Vtask_malloc_revised_tb__DOT__request_malloc__0__num_blocks_in;
    __Vtask_malloc_revised_tb__DOT__request_malloc__0__num_blocks_in = 0;
    SData/*15:0*/ __Vtask_malloc_revised_tb__DOT__request_malloc__0__read_mask_in;
    __Vtask_malloc_revised_tb__DOT__request_malloc__0__read_mask_in = 0;
    SData/*15:0*/ __Vtask_malloc_revised_tb__DOT__request_malloc__0__write_mask_in;
    __Vtask_malloc_revised_tb__DOT__request_malloc__0__write_mask_in = 0;
    CData/*3:0*/ __Vtask_malloc_revised_tb__DOT__request_malloc__1__core_id_in;
    __Vtask_malloc_revised_tb__DOT__request_malloc__1__core_id_in = 0;
    SData/*9:0*/ __Vtask_malloc_revised_tb__DOT__request_malloc__1__num_blocks_in;
    __Vtask_malloc_revised_tb__DOT__request_malloc__1__num_blocks_in = 0;
    SData/*15:0*/ __Vtask_malloc_revised_tb__DOT__request_malloc__1__read_mask_in;
    __Vtask_malloc_revised_tb__DOT__request_malloc__1__read_mask_in = 0;
    SData/*15:0*/ __Vtask_malloc_revised_tb__DOT__request_malloc__1__write_mask_in;
    __Vtask_malloc_revised_tb__DOT__request_malloc__1__write_mask_in = 0;
    IData/*31:0*/ __Vtask_malloc_revised_tb__DOT__print_valid_entries__2__unnamedblk1__DOT__i;
    __Vtask_malloc_revised_tb__DOT__print_valid_entries__2__unnamedblk1__DOT__i = 0;
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x645f7462U;
    __Vtemp_1[2U] = 0x76697365U;
    __Vtemp_1[3U] = 0x635f7265U;
    __Vtemp_1[4U] = 0x616c6c6fU;
    __Vtemp_1[5U] = 0x6dU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(6, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.malloc_revised_tb__DOT__clk = 0U;
    vlSelfRef.malloc_revised_tb__DOT__rst_n = 1U;
    vlSelfRef.malloc_revised_tb__DOT__act_mem_cs = 0U;
    vlSelfRef.malloc_revised_tb__DOT__malloc_we = 0U;
    vlSelfRef.malloc_revised_tb__DOT__malloc_wdata = 0ULL;
    vlSelfRef.malloc_revised_tb__DOT__malloc_addr = 0U;
    vlSelfRef.malloc_revised_tb__DOT__malloc_cs = 0U;
    vlSelfRef.malloc_revised_tb__DOT__core_id = 0U;
    vlSelfRef.malloc_revised_tb__DOT__num_blocks = 0U;
    vlSelfRef.malloc_revised_tb__DOT__read_mask = 0U;
    vlSelfRef.malloc_revised_tb__DOT__write_mask = 0U;
    co_await vlSelfRef.__VtrigSched_he432af85__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge malloc_revised_tb.clk)", 
                                                         "malloc_revised_tb.sv", 
                                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.malloc_revised_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_he432af85__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge malloc_revised_tb.clk)", 
                                                         "malloc_revised_tb.sv", 
                                                         106);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.malloc_revised_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_he432af85__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge malloc_revised_tb.clk)", 
                                                         "malloc_revised_tb.sv", 
                                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while (vlSelfRef.malloc_revised_tb__DOT__mem_bsy) {
        co_await vlSelfRef.__VtrigSched_h47ecf72e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ malloc_revised_tb.mem_bsy))", 
                                                             "malloc_revised_tb.sv", 
                                                             109);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("act_mem initialized, cycle: %0d\n",0,
                 64,vlSelfRef.malloc_revised_tb__DOT__cycle_count);
    __Vtask_malloc_revised_tb__DOT__request_malloc__0__write_mask_in = 0xfU;
    __Vtask_malloc_revised_tb__DOT__request_malloc__0__read_mask_in = 0xfU;
    __Vtask_malloc_revised_tb__DOT__request_malloc__0__num_blocks_in = 4U;
    __Vtask_malloc_revised_tb__DOT__request_malloc__0__core_id_in = 1U;
    VL_WRITEF_NX("Requesting malloc: core_id=%0#, num_blocks=%0#, read_mask=0x%0x, write_mask=0x%0x\n",0,
                 4,__Vtask_malloc_revised_tb__DOT__request_malloc__0__core_id_in,
                 10,(IData)(__Vtask_malloc_revised_tb__DOT__request_malloc__0__num_blocks_in),
                 16,__Vtask_malloc_revised_tb__DOT__request_malloc__0__read_mask_in,
                 16,(IData)(__Vtask_malloc_revised_tb__DOT__request_malloc__0__write_mask_in));
    co_await vlSelfRef.__VtrigSched_he432af85__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge malloc_revised_tb.clk)", 
                                                         "malloc_revised_tb.sv", 
                                                         128);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he432b044__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge malloc_revised_tb.clk)", 
                                                         "malloc_revised_tb.sv", 
                                                         129);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "malloc_revised_tb.sv", 
                                         130);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.malloc_revised_tb__DOT__malloc_cs = 1U;
    vlSelfRef.malloc_revised_tb__DOT__core_id = __Vtask_malloc_revised_tb__DOT__request_malloc__0__core_id_in;
    vlSelfRef.malloc_revised_tb__DOT__num_blocks = __Vtask_malloc_revised_tb__DOT__request_malloc__0__num_blocks_in;
    vlSelfRef.malloc_revised_tb__DOT__read_mask = __Vtask_malloc_revised_tb__DOT__request_malloc__0__read_mask_in;
    vlSelfRef.malloc_revised_tb__DOT__write_mask = __Vtask_malloc_revised_tb__DOT__request_malloc__0__write_mask_in;
    co_await vlSelfRef.__VtrigSched_he432b044__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge malloc_revised_tb.clk)", 
                                                         "malloc_revised_tb.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.malloc_revised_tb__DOT__malloc_cs = 0U;
    vlSelfRef.malloc_revised_tb__DOT__core_id = 0U;
    vlSelfRef.malloc_revised_tb__DOT__num_blocks = 0U;
    vlSelfRef.malloc_revised_tb__DOT__read_mask = 0U;
    vlSelfRef.malloc_revised_tb__DOT__write_mask = 0U;
    while ((1U & (~ (IData)(vlSelfRef.malloc_revised_tb__DOT__rdy)))) {
        co_await vlSelfRef.__VtrigSched_h2520cd0e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( malloc_revised_tb.rdy)", 
                                                             "malloc_revised_tb.sv", 
                                                             142);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("DUT error: %0#, base_addr: 0x%0x\n",0,
                 1,vlSelfRef.malloc_revised_tb__DOT__err,
                 32,vlSelfRef.malloc_revised_tb__DOT__base_addr);
    __Vtask_malloc_revised_tb__DOT__request_malloc__1__write_mask_in = 0xdU;
    __Vtask_malloc_revised_tb__DOT__request_malloc__1__read_mask_in = 0xbU;
    __Vtask_malloc_revised_tb__DOT__request_malloc__1__num_blocks_in = 2U;
    __Vtask_malloc_revised_tb__DOT__request_malloc__1__core_id_in = 2U;
    VL_WRITEF_NX("Requesting malloc: core_id=%0#, num_blocks=%0#, read_mask=0x%0x, write_mask=0x%0x\n",0,
                 4,__Vtask_malloc_revised_tb__DOT__request_malloc__1__core_id_in,
                 10,(IData)(__Vtask_malloc_revised_tb__DOT__request_malloc__1__num_blocks_in),
                 16,__Vtask_malloc_revised_tb__DOT__request_malloc__1__read_mask_in,
                 16,(IData)(__Vtask_malloc_revised_tb__DOT__request_malloc__1__write_mask_in));
    co_await vlSelfRef.__VtrigSched_he432af85__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge malloc_revised_tb.clk)", 
                                                         "malloc_revised_tb.sv", 
                                                         128);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he432b044__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge malloc_revised_tb.clk)", 
                                                         "malloc_revised_tb.sv", 
                                                         129);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "malloc_revised_tb.sv", 
                                         130);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.malloc_revised_tb__DOT__malloc_cs = 1U;
    vlSelfRef.malloc_revised_tb__DOT__core_id = __Vtask_malloc_revised_tb__DOT__request_malloc__1__core_id_in;
    vlSelfRef.malloc_revised_tb__DOT__num_blocks = __Vtask_malloc_revised_tb__DOT__request_malloc__1__num_blocks_in;
    vlSelfRef.malloc_revised_tb__DOT__read_mask = __Vtask_malloc_revised_tb__DOT__request_malloc__1__read_mask_in;
    vlSelfRef.malloc_revised_tb__DOT__write_mask = __Vtask_malloc_revised_tb__DOT__request_malloc__1__write_mask_in;
    co_await vlSelfRef.__VtrigSched_he432b044__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge malloc_revised_tb.clk)", 
                                                         "malloc_revised_tb.sv", 
                                                         136);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.malloc_revised_tb__DOT__malloc_cs = 0U;
    vlSelfRef.malloc_revised_tb__DOT__core_id = 0U;
    vlSelfRef.malloc_revised_tb__DOT__num_blocks = 0U;
    vlSelfRef.malloc_revised_tb__DOT__read_mask = 0U;
    vlSelfRef.malloc_revised_tb__DOT__write_mask = 0U;
    while ((1U & (~ (IData)(vlSelfRef.malloc_revised_tb__DOT__rdy)))) {
        co_await vlSelfRef.__VtrigSched_h2520cd0e__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( malloc_revised_tb.rdy)", 
                                                             "malloc_revised_tb.sv", 
                                                             142);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("DUT error: %0#, base_addr: 0x%0x\n",0,
                 1,vlSelfRef.malloc_revised_tb__DOT__err,
                 32,vlSelfRef.malloc_revised_tb__DOT__base_addr);
    __Vtask_malloc_revised_tb__DOT__print_valid_entries__2__unnamedblk1__DOT__i = 0;
    __Vtask_malloc_revised_tb__DOT__print_valid_entries__2__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, __Vtask_malloc_revised_tb__DOT__print_valid_entries__2__unnamedblk1__DOT__i)) {
        if (VL_UNLIKELY(((1U & (IData)((vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem
                                        [(0x3ffU & __Vtask_malloc_revised_tb__DOT__print_valid_entries__2__unnamedblk1__DOT__i)] 
                                        >> 0x2eU)))))) {
            VL_WRITEF_NX("ACT[%0d]: owner_core_id=%0#, read_mask=0x%0x, write_mask=0x%0x, reservation_id=%0#\n",0,
                         32,__Vtask_malloc_revised_tb__DOT__print_valid_entries__2__unnamedblk1__DOT__i,
                         4,(0xfU & (IData)((vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem
                                            [(0x3ffU 
                                              & __Vtask_malloc_revised_tb__DOT__print_valid_entries__2__unnamedblk1__DOT__i)] 
                                            >> 0xaU))),
                         16,(0xffffU & (IData)((vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem
                                                [(0x3ffU 
                                                  & __Vtask_malloc_revised_tb__DOT__print_valid_entries__2__unnamedblk1__DOT__i)] 
                                                >> 0xeU))),
                         16,(0xffffU & (IData)((vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem
                                                [(0x3ffU 
                                                  & __Vtask_malloc_revised_tb__DOT__print_valid_entries__2__unnamedblk1__DOT__i)] 
                                                >> 0x1eU))),
                         10,(0x3ffU & (IData)(vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem
                                              [(0x3ffU 
                                                & __Vtask_malloc_revised_tb__DOT__print_valid_entries__2__unnamedblk1__DOT__i)])));
        }
        __Vtask_malloc_revised_tb__DOT__print_valid_entries__2__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_malloc_revised_tb__DOT__print_valid_entries__2__unnamedblk1__DOT__i);
    }
    VL_FINISH_MT("malloc_revised_tb.sv", 122, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmalloc_revised_tb___024root___dump_triggers__act(Vmalloc_revised_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmalloc_revised_tb___024root___eval_triggers__act(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval_triggers__act\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_hdfdbb016__0;
    __Vtrigprevexpr_hdfdbb016__0 = 0;
    // Body
    __Vtrigprevexpr_hdfdbb016__0 = (1U & (~ (IData)(vlSelfRef.malloc_revised_tb__DOT__mem_bsy)));
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.malloc_revised_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__malloc_revised_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.malloc_revised_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__malloc_revised_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(__Vtrigprevexpr_hdfdbb016__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_hdfdbb016__1)));
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.malloc_revised_tb__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__malloc_revised_tb__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSelfRef.malloc_revised_tb__DOT__rdy) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__malloc_revised_tb__DOT__rdy__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__malloc_revised_tb__DOT__clk__0 
        = vlSelfRef.malloc_revised_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__malloc_revised_tb__DOT__rst_n__0 
        = vlSelfRef.malloc_revised_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr_hdfdbb016__1 = __Vtrigprevexpr_hdfdbb016__0;
    vlSelfRef.__Vtrigprevexpr___TOP__malloc_revised_tb__DOT__rdy__0 
        = vlSelfRef.malloc_revised_tb__DOT__rdy;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmalloc_revised_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
