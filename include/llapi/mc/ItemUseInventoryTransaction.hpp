// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemUseInventoryTransaction {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMUSEINVENTORYTRANSACTION
public:
    class ItemUseInventoryTransaction& operator=(class ItemUseInventoryTransaction const &) = delete;
    ItemUseInventoryTransaction(class ItemUseInventoryTransaction const &) = delete;
    ItemUseInventoryTransaction() = delete;
#endif

public:
    /*0*/ virtual ~ItemUseInventoryTransaction();
    /*1*/ virtual void read(class ReadOnlyBinaryStream &);
    /*2*/ virtual void write(class BinaryStream &) const;
    /*3*/ virtual enum InventoryTransactionError handle(class Player &, bool) const;
    /*4*/ virtual void onTransactionError(class Player &, enum InventoryTransactionError) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMUSEINVENTORYTRANSACTION
#endif
    MCAPI void resendBlocksAroundArea(class Player &, class BlockPos const &, unsigned char) const;

};