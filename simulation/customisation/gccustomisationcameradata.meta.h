/**
 * @file gccustomisationcameradata.meta.h
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
 * @class cGcCustomisationCameraData
 */
class cGcCustomisationCameraData : cTkMetaData::Registrar<cGcCustomisationCameraData>, cTkMetaDataXML::Registrar<cGcCustomisationCameraData>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x50A80E365BD08E24,
    };
    enum
    {
        mu64TemplateHash = 0xE1F0EFF18817E2E8,
    };

    int miInteractionCameraIndex;
    cTkFixedString<32,char> macInteracttionCameraFocusJoint;
    float mfMinPitch;
    float mfMaxPitch;
    float mfMinYaw;
    float mfMaxYaw;
};

SKYSCRAPER_END
