// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AABBPred {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AABBPRED
public:
    class AABBPred& operator=(class AABBPred const &) = delete;
    AABBPred(class AABBPred const &) = delete;
    AABBPred() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AABBPRED
#endif
    MCAPI bool operator()(class AABB const &, class AABB const &) const;

};