// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ActorEventCoordinator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOREVENTCOORDINATOR
public:
    class ActorEventCoordinator& operator=(class ActorEventCoordinator const &) = delete;
    ActorEventCoordinator(class ActorEventCoordinator const &) = delete;
    ActorEventCoordinator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOREVENTCOORDINATOR
#endif
    MCAPI void sendActorAcquiredItem(class Actor &, class ItemInstance const &, unsigned int, enum ItemAcquisitionMethod, class Actor *);
    MCAPI void sendActorCarriedItemChanged(class Actor &, class ItemInstance const &, class ItemInstance const &, enum HandSlot);
    MCAPI void sendActorDroppedItem(class Actor &, class ItemInstance const &);
    MCAPI void sendActorUseItem(class Actor &, class ItemInstance const &, enum ItemUseMethod);

};