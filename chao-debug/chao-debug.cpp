// TODO: Fix shape drawing.
#include "stdafx.h"
#include "ChaoStructs.h"

#define EXPORT __declspec(dllexport)

FunctionPointer(void, SetChaoDebugFunction_Disabled, (void(__cdecl *object_function)(ObjectMaster *_this), char *name), 0x00731E00);
FunctionPointer(void, SetChaoDebugFunction_Enabled, (void(__cdecl *object_function)(ObjectMaster *_this), char *name), 0x00731E40);
DataPointer(int, ChaoDebug_EntryCount, 0x03CE01A8);
DataPointer(char, ChaoDebug_Buttons, 0x03B0E35C);	// Used for most debug menus.
DataPointer(char, ChaoDebug_Buttons_2, 0x03B0E3B0); // Used for the SHAPE debug menu.
DataArray(ChaoDebugFunction, ChaoDebugFunctions, 0x03CDF5A0, 768);
VoidFunc(EnableChao, 0x00731CD0);
VoidFunc(DisableChao, 0x00731CE0);
FunctionPointer(Bool, IsChaoEnabled, (void), 0x00731CF0);
FunctionPointer(int, GetCurrentChaoStage, (void), 0x00715140);
FunctionPointer(ObjectMaster*, GetChaoObject, (short idk, short index), 0x0071A1F0);

static ObjectMaster dummy = {};
static ChaoDebugData1 debugData = {};
static bool debugControlEnabled = false;
static bool debugMenuEnabled = false;
static int selection = 0;
static int menu = -1;
static const std::string sel_icon = "-> ";

void SetDebugControl(bool enable)
{
	if (debugControlEnabled == enable)
		return;

	debugControlEnabled = enable;
	if (debugControlEnabled)
	{
		PrintDebug("Debug control activated.\n");
		DisableControl();
	}
	else
	{
		PrintDebug("Control restored.\n");
		EnableControl();
		ChaoDebug_Buttons = 0;
		ChaoDebug_Buttons_2 = 0;
		memset(ControllerPointers[2], 0, sizeof(ControllerData));
	}
}

extern "C"
{
	EXPORT ModInfo SADXModInfo = { ModLoaderVer };
	EXPORT void Init()
	{
		WriteJump(SetChaoDebugFunction_Disabled, SetChaoDebugFunction_Enabled);
		dummy.Data1 = (CharObj1*)&debugData;
	}

	EXPORT void OnInput()
	{
		if (GetCurrentChaoStage() == -1)
		{
			if (debugControlEnabled)
				SetDebugControl(false);

			return;
		}

		if (ControllerPointers[0]->PressedButtons & Buttons_D)
			SetDebugControl(!debugControlEnabled);

		if (debugControlEnabled)
		{
			*ControllerPointers[2] = *ControllerPointers[0];
			memset(ControllerPointers[0], 0, sizeof(ControllerData));
			ChaoDebug_Buttons = ControllerPointers[2]->PressedButtons;
			ChaoDebug_Buttons_2 = ChaoDebug_Buttons;
		}
	}


	EXPORT void OnFrame()
	{
		if (GetCurrentChaoStage() == -1)
			return;

		int lastColor = DebugFontColor;
		DisplayDebugString(NJM_LOCATION(4, 1), "DEBUG CONTROLLER: ");
		SetDebugFontColor(debugControlEnabled ? 0xFF00FF00 : 0xFFFF0000);
		DisplayDebugString(NJM_LOCATION(22, 1), (debugControlEnabled ? "ON" : "OFF"));
		SetDebugFontColor(lastColor);

		CharObj2* player = CharObj2Ptrs[0];

		if (ChaoDebug_Buttons & Buttons_Start)
		{
			if ((debugMenuEnabled = !debugMenuEnabled))
				DisableChao();
			SetDebugControl(debugMenuEnabled);
		}

		if (!debugMenuEnabled || !player)
		{
			if (selection || menu >= 0)
			{
				selection = 0;
				menu = -1;
			}

			if (!IsChaoEnabled())
				EnableChao();

			return;
		}

		if (menu >= 0)
		{
			if (debugData.CurrentMenu == 1)
			{
				menu = -1;
			}
			else
			{
				ChaoDebugFunctions[menu].Function(&dummy);
				return;
			}
		}

		int rows = HorizontalResolution / (int)DebugFontSize;
		int columns = VerticalResolution / (int)DebugFontSize;
		int buttons = ChaoDebug_Buttons;
		bool holdingChao = player->ObjectHeld != nullptr;

		if (holdingChao)
		{
			ObjectMaster* chao = player->ObjectHeld;
			ChaoData1* data1 = (ChaoData1*)chao->Data1;
			debugData.ChaoID = data1->ChaoID;
		}
		else if (buttons & Buttons_Left)
		{
			if (--debugData.ChaoID < 0)	// TODO: GetChaoCount
				debugData.ChaoID = 23;
		}
		else if (buttons & Buttons_Right)
		{
			++debugData.ChaoID %= 24; 	// TODO: GetChaoCount
		}

		if (buttons & Buttons_Up)
		{
			if (--selection < 0)
				selection = ChaoDebug_EntryCount - 1;
		}
		else if (buttons & Buttons_Down)
		{
			++selection %= ChaoDebug_EntryCount;
		}
		else if (buttons & Buttons_A)
		{
			if (ChaoDebugFunctions[selection].Enabled)
			{
				menu = selection;
				debugData.CurrentMenu = 0;
			}
		}
		else if (buttons & Buttons_B)
		{
			SetDebugControl(false);
			debugMenuEnabled = false;
			return;
		}

		ObjectMaster* chao = GetChaoObject(0, debugData.ChaoID);
		bool isNullChao =
			chao == nullptr || chao->Data1 == nullptr || ((ChaoData1*)chao->Data1)->ChaoDataBase_ptr == nullptr;

		if (!holdingChao)
			SetDebugFontColor(isNullChao ? 0xFFBF0000 : 0xFF00BF00);
		else
			SetDebugFontColor(0xFFBFBFBF);
		DisplayDebugStringFormatted(NJM_LOCATION(6, (columns / 4) - 2), "< CHAO INDEX: %02d >", debugData.ChaoID);
		SetDebugFontColor(lastColor);

		if (isNullChao)
			return;

		for (Sint32 i = 0; i < ChaoDebug_EntryCount; i++)
		{
			ChaoDebugFunction* func = &ChaoDebugFunctions[i];

			if (func->Enabled)
				SetDebugFontColor((i == selection) ? 0xFFF9720A : 0xFFFFFFFF);
			else
				SetDebugFontColor(0xE07F7F7F);

			DisplayDebugString(NJM_LOCATION(6, (columns / 4) + i), func->Name);
			SetDebugFontColor(lastColor);
		}


		DisplayDebugString(NJM_LOCATION(6 - sel_icon.length(), (columns / 4) + selection), sel_icon.c_str());
	}
}
