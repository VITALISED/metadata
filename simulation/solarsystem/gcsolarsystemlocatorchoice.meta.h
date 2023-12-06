/**
 * @file gcsolarsystemlocatorchoice.meta.h
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
#include <simulation/solarsystem/gcsolarsystemlocatortypes.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eChoice
 */
enum eChoice : uint32_t
{
    EChoice_LookupName = 0,
    EChoice_AnyOfType = 1,
    EChoice_SpecificIndex = 2,
    EChoice_InFrontOfPlayer = 3,
};

/**
 * @class cGcSolarSystemLocatorChoice
 */
class cGcSolarSystemLocatorChoice : cTkMetaData::Registrar<cGcSolarSystemLocatorChoice>, cTkMetaDataXML::Registrar<cGcSolarSystemLocatorChoice>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x84B1F1D780A31A2A,
    };
    enum
    {
        mu64TemplateHash = 0xFCC48A5DDF4D778C,
    };

    eChoice Choice;
    cTkFixedString<32,char> macName;
    cGcSolarSystemLocatorTypes Type;
    int miIndex;
};

SKYSCRAPER_END
