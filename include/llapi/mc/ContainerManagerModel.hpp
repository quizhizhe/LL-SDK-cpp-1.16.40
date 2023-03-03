// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ContainerManagerModel {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERMANAGERMODEL
public:
    class ContainerManagerModel& operator=(class ContainerManagerModel const &) = delete;
    ContainerManagerModel(class ContainerManagerModel const &) = delete;
    ContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~ContainerManagerModel();
    /*1*/ virtual enum ContainerID getContainerId() const;
    /*2*/ virtual void setContainerId(enum ContainerID);
    /*3*/ virtual enum ContainerType getContainerType() const;
    /*4*/ virtual void setContainerType(enum ContainerType);
    /*5*/ virtual void serverInitItemStackIds();
    /*6*/ virtual std::vector<class ItemStack> getItemCopies() const = 0;
    /*7*/ virtual void setSlot(int, class ItemStack const &, bool) = 0;
    /*8*/ virtual class ItemStack const & getSlot(int) const = 0;
    /*9*/ virtual void setData(int, int) = 0;
    /*10*/ virtual void broadcastChanges() = 0;
    /*11*/ virtual bool isValid(float);
    /*12*/ virtual class ContainerScreenContext _postInit() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERMANAGERMODEL
#endif
    MCAPI ContainerManagerModel(enum ContainerID, class Player &);
    MCAPI void postInit();

//protected:
    MCAPI void _addContainer(class std::shared_ptr<class ContainerModel>);
    MCAPI class std::shared_ptr<class ContainerModel> _getContainer(enum ContainerEnumName) const;
    MCAPI bool _isPlayerInRangeOfPosition(class BlockPos const &, float) const;

protected:

};