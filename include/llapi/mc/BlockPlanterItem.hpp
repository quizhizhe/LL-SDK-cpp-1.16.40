// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BlockPlanterItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPLANTERITEM
public:
    class BlockPlanterItem& operator=(class BlockPlanterItem const &) = delete;
    BlockPlanterItem(class BlockPlanterItem const &) = delete;
    BlockPlanterItem() = delete;
#endif

public:
    /*0*/ virtual ~BlockPlanterItem();
    /*5*/ virtual void __unk_vfn_5();
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*37*/ virtual void __unk_vfn_37();
    /*43*/ virtual void __unk_vfn_43();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual void __unk_vfn_50();
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*90*/ virtual void __unk_vfn_90();
    /*96*/ virtual bool _calculatePlacePos(class ItemStack &, class Actor &, unsigned char &, class BlockPos &) const;
    /*97*/ virtual void __unk_vfn_97();
    /*99*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, float, float, float) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKPLANTERITEM
#endif
    MCAPI BlockPlanterItem(std::string const &, int, class Block const &, bool);

};