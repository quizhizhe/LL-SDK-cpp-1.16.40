// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GlideMoveControl : public MoveControl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLIDEMOVECONTROL
public:
    class GlideMoveControl& operator=(class GlideMoveControl const &) = delete;
    GlideMoveControl(class GlideMoveControl const &) = delete;
    GlideMoveControl() = delete;
#endif

public:
    /*0*/ virtual ~GlideMoveControl();
    /*1*/ virtual void initializeInternal(class Mob &, struct MoveControlDescription *);
    /*2*/ virtual void tick(class MoveControlComponent &, class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GLIDEMOVECONTROL
#endif

};