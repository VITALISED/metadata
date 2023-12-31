/**
 * @file tksketchnodedata.meta.h
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
#include <toolkit/tksketchnodeconnections.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eTriggerType
 */
enum eTriggerType : uint32_t
{
    ETriggerType_Disabled = 0,
    ETriggerType_Interrupt = 1,
    ETriggerType_RunParallel = 2,
    ETriggerType_Blocked = 3,
    ETriggerType_QueueLatest = 4,
    ETriggerType_QueueAll = 5,
};

/**
 * @class cTkSketchNodeData
 */
class cTkSketchNodeData
{
  public:
    enum
    {
        ClassNameHash = 0x34A0F43E0ECB3765,
    };

    inline cTkSketchNodeData() {}
    cTkSketchNodeData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkFixedString<32,char> macTypeName;
            eTriggerType TriggerType;
            int miSelectedVariant;
            int miPositionX;
            int miPositionY;
            cTkDynamicArray<cTkSketchNodeConnections> maConnections;
            cTkDynamicArray<unsigned char> maCustomData;
        };
    };
};

SKYSCRAPER_END
