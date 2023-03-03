// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BookEditPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOKEDITPACKET
public:
    class BookEditPacket& operator=(class BookEditPacket const &) = delete;
    BookEditPacket() = delete;
#endif

public:
    /*0*/ virtual ~BookEditPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum StreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOOKEDITPACKET
#endif
    MCAPI BookEditPacket(class BookEditPacket const &);
    MCAPI struct PageContent getPage() const;

//private:
    MCAPI void _readPage(class ReadOnlyBinaryStream &);
    MCAPI void _writePage(class BinaryStream &) const;

private:

};