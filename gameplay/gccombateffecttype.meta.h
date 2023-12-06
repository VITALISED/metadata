/**
 * @file gccombateffecttype.meta.h
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
 * @enum eCombatEffectType
 */
enum eCombatEffectType : uint32_t
{
    ECombatEffectType_None = 0,
    ECombatEffectType_Fire = 1,
    ECombatEffectType_Stun = 2,
    ECombatEffectType_Slow = 3,
};

/**
 * @class cGcCombatEffectType
 */
class cGcCombatEffectType : cTkMetaData::Registrar<cGcCombatEffectType>, cTkMetaDataXML::Registrar<cGcCombatEffectType>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xCC36FE8AD202DF8,
    };
    enum
    {
        mu64TemplateHash = 0xF353736FC3B7065,
    };

    eCombatEffectType CombatEffectType;
};

SKYSCRAPER_END