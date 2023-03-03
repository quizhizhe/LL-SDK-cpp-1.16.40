// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ArrowItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARROWITEM
public:
    class ArrowItem& operator=(class ArrowItem const &) = delete;
    ArrowItem(class ArrowItem const &) = delete;
    ArrowItem() = delete;
#endif

public:
    /*0*/ virtual ~ArrowItem();
    /*5*/ virtual void __unk_vfn_5();
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual bool isValidAuxValue(int) const;
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual void __unk_vfn_50();
    /*57*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*65*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*66*/ virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*85*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*87*/ virtual class Item & setIcon(std::string const &, int);
    /*90*/ virtual void __unk_vfn_90();
    /*97*/ virtual void __unk_vfn_97();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARROWITEM
#endif
    MCAPI void applyEffect(class Arrow *, class ItemInstance const &) const;

};