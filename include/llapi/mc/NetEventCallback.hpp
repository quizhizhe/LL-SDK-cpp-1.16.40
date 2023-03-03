// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NetEventCallback {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETEVENTCALLBACK
public:
    class NetEventCallback& operator=(class NetEventCallback const &) = delete;
    NetEventCallback(class NetEventCallback const &) = delete;
    NetEventCallback() = delete;
#endif

public:
    /*0*/ virtual void __unk_vfn_0();
    /*1*/ virtual ~NetEventCallback();
    /*2*/ virtual void __unk_vfn_2() = 0;
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual class GameSpecificNetEventCallback * getGameSpecificNetEventCallback();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETEVENTCALLBACK
    MCVAPI void handle(class NetworkIdentifier const &, class ActorFallPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ShowProfilePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class MobEquipmentPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class MapInfoRequestPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class AddPaintingPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class GameRulesChangedPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class StopSoundPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ChunkRadiusUpdatedPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class BookEditPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerClosePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class MoveActorDeltaPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateSoftEnumPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class CodeBuilderPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetScoreboardIdentityPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class RequestChunkRadiusPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PlaySoundPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkChunkPublisherUpdatePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetLocalPlayerAsInitializedPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetTimePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class BookAddPagePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SimpleEventPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class EducationSettingsPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class EmoteListPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class AddItemActorPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ModalFormResponsePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PlayStatusPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class CommandRequestPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerArmorDamagePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PhotoTransferPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetDifficultyPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class DisconnectPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class LevelEventPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerOpenPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheBlobStatusPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateAttributesPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class BossEventPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryTransactionPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ServerSettingsRequestPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class CraftingDataPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackStackPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class AddMobPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryContentPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerHotbarPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateTradePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class StructureTemplateDataResponsePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveObjectivePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class EmotePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerEnchantOptionsPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class UpdatePlayerGameTypePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class BookSignPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ItemFrameDropItemPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class AddPlayerPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class AddEntityPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkSettingsPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackChunkRequestPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class CreativeContentPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PacketViolationWarningPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ItemStackResponsePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetActorMotionPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ContainerSetDataPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class GuiDataPickItemPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetTitlePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class AddActorPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SpawnParticleEffectPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerSkinPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetDisplayObjectivePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveActorPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class LabTablePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ClientCacheStatusPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class EventPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetCommandsEnabledPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ClientboundMapItemDataPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class NpcRequestPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PositionTrackingDBServerBroadcastPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetDefaultGameTypePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ShowCreditsPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class LecternUpdatePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class BlockPickRequestPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class LevelEventGenericPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class BookSwapPagesPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class MultiplayerSettingsPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ActorPickRequestPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class MovePlayerPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ItemStackRequestPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateEquipPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class CommandBlockUpdatePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class MobEffectPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class InteractPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackDataInfoPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class BookDeletePagePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class AnimatePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class StartGamePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class CameraPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ClientToServerHandshakePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ServerToClientHandshakePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class AvailableActorIdentifiersPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class AdventureSettingsPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetScorePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class HurtArmorPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class NetworkStackLatencyPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SubClientLoginPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerInputPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class StructureTemplateDataRequestPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV1 const &);
    MCVAPI void handle(class NetworkIdentifier const &, class LevelSoundEventPacketV2 const &);
    MCVAPI void handle(class NetworkIdentifier const &, class StructureBlockUpdatePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetPlayerGameTypePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class DebugInfoPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class MoveActorAbsolutePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class AddBehaviorTreePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class InventoryActionPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class BiomeDefinitionListPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class LoginPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class CompletedUsingItemPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PurchaseReceiptPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerListPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class MobArmorEquipmentPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetLastHurtByPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PositionTrackingDBClientRequestPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class TransferPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePacksInfoPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class TickSyncPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetSpawnPositionPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class AutomationClientConnectPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ShowStoreOfferPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class RiderJumpPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetActorDataPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class BlockEventPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class TakeItemActorPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ActorEventPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerAuthInputPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ServerSettingsResponsePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SettingsCommandPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SpawnExperienceOrbPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ChangeDimensionPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class InventorySlotPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class RespawnPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class AvailableCommandsPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetHealthPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class UpdateBlockPropertiesPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class AnvilDamagePacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ResourcePackChunkDataPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class CraftingEventPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ModalFormRequestPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class PlayerActionPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class RemoveEntityPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class CommandOutputPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class MapCreateLockedCopyPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class OnScreenTextureAnimationPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class ScriptCustomEventPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class SetActorLinkPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class TextPacket const &);
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class BlockActorDataPacket>);
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class LevelChunkPacket>);
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class ClientCacheMissResponsePacket>);
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class UpdateBlockPacket>);
    MCVAPI void handle(class NetworkIdentifier const &, class std::shared_ptr<class UpdateBlockSyncedPacket>);
    MCVAPI void onConnect(class NetworkIdentifier const &);
    MCVAPI void onDisconnect(class NetworkIdentifier const &, std::string const &, bool, std::string const &);
    MCVAPI void onPlayerReady(class Player &);
    MCVAPI void onStoreOfferReceive(bool, std::string const &);
    MCVAPI void onTick();
    MCVAPI void onTransferRequest(class NetworkIdentifier const &, std::string const &, int);
    MCVAPI void onUnableToConnect();
    MCVAPI void sendPacketViolationDetectedTelemetryData(struct ExtendedStreamReadResult const &, enum PacketViolationResponse, enum MinecraftPacketIds, class NetworkIdentifier const &);
#endif

};