/**
 * @file gccreatureswarmdataparams.meta.h
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
 * @class cGcCreatureSwarmDataParams
 */
class cGcCreatureSwarmDataParams
{
  public:
    enum
    {
        ClassNameHash = 0x691F170D5F26887A,
    };

    inline cGcCreatureSwarmDataParams() {}
    cGcCreatureSwarmDataParams* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkDynamicArray<TkID<256>> maValidDescriptors;
            float mfCoherence;
            float mfAlignment;
            float mfSeparateStrength;
            float mfSpacing;
            float mfFollow;
            float mfRange;
            float mfMaxBankingAmount;
            float mfTurnRequiredForMaxBanking;
            float mfMaxPitchAmount;
            float mfUpwardMovementForMaxPitch;
            float mfFaceMoveDirStrength;
            bool mbFaceMoveDirYawOnly;
            bool mbCanLand;
            float mfLandAdjustDist;
            float mfLandClampBegin;
            float mfLandSlowDown;
            float mfTakeOffTime;
            float mfTakeOffStartSpeed;
            float mfTakeOffUpwardBoost;
            bool mbCanWalk;
            float mfWalkSpeed;
            float mfWalkTurnTime;
            float mfFlyTimeMin;
            float mfFlyTimeMax;
            float mfLandTimeMin;
            float mfLandTimeMax;
            float mfLandIdleTimeMin;
            float mfLandIdleTimeMax;
            float mfLandWalkTimeMin;
            float mfLandWalkTimeMax;
            float mfMaxSpeed;
            float mfAlignTime;
            float mfBankingTime;
            float mfSpringSmoothTime;
            bool mbApplyScaleToSpeed;
        };
    };
};

SKYSCRAPER_END
