// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BossDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSDEFINITION
public:
    class BossDefinition& operator=(class BossDefinition const &) = delete;
    BossDefinition(class BossDefinition const &) = delete;
    BossDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOSSDEFINITION
#endif
    MCAPI void initialize(class EntityContext &, class BossComponent &);

};