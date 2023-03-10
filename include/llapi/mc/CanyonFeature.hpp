// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CanyonFeature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANYONFEATURE
public:
    class CanyonFeature& operator=(class CanyonFeature const &) = delete;
    CanyonFeature(class CanyonFeature const &) = delete;
    CanyonFeature() = delete;
#endif

public:
    /*0*/ virtual ~CanyonFeature();
    /*1*/ virtual bool carve(class BlockVolume &, class BiomeSource &, class Random &, class ChunkPos const &, class Vec3 const &, class Vec3 const &, int, int, int, int, int, int, float, float, class gsl::span<float const, -1>) const;
    /*2*/ virtual void addFeature(class BlockVolume &, class BiomeSource &, class ChunkPos const &, class Random &, int, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CANYONFEATURE
#endif
    MCAPI void apply(class BlockVolume &, class ChunkPos const &, class BiomeSource &, class Random &, unsigned int);

//protected:
    MCAPI void addTunnel(class BlockVolume &, class BiomeSource &, class Random &, class ChunkPos const &, class Vec3 const &, class Vec3 const &, float, float, float, int, int, float) const;

protected:

};