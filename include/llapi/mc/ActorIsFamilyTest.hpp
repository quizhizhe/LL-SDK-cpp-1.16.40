// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ActorIsFamilyTest : public FilterTest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISFAMILYTEST
public:
    class ActorIsFamilyTest& operator=(class ActorIsFamilyTest const &) = delete;
    ActorIsFamilyTest(class ActorIsFamilyTest const &) = delete;
    ActorIsFamilyTest() = delete;
#endif

public:
    /*0*/ virtual ~ActorIsFamilyTest();
    /*2*/ virtual bool evaluate(struct FilterContext const &) const;
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORISFAMILYTEST
#endif

};