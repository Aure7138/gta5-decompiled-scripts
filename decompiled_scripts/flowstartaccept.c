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
	if (unk_0x8D841F1DD3FA555F(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x913B1C01C1BA6C6F()) && unk_0x5664F372C9A287C7())
	{
		unk_0xCFB703A5F752D1C3(1);
		if (!unk_0x29AFA2493D7C23D0())
		{
			if (!unk_0xC584A413BCB2AA39())
			{
				unk_0x3B283FEBA87FFBEB(800);
			}
		}
		iLocal_19 = unk_0x95EF972E3A07B525("MP_BIG_MESSAGE_FREEMODE");
		iLocal_20 = unk_0x95EF972E3A07B525("INSTRUCTIONAL_BUTTONS");
		while (!unk_0xCC8E3BAC62A29F42(iLocal_19) || !unk_0xCC8E3BAC62A29F42(iLocal_20))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x21ED0FC9B5CC748B(iLocal_19, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xBA9BA6181F2B6111();
		unk_0x21ED0FC9B5CC748B(iLocal_20, "SET_DATA_SLOT_EMPTY");
		unk_0xBA9BA6181F2B6111();
		unk_0x21ED0FC9B5CC748B(iLocal_20, "SET_DATA_SLOT");
		unk_0xBD0C54D89298454E(0);
		func_4(unk_0x2576ED87DB06844F(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0xBA9BA6181F2B6111();
		unk_0x21ED0FC9B5CC748B(iLocal_20, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x75A2A42ADE12FD0E(0);
		unk_0xBA9BA6181F2B6111();
		while (!unk_0x29AFA2493D7C23D0())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x54E623E745567FEC();
		while (!iLocal_21)
		{
			unk_0x92260590AAFDE170();
			unk_0x7F3AA121397DEEC9(7);
			unk_0x88188CE25DF2572C(iLocal_19, 255, 255, 255, 0, 0);
			unk_0x88188CE25DF2572C(iLocal_20, 255, 255, 255, 0, 0);
			if (unk_0xCAD9951C953F5B2D(2, 201))
			{
				iLocal_21 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xCFB703A5F752D1C3(0);
		func_3(1, 1);
		func_1();
	}
	Global_69289.f_1 = 0;
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8630.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_90848.f_7 = iParam0;
	Global_90848.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x1F704997074F9C16(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

void func_6()
{
	if (iLocal_19 != 0)
	{
		unk_0x4B6F01DE8CCE643E(&iLocal_19);
	}
	if (iLocal_20 != 0)
	{
		unk_0x4B6F01DE8CCE643E(&iLocal_20);
	}
	unk_0x7F3AA121397DEEC9(4);
	unk_0xCFB703A5F752D1C3(0);
	unk_0xC23A229F78DAD92A();
}

