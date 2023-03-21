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
	struct<3> Local_20 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	int iLocal_31 = 0;
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
	fLocal_27 = 9.99f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;
	fLocal_30 = 0f;
	unk_0x945226432ACF160F();
	func_10();
	func_7();
	unk_0xC1B1E9A034A63A62(0);
	unk_0x5AE11BC36633DE4E(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14443.f_1 != 9)
		{
			switch (Global_14443.f_1)
			{
				case 7:
					if (unk_0x83666F9FB8FEBD4B() > 125)
					{
						func_10();
						unk_0xC1B1E9A034A63A62(0);
					}
					if (unk_0xC9D9444186B5A374() > unk_0xF34EE736CF047844(fLocal_29) * 30 && unk_0xC9D9444186B5A374() > 150)
					{
						unk_0xD1FCC52F87A98873(Global_14424, "APP_FUNCTION");
						unk_0x4CECF13AF144A8F6(1);
						unk_0x8123397DC676E794();
						unk_0x5AE11BC36633DE4E(0);
					}
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						unk_0xD1FCC52F87A98873(Global_14424, "APP_FUNCTION");
						unk_0x4CECF13AF144A8F6(1);
						unk_0x8123397DC676E794();
						unk_0x5AE11BC36633DE4E(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_14411, 0))
					{
						func_5();
						Global_14421 = 1;
						func_10();
						func_7();
						if (Global_14443.f_1 > 3)
						{
							Global_14443.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	unk_0x507FE690B1271947(&Global_2314, 22);
	unk_0xA232817B0B36F2E5();
}

void func_3(int iParam0, int iParam1)
{
	Global_2600890[iParam0] = iParam1;
}

int func_4()
{
	if (Global_2919 == 1 || Global_14443.f_1 < 7)
	{
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x08BE237DBCD9CBD9(-1, "Menu_Back", &Global_14432, 1);
	}
}

int func_6(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x92BC4A8239BDDACC(iParam0, uParam1) || (iParam2 == 1 && unk_0xBA36AFDE947F5C56(iParam0, uParam1)))
	{
		if (unk_0x5018862FF5D9F844())
		{
			if (unk_0x20CC52AB5EBEF40E() == 0 || (unk_0x2593BD27F8406EC2() && unk_0x3A473E888D0CF9FD(2)))
			{
				return 0;
			}
		}
		if (unk_0x9E5289F5D782437C() || unk_0x908783EBF098B817())
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

void func_7()
{
	if (Global_14431)
	{
		func_8(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x507FE690B1271947(&Global_2313, 17);
}

void func_8(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x58478145CAF8429C(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0x58478145CAF8429C(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0x58478145CAF8429C(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0x58478145CAF8429C(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0x58478145CAF8429C(iParam11))
	{
		func_9(iParam11);
	}
	unk_0x8123397DC676E794();
}

void func_9(var uParam0)
{
	unk_0xADBDBA2DF8443753(uParam0);
	unk_0xF7D95CCE1364B5CE();
}

void func_10()
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			Local_20 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			fLocal_23 = unk_0x6DAB28241B34DEED(unk_0x2A5EB8B0FE590B91());
			func_17();
			func_16();
			func_15();
			fLocal_24 = (360f - fLocal_23);
			fLocal_27 = (fLocal_27 - fLocal_24);
			if (fLocal_27 < 0f)
			{
				fLocal_27 = (fLocal_27 + 360f);
			}
			if (iLocal_31 == 0)
			{
				unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
				unk_0x4CECF13AF144A8F6(23);
				unk_0x4CECF13AF144A8F6(0);
				if (unk_0xAA4F14DA15DB0B51(Global_2314, 30))
				{
					unk_0x4CECF13AF144A8F6(-99);
					unk_0x4CECF13AF144A8F6(0);
				}
				else
				{
					unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(fLocal_27));
					unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(fLocal_28));
				}
				unk_0x4CECF13AF144A8F6(100);
				if (unk_0xAA4F14DA15DB0B51(Global_2314, 22))
				{
					unk_0x4CECF13AF144A8F6(1);
				}
				else
				{
					unk_0x4CECF13AF144A8F6(0);
				}
				if (unk_0xAA4F14DA15DB0B51(Global_2314, 29))
				{
					unk_0xD426F7366505EADF(0);
				}
				else
				{
					unk_0xD426F7366505EADF(1);
				}
				if (unk_0xAA4F14DA15DB0B51(Global_2315, 1))
				{
					unk_0xD3A4A11E4FDC9D63(fLocal_30);
				}
				unk_0x8123397DC676E794();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_14(Global_14424, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		Local_20 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
		fLocal_23 = unk_0x6DAB28241B34DEED(unk_0x2A5EB8B0FE590B91());
		if (Global_2600896 > 5)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_2600896)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_24 = (360f - fLocal_23);
			fLocal_27 = (fLocal_27 - fLocal_24);
			if (fLocal_27 < 0f)
			{
				fLocal_27 = (fLocal_27 + 360f);
			}
			if (iLocal_31 == 0)
			{
				unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
				unk_0x4CECF13AF144A8F6(23);
				unk_0x4CECF13AF144A8F6(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (unk_0xAA4F14DA15DB0B51(Global_2600685, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (unk_0xAA4F14DA15DB0B51(Global_2600685, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (unk_0xAA4F14DA15DB0B51(Global_2600685, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (unk_0xAA4F14DA15DB0B51(Global_2600685, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0x4CECF13AF144A8F6(-99);
					unk_0x4CECF13AF144A8F6(0);
				}
				else
				{
					unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(fLocal_27));
					unk_0x4CECF13AF144A8F6(unk_0xF34EE736CF047844(fLocal_28));
				}
				unk_0x4CECF13AF144A8F6(100);
				if (unk_0xAA4F14DA15DB0B51(Global_2314, 22))
				{
					unk_0xD426F7366505EADF(1);
				}
				else
				{
					unk_0xD426F7366505EADF(1);
				}
				if (unk_0xAA4F14DA15DB0B51(Global_2314, 29))
				{
					unk_0xD426F7366505EADF(0);
				}
				else
				{
					unk_0xD426F7366505EADF(1);
				}
				unk_0xD3A4A11E4FDC9D63(fLocal_30);
				unk_0x4CECF13AF144A8F6(Global_2600890[iVar0]);
				unk_0x8123397DC676E794();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_14(Global_14424, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_25 = (Global_2600874[iParam0 /*3*/] - Local_20.f_0);
	fLocal_26 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_20.f_0)) * (Global_2600874[iParam0 /*3*/].f_1 - Local_20.f_1));
	fLocal_27 = unk_0x12E20547A5AF64B1(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 = (fLocal_27 + 360f);
	}
	return fLocal_27;
}

float func_12(int iParam0)
{
	fLocal_29 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_2600874[iParam0 /*3*/], Local_20));
	fLocal_30 = (Global_2600874[iParam0 /*3*/].f_2 - Local_20.f_2);
	return fLocal_29;
}

float func_13(int iParam0)
{
	fLocal_28 = unk_0x71D93B57D07F9804((((Global_2600874[iParam0 /*3*/] - Local_20.f_0) * (Global_2600874[iParam0 /*3*/] - Local_20.f_0)) + ((Global_2600874[iParam0 /*3*/].f_1 - Local_20.f_1) * (Global_2600874[iParam0 /*3*/].f_1 - Local_20.f_1))));
	return fLocal_28;
}

void func_14(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x8123397DC676E794();
}

float func_15()
{
	fLocal_25 = (Global_16851 - Local_20.f_0);
	fLocal_26 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_20.f_0)) * (Global_16851.f_1 - Local_20.f_1));
	fLocal_27 = unk_0x12E20547A5AF64B1(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 = (fLocal_27 + 360f);
	}
	return fLocal_27;
}

float func_16()
{
	fLocal_29 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_16851, Local_20));
	fLocal_30 = (Global_16851.f_2 - Local_20.f_2);
	return fLocal_29;
}

float func_17()
{
	fLocal_28 = unk_0x71D93B57D07F9804((((Global_16851 - Local_20.f_0) * (Global_16851 - Local_20.f_0)) + ((Global_16851.f_1 - Local_20.f_1) * (Global_16851.f_1 - Local_20.f_1))));
	return fLocal_28;
}

int func_18()
{
	if (Global_69800 == 1)
	{
		return 1;
	}
	return 0;
}

