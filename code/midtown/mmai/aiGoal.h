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
    mmai:aiGoal
*/

class aiGoal
{
    // const aiGoal::`vftable' @ 0x61BAF8

public:
    // 0x45F6F0 | ??1aiGoal@@QAE@XZ | inline
    ARTS_IMPORT ~aiGoal() = default;

    virtual void Init() = 0;

    virtual void Reset() = 0;

    virtual i32 Context() = 0;

    virtual i32 Priority() = 0;

    // 0x45F700 | ?Update@aiGoal@@UAEXXZ | inline
    ARTS_IMPORT virtual void Update();

    u8 gap4[0x4];
};

check_size(aiGoal, 0x8);
