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
	if (unk_0x4FF34B5B023875E1())
	{
		unk_0x8EA2EEF67922F899(500);
	}
	if (unk_0x9CEB376419A71A96(3))
	{
		func_2();
	}
	uLocal_18 = unk_0xDDEDAA5105426019("scaleform_profiling");
	while (!unk_0x6A87921801178186(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x85DC3CB6F30C7FE7(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14392 == 0)
	{
		if (((((((unk_0xE9F7E89BC2352535(2, 189) || unk_0xE9F7E89BC2352535(2, 190)) || unk_0xE9F7E89BC2352535(2, 188)) || unk_0xE9F7E89BC2352535(2, 187)) || unk_0xE9F7E89BC2352535(2, 205)) || unk_0xE9F7E89BC2352535(2, 206)) || unk_0xE9F7E89BC2352535(2, 201)) || unk_0xE9F7E89BC2352535(2, 202))
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
		if (unk_0xE9F7E89BC2352535(2, 189))
		{
			unk_0x2B859AD680983623(uParam0, "SET_INPUT_EVENT");
			unk_0x7AF283DA3BA078CD(10);
			unk_0xE97F1B22C5E8989F();
		}
		if (unk_0xE9F7E89BC2352535(2, 190))
		{
			unk_0x2B859AD680983623(uParam0, "SET_INPUT_EVENT");
			unk_0x7AF283DA3BA078CD(11);
			unk_0xE97F1B22C5E8989F();
		}
		if (unk_0xE9F7E89BC2352535(2, 205))
		{
			unk_0x2B859AD680983623(uParam0, "SET_INPUT_EVENT");
			unk_0x7AF283DA3BA078CD(4);
			unk_0xE97F1B22C5E8989F();
		}
		if (unk_0xE9F7E89BC2352535(2, 206))
		{
			unk_0x2B859AD680983623(uParam0, "SET_INPUT_EVENT");
			unk_0x7AF283DA3BA078CD(6);
			unk_0xE97F1B22C5E8989F();
		}
		if (unk_0xE9F7E89BC2352535(2, 188))
		{
			unk_0x2B859AD680983623(uParam0, "SET_INPUT_EVENT");
			unk_0x7AF283DA3BA078CD(8);
			unk_0xE97F1B22C5E8989F();
		}
		if (unk_0xE9F7E89BC2352535(2, 187))
		{
			unk_0x2B859AD680983623(uParam0, "SET_INPUT_EVENT");
			unk_0x7AF283DA3BA078CD(9);
			unk_0xE97F1B22C5E8989F();
		}
		if (unk_0xE9F7E89BC2352535(2, 201))
		{
			unk_0x2B859AD680983623(uParam0, "SET_INPUT_EVENT");
			unk_0x7AF283DA3BA078CD(16);
			unk_0xE97F1B22C5E8989F();
		}
		if (unk_0xE9F7E89BC2352535(2, 202))
		{
			unk_0x2B859AD680983623(uParam0, "SET_INPUT_EVENT");
			unk_0x7AF283DA3BA078CD(17);
			unk_0xE97F1B22C5E8989F();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0x7A2BC6210CE2767E(0);
	unk_0x0E4537BE1D04DAC7(&uLocal_18);
	unk_0xF5DF8F3392CDD07B();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0xE27C8E42A97895CF(&Global_2284, 16);
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
		unk_0xE27C8E42A97895CF(&Global_2284, 16);
	}
	if (unk_0x1FB728BC68674B71())
	{
		unk_0xC48487554D051523(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 30);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 30);
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
				unk_0x3919EC2F8BB0A522(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x362168BE71696AF1(Global_14350);
		}
		else
		{
			unk_0x362168BE71696AF1(Global_14341);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x7DA173D4FD42F36B(Global_2283, 14))
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
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
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

