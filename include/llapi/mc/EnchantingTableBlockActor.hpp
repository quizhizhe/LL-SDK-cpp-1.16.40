// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class EnchantingTableBlockActor : public BlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTINGTABLEBLOCKACTOR
public:
    class EnchantingTableBlockActor& operator=(class EnchantingTableBlockActor const &) = delete;
    EnchantingTableBlockActor(class EnchantingTableBlockActor const &) = delete;
    EnchantingTableBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~EnchantingTableBlockActor();
    /*1*/ virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /*2*/ virtual bool save(class CompoundTag &) const;
    /*7*/ virtual void tick(class BlockSource &);
    /*13*/ virtual void __unk_vfn_13();
    /*17*/ virtual void __unk_vfn_17();
    /*24*/ virtual std::string getName() const;
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANTINGTABLEBLOCKACTOR
#endif

};