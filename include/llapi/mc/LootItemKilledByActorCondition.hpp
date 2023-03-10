// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LootItemKilledByActorCondition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMKILLEDBYACTORCONDITION
public:
    class LootItemKilledByActorCondition& operator=(class LootItemKilledByActorCondition const &) = delete;
    LootItemKilledByActorCondition(class LootItemKilledByActorCondition const &) = delete;
    LootItemKilledByActorCondition() = delete;
#endif

public:
    /*0*/ virtual ~LootItemKilledByActorCondition();
    /*1*/ virtual bool applies(class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTITEMKILLEDBYACTORCONDITION
#endif
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

};