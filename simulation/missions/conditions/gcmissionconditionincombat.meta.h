/**
 * @file gcmissionconditionincombat.meta.h
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
 * @enum eCombatType
 */
enum eCombatType : uint32_t
{
    ECombatType_GroundCombat = 0,
    ECombatType_SpaceCombat = 1,
    ECombatType_FiendCombat = 2,
    ECombatType_BigFishFiendCombat = 3,
    ECombatType_CorruptedSentinelCombat = 4,
    ECombatType_GroundWormCombat = 5,
    ECombatType_RewardEncounter = 6,
};

/**
 * @class cGcMissionConditionInCombat
 */
class cGcMissionConditionInCombat
{
  public:
    enum
    {
        ClassNameHash = 0x326A8803E3B79519,
    };

    inline cGcMissionConditionInCombat() {}
    cGcMissionConditionInCombat* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eCombatType CombatType;
            TkID<256> mOverrideOSDMessage;
            bool mbCheckAllFireteamMembers;
            bool mbEncouragesFightingSentinels;
        };
    };
};

SKYSCRAPER_END
