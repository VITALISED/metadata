/**
 * @file gctradedata.meta.h
 * @author VITALISED & Contributors
 * @since 2023-12-06
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
 * @class cGcTradeData
 */
class cGcTradeData : cTkMetaData::Registrar<cGcTradeData>, cTkMetaDataXML::Registrar<cGcTradeData>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x66FAEFAF4E8E7167,
    };
    enum
    {
        mu64TemplateHash = 0x6788A16C7C9B141A,
    };

    cTkDynamicArray<TkID<128>> maAlwaysPresentProducts;
    cTkDynamicArray<TkID<128>> maAlwaysPresentSubstances;
    cTkDynamicArray<TkID<128>> maOptionalProducts;
    cTkDynamicArray<TkID<128>> maOptionalSubstances;
    int miMinItemsForSale;
    int miMaxItemsForSale;
    float mfPercentageOfItemsAreProducts;
    float mfBuyPriceIncreaseRedThreshold;
    float mfBuyPriceDecreaseGreenThreshold;
    float mfSellPriceIncreaseGreenThreshold;
    float mfSellPriceDecreaseRedThreshold;
    bool mbShowSeasonRewards;
    cTkFixedArray<int, 4> maMinAmountOfProductAvailable;
    cTkFixedArray<int, 4> maMaxAmountOfProductAvailable;
    cTkFixedArray<int, 4> maMinAmountOfSubstanceAvailable;
    cTkFixedArray<int, 4> maMaxAmountOfSubstanceAvailable;
    cTkFixedArray<int, 4> maMinExtraSystemProducts;
    cTkFixedArray<int, 4> maMaxExtraSystemProducts;
    cTkFixedArray<float, 4> maTradeProductsPriceImprovements;
};

SKYSCRAPER_END
