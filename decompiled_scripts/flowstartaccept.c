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
	if (unk_0x524AF15206846700(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0xDFCB321F1D24137F()) && unk_0xFCB0620889504FA8())
	{
		unk_0x334FD925982DE56B(1);
		if (!unk_0x3934E959DB2478D3())
		{
			if (!unk_0xA07829C3F763B9B6())
			{
				unk_0x4E63F662FDE672C3(800);
			}
		}
		iLocal_20 = unk_0x9A64FC8B83855E3B("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x9A64FC8B83855E3B("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x4C3CEC038B6637D7(iLocal_20) || !unk_0x4C3CEC038B6637D7(iLocal_21))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x8CED8F78CC31BEF2(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0x7E5FA681CB7A2EF7();
		unk_0x8CED8F78CC31BEF2(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0x7E5FA681CB7A2EF7();
		unk_0x8CED8F78CC31BEF2(iLocal_21, "SET_DATA_SLOT");
		unk_0xD2DC8221939F80F7(0);
		func_4(unk_0x2549EF0239E06207(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0x7E5FA681CB7A2EF7();
		unk_0x8CED8F78CC31BEF2(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x6A784D1EF2D72A23(0);
		unk_0x7E5FA681CB7A2EF7();
		while (!unk_0x3934E959DB2478D3())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x1A08C212D91EA8DE();
		while (!iLocal_22)
		{
			unk_0x5CFE7BBCC87B1CDC();
			unk_0x5F817444B4379247(7);
			unk_0x6201690B328DD500(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x6201690B328DD500(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x5FCAE3F8AEC656AF(2, 201))
			{
				iLocal_22 = 1;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x334FD925982DE56B(0);
		func_3(1, 1);
		func_1();
	}
	Global_69758.f_1 = 0;
	unk_0x26545538B51562AD(&(Global_101154.f_8706.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return 0;
	}
	Global_91317.f_10++;
	return 1;
}

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0xD32535FA4397160F(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_69737, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_91317.f_7 = iParam0;
	Global_91317.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x238A63F9EFBCDF35(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x37B602106C6E0E91(sParam0);
	unk_0xD3076D52458B36EF();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0xBBDCA990E9FC1AE1(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0xBBDCA990E9FC1AE1(&iLocal_21);
	}
	unk_0x5F817444B4379247(4);
	unk_0x334FD925982DE56B(0);
	unk_0x7C3AA2D27E16E2AD();
}

