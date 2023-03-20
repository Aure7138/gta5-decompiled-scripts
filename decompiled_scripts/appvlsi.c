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
	int iLocal_21 = 0;
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
	unk_0xBD9A2AF38E96A0ED();
	iLocal_21 = 0;
	if (iLocal_20 == 0)
	{
		func_10();
		func_9();
		iLocal_20 = 1;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					if (iLocal_21 == 1)
					{
						if (func_8(2, Global_14382, 0))
						{
							unk_0xCC18B241D266EF14(-1, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", 1);
							Global_14391 = 1;
							func_10();
							func_5();
							unk_0xC1B1E9A034A63A62(0);
							unk_0x5AE11BC36633DE4E(0);
						}
					}
					if (iLocal_21 == 2)
					{
						if (unk_0xC9D9444186B5A374() > 499)
						{
							unk_0x5AE11BC36633DE4E(0);
						}
						if (unk_0x83666F9FB8FEBD4B() > 2200)
						{
							iLocal_21 = 3;
						}
					}
					if (iLocal_21 == 3)
					{
						Global_1573426 = 1;
					}
					break;
				
				case 8:
					if (func_8(2, Global_14381, 0))
					{
						func_4();
						Global_14391 = 1;
						if (Global_14413.f_1 > 3)
						{
							Global_14413.f_1 = 7;
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
			Global_14415 = 6;
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
	if (((Global_14413.f_1 == 1 || Global_14413.f_1 == 3) || Global_14413.f_1 == 0) || Global_14357 == 1)
	{
		Global_14400 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x9694B1DF874054DF("DLC_MPHEIST/HEIST_HACK_SNAKE");
	unk_0x52F20802944F8DCE();
}

int func_3()
{
	if (Global_2889 == 1 || Global_14413.f_1 < 7)
	{
		Global_14400 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xCC18B241D266EF14(-1, "Menu_Back", &Global_14402, 1);
	}
}

void func_5()
{
	if (Global_14401)
	{
		func_6(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x73817D396768E4C6(&Global_2283, 17);
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xF6917DE0E003509D(sParam7))
	{
		func_7(sParam7);
	}
	if (!unk_0xF6917DE0E003509D(iParam8))
	{
		func_7(iParam8);
	}
	if (!unk_0xF6917DE0E003509D(iParam9))
	{
		func_7(iParam9);
	}
	if (!unk_0xF6917DE0E003509D(iParam10))
	{
		func_7(iParam10);
	}
	if (!unk_0xF6917DE0E003509D(iParam11))
	{
		func_7(iParam11);
	}
	unk_0xFF141057ED7B4C73();
}

void func_7(var uParam0)
{
	unk_0x33D37B75FC2BCC8C(uParam0);
	unk_0x057886C01DDC535D();
}

int func_8(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x958B4351DD28B142(iParam0, uParam1) || (iParam2 == 1 && unk_0x28BB6250B86A5CA5(iParam0, uParam1)))
	{
		if (unk_0xA78EA29AC2FFBADE())
		{
			if (unk_0x4C0203C9C5CF4108() == 0 || (unk_0x29C4AA4F29B1E539() && unk_0x7EDB1AFBE755EC7A(2)))
			{
				return 0;
			}
		}
		if (unk_0xA57007F9A665F322() || unk_0xA42A6C736BEA9778())
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
	if (Global_14401)
	{
		func_6(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x73817D396768E4C6(&Global_2283, 17);
}

void func_10()
{
	if (iLocal_21 == 0)
	{
		unk_0xDF83A33BF4D93E6F("DLC_MPHEIST/HEIST_HACK_SNAKE", 0);
		while (unk_0xDF83A33BF4D93E6F("DLC_MPHEIST/HEIST_HACK_SNAKE", 0) == 0)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_11(Global_14394, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
		unk_0x43C93E686A1E92C5(23);
		unk_0x43C93E686A1E92C5(0);
		unk_0x43C93E686A1E92C5(-99);
		unk_0x43C93E686A1E92C5(0);
		unk_0x43C93E686A1E92C5(100);
		unk_0x43C93E686A1E92C5(2);
		unk_0x840DDAF1126AE0CC(0);
		if (unk_0xB519E5386FBF69E5(Global_2285, 1))
		{
			unk_0x73B039A1CD485226(0f);
		}
		unk_0xFF141057ED7B4C73();
		func_11(Global_14394, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 1;
	}
	else if (iLocal_21 == 1)
	{
		func_11(Global_14394, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
		unk_0x43C93E686A1E92C5(23);
		unk_0x43C93E686A1E92C5(0);
		unk_0x43C93E686A1E92C5(-99);
		unk_0x43C93E686A1E92C5(0);
		unk_0x43C93E686A1E92C5(100);
		unk_0x43C93E686A1E92C5(3);
		unk_0x840DDAF1126AE0CC(0);
		if (unk_0xB519E5386FBF69E5(Global_2285, 1))
		{
			unk_0x73B039A1CD485226(0f);
		}
		unk_0xFF141057ED7B4C73();
		func_11(Global_14394, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 2;
	}
}

void func_11(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xFF141057ED7B4C73();
}

