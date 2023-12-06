/**
 * @file gcbaseminiportalcomponentdata.meta.h
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
 * @enum eDestinationSortType
 */
enum eDestinationSortType : uint32_t
{
    EDestinationSortType_NearestPotal = 0,
    EDestinationSortType_BaseBuildingConnection = 1,
    EDestinationSortType_AbandonedFreighter = 2,
    EDestinationSortType_PortalNearestPlayerShip = 3,
};

/**
 * @class cGcBaseMiniPortalComponentData
 */
class cGcBaseMiniPortalComponentData : cTkMetaData::Registrar<cGcBaseMiniPortalComponentData>, cTkMetaDataXML::Registrar<cGcBaseMiniPortalComponentData>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xBBBD45634207B79F,
    };
    enum
    {
        mu64TemplateHash = 0x6B51F3B80FECAB80,
    };

    bool mbAllowVehicles;
    bool mbAllowSpawnedObjects;
    bool mbFlipFacingDirection;
    bool mbSnapFacingDirection;
    float mfSnapFacingAngle;
    bool mbDoPlayerEffects;
    bool mbTeleportCamera;
    int miPowerCost;
    TkID<128> mGroupID;
    TkID<128> mDestinationGroupID;
    eDestinationSortType DestinationSortType;
};

SKYSCRAPER_END
