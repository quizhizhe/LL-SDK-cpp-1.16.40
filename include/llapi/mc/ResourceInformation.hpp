// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ResourceInformation {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEINFORMATION
public:
    class ResourceInformation& operator=(class ResourceInformation const &) = delete;
    ResourceInformation() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEINFORMATION
#endif
    MCAPI ResourceInformation(class ResourceInformation const &);
    MCAPI ~ResourceInformation();
    MCAPI static std::string const & StringFromResourceType(enum ResourceInformation::ResourceType);

};