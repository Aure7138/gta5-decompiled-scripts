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
	unk_0x252CDD3D0F299441();
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
		if (Global_14453.f_1 != 9)
		{
			switch (Global_14453.f_1)
			{
				case 7:
					if (iLocal_20 == 1 && unk_0x83666F9FB8FEBD4B() > 1500)
					{
						func_6();
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_14421, 0))
					{
						func_4();
						Global_14431 = 1;
						if (Global_14453.f_1 > 3)
						{
							Global_14453.f_1 = 7;
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
			Global_14455 = 6;
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
	if (((Global_14453.f_1 == 1 || Global_14453.f_1 == 3) || Global_14453.f_1 == 0) || Global_14397 == 1)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x96A3D9A8A4C7AFD4();
}

int func_3()
{
	if (Global_2929 == 1 || Global_14453.f_1 < 7)
	{
		Global_14440 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x4AFBCBFDE748D4E0(-1, "Menu_Back", &Global_14442, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0xE8C126B7ADBB9D63(iParam0, uParam1) || (iParam2 == 1 && unk_0x4CD14B4B1E8BD8BA(iParam0, uParam1)))
	{
		if (unk_0xB9D80B12FE4456A5())
		{
			if (unk_0xE59B25D23E4C4B3E() == 0 || (unk_0x02BBA5FDE77816B9() && unk_0x4C4813CAAD70E814(2)))
			{
				return 0;
			}
		}
		if (unk_0x0F30C1F1717A6437() || unk_0x08D525BE62A22AE0())
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
	func_9(Global_14434, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
	unk_0xD07D5CD276368D36(24);
	unk_0xD07D5CD276368D36(0);
	if (unk_0xC80D31E4B587871C(Global_4267143, 23))
	{
		unk_0x1869584A8A72FEDD(0);
		func_8("CELL_EXTBYOU");
		unk_0xD07D5CD276368D36(Global_4267144);
		unk_0xD07D5CD276368D36(unk_0xF34EE736CF047844(Global_4267360));
		unk_0xD07D5CD276368D36(Global_4267145);
		unk_0xD07D5CD276368D36(unk_0xF34EE736CF047844(Global_4267360.f_1));
		unk_0xD07D5CD276368D36(Global_4267146);
		unk_0xD07D5CD276368D36(unk_0xF34EE736CF047844(Global_4267360.f_2));
		func_8("CELL_BODYG");
		unk_0xD07D5CD276368D36(Global_4267147);
		unk_0xD07D5CD276368D36(unk_0xF34EE736CF047844(Global_4267363));
		unk_0xD07D5CD276368D36(Global_4267148);
		unk_0xD07D5CD276368D36(unk_0xF34EE736CF047844(Global_4267363.f_1));
		unk_0xD07D5CD276368D36(Global_4267149);
		unk_0xD07D5CD276368D36(unk_0xF34EE736CF047844(Global_4267363.f_2));
	}
	else
	{
		unk_0x1869584A8A72FEDD(0);
		func_8("CELL_EXTBYOU");
		unk_0xD07D5CD276368D36(Global_4267147);
		unk_0xD07D5CD276368D36(unk_0xF34EE736CF047844(Global_4267363));
		unk_0xD07D5CD276368D36(Global_4267148);
		unk_0xD07D5CD276368D36(unk_0xF34EE736CF047844(Global_4267363.f_1));
		unk_0xD07D5CD276368D36(Global_4267149);
		unk_0xD07D5CD276368D36(unk_0xF34EE736CF047844(Global_4267363.f_2));
		func_8("CELL_EXTBTARG");
		unk_0xD07D5CD276368D36(Global_4267144);
		unk_0xD07D5CD276368D36(unk_0xF34EE736CF047844(Global_4267360));
		unk_0xD07D5CD276368D36(Global_4267145);
		unk_0xD07D5CD276368D36(unk_0xF34EE736CF047844(Global_4267360.f_1));
		unk_0xD07D5CD276368D36(Global_4267146);
		unk_0xD07D5CD276368D36(unk_0xF34EE736CF047844(Global_4267360.f_2));
	}
	unk_0x271AA5469AF471B3();
	func_9(Global_14434, "DISPLAY_VIEW", 24f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x271AA5469AF471B3();
}

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_14441)
	{
		func_12(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xAB019B170BF1309C(sParam7))
	{
		func_8(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0xAB019B170BF1309C(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0xAB019B170BF1309C(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0xAB019B170BF1309C(iParam11))
	{
		func_8(iParam11);
	}
	unk_0x271AA5469AF471B3();
}

