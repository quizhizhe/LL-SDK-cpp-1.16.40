// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BottleItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOTTLEITEM
public:
    class BottleItem& operator=(class BottleItem const &) = delete;
    BottleItem(class BottleItem const &) = delete;
    BottleItem() = delete;
#endif

public:
    /*0*/ virtual ~BottleItem();
    /*5*/ virtual void __unk_vfn_5();
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*36*/ virtual bool isLiquidClipItem(int) const;
    /*37*/ virtual void __unk_vfn_37();
    /*43*/ virtual void __unk_vfn_43();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual void __unk_vfn_50();
    /*57*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*90*/ virtual void __unk_vfn_90();
    /*97*/ virtual void __unk_vfn_97();
    /*99*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, float, float, float) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOTTLEITEM
#endif

//private:
    MCAPI void _createBottledItem(class Actor &, class ItemStack &, class Item const &) const;
    MCAPI void _fillBottleViaDispenser(class BlockSource &, class Item const &, class Container &, int, class Vec3 const &, unsigned char) const;

private:

};