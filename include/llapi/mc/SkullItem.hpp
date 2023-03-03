// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Item.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SkullItem : public Item {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKULLITEM
public:
    class SkullItem& operator=(class SkullItem const &) = delete;
    SkullItem(class SkullItem const &) = delete;
    SkullItem() = delete;
#endif

public:
    /*0*/ virtual ~SkullItem();
    /*5*/ virtual void __unk_vfn_5();
    /*18*/ virtual enum BlockShape getBlockShape() const;
    /*21*/ virtual int getLevelDataForAuxValue(int) const;
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*37*/ virtual void __unk_vfn_37();
    /*40*/ virtual int getEnchantSlot() const;
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual bool isValidAuxValue(int) const;
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual void __unk_vfn_50();
    /*57*/ virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /*65*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*85*/ virtual struct TextureUVCoordinateSet const & getIcon(class ItemStackBase const &, int, bool) const;
    /*90*/ virtual void __unk_vfn_90();
    /*93*/ virtual std::string getAuxValuesDescription() const;
    /*96*/ virtual bool _calculatePlacePos(class ItemStack &, class Actor &, unsigned char &, class BlockPos &) const;
    /*97*/ virtual void __unk_vfn_97();
    /*99*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, float, float, float) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SKULLITEM
#endif

};