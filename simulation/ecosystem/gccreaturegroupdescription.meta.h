/**
 * @file gccreaturegroupdescription.meta.h
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
 * @class cGcCreatureGroupDescription
 */
class cGcCreatureGroupDescription : cTkMetaData::Registrar<cGcCreatureGroupDescription>, cTkMetaDataXML::Registrar<cGcCreatureGroupDescription>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x3F92E065272FE2A9,
    };
    enum
    {
        mu64TemplateHash = 0xB8ABC40066F421C3,
    };

    TkID<128> mGroup;
    int miMinGroupSize;
    int miMaxGroupSize;
    float mfGroupsPerSquareKm;
};

SKYSCRAPER_END
