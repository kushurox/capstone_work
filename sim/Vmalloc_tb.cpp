// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmalloc_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vmalloc_tb::Vmalloc_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmalloc_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmalloc_tb::Vmalloc_tb(const char* _vcname__)
    : Vmalloc_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmalloc_tb::~Vmalloc_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmalloc_tb___024root___eval_debug_assertions(Vmalloc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vmalloc_tb___024root___eval_static(Vmalloc_tb___024root* vlSelf);
void Vmalloc_tb___024root___eval_initial(Vmalloc_tb___024root* vlSelf);
void Vmalloc_tb___024root___eval_settle(Vmalloc_tb___024root* vlSelf);
void Vmalloc_tb___024root___eval(Vmalloc_tb___024root* vlSelf);

void Vmalloc_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmalloc_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmalloc_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmalloc_tb___024root___eval_static(&(vlSymsp->TOP));
        Vmalloc_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vmalloc_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmalloc_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vmalloc_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vmalloc_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vmalloc_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vmalloc_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vmalloc_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmalloc_tb___024root___eval_final(Vmalloc_tb___024root* vlSelf);

VL_ATTR_COLD void Vmalloc_tb::final() {
    Vmalloc_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmalloc_tb::hierName() const { return vlSymsp->name(); }
const char* Vmalloc_tb::modelName() const { return "Vmalloc_tb"; }
unsigned Vmalloc_tb::threads() const { return 1; }
void Vmalloc_tb::prepareClone() const { contextp()->prepareClone(); }
void Vmalloc_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmalloc_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmalloc_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vmalloc_tb___024root__trace_init_top(Vmalloc_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmalloc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmalloc_tb___024root*>(voidSelf);
    Vmalloc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmalloc_tb___024root__trace_decl_types(tracep);
    Vmalloc_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmalloc_tb___024root__trace_register(Vmalloc_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vmalloc_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmalloc_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmalloc_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
