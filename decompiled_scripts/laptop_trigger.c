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
	if (!unk_0x746960881FB19A89(uVar0))
	{
		unk_0xE60DEFFB2A853900();
	}
	if (unk_0xD63E63DFACCEB80E(3))
	{
		func_16();
		unk_0xE60DEFFB2A853900();
	}
	if (func_15(13) || func_15(14))
	{
		func_16();
		unk_0xE60DEFFB2A853900();
	}
	if (Global_30776)
	{
		func_16();
		unk_0xE60DEFFB2A853900();
	}
	if (Global_67064)
	{
		unk_0xE60DEFFB2A853900();
	}
	bVar1 = false;
	sVar2 = "tvscreen";
	bVar29 = true;
	Var30 = { unk_0x77009B1C011405A9(uVar0, 1) - unk_0x83A30AB34278DD93(uVar0) * Vector(0.6f, 0.6f, 0.6f) };
	Var30.f_2 = (Var30.f_2 + 0.5f);
	while (bVar29)
	{
		if (unk_0x746960881FB19A89(uVar0))
		{
			if (Global_1582863)
			{
				if (!bVar1)
				{
					iVar33 = unk_0xB6A50C909A8FABC3(uVar0);
					if (iVar33 == joaat("prop_laptop_01a"))
					{
						unk_0x39490CC949D831C4(unk_0x77009B1C011405A9(uScriptParam_0, 1), 1f, joaat("prop_laptop_01a"), 0);
						Var34 = { unk_0x045015AED79BD50E(uVar0, 2) };
						uVar0 = unk_0xA7DA1E6D4C99864B(joaat("prop_laptop_lester2"), unk_0x77009B1C011405A9(uVar0, 1), 0, 1, 0);
						unk_0x8F856D0103CF1B91(uVar0, Var34, 2, 1);
						bVar1 = true;
					}
				}
			}
			if (unk_0x4D66F29B0136D0A8(uVar0))
			{
				func_16();
				unk_0xE60DEFFB2A853900();
			}
		}
		if (((!unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()) && unk_0x746960881FB19A89(uVar0)) && !unk_0xC42238EA2EBA3C42()) && unk_0x378E80A2B7D7C8DF(unk_0x2563F6EECD8726D3()))
		{
			if (unk_0x835E5CA41A401AEB(unk_0x9F92518438215DD0()) == unk_0x835E5CA41A401AEB(uVar0))
			{
				bVar37 = false;
				iVar38 = unk_0x6E83F85086466E82(unk_0x9F92518438215DD0(), &uVar3, -1);
				iVar39 = 0;
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					if (!unk_0x0BA451447C3B1A8D(uVar3[iVar39]))
					{
						if (unk_0x3C17D9ED0E5F3FCA(uVar3[iVar39], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar37 = true;
						}
						else if (unk_0x3C17D9ED0E5F3FCA(uVar3[iVar39], "MP_COMMON_MISS", "HACK_LOOP", 3))
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
				if (((((((((!bVar37 && !func_14(0)) && !unk_0xFDFEC308151CBB48(unk_0x9F92518438215DD0(), 0)) && !func_13()) && unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Var30, 0.6f, 0.6f, 0.8f, 0, 1, 1)) && unk_0x472E9099FD38A1F9(unk_0x9F92518438215DD0()) == unk_0x472E9099FD38A1F9(iVar0)) && !unk_0x94E72F17611BCD3C(Global_2359301, 15)) && !func_12()) && !(Global_68245 && func_11())) && !(!Global_68245 && func_10()))
				{
					if (iLocal_45 == -1)
					{
						if (bVar1)
						{
							func_9(&iLocal_45, 1, "MPLA_BILL", 0, 0);
						}
						else
						{
							func_9(&iLocal_45, 1, "BROWSEINPUTTRIG", 0, 0);
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
								if (!unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), unk_0x77009B1C011405A9(iVar0, 1), 1.5f, 1.5f, 4f, 0, 1, 1))
								{
									Global_67061 = 1;
								}
								if (Global_67058 || Global_67061)
								{
									bVar40 = false;
								}
								unk_0x4EDE34FBADD967A6(0);
							}
							while (Global_67058)
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
					if (unk_0x746960881FB19A89(uScriptParam_0))
					{
						if (!unk_0x65E80118D23AFB04(uScriptParam_0))
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
		if (unk_0xF105313ACEF0ED40(sVar2))
		{
			unk_0xCAA77F4562BA6521(sVar2);
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
	Global_2428162.f_629 = 1;
}

var func_3()
{
	return Global_2428162.f_608;
}

bool func_4()
{
	return unk_0x94E72F17611BCD3C(Global_2428162.f_2, 11);
}

void func_5(int iParam0)
{
	Global_67067 = iParam0;
	switch (Global_67067)
	{
		case 3:
			Global_67065 = 0;
			break;
		
		case 4:
			Global_67065 = 3;
			break;
	}
	if (unk_0x7B47A371E2D93C2C(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_68245 && func_11())
	{
		return;
	}
	if (!Global_68245 && func_10())
	{
		return;
	}
	if (!unk_0x197501C41CB2403F("appInternet"))
	{
		unk_0x9AD29F8AF48B9AD1("appInternet");
	}
	while (!unk_0x197501C41CB2403F("appInternet"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE81651AD79516E48("appInternet", 3584);
	unk_0x45C517E671FFDD0E("appInternet");
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
		if (Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/].f_6 = 1;
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
		if (Global_35613[iVar0 /*18*/].f_1 == iParam0)
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
	if (!unk_0x378E80A2B7D7C8DF(unk_0x2563F6EECD8726D3()))
	{
		return 0;
	}
	if (func_14(0))
	{
		return 0;
	}
	if (unk_0xC42238EA2EBA3C42())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35613[iVar0 /*18*/] == 1 && Global_35613[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35613[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35613[iVar0 /*18*/].f_4 = 1;
			Global_35613[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35613[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35613[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)
{
	int iVar0;
	
	if (unk_0x7B47A371E2D93C2C(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x2D8FCFBC4E01FF7C())
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
		if (!Global_35613[iVar0 /*18*/])
		{
			Global_35613[iVar0 /*18*/] = 1;
			Global_35613[iVar0 /*18*/].f_1 = Global_35730;
			Global_35730++;
			Global_35613[iVar0 /*18*/].f_3 = 0;
			Global_35613[iVar0 /*18*/].f_16 = 0;
			Global_35613[iVar0 /*18*/].f_4 = 0;
			Global_35613[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35613[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35613[iVar0 /*18*/].f_5 = iParam3;
			Global_35613[iVar0 /*18*/].f_17 = unk_0x81ACA1EEF1E4410D();
			Global_35613[iVar0 /*18*/].f_6 = 0;
			if (!unk_0x9E9AFDBF482248F6(sParam4))
			{
				Global_35613[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35613[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35613[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35613[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

var func_10()
{
	return Global_67059;
}

var func_11()
{
	return Global_1685667;
}

int func_12()
{
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (unk_0xB5BBEB12C77EE430(unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0()), -1) == unk_0x9F92518438215DD0())
		{
			return 1;
		}
	}
	return 0;
}

int func_13()
{
	if (unk_0x7B47A371E2D93C2C(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_16()
{
	if (iLocal_45 != -1)
	{
		func_6(&iLocal_45);
	}
}

