/**
 * @file gcinputactions.meta.h
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
 * @enum eInputAction
 */
enum eInputAction : uint32_t
{
    EInputAction_Invalid = 0,
    EInputAction_Player_Forward = 1,
    EInputAction_Player_Back = 2,
    EInputAction_Player_Left = 3,
    EInputAction_Player_Right = 4,
    EInputAction_Player_SwimUp = 5,
    EInputAction_Player_SwimDown = 6,
    EInputAction_Player_Interact = 7,
    EInputAction_Player_Melee = 8,
    EInputAction_Player_Scan = 9,
    EInputAction_Player_Torch = 10,
    EInputAction_Player_Binoculars = 11,
    EInputAction_Player_Zoom = 12,
    EInputAction_Player_ShowHUD = 13,
    EInputAction_Player_Jump = 14,
    EInputAction_Player_Run = 15,
    EInputAction_Player_Shoot = 16,
    EInputAction_Player_Grenade = 17,
    EInputAction_Player_Reload = 18,
    EInputAction_Player_ChangeWeapon = 19,
    EInputAction_Player_Deconstruct = 20,
    EInputAction_Player_ChangeAltWeapon = 21,
    EInputAction_Player_PlaceMarker = 22,
    EInputAction_Quick_Menu = 23,
    EInputAction_Build_Menu = 24,
    EInputAction_Ship_AltLeft = 25,
    EInputAction_Ship_AltRight = 26,
    EInputAction_Ship_Thrust = 27,
    EInputAction_Ship_Brake = 28,
    EInputAction_Ship_Boost = 29,
    EInputAction_Ship_RollLeft = 30,
    EInputAction_Ship_RollRight = 31,
    EInputAction_Ship_Exit = 32,
    EInputAction_Ship_Land = 33,
    EInputAction_Ship_Shoot = 34,
    EInputAction_Ship_ChangeWeapon = 35,
    EInputAction_Ship_Scan = 36,
    EInputAction_Ship_PulseJump = 37,
    EInputAction_Ship_GalacticMap = 38,
    EInputAction_Ship_TurnLeft = 39,
    EInputAction_Ship_TurnRight = 40,
    EInputAction_Ship_FreeLook = 41,
    EInputAction_Ship_AutoFollow_Toggle = 42,
    EInputAction_Ship_AutoFollow_Hold = 43,
    EInputAction_Vehicle_Forward = 44,
    EInputAction_Vehicle_Reverse = 45,
    EInputAction_Vehicle_Left = 46,
    EInputAction_Vehicle_Right = 47,
    EInputAction_Vehicle_Exit = 48,
    EInputAction_Vehicle_Shoot = 49,
    EInputAction_Vehicle_ChangeWeapon = 50,
    EInputAction_Vehicle_Scan = 51,
    EInputAction_Vehicle_Boost = 52,
    EInputAction_Vehicle_Jump = 53,
    EInputAction_Vehicle_Horn = 54,
    EInputAction_Vehicle_AddCheckpoint = 55,
    EInputAction_Vehicle_DeleteCheckpoint = 56,
    EInputAction_Fe_Select = 57,
    EInputAction_Fe_AltSelect = 58,
    EInputAction_Fe_SelectX = 59,
    EInputAction_Fe_Back = 60,
    EInputAction_Fe_Alt1 = 61,
    EInputAction_Fe_Alt1X = 62,
    EInputAction_Fe_Transfer = 63,
    EInputAction_Fe_Destroy = 64,
    EInputAction_Gm_Select = 65,
    EInputAction_Gm_Restart = 66,
    EInputAction_UI_Left = 67,
    EInputAction_UI_Right = 68,
    EInputAction_UI_Left_Sub = 69,
    EInputAction_UI_Right_Sub = 70,
    EInputAction_UI_Down_Sub = 71,
    EInputAction_UI_Up_Sub = 72,
    EInputAction_UI_NetworkPageShortcut = 73,
    EInputAction_UI_StackSplitUp = 74,
    EInputAction_UI_StackSplitDown = 75,
    EInputAction_Fe_ExitMenu = 76,
    EInputAction_Fe_Options = 77,
    EInputAction_Fe_Quit = 78,
    EInputAction_Fe_MsgSkip = 79,
    EInputAction_Fe_TouchscreenPress = 80,
    EInputAction_Quick_Left = 81,
    EInputAction_Quick_Right = 82,
    EInputAction_Quick_Action = 83,
    EInputAction_Quick_Back = 84,
    EInputAction_Quick_Up = 85,
    EInputAction_Quick_Down = 86,
    EInputAction_Build_Place = 87,
    EInputAction_Build_Rotate_Left = 88,
    EInputAction_Build_Rotate_Right = 89,
    EInputAction_Build_AnalogRotateMode1 = 90,
    EInputAction_Build_AnalogRotateMode2 = 91,
    EInputAction_Build_AnalogRotateLeftY = 92,
    EInputAction_Build_AnalogRotateRightY = 93,
    EInputAction_Build_AnalogRotateY = 94,
    EInputAction_Build_AnalogRotateLeftZ = 95,
    EInputAction_Build_AnalogRotateRightZ = 96,
    EInputAction_Build_AnalogRotateZ = 97,
    EInputAction_Build_ScaleUp = 98,
    EInputAction_Build_ScaleDown = 99,
    EInputAction_Build_AnalogueScale = 100,
    EInputAction_Build_SelectionMode = 101,
    EInputAction_Build_Camera = 102,
    EInputAction_Photo_Hide = 103,
    EInputAction_Photo_Sun = 104,
    EInputAction_Photo_Cam = 105,
    EInputAction_Photo_Exit = 106,
    EInputAction_Photo_CamDown = 107,
    EInputAction_Photo_CamUp = 108,
    EInputAction_Photo_Capture = 109,
    EInputAction_Ambient_Camera = 110,
    EInputAction_Ambient_Planet = 111,
    EInputAction_Ambient_System = 112,
    EInputAction_Ambient_Photo = 113,
    EInputAction_Ambient_NxtSong = 114,
    EInputAction_Ambient_Spawn = 115,
    EInputAction_Terrain_Edit = 116,
    EInputAction_Terrain_ModeBack = 117,
    EInputAction_Terrain_Menu = 118,
    EInputAction_Terrain_SizeUp = 119,
    EInputAction_Terrain_SizeDown = 120,
    EInputAction_Terrain_RotTerrainLeft = 121,
    EInputAction_Terrain_RotTerrainRight = 122,
    EInputAction_Terrain_ChangeShape = 123,
    EInputAction_Ship_NextTarget = 124,
    EInputAction_Ship_PreviousTarget = 125,
    EInputAction_Ship_ClosestTarget = 126,
    EInputAction_CameraLook = 127,
    EInputAction_CameraLookX = 128,
    EInputAction_CameraLookY = 129,
    EInputAction_PlayerMove = 130,
    EInputAction_PlayerMoveX = 131,
    EInputAction_PlayerMoveY = 132,
    EInputAction_SpaceshipThrust = 133,
    EInputAction_SpaceshipBrake = 134,
    EInputAction_VehicleMove = 135,
    EInputAction_VehicleSteer = 136,
    EInputAction_VehicleThrust = 137,
    EInputAction_VehicleBrake = 138,
    EInputAction_ShipStrafe = 139,
    EInputAction_ShipStrafeHorizontal = 140,
    EInputAction_ShipStrafeVertical = 141,
    EInputAction_HeldRotate = 142,
    EInputAction_HeldRotateLeft = 143,
    EInputAction_HeldRotateRight = 144,
    EInputAction_ShipSteer = 145,
    EInputAction_ShipTurn = 146,
    EInputAction_ShipPitch = 147,
    EInputAction_ShipLook = 148,
    EInputAction_ShipLookX = 149,
    EInputAction_ShipLookY = 150,
    EInputAction_ShipLand = 151,
    EInputAction_ShipPulse = 152,
    EInputAction_PlayerSmoothTurnLeft = 153,
    EInputAction_PlayerSmoothTurnRight = 154,
    EInputAction_PlayerSnapTurnLeft = 155,
    EInputAction_PlayerSnapTurnRight = 156,
    EInputAction_PlayerSnapTurnAround = 157,
    EInputAction_PlayerMoveAround = 158,
    EInputAction_TeleportDirection = 159,
    EInputAction_PlayerAutoWalk = 160,
    EInputAction_InteractLeft = 161,
    EInputAction_MeleeLeft = 162,
    EInputAction_HandCtrlHolster = 163,
    EInputAction_ShipUp = 164,
    EInputAction_ShipDown = 165,
    EInputAction_ShipLeft = 166,
    EInputAction_ShipRight = 167,
    EInputAction_ShipZoom = 168,
    EInputAction_Inventory = 169,
    EInputAction_DiscoveryNetworkRetry = 170,
    EInputAction_QuitGame = 171,
    EInputAction_ReportBase = 172,
    EInputAction_GalacticMap_Select = 173,
    EInputAction_GalacticMap_Deselect = 174,
    EInputAction_GalacticMap_Exit = 175,
    EInputAction_GalacticMap_Scan = 176,
    EInputAction_GalacticMap_Home = 177,
    EInputAction_GalacticMap_PlanetBase = 178,
    EInputAction_GalacticMap_Accelerate = 179,
    EInputAction_GalacticMap_ExpandMenu = 180,
    EInputAction_GalacticMap_ScreenshotToggle = 181,
    EInputAction_GalacticMap_ScanChooseNext = 182,
    EInputAction_GalacticMap_ToggleWaypoint = 183,
    EInputAction_GalacticMap_ClearAllWaypoints = 184,
    EInputAction_GalacticMap_NextNavType = 185,
    EInputAction_GalacticMap_PreviousNavType = 186,
    EInputAction_GalacticMap_PreviousFilter = 187,
    EInputAction_GalacticMap_NextFilter = 188,
    EInputAction_GalacticMap_CameraLook = 189,
    EInputAction_GalacticMap_CameraLookX = 190,
    EInputAction_GalacticMap_CameraLookY = 191,
    EInputAction_GalacticMap_PlayerMove = 192,
    EInputAction_GalacticMap_PlayerMoveX = 193,
    EInputAction_GalacticMap_PlayerMoveY = 194,
    EInputAction_GalacticMap_PlayerMoveForward = 195,
    EInputAction_GalacticMap_PlayerMoveBackward = 196,
    EInputAction_GalacticMap_PlayerMoveLeft = 197,
    EInputAction_GalacticMap_PlayerMoveRight = 198,
    EInputAction_GalacticMap_Up = 199,
    EInputAction_GalacticMap_Down = 200,
    EInputAction_GalacticMap_Gesture = 201,
    EInputAction_UI_Cursor = 202,
    EInputAction_UI_CursorX = 203,
    EInputAction_UI_CursorY = 204,
    EInputAction_UI_Camera = 205,
    EInputAction_UI_CameraX = 206,
    EInputAction_UI_CameraY = 207,
    EInputAction_UI_ViewPlayerInfo = 208,
    EInputAction_UI_NextInputControls = 209,
    EInputAction_UI_PrevInputControls = 210,
    EInputAction_UI_ToggleBuySell = 211,
    EInputAction_UI_ToggleTradeInventory = 212,
    EInputAction_UI_TouchScrollY = 213,
    EInputAction_UI_TouchScrollX = 214,
    EInputAction_CharacterCustomisation_ShowCharacter = 215,
    EInputAction_UI_CharacterCustomisation_Camera = 216,
    EInputAction_UI_CharacterCustomisation_RotateCamera = 217,
    EInputAction_UI_CharacterCustomisation_PitchCamera = 218,
    EInputAction_GameMode_CancelDelete = 219,
    EInputAction_GameMode_TitleStart = 220,
    EInputAction_GameMode_ChangeUser = 221,
    EInputAction_Binocs_NextMode = 222,
    EInputAction_Binocs_PrevMode = 223,
    EInputAction_BaseBuilding_PinRecipe = 224,
    EInputAction_BaseBuilding_SwitchBase = 225,
    EInputAction_PhotoMode_CatLeft = 226,
    EInputAction_PhotoMode_CatRight = 227,
    EInputAction_PhotoMode_ValueIncrease = 228,
    EInputAction_PhotoMode_ValueDecrease = 229,
    EInputAction_PhotoMode_OptionUp = 230,
    EInputAction_PhotoMode_OptionDown = 231,
    EInputAction_PhotoMode_CameraRollLeft = 232,
    EInputAction_PhotoMode_CameraRollRight = 233,
    EInputAction_PhotoMode_PauseApplication = 234,
    EInputAction_PhotoMode_CopyLocation = 235,
    EInputAction_PhotoMode_HideLocation = 236,
    EInputAction_UI_Up_Sub_Discovery = 237,
    EInputAction_UI_Down_Sub_Discovery = 238,
    EInputAction_Fe_Upload_Discovery = 239,
    EInputAction_HMD_Recenter = 240,
    EInputAction_HMD_Recenter2 = 241,
    EInputAction_HMD_FEOpen = 242,
    EInputAction_TextChatOpenClose = 243,
    EInputAction_TextChatSend = 244,
    EInputAction_TextChatPasteHold = 245,
    EInputAction_TextChatPaste = 246,
    EInputAction_TextChatAutocomplete = 247,
    EInputAction_TextChatAutocompleteModifier = 248,
    EInputAction_TextChatCursorLeft = 249,
    EInputAction_TextChatCursorRight = 250,
    EInputAction_TextChatCursorHome = 251,
    EInputAction_TextChatCursorEnd = 252,
    EInputAction_TextChatDelete = 253,
    EInputAction_Player_InteractSecondary = 254,
    EInputAction_BaseBuilding_ToggleVisions = 255,
    EInputAction_BaseBuilding_Browse = 256,
    EInputAction_BaseBuilding_Pickup = 257,
    EInputAction_BaseBuilding_Duplicate = 258,
    EInputAction_BaseBuilding_Delete = 259,
    EInputAction_BaseBuilding_ToggleRotationAxis = 260,
    EInputAction_Build_AnalogRotateZ2 = 261,
    EInputAction_BaseBuilding_ToggleSnapping = 262,
    EInputAction_BaseBuilding_ToggleWiring = 263,
    EInputAction_BaseBuilding_Paint = 264,
    EInputAction_BaseBuilding_NextPart = 265,
    EInputAction_TogglePause = 266,
    EInputAction_TogglePlanet = 267,
    EInputAction_Suicide = 268,
    EInputAction_Reset = 269,
    EInputAction_AddLastToolbox = 270,
    EInputAction_AddLastToolboxAtPos = 271,
    EInputAction_TerrainInvalidate = 272,
    EInputAction_TogglePipeline = 273,
    EInputAction_TakeScreenshot = 274,
    EInputAction_TakeExrScreenshot = 275,
    EInputAction_ToggleDebugStats = 276,
    EInputAction_ToggleDebugSubpage = 277,
    EInputAction_DumpNodeStats = 278,
    EInputAction_ToggleTaa = 279,
    EInputAction_DebugDropMeasurementAnchor = 280,
    EInputAction_QuickWarp = 281,
    EInputAction_DumpStats = 282,
    EInputAction_DiscoverOwnBase = 283,
    EInputAction_ClearTerrainEdits = 284,
    EInputAction_SelectRegion = 285,
    EInputAction_SwitchRegionRow = 286,
    EInputAction_SwitchRegionAxis = 287,
    EInputAction_OpenLog = 288,
    EInputAction_DumpVertStats = 289,
    EInputAction_Player_TagMarker = 290,
};

/**
 * @class cGcInputActions
 */
class cGcInputActions
{
  public:
    enum
    {
        ClassNameHash = 0xB3E8C8CD4B9DB0B1,
    };

    inline cGcInputActions() {}
    cGcInputActions* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eInputAction InputAction;
        };
    };
};

SKYSCRAPER_END
