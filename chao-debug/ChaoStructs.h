#pragma once
#include <SADXModLoader/SADXStructs.h>
#include "ChaoEnums.h"

#pragma pack(push, 1)
struct ChaoCharacterBond
{
	char a;
	char b;
	int unknown;
};
#pragma pack(pop)

#pragma pack(push, 1)
struct ChaoDNA
{
	char ResetTrigger;
	char field_1[91];
	char SwimStatGrade1;
	char SwimStatGrade2;
	char FlyStatGrade1;
	char FlyStatGrade2;
	char RunStatGrade1;
	char RunStatGrade2;
	char PowerStatGrade1;
	char PowerStatGrade2;
	char StaminaStatGrade1;
	char StaminaStatGrade2;
	char LuckStatGrade1;
	char LuckStatGrade2;
	char IntelligenceStatGrade1;
	char IntelligenceStatGrade2;
	char UnknownStatGrade1;
	char UnknownStatGrade2;
	char field_4A4[34];
	char FavoriteFruit1;
	char FavoriteFruit2;
	char field_4C8[4];
	char Color1;
	char Color2;
	char MonotoneFlag1;
	char MonotoneFlag2;
	char Texture1;
	char Texture2;
	char ShinyFlag1;
	char ShinyFlag2;
	char EggColor1;
	char EggColor2;
	char gap_4D6[6];
};
#pragma pack(pop)

#pragma pack(push, 1)
struct ChaoDataBase
{
	char gap_0[18];
	char Name[7];
	char gap_19[7];
	char SwimFraction;
	char FlyFraction;
	char RunFraction;
	char PowerFraction;
	char StaminaFraction;
	char LuckyFraction;
	char IntelligenceFraction;
	char UnknownFraction;
	char SwimGrade;
	char FlyGrade;
	char RunGrade;
	char PowerGrade;
	char StaminaGrade;
	char LuckyGrade;
	char IntelligenceGrade;
	char UnknownGrade;
	char SwimLevel;
	char FlyLevel;
	char RunLevel;
	char PowerLevel;
	char StaminaLevel;
	char LuckLevel;
	char IntelligenceLevel;
	char UnknownLevel;
	__int16 SwimStat;
	__int16 FlyStat;
	__int16 RunStat;
	__int16 PowerStat;
	__int16 StaminaStat;
	__int16 LuckStat;
	char IntelligenceStat;
	char UnknownStat;
	char field_46[58];
	ChaoType Type;
	char Garden;
	__int16 Happiness;
	__int16 field_84;
	__int16 ClockRollovers;
	__int16 field_88;
	__int16 Lifespan;
	__int16 Lifespan2;
	__int16 Reincarnations;
	char field_90[24];
	float PowerRun;
	float FlySwim;
	float Alignment;
	char gap_B4[12];
	float EvolutionProgress;
	char gap_C4[13];
	char EyeType;
	char MouthType;
	char BallType;
	char gap_D4[1];
	char Headgear;
	char HideFeet;
	char Medal;
	char Color;
	char MonotoneHighlights;
	char Texture;
	char Shiny;
	char EggColor;
	SADXBodyType BodyType;
	char BodyTypeAnimal;
	char field_DF[57];
	int SA2AnimalBehavior;
	SA2BAnimal SA2BArmType;
	SA2BAnimal SA2BEarType;
	SA2BAnimal SA2BForeheadType;
	SA2BAnimal SA2BHornType;
	SA2BAnimal SA2BLegType;
	SA2BAnimal SA2BTailType;
	SA2BAnimal SA2BWingType;
	SA2BAnimal SA2BFaceType;
	char field_124[8];
	char Joy;
	char field_12D;
	char UrgeToCry;
	char Fear;
	char field_130;
	char Dizziness;
	char field_132[2];
	__int16 Sleepiness;
	__int16 Tiredness;
	__int16 Hunger;
	__int16 MateDesire;
	__int16 Boredom;
	char field_13E[10];
	__int16 Energy;
	char Normal_Curiosity;
	char field_14B;
	char CryBaby_Energetic;
	char Naive_Normal;
	char field_14E[2];
	char Normal_BigEater;
	char field_151[4];
	char Normal_Carefree;
	char field_156;
	char FavoriteFruit;
	char field_158[2];
	char CoughLevel;
	char ColdLevel;
	char RashLevel;
	char RunnyNoseLevel;
	char HiccupsLevel;
	char StomachAcheLevel;
	char field_160[4];
	__int16 SA2BToys;
	char field_166[6];
	ChaoCharacterBond SA2BCharacterBonds[6];
	char field_190[680];
	ChaoDNA DNA;
	// From this point up, the data is identical in SA2B.
	// From this point down is DX exclusive data.
	int field_4DC;
	int SADXAnimalBehaviors;
	SADXAnimal ArmType;
	SADXAnimal EarType;
	SADXAnimal EyebrowType;
	SADXAnimal ForeheadType;
	SADXAnimal LegType;
	SADXAnimal TailType;
	SADXAnimal WingType;
	SADXAnimal UnknownType;
	char field_4EC[16];
	ChaoCharacterBond SADXCharacterBonds[6];
};
#pragma pack(pop)

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
struct EntityData1
{
	char Action;
	char NextAction;
	char Unknown;
	char Index;
	__int16 Status;
	__int16 InvulnerableTime;
	char CharIndex;
	char CharID;
	__int16 field_A;
	float field_C;
	Loop *LoopData;
	int field_14;
	char gap_18[8];
	NJS_VECTOR Position;
	NJS_VECTOR Scale;
	void *CollisionInfo;
	char field_3C;
	char field_3D;
	char field_3E;
	char field_3F;
};
#pragma pack(pop)


struct ChaoUnknownE
{
	char pad[960];
};

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
	EntityData1 entity;
	char field_40[8];
	ObjectMaster *ObjectMaster_ptr1;
	char field_4C[4];
	ObjectMaster *ObjectMaster_ptr2;
	char field_54[12];
	int field_60;
	char field_64[4];
	int field_68;
	ChaoDataBase *ChaoDataBase_ptr;
	char field_70[64];
	int field_B0;
	char field_B4[4];
	int field_B8;
	char MotionTable[264];
	ChaoUnknownD unknown_d[7];
	char field_288[424];
	int field_430;
	char field_434[16];
	int field_444;
	char field_448[8];
	int field_450;
	char field_454[208];
	int field_524;
	char field_528[160];
	ChaoUnknownE *unknown_e_1;
	ChaoUnknownE *unknown_e_2;
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
struct ChaoDebugFunction
{
	int Enabled;
	void(__cdecl *Function)(ObjectMaster *_this);
	const char *Name;
};
#pragma pack(pop)
