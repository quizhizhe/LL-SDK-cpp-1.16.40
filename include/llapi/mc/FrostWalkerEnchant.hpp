// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FrostWalkerEnchant : public Enchant {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FROSTWALKERENCHANT
public:
    class FrostWalkerEnchant& operator=(class FrostWalkerEnchant const &) = delete;
    FrostWalkerEnchant(class FrostWalkerEnchant const &) = delete;
    FrostWalkerEnchant() = delete;
#endif

public:
    /*0*/ virtual ~FrostWalkerEnchant();
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*5*/ virtual int getMaxLevel() const;
    /*12*/ virtual bool isTreasureOnly() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FROSTWALKERENCHANT
#endif

};