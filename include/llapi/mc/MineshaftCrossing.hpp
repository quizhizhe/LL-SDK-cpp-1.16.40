// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MineshaftCrossing : public StructurePiece {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTCROSSING
public:
    class MineshaftCrossing& operator=(class MineshaftCrossing const &) = delete;
    MineshaftCrossing(class MineshaftCrossing const &) = delete;
    MineshaftCrossing() = delete;
#endif

public:
    /*0*/ virtual ~MineshaftCrossing();
    /*3*/ virtual enum StructurePieceType getType() const;
    /*4*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*5*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINESHAFTCROSSING
#endif
    MCAPI void _placeSupportPillar(class BlockSource &, class BoundingBox const &, int, int, int, int);

};