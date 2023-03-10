// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SparseContainer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPARSECONTAINER
public:
    class SparseContainer& operator=(class SparseContainer const &) = delete;
    SparseContainer(class SparseContainer const &) = delete;
    SparseContainer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPARSECONTAINER
    MCVAPI void containerContentChanged(int);
    MCVAPI int getContainerSize() const;
    MCVAPI class ItemStack const & getItem(int) const;
    MCVAPI int getMaxStackSize() const;
    MCVAPI void removeItem(int, int);
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    MCVAPI void setItem(int, class ItemStack const &);
    MCVAPI void startOpen(class Player &);
    MCVAPI void stopOpen(class Player &);
    MCVAPI ~SparseContainer();
#endif
    MCAPI SparseContainer(class ItemStackNetManagerBase &, class Container &, enum SparseContainerBackingSetType);
    MCAPI void _networkUpdateItem(int, class ItemStack const &);
    MCAPI class ItemStack _serverTakeItems(int, int);
    MCAPI void addAvailableSetCountCallback(enum ContainerEnumName, class std::function<int (int, class ItemStackBase const &)>);
    MCAPI void addItemAllowedInSlotCallback(enum ContainerEnumName, class std::function<bool (int, class ItemStackBase const &, int)>);
    MCAPI void addItemAllowedToAddCallback(enum ContainerEnumName, class std::function<bool (class ItemStackBase const &)>);
    MCAPI void addItemNetworkChangedCallback(enum ContainerEnumName, class std::function<void (int, class ItemStack const &, class ItemStack const &)>);
    MCAPI void addValidSlotForContainerCallback(enum ContainerEnumName, class std::function<bool (int)>);
    MCAPI enum ItemAddType canAdd(enum ContainerEnumName, int, class ItemStackBase const &, int) const;
    MCAPI enum ItemSetType canSet(enum ContainerEnumName, int, class ItemStackBase const &, int) const;
    MCAPI bool isValidSlot(enum ContainerEnumName, int) const;

//private:
    MCAPI int _getAvailableAddCount(enum ContainerEnumName, class ItemStack const &) const;
    MCAPI bool _isItemAllowedInSlot(enum ContainerEnumName, int, class ItemStackBase const &, int) const;
    MCAPI void _onItemNetworkChanged(int, class ItemStack const &, class ItemStack const &);
    MCAPI void _setBackingContainerSlot(int, class ItemStack const &);

private:

};