// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CommandOutputParameter {

#define AFTER_EXTRA
    enum NoCountType;
    std::string str;
    int type;

public:
    CommandOutputParameter(class CommandOutputParameter const & output){
        this->str = output.str;
        this->type = output.type;
    };
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDOUTPUTPARAMETER
public:
    class CommandOutputParameter& operator=(class CommandOutputParameter const &) = delete;
//    CommandOutputParameter(class CommandOutputParameter const &) = delete;
    CommandOutputParameter() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDOUTPUTPARAMETER
#endif
    MCAPI CommandOutputParameter(std::string const &);
    MCAPI CommandOutputParameter(int);
    MCAPI CommandOutputParameter(class BlockPos);
    MCAPI CommandOutputParameter(std::vector<class Player const *> const &);
    MCAPI CommandOutputParameter(std::vector<class Actor const *> const &);
    MCAPI CommandOutputParameter(std::vector<std::string> const &);
    MCAPI CommandOutputParameter(class CommandSelectorResults<class Player> const &);
    MCAPI CommandOutputParameter(class CommandSelectorResults<class Actor> const &);
    MCAPI ~CommandOutputParameter();

};