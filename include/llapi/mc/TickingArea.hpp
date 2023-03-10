// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TickingArea {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREA
public:
    class TickingArea& operator=(class TickingArea const &) = delete;
    TickingArea(class TickingArea const &) = delete;
    TickingArea() = delete;
#endif

public:
    /*0*/ virtual ~TickingArea();
    /*1*/ virtual class mce::UUID const & getId() const;
    /*2*/ virtual std::string const & getName() const;
    /*3*/ virtual struct ActorUniqueID const & getEntityId() const;
    /*4*/ virtual bool isEntityOwned() const;
    /*5*/ virtual class BlockSource & getBlockSource();
    /*6*/ virtual bool isAlwaysActive() const;
    /*7*/ virtual float getMaxDistToPlayers() const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual struct TickingAreaDescription getDescription() const;
    /*11*/ virtual void tick(struct Tick const &, bool);
    /*12*/ virtual void tickSeasons(class Random &);
    /*13*/ virtual void updatePosition(class Vec3 const &);
    /*14*/ virtual void center();
    /*15*/ virtual class Actor * findOwner(unsigned char &);
    /*16*/ virtual bool entityHasBeenFound() const;
    /*17*/ virtual void setEntityFound();
    /*18*/ virtual bool isRemoved();
    /*19*/ virtual void remove();
    /*20*/ virtual void onComponentChanged(unsigned int, float, bool);
    /*21*/ virtual void onChunkDiscarded(class LevelChunk &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREA
    MCVAPI class ITickingAreaView & getView();
    MCVAPI class ITickingAreaView const & getView() const;
#endif

//private:
    MCAPI TickingArea(class Dimension &, class mce::UUID, std::string const &, struct ActorUniqueID, struct Bounds const &, bool, float, bool);
    MCAPI void _save();

private:

};