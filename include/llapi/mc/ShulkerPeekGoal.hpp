// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ShulkerPeekGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERPEEKGOAL
public:
    class ShulkerPeekGoal& operator=(class ShulkerPeekGoal const &) = delete;
    ShulkerPeekGoal(class ShulkerPeekGoal const &) = delete;
    ShulkerPeekGoal() = delete;
#endif

public:
    /*0*/ virtual ~ShulkerPeekGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKERPEEKGOAL
#endif

};