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
	if (unk_0xE8A79675302ED812(2))
	{
		func_66();
	}
	if (unk_0x724D816EA203A79E(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_65();
		if (unk_0x724D816EA203A79E(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_64() && !func_63())) && !func_62(iLocal_43))
			{
				func_66();
			}
			if ((unk_0x7930B3E9C919E90F() && unk_0xFAB96FF5BAB29092() != 3) && unk_0x5935088CFB983803() == 3)
			{
				func_66();
			}
			if (func_61(13) || func_61(14))
			{
				func_66();
			}
			if (unk_0xF6231E2AD6680273(iScriptParam_0))
			{
				func_66();
			}
			if (unk_0x08B699D523A3F9CB(iScriptParam_0))
			{
				if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
				{
					func_60();
					if (unk_0x8D66276473ABD7CC(iScriptParam_0) < 950)
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
									uLocal_41 = unk_0xF80718E42755119B(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x9CD72B946AEA39F0(uLocal_41))
									{
										unk_0x16AF01D36A7DCE23(uLocal_41, 9);
									}
									unk_0x95E4B6F3ED223F5A();
								}
							}
							if (iLocal_43 == -1)
							{
								func_66();
							}
							else
							{
								func_55();
								unk_0xB02EBA8FD2534CAF("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0xCB8EEC006EBFC1E7(0);
								Global_25337[iLocal_43 /*11*/].f_2 = 0;
								Global_25337[iLocal_43 /*11*/].f_6 = 1;
								Global_25337[iLocal_43 /*11*/] = unk_0x491B2241281A03B7(0, 2);
								Global_25337[iLocal_43 /*11*/].f_1 = 0;
								Global_25337[iLocal_43 /*11*/].f_4 = 0;
								Global_25337[iLocal_43 /*11*/].f_7 = 0;
								Global_25337[iLocal_43 /*11*/].f_8 = 0;
								Global_25337[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_53(&uLocal_26);
								func_51();
								func_50();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0xAF1DD0A735416F90(iLocal_37) && unk_0xB506EAE677B8090D(iLocal_37, 1119092736))
							{
								if (func_42() || Global_25337[iLocal_43 /*11*/].f_5)
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
									unk_0x7456702622C62EA0(1);
								}
							}
							if (unk_0x724D816EA203A79E(iLocal_37))
							{
								if (!unk_0x8F6EAC9E7D6812D5(iLocal_37))
								{
									unk_0xDC078F87049ECECE(iLocal_37, 1, 0);
								}
							}
							if (unk_0x724D816EA203A79E(iLocal_39))
							{
								if (!unk_0x8F6EAC9E7D6812D5(iLocal_39))
								{
									unk_0xDC078F87049ECECE(iLocal_39, 1, 0);
								}
							}
							if (unk_0x724D816EA203A79E(iLocal_38))
							{
								if (unk_0x8F6EAC9E7D6812D5(iLocal_38))
								{
									unk_0xDC078F87049ECECE(iLocal_38, 0, 0);
								}
							}
							if (!unk_0x3362CDE8460ED38B(&cLocal_46, "NULL"))
							{
								unk_0x155A8308CD79CCE9(&cLocal_46, 0);
							}
							unk_0x71A0432EDBACC722(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x724D816EA203A79E(iLocal_40))
							{
								unk_0xCDCA74FF249AB959(iLocal_40);
							}
							if (!func_62(iLocal_43))
							{
								if ((Global_25337[iLocal_43 /*11*/] == 3 || Global_25337[iLocal_43 /*11*/] == 2) || Global_25337[iLocal_43 /*11*/] == -1)
								{
									Global_25337[iLocal_43 /*11*/] = unk_0x491B2241281A03B7(0, 2);
								}
								unk_0x5AA34F7239618297(Global_25337[iLocal_43 /*11*/]);
								unk_0x7B9F1666641485C9(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25337[iLocal_43 /*11*/];
								iLocal_45 = Global_25337[iLocal_43 /*11*/].f_1;
								unk_0xE1900892794032D6(iLocal_44, func_39(iLocal_45), Global_25337[iLocal_43 /*11*/].f_9);
								unk_0x5AA34F7239618297(iLocal_44);
								if (Global_25337[iLocal_43 /*11*/].f_7)
								{
									Global_25337[iLocal_43 /*11*/].f_5 = 0;
									Global_25337[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25337[iLocal_43 /*11*/].f_2 = 1;
							func_38(133, 1);
							func_38(131, 1);
							func_38(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25337[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25337[iLocal_43 /*11*/].f_7 && func_62(iLocal_43))
							{
								Global_25337[iLocal_43 /*11*/].f_7 = 0;
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
								if (unk_0xA5A1668CC891DF7C() == -1)
								{
									unk_0x5AA34F7239618297(Global_25337[iLocal_43 /*11*/]);
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
							if (Global_25337[iLocal_43 /*11*/].f_4)
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
							Global_25337[iLocal_43 /*11*/].f_5 = 0;
							Global_25337[iLocal_43 /*11*/].f_4 = 0;
							Global_25337[iLocal_43 /*11*/].f_1 = 0;
							Global_25337[iLocal_43 /*11*/].f_2 = 0;
							Global_25337[iLocal_43 /*11*/].f_7 = 0;
							Global_25337[iLocal_43 /*11*/].f_8 = 0;
							Global_25337[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_66();
			unk_0x95E4B6F3ED223F5A();
		}
	}
	func_66();
	unk_0x95E4B6F3ED223F5A();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25337[iLocal_43 /*11*/] = unk_0xA5A1668CC891DF7C();
	}
	fLocal_30 = unk_0x4AB522627FFE49CA();
	unk_0x5AA34F7239618297(-1);
	func_4();
	if (unk_0xB731B8C5BCE89836(joaat("family5")) == 0)
	{
		if (!unk_0x3362CDE8460ED38B(&cLocal_46, "NULL"))
		{
			unk_0x155A8308CD79CCE9(&cLocal_46, 1);
		}
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x7456702622C62EA0(1);
	}
	func_3();
	func_50();
	if (unk_0x724D816EA203A79E(iLocal_38))
	{
		if (!unk_0x8F6EAC9E7D6812D5(iLocal_38))
		{
			unk_0xDC078F87049ECECE(iLocal_38, 1, 0);
		}
	}
	unk_0x2E79224E47980006(0);
	func_2();
}

void func_2()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (iLocal_87 == 1)
		{
			unk_0x4110C66549D5F74F();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0xF14A31FD690DC3B0(iLocal_35);
		if (unk_0x724D816EA203A79E(iLocal_37))
		{
			if (unk_0x6F79ECA8C83E4357(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x6F79ECA8C83E4357(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0xDC078F87049ECECE(iLocal_37, 0, 0);
				if (unk_0x6F79ECA8C83E4357(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0xF7EBEC3FF57AEC65(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0xF7EBEC3FF57AEC65(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_39))
	{
		unk_0xDC078F87049ECECE(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
		if (unk_0xEDEA6C8F42EE05F6(uLocal_78))
		{
			unk_0x348665177DBFB93B(uLocal_78, 0);
		}
		unk_0x4EC087603E1DEF9C(uLocal_78, 0);
		unk_0xF3F01A78937DC905(0);
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 0);
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			unk_0x4BED3C9D6EF14C38(unk_0xBC25C936A095B5BA(), Local_31, 1, 0, 2);
			if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 1, 0);
				}
			}
			unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), 1, 0);
		}
		if (!unk_0x3362CDE8460ED38B(&cLocal_62, "NULL"))
		{
			if (unk_0x144E80F5C46A6B75(&cLocal_62))
			{
				unk_0xC1300D0F3A74E20B(&cLocal_62);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_39))
		{
			unk_0xDC078F87049ECECE(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0, 0);
		unk_0x2E79224E47980006(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_14(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_14493.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(0);
			}
			if (!func_13())
			{
				Global_14493.f_1 = 3;
			}
			Global_15800 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_55973 = 1;
		Global_68283 = 1;
		Global_70976 = 1;
	}
	else
	{
		func_14(0);
		unk_0xCB50D125C355ED9C();
		Global_55973 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_10(unk_0xB5CEFD608600A09F())) && !func_7(unk_0xB5CEFD608600A09F(), 0)) && !func_6()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_10(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
		}
		Global_70976 = 0;
	}
}

bool func_6()
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
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
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312736;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_191, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && uParam2)
		{
			unk_0x22506029183A78EC(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 13);
	}
}

int func_15()
{
	if (!func_62(iLocal_43))
	{
		if (((((((func_29(&uLocal_26) >= 1f && unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x645938DA8ED5E0BA(iLocal_37) == unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA())) && !func_28(8, -1)) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && unk_0x053F9FA04F814AF3(unk_0xBC25C936A095B5BA(), Local_31, 90f)) && !unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) && !unk_0x7930B3E9C919E90F())
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
				Global_25337[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0xF25512B8A510B0E1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xC4BA30B532FE260F(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_40("TV_HLP5"))
			{
				unk_0x7456702622C62EA0(1);
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
		unk_0xD55638CE45B2B948(2, 222);
		if (unk_0x694514BD37EC4E94(2, 222))
		{
			func_41(&iLocal_42);
			func_26(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_23();
		}
	}
	else
	{
		unk_0xBBC4195AD74D153D(2, 200, 1);
		if (unk_0x8F6EAC9E7D6812D5(unk_0xBC25C936A095B5BA()))
		{
			unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
			}
		}
		unk_0xDE7B9CB38D019BF0();
		unk_0x20852A0028996F02(unk_0xBC25C936A095B5BA());
		func_21(1, 1);
		unk_0xD55638CE45B2B948(2, 222);
		func_17(0);
		if (unk_0x694514BD37EC4E94(2, 222) || (unk_0x50465D2C022B9E04(2) && unk_0xCB3E71B7B7FACCAF(2, 200)))
		{
			func_41(&iLocal_42);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (!Global_14493.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_2364, 2);
	}
}

void func_18(int iParam0)
{
	if (Global_14659)
	{
		func_19(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(0);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 30);
	}
	if (!func_13())
	{
		Global_14493.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_20(0))
		{
			Global_14659 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_14430);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
}

int func_20(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
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
				if (unk_0xF25512B8A510B0E1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xC4BA30B532FE260F(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0xA5A1668CC891DF7C() == 0)
				{
					unk_0x5AA34F7239618297(1);
				}
				else
				{
					unk_0x5AA34F7239618297(0);
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
		iVar1 = (unk_0x1B3AE5B27313855F(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x4AB522627FFE49CA();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x7B9F1666641485C9(fVar2);
				iLocal_24 = unk_0x105601648511CC64();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x4AB522627FFE49CA();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x7B9F1666641485C9(fVar2);
				iLocal_24 = unk_0x105601648511CC64();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0xF25512B8A510B0E1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0xC4BA30B532FE260F(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x105601648511CC64() > iLocal_24 + 24)
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
	iVar1 = (unk_0x1B3AE5B27313855F(2, 218) - 127);
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
		uLocal_78 = unk_0x6B8F797EEC7B95E2("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0x13063677BCFA7207(uLocal_78, 100f);
		unk_0x348665177DBFB93B(uLocal_78, 1);
		unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
		if (unk_0x724D816EA203A79E(iLocal_39))
		{
			unk_0xDC078F87049ECECE(iLocal_39, 0, 0);
		}
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), 1);
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), 0, 0);
				bLocal_36 = true;
			}
			unk_0x4BED3C9D6EF14C38(unk_0xBC25C936A095B5BA(), Local_31, -1, 0, 2);
			unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), 0, 0);
		}
		if (!unk_0x3362CDE8460ED38B(&cLocal_62, "NULL"))
		{
			if (!unk_0x144E80F5C46A6B75(&cLocal_62))
			{
				unk_0xD6423910AAD8A379(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0, 0);
		unk_0x2E79224E47980006(1);
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
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36613[iVar0 /*32*/] == 1 && Global_36613[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36613[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36613[iVar0 /*32*/].f_5 = 1;
			Global_36613[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36613[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36613[iVar0 /*32*/].f_7)
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
		if (Global_36613[iVar0 /*32*/].f_1 == iParam0)
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
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
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
		if (!Global_36613[iVar0 /*32*/])
		{
			Global_36613[iVar0 /*32*/] = 1;
			Global_36613[iVar0 /*32*/].f_1 = Global_36814;
			Global_36814++;
			Global_36613[iVar0 /*32*/].f_4 = 0;
			Global_36613[iVar0 /*32*/].f_29 = 0;
			Global_36613[iVar0 /*32*/].f_5 = 0;
			Global_36613[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36613[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36613[iVar0 /*32*/].f_6 = iParam3;
			Global_36613[iVar0 /*32*/].f_31 = unk_0x8A55B15F4133C912();
			Global_36613[iVar0 /*32*/].f_7 = 0;
			Global_36613[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xF1734B55490E9045(sParam4))
			{
				Global_36613[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36613[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36613[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36613[iVar0 /*32*/].f_12 = 0;
				Global_36613[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36613[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_27()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (iLocal_87 == 0)
		{
			unk_0xB1AFC550627C7E8D("TV_Controls");
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
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
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
			return (func_30(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x105601648511CC64());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar2 = unk_0xED678C85A82F0AB9();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x105601648511CC64()) / 1000f);
}

bool func_31(var uParam0)
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_32(var uParam0)
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

void func_33()
{
	float fVar0;
	
	fVar0 = 1f;
	func_34(&fVar0);
	unk_0xF14A31FD690DC3B0(iLocal_35);
	unk_0x996AC9A66B2A5A3F(4);
	unk_0x6AEB48E3B648804A(1);
	unk_0xA138921CF8E29289(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0xF14A31FD690DC3B0(unk_0xECF3C87B07EE1C98());
}

void func_34(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x3771EE4CB542D71E(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_35()
{
	Global_25337[iLocal_43 /*11*/].f_7 = 0;
	Global_25337[iLocal_43 /*11*/] = unk_0xA5A1668CC891DF7C();
	fLocal_30 = unk_0x4AB522627FFE49CA();
	if (unk_0x144E80F5C46A6B75(&cLocal_62))
	{
		unk_0xC1300D0F3A74E20B(&cLocal_62);
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x7456702622C62EA0(1);
	}
	func_41(&iLocal_42);
	unk_0x5AA34F7239618297(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_50();
}

int func_36(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_37(unk_0xB5CEFD608600A09F()) };
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
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_51709[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_51709[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
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
		if (Global_36613[iVar0 /*32*/])
		{
			Global_36613[iVar0 /*32*/].f_7 = 1;
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
	if ((!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x053F9FA04F814AF3(unk_0xBC25C936A095B5BA(), Local_31, 90f)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0x645938DA8ED5E0BA(iLocal_37) != unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (func_28(8, -1))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_90028)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_25337[iLocal_43 /*11*/].f_8)
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
		Global_25337[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0xF25512B8A510B0E1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0xC4BA30B532FE260F(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
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
	if (Global_105220.f_10165[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_105220.f_10165[iParam0 /*12*/].f_6 == 11 || Global_105220.f_10165[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_105220.f_10165[iParam0 /*12*/].f_5 = 1;
		Global_105220.f_10165[iParam0 /*12*/].f_10 = iParam1;
		Global_105220.f_10165[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_104956 = 0;
	Global_104957 = 0;
	Global_104958 = 0;
	Global_104959 = 0;
	Global_104960 = 0;
	Global_104961 = 0;
	Global_104962 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_105220.f_10165.f_3853;
	Global_105220.f_10165.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_105220.f_10165[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_105220.f_10165[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104956++;
					fVar1 = (fVar1 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104957++;
					fVar2 = (fVar2 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104958++;
					fVar3 = (fVar3 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104959++;
					fVar4 = (fVar4 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104960++;
					fVar5 = (fVar5 + (Global_105220.f_10165[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104961++;
					fVar6 = (fVar6 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104962++;
					fVar7 = (fVar7 + Global_105220.f_10165[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104939 > 0)
	{
		if (Global_104956 == Global_104939)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104940 > 0)
	{
		if (Global_104957 == Global_104940)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104941 > 0)
	{
		if (Global_104958 == Global_104941)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104942 > 0)
	{
		if (Global_104959 == Global_104942)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104943 > 0)
	{
		if (((Global_104960 == Global_104943 || (Global_104943 * 10 / Global_104960) < 41) || Global_104960 > Global_104946) || Global_104960 == Global_104946)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_105220.f_10165.f_3856, 14))
			{
				if (Global_104960 == Global_104943)
				{
					unk_0x438C09AFE8E5D473(joaat("num_rndevents_completed"), Global_104943, 0);
					unk_0xF0059F27F7BB6680(&(Global_105220.f_10165.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104944 > 0)
	{
		if (Global_104961 == Global_104944)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104945 > 0)
	{
		if (Global_104962 == Global_104945)
		{
			fVar7 = 5f;
		}
	}
	Global_105220.f_10165.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104960 > Global_104946 || Global_104960 == Global_104946)
	{
		iVar9 = Global_104946;
	}
	else
	{
		iVar9 = Global_104960;
	}
	unk_0x3A57956BCE003880(joaat("num_missions_completed"), Global_104956, 1);
	unk_0x3A57956BCE003880(joaat("num_missions_available"), Global_104939, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_completed"), Global_104957, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_available"), Global_104940, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_completed"), Global_104958, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_available"), Global_104941, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_completed"), Global_104959, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_available"), Global_104942, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_available"), Global_104946, 1);
	unk_0x3A57956BCE003880(joaat("num_misc_completed"), (Global_104962 + Global_104961), 1);
	unk_0x3A57956BCE003880(joaat("num_misc_available"), (Global_104945 + Global_104944), 1);
	Global_104963 = (Global_104956 * 100 / Global_104939);
	Global_104965 = ((Global_104958 + Global_104957) * 100 / (Global_104941 + Global_104940));
	Global_104964 = ((Global_104959 + iVar9) * 100 / (Global_104942 + Global_104946));
	Global_104966 = ((Global_104961 + Global_104962) * 100 / (Global_104944 + Global_104945));
	unk_0xAE9FF06DD2A69C74(joaat("total_progress_made"), Global_105220.f_10165.f_3853, 1);
	unk_0x3A57956BCE003880(joaat("percent_story_missions"), Global_104963, 1);
	unk_0x3A57956BCE003880(joaat("percent_ambient_missions"), Global_104964, 1);
	unk_0x3A57956BCE003880(joaat("percent_oddjobs"), Global_104965, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853))
	{
		func_48(13, unk_0xF34EE736CF047844(Global_105220.f_10165.f_3853));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_70978)
		{
			if (func_47() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_104954 = 0;
				}
				if (!Global_55967)
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
	if (Global_92994.f_8)
	{
		if (Global_92994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92994.f_10 > 1)
	{
		return 0;
	}
	Global_92994.f_10++;
	return 1;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

int func_47()
{
	return Global_25277;
}

int func_48(int iParam0, int iParam1)
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
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
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
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(uVar18, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_50()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x56B8298B48E2A713("tvscreen"))
	{
		unk_0xCE6E44419BF6F4AF("tvscreen");
		iLocal_35 = -1;
		unk_0xF14A31FD690DC3B0(unk_0xECF3C87B07EE1C98());
	}
}

void func_51()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_52();
	}
	if (unk_0x56B8298B48E2A713("tvscreen"))
	{
		unk_0xCE6E44419BF6F4AF("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x724D816EA203A79E(iLocal_37))
	{
		func_66();
	}
	iVar0 = unk_0x6F79ECA8C83E4357(iLocal_37);
	unk_0xED8E639D9071342D("tvscreen", 0);
	unk_0xC70517054574AD3E(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x59B966CB65C66DDF(iVar0))
		{
			if (!unk_0x724D816EA203A79E(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x08B699D523A3F9CB(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x56B8298B48E2A713("tvscreen"))
			{
				unk_0xED8E639D9071342D("tvscreen", 0);
			}
			if (!unk_0x59B966CB65C66DDF(iVar0))
			{
				unk_0xC70517054574AD3E(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0xCE506A7684415A58("tvscreen");
	func_3();
}

void func_52()
{
	if (unk_0x724D816EA203A79E(iLocal_37))
	{
		if (unk_0x6F79ECA8C83E4357(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0x1E0CB5BD6231AB3D(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0x019CE76D5286C95C(iLocal_37, uLocal_34);
	unk_0x346478B12F69D4E3(iLocal_37, 1);
	unk_0xDC078F87049ECECE(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0x1E0CB5BD6231AB3D(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0x019CE76D5286C95C(iLocal_39, uLocal_34);
	unk_0x346478B12F69D4E3(iLocal_39, 1);
	unk_0xDC078F87049ECECE(iLocal_39, 0, 0);
}

void func_53(var uParam0)
{
	func_54(uParam0, 0f);
}

void func_54(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_30(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(uParam0, 1);
	unk_0x7CB6FD92BE491AD9(uParam0, 2);
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
	return Global_105220.f_9056.f_330[iParam0 /*6*/];
}

void func_57()
{
	Local_31 = { unk_0x541C2AEF053615BC(iLocal_37, 1) };
	uLocal_34 = unk_0x349C94FFF43E2979(iLocal_37);
	func_59();
	if (unk_0x6F79ECA8C83E4357(iLocal_37) == joaat("prop_tv_03"))
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
	else if (unk_0x6F79ECA8C83E4357(iLocal_37) == joaat("prop_trev_tv_01"))
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
	else if (unk_0x6F79ECA8C83E4357(iLocal_37) == joaat("prop_tv_flat_01"))
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
	else if (unk_0x6F79ECA8C83E4357(iLocal_37) == joaat("prop_tv_flat_02"))
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
	else if (unk_0x6F79ECA8C83E4357(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x6F79ECA8C83E4357(iLocal_37) == joaat("v_ilev_mm_scre_off"))
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
	else if (unk_0x6F79ECA8C83E4357(iLocal_37) == joaat("des_tvsmash_start"))
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
	iLocal_38 = unk_0x1E0CB5BD6231AB3D(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0x019CE76D5286C95C(iLocal_38, uLocal_34);
	unk_0xDC078F87049ECECE(iLocal_38, 1, 0);
	unk_0x346478B12F69D4E3(iLocal_38, 1);
}

void func_59()
{
	unk_0xE1900892794032D6(0, func_39(1), 0);
	if (func_56(22))
	{
		unk_0xE1900892794032D6(1, func_39(12), 0);
	}
	else
	{
		unk_0xE1900892794032D6(1, func_39(2), 0);
	}
}

void func_60()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25337[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_40))
			{
				unk_0x1E5C2A1EAB944289(iLocal_40, 0);
			}
			if (unk_0x724D816EA203A79E(iLocal_37))
			{
				unk_0x1E5C2A1EAB944289(iLocal_37, 0);
			}
			if (unk_0x724D816EA203A79E(iLocal_39))
			{
				unk_0x1E5C2A1EAB944289(iLocal_39, 0);
			}
			if (unk_0x724D816EA203A79E(iLocal_38))
			{
				unk_0x1E5C2A1EAB944289(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_40))
		{
			unk_0x1E5C2A1EAB944289(iLocal_40, 1);
		}
		if (unk_0x724D816EA203A79E(iLocal_37))
		{
			unk_0x1E5C2A1EAB944289(iLocal_37, 1);
		}
		if (unk_0x724D816EA203A79E(iLocal_39))
		{
			unk_0x1E5C2A1EAB944289(iLocal_39, 1);
		}
		if (unk_0x724D816EA203A79E(iLocal_38))
		{
			unk_0x1E5C2A1EAB944289(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_61(int iParam0)
{
	return Global_35905 == iParam0;
}

int func_62(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25337[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x45397F173D3E5C6B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (Global_90022 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_83888[Global_90022 /*34*/].f_15, 20);
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
		unk_0x95E4B6F3ED223F5A();
	}
	func_41(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25337[iLocal_43 /*11*/].f_6 = 0;
		Global_25337[iLocal_43 /*11*/].f_7 = 0;
		Global_25337[iLocal_43 /*11*/].f_8 = 0;
		Global_25337[iLocal_43 /*11*/].f_4 = 0;
		Global_25337[iLocal_43 /*11*/].f_5 = 0;
		Global_25337[iLocal_43 /*11*/].f_2 = 0;
		Global_25337[iLocal_43 /*11*/] = -1;
		Global_25337[iLocal_43 /*11*/].f_1 = 0;
		Global_25337[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_40("TV_HLP1") || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x7456702622C62EA0(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_67();
	if (unk_0x144E80F5C46A6B75(&cLocal_62))
	{
		unk_0xC1300D0F3A74E20B(&cLocal_62);
	}
	unk_0x9D248CEFBC38D598();
	func_2();
	unk_0x95E4B6F3ED223F5A();
}

void func_67()
{
	func_50();
	if (unk_0x724D816EA203A79E(iLocal_37))
	{
		if (unk_0x6F79ECA8C83E4357(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xA35241BCE4C1A24B(&iLocal_37);
			unk_0x2CA123B0622F495C(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_39))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_39);
		unk_0x2CA123B0622F495C(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x724D816EA203A79E(iLocal_38))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_38);
		unk_0x2CA123B0622F495C(joaat("prop_tt_screenstatic"));
	}
}

