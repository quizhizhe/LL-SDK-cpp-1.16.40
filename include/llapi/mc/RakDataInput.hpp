// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BytesDataInput.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RakDataInput : public BytesDataInput {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKDATAINPUT
public:
    class RakDataInput& operator=(class RakDataInput const &) = delete;
    RakDataInput(class RakDataInput const &) = delete;
    RakDataInput() = delete;
#endif

public:
    /*0*/ virtual ~RakDataInput();
    /*1*/ virtual std::string readString();
    /*2*/ virtual std::string readLongString();
    /*3*/ virtual float readFloat();
    /*4*/ virtual double readDouble();
    /*5*/ virtual char readByte();
    /*6*/ virtual short readShort();
    /*7*/ virtual int readInt();
    /*8*/ virtual __int64 readLongLong();
    /*9*/ virtual bool readBytes(void *, unsigned __int64);
    /*10*/ virtual unsigned __int64 numBytesLeft() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKDATAINPUT
#endif

};