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
	int iLocal_22 = 0;
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
	if (unk_0x24862A9CDC8F8874(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x68B0A67658F2D9C2()) && unk_0x5E552F383221E152())
	{
		unk_0x4A7FE215482FE126(1);
		if (!unk_0xD5DFCA69ACAA20E3())
		{
			if (!unk_0xE71FCE10773CF7B0())
			{
				unk_0x00F9843B9C06C2E9(800);
			}
		}
		iLocal_20 = unk_0x31DC2CEFEF13C96D("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x31DC2CEFEF13C96D("INSTRUCTIONAL_BUTTONS");
		while (!unk_0xF518F3C7FACD43B7(iLocal_20) || !unk_0xF518F3C7FACD43B7(iLocal_21))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x7C38F93AF52620B1(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xD013AC29829DDC02();
		unk_0x7C38F93AF52620B1(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0xD013AC29829DDC02();
		unk_0x7C38F93AF52620B1(iLocal_21, "SET_DATA_SLOT");
		unk_0x65960B4E2ADC9F6D(0);
		func_4(unk_0x3F78CAF40CD146C4(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0xD013AC29829DDC02();
		unk_0x7C38F93AF52620B1(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x0139C89EE907A315(0);
		unk_0xD013AC29829DDC02();
		while (!unk_0xD5DFCA69ACAA20E3())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x247D27E2027E0425();
		while (!iLocal_22)
		{
			unk_0xD2423E2A80750319();
			unk_0x7F1F2564B5CE06AF(7);
			unk_0x16387DB49A36A0F3(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x16387DB49A36A0F3(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x0139E142C27412BC(2, 201))
			{
				iLocal_22 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x4A7FE215482FE126(0);
		func_3(1, 1);
		func_1();
	}
	Global_69586.f_1 = 0;
	unk_0x59A0729D503ED758(&(Global_100976.f_8650.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_91145.f_7 = iParam0;
	Global_91145.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x621B4D0F6ED2315D(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x276F16E002D00C0C(sParam0);
	unk_0x354E2E7AA52E941F();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0xEF145906684E3D72(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0xEF145906684E3D72(&iLocal_21);
	}
	unk_0x7F1F2564B5CE06AF(4);
	unk_0x4A7FE215482FE126(0);
	unk_0xA4E0D8FD51F2A6F7();
}

