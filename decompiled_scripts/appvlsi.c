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
	unk_0x20A629A7D3DC97F2();
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
							unk_0xC2E1777941B4536E(-1, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", 1);
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
						Global_1573286 = 1;
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
	unk_0x0C7542F015F6348E("DLC_MPHEIST/HEIST_HACK_SNAKE");
	unk_0x82706E6C897B0FA1();
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
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0xC2E1777941B4536E(-1, "Menu_Back", &Global_14383, 1);
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
	unk_0x29DB79DD4D939B38(&Global_2264, 17);
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x06771AF7795B3ECF(sParam7))
	{
		func_7(sParam7);
	}
	if (!unk_0x06771AF7795B3ECF(iParam8))
	{
		func_7(iParam8);
	}
	if (!unk_0x06771AF7795B3ECF(iParam9))
	{
		func_7(iParam9);
	}
	if (!unk_0x06771AF7795B3ECF(iParam10))
	{
		func_7(iParam10);
	}
	if (!unk_0x06771AF7795B3ECF(iParam11))
	{
		func_7(iParam11);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_7(var uParam0)
{
	unk_0xEBC0B3BDAD1250BE(uParam0);
	unk_0x9F94C7B5E8C04AB3();
}

int func_8(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x1453F50088A91E4E(iParam0, uParam1) || (iParam2 == 1 && unk_0x63D2949B11643BBA(iParam0, uParam1)))
	{
		if (unk_0xF6BAF9F0C2863FFE())
		{
			if (unk_0xCB70128095B6956E() == 0 || (unk_0x6E6ED37B068198D0() && unk_0x3E512F3AB14225D6(2)))
			{
				return 0;
			}
		}
		if (unk_0x2B0FFD431FD5A9FA() || unk_0x34CC8D9406FED489())
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
	unk_0x29DB79DD4D939B38(&Global_2264, 17);
}

void func_10()
{
	if (iLocal_20 == 0)
	{
		unk_0x45B7DFCE888B2A02("DLC_MPHEIST/HEIST_HACK_SNAKE", 0);
		while (unk_0x45B7DFCE888B2A02("DLC_MPHEIST/HEIST_HACK_SNAKE", 0) == 0)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_11(Global_14375, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
		unk_0x26221D1D76579618(23);
		unk_0x26221D1D76579618(0);
		unk_0x26221D1D76579618(-99);
		unk_0x26221D1D76579618(0);
		unk_0x26221D1D76579618(100);
		unk_0x26221D1D76579618(2);
		unk_0xF34EF2C628F5B47B(0);
		if (unk_0x889D01384B54BCE3(Global_2266, 1))
		{
			unk_0x50050D925C27B388(0f);
		}
		unk_0xD3DF251F2DF3B257();
		func_11(Global_14375, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		iLocal_20 = 1;
	}
	else if (iLocal_20 == 1)
	{
		func_11(Global_14375, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
		unk_0x26221D1D76579618(23);
		unk_0x26221D1D76579618(0);
		unk_0x26221D1D76579618(-99);
		unk_0x26221D1D76579618(0);
		unk_0x26221D1D76579618(100);
		unk_0x26221D1D76579618(3);
		unk_0xF34EF2C628F5B47B(0);
		if (unk_0x889D01384B54BCE3(Global_2266, 1))
		{
			unk_0x50050D925C27B388(0f);
		}
		unk_0xD3DF251F2DF3B257();
		func_11(Global_14375, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		iLocal_20 = 2;
	}
}

void func_11(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD3DF251F2DF3B257();
}

