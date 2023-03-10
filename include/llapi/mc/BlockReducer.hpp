// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BlockReducer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKREDUCER
public:
    class BlockReducer& operator=(class BlockReducer const &) = delete;
    BlockReducer(class BlockReducer const &) = delete;
    BlockReducer() = delete;
#endif

public:
    /*0*/ virtual ~BlockReducer();
    /*1*/ virtual void _registerBlock(class ItemStack const &, std::vector<class ItemStack> &&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKREDUCER
#endif
    MCAPI std::vector<class ItemStack> const * getReduction(class ItemStackBase const &) const;
    MCAPI void registerBlocks();

//protected:
    MCAPI void _registerBlock(class ItemStack const &, std::vector<struct ChemistryIngredient> const &);

protected:

};