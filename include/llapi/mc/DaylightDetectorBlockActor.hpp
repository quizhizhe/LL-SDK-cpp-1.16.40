// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DaylightDetectorBlockActor : public BlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAYLIGHTDETECTORBLOCKACTOR
public:
    class DaylightDetectorBlockActor& operator=(class DaylightDetectorBlockActor const &) = delete;
    DaylightDetectorBlockActor(class DaylightDetectorBlockActor const &) = delete;
    DaylightDetectorBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~DaylightDetectorBlockActor();
    /*7*/ virtual void tick(class BlockSource &);
    /*13*/ virtual void __unk_vfn_13();
    /*17*/ virtual void __unk_vfn_17();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DAYLIGHTDETECTORBLOCKACTOR
#endif

};