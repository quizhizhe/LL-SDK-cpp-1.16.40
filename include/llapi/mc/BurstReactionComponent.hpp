// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BurstReactionComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BURSTREACTIONCOMPONENT
public:
    class BurstReactionComponent& operator=(class BurstReactionComponent const &) = delete;
    BurstReactionComponent(class BurstReactionComponent const &) = delete;
    BurstReactionComponent() = delete;
#endif

public:
    /*0*/ virtual ~BurstReactionComponent();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void _onEnd(class LabTableReaction &, class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BURSTREACTIONCOMPONENT
#endif
    MCAPI BurstReactionComponent(enum ParticleType, class Vec3 const &, class Vec3 const &, int, int, int, bool, class HashedString const &);

};