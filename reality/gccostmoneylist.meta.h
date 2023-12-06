/**
 * @file gccostmoneylist.meta.h
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
#include <reality/gccurrency.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eOutOfBoundsBehaviour
 */
enum eOutOfBoundsBehaviour : uint32_t
{
    EOutOfBoundsBehaviour_NoCost = 0,
    EOutOfBoundsBehaviour_UseFirst = 1,
    EOutOfBoundsBehaviour_UseLast = 2,
};

/**
 * @enum eIndexProvider
 */
enum eIndexProvider : uint32_t
{
    EIndexProvider_None = 0,
    EIndexProvider_ShipSlot = 1,
    EIndexProvider_ShipClass = 2,
    EIndexProvider_DailyFreighters = 3,
    EIndexProvider_WeaponClass = 4,
    EIndexProvider_WeaponSlot = 5,
    EIndexProvider_PetSlot = 6,
    EIndexProvider_PilotSlot = 7,
    EIndexProvider_PilotRank = 8,
};

/**
 * @class cGcCostMoneyList
 */
class cGcCostMoneyList : cTkMetaData::Registrar<cGcCostMoneyList>, cTkMetaDataXML::Registrar<cGcCostMoneyList>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x22A3BF55F268EEBE,
    };
    enum
    {
        mu64TemplateHash = 0x58EF17D19A623F12,
    };

    cTkDynamicArray<int> maCosts;
    cGcCurrency CostCurrency;
    bool mbAssertIfOutOfBounds;
    eOutOfBoundsBehaviour OutOfBoundsBehaviour;
    eIndexProvider IndexProvider;
};

SKYSCRAPER_END
