#pragma once
#include <SADXModLoader/SADXStructs.h>

#pragma pack(push, 1)
struct ChaoUnknownB
{
	__int16 field_0;
	__int16 field_2;
	__int16 field_4;
	__int16 field_6;
	float field_8;
	int field_C;
	int field_10;
	int field_14;
	int field_18;
};
#pragma pack(pop)


#pragma pack(push, 1)
struct ChaoUnknown
{
	__int16 field_0;
	__int16 field_2;
	int field_4;
	int field_8;
	int field_C;
	float field_10;
	__int16 field_14;
	__int16 field_16;
	ChaoUnknownB field_18[32];
};
#pragma pack(pop)

#pragma pack(push, 1)
struct ChaoUnknownD
{
	__int16 field_0;
	__int16 field_2;
	__int16 field_4;
	__int16 field_6;
	int field_8;
	int field_C;
	int field_10;
	int field_14;
	int field_18;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct ChaoData1
{
	char field_0;
	char field_1;
	char field_2;
	char ChaoID;
	__int16 field_4;
	char field_6[14];
	Rotation3 Rotation;
	NJS_VECTOR Position;
	char field_2C[28];
	ObjectMaster *ObjectMaster_ptr1;
	char field_4C[4];
	ObjectMaster *ObjectMaster_ptr2;
	char field_54[12];
	int field_60;
	char field_64[4];
	int field_68;
	void *ChaoDataBase_ptr;
	char field_70[64];
	int field_B0;
	char field_B4[4];
	int field_B8;
	char field_BC[264];
	ChaoUnknownD field_1C4[7];
	char field_288[424];
	int field_430;
	char field_434[16];
	int field_444;
	char field_448[8];
	int field_450;
	char field_454[208];
	int field_524;
	char field_528[160];
	void *field_5C8;
	void *field_5CC;
	char field_5D0[216];
	__int16 field_6A8;
	char field_6AA[310];
	char field_7E0;
	char field_7E1[19];
	ChaoUnknown UnknownArray[5];
	char UnknownArrayEnd;
	char field_19ED[922];
	char field_1D87;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct __declspec(align(2)) ChaoDebugFunction
{
	int Enabled;
	void(__cdecl *Function)(ObjectMaster *_this);
	const char *Name;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct ChaoDebugData1
{
	char CurrentMenu;
	char MenuSelection;
	char field_2[18];
	__int16 ChaoID;
	char field_16[10];
};
#pragma pack(pop)
