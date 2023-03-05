// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
#include "Core.hpp"
#include "BlockInstance.hpp"
#include "Tick.hpp"
#include "Social.hpp"
#include "Types.hpp"
class Actor;
class ActorDamageSource;
class ItemStack;
class ItemActor;
class Block;
class CompoundTag;
class Player;
class BlockSource;
class BlockPalette;
class Container;
class Dimension;
struct ActorUniqueID;
class Packet;
class Spawner;

#undef BEFORE_EXTRA

class Level {

#define AFTER_EXTRA
// Add new members to class
public:

    #define ENABLE_VIRTUAL_FAKESYMBOL_LEVEL
    //Entity & Player
    //LIAPI static void forEachPlayer(class std::function<bool(class Player&)> callback);
    //LIAPI static void forEachPlayer(class std::function<bool(class Player const&)> callback);
    LIAPI static std::vector<Player*> getAllPlayers();
    LIAPI Player* getPlayer(const string& info);     // name or xuid
    LIAPI Player* getPlayer(ActorUniqueID id);       // UniqueID
    LIAPI Player* getPlayer(const mce::UUID& uuid)const; //原生函数Level::getPlayer(mce::UUID)
    LIAPI static Actor* getEntity(ActorUniqueID id);
    LIAPI static std::vector<Actor*> getAllEntities(int dimId);
    LIAPI static std::vector<Actor*> getAllEntities();
    LIAPI static Actor* spawnMob(Vec3 pos, int dimId, std::string typeName);
    LIAPI static Actor* spawnItem(Vec3 pos, int dimId, ItemStack *item);
    LIAPI static bool createExplosion(Vec3 pos, int dimId, Actor* source, float radius, bool createFire, bool canBreak, float maxResistance = 3.40282347e+38);
    //LIAPI static class MapItemSavedData* getMapSavedData(struct ActorUniqueID a0);
    LIAPI static Actor* cloneMob(Vec3 pos, int dimId, Actor* ac);

    //Block
    LIAPI static Block* getBlock(BlockPos* pos, int dimId);
    LIAPI static Block* getBlock(BlockPos* pos, BlockSource* blockSource);
    LIAPI static Block* getBlock(const BlockPos& pos, int dimId);
    LIAPI static Block* getBlock(const BlockPos& pos, BlockSource *blockSource);
    LIAPI static Block* getBlockEx(const BlockPos& pos, int dimId);
    LIAPI static BlockInstance getBlockInstance(BlockPos* pos, int dimId);
    LIAPI static BlockInstance getBlockInstance(BlockPos* pos, BlockSource* blockSource);
    LIAPI static BlockInstance getBlockInstance(const BlockPos& pos, int dimId);
    LIAPI static BlockInstance getBlockInstance(const BlockPos& pos, BlockSource* blockSource);
    LIAPI static BlockActor* getBlockEntity(BlockPos* pos, int dimId);
    LIAPI static BlockActor* getBlockEntity(BlockPos* pos, BlockSource* blockSource);
    LIAPI static BlockActor* getBlockEntity(const BlockPos& pos, int dimId);
    LIAPI static BlockActor* getBlockEntity(const BlockPos& pos, BlockSource* blockSource);
    LIAPI static bool setBlock(const BlockPos& pos, int dim, Block* block);
    LIAPI static bool setBlock(const BlockPos& pos, int dim, const string& name, unsigned short tileData);
    LIAPI static bool setBlock(const BlockPos& pos, int dim, CompoundTag* nbt);
    //LIAPI static bool breakBlockNaturally(BlockSource* bs, const BlockPos& pos);
    //LIAPI static bool breakBlockNaturally(BlockSource* bs, const BlockPos& pos, ItemStack* tool);
    //LIAPI static bool destroyBlock(class BlockSource& bs, class BlockPos const& pos, bool a2);
    //LIAPI static void spawnParticleEffect(std::string const& type, class Vec3 const& pos, class Dimension* a2);
    //LIAPI static void spawnParticleEffect(std::string const& type, class Actor const& a1, class Vec3 const& a2);
    LIAPI static bool hasContainer(Vec3 pos, int dim);
    LIAPI static Container* getContainer(Vec3 pos, int dim);

    //Item
    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* getItemStackFromId(short itemId, int aux = 0);

    //Helper
    LIAPI static BlockSource* getBlockSource(int dimid);
    LIAPI static BlockSource* getBlockSource(Actor* actor);
    LIAPI static BlockPalette* getBlockPalettePtr();
    //LIAPI static Dimension* getDimension(class AutomaticID<class Dimension, int> a0);
    LIAPI static Actor* getDamageSourceEntity(ActorDamageSource* ads);
    LIAPI static void broadcastText(const string& text, TextType type);
    LIAPI static void broadcastTitle(const string& text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration);
	
    [[deprecated("This is a typo. Use Level::sendPacketForAllPlayers")]]
    LIAPI static void sendPacketForAllPlayer(Packet& pkt);

    LIAPI static void sendPacketForAllPlayers(Packet& pkt);

    LIAPI static std::string getCurrentLevelName();
    LIAPI static std::string getCurrentLevelPath();
    LIAPI static int64_t createBossEvent();

 public:
    static void dummy() { ; }
//    struct ServerCommandOrigin {
//        void* myVTBL;
//        void* UUID[2];
//        ServerLevel* lvl;
//        string Name;
//        unsigned char Perm;
//        static void* fake_vtbl[26];
//
//        [[deprecated]]
//        ServerCommandOrigin()
//        {
//            if (fake_vtbl[1] == nullptr) {
//                memcpy(fake_vtbl, (void**)(SYM("??_7ServerCommandOrigin@@6B@")) - 1, sizeof(fake_vtbl));
//                fake_vtbl[1] = (void*)dummy;
//            }
//            myVTBL = fake_vtbl + 1;
//            Name = "Server";
//            Perm = 4;
//            lvl = Global<ServerLevel>;
//        }
//    };

    LIAPI static bool executeCommandAs(Player* player, const string& cmd);
    LIAPI static std::pair<bool, string> executeCommandEx(const string& cmd);
    LIAPI static bool executeCommand(const string& cmd);



    //For compatibility
    LIAPI static bool runcmdAs(Player* pl, const string& cmd)
    {
        return executeCommandAs(pl, cmd);
    }
    LIAPI static std::pair<bool, string> runcmdEx(const string& cmd)
    {
        return executeCommandEx(cmd);
    }
    LIAPI static bool runcmd(const string& cmd)
    {
        return executeCommand(cmd);
    }

    inline Spawner& getSpawner() const{
        return *dAccess<std::unique_ptr<Spawner>>(this,ll::offset::LEVEL_getSpawner).get();
    };
    
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVEL
public:
    class Level& operator=(class Level const &) = delete;
    Level(class Level const &) = delete;
    Level() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVEL
    MCVAPI class Actor * addAutonomousEntity(class BlockSource &, std::unique_ptr<class Actor>);
    MCVAPI class Actor * addEntity(class BlockSource &, std::unique_ptr<class Actor>);
    MCVAPI void addEntryToTagCache(std::string const &);
    MCVAPI class Actor * addGlobalEntity(class BlockSource &, std::unique_ptr<class Actor>);
    MCVAPI void addPlayer(std::unique_ptr<class Player>);
    MCVAPI std::unique_ptr<class Actor> borrowEntity(struct ActorUniqueID, class LevelChunk *);
    MCVAPI bool canUseSkin(class SerializedSkin const &, class NetworkIdentifier const &, class mce::UUID const &, std::string const &) const;
    MCVAPI void clearTagCache();
    MCVAPI void decrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    MCVAPI void directTickEntities(class BlockSource &);
    MCVAPI void dropEntryFromTagCache(std::string const &);
    MCVAPI class BiomeComponentFactory & getBiomeComponentFactory();
    MCVAPI class BiomeComponentFactory const & getBiomeComponentFactory() const;
    MCVAPI class BiomeRegistry & getBiomeRegistry();
    MCVAPI class BiomeRegistry const & getBiomeRegistry() const;
    MCVAPI class BlockPalette & getBlockPalette();
    MCVAPI class BlockPalette const & getBlockPalette() const;
    MCVAPI class ResourcePackManager * getClientResourcePackManager() const;
    MCVAPI struct Tick const getCurrentServerTick() const;
    MCVAPI class Factory<class Dimension, class Level &, class Scheduler &> & getDimensionFactory();
    MCVAPI class Factory<class Dimension, class Level &, class Scheduler &> const & getDimensionFactory() const;
    MCVAPI class FeatureRegistry & getFeatureRegistry();
    MCVAPI class FeatureRegistry const & getFeatureRegistry() const;
    MCVAPI class FeatureTypeFactory & getFeatureTypeFactory();
    MCVAPI class FeatureTypeFactory const & getFeatureTypeFactory() const;
    MCVAPI class JigsawStructureRegistry & getJigsawStructureRegistry();
    MCVAPI class JigsawStructureRegistry const & getJigsawStructureRegistry() const;
    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level &, class Scheduler &> & getLightTextureImageBuilderFactory();
    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level &, class Scheduler &> const & getLightTextureImageBuilderFactory() const;
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer * getPositionTrackerDBServer() const;
    MCVAPI class ResourcePackManager * getServerResourcePackManager() const;
    MCVAPI class StructureManager & getStructureManager();
    MCVAPI class StructureManager const & getStructureManager() const;
    MCVAPI class SurfaceBuilderRegistry & getSurfaceBuilderRegistry();
    MCVAPI class SurfaceBuilderRegistry const & getSurfaceBuilderRegistry() const;
    MCVAPI class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> & getTagRegistry();
    MCVAPI class TradeTables * getTradeTables();
    MCVAPI void incrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    MCVAPI bool initialize(std::string const &, class LevelSettings const &, class LevelData *, std::string const *);
    MCVAPI void loadFunctionManager();
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    MCVAPI void onPlayerDeath(class Player &, class ActorDamageSource const &);
    MCVAPI void onSourceCreated(class BlockSource &);
    MCVAPI void onSourceDestroyed(class BlockSource &);
    MCVAPI void queueEntityRemoval(std::unique_ptr<class Actor> &&, bool);
    MCVAPI void removeEntityReferences(class Actor &, bool);
    MCVAPI void runCommand(class HashedString const &, class CommandOrigin &, enum CommandOriginSystem, enum CurrentCmdVersion);
    MCVAPI void saveAdditionalData();
    MCVAPI void setCommandsEnabled(bool);
    MCVAPI void setDifficulty(enum Difficulty);
    MCVAPI void setFinishedInitializing();
    MCVAPI void setWorldTemplateOptionsUnlocked();
    MCVAPI void startLeaveGame();
    MCVAPI std::unique_ptr<class Actor> takeEntity(struct ActorUniqueID);
    MCVAPI void tick();
    MCVAPI void updateSleepingPlayerList();
    MCVAPI ~Level();
#endif
    MCAPI Level(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const &, std::unique_ptr<class LevelStorage>, std::unique_ptr<class LevelLooseFileStorage>, class IMinecraftEventing &, bool, unsigned char, class Scheduler &, class StructureManager &, class ResourcePackManager &, class IEntityRegistryOwner &, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>);
    MCAPI void _checkUserStorage();
    MCAPI void addListener(class LevelListener &);
    MCAPI class Particle * addParticle(enum ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
    MCAPI void addTerrainParticleEffect(class BlockPos const &, class Block const &, class Vec3 const &, float, float, float);
    MCAPI void broadcastActorEvent(class Actor &, enum ActorEvent, int);
    MCAPI void broadcastBossEvent(enum BossEventUpdateType);
    MCAPI void broadcastDimensionEvent(class BlockSource &, enum LevelEvent, class Vec3 const &, int, class Player *);
    MCAPI void broadcastLevelEvent(enum LevelEvent, class Vec3 const &, int, class Player *);
    MCAPI void broadcastLevelEvent(enum LevelEvent, class CompoundTag const &, class Player *);
    MCAPI void broadcastSoundEvent(class BlockSource &, enum LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    MCAPI bool checkAndHandleMaterial(class AABB const &, enum MaterialType, class Actor *);
    MCAPI bool copyAndLockMap(struct ActorUniqueID, struct ActorUniqueID);
    MCAPI class Dimension * createDimension(class AutomaticID<class Dimension, int>);
    MCAPI class MapItemSavedData & createMapSavedData(struct ActorUniqueID const &, class BlockPos const &, class AutomaticID<class Dimension, int>, int);
    MCAPI class MapItemSavedData & createMapSavedData(std::vector<struct ActorUniqueID> const &, class BlockPos const &, class AutomaticID<class Dimension, int>, int);
    MCAPI void createPhotoStorage();
    MCAPI void denyEffect(class Vec3 const &);
    MCAPI bool destroyBlock(class BlockSource &, class BlockPos const &, bool);
    MCAPI void entityChangeDimension(class Actor &, class AutomaticID<class Dimension, int>);
    MCAPI struct ActorUniqueID expandMapByID(struct ActorUniqueID, bool);
    MCAPI void explode(class BlockSource &, class Actor *, class Vec3 const &, float, bool, bool, float, bool);
    MCAPI bool extinguishFire(class BlockSource &, class BlockPos const &, unsigned char);
    MCAPI class Actor * fetchEntity(struct ActorUniqueID, bool) const;
    MCAPI class Player * findPlayer(class std::function<bool (class Player const &)>) const;
    MCAPI void forEachDimension(class std::function<bool (class Dimension &)>);
    MCAPI void forEachPlayer(class std::function<bool (class Player &)>);
    MCAPI void forEachPlayer(class std::function<bool (class Player const &)>) const;
    MCAPI void forceRemoveEntity(class Actor &);
    MCAPI struct AdventureSettings & getAdventureSettings();
    MCAPI struct Tick const & getCurrentTick() const;
    MCAPI enum GameType getDefaultGameType() const;
    MCAPI enum Difficulty getDifficulty() const;
    MCAPI class Dimension * getDimension(class AutomaticID<class Dimension, int>) const;
    MCAPI class DimensionConversionData getDimensionConversionData() const;
    MCAPI class GameRules & getGameRules();
    MCAPI class MapItemSavedData * getMapSavedData(struct ActorUniqueID);
    MCAPI int getNewPlayerId() const;
    MCAPI class PacketSender * getPacketSender() const;
    MCAPI class Color getPlayerColor(class Player const &) const;
    MCAPI std::string const & getPlayerPlatformOnlineId(class mce::UUID const &) const;
    MCAPI std::string const & getPlayerXUID(class mce::UUID const &) const;
    MCAPI class Player * getPrimaryLocalPlayer() const;
    MCAPI class Player * getRandomPlayer();
    MCAPI class Actor * getRuntimeEntity(class ActorRuntimeID, bool) const;
    MCAPI unsigned int getSeed();
    MCAPI class BlockPos const & getSharedSpawnPos() const;
    MCAPI float getSpecialMultiplier(class AutomaticID<class Dimension, int>) const;
    MCAPI class ITickingArea * getTickingArea(class mce::UUID const &) const;
    MCAPI bool hasCommandsEnabled() const;
    MCAPI bool hasExperimentalGameplayEnabled() const;
    MCAPI bool isPlayerSuspended(class Player &) const;
    MCAPI void onChunkDiscarded(class LevelChunk &);
    MCAPI void playSound(class BlockSource &, enum LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    MCAPI void playSound(enum LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    MCAPI void playSynchronizedSound(class BlockSource &, enum LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    MCAPI void potionSplash(class Vec3 const &, class Color const &, bool);
    MCAPI void removeAutonomousEntity(class Actor &, class LevelChunk *);
    MCAPI void removeListener(class LevelListener &);
    MCAPI void requestMapInfo(struct ActorUniqueID, bool);
    MCAPI void requestPlayerChangeDimension(class Player &, std::unique_ptr<class ChangeDimensionRequest>);
    MCAPI void save();
    MCAPI void saveBiomeData();
    MCAPI void saveDirtyChunks();
    MCAPI void saveGameData();
    MCAPI void saveLevelData();
    MCAPI void saveVillages();
    MCAPI void setDefaultGameType(enum GameType);
    MCAPI void spawnParticleEffect(std::string const &, class Vec3 const &, class Dimension *);
    MCAPI void tickEntities();
    MCAPI void unregisterTemporaryPointer(class _TickPtr &);
    MCAPI void updateWeather(float, int, float, int);

//private:
    MCAPI void _cleanupDisconnectedPlayers();
    MCAPI class MapItemSavedData & _createMapSavedData(struct ActorUniqueID const &);
    MCAPI void _fixEntitiesRegion(std::vector<class Actor *> &, class BlockSource const &, class Dimension &);
    MCAPI enum CrashDumpLogStringID _getCrashDumpLogCategory();
    MCAPI std::string _getValidatedPlayerName(std::string const &);
    MCAPI void _handleChangeDimensionRequests();
    MCAPI void _handlePlayerSuspension();
    MCAPI void _loadAutonomousEntities();
    MCAPI void _loadBiomeData();
    MCAPI class MapItemSavedData * _loadMapData(struct ActorUniqueID const &);
    MCAPI bool _playerChangeDimension(class Player *, class ChangeDimensionRequest &);
    MCAPI void _saveAutonomousEntities();
    MCAPI void _saveSomeChunks();
    MCAPI void _syncTime(int);

private:

};