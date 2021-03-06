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
    mmcar:car

    0x473380 | public: __thiscall mmCar::mmCar(void) | ??0mmCar@@QAE@XZ
    0x4734A0 | public: void __thiscall mmCar::TranslateFlags(int) | ?TranslateFlags@mmCar@@QAEXH@Z
    0x473500 | public: void __thiscall mmCar::ReleaseTrailer(void) | ?ReleaseTrailer@mmCar@@QAEXXZ
    0x473530 | public: void __thiscall mmCar::Init(char *,int,int) | ?Init@mmCar@@QAEXPADHH@Z
    0x473960 | public: void __thiscall mmCar::ReInit(char *,int) | ?ReInit@mmCar@@QAEXPADH@Z
    0x473B90 | public: virtual void __thiscall mmCar::Reset(void) | ?Reset@mmCar@@UAEXXZ
    0x473C40 | public: virtual void __thiscall mmCar::Update(void) | ?Update@mmCar@@UAEXXZ
    0x473C80 | public: virtual void __thiscall mmCar::PostUpdate(void) | ?PostUpdate@mmCar@@UAEXXZ
    0x473D70 | public: void __thiscall mmCar::EnableDriving(int) | ?EnableDriving@mmCar@@QAEXH@Z
    0x473DE0 | public: int __thiscall mmCar::IsDrivingDisabled(void) | ?IsDrivingDisabled@mmCar@@QAEHXZ
    0x473DF0 | public: void __thiscall mmCar::ToggleSiren(void) | ?ToggleSiren@mmCar@@QAEXXZ
    0x473E20 | public: void __thiscall mmCar::StartSiren(void) | ?StartSiren@mmCar@@QAEXXZ
    0x473E40 | public: void __thiscall mmCar::StopSiren(void) | ?StopSiren@mmCar@@QAEXXZ
    0x473E60 | public: void __thiscall mmCar::RemoveVehicleAudio(void) | ?RemoveVehicleAudio@mmCar@@QAEXXZ
    0x473E70 | public: void __thiscall mmCar::ClearDamage(void) | ?ClearDamage@mmCar@@QAEXXZ
    0x473EB0 | public: void __thiscall mmCar::Impact(class mmIntersection *,class Vector3 *,float,int,class Vector3 *) | ?Impact@mmCar@@QAEXPAVmmIntersection@@PAVVector3@@MH1@Z
    0x4742E0 | int __cdecl EggNameIndex(char *) | ?EggNameIndex@@YAHPAD@Z
    0x474340 | public: char * __thiscall mmCar::VehNameRemap(char *,int) | ?VehNameRemap@mmCar@@QAEPADPADH@Z
    0x4745E0 | public: virtual void __thiscall mmCar::AddWidgets(class Bank *) | ?AddWidgets@mmCar@@UAEXPAVBank@@@Z
    0x474640 | public: static void __cdecl mmCar::DeclareFields(void) | ?DeclareFields@mmCar@@SAXXZ
    0x4747C0 | public: virtual class MetaClass * __thiscall mmCar::GetClass(void) | ?GetClass@mmCar@@UAEPAVMetaClass@@XZ
    0x474800 | public: virtual void * __thiscall mmCar::`vector deleting destructor'(unsigned int) | ??_EmmCar@@UAEPAXI@Z
    0x474860 | public: virtual class asInertialCS * __thiscall mmCar::GetICS(void) | ?GetICS@mmCar@@UAEPAVasInertialCS@@XZ
    0x474870 | public: virtual class asBound * __thiscall mmCar::GetBound(void) | ?GetBound@mmCar@@UAEPAVasBound@@XZ
    0x61C0E8 | const mmCar::`vftable' | ??_7mmCar@@6B@
    0x6A7E30 | public: static float mmCar::ProbeTime | ?ProbeTime@mmCar@@2MA
    0x6A7E34 | public: static float mmCar::TotalUpdateTime | ?TotalUpdateTime@mmCar@@2MA
    0x6A7E3C | float ffval | ?ffval@@3MA
    0x6A7E40 | class MetaClass mmCarMetaClass | ?mmCarMetaClass@@3VMetaClass@@A
    0x6A7E68 | public: static float mmCar::UpdateTime | ?UpdateTime@mmCar@@2MA
    0x6A7E6C | public: static float mmCar::PostUpdateTime | ?PostUpdateTime@mmCar@@2MA
*/

#include "mmphysics/entity.h"

class mmCar final : public mmPhysEntity
{
    // const mmCar::`vftable' @ 0x61C0E8

public:
    // 0x473380 | ??0mmCar@@QAE@XZ
    ARTS_IMPORT mmCar();

    // 0x474800 | ??_EmmCar@@UAEPAXI@Z
    // 0x42D1F0 | ??1mmCar@@UAE@XZ | inline
    ARTS_IMPORT ~mmCar() override;

    // 0x4745E0 | ?AddWidgets@mmCar@@UAEXPAVBank@@@Z
    ARTS_IMPORT void AddWidgets(class Bank* arg1) override;

    // 0x473E70 | ?ClearDamage@mmCar@@QAEXXZ
    ARTS_IMPORT void ClearDamage();

    // 0x473D70 | ?EnableDriving@mmCar@@QAEXH@Z
    ARTS_IMPORT void EnableDriving(i32 arg1);

    // 0x474870 | ?GetBound@mmCar@@UAEPAVasBound@@XZ | inline
    ARTS_IMPORT class asBound* GetBound() override;

    // 0x4747C0 | ?GetClass@mmCar@@UAEPAVMetaClass@@XZ
    ARTS_IMPORT class MetaClass* GetClass() override;

    // 0x474860 | ?GetICS@mmCar@@UAEPAVasInertialCS@@XZ | inline
    ARTS_IMPORT class asInertialCS* GetICS() override;

    // 0x473EB0 | ?Impact@mmCar@@QAEXPAVmmIntersection@@PAVVector3@@MH1@Z
    ARTS_IMPORT void Impact(class mmIntersection* arg1, class Vector3* arg2, f32 arg3, i32 arg4, class Vector3* arg5);

    // 0x473530 | ?Init@mmCar@@QAEXPADHH@Z
    ARTS_IMPORT void Init(char* arg1, i32 arg2, i32 arg3);

    // 0x473DE0 | ?IsDrivingDisabled@mmCar@@QAEHXZ
    ARTS_IMPORT i32 IsDrivingDisabled();

    // 0x473C80 | ?PostUpdate@mmCar@@UAEXXZ
    ARTS_IMPORT void PostUpdate() override;

    // 0x473960 | ?ReInit@mmCar@@QAEXPADH@Z
    ARTS_IMPORT void ReInit(char* arg1, i32 arg2);

    // 0x473500 | ?ReleaseTrailer@mmCar@@QAEXXZ
    ARTS_IMPORT void ReleaseTrailer();

    // 0x473E60 | ?RemoveVehicleAudio@mmCar@@QAEXXZ
    ARTS_IMPORT void RemoveVehicleAudio();

    // 0x473B90 | ?Reset@mmCar@@UAEXXZ
    ARTS_IMPORT void Reset() override;

    // 0x473E20 | ?StartSiren@mmCar@@QAEXXZ
    ARTS_IMPORT void StartSiren();

    // 0x473E40 | ?StopSiren@mmCar@@QAEXXZ
    ARTS_IMPORT void StopSiren();

    // 0x473DF0 | ?ToggleSiren@mmCar@@QAEXXZ
    ARTS_IMPORT void ToggleSiren();

    // 0x4734A0 | ?TranslateFlags@mmCar@@QAEXH@Z
    ARTS_IMPORT void TranslateFlags(i32 arg1);

    // 0x473C40 | ?Update@mmCar@@UAEXXZ
    ARTS_IMPORT void Update() override;

    // 0x474340 | ?VehNameRemap@mmCar@@QAEPADPADH@Z
    ARTS_IMPORT char* VehNameRemap(char* arg1, i32 arg2);

    // 0x474640 | ?DeclareFields@mmCar@@SAXXZ
    ARTS_IMPORT static void DeclareFields();

    // 0x6A7E6C | ?PostUpdateTime@mmCar@@2MA
    ARTS_IMPORT static f32 PostUpdateTime;

    // 0x6A7E30 | ?ProbeTime@mmCar@@2MA
    ARTS_IMPORT static f32 ProbeTime;

    // 0x6A7E34 | ?TotalUpdateTime@mmCar@@2MA
    ARTS_IMPORT static f32 TotalUpdateTime;

    // 0x6A7E68 | ?UpdateTime@mmCar@@2MA
    ARTS_IMPORT static f32 UpdateTime;

    u8 gap20[0x22EC];
};

check_size(mmCar, 0x230C);

// 0x4742E0 | ?EggNameIndex@@YAHPAD@Z
ARTS_IMPORT i32 EggNameIndex(char* arg1);

// 0x6A7E3C | ?ffval@@3MA
ARTS_IMPORT extern f32 ffval;

// 0x6A7E40 | ?mmCarMetaClass@@3VMetaClass@@A
// ARTS_IMPORT extern class MetaClass mmCarMetaClass;
