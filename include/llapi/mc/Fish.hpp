// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "WaterAnimal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Fish : public WaterAnimal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISH
public:
    class Fish& operator=(class Fish const &) = delete;
    Fish(class Fish const &) = delete;
    Fish() = delete;
#endif

public:
    /*3*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~Fish();
    /*30*/ virtual void __unk_vfn_30();
    /*39*/ virtual void normalTick();
    /*44*/ virtual bool startRiding(class Actor &);
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void __unk_vfn_61();
    /*76*/ virtual void __unk_vfn_76();
    /*81*/ virtual void __unk_vfn_81();
    /*82*/ virtual void playerTouch(class Player &);
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void __unk_vfn_90();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*121*/ virtual void __unk_vfn_121();
    /*169*/ virtual void __unk_vfn_169();
    /*182*/ virtual void __unk_vfn_182();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*235*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*238*/ virtual void __unk_vfn_238();
    /*246*/ virtual void __unk_vfn_246();
    /*257*/ virtual void __unk_vfn_257();
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*324*/ virtual bool createAIGoals();
    /*332*/ virtual void __unk_vfn_332();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FISH
#endif

};