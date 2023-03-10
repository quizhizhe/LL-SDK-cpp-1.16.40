// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ActorMapping {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMAPPING
public:
    struct ActorMapping& operator=(struct ActorMapping const &) = delete;
    ActorMapping(struct ActorMapping const &) = delete;
    ActorMapping() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORMAPPING
#endif
    MCAPI ActorMapping(std::string const &, std::string const &);
    MCAPI std::string getMappingName(enum ActorTypeNamespaceRules) const;
    MCAPI ~ActorMapping();

};