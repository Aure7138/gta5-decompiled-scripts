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
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
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
	iVar0 = iScriptParam_0;
	if (!unk_0x7239B21A38F536BA(iVar0))
	{
		unk_0x1090044AD1DA76FA();
	}
	if (unk_0xC968670BFACE42D9(3))
	{
		func_16();
		unk_0x1090044AD1DA76FA();
	}
	if (func_15(13) || func_15(14))
	{
		func_16();
		unk_0x1090044AD1DA76FA();
	}
	if (Global_2621550)
	{
		if (unk_0x2C83A9DA6BFFC4F9(1045109744) > 0)
		{
			func_16();
			unk_0x1090044AD1DA76FA();
		}
	}
	if (Global_30773)
	{
		func_16();
		unk_0x1090044AD1DA76FA();
	}
	if (Global_66886)
	{
		unk_0x1090044AD1DA76FA();
	}
	bVar1 = false;
	sVar2 = "tvscreen";
	bVar29 = true;
	Var30 = { unk_0x3FEF770D40960D5A(iVar0, true) - unk_0x0A794A5A57F8DF91(iVar0) * Vector(0.6f, 0.6f, 0.6f) };
	Var30.f_2 = (Var30.f_2 + 0.5f);
	while (bVar29)
	{
		if (unk_0x7239B21A38F536BA(iVar0))
		{
			if (Global_1582042)
			{
				if (!bVar1)
				{
					iVar33 = unk_0x9F47B058362C84B5(iVar0);
					if (iVar33 == joaat("prop_laptop_01a"))
					{
						unk_0x8A97BCA30A0CE478(unk_0x3FEF770D40960D5A(iScriptParam_0, true), 1f, joaat("prop_laptop_01a"), false);
						Var34 = { unk_0xAFBD61CC738D9EB9(iVar0, 2) };
						iVar0 = unk_0x509D5878EB39E842(joaat("prop_laptop_lester2"), unk_0x3FEF770D40960D5A(iVar0, true), false, true, false);
						unk_0x8524A8B0171D5E07(iVar0, Var34, 2, true);
						bVar1 = true;
					}
				}
			}
			if (unk_0x8ABFB70C49CC43E2(iVar0))
			{
				func_16();
				unk_0x1090044AD1DA76FA();
			}
		}
		if (((!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()) && unk_0x7239B21A38F536BA(iVar0)) && !unk_0xD3C2E180A40F031E()) && unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
		{
			if (unk_0x2107BA504071A6BB(unk_0xD80958FC74E988A6()) == unk_0x2107BA504071A6BB(iVar0))
			{
				bVar37 = false;
				iVar38 = unk_0x23F8F5FC7E8C4A6B(unk_0xD80958FC74E988A6(), &uVar3, -1);
				iVar39 = 0;
				iVar39 = 0;
				while (iVar39 < iVar38)
				{
					if (!unk_0x5F9532F3B5CC2551(uVar3[iVar39]))
					{
						if (unk_0x1F0B79228E461EC9(uVar3[iVar39], "MP_COMMON_MISS", "HACK_INTRO", 3))
						{
							bVar37 = true;
						}
						else if (unk_0x1F0B79228E461EC9(uVar3[iVar39], "MP_COMMON_MISS", "HACK_LOOP", 3))
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
				if (((((((((!bVar37 && !func_14(0)) && !unk_0x60DFD0691A170B88(unk_0xD80958FC74E988A6(), false)) && !func_13()) && unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Var30, 0.6f, 0.6f, 0.8f, false, true, 1)) && unk_0x47C2A06D4F5F424B(unk_0xD80958FC74E988A6()) == unk_0x47C2A06D4F5F424B(iVar0)) && !unk_0xA921AA820C25702F(Global_2359301, 15)) && !func_12()) && !(Global_68067 && func_11())) && !(!Global_68067 && func_10()))
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
								if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), unk_0x3FEF770D40960D5A(iVar0, true), 1.5f, 1.5f, 4f, false, true, 1))
								{
									Global_66883 = 1;
								}
								if (Global_66880 || Global_66883)
								{
									bVar40 = false;
								}
								unk_0x4EDE34FBADD967A6(0);
							}
							while (Global_66880)
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
					if (unk_0x7239B21A38F536BA(iScriptParam_0))
					{
						if (!unk_0xCCBA154209823057(iScriptParam_0))
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
		if (unk_0x78DCDC15C9F116B4(sVar2))
		{
			unk_0xE9F6FFE837354DD4(sVar2);
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
	Global_2427935.f_627 = 1;
}

var func_3()
{
	return Global_2427935.f_606;
}

bool func_4()
{
	return unk_0xA921AA820C25702F(Global_2427935.f_2, 11);
}

void func_5(int iParam0)
{
	Global_66889 = iParam0;
	switch (Global_66889)
	{
		case 3:
			Global_66887 = 0;
			break;
		
		case 4:
			Global_66887 = 3;
			break;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
	{
		return;
	}
	if (Global_68067 && func_11())
	{
		return;
	}
	if (!Global_68067 && func_10())
	{
		return;
	}
	if (!unk_0xE6CC9F3BA0FB9EF1("appInternet"))
	{
		unk_0x6EB5F71AA68F2E8E("appInternet");
	}
	while (!unk_0xE6CC9F3BA0FB9EF1("appInternet"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE81651AD79516E48("appInternet", 3584);
	unk_0xC90D2DCACD56184C("appInternet");
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
		if (Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/].f_6 = 1;
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
		if (Global_35609[iVar0 /*18*/].f_1 == iParam0)
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
	if (!unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
	{
		return 0;
	}
	if (func_14(0))
	{
		return 0;
	}
	if (unk_0xD3C2E180A40F031E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/] == 1 && Global_35609[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35609[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35609[iVar0 /*18*/].f_4 = 1;
			Global_35609[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35609[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35609[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

void func_9(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)
{
	int iVar0;
	
	if (unk_0x2C83A9DA6BFFC4F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xD9D2CFFF49FAB35F())
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
		if (!Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/] = 1;
			Global_35609[iVar0 /*18*/].f_1 = Global_35726;
			Global_35726++;
			Global_35609[iVar0 /*18*/].f_3 = 0;
			Global_35609[iVar0 /*18*/].f_16 = 0;
			Global_35609[iVar0 /*18*/].f_4 = 0;
			Global_35609[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35609[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35609[iVar0 /*18*/].f_5 = iParam3;
			Global_35609[iVar0 /*18*/].f_17 = unk_0xC30338E8088E2E21();
			Global_35609[iVar0 /*18*/].f_6 = 0;
			if (!unk_0xCA042B6957743895(sParam4))
			{
				Global_35609[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35609[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35609[iVar0 /*18*/].f_11 = 0;
			}
			*iParam0 = Global_35609[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

var func_10()
{
	return Global_66881;
}

var func_11()
{
	return Global_1681499;
}

int func_12()
{
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (unk_0xBB40DD2270B65366(unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6()), -1) == unk_0xD80958FC74E988A6())
		{
			return 1;
		}
	}
	return 0;
}

int func_13()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("player_timetable_scene")) > 0)
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
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
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
	return Global_34909 == iParam0;
}

void func_16()
{
	if (iLocal_45 != -1)
	{
		func_6(&iLocal_45);
	}
}

