// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HideComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HIDECOMPONENT
public:
    class HideComponent& operator=(class HideComponent const &) = delete;
    HideComponent(class HideComponent const &) = delete;
    HideComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HIDECOMPONENT
#endif
    MCAPI void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);

};