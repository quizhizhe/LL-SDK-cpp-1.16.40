// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class InsomniaSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSOMNIASYSTEM
public:
    class InsomniaSystem& operator=(class InsomniaSystem const &) = delete;
    InsomniaSystem(class InsomniaSystem const &) = delete;
    InsomniaSystem() = delete;
#endif

public:
    /*0*/ virtual ~InsomniaSystem();
    /*1*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INSOMNIASYSTEM
#endif

};