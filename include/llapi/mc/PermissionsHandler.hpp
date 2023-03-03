// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PermissionsHandler {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERMISSIONSHANDLER
public:
    class PermissionsHandler& operator=(class PermissionsHandler const &) = delete;
    PermissionsHandler(class PermissionsHandler const &) = delete;
    PermissionsHandler() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PERMISSIONSHANDLER
#endif
    MCAPI bool loadSaveData(class CompoundTag const &);
    MCAPI static enum PlayerPermissionLevel playerPermissionLevelFromString(std::string const &);
    MCAPI static std::string playerPermissionLevelToString(enum PlayerPermissionLevel const &);

};