// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScatterParams {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCATTERPARAMS
public:
    class ScatterParams& operator=(class ScatterParams const &) = delete;
    ScatterParams(class ScatterParams const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCATTERPARAMS
#endif
    MCAPI ScatterParams();
    MCAPI class ScatterParams::ScatteredPositions scatter(class RenderParams &, class BlockPos const &, class Random &) const;
    MCAPI ~ScatterParams();
    MCAPI static void initMolangParams(class RenderParams &, class BlockPos const &, class Random &);

//private:
    MCAPI class BlockPos _getPos(unsigned int, class BlockPos const &, class Random &, class RenderParams &) const;

private:

};