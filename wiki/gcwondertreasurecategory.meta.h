/**
 * @file gcwondertreasurecategory.meta.h
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
 * @enum eWonderTreasureCategory
 */
enum eWonderTreasureCategory : uint32_t
{
    EWonderTreasureCategory_Loot = 0,
    EWonderTreasureCategory_Document = 1,
    EWonderTreasureCategory_BioSample = 2,
    EWonderTreasureCategory_Fossil = 3,
    EWonderTreasureCategory_Plant = 4,
    EWonderTreasureCategory_Tool = 5,
    EWonderTreasureCategory_Farm = 6,
    EWonderTreasureCategory_SeaLoot = 7,
    EWonderTreasureCategory_SeaHorror = 8,
    EWonderTreasureCategory_Salvage = 9,
    EWonderTreasureCategory_Bones = 10,
    EWonderTreasureCategory_SpaceHorror = 11,
    EWonderTreasureCategory_SpaceBones = 12,
};

/**
 * @class cGcWonderTreasureCategory
 */
class cGcWonderTreasureCategory : cTkMetaData::Registrar<cGcWonderTreasureCategory>, cTkMetaDataXML::Registrar<cGcWonderTreasureCategory>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x541D78BA92E4C104,
    };
    enum
    {
        mu64TemplateHash = 0x786DE8497EEECF6E,
    };

    eWonderTreasureCategory WonderTreasureCategory;
};

SKYSCRAPER_END