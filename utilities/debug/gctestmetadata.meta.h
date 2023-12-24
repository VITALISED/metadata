/**
 * @file gctestmetadata.meta.h
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
#include <audio/gcaudiowwiseevents.meta.h>
            
SKYSCRAPER_BEGIN

/**
 * @enum eDocOptionalEnum
 */
enum eDocOptionalEnum : uint32_t
{
    EDocOptionalEnum_SomeValue1 = 0,
    EDocOptionalEnum_SomeValue2 = 1,
    EDocOptionalEnum_SomeValue3 = 2,
    EDocOptionalEnum_SomeValue4 = 3,
};

/**
 * @enum eTestEnum
 */
enum eTestEnum : uint32_t
{
    ETestEnum_Default = 0,
    ETestEnum_Option1 = 1,
    ETestEnum_Option2 = 2,
    ETestEnum_Option3 = 3,
};

/**
 * @enum eTestFlags
 */
enum exTestFlags : uint32_t
{
FTestFlags_Flag1 = 1,
FTestFlags_Flag2 = 2,
FTestFlags_Flag3 = 4,
};

/**
 * @class cGcTestMetadata
 */
class cGcTestMetadata
{
  public:
    enum
    {
        ClassNameHash = 0xCE965FAFD6BBF99E,
    };

    inline cGcTestMetadata() {}
    cGcTestMetadata* Cast(cTkClassPointer* lClassPtr);

    union
    {
        struct
        {
            bool mbTestBool;
            unsigned char mTestByte;
            int miTestInt;
            short miTestInt16;
            unsigned short muiTestUInt16;
            long long mi64TestInt64;
            unsigned long long mui64TestUInt64;
            long long mi64TestInt64_2;
            unsigned long long mui64TestUInt64_2;
            cTkSmartResHandle mTestResource;
            cTkVector3 mTestVector;
            cTkVector2 mTestVector2;
            cTkVector4 mTestVector4;
            cTkColour mTestColour;
            float mfTestFloat;
            cTkSeed mTestSeed;
            cTkFixedString<128,char> macTestModelFilename;
            cTkFixedString<128,char> macTestTextureFilename;
            cTkFixedString<32,char> macTestString;
            cTkFixedString<128,char> macTestString128;
            cTkFixedString<256,char> macTestString256;
            cTkFixedString<512,char> macTestString512;
            TkID<128> mTestID;
            TkID<256> mTestLocID;
            cGcAudioWwiseEvents TestAudioEvent;
            cTkVector3 mDocOptionalVector;
            cTkFixedString<64,char> macDocRenamedString64;
            TkID<256> mDocOptionalRenamed;
            eDocOptionalEnum DocOptionalEnum;
            cTkDynamicString macTestDynamicString;
            eTestEnum TestEnum;
            cTkFixedArray<float, 10> maTestStaticArray;
            cTkDynamicArray<float> maTestDynamicArray;
            cTkFixedArray<float, 4> maTestEnumArray;
            cTkFixedArray<float, 52> maTestExternalEnumArray;
            exTestFlags TestFlags;
        };
    };
};

SKYSCRAPER_END
