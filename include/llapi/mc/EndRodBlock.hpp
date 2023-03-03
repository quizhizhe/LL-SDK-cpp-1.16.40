// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class EndRodBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDRODBLOCK
public:
    class EndRodBlock& operator=(class EndRodBlock const &) = delete;
    EndRodBlock(class EndRodBlock const &) = delete;
    EndRodBlock() = delete;
#endif

public:
    /*0*/ virtual ~EndRodBlock();
    /*9*/ virtual void addAABBs(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /*18*/ virtual void __unk_vfn_18();
    /*24*/ virtual void __unk_vfn_24();
    /*25*/ virtual void __unk_vfn_25();
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*42*/ virtual void __unk_vfn_42();
    /*43*/ virtual void __unk_vfn_43();
    /*49*/ virtual void __unk_vfn_49();
    /*52*/ virtual void __unk_vfn_52();
    /*67*/ virtual void __unk_vfn_67();
    /*73*/ virtual void __unk_vfn_73();
    /*80*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*81*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*84*/ virtual bool breaksFallingBlocks(class Block const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*95*/ virtual void __unk_vfn_95();
    /*99*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*106*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*109*/ virtual void __unk_vfn_109();
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*138*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*142*/ virtual void __unk_vfn_142();
    /*146*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*158*/ virtual void __unk_vfn_158();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDRODBLOCK
#endif

};