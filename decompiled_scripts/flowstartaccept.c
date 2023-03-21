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
	if (unk_0xB9B05E900D325C36(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x20551D6D924ED04B()) && unk_0x293847BB0573FB1D())
	{
		unk_0xCF304E352457AD63(1);
		if (!unk_0x5114FCEE2A997B95())
		{
			if (!unk_0x229840854A80E0D9())
			{
				unk_0x8351F65655759E0C(800);
			}
		}
		iLocal_20 = unk_0xB1E69EFAB6CB45A3("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0xB1E69EFAB6CB45A3("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x77FA56883245AD26(iLocal_20) || !unk_0x77FA56883245AD26(iLocal_21))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xEBD23F68B1A617FC(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0x1C703A54AB4B12F6();
		unk_0xEBD23F68B1A617FC(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0x1C703A54AB4B12F6();
		unk_0xEBD23F68B1A617FC(iLocal_21, "SET_DATA_SLOT");
		unk_0x32F9127910F63DFA(0);
		func_4(unk_0xE344F89A3A395F9C(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0x1C703A54AB4B12F6();
		unk_0xEBD23F68B1A617FC(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xE8240315678FDE8E(0);
		unk_0x1C703A54AB4B12F6();
		while (!unk_0x5114FCEE2A997B95())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xA5142A28333D9ABE();
		while (!iLocal_22)
		{
			unk_0x2745EC8E79BD57E0();
			unk_0x38C75B31337B3454(7);
			unk_0x4237E72FB80FD332(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x4237E72FB80FD332(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x9148803485DEDF45(2, 201))
			{
				iLocal_22 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xCF304E352457AD63(0);
		func_3(1, 1);
		func_1();
	}
	Global_71054.f_1 = 0;
	unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_9877.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_92801.f_8)
	{
		if (Global_92801.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92801.f_10 > 1)
	{
		return 0;
	}
	Global_92801.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_92801.f_7 = iParam0;
	Global_92801.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x8E394933209D820A(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0x7F165E259CFAC8B8(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0x7F165E259CFAC8B8(&iLocal_21);
	}
	unk_0x38C75B31337B3454(4);
	unk_0xCF304E352457AD63(0);
	unk_0xBEE2834559A8897A();
}

