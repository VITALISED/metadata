/**
 * @file gcplayerexperiencespawndata.meta.h
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
 * @enum eFaceDir
 */
enum eFaceDir : uint32_t
{
    EFaceDir_Random = 0,
    EFaceDir_TowardsPlayer = 1,
    EFaceDir_SpawnerAt = 2,
};

/**
 * @class cGcPlayerExperienceSpawnData
 */
class cGcPlayerExperienceSpawnData
{
  public:
    enum
    {
        ClassNameHash = 0x76E523097495B90,
    };

    inline cGcPlayerExperienceSpawnData() {}
    cGcPlayerExperienceSpawnData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            TkID<128> mArchetype;
            TkID<128> mAppearAnim;
            TkID<128> mSpawnLocator;
            TkID<256> mSpawnLocatorScanEvent;
            eFaceDir FaceDir;
            float mfMinDist;
            float mfMaxDist;
            cTkFixedArray<int, 7> maMinNum;
            cTkFixedArray<int, 7> maMaxNum;
            float mfActiveTime;
        };
    };
};

SKYSCRAPER_END
