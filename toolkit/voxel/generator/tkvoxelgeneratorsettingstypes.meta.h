/**
 * @file tkvoxelgeneratorsettingstypes.meta.h
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
 * @enum eTerrainSettings
 */
enum eTerrainSettings : uint32_t
{
    ETerrainSettings_FloatingIslands = 0,
    ETerrainSettings_GrandCanyon = 1,
    ETerrainSettings_MountainRavines = 2,
    ETerrainSettings_HugeArches = 3,
    ETerrainSettings_Alien = 4,
    ETerrainSettings_Craters = 5,
    ETerrainSettings_Caverns = 6,
    ETerrainSettings_Alpine = 7,
    ETerrainSettings_LilyPad = 8,
    ETerrainSettings_Desert = 9,
    ETerrainSettings_WaterworldPrime = 10,
    ETerrainSettings_FloatingIslandsPrime = 11,
    ETerrainSettings_GrandCanyonPrime = 12,
    ETerrainSettings_MountainRavinesPrime = 13,
    ETerrainSettings_HugeArchesPrime = 14,
    ETerrainSettings_AlienPrime = 15,
    ETerrainSettings_CratersPrime = 16,
    ETerrainSettings_CavernsPrime = 17,
    ETerrainSettings_AlpinePrime = 18,
    ETerrainSettings_LilyPadPrime = 19,
    ETerrainSettings_DesertPrime = 20,
};

/**
 * @class cTkVoxelGeneratorSettingsTypes
 */
class cTkVoxelGeneratorSettingsTypes
{
  public:
    enum
    {
        ClassNameHash = 0x60B0A451EF1759F9,
    };

    inline cTkVoxelGeneratorSettingsTypes() {}
    cTkVoxelGeneratorSettingsTypes* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eTerrainSettings TerrainSettings;
        };
    };
};

SKYSCRAPER_END
