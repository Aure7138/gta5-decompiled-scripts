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
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (!func_228(ScriptParam_0))
		{
			func_222();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_221(unk_0x3D35F9864E4640B1()) != 1 && !unk_0x2A3398C6222EB190(Global_2501777.f_837.f_7, 0))
			{
				func_222();
			}
		}
	}
	uLocal_169 = ScriptParam_0.f_19;
	while (true)
	{
		func_220();
		if (func_210())
		{
			func_222();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_221(unk_0x3D35F9864E4640B1()) != 1 && Global_1622384 == 0)
			{
				func_222();
			}
		}
		if (unk_0x12F270E0E3ED8AA1() != iLocal_173)
		{
			func_222();
		}
		unk_0x5E6C405E24774193();
		switch (func_209(unk_0x43B24C247F35B6BC()))
		{
			case 0:
				if (func_208())
				{
					if (func_207() == 1)
					{
						Local_71[unk_0x43B24C247F35B6BC() /*3*/] = 1;
					}
					else if (func_207() == 4)
					{
						Local_71[unk_0x43B24C247F35B6BC() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_207() == 1)
				{
					func_172();
				}
				else if (func_207() == 4)
				{
					Local_71[unk_0x43B24C247F35B6BC() /*3*/] = 3;
				}
				if (Local_71[unk_0x43B24C247F35B6BC() /*3*/].f_2 == 0)
				{
					if ((!unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), Local_60.f_3, 500f, 500f, 500f, 0, 1, 0) && func_221(unk_0x3D35F9864E4640B1()) != 1) && !unk_0x2A3398C6222EB190(Global_2501777.f_837.f_7, 0))
					{
						Local_71[unk_0x43B24C247F35B6BC() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_170(&(Local_60.f_9));
				if (func_169(&(Local_60.f_9)))
				{
					Local_71[unk_0x43B24C247F35B6BC() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_71[unk_0x43B24C247F35B6BC() /*3*/] = 4;
			
			case 4:
				func_222();
				break;
		}
		if (unk_0xEF0CB8FF125B9F9C())
		{
			switch (func_207())
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
	if (Local_60.f_7 >= 32 && func_221(unk_0x3D35F9864E4640B1()) == 1)
	{
		if (func_3(Global_2501777.f_837.f_1))
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
			if (!unk_0x69DA17666D6E3F5A(Local_60.f_2) || Local_60.f_6 != -1)
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
	while (iVar0 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
		{
			if (Local_60.f_6 == -1)
			{
				if (unk_0x2A3398C6222EB190(Local_71[iVar0 /*3*/].f_1, 0))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!unk_0x2A3398C6222EB190(Local_60.f_1, 7))
			{
				if (unk_0x2A3398C6222EB190(Local_71[iVar0 /*3*/].f_1, 1))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_60.f_1), 7);
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
	
	if (!unk_0x69DA17666D6E3F5A(Local_60.f_2))
	{
		if (func_208())
		{
			if (unk_0xABFC94AD905CD3BF(1))
			{
				fVar5 = 250f;
				Var6 = { Local_60.f_3 };
				if (unk_0x2A3398C6222EB190(Local_60.f_1, 8))
				{
					Var0 = { Global_2501777.f_837.f_1 };
					uVar3 = Global_2501777.f_837.f_4;
				}
				if (func_221(unk_0x3D35F9864E4640B1()) == 7)
				{
					iVar12 = unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1());
					if (Global_1641087.f_96[iVar12 /*9318*/].f_1116[0 /*28*/].f_10 > 0f)
					{
						Var6 = { Global_1641087.f_96[iVar12 /*9318*/].f_1116[0 /*28*/].f_3 };
						Var9 = { Global_1641087.f_96[iVar12 /*9318*/].f_1116[0 /*28*/].f_6 };
						fVar5 = Global_1641087.f_96[iVar12 /*9318*/].f_1116[0 /*28*/].f_10;
						iVar4 = 1;
					}
					else if (Global_1641087.f_96[iVar12 /*9318*/].f_1116[0 /*28*/].f_9 > 0f)
					{
						Var6 = { Global_1641087.f_96[iVar12 /*9318*/].f_1116[0 /*28*/] };
						fVar5 = Global_1641087.f_96[iVar12 /*9318*/].f_1116[0 /*28*/].f_9;
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
					if (unk_0x2A3398C6222EB190(Local_60.f_1, 8) || func_168(Var6, fVar5, &Var0, &uVar3, Var13))
					{
						if (Local_60.f_7 >= 32 || func_221(unk_0x3D35F9864E4640B1()) == 1)
						{
							Local_60.f_2 = unk_0x1A37E732B68B05F5(unk_0x67A1C5D4355C9A3F(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_60.f_2 = unk_0x1A37E732B68B05F5(unk_0x80B892E48930BCB3(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0x5082D1A6D078DB20(unk_0x983B008881BAE40B(Local_60.f_2), uVar3);
					}
				}
				else if (unk_0x2A3398C6222EB190(Local_60.f_1, 8) || func_7(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_60.f_7 >= 32 || func_221(unk_0x3D35F9864E4640B1()) == 1)
					{
						Local_60.f_2 = unk_0x1A37E732B68B05F5(unk_0x67A1C5D4355C9A3F(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_60.f_2 = unk_0x1A37E732B68B05F5(unk_0x80B892E48930BCB3(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0x5082D1A6D078DB20(unk_0x983B008881BAE40B(Local_60.f_2), uVar3);
				}
			}
		}
	}
	if (unk_0x69DA17666D6E3F5A(Local_60.f_2))
	{
		return 1;
	}
	return 0;
}

int func_7(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7, var uParam8, struct<8> Param9, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	struct<17> Var0;
	struct<25> Var28;
	
	if (Param9.f_5 < 20f)
	{
		Param9.f_5 = 20f;
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var28.f_16 = 1;
	Var28.f_22 = 1;
	Var28.f_23 = 1;
	Var28.f_24 = 1;
	Var28.f_5 = 0;
	Var28.f_6 = 1;
	Var28.f_7 = 2;
	Var28.f_8 = { Param0 };
	Var28.f_11 = { Param3 };
	Var28.f_14 = fParam6;
	Var28.f_15 = 0;
	Var28.f_16 = 1;
	Var28.f_17 = 0;
	Param9.f_7 = 0;
	if (func_8(&Var28, &Param9, &Var0))
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
			if (((!Global_2404997.f_2376 == *uParam0 || !Global_2404997.f_2376.f_1 == uParam0->f_1) || !Global_2404997.f_2376.f_2 == uParam0->f_2) || !Global_2404997.f_2379 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404997.f_2390 == uParam0->f_8 || !Global_2404997.f_2390.f_1 == uParam0->f_8.f_1) || !Global_2404997.f_2390.f_2 == uParam0->f_8.f_2) || !Global_2404997.f_2393 == uParam0->f_11) || !Global_2404997.f_2393.f_1 == uParam0->f_11.f_1) || !Global_2404997.f_2393.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404997.f_2390 == uParam0->f_8 || !Global_2404997.f_2390.f_1 == uParam0->f_8.f_1) || !Global_2404997.f_2390.f_2 == uParam0->f_8.f_2) || !Global_2404997.f_2393 == uParam0->f_11) || !Global_2404997.f_2393.f_1 == uParam0->f_11.f_1) || !Global_2404997.f_2393.f_2 == uParam0->f_11.f_2) || !Global_2404997.f_2396 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404997.f_2374 == 1)
		{
			if (unk_0xE2F358F9F113BDF1(Global_2404997.f_2383))
			{
				if (Global_2404997.f_2383 == unk_0xFFDE6A3A0108B7CB())
				{
					if (unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_2380) < func_167(0))
					{
						return 0;
					}
				}
				else if (unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_2380) < func_167(0))
				{
					return 0;
				}
			}
			unk_0x39E9DE0D63F480D5();
			unk_0xDCF78C1F371177AA();
			func_166();
		}
		Global_2404997.f_2374 = 0;
	}
	else if (unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_2380) > func_167(0))
	{
		Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
		func_160();
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
	unk_0xC36E3F95FAF67A07(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404997.f_2374)
	{
		unk_0x39E9DE0D63F480D5();
		unk_0xDCF78C1F371177AA();
		func_166();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_159(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xF1647F97ADA9445F())
		{
			Global_2404997.f_2397 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404997.f_2376 = { *uParam0 };
					Global_2404997.f_2379 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404997.f_2390 = { uParam0->f_8 };
					Global_2404997.f_2393 = { uParam0->f_11 };
					Global_2404997.f_2396 = 0f;
					Global_2404997.f_2376 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404997.f_2390 = { uParam0->f_8 };
					Global_2404997.f_2393 = { uParam0->f_11 };
					Global_2404997.f_2396 = uParam0->f_14;
					Global_2404997.f_2376 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_158(Var8.f_0, Var8.f_1);
			}
			Global_2404997.f_2375 = 1;
			Global_2404997.f_2374 = 1;
			Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
			Global_2404997.f_2380 = unk_0x898811EA80D35DE2();
			Global_2404997.f_2383 = unk_0xFFDE6A3A0108B7CB();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404997.f_2374)
	{
		if (Global_2404997.f_2375 == 1)
		{
			if (unk_0x63747B47D1B9DD81(fVar4, fVar5, fVar6, fVar7) || unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_2381) > 5000)
			{
				Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
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
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					func_137(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_136(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2404997.f_2375 = 9;
				}
				else
				{
					Global_2404997.f_2375 = 2;
				}
			}
		}
		if (Global_2404997.f_2375 == 2)
		{
			if ((unk_0x3361E3E445F1C8D7(Var11, Var14) || unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_2381) > 15000) || unk_0x16779FDD23C34E9C(Var11, Var14) == 0)
			{
				Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
				if (uParam0->f_5 && !func_133(unk_0x3D35F9864E4640B1(), 0))
				{
					Global_2404997.f_2375 = 3;
				}
				else
				{
					Global_2404997.f_2375 = 4;
				}
			}
			else if (unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_2385) > 7000)
			{
				func_132(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404997.f_2375 == 3)
		{
			if (func_131() || unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_2381) > 10000)
			{
				Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
				Global_2404997.f_2375 = 4;
			}
		}
		if (Global_2404997.f_2375 == 4)
		{
			if (unk_0xF1647F97ADA9445F())
			{
				unk_0x39E9DE0D63F480D5();
				unk_0xDCF78C1F371177AA();
			}
			else
			{
				iVar0 = 0;
				func_160();
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
					if (!unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1)
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
							if (unk_0xAD6B226DF40D0D9C(unk_0x3D35F9864E4640B1(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
								Global_2404997.f_2375 = 5;
							}
							break;
						
						case 1:
							func_130(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x1899F42FE5871958(unk_0x3D35F9864E4640B1(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
								Global_2404997.f_2375 = 5;
							}
							break;
						
						case 2:
							if (unk_0x1899F42FE5871958(unk_0x3D35F9864E4640B1(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
								Global_2404997.f_2375 = 5;
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
					Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
					Global_2404997.f_2375 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xB6AAC9661DED13AD(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_130(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x9C825655C4CCED7A(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x9C825655C4CCED7A(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404997.f_2375 == 5)
		{
			if (func_58(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404997.f_2401.f_5)
				{
					Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
					Global_2404997.f_2375 = 6;
				}
				else
				{
					Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x5E9D1531733B27F6(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404997.f_2375 = 9;
				}
			}
			else if (unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_2381) > 20000)
			{
				unk_0x39E9DE0D63F480D5();
				unk_0xDCF78C1F371177AA();
				Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
				Global_2404997.f_2375 = 8;
			}
		}
		if (Global_2404997.f_2375 == 6)
		{
			iVar0 = 0;
			Global_2404997.f_2401.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_57(uParam0->f_4))
				{
					if (unk_0x68BBDCBE8B7849EB(unk_0x0C84D01216EF2CB3(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_56(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x68BBDCBE8B7849EB(unk_0x0C84D01216EF2CB3(Var8)))
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
			Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
			Global_2404997.f_2375 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xB6AAC9661DED13AD(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_130(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x9C825655C4CCED7A(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x9C825655C4CCED7A(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404997.f_2375 == 7)
		{
			if (func_58(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404997.f_2530[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_136(Global_2404997.f_2530[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404997.f_2530[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_54(Global_2404997.f_2530[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404997.f_2530[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x617C37A9A8C9C822(Global_2404997.f_2530[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404997.f_2530[iVar17 /*3*/] };
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
				Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = unk_0x5E9D1531733B27F6(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404997.f_2375 = 9;
			}
			else if (unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_2381) > 20000)
			{
				Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
				Global_2404997.f_2375 = 8;
			}
		}
		if (Global_2404997.f_2375 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_2404997.f_479))
				{
				}
			}
			else if (Global_2404997.f_2401.f_2)
			{
				func_9(uParam2, &(Global_2404997.f_2401.f_6));
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
				*(uParam2[0 /*3*/]) = { Global_2404997.f_2376 };
				func_11(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2404997.f_2381 = unk_0x898811EA80D35DE2();
			Global_2404997.f_2375 = 9;
		}
		if (Global_2404997.f_2375 == 9)
		{
			Global_2404997.f_2374 = 0;
			unk_0x39E9DE0D63F480D5();
			unk_0xDCF78C1F371177AA();
			func_166();
			return 1;
		}
		Global_2404997.f_2380 = unk_0x898811EA80D35DE2();
	}
	return 0;
}

void func_9(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*9*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*9*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*9*/];
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
						if (func_57(uParam5->f_4) || !unk_0x68BBDCBE8B7849EB(unk_0x0C84D01216EF2CB3(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_56(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x68BBDCBE8B7849EB(unk_0x0C84D01216EF2CB3(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_56(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x68BBDCBE8B7849EB(unk_0x0C84D01216EF2CB3(Var67)))
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
	if (func_13(*uParam0, &Var0, iVar66, iParam3, 1))
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
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64 /*3*/] = { uParam6->f_13[iVar64 /*3*/] };
			Var4.f_45[iVar64] = uParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_137(&Var0, &uVar3, &Var4);
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
			if (func_13(*uParam0, &Var0, iVar66, iParam3, 0))
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
					if (unk_0x6192E81E5C0DCC27(Var0, &uVar63, 0))
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
				if (unk_0x6192E81E5C0DCC27(Var0, &uVar63, 0))
				{
					Var0.f_2 = uVar63;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404997.f_637 = 1;
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
			return func_54(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x617C37A9A8C9C822(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_13(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_53(Param0, uParam3))
	{
		if (func_14(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0x5E6109163C0A27DA(Param0, 0, uParam3, iParam4))
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
		if ((iParam4 == 1 && !func_34(Global_2404997.f_500, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
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
	while (iVar0 < Global_2410585[iVar4])
	{
		if (func_19(Var1, &(Global_2409756[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_16(&Var1, Global_2409756[iVar4 /*92*/][iVar0 /*7*/], Global_2409756[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2409756[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410585[8])
	{
		if (func_19(Var1, &(Global_2409756[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_16(&Var1, Global_2409756[8 /*92*/][iVar0 /*7*/], Global_2409756[8 /*92*/][iVar0 /*7*/].f_3, Global_2409756[8 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x65543A6B8B143988(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x65543A6B8B143988(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
	return unk_0x617C37A9A8C9C822(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_20(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410595[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410595[1])
	{
		if (Param0.f_0 < Global_2410599[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410595[2])
	{
		if (Param0.f_0 < Global_2410599[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410599[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410599[3])
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
	
	if (func_31(unk_0x3D35F9864E4640B1(), 1))
	{
		if (Global_1641087.f_49486 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1641087.f_49486)
			{
				if (Global_1641087.f_49487[iVar0 /*63*/].f_7 != 0)
				{
					if (func_22(Param0, Global_1641087.f_49487[iVar0 /*63*/], Global_1641087.f_49487[iVar0 /*63*/].f_6, Global_1641087.f_49487[iVar0 /*63*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1641087.f_47099 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1641087.f_47099)
			{
				if (Global_1641087.f_47102[iVar0 /*98*/].f_16 != 0)
				{
					if (func_22(Param0, Global_1641087.f_47102[iVar0 /*98*/], Global_1641087.f_47102[iVar0 /*98*/].f_3, Global_1641087.f_47102[iVar0 /*98*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1641087.f_62382 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1641087.f_62382)
			{
				if (Global_1641087.f_62386[iVar0 /*182*/].f_12 != 0)
				{
					if (func_22(Param0, Global_1641087.f_62386[iVar0 /*182*/], Global_1641087.f_62386[iVar0 /*182*/].f_3, Global_1641087.f_62386[iVar0 /*182*/].f_12, 0.5f))
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
	float fVar6;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_30(iParam7, 1008981770))
	{
		func_23(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0x617C37A9A8C9C822(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_23(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_29(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	func_24(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x229F35E7CDDBF757((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x229F35E7CDDBF757((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x229F35E7CDDBF757((Var6.f_0 - Var3.f_0));
}

void func_24(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x43A90D5881106ECD(iParam0))
	{
		unk_0x9E360FFC6FB1DDFD(iParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_27(iParam0);
		if (iVar0 != 0)
		{
			func_25(iVar0, fParam1, fParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
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

void func_25(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_26(iParam0, &Global_1315787);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x43A90D5881106ECD(Global_1315787[iVar0]))
		{
			unk_0x9E360FFC6FB1DDFD(Global_1315787[iVar0], &(Global_1315791[iVar0 /*3*/]), &(Global_1315798[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1315791[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1315798[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315791[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315798[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315791[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315798[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315791[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315798[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315805[iVar0] = (Global_1315798[iVar0 /*3*/] - Global_1315791[iVar0 /*3*/]);
		Global_1315808[iVar0] = (Global_1315798[iVar0 /*3*/].f_1 - Global_1315791[iVar0 /*3*/].f_1);
		Global_1315811[iVar0] = (Global_1315798[iVar0 /*3*/].f_2 - Global_1315791[iVar0 /*3*/].f_2);
		if (Global_1315805[iVar0] > Global_1315814)
		{
			Global_1315814 = Global_1315805[iVar0];
		}
		if (Global_1315811[iVar0] > Global_1315815)
		{
			Global_1315815 = Global_1315811[iVar0];
		}
		iVar0++;
	}
	Global_1315816 = (Global_1315814 * -0.5f);
	Global_1315819 = (Global_1315814 * 0.5f);
	Global_1315816.f_1 = ((((0.5f * Global_1315808[0]) + Global_1315808[1]) + Global_1315787.f_3) * -1f);
	Global_1315819.f_1 = (0.5f * Global_1315808[0]);
	Global_1315816.f_2 = (Global_1315811[0] * -0.5f);
	Global_1315819.f_2 = (Global_1315811[0] * 0.5f);
	*uParam1 = { Global_1315816 };
	*uParam2 = { Global_1315819 };
}

void func_26(int iParam0, var uParam1)
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
	}
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		if (func_28(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_29(var uParam0, struct<3> Param1)
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

float func_30(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_24(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_31(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_32(iParam0))
		{
			return 1;
		}
	}
	if (Global_1593076[iParam0 /*647*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_32(int iParam0)
{
	return func_33(iParam0);
}

bool func_33(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_13.f_1, 0);
}

int func_34(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_46(Param0))
	{
		if (func_45(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_37(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_36(*uParam3, 1056964608))
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
				func_35(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

void func_35(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_29(&Var0, 0f, 0f, unk_0xDFF7E223DB3CBA25(0f, 360f));
		}
		else
		{
			func_29(&Var0, 0f, 0f, fParam7);
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

int func_36(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404997.f_2635[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_37(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_42(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_39(&Var2, &(Global_2404997.f_358[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_42(Var2, &uVar1) || func_38(Var2))
			{
				Var2 = { *uParam0 };
				func_39(&Var2, &(Global_2404997.f_358[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_38(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404997.f_572 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404997.f_569);
		if (fVar0 < Global_2404997.f_572)
		{
			return 1;
		}
	}
	return 0;
}

void func_39(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_41(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404997.f_2633) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_41(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_41(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_35(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404997.f_2633) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_40(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_16(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_40(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

Vector3 func_41(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_35(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_40(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_16(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x2C8CBD805D869412(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_136(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_54(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x617C37A9A8C9C822(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_42(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_44();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404997.f_358[iVar0 /*12*/].f_9 == 1)
		{
			if (func_43(Param0, &(Global_2404997.f_358[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_43(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_136(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404997.f_2633) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_54(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x617C37A9A8C9C822(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x617C37A9A8C9C822(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x617C37A9A8C9C822(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x617C37A9A8C9C822(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_44()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404997.f_358[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_45(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409619[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409619[iVar0 /*17*/].f_16))
			{
				if (func_43(*uParam0, &(Global_2409619[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409619[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409619[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_39(&Var1, &(Global_2409619[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_45(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_39(&Var1, &(Global_2409619[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_46(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404997.f_503 && !Global_2404997.f_504)
	{
		if (!Global_2404997.f_43.f_313)
		{
			if (!func_50(unk_0x3D35F9864E4640B1(), 1))
			{
				return 1;
			}
			if (!func_49(Param0, 1008981770))
			{
				if (!func_45(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_45(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_48(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_47(&(Global_2404997.f_43[iVar0 /*12*/])) };
					if (!func_45(&Var1, 0, 0, 0, 1))
					{
						if (!func_45(&Param0, 0, 0, 0, 1))
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

Vector3 func_47(var uParam0)
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

int func_48(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404997.f_43[iVar0 /*12*/].f_9)
		{
			if (func_43(Param0, &(Global_2404997.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_49(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404997.f_43[iVar0 /*12*/].f_9)
		{
			if (func_43(Param0, &(Global_2404997.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_50(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_51(iParam0) != 0;
	}
	return func_31(iParam0, bParam1);
}

int func_51(int iParam0)
{
	if (func_52(iParam0, 0, 1))
	{
		return Global_2422142[iParam0 /*399*/].f_1;
	}
	return 0;
}

int func_52(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434915.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_53(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404997.f_2172 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404997.f_2172)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404997.f_2173[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404997.f_2173[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_54(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_55(&Param3, &Param6);
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

void func_55(var uParam0, var uParam1)
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

int func_56(struct<3> Param0, struct<3> Param3, float fParam6)
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

int func_57(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_58(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404997.f_2401.f_1 == 0 && Global_2404997.f_2401 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xA5A369CFA6D8ADE1(&(Global_2404997.f_2401.f_1)))
			{
				case 0:
					func_128(uParam1, uParam2);
					if (!Global_2404997.f_2401.f_2)
					{
						if (uParam2->f_7 && Global_2404997.f_534.f_7 == 0)
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
								*(uParam0[0 /*3*/]) = { Global_2404997.f_2376 };
							}
							if (uParam1->f_5 && func_10(Global_2404997.f_479))
							{
								if (!Global_2404997.f_2401.f_5)
								{
									Global_2404997.f_2401.f_5 = 1;
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
							uParam0->f_16[0] = unk_0xDFF7E223DB3CBA25(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_128(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xF1647F97ADA9445F())
		{
			if (!unk_0xE6EF79952472D16E())
			{
				if (unk_0x001470F8D6160663())
				{
					func_128(uParam1, uParam2);
					Global_2404997.f_2401.f_1 = unk_0x1662C25485480B37();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xDCF78C1F371177AA();
				func_128(uParam1, uParam2);
				if (!Global_2404997.f_2401.f_2)
				{
					Global_2404997.f_2401.f_5 = 1;
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
		func_125(Global_2404997.f_534, &(Global_2404997.f_2401.f_52), &(Global_2404997.f_2401.f_85));
	}
	if (uParam2->f_7 && !Global_2404997.f_2401.f_4)
	{
		Global_2404997.f_2401.f_4 = 1;
		func_66(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
	if (Global_2404997.f_2401.f_1 > 0 || Global_2404997.f_2401 > 0)
	{
		if (uParam1->f_5 || unk_0xF1647F97ADA9445F())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404997.f_2401.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404997.f_2401.f_3)
					{
						iVar4 = Global_2404997.f_2401.f_3 + 1;
					}
					if (iVar4 > (Global_2404997.f_2401.f_1 - 1))
					{
						iVar4 = (Global_2404997.f_2401.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x39E3A7B3442CAF58(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0xE2430DEC47FAD7A3(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xBCC6B0ABCCFD3D6F(iVar4);
					}
					else
					{
						unk_0xD2A0458E739723E1(iVar4, &iVar5);
					}
					func_66(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404997.f_2401.f_3 = iVar4;
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
			iVar4 = Global_2404997.f_2401.f_1;
		}
		if (Global_2404997.f_2401.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2404997.f_2786)
			{
				func_60(&(Global_2404997.f_2401.f_6[0 /*9*/]), &(Global_2404997.f_2401.f_6[1 /*9*/]), &(Global_2404997.f_2401.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_10(Global_2404997.f_479))
			{
				if (Global_2404997.f_2401.f_2)
				{
					func_9(uParam0, &(Global_2404997.f_2401.f_6));
					func_59(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404997.f_2376 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xDFF7E223DB3CBA25(0f, 360f);
					func_59(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404997.f_2401.f_2)
			{
				func_9(uParam0, &(Global_2404997.f_2401.f_6));
				func_59(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x3AF262D7332EEDF5(0, Global_2404997.f_2401.f_1);
				unk_0x39E3A7B3442CAF58(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_15(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_59(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404997.f_2376 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xDFF7E223DB3CBA25(0f, 360f);
					func_59(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404997.f_2376 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0xDFF7E223DB3CBA25(0f, 360f);
				func_59(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404997.f_2376 };
		if (uParam1->f_5 && func_10(Global_2404997.f_479))
		{
			if (!Global_2404997.f_2401.f_5)
			{
				Global_2404997.f_2401.f_5 = 1;
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
		uParam0->f_16[0] = unk_0xDFF7E223DB3CBA25(0f, 360f);
		func_59(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_59(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404997.f_2530[(3 - iVar0) /*3*/] = { Global_2404997.f_2530[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404997.f_2530[0 /*3*/] = { Param0 };
}

void func_60(var uParam0, var uParam1, var uParam2)
{
	if (func_10(Global_2404997.f_479) && func_65() < 4096)
	{
		func_64(uParam0, 0f);
		func_64(uParam1, uParam0->f_2);
		func_64(uParam2, uParam1->f_2);
	}
	else
	{
		func_63(uParam0);
		func_62(uParam2, uParam0->f_4);
		func_61(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_61(var uParam0, struct<3> Param1, struct<3> Param4)
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
		if (Global_2407788[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407788[iVar0 /*9*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407788[iVar0 /*9*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407788[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407788[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_62(var uParam0, struct<3> Param1)
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
		if (Global_2407788[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407788[iVar0 /*9*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407788[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407788[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_63(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407788[iVar0 /*9*/] > 0)
		{
			if (Global_2407788[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407788[iVar0 /*9*/].f_1;
				Var2 = { Global_2407788[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_64(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407788[iVar0 /*9*/] > 0)
		{
			if (Global_2407788[iVar0 /*9*/].f_2 < fVar1 && Global_2407788[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407788[iVar0 /*9*/].f_2;
				Var2 = { Global_2407788[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_65()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407788[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407788[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_66(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
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
		if (Global_2404997.f_479 == 1)
		{
			if (unk_0x229F35E7CDDBF757((Global_2404997.f_500.f_2 - Param0.f_2)) < 25f)
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
		if (func_122(unk_0x3D35F9864E4640B1()))
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
		if (!func_121(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x65FF779BF246F976(unk_0x0031992CA618A445(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x65FF779BF246F976(unk_0x0031992CA618A445(), Param0, 20f))
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
		if (!func_120(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (func_114(Param0, fParam3, uParam4->f_15, func_119(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404997.f_3;
		}
	}
	else if (!func_111(Param0, 25f, unk_0x3D35F9864E4640B1(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_110(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_110(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404997.f_667)
		{
			Var11 = { Global_2404997.f_500 };
			if (Global_2404997.f_479 == 26)
			{
				Var11 = { Global_2404997.f_534.f_18 };
			}
			if (!func_36(Param0, 0.5f))
			{
				if (func_46(Var11))
				{
					if (!func_45(&Param0, 0, 0, 0, 1) && !func_109(&Param0, 0))
					{
						iVar7 += 512;
					}
				}
				else if (!func_109(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_108(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_107(unk_0x3D35F9864E4640B1()) && func_105(unk_0x3D35F9864E4640B1())))
		{
			if (!func_104(&Param0, &(Global_2404997.f_2401.f_85), 0, 1065353216))
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
		if (!func_105(unk_0x3D35F9864E4640B1()))
		{
			if (!func_103(Param0, &(Global_2404997.f_2401.f_52), &(Global_2404997.f_2401.f_85), 1073741824))
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
	if (func_102(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_10(Global_2404997.f_479))
			{
				if (func_49(Param0, 0.01f))
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
		if (func_101(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404997.f_43.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x68BBDCBE8B7849EB(unk_0x0C84D01216EF2CB3(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x68BBDCBE8B7849EB(unk_0x0C84D01216EF2CB3(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404997.f_667)
		{
			if (!func_37(&Param0, 0, 0))
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
		iVar15 = func_48(Param0, 1008981770);
		if (iVar15 > -1)
		{
			func_100(Param0, &Var16, &Var19, &fVar22);
			if (!func_95(&(Global_2404997.f_43[iVar15 /*12*/]), Var16, Var19, fVar22))
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
	else if (func_94(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var24.f_2 = 1176256410;
	bVar33 = false;
	bVar34 = false;
	if (Global_2404997.f_2786 && uParam4->f_5)
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
				fVar0 = func_86(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			else
			{
				fVar0 = func_86(Param0, Global_2404997.f_2376, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_10(Global_2404997.f_479) && iVar7 < 4096)
			{
				Var24.f_2 = func_84(Param0);
			}
			Var24.f_4 = { Param0 };
			Var24.f_7 = fParam3;
			Var24.f_0 = iVar7;
			Var24.f_1 = fVar0;
			func_83(Var24);
			Global_2404997.f_2401.f_2 = 1;
		}
	}
	else
	{
		iVar23 = 0;
		while (iVar23 < 5)
		{
			if (iVar7 >= Global_2404997.f_2401.f_6[iVar23 /*9*/])
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
							fVar0 = func_86(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						else
						{
							fVar0 = func_86(Param0, Global_2404997.f_2376, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar33 = true;
					}
					if ((func_10(Global_2404997.f_479) && iVar7 == Global_2404997.f_2401.f_6[iVar23 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar34)
						{
							fVar2 = func_84(Param0);
							bVar34 = true;
						}
						if (fVar2 < Global_2404997.f_2401.f_6[iVar23 /*9*/].f_2)
						{
							Var24.f_4 = { Param0 };
							Var24.f_7 = fParam3;
							Var24.f_0 = iVar7;
							Var24.f_1 = fVar0;
							Var24.f_2 = fVar2;
							func_82(Var24, iVar23);
							Global_2404997.f_2401.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2404997.f_2401.f_6[iVar23 /*9*/] || (iVar7 == Global_2404997.f_2401.f_6[iVar23 /*9*/] && fVar0 > Global_2404997.f_2401.f_6[iVar23 /*9*/].f_1))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_1 = fVar0;
						func_82(Var24, iVar23);
						Global_2404997.f_2401.f_2 = 1;
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
						fVar5 = func_81(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_68(Param0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_67(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_67(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar33 = true;
					}
					if (iVar7 > Global_2404997.f_2401.f_6[iVar23 /*9*/] || (iVar7 == Global_2404997.f_2401.f_6[iVar23 /*9*/] && fVar3 > Global_2404997.f_2401.f_6[iVar23 /*9*/].f_3))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_3 = fVar3;
						func_82(Var24, iVar23);
						Global_2404997.f_2401.f_2 = 1;
						return;
					}
				}
			}
			iVar23++;
		}
	}
}

float func_67(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_68(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
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
		if (func_52(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0x3D35F9864E4640B1() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_71(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0xB5E2A107E006EC7A(iVar11) == unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))
					{
						if (!unk_0xB5E2A107E006EC7A(iVar11) == -1 || !func_50(unk_0x3D35F9864E4640B1(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar11) || !bParam6)
					{
						if (func_70(iVar11))
						{
							Var5 = { func_69(iVar11) };
							if (!iVar11 == unk_0x3D35F9864E4640B1())
							{
								Var8 = { unk_0x7F26B7A4881CE80A(unk_0xD33F4BC17EB987E5(iVar11)) };
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
							fVar1 = unk_0x1410333E912D4EC6(Param0, Var5, 1);
							fVar2 = unk_0x1410333E912D4EC6(Param0, Var8, 1);
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

Vector3 func_69(int iParam0)
{
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iParam0), 0);
}

int func_70(int iParam0)
{
	if (unk_0xAF559C09CB5F80E7(unk_0xD33F4BC17EB987E5(iParam0)) || Global_2422142[iParam0 /*399*/].f_254)
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (func_52(iParam0, 0, 1))
	{
		if (!func_79(iParam0))
		{
			if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iParam0))
			{
				if (!unk_0xB5E2A107E006EC7A(iParam0) == unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))
				{
					if (func_31(unk_0x3D35F9864E4640B1(), 1))
					{
						if (!func_78(unk_0xB5E2A107E006EC7A(iParam0), unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xB5E2A107E006EC7A(iParam0) == -1 && unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1)
				{
					if (!func_31(unk_0x3D35F9864E4640B1(), 1))
					{
						if (!func_72(iParam0))
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

int func_72(int iParam0)
{
	if (func_77(unk_0x3D35F9864E4640B1(), iParam0))
	{
		return 1;
	}
	Global_2488575 = { func_76(iParam0) };
	if (unk_0x9EC1A7C50E0AB3CF(&Global_2488575))
	{
		return 1;
	}
	if (func_73(unk_0x3D35F9864E4640B1(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_75(iParam0);
	if (!iVar0 == func_74())
	{
		if (iVar0 == func_75(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_74()
{
	return -1;
}

int func_75(int iParam0)
{
	if (iParam0 != func_74())
	{
		return Global_1623799[iParam0 /*488*/].f_11;
	}
	return func_74();
}

struct<13> func_76(var uParam0)
{
	struct<13> Var0;
	
	unk_0xA82433D60351864D(uParam0, &Var0, 13);
	return Var0;
}

int func_77(int iParam0, var uParam1)
{
	if (unk_0x1AE803DF5F9B30C9())
	{
		Global_2488575 = { func_76(iParam0) };
		Global_2488588 = { func_76(uParam1) };
		if (unk_0xF3F1AD16A136B115(&Global_2488575))
		{
			if (unk_0xF3F1AD16A136B115(&Global_2488588))
			{
				unk_0x7838EB8661A32D68(&Global_2488505, 35, &Global_2488575);
				unk_0x7838EB8661A32D68(&Global_2488540, 35, &Global_2488588);
				if (Global_2488505 == Global_2488540)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_78(int iParam0, int iParam1, int iParam2)
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
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 0);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 1);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 2);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 4);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 5);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 6);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 8);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 9);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 10);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 12);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 13);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 14);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_79(int iParam0)
{
	if (func_133(iParam0, 0))
	{
		return 1;
	}
	if (func_80())
	{
		if (iParam0 == unk_0x3D35F9864E4640B1())
		{
			return 1;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_80()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

float func_81(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_52(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			if (!unk_0x5114FCEE2A997B95())
			{
				if (unk_0xAD2B8127B12C130D(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0));
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
		if (func_52(iVar1, 1, 1))
		{
			if (!func_133(iVar1, 0) && unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x3D35F9864E4640B1()))
				{
					if (func_70(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB5E2A107E006EC7A(iVar1) != unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))) || unk_0xB5E2A107E006EC7A(iVar1) == -1)
							{
								if (unk_0x7A245394A665CEE0(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0xB5E2A107E006EC7A(iVar1) != iParam7 || unk_0xB5E2A107E006EC7A(iVar1) == -1)
						{
							if (unk_0x7A245394A665CEE0(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iVar1), 0));
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

void func_82(struct<9> Param0, int iParam9)
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404997.f_2401.f_6[iParam9 /*9*/] };
	Global_2404997.f_2401.f_6[iParam9 /*9*/] = { Param0 };
	if (iParam9 < 4)
	{
		func_82(Var0, iParam9 + 1);
	}
}

void func_83(struct<9> Param0)
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	float fVar11;
	int iVar12;
	
	Var1.f_2 = 1176256410;
	iVar10 = func_65();
	if (Param0.f_0 > iVar10)
	{
		iVar10 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407788[iVar0 /*9*/] < iVar10)
		{
			Global_2407788[iVar0 /*9*/] = { Var1 };
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
		if (Global_2407788[iVar0 /*9*/] == 0)
		{
			Global_2407788[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar11 = 9999.9f;
	iVar12 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407788[iVar0 /*9*/] > 0)
		{
			if (Global_2407788[iVar0 /*9*/].f_1 < fVar11)
			{
				fVar11 = Global_2407788[iVar0 /*9*/].f_1;
				iVar12 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar12 > -1)
	{
		Global_2407788[iVar12 /*9*/] = { Param0 };
	}
}

float func_84(struct<3> Param0)
{
	var uVar0;
	
	return func_85(Param0, &(Global_2404997.f_43), &uVar0);
}

float func_85(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404997.f_2633) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_86(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
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
		fVar0 = func_67(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_68(Param0, 1, 0, 0, 1);
	fVar0 = func_67(fVar4, 0f, func_93(), func_91(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_89(Param0);
	fVar0 = func_67(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1 && !func_50(unk_0x3D35F9864E4640B1(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_88(Param0, unk_0x3D35F9864E4640B1(), 0);
	fVar0 = func_67(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_87(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_67(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_67(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_67(unk_0x2A488C176D52CCA5(Global_2404997.f_500, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_87(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x2AC941D76F1BFD7C(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0xC383757A7B38CBC4(uVar3))
	{
		unk_0xF5894CF6DC532219(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x229F35E7CDDBF757((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_88(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_52(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_52(iVar3, 0, 1))
				{
					if (unk_0xB5E2A107E006EC7A(iVar3) != unk_0xB5E2A107E006EC7A(iParam3) || (unk_0xB5E2A107E006EC7A(iVar3) == -1 && unk_0xB5E2A107E006EC7A(iParam3) == -1))
					{
						if (Global_2416331.f_261[iVar2])
						{
							fVar1 = unk_0x2A488C176D52CCA5(Global_2416331.f_131[iVar2 /*3*/], Param0);
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

float func_89(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0xCCB8FB63FA4C6CAB(unk_0x0031992CA618A445(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x76B3C79DE564AFC6(uVar6[iVar2]))
		{
			if (!unk_0x7A6C051038031EFA(uVar6[iVar2], 0))
			{
				if (func_90(uVar6[iVar2]))
				{
					Var3 = { unk_0xF177E0DA126D71C8(uVar6[iVar2], 1) };
					fVar1 = unk_0x1410333E912D4EC6(Param0, Var3, 1);
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

int func_90(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x834C6A3950A9090B(uParam0);
	switch (unk_0x71ECD8D9F6A1FE83(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0x71ECD8D9F6A1FE83(uVar0, Global_1574701[unk_0x3D35F9864E4640B1()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 0)
	{
		iVar1 = unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0x71ECD8D9F6A1FE83(uVar0, Global_1574412[iVar1]))
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

float func_91()
{
	if (func_92())
	{
		if ((unk_0xF9CDF5CA6A1D6756(Global_2404997.f_43.f_67) || unk_0x1DBFCF939B3B47D0(Global_2404997.f_43.f_67)) || Global_2404997.f_43.f_67 == joaat("rhino"))
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

int func_92()
{
	if (Global_2404997.f_43.f_65 && !Global_2404997.f_43.f_300)
	{
		if (!func_79(unk_0x3D35F9864E4640B1()))
		{
			return 1;
		}
	}
	return 0;
}

float func_93()
{
	if (func_92())
	{
		if ((unk_0xF9CDF5CA6A1D6756(Global_2404997.f_43.f_67) || unk_0x1DBFCF939B3B47D0(Global_2404997.f_43.f_67)) || Global_2404997.f_43.f_67 == joaat("rhino"))
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

int func_94(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x736668867F457F94(Param0, fParam7)) || (fVar0 > 0f && unk_0xDE23154833E5D069(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0xDC9A6EA41577EFB6(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0xDC9A6EA41577EFB6(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_95(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_99(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_98(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_96(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_96(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_97(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0x617C37A9A8C9C822(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_97(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
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

int func_98(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
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
		if (!unk_0x617C37A9A8C9C822(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_99(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
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
		if (!unk_0x617C37A9A8C9C822(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_100(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_20(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2410585[iVar4])
	{
		if (func_19(Var1, &(Global_2409756[iVar4 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409756[iVar4 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409756[iVar4 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409756[iVar4 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410585[8])
	{
		if (func_19(Var1, &(Global_2409756[8 /*92*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409756[8 /*92*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409756[8 /*92*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409756[8 /*92*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_101(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404997.f_43.f_55)
	{
		if (unk_0x68BBDCBE8B7849EB(Global_2404997.f_43.f_56))
		{
			if (!unk_0x7899B7264D3ED0A1(Param0))
			{
				uVar0 = unk_0x0C84D01216EF2CB3(Param0);
				if (unk_0x68BBDCBE8B7849EB(uVar0))
				{
					iVar1 = unk_0x454D12256BC7768A(uVar0);
					if (!iVar1 == Global_2404997.f_43.f_57)
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

int func_102(struct<3> Param0)
{
	switch (Global_2404997.f_2397)
	{
		case 0:
			return func_136(Param0, Global_2404997.f_2376, Global_2404997.f_2379, 0, 0);
			break;
		
		case 1:
			return func_54(Param0, Global_2404997.f_2390, Global_2404997.f_2393, 0, 0);
			break;
		
		case 2:
			return unk_0x617C37A9A8C9C822(Param0, Global_2404997.f_2390, Global_2404997.f_2393, Global_2404997.f_2396, 0, 1);
			break;
	}
	return 0;
}

int func_103(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0x617C37A9A8C9C822(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_104(var uParam0, var uParam1, bool bParam2, float fParam3)
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
				func_35(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_105(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_106(iParam0))
			{
				if (Global_1593076[iParam0 /*647*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_106(int iParam0)
{
	return Global_1593076[iParam0 /*647*/].f_189 != 0;
}

int func_107(int iParam0)
{
	if (func_31(iParam0, 1))
	{
		if (Global_1593076[iParam0 /*647*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_108(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404997.f_2530[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_38(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0xDFF7E223DB3CBA25(0.01f, 360f);
			func_35(&Var1, Global_2404997.f_569, Global_2404997.f_572, 1036831949, 0, fVar4);
			if (func_42(Var1, &uVar0) || func_38(Var1))
			{
				Var1 = { *uParam0 };
				func_35(&Var1, Global_2404997.f_569, Global_2404997.f_572, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_110(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_52(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			if (!unk_0x5114FCEE2A997B95())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x1410333E912D4EC6(func_69(unk_0x3D35F9864E4640B1()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xAD2B8127B12C130D(Param0, fParam3))
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
		if (func_52(iVar1, 1, 1))
		{
			if (!func_133(iVar1, 0) && unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x3D35F9864E4640B1()))
				{
					if ((func_70(iVar1) || !bParam10) && !Global_2422142[iVar1 /*399*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB5E2A107E006EC7A(iVar1) == -1)
							{
								if (unk_0xB5E2A107E006EC7A(iVar1) == unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB5E2A107E006EC7A(iVar1) != unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))) || unk_0xB5E2A107E006EC7A(iVar1) == -1)
							{
								if (unk_0x1410333E912D4EC6(func_69(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x7A245394A665CEE0(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB5E2A107E006EC7A(iVar1) != iParam8 || unk_0xB5E2A107E006EC7A(iVar1) == -1)
						{
							if (unk_0x1410333E912D4EC6(func_69(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x7A245394A665CEE0(iVar1, Param0, fParam3))
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

int func_111(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_113(Param0, fParam3, iParam4, iParam5, 0) || func_112(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_112(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2416331.f_557[iVar0] == 0)
			{
				if (func_22(Param0, Global_2416331.f_427[iVar0 /*3*/], Global_2416331.f_524[iVar0], Global_2416331.f_557[iVar0], 1036831949))
				{
					if (func_52(iVar1, 0, 1) && func_52(iParam3, 0, 1))
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

int func_113(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
				if (func_52(iVar1, 0, 1) && func_52(iParam4, 0, 1))
				{
					if (unk_0xB5E2A107E006EC7A(iVar1) == unk_0xB5E2A107E006EC7A(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_52(iVar1, 0, 1) && func_52(iParam4, 0, 1))
				{
					if (Global_2416331.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2416331.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_69(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416331.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2416331.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_52(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_69(iVar1), Param0) < 1f)
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

int func_114(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2404997.f_3 = 0;
	if (!func_111(Param0, 0.5f, unk_0x3D35F9864E4640B1(), 0, 0))
	{
		Global_2404997.f_3++;
		if (bParam5)
		{
			if (func_159(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404997.f_3 = (Global_2404997.f_3 + Global_2404997.f_2);
				if (!func_118(Param0, fParam12))
				{
					Global_2404997.f_3++;
					if (!func_21(Param0, 1056964608))
					{
						Global_2404997.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404997.f_3 = (Global_2404997.f_3 + Global_2404997.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_159(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404997.f_3 = (Global_2404997.f_3 + Global_2404997.f_2);
				if (!func_118(Param0, fParam12))
				{
					Global_2404997.f_3++;
					if (!func_115(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404997.f_3++;
						if (!func_21(Param0, 1056964608))
						{
							Global_2404997.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404997.f_3 = (Global_2404997.f_3 + Global_2404997.f_2);
			}
		}
		else if (func_159(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404997.f_3 = (Global_2404997.f_3 + Global_2404997.f_2);
			if (!func_118(Param0, fParam12))
			{
				Global_2404997.f_3++;
				if (!func_115(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404997.f_3++;
					if (!func_21(Param0, 1056964608))
					{
						Global_2404997.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404997.f_3 = (Global_2404997.f_3 + Global_2404997.f_2);
		}
	}
	return 0;
}

int func_115(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x3D35F9864E4640B1() == iVar1)
		{
			if ((func_52(iVar1, 1, 1) && func_70(iVar1)) && unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
			{
				if (!func_117(unk_0x3D35F9864E4640B1(), iVar1, -2, 0))
				{
					if (func_116(func_69(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_116(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0x617C37A9A8C9C822(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_117(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xB5E2A107E006EC7A(iParam0) == -1 && unk_0xB5E2A107E006EC7A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xB5E2A107E006EC7A(iParam0) == unk_0xB5E2A107E006EC7A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xB5E2A107E006EC7A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xB5E2A107E006EC7A(iParam0) == iParam2;
	}
	return unk_0xB5E2A107E006EC7A(iParam0) == iParam2;
}

int func_118(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_52(iVar1, 1, 1) && func_70(iVar1)) && unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
		{
			if ((unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1 && unk_0xB5E2A107E006EC7A(iVar1) == -1) && !func_50(unk_0x3D35F9864E4640B1(), 1))
			{
				return 0;
			}
			else if ((unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1 && !unk_0x3D35F9864E4640B1() == iVar1) || !func_117(unk_0x3D35F9864E4640B1(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_69(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_119(int iParam0)
{
	if ((Global_2404997.f_479 == 9 || Global_2404997.f_479 == 9) || (Global_2404997.f_479 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_120(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x3D35F9864E4640B1() != iVar1) || iParam8 == 0)
		{
			if (func_52(iVar1, bParam4, bParam5))
			{
				if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
				{
					if (!bParam7 || (!unk_0x8682D8A6269E52C9(unk_0xD33F4BC17EB987E5(iVar1)) && func_70(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) != unk_0xB5E2A107E006EC7A(iVar1))) || unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1)
						{
							if (((unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1 && iParam9) && bParam6) && func_72(iVar1))
							{
							}
							else if (unk_0x76B3C79DE564AFC6(unk_0xD33F4BC17EB987E5(iVar1)))
							{
								if (unk_0x1410333E912D4EC6(func_69(iVar1), Param0, 1) < fParam3)
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

int func_121(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_52(iVar1, 1, 1))
			{
				if ((!func_133(iVar1, 0) && unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1)) && iVar1 != unk_0x3D35F9864E4640B1())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0xB5E2A107E006EC7A(iVar1) == -1)
						{
							if (unk_0xB5E2A107E006EC7A(iVar1) == unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0xB5E2A107E006EC7A(iVar1) == iVar3)
					{
						if (unk_0x1410333E912D4EC6(func_69(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x7A245394A665CEE0(iVar1, Param0, fParam3))
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

int func_122(int iParam0)
{
	if ((func_50(iParam0, 1) || func_124(iParam0)) || func_123(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_123(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_32 != -1 || (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1623799[iVar0 /*488*/] != -1;
	}
	return 0;
}

void func_125(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0x2A3398C6222EB190(Global_2359720[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359720[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359720[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359720[iVar1 /*26*/].f_6.f_2;
					func_127(&Var2, uParam3, iVar0);
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
				Var6.f_7 = { Global_2359396[iVar1 /*3*/] };
				func_126(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_126(var uParam0, var uParam1, int iParam2)
{
	Global_2411583 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_126(&Global_2411583, uParam1, iParam2 + 1);
	}
}

void func_127(var uParam0, var uParam1, int iParam2)
{
	Global_2411579 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_127(&Global_2411579, uParam1, iParam2 + 1);
	}
}

void func_128(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404997.f_2172 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404997.f_2172)
		{
			if (func_129(Global_2404997.f_2173[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404997.f_2173[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404997.f_2173[iVar0 /*4*/] };
					fVar4 = unk_0x5E9D1531733B27F6(Var1.f_0, Var1.f_1);
				}
				func_66(Global_2404997.f_2173[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404997.f_2401++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2404997.f_2786)
	{
		func_60(&(Global_2404997.f_2401.f_6[0 /*9*/]), &(Global_2404997.f_2401.f_6[1 /*9*/]), &(Global_2404997.f_2401.f_6[2 /*9*/]));
	}
}

int func_129(struct<3> Param0, var uParam3)
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

void func_130(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_55(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

var func_131()
{
	return Global_1310987.f_4;
}

void func_132(var uParam0, var uParam1)
{
	func_166();
	func_158(uParam0, uParam1);
}

bool func_133(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_134(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_134(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_135();
	}
	if (Global_1312833[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_135()
{
	return Global_1312735;
}

bool func_136(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_137(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404997.f_1714 > 0 && func_155(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_138(uParam0, uParam1, uParam2);
	}
}

void func_138(var uParam0, var uParam1, var uParam2)
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
	int iVar18;
	bool bVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	float fVar24;
	int iVar25;
	struct<3> Var26;
	var uVar29;
	struct<3> Var30;
	float fVar33;
	bool bVar34;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_34(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_154(uParam0, 1))
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
	Global_2411593.f_162 = 0;
	Global_2411593.f_163 = 0;
	Global_2411593.f_164 = -99;
	Global_2411593.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411593[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411593.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_27(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x2AC941D76F1BFD7C(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xC383757A7B38CBC4(iVar8))
		{
			unk_0xF5894CF6DC532219(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411593.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411593.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xC76B698719C661A0(iVar8)) || unk_0x8EB0EE306342AA37(iVar8))
			{
				unk_0xFA2B8165E7D967F2(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_109(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_153(Var1))
									{
										Var1 = { func_151(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_21(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_150(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_154(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_145(Var1, fVar4, uParam2->f_34, unk_0x3D35F9864E4640B1(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_34(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar18 = uParam2->f_31;
																					bVar19 = true;
																					iVar20 = 1;
																					fVar21 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar18 = 0;
																						bVar19 = false;
																						iVar20 = 0;
																						fVar21 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar18 = 0;
																						bVar19 = false;
																						iVar20 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar21 = (fVar21 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar19 = true;
																						iVar20 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar21 = (fVar21 * 0.375f);
																							}
																						}
																					}
																					iVar22 = 0;
																					if (uParam2->f_3 > 7f)
																					{
																						if (func_159(Var1, 6f, 1f, 1f, 5f, iVar18, bVar19, iVar20, fVar21, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																						{
																							iVar22 = 1;
																						}
																					}
																					else if (func_159(Var1, 6f, 1f, 1f, 5f, iVar18, bVar19, iVar20, fVar21, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_144(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																					{
																						iVar22 = 1;
																					}
																					if (iVar22 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar24 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar23 = func_143(Var1, uParam2->f_54, &fVar24);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar23 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar23 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411593.f_162)
																										{
																											Global_2411593[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2411593.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2411593.f_162 = 0;
																										uParam2->f_53 = iVar23;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2411593.f_162 == 0)
																									{
																										Global_2411593[0 /*3*/] = { Var1 };
																										Global_2411593.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411593.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411593[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_142(Var1, fVar4, iVar16);
																													iVar16 = Global_2411593.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2411593.f_162++;
																									if (Global_2411593.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411593.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2411593[Global_2411593.f_162 /*3*/] = { Var1 };
																									Global_2411593.f_121[Global_2411593.f_162] = fVar4;
																									Global_2411593.f_162++;
																									if (func_150(Var1, uParam2))
																									{
																										Global_2411593.f_163++;
																									}
																									if (Global_2411593.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411593.f_162 == 40)
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
				if (Global_2411593.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411593[0 /*3*/] };
						*uParam1 = Global_2411593.f_121[0];
						return;
					}
					else
					{
						if (Global_2411593.f_163 > 0 && !Global_2411593.f_163 == Global_2411593.f_162)
						{
							func_140(0, uParam2);
						}
						iVar25 = unk_0x3AF262D7332EEDF5(0, Global_2411593.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar25 = 0;
						}
						Var26 = { Global_2411593[0 /*3*/] };
						uVar29 = Global_2411593.f_121[0];
						Global_2411593[0 /*3*/] = { Global_2411593[iVar25 /*3*/] };
						Global_2411593.f_121[0] = Global_2411593.f_121[iVar25];
						Global_2411593[iVar25 /*3*/] = { Var26 };
						Global_2411593.f_121[iVar25] = uVar29;
						*uParam0 = { Global_2411593[0 /*3*/] };
						*uParam1 = Global_2411593.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_138(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x3AF262D7332EEDF5((1 + iVar15), (40 + iVar15));
						unk_0x4FCCC68F5621C928(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_151(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var30 = { Var1 };
						fVar33 = fVar4;
						if (!uParam2->f_50)
						{
							bVar34 = true;
						}
						else
						{
							bVar34 = false;
						}
						if (func_34(uParam2->f_35, &Var30, &(uParam2->f_38), &(uParam2->f_45), bVar34, 1) || func_154(&Var30, bVar34))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var30 };
								*uParam1 = fVar33;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_138(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var30 };
								*uParam1 = fVar33;
								return;
							}
						}
						else
						{
							*uParam0 = { Var30 };
							*uParam1 = fVar33;
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
				func_138(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_139(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2411593.f_164 = iVar8;
	}
}

void func_139(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_111(*(uParam0[iVar2 /*4*/]), 5f, unk_0x3D35F9864E4640B1(), 0, 0))
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

void func_140(int iParam0, var uParam1)
{
	if (!func_150(Global_2411593[iParam0 /*3*/], uParam1))
	{
		Global_2411593.f_162 = (Global_2411593.f_162 - 1);
		func_141(iParam0);
		if (Global_2411593.f_162 > Global_2411593.f_163)
		{
			func_140(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_140(iParam0 + 1, uParam1);
	}
}

void func_141(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2411593[iParam0 /*3*/] = { Global_2411593[iParam0 + 1 /*3*/] };
			Global_2411593.f_121[iParam0] = Global_2411593.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_142(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411593[iParam4 /*3*/] };
	uVar3 = Global_2411593.f_121[iParam4];
	Global_2411593[iParam4 /*3*/] = { Param0 };
	Global_2411593.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411593.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_142(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_143(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_71(iVar5))
		{
			Var1 = { func_69(iVar5) };
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

int func_144(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x3D35F9864E4640B1() != iVar1) || iParam9 == 0)
		{
			if (func_52(iVar1, bParam5, bParam6))
			{
				if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
				{
					if (!bParam8 || (!unk_0x8682D8A6269E52C9(unk_0xD33F4BC17EB987E5(iVar1)) && func_70(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) != unk_0xB5E2A107E006EC7A(iVar1))) || unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1)
						{
							if (((unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1 && iParam10) && bParam7) && func_72(iVar1))
							{
							}
							else if (unk_0x76B3C79DE564AFC6(unk_0xD33F4BC17EB987E5(iVar1)))
							{
								if (func_22(func_69(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_145(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_149(Param0, fParam3, iParam4, iParam5, iParam6) || func_146(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_146(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_148(Param0, iParam4, Global_2416331.f_427[iVar0 /*3*/], Global_2416331.f_557[iVar0]))
			{
				if (func_147(Param0, fParam3, iParam4, Global_2416331.f_427[iVar0 /*3*/], Global_2416331.f_524[iVar0], Global_2416331.f_557[iVar0], 0))
				{
					if (func_52(iVar1, 0, 1) && func_52(iParam5, 0, 1))
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

int func_147(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_22(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_24(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	Var20 = { 0f, Var17.f_1, 0f };
	func_29(&Var20, 0f, 0f, fParam3);
	Var23 = { 0f, Var14.f_1, 0f };
	func_29(&Var23, 0f, 0f, fParam3);
	Var26 = { (unk_0x229F35E7CDDBF757((Var17.f_0 - Var14.f_0)) * 0.5f), 0f, 0f };
	func_29(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var20 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * unk_0x229F35E7CDDBF757((Var17.f_2 - Var14.f_2))));
	Var1[1 /*3*/] = { Param0 + Var20 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * unk_0x229F35E7CDDBF757((Var17.f_2 - Var14.f_2))));
	Var1[2 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * unk_0x229F35E7CDDBF757((Var17.f_2 - Var14.f_2))));
	Var1[3 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * unk_0x229F35E7CDDBF757((Var17.f_2 - Var14.f_2))));
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
		if (func_147(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_148(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_30(iParam3, 1008981770);
	fVar1 = func_30(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_149(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_52(iVar1, 0, 1) && func_52(iParam5, 0, 1))
			{
				if (Global_2416331.f_261[iVar0])
				{
					if (func_22(Global_2416331.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_22(func_69(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2416331.f_261[iVar0])
			{
				if (func_22(Global_2416331.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_52(iVar1, 0, 0))
			{
				if (unk_0x76B3C79DE564AFC6(unk_0xD33F4BC17EB987E5(iVar1)))
				{
					if (func_22(func_69(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_150(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_136(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_54(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x617C37A9A8C9C822(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_151(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
	float fVar17;
	float fVar20;
	struct<3> Var21;
	struct<3> Var24;
	struct<3> Var27;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_152(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xFA2B8165E7D967F2(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x361A61A55A076700(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
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
			if ((iVar8 + iVar9) != iParam4)
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
				func_24(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
				fVar20 = (fVar17 - fVar14);
				if (fVar20 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar20 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_152(Param0, *fParam3, Param6))
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
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { unk_0x261E7847B591A8DC(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x0F2965599B1DC23C(Param0, *fParam3, &Var21))
		{
			Var24 = { Var21 - Param0 };
			if (!iParam11 == 0)
			{
				Var27 = { Var24 / FtoV(unk_0x652D2EEEF1D3E62C(Var24)) };
				func_24(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
				fVar20 = (fVar17 - fVar14);
				Var27 = { Var27 * FtoV((fVar20 * 0.5f)) };
				Var24 = { Var24 - Var27 };
				Var21 = { Param0 + Var24 };
			}
			Var27 = { Var0 - Var21 };
			Var0 = { Var21 };
		}
	}
	return Var0;
}

int func_152(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_29(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_17(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_153(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_20(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2411307[iVar1])
	{
		if (func_19(Param0, &(Global_2410604[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411307[8])
	{
		if (func_19(Param0, &(Global_2410604[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_154(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404997.f_26.f_16)
	{
		switch (Global_2404997.f_26.f_15)
		{
			case 0:
				if (func_136(*uParam0, Global_2404997.f_26.f_8, Global_2404997.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_54(*uParam0, Global_2404997.f_26.f_8, Global_2404997.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x617C37A9A8C9C822(*uParam0, Global_2404997.f_26.f_8, Global_2404997.f_26.f_11, Global_2404997.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_41(*uParam0, Global_2404997.f_26.f_8, Global_2404997.f_26.f_11, Global_2404997.f_26.f_14, Global_2404997.f_26.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_155(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2404997.f_1714 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_34(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_154(uParam0, 1))
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
		Global_2411593.f_162 = 0;
		Global_2411593.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2411593[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2411593.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_156(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2404997.f_1714)
		{
			iVar1 = Global_2404997.f_2080[iVar0];
			if (iVar1 > -1 && iVar1 < 91)
			{
				Var2 = { Global_2404997.f_1715[iVar1 /*4*/] };
				fVar5 = Global_2404997.f_1715[iVar1 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var2) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var2.f_0, Var2.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_145(Var2, fVar5, uParam2->f_34, unk_0x3D35F9864E4640B1(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_34(uParam2->f_35, &Var2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (uParam2->f_3 > 7f)
										{
											if (func_159(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
											{
												bVar11 = true;
											}
										}
										else if (func_159(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_144(Var2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
										{
											bVar11 = true;
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_143(Var2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2411593.f_162)
															{
																Global_2411593[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2411593.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2411593.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2411593.f_162 == 0)
														{
															Global_2411593[0 /*3*/] = { Var2 };
															Global_2411593.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2411593.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var2, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411593[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_142(Var2, fVar5, iVar6);
																		iVar6 = Global_2411593.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2411593.f_162++;
														if (Global_2411593.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2404997.f_1714;
															}
															else if (Global_2411593.f_162 == 40)
															{
																iVar0 = Global_2404997.f_1714;
															}
														}
													}
													else
													{
														Global_2411593[Global_2411593.f_162 /*3*/] = { Var2 };
														Global_2411593.f_121[Global_2411593.f_162] = fVar5;
														Global_2411593.f_162++;
														if (Global_2411593.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2404997.f_1714;
															}
															else if (Global_2411593.f_162 == 40)
															{
																iVar0 = Global_2404997.f_1714;
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
		if (Global_2411593.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411593[0 /*3*/] };
				*uParam1 = Global_2411593.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411593.f_163 > 0 && !Global_2411593.f_163 == Global_2411593.f_162)
				{
					func_140(0, uParam2);
				}
				iVar14 = unk_0x3AF262D7332EEDF5(0, Global_2411593.f_162);
				Var15 = { Global_2411593[0 /*3*/] };
				uVar18 = Global_2411593.f_121[0];
				Global_2411593[0 /*3*/] = { Global_2411593[iVar14 /*3*/] };
				Global_2411593.f_121[0] = Global_2411593.f_121[iVar14];
				Global_2411593[iVar14 /*3*/] = { Var15 };
				Global_2411593.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2411593[0 /*3*/] };
				*uParam1 = Global_2411593.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_155(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_138(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_156(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2404997.f_1714)
	{
		uVar1 = func_157(Param0, fVar0, &fVar0);
		Global_2404997.f_2080[iVar2] = uVar1;
		iVar2++;
	}
}

int func_157(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2404997.f_1714)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2404997.f_1715[iVar3 /*4*/]);
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

void func_158(var uParam0, var uParam1)
{
	unk_0x7F2CA63F48A7F62C(uParam0, uParam1, 0.1f);
	Global_2404997.f_2384 = unk_0xFFDE6A3A0108B7CB();
	Global_2404997.f_2382 = 1;
	Global_2404997.f_2385 = unk_0x898811EA80D35DE2();
}

int func_159(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404997.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x736668867F457F94(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xDE23154833E5D069(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xDE23154833E5D069(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDC9A6EA41577EFB6(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
	if (bParam13)
	{
		if (unk_0x9DC4BF239830A808(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
	if (fParam14 > 0f)
	{
		if (func_120(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_110(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404997.f_2++;
	return 1;
}

void func_160()
{
	func_165();
	func_164();
	func_163();
	func_162();
	func_161();
}

void func_161()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 128)
	{
		Global_2407788[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_162()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404997.f_2401.f_85[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_163()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404997.f_2401.f_52[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_164()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 5)
	{
		Global_2404997.f_2401.f_6[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_165()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404997.f_2401 = { Var0 };
}

void func_166()
{
	if (Global_2404997.f_2382)
	{
		if (unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_2384)
		{
			unk_0xF68333F4BEA40DCB();
		}
		else
		{
			unk_0xF68333F4BEA40DCB();
		}
		Global_2404997.f_2382 = 0;
	}
}

int func_167(bool bParam0)
{
	if (unk_0x5114FCEE2A997B95())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_168(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	struct<17> Var0;
	struct<18> Var28;
	struct<3> Var56;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var28.f_16 = 1;
	Var28.f_22 = 1;
	Var28.f_23 = 1;
	Var28.f_24 = 1;
	Var28 = { Param0 };
	Var28.f_3 = Param6.f_11;
	Var28.f_4 = fParam3;
	Var28.f_5 = 0;
	Var28.f_6 = 1;
	Var28.f_7 = 0;
	Var28.f_15 = 0;
	Var28.f_16 = 1;
	Var28.f_17 = 0;
	if (func_8(&Var28, &Param6, &Var0))
	{
		if ((Param6.f_12 > 0f && Param6.f_7) && Param6.f_8)
		{
			Var56 = { Param0 - Var0[0 /*3*/] };
			if (Var56.f_2 > Param6.f_12)
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

int func_169(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_170(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xEF0CB8FF125B9F9C())
		{
			func_171(uParam0, 0, 0);
		}
	}
}

void func_171(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x27CA09C6DFAB1E79() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x898811EA80D35DE2();
			}
			else
			{
				*uParam0 = unk_0x51A193745FDE917D();
			}
		}
		else
		{
			*uParam0 = unk_0x31CD6E9F83C10233();
		}
		uParam0->f_1 = 1;
	}
}

void func_172()
{
	switch (Local_71[unk_0x43B24C247F35B6BC() /*3*/].f_2)
	{
		case 0:
			func_206();
			func_205();
			if (func_194())
			{
				func_192();
				func_191();
				func_173(35);
				Local_71[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_191();
				Local_71[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_60.f_8 >= 2)
			{
				Local_71[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_7897)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_190() /*11035*/].f_7550.f_2970[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_190() /*11035*/].f_7550.f_2970[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_190() /*11035*/].f_7550.f_2970[iVar2 /*3*/].f_1)
			{
				func_186(iVar2, 1);
				unk_0xCD7E92DE2BFA0B0D(&Global_2489033, (8 + iVar2));
				func_181(2107, -1);
				func_177(67, -1);
				func_181(2568, -1);
				func_177(69, -1);
				unk_0x740F82BDAEA3B1F7(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0x2A3398C6222EB190(Global_2489033, 12))
					{
						func_174(7, 0);
					}
					else
					{
						func_174(15, 0);
					}
				}
			}
		}
	}
}

void func_174(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_176(iParam0, iParam1))
	{
		iVar0 = func_175();
		Global_2455018[iVar0] = iParam0;
	}
}

int func_175()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2455018[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_176(int iParam0, var uParam1)
{
	if (Global_1312841)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312853) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_177(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_179(iParam0, func_180(iParam1));
	iVar0++;
	func_178(iParam0, iVar0, iParam1);
}

void func_178(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2535703[iParam0 /*3*/][func_180(uParam2)];
	unk_0xE931A869061F7BD2(iVar0, iParam1, 1);
}

int func_179(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2535703[iParam0 /*3*/][func_180(iParam1)];
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_180(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_135();
		if (iVar1 > -1)
		{
			Global_2511680 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2511680 = 1;
		}
	}
	return iVar0;
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_185(iParam0, func_180(iParam1), 0);
	iVar0++;
	if (!func_184(iParam0))
	{
		func_183(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_182(iParam0, iVar0, iParam1, 1);
	}
}

void func_182(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2511967[iParam0 /*3*/][func_180(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1365005[func_180(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1365011[func_180(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1365017[func_180(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1365023[func_180(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1364981[func_180(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1364987[func_180(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1364993[func_180(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1364999[func_180(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1364957[func_180(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1364963[func_180(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1364969[func_180(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1364975[func_180(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1365029[func_180(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1365035[func_180(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1365041[func_180(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1365047[func_180(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1365053[func_180(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1365059[func_180(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1365065[func_180(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2536117[0 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2536117[1 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 2916:
			Global_2536117[2 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2536117[3 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 6671:
			Global_2536194[func_180(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1365071[func_180(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1365077[func_180(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1365083[func_180(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1365089[func_180(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2536154[0 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2536154[1 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2536154[2 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2536154[3 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2536154[4 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2536197[0 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2536197[1 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2536197[2 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2536197[3 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2536197[4 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2536213[0 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2536213[1 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2536213[2 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2536213[3 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2536213[4 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3208:
			Global_2536154[5 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2536117[4 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2536229[func_180(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2536238[func_180(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2536232[func_180(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2536241[func_180(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2536235[func_180(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2536244[func_180(iParam2)] = iParam1;
			break;
		
		case 3676:
			Global_2536247[func_180(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2536154[6 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2536117[5 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2536154[7 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2536117[6 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2536154[8 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 3999:
			Global_2536117[7 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2536154[9 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2536117[8 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2536154[10 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2536117[9 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 4007:
			Global_2536154[11 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2536117[10 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 6088:
			Global_2536154[12 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		case 6089:
			Global_2536117[11 /*3*/][func_180(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_183(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_180(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
}

int func_184(int iParam0)
{
	if (Global_1364938)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2916:
			case 3045:
			case 6671:
			case 3040:
			case 3041:
			case 3042:
			case 3043:
			case 3044:
			case 3219:
			case 3221:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3214:
			case 3208:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3676:
			case 3217:
			case 3216:
			case 3999:
			case 3998:
			case 4002:
			case 4001:
			case 4005:
			case 4004:
			case 4008:
			case 4007:
			case 6089:
			case 6088:
				return 1;
				break;
			}
	}
	return 0;
}

int func_185(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2511967[iParam0 /*3*/][func_180(iParam1)];
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_186(int iParam0, int iParam1)
{
	if (Global_2097152[func_190() /*11035*/].f_7550.f_2970[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_190() /*11035*/].f_7550.f_2970[iParam0 /*3*/].f_1 = iParam1;
		func_187(func_189(iParam0), iParam1, -1, 1);
	}
}

void func_187(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_188())
	{
		iVar0 = Global_2534367[iParam0 /*3*/][func_180(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x356621BE3FFD87C4(iVar0, iParam1, iParam3);
		}
	}
}

int func_188()
{
	return 1;
	return 0;
}

int func_189(int iParam0)
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

int func_190()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_191()
{
	if (unk_0xA761A0B6072010C8(uLocal_170))
	{
		unk_0x0C4BDC77192798AE(&uLocal_170);
	}
}

void func_192()
{
	if (!unk_0x2A3398C6222EB190(Global_2434915.f_3640, 0))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_3640), 0);
		func_193();
	}
	else
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_3640), 1);
	}
}

void func_193()
{
	func_181(1185, -1);
}

int func_194()
{
	struct<14> Var0;
	
	if (unk_0x69DA17666D6E3F5A(Local_60.f_2))
	{
		if (unk_0xAA55DF0CB38F413B(Local_60.f_2))
		{
			if (unk_0x652FF1197E1B61C3(unk_0x983B008881BAE40B(Local_60.f_2), unk_0x0031992CA618A445()) && func_204(Local_60.f_2))
			{
				func_203(&(Local_60.f_2));
				if (unk_0xA761A0B6072010C8(uLocal_170))
				{
					unk_0x0C4BDC77192798AE(&uLocal_170);
				}
				if (!func_202(1))
				{
					func_197("ABB_BOXCT", 1);
				}
				Var0.f_2 = 1015281205;
				Var0.f_10 = unk_0x3D35F9864E4640B1();
				Var0.f_3 = uLocal_169;
				func_195(Var0, func_196(1));
				unk_0xCD7E92DE2BFA0B0D(&(Local_71[unk_0x43B24C247F35B6BC() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_195(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1021925946;
	Param0.f_1 = unk_0x3D35F9864E4640B1();
	if (!iParam14 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Param0, 14, iParam14);
	}
}

int func_196(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar1)))
		{
			iVar2 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar1));
			if (func_52(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x3D35F9864E4640B1() || iParam0)
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_197(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	func_198(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_198(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_201() || !unk_0xF4F91CD09D59F42E()) || !func_133(unk_0x3D35F9864E4640B1(), 0))
	{
		return;
	}
	iVar0 = func_199(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1775874.f_5[iVar0 /*53*/] = iParam0;
		Global_1775874.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1775874.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1775874.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1775874.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1775874.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1775874.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_199(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1775874 - 1))
	{
		if (iParam0 > Global_1775874.f_5[iVar0 /*53*/].f_1)
		{
			func_200(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1775874++;
	if (Global_1775874 > 5)
	{
		Global_1775874 = 5;
		return Global_1775874;
	}
	return (Global_1775874 - 1);
}

void func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1775874.f_5[iVar0 /*53*/] = { Global_1775874.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_201()
{
	return unk_0x43456EBBDC27D696(-1762644250);
}

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1622384 > 0;
		
		case 2:
			return Global_1622384.f_1 > 0;
		
		case 3:
			return Global_1622384.f_2 > 0;
		
		case 4:
			return Global_1622384.f_4 > 0;
		
		case 5:
			return Global_1622384.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_203(var uParam0)
{
	var uVar0;
	
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		if (!unk_0xA02DD6B5C8C02298(*uParam0))
		{
		}
	}
	if (unk_0xAA55DF0CB38F413B(*uParam0))
	{
		uVar0 = unk_0xC42CA935BE72299D(*uParam0);
		unk_0x237D39B9E9EE9ADC(&uVar0);
	}
}

int func_204(var uParam0)
{
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		unk_0xED8E0F2F3151048A(uParam0);
		return unk_0xA02DD6B5C8C02298(uParam0);
	}
	return 0;
}

void func_205()
{
	if (!unk_0xA761A0B6072010C8(uLocal_170))
	{
		if (unk_0x69DA17666D6E3F5A(Local_60.f_2))
		{
			uLocal_170 = unk_0xE80C2D6BF636C6C4(unk_0x983B008881BAE40B(Local_60.f_2));
			unk_0x067D86058370B7EB(uLocal_170, 1.2f);
			unk_0x3B815A6E8530D3A5(uLocal_170, 403);
			unk_0xEB934A06DDA5027D(uLocal_170, 2);
			unk_0x50B5259DFC71B8EC(uLocal_170, "ABB_BLIPN");
		}
	}
}

void func_206()
{
	var uVar0;
	
	if (!unk_0x068C69D0643C4B95())
	{
		uVar0 = func_185(1187, -1, 0);
		if (!unk_0x2A3398C6222EB190(uVar0, 14))
		{
			unk_0xCD7E92DE2BFA0B0D(&uVar0, 14);
			func_183(1187, uVar0, -1, 1, 0);
		}
	}
}

int func_207()
{
	return Local_60.f_0;
}

int func_208()
{
	unk_0xBE91026C1FC72180(joaat("prop_drug_package_02"));
	if (unk_0x772F801619C83779(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0)
{
	return Local_71[iParam0 /*3*/];
}

int func_210()
{
	var uVar0;
	
	func_217(&uVar0);
	if (Global_1312830 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 1;
		}
	}
	if (func_216())
	{
		return 1;
	}
	if (Global_2457338)
	{
		return 1;
	}
	if (func_215())
	{
		return 1;
	}
	if (func_214(157))
	{
		if (!func_213())
		{
			return 1;
		}
	}
	if (func_214(155))
	{
		return 1;
	}
	if (!unk_0xE096BC82D913B3DB())
	{
		return 1;
	}
	if (func_211() != 0)
	{
		if (unk_0x7832F791572D5809(func_211()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_211()
{
	switch (func_212())
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

int func_212()
{
	return Global_25222;
}

bool func_213()
{
	return Global_2445582.f_579;
}

int func_214(int iParam0)
{
	if (unk_0xB2481AAB46462A07(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_215()
{
	return Global_2455114;
}

bool func_216()
{
	return Global_2445582.f_574;
}

void func_217(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x4AE700F97F1781DC(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -614201546:
					func_218(iVar0);
					break;
				
				case 1050640701:
					unk_0x4AE700F97F1781DC(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -959337465)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_218(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		if (func_52(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xD33F4BC17EB987E5(Var0.f_1);
			if (unk_0x76B3C79DE564AFC6(uVar3))
			{
				if (unk_0x90219307C9D2728D(uVar3, 0))
				{
					uVar4 = unk_0xCFA31F1E461A6BB5(uVar3, 0);
					if (unk_0x095622A3608A0D06(uVar4, Var0.f_2) && unk_0x93BDC21B9F2C5E43())
					{
						if (func_219(uVar4, &bVar5))
						{
							unk_0xB54B438E5C15D5FB(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x28BB69BE14577487(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_219(var uParam0, var uParam1)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (!unk_0xCC234795142FC2D2(uParam0))
		{
			if (unk_0x8D0F418585E0886B(uParam0))
			{
				if (!unk_0x22237535B3A68DF9(unk_0xE9559A12052415BE(uParam0)))
				{
					unk_0x1581691D748490F3(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xC9FBF92709010AC3(uParam0, 0))
		{
			if (unk_0x3B077EBCBD1ABF1F(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_220()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_221(int iParam0)
{
	return Global_1593076[iParam0 /*647*/];
}

void func_222()
{
	Global_1365155 = -1;
	if (unk_0xA761A0B6072010C8(uLocal_170))
	{
		unk_0x0C4BDC77192798AE(&uLocal_170);
	}
	func_225();
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0xEF0CB8FF125B9F9C())
		{
			if (unk_0x69DA17666D6E3F5A(Local_60.f_2) && unk_0xA02DD6B5C8C02298(Local_60.f_2))
			{
				func_203(&(Local_60.f_2));
			}
			Local_60.f_0 = 4;
		}
	}
	if (unk_0x2A3398C6222EB190(Local_60.f_1, 8))
	{
		func_224();
	}
	func_223();
}

void func_223()
{
	unk_0xBEE2834559A8897A();
}

void func_224()
{
	Global_2501777.f_837 = 0;
	Global_2501777.f_837.f_1 = { 0f, 0f, 0f };
	Global_2501777.f_837.f_4 = 0f;
	Global_2501777.f_837.f_8 = 0;
	unk_0xD804ACF2A7171150(&(Global_2501777.f_837.f_7), 0);
}

void func_225()
{
	if (unk_0x2A3398C6222EB190(uLocal_168, 4))
	{
		unk_0xCCD27740F038A674(unk_0x3D35F9864E4640B1(), 0.72f);
		unk_0xB0AF266F1F0FDC4A(unk_0x3D35F9864E4640B1(), 1f, 1);
		unk_0x39D7CBB493DF9EB4(unk_0x3D35F9864E4640B1(), 1f);
		unk_0xDBFE0FFC51676639(unk_0x3D35F9864E4640B1(), 1f);
		func_226(1);
		unk_0xD804ACF2A7171150(&uLocal_168, 5);
		unk_0xD804ACF2A7171150(&uLocal_168, 7);
		unk_0xD804ACF2A7171150(&uLocal_168, 4);
	}
}

void func_226(int iParam0)
{
	var uVar0;
	
	uVar0 = func_227(iParam0, 0);
	unk_0xC84CB7879942C3BA(uVar0);
}

char* func_227(int iParam0, bool bParam1)
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

int func_228(struct<21> Param0)
{
	func_232(func_233(Param0.f_0), Param0);
	unk_0x2951072C87511341(1);
	func_230(0, -1, 0);
	unk_0x158D750851ECBBF8(&Local_60, 11);
	unk_0xC0AFA7500AD40377(&Local_71, 97);
	if (!func_229())
	{
		return 0;
	}
	unk_0x0BDEAF4CD9510F40(0);
	if (unk_0xEF0CB8FF125B9F9C())
	{
		Local_60.f_7 = Param0.f_16;
		Global_1365155 = Local_60.f_7;
		Local_60.f_3 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0) };
		if (!func_3(Global_2501777.f_837.f_1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_60.f_1), 8);
		}
	}
	iLocal_173 = unk_0x12F270E0E3ED8AA1();
	Local_71[unk_0x43B24C247F35B6BC() /*3*/] = 0;
	return 1;
}

int func_229()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 0;
		}
		if (unk_0xCA641F91944A37DE())
		{
			return 1;
		}
		if (func_216())
		{
			return 0;
		}
		if (func_214(155))
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

int func_230(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF5343104BDF6779F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_223();
			}
			else
			{
				return 0;
			}
		}
		if (!func_231())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x27CA09C6DFAB1E79())
				{
					if (!bParam2)
					{
						func_223();
					}
					else
					{
						return 0;
					}
				}
				if (func_216())
				{
					if (!bParam2)
					{
						func_223();
					}
					else
					{
						return 0;
					}
				}
				if (func_214(155))
				{
					if (!bParam2)
					{
						func_223();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8B05DA934032590D())
			{
				if (!bParam2)
				{
					func_223();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF5343104BDF6779F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			if (!bParam2)
			{
				func_223();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8B05DA934032590D())
	{
		if (!bParam2)
		{
			func_223();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_231()
{
	return Global_1312830;
}

void func_232(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		func_223();
	}
	unk_0x3C5BEC9CD4A5F148(uParam0, 0, Param1.f_16);
}

int func_233(int iParam0)
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
		
		case 112:
			return 32;
		
		case 113:
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
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 2;
		
		case 135:
			return 1;
		
		case 131:
			return 2;
		
		case 132:
			return 4;
		
		case 133:
			return 2;
		
		case 134:
			return 2;
		
		case 116:
			return 1;
		
		case 136:
			return 2;
		
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
			return 0;
		
		case 146:
			return 1;
		
		case 143:
			return 4;
		
		case 144:
			return 16;
		
		case 145:
			return 32;
		
		default:
	}
	return 0;
}

