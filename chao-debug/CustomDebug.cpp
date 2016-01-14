#include "stdafx.h"

#include <SADXModLoader.h>
#include "ChaoStructs.h"
#include "FunctionPointers.h"

#include "CustomDebug.h"

void __cdecl MouthTex(ObjectMaster* _this)
{
	ObjectMaster* chao = GetChaoObject(0, ((EntityData1*)_this->Data1)->field_14);
	EntityData1* debug = (EntityData1*)_this->Data1;
	ChaoDataBase* data = ((ChaoData1*)chao->Data1)->ChaoDataBase_ptr;

	int buttons = ControllerPointers[2]->PressedButtons;

	if (buttons & Buttons_B)
	{
		ChaoDebug_MenuBack(_this);
		return;
	}

	DisplayDebugStringFormatted(NJM_LOCATION(16, 16), "MOUTH: %02d", data->MouthType);

	if (buttons & Buttons_Left && --data->MouthType < 0)
		data->MouthType = ChaoMouth_SquigglyMoustache2;

	if (buttons & Buttons_Right)
		++data->MouthType %= ChaoMouth_SquigglyMoustache2 + 1;

	if (buttons & (Buttons_Left | Buttons_Right))
		ResetChao(chao, data->Type);
}

void __cdecl EyeTex(ObjectMaster* _this)
{
	ObjectMaster* chao = GetChaoObject(0, ((EntityData1*)_this->Data1)->field_14);
	EntityData1* debug = (EntityData1*)_this->Data1;
	ChaoDataBase* data = ((ChaoData1*)chao->Data1)->ChaoDataBase_ptr;

	int buttons = ControllerPointers[2]->PressedButtons;

	if (buttons & Buttons_B)
	{
		ChaoDebug_MenuBack(_this);
		return;
	}

	DisplayDebugStringFormatted(NJM_LOCATION(16, 16), "EYES: %02d", data->EyeType);

	if (buttons & Buttons_Left && --data->EyeType < 0)
		data->EyeType = ChaoEyes_YellowChaos;

	if (buttons & Buttons_Right)
		++data->EyeType %= ChaoEyes_YellowChaos + 1;

	if (buttons & (Buttons_Left | Buttons_Right))
		ResetChao(chao, data->Type);
}

static inline const char* GetOnOff(bool b)
{
	return b ? "ON" : "OFF";
}

static inline void SetSelectColor(int selection, int target)
{
	SetDebugFontColor((selection == target) ? 0xFFFF9F00 : 0xFFFFFFFF);
}

void __cdecl ColorFlags(ObjectMaster* _this)
{
	ObjectMaster* chao = GetChaoObject(0, ((EntityData1*)_this->Data1)->field_14);
	EntityData1* debug = (EntityData1*)_this->Data1;
	ChaoDataBase* data = ((ChaoData1*)chao->Data1)->ChaoDataBase_ptr;

	int buttons = ControllerPointers[2]->PressedButtons;

	if (buttons & Buttons_B)
	{
		ChaoDebug_MenuBack(_this);
		return;
	}

	if (buttons & Buttons_Up && --debug->NextAction < 0)
		debug->NextAction = 0;
	if (buttons & Buttons_Down)
		++debug->NextAction %= 2;

	SetSelectColor(debug->NextAction, 0);
	DisplayDebugStringFormatted(NJM_LOCATION(16, 16), "MONOTONE: %s", GetOnOff(data->MonotoneHighlights));
	SetSelectColor(debug->NextAction, 1);
	DisplayDebugStringFormatted(NJM_LOCATION(16, 17), "SHINY: %s", GetOnOff(data->Shiny));
	SetDebugFontColor(0xFFFFFFFF);

	if (buttons & Buttons_A)
	{
		switch (debug->NextAction)
		{
			case 0:
				data->MonotoneHighlights = !data->MonotoneHighlights;
				break;

			case 1:
				data->Shiny = !data->Shiny;
				break;

			default:
				break;
		}

		ResetChao(chao, data->Type);
	}
}

void __cdecl Sphere(ObjectMaster* _this)
{
	ObjectMaster* chao = GetChaoObject(0, ((EntityData1*)_this->Data1)->field_14);
	EntityData1* debug = (EntityData1*)_this->Data1;
	ChaoDataBase* data = ((ChaoData1*)chao->Data1)->ChaoDataBase_ptr;

	int buttons = ControllerPointers[2]->PressedButtons;

	if (buttons & Buttons_B)
	{
		ChaoDebug_MenuBack(_this);
		return;
	}

	DisplayDebugStringFormatted(NJM_LOCATION(16, 16), "SPHERE: %02d", data->BallType);

	if (buttons & Buttons_Left && --data->BallType < 0)
		data->BallType = ChaoEmotiball_None;

	if (buttons & Buttons_Right)
		++data->BallType %= ChaoEmotiball_None + 1;

	if (buttons & (Buttons_Left | Buttons_Right))
		ResetChao(chao, data->Type);
}

void __cdecl RegisterCustomFunctions()
{
	SetChaoDebugFunction_Enabled(MouthTex,		"* MOUTH TEX");
	SetChaoDebugFunction_Enabled(EyeTex,		"* EYE TEX");
	SetChaoDebugFunction_Enabled(ColorFlags,	"* COLOR FLAGS");
	SetChaoDebugFunction_Enabled(Sphere,		"* SPHERE");
	return;
}

void __declspec(naked) RegisterDebugFunctions_Hook()
{
	__asm
	{
		add esp, 10h
		call RegisterCustomFunctions
		ret
	}
}
