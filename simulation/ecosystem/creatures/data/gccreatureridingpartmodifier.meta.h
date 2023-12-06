/**
 * @file gccreatureridingpartmodifier.meta.h
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
#include <simulation/ecosystem/creatures/data/gccreatureridinganimation.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcCreatureRidingPartModifier
 */
class cGcCreatureRidingPartModifier : cTkMetaData::Registrar<cGcCreatureRidingPartModifier>, cTkMetaDataXML::Registrar<cGcCreatureRidingPartModifier>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xB9A3955D41C87D67,
    };
    enum
    {
        mu64TemplateHash = 0x66B10ABD887EC31F,
    };

    TkID<256> mPartName;
    cTkFixedString<256,char> macJointName;
    float mfMinScale;
    float mfMaxScale;
    cTkFixedString<256,char> macAdditionalScaleJoint;
    bool mbBreakIfNotSelected;
    bool mbRelativeOffset;
    cTkVector3 mOffset;
    cTkVector3 mRotationOffset;
    cTkVector3 mVROffset;
    float mfHeadCounterRotation;
    float mfLegSpreadOffset;
    bool mbOverrideAnims;
    TkID<128> mIdleRidingAnim;
    TkID<128> mDefaultRidingAnim;
    cTkDynamicArray<cGcCreatureRidingAnimation> maRidingAnims;
};

SKYSCRAPER_END