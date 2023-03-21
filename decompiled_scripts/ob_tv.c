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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	char cLocal_62[64] = "";
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	int iScriptParam_0 = 0;
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_35 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	StringCopy(&cLocal_46, "NULL", 64);
	StringCopy(&cLocal_62, "NULL", 64);
	if (unk_0x9EC5BDC006623C42(2))
	{
		func_67();
	}
	if (unk_0x765F6FEEFF39224F(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_66();
		if (unk_0x765F6FEEFF39224F(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_65() && !func_64())) && !func_63(iLocal_43))
			{
				func_67();
			}
			if ((unk_0x71EC91BA8C88BCE0() && unk_0xC043A1CA19EA599D() != 3) && unk_0x469BF85808505E83() == 3)
			{
				func_67();
			}
			if (func_62(13) || func_62(14))
			{
				func_67();
			}
			if (unk_0x68B9F6D5580D0106(iScriptParam_0, 0))
			{
				func_67();
			}
			if (unk_0x68135A7434393CC1(iScriptParam_0))
			{
				if (unk_0xF272A2699B521CE6(unk_0x95B959F18401C09A()))
				{
					func_61();
					if (unk_0xE80842D7B53F8525(iScriptParam_0) < 950)
					{
						func_67();
					}
					switch (iLocal_29)
					{
						case 0:
							func_58();
							if (iLocal_43 == 5)
							{
								if (func_57(18) == 1 && func_57(20) == 0)
								{
									uLocal_41 = unk_0x4ACCC545ABA180AC(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0xC0832B9258378F00(uLocal_41))
									{
										unk_0xED0F188B4F015CBB(uLocal_41, 9);
									}
									unk_0x5894DC159447E10A();
								}
							}
							if (iLocal_43 == -1)
							{
								func_67();
							}
							else
							{
								func_56();
								unk_0xCA3FF712B8291E1C("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0xCB7F618CC6FABC72(0);
								Global_25825[iLocal_43 /*11*/].f_2 = 0;
								Global_25825[iLocal_43 /*11*/].f_6 = 1;
								Global_25825[iLocal_43 /*11*/] = unk_0x9EC3B269A34A2BEE(0, 2);
								Global_25825[iLocal_43 /*11*/].f_1 = 0;
								Global_25825[iLocal_43 /*11*/].f_4 = 0;
								Global_25825[iLocal_43 /*11*/].f_7 = 0;
								Global_25825[iLocal_43 /*11*/].f_8 = 0;
								Global_25825[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_54(&uLocal_26);
								func_52();
								func_51();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x09287BFEE1D9F6EF(unk_0x95B959F18401C09A(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0xA4E357ABBEF712C9(iLocal_37) && unk_0x71D489B4139EA15B(iLocal_37, 1119092736))
							{
								if (func_43() || Global_25825[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_42(&iLocal_42);
							}
							break;
						
						case 2:
							func_52();
							if (!func_63(iLocal_43))
							{
								func_42(&iLocal_42);
								if (func_41("TV_HLP1"))
								{
									unk_0xEDF90B96BED57BCE(1);
								}
							}
							if (unk_0x765F6FEEFF39224F(iLocal_37))
							{
								if (!unk_0x042B0E494045A7DF(iLocal_37))
								{
									unk_0x0CDD28A9DFCE2FCE(iLocal_37, 1, 0);
								}
							}
							if (unk_0x765F6FEEFF39224F(iLocal_39))
							{
								if (!unk_0x042B0E494045A7DF(iLocal_39))
								{
									unk_0x0CDD28A9DFCE2FCE(iLocal_39, 1, 0);
								}
							}
							if (unk_0x765F6FEEFF39224F(iLocal_38))
							{
								if (unk_0x042B0E494045A7DF(iLocal_38))
								{
									unk_0x0CDD28A9DFCE2FCE(iLocal_38, 0, 0);
								}
							}
							if (!unk_0xCE3CFF625BEBAA04(&cLocal_46, "NULL"))
							{
								unk_0x37C9B4B0237ED18F(&cLocal_46, 0);
							}
							unk_0x72DA74D655FEA173(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x765F6FEEFF39224F(iLocal_40))
							{
								unk_0x82D28E74ADD05E99(iLocal_40);
							}
							if (!func_63(iLocal_43))
							{
								if ((Global_25825[iLocal_43 /*11*/] == 3 || Global_25825[iLocal_43 /*11*/] == 2) || Global_25825[iLocal_43 /*11*/] == -1)
								{
									Global_25825[iLocal_43 /*11*/] = unk_0x9EC3B269A34A2BEE(0, 2);
								}
								unk_0xFD3C67782AAE4E02(Global_25825[iLocal_43 /*11*/]);
								unk_0xE1E76F5934C3ED99(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25825[iLocal_43 /*11*/];
								iLocal_45 = Global_25825[iLocal_43 /*11*/].f_1;
								unk_0x2496A90A55756159(iLocal_44, func_40(iLocal_45), Global_25825[iLocal_43 /*11*/].f_9);
								unk_0xFD3C67782AAE4E02(iLocal_44);
								if (Global_25825[iLocal_43 /*11*/].f_7)
								{
									Global_25825[iLocal_43 /*11*/].f_5 = 0;
									Global_25825[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25825[iLocal_43 /*11*/].f_2 = 1;
							func_39(133, 1);
							func_39(131, 1);
							func_39(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25825[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25825[iLocal_43 /*11*/].f_7 && func_63(iLocal_43))
							{
								Global_25825[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_37(iLocal_43))
							{
								func_36();
								iLocal_29 = 5;
							}
							else
							{
								func_34();
								if (unk_0xBA12BA352FFFFCDF() == -1)
								{
									unk_0xFD3C67782AAE4E02(Global_25825[iLocal_43 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_37(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_25825[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_42(&iLocal_42);
							}
							Global_25825[iLocal_43 /*11*/].f_5 = 0;
							Global_25825[iLocal_43 /*11*/].f_4 = 0;
							Global_25825[iLocal_43 /*11*/].f_1 = 0;
							Global_25825[iLocal_43 /*11*/].f_2 = 0;
							Global_25825[iLocal_43 /*11*/].f_7 = 0;
							Global_25825[iLocal_43 /*11*/].f_8 = 0;
							Global_25825[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_67();
			unk_0x5894DC159447E10A();
		}
	}
	func_67();
	unk_0x5894DC159447E10A();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25825[iLocal_43 /*11*/] = unk_0xBA12BA352FFFFCDF();
	}
	fLocal_30 = unk_0x98AF80EEF7419E0D();
	unk_0xFD3C67782AAE4E02(-1);
	func_4();
	if (unk_0x1BCDA92AD0A7835B(joaat("family5")) == 0)
	{
		if (!unk_0xCE3CFF625BEBAA04(&cLocal_46, "NULL"))
		{
			unk_0x37C9B4B0237ED18F(&cLocal_46, 1);
		}
	}
	if (((func_41("TV_HLP1") || func_41("TV_HLP2")) || func_41("TV_HLP5")) || func_41("TV_HLP6"))
	{
		unk_0xEDF90B96BED57BCE(1);
	}
	func_3();
	func_51();
	if (unk_0x765F6FEEFF39224F(iLocal_38))
	{
		if (!unk_0x042B0E494045A7DF(iLocal_38))
		{
			unk_0x0CDD28A9DFCE2FCE(iLocal_38, 1, 0);
		}
	}
	unk_0x7177E24B80B556E6(0);
	func_2();
}

void func_2()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (iLocal_87 == 1)
		{
			unk_0x01B3F43DF6F208D4();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0x93B6B00E52590FB9(iLocal_35);
		if (unk_0x765F6FEEFF39224F(iLocal_37))
		{
			if (unk_0x541D5C57194E73C4(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x541D5C57194E73C4(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x0CDD28A9DFCE2FCE(iLocal_37, 0, 0);
				if (unk_0x541D5C57194E73C4(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x5263FF82360FF7E2(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x5263FF82360FF7E2(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x765F6FEEFF39224F(iLocal_39))
	{
		unk_0x0CDD28A9DFCE2FCE(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0x63F0B040CE6EDF0F(0, 0, 3000, 1, 0, 0);
		if (unk_0x49D25022440E65EE(uLocal_78))
		{
			unk_0x189377BFBDC9127F(uLocal_78, 0);
		}
		unk_0x2F8A4DF7D0DFF0A8(uLocal_78, 0);
		unk_0xC7E6A5D90DED6E0B(0);
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), 0);
			unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
			unk_0xAE5B044AA2973E2A(unk_0x33CD235DF1E6A94E(), Local_31, 1, 0, 2);
			if (!unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), 1, 0);
				}
			}
			unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), 1, 0);
		}
		if (!unk_0xCE3CFF625BEBAA04(&cLocal_62, "NULL"))
		{
			if (unk_0x7C71681384076318(&cLocal_62))
			{
				unk_0x7CED302277C0F3D3(&cLocal_62);
			}
		}
		if (unk_0x765F6FEEFF39224F(iLocal_39))
		{
			unk_0x0CDD28A9DFCE2FCE(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0, 0, 0);
		unk_0x7177E24B80B556E6(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0xCBE6E2953ED9652D(unk_0x95B959F18401C09A());
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 1);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 1);
		func_14(1);
		unk_0x9F86AEF7DC996029();
		unk_0x68F7298CC6F16961();
		if (Global_14553.f_1 > 3)
		{
			if (unk_0xA30F14B621E3269D())
			{
				unk_0xD92171BC6C48DB90(0);
			}
			if (!func_13())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_14(0);
		unk_0xD384C2E6BE0D5ABF();
		Global_56500 = 0;
		if (bParam1)
		{
			unk_0x36296F11E96E764D();
		}
		unk_0xF4197686EF83F52A(unk_0x95B959F18401C09A(), 0);
		unk_0x11D1216D8F205785(unk_0x95B959F18401C09A(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0xB331FCEB94EB05C8())
		{
			if (((((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_10(unk_0x95B959F18401C09A())) && !func_7(unk_0x95B959F18401C09A(), 0)) && !func_6()) && !bParam4) && !bParam5)
			{
				unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), 0);
			}
		}
		else if (((!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()) && !func_10(unk_0x95B959F18401C09A())) && !bParam4) && !bParam5)
		{
			unk_0x9611832841071B69(unk_0x33CD235DF1E6A94E(), 0);
		}
		Global_71588 = 0;
	}
}

bool func_6()
{
	return unk_0x0E4018692D92041D(Global_1589819[unk_0x95B959F18401C09A() /*818*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x95B959F18401C09A())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC4DEA49C5B465481(iParam0))
		{
			bVar0 = unk_0x12D3B4C76D4AAB00(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312745;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0x95B959F18401C09A())
		{
			return 1;
		}
	}
	if (unk_0x0E4018692D92041D(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0x0E4018692D92041D(Global_2359302, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0xAB923D8907C25634() != iParam0 && uParam2)
		{
			unk_0xE5E26871D8586417(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 13);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 13);
	}
}

int func_15()
{
	if (!func_63(iLocal_43))
	{
		if (((((((func_30(&uLocal_26) >= 1f && unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x65F35477FEAD6F0F(iLocal_37) == unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E())) && !func_29(8, -1)) && !unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0)) && unk_0xC5DC7627BD3861CF(unk_0x33CD235DF1E6A94E(), Local_31, 90f)) && !unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E())) && !unk_0x71EC91BA8C88BCE0())
		{
			if (iLocal_42 == -1)
			{
				func_28();
				func_27(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_25(iLocal_42, 1))
			{
				func_42(&iLocal_42);
				func_54(&uLocal_26);
				Global_25825[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0xBE799439B122CA21("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_41("TV_HLP5"))
			{
				unk_0xEDF90B96BED57BCE(1);
			}
			func_2();
			func_42(&iLocal_42);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_85 == 0)
	{
		unk_0x144904D2EAA84341(2, 222);
		if (unk_0x833B1A3D9F713E03(2, 222))
		{
			func_42(&iLocal_42);
			func_27(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_24();
		}
	}
	else
	{
		unk_0x3FD9339AA95E323F(2, 200, 1);
		if (unk_0x042B0E494045A7DF(unk_0x33CD235DF1E6A94E()))
		{
			unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
			{
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), 0, 0);
			}
		}
		unk_0xF3F3DC87D7163212();
		unk_0xCB4FB82994217EC0(unk_0x33CD235DF1E6A94E());
		func_22(1, 1);
		unk_0x144904D2EAA84341(2, 222);
		func_17(0);
		if (unk_0x833B1A3D9F713E03(2, 222) || (unk_0x5D79F3D06EB318A0(2) && unk_0xC6FADCE8D6467372(2, 200)))
		{
			func_42(&iLocal_42);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (func_21())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(iParam0);
		}
		unk_0x8950ED5730F62EE8(&Global_2424, 2);
	}
}

void func_18(int iParam0)
{
	if (func_21())
	{
		return;
	}
	if (Global_14725)
	{
		func_19(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		unk_0x8950ED5730F62EE8(&Global_2424, 16);
	}
	if (unk_0xA30F14B621E3269D())
	{
		unk_0xD92171BC6C48DB90(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		unk_0x8950ED5730F62EE8(&Global_2423, 30);
	}
	else
	{
		unk_0xCE689A8E8C42ED78(&Global_2423, 30);
	}
	if (!func_13())
	{
		Global_14553.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_20(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				unk_0x4951EE4BB7B6B4F7(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			unk_0x727F454F1D40BAE4(Global_14490);
		}
		else
		{
			unk_0x727F454F1D40BAE4(Global_14481);
		}
	}
}

int func_20(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (unk_0x0E4018692D92041D(Global_2423, 14))
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
	if (unk_0x1BCDA92AD0A7835B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_21()
{
	return unk_0x0E4018692D92041D(Global_1681628, 19);
}

void func_22(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_23(0))
		{
			if (!iLocal_22)
			{
				if (unk_0xBE799439B122CA21("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x0F8EAEEC97DDBCB3(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0xBA12BA352FFFFCDF() == 0)
				{
					unk_0xFD3C67782AAE4E02(1);
				}
				else
				{
					unk_0xFD3C67782AAE4E02(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0xC6A1EC79D232D93C(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x98AF80EEF7419E0D();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0xE1E76F5934C3ED99(fVar2);
				iLocal_24 = unk_0xE3903F59E2F22150();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x98AF80EEF7419E0D();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0xE1E76F5934C3ED99(fVar2);
				iLocal_24 = unk_0xE3903F59E2F22150();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0xBE799439B122CA21("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x0F8EAEEC97DDBCB3(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0xE3903F59E2F22150() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0xC6A1EC79D232D93C(2, 218) - 127);
	if (iParam0 || unk_0x83666F9FB8FEBD4B() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			unk_0xC1B1E9A034A63A62(0);
			return 1;
		}
	}
	return 0;
}

void func_24()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_85 == 0)
	{
		uLocal_78 = unk_0x392F736BA9C4A337("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0x31447C964D5B1A9B(uLocal_78, 100f);
		unk_0x189377BFBDC9127F(uLocal_78, 1);
		unk_0x63F0B040CE6EDF0F(1, 0, 3000, 1, 0, 0);
		if (unk_0x765F6FEEFF39224F(iLocal_39))
		{
			unk_0x0CDD28A9DFCE2FCE(iLocal_39, 0, 0);
		}
		if (!unk_0xBC2FC12AD0FBF72E(unk_0x33CD235DF1E6A94E()))
		{
			unk_0xF70578F5CD9822CB(unk_0x33CD235DF1E6A94E(), 1);
			unk_0xED68CDDDE25A144E(unk_0x33CD235DF1E6A94E());
			if (unk_0x5A8ABDA4992DA968(unk_0x95B959F18401C09A()))
			{
				unk_0x3449EA232F9B8EAD(unk_0x95B959F18401C09A(), 0, 0);
				bLocal_36 = true;
			}
			unk_0xAE5B044AA2973E2A(unk_0x33CD235DF1E6A94E(), Local_31, -1, 0, 2);
			unk_0x0CDD28A9DFCE2FCE(unk_0x33CD235DF1E6A94E(), 0, 0);
		}
		if (!unk_0xCE3CFF625BEBAA04(&cLocal_62, "NULL"))
		{
			if (!unk_0x7C71681384076318(&cLocal_62))
			{
				unk_0xDEFB5E2E5CBD460A(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0, 0, 0);
		unk_0x7177E24B80B556E6(1);
		iLocal_85 = 1;
	}
}

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_26(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xF272A2699B521CE6(unk_0x3EE1295CEFBEFED4()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (unk_0x286C823E0969F22A())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/] == 1 && Global_37139[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_37139[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_37139[iVar0 /*32*/].f_5 = 1;
			Global_37139[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_37139[iVar0 /*32*/] == 0)
			{
			}
			if (Global_37139[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
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
		if (Global_37139[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x1BCDA92AD0A7835B(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x71EC91BA8C88BCE0())
	{
		if (!*iParam0 == -1)
		{
			func_42(iParam0);
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
		if (!Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/] = 1;
			Global_37139[iVar0 /*32*/].f_1 = Global_37340;
			Global_37340++;
			Global_37139[iVar0 /*32*/].f_4 = 0;
			Global_37139[iVar0 /*32*/].f_29 = 0;
			Global_37139[iVar0 /*32*/].f_5 = 0;
			Global_37139[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_37139[iVar0 /*32*/].f_8), sParam2, 16);
			Global_37139[iVar0 /*32*/].f_6 = iParam3;
			Global_37139[iVar0 /*32*/].f_31 = unk_0x8C40DC84EDF05997();
			Global_37139[iVar0 /*32*/].f_7 = 0;
			Global_37139[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x786AF4A44E1B5B4B(sParam4))
			{
				Global_37139[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_37139[iVar0 /*32*/].f_13), sParam4, 64);
				Global_37139[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_37139[iVar0 /*32*/].f_12 = 0;
				Global_37139[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_37139[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_28()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (iLocal_87 == 0)
		{
			unk_0xD6D4E1E1597D7BB6("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

bool func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return unk_0x0E4018692D92041D(Global_1371947.f_1048, iParam0);
}

float func_30(var uParam0)
{
	if (func_33(uParam0))
	{
		if (func_32(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_31(unk_0x0E4018692D92041D(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_31(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xE3903F59E2F22150());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		iVar2 = unk_0x78DCC5D0CB43DEBA();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xE3903F59E2F22150()) / 1000f);
}

bool func_32(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 2);
}

bool func_33(var uParam0)
{
	return unk_0x0E4018692D92041D(*uParam0, 1);
}

void func_34()
{
	float fVar0;
	
	fVar0 = 1f;
	func_35(&fVar0);
	unk_0x93B6B00E52590FB9(iLocal_35);
	unk_0x5C58D0ADA22491FA(4);
	unk_0xF01D71D732A00CE6(1);
	unk_0x7C1FFFBCCF6DB76C(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x93B6B00E52590FB9(unk_0x0CE9F8D3BDD7206B());
}

void func_35(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x63151314B8B4D6EB(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_36()
{
	Global_25825[iLocal_43 /*11*/].f_7 = 0;
	Global_25825[iLocal_43 /*11*/] = unk_0xBA12BA352FFFFCDF();
	fLocal_30 = unk_0x98AF80EEF7419E0D();
	if (unk_0x7C71681384076318(&cLocal_62))
	{
		unk_0x7CED302277C0F3D3(&cLocal_62);
	}
	if (((func_41("TV_HLP1") || func_41("TV_HLP2")) || func_41("TV_HLP5")) || func_41("TV_HLP6"))
	{
		unk_0xEDF90B96BED57BCE(1);
	}
	func_42(&iLocal_42);
	unk_0xFD3C67782AAE4E02(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_51();
}

int func_37(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_38(unk_0x95B959F18401C09A()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_38(int iParam0)
{
	return unk_0xFBB1F99A825CAB09(unk_0x378BD4B3881338C2(iParam0), 0);
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xB331FCEB94EB05C8())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		unk_0x75D54ED6C1AD1642(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x12B6E23F244DDB0F(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_40(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_41(char* sParam0)
{
	unk_0x6D39881CA5436178(sParam0);
	return unk_0xA32C2C4DF096C08A(0);
}

void func_42(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_26(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_37139[iVar0 /*32*/])
		{
			Global_37139[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_43()
{
	if (func_30(&uLocal_26) < 1f)
	{
		func_42(&iLocal_42);
		return 0;
	}
	if ((!unk_0x18FB647D79B09657(unk_0x33CD235DF1E6A94E(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0xC5DC7627BD3861CF(unk_0x33CD235DF1E6A94E(), Local_31, 90f)) || unk_0x3AF2B3B68DD52355(unk_0x33CD235DF1E6A94E()))
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (unk_0x65F35477FEAD6F0F(iLocal_37) != unk_0x65F35477FEAD6F0F(unk_0x33CD235DF1E6A94E()))
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (func_29(8, -1))
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (unk_0xF0D230FB550CD6EB(unk_0x33CD235DF1E6A94E(), 0))
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (Global_90640)
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (Global_25825[iLocal_43 /*11*/].f_8)
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1)
	{
		func_27(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_25(iLocal_42, 1))
	{
		func_42(&iLocal_42);
		func_54(&uLocal_26);
		Global_25825[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0xBE799439B122CA21("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0x0F8EAEEC97DDBCB3(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_44(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_44(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_50((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106565.f_10188[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106565.f_10188[iParam0 /*12*/].f_6 == 11 || Global_106565.f_10188[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106565.f_10188[iParam0 /*12*/].f_5 = 1;
		Global_106565.f_10188[iParam0 /*12*/].f_10 = iParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3BDFDF06B92DF21C(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_45();
	}
}

void func_45()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_106301 = 0;
	Global_106302 = 0;
	Global_106303 = 0;
	Global_106304 = 0;
	Global_106305 = 0;
	Global_106306 = 0;
	Global_106307 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106565.f_10188.f_3853;
	Global_106565.f_10188.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106565.f_10188[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106565.f_10188[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_106301++;
					fVar1 = (fVar1 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_106302++;
					fVar2 = (fVar2 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_106303++;
					fVar3 = (fVar3 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_106304++;
					fVar4 = (fVar4 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_106305++;
					fVar5 = (fVar5 + (Global_106565.f_10188[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_106306++;
					fVar6 = (fVar6 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_106307++;
					fVar7 = (fVar7 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_106284 > 0)
	{
		if (Global_106301 == Global_106284)
		{
			fVar1 = 55f;
		}
	}
	if (Global_106285 > 0)
	{
		if (Global_106302 == Global_106285)
		{
			fVar2 = 10f;
		}
	}
	if (Global_106286 > 0)
	{
		if (Global_106303 == Global_106286)
		{
			fVar3 = 0f;
		}
	}
	if (Global_106287 > 0)
	{
		if (Global_106304 == Global_106287)
		{
			fVar4 = 10f;
		}
	}
	if (Global_106288 > 0)
	{
		if (((Global_106305 == Global_106288 || (Global_106288 * 10 / Global_106305) < 41) || Global_106305 > Global_106291) || Global_106305 == Global_106291)
		{
			if (!unk_0x0E4018692D92041D(Global_106565.f_10188.f_3856, 14))
			{
				if (Global_106305 == Global_106288)
				{
					unk_0x3BDFDF06B92DF21C(joaat("num_rndevents_completed"), Global_106288, 0);
					unk_0x8950ED5730F62EE8(&(Global_106565.f_10188.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_106289 > 0)
	{
		if (Global_106306 == Global_106289)
		{
			fVar6 = 15f;
		}
	}
	if (Global_106290 > 0)
	{
		if (Global_106307 == Global_106290)
		{
			fVar7 = 5f;
		}
	}
	Global_106565.f_10188.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_106305 > Global_106291 || Global_106305 == Global_106291)
	{
		iVar9 = Global_106291;
	}
	else
	{
		iVar9 = Global_106305;
	}
	unk_0x12B6E23F244DDB0F(joaat("num_missions_completed"), Global_106301, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_missions_available"), Global_106284, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_minigames_completed"), Global_106302, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_minigames_available"), Global_106285, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_oddjobs_completed"), Global_106303, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_oddjobs_available"), Global_106286, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndpeople_completed"), Global_106304, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndpeople_available"), Global_106287, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_rndevents_available"), Global_106291, 1);
	unk_0x12B6E23F244DDB0F(joaat("num_misc_completed"), (Global_106307 + Global_106306), 1);
	unk_0x12B6E23F244DDB0F(joaat("num_misc_available"), (Global_106290 + Global_106289), 1);
	Global_106308 = (Global_106301 * 100 / Global_106284);
	Global_106310 = ((Global_106303 + Global_106302) * 100 / (Global_106286 + Global_106285));
	Global_106309 = ((Global_106304 + iVar9) * 100 / (Global_106287 + Global_106291));
	Global_106311 = ((Global_106306 + Global_106307) * 100 / (Global_106289 + Global_106290));
	unk_0xB04A838EE49FBBAD(joaat("total_progress_made"), Global_106565.f_10188.f_3853, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_story_missions"), Global_106308, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_ambient_missions"), Global_106309, 1);
	unk_0x12B6E23F244DDB0F(joaat("percent_oddjobs"), Global_106310, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_106565.f_10188.f_3853))
	{
		func_49(13, unk_0xF34EE736CF047844(Global_106565.f_10188.f_3853));
	}
	if (!unk_0xDC17890B0B8B5081())
	{
		if (!Global_71590)
		{
			if (func_48() == 2 == 0 && !unk_0xB331FCEB94EB05C8())
			{
				if (unk_0xB16BC34F6CB4A57A())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_46();
				}
			}
		}
	}
}

int func_46()
{
	if (func_47(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

bool func_47(bool bParam0)
{
	if (!bParam0 && unk_0x1BCDA92AD0A7835B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x0E4018692D92041D(Global_71838, 0);
}

int func_48()
{
	return Global_25765;
}

int func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x95FB4F650A03D477(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x6DD215A8A3129C26(iParam0, iParam1);
	}
	return 0;
}

int func_50(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x7FB03A24AC826003((iParam0 - 0)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x7FB03A24AC826003((iParam0 - 192)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x7FB03A24AC826003((iParam0 - 513)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xC5F16F1F6EFB8A7A((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x7FB03A24AC826003((iParam0 - 705)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xD9ABF415C92ECCBC((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x7FB03A24AC826003((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xD9ABF415C92ECCBC((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x7FB03A24AC826003((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x8951614902E1632F((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x7FB03A24AC826003((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x8951614902E1632F((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x7FB03A24AC826003((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x8951614902E1632F((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x7FB03A24AC826003((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x8951614902E1632F((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x7FB03A24AC826003((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x8951614902E1632F((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x7FB03A24AC826003((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x8951614902E1632F((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x7FB03A24AC826003((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x8951614902E1632F((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x7FB03A24AC826003((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x8951614902E1632F((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x7FB03A24AC826003((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x8951614902E1632F((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x7FB03A24AC826003((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x8951614902E1632F((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x7FB03A24AC826003((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x8951614902E1632F((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x7FB03A24AC826003((iParam0 - 22066)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0x8951614902E1632F((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x7FB03A24AC826003((iParam0 - 24962)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0x8951614902E1632F((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x7FB03A24AC826003((iParam0 - 26810)) * 64);
		iVar0 = unk_0x4393F207A5284B7C(uVar20, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_51()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x464516DA815840A7("tvscreen"))
	{
		unk_0xBFCA64EE1B88FD4E("tvscreen");
		iLocal_35 = -1;
		unk_0x93B6B00E52590FB9(unk_0x0CE9F8D3BDD7206B());
	}
}

void func_52()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_53();
	}
	if (unk_0x464516DA815840A7("tvscreen"))
	{
		unk_0xBFCA64EE1B88FD4E("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x765F6FEEFF39224F(iLocal_37))
	{
		func_67();
	}
	iVar0 = unk_0x541D5C57194E73C4(iLocal_37);
	unk_0x043937B909498729("tvscreen", 0);
	unk_0xB1D0D338D38FBD61(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x9C23A9EC7E5DE766(iVar0))
		{
			if (!unk_0x765F6FEEFF39224F(iLocal_37))
			{
				func_67();
			}
			if (!unk_0x68135A7434393CC1(iLocal_37))
			{
				func_67();
			}
			if (!unk_0x464516DA815840A7("tvscreen"))
			{
				unk_0x043937B909498729("tvscreen", 0);
			}
			if (!unk_0x9C23A9EC7E5DE766(iVar0))
			{
				unk_0xB1D0D338D38FBD61(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0x61A52F6201AA9959("tvscreen");
	func_3();
}

void func_53()
{
	if (unk_0x765F6FEEFF39224F(iLocal_37))
	{
		if (unk_0x541D5C57194E73C4(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0xDD9A603448A23A17(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0x3C990C409B3845DE(iLocal_37, uLocal_34);
	unk_0xF70578F5CD9822CB(iLocal_37, 1);
	unk_0x0CDD28A9DFCE2FCE(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0xDD9A603448A23A17(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0x3C990C409B3845DE(iLocal_39, uLocal_34);
	unk_0xF70578F5CD9822CB(iLocal_39, 1);
	unk_0x0CDD28A9DFCE2FCE(iLocal_39, 0, 0);
}

void func_54(var uParam0)
{
	func_55(uParam0, 0f);
}

void func_55(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_31(unk_0x0E4018692D92041D(*uParam0, 4)) - fParam1);
	unk_0x8950ED5730F62EE8(uParam0, 1);
	unk_0xCE689A8E8C42ED78(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_56()
{
}

int func_57(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

void func_58()
{
	Local_31 = { unk_0xFBB1F99A825CAB09(iLocal_37, 1) };
	uLocal_34 = unk_0xC472E34C8FBEC678(iLocal_37);
	func_60();
	if (unk_0x541D5C57194E73C4(iLocal_37) == joaat("prop_tv_03"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_43 = 0;
			Local_79 = { -9.8135f, -1440.913f, 31.3654f };
			Local_82 = { 0f, 0f, -134.3211f };
			Local_88 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x541D5C57194E73C4(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			Local_79 = { 1978.23f, 3819.65f, 34.2724f };
			Local_82 = { 0f, 0f, -105.15f };
			Local_88 = { 1978.33f, 3819.717f, 32.4501f };
			func_59();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x541D5C57194E73C4(iLocal_37) == joaat("prop_tv_flat_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_43 = 1;
			Local_79 = { 2.5724f, 527.9989f, 176.1619f };
			Local_82 = { 0f, 0f, -29.9488f };
			Local_88 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x541D5C57194E73C4(iLocal_37) == joaat("prop_tv_flat_02"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_43 = 3;
			Local_79 = { -1160.502f, -1520.76f, 10.7393f };
			Local_82 = { 0f, 0f, 60.061f };
			Local_88 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_46, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_62, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x541D5C57194E73C4(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x541D5C57194E73C4(iLocal_37) == joaat("v_ilev_mm_scre_off"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_43 = 4;
			Local_79 = { -802.8972f, 172.537f, 74.5801f };
			Local_82 = { 0f, 0f, -69.0273f };
			Local_88 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x541D5C57194E73C4(iLocal_37) == joaat("des_tvsmash_start"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_43 = 5;
			Local_79 = { -808.3051f, 171.2623f, 77.2822f };
			Local_82 = { 1.8886f, 0f, 110.9232f };
			Local_88 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_59()
{
	iLocal_38 = unk_0xDD9A603448A23A17(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0x3C990C409B3845DE(iLocal_38, uLocal_34);
	unk_0x0CDD28A9DFCE2FCE(iLocal_38, 1, 0);
	unk_0xF70578F5CD9822CB(iLocal_38, 1);
}

void func_60()
{
	unk_0x2496A90A55756159(0, func_40(1), 0);
	if (func_57(22))
	{
		unk_0x2496A90A55756159(1, func_40(12), 0);
	}
	else
	{
		unk_0x2496A90A55756159(1, func_40(2), 0);
	}
}

void func_61()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25825[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0x765F6FEEFF39224F(iLocal_40))
			{
				unk_0x9611832841071B69(iLocal_40, 0);
			}
			if (unk_0x765F6FEEFF39224F(iLocal_37))
			{
				unk_0x9611832841071B69(iLocal_37, 0);
			}
			if (unk_0x765F6FEEFF39224F(iLocal_39))
			{
				unk_0x9611832841071B69(iLocal_39, 0);
			}
			if (unk_0x765F6FEEFF39224F(iLocal_38))
			{
				unk_0x9611832841071B69(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0x765F6FEEFF39224F(iLocal_40))
		{
			unk_0x9611832841071B69(iLocal_40, 1);
		}
		if (unk_0x765F6FEEFF39224F(iLocal_37))
		{
			unk_0x9611832841071B69(iLocal_37, 1);
		}
		if (unk_0x765F6FEEFF39224F(iLocal_39))
		{
			unk_0x9611832841071B69(iLocal_39, 1);
		}
		if (unk_0x765F6FEEFF39224F(iLocal_38))
		{
			unk_0x9611832841071B69(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_62(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_63(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25825[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (unk_0x4CE1DD5CFC1F941E())
	{
		if (unk_0x7A0BCF765DB6E029() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	if (Global_90634 != -1)
	{
		return unk_0x0E4018692D92041D(Global_84500[Global_90634 /*34*/].f_15, 20);
	}
	return 0;
}

void func_66()
{
}

void func_67()
{
	if (iLocal_43 == -1)
	{
		unk_0x5894DC159447E10A();
	}
	func_42(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25825[iLocal_43 /*11*/].f_6 = 0;
		Global_25825[iLocal_43 /*11*/].f_7 = 0;
		Global_25825[iLocal_43 /*11*/].f_8 = 0;
		Global_25825[iLocal_43 /*11*/].f_4 = 0;
		Global_25825[iLocal_43 /*11*/].f_5 = 0;
		Global_25825[iLocal_43 /*11*/].f_2 = 0;
		Global_25825[iLocal_43 /*11*/] = -1;
		Global_25825[iLocal_43 /*11*/].f_1 = 0;
		Global_25825[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_41("TV_HLP1") || func_41("TV_HLP5")) || func_41("TV_HLP6"))
	{
		unk_0xEDF90B96BED57BCE(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_68();
	if (unk_0x7C71681384076318(&cLocal_62))
	{
		unk_0x7CED302277C0F3D3(&cLocal_62);
	}
	unk_0xBCA9B529044EC902();
	func_2();
	unk_0x5894DC159447E10A();
}

void func_68()
{
	func_51();
	if (unk_0x765F6FEEFF39224F(iLocal_37))
	{
		if (unk_0x541D5C57194E73C4(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xEC26F4BFC9942A0C(&iLocal_37);
			unk_0x71CA80D41E1338B4(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x765F6FEEFF39224F(iLocal_39))
	{
		unk_0xEC26F4BFC9942A0C(&iLocal_39);
		unk_0x71CA80D41E1338B4(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x765F6FEEFF39224F(iLocal_38))
	{
		unk_0xEC26F4BFC9942A0C(&iLocal_38);
		unk_0x71CA80D41E1338B4(joaat("prop_tt_screenstatic"));
	}
}

