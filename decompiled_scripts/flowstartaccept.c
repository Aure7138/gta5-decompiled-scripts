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
	if (unk_0x78BF2001491914AC(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x5018862FF5D9F844()) && unk_0x0602C06A786F096F())
	{
		unk_0x6F0F1C5EEC77F84A(1);
		if (!unk_0xF4EE9D6C8E60AE22())
		{
			if (!unk_0xEF08C8E0C4679477())
			{
				unk_0x5BFE0E837BA0AF60(800);
			}
		}
		iLocal_20 = unk_0x4D6D22510A2467D9("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x4D6D22510A2467D9("INSTRUCTIONAL_BUTTONS");
		while (!unk_0xA8AF99BD8D81CFB7(iLocal_20) || !unk_0xA8AF99BD8D81CFB7(iLocal_21))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xD1FCC52F87A98873(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0x8123397DC676E794();
		unk_0xD1FCC52F87A98873(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0x8123397DC676E794();
		unk_0xD1FCC52F87A98873(iLocal_21, "SET_DATA_SLOT");
		unk_0x4CECF13AF144A8F6(0);
		func_4(unk_0xD1DCA39DE7949204(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0x8123397DC676E794();
		unk_0xD1FCC52F87A98873(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD426F7366505EADF(0);
		unk_0x8123397DC676E794();
		while (!unk_0xF4EE9D6C8E60AE22())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xF6EFB4715B198AED();
		while (!iLocal_22)
		{
			unk_0x50A7619242B023D2();
			unk_0xFF4C3B41848CE5CD(7);
			unk_0x792C5262A7BE057A(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x792C5262A7BE057A(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x83F6A1E4E653AD75(2, 201))
			{
				iLocal_22 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x6F0F1C5EEC77F84A(0);
		func_3(1, 1);
		func_1();
	}
	Global_70069.f_1 = 0;
	unk_0xF6082E2ADA1C795B(&(Global_103236.f_9797.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_91816.f_8)
	{
		if (Global_91816.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91816.f_10 > 1)
	{
		return 0;
	}
	Global_91816.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_91816.f_7 = iParam0;
	Global_91816.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x7B7BB0114231AF09(uParam0);
}

void func_5(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0x73F5E7B6BB964839(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0x73F5E7B6BB964839(&iLocal_21);
	}
	unk_0xFF4C3B41848CE5CD(4);
	unk_0x6F0F1C5EEC77F84A(0);
	unk_0xA232817B0B36F2E5();
}

