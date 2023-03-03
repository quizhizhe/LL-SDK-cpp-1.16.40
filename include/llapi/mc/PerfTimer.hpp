// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PerfTimer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERFTIMER
public:
    class PerfTimer& operator=(class PerfTimer const &) = delete;
    PerfTimer(class PerfTimer const &) = delete;
    PerfTimer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PERFTIMER
#endif
    MCAPI PerfTimer(class std::thread::id);
    MCAPI ~PerfTimer();
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class PerfTimer, class std::allocator<class PerfTimer>> test;

//protected:

protected:
    MCAPI static class Core::PathBuffer<std::string> mPath;

};