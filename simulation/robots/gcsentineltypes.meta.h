/**
 * @file gcsentineltypes.meta.h
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
 * @enum eSentinelType
 */
enum eSentinelType : uint32_t
{
    ESentinelType_PatrolDrone = 0,
    ESentinelType_CombatDrone = 1,
    ESentinelType_MedicDrone = 2,
    ESentinelType_SummonerDrone = 3,
    ESentinelType_CorruptedDrone = 4,
    ESentinelType_Quad = 5,
    ESentinelType_Mech = 6,
    ESentinelType_Walker = 7,
    ESentinelType_FriendlyDrone = 8,
};

/**
 * @class cGcSentinelTypes
 */
class cGcSentinelTypes
{
  public:
    enum
    {
        ClassNameHash = 0x4C87DB0C59434DB3,
    };

    inline cGcSentinelTypes() {}
    cGcSentinelTypes* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eSentinelType SentinelType;
        };
    };
};

SKYSCRAPER_END
