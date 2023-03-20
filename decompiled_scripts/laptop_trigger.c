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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	bool bVar1;
	char* sVar2;
	var uVar3[25];
	bool bVar29;
	struct<3> Var30;
	int iVar33;
	struct<3> Var34;
	bool bVar37;
	int iVar38;
	int iVar39;
	bool bVar40;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = -1;
	uVar0 = uScriptParam_0;
	if (!unk_0x1F2158D615BC4B25(uVar0))
	{
		unk_0x2F798BA2098FDADE();
	}
	if (unk_0x4B4BD87E3D30C50D(3))
	{
		func_16();
		unk_0x2F798BA2098FDADE();
	}
	if (func_15(13) || func_15(14))
	{
		func_16();
		unk_0x2F798BA2098FDADE();
	}
	if (Global_31475)
	{
		func_16();
		unk_0x2F798BA2098FDADE();
	}
	if (Global_67974)
	{
		unk_0x2F798BA2098FDADE();
	}
	bVar1 = false;
	sVar2 = "tvscreen";
	bVar29 = true;
	Var30 = { unk_0xAF99169F0F5AE41D(uVar0, 1) - unk_0x0417D4198AF0722D(uVar0) * Vector(0.6f, 0.6f, 0.6f) };
	Var30.f_2 = (Var30.f_2 + 0.5f);
	while (bVar29)
	{
		if (unk_0x1F2158D615BC4B25(uVar0))
		{
			if (Global_1586472)
			{
				if (!bVar1)
				{
					iVar33 = unk_0xDF1398076E26B0E4(uVar0);
					if (iVar33 == joaat("prop_laptop_01a"))
					{
						unk_0x523CCF1ADDF2EFE8(unk_0xAF99169F0F5AE41D(uScriptParam_0, 1), 1f, joaat("prop_laptop_01a"), 0);
						Var34 = { unk_0x5F8CECBE07C70F34(uVar0, 2) };
						uVar0 = unk_0x4A498A71A7B2E7A5(joaat("prop_laptop_lester2"), unk_0xAF99169F0F5AE41D(uVar0, 1), 0, 1, 0);
						unk_0x188DB3CD3BF87211(uVar0, Var34, 2, 1);
						bVar1 = true;
					}
				}
			}
			if (unk_0x2B686C323B4F6268(uVar0))
			{
				func_16();
				unk_0x2F798BA2098FDADE();
			}
		}
		if (((!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()) && unk_0x1F2158D615BC4B25(uVar0)) && !unk_0x7B8549A4F94FA4C8()) && unk_0x6DF20EAB8093DF19(unk_0x7F3E348C0892D8D2()))
		{
			if (unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0xFC0420DC987053AC(uVar0))
			{
				bVar37 = false;
				iVar38 = unk_0xC153C0A3AB834C19(unk_0x77F050A399DB77ED(), &uVar3, -1);
				iVar39 = 0;
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					if (!unk_0x0B6E83A9A7ED3EBA(uVar3[iVar39]))
					{
						if (unk_0x5EE0E9E5B7A50C2A(uVar3[iVar39], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar37 = true;
						}
						else if (unk_0x5EE0E9E5B7A50C2A(uVar3[iVar39], "MP_COMMON_MISS", "HACK_LOOP", 3))
						{
							bVar37 = true;
						}
					}
					iVar39++;
				}
				if (Global_16)
				{
					bVar37 = true;
				}
				if ((((((((((!bVar37 && !func_14(0)) && !unk_0x0B6380E19682EA99(unk_0x77F050A399DB77ED(), 0)) && !func_13()) && unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Var30, 0.6f, 0.6f, 0.8f, 0, 1, 1)) && unk_0x2202534E5065DFAC(unk_0x77F050A399DB77ED()) == unk_0x2202534E5065DFAC(iVar0)) && !unk_0xB56FEBC510E7E9DE(Global_2359301, 15)) && !func_12()) && !(Global_69317 && func_11())) && !(!Global_69317 && func_10())) && !(Global_69317 && unk_0xB56FEBC510E7E9DE(Global_1612768.f_14, 24)))
				{
					if (iLocal_46 == -1)
					{
						if (bVar1)
						{
							func_9(&iLocal_46, 1, "MPLA_BILL", 0, 0, 0);
						}
						else
						{
							func_9(&iLocal_46, 1, "BROWSEINPUTTRIG", 0, 0, 0);
						}
					}
					if (func_8(iLocal_46, 1))
					{
						if (iLocal_46 != -1)
						{
							func_6(&iLocal_46);
						}
						if (!bVar1)
						{
							func_5(0);
							if (!iLocal_47)
							{
								func_1();
								iLocal_47 = 1;
							}
							bVar40 = true;
							while (bVar40)
							{
								if (!unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), unk_0xAF99169F0F5AE41D(iVar0, 1), 1.5f, 1.5f, 4f, 0, 1, 1))
								{
									Global_67971 = 1;
								}
								if (Global_67968 || Global_67971)
								{
									bVar40 = false;
								}
								unk_0x4EDE34FBADD967A6(0);
							}
							while (Global_67968)
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							unk_0x4EDE34FBADD967A6(1000);
							iLocal_47 = 0;
						}
					}
				}
				else
				{
					if (iLocal_46 != -1)
					{
						func_6(&iLocal_46);
					}
					if (unk_0x1F2158D615BC4B25(uScriptParam_0))
					{
						if (!unk_0xC6C2EDDDD51B6332(uScriptParam_0))
						{
							bVar29 = false;
						}
					}
				}
			}
			else if (iLocal_46 != -1)
			{
				func_6(&iLocal_46);
			}
		}
		else
		{
			if (iLocal_46 != -1)
			{
				func_6(&iLocal_46);
			}
			bVar29 = false;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (bVar1)
	{
		if (unk_0x515142D7995EB0BD(sVar2))
		{
			unk_0xD424E8E48D2E7BF8(sVar2);
		}
	}
}

void func_1()
{
	if (func_4() || func_3())
	{
		func_2();
	}
}

void func_2()
{
	Global_2432717.f_630 = 1;
}

var func_3()
{
	return Global_2432717.f_609;
}

bool func_4()
{
	return unk_0xB56FEBC510E7E9DE(Global_2432717.f_2, 11);
}

void func_5(int iParam0)
{
	Global_67977 = iParam0;
	switch (Global_67977)
	{
		case 3:
			Global_67975 = 0;
			break;
		
		case 4:
			Global_67975 = 3;
			break;
	}
	if (unk_0xB1A77D5C890711F9(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_69317 && func_11())
	{
		return;
	}
	if (!Global_69317 && func_10())
	{
		return;
	}
	if (!unk_0xF93DA38375EB3977("appInternet"))
	{
		unk_0x507887ECD0989471("appInternet");
	}
	while (!unk_0xF93DA38375EB3977("appInternet"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE81651AD79516E48("appInternet", 3584);
	unk_0x2C85BCB989483284("appInternet");
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_7(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36400[iVar0 /*19*/])
		{
			Global_36400[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_7(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36400[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_7(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6DF20EAB8093DF19(unk_0x7F3E348C0892D8D2()))
	{
		return 0;
	}
	if (func_14(0))
	{
		return 0;
	}
	if (unk_0x7B8549A4F94FA4C8())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36400[iVar0 /*19*/] == 1 && Global_36400[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36400[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36400[iVar0 /*19*/].f_5 = 1;
			Global_36400[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36400[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36400[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0xB1A77D5C890711F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xA153A26DF49EBCC0())
	{
		if (!*iParam0 == -1)
		{
			func_6(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36400[iVar0 /*19*/])
		{
			Global_36400[iVar0 /*19*/] = 1;
			Global_36400[iVar0 /*19*/].f_1 = Global_36523;
			Global_36523++;
			Global_36400[iVar0 /*19*/].f_4 = 0;
			Global_36400[iVar0 /*19*/].f_17 = 0;
			Global_36400[iVar0 /*19*/].f_5 = 0;
			Global_36400[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36400[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36400[iVar0 /*19*/].f_6 = iParam3;
			Global_36400[iVar0 /*19*/].f_18 = unk_0x8EC1FFF6B789C28E();
			Global_36400[iVar0 /*19*/].f_7 = 0;
			Global_36400[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0x0AAC2160036975D9(sParam4))
			{
				Global_36400[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36400[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36400[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_36400[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

var func_10()
{
	return Global_67969;
}

var func_11()
{
	return Global_1706720;
}

int func_12()
{
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (unk_0x07A8845F7F106A38(unk_0x08CA1B7A7938D598(unk_0x77F050A399DB77ED()), -1) == unk_0x77F050A399DB77ED())
		{
			return 1;
		}
	}
	return 0;
}

int func_13()
{
	if (unk_0xB1A77D5C890711F9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)
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

bool func_15(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_16()
{
	if (iLocal_46 != -1)
	{
		func_6(&iLocal_46);
	}
}

