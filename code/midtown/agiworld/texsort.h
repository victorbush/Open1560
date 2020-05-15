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
    agiworld:texsort

    0x503830 | public: __thiscall agiTexSorter::agiTexSorter(void) | ??0agiTexSorter@@QAE@XZ
    0x503A50 | public: __thiscall agiTexSorter::~agiTexSorter(void) | ??1agiTexSorter@@QAE@XZ
    0x503A60 | public: static class agiPolySet * __cdecl agiTexSorter::GetEnv(class agiTexDef *,int,int) | ?GetEnv@agiTexSorter@@SAPAVagiPolySet@@PAVagiTexDef@@HH@Z
    0x503B20 | public: static class agiPolySet * __cdecl agiTexSorter::BeginVerts(class agiTexDef *,int,int) | ?BeginVerts@agiTexSorter@@SAPAVagiPolySet@@PAVagiTexDef@@HH@Z
    0x503D70 | public: static class agiPolySet * __cdecl agiTexSorter::BeginVerts2(class agiTexDef *,class agiTexDef *,int,int) | ?BeginVerts2@agiTexSorter@@SAPAVagiPolySet@@PAVagiTexDef@@0HH@Z
    0x503FF0 | public: static void __cdecl agiTexSorter::EndVerts(void) | ?EndVerts@agiTexSorter@@SAXXZ
    0x504040 | public: static void __cdecl agiTexSorter::EndVerts2(void) | ?EndVerts2@agiTexSorter@@SAXXZ
    0x504090 | public: void __thiscall agiTexSorter::Cull(int) | ?Cull@agiTexSorter@@QAEXH@Z
    0x504150 | public: static void __cdecl agiTexSorter::DoTexture(class agiPolySet *) | ?DoTexture@agiTexSorter@@SAXPAVagiPolySet@@@Z
    0x5043E0 | class agiTexDef * __cdecl GetPackedTexture(char *,int) | ?GetPackedTexture@@YAPAVagiTexDef@@PADH@Z
    0x504620 | public: void __thiscall agiTexSorter::AddWidgets(class Bank *) | ?AddWidgets@agiTexSorter@@QAEXPAVBank@@@Z
    0x64A3E0 | public: static int agiTexSorter::MaxOpaqueSetCount | ?MaxOpaqueSetCount@agiTexSorter@@2HA
    0x64A3E4 | public: static int agiTexSorter::MaxAlphaSetCount | ?MaxAlphaSetCount@agiTexSorter@@2HA
    0x64A3E8 | public: static int agiTexSorter::MaxVertsPerSet | ?MaxVertsPerSet@agiTexSorter@@2HA
    0x64A3EC | public: static int agiTexSorter::MaxIndicesPerSet | ?MaxIndicesPerSet@agiTexSorter@@2HA
    0x64A3F0 | int EnableTexSorting | ?EnableTexSorting@@3HA
    0x64A3F4 | public: static int agiTexSorter::InitialZMode | ?InitialZMode@agiTexSorter@@2HA
    0x719620 | public: static int agiTexSorter::GeometryCalls | ?GeometryCalls@agiTexSorter@@2HA
    0x719624 | private: static class agiTexSorter * agiTexSorter::Instance | ?Instance@agiTexSorter@@0PAV1@A
    0x719628 | char * TextureSuffix | ?TextureSuffix@@3PADA
    0x71962C | int EnvMapFlushes | ?EnvMapFlushes@@3HA
    0x719630 | public: static class agiPolySet * * agiTexSorter::OpaquePolySets | ?OpaquePolySets@agiTexSorter@@2PAPAVagiPolySet@@A
    0x719730 | public: static int agiTexSorter::OutOfPoolFlushes | ?OutOfPoolFlushes@agiTexSorter@@2HA
    0x719734 | public: static int agiTexSorter::BigPoolFlushes | ?BigPoolFlushes@agiTexSorter@@2HA
    0x719738 | public: static int agiPolySet::TriCount | ?TriCount@agiPolySet@@2HA
    0x71973C | public: static int agiTexSorter::OverflowFlushes | ?OverflowFlushes@agiTexSorter@@2HA
    0x719744 | public: static int agiTexSorter::OpaqueSetCount | ?OpaqueSetCount@agiTexSorter@@2HA
    0x719750 | public: static class agiPolySet agiTexSorter::EnvPolySet | ?EnvPolySet@agiTexSorter@@2VagiPolySet@@A
    0x71977C | public: static int agiTexSorter::TotalTris | ?TotalTris@agiTexSorter@@2HA
    0x719780 | public: static int agiTexSorter::AlphaSetCount | ?AlphaSetCount@agiTexSorter@@2HA
    0x719788 | public: static class agiPolySet * * agiTexSorter::AlphaPolySets | ?AlphaPolySets@agiTexSorter@@2PAPAVagiPolySet@@A
    0x719838 | int DisableFogOnAlphaGlow | ?DisableFogOnAlphaGlow@@3HA
*/

class agiTexSorter
{
public:
    // 0x503830 | ??0agiTexSorter@@QAE@XZ
    agiTexSorter();

    // 0x503A50 | ??1agiTexSorter@@QAE@XZ
    ~agiTexSorter();

    // 0x504620 | ?AddWidgets@agiTexSorter@@QAEXPAVBank@@@Z
    void AddWidgets(class Bank* arg1);

    // 0x504090 | ?Cull@agiTexSorter@@QAEXH@Z
    void Cull(i32 arg1);

    // 0x503B20 | ?BeginVerts@agiTexSorter@@SAPAVagiPolySet@@PAVagiTexDef@@HH@Z
    static class agiPolySet* BeginVerts(class agiTexDef* arg1, i32 arg2, i32 arg3);

    // 0x503D70 | ?BeginVerts2@agiTexSorter@@SAPAVagiPolySet@@PAVagiTexDef@@0HH@Z
    static class agiPolySet* BeginVerts2(class agiTexDef* arg1, class agiTexDef* arg2, i32 arg3, i32 arg4);

    // 0x504150 | ?DoTexture@agiTexSorter@@SAXPAVagiPolySet@@@Z
    static void DoTexture(class agiPolySet* arg1);

    // 0x503FF0 | ?EndVerts@agiTexSorter@@SAXXZ
    static void EndVerts();

    // 0x504040 | ?EndVerts2@agiTexSorter@@SAXXZ
    static void EndVerts2();

    // 0x503A60 | ?GetEnv@agiTexSorter@@SAPAVagiPolySet@@PAVagiTexDef@@HH@Z
    static class agiPolySet* GetEnv(class agiTexDef* arg1, i32 arg2, i32 arg3);

    // 0x719788 | ?AlphaPolySets@agiTexSorter@@2PAPAVagiPolySet@@A
    static inline extern_var(0x719788, class agiPolySet* [32], AlphaPolySets);

    // 0x719780 | ?AlphaSetCount@agiTexSorter@@2HA
    static inline extern_var(0x719780, i32, AlphaSetCount);

    // 0x719734 | ?BigPoolFlushes@agiTexSorter@@2HA
    static inline extern_var(0x719734, i32, BigPoolFlushes);

    // 0x719750 | ?EnvPolySet@agiTexSorter@@2VagiPolySet@@A
    static inline extern_var(0x719750, class agiPolySet, EnvPolySet);

    // 0x719620 | ?GeometryCalls@agiTexSorter@@2HA
    static inline extern_var(0x719620, i32, GeometryCalls);

    // 0x64A3F4 | ?InitialZMode@agiTexSorter@@2HA
    static inline extern_var(0x64A3F4, i32, InitialZMode);

    // 0x64A3E4 | ?MaxAlphaSetCount@agiTexSorter@@2HA
    static inline extern_var(0x64A3E4, i32, MaxAlphaSetCount);

    // 0x64A3EC | ?MaxIndicesPerSet@agiTexSorter@@2HA
    static inline extern_var(0x64A3EC, i32, MaxIndicesPerSet);

    // 0x64A3E0 | ?MaxOpaqueSetCount@agiTexSorter@@2HA
    static inline extern_var(0x64A3E0, i32, MaxOpaqueSetCount);

    // 0x64A3E8 | ?MaxVertsPerSet@agiTexSorter@@2HA
    static inline extern_var(0x64A3E8, i32, MaxVertsPerSet);

    // 0x719630 | ?OpaquePolySets@agiTexSorter@@2PAPAVagiPolySet@@A
    static inline extern_var(0x719630, class agiPolySet* [64], OpaquePolySets);

    // 0x719744 | ?OpaqueSetCount@agiTexSorter@@2HA
    static inline extern_var(0x719744, i32, OpaqueSetCount);

    // 0x719730 | ?OutOfPoolFlushes@agiTexSorter@@2HA
    static inline extern_var(0x719730, i32, OutOfPoolFlushes);

    // 0x71973C | ?OverflowFlushes@agiTexSorter@@2HA
    static inline extern_var(0x71973C, i32, OverflowFlushes);

    // 0x71977C | ?TotalTris@agiTexSorter@@2HA
    static inline extern_var(0x71977C, i32, TotalTris);

private:
    // 0x719624 | ?Instance@agiTexSorter@@0PAV1@A
    static inline extern_var(0x719624, class agiTexSorter*, Instance);
};

check_size(agiTexSorter, 0x1);

// 0x5043E0 | ?GetPackedTexture@@YAPAVagiTexDef@@PADH@Z
class agiTexDef* GetPackedTexture(char* arg1, i32 arg2);

// 0x719838 | ?DisableFogOnAlphaGlow@@3HA
inline extern_var(0x719838, i32, DisableFogOnAlphaGlow);

// 0x64A3F0 | ?EnableTexSorting@@3HA
inline extern_var(0x64A3F0, i32, EnableTexSorting);

// 0x71962C | ?EnvMapFlushes@@3HA
inline extern_var(0x71962C, i32, EnvMapFlushes);

// 0x719628 | ?TextureSuffix@@3PADA
inline extern_var(0x719628, char*, TextureSuffix);
