// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PropertiesSettings {

#define AFTER_EXTRA
public:
    inline bool useOnlineAuthentication(){
        //PropertiesSettings::PropertiesSettings Line550;
        return dAccess<bool>(this, ll::offset::PROPERTIESSETTINGS_useOnlineAuthentication);
    }
    inline std::string getLevelName(){
        //PropertiesSettings::PropertiesSettings Line518
        return dAccess<std::string>(this,ll::offset::PROPERTIESSETTINGS_getLevelName);
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTIESSETTINGS
public:
    class PropertiesSettings& operator=(class PropertiesSettings const &) = delete;
    PropertiesSettings(class PropertiesSettings const &) = delete;
    PropertiesSettings() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PROPERTIESSETTINGS
#endif
    MCAPI PropertiesSettings(std::string const &);
    MCAPI enum CommandPermissionLevel getOpPermissionLevel() const;
    MCAPI struct NetworkAddress getRemoteServerCommunicationEndpoint() const;
    MCAPI float websocketRetryTime() const;
    MCAPI ~PropertiesSettings();
    MCAPI static bool parseBoolValue(std::string const &);

};