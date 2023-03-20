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
	unk_0xB64A6F2B8046CEF8();
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
		if (Global_14443.f_1 != 9)
		{
			switch (Global_14443.f_1)
			{
				case 7:
					if (iLocal_21 == 1)
					{
						if (func_8(2, Global_14412, 0))
						{
							unk_0xAB16AADE80707D47(-1, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", 1);
							Global_14421 = 1;
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
						Global_1573443 = 1;
					}
					break;
				
				case 8:
					if (func_8(2, Global_14411, 0))
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
	unk_0x29B0EFEB2715365C("DLC_MPHEIST/HEIST_HACK_SNAKE");
	unk_0x78C587487CD40B92();
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
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xAB16AADE80707D47(-1, "Menu_Back", &Global_14432, 1);
	}
}

void func_5()
{
	if (Global_14431)
	{
		func_6(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(sParam7))
	{
		func_7(sParam7);
	}
	if (!unk_0x509383441597090D(iParam8))
	{
		func_7(iParam8);
	}
	if (!unk_0x509383441597090D(iParam9))
	{
		func_7(iParam9);
	}
	if (!unk_0x509383441597090D(iParam10))
	{
		func_7(iParam10);
	}
	if (!unk_0x509383441597090D(iParam11))
	{
		func_7(iParam11);
	}
	unk_0xE73340DA551C95E1();
}

void func_7(var uParam0)
{
	unk_0x709662CF2BD061A4(uParam0);
	unk_0x1E77BE8F4283FA05();
}

int func_8(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x2A57AED61E15C7C7(iParam0, uParam1) || (iParam2 == 1 && unk_0x5E429C409D2CBD68(iParam0, uParam1)))
	{
		if (unk_0x955B8C8F89CC3AC0())
		{
			if (unk_0xC5400265B5C1CEB3() == 0 || (unk_0x04781D6F82022E77() && unk_0x4255B5ECB9D34344(2)))
			{
				return 0;
			}
		}
		if (unk_0x84C71F36E7D97756() || unk_0xCD755B20D2481736())
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
	if (Global_14431)
	{
		func_6(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x09C86C0C5CA26B1E(&Global_2313, 17);
}

void func_10()
{
	if (iLocal_21 == 0)
	{
		unk_0xDD9B91529459212C("DLC_MPHEIST/HEIST_HACK_SNAKE", 0, -1);
		while (unk_0xDD9B91529459212C("DLC_MPHEIST/HEIST_HACK_SNAKE", 0, -1) == 0)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_11(Global_14424, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
		unk_0x7CBFB9F4AF33C67E(23);
		unk_0x7CBFB9F4AF33C67E(0);
		unk_0x7CBFB9F4AF33C67E(-99);
		unk_0x7CBFB9F4AF33C67E(0);
		unk_0x7CBFB9F4AF33C67E(100);
		unk_0x7CBFB9F4AF33C67E(2);
		unk_0x5CC02BB872FEF340(0);
		if (unk_0x08BA6DD398CA197C(Global_2315, 1))
		{
			unk_0x0FFE3C1DBBA72236(0f);
		}
		unk_0xE73340DA551C95E1();
		func_11(Global_14424, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 1;
	}
	else if (iLocal_21 == 1)
	{
		func_11(Global_14424, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
		unk_0x7CBFB9F4AF33C67E(23);
		unk_0x7CBFB9F4AF33C67E(0);
		unk_0x7CBFB9F4AF33C67E(-99);
		unk_0x7CBFB9F4AF33C67E(0);
		unk_0x7CBFB9F4AF33C67E(100);
		unk_0x7CBFB9F4AF33C67E(3);
		unk_0x5CC02BB872FEF340(0);
		if (unk_0x08BA6DD398CA197C(Global_2315, 1))
		{
			unk_0x0FFE3C1DBBA72236(0f);
		}
		unk_0xE73340DA551C95E1();
		func_11(Global_14424, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 2;
	}
}

void func_11(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

