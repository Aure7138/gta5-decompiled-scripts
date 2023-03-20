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
	struct<10> Local_56 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_66 = 0;
	struct<3> Local_67[32];
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	int iLocal_169 = 0;
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
	if (unk_0x1995B52453EF6537())
	{
		if (!func_221(ScriptParam_0))
		{
			func_215();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_214(unk_0xFB6B3EEFAB2DD12C()) != 1 && !unk_0xF44A5E894FE76438(Global_2494149.f_791.f_7, 0))
			{
				func_215();
			}
		}
	}
	uLocal_165 = ScriptParam_0.f_19;
	while (true)
	{
		func_213();
		if (func_203())
		{
			func_215();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_214(unk_0xFB6B3EEFAB2DD12C()) != 1 && Global_1616674 == 0)
			{
				func_215();
			}
		}
		if (unk_0xF5C5C10402E12CCB() != iLocal_169)
		{
			func_215();
		}
		unk_0x4E2CA5164656EED0();
		switch (func_202(unk_0x1E7FB1CA38C403F6()))
		{
			case 0:
				if (func_201())
				{
					if (func_200() == 1)
					{
						Local_67[unk_0x1E7FB1CA38C403F6() /*3*/] = 1;
					}
					else if (func_200() == 4)
					{
						Local_67[unk_0x1E7FB1CA38C403F6() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_200() == 1)
				{
					func_165();
				}
				else if (func_200() == 4)
				{
					Local_67[unk_0x1E7FB1CA38C403F6() /*3*/] = 3;
				}
				if (Local_67[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 == 0)
				{
					if ((!unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_56.f_3, 500f, 500f, 500f, 0, 1, 0) && func_214(unk_0xFB6B3EEFAB2DD12C()) != 1) && !unk_0xF44A5E894FE76438(Global_2494149.f_791.f_7, 0))
					{
						Local_67[unk_0x1E7FB1CA38C403F6() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_163(&(Local_56.f_9));
				if (func_162(&(Local_56.f_9)))
				{
					Local_67[unk_0x1E7FB1CA38C403F6() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_67[unk_0x1E7FB1CA38C403F6() /*3*/] = 4;
			
			case 4:
				func_215();
				break;
		}
		if (unk_0x04DE35D10A718EEF())
		{
			switch (func_200())
			{
				case 0:
					if (func_6())
					{
						Local_56.f_0 = 1;
					}
					break;
				
				case 1:
					func_5();
					func_4();
					if (func_1())
					{
						Local_56.f_0 = 4;
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
	if (Local_56.f_7 >= 32 && func_214(unk_0xFB6B3EEFAB2DD12C()) == 1)
	{
		if (func_3(Global_2494149.f_791.f_1))
		{
			return 1;
		}
	}
	if (Local_56.f_8 == 2)
	{
		return 1;
	}
	return 0;
}

int func_3(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	switch (Local_56.f_8)
	{
		case 0:
			if (!unk_0xF6A32456BABBBA74(Local_56.f_2) || Local_56.f_6 != -1)
			{
				Local_56.f_8 = 1;
			}
			break;
		
		case 1:
			Local_56.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x11B9E7FF50B2F4CC())
	{
		if (unk_0x28E01BEA13B73DF2(unk_0x1C2C3C236D3FE99A(iVar0)))
		{
			if (Local_56.f_6 == -1)
			{
				if (unk_0xF44A5E894FE76438(Local_67[iVar0 /*3*/].f_1, 0))
				{
					Local_56.f_6 = iVar0;
				}
			}
			if (!unk_0xF44A5E894FE76438(Local_56.f_1, 7))
			{
				if (unk_0xF44A5E894FE76438(Local_67[iVar0 /*3*/].f_1, 1))
				{
					unk_0xB8A73E7DA87B2968(&(Local_56.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_6()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var9;
	int iVar12;
	struct<26> Var13;
	
	if (!unk_0xF6A32456BABBBA74(Local_56.f_2))
	{
		if (func_201())
		{
			if (unk_0xC802318C234A1488(1))
			{
				fVar5 = 250f;
				Var6 = { Local_56.f_3 };
				if (unk_0xF44A5E894FE76438(Local_56.f_1, 8))
				{
					Var0 = { Global_2494149.f_791.f_1 };
					uVar3 = Global_2494149.f_791.f_4;
				}
				if (func_214(unk_0xFB6B3EEFAB2DD12C()) == 7)
				{
					iVar12 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
					if (Global_1632166.f_91[iVar12 /*8128*/].f_967[0 /*28*/].f_10 > 0f)
					{
						Var6 = { Global_1632166.f_91[iVar12 /*8128*/].f_967[0 /*28*/].f_3 };
						Var9 = { Global_1632166.f_91[iVar12 /*8128*/].f_967[0 /*28*/].f_6 };
						fVar5 = Global_1632166.f_91[iVar12 /*8128*/].f_967[0 /*28*/].f_10;
						iVar4 = 1;
					}
					else if (Global_1632166.f_91[iVar12 /*8128*/].f_967[0 /*28*/].f_9 > 0f)
					{
						Var6 = { Global_1632166.f_91[iVar12 /*8128*/].f_967[0 /*28*/] };
						fVar5 = Global_1632166.f_91[iVar12 /*8128*/].f_967[0 /*28*/].f_9;
					}
				}
				Var13.f_5 = 1115815936;
				Var13.f_13 = 2;
				Var13.f_20 = 2;
				Var13.f_25 = -1082130432;
				Var13.f_4 = 1;
				Var13.f_5 = 30f;
				Var13.f_10 = 1;
				if (iVar4 == 0)
				{
					if (unk_0xF44A5E894FE76438(Local_56.f_1, 8) || func_161(Var6, fVar5, &Var0, &uVar3, Var13))
					{
						if (Local_56.f_7 >= 32 || func_214(unk_0xFB6B3EEFAB2DD12C()) == 1)
						{
							Local_56.f_2 = unk_0x2068F4FA88DFDA14(unk_0xED43F9B9C8B5F1F9(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_56.f_2 = unk_0x2068F4FA88DFDA14(unk_0x8702C366F81A1BCC(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0x99569FEC2425586D(unk_0x629B43A8C1BDED52(Local_56.f_2), uVar3);
					}
				}
				else if (unk_0xF44A5E894FE76438(Local_56.f_1, 8) || func_7(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_56.f_7 >= 32 || func_214(unk_0xFB6B3EEFAB2DD12C()) == 1)
					{
						Local_56.f_2 = unk_0x2068F4FA88DFDA14(unk_0xED43F9B9C8B5F1F9(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_56.f_2 = unk_0x2068F4FA88DFDA14(unk_0x8702C366F81A1BCC(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0x99569FEC2425586D(unk_0x629B43A8C1BDED52(Local_56.f_2), uVar3);
				}
			}
		}
	}
	if (unk_0xF6A32456BABBBA74(Local_56.f_2))
	{
		return 1;
	}
	return 0;
}

int func_7(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7, var uParam8, struct<8> Param9, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	struct<11> Var0;
	struct<25> Var18;
	
	if (Param9.f_5 < 20f)
	{
		Param9.f_5 = 20f;
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_16 = 1;
	Var18.f_22 = 1;
	Var18.f_23 = 1;
	Var18.f_24 = 1;
	Var18.f_5 = 0;
	Var18.f_6 = 1;
	Var18.f_7 = 2;
	Var18.f_8 = { Param0 };
	Var18.f_11 = { Param3 };
	Var18.f_14 = fParam6;
	Var18.f_15 = 0;
	Var18.f_16 = 1;
	Var18.f_17 = 0;
	Param9.f_7 = 0;
	if (func_8(&Var18, &Param9, &Var0))
	{
		*uParam7 = { Var0[0 /*3*/] };
		*uParam8 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_8(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	struct<3> Var18;
	struct<3> Var21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar84;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404994.f_2019 == *uParam0 || !Global_2404994.f_2019.f_1 == uParam0->f_1) || !Global_2404994.f_2019.f_2 == uParam0->f_2) || !Global_2404994.f_2022 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404994.f_2033 == uParam0->f_8 || !Global_2404994.f_2033.f_1 == uParam0->f_8.f_1) || !Global_2404994.f_2033.f_2 == uParam0->f_8.f_2) || !Global_2404994.f_2036 == uParam0->f_11) || !Global_2404994.f_2036.f_1 == uParam0->f_11.f_1) || !Global_2404994.f_2036.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404994.f_2033 == uParam0->f_8 || !Global_2404994.f_2033.f_1 == uParam0->f_8.f_1) || !Global_2404994.f_2033.f_2 == uParam0->f_8.f_2) || !Global_2404994.f_2036 == uParam0->f_11) || !Global_2404994.f_2036.f_1 == uParam0->f_11.f_1) || !Global_2404994.f_2036.f_2 == uParam0->f_11.f_2) || !Global_2404994.f_2039 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404994.f_2017 == 1)
		{
			if (unk_0x597C1E51157E5516(Global_2404994.f_2026))
			{
				if (Global_2404994.f_2026 == unk_0x3ED6DDB11A7AD67F())
				{
					if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2023) < func_160(0))
					{
						return 0;
					}
				}
				else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2023) < func_160(0))
				{
					return 0;
				}
			}
			unk_0xE8565300808F0BF9();
			unk_0xFFDCA3284D1BB27E();
			func_159();
		}
		Global_2404994.f_2017 = 0;
	}
	else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2023) > func_160(0))
	{
		Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	unk_0x491763F024B284EB(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2404994.f_2017)
	{
		unk_0xE8565300808F0BF9();
		unk_0xFFDCA3284D1BB27E();
		func_159();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_158(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xE9B2C327B97A0FE2())
		{
			Global_2404994.f_2040 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404994.f_2019 = { *uParam0 };
					Global_2404994.f_2022 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404994.f_2033 = { uParam0->f_8 };
					Global_2404994.f_2036 = { uParam0->f_11 };
					Global_2404994.f_2039 = 0f;
					Global_2404994.f_2019 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404994.f_2033 = { uParam0->f_8 };
					Global_2404994.f_2036 = { uParam0->f_11 };
					Global_2404994.f_2039 = uParam0->f_14;
					Global_2404994.f_2019 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_157(Var8.f_0, Var8.f_1);
			}
			Global_2404994.f_2018 = 1;
			Global_2404994.f_2017 = 1;
			Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
			Global_2404994.f_2023 = unk_0x7414B386C0020BEC();
			Global_2404994.f_2026 = unk_0x3ED6DDB11A7AD67F();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404994.f_2017)
	{
		if (Global_2404994.f_2018 == 1)
		{
			if (unk_0x5AF533059A5816BC(fVar4, fVar5, fVar6, fVar7) || unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 5000)
			{
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_25 > 0f)
					{
						Var26.f_6 = uParam1->f_25;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_23;
					Var26.f_55 = uParam0->f_16;
					func_138(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_137(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404994.f_2018 = 9;
				}
				else
				{
					Global_2404994.f_2018 = 2;
				}
			}
		}
		if (Global_2404994.f_2018 == 2)
		{
			if ((unk_0x5800AAD1409A90F2(Var11, Var14) || unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 15000) || unk_0xD6486010C4575E7D(Var11, Var14) == 0)
			{
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				if (uParam0->f_5 && !func_134(unk_0xFB6B3EEFAB2DD12C(), 0))
				{
					Global_2404994.f_2018 = 3;
				}
				else
				{
					Global_2404994.f_2018 = 4;
				}
			}
			else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2028) > 7000)
			{
				func_133(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404994.f_2018 == 3)
		{
			if (func_132() || unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 10000)
			{
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				Global_2404994.f_2018 = 4;
			}
		}
		if (Global_2404994.f_2018 == 4)
		{
			if (unk_0xE9B2C327B97A0FE2())
			{
				unk_0xE8565300808F0BF9();
				unk_0xFFDCA3284D1BB27E();
			}
			else
			{
				iVar0 = 0;
				func_126();
				if (uParam0->f_5)
				{
					if (unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0xD476586AFC38802E(unk_0xFB6B3EEFAB2DD12C(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
								Global_2404994.f_2018 = 5;
							}
							break;
						
						case 1:
							func_125(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0xBA68303F8462B64A(unk_0xFB6B3EEFAB2DD12C(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
								Global_2404994.f_2018 = 5;
							}
							break;
						
						case 2:
							if (unk_0xBA68303F8462B64A(unk_0xFB6B3EEFAB2DD12C(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
								Global_2404994.f_2018 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
					Global_2404994.f_2018 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x06256439EFF04C62(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_125(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0xEF5484102E275765(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xEF5484102E275765(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404994.f_2018 == 5)
		{
			if (func_53(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404994.f_2044.f_5)
				{
					Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
					Global_2404994.f_2018 = 6;
				}
				else
				{
					Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0x1467106C5D2966B9(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404994.f_2018 = 9;
				}
			}
			else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 20000)
			{
				unk_0xE8565300808F0BF9();
				unk_0xFFDCA3284D1BB27E();
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				Global_2404994.f_2018 = 8;
			}
		}
		if (Global_2404994.f_2018 == 6)
		{
			iVar0 = 0;
			Global_2404994.f_2044.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_52(uParam0->f_4))
				{
					if (unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_51(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
			Global_2404994.f_2018 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x06256439EFF04C62(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_125(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0xEF5484102E275765(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xEF5484102E275765(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404994.f_2018 == 7)
		{
			if (func_53(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404994.f_2155[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_137(Global_2404994.f_2155[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404994.f_2155[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_49(Global_2404994.f_2155[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404994.f_2155[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x1FA2886237245376(Global_2404994.f_2155[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404994.f_2155[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_11(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0x1467106C5D2966B9(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404994.f_2018 = 9;
			}
			else if (unk_0x05E1706E4465DAA5(unk_0x7414B386C0020BEC(), Global_2404994.f_2024) > 20000)
			{
				Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
				Global_2404994.f_2018 = 8;
			}
		}
		if (Global_2404994.f_2018 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_2404994.f_476))
				{
				}
			}
			else if (Global_2404994.f_2044.f_2)
			{
				func_9(uParam2, &(Global_2404994.f_2044.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar84 = false;
				}
				else
				{
					bVar84 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404994.f_2019 };
				func_11(uParam2[0 /*3*/], 0, bVar84, 0, 0, uParam0, uParam1);
			}
			Global_2404994.f_2024 = unk_0x7414B386C0020BEC();
			Global_2404994.f_2018 = 9;
		}
		if (Global_2404994.f_2018 == 9)
		{
			Global_2404994.f_2017 = 0;
			unk_0xE8565300808F0BF9();
			unk_0xFFDCA3284D1BB27E();
			func_159();
			return 1;
		}
		Global_2404994.f_2023 = unk_0x7414B386C0020BEC();
	}
	return 0;
}

void func_9(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_14[iVar0] = (*uParam1)[iVar0 /*9*/];
		iVar0++;
	}
}

int func_10(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_11(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar3;
	struct<56> Var4;
	var uVar62;
	int iVar63;
	bool bVar64;
	int iVar65;
	struct<3> Var66;
	struct<3> Var69;
	struct<3> Var72;
	float fVar75;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar65 = 0;
	}
	else
	{
		iVar65 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar65 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var66 = { *uParam5 };
						if (func_52(uParam5->f_4) || !unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var66)))
						{
							iVar65 += 4;
						}
						break;
					
					case 1:
						Var66 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_51(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var66)))
						{
							iVar65 += 4;
						}
						break;
					
					case 2:
						Var66 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_51(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Var66)))
						{
							iVar65 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar65 += 4;
		}
	}
	if (func_13(*uParam0, &Var0, iVar65, iParam3, 1))
	{
	}
	else
	{
		bVar64 = true;
	}
	if (bVar64)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_25 > 0f)
		{
			Var4.f_6 = uParam6->f_25;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar63 = 0;
		while (iVar63 < 2)
		{
			Var4.f_38[iVar63 /*3*/] = { uParam6->f_13[iVar63 /*3*/] };
			Var4.f_45[iVar63] = uParam6->f_20[iVar63];
			iVar63++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_138(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var69 = { *uParam5 };
				fVar75 = uParam5->f_4;
				break;
			
			case 1:
				Var69 = { uParam5->f_8 };
				Var72 = { uParam5->f_11 };
				break;
			
			case 2:
				Var69 = { uParam5->f_8 };
				Var72 = { uParam5->f_11 };
				fVar75 = uParam5->f_14;
				break;
		}
		if (!func_12(Var0, uParam5->f_7, Var69, Var72, fVar75))
		{
			if (func_13(*uParam0, &Var0, iVar65, iParam3, 0))
			{
				if (!func_12(Var0, uParam5->f_7, Var69, Var72, fVar75))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var69 + Var72 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var69 };
					}
					if (unk_0x87AA1B4BA52B1360(Var0, &uVar62, 0))
					{
						Var0.f_2 = uVar62;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var69 + Var72 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var69 };
				}
				if (unk_0x87AA1B4BA52B1360(Var0, &uVar62, 0))
				{
					Var0.f_2 = uVar62;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404994.f_616 = 1;
}

int func_12(struct<3> Param0, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (unk_0x2A488C176D52CCA5(Param0, Param4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_49(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x1FA2886237245376(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_13(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_48(Param0, uParam3))
	{
		if (func_14(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0x97FC103562922B9C(Param0, 0, uParam3, iParam4))
	{
		if (func_14(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_14(struct<3> Param0, var uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_29(Global_2404994.f_493, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_21(*uParam3, 1056964608))
			{
				if (!func_15(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_15(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_20(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2410138[iVar4])
	{
		if (func_19(Var1, &(Global_2409309[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_16(&Var1, Global_2409309[iVar4 /*92*/][iVar0 /*7*/], Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410138[8])
	{
		if (func_19(Var1, &(Global_2409309[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_16(&Var1, Global_2409309[iVar4 /*92*/][iVar0 /*7*/], Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_16(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_18(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0xA9655095F6A4F24D(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_17(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_17(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = unk_0x2A488C176D52CCA5(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_18(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_18(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0xA9655095F6A4F24D(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_17(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_17(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (unk_0x2A488C176D52CCA5(Var10, *uParam0, uParam0->f_1, 0f) < unk_0x2A488C176D52CCA5(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

float func_17(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_18(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

bool func_19(struct<3> Param0, var uParam3)
{
	return unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_20(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410148[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410148[1])
	{
		if (Param0.f_0 < Global_2410152[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410148[2])
	{
		if (Param0.f_0 < Global_2410152[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410152[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410152[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_21(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_26(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		if (Global_1632166.f_43047 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1632166.f_43047)
			{
				if (Global_1632166.f_43048[iVar0 /*59*/].f_7 != 0)
				{
					if (func_22(Param0, Global_1632166.f_43048[iVar0 /*59*/], Global_1632166.f_43048[iVar0 /*59*/].f_6, Global_1632166.f_43048[iVar0 /*59*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1632166.f_40786 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1632166.f_40786)
			{
				if (Global_1632166.f_40789[iVar0 /*92*/].f_16 != 0)
				{
					if (func_22(Param0, Global_1632166.f_40789[iVar0 /*92*/], Global_1632166.f_40789[iVar0 /*92*/].f_3, Global_1632166.f_40789[iVar0 /*92*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1632166.f_55074 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1632166.f_55074)
			{
				if (Global_1632166.f_55078[iVar0 /*137*/].f_12 != 0)
				{
					if (func_22(Param0, Global_1632166.f_55078[iVar0 /*137*/], Global_1632166.f_55078[iVar0 /*137*/].f_3, Global_1632166.f_55078[iVar0 /*137*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_22(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_25(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_24(&Var0, 0f, 0f, fParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_23(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0xC3D3EC28F0EB3C6D((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0xC3D3EC28F0EB3C6D((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0xC3D3EC28F0EB3C6D((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0x1FA2886237245376(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_23(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0xA8DA2E2DC299ED17(iParam0))
	{
		unk_0xB1C5AB29009DDB95(iParam0, fParam1, fParam2);
	}
	if (unk_0x652D2EEEF1D3E62C(*fParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*fParam2) <= 0.01f)
	{
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_24(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_0);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_1);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_2);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_25(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_23(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_26(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_27(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589933[iParam0 /*601*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_27(int iParam0)
{
	return func_28(iParam0);
}

bool func_28(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

int func_29(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_41(Param0))
	{
		if (func_40(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_32(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_31(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (unk_0x2A488C176D52CCA5(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_30(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_30(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_24(&Var0, 0f, 0f, unk_0xB5FEA1F26F05B9F5(0f, 360f));
		}
		else
		{
			func_24(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

int func_31(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404994.f_2258[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_32(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_37(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_34(&Var2, &(Global_2404994.f_355[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_37(Var2, &uVar1) || func_33(Var2))
			{
				Var2 = { *uParam0 };
				func_34(&Var2, &(Global_2404994.f_355[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_33(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404994.f_561 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404994.f_558);
		if (fVar0 < Global_2404994.f_561)
		{
			return 1;
		}
	}
	return 0;
}

void func_34(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_36(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404994.f_2256) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_36(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_36(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_30(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404994.f_2256) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_35(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_16(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_35(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

Vector3 func_36(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_30(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_35(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_16(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x3A6A7A8FACA42CE3(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_137(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_49(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x1FA2886237245376(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_37(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_39();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404994.f_355[iVar0 /*12*/].f_9 == 1)
		{
			if (func_38(Param0, &(Global_2404994.f_355[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_38(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_137(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404994.f_2256) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_49(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x1FA2886237245376(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404994.f_355[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_40(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409172[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409172[iVar0 /*17*/].f_16))
			{
				if (func_38(*uParam0, &(Global_2409172[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2409172[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409172[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_34(&Var1, &(Global_2409172[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_40(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_34(&Var1, &(Global_2409172[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_41(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404994.f_496)
	{
		if (!Global_2404994.f_43.f_311)
		{
			if (!func_45(unk_0xFB6B3EEFAB2DD12C(), 1))
			{
				return 1;
			}
			if (!func_44(Param0, 1008981770))
			{
				if (!func_40(&Param0, 0, 0, 0))
				{
					return 1;
				}
				else if (func_40(&Param0, 0, 1, 0))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_43(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_42(&(Global_2404994.f_43[iVar0 /*12*/])) };
					if (!func_40(&Var1, 0, 0, 0))
					{
						if (!func_40(&Param0, 0, 0, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_42(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_43(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404994.f_43[iVar0 /*12*/].f_9)
		{
			if (func_38(Param0, &(Global_2404994.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_44(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404994.f_43[iVar0 /*12*/].f_9)
		{
			if (func_38(Param0, &(Global_2404994.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_45(int iParam0, bool bParam1)
{
	if (Global_1312443 != 0)
	{
		return func_46(iParam0) != 0;
	}
	return func_26(iParam0, bParam1);
}

int func_46(int iParam0)
{
	if (func_47(iParam0, 0, 1))
	{
		return Global_2421621[iParam0 /*358*/].f_1;
	}
	return 0;
}

int func_47(int iParam0, bool bParam1, bool bParam2)
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

int func_48(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404994.f_1815 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404994.f_1815)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404994.f_1816[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404994.f_1816[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_49(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_50(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_50(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_51(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param0.f_0 > Param3.f_0)
	{
		Var3.f_0 = Param0.f_0;
		Var0.f_0 = Param3.f_0;
	}
	else
	{
		Var3.f_0 = Param3.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param3.f_1)
	{
		Var3.f_1 = Param0.f_1;
		Var0.f_1 = Param3.f_1;
	}
	else
	{
		Var3.f_1 = Param3.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param3.f_2)
	{
		Var3.f_2 = Param0.f_2;
		Var0.f_2 = Param3.f_2;
	}
	else
	{
		Var3.f_2 = Param3.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (unk_0x652D2EEEF1D3E62C(Var3 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_52(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_53(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404994.f_2044.f_1 == 0 && Global_2404994.f_2044 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x9F963199250B6023(&(Global_2404994.f_2044.f_1)))
			{
				case 0:
					func_123(uParam1, uParam2);
					if (!Global_2404994.f_2044.f_2)
					{
						if (uParam2->f_7 && Global_2404994.f_525.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_10[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
							}
							if (uParam1->f_5 && func_10(Global_2404994.f_476))
							{
								if (!Global_2404994.f_2044.f_5)
								{
									Global_2404994.f_2044.f_5 = 1;
								}
								else
								{
									func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_11(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_123(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xE9B2C327B97A0FE2())
		{
			if (!unk_0x67CEA645920D77B3())
			{
				if (unk_0x7552418F5ADA016B())
				{
					func_123(uParam1, uParam2);
					Global_2404994.f_2044.f_1 = unk_0x90D3312D14B7087F();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xFFDCA3284D1BB27E();
				func_123(uParam1, uParam2);
				if (!Global_2404994.f_2044.f_2)
				{
					Global_2404994.f_2044.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_120(Global_2404994.f_525, &(Global_2404994.f_2044.f_34), &(Global_2404994.f_2044.f_67));
	}
	if (uParam2->f_7 && !Global_2404994.f_2044.f_4)
	{
		Global_2404994.f_2044.f_4 = 1;
		func_61(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2404994.f_2044.f_1 > 0 || Global_2404994.f_2044 > 0)
	{
		if (uParam1->f_5 || unk_0xE9B2C327B97A0FE2())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404994.f_2044.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404994.f_2044.f_3)
					{
						iVar4 = Global_2404994.f_2044.f_3 + 1;
					}
					if (iVar4 > (Global_2404994.f_2044.f_1 - 1))
					{
						iVar4 = (Global_2404994.f_2044.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x5EF985FA07E6F1E5(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x90EED921185F6A10(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x0525FDD030AB268F(iVar4);
					}
					else
					{
						unk_0x8B60801B70487753(iVar4, &iVar5);
					}
					func_61(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404994.f_2044.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2404994.f_2044.f_1;
		}
		if (Global_2404994.f_2044.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2404994.f_2349)
			{
				func_55(&(Global_2404994.f_2044.f_6[0 /*9*/]), &(Global_2404994.f_2044.f_6[1 /*9*/]), &(Global_2404994.f_2044.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_10(Global_2404994.f_476))
			{
				if (Global_2404994.f_2044.f_2)
				{
					func_9(uParam0, &(Global_2404994.f_2044.f_6));
					func_54(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
					func_54(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404994.f_2044.f_2)
			{
				func_9(uParam0, &(Global_2404994.f_2044.f_6));
				func_54(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x7BC26452241AC7C9(0, Global_2404994.f_2044.f_1);
				unk_0x5EF985FA07E6F1E5(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_15(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_54(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
					func_54(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
				func_54(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404994.f_2019 };
		if (uParam1->f_5 && func_10(Global_2404994.f_476))
		{
			if (!Global_2404994.f_2044.f_5)
			{
				Global_2404994.f_2044.f_5 = 1;
			}
			else
			{
				func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_11(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_10[0] = unk_0xB5FEA1F26F05B9F5(0f, 360f);
		func_54(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_54(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404994.f_2155[(3 - iVar0) /*3*/] = { Global_2404994.f_2155[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404994.f_2155[0 /*3*/] = { Param0 };
}

void func_55(var uParam0, var uParam1, var uParam2)
{
	if (func_10(Global_2404994.f_476) && func_60() < 4096)
	{
		func_59(uParam0, 0f);
		func_59(uParam1, uParam0->f_2);
		func_59(uParam2, uParam1->f_2);
	}
	else
	{
		func_58(uParam0);
		func_57(uParam2, uParam0->f_4);
		func_56(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_56(var uParam0, struct<3> Param1, struct<3> Param4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407344[iVar0 /*9*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407344[iVar0 /*9*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407344[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407344[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_57(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<9> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407344[iVar0 /*9*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407344[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407344[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_58(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			if (Global_2407344[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407344[iVar0 /*9*/].f_1;
				Var2 = { Global_2407344[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_59(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			if (Global_2407344[iVar0 /*9*/].f_2 < fVar1 && Global_2407344[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407344[iVar0 /*9*/].f_2;
				Var2 = { Global_2407344[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_60()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407344[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_61(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	bool bVar14;
	int iVar15;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	int iVar23;
	struct<9> Var24;
	bool bVar33;
	bool bVar34;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404994.f_476 == 1)
		{
			if (unk_0xC3D3EC28F0EB3C6D((Global_2404994.f_493.f_2 - Param0.f_2)) < 25f)
			{
				iVar7++;
			}
		}
		else
		{
			iVar7++;
		}
	}
	else
	{
		iVar7++;
	}
	if (uParam4->f_5)
	{
		if (func_117(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (iParam7 == -1)
			{
				bVar8 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar8 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar7 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar7 += 2;
		}
	}
	else
	{
		iVar7 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_116(Param0, 1084227584, 1123024896, 0))
		{
			iVar7 += 4;
		}
	}
	else
	{
		iVar7 += 4;
	}
	if (uParam4->f_5)
	{
		if (!unk_0x09B441F779ACD938(unk_0xD5A676B97920D126(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x09B441F779ACD938(unk_0xD5A676B97920D126(), Param0, 20f))
		{
			iVar7 += 8;
		}
	}
	else
	{
		iVar7 += 8;
		iVar7 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_115(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	bVar14 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (unk_0x652D2EEEF1D3E62C(uParam5->f_13[iVar10 /*3*/]) > 0f)
		{
			if (!unk_0x2A488C176D52CCA5(Param0, uParam5->f_13[iVar10 /*3*/]) > uParam5->f_20[iVar10])
			{
				bVar14 = false;
			}
		}
		iVar10++;
	}
	if (bVar14)
	{
		iVar7 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_109(Param0, fParam3, uParam4->f_15, func_114(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404994.f_3;
		}
	}
	else if (!func_106(Param0, 25f, unk_0xFB6B3EEFAB2DD12C(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_105(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_105(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404994.f_638)
		{
			Var11 = { Global_2404994.f_493 };
			if (Global_2404994.f_476 == 26)
			{
				Var11 = { Global_2404994.f_525.f_18 };
			}
			if (func_41(Var11))
			{
				if (!func_40(&Param0, 0, 0, 0) && !func_104(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if (!func_104(&Param0, 0) && !func_31(Param0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_103(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_102(unk_0xFB6B3EEFAB2DD12C()) && func_100(unk_0xFB6B3EEFAB2DD12C())))
		{
			if (!func_99(&Param0, &(Global_2404994.f_2044.f_67), 0, 1065353216))
			{
				iVar7 += 1024;
			}
		}
		else
		{
			iVar7 += 1024;
		}
	}
	else
	{
		iVar7 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_100(unk_0xFB6B3EEFAB2DD12C()))
		{
			if (!func_98(Param0, &(Global_2404994.f_2044.f_34), &(Global_2404994.f_2044.f_67), 1073741824))
			{
				iVar7 += 2048;
			}
		}
		else
		{
			iVar7 += 2048;
		}
	}
	else
	{
		iVar7 += 2048;
	}
	if (func_97(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_10(Global_2404994.f_476))
			{
				if (func_44(Param0, 0.01f))
				{
					iVar7 += 4096;
				}
			}
			else
			{
				iVar7 += 4096;
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_96(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404994.f_43.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x7B66213B5E371C3F(unk_0x21CE631D8E3F8ECA(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404994.f_638)
		{
			if (!func_32(&Param0, 0, 0))
			{
				iVar7 = (iVar7 + 32768);
			}
		}
		else
		{
			iVar7 = (iVar7 + 32768);
		}
	}
	else
	{
		iVar7 = (iVar7 + 32768);
	}
	if (!func_15(&Param0, 0))
	{
		iVar7 = (iVar7 + 65536);
	}
	else
	{
		iVar15 = func_43(Param0, 1008981770);
		if (iVar15 > -1)
		{
			func_95(Param0, &Var16, &Var19, &fVar22);
			if (!func_90(&(Global_2404994.f_43[iVar15 /*12*/]), Var16, Var19, fVar22))
			{
				iVar7 = -1;
			}
		}
		else
		{
			iVar7 = -1;
		}
	}
	if (func_21(Param0, 1056964608))
	{
		iVar7 = -1;
	}
	if (uParam4->f_5)
	{
	}
	else if (func_89(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var24.f_2 = 1176256410;
	bVar33 = false;
	bVar34 = false;
	if (Global_2404994.f_2349 && uParam4->f_5)
	{
		if (iVar7 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_81(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			else
			{
				fVar0 = func_81(Param0, Global_2404994.f_2019, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_10(Global_2404994.f_476) && iVar7 < 4096)
			{
				Var24.f_2 = func_79(Param0);
			}
			Var24.f_4 = { Param0 };
			Var24.f_7 = fParam3;
			Var24.f_0 = iVar7;
			Var24.f_1 = fVar0;
			func_78(Var24);
			Global_2404994.f_2044.f_2 = 1;
		}
	}
	else
	{
		iVar23 = 0;
		while (iVar23 < 3)
		{
			if (iVar7 >= Global_2404994.f_2044.f_6[iVar23 /*9*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar33)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_81(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						else
						{
							fVar0 = func_81(Param0, Global_2404994.f_2019, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar33 = true;
					}
					if ((func_10(Global_2404994.f_476) && iVar7 == Global_2404994.f_2044.f_6[iVar23 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar34)
						{
							fVar2 = func_79(Param0);
							bVar34 = true;
						}
						if (fVar2 < Global_2404994.f_2044.f_6[iVar23 /*9*/].f_2)
						{
							Var24.f_4 = { Param0 };
							Var24.f_7 = fParam3;
							Var24.f_0 = iVar7;
							Var24.f_1 = fVar0;
							Var24.f_2 = fVar2;
							func_77(Var24, iVar23);
							Global_2404994.f_2044.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2404994.f_2044.f_6[iVar23 /*9*/] || (iVar7 == Global_2404994.f_2044.f_6[iVar23 /*9*/] && fVar0 > Global_2404994.f_2044.f_6[iVar23 /*9*/].f_1))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_1 = fVar0;
						func_77(Var24, iVar23);
						Global_2404994.f_2044.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar33)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_76(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_63(Param0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_62(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_62(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar33 = true;
					}
					if (iVar7 > Global_2404994.f_2044.f_6[iVar23 /*9*/] || (iVar7 == Global_2404994.f_2044.f_6[iVar23 /*9*/] && fVar3 > Global_2404994.f_2044.f_6[iVar23 /*9*/].f_3))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_3 = fVar3;
						func_77(Var24, iVar23);
						Global_2404994.f_2044.f_2 = 1;
						return;
					}
				}
			}
			iVar23++;
		}
	}
}

float func_62(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_63(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_47(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0xFB6B3EEFAB2DD12C() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_66(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x2A7336F1C6B39623(iVar11) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
					{
						if (!unk_0x2A7336F1C6B39623(iVar11) == -1 || !func_45(unk_0xFB6B3EEFAB2DD12C(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar11) || !bParam6)
					{
						if (func_65(iVar11))
						{
							Var5 = { func_64(iVar11) };
							if (!iVar11 == unk_0xFB6B3EEFAB2DD12C())
							{
								Var8 = { unk_0x17518BAFABBB281B(unk_0x4572B13EE70C8F52(iVar11)) };
							}
							else
							{
								Var8 = { Var5 };
							}
							if (!bParam6)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var8.f_2 < -100f)
								{
									Var8.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x8E92CDAEB8357ABD(Param0, Var5, 1);
							fVar2 = unk_0x8E92CDAEB8357ABD(Param0, Var8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_64(int iParam0)
{
	return unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iParam0), 0);
}

int func_65(int iParam0)
{
	if (unk_0x9D404C556EC6ABF6(unk_0x4572B13EE70C8F52(iParam0)) || Global_2421621[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0)
{
	if (func_47(iParam0, 0, 1))
	{
		if (!func_74(iParam0))
		{
			if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iParam0))
			{
				if (!unk_0x2A7336F1C6B39623(iParam0) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
				{
					if (func_26(unk_0xFB6B3EEFAB2DD12C(), 1))
					{
						if (!func_73(unk_0x2A7336F1C6B39623(iParam0), unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x2A7336F1C6B39623(iParam0) == -1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
				{
					if (!func_26(unk_0xFB6B3EEFAB2DD12C(), 1))
					{
						if (!func_67(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_67(int iParam0)
{
	if (func_72(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	Global_2482005 = { func_71(iParam0) };
	if (unk_0xBB38DDB2E1AE0498(&Global_2482005))
	{
		return 1;
	}
	if (func_68(unk_0xFB6B3EEFAB2DD12C(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (!iVar0 == func_69())
	{
		if (iVar0 == func_70(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_69()
{
	return -1;
}

int func_70(int iParam0)
{
	if (iParam0 != func_69())
	{
		return Global_1618089[iParam0 /*390*/].f_11;
	}
	return func_69();
}

struct<13> func_71(var uParam0)
{
	struct<13> Var0;
	
	unk_0x81C63D2370ED33C5(uParam0, &Var0, 13);
	return Var0;
}

int func_72(int iParam0, var uParam1)
{
	if (unk_0x527DE7DC62A1D335())
	{
		Global_2482005 = { func_71(iParam0) };
		Global_2482018 = { func_71(uParam1) };
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

int func_73(int iParam0, int iParam1, int iParam2)
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

int func_74(int iParam0)
{
	if (func_134(iParam0, 0))
	{
		return 1;
	}
	if (func_75())
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

bool func_75()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

float func_76(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_47(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (!unk_0x7E3640C27B17457C())
			{
				if (unk_0xBB36CABE30AE5FC4(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_47(iVar1, 1, 1))
		{
			if (!func_134(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xFB6B3EEFAB2DD12C()))
				{
					if (func_65(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2A7336F1C6B39623(iVar1) != unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))) || unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x2A7336F1C6B39623(iVar1) != iParam7 || unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xC086F8D75730FA3A(unk_0x4572B13EE70C8F52(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return unk_0x71D93B57D07F9804(fVar3);
	}
	return -1f;
}

void func_77(struct<9> Param0, int iParam9)
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404994.f_2044.f_6[iParam9 /*9*/] };
	Global_2404994.f_2044.f_6[iParam9 /*9*/] = { Param0 };
	if (iParam9 < 2)
	{
		func_77(Var0, iParam9 + 1);
	}
}

void func_78(struct<9> Param0)
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	float fVar11;
	int iVar12;
	
	Var1.f_2 = 1176256410;
	iVar10 = func_60();
	if (Param0.f_0 > iVar10)
	{
		iVar10 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] < iVar10)
		{
			Global_2407344[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar10)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] == 0)
		{
			Global_2407344[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar11 = 9999.9f;
	iVar12 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407344[iVar0 /*9*/] > 0)
		{
			if (Global_2407344[iVar0 /*9*/].f_1 < fVar11)
			{
				fVar11 = Global_2407344[iVar0 /*9*/].f_1;
				iVar12 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar12 > -1)
	{
		Global_2407344[iVar12 /*9*/] = { Param0 };
	}
}

float func_79(struct<3> Param0)
{
	var uVar0;
	
	return func_80(Param0, &(Global_2404994.f_43), &uVar0);
}

float func_80(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404994.f_2256) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_81(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (unk_0xBBDA792448DB5A89(iParam9) / unk_0xBBDA792448DB5A89(8));
	}
	if (bParam6)
	{
		fVar0 = func_62(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_63(Param0, 1, 0, 0, 1);
	fVar0 = func_62(fVar4, 0f, func_88(), func_86(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_84(Param0);
	fVar0 = func_62(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && !func_45(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_83(Param0, unk_0xFB6B3EEFAB2DD12C(), 0);
	fVar0 = func_62(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_82(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_62(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_62(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_62(unk_0x2A488C176D52CCA5(Global_2404994.f_493, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_82(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x41C8568FB0571C52(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0xF669A52DFC02740C(uVar3))
	{
		unk_0x2C9EE1500AAEA57C(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0xC3D3EC28F0EB3C6D((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_83(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!iParam3 == iVar2 || iParam4 == 1)
		{
			iVar3 = iVar2;
			if (func_47(iVar3, 0, 1))
			{
				if (unk_0x2A7336F1C6B39623(iVar3) != unk_0x2A7336F1C6B39623(iParam3) || (unk_0x2A7336F1C6B39623(iVar3) == -1 && unk_0x2A7336F1C6B39623(iParam3) == -1))
				{
					if (Global_2415705.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2415705.f_130[iVar2 /*3*/], Param0);
						if (fVar1 < fVar0)
						{
							fVar0 = fVar1;
						}
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

float func_84(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x2B7034B7B7F5EA19(unk_0xD5A676B97920D126(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x7887B64A08364778(uVar6[iVar2]))
		{
			if (!unk_0xB529B2A4B7C64D6D(uVar6[iVar2], 0))
			{
				if (func_85(uVar6[iVar2]))
				{
					Var3 = { unk_0xC086F8D75730FA3A(uVar6[iVar2], 1) };
					fVar1 = unk_0x8E92CDAEB8357ABD(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_85(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x627440686F6E9BBB(uParam0);
	switch (unk_0x57BF91AE106AF0F8(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0x57BF91AE106AF0F8(uVar0, Global_1574648[unk_0xFB6B3EEFAB2DD12C()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/] == 0)
	{
		iVar1 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0x57BF91AE106AF0F8(uVar0, Global_1574359[iVar1]))
			{
				case 3:
				case 5:
					return 1;
					break;
				}
			}
	}
	return 0;
}

float func_86()
{
	if (func_87())
	{
		if ((unk_0x825416FB822BF706(Global_2404994.f_43.f_67) || unk_0x4B09D3321F53E524(Global_2404994.f_43.f_67)) || Global_2404994.f_43.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_87()
{
	if (Global_2404994.f_43.f_65 && !Global_2404994.f_43.f_298)
	{
		if (!func_74(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 1;
		}
	}
	return 0;
}

float func_88()
{
	if (func_87())
	{
		if ((unk_0x825416FB822BF706(Global_2404994.f_43.f_67) || unk_0x4B09D3321F53E524(Global_2404994.f_43.f_67)) || Global_2404994.f_43.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_89(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x9B85F36406C920C4(Param0, fParam7)) || (fVar0 > 0f && unk_0x4FC351BF8E970FDA(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x8341BF4B03057509(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x8341BF4B03057509(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_90(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_94(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_93(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_91(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_91(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_92(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x1FA2886237245376(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_92(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	var uVar7;
	
	if (Param0.f_2 == Param3.f_2)
	{
		Param3.f_2 = (Param3.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param3 };
	Var3 = { func_18(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var3 = { Var3 / FtoV(unk_0x652D2EEEF1D3E62C(Var3)) };
	Var3 = { Var3 * FtoV((fParam6 * 0.5f)) };
	if (Param0.f_2 > Param3.f_2)
	{
		uVar6 = Param3.f_2;
		uVar7 = Param0.f_2;
	}
	else
	{
		uVar6 = Param0.f_2;
		uVar7 = Param3.f_2;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) + Var3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) + Var3 };
}

int func_93(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
{
	struct<3> Var0[8];
	int iVar25;
	
	Var0[0 /*3*/] = { Param0.f_0, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.f_0, Param0.f_1, Param3.f_2 };
	Var0[2 /*3*/] = { Param0.f_0, Param3.f_1, Param3.f_2 };
	Var0[3 /*3*/] = { Param0.f_0, Param3.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param3.f_0, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param3.f_0, Param0.f_1, Param3.f_2 };
	Var0[6 /*3*/] = { Param3.f_0, Param3.f_1, Param3.f_2 };
	Var0[7 /*3*/] = { Param3.f_0, Param3.f_1, Param0.f_2 };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x1FA2886237245376(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_94(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	struct<3> Var0[4];
	int iVar13;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam3, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam3), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam3) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!unk_0x1FA2886237245376(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_95(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_20(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2410138[iVar4])
	{
		if (func_19(Var1, &(Global_2409309[iVar4 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409309[iVar4 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409309[iVar4 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410138[8])
	{
		if (func_19(Var1, &(Global_2409309[8 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409309[8 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409309[8 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409309[8 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_96(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404994.f_43.f_55)
	{
		if (unk_0x7B66213B5E371C3F(Global_2404994.f_43.f_56))
		{
			if (!unk_0x2A962D5F6CB393D4(Param0))
			{
				uVar0 = unk_0x21CE631D8E3F8ECA(Param0);
				if (unk_0x7B66213B5E371C3F(uVar0))
				{
					iVar1 = unk_0x1A315FE9AC133A2D(uVar0);
					if (!iVar1 == Global_2404994.f_43.f_57)
					{
						return 0;
					}
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
	}
	return 1;
}

int func_97(struct<3> Param0)
{
	switch (Global_2404994.f_2040)
	{
		case 0:
			return func_137(Param0, Global_2404994.f_2019, Global_2404994.f_2022, 0, 0);
			break;
		
		case 1:
			return func_49(Param0, Global_2404994.f_2033, Global_2404994.f_2036, 0, 0);
			break;
		
		case 2:
			return unk_0x1FA2886237245376(Param0, Global_2404994.f_2033, Global_2404994.f_2036, Global_2404994.f_2039, 0, 1);
			break;
	}
	return 0;
}

int func_98(struct<3> Param0, var uParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (unk_0x2A488C176D52CCA5(*(uParam3[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		Var2 = { *(uParam4[iVar1 /*10*/]) };
		Var5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (unk_0x1FA2886237245376(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_99(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (unk_0x2A488C176D52CCA5((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_30(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_100(int iParam0)
{
	switch (Global_1312443)
	{
		case 0:
			if (!func_101(iParam0))
			{
				if (Global_1589933[iParam0 /*601*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_101(int iParam0)
{
	return Global_1589933[iParam0 /*601*/].f_187 != 0;
}

int func_102(int iParam0)
{
	if (func_26(iParam0, 1))
	{
		if (Global_1589933[iParam0 /*601*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_103(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404994.f_2155[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_104(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_33(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0xB5FEA1F26F05B9F5(0.01f, 360f);
			func_30(&Var1, Global_2404994.f_558, Global_2404994.f_561, 1036831949, 0, fVar4);
			if (func_37(Var1, &uVar0) || func_33(Var1))
			{
				Var1 = { *uParam0 };
				func_30(&Var1, Global_2404994.f_558, Global_2404994.f_561, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_105(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_47(unk_0xFB6B3EEFAB2DD12C(), 1, 1))
		{
			if (!unk_0x7E3640C27B17457C())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x8E92CDAEB8357ABD(func_64(unk_0xFB6B3EEFAB2DD12C()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xBB36CABE30AE5FC4(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_47(iVar1, 1, 1))
		{
			if (!func_134(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xFB6B3EEFAB2DD12C()))
				{
					if ((func_65(iVar1) || !bParam10) && !Global_2421621[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2A7336F1C6B39623(iVar1) != unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))) || unk_0x2A7336F1C6B39623(iVar1) == -1)
							{
								if (unk_0x8E92CDAEB8357ABD(func_64(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x2A7336F1C6B39623(iVar1) != iParam8 || unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x8E92CDAEB8357ABD(func_64(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_106(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_108(Param0, fParam3, iParam4, iParam5, 0) || func_107(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_107(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2415705.f_556[iVar0] == 0)
			{
				if (func_22(Param0, Global_2415705.f_426[iVar0 /*3*/], Global_2415705.f_523[iVar0], Global_2415705.f_556[iVar0], 1036831949))
				{
					if (func_47(iVar1, 0, 1) && func_47(iParam3, 0, 1))
					{
						return 1;
					}
					else
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_108(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_47(iVar1, 0, 1) && func_47(iParam4, 0, 1))
				{
					if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_47(iVar1, 0, 1) && func_47(iParam4, 0, 1))
				{
					if (Global_2415705.f_260[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2415705.f_130[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_64(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2415705.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2415705.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_47(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_64(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_109(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404994.f_3 = 0;
	if (!func_106(Param0, 0.5f, unk_0xFB6B3EEFAB2DD12C(), 0, 0))
	{
		Global_2404994.f_3++;
		if (bParam5)
		{
			if (func_158(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
				if (!func_113(Param0, fParam12))
				{
					Global_2404994.f_3++;
					if (!func_21(Param0, 1056964608))
					{
						Global_2404994.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_158(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
				if (!func_113(Param0, fParam12))
				{
					Global_2404994.f_3++;
					if (!func_110(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404994.f_3++;
						if (!func_21(Param0, 1056964608))
						{
							Global_2404994.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
			}
		}
		else if (func_158(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
			if (!func_113(Param0, fParam12))
			{
				Global_2404994.f_3++;
				if (!func_110(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404994.f_3++;
					if (!func_21(Param0, 1056964608))
					{
						Global_2404994.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404994.f_3 = (Global_2404994.f_3 + Global_2404994.f_2);
		}
	}
	return 0;
}

int func_110(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xFB6B3EEFAB2DD12C() == iVar1)
		{
			if ((func_47(iVar1, 1, 1) && func_65(iVar1)) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
			{
				if (!func_112(unk_0xFB6B3EEFAB2DD12C(), iVar1, -2, 0))
				{
					if (func_111(func_64(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_111(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	Var0.f_0 = unk_0x0BADBFA3B172435F(fParam6);
	Var0.f_1 = unk_0xD0FFB162F40A139C(fParam6);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	Var0 = { Var0 * Vector(fParam7, fParam7, fParam7) };
	Var3 = { Param3 + Var0 };
	Var3.f_2 = Param3.f_2;
	Var3.f_2 = (Var3.f_2 + fParam9);
	Param3.f_2 = (Param3.f_2 + fParam9);
	return unk_0x1FA2886237245376(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_112(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_113(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_47(iVar1, 1, 1) && func_65(iVar1)) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
		{
			if ((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && unk_0x2A7336F1C6B39623(iVar1) == -1) && !func_45(unk_0xFB6B3EEFAB2DD12C(), 1))
			{
				return 0;
			}
			else if ((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && !unk_0xFB6B3EEFAB2DD12C() == iVar1) || !func_112(unk_0xFB6B3EEFAB2DD12C(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_64(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_114(int iParam0)
{
	if ((Global_2404994.f_476 == 9 || Global_2404994.f_476 == 9) || (Global_2404994.f_476 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_115(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xFB6B3EEFAB2DD12C() != iVar1) || iParam8 == 0)
		{
			if (func_47(iVar1, bParam4, bParam5))
			{
				if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
				{
					if (!bParam7 || (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar1)) && func_65(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) != unk_0x2A7336F1C6B39623(iVar1))) || unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
						{
							if (((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && iParam9) && bParam6) && func_67(iVar1))
							{
							}
							else if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
							{
								if (unk_0x8E92CDAEB8357ABD(func_64(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_116(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_47(iVar1, 1, 1))
			{
				if ((!func_134(iVar1, 0) && unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1)) && iVar1 != unk_0xFB6B3EEFAB2DD12C())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x2A7336F1C6B39623(iVar1) == -1)
						{
							if (unk_0x2A7336F1C6B39623(iVar1) == unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x2A7336F1C6B39623(iVar1) == iVar3)
					{
						if (unk_0x8E92CDAEB8357ABD(func_64(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x7E6D5A2E3BDED445(iVar1, Param0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	if ((func_45(iParam0, 1) || func_119(iParam0)) || func_118(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0, int iParam1)
{
	if (Global_1618089[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1618089[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1618089[iVar0 /*390*/] != -1;
	}
	return 0;
}

void func_120(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var6;
	struct<3> Var16;
	struct<3> Var19;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var6 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!unk_0xF44A5E894FE76438(Global_2359719[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359719[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359719[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359719[iVar1 /*26*/].f_6.f_2;
					func_122(&Var2, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			Var16 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var19 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (unk_0x652D2EEEF1D3E62C(*(uParam4[iVar0 /*10*/])) == 0f || unk_0x2A488C176D52CCA5(Var16, Param0) < unk_0x2A488C176D52CCA5(Var19, Param0))
			{
				Var6 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var6.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var6.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var6.f_7 = { Global_2359395[iVar1 /*3*/] };
				func_121(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_121(var uParam0, var uParam1, int iParam2)
{
	Global_2411136 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_121(&Global_2411136, uParam1, iParam2 + 1);
	}
}

void func_122(var uParam0, var uParam1, int iParam2)
{
	Global_2411132 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_122(&Global_2411132, uParam1, iParam2 + 1);
	}
}

void func_123(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404994.f_1815 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404994.f_1815)
		{
			if (func_124(Global_2404994.f_1816[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404994.f_1816[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404994.f_1816[iVar0 /*4*/] };
					fVar4 = unk_0x1467106C5D2966B9(Var1.f_0, Var1.f_1);
				}
				func_61(Global_2404994.f_1816[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404994.f_2044++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2404994.f_2349)
	{
		func_55(&(Global_2404994.f_2044.f_6[0 /*9*/]), &(Global_2404994.f_2044.f_6[1 /*9*/]), &(Global_2404994.f_2044.f_6[2 /*9*/]));
	}
}

int func_124(struct<3> Param0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_12(Param0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_12(Param0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_125(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_50(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

void func_126()
{
	func_131();
	func_130();
	func_129();
	func_128();
	func_127();
}

void func_127()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 128)
	{
		Global_2407344[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_128()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404994.f_2044.f_67[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_129()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404994.f_2044.f_34[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_130()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 3)
	{
		Global_2404994.f_2044.f_6[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_131()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404994.f_2044 = { Var0 };
}

var func_132()
{
	return Global_1310987.f_4;
}

void func_133(var uParam0, var uParam1)
{
	func_159();
	func_157(uParam0, uParam1);
}

bool func_134(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_135(-1, 0) == 8;
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

int func_135(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_136();
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

int func_136()
{
	return Global_1312731;
}

bool func_137(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
}

void func_138(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404994.f_1685 > 0 && func_156(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_139(uParam0, uParam1, uParam2);
	}
}

void func_139(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar28;
	struct<3> Var29;
	float fVar32;
	bool bVar33;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_29(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_155(uParam0, 1))
		{
		}
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2411146.f_162 = 0;
	Global_2411146.f_163 = 0;
	Global_2411146.f_164 = -99;
	Global_2411146.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411146[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411146.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0x41C8568FB0571C52(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xF669A52DFC02740C(iVar8))
		{
			unk_0x2C9EE1500AAEA57C(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411146.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411146.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x22A8AA230C8648B4(iVar8)) || unk_0xDE4C795F44220EAC(iVar8))
			{
				unk_0x1E9574637C99DDAD(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_104(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_154(Var1))
									{
										Var1 = { func_152(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_21(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_151(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_155(&Var1, 0)) || uParam2->f_48 == 0)
															{
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																	}
																}
																if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_146(Var1, fVar4, uParam2->f_34, unk_0xFB6B3EEFAB2DD12C(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_29(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (uParam2->f_3 > 7f)
																					{
																						if (func_158(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					else if (func_158(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_145(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_144(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411146.f_162)
																										{
																											Global_2411146[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2411146.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2411146.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2411146.f_162 == 0)
																									{
																										Global_2411146[0 /*3*/] = { Var1 };
																										Global_2411146.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411146.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411146[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_143(Var1, fVar4, iVar16);
																													iVar16 = Global_2411146.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2411146.f_162++;
																									if (Global_2411146.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411146.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2411146[Global_2411146.f_162 /*3*/] = { Var1 };
																									Global_2411146.f_121[Global_2411146.f_162] = fVar4;
																									Global_2411146.f_162++;
																									if (func_151(Var1, uParam2))
																									{
																										Global_2411146.f_163++;
																									}
																									if (Global_2411146.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411146.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return;
																						}
																					}
																					else
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2411146.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411146[0 /*3*/] };
						*uParam1 = Global_2411146.f_121[0];
						return;
					}
					else
					{
						if (Global_2411146.f_163 > 0 && !Global_2411146.f_163 == Global_2411146.f_162)
						{
							func_141(0, uParam2);
						}
						iVar24 = unk_0x7BC26452241AC7C9(0, Global_2411146.f_162);
						Var25 = { Global_2411146[0 /*3*/] };
						uVar28 = Global_2411146.f_121[0];
						Global_2411146[0 /*3*/] = { Global_2411146[iVar24 /*3*/] };
						Global_2411146.f_121[0] = Global_2411146.f_121[iVar24];
						Global_2411146[iVar24 /*3*/] = { Var25 };
						Global_2411146.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2411146[0 /*3*/] };
						*uParam1 = Global_2411146.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_139(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x7BC26452241AC7C9((1 + iVar15), (40 + iVar15));
						unk_0x7BFF9C1108FDE842(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_152(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						fVar32 = fVar4;
						if (!uParam2->f_50)
						{
							bVar33 = true;
						}
						else
						{
							bVar33 = false;
						}
						if (func_29(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_155(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_139(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								return;
							}
						}
						else
						{
							*uParam0 = { Var29 };
							*uParam1 = fVar32;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_139(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_140(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2411146.f_164 = iVar8;
	}
}

void func_140(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_106(*(uParam0[iVar2 /*4*/]), 5f, unk_0xFB6B3EEFAB2DD12C(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_141(int iParam0, var uParam1)
{
	if (!func_151(Global_2411146[iParam0 /*3*/], uParam1))
	{
		Global_2411146.f_162 = (Global_2411146.f_162 - 1);
		func_142(iParam0);
		if (Global_2411146.f_162 > Global_2411146.f_163)
		{
			func_141(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_141(iParam0 + 1, uParam1);
	}
}

void func_142(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2411146[iParam0 /*3*/] = { Global_2411146[iParam0 + 1 /*3*/] };
			Global_2411146.f_121[iParam0] = Global_2411146.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_143(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411146[iParam4 /*3*/] };
	uVar3 = Global_2411146.f_121[iParam4];
	Global_2411146[iParam4 /*3*/] = { Param0 };
	Global_2411146.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411146.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_143(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_144(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_66(iVar5))
		{
			Var1 = { func_64(iVar5) };
			fVar7 = unk_0x2A488C176D52CCA5(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_145(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xFB6B3EEFAB2DD12C() != iVar1) || iParam9 == 0)
		{
			if (func_47(iVar1, bParam5, bParam6))
			{
				if (unk_0x1E8AEE4F02F8E526(unk_0xFB6B3EEFAB2DD12C(), iVar1))
				{
					if (!bParam8 || (!unk_0x00B5B0B68211D89B(unk_0x4572B13EE70C8F52(iVar1)) && func_65(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) != unk_0x2A7336F1C6B39623(iVar1))) || unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1)
						{
							if (((unk_0x2A7336F1C6B39623(unk_0xFB6B3EEFAB2DD12C()) == -1 && iParam10) && bParam7) && func_67(iVar1))
							{
							}
							else if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
							{
								if (func_22(func_64(iVar1), Param0, fParam3, iParam4, 1036831949))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_146(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_150(Param0, fParam3, iParam4, iParam5, iParam6) || func_147(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_147(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_149(Param0, iParam4, Global_2415705.f_426[iVar0 /*3*/], Global_2415705.f_556[iVar0]))
			{
				if (func_148(Param0, fParam3, iParam4, Global_2415705.f_426[iVar0 /*3*/], Global_2415705.f_523[iVar0], Global_2415705.f_556[iVar0], 0))
				{
					if (func_47(iVar1, 0, 1) && func_47(iParam5, 0, 1))
					{
						return 1;
					}
					else
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_148(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	float fVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_22(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_23(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0xC3D3EC28F0EB3C6D((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0xC3D3EC28F0EB3C6D((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0xC3D3EC28F0EB3C6D((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_24(&Var23, 0f, 0f, fParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_24(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * fVar22));
	Var1[1 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * fVar22));
	Var1[2 /*3*/] = { Param0 - Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * fVar22));
	Var1[3 /*3*/] = { Param0 - Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * fVar22));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_22(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_148(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_149(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_25(iParam3, 1008981770);
	fVar1 = func_25(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_150(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_47(iVar1, 0, 1) && func_47(iParam5, 0, 1))
			{
				if (Global_2415705.f_260[iVar0])
				{
					if (func_22(Global_2415705.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_22(func_64(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2415705.f_260[iVar0])
			{
				if (func_22(Global_2415705.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_47(iVar1, 0, 0))
			{
				if (unk_0x7887B64A08364778(unk_0x4572B13EE70C8F52(iVar1)))
				{
					if (func_22(func_64(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_151(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_137(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_49(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x1FA2886237245376(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_152(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	float fVar17;
	float fVar20;
	float fVar23;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_153(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x1E9574637C99DDAD(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0xA9F875A86914FAA6(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
		if (iVar11 == iVar12)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar11 + iVar12) != iParam4)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *bParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar15 = true;
		}
		else
		{
			bVar15 = false;
		}
		bVar16 = false;
		if (bVar15)
		{
			if (iVar11 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar11)
			{
				bVar16 = true;
			}
		}
		else if (iVar12 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar12)
		{
			bVar16 = true;
		}
		if (fVar13 < 0f)
		{
			fVar14 = 0f;
		}
		else
		{
			if (bVar15)
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar11) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar11));
				}
				if (bVar16)
				{
					if (iVar11 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar11 - 2)) * 1f));
					}
				}
				else if (iVar11 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar11 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar12) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar12));
				}
				if (bVar16)
				{
					if (iVar12 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar12 - 2)) * 1f));
					}
				}
				else if (iVar12 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar12 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar14 = (fVar14 + (0.95f * fVar13));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				func_23(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				if (fVar23 > 1.8f)
				{
					fVar14 = (fVar14 + ((fVar23 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_153(Param0, *fParam3, Param6))
		{
			if (bParam5)
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar14 < 0f)
	{
		fVar14 = 0f;
	}
	Var0 = { unk_0x0A0C20E171493CD0(Param0, *fParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x0BFEFDC804C62B90(Param0, *fParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_23(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				Var30 = { Var30 * FtoV((fVar23 * 0.5f)) };
				Var27 = { Var27 - Var30 };
				Var24 = { Param0 + Var27 };
			}
			Var30 = { Var0 - Var24 };
			Var0 = { Var24 };
		}
	}
	return Var0;
}

int func_153(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_24(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_17(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_154(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_20(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2410860[iVar1])
	{
		if (func_19(Param0, &(Global_2410157[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410860[8])
	{
		if (func_19(Param0, &(Global_2410157[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_155(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404994.f_26.f_16)
	{
		switch (Global_2404994.f_26.f_15)
		{
			case 0:
				if (func_137(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_49(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x1FA2886237245376(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_11, Global_2404994.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_36(*uParam0, Global_2404994.f_26.f_8, Global_2404994.f_26.f_11, Global_2404994.f_26.f_14, Global_2404994.f_26.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_156(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	struct<3> Var14;
	var uVar17;
	
	if (Global_2404994.f_1685 > 0)
	{
		iVar0 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_29(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_155(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2411146.f_162 = 0;
		Global_2411146.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2411146[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2411146.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404994.f_1685)
		{
			Var1 = { Global_2404994.f_1686[iVar0 /*4*/] };
			fVar4 = Global_2404994.f_1686[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
				{
					if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
					{
						if ((uParam2->f_12 && !func_146(Var1, fVar4, uParam2->f_34, unk_0xFB6B3EEFAB2DD12C(), 0, uParam2->f_56)) || !uParam2->f_12)
						{
							if (!uParam2->f_15 || !func_29(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
							{
								if (uParam2->f_8)
								{
									iVar6 = uParam2->f_31;
									bVar7 = true;
									iVar8 = 1;
									fVar9 = uParam2->f_49;
									if (!uParam2->f_55)
									{
										iVar6 = 0;
										bVar7 = false;
										iVar8 = 0;
										fVar9 = 1f;
									}
									else if (uParam2->f_17)
									{
										iVar6 = 0;
										bVar7 = false;
										iVar8 = 0;
										if (uParam2->f_33 == 1)
										{
											fVar9 = (fVar9 * 0.375f);
										}
									}
									else
									{
										bVar7 = true;
										iVar8 = 1;
										if (uParam2->f_28)
										{
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
									}
									bVar10 = false;
									if (uParam2->f_3 > 7f)
									{
										if (func_158(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
										{
											bVar10 = true;
										}
									}
									else if (func_158(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_145(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
									{
										bVar10 = true;
									}
									if (bVar10)
									{
										if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
										{
											fVar12 = 0f;
											if (uParam2->f_52)
											{
												iVar11 = func_144(Var1, uParam2->f_54, &fVar12);
											}
											if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
											{
												if (uParam2->f_52)
												{
													if (iVar11 < uParam2->f_53)
													{
														iVar5 = 0;
														while (iVar5 < Global_2411146.f_162)
														{
															Global_2411146[iVar5 /*3*/] = { 0f, 0f, 0f };
															Global_2411146.f_121[iVar5] = 0f;
															iVar5++;
														}
														Global_2411146.f_162 = 0;
														uParam2->f_53 = iVar11;
													}
												}
												if (uParam2->f_30)
												{
													if (Global_2411146.f_162 == 0)
													{
														Global_2411146[0 /*3*/] = { Var1 };
														Global_2411146.f_121[0] = fVar4;
													}
													else
													{
														iVar5 = 0;
														while (iVar5 < Global_2411146.f_162 + 1)
														{
															if (iVar5 < 40)
															{
																if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411146[iVar5 /*3*/], uParam2->f_35))
																{
																	func_143(Var1, fVar4, iVar5);
																	iVar5 = Global_2411146.f_162 + 1;
																}
															}
															iVar5++;
														}
													}
													Global_2411146.f_162++;
													if (Global_2411146.f_162 >= 5)
													{
														if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
														{
															iVar0 = Global_2404994.f_1685;
														}
														else if (Global_2411146.f_162 == 40)
														{
															iVar0 = Global_2404994.f_1685;
														}
													}
												}
												else
												{
													Global_2411146[Global_2411146.f_162 /*3*/] = { Var1 };
													Global_2411146.f_121[Global_2411146.f_162] = fVar4;
													Global_2411146.f_162++;
													if (Global_2411146.f_162 >= 10)
													{
														if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
														{
															iVar0 = Global_2404994.f_1685;
														}
														else if (Global_2411146.f_162 == 40)
														{
															iVar0 = Global_2404994.f_1685;
														}
													}
												}
											}
										}
										else
										{
											*uParam0 = { Var1 };
											*uParam1 = fVar4;
											return 1;
										}
									}
								}
								else
								{
									*uParam0 = { Var1 };
									*uParam1 = fVar4;
									return 1;
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2411146.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411146[0 /*3*/] };
				*uParam1 = Global_2411146.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411146.f_163 > 0 && !Global_2411146.f_163 == Global_2411146.f_162)
				{
					func_141(0, uParam2);
				}
				iVar13 = unk_0x7BC26452241AC7C9(0, Global_2411146.f_162);
				Var14 = { Global_2411146[0 /*3*/] };
				uVar17 = Global_2411146.f_121[0];
				Global_2411146[0 /*3*/] = { Global_2411146[iVar13 /*3*/] };
				Global_2411146.f_121[0] = Global_2411146.f_121[iVar13];
				Global_2411146[iVar13 /*3*/] = { Var14 };
				Global_2411146.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2411146[0 /*3*/] };
				*uParam1 = Global_2411146.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_156(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_139(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_157(var uParam0, var uParam1)
{
	unk_0x972722D5CDECF6C9(uParam0, uParam1, 0.1f);
	Global_2404994.f_2027 = unk_0x3ED6DDB11A7AD67F();
	Global_2404994.f_2025 = 1;
	Global_2404994.f_2028 = unk_0x7414B386C0020BEC();
}

int func_158(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404994.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x9B85F36406C920C4(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x4FC351BF8E970FDA(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x4FC351BF8E970FDA(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x8341BF4B03057509(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam13)
	{
		if (unk_0x844703FC62D7378B(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (fParam14 > 0f)
	{
		if (func_115(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_105(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404994.f_2++;
	return 1;
}

void func_159()
{
	if (Global_2404994.f_2025)
	{
		if (unk_0x3ED6DDB11A7AD67F() == Global_2404994.f_2027)
		{
			unk_0xF917823066DAF89F();
		}
		else
		{
			unk_0xF917823066DAF89F();
		}
		Global_2404994.f_2025 = 0;
	}
}

int func_160(bool bParam0)
{
	if (unk_0x7E3640C27B17457C())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_161(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	struct<11> Var0;
	struct<18> Var18;
	struct<3> Var44;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_16 = 1;
	Var18.f_22 = 1;
	Var18.f_23 = 1;
	Var18.f_24 = 1;
	Var18 = { Param0 };
	Var18.f_3 = Param6.f_11;
	Var18.f_4 = fParam3;
	Var18.f_5 = 0;
	Var18.f_6 = 1;
	Var18.f_7 = 0;
	Var18.f_15 = 0;
	Var18.f_16 = 1;
	Var18.f_17 = 0;
	if (func_8(&Var18, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			Var44 = { Param0 - Var0[0 /*3*/] };
			if (Var44.f_2 > Param6.f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_10[0] = Param6.f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_162(var uParam0)
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

void func_163(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x04DE35D10A718EEF())
		{
			func_164(uParam0, 0, 0);
		}
	}
}

void func_164(var uParam0, bool bParam1, bool bParam2)
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

void func_165()
{
	switch (Local_67[unk_0x1E7FB1CA38C403F6() /*3*/].f_2)
	{
		case 0:
			func_199();
			func_198();
			if (func_187())
			{
				func_185();
				func_184();
				func_166(35);
				Local_67[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 1;
			}
			else if (Local_56.f_8 >= 1)
			{
				func_184();
				Local_67[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_56.f_8 >= 2)
			{
				Local_67[unk_0x1E7FB1CA38C403F6() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_166(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_7334)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_183() /*10730*/].f_7546.f_2669[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_183() /*10730*/].f_7546.f_2669[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_183() /*10730*/].f_7546.f_2669[iVar2 /*3*/].f_1)
			{
				func_179(iVar2, 1);
				unk_0xB8A73E7DA87B2968(&Global_2482358, (8 + iVar2));
				func_174(2104, -1);
				func_170(67, -1);
				func_174(2563, -1);
				func_170(69, -1);
				unk_0xD8696AA0C56EEC6E(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0xF44A5E894FE76438(Global_2482358, 12))
					{
						func_167(7, 0);
					}
					else
					{
						func_167(15, 0);
					}
				}
			}
		}
	}
}

void func_167(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_169(iParam0, iParam1))
	{
		iVar0 = func_168();
		Global_2452384[iVar0] = iParam0;
	}
}

int func_168()
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

int func_169(int iParam0, var uParam1)
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

void func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_172(iParam0, func_173(iParam1));
	iVar0++;
	func_171(iParam0, iVar0, iParam1);
}

void func_171(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2523810[iParam0 /*3*/][func_173(uParam2)];
	unk_0xB924315F0872835A(iVar0, iParam1, 1);
}

int func_172(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2523810[iParam0 /*3*/][func_173(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_173(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_136();
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

void func_174(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_178(iParam0, func_173(iParam1), 0);
	iVar0++;
	if (!func_177(iParam0))
	{
		func_176(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_175(iParam0, iVar0, iParam1, 1);
	}
}

void func_175(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503773[iParam0 /*3*/][func_173(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1362395[func_173(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1362401[func_173(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1362407[func_173(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1362413[func_173(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1362371[func_173(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1362377[func_173(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1362383[func_173(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1362389[func_173(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362347[func_173(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1362353[func_173(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1362359[func_173(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1362365[func_173(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1362419[func_173(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1362425[func_173(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1362431[func_173(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1362437[func_173(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1362443[func_173(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1362449[func_173(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1362455[func_173(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524224[0 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524224[1 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524224[2 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524224[3 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524295[func_173(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1362461[func_173(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362467[func_173(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362473[func_173(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1362479[func_173(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524258[0 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524258[1 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524258[2 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524258[3 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524258[4 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524298[0 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524298[1 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524298[2 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524298[3 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524298[4 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524314[0 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524314[1 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524314[2 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524314[3 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524314[4 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524258[5 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524224[4 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524330[func_173(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524339[func_173(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524333[func_173(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524342[func_173(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524336[func_173(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524345[func_173(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524348[func_173(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524258[6 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524224[5 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524258[7 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524224[6 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524258[8 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524224[7 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524258[9 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524224[8 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524258[10 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524224[9 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524258[11 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524224[10 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_176(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_173(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, iParam3);
	}
}

int func_177(int iParam0)
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

int func_178(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_173(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_179(int iParam0, int iParam1)
{
	if (Global_2097152[func_183() /*10730*/].f_7546.f_2669[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_183() /*10730*/].f_7546.f_2669[iParam0 /*3*/].f_1 = iParam1;
		func_180(func_182(iParam0), iParam1, -1, 1);
	}
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_181())
	{
		iVar0 = Global_2522528[iParam0 /*3*/][func_173(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x193460E7BE4AC7F3(iVar0, iParam1, iParam3);
		}
	}
}

int func_181()
{
	return 1;
	return 0;
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 169;
		
		case 1:
			return 170;
		
		case 2:
			return 171;
		
		default:
	}
	return 169;
}

int func_183()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_184()
{
	if (unk_0x6901135DDCC4904D(uLocal_166))
	{
		unk_0x8A3D7569826A325D(&uLocal_166);
	}
}

void func_185()
{
	if (!unk_0xF44A5E894FE76438(Global_2433082.f_3353, 0))
	{
		unk_0xB8A73E7DA87B2968(&(Global_2433082.f_3353), 0);
		func_186();
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&(Global_2433082.f_3353), 1);
	}
}

void func_186()
{
	func_174(1183, -1);
}

int func_187()
{
	struct<14> Var0;
	
	if (unk_0xF6A32456BABBBA74(Local_56.f_2))
	{
		if (unk_0x1B982A8B37108B3C(Local_56.f_2))
		{
			if (unk_0xB77CD66F1DCC743D(unk_0x629B43A8C1BDED52(Local_56.f_2), unk_0xD5A676B97920D126()) && func_197(Local_56.f_2))
			{
				func_196(&(Local_56.f_2));
				if (unk_0x6901135DDCC4904D(uLocal_166))
				{
					unk_0x8A3D7569826A325D(&uLocal_166);
				}
				if (!func_195(1))
				{
					func_190("ABB_BOXCT", 1);
				}
				Var0.f_2 = 108;
				Var0.f_10 = unk_0xFB6B3EEFAB2DD12C();
				Var0.f_3 = uLocal_165;
				func_188(Var0, func_189(1));
				unk_0xB8A73E7DA87B2968(&(Local_67[unk_0x1E7FB1CA38C403F6() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_188(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xFB6B3EEFAB2DD12C();
	if (!iParam14 == 0)
	{
		unk_0xA56AA396FE05B9EC(1, &Param0, 14, iParam14);
	}
}

int func_189(int iParam0)
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
			if (func_47(iVar2, 0, 0))
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

int func_190(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x053CD3063CA9436C(sParam0);
	iVar0 = unk_0x84EF96E928190AB1(0, 1);
	func_191(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_191(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_194() || !unk_0x8676DE83D4396C39()) || !func_134(unk_0xFB6B3EEFAB2DD12C(), 0))
	{
		return;
	}
	iVar0 = func_192(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1755985.f_5[iVar0 /*53*/] = iParam0;
		Global_1755985.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1755985.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1755985.f_5[iVar0 /*53*/].f_2[0] = iParam4;
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

int func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1755985 - 1))
	{
		if (iParam0 > Global_1755985.f_5[iVar0 /*53*/].f_1)
		{
			func_193(iVar0);
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

void func_193(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1755985.f_5[iVar0 /*53*/] = { Global_1755985.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_194()
{
	return unk_0xF14C5BAFFF8F4CB7(-1762644250);
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1616674 > 0;
		
		case 2:
			return Global_1616674.f_1 > 0;
		
		case 3:
			return Global_1616674.f_2 > 0;
		
		case 4:
			return Global_1616674.f_4 > 0;
		
		case 5:
			return Global_1616674.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_196(var uParam0)
{
	var uVar0;
	
	if (unk_0xF6A32456BABBBA74(*uParam0))
	{
		if (!unk_0x50CED8EEAE806923(*uParam0))
		{
		}
	}
	if (unk_0x1B982A8B37108B3C(*uParam0))
	{
		uVar0 = unk_0x0DE80E23B2BD02BD(*uParam0);
		unk_0x334B78DD05E664AF(&uVar0);
	}
}

int func_197(var uParam0)
{
	if (unk_0xF6A32456BABBBA74(uParam0))
	{
		unk_0x370543697500755D(uParam0);
		return unk_0x50CED8EEAE806923(uParam0);
	}
	return 0;
}

void func_198()
{
	if (!unk_0x6901135DDCC4904D(uLocal_166))
	{
		if (unk_0xF6A32456BABBBA74(Local_56.f_2))
		{
			uLocal_166 = unk_0x890C68C377CE0CA4(unk_0x629B43A8C1BDED52(Local_56.f_2));
			unk_0xF563C3AC64885E69(uLocal_166, 1.2f);
			unk_0xD6507DB77BCBD904(uLocal_166, 403);
			unk_0x4F095059F1C175D5(uLocal_166, 2);
			unk_0x2EDAF851B28036F0(uLocal_166, "ABB_BLIPN");
		}
	}
}

void func_199()
{
	var uVar0;
	
	if (!unk_0xA14FC57CB26C2B67())
	{
		uVar0 = func_178(1185, -1, 0);
		if (!unk_0xF44A5E894FE76438(uVar0, 14))
		{
			unk_0xB8A73E7DA87B2968(&uVar0, 14);
			func_176(1185, uVar0, -1, 1, 0);
		}
	}
}

int func_200()
{
	return Local_56.f_0;
}

int func_201()
{
	unk_0x4ACD1E4CBA159ED1(joaat("prop_drug_package_02"));
	if (unk_0x7AD0E9452821C95D(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	return Local_67[iParam0 /*3*/];
}

int func_203()
{
	bool bVar0;
	var uVar1;
	
	func_210(&bVar0, &uVar1);
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
	if (func_209())
	{
		return 1;
	}
	if (Global_2454699)
	{
		return 1;
	}
	if (func_208())
	{
		return 1;
	}
	if (func_207(157))
	{
		if (!func_206())
		{
			return 1;
		}
	}
	if (func_207(155))
	{
		return 1;
	}
	if (!unk_0xA4B4423421E91E97())
	{
		return 1;
	}
	if (func_204() != 0)
	{
		if (unk_0xAB964FCFAC3C767A(func_204()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_204()
{
	switch (func_205())
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

int func_205()
{
	return Global_25185;
}

bool func_206()
{
	return Global_2443089.f_577;
}

int func_207(int iParam0)
{
	if (unk_0x74E31F78B0F9A13E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_208()
{
	return Global_2452479;
}

bool func_209()
{
	return Global_2443089.f_572;
}

void func_210(var uParam0, var uParam1)
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
					func_211(iVar0);
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

void func_211(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x49897615E4CA227C(1, iParam0, &Var0, 3))
	{
		if (func_47(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4572B13EE70C8F52(Var0.f_1);
			if (unk_0x7887B64A08364778(uVar3))
			{
				if (unk_0x6A0583ECFCCECC9B(uVar3, 0))
				{
					uVar4 = unk_0x0DBD8FE531FD620D(uVar3, 0);
					if (unk_0xCC5C4B9DB5D0FF42(uVar4, Var0.f_2) && unk_0x5C565D8FF913FF0D())
					{
						if (func_212(uVar4, &bVar5))
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

int func_212(var uParam0, var uParam1)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(uParam0))
		{
			if (unk_0x94482DCC4926EF60(uParam0))
			{
				unk_0xC53606C390BE2727(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x67F42C4B7B64C593(uParam0, 0))
		{
			if (unk_0x4A478FA962FF575A(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_213()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_214(int iParam0)
{
	return Global_1589933[iParam0 /*601*/];
}

void func_215()
{
	Global_1362545 = -1;
	if (unk_0x6901135DDCC4904D(uLocal_166))
	{
		unk_0x8A3D7569826A325D(&uLocal_166);
	}
	func_218();
	if (unk_0x1995B52453EF6537())
	{
		if (unk_0x04DE35D10A718EEF())
		{
			if (unk_0xF6A32456BABBBA74(Local_56.f_2) && unk_0x50CED8EEAE806923(Local_56.f_2))
			{
				func_196(&(Local_56.f_2));
			}
			Local_56.f_0 = 4;
		}
	}
	if (unk_0xF44A5E894FE76438(Local_56.f_1, 8))
	{
		func_217();
	}
	func_216();
}

void func_216()
{
	unk_0x01DFCA3621B68C4A();
}

void func_217()
{
	Global_2494149.f_791 = 0;
	Global_2494149.f_791.f_1 = { 0f, 0f, 0f };
	Global_2494149.f_791.f_4 = 0f;
	Global_2494149.f_791.f_8 = 0;
	unk_0x4EA098C870B73AB7(&(Global_2494149.f_791.f_7), 0);
}

void func_218()
{
	if (unk_0xF44A5E894FE76438(uLocal_164, 4))
	{
		unk_0xA1A093F774F899C0(unk_0xFB6B3EEFAB2DD12C(), 0.72f);
		unk_0xDC346040965EFA84(unk_0xFB6B3EEFAB2DD12C(), 1f, 1);
		unk_0x2353AF27E56AE975(unk_0xFB6B3EEFAB2DD12C(), 1f);
		unk_0x62E93AFC3E53270D(unk_0xFB6B3EEFAB2DD12C(), 1f);
		func_219(1);
		unk_0x4EA098C870B73AB7(&uLocal_164, 5);
		unk_0x4EA098C870B73AB7(&uLocal_164, 7);
		unk_0x4EA098C870B73AB7(&uLocal_164, 4);
	}
}

void func_219(int iParam0)
{
	var uVar0;
	
	uVar0 = func_220(iParam0, 0);
	unk_0x044DCEA35050EC01(uVar0);
}

char* func_220(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

int func_221(struct<20> Param0)
{
	func_225(func_226(Param0.f_0), Param0);
	unk_0x57BE47356663D94E(1);
	func_223(0, -1, 0);
	unk_0x1CB2FF4BC0AF8B2C(&Local_56, 11);
	unk_0x47DDB3A546F48091(&Local_67, 97);
	if (!func_222())
	{
		return 0;
	}
	unk_0x7E85CEE862B85A74(0);
	if (unk_0x04DE35D10A718EEF())
	{
		Local_56.f_7 = Param0.f_16;
		Global_1362545 = Local_56.f_7;
		Local_56.f_3 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 0) };
		if (!func_3(Global_2494149.f_791.f_1))
		{
			unk_0xB8A73E7DA87B2968(&(Local_56.f_1), 8);
		}
	}
	iLocal_169 = unk_0xF5C5C10402E12CCB();
	Local_67[unk_0x1E7FB1CA38C403F6() /*3*/] = 0;
	return 1;
}

int func_222()
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
		if (func_209())
		{
			return 0;
		}
		if (func_207(155))
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

int func_223(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1E6D5854F5CCAE3F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_216();
			}
			else
			{
				return 0;
			}
		}
		if (!func_224())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1995B52453EF6537())
				{
					if (!bParam2)
					{
						func_216();
					}
					else
					{
						return 0;
					}
				}
				if (func_209())
				{
					if (!bParam2)
					{
						func_216();
					}
					else
					{
						return 0;
					}
				}
				if (func_207(155))
				{
					if (!bParam2)
					{
						func_216();
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
					func_216();
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
				func_216();
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
			func_216();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_224()
{
	return Global_1315206;
}

void func_225(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1995B52453EF6537())
	{
		func_216();
	}
	unk_0x6AFFC4188D3C82E8(uParam0, 0, Param1.f_16);
}

int func_226(int iParam0)
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

