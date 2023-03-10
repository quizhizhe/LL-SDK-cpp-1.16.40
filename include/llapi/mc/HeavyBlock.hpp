// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HeavyBlock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEAVYBLOCK
public:
    class HeavyBlock& operator=(class HeavyBlock const &) = delete;
    HeavyBlock(class HeavyBlock const &) = delete;
    HeavyBlock() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HEAVYBLOCK
    MCVAPI void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    MCVAPI bool falling() const;
    MCVAPI bool isFreeToFall(class BlockSource &, class BlockPos const &) const;
    MCVAPI void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    MCVAPI void onLand(class BlockSource &, class BlockPos const &) const;
    MCVAPI void onPlace(class BlockSource &, class BlockPos const &) const;
    MCVAPI void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
    MCVAPI void tick(class BlockSource &, class BlockPos const &, class Random &) const;
#endif

//protected:
    MCAPI void checkSlide(class BlockSource &, class BlockPos const &) const;

//private:
    MCAPI class BlockPos _findBottomSlidingBlock(class BlockSource &, class BlockPos const &) const;
    MCAPI void _scheduleCheck(class BlockSource &, class BlockPos const &, class Block const &, int) const;
    MCAPI void _tickBlocksAround2D(class BlockSource &, class BlockPos const &, class Block const &) const;

protected:

private:

};