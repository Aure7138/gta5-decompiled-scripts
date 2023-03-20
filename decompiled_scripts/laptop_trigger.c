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
	if (!unk_0xD51CFE69539DB6D8(uVar0))
	{
		unk_0x52F20802944F8DCE();
	}
	if (unk_0x89522B8E487D4EF9(3))
	{
		func_16();
		unk_0x52F20802944F8DCE();
	}
	if (func_15(13) || func_15(14))
	{
		func_16();
		unk_0x52F20802944F8DCE();
	}
	if (Global_31394)
	{
		func_16();
		unk_0x52F20802944F8DCE();
	}
	if (Global_67893)
	{
		unk_0x52F20802944F8DCE();
	}
	bVar1 = false;
	sVar2 = "tvscreen";
	bVar29 = true;
	Var30 = { unk_0x1141852D07400777(uVar0, 1) - unk_0x5ED441592163C054(uVar0) * Vector(0.6f, 0.6f, 0.6f) };
	Var30.f_2 = (Var30.f_2 + 0.5f);
	while (bVar29)
	{
		if (unk_0xD51CFE69539DB6D8(uVar0))
		{
			if (Global_1586063)
			{
				if (!bVar1)
				{
					iVar33 = unk_0x1B2DC87EFB36DF80(uVar0);
					if (iVar33 == joaat("prop_laptop_01a"))
					{
						unk_0x8C8B7B919A2D1050(unk_0x1141852D07400777(uScriptParam_0, 1), 1f, joaat("prop_laptop_01a"), 0);
						Var34 = { unk_0x18AD8448B5C85E6D(uVar0, 2) };
						uVar0 = unk_0x8C15E6EC0BC9B4BE(joaat("prop_laptop_lester2"), unk_0x1141852D07400777(uVar0, 1), 0, 1, 0);
						unk_0x11089405D5CD3FD2(uVar0, Var34, 2, 1);
						bVar1 = true;
					}
				}
			}
			if (unk_0x446519DBCF76642D(uVar0))
			{
				func_16();
				unk_0x52F20802944F8DCE();
			}
		}
		if (((!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()) && unk_0xD51CFE69539DB6D8(uVar0)) && !unk_0x2DFE588AA3727FE3()) && unk_0x2E6D4A0CE8AD9494(unk_0xBFAE5F9DEC53DAE2()))
		{
			if (unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == unk_0xB034B5B185BD9C69(uVar0))
			{
				bVar37 = false;
				iVar38 = unk_0x312FA2EB3948B47C(unk_0xE7869D5D7816A9B6(), &uVar3, -1);
				iVar39 = 0;
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					if (!unk_0x76B2D234F1895632(uVar3[iVar39]))
					{
						if (unk_0x23417CDB252083F9(uVar3[iVar39], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar37 = true;
						}
						else if (unk_0x23417CDB252083F9(uVar3[iVar39], "MP_COMMON_MISS", "HACK_LOOP", 3))
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
				if ((((((((((!bVar37 && !func_14(0)) && !unk_0x121E5731B289F6E9(unk_0xE7869D5D7816A9B6(), 0)) && !func_13()) && unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Var30, 0.6f, 0.6f, 0.8f, 0, 1, 1)) && unk_0x7EDEDFB3CB1ACEA0(unk_0xE7869D5D7816A9B6()) == unk_0x7EDEDFB3CB1ACEA0(iVar0)) && !unk_0xB519E5386FBF69E5(Global_2359301, 15)) && !func_12()) && !(Global_69236 && func_11())) && !(!Global_69236 && func_10())) && !(Global_69236 && unk_0xB519E5386FBF69E5(Global_1612326.f_14, 24)))
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
								if (!unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), unk_0x1141852D07400777(iVar0, 1), 1.5f, 1.5f, 4f, 0, 1, 1))
								{
									Global_67890 = 1;
								}
								if (Global_67887 || Global_67890)
								{
									bVar40 = false;
								}
								unk_0x4EDE34FBADD967A6(0);
							}
							while (Global_67887)
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
					if (unk_0xD51CFE69539DB6D8(uScriptParam_0))
					{
						if (!unk_0x7D7BF8DC8C822AC1(uScriptParam_0))
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
		if (unk_0x23029FE435A4B2A1(sVar2))
		{
			unk_0xE36ACDF40F238925(sVar2);
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
	return unk_0xB519E5386FBF69E5(Global_2432717.f_2, 11);
}

void func_5(int iParam0)
{
	Global_67896 = iParam0;
	switch (Global_67896)
	{
		case 3:
			Global_67894 = 0;
			break;
		
		case 4:
			Global_67894 = 3;
			break;
	}
	if (unk_0xFF6891E21E7FC193(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_69236 && func_11())
	{
		return;
	}
	if (!Global_69236 && func_10())
	{
		return;
	}
	if (!unk_0xD51489677E1B0844("appInternet"))
	{
		unk_0x5BA7CCA84A74BEA3("appInternet");
	}
	while (!unk_0xD51489677E1B0844("appInternet"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE81651AD79516E48("appInternet", 3584);
	unk_0x307B32C17692E50D("appInternet");
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
		if (Global_36319[iVar0 /*19*/])
		{
			Global_36319[iVar0 /*19*/].f_7 = 1;
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
		if (Global_36319[iVar0 /*19*/].f_1 == iParam0)
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
	if (!unk_0x2E6D4A0CE8AD9494(unk_0xBFAE5F9DEC53DAE2()))
	{
		return 0;
	}
	if (func_14(0))
	{
		return 0;
	}
	if (unk_0x2DFE588AA3727FE3())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36319[iVar0 /*19*/] == 1 && Global_36319[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36319[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36319[iVar0 /*19*/].f_5 = 1;
			Global_36319[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36319[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36319[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0xFF6891E21E7FC193(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xF478777FFCC96862())
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
		if (!Global_36319[iVar0 /*19*/])
		{
			Global_36319[iVar0 /*19*/] = 1;
			Global_36319[iVar0 /*19*/].f_1 = Global_36442;
			Global_36442++;
			Global_36319[iVar0 /*19*/].f_4 = 0;
			Global_36319[iVar0 /*19*/].f_17 = 0;
			Global_36319[iVar0 /*19*/].f_5 = 0;
			Global_36319[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36319[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36319[iVar0 /*19*/].f_6 = iParam3;
			Global_36319[iVar0 /*19*/].f_18 = unk_0xE3E113B4DB09AAF8();
			Global_36319[iVar0 /*19*/].f_7 = 0;
			Global_36319[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xF6917DE0E003509D(sParam4))
			{
				Global_36319[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36319[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36319[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_36319[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

var func_10()
{
	return Global_67888;
}

var func_11()
{
	return Global_1705078;
}

int func_12()
{
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (unk_0xBD6B21D725712BDE(unk_0x03291915DC767232(unk_0xE7869D5D7816A9B6()), -1) == unk_0xE7869D5D7816A9B6())
		{
			return 1;
		}
	}
	return 0;
}

int func_13()
{
	if (unk_0xFF6891E21E7FC193(joaat("player_timetable_scene")) > 0)
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
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
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
	return Global_35619 == iParam0;
}

void func_16()
{
	if (iLocal_46 != -1)
	{
		func_6(&iLocal_46);
	}
}

