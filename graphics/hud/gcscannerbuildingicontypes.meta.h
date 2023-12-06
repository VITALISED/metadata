/**
 * @file gcscannerbuildingicontypes.meta.h
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
 * @enum eScanBuildingIconType
 */
enum eScanBuildingIconType : uint32_t
{
    EScanBuildingIconType_None = 0,
    EScanBuildingIconType_Generic = 1,
    EScanBuildingIconType_Shelter = 2,
    EScanBuildingIconType_Relic = 3,
    EScanBuildingIconType_Factory = 4,
    EScanBuildingIconType_Unknown = 5,
    EScanBuildingIconType_Distress = 6,
    EScanBuildingIconType_Beacon = 7,
    EScanBuildingIconType_Waypoint = 8,
    EScanBuildingIconType_SpaceStation = 9,
    EScanBuildingIconType_TechResource = 10,
    EScanBuildingIconType_FuelResource = 11,
    EScanBuildingIconType_MineralResource = 12,
    EScanBuildingIconType_SpaceAnomaly = 13,
    EScanBuildingIconType_SpaceAtlas = 14,
    EScanBuildingIconType_ExternalBase = 15,
    EScanBuildingIconType_PlanetBaseTerminal = 16,
    EScanBuildingIconType_Nexus = 17,
    EScanBuildingIconType_AbandonedFreighter = 18,
    EScanBuildingIconType_Telescope = 19,
    EScanBuildingIconType_Outpost = 20,
    EScanBuildingIconType_UpgradePod = 21,
    EScanBuildingIconType_Cog = 22,
    EScanBuildingIconType_Ruins = 23,
    EScanBuildingIconType_Portal = 24,
    EScanBuildingIconType_Library = 25,
    EScanBuildingIconType_Abandoned = 26,
    EScanBuildingIconType_SmallBuilding = 27,
    EScanBuildingIconType_StoryGlitch = 28,
    EScanBuildingIconType_GraveInCave = 29,
    EScanBuildingIconType_HoloHub = 30,
    EScanBuildingIconType_Settlement = 31,
    EScanBuildingIconType_DroneHive = 32,
};

/**
 * @class cGcScannerBuildingIconTypes
 */
class cGcScannerBuildingIconTypes : cTkMetaData::Registrar<cGcScannerBuildingIconTypes>, cTkMetaDataXML::Registrar<cGcScannerBuildingIconTypes>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x894C8A7A0498F6C5,
    };
    enum
    {
        mu64TemplateHash = 0xC6F0D71CBBA16147,
    };

    eScanBuildingIconType ScanBuildingIconType;
};

SKYSCRAPER_END