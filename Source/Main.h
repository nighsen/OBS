/********************************************************************************
 Copyright (C) 2012 Hugh Bailey <obs.jim@gmail.com>

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA.
********************************************************************************/


#pragma once



#include "Common.h"

//-------------------------------------------
// API DLL

#include "OBSApi.h"


//-------------------------------------------
// application globals

class OBS;

extern HWND         hwndMain;
extern HWND         hwndRenderFrame;
extern HWND         hwndLogWindow;
extern HWND         hwndLog;
extern HINSTANCE    hinstMain;
extern ConfigFile   *GlobalConfig;
extern ConfigFile   *AppConfig;
extern OBS          *App;
extern bool         bIsPortable;
extern bool         bStreamOnStart;
extern TCHAR        lpAppPath[MAX_PATH];
extern TCHAR        lpAppDataPath[MAX_PATH];

#include "OBSDefs.h"


void WINAPI ProcessEvents();

//-------------------------------------------
// application headers

#include "../resource.h"


#include "OBS.h"






