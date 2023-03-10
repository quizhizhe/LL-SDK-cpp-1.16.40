// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Zombie.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PigZombie : public Zombie {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PIGZOMBIE
public:
    class PigZombie& operator=(class PigZombie const &) = delete;
    PigZombie(class PigZombie const &) = delete;
    PigZombie() = delete;
#endif

public:
    /*7*/ virtual ~PigZombie();
    /*30*/ virtual void __unk_vfn_30();
    /*39*/ virtual void normalTick();
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void __unk_vfn_61();
    /*76*/ virtual void __unk_vfn_76();
    /*81*/ virtual void __unk_vfn_81();
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void __unk_vfn_90();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*103*/ virtual class Actor * findAttackTarget();
    /*121*/ virtual void __unk_vfn_121();
    /*169*/ virtual void __unk_vfn_169();
    /*182*/ virtual void __unk_vfn_182();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*238*/ virtual void __unk_vfn_238();
    /*240*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*242*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*243*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*246*/ virtual void __unk_vfn_246();
    /*257*/ virtual void __unk_vfn_257();
    /*282*/ virtual bool checkSpawnRules(bool);
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*329*/ virtual int getAttackTime();
    /*332*/ virtual void __unk_vfn_332();
    /*348*/ virtual void __unk_vfn_348();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PIGZOMBIE
#endif

//private:

private:
    MCAPI static class mce::UUID const SPEED_MODIFIER_ATTACK_UUID;

};