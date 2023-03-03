// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ClassroomModeListener : public BlockSourceListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLASSROOMMODELISTENER
public:
    class ClassroomModeListener& operator=(class ClassroomModeListener const &) = delete;
    ClassroomModeListener(class ClassroomModeListener const &) = delete;
    ClassroomModeListener() = delete;
#endif

public:
    /*0*/ virtual ~ClassroomModeListener();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*6*/ virtual void __unk_vfn_6();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual class Particle * addParticle(enum ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLASSROOMMODELISTENER
    MCVAPI void onAreaChanged(class BlockSource &, class BlockPos const &, class BlockPos const &);
    MCVAPI void onBlockChanged(class BlockSource &, class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *);
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    MCVAPI void onChunkUnloaded(class LevelChunk &);
    MCVAPI void onEntityAdded(class Actor &);
    MCVAPI void onEntityRemoved(class Actor &);
#endif

};