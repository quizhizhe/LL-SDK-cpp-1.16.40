// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GameModeCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEMODECOMMAND
public:
    class GameModeCommand& operator=(class GameModeCommand const &) = delete;
    GameModeCommand(class GameModeCommand const &) = delete;
    GameModeCommand() = delete;
#endif

public:
    /*0*/ virtual ~GameModeCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMEMODECOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};