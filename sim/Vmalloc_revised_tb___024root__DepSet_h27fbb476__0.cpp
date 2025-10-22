// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmalloc_revised_tb.h for the primary calling header

#include "Vmalloc_revised_tb__pch.h"
#include "Vmalloc_revised_tb___024root.h"

VlCoroutine Vmalloc_revised_tb___024root___eval_initial__TOP__Vtiming__0(Vmalloc_revised_tb___024root* vlSelf);
VlCoroutine Vmalloc_revised_tb___024root___eval_initial__TOP__Vtiming__1(Vmalloc_revised_tb___024root* vlSelf);

void Vmalloc_revised_tb___024root___eval_initial(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval_initial\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vmalloc_revised_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmalloc_revised_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vmalloc_revised_tb___024root___eval_initial__TOP__Vtiming__1(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "malloc_revised_tb.sv", 
                                             84);
        vlSelfRef.malloc_revised_tb__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.malloc_revised_tb__DOT__clk)));
        vlSelfRef.malloc_revised_tb__DOT__cycle_count 
            = (1ULL + vlSelfRef.malloc_revised_tb__DOT__cycle_count);
    }
}

void Vmalloc_revised_tb___024root___eval_act(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval_act\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmalloc_revised_tb___024root___nba_sequent__TOP__0(Vmalloc_revised_tb___024root* vlSelf);

void Vmalloc_revised_tb___024root___eval_nba(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval_nba\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmalloc_revised_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vmalloc_revised_tb___024root___nba_sequent__TOP__0(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___nba_sequent__TOP__0\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*46:0*/ __Vdly__malloc_revised_tb__DOT__malloc_rdata;
    __Vdly__malloc_revised_tb__DOT__malloc_rdata = 0;
    CData/*2:0*/ __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state;
    __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state = 0;
    SData/*9:0*/ __Vdly__malloc_revised_tb__DOT__dut__DOT__reservation_id_reg;
    __Vdly__malloc_revised_tb__DOT__dut__DOT__reservation_id_reg = 0;
    CData/*0:0*/ __Vdly__malloc_revised_tb__DOT__malloc_dequeue;
    __Vdly__malloc_revised_tb__DOT__malloc_dequeue = 0;
    SData/*10:0*/ __Vdly__malloc_revised_tb__DOT__dut__DOT__left;
    __Vdly__malloc_revised_tb__DOT__dut__DOT__left = 0;
    SData/*10:0*/ __Vdly__malloc_revised_tb__DOT__dut__DOT__right;
    __Vdly__malloc_revised_tb__DOT__dut__DOT__right = 0;
    QData/*46:0*/ __VdlyVal__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v0;
    __VdlyVal__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v0;
    __VdlyDim0__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v0;
    __VdlySet__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v1;
    __VdlyDim0__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v1;
    __VdlySet__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v1 = 0;
    SData/*9:0*/ __VdlyVal__malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0;
    __VdlyVal__malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0 = 0;
    SData/*9:0*/ __VdlyDim0__malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0;
    __VdlyDim0__malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0 = 0;
    // Body
    __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state 
        = vlSelfRef.malloc_revised_tb__DOT__dut__DOT__current_state;
    __Vdly__malloc_revised_tb__DOT__dut__DOT__reservation_id_reg 
        = vlSelfRef.malloc_revised_tb__DOT__dut__DOT__reservation_id_reg;
    __Vdly__malloc_revised_tb__DOT__malloc_dequeue 
        = vlSelfRef.malloc_revised_tb__DOT__malloc_dequeue;
    __Vdly__malloc_revised_tb__DOT__dut__DOT__left 
        = vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left;
    __Vdly__malloc_revised_tb__DOT__dut__DOT__right 
        = vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right;
    __Vdly__malloc_revised_tb__DOT__malloc_rdata = vlSelfRef.malloc_revised_tb__DOT__malloc_rdata;
    __VdlySet__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v0 = 0U;
    __VdlySet__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v1 = 0U;
    if (vlSelfRef.malloc_revised_tb__DOT__rst_n) {
        if (vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__current_state) {
            if (vlSelfRef.malloc_revised_tb__DOT__act_mem_cs) {
                if (vlSelfRef.malloc_revised_tb__DOT__malloc_we) {
                    VL_WRITEF_NX("ACT_MEM W: valid=%0b, write_mask=0x%0x, read_mask=0x%0x, core_id=%0#, reservation_id=%0#\n",0,
                                 1,(1U & (IData)((vlSelfRef.malloc_revised_tb__DOT__malloc_wdata 
                                                  >> 0x2eU))),
                                 16,(0xffffU & (IData)(
                                                       (vlSelfRef.malloc_revised_tb__DOT__malloc_wdata 
                                                        >> 0x1eU))),
                                 16,(0xffffU & (IData)(
                                                       (vlSelfRef.malloc_revised_tb__DOT__malloc_wdata 
                                                        >> 0xeU))),
                                 4,(0xfU & (IData)(
                                                   (vlSelfRef.malloc_revised_tb__DOT__malloc_wdata 
                                                    >> 0xaU))),
                                 10,(0x3ffU & (IData)(vlSelfRef.malloc_revised_tb__DOT__malloc_wdata)));
                    __VdlyVal__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v0 
                        = vlSelfRef.malloc_revised_tb__DOT__malloc_wdata;
                    __VdlyDim0__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v0 
                        = vlSelfRef.malloc_revised_tb__DOT__malloc_addr;
                    __VdlySet__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v0 = 1U;
                } else {
                    VL_WRITEF_NX("ACT_MEM R: addr=%0#, valid=%0b, write_mask=0x%0x, read_mask=0x%0x, core_id=%0#, reservation_id=%0#\n",0,
                                 10,vlSelfRef.malloc_revised_tb__DOT__malloc_addr,
                                 1,(1U & (IData)((vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem
                                                  [vlSelfRef.malloc_revised_tb__DOT__malloc_addr] 
                                                  >> 0x2eU))),
                                 16,(0xffffU & (IData)(
                                                       (vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem
                                                        [vlSelfRef.malloc_revised_tb__DOT__malloc_addr] 
                                                        >> 0x1eU))),
                                 16,(0xffffU & (IData)(
                                                       (vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem
                                                        [vlSelfRef.malloc_revised_tb__DOT__malloc_addr] 
                                                        >> 0xeU))),
                                 4,(0xfU & (IData)(
                                                   (vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem
                                                    [vlSelfRef.malloc_revised_tb__DOT__malloc_addr] 
                                                    >> 0xaU))),
                                 10,(0x3ffU & (IData)(
                                                      vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem
                                                      [vlSelfRef.malloc_revised_tb__DOT__malloc_addr])));
                    __Vdly__malloc_revised_tb__DOT__malloc_rdata 
                        = vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem
                        [vlSelfRef.malloc_revised_tb__DOT__malloc_addr];
                }
            }
        } else {
            if ((0x400U == (IData)(vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__index))) {
                vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__current_state = 1U;
                vlSelfRef.malloc_revised_tb__DOT__mem_bsy = 0U;
            }
            __VdlyDim0__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v1 
                = (0x3ffU & (IData)(vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__index));
            __VdlySet__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v1 = 1U;
            vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__index 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__index)));
        }
    } else {
        vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__index = 0U;
        vlSelfRef.malloc_revised_tb__DOT__mem_bsy = 1U;
        vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__current_state = 0U;
    }
    if (__VdlySet__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v0) {
        vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem[__VdlyDim0__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v0] 
            = __VdlyVal__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v0;
    }
    if (__VdlySet__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v1) {
        vlSelfRef.malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem[__VdlyDim0__malloc_revised_tb__DOT__act_mem_inst__DOT__act_mem__v1] = 0ULL;
    }
    if (VL_LIKELY((vlSelfRef.malloc_revised_tb__DOT__rst_n))) {
        if ((4U & (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__current_state))) {
            if ((2U & (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__current_state))) {
                if (VL_LIKELY(((1U & (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__current_state))))) {
                    __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state = 1U;
                } else {
                    VL_WRITEF_NX("MALLOC_RESERVATION_ID: obtained reservation_id=%0#\n",0,
                                 10,vlSelfRef.malloc_revised_tb__DOT__reservation_id);
                    __Vdly__malloc_revised_tb__DOT__dut__DOT__reservation_id_reg 
                        = vlSelfRef.malloc_revised_tb__DOT__reservation_id;
                    __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state = 3U;
                }
            } else if ((1U & (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__current_state))) {
                __Vdly__malloc_revised_tb__DOT__malloc_dequeue = 0U;
                __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state = 6U;
            } else {
                __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state = 0U;
                vlSelfRef.malloc_revised_tb__DOT__rdy = 0U;
                vlSelfRef.malloc_revised_tb__DOT__malloc_bsy = 0U;
                vlSelfRef.malloc_revised_tb__DOT__err = 0U;
                vlSelfRef.malloc_revised_tb__DOT__base_addr = 0U;
                __Vdly__malloc_revised_tb__DOT__malloc_dequeue = 0U;
                vlSelfRef.malloc_revised_tb__DOT__malloc_we = 0U;
                vlSelfRef.malloc_revised_tb__DOT__act_mem_cs = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__current_state))) {
                if (((IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left) 
                     > (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right))) {
                    VL_WRITEF_NX("MALLOC_FOUND: allocation done from %0# to %0# with reservation_id=%0#\n",0,
                                 32,((IData)(1U) + 
                                     ((IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left) 
                                      - (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__num_blocks_reg))),
                                 11,(IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right),
                                 10,vlSelfRef.malloc_revised_tb__DOT__dut__DOT__reservation_id_reg);
                    __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state = 4U;
                    vlSelfRef.malloc_revised_tb__DOT__malloc_we = 0U;
                    vlSelfRef.malloc_revised_tb__DOT__act_mem_cs = 0U;
                    vlSelfRef.malloc_revised_tb__DOT__base_addr 
                        = VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                                   + 
                                                   ((0x3ffU 
                                                     & (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right)) 
                                                    - (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__num_blocks_reg))), 0xaU);
                    vlSelfRef.malloc_revised_tb__DOT__malloc_bsy = 1U;
                    vlSelfRef.malloc_revised_tb__DOT__rdy = 1U;
                } else {
                    VL_WRITEF_NX("MALLOC_FOUND: writing allocation entry at %0#, act_addr=%0#\n",0,
                                 11,vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left,
                                 10,(IData)(vlSelfRef.malloc_revised_tb__DOT__malloc_addr));
                    vlSelfRef.malloc_revised_tb__DOT__malloc_we = 1U;
                    vlSelfRef.malloc_revised_tb__DOT__malloc_wdata 
                        = (((QData)((IData)((0x10000U 
                                             | (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__write_mask_reg)))) 
                            << 0x1eU) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__read_mask_reg) 
                                                          << 0xeU) 
                                                         | (((IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__core_id_reg) 
                                                             << 0xaU) 
                                                            | (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__reservation_id_reg))))));
                    vlSelfRef.malloc_revised_tb__DOT__malloc_addr 
                        = (0x3ffU & (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left));
                    __Vdly__malloc_revised_tb__DOT__dut__DOT__left 
                        = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left)));
                }
            } else if (VL_UNLIKELY(((0x400U == (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right))))) {
                VL_WRITEF_NX("MALLOC_SEARCH_RIGHT: right == BLOCK_COUNT\n",0);
                vlSelfRef.malloc_revised_tb__DOT__err = 1U;
                vlSelfRef.malloc_revised_tb__DOT__rdy = 1U;
                vlSelfRef.malloc_revised_tb__DOT__malloc_bsy = 1U;
                __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state = 4U;
            } else if (VL_UNLIKELY(((((IData)(1U) + 
                                      ((0x3ffU & (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right)) 
                                       - (0x3ffU & (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left)))) 
                                     == (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__num_blocks_reg))))) {
                VL_WRITEF_NX("MALLOC_SEARCH_RIGHT: found enough contiguous blocks from %0# to %0#\n",0,
                             11,vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left,
                             11,(IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right));
                __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state = 5U;
                __Vdly__malloc_revised_tb__DOT__malloc_dequeue = 1U;
            } else if (VL_UNLIKELY(((1U & (IData)((vlSelfRef.malloc_revised_tb__DOT__malloc_rdata 
                                                   >> 0x2eU)))))) {
                VL_WRITEF_NX("MALLOC_SEARCH_RIGHT: couldn't find enough contiguous blocks, restarting search from %0#\n",0,
                             32,((IData)(1U) + (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right)));
                VL_FINISH_MT("malloc_revised.sv", 129, "");
                __Vdly__malloc_revised_tb__DOT__dut__DOT__left 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right)));
                vlSelfRef.malloc_revised_tb__DOT__malloc_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right)));
            } else {
                __Vdly__malloc_revised_tb__DOT__dut__DOT__right 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right)));
                vlSelfRef.malloc_revised_tb__DOT__malloc_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right)));
            }
        } else if ((1U & (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__current_state))) {
            if (VL_UNLIKELY(((0x400U == (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left))))) {
                VL_WRITEF_NX("MALLOC_SEARCH_LEFT: left == BLOCK_COUNT\n",0);
                vlSelfRef.malloc_revised_tb__DOT__err = 1U;
                vlSelfRef.malloc_revised_tb__DOT__rdy = 1U;
                vlSelfRef.malloc_revised_tb__DOT__malloc_bsy = 1U;
                __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state = 4U;
            } else if (VL_LIKELY(((1U & (IData)((vlSelfRef.malloc_revised_tb__DOT__malloc_rdata 
                                                 >> 0x2eU)))))) {
                __Vdly__malloc_revised_tb__DOT__dut__DOT__left 
                    = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left)));
                vlSelfRef.malloc_revised_tb__DOT__malloc_addr 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left)));
                __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state = 7U;
            } else {
                VL_WRITEF_NX("req_core_id=%0#, owner: %0# valid=%0b\nMALLOC_SEARCH_LEFT: found free block at %0#\n",0,
                             4,vlSelfRef.malloc_revised_tb__DOT__dut__DOT__core_id_reg,
                             4,(0xfU & (IData)((vlSelfRef.malloc_revised_tb__DOT__malloc_rdata 
                                                >> 0xaU))),
                             1,(1U & (IData)((vlSelfRef.malloc_revised_tb__DOT__malloc_rdata 
                                              >> 0x2eU))),
                             11,(IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left));
                __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state = 2U;
                __Vdly__malloc_revised_tb__DOT__dut__DOT__right 
                    = vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left;
                vlSelfRef.malloc_revised_tb__DOT__malloc_addr 
                    = (0x3ffU & (IData)(vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left));
            }
        } else if (VL_UNLIKELY((vlSelfRef.malloc_revised_tb__DOT__malloc_cs))) {
            VL_WRITEF_NX("Malloc request received at cycle %0#\ncore_id: %0#, num_blocks: %0#, read_mask: %0b, write_mask: %0b\n",0,
                         64,VL_TIME_UNITED_Q(1),4,(IData)(vlSelfRef.malloc_revised_tb__DOT__core_id),
                         10,vlSelfRef.malloc_revised_tb__DOT__num_blocks,
                         16,(IData)(vlSelfRef.malloc_revised_tb__DOT__read_mask),
                         16,vlSelfRef.malloc_revised_tb__DOT__write_mask);
            vlSelfRef.malloc_revised_tb__DOT__dut__DOT__core_id_reg 
                = vlSelfRef.malloc_revised_tb__DOT__core_id;
            vlSelfRef.malloc_revised_tb__DOT__dut__DOT__num_blocks_reg 
                = vlSelfRef.malloc_revised_tb__DOT__num_blocks;
            vlSelfRef.malloc_revised_tb__DOT__dut__DOT__read_mask_reg 
                = vlSelfRef.malloc_revised_tb__DOT__read_mask;
            vlSelfRef.malloc_revised_tb__DOT__dut__DOT__write_mask_reg 
                = vlSelfRef.malloc_revised_tb__DOT__write_mask;
            __Vdly__malloc_revised_tb__DOT__dut__DOT__left = 0U;
            __Vdly__malloc_revised_tb__DOT__dut__DOT__right = 0U;
            vlSelfRef.malloc_revised_tb__DOT__rdy = 0U;
            vlSelfRef.malloc_revised_tb__DOT__malloc_bsy = 1U;
            vlSelfRef.malloc_revised_tb__DOT__err = 0U;
            __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state = 7U;
            vlSelfRef.malloc_revised_tb__DOT__act_mem_cs = 1U;
            vlSelfRef.malloc_revised_tb__DOT__malloc_we = 0U;
            vlSelfRef.malloc_revised_tb__DOT__malloc_addr = 0U;
        }
    } else {
        VL_WRITEF_NX("MALLOC_RESET\n",0);
        __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state = 0U;
        vlSelfRef.malloc_revised_tb__DOT__rdy = 0U;
        vlSelfRef.malloc_revised_tb__DOT__malloc_bsy = 0U;
        vlSelfRef.malloc_revised_tb__DOT__err = 0U;
        vlSelfRef.malloc_revised_tb__DOT__base_addr = 0U;
        __Vdly__malloc_revised_tb__DOT__dut__DOT__left = 0U;
        __Vdly__malloc_revised_tb__DOT__dut__DOT__right = 0U;
        vlSelfRef.malloc_revised_tb__DOT__malloc_we = 0U;
        vlSelfRef.malloc_revised_tb__DOT__act_mem_cs = 0U;
        __Vdly__malloc_revised_tb__DOT__malloc_dequeue = 0U;
    }
    vlSelfRef.malloc_revised_tb__DOT__malloc_rdata 
        = __Vdly__malloc_revised_tb__DOT__malloc_rdata;
    vlSelfRef.malloc_revised_tb__DOT__dut__DOT__current_state 
        = __Vdly__malloc_revised_tb__DOT__dut__DOT__current_state;
    vlSelfRef.malloc_revised_tb__DOT__dut__DOT__reservation_id_reg 
        = __Vdly__malloc_revised_tb__DOT__dut__DOT__reservation_id_reg;
    vlSelfRef.malloc_revised_tb__DOT__dut__DOT__left 
        = __Vdly__malloc_revised_tb__DOT__dut__DOT__left;
    vlSelfRef.malloc_revised_tb__DOT__dut__DOT__right 
        = __Vdly__malloc_revised_tb__DOT__dut__DOT__right;
    if (vlSelfRef.malloc_revised_tb__DOT__rst_n) {
        if (VL_UNLIKELY(((((IData)(vlSelfRef.malloc_revised_tb__DOT__malloc_dequeue) 
                           & (IData)(vlSelfRef.malloc_revised_tb__DOT__queue_rdy)) 
                          & (0U < (IData)(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__queue_length)))))) {
            vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__queue_length 
                = (0x7ffU & ((IData)(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__queue_length) 
                             - (IData)(1U)));
            vlSelfRef.malloc_revised_tb__DOT__reservation_id 
                = vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids
                [vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__left];
            VL_WRITEF_NX("RESERVATION_COUNTER: Dequeue reservation id %0#\nNew Reservation head index: %0#\n",0,
                         10,vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids
                         [vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__left],
                         10,vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids
                         [(0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__left)))]);
            vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__left 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__left)));
        }
    } else {
        vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__queue_length = 0x400U;
        vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i = 0U;
        vlSelfRef.malloc_revised_tb__DOT__queue_rdy = 1U;
        vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__left = 0U;
        vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__right = 0U;
        vlSelfRef.malloc_revised_tb__DOT__reservation_id = 0U;
        while ((0x400U > (IData)(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i))) {
            __VdlyVal__malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0 
                = (0x3ffU & (IData)(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i));
            __VdlyDim0__malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0 
                = (0x3ffU & (IData)(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i));
            vlSelfRef.__VdlyCommitQueuemalloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids.enqueue(__VdlyVal__malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0, (IData)(__VdlyDim0__malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids__v0));
            vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__unnamedblk1__DOT__i)));
        }
    }
    vlSelfRef.malloc_revised_tb__DOT__malloc_dequeue 
        = __Vdly__malloc_revised_tb__DOT__malloc_dequeue;
    vlSelfRef.__VdlyCommitQueuemalloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids.commit(vlSelfRef.malloc_revised_tb__DOT__reservation_counter_inst__DOT__reservation_ids);
}

void Vmalloc_revised_tb___024root___timing_resume(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___timing_resume\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he432af85__0.resume(
                                                   "@(posedge malloc_revised_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h47ecf72e__0.resume(
                                                   "@( (~ malloc_revised_tb.mem_bsy))");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he432b044__0.resume(
                                                   "@(negedge malloc_revised_tb.clk)");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2520cd0e__0.resume(
                                                   "@( malloc_revised_tb.rdy)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmalloc_revised_tb___024root___timing_commit(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___timing_commit\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he432af85__0.commit(
                                                   "@(posedge malloc_revised_tb.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h47ecf72e__0.commit(
                                                   "@( (~ malloc_revised_tb.mem_bsy))");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he432b044__0.commit(
                                                   "@(negedge malloc_revised_tb.clk)");
    }
    if ((! (0x20ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2520cd0e__0.commit(
                                                   "@( malloc_revised_tb.rdy)");
    }
}

void Vmalloc_revised_tb___024root___eval_triggers__act(Vmalloc_revised_tb___024root* vlSelf);

bool Vmalloc_revised_tb___024root___eval_phase__act(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval_phase__act\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmalloc_revised_tb___024root___eval_triggers__act(vlSelf);
    Vmalloc_revised_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmalloc_revised_tb___024root___timing_resume(vlSelf);
        Vmalloc_revised_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmalloc_revised_tb___024root___eval_phase__nba(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval_phase__nba\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmalloc_revised_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmalloc_revised_tb___024root___dump_triggers__nba(Vmalloc_revised_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmalloc_revised_tb___024root___dump_triggers__act(Vmalloc_revised_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmalloc_revised_tb___024root___eval(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vmalloc_revised_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("malloc_revised_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmalloc_revised_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("malloc_revised_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmalloc_revised_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmalloc_revised_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmalloc_revised_tb___024root___eval_debug_assertions(Vmalloc_revised_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_revised_tb___024root___eval_debug_assertions\n"); );
    Vmalloc_revised_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
