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
	int iLocal_20[94] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120[5] = { 0, 0, 0, 0, 0 };
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	var uLocal_129 = 0;
	bool bLocal_130 = 0;
	struct<6> Local_131[5];
	int iLocal_162[5] = { 0, 0, 0, 0, 0 };
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
	unk_0xBD9A2AF38E96A0ED();
	func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_31();
	func_30();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					func_25();
					if (iLocal_119 == 0)
					{
						func_15();
					}
					break;
				
				case 8:
					if (iLocal_119 == 2)
					{
						func_25();
						if (bLocal_130)
						{
							func_10();
						}
					}
					if (iLocal_119 == 1)
					{
						func_25();
					}
					if (func_9(2, Global_14381, 0))
					{
						func_8();
						Global_14391 = 1;
						if (iLocal_119 == 2 || iLocal_119 == 1)
						{
							func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_30();
							if (Global_14413.f_1 > 3)
							{
								Global_14413.f_1 = 7;
							}
						}
						if (iLocal_119 == 3)
						{
							func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_4();
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
	unk_0x52F20802944F8DCE();
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
	int iVar0;
	int iVar1;
	int iVar2;
	
	bLocal_130 = false;
	func_31();
	iLocal_115 = 0;
	func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	if (Global_14409 == 0)
	{
		while (iVar0 < 5)
		{
			func_7(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(iLocal_115), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Local_131[iVar0 /*6*/]), 0, 0, 0, 0);
			iLocal_120[iLocal_115] = iVar0;
			iLocal_115++;
			iVar0++;
		}
	}
	if (Global_14409 == 1)
	{
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 5)
		{
			iLocal_162[iVar2] = 0;
			iVar2++;
		}
		iVar1 = (5 - 1);
		while (iVar0 < 5)
		{
			if (Local_131[iVar1 /*6*/].f_5 > 0)
			{
				if (iLocal_162[iVar1] == 0)
				{
					func_7(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(iLocal_115), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Local_131[iVar1 /*6*/]), 0, 0, 0, 0);
					iLocal_120[iLocal_115] = iVar1;
					iLocal_115++;
					iLocal_162[iVar1] = 1;
				}
			}
			if (iVar1 > 0)
			{
				iVar1 = (iVar1 - 1);
			}
			iVar0++;
		}
	}
	if (iLocal_115 == 0)
	{
		func_7(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_3092", 0, 0, 0, 0);
	}
	else
	{
		bLocal_130 = true;
	}
	func_33(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14394, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_14401)
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
		unk_0x9956FB0E4B50ECB8(&Global_2283, 17);
	}
	else
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x9956FB0E4B50ECB8(&Global_2283, 17);
	}
	iLocal_119 = 2;
}

void func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	func_6(sParam2);
	if (!unk_0xF6917DE0E003509D(iParam3))
	{
		func_6(iParam3);
	}
	if (!unk_0xF6917DE0E003509D(iParam4))
	{
		func_6(iParam4);
	}
	if (!unk_0xF6917DE0E003509D(iParam5))
	{
		func_6(iParam5);
	}
	if (!unk_0xF6917DE0E003509D(iParam6))
	{
		func_6(iParam6);
	}
	unk_0xFF141057ED7B4C73();
}

void func_6(char* sParam0)
{
	unk_0x33D37B75FC2BCC8C(uParam0);
	unk_0x057886C01DDC535D();
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xF6917DE0E003509D(sParam7))
	{
		func_6(sParam7);
	}
	if (!unk_0xF6917DE0E003509D(iParam8))
	{
		func_6(iParam8);
	}
	if (!unk_0xF6917DE0E003509D(iParam9))
	{
		func_6(iParam9);
	}
	if (!unk_0xF6917DE0E003509D(iParam10))
	{
		func_6(iParam10);
	}
	if (!unk_0xF6917DE0E003509D(iParam11))
	{
		func_6(iParam11);
	}
	unk_0xFF141057ED7B4C73();
}

void func_8()
{
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xCC18B241D266EF14(-1, "Menu_Back", &Global_14402, 1);
	}
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x958B4351DD28B142(iParam0, iParam1) || (iParam2 == 1 && unk_0x28BB6250B86A5CA5(iParam0, iParam1)))
	{
		if (unk_0xA78EA29AC2FFBADE())
		{
			if (unk_0x4C0203C9C5CF4108() == 0 || (unk_0x29C4AA4F29B1E539() && unk_0x7EDB1AFBE755EC7A(2)))
			{
				return 0;
			}
		}
		if (unk_0xA57007F9A665F322() || unk_0xA42A6C736BEA9778())
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

void func_10()
{
	int iVar0;
	
	if (Global_14391 == 0)
	{
		if (func_9(2, Global_14382, 0))
		{
			func_12();
			Global_14391 = 1;
			unk_0xA4F3B84032D46C13(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_129 = unk_0x96E794F94B35432F();
			while (!unk_0x4B2BEE3B1540A0A3(uLocal_129))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iVar0 = unk_0x9FF96E17DE53C966(uLocal_129);
			iLocal_117 = iLocal_120[iVar0];
			if (Global_14413.f_1 > 3)
			{
				Global_14413.f_1 = 8;
			}
			func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (iLocal_117 == 1)
			{
			}
			func_11();
			unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
			unk_0x43C93E686A1E92C5(18);
			unk_0x43C93E686A1E92C5(0);
			unk_0x43C93E686A1E92C5(0);
			unk_0x33D37B75FC2BCC8C("CELL_3206");
			unk_0x8D23CF083336DA9B(iLocal_126);
			unk_0x057886C01DDC535D();
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(Global_14394, "SET_DATA_SLOT");
			unk_0x43C93E686A1E92C5(18);
			unk_0x43C93E686A1E92C5(1);
			unk_0x43C93E686A1E92C5(0);
			unk_0x33D37B75FC2BCC8C("CELL_3101");
			unk_0x8D23CF083336DA9B(iLocal_127);
			unk_0x057886C01DDC535D();
			unk_0xFF141057ED7B4C73();
			func_33(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_5(Global_14394, "SET_HEADER", &(Local_131[iLocal_117 /*6*/]), 0, 0, 0, 0);
			func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x73817D396768E4C6(&Global_2283, 17);
			if (Global_14401)
			{
				func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			iLocal_119 = 3;
		}
	}
}

void func_11()
{
	switch (iLocal_117)
	{
		case 0:
			iLocal_126 = Global_98874;
			iLocal_127 = Global_98891;
			break;
		
		case 1:
			iLocal_126 = (Global_98875 + Global_98876);
			iLocal_127 = (Global_98892 + Global_98893);
			break;
		
		case 2:
			iLocal_126 = Global_98877;
			iLocal_127 = Global_98894;
			break;
		
		case 3:
			iLocal_126 = Global_98878;
			iLocal_127 = Global_98895;
			break;
		
		case 4:
			iLocal_126 = (Global_98879 + Global_98880);
			iLocal_127 = (Global_98896 + Global_98897);
			break;
		
		default:
			iLocal_126 = 0;
			iLocal_127 = 0;
			break;
	}
}

void func_12()
{
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xCC18B241D266EF14(-1, "Menu_Accept", &Global_14402, 1);
		func_13();
	}
}

void func_13()
{
	if (func_14())
	{
		unk_0xEDC530BAFD80E449(5);
	}
}

int func_14()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69236)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x5B93518F6779B7F5();
	iVar1 = unk_0x08EE17D4722097C7(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_2558798 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_15()
{
	if (Global_14391 == 0)
	{
		if (func_9(2, Global_14382, 0))
		{
			func_12();
			Global_14391 = 1;
			unk_0xA4F3B84032D46C13(Global_14394, "GET_CURRENT_SELECTION");
			uLocal_129 = unk_0x96E794F94B35432F();
			while (!unk_0x4B2BEE3B1540A0A3(uLocal_129))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_128 = unk_0x9FF96E17DE53C966(uLocal_129);
			if (Global_14413.f_1 > 3)
			{
				Global_14413.f_1 = 8;
				if (iLocal_128 == 0)
				{
					iLocal_119 = 1;
					func_16();
				}
				else
				{
					iLocal_119 = 2;
					func_4();
				}
			}
		}
	}
}

void func_16()
{
	int iVar0;
	
	iLocal_115 = 0;
	func_20();
	iVar0 = 0;
	func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_17(0))
	{
		func_7(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_229", 0, 0, 0, 0);
	}
	else
	{
		while (iVar0 < Global_86359)
		{
			func_7(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(0), -1f, -1f, &(Global_86150[iVar0 /*4*/]), 0, 0, 0, 0);
			iLocal_115++;
			iLocal_20[iVar0] = iVar0;
			iVar0++;
		}
	}
	if (iLocal_20[1] == 99)
	{
	}
	func_33(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14394, "SET_HEADER", "CELL_3301", 0, 0, 0, 0);
	if (func_17(0) || Global_86359 == 0)
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x73817D396768E4C6(&Global_2283, 17);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x73817D396768E4C6(&Global_2283, 17);
		if (Global_14401)
		{
			func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
	else if (Global_14401)
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_119 = 1;
}

int func_17(int iParam0)
{
	if (Global_35619 == 15)
	{
		return 0;
	}
	if (func_18(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_18(int iParam0)
{
	return func_19(iParam0, Global_35619);
}

int func_19(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_20()
{
	int iVar0;
	int iVar1;
	
	Global_86359 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_82110[iVar0 /*5*/] != -1)
		{
			if (Global_86359 < 52)
			{
				iVar1 = Global_69505.f_109[Global_82110[iVar0 /*5*/] /*4*/];
				MemCopy(&(Global_86150[Global_86359 /*4*/]), {func_24(iVar1)}, 4);
				Global_86359++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		if ((unk_0xB519E5386FBF69E5(Global_99155.f_17188[iVar0 /*6*/], 0) && unk_0xB519E5386FBF69E5(Global_99155.f_17188[iVar0 /*6*/], 1)) && !unk_0xB519E5386FBF69E5(Global_99155.f_17188[iVar0 /*6*/], 3))
		{
			if (Global_86359 < 52)
			{
				MemCopy(&(Global_86150[Global_86359 /*4*/]), {func_22(iVar0)}, 4);
				Global_86359++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_7699.f_99.f_219[0], iVar0))
		{
			if (Global_86359 < 52)
			{
				StringCopy(&(Global_86150[Global_86359 /*4*/]), func_21(iVar0), 16);
				Global_86359++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_22(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_23(iParam0) };
	if (unk_0xF6917DE0E003509D(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_23(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<2> func_24(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_82146[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_99155.f_7699.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

void func_25()
{
	if (iLocal_118)
	{
		if (unk_0x83666F9FB8FEBD4B() > 50)
		{
			iLocal_118 = 0;
		}
	}
	if (unk_0x7EDB1AFBE755EC7A(2))
	{
		if (func_9(2, 181, 0))
		{
			if (iLocal_116 > 0)
			{
				iLocal_116 = (iLocal_116 - 1);
			}
			func_28();
		}
		if (func_9(2, 180, 0))
		{
			iLocal_116++;
			if (iLocal_116 == iLocal_115)
			{
				iLocal_116 = 0;
			}
			func_26();
		}
	}
	if (iLocal_118 == 0)
	{
		if (func_9(2, Global_14389, 0))
		{
			if (iLocal_116 > 0)
			{
				iLocal_116 = (iLocal_116 - 1);
			}
			func_28();
			iLocal_118 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (func_9(2, Global_14390, 0))
		{
			iLocal_116++;
			if (iLocal_116 == iLocal_115)
			{
				iLocal_116 = 0;
			}
			func_26();
			iLocal_118 = 1;
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_26()
{
	func_33(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xCC18B241D266EF14(-1, "Menu_Navigate", &Global_14402, 1);
	func_27();
}

void func_27()
{
	if (func_14())
	{
		if (Global_14576 == 0)
		{
			unk_0xEDC530BAFD80E449(2);
		}
		else
		{
			unk_0xEDC530BAFD80E449(1);
		}
	}
}

void func_28()
{
	func_33(Global_14394, "SET_INPUT_EVENT", unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xCC18B241D266EF14(-1, "Menu_Navigate", &Global_14402, 1);
	func_29();
}

void func_29()
{
	if (func_14())
	{
		if (Global_14576 == 0)
		{
			unk_0xEDC530BAFD80E449(1);
		}
		else
		{
			unk_0xEDC530BAFD80E449(2);
		}
	}
}

void func_30()
{
	func_33(Global_14394, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_7(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(0), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_3301", 0, 0, 0, 0);
	func_7(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(18), unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(0), -1f, -1f, "CELL_3302", 0, 0, 0, 0);
	iLocal_115 = 2;
	func_33(Global_14394, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14394, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_14401)
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_119 = 0;
}

void func_31()
{
	func_32(0, "CELL_3001", 1, Global_98891);
	func_32(1, "CELL_3008", 3, Global_98891);
	func_32(2, "CELL_3004", 7, Global_98894);
	func_32(3, "CELL_3005", 9, Global_98895);
	func_32(4, "CELL_3007", 11, Global_98896);
}

void func_32(int iParam0, char* sParam1, int iParam2, var uParam3)
{
	StringCopy(&(Local_131[iParam0 /*6*/]), sParam1, 16);
	Local_131[iParam0 /*6*/].f_4 = iParam2;
	Local_131[iParam0 /*6*/].f_5 = uParam3;
	if (Local_131[0 /*6*/].f_4 == 1)
	{
	}
}

void func_33(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xA4F3B84032D46C13(uParam0, sParam1);
	unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x43C93E686A1E92C5(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xFF141057ED7B4C73();
}

