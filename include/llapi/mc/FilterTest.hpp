// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FilterTest {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTEST
public:
    class FilterTest& operator=(class FilterTest const &) = delete;
    FilterTest(class FilterTest const &) = delete;
    FilterTest() = delete;
#endif

public:
    /*0*/ virtual ~FilterTest();
    /*1*/ virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /*2*/ virtual bool evaluate(struct FilterContext const &) const = 0;
    /*3*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider &);
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const = 0;
    /*5*/ virtual class Json::Value _serializeDomain() const;
    /*6*/ virtual class Json::Value _serializeValue() const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILTERTEST
#endif
    MCAPI class Json::Value serialize() const;

//protected:
    MCAPI bool _testValuesWithOperator(bool, bool) const;
    MCAPI bool _testValuesWithOperator(int, int) const;
    MCAPI bool _testValuesWithOperator(float, float) const;

protected:

};