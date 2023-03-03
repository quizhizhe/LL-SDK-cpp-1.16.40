// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TwistingVinesClusterFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TWISTINGVINESCLUSTERFEATURE
public:
    class TwistingVinesClusterFeature& operator=(class TwistingVinesClusterFeature const &) = delete;
    TwistingVinesClusterFeature(class TwistingVinesClusterFeature const &) = delete;
    TwistingVinesClusterFeature() = delete;
#endif

public:
    /*0*/ virtual ~TwistingVinesClusterFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TWISTINGVINESCLUSTERFEATURE
#endif

//private:
    MCAPI void _placeVineString(class BlockSource &, class Random &, class BlockPos const &, int, int, int) const;

private:

};