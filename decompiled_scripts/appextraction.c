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
	unk_0x6516E26C513581FA();
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
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && unk_0x83666F9FB8FEBD4B() > 1500)
					{
						func_6();
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_14381, 0))
					{
						func_4();
						Global_14391 = 1;
						if (Global_14413.f_1 > 3)
						{
							Global_14413.f_1 = 7;
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
			Global_14415 = 6;
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
	if (((Global_14413.f_1 == 1 || Global_14413.f_1 == 3) || Global_14413.f_1 == 0) || Global_14357 == 1)
	{
		Global_14400 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0xF5DF8F3392CDD07B();
}

int func_3()
{
	if (Global_2889 == 1 || Global_14413.f_1 < 7)
	{
		Global_14400 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
	{
		unk_0x962E604CCA53388F(-1, "Menu_Back", &Global_14402, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0xD471C64C0898A7BF(iParam0, uParam1) || (iParam2 == 1 && unk_0x36017A82F80B1E0E(iParam0, uParam1)))
	{
		if (unk_0x55812CD5A331E1F8())
		{
			if (unk_0xB2E6456B1BD1C186() == 0 || (unk_0x28E650D9BD8DC870() && unk_0x4A1EAF6BB2C862EA(2)))
			{
				return 0;
			}
		}
		if (unk_0x3DC360442A11BB38() || unk_0x526F2ADD5C54B89E())
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
	func_9(Global_14394, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
	unk_0x7AF283DA3BA078CD(24);
	unk_0x7AF283DA3BA078CD(0);
	if (unk_0x7DA173D4FD42F36B(Global_2568055, 23))
	{
		unk_0x504EDFAAB39BF764(0);
		func_8("CELL_EXTBYOU");
		unk_0x7AF283DA3BA078CD(Global_2568056);
		unk_0x7AF283DA3BA078CD(unk_0xF34EE736CF047844(Global_2568272));
		unk_0x7AF283DA3BA078CD(Global_2568057);
		unk_0x7AF283DA3BA078CD(unk_0xF34EE736CF047844(Global_2568272.f_1));
		unk_0x7AF283DA3BA078CD(Global_2568058);
		unk_0x7AF283DA3BA078CD(unk_0xF34EE736CF047844(Global_2568272.f_2));
		func_8("CELL_BODYG");
		unk_0x7AF283DA3BA078CD(Global_2568059);
		unk_0x7AF283DA3BA078CD(unk_0xF34EE736CF047844(Global_2568275));
		unk_0x7AF283DA3BA078CD(Global_2568060);
		unk_0x7AF283DA3BA078CD(unk_0xF34EE736CF047844(Global_2568275.f_1));
		unk_0x7AF283DA3BA078CD(Global_2568061);
		unk_0x7AF283DA3BA078CD(unk_0xF34EE736CF047844(Global_2568275.f_2));
	}
	else
	{
		unk_0x504EDFAAB39BF764(0);
		func_8("CELL_EXTBYOU");
		unk_0x7AF283DA3BA078CD(Global_2568059);
		unk_0x7AF283DA3BA078CD(unk_0xF34EE736CF047844(Global_2568275));
		unk_0x7AF283DA3BA078CD(Global_2568060);
		unk_0x7AF283DA3BA078CD(unk_0xF34EE736CF047844(Global_2568275.f_1));
		unk_0x7AF283DA3BA078CD(Global_2568061);
		unk_0x7AF283DA3BA078CD(unk_0xF34EE736CF047844(Global_2568275.f_2));
		func_8("CELL_EXTBTARG");
		unk_0x7AF283DA3BA078CD(Global_2568056);
		unk_0x7AF283DA3BA078CD(unk_0xF34EE736CF047844(Global_2568272));
		unk_0x7AF283DA3BA078CD(Global_2568057);
		unk_0x7AF283DA3BA078CD(unk_0xF34EE736CF047844(Global_2568272.f_1));
		unk_0x7AF283DA3BA078CD(Global_2568058);
		unk_0x7AF283DA3BA078CD(unk_0xF34EE736CF047844(Global_2568272.f_2));
	}
	unk_0xE97F1B22C5E8989F();
	func_9(Global_14394, "DISPLAY_VIEW", 24f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0x7291E2F821FCFC04(sParam0);
	unk_0xD6360E18957BCDD3();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE97F1B22C5E8989F();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_14401)
	{
		func_12(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x99BCB15F954AF579(&Global_2283, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x226FA58470A21AEF(sParam7))
	{
		func_8(sParam7);
	}
	if (!unk_0x226FA58470A21AEF(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0x226FA58470A21AEF(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0x226FA58470A21AEF(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0x226FA58470A21AEF(iParam11))
	{
		func_8(iParam11);
	}
	unk_0xE97F1B22C5E8989F();
}

