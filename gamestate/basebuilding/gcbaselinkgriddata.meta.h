/**
 * @file gcbaselinkgriddata.meta.h
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
#include <gamestate/basebuilding/gcbaselinkgridconnectiondata.meta.h>
#include <gamestate/basebuilding/gcbaselinkgridconnectiondependency.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eDependsOnEnvironment
 */
enum eDependsOnEnvironment : uint32_t
{
    EDependsOnEnvironment_None = 0,
    EDependsOnEnvironment_DayNight = 1,
    EDependsOnEnvironment_Storms = 2,
};

/**
 * @enum eDependsOnHotspots
 */
enum eDependsOnHotspots : uint32_t
{
    EDependsOnHotspots_None = 0,
    EDependsOnHotspots_Power = 1,
    EDependsOnHotspots_Mineral = 2,
    EDependsOnHotspots_Gas = 3,
};

/**
 * @class cGcBaseLinkGridData
 */
class cGcBaseLinkGridData
{
  public:
    enum
    {
        ClassNameHash = 0x3FBB55C99E667F9E,
    };

    inline cGcBaseLinkGridData() {}
    cGcBaseLinkGridData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cGcBaseLinkGridConnectionData Connection;
            int miRate;
            int miStorage;
            eDependsOnEnvironment DependsOnEnvironment;
            eDependsOnHotspots DependsOnHotspots;
            cTkDynamicArray<cGcBaseLinkGridConnectionDependency> maDependentConnections;
        };
    };
};

SKYSCRAPER_END
