// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CameraItemComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAITEMCOMPONENT
public:
    class CameraItemComponent& operator=(class CameraItemComponent const &) = delete;
    CameraItemComponent(class CameraItemComponent const &) = delete;
    CameraItemComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAMERAITEMCOMPONENT
#endif
    MCAPI bool init(class Json::Value &);
    MCAPI void releaseUsing(class ItemStack &, class Player &, int);
    MCAPI void use(class ItemStack &, class Player &);
    MCAPI bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &);

//private:
    MCAPI enum CameraItemComponent::UseAction _tryPlace(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char, class Vec3 &) const;

private:

};