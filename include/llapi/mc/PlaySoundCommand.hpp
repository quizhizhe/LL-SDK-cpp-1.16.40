// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PlaySoundCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYSOUNDCOMMAND
public:
    class PlaySoundCommand& operator=(class PlaySoundCommand const &) = delete;
    PlaySoundCommand(class PlaySoundCommand const &) = delete;
    PlaySoundCommand() = delete;
#endif

public:
    /*0*/ virtual ~PlaySoundCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYSOUNDCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};