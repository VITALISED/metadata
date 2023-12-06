/**
 * @file gcplanetwaterdata.meta.h
 * @author VITALISED & Contributors
 * @since 2023-12-06
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
#include <simulation/solarsystem/planet/gcplanetheavyairdata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcPlanetWaterData
 */
class cGcPlanetWaterData : cTkMetaData::Registrar<cGcPlanetWaterData>, cTkMetaDataXML::Registrar<cGcPlanetWaterData>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x98F83A1A50531877,
    };
    enum
    {
        mu64TemplateHash = 0xF87D71ED70DA7A24,
    };

    int miColourIndex;
    float mfWaterStrength;
    float mfWaterColourStrength;
    float mfWaterMultiplyStrength;
    float mfWaterMultiplyMax;
    float mfWaterRoughness;
    float mfFresnelPower;
    float mfFresnelMin;
    float mfFresnelMax;
    float mfWave1Scale;
    float mfWave1Height;
    float mfWave1Speed;
    float mfWave2Scale;
    float mfWave2Height;
    float mfWave2Speed;
    float mfNormalMap1Scale;
    float mfNormalMap1Speed;
    float mfNormalMap2Scale;
    float mfNormalMap2Speed;
    float mfFoamFadeHeight;
    float mfFoam1Scale;
    float mfFoam1Speed;
    float mfFoam2Scale;
    float mfFoam2Speed;
    cGcPlanetHeavyAirData HeavyAir;
};

SKYSCRAPER_END
