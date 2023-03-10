// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ConsumerComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PistonConsumer : public ConsumerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PISTONCONSUMER
public:
    class PistonConsumer& operator=(class PistonConsumer const &) = delete;
    PistonConsumer(class PistonConsumer const &) = delete;
    PistonConsumer() = delete;
#endif

public:
    /*0*/ virtual ~PistonConsumer();
    /*5*/ virtual void __unk_vfn_5();
    /*10*/ virtual unsigned __int64 getInstanceType() const;
    /*12*/ virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /*13*/ virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /*18*/ virtual void __unk_vfn_18();
    /*21*/ virtual void __unk_vfn_21();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PISTONCONSUMER
    MCVAPI bool consumePowerAnyDirection();
#endif

};