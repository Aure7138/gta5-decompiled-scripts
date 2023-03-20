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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	struct<8> Local_41 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	struct<11> Local_54[30];
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	int iLocal_394[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	bLocal_39 = true;
	bLocal_40 = true;
	iLocal_390 = -1;
	iLocal_391 = 5;
	if (unk_0x2C897F101BA20806(210))
	{
		func_119();
	}
	if (unk_0x16CDA1894CFE0781(joaat("ambient_sonar")) > 1)
	{
		unk_0x82706E6C897B0FA1();
	}
	func_118(13);
	func_117(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_116(unk_0xA16EC202D9D35357());
		switch (iLocal_387)
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
	iLocal_388 = 0;
	if (func_101(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if (func_67(&Local_41, &Local_54))
			{
				func_28();
			}
			else if (unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357()))
			{
				uLocal_385 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
				func_117(1);
				func_13(0);
				if (func_101(unk_0xA16EC202D9D35357()))
				{
					if (func_11(&Local_41, &Local_54, unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), &iLocal_390))
					{
						func_8();
					}
				}
				unk_0xCC68D69AF0F39112(0);
				func_7();
				func_6(1);
			}
			else if (func_101(uLocal_385))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xBF8499F46AD9093A(uLocal_385, 1)) > 62500f)
				{
					func_5();
				}
				else if (!unk_0x5660C8AFDD9C1721(uLocal_386))
				{
					uLocal_386 = func_2(uLocal_385, 0, 0);
					unk_0x2025496D9184D312(uLocal_386, 308);
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
	
	if (!unk_0x538DF9E5B1DF01EB(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xDF78B7F06503567E(uParam0);
	if (unk_0x9FF5D51C24AD2308(uParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_4(unk_0x1DAD7CE53BEE7710(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x060629C917E581A5(uVar0, bParam1);
		}
		else
		{
			unk_0x1AD45E3CF020D50D(uVar0, 2);
		}
	}
	else if (unk_0xA34B85701D8A1FA8(uParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_4(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
		unk_0x060629C917E581A5(uVar0, bParam1);
	}
	else if (unk_0x15CE956C279F4825(uParam0))
	{
		unk_0xBE97A5A41C1F5C4C(uVar0, func_4(unk_0x1DAD7CE53BEE7710(), 0.7f, 0.7f));
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
	if (unk_0x538DF9E5B1DF01EB(uLocal_385))
	{
		unk_0x3A3C5A6572B3C611(&uLocal_385);
	}
}

void func_6(int iParam0)
{
	iLocal_387 = iParam0;
}

void func_7()
{
	if (unk_0x5660C8AFDD9C1721(uLocal_386))
	{
		unk_0xB6FB9702660D84F6(&uLocal_386);
	}
}

void func_8()
{
	func_9(func_10(iLocal_390), 1, 1);
	iLocal_389 = 1;
}

void func_9(struct<3> Param0, bool bParam3, bool bParam4)
{
	Global_16799 = { Param0 };
	unk_0x29DB79DD4D939B38(&Global_2265, 30);
	if (bParam3)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 29);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2265, 29);
	}
	if (bParam4)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2266, 1);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2266, 1);
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
		return unk_0x889D01384B54BCE3(*uParam0, iParam1);
	}
	return unk_0x889D01384B54BCE3(uParam0->f_1, (iParam1 - 32));
}

int func_13(int iParam0)
{
	if (func_14(17, 0, 1, 0))
	{
		if (iParam0 == 1)
		{
			unk_0xD0E2BFCE93AE3ABD(&Global_2265, 22);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&Global_2265, 22);
		}
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_68325)
	{
		if (iParam0 != 17 && iParam0 != 3)
		{
			return 0;
		}
		if (!unk_0x889D01384B54BCE3(Global_2542626, 14))
		{
			if (iParam0 == 17)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_2542626, 14);
				unk_0xD0E2BFCE93AE3ABD(&Global_2542626, 16);
			}
			if (iParam0 == 3)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_2542626, 14);
				unk_0xD0E2BFCE93AE3ABD(&Global_2542626, 15);
			}
		}
		if (unk_0x16CDA1894CFE0781(Global_2271[iParam0 /*15*/].f_9) > 0)
		{
			unk_0x29DB79DD4D939B38(&Global_2542626, 14);
			unk_0x29DB79DD4D939B38(&Global_2542626, 16);
			unk_0x29DB79DD4D939B38(&Global_2542626, 15);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_22();
	if (Global_14394.f_1 == 9)
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
	if (Global_14360 == 1)
	{
		return 0;
	}
	if (Global_14394.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0xDECCEB462707CB3E(Global_14391))
	{
		if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14394.f_1 < 4)
			{
				func_20("cellphone_flashhand");
				if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) == 0)
				{
					Global_14391 = unk_0xE81651AD79516E48("cellphone_flashhand", 1424);
				}
				unk_0xF8FDF7446A3DA9B4("cellphone_flashhand");
			}
		}
	}
	while (!Global_14376)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_18();
	func_15();
	if (unk_0x16CDA1894CFE0781(Global_2271[iParam0 /*15*/].f_9) == 0)
	{
		Global_2870 = 0;
		Global_14394.f_1 = 7;
		func_20(&(Global_2271[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x16CDA1894CFE0781(Global_2271[iParam0 /*15*/].f_9) == 0)
			{
				Global_14392 = unk_0xE81651AD79516E48(&(Global_2271[iParam0 /*15*/].f_5), 3800);
			}
		}
		else if (unk_0x16CDA1894CFE0781(Global_2271[iParam0 /*15*/].f_9) == 0)
		{
			Global_14392 = unk_0xE81651AD79516E48(&(Global_2271[iParam0 /*15*/].f_5), 2552);
		}
		unk_0xF8FDF7446A3DA9B4(&(Global_2271[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_15()
{
	if (Global_68325 == 0)
	{
		Global_2271[14 /*15*/].f_4 = -99;
		Global_2271[4 /*15*/].f_4 = -99;
		if (Global_2435552)
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
	StringCopy(&(Global_2271[iParam0 /*15*/]), sParam1, 16);
	Global_2271[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2271[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2271[iParam0 /*15*/].f_9 = unk_0xB793F1A0B6CC4AE1(sParam3);
	Global_2271[iParam0 /*15*/].f_10 = iParam4;
	Global_2271[iParam0 /*15*/].f_11 = iParam5;
	Global_2271[iParam0 /*15*/].f_12 = iParam6;
	Global_2271[iParam0 /*15*/].f_13 = iParam7;
	Global_2271[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2271[iParam0 /*15*/].f_12 == 0)
	{
		Global_2271[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2271[iParam0 /*15*/].f_13 == 0)
	{
		Global_2271[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2271[iParam0 /*15*/].f_14 == 0)
	{
		Global_2271[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_17(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_18()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2271[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_68325 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 147)
		{
			if (Global_97439.f_29795[iVar2 /*29*/].f_19[Global_14394] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_34915 == 15 && func_19(0) == 0) && Global_2269 == 0)
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14555 = 0;
			Global_2270 = 255;
		}
		else
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14555 = 1;
			Global_2270 = 42;
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
		if (Global_97439.f_12305.f_89 == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_97439.f_12305.f_88 == 1)
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
		if (unk_0x889D01384B54BCE3(Global_2542626, 4) == 1)
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
		if (!unk_0x889D01384B54BCE3(Global_2542626, 4) == 1)
		{
			if (Global_1573285)
			{
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
		}
	}
}

bool func_19(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

void func_20(char* sParam0)
{
	unk_0x19DD85EFF70867D4(sParam0);
	while (!unk_0x3EBB3CB89FC2CE55(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_21(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_22()
{
	if (func_17(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_23();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_23()
{
	func_24();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_24()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_27(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_26(unk_0xA16EC202D9D35357());
			if (func_25(iVar0) && (!func_17(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_25(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(uParam0);
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
		return Global_97439.f_29795[iParam0 /*29*/];
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
	Global_2408985[iVar0 /*83*/] = 65;
	StringCopy(&(Global_2408985[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2408985[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2408985[iVar1 /*83*/] == 0)
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
	if (unk_0xA7311613D452D616(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24692 != 0 && !Global_68325)
	{
		return 0;
	}
	if (func_42(&Global_2542838))
	{
		if (func_40(&Global_2542838, iParam0))
		{
			return 0;
		}
		if (func_33(&Global_2542838, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6100B0637DF2BBCA(iParam0))
		{
			return 0;
		}
		if (unk_0xA7311613D452D616(iParam0))
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
	
	if (unk_0xA7311613D452D616(iParam1))
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
	
	if (unk_0xA7311613D452D616(iParam1))
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
	func_38(uParam0, (Global_2542837 - 0.5f));
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
	if (Global_97439.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97439.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97439.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97439.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97439.f_8448[iParam0 /*12*/].f_10 = iParam1;
		Global_97439.f_8448[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_97175 = 0;
	Global_97176 = 0;
	Global_97177 = 0;
	Global_97178 = 0;
	Global_97179 = 0;
	Global_97180 = 0;
	Global_97181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97439.f_8448.f_3853;
	Global_97439.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97439.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97439.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97175++;
					fVar1 = (fVar1 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97176++;
					fVar2 = (fVar2 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97177++;
					fVar3 = (fVar3 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97178++;
					fVar4 = (fVar4 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97179++;
					fVar5 = (fVar5 + (Global_97439.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97180++;
					fVar6 = (fVar6 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97181++;
					fVar7 = (fVar7 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97158 > 0)
	{
		if (Global_97175 == Global_97158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97159 > 0)
	{
		if (Global_97176 == Global_97159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97160 > 0)
	{
		if (Global_97177 == Global_97160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97161 > 0)
	{
		if (Global_97178 == Global_97161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97162 > 0)
	{
		if (((Global_97179 == Global_97162 || (Global_97162 * 10 / Global_97179) < 41) || Global_97179 > Global_97165) || Global_97179 == Global_97165)
		{
			if (!unk_0x889D01384B54BCE3(Global_97439.f_8448.f_3856, 14))
			{
				if (Global_97179 == Global_97162)
				{
					unk_0xC655DD24DA1F5D9D(joaat("num_rndevents_completed"), Global_97162, 0);
					unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97163 > 0)
	{
		if (Global_97180 == Global_97163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97164 > 0)
	{
		if (Global_97181 == Global_97164)
		{
			fVar7 = 5f;
		}
	}
	Global_97439.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97179 > Global_97165 || Global_97179 == Global_97165)
	{
		iVar9 = Global_97165;
	}
	else
	{
		iVar9 = Global_97179;
	}
	unk_0x680350124CC21957(joaat("num_missions_completed"), Global_97175, 1);
	unk_0x680350124CC21957(joaat("num_missions_available"), Global_97158, 1);
	unk_0x680350124CC21957(joaat("num_minigames_completed"), Global_97176, 1);
	unk_0x680350124CC21957(joaat("num_minigames_available"), Global_97159, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_completed"), Global_97177, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_available"), Global_97160, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_completed"), Global_97178, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_available"), Global_97161, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_available"), Global_97165, 1);
	unk_0x680350124CC21957(joaat("num_misc_completed"), (Global_97181 + Global_97180), 1);
	unk_0x680350124CC21957(joaat("num_misc_available"), (Global_97164 + Global_97163), 1);
	Global_97182 = (Global_97175 * 100 / Global_97158);
	Global_97184 = ((Global_97177 + Global_97176) * 100 / (Global_97160 + Global_97159));
	Global_97183 = ((Global_97178 + iVar9) * 100 / (Global_97161 + Global_97165));
	Global_97185 = ((Global_97180 + Global_97181) * 100 / (Global_97163 + Global_97164));
	unk_0x17B4C1DC107FE8D1(joaat("total_progress_made"), Global_97439.f_8448.f_3853, 1);
	unk_0x680350124CC21957(joaat("percent_story_missions"), Global_97182, 1);
	unk_0x680350124CC21957(joaat("percent_ambient_missions"), Global_97183, 1);
	unk_0x680350124CC21957(joaat("percent_oddjobs"), Global_97184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853))
	{
		func_48(13, unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853));
	}
	if (!unk_0x0DA6B7D4A76F5536())
	{
		if (!Global_68325)
		{
			if (func_47() == 2 == 0 && !unk_0x1DAD7CE53BEE7710())
			{
				if (unk_0xECA1708601B2AF8E())
				{
					Global_97173 = 0;
				}
				if (!Global_54758)
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
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

int func_47()
{
	return Global_24446;
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
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_50();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(iVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_50()
{
	return Global_1312729;
}

void func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	func_53(Global_97439.f_28101[iParam0 /*4*/], func_66(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_97439.f_28101.f_69 = (Global_97439.f_28101.f_69 + iParam1);
			break;
		
		case 2:
			Global_97439.f_28101.f_70 = (Global_97439.f_28101.f_70 + iParam1);
			break;
		
		case 0:
			Global_97439.f_28101.f_71 = (Global_97439.f_28101.f_71 + iParam1);
			break;
	}
	unk_0x3ED04C9A60CBD249(func_52(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(func_52(iParam0, 1), iVar0, 1);
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
	
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97439.f_29795[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_54(Global_97439.f_29795[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x3ED04C9A60CBD249(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x680350124CC21957(iVar1, iVar0, 1);
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
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
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
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
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
					switch (unk_0x9C2B33434756C8A2())
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
	iVar5 = (Global_51933[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51933[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51933[iVar2] = 2147483647;
				}
				else
				{
					Global_51933[iVar2] = (Global_51933[iVar2] + iParam3);
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
				if ((Global_51933[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51933[iVar2];
			Global_51933[iVar2] = (Global_51933[iVar2] - iParam3);
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
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_2[Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97439.f_23789.f_233[iVar2 /*69*/]++;
		Global_97439.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97439.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_56(iParam0);
	if (Global_34915 == 15)
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
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97439.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51941[iVar0 /*3*/][0] = Global_97439.f_23789[iVar0];
		Global_51941.f_31[iVar0 /*3*/][0] = Global_97439.f_23789.f_11[iVar0];
		Global_51941.f_62[iVar0 /*3*/][0] = Global_97439.f_23789.f_22[iVar0];
		Global_51941.f_93[iVar0 /*3*/][0] = Global_97439.f_23789.f_33[iVar0];
		Global_51941.f_124[iVar0 /*3*/][0] = Global_97439.f_23789.f_44[iVar0];
		Global_51941.f_155[iVar0 /*3*/][0] = Global_97439.f_23789.f_55[iVar0];
		Global_51941.f_186[iVar0 /*3*/][0] = Global_97439.f_23789.f_66[iVar0];
		Global_51941.f_217[iVar0 /*3*/][0] = Global_97439.f_23789.f_77[iVar0];
		Global_51941.f_248[iVar0 /*3*/][0] = Global_97439.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51941[iVar0 /*3*/][1] = Global_97439.f_23789[iVar0];
			Global_51941.f_31[iVar0 /*3*/][1] = Global_97439.f_23789.f_11[iVar0];
			Global_51941.f_62[iVar0 /*3*/][1] = Global_97439.f_23789.f_22[iVar0];
			Global_51941.f_93[iVar0 /*3*/][1] = Global_97439.f_23789.f_33[iVar0];
			Global_51941.f_124[iVar0 /*3*/][1] = Global_97439.f_23789.f_44[iVar0];
			Global_51941.f_155[iVar0 /*3*/][1] = Global_97439.f_23789.f_55[iVar0];
			Global_51941.f_186[iVar0 /*3*/][1] = Global_97439.f_23789.f_66[iVar0];
			Global_51941.f_217[iVar0 /*3*/][1] = Global_97439.f_23789.f_77[iVar0];
			Global_51941.f_248[iVar0 /*3*/][1] = Global_97439.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51933[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x680350124CC21957(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x680350124CC21957(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x680350124CC21957(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_57(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0) || unk_0x889D01384B54BCE3(Global_2097152[func_59() /*8064*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x29DB79DD4D939B38(&(Global_97439.f_23789.f_471), iParam0);
		unk_0x29DB79DD4D939B38(&(Global_2097152[func_59() /*8064*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xA6CE1BB0BF7AE715("COUP_RED");
		unk_0x4498E0CBD76B2D72(func_58(iParam0));
		unk_0xB2BB3F163B7B2B4C(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return unk_0x889D01384B54BCE3(Global_97439.f_23789.f_471, iParam0);
	}
	return unk_0x889D01384B54BCE3(Global_2097152[func_59() /*8064*/].f_5756.f_10, iParam0);
}

int func_62(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xA7311613D452D616(27))
	{
		return 0;
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x3ED04C9A60CBD249(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x3ED04C9A60CBD249(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x680350124CC21957(joaat("num_cash_spent"), iVar1, 1);
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
	
	unk_0x3ED04C9A60CBD249(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(iParam0, iVar0, 1);
}

void func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/])
	{
		unk_0x3ED04C9A60CBD249(Global_50501[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x680350124CC21957(Global_50501[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_65()
{
	int iVar0;
	
	if (unk_0x6B7032CA494CCEE4())
	{
		unk_0x3ED04C9A60CBD249(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51933[0] == iVar0)
		{
			Global_51933[0] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51933[1] == iVar0)
		{
			Global_51933[1] = iVar0;
		}
		unk_0x3ED04C9A60CBD249(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51933[2] == iVar0)
		{
			Global_51933[2] = iVar0;
		}
	}
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 97;
			break;
		
		case 1:
			return 98;
			break;
		
		case 2:
			return 99;
			break;
		
		case 3:
			return 100;
			break;
		
		case 4:
			return 101;
			break;
		
		case 5:
			return 102;
			break;
		
		case 6:
			return 103;
			break;
		
		case 7:
			return 104;
			break;
		
		case 8:
			return 105;
			break;
		
		case 9:
			return 106;
			break;
		
		case 10:
			return 107;
			break;
		
		case 11:
			return 108;
			break;
		
		case 12:
			return 109;
			break;
		
		case 13:
			return 110;
			break;
		
		case 14:
			return 111;
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
	
	unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357());
	Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
	iVar0 = 0;
	while (iVar0 < iLocal_391)
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
				if (func_11(uParam0, iParam1, Var1, &iLocal_390))
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
	if (!Global_68585)
	{
		func_72(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 3, &iLocal_392, &uLocal_393, "SUBM_TITLE", "SUBM_COLLECT");
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
	if (Global_14552)
	{
		func_70(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
	}
	if (!func_69())
	{
		Global_14394.f_1 = 3;
	}
}

int func_69()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
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
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

void func_71()
{
	unk_0xD0E2BFCE93AE3ABD(&Global_2265, 30);
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
				*uParam5 = unk_0x36ECDA4DD9A3F08D("MIDSIZED_MESSAGE");
				if (unk_0xC8378A96673BCC40(*uParam5))
				{
					uVar0 = unk_0x74F076F396F8C361();
					if (iParam3 == 6)
					{
						unk_0xC2E1777941B4536E(uVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0xC2E1777941B4536E(uVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0xB067107D878E9585(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0xEBC0B3BDAD1250BE(sParam6);
				unk_0x9F94C7B5E8C04AB3();
				unk_0xEBC0B3BDAD1250BE(sParam7);
				unk_0x53B64327E3305DCB(func_74(iParam3));
				unk_0x9F94C7B5E8C04AB3();
				unk_0xD3DF251F2DF3B257();
				*uParam2 = unk_0x09560C7DE2A384BD();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0x09560C7DE2A384BD() - *uParam2) > 7000)
				{
					unk_0xB067107D878E9585(*uParam5, "SHARD_ANIM_OUT");
					unk_0x26221D1D76579618(1);
					unk_0x50050D925C27B388(0.33f);
					unk_0xD3DF251F2DF3B257();
					*iParam4++;
				}
				else if (!func_73())
				{
					if (unk_0xC8378A96673BCC40(*uParam5))
					{
						func_81(1);
						unk_0x27BDF28219C810BA(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x09560C7DE2A384BD() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_73())
				{
					if (unk_0xC8378A96673BCC40(*uParam5))
					{
						func_81(1);
						unk_0x27BDF28219C810BA(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0xC8378A96673BCC40(*uParam5))
				{
					unk_0x7559DFAB61B017F2(uParam5);
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
	if (Global_68585)
	{
		return 1;
	}
	else if (Global_54752 && !Global_54758)
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
			if (unk_0x889D01384B54BCE3(Global_97439.f_8303.f_108, func_79(func_80(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0x3ED04C9A60CBD249(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0x3ED04C9A60CBD249(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0x3ED04C9A60CBD249(joaat("num_hidden_packages_6"), &iVar0, -1);
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
		iVar0 = unk_0xA39E60B30250C306(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
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
		iVar0 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
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
	if (Global_68592 != iParam0)
	{
		Global_68592 = iParam0;
	}
}

void func_82(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_84(iParam0) == 0)
	{
		return;
	}
	if (iLocal_394[iParam0] == -1)
	{
		if (!bParam1 && !unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_54[iParam0 /*11*/].f_3) < (100f * 100f))
			{
				if (func_83(&iVar0))
				{
					unk_0x8EB06D2F3E83FCA0(iVar0, Local_54[iParam0 /*11*/].f_3, 8f);
					iLocal_394[iParam0] = iVar0;
				}
			}
		}
	}
	else if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), Local_54[iParam0 /*11*/].f_3) > (105f * 105f))
		{
			if (iLocal_394[iParam0] >= 0 && iLocal_394[iParam0] < 8)
			{
				unk_0x1D4FBA756E74ACBE(iLocal_394[iParam0]);
				iLocal_394[iParam0] = -1;
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
		if (!unk_0x1ED2BE9139A8E97F(*uParam0))
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
			if (unk_0x3FCA2F27F738473E((uParam1[iVar0 /*11*/])->f_1) || func_97((uParam1[iVar0 /*11*/])->f_1))
			{
				func_87(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (unk_0x27C40BD761A1E76F((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((unk_0xB7A628320EFF8E47(Param2, unk_0xA3B3632D39761B55((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_17(13)) || func_17(14))
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
	if (unk_0x27C40BD761A1E76F(*uParam0))
	{
		unk_0x4B96753E257A5CA4(*uParam0);
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
	unk_0x2E4D6907625CDD23(0, 200, 250);
	unk_0x2FCA9E6E26A3EE86(uParam0->f_6, 1f);
	if (bLocal_40)
	{
		func_93(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_91(&(uParam0->f_1));
	}
	func_89();
	unk_0x40135AADB7A3295F(iVar0);
	func_88(1, 0);
	func_46();
	uParam0->f_11 = 1;
}

void func_88(int iParam0, int iParam1)
{
	Global_90081.f_7 = iParam0;
	Global_90081.f_8 = iParam1;
}

void func_89()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0x3ED04C9A60CBD249(func_90(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_48(18, iVar0);
	}
	unk_0x3ED04C9A60CBD249(func_90(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_48(19, iVar0);
	}
	unk_0x3ED04C9A60CBD249(func_90(3), &iVar0, -1);
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
	unk_0x680350124CC21957(joaat("percent_hidden_packages"), iVar3, 1);
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
	if (bLocal_39)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_12(uParam0, iVar0))
		{
			iVar1++;
			func_49((uParam0->f_2 + iVar0), 1, -1, 1);
			if (bLocal_39)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_39)
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
	Global_97439.f_6869[iParam0] = 1;
	Global_97439.f_6869.f_236[iParam0] = (unk_0x09560C7DE2A384BD() + iParam1);
}

void func_93(var uParam0, int iParam1)
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_39)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_12(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_49((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_39)
		{
		}
	}
	if (bLocal_39)
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
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8303.f_122), iParam1);
			}
			else
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_8303.f_122), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8303.f_122.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(Global_97439.f_8303.f_122.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8303.f_125), iParam1);
			}
			else
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_8303.f_125), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8303.f_125.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(Global_97439.f_8303.f_125.f_1), (iParam1 - 32));
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
			unk_0xD0E2BFCE93AE3ABD(uParam0, iParam1);
		}
		else
		{
			unk_0x29DB79DD4D939B38(uParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_1), (iParam1 - 32));
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(uParam0->f_1), (iParam1 - 32));
	}
}

void func_96(var uParam0)
{
	if (unk_0x5660C8AFDD9C1721(*uParam0))
	{
		unk_0xF1D09F0F8B016765(*uParam0, 0);
		unk_0xB6FB9702660D84F6(uParam0);
	}
}

int func_97(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x27C40BD761A1E76F(uParam0))
	{
		return 0;
	}
	if (func_101(unk_0xA16EC202D9D35357()))
	{
		if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
		{
			uVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
			iVar1 = unk_0xA609E58449080951(uVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), unk_0xA3B3632D39761B55(uParam0)) < (5f * 5f) || unk_0x59C8BF753F6A2D1C(unk_0xA16EC202D9D35357(), unk_0xA90CC6CAE171948F(uParam0)))
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
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			if (!func_17(13) && !func_17(14))
			{
				if (!unk_0x27C40BD761A1E76F(uParam0->f_1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x939DA7EBCC6588FF(uParam1);
						while (!unk_0x5494F37F35C1D7D7(uParam1))
						{
							unk_0x939DA7EBCC6588FF(uParam1);
							unk_0x4EDE34FBADD967A6(0);
						}
						if (bParam3)
						{
							func_99(uParam0->f_3);
						}
						unk_0x84710FE7666EBF7B(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							unk_0xD0E2BFCE93AE3ABD(&uVar0, 1);
							uParam0->f_1 = unk_0x82212519219FCCB5(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, uParam1);
						}
						else
						{
							unk_0xD0E2BFCE93AE3ABD(&uVar0, 3);
							unk_0xD0E2BFCE93AE3ABD(&uVar0, 4);
							unk_0xD0E2BFCE93AE3ABD(&uVar0, 8);
							unk_0xD0E2BFCE93AE3ABD(&uVar0, 1);
							uParam0->f_1 = unk_0xE3FFBBF0B5D956E4(iParam2, uParam0->f_3, uVar0, -1, 1, uParam1);
						}
						unk_0xEA054561294AEC10(uParam1);
					}
				}
			}
			if (unk_0x27C40BD761A1E76F(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_99(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0xE60DDD7D0864392E(Param0);
	if (unk_0xF7037F2CC07D58B0(uVar0))
	{
		unk_0xA17109B5C97ADD34(uVar0);
		while (!unk_0x02E23868217F22CC(uVar0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x4EDE34FBADD967A6(0);
		unk_0xDB1DF8A68B9A5A9D(uVar0);
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
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0xE44A580B551C3645(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_102()
{
	if (func_101(unk_0xA16EC202D9D35357()))
	{
		if (!unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357()))
		{
			func_117(0);
			func_68(0);
			unk_0xCC68D69AF0F39112(5);
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
				if (!iLocal_388 && !Local_41.f_1.f_4 >= Local_41.f_1.f_3)
				{
					func_106("SUBM_TRKHELP", 1, 0, -1, 10000, 7, 0, 0, 0);
					iLocal_388 = 1;
				}
			}
			func_103();
			if (func_67(&Local_41, &Local_54))
			{
				func_28();
			}
		}
	}
}

void func_103()
{
	iLocal_389++;
	if ((iLocal_389 % 30) == 0 || iLocal_390 == -1)
	{
		if (func_11(&Local_41, &Local_54, unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1), &iLocal_390))
		{
			func_8();
		}
	}
}

int func_104()
{
	if (unk_0x16CDA1894CFE0781(joaat("apptrackify")) > 0)
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
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_106(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_107(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_107(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9BA82E09A986BA4B(sParam0, ""))
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
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x9BA82E09A986BA4B(&(Global_97439.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97439.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_8 = (unk_0x09560C7DE2A384BD() + iParam3);
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = ((unk_0x09560C7DE2A384BD() + iParam3) + iParam4);
		}
		else
		{
			Global_97439.f_23635[Global_97439.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97439.f_23635.f_145++;
		func_108();
	}
}

void func_108()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97439.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_23635.f_145)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[0])
			{
				Global_97439.f_23635.f_146[0] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[1])
			{
				Global_97439.f_23635.f_146[1] = Global_97439.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x889D01384B54BCE3(Global_97439.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97439.f_23635[iVar0 /*16*/].f_12 > Global_97439.f_23635.f_146[2])
			{
				Global_97439.f_23635.f_146[2] = Global_97439.f_23635[iVar0 /*16*/].f_12;
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
		return unk_0x889D01384B54BCE3(Global_97439.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_110()
{
	iLocal_392 = 0;
	func_114();
	func_113(&Local_41, 3, joaat("prop_rad_waste_barrel_01"), "SUBM_COLLECT");
	func_111(&Local_41, joaat("num_hidden_packages_3"), 815, 30);
	if (func_101(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xB5C0F48F16130EA9(unk_0xA16EC202D9D35357()))
		{
			unk_0xCC68D69AF0F39112(0);
			func_6(1);
		}
		else
		{
			unk_0xCC68D69AF0F39112(5);
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
	if (bLocal_39)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_75((uParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_95(uParam0, iVar0, 1);
			if (bLocal_39)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_39)
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
	
	Local_54[0 /*11*/].f_3 = { func_10(0) };
	Local_54[0 /*11*/].f_9 = 179.47f;
	Local_54[1 /*11*/].f_3 = { func_10(1) };
	Local_54[1 /*11*/].f_9 = 104f;
	Local_54[2 /*11*/].f_3 = { func_10(2) };
	Local_54[2 /*11*/].f_9 = 321.5f;
	Local_54[3 /*11*/].f_3 = { func_10(3) };
	Local_54[3 /*11*/].f_9 = -29.79f;
	Local_54[4 /*11*/].f_3 = { func_10(4) };
	Local_54[4 /*11*/].f_9 = -165.6f;
	Local_54[5 /*11*/].f_3 = { func_10(5) };
	Local_54[5 /*11*/].f_9 = 116f;
	Local_54[6 /*11*/].f_3 = { func_10(6) };
	Local_54[6 /*11*/].f_9 = -68.65f;
	Local_54[7 /*11*/].f_3 = { func_10(7) };
	Local_54[7 /*11*/].f_9 = 40f;
	Local_54[8 /*11*/].f_3 = { func_10(8) };
	Local_54[8 /*11*/].f_9 = 40f;
	Local_54[9 /*11*/].f_3 = { func_10(9) };
	Local_54[9 /*11*/].f_9 = 40f;
	Local_54[10 /*11*/].f_3 = { func_10(10) };
	Local_54[10 /*11*/].f_9 = 40f;
	Local_54[11 /*11*/].f_3 = { func_10(11) };
	Local_54[11 /*11*/].f_9 = 27.04f;
	Local_54[12 /*11*/].f_3 = { func_10(12) };
	Local_54[12 /*11*/].f_9 = 40f;
	Local_54[13 /*11*/].f_3 = { func_10(13) };
	Local_54[13 /*11*/].f_9 = 40f;
	Local_54[14 /*11*/].f_3 = { func_10(14) };
	Local_54[14 /*11*/].f_9 = 40f;
	Local_54[15 /*11*/].f_3 = { func_10(15) };
	Local_54[15 /*11*/].f_9 = 40f;
	Local_54[16 /*11*/].f_3 = { func_10(16) };
	Local_54[16 /*11*/].f_6 = { 89.94f, 61.93f, 90.94f };
	Local_54[17 /*11*/].f_3 = { func_10(17) };
	Local_54[17 /*11*/].f_9 = 40f;
	Local_54[18 /*11*/].f_3 = { func_10(18) };
	Local_54[18 /*11*/].f_9 = 40f;
	Local_54[19 /*11*/].f_3 = { func_10(19) };
	Local_54[19 /*11*/].f_9 = 40f;
	Local_54[20 /*11*/].f_3 = { func_10(20) };
	Local_54[20 /*11*/].f_9 = 40f;
	Local_54[21 /*11*/].f_3 = { func_10(21) };
	Local_54[21 /*11*/].f_9 = 40f;
	Local_54[22 /*11*/].f_3 = { func_10(22) };
	Local_54[22 /*11*/].f_9 = 40f;
	Local_54[23 /*11*/].f_3 = { func_10(23) };
	Local_54[23 /*11*/].f_9 = 40f;
	Local_54[24 /*11*/].f_3 = { func_10(24) };
	Local_54[24 /*11*/].f_9 = 40f;
	Local_54[25 /*11*/].f_3 = { func_10(25) };
	Local_54[25 /*11*/].f_9 = 198f;
	Local_54[26 /*11*/].f_3 = { func_10(26) };
	Local_54[26 /*11*/].f_9 = 198f;
	Local_54[27 /*11*/].f_3 = { func_10(27) };
	Local_54[27 /*11*/].f_9 = 198f;
	Local_54[28 /*11*/].f_3 = { func_10(28) };
	Local_54[28 /*11*/].f_9 = 198f;
	Local_54[29 /*11*/].f_3 = { func_10(29) };
	Local_54[29 /*11*/].f_9 = -109.43f;
	func_115(&Local_54);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iLocal_394[iVar0] = -1;
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
	if (!unk_0x538DF9E5B1DF01EB(uParam0))
	{
		return 0;
	}
	return !unk_0xE44A580B551C3645(uParam0);
}

void func_117(bool bParam0)
{
	if (bParam0)
	{
		Global_97439.f_12305.f_89 = 1;
	}
	else
	{
		Global_97439.f_12305.f_89 = 0;
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
	if (unk_0x889D01384B54BCE3(Global_97439.f_7341.f_99.f_217[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_7341.f_99.f_217[iVar0]), iVar1);
	return 1;
}

void func_119()
{
	int iVar0;
	
	unk_0xCC68D69AF0F39112(5);
	func_5();
	iVar0 = 0;
	while (iVar0 < Local_54.f_0)
	{
		func_96(&(Local_54[iVar0 /*11*/].f_2));
		func_86(&(Local_54[iVar0 /*11*/].f_1));
		if (iLocal_394[iVar0] >= 0 && iLocal_394[iVar0] < 8)
		{
			unk_0x1D4FBA756E74ACBE(iLocal_394[iVar0]);
		}
		iVar0++;
	}
	if (func_121(&(Local_41.f_1)))
	{
		func_120(13);
	}
	func_71();
	func_117(0);
	func_68(0);
	unk_0xEA054561294AEC10(Local_41.f_7);
	unk_0x82706E6C897B0FA1();
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
	if (unk_0x889D01384B54BCE3(Global_97439.f_7341.f_99.f_217[iVar0], iVar1))
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_7341.f_99.f_217[iVar0]), iVar1);
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

