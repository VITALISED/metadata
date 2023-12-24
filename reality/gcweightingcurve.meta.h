/**
 * @file gcweightingcurve.meta.h
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
 * @enum eWeightingCurve
 */
enum eWeightingCurve : uint32_t
{
    EWeightingCurve_NoWeighting = 0,
    EWeightingCurve_MaxIsUncommon = 1,
    EWeightingCurve_MaxIsRare = 2,
    EWeightingCurve_MaxIsSuperRare = 3,
    EWeightingCurve_MinIsUncommon = 4,
    EWeightingCurve_MinIsRare = 5,
    EWeightingCurve_MinIsSuperRare = 6,
};

/**
 * @class cGcWeightingCurve
 */
class cGcWeightingCurve
{
  public:
    enum
    {
        ClassNameHash = 0xB33B21B3131CD08D,
    };

    inline cGcWeightingCurve() {}
    cGcWeightingCurve* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eWeightingCurve WeightingCurve;
        };
    };
};

SKYSCRAPER_END
