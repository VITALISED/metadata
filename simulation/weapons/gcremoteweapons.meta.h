/**
 * @file gcremoteweapons.meta.h
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
 * @enum eRemoteWeaponType
 */
enum eRemoteWeaponType : uint32_t
{
    ERemoteWeaponType_Laser = 0,
    ERemoteWeaponType_VehicleLaser = 1,
    ERemoteWeaponType_AIMechLaser = 2,
    ERemoteWeaponType_ShipLaser = 3,
    ERemoteWeaponType_ShipLaser2 = 4,
    ERemoteWeaponType_RailLaser = 5,
    ERemoteWeaponType_NumLasers = 6,
    ERemoteWeaponType_BoltCaster = 7,
    ERemoteWeaponType_Shotgun = 8,
    ERemoteWeaponType_Cannon = 9,
    ERemoteWeaponType_Burst = 10,
    ERemoteWeaponType_MineGrenade = 11,
    ERemoteWeaponType_BounceGrenade = 12,
    ERemoteWeaponType_StunGrenade = 13,
    ERemoteWeaponType_VehicleCanon = 14,
    ERemoteWeaponType_AIMechCanon = 15,
    ERemoteWeaponType_ShipPhoton = 16,
    ERemoteWeaponType_ShipShotgun = 17,
    ERemoteWeaponType_ShipMinigun = 18,
    ERemoteWeaponType_ShipPlasma = 19,
    ERemoteWeaponType_ShipRocket = 20,
    ERemoteWeaponType_None = 21,
};

/**
 * @class cGcRemoteWeapons
 */
class cGcRemoteWeapons
{
  public:
    enum
    {
        ClassNameHash = 0x3239FD75543805A7,
    };

    inline cGcRemoteWeapons() {}
    cGcRemoteWeapons* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eRemoteWeaponType RemoteWeaponType;
        };
    };
};

SKYSCRAPER_END
