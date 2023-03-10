// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class OverworldDimension {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDDIMENSION
public:
    class OverworldDimension& operator=(class OverworldDimension const &) = delete;
    OverworldDimension(class OverworldDimension const &) = delete;
    OverworldDimension() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDDIMENSION
    MCVAPI class std::tuple<std::unique_ptr<class ChunkSource>, class WorldGenerator *> createGenerator();
    MCVAPI class Color getBrightnessDependentFogColor(class Color const &, float) const;
    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const &, class AutomaticID<class Dimension, int>) const;
#endif
    MCAPI OverworldDimension(class Level &, class Scheduler &);

};