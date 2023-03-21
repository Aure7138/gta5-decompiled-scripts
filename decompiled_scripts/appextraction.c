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
	unk_0xEE998050210A7287();
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
	func_7();
}

void func_7()
{
	func_9(Global_14434, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
	unk_0x22DD5585E00B80C3(24);
	unk_0x22DD5585E00B80C3(0);
	if (unk_0xB03A1684359C50A1(Global_4267143, 23))
	{
		unk_0xD6F1BD29497A51C8(0);
		func_8("CELL_EXTBYOU");
		unk_0x22DD5585E00B80C3(Global_4267144);
		unk_0x22DD5585E00B80C3(unk_0xF34EE736CF047844(Global_4267360));
		unk_0x22DD5585E00B80C3(Global_4267145);
		unk_0x22DD5585E00B80C3(unk_0xF34EE736CF047844(Global_4267360.f_1));
		unk_0x22DD5585E00B80C3(Global_4267146);
		unk_0x22DD5585E00B80C3(unk_0xF34EE736CF047844(Global_4267360.f_2));
		func_8("CELL_BODYG");
		unk_0x22DD5585E00B80C3(Global_4267147);
		unk_0x22DD5585E00B80C3(unk_0xF34EE736CF047844(Global_4267363));
		unk_0x22DD5585E00B80C3(Global_4267148);
		unk_0x22DD5585E00B80C3(unk_0xF34EE736CF047844(Global_4267363.f_1));
		unk_0x22DD5585E00B80C3(Global_4267149);
		unk_0x22DD5585E00B80C3(unk_0xF34EE736CF047844(Global_4267363.f_2));
	}
	else
	{
		unk_0xD6F1BD29497A51C8(0);
		func_8("CELL_EXTBYOU");
		unk_0x22DD5585E00B80C3(Global_4267147);
		unk_0x22DD5585E00B80C3(unk_0xF34EE736CF047844(Global_4267363));
		unk_0x22DD5585E00B80C3(Global_4267148);
		unk_0x22DD5585E00B80C3(unk_0xF34EE736CF047844(Global_4267363.f_1));
		unk_0x22DD5585E00B80C3(Global_4267149);
		unk_0x22DD5585E00B80C3(unk_0xF34EE736CF047844(Global_4267363.f_2));
		func_8("CELL_EXTBTARG");
		unk_0x22DD5585E00B80C3(Global_4267144);
		unk_0x22DD5585E00B80C3(unk_0xF34EE736CF047844(Global_4267360));
		unk_0x22DD5585E00B80C3(Global_4267145);
		unk_0x22DD5585E00B80C3(unk_0xF34EE736CF047844(Global_4267360.f_1));
		unk_0x22DD5585E00B80C3(Global_4267146);
		unk_0x22DD5585E00B80C3(unk_0xF34EE736CF047844(Global_4267360.f_2));
	}
	unk_0xE2B30EB9B14EEAB2();
	func_9(Global_14434, "DISPLAY_VIEW", 24f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
}

void func_8(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
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
	unk_0x62148293B793073B(&Global_2323, 17);
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_8(sParam7);
	}
	if (!unk_0xFAFFA408239A026B(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0xFAFFA408239A026B(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0xFAFFA408239A026B(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0xFAFFA408239A026B(iParam11))
	{
		func_8(iParam11);
	}
	unk_0xE2B30EB9B14EEAB2();
}

