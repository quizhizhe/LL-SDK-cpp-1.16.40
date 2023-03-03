// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Potion.hpp"
#include "PotionItem.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SplashPotionItem : public PotionItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPLASHPOTIONITEM
public:
    class SplashPotionItem& operator=(class SplashPotionItem const &) = delete;
    SplashPotionItem(class SplashPotionItem const &) = delete;
    SplashPotionItem() = delete;
#endif

public:
    /*0*/ virtual ~SplashPotionItem();
    /*5*/ virtual void __unk_vfn_5();
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*30*/ virtual bool isThrowable() const;
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*43*/ virtual void __unk_vfn_43();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual void __unk_vfn_50();
    /*56*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*57*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*65*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*85*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*87*/ virtual class Item & setIcon(std::string const &, int);
    /*90*/ virtual void __unk_vfn_90();
    /*97*/ virtual void __unk_vfn_97();
    /*100*/ virtual enum Potion::PotionType getPotionType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPLASHPOTIONITEM
#endif

};