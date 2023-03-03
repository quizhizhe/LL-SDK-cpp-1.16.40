// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SetPlayerGameTypePacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETPLAYERGAMETYPEPACKET
public:
    class SetPlayerGameTypePacket& operator=(class SetPlayerGameTypePacket const &) = delete;
    SetPlayerGameTypePacket(class SetPlayerGameTypePacket const &) = delete;
    SetPlayerGameTypePacket() = delete;
#endif

public:
    /*0*/ virtual ~SetPlayerGameTypePacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum StreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETPLAYERGAMETYPEPACKET
#endif

};