// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LodestoneCompassComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LODESTONECOMPASSCOMPONENT
public:
    class LodestoneCompassComponent& operator=(class LodestoneCompassComponent const &) = delete;
    LodestoneCompassComponent(class LodestoneCompassComponent const &) = delete;
    LodestoneCompassComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LODESTONECOMPASSCOMPONENT
#endif
    MCAPI LodestoneCompassComponent(class LodestoneCompassComponent &&);

//private:
    MCAPI class LodestoneCompassComponentCalculator * _findCalculator(class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const &, bool);

private:
    MCAPI static class CompassSpriteCalculator mSpinningLodestone;

};