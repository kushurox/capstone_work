// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmalloc_tb.h for the primary calling header

#include "Vmalloc_tb__pch.h"
#include "Vmalloc_tb__Syms.h"
#include "Vmalloc_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmalloc_tb___024root___eval_initial__TOP__Vtiming__0(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtask_malloc_tb__DOT__allocate_blocks__1__core_id_in;
    __Vtask_malloc_tb__DOT__allocate_blocks__1__core_id_in = 0;
    SData/*9:0*/ __Vtask_malloc_tb__DOT__allocate_blocks__1__num_blocks_in;
    __Vtask_malloc_tb__DOT__allocate_blocks__1__num_blocks_in = 0;
    SData/*15:0*/ __Vtask_malloc_tb__DOT__allocate_blocks__1__read_mask_in;
    __Vtask_malloc_tb__DOT__allocate_blocks__1__read_mask_in = 0;
    SData/*15:0*/ __Vtask_malloc_tb__DOT__allocate_blocks__1__write_mask_in;
    __Vtask_malloc_tb__DOT__allocate_blocks__1__write_mask_in = 0;
    CData/*3:0*/ __Vtask_malloc_tb__DOT__allocate_blocks__2__core_id_in;
    __Vtask_malloc_tb__DOT__allocate_blocks__2__core_id_in = 0;
    SData/*9:0*/ __Vtask_malloc_tb__DOT__allocate_blocks__2__num_blocks_in;
    __Vtask_malloc_tb__DOT__allocate_blocks__2__num_blocks_in = 0;
    SData/*15:0*/ __Vtask_malloc_tb__DOT__allocate_blocks__2__read_mask_in;
    __Vtask_malloc_tb__DOT__allocate_blocks__2__read_mask_in = 0;
    SData/*15:0*/ __Vtask_malloc_tb__DOT__allocate_blocks__2__write_mask_in;
    __Vtask_malloc_tb__DOT__allocate_blocks__2__write_mask_in = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x635f7462U;
    __Vtemp_1[2U] = 0x616c6c6fU;
    __Vtemp_1[3U] = 0x6dU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.malloc_tb__DOT__clk = 0U;
    vlSelfRef.malloc_tb__DOT__cs = 0U;
    vlSelfRef.malloc_tb__DOT__core_id = 0U;
    vlSelfRef.malloc_tb__DOT__num_blocks = 0U;
    vlSelfRef.malloc_tb__DOT__read_mask = 0U;
    vlSelfRef.malloc_tb__DOT__write_mask = 0U;
    vlSelfRef.malloc_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_h0f16816a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge malloc_tb.clk)", 
                                                         "malloc_tb.sv", 
                                                         15);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.malloc_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h0f16816a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge malloc_tb.clk)", 
                                                         "malloc_tb.sv", 
                                                         17);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_malloc_tb__DOT__allocate_blocks__1__write_mask_in = 3U;
    __Vtask_malloc_tb__DOT__allocate_blocks__1__read_mask_in = 0xfU;
    __Vtask_malloc_tb__DOT__allocate_blocks__1__num_blocks_in = 4U;
    __Vtask_malloc_tb__DOT__allocate_blocks__1__core_id_in = 1U;
    VL_WRITEF_NX("Requesting allocation: core_id=%0#, num_blocks=%0#, read_mask=0x%0x, write_mask=0x%0x\n",0,
                 4,__Vtask_malloc_tb__DOT__allocate_blocks__1__core_id_in,
                 10,(IData)(__Vtask_malloc_tb__DOT__allocate_blocks__1__num_blocks_in),
                 16,__Vtask_malloc_tb__DOT__allocate_blocks__1__read_mask_in,
                 16,(IData)(__Vtask_malloc_tb__DOT__allocate_blocks__1__write_mask_in));
    vlSelfRef.malloc_tb__DOT__cs = 1U;
    vlSelfRef.malloc_tb__DOT__core_id = __Vtask_malloc_tb__DOT__allocate_blocks__1__core_id_in;
    vlSelfRef.malloc_tb__DOT__num_blocks = __Vtask_malloc_tb__DOT__allocate_blocks__1__num_blocks_in;
    vlSelfRef.malloc_tb__DOT__read_mask = __Vtask_malloc_tb__DOT__allocate_blocks__1__read_mask_in;
    vlSelfRef.malloc_tb__DOT__write_mask = __Vtask_malloc_tb__DOT__allocate_blocks__1__write_mask_in;
    co_await vlSelfRef.__VtrigSched_h0f16816a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge malloc_tb.clk)", 
                                                         "malloc_tb.sv", 
                                                         27);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.malloc_tb__DOT__cs = 0U;
    vlSelfRef.malloc_tb__DOT__core_id = 0U;
    vlSelfRef.malloc_tb__DOT__num_blocks = 0U;
    vlSelfRef.malloc_tb__DOT__read_mask = 0U;
    vlSelfRef.malloc_tb__DOT__write_mask = 0U;
    co_await vlSelfRef.__VtrigSched_hf3646918__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge malloc_tb.rdy)", 
                                                         "malloc_tb.sv", 
                                                         33);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("DUT error: %0#, base_addr: 0x%0x\n",0,
                 2,vlSelfRef.malloc_tb__DOT__err,32,
                 vlSelfRef.malloc_tb__DOT__base_addr);
    co_await vlSelfRef.__VtrigSched_h0f16816a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge malloc_tb.clk)", 
                                                         "malloc_tb.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_malloc_tb__DOT__allocate_blocks__2__write_mask_in = 1U;
    __Vtask_malloc_tb__DOT__allocate_blocks__2__read_mask_in = 0xfU;
    __Vtask_malloc_tb__DOT__allocate_blocks__2__num_blocks_in = 2U;
    __Vtask_malloc_tb__DOT__allocate_blocks__2__core_id_in = 2U;
    VL_WRITEF_NX("Requesting allocation: core_id=%0#, num_blocks=%0#, read_mask=0x%0x, write_mask=0x%0x\n",0,
                 4,__Vtask_malloc_tb__DOT__allocate_blocks__2__core_id_in,
                 10,(IData)(__Vtask_malloc_tb__DOT__allocate_blocks__2__num_blocks_in),
                 16,__Vtask_malloc_tb__DOT__allocate_blocks__2__read_mask_in,
                 16,(IData)(__Vtask_malloc_tb__DOT__allocate_blocks__2__write_mask_in));
    vlSelfRef.malloc_tb__DOT__cs = 1U;
    vlSelfRef.malloc_tb__DOT__core_id = __Vtask_malloc_tb__DOT__allocate_blocks__2__core_id_in;
    vlSelfRef.malloc_tb__DOT__num_blocks = __Vtask_malloc_tb__DOT__allocate_blocks__2__num_blocks_in;
    vlSelfRef.malloc_tb__DOT__read_mask = __Vtask_malloc_tb__DOT__allocate_blocks__2__read_mask_in;
    vlSelfRef.malloc_tb__DOT__write_mask = __Vtask_malloc_tb__DOT__allocate_blocks__2__write_mask_in;
    co_await vlSelfRef.__VtrigSched_h0f16816a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge malloc_tb.clk)", 
                                                         "malloc_tb.sv", 
                                                         27);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.malloc_tb__DOT__cs = 0U;
    vlSelfRef.malloc_tb__DOT__core_id = 0U;
    vlSelfRef.malloc_tb__DOT__num_blocks = 0U;
    vlSelfRef.malloc_tb__DOT__read_mask = 0U;
    vlSelfRef.malloc_tb__DOT__write_mask = 0U;
    co_await vlSelfRef.__VtrigSched_hf3646918__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge malloc_tb.rdy)", 
                                                         "malloc_tb.sv", 
                                                         33);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("DUT error: %0#, base_addr: 0x%0x\n",0,
                 2,vlSelfRef.malloc_tb__DOT__err,32,
                 vlSelfRef.malloc_tb__DOT__base_addr);
    co_await vlSelfRef.__VtrigSched_h0f16816a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge malloc_tb.clk)", 
                                                         "malloc_tb.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("malloc_tb.sv", 89, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmalloc_tb___024root___dump_triggers__act(Vmalloc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmalloc_tb___024root___eval_triggers__act(Vmalloc_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root___eval_triggers__act\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.malloc_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__malloc_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.malloc_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__malloc_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.malloc_tb__DOT__rdy)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__malloc_tb__DOT__rdy__0)));
    vlSelfRef.__VactTriggered.setBit(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__malloc_tb__DOT__clk__0 
        = vlSelfRef.malloc_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__malloc_tb__DOT__rst_n__0 
        = vlSelfRef.malloc_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__malloc_tb__DOT__rdy__0 
        = vlSelfRef.malloc_tb__DOT__rdy;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmalloc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
