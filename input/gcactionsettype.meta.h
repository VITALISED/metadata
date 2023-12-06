/**
 * @file gcactionsettype.meta.h
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

SKYSCRAPER_BEGIN

/**
 * @enum eActionSetType
 */
enum eActionSetType : uint32_t
{
    EActionSetType_None = 0,
    EActionSetType_FRONTEND = 1,
    EActionSetType_OnFootControls = 2,
    EActionSetType_OnFootQuickMenu = 3,
    EActionSetType_ShipControls = 4,
    EActionSetType_ShipQuickMenu = 5,
    EActionSetType_VehicleMode = 6,
    EActionSetType_GalacticMap = 7,
    EActionSetType_PhotoModeMenu = 8,
    EActionSetType_PhotoModeMvCam = 9,
    EActionSetType_AmbientMode = 10,
    EActionSetType_DebugMode = 11,
    EActionSetType_BuildMenuAnalogueRotate = 12,
    EActionSetType_TextChat = 13,
    EActionSetType_BuildMenuSelectionMode = 14,
    EActionSetType_BuildMenuPlacementMode = 15,
};

/**
 * @class cGcActionSetType
 */
class cGcActionSetType : cTkMetaData::Registrar<cGcActionSetType>, cTkMetaDataXML::Registrar<cGcActionSetType>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x99FB64404DAF2DE7,
    };
    enum
    {
        mu64TemplateHash = 0x6B1AA41A13BF3652,
    };

    eActionSetType ActionSetType;
};

SKYSCRAPER_END