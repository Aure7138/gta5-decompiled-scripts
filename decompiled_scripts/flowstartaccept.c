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
	if (unk_0x2170E7BC25114A22(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x2D337DD29A7ABD30()) && unk_0xEA51091322A50774())
	{
		unk_0x82047209FE8411F9(1);
		if (!unk_0x7E3640C27B17457C())
		{
			if (!unk_0x83D6BCB493FCFCBA())
			{
				unk_0x0FBCFDA15A0FB2D5(800);
			}
		}
		iLocal_20 = unk_0x542F16A736FAC9A6("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x542F16A736FAC9A6("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x52622CA85B1C304B(iLocal_20) || !unk_0x52622CA85B1C304B(iLocal_21))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x3B6EF6403E3F1CAC(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xBBAAC5B2437ACF2A();
		unk_0x3B6EF6403E3F1CAC(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0xBBAAC5B2437ACF2A();
		unk_0x3B6EF6403E3F1CAC(iLocal_21, "SET_DATA_SLOT");
		unk_0x1B215CC37BF52E79(0);
		func_4(unk_0xE78ECEC3BC74DC0C(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0xBBAAC5B2437ACF2A();
		unk_0x3B6EF6403E3F1CAC(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x2C310F11D2096992(0);
		unk_0xBBAAC5B2437ACF2A();
		while (!unk_0x7E3640C27B17457C())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xF532DDD037B0328A();
		while (!iLocal_22)
		{
			unk_0x517E18EC5A3C4790();
			unk_0xCF1B9EC03D5AB61E(7);
			unk_0x131F832AD6923854(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x131F832AD6923854(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0xF334707DE9C8DE80(2, 201))
			{
				iLocal_22 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x82047209FE8411F9(0);
		func_3(1, 1);
		func_1();
	}
	Global_69966.f_1 = 0;
	unk_0xB8A73E7DA87B2968(&(Global_101652.f_8959.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_91525.f_8)
	{
		if (Global_91525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91525.f_10 > 1)
	{
		return 0;
	}
	Global_91525.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_91525.f_7 = iParam0;
	Global_91525.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0xDC0269D08B29626C(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x0BBDB952BE56A9DF(sParam0);
	unk_0xCB329F559FA7DCD0();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0x4292FC2ED4EC4212(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0x4292FC2ED4EC4212(&iLocal_21);
	}
	unk_0xCF1B9EC03D5AB61E(4);
	unk_0x82047209FE8411F9(0);
	unk_0x01DFCA3621B68C4A();
}

