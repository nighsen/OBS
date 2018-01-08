#pragma once

// this gets defined by the automatic building process
#ifndef OBS_VERSION_SUFFIX
#define OBS_VERSION_SUFFIX ""
#endif

#define OBS_VERSION             0x006509 //version number is 0xMMmmtt (super-major.major.minor - hex)
#define OBS_VERSION_STRING_RAW  "Open Broadcaster Software v0.659b"
//#define OBS_TEST_BUILD          1 //define this if releasing a test build to disable the auto updater

#define OBS_VERSION_STRING_ANSI OBS_VERSION_STRING_RAW OBS_VERSION_SUFFIX
#define OBS_VERSION_STRING      TEXT(OBS_VERSION_STRING_RAW) TEXT(OBS_VERSION_SUFFIX)

#ifdef _DEBUG
#define OBS_DISABLE_AUTOUPDATE 1
#endif

#if OBS_TEST_BUILD
#define OBS_DISABLE_AUTOUPDATE 1
#endif

#if defined(_WIN64)
#define OBS_CONFIG_UPDATE_KEY TEXT("LastUpdateCheck64")
#else
#define OBS_CONFIG_UPDATE_KEY TEXT("LastUpdateCheck")
#endif

#define OBS_WINDOW_CLASS         TEXT("OBSWindowClass")
#define OBS_LOGWINDOW_CLASS      TEXT("OBSLogWindowClass")
#define OBS_RENDERFRAME_CLASS    TEXT("OBSRenderFrame")
#define OBS_PROJECTORFRAME_CLASS TEXT("OBSProjectorFrame")