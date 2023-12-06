/**
 * @file gctechnologyrarity.meta.h
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

SKYSCRAPER_BEGIN

/**
 * @enum eTechnologyRarity
 */
enum eTechnologyRarity : uint32_t
{
    ETechnologyRarity_Normal = 0,
    ETechnologyRarity_VeryCommon = 1,
    ETechnologyRarity_Common = 2,
    ETechnologyRarity_Rare = 3,
    ETechnologyRarity_VeryRare = 4,
    ETechnologyRarity_Impossible = 5,
    ETechnologyRarity_Always = 6,
};

/**
 * @class cGcTechnologyRarity
 */
class cGcTechnologyRarity : cTkMetaData::Registrar<cGcTechnologyRarity>, cTkMetaDataXML::Registrar<cGcTechnologyRarity>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xDB3D22C1C68F20C3,
    };
    enum
    {
        mu64TemplateHash = 0x39B9A7A9078A0304,
    };

    eTechnologyRarity TechnologyRarity;
};

SKYSCRAPER_END
