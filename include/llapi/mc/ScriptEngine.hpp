// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptEngine {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTENGINE
public:
    class ScriptEngine& operator=(class ScriptEngine const &) = delete;
    ScriptEngine(class ScriptEngine const &) = delete;
    ScriptEngine() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTENGINE
    MCVAPI bool _registerSystemObjects(class ScriptApi::ScriptObjectHandle const &);
    MCVAPI bool initialize();
    MCVAPI void makeErrorResultObject(class ScriptApi::ScriptObjectHandle &);
    MCVAPI bool onErrorReceived(std::string const &);
    MCVAPI bool onInfoReceived(std::string const &);
    MCVAPI bool onLogReceived(std::string const &);
    MCVAPI bool onWarnReceived(std::string const &);
    MCVAPI void processAddFilterToQueryCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processApplyComponentChangesCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processBroadcastEventCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processCreateComponentCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processCreateEntityCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processCreateEventDataCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processDestroyComponentCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processDestroyEntityCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processErrorCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processExecuteCommandCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processGetBlockCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processGetBlocksCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processGetComponentCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processGetEntitiesFromQueryCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processHasComponentCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processInfoCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processIsValidEntityCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processListenForEventCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processLogCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processRegisterComponentCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processRegisterEventDataCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processRegisterQueryCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processRegisterSystemCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI void processWarningCallback(std::vector<class ScriptApi::ScriptObjectHandle> const &, class ScriptApi::ScriptObjectHandle &);
    MCVAPI bool shutdown();
    MCVAPI ~ScriptEngine();
#endif
    MCAPI ScriptEngine(enum ScriptApi::ApiScriptType);
    MCAPI bool deserializeScriptObjectHandleToJson(class ScriptApi::ScriptObjectHandle const &, class Json::Value &);
    MCAPI bool fireEventToScript(class EventInfo const &, class ScriptApi::ScriptObjectHandle &&);
    MCAPI bool helpDefinePosition(class BlockPos const &, class ScriptApi::ScriptObjectHandle &);
    MCAPI bool helpDefineVec3(class ScriptApi::ScriptObjectHandle &, std::string const &, class Vec3 const &);
    MCAPI bool helpGetPosition(class ScriptApi::ScriptObjectHandle const &, class Vec3 &);
    MCAPI bool helpGetPosition(class ScriptApi::ScriptObjectHandle const &, class BlockPos &);
    MCAPI bool helpGetVec3(class ScriptApi::ScriptObjectHandle const &, std::string const &, class Vec3 &);
    MCAPI bool helpSetPosition(class Vec3 const &, class ScriptApi::ScriptObjectHandle const &);
    MCAPI bool helpSetPosition(class BlockPos const &, class ScriptApi::ScriptObjectHandle const &);
    MCAPI bool serializeJsonToScriptObjectHandle(class ScriptApi::ScriptObjectHandle &, class Json::Value const &);
    MCAPI void startScriptLoading();
    MCAPI static bool isScriptingEnabled();

//protected:
    MCAPI struct IdentifierResult _validateObjectIdentifier(std::string const &) const;

//private:
    MCAPI void _addScriptToQueue(struct ScriptEngine::ScriptQueueData const &);
    MCAPI bool _getVersionInfo(class ScriptApi::ScriptObjectHandle const &, class ScriptApi::ScriptVersionInfo &);
    MCAPI bool _processSystemInitialize();
    MCAPI bool _processSystemShutdown();
    MCAPI bool _processSystemUpdate();
    MCAPI bool _runScript(struct ScriptEngine::ScriptQueueData const &);
    MCAPI bool _setVersionInfo(class ScriptApi::ScriptObjectHandle const &, class ScriptApi::ScriptVersionInfo const &);

protected:

private:

};