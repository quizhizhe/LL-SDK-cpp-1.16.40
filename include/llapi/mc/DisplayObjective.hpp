// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DisplayObjective {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISPLAYOBJECTIVE
public:
    class DisplayObjective& operator=(class DisplayObjective const &) = delete;
    DisplayObjective(class DisplayObjective const &) = delete;
    DisplayObjective() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DISPLAYOBJECTIVE
#endif
    MCAPI std::string const getBelowNameStringForId(struct ScoreboardId const &) const;
    MCAPI static class DisplayObjective deserialize(class CompoundTag const &, class Scoreboard const &);

};