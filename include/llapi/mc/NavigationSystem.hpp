// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NavigationSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONSYSTEM
public:
    class NavigationSystem& operator=(class NavigationSystem const &) = delete;
    NavigationSystem(class NavigationSystem const &) = delete;
    NavigationSystem() = delete;
#endif

public:
    /*0*/ virtual ~NavigationSystem();
    /*1*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONSYSTEM
#endif

};