// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RedstoneTorchCapacitor : public ProducerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REDSTONETORCHCAPACITOR
public:
    class RedstoneTorchCapacitor& operator=(class RedstoneTorchCapacitor const &) = delete;
    RedstoneTorchCapacitor(class RedstoneTorchCapacitor const &) = delete;
    RedstoneTorchCapacitor() = delete;
#endif

public:
    /*0*/ virtual ~RedstoneTorchCapacitor();
    /*1*/ virtual int getStrength() const;
    /*5*/ virtual void __unk_vfn_5();
    /*10*/ virtual unsigned __int64 getInstanceType() const;
    /*11*/ virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /*12*/ virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /*13*/ virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /*15*/ virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /*16*/ virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /*17*/ virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual bool isHalfPulse();
    /*21*/ virtual void __unk_vfn_21();
    /*23*/ virtual unsigned char getPoweroutDirection() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REDSTONETORCHCAPACITOR
#endif

//private:
    MCAPI int FindStrongestStrength(class BlockPos const &, class CircuitSystem &, bool &);

private:

};