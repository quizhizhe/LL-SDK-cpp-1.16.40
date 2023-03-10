// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CoralHangFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORALHANGFEATURE
public:
    class CoralHangFeature& operator=(class CoralHangFeature const &) = delete;
    CoralHangFeature(class CoralHangFeature const &) = delete;
    CoralHangFeature() = delete;
#endif

public:
    /*0*/ virtual ~CoralHangFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORALHANGFEATURE
#endif

//private:
    MCAPI unsigned char _randomDirection(class Random &, class BlockSource const &, class BlockPos const &) const;

private:

};