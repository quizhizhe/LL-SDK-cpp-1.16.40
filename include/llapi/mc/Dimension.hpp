// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
class BlockSource;

class DimensionHeightRange
{
public:
    short min = 0;
    short max;

    DimensionHeightRange(short a):max(a){};
};
#undef BEFORE_EXTRA

class Dimension {

#define AFTER_EXTRA
public:
    inline BlockSource& getBlockSourceFromMainChunkSource() const{
        //ExplorationMapFunction::apply Line57
        return *dAccess<BlockSource*>(this, 72);
    };
    inline int getHeight(){
        return dAccess<int>(this,202);
    };
    inline AutomaticID<class Dimension, int> getDimensionId() const{
        //Player::moveSpawnView Line33
        //Player::checkSpawnBlock Line19
        return dAccess<AutomaticID<Dimension,int>>(this,192);
    };
    inline DimensionHeightRange const & getHeightRange() const{
        // 0为主世界，1为下界，2为末地
        if(this->getDimensionId() == 2 || this->getDimensionId() == 0)
            return DimensionHeightRange(255);
        else if(this->getDimensionId() == 1)
            return DimensionHeightRange(127);
        return DimensionHeightRange(0);
    };
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSION
public:
    class Dimension& operator=(class Dimension const &) = delete;
    Dimension(class Dimension const &) = delete;
    Dimension() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIMENSION
    MCVAPI std::unique_ptr<class ChunkBuildOrderPolicyBase> _createChunkBuildOrderPolicy();
    MCVAPI void deserialize(class CompoundTag const &);
    MCVAPI bool forceCheckAllNeighChunkSavedStat() const;
    MCVAPI class Color getBrightnessDependentFogColor(class Color const &, float) const;
    MCVAPI class DimensionBrightnessRamp const & getBrightnessRamp() const;
    MCVAPI float getClearColorScale();
    MCVAPI float getCloudHeight() const;
    MCVAPI int getDefaultBiome() const;
    MCVAPI class BaseLightTextureImageBuilder * getLightTextureImageBuilder() const;
    MCVAPI float getMaxFogEnd() const;
    MCVAPI float getMaxFogStart() const;
    MCVAPI class BlockPos getSpawnPos() const;
    MCVAPI int getSpawnYPosition() const;
    MCVAPI float getSunIntensity(float, class Vec3 const &, float) const;
    MCVAPI float getTimeOfDay(int, float) const;
    MCVAPI bool hasBedrockFog();
    MCVAPI bool hasGround() const;
    MCVAPI void init();
    MCVAPI bool isDay() const;
    MCVAPI bool isEntityRelevantForPlayer(class Player &, class Actor const &) const;
    MCVAPI bool isFoggyAt(int, int) const;
    MCVAPI bool isNaturalDimension() const;
    MCVAPI bool isPositionRelevantForPlayer(class BlockPos const &, class Player &) const;
    MCVAPI bool isValidSpawn(int, int) const;
    MCVAPI bool mayRespawnViaBed() const;
    MCVAPI void onBlockChanged(class BlockSource &, class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *);
    MCVAPI void onBlockEvent(class BlockSource &, int, int, int, int, int);
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    MCVAPI void onLevelDestruction(std::string const &);
    MCVAPI void sendBroadcast(class Packet const &, class Player *);
    MCVAPI void serialize(class CompoundTag &) const;
    MCVAPI bool showSky() const;
    MCVAPI void startLeaveGame();
    MCVAPI void tick();
    MCVAPI void tickRedstone();
    MCVAPI ~Dimension();
#endif
    MCAPI Dimension(class Level &, class AutomaticID<class Dimension, int>, short, class Scheduler &, std::string);
    MCAPI float distanceToNearestPlayerSqr2D(class Vec3);
    MCAPI class Actor * fetchEntity(struct ActorUniqueID, bool);
    MCAPI class Player * fetchNearestAttackablePlayer(class BlockPos, float, class Actor *);
    MCAPI class Player * fetchNearestAttackablePlayer(class Actor &, float);
    MCAPI class Player * fetchNearestPlayer(class Actor &, float);
    MCAPI class Player * fetchNearestPlayer(float, float, float, float, bool);
    MCAPI class Player * findPlayer(class std::function<bool (class Player const &)>) const;
    MCAPI void forEachPlayer(class std::function<bool (class Player &)>);
    MCAPI void forEachPlayer(class std::function<bool (class Player const &)>) const;
    MCAPI float getMoonBrightness() const;
    MCAPI int getMoonPhase() const;
    MCAPI float getTimeOfDay(float) const;
    MCAPI void removeActorByID(struct ActorUniqueID const &);
    MCAPI void sendPacketForEntity(class Actor const &, class Packet const &, class Player const *);
    MCAPI void sendPacketForPosition(class BlockPos const &, class Packet const &, class Player const *);
    MCAPI void transferEntity(class Vec3 const &, std::unique_ptr<class CompoundTag>);
    MCAPI void transferEntityToUnloadedChunk(class Vec3 const &, std::unique_ptr<class CompoundTag>);
    MCAPI void tryGarbageCollectStructures();
    MCAPI class BlockSource * tryGetClosestPublicRegion(class ChunkPos const &) const;
    MCAPI void tryLoadLimboEntities(class ChunkPos const &);
    MCAPI static float const MOON_BRIGHTNESS_PER_PHASE[];
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1>> const STRUCTURE_PRUNE_INTERVAL;

//protected:
    MCAPI void _completeEntityTransfer(class BlockSource &, std::unique_ptr<class Actor>);

//private:
    MCAPI void _tickEntityChunkMoves();
    MCAPI void upgradeOldLimboEntity(class CompoundTag &, enum LimboEntitiesVersion);

protected:

private:

};