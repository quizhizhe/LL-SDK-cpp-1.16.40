// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WorkerPool {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKERPOOL
public:
    class WorkerPool& operator=(class WorkerPool const &) = delete;
    WorkerPool(class WorkerPool const &) = delete;
    WorkerPool() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORKERPOOL
#endif
    MCAPI WorkerPool(std::string, unsigned __int64, class Bedrock::Threading::OSThreadPriority const &, class std::optional<unsigned __int64>, bool);
    MCAPI WorkerPool(std::string, class Scheduler &);
    MCAPI void queue(class std::shared_ptr<class BackgroundTask>, bool);
    MCAPI class std::shared_ptr<class BackgroundTask> tryPop(int);
    MCAPI ~WorkerPool();

//protected:
    MCAPI static void _registerPool(class WorkerPool &);

//private:
    MCAPI bool _checkPendingWork();

protected:
    MCAPI static class SmallSet<class WorkerPool *> sAllPools;
    MCAPI static class std::mutex sAllPoolsMutex;

private:

};