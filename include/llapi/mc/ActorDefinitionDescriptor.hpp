// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ActorDefinitionDescriptor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONDESCRIPTOR
public:
    ActorDefinitionDescriptor(class ActorDefinitionDescriptor const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORDEFINITIONDESCRIPTOR
#endif
    MCAPI ActorDefinitionDescriptor();
    MCAPI ActorDefinitionDescriptor(class ActorDefinitionDescriptor &&);
    MCAPI class ActorDefinitionDescriptor & combine(class ActorDefinitionDescriptor const &);
    MCAPI bool contains(class ActorDefinitionDescriptor const &) const;
    MCAPI void executeEvent(class Actor &, std::string const &, class VariantParameterList const &);
    MCAPI bool executeTrigger(class Actor &, class DefinitionTrigger const &, class VariantParameterList const &);
    MCAPI void forceExecuteTrigger(class Actor &, class DefinitionTrigger const &, class VariantParameterList const &);
    MCAPI class ActorDefinitionDescriptor & operator=(class ActorDefinitionDescriptor &&);
    MCAPI class ActorDefinitionDescriptor & operator=(class ActorDefinitionDescriptor const &);
    MCAPI bool overlaps(class ActorDefinitionDescriptor const &) const;
    MCAPI class ActorDefinitionDescriptor & subtract(class ActorDefinitionDescriptor const &);
    MCAPI ~ActorDefinitionDescriptor();

//private:
    MCAPI void _executeEvent(class Actor &, std::string const &, std::vector<std::string> &, class VariantParameterList const &);
    MCAPI void _forceExecuteTrigger(class Actor &, class DefinitionTrigger const &, std::vector<std::string> &, class VariantParameterList const &);

private:

};