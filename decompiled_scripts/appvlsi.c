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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
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
	unk_0x15378F974E08496E();
	iLocal_20 = 0;
	if (iLocal_19 == 0)
	{
		func_10();
		func_9();
		iLocal_19 = 1;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14394.f_1 != 9)
		{
			switch (Global_14394.f_1)
			{
				case 7:
					if (iLocal_20 == 1)
					{
						if (func_8(2, Global_14363, 0))
						{
							unk_0x35D7948F61AA3FEC(-1, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", 1);
							Global_14372 = 1;
							func_10();
							func_5();
							unk_0xC1B1E9A034A63A62(0);
							unk_0x5AE11BC36633DE4E(0);
						}
					}
					if (iLocal_20 == 2)
					{
						if (unk_0xC9D9444186B5A374() > 499)
						{
							unk_0x5AE11BC36633DE4E(0);
						}
						if (unk_0x83666F9FB8FEBD4B() > 2200)
						{
							iLocal_20 = 3;
						}
					}
					if (iLocal_20 == 3)
					{
						Global_1573419 = 1;
					}
					break;
				
				case 8:
					if (func_8(2, Global_14362, 0))
					{
						func_4();
						Global_14372 = 1;
						if (Global_14394.f_1 > 3)
						{
							Global_14394.f_1 = 7;
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
			Global_14396 = 6;
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
	if (((Global_14394.f_1 == 1 || Global_14394.f_1 == 3) || Global_14394.f_1 == 0) || Global_14338 == 1)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x2D2FB8B6D397597E("DLC_MPHEIST/HEIST_HACK_SNAKE");
	unk_0xC23A229F78DAD92A();
}

int func_3()
{
	if (Global_2870 == 1 || Global_14394.f_1 < 7)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x35D7948F61AA3FEC(-1, "Menu_Back", &Global_14383, 1);
	}
}

void func_5()
{
	if (Global_14382)
	{
		func_6(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xC69E84EBBD7166E6(&Global_2264, 17);
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam7))
	{
		func_7(sParam7);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam8))
	{
		func_7(iParam8);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam9))
	{
		func_7(iParam9);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam10))
	{
		func_7(iParam10);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam11))
	{
		func_7(iParam11);
	}
	unk_0xBA9BA6181F2B6111();
}

void func_7(var uParam0)
{
	unk_0x6CE839BF5D87A428(uParam0);
	unk_0xC3822F70D0E7940B();
}

int func_8(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x093DEAE9A023FAA0(iParam0, uParam1) || (iParam2 == 1 && unk_0x5BD35B90C0693406(iParam0, uParam1)))
	{
		if (unk_0x913B1C01C1BA6C6F())
		{
			if (unk_0x87E58291A874D55F() == 0 || (unk_0x18138B3C6FD07449() && unk_0x3D6272A8E1C449E9(2)))
			{
				return 0;
			}
		}
		if (unk_0xDB10DED5ABC4AA20() || unk_0x30D46D6512711A3E())
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

void func_9()
{
	if (Global_14382)
	{
		func_6(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14375, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xC69E84EBBD7166E6(&Global_2264, 17);
}

void func_10()
{
	if (iLocal_20 == 0)
	{
		unk_0x9D2B95F4020E5347("DLC_MPHEIST/HEIST_HACK_SNAKE", 0);
		while (unk_0x9D2B95F4020E5347("DLC_MPHEIST/HEIST_HACK_SNAKE", 0) == 0)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_11(Global_14375, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
		unk_0xBD0C54D89298454E(23);
		unk_0xBD0C54D89298454E(0);
		unk_0xBD0C54D89298454E(-99);
		unk_0xBD0C54D89298454E(0);
		unk_0xBD0C54D89298454E(100);
		unk_0xBD0C54D89298454E(2);
		unk_0x75A2A42ADE12FD0E(0);
		if (unk_0x236D8AD7EE179F46(Global_2266, 1))
		{
			unk_0x518198639630AE08(0f);
		}
		unk_0xBA9BA6181F2B6111();
		func_11(Global_14375, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		iLocal_20 = 1;
	}
	else if (iLocal_20 == 1)
	{
		func_11(Global_14375, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x21ED0FC9B5CC748B(Global_14375, "SET_DATA_SLOT");
		unk_0xBD0C54D89298454E(23);
		unk_0xBD0C54D89298454E(0);
		unk_0xBD0C54D89298454E(-99);
		unk_0xBD0C54D89298454E(0);
		unk_0xBD0C54D89298454E(100);
		unk_0xBD0C54D89298454E(3);
		unk_0x75A2A42ADE12FD0E(0);
		if (unk_0x236D8AD7EE179F46(Global_2266, 1))
		{
			unk_0x518198639630AE08(0f);
		}
		unk_0xBA9BA6181F2B6111();
		func_11(Global_14375, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		iLocal_20 = 2;
	}
}

void func_11(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xBA9BA6181F2B6111();
}

