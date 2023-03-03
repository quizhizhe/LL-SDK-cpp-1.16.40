// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Direction.hpp"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DoorBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOORBLOCK
public:
    class DoorBlock& operator=(class DoorBlock const &) = delete;
    DoorBlock(class DoorBlock const &) = delete;
    DoorBlock() = delete;
#endif

public:
    /*0*/ virtual ~DoorBlock();
    /*4*/ virtual class Block const * getNextBlockPermutation(class Block const &) const;
    /*10*/ virtual class AABB const & getAABB(class BlockSource &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*13*/ virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
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
    /*47*/ virtual void onFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*49*/ virtual void __unk_vfn_49();
    /*52*/ virtual void __unk_vfn_52();
    /*56*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*59*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*65*/ virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /*67*/ virtual void __unk_vfn_67();
    /*70*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*81*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*89*/ virtual bool getSecondPart(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /*91*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*92*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual bool use(class Player &, class BlockPos const &) const;
    /*109*/ virtual void __unk_vfn_109();
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*137*/ virtual class AABB const & getVisualShapeInWorld(class Block const &, class BlockSource &, class BlockPos const &, class AABB &, bool) const;
    /*141*/ virtual int getVariant(class Block const &) const;
    /*142*/ virtual void __unk_vfn_142();
    /*158*/ virtual void __unk_vfn_158();
    /*159*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOORBLOCK
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool isDoorBlock() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI DoorBlock(std::string const &, int, class Material const &, enum DoorBlock::DoorType);
    MCAPI enum Direction::Type getBlockedDirection(class BlockSource &, class BlockPos const &) const;
    MCAPI int getDir(class BlockSource &, class BlockPos const &) const;
    MCAPI void getDoorBlocks(class BlockSource &, class BlockPos const &, class Block const *&, class Block const *&) const;
    MCAPI bool hasRightHinge(class BlockSource &, class BlockPos const &) const;
    MCAPI bool isToggled(class BlockSource &, class BlockPos const &) const;
    MCAPI void setToggled(class BlockSource &, class BlockPos const &, bool) const;

};