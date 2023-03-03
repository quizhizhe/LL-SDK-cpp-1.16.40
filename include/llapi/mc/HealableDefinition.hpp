// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HealableDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEALABLEDEFINITION
public:
    class HealableDefinition& operator=(class HealableDefinition const &) = delete;
    HealableDefinition(class HealableDefinition const &) = delete;
    HealableDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HEALABLEDEFINITION
#endif
    MCAPI void addFeedItem(struct FeedItem const &);
    MCAPI void addFeedItemByName(std::string const &);
    MCAPI void deserializeData(class Json::Value &);
    MCAPI void serializeData(class Json::Value &) const;
    MCAPI ~HealableDefinition();
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HealableDefinition>> &);

//private:
    MCAPI void _loadEffects(struct FeedItem &, class Json::Value &);

private:

};