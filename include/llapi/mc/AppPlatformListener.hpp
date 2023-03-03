// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AppPlatformListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPPLATFORMLISTENER
public:
    class AppPlatformListener& operator=(class AppPlatformListener const &) = delete;
    AppPlatformListener(class AppPlatformListener const &) = delete;
    AppPlatformListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORMLISTENER
    MCVAPI void onAppFocusGained();
    MCVAPI void onAppFocusLost();
    MCVAPI void onAppPaused();
    MCVAPI void onAppPreSuspended();
    MCVAPI void onAppResumed();
    MCVAPI void onAppSuspended();
    MCVAPI void onAppTerminated();
    MCVAPI void onAppUnpaused();
    MCVAPI void onLowMemory();
    MCVAPI void onOperationModeChanged(enum OperationMode);
    MCVAPI void onPerformanceModeChanged(bool);
    MCVAPI void onPushNotificationReceived(class PushNotificationMessage const &);
    MCVAPI void onResizeBegin();
    MCVAPI void onResizeEnd();
#endif
    MCAPI void initListener(float);

};