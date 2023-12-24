/**
 * @file tkmagicmodeldata.meta.h
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
 * @class cTkMagicModelData
 */
class cTkMagicModelData
{
  public:
    enum
    {
        ClassNameHash = 0x1A5D6B5DC6FCD174,
    };

    inline cTkMagicModelData() {}
    cTkMagicModelData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkDynamicArray<cTkVector3> maVertices;
            cTkVector3 mCentre;
            float mfRadius;
        };
    };
};

SKYSCRAPER_END
