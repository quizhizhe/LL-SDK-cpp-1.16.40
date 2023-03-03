// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CompositePackSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOSITEPACKSOURCE
public:
    class CompositePackSource& operator=(class CompositePackSource const &) = delete;
    CompositePackSource(class CompositePackSource const &) = delete;
    CompositePackSource() = delete;
#endif

public:
    /*0*/ virtual ~CompositePackSource();
    /*1*/ virtual void forEachPackConst(class std::function<void (class Pack const &)>) const;
    /*2*/ virtual void forEachPack(class std::function<void (class Pack &)>);
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual class PackSourceReport load(class PackManifestFactory &, class IContentKeyProvider const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOSITEPACKSOURCE
#endif
    MCAPI void addPackSource(class PackSource *);

};