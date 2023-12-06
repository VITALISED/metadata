/**
 * @file gcpersistentbbobjectdata.meta.h
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
 * @class cGcPersistentBBObjectData
 */
class cGcPersistentBBObjectData : cTkMetaData::Registrar<cGcPersistentBBObjectData>, cTkMetaDataXML::Registrar<cGcPersistentBBObjectData>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xCD3485C140AE7B57,
    };
    enum
    {
        mu64TemplateHash = 0xFAD41A8138D2B51E,
    };

    unsigned long long mui64Timestamp;
    TkID<128> mObjectID;
    unsigned long long mui64GalacticAddress;
    unsigned long long mui64RegionSeed;
    unsigned long long mui64UserData;
    cTkVector3 mPosition;
    cTkVector3 mUp;
    cTkVector3 mAt;
};

SKYSCRAPER_END