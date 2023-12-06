/**
 * @file gcshiphudtargetdata.meta.h
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
#include <graphics/hud/ship/gcshiphudtargeticondata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcShipHUDTargetData
 */
class cGcShipHUDTargetData : cTkMetaData::Registrar<cGcShipHUDTargetData>, cTkMetaDataXML::Registrar<cGcShipHUDTargetData>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x24B6E7D6F92704D5,
    };
    enum
    {
        mu64TemplateHash = 0x1EF6B898301EEBD5,
    };

    cGcShipHUDTargetIconData IconData;
    cTkFixedString<128,char> macArrow;
    float mfIconSizeIn;
    float mfIconMinSize;
    float mfIconMaxSize;
    float mfIconSizeScale;
    float mfArrowScale;
    float mfArrowOffset;
    float mfArrowMinFadeDist;
    float mfArrowFadeRange;
    float mfArrowMinSize;
    float mfArrowMaxSize;
    cTkColour mBaseColour;
    float mfActiveDistance;
    float mfActivateTime;
    float mfGlowAlpha;
    float mfHighlightTime;
    float mfHitPulse;
    float mfHitPulseTime;
    float mfHitWhiteOut;
    cTkColour mLockColour;
    float mfPoliceColourFreq;
    cTkColour mPoliceColour1;
    cTkColour mPoliceColour2;
    cTkColour mThreatColour;
};

SKYSCRAPER_END