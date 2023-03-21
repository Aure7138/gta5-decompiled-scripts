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
	unk_0x11103F6657466FF8();
	if (iLocal_20 == 0)
	{
		func_11();
		func_10();
		iLocal_20 = 1;
		unk_0xC1B1E9A034A63A62(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14443.f_1 != 9)
		{
			switch (Global_14443.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && unk_0x83666F9FB8FEBD4B() > 1500)
					{
						func_6();
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_14411, 0))
					{
						func_4();
						Global_14421 = 1;
						if (Global_14443.f_1 > 3)
						{
							Global_14443.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_14445 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_14443.f_1 == 1 || Global_14443.f_1 == 3) || Global_14443.f_1 == 0) || Global_14387 == 1)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0xBEE2834559A8897A();
}

int func_3()
{
	if (Global_2919 == 1 || Global_14443.f_1 < 7)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
	{
		unk_0x18F1BFAF88AC511B(-1, "Menu_Back", &Global_14432, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0xD887E21676314450(iParam0, uParam1) || (iParam2 == 1 && unk_0x42F812C5F1AA300A(iParam0, uParam1)))
	{
		if (unk_0x20551D6D924ED04B())
		{
			if (unk_0xB74983234B4F06A7() == 0 || (unk_0xFCFC2645B6CF6425() && unk_0xFF512A008EA368FF(2)))
			{
				return 0;
			}
		}
		if (unk_0x957E53BB191CB24D() || unk_0x0CF4609684193305())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_6()
{
	func_7();
}

void func_7()
{
	func_9(Global_14424, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
	unk_0x32F9127910F63DFA(24);
	unk_0x32F9127910F63DFA(0);
	if (unk_0x2A3398C6222EB190(Global_2608142, 23))
	{
		unk_0xE8240315678FDE8E(0);
		func_8("CELL_EXTBYOU");
		unk_0x32F9127910F63DFA(Global_2608143);
		unk_0x32F9127910F63DFA(unk_0xF34EE736CF047844(Global_2608359));
		unk_0x32F9127910F63DFA(Global_2608144);
		unk_0x32F9127910F63DFA(unk_0xF34EE736CF047844(Global_2608359.f_1));
		unk_0x32F9127910F63DFA(Global_2608145);
		unk_0x32F9127910F63DFA(unk_0xF34EE736CF047844(Global_2608359.f_2));
		func_8("CELL_BODYG");
		unk_0x32F9127910F63DFA(Global_2608146);
		unk_0x32F9127910F63DFA(unk_0xF34EE736CF047844(Global_2608362));
		unk_0x32F9127910F63DFA(Global_2608147);
		unk_0x32F9127910F63DFA(unk_0xF34EE736CF047844(Global_2608362.f_1));
		unk_0x32F9127910F63DFA(Global_2608148);
		unk_0x32F9127910F63DFA(unk_0xF34EE736CF047844(Global_2608362.f_2));
	}
	else
	{
		unk_0xE8240315678FDE8E(0);
		func_8("CELL_EXTBYOU");
		unk_0x32F9127910F63DFA(Global_2608146);
		unk_0x32F9127910F63DFA(unk_0xF34EE736CF047844(Global_2608362));
		unk_0x32F9127910F63DFA(Global_2608147);
		unk_0x32F9127910F63DFA(unk_0xF34EE736CF047844(Global_2608362.f_1));
		unk_0x32F9127910F63DFA(Global_2608148);
		unk_0x32F9127910F63DFA(unk_0xF34EE736CF047844(Global_2608362.f_2));
		func_8("CELL_EXTBTARG");
		unk_0x32F9127910F63DFA(Global_2608143);
		unk_0x32F9127910F63DFA(unk_0xF34EE736CF047844(Global_2608359));
		unk_0x32F9127910F63DFA(Global_2608144);
		unk_0x32F9127910F63DFA(unk_0xF34EE736CF047844(Global_2608359.f_1));
		unk_0x32F9127910F63DFA(Global_2608145);
		unk_0x32F9127910F63DFA(unk_0xF34EE736CF047844(Global_2608359.f_2));
	}
	unk_0x1C703A54AB4B12F6();
	func_9(Global_14424, "DISPLAY_VIEW", 24f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x1C703A54AB4B12F6();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_14431)
	{
		func_12(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xD804ACF2A7171150(&Global_2313, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
	{
		func_8(sParam7);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(iParam11))
	{
		func_8(iParam11);
	}
	unk_0x1C703A54AB4B12F6();
}

