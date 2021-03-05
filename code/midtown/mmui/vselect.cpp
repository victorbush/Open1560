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

define_dummy_symbol(mmui_vselect);

#include "vselect.h"
#include "data7/str.h"
#include "mmcityinfo/vehlist.h"
#include "mmaudio/sound.h"

constexpr auto MAX_BASE_NAME_SIZE = 40;
static char carBaseName[MAX_BASE_NAME_SIZE];

VehicleSelectBase::VehicleSelectBase(i32 menu_id)
    : UIMenu(menu_id)
    , gapAC()
    , gapB4()
{
    Sound = new AudSound(AudSound::GetSoft2DFlags(), VehicleListPtr->NumVehicles, -1);

    for (int i = 0; i < VehicleListPtr->NumVehicles; ++i)
    {
        mmVehInfo* vehicleInfo = VehicleListPtr->GetVehicleInfo(i);
        if (!vehicleInfo || !vehicleInfo->Valid)
        {
            continue;
        }
        
        char name[0x50];
        sprintf_s(name, sizeof(name), "%s_select", vehicleInfo->BaseName);
        Sound->Load(name, i);
        Sound->SetVolume(0.91000003f, -1);
    }

    // TODO - not sure what this array is of
    gap12C = new int[VehicleListPtr->NumVehicles << 4];

    for (int i = 0; i < 4; ++i)
    {
        gap140[i] = 0x49742400;
        gap150[i] = 0;
    }

    gapA4 = -1;
}

char* VehicleSelectBase::GetCarTitle(i32 carIndex, char* descriptionOut, i16 playSound, string* colorsOut)
{
    mmVehInfo* vehicleInfo = VehicleListPtr->GetVehicleInfo(carIndex);

    sprintf_s(carBaseName, MAX_BASE_NAME_SIZE, "%s", vehicleInfo->BaseName);

    if (descriptionOut) 
    {
        sprintf(descriptionOut, "%s", vehicleInfo->Description);
    }

    if (colorsOut)
    {
        *colorsOut = vehicleInfo->Colors;
    }

    if (playSound && Sound)
    {
        Sound->CarIndex = carIndex;

        if (!Sound->IsPlaying(0))
        {
            Sound->PlayOnce(-1.0f, -1.0f);
        }
    }

    return carBaseName;
}

void VehicleSelectBase::Reset()
{
    return;
}
