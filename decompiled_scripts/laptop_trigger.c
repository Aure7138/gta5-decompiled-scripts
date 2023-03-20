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
	if (!unk_0x95CCECA3948CFE7B(uVar0))
	{
		unk_0xA4E0D8FD51F2A6F7();
	}
	if (unk_0x24862A9CDC8F8874(3))
	{
		func_20();
		unk_0xA4E0D8FD51F2A6F7();
	}
	if (func_19(13) || func_19(14))
	{
		func_20();
		unk_0xA4E0D8FD51F2A6F7();
	}
	if (Global_31475)
	{
		func_20();
		unk_0xA4E0D8FD51F2A6F7();
	}
	if (Global_67974)
	{
		unk_0xA4E0D8FD51F2A6F7();
	}
	bVar1 = false;
	sVar2 = "tvscreen";
	bVar29 = true;
	Var30 = { unk_0x44C17CCB85A88A1F(uVar0, 1) - unk_0x2CDF65DEC17DF0F9(uVar0) * Vector(0.6f, 0.6f, 0.6f) };
	Var30.f_2 = (Var30.f_2 + 0.5f);
	while (bVar29)
	{
		if (unk_0x95CCECA3948CFE7B(uVar0))
		{
			if (Global_1587159)
			{
				if (!bVar1)
				{
					iVar33 = unk_0x6D5BB810CC209E15(uVar0);
					if (iVar33 == joaat("prop_laptop_01a"))
					{
						unk_0xF3B031799E7F7016(unk_0x44C17CCB85A88A1F(uScriptParam_0, 1), 1f, joaat("prop_laptop_01a"), 0);
						Var34 = { unk_0xF57992155BDFCC67(uVar0, 2) };
						uVar0 = unk_0x7C62BC1EB194D985(joaat("prop_laptop_lester2"), unk_0x44C17CCB85A88A1F(uVar0, 1), 0, 1, 0);
						unk_0x68931E8B45B3CA92(uVar0, Var34, 2, 1);
						bVar1 = true;
					}
				}
			}
			if (unk_0xD2EDA529D1BF09B5(uVar0))
			{
				func_20();
				unk_0xA4E0D8FD51F2A6F7();
			}
		}
		if (((!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()) && unk_0x95CCECA3948CFE7B(uVar0)) && !unk_0x308528B5CF35F306()) && unk_0x06972B20E75CBE06(unk_0x1A96BAEAC664567A()))
		{
			if (unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x6907EB47FC00DB19(uVar0))
			{
				bVar37 = false;
				iVar38 = unk_0x06C00074433E3408(unk_0xC8B93D94F8954288(), &uVar3, -1);
				iVar39 = 0;
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					if (!unk_0xB6900B8CB0ABBD2B(uVar3[iVar39]))
					{
						if (unk_0xCD61E9D5CABC7E35(uVar3[iVar39], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar37 = true;
						}
						else if (unk_0xCD61E9D5CABC7E35(uVar3[iVar39], "MP_COMMON_MISS", "HACK_LOOP", 3))
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
				if (((((((((((!bVar37 && !func_18(0)) && !unk_0x596FD4F11EECAC02(unk_0xC8B93D94F8954288(), 0)) && !func_17()) && unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Var30, 0.6f, 0.6f, 0.8f, 0, 1, 1)) && unk_0x3A1056BCF85EF04F(unk_0xC8B93D94F8954288()) == unk_0x3A1056BCF85EF04F(iVar0)) && !unk_0xDCC86F723E82125E(Global_2359301, 15)) && !func_16()) && !(Global_69317 && func_15())) && !(!Global_69317 && func_14())) && !(Global_69317 && unk_0xDCC86F723E82125E(Global_1613622.f_14, 24))) && !((Global_69317 && func_13()) && func_10()))
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
								if (!unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), unk_0x44C17CCB85A88A1F(iVar0, 1), 1.5f, 1.5f, 4f, 0, 1, 1))
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
					if (unk_0x95CCECA3948CFE7B(uScriptParam_0))
					{
						if (!unk_0x265A690A472378A4(uScriptParam_0))
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
		if (unk_0x4C4B08464D56970E(sVar2))
		{
			unk_0xA4CE556B2DCD4B71(sVar2);
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
	Global_2433098.f_631 = 1;
}

var func_3()
{
	return Global_2433098.f_610;
}

bool func_4()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_2, 11);
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
	if (unk_0xCBC8FFE55DC722B5(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_69317 && func_15())
	{
		return;
	}
	if (!Global_69317 && func_14())
	{
		return;
	}
	if (!unk_0xD838CD843F6FE18B("appInternet"))
	{
		unk_0xE3B4E8C914195E94("appInternet");
	}
	while (!unk_0xD838CD843F6FE18B("appInternet"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE81651AD79516E48("appInternet", 3584);
	unk_0x996557D48454AE40("appInternet");
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
	if (!unk_0x06972B20E75CBE06(unk_0x1A96BAEAC664567A()))
	{
		return 0;
	}
	if (func_18(0))
	{
		return 0;
	}
	if (unk_0x308528B5CF35F306())
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
	
	if (unk_0xCBC8FFE55DC722B5(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xA8D4B6BDCF6DE72B())
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
			Global_36400[iVar0 /*19*/].f_18 = unk_0x46CF50E0E5A24635();
			Global_36400[iVar0 /*19*/].f_7 = 0;
			Global_36400[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xB8A06E7E729EED0A(sParam4))
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

int func_10()
{
	return func_11(unk_0xA34E7C2A5118D638());
}

int func_11(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Global_1608811[iParam0 /*109*/].f_9 != func_12())
		{
			return Global_1608811[iParam0 /*109*/].f_9 == iParam0;
		}
	}
	return 0;
}

int func_12()
{
	return -1;
}

bool func_13()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 148;
}

var func_14()
{
	return Global_67969;
}

var func_15()
{
	return Global_1710514;
}

int func_16()
{
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (unk_0xC0ADAF0814175B68(unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288()), -1) == unk_0xC8B93D94F8954288())
		{
			return 1;
		}
	}
	return 0;
}

int func_17()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_20()
{
	if (iLocal_46 != -1)
	{
		func_6(&iLocal_46);
	}
}

