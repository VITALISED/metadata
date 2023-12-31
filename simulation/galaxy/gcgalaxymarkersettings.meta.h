/**
 * @file gcgalaxymarkersettings.meta.h
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
 * @class cGcGalaxyMarkerSettings
 */
class cGcGalaxyMarkerSettings
{
  public:
    enum
    {
        ClassNameHash = 0xB24FD22ADB1D885D,
    };

    inline cGcGalaxyMarkerSettings() {}
    cGcGalaxyMarkerSettings* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkFixedArray<cTkColour, 3> maColours;
            cTkColour mOutlineColour;
            float mfOutlineWidth;
            int miEdgeCount;
            float mfRotationBase;
            float mfLineWidth;
            float mfLineWidthFade;
            float mfSizeScale;
            float mfRadiusFixed;
            float mfRadiusMinimum;
            float mfRadiusBaseOffset;
            float mfRadiusEdge;
            cTkFixedString<128,char> macIcon;
            cTkVector2 mIconSize;
            cTkFixedString<32,char> macMarkerLabel;
            cTkVector2 mTimeScaleRange;
        };
    };
};

SKYSCRAPER_END
