// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveToPOIGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WorkGoal : public MoveToPOIGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKGOAL
public:
    class WorkGoal& operator=(class WorkGoal const &) = delete;
    WorkGoal(class WorkGoal const &) = delete;
    WorkGoal() = delete;
#endif

public:
    /*0*/ virtual ~WorkGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORKGOAL
#endif

//private:
    MCAPI bool _isInsideOrIsNotRaining();

private:

};