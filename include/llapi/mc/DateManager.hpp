// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DateManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATEMANAGER
public:
    class DateManager& operator=(class DateManager const &) = delete;
    DateManager(class DateManager const &) = delete;
    DateManager() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DATEMANAGER
#endif
    MCAPI static std::string getCurrentTimestampFileName();
    MCAPI static std::string toString(struct tm const &, std::string const &);

};