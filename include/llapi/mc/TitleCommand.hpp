// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TitleCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TITLECOMMAND
public:
    class TitleCommand& operator=(class TitleCommand const &) = delete;
    TitleCommand(class TitleCommand const &) = delete;
    TitleCommand() = delete;
#endif

public:
    /*0*/ virtual ~TitleCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TITLECOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};