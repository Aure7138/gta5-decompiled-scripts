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
	if (unk_0x2EC83C7ACA23E8A4(2))
	{
		func_66();
	}
	if (unk_0xD3FACCDA4D66AEAD(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_65();
		if (unk_0xD3FACCDA4D66AEAD(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_64() && !func_63())) && !func_62(iLocal_43))
			{
				func_66();
			}
			if ((unk_0xC740F8182E7E9681() && unk_0x4067637E264DB8F1() != 3) && unk_0x3FC82179CAE1D56D() == 3)
			{
				func_66();
			}
			if (func_61(13) || func_61(14))
			{
				func_66();
			}
			if (unk_0xD9890AC57C9BDC10(iScriptParam_0))
			{
				func_66();
			}
			if (unk_0x9AB41624168E4453(iScriptParam_0))
			{
				if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
				{
					func_60();
					if (unk_0xC6FE0F623405BFA8(iScriptParam_0) < 950)
					{
						func_66();
					}
					switch (iLocal_29)
					{
						case 0:
							func_57();
							if (iLocal_43 == 5)
							{
								if (func_56(18) == 1 && func_56(20) == 0)
								{
									uLocal_41 = unk_0x66A41CE547600192(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0xBA2D5D1079324E95(uLocal_41))
									{
										unk_0x21F64301ADA0932D(uLocal_41, 9);
									}
									unk_0x78C587487CD40B92();
								}
							}
							if (iLocal_43 == -1)
							{
								func_66();
							}
							else
							{
								func_55();
								unk_0x44291E80E33DC67C("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0xA28F0E9F63F56A89(0);
								Global_25245[iLocal_43 /*11*/].f_2 = 0;
								Global_25245[iLocal_43 /*11*/].f_6 = 1;
								Global_25245[iLocal_43 /*11*/] = unk_0xB5BF1B58C833F7A9(0, 2);
								Global_25245[iLocal_43 /*11*/].f_1 = 0;
								Global_25245[iLocal_43 /*11*/].f_4 = 0;
								Global_25245[iLocal_43 /*11*/].f_7 = 0;
								Global_25245[iLocal_43 /*11*/].f_8 = 0;
								Global_25245[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_53(&uLocal_26);
								func_51();
								func_50();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x7B12DDF971332F14(iLocal_37) && unk_0x23E01D155F70E890(iLocal_37, 1119092736))
							{
								if (func_42() || Global_25245[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_41(&iLocal_42);
							}
							break;
						
						case 2:
							func_51();
							if (!func_62(iLocal_43))
							{
								func_41(&iLocal_42);
								if (func_40("TV_HLP1"))
								{
									unk_0x94724F7C938EBE34(1);
								}
							}
							if (unk_0xD3FACCDA4D66AEAD(iLocal_37))
							{
								if (!unk_0x374C36A4A2089997(iLocal_37))
								{
									unk_0xEDBE0CD7C81FA37E(iLocal_37, 1, 0);
								}
							}
							if (unk_0xD3FACCDA4D66AEAD(iLocal_39))
							{
								if (!unk_0x374C36A4A2089997(iLocal_39))
								{
									unk_0xEDBE0CD7C81FA37E(iLocal_39, 1, 0);
								}
							}
							if (unk_0xD3FACCDA4D66AEAD(iLocal_38))
							{
								if (unk_0x374C36A4A2089997(iLocal_38))
								{
									unk_0xEDBE0CD7C81FA37E(iLocal_38, 0, 0);
								}
							}
							if (!unk_0x28C1B9853548BD8E(&cLocal_46, "NULL"))
							{
								unk_0x32508B8E93AAF2BE(&cLocal_46, 0);
							}
							unk_0x39A23F23BFCC4B3F(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0xD3FACCDA4D66AEAD(iLocal_40))
							{
								unk_0x2960C0EB0A391094(iLocal_40);
							}
							if (!func_62(iLocal_43))
							{
								if ((Global_25245[iLocal_43 /*11*/] == 3 || Global_25245[iLocal_43 /*11*/] == 2) || Global_25245[iLocal_43 /*11*/] == -1)
								{
									Global_25245[iLocal_43 /*11*/] = unk_0xB5BF1B58C833F7A9(0, 2);
								}
								unk_0xBAAA4C575E12F9B7(Global_25245[iLocal_43 /*11*/]);
								unk_0xA5C49CE9D5E01120(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25245[iLocal_43 /*11*/];
								iLocal_45 = Global_25245[iLocal_43 /*11*/].f_1;
								unk_0xC221329F297F1AC4(iLocal_44, func_39(iLocal_45), Global_25245[iLocal_43 /*11*/].f_9);
								unk_0xBAAA4C575E12F9B7(iLocal_44);
								if (Global_25245[iLocal_43 /*11*/].f_7)
								{
									Global_25245[iLocal_43 /*11*/].f_5 = 0;
									Global_25245[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25245[iLocal_43 /*11*/].f_2 = 1;
							func_38(133, 1);
							func_38(131, 1);
							func_38(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25245[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25245[iLocal_43 /*11*/].f_7 && func_62(iLocal_43))
							{
								Global_25245[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_36(iLocal_43))
							{
								func_35();
								iLocal_29 = 5;
							}
							else
							{
								func_33();
								if (unk_0xEF534FE84D072DD3() == -1)
								{
									unk_0xBAAA4C575E12F9B7(Global_25245[iLocal_43 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_36(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_25245[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_41(&iLocal_42);
							}
							Global_25245[iLocal_43 /*11*/].f_5 = 0;
							Global_25245[iLocal_43 /*11*/].f_4 = 0;
							Global_25245[iLocal_43 /*11*/].f_1 = 0;
							Global_25245[iLocal_43 /*11*/].f_2 = 0;
							Global_25245[iLocal_43 /*11*/].f_7 = 0;
							Global_25245[iLocal_43 /*11*/].f_8 = 0;
							Global_25245[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_66();
			unk_0x78C587487CD40B92();
		}
	}
	func_66();
	unk_0x78C587487CD40B92();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25245[iLocal_43 /*11*/] = unk_0xEF534FE84D072DD3();
	}
	fLocal_30 = unk_0x6D1A703D1814F3E8();
	unk_0xBAAA4C575E12F9B7(-1);
	func_4();
	if (unk_0xA96867DD0A63C62C(joaat("family5")) == 0)
	{
		if (!unk_0x28C1B9853548BD8E(&cLocal_46, "NULL"))
		{
			unk_0x32508B8E93AAF2BE(&cLocal_46, 1);
		}
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x94724F7C938EBE34(1);
	}
	func_3();
	func_50();
	if (unk_0xD3FACCDA4D66AEAD(iLocal_38))
	{
		if (!unk_0x374C36A4A2089997(iLocal_38))
		{
			unk_0xEDBE0CD7C81FA37E(iLocal_38, 1, 0);
		}
	}
	unk_0x2BA7E53C36F6CEBA(0);
	func_2();
}

void func_2()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (iLocal_87 == 1)
		{
			unk_0xE3D68BC1DAA3679B();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0x3C50A3550FB6DB4E(iLocal_35);
		if (unk_0xD3FACCDA4D66AEAD(iLocal_37))
		{
			if (unk_0x705BC1BB91F530B5(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x705BC1BB91F530B5(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0xEDBE0CD7C81FA37E(iLocal_37, 0, 0);
				if (unk_0x705BC1BB91F530B5(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x676A3D7F15838EEA(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x676A3D7F15838EEA(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_39))
	{
		unk_0xEDBE0CD7C81FA37E(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
		if (unk_0xC0A42281C0F88A94(uLocal_78))
		{
			unk_0x07553DAC96600443(uLocal_78, 0);
		}
		unk_0x50C86ABC13A071F8(uLocal_78, 0);
		unk_0x8BDD755F07063522(0);
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), 0);
			unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
			unk_0x6486E0794864EE9B(unk_0xA0081090911D13E5(), Local_31, 1, 0, 2);
			if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 1, 0);
				}
			}
			unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 1, 0);
		}
		if (!unk_0x28C1B9853548BD8E(&cLocal_62, "NULL"))
		{
			if (unk_0x6DEB8F88FFE09057(&cLocal_62))
			{
				unk_0x7C1793252FA472B6(&cLocal_62);
			}
		}
		if (unk_0xD3FACCDA4D66AEAD(iLocal_39))
		{
			unk_0xEDBE0CD7C81FA37E(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0);
		unk_0x2BA7E53C36F6CEBA(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x864EAABAADAAA1E3(unk_0x0C1D3C552325765B());
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 1);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 1);
		func_14(1);
		unk_0x3437639A811EF082();
		unk_0xB5B3F40B585C8D07();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xC6CB0C1523C73C77())
			{
				unk_0x588D9B1F6CF36C3C(0);
			}
			if (!func_13())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_55822 = 1;
		Global_68128 = 1;
		Global_69615 = 1;
	}
	else
	{
		func_14(0);
		unk_0x2D1364CCF7771349();
		Global_55822 = 0;
		if (bParam1)
		{
			unk_0xF100005CC9E0A614();
		}
		unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 0);
		unk_0x4044446FF404F021(unk_0x0C1D3C552325765B(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0xA86CA03D9749EEB3())
		{
			if (((!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_10(unk_0x0C1D3C552325765B())) && !func_7(unk_0x0C1D3C552325765B(), 0)) && !func_6())
			{
				unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
			}
		}
		else if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()) && !func_10(unk_0x0C1D3C552325765B()))
		{
			unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
		}
		Global_69615 = 0;
	}
}

bool func_6()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
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
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312731;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xD0570FF450787B16() != iParam0 && uParam2)
		{
			unk_0x0898502403A5CFE2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 13);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 13);
	}
}

int func_15()
{
	if (!func_62(iLocal_43))
	{
		if (((((((func_29(&uLocal_26) >= 1f && unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x16A396814EC162D8(iLocal_37) == unk_0x16A396814EC162D8(unk_0xA0081090911D13E5())) && !func_28(8, -1)) && !unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0)) && unk_0xEC2915067E62C37B(unk_0xA0081090911D13E5(), Local_31, 90f)) && !unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5())) && !unk_0xC740F8182E7E9681())
		{
			if (iLocal_42 == -1)
			{
				func_27();
				func_26(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_24(iLocal_42, 1))
			{
				func_41(&iLocal_42);
				func_53(&uLocal_26);
				Global_25245[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0xB681AFC282675D02("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xAB16AADE80707D47(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_40("TV_HLP5"))
			{
				unk_0x94724F7C938EBE34(1);
			}
			func_2();
			func_41(&iLocal_42);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_85 == 0)
	{
		unk_0xCEEF85C0FC6A898F(2, 222);
		if (unk_0x2A57AED61E15C7C7(2, 222))
		{
			func_41(&iLocal_42);
			func_26(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_23();
		}
	}
	else
	{
		unk_0xABC36CFE4F3421A0(2, 200, 1);
		if (unk_0x374C36A4A2089997(unk_0xA0081090911D13E5()))
		{
			unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
			{
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
			}
		}
		unk_0xB477A2D8CA963C52();
		unk_0x57686A7AFB3B000A(unk_0xA0081090911D13E5());
		func_21(1, 1);
		unk_0xCEEF85C0FC6A898F(2, 222);
		func_17();
		if (unk_0x2A57AED61E15C7C7(2, 222) || (unk_0x4255B5ECB9D34344(2) && unk_0x7682E36A3D0D896F(2, 200)))
		{
			func_41(&iLocal_42);
			func_4();
		}
	}
}

void func_17()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(0);
		}
		unk_0x88B0F0DC270164B7(&Global_2314, 2);
	}
}

void func_18(int iParam0)
{
	if (Global_14604)
	{
		func_19(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
	}
	if (!func_13())
	{
		Global_14443.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_20(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_20(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_21(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_22(0))
		{
			if (!iLocal_22)
			{
				if (unk_0xB681AFC282675D02("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xAB16AADE80707D47(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0xEF534FE84D072DD3() == 0)
				{
					unk_0xBAAA4C575E12F9B7(1);
				}
				else
				{
					unk_0xBAAA4C575E12F9B7(0);
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
		iVar1 = (unk_0xCEA3D75B69A1A87E(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x6D1A703D1814F3E8();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0xA5C49CE9D5E01120(fVar2);
				iLocal_24 = unk_0xDF658EB6CA91DFBC();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x6D1A703D1814F3E8();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0xA5C49CE9D5E01120(fVar2);
				iLocal_24 = unk_0xDF658EB6CA91DFBC();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0xB681AFC282675D02("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0xAB16AADE80707D47(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0xDF658EB6CA91DFBC() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0xCEA3D75B69A1A87E(2, 218) - 127);
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

void func_23()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_85 == 0)
	{
		uLocal_78 = unk_0xF442D2875C1C4699("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0xD17B21801B84F333(uLocal_78, 100f);
		unk_0x07553DAC96600443(uLocal_78, 1);
		unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
		if (unk_0xD3FACCDA4D66AEAD(iLocal_39))
		{
			unk_0xEDBE0CD7C81FA37E(iLocal_39, 0, 0);
		}
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), 1);
			unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
			if (unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
			{
				unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
				bLocal_36 = true;
			}
			unk_0x6486E0794864EE9B(unk_0xA0081090911D13E5(), Local_31, -1, 0, 2);
			unk_0xEDBE0CD7C81FA37E(unk_0xA0081090911D13E5(), 0, 0);
		}
		if (!unk_0x28C1B9853548BD8E(&cLocal_62, "NULL"))
		{
			if (!unk_0x6DEB8F88FFE09057(&cLocal_62))
			{
				unk_0xC94C39C53546E775(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0x2BA7E53C36F6CEBA(1);
		iLocal_85 = 1;
	}
}

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xC0691D80D21C989D(unk_0x4A0FB18E33FE5805()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (unk_0x7C0379981B7E6E40())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36478[iVar0 /*32*/] == 1 && Global_36478[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36478[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36478[iVar0 /*32*/].f_5 = 1;
			Global_36478[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36478[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36478[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
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
		if (Global_36478[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_26(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xA96867DD0A63C62C(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xC740F8182E7E9681())
	{
		if (!*iParam0 == -1)
		{
			func_41(iParam0);
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
		if (!Global_36478[iVar0 /*32*/])
		{
			Global_36478[iVar0 /*32*/] = 1;
			Global_36478[iVar0 /*32*/].f_1 = Global_36679;
			Global_36679++;
			Global_36478[iVar0 /*32*/].f_4 = 0;
			Global_36478[iVar0 /*32*/].f_29 = 0;
			Global_36478[iVar0 /*32*/].f_5 = 0;
			Global_36478[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36478[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36478[iVar0 /*32*/].f_6 = iParam3;
			Global_36478[iVar0 /*32*/].f_31 = unk_0xEAE20F1125B83888();
			Global_36478[iVar0 /*32*/].f_7 = 0;
			Global_36478[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x509383441597090D(sParam4))
			{
				Global_36478[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36478[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36478[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36478[iVar0 /*32*/].f_12 = 0;
				Global_36478[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36478[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_27()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (iLocal_87 == 0)
		{
			unk_0x0B2A7A28BA9820E3("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

bool func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

float func_29(var uParam0)
{
	if (func_32(uParam0))
	{
		if (func_31(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_30(unk_0x08BA6DD398CA197C(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_30(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		iVar2 = unk_0x4B50AAB32FBE0483();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xDF658EB6CA91DFBC()) / 1000f);
}

bool func_31(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 2);
}

bool func_32(var uParam0)
{
	return unk_0x08BA6DD398CA197C(*uParam0, 1);
}

void func_33()
{
	float fVar0;
	
	fVar0 = 1f;
	func_34(&fVar0);
	unk_0x3C50A3550FB6DB4E(iLocal_35);
	unk_0x1373E5003F76E429(4);
	unk_0x6F6B42957DC01968(1);
	unk_0x13472B1D17A65906(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x3C50A3550FB6DB4E(unk_0x7ED204B2CAEDDF75());
}

void func_34(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x900671749E93DC05(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_35()
{
	Global_25245[iLocal_43 /*11*/].f_7 = 0;
	Global_25245[iLocal_43 /*11*/] = unk_0xEF534FE84D072DD3();
	fLocal_30 = unk_0x6D1A703D1814F3E8();
	if (unk_0x6DEB8F88FFE09057(&cLocal_62))
	{
		unk_0x7C1793252FA472B6(&cLocal_62);
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x94724F7C938EBE34(1);
	}
	func_41(&iLocal_42);
	unk_0xBAAA4C575E12F9B7(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_50();
}

int func_36(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_37(unk_0x0C1D3C552325765B()) };
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

Vector3 func_37(int iParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51558[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		return;
	}
	if (Global_51558[iParam0 /*7*/])
	{
		unk_0x8A3351ECF43DB941(Global_51558[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x10CE8769EE2626C7(Global_51558[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_39(int iParam0)
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

bool func_40(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_41(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_25(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36478[iVar0 /*32*/])
		{
			Global_36478[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_42()
{
	if (func_29(&uLocal_26) < 1f)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if ((!unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0xEC2915067E62C37B(unk_0xA0081090911D13E5(), Local_31, 90f)) || unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0x16A396814EC162D8(iLocal_37) != unk_0x16A396814EC162D8(unk_0xA0081090911D13E5()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (func_28(8, -1))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_88667)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_25245[iLocal_43 /*11*/].f_8)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1)
	{
		func_26(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_24(iLocal_42, 1))
	{
		func_41(&iLocal_42);
		func_53(&uLocal_26);
		Global_25245[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0xB681AFC282675D02("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0xAB16AADE80707D47(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_43(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2)
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
		func_49((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101553.f_9049[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101553.f_9049[iParam0 /*12*/].f_6 == 11 || Global_101553.f_9049[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101553.f_9049[iParam0 /*12*/].f_5 = 1;
		Global_101553.f_9049[iParam0 /*12*/].f_10 = iParam1;
		Global_101553.f_9049[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE8AB1AD861EA93C1(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_44();
	}
}

void func_44()
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
	Global_101289 = 0;
	Global_101290 = 0;
	Global_101291 = 0;
	Global_101292 = 0;
	Global_101293 = 0;
	Global_101294 = 0;
	Global_101295 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101553.f_9049.f_3853;
	Global_101553.f_9049.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101553.f_9049[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101553.f_9049[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101289++;
					fVar1 = (fVar1 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101290++;
					fVar2 = (fVar2 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101291++;
					fVar3 = (fVar3 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101292++;
					fVar4 = (fVar4 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101293++;
					fVar5 = (fVar5 + (Global_101553.f_9049[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101294++;
					fVar6 = (fVar6 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101295++;
					fVar7 = (fVar7 + Global_101553.f_9049[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101272 > 0)
	{
		if (Global_101289 == Global_101272)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101273 > 0)
	{
		if (Global_101290 == Global_101273)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101274 > 0)
	{
		if (Global_101291 == Global_101274)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101275 > 0)
	{
		if (Global_101292 == Global_101275)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101276 > 0)
	{
		if (((Global_101293 == Global_101276 || (Global_101276 * 10 / Global_101293) < 41) || Global_101293 > Global_101279) || Global_101293 == Global_101279)
		{
			if (!unk_0x08BA6DD398CA197C(Global_101553.f_9049.f_3856, 14))
			{
				if (Global_101293 == Global_101276)
				{
					unk_0xE8AB1AD861EA93C1(joaat("num_rndevents_completed"), Global_101276, 0);
					unk_0x88B0F0DC270164B7(&(Global_101553.f_9049.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101277 > 0)
	{
		if (Global_101294 == Global_101277)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101278 > 0)
	{
		if (Global_101295 == Global_101278)
		{
			fVar7 = 5f;
		}
	}
	Global_101553.f_9049.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101293 > Global_101279 || Global_101293 == Global_101279)
	{
		iVar9 = Global_101279;
	}
	else
	{
		iVar9 = Global_101293;
	}
	unk_0x10CE8769EE2626C7(joaat("num_missions_completed"), Global_101289, 1);
	unk_0x10CE8769EE2626C7(joaat("num_missions_available"), Global_101272, 1);
	unk_0x10CE8769EE2626C7(joaat("num_minigames_completed"), Global_101290, 1);
	unk_0x10CE8769EE2626C7(joaat("num_minigames_available"), Global_101273, 1);
	unk_0x10CE8769EE2626C7(joaat("num_oddjobs_completed"), Global_101291, 1);
	unk_0x10CE8769EE2626C7(joaat("num_oddjobs_available"), Global_101274, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndpeople_completed"), Global_101292, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndpeople_available"), Global_101275, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x10CE8769EE2626C7(joaat("num_rndevents_available"), Global_101279, 1);
	unk_0x10CE8769EE2626C7(joaat("num_misc_completed"), (Global_101295 + Global_101294), 1);
	unk_0x10CE8769EE2626C7(joaat("num_misc_available"), (Global_101278 + Global_101277), 1);
	Global_101296 = (Global_101289 * 100 / Global_101272);
	Global_101298 = ((Global_101291 + Global_101290) * 100 / (Global_101274 + Global_101273));
	Global_101297 = ((Global_101292 + iVar9) * 100 / (Global_101275 + Global_101279));
	Global_101299 = ((Global_101294 + Global_101295) * 100 / (Global_101277 + Global_101278));
	unk_0xA88E0F84F0E0949F(joaat("total_progress_made"), Global_101553.f_9049.f_3853, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_story_missions"), Global_101296, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_ambient_missions"), Global_101297, 1);
	unk_0x10CE8769EE2626C7(joaat("percent_oddjobs"), Global_101298, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101553.f_9049.f_3853))
	{
		func_48(13, unk_0xF34EE736CF047844(Global_101553.f_9049.f_3853));
	}
	if (!unk_0x426131BF5A0B35D2())
	{
		if (!Global_69617)
		{
			if (func_47() == 2 == 0 && !unk_0xA86CA03D9749EEB3())
			{
				if (unk_0x187CC7D5F9B002AA())
				{
					Global_101287 = 0;
				}
				if (!Global_55816)
				{
					func_45();
				}
			}
		}
	}
}

int func_45()
{
	if (func_46(0))
	{
		return 0;
	}
	if (Global_91445.f_8)
	{
		if (Global_91445.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91445.f_10 > 1)
	{
		return 0;
	}
	Global_91445.f_10++;
	return 1;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0xA96867DD0A63C62C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_69865, 0);
}

int func_47()
{
	return Global_25185;
}

int func_48(int iParam0, int iParam1)
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
	iVar0 = unk_0xC7B7B86D55D4C17E(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC77B359C84812EFE(iParam0, iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		uVar13 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_50()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x3C3FFB3C5310E07E("tvscreen"))
	{
		unk_0xC09719D492EA1AB2("tvscreen");
		iLocal_35 = -1;
		unk_0x3C50A3550FB6DB4E(unk_0x7ED204B2CAEDDF75());
	}
}

void func_51()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_52();
	}
	if (unk_0x3C3FFB3C5310E07E("tvscreen"))
	{
		unk_0xC09719D492EA1AB2("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0xD3FACCDA4D66AEAD(iLocal_37))
	{
		func_66();
	}
	iVar0 = unk_0x705BC1BB91F530B5(iLocal_37);
	unk_0xCFB9D2542820E400("tvscreen", 0);
	unk_0xAF36A5E144D1A146(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x6033442D4E141E04(iVar0))
		{
			if (!unk_0xD3FACCDA4D66AEAD(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x9AB41624168E4453(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x3C3FFB3C5310E07E("tvscreen"))
			{
				unk_0xCFB9D2542820E400("tvscreen", 0);
			}
			if (!unk_0x6033442D4E141E04(iVar0))
			{
				unk_0xAF36A5E144D1A146(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0xA17E85BB0151FB9D("tvscreen");
	func_3();
}

void func_52()
{
	if (unk_0xD3FACCDA4D66AEAD(iLocal_37))
	{
		if (unk_0x705BC1BB91F530B5(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0xF7753FE89C776300(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0x10BB9EA2ADBCF0F3(iLocal_37, uLocal_34);
	unk_0xBB21B5C3111E5F85(iLocal_37, 1);
	unk_0xEDBE0CD7C81FA37E(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0xF7753FE89C776300(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0x10BB9EA2ADBCF0F3(iLocal_39, uLocal_34);
	unk_0xBB21B5C3111E5F85(iLocal_39, 1);
	unk_0xEDBE0CD7C81FA37E(iLocal_39, 0, 0);
}

void func_53(var uParam0)
{
	func_54(uParam0, 0f);
}

void func_54(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_30(unk_0x08BA6DD398CA197C(*uParam0, 4)) - fParam1);
	unk_0x88B0F0DC270164B7(uParam0, 1);
	unk_0x09C86C0C5CA26B1E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_55()
{
}

int func_56(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101553.f_7940.f_330[iParam0 /*6*/];
}

void func_57()
{
	Local_31 = { unk_0xC59DF10B4FC39DF8(iLocal_37, 1) };
	uLocal_34 = unk_0x5E6FDC4F3A8C8EDE(iLocal_37);
	func_59();
	if (unk_0x705BC1BB91F530B5(iLocal_37) == joaat("prop_tv_03"))
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
	else if (unk_0x705BC1BB91F530B5(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			Local_79 = { 1978.23f, 3819.65f, 34.2724f };
			Local_82 = { 0f, 0f, -105.15f };
			Local_88 = { 1978.33f, 3819.717f, 32.4501f };
			func_58();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x705BC1BB91F530B5(iLocal_37) == joaat("prop_tv_flat_01"))
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
	else if (unk_0x705BC1BB91F530B5(iLocal_37) == joaat("prop_tv_flat_02"))
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
	else if (unk_0x705BC1BB91F530B5(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x705BC1BB91F530B5(iLocal_37) == joaat("v_ilev_mm_scre_off"))
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
	else if (unk_0x705BC1BB91F530B5(iLocal_37) == joaat("des_tvsmash_start"))
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

void func_58()
{
	iLocal_38 = unk_0xF7753FE89C776300(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0x10BB9EA2ADBCF0F3(iLocal_38, uLocal_34);
	unk_0xEDBE0CD7C81FA37E(iLocal_38, 1, 0);
	unk_0xBB21B5C3111E5F85(iLocal_38, 1);
}

void func_59()
{
	unk_0xC221329F297F1AC4(0, func_39(1), 0);
	if (func_56(22))
	{
		unk_0xC221329F297F1AC4(1, func_39(12), 0);
	}
	else
	{
		unk_0xC221329F297F1AC4(1, func_39(2), 0);
	}
}

void func_60()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25245[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0xD3FACCDA4D66AEAD(iLocal_40))
			{
				unk_0x39800A40136ECF37(iLocal_40, 0);
			}
			if (unk_0xD3FACCDA4D66AEAD(iLocal_37))
			{
				unk_0x39800A40136ECF37(iLocal_37, 0);
			}
			if (unk_0xD3FACCDA4D66AEAD(iLocal_39))
			{
				unk_0x39800A40136ECF37(iLocal_39, 0);
			}
			if (unk_0xD3FACCDA4D66AEAD(iLocal_38))
			{
				unk_0x39800A40136ECF37(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0xD3FACCDA4D66AEAD(iLocal_40))
		{
			unk_0x39800A40136ECF37(iLocal_40, 1);
		}
		if (unk_0xD3FACCDA4D66AEAD(iLocal_37))
		{
			unk_0x39800A40136ECF37(iLocal_37, 1);
		}
		if (unk_0xD3FACCDA4D66AEAD(iLocal_39))
		{
			unk_0x39800A40136ECF37(iLocal_39, 1);
		}
		if (unk_0xD3FACCDA4D66AEAD(iLocal_38))
		{
			unk_0x39800A40136ECF37(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_61(int iParam0)
{
	return Global_35775 == iParam0;
}

int func_62(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25245[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xA5F0EF35323210B5() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (Global_88661 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_82527[Global_88661 /*34*/].f_15, 20);
	}
	return 0;
}

void func_65()
{
}

void func_66()
{
	if (iLocal_43 == -1)
	{
		unk_0x78C587487CD40B92();
	}
	func_41(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25245[iLocal_43 /*11*/].f_6 = 0;
		Global_25245[iLocal_43 /*11*/].f_7 = 0;
		Global_25245[iLocal_43 /*11*/].f_8 = 0;
		Global_25245[iLocal_43 /*11*/].f_4 = 0;
		Global_25245[iLocal_43 /*11*/].f_5 = 0;
		Global_25245[iLocal_43 /*11*/].f_2 = 0;
		Global_25245[iLocal_43 /*11*/] = -1;
		Global_25245[iLocal_43 /*11*/].f_1 = 0;
		Global_25245[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_40("TV_HLP1") || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x94724F7C938EBE34(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_67();
	if (unk_0x6DEB8F88FFE09057(&cLocal_62))
	{
		unk_0x7C1793252FA472B6(&cLocal_62);
	}
	unk_0x2130D0000FE7D9B5();
	func_2();
	unk_0x78C587487CD40B92();
}

void func_67()
{
	func_50();
	if (unk_0xD3FACCDA4D66AEAD(iLocal_37))
	{
		if (unk_0x705BC1BB91F530B5(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xE9755D24C3BFFBED(&iLocal_37);
			unk_0x2C07692AA3545079(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_39))
	{
		unk_0xE9755D24C3BFFBED(&iLocal_39);
		unk_0x2C07692AA3545079(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0xD3FACCDA4D66AEAD(iLocal_38))
	{
		unk_0xE9755D24C3BFFBED(&iLocal_38);
		unk_0x2C07692AA3545079(joaat("prop_tt_screenstatic"));
	}
}

