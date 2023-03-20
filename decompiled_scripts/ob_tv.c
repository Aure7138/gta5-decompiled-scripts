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
	if (unk_0x24862A9CDC8F8874(2))
	{
		func_65();
	}
	if (unk_0x95CCECA3948CFE7B(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_64();
		if (unk_0x95CCECA3948CFE7B(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_63() && !func_62())) && !func_61(iLocal_43))
			{
				func_65();
			}
			if ((unk_0xA8D4B6BDCF6DE72B() && unk_0xF7531C8E64EC584A() != 3) && unk_0xC8DAE7AE33B529B0() == 3)
			{
				func_65();
			}
			if (func_60(13) || func_60(14))
			{
				func_65();
			}
			if (unk_0xD2EDA529D1BF09B5(iScriptParam_0))
			{
				func_65();
			}
			if (unk_0x265A690A472378A4(iScriptParam_0))
			{
				if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
				{
					func_59();
					if (unk_0xD3A4099D2845F152(iScriptParam_0) < 950)
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
									uLocal_41 = unk_0xBFFB3E6573626E32(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x99D920160DDD0D7D(uLocal_41))
									{
										unk_0x1BBA896A85FD74C9(uLocal_41, 9);
									}
									unk_0xA4E0D8FD51F2A6F7();
								}
							}
							if (iLocal_43 == -1)
							{
								func_65();
							}
							else
							{
								func_54();
								unk_0x383D4E0175085434("SAFEHOUSE_MICHAEL_SIT_SOFA", 0);
								unk_0xF7CE1213DA9898BD(0);
								Global_25175[iLocal_43 /*11*/].f_2 = 0;
								Global_25175[iLocal_43 /*11*/].f_6 = 1;
								Global_25175[iLocal_43 /*11*/] = unk_0x531444754C426278(0, 2);
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
							if (unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x41718C62C2066C7D(iLocal_37) && unk_0x381C0C4479AA5C09(iLocal_37, 1119092736))
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
									unk_0x9F4AA6F234E8A860(1);
								}
							}
							if (unk_0x95CCECA3948CFE7B(iLocal_37))
							{
								if (!unk_0xA6CD622BBD209756(iLocal_37))
								{
									unk_0x872B541D7953A19B(iLocal_37, 1, 0);
								}
							}
							if (unk_0x95CCECA3948CFE7B(iLocal_39))
							{
								if (!unk_0xA6CD622BBD209756(iLocal_39))
								{
									unk_0x872B541D7953A19B(iLocal_39, 1, 0);
								}
							}
							if (unk_0x95CCECA3948CFE7B(iLocal_38))
							{
								if (unk_0xA6CD622BBD209756(iLocal_38))
								{
									unk_0x872B541D7953A19B(iLocal_38, 0, 0);
								}
							}
							if (!unk_0xF8D041B05C3D1FD4(&cLocal_46, "NULL"))
							{
								unk_0x84DA8EC857988D8D(&cLocal_46, 0);
							}
							unk_0x9A8E2637AA598B66(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x95CCECA3948CFE7B(iLocal_40))
							{
								unk_0xD746AF48865E3EC3(iLocal_40);
							}
							if (!func_61(iLocal_43))
							{
								if ((Global_25175[iLocal_43 /*11*/] == 3 || Global_25175[iLocal_43 /*11*/] == 2) || Global_25175[iLocal_43 /*11*/] == -1)
								{
									Global_25175[iLocal_43 /*11*/] = unk_0x531444754C426278(0, 2);
								}
								unk_0xB85AFAA28270F94F(Global_25175[iLocal_43 /*11*/]);
								unk_0x880E640E63249E96(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25175[iLocal_43 /*11*/];
								iLocal_45 = Global_25175[iLocal_43 /*11*/].f_1;
								unk_0x3FFCDBA22D4C2324(iLocal_44, func_38(iLocal_45), Global_25175[iLocal_43 /*11*/].f_9);
								unk_0xB85AFAA28270F94F(iLocal_44);
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
								if (unk_0x0FDC440EC49E3356() == -1)
								{
									unk_0xB85AFAA28270F94F(Global_25175[iLocal_43 /*11*/]);
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
			unk_0xA4E0D8FD51F2A6F7();
		}
	}
	func_65();
	unk_0xA4E0D8FD51F2A6F7();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25175[iLocal_43 /*11*/] = unk_0x0FDC440EC49E3356();
	}
	fLocal_30 = unk_0x7B9428AB3BD4720B();
	unk_0xB85AFAA28270F94F(-1);
	func_4();
	if (unk_0xCBC8FFE55DC722B5(joaat("family5")) == 0)
	{
		if (!unk_0xF8D041B05C3D1FD4(&cLocal_46, "NULL"))
		{
			unk_0x84DA8EC857988D8D(&cLocal_46, 1);
		}
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x9F4AA6F234E8A860(1);
	}
	func_3();
	func_49();
	if (unk_0x95CCECA3948CFE7B(iLocal_38))
	{
		if (!unk_0xA6CD622BBD209756(iLocal_38))
		{
			unk_0x872B541D7953A19B(iLocal_38, 1, 0);
		}
	}
	unk_0x1FB6A3788631F282(0);
	func_2();
}

void func_2()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		if (iLocal_87 == 1)
		{
			unk_0xF5BE0F19AB14A307();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0x052F8F69DC6157DE(iLocal_35);
		if (unk_0x95CCECA3948CFE7B(iLocal_37))
		{
			if (unk_0x6D5BB810CC209E15(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x6D5BB810CC209E15(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x872B541D7953A19B(iLocal_37, 0, 0);
				if (unk_0x6D5BB810CC209E15(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x27C156B95D022EC9(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x27C156B95D022EC9(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_39))
	{
		unk_0x872B541D7953A19B(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
		if (unk_0xF96FC657C212A30E(uLocal_78))
		{
			unk_0x7D1795B1E14EDFFD(uLocal_78, 0);
		}
		unk_0x5CF5A880ED809DDA(uLocal_78, 0);
		unk_0x8C67D2FDE360FBCA(0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 0);
			unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
			unk_0x170E3F679C0C8F29(unk_0xC8B93D94F8954288(), Local_31, 1, 0, 2);
			if (!unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
				}
			}
			unk_0x872B541D7953A19B(unk_0xC8B93D94F8954288(), 1, 0);
		}
		if (!unk_0xF8D041B05C3D1FD4(&cLocal_62, "NULL"))
		{
			if (unk_0xB5F5536784683C33(&cLocal_62))
			{
				unk_0xDB9D78E5137EE7AD(&cLocal_62);
			}
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_39))
		{
			unk_0x872B541D7953A19B(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0);
		unk_0x1FB6A3788631F282(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xD693CD4BF91071EA(unk_0xA34E7C2A5118D638());
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 1);
		func_13(1);
		unk_0xC0E7FF19962AE47A();
		unk_0x31592941AC9991FE();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x44E93B894936152F())
			{
				unk_0xB518E9C8553B1D2B(0);
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
		unk_0x11D0AD0D13C88D1A();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x48D86334348F315A();
		}
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 0);
		func_11(0, iParam3, iParam2, 0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !func_6(unk_0xA34E7C2A5118D638()))
		{
			unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
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
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_9(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
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
	if (Global_1315889[iVar1] == 1)
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
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x751EF148528839D5() != iParam0 && uParam2)
		{
			unk_0xE3A1C9182C52F4F2(iParam0, uParam1, 1, iParam3);
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
		unk_0x59A0729D503ED758(&Global_2283, 13);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 13);
	}
}

int func_14()
{
	if (!func_61(iLocal_43))
	{
		if (((((((func_28(&uLocal_26) >= 1f && unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x6907EB47FC00DB19(iLocal_37) == unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288())) && !func_27(8, -1)) && !unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0)) && unk_0x4FE2F9A4AAD3A48D(unk_0xC8B93D94F8954288(), Local_31, 90f)) && !unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) && !unk_0xA8D4B6BDCF6DE72B())
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
				if (unk_0xA15CD1E497D2A40F("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0xC4EE38A4CFF7544C(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_15();
		}
		else
		{
			if (func_39("TV_HLP5"))
			{
				unk_0x9F4AA6F234E8A860(1);
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
		unk_0x80904D7F494D0C30(2, 222);
		if (unk_0x8D9008B8900A28D0(2, 222))
		{
			func_40(&iLocal_42);
			func_25(&iLocal_42, 3, "TV_HLP6", 0, 0, 0);
			func_22();
		}
	}
	else
	{
		unk_0x2BE3C7FA4FCCA784(2, 200, 1);
		if (unk_0xA6CD622BBD209756(unk_0xC8B93D94F8954288()))
		{
			unk_0x872B541D7953A19B(unk_0xC8B93D94F8954288(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()))
			{
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 0);
			}
		}
		unk_0xC5E066210BF7DEBB();
		unk_0xB3D51B2D3B11FC33(unk_0xC8B93D94F8954288());
		func_20(1, 1);
		unk_0x80904D7F494D0C30(2, 222);
		func_16();
		if (unk_0x8D9008B8900A28D0(2, 222) || (unk_0xBDC482FE4AF5F4F1(2) && unk_0x595DCDF66B3BBC26(2, 200)))
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
		unk_0x59A0729D503ED758(&Global_2284, 2);
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
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
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
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

int func_19(int iParam0)
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
				if (unk_0xA15CD1E497D2A40F("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0xC4EE38A4CFF7544C(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x0FDC440EC49E3356() == 0)
				{
					unk_0xB85AFAA28270F94F(1);
				}
				else
				{
					unk_0xB85AFAA28270F94F(0);
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
		iVar1 = (unk_0x01153D747C13A17C(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x7B9428AB3BD4720B();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x880E640E63249E96(fVar2);
				iLocal_24 = unk_0x693EBB4F13506457();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x7B9428AB3BD4720B();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x880E640E63249E96(fVar2);
				iLocal_24 = unk_0x693EBB4F13506457();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0xA15CD1E497D2A40F("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0xC4EE38A4CFF7544C(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x693EBB4F13506457() > iLocal_24 + 24)
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
	iVar1 = (unk_0x01153D747C13A17C(2, 218) - 127);
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
		uLocal_78 = unk_0xD5CF3E0D106CC7B8("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0x116B2E22C56AB385(uLocal_78, 100f);
		unk_0x7D1795B1E14EDFFD(uLocal_78, 1);
		unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
		if (unk_0x95CCECA3948CFE7B(iLocal_39))
		{
			unk_0x872B541D7953A19B(iLocal_39, 0, 0);
		}
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), 1);
			unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
			if (unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()))
			{
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 0);
				bLocal_36 = true;
			}
			unk_0x170E3F679C0C8F29(unk_0xC8B93D94F8954288(), Local_31, -1, 0, 2);
			unk_0x872B541D7953A19B(unk_0xC8B93D94F8954288(), 0, 0);
		}
		if (!unk_0xF8D041B05C3D1FD4(&cLocal_62, "NULL"))
		{
			if (!unk_0xB5F5536784683C33(&cLocal_62))
			{
				unk_0x925AE2E6F6E41362(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0x1FB6A3788631F282(1);
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
	if (!unk_0x06972B20E75CBE06(unk_0x1A96BAEAC664567A()))
	{
		return 0;
	}
	if (func_19(0))
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
	
	if (unk_0xCBC8FFE55DC722B5(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xA8D4B6BDCF6DE72B())
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

void func_26()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		if (iLocal_87 == 0)
		{
			unk_0x15B0C8EC5FC1A265("TV_Controls");
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
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
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
			return (func_29(unk_0xDCC86F723E82125E(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_29(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		iVar0 = unk_0x2AA13A84EE2D3B24();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
}

bool func_30(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 2);
}

bool func_31(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 1);
}

void func_32()
{
	float fVar0;
	
	fVar0 = 1f;
	func_33(&fVar0);
	unk_0x052F8F69DC6157DE(iLocal_35);
	unk_0x7F1F2564B5CE06AF(4);
	unk_0xFE9574E90C2FA360(1);
	unk_0x8F0A70A6C9F131BE(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x052F8F69DC6157DE(unk_0x3F4629ED21A461AF());
}

void func_33(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xA2A5649E3ACE3459(0);
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
	Global_25175[iLocal_43 /*11*/] = unk_0x0FDC440EC49E3356();
	fLocal_30 = unk_0x7B9428AB3BD4720B();
	if (unk_0xB5F5536784683C33(&cLocal_62))
	{
		unk_0xDB9D78E5137EE7AD(&cLocal_62);
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0x9F4AA6F234E8A860(1);
	}
	func_40(&iLocal_42);
	unk_0xB85AFAA28270F94F(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_49();
}

int func_35(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_36(unk_0xA34E7C2A5118D638()) };
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
	return unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(iParam0), 0);
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
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/])
	{
		unk_0x5F0618A5FDAD55C4(Global_51402[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x071958EFED9481F5(Global_51402[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
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
	if ((!unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x4FE2F9A4AAD3A48D(unk_0xC8B93D94F8954288(), Local_31, 90f)) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
	{
		func_40(&iLocal_42);
		return 0;
	}
	if (unk_0x6907EB47FC00DB19(iLocal_37) != unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()))
	{
		func_40(&iLocal_42);
		return 0;
	}
	if (func_27(8, -1))
	{
		func_40(&iLocal_42);
		return 0;
	}
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
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
		if (unk_0xA15CD1E497D2A40F("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
		{
			unk_0xC4EE38A4CFF7544C(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
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
	if (Global_100976.f_8828[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_100976.f_8828[iParam0 /*12*/].f_6 == 11 || Global_100976.f_8828[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_100976.f_8828[iParam0 /*12*/].f_5 = 1;
		Global_100976.f_8828[iParam0 /*12*/].f_10 = iParam1;
		Global_100976.f_8828[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_100712 = 0;
	Global_100713 = 0;
	Global_100714 = 0;
	Global_100715 = 0;
	Global_100716 = 0;
	Global_100717 = 0;
	Global_100718 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_100976.f_8828.f_3853;
	Global_100976.f_8828.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_100976.f_8828[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_100976.f_8828[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100712++;
					fVar1 = (fVar1 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100713++;
					fVar2 = (fVar2 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100714++;
					fVar3 = (fVar3 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100715++;
					fVar4 = (fVar4 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100716++;
					fVar5 = (fVar5 + (Global_100976.f_8828[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100717++;
					fVar6 = (fVar6 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100718++;
					fVar7 = (fVar7 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100695 > 0)
	{
		if (Global_100712 == Global_100695)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100696 > 0)
	{
		if (Global_100713 == Global_100696)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100697 > 0)
	{
		if (Global_100714 == Global_100697)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100698 > 0)
	{
		if (Global_100715 == Global_100698)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100699 > 0)
	{
		if (((Global_100716 == Global_100699 || (Global_100699 * 10 / Global_100716) < 41) || Global_100716 > Global_100702) || Global_100716 == Global_100702)
		{
			if (!unk_0xDCC86F723E82125E(Global_100976.f_8828.f_3856, 14))
			{
				if (Global_100716 == Global_100699)
				{
					unk_0x2343CAF890251A86(joaat("num_rndevents_completed"), Global_100699, 0);
					unk_0x59A0729D503ED758(&(Global_100976.f_8828.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100700 > 0)
	{
		if (Global_100717 == Global_100700)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100701 > 0)
	{
		if (Global_100718 == Global_100701)
		{
			fVar7 = 5f;
		}
	}
	Global_100976.f_8828.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100716 > Global_100702 || Global_100716 == Global_100702)
	{
		iVar9 = Global_100702;
	}
	else
	{
		iVar9 = Global_100716;
	}
	unk_0x071958EFED9481F5(joaat("num_missions_completed"), Global_100712, 1);
	unk_0x071958EFED9481F5(joaat("num_missions_available"), Global_100695, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_completed"), Global_100713, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_available"), Global_100696, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_completed"), Global_100714, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_available"), Global_100697, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_completed"), Global_100715, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_available"), Global_100698, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_available"), Global_100702, 1);
	unk_0x071958EFED9481F5(joaat("num_misc_completed"), (Global_100718 + Global_100717), 1);
	unk_0x071958EFED9481F5(joaat("num_misc_available"), (Global_100701 + Global_100700), 1);
	Global_100719 = (Global_100712 * 100 / Global_100695);
	Global_100721 = ((Global_100714 + Global_100713) * 100 / (Global_100697 + Global_100696));
	Global_100720 = ((Global_100715 + iVar9) * 100 / (Global_100698 + Global_100702));
	Global_100722 = ((Global_100717 + Global_100718) * 100 / (Global_100700 + Global_100701));
	unk_0xB3AF65174F7E38A7(joaat("total_progress_made"), Global_100976.f_8828.f_3853, 1);
	unk_0x071958EFED9481F5(joaat("percent_story_missions"), Global_100719, 1);
	unk_0x071958EFED9481F5(joaat("percent_ambient_missions"), Global_100720, 1);
	unk_0x071958EFED9481F5(joaat("percent_oddjobs"), Global_100721, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853))
	{
		func_47(13, unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853));
	}
	if (!unk_0x11C746AE4DB58A03())
	{
		if (!Global_69317)
		{
			if (func_46() == 2 == 0 && !unk_0xBBAE3E0C60A8AD4B())
			{
				if (unk_0x91629FFED455823B())
				{
					Global_100710 = 0;
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
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
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
	iVar0 = unk_0x2D6B7C5EAD43367D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x50EEE3FED4DFE988(iParam0, iParam1);
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
	var uVar11;
	var uVar12;
	
	if (iParam2 == -1)
	{
		iParam2 = func_10();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x76928FD01140B865((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xCCB054268E9EBBCD((iParam0 - 0)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x76928FD01140B865((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xCCB054268E9EBBCD((iParam0 - 192)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x76928FD01140B865((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xCCB054268E9EBBCD((iParam0 - 513)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x76928FD01140B865((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xCCB054268E9EBBCD((iParam0 - 705)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x39DB3B2AF22A3569((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xCCB054268E9EBBCD((iParam0 - 3111)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x39DB3B2AF22A3569((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xCCB054268E9EBBCD((iParam0 - 2919)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD9B02A4858A8C0D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xCCB054268E9EBBCD((iParam0 - 4207)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD9B02A4858A8C0D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xCCB054268E9EBBCD((iParam0 - 4335)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD9B02A4858A8C0D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xCCB054268E9EBBCD((iParam0 - 6029)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7449)
	{
		uVar11 = unk_0xD9B02A4858A8C0D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xCCB054268E9EBBCD((iParam0 - 7385)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD9B02A4858A8C0D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xCCB054268E9EBBCD((iParam0 - 7321)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_49()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x4C4B08464D56970E("tvscreen"))
	{
		unk_0xA4CE556B2DCD4B71("tvscreen");
		iLocal_35 = -1;
		unk_0x052F8F69DC6157DE(unk_0x3F4629ED21A461AF());
	}
}

void func_50()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_51();
	}
	if (unk_0x4C4B08464D56970E("tvscreen"))
	{
		unk_0xA4CE556B2DCD4B71("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x95CCECA3948CFE7B(iLocal_37))
	{
		func_65();
	}
	iVar0 = unk_0x6D5BB810CC209E15(iLocal_37);
	unk_0x55C5397453BE04EB("tvscreen", 0);
	unk_0x8D3EF96B70C29C06(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x86BA337EC747F622(iVar0))
		{
			if (!unk_0x95CCECA3948CFE7B(iLocal_37))
			{
				func_65();
			}
			if (!unk_0x265A690A472378A4(iLocal_37))
			{
				func_65();
			}
			if (!unk_0x4C4B08464D56970E("tvscreen"))
			{
				unk_0x55C5397453BE04EB("tvscreen", 0);
			}
			if (!unk_0x86BA337EC747F622(iVar0))
			{
				unk_0x8D3EF96B70C29C06(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0xEA2A23EE27BAE0D5("tvscreen");
	func_3();
}

void func_51()
{
	if (unk_0x95CCECA3948CFE7B(iLocal_37))
	{
		if (unk_0x6D5BB810CC209E15(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0xB2AD4914C25D1420(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0x765E3FA65D011F03(iLocal_37, uLocal_34);
	unk_0xB7A2078CD1C9A82F(iLocal_37, 1);
	unk_0x872B541D7953A19B(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0xB2AD4914C25D1420(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0x765E3FA65D011F03(iLocal_39, uLocal_34);
	unk_0xB7A2078CD1C9A82F(iLocal_39, 1);
	unk_0x872B541D7953A19B(iLocal_39, 0, 0);
}

void func_52(var uParam0)
{
	func_53(uParam0, 0f);
}

void func_53(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_29(unk_0xDCC86F723E82125E(*uParam0, 4)) - fParam1);
	unk_0x59A0729D503ED758(uParam0, 1);
	unk_0x77621132305B133B(uParam0, 2);
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
	return Global_100976.f_7719.f_330[iParam0 /*6*/];
}

void func_56()
{
	Local_31 = { unk_0x44C17CCB85A88A1F(iLocal_37, 1) };
	uLocal_34 = unk_0x59DD203239FBDCAD(iLocal_37);
	func_58();
	if (unk_0x6D5BB810CC209E15(iLocal_37) == joaat("prop_tv_03"))
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
	else if (unk_0x6D5BB810CC209E15(iLocal_37) == joaat("prop_trev_tv_01"))
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
	else if (unk_0x6D5BB810CC209E15(iLocal_37) == joaat("prop_tv_flat_01"))
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
	else if (unk_0x6D5BB810CC209E15(iLocal_37) == joaat("prop_tv_flat_02"))
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
	else if (unk_0x6D5BB810CC209E15(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x6D5BB810CC209E15(iLocal_37) == joaat("v_ilev_mm_scre_off"))
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
	else if (unk_0x6D5BB810CC209E15(iLocal_37) == joaat("des_tvsmash_start"))
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
	iLocal_38 = unk_0xB2AD4914C25D1420(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0x765E3FA65D011F03(iLocal_38, uLocal_34);
	unk_0x872B541D7953A19B(iLocal_38, 1, 0);
	unk_0xB7A2078CD1C9A82F(iLocal_38, 1);
}

void func_58()
{
	unk_0x3FFCDBA22D4C2324(0, func_38(1), 0);
	if (func_55(22))
	{
		unk_0x3FFCDBA22D4C2324(1, func_38(12), 0);
	}
	else
	{
		unk_0x3FFCDBA22D4C2324(1, func_38(2), 0);
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
			if (unk_0x95CCECA3948CFE7B(iLocal_40))
			{
				unk_0xEE6504C7ECC425AB(iLocal_40, 0);
			}
			if (unk_0x95CCECA3948CFE7B(iLocal_37))
			{
				unk_0xEE6504C7ECC425AB(iLocal_37, 0);
			}
			if (unk_0x95CCECA3948CFE7B(iLocal_39))
			{
				unk_0xEE6504C7ECC425AB(iLocal_39, 0);
			}
			if (unk_0x95CCECA3948CFE7B(iLocal_38))
			{
				unk_0xEE6504C7ECC425AB(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_40))
		{
			unk_0xEE6504C7ECC425AB(iLocal_40, 1);
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_37))
		{
			unk_0xEE6504C7ECC425AB(iLocal_37, 1);
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_39))
		{
			unk_0xEE6504C7ECC425AB(iLocal_39, 1);
		}
		if (unk_0x95CCECA3948CFE7B(iLocal_38))
		{
			unk_0xEE6504C7ECC425AB(iLocal_38, 1);
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
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x9EAC4A2F633474B9() == 1f)
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
		return unk_0xDCC86F723E82125E(Global_82227[Global_88361 /*34*/].f_15, 20);
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
		unk_0xA4E0D8FD51F2A6F7();
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
		unk_0x9F4AA6F234E8A860(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_66();
	if (unk_0xB5F5536784683C33(&cLocal_62))
	{
		unk_0xDB9D78E5137EE7AD(&cLocal_62);
	}
	unk_0x046638E47207DCF4();
	func_2();
	unk_0xA4E0D8FD51F2A6F7();
}

void func_66()
{
	func_49();
	if (unk_0x95CCECA3948CFE7B(iLocal_37))
	{
		if (unk_0x6D5BB810CC209E15(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xA278ECBE30D8AE4F(&iLocal_37);
			unk_0x4BBD72565A0AF033(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_39))
	{
		unk_0xA278ECBE30D8AE4F(&iLocal_39);
		unk_0x4BBD72565A0AF033(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x95CCECA3948CFE7B(iLocal_38))
	{
		unk_0xA278ECBE30D8AE4F(&iLocal_38);
		unk_0x4BBD72565A0AF033(joaat("prop_tt_screenstatic"));
	}
}

