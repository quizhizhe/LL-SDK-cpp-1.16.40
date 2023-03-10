// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SerializedSkin {

#define AFTER_EXTRA

#undef AFTER_EXTRA
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERIALIZEDSKIN
#endif
    MCAPI SerializedSkin();
    MCAPI SerializedSkin(class ConnectionRequest const &);
    MCAPI SerializedSkin(class SubClientConnectionRequest const &);
    MCAPI SerializedSkin(class SerializedSkin const &);
    MCAPI class SerializedSkin & operator=(class SerializedSkin const &);
    MCAPI bool read(class ReadOnlyBinaryStream &);
    MCAPI void updateGeometryName();
    MCAPI void write(class BinaryStream &) const;
    MCAPI ~SerializedSkin();

};