// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LegacyTreeFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYTREEFEATURE
public:
    class LegacyTreeFeature& operator=(class LegacyTreeFeature const &) = delete;
    LegacyTreeFeature(class LegacyTreeFeature const &) = delete;
    LegacyTreeFeature() = delete;
#endif

public:
    /*0*/ virtual ~LegacyTreeFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYTREEFEATURE
#endif
    MCAPI LegacyTreeFeature(enum LegacyTreeFeature::Type, class FeatureRegistry &);

};