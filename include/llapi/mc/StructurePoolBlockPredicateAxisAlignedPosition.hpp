// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StructurePoolBlockPredicateAxisAlignedPosition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEAXISALIGNEDPOSITION
public:
    class StructurePoolBlockPredicateAxisAlignedPosition& operator=(class StructurePoolBlockPredicateAxisAlignedPosition const &) = delete;
    StructurePoolBlockPredicateAxisAlignedPosition(class StructurePoolBlockPredicateAxisAlignedPosition const &) = delete;
    StructurePoolBlockPredicateAxisAlignedPosition() = delete;
#endif

public:
    /*0*/ virtual ~StructurePoolBlockPredicateAxisAlignedPosition();
    /*1*/ virtual bool test(class Block const &, class Random &) const;
    /*2*/ virtual bool test(class BlockPos const &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREPOOLBLOCKPREDICATEAXISALIGNEDPOSITION
#endif

};