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
		func_10();
		iLocal_20 = 1;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14453.f_1 != 9)
		{
			switch (Global_14453.f_1)
			{
				case 7:
					if (iLocal_20 == 1)
					{
						func_6();
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
	unk_0x9C7EE7DE7041A3F4(0, 80, 1);
}

void func_7()
{
	unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
	unk_0x22DD5585E00B80C3(27);
	unk_0x22DD5585E00B80C3(0);
	unk_0x22DD5585E00B80C3(Global_4267367);
	unk_0x22DD5585E00B80C3(Global_4267366);
	func_9("");
	func_9(&Global_4267368);
	unk_0xE2B30EB9B14EEAB2();
	unk_0x76F4FB5EFF5BDED5(Global_14434, "DISPLAY_VIEW");
	unk_0x22DD5585E00B80C3(27);
	unk_0xE2B30EB9B14EEAB2();
	if (!unk_0xB03A1684359C50A1(Global_1646129.f_21, 30))
	{
		func_8(Global_14434, "SET_SOFT_KEYS", 3f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);
	}
}

void func_8(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_9(sParam7);
	}
	if (!unk_0xFAFFA408239A026B(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0xFAFFA408239A026B(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0xFAFFA408239A026B(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0xFAFFA408239A026B(sParam11))
	{
		func_9(sParam11);
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_9(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

void func_10()
{
	func_7();
	func_8(Global_14434, "SET_SOFT_KEYS", 2f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);
}

