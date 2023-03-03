// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TridentItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIDENTITEM
public:
    class TridentItem& operator=(class TridentItem const &) = delete;
    TridentItem(class TridentItem const &) = delete;
    TridentItem() = delete;
#endif

public:
    /*0*/ virtual ~TridentItem();
    /*5*/ virtual void __unk_vfn_5();
    /*23*/ virtual short getMaxDamage() const;
    /*24*/ virtual int getAttackDamage() const;
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*40*/ virtual int getEnchantSlot() const;
    /*41*/ virtual int getEnchantValue() const;
    /*43*/ virtual void __unk_vfn_43();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual void __unk_vfn_50();
    /*56*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*57*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*59*/ virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /*62*/ virtual void hurtEnemy(class ItemStack &, class Mob *, class Mob *) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*90*/ virtual void __unk_vfn_90();
    /*97*/ virtual void __unk_vfn_97();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRIDENTITEM
    MCVAPI bool canDestroyInCreative() const;
#endif
    MCAPI static int const CHARGE_THRESHOLD_TIME;
    MCAPI static int const THROW_THRESHOLD_TIME;

//private:
    MCAPI class Actor * _setupProjectile(class Actor *, class ItemStack, bool) const;

private:

};