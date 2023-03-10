// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct BlockFrictionDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKFRICTIONDESCRIPTION
public:
    struct BlockFrictionDescription& operator=(struct BlockFrictionDescription const &) = delete;
    BlockFrictionDescription(struct BlockFrictionDescription const &) = delete;
    BlockFrictionDescription() = delete;
#endif
public:
    /*0*/ virtual ~BlockFrictionDescription();
    /*1*/ virtual std::string const & getName() const;
    /*2*/ virtual void initializeComponent(class BlockLegacy &) const;
    /*3*/ virtual void buildSchema(class JsonUtil::JsonSchemaObjectNode<class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct BlockDefinition>, struct BlockDefinition> &) const;
    /*4*/ virtual bool isNetworkComponent() const;
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class BlockLegacy &, class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKFRICTIONDESCRIPTION
#endif
    MCAPI static std::string const NameID;

};