#pragma once

#include <SADXModLoader.h>

FunctionPointer(void, ChaoDebug_MenuBack, (ObjectMaster *_this), 0x00731DE0);
FunctionPointer(void, SetChaoDebugFunction_Disabled, (void(__cdecl *object_function)(ObjectMaster *_this), char *name), 0x00731E00);
FunctionPointer(void, SetChaoDebugFunction_Enabled, (void(__cdecl *object_function)(ObjectMaster *_this), char *name), 0x00731E40);
FunctionPointer(signed int, ResetChao, (ObjectMaster *a1, unsigned int a2), 0x007420C0);
