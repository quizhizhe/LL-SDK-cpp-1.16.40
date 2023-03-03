// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <string>
#include "CommandOrigin.hpp"
class CommandOrigin;
#undef BEFORE_EXTRA

class CommandContext {

#define AFTER_EXTRA
    // Add Member There

public:
    std::string command;
    std::unique_ptr<CommandOrigin> origin;
    int Version = 18;

    std::string& getCmd() {
        return command;
    }
    class CommandOrigin& getOrigin() {
        return *origin;
    }

    template <typename T>
    [[deprecated]]
    CommandContext(T&& x, CommandOrigin* o)
    : command(std::forward<T>(x))
    , origin(o){};
    template <typename T>
    CommandContext(T&& x, std::unique_ptr<CommandOrigin> ori)
    : command(std::forward<T>(x))
    , origin(std::move(ori)){};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDCONTEXT
public:
    class CommandContext& operator=(class CommandContext const &) = delete;
    CommandContext(class CommandContext const &) = delete;
    CommandContext() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDCONTEXT
#endif
    MCAPI CommandContext(std::string const &, std::unique_ptr<class CommandOrigin>, int);

};