// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class InteractActionNode {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTACTIONNODE
public:
    class InteractActionNode& operator=(class InteractActionNode const &) = delete;
    InteractActionNode(class InteractActionNode const &) = delete;
    InteractActionNode() = delete;
#endif

public:
    /*0*/ virtual ~InteractActionNode();
    /*1*/ virtual enum BehaviorStatus tick(class Actor &);
    /*2*/ virtual void initializeFromDefinition(class Actor &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INTERACTACTIONNODE
#endif

};