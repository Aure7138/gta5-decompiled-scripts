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
	if (unk_0x0E063DDE8855EC52())
	{
		if (!func_207(ScriptParam_0))
		{
			func_201();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_200(unk_0x4D29100D094E5511()) != 1 && !unk_0xF426A5DE932B3BEE(Global_2460486.f_791.f_7, 0))
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
			if (func_200(unk_0x4D29100D094E5511()) != 1 && Global_1609015 == 0)
			{
				func_201();
			}
		}
		if (unk_0x233AF2DB663CF21D() != iLocal_169)
		{
			func_201();
		}
		unk_0x0DDA6E47BC33CE72();
		switch (func_188(unk_0x7025777635AB04C0()))
		{
			case 0:
				if (func_187())
				{
					if (func_186() == 1)
					{
						Local_67[unk_0x7025777635AB04C0() /*3*/] = 1;
					}
					else if (func_186() == 4)
					{
						Local_67[unk_0x7025777635AB04C0() /*3*/] = 3;
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
					Local_67[unk_0x7025777635AB04C0() /*3*/] = 3;
				}
				if (Local_67[unk_0x7025777635AB04C0() /*3*/].f_2 == 0)
				{
					if ((!unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Local_56.f_3, 500f, 500f, 500f, 0, 1, 0) && func_200(unk_0x4D29100D094E5511()) != 1) && !unk_0xF426A5DE932B3BEE(Global_2460486.f_791.f_7, 0))
					{
						Local_67[unk_0x7025777635AB04C0() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_149(&(Local_56.f_9));
				if (func_148(&(Local_56.f_9)))
				{
					Local_67[unk_0x7025777635AB04C0() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_67[unk_0x7025777635AB04C0() /*3*/] = 4;
			
			case 4:
				func_201();
				break;
		}
		if (unk_0x96BA6BF1BA1235CC())
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
	if (Local_56.f_7 >= 32 && func_200(unk_0x4D29100D094E5511()) == 1)
	{
		if (func_3(Global_2460486.f_791.f_1))
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
			if (!unk_0xF1C8C691B49DACEA(Local_56.f_2) || Local_56.f_6 != -1)
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
	while (iVar0 < unk_0xD81B83309CFE36FF())
	{
		if (unk_0x6985B636BB8652CD(unk_0xA9A38637698616EF(iVar0)))
		{
			if (Local_56.f_6 == -1)
			{
				if (unk_0xF426A5DE932B3BEE(Local_67[iVar0 /*3*/].f_1, 0))
				{
					Local_56.f_6 = iVar0;
				}
			}
			if (!unk_0xF426A5DE932B3BEE(Local_56.f_1, 7))
			{
				if (unk_0xF426A5DE932B3BEE(Local_67[iVar0 /*3*/].f_1, 1))
				{
					unk_0x26545538B51562AD(&(Local_56.f_1), 7);
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
	struct<25> Var13;
	
	if (!unk_0xF1C8C691B49DACEA(Local_56.f_2))
	{
		if (func_187())
		{
			if (unk_0x2F600AC3146D596F(1))
			{
				fVar5 = 250f;
				Var6 = { Local_56.f_3 };
				if (unk_0xF426A5DE932B3BEE(Local_56.f_1, 8))
				{
					Var0 = { Global_2460486.f_791.f_1 };
					uVar3 = Global_2460486.f_791.f_4;
				}
				if (func_200(unk_0x4D29100D094E5511()) == 7)
				{
					iVar12 = unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511());
					if (Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/].f_10 > 0f)
					{
						Var6 = { Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/].f_3 };
						Var9 = { Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/].f_6 };
						fVar5 = Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/].f_10;
						iVar4 = 1;
					}
					else if (Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/].f_9 > 0f)
					{
						Var6 = { Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/] };
						fVar5 = Global_1617379.f_80[iVar12 /*6968*/].f_722[0 /*28*/].f_9;
					}
				}
				Var13.f_5 = 1115815936;
				Var13.f_13 = 2;
				Var13.f_20 = 2;
				Var13.f_4 = 1;
				Var13.f_5 = 30f;
				Var13.f_10 = 1;
				if (iVar4 == 0)
				{
					if (unk_0xF426A5DE932B3BEE(Local_56.f_1, 8) || func_147(Var6, fVar5, &Var0, &uVar3, Var13))
					{
						if (Local_56.f_7 >= 32 || func_200(unk_0x4D29100D094E5511()) == 1)
						{
							Local_56.f_2 = unk_0x8B513DBDB3BBB4A6(unk_0x2293A3AE5AB781DD(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_56.f_2 = unk_0x8B513DBDB3BBB4A6(unk_0xF7A54541F9BF9CDB(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0xFBDCF3D5834B58D8(unk_0xBB4FAC4BA02ED087(Local_56.f_2), uVar3);
					}
				}
				else if (unk_0xF426A5DE932B3BEE(Local_56.f_1, 8) || func_7(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_56.f_7 >= 32 || func_200(unk_0x4D29100D094E5511()) == 1)
					{
						Local_56.f_2 = unk_0x8B513DBDB3BBB4A6(unk_0x2293A3AE5AB781DD(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_56.f_2 = unk_0x8B513DBDB3BBB4A6(unk_0xF7A54541F9BF9CDB(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0xFBDCF3D5834B58D8(unk_0xBB4FAC4BA02ED087(Local_56.f_2), uVar3);
				}
			}
		}
	}
	if (unk_0xF1C8C691B49DACEA(Local_56.f_2))
	{
		return 1;
	}
	return 0;
}

int func_7(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7, var uParam8, struct<8> Param9, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
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
			if (((!Global_2404956.f_1484 == *uParam0 || !Global_2404956.f_1484.f_1 == uParam0->f_1) || !Global_2404956.f_1484.f_2 == uParam0->f_2) || !Global_2404956.f_1487 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404956.f_1498 == uParam0->f_8 || !Global_2404956.f_1498.f_1 == uParam0->f_8.f_1) || !Global_2404956.f_1498.f_2 == uParam0->f_8.f_2) || !Global_2404956.f_1501 == uParam0->f_11) || !Global_2404956.f_1501.f_1 == uParam0->f_11.f_1) || !Global_2404956.f_1501.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404956.f_1498 == uParam0->f_8 || !Global_2404956.f_1498.f_1 == uParam0->f_8.f_1) || !Global_2404956.f_1498.f_2 == uParam0->f_8.f_2) || !Global_2404956.f_1501 == uParam0->f_11) || !Global_2404956.f_1501.f_1 == uParam0->f_11.f_1) || !Global_2404956.f_1501.f_2 == uParam0->f_11.f_2) || !Global_2404956.f_1504 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404956.f_1482 == 1)
		{
			if (unk_0xA6C3B54732ED5989(Global_2404956.f_1491))
			{
				if (Global_2404956.f_1491 == unk_0xF42B3EF31F918DB2())
				{
					if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1488) < func_146(0))
					{
						return 0;
					}
				}
				else if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1488) < func_146(0))
				{
					return 0;
				}
			}
			unk_0xD94F43C18FA6FE8C();
			unk_0xE415370974A8A44B();
			func_145();
		}
		Global_2404956.f_1482 = 0;
	}
	else if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1488) > func_146(0))
	{
		Global_2404956.f_1489 = unk_0x20D394965B47B01A();
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
	unk_0x5B8694CEA5B5F33F(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404956.f_1482)
	{
		unk_0xD94F43C18FA6FE8C();
		unk_0xE415370974A8A44B();
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
		if (!unk_0xD0BF3829C5A8019D())
		{
			Global_2404956.f_1505 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404956.f_1484 = { *uParam0 };
					Global_2404956.f_1487 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404956.f_1498 = { uParam0->f_8 };
					Global_2404956.f_1501 = { uParam0->f_11 };
					Global_2404956.f_1504 = 0f;
					Global_2404956.f_1484 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404956.f_1498 = { uParam0->f_8 };
					Global_2404956.f_1501 = { uParam0->f_11 };
					Global_2404956.f_1504 = uParam0->f_14;
					Global_2404956.f_1484 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_143(Var8.f_0, Var8.f_1);
			}
			Global_2404956.f_1483 = 1;
			Global_2404956.f_1482 = 1;
			Global_2404956.f_1489 = unk_0x20D394965B47B01A();
			Global_2404956.f_1488 = unk_0x20D394965B47B01A();
			Global_2404956.f_1491 = unk_0xF42B3EF31F918DB2();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404956.f_1482)
	{
		if (Global_2404956.f_1483 == 1)
		{
			if (unk_0x8A51433F74CC1603(fVar4, fVar5, fVar6, fVar7) || unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1489) > 5000)
			{
				Global_2404956.f_1489 = unk_0x20D394965B47B01A();
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
					Global_2404956.f_1483 = 9;
				}
				else
				{
					Global_2404956.f_1483 = 2;
				}
			}
		}
		if (Global_2404956.f_1483 == 2)
		{
			if ((unk_0xA487150A6E5396A7(Var11, Var14) || unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1489) > 15000) || unk_0x1B85DA5A73D7685B(Var11, Var14) == 0)
			{
				Global_2404956.f_1489 = unk_0x20D394965B47B01A();
				if (uParam0->f_5 && !func_120(unk_0x4D29100D094E5511(), 0))
				{
					Global_2404956.f_1483 = 3;
				}
				else
				{
					Global_2404956.f_1483 = 4;
				}
			}
			else if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1493) > 7000)
			{
				func_119(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404956.f_1483 == 3)
		{
			if (func_118() || unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1489) > 10000)
			{
				Global_2404956.f_1489 = unk_0x20D394965B47B01A();
				Global_2404956.f_1483 = 4;
			}
		}
		if (Global_2404956.f_1483 == 4)
		{
			if (unk_0xD0BF3829C5A8019D())
			{
				unk_0xD94F43C18FA6FE8C();
				unk_0xE415370974A8A44B();
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
					if (!unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1)
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
							if (unk_0x71E724DD506FEB18(unk_0x4D29100D094E5511(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = unk_0x20D394965B47B01A();
								Global_2404956.f_1483 = 5;
							}
							break;
						
						case 1:
							func_112(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x09DA62667263C2F4(unk_0x4D29100D094E5511(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = unk_0x20D394965B47B01A();
								Global_2404956.f_1483 = 5;
							}
							break;
						
						case 2:
							if (unk_0x09DA62667263C2F4(unk_0x4D29100D094E5511(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404956.f_1489 = unk_0x20D394965B47B01A();
								Global_2404956.f_1483 = 5;
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
					Global_2404956.f_1489 = unk_0x20D394965B47B01A();
					Global_2404956.f_1483 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xC13DB4071F6455E5(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_112(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x273C7CAA66502CBC(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x273C7CAA66502CBC(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404956.f_1483 == 5)
		{
			if (func_50(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404956.f_1509.f_5)
				{
					Global_2404956.f_1489 = unk_0x20D394965B47B01A();
					Global_2404956.f_1483 = 6;
				}
				else
				{
					Global_2404956.f_1489 = unk_0x20D394965B47B01A();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0xCBE9F57FCC3C2A5A(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404956.f_1483 = 9;
				}
			}
			else if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1489) > 20000)
			{
				unk_0xD94F43C18FA6FE8C();
				unk_0xE415370974A8A44B();
				Global_2404956.f_1489 = unk_0x20D394965B47B01A();
				Global_2404956.f_1483 = 8;
			}
		}
		if (Global_2404956.f_1483 == 6)
		{
			iVar0 = 0;
			Global_2404956.f_1509.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_49(uParam0->f_4))
				{
					if (unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_48(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Var8)))
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
			Global_2404956.f_1489 = unk_0x20D394965B47B01A();
			Global_2404956.f_1483 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xC13DB4071F6455E5(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_112(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x273C7CAA66502CBC(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x273C7CAA66502CBC(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404956.f_1483 == 7)
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
							if (!unk_0x652D2EEEF1D3E62C(Global_2404956.f_1617[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_123(Global_2404956.f_1617[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404956.f_1617[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_46(Global_2404956.f_1617[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404956.f_1617[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0xCC0EABB8FAB8D0DE(Global_2404956.f_1617[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404956.f_1617[iVar17 /*3*/] };
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
				Global_2404956.f_1489 = unk_0x20D394965B47B01A();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0xCBE9F57FCC3C2A5A(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404956.f_1483 = 9;
			}
			else if (unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), Global_2404956.f_1489) > 20000)
			{
				Global_2404956.f_1489 = unk_0x20D394965B47B01A();
				Global_2404956.f_1483 = 8;
			}
		}
		if (Global_2404956.f_1483 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_2404956.f_468))
				{
				}
			}
			else if (Global_2404956.f_1509.f_2)
			{
				func_9(uParam2, &(Global_2404956.f_1509.f_6));
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
				*(uParam2[0 /*3*/]) = { Global_2404956.f_1484 };
				func_11(uParam2[0 /*3*/], 0, bVar83, 0, 0, uParam0, uParam1);
			}
			Global_2404956.f_1489 = unk_0x20D394965B47B01A();
			Global_2404956.f_1483 = 9;
		}
		if (Global_2404956.f_1483 == 9)
		{
			Global_2404956.f_1482 = 0;
			unk_0xD94F43C18FA6FE8C();
			unk_0xE415370974A8A44B();
			func_145();
			return 1;
		}
		Global_2404956.f_1488 = unk_0x20D394965B47B01A();
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
						if (func_49(uParam5->f_4) || !unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 1:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_48(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Var65)))
						{
							iVar64 += 4;
						}
						break;
					
					case 2:
						Var65 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_48(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Var65)))
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
					if (unk_0xF1F1EBE69E9A0DE7(Var0, &uVar61, 0))
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
				if (unk_0xF1F1EBE69E9A0DE7(Var0, &uVar61, 0))
				{
					Var0.f_2 = uVar61;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404956.f_603 = 1;
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
			return unk_0xCC0EABB8FAB8D0DE(Param0, Param4, Param7, fParam10, 0, 1);
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
	if (unk_0xFE3A173C654E331A(Param0, 0, uParam3, iParam4))
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
		if ((iParam4 == 1 && !func_23(Global_2404956.f_481, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
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
	
	if (func_20(unk_0x4D29100D094E5511(), 1))
	{
		if (Global_1617379.f_36498 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_36498)
			{
				if (Global_1617379.f_36499[iVar0 /*43*/].f_7 != 0)
				{
					if (func_16(Param0, Global_1617379.f_36499[iVar0 /*43*/], Global_1617379.f_36499[iVar0 /*43*/].f_6, Global_1617379.f_36499[iVar0 /*43*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617379.f_34300 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_34300)
			{
				if (Global_1617379.f_34303[iVar0 /*89*/].f_16 != 0)
				{
					if (func_16(Param0, Global_1617379.f_34303[iVar0 /*89*/], Global_1617379.f_34303[iVar0 /*89*/].f_3, Global_1617379.f_34303[iVar0 /*89*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617379.f_43061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617379.f_43061)
			{
				if (Global_1617379.f_43065[iVar0 /*127*/].f_12 != 0)
				{
					if (func_16(Param0, Global_1617379.f_43065[iVar0 /*127*/], Global_1617379.f_43065[iVar0 /*127*/].f_3, Global_1617379.f_43065[iVar0 /*127*/].f_12, 0.5f))
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

int func_16(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, float fParam8)
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
		func_18(&Var0, 0f, 0f, uParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_17(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0x43698C98CC255554((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0x43698C98CC255554((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0x43698C98CC255554((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0xCC0EABB8FAB8D0DE(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_17(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x9151153185C776B3(iParam0))
	{
		unk_0x3DE83953A8E7C5D3(iParam0, fParam1, fParam2);
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
	if (Global_1587523[iParam0 /*444*/] == -1)
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
	return unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_13.f_1, 0);
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
				func_24(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0);
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

void func_24(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6)
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
		func_18(&Var0, 0f, 0f, unk_0x5C02660403071A83(0f, 360f));
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
	while (iVar0 < 5)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404956.f_1716[iVar0 /*3*/]) < fParam3)
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
			func_28(&Var2, &(Global_2404956.f_347[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_34(Var2, &uVar1) || func_27(Var2))
			{
				Var2 = { *uParam0 };
				func_28(&Var2, &(Global_2404956.f_347[iVar0 /*12*/]), 1036831949, 1, bParam2);
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
	
	if (Global_2404956.f_548 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404956.f_545);
		if (fVar0 < Global_2404956.f_548)
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
				*uParam0 = { func_33(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404956.f_1714) * uParam1->f_8)), 0, fParam2, bParam3) };
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
				func_24(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404956.f_1714) * uParam1->f_8)), fParam2, bParam3);
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x1E765DC28DD319DF(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x1E765DC28DD319DF(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
			func_24(&Param0, Param3, fParam9, fParam11, bParam12);
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
		unk_0x73C1A9AD53AC8AD8(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
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
				if (!unk_0xCC0EABB8FAB8D0DE(Var1, Param3, Param6, fParam9, 0, 1))
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
		if (Global_2404956.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_35(Param0, &(Global_2404956.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
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
			return func_123(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404956.f_1714) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_46(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
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
		if (Global_2404956.f_347[iVar0 /*12*/].f_9)
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
		if (Global_2407408[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2407408[iVar0 /*17*/].f_16))
			{
				if (func_35(*uParam0, &(Global_2407408[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2407408[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2407408[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_28(&Var1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_37(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_28(&Var1, &(Global_2407408[iVar0 /*17*/]), 1036831949, 1, 0);
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
	
	if (!Global_2404956.f_484)
	{
		if (!func_42(unk_0x4D29100D094E5511(), 1))
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
				Var1 = { func_39(&(Global_2404956.f_39[iVar0 /*12*/])) };
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
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_35(Param0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
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
		if (Global_2404956.f_39[iVar0 /*12*/].f_9)
		{
			if (func_35(Param0, &(Global_2404956.f_39[iVar0 /*12*/]), fParam3, 0, 0))
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
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

int func_44(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x27C9C05A6B4E58D2(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2DB75A8F096AB1F1(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428492.f_3[iVar0])
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
	if (Global_2404956.f_1280 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1280)
		{
			fVar3 = unk_0x2A488C176D52CCA5(Global_2404956.f_1281[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2404956.f_1281[iVar1 /*4*/] };
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
	
	if (Global_2404956.f_1509.f_1 == 0 && Global_2404956.f_1509 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x835D05FAF56BD37E(&(Global_2404956.f_1509.f_1)))
			{
				case 0:
					func_110(uParam1, uParam2);
					if (!Global_2404956.f_1509.f_2)
					{
						if (uParam2->f_7 && Global_2404956.f_512.f_7 == 0)
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
								*(uParam0[0 /*3*/]) = { Global_2404956.f_1484 };
							}
							if (uParam1->f_5 && func_10(Global_2404956.f_468))
							{
								if (!Global_2404956.f_1509.f_5)
								{
									Global_2404956.f_1509.f_5 = 1;
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
							uParam0->f_10[0] = unk_0x5C02660403071A83(0f, 360f);
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
		else if (unk_0xD0BF3829C5A8019D())
		{
			if (!unk_0x3D091970DABE4DB3())
			{
				if (unk_0xC98399F47A7AC247())
				{
					func_110(uParam1, uParam2);
					Global_2404956.f_1509.f_1 = unk_0xED704F01835650FD();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xE415370974A8A44B();
				func_110(uParam1, uParam2);
				if (!Global_2404956.f_1509.f_2)
				{
					Global_2404956.f_1509.f_5 = 1;
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
		func_107(Global_2404956.f_512, &(Global_2404956.f_1509.f_31), &(Global_2404956.f_1509.f_64));
	}
	if (uParam2->f_7 && !Global_2404956.f_1509.f_4)
	{
		Global_2404956.f_1509.f_4 = 1;
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
	if (Global_2404956.f_1509.f_1 > 0 || Global_2404956.f_1509 > 0)
	{
		if (uParam1->f_5 || unk_0xD0BF3829C5A8019D())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404956.f_1509.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404956.f_1509.f_3)
					{
						iVar4 = Global_2404956.f_1509.f_3 + 1;
					}
					if (iVar4 > (Global_2404956.f_1509.f_1 - 1))
					{
						iVar4 = (Global_2404956.f_1509.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x5D219BF05C81BF80(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0x5ABF8BB98EC00BD1(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x9381F8B552B5520E(iVar4);
					}
					else
					{
						unk_0x1385778FE1237147(iVar4, &iVar5);
					}
					func_55(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404956.f_1509.f_3 = iVar4;
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
			iVar4 = Global_2404956.f_1509.f_1;
		}
		if (Global_2404956.f_1509.f_1 == iVar4)
		{
			if (uParam1->f_5 && func_10(Global_2404956.f_468))
			{
				if (Global_2404956.f_1509.f_2)
				{
					func_9(uParam0, &(Global_2404956.f_1509.f_6));
					func_54(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404956.f_1484 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x5C02660403071A83(0f, 360f);
					func_54(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404956.f_1509.f_2)
			{
				func_9(uParam0, &(Global_2404956.f_1509.f_6));
				func_54(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x3A5708FEE1B560A9(0, Global_2404956.f_1509.f_1);
				unk_0x5D219BF05C81BF80(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_51(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_54(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404956.f_1484 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x5C02660403071A83(0f, 360f);
					func_54(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404956.f_1484 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0x5C02660403071A83(0f, 360f);
				func_54(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404956.f_1484 };
		if (uParam1->f_5 && func_10(Global_2404956.f_468))
		{
			if (!Global_2404956.f_1509.f_5)
			{
				Global_2404956.f_1509.f_5 = 1;
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
		uParam0->f_10[0] = unk_0x5C02660403071A83(0f, 360f);
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
	while (iVar0 < Global_2408374[iVar4])
	{
		if (func_52(Var1, &(Global_2407545[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_29(&Var1, Global_2407545[iVar4 /*92*/][iVar0 /*7*/], Global_2407545[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407545[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408374[8])
	{
		if (func_52(Var1, &(Global_2407545[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_29(&Var1, Global_2407545[iVar4 /*92*/][iVar0 /*7*/], Global_2407545[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407545[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
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
	return unk_0xCC0EABB8FAB8D0DE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_53(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2408384[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2408384[1])
	{
		if (Param0.f_0 < Global_2408388[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2408384[2])
	{
		if (Param0.f_0 < Global_2408388[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2408388[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2408388[3])
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
			Global_2404956.f_1617[(3 - iVar0) /*3*/] = { Global_2404956.f_1617[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404956.f_1617[0 /*3*/] = { Param0 };
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
		if (Global_2404956.f_468 == 1)
		{
			if (unk_0x43698C98CC255554((Global_2404956.f_481.f_2 - Param0.f_2)) < 25f)
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
		if (func_104(unk_0x4D29100D094E5511()))
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
		if (!unk_0x04FC55004AEAC297(unk_0x27D769C59BC9D030(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x04FC55004AEAC297(unk_0x27D769C59BC9D030(), Param0, 20f))
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
			iVar9 = Global_2404956.f_1;
		}
	}
	else if (!func_93(Param0, 25f, unk_0x4D29100D094E5511(), 1, 1))
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
		if (!Global_2404956.f_625)
		{
			Var11 = { Global_2404956.f_481 };
			if (Global_2404956.f_468 == 26)
			{
				Var11 = { Global_2404956.f_512.f_18 };
			}
			if (func_38(Var11))
			{
				if ((!func_37(&Param0, 0, 0, 0) && !func_26(&Param0, 0, 0)) && !func_91(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if ((!func_26(&Param0, 0, 0) && !func_91(&Param0, 0)) && !func_25(Param0, 0.5f))
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
		if (!(func_89(unk_0x4D29100D094E5511()) && func_87(unk_0x4D29100D094E5511())))
		{
			if (!func_86(&Param0, &(Global_2404956.f_1509.f_64), 0, 1065353216))
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
		if (!func_87(unk_0x4D29100D094E5511()))
		{
			if (!func_85(Param0, &(Global_2404956.f_1509.f_31), &(Global_2404956.f_1509.f_64), 1073741824))
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
				if (func_10(Global_2404956.f_468))
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
	if (!Global_2404956.f_39.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0xBFF8C08B5EEF0974(unk_0x53DE78F24F01D352(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (!func_51(&Param0, 0))
	{
		iVar7 = (iVar7 + 32768);
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
		if (iVar7 >= Global_2404956.f_1509.f_6[iVar15 /*8*/])
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
						fVar0 = func_74(Param0, Global_2404956.f_1484, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar24 = true;
				}
				if ((func_10(Global_2404956.f_468) && iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar25)
					{
						fVar2 = func_72(Param0);
						bVar25 = true;
					}
					if (fVar2 < Global_2404956.f_1509.f_6[iVar15 /*8*/].f_2)
					{
						Var16.f_4 = { Param0 };
						Var16.f_7 = fParam3;
						Var16.f_0 = iVar7;
						Var16.f_1 = fVar0;
						Var16.f_2 = fVar2;
						func_71(Var16, iVar15);
						Global_2404956.f_1509.f_2 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404956.f_1509.f_6[iVar15 /*8*/] || (iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/] && fVar0 > Global_2404956.f_1509.f_6[iVar15 /*8*/].f_1))
				{
					Var16.f_4 = { Param0 };
					Var16.f_7 = fParam3;
					Var16.f_0 = iVar7;
					Var16.f_1 = fVar0;
					func_71(Var16, iVar15);
					Global_2404956.f_1509.f_2 = 1;
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
				if (iVar7 > Global_2404956.f_1509.f_6[iVar15 /*8*/] || (iVar7 == Global_2404956.f_1509.f_6[iVar15 /*8*/] && fVar3 > Global_2404956.f_1509.f_6[iVar15 /*8*/].f_3))
				{
					Var16.f_4 = { Param0 };
					Var16.f_7 = fParam3;
					Var16.f_0 = iVar7;
					Var16.f_3 = fVar3;
					func_71(Var16, iVar15);
					Global_2404956.f_1509.f_2 = 1;
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
			if (!iVar11 == unk_0x4D29100D094E5511() || iParam5 == 1)
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
					if (unk_0xEDB589A956C2855F(iVar11) == unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))
					{
						if (!unk_0xEDB589A956C2855F(iVar11) == -1 || !func_42(unk_0x4D29100D094E5511(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar11) || !bParam6)
					{
						if (func_59(iVar11))
						{
							Var5 = { func_58(iVar11) };
							if (!iVar11 == unk_0x4D29100D094E5511())
							{
								Var8 = { unk_0x272C9705DEFA6893(unk_0xC834A7C58DEB59B4(iVar11)) };
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
							fVar1 = unk_0x676D4CD42E0837CA(Param0, Var5, 1);
							fVar2 = unk_0x676D4CD42E0837CA(Param0, Var8, 1);
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
	return unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(iParam0), 0);
}

int func_59(int iParam0)
{
	if (unk_0xDF5FCBDBA9ECE63C(unk_0xC834A7C58DEB59B4(iParam0)) || Global_2418472[iParam0 /*313*/].f_241)
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
			if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iParam0))
			{
				if (!unk_0xEDB589A956C2855F(iParam0) == unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))
				{
					if (func_20(unk_0x4D29100D094E5511(), 1))
					{
						if (!func_67(unk_0xEDB589A956C2855F(iParam0), unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xEDB589A956C2855F(iParam0) == -1 && unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1)
				{
					if (!func_20(unk_0x4D29100D094E5511(), 1))
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
	if (func_66(unk_0x4D29100D094E5511(), iParam0))
	{
		return 1;
	}
	Global_2459440 = { func_65(iParam0) };
	if (unk_0xCD9EF71963819AF0(&Global_2459440))
	{
		return 1;
	}
	if (func_62(unk_0x4D29100D094E5511(), iParam0))
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
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_63();
}

struct<13> func_65(var uParam0)
{
	struct<13> Var0;
	
	unk_0x224B05ED6725EA52(uParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0, var uParam1)
{
	if (unk_0x4A95235C630E7410())
	{
		Global_2459440 = { func_65(iParam0) };
		Global_2459453 = { func_65(uParam1) };
		if (unk_0x5363E9DA9285526E(&Global_2459440))
		{
			if (unk_0x5363E9DA9285526E(&Global_2459453))
			{
				unk_0xCA2992FB3936A00C(&Global_2459370, 35, &Global_2459440);
				unk_0xCA2992FB3936A00C(&Global_2459405, 35, &Global_2459453);
				if (Global_2459370 == Global_2459405)
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
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 0);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 1);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 2);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 4);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 5);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 6);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 8);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 9);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 10);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 12);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 13);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 14);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 15);
				
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
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			return 1;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_69()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 3);
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
		if (func_44(unk_0x4D29100D094E5511(), 1, 1))
		{
			if (!unk_0x3934E959DB2478D3())
			{
				if (unk_0x3E55FAB19AD423A2(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0));
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
			if (!func_120(iVar1, 0) && unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x4D29100D094E5511()))
				{
					if (func_59(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xEDB589A956C2855F(iVar1) != unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))) || unk_0xEDB589A956C2855F(iVar1) == -1)
							{
								if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0xEDB589A956C2855F(iVar1) != iParam7 || unk_0xEDB589A956C2855F(iVar1) == -1)
						{
							if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(iVar1), 0));
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
	Var0 = { Global_2404956.f_1509.f_6[iParam8 /*8*/] };
	Global_2404956.f_1509.f_6[iParam8 /*8*/] = { Param0 };
	if (iParam8 < 2)
	{
		func_71(Var0, iParam8 + 1);
	}
}

float func_72(struct<3> Param0)
{
	var uVar0;
	
	return func_73(Param0, &(Global_2404956.f_39), &uVar0);
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404956.f_1714) * (uParam3[iVar0 /*12*/])->f_8)));
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
	if (unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && !func_42(unk_0x4D29100D094E5511(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_56(func_76(Param0, unk_0x4D29100D094E5511(), 0), 0f, 0f, fVar4, 0f, 1f);
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
		fVar0 = func_56(unk_0x2A488C176D52CCA5(Global_2404956.f_481, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
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
	
	uVar3 = unk_0xACD6C8E078389F4E(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x98FC5491A0C1C7C7(uVar3))
	{
		unk_0x77812F84643C3C4A(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x43698C98CC255554((Param0.f_2 - Var0.f_2));
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
				if (unk_0xEDB589A956C2855F(iVar3) != unk_0xEDB589A956C2855F(iParam3) || (unk_0xEDB589A956C2855F(iVar3) == -1 && unk_0xEDB589A956C2855F(iParam3) == -1))
				{
					if (Global_2413760.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2413760.f_130[iVar2 /*3*/], Param0);
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
	
	iVar39 = unk_0xFCB979DB36343941(unk_0x27D769C59BC9D030(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xD2CFFE76B625AE55(uVar6[iVar2]))
		{
			if (!unk_0x2006A8C1BA2AFE80(uVar6[iVar2], 0))
			{
				if (func_78(uVar6[iVar2]))
				{
					Var3 = { unk_0xA8CFDE65C45F813B(uVar6[iVar2], 1) };
					fVar1 = unk_0x676D4CD42E0837CA(Param0, Var3, 1);
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
	
	uVar0 = unk_0xF384805745D7A349(uParam0);
	switch (unk_0x8B16618F631DB43B(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0x8B16618F631DB43B(uVar0, Global_1574198[unk_0x4D29100D094E5511()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1587523[unk_0x4D29100D094E5511() /*444*/] == 0)
	{
		iVar1 = unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0x8B16618F631DB43B(uVar0, Global_1573909[iVar1]))
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
		if ((unk_0xEC6E5897335290DD(Global_2404956.f_39.f_67) || unk_0xDBFA5C79D9B3D622(Global_2404956.f_39.f_67)) || Global_2404956.f_39.f_67 == joaat("rhino"))
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
	if (Global_2404956.f_39.f_65 && !Global_2404956.f_39.f_295)
	{
		if (!func_68(unk_0x4D29100D094E5511()))
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
		if ((unk_0xEC6E5897335290DD(Global_2404956.f_39.f_67) || unk_0xDBFA5C79D9B3D622(Global_2404956.f_39.f_67)) || Global_2404956.f_39.f_67 == joaat("rhino"))
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
	if ((((fParam7 > 0f && unk_0x058784EB5BE12044(Param0, fParam7)) || (fVar0 > 0f && unk_0x838311C5B5F34E30(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x5EDE06C252535A86(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x5EDE06C252535A86(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_83(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404956.f_39.f_55)
	{
		if (unk_0xBFF8C08B5EEF0974(Global_2404956.f_39.f_56))
		{
			if (!unk_0x76D34DF1CE9FE002(Param0))
			{
				uVar0 = unk_0x53DE78F24F01D352(Param0);
				if (unk_0xBFF8C08B5EEF0974(uVar0))
				{
					iVar1 = unk_0x8BADF2859140B49D(uVar0);
					if (!iVar1 == Global_2404956.f_39.f_57)
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
	switch (Global_2404956.f_1505)
	{
		case 0:
			return func_123(Param0, Global_2404956.f_1484, Global_2404956.f_1487, 0, 0);
			break;
		
		case 1:
			return func_46(Param0, Global_2404956.f_1498, Global_2404956.f_1501, 0, 0);
			break;
		
		case 2:
			return unk_0xCC0EABB8FAB8D0DE(Param0, Global_2404956.f_1498, Global_2404956.f_1501, Global_2404956.f_1504, 0, 1);
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
		if (unk_0xCC0EABB8FAB8D0DE(Param0, Var2, Var5, fVar8, 0, 1))
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
				func_24(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0);
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
				if (Global_1587523[iParam0 /*444*/] == 0)
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
	return Global_1587523[iParam0 /*444*/].f_180 != 0;
}

int func_89(int iParam0)
{
	if (func_20(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
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
		if (unk_0xB7A628320EFF8E47(Global_2404956.f_1617[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
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
	
	if (func_27(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			func_24(&Var1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 0);
			if (func_34(Var1, &uVar0) || func_27(Var1))
			{
				Var1 = { *uParam0 };
				func_24(&Var1, Global_2404956.f_545, Global_2404956.f_548, 1036831949, 1);
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
		if (func_44(unk_0x4D29100D094E5511(), 1, 1))
		{
			if (!unk_0x3934E959DB2478D3())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x676D4CD42E0837CA(func_58(unk_0x4D29100D094E5511()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x3E55FAB19AD423A2(Param0, fParam3))
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
			if (!func_120(iVar1, 0) && unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x4D29100D094E5511()))
				{
					if ((func_59(iVar1) || !bParam10) && !Global_2418472[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xEDB589A956C2855F(iVar1) == -1)
							{
								if (unk_0xEDB589A956C2855F(iVar1) == unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xEDB589A956C2855F(iVar1) != unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))) || unk_0xEDB589A956C2855F(iVar1) == -1)
							{
								if (unk_0x676D4CD42E0837CA(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xEDB589A956C2855F(iVar1) != iParam8 || unk_0xEDB589A956C2855F(iVar1) == -1)
						{
							if (unk_0x676D4CD42E0837CA(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
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
			if (!Global_2413760.f_556[iVar0] == 0)
			{
				if (func_16(Param0, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0], 1036831949))
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
					if (unk_0xEDB589A956C2855F(iVar1) == unk_0xEDB589A956C2855F(iParam4))
					{
						return 0;
					}
				}
			}
			if (func_44(iVar1, 0, 1) && func_44(iParam4, 0, 1))
			{
				if (Global_2413760.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2413760.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_58(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2413760.f_130[iVar0 /*3*/], Param0) < fParam3)
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
	Global_2404956.f_1 = 0;
	if (!func_93(Param0, 0.5f, unk_0x4D29100D094E5511(), 0, 0))
	{
		Global_2404956.f_1++;
		if (bParam5)
		{
			if (func_144(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404956.f_1 = (Global_2404956.f_1 + Global_2404956);
				if (!func_100(Param0, fParam12))
				{
					Global_2404956.f_1++;
					if (!func_15(Param0, 1056964608))
					{
						Global_2404956.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404956.f_1 = (Global_2404956.f_1 + Global_2404956);
			}
		}
		else if (!bParam4)
		{
			if (func_144(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2404956.f_1 = (Global_2404956.f_1 + Global_2404956);
				if (!func_100(Param0, fParam12))
				{
					Global_2404956.f_1++;
					if (!func_97(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404956.f_1++;
						if (!func_15(Param0, 1056964608))
						{
							Global_2404956.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404956.f_1 = (Global_2404956.f_1 + Global_2404956);
			}
		}
		else if (func_144(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2404956.f_1 = (Global_2404956.f_1 + Global_2404956);
			if (!func_100(Param0, fParam12))
			{
				Global_2404956.f_1++;
				if (!func_97(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404956.f_1++;
					if (!func_15(Param0, 1056964608))
					{
						Global_2404956.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404956.f_1 = (Global_2404956.f_1 + Global_2404956);
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
		if (!unk_0x4D29100D094E5511() == iVar1)
		{
			if ((func_44(iVar1, 1, 1) && func_59(iVar1)) && unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
			{
				if (!func_99(unk_0x4D29100D094E5511(), iVar1, -2, 0))
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
	return unk_0xCC0EABB8FAB8D0DE(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xEDB589A956C2855F(iParam0) == -1 && unk_0xEDB589A956C2855F(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xEDB589A956C2855F(iParam0) == unk_0xEDB589A956C2855F(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xEDB589A956C2855F(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xEDB589A956C2855F(iParam0) == iParam2;
	}
	return unk_0xEDB589A956C2855F(iParam0) == iParam2;
}

int func_100(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_44(iVar1, 1, 1) && func_59(iVar1)) && unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
		{
			if ((unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && unk_0xEDB589A956C2855F(iVar1) == -1) && !func_42(unk_0x4D29100D094E5511(), 1))
			{
				return 0;
			}
			else if ((unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && !unk_0x4D29100D094E5511() == iVar1) || !func_99(unk_0x4D29100D094E5511(), iVar1, -2, 0))
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
	if ((Global_2404956.f_468 == 9 || Global_2404956.f_468 == 9) || (Global_2404956.f_468 == 15 && iParam0 == 1))
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
		if ((iParam8 == 1 && unk_0x4D29100D094E5511() != iVar1) || iParam8 == 0)
		{
			if (func_44(iVar1, bParam4, bParam5))
			{
				if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
				{
					if (!bParam7 || (!unk_0xE4F7206742848BAF(unk_0xC834A7C58DEB59B4(iVar1)) && func_59(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) != unk_0xEDB589A956C2855F(iVar1))) || unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1)
						{
							if (((unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && iParam9) && bParam6) && func_61(iVar1))
							{
							}
							else if (unk_0xD2CFFE76B625AE55(unk_0xC834A7C58DEB59B4(iVar1)))
							{
								if (unk_0x676D4CD42E0837CA(func_58(iVar1), Param0, 1) < fParam3)
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
	
	iVar3 = unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_44(iVar1, 1, 1))
			{
				if ((!func_120(iVar1, 0) && unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1)) && iVar1 != unk_0x4D29100D094E5511())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0xEDB589A956C2855F(iVar1) == -1)
						{
							if (unk_0xEDB589A956C2855F(iVar1) == unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0xEDB589A956C2855F(iVar1) == iVar3)
					{
						if (unk_0x676D4CD42E0837CA(func_58(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x116496AC98D7A236(iVar1, Param0, fParam3))
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
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
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
		return Global_1610316[iVar0 /*174*/] != -1;
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
			if (!unk_0xF426A5DE932B3BEE(Global_2359718[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359718[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359718[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359718[iVar1 /*26*/].f_6.f_2;
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
				Var6.f_7 = { Global_2359394[iVar1 /*3*/] };
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
	Global_2409351 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_108(&Global_2409351, uParam1, iParam2 + 1);
	}
}

void func_109(var uParam0, var uParam1, int iParam2)
{
	Global_2409347 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_109(&Global_2409347, uParam1, iParam2 + 1);
	}
}

void func_110(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2404956.f_1280 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1280)
		{
			if (func_111(Global_2404956.f_1281[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2404956.f_1281[iVar0 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2404956.f_1281[iVar0 /*4*/] };
					fVar4 = unk_0xCBE9F57FCC3C2A5A(Var1.f_0, Var1.f_1);
				}
				func_55(Global_2404956.f_1281[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2404956.f_1509++;
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
		Global_2404956.f_1509.f_64[iVar10 /*10*/] = { Var0 };
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
		Global_2404956.f_1509.f_31[iVar4 /*4*/] = { Var0 };
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
		Global_2404956.f_1509.f_6[iVar8 /*8*/] = { Var0 };
		iVar8++;
	}
}

void func_117()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2404956.f_1509 = { Var0 };
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
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_121(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
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
	if (Global_2404956.f_1150 > 0 && func_142(uParam0, uParam1, uParam2))
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
	var uVar4;
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
	var uVar32;
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
	Global_2409361.f_162 = 0;
	Global_2409361.f_163 = 0;
	Global_2409361.f_164 = -99;
	Global_2409361.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2409361[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2409361.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xACD6C8E078389F4E(*uParam0, iVar0, &uVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x98FC5491A0C1C7C7(iVar8))
		{
			unk_0x77812F84643C3C4A(iVar8, &Var1);
			bVar12 = false;
			if (Global_2409361.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2409361.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xC61F08A082469192(iVar8)) || unk_0x8810C33CA8D476DD(iVar8))
			{
				unk_0x94BBFE6F5B663AC9(Var1, &uVar6, &uVar7);
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
										if (!func_15(Var1, 5f))
										{
											if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
											{
												if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
												{
													if (func_139(Var1, uParam2) || uParam2->f_33 >= 2)
													{
														if ((uParam2->f_48 && !func_141(&Var1, 0)) || uParam2->f_48 == 0)
														{
															Var1 = { func_137(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
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
																	if ((uParam2->f_12 && !func_132(Var1, uVar4, uParam2->f_34, unk_0x4D29100D094E5511(), 0, uParam2->f_56)) || !uParam2->f_12)
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
																				else if (func_144(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_131(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																									while (iVar16 < Global_2409361.f_162)
																									{
																										Global_2409361[iVar16 /*3*/] = { 0f, 0f, 0f };
																										Global_2409361.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2409361.f_162 = 0;
																									uParam2->f_53 = iVar22;
																								}
																							}
																							if (uParam2->f_30)
																							{
																								if (Global_2409361.f_162 == 0)
																								{
																									Global_2409361[0 /*3*/] = { Var1 };
																									Global_2409361.f_121[0] = uVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409361.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409361[iVar16 /*3*/], uParam2->f_35))
																											{
																												func_129(Var1, uVar4, iVar16);
																												iVar16 = Global_2409361.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2409361.f_162++;
																								if (Global_2409361.f_162 >= 5)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409361.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2409361[Global_2409361.f_162 /*3*/] = { Var1 };
																								Global_2409361.f_121[Global_2409361.f_162] = uVar4;
																								Global_2409361.f_162++;
																								if (func_139(Var1, uParam2))
																								{
																									Global_2409361.f_163++;
																								}
																								if (Global_2409361.f_162 >= 10)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409361.f_162 == 40)
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
																						*uParam1 = uVar4;
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
																				*uParam1 = uVar4;
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
				if (Global_2409361.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2409361[0 /*3*/] };
						*uParam1 = Global_2409361.f_121[0];
						return;
					}
					else
					{
						if (Global_2409361.f_163 > 0 && !Global_2409361.f_163 == Global_2409361.f_162)
						{
							func_127(0, uParam2);
						}
						iVar24 = unk_0x3A5708FEE1B560A9(0, Global_2409361.f_162);
						Var25 = { Global_2409361[0 /*3*/] };
						uVar28 = Global_2409361.f_121[0];
						Global_2409361[0 /*3*/] = { Global_2409361[iVar24 /*3*/] };
						Global_2409361.f_121[0] = Global_2409361.f_121[iVar24];
						Global_2409361[iVar24 /*3*/] = { Var25 };
						Global_2409361.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2409361[0 /*3*/] };
						*uParam1 = Global_2409361.f_121[0];
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
						iVar0 = unk_0x3A5708FEE1B560A9((1 + iVar15), (40 + iVar15));
						unk_0xEFE2D8C4B92E42FD(*uParam0, iVar0, &Var1, &uVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_137(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						uVar32 = uVar4;
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
								*uParam1 = uVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_125(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var29 };
								*uParam1 = uVar32;
								return;
							}
						}
						else
						{
							*uParam0 = { Var29 };
							*uParam1 = uVar32;
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
		Global_2409361.f_164 = iVar8;
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
			if (!func_93(*(uParam0[iVar2 /*4*/]), 5f, unk_0x4D29100D094E5511(), 0, 0))
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
	if (!func_139(Global_2409361[iParam0 /*3*/], uParam1))
	{
		Global_2409361.f_162 = (Global_2409361.f_162 - 1);
		func_128(iParam0);
		if (Global_2409361.f_162 > Global_2409361.f_163)
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
			Global_2409361[iParam0 /*3*/] = { Global_2409361[iParam0 + 1 /*3*/] };
			Global_2409361.f_121[iParam0] = Global_2409361.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_129(struct<3> Param0, var uParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2409361[iParam4 /*3*/] };
	uVar3 = Global_2409361.f_121[iParam4];
	Global_2409361[iParam4 /*3*/] = { Param0 };
	Global_2409361.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2409361.f_162 && iParam4 < 39)
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

int func_131(struct<3> Param0, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x4D29100D094E5511() != iVar1) || iParam9 == 0)
		{
			if (func_44(iVar1, bParam5, bParam6))
			{
				if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iVar1))
				{
					if (!bParam8 || (!unk_0xE4F7206742848BAF(unk_0xC834A7C58DEB59B4(iVar1)) && func_59(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) != unk_0xEDB589A956C2855F(iVar1))) || unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1)
						{
							if (((unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511()) == -1 && iParam10) && bParam7) && func_61(iVar1))
							{
							}
							else if (unk_0xD2CFFE76B625AE55(unk_0xC834A7C58DEB59B4(iVar1)))
							{
								if (func_16(func_58(iVar1), Param0, uParam3, iParam4, 1036831949))
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

int func_132(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_136(Param0, uParam3, iParam4, iParam5, iParam6) || func_133(Param0, uParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_133(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_135(Param0, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_556[iVar0]))
			{
				if (func_134(Param0, uParam3, iParam4, Global_2413760.f_426[iVar0 /*3*/], Global_2413760.f_523[iVar0], Global_2413760.f_556[iVar0]))
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

int func_134(struct<3> Param0, var uParam3, int iParam4, struct<3> Param5, var uParam8, int iParam9)
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
	
	if (func_16(Param0, Param5, uParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_17(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0x43698C98CC255554((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0x43698C98CC255554((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0x43698C98CC255554((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_18(&Var23, 0f, 0f, uParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_18(&Var26, 0f, 0f, uParam3);
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
		if (func_16(Var1[iVar0 /*3*/], Param5, uParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
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

int func_136(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
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
				if (Global_2413760.f_260[iVar0])
				{
					if (func_16(Global_2413760.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_16(func_58(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2413760.f_260[iVar0])
			{
				if (func_16(Global_2413760.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_44(iVar1, 0, 0))
			{
				if (unk_0xD2CFFE76B625AE55(unk_0xC834A7C58DEB59B4(iVar1)))
				{
					if (func_16(func_58(iVar1), Param0, uParam3, iParam4, 1036831949))
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

Vector3 func_137(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_138(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x94BBFE6F5B663AC9(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x53F874E7C513393E(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
			*uParam3 = (*uParam3 + 180f);
			if (*uParam3 > 360f)
			{
				*uParam3 = (*uParam3 + -360f);
			}
		}
		if (*uParam3 <= 90f || *uParam3 > 270f)
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
		if (!func_138(Param0, *uParam3, Param6))
		{
			if (bParam5)
			{
				*uParam3 = (*uParam3 + 180f);
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
	Var0 = { unk_0x8E183FB8F99DD2D7(Param0, *uParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x65CAD66C4C6B66F6(Param0, *uParam3, &Var24))
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

int func_138(struct<3> Param0, var uParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_18(&Var0, 0f, 0f, uParam3);
	Var3 = { Param4 - Param0 };
	if (func_30(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_139(struct<3> Param0, var uParam3)
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
				if (unk_0xCC0EABB8FAB8D0DE(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_140(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_53(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2409096[iVar1])
	{
		if (func_52(Param0, &(Global_2408393[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2409096[8])
	{
		if (func_52(Param0, &(Global_2408393[8 /*78*/][iVar0 /*7*/])))
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
	if (Global_2404956.f_22.f_16)
	{
		switch (Global_2404956.f_22.f_15)
		{
			case 0:
				if (func_123(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_46(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xCC0EABB8FAB8D0DE(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, Global_2404956.f_22.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_33(*uParam0, Global_2404956.f_22.f_8, Global_2404956.f_22.f_11, Global_2404956.f_22.f_14, Global_2404956.f_22.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_142(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
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
	
	if (Global_2404956.f_1150 > 0)
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
		Global_2409361.f_162 = 0;
		Global_2409361.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2409361[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2409361.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404956.f_1150)
		{
			Var1 = { Global_2404956.f_1151[iVar0 /*4*/] };
			uVar4 = Global_2404956.f_1151[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_132(Var1, uVar4, uParam2->f_34, unk_0x4D29100D094E5511(), 0, uParam2->f_56)) || !uParam2->f_12)
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
								else if (func_144(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_131(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
													while (iVar5 < Global_2409361.f_162)
													{
														Global_2409361[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2409361.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2409361.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2409361.f_162 == 0)
												{
													Global_2409361[0 /*3*/] = { Var1 };
													Global_2409361.f_121[0] = uVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2409361.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409361[iVar5 /*3*/], uParam2->f_35))
															{
																func_129(Var1, uVar4, iVar5);
																iVar5 = Global_2409361.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2409361.f_162++;
												if (Global_2409361.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404956.f_1150;
													}
													else if (Global_2409361.f_162 == 40)
													{
														iVar0 = Global_2404956.f_1150;
													}
												}
											}
											else
											{
												Global_2409361[Global_2409361.f_162 /*3*/] = { Var1 };
												Global_2409361.f_121[Global_2409361.f_162] = uVar4;
												Global_2409361.f_162++;
												if (Global_2409361.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404956.f_1150;
													}
													else if (Global_2409361.f_162 == 40)
													{
														iVar0 = Global_2404956.f_1150;
													}
												}
											}
										}
									}
									else
									{
										*uParam0 = { Var1 };
										*uParam1 = uVar4;
										return 1;
									}
								}
							}
							else
							{
								*uParam0 = { Var1 };
								*uParam1 = uVar4;
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2409361.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2409361[0 /*3*/] };
				*uParam1 = Global_2409361.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2409361.f_163 > 0 && !Global_2409361.f_163 == Global_2409361.f_162)
				{
					func_127(0, uParam2);
				}
				iVar13 = unk_0x3A5708FEE1B560A9(0, Global_2409361.f_162);
				Var14 = { Global_2409361[0 /*3*/] };
				uVar17 = Global_2409361.f_121[0];
				Global_2409361[0 /*3*/] = { Global_2409361[iVar13 /*3*/] };
				Global_2409361.f_121[0] = Global_2409361.f_121[iVar13];
				Global_2409361[iVar13 /*3*/] = { Var14 };
				Global_2409361.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2409361[0 /*3*/] };
				*uParam1 = Global_2409361.f_121[0];
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
	unk_0x963FDDD262945634(uParam0, uParam1, 0.1f);
	Global_2404956.f_1492 = unk_0xF42B3EF31F918DB2();
	Global_2404956.f_1490 = 1;
	Global_2404956.f_1493 = unk_0x20D394965B47B01A();
}

int func_144(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404956 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x058784EB5BE12044(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x838311C5B5F34E30(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x838311C5B5F34E30(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x5EDE06C252535A86(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404956++;
	if (bParam13)
	{
		if (unk_0x7E5CC56729CE6D59(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404956++;
	if (fParam14 > 0f)
	{
		if (func_102(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404956++;
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
	Global_2404956++;
	return 1;
}

void func_145()
{
	if (Global_2404956.f_1490)
	{
		if (unk_0xF42B3EF31F918DB2() == Global_2404956.f_1492)
		{
			unk_0xF2EC7ABCE01822BF();
		}
		else
		{
			unk_0xF2EC7ABCE01822BF();
		}
		Global_2404956.f_1490 = 0;
	}
}

int func_146(bool bParam0)
{
	if (unk_0x3934E959DB2478D3())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_147(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
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
		if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), *uParam0)) >= 1000)
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
		if (unk_0x96BA6BF1BA1235CC())
		{
			func_150(uParam0, 0, 0);
		}
	}
}

void func_150(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x0E063DDE8855EC52() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x20D394965B47B01A();
			}
			else
			{
				*uParam0 = unk_0xBADD1A643AD56F36();
			}
		}
		else
		{
			*uParam0 = unk_0xA0F74982C6AAA9D4();
		}
		uParam0->f_1 = 1;
	}
}

void func_151()
{
	switch (Local_67[unk_0x7025777635AB04C0() /*3*/].f_2)
	{
		case 0:
			func_185();
			func_184();
			if (func_173())
			{
				func_171();
				func_170();
				func_152(35);
				Local_67[unk_0x7025777635AB04C0() /*3*/].f_2 = 1;
			}
			else if (Local_56.f_8 >= 1)
			{
				func_170();
				Local_67[unk_0x7025777635AB04C0() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_56.f_8 >= 2)
			{
				Local_67[unk_0x7025777635AB04C0() /*3*/].f_2 = 2;
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
	
	if (!Global_262145.f_6904)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_169() /*10375*/].f_7704.f_2158[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_169() /*10375*/].f_7704.f_2158[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_169() /*10375*/].f_7704.f_2158[iVar2 /*3*/].f_1)
			{
				func_165(iVar2, 1);
				unk_0x26545538B51562AD(&Global_2459552, (8 + iVar2));
				func_160(2102, -1);
				func_156(67, -1);
				func_160(2559, -1);
				func_156(69, -1);
				unk_0xB6E78202CD0489E7(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0xF426A5DE932B3BEE(Global_2459552, 12))
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
		Global_2442990[iVar0] = iParam0;
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
		if (Global_2442990[iVar1] == 0)
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
	
	iVar0 = Global_2492260[iParam0 /*5*/][func_159(uParam2)];
	unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, 1);
}

int func_158(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2492260[iParam0 /*5*/][func_159(iParam1)];
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
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
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
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
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_159(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_159(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_159(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_159(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_159(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_159(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_159(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_159(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_159(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_159(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_159(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_159(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_159(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_159(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_159(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_159(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_159(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_159(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_159(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_159(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_159(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_159(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_159(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_159(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_159(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_159(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_159(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_159(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_159(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_159(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_159(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_159(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_159(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_162(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_159(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
	}
}

int func_163(int iParam0)
{
	if (Global_1347635)
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
			case 3891:
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
	uVar0 = Global_2469339[iParam0 /*5*/][func_159(iParam1)];
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_165(int iParam0, int iParam1)
{
	if (Global_2097152[func_169() /*10375*/].f_7704.f_2158[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_169() /*10375*/].f_7704.f_2158[iParam0 /*3*/].f_1 = iParam1;
		func_166(func_168(iParam0), iParam1, -1, 1);
	}
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_167())
	{
		iVar0 = Global_2490231[iParam0 /*5*/][func_159(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7D67977BA351D3A8(iVar0, iParam1, iParam3);
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
	if (unk_0x7B4654D62B7E0E9E(uLocal_166))
	{
		unk_0x9403D0F4C7711241(&uLocal_166);
	}
}

void func_171()
{
	if (!unk_0xF426A5DE932B3BEE(Global_2428492.f_3317, 0))
	{
		unk_0x26545538B51562AD(&(Global_2428492.f_3317), 0);
		func_172();
	}
	else
	{
		unk_0x26545538B51562AD(&(Global_2428492.f_3317), 1);
	}
}

void func_172()
{
	func_160(1181, -1);
}

int func_173()
{
	struct<14> Var0;
	
	if (unk_0xF1C8C691B49DACEA(Local_56.f_2))
	{
		if (unk_0x53D573A48E8DFC4C(unk_0xBB4FAC4BA02ED087(Local_56.f_2), unk_0x27D769C59BC9D030()) && func_183(Local_56.f_2))
		{
			func_182(&(Local_56.f_2));
			if (unk_0x7B4654D62B7E0E9E(uLocal_166))
			{
				unk_0x9403D0F4C7711241(&uLocal_166);
			}
			if (!func_181(1))
			{
				func_176("ABB_BOXCT", 1);
			}
			Var0.f_2 = 108;
			Var0.f_10 = unk_0x4D29100D094E5511();
			Var0.f_3 = uLocal_165;
			func_174(Var0, func_175(1));
			unk_0x26545538B51562AD(&(Local_67[unk_0x7025777635AB04C0() /*3*/].f_1), 0);
			return 1;
		}
	}
	return 0;
}

void func_174(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x4D29100D094E5511();
	if (!iParam14 == 0)
	{
		unk_0xCE8ECD07286D394D(1, &Param0, 14, iParam14);
	}
}

int func_175(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xD81B83309CFE36FF())
	{
		if (unk_0x6985B636BB8652CD(unk_0xA9A38637698616EF(iVar1)))
		{
			iVar2 = unk_0xFAA1C60127DA6F80(unk_0xA9A38637698616EF(iVar1));
			if (func_44(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x4D29100D094E5511() || iParam0)
				{
					unk_0x26545538B51562AD(&uVar0, iVar2);
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
	unk_0x5411F6B456B04A6B(sParam0);
	iVar0 = unk_0xF51DE8AFFD9CC3C9(0, 1);
	func_177(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_177(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_180() || !unk_0x9404B1BCD022816B()) || !func_120(unk_0x4D29100D094E5511(), 0))
	{
		return;
	}
	iVar0 = func_178(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1724230.f_5[iVar0 /*53*/] = iParam0;
		Global_1724230.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1724230.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1724230.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1724230.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1724230.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1724230.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_178(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1724230 - 1))
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_179(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1724230++;
	if (Global_1724230 > 5)
	{
		Global_1724230 = 5;
		return Global_1724230;
	}
	return (Global_1724230 - 1);
}

void func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = { Global_1724230.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_180()
{
	return unk_0xA29E536967D6DF2E(-1762644250);
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1609015 > 0;
		
		case 2:
			return Global_1609015.f_1 > 0;
		
		case 3:
			return Global_1609015.f_2 > 0;
		
		case 4:
			return Global_1609015.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_182(var uParam0)
{
	var uVar0;
	
	if (unk_0xF1C8C691B49DACEA(*uParam0))
	{
		if (!unk_0xFFB05175212D9D1A(*uParam0))
		{
		}
	}
	if (unk_0xE1CAA98B09E043C9(*uParam0))
	{
		uVar0 = unk_0xD9545E656AC42B18(*uParam0);
		unk_0xFC06ECC816BE236A(&uVar0);
	}
}

int func_183(var uParam0)
{
	if (unk_0xF1C8C691B49DACEA(uParam0))
	{
		unk_0x24C4E2C7A164BCC1(uParam0);
		return unk_0xFFB05175212D9D1A(uParam0);
	}
	return 0;
}

void func_184()
{
	if (!unk_0x7B4654D62B7E0E9E(uLocal_166))
	{
		if (unk_0xF1C8C691B49DACEA(Local_56.f_2))
		{
			uLocal_166 = unk_0xABF4388EB11AD060(unk_0xBB4FAC4BA02ED087(Local_56.f_2));
			unk_0xC5B4E9487339A2BB(uLocal_166, 1.2f);
			unk_0x216986E3E3E543F2(uLocal_166, 403);
			unk_0x8D910E607F73E53D(uLocal_166, 2);
			unk_0xC5B67A5E18AF2B72(uLocal_166, "ABB_BLIPN");
		}
	}
}

void func_185()
{
	var uVar0;
	
	if (!unk_0x46768B1495288824())
	{
		uVar0 = func_164(1183, -1, 0);
		if (!unk_0xF426A5DE932B3BEE(uVar0, 14))
		{
			unk_0x26545538B51562AD(&uVar0, 14);
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
	unk_0x97C59C4E8349D15F(joaat("prop_drug_package_02"));
	if (unk_0x875098323FCA8FE6(joaat("prop_drug_package_02")))
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
		if (!unk_0x0E063DDE8855EC52())
		{
			return 1;
		}
	}
	if (func_195())
	{
		return 1;
	}
	if (Global_2445442)
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
	if (!unk_0x88E055AE81551426())
	{
		return 1;
	}
	if (func_190() != 0)
	{
		if (unk_0xD32535FA4397160F(func_190()) == 0)
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
	return Global_25120;
}

bool func_192()
{
	return Global_2434762.f_574;
}

int func_193(int iParam0)
{
	if (unk_0x9CDCE7BB256E1E4B(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_194()
{
	return Global_2443085;
}

bool func_195()
{
	return Global_2434762.f_569;
}

void func_196(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDDC2E48CCBA23C1D(1))
	{
		iVar1 = unk_0x00D18151DCE3C65E(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xB03A3CBE4F7737B0(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_197(iVar0);
					break;
				
				case 2:
					unk_0xB03A3CBE4F7737B0(1, iVar0, &Var4, 3);
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
	
	if (unk_0xB03A3CBE4F7737B0(1, iParam0, &Var0, 3))
	{
		if (func_44(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xC834A7C58DEB59B4(Var0.f_1);
			if (unk_0xD2CFFE76B625AE55(uVar3))
			{
				if (unk_0x9A4E2270C2271219(uVar3, 0))
				{
					uVar4 = unk_0xD9FFE8E1642C81E2(uVar3, 0);
					if (unk_0x35DBB18680CBB9BD(uVar4, Var0.f_2) && unk_0xA8EFC723756B7650())
					{
						if (func_198(uVar4, &bVar5))
						{
							unk_0xC72E18180AE0A1F0(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9846B4D56971A958(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_198(var uParam0, var uParam1)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0xE24B37600DCB21FC(uParam0))
		{
			if (unk_0x2380875F8B6B9911(uParam0))
			{
				unk_0xAF3355298F537BB0(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xFF65D7BC656BA68E(uParam0, 0))
		{
			if (unk_0xFB1CEF9E7943CFF5(uParam0))
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
	return Global_1587523[iParam0 /*444*/];
}

void func_201()
{
	Global_1347852 = -1;
	if (unk_0x7B4654D62B7E0E9E(uLocal_166))
	{
		unk_0x9403D0F4C7711241(&uLocal_166);
	}
	func_204();
	if (unk_0x0E063DDE8855EC52())
	{
		if (unk_0x96BA6BF1BA1235CC())
		{
			if (unk_0xF1C8C691B49DACEA(Local_56.f_2) && unk_0xFFB05175212D9D1A(Local_56.f_2))
			{
				func_182(&(Local_56.f_2));
			}
			Local_56.f_0 = 4;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Local_56.f_1, 8))
	{
		func_203();
	}
	func_202();
}

void func_202()
{
	unk_0x7C3AA2D27E16E2AD();
}

void func_203()
{
	Global_2460486.f_791 = 0;
	Global_2460486.f_791.f_1 = { 0f, 0f, 0f };
	Global_2460486.f_791.f_4 = 0f;
	Global_2460486.f_791.f_8 = 0;
	unk_0xF17F4B0641AB2DE1(&(Global_2460486.f_791.f_7), 0);
}

void func_204()
{
	if (unk_0xF426A5DE932B3BEE(uLocal_164, 4))
	{
		unk_0x640715600B7D533A(unk_0x4D29100D094E5511(), 0.72f);
		unk_0x90C010DB9A27428B(unk_0x4D29100D094E5511(), 1f);
		unk_0xAF521115BA9B9A74(unk_0x4D29100D094E5511(), 1f);
		unk_0xD449048B2CA4E19B(unk_0x4D29100D094E5511(), 1f);
		func_205(1);
		unk_0xF17F4B0641AB2DE1(&uLocal_164, 5);
		unk_0xF17F4B0641AB2DE1(&uLocal_164, 7);
		unk_0xF17F4B0641AB2DE1(&uLocal_164, 4);
	}
}

void func_205(int iParam0)
{
	var uVar0;
	
	uVar0 = func_206(iParam0, 0);
	unk_0xBE273B45F8B9F771(uVar0);
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
	unk_0x760D563099DDA295(1);
	func_209(0, -1, 0);
	unk_0xE6E20DA4BE6773A1(&Local_56, 11);
	unk_0xEC578E04792A69AD(&Local_67, 97);
	if (!func_208())
	{
		return 0;
	}
	unk_0xF160EBCA8FFA0E2A(0);
	if (unk_0x96BA6BF1BA1235CC())
	{
		Local_56.f_7 = Param0.f_16;
		Global_1347852 = Local_56.f_7;
		Local_56.f_3 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0) };
		if (!func_3(Global_2460486.f_791.f_1))
		{
			unk_0x26545538B51562AD(&(Local_56.f_1), 8);
		}
	}
	iLocal_169 = unk_0x233AF2DB663CF21D();
	Local_67[unk_0x7025777635AB04C0() /*3*/] = 0;
	return 1;
}

int func_208()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x0E063DDE8855EC52())
		{
			return 0;
		}
		if (unk_0x3D3EC4199DF36385())
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
	
	iVar0 = unk_0x3F2703DCC0FC2191();
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
				if (!unk_0x0E063DDE8855EC52())
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
			else if (!unk_0x92CB7725500E696A())
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
		iVar0 = unk_0x3F2703DCC0FC2191();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x0E063DDE8855EC52())
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
	else if (!unk_0x92CB7725500E696A())
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
	if (!unk_0x0E063DDE8855EC52())
	{
		func_202();
	}
	unk_0x9064278EBCD8C84A(uParam0, 0, Param1.f_16);
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

