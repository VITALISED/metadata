/**
 * @file gcinventoryfilteroptions.meta.h
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
 * @enum eInventoryFilter
 */
enum eInventoryFilter : uint32_t
{
    EInventoryFilter_All = 0,
    EInventoryFilter_Substance = 1,
    EInventoryFilter_HighValue = 2,
    EInventoryFilter_Consumable = 3,
    EInventoryFilter_Deployable = 4,
};

/**
 * @class cGcInventoryFilterOptions
 */
class cGcInventoryFilterOptions : cTkMetaData::Registrar<cGcInventoryFilterOptions>, cTkMetaDataXML::Registrar<cGcInventoryFilterOptions>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x150B7D498E249B47,
    };
    enum
    {
        mu64TemplateHash = 0x49AD1545EF62E0F9,
    };

    eInventoryFilter InventoryFilter;
};

SKYSCRAPER_END
