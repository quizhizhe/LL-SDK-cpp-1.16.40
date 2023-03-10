// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AreaAttackDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AREAATTACKDEFINITION
public:
    class AreaAttackDefinition& operator=(class AreaAttackDefinition const &) = delete;
    AreaAttackDefinition(class AreaAttackDefinition const &) = delete;
    AreaAttackDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AREAATTACKDEFINITION
#endif
    MCAPI void setDamageCause(std::string const &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AreaAttackDefinition>> &);

};