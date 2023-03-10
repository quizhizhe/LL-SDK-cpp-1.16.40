// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Facing.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PortalShape {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PORTALSHAPE
public:
    class PortalShape& operator=(class PortalShape const &) = delete;
    PortalShape(class PortalShape const &) = delete;
    PortalShape() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PORTALSHAPE
#endif
    MCAPI void createPortalBlocks(class WorldChangeTransaction &) const;
    MCAPI void evaluate(class BlockPos const &, class BlockSource const &);
    MCAPI void updateNeighboringBlocks(class BlockSource &, class Vec3 const &) const;

//private:
    MCAPI int _calculatePortalHeight(class BlockSource const &);
    MCAPI int _getDistanceUntilEdge(class BlockPos const &, enum Facing::Name, class BlockSource const &) const;

private:

};