// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ChemistryStickItem.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GlowStickItem : public ChemistryStickItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOWSTICKITEM
public:
    class GlowStickItem& operator=(class GlowStickItem const &) = delete;
    GlowStickItem(class GlowStickItem const &) = delete;
    GlowStickItem() = delete;
#endif

public:
    /*0*/ virtual ~GlowStickItem();
    /*1*/ virtual void hurtEnemy(class ItemStack &, class Mob *, class Mob *) const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual bool isExperimental(class ItemDescriptor const *) const;
    /*5*/ virtual bool isValidRepairItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /*6*/ virtual class Item & setMaxStackSize(unsigned char);
    /*7*/ virtual class Item & setCategory(enum CreativeItemCategory);
    /*8*/ virtual class Item & setStackedByData(bool);
    /*9*/ virtual class Item & setMaxDamage(int);
    /*10*/ virtual class Item & setHandEquipped();
    /*11*/ virtual class Item & setUseAnimation(enum UseAnimation);
    /*12*/ virtual class Item & setMaxUseDuration(int);
    /*13*/ virtual class Item & setRequiresWorldBuilder(bool);
    /*14*/ virtual class Item & setExplodable(bool);
    /*15*/ virtual class Item & setFireResistant(bool);
    /*16*/ virtual class Item & setIsGlint(bool);
    /*17*/ virtual class Item & setShouldDespawn(bool);
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual bool canBeDepleted() const;
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual void __unk_vfn_21();
    /*22*/ virtual bool isStackedByData() const;
    /*23*/ virtual void __unk_vfn_23();
    /*24*/ virtual void __unk_vfn_24();
    /*25*/ virtual bool isHandEquipped() const;
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual bool isGlint(class ItemStackBase const &) const;
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual bool isValidAuxValue(int) const;
    /*45*/ virtual int getDamageChance(int) const;
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual void __unk_vfn_50();
    /*51*/ virtual void __unk_vfn_51();
    /*52*/ virtual void __unk_vfn_52();
    /*53*/ virtual void __unk_vfn_53();
    /*54*/ virtual int buildIdAux(short, class CompoundTag const *) const;
    /*55*/ virtual class ItemDescriptor buildDescriptor(short, class CompoundTag const *) const;
    /*56*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*57*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*58*/ virtual enum ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual void __unk_vfn_60();
    /*61*/ virtual void __unk_vfn_61();
    /*62*/ virtual void __unk_vfn_62();
    /*63*/ virtual void __unk_vfn_63();
    /*64*/ virtual void __unk_vfn_64();
    /*65*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*66*/ virtual std::string buildEffectDescriptionName(class ItemStackBase const &) const;
    /*67*/ virtual std::string buildCategoryDescriptionName() const;
    /*68*/ virtual void readUserData(class ItemStackBase &, class IDataInput &, class ReadOnlyBinaryStream &) const;
    /*69*/ virtual void writeUserData(class ItemStackBase const &, class IDataOutput &) const;
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual bool inventoryTick(class ItemStack &, class Level &, class Actor &, int, bool) const;
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual enum CooldownType getCooldownType() const;
    /*74*/ virtual int getCooldownTime() const;
    /*75*/ virtual void __unk_vfn_75();
    /*76*/ virtual void fixupOnLoad(class ItemStackBase &) const;
    /*77*/ virtual short getDamageValue(class CompoundTag const *) const;
    /*78*/ virtual void setDamageValue(class ItemStackBase &, short) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual bool isSameItem(class ItemStackBase const &, class ItemStackBase const &) const;
    /*82*/ virtual std::string getInteractText(class Player const &) const;
    /*83*/ virtual void __unk_vfn_83();
    /*84*/ virtual struct Brightness getLightEmission(int) const;
    /*85*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*86*/ virtual int getIconYOffset() const;
    /*87*/ virtual class Item & setIcon(std::string const &, int);
    /*88*/ virtual class Item & setIcon(struct TextureUVCoordinateSet const &);
    /*89*/ virtual class Item & setIconAtlas(std::string const &, int);
    /*90*/ virtual void __unk_vfn_90();
    /*91*/ virtual void __unk_vfn_91();
    /*92*/ virtual void __unk_vfn_92();
    /*93*/ virtual void __unk_vfn_93();
    /*94*/ virtual bool _checkUseOnPermissions(class Actor &, class ItemInstance &, unsigned char const &, class BlockPos const &) const;
    /*95*/ virtual bool _checkUseOnPermissions(class Actor &, class ItemStack &, unsigned char const &, class BlockPos const &) const;
    /*96*/ virtual void __unk_vfn_96();
    /*97*/ virtual void __unk_vfn_97();
    /*98*/ virtual bool _useOn(class ItemInstance &, class Actor &, class BlockPos, unsigned char, float, float, float) const;
    /*99*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, float, float, float) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GLOWSTICKITEM
#endif
    MCAPI static enum ItemColor const COLORS[];

};