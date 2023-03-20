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
	if (unk_0xF4C685E933068D23())
	{
		unk_0x5FE2A83120E8127F(500);
	}
	if (unk_0x2C897F101BA20806(3))
	{
		func_2();
	}
	uLocal_17 = unk_0x36ECDA4DD9A3F08D("graphic_design");
	while (!unk_0xC8378A96673BCC40(uLocal_17))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x782CAB485999E384(uLocal_17, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_17);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14373 == 0)
	{
		if (((((((unk_0xF49761626882E968(2, 189) || unk_0xF49761626882E968(2, 190)) || unk_0xF49761626882E968(2, 188)) || unk_0xF49761626882E968(2, 187)) || unk_0xF49761626882E968(2, 205)) || unk_0xF49761626882E968(2, 206)) || unk_0xF49761626882E968(2, 201)) || unk_0xF49761626882E968(2, 202))
		{
			Global_14373 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14373 = 0;
	}
	if (Global_14373 == 0)
	{
		if (unk_0xF49761626882E968(2, 189))
		{
			unk_0xB067107D878E9585(uParam0, "SET_INPUT_EVENT");
			unk_0x26221D1D76579618(10);
			unk_0xD3DF251F2DF3B257();
		}
		if (unk_0xF49761626882E968(2, 190))
		{
			unk_0xB067107D878E9585(uParam0, "SET_INPUT_EVENT");
			unk_0x26221D1D76579618(11);
			unk_0xD3DF251F2DF3B257();
		}
		if (unk_0xF49761626882E968(2, 205))
		{
			unk_0xB067107D878E9585(uParam0, "SET_INPUT_EVENT");
			unk_0x26221D1D76579618(4);
			unk_0xD3DF251F2DF3B257();
		}
		if (unk_0xF49761626882E968(2, 206))
		{
			unk_0xB067107D878E9585(uParam0, "SET_INPUT_EVENT");
			unk_0x26221D1D76579618(6);
			unk_0xD3DF251F2DF3B257();
		}
		if (unk_0xF49761626882E968(2, 188))
		{
			unk_0xB067107D878E9585(uParam0, "SET_INPUT_EVENT");
			unk_0x26221D1D76579618(8);
			unk_0xD3DF251F2DF3B257();
		}
		if (unk_0xF49761626882E968(2, 187))
		{
			unk_0xB067107D878E9585(uParam0, "SET_INPUT_EVENT");
			unk_0x26221D1D76579618(9);
			unk_0xD3DF251F2DF3B257();
		}
		if (unk_0xF49761626882E968(2, 201))
		{
			unk_0xB067107D878E9585(uParam0, "SET_INPUT_EVENT");
			unk_0x26221D1D76579618(16);
			unk_0xD3DF251F2DF3B257();
		}
		if (unk_0xF49761626882E968(2, 202))
		{
			unk_0xB067107D878E9585(uParam0, "SET_INPUT_EVENT");
			unk_0x26221D1D76579618(17);
			unk_0xD3DF251F2DF3B257();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0x8D033DA6320BDCF9(0);
	unk_0x7559DFAB61B017F2(&uLocal_17);
	unk_0x82706E6C897B0FA1();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
		}
		Global_14394.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14394.f_1 == 1)
	{
		if (!Global_14394.f_1 == 0)
		{
			Global_14394.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14552)
	{
		func_6(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
	}
	if (!func_5())
	{
		Global_14394.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (Global_14394.f_1 == 9 || Global_14394.f_1 == 10)
	{
		Global_15746 = 0;
		Global_15742 = 1;
	}
}

