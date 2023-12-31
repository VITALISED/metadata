/**
 * @file gccreaturespawnenum.meta.h
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
 * @enum eIncrementor
 */
enum eIncrementor : uint32_t
{
    EIncrementor_None = 0,
    EIncrementor_Resource = 1,
    EIncrementor_ResourceAway = 2,
    EIncrementor_HeavyAir = 3,
    EIncrementor_Drone = 4,
    EIncrementor_Deer = 5,
    EIncrementor_DeerScan = 6,
    EIncrementor_DeerWords = 7,
    EIncrementor_DeerWordsAway = 8,
    EIncrementor_Diplo = 9,
    EIncrementor_DiploScan = 10,
    EIncrementor_DiploWords = 11,
    EIncrementor_DiploWordsAway = 12,
    EIncrementor_Flyby = 13,
    EIncrementor_Beast = 14,
    EIncrementor_Wingmen = 15,
    EIncrementor_Scouts = 16,
    EIncrementor_Fleet = 17,
    EIncrementor_Attackers = 18,
    EIncrementor_AttackersFromBehind = 19,
    EIncrementor_Flee = 20,
    EIncrementor_RemoveFleet = 21,
    EIncrementor_Fighters = 22,
    EIncrementor_PostFighters = 23,
    EIncrementor_Escape = 24,
    EIncrementor_Warp = 25,
};

/**
 * @class cGcCreatureSpawnEnum
 */
class cGcCreatureSpawnEnum
{
  public:
    enum
    {
        ClassNameHash = 0xF1142B73FBEC2939,
    };

    inline cGcCreatureSpawnEnum() {}
    cGcCreatureSpawnEnum* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eIncrementor Incrementor;
        };
    };
};

SKYSCRAPER_END
