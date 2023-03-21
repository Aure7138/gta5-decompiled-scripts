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
	struct<26> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	char cLocal_52[32] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
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
	iLocal_51 = -99;
	StringCopy(&cLocal_52, "TRACKID", 32);
	unk_0xEE998050210A7287();
	unk_0x8E058779F430F4D7(&cLocal_52, 1);
	while (!unk_0x9F22E45F3CF7EACA(1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_15();
	func_14();
	func_11();
	unk_0xC1B1E9A034A63A62(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_61)
		{
			if (iLocal_63 < 101)
			{
				if (unk_0x83666F9FB8FEBD4B() > 30)
				{
					iLocal_63++;
					unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
					unk_0x22DD5585E00B80C3(23);
					unk_0x22DD5585E00B80C3(0);
					unk_0x22DD5585E00B80C3(1);
					func_10("CELL_4005");
					unk_0x22DD5585E00B80C3(iLocal_63);
					unk_0xE2B30EB9B14EEAB2();
					func_9(Global_14434, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432);
					unk_0xC1B1E9A034A63A62(0);
				}
			}
			else
			{
				unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
				unk_0x22DD5585E00B80C3(23);
				unk_0x22DD5585E00B80C3(0);
				unk_0x22DD5585E00B80C3(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				unk_0xE2B30EB9B14EEAB2();
				func_9(Global_14434, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432);
				iLocal_62 = 1;
				iLocal_61 = 0;
			}
		}
		if (Global_14453.f_1 != 9)
		{
			switch (Global_14453.f_1)
			{
				case 7:
					func_8();
					if (iLocal_60 == 0)
					{
						func_6();
					}
					break;
				
				case 8:
					if (func_5(2, Global_14421, 0))
					{
						func_4();
						iLocal_61 = 0;
						iLocal_62 = 0;
						Global_14431 = 1;
						func_14();
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
	iLocal_61 = 0;
	unk_0x810C5D6462DD69E6();
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
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x929C3CBA660376D5(-1, "Menu_Back", &Global_14442, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0xFC0C00F9DE2AEC93(iParam0, uParam1) || (iParam2 == 1 && unk_0x3199F4F904C324F9(iParam0, uParam1)))
	{
		if (unk_0xC339C5C5B5E8BC5B())
		{
			if (unk_0x73A445C7E1EAA5D2() == 0 || (unk_0x91A08229665C71F1() && unk_0xC9FF45E740135482(2)))
			{
				return 0;
			}
		}
		if (unk_0xC83C302702976DCB() || unk_0xF45F7A07410EF1F5())
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
	if (unk_0x83666F9FB8FEBD4B() > 2200)
	{
		if (Global_14441)
		{
			func_7(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		iLocal_60 = 1;
	}
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xFAFFA408239A026B(sParam7))
	{
		func_10(sParam7);
	}
	if (!unk_0xFAFFA408239A026B(sParam8))
	{
		func_10(sParam8);
	}
	if (!unk_0xFAFFA408239A026B(sParam9))
	{
		func_10(sParam9);
	}
	if (!unk_0xFAFFA408239A026B(sParam10))
	{
		func_10(sParam10);
	}
	if (!unk_0xFAFFA408239A026B(sParam11))
	{
		func_10(sParam11);
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_8()
{
	if (Global_14431 == 0)
	{
		if (func_5(2, Global_14422, 0))
		{
			if ((iLocal_60 && iLocal_62 == 0) && iLocal_61 == 0)
			{
				iLocal_63 = 0;
				unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
				unk_0x22DD5585E00B80C3(23);
				unk_0x22DD5585E00B80C3(0);
				unk_0x22DD5585E00B80C3(1);
				func_10("CELL_4005");
				unk_0x22DD5585E00B80C3(iLocal_63);
				unk_0xE2B30EB9B14EEAB2();
				func_9(Global_14434, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432);
				if (Global_14441)
				{
					func_7(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
				}
				else
				{
					func_7(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_7(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x62148293B793073B(&Global_2323, 17);
				iLocal_61 = 1;
				unk_0xC1B1E9A034A63A62(0);
			}
		}
	}
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_10(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

void func_11()
{
	int iVar0;
	
	func_13(134, 1);
	iVar0 = unk_0xFE4CC02D61DA2398();
	switch (func_12(iVar0))
	{
		case 1:
			func_13(82, 1);
			break;
		
		case 2:
			func_13(81, 1);
			break;
		
		default:
			func_13(83, 1);
			break;
	}
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/])
	{
		unk_0xD194C635833AC189(Global_51643[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xD92C8D8AF3C67820(Global_51643[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_14()
{
	unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
	unk_0x22DD5585E00B80C3(23);
	unk_0x22DD5585E00B80C3(0);
	unk_0x22DD5585E00B80C3(0);
	func_10("CELL_4001");
	func_10(&Local_20);
	func_10(&(Local_20.f_16));
	func_10("CELL_4002");
	unk_0x22DD5585E00B80C3(Local_20.f_24);
	func_10("CELL_4003");
	func_10(&(Local_20.f_25));
	func_10("CELL_4004");
	unk_0xE2B30EB9B14EEAB2();
	func_9(Global_14434, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(0), -1082130432, -1082130432, -1082130432);
	if (Global_14441)
	{
		if (iLocal_60)
		{
			func_7(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		if (iLocal_60)
		{
			func_7(Global_14434, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_7(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_7(Global_14434, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x62148293B793073B(&Global_2323, 17);
}

void func_15()
{
	iLocal_51 = unk_0xABDD23BE2E71F6EF();
	StringCopy(&Local_20, "", 64);
	StringIntConCat(&Local_20, iLocal_51, 64);
	StringConCat(&Local_20, "S", 64);
	StringCopy(&(Local_20.f_16), "", 32);
	StringIntConCat(&(Local_20.f_16), iLocal_51, 32);
	StringConCat(&(Local_20.f_16), "A", 32);
	StringCopy(&(Local_20.f_25), unk_0x4E4B5ABBAFD1784D(), 24);
	if (!unk_0xD76CFACBF6A6F21E(&Local_20))
	{
		StringCopy(&Local_20, "CELL_195", 64);
	}
	if (!unk_0xD76CFACBF6A6F21E(&(Local_20.f_16)))
	{
		StringCopy(&(Local_20.f_16), "CELL_195", 32);
		StringCopy(&(Local_20.f_25), "CELL_195", 24);
	}
}

