// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BreakBlocksSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKSSYSTEM
public:
    class BreakBlocksSystem& operator=(class BreakBlocksSystem const &) = delete;
    BreakBlocksSystem(class BreakBlocksSystem const &) = delete;
    BreakBlocksSystem() = delete;
#endif

public:
    /*0*/ virtual ~BreakBlocksSystem();
    /*1*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREAKBLOCKSSYSTEM
#endif

};