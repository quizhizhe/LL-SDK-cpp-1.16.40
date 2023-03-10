// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ChunkSource.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LegacyChunkStorage : public ChunkSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYCHUNKSTORAGE
public:
    class LegacyChunkStorage& operator=(class LegacyChunkStorage const &) = delete;
    LegacyChunkStorage(class LegacyChunkStorage const &) = delete;
    LegacyChunkStorage() = delete;
#endif

public:
    /*0*/ virtual ~LegacyChunkStorage();
    /*9*/ virtual void loadChunk(class LevelChunk &, bool);
    /*11*/ virtual bool saveLiveChunk(class LevelChunk &);
    /*14*/ virtual void acquireDiscarded(class std::unique_ptr<class LevelChunk, struct LevelChunkFinalDeleter>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYCHUNKSTORAGE
#endif

//private:
    MCAPI bool _isImported(class ChunkPos const &);
    MCAPI bool _loadChunk(class LevelChunk &);
    MCAPI void _loadEntities();
    MCAPI void _markChunkAsImported(class ChunkPos const &);
    MCAPI bool _openRegionFile();

private:

};