// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BarterComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BARTERCOMPONENT
public:
    class BarterComponent& operator=(class BarterComponent const &) = delete;
    BarterComponent(class BarterComponent const &) = delete;
    BarterComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BARTERCOMPONENT
#endif
    MCAPI void onBarterItemPickedUp(class Actor const &, struct ActorUniqueID, short);

};