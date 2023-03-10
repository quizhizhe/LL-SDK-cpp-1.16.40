// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BaseAttributeMap {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEATTRIBUTEMAP
public:
    class BaseAttributeMap& operator=(class BaseAttributeMap const &) = delete;
    BaseAttributeMap(class BaseAttributeMap const &) = delete;
    BaseAttributeMap() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEATTRIBUTEMAP
#endif
    MCAPI class AttributeInstance const & getInstance(unsigned int) const;
    MCAPI class AttributeInstance * getMutableInstance(unsigned int);
    MCAPI class AttributeInstance & registerAttribute(class Attribute const &);

//private:

private:
    MCAPI static class AttributeInstance mInvalidInstance;

};