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
	if (unk_0x17FAADF9916EF741())
	{
		unk_0x829FA4611BD56B44(500);
	}
	if (unk_0xE8A79675302ED812(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x9934FEFB3B8C6DB8("scaleform_profiling");
	while (!unk_0xA7F138B5B1AB2CF6(uLocal_18))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x65E432C782E7E702(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	if (Global_14472 == 0)
	{
		if (((((((unk_0x8FCEEB789599BD9B(2, 189) || unk_0x8FCEEB789599BD9B(2, 190)) || unk_0x8FCEEB789599BD9B(2, 188)) || unk_0x8FCEEB789599BD9B(2, 187)) || unk_0x8FCEEB789599BD9B(2, 205)) || unk_0x8FCEEB789599BD9B(2, 206)) || unk_0x8FCEEB789599BD9B(2, 201)) || unk_0x8FCEEB789599BD9B(2, 202))
		{
			Global_14472 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14472 = 0;
	}
	if (Global_14472 == 0)
	{
		if (unk_0x8FCEEB789599BD9B(2, 189))
		{
			unk_0x29CD142125FE177B(uParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(10);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x8FCEEB789599BD9B(2, 190))
		{
			unk_0x29CD142125FE177B(uParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(11);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x8FCEEB789599BD9B(2, 205))
		{
			unk_0x29CD142125FE177B(uParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(4);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x8FCEEB789599BD9B(2, 206))
		{
			unk_0x29CD142125FE177B(uParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(6);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x8FCEEB789599BD9B(2, 188))
		{
			unk_0x29CD142125FE177B(uParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(8);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x8FCEEB789599BD9B(2, 187))
		{
			unk_0x29CD142125FE177B(uParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(9);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x8FCEEB789599BD9B(2, 201))
		{
			unk_0x29CD142125FE177B(uParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(16);
			unk_0xF9FBC2F3F73D94C9();
		}
		if (unk_0x8FCEEB789599BD9B(2, 202))
		{
			unk_0x29CD142125FE177B(uParam0, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(17);
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0x121BBDEFA4F0C22B(0);
	unk_0xB0B0FE33F4F22679(&uLocal_18);
	unk_0x95E4B6F3ED223F5A();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_8();
		if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_2364, 16);
		}
		Global_14493.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_14493.f_1 == 1)
	{
		if (!Global_14493.f_1 == 0)
		{
			Global_14493.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (Global_14659)
	{
		func_6(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(0);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 30);
	}
	if (!func_5())
	{
		Global_14493.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
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
			Global_14659 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_14430);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (Global_14493.f_1 == 9 || Global_14493.f_1 == 10)
	{
		Global_15853 = 0;
		Global_15849 = 1;
	}
}

