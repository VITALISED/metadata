/**
 * @file gcfiendcrime.meta.h
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
 * @enum eFiendCrime
 */
enum eFiendCrime : uint32_t
{
    EFiendCrime_None = 0,
    EFiendCrime_EggDamaged = 1,
    EFiendCrime_EggDestroyed = 2,
    EFiendCrime_EggCollected = 3,
    EFiendCrime_UnderwaterPropDamaged = 4,
    EFiendCrime_UnderwaterPropCollected = 5,
    EFiendCrime_RockTransform = 6,
    EFiendCrime_GroundPropDamage = 7,
    EFiendCrime_ShotWorm = 8,
};

/**
 * @class cGcFiendCrime
 */
class cGcFiendCrime : cTkMetaData::Registrar<cGcFiendCrime>, cTkMetaDataXML::Registrar<cGcFiendCrime>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xAF90A56B0E99C0CB,
    };
    enum
    {
        mu64TemplateHash = 0x6F5426522A182A53,
    };

    eFiendCrime FiendCrime;
};

SKYSCRAPER_END
