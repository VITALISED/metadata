/**
 * @file tkmaterialsampler.meta.h
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
 * @enum eTextureAddressMode
 */
enum eTextureAddressMode : uint32_t
{
    ETextureAddressMode_Wrap = 0,
    ETextureAddressMode_Clamp = 1,
    ETextureAddressMode_ClampToBorder = 2,
    ETextureAddressMode_Mirror = 3,
};

/**
 * @enum eTextureFilterMode
 */
enum eTextureFilterMode : uint32_t
{
    ETextureFilterMode_None = 0,
    ETextureFilterMode_Bilinear = 1,
    ETextureFilterMode_Trilinear = 2,
};

/**
 * @class cTkMaterialSampler
 */
class cTkMaterialSampler
{
  public:
    enum
    {
        ClassNameHash = 0x330286CE11647D4C,
    };

    inline cTkMaterialSampler() {}
    cTkMaterialSampler* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            cTkFixedString<32,char> macName;
            cTkFixedString<128,char> macMap;
            bool mbIsCube;
            bool mbUseCompression;
            bool mbUseMipMaps;
            bool mbIsSRGB;
            TkID<256> mMaterialAlternativeId;
            eTextureAddressMode TextureAddressMode;
            eTextureFilterMode TextureFilterMode;
            int miAnisotropy;
        };
    };
};

SKYSCRAPER_END
