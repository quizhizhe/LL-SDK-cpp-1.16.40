// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SetBannerDetailsFunction : public LootItemFunction {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETBANNERDETAILSFUNCTION
public:
    class SetBannerDetailsFunction& operator=(class SetBannerDetailsFunction const &) = delete;
    SetBannerDetailsFunction(class SetBannerDetailsFunction const &) = delete;
    SetBannerDetailsFunction() = delete;
#endif

public:
    /*0*/ virtual ~SetBannerDetailsFunction();
    /*1*/ virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /*3*/ virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETBANNERDETAILSFUNCTION
#endif

};