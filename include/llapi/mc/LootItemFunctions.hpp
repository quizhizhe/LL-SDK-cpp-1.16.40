// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LootItemFunctions {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMFUNCTIONS
public:
    class LootItemFunctions& operator=(class LootItemFunctions const &) = delete;
    LootItemFunctions(class LootItemFunctions const &) = delete;
    LootItemFunctions() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTITEMFUNCTIONS
#endif
    MCAPI static std::vector<std::unique_ptr<class LootItemFunction>> deserialize(class Json::Value);

};