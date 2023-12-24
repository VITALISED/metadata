/**
 * @file gcplayerdamagedata.meta.h
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
#include <audio/gcaudiowwiseevents.meta.h>
#include <reality/gcbreaktechbystatdata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum ePlayerDamageType
 */
enum ePlayerDamageType : uint32_t
{
    EPlayerDamageType_Normal = 0,
    EPlayerDamageType_Toxic = 1,
    EPlayerDamageType_Radioactive = 2,
    EPlayerDamageType_Freeze = 3,
    EPlayerDamageType_Scorch = 4,
};

/**
 * @class cGcPlayerDamageData
 */
class cGcPlayerDamageData
{
  public:
    enum
    {
        ClassNameHash = 0x5F9BF82F9925D932,
    };

    inline cGcPlayerDamageData() {}
    cGcPlayerDamageData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            TkID<128> mId;
            TkID<256> mDeathMessage;
            TkID<128> mDeathStat;
            cTkTextureResource HitIcon;
            TkID<256> mHitChatMessage;
            TkID<256> mHitMessage;
            cGcAudioWwiseEvents HitMessageAudio;
            TkID<256> mCriticalHitMessage;
            cGcAudioWwiseEvents CriticalHitMessageAudio;
            float mfDamage;
            float mfPushForce;
            float mfCameraTurn;
            TkID<128> mCameraShakeShield;
            TkID<128> mCameraShakeNoShield;
            bool mbShowTrackIcon;
            bool mbForceDamageInInteraction;
            bool mbAllowDeathInInteraction;
            ePlayerDamageType PlayerDamageType;
            cTkDynamicArray<cGcBreakTechByStatData> maDamageTechWithStat;
            float mfTechDamageChance;
        };
    };
};

SKYSCRAPER_END
