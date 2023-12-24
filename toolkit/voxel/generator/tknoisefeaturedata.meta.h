/**
 * @file tknoisefeaturedata.meta.h
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
#include <toolkit/voxel/generator/tknoiseoffsetenum.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eFeatureType
 */
enum eFeatureType : uint32_t
{
    EFeatureType_Tube = 0,
    EFeatureType_Blob = 1,
};

/**
 * @class cTkNoiseFeatureData
 */
class cTkNoiseFeatureData
{
  public:
    enum
    {
        ClassNameHash = 0xBC975A8E0D580FFA,
    };

    inline cTkNoiseFeatureData() {}
    cTkNoiseFeatureData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            bool mbActive;
            int miMaximumLOD;
            bool mbSubtract;
            bool mbTrench;
            cTkNoiseVoxelTypeEnum VoxelType;
            eFeatureType FeatureType;
            float mfWidth;
            float mfHeight;
            int miOctaves;
            float mfRegionSize;
            float mfRatio;
            float mfHeightVarianceAmplitude;
            float mfHeightVarianceFrequency;
            float mfHeightOffset;
            cTkNoiseOffsetEnum Offset;
            float mfSmoothRadius;
            int miSeedOffset;
            float mfTileBlendMeters;
        };
    };
};

SKYSCRAPER_END
