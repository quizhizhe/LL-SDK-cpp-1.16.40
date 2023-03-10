// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
#include "BlockInstance.hpp"
#include "Dimension.hpp"

#undef BEFORE_EXTRA
#include "LevelChunk.hpp"
#include "ChunkPos.hpp"
class BlockSource {

#define AFTER_EXTRA
// Add Member There
#define ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSOURCE
public:
// struct ClipParameters
// {
//     MCAPI static const std::function<bool(class Block const&)> CHECK_ALL_BLOCKS;
// };
    LIAPI BlockInstance getBlockInstance(BlockPos);
    inline Dimension* getDimension() const{
        return dAccess< Dimension*>(this, ll::offset::BLOCKSOURCE_getDimension);
    }
    inline AutomaticID<class Dimension, int> getDimensionId() const{
        //Dimension::onBlockEvent Line24
//        Dimension* mDimension = dAccess< Dimension*>(this, 4);
        return this->getDimension()->getDimensionId();
    };
    inline LevelChunk * getChunkAt(const BlockPos& pos) const{
        ChunkPos chunkPos = ChunkPos(pos.x>>4, pos.z>>4);
        return getChunk(chunkPos);
    }
    inline std::shared_ptr<class BlockActor> removeBlockEntity(class BlockPos const &bp){
        auto levelChunk = getChunkAt(bp);
        if(levelChunk)
            return levelChunk->removeBlockEntity(bp);
        else
            return nullptr;
    }
    inline Dimension const & getDimensionConst() const{
        //BegGoal::canUse Line6
        return dAccess<Dimension>(this,ll::offset::BLOCKSOURCE_getDimensionConst);
    };
//    inline short getHeightmap(class BlockPos const &bs) const{
//        auto levelchunk = getChunkAt(bs);
//        if(!levelchunk)
//            return 0;
//        ChunkBlockPos cpos = ChunkBlockPos(bs);
//        return levelchunk->getHeightmap(&cpos);
//    };
    inline BlockPos getHeightmapPos(class BlockPos const &a1) const{
        int heightmap = this->getHeightmap(a1);
        BlockPos result = BlockPos(a1.x,heightmap,a1.z);
        return result;
    };

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSOURCE
public:
    class BlockSource& operator=(class BlockSource const &) = delete;
    BlockSource(class BlockSource const &) = delete;
    BlockSource() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSOURCE
#endif
    MCAPI BlockSource(class Level &, class Dimension &, class ChunkSource &, bool, bool);
    MCAPI void addListener(class BlockSourceListener &);
    MCAPI void addToRandomTickingQueue(class BlockPos const &, class Block const &, int, int);
    MCAPI void addToRandomTickingQueuePercentChance(class BlockPos const &, class Block const &, float, int);
    MCAPI void addToTickingQueue(class BlockPos const &, class Block const &, int, int);
    MCAPI bool areChunksFullyLoaded(class BlockPos const &, int);
    MCAPI void blockEvent(class BlockPos const &, int, int);
    MCAPI bool canSeeSky(class BlockPos const &) const;
    MCAPI bool canSeeSky(int, int, int) const;
    MCAPI bool canSeeSkyFromBelowWater(class BlockPos const &);
    MCAPI bool checkBlockDestroyPermissions(class Actor &, class BlockPos const &, class ItemStack const &, bool);
    MCAPI bool checkBlockPermissions(class Actor &, class BlockPos const &, unsigned char, class ItemStack const &, bool);
    MCAPI class HitResult clip(class Vec3 const &, class Vec3 const &, bool, bool, int, bool, bool);
    MCAPI bool containsAnyBlockOfType(class BlockPos const &, class BlockPos const &, class Block const &) const;
    MCAPI bool containsAnyLiquid(class AABB const &);
    MCAPI bool containsAnySolidBlocking(class AABB const &);
    MCAPI bool containsFireBlock(class AABB const &);
    MCAPI bool containsMaterial(class AABB const &, enum MaterialType);
    MCAPI std::vector<class AABB> & fetchAABBs(class AABB const &, bool);
    MCAPI class gsl::span<class gsl::not_null<class Actor *>, -1> fetchActors(struct ActorDefinitionIdentifier const &, class AABB const &);
    MCAPI void fetchBlockEntities(class AABB const &, std::vector<class BlockActor *> &);
    MCAPI class gsl::span<class BlockFetchResult const, -1> fetchBlocksInBox(class BoundingBox const &, class std::function<bool (class Block const &)>);
    MCAPI class gsl::span<class BlockFetchResult const, -1> fetchBlocksInCylinder(class BlockPos const &, unsigned int, unsigned int, class std::function<bool (class Block const &)>);
    MCAPI class gsl::span<class BlockFetchResult const, -1> fetchBlocksInCylinderSorted(class BlockPos const &, unsigned int, unsigned int, class std::function<bool (class Block const &)>);
    MCAPI std::vector<class AABB> & fetchCollisionShapes(class AABB const &, float *, bool, class Actor *);
    MCAPI class gsl::span<class gsl::not_null<class Actor *>, -1> fetchEntities(class Actor const *, class AABB const &, bool);
    MCAPI class gsl::span<class gsl::not_null<class Actor *>, -1> fetchEntities(class gsl::span<class gsl::not_null<class Actor const *>, -1>, class AABB const &, bool);
    MCAPI class gsl::span<class gsl::not_null<class Actor *>, -1> fetchEntities(enum ActorType, class AABB const &, class Actor const *);
    MCAPI std::vector<class Actor *> const & fetchEntities2(enum ActorType, class AABB const &, bool);
    MCAPI class Actor * fetchNearestEntityOfType(class Actor *, class AABB const &, enum ActorType);
    MCAPI bool findNextTopSolidBlockAbove(class BlockPos &);
    MCAPI bool findNextTopSolidBlockUnder(class BlockPos &);
    MCAPI void fireBlockChanged(class BlockPos const &, unsigned int, class Block const &, class Block const &, int, struct ActorBlockSyncMessage const *);
    MCAPI void fireBlockEntityAboutToBeRemoved(class std::shared_ptr<class BlockActor>);
    MCAPI void fireBlockEntityChanged(class BlockActor &);
    MCAPI class AABB generateUnloadedChunkAABB(class ChunkPos const &);
    MCAPI short getAboveTopSolidBlock(class BlockPos const &, bool, bool);
    MCAPI class Biome & getBiome(class BlockPos const &);
    MCAPI class Block const & getBlock(class BlockPos const &) const;
    MCAPI class Block const & getBlock(int, int, int) const;
    MCAPI class BlockActor * getBlockEntity(class BlockPos const &);
    MCAPI class BlockActor * getBlockEntity(int, int, int);
    MCAPI float getBrightness(class BlockPos const &) const;
    MCAPI struct BrightnessPair getBrightnessPair(class BlockPos const &) const;
    MCAPI class LevelChunk * getChunk(class ChunkPos const &) const;
    MCAPI class Biome const & getConstBiome(class BlockPos const &) const;
    MCAPI class Block const & getExtraBlock(class BlockPos const &) const;
    MCAPI short getHeightmap(class BlockPos const &) const;
    MCAPI short getHeightmap(int, int);
    MCAPI class Block const & getLiquidBlock(class BlockPos const &) const;
    MCAPI class Material const & getMaterial(int, int, int) const;
    MCAPI bool getNextTickUpdateForPos(class BlockPos const &, enum TickingQueueType, struct Tick &) const;
    MCAPI struct Brightness getRawBrightness(class BlockPos const &, bool, bool) const;
    MCAPI float getSeenPercent(class Vec3 const &, class AABB const &);
    MCAPI class BlockTickingQueue * getTickingQueue(class BlockPos const &, enum TickingQueueType) const;
    MCAPI float getVisualLiquidHeight(class Vec3 const &);
    MCAPI bool hasBlock(class BlockPos const &) const;
    MCAPI bool hasBorderBlock(class BlockPos);
    MCAPI bool hasChunksAt(struct Bounds const &) const;
    MCAPI bool hasChunksAt(class AABB const &) const;
    MCAPI bool hasChunksAt(class BlockPos const &, int) const;
    MCAPI bool hasChunksAt(class BlockPos const &, class BlockPos const &) const;
    MCAPI bool hasTickInCurrentTick(class BlockPos const &, enum TickingQueueType) const;
    MCAPI bool hasTickInPendingTicks(class BlockPos const &) const;
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, enum TickingQueueType) const;
    MCAPI bool hasTickInPendingTicks(class BlockPos const &, class Block const &, enum TickingQueueType) const;
    MCAPI bool isConsideredSolidBlock(class BlockPos const &);
    MCAPI bool isEmptyBlock(int, int, int);
    MCAPI bool isInWall(class Vec3 const &);
    MCAPI bool isPositionUnderLiquid(class Vec3 const &, enum MaterialType);
    MCAPI bool isSolidBlockingBlock(int, int, int) const;
    MCAPI bool isTouchingMaterial(class BlockPos const &, enum MaterialType) const;
    MCAPI bool isUnderWater(class Vec3 const &, class Block const &) const;
    MCAPI bool isUnobstructedByEntities(class AABB const &, class gsl::span<class gsl::not_null<class Actor const *>, -1>);
    MCAPI bool mayPlace(class Block const &, class BlockPos const &, unsigned char, class Actor *, bool);
    MCAPI void neighborChanged(class BlockPos const &, class BlockPos const &);
    MCAPI bool removeBlock(class BlockPos const &);
    MCAPI bool setBlock(int, int, int, class Block const &, int);
    MCAPI bool setBlock(class BlockPos const &, class Block const &, int, struct ActorBlockSyncMessage const *);
    MCAPI bool setBlock(class BlockPos const &, class Block const &, int, class std::shared_ptr<class BlockActor>, struct ActorBlockSyncMessage const *);
    MCAPI void setBorderBlock(class BlockPos const &, bool);
    MCAPI bool setExtraBlock(class BlockPos const &, class Block const &, int);
    MCAPI class Biome * tryGetBiome(class BlockPos const &) const;
    MCAPI void updateNeighborsAt(class BlockPos const &);
    MCAPI void updateNeighborsAtExceptFromFacing(class BlockPos const &, class BlockPos const &, int);

//protected:
    MCAPI std::vector<class AABB> & _fetchBorderBlockCollisions(class AABB const &, class Actor *, bool);
    MCAPI bool _hasChunksAt(struct Bounds const &) const;
    MCAPI void addUnloadedChunksAABBs(class AABB const &);
    MCAPI void addVoidFloor(class AABB const &);

//private:
    MCAPI bool _getBlockPermissions(class BlockPos const &, bool);
    MCAPI float _getLiquidHeight(class BlockPos const &, enum MaterialType, bool);
    MCAPI void _removeFromTickingQueue(class BlockPos const &, class Block const &, enum TickingQueueType);

protected:

private:

};