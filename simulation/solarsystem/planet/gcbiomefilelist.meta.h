/**
 * @file gcbiomefilelist.meta.h
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
#include <simulation/solarsystem/planet/gcbiomefilelistoptions.meta.h>
#include <simulation/solarsystem/planet/gcbiometype.meta.h>
#include <simulation/environment/gcexternalobjectlistoptions.meta.h>
#include <simulation/solarsystem/planet/gcexternalobjectfilelist.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcBiomeFileList
 */
class cGcBiomeFileList
{
  public:
    enum
    {
        ClassNameHash = 0x369AF9F4E4E055D0,
    };

    inline cGcBiomeFileList() {}
    cGcBiomeFileList* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkFixedArray<cGcBiomeFileListOptions, 16> maBiomeFiles;
            cTkDynamicArray<cGcBiomeType> maValidStartPlanetBiome;
            cTkDynamicArray<cGcExternalObjectListOptions> maCommonExternalObjectLists;
            cTkDynamicArray<cGcExternalObjectFileList> maOptionalExternalObjectLists;
        };
    };
};

SKYSCRAPER_END
