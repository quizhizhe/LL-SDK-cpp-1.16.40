// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SetWorldSpawnCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETWORLDSPAWNCOMMAND
public:
    class SetWorldSpawnCommand& operator=(class SetWorldSpawnCommand const &) = delete;
    SetWorldSpawnCommand(class SetWorldSpawnCommand const &) = delete;
    SetWorldSpawnCommand() = delete;
#endif

public:
    /*0*/ virtual ~SetWorldSpawnCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETWORLDSPAWNCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};