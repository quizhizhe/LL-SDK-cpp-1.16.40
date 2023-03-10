// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ContainerWeakRef {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERWEAKREF
public:
    class ContainerWeakRef& operator=(class ContainerWeakRef const &) = delete;
    ContainerWeakRef(class ContainerWeakRef const &) = delete;
    ContainerWeakRef() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERWEAKREF
#endif
    MCAPI struct ContainerWeakRefData tryGetContainer(class BlockSource &) const;
    MCAPI static class ContainerWeakRef getOrInitActorContainer(class Actor &, enum ActorContainerType);
    MCAPI static class Container * tryGetActorContainer(class Actor &, enum ActorContainerType);

};