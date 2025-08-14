/*++
Copyright (c) Microsoft Corporation
Licensed under the MIT license.

Module Name:
- resource.h

Abstract:
- This file contains resource identifiers for menu popups.

Author(s):
- Michael Niksa (MiNiksa) 14-Oct-2014
- Paul Campbell (PaulCam) 14-Oct-2014
--*/

#pragma once

// clang-format off

// Fusion Application Manifest
#define IDR_SYSTEM_MANIFEST 100

// IDs of various STRINGTABLE entries
#define ID_CONSOLE_MSGCMDLINEF2          0x1008
#define ID_CONSOLE_MSGCMDLINEF4          0x1009
#define ID_CONSOLE_MSGCMDLINEF9          0x100A
#define ID_CONSOLE_MSGSELECTMODE         0x100B
#define ID_CONSOLE_MSGMARKMODE           0x100C
#define ID_CONSOLE_MSGSCROLLMODE         0x100D
#define ID_CONSOLE_FMT_WINDOWTITLE       0x100E

// Menu Item strings
#define ID_CONSOLE_COPY         0xFFF0
#define ID_CONSOLE_PASTE        0xFFF1
#define ID_CONSOLE_MARK         0xFFF2
#define ID_CONSOLE_SCROLL       0xFFF3
#define ID_CONSOLE_FIND         0xFFF4
#define ID_CONSOLE_SELECTALL    0xFFF5
#define ID_CONSOLE_EDIT         0xFFF6
#define ID_CONSOLE_CONTROL      0xFFF7
#define ID_CONSOLE_DEFAULTS     0xFFF8

// MENU IDs
#define ID_CONSOLE_SYSTEMMENU   500

// DIALOG IDs
#define ID_CONSOLE_FINDDLG      600
#define ID_CONSOLE_FINDSTR      601
#define ID_CONSOLE_FINDCASE     602
#define ID_CONSOLE_FINDUP       603
#define ID_CONSOLE_FINDDOWN     604
#define ID_CONSOLE_FINDREGEX    605

// BITMAP IDs
#define IDB_TOOL16              700
#define IDB_TOOLSHADOW16        702
#define IDB_TOOL24              703
#define IDB_TOOLSHADOW24        704

// Indices for toolbar icons:
#define ID_TOOLBAR_SELECT       0
#define ID_TOOLBAR_COPY         1
#define ID_TOOLBAR_PASTE        2
#define ID_TOOLBAR_FONTS        3
#define ID_TOOLBAR_PROPERTIES   4
#define ID_TOOLBAR_FULLSCREEN   5
#define ID_TOOLBAR_FOREGROUND   6
#define ID_TOOLBAR_BACKGROUND   7

#define IDS_TB_MARK             0x1010
#define IDS_TB_COPY             0x1011
#define IDS_TB_PASTE            0x1012
#define IDS_TB_FONT             0x1013
#define IDS_TB_PROPERTIES       0x1014
#define IDS_TB_FULLSCREEN       0x1015
#define IDS_TB_BACKGROUND       0x1016

// clang-format on
