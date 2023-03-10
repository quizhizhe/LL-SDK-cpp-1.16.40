// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RangedWeaponItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANGEDWEAPONITEM
public:
    class RangedWeaponItem& operator=(class RangedWeaponItem const &) = delete;
    RangedWeaponItem(class RangedWeaponItem const &) = delete;
    RangedWeaponItem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANGEDWEAPONITEM
    MCVAPI int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    MCVAPI int getEnchantValue() const;
    MCVAPI void hurtEnemy(class ItemStack &, class Mob *, class Mob *) const;
    MCVAPI bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    MCVAPI void releaseUsing(class ItemStack &, class Player *, int) const;
    MCVAPI class ItemStack & use(class ItemStack &, class Player &) const;
    MCVAPI ~RangedWeaponItem();
#endif

};