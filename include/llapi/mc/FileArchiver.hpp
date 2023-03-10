// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FileArchiver {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEARCHIVER
public:
    class FileArchiver& operator=(class FileArchiver const &) = delete;
    FileArchiver(class FileArchiver const &) = delete;
    FileArchiver() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILEARCHIVER
#endif
    MCAPI class std::future<struct FileArchiver::Result> archivePack(class Core::Path const &, class Core::Path const &, class std::function<void (struct FileArchiver::Result &)>);
    MCAPI static std::string const EXTENSION_ADDON;
    MCAPI static std::string const EXTENSION_RESOURCEPACK;
    MCAPI static std::string const EXTENSION_TEMPLATE;
    MCAPI static std::string const EXTENSION_VANILLA;
    MCAPI static std::string const IMPORT_LOCK_FILE;

//private:
    MCAPI void _printResultMessage(struct FileArchiver::Result const &);

private:

};