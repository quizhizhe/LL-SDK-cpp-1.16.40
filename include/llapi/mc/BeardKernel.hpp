// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct BeardKernel {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEARDKERNEL
public:
    struct BeardKernel& operator=(struct BeardKernel const &) = delete;
    BeardKernel(struct BeardKernel const &) = delete;
    BeardKernel() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEARDKERNEL
#endif

//private:
    MCAPI class std::array<float, 13824> const createBeardKernel();

};