/**
 * @file tkanimcompactmetadata.meta.h
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
#include <toolkit/scene/animation/tkanimnodedata.meta.h>
#include <toolkit/scene/animation/tkanimnodeframehalfdata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cTkAnimCompactMetadata
 */
class cTkAnimCompactMetadata
{
  public:
    enum
    {
        ClassNameHash = 0x8D1F8DB67274D95A,
    };

    inline cTkAnimCompactMetadata() {}
    cTkAnimCompactMetadata* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkDynamicArray<cTkAnimNodeData> maNodeData;
            cTkDynamicArray<cTkAnimNodeFrameHalfData> maAnimFrameData;
            cTkAnimNodeFrameHalfData StillFrameData;
            int miFrameCount;
            int miNodeCount;
            bool mbHas30HzFrames;
        };
    };
};

SKYSCRAPER_END
