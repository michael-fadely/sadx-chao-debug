#pragma once

#include <SADXModLoader.h>

// TODO: Move this stuff to the mod loader?
FunctionPointer(Bool, IsChaoEnabled, (void), 0x00731CF0);
FunctionPointer(ObjectMaster*, GetChaoObject, (short idk, short index), 0x0071A1F0);
FunctionPointer(int, GetCurrentChaoStage, (void), 0x00715140);
FunctionPointer(void, ChaoDebug_MenuBack, (ObjectMaster *_this), 0x00731DE0);
FunctionPointer(void, SetChaoDebugFunction_Disabled, (void(__cdecl *object_function)(ObjectMaster *_this), char *name), 0x00731E00);
FunctionPointer(void, SetChaoDebugFunction_Enabled, (void(__cdecl *object_function)(ObjectMaster *_this), char *name), 0x00731E40);
VoidFunc(DisableChao, 0x00731CE0);
VoidFunc(EnableChao, 0x00731CD0);
FunctionPointer(signed int, ResetChao, (ObjectMaster *a1, unsigned int a2), 0x007420C0);
