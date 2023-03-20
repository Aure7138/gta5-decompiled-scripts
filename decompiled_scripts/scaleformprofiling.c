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
	if (unk_0xAEF17BDE274A1247())
	{
		unk_0x2D3BB3EF936C4B76(500);
	}
	if (unk_0x89522B8E487D4EF9(3))
	{
		func_2();
	}
	uLocal_18 = unk_0xE3C796DC28BC3254("scaleform_profiling");
	while (!unk_0x4A4851D44CDF03C0(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0xAF5B7C9C0A5116E9(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14392 == 0)
	{
		if (((((((unk_0x6BBF308E0A0F9AD4(2, 189) || unk_0x6BBF308E0A0F9AD4(2, 190)) || unk_0x6BBF308E0A0F9AD4(2, 188)) || unk_0x6BBF308E0A0F9AD4(2, 187)) || unk_0x6BBF308E0A0F9AD4(2, 205)) || unk_0x6BBF308E0A0F9AD4(2, 206)) || unk_0x6BBF308E0A0F9AD4(2, 201)) || unk_0x6BBF308E0A0F9AD4(2, 202))
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
		if (unk_0x6BBF308E0A0F9AD4(2, 189))
		{
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(10);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 190))
		{
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(11);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 205))
		{
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(4);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 206))
		{
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(6);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 188))
		{
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(8);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 187))
		{
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(9);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 201))
		{
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(16);
			unk_0xFF141057ED7B4C73();
		}
		if (unk_0x6BBF308E0A0F9AD4(2, 202))
		{
			unk_0xA4F3B84032D46C13(uParam0, "SET_INPUT_EVENT");
			unk_0x43C93E686A1E92C5(17);
			unk_0xFF141057ED7B4C73();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0x307133C47B1565B0(0);
	unk_0x8A86A209B0F0AF7D(&uLocal_18);
	unk_0x52F20802944F8DCE();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
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
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
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
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
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

