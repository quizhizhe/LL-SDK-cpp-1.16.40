// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LocateCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOCATECOMMAND
public:
    class LocateCommand& operator=(class LocateCommand const &) = delete;
    LocateCommand(class LocateCommand const &) = delete;
    LocateCommand() = delete;
#endif

public:
    /*0*/ virtual ~LocateCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOCATECOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};