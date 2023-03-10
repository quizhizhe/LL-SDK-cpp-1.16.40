// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FoliageColor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLIAGECOLOR
public:
    class FoliageColor& operator=(class FoliageColor const &) = delete;
    FoliageColor(class FoliageColor const &) = delete;
    FoliageColor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FOLIAGECOLOR
#endif
    MCAPI static int getBirchColor(float, float);
    MCAPI static int getEvergreenColor(float, float);
    MCAPI static int getFoliageColor(float, float);
    MCAPI static int getMapGrassColor(class BlockSource &, class BlockPos const &);

//private:
    MCAPI static int _index(float, float);

private:
    MCAPI static class Color const FOLIAGE_BOTTOM_LEFT;
    MCAPI static class Color const FOLIAGE_BOTTOM_RIGHT;
    MCAPI static class Color const FOLIAGE_TOP_LEFT;
    MCAPI static class Color const FOLIAGE_TOP_RIGHT;
    MCAPI static class Color const GRASS_BOTTOM_LEFT;
    MCAPI static class Color const GRASS_BOTTOM_RIGHT;
    MCAPI static class Color const GRASS_TOP_LEFT;
    MCAPI static class Color const GRASS_TOP_RIGHT;
    MCAPI static class std::unordered_map<std::string, class std::array<int, 65536>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class std::array<int, 65536>>>> mFoliagePalettes;
    MCAPI static class std::unordered_map<std::string, class std::array<int, 65536>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class std::array<int, 65536>>>> mGrassPalettes;

};