// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vact_mem_tb__Syms.h"


void Vact_mem_tb___024root__trace_chg_0_sub_0(Vact_mem_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vact_mem_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root__trace_chg_0\n"); );
    // Init
    Vact_mem_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vact_mem_tb___024root*>(voidSelf);
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vact_mem_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vact_mem_tb___024root__trace_chg_0_sub_0(Vact_mem_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root__trace_chg_0_sub_0\n"); );
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.act_mem_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.act_mem_tb__DOT__cs));
        bufp->chgBit(oldp+2,(vlSelfRef.act_mem_tb__DOT__malloc_dealloc));
        bufp->chgBit(oldp+3,(vlSelfRef.act_mem_tb__DOT__malloc_we));
        bufp->chgBit(oldp+4,((1U & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_wdata 
                                            >> 0x2eU)))));
        bufp->chgSData(oldp+5,((0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_wdata 
                                                   >> 0x1eU)))),16);
        bufp->chgSData(oldp+6,((0xffffU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_wdata 
                                                   >> 0xeU)))),16);
        bufp->chgCData(oldp+7,((0xfU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_wdata 
                                                >> 0xaU)))),4);
        bufp->chgSData(oldp+8,((0x3ffU & (IData)(vlSelfRef.act_mem_tb__DOT__malloc_wdata))),10);
        bufp->chgSData(oldp+9,(vlSelfRef.act_mem_tb__DOT__malloc_addr),10);
        bufp->chgBit(oldp+10,(vlSelfRef.act_mem_tb__DOT__dealloc_we));
        bufp->chgBit(oldp+11,((1U & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_wdata 
                                             >> 0x2eU)))));
        bufp->chgSData(oldp+12,((0xffffU & (IData)(
                                                   (vlSelfRef.act_mem_tb__DOT__dealloc_wdata 
                                                    >> 0x1eU)))),16);
        bufp->chgSData(oldp+13,((0xffffU & (IData)(
                                                   (vlSelfRef.act_mem_tb__DOT__dealloc_wdata 
                                                    >> 0xeU)))),16);
        bufp->chgCData(oldp+14,((0xfU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_wdata 
                                                 >> 0xaU)))),4);
        bufp->chgSData(oldp+15,((0x3ffU & (IData)(vlSelfRef.act_mem_tb__DOT__dealloc_wdata))),10);
        bufp->chgSData(oldp+16,(vlSelfRef.act_mem_tb__DOT__dealloc_addr),10);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+17,((1U & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                             >> 0x2eU)))));
        bufp->chgSData(oldp+18,((0xffffU & (IData)(
                                                   (vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                                    >> 0x1eU)))),16);
        bufp->chgSData(oldp+19,((0xffffU & (IData)(
                                                   (vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                                    >> 0xeU)))),16);
        bufp->chgCData(oldp+20,((0xfU & (IData)((vlSelfRef.act_mem_tb__DOT__malloc_rdata 
                                                 >> 0xaU)))),4);
        bufp->chgSData(oldp+21,((0x3ffU & (IData)(vlSelfRef.act_mem_tb__DOT__malloc_rdata))),10);
        bufp->chgBit(oldp+22,((1U & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                             >> 0x2eU)))));
        bufp->chgSData(oldp+23,((0xffffU & (IData)(
                                                   (vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                                    >> 0x1eU)))),16);
        bufp->chgSData(oldp+24,((0xffffU & (IData)(
                                                   (vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                                    >> 0xeU)))),16);
        bufp->chgCData(oldp+25,((0xfU & (IData)((vlSelfRef.act_mem_tb__DOT__dealloc_rdata 
                                                 >> 0xaU)))),4);
        bufp->chgSData(oldp+26,((0x3ffU & (IData)(vlSelfRef.act_mem_tb__DOT__dealloc_rdata))),10);
        bufp->chgBit(oldp+27,(vlSelfRef.act_mem_tb__DOT__bsy));
        bufp->chgBit(oldp+28,(vlSelfRef.act_mem_tb__DOT__dut__DOT__current_state));
        bufp->chgSData(oldp+29,(vlSelfRef.act_mem_tb__DOT__dut__DOT__index),11);
    }
    bufp->chgBit(oldp+30,(vlSelfRef.act_mem_tb__DOT__clk));
}

void Vact_mem_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vact_mem_tb___024root__trace_cleanup\n"); );
    // Init
    Vact_mem_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vact_mem_tb___024root*>(voidSelf);
    Vact_mem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
