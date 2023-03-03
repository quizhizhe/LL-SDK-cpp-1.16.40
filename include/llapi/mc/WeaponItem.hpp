// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WeaponItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEAPONITEM
public:
    class WeaponItem& operator=(class WeaponItem const &) = delete;
    WeaponItem(class WeaponItem const &) = delete;
    WeaponItem() = delete;
#endif

public:
    /*0*/ virtual ~WeaponItem();
    /*5*/ virtual void __unk_vfn_5();
    /*20*/ virtual bool canDestroySpecial(class Block const &) const;
    /*24*/ virtual int getAttackDamage() const;
    /*25*/ virtual bool isHandEquipped() const;
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*39*/ virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /*40*/ virtual int getEnchantSlot() const;
    /*41*/ virtual int getEnchantValue() const;
    /*43*/ virtual void __unk_vfn_43();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual void __unk_vfn_50();
    /*56*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*60*/ virtual float getDestroySpeed(class ItemInstance const &, class Block const &) const;
    /*62*/ virtual void hurtEnemy(class ItemStack &, class Mob *, class Mob *) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*90*/ virtual void __unk_vfn_90();
    /*97*/ virtual void __unk_vfn_97();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEAPONITEM
    MCVAPI bool canDestroyInCreative() const;
#endif

};