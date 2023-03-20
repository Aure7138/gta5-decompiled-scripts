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
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_45 = -1;
	uVar0 = uScriptParam_0;
	if (!unk_0x538DF9E5B1DF01EB(uVar0))
	{
		unk_0x82706E6C897B0FA1();
	}
	if (unk_0x2C897F101BA20806(3))
	{
		func_16();
		unk_0x82706E6C897B0FA1();
	}
	if (func_15(13) || func_15(14))
	{
		func_16();
		unk_0x82706E6C897B0FA1();
	}
	if (Global_30778)
	{
		func_16();
		unk_0x82706E6C897B0FA1();
	}
	if (Global_67072)
	{
		unk_0x82706E6C897B0FA1();
	}
	bVar1 = false;
	sVar2 = "tvscreen";
	bVar29 = true;
	Var30 = { unk_0xBF8499F46AD9093A(uVar0, 1) - unk_0x0A0652D7F8135EB9(uVar0) * Vector(0.6f, 0.6f, 0.6f) };
	Var30.f_2 = (Var30.f_2 + 0.5f);
	while (bVar29)
	{
		if (unk_0x538DF9E5B1DF01EB(uVar0))
		{
			if (Global_1583709)
			{
				if (!bVar1)
				{
					iVar33 = unk_0xA609E58449080951(uVar0);
					if (iVar33 == joaat("prop_laptop_01a"))
					{
						unk_0x168B293008FF4D5C(unk_0xBF8499F46AD9093A(uScriptParam_0, 1), 1f, joaat("prop_laptop_01a"), 0);
						Var34 = { unk_0x1A6D58515B4120D5(uVar0, 2) };
						uVar0 = unk_0x8AC4394F3C9173EE(joaat("prop_laptop_lester2"), unk_0xBF8499F46AD9093A(uVar0, 1), 0, 1, 0);
						unk_0x0BBAD8A322CB595E(uVar0, Var34, 2, 1);
						bVar1 = true;
					}
				}
			}
			if (unk_0xED012347A7D86E02(uVar0))
			{
				func_16();
				unk_0x82706E6C897B0FA1();
			}
		}
		if (((!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()) && unk_0x538DF9E5B1DF01EB(uVar0)) && !unk_0xEC35DAD55FA4EEF2()) && unk_0x2AF80829930084FD(unk_0xA495B6AB6F2BF8C7()))
		{
			if (unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()) == unk_0x05681B6F593F0A9C(uVar0))
			{
				bVar37 = false;
				iVar38 = unk_0x8645B73431E623E0(unk_0xA16EC202D9D35357(), &uVar3, -1);
				iVar39 = 0;
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					if (!unk_0xE44A580B551C3645(uVar3[iVar39]))
					{
						if (unk_0x95EDB2DEFA5BB405(uVar3[iVar39], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar37 = true;
						}
						else if (unk_0x95EDB2DEFA5BB405(uVar3[iVar39], "MP_COMMON_MISS", "HACK_LOOP", 3))
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
				if (((((((((!bVar37 && !func_14(0)) && !unk_0x58E0437E9E98D6BB(unk_0xA16EC202D9D35357(), 0)) && !func_13()) && unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Var30, 0.6f, 0.6f, 0.8f, 0, 1, 1)) && unk_0xFFF3A70D01F7A468(unk_0xA16EC202D9D35357()) == unk_0xFFF3A70D01F7A468(iVar0)) && !unk_0x889D01384B54BCE3(Global_2359301, 15)) && !func_12()) && !(Global_68325 && func_11())) && !(!Global_68325 && func_10()))
				{
					if (iLocal_45 == -1)
					{
						if (bVar1)
						{
							func_9(&iLocal_45, 1, "MPLA_BILL", 0, 0, 0);
						}
						else
						{
							func_9(&iLocal_45, 1, "BROWSEINPUTTRIG", 0, 0, 0);
						}
					}
					if (func_8(iLocal_45, 1))
					{
						if (iLocal_45 != -1)
						{
							func_6(&iLocal_45);
						}
						if (!bVar1)
						{
							func_5(0);
							if (!iLocal_46)
							{
								func_1();
								iLocal_46 = 1;
							}
							bVar40 = true;
							while (bVar40)
							{
								if (!unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), unk_0xBF8499F46AD9093A(iVar0, 1), 1.5f, 1.5f, 4f, 0, 1, 1))
								{
									Global_67069 = 1;
								}
								if (Global_67066 || Global_67069)
								{
									bVar40 = false;
								}
								unk_0x4EDE34FBADD967A6(0);
							}
							while (Global_67066)
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							unk_0x4EDE34FBADD967A6(1000);
							iLocal_46 = 0;
						}
					}
				}
				else
				{
					if (iLocal_45 != -1)
					{
						func_6(&iLocal_45);
					}
					if (unk_0x538DF9E5B1DF01EB(uScriptParam_0))
					{
						if (!unk_0xC3AF8259DB162ECA(uScriptParam_0))
						{
							bVar29 = false;
						}
					}
				}
			}
			else if (iLocal_45 != -1)
			{
				func_6(&iLocal_45);
			}
		}
		else
		{
			if (iLocal_45 != -1)
			{
				func_6(&iLocal_45);
			}
			bVar29 = false;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (bVar1)
	{
		if (unk_0x2E968B59470173AB(sVar2))
		{
			unk_0xE30D9670F9320015(sVar2);
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
	Global_2428577.f_629 = 1;
}

var func_3()
{
	return Global_2428577.f_608;
}

bool func_4()
{
	return unk_0x889D01384B54BCE3(Global_2428577.f_2, 11);
}

void func_5(int iParam0)
{
	Global_67075 = iParam0;
	switch (Global_67075)
	{
		case 3:
			Global_67073 = 0;
			break;
		
		case 4:
			Global_67073 = 3;
			break;
	}
	if (unk_0x16CDA1894CFE0781(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_68325 && func_11())
	{
		return;
	}
	if (!Global_68325 && func_10())
	{
		return;
	}
	if (!unk_0x3EBB3CB89FC2CE55("appInternet"))
	{
		unk_0x19DD85EFF70867D4("appInternet");
	}
	while (!unk_0x3EBB3CB89FC2CE55("appInternet"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE81651AD79516E48("appInternet", 3584);
	unk_0xF8FDF7446A3DA9B4("appInternet");
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
		if (Global_35615[iVar0 /*19*/])
		{
			Global_35615[iVar0 /*19*/].f_7 = 1;
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
		if (Global_35615[iVar0 /*19*/].f_1 == iParam0)
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
	if (!unk_0x2AF80829930084FD(unk_0xA495B6AB6F2BF8C7()))
	{
		return 0;
	}
	if (func_14(0))
	{
		return 0;
	}
	if (unk_0xEC35DAD55FA4EEF2())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35615[iVar0 /*19*/] == 1 && Global_35615[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_35615[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_35615[iVar0 /*19*/].f_5 = 1;
			Global_35615[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_35615[iVar0 /*19*/] == 0)
			{
			}
			if (Global_35615[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0x16CDA1894CFE0781(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB4B5BF5882A555F9())
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
		if (!Global_35615[iVar0 /*19*/])
		{
			Global_35615[iVar0 /*19*/] = 1;
			Global_35615[iVar0 /*19*/].f_1 = Global_35738;
			Global_35738++;
			Global_35615[iVar0 /*19*/].f_4 = 0;
			Global_35615[iVar0 /*19*/].f_17 = 0;
			Global_35615[iVar0 /*19*/].f_5 = 0;
			Global_35615[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_35615[iVar0 /*19*/].f_8), sParam2, 16);
			Global_35615[iVar0 /*19*/].f_6 = iParam3;
			Global_35615[iVar0 /*19*/].f_18 = unk_0x60C807BBCBE66CC7();
			Global_35615[iVar0 /*19*/].f_7 = 0;
			Global_35615[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0x06771AF7795B3ECF(sParam4))
			{
				Global_35615[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_35615[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_35615[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_35615[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

var func_10()
{
	return Global_67067;
}

var func_11()
{
	return Global_1690475;
}

int func_12()
{
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		if (unk_0xD8A521688BDBE867(unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357()), -1) == unk_0xA16EC202D9D35357())
		{
			return 1;
		}
	}
	return 0;
}

int func_13()
{
	if (unk_0x16CDA1894CFE0781(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_16()
{
	if (iLocal_45 != -1)
	{
		func_6(&iLocal_45);
	}
}

