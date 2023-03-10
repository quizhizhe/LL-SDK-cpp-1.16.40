// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemStackNetManagerBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKNETMANAGERBASE
public:
    class ItemStackNetManagerBase& operator=(class ItemStackNetManagerBase const &) = delete;
    ItemStackNetManagerBase(class ItemStackNetManagerBase const &) = delete;
    ItemStackNetManagerBase() = delete;
#endif

public:
    /*0*/ virtual ~ItemStackNetManagerBase();
    /*1*/ virtual bool isEnabled() const;
    /*2*/ virtual class SimpleClientNetId<struct ItemStackRequestIdTag, int, 0> getRequestId() const = 0;
    /*3*/ virtual bool retainSetItemStackNetIdVariant() const;
    /*4*/ virtual bool allowInventoryTransactionManager() const = 0;
    /*5*/ virtual class gsl::final_action<class std::function<void (void)>> _tryBeginClientLegacyTransactionRequest();
    /*6*/ virtual void onContainerScreenOpen(class ContainerScreenContext const &);
    /*7*/ virtual void onContainerScreenClose() = 0;
    /*8*/ virtual class SparseContainer * initOpenContainer(class BlockSource &, enum ContainerEnumName, class ContainerWeakRef const &) = 0;
    /*9*/ virtual void _addLegacyTransactionRequestSetItemSlot(enum ContainerType, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKNETMANAGERBASE
#endif
    MCAPI static class gsl::final_action<class std::function<void (void)>> _tryBeginClientLegacyTransactionRequest(class Player *);
    MCAPI static bool setPlayerContainer(class Player &, enum ContainerType, int, class ItemStack const &, class ItemStack &, class std::function<void (class ItemStack const &)> const &);

//protected:
    MCAPI bool _isRequestActionAllowed(class ItemStackRequestAction &);

protected:

};