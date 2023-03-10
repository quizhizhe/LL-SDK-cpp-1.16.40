// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StairBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STAIRBLOCK
public:
    class StairBlock& operator=(class StairBlock const &) = delete;
    StairBlock(class StairBlock const &) = delete;
    StairBlock() = delete;
#endif

public:
    /*0*/ virtual ~StairBlock();
    /*1*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*9*/ virtual void addAABBs(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /*11*/ virtual bool addCollisionShapes(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class Actor *) const;
    /*12*/ virtual class AABB const & getOutline(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*13*/ virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*15*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const & (class BlockPos const &)> const &, class BlockPos const &) const;
    /*18*/ virtual void __unk_vfn_18();
    /*22*/ virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
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
    /*59*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*60*/ virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /*61*/ virtual void onExploded(class BlockSource &, class BlockPos const &, class Actor *) const;
    /*62*/ virtual void onStepOn(class Actor &, class BlockPos const &) const;
    /*67*/ virtual void __unk_vfn_67();
    /*71*/ virtual enum BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*78*/ virtual bool mayPick() const;
    /*79*/ virtual bool mayPick(class BlockSource &, class Block const &, bool) const;
    /*80*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*85*/ virtual void destroy(class BlockSource &, class BlockPos const &, class Block const &, class Actor *) const;
    /*87*/ virtual void __unk_vfn_87();
    /*90*/ virtual int getResourceCount(class Random &, class Block const &, int, bool) const;
    /*91*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*92*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*95*/ virtual void __unk_vfn_95();
    /*97*/ virtual class HitResult clip(class BlockSource &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /*98*/ virtual bool use(class Player &, class BlockPos const &) const;
    /*99*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*102*/ virtual bool attack(class Player *, class BlockPos const &) const;
    /*103*/ virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /*109*/ virtual void __unk_vfn_109();
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*141*/ virtual int getVariant(class Block const &) const;
    /*142*/ virtual void __unk_vfn_142();
    /*146*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*158*/ virtual void __unk_vfn_158();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STAIRBLOCK
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool isStairBlock() const;
#endif
    MCAPI StairBlock(std::string const &, int, class BlockLegacy const &, int);
    MCAPI bool setInnerPieceShape(class Block const &, class BlockSource &, class BlockPos const &, class AABB &, bool) const;
    MCAPI bool setStepShape(class Block const &, class BlockSource &, class BlockPos const &, class AABB &, bool) const;

//protected:
    MCAPI bool _neighboringBlockCheckForCreatingBarrierInDirection(class std::function<class Block const & (class BlockPos const &)> const &, class BlockPos const &, class Block const &, int) const;

protected:

};