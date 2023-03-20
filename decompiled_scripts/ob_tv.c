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
	if (unk_0x4B4BD87E3D30C50D(2))
	{
		func_65();
	}
	if (unk_0x1F2158D615BC4B25(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_64();
		if (unk_0x1F2158D615BC4B25(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_63() && !func_62())) && !func_61(iLocal_43))
			{
				func_65();
			}
			if ((unk_0xA153A26DF49EBCC0() && unk_0xD802C73A0EC92D7F() != 3) && unk_0x9F0EFBAAF424E79A() == 3)
			{
				func_65();
			}
			if (func_60(13) || func_60(14))
			{
				func_65();
			}
			if (unk_0x2B686C323B4F6268(iScriptParam_0))
			{
				func_65();
			}
			if (unk_0xC6C2EDDDD51B6332(iScriptParam_0))
			{
				if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
				{
					func_59();
					if (unk_0x070BBD7287E8E744(iScriptParam_0) < 950)
					{
						func_65();
					}
					switch (iLocal_29)
					{
						case 0:
							func_56();
							if (iLocal_43 == 5)
							{
								if (func_55(18) == 1 && func_55(20) == 0)
								{
									uLocal_41 = unk_0x2AECD562BBAA5182(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x298F7572DFFA3C48(uLocal_41))
									{
										unk_0x5D25F506F1E3AADA(uLocal_41, 9);
									}
									unk_0x2F798BA2098FDADE();
								}
							}
							if (iLocal_43 == -1)
							{
								func_65();
							}
							else
							{
								func_54();
								unk_0x41E9F9AE78144F4F("SAFEHOUSE_MICHAEL_SIT_SOFA", 0);
								unk_0x50DCB4FEA511F430(0);
								Global_25175[iLocal_43 /*11*/].f_2 = 0;
								Global_25175[iLocal_43 /*11*/].f_6 = 1;
								Global_25175[iLocal_43 /*11*/] = unk_0xA3746E7F17F47DC2(0, 2);
								Global_25175[iLocal_43 /*11*/].f_1 = 0;
								Global_25175[iLocal_43 /*11*/].f_4 = 0;
								Global_25175[iLocal_43 /*11*/].f_7 = 0;
								Global_25175[iLocal_43 /*11*/].f_8 = 0;
								Global_25175[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_52(&uLocal_26);
								func_50();
								func_49();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x35CDCCB31E746D8E(iLocal_37) && unk_0x6BCD73ABAC0921B2(iLocal_37, 1119092736))
							{
								if (func_41() || Global_25175[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_40(&iLocal_42);
							}
							break;
						
						case 2:
							func_50();
							if (!func_61(iLocal_43))
							{
								func_40(&iLocal_42);
								if (func_39("TV_HLP1"))
								{
									unk_0x4ACCE973F9C3CA3B(1);
								}
							}
							if (unk_0x1F2158D615BC4B25(iLocal_37))
							{
								if (!unk_0xD0935EF5E40E7EE1(iLocal_37))
								{
									unk_0x68E5332DF8C1DA5A(iLocal_37, 1, 0);
								}
							}
							if (unk_0x1F2158D615BC4B25(iLocal_39))
							{
								if (!unk_0xD0935EF5E40E7EE1(iLocal_39))
								{
									unk_0x68E5332DF8C1DA5A(iLocal_39, 1, 0);
								}
							}
							if (unk_0x1F2158D615BC4B25(iLocal_38))
							{
								if (unk_0xD0935EF5E40E7EE1(iLocal_38))
								{
									unk_0x68E5332DF8C1DA5A(iLocal_38, 0, 0);
								}
							}
							if (!unk_0x35D1CAD6ADAB6491(&cLocal_46, "NULL"))
							{
								unk_0x2084300F2D91A8E6(&cLocal_46, 0);
							}
							unk_0xD0C12D1E240BE422(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x1F2158D615BC4B25(iLocal_40))
							{
								unk_0xDEEF7587E541C694(iLocal_40);
							}
							if (!func_61(iLocal_43))
							{
								if ((Global_25175[iLocal_43 /*11*/] == 3 || Global_25175[iLocal_43 /*11*/] == 2) || Global_25175[iLocal_43 /*11*/] == -1)
								{
									Global_25175[iLocal_43 /*11*/] = unk_0xA3746E7F17F47DC2(0, 2);
								}
								unk_0x3BEB49A831979034(Global_25175[iLocal_43 /*11*/]);
								unk_0x7341CFF4192CC787(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25175[iLocal_43 /*11*/];
								iLocal_45 = Global_25175[iLocal_43 /*11*/].f_1;
								unk_0x1EAB7274ABA5FC94(iLocal_44, func_38(iLocal_45), Global_25175[iLocal_43 /*11*/].f_9);
								unk_0x3BEB49A831979034(iLocal_44);
								if (Global_25175[iLocal_43 /*11*/].f_7)
								{
									Global_25175[iLocal_43 /*11*/].f_5 = 0;
									Global_25175[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25175[iLocal_43 /*11*/].f_2 = 1;
							func_37(133, 1);
							func_37(131, 1);
							func_37(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25175[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25175[iLocal_43 /*11*/].f_7 && func_61(iLocal_43))
							{
								Global_25175[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_35(iLocal_43))
							{
								func_34();
								iLocal_29 = 5;
							}
							else
							{
								func_32();
								if (unk_0xFCFFF263508EC03C() == -1)
								{
									unk_0x3BEB49A831979034(Global_25175[iLocal_43 /*11*/]);
								}
								if (func_14())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_35(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_25175[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_40(&iLocal_42);
							}
							Global_25175[iLocal_43 /*11*/].f_5 = 0;
							Global_25175[iLocal_43 /*11*/].f_4 = 0;
							Global_25175[iLocal_43 /*11*/].f_1 = 0;
							Global_25175[iLocal_43 /*11*/].f_2 = 0;
							Global_25175[iLocal_43 /*11*/].f_7 = 0;
							Global_25175[iLocal_43 /*11*/].f_8 = 0;
							Global_25175[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_65();
			unk_0x2F798BA2098FDADE();
		}
	}
	func_65();
	unk_0x2F798BA2098FDADE();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25175[iLocal_43 /*11*/] = unk_0xFCFFF263508EC03C();
	}
	fLocal_30 = unk_0xB90759548037D731();
	unk_0x3BEB49A831979034(-1);
	func_4();
	if (unk_0xB1A77D5C890711F9(joaat("family5")) == 0)
	{
		if (!unk_0x35D1CAD6ADAB6491(&cLocal_46, "NULL"))
		{
			unk_0x2084300F2D91A8E6(&cLocal_46, 1);
		}
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x4ACCE973F9C3CA3B(1);
	}
	func_3();
	func_49();
	if (unk_0x1F2158D615BC4B25(iLocal_38))
	{
		if (!unk_0xD0935EF5E40E7EE1(iLocal_38))
		{
			unk_0x68E5332DF8C1DA5A(iLocal_38, 1, 0);
		}
	}
	unk_0x6649A8CF2B2FA3FC(0);
	func_2();
}

void func_2()
{
	if (unk_0x2C063B4379F0C076())
	{
		if (iLocal_87 == 1)
		{
			unk_0x78EC6D123AC74263();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0x081248E2DE8DB6A4(iLocal_35);
		if (unk_0x1F2158D615BC4B25(iLocal_37))
		{
			if (unk_0xDF1398076E26B0E4(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0xDF1398076E26B0E4(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x68E5332DF8C1DA5A(iLocal_37, 0, 0);
				if (unk_0xDF1398076E26B0E4(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x6F9FB0053F328D49(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x6F9FB0053F328D49(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x1F2158D615BC4B25(iLocal_39))
	{
		unk_0x68E5332DF8C1DA5A(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
		if (unk_0xFF10EEA93744C96A(uLocal_78))
		{
			unk_0x12A448112D057EB4(uLocal_78, 0);
		}
		unk_0xFE65076A204F9258(uLocal_78, 0);
		unk_0x8793DE27084C2CBD(0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			unk_0xB92C428B448B51A4(unk_0x77F050A399DB77ED(), 0);
			unk_0xE2CB8488CFA42209(unk_0x77F050A399DB77ED());
			unk_0xF8910DF6BD994091(unk_0x77F050A399DB77ED(), Local_31, 1, 0, 2);
			if (!unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
				}
			}
			unk_0x68E5332DF8C1DA5A(unk_0x77F050A399DB77ED(), 1, 0);
		}
		if (!unk_0x35D1CAD6ADAB6491(&cLocal_62, "NULL"))
		{
			if (unk_0x0CB2A341EC5513A7(&cLocal_62))
			{
				unk_0xE0DB271DC0AEA972(&cLocal_62);
			}
		}
		if (unk_0x1F2158D615BC4B25(iLocal_39))
		{
			unk_0x68E5332DF8C1DA5A(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0);
		unk_0x6649A8CF2B2FA3FC(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xCBF71C579F3C5665(unk_0x8ACD527A7E574590());
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 1);
		func_13(1);
		unk_0xB2FE902971602DFF();
		unk_0x8AD31F9246CE7ADF();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xEA9C2A206A86B744())
			{
				unk_0xC9AB825AA4821BDA(0);
			}
			if (!func_12())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_11(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_13(0);
		unk_0x7A72DD566E92DC37();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x1F3478667D91BCDD();
		}
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 0);
		func_11(0, iParam3, iParam2, 0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !func_6(unk_0x8ACD527A7E574590()))
		{
			unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), 0);
		}
		Global_69315 = 0;
	}
}

int func_6(int iParam0)
{
	if (func_8(iParam0, 0))
	{
		return 1;
	}
	if (func_7())
	{
		if (iParam0 == unk_0x8ACD527A7E574590())
		{
			return 1;
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_9(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586488[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x860CE5C791DC28F5(iParam0))
		{
			bVar0 = unk_0xE6C94A0E653BD3F1(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_9(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_10();
	}
	if (Global_1315888[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_10()
{
	return Global_1312746;
}

int func_11(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x4967E3B78238C06C() != iParam0 && uParam2)
		{
			unk_0x5377CB2488C9CA95(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_12()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_13(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 13);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 13);
	}
}

int func_14()
{
	if (!func_61(iLocal_43))
	{
		if (((((((func_28(&uLocal_26) >= 1f && unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0xFC0420DC987053AC(iLocal_37) == unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED())) && !func_27(8, -1)) && !unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0)) && unk_0x9F1C24920030C183(unk_0x77F050A399DB77ED(), Local_31, 90f)) && !unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) && !unk_0xA153A26DF49EBCC0())
		{
			if (iLocal_42 == -1)
			{
				func_26();
				func_25(&iLocal_42, 3, "TV_HLP5", 0, 0, 0);
			}
			else if (func_23(iLocal_42, 1))
			{
				func_40(&iLocal_42);
				func_52(&uLocal_26);
				Global_25175[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0x3B116927F03429E0("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0xBBEB613A917D7EE8(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_15();
		}
		else
		{
			if (func_39("TV_HLP5"))
			{
				unk_0x4ACCE973F9C3CA3B(1);
			}
			func_2();
			func_40(&iLocal_42);
		}
	}
	return 0;
}

void func_15()
{
	if (iLocal_85 == 0)
	{
		unk_0xE494527A450B8456(2, 222);
		if (unk_0x618071F6827C232E(2, 222))
		{
			func_40(&iLocal_42);
			func_25(&iLocal_42, 3, "TV_HLP6", 0, 0, 0);
			func_22();
		}
	}
	else
	{
		unk_0x6E20845D23D3DFD4(2, 200, 1);
		if (unk_0xD0935EF5E40E7EE1(unk_0x77F050A399DB77ED()))
		{
			unk_0x68E5332DF8C1DA5A(unk_0x77F050A399DB77ED(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
			{
				unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
			}
		}
		unk_0xC04F3ABD290057B0();
		unk_0xC28A39320FF69621(unk_0x77F050A399DB77ED());
		func_20(1, 1);
		unk_0xE494527A450B8456(2, 222);
		func_16();
		if (unk_0x618071F6827C232E(2, 222) || (unk_0x417D84639C1F982B(2) && unk_0xB533020F2392A380(2, 200)))
		{
			func_40(&iLocal_42);
			func_4();
		}
	}
}

void func_16()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_19(0))
		{
			func_17(0);
		}
		unk_0x573691DB812DC8AA(&Global_2284, 2);
	}
}

void func_17(int iParam0)
{
	if (Global_14571)
	{
		func_18(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x573691DB812DC8AA(&Global_2284, 16);
	}
	if (unk_0xEA9C2A206A86B744())
	{
		unk_0xC9AB825AA4821BDA(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 30);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 30);
	}
	if (!func_12())
	{
		Global_14413.f_1 = 3;
	}
}

void func_18(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_19(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x3E337B53281459DC(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x4317F0DBC6457B31(Global_14350);
		}
		else
		{
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
}

int func_19(int iParam0)
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

void func_20(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_21(0))
		{
			if (!iLocal_22)
			{
				if (unk_0x3B116927F03429E0("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0xBBEB613A917D7EE8(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0xFCFFF263508EC03C() == 0)
				{
					unk_0x3BEB49A831979034(1);
				}
				else
				{
					unk_0x3BEB49A831979034(0);
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
		iVar1 = (unk_0x85F0CE1DEA67F6C7(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0xB90759548037D731();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x7341CFF4192CC787(fVar2);
				iLocal_24 = unk_0x3EAC9995EC220C5A();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0xB90759548037D731();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x7341CFF4192CC787(fVar2);
				iLocal_24 = unk_0x3EAC9995EC220C5A();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0x3B116927F03429E0("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0xBBEB613A917D7EE8(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x3EAC9995EC220C5A() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x85F0CE1DEA67F6C7(2, 218) - 127);
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

void func_22()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_85 == 0)
	{
		uLocal_78 = unk_0x6C54724C342335E6("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0x8B0E6796AEBB50EA(uLocal_78, 100f);
		unk_0x12A448112D057EB4(uLocal_78, 1);
		unk_0x81ADE7722FD45216(1, 0, 3000, 1, 0, 0);
		if (unk_0x1F2158D615BC4B25(iLocal_39))
		{
			unk_0x68E5332DF8C1DA5A(iLocal_39, 0, 0);
		}
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			unk_0xB92C428B448B51A4(unk_0x77F050A399DB77ED(), 1);
			unk_0xE2CB8488CFA42209(unk_0x77F050A399DB77ED());
			if (unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
			{
				unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
				bLocal_36 = true;
			}
			unk_0xF8910DF6BD994091(unk_0x77F050A399DB77ED(), Local_31, -1, 0, 2);
			unk_0x68E5332DF8C1DA5A(unk_0x77F050A399DB77ED(), 0, 0);
		}
		if (!unk_0x35D1CAD6ADAB6491(&cLocal_62, "NULL"))
		{
			if (!unk_0x0CB2A341EC5513A7(&cLocal_62))
			{
				unk_0xCAEDD1A8E831AD36(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0x6649A8CF2B2FA3FC(1);
		iLocal_85 = 1;
	}
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6DF20EAB8093DF19(unk_0x7F3E348C0892D8D2()))
	{
		return 0;
	}
	if (func_19(0))
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

int func_24(int iParam0)
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

void func_25(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0xB1A77D5C890711F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xA153A26DF49EBCC0())
	{
		if (!*iParam0 == -1)
		{
			func_40(iParam0);
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

void func_26()
{
	if (unk_0x2C063B4379F0C076())
	{
		if (iLocal_87 == 0)
		{
			unk_0x396D0F5B6FB5F400("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

bool func_27(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
}

float func_28(var uParam0)
{
	if (func_31(uParam0))
	{
		if (func_30(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_29(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_29(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x3EAC9995EC220C5A()) / 1000f);
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		iVar0 = unk_0xE23D71F521207E8D();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x3EAC9995EC220C5A()) / 1000f);
}

bool func_30(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(*uParam0, 2);
}

bool func_31(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(*uParam0, 1);
}

void func_32()
{
	float fVar0;
	
	fVar0 = 1f;
	func_33(&fVar0);
	unk_0x081248E2DE8DB6A4(iLocal_35);
	unk_0x227C85DAD96E2942(4);
	unk_0xD32EBB6D651CD3D6(1);
	unk_0xE6446FEBED67F235(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x081248E2DE8DB6A4(unk_0xC73CF65CFC37D7CE());
}

void func_33(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x52846F7B892BD059(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_34()
{
	Global_25175[iLocal_43 /*11*/].f_7 = 0;
	Global_25175[iLocal_43 /*11*/] = unk_0xFCFFF263508EC03C();
	fLocal_30 = unk_0xB90759548037D731();
	if (unk_0x0CB2A341EC5513A7(&cLocal_62))
	{
		unk_0xE0DB271DC0AEA972(&cLocal_62);
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x4ACCE973F9C3CA3B(1);
	}
	func_40(&iLocal_42);
	unk_0x3BEB49A831979034(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_49();
}

int func_35(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_36(unk_0x8ACD527A7E574590()) };
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

Vector3 func_36(int iParam0)
{
	return unk_0xAF99169F0F5AE41D(unk_0xF555CE342BA0C333(iParam0), 0);
}

void func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/])
	{
		unk_0xBA16CA557222A92B(Global_51402[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x5716C8F12991E399(Global_51402[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_38(int iParam0)
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

bool func_39(char* sParam0)
{
	unk_0xBA89110203C50939(sParam0);
	return unk_0x62881E3F5F311834(0);
}

void func_40(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_24(*iParam0);
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

int func_41()
{
	if (func_28(&uLocal_26) < 1f)
	{
		func_40(&iLocal_42);
		return 0;
	}
	if ((!unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x9F1C24920030C183(unk_0x77F050A399DB77ED(), Local_31, 90f)) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))
	{
		func_40(&iLocal_42);
		return 0;
	}
	if (unk_0xFC0420DC987053AC(iLocal_37) != unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()))
	{
		func_40(&iLocal_42);
		return 0;
	}
	if (func_27(8, -1))
	{
		func_40(&iLocal_42);
		return 0;
	}
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		func_40(&iLocal_42);
		return 0;
	}
	if (Global_88367)
	{
		func_40(&iLocal_42);
		return 0;
	}
	if (Global_25175[iLocal_43 /*11*/].f_8)
	{
		func_40(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1)
	{
		func_25(&iLocal_42, 3, "TV_HLP1", 0, 0, 0);
		return 0;
	}
	if (func_23(iLocal_42, 1))
	{
		func_40(&iLocal_42);
		func_52(&uLocal_26);
		Global_25175[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0x3B116927F03429E0("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
		{
			unk_0xBBEB613A917D7EE8(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_42(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_42(int iParam0, int iParam1, int iParam2)
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
		func_48((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_99250.f_8812[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99250.f_8812[iParam0 /*12*/].f_6 == 11 || Global_99250.f_8812[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99250.f_8812[iParam0 /*12*/].f_5 = 1;
		Global_99250.f_8812[iParam0 /*12*/].f_10 = iParam1;
		Global_99250.f_8812[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_43();
	}
}

void func_43()
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
	Global_98986 = 0;
	Global_98987 = 0;
	Global_98988 = 0;
	Global_98989 = 0;
	Global_98990 = 0;
	Global_98991 = 0;
	Global_98992 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99250.f_8812.f_3853;
	Global_99250.f_8812.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99250.f_8812[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99250.f_8812[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98986++;
					fVar1 = (fVar1 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98987++;
					fVar2 = (fVar2 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98988++;
					fVar3 = (fVar3 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98989++;
					fVar4 = (fVar4 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98990++;
					fVar5 = (fVar5 + (Global_99250.f_8812[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98991++;
					fVar6 = (fVar6 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98992++;
					fVar7 = (fVar7 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98969 > 0)
	{
		if (Global_98986 == Global_98969)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98970 > 0)
	{
		if (Global_98987 == Global_98970)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98971 > 0)
	{
		if (Global_98988 == Global_98971)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98972 > 0)
	{
		if (Global_98989 == Global_98972)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98973 > 0)
	{
		if (((Global_98990 == Global_98973 || (Global_98973 * 10 / Global_98990) < 41) || Global_98990 > Global_98976) || Global_98990 == Global_98976)
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_8812.f_3856, 14))
			{
				if (Global_98990 == Global_98973)
				{
					unk_0x9E0BBE2E0E32750D(joaat("num_rndevents_completed"), Global_98973, 0);
					unk_0x573691DB812DC8AA(&(Global_99250.f_8812.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98974 > 0)
	{
		if (Global_98991 == Global_98974)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98975 > 0)
	{
		if (Global_98992 == Global_98975)
		{
			fVar7 = 5f;
		}
	}
	Global_99250.f_8812.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98990 > Global_98976 || Global_98990 == Global_98976)
	{
		iVar9 = Global_98976;
	}
	else
	{
		iVar9 = Global_98990;
	}
	unk_0x5716C8F12991E399(joaat("num_missions_completed"), Global_98986, 1);
	unk_0x5716C8F12991E399(joaat("num_missions_available"), Global_98969, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_completed"), Global_98987, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_available"), Global_98970, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_completed"), Global_98988, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_available"), Global_98971, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_completed"), Global_98989, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_available"), Global_98972, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_available"), Global_98976, 1);
	unk_0x5716C8F12991E399(joaat("num_misc_completed"), (Global_98992 + Global_98991), 1);
	unk_0x5716C8F12991E399(joaat("num_misc_available"), (Global_98975 + Global_98974), 1);
	Global_98993 = (Global_98986 * 100 / Global_98969);
	Global_98995 = ((Global_98988 + Global_98987) * 100 / (Global_98971 + Global_98970));
	Global_98994 = ((Global_98989 + iVar9) * 100 / (Global_98972 + Global_98976));
	Global_98996 = ((Global_98991 + Global_98992) * 100 / (Global_98974 + Global_98975));
	unk_0x46160091B23E8313(joaat("total_progress_made"), Global_99250.f_8812.f_3853, 1);
	unk_0x5716C8F12991E399(joaat("percent_story_missions"), Global_98993, 1);
	unk_0x5716C8F12991E399(joaat("percent_ambient_missions"), Global_98994, 1);
	unk_0x5716C8F12991E399(joaat("percent_oddjobs"), Global_98995, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853))
	{
		func_47(13, unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853));
	}
	if (!unk_0xB94B9782B4E786E9())
	{
		if (!Global_69317)
		{
			if (func_46() == 2 == 0 && !unk_0x4C779B19E6DDCDA2())
			{
				if (unk_0x01128ADE88E1C42B())
				{
					Global_98984 = 0;
				}
				if (!Global_55659)
				{
					func_44();
				}
			}
		}
	}
}

int func_44()
{
	if (func_45(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

bool func_45(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

int func_46()
{
	return Global_25115;
}

int func_47(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xDE96DC4582CFD56F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CB31CF925F17754(iParam0, iParam1);
	}
	return 0;
}

int func_48(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_10();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA1F1837E4A137310((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEDF2A618D8A93F7D((iParam0 - 0)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA1F1837E4A137310((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEDF2A618D8A93F7D((iParam0 - 192)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA1F1837E4A137310((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEDF2A618D8A93F7D((iParam0 - 513)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA1F1837E4A137310((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEDF2A618D8A93F7D((iParam0 - 705)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC9FE62843EA157C0((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEDF2A618D8A93F7D((iParam0 - 3111)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC9FE62843EA157C0((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEDF2A618D8A93F7D((iParam0 - 2919)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x1F3B95F25F60E511((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEDF2A618D8A93F7D((iParam0 - 4207)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x1F3B95F25F60E511((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEDF2A618D8A93F7D((iParam0 - 4335)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x1F3B95F25F60E511((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEDF2A618D8A93F7D((iParam0 - 6029)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_49()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x515142D7995EB0BD("tvscreen"))
	{
		unk_0xD424E8E48D2E7BF8("tvscreen");
		iLocal_35 = -1;
		unk_0x081248E2DE8DB6A4(unk_0xC73CF65CFC37D7CE());
	}
}

void func_50()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_51();
	}
	if (unk_0x515142D7995EB0BD("tvscreen"))
	{
		unk_0xD424E8E48D2E7BF8("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x1F2158D615BC4B25(iLocal_37))
	{
		func_65();
	}
	iVar0 = unk_0xDF1398076E26B0E4(iLocal_37);
	unk_0xB6C69B69C713C496("tvscreen", 0);
	unk_0xE6D63FF01AB194AD(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0xDEB1286AB1C71823(iVar0))
		{
			if (!unk_0x1F2158D615BC4B25(iLocal_37))
			{
				func_65();
			}
			if (!unk_0xC6C2EDDDD51B6332(iLocal_37))
			{
				func_65();
			}
			if (!unk_0x515142D7995EB0BD("tvscreen"))
			{
				unk_0xB6C69B69C713C496("tvscreen", 0);
			}
			if (!unk_0xDEB1286AB1C71823(iVar0))
			{
				unk_0xE6D63FF01AB194AD(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0x3CEC93147F49BDD4("tvscreen");
	func_3();
}

void func_51()
{
	if (unk_0x1F2158D615BC4B25(iLocal_37))
	{
		if (unk_0xDF1398076E26B0E4(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0x75960423835D01A1(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0x2DA164E80FDEE7F2(iLocal_37, uLocal_34);
	unk_0xB92C428B448B51A4(iLocal_37, 1);
	unk_0x68E5332DF8C1DA5A(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0x75960423835D01A1(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0x2DA164E80FDEE7F2(iLocal_39, uLocal_34);
	unk_0xB92C428B448B51A4(iLocal_39, 1);
	unk_0x68E5332DF8C1DA5A(iLocal_39, 0, 0);
}

void func_52(var uParam0)
{
	func_53(uParam0, 0f);
}

void func_53(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_29(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - fParam1);
	unk_0x573691DB812DC8AA(uParam0, 1);
	unk_0xA5F70A8B83BDFA49(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_54()
{
}

int func_55(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_99250.f_7703.f_330[iParam0 /*6*/];
}

void func_56()
{
	Local_31 = { unk_0xAF99169F0F5AE41D(iLocal_37, 1) };
	uLocal_34 = unk_0x7578EBD2DA3F8DD2(iLocal_37);
	func_58();
	if (unk_0xDF1398076E26B0E4(iLocal_37) == joaat("prop_tv_03"))
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
	else if (unk_0xDF1398076E26B0E4(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			Local_79 = { 1978.23f, 3819.65f, 34.2724f };
			Local_82 = { 0f, 0f, -105.15f };
			Local_88 = { 1978.33f, 3819.717f, 32.4501f };
			func_57();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0xDF1398076E26B0E4(iLocal_37) == joaat("prop_tv_flat_01"))
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
	else if (unk_0xDF1398076E26B0E4(iLocal_37) == joaat("prop_tv_flat_02"))
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
	else if (unk_0xDF1398076E26B0E4(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0xDF1398076E26B0E4(iLocal_37) == joaat("v_ilev_mm_scre_off"))
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
	else if (unk_0xDF1398076E26B0E4(iLocal_37) == joaat("des_tvsmash_start"))
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

void func_57()
{
	iLocal_38 = unk_0x75960423835D01A1(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0x2DA164E80FDEE7F2(iLocal_38, uLocal_34);
	unk_0x68E5332DF8C1DA5A(iLocal_38, 1, 0);
	unk_0xB92C428B448B51A4(iLocal_38, 1);
}

void func_58()
{
	unk_0x1EAB7274ABA5FC94(0, func_38(1), 0);
	if (func_55(22))
	{
		unk_0x1EAB7274ABA5FC94(1, func_38(12), 0);
	}
	else
	{
		unk_0x1EAB7274ABA5FC94(1, func_38(2), 0);
	}
}

void func_59()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25175[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0x1F2158D615BC4B25(iLocal_40))
			{
				unk_0x166904329EDD2A43(iLocal_40, 0);
			}
			if (unk_0x1F2158D615BC4B25(iLocal_37))
			{
				unk_0x166904329EDD2A43(iLocal_37, 0);
			}
			if (unk_0x1F2158D615BC4B25(iLocal_39))
			{
				unk_0x166904329EDD2A43(iLocal_39, 0);
			}
			if (unk_0x1F2158D615BC4B25(iLocal_38))
			{
				unk_0x166904329EDD2A43(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0x1F2158D615BC4B25(iLocal_40))
		{
			unk_0x166904329EDD2A43(iLocal_40, 1);
		}
		if (unk_0x1F2158D615BC4B25(iLocal_37))
		{
			unk_0x166904329EDD2A43(iLocal_37, 1);
		}
		if (unk_0x1F2158D615BC4B25(iLocal_39))
		{
			unk_0x166904329EDD2A43(iLocal_39, 1);
		}
		if (unk_0x1F2158D615BC4B25(iLocal_38))
		{
			unk_0x166904329EDD2A43(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_60(int iParam0)
{
	return Global_35700 == iParam0;
}

int func_61(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25175[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_62()
{
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x93920F49CB9AD85E() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 20);
	}
	return 0;
}

void func_64()
{
}

void func_65()
{
	if (iLocal_43 == -1)
	{
		unk_0x2F798BA2098FDADE();
	}
	func_40(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25175[iLocal_43 /*11*/].f_6 = 0;
		Global_25175[iLocal_43 /*11*/].f_7 = 0;
		Global_25175[iLocal_43 /*11*/].f_8 = 0;
		Global_25175[iLocal_43 /*11*/].f_4 = 0;
		Global_25175[iLocal_43 /*11*/].f_5 = 0;
		Global_25175[iLocal_43 /*11*/].f_2 = 0;
		Global_25175[iLocal_43 /*11*/] = -1;
		Global_25175[iLocal_43 /*11*/].f_1 = 0;
		Global_25175[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_39("TV_HLP1") || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x4ACCE973F9C3CA3B(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_66();
	if (unk_0x0CB2A341EC5513A7(&cLocal_62))
	{
		unk_0xE0DB271DC0AEA972(&cLocal_62);
	}
	unk_0x6C98FB068F4B6EBA();
	func_2();
	unk_0x2F798BA2098FDADE();
}

void func_66()
{
	func_49();
	if (unk_0x1F2158D615BC4B25(iLocal_37))
	{
		if (unk_0xDF1398076E26B0E4(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x7D779528B7C61C13(&iLocal_37);
			unk_0xFB4F6722A032A0F0(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x1F2158D615BC4B25(iLocal_39))
	{
		unk_0x7D779528B7C61C13(&iLocal_39);
		unk_0xFB4F6722A032A0F0(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x1F2158D615BC4B25(iLocal_38))
	{
		unk_0x7D779528B7C61C13(&iLocal_38);
		unk_0xFB4F6722A032A0F0(joaat("prop_tt_screenstatic"));
	}
}

