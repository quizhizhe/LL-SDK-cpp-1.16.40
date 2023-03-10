// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FancyTreeCanopy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FANCYTREECANOPY
public:
    class FancyTreeCanopy& operator=(class FancyTreeCanopy const &) = delete;
    FancyTreeCanopy(class FancyTreeCanopy const &) = delete;
    FancyTreeCanopy() = delete;
#endif

public:
    /*0*/ virtual ~FancyTreeCanopy();
    /*1*/ virtual class std::optional<class BlockPos> placeCanopy(class IBlockPlacementTarget &, class BlockPos const &, class Random &, struct TreeHelper::TreeParams const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FANCYTREECANOPY
#endif

//private:
    MCAPI class std::optional<class BlockPos> _fillLayer(class IBlockPlacementTarget &, class BlockPos const &, int, struct TreeHelper::TreeParams const &) const;

private:

};