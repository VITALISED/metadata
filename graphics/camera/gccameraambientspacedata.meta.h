/**
 * @file gccameraambientspacedata.meta.h
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
 * @enum eOrigin
 */
enum eOrigin : uint32_t
{
    EOrigin_SpaceStationInternals = 0,
    EOrigin_SpaceStationBack = 1,
    EOrigin_FreighterBattle = 2,
    EOrigin_Freighter = 3,
    EOrigin_FreighterHangar = 4,
    EOrigin_AtlasStation = 5,
    EOrigin_BlackHole = 6,
    EOrigin_Anomaly = 7,
};

/**
 * @class cGcCameraAmbientSpaceData
 */
class cGcCameraAmbientSpaceData
{
  public:
    enum
    {
        ClassNameHash = 0x3B1EFAD66E07132E,
    };

    inline cGcCameraAmbientSpaceData() {}
    cGcCameraAmbientSpaceData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            TkID<128> mAnimation;
            TkID<128> mDroneAnimation;
            eOrigin Origin;
        };
    };
};

SKYSCRAPER_END
