// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BastionStart {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASTIONSTART
public:
    class BastionStart& operator=(class BastionStart const &) = delete;
    BastionStart(class BastionStart const &) = delete;
    BastionStart() = delete;
#endif

public:
    /*0*/ virtual ~BastionStart();
    /*1*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /*2*/ virtual bool isValid() const;
    /*3*/ virtual enum StructureFeatureType getType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASTIONSTART
#endif

};