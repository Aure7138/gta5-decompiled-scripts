#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	unk_0x945226432ACF160F();
	if (iLocal_20 == 0)
	{
		func_10();
		iLocal_20 = 1;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14443.f_1 != 9)
		{
			switch (Global_14443.f_1)
			{
				case 7:
					if (iLocal_20 == 1)
					{
						func_6();
					}
					break;
				
				case 8:
					if (func_5(2, Global_14411, 0))
					{
						func_4();
						Global_14421 = 1;
						if (Global_14443.f_1 > 3)
						{
							Global_14443.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_14445 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_14443.f_1 == 1 || Global_14443.f_1 == 3) || Global_14443.f_1 == 0) || Global_14387 == 1)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0xA232817B0B36F2E5();
}

int func_3()
{
	if (Global_2919 == 1 || Global_14443.f_1 < 7)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x08BE237DBCD9CBD9(-1, "Menu_Back", &Global_14432, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x92BC4A8239BDDACC(iParam0, uParam1) || (iParam2 == 1 && unk_0xBA36AFDE947F5C56(iParam0, uParam1)))
	{
		if (unk_0x5018862FF5D9F844())
		{
			if (unk_0x20CC52AB5EBEF40E() == 0 || (unk_0x2593BD27F8406EC2() && unk_0x3A473E888D0CF9FD(2)))
			{
				return 0;
			}
		}
		if (unk_0x9E5289F5D782437C() || unk_0x908783EBF098B817())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_6()
{
	func_7();
}

void func_7()
{
	unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
	unk_0x4CECF13AF144A8F6(27);
	unk_0x4CECF13AF144A8F6(0);
	unk_0x4CECF13AF144A8F6(Global_2600909);
	unk_0x4CECF13AF144A8F6(Global_2600908);
	func_9("");
	func_9(&Global_2600910);
	unk_0x8123397DC676E794();
	unk_0xD1FCC52F87A98873(Global_14424, "DISPLAY_VIEW");
	unk_0x4CECF13AF144A8F6(27);
	unk_0x8123397DC676E794();
	if (!unk_0xAA4F14DA15DB0B51(Global_1638223.f_21, 30))
	{
		func_8(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);
	}
}

void func_8(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x58478145CAF8429C(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0x58478145CAF8429C(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0x58478145CAF8429C(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0x58478145CAF8429C(sParam11))
	{
		func_9(sParam11);
	}
	unk_0x8123397DC676E794();
}

void func_9(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

void func_10()
{
	func_7();
	func_8(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);
}

