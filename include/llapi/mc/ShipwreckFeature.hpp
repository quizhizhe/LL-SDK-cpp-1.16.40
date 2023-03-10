// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ShipwreckFeature : public StructureFeature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIPWRECKFEATURE
public:
    class ShipwreckFeature& operator=(class ShipwreckFeature const &) = delete;
    ShipwreckFeature(class ShipwreckFeature const &) = delete;
    ShipwreckFeature() = delete;
#endif

public:
    /*0*/ virtual ~ShipwreckFeature();
    /*3*/ virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource &, class BlockPos const &, class BlockPos &);
    /*4*/ virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int);
    /*5*/ virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource &, class Random &, class ChunkPos const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHIPWRECKFEATURE
#endif
    MCAPI ShipwreckFeature(class OceanMonumentFeature &, unsigned int);

};