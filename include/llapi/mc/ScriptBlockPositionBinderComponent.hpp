// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptBlockPositionBinderComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKPOSITIONBINDERCOMPONENT
public:
    class ScriptBlockPositionBinderComponent& operator=(class ScriptBlockPositionBinderComponent const &) = delete;
    ScriptBlockPositionBinderComponent(class ScriptBlockPositionBinderComponent const &) = delete;
    ScriptBlockPositionBinderComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptBlockPositionBinderComponent();
    /*1*/ virtual bool serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle const &) const;
    /*2*/ virtual bool deserialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTBLOCKPOSITIONBINDERCOMPONENT
#endif
    MCAPI static std::string const TAG;

};