// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class IWebviewTelemetry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IWEBVIEWTELEMETRY
public:
    class IWebviewTelemetry& operator=(class IWebviewTelemetry const &) = delete;
    IWebviewTelemetry(class IWebviewTelemetry const &) = delete;
    IWebviewTelemetry() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IWEBVIEWTELEMETRY
    MCVAPI void onDownloadBegin(struct WebviewDownloadInfo const &);
    MCVAPI void onDownloadCanceled(struct WebviewDownloadInfo const &);
    MCVAPI void onDownloadComplete(struct WebviewDownloadInfo const &);
#endif

};