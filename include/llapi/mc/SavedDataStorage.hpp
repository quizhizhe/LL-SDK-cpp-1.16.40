// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SavedDataStorage {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVEDDATASTORAGE
public:
    class SavedDataStorage& operator=(class SavedDataStorage const &) = delete;
    SavedDataStorage(class SavedDataStorage const &) = delete;
    SavedDataStorage() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SAVEDDATASTORAGE
#endif
    MCAPI bool loadAndSet(class SavedData &, std::string const &);

//private:
    MCAPI void _save(class SavedData const &);

private:

};