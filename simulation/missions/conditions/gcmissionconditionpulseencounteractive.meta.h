/**
 * @file gcmissionconditionpulseencounteractive.meta.h
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
 * @enum eTestEncounterType
 */
enum eTestEncounterType : uint32_t
{
    ETestEncounterType_AnyEncounter = 0,
    ETestEncounterType_AnyObject = 1,
    ETestEncounterType_SpecificObject = 2,
    ETestEncounterType_Trader = 3,
    ETestEncounterType_AbandonedFreighter = 4,
    ETestEncounterType_AnyEncounterOtherThanTheNamedOne = 5,
};

/**
 * @class cGcMissionConditionPulseEncounterActive
 */
class cGcMissionConditionPulseEncounterActive : cTkMetaData::Registrar<cGcMissionConditionPulseEncounterActive>, cTkMetaDataXML::Registrar<cGcMissionConditionPulseEncounterActive>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x56207A2C2009340,
    };
    enum
    {
        mu64TemplateHash = 0xAB5AE414E5866353,
    };

    eTestEncounterType TestEncounterType;
    TkID<128> mSpecificObjectID;
    bool mbRequireFullySpawned;
};

SKYSCRAPER_END
