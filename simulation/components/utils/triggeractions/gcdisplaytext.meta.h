/**
 * @file gcdisplaytext.meta.h
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
#include <reality/gcalienrace.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eHUDTextDisplayType
 */
enum eHUDTextDisplayType : uint32_t
{
    EHUDTextDisplayType_Full = 0,
    EHUDTextDisplayType_Compact = 1,
    EHUDTextDisplayType_EyeLevel = 2,
    EHUDTextDisplayType_Prompt = 3,
    EHUDTextDisplayType_Tooltip = 4,
};

/**
 * @class cGcDisplayText
 */
class cGcDisplayText : cTkMetaData::Registrar<cGcDisplayText>, cTkMetaDataXML::Registrar<cGcDisplayText>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x39E3C3DE16466069,
    };
    enum
    {
        mu64TemplateHash = 0xD668510B347FF09D,
    };

    eHUDTextDisplayType HUDTextDisplayType;
    cTkFixedString<256,char> macTitle;
    cTkFixedString<256,char> macSubtitle1;
    cTkFixedString<256,char> macSubtitle2;
    cGcAlienRace UseAlienLanguage;
    cTkDynamicArray<TkID<256>> maChooseRandomTextOptions;
};

SKYSCRAPER_END
