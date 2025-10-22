// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vmalloc_tb__Syms.h"


void Vmalloc_tb___024root__trace_chg_0_sub_0(Vmalloc_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vmalloc_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root__trace_chg_0\n"); );
    // Init
    Vmalloc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmalloc_tb___024root*>(voidSelf);
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmalloc_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmalloc_tb___024root__trace_chg_0_sub_0(Vmalloc_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root__trace_chg_0_sub_0\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.malloc_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.malloc_tb__DOT__cs));
        bufp->chgCData(oldp+2,(vlSelfRef.malloc_tb__DOT__core_id),4);
        bufp->chgSData(oldp+3,(vlSelfRef.malloc_tb__DOT__num_blocks),10);
        bufp->chgSData(oldp+4,(vlSelfRef.malloc_tb__DOT__read_mask),16);
        bufp->chgSData(oldp+5,(vlSelfRef.malloc_tb__DOT__write_mask),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+6,((1U & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[1U] 
                                    >> 0xfU))));
        bufp->chgSData(oldp+7,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[1U] 
                                            << 1U) 
                                           | (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0U] 
                                              >> 0x1fU)))),16);
        bufp->chgSData(oldp+8,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0U] 
                                           >> 0xfU))),16);
        bufp->chgCData(oldp+9,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0U] 
                                        >> 0xbU))),4);
        bufp->chgSData(oldp+10,((0x7ffU & vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0U])),11);
        bufp->chgBit(oldp+11,((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[2U] 
                               >> 0x1fU)));
        bufp->chgSData(oldp+12,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[2U] 
                                            >> 0xfU))),16);
        bufp->chgSData(oldp+13,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[2U] 
                                             << 1U) 
                                            | (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[1U] 
                                               >> 0x1fU)))),16);
        bufp->chgCData(oldp+14,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[1U] 
                                         >> 0x1bU))),4);
        bufp->chgSData(oldp+15,((0x7ffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[1U] 
                                           >> 0x10U))),11);
        bufp->chgBit(oldp+16,((1U & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[4U] 
                                     >> 0xfU))));
        bufp->chgSData(oldp+17,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[4U] 
                                             << 1U) 
                                            | (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[3U] 
                                               >> 0x1fU)))),16);
        bufp->chgSData(oldp+18,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[3U] 
                                            >> 0xfU))),16);
        bufp->chgCData(oldp+19,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[3U] 
                                         >> 0xbU))),4);
        bufp->chgSData(oldp+20,((0x7ffU & vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[3U])),11);
        bufp->chgBit(oldp+21,((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[5U] 
                               >> 0x1fU)));
        bufp->chgSData(oldp+22,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[5U] 
                                            >> 0xfU))),16);
        bufp->chgSData(oldp+23,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[5U] 
                                             << 1U) 
                                            | (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[4U] 
                                               >> 0x1fU)))),16);
        bufp->chgCData(oldp+24,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[4U] 
                                         >> 0x1bU))),4);
        bufp->chgSData(oldp+25,((0x7ffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[4U] 
                                           >> 0x10U))),11);
        bufp->chgBit(oldp+26,((1U & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[7U] 
                                     >> 0xfU))));
        bufp->chgSData(oldp+27,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[7U] 
                                             << 1U) 
                                            | (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[6U] 
                                               >> 0x1fU)))),16);
        bufp->chgSData(oldp+28,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[6U] 
                                            >> 0xfU))),16);
        bufp->chgCData(oldp+29,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[6U] 
                                         >> 0xbU))),4);
        bufp->chgSData(oldp+30,((0x7ffU & vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[6U])),11);
        bufp->chgBit(oldp+31,((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[8U] 
                               >> 0x1fU)));
        bufp->chgSData(oldp+32,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[8U] 
                                            >> 0xfU))),16);
        bufp->chgSData(oldp+33,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[8U] 
                                             << 1U) 
                                            | (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[7U] 
                                               >> 0x1fU)))),16);
        bufp->chgCData(oldp+34,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[7U] 
                                         >> 0x1bU))),4);
        bufp->chgSData(oldp+35,((0x7ffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[7U] 
                                           >> 0x10U))),11);
        bufp->chgBit(oldp+36,((1U & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xaU] 
                                     >> 0xfU))));
        bufp->chgSData(oldp+37,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xaU] 
                                             << 1U) 
                                            | (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[9U] 
                                               >> 0x1fU)))),16);
        bufp->chgSData(oldp+38,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[9U] 
                                            >> 0xfU))),16);
        bufp->chgCData(oldp+39,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[9U] 
                                         >> 0xbU))),4);
        bufp->chgSData(oldp+40,((0x7ffU & vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[9U])),11);
        bufp->chgBit(oldp+41,((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xbU] 
                               >> 0x1fU)));
        bufp->chgSData(oldp+42,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xbU] 
                                            >> 0xfU))),16);
        bufp->chgSData(oldp+43,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xbU] 
                                             << 1U) 
                                            | (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xaU] 
                                               >> 0x1fU)))),16);
        bufp->chgCData(oldp+44,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xaU] 
                                         >> 0x1bU))),4);
        bufp->chgSData(oldp+45,((0x7ffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xaU] 
                                           >> 0x10U))),11);
        bufp->chgBit(oldp+46,((1U & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xdU] 
                                     >> 0xfU))));
        bufp->chgSData(oldp+47,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xdU] 
                                             << 1U) 
                                            | (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xcU] 
                                               >> 0x1fU)))),16);
        bufp->chgSData(oldp+48,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xcU] 
                                            >> 0xfU))),16);
        bufp->chgCData(oldp+49,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xcU] 
                                         >> 0xbU))),4);
        bufp->chgSData(oldp+50,((0x7ffU & vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xcU])),11);
        bufp->chgBit(oldp+51,((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xeU] 
                               >> 0x1fU)));
        bufp->chgSData(oldp+52,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xeU] 
                                            >> 0xfU))),16);
        bufp->chgSData(oldp+53,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xeU] 
                                             << 1U) 
                                            | (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xdU] 
                                               >> 0x1fU)))),16);
        bufp->chgCData(oldp+54,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xdU] 
                                         >> 0x1bU))),4);
        bufp->chgSData(oldp+55,((0x7ffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xdU] 
                                           >> 0x10U))),11);
        bufp->chgIData(oldp+56,(vlSelfRef.malloc_tb__DOT__base_addr),32);
        bufp->chgBit(oldp+57,(vlSelfRef.malloc_tb__DOT__rdy));
        bufp->chgBit(oldp+58,(vlSelfRef.malloc_tb__DOT__bsy));
        bufp->chgCData(oldp+59,(vlSelfRef.malloc_tb__DOT__err),2);
        bufp->chgCData(oldp+60,(vlSelfRef.malloc_tb__DOT__dut__DOT__current_state),3);
        bufp->chgBit(oldp+61,((1U & (IData)((vlSelfRef.malloc_tb__DOT__dut__DOT__e 
                                             >> 0x2fU)))));
        bufp->chgSData(oldp+62,((0xffffU & (IData)(
                                                   (vlSelfRef.malloc_tb__DOT__dut__DOT__e 
                                                    >> 0x1fU)))),16);
        bufp->chgSData(oldp+63,((0xffffU & (IData)(
                                                   (vlSelfRef.malloc_tb__DOT__dut__DOT__e 
                                                    >> 0xfU)))),16);
        bufp->chgCData(oldp+64,((0xfU & (IData)((vlSelfRef.malloc_tb__DOT__dut__DOT__e 
                                                 >> 0xbU)))),4);
        bufp->chgSData(oldp+65,((0x7ffU & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__e))),11);
        bufp->chgCData(oldp+66,(vlSelfRef.malloc_tb__DOT__dut__DOT__core_id_reg),4);
        bufp->chgSData(oldp+67,(vlSelfRef.malloc_tb__DOT__dut__DOT__num_blocks_reg),10);
        bufp->chgSData(oldp+68,(vlSelfRef.malloc_tb__DOT__dut__DOT__read_mask_reg),16);
        bufp->chgSData(oldp+69,(vlSelfRef.malloc_tb__DOT__dut__DOT__write_mask_reg),16);
        bufp->chgSData(oldp+70,(vlSelfRef.malloc_tb__DOT__dut__DOT__left),11);
        bufp->chgSData(oldp+71,(vlSelfRef.malloc_tb__DOT__dut__DOT__right),11);
        bufp->chgSData(oldp+72,(vlSelfRef.malloc_tb__DOT__dut__DOT__reservation_counter),11);
    }
    bufp->chgBit(oldp+73,(vlSelfRef.malloc_tb__DOT__clk));
}

void Vmalloc_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root__trace_cleanup\n"); );
    // Init
    Vmalloc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmalloc_tb___024root*>(voidSelf);
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
