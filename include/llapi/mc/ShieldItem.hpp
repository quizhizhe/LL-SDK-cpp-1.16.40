// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ShieldItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIELDITEM
public:
    class ShieldItem& operator=(class ShieldItem const &) = delete;
    ShieldItem(class ShieldItem const &) = delete;
    ShieldItem() = delete;
#endif

public:
    /*0*/ virtual ~ShieldItem();
    /*5*/ virtual void __unk_vfn_5();
    /*25*/ virtual bool isHandEquipped() const;
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*37*/ virtual void __unk_vfn_37();
    /*39*/ virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /*40*/ virtual int getEnchantSlot() const;
    /*43*/ virtual void __unk_vfn_43();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual void __unk_vfn_50();
    /*57*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*62*/ virtual void hurtEnemy(class ItemStack &, class Mob *, class Mob *) const;
    /*68*/ virtual void readUserData(class ItemStackBase &, class IDataInput &, class ReadOnlyBinaryStream &) const;
    /*69*/ virtual void writeUserData(class ItemStackBase const &, class IDataOutput &) const;
    /*71*/ virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*90*/ virtual void __unk_vfn_90();
    /*97*/ virtual void __unk_vfn_97();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHIELDITEM
    MCVAPI enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemStack const &, class ItemStack const &, bool, bool) const;
    MCVAPI enum InHandUpdateType getInHandUpdateType(class Player const &, class ItemInstance const &, class ItemInstance const &, bool, bool) const;
#endif
    MCAPI static int const EFFECTIVE_BLOCK_DELAY;
    MCAPI static std::string const TIMESTAMP_TAG;

};