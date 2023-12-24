/**
 * @file gcwikitopictype.meta.h
 * @author VITALISED & Contributors
 * @since 2023-12-24
 * @version v101236
 * @brief This file is autogenerated metadata created by Heridium for ReNMS. You shouldn't need to modify this, see https://github.com/VITALISED/renms.
 *
 * Copyright (C) 2023  VITALISED & Contributors
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or 
 * (at your option) any later version. 
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include <toolkit/data/TkMetaDataClasses.h>

SKYSCRAPER_BEGIN

/**
 * @enum eWikiTopicType
 */
enum eWikiTopicType : uint32_t
{
    EWikiTopicType_Substances = 0,
    EWikiTopicType_CustomSubstanceList = 1,
    EWikiTopicType_Products = 2,
    EWikiTopicType_CustomProductList = 3,
    EWikiTopicType_CustomItemList = 4,
    EWikiTopicType_Technologies = 5,
    EWikiTopicType_CustomTechnologyList = 6,
    EWikiTopicType_BuildableTech = 7,
    EWikiTopicType_Construction = 8,
    EWikiTopicType_TradeCommodities = 9,
    EWikiTopicType_Curiosities = 10,
    EWikiTopicType_Cooking = 11,
    EWikiTopicType_StoneRunes = 12,
    EWikiTopicType_Words = 13,
    EWikiTopicType_RecipesAll = 14,
    EWikiTopicType_RecipesCooker = 15,
    EWikiTopicType_RecipesRefiner1 = 16,
    EWikiTopicType_RecipesRefiner2 = 17,
    EWikiTopicType_RecipesRefiner3 = 18,
    EWikiTopicType_Guide = 19,
    EWikiTopicType_Stories = 20,
    EWikiTopicType_TreasureWonders = 21,
    EWikiTopicType_WeirdBasePartWonders = 22,
    EWikiTopicType_PlanetWonders = 23,
    EWikiTopicType_CreatureWonders = 24,
    EWikiTopicType_FloraWonders = 25,
    EWikiTopicType_MineralWonders = 26,
    EWikiTopicType_CustomWonders = 27,
    EWikiTopicType_DebugSweep = 28,
};

/**
 * @class cGcWikiTopicType
 */
class cGcWikiTopicType
{
  public:
    enum
    {
        ClassNameHash = 0x72439AF10F4C849F,
    };

    inline cGcWikiTopicType() {}
    cGcWikiTopicType* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eWikiTopicType WikiTopicType;
        };
    };
};

SKYSCRAPER_END
