// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PhotoStorage {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHOTOSTORAGE
public:
    class PhotoStorage& operator=(class PhotoStorage const &) = delete;
    PhotoStorage(class PhotoStorage const &) = delete;
    PhotoStorage() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PHOTOSTORAGE
#endif
    MCAPI static std::string const BOOKS_DIR;
    MCAPI static std::string const MANIFEST_NAME;
    MCAPI static std::string const PHOTO_DIR;

//private:
    MCAPI void _readManifest();

private:

};