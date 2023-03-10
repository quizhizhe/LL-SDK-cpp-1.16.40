// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LevelSummary {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSUMMARY
public:
    class LevelSummary& operator=(class LevelSummary const &) = delete;
    LevelSummary(class LevelSummary const &) = delete;
    LevelSummary() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELSUMMARY
#endif
    MCAPI static class Core::PathBuffer<std::string> const CUSTOM_ICON_FILENAME;
    MCAPI static std::string const DEFAULT_WORLD_ICON_FILENAME;
    MCAPI static std::string const INVALID_LEVEL_ID;
    MCAPI static class Core::PathBuffer<std::string> const WORLD_ICON_FILENAME;

};