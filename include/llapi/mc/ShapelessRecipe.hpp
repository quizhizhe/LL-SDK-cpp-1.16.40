// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ShapelessRecipe : public Recipe {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAPELESSRECIPE
public:
    class ShapelessRecipe& operator=(class ShapelessRecipe const &) = delete;
    ShapelessRecipe(class ShapelessRecipe const &) = delete;
    ShapelessRecipe() = delete;
#endif

public:
    /*0*/ virtual ~ShapelessRecipe();
    /*1*/ virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /*2*/ virtual int getCraftingSize() const;
    /*3*/ virtual class RecipeIngredient const & getIngredient(int, int) const;
    /*4*/ virtual std::vector<class ItemInstance> const & getResultItem() const;
    /*5*/ virtual bool isShapeless() const;
    /*6*/ virtual bool matches(class CraftingContainer &, class Level &) const;
    /*7*/ virtual int size() const;
    /*8*/ virtual bool isExperimental() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHAPELESSRECIPE
#endif
    MCAPI ShapelessRecipe(std::string, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString, int, class mce::UUID const *);
    MCAPI ShapelessRecipe(class ShapelessRecipe &&);

};