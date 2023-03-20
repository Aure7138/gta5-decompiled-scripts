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
	if (unk_0x3934E959DB2478D3())
	{
		unk_0x4AD174B0D4656163(500);
	}
	if (unk_0x524AF15206846700(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x9A64FC8B83855E3B("scaleform_profiling");
	while (!unk_0x4C3CEC038B6637D7(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0xFF51FA5E68E9F7D4(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14392 == 0)
	{
		if (((((((unk_0x5FCAE3F8AEC656AF(2, 189) || unk_0x5FCAE3F8AEC656AF(2, 190)) || unk_0x5FCAE3F8AEC656AF(2, 188)) || unk_0x5FCAE3F8AEC656AF(2, 187)) || unk_0x5FCAE3F8AEC656AF(2, 205)) || unk_0x5FCAE3F8AEC656AF(2, 206)) || unk_0x5FCAE3F8AEC656AF(2, 201)) || unk_0x5FCAE3F8AEC656AF(2, 202))
		{
			Global_14392 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14392 = 0;
	}
	if (Global_14392 == 0)
	{
		if (unk_0x5FCAE3F8AEC656AF(2, 189))
		{
			unk_0x8CED8F78CC31BEF2(uParam0, "SET_INPUT_EVENT");
			unk_0xD2DC8221939F80F7(10);
			unk_0x7E5FA681CB7A2EF7();
		}
		if (unk_0x5FCAE3F8AEC656AF(2, 190))
		{
			unk_0x8CED8F78CC31BEF2(uParam0, "SET_INPUT_EVENT");
			unk_0xD2DC8221939F80F7(11);
			unk_0x7E5FA681CB7A2EF7();
		}
		if (unk_0x5FCAE3F8AEC656AF(2, 205))
		{
			unk_0x8CED8F78CC31BEF2(uParam0, "SET_INPUT_EVENT");
			unk_0xD2DC8221939F80F7(4);
			unk_0x7E5FA681CB7A2EF7();
		}
		if (unk_0x5FCAE3F8AEC656AF(2, 206))
		{
			unk_0x8CED8F78CC31BEF2(uParam0, "SET_INPUT_EVENT");
			unk_0xD2DC8221939F80F7(6);
			unk_0x7E5FA681CB7A2EF7();
		}
		if (unk_0x5FCAE3F8AEC656AF(2, 188))
		{
			unk_0x8CED8F78CC31BEF2(uParam0, "SET_INPUT_EVENT");
			unk_0xD2DC8221939F80F7(8);
			unk_0x7E5FA681CB7A2EF7();
		}
		if (unk_0x5FCAE3F8AEC656AF(2, 187))
		{
			unk_0x8CED8F78CC31BEF2(uParam0, "SET_INPUT_EVENT");
			unk_0xD2DC8221939F80F7(9);
			unk_0x7E5FA681CB7A2EF7();
		}
		if (unk_0x5FCAE3F8AEC656AF(2, 201))
		{
			unk_0x8CED8F78CC31BEF2(uParam0, "SET_INPUT_EVENT");
			unk_0xD2DC8221939F80F7(16);
			unk_0x7E5FA681CB7A2EF7();
		}
		if (unk_0x5FCAE3F8AEC656AF(2, 202))
		{
			unk_0x8CED8F78CC31BEF2(uParam0, "SET_INPUT_EVENT");
			unk_0xD2DC8221939F80F7(17);
			unk_0x7E5FA681CB7A2EF7();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0x42B9806B3EED4C70(0);
	unk_0xBBDCA990E9FC1AE1(&uLocal_18);
	unk_0x7C3AA2D27E16E2AD();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x26545538B51562AD(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14571)
	{
		func_6(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x26545538B51562AD(&Global_2284, 16);
	}
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		unk_0x94DA6AACA7F07289(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 30);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 30);
	}
	if (!func_5())
	{
		Global_14413.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
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
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x38AAAA167C55B731(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xF10089C8CCEFDB7A(Global_14350);
		}
		else
		{
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 14))
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
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

