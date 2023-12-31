/**
 * @file gccreatureinfo.meta.h
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
#include <reality/gcrarity.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eAge
 */
enum eAge : uint32_t
{
    EAge_Regular = 0,
    EAge_Weird = 1,
};

/**
 * @class cGcCreatureInfo
 */
class cGcCreatureInfo
{
  public:
    enum
    {
        ClassNameHash = 0xE85F02E30BDAB35D,
    };

    inline cGcCreatureInfo() {}
    cGcCreatureInfo* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eAge Age;
            cTkFixedString<128,char> macGender1;
            cTkFixedString<128,char> macGender2;
            cTkFixedString<128,char> macTemperament;
            cTkFixedString<128,char> macDiet;
            cTkFixedString<128,char> macWeight1;
            cTkFixedString<128,char> macHeight1;
            cTkFixedString<128,char> macWeight2;
            cTkFixedString<128,char> macHeight2;
            float mfWeight1;
            float mfHeight1;
            float mfWeight2;
            float mfHeight2;
            cTkFixedString<128,char> macNotes;
            cGcRarity Rarity;
            TkID<256> mBiomeDesc;
            TkID<256> mTempermentDesc;
            TkID<256> mDietDesc;
            TkID<256> mNotesDesc;
        };
    };
};

SKYSCRAPER_END
