// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptServerBlockMovedByPistonEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERBLOCKMOVEDBYPISTONEVENT
public:
    struct ScriptServerBlockMovedByPistonEvent& operator=(struct ScriptServerBlockMovedByPistonEvent const &) = delete;
    ScriptServerBlockMovedByPistonEvent(struct ScriptServerBlockMovedByPistonEvent const &) = delete;
    ScriptServerBlockMovedByPistonEvent() = delete;
#endif
public:
    /*0*/ virtual ~ScriptServerBlockMovedByPistonEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERBLOCKMOVEDBYPISTONEVENT
#endif

//private:

};