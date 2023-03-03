// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BarrelBlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BARRELBLOCKACTOR
public:
    class BarrelBlockActor& operator=(class BarrelBlockActor const &) = delete;
    BarrelBlockActor(class BarrelBlockActor const &) = delete;
    BarrelBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BARRELBLOCKACTOR
    MCVAPI std::string getName() const;
    MCVAPI void onPlace(class BlockSource &);
    MCVAPI void playCloseSound(class BlockSource &);
    MCVAPI void playOpenSound(class BlockSource &);
    MCVAPI void startOpen(class Player &);
    MCVAPI void stopOpen(class Player &);
#endif

};