/**
 * @file gcseasonalgamemodedata.meta.h
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
#include <gamestate/gcgamemode.meta.h>
#include <user/gcdifficultypresettype.meta.h>
#include <user/gcdifficultysettingsdata.meta.h>
#include <toolkit/tktextureresource.meta.h>
#include <simulation/gcspaceshipclasses.meta.h>
#include <reality/gcalienrace.meta.h>
#include <simulation/environment/gcbuildingclassification.meta.h>
#include <gamestate/gcinventorylayout.meta.h>
#include <gamestate/gcinventorycontainer.meta.h>
#include <gamestate/gcseasonpetconstraints.meta.h>
#include <gamestate/gcpetdata.meta.h>
#include <simulation/ecosystem/gcsandwormtimerandfrequencyoverride.meta.h>
#include <gamestate/gcseasonalstage.meta.h>
#include <simulation/gcscaneventtable.meta.h>
#include <gamestate/gcpersistedstatdata.meta.h>
#include <reality/gctechnology.meta.h>
#include <reality/gcproductdata.meta.h>
#include <reality/gcrealitysubstancedata.meta.h>
#include <reality/gctradedata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcSeasonalGameModeData
 */
class cGcSeasonalGameModeData
{
  public:
    enum
    {
        ClassNameHash = 0xFD6B0BE30E218605,
    };

    inline cGcSeasonalGameModeData() {}
    cGcSeasonalGameModeData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            int miSeasonId;
            unsigned long long mui64StartTimeUTC;
            unsigned long long mui64EndTimeUTC;
            unsigned long long mui64Hash;
            cTkFixedString<32,char> macTitle;
            cTkFixedString<32,char> macSubtitle;
            cTkFixedString<32,char> macDescription;
            TkID<256> mFinalStageTitle;
            TkID<256> mMilestoneWithStageLocId;
            cGcGameMode GameMode;
            cGcDifficultyPresetType DifficultySettingPreset;
            cGcDifficultySettingsData DifficultyMinimums;
            cTkFixedString<32,char> macSeasonalUAOverride;
            unsigned long long mui64UAOverrideValue;
            TkID<128> mFinalReward;
            TkID<128> mFinalRewardSwitchAlt;
            TkID<256> mFinalCantRewardMessage;
            cTkFixedString<512,char> macFinalRewardDescription;
            cTkTextureResource MainIcon;
            int miSeasonNumber;
            int miRemixNumber;
            int miDisplayNumber;
            TkID<256> mSeasonName;
            TkID<256> mSeasonNameUpper;
            TkID<256> mMainMissionTitle;
            TkID<256> mMainMissionMessage;
            bool mbDoCommunityMissionTextSubstitutions;
            bool mbDefaultToPvPOff;
            bool mbMustCraftInBases;
            cTkDynamicArray<TkID<128>> maAdditionalTradeProducts;
            cTkDynamicArray<TkID<128>> maNeverTradeProducts;
            int miStartingSuitSlots;
            int miStartingSuitTechSlots;
            int miStartingSuitCargoSlots;
            cTkSeed mWeaponSeed;
            cTkSeed mShipSeed;
            cGcSpaceshipClasses ShipType;
            bool mbStartWithFreighter;
            cTkFixedString<128,char> macFreighterBaseOverrideFilename;
            cGcAlienRace FreighterRace;
            bool mbStartAboardFreighter;
            bool mbForceStartSystemTernary;
            bool mbForceStartSystemAbandoned;
            cTkDynamicArray<cGcBuildingClassification> maValidSpawnBuildings;
            cGcInventoryLayout WeaponInventoryLayout;
            cGcInventoryLayout ShipInventoryLayout;
            cGcInventoryLayout ShipTechInventoryLayout;
            bool mbUseDefaultAppearance;
            cGcInventoryContainer Inventory;
            cGcInventoryContainer Inventory_TechOnly;
            cGcInventoryContainer Inventory_Cargo;
            cGcInventoryContainer ShipInventory;
            cGcInventoryContainer WeaponInventory;
            bool mbUseRandomPet;
            cTkDynamicArray<cGcSeasonPetConstraints> maRandomPetConstraints;
            cTkFixedArray<cGcPetData, 18> maSpecificPets;
            cTkDynamicArray<cGcSandwormTimerAndFrequencyOverride> maSandwormOverrides;
            bool mbSandwormGlobalOverride;
            float mfSandwormGlobalOverrideTimer;
            float mfSandwormGlobalOverrideSpawnChance;
            bool mbStartNextToShip;
            float mfDistanceFromShipAtStartOfGame;
            bool mbShipStartsDamaged;
            bool mbAllowMissionDetailMessages;
            bool mbUseStartPlanetObjectListOverrides;
            TkID<128> mStartPlanetRareSubstanceOverride;
            bool mbTrashInventoryOnGalaxyTravel;
            int miFreighterBattleEarlyWarpsOverride;
            bool mbForceDeepSpaceAmbientFrigatesOnInfested;
            int miTechCostMultiplier;
            cTkDynamicArray<TkID<128>> maNeverLearnableTech;
            cTkDynamicArray<TkID<128>> maForgottenProducts;
            bool mbIncreaseXClassTechOddsWithCommTier;
            float mfAbandonedFreighterHazardProtectionMul;
            float mfHazardProtectionDrainMultiplier;
            float mfEnergyDrainMultiplier;
            int miQuestSubstanceReducer;
            cTkDynamicArray<cGcSeasonalStage> maStages;
            cGcScanEventTable ScanEventTable;
            bool mbResetSaveOnDeath;
            cTkDynamicArray<cGcPersistedStatData> maStatsToPersistOnReset;
            bool mbCompatibleWithState;
            bool mbHasBeenConverted;
            cTkDynamicArray<cGcTechnology> maTechnologyTable;
            cTkDynamicArray<cGcProductData> maProductTable;
            cTkDynamicArray<cGcRealitySubstanceData> maSubstanceTable;
            cGcTradeData SeasonalUAStationTradeData;
            bool mbUseSeasonalUAStationTradeData;
        };
    };
};

SKYSCRAPER_END
