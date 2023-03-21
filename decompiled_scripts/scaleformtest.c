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
	if (unk_0x5114FCEE2A997B95())
	{
		unk_0x18D7C8000EDEAAB4(500);
	}
	if (unk_0xB9B05E900D325C36(3))
	{
		func_5();
	}
	uLocal_19 = unk_0xB1E69EFAB6CB45A3("instructional_buttons");
	while (!unk_0x77FA56883245AD26(uLocal_19))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4237E72FB80FD332(uLocal_19, 255, 255, 255, 0, 0);
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
			unk_0xEBD23F68B1A617FC(uParam1, "CLEAR_ALL");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_CLEAR_SPACE");
			unk_0x32F9127910F63DFA(200);
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_DATA_SLOT");
			unk_0x32F9127910F63DFA(0);
			func_3(unk_0xE344F89A3A395F9C(2, 191, 1));
			func_2("PRESS A");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_DATA_SLOT");
			unk_0x32F9127910F63DFA(1);
			func_3(unk_0xE344F89A3A395F9C(2, 194, 1));
			func_2("PRESS B");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_DATA_SLOT");
			unk_0x32F9127910F63DFA(2);
			func_3(unk_0xE344F89A3A395F9C(2, 193, 1));
			func_2("PRESS X");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_DATA_SLOT");
			unk_0x32F9127910F63DFA(3);
			func_3(unk_0xE344F89A3A395F9C(2, 192, 1));
			func_2("PRESS Y");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(80);
			unk_0x1C703A54AB4B12F6();
			iLocal_18 = -1;
			break;
		
		case 1:
			unk_0xEBD23F68B1A617FC(uParam1, "CLEAR_ALL");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_CLEAR_SPACE");
			unk_0x32F9127910F63DFA(200);
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_DATA_SLOT");
			unk_0x32F9127910F63DFA(0);
			func_3(unk_0xE344F89A3A395F9C(2, 187, 1));
			func_2("DOWN");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_DATA_SLOT");
			unk_0x32F9127910F63DFA(1);
			func_3(unk_0xE344F89A3A395F9C(2, 188, 1));
			func_2("UP");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_DATA_SLOT");
			unk_0x32F9127910F63DFA(2);
			func_3(unk_0xE344F89A3A395F9C(2, 190, 1));
			func_2("LEFT");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_DATA_SLOT");
			unk_0x32F9127910F63DFA(3);
			func_3(unk_0xE344F89A3A395F9C(2, 189, 1));
			func_2("RIGHT");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(80);
			unk_0x1C703A54AB4B12F6();
			iLocal_18 = -1;
			break;
		
		case 2:
			unk_0xEBD23F68B1A617FC(uParam1, "CLEAR_ALL");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_CLEAR_SPACE");
			unk_0x32F9127910F63DFA(200);
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_DATA_SLOT");
			unk_0x32F9127910F63DFA(0);
			func_3(unk_0xE344F89A3A395F9C(2, 202, 1));
			func_2("BACK");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x1C703A54AB4B12F6();
			unk_0xEBD23F68B1A617FC(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(0);
			unk_0x32F9127910F63DFA(80);
			unk_0x1C703A54AB4B12F6();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
}

void func_3(var uParam0)
{
	unk_0x8E394933209D820A(uParam0);
}

void func_4()
{
	if (Global_14422 == 0)
	{
		if (((((((((unk_0x9148803485DEDF45(2, 189) || unk_0x9148803485DEDF45(2, 190)) || unk_0x9148803485DEDF45(2, 188)) || unk_0x9148803485DEDF45(2, 187)) || unk_0x9148803485DEDF45(2, 205)) || unk_0x9148803485DEDF45(2, 206)) || unk_0x9148803485DEDF45(2, 207)) || unk_0x9148803485DEDF45(2, 208)) || unk_0x9148803485DEDF45(2, 201)) || unk_0x9148803485DEDF45(2, 202))
		{
			Global_14422 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 50)
	{
		Global_14422 = 0;
	}
	if (Global_14422 == 0)
	{
		if (unk_0x9148803485DEDF45(2, 217))
		{
			iLocal_18 = 1;
		}
		if (unk_0x9148803485DEDF45(2, 189))
		{
			iLocal_18 = 2;
		}
		if (unk_0x9148803485DEDF45(2, 190))
		{
			iLocal_18 = 2;
		}
		if (unk_0x9148803485DEDF45(2, 205))
		{
		}
		if (unk_0x9148803485DEDF45(2, 206))
		{
		}
		if (unk_0x9148803485DEDF45(2, 207))
		{
		}
		if (unk_0x9148803485DEDF45(2, 208))
		{
		}
		if (unk_0x9148803485DEDF45(2, 188))
		{
			iLocal_18 = 2;
		}
		if (unk_0x9148803485DEDF45(2, 187))
		{
			iLocal_18 = 2;
		}
		if (unk_0x9148803485DEDF45(2, 201))
		{
			iLocal_18 = 1;
		}
		if (unk_0x9148803485DEDF45(2, 202))
		{
			iLocal_18 = 0;
		}
		if (unk_0x9148803485DEDF45(2, 203))
		{
			iLocal_18 = 1;
		}
		if (unk_0x9148803485DEDF45(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0x5BF9AA7BD6376F82(0);
	unk_0x7F165E259CFAC8B8(&uLocal_19);
	unk_0xBEE2834559A8897A();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_11();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_10(0))
		{
			func_7(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_7(int iParam0)
{
	if (Global_14604)
	{
		func_9(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
	}
	if (unk_0xCAD6D8C85D0F329B())
	{
		unk_0x683F0CB6CA4C99D0(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 30);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 30);
	}
	if (!func_8())
	{
		Global_14443.f_1 = 3;
	}
}

int func_8()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
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
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EBACDA5E9A0E784(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x99C19CAA37B6F6D3(Global_14380);
		}
		else
		{
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
}

int func_10(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
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
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

