// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RemoveEntityPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEENTITYPACKET
public:
    class RemoveEntityPacket& operator=(class RemoveEntityPacket const &) = delete;
    RemoveEntityPacket(class RemoveEntityPacket const &) = delete;
    RemoveEntityPacket() = delete;
#endif

public:
    /*0*/ virtual ~RemoveEntityPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOVEENTITYPACKET
#endif

};