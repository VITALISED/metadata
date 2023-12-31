/**
 * @file gcrewardtable.meta.h
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
#include <reality/gcgenericrewardtableentry.meta.h>
#include <reality/reward/gcrewardtableentitlementitem.meta.h>
#include <reality/gcrewardtableentry.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcRewardTable
 */
class cGcRewardTable
{
  public:
    enum
    {
        ClassNameHash = 0x2ECD4E3663FDB26F,
    };

    inline cGcRewardTable() {}
    cGcRewardTable* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkDynamicArray<cGcGenericRewardTableEntry> maGenericTable;
            cTkDynamicArray<cGcGenericRewardTableEntry> maDestructionTable;
            cTkDynamicArray<cGcGenericRewardTableEntry> maInteractionTable;
            cTkDynamicArray<cGcGenericRewardTableEntry> maOldInteractionTable;
            cTkDynamicArray<cGcGenericRewardTableEntry> maSpecialRewardTable;
            cTkDynamicArray<cGcGenericRewardTableEntry> maMissionBoardTable;
            cTkDynamicArray<cGcGenericRewardTableEntry> maFleetTable;
            cTkDynamicArray<cGcGenericRewardTableEntry> maWikiProgressTable;
            cTkDynamicArray<cGcGenericRewardTableEntry> maShipSalvageTable;
            cTkDynamicArray<cGcRewardTableEntitlementItem> maEntitlementTable;
            cTkDynamicArray<cGcRewardTableEntry> maTable;
            cTkDynamicArray<TkID<128>> maTechRewardOrder;
            cTkDynamicArray<TkID<128>> maProductRewardOrder;
            cTkDynamicArray<cGcGenericRewardTableEntry> maMixerRewardTable;
            cTkDynamicArray<cGcGenericRewardTableEntry> maTwitchRewardTable;
            cTkDynamicArray<cGcGenericRewardTableEntry> maNPCPlanetSiteTable;
            cTkDynamicArray<cGcGenericRewardTableEntry> maSettlementTable;
            cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable1;
            cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable2;
            cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable3;
            cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable4;
            cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable5;
            cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable6;
            cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable7;
            cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable8;
            cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable9;
            cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable10;
            cTkDynamicArray<cGcGenericRewardTableEntry> maSeasonRewardTable11;
        };
    };
};

SKYSCRAPER_END
