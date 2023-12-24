/**
 * @file gcwfcterrainconstraint.meta.h
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
 * @enum eDirection
 */
enum eDirection : uint32_t
{
    EDirection_Left = 0,
    EDirection_Back = 1,
    EDirection_Right = 2,
    EDirection_Forward = 3,
    EDirection_LeftBack = 4,
    EDirection_RightBack = 5,
    EDirection_RightForward = 6,
    EDirection_LeftForward = 7,
    EDirection_All = 8,
};

/**
 * @enum eLevels
 */
enum eLevels : uint32_t
{
    ELevels_Lower = 0,
    ELevels_Upper = 1,
    ELevels_Both = 2,
};

/**
 * @enum eTerrain
 */
enum eTerrain : uint32_t
{
    ETerrain_RequireAbove = 0,
    ETerrain_RequireBelow = 1,
};

/**
 * @class cGcWFCTerrainConstraint
 */
class cGcWFCTerrainConstraint
{
  public:
    enum
    {
        ClassNameHash = 0xF0679B25F5343B25,
    };

    inline cGcWFCTerrainConstraint() {}
    cGcWFCTerrainConstraint* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eDirection Direction;
            eLevels Levels;
            eTerrain Terrain;
        };
    };
};

SKYSCRAPER_END
