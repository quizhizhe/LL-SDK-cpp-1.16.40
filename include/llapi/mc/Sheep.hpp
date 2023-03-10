// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Sheep : public Animal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHEEP
public:
    class Sheep& operator=(class Sheep const &) = delete;
    Sheep(class Sheep const &) = delete;
    Sheep() = delete;
#endif

public:
    /*7*/ virtual ~Sheep();
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
    /*132*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*169*/ virtual void __unk_vfn_169();
    /*182*/ virtual void __unk_vfn_182();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*238*/ virtual void __unk_vfn_238();
    /*246*/ virtual void __unk_vfn_246();
    /*253*/ virtual class LootTable * getLootTable();
    /*254*/ virtual class LootTable * getDefaultLootTable();
    /*257*/ virtual void __unk_vfn_257();
    /*278*/ virtual void aiStep();
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*332*/ virtual void __unk_vfn_332();
    /*337*/ virtual void jumpFromGround();
    /*339*/ virtual void newServerAiStep();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHEEP
    MCVAPI void ate();
    MCVAPI bool useNewAi() const;
#endif

};