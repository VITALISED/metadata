/**
 * @file gcgalaxyrendersetupdata.meta.h
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
 * @class cGcGalaxyRenderSetupData
 */
class cGcGalaxyRenderSetupData
{
  public:
    enum
    {
        ClassNameHash = 0xC3AAF93B598F92B7,
    };

    inline cGcGalaxyRenderSetupData() {}
    cGcGalaxyRenderSetupData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkColour mSunCoreColour;
            float mfSunCoreSmaller;
            float mfSunCoreLarger;
            float mfSunCoreBGContrib;
            float mfSunCoreFGContrib;
            float mfBGCellTraceScale;
            float mfBGCellMoveScale;
            float mfBGCellHorizonInfluence;
            float mfBGColourStage1;
            float mfBGColourStage2;
            float mfBGColourStage3;
            float mfBGColourStage4;
            float mfBGColourCellBlend;
            float mfBGColourPow;
            float mfStarFieldBlendAmount;
            float mfLensFlareBase;
            cTkColour mLensFlareColour;
            cTkVector4 mLensFlareSpread;
            float mfNebulaeAlphaPow;
            float mfNebulaeTraceValueMult;
            float mfNebulaeTraceScale;
            float mfNebulaeTraceDensity;
            float mfNebulaeTraceDensityCutoff;
            cTkVector2 mNebulaeTraceStepRange;
            cTkVector4 mCompositionControlB_S_C_G;
            float mfCompositionSaturationIncreaseError;
            float mfCompositionSaturationIncreaseFilter;
            float mfCompositionSaturationIncreaseSelected;
            float mfVignetteSize;
            float mfVignetteBase;
            float mfVignetteSizeIncreaseError;
            float mfVignetteSizeIncreaseFilter;
            float mfVignetteSizeIncreaseSelected;
            cTkVector2 mLensFlareExpandTowards;
            cTkFixedArray<cTkColour, 10> maMapLargeAreaPrimaryDefaultColours;
            cTkFixedArray<cTkColour, 10> maMapLargeAreaPrimaryHighContrastColours;
            cTkFixedArray<cTkColour, 10> maMapLargeAreaSecondaryDefaultColours;
            cTkFixedArray<cTkColour, 10> maMapLargeAreaSecondaryHighContrastColours;
        };
    };
};

SKYSCRAPER_END
