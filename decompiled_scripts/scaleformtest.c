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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
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
		func_5();
	}
	uLocal_19 = unk_0x9934FEFB3B8C6DB8("instructional_buttons");
	while (!unk_0xA7F138B5B1AB2CF6(uLocal_19))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4B6031094354FED6(uLocal_19, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_18, uLocal_19);
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x29CD142125FE177B(uParam1, "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_CLEAR_SPACE");
			unk_0x1E1FB49121565EB6(200);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(0);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 191, 1));
			func_2("PRESS A");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(1);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 194, 1));
			func_2("PRESS B");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(2);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 193, 1));
			func_2("PRESS X");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(3);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 192, 1));
			func_2("PRESS Y");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(80);
			unk_0xF9FBC2F3F73D94C9();
			iLocal_18 = -1;
			break;
		
		case 1:
			unk_0x29CD142125FE177B(uParam1, "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_CLEAR_SPACE");
			unk_0x1E1FB49121565EB6(200);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(0);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 187, 1));
			func_2("DOWN");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(1);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 188, 1));
			func_2("UP");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(2);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 190, 1));
			func_2("LEFT");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(3);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 189, 1));
			func_2("RIGHT");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(80);
			unk_0xF9FBC2F3F73D94C9();
			iLocal_18 = -1;
			break;
		
		case 2:
			unk_0x29CD142125FE177B(uParam1, "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_CLEAR_SPACE");
			unk_0x1E1FB49121565EB6(200);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(0);
			func_3(unk_0xE57EAD1FEA2A6FAF(2, 202, 1));
			func_2("BACK");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(80);
			unk_0xF9FBC2F3F73D94C9();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_3(var uParam0)
{
	unk_0xCB30200B8055CA57(uParam0);
}

void func_4()
{
	if (Global_14472 == 0)
	{
		if (((((((((unk_0x8FCEEB789599BD9B(2, 189) || unk_0x8FCEEB789599BD9B(2, 190)) || unk_0x8FCEEB789599BD9B(2, 188)) || unk_0x8FCEEB789599BD9B(2, 187)) || unk_0x8FCEEB789599BD9B(2, 205)) || unk_0x8FCEEB789599BD9B(2, 206)) || unk_0x8FCEEB789599BD9B(2, 207)) || unk_0x8FCEEB789599BD9B(2, 208)) || unk_0x8FCEEB789599BD9B(2, 201)) || unk_0x8FCEEB789599BD9B(2, 202))
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
		if (unk_0x8FCEEB789599BD9B(2, 217))
		{
			iLocal_18 = 1;
		}
		if (unk_0x8FCEEB789599BD9B(2, 189))
		{
			iLocal_18 = 2;
		}
		if (unk_0x8FCEEB789599BD9B(2, 190))
		{
			iLocal_18 = 2;
		}
		if (unk_0x8FCEEB789599BD9B(2, 205))
		{
		}
		if (unk_0x8FCEEB789599BD9B(2, 206))
		{
		}
		if (unk_0x8FCEEB789599BD9B(2, 207))
		{
		}
		if (unk_0x8FCEEB789599BD9B(2, 208))
		{
		}
		if (unk_0x8FCEEB789599BD9B(2, 188))
		{
			iLocal_18 = 2;
		}
		if (unk_0x8FCEEB789599BD9B(2, 187))
		{
			iLocal_18 = 2;
		}
		if (unk_0x8FCEEB789599BD9B(2, 201))
		{
			iLocal_18 = 1;
		}
		if (unk_0x8FCEEB789599BD9B(2, 202))
		{
			iLocal_18 = 0;
		}
		if (unk_0x8FCEEB789599BD9B(2, 203))
		{
			iLocal_18 = 1;
		}
		if (unk_0x8FCEEB789599BD9B(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0x121BBDEFA4F0C22B(0);
	unk_0xB0B0FE33F4F22679(&uLocal_19);
	unk_0x95E4B6F3ED223F5A();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_11();
		if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_2364, 16);
		}
		Global_14493.f_1 = 1;
		if (func_10(0))
		{
			func_7(0);
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

void func_7(int iParam0)
{
	if (Global_14659)
	{
		func_9(0, 0);
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
	if (!func_8())
	{
		Global_14493.f_1 = 3;
	}
}

int func_8()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
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

int func_10(int iParam0)
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

void func_11()
{
	if (Global_14493.f_1 == 9 || Global_14493.f_1 == 10)
	{
		Global_15853 = 0;
		Global_15849 = 1;
	}
}

