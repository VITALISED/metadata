/**
 * @file gcinventorycontainer.meta.h
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
#include <gamestate/gcinventoryelement.meta.h>
#include <gamestate/gcinventoryindex.meta.h>
#include <reality/gcinventoryclass.meta.h>
#include <reality/gcinventorystacksizegroup.meta.h>
#include <reality/gcinventorybasestatentry.meta.h>
#include <gamestate/gcinventoryspecialslot.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcInventoryContainer
 */
class cGcInventoryContainer : cTkMetaData::Registrar<cGcInventoryContainer>, cTkMetaDataXML::Registrar<cGcInventoryContainer>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xAF875892F81EDE11,
    };
    enum
    {
        mu64TemplateHash = 0x6B0445D97609452D,
    };

    cTkDynamicArray<cGcInventoryElement> maSlots;
    cTkDynamicArray<cGcInventoryIndex> maValidSlotIndices;
    cGcInventoryClass Class;
    cGcInventoryStackSizeGroup StackSizeGroup;
    cTkDynamicArray<cGcInventoryBaseStatEntry> maBaseStatValues;
    cTkDynamicArray<cGcInventorySpecialSlot> maSpecialSlots;
    int miWidth;
    int miHeight;
    bool mbIsCool;
    cTkFixedString<256,char> macName;
    int miVersion;
};

SKYSCRAPER_END
