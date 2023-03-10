// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HelpCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HELPCOMMAND
public:
    class HelpCommand& operator=(class HelpCommand const &) = delete;
    HelpCommand(class HelpCommand const &) = delete;
    HelpCommand() = delete;
#endif

public:
    /*0*/ virtual ~HelpCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HELPCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

//private:
    MCAPI void getCommandHelp(class CommandRegistry const &, class CommandOrigin const &, class CommandOutput &) const;
    MCAPI void getHelpPage(class CommandRegistry const &, class CommandOrigin const &, class CommandOutput &) const;

private:

};