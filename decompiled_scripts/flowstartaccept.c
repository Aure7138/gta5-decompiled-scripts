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
	if (unk_0x2C897F101BA20806(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0xF6BAF9F0C2863FFE()) && unk_0xD38C598E6351982D())
	{
		unk_0xD2238E59B5C4A250(1);
		if (!unk_0xF4C685E933068D23())
		{
			if (!unk_0xE9A5FF67266655B2())
			{
				unk_0x271524E4281048DC(800);
			}
		}
		iLocal_19 = unk_0x36ECDA4DD9A3F08D("MP_BIG_MESSAGE_FREEMODE");
		iLocal_20 = unk_0x36ECDA4DD9A3F08D("INSTRUCTIONAL_BUTTONS");
		while (!unk_0xC8378A96673BCC40(iLocal_19) || !unk_0xC8378A96673BCC40(iLocal_20))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB067107D878E9585(iLocal_19, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xD3DF251F2DF3B257();
		unk_0xB067107D878E9585(iLocal_20, "SET_DATA_SLOT_EMPTY");
		unk_0xD3DF251F2DF3B257();
		unk_0xB067107D878E9585(iLocal_20, "SET_DATA_SLOT");
		unk_0x26221D1D76579618(0);
		func_4(unk_0xA71FB26FF9682F08(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0xD3DF251F2DF3B257();
		unk_0xB067107D878E9585(iLocal_20, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xF34EF2C628F5B47B(0);
		unk_0xD3DF251F2DF3B257();
		while (!unk_0xF4C685E933068D23())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB2216E1CCA0D4ED2();
		while (!iLocal_21)
		{
			unk_0xCDDA76A8EADDFCB7();
			unk_0xFA5652FA48ED466D(7);
			unk_0x27BDF28219C810BA(iLocal_19, 255, 255, 255, 0, 0);
			unk_0x27BDF28219C810BA(iLocal_20, 255, 255, 255, 0, 0);
			if (unk_0xF49761626882E968(2, 201))
			{
				iLocal_21 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xD2238E59B5C4A250(0);
		func_3(1, 1);
		func_1();
	}
	Global_68594.f_1 = 0;
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8270.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_90081.f_7 = iParam0;
	Global_90081.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0xB51F3A5C13620EE6(uParam0);
}

void func_5(char* sParam0)
{
	unk_0xEBC0B3BDAD1250BE(sParam0);
	unk_0x9F94C7B5E8C04AB3();
}

void func_6()
{
	if (iLocal_19 != 0)
	{
		unk_0x7559DFAB61B017F2(&iLocal_19);
	}
	if (iLocal_20 != 0)
	{
		unk_0x7559DFAB61B017F2(&iLocal_20);
	}
	unk_0xFA5652FA48ED466D(4);
	unk_0xD2238E59B5C4A250(0);
	unk_0x82706E6C897B0FA1();
}

