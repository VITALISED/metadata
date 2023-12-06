/**
 * @file gcmissionsequencecollectproduct.meta.h
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
#include <simulation/missions/defaultmissionitems/gcdefaultmissionproductenum.meta.h>
#include <reality/gcitemneedpurpose.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcMissionSequenceCollectProduct
 */
class cGcMissionSequenceCollectProduct : cTkMetaData::Registrar<cGcMissionSequenceCollectProduct>, cTkMetaDataXML::Registrar<cGcMissionSequenceCollectProduct>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x139E6194371FE10E,
    };
    enum
    {
        mu64TemplateHash = 0x5C89FDE7FA8343D4,
    };

    cTkFixedString<128,char> macMessage;
    cGcDefaultMissionProductEnum Default;
    TkID<128> mProduct;
    int miAmountMin;
    int miAmountMax;
    bool mbWaitForSelected;
    TkID<128> mForBuild;
    TkID<128> mForRepair;
    cGcItemNeedPurpose Purpose;
    bool mbTeachIfNotKnown;
    bool mbFromNow;
    bool mbTakeAmountFromSeasonData;
    bool mbDependentOnSeasonMilestone;
    bool mbHintAtCraftTree;
    bool mbSearchCookingIngredients;
    cTkFixedString<128,char> macDebugText;
};

SKYSCRAPER_END
