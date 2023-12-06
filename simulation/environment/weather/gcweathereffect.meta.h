/**
 * @file gcweathereffect.meta.h
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
#include <reality/gcweightedfilename.meta.h>
#include <audio/gcaudiowwiseevents.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eSpawnConditions
 */
enum eSpawnConditions : uint32_t
{
    ESpawnConditions_Anytime = 0,
    ESpawnConditions_DuringStorm = 1,
    ESpawnConditions_AtNight = 2,
    ESpawnConditions_NotInStorm = 3,
    ESpawnConditions_AtNightNotInStorm = 4,
};

/**
 * @enum eWeatherEffectBehaviour
 */
enum eWeatherEffectBehaviour : uint32_t
{
    EWeatherEffectBehaviour_Static = 0,
    EWeatherEffectBehaviour_Wander = 1,
    EWeatherEffectBehaviour_ChasePlayer = 2,
};

/**
 * @enum eWeatherEffectSpawnType
 */
enum eWeatherEffectSpawnType : uint32_t
{
    EWeatherEffectSpawnType_Single = 0,
    EWeatherEffectSpawnType_Cluster = 1,
    EWeatherEffectSpawnType_Patch = 2,
};

/**
 * @class cGcWeatherEffect
 */
class cGcWeatherEffect : cTkMetaData::Registrar<cGcWeatherEffect>, cTkMetaDataXML::Registrar<cGcWeatherEffect>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x419E50F8E497D496,
    };
    enum
    {
        mu64TemplateHash = 0xFBBD7E692B03EE3,
    };

    TkID<128> mId;
    TkID<256> mOSDMessage;
    cTkDynamicArray<cGcWeightedFilename> maEffects;
    eSpawnConditions SpawnConditions;
    int miMaxHazardsOfThisTypeActive;
    TkID<128> mForcedOnByHazard;
    TkID<128> mBlockedByCluster;
    eWeatherEffectBehaviour WeatherEffectBehaviour;
    eWeatherEffectSpawnType WeatherEffectSpawnType;
    bool mbRandomRotationAroundUp;
    float mfMinSpawnScale;
    float mfMaxSpawnScale;
    int miSpawnAttemptsPerRegion;
    float mfSpawnChancePerSecondPerAttempt;
    float mfChanceOfPlanetBeingExtreme;
    float mfSpawnChancePerSecondExtreme;
    float mfMinSpawnDistance;
    float mfMaxSpawnDistance;
    float mfMinLifetime;
    float mfMaxLifetime;
    float mfFadeoutStart;
    bool mbFadeoutVisuals;
    bool mbFadeoutAudio;
    cGcAudioWwiseEvents Audio;
    cTkFixedString<128,char> macImpactGift;
    float mfImpactGiftChance;
    float mfClusterSpawnChance;
    float mfClusterMinLifetime;
    float mfClusterMaxLifetime;
    float mfPatchMaxTimeSpawnOffset;
    float mfPatchMinRadius;
    float mfPatchMaxRadius;
    int miPatchMinSpawns;
    int miPatchMaxSpawns;
    float mfPatchScaling;
    float mfMoveSpeed;
    float mfWanderMinRadius;
    float mfWanderMaxRadius;
    float mfWanderMinArcDeg;
    float mfWanderMaxArcDeg;
    cTkClassPointer mEffectData;
};

SKYSCRAPER_END