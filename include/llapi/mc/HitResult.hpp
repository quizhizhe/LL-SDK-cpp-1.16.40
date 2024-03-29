// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

class Actor;
class StackResultStorageEntity;

enum class HitResultType:int {
    TILE = 0,
    ENTITY = 0x1,
    ENTITY_OUT_OF_RANGE = 0x2,
    NO_HIT = 0x3,
};

#undef BEFORE_EXTRA

class HitResult {

#define AFTER_EXTRA
// Add Member There

    Vec3 startPos;       //0
    Vec3 rayDir;         //12
    HitResultType type;  //24
    FaceID face;         //28
    BlockPos endBpos;    //32
    Vec3 endPos;         //44
    uintptr_t actorRef; //56
    bool mIsHitLiquid;  //64
    FaceID liquidFace;   //65
    BlockPos liquidBpos; //68
    Vec3 liquidPos;      //80
    bool indirectHit;    //92
public:
    inline bool isHit() {
        return (unsigned int)(this->type) > 3;
    };
    inline Actor* getEntity() {
        return (Actor*)(this->actorRef);
    };
    LIAPI FaceID getFacing();
    LIAPI Vec3 getPos();
    LIAPI bool isHitLiquid();
    LIAPI bool isEntity();
    LIAPI bool isTile();
    LIAPI BlockPos getBlockPos();
    LIAPI BlockPos getLiquidPos();
    LIAPI FaceID getLiquidFacing();
    //LIAPI Vec3 getLiquidHitPos();
    LIAPI HitResultType getHitResultType();

#undef AFTER_EXTRA
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HITRESULT
#endif
    MCAPI HitResult(class HitResult const &);
    MCAPI HitResult();
    MCAPI class HitResult & operator=(class HitResult &&);
    MCAPI class HitResult & operator=(class HitResult const &);

};