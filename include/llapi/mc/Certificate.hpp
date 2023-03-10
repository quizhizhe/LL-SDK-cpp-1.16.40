// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Certificate {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CERTIFICATE
public:
    class Certificate& operator=(class Certificate const &) = delete;
    Certificate() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CERTIFICATE
#endif
    MCAPI Certificate(class Certificate const &);
    MCAPI __int64 getExpirationDate() const;
    MCAPI class Json::Value getExtraData(std::string const &, class Json::Value const &) const;
    MCAPI std::string getIdentityPublicKey() const;
    MCAPI __int64 getNotBeforeDate() const;
    MCAPI bool isCertificateAuthority() const;
    MCAPI bool validate(__int64);
    MCAPI ~Certificate();

};