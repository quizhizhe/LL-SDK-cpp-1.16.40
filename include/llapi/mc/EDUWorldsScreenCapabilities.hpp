// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct EDUWorldsScreenCapabilities {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUWORLDSSCREENCAPABILITIES
public:
    struct EDUWorldsScreenCapabilities& operator=(struct EDUWorldsScreenCapabilities const &) = delete;
    EDUWorldsScreenCapabilities(struct EDUWorldsScreenCapabilities const &) = delete;
    EDUWorldsScreenCapabilities() = delete;
#endif
public:
    /*0*/ virtual ~EDUWorldsScreenCapabilities();
    /*1*/ virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EDUWORLDSSCREENCAPABILITIES
#endif

};