// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ChestBlockActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHESTBLOCKACTOR
public:
    class ChestBlockActor& operator=(class ChestBlockActor const &) = delete;
    ChestBlockActor(class ChestBlockActor const &) = delete;
    ChestBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHESTBLOCKACTOR
    MCVAPI bool _canOpenThis(class BlockSource &) const;
    MCVAPI bool _detectEntityObstruction(class BlockSource &) const;
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    MCVAPI void addContentChangeListener(class ContainerContentChangeListener *);
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    MCVAPI void clearCache();
    MCVAPI int clearInventory(int);
    MCVAPI class Container * getContainer();
    MCVAPI class Container const * getContainer() const;
    MCVAPI int getContainerSize() const;
    MCVAPI class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    MCVAPI void getDebugText(std::vector<std::string> &, class BlockPos const &);
    MCVAPI class ItemStack const & getItem(int) const;
    MCVAPI int getMaxStackSize() const;
    MCVAPI std::string getName() const;
    MCVAPI class AABB getObstructionAABB() const;
    MCVAPI void initializeContainerContents(class BlockSource &);
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    MCVAPI void loadItems(class CompoundTag const &, class Level &);
    MCVAPI void onChanged(class BlockSource &);
    MCVAPI void onMove();
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
    MCVAPI void onPlace(class BlockSource &);
    MCVAPI void onRemoved(class BlockSource &);
    MCVAPI void playCloseSound(class BlockSource &);
    MCVAPI void playOpenSound(class BlockSource &);
    MCVAPI void removeContentChangeListener(class ContainerContentChangeListener *);
    MCVAPI bool save(class CompoundTag &) const;
    MCVAPI bool saveItemInstanceData(class CompoundTag &);
    MCVAPI bool saveItems(class CompoundTag &) const;
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    MCVAPI void setContainerChanged(int);
    MCVAPI void setItem(int, class ItemStack const &);
    MCVAPI void startOpen(class Player &);
    MCVAPI void stopOpen(class Player &);
    MCVAPI void tick(class BlockSource &);
    MCVAPI void triggerEvent(int, int);
#endif
    MCAPI ChestBlockActor(enum BlockActorType, std::string const &, enum BlockActorRendererId, class BlockPos const &, bool);
    MCAPI bool canPairWith(class BlockActor *, class BlockSource &);
    MCAPI void forceCloseChest(class BlockSource &);
    MCAPI void pairWith(class ChestBlockActor *, bool);
    MCAPI void unpair(class BlockSource &);

//private:
    MCAPI void _closeChest(class BlockSource &, class Player *);
    MCAPI bool _detectBlockObstruction(class BlockSource &) const;
    MCAPI bool _saveClientSideState(class CompoundTag &) const;
    MCAPI void _unpair();

private:

};