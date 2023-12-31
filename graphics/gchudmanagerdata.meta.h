/**
 * @file gchudmanagerdata.meta.h
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
#include <graphics/hud/gctextpreset.meta.h>
#include <toolkit/animation/tkcurvetype.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcHUDManagerData
 */
class cGcHUDManagerData
{
  public:
    enum
    {
        ClassNameHash = 0x756972574B9CCB08,
    };

    inline cGcHUDManagerData() {}
    cGcHUDManagerData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cGcTextPreset TitleFont;
            cGcTextPreset SubtitleFont;
            cGcTextPreset SubtitleFontSmall;
            float mfOSDCoreSize;
            float mfOSDFullSize;
            float mfOSDCoreAlpha;
            float mfOSDBaseTextY;
            float mfOSDBaseBandY;
            float mfOSDBorderY;
            float mfOSDUnderlineWidth;
            float mfPopUpCoreSize;
            float mfPopUpFullSize;
            float mfPopUpCoreAlpha;
            float mfPopUpY;
            float mfPopUpYMidLock;
            float mfOSDFadeSpeed;
            float mfOSDEdgeMergeAlpha;
            float mfOSDTextAppearRate;
            float mfOSDTextFadeRate;
            float mfOSDTextWaitOnAlpha;
            float mfPopUpFadeRate;
            float mfPopUpBGFadeInRate;
            float mfPopUpBGFadeOutRate;
            float mfPopUpBGTriggerFG;
            float mfPromptLine1Y;
            float mfPromptLine2Y;
            int miModelRenderTextureSize;
            int miModelRenderDisplaySize;
            int miModelRenderDisplayBorder;
            float mfModelRenderDisplayOffset;
            float mfModelRenderDisplayMove;
            cTkCurveType ModelRenderDisplayAlphaCurve;
            cTkCurveType ModelRenderDisplayMoveCurve;
        };
    };
};

SKYSCRAPER_END
