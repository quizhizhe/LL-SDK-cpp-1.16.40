// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct PersistentDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERSISTENTDESCRIPTION
public:
    struct PersistentDescription& operator=(struct PersistentDescription const &) = delete;
    PersistentDescription(struct PersistentDescription const &) = delete;
    PersistentDescription() = delete;
#endif
public:
    /*0*/ virtual char const * getJsonName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PERSISTENTDESCRIPTION
    MCVAPI void deserializeData(class Json::Value &);
    MCVAPI void serializeData(class Json::Value &) const;
#endif

};