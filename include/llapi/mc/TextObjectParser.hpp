// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TextObjectParser {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTPARSER
public:
    class TextObjectParser& operator=(class TextObjectParser const &) = delete;
    TextObjectParser(class TextObjectParser const &) = delete;
    TextObjectParser() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTOBJECTPARSER
#endif
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_ARRAY;
    MCAPI static std::string const RAW_TEXT_ERROR_NOT_OBJECT;
    MCAPI static std::string const RAW_TEXT_ERROR_NO_DATA;
    MCAPI static std::string const RAW_TEXT_ERROR_PARSE_FAILED;
    MCAPI static std::string const RAW_TEXT_ERROR_TEXT_NOT_STRING;
    MCAPI static std::string const RAW_TEXT_ERROR_TRANSLATE_NOT_STRING;
    MCAPI static std::string const RAW_TEXT_ERROR_WITH_NOT_ARRAY_OR_RAW_TEXT;
    MCAPI static bool textObjectFromJsonString(std::string const &, class TextObjectRoot &, std::string &);

//private:
    MCAPI static bool _getObjectsFromTextObject(class Json::Value const &, class TextObjectRoot &, std::string &);
    MCAPI static bool _textObjectFromJson(class Json::Value const &, class TextObjectRoot &, std::string &);

private:

};