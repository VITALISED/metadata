/**
 * @file gccreaturevocalsounddata.meta.h
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

SKYSCRAPER_BEGIN

/**
 * @enum eVocalEmote
 */
enum eVocalEmote : uint32_t
{
    EVocalEmote_EmoteIdle = 0,
    EVocalEmote_EmoteFlee = 1,
    EVocalEmote_EmoteAggression = 2,
    EVocalEmote_EmoteRoar = 3,
    EVocalEmote_EmotePain = 4,
    EVocalEmote_EmoteAttack = 5,
    EVocalEmote_EmoteDie = 6,
    EVocalEmote_EmoteMiniRoarNeutral = 7,
    EVocalEmote_EmoteMiniRoarHappy = 8,
    EVocalEmote_EmoteMiniRoarAngry = 9,
};

/**
 * @class cGcCreatureVocalSoundData
 */
class cGcCreatureVocalSoundData
{
  public:
    enum
    {
        ClassNameHash = 0x7FE7156AA587561F,
    };

    inline cGcCreatureVocalSoundData() {}
    cGcCreatureVocalSoundData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            TkID<128> mId;
            eVocalEmote VocalEmote;
            float mfPlayFrequency;
            float mfMinCooldown;
            float mfMaxCooldown;
            bool mbPlayImmediately;
            bool mbPlayOnlyOnce;
        };
    };
};

SKYSCRAPER_END
