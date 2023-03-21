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
	if (unk_0x44243F2E2F58B8E3())
	{
		if (!func_234(ScriptParam_0))
		{
			func_228();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_227(unk_0x8CFC7D6E1DA5D304()) != 1 && !unk_0xB03A1684359C50A1(Global_2512581.f_842.f_7, 0))
			{
				func_228();
			}
		}
	}
	uLocal_169 = ScriptParam_0.f_19;
	while (true)
	{
		func_226();
		if (func_216())
		{
			func_228();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_227(unk_0x8CFC7D6E1DA5D304()) != 1 && Global_1626045 == 0)
			{
				func_228();
			}
		}
		if (unk_0x3AB73ED02FDAC9A8() != iLocal_173)
		{
			func_228();
		}
		unk_0x5B94EC84FE52BAB5();
		switch (func_215(unk_0xA651DA0BC9FD8FA4()))
		{
			case 0:
				if (func_214())
				{
					if (func_213() == 1)
					{
						Local_71[unk_0xA651DA0BC9FD8FA4() /*3*/] = 1;
					}
					else if (func_213() == 4)
					{
						Local_71[unk_0xA651DA0BC9FD8FA4() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_213() == 1)
				{
					func_178();
				}
				else if (func_213() == 4)
				{
					Local_71[unk_0xA651DA0BC9FD8FA4() /*3*/] = 3;
				}
				if (Local_71[unk_0xA651DA0BC9FD8FA4() /*3*/].f_2 == 0)
				{
					if ((!unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Local_60.f_3, 500f, 500f, 500f, 0, 1, 0) && func_227(unk_0x8CFC7D6E1DA5D304()) != 1) && !unk_0xB03A1684359C50A1(Global_2512581.f_842.f_7, 0))
					{
						Local_71[unk_0xA651DA0BC9FD8FA4() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_176(&(Local_60.f_9));
				if (func_175(&(Local_60.f_9)))
				{
					Local_71[unk_0xA651DA0BC9FD8FA4() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_71[unk_0xA651DA0BC9FD8FA4() /*3*/] = 4;
			
			case 4:
				func_228();
				break;
		}
		if (unk_0xF67B871D7588B9D9())
		{
			switch (func_213())
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
	if (Local_60.f_7 >= 32 && func_227(unk_0x8CFC7D6E1DA5D304()) == 1)
	{
		if (func_3(Global_2512581.f_842.f_1))
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
			if (!unk_0x49E68AAD93AADF10(Local_60.f_2) || Local_60.f_6 != -1)
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
	while (iVar0 < unk_0xF02902C16AF3CA92())
	{
		if (unk_0x0CA6AB9C192005B8(unk_0xF4E7C3C6384793AA(iVar0)))
		{
			if (Local_60.f_6 == -1)
			{
				if (unk_0xB03A1684359C50A1(Local_71[iVar0 /*3*/].f_1, 0))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!unk_0xB03A1684359C50A1(Local_60.f_1, 7))
			{
				if (unk_0xB03A1684359C50A1(Local_71[iVar0 /*3*/].f_1, 1))
				{
					unk_0xD2A9C3F486236CC5(&(Local_60.f_1), 7);
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
	
	if (!unk_0x49E68AAD93AADF10(Local_60.f_2))
	{
		if (func_214())
		{
			if (unk_0xC4103B26BB866E36(1))
			{
				fVar5 = 250f;
				Var6 = { Local_60.f_3 };
				if (unk_0xB03A1684359C50A1(Local_60.f_1, 8))
				{
					Var0 = { Global_2512581.f_842.f_1 };
					uVar3 = Global_2512581.f_842.f_4;
				}
				if (func_227(unk_0x8CFC7D6E1DA5D304()) == 7)
				{
					iVar12 = unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304());
					if (Global_1646129.f_97[iVar12 /*9938*/].f_1242[0 /*30*/].f_10 > 0f)
					{
						Var6 = { Global_1646129.f_97[iVar12 /*9938*/].f_1242[0 /*30*/].f_3 };
						Var9 = { Global_1646129.f_97[iVar12 /*9938*/].f_1242[0 /*30*/].f_6 };
						fVar5 = Global_1646129.f_97[iVar12 /*9938*/].f_1242[0 /*30*/].f_10;
						iVar4 = 1;
					}
					else if (Global_1646129.f_97[iVar12 /*9938*/].f_1242[0 /*30*/].f_9 > 0f)
					{
						Var6 = { Global_1646129.f_97[iVar12 /*9938*/].f_1242[0 /*30*/] };
						fVar5 = Global_1646129.f_97[iVar12 /*9938*/].f_1242[0 /*30*/].f_9;
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
					if (unk_0xB03A1684359C50A1(Local_60.f_1, 8) || func_174(Var6, fVar5, &Var0, &uVar3, Var13))
					{
						if (Local_60.f_7 >= 32 || func_227(unk_0x8CFC7D6E1DA5D304()) == 1)
						{
							Local_60.f_2 = unk_0xCCFE4A4520579FB7(unk_0x8125794BDF04342F(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_60.f_2 = unk_0xCCFE4A4520579FB7(unk_0x6681F996524A54E5(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0xB88121FF8A34A66F(unk_0xC6442477EF1FCEE7(Local_60.f_2), uVar3);
					}
				}
				else if (unk_0xB03A1684359C50A1(Local_60.f_1, 8) || func_7(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_60.f_7 >= 32 || func_227(unk_0x8CFC7D6E1DA5D304()) == 1)
					{
						Local_60.f_2 = unk_0xCCFE4A4520579FB7(unk_0x8125794BDF04342F(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_60.f_2 = unk_0xCCFE4A4520579FB7(unk_0x6681F996524A54E5(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0xB88121FF8A34A66F(unk_0xC6442477EF1FCEE7(Local_60.f_2), uVar3);
				}
			}
		}
	}
	if (unk_0x49E68AAD93AADF10(Local_60.f_2))
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
			if (((!Global_2405047.f_2432 == *uParam0 || !Global_2405047.f_2432.f_1 == uParam0->f_1) || !Global_2405047.f_2432.f_2 == uParam0->f_2) || !Global_2405047.f_2435 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405047.f_2446 == uParam0->f_8 || !Global_2405047.f_2446.f_1 == uParam0->f_8.f_1) || !Global_2405047.f_2446.f_2 == uParam0->f_8.f_2) || !Global_2405047.f_2449 == uParam0->f_11) || !Global_2405047.f_2449.f_1 == uParam0->f_11.f_1) || !Global_2405047.f_2449.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405047.f_2446 == uParam0->f_8 || !Global_2405047.f_2446.f_1 == uParam0->f_8.f_1) || !Global_2405047.f_2446.f_2 == uParam0->f_8.f_2) || !Global_2405047.f_2449 == uParam0->f_11) || !Global_2405047.f_2449.f_1 == uParam0->f_11.f_1) || !Global_2405047.f_2449.f_2 == uParam0->f_11.f_2) || !Global_2405047.f_2452 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405047.f_2430 == 1)
		{
			if (unk_0x19B3A29FD53C54A6(Global_2405047.f_2439))
			{
				if (Global_2405047.f_2439 == unk_0xBCF9D020FA9C313D())
				{
					if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2436) < func_173(0))
					{
						return 0;
					}
				}
				else if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2436) < func_173(0))
				{
					return 0;
				}
			}
			unk_0xC68EAACEC25A9D7D();
			unk_0xD506485F6CF85F40();
			func_172();
		}
		Global_2405047.f_2430 = 0;
	}
	else if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2436) > func_173(0))
	{
		Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
		func_166();
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
	unk_0xEA3ACC77B4C2040A(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2405047.f_2430)
	{
		unk_0xC68EAACEC25A9D7D();
		unk_0xD506485F6CF85F40();
		func_172();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_165(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x46B1D19CA7396DFD())
		{
			Global_2405047.f_2453 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405047.f_2432 = { *uParam0 };
					Global_2405047.f_2435 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405047.f_2446 = { uParam0->f_8 };
					Global_2405047.f_2449 = { uParam0->f_11 };
					Global_2405047.f_2452 = 0f;
					Global_2405047.f_2432 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405047.f_2446 = { uParam0->f_8 };
					Global_2405047.f_2449 = { uParam0->f_11 };
					Global_2405047.f_2452 = uParam0->f_14;
					Global_2405047.f_2432 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_164(Var8.f_0, Var8.f_1);
			}
			Global_2405047.f_2431 = 1;
			Global_2405047.f_2430 = 1;
			Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
			Global_2405047.f_2436 = unk_0xE92FCF3C05C2EF1D();
			Global_2405047.f_2439 = unk_0xBCF9D020FA9C313D();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405047.f_2430)
	{
		if (Global_2405047.f_2431 == 1)
		{
			if (unk_0x29C76D80E7597FEE(fVar4, fVar5, fVar6, fVar7) || unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2437) > 5000)
			{
				Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
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
					if (func_163(Global_1646129.f_138609))
					{
						Var26.f_9 = 1;
					}
					func_141(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_140(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405047.f_2431 = 9;
				}
				else
				{
					Global_2405047.f_2431 = 2;
				}
			}
		}
		if (Global_2405047.f_2431 == 2)
		{
			if ((unk_0xB3E527FB54121733(Var11, Var14) || unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2437) > 15000) || unk_0x9E4B194E35B1D4FF(Var11, Var14) == 0)
			{
				Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
				if (uParam0->f_5 && !func_137(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					Global_2405047.f_2431 = 3;
				}
				else
				{
					Global_2405047.f_2431 = 4;
				}
			}
			else if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2441) > 7000)
			{
				func_136(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2405047.f_2431 == 3)
		{
			if (func_135() || unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2437) > 10000)
			{
				Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
				Global_2405047.f_2431 = 4;
			}
		}
		if (Global_2405047.f_2431 == 4)
		{
			if (unk_0x46B1D19CA7396DFD())
			{
				unk_0xC68EAACEC25A9D7D();
				unk_0xD506485F6CF85F40();
			}
			else
			{
				iVar0 = 0;
				func_166();
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
					if (!unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1)
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
							if (unk_0xBA502A3D4BBC47F4(unk_0x8CFC7D6E1DA5D304(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
								Global_2405047.f_2431 = 5;
							}
							break;
						
						case 1:
							func_134(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x9D676F53D9D8D900(unk_0x8CFC7D6E1DA5D304(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
								Global_2405047.f_2431 = 5;
							}
							break;
						
						case 2:
							if (unk_0x9D676F53D9D8D900(unk_0x8CFC7D6E1DA5D304(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
								Global_2405047.f_2431 = 5;
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
					Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
					Global_2405047.f_2431 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x36DDA93D5E4FE5AB(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_134(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x36808BA8196057FA(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x36808BA8196057FA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405047.f_2431 == 5)
		{
			if (func_59(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405047.f_2457.f_5)
				{
					Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
					Global_2405047.f_2431 = 6;
				}
				else
				{
					Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x7F21F40674579303(Var1.f_0, Var1.f_1);
						}
					}
					Global_2405047.f_2431 = 9;
				}
			}
			else if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2437) > 20000)
			{
				unk_0xC68EAACEC25A9D7D();
				unk_0xD506485F6CF85F40();
				Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
				Global_2405047.f_2431 = 8;
			}
		}
		if (Global_2405047.f_2431 == 6)
		{
			iVar0 = 0;
			Global_2405047.f_2457.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_58(uParam0->f_4))
				{
					if (unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_57(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Var8)))
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
			Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
			Global_2405047.f_2431 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x36DDA93D5E4FE5AB(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_134(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x36808BA8196057FA(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x36808BA8196057FA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405047.f_2431 == 7)
		{
			if (func_59(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2405047.f_2586[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_140(Global_2405047.f_2586[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2586[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_55(Global_2405047.f_2586[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2586[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0xBD0ECFC2907D1982(Global_2405047.f_2586[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405047.f_2586[iVar17 /*3*/] };
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
				Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = unk_0x7F21F40674579303(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2405047.f_2431 = 9;
			}
			else if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_2437) > 20000)
			{
				Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
				Global_2405047.f_2431 = 8;
			}
		}
		if (Global_2405047.f_2431 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_2405047.f_481))
				{
				}
			}
			else if (Global_2405047.f_2457.f_2)
			{
				func_9(uParam2, &(Global_2405047.f_2457.f_6));
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
				*(uParam2[0 /*3*/]) = { Global_2405047.f_2432 };
				func_11(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2405047.f_2437 = unk_0xE92FCF3C05C2EF1D();
			Global_2405047.f_2431 = 9;
		}
		if (Global_2405047.f_2431 == 9)
		{
			Global_2405047.f_2430 = 0;
			unk_0xC68EAACEC25A9D7D();
			unk_0xD506485F6CF85F40();
			func_172();
			return 1;
		}
		Global_2405047.f_2436 = unk_0xE92FCF3C05C2EF1D();
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
						if (func_58(uParam5->f_4) || !unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_57(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_57(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Var67)))
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
		func_141(&Var0, &uVar3, &Var4);
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
					if (unk_0xB5E0B10B5D88A8F5(Var0, &uVar63, 0, 0))
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
				if (unk_0xB5E0B10B5D88A8F5(Var0, &uVar63, 0, 0))
				{
					Var0.f_2 = uVar63;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2405047.f_641 = 1;
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
			return func_55(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0xBD0ECFC2907D1982(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_13(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_54(Param0, uParam3))
	{
		if (func_14(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0xF9E0586D9E1040C8(Param0, 0, uParam3, iParam4))
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
		if ((iParam4 == 1 && !func_34(Global_2405047.f_504, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
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
	while (iVar0 < Global_2411026[iVar4])
	{
		if (func_19(Var1, &(Global_2409882[iVar4 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_16(&Var1, Global_2409882[iVar4 /*127*/][iVar0 /*7*/], Global_2409882[iVar4 /*127*/][iVar0 /*7*/].f_3, Global_2409882[iVar4 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411026[8])
	{
		if (func_19(Var1, &(Global_2409882[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_16(&Var1, Global_2409882[8 /*127*/][iVar0 /*7*/], Global_2409882[8 /*127*/][iVar0 /*7*/].f_3, Global_2409882[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x828D7620A6039793(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x828D7620A6039793(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
	return unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_20(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411036[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411036[1])
	{
		if (Param0.f_0 < Global_2411040[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411036[2])
	{
		if (Param0.f_0 < Global_2411040[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2411040[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2411040[3])
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
	
	if (func_31(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		if (Global_1646129.f_52935 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1646129.f_52935)
			{
				if (Global_1646129.f_52936[iVar0 /*68*/].f_7 != 0)
				{
					if (func_22(Param0, Global_1646129.f_52936[iVar0 /*68*/], Global_1646129.f_52936[iVar0 /*68*/].f_6, Global_1646129.f_52936[iVar0 /*68*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1646129.f_49726 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1646129.f_49726)
			{
				if (Global_1646129.f_49729[iVar0 /*130*/].f_16 != 0)
				{
					if (func_22(Param0, Global_1646129.f_49729[iVar0 /*130*/], Global_1646129.f_49729[iVar0 /*130*/].f_3, Global_1646129.f_49729[iVar0 /*130*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1646129.f_66586 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1646129.f_66586)
			{
				if (Global_1646129.f_66590[iVar0 /*213*/].f_12 != 0)
				{
					if (func_22(Param0, Global_1646129.f_66590[iVar0 /*213*/], Global_1646129.f_66590[iVar0 /*213*/].f_3, Global_1646129.f_66590[iVar0 /*213*/].f_12, 0.5f))
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
		if (unk_0xBD0ECFC2907D1982(Param0, Var0, Var3, fVar6, 0, 1))
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
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x36E1A96E1D63ED91((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x36E1A96E1D63ED91((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x36E1A96E1D63ED91((Var6.f_0 - Var3.f_0));
}

void func_24(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x13F3D1D84F5B8F2E(iParam0))
	{
		unk_0x0D8E51F437C55570(iParam0, fParam1, fParam2);
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
	
	func_26(iParam0, &Global_1315788);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x13F3D1D84F5B8F2E(Global_1315788[iVar0]))
		{
			unk_0x0D8E51F437C55570(Global_1315788[iVar0], &(Global_1315792[iVar0 /*3*/]), &(Global_1315799[iVar0 /*3*/]));
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
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
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
	if (Global_1595681[iParam0 /*678*/] == -1)
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
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_13.f_1, 0);
}

int func_34(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_47(Param0))
	{
		if (func_46(uParam3, bParam6, 0, 1, 1))
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
			func_29(&Var0, 0f, 0f, unk_0x3D81861E1A1652A9(0f, 360f));
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
		if (unk_0x2A488C176D52CCA5(Param0, Global_2405047.f_2693[iVar0 /*3*/]) < fParam3)
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
			func_39(&Var2, &(Global_2405047.f_360[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_42(Var2, &uVar1) || func_38(Var2))
			{
				Var2 = { *uParam0 };
				func_39(&Var2, &(Global_2405047.f_360[iVar0 /*12*/]), 1036831949, 1, bParam2);
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
	
	if (Global_2405047.f_576 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2405047.f_573);
		if (fVar0 < Global_2405047.f_576)
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
				*uParam0 = { func_41(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2691) * uParam1->f_8)), 0, fParam2, bParam3) };
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
				func_35(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2691) * uParam1->f_8)), fParam2, bParam3, 0);
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
		unk_0xF76F6CDAE27FDDDA(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_140(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_55(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0xBD0ECFC2907D1982(Var1, Param3, Param6, fParam9, 0, 1))
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
	
	if (func_45())
	{
		return 0;
	}
	iVar1 = func_44();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405047.f_360[iVar0 /*12*/].f_9 == 1)
		{
			if (func_43(Param0, &(Global_2405047.f_360[iVar0 /*12*/]), 1008981770, 0, 0))
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
			return func_140(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405047.f_2691) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_55(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
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
		if (Global_2405047.f_360[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_45()
{
	return Global_1808664.f_28;
}

int func_46(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409745[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409745[iVar0 /*17*/].f_16))
			{
				if (func_43(*uParam0, &(Global_2409745[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409745[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409745[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_39(&Var1, &(Global_2409745[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_46(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_39(&Var1, &(Global_2409745[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_47(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405047.f_507 && !Global_2405047.f_508)
	{
		if (!Global_2405047.f_44.f_313)
		{
			if (!func_51(unk_0x8CFC7D6E1DA5D304(), 1))
			{
				return 1;
			}
			if (!func_50(Param0, 1008981770))
			{
				if (!func_46(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_46(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_49(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_48(&(Global_2405047.f_44[iVar0 /*12*/])) };
					if (!func_46(&Var1, 0, 0, 0, 1))
					{
						if (!func_46(&Param0, 0, 0, 0, 1))
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

Vector3 func_48(var uParam0)
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

int func_49(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_43(Param0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_50(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_43(Param0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_51(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_52(iParam0) != 0;
	}
	return func_31(iParam0, bParam1);
}

int func_52(int iParam0)
{
	if (func_53(iParam0, 0, 1))
	{
		return Global_2422724[iParam0 /*420*/].f_1;
	}
	return 0;
}

int func_53(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_54(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405047.f_2228 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_2228)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2405047.f_2229[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2405047.f_2229[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_55(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_56(&Param3, &Param6);
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

void func_56(var uParam0, var uParam1)
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

int func_57(struct<3> Param0, struct<3> Param3, float fParam6)
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

int func_58(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_59(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2405047.f_2457.f_1 == 0 && Global_2405047.f_2457 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x32EF3278E82F5BA6(&(Global_2405047.f_2457.f_1)))
			{
				case 0:
					func_132(uParam1, uParam2);
					if (!Global_2405047.f_2457.f_2)
					{
						if (uParam2->f_7 && Global_2405047.f_538.f_7 == 0)
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
								*(uParam0[0 /*3*/]) = { Global_2405047.f_2432 };
							}
							if (uParam1->f_5 && func_10(Global_2405047.f_481))
							{
								if (!Global_2405047.f_2457.f_5)
								{
									Global_2405047.f_2457.f_5 = 1;
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
							uParam0->f_16[0] = unk_0x3D81861E1A1652A9(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_132(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x46B1D19CA7396DFD())
		{
			if (!unk_0xF12A55F0471AEA2E())
			{
				if (unk_0x0A8D3C8ED2124B28())
				{
					func_132(uParam1, uParam2);
					Global_2405047.f_2457.f_1 = unk_0x62EA97B6D1E28753();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xD506485F6CF85F40();
				func_132(uParam1, uParam2);
				if (!Global_2405047.f_2457.f_2)
				{
					Global_2405047.f_2457.f_5 = 1;
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
		func_129(Global_2405047.f_538, &(Global_2405047.f_2457.f_52), &(Global_2405047.f_2457.f_85));
	}
	if (uParam2->f_7 && !Global_2405047.f_2457.f_4)
	{
		Global_2405047.f_2457.f_4 = 1;
		func_67(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
	if (Global_2405047.f_2457.f_1 > 0 || Global_2405047.f_2457 > 0)
	{
		if (uParam1->f_5 || unk_0x46B1D19CA7396DFD())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405047.f_2457.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405047.f_2457.f_3)
					{
						iVar4 = Global_2405047.f_2457.f_3 + 1;
					}
					if (iVar4 > (Global_2405047.f_2457.f_1 - 1))
					{
						iVar4 = (Global_2405047.f_2457.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x18964759CA8D7813(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0xD4090B3C9D394242(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xCBCE855C35CA414F(iVar4);
					}
					else
					{
						unk_0x60CB1CD1496F3D95(iVar4, &iVar5);
					}
					func_67(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2405047.f_2457.f_3 = iVar4;
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
			iVar4 = Global_2405047.f_2457.f_1;
		}
		if (Global_2405047.f_2457.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405047.f_2845)
			{
				func_61(&(Global_2405047.f_2457.f_6[0 /*9*/]), &(Global_2405047.f_2457.f_6[1 /*9*/]), &(Global_2405047.f_2457.f_6[2 /*9*/]));
			}
			if (uParam1->f_5 && func_10(Global_2405047.f_481))
			{
				if (Global_2405047.f_2457.f_2)
				{
					func_9(uParam0, &(Global_2405047.f_2457.f_6));
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405047.f_2432 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x3D81861E1A1652A9(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405047.f_2457.f_2)
			{
				func_9(uParam0, &(Global_2405047.f_2457.f_6));
				func_60(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x61E9B3BFA06B017B(0, Global_2405047.f_2457.f_1);
				unk_0x18964759CA8D7813(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_15(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405047.f_2432 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0x3D81861E1A1652A9(0f, 360f);
					func_60(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405047.f_2432 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0x3D81861E1A1652A9(0f, 360f);
				func_60(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405047.f_2432 };
		if (uParam1->f_5 && func_10(Global_2405047.f_481))
		{
			if (!Global_2405047.f_2457.f_5)
			{
				Global_2405047.f_2457.f_5 = 1;
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
		uParam0->f_16[0] = unk_0x3D81861E1A1652A9(0f, 360f);
		func_60(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_60(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405047.f_2586[(3 - iVar0) /*3*/] = { Global_2405047.f_2586[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405047.f_2586[0 /*3*/] = { Param0 };
}

void func_61(var uParam0, var uParam1, var uParam2)
{
	if (func_10(Global_2405047.f_481) && func_66() < 4096)
	{
		func_65(uParam0, 0f);
		func_65(uParam1, uParam0->f_2);
		func_65(uParam2, uParam1->f_2);
	}
	else
	{
		func_64(uParam0);
		func_63(uParam2, uParam0->f_4);
		func_62(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_62(var uParam0, struct<3> Param1, struct<3> Param4)
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
		if (Global_2407912[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407912[iVar0 /*9*/].f_4, Param1);
			fVar3 = unk_0x2A488C176D52CCA5(Global_2407912[iVar0 /*9*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407912[iVar0 /*9*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407912[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_63(var uParam0, struct<3> Param1)
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
		if (Global_2407912[iVar0 /*9*/] > 0)
		{
			fVar2 = unk_0x2A488C176D52CCA5(Global_2407912[iVar0 /*9*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2407912[iVar0 /*9*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407912[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_64(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407912[iVar0 /*9*/] > 0)
		{
			if (Global_2407912[iVar0 /*9*/].f_1 > fVar1)
			{
				fVar1 = Global_2407912[iVar0 /*9*/].f_1;
				Var2 = { Global_2407912[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_65(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<9> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407912[iVar0 /*9*/] > 0)
		{
			if (Global_2407912[iVar0 /*9*/].f_2 < fVar1 && Global_2407912[iVar0 /*9*/].f_2 > fParam1)
			{
				fVar1 = Global_2407912[iVar0 /*9*/].f_2;
				Var2 = { Global_2407912[iVar0 /*9*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_66()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407912[iVar0 /*9*/] > iVar1)
		{
			iVar1 = Global_2407912[iVar0 /*9*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_67(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
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
		if (Global_2405047.f_481 == 1)
		{
			if (unk_0x36E1A96E1D63ED91((Global_2405047.f_504.f_2 - Param0.f_2)) < 25f)
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
		if (func_125(unk_0x8CFC7D6E1DA5D304()))
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
		if (!func_124(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x6CFDE98D629C4466(unk_0x18F7BE9ACB7D08F4(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x6CFDE98D629C4466(unk_0x18F7BE9ACB7D08F4(), Param0, 20f))
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
		if (!func_123(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (func_117(Param0, fParam3, uParam4->f_15, func_122(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2405047.f_3;
		}
	}
	else if (!func_114(Param0, 25f, unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_111(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_111(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405047.f_673)
		{
			Var11 = { Global_2405047.f_504 };
			if (Global_2405047.f_481 == 26)
			{
				Var11 = { Global_2405047.f_538.f_18 };
			}
			if (!func_36(Param0, 0.5f))
			{
				if (func_47(Var11))
				{
					if (!func_46(&Param0, 0, 0, 0, 1) && !func_110(&Param0, 0))
					{
						iVar7 += 512;
					}
				}
				else if (!func_110(&Param0, 0))
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
	else if (!func_109(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_108(unk_0x8CFC7D6E1DA5D304()) && func_106(unk_0x8CFC7D6E1DA5D304())))
		{
			if (!func_105(&Param0, &(Global_2405047.f_2457.f_85), 0, 1065353216))
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
		if (!func_106(unk_0x8CFC7D6E1DA5D304()))
		{
			if (!func_104(Param0, &(Global_2405047.f_2457.f_52), &(Global_2405047.f_2457.f_85), 1073741824))
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
	if (func_103(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_10(Global_2405047.f_481))
			{
				if (func_50(Param0, 0.01f))
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
		if (func_102(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2405047.f_44.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0xB79050CDE709F080(unk_0x8EFD19513210F032(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405047.f_673)
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
		iVar15 = func_49(Param0, 1008981770);
		if (iVar15 > -1)
		{
			func_101(Param0, &Var16, &Var19, &fVar22);
			if (!func_96(&(Global_2405047.f_44[iVar15 /*12*/]), Var16, Var19, fVar22))
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
	else if (func_95(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var24.f_2 = 1176256410;
	bVar33 = false;
	bVar34 = false;
	if (Global_2405047.f_2845 && uParam4->f_5)
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
				fVar0 = func_87(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			else
			{
				fVar0 = func_87(Param0, Global_2405047.f_2432, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
			}
			if (bVar8)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_10(Global_2405047.f_481) && iVar7 < 4096)
			{
				Var24.f_2 = func_85(Param0);
			}
			Var24.f_4 = { Param0 };
			Var24.f_7 = fParam3;
			Var24.f_0 = iVar7;
			Var24.f_1 = fVar0;
			func_84(Var24);
			Global_2405047.f_2457.f_2 = 1;
		}
	}
	else
	{
		iVar23 = 0;
		while (iVar23 < 5)
		{
			if (iVar7 >= Global_2405047.f_2457.f_6[iVar23 /*9*/])
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
							fVar0 = func_87(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						else
						{
							fVar0 = func_87(Param0, Global_2405047.f_2432, uParam5->f_6, uParam5->f_4, bVar4, iVar9, &(Var24.f_8));
						}
						if (bVar8)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar33 = true;
					}
					if ((func_10(Global_2405047.f_481) && iVar7 == Global_2405047.f_2457.f_6[iVar23 /*9*/]) && iVar7 < 4096)
					{
						if (!bVar34)
						{
							fVar2 = func_85(Param0);
							bVar34 = true;
						}
						if (fVar2 < Global_2405047.f_2457.f_6[iVar23 /*9*/].f_2)
						{
							Var24.f_4 = { Param0 };
							Var24.f_7 = fParam3;
							Var24.f_0 = iVar7;
							Var24.f_1 = fVar0;
							Var24.f_2 = fVar2;
							func_83(Var24, iVar23);
							Global_2405047.f_2457.f_2 = 1;
							return;
						}
					}
					else if (iVar7 > Global_2405047.f_2457.f_6[iVar23 /*9*/] || (iVar7 == Global_2405047.f_2457.f_6[iVar23 /*9*/] && fVar0 > Global_2405047.f_2457.f_6[iVar23 /*9*/].f_1))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_1 = fVar0;
						func_83(Var24, iVar23);
						Global_2405047.f_2457.f_2 = 1;
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
						fVar5 = func_82(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_69(Param0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_68(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_68(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar33 = true;
					}
					if (iVar7 > Global_2405047.f_2457.f_6[iVar23 /*9*/] || (iVar7 == Global_2405047.f_2457.f_6[iVar23 /*9*/] && fVar3 > Global_2405047.f_2457.f_6[iVar23 /*9*/].f_3))
					{
						Var24.f_4 = { Param0 };
						Var24.f_7 = fParam3;
						Var24.f_0 = iVar7;
						Var24.f_3 = fVar3;
						func_83(Var24, iVar23);
						Global_2405047.f_2457.f_2 = 1;
						return;
					}
				}
			}
			iVar23++;
		}
	}
}

float func_68(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_69(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
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
		if (func_53(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0x8CFC7D6E1DA5D304() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_72(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x1BE7B010C9B9841E(iVar11) == unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))
					{
						if (!unk_0x1BE7B010C9B9841E(iVar11) == -1 || !func_51(unk_0x8CFC7D6E1DA5D304(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar11) || !bParam6)
					{
						if (func_71(iVar11))
						{
							Var5 = { func_70(iVar11) };
							if (!iVar11 == unk_0x8CFC7D6E1DA5D304())
							{
								Var8 = { unk_0x908A8EA6B5076D06(unk_0x6604E096142B4B55(iVar11)) };
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
							fVar1 = unk_0x15EE504466B7BBD3(Param0, Var5, 1);
							fVar2 = unk_0x15EE504466B7BBD3(Param0, Var8, 1);
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

Vector3 func_70(int iParam0)
{
	return unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iParam0), 0);
}

int func_71(int iParam0)
{
	if (unk_0xD84C4308F24CEEE7(unk_0x6604E096142B4B55(iParam0)) || Global_2422724[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0)
{
	if (func_53(iParam0, 0, 1))
	{
		if (!func_80(iParam0))
		{
			if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iParam0))
			{
				if (!unk_0x1BE7B010C9B9841E(iParam0) == unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))
				{
					if (func_31(unk_0x8CFC7D6E1DA5D304(), 1))
					{
						if (!func_79(unk_0x1BE7B010C9B9841E(iParam0), unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x1BE7B010C9B9841E(iParam0) == -1 && unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1)
				{
					if (!func_31(unk_0x8CFC7D6E1DA5D304(), 1))
					{
						if (!func_73(iParam0))
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

int func_73(int iParam0)
{
	if (func_78(unk_0x8CFC7D6E1DA5D304(), iParam0))
	{
		return 1;
	}
	Global_2491936 = { func_77(iParam0) };
	if (unk_0x5AA8CFBEDE9B83FC(&Global_2491936))
	{
		return 1;
	}
	if (func_74(unk_0x8CFC7D6E1DA5D304(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_76(iParam0);
	if (!iVar0 == func_75())
	{
		if (iVar0 == func_76(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_75()
{
	return -1;
}

int func_76(int iParam0)
{
	if (iParam0 != func_75())
	{
		return Global_1627460[iParam0 /*530*/].f_11;
	}
	return func_75();
}

struct<13> func_77(var uParam0)
{
	struct<13> Var0;
	
	unk_0xAFA03929DD14DF46(uParam0, &Var0, 13);
	return Var0;
}

int func_78(int iParam0, var uParam1)
{
	if (unk_0xE906D9FB40E35957())
	{
		Global_2491936 = { func_77(iParam0) };
		Global_2491949 = { func_77(uParam1) };
		if (unk_0x9FDA5C5DFB3FE364(&Global_2491936))
		{
			if (unk_0x9FDA5C5DFB3FE364(&Global_2491949))
			{
				unk_0x4AEF279CFD4A57C6(&Global_2491866, 35, &Global_2491936);
				unk_0x4AEF279CFD4A57C6(&Global_2491901, 35, &Global_2491949);
				if (Global_2491866 == Global_2491901)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1, int iParam2)
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
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 0);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 1);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 2);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 4);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 5);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 6);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 8);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 9);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 10);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 12);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 13);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 14);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_80(int iParam0)
{
	if (func_137(iParam0, 0))
	{
		return 1;
	}
	if (func_81())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_81()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

float func_82(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_53(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			if (!unk_0xEC0ECEF2AF3FDA8D())
			{
				if (unk_0x6157232E032EBC56(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0));
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
		if (func_53(iVar1, 1, 1))
		{
			if (!func_137(iVar1, 0) && unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x8CFC7D6E1DA5D304()))
				{
					if (func_71(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x1BE7B010C9B9841E(iVar1) != unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))) || unk_0x1BE7B010C9B9841E(iVar1) == -1)
							{
								if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x1BE7B010C9B9841E(iVar1) != iParam7 || unk_0x1BE7B010C9B9841E(iVar1) == -1)
						{
							if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iVar1), 0));
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

void func_83(struct<9> Param0, int iParam9)
{
	struct<9> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405047.f_2457.f_6[iParam9 /*9*/] };
	Global_2405047.f_2457.f_6[iParam9 /*9*/] = { Param0 };
	if (iParam9 < 4)
	{
		func_83(Var0, iParam9 + 1);
	}
}

void func_84(struct<9> Param0)
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	float fVar11;
	int iVar12;
	
	Var1.f_2 = 1176256410;
	iVar10 = func_66();
	if (Param0.f_0 > iVar10)
	{
		iVar10 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407912[iVar0 /*9*/] < iVar10)
		{
			Global_2407912[iVar0 /*9*/] = { Var1 };
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
		if (Global_2407912[iVar0 /*9*/] == 0)
		{
			Global_2407912[iVar0 /*9*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar11 = 9999.9f;
	iVar12 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407912[iVar0 /*9*/] > 0)
		{
			if (Global_2407912[iVar0 /*9*/].f_1 < fVar11)
			{
				fVar11 = Global_2407912[iVar0 /*9*/].f_1;
				iVar12 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar12 > -1)
	{
		Global_2407912[iVar12 /*9*/] = { Param0 };
	}
}

float func_85(struct<3> Param0)
{
	var uVar0;
	
	return func_86(Param0, &(Global_2405047.f_44), &uVar0);
}

float func_86(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405047.f_2691) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_87(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
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
		fVar0 = func_68(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_69(Param0, 1, 0, 0, 1);
	fVar0 = func_68(fVar4, 0f, func_94(), func_92(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_90(Param0);
	fVar0 = func_68(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1 && !func_51(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_89(Param0, unk_0x8CFC7D6E1DA5D304(), 0);
	fVar0 = func_68(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_88(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_68(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_68(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_68(unk_0x2A488C176D52CCA5(Global_2405047.f_504, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_88(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x58B6E6434BE716EC(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x6A5C05E993D7D360(uVar3))
	{
		unk_0x7BB9D074A0EB3FD1(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x36E1A96E1D63ED91((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_89(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_53(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_53(iVar3, 0, 1))
				{
					if (unk_0x1BE7B010C9B9841E(iVar3) != unk_0x1BE7B010C9B9841E(iParam3) || (unk_0x1BE7B010C9B9841E(iVar3) == -1 && unk_0x1BE7B010C9B9841E(iParam3) == -1))
					{
						if (Global_2416788.f_261[iVar2])
						{
							fVar1 = unk_0x2A488C176D52CCA5(Global_2416788.f_131[iVar2 /*3*/], Param0);
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

float func_90(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x74A7D93DBA7322F5(unk_0x18F7BE9ACB7D08F4(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x31F12808DC47A9E5(uVar6[iVar2]))
		{
			if (!unk_0x74C2FE037DFC8B4A(uVar6[iVar2], 0))
			{
				if (func_91(uVar6[iVar2]))
				{
					Var3 = { unk_0x761660F5CE986DC4(uVar6[iVar2], 1) };
					fVar1 = unk_0x15EE504466B7BBD3(Param0, Var3, 1);
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

int func_91(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x773D11D22FA84F6D(uParam0);
	switch (unk_0xB052D95D688673A4(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0xB052D95D688673A4(uVar0, Global_1574714[unk_0x8CFC7D6E1DA5D304()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 0)
	{
		iVar1 = unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0xB052D95D688673A4(uVar0, Global_1574425[iVar1]))
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

float func_92()
{
	if (func_93())
	{
		if ((unk_0xD8BB60C76D29E4BB(Global_2405047.f_44.f_67) || unk_0xB6353CAE3EBC0919(Global_2405047.f_44.f_67)) || Global_2405047.f_44.f_67 == joaat("rhino"))
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

int func_93()
{
	if (Global_2405047.f_44.f_65 && !Global_2405047.f_44.f_300)
	{
		if (!func_80(unk_0x8CFC7D6E1DA5D304()))
		{
			return 1;
		}
	}
	return 0;
}

float func_94()
{
	if (func_93())
	{
		if ((unk_0xD8BB60C76D29E4BB(Global_2405047.f_44.f_67) || unk_0xB6353CAE3EBC0919(Global_2405047.f_44.f_67)) || Global_2405047.f_44.f_67 == joaat("rhino"))
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

int func_95(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x5288FA47638BE8EE(Param0, fParam7)) || (fVar0 > 0f && unk_0xF00F53194FFC1443(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0xE9168FF5AA33FC8E(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0xE9168FF5AA33FC8E(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_96(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_100(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_99(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_97(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_97(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_98(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!unk_0xBD0ECFC2907D1982(Var0[iVar25 /*3*/], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_98(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
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

int func_99(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
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
		if (!unk_0xBD0ECFC2907D1982(Var0[iVar25 /*3*/], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_100(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
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
		if (!unk_0xBD0ECFC2907D1982(Var0[iVar13 /*3*/], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_101(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_20(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411026[iVar4])
	{
		if (func_19(Var1, &(Global_2409882[iVar4 /*127*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409882[iVar4 /*127*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409882[iVar4 /*127*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409882[iVar4 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411026[8])
	{
		if (func_19(Var1, &(Global_2409882[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2409882[8 /*127*/][iVar0 /*7*/] };
			*uParam4 = { Global_2409882[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2409882[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_102(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2405047.f_44.f_55)
	{
		if (unk_0xB79050CDE709F080(Global_2405047.f_44.f_56))
		{
			if (!unk_0x311945498D684788(Param0))
			{
				uVar0 = unk_0x8EFD19513210F032(Param0);
				if (unk_0xB79050CDE709F080(uVar0))
				{
					iVar1 = unk_0x2BD634124D2D902C(uVar0);
					if (!iVar1 == Global_2405047.f_44.f_57)
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

int func_103(struct<3> Param0)
{
	switch (Global_2405047.f_2453)
	{
		case 0:
			return func_140(Param0, Global_2405047.f_2432, Global_2405047.f_2435, 0, 0);
			break;
		
		case 1:
			return func_55(Param0, Global_2405047.f_2446, Global_2405047.f_2449, 0, 0);
			break;
		
		case 2:
			return unk_0xBD0ECFC2907D1982(Param0, Global_2405047.f_2446, Global_2405047.f_2449, Global_2405047.f_2452, 0, 1);
			break;
	}
	return 0;
}

int func_104(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0xBD0ECFC2907D1982(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_105(var uParam0, var uParam1, bool bParam2, float fParam3)
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

int func_106(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_107(iParam0))
			{
				if (Global_1595681[iParam0 /*678*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_107(int iParam0)
{
	return Global_1595681[iParam0 /*678*/].f_196 != 0;
}

int func_108(int iParam0)
{
	if (func_31(iParam0, 1))
	{
		if (Global_1595681[iParam0 /*678*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_109(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2405047.f_2586[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_110(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_38(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x3D81861E1A1652A9(0.01f, 360f);
			func_35(&Var1, Global_2405047.f_573, Global_2405047.f_576, 1036831949, 0, fVar4);
			if (func_42(Var1, &uVar0) || func_38(Var1))
			{
				Var1 = { *uParam0 };
				func_35(&Var1, Global_2405047.f_573, Global_2405047.f_576, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_111(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_53(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			if (!unk_0xEC0ECEF2AF3FDA8D())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x15EE504466B7BBD3(func_112(unk_0x8CFC7D6E1DA5D304()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x6157232E032EBC56(Param0, fParam3))
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
		if (func_53(iVar1, 1, 1))
		{
			if (!func_137(iVar1, 0) && unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x8CFC7D6E1DA5D304()))
				{
					if ((func_71(iVar1) || !bParam10) && !Global_2422724[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x1BE7B010C9B9841E(iVar1) == -1)
							{
								if (unk_0x1BE7B010C9B9841E(iVar1) == unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x1BE7B010C9B9841E(iVar1) != unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))) || unk_0x1BE7B010C9B9841E(iVar1) == -1)
							{
								if (unk_0x15EE504466B7BBD3(func_112(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x1BE7B010C9B9841E(iVar1) != iParam8 || unk_0x1BE7B010C9B9841E(iVar1) == -1)
						{
							if (unk_0x15EE504466B7BBD3(func_112(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
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

Vector3 func_112(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_113() && Global_1595681[iVar0 /*678*/].f_672) && !func_3(Global_1595681[iVar0 /*678*/].f_673))
	{
		return Global_1595681[iVar0 /*678*/].f_673;
	}
	return func_70(iParam0);
}

var func_113()
{
	return Global_2447128.f_16;
}

int func_114(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_116(Param0, fParam3, iParam4, iParam5, 0) || func_115(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_115(struct<3> Param0, int iParam3, int iParam4)
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
				if (!Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_22(Param0, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_53(iVar2, 0, 1) && func_53(iParam3, 0, 1))
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

int func_116(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
				if (func_53(iVar1, 0, 1) && func_53(iParam4, 0, 1))
				{
					if (unk_0x1BE7B010C9B9841E(iVar1) == unk_0x1BE7B010C9B9841E(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_53(iVar1, 0, 1) && func_53(iParam4, 0, 1))
				{
					if (Global_2416788.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2416788.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_70(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416788.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2416788.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_53(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_70(iVar1), Param0) < 1f)
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

int func_117(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2405047.f_3 = 0;
	if (!func_114(Param0, 0.5f, unk_0x8CFC7D6E1DA5D304(), 0, 0))
	{
		Global_2405047.f_3++;
		if (bParam5)
		{
			if (func_165(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
				if (!func_121(Param0, fParam12))
				{
					Global_2405047.f_3++;
					if (!func_21(Param0, 1056964608))
					{
						Global_2405047.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_165(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
				if (!func_121(Param0, fParam12))
				{
					Global_2405047.f_3++;
					if (!func_118(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2405047.f_3++;
						if (!func_21(Param0, 1056964608))
						{
							Global_2405047.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			}
		}
		else if (func_165(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
			if (!func_121(Param0, fParam12))
			{
				Global_2405047.f_3++;
				if (!func_118(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2405047.f_3++;
					if (!func_21(Param0, 1056964608))
					{
						Global_2405047.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405047.f_3 = (Global_2405047.f_3 + Global_2405047.f_2);
		}
	}
	return 0;
}

int func_118(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x8CFC7D6E1DA5D304() == iVar1)
		{
			if ((func_53(iVar1, 1, 1) && func_71(iVar1)) && unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
			{
				if (!func_120(unk_0x8CFC7D6E1DA5D304(), iVar1, -2, 0))
				{
					if (func_119(func_70(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_119(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0xBD0ECFC2907D1982(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_120(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x1BE7B010C9B9841E(iParam0) == -1 && unk_0x1BE7B010C9B9841E(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x1BE7B010C9B9841E(iParam0) == unk_0x1BE7B010C9B9841E(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x1BE7B010C9B9841E(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x1BE7B010C9B9841E(iParam0) == iParam2;
	}
	return unk_0x1BE7B010C9B9841E(iParam0) == iParam2;
}

int func_121(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_53(iVar1, 1, 1) && func_71(iVar1)) && unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
		{
			if ((unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1 && unk_0x1BE7B010C9B9841E(iVar1) == -1) && !func_51(unk_0x8CFC7D6E1DA5D304(), 1))
			{
				return 0;
			}
			else if ((unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1 && !unk_0x8CFC7D6E1DA5D304() == iVar1) || !func_120(unk_0x8CFC7D6E1DA5D304(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_70(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_122(int iParam0)
{
	if ((Global_2405047.f_481 == 9 || Global_2405047.f_481 == 9) || (Global_2405047.f_481 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_123(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x8CFC7D6E1DA5D304() != iVar1) || iParam8 == 0)
		{
			if (func_53(iVar1, bParam4, bParam5))
			{
				if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
				{
					if (!bParam7 || (!unk_0x0FAE113CE72ED842(unk_0x6604E096142B4B55(iVar1)) && func_71(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) != unk_0x1BE7B010C9B9841E(iVar1))) || unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1)
						{
							if (((unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1 && iParam9) && bParam6) && func_73(iVar1))
							{
							}
							else if (unk_0x31F12808DC47A9E5(unk_0x6604E096142B4B55(iVar1)))
							{
								if (unk_0x15EE504466B7BBD3(func_70(iVar1), Param0, 1) < fParam3)
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

int func_124(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_53(iVar1, 1, 1))
			{
				if ((!func_137(iVar1, 0) && unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1)) && iVar1 != unk_0x8CFC7D6E1DA5D304())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x1BE7B010C9B9841E(iVar1) == -1)
						{
							if (unk_0x1BE7B010C9B9841E(iVar1) == unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x1BE7B010C9B9841E(iVar1) == iVar3)
					{
						if (unk_0x15EE504466B7BBD3(func_70(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
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

int func_125(int iParam0)
{
	if (((func_51(iParam0, 1) || func_128(iParam0)) || func_127(iParam0, 0)) || func_126(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0)
{
	if (!func_53(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595681[iParam0 /*678*/].f_35;
}

int func_127(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_33 != -1 || (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627460[iVar0 /*530*/] != -1;
	}
	return 0;
}

void func_129(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0xB03A1684359C50A1(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359721[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_131(&Var2, uParam3, iVar0);
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
				func_130(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_130(var uParam0, var uParam1, int iParam2)
{
	Global_2412024 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_130(&Global_2412024, uParam1, iParam2 + 1);
	}
}

void func_131(var uParam0, var uParam1, int iParam2)
{
	Global_2412020 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_131(&Global_2412020, uParam1, iParam2 + 1);
	}
}

void func_132(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2405047.f_2228 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_2228)
		{
			if (func_133(Global_2405047.f_2229[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2405047.f_2229[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2405047.f_2229[iVar0 /*4*/] };
					fVar4 = unk_0x7F21F40674579303(Var1.f_0, Var1.f_1);
				}
				func_67(Global_2405047.f_2229[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2405047.f_2457++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405047.f_2845)
	{
		func_61(&(Global_2405047.f_2457.f_6[0 /*9*/]), &(Global_2405047.f_2457.f_6[1 /*9*/]), &(Global_2405047.f_2457.f_6[2 /*9*/]));
	}
}

int func_133(struct<3> Param0, var uParam3)
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

void func_134(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_56(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

var func_135()
{
	return Global_1310987.f_4;
}

void func_136(var uParam0, var uParam1)
{
	func_172();
	func_164(uParam0, uParam1);
}

bool func_137(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_138(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_138(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_139();
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

int func_139()
{
	return Global_1312736;
}

bool func_140(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_141(var uParam0, var uParam1, var uParam2)
{
	if (Global_2405047.f_1720 > 0 && func_160(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_142(uParam0, uParam1, uParam2);
	}
}

void func_142(var uParam0, var uParam1, var uParam2)
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
		if (func_159(uParam0, 1))
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
	Global_2412034.f_162 = 0;
	Global_2412034.f_163 = 0;
	Global_2412034.f_164 = -99;
	Global_2412034.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412034[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412034.f_121[iVar16] = 0f;
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
		iVar8 = unk_0x58B6E6434BE716EC(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x6A5C05E993D7D360(iVar8))
		{
			unk_0x7BB9D074A0EB3FD1(iVar8, &Var1);
			bVar12 = false;
			if (Global_2412034.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412034.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xC73BA4A62D56A649(iVar8)) || unk_0xFBEC931614CC67D6(iVar8))
			{
				unk_0xB41CD0F3D2BE7B22(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_110(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_158(Var1))
									{
										Var1 = { func_156(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_21(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_155(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_159(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_151(Var1, fVar4, uParam2->f_34, unk_0x8CFC7D6E1DA5D304(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_34(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_150(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_165(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_165(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_148(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar24 = func_147(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412034.f_162)
																										{
																											Global_2412034[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412034.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412034.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412034.f_162 == 0)
																									{
																										Global_2412034[0 /*3*/] = { Var1 };
																										Global_2412034.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412034.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2412034[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_146(Var1, fVar4, iVar16);
																													iVar16 = Global_2412034.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412034.f_162++;
																									if (Global_2412034.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412034.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412034[Global_2412034.f_162 /*3*/] = { Var1 };
																									Global_2412034.f_121[Global_2412034.f_162] = fVar4;
																									Global_2412034.f_162++;
																									if (func_155(Var1, uParam2))
																									{
																										Global_2412034.f_163++;
																									}
																									if (Global_2412034.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412034.f_162 == 40)
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
				if (Global_2412034.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412034[0 /*3*/] };
						*uParam1 = Global_2412034.f_121[0];
						return;
					}
					else
					{
						if (Global_2412034.f_163 > 0 && !Global_2412034.f_163 == Global_2412034.f_162)
						{
							func_144(0, uParam2);
						}
						iVar26 = unk_0x61E9B3BFA06B017B(0, Global_2412034.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2412034[0 /*3*/] };
						uVar30 = Global_2412034.f_121[0];
						Global_2412034[0 /*3*/] = { Global_2412034[iVar26 /*3*/] };
						Global_2412034.f_121[0] = Global_2412034.f_121[iVar26];
						Global_2412034[iVar26 /*3*/] = { Var27 };
						Global_2412034.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412034[0 /*3*/] };
						*uParam1 = Global_2412034.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_142(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x61E9B3BFA06B017B((1 + iVar15), (40 + iVar15));
						unk_0xEA1F20FEC8701002(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_156(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
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
						if (func_34(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_159(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_142(uParam0, uParam1, uParam2);
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
				func_142(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_143(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2412034.f_164 = iVar8;
	}
}

void func_143(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_114(*(uParam0[iVar2 /*4*/]), 5f, unk_0x8CFC7D6E1DA5D304(), 0, 0))
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

void func_144(int iParam0, var uParam1)
{
	if (!func_155(Global_2412034[iParam0 /*3*/], uParam1))
	{
		Global_2412034.f_162 = (Global_2412034.f_162 - 1);
		func_145(iParam0);
		if (Global_2412034.f_162 > Global_2412034.f_163)
		{
			func_144(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_144(iParam0 + 1, uParam1);
	}
}

void func_145(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412034[iParam0 /*3*/] = { Global_2412034[iParam0 + 1 /*3*/] };
			Global_2412034.f_121[iParam0] = Global_2412034.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_146(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2412034[iParam4 /*3*/] };
	uVar3 = Global_2412034.f_121[iParam4];
	Global_2412034[iParam4 /*3*/] = { Param0 };
	Global_2412034.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412034.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_146(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_147(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_72(iVar5))
		{
			Var1 = { func_70(iVar5) };
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

int func_148(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
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
		if ((iParam9 == 1 && unk_0x8CFC7D6E1DA5D304() != iVar1) || iParam9 == 0)
		{
			if (func_53(iVar1, bParam5, bParam6))
			{
				if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
				{
					if (!bParam8 || (!unk_0x0FAE113CE72ED842(unk_0x6604E096142B4B55(iVar1)) && func_71(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) != unk_0x1BE7B010C9B9841E(iVar1))) || unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1)
						{
							if (((unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1 && iParam10) && bParam7) && func_73(iVar1))
							{
							}
							else if (unk_0x31F12808DC47A9E5(unk_0x6604E096142B4B55(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x657B649BA2AD3582(unk_0x6604E096142B4B55(iVar1), 0))
								{
									uVar3 = unk_0x5AD687C3474F04B4(unk_0x6604E096142B4B55(iVar1), 0);
									if (unk_0x31F12808DC47A9E5(uVar3) && !unk_0x74C2FE037DFC8B4A(uVar3, 0))
									{
										iVar4 = unk_0x4F69FBD64CDF125B(uVar3);
										Var5 = { unk_0x761660F5CE986DC4(uVar3, 0) };
										fVar8 = unk_0x93FDA3BF59E7B77F(uVar3);
										if (func_149(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_22(func_70(iVar1), Param0, fParam3, iParam4, fVar2))
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

int func_149(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
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
	Var26 = { (unk_0x36E1A96E1D63ED91((Var17.f_0 - Var14.f_0)) * 0.5f), 0f, 0f };
	func_29(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var20 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * unk_0x36E1A96E1D63ED91((Var17.f_2 - Var14.f_2))));
	Var1[1 /*3*/] = { Param0 + Var20 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * unk_0x36E1A96E1D63ED91((Var17.f_2 - Var14.f_2))));
	Var1[2 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * unk_0x36E1A96E1D63ED91((Var17.f_2 - Var14.f_2))));
	Var1[3 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * unk_0x36E1A96E1D63ED91((Var17.f_2 - Var14.f_2))));
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
		if (func_149(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_150(struct<3> Param0, float fParam3, int iParam4)
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
	uVar1 = unk_0x048A9E2FC8C538E3(Param0, 30f, 0, iVar0);
	if (unk_0x31F12808DC47A9E5(uVar1) && !unk_0x74C2FE037DFC8B4A(uVar1, 0))
	{
		iVar2 = unk_0x4F69FBD64CDF125B(uVar1);
		Var3 = { unk_0x761660F5CE986DC4(uVar1, 0) };
		fVar6 = unk_0x93FDA3BF59E7B77F(uVar1);
		if (func_149(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	uVar1 = unk_0x048A9E2FC8C538E3(Param0, 30f, 0, iVar0);
	if (unk_0x31F12808DC47A9E5(uVar1) && !unk_0x74C2FE037DFC8B4A(uVar1, 0))
	{
		iVar2 = unk_0x4F69FBD64CDF125B(uVar1);
		Var3 = { unk_0x761660F5CE986DC4(uVar1, 0) };
		fVar6 = unk_0x93FDA3BF59E7B77F(uVar1);
		if (func_149(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_151(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_154(Param0, fParam3, iParam4, iParam5, iParam6) || func_152(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_152(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
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
				if (func_153(Param0, iParam4, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_149(Param0, fParam3, iParam4, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_53(iVar2, 0, 1) && func_53(iParam5, 0, 1))
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

int func_153(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
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

int func_154(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_53(iVar1, 0, 1) && func_53(iParam5, 0, 1))
			{
				if (Global_2416788.f_261[iVar0])
				{
					if (func_22(Global_2416788.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_22(func_70(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2416788.f_261[iVar0])
			{
				if (func_22(Global_2416788.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_53(iVar1, 0, 0))
			{
				if (unk_0x31F12808DC47A9E5(unk_0x6604E096142B4B55(iVar1)))
				{
					if (func_22(func_70(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_155(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_140(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_55(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xBD0ECFC2907D1982(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_156(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_157(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xB41CD0F3D2BE7B22(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x54B2CE59D6C4315A(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
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
		if (!func_157(Param0, *fParam3, Param6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
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
	Var0 = { unk_0xA89DC5E1C1F12DBF(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x6FB8A2C3C6531976(Param0, *fParam3, &Var21))
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

int func_157(struct<3> Param0, float fParam3, struct<3> Param4)
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

int func_158(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_20(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2411748[iVar1])
	{
		if (func_19(Param0, &(Global_2411045[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411748[8])
	{
		if (func_19(Param0, &(Global_2411045[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_159(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405047.f_26.f_17)
	{
		switch (Global_2405047.f_26.f_16)
		{
			case 0:
				if (func_140(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_15, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_55(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xBD0ECFC2907D1982(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_41(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, Global_2405047.f_26.f_16, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_160(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2405047.f_1720 > 0)
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
			if (func_159(uParam0, 1))
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
		Global_2412034.f_162 = 0;
		Global_2412034.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412034[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412034.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_161(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_1720)
		{
			iVar1 = Global_2405047.f_2126[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				Var2 = { Global_2405047.f_1721[iVar1 /*4*/] };
				fVar5 = Global_2405047.f_1721[iVar1 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var2) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var2.f_0, Var2.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_151(Var2, fVar5, uParam2->f_34, unk_0x8CFC7D6E1DA5D304(), 0, uParam2->f_56)) || !uParam2->f_12)
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
										if (!func_150(Var2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_165(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_165(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_148(Var2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar12 = func_147(Var2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412034.f_162)
															{
																Global_2412034[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412034.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412034.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412034.f_162 == 0)
														{
															Global_2412034[0 /*3*/] = { Var2 };
															Global_2412034.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412034.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var2, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2412034[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_146(Var2, fVar5, iVar6);
																		iVar6 = Global_2412034.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412034.f_162++;
														if (Global_2412034.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1720;
															}
															else if (Global_2412034.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1720;
															}
														}
													}
													else
													{
														Global_2412034[Global_2412034.f_162 /*3*/] = { Var2 };
														Global_2412034.f_121[Global_2412034.f_162] = fVar5;
														Global_2412034.f_162++;
														if (Global_2412034.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1720;
															}
															else if (Global_2412034.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1720;
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
		if (Global_2412034.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412034[0 /*3*/] };
				*uParam1 = Global_2412034.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412034.f_163 > 0 && !Global_2412034.f_163 == Global_2412034.f_162)
				{
					func_144(0, uParam2);
				}
				iVar14 = unk_0x61E9B3BFA06B017B(0, Global_2412034.f_162);
				Var15 = { Global_2412034[0 /*3*/] };
				uVar18 = Global_2412034.f_121[0];
				Global_2412034[0 /*3*/] = { Global_2412034[iVar14 /*3*/] };
				Global_2412034.f_121[0] = Global_2412034.f_121[iVar14];
				Global_2412034[iVar14 /*3*/] = { Var15 };
				Global_2412034.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412034[0 /*3*/] };
				*uParam1 = Global_2412034.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_160(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_142(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_161(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405047.f_1720)
	{
		uVar1 = func_162(Param0, fVar0, &fVar0);
		Global_2405047.f_2126[iVar2] = uVar1;
		iVar2++;
	}
}

int func_162(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405047.f_1720)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2405047.f_1721[iVar3 /*4*/]);
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

bool func_163(int iParam0)
{
	return iParam0 == 50;
}

void func_164(var uParam0, var uParam1)
{
	unk_0x4F71E350489BC03F(uParam0, uParam1, 0.1f);
	Global_2405047.f_2440 = unk_0xBCF9D020FA9C313D();
	Global_2405047.f_2438 = 1;
	Global_2405047.f_2441 = unk_0xE92FCF3C05C2EF1D();
}

int func_165(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405047.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x5288FA47638BE8EE(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xF00F53194FFC1443(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xF00F53194FFC1443(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xE9168FF5AA33FC8E(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam13)
	{
		if (unk_0xA5E527B690D287FC(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam14 > 0f)
	{
		if (func_123(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_111(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

void func_166()
{
	func_171();
	func_170();
	func_169();
	func_168();
	func_167();
}

void func_167()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 128)
	{
		Global_2407912[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_168()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405047.f_2457.f_85[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_169()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405047.f_2457.f_52[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_170()
{
	struct<9> Var0;
	int iVar9;
	
	Var0.f_2 = 1176256410;
	iVar9 = 0;
	while (iVar9 < 5)
	{
		Global_2405047.f_2457.f_6[iVar9 /*9*/] = { Var0 };
		iVar9++;
	}
}

void func_171()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405047.f_2457 = { Var0 };
}

void func_172()
{
	if (Global_2405047.f_2438)
	{
		if (unk_0xBCF9D020FA9C313D() == Global_2405047.f_2440)
		{
			unk_0x7F2E59ADFBF9E060();
		}
		else
		{
			unk_0x7F2E59ADFBF9E060();
		}
		Global_2405047.f_2438 = 0;
	}
}

int func_173(bool bParam0)
{
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_174(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
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

int func_175(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_176(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xF67B871D7588B9D9())
		{
			func_177(uParam0, 0, 0);
		}
	}
}

void func_177(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x44243F2E2F58B8E3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE92FCF3C05C2EF1D();
			}
			else
			{
				*uParam0 = unk_0x5E1037C28AA2B562();
			}
		}
		else
		{
			*uParam0 = unk_0x5AFB8ED811F05E4D();
		}
		uParam0->f_1 = 1;
	}
}

void func_178()
{
	switch (Local_71[unk_0xA651DA0BC9FD8FA4() /*3*/].f_2)
	{
		case 0:
			func_212();
			func_211();
			if (func_200())
			{
				func_198();
				func_197();
				func_179(35);
				Local_71[unk_0xA651DA0BC9FD8FA4() /*3*/].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_197();
				Local_71[unk_0xA651DA0BC9FD8FA4() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_60.f_8 >= 2)
			{
				Local_71[unk_0xA651DA0BC9FD8FA4() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_7806)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_196() /*12062*/].f_7637.f_3781[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_196() /*12062*/].f_7637.f_3781[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_196() /*12062*/].f_7637.f_3781[iVar2 /*3*/].f_1)
			{
				func_192(iVar2, 1);
				unk_0xD2A9C3F486236CC5(&Global_2492448, (8 + iVar2));
				func_187(2107, -1);
				func_183(67, -1);
				func_187(2570, -1);
				func_183(69, -1);
				unk_0xF8AAE3277807332A(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0xB03A1684359C50A1(Global_2492448, 12))
					{
						func_180(7, 0);
					}
					else
					{
						func_180(15, 0);
					}
				}
			}
		}
	}
}

void func_180(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_182(iParam0, iParam1))
	{
		iVar0 = func_181();
		Global_2456686[iVar0] = iParam0;
	}
}

int func_181()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456686[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_182(int iParam0, var uParam1)
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

void func_183(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_185(iParam0, func_186(iParam1));
	iVar0++;
	func_184(iParam0, iVar0, iParam1);
}

void func_184(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2548544[iParam0 /*3*/][func_186(uParam2)];
	unk_0xD92C8D8AF3C67820(iVar0, iParam1, 1);
}

int func_185(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2548544[iParam0 /*3*/][func_186(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_186(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_139();
		if (iVar1 > -1)
		{
			Global_2522568 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522568 = 1;
		}
	}
	return iVar0;
}

void func_187(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_191(iParam0, func_186(iParam1), 0);
	iVar0++;
	if (!func_190(iParam0))
	{
		func_189(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_188(iParam0, iVar0, iParam1, 1);
	}
}

void func_188(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2522855[iParam0 /*3*/][func_186(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1367820[func_186(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1367826[func_186(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1367832[func_186(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1367838[func_186(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1367796[func_186(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1367802[func_186(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1367808[func_186(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1367814[func_186(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1367772[func_186(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1367778[func_186(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1367784[func_186(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1367790[func_186(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1367844[func_186(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1367850[func_186(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1367856[func_186(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1367862[func_186(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1367868[func_186(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1367874[func_186(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1367880[func_186(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2548958[0 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2548958[1 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2548958[2 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2548958[3 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 7050:
			Global_2549041[func_186(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1367886[func_186(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1367892[func_186(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1367898[func_186(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1367904[func_186(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2548998[0 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2548998[1 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2548998[2 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2548998[3 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2548998[4 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549044[0 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549044[1 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549044[2 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549044[3 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549044[4 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549060[0 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549060[1 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549060[2 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549060[3 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549060[4 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2548998[5 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2548958[4 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549076[func_186(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549085[func_186(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549079[func_186(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549088[func_186(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549082[func_186(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549091[func_186(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549094[func_186(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2548998[6 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2548958[5 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2548998[7 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2548958[6 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2548998[8 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2548958[7 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2548998[9 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2548958[8 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2548998[10 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2548958[9 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2548998[11 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2548958[10 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2548998[12 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2548958[11 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2548998[13 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2548958[12 /*3*/][func_186(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_189(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_186(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
	}
}

int func_190(int iParam0)
{
	if (Global_1367753)
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
			case 2918:
			case 3047:
			case 7050:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

int func_191(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2522855[iParam0 /*3*/][func_186(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_192(int iParam0, int iParam1)
{
	if (Global_2097152[func_196() /*12062*/].f_7637.f_3781[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_196() /*12062*/].f_7637.f_3781[iParam0 /*3*/].f_1 = iParam1;
		func_193(func_195(iParam0), iParam1, -1, 1);
	}
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_194())
	{
		iVar0 = Global_2547154[iParam0 /*3*/][func_186(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0F1BF2DD8A1C0A68(iVar0, iParam1, iParam3);
		}
	}
}

int func_194()
{
	return 1;
	return 0;
}

int func_195(int iParam0)
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

int func_196()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_197()
{
	if (unk_0xE769D9B5158D0F11(uLocal_170))
	{
		unk_0x40D517D991458154(&uLocal_170);
	}
}

void func_198()
{
	if (!unk_0xB03A1684359C50A1(Global_2436169.f_3759, 0))
	{
		unk_0xD2A9C3F486236CC5(&(Global_2436169.f_3759), 0);
		func_199();
	}
	else
	{
		unk_0xD2A9C3F486236CC5(&(Global_2436169.f_3759), 1);
	}
}

void func_199()
{
	func_187(1185, -1);
}

int func_200()
{
	struct<14> Var0;
	
	if (unk_0x49E68AAD93AADF10(Local_60.f_2))
	{
		if (unk_0x5AD42783360AB57E(Local_60.f_2))
		{
			if (unk_0x9EE4192FE475677C(unk_0xC6442477EF1FCEE7(Local_60.f_2), unk_0x18F7BE9ACB7D08F4()) && func_210(Local_60.f_2))
			{
				func_209(&(Local_60.f_2));
				if (unk_0xE769D9B5158D0F11(uLocal_170))
				{
					unk_0x40D517D991458154(&uLocal_170);
				}
				if (!func_208(1))
				{
					func_203("ABB_BOXCT", 1);
				}
				Var0.f_2 = -1317251371;
				Var0.f_10 = unk_0x8CFC7D6E1DA5D304();
				Var0.f_3 = uLocal_169;
				func_201(Var0, func_202(1));
				unk_0xD2A9C3F486236CC5(&(Local_71[unk_0xA651DA0BC9FD8FA4() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_201(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1143278407;
	Param0.f_1 = unk_0x8CFC7D6E1DA5D304();
	if (!iParam14 == 0)
	{
		unk_0xDC8B8CF2FBDF3387(1, &Param0, 14, iParam14);
	}
}

int func_202(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xF02902C16AF3CA92())
	{
		if (unk_0x0CA6AB9C192005B8(unk_0xF4E7C3C6384793AA(iVar1)))
		{
			iVar2 = unk_0x8A0B92A0286253B3(unk_0xF4E7C3C6384793AA(iVar1));
			if (func_53(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x8CFC7D6E1DA5D304() || iParam0)
				{
					unk_0xD2A9C3F486236CC5(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_203(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x55E6536147AC42E6(sParam0);
	iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
	func_204(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_204(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_207() || !unk_0x13C2BC1B63ABBCD5()) || !func_137(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		return;
	}
	iVar0 = func_205(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1803650.f_5[iVar0 /*53*/] = iParam0;
		Global_1803650.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1803650.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1803650.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1803650.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1803650.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1803650.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_205(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1803650 - 1))
	{
		if (iParam0 > Global_1803650.f_5[iVar0 /*53*/].f_1)
		{
			func_206(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1803650++;
	if (Global_1803650 > 5)
	{
		Global_1803650 = 5;
		return Global_1803650;
	}
	return (Global_1803650 - 1);
}

void func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1803650.f_5[iVar0 /*53*/] = { Global_1803650.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_207()
{
	return unk_0x5E02CD27DBE77D67(-1762644250);
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1626045 > 0;
		
		case 2:
			return Global_1626045.f_1 > 0;
		
		case 3:
			return Global_1626045.f_2 > 0;
		
		case 4:
			return Global_1626045.f_4 > 0;
		
		case 5:
			return Global_1626045.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_209(var uParam0)
{
	var uVar0;
	
	if (unk_0x49E68AAD93AADF10(*uParam0))
	{
		if (!unk_0xA744F72A307A4982(*uParam0))
		{
		}
	}
	if (unk_0x5AD42783360AB57E(*uParam0))
	{
		uVar0 = unk_0x10427BA8138B7F3E(*uParam0);
		unk_0xD3CBE4DA6FF850F6(&uVar0);
	}
}

int func_210(var uParam0)
{
	if (unk_0x49E68AAD93AADF10(uParam0))
	{
		unk_0xB9A913FE4C5AD71F(uParam0);
		return unk_0xA744F72A307A4982(uParam0);
	}
	return 0;
}

void func_211()
{
	if (!unk_0xE769D9B5158D0F11(uLocal_170))
	{
		if (unk_0x49E68AAD93AADF10(Local_60.f_2))
		{
			uLocal_170 = unk_0xA8EDC17CEEA40DFA(unk_0xC6442477EF1FCEE7(Local_60.f_2));
			unk_0x0590222010A36CE4(uLocal_170, 1.2f);
			unk_0xDC0EBFC7730AA226(uLocal_170, 403);
			unk_0x71925FF3194E84CE(uLocal_170, 2);
			unk_0x61C2EC67C90074E5(uLocal_170, "ABB_BLIPN");
		}
	}
}

void func_212()
{
	var uVar0;
	
	if (!unk_0x622E10ED992CEB95())
	{
		uVar0 = func_191(1187, -1, 0);
		if (!unk_0xB03A1684359C50A1(uVar0, 14))
		{
			unk_0xD2A9C3F486236CC5(&uVar0, 14);
			func_189(1187, uVar0, -1, 1, 0);
		}
	}
}

int func_213()
{
	return Local_60.f_0;
}

int func_214()
{
	unk_0x9016574B77A748EE(joaat("prop_drug_package_02"));
	if (unk_0xEDFE27D1AEA0EA7F(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)
{
	return Local_71[iParam0 /*3*/];
}

int func_216()
{
	var uVar0;
	
	func_223(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 1;
		}
	}
	if (func_222())
	{
		return 1;
	}
	if (Global_2459011)
	{
		return 1;
	}
	if (func_221())
	{
		return 1;
	}
	if (func_220(157))
	{
		if (!func_219())
		{
			return 1;
		}
	}
	if (func_220(155))
	{
		return 1;
	}
	if (!unk_0xA1C84586015AE5DB())
	{
		return 1;
	}
	if (func_217() != 0)
	{
		if (unk_0xE7FAF8E78F7D3A73(func_217()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_217()
{
	switch (func_218())
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

int func_218()
{
	return Global_25233;
}

bool func_219()
{
	return Global_2447128.f_586;
}

int func_220(int iParam0)
{
	if (unk_0xA1B200C8BB1289B7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_221()
{
	return Global_2456781;
}

bool func_222()
{
	return Global_2447128.f_581;
}

void func_223(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar1 = unk_0xD8DDA9403FAEDB57(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xF6A7C6FEAD04F4B3(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1592539087:
					func_224(iVar0);
					break;
				
				case 1094813140:
					unk_0xF6A7C6FEAD04F4B3(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1903409068)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_224(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 3))
	{
		if (func_53(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x6604E096142B4B55(Var0.f_1);
			if (unk_0x31F12808DC47A9E5(uVar3))
			{
				if (unk_0x657B649BA2AD3582(uVar3, 0))
				{
					uVar4 = unk_0x5AD687C3474F04B4(uVar3, 0);
					if (unk_0xF7FC2DC5308754C4(uVar4, Var0.f_2) && unk_0xD8E9E28C65F6D7A9())
					{
						if (func_225(uVar4, &bVar5))
						{
							unk_0x02FFEDE7A52D9E18(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x4F5FF3F3FDCAB15D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_225(var uParam0, var uParam1)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (!unk_0x90D1FDC9D31B7BE1(uParam0))
		{
			if (unk_0x84E7E48409E0DA9F(uParam0))
			{
				if (!unk_0xA403D842C198CAFF(unk_0x4F69FBD64CDF125B(uParam0)))
				{
					unk_0x337F2213526139E0(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xE54DCC6B21FDC95A(uParam0, 0))
		{
			if (unk_0x1800B99666D25740(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_226()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_227(int iParam0)
{
	return Global_1595681[iParam0 /*678*/];
}

void func_228()
{
	Global_1367970 = -1;
	if (unk_0xE769D9B5158D0F11(uLocal_170))
	{
		unk_0x40D517D991458154(&uLocal_170);
	}
	func_231();
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xF67B871D7588B9D9())
		{
			if (unk_0x49E68AAD93AADF10(Local_60.f_2) && unk_0xA744F72A307A4982(Local_60.f_2))
			{
				func_209(&(Local_60.f_2));
			}
			Local_60.f_0 = 4;
		}
	}
	if (unk_0xB03A1684359C50A1(Local_60.f_1, 8))
	{
		func_230();
	}
	func_229();
}

void func_229()
{
	unk_0x810C5D6462DD69E6();
}

void func_230()
{
	Global_2512581.f_842 = 0;
	Global_2512581.f_842.f_1 = { 0f, 0f, 0f };
	Global_2512581.f_842.f_4 = 0f;
	Global_2512581.f_842.f_8 = 0;
	unk_0x62148293B793073B(&(Global_2512581.f_842.f_7), 0);
}

void func_231()
{
	if (unk_0xB03A1684359C50A1(uLocal_168, 4))
	{
		unk_0x1A299840493A2B57(unk_0x8CFC7D6E1DA5D304(), 0.72f);
		unk_0x0651470DF5898183(unk_0x8CFC7D6E1DA5D304(), 1f, 1);
		unk_0xF7716CEC14AB2BE1(unk_0x8CFC7D6E1DA5D304(), 1f);
		unk_0xD2A9505C12A0B69B(unk_0x8CFC7D6E1DA5D304(), 1f);
		func_232(1);
		unk_0x62148293B793073B(&uLocal_168, 5);
		unk_0x62148293B793073B(&uLocal_168, 7);
		unk_0x62148293B793073B(&uLocal_168, 4);
	}
}

void func_232(int iParam0)
{
	var uVar0;
	
	uVar0 = func_233(iParam0, 0);
	unk_0x605B63B87CCF606F(uVar0);
}

char* func_233(int iParam0, bool bParam1)
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

int func_234(struct<21> Param0)
{
	func_238(func_239(Param0.f_0), Param0);
	unk_0xBFB29A437D900DFC(1);
	func_236(0, -1, 0);
	unk_0x9B457509556CB639(&Local_60, 11);
	unk_0x0D25D64240F2BAA8(&Local_71, 97);
	if (!func_235())
	{
		return 0;
	}
	unk_0xDA6A6B59F261B209(0);
	if (unk_0xF67B871D7588B9D9())
	{
		Local_60.f_7 = Param0.f_16;
		Global_1367970 = Local_60.f_7;
		Local_60.f_3 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0) };
		if (!func_3(Global_2512581.f_842.f_1))
		{
			unk_0xD2A9C3F486236CC5(&(Local_60.f_1), 8);
		}
	}
	iLocal_173 = unk_0x3AB73ED02FDAC9A8();
	Local_71[unk_0xA651DA0BC9FD8FA4() /*3*/] = 0;
	return 1;
}

int func_235()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 0;
		}
		if (unk_0x593B88C1B97BDD33())
		{
			return 1;
		}
		if (func_222())
		{
			return 0;
		}
		if (func_220(155))
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

int func_236(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD8BE1F0DC107B5A4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_229();
			}
			else
			{
				return 0;
			}
		}
		if (!func_237())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x44243F2E2F58B8E3())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_222())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_220(155))
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x32BCC4E6A353E146())
			{
				if (!bParam2)
				{
					func_229();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD8BE1F0DC107B5A4();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			if (!bParam2)
			{
				func_229();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x32BCC4E6A353E146())
	{
		if (!bParam2)
		{
			func_229();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_237()
{
	return Global_1312831;
}

void func_238(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		func_229();
	}
	unk_0x4121A9A0CCC0E014(uParam0, 0, Param1.f_16);
}

int func_239(int iParam0)
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
		
		case 113:
			return 32;
		
		case 114:
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
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}

