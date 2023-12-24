/**
 * @file gcscreenfilters.meta.h
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
 * @enum eScreenFilter
 */
enum eScreenFilter : uint32_t
{
    EScreenFilter_Default = 0,
    EScreenFilter_DefaultStorm = 1,
    EScreenFilter_Frozen = 2,
    EScreenFilter_FrozenStorm = 3,
    EScreenFilter_Toxic = 4,
    EScreenFilter_ToxicStorm = 5,
    EScreenFilter_Radioactive = 6,
    EScreenFilter_RadioactiveStorm = 7,
    EScreenFilter_Scorched = 8,
    EScreenFilter_ScorchedStorm = 9,
    EScreenFilter_Barren = 10,
    EScreenFilter_BarrenStorm = 11,
    EScreenFilter_Weird1 = 12,
    EScreenFilter_Weird2 = 13,
    EScreenFilter_Weird3 = 14,
    EScreenFilter_Weird4 = 15,
    EScreenFilter_Weird5 = 16,
    EScreenFilter_Weird6 = 17,
    EScreenFilter_Weird7 = 18,
    EScreenFilter_Weird8 = 19,
    EScreenFilter_Vintage = 20,
    EScreenFilter_HyperReal = 21,
    EScreenFilter_Desaturated = 22,
    EScreenFilter_Amber = 23,
    EScreenFilter_GBGreen = 24,
    EScreenFilter_Apocalypse = 25,
    EScreenFilter_Diffusion = 26,
    EScreenFilter_Green = 27,
    EScreenFilter_BlackAndWhite = 28,
    EScreenFilter_Isolation = 29,
    EScreenFilter_Sepia = 30,
    EScreenFilter_Filmic = 31,
    EScreenFilter_GBGrey = 32,
    EScreenFilter_Binoculars = 33,
    EScreenFilter_Surveying = 34,
    EScreenFilter_Nexus = 35,
    EScreenFilter_SpaceStation = 36,
    EScreenFilter_Freighter = 37,
    EScreenFilter_FreighterAbandoned = 38,
    EScreenFilter_Frigate = 39,
    EScreenFilter_MissionSurvey = 40,
    EScreenFilter_NewVibrant = 41,
    EScreenFilter_NewVibrantBright = 42,
    EScreenFilter_NewVibrantWarm = 43,
    EScreenFilter_NewVintageBright = 44,
    EScreenFilter_NewVintageWash = 45,
    EScreenFilter_Drama = 46,
    EScreenFilter_MemoryBold = 47,
    EScreenFilter_Memory = 48,
    EScreenFilter_MemoryWash = 49,
    EScreenFilter_Autumn = 50,
    EScreenFilter_AutumnFade = 51,
    EScreenFilter_ClassicBright = 52,
    EScreenFilter_Classic = 53,
    EScreenFilter_ClassicWash = 54,
    EScreenFilter_BlackAndWhiteDream = 55,
    EScreenFilter_ColourTouchB = 56,
    EScreenFilter_ColourTouchC = 57,
    EScreenFilter_NegativePrint = 58,
    EScreenFilter_SepiaExtreme = 59,
    EScreenFilter_Solarise = 60,
    EScreenFilter_TwoToneStrong = 61,
    EScreenFilter_TwoTone = 62,
    EScreenFilter_Dramatic = 63,
    EScreenFilter_Fuchsia = 64,
    EScreenFilter_Violet = 65,
    EScreenFilter_Cyan = 66,
    EScreenFilter_GreenNew = 67,
    EScreenFilter_AmberNew = 68,
    EScreenFilter_Red = 69,
    EScreenFilter_HueShiftA = 70,
    EScreenFilter_HueShiftB = 71,
    EScreenFilter_HueShiftC = 72,
    EScreenFilter_HueShiftD = 73,
    EScreenFilter_WarmStripe = 74,
    EScreenFilter_NMSRetroA = 75,
    EScreenFilter_NMSRetroB = 76,
    EScreenFilter_NMSRetroC = 77,
    EScreenFilter_NMSRetroD = 78,
    EScreenFilter_NMSRetroE = 79,
    EScreenFilter_NMSRetroF = 80,
    EScreenFilter_NMSRetroG = 81,
};

/**
 * @class cGcScreenFilters
 */
class cGcScreenFilters
{
  public:
    enum
    {
        ClassNameHash = 0xE50E9B26CC742B3D,
    };

    inline cGcScreenFilters() {}
    cGcScreenFilters* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eScreenFilter ScreenFilter;
        };
    };
};

SKYSCRAPER_END
