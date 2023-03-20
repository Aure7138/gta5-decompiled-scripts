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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	struct<3> Local_19 = { 0, 0, 0 } ;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	int iLocal_30 = 0;
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
	fLocal_26 = 9.99f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;
	unk_0x20A629A7D3DC97F2();
	func_9();
	func_6();
	unk_0xC1B1E9A034A63A62(0);
	unk_0x5AE11BC36633DE4E(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14394.f_1 != 9)
		{
			switch (Global_14394.f_1)
			{
				case 7:
					if (unk_0x83666F9FB8FEBD4B() > 125)
					{
						func_9();
						unk_0xC1B1E9A034A63A62(0);
					}
					if (unk_0xC9D9444186B5A374() > unk_0xF34EE736CF047844(fLocal_28) * 30 && unk_0xC9D9444186B5A374() > 150)
					{
						unk_0xB067107D878E9585(Global_14375, "APP_FUNCTION");
						unk_0x26221D1D76579618(1);
						unk_0xD3DF251F2DF3B257();
						unk_0x5AE11BC36633DE4E(0);
					}
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						unk_0xB067107D878E9585(Global_14375, "APP_FUNCTION");
						unk_0x26221D1D76579618(1);
						unk_0xD3DF251F2DF3B257();
						unk_0x5AE11BC36633DE4E(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_14362, 0))
					{
						func_4();
						Global_14372 = 1;
						func_9();
						func_6();
						if (Global_14394.f_1 > 3)
						{
							Global_14394.f_1 = 7;
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
			Global_14396 = 6;
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
	if (((Global_14394.f_1 == 1 || Global_14394.f_1 == 3) || Global_14394.f_1 == 0) || Global_14338 == 1)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x29DB79DD4D939B38(&Global_2265, 22);
	unk_0x82706E6C897B0FA1();
}

int func_3()
{
	if (Global_2870 == 1 || Global_14394.f_1 < 7)
	{
		Global_14381 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0xC2E1777941B4536E(-1, "Menu_Back", &Global_14383, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x1453F50088A91E4E(iParam0, uParam1) || (iParam2 == 1 && unk_0x63D2949B11643BBA(iParam0, uParam1)))
	{
		if (unk_0xF6BAF9F0C2863FFE())
		{
			if (unk_0xCB70128095B6956E() == 0 || (unk_0x6E6ED37B068198D0() && unk_0x3E512F3AB14225D6(2)))
			{
				return 0;
			}
		}
		if (unk_0x2B0FFD431FD5A9FA() || unk_0x34CC8D9406FED489())
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
	if (Global_14382)
	{
		func_7(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_7(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_14375, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_7(Global_14375, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x29DB79DD4D939B38(&Global_2264, 17);
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x06771AF7795B3ECF(sParam7))
	{
		func_8(sParam7);
	}
	if (!unk_0x06771AF7795B3ECF(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0x06771AF7795B3ECF(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0x06771AF7795B3ECF(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0x06771AF7795B3ECF(iParam11))
	{
		func_8(iParam11);
	}
	unk_0xD3DF251F2DF3B257();
}

void func_8(var uParam0)
{
	unk_0xEBC0B3BDAD1250BE(uParam0);
	unk_0x9F94C7B5E8C04AB3();
}

void func_9()
{
	int iVar0;
	bool bVar1;
	
	if (func_17() == 0)
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			Local_19 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			fLocal_22 = unk_0xD1613577C809E98B(unk_0xA16EC202D9D35357());
			func_16();
			func_15();
			func_14();
			fLocal_23 = (360f - fLocal_22);
			fLocal_26 = (fLocal_26 - fLocal_23);
			if (fLocal_26 < 0f)
			{
				fLocal_26 = (fLocal_26 + 360f);
			}
			if (iLocal_30 == 0)
			{
				unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
				unk_0x26221D1D76579618(23);
				unk_0x26221D1D76579618(0);
				if (unk_0x889D01384B54BCE3(Global_2265, 30))
				{
					unk_0x26221D1D76579618(-99);
					unk_0x26221D1D76579618(0);
				}
				else
				{
					unk_0x26221D1D76579618(unk_0xF34EE736CF047844(fLocal_26));
					unk_0x26221D1D76579618(unk_0xF34EE736CF047844(fLocal_27));
				}
				unk_0x26221D1D76579618(100);
				if (unk_0x889D01384B54BCE3(Global_2265, 22))
				{
					unk_0x26221D1D76579618(1);
				}
				else
				{
					unk_0x26221D1D76579618(0);
				}
				if (unk_0x889D01384B54BCE3(Global_2265, 29))
				{
					unk_0xF34EF2C628F5B47B(0);
				}
				else
				{
					unk_0xF34EF2C628F5B47B(1);
				}
				if (unk_0x889D01384B54BCE3(Global_2266, 1))
				{
					unk_0x50050D925C27B388(fLocal_29);
				}
				unk_0xD3DF251F2DF3B257();
			}
			if (fLocal_22 == fLocal_22)
			{
			}
			func_13(Global_14375, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		Local_19 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
		fLocal_22 = unk_0xD1613577C809E98B(unk_0xA16EC202D9D35357());
		if (Global_2542825 > 5)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_2542825)
		{
			func_12(iVar0);
			func_11(iVar0);
			func_10(iVar0);
			fLocal_23 = (360f - fLocal_22);
			fLocal_26 = (fLocal_26 - fLocal_23);
			if (fLocal_26 < 0f)
			{
				fLocal_26 = (fLocal_26 + 360f);
			}
			if (iLocal_30 == 0)
			{
				unk_0xB067107D878E9585(Global_14375, "SET_DATA_SLOT");
				unk_0x26221D1D76579618(23);
				unk_0x26221D1D76579618(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (unk_0x889D01384B54BCE3(Global_2542626, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (unk_0x889D01384B54BCE3(Global_2542626, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (unk_0x889D01384B54BCE3(Global_2542626, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (unk_0x889D01384B54BCE3(Global_2542626, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0x26221D1D76579618(-99);
					unk_0x26221D1D76579618(0);
				}
				else
				{
					unk_0x26221D1D76579618(unk_0xF34EE736CF047844(fLocal_26));
					unk_0x26221D1D76579618(unk_0xF34EE736CF047844(fLocal_27));
				}
				unk_0x26221D1D76579618(100);
				if (unk_0x889D01384B54BCE3(Global_2265, 22))
				{
					unk_0xF34EF2C628F5B47B(1);
				}
				else
				{
					unk_0xF34EF2C628F5B47B(1);
				}
				if (unk_0x889D01384B54BCE3(Global_2265, 29))
				{
					unk_0xF34EF2C628F5B47B(0);
				}
				else
				{
					unk_0xF34EF2C628F5B47B(1);
				}
				if (unk_0x889D01384B54BCE3(Global_2266, 1))
				{
					unk_0x50050D925C27B388(fLocal_29);
				}
				unk_0xD3DF251F2DF3B257();
			}
			if (fLocal_22 == fLocal_22)
			{
			}
			func_13(Global_14375, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_10(int iParam0)
{
	fLocal_24 = (Global_2542809[iParam0 /*3*/] - Local_19.f_0);
	fLocal_25 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_19.f_0)) * (Global_2542809[iParam0 /*3*/].f_1 - Local_19.f_1));
	fLocal_26 = unk_0xCE9082F704DCC33A(fLocal_24, fLocal_25);
	if (fLocal_26 < 0f)
	{
		fLocal_26 = (fLocal_26 + 360f);
	}
	return fLocal_26;
}

float func_11(int iParam0)
{
	fLocal_28 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_2542809[iParam0 /*3*/], Local_19));
	fLocal_29 = (Global_2542809[iParam0 /*3*/].f_2 - Local_19.f_2);
	return fLocal_28;
}

float func_12(int iParam0)
{
	fLocal_27 = unk_0x71D93B57D07F9804((((Global_2542809[iParam0 /*3*/] - Local_19.f_0) * (Global_2542809[iParam0 /*3*/] - Local_19.f_0)) + ((Global_2542809[iParam0 /*3*/].f_1 - Local_19.f_1) * (Global_2542809[iParam0 /*3*/].f_1 - Local_19.f_1))));
	return fLocal_27;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB067107D878E9585(uParam0, sParam1);
	unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x26221D1D76579618(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD3DF251F2DF3B257();
}

float func_14()
{
	fLocal_24 = (Global_16799 - Local_19.f_0);
	fLocal_25 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_19.f_0)) * (Global_16799.f_1 - Local_19.f_1));
	fLocal_26 = unk_0xCE9082F704DCC33A(fLocal_24, fLocal_25);
	if (fLocal_26 < 0f)
	{
		fLocal_26 = (fLocal_26 + 360f);
	}
	return fLocal_26;
}

float func_15()
{
	fLocal_28 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_16799, Local_19));
	fLocal_29 = (Global_16799.f_2 - Local_19.f_2);
	return fLocal_28;
}

float func_16()
{
	fLocal_27 = unk_0x71D93B57D07F9804((((Global_16799 - Local_19.f_0) * (Global_16799 - Local_19.f_0)) + ((Global_16799.f_1 - Local_19.f_1) * (Global_16799.f_1 - Local_19.f_1))));
	return fLocal_27;
}

int func_17()
{
	if (Global_68325 == 1)
	{
		return 1;
	}
	return 0;
}

