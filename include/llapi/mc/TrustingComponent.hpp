// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TrustingComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRUSTINGCOMPONENT
public:
    class TrustingComponent& operator=(class TrustingComponent const &) = delete;
    TrustingComponent(class TrustingComponent const &) = delete;
    TrustingComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRUSTINGCOMPONENT
#endif
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);

//private:
    MCAPI void _becomeTrusting(class Actor &);

private:

};