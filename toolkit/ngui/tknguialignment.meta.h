/**
 * @file tknguialignment.meta.h
 * @author VITALISED & Contributors
 * @since 2023-12-06
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
 * @enum eVertical
 */
enum eVertical : uint8_t
{
    EVertical_Top = 0,
    EVertical_Middle = 1,
    EVertical_Bottom = 2,
};

/**
 * @enum eHorizontal
 */
enum eHorizontal : uint8_t
{
    EHorizontal_Left = 0,
    EHorizontal_Center = 1,
    EHorizontal_Right = 2,
};

/**
 * @class cTkNGuiAlignment
 */
class cTkNGuiAlignment : cTkMetaData::Registrar<cTkNGuiAlignment>, cTkMetaDataXML::Registrar<cTkNGuiAlignment>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xD1E7F0BE0B98FD48,
    };
    enum
    {
        mu64TemplateHash = 0x71FA853C1F36341F,
    };

    eVertical Vertical;
    eHorizontal Horizontal;
};

SKYSCRAPER_END