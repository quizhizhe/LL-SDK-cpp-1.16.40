// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MountPathingGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTPATHINGGOAL
public:
    class MountPathingGoal& operator=(class MountPathingGoal const &) = delete;
    MountPathingGoal(class MountPathingGoal const &) = delete;
    MountPathingGoal() = delete;
#endif

public:
    /*0*/ virtual ~MountPathingGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual float _getAttackReachSqr();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOUNTPATHINGGOAL
#endif

};