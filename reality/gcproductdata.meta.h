/**
 * @file gcproductdata.meta.h
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
#include <toolkit/tkmodelresource.meta.h>
#include <toolkit/tktextureresource.meta.h>
#include <reality/gcrealitysubstancecategory.meta.h>
#include <reality/gcproductcategory.meta.h>
#include <reality/gcrarity.meta.h>
#include <reality/gclegality.meta.h>
#include <reality/gctechnologyrequirement.meta.h>
#include <reality/gcitempricemodifiers.meta.h>
#include <reality/gctradecategory.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eWikiCategory
 */
enum eWikiCategory : uint32_t
{
    EWikiCategory_NotEnabled = 0,
    EWikiCategory_Crafting = 1,
    EWikiCategory_Tech = 2,
    EWikiCategory_Construction = 3,
    EWikiCategory_Trade = 4,
    EWikiCategory_Curio = 5,
    EWikiCategory_Cooking = 6,
};

/**
 * @class cGcProductData
 */
class cGcProductData
{
  public:
    enum
    {
        ClassNameHash = 0xE831C8A241FD8276,
    };

    inline cGcProductData() {}
    cGcProductData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            TkID<128> mID;
            cTkFixedString<128,char> macName;
            cTkFixedString<128,char> macNameLower;
            cTkDynamicString macSubtitle;
            cTkDynamicString macDescription;
            TkID<256> mHint;
            TkID<128> mGroupID;
            cTkModelResource DebrisFile;
            int miBaseValue;
            int miLevel;
            cTkTextureResource Icon;
            cTkTextureResource HeroIcon;
            cTkColour mColour;
            cGcRealitySubstanceCategory Category;
            cGcProductCategory Type;
            cGcRarity Rarity;
            cGcLegality Legality;
            bool mbConsumable;
            int miChargeValue;
            int miStackMultiplier;
            int miDefaultCraftAmount;
            int miCraftAmountStepSize;
            int miCraftAmountMultiplier;
            cTkDynamicArray<cGcTechnologyRequirement> maRequirements;
            cTkDynamicArray<cGcTechnologyRequirement> maAltRequirements;
            cGcItemPriceModifiers Cost;
            int miRecipeCost;
            bool mbSpecificChargeOnly;
            float mfNormalisedValueOnWorld;
            float mfNormalisedValueOffWorld;
            cGcTradeCategory TradeCategory;
            eWikiCategory WikiCategory;
            bool mbIsCraftable;
            TkID<128> mDeploysInto;
            float mfEconomyInfluenceMultiplier;
            TkID<256> mPinObjective;
            TkID<256> mPinObjectiveTip;
            bool mbCookingIngredient;
            float mfCookingValue;
            bool mbGoodForSelling;
            TkID<128> mGiveRewardOnSpecialPurchase;
            bool mbEggModifierIngredient;
            bool mbIsTechbox;
            bool mbCanSendToOtherPlayers;
        };
    };
};

SKYSCRAPER_END
