// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class POIInstance {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POIINSTANCE
public:
    class POIInstance& operator=(class POIInstance const &) = delete;
    POIInstance(class POIInstance const &) = delete;
    POIInstance() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POIINSTANCE
#endif
    MCAPI POIInstance(class BlockPos const &, bool, std::string, enum POIType, float, unsigned __int64, unsigned __int64, std::string, std::string, std::string);
    MCAPI class AABB getSecondBlockFullAABB(class BlockSource &);
    MCAPI void trySpawnParticles(class BlockSource &, class Random &, int) const;

};