/**
 * @file gcstatusmessagemissionmarkup.meta.h
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

SKYSCRAPER_BEGIN

/**
 * @enum eMissionMarkup
 */
enum eMissionMarkup : uint32_t
{
    EMissionMarkup_KillFiend = 0,
    EMissionMarkup_KillPirate = 1,
    EMissionMarkup_KillSentinel = 2,
    EMissionMarkup_KillHazardousPlants = 3,
    EMissionMarkup_KillTraders = 4,
    EMissionMarkup_KillCreatures = 5,
    EMissionMarkup_KillPredators = 6,
    EMissionMarkup_KillDepot = 7,
    EMissionMarkup_KillWorms = 8,
    EMissionMarkup_FeedCreature = 9,
    EMissionMarkup_CollectBones = 10,
    EMissionMarkup_CollectScrap = 11,
    EMissionMarkup_Discover = 12,
    EMissionMarkup_CollectSubstanceProduct = 13,
    EMissionMarkup_Build = 14,
    EMissionMarkup_Always = 15,
    EMissionMarkup_None = 16,
};

/**
 * @class cGcStatusMessageMissionMarkup
 */
class cGcStatusMessageMissionMarkup
{
  public:
    enum
    {
        ClassNameHash = 0x8E8EC2C807363E97,
    };

    inline cGcStatusMessageMissionMarkup() {}
    cGcStatusMessageMissionMarkup* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eMissionMarkup MissionMarkup;
        };
    };
};

SKYSCRAPER_END
