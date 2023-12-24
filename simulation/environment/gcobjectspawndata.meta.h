/**
 * @file gcobjectspawndata.meta.h
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
#include <utilities/data/gcresourceelement.meta.h>
#include <simulation/environment/gcterraintiletype.meta.h>
#include <simulation/environment/gcobjectspawndatavariant.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eType
 */
enum eType : uint32_t
{
    EType_Instanced = 0,
    EType_Single = 1,
};

/**
 * @enum ePlacementPriority
 */
enum ePlacementPriority : uint32_t
{
    EPlacementPriority_Low = 0,
    EPlacementPriority_Normal = 1,
    EPlacementPriority_High = 2,
};

/**
 * @enum eLargeObjectCoverage
 */
enum eLargeObjectCoverage : uint32_t
{
    ELargeObjectCoverage_DoNotPlace = 0,
    ELargeObjectCoverage_DoNotPlaceIgnoreFootprint = 1,
    ELargeObjectCoverage_DoNotPlaceClose = 2,
    ELargeObjectCoverage_DoNotPlaceAnywhereNear = 3,
    ELargeObjectCoverage_OnlyPlaceAround = 4,
    ELargeObjectCoverage_OnlyPlaceAroundIgnoreFootprint = 5,
    ELargeObjectCoverage_AlwaysPlace = 6,
};

/**
 * @enum eOverlapStyle
 */
enum eOverlapStyle : uint32_t
{
    EOverlapStyle_None = 0,
    EOverlapStyle_SameSeed = 1,
    EOverlapStyle_All = 2,
};

/**
 * @enum eGroundColourIndex
 */
enum eGroundColourIndex : uint32_t
{
    EGroundColourIndex_Auto = 0,
    EGroundColourIndex_Main = 1,
    EGroundColourIndex_Patch = 2,
};

/**
 * @class cGcObjectSpawnData
 */
class cGcObjectSpawnData
{
  public:
    enum
    {
        ClassNameHash = 0x43EBB2E6AFAC5863,
    };

    inline cGcObjectSpawnData() {}
    cGcObjectSpawnData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            TkID<128> mDebugName;
            eType Type;
            cGcResourceElement Resource;
            cTkDynamicArray<cGcResourceElement> maAltResources;
            cTkDynamicArray<cGcTerrainTileType> maExtraTileTypes;
            TkID<128> mPlacement;
            cTkSeed mSeed;
            ePlacementPriority PlacementPriority;
            eLargeObjectCoverage LargeObjectCoverage;
            eOverlapStyle OverlapStyle;
            float mfMinHeight;
            float mfMaxHeight;
            bool mbRelativeToSeaLevel;
            float mfMinAngle;
            float mfMaxAngle;
            bool mbMatchGroundColour;
            eGroundColourIndex GroundColourIndex;
            bool mbSwapPrimaryForSecondaryColour;
            bool mbSwapPrimaryForRandomColour;
            bool mbAlignToNormal;
            float mfMinScale;
            float mfMaxScale;
            float mfMinScaleY;
            float mfMaxScaleY;
            float mfSlopeScaling;
            float mfPatchEdgeScaling;
            float mfMaxXZRotation;
            bool mbAutoCollision;
            bool mbCollideWithPlayer;
            bool mbCollideWithPlayerVehicle;
            bool mbDestroyedByPlayerVehicle;
            bool mbDestroyedByPlayerShip;
            bool mbDestroyedByTerrainEdit;
            bool mbInvisibleToCamera;
            bool mbCreaturesCanEat;
            float mfShearWindStrength;
            TkID<128> mDestroyedByVehicleEffect;
            cGcObjectSpawnDataVariant QualityVariantData;
            cTkDynamicArray<cGcObjectSpawnDataVariant> maQualityVariants;
        };
    };
};

SKYSCRAPER_END
