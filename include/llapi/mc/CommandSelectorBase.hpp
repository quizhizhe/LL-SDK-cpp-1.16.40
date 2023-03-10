// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ActorDefinitionIdentifier.hpp"
#include "CommandPosition.hpp"
#include <functional>
class CommandOrigin;
class Actor;
class Player;

#undef BEFORE_EXTRA

class CommandSelectorBase {

#define AFTER_EXTRA
// Add Member There
private:
uint32_t version;
uint32_t type;
uint32_t order;
std::vector<InvertableFilter<std::string>> nameFilters;
char pad_0040[24];
std::vector<InvertableFilter<ActorDefinitionIdentifier>> familyFilters;
std::vector<InvertableFilter<std::string>> tagFilters;
std::vector<std::function<bool(CommandOrigin const&, Actor const&)>> customFilters;
CommandPosition position;
BlockPos box;
float radiusMin;
float radiusMax;
uint64_t resultCount;
bool includeDeadPlayers;
char pad_0185[5];
bool playerOnly;
char explicitIdSelector;
char unk192;
    
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDSELECTORBASE
public:
    class CommandSelectorBase& operator=(class CommandSelectorBase const &) = delete;
    CommandSelectorBase(class CommandSelectorBase const &) = delete;
    CommandSelectorBase() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDSELECTORBASE
#endif
    MCAPI void addFilter(class std::function<bool (class CommandOrigin const &, class Actor const &)>);
    MCAPI void addTypeFilter(struct InvertableFilter<std::string> const &);
    MCAPI bool compile(class CommandOrigin const &, std::string &);
    MCAPI void setBox(class BlockPos);
    MCAPI void setPosition(class CommandPosition const &);
    MCAPI void setRadiusMax(float);
    MCAPI void setRadiusMin(float);
    MCAPI ~CommandSelectorBase();

//protected:
    MCAPI CommandSelectorBase(bool);
    MCAPI class std::shared_ptr<std::vector<class Actor *>> newResults(class CommandOrigin const &) const;

//private:
    MCAPI bool filter(class CommandOrigin const &, class Actor &, float) const;
    MCAPI bool matchName(class Actor const &) const;
    MCAPI bool matchTag(class Actor const &) const;
    MCAPI bool matchType(class Actor const &) const;

protected:

private:

};
