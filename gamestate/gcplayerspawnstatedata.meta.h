/**
 * @file gcplayerspawnstatedata.meta.h
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
 * @enum eLastKnownPlayerState
 */
enum eLastKnownPlayerState : uint32_t
{
    ELastKnownPlayerState_OnFoot = 0,
    ELastKnownPlayerState_InShip = 1,
    ELastKnownPlayerState_InStation = 2,
    ELastKnownPlayerState_AboardFleet = 3,
    ELastKnownPlayerState_InNexus = 4,
    ELastKnownPlayerState_AbandonedFreighter = 5,
    ELastKnownPlayerState_InShipLanded = 6,
};

/**
 * @class cGcPlayerSpawnStateData
 */
class cGcPlayerSpawnStateData
{
  public:
    enum
    {
        ClassNameHash = 0x6F8C3831DC1540EC,
    };

    inline cGcPlayerSpawnStateData() {}
    cGcPlayerSpawnStateData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkVector4 mPlayerPositionInSystem;
            cTkVector4 mPlayerTransformAt;
            cTkVector4 mPlayerDeathRespawnPositionInSystem;
            cTkVector4 mPlayerDeathRespawnTransformAt;
            cTkVector4 mShipPositionInSystem;
            cTkVector4 mShipTransformAt;
            eLastKnownPlayerState LastKnownPlayerState;
            cTkVector4 mFreighterPositionInSystem;
            cTkVector4 mFreighterTransformAt;
            cTkVector4 mFreighterTransformUp;
            cTkVector4 mAbandonedFreighterPositionInSystem;
            cTkVector4 mAbandonedFreighterTransformAt;
            cTkVector4 mAbandonedFreighterTransformUp;
        };
    };
};

SKYSCRAPER_END
