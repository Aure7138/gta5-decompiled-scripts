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
	if (unk_0x00AAD79B42B3E036())
	{
		if (!func_201(ScriptParam_0))
		{
			func_195();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_194(unk_0x3F80C6638E3A1A90()) != 1 && !unk_0xB519E5386FBF69E5(Global_2457699.f_787.f_7, 0))
			{
				func_195();
			}
		}
	}
	uLocal_165 = ScriptParam_0.f_19;
	while (true)
	{
		func_193();
		if (func_183())
		{
			func_195();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_194(unk_0x3F80C6638E3A1A90()) != 1 && Global_1606400 == 0)
			{
				func_195();
			}
		}
		if (unk_0x9321E9548CA02149() != iLocal_169)
		{
			func_195();
		}
		unk_0xAA565154D7ED4DC3();
		switch (func_182(unk_0xA1238458CB587858()))
		{
			case 0:
				if (func_181())
				{
					if (func_180() == 1)
					{
						Local_67[unk_0xA1238458CB587858() /*3*/] = 1;
					}
					else if (func_180() == 4)
					{
						Local_67[unk_0xA1238458CB587858() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_180() == 1)
				{
					func_145();
				}
				else if (func_180() == 4)
				{
					Local_67[unk_0xA1238458CB587858() /*3*/] = 3;
				}
				if (Local_67[unk_0xA1238458CB587858() /*3*/].f_2 == 0)
				{
					if ((!unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_56.f_3, 500f, 500f, 500f, 0, 1, 0) && func_194(unk_0x3F80C6638E3A1A90()) != 1) && !unk_0xB519E5386FBF69E5(Global_2457699.f_787.f_7, 0))
					{
						Local_67[unk_0xA1238458CB587858() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_143(&(Local_56.f_9));
				if (func_142(&(Local_56.f_9)))
				{
					Local_67[unk_0xA1238458CB587858() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_67[unk_0xA1238458CB587858() /*3*/] = 4;
			
			case 4:
				func_195();
				break;
		}
		if (unk_0xFA4B36553B2A7802())
		{
			switch (func_180())
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
	if (Local_56.f_7 >= 32 && func_194(unk_0x3F80C6638E3A1A90()) == 1)
	{
		if (func_3(Global_2457699.f_787.f_1))
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
			if (!unk_0xDC1FDD911B88C6F2(Local_56.f_2) || Local_56.f_6 != -1)
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
	while (iVar0 < unk_0x2249EB1A59F7C407())
	{
		if (unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(iVar0)))
		{
			if (Local_56.f_6 == -1)
			{
				if (unk_0xB519E5386FBF69E5(Local_67[iVar0 /*3*/].f_1, 0))
				{
					Local_56.f_6 = iVar0;
				}
			}
			if (!unk_0xB519E5386FBF69E5(Local_56.f_1, 7))
			{
				if (unk_0xB519E5386FBF69E5(Local_67[iVar0 /*3*/].f_1, 1))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_56.f_1), 7);
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
	
	if (!unk_0xDC1FDD911B88C6F2(Local_56.f_2))
	{
		if (func_181())
		{
			if (unk_0xE107B0270F6E3CC8(1))
			{
				fVar5 = 250f;
				Var6 = { Local_56.f_3 };
				if (unk_0xB519E5386FBF69E5(Local_56.f_1, 8))
				{
					Var0 = { Global_2457699.f_787.f_1 };
					uVar3 = Global_2457699.f_787.f_4;
				}
				if (func_194(unk_0x3F80C6638E3A1A90()) == 7)
				{
					iVar12 = unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90());
					if (Global_1612326.f_77[iVar12 /*6235*/].f_680[0 /*24*/].f_10 > 0f)
					{
						Var6 = { Global_1612326.f_77[iVar12 /*6235*/].f_680[0 /*24*/].f_3 };
						Var9 = { Global_1612326.f_77[iVar12 /*6235*/].f_680[0 /*24*/].f_6 };
						fVar5 = Global_1612326.f_77[iVar12 /*6235*/].f_680[0 /*24*/].f_10;
						iVar4 = 1;
					}
					else if (Global_1612326.f_77[iVar12 /*6235*/].f_680[0 /*24*/].f_9 > 0f)
					{
						Var6 = { Global_1612326.f_77[iVar12 /*6235*/].f_680[0 /*24*/] };
						fVar5 = Global_1612326.f_77[iVar12 /*6235*/].f_680[0 /*24*/].f_9;
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
					if (unk_0xB519E5386FBF69E5(Local_56.f_1, 8) || func_141(Var6, fVar5, &Var0, &uVar3, Var13))
					{
						if (Local_56.f_7 >= 32 || func_194(unk_0x3F80C6638E3A1A90()) == 1)
						{
							Local_56.f_2 = unk_0x1D6A78EAF4518040(unk_0x914CCD68BC9B3DF2(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_56.f_2 = unk_0x1D6A78EAF4518040(unk_0x85232352456CECC0(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0x151F32CB40BE730C(unk_0xA5CFD5B9C8A74104(Local_56.f_2), uVar3);
					}
				}
				else if (unk_0xB519E5386FBF69E5(Local_56.f_1, 8) || func_7(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_56.f_7 >= 32 || func_194(unk_0x3F80C6638E3A1A90()) == 1)
					{
						Local_56.f_2 = unk_0x1D6A78EAF4518040(unk_0x914CCD68BC9B3DF2(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_56.f_2 = unk_0x1D6A78EAF4518040(unk_0x85232352456CECC0(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0x151F32CB40BE730C(unk_0xA5CFD5B9C8A74104(Local_56.f_2), uVar3);
				}
			}
		}
	}
	if (unk_0xDC1FDD911B88C6F2(Local_56.f_2))
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
	bool bVar82;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404919.f_1276 == *uParam0 || !Global_2404919.f_1276.f_1 == uParam0->f_1) || !Global_2404919.f_1276.f_2 == uParam0->f_2) || !Global_2404919.f_1279 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404919.f_1290 == uParam0->f_8 || !Global_2404919.f_1290.f_1 == uParam0->f_8.f_1) || !Global_2404919.f_1290.f_2 == uParam0->f_8.f_2) || !Global_2404919.f_1293 == uParam0->f_11) || !Global_2404919.f_1293.f_1 == uParam0->f_11.f_1) || !Global_2404919.f_1293.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404919.f_1290 == uParam0->f_8 || !Global_2404919.f_1290.f_1 == uParam0->f_8.f_1) || !Global_2404919.f_1290.f_2 == uParam0->f_8.f_2) || !Global_2404919.f_1293 == uParam0->f_11) || !Global_2404919.f_1293.f_1 == uParam0->f_11.f_1) || !Global_2404919.f_1293.f_2 == uParam0->f_11.f_2) || !Global_2404919.f_1296 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404919.f_1274 == 1)
		{
			if (unk_0x8DB3F26E5CA85896(Global_2404919.f_1283))
			{
				if (Global_2404919.f_1283 == unk_0xE3E113B4DB09AAF8())
				{
					if (unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1280) < func_140())
					{
						return 0;
					}
				}
				else if (unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1280) < func_140())
				{
					return 0;
				}
			}
			unk_0x4F3CE675DAEFAFF1();
			unk_0xA8846F47ACD0A472();
			func_139();
		}
		Global_2404919.f_1274 = 0;
	}
	else if (unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1280) > func_140())
	{
		Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
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
	unk_0x1A10579F8DE3BF6B(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404919.f_1274)
	{
		unk_0x4F3CE675DAEFAFF1();
		unk_0xA8846F47ACD0A472();
		func_139();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_138(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xBB22A67725D9B946())
		{
			Global_2404919.f_1297 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404919.f_1276 = { *uParam0 };
					Global_2404919.f_1279 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404919.f_1290 = { uParam0->f_8 };
					Global_2404919.f_1293 = { uParam0->f_11 };
					Global_2404919.f_1296 = 0f;
					Global_2404919.f_1276 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404919.f_1290 = { uParam0->f_8 };
					Global_2404919.f_1293 = { uParam0->f_11 };
					Global_2404919.f_1296 = uParam0->f_14;
					Global_2404919.f_1276 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_137(Var8.f_0, Var8.f_1);
			}
			Global_2404919.f_1275 = 1;
			Global_2404919.f_1274 = 1;
			Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
			Global_2404919.f_1280 = unk_0xC7F926248AF8587B();
			Global_2404919.f_1283 = unk_0xE3E113B4DB09AAF8();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404919.f_1274)
	{
		if (Global_2404919.f_1275 == 1)
		{
			if (unk_0x5870CB0276CF5667(fVar4, fVar5, fVar6, fVar7) || unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1281) > 5000)
			{
				Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
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
					func_118(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_117(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404919.f_1275 = 9;
				}
				else
				{
					Global_2404919.f_1275 = 2;
				}
			}
		}
		if (Global_2404919.f_1275 == 2)
		{
			if ((unk_0x1295F66E19F5CD2E(Var11, Var14) || unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1281) > 15000) || unk_0x509471E82DC731F8(Var11, Var14) == 0)
			{
				Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
				if (uParam0->f_5 && !func_114(unk_0x3F80C6638E3A1A90(), 0))
				{
					Global_2404919.f_1275 = 3;
				}
				else
				{
					Global_2404919.f_1275 = 4;
				}
			}
			else if (unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1285) > 7000)
			{
				func_113(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404919.f_1275 == 3)
		{
			if (func_112() || unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1281) > 10000)
			{
				Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
				Global_2404919.f_1275 = 4;
			}
		}
		if (Global_2404919.f_1275 == 4)
		{
			if (unk_0xBB22A67725D9B946())
			{
				unk_0x4F3CE675DAEFAFF1();
				unk_0xA8846F47ACD0A472();
			}
			else
			{
				iVar0 = 0;
				func_107();
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
					if (!unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1)
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
							if (unk_0x3EAC5BC30049AE71(unk_0x3F80C6638E3A1A90(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
								Global_2404919.f_1275 = 5;
							}
							break;
						
						case 1:
							func_106(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x7864EBBAE7E31662(unk_0x3F80C6638E3A1A90(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
								Global_2404919.f_1275 = 5;
							}
							break;
						
						case 2:
							if (unk_0x7864EBBAE7E31662(unk_0x3F80C6638E3A1A90(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
								Global_2404919.f_1275 = 5;
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
					Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
					Global_2404919.f_1275 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xD5F6ED88ED88E952(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_106(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x96657D86D8FFAA3F(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x96657D86D8FFAA3F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404919.f_1275 == 5)
		{
			if (func_42(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404919.f_1301.f_4)
				{
					Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
					Global_2404919.f_1275 = 6;
				}
				else
				{
					Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0x2C393A56EDEECDE4(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404919.f_1275 = 9;
				}
			}
			else if (unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1281) > 20000)
			{
				unk_0x4F3CE675DAEFAFF1();
				unk_0xA8846F47ACD0A472();
				Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
				Global_2404919.f_1275 = 8;
			}
		}
		if (Global_2404919.f_1275 == 6)
		{
			iVar0 = 0;
			Global_2404919.f_1301 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_41(uParam0->f_4))
				{
					if (unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_40(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Var8)))
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
			Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
			Global_2404919.f_1275 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xD5F6ED88ED88E952(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_106(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x96657D86D8FFAA3F(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x96657D86D8FFAA3F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404919.f_1275 == 7)
		{
			if (func_42(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404919.f_1408[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_117(Global_2404919.f_1408[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404919.f_1408[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_38(Global_2404919.f_1408[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404919.f_1408[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0xB84E12C6EBFF63A4(Global_2404919.f_1408[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404919.f_1408[iVar17 /*3*/] };
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
				Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0x2C393A56EDEECDE4(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404919.f_1275 = 9;
			}
			else if (unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), Global_2404919.f_1281) > 20000)
			{
				Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
				Global_2404919.f_1275 = 8;
			}
		}
		if (Global_2404919.f_1275 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_2404919.f_468))
				{
				}
			}
			else if (Global_2404919.f_1301.f_1)
			{
				func_9(uParam2, &(Global_2404919.f_1301.f_5));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar82 = false;
				}
				else
				{
					bVar82 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404919.f_1276 };
				func_11(uParam2[0 /*3*/], 0, bVar82, 0, 0, uParam0, uParam1);
			}
			Global_2404919.f_1281 = unk_0xC7F926248AF8587B();
			Global_2404919.f_1275 = 9;
		}
		if (Global_2404919.f_1275 == 9)
		{
			Global_2404919.f_1274 = 0;
			unk_0x4F3CE675DAEFAFF1();
			unk_0xA8846F47ACD0A472();
			func_139();
			return 1;
		}
		Global_2404919.f_1280 = unk_0xC7F926248AF8587B();
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
	var uVar60;
	int iVar61;
	bool bVar62;
	int iVar63;
	struct<3> Var64;
	struct<3> Var67;
	struct<3> Var70;
	float fVar73;
	
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
	if (bParam1)
	{
		iVar63 = 0;
	}
	else
	{
		iVar63 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar63 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var64 = { *uParam5 };
						if (func_41(uParam5->f_4) || !unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Var64)))
						{
							iVar63 += 4;
						}
						break;
					
					case 1:
						Var64 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_40(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Var64)))
						{
							iVar63 += 4;
						}
						break;
					
					case 2:
						Var64 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_40(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Var64)))
						{
							iVar63 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar63 += 4;
		}
	}
	if (func_13(*uParam0, &Var0, iVar63, iParam3, 1))
	{
	}
	else
	{
		bVar62 = true;
	}
	if (bVar62)
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
		iVar61 = 0;
		while (iVar61 < 2)
		{
			Var4.f_38[iVar61 /*3*/] = { uParam6->f_13[iVar61 /*3*/] };
			Var4.f_45[iVar61] = uParam6->f_20[iVar61];
			iVar61++;
		}
		Var4.f_51 = uParam6->f_23;
		Var4.f_55 = uParam5->f_16;
		func_118(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var67 = { *uParam5 };
				fVar73 = uParam5->f_4;
				break;
			
			case 1:
				Var67 = { uParam5->f_8 };
				Var70 = { uParam5->f_11 };
				break;
			
			case 2:
				Var67 = { uParam5->f_8 };
				Var70 = { uParam5->f_11 };
				fVar73 = uParam5->f_14;
				break;
		}
		if (!func_12(Var0, uParam5->f_7, Var67, Var70, fVar73))
		{
			if (func_13(*uParam0, &Var0, iVar63, iParam3, 0))
			{
				if (!func_12(Var0, uParam5->f_7, Var67, Var70, fVar73))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var67 + Var70 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var67 };
					}
					if (unk_0xC4A43A7E257E1FD9(Var0, &uVar60, 0))
					{
						Var0.f_2 = uVar60;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var67 + Var70 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var67 };
				}
				if (unk_0xC4A43A7E257E1FD9(Var0, &uVar60, 0))
				{
					Var0.f_2 = uVar60;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404919.f_602 = 1;
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
			return func_38(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0xB84E12C6EBFF63A4(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_13(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	if (unk_0xDDF72D11359E25EC(Param0, 0, uParam3, iParam4))
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
		if (fVar0 < 40f)
		{
			uVar1 = 2;
			uVar8 = 2;
			if ((iParam5 == 1 && !func_14(Global_2404919.f_481, &Param0, &uVar1, &uVar8, bParam6, 1)) || iParam5 == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_28(Param0))
	{
		if (func_27(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_18(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_17(*uParam3, 1056964608))
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
				func_15(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0);
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

void func_15(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6)
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
		func_16(&Var0, 0f, 0f, unk_0x8AF26D6D6BBE6931(0f, 360f));
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

void func_16(var uParam0, struct<3> Param1)
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

int func_17(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404919.f_1507[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_18(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_26();
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (Global_2404919.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_25(*uParam0, &(Global_2404919.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					Var1 = { *uParam0 };
					func_19(&Var1, &(Global_2404919.f_347[iVar0 /*12*/]), 1036831949, 0, bParam2);
					if (func_18(&Var1, 0, 0))
					{
						Var1 = { *uParam0 };
						func_19(&Var1, &(Global_2404919.f_347[iVar0 /*12*/]), 1036831949, 1, bParam2);
					}
					*uParam0 = { Var1 };
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_19(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_24(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404919.f_1505) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_24(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_24(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_15(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404919.f_1505) * uParam1->f_8)), fParam2, bParam3);
				break;
			
			case 1:
				func_23(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_20(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x36C9BE33708F029F(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x36C9BE33708F029F(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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

void func_23(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

Vector3 func_24(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_15(&Param0, Param3, fParam9, fParam11, bParam12);
			break;
		
		case 1:
			func_23(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_20(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x534DA90AB4BE425C(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_117(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_38(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0xB84E12C6EBFF63A4(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_25(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_117(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404919.f_1505) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_38(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xB84E12C6EBFF63A4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xB84E12C6EBFF63A4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0xB84E12C6EBFF63A4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xB84E12C6EBFF63A4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_26()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404919.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_27(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2407161[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2407161[iVar0 /*17*/].f_16))
			{
				if (func_25(*uParam0, &(Global_2407161[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2407161[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2407161[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_19(&Var1, &(Global_2407161[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_27(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_19(&Var1, &(Global_2407161[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_28(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404919.f_484)
	{
		if (!func_32(unk_0x3F80C6638E3A1A90(), 1))
		{
			return 1;
		}
		if (!func_31(Param0, 1008981770))
		{
			if (!func_27(&Param0, 0, 0, 0))
			{
				return 1;
			}
			else if (func_27(&Param0, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = func_30(Param0, 1008981770);
			if (iVar0 > -1)
			{
				Var1 = { func_29(&(Global_2404919.f_39[iVar0 /*12*/])) };
				if (!func_27(&Var1, 0, 0, 0))
				{
					if (!func_27(&Param0, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_29(var uParam0)
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

int func_30(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404919.f_39[iVar0 /*12*/].f_9)
		{
			if (func_25(Param0, &(Global_2404919.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_31(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404919.f_39[iVar0 /*12*/].f_9)
		{
			if (func_25(Param0, &(Global_2404919.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_32(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_36(iParam0) != 0;
	}
	return func_33(iParam0, bParam1);
}

int func_33(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_34(iParam0))
		{
			return 1;
		}
	}
	if (Global_1586079[iParam0 /*408*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_34(int iParam0)
{
	return func_35(iParam0);
}

bool func_35(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_13.f_1, 0);
}

int func_36(int iParam0)
{
	if (func_37(iParam0, 0, 1))
	{
		return Global_2416794[iParam0 /*303*/].f_1;
	}
	return 0;
}

int func_37(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xD18C3CF631455087(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2E6D4A0CE8AD9494(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426494.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_38(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_39(&Param3, &Param6);
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

void func_39(var uParam0, var uParam1)
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

int func_40(struct<3> Param0, struct<3> Param3, float fParam6)
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

int func_41(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_42(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404919.f_1301 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x7E2490D5331C2EF9(&(Global_2404919.f_1301)))
			{
				case 0:
					if (uParam2->f_7 && Global_2404919.f_512.f_7 == 0)
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
							*(uParam0[0 /*3*/]) = { Global_2404919.f_1276 };
						}
						if (uParam1->f_5 && func_10(Global_2404919.f_468))
						{
							if (!Global_2404919.f_1301.f_4)
							{
								Global_2404919.f_1301.f_4 = 1;
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
						uParam0->f_10[0] = unk_0x8AF26D6D6BBE6931(0f, 360f);
						return 1;
					}
					break;
				
				case 1:
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xBB22A67725D9B946())
		{
			if (!unk_0xC8C27FAF299F4354())
			{
				if (unk_0x7635A495A644C07D())
				{
					Global_2404919.f_1301 = unk_0x26BA5A4FA4A587D6();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xA8846F47ACD0A472();
				Global_2404919.f_1301.f_4 = 1;
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_103(Global_2404919.f_512, &(Global_2404919.f_1301.f_30), &(Global_2404919.f_1301.f_63));
	}
	if (uParam2->f_7 && !Global_2404919.f_1301.f_3)
	{
		Global_2404919.f_1301.f_3 = 1;
		func_47(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
	if (Global_2404919.f_1301 > 0)
	{
		if (uParam1->f_5 || unk_0xBB22A67725D9B946())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404919.f_1301)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404919.f_1301.f_2)
					{
						iVar4 = Global_2404919.f_1301.f_2 + 1;
					}
					if (iVar4 > (Global_2404919.f_1301 - 1))
					{
						iVar4 = (Global_2404919.f_1301 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x1A664279AFB239A9(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0xBE72992FED6055C5(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xC11B03D33D7E53AA(iVar4);
					}
					else
					{
						unk_0x3687751804ECB7AE(iVar4, &iVar5);
					}
					func_47(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404919.f_1301.f_2 = iVar4;
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
			iVar4 = Global_2404919.f_1301;
		}
		if (Global_2404919.f_1301 == iVar4)
		{
			if (uParam1->f_5 && func_10(Global_2404919.f_468))
			{
				if (Global_2404919.f_1301.f_1)
				{
					func_9(uParam0, &(Global_2404919.f_1301.f_5));
					func_46(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404919.f_1276 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x8AF26D6D6BBE6931(0f, 360f);
					func_46(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404919.f_1301.f_1)
			{
				func_9(uParam0, &(Global_2404919.f_1301.f_5));
				func_46(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x0ADD324BC46177EF(0, Global_2404919.f_1301);
				unk_0x1A664279AFB239A9(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_43(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_46(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404919.f_1276 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x8AF26D6D6BBE6931(0f, 360f);
					func_46(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404919.f_1276 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0x8AF26D6D6BBE6931(0f, 360f);
				func_46(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404919.f_1276 };
		if (uParam1->f_5 && func_10(Global_2404919.f_468))
		{
			if (!Global_2404919.f_1301.f_4)
			{
				Global_2404919.f_1301.f_4 = 1;
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
		uParam0->f_10[0] = unk_0x8AF26D6D6BBE6931(0f, 360f);
		func_46(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

int func_43(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_45(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2408127[iVar4])
	{
		if (func_44(Var1, &(Global_2407298[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_20(&Var1, Global_2407298[iVar4 /*92*/][iVar0 /*7*/], Global_2407298[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407298[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408127[8])
	{
		if (func_44(Var1, &(Global_2407298[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_20(&Var1, Global_2407298[iVar4 /*92*/][iVar0 /*7*/], Global_2407298[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2407298[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_44(struct<3> Param0, var uParam3)
{
	return unk_0xB84E12C6EBFF63A4(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_45(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2408137[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2408137[1])
	{
		if (Param0.f_0 < Global_2408141[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2408137[2])
	{
		if (Param0.f_0 < Global_2408141[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2408141[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2408141[3])
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

void func_46(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404919.f_1408[(3 - iVar0) /*3*/] = { Global_2404919.f_1408[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404919.f_1408[0 /*3*/] = { Param0 };
}

void func_47(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
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
	bool bVar11;
	int iVar12;
	struct<8> Var13;
	bool bVar21;
	bool bVar22;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404919.f_468 == 1)
		{
			if (unk_0x7F38A542899D217A((Global_2404919.f_481.f_2 - Param0.f_2)) < 25f)
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
		if (func_100(unk_0x3F80C6638E3A1A90()))
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
		if (!func_99(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x8F6FE79D52C51E99(unk_0xE7869D5D7816A9B6(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x8F6FE79D52C51E99(unk_0xE7869D5D7816A9B6(), Param0, 20f))
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
		if (!func_98(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	bVar11 = true;
	iVar10 = 0;
	while (iVar10 < 2)
	{
		if (unk_0x652D2EEEF1D3E62C(uParam5->f_13[iVar10 /*3*/]) > 0f)
		{
			if (!unk_0x2A488C176D52CCA5(Param0, uParam5->f_13[iVar10 /*3*/]) > uParam5->f_20[iVar10])
			{
				bVar11 = false;
			}
		}
		iVar10++;
	}
	if (bVar11)
	{
		iVar7 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_91(Param0, fParam3, uParam4->f_15, func_97(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404919.f_1;
		}
	}
	else if (!func_85(Param0, 25f, unk_0x3F80C6638E3A1A90(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_84(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_84(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404919.f_621)
		{
			if (func_28(Global_2404919.f_481))
			{
				if ((!func_27(&Param0, 0, 0, 0) && !func_18(&Param0, 0, 0)) && !func_83(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if ((!func_18(&Param0, 0, 0) && !func_83(&Param0, 0)) && !func_17(Param0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_82(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_81(unk_0x3F80C6638E3A1A90()) && func_79(unk_0x3F80C6638E3A1A90())))
		{
			if (!func_78(&Param0, &(Global_2404919.f_1301.f_63), 0, 1065353216))
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
		if (!func_79(unk_0x3F80C6638E3A1A90()))
		{
			if (!func_77(Param0, &(Global_2404919.f_1301.f_30), &(Global_2404919.f_1301.f_63), 1073741824))
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
	if (func_76(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_76(Param0))
			{
				if (func_10(Global_2404919.f_468))
				{
					if (func_31(Param0, 1f))
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
		if (func_75(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404919.f_39.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x4443D8D533ACB547(unk_0x4D694385AA5DB67C(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (!func_43(&Param0, 0))
	{
		iVar7 = (iVar7 + 32768);
	}
	else
	{
		iVar7 = -1;
	}
	if (uParam4->f_5)
	{
	}
	else if (func_74(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var13.f_2 = 1176256410;
	bVar21 = false;
	bVar22 = false;
	iVar12 = 0;
	while (iVar12 < 3)
	{
		if (iVar7 >= Global_2404919.f_1301.f_5[iVar12 /*8*/])
		{
			if (uParam4->f_5)
			{
				if (!bVar21)
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
						fVar0 = func_66(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					else
					{
						fVar0 = func_66(Param0, Global_2404919.f_1276, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar21 = true;
				}
				if ((func_10(Global_2404919.f_468) && iVar7 == Global_2404919.f_1301.f_5[iVar12 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar22)
					{
						fVar2 = func_64(Param0);
						bVar22 = true;
					}
					if (fVar2 < Global_2404919.f_1301.f_5[iVar12 /*8*/].f_2)
					{
						Var13.f_4 = { Param0 };
						Var13.f_7 = fParam3;
						Var13.f_0 = iVar7;
						Var13.f_1 = fVar0;
						Var13.f_2 = fVar2;
						func_63(Var13, iVar12);
						Global_2404919.f_1301.f_1 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404919.f_1301.f_5[iVar12 /*8*/] || (iVar7 == Global_2404919.f_1301.f_5[iVar12 /*8*/] && fVar0 > Global_2404919.f_1301.f_5[iVar12 /*8*/].f_1))
				{
					Var13.f_4 = { Param0 };
					Var13.f_7 = fParam3;
					Var13.f_0 = iVar7;
					Var13.f_1 = fVar0;
					func_63(Var13, iVar12);
					Global_2404919.f_1301.f_1 = 1;
					return;
				}
			}
			else
			{
				if (!bVar21)
				{
					if (uParam4->f_15)
					{
						fVar1 = 3.5f;
					}
					else
					{
						fVar1 = 1f;
					}
					fVar5 = func_62(Param0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_49(Param0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = func_48(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = func_48(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					bVar21 = true;
				}
				if (iVar7 > Global_2404919.f_1301.f_5[iVar12 /*8*/] || (iVar7 == Global_2404919.f_1301.f_5[iVar12 /*8*/] && fVar3 > Global_2404919.f_1301.f_5[iVar12 /*8*/].f_3))
				{
					Var13.f_4 = { Param0 };
					Var13.f_7 = fParam3;
					Var13.f_0 = iVar7;
					Var13.f_3 = fVar3;
					func_63(Var13, iVar12);
					Global_2404919.f_1301.f_1 = 1;
					return;
				}
			}
		}
		iVar12++;
	}
}

float func_48(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_49(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar7;
	
	fVar2 = 999999.9f;
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_37(iVar7, 1, 1))
		{
			if (!iVar7 == unk_0x3F80C6638E3A1A90() || iParam5 == 1)
			{
				bVar3 = false;
				if (bParam3)
				{
					if (func_52(iVar7))
					{
						bVar3 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x2CC717AC6CF51F8F(iVar7) == unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))
					{
						if (!unk_0x2CC717AC6CF51F8F(iVar7) == -1 || !func_32(unk_0x3F80C6638E3A1A90(), 1))
						{
							bVar3 = true;
						}
					}
				}
				if (bVar3)
				{
					if (unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar7) || !bParam6)
					{
						if (func_51(iVar7))
						{
							Var4 = { func_50(iVar7) };
							if (!bParam6)
							{
								if (Var4.f_2 < -100f)
								{
									Var4.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0xF18329472591CFE6(Param0, Var4, 1);
							if (fVar1 < fVar2)
							{
								fVar2 = fVar1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar2;
}

Vector3 func_50(int iParam0)
{
	return unk_0x1141852D07400777(unk_0x91B73D905EA38F6B(iParam0), 0);
}

int func_51(int iParam0)
{
	if (unk_0x715CF32E4ACFA610(unk_0x91B73D905EA38F6B(iParam0)) || Global_2416794[iParam0 /*303*/].f_240)
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0)
{
	if (func_37(iParam0, 0, 1))
	{
		if (!func_60(iParam0))
		{
			if (unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iParam0))
			{
				if (!unk_0x2CC717AC6CF51F8F(iParam0) == unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))
				{
					if (func_33(unk_0x3F80C6638E3A1A90(), 1))
					{
						if (!func_59(unk_0x2CC717AC6CF51F8F(iParam0), unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x2CC717AC6CF51F8F(iParam0) == -1 && unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1)
				{
					if (!func_33(unk_0x3F80C6638E3A1A90(), 1))
					{
						if (!func_53(iParam0))
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

int func_53(int iParam0)
{
	if (func_58(unk_0x3F80C6638E3A1A90(), iParam0))
	{
		return 1;
	}
	Global_2456685 = { func_57(iParam0) };
	if (unk_0x74320D9FF94A9E7E(&Global_2456685))
	{
		return 1;
	}
	if (func_54(unk_0x3F80C6638E3A1A90(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_56(iParam0);
	if (!iVar0 == func_55())
	{
		if (iVar0 == func_56(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_55()
{
	return -1;
}

int func_56(int iParam0)
{
	if (iParam0 != func_55())
	{
		return Global_1607618[iParam0 /*106*/].f_8;
	}
	return func_55();
}

struct<13> func_57(var uParam0)
{
	struct<13> Var0;
	
	unk_0xD82458461B583D5D(uParam0, &Var0, 13);
	return Var0;
}

int func_58(int iParam0, var uParam1)
{
	if (unk_0xAB7778782580F313())
	{
		Global_2456685 = { func_57(iParam0) };
		Global_2456698 = { func_57(uParam1) };
		if (unk_0x89398BAF58AA485C(&Global_2456685))
		{
			if (unk_0x89398BAF58AA485C(&Global_2456698))
			{
				unk_0xB486161F8A7A8AFB(&Global_2456615, 35, &Global_2456685);
				unk_0xB486161F8A7A8AFB(&Global_2456650, 35, &Global_2456698);
				if (Global_2456615 == Global_2456650)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_59(int iParam0, int iParam1, int iParam2)
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
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 0);
				
				case 1:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 1);
				
				case 2:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 2);
				
				case 3:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 4);
				
				case 1:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 5);
				
				case 2:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 6);
				
				case 3:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 8);
				
				case 1:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 9);
				
				case 2:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 10);
				
				case 3:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 12);
				
				case 1:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 13);
				
				case 2:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 14);
				
				case 3:
					return unk_0xB519E5386FBF69E5(Global_1612326.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (func_114(iParam0, 0))
	{
		return 1;
	}
	if (func_61())
	{
		if (iParam0 == unk_0x3F80C6638E3A1A90())
		{
			return 1;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 3);
}

float func_62(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_37(unk_0x3F80C6638E3A1A90(), 1, 1))
		{
			if (!unk_0xAEF17BDE274A1247())
			{
				if (unk_0x86ECD59CFE6143AC(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0));
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
		if (func_37(iVar1, 1, 1))
		{
			if (!func_114(iVar1, 0) && unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x3F80C6638E3A1A90()))
				{
					if (func_51(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2CC717AC6CF51F8F(iVar1) != unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))) || unk_0x2CC717AC6CF51F8F(iVar1) == -1)
							{
								if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x1141852D07400777(unk_0x91B73D905EA38F6B(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x2CC717AC6CF51F8F(iVar1) != iParam7 || unk_0x2CC717AC6CF51F8F(iVar1) == -1)
						{
							if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x1141852D07400777(unk_0x91B73D905EA38F6B(iVar1), 0));
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

void func_63(struct<8> Param0, int iParam8)
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404919.f_1301.f_5[iParam8 /*8*/] };
	Global_2404919.f_1301.f_5[iParam8 /*8*/] = { Param0 };
	if (iParam8 < 2)
	{
		func_63(Var0, iParam8 + 1);
	}
}

float func_64(struct<3> Param0)
{
	var uVar0;
	
	return func_65(Param0, &(Global_2404919.f_39), &uVar0);
}

float func_65(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404919.f_1505) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_66(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9)
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
		fVar0 = func_48(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	fVar0 = func_48(func_49(Param0, 1, 0, 0, 1), 0f, func_73(), func_71(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar0 = func_48(func_69(Param0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar4 = 100f;
	if (unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1 && !func_32(unk_0x3F80C6638E3A1A90(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_48(func_68(Param0, unk_0x3F80C6638E3A1A90(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bParam7)
	{
		if (func_67(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_48(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_48(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_48(unk_0x2A488C176D52CCA5(Global_2404919.f_481, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_67(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0xB1B73F5D89903834(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x608885034BBFCDB9(uVar3))
	{
		unk_0x399284B4E8B22749(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x7F38A542899D217A((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_68(struct<3> Param0, int iParam3, int iParam4)
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
			if (func_37(iVar3, 0, 1))
			{
				if (unk_0x2CC717AC6CF51F8F(iVar3) != unk_0x2CC717AC6CF51F8F(iParam3) || (unk_0x2CC717AC6CF51F8F(iVar3) == -1 && unk_0x2CC717AC6CF51F8F(iParam3) == -1))
				{
					if (Global_2412289.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2412289.f_130[iVar2 /*3*/], Param0);
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

float func_69(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x312FA2EB3948B47C(unk_0xE7869D5D7816A9B6(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xD51CFE69539DB6D8(uVar6[iVar2]))
		{
			if (!unk_0x76B2D234F1895632(uVar6[iVar2]))
			{
				if (func_70(uVar6[iVar2]))
				{
					Var3 = { unk_0x1141852D07400777(uVar6[iVar2], 1) };
					fVar1 = unk_0xF18329472591CFE6(Param0, Var3, 1);
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

int func_70(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x1EB88099AAF24BDE(uParam0);
	switch (unk_0x71EF2827C4AC5DD9(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0x71EF2827C4AC5DD9(uVar0, Global_1574190[unk_0x3F80C6638E3A1A90()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/] == 0)
	{
		iVar1 = unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0x71EF2827C4AC5DD9(uVar0, Global_1573901[iVar1]))
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

float func_71()
{
	if (func_72())
	{
		if ((unk_0xD1C57B32C6DE7BB6(Global_2404919.f_39.f_67) || unk_0xFFD2CE10E8C7E77F(Global_2404919.f_39.f_67)) || Global_2404919.f_39.f_67 == joaat("rhino"))
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

int func_72()
{
	if (Global_2404919.f_39.f_65 && !Global_2404919.f_39.f_295)
	{
		if (!func_60(unk_0x3F80C6638E3A1A90()))
		{
			return 1;
		}
	}
	return 0;
}

float func_73()
{
	if (func_72())
	{
		if ((unk_0xD1C57B32C6DE7BB6(Global_2404919.f_39.f_67) || unk_0xFFD2CE10E8C7E77F(Global_2404919.f_39.f_67)) || Global_2404919.f_39.f_67 == joaat("rhino"))
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

int func_74(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0xEEC849D5E3FC13E0(Param0, fParam7)) || (fVar0 > 0f && unk_0xF0CC6299CE9D9124(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0xDADCC8A8DA94F002(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0xDADCC8A8DA94F002(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_75(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404919.f_39.f_55)
	{
		if (unk_0x4443D8D533ACB547(Global_2404919.f_39.f_56))
		{
			if (!unk_0x0EDE95A6D2634A75(Param0))
			{
				uVar0 = unk_0x4D694385AA5DB67C(Param0);
				if (unk_0x4443D8D533ACB547(uVar0))
				{
					iVar1 = unk_0x50B42F1ED89D1230(uVar0);
					if (!iVar1 == Global_2404919.f_39.f_57)
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

int func_76(struct<3> Param0)
{
	switch (Global_2404919.f_1297)
	{
		case 0:
			return func_117(Param0, Global_2404919.f_1276, Global_2404919.f_1279, 0, 0);
			break;
		
		case 1:
			return func_38(Param0, Global_2404919.f_1290, Global_2404919.f_1293, 0, 0);
			break;
		
		case 2:
			return unk_0xB84E12C6EBFF63A4(Param0, Global_2404919.f_1290, Global_2404919.f_1293, Global_2404919.f_1296, 0, 1);
			break;
	}
	return 0;
}

int func_77(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0xB84E12C6EBFF63A4(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_78(var uParam0, var uParam1, bool bParam2, float fParam3)
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
				func_15(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_79(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_80(iParam0))
			{
				if (Global_1586079[iParam0 /*408*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_80(int iParam0)
{
	return Global_1586079[iParam0 /*408*/].f_177 != 0;
}

int func_81(int iParam0)
{
	if (func_33(iParam0, 1))
	{
		if (Global_1586079[iParam0 /*408*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_82(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404919.f_1408[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_83(var uParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (Global_2404919.f_547 > 0f)
	{
		fVar3 = unk_0x2A488C176D52CCA5(*uParam0, Global_2404919.f_544);
		if (fVar3 < Global_2404919.f_547)
		{
			if (bParam1)
			{
				Var0 = { *uParam0 };
				func_15(&Var0, Global_2404919.f_544, Global_2404919.f_547, 1036831949, 0);
				if (func_83(&Var0, 0))
				{
					Var0 = { *uParam0 };
					func_15(&Var0, Global_2404919.f_544, Global_2404919.f_547, 1036831949, 1);
				}
				*uParam0 = { Var0 };
			}
			return 1;
		}
	}
	return 0;
}

int func_84(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_37(unk_0x3F80C6638E3A1A90(), 1, 1))
		{
			if (!unk_0xAEF17BDE274A1247())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xF18329472591CFE6(func_50(unk_0x3F80C6638E3A1A90()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x86ECD59CFE6143AC(Param0, fParam3))
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
		if (func_37(iVar1, 1, 1))
		{
			if (!func_114(iVar1, 0) && unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x3F80C6638E3A1A90()))
				{
					if ((func_51(iVar1) || !bParam10) && !Global_2416794[iVar1 /*303*/].f_254)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x2CC717AC6CF51F8F(iVar1) == -1)
							{
								if (unk_0x2CC717AC6CF51F8F(iVar1) == unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2CC717AC6CF51F8F(iVar1) != unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))) || unk_0x2CC717AC6CF51F8F(iVar1) == -1)
							{
								if (unk_0xF18329472591CFE6(func_50(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x2CC717AC6CF51F8F(iVar1) != iParam8 || unk_0x2CC717AC6CF51F8F(iVar1) == -1)
						{
							if (unk_0xF18329472591CFE6(func_50(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
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

int func_85(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_90(Param0, fParam3, iParam4, iParam5) || func_86(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_86(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_87(Param0, Global_2412289.f_426[iVar0 /*3*/], Global_2412289.f_523[iVar0], Global_2412289.f_556[iVar0], 1036831949))
			{
				if (func_37(iVar1, 0, 1) && func_37(iParam3, 0, 1))
				{
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_87(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_89(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_16(&Var0, 0f, 0f, uParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_88(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0x7F38A542899D217A((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0x7F38A542899D217A((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0x7F38A542899D217A((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0xB84E12C6EBFF63A4(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_88(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x36B4A88247BB6F4C(iParam0))
	{
		unk_0x67060D73A7F90F25(iParam0, fParam1, fParam2);
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

float func_89(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_88(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	return (unk_0x71D93B57D07F9804((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f)))) + fParam1);
}

int func_90(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (func_37(iVar1, 0, 1) && func_37(iParam4, 0, 1))
			{
				if (Global_2412289.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2412289.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_50(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2412289.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2412289.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_37(iVar1, 0, 1))
			{
				if (unk_0x2A488C176D52CCA5(func_50(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_91(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404919.f_1 = 0;
	if (!func_85(Param0, 0.5f, unk_0x3F80C6638E3A1A90(), 0, 0))
	{
		Global_2404919.f_1++;
		if (bParam5)
		{
			if (func_138(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
				if (!func_96(Param0, fParam12))
				{
					Global_2404919.f_1++;
					if (!func_95(Param0))
					{
						Global_2404919.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
			}
		}
		else if (!bParam4)
		{
			if (func_138(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
				if (!func_96(Param0, fParam12))
				{
					Global_2404919.f_1++;
					if (!func_92(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404919.f_1++;
						if (!func_95(Param0))
						{
							Global_2404919.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
			}
		}
		else if (func_138(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
		{
			Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
			if (!func_96(Param0, fParam12))
			{
				Global_2404919.f_1++;
				if (!func_92(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404919.f_1++;
					if (!func_95(Param0))
					{
						Global_2404919.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404919.f_1 = (Global_2404919.f_1 + Global_2404919);
		}
	}
	return 0;
}

int func_92(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x3F80C6638E3A1A90() == iVar1)
		{
			if ((func_37(iVar1, 1, 1) && func_51(iVar1)) && unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
			{
				if (!func_94(unk_0x3F80C6638E3A1A90(), iVar1, -2, 0))
				{
					if (func_93(func_50(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_93(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0xB84E12C6EBFF63A4(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_94(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x2CC717AC6CF51F8F(iParam0) == -1 && unk_0x2CC717AC6CF51F8F(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x2CC717AC6CF51F8F(iParam0) == unk_0x2CC717AC6CF51F8F(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x2CC717AC6CF51F8F(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x2CC717AC6CF51F8F(iParam0) == iParam2;
	}
	return unk_0x2CC717AC6CF51F8F(iParam0) == iParam2;
}

int func_95(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (func_33(unk_0x3F80C6638E3A1A90(), 1))
	{
		if (Global_1612326.f_32458 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1612326.f_32458)
			{
				if (Global_1612326.f_32459[iVar0 /*39*/].f_7 != 0)
				{
					func_88(Global_1612326.f_32459[iVar0 /*39*/].f_7, &Var1, &Var4, 1086324736, 1080033280, 1077936128);
					fVar7 = (unk_0x7F38A542899D217A((Var1.f_1 - Var4.f_1)) * 0.5f);
					fVar8 = (unk_0x7F38A542899D217A((Var1.f_0 - Var4.f_0)) * 0.5f);
					fVar9 = (unk_0x7F38A542899D217A((Var1.f_2 - Var4.f_2)) * 0.5f);
					fVar10 = ((fVar7 * fVar7) + (fVar8 * fVar8));
					fVar10 = (fVar10 + fVar9);
					if (unk_0xB7A628320EFF8E47(Global_1612326.f_32459[iVar0 /*39*/], Param0) < fVar10)
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

int func_96(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_37(iVar1, 1, 1) && func_51(iVar1)) && unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
		{
			if ((unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1 && unk_0x2CC717AC6CF51F8F(iVar1) == -1) && !func_32(unk_0x3F80C6638E3A1A90(), 1))
			{
				return 0;
			}
			else if ((unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1 && !unk_0x3F80C6638E3A1A90() == iVar1) || !func_94(unk_0x3F80C6638E3A1A90(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_50(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_97(int iParam0)
{
	if ((Global_2404919.f_468 == 9 || Global_2404919.f_468 == 9) || (Global_2404919.f_468 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_98(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x3F80C6638E3A1A90() != iVar1) || iParam8 == 0)
		{
			if (func_37(iVar1, bParam4, bParam5))
			{
				if (unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
				{
					if (!bParam7 || (!unk_0xAF437D7C802AB246(unk_0x91B73D905EA38F6B(iVar1)) && func_51(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) != unk_0x2CC717AC6CF51F8F(iVar1))) || unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1)
						{
							if (((unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1 && iParam9) && bParam6) && func_53(iVar1))
							{
							}
							else if (unk_0xD51CFE69539DB6D8(unk_0x91B73D905EA38F6B(iVar1)))
							{
								if (unk_0xF18329472591CFE6(func_50(iVar1), Param0, 1) < fParam3)
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

int func_99(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_37(iVar1, 1, 1))
			{
				if ((!func_114(iVar1, 0) && unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1)) && iVar1 != unk_0x3F80C6638E3A1A90())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x2CC717AC6CF51F8F(iVar1) == -1)
						{
							if (unk_0x2CC717AC6CF51F8F(iVar1) == unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x2CC717AC6CF51F8F(iVar1) == iVar3)
					{
						if (unk_0xF18329472591CFE6(func_50(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
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

int func_100(int iParam0)
{
	if ((func_32(iParam0, 1) || func_102(iParam0)) || func_101(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0, int iParam1)
{
	if (Global_1607618[iParam0 /*106*/].f_8.f_27 != -1 || (iParam1 && Global_1607618[iParam0 /*106*/].f_8.f_26 != -1))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1607618[iVar0 /*106*/] != -1;
	}
	return 0;
}

void func_103(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0xB519E5386FBF69E5(Global_2359718[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359718[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359718[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359718[iVar1 /*26*/].f_6.f_2;
					func_105(&Var2, uParam3, iVar0);
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
				func_104(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_104(var uParam0, var uParam1, int iParam2)
{
	Global_2409048 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_104(&Global_2409048, uParam1, iParam2 + 1);
	}
}

void func_105(var uParam0, var uParam1, int iParam2)
{
	Global_2409044 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_105(&Global_2409044, uParam1, iParam2 + 1);
	}
}

void func_106(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_39(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

void func_107()
{
	func_111();
	func_110();
	func_109();
	func_108();
}

void func_108()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404919.f_1301.f_63[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_109()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404919.f_1301.f_30[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_110()
{
	struct<8> Var0;
	int iVar8;
	
	Var0.f_2 = 1176256410;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		Global_2404919.f_1301.f_5[iVar8 /*8*/] = { Var0 };
		iVar8++;
	}
}

void func_111()
{
	struct<5> Var0;
	
	Var0.f_2 = -1;
	Global_2404919.f_1301 = { Var0 };
}

var func_112()
{
	return Global_1310987.f_4;
}

void func_113(var uParam0, var uParam1)
{
	func_139();
	func_137(uParam0, uParam1);
}

bool func_114(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_115(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_115(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_116();
	}
	if (Global_1315887[iVar1] == 1)
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

int func_116()
{
	return Global_1312746;
}

bool func_117(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_118(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404919.f_1144 > 0 && func_136(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_119(uParam0, uParam1, uParam2);
	}
}

void func_119(var uParam0, var uParam1, var uParam2)
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
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_14(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_135(uParam0, 1))
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
	Global_2409058.f_162 = 0;
	Global_2409058.f_163 = 0;
	Global_2409058.f_164 = -99;
	Global_2409058.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2409058[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2409058.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xB1B73F5D89903834(*uParam0, iVar0, &uVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x608885034BBFCDB9(iVar8))
		{
			unk_0x399284B4E8B22749(iVar8, &Var1);
			bVar12 = false;
			if (Global_2409058.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2409058.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x412E24001F8D483B(iVar8)) || unk_0x9023A1321CE38A1F(iVar8))
			{
				unk_0x6778910539806944(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, *uParam0) > uParam2->f_4)
				{
					if (!func_83(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_134(Var1))
									{
										if (Var1.f_2 >= (uParam0->f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
										{
											if (Var1.f_2 <= (uParam0->f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
											{
												if (func_133(Var1, uParam2) || uParam2->f_33 >= 2)
												{
													if ((uParam2->f_48 && !func_135(&Var1, 0)) || uParam2->f_48 == 0)
													{
														Var1 = { func_131(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
														if (!bVar12)
														{
															if (bVar11)
															{
																iVar0 = (iVar0 + -1);
															}
														}
														if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
														{
															if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, *uParam0, uParam0->f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
															{
																if ((uParam2->f_12 && !func_126(Var1, uVar4, uParam2->f_34, unk_0x3F80C6638E3A1A90(), 0, 1)) || !uParam2->f_12)
																{
																	if (!uParam2->f_15 || !func_14(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																				if (func_138(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																			}
																			else if (func_138(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0) && !func_125(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																						iVar22 = func_124(Var1, uParam2->f_54, &fVar23);
																					}
																					if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																					{
																						if (uParam2->f_52)
																						{
																							if (iVar22 < uParam2->f_53)
																							{
																								iVar16 = 0;
																								while (iVar16 < Global_2409058.f_162)
																								{
																									Global_2409058[iVar16 /*3*/] = { 0f, 0f, 0f };
																									Global_2409058.f_121[iVar16] = 0f;
																									iVar16++;
																								}
																								Global_2409058.f_162 = 0;
																								uParam2->f_53 = iVar22;
																							}
																						}
																						if (uParam2->f_30)
																						{
																							if (Global_2409058.f_162 == 0)
																							{
																								Global_2409058[0 /*3*/] = { Var1 };
																								Global_2409058.f_121[0] = uVar4;
																							}
																							else
																							{
																								iVar16 = 0;
																								while (iVar16 < Global_2409058.f_162 + 1)
																								{
																									if (iVar16 < 40)
																									{
																										if (unk_0xB7A628320EFF8E47(Var1, *uParam0) < unk_0xB7A628320EFF8E47(Global_2409058[iVar16 /*3*/], *uParam0))
																										{
																											func_123(Var1, uVar4, iVar16);
																											iVar16 = Global_2409058.f_162 + 1;
																										}
																									}
																									iVar16++;
																								}
																							}
																							Global_2409058.f_162++;
																							if (Global_2409058.f_162 >= 5)
																							{
																								if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																								{
																									iVar0 = 100;
																								}
																								else if (Global_2409058.f_162 == 40)
																								{
																									iVar0 = 100;
																								}
																							}
																						}
																						else
																						{
																							Global_2409058[Global_2409058.f_162 /*3*/] = { Var1 };
																							Global_2409058.f_121[Global_2409058.f_162] = uVar4;
																							Global_2409058.f_162++;
																							if (func_133(Var1, uParam2))
																							{
																								Global_2409058.f_163++;
																							}
																							if (Global_2409058.f_162 >= 10)
																							{
																								if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																								{
																									iVar0 = 100;
																								}
																								else if (Global_2409058.f_162 == 40)
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
				if (Global_2409058.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2409058[0 /*3*/] };
						*uParam1 = Global_2409058.f_121[0];
						return;
					}
					else
					{
						if (Global_2409058.f_163 > 0 && !Global_2409058.f_163 == Global_2409058.f_162)
						{
							func_121(0, uParam2);
						}
						iVar24 = unk_0x0ADD324BC46177EF(0, Global_2409058.f_162);
						Var25 = { Global_2409058[0 /*3*/] };
						uVar28 = Global_2409058.f_121[0];
						Global_2409058[0 /*3*/] = { Global_2409058[iVar24 /*3*/] };
						Global_2409058.f_121[0] = Global_2409058.f_121[iVar24];
						Global_2409058[iVar24 /*3*/] = { Var25 };
						Global_2409058.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2409058[0 /*3*/] };
						*uParam1 = Global_2409058.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_119(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x0ADD324BC46177EF((1 + iVar15), (40 + iVar15));
						unk_0xE67882ADA97B9D94(*uParam0, iVar0, &Var1, &uVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_131(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						uVar32 = uVar4;
						if (func_14(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), 1, 1) || func_135(&Var29, 1))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = uVar32;
								func_119(uParam0, uParam1, uParam2);
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
				func_119(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_120(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2409058.f_164 = iVar8;
	}
}

void func_120(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_85(*(uParam0[iVar2 /*4*/]), 5f, unk_0x3F80C6638E3A1A90(), 0, 0))
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

void func_121(int iParam0, var uParam1)
{
	if (!func_133(Global_2409058[iParam0 /*3*/], uParam1))
	{
		Global_2409058.f_162 = (Global_2409058.f_162 - 1);
		func_122(iParam0);
		if (Global_2409058.f_162 > Global_2409058.f_163)
		{
			func_121(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_121(iParam0 + 1, uParam1);
	}
}

void func_122(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2409058[iParam0 /*3*/] = { Global_2409058[iParam0 + 1 /*3*/] };
			Global_2409058.f_121[iParam0] = Global_2409058.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_123(struct<3> Param0, var uParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2409058[iParam4 /*3*/] };
	uVar3 = Global_2409058.f_121[iParam4];
	Global_2409058[iParam4 /*3*/] = { Param0 };
	Global_2409058.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2409058.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_123(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_124(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_52(iVar5))
		{
			Var1 = { func_50(iVar5) };
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

int func_125(struct<3> Param0, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x3F80C6638E3A1A90() != iVar1) || iParam9 == 0)
		{
			if (func_37(iVar1, bParam5, bParam6))
			{
				if (unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
				{
					if (!bParam8 || (!unk_0xAF437D7C802AB246(unk_0x91B73D905EA38F6B(iVar1)) && func_51(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) != unk_0x2CC717AC6CF51F8F(iVar1))) || unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1)
						{
							if (((unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1 && iParam10) && bParam7) && func_53(iVar1))
							{
							}
							else if (unk_0xD51CFE69539DB6D8(unk_0x91B73D905EA38F6B(iVar1)))
							{
								if (func_87(func_50(iVar1), Param0, uParam3, iParam4, 1036831949))
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

int func_126(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_130(Param0, uParam3, iParam4, iParam5, iParam6) || func_127(Param0, uParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_127(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_129(Param0, iParam4, Global_2412289.f_426[iVar0 /*3*/], Global_2412289.f_556[iVar0]))
			{
				if (func_128(Param0, uParam3, iParam4, Global_2412289.f_426[iVar0 /*3*/], Global_2412289.f_523[iVar0], Global_2412289.f_556[iVar0]))
				{
					if (func_37(iVar1, 0, 1) && func_37(iParam5, 0, 1))
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

int func_128(struct<3> Param0, var uParam3, int iParam4, struct<3> Param5, var uParam8, int iParam9)
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
	
	if (func_87(Param0, Param5, uParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_88(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0x7F38A542899D217A((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0x7F38A542899D217A((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0x7F38A542899D217A((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_16(&Var23, 0f, 0f, uParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_16(&Var26, 0f, 0f, uParam3);
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
		if (func_87(Var1[iVar0 /*3*/], Param5, uParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_129(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_89(iParam3, 1008981770);
	fVar1 = func_89(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_130(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_37(iVar1, 0, 1) && func_37(iParam5, 0, 1))
			{
				if (Global_2412289.f_260[iVar0])
				{
					if (func_87(Global_2412289.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_87(func_50(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2412289.f_260[iVar0])
			{
				if (func_87(Global_2412289.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_37(iVar1, 0, 1))
			{
				if (func_87(func_50(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_131(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_132(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x6778910539806944(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x0164913B5CACDF6B(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
				func_88(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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
		if (!func_132(Param0, *uParam3, Param6))
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
	Var0 = { unk_0xF919633EBD0639D0(Param0, *uParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xC5CBFF029E3952D2(Param0, *uParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_88(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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

int func_132(struct<3> Param0, var uParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_16(&Var0, 0f, 0f, uParam3);
	Var3 = { Param4 - Param0 };
	if (func_21(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_133(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_117(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_38(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xB84E12C6EBFF63A4(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_134(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_45(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2408849[iVar1])
	{
		if (func_44(Param0, &(Global_2408146[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408849[8])
	{
		if (func_44(Param0, &(Global_2408146[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_135(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404919.f_22.f_16)
	{
		switch (Global_2404919.f_22.f_15)
		{
			case 0:
				if (func_117(*uParam0, Global_2404919.f_22.f_8, Global_2404919.f_22.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_38(*uParam0, Global_2404919.f_22.f_8, Global_2404919.f_22.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xB84E12C6EBFF63A4(*uParam0, Global_2404919.f_22.f_8, Global_2404919.f_22.f_11, Global_2404919.f_22.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_24(*uParam0, Global_2404919.f_22.f_8, Global_2404919.f_22.f_11, Global_2404919.f_22.f_14, Global_2404919.f_22.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_136(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2404919.f_1144 > 0)
	{
		iVar0 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_14(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
			}
		}
		if (uParam2->f_48)
		{
			if (func_135(uParam0, 1))
			{
			}
		}
		Global_2409058.f_162 = 0;
		Global_2409058.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2409058[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2409058.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404919.f_1144)
		{
			Var1 = { Global_2404919.f_1145[iVar0 /*4*/] };
			uVar4 = Global_2404919.f_1145[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, *uParam0, uParam0->f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_126(Var1, uVar4, uParam2->f_34, unk_0x3F80C6638E3A1A90(), 0, 1)) || !uParam2->f_12)
					{
						if (!uParam2->f_15 || !func_14(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
									if (func_138(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_138(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0) && !func_125(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
											iVar11 = func_124(Var1, uParam2->f_54, &fVar12);
										}
										if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
										{
											if (uParam2->f_52)
											{
												if (iVar11 < uParam2->f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2409058.f_162)
													{
														Global_2409058[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2409058.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2409058.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2409058.f_162 == 0)
												{
													Global_2409058[0 /*3*/] = { Var1 };
													Global_2409058.f_121[0] = uVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2409058.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, *uParam0) < unk_0xB7A628320EFF8E47(Global_2409058[iVar5 /*3*/], *uParam0))
															{
																func_123(Var1, uVar4, iVar5);
																iVar5 = Global_2409058.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2409058.f_162++;
												if (Global_2409058.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404919.f_1144;
													}
													else if (Global_2409058.f_162 == 40)
													{
														iVar0 = Global_2404919.f_1144;
													}
												}
											}
											else
											{
												Global_2409058[Global_2409058.f_162 /*3*/] = { Var1 };
												Global_2409058.f_121[Global_2409058.f_162] = uVar4;
												Global_2409058.f_162++;
												if (Global_2409058.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404919.f_1144;
													}
													else if (Global_2409058.f_162 == 40)
													{
														iVar0 = Global_2404919.f_1144;
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
		if (Global_2409058.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2409058[0 /*3*/] };
				*uParam1 = Global_2409058.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2409058.f_163 > 0 && !Global_2409058.f_163 == Global_2409058.f_162)
				{
					func_121(0, uParam2);
				}
				iVar13 = unk_0x0ADD324BC46177EF(0, Global_2409058.f_162);
				Var14 = { Global_2409058[0 /*3*/] };
				uVar17 = Global_2409058.f_121[0];
				Global_2409058[0 /*3*/] = { Global_2409058[iVar13 /*3*/] };
				Global_2409058.f_121[0] = Global_2409058.f_121[iVar13];
				Global_2409058[iVar13 /*3*/] = { Var14 };
				Global_2409058.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2409058[0 /*3*/] };
				*uParam1 = Global_2409058.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_136(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_119(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_137(var uParam0, var uParam1)
{
	unk_0x5286D2CF4C3E5799(uParam0, uParam1, 0.1f);
	Global_2404919.f_1284 = unk_0xE3E113B4DB09AAF8();
	Global_2404919.f_1282 = 1;
	Global_2404919.f_1285 = unk_0xC7F926248AF8587B();
}

int func_138(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404919 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xEEC849D5E3FC13E0(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xF0CC6299CE9D9124(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xF0CC6299CE9D9124(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDADCC8A8DA94F002(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam13)
	{
		if (unk_0x743D96D854EFA6C5(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404919++;
	if (fParam14 > 0f)
	{
		if (func_98(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_84(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404919++;
	return 1;
}

void func_139()
{
	if (Global_2404919.f_1282)
	{
		if (unk_0xE3E113B4DB09AAF8() == Global_2404919.f_1284)
		{
			unk_0x832E69A1564ABEA4();
		}
		else
		{
			unk_0x832E69A1564ABEA4();
		}
		Global_2404919.f_1282 = 0;
	}
}

int func_140()
{
	if (unk_0xAEF17BDE274A1247())
	{
		return 10000;
	}
	return 1000;
}

int func_141(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	struct<11> Var0;
	struct<18> Var18;
	struct<3> Var43;
	
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
			Var43 = { Param0 - Var0[0 /*3*/] };
			if (Var43.f_2 > Param6.f_12)
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

int func_142(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_143(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xFA4B36553B2A7802())
		{
			func_144(uParam0, 0, 0);
		}
	}
}

void func_144(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x00AAD79B42B3E036() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xC7F926248AF8587B();
			}
			else
			{
				*uParam0 = unk_0xDBD31D1E0E5F2049();
			}
		}
		else
		{
			*uParam0 = unk_0x9D40BBF80D8F5E8A();
		}
		uParam0->f_1 = 1;
	}
}

void func_145()
{
	switch (Local_67[unk_0xA1238458CB587858() /*3*/].f_2)
	{
		case 0:
			func_179();
			func_178();
			if (func_167())
			{
				func_165();
				func_164();
				func_146(35);
				Local_67[unk_0xA1238458CB587858() /*3*/].f_2 = 1;
			}
			else if (Local_56.f_8 >= 1)
			{
				func_164();
				Local_67[unk_0xA1238458CB587858() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_56.f_8 >= 2)
			{
				Local_67[unk_0xA1238458CB587858() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_146(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6868)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_163() /*10169*/].f_7698.f_1958[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_163() /*10169*/].f_7698.f_1958[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_163() /*10169*/].f_7698.f_1958[iVar2 /*3*/].f_1)
			{
				func_159(iVar2, 1);
				unk_0x9956FB0E4B50ECB8(&Global_2456765, (8 + iVar2));
				func_154(2099, -1);
				func_150(67, -1);
				func_154(2554, -1);
				func_150(69, -1);
				unk_0x6344E06FEF08D097(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0xB519E5386FBF69E5(Global_2456765, 12))
					{
						func_147(7, 0);
					}
					else
					{
						func_147(15, 0);
					}
				}
			}
		}
	}
}

void func_147(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_149(iParam0, iParam1))
	{
		iVar0 = func_148();
		Global_2440879[iVar0] = iParam0;
	}
}

int func_148()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2440879[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_149(int iParam0, var uParam1)
{
	if (Global_1315897)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315909) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_150(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_152(iParam0, func_153(iParam1));
	iVar0++;
	func_151(iParam0, iVar0, iParam1);
}

void func_151(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2487921[iParam0 /*5*/][func_153(uParam2)];
	unk_0x39DEDCCD70293F58(iVar0, iParam1, 1);
}

int func_152(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2487921[iParam0 /*5*/][func_153(iParam1)];
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_153(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_116();
		if (iVar1 > -1)
		{
			Global_2466023 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466023 = 1;
		}
	}
	return iVar0;
}

void func_154(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_158(iParam0, func_153(iParam1), 0);
	iVar0++;
	if (!func_157(iParam0))
	{
		func_156(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_155(iParam0, iVar0, iParam1, 1);
	}
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_153(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347522[func_153(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347528[func_153(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347534[func_153(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347540[func_153(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347498[func_153(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347504[func_153(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347510[func_153(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347516[func_153(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347474[func_153(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347480[func_153(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347486[func_153(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347492[func_153(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347546[func_153(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347552[func_153(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347558[func_153(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347564[func_153(iParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347570[func_153(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347576[func_153(iParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347582[func_153(iParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2488585[0 /*6*/][func_153(iParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2488585[1 /*6*/][func_153(iParam2)] = iParam1;
			break;
		
		case 2900:
			Global_2488585[2 /*6*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2488585[3 /*6*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_2488636[func_153(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347588[func_153(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347594[func_153(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347600[func_153(iParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347606[func_153(iParam2)] = iParam1;
			break;
		
		case 3023:
			Global_2488610[0 /*5*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3024:
			Global_2488610[1 /*5*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2488610[2 /*5*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2488610[3 /*5*/][func_153(iParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2488610[4 /*5*/][func_153(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_156(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_153(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, iParam1, iParam3);
	}
}

int func_157(int iParam0)
{
	if (Global_1347455)
	{
		switch (iParam0)
		{
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
			case 747:
			case 748:
			case 749:
			case 750:
			case 1293:
			case 629:
			case 1268:
			case 754:
			case 755:
			case 756:
			case 1226:
			case 1865:
			case 2256:
			case 2900:
			case 3028:
			case 3659:
			case 3023:
			case 3024:
			case 3025:
			case 3026:
			case 3027:
				return 1;
				break;
			}
	}
	return 0;
}

int func_158(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466310[iParam0 /*5*/][func_153(iParam1)];
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_159(int iParam0, int iParam1)
{
	if (Global_2097152[func_163() /*10169*/].f_7698.f_1958[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_163() /*10169*/].f_7698.f_1958[iParam0 /*3*/].f_1 = iParam1;
		func_160(func_162(iParam0), iParam1, -1, 1);
	}
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_161())
	{
		iVar0 = Global_2486042[iParam0 /*5*/][func_153(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7321AD5D4653F852(iVar0, iParam1, iParam3);
		}
	}
}

int func_161()
{
	return 1;
	return 0;
}

int func_162(int iParam0)
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

int func_163()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_164()
{
	if (unk_0xD11595488376CB53(uLocal_166))
	{
		unk_0x5B62CAB9B0D6ABF1(&uLocal_166);
	}
}

void func_165()
{
	if (!unk_0xB519E5386FBF69E5(Global_2426494.f_3276, 0))
	{
		unk_0x9956FB0E4B50ECB8(&(Global_2426494.f_3276), 0);
		func_166();
	}
	else
	{
		unk_0x9956FB0E4B50ECB8(&(Global_2426494.f_3276), 1);
	}
}

void func_166()
{
	func_154(1178, -1);
}

int func_167()
{
	struct<14> Var0;
	
	if (unk_0xDC1FDD911B88C6F2(Local_56.f_2))
	{
		if (unk_0x6CE07ABFB69A4990(unk_0xA5CFD5B9C8A74104(Local_56.f_2), unk_0xE7869D5D7816A9B6()) && func_177(Local_56.f_2))
		{
			func_176(&(Local_56.f_2));
			if (unk_0xD11595488376CB53(uLocal_166))
			{
				unk_0x5B62CAB9B0D6ABF1(&uLocal_166);
			}
			if (!func_175(1))
			{
				func_170("ABB_BOXCT", 1);
			}
			Var0.f_2 = 108;
			Var0.f_10 = unk_0x3F80C6638E3A1A90();
			Var0.f_3 = uLocal_165;
			func_168(Var0, func_169(1));
			unk_0x9956FB0E4B50ECB8(&(Local_67[unk_0xA1238458CB587858() /*3*/].f_1), 0);
			return 1;
		}
	}
	return 0;
}

void func_168(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x3F80C6638E3A1A90();
	if (!iParam14 == 0)
	{
		unk_0xBBEF99A5C6E20CCC(1, &Param0, 14, iParam14);
	}
}

int func_169(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x2249EB1A59F7C407())
	{
		if (unk_0x7144266D2DB1A46F(unk_0x2A0D2AD241778491(iVar1)))
		{
			iVar2 = unk_0x39078CE05613D134(unk_0x2A0D2AD241778491(iVar1));
			if (func_37(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x3F80C6638E3A1A90() || iParam0)
				{
					unk_0x9956FB0E4B50ECB8(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_170(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x4A4F36C4EFDE341F(sParam0);
	iVar0 = unk_0x40A23ED713DD1662(0, 1);
	func_171(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_171(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_174() || !unk_0x6B042133C9334B77()) || !func_114(unk_0x3F80C6638E3A1A90(), 0))
	{
		return;
	}
	iVar0 = func_172(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1713447.f_5[iVar0 /*53*/] = iParam0;
		Global_1713447.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1713447.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1713447.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1713447.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1713447.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1713447.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1713447 - 1))
	{
		if (iParam0 > Global_1713447.f_5[iVar0 /*53*/].f_1)
		{
			func_173(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1713447++;
	if (Global_1713447 > 5)
	{
		Global_1713447 = 5;
		return Global_1713447;
	}
	return (Global_1713447 - 1);
}

void func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1713447.f_5[iVar0 /*53*/] = { Global_1713447.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_174()
{
	return unk_0x3442D8DA379C5187(-1762644250);
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1606400 > 0;
		
		case 2:
			return Global_1606400.f_1 > 0;
		
		case 3:
			return Global_1606400.f_2 > 0;
		
		case 4:
			return Global_1606400.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_176(var uParam0)
{
	var uVar0;
	
	if (unk_0xDC1FDD911B88C6F2(*uParam0))
	{
		if (!unk_0x379306CBB68B0FFA(*uParam0))
		{
		}
	}
	if (unk_0x51362735C7CDD08E(*uParam0))
	{
		uVar0 = unk_0xD0D00ABC0BE9C25C(*uParam0);
		unk_0xC1706D467A0DDDE1(&uVar0);
	}
}

int func_177(var uParam0)
{
	if (unk_0xDC1FDD911B88C6F2(uParam0))
	{
		unk_0xB489515AC39C50A3(uParam0);
		return unk_0x379306CBB68B0FFA(uParam0);
	}
	return 0;
}

void func_178()
{
	if (!unk_0xD11595488376CB53(uLocal_166))
	{
		if (unk_0xDC1FDD911B88C6F2(Local_56.f_2))
		{
			uLocal_166 = unk_0xF800CF9298ABC708(unk_0xA5CFD5B9C8A74104(Local_56.f_2));
			unk_0xFC630C7120A34CE4(uLocal_166, 1.2f);
			unk_0xD65A9304AF8AC06F(uLocal_166, 403);
			unk_0xA887303978A245B8(uLocal_166, 2);
			unk_0x227FC39A4871C64F(uLocal_166, "ABB_BLIPN");
		}
	}
}

void func_179()
{
	var uVar0;
	
	if (!unk_0x23741E39BEA32E66())
	{
		uVar0 = func_158(1180, -1, 0);
		if (!unk_0xB519E5386FBF69E5(uVar0, 14))
		{
			unk_0x9956FB0E4B50ECB8(&uVar0, 14);
			func_156(1180, uVar0, -1, 1);
		}
	}
}

int func_180()
{
	return Local_56.f_0;
}

int func_181()
{
	unk_0x801429C020C467BA(joaat("prop_drug_package_02"));
	if (unk_0x5053BF6D5604065B(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_182(int iParam0)
{
	return Local_67[iParam0 /*3*/];
}

int func_183()
{
	bool bVar0;
	
	func_190(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315884 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			return 1;
		}
	}
	if (func_189())
	{
		return 1;
	}
	if (Global_2442886)
	{
		return 1;
	}
	if (func_188())
	{
		return 1;
	}
	if (func_187(157))
	{
		if (!func_186())
		{
			return 1;
		}
	}
	if (func_187(155))
	{
		return 1;
	}
	if (!unk_0xC8FFCE1611C4F73B())
	{
		return 1;
	}
	if (func_184() != 0)
	{
		if (unk_0xFF6891E21E7FC193(func_184()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_184()
{
	switch (func_185())
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

int func_185()
{
	return Global_25034;
}

bool func_186()
{
	return Global_2432717.f_573;
}

int func_187(int iParam0)
{
	if (unk_0x957F04289F04E160(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_188()
{
	return Global_2440974;
}

bool func_189()
{
	return Global_2432717.f_568;
}

void func_190(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE4E91039B15CA110(1))
	{
		iVar1 = unk_0xCEDD7FE4546BFC4F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x0586E3C97DD61FE4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 313:
					func_191(iVar0);
					break;
				
				case 2:
					unk_0x0586E3C97DD61FE4(1, iVar0, &Var4, 3);
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

void func_191(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x0586E3C97DD61FE4(1, iParam0, &Var0, 3))
	{
		if (func_37(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x91B73D905EA38F6B(Var0.f_1);
			if (unk_0xD51CFE69539DB6D8(uVar3))
			{
				if (unk_0x51374A0BB2871E6E(uVar3, 0))
				{
					uVar4 = unk_0xF0295FF51F2D7803(uVar3, 0);
					if (unk_0x7DF549E9DDE0A2CE(uVar4, Var0.f_2) && unk_0x0D47370227E1A847())
					{
						if (func_192(uVar4, &bVar5))
						{
							unk_0x2C47D40CD2967A44(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xC1F2137782A816E9(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_192(var uParam0, var uParam1)
{
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		if (!unk_0x28D33422BA6C479D(uParam0))
		{
			if (unk_0x4F9572356C55E94C(uParam0))
			{
				unk_0x20BB4B94CC6DDC9A(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x4C5CA989AEF3A14C(uParam0, 0))
		{
			if (unk_0x9B5F286CC8377932(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_193()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_194(int iParam0)
{
	return Global_1586079[iParam0 /*408*/];
}

void func_195()
{
	Global_1347672 = -1;
	if (unk_0xD11595488376CB53(uLocal_166))
	{
		unk_0x5B62CAB9B0D6ABF1(&uLocal_166);
	}
	func_198();
	if (unk_0x00AAD79B42B3E036())
	{
		if (unk_0xFA4B36553B2A7802())
		{
			if (unk_0xDC1FDD911B88C6F2(Local_56.f_2) && unk_0x379306CBB68B0FFA(Local_56.f_2))
			{
				func_176(&(Local_56.f_2));
			}
			Local_56.f_0 = 4;
		}
	}
	if (unk_0xB519E5386FBF69E5(Local_56.f_1, 8))
	{
		func_197();
	}
	func_196();
}

void func_196()
{
	unk_0x52F20802944F8DCE();
}

void func_197()
{
	Global_2457699.f_787 = 0;
	Global_2457699.f_787.f_1 = { 0f, 0f, 0f };
	Global_2457699.f_787.f_4 = 0f;
	Global_2457699.f_787.f_8 = 0;
	unk_0x73817D396768E4C6(&(Global_2457699.f_787.f_7), 0);
}

void func_198()
{
	if (unk_0xB519E5386FBF69E5(uLocal_164, 4))
	{
		unk_0x4E8C0CECF593F87E(unk_0x3F80C6638E3A1A90(), 0.72f);
		unk_0x6E3C4BAAD2EF37EA(unk_0x3F80C6638E3A1A90(), 1f);
		unk_0x54A6C51374C8049B(unk_0x3F80C6638E3A1A90(), 1f);
		unk_0x704EAA059B15E6E2(unk_0x3F80C6638E3A1A90(), 1f);
		func_199(1);
		unk_0x73817D396768E4C6(&uLocal_164, 5);
		unk_0x73817D396768E4C6(&uLocal_164, 7);
		unk_0x73817D396768E4C6(&uLocal_164, 4);
	}
}

void func_199(int iParam0)
{
	var uVar0;
	
	uVar0 = func_200(iParam0, 0);
	unk_0x1E79BB0C6A422F63(uVar0);
}

char* func_200(int iParam0, bool bParam1)
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

int func_201(struct<20> Param0)
{
	func_205(func_206(Param0.f_0), Param0);
	unk_0xFCFA396E73EBBE3E(1);
	func_203(0, -1, 0);
	unk_0xF7B58B81A69E540F(&Local_56, 11);
	unk_0x1AC0E3669E60AAAD(&Local_67, 97);
	if (!func_202())
	{
		return 0;
	}
	unk_0x8A10FCF639EC0104(0);
	if (unk_0xFA4B36553B2A7802())
	{
		Local_56.f_7 = Param0.f_16;
		Global_1347672 = Local_56.f_7;
		Local_56.f_3 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0) };
		if (!func_3(Global_2457699.f_787.f_1))
		{
			unk_0x9956FB0E4B50ECB8(&(Local_56.f_1), 8);
		}
	}
	iLocal_169 = unk_0x9321E9548CA02149();
	Local_67[unk_0xA1238458CB587858() /*3*/] = 0;
	return 1;
}

int func_202()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x00AAD79B42B3E036())
		{
			return 0;
		}
		if (unk_0x2953FEB47CBA6611())
		{
			return 1;
		}
		if (func_189())
		{
			return 0;
		}
		if (func_187(155))
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

int func_203(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD0642B91C061B527();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_196();
			}
			else
			{
				return 0;
			}
		}
		if (!func_204())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x00AAD79B42B3E036())
				{
					if (!bParam2)
					{
						func_196();
					}
					else
					{
						return 0;
					}
				}
				if (func_189())
				{
					if (!bParam2)
					{
						func_196();
					}
					else
					{
						return 0;
					}
				}
				if (func_187(155))
				{
					if (!bParam2)
					{
						func_196();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAB63AB6154522A4E())
			{
				if (!bParam2)
				{
					func_196();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD0642B91C061B527();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			if (!bParam2)
			{
				func_196();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAB63AB6154522A4E())
	{
		if (!bParam2)
		{
			func_196();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_204()
{
	return Global_1315884;
}

void func_205(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		func_196();
	}
	unk_0xE1306BF06D83921B(uParam0, 0, Param1.f_16);
}

int func_206(int iParam0)
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
		
		case 65:
			return 32;
		
		case 66:
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
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}

