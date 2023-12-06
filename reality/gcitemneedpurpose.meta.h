/**
 * @file gcitemneedpurpose.meta.h
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
 * @enum eItemPurpose
 */
enum eItemPurpose : uint32_t
{
    EItemPurpose_None = 0,
    EItemPurpose_Crafting = 1,
    EItemPurpose_Building = 2,
    EItemPurpose_Repairing = 3,
    EItemPurpose_Charging = 4,
    EItemPurpose_Paying = 5,
};

/**
 * @class cGcItemNeedPurpose
 */
class cGcItemNeedPurpose : cTkMetaData::Registrar<cGcItemNeedPurpose>, cTkMetaDataXML::Registrar<cGcItemNeedPurpose>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xE637310E185BAB51,
    };
    enum
    {
        mu64TemplateHash = 0xD494B90ACEB9A99C,
    };

    eItemPurpose ItemPurpose;
};

SKYSCRAPER_END