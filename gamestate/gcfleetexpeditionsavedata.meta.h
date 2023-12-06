/**
 * @file gcfleetexpeditionsavedata.meta.h
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
#include <reality/gcexpeditioncategory.meta.h>
#include <reality/gcexpeditionduration.meta.h>
#include <gamestate/gcexpeditioneventsavedata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcFleetExpeditionSaveData
 */
class cGcFleetExpeditionSaveData : cTkMetaData::Registrar<cGcFleetExpeditionSaveData>, cTkMetaDataXML::Registrar<cGcFleetExpeditionSaveData>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x1CD96DF6BD8E239C,
    };
    enum
    {
        mu64TemplateHash = 0x1389AA9BBA57EE88,
    };

    cTkSeed mSeed;
    unsigned long long mui64UA;
    cTkVector3 mSpawnPosition;
    cTkVector3 mTerminalPosition;
    float mfSpeedMultiplier;
    cTkDynamicArray<TkID<128>> maPowerups;
    cTkFixedString<256,char> macCustomName;
    TkID<128> mInterventionEventMissionID;
    unsigned long long mui64StartTime;
    unsigned long long mui64PauseTime;
    unsigned long long mui64TimeOfLastUAChange;
    int miNextEventToTrigger;
    cGcExpeditionCategory ExpeditionCategory;
    cGcExpeditionDuration ExpeditionDuration;
    cTkDynamicArray<int> maActiveFrigateIndices;
    cTkDynamicArray<int> maDamagedFrigateIndices;
    cTkDynamicArray<int> maDestroyedFrigateIndices;
    cTkDynamicArray<int> maAllFrigateIndices;
    int miNumberOfSuccessfulEventsThisExpedition;
    int miNumberOfFailedEventsThisExpedition;
    cTkDynamicArray<cGcExpeditionEventSaveData> maEvents;
    bool mbInterventionPhoneCallActivated;
};

SKYSCRAPER_END
