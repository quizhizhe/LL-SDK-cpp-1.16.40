// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BiomeClimateSelectorLayer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMECLIMATESELECTORLAYER
public:
    class BiomeClimateSelectorLayer& operator=(class BiomeClimateSelectorLayer const &) = delete;
    BiomeClimateSelectorLayer(class BiomeClimateSelectorLayer const &) = delete;
    BiomeClimateSelectorLayer() = delete;
#endif

public:
    /*0*/ virtual ~BiomeClimateSelectorLayer();
    /*1*/ virtual void init(__int64);
    /*2*/ virtual class LayerDetails::TransferData<class Biome *> _allocateAndFill(unsigned __int64, int, int, unsigned int, unsigned int) const;
    /*3*/ virtual void _fillArea(class LayerDetails::WorkingData<class Biome *, float> &, int, int, int, int, int, class LayerResult<float>, class LayerResult<float>, class LayerResult<float>) const;
    /*4*/ virtual class std::tuple<int, int, unsigned int, unsigned int> _getAreaRead(int, int, unsigned int, unsigned int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMECLIMATESELECTORLAYER
#endif

};