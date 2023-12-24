/**
 * @file gcterrainediting.meta.h
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
 * @class cGcTerrainEditing
 */
class cGcTerrainEditing
{
  public:
    enum
    {
        ClassNameHash = 0x4686D0FAC0A1B9EC,
    };

    inline cGcTerrainEditing() {}
    cGcTerrainEditing* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            float mfEditPlaneMaxAdditiveOffsetFactor;
            float mfEditPlaneMinAdditiveOffsetFactor;
            float mfEditPlaneMaxSubtractiveOffsetFactor;
            float mfEditPlaneMinSubtractiveOffsetFactor;
            float mfTerrainEditBeamMaxRange;
            float mfTerrainEditBeamSpherecastRadius;
            float mfTerrainEditBeamAddInterpolationStepFactor;
            float mfTerrainEditBeamSubtractInterpolationStepFactor;
            float mfTerrainBlocksSearchRadiusMultiplier;
            float mfRegionMapSearchRadiusMultiplier;
            float mfMinimumSubstancePresence;
            float mfRegionEditAreaMultiplier;
            float mfDensityBlendDistanceMultiplier;
            float mfTerrainEditBaseDistanceTolerance;
            float mfTerrainUndoBaseDistanceTolerance;
            float mfUndoEditToleranceFactor;
            float mfUndoBaseEditEffectiveScale;
            float mfTerrainEditsNormalCostFactor;
            float mfTerrainEditsSurvivalCostFactor;
            float mfVoxelsDeletedAffectCostFactor;
            bool mbEditGunBeamEnabled;
            bool mbEditGunParticlesEnabled;
            bool mbSubtractGunBeamEnabled;
            bool mbSubtractGunParticlesEnabled;
            cTkFixedArray<float, 8> maEditSizes;
            cTkFixedArray<float, 3> maSubtractSizes;
            cTkFixedArray<float, 2> maBaseEditSizes;
            cTkFixedArray<float, 2> maUndoEditSizes;
            cTkFixedArray<float, 1> maFlatteningSizes;
            float mfEditEffectScale;
        };
    };
};

SKYSCRAPER_END
