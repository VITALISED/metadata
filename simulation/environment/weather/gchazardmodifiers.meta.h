/**
 * @file gchazardmodifiers.meta.h
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
 * @enum eHazardModifier
 */
enum eHazardModifier : uint32_t
{
    EHazardModifier_Temperature = 0,
    EHazardModifier_Toxicity = 1,
    EHazardModifier_Radiation = 2,
    EHazardModifier_LifeSupportDrain = 3,
    EHazardModifier_Gravity = 4,
};

/**
 * @class cGcHazardModifiers
 */
class cGcHazardModifiers
{
  public:
    enum
    {
        ClassNameHash = 0x8D86E8499B88B845,
    };

    inline cGcHazardModifiers() {}
    cGcHazardModifiers* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eHazardModifier HazardModifier;
        };
    };
};

SKYSCRAPER_END
