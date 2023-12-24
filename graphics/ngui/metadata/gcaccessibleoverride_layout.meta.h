/**
 * @file gcaccessibleoverride_layout.meta.h
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
 * @enum eAccessibleOverride_Layout
 */
enum eAccessibleOverride_Layout : uint32_t
{
    EAccessibleOverride_Layout_PosX = 0,
    EAccessibleOverride_Layout_PosY = 1,
    EAccessibleOverride_Layout_LayerWidth = 2,
    EAccessibleOverride_Layout_LayerHeight = 3,
    EAccessibleOverride_Layout_MaxWidth = 4,
};

/**
 * @class cGcAccessibleOverride_Layout
 */
class cGcAccessibleOverride_Layout
{
  public:
    enum
    {
        ClassNameHash = 0xCB6432BD8E0191A0,
    };

    inline cGcAccessibleOverride_Layout() {}
    cGcAccessibleOverride_Layout* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eAccessibleOverride_Layout AccessibleOverride_Layout;
            float mfFloatValue;
        };
    };
};

SKYSCRAPER_END
