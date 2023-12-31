/**
 * @file tkvoxelgeneratordata.meta.h
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
#include <toolkit/voxel/generator/tknoisevoxeltypeenum.meta.h>
#include <toolkit/voxel/generator/tknoiseuberlayerdata.meta.h>
#include <toolkit/voxel/generator/tknoisegriddata.meta.h>
#include <toolkit/voxel/generator/tknoisefeaturedata.meta.h>
#include <toolkit/voxel/generator/tknoisecavedata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cTkVoxelGeneratorData
 */
class cTkVoxelGeneratorData
{
  public:
    enum
    {
        ClassNameHash = 0x7A347325F1154095,
    };

    inline cTkVoxelGeneratorData() {}
    cTkVoxelGeneratorData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkSeed mBaseSeed;
            float mfSeaLevel;
            float mfBeachHeight;
            float mfNoSeaBaseLevel;
            cTkNoiseVoxelTypeEnum BuildingVoxelType;
            cTkNoiseVoxelTypeEnum ResourceVoxelType;
            cTkFixedArray<cTkNoiseUberLayerData, 8> maNoiseLayers;
            cTkFixedArray<cTkNoiseGridData, 9> maGridLayers;
            cTkFixedArray<cTkNoiseFeatureData, 7> maFeatures;
            cTkFixedArray<cTkNoiseCaveData, 1> maCaves;
            float mfMinimumCaveDepth;
            float mfCaveRoofSmoothingDist;
            float mfMaximumSeaLevelCaveDepth;
            float mfBuildingTextureRadius;
            float mfBuildingSmoothingRadius;
            float mfBuildingSmoothingHeight;
            float mfWaterFadeInDistance;
        };
    };
};

SKYSCRAPER_END
