/**
 * @file gcrewardscanevent.meta.h
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
 * @enum eScanEventTable
 */
enum eScanEventTable : uint32_t
{
    EScanEventTable_Space = 0,
    EScanEventTable_Planet = 1,
    EScanEventTable_Missions = 2,
    EScanEventTable_Tutorial = 3,
    EScanEventTable_MissionsCreative = 4,
    EScanEventTable_NPCPlanetSite = 5,
};

/**
 * @class cGcRewardScanEvent
 */
class cGcRewardScanEvent : cTkMetaData::Registrar<cGcRewardScanEvent>, cTkMetaDataXML::Registrar<cGcRewardScanEvent>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xD6D2BF5DDCCD9F49,
    };
    enum
    {
        mu64TemplateHash = 0x1AB044C825466554,
    };

    TkID<256> mEvent;
    eScanEventTable ScanEventTable;
    bool mbDoAerialScan;
    bool mbUseMissionSeedForEvent;
    float mfStartDelay;
    bool mbUseStartDelayWhenNoAerialScan;
};

SKYSCRAPER_END
