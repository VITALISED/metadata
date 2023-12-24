/**
 * @file gcwfcbuilding.meta.h
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
#include <simulation/environment/wfcbuildings/gcmoduleoverride.meta.h>
#include <simulation/environment/wfcbuildings/gcminimumuseconstraint.meta.h>
#include <simulation/environment/wfcbuildings/gcweightedresource.meta.h>
#include <simulation/environment/wfcbuildings/gcweightedbuildingsize.meta.h>
#include <gamestate/basebuilding/gcbasebuildingpartstyle.meta.h>
#include <simulation/environment/wfcbuildings/gcfreighterbaseroom.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcWFCBuilding
 */
class cGcWFCBuilding
{
  public:
    enum
    {
        ClassNameHash = 0x42C648ED396E4B44,
    };

    inline cGcWFCBuilding() {}
    cGcWFCBuilding* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkFixedString<32,char> macName;
            cTkFixedString<128,char> macModuleSet;
            cTkFixedArray<cTkFixedString<128,char>, 2> maDecoration;
            bool mbImprovedCoherence;
            bool mbRequireNoUnreachableRooms;
            float mfInitialUnlockProbability;
            bool mbDontSpawnNearPlayerBases;
            bool mbRemoveUnreachableBlocks;
            cTkDynamicArray<TkID<128>> maGroupsEnabled;
            cTkDynamicArray<cGcModuleOverride> maModuleOverrides;
            cTkDynamicArray<cGcMinimumUseConstraint> maMinimumUseConstraints;
            cTkDynamicArray<TkID<128>> maNPCs;
            cTkDynamicArray<cGcWeightedResource> maLayouts;
            cTkDynamicArray<cGcWeightedBuildingSize> maSizes;
            cTkDynamicArray<long long> maFallbackSeeds;
            cTkDynamicArray<long long> maPresetFallbackSeeds;
            int miNumberOfPresetsPerPlanet;
            cGcBaseBuildingPartStyle ReplaceMaterials;
            cTkDynamicArray<cGcFreighterBaseRoom> maRooms;
        };
    };
};

SKYSCRAPER_END
