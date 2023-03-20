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
	unk_0x9243BAC96D64C050();
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
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					if (iLocal_20 == 1)
					{
						if (func_8(2, Global_14362, 0))
						{
							unk_0x67C540AA08E4A6F5(-1, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", true);
							Global_14371 = 1;
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
						Global_1573285 = 1;
					}
					break;
				
				case 8:
					if (func_8(2, Global_14361, 0))
					{
						func_4();
						Global_14371 = 1;
						if (Global_14393.f_1 > 3)
						{
							Global_14393.f_1 = 7;
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
			Global_14395 = 6;
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
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x77ED170667F50170("DLC_MPHEIST/HEIST_HACK_SNAKE");
	unk_0x1090044AD1DA76FA();
}

int func_3()
{
	if (Global_2869 == 1 || Global_14393.f_1 < 7)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0x67C540AA08E4A6F5(-1, "Menu_Back", &Global_14382, true);
	}
}

void func_5()
{
	if (Global_14381)
	{
		func_6(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xE80492A9AC099A93(&Global_2263, 17);
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xCA042B6957743895(sParam7))
	{
		func_7(sParam7);
	}
	if (!unk_0xCA042B6957743895(sParam8))
	{
		func_7(sParam8);
	}
	if (!unk_0xCA042B6957743895(sParam9))
	{
		func_7(sParam9);
	}
	if (!unk_0xCA042B6957743895(sParam10))
	{
		func_7(sParam10);
	}
	if (!unk_0xCA042B6957743895(sParam11))
	{
		func_7(sParam11);
	}
	unk_0xC6796A8FFA375E53();
}

void func_7(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

int func_8(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x580417101DDB492F(iParam0, iParam1) || (iParam2 == 1 && unk_0x91AEF906BCA88877(iParam0, iParam1)))
	{
		if (unk_0x48AF36444B965238())
		{
			if (unk_0x0CF2B696BBF945AE() == 0 || (unk_0x5FCF4D7069B09026() && unk_0xA571D46727E2B718(2)))
			{
				return 0;
			}
		}
		if (unk_0xB0034A223497FFCB() || unk_0xE18B138FABC53103())
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
	if (Global_14381)
	{
		func_6(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xE80492A9AC099A93(&Global_2263, 17);
}

void func_10()
{
	if (iLocal_20 == 0)
	{
		unk_0x2F844A8B08D76685("DLC_MPHEIST/HEIST_HACK_SNAKE", 0);
		while (unk_0x2F844A8B08D76685("DLC_MPHEIST/HEIST_HACK_SNAKE", 0) == 0)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_11(Global_14374, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
		unk_0xC3D0841A0CC546A6(23);
		unk_0xC3D0841A0CC546A6(0);
		unk_0xC3D0841A0CC546A6(-99);
		unk_0xC3D0841A0CC546A6(0);
		unk_0xC3D0841A0CC546A6(100);
		unk_0xC3D0841A0CC546A6(2);
		unk_0xC58424BA936EB458(false);
		if (unk_0xA921AA820C25702F(Global_2265, 1))
		{
			unk_0xD69736AAE04DB51A(0f);
		}
		unk_0xC6796A8FFA375E53();
		func_11(Global_14374, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		iLocal_20 = 1;
	}
	else if (iLocal_20 == 1)
	{
		func_11(Global_14374, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xF6E48914C7A8694E(Global_14374, "SET_DATA_SLOT");
		unk_0xC3D0841A0CC546A6(23);
		unk_0xC3D0841A0CC546A6(0);
		unk_0xC3D0841A0CC546A6(-99);
		unk_0xC3D0841A0CC546A6(0);
		unk_0xC3D0841A0CC546A6(100);
		unk_0xC3D0841A0CC546A6(3);
		unk_0xC58424BA936EB458(false);
		if (unk_0xA921AA820C25702F(Global_2265, 1))
		{
			unk_0xD69736AAE04DB51A(0f);
		}
		unk_0xC6796A8FFA375E53();
		func_11(Global_14374, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		iLocal_20 = 2;
	}
}

void func_11(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xF6E48914C7A8694E(iParam0, sParam1);
	unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xC3D0841A0CC546A6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xC6796A8FFA375E53();
}

