// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NearestAttackableTargetGoal : public TargetGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEARESTATTACKABLETARGETGOAL
public:
    class NearestAttackableTargetGoal& operator=(class NearestAttackableTargetGoal const &) = delete;
    NearestAttackableTargetGoal(class NearestAttackableTargetGoal const &) = delete;
    NearestAttackableTargetGoal() = delete;
#endif

public:
    /*0*/ virtual ~NearestAttackableTargetGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*4*/ virtual void start();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*11*/ virtual struct ActorUniqueID _findTarget(struct MobDescriptor const **);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NEARESTATTACKABLETARGETGOAL
#endif

//protected:
    MCAPI bool _canStartSearching();
    MCAPI bool _isTargetVisible(class Mob const &, float, float) const;

//private:
    MCAPI bool _selectTarget();

protected:

private:

};