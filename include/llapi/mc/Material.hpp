// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Material {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MATERIAL
public:
    class Material& operator=(class Material const &) = delete;
    Material(class Material const &) = delete;
    Material() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MATERIAL
#endif
    MCAPI Material(enum MaterialType, enum Material::Settings, float);
    MCAPI static void addMaterial(std::unique_ptr<class Material>);
    MCAPI static class Material const & getMaterial(enum MaterialType);

//private:
    MCAPI static void _setupSurfaceMaterials();

private:
    MCAPI static std::vector<std::unique_ptr<class Material>> mMaterials;

};