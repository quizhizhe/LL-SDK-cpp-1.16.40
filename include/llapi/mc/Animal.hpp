// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Animal : public Mob {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMAL
public:
    class Animal& operator=(class Animal const &) = delete;
    Animal(class Animal const &) = delete;
    Animal() = delete;
#endif

public:
    /*7*/ virtual ~Animal();
    /*30*/ virtual void __unk_vfn_30();
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void __unk_vfn_61();
    /*76*/ virtual void __unk_vfn_76();
    /*81*/ virtual void __unk_vfn_81();
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void __unk_vfn_90();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*121*/ virtual void __unk_vfn_121();
    /*124*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*169*/ virtual void __unk_vfn_169();
    /*182*/ virtual void __unk_vfn_182();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*238*/ virtual void __unk_vfn_238();
    /*240*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*246*/ virtual void __unk_vfn_246();
    /*256*/ virtual void _onSizeUpdated();
    /*257*/ virtual void __unk_vfn_257();
    /*266*/ virtual int getAmbientSoundPostponeTicks();
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*330*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*332*/ virtual void __unk_vfn_332();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANIMAL
#endif

};