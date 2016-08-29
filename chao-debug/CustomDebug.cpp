#include "stdafx.h"

#include <SADXModLoader.h>

#include "CustomDebug.h"

inline ChaoData1* GetChaoData1(ObjectMaster* debug)
{
	return (ChaoData1*)GetChaoObject(0, ((EntityData1*)debug->Data1)->Rotation.x)->Data1;
}

inline ChaoDataBase* GetChaoData(ObjectMaster* debug)
{
	return GetChaoData1(debug)->ChaoDataBase_ptr;
}

inline const char* GetOnOff(char b)
{
	return b == 1 ? "ON" : "OFF";
}

inline void SetSelectColor(int selection, int target)
{
	SetDebugFontColor(selection == target ? 0xFFFF9F00 : 0xFFFFFFFF);
}


void __cdecl Cycle(ObjectMaster* _this, const char* name, int min, int max, char& value)
{
	ObjectMaster* chao = GetChaoObject(0, ((EntityData1*)_this->Data1)->Rotation.x);

	int buttons = ControllerPointers[2]->PressedButtons;

	if (buttons & Buttons_B)
	{
		ChaoDebug_MenuBack(_this);
		return;
	}

	DisplayDebugStringFormatted(NJM_LOCATION(16, 16), "%s: %02d", name, value);

	if (buttons & Buttons_Left && --value < min)
		value = max;

	if (buttons & Buttons_Right)
		++value %= max + 1;

	if (buttons & (Buttons_Left | Buttons_Right))
		ResetChao(chao, ((ChaoData1*)chao->Data1)->ChaoDataBase_ptr->Type);
}

void __cdecl MouthTex(ObjectMaster* _this)
{
	Cycle(_this, "MOUTH", ChaoMouth_None, ChaoMouth_SquigglyMoustache2, GetChaoData(_this)->MouthType);
}

void __cdecl EyeTex(ObjectMaster* _this)
{
	Cycle(_this, "EYES", ChaoEyes_Normal, ChaoEyes_YellowChaos, GetChaoData(_this)->EyeType);

}

void __cdecl ColorFlags(ObjectMaster* _this)
{
	ObjectMaster* chao = GetChaoObject(0, ((EntityData1*)_this->Data1)->Rotation.x);
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
	Cycle(_this, "SPHERE", ChaoEmotiball_Normal, ChaoEmotiball_None, GetChaoData(_this)->BallType);

}

void __cdecl RegisterCustomFunctions()
{
	SetChaoDebugFunction_Enabled(MouthTex,		"* MOUTH TEX");
	SetChaoDebugFunction_Enabled(EyeTex,		"* EYE TEX");
	SetChaoDebugFunction_Enabled(ColorFlags,	"* COLOR FLAGS");
	SetChaoDebugFunction_Enabled(Sphere,		"* SPHERE");
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
