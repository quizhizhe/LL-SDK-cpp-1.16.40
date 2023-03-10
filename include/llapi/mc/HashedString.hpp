// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HashedString {

#define AFTER_EXTRA
public:
    unsigned __int64 mStrHash;
    std::string mStr;
//    const HashedString* mLastMatch;
    inline std::string const & getString()const{
//        return dAccess<std::string>(this, 8);
        return mStr;
    };

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HASHEDSTRING
public:
    class HashedString& operator=(class HashedString const &) = delete;
    HashedString() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HASHEDSTRING
#endif
    MCAPI HashedString(class HashedString const &);
    MCAPI HashedString(class HashedString &&);
    MCAPI HashedString(char const *);
    MCAPI HashedString(std::string const &);
    MCAPI class HashedString & operator=(class HashedString &&);
    MCAPI bool operator==(class HashedString const &) const;
    MCAPI ~HashedString();
    MCAPI static unsigned __int64 computeHash(char const *);
    MCAPI static class HashedString defaultErrorValue;
    MCAPI static class HashedString const & getEmptyString();

};