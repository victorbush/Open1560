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
    agi:render

    0x55DD80 | public: __thiscall agiRenderer::agiRenderer(void) | ??0agiRenderer@@QAE@XZ
    0x907868 | struct agiCardStateStruct agiLastCardState | ?agiLastCardState@@3UagiCardStateStruct@@A
    0x907898 | class agiCardState agiCurCardState | ?agiCurCardState@@3VagiCardState@@A
*/

class agiRenderer
{
    // const agiRenderer::`vftable' @ 0x6214D0

public:
    // 0x55DD80 | ??0agiRenderer@@QAE@XZ
    ARTS_IMPORT agiRenderer();

protected:
    // 0x555230 | ??_GagiRenderer@@MAEPAXI@Z
    // 0x555230 | ??_EagiRenderer@@MAEPAXI@Z
    ARTS_IMPORT virtual ~agiRenderer();

public:
    virtual void BeginGroup() = 0;

    virtual void Draw(class DLP* arg1, i32 arg2) = 0;

    virtual void DrawCard(class Vector3& arg1) = 0;

    virtual void EndGroup() = 0;

    virtual void BeginDraw(i32 arg1) = 0;

    virtual void Verts(union agiVtx* arg1, i32 arg2) = 0;

    virtual void Points(union agiVtx* arg1, i32 arg2) = 0;

    virtual void DrawTri(i32 arg1, i32 arg2, i32 arg3) = 0;

    virtual void DrawLine(i32 arg1, i32 arg2) = 0;

    virtual void DrawLabel(union agiVtx& arg1, char* arg2) = 0;

    virtual void EndDraw() = 0;

    u8 gap4[0x8];
};

check_size(agiRenderer, 0xC);

// 0x907898 | ?agiCurCardState@@3VagiCardState@@A
ARTS_IMPORT extern class agiCardState agiCurCardState;

// 0x907868 | ?agiLastCardState@@3UagiCardStateStruct@@A
ARTS_IMPORT extern struct agiCardStateStruct agiLastCardState;
