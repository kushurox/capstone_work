// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdealloc_tb.h for the primary calling header

#include "Vdealloc_tb__pch.h"
#include "Vdealloc_tb___024root.h"

VlCoroutine Vdealloc_tb___024root___eval_initial__TOP__Vtiming__0(Vdealloc_tb___024root* vlSelf);
VlCoroutine Vdealloc_tb___024root___eval_initial__TOP__Vtiming__1(Vdealloc_tb___024root* vlSelf);

void Vdealloc_tb___024root___eval_initial(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_initial\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vdealloc_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdealloc_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vdealloc_tb___024root___eval_initial__TOP__Vtiming__0(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__0__addr;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__0__addr = 0;
    QData/*46:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__0__data;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__0__data = 0;
    SData/*9:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__1__addr;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__1__addr = 0;
    QData/*46:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__1__data;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__1__data = 0;
    SData/*9:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__2__addr;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__2__addr = 0;
    QData/*46:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__2__data;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__2__data = 0;
    SData/*9:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__3__addr;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__3__addr = 0;
    QData/*46:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__3__data;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__3__data = 0;
    SData/*9:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__4__addr;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__4__addr = 0;
    QData/*46:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__4__data;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__4__data = 0;
    SData/*9:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__5__addr;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__5__addr = 0;
    QData/*46:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__5__data;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__5__data = 0;
    IData/*31:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__6__unnamedblk1__DOT__i;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__6__unnamedblk1__DOT__i = 0;
    SData/*9:0*/ __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__8__reservation_id;
    __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__8__reservation_id = 0;
    SData/*9:0*/ __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__9__reservation_id;
    __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__9__reservation_id = 0;
    SData/*9:0*/ __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__10__reservation_id;
    __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__10__reservation_id = 0;
    IData/*31:0*/ __Vtask_dealloc_tb__DOT__deallocate__14__addr;
    __Vtask_dealloc_tb__DOT__deallocate__14__addr = 0;
    CData/*3:0*/ __Vtask_dealloc_tb__DOT__deallocate__14__core_id;
    __Vtask_dealloc_tb__DOT__deallocate__14__core_id = 0;
    IData/*31:0*/ __Vtask_dealloc_tb__DOT__deallocate__15__addr;
    __Vtask_dealloc_tb__DOT__deallocate__15__addr = 0;
    CData/*3:0*/ __Vtask_dealloc_tb__DOT__deallocate__15__core_id;
    __Vtask_dealloc_tb__DOT__deallocate__15__core_id = 0;
    IData/*31:0*/ __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__19__unnamedblk1__DOT__i;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__19__unnamedblk1__DOT__i = 0;
    // Body
    vlSelfRef.dealloc_tb__DOT__clk = 0U;
    vlSelfRef.dealloc_tb__DOT__rst_n = 1U;
    vlSelfRef.dealloc_tb__DOT__dealloc_cs = 0U;
    vlSelfRef.dealloc_tb__DOT__dealloc_addr = 0U;
    vlSelfRef.dealloc_tb__DOT__dealloc_core_id = 0U;
    co_await vlSelfRef.__VtrigSched_h3433110d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dealloc_tb.clk)", 
                                                         "dealloc_tb.sv", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.dealloc_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_h3433110d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dealloc_tb.clk)", 
                                                         "dealloc_tb.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.dealloc_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h3433110d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dealloc_tb.clk)", 
                                                         "dealloc_tb.sv", 
                                                         84);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    while (vlSelfRef.dealloc_tb__DOT__act_bsy) {
        co_await vlSelfRef.__VtrigSched_h0c8dbe42__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ dealloc_tb.act_bsy))", 
                                                             "dealloc_tb.sv", 
                                                             85);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("memory initialized\n",0);
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__0__data = 0x403fc03fc400ULL;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__0__addr = 0U;
    vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem[__Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__0__addr] 
        = __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__0__data;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__1__data = 0x403fc03fc400ULL;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__1__addr = 1U;
    vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem[__Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__1__addr] 
        = __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__1__data;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__2__data = 0x400280030001ULL;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__2__addr = 2U;
    vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem[__Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__2__addr] 
        = __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__2__data;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__3__data = 0x400280030001ULL;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__3__addr = 3U;
    vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem[__Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__3__addr] 
        = __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__3__data;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__4__data = 0x402800280802ULL;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__4__addr = 4U;
    vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem[__Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__4__addr] 
        = __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__4__data;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__5__data = 0x403fc03fc802ULL;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__5__addr = 5U;
    vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem[__Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__5__addr] 
        = __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__write__5__data;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__6__unnamedblk1__DOT__i = 0;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__6__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__6__unnamedblk1__DOT__i)) {
        if (VL_UNLIKELY(((1U & (IData)((vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem
                                        [(0x3ffU & __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__6__unnamedblk1__DOT__i)] 
                                        >> 0x2eU)))))) {
            VL_WRITEF_NX("ACT[%0d]: owner_core_id=%0#, read_mask=0x%0x, write_mask=0x%0x, reservation_id=%0#\n",0,
                         32,__Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__6__unnamedblk1__DOT__i,
                         4,(0xfU & (IData)((vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem
                                            [(0x3ffU 
                                              & __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__6__unnamedblk1__DOT__i)] 
                                            >> 0xaU))),
                         16,(0xffffU & (IData)((vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem
                                                [(0x3ffU 
                                                  & __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__6__unnamedblk1__DOT__i)] 
                                                >> 0xeU))),
                         16,(0xffffU & (IData)((vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem
                                                [(0x3ffU 
                                                  & __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__6__unnamedblk1__DOT__i)] 
                                                >> 0x1eU))),
                         10,(0x3ffU & (IData)(vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem
                                              [(0x3ffU 
                                                & __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__6__unnamedblk1__DOT__i)])));
        }
        __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__6__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__6__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("starting deallocation tests\n",0);
    VL_WRITEF_NX("RESERVATION_COUNTER STATUS: left=%0#, right=%0#, queue_length=%0#, full=%0b, empty=%0b\n",0,
                 10,vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left,
                 10,(IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__right),
                 11,vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length,
                 1,(IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__full),
                 1,vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__empty);
    if ((0U < (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length))) {
        __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__8__reservation_id 
            = vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids
            [vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left];
        VL_WRITEF_NX("RESERVATION_COUNTER TASK: Dequeued reservation id %0#\n",0,
                     10,__Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__8__reservation_id);
        vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left)));
        vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length 
            = (0x7ffU & ((IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length) 
                         - (IData)(1U)));
    } else {
        VL_WRITEF_NX("RESERVATION_COUNTER TASK: Dequeue failed, queue is empty\n",0);
        __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__8__reservation_id = 0U;
    }
    vlSelfRef.dealloc_tb__DOT__dummy_reservation_id 
        = __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__8__reservation_id;
    if ((0U < (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length))) {
        __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__9__reservation_id 
            = vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids
            [vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left];
        VL_WRITEF_NX("RESERVATION_COUNTER TASK: Dequeued reservation id %0#\n",0,
                     10,__Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__9__reservation_id);
        vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left)));
        vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length 
            = (0x7ffU & ((IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length) 
                         - (IData)(1U)));
    } else {
        VL_WRITEF_NX("RESERVATION_COUNTER TASK: Dequeue failed, queue is empty\n",0);
        __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__9__reservation_id = 0U;
    }
    vlSelfRef.dealloc_tb__DOT__dummy_reservation_id 
        = __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__9__reservation_id;
    if ((0U < (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length))) {
        __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__10__reservation_id 
            = vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids
            [vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left];
        VL_WRITEF_NX("RESERVATION_COUNTER TASK: Dequeued reservation id %0#\n",0,
                     10,__Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__10__reservation_id);
        vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left)));
        vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length 
            = (0x7ffU & ((IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length) 
                         - (IData)(1U)));
    } else {
        VL_WRITEF_NX("RESERVATION_COUNTER TASK: Dequeue failed, queue is empty\n",0);
        __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__10__reservation_id = 0U;
    }
    vlSelfRef.dealloc_tb__DOT__dummy_reservation_id 
        = __Vtask_dealloc_tb__DOT__reservation_counter_inst__DOT___dequeue__10__reservation_id;
    VL_WRITEF_NX("RESERVATION_COUNTER STATUS: left=%0#, right=%0#, queue_length=%0#, full=%0b, empty=%0b\n",0,
                 10,vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left,
                 10,(IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__right),
                 11,vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length,
                 1,(IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__full),
                 1,vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__empty);
    if ((0U < (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length))) {
        VL_WRITEF_NX("RESERVATION_COUNTER HEAD: reservation id=%0#\n",0,
                     10,vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids
                     [vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left]);
    } else {
        VL_WRITEF_NX("RESERVATION_COUNTER HEAD: EMPTY\n",0);
    }
    if ((0U < (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length))) {
        VL_WRITEF_NX("RESERVATION_COUNTER TAIL: reservation id=%0#\n",0,
                     10,vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids
                     [(0x3ffU & ((IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__right) 
                                 - (IData)(1U)))]);
    } else {
        VL_WRITEF_NX("RESERVATION_COUNTER TAIL: EMPTY\n",0);
    }
    __Vtask_dealloc_tb__DOT__deallocate__14__core_id = 2U;
    __Vtask_dealloc_tb__DOT__deallocate__14__addr = 0U;
    co_await vlSelfRef.__VtrigSched_h3433110d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dealloc_tb.clk)", 
                                                         "dealloc_tb.sv", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h343309cc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge dealloc_tb.clk)", 
                                                         "dealloc_tb.sv", 
                                                         117);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "dealloc_tb.sv", 
                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.dealloc_tb__DOT__dealloc_addr = __Vtask_dealloc_tb__DOT__deallocate__14__addr;
    vlSelfRef.dealloc_tb__DOT__dealloc_core_id = __Vtask_dealloc_tb__DOT__deallocate__14__core_id;
    vlSelfRef.dealloc_tb__DOT__dealloc_cs = 1U;
    co_await vlSelfRef.__VtrigSched_h343309cc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge dealloc_tb.clk)", 
                                                         "dealloc_tb.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.dealloc_tb__DOT__dealloc_cs = 0U;
    while ((1U & (~ (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_rdy)))) {
        co_await vlSelfRef.__VtrigSched_h1770a44d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( dealloc_tb.dealloc_rdy)", 
                                                             "dealloc_tb.sv", 
                                                             124);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_dealloc_tb__DOT__deallocate__15__core_id = 0U;
    __Vtask_dealloc_tb__DOT__deallocate__15__addr = 0x800U;
    co_await vlSelfRef.__VtrigSched_h3433110d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dealloc_tb.clk)", 
                                                         "dealloc_tb.sv", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h343309cc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge dealloc_tb.clk)", 
                                                         "dealloc_tb.sv", 
                                                         117);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "dealloc_tb.sv", 
                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.dealloc_tb__DOT__dealloc_addr = __Vtask_dealloc_tb__DOT__deallocate__15__addr;
    vlSelfRef.dealloc_tb__DOT__dealloc_core_id = __Vtask_dealloc_tb__DOT__deallocate__15__core_id;
    vlSelfRef.dealloc_tb__DOT__dealloc_cs = 1U;
    co_await vlSelfRef.__VtrigSched_h343309cc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge dealloc_tb.clk)", 
                                                         "dealloc_tb.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.dealloc_tb__DOT__dealloc_cs = 0U;
    while ((1U & (~ (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_rdy)))) {
        co_await vlSelfRef.__VtrigSched_h1770a44d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( dealloc_tb.dealloc_rdy)", 
                                                             "dealloc_tb.sv", 
                                                             124);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("RESERVATION_COUNTER STATUS: left=%0#, right=%0#, queue_length=%0#, full=%0b, empty=%0b\n",0,
                 10,vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left,
                 10,(IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__right),
                 11,vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length,
                 1,(IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__full),
                 1,vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__empty);
    if ((0U < (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length))) {
        VL_WRITEF_NX("RESERVATION_COUNTER HEAD: reservation id=%0#\n",0,
                     10,vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids
                     [vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left]);
    } else {
        VL_WRITEF_NX("RESERVATION_COUNTER HEAD: EMPTY\n",0);
    }
    if ((0U < (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length))) {
        VL_WRITEF_NX("RESERVATION_COUNTER TAIL: reservation id=%0#\n",0,
                     10,vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids
                     [(0x3ffU & ((IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__right) 
                                 - (IData)(1U)))]);
    } else {
        VL_WRITEF_NX("RESERVATION_COUNTER TAIL: EMPTY\n",0);
    }
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__19__unnamedblk1__DOT__i = 0;
    __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__19__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__19__unnamedblk1__DOT__i)) {
        if (VL_UNLIKELY(((1U & (IData)((vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem
                                        [(0x3ffU & __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__19__unnamedblk1__DOT__i)] 
                                        >> 0x2eU)))))) {
            VL_WRITEF_NX("ACT[%0d]: owner_core_id=%0#, read_mask=0x%0x, write_mask=0x%0x, reservation_id=%0#\n",0,
                         32,__Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__19__unnamedblk1__DOT__i,
                         4,(0xfU & (IData)((vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem
                                            [(0x3ffU 
                                              & __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__19__unnamedblk1__DOT__i)] 
                                            >> 0xaU))),
                         16,(0xffffU & (IData)((vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem
                                                [(0x3ffU 
                                                  & __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__19__unnamedblk1__DOT__i)] 
                                                >> 0xeU))),
                         16,(0xffffU & (IData)((vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem
                                                [(0x3ffU 
                                                  & __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__19__unnamedblk1__DOT__i)] 
                                                >> 0x1eU))),
                         10,(0x3ffU & (IData)(vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem
                                              [(0x3ffU 
                                                & __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__19__unnamedblk1__DOT__i)])));
        }
        __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__19__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_dealloc_tb__DOT__act_mem_inst__DOT__print_valid_entries__19__unnamedblk1__DOT__i);
    }
    VL_FINISH_MT("dealloc_tb.sv", 112, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vdealloc_tb___024root___eval_initial__TOP__Vtiming__1(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "dealloc_tb.sv", 
                                             71);
        vlSelfRef.dealloc_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.dealloc_tb__DOT__clk)));
    }
}

void Vdealloc_tb___024root___act_comb__TOP__0(Vdealloc_tb___024root* vlSelf);

void Vdealloc_tb___024root___eval_act(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_act\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x3dULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vdealloc_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdealloc_tb___024root___act_comb__TOP__0(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___act_comb__TOP__0\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__full 
        = (0x400U == (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length));
    vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__empty 
        = (0U == (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length));
}

void Vdealloc_tb___024root___nba_sequent__TOP__0(Vdealloc_tb___024root* vlSelf);

void Vdealloc_tb___024root___eval_nba(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_nba\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdealloc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x3fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdealloc_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdealloc_tb___024root___nba_sequent__TOP__0(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___nba_sequent__TOP__0\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*46:0*/ __Vdly__dealloc_tb__DOT__dealloc_act_rdata;
    __Vdly__dealloc_tb__DOT__dealloc_act_rdata = 0;
    CData/*2:0*/ __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state;
    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state = 0;
    SData/*9:0*/ __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__block_index;
    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__block_index = 0;
    SData/*9:0*/ __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__reservation_id;
    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__reservation_id = 0;
    CData/*0:0*/ __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__from;
    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__from = 0;
    QData/*46:0*/ __VdlyVal__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v0;
    __VdlyVal__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v0;
    __VdlyDim0__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v0;
    __VdlySet__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v1;
    __VdlyDim0__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v1;
    __VdlySet__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v1 = 0;
    SData/*9:0*/ __VdlyVal__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0;
    __VdlyVal__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0 = 0;
    SData/*9:0*/ __VdlyDim0__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0;
    __VdlyDim0__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0 = 0;
    SData/*9:0*/ __VdlyVal__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v1;
    __VdlyVal__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v1 = 0;
    SData/*9:0*/ __VdlyDim0__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v1;
    __VdlyDim0__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v1 = 0;
    // Body
    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state 
        = vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__current_state;
    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__block_index 
        = vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__block_index;
    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__reservation_id 
        = vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__reservation_id;
    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__from 
        = vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__from;
    __Vdly__dealloc_tb__DOT__dealloc_act_rdata = vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata;
    __VdlySet__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v0 = 0U;
    __VdlySet__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v1 = 0U;
    if (vlSelfRef.dealloc_tb__DOT__rst_n) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.dealloc_tb__DOT__reservation_enqueue) 
                           & (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__rdy)) 
                          & (~ (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__full)))))) {
            VL_WRITEF_NX("RESERVATION_COUNTER: Enqueue reservation id %0#\n",0,
                         10,vlSelfRef.dealloc_tb__DOT__reservation_id_out);
            vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length)));
            __VdlyVal__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0 
                = vlSelfRef.dealloc_tb__DOT__reservation_id_out;
            __VdlyDim0__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0 
                = vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__right;
            vlSelfRef.__VdlyCommitQueuedealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids.enqueue(__VdlyVal__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0, (IData)(__VdlyDim0__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0));
            vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__right 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__right)));
        }
    } else {
        vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__right = 0U;
        vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__queue_length = 0x400U;
        vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i = 0U;
        vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__rdy = 1U;
        vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__left = 0U;
        vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__new_reservation_id = 0U;
        while ((0x400U > (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i))) {
            __VdlyVal__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v1 
                = (0x3ffU & (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i));
            __VdlyDim0__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v1 
                = (0x3ffU & (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i));
            vlSelfRef.__VdlyCommitQueuedealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids.enqueue(__VdlyVal__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v1, (IData)(__VdlyDim0__dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v1));
            vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i)));
        }
    }
    if (vlSelfRef.dealloc_tb__DOT__rst_n) {
        if (vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__current_state) {
            if (VL_UNLIKELY((vlSelfRef.dealloc_tb__DOT__dealloc_act_cs))) {
                VL_WRITEF_NX("ACT_MEM: dealloc access at addr %0#\n",0,
                             10,vlSelfRef.dealloc_tb__DOT__dealloc_act_addr);
                if (vlSelfRef.dealloc_tb__DOT__dealloc_act_we) {
                    __VdlyVal__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v0 
                        = vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata;
                    __VdlyDim0__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v0 
                        = vlSelfRef.dealloc_tb__DOT__dealloc_act_addr;
                    __VdlySet__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v0 = 1U;
                } else {
                    __Vdly__dealloc_tb__DOT__dealloc_act_rdata 
                        = vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem
                        [vlSelfRef.dealloc_tb__DOT__dealloc_act_addr];
                }
            }
        } else {
            if ((0x400U == (IData)(vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__index))) {
                vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__current_state = 1U;
                vlSelfRef.dealloc_tb__DOT__act_bsy = 0U;
            }
            __VdlyDim0__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v1 
                = (0x3ffU & (IData)(vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__index));
            __VdlySet__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v1 = 1U;
            vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__index 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__index)));
        }
    } else {
        vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__index = 0U;
        vlSelfRef.dealloc_tb__DOT__act_bsy = 1U;
        vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__current_state = 0U;
    }
    vlSelfRef.__VdlyCommitQueuedealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids.commit(vlSelfRef.dealloc_tb__DOT__reservation_counter_inst__DOT__reservation_ids);
    if (__VdlySet__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v0) {
        vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem[__VdlyDim0__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v0] 
            = __VdlyVal__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v0;
    }
    if (__VdlySet__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v1) {
        vlSelfRef.dealloc_tb__DOT__act_mem_inst__DOT__act_mem[__VdlyDim0__dealloc_tb__DOT__act_mem_inst__DOT__act_mem__v1] = 0ULL;
    }
    if (vlSelfRef.dealloc_tb__DOT__rst_n) {
        if ((4U & (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__current_state))) {
            if ((2U & (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__current_state))) {
                if ((1U & (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__current_state))) {
                    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state = 0U;
                    vlSelfRef.dealloc_tb__DOT__dealloc_bsy = 0U;
                    vlSelfRef.dealloc_tb__DOT__dealloc_rdy = 0U;
                    vlSelfRef.dealloc_tb__DOT__dealloc_act_cs = 0U;
                    vlSelfRef.dealloc_tb__DOT__dealloc_act_we = 0U;
                    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__block_index = 0U;
                    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__reservation_id = 0U;
                } else if ((1U & (((0x3ffU & (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata)) 
                                   != (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__reservation_id)) 
                                  | (~ (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata 
                                                >> 0x2eU)))))) {
                    VL_WRITEF_NX("DEALLOC: Reservation id mismatch. Deallocation complete.\n",0);
                    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state = 3U;
                    vlSelfRef.dealloc_tb__DOT__dealloc_act_cs = 0U;
                    vlSelfRef.dealloc_tb__DOT__dealloc_act_we = 0U;
                    vlSelfRef.dealloc_tb__DOT__reservation_id_out 
                        = vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__reservation_id;
                    vlSelfRef.dealloc_tb__DOT__reservation_enqueue = 1U;
                } else {
                    VL_WRITEF_NX("DEALLOC: Deallocated block at index %0#\n",0,
                                 10,vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__block_index);
                    vlSelfRef.dealloc_tb__DOT__dealloc_act_cs = 1U;
                    vlSelfRef.dealloc_tb__DOT__dealloc_act_we = 1U;
                    vlSelfRef.dealloc_tb__DOT__dealloc_act_addr 
                        = vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__block_index;
                    vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata = 0ULL;
                    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state = 5U;
                    __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__block_index 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__block_index)));
                }
            } else if ((1U & (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__current_state))) {
                vlSelfRef.dealloc_tb__DOT__dealloc_act_we = 0U;
                vlSelfRef.dealloc_tb__DOT__dealloc_act_addr 
                    = vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__block_index;
                __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__from = 1U;
                __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state = 1U;
            } else if (((0xfU & (IData)((vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata 
                                         >> 0xaU))) 
                        != (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__core_id_reg))) {
                VL_WRITEF_NX("DEALLOC: Owner core id mismatch. Deallocation complete.\n",0);
                __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state = 3U;
                vlSelfRef.dealloc_tb__DOT__dealloc_err = 1U;
                vlSelfRef.dealloc_tb__DOT__dealloc_act_cs = 0U;
                vlSelfRef.dealloc_tb__DOT__dealloc_act_we = 0U;
            } else {
                VL_WRITEF_NX("DEALLOC: Deallocating block at index %0#\n",0,
                             10,vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__block_index);
                __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__reservation_id 
                    = (0x3ffU & (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata));
                __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state = 5U;
                vlSelfRef.dealloc_tb__DOT__dealloc_act_cs = 1U;
                vlSelfRef.dealloc_tb__DOT__dealloc_act_we = 1U;
                vlSelfRef.dealloc_tb__DOT__dealloc_act_addr 
                    = vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__block_index;
                vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata = 0ULL;
                __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__block_index 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__block_index)));
            }
        } else if ((2U & (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__current_state))) {
            if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__current_state))))) {
                VL_WRITEF_NX("DEALLOC: Deallocation operation complete at cycle %0#\n",0,
                             64,VL_TIME_UNITED_Q(1));
                vlSelfRef.dealloc_tb__DOT__dealloc_bsy = 0U;
                vlSelfRef.dealloc_tb__DOT__dealloc_rdy = 1U;
                __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state = 0U;
                vlSelfRef.dealloc_tb__DOT__reservation_id_out = 0U;
                vlSelfRef.dealloc_tb__DOT__reservation_enqueue = 0U;
            } else {
                __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state = 0U;
                vlSelfRef.dealloc_tb__DOT__dealloc_bsy = 0U;
                vlSelfRef.dealloc_tb__DOT__dealloc_rdy = 0U;
                vlSelfRef.dealloc_tb__DOT__dealloc_act_cs = 0U;
                vlSelfRef.dealloc_tb__DOT__dealloc_act_we = 0U;
                __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__block_index = 0U;
                __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__reservation_id = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__current_state))) {
            vlSelfRef.dealloc_tb__DOT__dealloc_act_cs = 0U;
            __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state 
                = ((IData)(vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__from)
                    ? 6U : 4U);
        } else if (VL_UNLIKELY((vlSelfRef.dealloc_tb__DOT__dealloc_cs))) {
            VL_WRITEF_NX("DEALLOC: Deallocation started for core id %0# at address %0x\n",0,
                         4,vlSelfRef.dealloc_tb__DOT__dealloc_core_id,
                         32,vlSelfRef.dealloc_tb__DOT__dealloc_addr);
            vlSelfRef.dealloc_tb__DOT__dealloc_bsy = 1U;
            vlSelfRef.dealloc_tb__DOT__dealloc_rdy = 0U;
            vlSelfRef.dealloc_tb__DOT__dealloc_act_addr 
                = (0x3ffU & (vlSelfRef.dealloc_tb__DOT__dealloc_addr 
                             >> 0xaU));
            __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__block_index 
                = (0x3ffU & (vlSelfRef.dealloc_tb__DOT__dealloc_addr 
                             >> 0xaU));
            vlSelfRef.dealloc_tb__DOT__dealloc_act_cs = 1U;
            vlSelfRef.dealloc_tb__DOT__dealloc_act_we = 0U;
            vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__core_id_reg 
                = vlSelfRef.dealloc_tb__DOT__dealloc_core_id;
            __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state = 1U;
            vlSelfRef.dealloc_tb__DOT__reservation_id_out = 0U;
            vlSelfRef.dealloc_tb__DOT__reservation_enqueue = 0U;
            __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__reservation_id = 0U;
            __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__from = 0U;
            vlSelfRef.dealloc_tb__DOT__dealloc_err = 0U;
        }
    } else {
        __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state = 0U;
        vlSelfRef.dealloc_tb__DOT__dealloc_act_cs = 0U;
        vlSelfRef.dealloc_tb__DOT__dealloc_act_we = 0U;
        vlSelfRef.dealloc_tb__DOT__dealloc_act_wdata = 0ULL;
        vlSelfRef.dealloc_tb__DOT__dealloc_act_addr = 0U;
        vlSelfRef.dealloc_tb__DOT__dealloc_bsy = 0U;
        __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__block_index = 0U;
        __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__reservation_id = 0U;
        vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__core_id_reg = 0U;
        vlSelfRef.dealloc_tb__DOT__dealloc_err = 0U;
        vlSelfRef.dealloc_tb__DOT__reservation_id_out = 0U;
        vlSelfRef.dealloc_tb__DOT__reservation_enqueue = 0U;
        vlSelfRef.dealloc_tb__DOT__dealloc_rdy = 1U;
        __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__from = 0U;
    }
    vlSelfRef.dealloc_tb__DOT__dealloc_act_rdata = __Vdly__dealloc_tb__DOT__dealloc_act_rdata;
    vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__current_state 
        = __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__current_state;
    vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__block_index 
        = __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__block_index;
    vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__reservation_id 
        = __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__reservation_id;
    vlSelfRef.dealloc_tb__DOT__dealloc_inst__DOT__from 
        = __Vdly__dealloc_tb__DOT__dealloc_inst__DOT__from;
}

void Vdealloc_tb___024root___timing_resume(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___timing_resume\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h3433110d__0.resume(
                                                   "@(posedge dealloc_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h0c8dbe42__0.resume(
                                                   "@( (~ dealloc_tb.act_bsy))");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h343309cc__0.resume(
                                                   "@(negedge dealloc_tb.clk)");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h1770a44d__0.resume(
                                                   "@( dealloc_tb.dealloc_rdy)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdealloc_tb___024root___timing_commit(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___timing_commit\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h3433110d__0.commit(
                                                   "@(posedge dealloc_tb.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h0c8dbe42__0.commit(
                                                   "@( (~ dealloc_tb.act_bsy))");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h343309cc__0.commit(
                                                   "@(negedge dealloc_tb.clk)");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h1770a44d__0.commit(
                                                   "@( dealloc_tb.dealloc_rdy)");
    }
}

void Vdealloc_tb___024root___eval_triggers__act(Vdealloc_tb___024root* vlSelf);

bool Vdealloc_tb___024root___eval_phase__act(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_phase__act\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdealloc_tb___024root___eval_triggers__act(vlSelf);
    Vdealloc_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdealloc_tb___024root___timing_resume(vlSelf);
        Vdealloc_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdealloc_tb___024root___eval_phase__nba(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_phase__nba\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdealloc_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdealloc_tb___024root___dump_triggers__nba(Vdealloc_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdealloc_tb___024root___dump_triggers__act(Vdealloc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdealloc_tb___024root___eval(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdealloc_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dealloc_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vdealloc_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dealloc_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdealloc_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdealloc_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdealloc_tb___024root___eval_debug_assertions(Vdealloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdealloc_tb___024root___eval_debug_assertions\n"); );
    Vdealloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
