// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StructureEditorData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREEDITORDATA
public:
    class StructureEditorData& operator=(class StructureEditorData const &) = delete;
    StructureEditorData(class StructureEditorData const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREEDITORDATA
#endif
    MCAPI StructureEditorData(class StructureEditorData &&);
    MCAPI StructureEditorData();
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    MCAPI void save(class CompoundTag &) const;
    MCAPI ~StructureEditorData();
    MCAPI static std::string const DEFAULT_STRUCTURE_NAMESPACE;
    MCAPI static class BlockPos const MAX_STRUCTURE_OFFSET;
    MCAPI static class BlockPos const MAX_STRUCTURE_SIZE;
    MCAPI static class BlockPos const MIN_STRUCTURE_OFFSET;
    MCAPI static class BlockPos const MIN_STRUCTURE_SIZE;

};