/**
 * @file gcregionhotspotstable.meta.h
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
#include <simulation/gcregionhotspotdata.meta.h>
#include <simulation/gcregionhotspotbiomegases.meta.h>
#include <simulation/gcregionhotspotsubstance.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cGcRegionHotspotsTable
 */
class cGcRegionHotspotsTable : cTkMetaData::Registrar<cGcRegionHotspotsTable>, cTkMetaDataXML::Registrar<cGcRegionHotspotsTable>
{
  public:
    enum
    {
        mu64ClassNameHash = 0x7F0D775900CDB2FD,
    };
    enum
    {
        mu64TemplateHash = 0x1EEB6E34193A8D63,
    };

    float mfRegionHotspotsPoleSpacing;
    float mfRegionHotspotsPerPoleMin;
    float mfRegionHotspotsPerPoleMax;
    float mfRegionHotspotsMinSameCategorySpacing;
    float mfRegionHotspotsMaxDifferentCategoryOverlap;
    cTkFixedArray<cGcRegionHotspotData, 6> maRegionHotspots;
    cTkFixedArray<cGcRegionHotspotBiomeGases, 16> maRegionHotspotBiomeGases;
    cTkDynamicArray<cGcRegionHotspotSubstance> maRegionHotspotSubstances;
};

SKYSCRAPER_END