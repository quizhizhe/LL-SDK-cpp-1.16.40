// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MoveToDefinition : public BehaviorDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETODEFINITION
public:
    class MoveToDefinition& operator=(class MoveToDefinition const &) = delete;
    MoveToDefinition(class MoveToDefinition const &) = delete;
    MoveToDefinition() = delete;
#endif

public:
    /*0*/ virtual ~MoveToDefinition();
    /*1*/ virtual void load(class Json::Value, class BehaviorFactory const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETODEFINITION
#endif

};