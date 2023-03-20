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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<11> Local_55[30];
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	var uLocal_394 = 0;
	int iLocal_395[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_391 = -1;
	iLocal_392 = 5;
	if (unk_0x4B4BD87E3D30C50D(210))
	{
		func_119();
	}
	if (unk_0xB1A77D5C890711F9(joaat("ambient_sonar")) > 1)
	{
		unk_0x2F798BA2098FDADE();
	}
	func_118(13);
	func_117(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_116(unk_0x77F050A399DB77ED());
		switch (iLocal_388)
		{
			case 0:
				func_110();
				break;
			
			case 1:
				func_102();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				func_119();
				break;
		}
	}
}

void func_1()
{
	iLocal_389 = 0;
	if (func_101(unk_0x77F050A399DB77ED()))
	{
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			if (func_67(&Local_42, &Local_55))
			{
				func_28();
			}
			else if (unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED()))
			{
				uLocal_386 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
				func_117(1);
				func_13(0);
				if (func_101(unk_0x77F050A399DB77ED()))
				{
					if (func_11(&Local_42, &Local_55, unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), &iLocal_391))
					{
						func_8();
					}
				}
				unk_0xCBC9707F3BE3D5C2(0);
				func_7();
				func_6(1);
			}
			else if (func_101(uLocal_386))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xAF99169F0F5AE41D(uLocal_386, 1)) > 62500f)
				{
					func_5();
				}
				else if (!unk_0xC3B073777B46C61A(uLocal_387))
				{
					uLocal_387 = func_2(uLocal_386, 0, 0);
					unk_0x06E25D9668199664(uLocal_387, 308);
				}
			}
			else
			{
				func_7();
			}
		}
	}
}

int func_2(var uParam0, bool bParam1, bool bParam2)
{
	return func_3(uParam0, !bParam1, bParam2);
}

int func_3(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x1F2158D615BC4B25(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xBAA49E1DC5584B87(uParam0);
	if (unk_0xDD21A3DB256904E7(uParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_4(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
		}
		else
		{
			unk_0x80553402FCEB9A9C(uVar0, 2);
		}
	}
	else if (unk_0x94195F7CA642F937(uParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_4(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
		unk_0x0AA0CF6371DDEDCF(uVar0, bParam1);
	}
	else if (unk_0x0449EE7873816A89(uParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_4(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_4(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_5()
{
	func_7();
	if (unk_0x1F2158D615BC4B25(uLocal_386))
	{
		unk_0xB84D4C251623B60C(&uLocal_386);
	}
}

void func_6(int iParam0)
{
	iLocal_388 = iParam0;
}

void func_7()
{
	if (unk_0xC3B073777B46C61A(uLocal_387))
	{
		unk_0x296CDA10C549A502(&uLocal_387);
	}
}

void func_8()
{
	func_9(func_10(iLocal_391), 1, 1);
	iLocal_390 = 1;
}

void func_9(struct<3> Param0, bool bParam3, bool bParam4)
{
	Global_16818 = { Param0 };
	unk_0xA5F70A8B83BDFA49(&Global_2284, 30);
	if (bParam3)
	{
		unk_0x573691DB812DC8AA(&Global_2284, 29);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2284, 29);
	}
	if (bParam4)
	{
		unk_0x573691DB812DC8AA(&Global_2285, 1);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2285, 1);
	}
}

Vector3 func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1435.61f, 5781.12f, -29.87f;
			break;
		
		case 1:
			return -1956.54f, -1125.07f, -37.21f;
			break;
		
		case 2:
			return 2752.88f, -1212.78f, -22.41f;
			break;
		
		case 3:
			return 3188.04f, -1668.19f, -146.88f;
			break;
		
		case 4:
			return 2555.04f, -2372.47f, -112.01f;
			break;
		
		case 5:
			return 2945.9f, 6537.41f, -27.36f;
			break;
		
		case 6:
			return -1266.69f, 6261.75f, -34.17f;
			break;
		
		case 7:
			return 3034.72f, 6550.42f, -35.2f;
			break;
		
		case 8:
			return 1694.53f, 6991.69f, -137.62f;
			break;
		
		case 9:
			return 1233.43f, 7081.15f, -141.72f;
			break;
		
		case 10:
			return -3413.73f, 830.23f, -12.95f;
			break;
		
		case 11:
			return 1422.5f, 6854.67f, -38.2f;
			break;
		
		case 12:
			return -3345.1f, 3547.8f, -59.1f;
			break;
		
		case 13:
			return -3437.93f, 3069.57f, -54.85f;
			break;
		
		case 14:
			return -2909.28f, 4204.32f, -111.62f;
			break;
		
		case 15:
			return -3179.12f, 2151.28f, -31.86f;
			break;
		
		case 16:
			return 4146.09f, 3825.86f, -40.96f;
			break;
		
		case 17:
			return 2716.61f, 6956.91f, -157.17f;
			break;
		
		case 18:
			return 2487.5f, 7001.69f, -143.56f;
			break;
		
		case 19:
			return -3043.23f, -212.16f, -23.48f;
			break;
		
		case 20:
			return -2871.1f, 4268.19f, -152.47f;
			break;
		
		case 21:
			return -777.21f, 6726.71f, -30.89f;
			break;
		
		case 22:
			return -3008.33f, 2877.73f, -27.76f;
			break;
		
		case 23:
			return -1843.12f, -1260.67f, -22.17f;
			break;
		
		case 24:
			return -2591.62f, -470.34f, -30.4f;
			break;
		
		case 25:
			return 3824.99f, 3729.17f, -16.17f;
			break;
		
		case 26:
			return 3885.44f, 3797.19f, -24.26f;
			break;
		
		case 27:
			return 2153.9f, -2826.37f, -50.76f;
			break;
		
		case 28:
			return 1873.5f, -3012.6f, -47f;
			break;
		
		case 29:
			return -2325.06f, -1046.7f, -70.67f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_11(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!func_12(&(uParam0->f_1), iVar0))
		{
			fVar1 = unk_0xB7A628320EFF8E47(Param2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam5 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam5 != -1;
}

bool func_12(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return unk_0xB56FEBC510E7E9DE(*uParam0, iParam1);
	}
	return unk_0xB56FEBC510E7E9DE(uParam0->f_1, (iParam1 - 32));
}

int func_13(int iParam0)
{
	if (func_14(17, 0, 1, 0))
	{
		if (iParam0 == 1)
		{
			unk_0x573691DB812DC8AA(&Global_2284, 22);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&Global_2284, 22);
		}
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_69317)
	{
		if (iParam0 != 17 && iParam0 != 3)
		{
			return 0;
		}
		if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 14))
		{
			if (iParam0 == 17)
			{
				unk_0x573691DB812DC8AA(&Global_2558757, 14);
				unk_0x573691DB812DC8AA(&Global_2558757, 16);
			}
			if (iParam0 == 3)
			{
				unk_0x573691DB812DC8AA(&Global_2558757, 14);
				unk_0x573691DB812DC8AA(&Global_2558757, 15);
			}
		}
		if (unk_0xB1A77D5C890711F9(Global_2290[iParam0 /*15*/].f_9) > 0)
		{
			unk_0xA5F70A8B83BDFA49(&Global_2558757, 14);
			unk_0xA5F70A8B83BDFA49(&Global_2558757, 16);
			unk_0xA5F70A8B83BDFA49(&Global_2558757, 15);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_22();
	if (Global_14413.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_21(0) == 1)
		{
			return 0;
		}
	}
	if (Global_14379 == 1)
	{
		return 0;
	}
	if (Global_14413.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0x4D1CAE1CFC4C8868(Global_14410))
	{
		if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14413.f_1 < 4)
			{
				func_20("cellphone_flashhand");
				if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) == 0)
				{
					Global_14410 = unk_0xE81651AD79516E48("cellphone_flashhand", 1424);
				}
				unk_0x2C85BCB989483284("cellphone_flashhand");
			}
		}
	}
	while (!Global_14395)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_18();
	func_15();
	if (unk_0xB1A77D5C890711F9(Global_2290[iParam0 /*15*/].f_9) == 0)
	{
		Global_2889 = 0;
		Global_14413.f_1 = 7;
		func_20(&(Global_2290[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0xB1A77D5C890711F9(Global_2290[iParam0 /*15*/].f_9) == 0)
			{
				Global_14411 = unk_0xE81651AD79516E48(&(Global_2290[iParam0 /*15*/].f_5), 3800);
			}
		}
		else if (unk_0xB1A77D5C890711F9(Global_2290[iParam0 /*15*/].f_9) == 0)
		{
			Global_14411 = unk_0xE81651AD79516E48(&(Global_2290[iParam0 /*15*/].f_5), 2552);
		}
		unk_0x2C85BCB989483284(&(Global_2290[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_15()
{
	if (Global_69317 == 0)
	{
		Global_2290[14 /*15*/].f_4 = -99;
		Global_2290[4 /*15*/].f_4 = -99;
		if (Global_2440973)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2290[iParam0 /*15*/]), sParam1, 16);
	Global_2290[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2290[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2290[iParam0 /*15*/].f_9 = unk_0x39BD4614CF899227(sParam3);
	Global_2290[iParam0 /*15*/].f_10 = iParam4;
	Global_2290[iParam0 /*15*/].f_11 = iParam5;
	Global_2290[iParam0 /*15*/].f_12 = iParam6;
	Global_2290[iParam0 /*15*/].f_13 = iParam7;
	Global_2290[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2290[iParam0 /*15*/].f_12 == 0)
	{
		Global_2290[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2290[iParam0 /*15*/].f_13 == 0)
	{
		Global_2290[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2290[iParam0 /*15*/].f_14 == 0)
	{
		Global_2290[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_17(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_18()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2290[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_69317 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 147)
		{
			if (Global_99250.f_32503[iVar2 /*29*/].f_19[Global_14413] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_35700 == 15 && func_19(0) == 0) && Global_2288 == 0)
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14574 = 0;
			Global_2289 = 255;
		}
		else
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14574 = 1;
			Global_2289 = 42;
		}
		if (iVar1 == 1)
		{
			func_16(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_16(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_99250.f_12669.f_89 == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_99250.f_12669.f_88 == 1)
		{
			func_16(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0xB56FEBC510E7E9DE(Global_2558757, 4) == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0xB56FEBC510E7E9DE(Global_2558757, 4) == 1)
		{
			if (Global_1573425)
			{
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (unk_0xB56FEBC510E7E9DE(Global_2558757, 20) == 1)
			{
				func_16(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (unk_0xB56FEBC510E7E9DE(Global_2558757, 22) == 1)
			{
				func_16(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
		}
		if (((unk_0xB56FEBC510E7E9DE(Global_2558757, 4) == 0 && Global_1573425 == 0) && unk_0xB56FEBC510E7E9DE(Global_2558757, 20) == 0) && unk_0xB56FEBC510E7E9DE(Global_2558757, 22) == 0)
		{
			func_16(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

bool func_19(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

void func_20(char* sParam0)
{
	unk_0x507887ECD0989471(sParam0);
	while (!unk_0xF93DA38375EB3977(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_21(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
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
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_22()
{
	if (func_17(14))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_23();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_23()
{
	func_24();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_24()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_27(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_26(unk_0x77F050A399DB77ED());
			if (func_25(iVar0) && (!func_17(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_25(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_28()
{
	func_51(3, 250000);
	func_44(299, 0, 0);
	func_31(20, 1);
	func_29();
	func_6(3);
}

void func_29()
{
	int iVar0;
	
	iVar0 = func_30(65);
	Global_2409757[iVar0 /*83*/] = 65;
	StringCopy(&(Global_2409757[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2409757[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2409757[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_31(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_32(iParam0, iParam1);
}

int func_32(int iParam0, int iParam1)
{
	if (func_17(14) && !func_43(iParam0))
	{
		return 0;
	}
	if (unk_0xEB1F5947DDF281A3(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25361 != 0 && !Global_69317)
	{
		return 0;
	}
	if (func_42(&Global_2558981))
	{
		if (func_40(&Global_2558981, iParam0))
		{
			return 0;
		}
		if (func_33(&Global_2558981, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x7F2415D4902EF64D(iParam0))
		{
			return 0;
		}
		if (unk_0xEB1F5947DDF281A3(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	func_36(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_34(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_34(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_43(iParam1))
	{
		return 0;
	}
	if (func_40(uParam0, iParam1))
	{
		return 0;
	}
	if (func_39(uParam0) < 0f)
	{
		func_38(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_35(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_35(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_36(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_37(uParam0, iVar0);
		iVar0++;
	}
	func_38(uParam0, (Global_2558980 - 0.5f));
}

void func_37(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_38(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_39(var uParam0)
{
	return uParam0->f_72;
}

bool func_40(var uParam0, int iParam1)
{
	return func_41(uParam0, iParam1) != -1;
}

int func_41(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_42(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_44(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_49((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_99250.f_8812[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99250.f_8812[iParam0 /*12*/].f_6 == 11 || Global_99250.f_8812[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99250.f_8812[iParam0 /*12*/].f_5 = 1;
		Global_99250.f_8812[iParam0 /*12*/].f_10 = iParam1;
		Global_99250.f_8812[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_45();
	}
}

void func_45()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_98986 = 0;
	Global_98987 = 0;
	Global_98988 = 0;
	Global_98989 = 0;
	Global_98990 = 0;
	Global_98991 = 0;
	Global_98992 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99250.f_8812.f_3853;
	Global_99250.f_8812.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99250.f_8812[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99250.f_8812[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98986++;
					fVar1 = (fVar1 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98987++;
					fVar2 = (fVar2 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98988++;
					fVar3 = (fVar3 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98989++;
					fVar4 = (fVar4 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98990++;
					fVar5 = (fVar5 + (Global_99250.f_8812[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98991++;
					fVar6 = (fVar6 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98992++;
					fVar7 = (fVar7 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98969 > 0)
	{
		if (Global_98986 == Global_98969)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98970 > 0)
	{
		if (Global_98987 == Global_98970)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98971 > 0)
	{
		if (Global_98988 == Global_98971)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98972 > 0)
	{
		if (Global_98989 == Global_98972)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98973 > 0)
	{
		if (((Global_98990 == Global_98973 || (Global_98973 * 10 / Global_98990) < 41) || Global_98990 > Global_98976) || Global_98990 == Global_98976)
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_8812.f_3856, 14))
			{
				if (Global_98990 == Global_98973)
				{
					unk_0x9E0BBE2E0E32750D(joaat("num_rndevents_completed"), Global_98973, 0);
					unk_0x573691DB812DC8AA(&(Global_99250.f_8812.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98974 > 0)
	{
		if (Global_98991 == Global_98974)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98975 > 0)
	{
		if (Global_98992 == Global_98975)
		{
			fVar7 = 5f;
		}
	}
	Global_99250.f_8812.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98990 > Global_98976 || Global_98990 == Global_98976)
	{
		iVar9 = Global_98976;
	}
	else
	{
		iVar9 = Global_98990;
	}
	unk_0x5716C8F12991E399(joaat("num_missions_completed"), Global_98986, 1);
	unk_0x5716C8F12991E399(joaat("num_missions_available"), Global_98969, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_completed"), Global_98987, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_available"), Global_98970, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_completed"), Global_98988, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_available"), Global_98971, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_completed"), Global_98989, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_available"), Global_98972, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_available"), Global_98976, 1);
	unk_0x5716C8F12991E399(joaat("num_misc_completed"), (Global_98992 + Global_98991), 1);
	unk_0x5716C8F12991E399(joaat("num_misc_available"), (Global_98975 + Global_98974), 1);
	Global_98993 = (Global_98986 * 100 / Global_98969);
	Global_98995 = ((Global_98988 + Global_98987) * 100 / (Global_98971 + Global_98970));
	Global_98994 = ((Global_98989 + iVar9) * 100 / (Global_98972 + Global_98976));
	Global_98996 = ((Global_98991 + Global_98992) * 100 / (Global_98974 + Global_98975));
	unk_0x46160091B23E8313(joaat("total_progress_made"), Global_99250.f_8812.f_3853, 1);
	unk_0x5716C8F12991E399(joaat("percent_story_missions"), Global_98993, 1);
	unk_0x5716C8F12991E399(joaat("percent_ambient_missions"), Global_98994, 1);
	unk_0x5716C8F12991E399(joaat("percent_oddjobs"), Global_98995, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853))
	{
		func_48(13, unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853));
	}
	if (!unk_0xB94B9782B4E786E9())
	{
		if (!Global_69317)
		{
			if (func_47() == 2 == 0 && !unk_0x4C779B19E6DDCDA2())
			{
				if (unk_0x01128ADE88E1C42B())
				{
					Global_98984 = 0;
				}
				if (!Global_55659)
				{
					func_46();
				}
			}
		}
	}
}

int func_46()
{
	if (func_19(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

int func_47()
{
	return Global_25115;
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xDE96DC4582CFD56F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CB31CF925F17754(iParam0, iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_50();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xA1F1837E4A137310((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEDF2A618D8A93F7D((iParam0 - 0)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xA1F1837E4A137310((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEDF2A618D8A93F7D((iParam0 - 192)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xA1F1837E4A137310((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEDF2A618D8A93F7D((iParam0 - 513)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xA1F1837E4A137310((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEDF2A618D8A93F7D((iParam0 - 705)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC9FE62843EA157C0((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEDF2A618D8A93F7D((iParam0 - 3111)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC9FE62843EA157C0((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEDF2A618D8A93F7D((iParam0 - 2919)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x1F3B95F25F60E511((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEDF2A618D8A93F7D((iParam0 - 4207)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x1F3B95F25F60E511((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEDF2A618D8A93F7D((iParam0 - 4335)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x1F3B95F25F60E511((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEDF2A618D8A93F7D((iParam0 - 6029)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_50()
{
	return Global_1312746;
}

void func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	func_53(Global_99250.f_29357[iParam0 /*4*/], func_66(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_99250.f_29357.f_69 = (Global_99250.f_29357.f_69 + iParam1);
			break;
		
		case 2:
			Global_99250.f_29357.f_70 = (Global_99250.f_29357.f_70 + iParam1);
			break;
		
		case 0:
			Global_99250.f_29357.f_71 = (Global_99250.f_29357.f_71 + iParam1);
			break;
	}
	unk_0xBA16CA557222A92B(func_52(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x5716C8F12991E399(func_52(iParam0, 1), iVar0, 1);
}

int func_52(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_towi");
					break;
				
				case 1:
					return joaat("prop_earned_towi");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_taxi");
					break;
				
				case 1:
					return joaat("prop_earned_taxi");
					break;
				
				case 2:
					return joaat("prop_missions_taxi");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_traf");
					break;
				
				case 1:
					return joaat("prop_earned_traf");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_soco");
					break;
				
				case 1:
					return joaat("prop_earned_soco");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cmsh");
					break;
				
				case 1:
					return joaat("prop_earned_cmsh");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinv");
					break;
				
				case 1:
					return joaat("prop_earned_cinv");
					break;
				
				case 2:
					return joaat("prop_missions_cinv");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cind");
					break;
				
				case 1:
					return joaat("prop_earned_cind");
					break;
				
				case 2:
					return joaat("prop_missions_cind");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cinm");
					break;
				
				case 1:
					return joaat("prop_earned_cinm");
					break;
				
				case 2:
					return joaat("prop_missions_cinm");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_golf");
					break;
				
				case 1:
					return joaat("prop_earned_golf");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_cscr");
					break;
				
				case 1:
					return joaat("prop_earned_cscr");
					break;
				
				case 2:
					return joaat("prop_missions_cscr");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_weed");
					break;
				
				case 1:
					return joaat("prop_earned_weed");
					break;
				
				case 2:
					return joaat("prop_missions_weed");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barte");
					break;
				
				case 1:
					return joaat("prop_earned_barte");
					break;
				
				case 2:
					return joaat("prop_missions_barte");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barpi");
					break;
				
				case 1:
					return joaat("prop_earned_barpi");
					break;
				
				case 2:
					return joaat("prop_missions_barpi");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barhe");
					break;
				
				case 1:
					return joaat("prop_earned_barhe");
					break;
				
				case 2:
					return joaat("prop_missions_barhe");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_barho");
					break;
				
				case 1:
					return joaat("prop_earned_barho");
					break;
				
				case 2:
					return joaat("prop_missions_barho");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return joaat("prop_bought_strip");
					break;
				
				case 1:
					return joaat("prop_earned_strip");
					break;
			}
			break;
	}
	return joaat("prop_bought_towi");
}

void func_53(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_54(Global_99250.f_32503[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xBA16CA557222A92B(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x5716C8F12991E399(iVar1, iVar0, 1);
	}
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_65();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_64(99, 1);
					func_63(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_62(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_61(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_61(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_63(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_63(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xD8D50BE3C4300244())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_61(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_63(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_63(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_60(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_64(95, iParam3);
					break;
				
				case 1:
					func_64(97, iParam3);
					break;
				
				case 2:
					func_64(96, iParam3);
					break;
			}
			func_64(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_57(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_57(iVar1);
	}
	iVar5 = (Global_52834[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52834[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52834[iVar2] = 2147483647;
				}
				else
				{
					Global_52834[iVar2] = (Global_52834[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_63(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_63(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_63(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52834[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52834[iVar2];
			Global_52834[iVar2] = (Global_52834[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_99250.f_25017.f_233[iVar2 /*69*/]++;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_1++;
		if (Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_56(iParam0);
	if (Global_35700 == 15)
	{
		func_55(0);
	}
	return 1;
}

void func_55(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52842[iVar0 /*3*/][0] = Global_99250.f_25017[iVar0];
		Global_52842.f_31[iVar0 /*3*/][0] = Global_99250.f_25017.f_11[iVar0];
		Global_52842.f_62[iVar0 /*3*/][0] = Global_99250.f_25017.f_22[iVar0];
		Global_52842.f_93[iVar0 /*3*/][0] = Global_99250.f_25017.f_33[iVar0];
		Global_52842.f_124[iVar0 /*3*/][0] = Global_99250.f_25017.f_44[iVar0];
		Global_52842.f_155[iVar0 /*3*/][0] = Global_99250.f_25017.f_55[iVar0];
		Global_52842.f_186[iVar0 /*3*/][0] = Global_99250.f_25017.f_66[iVar0];
		Global_52842.f_217[iVar0 /*3*/][0] = Global_99250.f_25017.f_77[iVar0];
		Global_52842.f_248[iVar0 /*3*/][0] = Global_99250.f_25017.f_88[iVar0];
		if (!bParam0)
		{
			Global_52842[iVar0 /*3*/][1] = Global_99250.f_25017[iVar0];
			Global_52842.f_31[iVar0 /*3*/][1] = Global_99250.f_25017.f_11[iVar0];
			Global_52842.f_62[iVar0 /*3*/][1] = Global_99250.f_25017.f_22[iVar0];
			Global_52842.f_93[iVar0 /*3*/][1] = Global_99250.f_25017.f_33[iVar0];
			Global_52842.f_124[iVar0 /*3*/][1] = Global_99250.f_25017.f_44[iVar0];
			Global_52842.f_155[iVar0 /*3*/][1] = Global_99250.f_25017.f_55[iVar0];
			Global_52842.f_186[iVar0 /*3*/][1] = Global_99250.f_25017.f_66[iVar0];
			Global_52842.f_217[iVar0 /*3*/][1] = Global_99250.f_25017.f_77[iVar0];
			Global_52842.f_248[iVar0 /*3*/][1] = Global_99250.f_25017.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52834[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x5716C8F12991E399(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x5716C8F12991E399(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x5716C8F12991E399(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_57(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x4C779B19E6DDCDA2())
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0) || unk_0xB56FEBC510E7E9DE(Global_2097152[func_59() /*10185*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		unk_0xA5F70A8B83BDFA49(&(Global_2097152[func_59() /*10185*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2B8B3581C4E63AD1("COUP_RED");
		unk_0x703D2B4B1C7E10B6(func_58(iParam0));
		unk_0xEF85B88DC049EA23(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_59()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_60(int iParam0)
{
	func_64(93, iParam0);
	func_64(29, iParam0);
	func_64(30, iParam0);
}

bool func_61(int iParam0)
{
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0);
	}
	return unk_0xB56FEBC510E7E9DE(Global_2097152[func_59() /*10185*/].f_7698.f_10, iParam0);
}

int func_62(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xEB1F5947DDF281A3(27))
	{
		return 0;
	}
	if (unk_0xBA16CA557222A92B(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xBA16CA557222A92B(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xBA16CA557222A92B(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xBA16CA557222A92B(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x5716C8F12991E399(joaat("num_cash_spent"), iVar1, 1);
		func_48(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_31(27, 1);
	return 1;
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xBA16CA557222A92B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x5716C8F12991E399(iParam0, iVar0, 1);
}

void func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/])
	{
		unk_0xBA16CA557222A92B(Global_51402[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x5716C8F12991E399(Global_51402[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_65()
{
	int iVar0;
	
	if (unk_0x9C77CB51883D12D1())
	{
		unk_0xBA16CA557222A92B(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52834[0] == iVar0)
		{
			Global_52834[0] = iVar0;
		}
		unk_0xBA16CA557222A92B(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52834[1] == iVar0)
		{
			Global_52834[1] = iVar0;
		}
		unk_0xBA16CA557222A92B(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52834[2] == iVar0)
		{
			Global_52834[2] = iVar0;
		}
	}
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 98;
			break;
		
		case 1:
			return 99;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 101;
			break;
		
		case 4:
			return 102;
			break;
		
		case 5:
			return 103;
			break;
		
		case 6:
			return 104;
			break;
		
		case 7:
			return 105;
			break;
		
		case 8:
			return 106;
			break;
		
		case 9:
			return 107;
			break;
		
		case 10:
			return 108;
			break;
		
		case 11:
			return 109;
			break;
		
		case 12:
			return 110;
			break;
		
		case 13:
			return 111;
			break;
		
		case 14:
			return 112;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

int func_67(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	
	unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED());
	Var1 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
	iVar0 = 0;
	while (iVar0 < iLocal_392)
	{
		bVar4 = func_12(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar4)
			{
				if (!func_100((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f, 0))
				{
					func_98(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else
				{
					func_98(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar4)
		{
			if (func_85(uParam0, iParam1, Var1))
			{
				if (func_11(uParam0, iParam1, Var1, &iLocal_391))
				{
					func_51(3, 23000);
					func_8();
				}
			}
		}
		func_82(uParam0->f_10, bVar4);
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (!Global_69577)
	{
		func_72(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 3, &iLocal_393, &uLocal_394, "SUBM_TITLE", "SUBM_COLLECT");
	}
	if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
	{
		func_71();
		func_117(0);
		func_68(0);
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_68(int iParam0)
{
	if (Global_14571)
	{
		func_70(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x573691DB812DC8AA(&Global_2284, 16);
	}
	if (unk_0xEA9C2A206A86B744())
	{
		unk_0xC9AB825AA4821BDA(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 30);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 30);
	}
	if (!func_69())
	{
		Global_14413.f_1 = 3;
	}
}

int func_69()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_70(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_21(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3E337B53281459DC(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x4317F0DBC6457B31(Global_14350);
		}
		else
		{
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
}

void func_71()
{
	unk_0x573691DB812DC8AA(&Global_2284, 30);
}

void func_72(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7)
{
	var uVar0;
	
	func_81(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*uParam5 = unk_0x2F14983962462691("MIDSIZED_MESSAGE");
				if (unk_0xEDE19C6ED6E2F478(*uParam5))
				{
					uVar0 = unk_0xBE8BBC6340F2B731();
					if (iParam3 == 6)
					{
						unk_0xBBEB613A917D7EE8(uVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0xBBEB613A917D7EE8(uVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0x758017413321C628(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0xC976485333F81CE8(sParam6);
				unk_0xC8C5D5B9E15EB2E2();
				unk_0xC976485333F81CE8(sParam7);
				unk_0xA50C1D6E503AA51E(func_74(iParam3));
				unk_0xC8C5D5B9E15EB2E2();
				unk_0x098CA28C04E62E55();
				*uParam2 = unk_0x3EAC9995EC220C5A();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0x3EAC9995EC220C5A() - *uParam2) > 7000)
				{
					unk_0x758017413321C628(*uParam5, "SHARD_ANIM_OUT");
					unk_0x4D57F6B69CCB6D95(1);
					unk_0xBA93E45C163C745D(0.33f);
					unk_0x098CA28C04E62E55();
					*iParam4++;
				}
				else if (!func_73())
				{
					if (unk_0xEDE19C6ED6E2F478(*uParam5))
					{
						func_81(1);
						unk_0xE636AA747867BC3D(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x3EAC9995EC220C5A() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_73())
				{
					if (unk_0xEDE19C6ED6E2F478(*uParam5))
					{
						func_81(1);
						unk_0xE636AA747867BC3D(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0xEDE19C6ED6E2F478(*uParam5))
				{
					unk_0xD2E03CEA477E4E3D(uParam5);
				}
				func_81(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_73()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_80(iParam0))
		{
			if (unk_0xB56FEBC510E7E9DE(Global_99250.f_8667.f_108, func_79(func_80(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0xBA16CA557222A92B(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0xBA16CA557222A92B(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0xBA16CA557222A92B(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_80(iParam0))
		{
			iVar2 = (func_78(iParam0) + iVar1);
			if (func_75(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	iVar1 = func_77(iParam0, iParam1);
	uVar2 = func_76(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x31E96FB56E815232(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xEDF2A618D8A93F7D((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xEDF2A618D8A93F7D((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xEDF2A618D8A93F7D((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xEDF2A618D8A93F7D((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xEDF2A618D8A93F7D((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xEDF2A618D8A93F7D((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xEDF2A618D8A93F7D((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xEDF2A618D8A93F7D((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xEDF2A618D8A93F7D((iParam0 - 6029)) * 64);
	}
	return iVar0;
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xA1F1837E4A137310((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xA1F1837E4A137310((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xA1F1837E4A137310((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xA1F1837E4A137310((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC9FE62843EA157C0((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC9FE62843EA157C0((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x1F3B95F25F60E511((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x1F3B95F25F60E511((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x1F3B95F25F60E511((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	return iVar0;
}

int func_78(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_79(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_80(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_81(int iParam0)
{
	if (Global_69584 != iParam0)
	{
		Global_69584 = iParam0;
	}
}

void func_82(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_84(iParam0) == 0)
	{
		return;
	}
	if (iLocal_395[iParam0] == -1)
	{
		if (!bParam1 && !unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_55[iParam0 /*11*/].f_3) < (100f * 100f))
			{
				if (func_83(&iVar0))
				{
					unk_0x51A4CAF24717C56C(iVar0, Local_55[iParam0 /*11*/].f_3, 8f);
					iLocal_395[iParam0] = iVar0;
				}
			}
		}
	}
	else if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), Local_55[iParam0 /*11*/].f_3) > (105f * 105f))
		{
			if (iLocal_395[iParam0] >= 0 && iLocal_395[iParam0] < 8)
			{
				unk_0xF20795371060BD4F(iLocal_395[iParam0]);
				iLocal_395[iParam0] = -1;
			}
		}
	}
}

int func_83(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 0;
	while (*uParam0 < 8)
	{
		if (!unk_0xDBE185DFDE3D9239(*uParam0))
		{
			return 1;
		}
		*uParam0++;
	}
	*uParam0 = -1;
	return 0;
}

int func_84(int iParam0)
{
	if (iParam0 == 23)
	{
		return 0;
	}
	return 1;
}

int func_85(var uParam0, var uParam1, struct<3> Param2)
{
	int iVar0;
	
	iVar0 = uParam0->f_10;
	if ((uParam1[iVar0 /*11*/])->f_10)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0x62E51B6A256A51C2((uParam1[iVar0 /*11*/])->f_1) || func_97((uParam1[iVar0 /*11*/])->f_1))
			{
				func_87(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (unk_0xAE5A4FE344CB20A9((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((unk_0xB7A628320EFF8E47(Param2, unk_0x4FCFA6976C0E1749((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_17(13)) || func_17(14))
		{
			func_86(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_86(var uParam0)
{
	if (unk_0xAE5A4FE344CB20A9(*uParam0))
	{
		unk_0xFED6C9CCD794E1F5(*uParam0);
	}
}

void func_87(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (func_78(*uParam0) + iParam2);
	func_86(&((uParam1[iParam2 /*11*/])->f_1));
	func_96(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_10 = 0;
	func_95(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_94(*uParam0, iParam2, 1);
	}
	unk_0x084501BE62B00ABE(0, 200, 250);
	unk_0x2DE8883060AD8C67(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_93(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_91(&(uParam0->f_1));
	}
	func_89();
	unk_0x9D6997B3D63F3B68(iVar0);
	func_88(1, 0);
	func_46();
	uParam0->f_11 = 1;
}

void func_88(int iParam0, int iParam1)
{
	Global_91145.f_7 = iParam0;
	Global_91145.f_8 = iParam1;
}

void func_89()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0xBA16CA557222A92B(func_90(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_48(18, iVar0);
	}
	unk_0xBA16CA557222A92B(func_90(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_48(19, iVar0);
	}
	unk_0xBA16CA557222A92B(func_90(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_48(20, iVar0);
	}
	iVar2 = ((func_80(0) + func_80(1)) + func_80(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0x5716C8F12991E399(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_90(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_91(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_12(uParam0, iVar0))
		{
			iVar1++;
			func_49((uParam0->f_2 + iVar0), 1, -1, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_92(168, 0);
	}
}

void func_92(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_99250.f_7231[iParam0] = 1;
	Global_99250.f_7231.f_236[iParam0] = (unk_0x3EAC9995EC220C5A() + iParam1);
}

void func_93(var uParam0, int iParam1)
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_40)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_12(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_49((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_92(168, 0);
	}
}

void func_94(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_8667.f_122), iParam1);
			}
			else
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_8667.f_122), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x573691DB812DC8AA(&(Global_99250.f_8667.f_122.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_8667.f_122.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x573691DB812DC8AA(&(Global_99250.f_8667.f_125), iParam1);
			}
			else
			{
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_8667.f_125), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x573691DB812DC8AA(&(Global_99250.f_8667.f_125.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_8667.f_125.f_1), (iParam1 - 32));
		}
	}
}

void func_95(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (bParam2)
		{
			unk_0x573691DB812DC8AA(uParam0, iParam1);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(uParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0x573691DB812DC8AA(&(uParam0->f_1), (iParam1 - 32));
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&(uParam0->f_1), (iParam1 - 32));
	}
}

void func_96(var uParam0)
{
	if (unk_0xC3B073777B46C61A(*uParam0))
	{
		unk_0x49AFDB1662AE2A92(*uParam0, 0);
		unk_0x296CDA10C549A502(uParam0);
	}
}

int func_97(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0xAE5A4FE344CB20A9(uParam0))
	{
		return 0;
	}
	if (func_101(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			uVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
			iVar1 = unk_0xDF1398076E26B0E4(uVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0x4FCFA6976C0E1749(uParam0)) < (5f * 5f) || unk_0x32F9EB04315127B4(unk_0x77F050A399DB77ED(), unk_0x7A8C5CB92B41DAF1(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_98(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			if (!func_17(13) && !func_17(14))
			{
				if (!unk_0xAE5A4FE344CB20A9(uParam0->f_1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0xC60576ADD1AECA45(uParam1);
						while (!unk_0x4A4B6FD54C499B7D(uParam1))
						{
							unk_0xC60576ADD1AECA45(uParam1);
							unk_0x4EDE34FBADD967A6(0);
						}
						if (bParam3)
						{
							func_99(uParam0->f_3);
						}
						unk_0x0BA5964C07973FE9(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							unk_0x573691DB812DC8AA(&uVar0, 1);
							uParam0->f_1 = unk_0x224F6FCD2D1EABBD(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, uParam1);
						}
						else
						{
							unk_0x573691DB812DC8AA(&uVar0, 3);
							unk_0x573691DB812DC8AA(&uVar0, 4);
							unk_0x573691DB812DC8AA(&uVar0, 8);
							unk_0x573691DB812DC8AA(&uVar0, 1);
							uParam0->f_1 = unk_0x668D94B26744D7B2(iParam2, uParam0->f_3, uVar0, -1, 1, uParam1);
						}
						unk_0xFB4F6722A032A0F0(uParam1);
					}
				}
			}
			if (unk_0xAE5A4FE344CB20A9(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_99(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x9F8CC1CBF5965B17(Param0);
	if (unk_0x5C31634D1DECF73C(uVar0))
	{
		unk_0xB2BA6182A08E91DC(uVar0);
		while (!unk_0xE9F04AFCFBB82353(uVar0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x4EDE34FBADD967A6(0);
		unk_0xF421A11C54A70A96(uVar0);
	}
}

bool func_100(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_101(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_102()
{
	if (func_101(unk_0x77F050A399DB77ED()))
	{
		if (!unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED()))
		{
			func_117(0);
			func_68(0);
			unk_0xCBC9707F3BE3D5C2(5);
			func_6(2);
		}
		else
		{
			if (!func_109(15))
			{
				func_106("SUBM_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
				func_105(15);
			}
			if (!func_104())
			{
				func_117(1);
				if (!iLocal_389 && !Local_42.f_1.f_4 >= Local_42.f_1.f_3)
				{
					func_106("SUBM_TRKHELP", 1, 0, -1, 10000, 7, 0, 0, 0);
					iLocal_389 = 1;
				}
			}
			func_103();
			if (func_67(&Local_42, &Local_55))
			{
				func_28();
			}
		}
	}
}

void func_103()
{
	iLocal_390++;
	if ((iLocal_390 % 30) == 0 || iLocal_391 == -1)
	{
		if (func_11(&Local_42, &Local_55, unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), &iLocal_391))
		{
			func_8();
		}
	}
}

int func_104()
{
	if (unk_0xB1A77D5C890711F9(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x573691DB812DC8AA(&(Global_99250.f_24863.f_150[iVar1]), iVar0);
	}
}

void func_106(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_107(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_107(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35D1CAD6ADAB6491(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0x35D1CAD6ADAB6491(&(Global_99250.f_24863[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99250.f_24863.f_145 < 9)
	{
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_4), sParam1, 16);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_8 = (unk_0x3EAC9995EC220C5A() + iParam3);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_9 = iParam5;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_11 = iParam6;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_12 = uParam2;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_13 = iParam7;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_14 = iParam8;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = ((unk_0x3EAC9995EC220C5A() + iParam3) + iParam4);
		}
		else
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = -1;
		}
		Global_99250.f_24863.f_145++;
		func_108();
	}
}

void func_108()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_99250.f_24863.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[0])
			{
				Global_99250.f_24863.f_146[0] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[1])
			{
				Global_99250.f_24863.f_146[1] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[2])
			{
				Global_99250.f_24863.f_146[2] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_109(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_24863.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_110()
{
	iLocal_393 = 0;
	func_114();
	func_113(&Local_42, 3, joaat("prop_rad_waste_barrel_01"), "SUBM_COLLECT");
	func_111(&Local_42, joaat("num_hidden_packages_3"), 815, 30);
	if (func_101(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xB9AB7F678C818CF9(unk_0x77F050A399DB77ED()))
		{
			unk_0xCBC9707F3BE3D5C2(0);
			func_6(1);
		}
		else
		{
			unk_0xCBC9707F3BE3D5C2(5);
			func_6(2);
		}
	}
}

void func_111(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_112(&(uParam0->f_1), iParam2, iParam3);
}

void func_112(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_75((uParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_95(uParam0, iVar0, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_113(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_114()
{
	int iVar0;
	
	Local_55[0 /*11*/].f_3 = { func_10(0) };
	Local_55[0 /*11*/].f_9 = 179.47f;
	Local_55[1 /*11*/].f_3 = { func_10(1) };
	Local_55[1 /*11*/].f_9 = 104f;
	Local_55[2 /*11*/].f_3 = { func_10(2) };
	Local_55[2 /*11*/].f_9 = 321.5f;
	Local_55[3 /*11*/].f_3 = { func_10(3) };
	Local_55[3 /*11*/].f_9 = -29.79f;
	Local_55[4 /*11*/].f_3 = { func_10(4) };
	Local_55[4 /*11*/].f_9 = -165.6f;
	Local_55[5 /*11*/].f_3 = { func_10(5) };
	Local_55[5 /*11*/].f_9 = 116f;
	Local_55[6 /*11*/].f_3 = { func_10(6) };
	Local_55[6 /*11*/].f_9 = -68.65f;
	Local_55[7 /*11*/].f_3 = { func_10(7) };
	Local_55[7 /*11*/].f_9 = 40f;
	Local_55[8 /*11*/].f_3 = { func_10(8) };
	Local_55[8 /*11*/].f_9 = 40f;
	Local_55[9 /*11*/].f_3 = { func_10(9) };
	Local_55[9 /*11*/].f_9 = 40f;
	Local_55[10 /*11*/].f_3 = { func_10(10) };
	Local_55[10 /*11*/].f_9 = 40f;
	Local_55[11 /*11*/].f_3 = { func_10(11) };
	Local_55[11 /*11*/].f_9 = 27.04f;
	Local_55[12 /*11*/].f_3 = { func_10(12) };
	Local_55[12 /*11*/].f_9 = 40f;
	Local_55[13 /*11*/].f_3 = { func_10(13) };
	Local_55[13 /*11*/].f_9 = 40f;
	Local_55[14 /*11*/].f_3 = { func_10(14) };
	Local_55[14 /*11*/].f_9 = 40f;
	Local_55[15 /*11*/].f_3 = { func_10(15) };
	Local_55[15 /*11*/].f_9 = 40f;
	Local_55[16 /*11*/].f_3 = { func_10(16) };
	Local_55[16 /*11*/].f_6 = { 89.94f, 61.93f, 90.94f };
	Local_55[17 /*11*/].f_3 = { func_10(17) };
	Local_55[17 /*11*/].f_9 = 40f;
	Local_55[18 /*11*/].f_3 = { func_10(18) };
	Local_55[18 /*11*/].f_9 = 40f;
	Local_55[19 /*11*/].f_3 = { func_10(19) };
	Local_55[19 /*11*/].f_9 = 40f;
	Local_55[20 /*11*/].f_3 = { func_10(20) };
	Local_55[20 /*11*/].f_9 = 40f;
	Local_55[21 /*11*/].f_3 = { func_10(21) };
	Local_55[21 /*11*/].f_9 = 40f;
	Local_55[22 /*11*/].f_3 = { func_10(22) };
	Local_55[22 /*11*/].f_9 = 40f;
	Local_55[23 /*11*/].f_3 = { func_10(23) };
	Local_55[23 /*11*/].f_9 = 40f;
	Local_55[24 /*11*/].f_3 = { func_10(24) };
	Local_55[24 /*11*/].f_9 = 40f;
	Local_55[25 /*11*/].f_3 = { func_10(25) };
	Local_55[25 /*11*/].f_9 = 198f;
	Local_55[26 /*11*/].f_3 = { func_10(26) };
	Local_55[26 /*11*/].f_9 = 198f;
	Local_55[27 /*11*/].f_3 = { func_10(27) };
	Local_55[27 /*11*/].f_9 = 198f;
	Local_55[28 /*11*/].f_3 = { func_10(28) };
	Local_55[28 /*11*/].f_9 = 198f;
	Local_55[29 /*11*/].f_3 = { func_10(29) };
	Local_55[29 /*11*/].f_9 = -109.43f;
	func_115(&Local_55);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iLocal_395[iVar0] = -1;
		iVar0++;
	}
}

void func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*11*/])->f_10 = 0;
		iVar0++;
	}
}

bool func_116(var uParam0)
{
	if (!unk_0x1F2158D615BC4B25(uParam0))
	{
		return 0;
	}
	return !unk_0x0B6E83A9A7ED3EBA(uParam0);
}

void func_117(bool bParam0)
{
	if (bParam0)
	{
		Global_99250.f_12669.f_89 = 1;
	}
	else
	{
		Global_99250.f_12669.f_89 = 0;
	}
}

int func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xB56FEBC510E7E9DE(Global_99250.f_7703.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x573691DB812DC8AA(&(Global_99250.f_7703.f_99.f_219[iVar0]), iVar1);
	return 1;
}

void func_119()
{
	int iVar0;
	
	unk_0xCBC9707F3BE3D5C2(5);
	func_5();
	iVar0 = 0;
	while (iVar0 < Local_55.f_0)
	{
		func_96(&(Local_55[iVar0 /*11*/].f_2));
		func_86(&(Local_55[iVar0 /*11*/].f_1));
		if (iLocal_395[iVar0] >= 0 && iLocal_395[iVar0] < 8)
		{
			unk_0xF20795371060BD4F(iLocal_395[iVar0]);
		}
		iVar0++;
	}
	if (func_121(&(Local_42.f_1)))
	{
		func_120(13);
	}
	func_71();
	func_117(0);
	func_68(0);
	unk_0xFB4F6722A032A0F0(Local_42.f_7);
	unk_0x2F798BA2098FDADE();
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xB56FEBC510E7E9DE(Global_99250.f_7703.f_99.f_219[iVar0], iVar1))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_7703.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

bool func_121(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

