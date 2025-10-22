// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vmalloc_tb__Syms.h"


VL_ATTR_COLD void Vmalloc_tb___024root__trace_init_sub__TOP____024unit__0(Vmalloc_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vmalloc_tb___024root__trace_init_sub__TOP__0(Vmalloc_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root__trace_init_sub__TOP__0\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$unit", VerilatedTracePrefixType::SCOPE_MODULE);
    Vmalloc_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("malloc_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+74,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"core_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"num_blocks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+5,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("act", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+7,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+12,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+17,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+22,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+27,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+32,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+35,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+37,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+40,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+42,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+47,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+52,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+57,0,"base_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"rdy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"bsy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+74,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"core_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"num_blocks",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+5,0,"read_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"write_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("act", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+7,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+12,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+17,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+19,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+20,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+22,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+24,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+25,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+26,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+27,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+29,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+30,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+32,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+34,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+35,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+37,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+39,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+40,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+42,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+44,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+47,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+50,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+52,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"write_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+54,0,"read_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"owner",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"reservation_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+57,0,"base_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"rdy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"bsy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"err",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+61,0,"current_state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("e", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+62,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"write_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+64,0,"read_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+65,0,"owner",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+66,0,"reservation_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->declBus(c+67,0,"core_id_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,0,"num_blocks_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+69,0,"read_mask_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+70,0,"write_mask_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+71,0,"left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+72,0,"right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+73,0,"reservation_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmalloc_tb___024root__trace_init_sub__TOP____024unit__0(Vmalloc_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+75,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"CORE_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"SHARED_MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"CORE_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"BLOCK_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"BLOCK_COUNT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"REGION_SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vmalloc_tb___024root__trace_init_top(Vmalloc_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root__trace_init_top\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmalloc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmalloc_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vmalloc_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vmalloc_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vmalloc_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vmalloc_tb___024root__trace_register(Vmalloc_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root__trace_register\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vmalloc_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmalloc_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmalloc_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmalloc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmalloc_tb___024root__trace_const_0_sub_0(Vmalloc_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vmalloc_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root__trace_const_0\n"); );
    // Init
    Vmalloc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmalloc_tb___024root*>(voidSelf);
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmalloc_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmalloc_tb___024root__trace_const_0_sub_0(Vmalloc_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root__trace_const_0_sub_0\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+75,(0x20U),32);
    bufp->fullIData(oldp+76,(0x10U),32);
    bufp->fullIData(oldp+77,(0x100000U),32);
    bufp->fullIData(oldp+78,(0x400U),32);
    bufp->fullIData(oldp+79,(4U),32);
    bufp->fullIData(oldp+80,(0xaU),32);
}

VL_ATTR_COLD void Vmalloc_tb___024root__trace_full_0_sub_0(Vmalloc_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vmalloc_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root__trace_full_0\n"); );
    // Init
    Vmalloc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmalloc_tb___024root*>(voidSelf);
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmalloc_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmalloc_tb___024root__trace_full_0_sub_0(Vmalloc_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmalloc_tb___024root__trace_full_0_sub_0\n"); );
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.malloc_tb__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.malloc_tb__DOT__cs));
    bufp->fullCData(oldp+3,(vlSelfRef.malloc_tb__DOT__core_id),4);
    bufp->fullSData(oldp+4,(vlSelfRef.malloc_tb__DOT__num_blocks),10);
    bufp->fullSData(oldp+5,(vlSelfRef.malloc_tb__DOT__read_mask),16);
    bufp->fullSData(oldp+6,(vlSelfRef.malloc_tb__DOT__write_mask),16);
    bufp->fullBit(oldp+7,((1U & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[1U] 
                                 >> 0xfU))));
    bufp->fullSData(oldp+8,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[1U] 
                                         << 1U) | (
                                                   vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0U] 
                                                   >> 0x1fU)))),16);
    bufp->fullSData(oldp+9,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0U] 
                                        >> 0xfU))),16);
    bufp->fullCData(oldp+10,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0U] 
                                      >> 0xbU))),4);
    bufp->fullSData(oldp+11,((0x7ffU & vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0U])),11);
    bufp->fullBit(oldp+12,((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[2U] 
                            >> 0x1fU)));
    bufp->fullSData(oldp+13,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[2U] 
                                         >> 0xfU))),16);
    bufp->fullSData(oldp+14,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[2U] 
                                          << 1U) | 
                                         (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[1U] 
                                          >> 0x1fU)))),16);
    bufp->fullCData(oldp+15,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[1U] 
                                      >> 0x1bU))),4);
    bufp->fullSData(oldp+16,((0x7ffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[1U] 
                                        >> 0x10U))),11);
    bufp->fullBit(oldp+17,((1U & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[4U] 
                                  >> 0xfU))));
    bufp->fullSData(oldp+18,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[4U] 
                                          << 1U) | 
                                         (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[3U] 
                                          >> 0x1fU)))),16);
    bufp->fullSData(oldp+19,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[3U] 
                                         >> 0xfU))),16);
    bufp->fullCData(oldp+20,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[3U] 
                                      >> 0xbU))),4);
    bufp->fullSData(oldp+21,((0x7ffU & vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[3U])),11);
    bufp->fullBit(oldp+22,((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[5U] 
                            >> 0x1fU)));
    bufp->fullSData(oldp+23,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[5U] 
                                         >> 0xfU))),16);
    bufp->fullSData(oldp+24,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[5U] 
                                          << 1U) | 
                                         (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[4U] 
                                          >> 0x1fU)))),16);
    bufp->fullCData(oldp+25,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[4U] 
                                      >> 0x1bU))),4);
    bufp->fullSData(oldp+26,((0x7ffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[4U] 
                                        >> 0x10U))),11);
    bufp->fullBit(oldp+27,((1U & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[7U] 
                                  >> 0xfU))));
    bufp->fullSData(oldp+28,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[7U] 
                                          << 1U) | 
                                         (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[6U] 
                                          >> 0x1fU)))),16);
    bufp->fullSData(oldp+29,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[6U] 
                                         >> 0xfU))),16);
    bufp->fullCData(oldp+30,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[6U] 
                                      >> 0xbU))),4);
    bufp->fullSData(oldp+31,((0x7ffU & vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[6U])),11);
    bufp->fullBit(oldp+32,((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[8U] 
                            >> 0x1fU)));
    bufp->fullSData(oldp+33,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[8U] 
                                         >> 0xfU))),16);
    bufp->fullSData(oldp+34,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[8U] 
                                          << 1U) | 
                                         (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[7U] 
                                          >> 0x1fU)))),16);
    bufp->fullCData(oldp+35,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[7U] 
                                      >> 0x1bU))),4);
    bufp->fullSData(oldp+36,((0x7ffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[7U] 
                                        >> 0x10U))),11);
    bufp->fullBit(oldp+37,((1U & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xaU] 
                                  >> 0xfU))));
    bufp->fullSData(oldp+38,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xaU] 
                                          << 1U) | 
                                         (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[9U] 
                                          >> 0x1fU)))),16);
    bufp->fullSData(oldp+39,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[9U] 
                                         >> 0xfU))),16);
    bufp->fullCData(oldp+40,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[9U] 
                                      >> 0xbU))),4);
    bufp->fullSData(oldp+41,((0x7ffU & vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[9U])),11);
    bufp->fullBit(oldp+42,((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xbU] 
                            >> 0x1fU)));
    bufp->fullSData(oldp+43,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xbU] 
                                         >> 0xfU))),16);
    bufp->fullSData(oldp+44,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xbU] 
                                          << 1U) | 
                                         (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xaU] 
                                          >> 0x1fU)))),16);
    bufp->fullCData(oldp+45,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xaU] 
                                      >> 0x1bU))),4);
    bufp->fullSData(oldp+46,((0x7ffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xaU] 
                                        >> 0x10U))),11);
    bufp->fullBit(oldp+47,((1U & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xdU] 
                                  >> 0xfU))));
    bufp->fullSData(oldp+48,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xdU] 
                                          << 1U) | 
                                         (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xcU] 
                                          >> 0x1fU)))),16);
    bufp->fullSData(oldp+49,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xcU] 
                                         >> 0xfU))),16);
    bufp->fullCData(oldp+50,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xcU] 
                                      >> 0xbU))),4);
    bufp->fullSData(oldp+51,((0x7ffU & vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xcU])),11);
    bufp->fullBit(oldp+52,((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xeU] 
                            >> 0x1fU)));
    bufp->fullSData(oldp+53,((0xffffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xeU] 
                                         >> 0xfU))),16);
    bufp->fullSData(oldp+54,((0xffffU & ((vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xeU] 
                                          << 1U) | 
                                         (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xdU] 
                                          >> 0x1fU)))),16);
    bufp->fullCData(oldp+55,((0xfU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xdU] 
                                      >> 0x1bU))),4);
    bufp->fullSData(oldp+56,((0x7ffU & (vlSelfRef.malloc_tb__DOT____Vcellout__dut__act[0xdU] 
                                        >> 0x10U))),11);
    bufp->fullIData(oldp+57,(vlSelfRef.malloc_tb__DOT__base_addr),32);
    bufp->fullBit(oldp+58,(vlSelfRef.malloc_tb__DOT__rdy));
    bufp->fullBit(oldp+59,(vlSelfRef.malloc_tb__DOT__bsy));
    bufp->fullCData(oldp+60,(vlSelfRef.malloc_tb__DOT__err),2);
    bufp->fullCData(oldp+61,(vlSelfRef.malloc_tb__DOT__dut__DOT__current_state),3);
    bufp->fullBit(oldp+62,((1U & (IData)((vlSelfRef.malloc_tb__DOT__dut__DOT__e 
                                          >> 0x2fU)))));
    bufp->fullSData(oldp+63,((0xffffU & (IData)((vlSelfRef.malloc_tb__DOT__dut__DOT__e 
                                                 >> 0x1fU)))),16);
    bufp->fullSData(oldp+64,((0xffffU & (IData)((vlSelfRef.malloc_tb__DOT__dut__DOT__e 
                                                 >> 0xfU)))),16);
    bufp->fullCData(oldp+65,((0xfU & (IData)((vlSelfRef.malloc_tb__DOT__dut__DOT__e 
                                              >> 0xbU)))),4);
    bufp->fullSData(oldp+66,((0x7ffU & (IData)(vlSelfRef.malloc_tb__DOT__dut__DOT__e))),11);
    bufp->fullCData(oldp+67,(vlSelfRef.malloc_tb__DOT__dut__DOT__core_id_reg),4);
    bufp->fullSData(oldp+68,(vlSelfRef.malloc_tb__DOT__dut__DOT__num_blocks_reg),10);
    bufp->fullSData(oldp+69,(vlSelfRef.malloc_tb__DOT__dut__DOT__read_mask_reg),16);
    bufp->fullSData(oldp+70,(vlSelfRef.malloc_tb__DOT__dut__DOT__write_mask_reg),16);
    bufp->fullSData(oldp+71,(vlSelfRef.malloc_tb__DOT__dut__DOT__left),11);
    bufp->fullSData(oldp+72,(vlSelfRef.malloc_tb__DOT__dut__DOT__right),11);
    bufp->fullSData(oldp+73,(vlSelfRef.malloc_tb__DOT__dut__DOT__reservation_counter),11);
    bufp->fullBit(oldp+74,(vlSelfRef.malloc_tb__DOT__clk));
}
