// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LootItemActorHasMarkVariantCondition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMACTORHASMARKVARIANTCONDITION
public:
    class LootItemActorHasMarkVariantCondition& operator=(class LootItemActorHasMarkVariantCondition const &) = delete;
    LootItemActorHasMarkVariantCondition(class LootItemActorHasMarkVariantCondition const &) = delete;
    LootItemActorHasMarkVariantCondition() = delete;
#endif

public:
    /*0*/ virtual ~LootItemActorHasMarkVariantCondition();
    /*1*/ virtual bool applies(class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTITEMACTORHASMARKVARIANTCONDITION
#endif

};