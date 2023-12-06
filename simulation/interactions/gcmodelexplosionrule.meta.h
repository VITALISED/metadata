/**
 * @file gcmodelexplosionrule.meta.h
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
 * @enum eMatchNodeType
 */
enum eMatchNodeType : uint32_t
{
    EMatchNodeType_Any = 0,
    EMatchNodeType_Mesh = 1,
    EMatchNodeType_Model = 2,
    EMatchNodeType_Joint = 3,
};

/**
 * @enum eMatchName
 */
enum eMatchName : uint32_t
{
    EMatchName_ContainsString = 0,
    EMatchName_ExactString = 1,
};

/**
 * @enum eExplodeAction
 */
enum eExplodeAction : uint32_t
{
    EExplodeAction_RelativeToParent = 0,
    EExplodeAction_DontMove = 1,
    EExplodeAction_SaveCenter = 2,
    EExplodeAction_RelativeToSaved = 3,
};

/**
 * @class cGcModelExplosionRule
 */
class cGcModelExplosionRule : cTkMetaData::Registrar<cGcModelExplosionRule>, cTkMetaDataXML::Registrar<cGcModelExplosionRule>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xA63D153E45037707,
    };
    enum
    {
        mu64TemplateHash = 0xF632B2B1C66A9F6A,
    };

    eMatchNodeType MatchNodeType;
    eMatchName MatchName;
    cTkFixedString<32,char> macString;
    eExplodeAction ExplodeAction;
    cTkVector3 mAxisMultiplier;
    cTkVector3 mOffset;
    float mfExplodeMod;
};

SKYSCRAPER_END
