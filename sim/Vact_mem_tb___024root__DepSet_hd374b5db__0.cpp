// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vact_mem_tb.h for the primary calling header

#include "Vact_mem_tb__pch.h"
#include "Vact_mem_tb__Syms.h"
#include "Vact_mem_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vact_mem_tb___024root___eval_initial__TOP__Vtiming__1(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtask_act_mem_tb__DOT__write_entry__1__malloc_or_dealloc;
    __Vtask_act_mem_tb__DOT__write_entry__1__malloc_or_dealloc = 0;
    SData/*9:0*/ __Vtask_act_mem_tb__DOT__write_entry__1__addr;
    __Vtask_act_mem_tb__DOT__write_entry__1__addr = 0;
    QData/*46:0*/ __Vtask_act_mem_tb__DOT__write_entry__1__data;
    __Vtask_act_mem_tb__DOT__write_entry__1__data = 0;
    CData/*0:0*/ __Vtask_act_mem_tb__DOT__write_entry__2__malloc_or_dealloc;
    __Vtask_act_mem_tb__DOT__write_entry__2__malloc_or_dealloc = 0;
    SData/*9:0*/ __Vtask_act_mem_tb__DOT__write_entry__2__addr;
    __Vtask_act_mem_tb__DOT__write_entry__2__addr = 0;
    QData/*46:0*/ __Vtask_act_mem_tb__DOT__write_entry__2__data;
    __Vtask_act_mem_tb__DOT__write_entry__2__data = 0;
    CData/*0:0*/ __Vtask_act_mem_tb__DOT__read_entry__3__malloc_or_dealloc;
    __Vtask_act_mem_tb__DOT__read_entry__3__malloc_or_dealloc = 0;
    SData/*9:0*/ __Vtask_act_mem_tb__DOT__read_entry__3__addr;
    __Vtask_act_mem_tb__DOT__read_entry__3__addr = 0;
    CData/*0:0*/ __Vtask_act_mem_tb__DOT__read_entry__4__malloc_or_dealloc;
    __Vtask_act_mem_tb__DOT__read_entry__4__malloc_or_dealloc = 0;
    SData/*9:0*/ __Vtask_act_mem_tb__DOT__read_entry__4__addr;
    __Vtask_act_mem_tb__DOT__read_entry__4__addr = 0;
    IData/*31:0*/ __Vtask_act_mem_tb__DOT__print_valid_entries__5__unnamedblk1__DOT__i;
    __Vtask_act_mem_tb__DOT__print_valid_entries__5__unnamedblk1__DOT__i = 0;
    QData/*46:0*/ __Vtask_act_mem_tb__DOT__print_valid_entries__5__e;
    __Vtask_act_mem_tb__DOT__print_valid_entries__5__e = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6d5f7462U;
    __Vtemp_1[2U] = 0x745f6d65U;
    __Vtemp_1[3U] = 0x6163U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.act_mem_tb__DOT__rst_n = 1U;
    vlSelfRef.act_mem_tb__DOT__malloc_dealloc = 0U;
    vlSelfRef.act_mem_tb__DOT__malloc_we = 0U;
    vlSelfRef.act_mem_tb__DOT__malloc_wdata = 0ULL;
    vlSelfRef.act_mem_tb__DOT__malloc_addr = 0U;
    vlSelfRef.act_mem_tb__DOT__dealloc_we = 0U;
    vlSelfRef.act_mem_tb__DOT__dealloc_wdata = 0ULL;
    vlSelfRef.act_mem_tb__DOT__dealloc_addr = 0U;
    co_await vlSelfRef.__VtrigSched_h990cb9ed__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge act_mem_tb.clk)", 
                                                         "act_mem_tb.sv", 
                                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.act_mem_tb__DOT__rst_n = 0U;
    VL_WRITEF_NX("ACT_MEM_TB: Resetting memory...\n",0);
    co_await vlSelfRef.__VtrigSched_h990cb9ed__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge act_mem_tb.clk)", 
                                                         "act_mem_tb.sv", 
                                                         73);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.act_mem_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_hc39cdf13__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge act_mem_tb.bsy)", 
                                                         "act_mem_tb.sv", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h990cb9ed__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge act_mem_tb.clk)", 
                                                         "act_mem_tb.sv", 
                                                         76);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("ACT_MEM_TB: Memory reset complete\n",0);
    __Vtask_act_mem_tb__DOT__write_entry__1__data = 0x4003fc000c05ULL;
    __Vtask_act_mem_tb__DOT__write_entry__1__addr = 5U;
    __Vtask_act_mem_tb__DOT__write_entry__1__malloc_or_dealloc = 1U;
    if (__Vtask_act_mem_tb__DOT__write_entry__1__malloc_or_dealloc) {
        vlSelfRef.act_mem_tb__DOT__cs = 1U;
        vlSelfRef.act_mem_tb__DOT__malloc_dealloc = 1U;
        vlSelfRef.act_mem_tb__DOT__dealloc_we = 1U;
        vlSelfRef.act_mem_tb__DOT__dealloc_addr = __Vtask_act_mem_tb__DOT__write_entry__1__addr;
        vlSelfRef.act_mem_tb__DOT__dealloc_wdata = __Vtask_act_mem_tb__DOT__write_entry__1__data;
    } else {
        vlSelfRef.act_mem_tb__DOT__cs = 1U;
        vlSelfRef.act_mem_tb__DOT__malloc_dealloc = 0U;
        vlSelfRef.act_mem_tb__DOT__malloc_we = 1U;
        vlSelfRef.act_mem_tb__DOT__malloc_addr = __Vtask_act_mem_tb__DOT__write_entry__1__addr;
        vlSelfRef.act_mem_tb__DOT__malloc_wdata = __Vtask_act_mem_tb__DOT__write_entry__1__data;
    }
    co_await vlSelfRef.__VtrigSched_h990cb9ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge act_mem_tb.clk)", 
                                                         "act_mem_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.act_mem_tb__DOT__malloc_we = 0U;
    vlSelfRef.act_mem_tb__DOT__cs = 0U;
    vlSelfRef.act_mem_tb__DOT__dealloc_we = 0U;
    co_await vlSelfRef.__VtrigSched_h990cb9ed__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge act_mem_tb.clk)", 
                                                         "act_mem_tb.sv", 
                                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_act_mem_tb__DOT__write_entry__2__data = 0x7fffc0001c0aULL;
    __Vtask_act_mem_tb__DOT__write_entry__2__addr = 0xaU;
    __Vtask_act_mem_tb__DOT__write_entry__2__malloc_or_dealloc = 1U;
    if (__Vtask_act_mem_tb__DOT__write_entry__2__malloc_or_dealloc) {
        vlSelfRef.act_mem_tb__DOT__cs = 1U;
        vlSelfRef.act_mem_tb__DOT__malloc_dealloc = 1U;
        vlSelfRef.act_mem_tb__DOT__dealloc_we = 1U;
        vlSelfRef.act_mem_tb__DOT__dealloc_addr = __Vtask_act_mem_tb__DOT__write_entry__2__addr;
        vlSelfRef.act_mem_tb__DOT__dealloc_wdata = __Vtask_act_mem_tb__DOT__write_entry__2__data;
    } else {
        vlSelfRef.act_mem_tb__DOT__cs = 1U;
        vlSelfRef.act_mem_tb__DOT__malloc_dealloc = 0U;
        vlSelfRef.act_mem_tb__DOT__malloc_we = 1U;
        vlSelfRef.act_mem_tb__DOT__malloc_addr = __Vtask_act_mem_tb__DOT__write_entry__2__addr;
        vlSelfRef.act_mem_tb__DOT__malloc_wdata = __Vtask_act_mem_tb__DOT__write_entry__2__data;
    }
    co_await vlSelfRef.__VtrigSched_h990cb9ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge act_mem_tb.clk)", 
                                                         "act_mem_tb.sv", 
                                                         100);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.act_mem_tb__DOT__malloc_we = 0U;
    vlSelfRef.act_mem_tb__DOT__cs = 0U;
    vlSelfRef.act_mem_tb__DOT__dealloc_we = 0U;
    co_await vlSelfRef.__VtrigSched_h990cb9ed__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge act_mem_tb.clk)", 
                                                         "act_mem_tb.sv", 
                                                         104);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_act_mem_tb__DOT__read_entry__3__addr = 5U;
    __Vtask_act_mem_tb__DOT__read_entry__3__malloc_or_dealloc = 0U;
    if (__Vtask_act_mem_tb__DOT__read_entry__3__malloc_or_dealloc) {
        vlSelfRef.act_mem_tb__DOT__cs = 1U;
        vlSelfRef.act_mem_tb__DOT__malloc_dealloc = 1U;
        vlSelfRef.act_mem_tb__DOT__dealloc_we = 0U;
        vlSelfRef.act_mem_tb__DOT__dealloc_addr = __Vtask_act_mem_tb__DOT__read_entry__3__addr;
    } else {
        vlSelfRef.act_mem_tb__DOT__cs = 1U;
        vlSelfRef.act_mem_tb__DOT__malloc_dealloc = 0U;
        vlSelfRef.act_mem_tb__DOT__malloc_we = 0U;
        vlSelfRef.act_mem_tb__DOT__malloc_addr = __Vtask_act_mem_tb__DOT__read_entry__3__addr;
    }
    co_await vlSelfRef.__VtrigSched_h990cb9ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge act_mem_tb.clk)", 
                                                         "act_mem_tb.sv", 
                                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.act_mem_tb__DOT__cs = 0U;
    co_await vlSelfRef.__VtrigSched_h990cb9ed__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge act_mem_tb.clk)", 
                                                         "act_mem_tb.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (__Vtask_act_mem_tb__DOT__read_entry__3__malloc_or_dealloc) {
        VL_WRITEF_NX("DEALLOC_READ: reservation_id=%0#, owner=%0#, read_mask=%b, write_mask=%b, valid=%b\n",0,
                     10,(0x3ffU & (IData)(vlSelfRef.act_mem_tb__DOT__dealloc_rdata)),
                     4,(0xfU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                        >> 0xaU))),
                     16,(0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                            >> 0xeU))),
                     16,(0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                            >> 0x1eU))),
                     1,(1U & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                      >> 0x2eU))));
    } else {
        VL_WRITEF_NX("MALLOC_READ: reservation_id=%0#, owner=%0#, read_mask=%b, write_mask=%b, valid=%b\n",0,
                     10,(0x3ffU & (IData)(vlSelfRef.act_mem_tb__DOT__malloc_rdata)),
                     4,(0xfU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                        >> 0xaU))),
                     16,(0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                            >> 0xeU))),
                     16,(0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                            >> 0x1eU))),
                     1,(1U & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                      >> 0x2eU))));
    }
    __Vtask_act_mem_tb__DOT__read_entry__4__addr = 0xaU;
    __Vtask_act_mem_tb__DOT__read_entry__4__malloc_or_dealloc = 1U;
    if (__Vtask_act_mem_tb__DOT__read_entry__4__malloc_or_dealloc) {
        vlSelfRef.act_mem_tb__DOT__cs = 1U;
        vlSelfRef.act_mem_tb__DOT__malloc_dealloc = 1U;
        vlSelfRef.act_mem_tb__DOT__dealloc_we = 0U;
        vlSelfRef.act_mem_tb__DOT__dealloc_addr = __Vtask_act_mem_tb__DOT__read_entry__4__addr;
    } else {
        vlSelfRef.act_mem_tb__DOT__cs = 1U;
        vlSelfRef.act_mem_tb__DOT__malloc_dealloc = 0U;
        vlSelfRef.act_mem_tb__DOT__malloc_we = 0U;
        vlSelfRef.act_mem_tb__DOT__malloc_addr = __Vtask_act_mem_tb__DOT__read_entry__4__addr;
    }
    co_await vlSelfRef.__VtrigSched_h990cb9ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge act_mem_tb.clk)", 
                                                         "act_mem_tb.sv", 
                                                         125);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.act_mem_tb__DOT__cs = 0U;
    co_await vlSelfRef.__VtrigSched_h990cb9ed__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge act_mem_tb.clk)", 
                                                         "act_mem_tb.sv", 
                                                         127);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (__Vtask_act_mem_tb__DOT__read_entry__4__malloc_or_dealloc) {
        VL_WRITEF_NX("DEALLOC_READ: reservation_id=%0#, owner=%0#, read_mask=%b, write_mask=%b, valid=%b\n",0,
                     10,(0x3ffU & (IData)(vlSelfRef.act_mem_tb__DOT__dealloc_rdata)),
                     4,(0xfU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                        >> 0xaU))),
                     16,(0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                            >> 0xeU))),
                     16,(0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                            >> 0x1eU))),
                     1,(1U & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                      >> 0x2eU))));
    } else {
        VL_WRITEF_NX("MALLOC_READ: reservation_id=%0#, owner=%0#, read_mask=%b, write_mask=%b, valid=%b\n",0,
                     10,(0x3ffU & (IData)(vlSelfRef.act_mem_tb__DOT__malloc_rdata)),
                     4,(0xfU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                        >> 0xaU))),
                     16,(0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                            >> 0xeU))),
                     16,(0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                            >> 0x1eU))),
                     1,(1U & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                      >> 0x2eU))));
    }
    __Vtask_act_mem_tb__DOT__print_valid_entries__5__unnamedblk1__DOT__i = 0;
    __Vtask_act_mem_tb__DOT__print_valid_entries__5__e = 0;
    __Vtask_act_mem_tb__DOT__print_valid_entries__5__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, __Vtask_act_mem_tb__DOT__print_valid_entries__5__unnamedblk1__DOT__i)) {
        __Vtask_act_mem_tb__DOT__print_valid_entries__5__e 
            = vlSelfRef.act_mem_tb__DOT__dut__DOT__act_mem
            [(0x3ffU & __Vtask_act_mem_tb__DOT__print_valid_entries__5__unnamedblk1__DOT__i)];
        if (VL_UNLIKELY(((1U & (IData)((__Vtask_act_mem_tb__DOT__print_valid_entries__5__e 
                                        >> 0x2eU)))))) {
            VL_WRITEF_NX("VALID ENTRY at addr %0d: reservation_id=%0#, owner=%0#, read_mask=%b, write_mask=%b, valid=%b\n",0,
                         32,__Vtask_act_mem_tb__DOT__print_valid_entries__5__unnamedblk1__DOT__i,
                         10,(0x3ffU & (IData)(__Vtask_act_mem_tb__DOT__print_valid_entries__5__e)),
                         4,(0xfU & (IData)((__Vtask_act_mem_tb__DOT__print_valid_entries__5__e 
                                            >> 0xaU))),
                         16,(0xffffU & (IData)((__Vtask_act_mem_tb__DOT__print_valid_entries__5__e 
                                                >> 0xeU))),
                         16,(0xffffU & (IData)((__Vtask_act_mem_tb__DOT__print_valid_entries__5__e 
                                                >> 0x1eU))),
                         1,(1U & (IData)((__Vtask_act_mem_tb__DOT__print_valid_entries__5__e 
                                          >> 0x2eU))));
        }
        __Vtask_act_mem_tb__DOT__print_valid_entries__5__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_act_mem_tb__DOT__print_valid_entries__5__unnamedblk1__DOT__i);
    }
    VL_FINISH_MT("act_mem_tb.sv", 58, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vact_mem_tb___024root___dump_triggers__act(Vact_mem_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vact_mem_tb___024root___eval_triggers__act(Vact_mem_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root___eval_triggers__act\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.act_mem_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__act_mem_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.act_mem_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__act_mem_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((~ (IData)(vlSelfRef.act_mem_tb__DOT__bsy)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__act_mem_tb__DOT__bsy__0)));
    vlSelfRef.__VactTriggered.setBit(4U, ((~ (IData)(vlSelfRef.act_mem_tb__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__act_mem_tb__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__act_mem_tb__DOT__clk__0 
        = vlSelfRef.act_mem_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__act_mem_tb__DOT__rst_n__0 
        = vlSelfRef.act_mem_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__act_mem_tb__DOT__bsy__0 
        = vlSelfRef.act_mem_tb__DOT__bsy;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vact_mem_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
