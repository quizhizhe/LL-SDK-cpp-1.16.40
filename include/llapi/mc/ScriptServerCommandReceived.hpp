// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptServerCommandReceived {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERCOMMANDRECEIVED
public:
    class ScriptServerCommandReceived& operator=(class ScriptServerCommandReceived const &) = delete;
    ScriptServerCommandReceived(class ScriptServerCommandReceived const &) = delete;
    ScriptServerCommandReceived() = delete;
#endif

public:
    /*0*/ virtual ~ScriptServerCommandReceived();
    /*1*/ virtual bool receivedEvent(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, std::string const &, class ScriptApi::ScriptObjectHandle const &);
    /*2*/ virtual bool getEventData(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, std::string const &, class ScriptApi::ScriptObjectHandle &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERCOMMANDRECEIVED
#endif

//private:

private:
    MCAPI static class HashedString const mHash;

};