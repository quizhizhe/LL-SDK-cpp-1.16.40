// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FishingRodItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISHINGRODITEM
public:
    class FishingRodItem& operator=(class FishingRodItem const &) = delete;
    FishingRodItem(class FishingRodItem const &) = delete;
    FishingRodItem() = delete;
#endif

public:
    /*0*/ virtual ~FishingRodItem();
    /*5*/ virtual void __unk_vfn_5();
    /*25*/ virtual bool isHandEquipped() const;
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*37*/ virtual void __unk_vfn_37();
    /*40*/ virtual int getEnchantSlot() const;
    /*41*/ virtual int getEnchantValue() const;
    /*43*/ virtual void __unk_vfn_43();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual void __unk_vfn_50();
    /*56*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*62*/ virtual void hurtEnemy(class ItemStack &, class Mob *, class Mob *) const;
    /*64*/ virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*82*/ virtual std::string getInteractText(class Player const &) const;
    /*83*/ virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
    /*85*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*87*/ virtual class Item & setIcon(std::string const &, int);
    /*90*/ virtual void __unk_vfn_90();
    /*97*/ virtual void __unk_vfn_97();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FISHINGRODITEM
    MCVAPI bool requiresInteract() const;
#endif

};