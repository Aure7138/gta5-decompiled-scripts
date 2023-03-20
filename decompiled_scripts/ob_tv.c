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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	struct<3> Local_30 = { 0, 0, 0 } ;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	bool bLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	char cLocal_45[64] = "";
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	char cLocal_61[64] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
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
	sLocal_17 = "NULL";
	iLocal_20 = 3;
	iLocal_24 = 1;
	iLocal_34 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	StringCopy(&cLocal_45, "NULL", 64);
	StringCopy(&cLocal_61, "NULL", 64);
	if (unk_0x8D841F1DD3FA555F(2))
	{
		func_65();
	}
	if (unk_0x86CCCD2FAE9D5E65(uScriptParam_0))
	{
		iLocal_36 = iScriptParam_0;
		iLocal_39 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_64();
		if (unk_0x86CCCD2FAE9D5E65(iScriptParam_0))
		{
			if ((iLocal_42 != -1 && (func_63() && !func_62())) && !func_61(iLocal_42))
			{
				func_65();
			}
			if ((unk_0xF33755A765033580() && unk_0xCC3731E2C2E07187() != 3) && unk_0x74F26547462074EE() == 3)
			{
				func_65();
			}
			if (func_60(13) || func_60(14))
			{
				func_65();
			}
			if (unk_0x4B84C218090E2BF3(iScriptParam_0))
			{
				func_65();
			}
			if (unk_0xEBC80CF8CF0257A5(iScriptParam_0))
			{
				if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
				{
					func_59();
					if (unk_0x4DC6EF945236C0F7(iScriptParam_0) < 950)
					{
						func_65();
					}
					switch (iLocal_28)
					{
						case 0:
							func_56();
							if (iLocal_42 == 5)
							{
								if (func_55(18) == 1 && func_55(20) == 0)
								{
									uLocal_40 = unk_0x4A150E93ADFB61C8(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x3CCB36EDF309ECF7(uLocal_40))
									{
										unk_0x53D662DFECF19C69(uLocal_40, 9);
									}
									unk_0xC23A229F78DAD92A();
								}
							}
							if (iLocal_42 == -1)
							{
								func_65();
							}
							else
							{
								func_54();
								unk_0x6CB4A3565539C66B("SAFEHOUSE_MICHAEL_SIT_SOFA", 0);
								unk_0x342437AFD16ED2D2(0);
								Global_25006[iLocal_42 /*11*/].f_2 = 0;
								Global_25006[iLocal_42 /*11*/].f_6 = 1;
								Global_25006[iLocal_42 /*11*/] = unk_0x2E0A9E3291F398E3(0, 2);
								Global_25006[iLocal_42 /*11*/].f_1 = 0;
								Global_25006[iLocal_42 /*11*/].f_4 = 0;
								Global_25006[iLocal_42 /*11*/].f_7 = 0;
								Global_25006[iLocal_42 /*11*/].f_8 = 0;
								Global_25006[iLocal_42 /*11*/].f_10 = 0;
								fLocal_29 = -4f;
								func_52(&uLocal_25);
								func_50();
								func_49();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_28 = 1;
							}
							break;
						
						case 1:
							if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x70621A3E3BE4B670(iLocal_36) && unk_0xE5A3577CADD45750(iLocal_36, 1119092736))
							{
								if (func_41() || Global_25006[iLocal_42 /*11*/].f_5)
								{
									iLocal_28 = 2;
								}
							}
							else
							{
								func_40(&iLocal_41);
							}
							break;
						
						case 2:
							func_50();
							if (!func_61(iLocal_42))
							{
								func_40(&iLocal_41);
								if (func_39("TV_HLP1"))
								{
									unk_0xB8BB626315D394F5(1);
								}
							}
							if (unk_0x86CCCD2FAE9D5E65(iLocal_36))
							{
								if (!unk_0x1DB417C2D78C2390(iLocal_36))
								{
									unk_0xABA9860C0161F3CD(iLocal_36, 1);
								}
							}
							if (unk_0x86CCCD2FAE9D5E65(iLocal_38))
							{
								if (!unk_0x1DB417C2D78C2390(iLocal_38))
								{
									unk_0xABA9860C0161F3CD(iLocal_38, 1);
								}
							}
							if (unk_0x86CCCD2FAE9D5E65(iLocal_37))
							{
								if (unk_0x1DB417C2D78C2390(iLocal_37))
								{
									unk_0xABA9860C0161F3CD(iLocal_37, 0);
								}
							}
							if (!unk_0xD994929E13CC1ED5(&cLocal_45, "NULL"))
							{
								unk_0x2AC63060DD745CF5(&cLocal_45, 0);
							}
							unk_0x20CF2580D3C355F5(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x86CCCD2FAE9D5E65(iLocal_39))
							{
								unk_0xB7EC26F74B0E4395(iLocal_39);
							}
							if (!func_61(iLocal_42))
							{
								if ((Global_25006[iLocal_42 /*11*/] == 3 || Global_25006[iLocal_42 /*11*/] == 2) || Global_25006[iLocal_42 /*11*/] == -1)
								{
									Global_25006[iLocal_42 /*11*/] = unk_0x2E0A9E3291F398E3(0, 2);
								}
								unk_0x780EDC9A6ABD066A(Global_25006[iLocal_42 /*11*/]);
								unk_0x10B62A34EF926C0E(fLocal_29);
							}
							else
							{
								iLocal_43 = Global_25006[iLocal_42 /*11*/];
								iLocal_44 = Global_25006[iLocal_42 /*11*/].f_1;
								unk_0x4753603D0AEC314F(iLocal_43, func_38(iLocal_44), Global_25006[iLocal_42 /*11*/].f_9);
								unk_0x780EDC9A6ABD066A(iLocal_43);
								if (Global_25006[iLocal_42 /*11*/].f_7)
								{
									Global_25006[iLocal_42 /*11*/].f_5 = 0;
									Global_25006[iLocal_42 /*11*/].f_7 = 0;
								}
							}
							Global_25006[iLocal_42 /*11*/].f_2 = 1;
							func_37(133, 1);
							func_37(131, 1);
							func_37(132, 1);
							iLocal_28 = 3;
							break;
						
						case 3:
							if (Global_25006[iLocal_42 /*11*/].f_4)
							{
								iLocal_28 = 6;
							}
							if (Global_25006[iLocal_42 /*11*/].f_7 && func_61(iLocal_42))
							{
								Global_25006[iLocal_42 /*11*/].f_7 = 0;
								iLocal_28 = 6;
							}
							if (!func_35(iLocal_42))
							{
								func_34();
								iLocal_28 = 5;
							}
							else
							{
								func_32();
								if (unk_0x6A01A280AB6EA85F() == -1)
								{
									unk_0x780EDC9A6ABD066A(Global_25006[iLocal_42 /*11*/]);
								}
								if (func_14())
								{
									iLocal_28 = 6;
								}
							}
							break;
						
						case 5:
							if (func_35(iLocal_42))
							{
								iLocal_28 = 2;
							}
							if (Global_25006[iLocal_42 /*11*/].f_4)
							{
								iLocal_28 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_41 != -1)
							{
								func_40(&iLocal_41);
							}
							Global_25006[iLocal_42 /*11*/].f_5 = 0;
							Global_25006[iLocal_42 /*11*/].f_4 = 0;
							Global_25006[iLocal_42 /*11*/].f_1 = 0;
							Global_25006[iLocal_42 /*11*/].f_2 = 0;
							Global_25006[iLocal_42 /*11*/].f_7 = 0;
							Global_25006[iLocal_42 /*11*/].f_8 = 0;
							Global_25006[iLocal_42 /*11*/].f_10 = 0;
							iLocal_28 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_65();
			unk_0xC23A229F78DAD92A();
		}
	}
	func_65();
	unk_0xC23A229F78DAD92A();
}

void func_1()
{
	if (iLocal_42 != -1)
	{
		Global_25006[iLocal_42 /*11*/] = unk_0x6A01A280AB6EA85F();
	}
	fLocal_29 = unk_0x1DABB5E14D65FE61();
	unk_0x780EDC9A6ABD066A(-1);
	func_4();
	if (unk_0x968BF1C2C695B61A(joaat("family5")) == 0)
	{
		if (!unk_0xD994929E13CC1ED5(&cLocal_45, "NULL"))
		{
			unk_0x2AC63060DD745CF5(&cLocal_45, 1);
		}
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0xB8BB626315D394F5(1);
	}
	func_3();
	func_49();
	if (unk_0x86CCCD2FAE9D5E65(iLocal_37))
	{
		if (!unk_0x1DB417C2D78C2390(iLocal_37))
		{
			unk_0xABA9860C0161F3CD(iLocal_37, 1);
		}
	}
	unk_0x900356AE203DE12D(0);
	func_2();
}

void func_2()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (iLocal_86 == 1)
		{
			unk_0x3680E6E22308220C();
			iLocal_86 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_34 == -1)
	{
		unk_0x4F520AA3A2F8C801(iLocal_34);
		if (unk_0x86CCCD2FAE9D5E65(iLocal_36))
		{
			if (unk_0x14B7103DBD149FFE(iLocal_36) == joaat("v_ilev_mm_screen2") || unk_0x14B7103DBD149FFE(iLocal_36) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0xABA9860C0161F3CD(iLocal_36, 0);
				if (unk_0x14B7103DBD149FFE(iLocal_36) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x0AD1CA312687609D(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x0AD1CA312687609D(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_38))
	{
		unk_0xABA9860C0161F3CD(iLocal_38, 0);
	}
}

void func_4()
{
	if (iLocal_84)
	{
		unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
		if (unk_0x6B6362BE9BFD1ACA(uLocal_77))
		{
			unk_0xDD0B0D77CB8995B1(uLocal_77, 0);
		}
		unk_0x35B958B469415A23(uLocal_77, 0);
		unk_0x270066FDBAF3A458(0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), 0);
			unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
			unk_0x71D4A7422520E90F(unk_0x81873881071CD9FE(), Local_30, 1, 0, 2);
			if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
			{
				if (bLocal_35 == 1)
				{
					bLocal_35 = false;
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
				}
			}
			unk_0xABA9860C0161F3CD(unk_0x81873881071CD9FE(), 1);
		}
		if (!unk_0xD994929E13CC1ED5(&cLocal_61, "NULL"))
		{
			if (unk_0x12F24A1A22BF90A7(&cLocal_61))
			{
				unk_0x0C22E352114F699C(&cLocal_61);
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_38))
		{
			unk_0xABA9860C0161F3CD(iLocal_38, 1);
		}
		func_5(0, 1, 0, 0);
		unk_0x900356AE203DE12D(0);
		iLocal_84 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_13(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_12())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_11(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_13(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_11(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_6(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
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
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_9(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
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
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_10()
{
	return Global_1312729;
}

int func_11(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_12()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_13(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

int func_14()
{
	if (!func_61(iLocal_42))
	{
		if (((((((func_28(&uLocal_25) >= 1f && unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_87, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x74D4E5ACB4DAF9B8(iLocal_36) == unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE())) && !func_27(8, -1)) && !unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0)) && unk_0x7EB2DB8EE471AA73(unk_0x81873881071CD9FE(), Local_30, 90f)) && !unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) && !unk_0xF33755A765033580())
		{
			if (iLocal_41 == -1)
			{
				func_26();
				func_25(&iLocal_41, 3, "TV_HLP5", 0, 0, 0);
			}
			else if (func_23(iLocal_41, 1))
			{
				func_40(&iLocal_41);
				func_52(&uLocal_25);
				Global_25006[iLocal_42 /*11*/].f_7 = 0;
				if (unk_0xD448083BD24932DC("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0x35D7948F61AA3FEC(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_15();
		}
		else
		{
			if (func_39("TV_HLP5"))
			{
				unk_0xB8BB626315D394F5(1);
			}
			func_2();
			func_40(&iLocal_41);
		}
	}
	return 0;
}

void func_15()
{
	if (iLocal_84 == 0)
	{
		unk_0x89086B596828ACBE(2, 222);
		if (unk_0x093DEAE9A023FAA0(2, 222))
		{
			func_40(&iLocal_41);
			func_25(&iLocal_41, 3, "TV_HLP6", 0, 0, 0);
			func_22();
		}
	}
	else
	{
		unk_0xDE1125A413AF241C(2, 200, 1);
		if (unk_0x1DB417C2D78C2390(unk_0x81873881071CD9FE()))
		{
			unk_0xABA9860C0161F3CD(unk_0x81873881071CD9FE(), 0);
		}
		if (bLocal_35)
		{
			if (unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
			}
		}
		unk_0xD61D5795530D0627();
		unk_0x069D1D1F419CB7F0(unk_0x81873881071CD9FE());
		func_20(1, 1);
		unk_0x89086B596828ACBE(2, 222);
		func_16();
		if (unk_0x093DEAE9A023FAA0(2, 222) || (unk_0x3D6272A8E1C449E9(2) && unk_0x938788609A5D0621(2, 200)))
		{
			func_40(&iLocal_41);
			func_4();
		}
	}
}

void func_16()
{
	if (!Global_14394.f_1 == 1)
	{
		if (func_19(0))
		{
			func_17(0);
		}
		unk_0xF3148AAF69AF9CBC(&Global_2265, 2);
	}
}

void func_17(int iParam0)
{
	if (Global_14552)
	{
		func_18(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_12())
	{
		Global_14394.f_1 = 3;
	}
}

void func_18(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_19(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_19(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
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
			if (!iLocal_21)
			{
				if (unk_0xD448083BD24932DC("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0x35D7948F61AA3FEC(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x6A01A280AB6EA85F() == 0)
				{
					unk_0x780EDC9A6ABD066A(1);
				}
				else
				{
					unk_0x780EDC9A6ABD066A(0);
				}
				iLocal_21 = 1;
			}
		}
		else if (iLocal_21)
		{
			iLocal_21 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x0D349187279381B8(2, 219) - 127);
		if (!iLocal_22)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x1DABB5E14D65FE61();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x10B62A34EF926C0E(fVar2);
				iLocal_23 = unk_0x48E480685981C7D4();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x1DABB5E14D65FE61();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x10B62A34EF926C0E(fVar2);
				iLocal_23 = unk_0x48E480685981C7D4();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_24 = 1;
			}
			else if (iLocal_24)
			{
				if (unk_0xD448083BD24932DC("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x35D7948F61AA3FEC(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_24 = 0;
				}
			}
		}
		if (iLocal_22)
		{
			if (iVar1 == 0 || unk_0x48E480685981C7D4() > iLocal_23 + 24)
			{
				iLocal_22 = 0;
			}
		}
	}
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x0D349187279381B8(2, 218) - 127);
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
	if (iLocal_84 == 0)
	{
		uLocal_77 = unk_0xA41C1C111139F838("DEFAULT_SCRIPTED_CAMERA", Local_78, Local_81, fVar0, 0, 2);
		unk_0x93933B2FBD1014C1(uLocal_77, 100f);
		unk_0xDD0B0D77CB8995B1(uLocal_77, 1);
		unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
		if (unk_0x86CCCD2FAE9D5E65(iLocal_38))
		{
			unk_0xABA9860C0161F3CD(iLocal_38, 0);
		}
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), 1);
			unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
			if (unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
				bLocal_35 = true;
			}
			unk_0x71D4A7422520E90F(unk_0x81873881071CD9FE(), Local_30, -1, 0, 2);
			unk_0xABA9860C0161F3CD(unk_0x81873881071CD9FE(), 0);
		}
		if (!unk_0xD994929E13CC1ED5(&cLocal_61, "NULL"))
		{
			if (!unk_0x12F24A1A22BF90A7(&cLocal_61))
			{
				unk_0xF2A6D4C99549CA85(&cLocal_61);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0x900356AE203DE12D(1);
		iLocal_84 = 1;
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
	if (!unk_0x7DF7DE8C76D7F346(unk_0xEC537F0C0E8265EE()))
	{
		return 0;
	}
	if (func_19(0))
	{
		return 0;
	}
	if (unk_0x521385D8214D27C4())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36143[iVar0 /*19*/] == 1 && Global_36143[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36143[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36143[iVar0 /*19*/].f_5 = 1;
			Global_36143[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36143[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36143[iVar0 /*19*/].f_7)
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
		if (Global_36143[iVar0 /*19*/].f_1 == iParam0)
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
	
	if (unk_0x968BF1C2C695B61A(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xF33755A765033580())
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
		if (!Global_36143[iVar0 /*19*/])
		{
			Global_36143[iVar0 /*19*/] = 1;
			Global_36143[iVar0 /*19*/].f_1 = Global_36266;
			Global_36266++;
			Global_36143[iVar0 /*19*/].f_4 = 0;
			Global_36143[iVar0 /*19*/].f_17 = 0;
			Global_36143[iVar0 /*19*/].f_5 = 0;
			Global_36143[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36143[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36143[iVar0 /*19*/].f_6 = iParam3;
			Global_36143[iVar0 /*19*/].f_18 = unk_0x8F56512BDA9F6921();
			Global_36143[iVar0 /*19*/].f_7 = 0;
			Global_36143[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xB318FDA0D1ABDB20(sParam4))
			{
				Global_36143[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36143[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36143[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_36143[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_26()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (iLocal_86 == 0)
		{
			unk_0xE2B360519566682D("TV_Controls");
			iLocal_86 = 1;
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
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
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
			return (func_29(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_29(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		iVar0 = unk_0xD74C7D8D2E5E43D2();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
}

bool func_30(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 2);
}

bool func_31(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 1);
}

void func_32()
{
	float fVar0;
	
	fVar0 = 1f;
	func_33(&fVar0);
	unk_0x4F520AA3A2F8C801(iLocal_34);
	unk_0x7F3AA121397DEEC9(4);
	unk_0x59C5FF40FC7463C1(1);
	unk_0x10F8181DC0EB95B7(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x4F520AA3A2F8C801(unk_0x7A7AF41733D771B9());
}

void func_33(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xA32FB34BA4B9C4AA(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_34()
{
	Global_25006[iLocal_42 /*11*/].f_7 = 0;
	Global_25006[iLocal_42 /*11*/] = unk_0x6A01A280AB6EA85F();
	fLocal_29 = unk_0x1DABB5E14D65FE61();
	if (unk_0x12F24A1A22BF90A7(&cLocal_61))
	{
		unk_0x0C22E352114F699C(&cLocal_61);
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0xB8BB626315D394F5(1);
	}
	func_40(&iLocal_41);
	unk_0x780EDC9A6ABD066A(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_49();
}

int func_35(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_36(unk_0x1329891157A54C63()) };
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
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

void func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/])
	{
		unk_0x85C45034BA638694(Global_51145[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x123B783056E76C4E(Global_51145[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
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
		if (Global_36143[iVar0 /*19*/])
		{
			Global_36143[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_41()
{
	if (func_28(&uLocal_25) < 1f)
	{
		func_40(&iLocal_41);
		return 0;
	}
	if ((!unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_87, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x7EB2DB8EE471AA73(unk_0x81873881071CD9FE(), Local_30, 90f)) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (unk_0x74D4E5ACB4DAF9B8(iLocal_36) != unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (func_27(8, -1))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (Global_88070)
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (Global_25006[iLocal_42 /*11*/].f_8)
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (iLocal_41 == -1)
	{
		func_25(&iLocal_41, 3, "TV_HLP1", 0, 0, 0);
		return 0;
	}
	if (func_23(iLocal_41, 1))
	{
		func_40(&iLocal_41);
		func_52(&uLocal_25);
		Global_25006[iLocal_42 /*11*/].f_7 = 1;
		if (unk_0xD448083BD24932DC("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
		{
			unk_0x35D7948F61AA3FEC(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
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
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = iParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_47(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_46() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
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
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_45(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

int func_46()
{
	return Global_24946;
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
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
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
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_49()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x65C3F2BC8E812C5B("tvscreen"))
	{
		unk_0xEDF7AB85BA8D981F("tvscreen");
		iLocal_34 = -1;
		unk_0x4F520AA3A2F8C801(unk_0x7A7AF41733D771B9());
	}
}

void func_50()
{
	int iVar0;
	
	if (iLocal_42 == 4)
	{
		func_51();
	}
	if (unk_0x65C3F2BC8E812C5B("tvscreen"))
	{
		unk_0xEDF7AB85BA8D981F("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x86CCCD2FAE9D5E65(iLocal_36))
	{
		func_65();
	}
	iVar0 = unk_0x14B7103DBD149FFE(iLocal_36);
	unk_0xD36C723A41D6D72D("tvscreen", 0);
	unk_0xDE1D6A3744421950(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_42 != 4)
	{
		while (!unk_0xF79F270096CA3499(iVar0))
		{
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_36))
			{
				func_65();
			}
			if (!unk_0xEBC80CF8CF0257A5(iLocal_36))
			{
				func_65();
			}
			if (!unk_0x65C3F2BC8E812C5B("tvscreen"))
			{
				unk_0xD36C723A41D6D72D("tvscreen", 0);
			}
			if (!unk_0xF79F270096CA3499(iVar0))
			{
				unk_0xDE1D6A3744421950(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_34 = unk_0x55E6B1DEFA355F4B("tvscreen");
	func_3();
}

void func_51()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_36))
	{
		if (unk_0x14B7103DBD149FFE(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_36 = 0;
	iLocal_36 = unk_0x530605DB2F32365F(joaat("v_ilev_mm_screen2"), Local_30, 1, 1, 0);
	unk_0xC24172029826A66F(iLocal_36, uLocal_33);
	unk_0xA8F22633ACC22189(iLocal_36, 1);
	unk_0xABA9860C0161F3CD(iLocal_36, 0);
	iLocal_38 = 0;
	iLocal_38 = unk_0x530605DB2F32365F(joaat("v_ilev_mm_screen2_vl"), Local_30, 1, 1, 0);
	unk_0xC24172029826A66F(iLocal_38, uLocal_33);
	unk_0xA8F22633ACC22189(iLocal_38, 1);
	unk_0xABA9860C0161F3CD(iLocal_38, 0);
}

void func_52(var uParam0)
{
	func_53(uParam0, 0f);
}

void func_53(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_29(unk_0x236D8AD7EE179F46(*uParam0, 4)) - fParam1);
	unk_0xF3148AAF69AF9CBC(uParam0, 1);
	unk_0xC69E84EBBD7166E6(uParam0, 2);
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
	return Global_98931.f_7699.f_330[iParam0 /*6*/];
}

void func_56()
{
	Local_30 = { unk_0xB6AE0DAE06D56288(iLocal_36, 1) };
	uLocal_33 = unk_0x3306AAAFE3B25098(iLocal_36);
	func_58();
	if (unk_0x14B7103DBD149FFE(iLocal_36) == joaat("prop_tv_03"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_42 = 0;
			Local_78 = { -9.8135f, -1440.913f, 31.3654f };
			Local_81 = { 0f, 0f, -134.3211f };
			Local_87 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_45, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x14B7103DBD149FFE(iLocal_36) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_42 = 2;
			Local_78 = { 1978.23f, 3819.65f, 34.2724f };
			Local_81 = { 0f, 0f, -105.15f };
			Local_87 = { 1978.33f, 3819.717f, 32.4501f };
			func_57();
			StringCopy(&cLocal_45, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x14B7103DBD149FFE(iLocal_36) == joaat("prop_tv_flat_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_42 = 1;
			Local_78 = { 2.5724f, 527.9989f, 176.1619f };
			Local_81 = { 0f, 0f, -29.9488f };
			Local_87 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_45, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x14B7103DBD149FFE(iLocal_36) == joaat("prop_tv_flat_02"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_42 = 3;
			Local_78 = { -1160.502f, -1520.76f, 10.7393f };
			Local_81 = { 0f, 0f, 60.061f };
			Local_87 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_45, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_61, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x14B7103DBD149FFE(iLocal_36) == joaat("v_ilev_mm_screen2") || unk_0x14B7103DBD149FFE(iLocal_36) == joaat("v_ilev_mm_scre_off"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_42 = 4;
			Local_78 = { -802.8972f, 172.537f, 74.5801f };
			Local_81 = { 0f, 0f, -69.0273f };
			Local_87 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_45, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_61, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x14B7103DBD149FFE(iLocal_36) == joaat("des_tvsmash_start"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_42 = 5;
			Local_78 = { -808.3051f, 171.2623f, 77.2822f };
			Local_81 = { 1.8886f, 0f, 110.9232f };
			Local_87 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_45, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_61, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_57()
{
	iLocal_37 = unk_0x530605DB2F32365F(joaat("prop_tt_screenstatic"), Local_30, 1, 1, 0);
	unk_0xC24172029826A66F(iLocal_37, uLocal_33);
	unk_0xABA9860C0161F3CD(iLocal_37, 1);
	unk_0xA8F22633ACC22189(iLocal_37, 1);
}

void func_58()
{
	unk_0x4753603D0AEC314F(0, func_38(1), 0);
	if (func_55(22))
	{
		unk_0x4753603D0AEC314F(1, func_38(12), 0);
	}
	else
	{
		unk_0x4753603D0AEC314F(1, func_38(2), 0);
	}
}

void func_59()
{
	if (iLocal_42 == -1)
	{
		return;
	}
	if (Global_25006[iLocal_42 /*11*/].f_10 == 0)
	{
		if (iLocal_85 == 1)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_39))
			{
				unk_0x210A4A0B257F8433(iLocal_39, 0);
			}
			if (unk_0x86CCCD2FAE9D5E65(iLocal_36))
			{
				unk_0x210A4A0B257F8433(iLocal_36, 0);
			}
			if (unk_0x86CCCD2FAE9D5E65(iLocal_38))
			{
				unk_0x210A4A0B257F8433(iLocal_38, 0);
			}
			if (unk_0x86CCCD2FAE9D5E65(iLocal_37))
			{
				unk_0x210A4A0B257F8433(iLocal_37, 0);
			}
			iLocal_85 = 0;
		}
	}
	else if (iLocal_85 == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_39))
		{
			unk_0x210A4A0B257F8433(iLocal_39, 1);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_36))
		{
			unk_0x210A4A0B257F8433(iLocal_36, 1);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_38))
		{
			unk_0x210A4A0B257F8433(iLocal_38, 1);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_37))
		{
			unk_0x210A4A0B257F8433(iLocal_37, 1);
		}
		iLocal_85 = 1;
	}
}

bool func_60(int iParam0)
{
	return Global_35443 == iParam0;
}

int func_61(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25006[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_62()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x9C5272432A46019C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 20);
	}
	return 0;
}

void func_64()
{
}

void func_65()
{
	if (iLocal_42 == -1)
	{
		unk_0xC23A229F78DAD92A();
	}
	func_40(&iLocal_41);
	if (iLocal_42 != -1)
	{
		func_1();
		Global_25006[iLocal_42 /*11*/].f_6 = 0;
		Global_25006[iLocal_42 /*11*/].f_7 = 0;
		Global_25006[iLocal_42 /*11*/].f_8 = 0;
		Global_25006[iLocal_42 /*11*/].f_4 = 0;
		Global_25006[iLocal_42 /*11*/].f_5 = 0;
		Global_25006[iLocal_42 /*11*/].f_2 = 0;
		Global_25006[iLocal_42 /*11*/] = -1;
		Global_25006[iLocal_42 /*11*/].f_1 = 0;
		Global_25006[iLocal_42 /*11*/].f_10 = 0;
	}
	if ((func_39("TV_HLP1") || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0xB8BB626315D394F5(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_66();
	if (unk_0x12F24A1A22BF90A7(&cLocal_61))
	{
		unk_0x0C22E352114F699C(&cLocal_61);
	}
	unk_0x8C985EBF9C3B6A02();
	func_2();
	unk_0xC23A229F78DAD92A();
}

void func_66()
{
	func_49();
	if (unk_0x86CCCD2FAE9D5E65(iLocal_36))
	{
		if (unk_0x14B7103DBD149FFE(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xAB6AFD52AD641D70(&iLocal_36);
			unk_0x887F4488DA99FD21(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_38))
	{
		unk_0xAB6AFD52AD641D70(&iLocal_38);
		unk_0x887F4488DA99FD21(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_37))
	{
		unk_0xAB6AFD52AD641D70(&iLocal_37);
		unk_0x887F4488DA99FD21(joaat("prop_tt_screenstatic"));
	}
}

