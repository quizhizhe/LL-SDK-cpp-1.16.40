// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Parser {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARSER
public:
    class Parser& operator=(class Parser const &) = delete;
    Parser(class Parser const &) = delete;
    Parser() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PARSER
#endif
    MCAPI static void parse(class Json::Value const &, class MobEffectInstance &, char const *);
    MCAPI static void parse(class Json::Value const &, int &, char const *, int);
    MCAPI static void parse(class Json::Value const &, float &, char const *, float);
    MCAPI static void parse(class Json::Value const &, class Vec3 &, char const *, class Vec3 const &);
    MCAPI static void parse(class Json::Value const &, bool &, char const *, bool);
    MCAPI static void parse(class Json::Value const &, enum Difficulty &, char const *, char const *);
    MCAPI static void parse(class Json::Value const &, std::string &, char const *, char const *);
    MCAPI static void parse(class Json::Value const &, enum ActorDamageCause &, char const *, char const *);
    MCAPI static void parse(class Json::Value const &, struct ActorDefinitionIdentifier &, char const *, char const *);
    MCAPI static void parse(class Json::Value const &, enum ActorType &, char const *, char const *);
    MCAPI static void parse(class Json::Value const &, class std::set<class HashedString, struct std::hash<class HashedString>, class std::allocator<class HashedString>> &, char const *);
    MCAPI static void parse(class Json::Value const &, std::vector<struct ActorDefinitionIdentifier> &, char const *, char const *);
    MCAPI static void parse(class Json::Value const &, std::vector<enum LevelSoundEvent> &, char const *, char const *);
    MCAPI static void parse(class Json::Value const &, class Item const *&, char const *, char const *);
    MCAPI static void parse(class Json::Value const &, struct ItemDefinition &, char const *, char const *);
    MCAPI static bool parse(class Json::Value const &, class ItemDescriptor &);
    MCAPI static bool parse(class Json::Value const &, std::vector<class ItemDescriptor> &);
    MCAPI static bool parse(class Json::Value const &, class DefinitionTrigger &, char const *);
    MCAPI static void parse(class Json::Value const &, std::vector<struct SlotDropChance> &, char const *);
    MCAPI static void parse(class Json::Value &, class WeightedChoices<class DefinitionTrigger> &, char const *);
    MCAPI static bool parse(class Json::Value const &, class DefinitionTrigger &, bool);
    MCAPI static bool parse(class Json::Value const &, std::vector<class DefinitionTrigger> &);
    MCAPI static void serialize(class Item const *, class Json::Value &, char const *);
    MCAPI static void serialize(struct ItemDefinition const &, class Json::Value &, char const *);
    MCAPI static void serialize(class DefinitionTrigger const &, class Json::Value &, char const *);
    MCAPI static void serialize(class MobEffectInstance const &, class Json::Value &, char const *);
    MCAPI static void serialize(struct FloatRange const &, class Json::Value &, char const *);
    MCAPI static void serialize(struct IntRange const &, class Json::Value &, char const *);
    MCAPI static void serialize(class Vec3 const &, class Json::Value &, char const *);
    MCAPI static void serialize(enum ParticleType const &, class Json::Value &, char const *);
    MCAPI static void serialize(enum Difficulty const &, class Json::Value &, char const *);
    MCAPI static void serialize(enum ActorDamageCause const &, class Json::Value &, char const *);
    MCAPI static void serialize(struct ActorDefinitionIdentifier const &, class Json::Value &, char const *);
    MCAPI static void serialize(enum ActorType const &, class Json::Value &, char const *);
    MCAPI static void serialize(class std::set<class Item const *, struct std::less<class Item const *>, class std::allocator<class Item const *>> const &, class Json::Value &, char const *);
    MCAPI static void serialize(class std::set<class HashedString, struct std::hash<class HashedString>, class std::allocator<class HashedString>> const &, class Json::Value &, char const *);
    MCAPI static void serialize(std::vector<std::string> const &, class Json::Value &, char const *);
    MCAPI static void serialize(std::vector<struct ActorDefinitionIdentifier> const &, class Json::Value &, char const *);
    MCAPI static void serialize(std::vector<enum LevelSoundEvent> const &, class Json::Value &, char const *);
    MCAPI static void serialize(std::vector<struct SlotDropChance> const &, class Json::Value &, char const *);
    MCAPI static void serialize(std::vector<class ItemInstance> const &, class Json::Value &, char const *);
    MCAPI static void serialize(std::vector<class MobEffectInstance> const &, class Json::Value &, char const *);

};