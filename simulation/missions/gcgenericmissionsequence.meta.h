/**
 * @file gcgenericmissionsequence.meta.h
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
#include <reality/gcnumberedtextlist.meta.h>
#include <toolkit/tktextureresource.meta.h>
#include <simulation/missions/types/gcmissioncategory.meta.h>
#include <simulation/missions/types/gcmissionpagehint.meta.h>
#include <simulation/missions/defaultmissionitems/gcdefaultmissionitemstable.meta.h>
#include <simulation/missions/gcmissionboardoptions.meta.h>
#include <reality/gcalienpuzzletable.meta.h>
#include <simulation/gcscaneventdata.meta.h>
#include <reality/gcgenericrewardtableentry.meta.h>
#include <reality/gccosttableentry.meta.h>
#include <reality/gctradedata.meta.h>
#include <simulation/missions/types/gcmissionconditiontest.meta.h>
#include <simulation/missions/gcgenericmissionversionprogress.meta.h>
#include <simulation/missions/gcgenericmissionstage.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eMissionClass
 */
enum eMissionClass : uint32_t
{
    EMissionClass_Primary = 0,
    EMissionClass_Secondary = 1,
    EMissionClass_ChainedSecondary = 2,
    EMissionClass_Guide = 3,
    EMissionClass_Wiki = 4,
    EMissionClass_Seasonal = 5,
    EMissionClass_Milestone = 6,
};

/**
 * @enum eMessageComplete
 */
enum eMessageComplete : uint32_t
{
    EMessageComplete_Default = 0,
    EMessageComplete_Always = 1,
    EMessageComplete_Never = 2,
};

/**
 * @enum eMessageStart
 */
enum eMessageStart : uint32_t
{
    EMessageStart_Default = 0,
    EMessageStart_Always = 1,
    EMessageStart_Never = 2,
};

/**
 * @enum eAutoStart
 */
enum eAutoStart : uint32_t
{
    EAutoStart_None = 0,
    EAutoStart_AllModes = 1,
    EAutoStart_Seasonal = 2,
    EAutoStart_OnSelected = 3,
};

/**
 * @class cGcGenericMissionSequence
 */
class cGcGenericMissionSequence
{
  public:
    enum
    {
        ClassNameHash = 0xFAE86B2801335B6D,
    };

    inline cGcGenericMissionSequence() {}
    cGcGenericMissionSequence* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            TkID<128> mMissionID;
            eMissionClass MissionClass;
            bool mbMissionIsCritical;
            cTkFixedString<32,char> macMissionObjective;
            cGcNumberedTextList MissionTitles;
            cGcNumberedTextList MissionSubtitles;
            cGcNumberedTextList MissionDescriptions;
            cTkFixedString<32,char> macMissionDescSwitchOverride;
            cGcNumberedTextList MissionProcDescriptionHeader;
            cGcNumberedTextList MissionProcDescriptionA;
            cGcNumberedTextList MissionProcDescriptionB;
            cGcNumberedTextList MissionProcDescriptionC;
            bool mbUseScanEventDetailsInLogInfo;
            cTkTextureResource MissionIcon;
            cTkTextureResource MissionIconSelected;
            cTkTextureResource MissionIconNotSelected;
            int miMissionPriority;
            cGcMissionCategory MissionCategory;
            cGcMissionPageHint MissionPageHint;
            TkID<256> mMissionPageLocID;
            TkID<128> mMissionBuildMenuHint;
            bool mbMissionHasColourOverride;
            cTkColour mMissionColourOverride;
            int miBeginCheckFrequency;
            cGcDefaultMissionItemsTable DefaultItems;
            bool mbPrefixTitle;
            TkID<128> mNextMissionHint;
            eMessageComplete MessageComplete;
            eMessageStart MessageStart;
            cGcMissionBoardOptions MissionBoardOptions;
            eAutoStart AutoStart;
            bool mbRestartOnCompletion;
            bool mbCancelSetsComplete;
            cGcAlienPuzzleTable Dialog;
            cTkDynamicArray<cGcScanEventData> maScanEvents;
            cTkDynamicArray<cGcGenericRewardTableEntry> maRewards;
            cTkDynamicArray<cGcCostTableEntry> maCosts;
            cGcTradeData TradingDataOverride;
            cGcMissionConditionTest StartConditionTest;
            cGcMissionConditionTest CancelConditionTest;
            bool mbStartIsCancel;
            cTkDynamicArray<cTkClassPointer> maStartingConditions;
            cTkDynamicArray<cTkClassPointer> maCancelingConditions;
            cTkDynamicArray<cGcGenericMissionVersionProgress> maFinalStageVersions;
            cTkDynamicArray<cGcGenericMissionStage> maStages;
            bool mbForcesPageHint;
            bool mbForcesBuildMenuHint;
            bool mbIsProceduralAllowed;
            bool mbIsRecurring;
            bool mbIsLegacy;
            bool mbBlocksPinning;
            bool mbCanRenounce;
            TkID<128> mUseCommunityMissionForLog;
            bool mbTelemetryUpload;
            bool mbUseSeasonTitleOverride;
        };
    };
};

SKYSCRAPER_END
