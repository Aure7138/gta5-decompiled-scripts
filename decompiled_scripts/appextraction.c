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
	unk_0x330AFE43E1483B3F();
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
	unk_0x921053BAF754303D();
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
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x4988C48537D1AE4F(-1, "Menu_Back", &Global_14432, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x4B972043966C2EB8(iParam0, uParam1) || (iParam2 == 1 && unk_0x698C9A4C14BF3957(iParam0, uParam1)))
	{
		if (unk_0xEF4E5E47AF0D4480())
		{
			if (unk_0x8F013F929677E75D() == 0 || (unk_0x349B6C82BE3EF6DD() && unk_0xF23B2033129FFCF0(2)))
			{
				return 0;
			}
		}
		if (unk_0x95DBE123BC2DB80B() || unk_0x1CB39616BED2D488())
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
	unk_0xEAC9A8A194DF8F91(Global_14424, "SET_DATA_SLOT");
	unk_0xDF18CF55301CEB8B(24);
	unk_0xDF18CF55301CEB8B(0);
	if (unk_0x48B8265059381CD0(Global_2595318, 23))
	{
		unk_0x14ED5B5B8289F2FC(0);
		func_8("CELL_EXTBYOU");
		unk_0xDF18CF55301CEB8B(Global_2595319);
		unk_0xDF18CF55301CEB8B(unk_0xF34EE736CF047844(Global_2595535));
		unk_0xDF18CF55301CEB8B(Global_2595320);
		unk_0xDF18CF55301CEB8B(unk_0xF34EE736CF047844(Global_2595535.f_1));
		unk_0xDF18CF55301CEB8B(Global_2595321);
		unk_0xDF18CF55301CEB8B(unk_0xF34EE736CF047844(Global_2595535.f_2));
		func_8("CELL_BODYG");
		unk_0xDF18CF55301CEB8B(Global_2595322);
		unk_0xDF18CF55301CEB8B(unk_0xF34EE736CF047844(Global_2595538));
		unk_0xDF18CF55301CEB8B(Global_2595323);
		unk_0xDF18CF55301CEB8B(unk_0xF34EE736CF047844(Global_2595538.f_1));
		unk_0xDF18CF55301CEB8B(Global_2595324);
		unk_0xDF18CF55301CEB8B(unk_0xF34EE736CF047844(Global_2595538.f_2));
	}
	else
	{
		unk_0x14ED5B5B8289F2FC(0);
		func_8("CELL_EXTBYOU");
		unk_0xDF18CF55301CEB8B(Global_2595322);
		unk_0xDF18CF55301CEB8B(unk_0xF34EE736CF047844(Global_2595538));
		unk_0xDF18CF55301CEB8B(Global_2595323);
		unk_0xDF18CF55301CEB8B(unk_0xF34EE736CF047844(Global_2595538.f_1));
		unk_0xDF18CF55301CEB8B(Global_2595324);
		unk_0xDF18CF55301CEB8B(unk_0xF34EE736CF047844(Global_2595538.f_2));
		func_8("CELL_EXTBTARG");
		unk_0xDF18CF55301CEB8B(Global_2595319);
		unk_0xDF18CF55301CEB8B(unk_0xF34EE736CF047844(Global_2595535));
		unk_0xDF18CF55301CEB8B(Global_2595320);
		unk_0xDF18CF55301CEB8B(unk_0xF34EE736CF047844(Global_2595535.f_1));
		unk_0xDF18CF55301CEB8B(Global_2595321);
		unk_0xDF18CF55301CEB8B(unk_0xF34EE736CF047844(Global_2595535.f_2));
	}
	unk_0x44983883E630A945();
	func_9(Global_14424, "DISPLAY_VIEW", 24f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0xDCEB60B79ECB219E(sParam0);
	unk_0x1798EBF9408190D3();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x44983883E630A945();
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
	unk_0x21E7933CCC7B3724(&Global_2313, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEAC9A8A194DF8F91(uParam0, sParam1);
	unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xDF18CF55301CEB8B(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9C88EB7B70229335(sParam7))
	{
		func_8(sParam7);
	}
	if (!unk_0x9C88EB7B70229335(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0x9C88EB7B70229335(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0x9C88EB7B70229335(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0x9C88EB7B70229335(iParam11))
	{
		func_8(iParam11);
	}
	unk_0x44983883E630A945();
}

