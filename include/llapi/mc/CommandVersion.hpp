// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CommandVersion {

#define AFTER_EXTRA
    // Add Member There
public:
    int Min = 1, Max = 0x7FFFFFFF;
    CommandVersion(){};

#define DISABLE_CONSTRUCTOR_PREVENTION_COMMANDVERSION
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDVERSION
public:
    class CommandVersion& operator=(class CommandVersion const &) = delete;
    CommandVersion(class CommandVersion const &) = delete;
    CommandVersion() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDVERSION
#endif
    MCAPI CommandVersion(int, int);
    MCAPI static int const CurrentVersion;
    MCAPI static enum CurrentCmdVersion const getVersionMapping(class SemVersion const &);

};