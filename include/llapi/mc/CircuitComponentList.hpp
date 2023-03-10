// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CircuitComponentList {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITCOMPONENTLIST
public:
    class CircuitComponentList& operator=(class CircuitComponentList const &) = delete;
    CircuitComponentList(class CircuitComponentList const &) = delete;
    CircuitComponentList() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CIRCUITCOMPONENTLIST
#endif
    MCAPI void add(class BaseCircuitComponent *, int, class BlockPos);
    MCAPI bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    MCAPI ~CircuitComponentList();

};