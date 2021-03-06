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

define_dummy_symbol(agi_cmodel8);

#include "cmodel8.h"

#include "surface.h"

u32 agiColorModel8::GetPixel(agiSurfaceDesc* surface, i32 x, i32 y)
{
    return (static_cast<u8*>(surface->Surface) + (y * surface->Pitch))[x];
}

void agiColorModel8::SetPixel(agiSurfaceDesc* surface, i32 x, i32 y, u32 color)
{
    (static_cast<u8*>(surface->Surface) + (y * surface->Pitch))[x] = static_cast<u8>(color);
}
