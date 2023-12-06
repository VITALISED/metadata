/**
 * @file gcspawndensity.meta.h
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
 * @enum eCoverageType
 */
enum eCoverageType : uint32_t
{
    ECoverageType_Total = 0,
    ECoverageType_SmoothPatch = 1,
    ECoverageType_GridPatch = 2,
};

/**
 * @class cGcSpawnDensity
 */
class cGcSpawnDensity : cTkMetaData::Registrar<cGcSpawnDensity>, cTkMetaDataXML::Registrar<cGcSpawnDensity>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x36320600C6ADE7CA,
    };
    enum
    {
        mu64TemplateHash = 0x792F15FD68FA96F3,
    };

    TkID<128> mName;
    bool mbActive;
    eCoverageType CoverageType;
    float mfPatchSize;
    float mfRegionScale;
};

SKYSCRAPER_END
