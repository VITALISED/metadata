/**
 * @file gcbiomesubtype.meta.h
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
 * @enum eBiomeSubType
 */
enum eBiomeSubType : uint32_t
{
    EBiomeSubType_None = 0,
    EBiomeSubType_Standard = 1,
    EBiomeSubType_HighQuality = 2,
    EBiomeSubType_Structure = 3,
    EBiomeSubType_Beam = 4,
    EBiomeSubType_Hexagon = 5,
    EBiomeSubType_FractCube = 6,
    EBiomeSubType_Bubble = 7,
    EBiomeSubType_Shards = 8,
    EBiomeSubType_Contour = 9,
    EBiomeSubType_Shell = 10,
    EBiomeSubType_BoneSpire = 11,
    EBiomeSubType_WireCell = 12,
    EBiomeSubType_HydroGarden = 13,
    EBiomeSubType_HugePlant = 14,
    EBiomeSubType_HugeLush = 15,
    EBiomeSubType_HugeRing = 16,
    EBiomeSubType_HugeRock = 17,
    EBiomeSubType_HugeScorch = 18,
    EBiomeSubType_HugeToxic = 19,
    EBiomeSubType_Variant_A = 20,
    EBiomeSubType_Variant_B = 21,
    EBiomeSubType_Variant_C = 22,
    EBiomeSubType_Variant_D = 23,
    EBiomeSubType_Infested = 24,
    EBiomeSubType_Swamp = 25,
    EBiomeSubType_Lava = 26,
};

/**
 * @class cGcBiomeSubType
 */
class cGcBiomeSubType
{
  public:
    enum
    {
        ClassNameHash = 0xE8FE27493120750F,
    };

    inline cGcBiomeSubType() {}
    cGcBiomeSubType* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eBiomeSubType BiomeSubType;
        };
    };
};

SKYSCRAPER_END
