/**
 * @file gcplayerfullbodyikcomponentdata.meta.h
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
#include <ik/gcikconstraint.meta.h>
#include <simulation/ecosystem/gccreatureikdata.meta.h>
#include <simulation/character/gccharacterlookatdata.meta.h>

SKYSCRAPER_BEGIN

/**
 * @enum ePlayerHeadUpAxis
 */
enum ePlayerHeadUpAxis : uint32_t
{
    EPlayerHeadUpAxis_X = 0,
    EPlayerHeadUpAxis_XNeg = 1,
    EPlayerHeadUpAxis_Y = 2,
    EPlayerHeadUpAxis_YNeg = 3,
    EPlayerHeadUpAxis_Z = 4,
    EPlayerHeadUpAxis_ZNeg = 5,
};

/**
 * @class cGcPlayerFullBodyIKComponentData
 */
class cGcPlayerFullBodyIKComponentData
{
  public:
    enum
    {
        ClassNameHash = 0x80648B8FC1E7CB4D,
    };

    inline cGcPlayerFullBodyIKComponentData() {}
    cGcPlayerFullBodyIKComponentData* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            bool mbEnabled;
            bool mbEnableFootRaycasts;
            cTkDynamicArray<cGcIKConstraint> maHeadConstraints;
            cTkDynamicArray<cGcIKConstraint> maLegConstraints;
            cGcIKConstraint COGConstraint;
            cTkDynamicArray<cGcIKConstraint> maRestrictConstraints;
            cTkDynamicArray<cTkFixedString<32,char>> maHandBones;
            cTkDynamicArray<cTkFixedString<32,char>> maCameraNeckBones;
            cGcIKConstraint SitConstraint;
            ePlayerHeadUpAxis PlayerHeadUpAxis;
            cTkDynamicArray<cGcCreatureIkData> maJointDataDeprecated;
            bool mbUseFootGlue;
            cGcCharacterLookAtData LookAtSettings;
        };
    };
};

SKYSCRAPER_END
