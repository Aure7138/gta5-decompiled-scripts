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
	if (unk_0x9CEB376419A71A96(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x55812CD5A331E1F8()) && unk_0x53CBEB12458F9A38())
	{
		unk_0x5C79CA2A987CA637(1);
		if (!unk_0x4FF34B5B023875E1())
		{
			if (!unk_0x58CFBE8B8644D59B())
			{
				unk_0xEBA0934AA600C515(800);
			}
		}
		iLocal_20 = unk_0xDDEDAA5105426019("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0xDDEDAA5105426019("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x6A87921801178186(iLocal_20) || !unk_0x6A87921801178186(iLocal_21))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x2B859AD680983623(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xE97F1B22C5E8989F();
		unk_0x2B859AD680983623(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0xE97F1B22C5E8989F();
		unk_0x2B859AD680983623(iLocal_21, "SET_DATA_SLOT");
		unk_0x7AF283DA3BA078CD(0);
		func_4(unk_0xB1C8DCF6DB548BFD(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0xE97F1B22C5E8989F();
		unk_0x2B859AD680983623(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x504EDFAAB39BF764(0);
		unk_0xE97F1B22C5E8989F();
		while (!unk_0x4FF34B5B023875E1())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xA87B9FBA01B5587D();
		while (!iLocal_22)
		{
			unk_0x5C7168C568F21A9E();
			unk_0xA53AA6798EF8BAB3(7);
			unk_0xA5C0BA1772140603(iLocal_20, 255, 255, 255, 0, 0);
			unk_0xA5C0BA1772140603(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0xE9F7E89BC2352535(2, 201))
			{
				iLocal_22 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x5C79CA2A987CA637(0);
		func_3(1, 1);
		func_1();
	}
	Global_69790.f_1 = 0;
	unk_0xE27C8E42A97895CF(&(Global_101186.f_8782.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_91349.f_8)
	{
		if (Global_91349.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91349.f_10 > 1)
	{
		return 0;
	}
	Global_91349.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0x98934607F8D0FB03(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_69769, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_91349.f_7 = iParam0;
	Global_91349.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x8C64B9C850F2EFB2(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x7291E2F821FCFC04(sParam0);
	unk_0xD6360E18957BCDD3();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0x0E4537BE1D04DAC7(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0x0E4537BE1D04DAC7(&iLocal_21);
	}
	unk_0xA53AA6798EF8BAB3(4);
	unk_0x5C79CA2A987CA637(0);
	unk_0xF5DF8F3392CDD07B();
}

