/**
 * @file gcsentinelmechweapondata.meta.h
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
#include <simulation/vehicles/gcmechweaponlocation.meta.h>
#include <simulation/vehicles/gcvehicleweaponmuzzledata.meta.h>
#include <audio/gcaudiowwiseevents.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcSentinelMechWeaponData
 */
class cGcSentinelMechWeaponData
{
  public:
    enum
    {
        ClassNameHash = 0x4484F9F6C0F33596,
    };

    inline cGcSentinelMechWeaponData() {}
    cGcSentinelMechWeaponData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            TkID<128> mId;
            TkID<128> mProjectile;
            int miProjectilesPerShot;
            float mfProjectileSpread;
            float mfFireInterval;
            int miNumShotsMin;
            int miNumShotsMax;
            float mfCooldownTimeMin;
            float mfCooldownTimeMax;
            float mfIdealRange;
            float mfMinRange;
            float mfMaxRange;
            float mfAttackAngle;
            float mfExplosionRadius;
            float mfInheritInitialVelocity;
            cGcMechWeaponLocation ShootLocation;
            cGcVehicleWeaponMuzzleData MuzzleData;
            cGcAudioWwiseEvents StartFireAudioEvent;
            cGcAudioWwiseEvents StopFireAudioEvent;
        };
    };
};

SKYSCRAPER_END
