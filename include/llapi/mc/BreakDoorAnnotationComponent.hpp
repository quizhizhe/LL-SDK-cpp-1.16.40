// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BreakDoorAnnotationComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKDOORANNOTATIONCOMPONENT
public:
    class BreakDoorAnnotationComponent& operator=(class BreakDoorAnnotationComponent const &) = delete;
    BreakDoorAnnotationComponent(class BreakDoorAnnotationComponent const &) = delete;
    BreakDoorAnnotationComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREAKDOORANNOTATIONCOMPONENT
#endif
    MCAPI bool canMobBreakDoor(class Mob &, class Path const &) const;
    MCAPI void clearProgress(class Mob &);
    MCAPI void obstructionCheck(class Mob &);

//private:
    MCAPI void _cleanUp(class Mob &);

private:

};