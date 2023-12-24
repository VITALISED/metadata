/**
 * @file gcspringlink.meta.h
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
 * @enum ePivotAnchorsTo
 */
enum ePivotAnchorsTo : uint32_t
{
    EPivotAnchorsTo_Itself = 0,
    EPivotAnchorsTo_Parent = 1,
    EPivotAnchorsTo_Node = 2,
    EPivotAnchorsTo_NodeWithAnchor = 3,
};

/**
 * @enum eApplyMotionScaleIn
 */
enum eApplyMotionScaleIn : uint32_t
{
    EApplyMotionScaleIn_Disabled = 0,
    EApplyMotionScaleIn_Uniform = 1,
    EApplyMotionScaleIn_Itself = 2,
    EApplyMotionScaleIn_Parent = 3,
    EApplyMotionScaleIn_Component = 4,
};

/**
 * @enum eApplyMotionLimitsIn
 */
enum eApplyMotionLimitsIn : uint32_t
{
    EApplyMotionLimitsIn_Disabled = 0,
    EApplyMotionLimitsIn_Uniform = 1,
    EApplyMotionLimitsIn_Itself = 2,
    EApplyMotionLimitsIn_Parent = 3,
    EApplyMotionLimitsIn_Component = 4,
};

/**
 * @enum eApplyAngularMotionScaleIn
 */
enum eApplyAngularMotionScaleIn : uint32_t
{
    EApplyAngularMotionScaleIn_Disabled = 0,
    EApplyAngularMotionScaleIn_Uniform = 1,
    EApplyAngularMotionScaleIn_Itself = 2,
    EApplyAngularMotionScaleIn_Parent = 3,
    EApplyAngularMotionScaleIn_Component = 4,
};

/**
 * @enum eApplyAngularLimitsIn
 */
enum eApplyAngularLimitsIn : uint32_t
{
    EApplyAngularLimitsIn_Disabled = 0,
    EApplyAngularLimitsIn_Itself = 1,
    EApplyAngularLimitsIn_Parent = 2,
    EApplyAngularLimitsIn_Component = 3,
};

/**
 * @class cGcSpringLink
 */
class cGcSpringLink
{
  public:
    enum
    {
        ClassNameHash = 0x4B56CD3D914485CF,
    };

    inline cGcSpringLink() {}
    cGcSpringLink* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            bool mbEnabled;
            cTkFixedString<64,char> macName;
            cTkDynamicArray<cTkFixedString<64,char>> maNodeNames;
            cTkVector3 mCentreOfMassLocal;
            cTkVector3 mPivotLocal;
            ePivotAnchorsTo PivotAnchorsTo;
            cTkVector3 mPivotAnchorLocal;
            cTkFixedString<64,char> macPivotAnchorNode;
            float mfApplyGameGravity;
            float mfApplyGameWind;
            float mfAirSpeedFromMovementSpeedScale;
            bool mbPositionalSpringEnabled;
            float mfDampingCriticality;
            float mfNaturalFrequency;
            bool mbSpringPivots;
            bool mbApplySpringInMovingFrame;
            eApplyMotionScaleIn ApplyMotionScaleIn;
            float mfMotionScale_Uniform;
            cTkVector3 mMotionScale;
            eApplyMotionLimitsIn ApplyMotionLimitsIn;
            float mfMotionLimit_MaxDetachmentDistance;
            cTkVector3 mMotionLimitMin;
            cTkVector3 mMotionLimitMax;
            cTkVector3 mMotionLimitBounciness;
            bool mbAngularSpringEnabled;
            float mfInfluenceOfTranslation;
            float mfApplyInfluenceOfTranslationInMovingFrame;
            float mfDistanceWhereRotationMatchesLinear;
            float mfAngularDampingCriticality;
            float mfAngularNaturalFrequency;
            float mfApplyAngularSpringInMovingFrame;
            eApplyAngularMotionScaleIn ApplyAngularMotionScaleIn;
            float mfAngularMotionScale_Uniform;
            cTkVector3 mAngularMotionScale;
            eApplyAngularLimitsIn ApplyAngularLimitsIn;
            cTkVector3 mAngularLimitMinDeg;
            cTkVector3 mAngularLimitMaxDeg;
            cTkVector3 mAngularMotionLimitBounciness;
        };
    };
};

SKYSCRAPER_END
