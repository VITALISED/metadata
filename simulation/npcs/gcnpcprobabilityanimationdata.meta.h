/**
 * @file gcnpcprobabilityanimationdata.meta.h
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
#include <reality/gcalienrace.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eAnimationIntensity
 */
enum eAnimationIntensity : uint32_t
{
    EAnimationIntensity_Low = 0,
    EAnimationIntensity_Medium = 1,
    EAnimationIntensity_High = 2,
    EAnimationIntensity_None = 3,
};

/**
 * @class cGcNPCProbabilityAnimationData
 */
class cGcNPCProbabilityAnimationData : cTkMetaData::Registrar<cGcNPCProbabilityAnimationData>, cTkMetaDataXML::Registrar<cGcNPCProbabilityAnimationData>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x6ECD1E12A5E7A194,
    };
    enum
    {
        mu64TemplateHash = 0xF23879D569337348,
    };

    TkID<128> mName;
    float mfProbability;
    eAnimationIntensity AnimationIntensity;
    cTkDynamicArray<cGcAlienRace> maExcludeRace;
    cTkDynamicArray<TkID<128>> maTags;
};

SKYSCRAPER_END
