// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CrashHelper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHHELPER
public:
    class CrashHelper& operator=(class CrashHelper const &) = delete;
    CrashHelper(class CrashHelper const &) = delete;
    CrashHelper() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRASHHELPER
#endif
    MCAPI static void dumpCrashHandlerAppCrashLog(std::string const &, std::string const &, std::string const &, __int64, std::string const &, class gsl::basic_string_span<char const, -1>);

};