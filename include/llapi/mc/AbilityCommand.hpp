// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AbilityCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABILITYCOMMAND
public:
    class AbilityCommand& operator=(class AbilityCommand const &) = delete;
    AbilityCommand(class AbilityCommand const &) = delete;
    AbilityCommand() = delete;
#endif

public:
    /*0*/ virtual ~AbilityCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ABILITYCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};