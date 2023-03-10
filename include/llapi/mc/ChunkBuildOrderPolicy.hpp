// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ChunkBuildOrderPolicy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBUILDORDERPOLICY
public:
    class ChunkBuildOrderPolicy& operator=(class ChunkBuildOrderPolicy const &) = delete;
    ChunkBuildOrderPolicy(class ChunkBuildOrderPolicy const &) = delete;
    ChunkBuildOrderPolicy() = delete;
#endif

public:
    /*0*/ virtual ~ChunkBuildOrderPolicy();
    /*1*/ virtual int getChunkRebuildPriority(class ChunkPos const &) const;
    /*2*/ virtual unsigned int registerForUpdates();
    /*3*/ virtual void unregisterForUpdates(unsigned int);
    /*4*/ virtual void setPriority(unsigned int, class ChunkPos const &, int);
    /*5*/ virtual void updatePriorities();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKBUILDORDERPOLICY
#endif

};