/**
 * @file gcrewardinstalltech.meta.h
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
 * @enum eInventoryToInstallIn
 */
enum eInventoryToInstallIn : uint32_t
{
    EInventoryToInstallIn_Personal = 0,
    EInventoryToInstallIn_PersonalTech = 1,
    EInventoryToInstallIn_Ship = 2,
    EInventoryToInstallIn_ShipTech = 3,
    EInventoryToInstallIn_Freighter = 4,
    EInventoryToInstallIn_Vehicle = 5,
    EInventoryToInstallIn_Weapon = 6,
};

/**
 * @class cGcRewardInstallTech
 */
class cGcRewardInstallTech : cTkMetaData::Registrar<cGcRewardInstallTech>, cTkMetaDataXML::Registrar<cGcRewardInstallTech>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x75DF796697F3DB0A,
    };
    enum
    {
        mu64TemplateHash = 0x21F8F59124D39327,
    };

    TkID<128> mTechId;
    eInventoryToInstallIn InventoryToInstallIn;
    bool mbSilent;
    bool mbInstallBroken;
};

SKYSCRAPER_END
