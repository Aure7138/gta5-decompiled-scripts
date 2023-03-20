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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 10;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	struct<27> Local_99 = { 0, 0, 0, 0, -644710429, 32417469, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_126 = 0;
	struct<3> Local_127[32];
	var uLocal_224 = 0;
	int iLocal_225 = 0;
	var uLocal_226 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	if (unk_0x1995B52453EF6537() && func_198(unk_0xFB6B3EEFAB2DD12C(), 0, 1))
	{
		func_185(ScriptParam_0);
	}
	else
	{
		func_181();
	}
	while (true)
	{
		func_180();
		if (func_170() || func_166(15))
		{
			func_181();
		}
		if (unk_0xF5C5C10402E12CCB())
		{
			func_181();
		}
		switch (func_165(unk_0x1E7FB1CA38C403F6()))
		{
			case 0:
				if (func_164() == 1)
				{
					if (func_163(60000))
					{
						if (unk_0xF6A32456BABBBA74(Local_99.f_2))
						{
							if (unk_0xA4DB44DF73EF4FE5(unk_0xE95C934718B1A4FF(Local_99.f_2), 0))
							{
								if (!func_161())
								{
									if (!unk_0xF44A5E894FE76438(Local_99.f_1, 0))
									{
										func_160("PTD_HELP1", -1);
									}
									else
									{
										func_160("PTD_HELP1H", -1);
									}
								}
							}
						}
					}
					Local_127[unk_0x1E7FB1CA38C403F6() /*3*/] = 1;
				}
				else if (func_164() == 4)
				{
					Local_127[unk_0x1E7FB1CA38C403F6() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_164() == 1)
				{
					func_20();
				}
				else if (func_164() == 4)
				{
					Local_127[unk_0x1E7FB1CA38C403F6() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_19(&(Local_99.f_24));
				if (func_18(&(Local_99.f_24)))
				{
					Local_127[unk_0x1E7FB1CA38C403F6() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_127[unk_0x1E7FB1CA38C403F6() /*3*/] = 4;
			
			case 4:
				func_181();
				break;
		}
		if (unk_0x04DE35D10A718EEF())
		{
			switch (func_164())
			{
				case 0:
					if (func_11())
					{
						Local_99.f_0 = 1;
					}
					break;
				
				case 1:
					func_10();
					func_9();
					if (func_1())
					{
						Local_99.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	struct<14> Var0;
	struct<14> Var14;
	
	if (func_7(Local_99.f_2))
	{
		if (Local_99.f_22 > 0)
		{
			if (unk_0xF6A32456BABBBA74(Local_99.f_2))
			{
				if (!unk_0x1AC9C20D51EE6DC3(unk_0xE95C934718B1A4FF(Local_99.f_2), 400f, -3850f, -50f, 400f, 7950f, 1000f, 4050f, 0, 1, 0))
				{
					if (!unk_0xF44A5E894FE76438(Local_99.f_1, 0))
					{
						Var0.f_2 = 111;
					}
					else
					{
						Var0.f_2 = 114;
					}
					func_5(Var0, func_6(1));
					unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 1);
					return 1;
				}
			}
		}
	}
	if (Local_99.f_23 == 0)
	{
		if (Local_99.f_0 != 4)
		{
			if (unk_0xF6A32456BABBBA74(Local_99.f_2))
			{
				if (unk_0xB529B2A4B7C64D6D(unk_0xE95C934718B1A4FF(Local_99.f_2), 0))
				{
					if (func_3(&(Local_99.f_26), 3000, 0))
					{
						if (!unk_0xF44A5E894FE76438(Local_99.f_1, 0))
						{
							Var14.f_2 = 110;
						}
						else
						{
							Var14.f_2 = 113;
						}
						func_5(Var14, func_6(1));
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0x1995B52453EF6537() && !bParam2)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x84A97C70FFDEC0C8(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1995B52453EF6537() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7414B386C0020BEC();
			}
			else
			{
				*uParam0 = unk_0x8D8F7D01F0EB4218();
			}
		}
		else
		{
			*uParam0 = unk_0x84A97C70FFDEC0C8();
		}
		uParam0->f_1 = 1;
	}
}

void func_5(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	if (!iParam14 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Param0, 14, iParam14);
	}
}

int func_6(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar1)))
		{
			iVar2 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iVar1));
			if (func_198(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xFB6B3EEFAB2DD12C() || iParam0)
				{
					unk_0xB8A73E7DA87B2968(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_7(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		return !func_8(unk_0xE95C934718B1A4FF(uParam0));
	}
	return 0;
}

int func_8(int iParam0)
{
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (unk_0xB529B2A4B7C64D6D(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	switch (Local_99.f_23)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_10()
{
	struct<14> Var0;
	var uVar14;
	
	if (unk_0xB529B2A4B7C64D6D(unk_0xE95C934718B1A4FF(Local_99.f_2), 0))
	{
		if (Local_99.f_0 != 4)
		{
			iLocal_225 = 0;
			while (iLocal_225 < unk_0x11B9E7FF50B2F4CC())
			{
				if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iLocal_225)))
				{
					uVar14 = unk_0x28B48C55342F6368(unk_0x1C2C3C236D3FE99A(iLocal_225));
					if (unk_0xF44A5E894FE76438(Local_127[iLocal_225 /*3*/].f_1, 0))
					{
						if (!unk_0xF44A5E894FE76438(Local_99.f_1, 0))
						{
							Var0.f_2 = 109;
						}
						else
						{
							Var0.f_2 = 112;
						}
						Var0.f_10 = uVar14;
						func_5(Var0, func_6(1));
						Local_99.f_0 = 4;
						return;
					}
					if (unk_0xF44A5E894FE76438(Local_127[iLocal_225 /*3*/].f_1, 1))
					{
						if (!unk_0xF44A5E894FE76438(Local_99.f_1, 2))
						{
							unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 2);
						}
					}
				}
				iLocal_225++;
			}
		}
	}
}

int func_11()
{
	if (func_17(Local_99.f_4) && func_17(Local_99.f_5))
	{
		if (func_14() && func_12())
		{
			unk_0x8188DB74546FF484(Local_99.f_4);
			unk_0x8188DB74546FF484(Local_99.f_5);
			return 1;
		}
	}
	return 0;
}

int func_12()
{
	if ((!unk_0xF6A32456BABBBA74(Local_99.f_3) && func_17(Local_99.f_5)) && unk_0xF6A32456BABBBA74(Local_99.f_2))
	{
		if (func_7(Local_99.f_2))
		{
			if (func_13(&(Local_99.f_3), Local_99.f_2, 22, Local_99.f_5, -1, 1, 1, 1))
			{
				unk_0x5457695C257D1470(unk_0x9E9133ACB2BCC1D5(Local_99.f_3), 1);
				unk_0x417BCC1ECC12E9A2(unk_0x9E9133ACB2BCC1D5(Local_99.f_3), Global_1574683);
				unk_0xD6E6C197BF8B123B(unk_0x9E9133ACB2BCC1D5(Local_99.f_3), 0);
				unk_0x7D99F00F48D15ADB(unk_0x9E9133ACB2BCC1D5(Local_99.f_3), 1);
			}
		}
	}
	if (!unk_0xF6A32456BABBBA74(Local_99.f_3))
	{
		return 0;
	}
	return 1;
}

int func_13(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x4EA5429144EA2576(1))
	{
		return 0;
	}
	if (!unk_0xF6A32456BABBBA74(uParam1))
	{
		return 0;
	}
	if (!unk_0xA4DB44DF73EF4FE5(unk_0xE95C934718B1A4FF(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x3EE3A80A2D8115F8(unk_0x0BD2D83BDCAED6E6(unk_0xE95C934718B1A4FF(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(unk_0x9E9133ACB2BCC1D5(*uParam0), iParam7);
		if (unk_0xDB6162AABEF41D01(unk_0x9E9133ACB2BCC1D5(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_14()
{
	var uVar0;
	
	if (!unk_0xF6A32456BABBBA74(Local_99.f_2))
	{
		if (func_17(Local_99.f_4))
		{
			if (func_15(&(Local_99.f_2), Local_99.f_4, Local_99.f_6, func_16(Local_99.f_6, Local_99.f_9[0 /*3*/]), 1, 1, 1, 0, 1, 1, 0))
			{
				unk_0xAFC3B32426D08964(unk_0xE95C934718B1A4FF(Local_99.f_2), 2);
				unk_0xBBAF4B768DDB7572(unk_0xE95C934718B1A4FF(Local_99.f_2), 0);
				unk_0x35A8A01CFABC004E(unk_0xE95C934718B1A4FF(Local_99.f_2), 1);
				unk_0x7D326D5F253C92C7(unk_0xE95C934718B1A4FF(Local_99.f_2));
				unk_0x9773EF10686D53C8(unk_0xE95C934718B1A4FF(Local_99.f_2), 30f);
				unk_0x26D544204410CB38(unk_0xE95C934718B1A4FF(Local_99.f_2));
				unk_0x09AB636BA0F9BE90(unk_0xE95C934718B1A4FF(Local_99.f_2), 1, 1, 0);
				unk_0x7C67F12EBF1640E8(unk_0xE95C934718B1A4FF(Local_99.f_2), 0);
				unk_0x0BD3F78CDD5346A8(unk_0xE95C934718B1A4FF(Local_99.f_2), 0);
				if (Local_99.f_4 == joaat("cuban800"))
				{
					unk_0x1EC1DAAF33307EFC(unk_0xE95C934718B1A4FF(Local_99.f_2), 3);
				}
				if (unk_0xFACD5AD331C52454("MPBitset", 3))
				{
					if (unk_0xA438D75809973A56(unk_0xE95C934718B1A4FF(Local_99.f_2), "MPBitset"))
					{
						uVar0 = unk_0x483BD2141ADAC3CE(unk_0xE95C934718B1A4FF(Local_99.f_2), "MPBitset");
					}
					unk_0xB8A73E7DA87B2968(&uVar0, 10);
					unk_0x570F410C5E24C75B(unk_0xE95C934718B1A4FF(Local_99.f_2), "MPBitset", uVar0);
				}
			}
		}
	}
	if (!unk_0xF6A32456BABBBA74(Local_99.f_2))
	{
		return 0;
	}
	return 1;
}

int func_15(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0x66A05E630CEC173C(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xBCDF9E3086B4229C(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xDE8A46A23FDCBBFE(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xC4BDEBE5421586E5(iVar0);
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		unk_0x0BD3F78CDD5346A8(iVar0, iParam10);
		if (unk_0xDB6162AABEF41D01(iVar0))
		{
			if (bParam8)
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 1);
			}
			else
			{
				unk_0x8D7D9565420EE4B0(*uParam0, 0);
			}
		}
		unk_0xC5D75F3BE926D48A(iVar0, iParam9);
		unk_0xB2E0C0D6922D31F2(iVar0, true);
		if (bParam12)
		{
			unk_0xDE6C40B8B4A86A0A(iVar0);
			unk_0x12C2DF66EA2F61B3(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

var func_16(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x1467106C5D2966B9((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_17(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x4ACD1E4CBA159ED1(iParam0);
	return unk_0x7AD0E9452821C95D(iParam0);
}

int func_18(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_19(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x04DE35D10A718EEF())
		{
			func_4(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	switch (Local_127[unk_0x1E7FB1CA38C403F6() /*3*/].f_2)
	{
		case 0:
			func_159();
			func_21();
			if (Local_99.f_23 > 0)
			{
				Local_127[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_181();
			break;
	}
}

void func_21()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar9;
	
	if (unk_0xF6A32456BABBBA74(Local_99.f_2))
	{
		if (!unk_0xF44A5E894FE76438(Local_127[unk_0x1E7FB1CA38C403F6() /*3*/].f_1, 0))
		{
			if (!unk_0xA4DB44DF73EF4FE5(unk_0xE95C934718B1A4FF(Local_99.f_2), 0))
			{
			}
			if (unk_0xB529B2A4B7C64D6D(unk_0xE95C934718B1A4FF(Local_99.f_2), 0))
			{
			}
			if (unk_0xB529B2A4B7C64D6D(unk_0xE95C934718B1A4FF(Local_99.f_2), 0))
			{
				if (unk_0xFB6B3EEFAB2DD12C() == unk_0xF15EBC61ACCF20ED(Local_99.f_2, &uVar0))
				{
					func_158(2055, -1);
					iVar1 = func_157(2055, -1, 0);
					iVar2 = iVar1;
					if (iVar2 > Global_262145.f_6898)
					{
						iVar2 = Global_262145.f_6898;
					}
					iVar3 = (Global_262145.f_6896 * iVar2);
					func_109(0, unk_0xD5A676B97920D126(), "XPT_KAIE", -875716015, -1219286988, iVar3, 1, -1, 0, 0, 0);
					if (iVar1 > Global_262145.f_6897)
					{
						iVar1 = Global_262145.f_6897;
					}
					iVar4 = (Global_262145.f_6895 * iVar1);
					func_105(iVar4, 1, 1, 1092616192);
					Global_2454660 = iVar4;
					func_56(&iVar4, 1);
					if (iVar4 > 0)
					{
						if (func_55())
						{
							func_46(1780666425, iVar4, &uVar9, 0, 0, 0);
						}
						else
						{
							unk_0xBA11645C7A2ECDE2(iVar4, "AM_PLANE_TAKEDOWN", &uVar5);
						}
					}
					func_41(65, 1, -1);
					if (func_40())
					{
						func_27(2, "PTD_PASS0", 0, 0, -99);
					}
					else
					{
						func_27(2, "PTD_PASS1", 0, 0, -99);
					}
					unk_0xB8A73E7DA87B2968(&(Local_127[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (unk_0x04DE35D10A718EEF())
				{
					if (Local_99.f_22 < 4)
					{
						if (unk_0x1AAFFE4111587B35(unk_0xE95C934718B1A4FF(Local_99.f_2), Local_99.f_9[Local_99.f_22 /*3*/], 50f, 50f, 500f, 0, 1, 0))
						{
							Local_99.f_22++;
						}
					}
				}
				if (unk_0x50CED8EEAE806923(Local_99.f_2))
				{
					func_25();
					if (func_24())
					{
						if (func_23(Local_99.f_2) && func_23(Local_99.f_3))
						{
							unk_0xD4D4124964213CEE(unk_0xE95C934718B1A4FF(Local_99.f_2), 1, 1, -1);
							if (unk_0x1B982A8B37108B3C(Local_99.f_2))
							{
								func_22(&(Local_99.f_2));
							}
							if (unk_0x1B982A8B37108B3C(Local_99.f_3))
							{
								unk_0x7D99F00F48D15ADB(unk_0x9E9133ACB2BCC1D5(Local_99.f_3), 1);
								func_22(&(Local_99.f_3));
							}
						}
					}
				}
			}
		}
	}
}

void func_22(var uParam0)
{
	var uVar0;
	
	if (unk_0x1B982A8B37108B3C(*uParam0))
	{
		uVar0 = unk_0x0DE80E23B2BD02BD(*uParam0);
		unk_0x9E5138EA66A3E119(&uVar0);
	}
}

int func_23(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		unk_0x370543697500755D(uParam0);
		return unk_0x50CED8EEAE806923(uParam0);
	}
	return 0;
}

int func_24()
{
	if (unk_0xF6A32456BABBBA74(Local_99.f_2))
	{
		if (unk_0x4EC2DD24B6F44441(unk_0xE95C934718B1A4FF(Local_99.f_2), 0, 7000))
		{
			return 1;
		}
		if (unk_0x4EC2DD24B6F44441(unk_0xE95C934718B1A4FF(Local_99.f_2), 1, 40000))
		{
			return 1;
		}
		if (unk_0x4EC2DD24B6F44441(unk_0xE95C934718B1A4FF(Local_99.f_2), 3, 30000))
		{
			return 1;
		}
		if (unk_0x4EC2DD24B6F44441(unk_0xE95C934718B1A4FF(Local_99.f_2), 2, 30000))
		{
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	struct<3> Var0;
	
	if (func_7(Local_99.f_2) && !func_26(Local_99.f_3))
	{
		if (unk_0x04D83291EB9DE51D(unk_0x9E9133ACB2BCC1D5(Local_99.f_3), unk_0xE95C934718B1A4FF(Local_99.f_2), 0))
		{
			if (Local_99.f_22 < 4)
			{
				if (!unk_0xF44A5E894FE76438(Local_99.f_1, 0))
				{
					unk_0x9380465A430F399B(unk_0x9E9133ACB2BCC1D5(Local_99.f_3), unk_0xE95C934718B1A4FF(Local_99.f_2), 0, 0, Local_99.f_9[Local_99.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60);
				}
				else
				{
					unk_0x03B9FE5FECB7D9B3(unk_0x9E9133ACB2BCC1D5(Local_99.f_3), unk_0xE95C934718B1A4FF(Local_99.f_2), 0, 0, Local_99.f_9[Local_99.f_22 /*3*/] + Vector(120f, 0f, 0f), 4, 20f, 50f, -1f, 90, 60, -1082130432, 0);
				}
			}
			else if (!unk_0xF44A5E894FE76438(Local_99.f_1, 2) && !unk_0xF44A5E894FE76438(Local_127[unk_0x1E7FB1CA38C403F6() /*3*/].f_1, 1))
			{
				Var0 = { unk_0x7E140C583F91AE2B(unk_0xE95C934718B1A4FF(Local_99.f_2), 0f, 12000f, 0f) };
				if (Var0.f_0 < -3700f)
				{
					Var0.f_0 = -3700f;
				}
				else if (Var0.f_0 > 4500f)
				{
					Var0.f_0 = 4500f;
				}
				if (Var0.f_1 < -3900f)
				{
					Var0.f_1 = -3900f;
				}
				else if (Var0.f_1 > 8000f)
				{
					Var0.f_1 = 8000f;
				}
				Var0.f_2 = 100f;
				if (!unk_0xF44A5E894FE76438(Local_99.f_1, 0))
				{
					unk_0x9380465A430F399B(unk_0x9E9133ACB2BCC1D5(Local_99.f_3), unk_0xE95C934718B1A4FF(Local_99.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100);
				}
				else
				{
					unk_0x03B9FE5FECB7D9B3(unk_0x9E9133ACB2BCC1D5(Local_99.f_3), unk_0xE95C934718B1A4FF(Local_99.f_2), 0, 0, Var0, 4, 20f, -1f, -1f, 100, 100, -1082130432, 0);
				}
				unk_0xB8A73E7DA87B2968(&(Local_127[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 1);
			}
		}
	}
}

int func_26(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		return unk_0x00B5B0B68211D89B(unk_0x9E9133ACB2BCC1D5(uParam0));
	}
	return 1;
}

void func_27(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_28(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_28(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_29(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_29(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xC55B9553B3EDADE9(sParam1))
	{
		return;
	}
	if (unk_0x502AC248EEE98C95(sParam1) > 15)
	{
		return;
	}
	if (!unk_0xC55B9553B3EDADE9(sParam4))
	{
		if (unk_0x502AC248EEE98C95(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_38();
	if (iVar0 == -1)
	{
		return;
	}
	func_37(iVar0);
	func_36(iVar0, uParam0);
	func_35(iVar0, uParam2, bParam3);
	func_34(iVar0, sParam1);
	if (unk_0xC55B9553B3EDADE9(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_33(iVar0);
	if (!unk_0xC55B9553B3EDADE9(sParam4))
	{
		func_31(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_30(iVar0, iParam6);
	}
}

void func_30(int iParam0, int iParam1)
{
	Global_1346465.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_31(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1346465.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_32(iParam0);
}

void func_32(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_1346465.f_59[iParam0 /*16*/]), 5);
}

void func_33(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_1346465.f_59[iParam0 /*16*/]), 4);
}

void func_34(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1346465.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_35(int iParam0, var uParam1, bool bParam2)
{
	Global_1346465.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0xB8A73E7DA87B2968(&(Global_1346465.f_59[iParam0 /*16*/]), 2);
		unk_0x4EA098C870B73AB7(&(Global_1346465.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&(Global_1346465.f_59[iParam0 /*16*/]), 3);
		unk_0x4EA098C870B73AB7(&(Global_1346465.f_59[iParam0 /*16*/]), 2);
	}
}

void func_36(int iParam0, var uParam1)
{
	Global_1346465.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_37(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&(Global_1346465.f_59[iParam0 /*16*/]), 0);
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_39(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_39(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1346465.f_59[iParam0 /*16*/], 0);
}

int func_40()
{
	if (unk_0xF44A5E894FE76438(unk_0x7BC26452241AC7C9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_41(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_43(iParam0, func_44(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_42(iParam0, iVar0, iParam2);
}

void func_42(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2523810[iParam0 /*3*/][func_44(iParam2)];
	unk_0xB924315F0872835A(iVar0, iParam1, 1);
}

int func_43(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2523810[iParam0 /*3*/][func_44(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_45();
		if (iVar1 > -1)
		{
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

int func_45()
{
	return Global_1312731;
}

void func_46(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_55())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
			if (iParam1 > 0)
			{
				func_47(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
			func_47(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_47(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_55())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x92433FA8528BEA6E(func_45()) || unk_0x65C1BCEE262A67BB())
		{
			Global_2590709 = 1;
			return 0;
		}
		if (Global_2453631)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2590710 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590199[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0x11B1CD473C92A76D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x12D2D3CC0C448A8D(iVar3))
		{
			*uParam0 = func_54(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2590199[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590699 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2590708 = 1;
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2590711 = iParam4;
			Global_2590713 = iParam3;
			Global_2590714 = 1;
			Global_2590712 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_53(1, iParam4);
			Global_2590708 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_48(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_48(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_125.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_49(iParam0);
	}
}

void func_49(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_55())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_52(iParam0))
		{
			if (!bVar0)
			{
				unk_0x0236A1291D69648C();
			}
		}
		else if (!bVar0)
		{
			unk_0xC388F8C52EDE8188(Global_2590199[iParam0 /*76*/]);
		}
		func_50(&(Global_2590199[iParam0 /*76*/]));
	}
}

void func_50(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_51(&(uParam0->f_8.f_3));
	func_51(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_51(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_52(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590199[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_53(int iParam0, var uParam1)
{
	Global_2454792 = uParam1;
	Global_2454791 = iParam0;
}

int func_54(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590199[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_55())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2590199[iVar0 /*76*/].f_2 = 1;
			Global_2590199[iVar0 /*76*/].f_1 = uParam5;
			Global_2590199[iVar0 /*76*/].f_3 = uParam1;
			Global_2590199[iVar0 /*76*/].f_4 = uParam2;
			Global_2590199[iVar0 /*76*/].f_7 = uParam3;
			Global_2590199[iVar0 /*76*/].f_5 = 0;
			Global_2590199[iVar0 /*76*/] = iParam0;
			Global_2590199[iVar0 /*76*/].f_6 = iParam4;
			Global_2590199[iVar0 /*76*/].f_72 = uParam8;
			Global_2590199[iVar0 /*76*/].f_71 = uParam7;
			Global_2590199[iVar0 /*76*/].f_75 = 0;
			Global_2590699 = 0;
			if (bParam6)
			{
				Global_2590199[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_55()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_104())
		{
			if (func_103(0))
			{
				if (!func_99(0))
				{
					if (unk_0x1E0256D6F1052B31(func_98()))
					{
						if (func_97() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_97());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_95(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_60("GB_BCUT_TICK1", func_98(), iVar0, 0, 0, 1, 1);
						}
						func_59(20);
						func_57(func_98(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_57(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_198(iParam0, 0, 1))
	{
		Var0.f_0 = 474;
		Var0.f_1 = unk_0xFB6B3EEFAB2DD12C();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xA56AA396FE05B9EC(1, &Var0, 5, func_58(iParam0));
	}
}

var func_58(int iParam0)
{
	var uVar0;
	
	unk_0xB8A73E7DA87B2968(&uVar0, iParam0);
	return uVar0;
}

void func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xB8A73E7DA87B2968(&(Global_2494149.f_4710.f_7[iVar0]), iVar1);
}

int func_60(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x7746E8ACE891BFA4(iParam1), 64);
		}
		unk_0x053CD3063CA9436C(sParam0);
		unk_0xF5640E619D8FCD5B(func_69(iParam1, -2, 1, 0));
		unk_0x4C51E4FBCD1D8830(func_67(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF5640E619D8FCD5B(iParam3);
		}
		unk_0xF99222307D7150A9(iParam2);
		iVar0 = unk_0x84EF96E928190AB1(0, 1);
		func_61(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_61(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_66() || !unk_0x8676DE83D4396C39()) || !func_64(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		return;
	}
	iVar0 = func_62(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1755985.f_5[iVar0 /*53*/] = iParam0;
		Global_1755985.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1755985.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1755985.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1755985.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1755985.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1755985.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1755985 - 1))
	{
		if (iParam0 > Global_1755985.f_5[iVar0 /*53*/].f_1)
		{
			func_63(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1755985++;
	if (Global_1755985 > 5)
	{
		Global_1755985 = 5;
		return Global_1755985;
	}
	return (Global_1755985 - 1);
}

void func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1755985.f_5[iVar0 /*53*/] = { Global_1755985.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_64(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_65(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_45();
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

bool func_66()
{
	return unk_0xF14C5BAFFF8F4CB7(-1762644250);
}

var func_67(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_68(&cVar0);
}

var func_68(char[4] cParam0)
{
	return cParam0;
}

int func_69(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_93(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1632166.f_82772[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_93(unk_0xFB6B3EEFAB2DD12C()) || (func_92() && func_91()))
	{
		uVar1 = func_90();
		if (unk_0x7887B64A08364778(uVar1))
		{
			if (unk_0xBEC34BF6B72C417A(iVar1))
			{
				if (unk_0x61263E0F7C8C9996(iVar1) != -1)
				{
					if (func_198(unk_0x61263E0F7C8C9996(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
						{
							if (Global_1632166.f_82772[iParam1] != -1)
							{
								return func_88(iParam1, iParam0, 0);
							}
							else
							{
								return func_77(iParam0, unk_0x61263E0F7C8C9996(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_77(iParam0, unk_0x61263E0F7C8C9996(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
			{
				if (Global_1632166.f_82772[iParam1] != -1)
				{
					return func_88(iParam1, iParam0, 0);
				}
				else
				{
					return func_70(0, -1, 0);
				}
			}
			else
			{
				return func_70(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x8676DE83D4396C39()) && iParam1 < 4)
	{
		if (Global_1632166.f_82772[iParam1] != -1)
		{
			return func_88(iParam1, iParam0, 0);
		}
		else
		{
			return func_77(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
		}
	}
	return func_77(iParam0, unk_0xFB6B3EEFAB2DD12C(), iParam1, bParam2, bParam3);
}

int func_70(bool bParam0, int iParam1, bool bParam2)
{
	return func_71(unk_0xFB6B3EEFAB2DD12C(), bParam0, iParam1, bParam2);
}

int func_71(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x1E0256D6F1052B31(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_76(iVar0, iParam2, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_75(1);
				}
				else
				{
					return func_75(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_4, 20))
			{
				return func_72(iVar0, iParam2, 1);
			}
			else
			{
				return func_72(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_75(1);
	}
	return func_75(0);
}

int func_72(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_74(iParam0, iParam1);
	if (func_73(Global_1632166.f_86360))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_73(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7770[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_76(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 0);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 1);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 2);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 4);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 5);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 6);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 8);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 9);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 10);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 12);
				
				case 1:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 13);
				
				case 2:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 14);
				
				case 3:
					return unk_0xF44A5E894FE76438(Global_1632166.f_43, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x2A7336F1C6B39623(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589933[iVar2 /*601*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_87())
			{
				iVar3 = func_82(iParam0);
				if (!iVar3 == -1)
				{
					return func_80(iVar3);
				}
			}
			if ((func_79(iParam1, iParam0, iVar0, 0) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)) || ((func_76(unk_0x2A7336F1C6B39623(iParam1), unk_0x2A7336F1C6B39623(iParam0), 0) && unk_0xF44A5E894FE76438(Global_1632166.f_15, 23)) && !unk_0xF44A5E894FE76438(Global_1632166.f_15, 18)))
			{
				return func_75(1);
			}
			else if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 26))
			{
				return func_78(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574255 || Global_1574246) || Global_1589933[iParam0 /*601*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574255 == 1 && Global_1574265 == 0))
			{
				return func_75(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574250 && Global_1573825.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_82(iParam0);
	if (!iVar4 == -1)
	{
		return func_80(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_78(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(iParam0) == -1 && unk_0x2A7336F1C6B39623(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == unk_0x2A7336F1C6B39623(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x2A7336F1C6B39623(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
	}
	return unk_0x2A7336F1C6B39623(iParam0) == iParam2;
}

int func_80(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_81(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_81(int iParam0)
{
	return Global_2415705.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_82(int iParam0)
{
	if (!iParam0 == func_86())
	{
		if (func_84(iParam0, 1))
		{
			return Global_2415705.f_1946.f_11[func_83(iParam0)];
		}
	}
	return -1;
}

int func_83(int iParam0)
{
	if (iParam0 != func_86())
	{
		return Global_1618089[iParam0 /*390*/].f_11;
	}
	return func_86();
}

bool func_84(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_85(iParam0))
		{
			return 0;
		}
	}
	return Global_1618089[iParam0 /*390*/].f_11 != func_86();
}

int func_85(int iParam0)
{
	if (iParam0 != func_86())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_86())
		{
			return Global_1618089[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_86()
{
	return -1;
}

bool func_87()
{
	return Global_2443089.f_12;
}

int func_88(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_87())
	{
		iVar1 = func_82(iParam1);
		if (!iVar1 == -1)
		{
			return func_80(iVar1);
		}
	}
	if (Global_1632166.f_82772[iParam0] != -1 && Global_1632166.f_82772[iParam0] <= 4)
	{
		if (Global_1632166.f_82772[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1632166.f_82772[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1632166.f_82772[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1632166.f_82772[iParam0] == 4)
		{
			if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1632166.f_82772[iParam0];
		}
	}
	else
	{
		iVar0 = func_71(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xF44A5E894FE76438(Global_1632166.f_21, 13))
	{
		iVar0 = func_89(iParam0);
	}
	return iVar0;
}

int func_89(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1632166.f_105330;
			break;
		
		case 1:
			iVar0 = Global_1632166.f_105331;
			break;
		
		case 2:
			iVar0 = Global_1632166.f_105332;
			break;
		
		case 3:
			iVar0 = Global_1632166.f_105333;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_90()
{
	return Global_2359301.f_2;
}

bool func_91()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 4);
}

bool func_92()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

int func_93(int iParam0)
{
	if (func_64(iParam0, 0))
	{
		return 1;
	}
	if (func_94())
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_94()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

void func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_96(1);
	}
	else
	{
		iVar1 = func_96(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_96(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10889;
}

int func_97()
{
	return Global_262145.f_10888;
}

int func_98()
{
	return Global_1618089[unk_0xFB6B3EEFAB2DD12C() /*390*/].f_11;
}

bool func_99(bool bParam0)
{
	return func_100(unk_0xFB6B3EEFAB2DD12C(), bParam0);
}

int func_100(int iParam0, bool bParam1)
{
	return func_101(iParam0, bParam1, 1);
}

int func_101(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_86())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_102(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1618089[iParam0 /*390*/].f_11;
	if (iVar0 != func_86() && Global_1618089[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0, int iParam1)
{
	if (iParam0 != func_86())
	{
		if (Global_1618089[iParam0 /*390*/].f_11 != func_86())
		{
			if (Global_1618089[iParam0 /*390*/].f_11 == iParam0 && Global_1618089[iParam0 /*390*/].f_11.f_289 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_103(bool bParam0)
{
	return func_84(unk_0xFB6B3EEFAB2DD12C(), bParam0);
}

bool func_104()
{
	return func_85(unk_0xFB6B3EEFAB2DD12C());
}

void func_105(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_106(iParam0, iParam1, iParam2, fParam3);
}

void func_106(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_107(iParam0, iParam1, iParam2, fParam3);
}

void func_107(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_4 = iVar1;
	Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_3 = (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_108(iVar1, 0);
	}
}

void func_108(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_109(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_110(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_110(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_120(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x7887B64A08364778(iParam1))
		{
			if (unk_0x6DA4D1391A7B813F(iParam1))
			{
				uVar1 = unk_0x36B702E1B6552B8A(iParam1);
				func_116(unk_0x6DE9A8183DA7678E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_111(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_111(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_114(iParam0, 1) };
	if (iParam0 == func_113(unk_0xD5A676B97920D126()))
	{
		func_112(1);
	}
	func_116(Var0, iParam1, 0, sParam2, uParam3);
}

void func_112(int iParam0)
{
	Global_2433082.f_1382 = iParam0;
}

int func_113(var uParam0)
{
	return uParam0;
}

Vector3 func_114(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xC31BB47A21F61C6C())
	{
		Var3 = { unk_0x4FC37A47A7CC5D48(2) };
	}
	if (iParam0 == func_115(unk_0xD5A676B97920D126()) && unk_0x730196602471217D(unk_0x94D84BEA18624393()) == 4)
	{
		Var0 = { unk_0x7E140C583F91AE2B(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		fVar6 = unk_0x714F015B4D2DE1DC(iParam0);
		if (unk_0x730196602471217D(unk_0x94D84BEA18624393()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xB1C5AB29009DDB95(unk_0xA0A4DA31DEDFAC4F(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x0A0C20E171493CD0(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_115(var uParam0)
{
	return uParam0;
}

void func_116(struct<3> Param0, int iParam3, int iParam4, char* sParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2433082.f_781[iVar0 /*30*/].f_6 == 0 || Global_2433082.f_781[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2433082.f_781[iVar1 /*30*/] = { Param0 };
			Global_2433082.f_781[iVar1 /*30*/].f_6 = 1;
			Global_2433082.f_781[iVar1 /*30*/].f_4 = func_119(Global_2433082.f_781[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2433082.f_781[iVar1 /*30*/].f_7 = unk_0x7414B386C0020BEC();
			Global_2433082.f_781[iVar1 /*30*/].f_3 = iParam3;
			Global_2433082.f_781[iVar1 /*30*/].f_8 = iParam4;
			Global_2433082.f_781[iVar1 /*30*/].f_9 = func_118();
			Global_2433082.f_781[iVar1 /*30*/].f_10 = func_117();
			StringCopy(&(Global_2433082.f_781[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2433082.f_781[iVar1 /*30*/].f_26 = unk_0x3647F58C23A6E46A(unk_0x7414B386C0020BEC(), uParam6);
		}
	}
}

int func_117()
{
	if (Global_2433082.f_1382)
	{
		Global_2433082.f_1382 = 0;
		return 1;
	}
	Global_2433082.f_1382 = 0;
	return 0;
}

var func_118()
{
	var uVar0;
	
	uVar0 = Global_2433082.f_1384;
	Global_2433082.f_1384 = 1;
	return uVar0;
}

float func_119(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x8E92CDAEB8357ABD(unk_0x816B691E0C59C315(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_120(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_121(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_121(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_156(unk_0xFB6B3EEFAB2DD12C()) || func_155(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (Global_262145.f_8151 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8151;
		}
	}
	else if (Global_262145.f_5467 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5467;
	}
	if (func_154(uParam2))
	{
	}
	if (func_153())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_151(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_150(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_147(0, &iVar1);
					break;
				
				case 3:
					func_147(1, &iVar1);
					break;
				
				case 1:
					func_144(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_142(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_132((func_141(unk_0xFB6B3EEFAB2DD12C()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x2A478F15F6560673(iVar1, iParam8, iParam9);
				if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_2 != -1)
				{
					func_142(1160, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_126(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_122((func_124(unk_0xFB6B3EEFAB2DD12C()) + iVar1));
			}
			else
			{
				func_122((func_124(unk_0xFB6B3EEFAB2DD12C()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_122(int iParam0)
{
	if (func_153())
	{
		Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_5 = iParam0;
		func_123(joaat("mpply_globalxp"), iParam0);
	}
}

void func_123(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, 1);
	}
}

int func_124(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_198(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return func_125(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_5;
			}
		}
		else
		{
			return func_125(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_125(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_126(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_131(unk_0xFB6B3EEFAB2DD12C()) };
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(&Var0))
		{
			iVar13 = func_129(func_130(&Var0));
			if (iVar13 == 0)
			{
				func_128(&Global_1362334, iParam0);
				func_127(joaat("mpply_crew_local_xp_0"), Global_1362334);
			}
			else if (iVar13 == 1)
			{
				func_128(&Global_1362335, iParam0);
				func_127(joaat("mpply_crew_local_xp_1"), Global_1362335);
			}
			else if (iVar13 == 2)
			{
				func_128(&Global_1362336, iParam0);
				func_127(joaat("mpply_crew_local_xp_2"), Global_1362336);
			}
			else if (iVar13 == 3)
			{
				func_128(&Global_1362337, iParam0);
				func_127(joaat("mpply_crew_local_xp_3"), Global_1362337);
			}
			else if (iVar13 == 4)
			{
				func_128(&Global_1362338, iParam0);
				func_127(joaat("mpply_crew_local_xp_4"), Global_1362338);
			}
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1362329 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1362331 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1362331 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1362332 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1362333 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1362334 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1362335 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1362336 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1362337 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1362338 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1362339 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1362340 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1362341 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1362342 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1362343 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1362344 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1362345 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_128(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_129(int iParam0)
{
	if (iParam0 == Global_1362329)
	{
		return 0;
	}
	else if (iParam0 == Global_1362330)
	{
		return 1;
	}
	else if (iParam0 == Global_1362331)
	{
		return 2;
	}
	else if (iParam0 == Global_1362332)
	{
		return 3;
	}
	else if (iParam0 == Global_1362333)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_130(var uParam0)
{
	if (unk_0x527DE7DC62A1D335())
	{
		if (unk_0xF42D93ECBADC9AE3(uParam0))
		{
			return Global_2452407;
		}
	}
	return Global_2452407;
}

struct<13> func_131(int iParam0)
{
	struct<13> Var0;
	
	unk_0x81C63D2370ED33C5(iParam0, &Var0, 13);
	return Var0;
}

void func_132(int iParam0, int iParam1, int iParam2)
{
	if (func_153())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8121 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362449[func_44(-1)])
				{
					unk_0x2A478F15F6560673(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362449[func_44(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8120 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x2A478F15F6560673(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_140(unk_0xFB6B3EEFAB2DD12C()))
		{
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_1 = iParam0;
			Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_202.f_6 = func_138(iParam0, 1);
		}
		func_137(634, iParam0, -1, 1);
		func_136(635, func_138(iParam0, 1), -1, 1, 0);
		Global_1362449[func_44(-1)] = iParam0;
		func_133(7, 0);
	}
}

void func_133(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_135(iParam0, iParam1))
	{
		iVar0 = func_134();
		Global_2452384[iVar0] = iParam0;
	}
}

int func_134()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2452384[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_135(int iParam0, var uParam1)
{
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_136(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503773[iParam0 /*3*/][func_44(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1362395[func_44(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1362401[func_44(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1362407[func_44(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1362413[func_44(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1362371[func_44(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1362377[func_44(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1362383[func_44(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1362389[func_44(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362347[func_44(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1362353[func_44(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1362359[func_44(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1362365[func_44(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1362419[func_44(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1362425[func_44(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1362431[func_44(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1362437[func_44(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1362443[func_44(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1362449[func_44(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1362455[func_44(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524224[0 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524224[1 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524224[2 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524224[3 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524295[func_44(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1362461[func_44(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362467[func_44(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362473[func_44(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1362479[func_44(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524258[0 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524258[1 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524258[2 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524258[3 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524258[4 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524298[0 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524298[1 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524298[2 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524298[3 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524298[4 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524314[0 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524314[1 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524314[2 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524314[3 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524314[4 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524258[5 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524224[4 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524330[func_44(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524339[func_44(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524333[func_44(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524342[func_44(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524336[func_44(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524345[func_44(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524348[func_44(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524258[6 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524224[5 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524258[7 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524224[6 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524258[8 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524224[7 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524258[9 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524224[8 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524258[10 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524224[9 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524258[11 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524224[10 /*3*/][func_44(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_138(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_139(iParam0, 0);
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_279816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_279816[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_140(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_2433082.f_1, iParam0);
	}
	return 1;
}

int func_141(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return Global_1362449[func_44(-1)];
			}
			else if (func_140(iParam0))
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_1;
			}
		}
	}
	else
	{
		return Global_1362449[func_44(-1)];
	}
	return 0;
}

void func_142(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_157(iParam0, func_44(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_143(iParam0))
	{
		func_136(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_137(iParam0, iVar0, iParam2, 1);
	}
}

int func_143(int iParam0)
{
	if (Global_1362328)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1298:
			case 634:
			case 1273:
			case 759:
			case 760:
			case 761:
			case 1231:
			case 1870:
			case 2261:
			case 2911:
			case 3040:
			case 5886:
			case 3035:
			case 3036:
			case 3037:
			case 3038:
			case 3039:
			case 3214:
			case 3216:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3209:
			case 3203:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3649:
			case 3650:
			case 3671:
			case 3212:
			case 3211:
			case 3992:
			case 3991:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
				return 1;
				break;
			}
	}
	return 0;
}

void func_144(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		iVar4 = unk_0x1C2C3C236D3FE99A(iVar0);
		if (unk_0x28E01BEA13B73DF2(iVar4))
		{
			iVar5 = unk_0x28B48C55342F6368(iVar4);
			if (unk_0x2A7336F1C6B39623(iVar5) != -1)
			{
				if (unk_0x2A7336F1C6B39623(iVar5) == iVar1 || func_76(unk_0x2A7336F1C6B39623(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xFB6B3EEFAB2DD12C())
					{
						if (func_146(unk_0xFB6B3EEFAB2DD12C(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_145(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_145(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_145(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_146(int iParam0, int iParam1)
{
	if (unk_0x527DE7DC62A1D335())
	{
		Global_2482005 = { func_131(iParam0) };
		Global_2482018 = { func_131(iParam1) };
		if (unk_0xF42D93ECBADC9AE3(&Global_2482005))
		{
			if (unk_0xF42D93ECBADC9AE3(&Global_2482018))
			{
				unk_0xF6955213DB8BD7D3(&Global_2481935, 35, &Global_2482005);
				unk_0xF6955213DB8BD7D3(&Global_2481970, 35, &Global_2482018);
				if (Global_2481935 == Global_2481970)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_147(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x11B9E7FF50B2F4CC())
		{
			iVar3 = iVar0;
			if (unk_0x28E01BEA13B73DF2(iVar3))
			{
				iVar4 = unk_0x28B48C55342F6368(iVar3);
				if (func_198(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
					{
						iVar1++;
						if (func_146(unk_0xFB6B3EEFAB2DD12C(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_198(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xFB6B3EEFAB2DD12C())
				{
					if (func_148(unk_0xFB6B3EEFAB2DD12C(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_146(unk_0xFB6B3EEFAB2DD12C(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_145(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_145(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_148(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_149(iParam0), func_149(iParam1));
	return 0f;
}

Vector3 func_149(var uParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(uParam0), 0);
}

int func_150(int iParam0)
{
	int iVar0;
	
	if (unk_0xBC409772C72D8108() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_145(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_151(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xC6C425A326326DEF(iParam0) > func_141(unk_0xFB6B3EEFAB2DD12C()))
		{
			iParam0 = -func_141(unk_0xFB6B3EEFAB2DD12C());
		}
	}
	if (func_152(8000, 0, 0) > 0)
	{
		if (func_152(8000, 0, 0) < (iParam0 + func_141(unk_0xFB6B3EEFAB2DD12C())))
		{
			iParam0 = (func_152(8000, 0, 0) - func_141(unk_0xFB6B3EEFAB2DD12C()));
		}
	}
	return iParam0;
}

int func_152(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_279816[iParam0];
}

int func_153()
{
	return 1;
}

int func_154(var uParam0)
{
	if (unk_0x1C079483C9D16F36(uParam0))
	{
		return 1;
	}
	else if (unk_0xCC257DA11A122B5F(uParam0, "") || unk_0xCC257DA11A122B5F(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_155(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

bool func_156(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

int func_157(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_44(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_158(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_157(iParam0, func_44(iParam1), 0);
	iVar0++;
	if (!func_143(iParam0))
	{
		func_136(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_137(iParam0, iVar0, iParam1, 1);
	}
}

void func_159()
{
	if (unk_0xF6A32456BABBBA74(Local_99.f_2) && !unk_0xB529B2A4B7C64D6D(unk_0xE95C934718B1A4FF(Local_99.f_2), 0))
	{
		if (!unk_0x6901135DDCC4904D(uLocal_226))
		{
			uLocal_226 = unk_0x890C68C377CE0CA4(unk_0xE95C934718B1A4FF(Local_99.f_2));
			if (!unk_0xF44A5E894FE76438(Local_99.f_1, 0))
			{
				unk_0xD6507DB77BCBD904(uLocal_226, 307);
				unk_0x2EDAF851B28036F0(uLocal_226, "PTD_BLIPN");
			}
			else
			{
				unk_0xD6507DB77BCBD904(uLocal_226, 64);
				unk_0x2EDAF851B28036F0(uLocal_226, "PTD_BLIPH");
			}
			unk_0x4F095059F1C175D5(uLocal_226, 1);
			unk_0x49A7A4E5E2FD02DC(uLocal_226, 7000);
			unk_0x0D792BA553E57B27(uLocal_226, 6);
			if (func_161())
			{
				unk_0xBEC798FF88A42020(uLocal_226, 0);
			}
		}
		else
		{
			if (!unk_0xF44A5E894FE76438(Local_99.f_1, 0))
			{
				unk_0x0BBE79B5D12ED5BF(uLocal_226, unk_0xF2DB717A73826179(unk_0x714F015B4D2DE1DC(unk_0xE95C934718B1A4FF(Local_99.f_2))));
			}
			if (func_161())
			{
				unk_0xBEC798FF88A42020(uLocal_226, 0);
			}
			else
			{
				unk_0xBEC798FF88A42020(uLocal_226, 4);
			}
		}
	}
}

void func_160(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

int func_161()
{
	if (func_162(17))
	{
		return 1;
	}
	if (func_162(0))
	{
		return 1;
	}
	return 0;
}

bool func_162(int iParam0)
{
	var uVar0;
	
	uVar0 = func_157(2462, -1, 0);
	return unk_0xF44A5E894FE76438(uVar0, iParam0);
}

bool func_163(int iParam0)
{
	return unk_0xC6C425A326326DEF(unk_0x05E1706E4465DAA5(Global_2412523, unk_0x7414B386C0020BEC())) > iParam0;
}

int func_164()
{
	return Local_99.f_0;
}

int func_165(int iParam0)
{
	return Local_127[iParam0 /*3*/];
}

bool func_166(int iParam0)
{
	return !func_167(iParam0);
}

int func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_5492)
			{
				return 0;
			}
			if (func_169(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5493)
			{
				return 0;
			}
			if (func_169(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5494)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5495)
			{
				return 0;
			}
			if (func_169(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_168(4))
			{
				return 0;
			}
			if (func_169(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_168(4))
			{
				return 0;
			}
			if (func_169(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_168(4))
			{
				return 0;
			}
			if (func_169(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_168(4))
			{
				return 0;
			}
			if (func_169(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			if (unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 0) || unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_257.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_168(4))
			{
				return 0;
			}
			if (func_169(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_168(4))
			{
				return 0;
			}
			if (func_169(unk_0xFB6B3EEFAB2DD12C(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_168(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_198(unk_0x7A4693BB354F3CD3(iVar0), 0, 1))
		{
			if (unk_0xF44A5E894FE76438(Global_2421621[iVar0 /*358*/].f_211, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_169(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_211, iParam1);
}

int func_170()
{
	bool bVar0;
	var uVar1;
	
	func_177(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			return 1;
		}
	}
	if (func_176())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_175())
	{
		return 1;
	}
	if (func_174(157))
	{
		if (!func_173())
		{
			return 1;
		}
	}
	if (func_174(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_171() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_171()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_171()
{
	switch (func_172())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_172()
{
	return Global_25185;
}

bool func_173()
{
	return Global_2443089.f_577;
}

int func_174(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_175()
{
	return Global_2452479;
}

bool func_176()
{
	return Global_2443089.f_572;
}

void func_177(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x0CC60784D9D609C5(1))
	{
		iVar1 = unk_0x4546DF5AAD2E2B44(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x49897615E4CA227C(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 365:
					func_178(iVar0);
					break;
				
				case 2:
					unk_0x49897615E4CA227C(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_178(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_198(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(iVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(iVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_179(uVar4, &bVar5))
						{
							unk_0x0AB574163629C3BD(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB24D3BF5DABD13AA(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_179(int iParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(iParam0))
		{
			if (unk_0x94482DCC4926EF60(iParam0))
			{
				unk_0xC53606C390BE2727(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(iParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_180()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_181()
{
	if (unk_0x6901135DDCC4904D(uLocal_226))
	{
		unk_0x8A3D7569826A325D(&uLocal_226);
	}
	if (unk_0xF44A5E894FE76438(Local_99.f_1, 1))
	{
		func_27(2, "PTD_FAIL", 0, 0, -99);
	}
	func_184();
	if (func_164() == 4 && Local_99.f_4 != 0)
	{
		unk_0xFA03BA297FE81584(Local_99.f_4, 0);
	}
	func_183(15, 0);
	func_182();
}

void func_182()
{
	unk_0x01DFCA3621B68C4A();
}

void func_183(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211, iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211), iParam0);
		}
	}
	else if (unk_0xF44A5E894FE76438(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211, iParam0))
	{
		unk_0x4EA098C870B73AB7(&(Global_2421621[unk_0xFB6B3EEFAB2DD12C() /*358*/].f_211), iParam0);
	}
}

void func_184()
{
	unk_0x873418BFBF9A6780(&uLocal_224);
}

void func_185(struct<20> Param0)
{
	int iVar0;
	
	func_196(func_197(Param0.f_0), Param0);
	unk_0xAC4AA684E16779D5(1);
	unk_0xF5116E26EBA83CA9(1);
	func_194(0, -1, 0);
	unk_0x1CB2FF4BC0AF8B2C(&Local_99, 28);
	unk_0x47DDB3A546F48091(&Local_127, 97);
	if (!func_193())
	{
		func_181();
	}
	if (unk_0x1995B52453EF6537())
	{
		unk_0x7E85CEE862B85A74(0);
		if (unk_0x04DE35D10A718EEF())
		{
			iVar0 = unk_0x7BC26452241AC7C9(0, 6);
			switch (iVar0)
			{
				case 0:
					Local_99.f_4 = joaat("cuban800");
					Local_99.f_5 = joaat("a_m_m_skidrow_01");
					break;
				
				case 1:
					Local_99.f_4 = joaat("stunt");
					Local_99.f_5 = joaat("a_m_y_eastsa_02");
					break;
				
				case 2:
					Local_99.f_4 = joaat("duster");
					Local_99.f_5 = joaat("a_m_m_prolhost_01");
					break;
				
				case 3:
					Local_99.f_4 = joaat("mammatus");
					Local_99.f_5 = joaat("a_m_y_vinewood_02");
					break;
				
				case 4:
					Local_99.f_4 = joaat("maverick");
					Local_99.f_5 = joaat("a_m_m_eastsa_02");
					unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 0);
					break;
				
				case 5:
					Local_99.f_4 = joaat("swift");
					Local_99.f_5 = joaat("a_m_y_busicas_01");
					unk_0xB8A73E7DA87B2968(&(Local_99.f_1), 0);
					break;
			}
			if (Local_99.f_4 != 0)
			{
				unk_0xFA03BA297FE81584(Local_99.f_4, 1);
			}
			func_192();
			func_186();
		}
		func_183(15, 1);
		Local_127[unk_0x1E7FB1CA38C403F6() /*3*/] = 0;
	}
	else
	{
		func_181();
	}
}

void func_186()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = unk_0x7BC26452241AC7C9(0, 3);
		Local_99.f_9[iVar0 /*3*/] = { func_188(iVar1) };
		if (iVar0 > 0)
		{
			if (func_187(Local_99.f_9[iVar0 /*3*/], Local_99.f_9[(iVar0 - 1) /*3*/], 250f, 0))
			{
				Local_99.f_9[iVar0 /*3*/] = { func_188(iVar1 + 1) };
			}
		}
		iVar0++;
	}
}

int func_187(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xC3D3EC28F0EB3C6D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_188(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 2;
	}
	else if (iParam0 > 2)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_191();
		
		case 1:
			return func_190();
		
		case 2:
			return func_189();
		
		default:
	}
	return 3250f, 1500f, 0f;
}

Vector3 func_189()
{
	switch (unk_0x7BC26452241AC7C9(0, 13))
	{
		case 0:
			return 1915.902f, 563.9669f, 174.4925f;
		
		case 1:
			return 1402.858f, -2148.418f, 57.9675f;
		
		case 2:
			return 1104.815f, -3142.335f, 4.901f;
		
		case 3:
			return 545.7347f, -3025.327f, 5.0591f;
		
		case 4:
			return 1376.037f, -740.2166f, 66.2331f;
		
		case 5:
			return 1147.162f, 126.3452f, 80.8693f;
		
		case 6:
			return -1731.085f, -989.8386f, 4.4152f;
		
		case 7:
			return 728.2132f, -1532.48f, 18.7348f;
		
		case 8:
			return 1140.923f, -1285.639f, 33.6091f;
		
		case 9:
			return 2811.453f, -668.671f, 1.581f;
		
		case 10:
			return -1706.013f, -183.4387f, 56.3712f;
		
		case 11:
			return -134.0402f, -869.4509f, 43.2175f;
		
		case 12:
			return 1098.246f, -544.2941f, 56.4061f;
		
		default:
	}
	return 1098.246f, -544.2941f, 56.4061f;
}

Vector3 func_190()
{
	switch (unk_0x7BC26452241AC7C9(0, 13))
	{
		case 0:
			return 2312.707f, 1531.258f, 59.8792f;
		
		case 1:
			return 1069.58f, 2366.363f, 43.0396f;
		
		case 2:
			return -1979.781f, 2584.161f, 2.2587f;
		
		case 3:
			return 1458.393f, 1113.066f, 113.334f;
		
		case 4:
			return 817.5361f, 1316.57f, 362.0491f;
		
		case 5:
			return 1671.232f, 3041.176f, 53.0351f;
		
		case 6:
			return -3163.364f, 756.8276f, 2.1183f;
		
		case 7:
			return -799.6782f, 885.0139f, 202.1319f;
		
		case 8:
			return -401.2717f, 1211.677f, 324.9297f;
		
		case 9:
			return 2909.154f, 770.3181f, 21.1684f;
		
		case 10:
			return 2778.909f, 2853.266f, 34.7828f;
		
		case 11:
			return 585.3987f, 2893.778f, 38.5297f;
		
		case 12:
			return -498.3305f, 3006.906f, 27.4341f;
		
		default:
	}
	return -498.3305f, 3006.906f, 27.4341f;
}

Vector3 func_191()
{
	switch (unk_0x7BC26452241AC7C9(0, 13))
	{
		case 0:
			return 1015.599f, 4350.668f, 41.484f;
		
		case 1:
			return -1731.06f, 4959.484f, 3.8134f;
		
		case 2:
			return -2436.25f, 4181.913f, 7.7719f;
		
		case 3:
			return 2463.142f, 3769.651f, 40.328f;
		
		case 4:
			return 1888.61f, 4626.815f, 37.4665f;
		
		case 5:
			return -388.8584f, 4353.478f, 54.3806f;
		
		case 6:
			return 3800f, 4462f, 5f;
		
		case 7:
			return 3350f, 5152f, 20f;
		
		case 8:
			return 2200f, 5600f, 54f;
		
		case 9:
			return 1410f, 6560f, 20f;
		
		case 10:
			return -330f, 6100f, 32f;
		
		case 11:
			return -1365f, 4380f, 42f;
		
		case 12:
			return 700f, 3900f, 30f;
		
		default:
	}
	return 700f, 3900f, 30f;
}

void func_192()
{
	Local_99.f_6 = { func_188(unk_0x7BC26452241AC7C9(0, 3)) };
	Local_99.f_6 = { Local_99.f_6 + Vector(120f, 0f, 0f) };
}

int func_193()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1995B52453EF6537())
		{
			return 0;
		}
		if (unk_0x34AA2E80B3872230())
		{
			return 1;
		}
		if (func_176())
		{
			return 0;
		}
		if (func_174(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_194(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_182();
			}
			else
			{
				return 0;
			}
		}
		if (!func_195())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1995B52453EF6537())
				{
					if (!bParam2)
					{
						func_182();
					}
					else
					{
						return 0;
					}
				}
				if (func_176())
				{
					if (!bParam2)
					{
						func_182();
					}
					else
					{
						return 0;
					}
				}
				if (func_174(155))
				{
					if (!bParam2)
					{
						func_182();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92DD6B9655D31C6A())
			{
				if (!bParam2)
				{
					func_182();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x1E6D5854F5CCAE3F();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1995B52453EF6537())
		{
			if (!bParam2)
			{
				func_182();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92DD6B9655D31C6A())
	{
		if (!bParam2)
		{
			func_182();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_195()
{
	return Global_1315206;
}

void func_196(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1995B52453EF6537())
	{
		func_182();
	}
	unk_0x6AFFC4188D3C82E8(uParam0, 0, Param1.f_16);
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 106:
			return 32;
		
		case 107:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 113:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 117:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 2;
		
		case 129:
			return 1;
		
		case 125:
			return 2;
		
		case 126:
			return 4;
		
		case 127:
			return 2;
		
		case 128:
			return 2;
		
		case 110:
			return 1;
		
		case 130:
			return 2;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 0;
		
		case 140:
			return 1;
		
		case 137:
			return 4;
		
		case 138:
			return 16;
		
		case 139:
			return 32;
		
		default:
	}
	return 0;
}

int func_198(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x9BA2465846EC8271(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433082.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

