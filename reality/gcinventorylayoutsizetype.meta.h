/**
 * @file gcinventorylayoutsizetype.meta.h
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
 * @enum eSizeType
 */
enum eSizeType : uint32_t
{
    ESizeType_SciSmall = 0,
    ESizeType_SciMedium = 1,
    ESizeType_SciLarge = 2,
    ESizeType_FgtSmall = 3,
    ESizeType_FgtMedium = 4,
    ESizeType_FgtLarge = 5,
    ESizeType_ShuSmall = 6,
    ESizeType_ShtMedium = 7,
    ESizeType_ShtLarge = 8,
    ESizeType_DrpSmall = 9,
    ESizeType_DrpMedium = 10,
    ESizeType_DrpLarge = 11,
    ESizeType_RoySmall = 12,
    ESizeType_RoyMedium = 13,
    ESizeType_RoyLarge = 14,
    ESizeType_AlienSmall = 15,
    ESizeType_AlienMedium = 16,
    ESizeType_AlienLarge = 17,
    ESizeType_SailSmall = 18,
    ESizeType_SailMedium = 19,
    ESizeType_SailLarge = 20,
    ESizeType_WeaponSmall = 21,
    ESizeType_WeaponMedium = 22,
    ESizeType_WeaponLarge = 23,
    ESizeType_FreighterSmall = 24,
    ESizeType_FreighterMedium = 25,
    ESizeType_FreighterLarge = 26,
    ESizeType_VehicleSmall = 27,
    ESizeType_VehicleMedium = 28,
    ESizeType_VehicleLarge = 29,
    ESizeType_ChestSmall = 30,
    ESizeType_ChestMedium = 31,
    ESizeType_ChestLarge = 32,
    ESizeType_ChestCapsule = 33,
    ESizeType_Suit = 34,
    ESizeType_MaintObject = 35,
    ESizeType_RocketLocker = 36,
};

/**
 * @class cGcInventoryLayoutSizeType
 */
class cGcInventoryLayoutSizeType
{
  public:
    enum
    {
        ClassNameHash = 0xCFB91CCA40995CDC,
    };

    inline cGcInventoryLayoutSizeType() {}
    cGcInventoryLayoutSizeType* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eSizeType SizeType;
        };
    };
};

SKYSCRAPER_END
