// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AttributeBuff {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEBUFF
public:
    class AttributeBuff& operator=(class AttributeBuff const &) = delete;
    AttributeBuff() = delete;
#endif

public:
    /*0*/ virtual ~AttributeBuff();
    /*1*/ virtual bool isInstantaneous() const = 0;
    /*2*/ virtual bool isSerializable() const = 0;
    /*3*/ virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTRIBUTEBUFF
#endif
    MCAPI AttributeBuff(class AttributeBuff const &);
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>);

};