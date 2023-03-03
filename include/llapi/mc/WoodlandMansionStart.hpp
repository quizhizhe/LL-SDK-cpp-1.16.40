// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WoodlandMansionStart {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOODLANDMANSIONSTART
public:
    class WoodlandMansionStart& operator=(class WoodlandMansionStart const &) = delete;
    WoodlandMansionStart(class WoodlandMansionStart const &) = delete;
    WoodlandMansionStart() = delete;
#endif

public:
    /*0*/ virtual ~WoodlandMansionStart();
    /*1*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual enum StructureFeatureType getType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WOODLANDMANSIONSTART
#endif

//private:
    MCAPI void _create(class Dimension &, class OverworldGenerator &, class Random &, int, int);
    MCAPI void _fillCobblestone(class BlockPos const &, class BlockSource &, class BoundingBox const &);
    MCAPI void _makeStairs(class BlockPos const &, class Block const &, unsigned char, unsigned char, class BlockSource &, class BoundingBox const &);

private:

};