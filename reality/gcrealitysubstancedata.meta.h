/**
 * @file gcrealitysubstancedata.meta.h
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
#include <toolkit/tktextureresource.meta.h>
#include <toolkit/tkmodelresource.meta.h>
#include <reality/gcrealitysubstancecategory.meta.h>
#include <reality/gcrarity.meta.h>
#include <reality/gclegality.meta.h>
#include <reality/gcitempricemodifiers.meta.h>
#include <reality/gctradecategory.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcRealitySubstanceData
 */
class cGcRealitySubstanceData
{
  public:
    enum
    {
        ClassNameHash = 0xD811F4C9E014843E,
    };

    inline cGcRealitySubstanceData() {}
    cGcRealitySubstanceData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkFixedString<32,char> macName;
            cTkFixedString<32,char> macNameLower;
            TkID<128> mID;
            cTkFixedString<32,char> macSymbol;
            cTkTextureResource Icon;
            cTkModelResource DebrisFile;
            cTkDynamicString macSubtitle;
            cTkDynamicString macDescription;
            cTkColour mColour;
            cTkColour mWorldColour;
            int miBaseValue;
            cGcRealitySubstanceCategory Category;
            cGcRarity Rarity;
            cGcLegality Legality;
            int miChargeValue;
            int miStackMultiplier;
            cGcItemPriceModifiers Cost;
            float mfNormalisedValueOnWorld;
            float mfNormalisedValueOffWorld;
            cGcTradeCategory TradeCategory;
            bool mbWikiEnabled;
            float mfEconomyInfluenceMultiplier;
            TkID<256> mPinObjective;
            TkID<256> mPinObjectiveTip;
            TkID<128> mWikiMissionID;
            bool mbCookingIngredient;
            bool mbGoodForSelling;
            bool mbEggModifierIngredient;
        };
    };
};

SKYSCRAPER_END
