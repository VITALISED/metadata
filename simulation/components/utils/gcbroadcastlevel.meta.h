/**
 * @file gcbroadcastlevel.meta.h
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
 * @enum eBroadcastLevel
 */
enum eBroadcastLevel : uint32_t
{
    EBroadcastLevel_Scene = 0,
    EBroadcastLevel_LocalModel = 1,
    EBroadcastLevel_Local = 2,
};

/**
 * @class cGcBroadcastLevel
 */
class cGcBroadcastLevel : cTkMetaData::Registrar<cGcBroadcastLevel>, cTkMetaDataXML::Registrar<cGcBroadcastLevel>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x788C67D6B87C29E3,
    };
    enum
    {
        mu64TemplateHash = 0x3BCCD8E73F2DF785,
    };

    eBroadcastLevel BroadcastLevel;
};

SKYSCRAPER_END
