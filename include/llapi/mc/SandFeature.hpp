// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SandFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SANDFEATURE
public:
    class SandFeature& operator=(class SandFeature const &) = delete;
    SandFeature(class SandFeature const &) = delete;
    SandFeature() = delete;
#endif

public:
    /*0*/ virtual ~SandFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SANDFEATURE
#endif

};