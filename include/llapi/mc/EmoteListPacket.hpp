// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class EmoteListPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMOTELISTPACKET
public:
    class EmoteListPacket& operator=(class EmoteListPacket const &) = delete;
    EmoteListPacket(class EmoteListPacket const &) = delete;
    EmoteListPacket() = delete;
#endif

public:
    /*0*/ virtual ~EmoteListPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum StreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EMOTELISTPACKET
#endif
    MCAPI static int const MAX_EMOTE_PIECE_IDS;

};