// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptServerActorDroppedItemEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERACTORDROPPEDITEMEVENT
public:
    struct ScriptServerActorDroppedItemEvent& operator=(struct ScriptServerActorDroppedItemEvent const &) = delete;
    ScriptServerActorDroppedItemEvent(struct ScriptServerActorDroppedItemEvent const &) = delete;
    ScriptServerActorDroppedItemEvent() = delete;
#endif
public:
    /*0*/ virtual ~ScriptServerActorDroppedItemEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERACTORDROPPEDITEMEVENT
#endif

//private:

};