/**
 * @file gcdestructablecomponentdata.meta.h
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
#include <simulation/environment/gcsubstanceamount.meta.h>
#include <reality/gcstatsenum.meta.h>
#include <reality/gcrewardmissionoverride.meta.h>
#include <toolkit/tkmodelresource.meta.h>
#include <simulation/components/utils/gclootprobability.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcDestructableComponentData
 */
class cGcDestructableComponentData : cTkMetaData::Registrar<cGcDestructableComponentData>, cTkMetaDataXML::Registrar<cGcDestructableComponentData>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xE24B3D78ED0634BD,
    };
    enum
    {
        mu64TemplateHash = 0x1A7644BF35CD170,
    };

    TkID<128> mExplosion;
    float mfExplosionScale;
    bool mbExplosionScaleToBounds;
    bool mbOnlyExplodeSelf;
    TkID<128> mVehicleDestroyEffect;
    TkID<128> mTriggerAction;
    int miIncreaseWanted;
    bool mbIncreaseFiendWanted;
    float mfIncreaseFiendWantedChance;
    bool mbNotifyEncounter;
    TkID<128> mLootReward;
    int miLootRewardAmountMin;
    int miLootRewardAmountMax;
    bool mbCanDestroyFromStoredInteraction;
    cTkDynamicArray<cGcSubstanceAmount> maGivesSubstances;
    cGcStatsEnum StatToTrack;
    TkID<128> mGivesReward;
    TkID<128> mPirateSystemAltReward;
    bool mbRewardIfDestroyedByOther;
    bool mbHideReward;
    TkID<256> mOverrideRewardLoc;
    cTkDynamicArray<cGcRewardMissionOverride> maRewardOverrideTable;
    bool mbActivateLocatorsFromRarity;
    cTkFixedArray<TkID<128>, 3> maRarityLocators;
    bool mbUseSystemColorsForTexture;
    bool mbRemoveModel;
    bool mbHideModel;
    cTkModelResource DestroyedModel;
    bool mbDestroyedModelUsesScale;
    bool mbDestroyedModelCollidesWithEverything;
    float mfDestroyForce;
    float mfDestroyForceRadius;
    TkID<128> mDestroyEffect;
    bool mbDestroyEffectOnSurface;
    TkID<128> mDestroyEffectPoint;
    float mfDestroyEffectTime;
    bool mbDestroyEffectMatrices;
    TkID<128> mAreaDamage;
    bool mbShowInteract;
    bool mbHideInteractWhenAllArmourDestroyed;
    float mfShowInteractRange;
    bool mbGrenadeSingleHit;
    cTkDynamicArray<cGcLootProbability> maLootItems;
};

SKYSCRAPER_END
