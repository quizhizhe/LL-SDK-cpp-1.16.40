// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PushableComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUSHABLECOMPONENT
public:
    class PushableComponent& operator=(class PushableComponent const &) = delete;
    PushableComponent(class PushableComponent const &) = delete;
    PushableComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PUSHABLECOMPONENT
#endif
    MCAPI void push(class Actor &, class Actor &, bool);
    MCAPI void push(class Actor &, class Vec3 const &);

//private:
    MCAPI struct std::pair<class Vec3, class Vec3> _calculatePushVectorMinecart(class Actor &, class Actor &, bool);

private:

};