// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DanceSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DANCESYSTEM
public:
    class DanceSystem& operator=(class DanceSystem const &) = delete;
    DanceSystem(class DanceSystem const &) = delete;
    DanceSystem() = delete;
#endif

public:
    /*0*/ virtual ~DanceSystem();
    /*1*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DANCESYSTEM
#endif

};