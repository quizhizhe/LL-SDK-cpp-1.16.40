// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FallingBlock : public Actor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FALLINGBLOCK
public:
    class FallingBlock& operator=(class FallingBlock const &) = delete;
    FallingBlock(class FallingBlock const &) = delete;
    FallingBlock() = delete;
#endif

public:
    /*1*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*2*/ virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~FallingBlock();
    /*30*/ virtual void __unk_vfn_30();
    /*33*/ virtual void teleportTo(class Vec3 const &, bool, int, int, struct ActorUniqueID const &);
    /*39*/ virtual void normalTick();
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void __unk_vfn_61();
    /*73*/ virtual float getShadowHeightOffs();
    /*74*/ virtual float getShadowRadius() const;
    /*76*/ virtual void __unk_vfn_76();
    /*81*/ virtual void __unk_vfn_81();
    /*87*/ virtual bool isPickable();
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void __unk_vfn_90();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*121*/ virtual void __unk_vfn_121();
    /*169*/ virtual void __unk_vfn_169();
    /*173*/ virtual void causeFallDamage(float);
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FALLINGBLOCK
    MCVAPI float getDeletionDelayTimeSeconds() const;
#endif
    MCAPI class Block const & getFallingBlock() const;

//private:
    MCAPI void _breakBlock();

private:

};