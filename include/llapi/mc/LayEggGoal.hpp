// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LayEggGoal : public BaseMoveToGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAYEGGGOAL
public:
    class LayEggGoal& operator=(class LayEggGoal const &) = delete;
    LayEggGoal(class LayEggGoal const &) = delete;
    LayEggGoal() = delete;
#endif

public:
    /*0*/ virtual ~LayEggGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*11*/ virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /*14*/ virtual void _moveToBlock();
    /*17*/ virtual bool findTargetBlock();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LAYEGGGOAL
#endif

//protected:
    MCAPI void _layEgg(class BlockPos const &);

protected:

};