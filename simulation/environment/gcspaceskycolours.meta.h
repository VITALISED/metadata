/**
 * @file gcspaceskycolours.meta.h
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
 * @class cGcSpaceSkyColours
 */
class cGcSpaceSkyColours
{
  public:
    enum
    {
        ClassNameHash = 0x488F8DF6F4A99ACA,
    };

    inline cGcSpaceSkyColours() {}
    cGcSpaceSkyColours* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkColour mCloudColour;
            cTkColour mColourTop;
            cTkColour mColourMid;
            cTkColour mColourBottom;
            cTkColour mColourTopPlanet;
            cTkColour mColourMidPlanet;
            cTkColour mColourBottomPlanet;
            cTkColour mSunColour;
            cTkColour mNebulaColour1;
            cTkColour mNebulaColour2;
            cTkColour mNebulaColour3;
            cTkColour mNebulaShadowColour;
            cTkColour mFogColour;
            cTkColour mFogColour2;
        };
    };
};

SKYSCRAPER_END
