/**
 * @file tkmaterialdata.meta.h
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
#include <toolkit/scene/materials/tkmaterialflags.meta.h>
#include <toolkit/scene/materials/tkmaterialuniform.meta.h>
#include <toolkit/scene/materials/tkmaterialsampler.meta.h>

SKYSCRAPER_BEGIN

/**
 * @class cTkMaterialData
 */
class cTkMaterialData : cTkMetaData::Registrar<cTkMaterialData>, cTkMetaDataXML::Registrar<cTkMaterialData>
{
  public:
    enum
    {
        mu64ClassNameHash = 0xCEE695A798E64B92,
    };
    enum
    {
        mu64TemplateHash = 0x8EDA510D7237BB69,
    };

    cTkFixedString<128,char> macName;
    cTkFixedString<256,char> macMetamaterial;
    cTkFixedString<32,char> macClass;
    int miTransparencyLayerID;
    bool mbCastShadow;
    bool mbDisableZTest;
    bool mbCreateFur;
    cTkFixedString<128,char> macLink;
    cTkFixedString<128,char> macShader;
    cTkDynamicArray<cTkMaterialFlags> maFlags;
    cTkDynamicArray<cTkMaterialUniform> maUniforms;
    cTkDynamicArray<cTkMaterialSampler> maSamplers;
    long long mi64ShaderMillDataHash;
};

SKYSCRAPER_END
