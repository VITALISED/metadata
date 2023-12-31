/**
 * @file tkemitterfloatproperty.meta.h
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
#include <toolkit/animation/tkcurvetype.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum eAuthoring
 */
enum eAuthoring : uint32_t
{
    EAuthoring_FixedValue = 0,
    EAuthoring_RandomRangeFloat = 1,
    EAuthoring_Curves = 2,
};

/**
 * @class cTkEmitterFloatProperty
 */
class cTkEmitterFloatProperty
{
  public:
    enum
    {
        ClassNameHash = 0x6ECA0FF0AE9F9E21,
    };

    inline cTkEmitterFloatProperty() {}
    cTkEmitterFloatProperty* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            eAuthoring Authoring;
            float mfFixedValue;
            float mfMinRandomValue;
            float mfMaxRandomValue;
            float mfCurveVariation;
            float mfCurveStartValue;
            float mfCurveMidValue;
            float mfCurveEndValue;
            float mfCurveBlendMidpoint;
            cTkCurveType Curve1Shape;
            cTkCurveType Curve2Shape;
            cTkClassPointer mNextStage;
        };
    };
};

SKYSCRAPER_END
