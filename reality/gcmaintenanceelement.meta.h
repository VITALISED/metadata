/**
 * @file gcmaintenanceelement.meta.h
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
#include <reality/gcmaintenanceelementgroups.meta.h>
#include <reality/gcinventorytype.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eUpdateType
 */
enum eUpdateType : uint32_t
{
    EUpdateType_UpdatesAlways = 0,
    EUpdateType_UpdateOnlyWhenComplete = 1,
    EUpdateType_UpdateOnlyWhenNotComplete = 2,
};

/**
 * @enum eDamageStatus
 */
enum eDamageStatus : uint32_t
{
    EDamageStatus_Damaged = 0,
    EDamageStatus_Repaired = 1,
    EDamageStatus_Random = 2,
};

/**
 * @enum eCompletionRequirement
 */
enum eCompletionRequirement : uint32_t
{
    ECompletionRequirement_FullyChargedAndRepaired = 0,
    ECompletionRequirement_AnyChargeAndRepaired = 1,
    ECompletionRequirement_FullyRepaired = 2,
    ECompletionRequirement_NotFullyCharged = 3,
    ECompletionRequirement_EmptySlot = 4,
    ECompletionRequirement_NoRequirement = 5,
    ECompletionRequirement_UserInstalls = 6,
    ECompletionRequirement_HasIngredients = 7,
};

/**
 * @class cGcMaintenanceElement
 */
class cGcMaintenanceElement
{
  public:
    enum
    {
        ClassNameHash = 0x79BDBA7746F3C796,
    };

    inline cGcMaintenanceElement() {}
    cGcMaintenanceElement* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cGcMaintenanceElementGroups ItemGroupOverride;
            cGcInventoryType Type;
            TkID<128> mId;
            float mfMinRandAmount;
            float mfMaxRandAmount;
            int miMaxCapacity;
            float mfAmountEmptyTimePeriod;
            eUpdateType UpdateType;
            int miDamagedAfterTimePeriodMin;
            int miDamagedAfterTimePeriodMax;
            eDamageStatus DamageStatus;
            eCompletionRequirement CompletionRequirement;
        };
    };
};

SKYSCRAPER_END
