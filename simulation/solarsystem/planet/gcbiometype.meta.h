/**
 * @file gcbiometype.meta.h
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
 * @enum eBiome
 */
enum eBiome : uint32_t
{
    EBiome_Lush = 0,
    EBiome_Toxic = 1,
    EBiome_Scorched = 2,
    EBiome_Radioactive = 3,
    EBiome_Frozen = 4,
    EBiome_Barren = 5,
    EBiome_Dead = 6,
    EBiome_Weird = 7,
    EBiome_Red = 8,
    EBiome_Green = 9,
    EBiome_Blue = 10,
    EBiome_Test = 11,
    EBiome_Swamp = 12,
    EBiome_Lava = 13,
    EBiome_Waterworld = 14,
    EBiome_All = 15,
};

/**
 * @class cGcBiomeType
 */
class cGcBiomeType : cTkMetaData::Registrar<cGcBiomeType>, cTkMetaDataXML::Registrar<cGcBiomeType>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x5CEE315FE3457560,
    };
    enum
    {
        mu64TemplateHash = 0x9F5CC8BA811F301D,
    };

    eBiome Biome;
};

SKYSCRAPER_END
