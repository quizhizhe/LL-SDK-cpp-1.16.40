// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class VanillaFeatures {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAFEATURES
public:
    class VanillaFeatures& operator=(class VanillaFeatures const &) = delete;
    VanillaFeatures(class VanillaFeatures const &) = delete;
    VanillaFeatures() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLAFEATURES
#endif
    MCAPI static void registerFeatureTypes(class FeatureTypeFactory &);
    MCAPI static void registerFeatures(class FeatureRegistry &);

};