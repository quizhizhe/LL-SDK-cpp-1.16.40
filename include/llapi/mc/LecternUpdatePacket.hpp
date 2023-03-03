// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LecternUpdatePacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LECTERNUPDATEPACKET
public:
    class LecternUpdatePacket& operator=(class LecternUpdatePacket const &) = delete;
    LecternUpdatePacket(class LecternUpdatePacket const &) = delete;
#endif

public:
    /*0*/ virtual ~LecternUpdatePacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum StreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LECTERNUPDATEPACKET
#endif
    MCAPI LecternUpdatePacket();

};