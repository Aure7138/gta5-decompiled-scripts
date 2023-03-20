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
	if (unk_0xD5DFCA69ACAA20E3())
	{
		unk_0x31E6EB2040318451(500);
	}
	if (unk_0x24862A9CDC8F8874(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x31DC2CEFEF13C96D("graphic_design");
	while (!unk_0xF518F3C7FACD43B7(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x06D856499865F31F(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14392 == 0)
	{
		if (((((((unk_0x0139E142C27412BC(2, 189) || unk_0x0139E142C27412BC(2, 190)) || unk_0x0139E142C27412BC(2, 188)) || unk_0x0139E142C27412BC(2, 187)) || unk_0x0139E142C27412BC(2, 205)) || unk_0x0139E142C27412BC(2, 206)) || unk_0x0139E142C27412BC(2, 201)) || unk_0x0139E142C27412BC(2, 202))
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
		if (unk_0x0139E142C27412BC(2, 189))
		{
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(10);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x0139E142C27412BC(2, 190))
		{
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(11);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x0139E142C27412BC(2, 205))
		{
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(4);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x0139E142C27412BC(2, 206))
		{
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(6);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x0139E142C27412BC(2, 188))
		{
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(8);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x0139E142C27412BC(2, 187))
		{
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(9);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x0139E142C27412BC(2, 201))
		{
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(16);
			unk_0xD013AC29829DDC02();
		}
		if (unk_0x0139E142C27412BC(2, 202))
		{
			unk_0x7C38F93AF52620B1(uParam0, "SET_INPUT_EVENT");
			unk_0x65960B4E2ADC9F6D(17);
			unk_0xD013AC29829DDC02();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0x6F9EF355924EC498(0);
	unk_0xEF145906684E3D72(&uLocal_18);
	unk_0xA4E0D8FD51F2A6F7();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x59A0729D503ED758(&Global_2284, 16);
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
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
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
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
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

