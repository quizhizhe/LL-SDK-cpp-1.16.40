// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PerfContextTracker {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERFCONTEXTTRACKER
public:
    class PerfContextTracker& operator=(class PerfContextTracker const &) = delete;
    PerfContextTracker(class PerfContextTracker const &) = delete;
    PerfContextTracker() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PERFCONTEXTTRACKER
#endif
    MCAPI static class PerfContextTracker & getInstance();

//private:
    MCAPI void _resetStats();

private:

};