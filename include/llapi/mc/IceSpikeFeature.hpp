// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class IceSpikeFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICESPIKEFEATURE
public:
    class IceSpikeFeature& operator=(class IceSpikeFeature const &) = delete;
    IceSpikeFeature(class IceSpikeFeature const &) = delete;
    IceSpikeFeature() = delete;
#endif

public:
    /*0*/ virtual ~IceSpikeFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ICESPIKEFEATURE
#endif

};