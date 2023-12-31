/**
 * @file gcplanetweatherdata.meta.h
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
#include <simulation/environment/weather/gcweatheroptions.meta.h>
#include <simulation/solarsystem/planet/gcplanetheavyairdata.meta.h>
#include <graphics/gcscreenfilters.meta.h>
#include <simulation/solarsystem/planet/gcrainbowtype.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eWeatherIntensity
 */
enum eWeatherIntensity : uint32_t
{
    EWeatherIntensity_Default = 0,
    EWeatherIntensity_Extreme = 1,
};

/**
 * @enum eStormFrequency
 */
enum eStormFrequency : uint32_t
{
    EStormFrequency_None = 0,
    EStormFrequency_Low = 1,
    EStormFrequency_High = 2,
};

/**
 * @enum eAtmosphereType
 */
enum eAtmosphereType : uint32_t
{
    EAtmosphereType_None = 0,
    EAtmosphereType_Normal = 1,
};

/**
 * @class cGcPlanetWeatherData
 */
class cGcPlanetWeatherData
{
  public:
    enum
    {
        ClassNameHash = 0xEBF08BE1E3CAE3AC,
    };

    inline cGcPlanetWeatherData() {}
    cGcPlanetWeatherData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cGcWeatherOptions WeatherType;
            cGcPlanetHeavyAirData HeavyAir;
            eWeatherIntensity WeatherIntensity;
            eStormFrequency StormFrequency;
            eAtmosphereType AtmosphereType;
            int miDayColourIndex;
            int miDuskColourIndex;
            cGcScreenFilters ScreenFilter;
            cGcScreenFilters StormScreenFilter;
            cGcRainbowType RainbowType;
            int miNightColourIndex;
        };
    };
};

SKYSCRAPER_END
