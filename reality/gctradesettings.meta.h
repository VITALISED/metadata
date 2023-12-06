/**
 * @file gctradesettings.meta.h
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
#include <reality/gctradedata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcTradeSettings
 */
class cGcTradeSettings : cTkMetaData::Registrar<cGcTradeSettings>, cTkMetaDataXML::Registrar<cGcTradeSettings>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x4B63CD1B58DAF5A4,
    };
    enum
    {
        mu64TemplateHash = 0x7449E1BB8B10F55B,
    };

    cGcTradeData SpaceStation;
    cGcTradeData Shop;
    cGcTradeData TechShop;
    cGcTradeData ShipTechSpecialist;
    cGcTradeData SuitTechSpecialist;
    cGcTradeData WeapTechSpecialist;
    cGcTradeData VehicleTechSpecialist;
    cGcTradeData NexusTechSpecialist;
    cGcTradeData Ship;
    cGcTradeData ExpShip;
    cGcTradeData TraShip;
    cGcTradeData WarShip;
    cGcTradeData LoneExp;
    cGcTradeData LoneTra;
    cGcTradeData LoneWar;
    cGcTradeData MapShop;
    cGcTradeData IllegalProds;
    cGcTradeData Scrap;
    cGcTradeData SeasonRewardsShop;
    cGcTradeData SmugglerStation;
    cGcTradeData PirateTech;
    cGcTradeData PirateVisitor;
};

SKYSCRAPER_END
