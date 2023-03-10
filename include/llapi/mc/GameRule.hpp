// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GameRule {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULE
public:
    class GameRule& operator=(class GameRule const &) = delete;
    GameRule() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMERULE
#endif
    MCAPI GameRule(class GameRule const &);
    MCAPI GameRule(class GameRule &&);
    MCAPI bool setBool(bool, bool *, class GameRule::ValidationError *);
    MCAPI bool setFloat(float, bool *, class GameRule::ValidationError *);
    MCAPI bool setInt(int, bool *, class GameRule::ValidationError *);
    MCAPI class GameRule & setTagDataNotFoundCallback(class std::function<void (class GameRule &)>);
    MCAPI class GameRule & setValidateValueCallback(class std::function<bool (union GameRule::Value const &, class GameRule::ValidationError *)>);
    MCAPI ~GameRule();

};