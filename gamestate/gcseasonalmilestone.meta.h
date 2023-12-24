/**
 * @file gcseasonalmilestone.meta.h
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
#include <toolkit/tktextureresource.meta.h>
#include <gamestate/gcseasonalmilestoneencryption.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcSeasonalMilestone
 */
class cGcSeasonalMilestone
{
  public:
    enum
    {
        ClassNameHash = 0x4EDC167332F6B824,
    };

    inline cGcSeasonalMilestone() {}
    cGcSeasonalMilestone* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            TkID<128> mMission;
            TkID<256> mTitle;
            TkID<256> mTitleUpper;
            TkID<256> mDescription;
            TkID<256> mDescriptionDone;
            TkID<256> mCantRewardMessage;
            TkID<128> mIdToUseInMissionData;
            float mfAmount;
            int miStageIndex;
            int miMilestoneIndex;
            int miRendezvousIndex;
            cTkTextureResource Icon;
            cTkTextureResource IconGrey;
            cTkTextureResource MissionIcon;
            cTkTextureResource MissionIconSelected;
            cTkTextureResource MissionIconNotSelected;
            TkID<128> mReward;
            TkID<128> mRewardSwitchAlt;
            cTkFixedString<512,char> macRewardDescription;
            cTkFixedString<512,char> macCantClaimRewardDescription;
            bool mbIsOptional;
            bool mbIsRendezvous;
            bool mbIsStageControl;
            cGcSeasonalMilestoneEncryption Encryption;
        };
    };
};

SKYSCRAPER_END
