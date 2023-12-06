/**
 * @file gcbasebuildingpartaudiolocationentry.meta.h
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
#include <audio/gcbasepartaudiolocation.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcBaseBuildingPartAudioLocationEntry
 */
class cGcBaseBuildingPartAudioLocationEntry : cTkMetaData::Registrar<cGcBaseBuildingPartAudioLocationEntry>, cTkMetaDataXML::Registrar<cGcBaseBuildingPartAudioLocationEntry>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xD7DAD354CC760BEE,
    };
    enum
    {
        mu64TemplateHash = 0xF59BD607E75A9055,
    };

    TkID<128> mPartId;
    cGcBasePartAudioLocation AudioLocation;
};

SKYSCRAPER_END
