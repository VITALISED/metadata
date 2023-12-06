/**
 * @file gcgeneratedbasedecorationtemplate.meta.h
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
#include <toolkit/tkmodelresource.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eDecorationLayer
 */
enum eDecorationLayer : uint32_t
{
    EDecorationLayer_Stairs = 0,
    EDecorationLayer_Corridor = 1,
    EDecorationLayer_Room = 2,
    EDecorationLayer_Door = 3,
    EDecorationLayer_Decoration1 = 4,
    EDecorationLayer_Decoration2 = 5,
    EDecorationLayer_Decoration3 = 6,
    EDecorationLayer_DecorationCorridor = 7,
};

/**
 * @class cGcGeneratedBaseDecorationTemplate
 */
class cGcGeneratedBaseDecorationTemplate : cTkMetaData::Registrar<cGcGeneratedBaseDecorationTemplate>, cTkMetaDataXML::Registrar<cGcGeneratedBaseDecorationTemplate>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x6370110DC5DC47D2,
    };
    enum
    {
        mu64TemplateHash = 0x320EC0C308ECA15C,
    };

    TkID<128> mId;
    cTkModelResource TemplateScene;
    float mfProbability;
    int miMaxPerRoom;
    eDecorationLayer DecorationLayer;
    cTkDynamicArray<int> maInvalidRoomIndexes;
};

SKYSCRAPER_END
