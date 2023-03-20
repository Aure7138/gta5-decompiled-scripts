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
	unk_0x84027ACC1E53BA5C();
	func_9();
	func_6();
	unk_0xC1B1E9A034A63A62(0);
	unk_0x5AE11BC36633DE4E(0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Global_14413.f_1 != 9)
		{
			switch (Global_14413.f_1)
			{
				case 7:
					if (unk_0x83666F9FB8FEBD4B() > 125)
					{
						func_9();
						unk_0xC1B1E9A034A63A62(0);
					}
					if (unk_0xC9D9444186B5A374() > unk_0xF34EE736CF047844(fLocal_29) * 30 && unk_0xC9D9444186B5A374() > 150)
					{
						unk_0x7C38F93AF52620B1(Global_14394, "APP_FUNCTION");
						unk_0x65960B4E2ADC9F6D(1);
						unk_0xD013AC29829DDC02();
						unk_0x5AE11BC36633DE4E(0);
					}
					if (unk_0xC9D9444186B5A374() > 2000)
					{
						unk_0x7C38F93AF52620B1(Global_14394, "APP_FUNCTION");
						unk_0x65960B4E2ADC9F6D(1);
						unk_0xD013AC29829DDC02();
						unk_0x5AE11BC36633DE4E(0);
					}
					break;
				
				case 8:
					if (func_5(2, Global_14381, 0))
					{
						func_4();
						Global_14391 = 1;
						func_9();
						func_6();
						if (Global_14413.f_1 > 3)
						{
							Global_14413.f_1 = 7;
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
	unk_0x77621132305B133B(&Global_2284, 22);
	unk_0xA4E0D8FD51F2A6F7();
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
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0xC4EE38A4CFF7544C(-1, "Menu_Back", &Global_14402, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x8D9008B8900A28D0(iParam0, uParam1) || (iParam2 == 1 && unk_0x3BE6F47A1187EFE0(iParam0, uParam1)))
	{
		if (unk_0x68B0A67658F2D9C2())
		{
			if (unk_0x3CD70C95B221E318() == 0 || (unk_0x23F863EF7FB5E687() && unk_0xBDC482FE4AF5F4F1(2)))
			{
				return 0;
			}
		}
		if (unk_0x2BF05095F2389894() || unk_0x0657FBBA38D8BD02())
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
	if (Global_14401)
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_14394, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14394, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_7(Global_14394, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x77621132305B133B(&Global_2283, 17);
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x7C38F93AF52620B1(uParam0, sParam1);
	unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xB8A06E7E729EED0A(sParam7))
	{
		func_8(sParam7);
	}
	if (!unk_0xB8A06E7E729EED0A(iParam8))
	{
		func_8(iParam8);
	}
	if (!unk_0xB8A06E7E729EED0A(iParam9))
	{
		func_8(iParam9);
	}
	if (!unk_0xB8A06E7E729EED0A(iParam10))
	{
		func_8(iParam10);
	}
	if (!unk_0xB8A06E7E729EED0A(iParam11))
	{
		func_8(iParam11);
	}
	unk_0xD013AC29829DDC02();
}

void func_8(var uParam0)
{
	unk_0x276F16E002D00C0C(uParam0);
	unk_0x354E2E7AA52E941F();
}

void func_9()
{
	int iVar0;
	bool bVar1;
	
	if (func_17() == 0)
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			Local_20 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
			fLocal_23 = unk_0x59DD203239FBDCAD(unk_0xC8B93D94F8954288());
			func_16();
			func_15();
			func_14();
			fLocal_24 = (360f - fLocal_23);
			fLocal_27 = (fLocal_27 - fLocal_24);
			if (fLocal_27 < 0f)
			{
				fLocal_27 = (fLocal_27 + 360f);
			}
			if (iLocal_31 == 0)
			{
				unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
				unk_0x65960B4E2ADC9F6D(23);
				unk_0x65960B4E2ADC9F6D(0);
				if (unk_0xDCC86F723E82125E(Global_2284, 30))
				{
					unk_0x65960B4E2ADC9F6D(-99);
					unk_0x65960B4E2ADC9F6D(0);
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(unk_0xF34EE736CF047844(fLocal_27));
					unk_0x65960B4E2ADC9F6D(unk_0xF34EE736CF047844(fLocal_28));
				}
				unk_0x65960B4E2ADC9F6D(100);
				if (unk_0xDCC86F723E82125E(Global_2284, 22))
				{
					unk_0x65960B4E2ADC9F6D(1);
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(0);
				}
				if (unk_0xDCC86F723E82125E(Global_2284, 29))
				{
					unk_0x0139C89EE907A315(0);
				}
				else
				{
					unk_0x0139C89EE907A315(1);
				}
				if (unk_0xDCC86F723E82125E(Global_2285, 1))
				{
					unk_0x512B59C08EAFA3B9(fLocal_30);
				}
				unk_0xD013AC29829DDC02();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_13(Global_14394, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		Local_20 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
		fLocal_23 = unk_0x59DD203239FBDCAD(unk_0xC8B93D94F8954288());
		if (Global_2559671 > 5)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_2559671)
		{
			func_12(iVar0);
			func_11(iVar0);
			func_10(iVar0);
			fLocal_24 = (360f - fLocal_23);
			fLocal_27 = (fLocal_27 - fLocal_24);
			if (fLocal_27 < 0f)
			{
				fLocal_27 = (fLocal_27 + 360f);
			}
			if (iLocal_31 == 0)
			{
				unk_0x7C38F93AF52620B1(Global_14394, "SET_DATA_SLOT");
				unk_0x65960B4E2ADC9F6D(23);
				unk_0x65960B4E2ADC9F6D(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (unk_0xDCC86F723E82125E(Global_2559466, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (unk_0xDCC86F723E82125E(Global_2559466, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (unk_0xDCC86F723E82125E(Global_2559466, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (unk_0xDCC86F723E82125E(Global_2559466, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0x65960B4E2ADC9F6D(-99);
					unk_0x65960B4E2ADC9F6D(0);
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(unk_0xF34EE736CF047844(fLocal_27));
					unk_0x65960B4E2ADC9F6D(unk_0xF34EE736CF047844(fLocal_28));
				}
				unk_0x65960B4E2ADC9F6D(100);
				if (unk_0xDCC86F723E82125E(Global_2284, 22))
				{
					unk_0x0139C89EE907A315(1);
				}
				else
				{
					unk_0x0139C89EE907A315(1);
				}
				if (unk_0xDCC86F723E82125E(Global_2284, 29))
				{
					unk_0x0139C89EE907A315(0);
				}
				else
				{
					unk_0x0139C89EE907A315(1);
				}
				if (unk_0xDCC86F723E82125E(Global_2285, 1))
				{
					unk_0x512B59C08EAFA3B9(fLocal_30);
				}
				unk_0xD013AC29829DDC02();
			}
			if (fLocal_23 == fLocal_23)
			{
			}
			func_13(Global_14394, "DISPLAY_VIEW", 23f, unk_0xBBDA792448DB5A89(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_10(int iParam0)
{
	fLocal_25 = (Global_2559655[iParam0 /*3*/] - Local_20.f_0);
	fLocal_26 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_20.f_0)) * (Global_2559655[iParam0 /*3*/].f_1 - Local_20.f_1));
	fLocal_27 = unk_0x77491A28B7D799AF(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 = (fLocal_27 + 360f);
	}
	return fLocal_27;
}

float func_11(int iParam0)
{
	fLocal_29 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_2559655[iParam0 /*3*/], Local_20));
	fLocal_30 = (Global_2559655[iParam0 /*3*/].f_2 - Local_20.f_2);
	return fLocal_29;
}

float func_12(int iParam0)
{
	fLocal_28 = unk_0x71D93B57D07F9804((((Global_2559655[iParam0 /*3*/] - Local_20.f_0) * (Global_2559655[iParam0 /*3*/] - Local_20.f_0)) + ((Global_2559655[iParam0 /*3*/].f_1 - Local_20.f_1) * (Global_2559655[iParam0 /*3*/].f_1 - Local_20.f_1))));
	return fLocal_28;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7C38F93AF52620B1(uParam0, sParam1);
	unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x65960B4E2ADC9F6D(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xD013AC29829DDC02();
}

float func_14()
{
	fLocal_25 = (Global_16818 - Local_20.f_0);
	fLocal_26 = (unk_0xD0FFB162F40A139C(((3.14159f / 180f) * Local_20.f_0)) * (Global_16818.f_1 - Local_20.f_1));
	fLocal_27 = unk_0x77491A28B7D799AF(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f)
	{
		fLocal_27 = (fLocal_27 + 360f);
	}
	return fLocal_27;
}

float func_15()
{
	fLocal_29 = unk_0x71D93B57D07F9804(unk_0xB7A628320EFF8E47(Global_16818, Local_20));
	fLocal_30 = (Global_16818.f_2 - Local_20.f_2);
	return fLocal_29;
}

float func_16()
{
	fLocal_28 = unk_0x71D93B57D07F9804((((Global_16818 - Local_20.f_0) * (Global_16818 - Local_20.f_0)) + ((Global_16818.f_1 - Local_20.f_1) * (Global_16818.f_1 - Local_20.f_1))));
	return fLocal_28;
}

int func_17()
{
	if (Global_69317 == 1)
	{
		return 1;
	}
	return 0;
}

