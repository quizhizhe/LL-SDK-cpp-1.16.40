// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include <llapi/Global.h>
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class ServerPlayer;
class Player;
class NetworkIdentifier;
class Certificate;
class Container;
class CompoundTag;
//#include "UserEntityIdentifierComponent.hpp"
#include "ScorePacketInfo.hpp"
#include "DataItem.hpp"
#include <llapi/I18nAPI.h>
#include <llapi/HookAPI.h>
#include "AttributeInstance.hpp"
#undef BEFORE_EXTRA

class Player : public Mob {

#define AFTER_EXTRA
    // Add new members to class
    // mClientUUID 2720
    // mCertificate 2736
    // mClientSubId 3520
public:
    enum PositionMode : char {
        NORMAL,
        RESPAWN,
        TELEPORT,
        HEAD_ROTATION,
    };

    LIAPI std::string getName();
    LIAPI std::string getRealName();
    LIAPI std::string getUuid()const;
    LIAPI std::string getXuid()const;
    LIAPI mce::UUID getClientUUID()const;
    LIAPI unsigned char getClientSubId();
    LIAPI string getDeviceTypeName();
    LIAPI int getAvgPing();
    LIAPI int getLastPing();
    LIAPI std::string getIP();
    LIAPI string getLanguageCode();
    LIAPI string getServerAddress();
    LIAPI NetworkIdentifier* getNetworkIdentifier() const;
    LIAPI Certificate* getCertificate()const;
    LIAPI std::pair<BlockPos, int> getRespawnPosition();
    LIAPI float getAvgPacketLoss();
    LIAPI float getLastPacketLoss();
    LIAPI string getClientId();
    LIAPI int getDeviceType();
    LIAPI bool isOperator();
    LIAPI bool isOP();
    LIAPI int getPlatform();
    LIAPI Container & getInventory();
    LIAPI BlockPos const & getSpawnPosition();
    LIAPI AutomaticID<Dimension, int> getSpawnDimension();
    LIAPI enum CommandPermissionLevel getPlayerPermissionLevel();
    LIAPI int getPlayerLevel();

    LIAPI int getCurrentExperience();
    LIAPI bool setCurrentExperience(int exp);
    LIAPI size_t getTotalExperience();
    LIAPI bool setTotalExperience(size_t exp);
    LIAPI bool reduceExperience(size_t exp);

    // Experience required to upgrade to level from (level-1)
    LIAPI static int getXpNeededForLevel(int level);

    // Experience required to upgrade to level from level 0
    LIAPI static size_t getTotalXpNeededForLevel(int level);

    /**
     * @brief Translate(localize) a text for the player with provided plugin handle.
     *
     * @param  hPlugin      The plugin handle
     * @param  format       The str to translate and format
     * @param  args         The format arguments
     * @return std::string  The translated str
     */
    template <typename... Args>
    inline std::string trImpl(HMODULE hPlugin, const std::string& format, Args&&... args) {
        return Translation::trlImpl(hPlugin, this->getLanguageCode(), format, std::forward<Args>(args)...);
    }

    /**
     * @brief Translate(localize) a text for the player(convenience func).
     *
     * @param  format       The str to translate and format
     * @param  args         The format arguments
     * @return std::string  The translated str
     */
    template <typename... Args>
    inline std::string tr(const std::string& format, Args&&... args) {
        return trImpl(GetCurrentModule(), format, std::forward<Args>(args)...);
    }

    LIAPI bool sendText(const std::string& text, TextType type = TextType::RAW);
    /**
     * @brief Translate(localize) and send a text to the player(convenience func).
     *
     * @tparam ttype  The text type(default RAW)
     * @tparam Args   ...
     * @param  text   The str to translate and format
     * @param  args   The format arguments
     * @return bool   Success or not
     */
    template <TextType ttype = TextType::RAW, typename... Args>
    inline bool sendText(const std::string& text, Args&&... args) {
        return sendText(this->tr(text, std::forward<Args>(args)...), ttype);
    }
    template <typename... Args>
    inline bool sendFormattedText(const std::string& text, Args&&... args) {
        if constexpr (0 == sizeof...(args)) {
            // Avoid fmt if only one argument
            return sendText(text);
        } else {
            return sendText(fmt::format(text, std::forward<Args>(args)...));
        }
    }

    LIAPI bool kick(const string& msg);
    LIAPI bool crashClient();
    LIAPI bool talkAs(const string& msg);
    LIAPI bool giveItem(ItemStack* item);
    LIAPI int clearItem(string typeName);
    LIAPI bool runcmd(const string& cmd);
    LIAPI bool transferServer(const string& address, unsigned short port);
    LIAPI bool setSidebar(const std::string& title, const std::vector<std::pair<std::string, int>>& data, ObjectiveSortOrder sortOrder);
    LIAPI bool removeSidebar();
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    LIAPI bool refreshAttribute(class Attribute const& attribute);
    LIAPI bool refreshAttributes(std::vector<Attribute const*> const& attributes);
    LIAPI void addBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay = 0);
    LIAPI void removeBossEvent(int64_t uid);
    LIAPI void updateBossEvent(int64_t uid, string name, float percent, BossEventColour colour, int overlay = 0);

    LIAPI int getScore(const string& key);
    LIAPI bool setScore(const string& key, int value);
    LIAPI bool addScore(const string& key, int value);
    LIAPI bool reduceScore(const string& key, int value);
    LIAPI bool deleteScore(const string& key);

    // Form
    LIAPI bool sendSimpleForm(const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images, std::function<void(Player*, int)> callback) const;
    LIAPI bool sendModalForm(const string& title, const string& content, const string& confirmButton, const string& cancelButton, std::function<void(Player*, bool)> callback) const;
    LIAPI bool sendCustomForm(const std::string& data, std::function<void(Player*, string)> callback) const;

    // Packet
    LIAPI bool sendTextPacket(string text, TextType Type = TextType::RAW) const;
    LIAPI bool sendTitlePacket(string text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration) const;
    LIAPI bool sendNotePacket(unsigned int tone);
    LIAPI bool sendSpawnParticleEffectPacket(Vec3 spawnPos, int dimid, string ParticleName, int64_t EntityUniqueID = -1) const;
    /*bad*/ LIAPI bool sendPlaySoundPacket(string SoundName, Vec3 Position, float Volume, float Pitch) const;
    //LIAPI bool sendAddItemEntityPacket(unsigned long long runtimeID, class Item const& item, int stackSize, short aux, Vec3 pos, vector<std::unique_ptr<DataItem>> dataItems = {}) const;
    LIAPI bool sendAddEntityPacket(unsigned long long runtimeID, string entityType, Vec3 pos, Vec2 rotation, float headYaw, vector<std::unique_ptr<DataItem>> dataItems = {});
    LIAPI bool sendUpdateBlockPacket(BlockPos const& blockPos, unsigned int runtimeId, UpdateBlockFlags flag = UpdateBlockFlags::BlockUpdateAll, UpdateBlockLayer layer = UpdateBlockLayer::UpdateBlockDefault);
    LIAPI bool sendUpdateBlockPacket(BlockPos const& blockPos, const Block& block, UpdateBlockFlags flag = UpdateBlockFlags::BlockUpdateAll, UpdateBlockLayer layer = UpdateBlockLayer::UpdateBlockDefault);
    LIAPI bool sendTransferPacket(const string& address, short port) const;
    LIAPI bool sendSetDisplayObjectivePacket(const string& title, const string& name, char sortOrder) const;
    LIAPI bool sendSetScorePacket(char type, const vector<ScorePacketInfo>& data);
    LIAPI bool sendBossEventPacket(BossEvent type, string name, float percent, BossEventColour colour, int overlay = 0);
    LIAPI bool sendCommandRequestPacket(const string& cmd);
    LIAPI bool sendTextTalkPacket(const string& msg);
    LIAPI bool sendTextTalkPacket(const string& msg, Player* target /* = nullptr*/);

    LIAPI bool sendRawFormPacket(unsigned formId, const string& data) const;
    //LIAPI bool sendToastPacket(string title, string msg);

    void sendNetworkPacket(class Packet &) const;

    LIAPI static bool isValid(Player* player);

    // For compatibility
    inline string getDeviceName() {
        return getDeviceTypeName();
    }
    inline std::string* getDeviceId(){
        //AddPlayerPacket::AddPlayerPacket Line58
        return dAccess<std::string*>(this,7872);
    };
    inline bool isFlying(){
        //Actor::onAboveBubbleColumn Line5 照抄的，不知行不行
        return (dAccess<int>(this,2228) == 1 || !dAccess<bool>(this,2232)) && (dAccess<int>(this, 2324) == 1 || !dAccess<bool>(this, 2328));
    };
    inline bool isHungry(){
        void* Player_HUNGER = dlsym("?HUNGER@Player@@2VAttribute@@B");
        return getAttribute(*(Attribute*)Player_HUNGER).getMaxValue() > getAttribute(*(Attribute*)Player_HUNGER).getCurrentValue();
    }

    LIAPI bool sendSimpleFormPacket(const string& title, const string& content, const vector<string>& buttons, const std::vector<std::string>& images, std::function<void(int)> callback) const;
    LIAPI bool sendModalFormPacket(const string& title, const string& content, const string& button1, const string& button2, std::function<void(bool)> callback);
    LIAPI bool sendCustomFormPacket(const std::string& data, std::function<void(string)> callback);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYER
public:
    class Player& operator=(class Player const &) = delete;
    Player(class Player const &) = delete;
    Player() = delete;
#endif

public:
    /*1*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*3*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*5*/ virtual void _serverInitItemStackIds();
    /*7*/ virtual ~Player();
    /*11*/ virtual void remove();
    /*16*/ virtual class Vec3 getAttachPos(enum ActorLocation, float) const;
    /*19*/ virtual void move(class Vec3 const &);
    /*30*/ virtual void __unk_vfn_30();
    /*33*/ virtual void teleportTo(class Vec3 const &, bool, int, int, struct ActorUniqueID const &);
    /*38*/ virtual std::unique_ptr<class AddActorBasePacket> getAddPacket();
    /*39*/ virtual void normalTick();
    /*41*/ virtual void rideTick();
    /*43*/ virtual float getRidingHeight();
    /*54*/ virtual void __unk_vfn_54();
    /*58*/ virtual std::string getFormattedNameTag() const;
    /*61*/ virtual void __unk_vfn_61();
    /*72*/ virtual float getCameraOffset() const;
    /*76*/ virtual void __unk_vfn_76();
    /*81*/ virtual void __unk_vfn_81();
    /*85*/ virtual bool isImmobile() const;
    /*88*/ virtual void __unk_vfn_88();
    /*89*/ virtual bool isSleeping() const;
    /*90*/ virtual void __unk_vfn_90();
    /*93*/ virtual bool isBlocking() const;
    /*94*/ virtual bool isDamageBlocked(class ActorDamageSource const &) const;
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*105*/ virtual bool attack(class Actor &);
    /*107*/ virtual void adjustDamageAmount(int &) const;
    /*119*/ virtual bool isJumping() const;
    /*121*/ virtual void __unk_vfn_121();
    /*124*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*126*/ virtual void actuallyHurt(int, class ActorDamageSource const &, bool);
    /*130*/ virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /*131*/ virtual void feed(int);
    /*132*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*134*/ virtual class HashedString const & getActorRendererId() const;
    /*142*/ virtual void awardKillScore(class Actor &, int);
    /*143*/ virtual void setArmor(enum ArmorSlot, class ItemStack const &);
    /*150*/ virtual class ItemStack const & getCarriedItem() const;
    /*151*/ virtual void setCarriedItem(class ItemStack const &);
    /*152*/ virtual void setOffhandSlot(class ItemStack const &);
    /*153*/ virtual class ItemStack const & getEquippedTotem() const;
    /*154*/ virtual bool consumeTotem();
    /*159*/ virtual enum ActorType getEntityTypeId() const;
    /*165*/ virtual int getPortalCooldown() const;
    /*166*/ virtual int getPortalWaitTime() const;
    /*169*/ virtual void __unk_vfn_169();
    /*177*/ virtual void onSynchedDataUpdate(int);
    /*178*/ virtual bool canAddRider(class Actor &) const;
    /*180*/ virtual bool canBePulledIntoVehicle() const;
    /*182*/ virtual void __unk_vfn_182();
    /*184*/ virtual void sendMotionPacketIfNeeded();
    /*187*/ virtual void startSwimming();
    /*188*/ virtual void stopSwimming();
    /*190*/ virtual enum CommandPermissionLevel getCommandPermissionLevel() const;
    /*202*/ virtual class AnimationComponent & getAnimationComponent();
    /*205*/ virtual void useItem(class ItemStack &, enum ItemUseMethod, bool);
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*209*/ virtual float getMapDecorationRotation() const;
    /*212*/ virtual bool isWorldBuilder();
    /*213*/ virtual bool isCreative() const;
    /*214*/ virtual bool isAdventure() const;
    /*215*/ virtual bool add(class ItemStack &);
    /*216*/ virtual bool drop(class ItemStack const &, bool);
    /*225*/ virtual void startSpinAttack();
    /*226*/ virtual void stopSpinAttack();
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*233*/ virtual void die(class ActorDamageSource const &);
    /*238*/ virtual void __unk_vfn_238();
    /*240*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*242*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*243*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*246*/ virtual void __unk_vfn_246();
    /*256*/ virtual void _onSizeUpdated();
    /*257*/ virtual void __unk_vfn_257();
    /*261*/ virtual void setSleeping(bool);
    /*269*/ virtual float getSpeed() const;
    /*270*/ virtual void setSpeed(float);
    /*275*/ virtual void travel(float, float, float);
    /*278*/ virtual void aiStep();
    /*285*/ virtual int getItemUseDuration();
    /*286*/ virtual float getItemUseStartupProgress();
    /*287*/ virtual float getItemUseIntervalProgress();
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*316*/ virtual std::vector<class ItemStack const *> getAllHand() const;
    /*317*/ virtual std::vector<class ItemStack const *> getAllEquipment() const;
    /*319*/ virtual void dropEquipment(class ActorDamageSource const &, int);
    /*320*/ virtual void dropEquipment();
    /*321*/ virtual void clearVanishEnchantedItems();
    /*322*/ virtual void sendInventory(bool);
    /*331*/ virtual bool canExistWhenDisallowMob() const;
    /*332*/ virtual void __unk_vfn_332();
    /*336*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
    /*337*/ virtual void jumpFromGround();
    /*338*/ virtual void updateAi();
    /*347*/ virtual void updateGliding();
    /*348*/ virtual void __unk_vfn_348();
    /*349*/ virtual void prepareRegion(class ChunkSource &);
    /*350*/ virtual void destroyRegion();
    /*351*/ virtual void suspendRegion();
    /*352*/ virtual void _fireWillChangeDimension();
    /*353*/ virtual void _fireDimensionChanged();
    /*354*/ virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /*355*/ virtual int tickWorld(struct Tick const &);
    /*356*/ virtual void __unk_vfn_356() = 0;
    /*357*/ virtual std::vector<class ChunkPos> const & getTickingOffsets() const;
    /*358*/ virtual void moveView();
    /*359*/ virtual void setName(std::string const &);
    /*360*/ virtual void checkMovementStats(class Vec3 const &);
    /*361*/ virtual void __unk_vfn_361();
    /*362*/ virtual void __unk_vfn_362();
    /*363*/ virtual void respawn();
    /*364*/ virtual void __unk_vfn_364();
    /*365*/ virtual void resetPos(bool);
    /*366*/ virtual void __unk_vfn_366();
    /*367*/ virtual bool hasResource(int);
    /*368*/ virtual void completeUsingItem();
    /*369*/ virtual void setPermissions(enum CommandPermissionLevel);
    /*370*/ virtual void startDestroying();
    /*371*/ virtual void stopDestroying();
    /*372*/ virtual void __unk_vfn_372();
    /*373*/ virtual void __unk_vfn_373();
    /*374*/ virtual void openTrading(struct ActorUniqueID const &, bool);
    /*375*/ virtual bool canOpenContainerScreen();
    /*376*/ virtual void __unk_vfn_376();
    /*377*/ virtual void __unk_vfn_377();
    /*378*/ virtual void openInventory();
    /*379*/ virtual void __unk_vfn_379();
    /*380*/ virtual void __unk_vfn_380();
    /*381*/ virtual void displayTextObjectMessage(class TextObjectRoot const &);
    /*382*/ virtual void displayTextObjectWhisperMessage(class TextObjectRoot const &, std::string const &, std::string const &);
    /*383*/ virtual void displayWhisperMessage(std::string const &, std::string const &, std::string const &, std::string const &);
    /*384*/ virtual enum BedSleepingResult startSleepInBed(class BlockPos const &);
    /*385*/ virtual void stopSleepInBed(bool, bool);
    /*386*/ virtual bool canStartSleepInBed();
    /*387*/ virtual int getSleepTimer() const;
    /*388*/ virtual int getPreviousTickSleepTimer() const;
    /*389*/ virtual void __unk_vfn_389();
    /*390*/ virtual void __unk_vfn_390();
    /*391*/ virtual void __unk_vfn_391();
    /*392*/ virtual bool isHostingPlayer() const;
    /*393*/ virtual bool isLoading() const;
    /*394*/ virtual bool isPlayerInitialized() const;
    /*395*/ virtual void __unk_vfn_395();
    /*396*/ virtual void registerTrackedBoss(struct ActorUniqueID);
    /*397*/ virtual void unRegisterTrackedBoss(struct ActorUniqueID);
    /*398*/ virtual void setPlayerGameType(enum GameType);
    /*399*/ virtual void _crit(class Actor &);
    /*400*/ virtual class IMinecraftEventing * getEventing() const;
    /*401*/ virtual void __unk_vfn_401();
    /*402*/ virtual void sendEventPacket(class EventPacket &) const;
    /*403*/ virtual void addExperience(int);
    /*404*/ virtual void addLevels(int);
    /*405*/ virtual void setContainerData(class IContainerManager &, int, int) = 0;
    /*406*/ virtual void slotChanged(class IContainerManager &, class Container &, int, class ItemStack const &, class ItemStack const &, bool) = 0;
    /*407*/ virtual void inventoryChanged(class Container &, int, class ItemStack const &, class ItemStack const &, bool);
    /*408*/ virtual void refreshContainer(class IContainerManager &) = 0;
    /*409*/ virtual void deleteContainerManager();
    /*410*/ virtual void setFieldOfViewModifier(float);
    /*411*/ virtual bool isPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const &);
    /*412*/ virtual bool isEntityRelevant(class Actor const &);
    /*413*/ virtual bool isTeacher() const = 0;
    /*414*/ virtual void onSuspension();
    /*415*/ virtual void onLinkedSlotsChanged();
    /*416*/ virtual void startCooldown(class Item const *);
    /*417*/ virtual int getItemCooldownLeft(enum CooldownType) const;
    /*418*/ virtual bool isItemInCooldown(enum CooldownType) const;
    /*419*/ virtual void sendInventoryTransaction(class InventoryTransaction const &) const = 0;
    /*420*/ virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const = 0;
//    /*421*/ virtual void sendNetworkPacket(class Packet &) const;
    /*422*/ virtual class PlayerEventCoordinator & getPlayerEventCoordinator() = 0;
    /*423*/ virtual class MoveInputHandler * getMoveInputHandler() = 0;
    /*424*/ virtual enum InputMode getInputMode() const = 0;
    /*425*/ virtual enum ClientPlayMode getPlayMode() const = 0;
    /*426*/ virtual void reportMovementTelemetry(enum MovementEventType);
    /*427*/ virtual void onMovePlayerPacketNormal(class Vec3 const &, class Vec2 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYER
    MCVAPI void displayChatMessage(std::string const &, std::string const &);
    MCVAPI void displayClientMessage(std::string const &);
    MCVAPI bool getAlwaysShowNameTag() const;
    MCVAPI enum StructureFeatureType getCurrentStructureFeature() const;
    MCVAPI unsigned int getUserId() const;
    MCVAPI bool isAutoJumpEnabled() const;
    MCVAPI bool isCreativeModeAllowed();
    MCVAPI bool isInTrialMode();
    MCVAPI bool isLocalPlayer() const;
    MCVAPI bool isShootable();
    MCVAPI void openBook(int, bool, int, class BlockActor *);
    MCVAPI void openChalkboard(class ChalkboardBlockActor &, bool);
    MCVAPI void openNpcInteractScreen(class Actor &);
    MCVAPI void openPortfolio();
    MCVAPI void openSign(class BlockPos const &);
    MCVAPI void playEmote(std::string const &);
    MCVAPI void resetRot();
    MCVAPI void stopLoading();
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Player(class Level &, class PacketSender &, enum GameType, class NetworkIdentifier const &, unsigned char, class mce::UUID, std::string const &, std::unique_ptr<class Certificate>, std::string const &, std::string const &);
    MCAPI bool canBeSeenOnMap() const;
    MCAPI bool canDestroy(class Block const &) const;
    MCAPI bool canUseAbility(enum AbilitiesIndex) const;
    MCAPI bool canUseOperatorBlocks() const;
    MCAPI void causeFoodExhaustion(float);
    MCAPI bool checkNeedAutoJump(float, float);
    MCAPI void eat(int, float);
    MCAPI void fireDimensionChangedEvent(class AutomaticID<class Dimension, int>);
    MCAPI class Agent * getAgent() const;
    MCAPI class ItemStack const & getCurrentActiveShield() const;
    MCAPI float getDestroyProgress(class Block const &) const;
    MCAPI float getDestroySpeed(class Block const &) const;
    MCAPI int getDirection() const;
    MCAPI class EnderChestContainer * getEnderChestContainer();
    MCAPI class AutomaticID<class Dimension, int> getExpectedSpawnDimensionId() const;
    MCAPI class BlockPos const & getExpectedSpawnPosition() const;
    MCAPI class ItemStack const & getSelectedItem() const;
    MCAPI class PlayerInventory & getSupplies();
    MCAPI int getXpNeededForNextLevel() const;
    MCAPI void handleJumpEffects();
    MCAPI bool isForcedRespawn() const;
    MCAPI bool isHiddenFrom(class Mob &) const;
    MCAPI bool isInCreativeMode() const;
    MCAPI bool isInRaid() const;
    MCAPI bool isSurvival() const;
    MCAPI void moveSpawnView(class Vec3 const &, class AutomaticID<class Dimension, int>);
    MCAPI void recheckSpawnPosition();
    MCAPI void releaseUsingItem();
    MCAPI void resetPlayerLevel();
    MCAPI void setAgent(class Agent *);
    MCAPI void setBedRespawnPosition(class BlockPos const &);
    MCAPI void setContainerManager(class std::shared_ptr<class IContainerManager>);
    MCAPI void setPlayerUIItem(enum PlayerUISlot, class ItemStack const &);
    MCAPI void setRespawnPosition(class BlockPos const &, class AutomaticID<class Dimension, int>);
    MCAPI void setRespawnPositionCandidate();
    MCAPI void setSelectedItem(class ItemStack const &);
    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const &, class AutomaticID<class Dimension, int>);
    MCAPI void startUsingItem(class ItemStack const &, int);
    MCAPI void stopGliding();
    MCAPI void stopUsingItem();
    MCAPI bool take(class Actor &, int, int);
    MCAPI void updateInventoryTransactions();
    MCAPI void updateSkin(class SerializedSkin const &, int);
    MCAPI void updateSpawnChunkView();
    MCAPI void updateTrackedBosses();
    MCAPI void useSelectedItem(enum ItemUseMethod, bool);
    MCAPI static float const DISTANCE_TO_TRANSFORM_EVENT;
    MCAPI static class Attribute const EXHAUSTION;
    MCAPI static class Attribute const EXPERIENCE;
    MCAPI static int const GLIDE_STOP_DELAY;
    MCAPI static class Attribute const HUNGER;
    MCAPI static class Vec3 const INVALID_SPAWN_POS;
    MCAPI static class Attribute const LEVEL;
    MCAPI static float const PLAYER_DOWN_SWIM_SPEED;
    MCAPI static float const PLAYER_SWIMMING_CAMERA_OFFSET;
    MCAPI static float const PLAYER_SWIM_FLY_MULTI;
    MCAPI static float const PLAYER_UP_SWIM_SPEED;
    MCAPI static class Attribute const SATURATION;
    MCAPI static bool checkAndFixSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, class AABB, bool, bool, bool, bool, bool, bool, short);

//protected:
    MCAPI bool _checkAndFixSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, bool, bool, bool, bool, bool) const;
    MCAPI void _chooseSpawnArea();
    MCAPI bool _chooseSpawnPositionWithinArea();
    MCAPI class std::optional<class BlockPos> _findValidPosWithVerticalSpace(class BlockPos);
    MCAPI void _preSpawnBuildSpawnDataCache();
    MCAPI void _registerPlayerAttributes();
    MCAPI void _updateInteraction();
    MCAPI bool _validateSpawnPositionAvailability(class Vec3 const &, class BlockSource *, class Vec3 const *const) const;
    MCAPI bool checkBed(class BlockSource *, class Vec3 const *const);
    MCAPI bool checkSpawnBlock(class BlockSource const &) const;
    MCAPI static bool _isDangerousSpawn(class BlockSource &, class AABB const &);

//private:
    MCAPI void _addLevels(int);
    MCAPI bool _blockUsingShield(class ActorDamageSource const &, float);
    MCAPI void _ensureSafeSpawnPosition(class Vec3 &);
    MCAPI bool _findFallbackSpawnPosition(class Vec3 &, std::vector<class gsl::not_null<class BlockSource *>>, unsigned int);
    MCAPI void _handleCarriedItemInteractText();
    MCAPI bool _isChunkSourceLoaded(class Vec3 const &, class BlockSource const &) const;
    MCAPI void _registerElytraLoopSound();
    MCAPI void _sendShieldUpdatePacket(class ShieldItem const &, class ItemStack const &, class ItemStack const &, enum ContainerID, int);

protected:

private:

};