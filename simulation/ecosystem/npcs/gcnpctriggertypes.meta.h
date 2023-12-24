/**
 * @file gcnpctriggertypes.meta.h
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
 * @enum eNPCTrigger
 */
enum eNPCTrigger : uint32_t
{
    ENPCTrigger_None = 0,
    ENPCTrigger_Idle = 1,
    ENPCTrigger_Greet = 2,
    ENPCTrigger_Mood = 3,
    ENPCTrigger_StartDead = 4,
    ENPCTrigger_Talk_Start = 5,
    ENPCTrigger_Talk_Stop = 6,
    ENPCTrigger_Interact_Start = 7,
    ENPCTrigger_Interact_Stop = 8,
    ENPCTrigger_Interact_BeginHold = 9,
    ENPCTrigger_Interact_CancelHold = 10,
    ENPCTrigger_LookAt_Player_Start = 11,
    ENPCTrigger_LookAt_Player_Stop = 12,
    ENPCTrigger_SetProp = 13,
    ENPCTrigger_Interact_StartFromRemote = 14,
};

/**
 * @class cGcNPCTriggerTypes
 */
class cGcNPCTriggerTypes
{
  public:
    enum
    {
        ClassNameHash = 0xED4A21D9F7E3058B,
    };

    inline cGcNPCTriggerTypes() {}
    cGcNPCTriggerTypes* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eNPCTrigger NPCTrigger;
        };
    };
};

SKYSCRAPER_END
