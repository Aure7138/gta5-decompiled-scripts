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
	if (unk_0x17CC0D5008835470())
	{
		if (!func_207(ScriptParam_0))
		{
			func_201();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_200(unk_0xE0BDAFA1A39552D6()) != 1 && !unk_0x7DA173D4FD42F36B(Global_2464975.f_791.f_7, 0))
			{
				func_201();
			}
		}
	}
	uLocal_165 = ScriptParam_0.f_19;
	while (true)
	{
		func_199();
		if (func_189())
		{
			func_201();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_200(unk_0xE0BDAFA1A39552D6()) != 1 && Global_1609372 == 0)
			{
				func_201();
			}
		}
		if (unk_0x51857BE3D081B03F() != iLocal_169)
		{
			func_201();
		}
		unk_0x084115993890CAD4();
		switch (func_188(unk_0x490BA5FDD7EE47A9()))
		{
			case 0:
				if (func_187())
				{
					if (func_186() == 1)
					{
						Local_67[unk_0x490BA5FDD7EE47A9() /*3*/] = 1;
					}
					else if (func_186() == 4)
					{
						Local_67[unk_0x490BA5FDD7EE47A9() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_186() == 1)
				{
					func_151();
				}
				else if (func_186() == 4)
				{
					Local_67[unk_0x490BA5FDD7EE47A9() /*3*/] = 3;
				}
				if (Local_67[unk_0x490BA5FDD7EE47A9() /*3*/].f_2 == 0)
				{
					if ((!unk_0x8853522CEFF93BE9(unk_0x06736567F820A39E(), Local_56.f_3, 500f, 500f, 500f, 0, 1, 0) && func_200(unk_0xE0BDAFA1A39552D6()) != 1) && !unk_0x7DA173D4FD42F36B(Global_2464975.f_791.f_7, 0))
					{
						Local_67[unk_0x490BA5FDD7EE47A9() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_149(&(Local_56.f_9));
				if (func_148(&(Local_56.f_9)))
				{
					Local_67[unk_0x490BA5FDD7EE47A9() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_67[unk_0x490BA5FDD7EE47A9() /*3*/] = 4;
			
			case 4:
				func_201();
				break;
		}
		if (unk_0x587E5997B76F47FE())
		{
			switch (func_186())
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
	if (Local_56.f_7 >= 32 && func_200(unk_0xE0BDAFA1A39552D6()) == 1)
	{
		if (func_3(Global_2464975.f_791.f_1))
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
			if (!unk_0xC7A68C5C107A1253(Local_56.f_2) || Local_56.f_6 != -1)
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
	while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar0)))
		{
			if (Local_56.f_6 == -1)
			{
				if (unk_0x7DA173D4FD42F36B(Local_67[iVar0 /*3*/].f_1, 0))
				{
					Local_56.f_6 = iVar0;
				}
			}
			if (!unk_0x7DA173D4FD42F36B(Local_56.f_1, 7))
			{
				if (unk_0x7DA173D4FD42F36B(Local_67[iVar0 /*3*/].f_1, 1))
				{
					unk_0xE27C8E42A97895CF(&(Local_56.f_1), 7);
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
	
	if (!unk_0xC7A68C5C107A1253(Local_56.f_2))
	{
		if (func_187())
		{
			if (unk_0xFCECCB6C10A241DF(1))
			{
				fVar5 = 250f;
				Var6 = { Local_56.f_3 };
				if (unk_0x7DA173D4FD42F36B(Local_56.f_1, 8))
				{
					Var0 = { Global_2464975.f_791.f_1 };
					uVar3 = Global_2464975.f_791.f_4;
				}
				if (func_200(unk_0xE0BDAFA1A39552D6()) == 7)
				{
					iVar12 = unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6());
					if (Global_1617902.f_87[iVar12 /*7022*/].f_722[0 /*28*/].f_10 > 0f)
					{
						Var6 = { Global_1617902.f_87[iVar12 /*7022*/].f_722[0 /*28*/].f_3 };
						Var9 = { Global_1617902.f_87[iVar12 /*7022*/].f_722[0 /*28*/].f_6 };
						fVar5 = Global_1617902.f_87[iVar12 /*7022*/].f_722[0 /*28*/].f_10;
						iVar4 = 1;
					}
					else if (Global_1617902.f_87[iVar12 /*7022*/].f_722[0 /*28*/].f_9 > 0f)
					{
						Var6 = { Global_1617902.f_87[iVar12 /*7022*/].f_722[0 /*28*/] };
						fVar5 = Global_1617902.f_87[iVar12 /*7022*/].f_722[0 /*28*/].f_9;
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
					if (unk_0x7DA173D4FD42F36B(Local_56.f_1, 8) || func_147(Var6, fVar5, &Var0, &uVar3, Var13))
					{
						if (Local_56.f_7 >= 32 || func_200(unk_0xE0BDAFA1A39552D6()) == 1)
						{
							Local_56.f_2 = unk_0xE0E063A077171A2A(unk_0x762537FC22B454C0(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_56.f_2 = unk_0xE0E063A077171A2A(unk_0xBEB53EB86747A7AF(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0xEF32567B3A5047F5(unk_0xE65C345C8E8CDA4A(Local_56.f_2), uVar3);
					}
				}
				else if (unk_0x7DA173D4FD42F36B(Local_56.f_1, 8) || func_7(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_56.f_7 >= 32 || func_200(unk_0xE0BDAFA1A39552D6()) == 1)
					{
						Local_56.f_2 = unk_0xE0E063A077171A2A(unk_0x762537FC22B454C0(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_56.f_2 = unk_0xE0E063A077171A2A(unk_0xBEB53EB86747A7AF(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0xEF32567B3A5047F5(unk_0xE65C345C8E8CDA4A(Local_56.f_2), uVar3);
				}
			}
		}
	}
	if (unk_0xC7A68C5C107A1253(Local_56.f_2))
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
	bool bVar83;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404993.f_1489 == *uParam0 || !Global_2404993.f_1489.f_1 == uParam0->f_1) || !Global_2404993.f_1489.f_2 == uParam0->f_2) || !Global_2404993.f_1492 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404993.f_1503 == uParam0->f_8 || !Global_2404993.f_1503.f_1 == uParam0->f_8.f_1) || !Global_2404993.f_1503.f_2 == uParam0->f_8.f_2) || !Global_2404993.f_1506 == uParam0->f_11) || !Global_2404993.f_1506.f_1 == uParam0->f_11.f_1) || !Global_2404993.f_1506.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404993.f_1503 == uParam0->f_8 || !Global_2404993.f_1503.f_1 == uParam0->f_8.f_1) || !Global_2404993.f_1503.f_2 == uParam0->f_8.f_2) || !Global_2404993.f_1506 == uParam0->f_11) || !Global_2404993.f_1506.f_1 == uParam0->f_11.f_1) || !Global_2404993.f_1506.f_2 == uParam0->f_11.f_2) || !Global_2404993.f_1509 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404993.f_1487 == 1)
		{
			if (unk_0xDF49ABF9204CC801(Global_2404993.f_1496))
			{
				if (Global_2404993.f_1496 == unk_0xAE832DCCE9CD3242())
				{
					if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1493) < func_146(0))
					{
						return 0;
					}
				}
				else if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1493) < func_146(0))
				{
					return 0;
				}
			}
			unk_0xC259D754B2B17A87();
			unk_0x379BC6172444185D();
			func_145();
		}
		Global_2404993.f_1487 = 0;
	}
	else if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1493) > func_146(0))
	{
		Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
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
	unk_0x4F9B9416E775992C(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404993.f_1487)
	{
		unk_0xC259D754B2B17A87();
		unk_0x379BC6172444185D();
		func_145();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_144(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x992B2940FA16F60D())
		{
			Global_2404993.f_1510 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404993.f_1489 = { *uParam0 };
					Global_2404993.f_1492 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404993.f_1503 = { uParam0->f_8 };
					Global_2404993.f_1506 = { uParam0->f_11 };
					Global_2404993.f_1509 = 0f;
					Global_2404993.f_1489 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404993.f_1503 = { uParam0->f_8 };
					Global_2404993.f_1506 = { uParam0->f_11 };
					Global_2404993.f_1509 = uParam0->f_14;
					Global_2404993.f_1489 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_143(Var8.f_0, Var8.f_1);
			}
			Global_2404993.f_1488 = 1;
			Global_2404993.f_1487 = 1;
			Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
			Global_2404993.f_1493 = unk_0x201D90648B2AE3CE();
			Global_2404993.f_1496 = unk_0xAE832DCCE9CD3242();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404993.f_1487)
	{
		if (Global_2404993.f_1488 == 1)
		{
			if (unk_0x8A517457C85EB9F1(fVar4, fVar5, fVar6, fVar7) || unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1494) > 5000)
			{
				Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
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
					func_124(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_123(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404993.f_1488 = 9;
				}
				else
				{
					Global_2404993.f_1488 = 2;
				}
			}
		}
		if (Global_2404993.f_1488 == 2)
		{
			if ((unk_0xFBA7DD5505BB11FA(Var11, Var14) || unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1494) > 15000) || unk_0x58C68EEF5B8A5F00(Var11, Var14) == 0)
			{
				Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
				if (uParam0->f_5 && !func_120(unk_0xE0BDAFA1A39552D6(), 0))
				{
					Global_2404993.f_1488 = 3;
				}
				else
				{
					Global_2404993.f_1488 = 4;
				}
			}
			else if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1498) > 7000)
			{
				func_119(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404993.f_1488 == 3)
		{
			if (func_118() || unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1494) > 10000)
			{
				Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
				Global_2404993.f_1488 = 4;
			}
		}
		if (Global_2404993.f_1488 == 4)
		{
			if (unk_0x992B2940FA16F60D())
			{
				unk_0xC259D754B2B17A87();
				unk_0x379BC6172444185D();
			}
			else
			{
				iVar0 = 0;
				func_113();
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
					if (!unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
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
							if (unk_0x3242AB1BAAB05F58(unk_0xE0BDAFA1A39552D6(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
								Global_2404993.f_1488 = 5;
							}
							break;
						
						case 1:
							func_112(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x0E851E9247B7805F(unk_0xE0BDAFA1A39552D6(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
								Global_2404993.f_1488 = 5;
							}
							break;
						
						case 2:
							if (unk_0x0E851E9247B7805F(unk_0xE0BDAFA1A39552D6(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
								Global_2404993.f_1488 = 5;
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
					Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
					Global_2404993.f_1488 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x83878A73624A67C7(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_112(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x406634EEA23D3C1C(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x406634EEA23D3C1C(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404993.f_1488 == 5)
		{
			if (func_50(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404993.f_1514.f_5)
				{
					Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
					Global_2404993.f_1488 = 6;
				}
				else
				{
					Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0x10BFB9592B558291(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404993.f_1488 = 9;
				}
			}
			else if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1494) > 20000)
			{
				unk_0xC259D754B2B17A87();
				unk_0x379BC6172444185D();
				Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
				Global_2404993.f_1488 = 8;
			}
		}
		if (Global_2404993.f_1488 == 6)
		{
			iVar0 = 0;
			Global_2404993.f_1514.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_49(uParam0->f_4))
				{
					if (unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_48(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Var8)))
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
			Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
			Global_2404993.f_1488 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x83878A73624A67C7(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_112(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x406634EEA23D3C1C(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x406634EEA23D3C1C(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404993.f_1488 == 7)
		{
			if (func_50(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404993.f_1622[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_123(Global_2404993.f_1622[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_1622[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_46(Global_2404993.f_1622[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_1622[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x795DFAC3136F0C6E(Global_2404993.f_1622[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404993.f_1622[iVar17 /*3*/] };
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
				Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0x10BFB9592B558291(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404993.f_1488 = 9;
			}
			else if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_1494) > 20000)
			{
				Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
				Global_2404993.f_1488 = 8;
			}
		}
		if (Global_2404993.f_1488 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_2404993.f_468))
				{
				}
			}
			else if (Global_2404993.f_1514.f_2)
			{
				func_9(uParam2, &(Global_2404993.f_1514.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar83 = false;
				}
				else
				{
					bVar83 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404993.f_1489 };
				func_11(uParam2[0 /*3*/], 0, bVar83, 0, 0, uParam0, uParam1);
			}
			Global_2404993.f_1494 = unk_0x201D90648B2AE3CE();
			Global_2404993.f_1488 = 9;
		}
		if (Global_2404993.f_1488 == 9)
		{
			Global_2404993.f_1487 = 0;
			unk_0xC259D754B2B17A87();
			unk_0x379BC6172444185D();
			func_145();
			return 1;
		}
		Global_2404993.f_1493 = unk_0x201D90648B2AE3CE();
	}
	return 0;
}

void func_9(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*8*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*8*/])->f_7;
		uParam0->f_14[iVar0] = (*uParam1)[iVar0 /*8*/];
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
	var uVar61;
	int iVar62;
	bool bVar63;
	int iVar64;
	struct<3> Var65;
	struct<3> Var68;
	struct<3> Var71;
	float fVar74;
	
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
	if (bParam1)
	{
		iVar64 = 0;
	}
	else
	{
		iVar64 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar64 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var65 = { *uParam5 };
						if (func_49(uParam5->f_4) || !unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 1:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_48(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 2:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_48(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Var65)))
						{
							iVar64 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar64 += 4;
		}
	}
	if (func_13(*uParam0, &Var0, iVar64, iParam3, 1))
	{
	}
	else
	{
		bVar63 = true;
	}
	if (bVar63)
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
		iVar62 = 0;
		while (iVar62 < 2)
		{
			Var4.f_38[iVar62 /*3*/] = { uParam6->f_13[iVar62 /*3*/] };
			Var4.f_45[iVar62] = uParam6->f_20[iVar62];
			iVar62++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_124(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var68 = { *uParam5 };
				fVar74 = uParam5->f_4;
				break;
			
			case 1:
				Var68 = { uParam5->f_8 };
				Var71 = { uParam5->f_11 };
				break;
			
			case 2:
				Var68 = { uParam5->f_8 };
				Var71 = { uParam5->f_11 };
				fVar74 = uParam5->f_14;
				break;
		}
		if (!func_12(Var0, uParam5->f_7, Var68, Var71, fVar74))
		{
			if (func_13(*uParam0, &Var0, iVar64, iParam3, 0))
			{
				if (!func_12(Var0, uParam5->f_7, Var68, Var71, fVar74))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var68 + Var71 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var68 };
					}
					if (unk_0x00FBAE9BB89D4FC2(Var0, &uVar61, 0))
					{
						Var0.f_2 = uVar61;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var68 + Var71 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var68 };
				}
				if (unk_0x00FBAE9BB89D4FC2(Var0, &uVar61, 0))
				{
					Var0.f_2 = uVar61;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404993.f_604 = 1;
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
			return func_46(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0x795DFAC3136F0C6E(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_13(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_45(Param0, uParam3))
	{
		if (func_14(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (unk_0x8727B442108E589B(Param0, 0, uParam3, iParam4))
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
		if ((iParam4 == 1 && !func_23(Global_2404993.f_481, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_15(*uParam3, 1056964608))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_15(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_20(unk_0xE0BDAFA1A39552D6(), 1))
	{
		if (Global_1617902.f_38505 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617902.f_38505)
			{
				if (Global_1617902.f_38506[iVar0 /*58*/].f_7 != 0)
				{
					if (func_16(Param0, Global_1617902.f_38506[iVar0 /*58*/], Global_1617902.f_38506[iVar0 /*58*/].f_6, Global_1617902.f_38506[iVar0 /*58*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617902.f_36286 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617902.f_36286)
			{
				if (Global_1617902.f_36289[iVar0 /*90*/].f_16 != 0)
				{
					if (func_16(Param0, Global_1617902.f_36289[iVar0 /*90*/], Global_1617902.f_36289[iVar0 /*90*/].f_3, Global_1617902.f_36289[iVar0 /*90*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617902.f_49581 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617902.f_49581)
			{
				if (Global_1617902.f_49585[iVar0 /*128*/].f_12 != 0)
				{
					if (func_16(Param0, Global_1617902.f_49585[iVar0 /*128*/], Global_1617902.f_49585[iVar0 /*128*/].f_3, Global_1617902.f_49585[iVar0 /*128*/].f_12, 0.5f))
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

int func_16(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_19(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_18(&Var0, 0f, 0f, fParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_17(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0xF87C669B882D93C0((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0xF87C669B882D93C0((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0xF87C669B882D93C0((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0x795DFAC3136F0C6E(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_17(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x1D8189836184FF10(iParam0))
	{
		unk_0x9CFA23DC65790425(iParam0, fParam1, fParam2);
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

void func_18(var uParam0, struct<3> Param1)
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

float func_19(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_17(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_20(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_21(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587816[iParam0 /*444*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_21(int iParam0)
{
	return func_22(iParam0);
}

bool func_22(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
}

int func_23(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_38(Param0))
	{
		if (func_37(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_26(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_25(*uParam3, 1056964608))
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
				func_24(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

void func_24(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_18(&Var0, 0f, 0f, unk_0x83D8CBE6E641FA2A(0f, 360f));
		}
		else
		{
			func_18(&Var0, 0f, 0f, fParam7);
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

int func_25(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_1721[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_26(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_34(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_28(&Var2, &(Global_2404993.f_347[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_34(Var2, &uVar1) || func_27(Var2))
			{
				Var2 = { *uParam0 };
				func_28(&Var2, &(Global_2404993.f_347[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_27(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404993.f_549 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_546);
		if (fVar0 < Global_2404993.f_549)
		{
			return 1;
		}
	}
	return 0;
}

void func_28(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_33(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404993.f_1719) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_33(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_33(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_24(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404993.f_1719) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_32(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_29(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_29(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
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
	Var6 = { func_31(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x9242631F40D1BDA7(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_30(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_30(Var6, Var3) >= 0f)
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
		Var6 = { func_31(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_31(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x9242631F40D1BDA7(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_30(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_30(Var6, Var29) >= 0f)
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

float func_30(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_31(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_32(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

Vector3 func_33(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_24(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_32(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_29(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0xEBBD48CB0344518F(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_123(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_46(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x795DFAC3136F0C6E(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_34(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_36();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404993.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_35(Param0, &(Global_2404993.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_35(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_123(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404993.f_1719) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_46(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_36()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404993.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_37(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2407465[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2407465[iVar0 /*17*/].f_16))
			{
				if (func_35(*uParam0, &(Global_2407465[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2407465[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2407465[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_28(&Var1, &(Global_2407465[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_37(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_28(&Var1, &(Global_2407465[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_38(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404993.f_484)
	{
		if (!func_42(unk_0xE0BDAFA1A39552D6(), 1))
		{
			return 1;
		}
		if (!func_41(Param0, 1008981770))
		{
			if (!func_37(&Param0, 0, 0, 0))
			{
				return 1;
			}
			else if (func_37(&Param0, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = func_40(Param0, 1008981770);
			if (iVar0 > -1)
			{
				Var1 = { func_39(&(Global_2404993.f_39[iVar0 /*12*/])) };
				if (!func_37(&Var1, 0, 0, 0))
				{
					if (!func_37(&Param0, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_39(var uParam0)
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

int func_40(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404993.f_39[iVar0 /*12*/].f_9)
		{
			if (func_35(Param0, &(Global_2404993.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_41(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404993.f_39[iVar0 /*12*/].f_9)
		{
			if (func_35(Param0, &(Global_2404993.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_42(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_43(iParam0) != 0;
	}
	return func_20(iParam0, bParam1);
}

int func_43(int iParam0)
{
	if (func_44(iParam0, 0, 1))
	{
		return Global_2418529[iParam0 /*313*/].f_1;
	}
	return 0;
}

int func_44(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7868479D9B6694C0(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428549.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_45(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2404993.f_1285 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1285)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404993.f_1286[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404993.f_1286[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_46(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_47(&Param3, &Param6);
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

void func_47(var uParam0, var uParam1)
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

int func_48(struct<3> Param0, struct<3> Param3, float fParam6)
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

int func_49(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_50(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404993.f_1514.f_1 == 0 && Global_2404993.f_1514 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x281957533C0148A5(&(Global_2404993.f_1514.f_1)))
			{
				case 0:
					func_110(uParam1, uParam2);
					if (!Global_2404993.f_1514.f_2)
					{
						if (uParam2->f_7 && Global_2404993.f_513.f_7 == 0)
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
								*(uParam0[0 /*3*/]) = { Global_2404993.f_1489 };
							}
							if (uParam1->f_5 && func_10(Global_2404993.f_468))
							{
								if (!Global_2404993.f_1514.f_5)
								{
									Global_2404993.f_1514.f_5 = 1;
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
							uParam0->f_10[0] = unk_0x83D8CBE6E641FA2A(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_110(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x992B2940FA16F60D())
		{
			if (!unk_0x8DA5CF144D5507AA())
			{
				if (unk_0x9D9BFCD0A7E00931())
				{
					func_110(uParam1, uParam2);
					Global_2404993.f_1514.f_1 = unk_0xDCB5F4E85A0A35E9();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x379BC6172444185D();
				func_110(uParam1, uParam2);
				if (!Global_2404993.f_1514.f_2)
				{
					Global_2404993.f_1514.f_5 = 1;
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
		func_107(Global_2404993.f_513, &(Global_2404993.f_1514.f_31), &(Global_2404993.f_1514.f_64));
	}
	if (uParam2->f_7 && !Global_2404993.f_1514.f_4)
	{
		Global_2404993.f_1514.f_4 = 1;
		func_55(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 43;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2404993.f_1514.f_1 > 0 || Global_2404993.f_1514 > 0)
	{
		if (uParam1->f_5 || unk_0x992B2940FA16F60D())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404993.f_1514.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404993.f_1514.f_3)
					{
						iVar4 = Global_2404993.f_1514.f_3 + 1;
					}
					if (iVar4 > (Global_2404993.f_1514.f_1 - 1))
					{
						iVar4 = (Global_2404993.f_1514.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x98B8AE08540D4C28(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x25FA9416B69D826E(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x165D59ABC27844C1(iVar4);
					}
					else
					{
						unk_0x7E1C23E1EC9BBDE5(iVar4, &iVar5);
					}
					func_55(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404993.f_1514.f_3 = iVar4;
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
			iVar4 = Global_2404993.f_1514.f_1;
		}
		if (Global_2404993.f_1514.f_1 == iVar4)
		{
			if (uParam1->f_5 && func_10(Global_2404993.f_468))
			{
				if (Global_2404993.f_1514.f_2)
				{
					func_9(uParam0, &(Global_2404993.f_1514.f_6));
					func_54(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404993.f_1489 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x83D8CBE6E641FA2A(0f, 360f);
					func_54(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404993.f_1514.f_2)
			{
				func_9(uParam0, &(Global_2404993.f_1514.f_6));
				func_54(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0xA6055C735E3DD877(0, Global_2404993.f_1514.f_1);
				unk_0x98B8AE08540D4C28(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_51(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_54(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404993.f_1489 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x83D8CBE6E641FA2A(0f, 360f);
					func_54(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404993.f_1489 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0x83D8CBE6E641FA2A(0f, 360f);
				func_54(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404993.f_1489 };
		if (uParam1->f_5 && func_10(Global_2404993.f_468))
		{
			if (!Global_2404993.f_1514.f_5)
			{
				Global_2404993.f_1514.f_5 = 1;
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
		uParam0->f_10[0] = unk_0x83D8CBE6E641FA2A(0f, 360f);
		func_54(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

int func_51(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_53(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2408431[iVar4])
	{
		if (func_52(Var1, &(Global_2407602[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_29(&Var1, Global_2407602[iVar4 /*92*/][iVar0 /*7*/], Global_2407602[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407602[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408431[8])
	{
		if (func_52(Var1, &(Global_2407602[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_29(&Var1, Global_2407602[iVar4 /*92*/][iVar0 /*7*/], Global_2407602[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407602[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_52(struct<3> Param0, var uParam3)
{
	return unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_53(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2408441[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2408441[1])
	{
		if (Param0.f_0 < Global_2408445[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2408441[2])
	{
		if (Param0.f_0 < Global_2408445[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2408445[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2408445[3])
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

void func_54(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404993.f_1622[(3 - iVar0) /*3*/] = { Global_2404993.f_1622[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404993.f_1622[0 /*3*/] = { Param0 };
}

void func_55(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
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
	struct<8> Var16;
	bool bVar24;
	bool bVar25;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404993.f_468 == 1)
		{
			if (unk_0xF87C669B882D93C0((Global_2404993.f_481.f_2 - Param0.f_2)) < 25f)
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
		if (func_104(unk_0xE0BDAFA1A39552D6()))
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
		if (!func_103(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0xF43304FDC69AADFC(unk_0x06736567F820A39E(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0xF43304FDC69AADFC(unk_0x06736567F820A39E(), Param0, 20f))
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
		if (!func_102(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (func_96(Param0, fParam3, uParam4->f_15, func_101(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404993.f_1;
		}
	}
	else if (!func_93(Param0, 25f, unk_0xE0BDAFA1A39552D6(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_92(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_92(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404993.f_626)
		{
			Var11 = { Global_2404993.f_481 };
			if (Global_2404993.f_468 == 26)
			{
				Var11 = { Global_2404993.f_513.f_18 };
			}
			if (func_38(Var11))
			{
				if (!func_37(&Param0, 0, 0, 0) && !func_91(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if (!func_91(&Param0, 0) && !func_25(Param0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_90(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_89(unk_0xE0BDAFA1A39552D6()) && func_87(unk_0xE0BDAFA1A39552D6())))
		{
			if (!func_86(&Param0, &(Global_2404993.f_1514.f_64), 0, 1065353216))
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
		if (!func_87(unk_0xE0BDAFA1A39552D6()))
		{
			if (!func_85(Param0, &(Global_2404993.f_1514.f_31), &(Global_2404993.f_1514.f_64), 1073741824))
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
	if (func_84(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_84(Param0))
			{
				if (func_10(Global_2404993.f_468))
				{
					if (func_41(Param0, 1f))
					{
						iVar7 += 4096;
					}
				}
				else
				{
					iVar7 += 4096;
				}
			}
		}
		else
		{
			iVar7 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_83(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404993.f_39.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x80B7B1E21DC40E6E(unk_0xED1A87B65DEE4375(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404993.f_626)
		{
			if (!func_26(&Param0, 0, 0))
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
	if (!func_51(&Param0, 0))
	{
		iVar7 = (iVar7 + 65536);
	}
	else
	{
		iVar7 = -1;
	}
	if (func_15(Param0, 1056964608))
	{
		iVar7 = -1;
	}
	if (uParam4->f_5)
	{
	}
	else if (func_82(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var16.f_2 = 1176256410;
	bVar24 = false;
	bVar25 = false;
	iVar15 = 0;
	while (iVar15 < 3)
	{
		if (iVar7 >= Global_2404993.f_1514.f_6[iVar15 /*8*/])
		{
			if (uParam4->f_5)
			{
				if (!bVar24)
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
						fVar0 = func_74(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					else
					{
						fVar0 = func_74(Param0, Global_2404993.f_1489, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar24 = true;
				}
				if ((func_10(Global_2404993.f_468) && iVar7 == Global_2404993.f_1514.f_6[iVar15 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar25)
					{
						fVar2 = func_72(Param0);
						bVar25 = true;
					}
					if (fVar2 < Global_2404993.f_1514.f_6[iVar15 /*8*/].f_2)
					{
						Var16.f_4 = { Param0 };
						Var16.f_7 = fParam3;
						Var16.f_0 = iVar7;
						Var16.f_1 = fVar0;
						Var16.f_2 = fVar2;
						func_71(Var16, iVar15);
						Global_2404993.f_1514.f_2 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404993.f_1514.f_6[iVar15 /*8*/] || (iVar7 == Global_2404993.f_1514.f_6[iVar15 /*8*/] && fVar0 > Global_2404993.f_1514.f_6[iVar15 /*8*/].f_1))
				{
					Var16.f_4 = { Param0 };
					Var16.f_7 = fParam3;
					Var16.f_0 = iVar7;
					Var16.f_1 = fVar0;
					func_71(Var16, iVar15);
					Global_2404993.f_1514.f_2 = 1;
					return;
				}
			}
			else
			{
				if (!bVar24)
				{
					if (uParam4->f_15)
					{
						fVar1 = 3.5f;
					}
					else
					{
						fVar1 = 1f;
					}
					fVar5 = func_70(Param0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_57(Param0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = func_56(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = func_56(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					bVar24 = true;
				}
				if (iVar7 > Global_2404993.f_1514.f_6[iVar15 /*8*/] || (iVar7 == Global_2404993.f_1514.f_6[iVar15 /*8*/] && fVar3 > Global_2404993.f_1514.f_6[iVar15 /*8*/].f_3))
				{
					Var16.f_4 = { Param0 };
					Var16.f_7 = fParam3;
					Var16.f_0 = iVar7;
					Var16.f_3 = fVar3;
					func_71(Var16, iVar15);
					Global_2404993.f_1514.f_2 = 1;
					return;
				}
			}
		}
		iVar15++;
	}
}

float func_56(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_57(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
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
		if (func_44(iVar11, 1, 1))
		{
			if (!iVar11 == unk_0xE0BDAFA1A39552D6() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_60(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0xF749B19A9F9B3DBF(iVar11) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
					{
						if (!unk_0xF749B19A9F9B3DBF(iVar11) == -1 || !func_42(unk_0xE0BDAFA1A39552D6(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar11) || !bParam6)
					{
						if (func_59(iVar11))
						{
							Var5 = { func_58(iVar11) };
							if (!iVar11 == unk_0xE0BDAFA1A39552D6())
							{
								Var8 = { unk_0x92FCF8179285B603(unk_0x44A9253132E1DDE0(iVar11)) };
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
							fVar1 = unk_0xA1F52EC3ECE1D42E(Param0, Var5, 1);
							fVar2 = unk_0xA1F52EC3ECE1D42E(Param0, Var8, 1);
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

Vector3 func_58(int iParam0)
{
	return unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iParam0), 0);
}

int func_59(int iParam0)
{
	if (unk_0xD1BDCACEB9BCE7A2(unk_0x44A9253132E1DDE0(iParam0)) || Global_2418529[iParam0 /*313*/].f_241)
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (func_44(iParam0, 0, 1))
	{
		if (!func_68(iParam0))
		{
			if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iParam0))
			{
				if (!unk_0xF749B19A9F9B3DBF(iParam0) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
				{
					if (func_20(unk_0xE0BDAFA1A39552D6(), 1))
					{
						if (!func_67(unk_0xF749B19A9F9B3DBF(iParam0), unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
				{
					if (!func_20(unk_0xE0BDAFA1A39552D6(), 1))
					{
						if (!func_61(iParam0))
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

int func_61(int iParam0)
{
	if (func_66(unk_0xE0BDAFA1A39552D6(), iParam0))
	{
		return 1;
	}
	Global_2460474 = { func_65(iParam0) };
	if (unk_0xC1CBB5CA861EE944(&Global_2460474))
	{
		return 1;
	}
	if (func_62(unk_0xE0BDAFA1A39552D6(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (!iVar0 == func_63())
	{
		if (iVar0 == func_64(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	return -1;
}

int func_64(int iParam0)
{
	if (iParam0 != func_63())
	{
		return Global_1610705[iParam0 /*178*/].f_10;
	}
	return func_63();
}

struct<13> func_65(var uParam0)
{
	struct<13> Var0;
	
	unk_0x3C903E672223AE0B(uParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0, var uParam1)
{
	if (unk_0x3D340893CA28EFFC())
	{
		Global_2460474 = { func_65(iParam0) };
		Global_2460487 = { func_65(uParam1) };
		if (unk_0x781D726C27D122E2(&Global_2460474))
		{
			if (unk_0x781D726C27D122E2(&Global_2460487))
			{
				unk_0xAFAED23A75339868(&Global_2460404, 35, &Global_2460474);
				unk_0xAFAED23A75339868(&Global_2460439, 35, &Global_2460487);
				if (Global_2460404 == Global_2460439)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2)
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
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 0);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 1);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 2);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 4);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 5);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 6);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 8);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 9);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 10);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 12);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 13);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 14);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_68(int iParam0)
{
	if (func_120(iParam0, 0))
	{
		return 1;
	}
	if (func_69())
	{
		if (iParam0 == unk_0xE0BDAFA1A39552D6())
		{
			return 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_69()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

float func_70(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_44(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			if (!unk_0x4FF34B5B023875E1())
			{
				if (unk_0x7515D29C901C4E76(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0));
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
		if (func_44(iVar1, 1, 1))
		{
			if (!func_120(iVar1, 0) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xE0BDAFA1A39552D6()))
				{
					if (func_59(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xF749B19A9F9B3DBF(iVar1) != unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))) || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0xF749B19A9F9B3DBF(iVar1) != iParam7 || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
						{
							if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iVar1), 0));
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

void func_71(struct<8> Param0, int iParam8)
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404993.f_1514.f_6[iParam8 /*8*/] };
	Global_2404993.f_1514.f_6[iParam8 /*8*/] = { Param0 };
	if (iParam8 < 2)
	{
		func_71(Var0, iParam8 + 1);
	}
}

float func_72(struct<3> Param0)
{
	var uVar0;
	
	return func_73(Param0, &(Global_2404993.f_39), &uVar0);
}

float func_73(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404993.f_1719) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_74(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (unk_0xBBDA792448DB5A89(iParam9) / unk_0xBBDA792448DB5A89(8));
	}
	if (bParam6)
	{
		fVar0 = func_56(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	fVar0 = func_56(func_57(Param0, 1, 0, 0, 1), 0f, func_81(), func_79(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar0 = func_56(func_77(Param0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar4 = 100f;
	if (unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && !func_42(unk_0xE0BDAFA1A39552D6(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_56(func_76(Param0, unk_0xE0BDAFA1A39552D6(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bParam7)
	{
		if (func_75(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_56(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_56(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_56(unk_0x2A488C176D52CCA5(Global_2404993.f_481, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_75(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0xBC3E11E0840ACD52(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x8E17092FCA923035(uVar3))
	{
		unk_0x56C3FF2C1012AC52(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0xF87C669B882D93C0((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_76(struct<3> Param0, int iParam3, int iParam4)
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
			if (func_44(iVar3, 0, 1))
			{
				if (unk_0xF749B19A9F9B3DBF(iVar3) != unk_0xF749B19A9F9B3DBF(iParam3) || (unk_0xF749B19A9F9B3DBF(iVar3) == -1 && unk_0xF749B19A9F9B3DBF(iParam3) == -1))
				{
					if (Global_2413817.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2413817.f_130[iVar2 /*3*/], Param0);
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

float func_77(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x8DB7EA2D75DA4B59(unk_0x06736567F820A39E(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xC1EDB61CE0A4B94E(uVar6[iVar2]))
		{
			if (!unk_0xBDA1F5E8A36BFA07(uVar6[iVar2], 0))
			{
				if (func_78(uVar6[iVar2]))
				{
					Var3 = { unk_0xF4745590D18D14B8(uVar6[iVar2], 1) };
					fVar1 = unk_0xA1F52EC3ECE1D42E(Param0, Var3, 1);
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

int func_78(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xD53C8BCD41123EE6(uParam0);
	switch (unk_0x6144148FF32AED2F(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0x6144148FF32AED2F(uVar0, Global_1574218[unk_0xE0BDAFA1A39552D6()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 0)
	{
		iVar1 = unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0x6144148FF32AED2F(uVar0, Global_1573929[iVar1]))
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

float func_79()
{
	if (func_80())
	{
		if ((unk_0x759D601DDE232B39(Global_2404993.f_39.f_67) || unk_0xEF439FAE899F725F(Global_2404993.f_39.f_67)) || Global_2404993.f_39.f_67 == joaat("rhino"))
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

int func_80()
{
	if (Global_2404993.f_39.f_65 && !Global_2404993.f_39.f_295)
	{
		if (!func_68(unk_0xE0BDAFA1A39552D6()))
		{
			return 1;
		}
	}
	return 0;
}

float func_81()
{
	if (func_80())
	{
		if ((unk_0x759D601DDE232B39(Global_2404993.f_39.f_67) || unk_0xEF439FAE899F725F(Global_2404993.f_39.f_67)) || Global_2404993.f_39.f_67 == joaat("rhino"))
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

int func_82(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x7D7A247EA1176EFA(Param0, fParam7)) || (fVar0 > 0f && unk_0x6B1F3F8F6B7B5B2C(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0xE8689F4DBC5D8E1B(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0xE8689F4DBC5D8E1B(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_83(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404993.f_39.f_55)
	{
		if (unk_0x80B7B1E21DC40E6E(Global_2404993.f_39.f_56))
		{
			if (!unk_0xB8634D17498B22C9(Param0))
			{
				uVar0 = unk_0xED1A87B65DEE4375(Param0);
				if (unk_0x80B7B1E21DC40E6E(uVar0))
				{
					iVar1 = unk_0x9E549C05B82A30B0(uVar0);
					if (!iVar1 == Global_2404993.f_39.f_57)
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

int func_84(struct<3> Param0)
{
	switch (Global_2404993.f_1510)
	{
		case 0:
			return func_123(Param0, Global_2404993.f_1489, Global_2404993.f_1492, 0, 0);
			break;
		
		case 1:
			return func_46(Param0, Global_2404993.f_1503, Global_2404993.f_1506, 0, 0);
			break;
		
		case 2:
			return unk_0x795DFAC3136F0C6E(Param0, Global_2404993.f_1503, Global_2404993.f_1506, Global_2404993.f_1509, 0, 1);
			break;
	}
	return 0;
}

int func_85(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0x795DFAC3136F0C6E(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_86(var uParam0, var uParam1, bool bParam2, float fParam3)
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
				func_24(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_87(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_88(iParam0))
			{
				if (Global_1587816[iParam0 /*444*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_88(int iParam0)
{
	return Global_1587816[iParam0 /*444*/].f_180 != 0;
}

int func_89(int iParam0)
{
	if (func_20(iParam0, 1))
	{
		if (Global_1587816[iParam0 /*444*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_90(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404993.f_1622[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_91(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_27(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x83D8CBE6E641FA2A(0.01f, 360f);
			func_24(&Var1, Global_2404993.f_546, Global_2404993.f_549, 1036831949, 0, fVar4);
			if (func_34(Var1, &uVar0) || func_27(Var1))
			{
				Var1 = { *uParam0 };
				func_24(&Var1, Global_2404993.f_546, Global_2404993.f_549, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_92(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_44(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			if (!unk_0x4FF34B5B023875E1())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xA1F52EC3ECE1D42E(func_58(unk_0xE0BDAFA1A39552D6()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x7515D29C901C4E76(Param0, fParam3))
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
		if (func_44(iVar1, 1, 1))
		{
			if (!func_120(iVar1, 0) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xE0BDAFA1A39552D6()))
				{
					if ((func_59(iVar1) || !bParam10) && !Global_2418529[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0xF749B19A9F9B3DBF(iVar1) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xF749B19A9F9B3DBF(iVar1) != unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))) || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0xA1F52EC3ECE1D42E(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xF749B19A9F9B3DBF(iVar1) != iParam8 || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
						{
							if (unk_0xA1F52EC3ECE1D42E(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
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

int func_93(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_95(Param0, fParam3, iParam4, iParam5, 0) || func_94(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_94(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2413817.f_556[iVar0] == 0)
			{
				if (func_16(Param0, Global_2413817.f_426[iVar0 /*3*/], Global_2413817.f_523[iVar0], Global_2413817.f_556[iVar0], 1036831949))
				{
					if (func_44(iVar1, 0, 1) && func_44(iParam3, 0, 1))
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

int func_95(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (bParam6)
			{
				if (func_44(iVar1, 0, 1) && func_44(iParam4, 0, 1))
				{
					if (unk_0xF749B19A9F9B3DBF(iVar1) == unk_0xF749B19A9F9B3DBF(iParam4))
					{
						return 0;
					}
				}
			}
			if (func_44(iVar1, 0, 1) && func_44(iParam4, 0, 1))
			{
				if (Global_2413817.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2413817.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_58(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2413817.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2413817.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_44(iVar1, 0, 1))
			{
				if (unk_0x2A488C176D52CCA5(func_58(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_96(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404993.f_1 = 0;
	if (!func_93(Param0, 0.5f, unk_0xE0BDAFA1A39552D6(), 0, 0))
	{
		Global_2404993.f_1++;
		if (bParam5)
		{
			if (func_144(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404993.f_1 = (Global_2404993.f_1 + Global_2404993);
				if (!func_100(Param0, fParam12))
				{
					Global_2404993.f_1++;
					if (!func_15(Param0, 1056964608))
					{
						Global_2404993.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404993.f_1 = (Global_2404993.f_1 + Global_2404993);
			}
		}
		else if (!bParam4)
		{
			if (func_144(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404993.f_1 = (Global_2404993.f_1 + Global_2404993);
				if (!func_100(Param0, fParam12))
				{
					Global_2404993.f_1++;
					if (!func_97(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404993.f_1++;
						if (!func_15(Param0, 1056964608))
						{
							Global_2404993.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404993.f_1 = (Global_2404993.f_1 + Global_2404993);
			}
		}
		else if (func_144(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404993.f_1 = (Global_2404993.f_1 + Global_2404993);
			if (!func_100(Param0, fParam12))
			{
				Global_2404993.f_1++;
				if (!func_97(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404993.f_1++;
					if (!func_15(Param0, 1056964608))
					{
						Global_2404993.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404993.f_1 = (Global_2404993.f_1 + Global_2404993);
		}
	}
	return 0;
}

int func_97(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xE0BDAFA1A39552D6() == iVar1)
		{
			if ((func_44(iVar1, 1, 1) && func_59(iVar1)) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
			{
				if (!func_99(unk_0xE0BDAFA1A39552D6(), iVar1, -2, 0))
				{
					if (func_98(func_58(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_98(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0x795DFAC3136F0C6E(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && unk_0xF749B19A9F9B3DBF(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xF749B19A9F9B3DBF(iParam0) == unk_0xF749B19A9F9B3DBF(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xF749B19A9F9B3DBF(iParam0) == iParam2;
	}
	return unk_0xF749B19A9F9B3DBF(iParam0) == iParam2;
}

int func_100(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_44(iVar1, 1, 1) && func_59(iVar1)) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
		{
			if ((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && unk_0xF749B19A9F9B3DBF(iVar1) == -1) && !func_42(unk_0xE0BDAFA1A39552D6(), 1))
			{
				return 0;
			}
			else if ((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && !unk_0xE0BDAFA1A39552D6() == iVar1) || !func_99(unk_0xE0BDAFA1A39552D6(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_58(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_101(int iParam0)
{
	if ((Global_2404993.f_468 == 9 || Global_2404993.f_468 == 9) || (Global_2404993.f_468 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_102(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xE0BDAFA1A39552D6() != iVar1) || iParam8 == 0)
		{
			if (func_44(iVar1, bParam4, bParam5))
			{
				if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
				{
					if (!bParam7 || (!unk_0xCFC04A38F256EE06(unk_0x44A9253132E1DDE0(iVar1)) && func_59(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) != unk_0xF749B19A9F9B3DBF(iVar1))) || unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
						{
							if (((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && iParam9) && bParam6) && func_61(iVar1))
							{
							}
							else if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
							{
								if (unk_0xA1F52EC3ECE1D42E(func_58(iVar1), Param0, 1) < fParam3)
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

int func_103(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_44(iVar1, 1, 1))
			{
				if ((!func_120(iVar1, 0) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1)) && iVar1 != unk_0xE0BDAFA1A39552D6())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0xF749B19A9F9B3DBF(iVar1) == -1)
						{
							if (unk_0xF749B19A9F9B3DBF(iVar1) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0xF749B19A9F9B3DBF(iVar1) == iVar3)
					{
						if (unk_0xA1F52EC3ECE1D42E(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
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

int func_104(int iParam0)
{
	if ((func_42(iParam0, 1) || func_106(iParam0)) || func_105(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_28 != -1 || (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610705[iVar0 /*178*/] != -1;
	}
	return 0;
}

void func_107(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0x7DA173D4FD42F36B(Global_2359719[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359719[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359719[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359719[iVar1 /*26*/].f_6.f_2;
					func_109(&Var2, uParam3, iVar0);
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
				func_108(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_108(var uParam0, var uParam1, int iParam2)
{
	Global_2409408 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_108(&Global_2409408, uParam1, iParam2 + 1);
	}
}

void func_109(var uParam0, var uParam1, int iParam2)
{
	Global_2409404 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_109(&Global_2409404, uParam1, iParam2 + 1);
	}
}

void func_110(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404993.f_1285 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1285)
		{
			if (func_111(Global_2404993.f_1286[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404993.f_1286[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404993.f_1286[iVar0 /*4*/] };
					fVar4 = unk_0x10BFB9592B558291(Var1.f_0, Var1.f_1);
				}
				func_55(Global_2404993.f_1286[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404993.f_1514++;
			}
			iVar0++;
		}
	}
}

int func_111(struct<3> Param0, var uParam3)
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

void func_112(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_47(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

void func_113()
{
	func_117();
	func_116();
	func_115();
	func_114();
}

void func_114()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404993.f_1514.f_64[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_115()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404993.f_1514.f_31[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_116()
{
	struct<8> Var0;
	int iVar8;
	
	Var0.f_2 = 1176256410;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		Global_2404993.f_1514.f_6[iVar8 /*8*/] = { Var0 };
		iVar8++;
	}
}

void func_117()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404993.f_1514 = { Var0 };
}

var func_118()
{
	return Global_1310987.f_4;
}

void func_119(var uParam0, var uParam1)
{
	func_145();
	func_143(uParam0, uParam1);
}

bool func_120(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_121(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_121(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_122();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_122()
{
	return Global_1312747;
}

bool func_123(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_124(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404993.f_1155 > 0 && func_142(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_125(uParam0, uParam1, uParam2);
	}
}

void func_125(var uParam0, var uParam1, var uParam2)
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
		if (func_23(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_141(uParam0, 1))
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
	Global_2409418.f_162 = 0;
	Global_2409418.f_163 = 0;
	Global_2409418.f_164 = -99;
	Global_2409418.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2409418[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2409418.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xBC3E11E0840ACD52(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x8E17092FCA923035(iVar8))
		{
			unk_0x56C3FF2C1012AC52(iVar8, &Var1);
			bVar12 = false;
			if (Global_2409418.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2409418.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x69B487ADC61FFEB7(iVar8)) || unk_0x78C3A1255CC06E1B(iVar8))
			{
				unk_0x226281136F155C6F(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_91(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_140(Var1))
									{
										Var1 = { func_138(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (!func_15(Var1, 5f))
										{
											if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
											{
												if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
												{
													if (func_137(Var1, uParam2) || uParam2->f_33 >= 2)
													{
														if ((uParam2->f_48 && !func_141(&Var1, 0)) || uParam2->f_48 == 0)
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
																	if ((uParam2->f_12 && !func_132(Var1, fVar4, uParam2->f_34, unk_0xE0BDAFA1A39552D6(), 0, uParam2->f_56)) || !uParam2->f_12)
																	{
																		if (!uParam2->f_15 || !func_23(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (func_144(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																				}
																				else if (func_144(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_131(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																							iVar22 = func_130(Var1, uParam2->f_54, &fVar23);
																						}
																						if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																						{
																							if (uParam2->f_52)
																							{
																								if (iVar22 < uParam2->f_53)
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409418.f_162)
																									{
																										Global_2409418[iVar16 /*3*/] = { 0f, 0f, 0f };
																										Global_2409418.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2409418.f_162 = 0;
																									uParam2->f_53 = iVar22;
																								}
																							}
																							if (uParam2->f_30)
																							{
																								if (Global_2409418.f_162 == 0)
																								{
																									Global_2409418[0 /*3*/] = { Var1 };
																									Global_2409418.f_121[0] = fVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409418.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409418[iVar16 /*3*/], uParam2->f_35))
																											{
																												func_129(Var1, fVar4, iVar16);
																												iVar16 = Global_2409418.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2409418.f_162++;
																								if (Global_2409418.f_162 >= 5)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409418.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2409418[Global_2409418.f_162 /*3*/] = { Var1 };
																								Global_2409418.f_121[Global_2409418.f_162] = fVar4;
																								Global_2409418.f_162++;
																								if (func_137(Var1, uParam2))
																								{
																									Global_2409418.f_163++;
																								}
																								if (Global_2409418.f_162 >= 10)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409418.f_162 == 40)
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
				if (Global_2409418.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2409418[0 /*3*/] };
						*uParam1 = Global_2409418.f_121[0];
						return;
					}
					else
					{
						if (Global_2409418.f_163 > 0 && !Global_2409418.f_163 == Global_2409418.f_162)
						{
							func_127(0, uParam2);
						}
						iVar24 = unk_0xA6055C735E3DD877(0, Global_2409418.f_162);
						Var25 = { Global_2409418[0 /*3*/] };
						uVar28 = Global_2409418.f_121[0];
						Global_2409418[0 /*3*/] = { Global_2409418[iVar24 /*3*/] };
						Global_2409418.f_121[0] = Global_2409418.f_121[iVar24];
						Global_2409418[iVar24 /*3*/] = { Var25 };
						Global_2409418.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2409418[0 /*3*/] };
						*uParam1 = Global_2409418.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_125(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0xA6055C735E3DD877((1 + iVar15), (40 + iVar15));
						unk_0x92162FD91928AD78(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_138(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
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
						if (func_23(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_141(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_125(uParam0, uParam1, uParam2);
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
				func_125(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_126(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2409418.f_164 = iVar8;
	}
}

void func_126(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_93(*(uParam0[iVar2 /*4*/]), 5f, unk_0xE0BDAFA1A39552D6(), 0, 0))
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

void func_127(int iParam0, var uParam1)
{
	if (!func_137(Global_2409418[iParam0 /*3*/], uParam1))
	{
		Global_2409418.f_162 = (Global_2409418.f_162 - 1);
		func_128(iParam0);
		if (Global_2409418.f_162 > Global_2409418.f_163)
		{
			func_127(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_127(iParam0 + 1, uParam1);
	}
}

void func_128(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2409418[iParam0 /*3*/] = { Global_2409418[iParam0 + 1 /*3*/] };
			Global_2409418.f_121[iParam0] = Global_2409418.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_129(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2409418[iParam4 /*3*/] };
	uVar3 = Global_2409418.f_121[iParam4];
	Global_2409418[iParam4 /*3*/] = { Param0 };
	Global_2409418.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2409418.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_129(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_130(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_60(iVar5))
		{
			Var1 = { func_58(iVar5) };
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

int func_131(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xE0BDAFA1A39552D6() != iVar1) || iParam9 == 0)
		{
			if (func_44(iVar1, bParam5, bParam6))
			{
				if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
				{
					if (!bParam8 || (!unk_0xCFC04A38F256EE06(unk_0x44A9253132E1DDE0(iVar1)) && func_59(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) != unk_0xF749B19A9F9B3DBF(iVar1))) || unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
						{
							if (((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && iParam10) && bParam7) && func_61(iVar1))
							{
							}
							else if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
							{
								if (func_16(func_58(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_132(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_136(Param0, fParam3, iParam4, iParam5, iParam6) || func_133(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_133(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_135(Param0, iParam4, Global_2413817.f_426[iVar0 /*3*/], Global_2413817.f_556[iVar0]))
			{
				if (func_134(Param0, fParam3, iParam4, Global_2413817.f_426[iVar0 /*3*/], Global_2413817.f_523[iVar0], Global_2413817.f_556[iVar0], 0))
				{
					if (func_44(iVar1, 0, 1) && func_44(iParam5, 0, 1))
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

int func_134(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
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
	
	if (func_16(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_17(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0xF87C669B882D93C0((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0xF87C669B882D93C0((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0xF87C669B882D93C0((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_18(&Var23, 0f, 0f, fParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_18(&Var26, 0f, 0f, fParam3);
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
		if (func_16(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_134(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_135(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_19(iParam3, 1008981770);
	fVar1 = func_19(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_136(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_44(iVar1, 0, 1) && func_44(iParam5, 0, 1))
			{
				if (Global_2413817.f_260[iVar0])
				{
					if (func_16(Global_2413817.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_16(func_58(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2413817.f_260[iVar0])
			{
				if (func_16(Global_2413817.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_44(iVar1, 0, 0))
			{
				if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
				{
					if (func_16(func_58(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_137(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_123(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_46(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x795DFAC3136F0C6E(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_138(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_139(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x226281136F155C6F(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x6FD4A30EB9EA8649(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
				func_17(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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
		if (!func_139(Param0, *fParam3, Param6))
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
	Var0 = { unk_0x90B89006901451E8(Param0, *fParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x003ADF07D87EC4B8(Param0, *fParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_17(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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

int func_139(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_18(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_30(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_140(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_53(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2409153[iVar1])
	{
		if (func_52(Param0, &(Global_2408450[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2409153[8])
	{
		if (func_52(Param0, &(Global_2408450[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_141(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404993.f_22.f_16)
	{
		switch (Global_2404993.f_22.f_15)
		{
			case 0:
				if (func_123(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_46(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x795DFAC3136F0C6E(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_11, Global_2404993.f_22.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_33(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_11, Global_2404993.f_22.f_14, Global_2404993.f_22.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_142(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2404993.f_1155 > 0)
	{
		iVar0 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_23(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_141(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2409418.f_162 = 0;
		Global_2409418.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2409418[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2409418.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1155)
		{
			Var1 = { Global_2404993.f_1156[iVar0 /*4*/] };
			fVar4 = Global_2404993.f_1156[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_132(Var1, fVar4, uParam2->f_34, unk_0xE0BDAFA1A39552D6(), 0, uParam2->f_56)) || !uParam2->f_12)
					{
						if (!uParam2->f_15 || !func_23(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
									if (func_144(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_144(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_131(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
											iVar11 = func_130(Var1, uParam2->f_54, &fVar12);
										}
										if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
										{
											if (uParam2->f_52)
											{
												if (iVar11 < uParam2->f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2409418.f_162)
													{
														Global_2409418[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2409418.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2409418.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2409418.f_162 == 0)
												{
													Global_2409418[0 /*3*/] = { Var1 };
													Global_2409418.f_121[0] = fVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2409418.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409418[iVar5 /*3*/], uParam2->f_35))
															{
																func_129(Var1, fVar4, iVar5);
																iVar5 = Global_2409418.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2409418.f_162++;
												if (Global_2409418.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1155;
													}
													else if (Global_2409418.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1155;
													}
												}
											}
											else
											{
												Global_2409418[Global_2409418.f_162 /*3*/] = { Var1 };
												Global_2409418.f_121[Global_2409418.f_162] = fVar4;
												Global_2409418.f_162++;
												if (Global_2409418.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1155;
													}
													else if (Global_2409418.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1155;
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
			iVar0++;
		}
		if (Global_2409418.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2409418[0 /*3*/] };
				*uParam1 = Global_2409418.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2409418.f_163 > 0 && !Global_2409418.f_163 == Global_2409418.f_162)
				{
					func_127(0, uParam2);
				}
				iVar13 = unk_0xA6055C735E3DD877(0, Global_2409418.f_162);
				Var14 = { Global_2409418[0 /*3*/] };
				uVar17 = Global_2409418.f_121[0];
				Global_2409418[0 /*3*/] = { Global_2409418[iVar13 /*3*/] };
				Global_2409418.f_121[0] = Global_2409418.f_121[iVar13];
				Global_2409418[iVar13 /*3*/] = { Var14 };
				Global_2409418.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2409418[0 /*3*/] };
				*uParam1 = Global_2409418.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_142(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_125(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_143(var uParam0, var uParam1)
{
	unk_0x932FA68E0F89FC72(uParam0, uParam1, 0.1f);
	Global_2404993.f_1497 = unk_0xAE832DCCE9CD3242();
	Global_2404993.f_1495 = 1;
	Global_2404993.f_1498 = unk_0x201D90648B2AE3CE();
}

int func_144(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x7D7A247EA1176EFA(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x6B1F3F8F6B7B5B2C(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x6B1F3F8F6B7B5B2C(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xE8689F4DBC5D8E1B(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993++;
	if (bParam13)
	{
		if (unk_0xFED7CD2BD3B9B1DB(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993++;
	if (fParam14 > 0f)
	{
		if (func_102(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_92(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404993++;
	return 1;
}

void func_145()
{
	if (Global_2404993.f_1495)
	{
		if (unk_0xAE832DCCE9CD3242() == Global_2404993.f_1497)
		{
			unk_0x037646E96F4E7ADD();
		}
		else
		{
			unk_0x037646E96F4E7ADD();
		}
		Global_2404993.f_1495 = 0;
	}
}

int func_146(bool bParam0)
{
	if (unk_0x4FF34B5B023875E1())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_147(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
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

int func_148(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_149(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x587E5997B76F47FE())
		{
			func_150(uParam0, 0, 0);
		}
	}
}

void func_150(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x17CC0D5008835470() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
			}
			else
			{
				*uParam0 = unk_0xED6DF4F701311AF8();
			}
		}
		else
		{
			*uParam0 = unk_0x1ADBAAC322D61F73();
		}
		uParam0->f_1 = 1;
	}
}

void func_151()
{
	switch (Local_67[unk_0x490BA5FDD7EE47A9() /*3*/].f_2)
	{
		case 0:
			func_185();
			func_184();
			if (func_173())
			{
				func_171();
				func_170();
				func_152(35);
				Local_67[unk_0x490BA5FDD7EE47A9() /*3*/].f_2 = 1;
			}
			else if (Local_56.f_8 >= 1)
			{
				func_170();
				Local_67[unk_0x490BA5FDD7EE47A9() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_56.f_8 >= 2)
			{
				Local_67[unk_0x490BA5FDD7EE47A9() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_7114)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_169() /*10510*/].f_7704.f_2291[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_169() /*10510*/].f_7704.f_2291[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_169() /*10510*/].f_7704.f_2291[iVar2 /*3*/].f_1)
			{
				func_165(iVar2, 1);
				unk_0xE27C8E42A97895CF(&Global_2460586, (8 + iVar2));
				func_160(2102, -1);
				func_156(67, -1);
				func_160(2559, -1);
				func_156(69, -1);
				unk_0xEB6BEAD64CB7E006(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0x7DA173D4FD42F36B(Global_2460586, 12))
					{
						func_153(7, 0);
					}
					else
					{
						func_153(15, 0);
					}
				}
			}
		}
	}
}

void func_153(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_155(iParam0, iParam1))
	{
		iVar0 = func_154();
		Global_2444000[iVar0] = iParam0;
	}
}

int func_154()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2444000[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_155(int iParam0, var uParam1)
{
	if (Global_1315901)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_158(iParam0, func_159(iParam1));
	iVar0++;
	func_157(iParam0, iVar0, iParam1);
}

void func_157(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2496915[iParam0 /*5*/][func_159(uParam2)];
	unk_0x57B5A527FBAC251E(iVar0, iParam1, 1);
}

int func_158(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2496915[iParam0 /*5*/][func_159(iParam1)];
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_159(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_122();
		if (iVar1 > -1)
		{
			Global_2473567 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2473567 = 1;
		}
	}
	return iVar0;
}

void func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_164(iParam0, func_159(iParam1), 0);
	iVar0++;
	if (!func_163(iParam0))
	{
		func_162(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_161(iParam0, iVar0, iParam1, 1);
	}
}

void func_161(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_159(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347761[func_159(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347767[func_159(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347773[func_159(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347779[func_159(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347737[func_159(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347743[func_159(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347749[func_159(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347755[func_159(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347713[func_159(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347719[func_159(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347725[func_159(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347731[func_159(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347785[func_159(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347791[func_159(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347797[func_159(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347803[func_159(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347809[func_159(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347815[func_159(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347821[func_159(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2497579[0 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2497579[1 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2497579[2 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2497579[3 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3918:
			Global_2497641[func_159(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347827[func_159(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347833[func_159(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347839[func_159(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347845[func_159(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2497610[0 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2497610[1 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2497610[2 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2497610[3 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2497610[4 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2497646[0 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2497646[1 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2497646[2 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2497646[3 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2497646[4 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2497672[0 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2497672[1 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2497672[2 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2497672[3 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2497672[4 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2497610[5 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2497579[4 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2497698[func_159(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2497713[func_159(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2497703[func_159(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2497718[func_159(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2497708[func_159(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2497723[func_159(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2497728[func_159(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_162(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_159(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
}

int func_163(int iParam0)
{
	if (Global_1347694)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2907:
			case 3036:
			case 3918:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return 1;
				break;
			}
	}
	return 0;
}

int func_164(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2473854[iParam0 /*5*/][func_159(iParam1)];
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_165(int iParam0, int iParam1)
{
	if (Global_2097152[func_169() /*10510*/].f_7704.f_2291[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_169() /*10510*/].f_7704.f_2291[iParam0 /*3*/].f_1 = iParam1;
		func_166(func_168(iParam0), iParam1, -1, 1);
	}
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_167())
	{
		iVar0 = Global_2494881[iParam0 /*5*/][func_159(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7E42158771F6AC55(iVar0, iParam1, iParam3);
		}
	}
}

int func_167()
{
	return 1;
	return 0;
}

int func_168(int iParam0)
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

int func_169()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_170()
{
	if (unk_0xCDB4C4200A9B478A(uLocal_166))
	{
		unk_0x2239ED27B231AE2E(&uLocal_166);
	}
}

void func_171()
{
	if (!unk_0x7DA173D4FD42F36B(Global_2428549.f_3337, 0))
	{
		unk_0xE27C8E42A97895CF(&(Global_2428549.f_3337), 0);
		func_172();
	}
	else
	{
		unk_0xE27C8E42A97895CF(&(Global_2428549.f_3337), 1);
	}
}

void func_172()
{
	func_160(1181, -1);
}

int func_173()
{
	struct<14> Var0;
	
	if (unk_0xC7A68C5C107A1253(Local_56.f_2))
	{
		if (unk_0x046CEB8397234DA8(unk_0xE65C345C8E8CDA4A(Local_56.f_2), unk_0x06736567F820A39E()) && func_183(Local_56.f_2))
		{
			func_182(&(Local_56.f_2));
			if (unk_0xCDB4C4200A9B478A(uLocal_166))
			{
				unk_0x2239ED27B231AE2E(&uLocal_166);
			}
			if (!func_181(1))
			{
				func_176("ABB_BOXCT", 1);
			}
			Var0.f_2 = 108;
			Var0.f_10 = unk_0xE0BDAFA1A39552D6();
			Var0.f_3 = uLocal_165;
			func_174(Var0, func_175(1));
			unk_0xE27C8E42A97895CF(&(Local_67[unk_0x490BA5FDD7EE47A9() /*3*/].f_1), 0);
			return 1;
		}
	}
	return 0;
}

void func_174(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xE0BDAFA1A39552D6();
	if (!iParam14 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Param0, 14, iParam14);
	}
}

int func_175(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar1)))
		{
			iVar2 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar1));
			if (func_44(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xE0BDAFA1A39552D6() || iParam0)
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_176(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x999E5F6D1B49D87B(sParam0);
	iVar0 = unk_0xB452F88B6A7B058D(0, 1);
	func_177(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_177(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_180() || !unk_0x21A36E2323FEA4B1()) || !func_120(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	iVar0 = func_178(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1731647.f_5[iVar0 /*53*/] = iParam0;
		Global_1731647.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1731647.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1731647.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1731647.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1731647.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1731647.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1731647 - 1))
	{
		if (iParam0 > Global_1731647.f_5[iVar0 /*53*/].f_1)
		{
			func_179(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1731647++;
	if (Global_1731647 > 5)
	{
		Global_1731647 = 5;
		return Global_1731647;
	}
	return (Global_1731647 - 1);
}

void func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1731647.f_5[iVar0 /*53*/] = { Global_1731647.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_180()
{
	return unk_0xAACC697A3792B3EF(-1762644250);
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1609372 > 0;
		
		case 2:
			return Global_1609372.f_1 > 0;
		
		case 3:
			return Global_1609372.f_2 > 0;
		
		case 4:
			return Global_1609372.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_182(var uParam0)
{
	var uVar0;
	
	if (unk_0xC7A68C5C107A1253(*uParam0))
	{
		if (!unk_0x40B3668D7226E0DF(*uParam0))
		{
		}
	}
	if (unk_0xC3A7CFC6468E0BAE(*uParam0))
	{
		uVar0 = unk_0x4C4151C3DEC199DC(*uParam0);
		unk_0x68BC4628D1B1B784(&uVar0);
	}
}

int func_183(var uParam0)
{
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		unk_0x05482B0CE9645411(uParam0);
		return unk_0x40B3668D7226E0DF(uParam0);
	}
	return 0;
}

void func_184()
{
	if (!unk_0xCDB4C4200A9B478A(uLocal_166))
	{
		if (unk_0xC7A68C5C107A1253(Local_56.f_2))
		{
			uLocal_166 = unk_0xDB8B533098769F4F(unk_0xE65C345C8E8CDA4A(Local_56.f_2));
			unk_0xC5B281EF0EBC2AA6(uLocal_166, 1.2f);
			unk_0x3A46FF82408A2709(uLocal_166, 403);
			unk_0x8A6C20F61A3C4CFA(uLocal_166, 2);
			unk_0x4BFEA7590F203BDF(uLocal_166, "ABB_BLIPN");
		}
	}
}

void func_185()
{
	var uVar0;
	
	if (!unk_0x6146EFE5BC2DD8DC())
	{
		uVar0 = func_164(1183, -1, 0);
		if (!unk_0x7DA173D4FD42F36B(uVar0, 14))
		{
			unk_0xE27C8E42A97895CF(&uVar0, 14);
			func_162(1183, uVar0, -1, 1);
		}
	}
}

int func_186()
{
	return Local_56.f_0;
}

int func_187()
{
	unk_0xBECC89ACB4E5D4ED(joaat("prop_drug_package_02"));
	if (unk_0x5C9FE32E2FF37989(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_188(int iParam0)
{
	return Local_67[iParam0 /*3*/];
}

int func_189()
{
	bool bVar0;
	
	func_196(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			return 1;
		}
	}
	if (func_195())
	{
		return 1;
	}
	if (Global_2446452)
	{
		return 1;
	}
	if (func_194())
	{
		return 1;
	}
	if (func_193(157))
	{
		if (!func_192())
		{
			return 1;
		}
	}
	if (func_193(155))
	{
		return 1;
	}
	if (!unk_0x2CB436C59D8FC08B())
	{
		return 1;
	}
	if (func_190() != 0)
	{
		if (unk_0x98934607F8D0FB03(func_190()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_190()
{
	switch (func_191())
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

int func_191()
{
	return Global_25152;
}

bool func_192()
{
	return Global_2434839.f_575;
}

int func_193(int iParam0)
{
	if (unk_0x1151827D6B6D09C7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_194()
{
	return Global_2444095;
}

bool func_195()
{
	return Global_2434839.f_570;
}

void func_196(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6E7EC37CC38579DB(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 347:
					func_197(iVar0);
					break;
				
				case 2:
					unk_0x6E7EC37CC38579DB(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_197(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		if (func_44(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x44A9253132E1DDE0(Var0.f_1);
			if (unk_0xC1EDB61CE0A4B94E(uVar3))
			{
				if (unk_0x0FDFEC0DD29106EE(uVar3, 0))
				{
					uVar4 = unk_0x34E1EF1E8BCD1BFC(uVar3, 0);
					if (unk_0xBBDEC099189867B6(uVar4, Var0.f_2) && unk_0x992E302DC36A4251())
					{
						if (func_198(uVar4, &bVar5))
						{
							unk_0x87332622AA717A1B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x768B37F1452D4834(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_198(var uParam0, var uParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xC9A01F9792B3D486(uParam0))
		{
			if (unk_0x2A3F30E37EB8FDD8(uParam0))
			{
				unk_0xB7E6C6AE18F1EDA6(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x7292AF41BC6C644F(uParam0, 0))
		{
			if (unk_0xA2C0F3D7469C0A0B(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_199()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_200(int iParam0)
{
	return Global_1587816[iParam0 /*444*/];
}

void func_201()
{
	Global_1347911 = -1;
	if (unk_0xCDB4C4200A9B478A(uLocal_166))
	{
		unk_0x2239ED27B231AE2E(&uLocal_166);
	}
	func_204();
	if (unk_0x17CC0D5008835470())
	{
		if (unk_0x587E5997B76F47FE())
		{
			if (unk_0xC7A68C5C107A1253(Local_56.f_2) && unk_0x40B3668D7226E0DF(Local_56.f_2))
			{
				func_182(&(Local_56.f_2));
			}
			Local_56.f_0 = 4;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Local_56.f_1, 8))
	{
		func_203();
	}
	func_202();
}

void func_202()
{
	unk_0xF5DF8F3392CDD07B();
}

void func_203()
{
	Global_2464975.f_791 = 0;
	Global_2464975.f_791.f_1 = { 0f, 0f, 0f };
	Global_2464975.f_791.f_4 = 0f;
	Global_2464975.f_791.f_8 = 0;
	unk_0x99BCB15F954AF579(&(Global_2464975.f_791.f_7), 0);
}

void func_204()
{
	if (unk_0x7DA173D4FD42F36B(uLocal_164, 4))
	{
		unk_0x01EC99CB97A49879(unk_0xE0BDAFA1A39552D6(), 0.72f);
		unk_0xAE85F88471D47E6B(unk_0xE0BDAFA1A39552D6(), 1f);
		unk_0x6019DE1D32F24037(unk_0xE0BDAFA1A39552D6(), 1f);
		unk_0x72D8912DA5594C79(unk_0xE0BDAFA1A39552D6(), 1f);
		func_205(1);
		unk_0x99BCB15F954AF579(&uLocal_164, 5);
		unk_0x99BCB15F954AF579(&uLocal_164, 7);
		unk_0x99BCB15F954AF579(&uLocal_164, 4);
	}
}

void func_205(int iParam0)
{
	var uVar0;
	
	uVar0 = func_206(iParam0, 0);
	unk_0xBDC149D7C67DBF2E(uVar0);
}

char* func_206(int iParam0, bool bParam1)
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
	}
	return "";
}

int func_207(struct<20> Param0)
{
	func_211(func_212(Param0.f_0), Param0);
	unk_0x1E2BF4457AC05E16(1);
	func_209(0, -1, 0);
	unk_0x8C2CCD685DA243F6(&Local_56, 11);
	unk_0xE51AD091F27ECBFF(&Local_67, 97);
	if (!func_208())
	{
		return 0;
	}
	unk_0x8AAE4CDF72BA829A(0);
	if (unk_0x587E5997B76F47FE())
	{
		Local_56.f_7 = Param0.f_16;
		Global_1347911 = Local_56.f_7;
		Local_56.f_3 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0) };
		if (!func_3(Global_2464975.f_791.f_1))
		{
			unk_0xE27C8E42A97895CF(&(Local_56.f_1), 8);
		}
	}
	iLocal_169 = unk_0x51857BE3D081B03F();
	Local_67[unk_0x490BA5FDD7EE47A9() /*3*/] = 0;
	return 1;
}

int func_208()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x17CC0D5008835470())
		{
			return 0;
		}
		if (unk_0x9D9BDEBCB8E7ADC5())
		{
			return 1;
		}
		if (func_195())
		{
			return 0;
		}
		if (func_193(155))
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

int func_209(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD225119541DF4E45();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_202();
			}
			else
			{
				return 0;
			}
		}
		if (!func_210())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x17CC0D5008835470())
				{
					if (!bParam2)
					{
						func_202();
					}
					else
					{
						return 0;
					}
				}
				if (func_195())
				{
					if (!bParam2)
					{
						func_202();
					}
					else
					{
						return 0;
					}
				}
				if (func_193(155))
				{
					if (!bParam2)
					{
						func_202();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE5302F426D0500D6())
			{
				if (!bParam2)
				{
					func_202();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD225119541DF4E45();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			if (!bParam2)
			{
				func_202();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE5302F426D0500D6())
	{
		if (!bParam2)
		{
			func_202();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_210()
{
	return Global_1315888;
}

void func_211(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x17CC0D5008835470())
	{
		func_202();
	}
	unk_0xEC43D0BC14815F9E(uParam0, 0, Param1.f_16);
}

int func_212(int iParam0)
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
		
		case 73:
			return 32;
		
		case 74:
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
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

