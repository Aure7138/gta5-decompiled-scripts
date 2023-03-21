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
		func_11();
		func_10();
		iLocal_20 = 1;
		unk_0xC1B1E9A034A63A62(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14443.f_1 != 9)
		{
			switch (Global_14443.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && unk_0x83666F9FB8FEBD4B() > 1500)
					{
						func_6();
						unk_0xC1B1E9A034A63A62(0);
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
	func_9(Global_14424, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
	unk_0x4CECF13AF144A8F6(24);
	unk_0x4CECF13AF144A8F6(0);
	if (unk_0xAA4F14DA15DB0B51(Global_2600685, 23))
	{
		unk_0xD426F7366505EADF(0);
		func_8("CELL_EXTBYOU");
		unk_0x4CECF13AF144A8F6(Global_2600686);
		unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(Global_2600902));
		unk_0x4CECF13AF144A8F6(Global_2600687);
		unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(Global_2600902.f_1));
		unk_0x4CECF13AF144A8F6(Global_2600688);
		unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(Global_2600902.f_2));
		func_8("CELL_BODYG");
		unk_0x4CECF13AF144A8F6(Global_2600689);
		unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(Global_2600905));
		unk_0x4CECF13AF144A8F6(Global_2600690);
		unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(Global_2600905.f_1));
		unk_0x4CECF13AF144A8F6(Global_2600691);
		unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(Global_2600905.f_2));
	}
	else
	{
		unk_0xD426F7366505EADF(0);
		func_8("CELL_EXTBYOU");
		unk_0x4CECF13AF144A8F6(Global_2600689);
		unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(Global_2600905));
		unk_0x4CECF13AF144A8F6(Global_2600690);
		unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(Global_2600905.f_1));
		unk_0x4CECF13AF144A8F6(Global_2600691);
		unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(Global_2600905.f_2));
		func_8("CELL_EXTBTARG");
		unk_0x4CECF13AF144A8F6(Global_2600686);
		unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(Global_2600902));
		unk_0x4CECF13AF144A8F6(Global_2600687);
		unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(Global_2600902.f_1));
		unk_0x4CECF13AF144A8F6(Global_2600688);
		unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(Global_2600902.f_2));
	}
	unk_0x8123397DC676E794();
	func_9(Global_14424, "DISPLAY_VIEW", 24f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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
	unk_0x8123397DC676E794();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_14431)
	{
		func_12(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x507FE690B1271947(&Global_2313, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_8(sParam7);
	}
	if (!unk_0x58478145CAF8429C(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0x58478145CAF8429C(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0x58478145CAF8429C(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0x58478145CAF8429C(iParam11))
	{
		func_8(iParam11);
	}
	unk_0x8123397DC676E794();
}

