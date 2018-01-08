#pragma once

#define WINVER         0x0600
#define _WIN32_WINDOWS 0x0600
#define _WIN32_WINNT   0x0600
#define NTDDI_VERSION  NTDDI_VISTASP1
#define WIN32_LEAN_AND_MEAN
#define ISOLATION_AWARE_ENABLED 1
#include <windows.h>
#include <commctrl.h>
#include <shellapi.h>
#include <commdlg.h>
#include <math.h>

#include <xmmintrin.h>
#include <emmintrin.h>

#define USE_AAC 1

#pragma warning(default : 4265)


#include "DXCommon.h"