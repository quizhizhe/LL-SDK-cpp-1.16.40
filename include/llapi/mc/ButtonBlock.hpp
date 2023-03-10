// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ButtonBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUTTONBLOCK
public:
    class ButtonBlock& operator=(class ButtonBlock const &) = delete;
    ButtonBlock(class ButtonBlock const &) = delete;
    ButtonBlock() = delete;
#endif

public:
    /*0*/ virtual ~ButtonBlock();
    /*1*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*5*/ virtual bool getCollisionShape(class AABB &, class Block const &, class BlockSource &, class BlockPos const &, class Actor *) const;
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
    /*51*/ virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /*52*/ virtual void __unk_vfn_52();
    /*59*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*65*/ virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /*67*/ virtual void __unk_vfn_67();
    /*70*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*80*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*81*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*90*/ virtual int getResourceCount(class Random &, class Block const &, int, bool) const;
    /*91*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*92*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual bool use(class Player &, class BlockPos const &) const;
    /*99*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*101*/ virtual bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /*104*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*109*/ virtual void __unk_vfn_109();
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*138*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*139*/ virtual class AABB const & getUIShape(class Block const &, class AABB &) const;
    /*141*/ virtual int getVariant(class Block const &) const;
    /*142*/ virtual void __unk_vfn_142();
    /*158*/ virtual void __unk_vfn_158();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BUTTONBLOCK
    MCVAPI bool canSpawnOn() const;
    MCVAPI bool isButtonBlock() const;
    MCVAPI bool isInteractiveBlock() const;
    MCVAPI bool isSignalSource() const;
#endif
    MCAPI static bool canAttachTo(class BlockSource &, class BlockPos const &, unsigned char);

//private:
    MCAPI void _buttonPressed(class BlockSource &, class Block const &, class Vec3 const &) const;
    MCAPI void _buttonUnpressed(class BlockSource &, class Block const &, class Vec3 const &) const;
    MCAPI bool _checkCanSurvive(class BlockSource &, class BlockPos const &) const;
    MCAPI void _checkPressed(class BlockSource &, class BlockPos const &) const;
    MCAPI void _getShape(class AABB &, bool, unsigned char, bool) const;

private:

};