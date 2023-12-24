/**
 * @file gcatlasbasesrequest.meta.h
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
#include <gamestate/gcuniverseaddressdata.meta.h>
#include <gamestate/gcgamemode.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcAtlasBasesRequest
 */
class cGcAtlasBasesRequest
{
  public:
    enum
    {
        ClassNameHash = 0x1E454D73CB415CEA,
    };

    inline cGcAtlasBasesRequest() {}
    cGcAtlasBasesRequest* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cGcUniverseAddressData UniverseAddress;
            cGcGameMode GameMode;
            int miMaxResults;
            int miMaxBytes;
            int miMinVersion;
            int miMaxVersion;
            cTkFixedString<32,char> macSpecificUserId;
        };
    };
};

SKYSCRAPER_END
