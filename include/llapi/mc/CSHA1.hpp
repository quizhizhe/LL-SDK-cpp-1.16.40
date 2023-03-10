// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CSHA1 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CSHA1
public:
    class CSHA1& operator=(class CSHA1 const &) = delete;
    CSHA1(class CSHA1 const &) = delete;
    CSHA1() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CSHA1
#endif
    MCAPI void Final();
    MCAPI void Update(unsigned char const *, unsigned int);
    MCAPI ~CSHA1();

//private:
    MCAPI void Transform(unsigned int *, unsigned char const *);

private:

};