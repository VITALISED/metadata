/**
 * @file gcplayerspaceshipcontroldata.meta.h
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
#include <simulation/spaceship/gcplayerspaceshipenginedata.meta.h>
#include <toolkit/animation/tkcurvetype.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcPlayerSpaceshipControlData
 */
class cGcPlayerSpaceshipControlData
{
  public:
    enum
    {
        ClassNameHash = 0x49B6F6CA72CF5A3F,
    };

    inline cGcPlayerSpaceshipControlData() {}
    cGcPlayerSpaceshipControlData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cGcPlayerSpaceshipEngineData SpaceEngine;
            cGcPlayerSpaceshipEngineData PlanetEngine;
            cGcPlayerSpaceshipEngineData CombatEngine;
            cGcPlayerSpaceshipEngineData AtmosCombatEngine;
            float mfExitHeightFactorMin;
            float mfExitHeightFactorMax;
            float mfExitHeightFactorPlungeMin;
            float mfExitHeightFactorPlungeMax;
            float mfExitAngleMin;
            float mfExitAngleMax;
            float mfExitLeaveAngle;
            cTkCurveType ExitCurve;
            cTkCurveType ExitDownCurve;
            float mfAngularFactor;
            float mfMaxTorque;
            float mfShipPlanetBrakeMinSpeed;
            float mfShipPlanetBrakeMaxSpeed;
            float mfShipPlanetBrakeMinHeight;
            float mfShipPlanetBrakeMaxHeight;
            float mfShipPlanetBrakeForce;
            float mfShipPlanetBrakeAlignMinTime;
            float mfShipPlanetBrakeAlignMaxTime;
            float mfShipMinHeightForce;
        };
    };
};

SKYSCRAPER_END
