// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CelebrateHuntSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CELEBRATEHUNTSYSTEM
public:
    class CelebrateHuntSystem& operator=(class CelebrateHuntSystem const &) = delete;
    CelebrateHuntSystem(class CelebrateHuntSystem const &) = delete;
    CelebrateHuntSystem() = delete;
#endif

public:
    /*0*/ virtual ~CelebrateHuntSystem();
    /*1*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CELEBRATEHUNTSYSTEM
#endif

};