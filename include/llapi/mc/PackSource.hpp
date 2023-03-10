// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PackSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSOURCE
public:
    class PackSource& operator=(class PackSource const &) = delete;
    PackSource(class PackSource const &) = delete;
    PackSource() = delete;
#endif

public:
    /*0*/ virtual void __unk_vfn_0() = 0;
    /*1*/ virtual void __unk_vfn_1() = 0;
    /*2*/ virtual void __unk_vfn_2() = 0;
    /*3*/ virtual enum PackOrigin getPackOrigin() const;
    /*4*/ virtual enum PackType getPackType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKSOURCE
    MCVAPI ~PackSource();
#endif
    MCAPI class Pack * fetchPack(struct PackIdVersion const &);
    MCAPI void resolveUpgradeDependencies(class Pack &, class IContentKeyProvider const &);

};