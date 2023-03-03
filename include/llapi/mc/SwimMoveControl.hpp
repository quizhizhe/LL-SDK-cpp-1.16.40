// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SwimMoveControl : public MoveControl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMMOVECONTROL
public:
    class SwimMoveControl& operator=(class SwimMoveControl const &) = delete;
    SwimMoveControl(class SwimMoveControl const &) = delete;
    SwimMoveControl() = delete;
#endif

public:
    /*0*/ virtual ~SwimMoveControl();
    /*1*/ virtual void initializeInternal(class Mob &, struct MoveControlDescription *);
    /*2*/ virtual void tick(class MoveControlComponent &, class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SWIMMOVECONTROL
#endif

};