// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SubClientLoginPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCLIENTLOGINPACKET
public:
    class SubClientLoginPacket& operator=(class SubClientLoginPacket const &) = delete;
    SubClientLoginPacket(class SubClientLoginPacket const &) = delete;
    SubClientLoginPacket() = delete;
#endif

public:
    /*0*/ virtual ~SubClientLoginPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum StreamReadResult read(class ReadOnlyBinaryStream &);
    /*6*/ virtual bool disallowBatching() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SUBCLIENTLOGINPACKET
#endif

};