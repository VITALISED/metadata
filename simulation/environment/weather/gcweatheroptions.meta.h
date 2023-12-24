/**
 * @file gcweatheroptions.meta.h
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
 * @enum eWeather
 */
enum eWeather : uint32_t
{
    EWeather_Clear = 0,
    EWeather_Dust = 1,
    EWeather_Humid = 2,
    EWeather_Snow = 3,
    EWeather_Toxic = 4,
    EWeather_Scorched = 5,
    EWeather_Radioactive = 6,
    EWeather_RedWeather = 7,
    EWeather_GreenWeather = 8,
    EWeather_BlueWeather = 9,
    EWeather_Swamp = 10,
    EWeather_Lava = 11,
    EWeather_Bubble = 12,
    EWeather_Weird = 13,
    EWeather_Fire = 14,
    EWeather_ClearCold = 15,
};

/**
 * @class cGcWeatherOptions
 */
class cGcWeatherOptions
{
  public:
    enum
    {
        ClassNameHash = 0xA2AEA53FED6497EC,
    };

    inline cGcWeatherOptions() {}
    cGcWeatherOptions* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eWeather Weather;
        };
    };
};

SKYSCRAPER_END
