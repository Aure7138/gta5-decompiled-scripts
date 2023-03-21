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
	if (unk_0xBCA819F9975BEDFA(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0xEF4E5E47AF0D4480()) && unk_0x8DC7318AEB3586A1())
	{
		unk_0x97225621CA125FF2(1);
		if (!unk_0x25BD4C26D84038CD())
		{
			if (!unk_0x46EEE08565CE19CA())
			{
				unk_0x50FD1894558DE186(800);
			}
		}
		iLocal_20 = unk_0xB50E108F09B8EC7A("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0xB50E108F09B8EC7A("INSTRUCTIONAL_BUTTONS");
		while (!unk_0xFF84A94166FBB351(iLocal_20) || !unk_0xFF84A94166FBB351(iLocal_21))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xEAC9A8A194DF8F91(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0x44983883E630A945();
		unk_0xEAC9A8A194DF8F91(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0x44983883E630A945();
		unk_0xEAC9A8A194DF8F91(iLocal_21, "SET_DATA_SLOT");
		unk_0xDF18CF55301CEB8B(0);
		func_4(unk_0x38DDA814F2E19659(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0x44983883E630A945();
		unk_0xEAC9A8A194DF8F91(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x14ED5B5B8289F2FC(0);
		unk_0x44983883E630A945();
		while (!unk_0x25BD4C26D84038CD())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC2EF7C4685DEE308();
		while (!iLocal_22)
		{
			unk_0x406D7A3B92830257();
			unk_0x4ED9ECF3735CB826(7);
			unk_0x90101FEE397F4A7E(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x90101FEE397F4A7E(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x79888727131C6854(2, 201))
			{
				iLocal_22 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x97225621CA125FF2(0);
		func_3(1, 1);
		func_1();
	}
	Global_69971.f_1 = 0;
	unk_0xEB79FECD9022AAF0(&(Global_101700.f_8975.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_91530.f_8)
	{
		if (Global_91530.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1)
	{
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_91530.f_7 = iParam0;
	Global_91530.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x0A7B7FF9E4F6CAA7(uParam0);
}

void func_5(char* sParam0)
{
	unk_0xDCEB60B79ECB219E(sParam0);
	unk_0x1798EBF9408190D3();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0x33CBABDFE7B17924(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0x33CBABDFE7B17924(&iLocal_21);
	}
	unk_0x4ED9ECF3735CB826(4);
	unk_0x97225621CA125FF2(0);
	unk_0x921053BAF754303D();
}

