// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "StructureSettings.hpp"
#include "StructureTemplateData.hpp"
#undef BEFORE_EXTRA

class StructureTemplate {

#define AFTER_EXTRA
 //Add Member There
     string mName;
     StructureTemplateData mStructureTemplateData;

     public:
 #define DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATE
     class StructureTemplate& operator=(class StructureTemplate const&) = delete;
     StructureTemplate(class StructureTemplate const&);
     StructureTemplate() = delete;
     LIAPI static StructureTemplate fromTag(std::string name, CompoundTag const& tag);
     LIAPI static StructureTemplate fromWorld(std::string name, int dimid, BlockPos p1, BlockPos p2, bool ignoreEntities = true, bool ignoreBlocks = false);
     //LIAPI bool load(CompoundTag const& tag);
     LIAPI std::unique_ptr<CompoundTag> toTag();
     LIAPI bool toWorld(int dimid, BlockPos const& p1, Mirror mirror = Mirror::None_15, Rotation rotation = Rotation::None_14);
     LIAPI StructureTemplateData* getData();

     inline bool load(class CompoundTag const & a0){
         return mStructureTemplateData.load(a0);
     };

     inline std::unique_ptr<class CompoundTag> save() const{
         return mStructureTemplateData.save();
     };

     inline std::string const & getName() const{
         return this->mName;
     };
     inline BlockPos const & getSize() const{
         return mStructureTemplateData.getSize();
     };

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATE
public:
    class StructureTemplate& operator=(class StructureTemplate const &) = delete;
    StructureTemplate(class StructureTemplate const &) = delete;
    StructureTemplate() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURETEMPLATE
#endif
    MCAPI StructureTemplate(class gsl::basic_string_span<char const, -1>);
    MCAPI void fillFromWorld(class BlockSource &, class BlockPos const &, class StructureSettings const &);
    MCAPI class Block const & getBlockAtPos(class BlockPos const &) const;
    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const;
    MCAPI bool placeInWorld(class BlockSource &, class BlockPalette const &, class BlockPos const &, class StructureSettings const &, class StructureTelemetryServerData *, bool) const;
    MCAPI ~StructureTemplate();

//private:
    MCAPI void _fillBlockInfo(class BlockSource &, class BlockPos const &, class BlockPos const &, class BlockPos const &);
    MCAPI void _fillEntityList(class BlockSource &, class BlockPos const &, class BlockPos const &);
    MCAPI void _placeBlocksInWorld(class BlockSource &, class DataLoadHelper &, class StructureBlockPalette const &, class BlockPalette const &, class BlockPos, class BlockPos const &, class Vec3 const &, enum Rotation, enum Mirror, float, unsigned int, class StructureTelemetryServerData *, bool, bool) const;
    MCAPI void _placeEntitiesInWorld(class BlockSource &, class DataLoadHelper &, bool) const;

private:

};