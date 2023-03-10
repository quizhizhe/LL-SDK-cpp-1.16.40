// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LargeHellCaveFeature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LARGEHELLCAVEFEATURE
public:
    class LargeHellCaveFeature& operator=(class LargeHellCaveFeature const &) = delete;
    LargeHellCaveFeature(class LargeHellCaveFeature const &) = delete;
    LargeHellCaveFeature() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LARGEHELLCAVEFEATURE
#endif

//protected:
    MCAPI void addFeature(class BlockVolume &, class LevelChunk &, class Random &, int, int);
    MCAPI void addTunnel(class BlockVolume &, class Random &, class LevelChunk &, class Vec3 const &, float, float, float, int, int, float) const;

protected:

};