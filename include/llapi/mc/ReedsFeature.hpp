// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ReedsFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REEDSFEATURE
public:
    class ReedsFeature& operator=(class ReedsFeature const &) = delete;
    ReedsFeature(class ReedsFeature const &) = delete;
    ReedsFeature() = delete;
#endif

public:
    /*0*/ virtual ~ReedsFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REEDSFEATURE
#endif

};