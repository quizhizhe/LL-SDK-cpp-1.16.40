// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "AbstractArrow.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ThrownTrident : public AbstractArrow {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWNTRIDENT
public:
    class ThrownTrident& operator=(class ThrownTrident const &) = delete;
    ThrownTrident(class ThrownTrident const &) = delete;
    ThrownTrident() = delete;
#endif

public:
    /*1*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~ThrownTrident();
    /*30*/ virtual void __unk_vfn_30();
    /*39*/ virtual void normalTick();
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void __unk_vfn_61();
    /*76*/ virtual void __unk_vfn_76();
    /*81*/ virtual void __unk_vfn_81();
    /*82*/ virtual void playerTouch(class Player &);
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void __unk_vfn_90();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*120*/ virtual bool isEnchanted() const;
    /*121*/ virtual void __unk_vfn_121();
    /*140*/ virtual void despawn();
    /*169*/ virtual void __unk_vfn_169();
    /*182*/ virtual void __unk_vfn_182();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*238*/ virtual void __unk_vfn_238();
    /*239*/ virtual void outOfWorld();
    /*240*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*242*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*243*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*246*/ virtual void __unk_vfn_246();
    /*257*/ virtual void __unk_vfn_257();
    /*258*/ virtual void shoot(class Vec3 const &, float, float, class Vec3 const &);
    /*260*/ virtual class ItemStack _getPickupItem() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THROWNTRIDENT
#endif
    MCAPI void returnWithLoyalty(int);

};