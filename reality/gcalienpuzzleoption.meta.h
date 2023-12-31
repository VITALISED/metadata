/**
 * @file gcalienpuzzleoption.meta.h
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
#include <reality/gcalienmood.meta.h>
#include <simulation/ecosystem/npcs/gcnpcproptype.meta.h>
#include <audio/gcaudiowwiseevents.meta.h>
#include <simulation/missions/types/gcmissionconditiontest.meta.h>
#include <reality/tables/gcwordcategorytableenum.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcAlienPuzzleOption
 */
class cGcAlienPuzzleOption
{
  public:
    enum
    {
        ClassNameHash = 0x3FE862FE8570BE69,
    };

    inline cGcAlienPuzzleOption() {}
    cGcAlienPuzzleOption* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            TkID<256> mName;
            TkID<256> mText;
            bool mbIsAlien;
            TkID<128> mCost;
            cTkDynamicArray<TkID<128>> maRewards;
            cGcAlienMood Mood;
            cGcNPCPropType Prop;
            bool mbOverrideWithAlienWord;
            bool mbReseedInteractionOnUse;
            bool mbKeepOpen;
            bool mbDisplayCost;
            bool mbTruncateCost;
            bool mbMarkInteractionComplete;
            TkID<256> mNextInteraction;
            bool mbSelectedOnBackOut;
            cGcAudioWwiseEvents AudioEvent;
            TkID<256> mTitleOverride;
            cGcMissionConditionTest EnablingConditionTest;
            cTkDynamicArray<cTkClassPointer> maEnablingConditions;
            TkID<256> mEnablingConditionId;
            cgcwordcategorytableEnum WordCategory;
        };
    };
};

SKYSCRAPER_END
