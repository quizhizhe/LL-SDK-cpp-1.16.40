// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ChestBlock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ShulkerBoxBlock : public ChestBlock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERBOXBLOCK
public:
    class ShulkerBoxBlock& operator=(class ShulkerBoxBlock const &) = delete;
    ShulkerBoxBlock(class ShulkerBoxBlock const &) = delete;
    ShulkerBoxBlock() = delete;
#endif

public:
    /*0*/ virtual ~ShulkerBoxBlock();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual class AABB const & getAABB(class BlockSource &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual void __unk_vfn_15();
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual void __unk_vfn_20();
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
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*42*/ virtual void __unk_vfn_42();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
    /*51*/ virtual void __unk_vfn_51();
    /*52*/ virtual void __unk_vfn_52();
    /*55*/ virtual void __unk_vfn_55();
    /*57*/ virtual void __unk_vfn_57();
    /*58*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual void __unk_vfn_62();
    /*64*/ virtual void __unk_vfn_64();
    /*65*/ virtual void __unk_vfn_65();
    /*67*/ virtual void __unk_vfn_67();
    /*68*/ virtual void __unk_vfn_68();
    /*69*/ virtual void __unk_vfn_69();
    /*70*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*74*/ virtual void __unk_vfn_74();
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void __unk_vfn_76();
    /*77*/ virtual void __unk_vfn_77();
    /*79*/ virtual void __unk_vfn_79();
    /*81*/ virtual void __unk_vfn_81();
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*86*/ virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*91*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*92*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*93*/ virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, std::vector<class Item const *> *, float, int, bool) const;
    /*95*/ virtual void __unk_vfn_95();
    /*96*/ virtual void __unk_vfn_96();
    /*99*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*101*/ virtual void __unk_vfn_101();
    /*102*/ virtual void __unk_vfn_102();
    /*103*/ virtual void __unk_vfn_103();
    /*104*/ virtual void __unk_vfn_104();
    /*106*/ virtual void __unk_vfn_106();
    /*107*/ virtual void __unk_vfn_107();
    /*110*/ virtual void __unk_vfn_110();
    /*111*/ virtual void __unk_vfn_111();
    /*113*/ virtual void __unk_vfn_113();
    /*114*/ virtual void __unk_vfn_114();
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*122*/ virtual void __unk_vfn_122();
    /*123*/ virtual void __unk_vfn_123();
    /*124*/ virtual void __unk_vfn_124();
    /*125*/ virtual void __unk_vfn_125();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*128*/ virtual void __unk_vfn_128();
    /*129*/ virtual void __unk_vfn_129();
    /*130*/ virtual int getColor(class Block const &) const;
    /*131*/ virtual void __unk_vfn_131();
    /*132*/ virtual int getColorForParticle(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*133*/ virtual void __unk_vfn_133();
    /*135*/ virtual void __unk_vfn_135();
    /*142*/ virtual void __unk_vfn_142();
    /*145*/ virtual void __unk_vfn_145();
    /*158*/ virtual void __unk_vfn_158();
    /*159*/ virtual void __unk_vfn_159();
    /*162*/ virtual void __unk_vfn_162();
    /*163*/ virtual void __unk_vfn_163();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKERBOXBLOCK
    MCVAPI bool isAuxValueRelevantForPicking() const;
#endif
    MCAPI ShulkerBoxBlock(std::string const &, int);

//protected:
    MCAPI void spawnBoxInstance(class BlockSource &, class Level &, class BlockPos const &, class Block const &, std::string const &, std::unique_ptr<class CompoundTag>, int) const;

protected:

};