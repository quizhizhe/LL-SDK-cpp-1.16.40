// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SpawnData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNDATA
public:
    class SpawnData& operator=(class SpawnData const &) = delete;
    SpawnData() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNDATA
#endif
    MCAPI SpawnData(class CompoundTag const &);
    MCAPI SpawnData(class SpawnData const &);
    MCAPI std::unique_ptr<class CompoundTag> save();

};