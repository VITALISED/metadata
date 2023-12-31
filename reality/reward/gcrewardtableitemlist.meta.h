/**
 * @file gcrewardtableitemlist.meta.h
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
#include <reality/gcrewardtableitem.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eRewardChoice
 */
enum eRewardChoice : uint32_t
{
    ERewardChoice_GiveAll = 0,
    ERewardChoice_Select = 1,
    ERewardChoice_SelectAlways = 2,
    ERewardChoice_TryEach = 3,
    ERewardChoice_SelectSilent = 4,
    ERewardChoice_GiveAllSilent = 5,
    ERewardChoice_TryFirst_ThenSelectAlways = 6,
    ERewardChoice_SelectFromSuccess = 7,
    ERewardChoice_SelectAlwaysSilent = 8,
    ERewardChoice_SelectFromSuccessSilent = 9,
};

/**
 * @class cGcRewardTableItemList
 */
class cGcRewardTableItemList
{
  public:
    enum
    {
        ClassNameHash = 0xF97DB1C704357E47,
    };

    inline cGcRewardTableItemList() {}
    cGcRewardTableItemList* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eRewardChoice RewardChoice;
            bool mbOverrideZeroSeed;
            bool mbUseInventoryChoiceOverride;
            cTkDynamicArray<cGcRewardTableItem> maList;
        };
    };
};

SKYSCRAPER_END
