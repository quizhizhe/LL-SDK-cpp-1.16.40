// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SelectorBehaviorNode {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SELECTORBEHAVIORNODE
public:
    class SelectorBehaviorNode& operator=(class SelectorBehaviorNode const &) = delete;
    SelectorBehaviorNode(class SelectorBehaviorNode const &) = delete;
    SelectorBehaviorNode() = delete;
#endif

public:
    /*0*/ virtual ~SelectorBehaviorNode();
    /*1*/ virtual enum BehaviorStatus tick(class Actor &);
    /*2*/ virtual void initializeFromDefinition(class Actor &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SELECTORBEHAVIORNODE
#endif

};