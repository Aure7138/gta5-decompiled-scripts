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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	struct<10> Local_60 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_70 = 0;
	struct<3> Local_71[32];
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	int iLocal_173 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_239(ScriptParam_0))
		{
			func_233();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_232(unk_0xB5CEFD608600A09F()) != 1 && !unk_0xFA30DFD0084E92FE(Global_2519572.f_848.f_7, 0))
			{
				func_233();
			}
		}
	}
	uLocal_169 = ScriptParam_0.f_19;
	while (true)
	{
		func_231();
		if (func_221())
		{
			func_233();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_232(unk_0xB5CEFD608600A09F()) != 1 && Global_1622664 == 0)
			{
				func_233();
			}
		}
		if (unk_0x2F7EEEA6378AC19B() != iLocal_173)
		{
			func_233();
		}
		unk_0x135885FDD612D1A8();
		switch (func_220(unk_0x6BAA0516CC970D99()))
		{
			case 0:
				if (func_219())
				{
					if (func_218() == 1)
					{
						Local_71[unk_0x6BAA0516CC970D99() /*3*/] = 1;
					}
					else if (func_218() == 4)
					{
						Local_71[unk_0x6BAA0516CC970D99() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_218() == 1)
				{
					func_183();
				}
				else if (func_218() == 4)
				{
					Local_71[unk_0x6BAA0516CC970D99() /*3*/] = 3;
				}
				if (Local_71[unk_0x6BAA0516CC970D99() /*3*/].f_2 == 0)
				{
					if ((!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_60.f_3, 500f, 500f, 500f, 0, 1, 0) && func_232(unk_0xB5CEFD608600A09F()) != 1) && !unk_0xFA30DFD0084E92FE(Global_2519572.f_848.f_7, 0))
					{
						Local_71[unk_0x6BAA0516CC970D99() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_181(&(Local_60.f_9));
				if (func_180(&(Local_60.f_9)))
				{
					Local_71[unk_0x6BAA0516CC970D99() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_71[unk_0x6BAA0516CC970D99() /*3*/] = 4;
			
			case 4:
				func_233();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			switch (func_218())
			{
				case 0:
					if (func_6())
					{
						Local_60.f_0 = 1;
					}
					break;
				
				case 1:
					func_5();
					func_4();
					if (func_1())
					{
						Local_60.f_0 = 4;
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
	if (Local_60.f_7 >= 32 && func_232(unk_0xB5CEFD608600A09F()) == 1)
	{
		if (func_3(Global_2519572.f_848.f_1))
		{
			return 1;
		}
	}
	if (Local_60.f_8 == 2)
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
	switch (Local_60.f_8)
	{
		case 0:
			if (!unk_0x7FFE36DB9042AF23(Local_60.f_2) || Local_60.f_6 != -1)
			{
				Local_60.f_8 = 1;
			}
			break;
		
		case 1:
			Local_60.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			if (Local_60.f_6 == -1)
			{
				if (unk_0xFA30DFD0084E92FE(Local_71[iVar0 /*3*/].f_1, 0))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_60.f_1, 7))
			{
				if (unk_0xFA30DFD0084E92FE(Local_71[iVar0 /*3*/].f_1, 1))
				{
					unk_0xF0059F27F7BB6680(&(Local_60.f_1), 7);
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
	struct<35> Var13;
	
	if (!unk_0x7FFE36DB9042AF23(Local_60.f_2))
	{
		if (func_219())
		{
			if (unk_0x892B896276E3AB8B(1))
			{
				fVar5 = 250f;
				Var6 = { Local_60.f_3 };
				if (unk_0xFA30DFD0084E92FE(Local_60.f_1, 8))
				{
					Var0 = { Global_2519572.f_848.f_1 };
					uVar3 = Global_2519572.f_848.f_4;
				}
				if (func_232(unk_0xB5CEFD608600A09F()) == 7)
				{
					iVar12 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
					if (Global_4456448.f_98[iVar12 /*10231*/].f_1242[0 /*33*/].f_10 > 0f)
					{
						Var6 = { Global_4456448.f_98[iVar12 /*10231*/].f_1242[0 /*33*/].f_3 };
						Var9 = { Global_4456448.f_98[iVar12 /*10231*/].f_1242[0 /*33*/].f_6 };
						fVar5 = Global_4456448.f_98[iVar12 /*10231*/].f_1242[0 /*33*/].f_10;
						iVar4 = 1;
					}
					else if (Global_4456448.f_98[iVar12 /*10231*/].f_1242[0 /*33*/].f_9 > 0f)
					{
						Var6 = { Global_4456448.f_98[iVar12 /*10231*/].f_1242[0 /*33*/] };
						fVar5 = Global_4456448.f_98[iVar12 /*10231*/].f_1242[0 /*33*/].f_9;
					}
				}
				Var13.f_5 = 1115815936;
				Var13.f_13 = 2;
				Var13.f_20 = 2;
				Var13.f_32 = -1082130432;
				Var13.f_34 = 1;
				Var13.f_4 = 1;
				Var13.f_5 = 30f;
				Var13.f_10 = 1;
				if (iVar4 == 0)
				{
					if (unk_0xFA30DFD0084E92FE(Local_60.f_1, 8) || func_179(Var6, fVar5, &Var0, &uVar3, Var13))
					{
						if (Local_60.f_7 >= 32 || func_232(unk_0xB5CEFD608600A09F()) == 1)
						{
							Local_60.f_2 = unk_0x2448E4C54354F8D6(unk_0x9AAFCC33C3B745BA(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_60.f_2 = unk_0x2448E4C54354F8D6(unk_0xBB442C3BCC64C10E(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0x019CE76D5286C95C(unk_0x370629AFF3A5C45C(Local_60.f_2), uVar3);
					}
				}
				else if (unk_0xFA30DFD0084E92FE(Local_60.f_1, 8) || func_7(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_60.f_7 >= 32 || func_232(unk_0xB5CEFD608600A09F()) == 1)
					{
						Local_60.f_2 = unk_0x2448E4C54354F8D6(unk_0x9AAFCC33C3B745BA(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_60.f_2 = unk_0x2448E4C54354F8D6(unk_0xBB442C3BCC64C10E(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0x019CE76D5286C95C(unk_0x370629AFF3A5C45C(Local_60.f_2), uVar3);
				}
			}
		}
	}
	if (unk_0x7FFE36DB9042AF23(Local_60.f_2))
	{
		return 1;
	}
	return 0;
}

int func_7(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7, var uParam8, struct<8> Param9, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43)
{
	struct<17> Var0;
	struct<25> Var34;
	
	if (Param9.f_5 < 20f)
	{
		Param9.f_5 = 20f;
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 2;
	Var34.f_8 = { Param0 };
	Var34.f_11 = { Param3 };
	Var34.f_14 = fParam6;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	Param9.f_7 = 0;
	if (func_8(&Var34, &Param9, &Var0))
	{
		*uParam7 = { Var0[0 /*3*/] };
		*uParam8 = Var0.f_16[0];
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
	bool bVar85;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405070.f_2448 == *uParam0 || !Global_2405070.f_2448.f_1 == uParam0->f_1) || !Global_2405070.f_2448.f_2 == uParam0->f_2) || !Global_2405070.f_2451 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405070.f_2462 == uParam0->f_8 || !Global_2405070.f_2462.f_1 == uParam0->f_8.f_1) || !Global_2405070.f_2462.f_2 == uParam0->f_8.f_2) || !Global_2405070.f_2465 == uParam0->f_11) || !Global_2405070.f_2465.f_1 == uParam0->f_11.f_1) || !Global_2405070.f_2465.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405070.f_2462 == uParam0->f_8 || !Global_2405070.f_2462.f_1 == uParam0->f_8.f_1) || !Global_2405070.f_2462.f_2 == uParam0->f_8.f_2) || !Global_2405070.f_2465 == uParam0->f_11) || !Global_2405070.f_2465.f_1 == uParam0->f_11.f_1) || !Global_2405070.f_2465.f_2 == uParam0->f_11.f_2) || !Global_2405070.f_2468 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405070.f_2446 == 1)
		{
			if (unk_0x3C406FC829C1E14A(Global_2405070.f_2455))
			{
				if (Global_2405070.f_2455 == unk_0x8A55B15F4133C912())
				{
					if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_2405070.f_2452) < func_178(0))
					{
						return 0;
					}
				}
				else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_2405070.f_2452) < func_178(0))
				{
					return 0;
				}
			}
			unk_0xF75B799C230EFB11();
			unk_0xA8AB1E14B86B6053();
			func_177();
		}
		Global_2405070.f_2446 = 0;
	}
	else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_2405070.f_2452) > func_178(0))
	{
		Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
		func_171();
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
	unk_0x4B656426561BA934(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2405070.f_2446)
	{
		unk_0xF75B799C230EFB11();
		unk_0xA8AB1E14B86B6053();
		func_177();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_170(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x5CBE37ADBC334A75())
		{
			Global_2405070.f_2469 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405070.f_2448 = { *uParam0 };
					Global_2405070.f_2451 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405070.f_2462 = { uParam0->f_8 };
					Global_2405070.f_2465 = { uParam0->f_11 };
					Global_2405070.f_2468 = 0f;
					Global_2405070.f_2448 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405070.f_2462 = { uParam0->f_8 };
					Global_2405070.f_2465 = { uParam0->f_11 };
					Global_2405070.f_2468 = uParam0->f_14;
					Global_2405070.f_2448 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_169(Var8.f_0, Var8.f_1);
			}
			Global_2405070.f_2447 = 1;
			Global_2405070.f_2446 = 1;
			Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
			Global_2405070.f_2452 = unk_0xED678C85A82F0AB9();
			Global_2405070.f_2455 = unk_0x8A55B15F4133C912();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405070.f_2446)
	{
		if (Global_2405070.f_2447 == 1)
		{
			if (unk_0x37718415CE714A5B(fVar4, fVar5, fVar6, fVar7) || unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_2405070.f_2453) > 5000)
			{
				Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
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
					if (uParam1->f_32 > 0f)
					{
						Var26.f_6 = uParam1->f_32;
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
					Var26.f_51 = uParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_168(Global_4456448.f_148478))
					{
						Var26.f_9 = 1;
					}
					func_143(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_142(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405070.f_2447 = 9;
				}
				else
				{
					Global_2405070.f_2447 = 2;
				}
			}
		}
		if (Global_2405070.f_2447 == 2)
		{
			if ((unk_0xC024116C608125C3(Var11, Var14) || unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_2405070.f_2453) > 15000) || unk_0x5C2EA7E0858E9938(Var11, Var14) == 0)
			{
				Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
				if (uParam0->f_5 && !func_139(unk_0xB5CEFD608600A09F(), 0))
				{
					Global_2405070.f_2447 = 3;
				}
				else
				{
					Global_2405070.f_2447 = 4;
				}
			}
			else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_2405070.f_2457) > 7000)
			{
				func_138(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2405070.f_2447 == 3)
		{
			if (func_137() || unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_2405070.f_2453) > 10000)
			{
				Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
				Global_2405070.f_2447 = 4;
			}
		}
		if (Global_2405070.f_2447 == 4)
		{
			if (unk_0x5CBE37ADBC334A75())
			{
				unk_0xF75B799C230EFB11();
				unk_0xA8AB1E14B86B6053();
			}
			else
			{
				iVar0 = 0;
				func_171();
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
					if (!unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
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
							if (unk_0x8CBA7D344BD35F06(unk_0xB5CEFD608600A09F(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
								Global_2405070.f_2447 = 5;
							}
							break;
						
						case 1:
							func_136(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0xB88DE9CA099A4DB9(unk_0xB5CEFD608600A09F(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
								Global_2405070.f_2447 = 5;
							}
							break;
						
						case 2:
							if (unk_0xB88DE9CA099A4DB9(unk_0xB5CEFD608600A09F(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
								Global_2405070.f_2447 = 5;
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
					Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
					Global_2405070.f_2447 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xD1309BDDAAD56CA3(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_136(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0xDB409A4D9FA829C0(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xDB409A4D9FA829C0(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405070.f_2447 == 5)
		{
			if (func_62(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405070.f_2473.f_5)
				{
					Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
					Global_2405070.f_2447 = 6;
				}
				else
				{
					Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0xFDC254CE02DB0919(Var1.f_0, Var1.f_1);
						}
					}
					Global_2405070.f_2447 = 9;
				}
			}
			else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_2405070.f_2453) > 20000)
			{
				unk_0xF75B799C230EFB11();
				unk_0xA8AB1E14B86B6053();
				Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
				Global_2405070.f_2447 = 8;
			}
		}
		if (Global_2405070.f_2447 == 6)
		{
			iVar0 = 0;
			Global_2405070.f_2473.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_61(uParam0->f_4))
				{
					if (unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_60(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(Var8)))
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
			Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
			Global_2405070.f_2447 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xD1309BDDAAD56CA3(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_136(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0xDB409A4D9FA829C0(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xDB409A4D9FA829C0(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405070.f_2447 == 7)
		{
			if (func_62(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2405070.f_2607[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_142(Global_2405070.f_2607[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405070.f_2607[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_58(Global_2405070.f_2607[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405070.f_2607[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x7352105EC4D7541F(Global_2405070.f_2607[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405070.f_2607[iVar17 /*3*/] };
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
				Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = unk_0xFDC254CE02DB0919(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2405070.f_2447 = 9;
			}
			else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_2405070.f_2453) > 20000)
			{
				Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
				Global_2405070.f_2447 = 8;
			}
		}
		if (Global_2405070.f_2447 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_2405070.f_482))
				{
				}
			}
			else if (Global_2405070.f_2473.f_2)
			{
				func_9(uParam2, &(Global_2405070.f_2473.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405070.f_2448 };
				func_11(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2405070.f_2453 = unk_0xED678C85A82F0AB9();
			Global_2405070.f_2447 = 9;
		}
		if (Global_2405070.f_2447 == 9)
		{
			Global_2405070.f_2446 = 0;
			unk_0xF75B799C230EFB11();
			unk_0xA8AB1E14B86B6053();
			func_177();
			return 1;
		}
		Global_2405070.f_2452 = unk_0xED678C85A82F0AB9();
	}
	return 0;
}

void func_9(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
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
	var uVar63;
	int iVar64;
	bool bVar65;
	int iVar66;
	struct<3> Var67;
	struct<3> Var70;
	struct<3> Var73;
	float fVar76;
	
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
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var67 = { *uParam5 };
						if (func_61(uParam5->f_4) || !unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_60(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_60(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(Var67)))
						{
							iVar66 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_17(*uParam0, &Var0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
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
		if (uParam6->f_32 > 0f)
		{
			Var4.f_6 = uParam6->f_32;
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
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64 /*3*/] = { uParam6->f_13[iVar64 /*3*/] };
			Var4.f_45[iVar64] = uParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = uParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_13(unk_0xB5CEFD608600A09F(), 0))
		{
			Var4.f_9 = 1;
		}
		func_143(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			
			case 1:
				Var70 = { uParam5->f_8 };
				Var73 = { uParam5->f_11 };
				break;
			
			case 2:
				Var70 = { uParam5->f_8 };
				Var73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_12(Var0, uParam5->f_7, Var70, Var73, fVar76))
		{
			if (func_17(*uParam0, &Var0, iVar66, iParam3, 0))
			{
				if (!func_12(Var0, uParam5->f_7, Var70, Var73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var70 + Var73 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var70 };
					}
					if (unk_0x2084D4C6C2DF616F(Var0, &uVar63, 0, 0))
					{
						Var0.f_2 = uVar63;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var70 + Var73 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var70 };
				}
				if (unk_0x2084D4C6C2DF616F(Var0, &uVar63, 0, 0))
				{
					Var0.f_2 = uVar63;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2405070.f_657 = 1;
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
			return func_58(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x7352105EC4D7541F(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_13(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			uVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x6F79ECA8C83E4357(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_16())
			{
				return func_14(Global_2423644[iParam0 /*406*/].f_305.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
	}
	return -1;
}

int func_15(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_16()
{
	return -1;
}

int func_17(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_57(Param0, uParam3))
	{
		if (func_18(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0xF5D5237E20BDAEE6(Param0, 0, uParam3, iParam4))
	{
		if (func_18(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_18(struct<3> Param0, var uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_38(Global_2405070.f_505, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_25(*uParam3, 1056964608))
			{
				if (!func_19(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_19(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_24(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411211[iVar4])
	{
		if (func_23(Var1, &(Global_2410067[iVar4 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_20(&Var1, Global_2410067[iVar4 /*127*/][iVar0 /*7*/], Global_2410067[iVar4 /*127*/][iVar0 /*7*/].f_3, Global_2410067[iVar4 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411211[8])
	{
		if (func_23(Var1, &(Global_2410067[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_20(&Var1, Global_2410067[8 /*127*/][iVar0 /*7*/], Global_2410067[8 /*127*/][iVar0 /*7*/].f_3, Global_2410067[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_20(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
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
	Var6 = { func_22(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x77211CE25DED4FDB(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_21(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_21(Var6, Var3) >= 0f)
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
		Var6 = { func_22(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_22(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x77211CE25DED4FDB(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_21(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_21(Var6, Var29) >= 0f)
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

float func_21(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_22(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

bool func_23(struct<3> Param0, var uParam3)
{
	return unk_0x7352105EC4D7541F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_24(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411221[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411221[1])
	{
		if (Param0.f_0 < Global_2411225[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411221[2])
	{
		if (Param0.f_0 < Global_2411225[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2411225[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2411225[3])
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

int func_25(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_35(unk_0xB5CEFD608600A09F(), 1))
	{
		if (Global_4456448.f_56687 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_56687)
			{
				if (Global_4456448.f_56688[iVar0 /*76*/].f_7 != 0)
				{
					if (func_26(Param0, Global_4456448.f_56688[iVar0 /*76*/], Global_4456448.f_56688[iVar0 /*76*/].f_6, Global_4456448.f_56688[iVar0 /*76*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_53478 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_53478)
			{
				if (Global_4456448.f_53481[iVar0 /*130*/].f_16 != 0)
				{
					if (func_26(Param0, Global_4456448.f_53481[iVar0 /*130*/], Global_4456448.f_53481[iVar0 /*130*/].f_3, Global_4456448.f_53481[iVar0 /*130*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_75598 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_75598)
			{
				if (Global_4456448.f_75602[iVar0 /*217*/].f_12 != 0)
				{
					if (func_26(Param0, Global_4456448.f_75602[iVar0 /*217*/], Global_4456448.f_75602[iVar0 /*217*/].f_3, Global_4456448.f_75602[iVar0 /*217*/].f_12, 0.5f))
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

int func_26(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_34(iParam7, 1008981770))
	{
		func_27(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0x7352105EC4D7541F(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_27(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_33(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	func_28(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x357058E632979E65((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x357058E632979E65((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x357058E632979E65((Var6.f_0 - Var3.f_0));
}

void func_28(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x4A09C6BA3AFA4242(iParam0))
	{
		unk_0x2B3953EE61953843(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_31(iParam0);
		if (iVar0 != 0)
		{
			func_29(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(*uParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_29(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_30(iParam0, &Global_1315788);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x4A09C6BA3AFA4242(Global_1315788[iVar0]))
		{
			unk_0x2B3953EE61953843(Global_1315788[iVar0], &(Global_1315792[iVar0 /*3*/]), &(Global_1315799[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1315792[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1315799[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315792[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315799[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315792[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315799[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315792[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315799[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315806[iVar0] = (Global_1315799[iVar0 /*3*/] - Global_1315792[iVar0 /*3*/]);
		Global_1315809[iVar0] = (Global_1315799[iVar0 /*3*/].f_1 - Global_1315792[iVar0 /*3*/].f_1);
		Global_1315812[iVar0] = (Global_1315799[iVar0 /*3*/].f_2 - Global_1315792[iVar0 /*3*/].f_2);
		if (Global_1315806[iVar0] > Global_1315815)
		{
			Global_1315815 = Global_1315806[iVar0];
		}
		if (Global_1315812[iVar0] > Global_1315816)
		{
			Global_1315816 = Global_1315812[iVar0];
		}
		iVar0++;
	}
	Global_1315817 = (Global_1315815 * -0.5f);
	Global_1315820 = (Global_1315815 * 0.5f);
	Global_1315817.f_1 = ((((0.5f * Global_1315809[0]) + Global_1315809[1]) + Global_1315788.f_3) * -1f);
	Global_1315820.f_1 = (0.5f * Global_1315809[0]);
	Global_1315817.f_2 = (Global_1315812[0] * -0.5f);
	Global_1315820.f_2 = (Global_1315812[0] * 0.5f);
	*uParam1 = { Global_1315817 };
	*uParam2 = { Global_1315820 };
}

void func_30(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_32(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_33(var uParam0, struct<3> Param1)
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

float func_34(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_28(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_35(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_36(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589291[iParam0 /*770*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_36(int iParam0)
{
	return func_37(iParam0);
}

bool func_37(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_13.f_1, 0);
}

int func_38(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_51(Param0))
	{
		if (func_50(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_41(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_40(*uParam3, 1056964608))
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
				func_39(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

void func_39(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_33(&Var0, 0f, 0f, unk_0x55AEFCD285ECC0F2(0f, 360f));
		}
		else
		{
			func_33(&Var0, 0f, 0f, fParam7);
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

int func_40(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2405070.f_2716[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_41(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_46(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_43(&Var2, &(Global_2405070.f_361[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_46(Var2, &uVar1) || func_42(Var2))
			{
				Var2 = { *uParam0 };
				func_43(&Var2, &(Global_2405070.f_361[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_42(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2405070.f_586 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2405070.f_583);
		if (fVar0 < Global_2405070.f_586)
		{
			return 1;
		}
	}
	return 0;
}

void func_43(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_45(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405070.f_2714) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_45(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_45(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_39(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405070.f_2714) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_44(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_20(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_44(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

Vector3 func_45(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_39(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_44(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_20(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x29EBF830A072263F(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_142(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_58(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x7352105EC4D7541F(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_46(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_49())
	{
		return 0;
	}
	iVar1 = func_48();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405070.f_361[iVar0 /*12*/].f_9 == 1)
		{
			if (func_47(Param0, &(Global_2405070.f_361[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_47(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_142(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405070.f_2714) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_58(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x7352105EC4D7541F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x7352105EC4D7541F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x7352105EC4D7541F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x7352105EC4D7541F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405070.f_361[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_49()
{
	return Global_1667157.f_28;
}

int func_50(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409930[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409930[iVar0 /*17*/].f_16))
			{
				if (func_47(*uParam0, &(Global_2409930[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409930[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409930[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_43(&Var1, &(Global_2409930[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_50(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_43(&Var1, &(Global_2409930[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_51(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405070.f_508 && !Global_2405070.f_509)
	{
		if (!Global_2405070.f_44.f_314)
		{
			if (!func_55(unk_0xB5CEFD608600A09F(), 1))
			{
				return 1;
			}
			if (!func_54(Param0, 1008981770))
			{
				if (!func_50(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_50(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_53(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_52(&(Global_2405070.f_44[iVar0 /*12*/])) };
					if (!func_50(&Var1, 0, 0, 0, 1))
					{
						if (!func_50(&Param0, 0, 0, 0, 1))
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

Vector3 func_52(var uParam0)
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

int func_53(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405070.f_44[iVar0 /*12*/].f_9)
		{
			if (func_47(Param0, &(Global_2405070.f_44[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_54(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405070.f_44[iVar0 /*12*/].f_9)
		{
			if (func_47(Param0, &(Global_2405070.f_44[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_55(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_56(iParam0) != 0;
	}
	return func_35(iParam0, bParam1);
}

int func_56(int iParam0)
{
	if (func_15(iParam0, 0, 1))
	{
		return Global_2423644[iParam0 /*406*/].f_1;
	}
	return 0;
}

int func_57(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405070.f_2244 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405070.f_2244)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2405070.f_2245[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2405070.f_2245[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_58(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_59(&Param3, &Param6);
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

void func_59(var uParam0, var uParam1)
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

int func_60(struct<3> Param0, struct<3> Param3, float fParam6)
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

int func_61(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_62(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2405070.f_2473.f_1 == 0 && Global_2405070.f_2473 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xC59E4613981C716D(&(Global_2405070.f_2473.f_1)))
			{
				case 0:
					func_134(uParam1, uParam2);
					if (!Global_2405070.f_2473.f_2)
					{
						if (uParam2->f_7 && Global_2405070.f_548.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
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
								*(uParam0[0 /*3*/]) = { Global_2405070.f_2448 };
							}
							if (uParam1->f_5 && func_10(Global_2405070.f_482))
							{
								if (!Global_2405070.f_2473.f_5)
								{
									Global_2405070.f_2473.f_5 = 1;
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
							uParam0->f_16[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_134(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x5CBE37ADBC334A75())
		{
			if (!unk_0xED1BF24BE110D8F6())
			{
				if (unk_0x889916463BBF90C3())
				{
					func_134(uParam1, uParam2);
					Global_2405070.f_2473.f_1 = unk_0x0C30CC1D72623F11();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xA8AB1E14B86B6053();
				func_134(uParam1, uParam2);
				if (!Global_2405070.f_2473.f_2)
				{
					Global_2405070.f_2473.f_5 = 1;
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
		func_131(Global_2405070.f_548, &(Global_2405070.f_2473.f_57), &(Global_2405070.f_2473.f_90));
	}
	if (uParam2->f_7 && !Global_2405070.f_2473.f_4)
	{
		Global_2405070.f_2473.f_4 = 1;
		func_70(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
	if (Global_2405070.f_2473.f_1 > 0 || Global_2405070.f_2473 > 0)
	{
		if (uParam1->f_5 || unk_0x5CBE37ADBC334A75())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405070.f_2473.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405070.f_2473.f_3)
					{
						iVar4 = Global_2405070.f_2473.f_3 + 1;
					}
					if (iVar4 > (Global_2405070.f_2473.f_1 - 1))
					{
						iVar4 = (Global_2405070.f_2473.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xBDF6A78EFF9F163B(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x02504955C05BBA48(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x51075D30FF64563A(iVar4);
					}
					else
					{
						unk_0x73B66316C77A5550(iVar4, &iVar5);
					}
					func_70(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2405070.f_2473.f_3 = iVar4;
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
			iVar4 = Global_2405070.f_2473.f_1;
		}
		if (Global_2405070.f_2473.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405070.f_2868)
			{
				func_64(&(Global_2405070.f_2473.f_6[0 /*10*/]), &(Global_2405070.f_2473.f_6[1 /*10*/]), &(Global_2405070.f_2473.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_10(Global_2405070.f_482))
			{
				if (Global_2405070.f_2473.f_2)
				{
					func_9(uParam0, &(Global_2405070.f_2473.f_6));
					func_63(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405070.f_2448 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
					func_63(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405070.f_2473.f_2)
			{
				func_9(uParam0, &(Global_2405070.f_2473.f_6));
				func_63(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x491B2241281A03B7(0, Global_2405070.f_2473.f_1);
				unk_0xBDF6A78EFF9F163B(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_19(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_63(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405070.f_2448 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
					func_63(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405070.f_2448 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
				func_63(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405070.f_2448 };
		if (uParam1->f_5 && func_10(Global_2405070.f_482))
		{
			if (!Global_2405070.f_2473.f_5)
			{
				Global_2405070.f_2473.f_5 = 1;
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
		uParam0->f_16[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
		func_63(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_63(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405070.f_2607[(3 - iVar0) /*3*/] = { Global_2405070.f_2607[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405070.f_2607[0 /*3*/] = { Param0 };
}

void func_64(var uParam0, var uParam1, var uParam2)
{
	if (func_10(Global_2405070.f_482) && func_69() < 4096)
	{
		func_68(uParam0, 0f);
		func_68(uParam1, uParam0->f_2);
		func_68(uParam2, uParam1->f_2);
	}
	else
	{
		func_67(uParam0);
		func_66(uParam2, uParam0->f_4);
		func_65(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_65(var uParam0, struct<3> Param1, struct<3> Param4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407966[iVar0 /*10*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407966[iVar0 /*10*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407966[iVar0 /*10*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407966[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407966[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_66(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407966[iVar0 /*10*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407966[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407966[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407966[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_67(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407966[iVar0 /*10*/] > 0)
		{
			if (Global_2407966[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2407966[iVar0 /*10*/].f_1;
				Var2 = { Global_2407966[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_68(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407966[iVar0 /*10*/] > 0)
		{
			if (Global_2407966[iVar0 /*10*/].f_2 < fVar1 && Global_2407966[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2407966[iVar0 /*10*/].f_2;
				Var2 = { Global_2407966[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_69()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407966[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2407966[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_70(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar15;
	int iVar16;
	struct<3> Var17;
	struct<3> Var20;
	float fVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam4->f_5)
	{
		if (Global_2405070.f_482 == 1)
		{
			if (unk_0x357058E632979E65((Global_2405070.f_505.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam4->f_5)
	{
		if (func_127(unk_0xB5CEFD608600A09F()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_126(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam4->f_5)
	{
		if (!unk_0x6A857E4D4E6BD499(unk_0xBC25C936A095B5BA(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0x6A857E4D4E6BD499(unk_0xBC25C936A095B5BA(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_125(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (unk_0x652D2EEEF1D3E62C(uParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!unk_0x2A488C176D52CCA5(Param0, uParam5->f_13[iVar11 /*3*/]) > uParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((unk_0x652D2EEEF1D3E62C(uParam5->f_23) > 0f && unk_0x652D2EEEF1D3E62C(uParam5->f_26) > 0f) && uParam5->f_29 > 0f)
		{
			if (unk_0x7352105EC4D7541F(Param0, uParam5->f_23, uParam5->f_26, uParam5->f_29, 0, 1))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_119(Param0, fParam3, uParam4->f_15, func_124(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405070.f_3;
		}
	}
	else if (!func_116(Param0, 25f, unk_0xB5CEFD608600A09F(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_113(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_113(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405070.f_689)
		{
			Var12 = { Global_2405070.f_505 };
			if (Global_2405070.f_482 == 26)
			{
				Var12 = { Global_2405070.f_548.f_18 };
			}
			if (!func_40(Param0, 0.5f))
			{
				if (func_51(Var12))
				{
					if (!func_50(&Param0, 0, 0, 0, 1) && !func_112(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_112(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_111(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_110(unk_0xB5CEFD608600A09F()) && func_108(unk_0xB5CEFD608600A09F())))
		{
			if (!func_107(&Param0, &(Global_2405070.f_2473.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_108(unk_0xB5CEFD608600A09F()))
		{
			if (!func_106(Param0, &(Global_2405070.f_2473.f_57), &(Global_2405070.f_2473.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_105(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_10(Global_2405070.f_482))
			{
				if (func_54(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_104(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405070.f_44.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405070.f_689)
		{
			if (!func_41(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_19(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_53(Param0, 1008981770);
		if (iVar16 > -1)
		{
			func_103(Param0, &Var17, &Var20, &fVar23);
			if (!func_98(&(Global_2405070.f_44[iVar16 /*12*/]), Var17, Var20, fVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_25(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam5->f_33)
	{
		if (unk_0xAE7193AAF1ECF1DB(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (unk_0x38B362A95EA24163(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_97(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405070.f_2868 && uParam4->f_5)
	{
		if (iVar8 > 0)
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
				fVar0 = func_89(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_89(Param0, Global_2405070.f_2448, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_10(Global_2405070.f_482) && iVar8 < 4096)
			{
				Var25.f_2 = func_87(Param0);
			}
			uVar7 = func_76(Param0, 1, 0, 0, 0);
			Var25.f_4 = { Param0 };
			Var25.f_7 = fParam3;
			Var25.f_0 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_75(Var25);
			Global_2405070.f_2473.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405070.f_2473.f_6[iVar24 /*10*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar35)
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
							fVar0 = func_89(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_89(Param0, Global_2405070.f_2448, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_10(Global_2405070.f_482) && iVar8 == Global_2405070.f_2473.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_87(Param0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405070.f_2473.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { Param0 };
							Var25.f_7 = fParam3;
							Var25.f_0 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_74(Var25, iVar24);
							Global_2405070.f_2473.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405070.f_2473.f_6[iVar24 /*10*/] || (iVar8 == Global_2405070.f_2473.f_6[iVar24 /*10*/] && fVar0 > Global_2405070.f_2473.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25.f_0 = iVar8;
						Var25.f_1 = fVar0;
						func_74(Var25, iVar24);
						Global_2405070.f_2473.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_72(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_76(Param0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_71(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_71(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405070.f_2473.f_6[iVar24 /*10*/] || (iVar8 == Global_2405070.f_2473.f_6[iVar24 /*10*/] && fVar3 > Global_2405070.f_2473.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25.f_0 = iVar8;
						Var25.f_3 = fVar3;
						func_74(Var25, iVar24);
						Global_2405070.f_2473.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_71(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_72(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_15(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				if (unk_0x33CC9445B2DF9387(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0));
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
		if (func_15(iVar1, 1, 1))
		{
			if (!func_139(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if (func_73(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x343CB262BF0CDF5A(iVar1) != unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))) || unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0xCFC6F6FA0A38CF65(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x343CB262BF0CDF5A(iVar1) != iParam7 || unk_0x343CB262BF0CDF5A(iVar1) == -1)
						{
							if (unk_0xCFC6F6FA0A38CF65(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iVar1), 0));
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

int func_73(int iParam0)
{
	if (unk_0xE904009319A7A43E(unk_0xA95CF30C72EB526E(iParam0)) || Global_2423644[iParam0 /*406*/].f_241)
	{
		return 1;
	}
	return 0;
}

void func_74(struct<10> Param0, int iParam10)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405070.f_2473.f_6[iParam10 /*10*/] };
	Global_2405070.f_2473.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_74(Var0, iParam10 + 1);
	}
}

void func_75(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;
	
	Var1.f_2 = 1176256410;
	iVar11 = func_69();
	if (Param0.f_0 > iVar11)
	{
		iVar11 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407966[iVar0 /*10*/] < iVar11)
		{
			Global_2407966[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407966[iVar0 /*10*/] == 0)
		{
			Global_2407966[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407966[iVar0 /*10*/] > 0)
		{
			if (Global_2407966[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2407966[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2407966[iVar13 /*10*/] = { Param0 };
	}
}

float func_76(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
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
		if (func_15(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0xB5CEFD608600A09F() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_78(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x343CB262BF0CDF5A(iVar11) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
					{
						if (!unk_0x343CB262BF0CDF5A(iVar11) == -1 || !func_55(unk_0xB5CEFD608600A09F(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar11) || !bParam6)
					{
						if (func_73(iVar11))
						{
							Var5 = { func_77(iVar11) };
							if (!iVar11 == unk_0xB5CEFD608600A09F())
							{
								Var8 = { unk_0xCCA038CFFE1C48BC(unk_0xA95CF30C72EB526E(iVar11)) };
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
							fVar1 = unk_0xF0F2FC9DE291567F(Param0, Var5, 1);
							fVar2 = unk_0xF0F2FC9DE291567F(Param0, Var8, 1);
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

Vector3 func_77(int iParam0)
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

int func_78(int iParam0)
{
	if (func_15(iParam0, 0, 1))
	{
		if (!func_85(iParam0))
		{
			if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iParam0))
			{
				if (!unk_0x343CB262BF0CDF5A(iParam0) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
				{
					if (func_35(unk_0xB5CEFD608600A09F(), 1))
					{
						if (!func_84(unk_0x343CB262BF0CDF5A(iParam0), unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
				{
					if (!func_35(unk_0xB5CEFD608600A09F(), 1))
					{
						if (!func_79(iParam0))
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

int func_79(int iParam0)
{
	if (func_83(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	Global_2498829 = { func_82(iParam0) };
	if (unk_0xE140B7178EA00705(&Global_2498829))
	{
		return 1;
	}
	if (func_80(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_81(iParam0);
	if (!iVar0 == func_16())
	{
		if (iVar0 == func_81(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1624079[iParam0 /*558*/].f_11;
	}
	return func_16();
}

struct<13> func_82(var uParam0)
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(uParam0, &Var0, 13);
	return Var0;
}

int func_83(int iParam0, var uParam1)
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_2498829 = { func_82(iParam0) };
		Global_2498842 = { func_82(uParam1) };
		if (unk_0xD7F4457CECF10121(&Global_2498829))
		{
			if (unk_0xD7F4457CECF10121(&Global_2498842))
			{
				unk_0x24723877416AAAFC(&Global_2498759, 35, &Global_2498829);
				unk_0x24723877416AAAFC(&Global_2498794, 35, &Global_2498842);
				if (Global_2498759 == Global_2498794)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2)
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
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 0);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 1);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 2);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 4);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 5);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 6);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 8);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 9);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 10);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 12);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 13);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 14);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_85(int iParam0)
{
	if (func_139(iParam0, 0))
	{
		return 1;
	}
	if (func_86())
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

bool func_86()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 3);
}

float func_87(struct<3> Param0)
{
	var uVar0;
	
	return func_88(Param0, &(Global_2405070.f_44), &uVar0);
}

float func_88(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405070.f_2714) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_89(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
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
		fVar0 = func_71(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_76(Param0, 1, 0, 0, 1);
	fVar0 = func_71(fVar4, 0f, func_96(), func_94(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_92(Param0);
	fVar0 = func_71(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && !func_55(unk_0xB5CEFD608600A09F(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_91(Param0, unk_0xB5CEFD608600A09F(), 0);
	fVar0 = func_71(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_90(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_71(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_71(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_71(unk_0x2A488C176D52CCA5(Global_2405070.f_505, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_90(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x2E0AE46DCB1D97E5(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x7A0512982A9448C2(uVar3))
	{
		unk_0x2487DB62997A4150(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x357058E632979E65((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_91(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_15(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_15(iVar3, 0, 1))
				{
					if (unk_0x343CB262BF0CDF5A(iVar3) != unk_0x343CB262BF0CDF5A(iParam3) || (unk_0x343CB262BF0CDF5A(iVar3) == -1 && unk_0x343CB262BF0CDF5A(iParam3) == -1))
					{
						if (Global_2417501.f_261[iVar2])
						{
							fVar1 = unk_0x2A488C176D52CCA5(Global_2417501.f_131[iVar2 /*3*/], Param0);
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
	}
	return fVar0;
}

float func_92(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x724D816EA203A79E(uVar6[iVar2]))
		{
			if (!unk_0x1D403DFADBC2DE3C(uVar6[iVar2], 0))
			{
				if (func_93(uVar6[iVar2]))
				{
					Var3 = { unk_0x541C2AEF053615BC(uVar6[iVar2], 1) };
					fVar1 = unk_0xF0F2FC9DE291567F(Param0, Var3, 1);
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

int func_93(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x84788C4CA5E15BDC(uParam0);
	switch (unk_0xF9E3B31053F43360(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x4EE7377FBE72B4BC(Global_1574768[unk_0xB5CEFD608600A09F()]))
	{
		switch (unk_0xF9E3B31053F43360(uVar0, Global_1574768[unk_0xB5CEFD608600A09F()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1589291[unk_0xB5CEFD608600A09F() /*770*/] == 0)
	{
		iVar1 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0x4EE7377FBE72B4BC(Global_1574479[iVar1]))
			{
				switch (unk_0xF9E3B31053F43360(uVar0, Global_1574479[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_94()
{
	if (func_95())
	{
		if ((unk_0xA19D269B4B5A1532(Global_2405070.f_44.f_67) || unk_0x8C1A6E7D5F410F4A(Global_2405070.f_44.f_67)) || Global_2405070.f_44.f_67 == joaat("rhino"))
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

int func_95()
{
	if (Global_2405070.f_44.f_65 && !Global_2405070.f_44.f_301)
	{
		if (!func_85(unk_0xB5CEFD608600A09F()))
		{
			return 1;
		}
	}
	return 0;
}

float func_96()
{
	if (func_95())
	{
		if ((unk_0xA19D269B4B5A1532(Global_2405070.f_44.f_67) || unk_0x8C1A6E7D5F410F4A(Global_2405070.f_44.f_67)) || Global_2405070.f_44.f_67 == joaat("rhino"))
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

int func_97(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x38B362A95EA24163(Param0, fParam7)) || (fVar0 > 0f && unk_0xAE7193AAF1ECF1DB(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x85BF1D9693A8E47F(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x85BF1D9693A8E47F(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_98(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_102(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_101(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_99(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_99(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_100(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x7352105EC4D7541F(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_100(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
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
	Var3 = { func_22(Var0, Var0.f_0, Var0.f_1, 0f) };
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

int func_101(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
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
		if (!unk_0x7352105EC4D7541F(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_102(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
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
		if (!unk_0x7352105EC4D7541F(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_103(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_24(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411211[iVar4])
	{
		if (func_23(Var1, &(Global_2410067[iVar4 /*127*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410067[iVar4 /*127*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410067[iVar4 /*127*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410067[iVar4 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411211[8])
	{
		if (func_23(Var1, &(Global_2410067[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410067[8 /*127*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410067[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410067[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_104(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2405070.f_44.f_55)
	{
		if (unk_0xBF697FA7422C0621(Global_2405070.f_44.f_56))
		{
			if (!unk_0xB47B61546691E6E3(Param0))
			{
				uVar0 = unk_0x9911032C958CE1B0(Param0);
				if (unk_0xBF697FA7422C0621(uVar0))
				{
					iVar1 = unk_0x8481E9D8CEA242E2(uVar0);
					if (!iVar1 == Global_2405070.f_44.f_57)
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

int func_105(struct<3> Param0)
{
	switch (Global_2405070.f_2469)
	{
		case 0:
			return func_142(Param0, Global_2405070.f_2448, Global_2405070.f_2451, 0, 0);
			break;
		
		case 1:
			return func_58(Param0, Global_2405070.f_2462, Global_2405070.f_2465, 0, 0);
			break;
		
		case 2:
			return unk_0x7352105EC4D7541F(Param0, Global_2405070.f_2462, Global_2405070.f_2465, Global_2405070.f_2468, 0, 1);
			break;
	}
	return 0;
}

int func_106(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0x7352105EC4D7541F(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_107(var uParam0, var uParam1, bool bParam2, float fParam3)
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
				func_39(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_108(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_109(iParam0))
			{
				if (Global_1589291[iParam0 /*770*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_109(int iParam0)
{
	return Global_1589291[iParam0 /*770*/].f_196 != 0;
}

int func_110(int iParam0)
{
	if (func_35(iParam0, 1))
	{
		if (Global_1589291[iParam0 /*770*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_111(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2405070.f_2607[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_112(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_42(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x55AEFCD285ECC0F2(0.01f, 360f);
			func_39(&Var1, Global_2405070.f_583, Global_2405070.f_586, 1036831949, 0, fVar4);
			if (func_46(Var1, &uVar0) || func_42(Var1))
			{
				Var1 = { *uParam0 };
				func_39(&Var1, Global_2405070.f_583, Global_2405070.f_586, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_113(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_15(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xF0F2FC9DE291567F(func_114(unk_0xB5CEFD608600A09F()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x33CC9445B2DF9387(Param0, fParam3))
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
		if (func_15(iVar1, 1, 1))
		{
			if (!func_139(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if ((func_73(iVar1) || !bParam10) && !Global_2423644[iVar1 /*406*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x343CB262BF0CDF5A(iVar1) != unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))) || unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0xF0F2FC9DE291567F(func_114(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xCFC6F6FA0A38CF65(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x343CB262BF0CDF5A(iVar1) != iParam8 || unk_0x343CB262BF0CDF5A(iVar1) == -1)
						{
							if (unk_0xF0F2FC9DE291567F(func_114(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xCFC6F6FA0A38CF65(iVar1, Param0, fParam3))
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

Vector3 func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_115() && Global_1589291[iVar0 /*770*/].f_746) && !func_3(Global_1589291[iVar0 /*770*/].f_747))
	{
		return Global_1589291[iVar0 /*770*/].f_747;
	}
	return func_77(iParam0);
}

var func_115()
{
	return Global_2447942.f_16;
}

int func_116(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_118(Param0, fParam3, iParam4, iParam5, 0) || func_117(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_117(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417501.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_26(Param0, Global_2417501.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2417501.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417501.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_15(iVar2, 0, 1) && func_15(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_118(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
				if (func_15(iVar1, 0, 1) && func_15(iParam4, 0, 1))
				{
					if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_15(iVar1, 0, 1) && func_15(iParam4, 0, 1))
				{
					if (Global_2417501.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2417501.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_77(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417501.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2417501.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_15(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_77(iVar1), Param0) < 1f)
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

int func_119(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2405070.f_3 = 0;
	if (!func_116(Param0, 0.5f, unk_0xB5CEFD608600A09F(), 0, 0))
	{
		Global_2405070.f_3++;
		if (bParam5)
		{
			if (func_170(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
				if (!func_123(Param0, fParam12))
				{
					Global_2405070.f_3++;
					if (!func_25(Param0, 1056964608))
					{
						Global_2405070.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_170(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
				if (!func_123(Param0, fParam12))
				{
					Global_2405070.f_3++;
					if (!func_120(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2405070.f_3++;
						if (!func_25(Param0, 1056964608))
						{
							Global_2405070.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
			}
		}
		else if (func_170(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
			if (!func_123(Param0, fParam12))
			{
				Global_2405070.f_3++;
				if (!func_120(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2405070.f_3++;
					if (!func_25(Param0, 1056964608))
					{
						Global_2405070.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
		}
	}
	return 0;
}

int func_120(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xB5CEFD608600A09F() == iVar1)
		{
			if ((func_15(iVar1, 1, 1) && func_73(iVar1)) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (!func_122(unk_0xB5CEFD608600A09F(), iVar1, -2, 0))
				{
					if (func_121(func_77(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_121(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0x7352105EC4D7541F(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_122(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && unk_0x343CB262BF0CDF5A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == unk_0x343CB262BF0CDF5A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
	}
	return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
}

int func_123(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_15(iVar1, 1, 1) && func_73(iVar1)) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
		{
			if ((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && unk_0x343CB262BF0CDF5A(iVar1) == -1) && !func_55(unk_0xB5CEFD608600A09F(), 1))
			{
				return 0;
			}
			else if ((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && !unk_0xB5CEFD608600A09F() == iVar1) || !func_122(unk_0xB5CEFD608600A09F(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_77(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_124(int iParam0)
{
	if ((Global_2405070.f_482 == 9 || Global_2405070.f_482 == 9) || (Global_2405070.f_482 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_125(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam8 == 0)
		{
			if (func_15(iVar1, bParam4, bParam5))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam7 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_73(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && iParam9) && bParam6) && func_79(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								if (unk_0xF0F2FC9DE291567F(func_77(iVar1), Param0, 1) < fParam3)
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

int func_126(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_15(iVar1, 1, 1))
			{
				if ((!func_139(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1)) && iVar1 != unk_0xB5CEFD608600A09F())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x343CB262BF0CDF5A(iVar1) == -1)
						{
							if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x343CB262BF0CDF5A(iVar1) == iVar3)
					{
						if (unk_0xF0F2FC9DE291567F(func_77(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0xCFC6F6FA0A38CF65(iVar1, Param0, fParam3))
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

int func_127(int iParam0)
{
	if (((func_55(iParam0, 1) || func_130(iParam0)) || func_129(iParam0, 0)) || func_128(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)
{
	if (!func_15(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589291[iParam0 /*770*/].f_35;
}

int func_129(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_33 != -1 || (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1624079[iVar0 /*558*/] != -1;
	}
	return 0;
}

void func_131(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0xFA30DFD0084E92FE(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359721[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_133(&Var2, uParam3, iVar0);
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
				Var6.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_132(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_132(var uParam0, var uParam1, int iParam2)
{
	Global_2412209 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_132(&Global_2412209, uParam1, iParam2 + 1);
	}
}

void func_133(var uParam0, var uParam1, int iParam2)
{
	Global_2412205 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_133(&Global_2412205, uParam1, iParam2 + 1);
	}
}

void func_134(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2405070.f_2244 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405070.f_2244)
		{
			if (func_135(Global_2405070.f_2245[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2405070.f_2245[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2405070.f_2245[iVar0 /*4*/] };
					fVar4 = unk_0xFDC254CE02DB0919(Var1.f_0, Var1.f_1);
				}
				func_70(Global_2405070.f_2245[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2405070.f_2473++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405070.f_2868)
	{
		func_64(&(Global_2405070.f_2473.f_6[0 /*10*/]), &(Global_2405070.f_2473.f_6[1 /*10*/]), &(Global_2405070.f_2473.f_6[2 /*10*/]));
	}
}

int func_135(struct<3> Param0, var uParam3)
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

void func_136(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_59(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

var func_137()
{
	return Global_1310987.f_4;
}

void func_138(var uParam0, var uParam1)
{
	func_177();
	func_169(uParam0, uParam1);
}

bool func_139(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_140(-1, 0) == 8;
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

int func_140(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_141();
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

int func_141()
{
	return Global_1312736;
}

bool func_142(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_143(var uParam0, var uParam1, var uParam2)
{
	if (Global_2405070.f_1736 > 0 && func_165(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_144(uParam0, uParam1, uParam2);
	}
}

void func_144(var uParam0, var uParam1, var uParam2)
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
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	var uVar30;
	struct<3> Var31;
	float fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_38(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_164(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
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
	Global_2412219.f_162 = 0;
	Global_2412219.f_163 = 0;
	Global_2412219.f_164 = -99;
	Global_2412219.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412219[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412219.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_31(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x2E0AE46DCB1D97E5(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x7A0512982A9448C2(iVar8))
		{
			unk_0x2487DB62997A4150(iVar8, &Var1);
			bVar12 = false;
			if (Global_2412219.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412219.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x6F0339DC0CD61C94(iVar8)) || unk_0x77F84A8EA1958F2B(iVar8))
			{
				unk_0x7834AEB00A32C3DF(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_112(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_163(Var1))
									{
										Var1 = { func_159(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_25(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_158(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_164(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_154(Var1, fVar4, uParam2->f_34, unk_0xB5CEFD608600A09F(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_38(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_153(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_170(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_170(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_151(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_150(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412219.f_162)
																										{
																											Global_2412219[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412219.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412219.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412219.f_162 == 0)
																									{
																										Global_2412219[0 /*3*/] = { Var1 };
																										Global_2412219.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412219.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2412219[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_149(Var1, fVar4, iVar16);
																													iVar16 = Global_2412219.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412219.f_162++;
																									if (Global_2412219.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412219.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412219[Global_2412219.f_162 /*3*/] = { Var1 };
																									Global_2412219.f_121[Global_2412219.f_162] = fVar4;
																									Global_2412219.f_162++;
																									if (func_158(Var1, uParam2))
																									{
																										Global_2412219.f_163++;
																									}
																									if (Global_2412219.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412219.f_162 == 40)
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
																					else if (bVar18)
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
				if (Global_2412219.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412219[0 /*3*/] };
						*uParam1 = Global_2412219.f_121[0];
						return;
					}
					else
					{
						if (Global_2412219.f_163 > 0 && !Global_2412219.f_163 == Global_2412219.f_162)
						{
							func_147(0, uParam2);
						}
						iVar26 = unk_0x491B2241281A03B7(0, Global_2412219.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2412219[0 /*3*/] };
						uVar30 = Global_2412219.f_121[0];
						Global_2412219[0 /*3*/] = { Global_2412219[iVar26 /*3*/] };
						Global_2412219.f_121[0] = Global_2412219.f_121[iVar26];
						Global_2412219[iVar26 /*3*/] = { Var27 };
						Global_2412219.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412219[0 /*3*/] };
						*uParam1 = Global_2412219.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_144(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						func_146(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_38(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_164(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_144(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
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
				func_144(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_145(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2412219.f_164 = iVar8;
	}
}

void func_145(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_116(*(uParam0[iVar2 /*4*/]), 5f, unk_0xB5CEFD608600A09F(), 0, 0))
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

void func_146(int iParam0, struct<3> Param1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = unk_0x491B2241281A03B7((1 + iParam0), (40 + iParam0));
		unk_0xF1893A29A79EED3B(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_159(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_163(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_147(int iParam0, var uParam1)
{
	if (!func_158(Global_2412219[iParam0 /*3*/], uParam1))
	{
		Global_2412219.f_162 = (Global_2412219.f_162 - 1);
		func_148(iParam0);
		if (Global_2412219.f_162 > Global_2412219.f_163)
		{
			func_147(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_147(iParam0 + 1, uParam1);
	}
}

void func_148(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412219[iParam0 /*3*/] = { Global_2412219[iParam0 + 1 /*3*/] };
			Global_2412219.f_121[iParam0] = Global_2412219.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_149(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2412219[iParam4 /*3*/] };
	uVar3 = Global_2412219.f_121[iParam4];
	Global_2412219[iParam4 /*3*/] = { Param0 };
	Global_2412219.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412219.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_149(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_150(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_78(iVar5))
		{
			Var1 = { func_77(iVar5) };
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

int func_151(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	struct<3> Var5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam9 == 0)
		{
			if (func_15(iVar1, bParam5, bParam6))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam8 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_73(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && iParam10) && bParam7) && func_79(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x5237AF95232D78C5(unk_0xA95CF30C72EB526E(iVar1), 0))
								{
									uVar3 = unk_0x9FE9D386222EEE47(unk_0xA95CF30C72EB526E(iVar1), 0);
									if (unk_0x724D816EA203A79E(uVar3) && !unk_0x1D403DFADBC2DE3C(uVar3, 0))
									{
										iVar4 = unk_0x6F79ECA8C83E4357(uVar3);
										Var5 = { unk_0x541C2AEF053615BC(uVar3, 0) };
										fVar8 = unk_0x349C94FFF43E2979(uVar3);
										if (func_152(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_26(func_77(iVar1), Param0, fParam3, iParam4, fVar2))
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

int func_152(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_26(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_28(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	Var20 = { 0f, Var17.f_1, 0f };
	func_33(&Var20, 0f, 0f, fParam3);
	Var23 = { 0f, Var14.f_1, 0f };
	func_33(&Var23, 0f, 0f, fParam3);
	Var26 = { (unk_0x357058E632979E65((Var17.f_0 - Var14.f_0)) * 0.5f), 0f, 0f };
	func_33(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var20 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * unk_0x357058E632979E65((Var17.f_2 - Var14.f_2))));
	Var1[1 /*3*/] = { Param0 + Var20 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * unk_0x357058E632979E65((Var17.f_2 - Var14.f_2))));
	Var1[2 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * unk_0x357058E632979E65((Var17.f_2 - Var14.f_2))));
	Var1[3 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * unk_0x357058E632979E65((Var17.f_2 - Var14.f_2))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_26(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_152(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_153(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	uVar1 = unk_0x39827CF9BEAB804C(Param0, 30f, 0, iVar0);
	if (unk_0x724D816EA203A79E(uVar1) && !unk_0x1D403DFADBC2DE3C(uVar1, 0))
	{
		iVar2 = unk_0x6F79ECA8C83E4357(uVar1);
		Var3 = { unk_0x541C2AEF053615BC(uVar1, 0) };
		fVar6 = unk_0x349C94FFF43E2979(uVar1);
		if (func_152(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	uVar1 = unk_0x39827CF9BEAB804C(Param0, 30f, 0, iVar0);
	if (unk_0x724D816EA203A79E(uVar1) && !unk_0x1D403DFADBC2DE3C(uVar1, 0))
	{
		iVar2 = unk_0x6F79ECA8C83E4357(uVar1);
		Var3 = { unk_0x541C2AEF053615BC(uVar1, 0) };
		fVar6 = unk_0x349C94FFF43E2979(uVar1);
		if (func_152(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_154(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_157(Param0, fParam3, iParam4, iParam5, iParam6) || func_155(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_155(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_156(Param0, iParam4, Global_2417501.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2417501.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_152(Param0, fParam3, iParam4, Global_2417501.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2417501.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417501.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_15(iVar2, 0, 1) && func_15(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_156(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_34(iParam3, 1008981770);
	fVar1 = func_34(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_157(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_15(iVar1, 0, 1) && func_15(iParam5, 0, 1))
			{
				if (Global_2417501.f_261[iVar0])
				{
					if (func_26(Global_2417501.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_26(func_77(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417501.f_261[iVar0])
			{
				if (func_26(Global_2417501.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_15(iVar1, 0, 0))
			{
				if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
				{
					if (func_26(func_77(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_158(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_142(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_58(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x7352105EC4D7541F(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_159(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_162(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x7834AEB00A32C3DF(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x0B9FA0F40EF282A2(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
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
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0x8C1A6E7D5F410F4A(iParam11) && func_161(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*uParam3 = (*uParam3 + 180f);
			if (*uParam3 > 360f)
			{
				*uParam3 = (*uParam3 + -360f);
			}
		}
		if (*uParam3 <= 90f || *uParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_160(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_160(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_162(Param0, *uParam3, Param6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
			{
				*uParam3 = (*uParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { unk_0x89D97EB4FAE4A574(Param0, *uParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x4264B2362A7E120F(Param0, *uParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(unk_0x652D2EEEF1D3E62C(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_160(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_160(iParam11, 1.5f);
				}
				Var21 = { Var21 * FtoV((fVar14 * 0.5f)) };
				Var18 = { Var18 - Var21 };
				Var15 = { Param0 + Var18 };
			}
			Var21 = { Var0 - Var15 };
			Var0 = { Var15 };
		}
	}
	return Var0;
}

float func_160(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_28(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_161(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0x2084D4C6C2DF616F(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_162(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_33(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_21(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_163(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_24(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2411933[iVar1])
	{
		if (func_23(Param0, &(Global_2411230[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411933[8])
	{
		if (func_23(Param0, &(Global_2411230[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_164(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405070.f_26.f_17)
	{
		switch (Global_2405070.f_26.f_16)
		{
			case 0:
				if (func_142(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_15, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_58(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_12, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x7352105EC4D7541F(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_12, Global_2405070.f_26.f_15, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_45(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_12, Global_2405070.f_26.f_15, Global_2405070.f_26.f_16, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_165(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2405070.f_1736 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_38(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_164(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412219.f_162 = 0;
		Global_2412219.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412219[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412219.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_166(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405070.f_1736)
		{
			iVar1 = Global_2405070.f_2142[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				Var2 = { Global_2405070.f_1737[iVar1 /*4*/] };
				fVar5 = Global_2405070.f_1737[iVar1 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var2) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var2.f_0, Var2.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_154(Var2, fVar5, uParam2->f_34, unk_0xB5CEFD608600A09F(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_38(uParam2->f_35, &Var2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0.375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (!func_153(Var2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_170(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_170(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_151(Var2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_150(Var2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412219.f_162)
															{
																Global_2412219[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412219.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412219.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412219.f_162 == 0)
														{
															Global_2412219[0 /*3*/] = { Var2 };
															Global_2412219.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412219.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var2, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2412219[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_149(Var2, fVar5, iVar6);
																		iVar6 = Global_2412219.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412219.f_162++;
														if (Global_2412219.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405070.f_1736;
															}
															else if (Global_2412219.f_162 == 40)
															{
																iVar0 = Global_2405070.f_1736;
															}
														}
													}
													else
													{
														Global_2412219[Global_2412219.f_162 /*3*/] = { Var2 };
														Global_2412219.f_121[Global_2412219.f_162] = fVar5;
														Global_2412219.f_162++;
														if (Global_2412219.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405070.f_1736;
															}
															else if (Global_2412219.f_162 == 40)
															{
																iVar0 = Global_2405070.f_1736;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var2 };
										*uParam1 = fVar5;
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
		if (Global_2412219.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412219[0 /*3*/] };
				*uParam1 = Global_2412219.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412219.f_163 > 0 && !Global_2412219.f_163 == Global_2412219.f_162)
				{
					func_147(0, uParam2);
				}
				iVar14 = unk_0x491B2241281A03B7(0, Global_2412219.f_162);
				Var15 = { Global_2412219[0 /*3*/] };
				uVar18 = Global_2412219.f_121[0];
				Global_2412219[0 /*3*/] = { Global_2412219[iVar14 /*3*/] };
				Global_2412219.f_121[0] = Global_2412219.f_121[iVar14];
				Global_2412219[iVar14 /*3*/] = { Var15 };
				Global_2412219.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412219[0 /*3*/] };
				*uParam1 = Global_2412219.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_165(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_144(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_166(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405070.f_1736)
	{
		uVar1 = func_167(Param0, fVar0, &fVar0);
		Global_2405070.f_2142[iVar2] = uVar1;
		iVar2++;
	}
}

int func_167(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405070.f_1736)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2405070.f_1737[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_168(int iParam0)
{
	return iParam0 == 50;
}

void func_169(var uParam0, var uParam1)
{
	unk_0x03903ED3123A1EBC(uParam0, uParam1, 0.1f);
	Global_2405070.f_2456 = unk_0x8A55B15F4133C912();
	Global_2405070.f_2454 = 1;
	Global_2405070.f_2457 = unk_0xED678C85A82F0AB9();
}

int func_170(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405070.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x38B362A95EA24163(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xAE7193AAF1ECF1DB(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xAE7193AAF1ECF1DB(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x85BF1D9693A8E47F(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam13)
	{
		if (unk_0x90629C6D0C640733(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (fParam14 > 0f)
	{
		if (func_125(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_113(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

void func_171()
{
	func_176();
	func_175();
	func_174();
	func_173();
	func_172();
}

void func_172()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2407966[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_173()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405070.f_2473.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_174()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405070.f_2473.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_175()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405070.f_2473.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_176()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405070.f_2473 = { Var0 };
}

void func_177()
{
	if (Global_2405070.f_2454)
	{
		if (unk_0x8A55B15F4133C912() == Global_2405070.f_2456)
		{
			unk_0x156000B85911BE27();
		}
		else
		{
			unk_0x156000B85911BE27();
		}
		Global_2405070.f_2454 = 0;
	}
}

int func_178(bool bParam0)
{
	if (unk_0x17FAADF9916EF741())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_179(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40)
{
	struct<17> Var0;
	struct<18> Var34;
	struct<3> Var62;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34 = { Param0 };
	Var34.f_3 = Param6.f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_8(&Var34, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			Var62 = { Param0 - Var0[0 /*3*/] };
			if (Var62.f_2 > Param6.f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = Param6.f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_180(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_181(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			func_182(uParam0, 0, 0);
		}
	}
}

void func_182(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x7AF0088ABFA713B6() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				*uParam0 = unk_0x1C44CABA911F93F7();
			}
		}
		else
		{
			*uParam0 = unk_0x105601648511CC64();
		}
		uParam0->f_1 = 1;
	}
}

void func_183()
{
	switch (Local_71[unk_0x6BAA0516CC970D99() /*3*/].f_2)
	{
		case 0:
			func_217();
			func_216();
			if (func_205())
			{
				func_203();
				func_202();
				func_184(35);
				Local_71[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_202();
				Local_71[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_60.f_8 >= 2)
			{
				Local_71[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_7960)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_201() /*12171*/].f_7688.f_3838[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_201() /*12171*/].f_7688.f_3838[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_201() /*12171*/].f_7688.f_3838[iVar2 /*3*/].f_1)
			{
				func_197(iVar2, 1);
				unk_0xF0059F27F7BB6680(&Global_2499386, (8 + iVar2));
				func_192(2110, -1);
				func_188(67, -1);
				func_192(2577, -1);
				func_188(69, -1);
				unk_0x7481F930F09A9108(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0xFA30DFD0084E92FE(Global_2499386, 12))
					{
						func_185(7, 0);
					}
					else
					{
						func_185(15, 0);
					}
				}
			}
		}
	}
}

void func_185(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_187(iParam0, iParam1))
	{
		iVar0 = func_186();
		Global_2457604[iVar0] = iParam0;
	}
}

int func_186()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2457604[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_187(int iParam0, var uParam1)
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_188(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_190(iParam0, func_191(iParam1));
	iVar0++;
	func_189(iParam0, iVar0, iParam1);
}

void func_189(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2558778[iParam0 /*3*/][func_191(uParam2)];
	unk_0x3A57956BCE003880(iVar0, iParam1, 1);
}

int func_190(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2558778[iParam0 /*3*/][func_191(iParam1)];
	if (unk_0x6CB99B97664C3727(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_191(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_141();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

void func_192(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_196(iParam0, func_191(iParam1), 0);
	iVar0++;
	if (!func_195(iParam0))
	{
		func_194(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_193(iParam0, iVar0, iParam1, 1);
	}
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2530245[iParam0 /*3*/][func_191(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1373702[func_191(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1373708[func_191(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1373714[func_191(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1373720[func_191(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1373678[func_191(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1373684[func_191(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1373690[func_191(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1373696[func_191(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1373654[func_191(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1373660[func_191(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1373666[func_191(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1373672[func_191(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1373726[func_191(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1373732[func_191(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1373738[func_191(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1373744[func_191(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1373750[func_191(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_1373756[func_191(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1373762[func_191(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1373768[func_191(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2559219[0 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2559219[1 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_2559219[2 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2559219[3 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_2559326[func_191(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1373774[func_191(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1373780[func_191(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1373786[func_191(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1373792[func_191(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_2559271[0 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_2559271[1 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_2559271[2 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_2559271[3 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2559271[4 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2559329[0 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2559329[1 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2559329[2 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_2559329[3 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2559329[4 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2559345[0 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2559345[1 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2559345[2 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2559345[3 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2559345[4 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2559271[5 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2559219[4 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_2559361[func_191(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_2559370[func_191(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_2559364[func_191(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_2559373[func_191(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2559367[func_191(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2559376[func_191(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_2559379[func_191(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2559271[6 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_2559219[5 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2559271[7 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2559219[6 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_2559271[8 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_2559219[7 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_2559271[9 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2559219[8 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2559271[10 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2559219[9 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2559271[11 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2559219[10 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_2559271[12 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_2559219[11 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_2559271[13 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_2559219[12 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_2559271[14 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_2559219[13 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_2559271[15 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_2559219[14 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_2559271[16 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2559219[15 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2559271[17 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2559219[16 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_191(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_195(int iParam0)
{
	if (Global_1373635)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7229:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2925:
			case 3054:
			case 7818:
			case 3049:
			case 3050:
			case 3051:
			case 3052:
			case 3053:
			case 3228:
			case 3230:
			case 3632:
			case 3633:
			case 3634:
			case 3635:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3223:
			case 3217:
			case 3659:
			case 3660:
			case 3661:
			case 3662:
			case 3663:
			case 3664:
			case 3685:
			case 3226:
			case 3225:
			case 4016:
			case 4015:
			case 4019:
			case 4018:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 6106:
			case 6105:
			case 6164:
			case 6163:
			case 6529:
			case 6528:
			case 6542:
			case 6541:
			case 6555:
			case 6554:
			case 6558:
			case 6557:
			case 6561:
			case 6560:
				return 1;
				break;
			}
	}
	return 0;
}

int func_196(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2530245[iParam0 /*3*/][func_191(iParam1)];
	if (unk_0x6CB99B97664C3727(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_197(int iParam0, int iParam1)
{
	if (Global_2097152[func_201() /*12171*/].f_7688.f_3838[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_201() /*12171*/].f_7688.f_3838[iParam0 /*3*/].f_1 = iParam1;
		func_198(func_200(iParam0), iParam1, -1, 1);
	}
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_199())
	{
		iVar0 = Global_2557346[iParam0 /*3*/][func_191(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7DB90DFB4AE71E86(iVar0, iParam1, iParam3);
		}
	}
}

int func_199()
{
	return 1;
	return 0;
}

int func_200(int iParam0)
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

int func_201()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_202()
{
	if (unk_0x2DA8CA50A72528FB(uLocal_170))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_170);
	}
}

void func_203()
{
	if (!unk_0xFA30DFD0084E92FE(Global_2436641.f_3875, 0))
	{
		unk_0xF0059F27F7BB6680(&(Global_2436641.f_3875), 0);
		func_204();
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_2436641.f_3875), 1);
	}
}

void func_204()
{
	func_192(1188, -1);
}

int func_205()
{
	struct<14> Var0;
	
	if (unk_0x7FFE36DB9042AF23(Local_60.f_2))
	{
		if (unk_0x8EA6CABD14F1B89A(Local_60.f_2))
		{
			if (unk_0xB6A16B5E7EB81F9B(unk_0x370629AFF3A5C45C(Local_60.f_2), unk_0xBC25C936A095B5BA()) && func_215(Local_60.f_2))
			{
				func_214(&(Local_60.f_2));
				if (unk_0x2DA8CA50A72528FB(uLocal_170))
				{
					unk_0x07B8ECB35A4ED3AC(&uLocal_170);
				}
				if (!func_213(1))
				{
					func_208("ABB_BOXCT", 1);
				}
				Var0.f_2 = 883164062;
				Var0.f_10 = unk_0xB5CEFD608600A09F();
				Var0.f_3 = uLocal_169;
				func_206(Var0, func_207(1));
				unk_0xF0059F27F7BB6680(&(Local_71[unk_0x6BAA0516CC970D99() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_206(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -471892217;
	Param0.f_1 = unk_0xB5CEFD608600A09F();
	if (!iParam14 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Param0, 14, iParam14);
	}
}

int func_207(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar1)))
		{
			iVar2 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar1));
			if (func_15(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_208(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x2E94302CFF011F2E(sParam0);
	iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
	func_209(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_209(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_212() || !unk_0x517823CA390A19F6()) || !func_139(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = func_210(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1661957.f_5[iVar0 /*53*/] = iParam0;
		Global_1661957.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1661957.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1661957.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1661957.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1661957.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1661957.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_210(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1661957 - 1))
	{
		if (iParam0 > Global_1661957.f_5[iVar0 /*53*/].f_1)
		{
			func_211(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1661957++;
	if (Global_1661957 > 5)
	{
		Global_1661957 = 5;
		return Global_1661957;
	}
	return (Global_1661957 - 1);
}

void func_211(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1661957.f_5[iVar0 /*53*/] = { Global_1661957.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_212()
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1622664 > 0;
		
		case 2:
			return Global_1622664.f_1 > 0;
		
		case 3:
			return Global_1622664.f_2 > 0;
		
		case 4:
			return Global_1622664.f_4 > 0;
		
		case 5:
			return Global_1622664.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_214(var uParam0)
{
	var uVar0;
	
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		if (!unk_0x89B5CBCE9D131B32(*uParam0))
		{
		}
	}
	if (unk_0x8EA6CABD14F1B89A(*uParam0))
	{
		uVar0 = unk_0xD14280F674B4DBF4(*uParam0);
		unk_0xC46CA8E9D2A3F4DD(&uVar0);
	}
}

int func_215(var uParam0)
{
	if (unk_0x7FFE36DB9042AF23(uParam0))
	{
		unk_0xCDF25F6ADC88CCB4(uParam0);
		return unk_0x89B5CBCE9D131B32(uParam0);
	}
	return 0;
}

void func_216()
{
	if (!unk_0x2DA8CA50A72528FB(uLocal_170))
	{
		if (unk_0x7FFE36DB9042AF23(Local_60.f_2))
		{
			uLocal_170 = unk_0x511FE22BCF5353CD(unk_0x370629AFF3A5C45C(Local_60.f_2));
			unk_0x3F5F1772D71D5EC4(uLocal_170, 1.2f);
			unk_0xBF0E22F3E083C33D(uLocal_170, 403);
			unk_0x0D5352939CC40C16(uLocal_170, 2);
			unk_0x436D0272182E484D(uLocal_170, "ABB_BLIPN");
		}
	}
}

void func_217()
{
	var uVar0;
	
	if (!unk_0xF16DAFF595E80F7C())
	{
		uVar0 = func_196(1190, -1, 0);
		if (!unk_0xFA30DFD0084E92FE(uVar0, 14))
		{
			unk_0xF0059F27F7BB6680(&uVar0, 14);
			func_194(1190, uVar0, -1, 1, 0);
		}
	}
}

int func_218()
{
	return Local_60.f_0;
}

int func_219()
{
	unk_0xF243B7A14FCFD0F4(joaat("prop_drug_package_02"));
	if (unk_0xD6513D668481290A(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0)
{
	return Local_71[iParam0 /*3*/];
}

int func_221()
{
	var uVar0;
	
	func_228(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_227())
	{
		return 1;
	}
	if (Global_2459932)
	{
		return 1;
	}
	if (func_226())
	{
		return 1;
	}
	if (func_225(157))
	{
		if (!func_224())
		{
			return 1;
		}
	}
	if (func_225(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_222() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_222()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_222()
{
	switch (func_223())
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

int func_223()
{
	return Global_25277;
}

bool func_224()
{
	return Global_2447942.f_586;
}

int func_225(int iParam0)
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_226()
{
	return Global_2457699;
}

bool func_227()
{
	return Global_2447942.f_581;
}

void func_228(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x414AA1932D1C88E2(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1113296425:
					func_229(iVar0);
					break;
				
				case -319074860:
					unk_0x414AA1932D1C88E2(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -1987561915)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_229(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &Var0, 3))
	{
		if (func_15(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xA95CF30C72EB526E(Var0.f_1);
			if (unk_0x724D816EA203A79E(uVar3))
			{
				if (unk_0x5237AF95232D78C5(uVar3, 0))
				{
					uVar4 = unk_0x9FE9D386222EEE47(uVar3, 0);
					if (unk_0x403C891106DCABAF(uVar4, Var0.f_2) && unk_0x32405B7614E36453())
					{
						if (func_230(uVar4, &bVar5))
						{
							unk_0xD5DC0505375F4D00(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x1E7A09C1710FB071(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_230(var uParam0, var uParam1)
{
	if (unk_0x724D816EA203A79E(uParam0))
	{
		if (!unk_0x5CAE759AE8219D20(uParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(uParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(uParam0)))
				{
					unk_0x77815D3407C6700D(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xB248FAA35ED47DB9(uParam0, 0))
		{
			if (unk_0x4DF785C4DF542CD0(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_231()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_232(int iParam0)
{
	return Global_1589291[iParam0 /*770*/];
}

void func_233()
{
	Global_1373858 = -1;
	if (unk_0x2DA8CA50A72528FB(uLocal_170))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_170);
	}
	func_236();
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			if (unk_0x7FFE36DB9042AF23(Local_60.f_2) && unk_0x89B5CBCE9D131B32(Local_60.f_2))
			{
				func_214(&(Local_60.f_2));
			}
			Local_60.f_0 = 4;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_60.f_1, 8))
	{
		func_235();
	}
	func_234();
}

void func_234()
{
	unk_0x95E4B6F3ED223F5A();
}

void func_235()
{
	Global_2519572.f_848 = 0;
	Global_2519572.f_848.f_1 = { 0f, 0f, 0f };
	Global_2519572.f_848.f_4 = 0f;
	Global_2519572.f_848.f_8 = 0;
	unk_0x7CB6FD92BE491AD9(&(Global_2519572.f_848.f_7), 0);
}

void func_236()
{
	if (unk_0xFA30DFD0084E92FE(uLocal_168, 4))
	{
		unk_0x08BCE902FC1DD80D(unk_0xB5CEFD608600A09F(), 0.72f);
		unk_0xBCB43C2514486D78(unk_0xB5CEFD608600A09F(), 1f, 1);
		unk_0xF7B9AAEB82B6437F(unk_0xB5CEFD608600A09F(), 1f);
		unk_0xF6B0DBDB75FE4049(unk_0xB5CEFD608600A09F(), 1f);
		func_237(1);
		unk_0x7CB6FD92BE491AD9(&uLocal_168, 5);
		unk_0x7CB6FD92BE491AD9(&uLocal_168, 7);
		unk_0x7CB6FD92BE491AD9(&uLocal_168, 4);
	}
}

void func_237(int iParam0)
{
	var uVar0;
	
	uVar0 = func_238(iParam0, 0);
	unk_0x1A058EB0D1ACEC78(uVar0);
}

char* func_238(int iParam0, bool bParam1)
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

int func_239(struct<21> Param0)
{
	func_243(func_244(Param0.f_0), Param0);
	unk_0x38A34821FCF0B79E(1);
	func_241(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_60, 11);
	unk_0xE45D6A3FD6454198(&Local_71, 97);
	if (!func_240())
	{
		return 0;
	}
	unk_0x6C87EFD58B261C6F(0);
	if (unk_0x0DE6397A2CB3EF75())
	{
		Local_60.f_7 = Param0.f_16;
		Global_1373858 = Local_60.f_7;
		Local_60.f_3 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) };
		if (!func_3(Global_2519572.f_848.f_1))
		{
			unk_0xF0059F27F7BB6680(&(Local_60.f_1), 8);
		}
	}
	iLocal_173 = unk_0x2F7EEEA6378AC19B();
	Local_71[unk_0x6BAA0516CC970D99() /*3*/] = 0;
	return 1;
}

int func_240()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 0;
		}
		if (unk_0xB3E1B1F67FB95F04())
		{
			return 1;
		}
		if (func_227())
		{
			return 0;
		}
		if (func_225(155))
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

int func_241(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_234();
			}
			else
			{
				return 0;
			}
		}
		if (!func_242())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_234();
					}
					else
					{
						return 0;
					}
				}
				if (func_227())
				{
					if (!bParam2)
					{
						func_234();
					}
					else
					{
						return 0;
					}
				}
				if (func_225(155))
				{
					if (!bParam2)
					{
						func_234();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xF5F5C6DD66B0FB2A())
			{
				if (!bParam2)
				{
					func_234();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x4796DAD7A8894E2F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (!bParam2)
			{
				func_234();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xF5F5C6DD66B0FB2A())
	{
		if (!bParam2)
		{
			func_234();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_242()
{
	return Global_1312831;
}

void func_243(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_234();
	}
	unk_0xBF463BC3D6FFDE31(uParam0, 0, Param1.f_16);
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
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
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
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
		
		case 124:
			return 32;
		
		case 125:
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
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

