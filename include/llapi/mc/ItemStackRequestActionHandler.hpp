// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemStackRequestActionHandler {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONHANDLER
public:
    class ItemStackRequestActionHandler& operator=(class ItemStackRequestActionHandler const &) = delete;
    ItemStackRequestActionHandler(class ItemStackRequestActionHandler const &) = delete;
    ItemStackRequestActionHandler() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONHANDLER
#endif
    MCAPI ItemStackRequestActionHandler(class ItemStackNetManagerServer &, class Player &);
    MCAPI void _cacheSlotIdAssigment(class SimpleRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const &, unsigned char, unsigned char, class SimpleServerNetId<struct ItemStackNetIdTag, int, 0> const &);
    MCAPI class SparseContainer * _getOrInitSparseContainer(enum ContainerEnumName);
    MCAPI bool _handleRemove(class ItemStackRequestActionTransferBase const &, class ItemStack &);
    MCAPI class ContainerWeakRef const * _tryGetAllowedContainerWeakRef(enum ContainerEnumName) const;
    MCAPI std::vector<struct ItemStackResponseContainerInfo> endRequest(bool &);
    MCAPI bool handleRequestAction(class ItemStackRequestAction const &);
    MCAPI void onContainerScreenOpen();

//private:
    MCAPI void _addResponseSlotInfo(struct ItemStackRequestHandlerSlotInfo const &, class ItemStack const &);
    MCAPI bool _commitAllActionResults();
    MCAPI bool _handleDestroy(class ItemStackRequestActionDestroy const &);
    MCAPI bool _handleDrop(class ItemStackRequestActionDrop const &);
    MCAPI bool _handleTransfer(class ItemStackRequestActionTransferBase const &, bool, bool, bool);
    MCAPI class std::optional<struct ItemStackRequestActionHandler::RequestSlotIdAssignment> _resolveSlotIdAssignment(struct ItemStackRequestSlotInfo const &, class SimpleRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const &);
    MCAPI struct ItemStackRequestHandlerSlotInfo _validateRequestSlot(struct ItemStackRequestSlotInfo const &, bool, bool);

private:

};