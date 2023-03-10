// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MineshaftRoom : public StructurePiece {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTROOM
public:
    class MineshaftRoom& operator=(class MineshaftRoom const &) = delete;
    MineshaftRoom(class MineshaftRoom const &) = delete;
    MineshaftRoom() = delete;
#endif

public:
    /*0*/ virtual ~MineshaftRoom();
    /*1*/ virtual void moveBoundingBox(int, int, int);
    /*3*/ virtual enum StructurePieceType getType() const;
    /*4*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*5*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINESHAFTROOM
#endif

};