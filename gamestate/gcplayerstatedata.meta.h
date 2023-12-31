/**
 * @file gcplayerstatedata.meta.h
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
#include <gamestate/gcuniverseaddressdata.meta.h>
#include <user/gcdifficultystatedata.meta.h>
#include <gamestate/gcinventorycontainer.meta.h>
#include <gamestate/gcmultitooldata.meta.h>
#include <audio/gcbytebeatlibrarydata.meta.h>
#include <gamestate/gcpetdata.meta.h>
#include <gamestate/gcpetcustomisationdata.meta.h>
#include <gamestate/gcinventorylayout.meta.h>
#include <utilities/data/gcresourceelement.meta.h>
#include <regcexactresource.meta.h>
#include <gamestate/gcwordknowledge.meta.h>
#include <gamestate/gcwordgroupknowledge.meta.h>
#include <gamestate/gcplayermissionprogress.meta.h>
#include <simulation/missions/scheduling/gcmissionidepochpair.meta.h>
#include <gamestate/interactions/gcinteractiondata.meta.h>
#include <simulation/gcscaneventsave.meta.h>
#include <gamestate/stats/gcplayerstatsgroup.meta.h>
#include <gamestate/telemetry/gctelemetrystat.meta.h>
#include <gamestate/interactions/gcinteractionbuffer.meta.h>
#include <gamestate/gcmaintenancecontainer.meta.h>
#include <gamestate/interactions/gcsavedinteractionracedata.meta.h>
#include <gamestate/interactions/gcsavedinteractiondialogdata.meta.h>
#include <gamestate/gcsavedentitlement.meta.h>
#include <gamestate/gcsquadronpilotdata.meta.h>
#include <gamestate/basebuilding/gcpersistentbbobjectdata.meta.h>
#include <gamestate/interactions/gcterraineditsbuffer.meta.h>
#include <gamestate/basebuilding/gcnpcworkerdata.meta.h>
#include <gamestate/basebuilding/gcpersistentbase.meta.h>
#include <gamestate/gcteleportendpoint.meta.h>
#include <gamestate/gcplayerownershipdata.meta.h>
#include <gamestate/gctradingsupplydata.meta.h>
#include <gamestate/gcportalsavedata.meta.h>
#include <simulation/weapons/gcplayerweapons.meta.h>
#include <gamestate/customisation/gccharactercustomisationsavedata.meta.h>
#include <gamestate/customisation/gccharactercustomisationdata.meta.h>
#include <gamestate/gcfleetfrigatesavedata.meta.h>
#include <gamestate/gcfleetexpeditionsavedata.meta.h>
#include <gamestate/gcplayerspawnstatedata.meta.h>
#include <gamestate/gcrepairtechdata.meta.h>
#include <ui/hud/quickmenu/gchotactionssavedata.meta.h>
#include <user/gcphotomodesettings.meta.h>
#include <gamestate/gcseasonalgamemodedata.meta.h>
#include <gamestate/gcseasonstatedata.meta.h>
#include <gamestate/gcsettlementstate.meta.h>
#include <wiki/gcstorypageseendataarray.meta.h>
#include <wiki/gcwonderrecord.meta.h>
#include <wiki/gcwonderrecordcustomdata.meta.h>
#include <gamestate/gcsyncbuffersavedataarray.meta.h>
#include <gamestate/gcmaintenancesavekey.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcPlayerStateData
 */
class cGcPlayerStateData
{
  public:
    enum
    {
        ClassNameHash = 0x6C4510BB243EFA64,
    };

    inline cGcPlayerStateData() {}
    cGcPlayerStateData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cGcUniverseAddressData UniverseAddress;
            cGcUniverseAddressData PreviousUniverseAddress;
            int miHomeRealityIteration;
            cTkFixedString<128,char> macSaveName;
            cTkFixedString<128,char> macSaveSummary;
            cGcDifficultyStateData DifficultyState;
            cGcInventoryContainer Inventory;
            cGcInventoryContainer Inventory_TechOnly;
            cGcInventoryContainer Inventory_Cargo;
            cGcInventoryContainer ShipInventory;
            cGcInventoryContainer WeaponInventory;
            cTkFixedArray<cGcMultitoolData, 6> maMultitools;
            int miActiveMultioolIndex;
            cGcByteBeatLibraryData ByteBeatLibrary;
            cTkFixedArray<cGcPetData, 18> maPets;
            cTkFixedArray<cGcPetData, 18> maEggs;
            cTkFixedArray<cGcPetCustomisationData, 18> maPetAccessoryCustomisation;
            cTkFixedArray<bool, 18> maUnlockedPetSlots;
            cGcInventoryContainer GraveInventory;
            bool mbSpawnGrave;
            bool mbSpaceGrave;
            cGcUniverseAddressData GraveUniverseAddress;
            cTkVector4 mGravePosition;
            cTkVector4 mGraveMatrixLookAt;
            cTkVector4 mGraveMatrixUp;
            cGcInventoryLayout ShipLayout;
            cGcInventoryLayout WeaponLayout;
            cGcResourceElement CurrentShip;
            cGcExactResource CurrentWeapon;
            cTkDynamicArray<TkID<128>> maKnownTech;
            cTkDynamicArray<TkID<128>> maKnownProducts;
            cTkDynamicArray<TkID<128>> maKnownSpecials;
            cTkDynamicArray<TkID<256>> maKnownRefinerRecipes;
            cTkDynamicArray<cGcWordKnowledge> maKnownWords;
            cTkDynamicArray<cGcWordGroupKnowledge> maKnownWordGroups;
            cTkDynamicArray<cGcPlayerMissionProgress> maMissionProgress;
            int miPostMissionIndex;
            TkID<128> mCurrentMissionID;
            unsigned long long mui64CurrentMissionSeed;
            TkID<128> mPreviousMissionID;
            unsigned long long mui64PreviousMissionSeed;
            int miMissionVersion;
            cTkDynamicArray<cGcMissionIDEpochPair> maMissionRecurrences;
            cGcInteractionData HoloExplorerInteraction;
            cGcInteractionData HoloScepticInteraction;
            cGcInteractionData HoloNooneInteraction;
            int miHealth;
            int miShipHealth;
            int miShield;
            int miShipShield;
            int miEnergy;
            int miUnits;
            int miNanites;
            int miSpecials;
            bool mbThirdPersonShip;
            unsigned long long mui64TimeAlive;
            unsigned long long mui64TotalPlayTime;
            cTkDynamicArray<cGcScanEventSave> maMarkerStack;
            cTkDynamicArray<cGcScanEventSave> maNewMPMarkerStack;
            cTkDynamicArray<cTkVector3> maSurveyedEventPositions;
            int miNextSurveyedEventPositionIndex;
            cTkDynamicArray<cGcPlayerStatsGroup> maStats;
            cTkDynamicArray<cGcTelemetryStat> maTelemetryStats;
            cTkFixedArray<cGcInteractionBuffer, 11> maStoredInteractions;
            cTkDynamicArray<cGcMaintenanceContainer> maMaintenanceInteractions;
            cTkDynamicArray<cGcMaintenanceContainer> maPersonalMaintenanceInteractions;
            cTkDynamicArray<unsigned long long> maVisitedSystems;
            cTkFixedArray<float, 6> maHazard;
            int miBoltAmmo;
            int miScatterAmmo;
            int miPulseAmmo;
            int miLaserAmmo;
            cTkVector4 mFirstSpawnPosition;
            cTkFixedArray<cGcSavedInteractionRaceData, 131> maSavedInteractionIndicies;
            cTkDynamicArray<cGcSavedInteractionDialogData> maSavedInteractionDialogTable;
            cTkDynamicArray<TkID<256>> maInteractionProgressTable;
            cTkFixedArray<cGcUniverseAddressData, 10> maAtlasStationAdressData;
            cTkFixedArray<cGcUniverseAddressData, 11> maNewAtlasStationAdressData;
            cTkDynamicArray<cGcUniverseAddressData> maVisitedAtlasStationsData;
            bool mbFirstAtlasStationDiscovered;
            bool mbUsesThirdPersonCharacterCam;
            int miProgressionLevel;
            int miProcTechIndex;
            bool mbIsNew;
            bool mbUseSmallerBlackholeJumps;
            cTkDynamicArray<cGcSavedEntitlement> maUsedEntitlements;
            cTkFixedArray<cTkVector3, 16> maPlanetPositions;
            cTkFixedArray<cTkSeed, 16> maPlanetSeeds;
            int miPrimaryPlanet;
            unsigned long long mui64TimeLastSpaceBattle;
            int miWarpsLastSpaceBattle;
            unsigned long long mui64ActiveSpaceBattleUA;
            unsigned long long mui64TimeLastMiniStation;
            int miWarpsLastMiniStation;
            unsigned long long mui64MiniStationUA;
            cTkVector4 mAnomalyPositionOverride;
            cGcUniverseAddressData GameStartAddress1;
            cGcUniverseAddressData GameStartAddress2;
            cTkFixedArray<bool, 16> maGalacticMapRequests;
            cTkVector4 mFirstShipPosition;
            unsigned long long mui64HazardTimeAlive;
            bool mbRevealBlackHoles;
            cTkSeed mCurrentFreighterHomeSystemSeed;
            cGcResourceElement CurrentFreighter;
            cGcInventoryLayout FreighterLayout;
            cGcInventoryLayout FreighterCargoLayout;
            cGcInventoryContainer FreighterInventory;
            cGcInventoryContainer FreighterInventory_TechOnly;
            cGcInventoryContainer FreighterInventory_Cargo;
            unsigned long long mui64FreighterLastSpawnTime;
            cGcUniverseAddressData FreighterUniverseAddress;
            bool mbFreighterDismissed;
            cTkVector3 mFreighterMatrixAt;
            cTkVector3 mFreighterMatrixUp;
            cTkVector3 mFreighterMatrixPos;
            cTkFixedArray<bool, 4> maSquadronUnlockedPilotSlots;
            cTkFixedArray<cGcSquadronPilotData, 4> maSquadronPilots;
            cTkDynamicArray<TkID<128>> maSeenBaseBuildingObjects;
            cTkDynamicArray<cGcPersistentBBObjectData> maBaseBuildingObjects;
            cGcTerrainEditsBuffer TerrainEditData;
            cTkFixedArray<cGcNPCWorkerData, 5> maNPCWorkers;
            cTkDynamicArray<cGcPersistentBase> maPersistentPlayerBases;
            cTkDynamicArray<cGcTeleportEndpoint> maTeleportEndpoints;
            cGcInventoryLayout Chest1Layout;
            cGcInventoryContainer Chest1Inventory;
            cGcInventoryLayout Chest2Layout;
            cGcInventoryContainer Chest2Inventory;
            cGcInventoryLayout Chest3Layout;
            cGcInventoryContainer Chest3Inventory;
            cGcInventoryLayout Chest4Layout;
            cGcInventoryContainer Chest4Inventory;
            cGcInventoryLayout Chest5Layout;
            cGcInventoryContainer Chest5Inventory;
            cGcInventoryLayout Chest6Layout;
            cGcInventoryContainer Chest6Inventory;
            cGcInventoryLayout Chest7Layout;
            cGcInventoryContainer Chest7Inventory;
            cGcInventoryLayout Chest8Layout;
            cGcInventoryContainer Chest8Inventory;
            cGcInventoryLayout Chest9Layout;
            cGcInventoryContainer Chest9Inventory;
            cGcInventoryLayout Chest10Layout;
            cGcInventoryContainer Chest10Inventory;
            cGcInventoryLayout ChestMagicLayout;
            cGcInventoryContainer ChestMagicInventory;
            cGcInventoryLayout ChestMagic2Layout;
            cGcInventoryContainer ChestMagic2Inventory;
            cGcInventoryLayout CookingIngredientsLayout;
            cGcInventoryContainer CookingIngredientsInventory;
            cGcInventoryLayout RocketLockerLayout;
            cGcInventoryContainer RocketLockerInventory;
            cGcResourceElement CurrentFreighterNPC;
            cTkFixedArray<cGcPlayerOwnershipData, 7> maVehicleOwnership;
            int miPrimaryVehicle;
            cTkFixedArray<cGcPlayerOwnershipData, 12> maShipOwnership;
            int miPrimaryShip;
            bool mbMultiShipEnabled;
            bool mbVehicleAIControlEnabled;
            cTkFixedString<32,char> macPlayerFreighterName;
            cTkVector4 mStartGameShipPosition;
            bool mbShipNeedsTerrainPositioning;
            int miTradingSupplyDataIndex;
            cTkDynamicArray<cGcTradingSupplyData> maTradingSupplyData;
            cTkDynamicArray<cGcPortalSaveData> maLastPortal;
            cGcPortalSaveData VisitedPortal;
            int miKnownPortalRunes;
            bool mbOnOtherSideOfPortal;
            cGcTeleportEndpoint OtherSideOfPortalReturnBase;
            cTkVector4 mPortalMarkerPosition_Local;
            cTkVector4 mPortalMarkerPosition_Offset;
            cGcPlayerWeapons StartingPrimaryWeapon;
            cGcPlayerWeapons StartingSecondaryWeapon;
            cTkFixedArray<cGcCharacterCustomisationSaveData, 23> maCharacterCustomisationData;
            cTkFixedArray<bool, 12> maShipUsesLegacyColours;
            cTkFixedArray<cGcCharacterCustomisationData, 3> maOutfits;
            TkID<128> mJetpackEffect;
            TkID<128> mFreighterEngineEffect;
            cTkSeed mFleetSeed;
            cTkDynamicArray<cGcFleetFrigateSaveData> maFleetFrigates;
            cTkDynamicArray<cGcFleetExpeditionSaveData> maFleetExpeditions;
            cTkDynamicArray<unsigned long long> maExpeditionSeedsSelectedToday;
            unsigned long long mui64LastKnownDay;
            unsigned long long mui64SunTimer;
            unsigned long long mui64MultiplayerLobbyID;
            cGcUniverseAddressData MultiplayerUA;
            cGcPlayerSpawnStateData MultiplayerSpawn;
            cTkDynamicArray<cGcRepairTechData> maRepairTechBuffer;
            unsigned long long mui64MultiplayerPrivileges;
            cTkFixedArray<cGcHotActionsSaveData, 3> maHotActions;
            unsigned long long mui64LastUABeforePortalWarp;
            unsigned long long mui64StoryPortalSeed;
            unsigned short muiShopNumber;
            unsigned short muiShopTier;
            bool mbHasAccessToNexus;
            cGcUniverseAddressData NexusUniverseAddress;
            cTkVector3 mNexusMatrixAt;
            cTkVector3 mNexusMatrixUp;
            cTkVector3 mNexusMatrixPos;
            cGcPhotoModeSettings PhotoModeSettings;
            int miBannerIcon;
            int miBannerMainColour;
            int miBannerBackgroundColour;
            TkID<128> mBannerTitleId;
            int miTelemetryUploadVersion;
            bool mbUsesThirdPersonVehicleCam;
            float mfVRCameraOffset;
            cGcSeasonalGameModeData SeasonData;
            cGcSeasonStateData SeasonState;
            bool mbRestartAllInactiveSeasonalMissions;
            cTkDynamicArray<TkID<128>> maRedeemedSeasonRewards;
            cTkDynamicArray<TkID<128>> maRedeemedTwitchRewards;
            cTkDynamicArray<TkID<128>> maRedeemedPlatformRewards;
            cTkFixedArray<cGcSettlementState, 100> maSettlementStatesV2;
            int miSettlementStateRingBufferIndexV2;
            bool mbNextLoadSpawnsWithFreshStart;
            cTkFixedArray<cGcStoryPageSeenDataArray, 8> maSeenStories;
            cTkFixedArray<cGcWonderRecord, 11> maWonderPlanetRecords;
            cTkFixedArray<cGcWonderRecord, 15> maWonderCreatureRecords;
            cTkFixedArray<cGcWonderRecord, 8> maWonderFloraRecords;
            cTkFixedArray<cGcWonderRecord, 8> maWonderMineralRecords;
            cTkFixedArray<cGcWonderRecord, 13> maWonderTreasureRecords;
            cTkFixedArray<cGcWonderRecord, 11> maWonderWeirdBasePartRecords;
            cTkFixedArray<cGcWonderRecord, 12> maWonderCustomRecords;
            cTkFixedArray<cGcWonderRecordCustomData, 12> maWonderCustomRecordsExtraData;
            cTkFixedArray<cGcSyncBufferSaveDataArray, 4> maSyncBuffersData;
            cTkDynamicArray<cGcMaintenanceSaveKey> maRefinerBufferKeys;
            cTkDynamicArray<cGcMaintenanceContainer> maRefinerBufferData;
        };
    };
};

SKYSCRAPER_END
