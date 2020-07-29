/*
    Open1560 - An Open Source Re-Implementation of Midtown Madness 1 Beta
    Copyright (C) 2020 Brick

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/*
    vector7:matrix34

    0x567450 | public: __thiscall Matrix34::Matrix34(class Matrix44 const &) | ??0Matrix34@@QAE@ABVMatrix44@@@Z
    0x5674B0 | public: void __thiscall Matrix34::Identity(void) | ?Identity@Matrix34@@QAEXXZ
    0x5674E0 | public: class Matrix34 __thiscall Matrix34::operator+(class Matrix34 const &) | ??HMatrix34@@QAE?AV0@ABV0@@Z
    0x5675B0 | public: class Matrix34 __thiscall Matrix34::operator-(class Matrix34 const &) | ??GMatrix34@@QAE?AV0@ABV0@@Z
    0x567680 | public: void __thiscall Matrix34::Dot(class Matrix34 const &,class Matrix34 const &) | ?Dot@Matrix34@@QAEXABV1@0@Z
    0x5678A0 | public: void __thiscall Matrix34::Dot3x3(class Matrix34 const &,class Matrix34 const &) | ?Dot3x3@Matrix34@@QAEXABV1@0@Z
    0x567A30 | public: class Vector3 __thiscall Matrix34::SolveSVD(class Vector3 const &) const | ?SolveSVD@Matrix34@@QBE?AVVector3@@ABV2@@Z
    0x5686F0 | public: float __thiscall Matrix34::Determinant(void) const | ?Determinant@Matrix34@@QBEMXZ
    0x5687A0 | public: class Matrix34 __thiscall Matrix34::Inverse(void) const | ?Inverse@Matrix34@@QBE?AV1@XZ
    0x568980 | public: void __thiscall Matrix34::FastInverse(class Matrix34 const &) | ?FastInverse@Matrix34@@QAEXABV1@@Z
    0x568A80 | public: void __thiscall Matrix34::FastInverseFull(class Matrix34 const &) | ?FastInverseFull@Matrix34@@QAEXABV1@@Z
    0x568D20 | private: void __thiscall Matrix34::ArbitraryRotation(class Vector3 const &,float) | ?ArbitraryRotation@Matrix34@@AAEXABVVector3@@M@Z
    0x5691D0 | public: void __thiscall Matrix34::Rotate(class Vector3 const &,float) | ?Rotate@Matrix34@@QAEXABVVector3@@M@Z
    0x569820 | public: void __thiscall Matrix34::RotateAbs(class Vector3 const &,float) | ?RotateAbs@Matrix34@@QAEXABVVector3@@M@Z
    0x569D20 | public: void __thiscall Matrix34::RotateFull(class Vector3 const &,float) | ?RotateFull@Matrix34@@QAEXABVVector3@@M@Z
    0x56A400 | public: void __thiscall Matrix34::RotateToAbs(class Vector3 const &,class Vector3 const &,float) | ?RotateToAbs@Matrix34@@QAEXABVVector3@@0M@Z
    0x56A670 | public: void __thiscall Matrix34::RotateToFull(class Vector3 const &,class Vector3 const &,float) | ?RotateToFull@Matrix34@@QAEXABVVector3@@0M@Z
    0x56A6C0 | public: void __thiscall Matrix34::RotateTo(class Vector3 const &,class Vector3 const &,float) | ?RotateTo@Matrix34@@QAEXABVVector3@@0M@Z
    0x56A6F0 | public: class Matrix34 __thiscall Matrix34::operator*(float) const | ??DMatrix34@@QBE?AV0@M@Z
    0x56A7F0 | class Matrix34 __cdecl operator*(float,class Matrix34 const &) | ??D@YA?AVMatrix34@@MABV0@@Z
    0x56A8F0 | public: void __thiscall Matrix34::Scale(float,float,float) | ?Scale@Matrix34@@QAEXMMM@Z
    0x56A970 | public: void __thiscall Matrix34::ScaleAbs(float,float,float) | ?ScaleAbs@Matrix34@@QAEXMMM@Z
    0x56A9A0 | public: void __thiscall Matrix34::Scale(float) | ?Scale@Matrix34@@QAEXM@Z
    0x56AA20 | public: void __thiscall Matrix34::ScaleAbs(float) | ?ScaleAbs@Matrix34@@QAEXM@Z
    0x56AA50 | public: void __thiscall Matrix34::ScaleFull(float,float,float) | ?ScaleFull@Matrix34@@QAEXMMM@Z
    0x56AAF0 | public: void __thiscall Matrix34::ScaleFullAbs(float,float,float) | ?ScaleFullAbs@Matrix34@@QAEXMMM@Z
    0x56AB30 | public: void __thiscall Matrix34::ScaleFull(float) | ?ScaleFull@Matrix34@@QAEXM@Z
    0x56ABD0 | public: void __thiscall Matrix34::ScaleFullAbs(float) | ?ScaleFullAbs@Matrix34@@QAEXM@Z
    0x56AC10 | public: void __thiscall Matrix34::ScaleVolume(float,char) | ?ScaleVolume@Matrix34@@QAEXMD@Z
    0x56AD10 | public: void __thiscall Matrix34::ScaleVolumeAbs(float,char) | ?ScaleVolumeAbs@Matrix34@@QAEXMD@Z
    0x56AE10 | public: void __thiscall Matrix34::Transform(class Vector3 const &,class Vector3 const &,float) | ?Transform@Matrix34@@QAEXABVVector3@@0M@Z
    0x56AE80 | public: void __thiscall Matrix34::Normalize(void) | ?Normalize@Matrix34@@QAEXXZ
    0x56AFA0 | public: void __thiscall Matrix34::TrackBall(float,float,float,float,float) | ?TrackBall@Matrix34@@QAEXMMMMM@Z
    0x56B250 | public: void __thiscall Matrix34::Transpose(class Matrix34 const &) | ?Transpose@Matrix34@@QAEXABV1@@Z
    0x56B2B0 | public: float __thiscall Matrix34::Atan3(char,char) const | ?Atan3@Matrix34@@QBEMDD@Z
    0x56B630 | public: class Vector3 __thiscall Matrix34::GetEulers(char const *) const | ?GetEulers@Matrix34@@QBE?AVVector3@@PBD@Z
    0x56BCE0 | public: class Vector3 __thiscall Matrix34::GetEulers(void) const | ?GetEulers@Matrix34@@QBE?AVVector3@@XZ
    0x56BE80 | public: void __thiscall Matrix34::FromEulers(class Vector3 const &,char const *) | ?FromEulers@Matrix34@@QAEXABVVector3@@PBD@Z
    0x56C7E0 | public: void __thiscall Matrix34::FromEulers(class Vector3 const &) | ?FromEulers@Matrix34@@QAEXABVVector3@@@Z
    0x56CD00 | public: void __thiscall Matrix34::FromQuaternion(class Quaternion const &) | ?FromQuaternion@Matrix34@@QAEXABVQuaternion@@@Z
    0x56CE30 | public: void __thiscall Matrix34::LookAt(class Vector3 const &,class Vector3 const &) | ?LookAt@Matrix34@@QAEXABVVector3@@0@Z
    0x56CFD0 | public: void __thiscall Matrix34::PolarView(float,float,float,float) | ?PolarView@Matrix34@@QAEXMMMM@Z
    0x56D030 | public: void __thiscall Matrix34::PolarView2(float,float,float,float) | ?PolarView2@Matrix34@@QAEXMMMM@Z
    0x56D090 | public: void __thiscall Matrix34::PolarView(class Vector4 const &) | ?PolarView@Matrix34@@QAEXABVVector4@@@Z
    0x56D0B0 | public: void __thiscall Matrix34::GetLookAt(class Vector3 *,class Vector3 *,float) const | ?GetLookAt@Matrix34@@QBEXPAVVector3@@0M@Z
    0x56D140 | public: void __thiscall Matrix34::GetPolar(class Vector4 *,class Vector3 *,float) const | ?GetPolar@Matrix34@@QBEXPAVVector4@@PAVVector3@@M@Z
    0x56D180 | public: unsigned int __thiscall Matrix34::RotEqual(class Matrix34 const &,float) const | ?RotEqual@Matrix34@@QBEIABV1@M@Z
    0x56D1E0 | public: unsigned int __thiscall Matrix34::Equal(class Matrix34 const &,float) const | ?Equal@Matrix34@@QBEIABV1@M@Z
    0x56D220 | public: void __thiscall Matrix34::CalcAppRates(float &,float &,class Matrix34 const &,float,float) | ?CalcAppRates@Matrix34@@QAEXAAM0ABV1@MM@Z
    0x56D310 | public: int __thiscall Matrix34::Approach(class Matrix34 const &,float,float,float) | ?Approach@Matrix34@@QAEHABV1@MMM@Z
    0x56D460 | public: int __thiscall Matrix34::Approach(class Matrix34 const &,float,float) | ?Approach@Matrix34@@QAEHABV1@MM@Z
    0x56D5B0 | public: void __thiscall Matrix34::Interpolate(class Matrix34 const &,class Matrix34 const &,float) | ?Interpolate@Matrix34@@QAEXABV1@0M@Z
    0x56D6A0 | public: void __thiscall Matrix34::Print(void) const | ?Print@Matrix34@@QBEXXZ
    0x56D760 | public: static void __cdecl Matrix34::DeclareFields(void) | ?DeclareFields@Matrix34@@SAXXZ
    0x56D8A0 | public: static class MetaClass * __cdecl Matrix34::GetClass(void) | ?GetClass@Matrix34@@SAPAVMetaClass@@XZ
    0x56D8B0 | float __cdecl ASinf(float) | ?ASinf@@YAMM@Z
    0x56D950 | float __cdecl asinf_fast(float) | ?asinf_fast@@YAMM@Z
    0x56D980 | float __cdecl ATan2f(float,float) | ?ATan2f@@YAMMM@Z
    0x909490 | class Matrix34 IDENTITY | ?IDENTITY@@3VMatrix34@@A
    0x9094C0 | class MetaClass Matrix34MetaClass | ?Matrix34MetaClass@@3VMetaClass@@A
*/

#include "vector3.h"

class Matrix34
{
public:
    // 0x478540 | ??0Matrix34@@QAE@XZ | inline
    constexpr Matrix34() = default;

    constexpr Matrix34(Vector3 m0, Vector3 m1, Vector3 m2, Vector3 m3)
        : m0(m0)
        , m1(m1)
        , m2(m2)
        , m3(m3)
    {}

    // 0x567450 | ??0Matrix34@@QAE@ABVMatrix44@@@Z | unused
    ARTS_IMPORT Matrix34(class Matrix44 const& arg1);

    // 0x56A6F0 | ??DMatrix34@@QBE?AV0@M@Z | unused
    ARTS_IMPORT class Matrix34 operator*(f32 arg1);

    // 0x5674E0 | ??HMatrix34@@QAE?AV0@ABV0@@Z | unused
    ARTS_IMPORT class Matrix34 operator+(class Matrix34 const& arg1);

    // 0x5675B0 | ??GMatrix34@@QAE?AV0@ABV0@@Z | unused
    ARTS_IMPORT class Matrix34 operator-(class Matrix34 const& arg1);

    // 0x56D460 | ?Approach@Matrix34@@QAEHABV1@MM@Z | unused
    ARTS_IMPORT i32 Approach(class Matrix34 const& arg1, f32 arg2, f32 arg3);

    // 0x56D310 | ?Approach@Matrix34@@QAEHABV1@MMM@Z
    ARTS_IMPORT i32 Approach(class Matrix34 const& arg1, f32 arg2, f32 arg3, f32 arg4);

    // 0x56B2B0 | ?Atan3@Matrix34@@QBEMDD@Z | unused
    ARTS_IMPORT f32 Atan3(char arg1, char arg2);

    // 0x56D220 | ?CalcAppRates@Matrix34@@QAEXAAM0ABV1@MM@Z | unused
    ARTS_IMPORT void CalcAppRates(f32& arg1, f32& arg2, class Matrix34 const& arg3, f32 arg4, f32 arg5);

    // 0x5686F0 | ?Determinant@Matrix34@@QBEMXZ | unused
    ARTS_IMPORT f32 Determinant();

    // 0x567680 | ?Dot@Matrix34@@QAEXABV1@0@Z
    ARTS_IMPORT void Dot(class Matrix34 const& arg1, class Matrix34 const& arg2);

    // 0x5678A0 | ?Dot3x3@Matrix34@@QAEXABV1@0@Z
    ARTS_IMPORT void Dot3x3(class Matrix34 const& arg1, class Matrix34 const& arg2);

    // 0x56D1E0 | ?Equal@Matrix34@@QBEIABV1@M@Z | unused
    ARTS_IMPORT u32 Equal(class Matrix34 const& arg1, f32 arg2);

    // 0x568980 | ?FastInverse@Matrix34@@QAEXABV1@@Z
    ARTS_IMPORT void FastInverse(class Matrix34 const& arg1);

    // 0x568A80 | ?FastInverseFull@Matrix34@@QAEXABV1@@Z | unused
    ARTS_IMPORT void FastInverseFull(class Matrix34 const& arg1);

    // 0x56C7E0 | ?FromEulers@Matrix34@@QAEXABVVector3@@@Z
    ARTS_IMPORT void FromEulers(class Vector3 const& arg1);

    // 0x56BE80 | ?FromEulers@Matrix34@@QAEXABVVector3@@PBD@Z
    ARTS_IMPORT void FromEulers(class Vector3 const& arg1, char const* arg2);

    // 0x56CD00 | ?FromQuaternion@Matrix34@@QAEXABVQuaternion@@@Z
    ARTS_IMPORT void FromQuaternion(class Quaternion const& arg1);

    // 0x56BCE0 | ?GetEulers@Matrix34@@QBE?AVVector3@@XZ
    ARTS_IMPORT class Vector3 GetEulers();

    // 0x56B630 | ?GetEulers@Matrix34@@QBE?AVVector3@@PBD@Z
    ARTS_IMPORT class Vector3 GetEulers(char const* arg1);

    // 0x56D0B0 | ?GetLookAt@Matrix34@@QBEXPAVVector3@@0M@Z
    ARTS_IMPORT void GetLookAt(class Vector3* arg1, class Vector3* arg2, f32 arg3);

    // 0x56D140 | ?GetPolar@Matrix34@@QBEXPAVVector4@@PAVVector3@@M@Z
    ARTS_IMPORT void GetPolar(class Vector4* arg1, class Vector3* arg2, f32 arg3);

    // 0x5674B0 | ?Identity@Matrix34@@QAEXXZ
    constexpr void Identity();

    // 0x56D5B0 | ?Interpolate@Matrix34@@QAEXABV1@0M@Z | unused
    ARTS_IMPORT void Interpolate(class Matrix34 const& arg1, class Matrix34 const& arg2, f32 arg3);

    // 0x5687A0 | ?Inverse@Matrix34@@QBE?AV1@XZ
    ARTS_IMPORT class Matrix34 Inverse();

    // 0x56CE30 | ?LookAt@Matrix34@@QAEXABVVector3@@0@Z
    ARTS_IMPORT void LookAt(class Vector3 const& arg1, class Vector3 const& arg2);

    // 0x56AE80 | ?Normalize@Matrix34@@QAEXXZ
    ARTS_IMPORT void Normalize();

    // 0x56D090 | ?PolarView@Matrix34@@QAEXABVVector4@@@Z
    ARTS_IMPORT void PolarView(class Vector4 const& arg1);

    // 0x56CFD0 | ?PolarView@Matrix34@@QAEXMMMM@Z
    ARTS_IMPORT void PolarView(f32 arg1, f32 arg2, f32 arg3, f32 arg4);

    // 0x56D030 | ?PolarView2@Matrix34@@QAEXMMMM@Z | unused
    ARTS_IMPORT void PolarView2(f32 arg1, f32 arg2, f32 arg3, f32 arg4);

    // 0x56D6A0 | ?Print@Matrix34@@QBEXXZ | unused
    ARTS_IMPORT void Print();

    // 0x56D180 | ?RotEqual@Matrix34@@QBEIABV1@M@Z
    ARTS_IMPORT u32 RotEqual(class Matrix34 const& arg1, f32 arg2);

    // 0x5691D0 | ?Rotate@Matrix34@@QAEXABVVector3@@M@Z
    ARTS_IMPORT void Rotate(class Vector3 const& arg1, f32 arg2);

    // 0x569820 | ?RotateAbs@Matrix34@@QAEXABVVector3@@M@Z
    ARTS_IMPORT void RotateAbs(class Vector3 const& arg1, f32 arg2);

    // 0x569D20 | ?RotateFull@Matrix34@@QAEXABVVector3@@M@Z
    ARTS_IMPORT void RotateFull(class Vector3 const& arg1, f32 arg2);

    // 0x4DEC70 | ?RotateNoTrans@Matrix34@@QBE?AVVector3@@ABV2@@Z | inline
    ARTS_IMPORT class Vector3 RotateNoTrans(class Vector3 const& arg1);

    // 0x56A6C0 | ?RotateTo@Matrix34@@QAEXABVVector3@@0M@Z
    ARTS_IMPORT void RotateTo(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3);

    // 0x56A400 | ?RotateToAbs@Matrix34@@QAEXABVVector3@@0M@Z
    ARTS_IMPORT void RotateToAbs(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3);

    // 0x56A670 | ?RotateToFull@Matrix34@@QAEXABVVector3@@0M@Z | unused
    ARTS_IMPORT void RotateToFull(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3);

    // 0x56A9A0 | ?Scale@Matrix34@@QAEXM@Z
    ARTS_IMPORT void Scale(f32 arg1);

    // 0x56A8F0 | ?Scale@Matrix34@@QAEXMMM@Z
    ARTS_IMPORT void Scale(f32 arg1, f32 arg2, f32 arg3);

    // 0x56AA20 | ?ScaleAbs@Matrix34@@QAEXM@Z | unused
    ARTS_IMPORT void ScaleAbs(f32 arg1);

    // 0x56A970 | ?ScaleAbs@Matrix34@@QAEXMMM@Z
    ARTS_IMPORT void ScaleAbs(f32 arg1, f32 arg2, f32 arg3);

    // 0x56AB30 | ?ScaleFull@Matrix34@@QAEXM@Z | unused
    ARTS_IMPORT void ScaleFull(f32 arg1);

    // 0x56AA50 | ?ScaleFull@Matrix34@@QAEXMMM@Z | unused
    ARTS_IMPORT void ScaleFull(f32 arg1, f32 arg2, f32 arg3);

    // 0x56ABD0 | ?ScaleFullAbs@Matrix34@@QAEXM@Z | unused
    ARTS_IMPORT void ScaleFullAbs(f32 arg1);

    // 0x56AAF0 | ?ScaleFullAbs@Matrix34@@QAEXMMM@Z
    ARTS_IMPORT void ScaleFullAbs(f32 arg1, f32 arg2, f32 arg3);

    // 0x56AC10 | ?ScaleVolume@Matrix34@@QAEXMD@Z | unused
    ARTS_IMPORT void ScaleVolume(f32 arg1, char arg2);

    // 0x56AD10 | ?ScaleVolumeAbs@Matrix34@@QAEXMD@Z | unused
    ARTS_IMPORT void ScaleVolumeAbs(f32 arg1, char arg2);

    // 0x567A30 | ?SolveSVD@Matrix34@@QBE?AVVector3@@ABV2@@Z
    ARTS_IMPORT class Vector3 SolveSVD(class Vector3 const& arg1);

    // 0x56AFA0 | ?TrackBall@Matrix34@@QAEXMMMMM@Z | unused
    ARTS_IMPORT void TrackBall(f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);

    // 0x56AE10 | ?Transform@Matrix34@@QAEXABVVector3@@0M@Z | unused
    ARTS_IMPORT void Transform(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3);

    // 0x4DECA0 | ?Transpose@Matrix34@@QBE?AV1@XZ | inline
    ARTS_IMPORT class Matrix34 Transpose();

    // 0x56B250 | ?Transpose@Matrix34@@QAEXABV1@@Z
    ARTS_IMPORT void Transpose(class Matrix34 const& arg1);

    Vector3 m0;
    Vector3 m1;
    Vector3 m2;
    Vector3 m3;

    STATIC_META_DECLARE;

private:
    // 0x568D20 | ?ArbitraryRotation@Matrix34@@AAEXABVVector3@@M@Z
    ARTS_IMPORT void ArbitraryRotation(class Vector3 const& arg1, f32 arg2);
};

check_size(Matrix34, 0x30);

// 0x56A7F0 | ??D@YA?AVMatrix34@@MABV0@@Z | unused
ARTS_IMPORT class Matrix34 operator*(f32 arg1, class Matrix34 const& arg2);

// 0x56D8B0 | ?ASinf@@YAMM@Z | inline
ARTS_IMPORT f32 ASinf(f32 arg1);

// 0x56D980 | ?ATan2f@@YAMMM@Z | inline
ARTS_IMPORT f32 ATan2f(f32 arg1, f32 arg2);

// 0x56D950 | ?asinf_fast@@YAMM@Z | inline
ARTS_IMPORT f32 asinf_fast(f32 arg1);

// 0x909490 | ?IDENTITY@@3VMatrix34@@A
constexpr const Matrix34 IDENTITY {
    {1.0f, 0.0f, 0.0f},
    {0.0f, 1.0f, 0.0f},
    {0.0f, 0.0f, 1.0f},
    {0.0f, 0.0f, 0.0f},
};

// 0x9094C0 | ?Matrix34MetaClass@@3VMetaClass@@A
// ARTS_IMPORT extern class MetaClass Matrix34MetaClass;

constexpr void Matrix34::Identity()
{
    *this = IDENTITY;
}
