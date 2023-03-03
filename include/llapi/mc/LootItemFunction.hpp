// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LootItemFunction {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMFUNCTION
public:
    class LootItemFunction& operator=(class LootItemFunction const &) = delete;
    LootItemFunction(class LootItemFunction const &) = delete;
    LootItemFunction() = delete;
#endif

public:
    /*0*/ virtual ~LootItemFunction();
    /*1*/ virtual void apply(class ItemStack &, class Random &, class LootTableContext &) = 0;
    /*2*/ virtual int apply(class ItemStack &, class Random &, struct Trade const &, class LootTableContext &);
    /*3*/ virtual void apply(class ItemInstance &, class Random &, class LootTableContext &) = 0;
    /*4*/ virtual int apply(class ItemInstance &, class Random &, struct Trade const &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTITEMFUNCTION
#endif
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value);

//private:

private:
    MCAPI static class std::unordered_map<class HashedString, class std::function<std::unique_ptr<class LootItemFunction> (class Json::Value &, std::vector<std::unique_ptr<class LootItemCondition>> &)>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::function<std::unique_ptr<class LootItemFunction> (class Json::Value &, std::vector<std::unique_ptr<class LootItemCondition>> &)>>>> const mLootingFunctions;

};