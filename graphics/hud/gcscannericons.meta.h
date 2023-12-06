/**
 * @file gcscannericons.meta.h
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
#include <graphics/hud/gcscannericon.meta.h>
#include <toolkit/tktextureresource.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcScannerIcons
 */
class cGcScannerIcons : cTkMetaData::Registrar<cGcScannerIcons>, cTkMetaDataXML::Registrar<cGcScannerIcons>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x392CEA8FE98D0F4,
    };
    enum
    {
        mu64TemplateHash = 0x136B9B1D27C723B6,
    };

    cGcScannerIcon TaggedBuilding;
    cGcScannerIcon Ship;
    cGcScannerIcon Vehicle;
    cGcScannerIcon Freighter;
    cGcScannerIcon FreighterBase;
    cGcScannerIcon PlayerFreighter;
    cGcScannerIcon DamagedFrigate;
    cGcScannerIcon PurchasableFrigate;
    cGcScannerIcon Expedition;
    cGcScannerIcon PlayerBase;
    cGcScannerIcon EditingBase;
    cGcScannerIcon Death;
    cGcScannerIcon Bounty1;
    cGcScannerIcon Bounty2;
    cGcScannerIcon Bounty3;
    cGcScannerIcon Battle;
    cGcScannerIcon ShipSmall;
    cGcScannerIcon DeathSmall;
    cGcScannerIcon BountySmall;
    cGcScannerIcon BattleSmall;
    cGcScannerIcon TimedEvent;
    cGcScannerIcon Checkpoint;
    cGcScannerIcon Garage;
    cGcScannerIcon NPC;
    cGcScannerIcon SettlementNPC;
    cGcScannerIcon CircleAnimation;
    cGcScannerIcon HexAnimation;
    cGcScannerIcon DiamondAnimation;
    cGcScannerIcon ArrowSmall;
    cGcScannerIcon ArrowLarge;
    cTkFixedArray<cGcScannerIcon, 6> maGenericIcons;
    cTkFixedArray<cGcScannerIcon, 33> maBuildingIcons;
    cTkFixedArray<cGcScannerIcon, 33> maBuildingIconsBinocs;
    cTkFixedArray<cGcScannerIcon, 33> maBuildingIconsHuge;
    cTkFixedArray<cGcScannerIcon, 54> maScannableIcons;
    cTkFixedArray<cGcScannerIcon, 54> maScannableIconsBinocs;
    cTkFixedArray<cTkColour, 54> maScannableColours;
    cTkColour mBuildingColour;
    cTkColour mGenericColour;
    cTkColour mRelicColour;
    cTkColour mSignalColour;
    cTkColour mUnknownColour;
    cGcScannerIcon CreatureDiscovered;
    cGcScannerIcon CreatureUndiscovered;
    cGcScannerIcon CreatureUnknown;
    cGcScannerIcon MessageBeacon;
    cGcScannerIcon MessageBeaconSmall;
    cGcScannerIcon BaseBuildingMarker;
    cGcScannerIcon PlanetPoleNorth;
    cGcScannerIcon PlanetPoleSouth;
    cGcScannerIcon MonumentMarker;
    cGcScannerIcon NetworkPlayerMarker;
    cGcScannerIcon NetworkPlayerMarkerShip;
    cGcScannerIcon NetworkPlayerMarkerVehicle;
    cTkFixedArray<cGcScannerIcon, 4> maNetworkFSPlayerMarkers;
    cTkFixedArray<cGcScannerIcon, 4> maNetworkFSPlayerMarkersShip;
    cTkFixedArray<cTkColour, 4> maNetworkFSPlayerColours;
    cTkFixedArray<cGcScannerIcon, 4> maNetworkPlayerFreighter;
    cGcScannerIcon PortalMarker;
    cGcScannerIcon BlackHole;
    cGcScannerIcon CreatureCurious;
    cGcScannerIcon CreatureAction;
    cGcScannerIcon CreatureTame;
    cGcScannerIcon CreatureDanger;
    cGcScannerIcon CreatureFiend;
    cGcScannerIcon CreatureMilk;
    cTkFixedArray<cTkTextureResource, 5> maHighlightIcons;
    cGcScannerIcon MissionEnterOrbit;
    cGcScannerIcon MissionEnterBuilding;
    cGcScannerIcon MissionEnterStation;
    cGcScannerIcon MissionEnterFreighter;
    cGcScannerIcon MissionAbandonedFreighter;
    cGcScannerIcon CreatureInteraction;
    cGcScannerIcon PetInteraction;
    cGcScannerIcon Pet;
    cGcScannerIcon PetSad;
    cGcScannerIcon PetActivity;
    cGcScannerIcon PlayerSettlement;
    cGcScannerIcon OtherPlayerSettlement;
    cGcScannerIcon FriendlyDrone;
    cGcScannerIcon PirateRaid;
    cGcScannerIcon FuelAsteroid;
};

SKYSCRAPER_END