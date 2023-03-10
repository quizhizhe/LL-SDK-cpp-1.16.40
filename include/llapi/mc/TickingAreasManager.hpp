// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TickingAreasManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREASMANAGER
public:
    class TickingAreasManager& operator=(class TickingAreasManager const &) = delete;
    TickingAreasManager(class TickingAreasManager const &) = delete;
    TickingAreasManager() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREASMANAGER
#endif
    MCAPI void _requeueEntityArea(class Dimension &, struct ActorUniqueID const &, struct Bounds const &, bool, float);
    MCAPI void addEntityArea(class Dimension &, class Actor const &);
    MCAPI unsigned int countStandaloneTickingAreas() const;
    MCAPI bool removePendingAreaByName(class Dimension &, std::string const &);
    MCAPI void update(class Level &);

//private:
    MCAPI enum AddTickingAreaStatus _addArea(class Dimension &, std::string const &, struct Bounds const &, bool);
    MCAPI void _deletePendingArea(class LevelStorage &, struct PendingArea const &);
    MCAPI void _processAdds(class Level &);
    MCAPI void _savePendingArea(class LevelStorage &, class AutomaticID<class Dimension, int>, struct PendingArea const &);

private:

};