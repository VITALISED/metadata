/**
 * @file gcdronedata.meta.h
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
#include <simulation/robots/gcdronecontroldata.meta.h>
#include <simulation/robots/gcsentinelresource.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcDroneData
 */
class cGcDroneData
{
  public:
    enum
    {
        ClassNameHash = 0xC42B2790FC61E0A9,
    };

    inline cGcDroneData() {}
    cGcDroneData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cGcDroneControlData Patrol;
            cGcDroneControlData Attack;
            cGcDroneControlData Search;
            cGcDroneControlData Scan;
            cGcDroneControlData Repair;
            cGcDroneControlData Summon;
            cGcDroneControlData ToCover;
            cGcDroneControlData Stun;
            cGcDroneControlData Friendly;
            cGcDroneControlData FriendlyFast;
            float mfCollisionAvoidOffset;
            float mfDronePatrolDistanceMin;
            float mfDronePatrolDistanceMax;
            float mfDronePatrolTargetDistance;
            float mfDronePatrolInspectDistanceMin;
            float mfDronePatrolInspectDistanceMax;
            float mfDronePatrolInspectTargetTime;
            float mfDronePatrolInspectSwitchTime;
            float mfDronePatrolInspectRadius;
            float mfDronePatrolRepelDistance;
            float mfDronePatrolRepelStrength;
            float mfDronePatrolHonkRadius;
            float mfDronePatrolHonkTime;
            int miDronePatrolHonkProbability;
            float mfDroneAlertTime;
            float mfAttackMoveLookDistanceRange;
            float mfAttackMoveLookDistanceMin;
            float mfAttackAngle;
            float mfAttackMinSpeed;
            float mfAttackActivateTime;
            float mfAttackBobAmount;
            float mfAttackBobRotation;
            float mfAttackMoveMinChoiceTime;
            float mfAttackMoveAngle;
            float mfAttackMaxDistanceFromAlert;
            float mfAttackAlertFailTime;
            cTkColour mEyeColourAlert;
            cTkColour mEyeColourSearch;
            cTkColour mEyeColourPatrol;
            TkID<128> mDamageEffect;
            float mfDamageEffectHealthPercentThreshold;
            float mfHideBehindCoverHealthPercentThreshold;
            float mfHideBehindCoverSearchRadius;
            bool mbEnableCoverPlacement;
            float mfCoverPlacementActivateTime;
            float mfCoverPlacementActivateTimeMaxRandomExtra;
            float mfCoverPlacementCooldownTime;
            float mfCoverPlacementMinDistanceFromTarget;
            float mfCoverPlacementMinDistanceFromSelf;
            float mfCoverPlacementMaxDistanceFromSelf;
            float mfCoverPlacementUpOffset;
            int miCoverPlacementMaxActiveCover;
            cGcSentinelResource CoverResource;
            float mfDroneSearchTime;
            float mfDroneSearchRadius;
            float mfDroneSearchPauseTime;
            float mfDroneSearchCriminalScanRadius;
            float mfDroneSearchCriminalScanRadiusWanted;
            float mfDroneSearchCriminalScanRadiusInShip;
            float mfDroneScanPlayerTime;
            float mfLeanAmount;
            float mfLeanSpeedMin;
            float mfLeanSpeedRange;
            float mfEyeOffset;
            float mfEyeFocusTime;
            int miEyeNumRandomsMin;
            int miEyeNumRandomsMax;
            float mfEyeTimeMin;
            float mfEyeTimeMax;
            float mfEyeAngleMax;
            float mfEngineDirSpeedMin;
            float mfEngineDirAngleMax;
        };
    };
};

SKYSCRAPER_END
