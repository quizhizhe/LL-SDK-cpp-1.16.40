// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BambooFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BAMBOOFEATURE
public:
    class BambooFeature& operator=(class BambooFeature const &) = delete;
    BambooFeature(class BambooFeature const &) = delete;
    BambooFeature() = delete;
#endif

public:
    /*0*/ virtual ~BambooFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BAMBOOFEATURE
#endif

};