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
	if (unk_0x7547D7CF93115D6D(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x80AD636AD4184F2B()) && unk_0x8969EF94F09C8981())
	{
		unk_0x8311E913E07031CD(1);
		if (!unk_0xC2C705ED6124A7C2())
		{
			if (!unk_0xF468278E75CA2341())
			{
				unk_0x7C69A4879766A867(800);
			}
		}
		iLocal_19 = unk_0xAFBDE0BB5C885026("MP_BIG_MESSAGE_FREEMODE");
		iLocal_20 = unk_0xAFBDE0BB5C885026("INSTRUCTIONAL_BUTTONS");
		while (!unk_0xE908465F9CDF4F1A(iLocal_19) || !unk_0xE908465F9CDF4F1A(iLocal_20))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xF48C88BD1F0007E8(iLocal_19, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0xA52FC2467E672B55();
		unk_0xF48C88BD1F0007E8(iLocal_20, "SET_DATA_SLOT_EMPTY");
		unk_0xA52FC2467E672B55();
		unk_0xF48C88BD1F0007E8(iLocal_20, "SET_DATA_SLOT");
		unk_0x876C5D0739031E15(0);
		func_4(unk_0xB588E50C18B98D3F(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0xA52FC2467E672B55();
		unk_0xF48C88BD1F0007E8(iLocal_20, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x5D559A5DDC88A4EF(0);
		unk_0xA52FC2467E672B55();
		while (!unk_0xC2C705ED6124A7C2())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x49BF644F14C1491D();
		while (!iLocal_21)
		{
			unk_0xB9127039E1155CEF();
			unk_0x070F78D7490C1013(7);
			unk_0x4A383EC377D451D0(iLocal_19, 255, 255, 255, 0, 0);
			unk_0x4A383EC377D451D0(iLocal_20, 255, 255, 255, 0, 0);
			if (unk_0xBD883E84B4B6E14E(2, 201))
			{
				iLocal_21 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x8311E913E07031CD(0);
		func_3(1, 1);
		func_1();
	}
	Global_68336.f_1 = 0;
	unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8237.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_89823.f_7 = iParam0;
	Global_89823.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x3F8884039D21AA69(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x44F4D219F8513945(sParam0);
	unk_0x113A6F657EE871A3();
}

void func_6()
{
	if (iLocal_19 != 0)
	{
		unk_0x86FF04BBB2EC839F(&iLocal_19);
	}
	if (iLocal_20 != 0)
	{
		unk_0x86FF04BBB2EC839F(&iLocal_20);
	}
	unk_0x070F78D7490C1013(4);
	unk_0x8311E913E07031CD(0);
	unk_0x883793591E631A3B();
}

