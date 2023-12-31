/**
 * @file gcworlduisettings.meta.h
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
 * @class cGcWorldUISettings
 */
class cGcWorldUISettings
{
  public:
    enum
    {
        ClassNameHash = 0x1805828080FC646E,
    };

    inline cGcWorldUISettings() {}
    cGcWorldUISettings* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            float mfUIWorldQuadOffset;
            float mfUIWorldQuadOffsetV2;
            float mfUIWorldQuadOffsetBuildMenu;
            float mfUIWorldQuadOffsetBuildMenuV2;
            float mfUIWorldQuadSideOffset;
            float mfUIWorldQuadShipAddOffset;
            float mfUIWorldQuadShipAddOffsetV2;
            float mfUIWorldQuadScale;
            float mfUIWorldQuadShipScale;
            float mfHUDDefWorldQuadOffset;
            float mfHUDDefWorldQuadOffsetV2;
            float mfHUDDefWorldQuadShipAddOffset;
            float mfHUDDefWorldQuadShipAddOffsetV2;
            float mfHUDWorldQuadScale;
            float mfHUDWorldQuadShipScale;
            float mfHUDInterpSpeed;
            float mfHUDThresholdVert;
            float mfHUDThresholdHorz;
            float mfGameModeSelectorQuadOffset;
            float mfGameModeSelectorQuadOffsetV2;
        };
    };
};

SKYSCRAPER_END
