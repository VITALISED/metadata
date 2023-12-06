/**
 * @file gccreatureroles.meta.h
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
 * @enum eCreatureRole
 */
enum eCreatureRole : uint32_t
{
    ECreatureRole_None = 0,
    ECreatureRole_Predator = 1,
    ECreatureRole_PlayerPredator = 2,
    ECreatureRole_Prey = 3,
    ECreatureRole_Passive = 4,
    ECreatureRole_Bird = 5,
    ECreatureRole_FishPrey = 6,
    ECreatureRole_FishPredator = 7,
    ECreatureRole_Butterfly = 8,
    ECreatureRole_Robot = 9,
    ECreatureRole_Pet = 10,
};

/**
 * @class cGcCreatureRoles
 */
class cGcCreatureRoles : cTkMetaData::Registrar<cGcCreatureRoles>, cTkMetaDataXML::Registrar<cGcCreatureRoles>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xA8AB3ECD5F81E80C,
    };
    enum
    {
        mu64TemplateHash = 0xEAA141147D899B8,
    };

    eCreatureRole CreatureRole;
};

SKYSCRAPER_END
