// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct OnTargetAcquiredDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONTARGETACQUIREDDESCRIPTION
public:
    struct OnTargetAcquiredDescription& operator=(struct OnTargetAcquiredDescription const &) = delete;
    OnTargetAcquiredDescription(struct OnTargetAcquiredDescription const &) = delete;
    OnTargetAcquiredDescription() = delete;
#endif
public:
    /*0*/ virtual char const * getJsonName() const;
    /*1*/ virtual ~OnTargetAcquiredDescription();
    /*2*/ virtual void deserializeData(class Json::Value &);
    /*3*/ virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ONTARGETACQUIREDDESCRIPTION
#endif

};