// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LegacySmallMushroomsFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSMALLMUSHROOMSFEATURE
public:
    class LegacySmallMushroomsFeature& operator=(class LegacySmallMushroomsFeature const &) = delete;
    LegacySmallMushroomsFeature(class LegacySmallMushroomsFeature const &) = delete;
    LegacySmallMushroomsFeature() = delete;
#endif

public:
    /*0*/ virtual ~LegacySmallMushroomsFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYSMALLMUSHROOMSFEATURE
#endif
    MCAPI LegacySmallMushroomsFeature(class FeatureRegistry const &);

};