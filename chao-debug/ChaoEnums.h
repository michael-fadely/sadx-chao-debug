// From here with slight modifications: http://chao.tehfusion.co.uk/chao-hacking/

// Chao gardens

enum SADXChaoStage : Sint8
{
	SADXChaoStage_None = -1,
	SADXChaoStage_Race = 1,
	SADXChaoStage_RaceEntry = 2,
	SADXChaoStage_ChaoTransporter = 3,
	SADXChaoStage_StationSquare = 4,
	SADXChaoStage_EggCarrier = 5,
	SADXChaoStage_MysticRuins = 6,
	SADXChaoStage_BlackMarket = 7,
};


enum SA2BChaoStage : Sint8
{
	SA2BChaoStage_None = -1,
	SA2BChaoStage_NeutralGarden = 1,
	SA2BChaoStage_HeroGarden = 2,
	SA2BChaoStage_DarkGarden = 3,
	SA2BChaoStage_Race = 4,
	SA2BChaoStage_RaceEntrance = 5,
	SA2BChaoStage_Kindergarten = 6,
	SA2BChaoStage_Lobby = 7,
	SA2BChaoStage_RaceEntrance_2P = 8,
	SA2BChaoStage_Stadium = 9,
	SA2BChaoStage_Karate = 10,
	SA2BChaoStage_Karate_2P = 11,
	SA2BChaoStage_Transporter = 12,
};

// Chao evolution

enum ChaoType : Sint8
{
	ChaoType_Empty = 0,
	ChaoType_Egg = 1,
	ChaoType_Child = 2,
	ChaoType_Good = 3, // Unobtainable
	ChaoType_Bad = 4, // Unobtainable
	ChaoType_Neutral_Normal = 5,
	ChaoType_Hero_Normal = 6,
	ChaoType_Dark_Normal = 7,
	ChaoType_Neutral_Swim = 8,
	ChaoType_Hero_Swim = 9,
	ChaoType_Dark_Swim = 10,
	ChaoType_Neutral_Fly = 11,
	ChaoType_Hero_Fly = 12,
	ChaoType_Dark_Fly = 13,
	ChaoType_Neutral_Run = 14,
	ChaoType_Hero_Run = 15,
	ChaoType_Dark_Run = 16,
	ChaoType_Neutral_Power = 17,
	ChaoType_Hero_Power = 18,
	ChaoType_Dark_Power = 19,
	ChaoType_Neutral_Chaos = 20,
	ChaoType_Hero_Chaos = 21,
	ChaoType_Dark_Chaos = 22,
	ChaoType_Tails = 23, // Character chao
	ChaoType_Knuckles = 24, // Character chao
	ChaoType_Amy = 25, // Character chao
};

// Chao stats

enum ChaoGrade : Sint8
{
	ChaoGrade_E = 0,
	ChaoGrade_D = 1,
	ChaoGrade_C = 2,
	ChaoGrade_B = 3,
	ChaoGrade_A = 4,
	ChaoGrade_S = 5,
};

// Chao appearance

enum ChaoEmotiball : Sint8
{
	ChaoEmotiball_Normal = 0,
	ChaoEmotiball_Flame = 1,
	ChaoEmotiball_None = 2,
};

enum ChaoEyes : Sint8
{
	ChaoEyes_Normal = 0,
	ChaoEyes_Painful = 1,
	ChaoEyes_ClosedStraight = 2,
	ChaoEyes_ClosedHappy = 3,
	ChaoEyes_ClosedUp = 4,
	ChaoEyes_Tiny = 5,
	ChaoEyes_Circles = 6,
	ChaoEyes_ClosedDown = 7,
	ChaoEyes_Tiny2 = 8, // Identical to "Tiny"
	ChaoEyes_HalfClosed = 9,
	ChaoEyes_Mean = 10,
	ChaoEyes_GreenChaos = 11,
	ChaoEyes_BlueChaos = 12,
	ChaoEyes_YellowChaos = 13,
};

enum ChaoMedal : Sint8
{
	ChaoMedal_None = 0, // Won in SA2B
	ChaoMedal_Aquamarine = 1, // Won in SA2B
	ChaoMedal_Topaz = 2, // Won in SA2B
	ChaoMedal_Peridot = 3, // Won in SA2B
	ChaoMedal_Garnet = 4, // Won in SA2B
	ChaoMedal_Onyx = 5, // Won in SA2B
	ChaoMedal_Diamond = 6, // Won in SA2B
	ChaoMedal_Beginner = 7, // Won in SA2B
	ChaoMedal_Challenge = 8, // Won in SA2B
	ChaoMedal_Hero = 9, // Won in SA2B
	ChaoMedal_Dark = 10, // Won in SA2B
	ChaoMedal_Pearl = 11, // Won in SADX
	ChaoMedal_Amethyst = 12, // Won in SADX
	ChaoMedal_Emerald = 13, // Won in SADX
	ChaoMedal_Ruby = 14, // Won in SADX
	ChaoMedal_Sapphire = 15, // Won in SADX
};

enum ChaoMouth : Sint8
{
	ChaoMouth_None = 0,
	ChaoMouth_ToothySmile = 1,
	ChaoMouth_Open = 2,
	ChaoMouth_ClosedSmile = 3,
	ChaoMouth_ClosedFrown = 4,
	ChaoMouth_OpenSmile = 5,
	ChaoMouth_OpenFrown = 6,
	ChaoMouth_ClosedSmile2 = 7, // Identical to "Closed Smile"
	ChaoMouth_Squiggly = 8,
	ChaoMouth_ToothyFrown = 9,
	ChaoMouth_ClosedFrown2 = 10, // Identical to "Closed Frown"
	ChaoMouth_WideOpen = 11,
	ChaoMouth_ClosedFrown3 = 12, // Identical to "Closed Frown"
	ChaoMouth_StraightMoustache = 13,
	ChaoMouth_SquigglyMoustache1 = 14,
	ChaoMouth_SquigglyMoustache2 = 15,
};

enum SADXBodyType : Sint8
{
	SADXBodyType_Normal = 0,
	SADXBodyType_EggChao = 1,
	SADXBodyType_Omochao = 2,
	SADXBodyType_None = 3,
};

enum SA2BBodyType : Sint8
{
	SA2BBodyType_Normal = 0,
	SA2BBodyType_EggChao = 1,
	SA2BBodyType_Omochao = 2,
	SA2BBodyType_Animal = 3,
	SA2BBodyType_None = 5,
};

enum SADXRetailColour : Sint8
{
	SADXRetailColour_Normal = 0,
	SADXRetailColour_Yellow = 1,
	SADXRetailColour_White = 2,
	SADXRetailColour_Brown = 3,
	SADXRetailColour_Aqua = 4,
	SADXRetailColour_Pink = 5,
	SADXRetailColour_Blue = 6,
	SADXRetailColour_Grey = 7,
	SADXRetailColour_Green = 8,
	SADXRetailColour_Red = 9,
	SADXRetailColour_LightGreen = 10,
	SADXRetailColour_Purple = 11,
	SADXRetailColour_Orange = 12,
	SADXRetailColour_Black = 13,
	SADXRetailColour_TransparentRed = 14, // Unobtainable
	SADXRetailColour_TransparentPurple = 15, // Unobtainable
	SADXRetailColour_Invisible = 16, // Unobtainable
};

enum SADXSteamColour : Sint8
{
	SADXSteamColour_Normal = 0,
	SADXSteamColour_Yellow = 1,
	SADXSteamColour_White = 2,
	SADXSteamColour_Brown = 3,
	SADXSteamColour_Aqua = 4,
	SADXSteamColour_Pink = 5,
	SADXSteamColour_Blue = 6,
	SADXSteamColour_Grey = 7,
	SADXSteamColour_Green = 8,
	SADXSteamColour_Red = 9,
	SADXSteamColour_LightGreen = 10,
	SADXSteamColour_Purple = 11,
	SADXSteamColour_Orange = 12,
	SADXSteamColour_Black = 13,
	SADXSteamColour_Invisible = 14, // Unobtainable
	SADXSteamColour_TransparentGrey = 16, // Unobtainable
};

enum SA2BColour : Sint8
{
	SA2BColour_Normal = 0,
	SA2BColour_Yellow = 1,
	SA2BColour_White = 2,
	SA2BColour_Brown = 3,
	SA2BColour_SkyBlue = 4,
	SA2BColour_Pink = 5,
	SA2BColour_Blue = 6,
	SA2BColour_Grey = 7,
	SA2BColour_Green = 8,
	SA2BColour_Red = 9,
	SA2BColour_LimeGreen = 10,
	SA2BColour_Purple = 11,
	SA2BColour_Orange = 12,
	SA2BColour_Black = 13,
};
// Values 15-255 all have various different, unobtainable colours in SA2B. However, there are far too many to list here at this time. Contact me if you happen to need more information about these.

enum SADXEggColour : Sint8
{
	SADXEggColour_Normal = 0,
	SADXEggColour_Yellow_MonoTone = 1,
	SADXEggColour_White_MonoTone = 2,
	SADXEggColour_Brown_MonoTone = 3,
	SADXEggColour_Aqua_MonoTone = 4,
	SADXEggColour_Pink_MonoTone = 5,
	SADXEggColour_Blue_MonoTone = 6,
	SADXEggColour_Grey_MonoTone = 7,
	SADXEggColour_Green_MonoTone = 8,
	SADXEggColour_Red_MonoTone = 9,
	SADXEggColour_LightGreen_MonoTone = 10,
	SADXEggColour_Purple_MonoTone = 11,
	SADXEggColour_Orange_MonoTone = 12,
	SADXEggColour_Black_MonoTone = 13,
	SADXEggColour_Yellow_TwoTone = 14,
	SADXEggColour_White_TwoTone = 15,
	SADXEggColour_Brown_TwoTone = 16,
	SADXEggColour_Aqua_TwoTone = 17,
	SADXEggColour_Pink_TwoTone = 18,
	SADXEggColour_Blue_TwoTone = 19,
	SADXEggColour_Grey_TwoTone = 20,
	SADXEggColour_Green_TwoTone = 21,
	SADXEggColour_Red_TwoTone = 22,
	SADXEggColour_LightGreen_TwoTone = 23,
	SADXEggColour_Purple_TwoTone = 24,
	SADXEggColour_Orange_TwoTone = 25,
	SADXEggColour_Black_TwoTone = 26,
	SADXEggColour_NormalShiny = 27,
	SADXEggColour_YellowShiny_MonoTone = 28,
	SADXEggColour_WhiteShiny_MonoTone = 29,
	SADXEggColour_BrownShiny_MonoTone = 30,
	SADXEggColour_AquaShiny_MonoTone = 31,
	SADXEggColour_PinkShiny_MonoTone = 32,
	SADXEggColour_BlueShiny_MonoTone = 33,
	SADXEggColour_GreyShiny_MonoTone = 34,
	SADXEggColour_GreenShiny_MonoTone = 35,
	SADXEggColour_RedShiny_MonoTone = 36,
	SADXEggColour_LightGreenShiny_MonoTone = 37,
	SADXEggColour_PurpleShiny_MonoTone = 38,
	SADXEggColour_OrangeShiny_MonoTone = 39,
	SADXEggColour_BlackShiny_MonoTone = 40,
	SADXEggColour_YellowShiny_TwoTone = 41,
	SADXEggColour_WhiteShiny_TwoTone = 42,
	SADXEggColour_BrownShiny_TwoTone = 43,
	SADXEggColour_AquaShiny_TwoTone = 44,
	SADXEggColour_PinkShiny_TwoTone = 45,
	SADXEggColour_BlueShiny_TwoTone = 46,
	SADXEggColour_GreyShiny_TwoTone = 47,
	SADXEggColour_GreenShiny_TwoTone = 48,
	SADXEggColour_RedShiny_TwoTone = 49,
	SADXEggColour_LightGreenShiny_TwoTone = 50,
	SADXEggColour_PurpleShiny_TwoTone = 51,
	SADXEggColour_OrangeShiny_TwoTone = 52,
	SADXEggColour_BlackShiny_TwoTone = 53,
	SADXEggColour_YellowJewel = 54,
	SADXEggColour_WhiteJewel = 55,
	SADXEggColour_PinkJewel = 56,
	SADXEggColour_BlueJewel = 57,
	SADXEggColour_GreenJewel = 58,
	SADXEggColour_PurpleJewel = 59,
	SADXEggColour_AquaJewel = 60,
	SADXEggColour_RedJewel = 61,
	SADXEggColour_BlackJewel = 62,
	SADXEggColour_LightGreenJewel = 63,
	SADXEggColour_OrangeJewel = 64,
	SADXEggColour_Pearl = 65, // Unobtainable
	SADXEggColour_Metal1 = 66, // Unobtainable
	SADXEggColour_Metal2 = 67, // Unobtainable
	SADXEggColour_Glass = 68, // Unobtainable
};

enum SA2BEggColour : Sint8
{
	SA2BEggColour_Normal = 0,
	SA2BEggColour_Yellow_MonoTone = 1,
	SA2BEggColour_White_MonoTone = 2,
	SA2BEggColour_Brown_MonoTone = 3,
	SA2BEggColour_SkyBlue_MonoTone = 4,
	SA2BEggColour_Pink_MonoTone = 5,
	SA2BEggColour_Blue_MonoTone = 6,
	SA2BEggColour_Grey_MonoTone = 7,
	SA2BEggColour_Green_MonoTone = 8,
	SA2BEggColour_Red_MonoTone = 9,
	SA2BEggColour_LimeGreen_MonoTone = 10,
	SA2BEggColour_Purple_MonoTone = 11,
	SA2BEggColour_Orange_MonoTone = 12,
	SA2BEggColour_Black_MonoTone = 13,
	SA2BEggColour_Yellow_TwoTone = 14,
	SA2BEggColour_White_TwoTone = 15,
	SA2BEggColour_Brown_TwoTone = 16,
	SA2BEggColour_SkyBlue_TwoTone = 17,
	SA2BEggColour_Pink_TwoTone = 18,
	SA2BEggColour_Blue_TwoTone = 19,
	SA2BEggColour_Grey_TwoTone = 20,
	SA2BEggColour_Green_TwoTone = 21,
	SA2BEggColour_Red_TwoTone = 22,
	SA2BEggColour_LimeGreen_TwoTone = 23,
	SA2BEggColour_Purple_TwoTone = 24,
	SA2BEggColour_Orange_TwoTone = 25,
	SA2BEggColour_Black_TwoTone = 26,
	SA2BEggColour_NormalShiny = 27,
	SA2BEggColour_YellowShiny_MonoTone = 28,
	SA2BEggColour_WhiteShiny_MonoTone = 29,
	SA2BEggColour_BrownShiny_MonoTone = 30,
	SA2BEggColour_SkyBlueShiny_MonoTone = 31,
	SA2BEggColour_PinkShiny_MonoTone = 32,
	SA2BEggColour_BlueShiny_MonoTone = 33,
	SA2BEggColour_GreyShiny_MonoTone = 34,
	SA2BEggColour_GreenShiny_MonoTone = 35,
	SA2BEggColour_RedShiny_MonoTone = 36,
	SA2BEggColour_LimeGreenShiny_MonoTone = 37,
	SA2BEggColour_PurpleShiny_MonoTone = 38,
	SA2BEggColour_OrangeShiny_MonoTone = 39,
	SA2BEggColour_BlackShiny_MonoTone = 40,
	SA2BEggColour_YellowShiny_TwoTone = 41,
	SA2BEggColour_WhiteShiny_TwoTone = 42,
	SA2BEggColour_BrownShiny_TwoTone = 43,
	SA2BEggColour_SkyBlueShiny_TwoTone = 44,
	SA2BEggColour_PinkShiny_TwoTone = 45,
	SA2BEggColour_BlueShiny_TwoTone = 46,
	SA2BEggColour_GreyShiny_TwoTone = 47,
	SA2BEggColour_GreenShiny_TwoTone = 48,
	SA2BEggColour_RedShiny_TwoTone = 49,
	SA2BEggColour_LimeGreenShiny_TwoTone = 50,
	SA2BEggColour_PurpleShiny_TwoTone = 51,
	SA2BEggColour_OrangeShiny_TwoTone = 52,
	SA2BEggColour_BlackShiny_TwoTone = 53,
	SA2BEggColour_GlitchyNormal = 54, // Unobtainable
};

enum SADXTexture : Sint8
{
	SADXTexture_None = 0,
	SADXTexture_YellowJewel = 1,
	SADXTexture_WhiteJewel = 2,
	SADXTexture_PinkJewel = 3,
	SADXTexture_BlueJewel = 4,
	SADXTexture_GreenJewel = 5,
	SADXTexture_PurpleJewel = 6,
	SADXTexture_AquaJewel = 7,
	SADXTexture_RedJewel = 8,
	SADXTexture_BlackJewel = 9,
	SADXTexture_LightGreenJewel = 10,
	SADXTexture_OrangeJewel = 11,
	SADXTexture_Pearl = 12, // Unobtainable
	SADXTexture_Metal1 = 13, // Unobtainable
	SADXTexture_Metal2 = 14, // Unobtainable
	SADXTexture_Glass = 15, // Unobtainable
	SADXTexture_Moon = 16, // Unobtainable
};
// Values 17-125 all have various different, unobtainable textures. These appear to be random game textures applied to the chao. I have documented all of these in my notes, but there are far too many to list here at this time. Contact me if you happen to need more information about these.

enum SA2BTexture : Sint8
{
	SA2BTexture_None = 0,
	SA2BTexture_YellowJewel = 1,
	SA2BTexture_WhiteJewel = 2,
	SA2BTexture_PinkJewel = 3,
	SA2BTexture_BlueJewel = 4,
	SA2BTexture_GreenJewel = 5,
	SA2BTexture_PurpleJewel = 6,
	SA2BTexture_SkyBlueJewel = 7,
	SA2BTexture_RedJewel = 8,
	SA2BTexture_BlackJewel = 9,
	SA2BTexture_LimeGreenJewel = 10,
	SA2BTexture_OrangeJewel = 11,
	SA2BTexture_Pearl = 12, // Unobtainable
	SA2BTexture_Metal1 = 13, // Unobtainable
	SA2BTexture_Metal2 = 14, // Unobtainable
	SA2BTexture_Glass = 15, // Unobtainable
	SA2BTexture_Moon = 16, // Unobtainable
};
// Values 17-109 all have various different, unobtainable textures. These appear to be random game textures applied to the chao. I have documented all of these in my notes, but there are far too many to list here at this time. Contact me if you happen to need more information about these.

// Chao personality

enum ChaoFavouriteFruit : Sint8
{
	ChaoFavouriteFruit_RoundFruit1 = 0,
	ChaoFavouriteFruit_RoundFruit2 = 1,
	ChaoFavouriteFruit_TriangleFruit1 = 2,
	ChaoFavouriteFruit_TriangleFruit2 = 3,
	ChaoFavouriteFruit_SquareFruit1 = 4,
	ChaoFavouriteFruit_SquareFruit2 = 5,
	ChaoFavouriteFruit_None1 = 6,
	ChaoFavouriteFruit_None2 = 7,
};

// Chao learnt abilities

enum ChaoClassroomLessonFlags : Sint32
{
	ChaoClassroomLessonFlags_None = 0,
	ChaoClassroomLessonFlags_DrawingLevel1 = 1,
	ChaoClassroomLessonFlags_DrawingLevel2 = 1 << 1,
	ChaoClassroomLessonFlags_DrawingLevel3 = 1 << 2,
	ChaoClassroomLessonFlags_DrawingLevel4 = 1 << 3,
	ChaoClassroomLessonFlags_DrawingLevel5 = 1 << 4,
	ChaoClassroomLessonFlags_ShakeDance = 1 << 8,
	ChaoClassroomLessonFlags_SpinDance = 1 << 9,
	ChaoClassroomLessonFlags_StepDance = 1 << 10,
	ChaoClassroomLessonFlags_GoGoDance = 1 << 11,
	ChaoClassroomLessonFlags_Exercise = 1 << 12,
	ChaoClassroomLessonFlags_SongLevel1 = 1 << 16,
	ChaoClassroomLessonFlags_SongLevel2 = 1 << 17,
	ChaoClassroomLessonFlags_SongLevel3 = 1 << 18,
	ChaoClassroomLessonFlags_SongLevel4 = 1 << 19,
	ChaoClassroomLessonFlags_SongLevel5 = 1 << 20,
	ChaoClassroomLessonFlags_Bell = 1 << 24,
	ChaoClassroomLessonFlags_Castanets = 1 << 25,
	ChaoClassroomLessonFlags_Cymbals = 1 << 26,
	ChaoClassroomLessonFlags_Drum = 1 << 27,
	ChaoClassroomLessonFlags_Flute = 1 << 28,
	ChaoClassroomLessonFlags_Maracas = 1 << 29,
	ChaoClassroomLessonFlags_Trumpet = 1 << 30,
	ChaoClassroomLessonFlags_Tambourine = 1 << 31,
};

enum SADXAnimalFlags : Sint16
{
	SADXAnimalFlags_None = 0,
	SADXAnimalFlags_Seal = 1,
	SADXAnimalFlags_Penguin = 1 << 1,
	SADXAnimalFlags_Otter = 1 << 2,
	SADXAnimalFlags_Peacock = 1 << 3,
	SADXAnimalFlags_Swallow = 1 << 4,
	SADXAnimalFlags_Parrot = 1 << 5,
	SADXAnimalFlags_Deer = 1 << 6,
	SADXAnimalFlags_Rabbit = 1 << 7,
	SADXAnimalFlags_Kangaroo = 1 << 8,
	SADXAnimalFlags_Gorilla = 1 << 9,
	SADXAnimalFlags_Lion = 1 << 10,
	SADXAnimalFlags_Elephant = 1 << 11,
	SADXAnimalFlags_Mole = 1 << 12,
	SADXAnimalFlags_Koala = 1 << 13,
	SADXAnimalFlags_Skunk = 1 << 14,
};

enum SA2BAnimalFlags : Uint32
{
	SA2BAnimalFlags_None = 0,
	SA2BAnimalFlags_Penguin = 1,
	SA2BAnimalFlags_Seal = 1 << 1,
	SA2BAnimalFlags_Otter = 1 << 2,
	SA2BAnimalFlags_Rabbit = 1 << 3,
	SA2BAnimalFlags_Cheetah = 1 << 4,
	SA2BAnimalFlags_Warthog = 1 << 5,
	SA2BAnimalFlags_Bear = 1 << 6,
	SA2BAnimalFlags_Tiger = 1 << 7,
	SA2BAnimalFlags_Gorilla = 1 << 8,
	SA2BAnimalFlags_Peacock = 1 << 9,
	SA2BAnimalFlags_Parrot = 1 << 10,
	SA2BAnimalFlags_Condor = 1 << 11,
	SA2BAnimalFlags_Skunk = 1 << 12,
	SA2BAnimalFlags_Sheep = 1 << 13,
	SA2BAnimalFlags_Raccoon = 1 << 14,
	SA2BAnimalFlags_HalfFish = 1 << 15,
	SA2BAnimalFlags_SkeletonDog = 1 << 16,
	SA2BAnimalFlags_Bat = 1 << 17,
	SA2BAnimalFlags_Dragon = 1 << 18,
	SA2BAnimalFlags_Unicorn = 1 << 19,
	SA2BAnimalFlags_Phoenix = 1 << 20,
};

enum ChaoToyFlags : Sint16
{
	ChaoToyFlags_None = 0,
	ChaoToyFlags_Rattle = 1,
	ChaoToyFlags_Car = 1 << 1,
	ChaoToyFlags_PictureBook = 1 << 2,
	ChaoToyFlags_SonicDoll = 1 << 4,
	ChaoToyFlags_Broomstick = 1 << 5,
	ChaoToyFlags_Unknown = 1 << 6, // (glitch toy)
	ChaoToyFlags_PogoStick = 1 << 7,
	ChaoToyFlags_Crayons = 1 << 8,
	ChaoToyFlags_BubbleWand = 1 << 9,
	ChaoToyFlags_Shovel = 1 << 10,
	ChaoToyFlags_WateringCan = 1 << 11,
};

// Garden items

enum ChaoItemCategory : Sint8
{
	ChaoItemCategory_Egg = 1,
	ChaoItemCategory_Fruit = 3,
	ChaoItemCategory_Seed = 7, // SA2B only
	ChaoItemCategory_Hat = 9,
	ChaoItemCategory_MenuTheme = 16, // SA2B only
};

enum SADXAnimal : Sint8
{
	SADXAnimal_None = -1,
	SADXAnimal_Seal = 0,
	SADXAnimal_Penguin = 1,
	SADXAnimal_Otter = 2,
	SADXAnimal_Peacock = 3,
	SADXAnimal_Swallow = 4,
	SADXAnimal_Parrot = 5,
	SADXAnimal_Deer = 6,
	SADXAnimal_Rabbit = 7,
	SADXAnimal_Kangaroo = 8,
	SADXAnimal_Gorilla = 9,
	SADXAnimal_Lion = 10,
	SADXAnimal_Elephant = 11,
	SADXAnimal_Mole = 12,
	SADXAnimal_Koala = 13,
	SADXAnimal_Skunk = 14,
};

enum SA2BAnimal : Sint8
{
	SA2BAnimal_None = -1,
	SA2BAnimal_Penguin = 0,
	SA2BAnimal_Seal = 1,
	SA2BAnimal_Otter = 2,
	SA2BAnimal_Rabbit = 3,
	SA2BAnimal_Cheetah = 4,
	SA2BAnimal_Warthog = 5,
	SA2BAnimal_Bear = 6,
	SA2BAnimal_Tiger = 7,
	SA2BAnimal_Gorilla = 8,
	SA2BAnimal_Peacock = 9,
	SA2BAnimal_Parrot = 10,
	SA2BAnimal_Condor = 11,
	SA2BAnimal_Skunk = 12,
	SA2BAnimal_Sheep = 13,
	SA2BAnimal_Raccoon = 14,
	SA2BAnimal_HalfFish = 15,
	SA2BAnimal_SkeletonDog = 16,
	SA2BAnimal_Bat = 17,
	SA2BAnimal_Dragon = 18,
	SA2BAnimal_Unicorn = 19,
	SA2BAnimal_Phoenix = 20,
	SA2BAnimal_YellowChaosDrive = 21,
	SA2BAnimal_GreenChaosDrive = 22,
	SA2BAnimal_RedChaosDrive = 23,
	SA2BAnimal_PurpleChaosDrive = 24,
};

enum SADXFruit : Sint8
{
	SADXFruit_None = -1,
	SADXFruit_RegularFruit = 24, // The standard garden fruit of SADX
	SADXFruit_StrongFruit = 3, // Comes from SA2B
	SADXFruit_TastyFruit = 4, // Comes from SA2B
	SADXFruit_HeroFruit = 5,
	SADXFruit_DarkFruit = 6,
	SADXFruit_RoundFruit = 7,
	SADXFruit_TriangularFruit = 8,
	SADXFruit_CubicleFruit = 9,
	SADXFruit_HeartFruit = 10,
	SADXFruit_ChaoFruit = 11,
	SADXFruit_Mushroom = 20,
	SADXFruit_MushroomAlt = 21, // Gives 2x the bonus of "Mushroom"
	SADXFruit_OrangeFruit = 13, // Comes from TCG
	SADXFruit_BlueFruit = 14, // Comes from TCG
	SADXFruit_PinkFruit = 15, // Comes from TCG
	SADXFruit_GreenFruit = 16, // Comes from TCG
	SADXFruit_PurpleFruit = 17, // Comes from TCG
	SADXFruit_YellowFruit = 18, // Comes from TCG
	SADXFruit_RedFruit = 19, // Comes from TCG
	SADXFruit_SmartFruit = 12, // Unobtainable
};

enum SA2BFruit : Sint8
{
	SA2BFruit_None = -1,
	SA2BFruit_ChaoGardenFruit = 0,
	SA2BFruit_HeroGardenFruit = 1,
	SA2BFruit_DarkGardenFruit = 2,
	SA2BFruit_StrongFruit = 3,
	SA2BFruit_TastyFruit = 4,
	SA2BFruit_HeroFruit = 5,
	SA2BFruit_DarkFruit = 6,
	SA2BFruit_RoundFruit = 7,
	SA2BFruit_TriangleFruit = 8,
	SA2BFruit_SquareFruit = 9,
	SA2BFruit_HeartFruit = 10,
	SA2BFruit_ChaoFruit = 11,
	SA2BFruit_Mushroom = 20,
	SA2BFruit_MushroomAlt = 21, // Gives 2x the bonus of "Mushroom"
	SA2BFruit_OrangeFruit = 13, // Comes from TCG
	SA2BFruit_BlueFruit = 14, // Comes from TCG
	SA2BFruit_PinkFruit = 15, // Comes from TCG
	SA2BFruit_GreenFruit = 16, // Comes from TCG
	SA2BFruit_PurpleFruit = 17, // Comes from TCG
	SA2BFruit_YellowFruit = 18, // Comes from TCG
	SA2BFruit_RedFruit = 19, // Comes from TCG
	SA2BFruit_SmartFruit = 12, // Unobtainable
	SA2BFruit_MintCandy = 22, // Unobtainable
	SA2BFruit_Grapes = 23, // Unobtainable
};

enum SADXHat : Sint8
{
	SADXHat_None = 0,
	SADXHat_Pumpkin = 1,
	SADXHat_Skull = 2,
	SADXHat_Apple = 3,
	SADXHat_Bucket = 4,
	SADXHat_EmptyCan = 5,
	SADXHat_CardboardBox = 6,
	SADXHat_FlowerPot = 7,
	SADXHat_PaperBag = 8,
	SADXHat_Pan = 9,
	SADXHat_Stump = 10,
	SADXHat_Watermelon = 11,
	SADXHat_RedWoolBeanie = 12,
	SADXHat_BlueWoolBeanie = 13,
	SADXHat_BlackWoolBeanie = 14,
	SADXHat_Pacifier = 15,
	SADXHat_NormalEggShell = 16,
	SADXHat_Yellow_MonoTone_EggShell = 17,
	SADXHat_White_MonoTone_EggShell = 18,
	SADXHat_Brown_MonoTone_EggShell = 19,
	SADXHat_Aqua_MonoTone_EggShell = 20,
	SADXHat_Pink_MonoTone_EggShell = 21,
	SADXHat_Blue_MonoTone_EggShell = 22,
	SADXHat_Grey_MonoTone_EggShell = 23,
	SADXHat_Green_MonoTone_EggShell = 24,
	SADXHat_Red_MonoTone_EggShell = 25,
	SADXHat_LightGreen_MonoTone_EggShell = 26,
	SADXHat_Purple_MonoTone_EggShell = 27,
	SADXHat_Orange_MonoTone_EggShell = 28,
	SADXHat_Black_MonoTone_EggShell = 29,
	SADXHat_Yellow_TwoTone_EggShell = 30,
	SADXHat_White_TwoTone_EggShell = 31,
	SADXHat_Brown_TwoTone_EggShell = 32,
	SADXHat_Aqua_TwoTone_EggShell = 33,
	SADXHat_Pink_TwoTone_EggShell = 34,
	SADXHat_Blue_TwoTone_EggShell = 35,
	SADXHat_Grey_TwoTone_EggShell = 36,
	SADXHat_Green_TwoTone_EggShell = 37,
	SADXHat_Red_TwoTone_EggShell = 38,
	SADXHat_LightGreen_TwoTone_EggShell = 39,
	SADXHat_Purple_TwoTone_EggShell = 40,
	SADXHat_Orange_TwoTone_EggShell = 41,
	SADXHat_Black_TwoTone_EggShell = 42,
	SADXHat_NormalShinyEggShell = 43,
	SADXHat_YellowShiny_MonoTone_EggShell = 44,
	SADXHat_WhiteShiny_MonoTone_EggShell = 45,
	SADXHat_BrownShiny_MonoTone_EggShell = 46,
	SADXHat_AquaShiny_MonoTone_EggShell = 47,
	SADXHat_PinkShiny_MonoTone_EggShell = 48,
	SADXHat_BlueShiny_MonoTone_EggShell = 49,
	SADXHat_GreyShiny_MonoTone_EggShell = 50,
	SADXHat_GreenShiny_MonoTone_EggShell = 51,
	SADXHat_RedShiny_MonoTone_EggShell = 52,
	SADXHat_LightGreenShiny_MonoTone_EggShell = 53,
	SADXHat_PurpleShiny_MonoTone_EggShell = 54,
	SADXHat_OrangeShiny_MonoTone_EggShell = 55,
	SADXHat_BlackShiny_MonoTone_EggShell = 56,
	SADXHat_YellowShiny_TwoTone_EggShell = 57,
	SADXHat_WhiteShiny_TwoTone_EggShell = 58,
	SADXHat_BrownShiny_TwoTone_EggShell = 59,
	SADXHat_AquaShiny_TwoTone_EggShell = 60,
	SADXHat_PinkShiny_TwoTone_EggShell = 61,
	SADXHat_BlueShiny_TwoTone_EggShell = 62,
	SADXHat_GreyShiny_TwoTone_EggShell = 63,
	SADXHat_GreenShiny_TwoTone_EggShell = 64,
	SADXHat_RedShiny_TwoTone_EggShell = 65,
	SADXHat_LightGreenShiny_TwoTone_EggShell = 66,
	SADXHat_PurpleShiny_TwoTone_EggShell = 67,
	SADXHat_OrangeShiny_TwoTone_EggShell = 68,
	SADXHat_BlackShiny_TwoTone_EggShell = 69,
	SADXHat_YellowJewelEggShell = 70,
	SADXHat_WhiteJewelEggShell = 71,
	SADXHat_PinkJewelEggShell = 72,
	SADXHat_BlueJewelEggShell = 73,
	SADXHat_GreenJewelEggShell = 74,
	SADXHat_PurpleJewelEggShell = 75,
	SADXHat_AquaJewelEggShell = 76,
	SADXHat_RedJewelEggShell = 77,
	SADXHat_BlackJewelEggShell = 78,
	SADXHat_LightGreenJewelEggShell = 79,
	SADXHat_OrangeJewelEggShell = 80,
	SADXHat_PearlEggShell = 81, // Unobtainable
	SADXHat_Metal1EggShell = 82, // Unobtainable
	SADXHat_Metal2EggShell = 83, // Unobtainable
	SADXHat_GlassEggShell = 84, // Unobtainable
};

enum SA2BHat : Sint8
{
	SA2BHat_None = 0,
	SA2BHat_Pumpkin = 1,
	SA2BHat_Skull = 2,
	SA2BHat_Apple = 3,
	SA2BHat_Bucket = 4,
	SA2BHat_EmptyCan = 5,
	SA2BHat_CardboardBox = 6,
	SA2BHat_FlowerPot = 7,
	SA2BHat_PaperBag = 8,
	SA2BHat_Pan = 9,
	SA2BHat_Stump = 10,
	SA2BHat_Watermelon = 11,
	SA2BHat_RedWoolBeanie = 12,
	SA2BHat_BlueWoolBeanie = 13,
	SA2BHat_BlackWoolBeanie = 14,
	SA2BHat_Pacifier = 15,
	SA2BHat_NormalEggShell = 16,
	SA2BHat_Yellow_MonoTone_EggShell = 17,
	SA2BHat_White_MonoTone_EggShell = 18,
	SA2BHat_Brown_MonoTone_EggShell = 19,
	SA2BHat_SkyBlue_MonoTone_EggShell = 20,
	SA2BHat_Pink_MonoTone_EggShell = 21,
	SA2BHat_Blue_MonoTone_EggShell = 22,
	SA2BHat_Grey_MonoTone_EggShell = 23,
	SA2BHat_Green_MonoTone_EggShell = 24,
	SA2BHat_Red_MonoTone_EggShell = 25,
	SA2BHat_LimeGreen_MonoTone_EggShell = 26,
	SA2BHat_Purple_MonoTone_EggShell = 27,
	SA2BHat_Orange_MonoTone_EggShell = 28,
	SA2BHat_Black_MonoTone_EggShell = 29,
	SA2BHat_Yellow_TwoTone_EggShell = 30,
	SA2BHat_White_TwoTone_EggShell = 31,
	SA2BHat_Brown_TwoTone_EggShell = 32,
	SA2BHat_SkyBlue_TwoTone_EggShell = 33,
	SA2BHat_Pink_TwoTone_EggShell = 34,
	SA2BHat_Blue_TwoTone_EggShell = 35,
	SA2BHat_Grey_TwoTone_EggShell = 36,
	SA2BHat_Green_TwoTone_EggShell = 37,
	SA2BHat_Red_TwoTone_EggShell = 38,
	SA2BHat_LimeGreen_TwoTone_EggShell = 39,
	SA2BHat_Purple_TwoTone_EggShell = 40,
	SA2BHat_Orange_TwoTone_EggShell = 41,
	SA2BHat_Black_TwoTone_EggShell = 42,
	SA2BHat_NormalShinyEggShell = 43,
	SA2BHat_YellowShiny_MonoTone_EggShell = 44,
	SA2BHat_WhiteShiny_MonoTone_EggShell = 45,
	SA2BHat_BrownShiny_MonoTone_EggShell = 46,
	SA2BHat_SkyBlueShiny_MonoTone_EggShell = 47,
	SA2BHat_PinkShiny_MonoTone_EggShell = 48,
	SA2BHat_BlueShiny_MonoTone_EggShell = 49,
	SA2BHat_GreyShiny_MonoTone_EggShell = 50,
	SA2BHat_GreenShiny_MonoTone_EggShell = 51,
	SA2BHat_RedShiny_MonoTone_EggShell = 52,
	SA2BHat_LimeGreenShiny_MonoTone_EggShell = 53,
	SA2BHat_PurpleShiny_MonoTone_EggShell = 54,
	SA2BHat_OrangeShiny_MonoTone_EggShell = 55,
	SA2BHat_BlackShiny_MonoTone_EggShell = 56,
	SA2BHat_YellowShiny_TwoTone_EggShell = 57,
	SA2BHat_WhiteShiny_TwoTone_EggShell = 58,
	SA2BHat_BrownShiny_TwoTone_EggShell = 59,
	SA2BHat_SkyBlueShiny_TwoTone_EggShell = 60,
	SA2BHat_PinkShiny_TwoTone_EggShell = 61,
	SA2BHat_BlueShiny_TwoTone_EggShell = 62,
	SA2BHat_GreyShiny_TwoTone_EggShell = 63,
	SA2BHat_GreenShiny_TwoTone_EggShell = 64,
	SA2BHat_RedShiny_TwoTone_EggShell = 65,
	SA2BHat_LimeGreenShiny_TwoTone_EggShell = 66,
	SA2BHat_PurpleShiny_TwoTone_EggShell = 67,
	SA2BHat_OrangeShiny_TwoTone_EggShell = 68,
	SA2BHat_BlackShiny_TwoTone_EggShell = 69,
	SA2BHat_GlitchyNormalEggShell = 70,
};

enum ChaoSeed : Sint8
{
	ChaoSeed_None = -1,
	ChaoSeed_StrongSeed = 0,
	ChaoSeed_TastySeed = 1,
	ChaoSeed_HeroSeed = 2,
	ChaoSeed_DarkTheme = 3,
	ChaoSeed_RoundSeed = 4,
	ChaoSeed_TriangleTheme = 5,
	ChaoSeed_SquareSeed = 6,
};

enum Theme : Sint8
{
	Theme_Omochao = 0,
	Theme_Amy = 1,
	Theme_Maria = 2,
};
