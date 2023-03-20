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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	struct<10> Local_55 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_65 = 0;
	struct<3> Local_66[32];
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	int iLocal_167 = 0;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_200(unk_0x1329891157A54C63()) != 1)
			{
				func_195();
			}
		}
		if (!func_188(ScriptParam_0))
		{
			func_195();
		}
	}
	while (true)
	{
		func_187();
		if (func_177())
		{
			func_195();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_200(unk_0x1329891157A54C63()) != 1)
			{
				func_195();
			}
		}
		if (unk_0x9B20331E99DD1C1C() != iLocal_167)
		{
			func_195();
		}
		unk_0x784623EAD2657B32();
		switch (func_176(unk_0x519AAFF77CC141DF()))
		{
			case 0:
				if (func_175())
				{
					if (func_174() == 1)
					{
						Local_66[unk_0x519AAFF77CC141DF() /*3*/] = 1;
					}
					else if (func_174() == 4)
					{
						Local_66[unk_0x519AAFF77CC141DF() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_174() == 1)
				{
					func_140();
				}
				else if (func_174() == 4)
				{
					Local_66[unk_0x519AAFF77CC141DF() /*3*/] = 3;
				}
				if (Local_66[unk_0x519AAFF77CC141DF() /*3*/].f_2 == 0)
				{
					if (!unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_55.f_3, 500f, 500f, 500f, 0, 1, 0) && func_200(unk_0x1329891157A54C63()) != 1)
					{
						Local_66[unk_0x519AAFF77CC141DF() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_138(&(Local_55.f_9));
				if (func_137(&(Local_55.f_9)))
				{
					Local_66[unk_0x519AAFF77CC141DF() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_66[unk_0x519AAFF77CC141DF() /*3*/] = 4;
			
			case 4:
				func_195();
				break;
		}
		if (unk_0x1C7D9BFDF15A02B4())
		{
			switch (func_174())
			{
				case 0:
					if (func_6())
					{
						Local_55.f_0 = 1;
					}
					break;
				
				case 1:
					func_5();
					func_4();
					if (func_1())
					{
						Local_55.f_0 = 4;
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
	if (Local_55.f_7 >= 32)
	{
		if (func_3(Global_2451473.f_780.f_1))
		{
			return 1;
		}
	}
	if (Local_55.f_8 == 2)
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
	switch (Local_55.f_8)
	{
		case 0:
			if (!unk_0x250A8F68F67CA19A(Local_55.f_2) || Local_55.f_6 != -1)
			{
				Local_55.f_8 = 1;
			}
			break;
		
		case 1:
			Local_55.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
		{
			if (Local_55.f_6 == -1)
			{
				if (unk_0x236D8AD7EE179F46(Local_66[iVar0 /*3*/].f_1, 0))
				{
					Local_55.f_6 = iVar0;
				}
			}
			if (!unk_0x236D8AD7EE179F46(Local_55.f_1, 7))
			{
				if (unk_0x236D8AD7EE179F46(Local_66[iVar0 /*3*/].f_1, 1))
				{
					unk_0xF3148AAF69AF9CBC(&(Local_55.f_1), 7);
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
	
	if (!unk_0x250A8F68F67CA19A(Local_55.f_2))
	{
		if (func_175())
		{
			if (unk_0xFE1FE52DF6528507(1))
			{
				fVar5 = 250f;
				Var6 = { Local_55.f_3 };
				if (unk_0x236D8AD7EE179F46(Local_55.f_1, 8))
				{
					Var0 = { Global_2451473.f_780.f_1 };
					uVar3 = Global_2451473.f_780.f_4;
				}
				if (func_200(unk_0x1329891157A54C63()) == 7)
				{
					iVar12 = unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63());
					if (Global_1607808.f_77[iVar12 /*6002*/].f_674[0 /*24*/].f_10 > 0f)
					{
						Var6 = { Global_1607808.f_77[iVar12 /*6002*/].f_674[0 /*24*/].f_3 };
						Var9 = { Global_1607808.f_77[iVar12 /*6002*/].f_674[0 /*24*/].f_6 };
						fVar5 = Global_1607808.f_77[iVar12 /*6002*/].f_674[0 /*24*/].f_10;
						iVar4 = 1;
					}
					else if (Global_1607808.f_77[iVar12 /*6002*/].f_674[0 /*24*/].f_9 > 0f)
					{
						Var6 = { Global_1607808.f_77[iVar12 /*6002*/].f_674[0 /*24*/] };
						fVar5 = Global_1607808.f_77[iVar12 /*6002*/].f_674[0 /*24*/].f_9;
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
					if (unk_0x236D8AD7EE179F46(Local_55.f_1, 8) || func_136(Var6, fVar5, &Var0, &uVar3, Var13))
					{
						if (Local_55.f_7 >= 32)
						{
							Local_55.f_2 = unk_0x1C36154091840BC3(unk_0x133278BF98E621A4(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_55.f_2 = unk_0x1C36154091840BC3(unk_0x47340BA685DABDD9(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0xC24172029826A66F(unk_0x27BEFF6AE5D3664A(Local_55.f_2), uVar3);
					}
				}
				else if (unk_0x236D8AD7EE179F46(Local_55.f_1, 8) || func_7(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_55.f_7 >= 32)
					{
						Local_55.f_2 = unk_0x1C36154091840BC3(unk_0x133278BF98E621A4(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_55.f_2 = unk_0x1C36154091840BC3(unk_0x47340BA685DABDD9(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0xC24172029826A66F(unk_0x27BEFF6AE5D3664A(Local_55.f_2), uVar3);
				}
			}
		}
	}
	if (unk_0x250A8F68F67CA19A(Local_55.f_2))
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
			if (((!Global_2404607.f_1262 == *uParam0 || !Global_2404607.f_1262.f_1 == uParam0->f_1) || !Global_2404607.f_1262.f_2 == uParam0->f_2) || !Global_2404607.f_1265 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404607.f_1276 == uParam0->f_8 || !Global_2404607.f_1276.f_1 == uParam0->f_8.f_1) || !Global_2404607.f_1276.f_2 == uParam0->f_8.f_2) || !Global_2404607.f_1279 == uParam0->f_11) || !Global_2404607.f_1279.f_1 == uParam0->f_11.f_1) || !Global_2404607.f_1279.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404607.f_1276 == uParam0->f_8 || !Global_2404607.f_1276.f_1 == uParam0->f_8.f_1) || !Global_2404607.f_1276.f_2 == uParam0->f_8.f_2) || !Global_2404607.f_1279 == uParam0->f_11) || !Global_2404607.f_1279.f_1 == uParam0->f_11.f_1) || !Global_2404607.f_1279.f_2 == uParam0->f_11.f_2) || !Global_2404607.f_1282 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404607.f_1260 == 1)
		{
			if (unk_0x64AD45A6264810A8(Global_2404607.f_1269))
			{
				if (Global_2404607.f_1269 == unk_0x8F56512BDA9F6921())
				{
					if (unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Global_2404607.f_1266) < func_135())
					{
						return 0;
					}
				}
				else if (unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Global_2404607.f_1266) < func_135())
				{
					return 0;
				}
			}
			unk_0xC8A928440B390AEE();
			unk_0xA62C88D7C9B4A678();
			func_134();
		}
		Global_2404607.f_1260 = 0;
	}
	else if (unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Global_2404607.f_1266) > func_135())
	{
		Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
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
	unk_0xCF95B143971C4F42(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404607.f_1260)
	{
		unk_0xC8A928440B390AEE();
		unk_0xA62C88D7C9B4A678();
		func_134();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_133(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x1F47F3AAD5F03DD6())
		{
			Global_2404607.f_1283 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404607.f_1262 = { *uParam0 };
					Global_2404607.f_1265 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404607.f_1276 = { uParam0->f_8 };
					Global_2404607.f_1279 = { uParam0->f_11 };
					Global_2404607.f_1282 = 0f;
					Global_2404607.f_1262 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404607.f_1276 = { uParam0->f_8 };
					Global_2404607.f_1279 = { uParam0->f_11 };
					Global_2404607.f_1282 = uParam0->f_14;
					Global_2404607.f_1262 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_132(Var8.f_0, Var8.f_1);
			}
			Global_2404607.f_1261 = 1;
			Global_2404607.f_1260 = 1;
			Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
			Global_2404607.f_1266 = unk_0xD74C7D8D2E5E43D2();
			Global_2404607.f_1269 = unk_0x8F56512BDA9F6921();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404607.f_1260)
	{
		if (Global_2404607.f_1261 == 1)
		{
			if (unk_0x70666954168CD2BD(fVar4, fVar5, fVar6, fVar7) || unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Global_2404607.f_1267) > 5000)
			{
				Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
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
					func_113(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_112(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404607.f_1261 = 9;
				}
				else
				{
					Global_2404607.f_1261 = 2;
				}
			}
		}
		if (Global_2404607.f_1261 == 2)
		{
			if ((unk_0xC2EDA78529EAFBA4(Var11, Var14) || unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Global_2404607.f_1267) > 15000) || unk_0xE2A25F63F2F0B1C3(Var11, Var14) == 0)
			{
				Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
				if (uParam0->f_5 && !func_109(unk_0x1329891157A54C63(), 0))
				{
					Global_2404607.f_1261 = 3;
				}
				else
				{
					Global_2404607.f_1261 = 4;
				}
			}
			else if (unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Global_2404607.f_1271) > 7000)
			{
				func_108(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404607.f_1261 == 3)
		{
			if (func_107() || unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Global_2404607.f_1267) > 10000)
			{
				Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
				Global_2404607.f_1261 = 4;
			}
		}
		if (Global_2404607.f_1261 == 4)
		{
			if (unk_0x1F47F3AAD5F03DD6())
			{
				unk_0xC8A928440B390AEE();
				unk_0xA62C88D7C9B4A678();
			}
			else
			{
				iVar0 = 0;
				func_102();
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
					if (!unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1)
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
							if (unk_0x49A97C56053C2992(unk_0x1329891157A54C63(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
								Global_2404607.f_1261 = 5;
							}
							break;
						
						case 1:
							func_101(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x049B52BB1FD5F33A(unk_0x1329891157A54C63(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
								Global_2404607.f_1261 = 5;
							}
							break;
						
						case 2:
							if (unk_0x049B52BB1FD5F33A(unk_0x1329891157A54C63(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
								Global_2404607.f_1261 = 5;
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
					Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
					Global_2404607.f_1261 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x9F2D92E217E26959(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_101(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x9F823B36DB18181C(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x9F823B36DB18181C(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404607.f_1261 == 5)
		{
			if (func_42(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404607.f_1287.f_4)
				{
					Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
					Global_2404607.f_1261 = 6;
				}
				else
				{
					Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0x097CA9356FED843D(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404607.f_1261 = 9;
				}
			}
			else if (unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Global_2404607.f_1267) > 20000)
			{
				unk_0xC8A928440B390AEE();
				unk_0xA62C88D7C9B4A678();
				Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
				Global_2404607.f_1261 = 8;
			}
		}
		if (Global_2404607.f_1261 == 6)
		{
			iVar0 = 0;
			Global_2404607.f_1287 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_41(uParam0->f_4))
				{
					if (unk_0x59F36F53A82C2E72(unk_0xB3202EEA6EFADBA8(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_40(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x59F36F53A82C2E72(unk_0xB3202EEA6EFADBA8(Var8)))
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
			Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
			Global_2404607.f_1261 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x9F2D92E217E26959(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_101(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x9F823B36DB18181C(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x9F823B36DB18181C(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404607.f_1261 == 7)
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
							if (!unk_0x652D2EEEF1D3E62C(Global_2404607.f_1394[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_112(Global_2404607.f_1394[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404607.f_1394[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_38(Global_2404607.f_1394[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404607.f_1394[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0xE15A3D0C3294EAF3(Global_2404607.f_1394[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404607.f_1394[iVar17 /*3*/] };
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
				Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0x097CA9356FED843D(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404607.f_1261 = 9;
			}
			else if (unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), Global_2404607.f_1267) > 20000)
			{
				Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
				Global_2404607.f_1261 = 8;
			}
		}
		if (Global_2404607.f_1261 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_2404607.f_465))
				{
				}
			}
			else if (Global_2404607.f_1287.f_1)
			{
				func_9(uParam2, &(Global_2404607.f_1287.f_5));
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
				*(uParam2[0 /*3*/]) = { Global_2404607.f_1262 };
				func_11(uParam2[0 /*3*/], 0, bVar82, 0, 0, uParam0, uParam1);
			}
			Global_2404607.f_1267 = unk_0xD74C7D8D2E5E43D2();
			Global_2404607.f_1261 = 9;
		}
		if (Global_2404607.f_1261 == 9)
		{
			Global_2404607.f_1260 = 0;
			unk_0xC8A928440B390AEE();
			unk_0xA62C88D7C9B4A678();
			func_134();
			return 1;
		}
		Global_2404607.f_1266 = unk_0xD74C7D8D2E5E43D2();
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
						if (func_41(uParam5->f_4) || !unk_0x59F36F53A82C2E72(unk_0xB3202EEA6EFADBA8(Var64)))
						{
							iVar63 += 4;
						}
						break;
					
					case 1:
						Var64 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_40(uParam5->f_8, uParam5->f_11, 0f) || !unk_0x59F36F53A82C2E72(unk_0xB3202EEA6EFADBA8(Var64)))
						{
							iVar63 += 4;
						}
						break;
					
					case 2:
						Var64 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_40(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x59F36F53A82C2E72(unk_0xB3202EEA6EFADBA8(Var64)))
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
		func_113(&Var0, &uVar3, &Var4);
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
					if (unk_0x84426D0C9AE7A434(Var0, &uVar60, 0))
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
				if (unk_0x84426D0C9AE7A434(Var0, &uVar60, 0))
				{
					Var0.f_2 = uVar60;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404607.f_588 = 1;
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
			return unk_0xE15A3D0C3294EAF3(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_13(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	if (unk_0xBB86303CD9A09C9D(Param0, 0, uParam3, iParam4))
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
		if (fVar0 < 40f)
		{
			uVar1 = 2;
			uVar8 = 2;
			if ((iParam5 == 1 && !func_14(Global_2404607.f_478, &Param0, &uVar1, &uVar8, bParam6, 1)) || iParam5 == 0)
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
		func_16(&Var0, 0f, 0f, unk_0x3ECD26BA4F631EE2(0f, 360f));
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
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404607.f_1489[iVar0 /*3*/]) < fParam3)
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
		if (Global_2404607.f_344[iVar0 /*12*/].f_9 == 1)
		{
			if (func_25(*uParam0, &(Global_2404607.f_344[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					Var1 = { *uParam0 };
					func_19(&Var1, &(Global_2404607.f_344[iVar0 /*12*/]), 1036831949, 0, bParam2);
					if (func_18(&Var1, 0, 0))
					{
						Var1 = { *uParam0 };
						func_19(&Var1, &(Global_2404607.f_344[iVar0 /*12*/]), 1036831949, 1, bParam2);
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
				*uParam0 = { func_24(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404607.f_1488) * uParam1->f_8)), 0, fParam2, bParam3) };
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
				func_15(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404607.f_1488) * uParam1->f_8)), fParam2, bParam3);
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x340B0B7228EC1565(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x340B0B7228EC1565(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
		unk_0x6FF90B691E3204B1(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_112(Var1, Param3, fParam9, 0, 0))
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
				if (!unk_0xE15A3D0C3294EAF3(Var1, Param3, Param6, fParam9, 0, 1))
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
			return func_112(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404607.f_1488) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_38(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xE15A3D0C3294EAF3(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xE15A3D0C3294EAF3(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0xE15A3D0C3294EAF3(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xE15A3D0C3294EAF3(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
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
		if (Global_2404607.f_344[iVar0 /*12*/].f_9)
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
		if (Global_2406783[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2406783[iVar0 /*17*/].f_16))
			{
				if (func_25(*uParam0, &(Global_2406783[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2406783[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2406783[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_19(&Var1, &(Global_2406783[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_27(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_19(&Var1, &(Global_2406783[iVar0 /*17*/]), 1036831949, 1, 0);
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
	
	if (!Global_2404607.f_481)
	{
		if (!func_32(unk_0x1329891157A54C63(), 1))
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
				Var1 = { func_29(&(Global_2404607.f_39[iVar0 /*12*/])) };
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
		if (Global_2404607.f_39[iVar0 /*12*/].f_9)
		{
			if (func_25(Param0, &(Global_2404607.f_39[iVar0 /*12*/]), fParam3, 0, 0))
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
		if (Global_2404607.f_39[iVar0 /*12*/].f_9)
		{
			if (func_25(Param0, &(Global_2404607.f_39[iVar0 /*12*/]), fParam3, 0, 0))
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
	if (Global_1585045[iParam0 /*400*/] == -1)
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
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

int func_36(int iParam0)
{
	if (func_37(iParam0, 0, 1))
	{
		return Global_2414506[iParam0 /*255*/].f_1;
	}
	return 0;
}

int func_37(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA89AE5060232966A(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
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
	
	if (Global_2404607.f_1287 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x74E635CBC8C19DBD(&(Global_2404607.f_1287)))
			{
				case 0:
					if (uParam2->f_7 && Global_2404607.f_508.f_7 == 0)
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
							*(uParam0[0 /*3*/]) = { Global_2404607.f_1262 };
						}
						if (uParam1->f_5 && func_10(Global_2404607.f_465))
						{
							if (!Global_2404607.f_1287.f_4)
							{
								Global_2404607.f_1287.f_4 = 1;
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
						uParam0->f_10[0] = unk_0x3ECD26BA4F631EE2(0f, 360f);
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
		else if (unk_0x1F47F3AAD5F03DD6())
		{
			if (!unk_0x5EAD3E43077C70CD())
			{
				if (unk_0xCED69E07BBE11506())
				{
					Global_2404607.f_1287 = unk_0xE8AA9BEA35C324C1();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xA62C88D7C9B4A678();
				Global_2404607.f_1287.f_4 = 1;
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
		func_98(Global_2404607.f_508, &(Global_2404607.f_1287.f_30), &(Global_2404607.f_1287.f_63));
	}
	if (uParam2->f_7 && !Global_2404607.f_1287.f_3)
	{
		Global_2404607.f_1287.f_3 = 1;
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
	if (Global_2404607.f_1287 > 0)
	{
		if (uParam1->f_5 || unk_0x1F47F3AAD5F03DD6())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404607.f_1287)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404607.f_1287.f_2)
					{
						iVar4 = Global_2404607.f_1287.f_2 + 1;
					}
					if (iVar4 > (Global_2404607.f_1287 - 1))
					{
						iVar4 = (Global_2404607.f_1287 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xEDD3F9BBEF42DADF(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0xFF4790B9BEDA0A56(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x7F315704C570538C(iVar4);
					}
					else
					{
						unk_0x7FF48A5C948D87DD(iVar4, &iVar5);
					}
					func_47(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404607.f_1287.f_2 = iVar4;
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
			iVar4 = Global_2404607.f_1287;
		}
		if (Global_2404607.f_1287 == iVar4)
		{
			if (uParam1->f_5 && func_10(Global_2404607.f_465))
			{
				if (Global_2404607.f_1287.f_1)
				{
					func_9(uParam0, &(Global_2404607.f_1287.f_5));
					func_46(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404607.f_1262 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x3ECD26BA4F631EE2(0f, 360f);
					func_46(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404607.f_1287.f_1)
			{
				func_9(uParam0, &(Global_2404607.f_1287.f_5));
				func_46(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x2E0A9E3291F398E3(0, Global_2404607.f_1287);
				unk_0xEDD3F9BBEF42DADF(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_43(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_46(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404607.f_1262 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x3ECD26BA4F631EE2(0f, 360f);
					func_46(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404607.f_1262 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0x3ECD26BA4F631EE2(0f, 360f);
				func_46(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404607.f_1262 };
		if (uParam1->f_5 && func_10(Global_2404607.f_465))
		{
			if (!Global_2404607.f_1287.f_4)
			{
				Global_2404607.f_1287.f_4 = 1;
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
		uParam0->f_10[0] = unk_0x3ECD26BA4F631EE2(0f, 360f);
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
	while (iVar0 < Global_2407749[iVar4])
	{
		if (func_44(Var1, &(Global_2406920[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_20(&Var1, Global_2406920[iVar4 /*92*/][iVar0 /*7*/], Global_2406920[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2406920[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2407749[8])
	{
		if (func_44(Var1, &(Global_2406920[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_20(&Var1, Global_2406920[iVar4 /*92*/][iVar0 /*7*/], Global_2406920[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2406920[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
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
	return unk_0xE15A3D0C3294EAF3(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_45(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2407759[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2407759[1])
	{
		if (Param0.f_0 < Global_2407763[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2407759[2])
	{
		if (Param0.f_0 < Global_2407763[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2407763[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2407763[3])
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
			Global_2404607.f_1394[(3 - iVar0) /*3*/] = { Global_2404607.f_1394[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404607.f_1394[0 /*3*/] = { Param0 };
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
		if (Global_2404607.f_465 == 1)
		{
			if (unk_0xB9AA84B14E04BC20((Global_2404607.f_478.f_2 - Param0.f_2)) < 25f)
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
		if (func_32(unk_0x1329891157A54C63(), 1) || func_97(unk_0x1329891157A54C63()))
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
		if (!func_96(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x948D03A167A180CF(unk_0x81873881071CD9FE(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x948D03A167A180CF(unk_0x81873881071CD9FE(), Param0, 20f))
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
		if (!func_95(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (func_88(Param0, fParam3, uParam4->f_15, func_94(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 64;
			iVar7 += 128;
		}
		else
		{
			iVar9 = Global_2404607.f_1;
		}
	}
	else if (!func_82(Param0, 25f, unk_0x1329891157A54C63(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_81(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 128;
			iVar7 += 64;
		}
		else if (!func_81(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2404607.f_607)
		{
			if (func_28(Global_2404607.f_478))
			{
				if ((!func_27(&Param0, 0, 0, 0) && !func_18(&Param0, 0, 0)) && !func_80(&Param0, 0))
				{
					iVar7 += 512;
				}
			}
			else if ((!func_18(&Param0, 0, 0) && !func_80(&Param0, 0)) && !func_17(Param0, 0.5f))
			{
				iVar7 += 512;
			}
		}
		else
		{
			iVar7 += 512;
		}
	}
	else if (!func_79(Param0, 2.5f, 3))
	{
		iVar7 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_78(unk_0x1329891157A54C63()) && func_76(unk_0x1329891157A54C63())))
		{
			if (!func_75(&Param0, &(Global_2404607.f_1287.f_63), 0, 1065353216))
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
		if (!func_76(unk_0x1329891157A54C63()))
		{
			if (!func_74(Param0, &(Global_2404607.f_1287.f_30), &(Global_2404607.f_1287.f_63), 1073741824))
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
	if (func_73(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_73(Param0))
			{
				if (func_10(Global_2404607.f_465))
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
		if (func_72(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404607.f_39.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x59F36F53A82C2E72(unk_0xB3202EEA6EFADBA8(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x59F36F53A82C2E72(unk_0xB3202EEA6EFADBA8(Param0)))
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
	else if (func_71(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var13.f_2 = 1176256410;
	bVar21 = false;
	bVar22 = false;
	iVar12 = 0;
	while (iVar12 < 3)
	{
		if (iVar7 >= Global_2404607.f_1287.f_5[iVar12 /*8*/])
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
						fVar0 = func_63(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					else
					{
						fVar0 = func_63(Param0, Global_2404607.f_1262, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar21 = true;
				}
				if ((func_10(Global_2404607.f_465) && iVar7 == Global_2404607.f_1287.f_5[iVar12 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar22)
					{
						fVar2 = func_61(Param0);
						bVar22 = true;
					}
					if (fVar2 < Global_2404607.f_1287.f_5[iVar12 /*8*/].f_2)
					{
						Var13.f_4 = { Param0 };
						Var13.f_7 = fParam3;
						Var13.f_0 = iVar7;
						Var13.f_1 = fVar0;
						Var13.f_2 = fVar2;
						func_60(Var13, iVar12);
						Global_2404607.f_1287.f_1 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404607.f_1287.f_5[iVar12 /*8*/] || (iVar7 == Global_2404607.f_1287.f_5[iVar12 /*8*/] && fVar0 > Global_2404607.f_1287.f_5[iVar12 /*8*/].f_1))
				{
					Var13.f_4 = { Param0 };
					Var13.f_7 = fParam3;
					Var13.f_0 = iVar7;
					Var13.f_1 = fVar0;
					func_60(Var13, iVar12);
					Global_2404607.f_1287.f_1 = 1;
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
					fVar5 = func_59(Param0, fVar1, 1, 1, 0, -1, 1);
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
				if (iVar7 > Global_2404607.f_1287.f_5[iVar12 /*8*/] || (iVar7 == Global_2404607.f_1287.f_5[iVar12 /*8*/] && fVar3 > Global_2404607.f_1287.f_5[iVar12 /*8*/].f_3))
				{
					Var13.f_4 = { Param0 };
					Var13.f_7 = fParam3;
					Var13.f_0 = iVar7;
					Var13.f_3 = fVar3;
					func_60(Var13, iVar12);
					Global_2404607.f_1287.f_1 = 1;
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
			if (!iVar7 == unk_0x1329891157A54C63() || iParam5 == 1)
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
					if (unk_0xCCFDB2B968281FE8(iVar7) == unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))
					{
						if (!unk_0xCCFDB2B968281FE8(iVar7) == -1 || !func_32(unk_0x1329891157A54C63(), 1))
						{
							bVar3 = true;
						}
					}
				}
				if (bVar3)
				{
					if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar7) || !bParam6)
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
							fVar1 = unk_0x0D6E79537424BACE(Param0, Var4, 1);
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
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

int func_51(int iParam0)
{
	if (unk_0x3C965174F280226D(unk_0xE495E987CB2BE7EF(iParam0)) || Global_2414506[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0)
{
	if (func_37(iParam0, 0, 1))
	{
		if (!func_57(iParam0))
		{
			if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iParam0))
			{
				if (!unk_0xCCFDB2B968281FE8(iParam0) == unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))
				{
					if (func_33(unk_0x1329891157A54C63(), 1))
					{
						if (!func_56(unk_0xCCFDB2B968281FE8(iParam0), unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xCCFDB2B968281FE8(iParam0) == -1 && unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1)
				{
					if (!func_33(unk_0x1329891157A54C63(), 1))
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
	if (func_55(unk_0x1329891157A54C63(), iParam0))
	{
		return 1;
	}
	Global_2450501 = { func_54(iParam0) };
	if (unk_0x5762EE910D467202(&Global_2450501))
	{
		return 1;
	}
	return 0;
}

struct<13> func_54(var uParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(uParam0, &Var0, 13);
	return Var0;
}

int func_55(int iParam0, var uParam1)
{
	if (unk_0x80622F5ED5957337())
	{
		Global_2450501 = { func_54(iParam0) };
		Global_2450514 = { func_54(uParam1) };
		if (unk_0x464883E45616A088(&Global_2450501))
		{
			if (unk_0x464883E45616A088(&Global_2450514))
			{
				unk_0xEF956A1EC046AA4A(&Global_2450431, 35, &Global_2450501);
				unk_0xEF956A1EC046AA4A(&Global_2450466, 35, &Global_2450514);
				if (Global_2450431 == Global_2450466)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_56(int iParam0, int iParam1, int iParam2)
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
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 0);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 1);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 2);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 4);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 5);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 6);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 8);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 9);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 10);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 12);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 13);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 14);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (func_109(iParam0, 0))
	{
		return 1;
	}
	if (func_58())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

float func_59(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_37(unk_0x1329891157A54C63(), 1, 1))
		{
			if (!unk_0x29AFA2493D7C23D0())
			{
				if (unk_0x547A2AA158CA2804(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0));
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
			if (!func_109(iVar1, 0) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1329891157A54C63()))
				{
					if (func_51(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xCCFDB2B968281FE8(iVar1) != unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))) || unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0xCCFDB2B968281FE8(iVar1) != iParam7 || unk_0xCCFDB2B968281FE8(iVar1) == -1)
						{
							if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iVar1), 0));
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

void func_60(struct<8> Param0, int iParam8)
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404607.f_1287.f_5[iParam8 /*8*/] };
	Global_2404607.f_1287.f_5[iParam8 /*8*/] = { Param0 };
	if (iParam8 < 2)
	{
		func_60(Var0, iParam8 + 1);
	}
}

float func_61(struct<3> Param0)
{
	var uVar0;
	
	return func_62(Param0, &(Global_2404607.f_39), &uVar0);
}

float func_62(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404607.f_1488) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_63(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9)
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
	fVar0 = func_48(func_49(Param0, 1, 0, 0, 1), 0f, func_70(), func_68(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar0 = func_48(func_66(Param0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar4 = 100f;
	if (unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1 && !func_32(unk_0x1329891157A54C63(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_48(func_65(Param0, unk_0x1329891157A54C63(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bParam7)
	{
		if (func_64(Param0, &fVar2, &fVar3))
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
		fVar0 = func_48(unk_0x2A488C176D52CCA5(Global_2404607.f_478, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_64(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x9F67FF2DB6102928(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0xC1D4DBFBE3379308(uVar3))
	{
		unk_0xE9D68335D713DE1C(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0xB9AA84B14E04BC20((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_65(struct<3> Param0, int iParam3, int iParam4)
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
				if (unk_0xCCFDB2B968281FE8(iVar3) != unk_0xCCFDB2B968281FE8(iParam3) || (unk_0xCCFDB2B968281FE8(iVar3) == -1 && unk_0xCCFDB2B968281FE8(iParam3) == -1))
				{
					if (Global_2411434.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2411434.f_130[iVar2 /*3*/], Param0);
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

float func_66(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x382F30F9319DA363(unk_0x81873881071CD9FE(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x86CCCD2FAE9D5E65(uVar6[iVar2]))
		{
			if (!unk_0x930F8FBB8E9537CC(uVar6[iVar2]))
			{
				if (func_67(uVar6[iVar2]))
				{
					Var3 = { unk_0xB6AE0DAE06D56288(uVar6[iVar2], 1) };
					fVar1 = unk_0x0D6E79537424BACE(Param0, Var3, 1);
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

int func_67(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x88594869E178AFA2(uParam0);
	switch (unk_0xD273E693E19632C9(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0xD273E693E19632C9(uVar0, Global_1574182[unk_0x1329891157A54C63()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1585045[unk_0x1329891157A54C63() /*400*/] == 0)
	{
		iVar1 = unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0xD273E693E19632C9(uVar0, Global_1573893[iVar1]))
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

float func_68()
{
	if (func_69())
	{
		if ((unk_0x1699D7B95446F15C(Global_2404607.f_39.f_67) || unk_0xE083914AB72DD7CE(Global_2404607.f_39.f_67)) || Global_2404607.f_39.f_67 == joaat("rhino"))
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

int func_69()
{
	if (Global_2404607.f_39.f_65 && !Global_2404607.f_39.f_292)
	{
		if (!func_57(unk_0x1329891157A54C63()))
		{
			return 1;
		}
	}
	return 0;
}

float func_70()
{
	if (func_69())
	{
		if ((unk_0x1699D7B95446F15C(Global_2404607.f_39.f_67) || unk_0xE083914AB72DD7CE(Global_2404607.f_39.f_67)) || Global_2404607.f_39.f_67 == joaat("rhino"))
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

int func_71(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x8201B8E256A0E8AB(Param0, fParam7)) || (fVar0 > 0f && unk_0xBAE0934DE3A0C108(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x2EBFC992EF940536(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x2EBFC992EF940536(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_72(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404607.f_39.f_55)
	{
		if (unk_0x59F36F53A82C2E72(Global_2404607.f_39.f_56))
		{
			if (!unk_0xD58E02A689955E29(Param0))
			{
				uVar0 = unk_0xB3202EEA6EFADBA8(Param0);
				if (unk_0x59F36F53A82C2E72(uVar0))
				{
					iVar1 = unk_0xBAFE547FFC6CFC4C(uVar0);
					if (!iVar1 == Global_2404607.f_39.f_57)
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

int func_73(struct<3> Param0)
{
	switch (Global_2404607.f_1283)
	{
		case 0:
			return func_112(Param0, Global_2404607.f_1262, Global_2404607.f_1265, 0, 0);
			break;
		
		case 1:
			return func_38(Param0, Global_2404607.f_1276, Global_2404607.f_1279, 0, 0);
			break;
		
		case 2:
			return unk_0xE15A3D0C3294EAF3(Param0, Global_2404607.f_1276, Global_2404607.f_1279, Global_2404607.f_1282, 0, 1);
			break;
	}
	return 0;
}

int func_74(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0xE15A3D0C3294EAF3(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_75(var uParam0, var uParam1, bool bParam2, float fParam3)
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

int func_76(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_77(iParam0))
			{
				if (Global_1585045[iParam0 /*400*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_77(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_177 != 0;
}

int func_78(int iParam0)
{
	if (func_33(iParam0, 1))
	{
		if (Global_1585045[iParam0 /*400*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_79(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404607.f_1394[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_80(var uParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (Global_2404607.f_543 > 0f)
	{
		fVar3 = unk_0x2A488C176D52CCA5(*uParam0, Global_2404607.f_540);
		if (fVar3 < Global_2404607.f_543)
		{
			if (bParam1)
			{
				Var0 = { *uParam0 };
				func_15(&Var0, Global_2404607.f_540, Global_2404607.f_543, 1036831949, 0);
				if (func_80(&Var0, 0))
				{
					Var0 = { *uParam0 };
					func_15(&Var0, Global_2404607.f_540, Global_2404607.f_543, 1036831949, 1);
				}
				*uParam0 = { Var0 };
			}
			return 1;
		}
	}
	return 0;
}

int func_81(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_37(unk_0x1329891157A54C63(), 1, 1))
		{
			if (!unk_0x29AFA2493D7C23D0())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0D6E79537424BACE(func_50(unk_0x1329891157A54C63()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x547A2AA158CA2804(Param0, fParam3))
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
			if (!func_109(iVar1, 0) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1329891157A54C63()))
				{
					if ((func_51(iVar1) || !bParam10) && !Global_2414506[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0xCCFDB2B968281FE8(iVar1) == unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xCCFDB2B968281FE8(iVar1) != unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))) || unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0x0D6E79537424BACE(func_50(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xCCFDB2B968281FE8(iVar1) != iParam8 || unk_0xCCFDB2B968281FE8(iVar1) == -1)
						{
							if (unk_0x0D6E79537424BACE(func_50(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
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

int func_82(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_87(Param0, fParam3, iParam4, iParam5) || func_83(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_83(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_84(Param0, Global_2411434.f_293[iVar0 /*3*/], Global_2411434.f_390[iVar0], Global_2411434.f_423[iVar0], 1036831949))
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

int func_84(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_86(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_16(&Var0, 0f, 0f, uParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_85(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0xB9AA84B14E04BC20((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0xB9AA84B14E04BC20((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0xB9AA84B14E04BC20((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0xE15A3D0C3294EAF3(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_85(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	unk_0x01C5E7A27762AF21(iParam0, fParam1, fParam2);
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

float func_86(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_85(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	return (unk_0x71D93B57D07F9804((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f)))) + fParam1);
}

int func_87(struct<3> Param0, float fParam3, int iParam4, int iParam5)
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
				if (Global_2411434.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2411434.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_50(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2411434.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2411434.f_130[iVar0 /*3*/], Param0) < fParam3)
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

int func_88(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404607.f_1 = 0;
	if (!func_82(Param0, 0.5f, unk_0x1329891157A54C63(), 0, 0))
	{
		Global_2404607.f_1++;
		if (bParam5)
		{
			if (func_133(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404607.f_1 = (Global_2404607.f_1 + Global_2404607);
				if (!func_93(Param0, fParam12))
				{
					Global_2404607.f_1++;
					if (!func_92(Param0))
					{
						Global_2404607.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404607.f_1 = (Global_2404607.f_1 + Global_2404607);
			}
		}
		else if (!bParam4)
		{
			if (func_133(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404607.f_1 = (Global_2404607.f_1 + Global_2404607);
				if (!func_93(Param0, fParam12))
				{
					Global_2404607.f_1++;
					if (!func_89(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404607.f_1++;
						if (!func_92(Param0))
						{
							Global_2404607.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404607.f_1 = (Global_2404607.f_1 + Global_2404607);
			}
		}
		else if (func_133(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
		{
			Global_2404607.f_1 = (Global_2404607.f_1 + Global_2404607);
			if (!func_93(Param0, fParam12))
			{
				Global_2404607.f_1++;
				if (!func_89(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404607.f_1++;
					if (!func_92(Param0))
					{
						Global_2404607.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404607.f_1 = (Global_2404607.f_1 + Global_2404607);
		}
	}
	return 0;
}

int func_89(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x1329891157A54C63() == iVar1)
		{
			if ((func_37(iVar1, 1, 1) && func_51(iVar1)) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
			{
				if (!func_91(unk_0x1329891157A54C63(), iVar1, -2, 0))
				{
					if (func_90(func_50(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_90(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0xE15A3D0C3294EAF3(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_91(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xCCFDB2B968281FE8(iParam0) == -1 && unk_0xCCFDB2B968281FE8(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xCCFDB2B968281FE8(iParam0) == unk_0xCCFDB2B968281FE8(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xCCFDB2B968281FE8(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xCCFDB2B968281FE8(iParam0) == iParam2;
	}
	return unk_0xCCFDB2B968281FE8(iParam0) == iParam2;
}

int func_92(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (func_33(unk_0x1329891157A54C63(), 1))
	{
		if (Global_1607808.f_31467 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1607808.f_31467)
			{
				if (Global_1607808.f_31468[iVar0 /*36*/].f_7 != 0)
				{
					func_85(Global_1607808.f_31468[iVar0 /*36*/].f_7, &Var1, &Var4, 1086324736, 1080033280, 1077936128);
					fVar7 = (unk_0xB9AA84B14E04BC20((Var1.f_1 - Var4.f_1)) * 0.5f);
					fVar8 = (unk_0xB9AA84B14E04BC20((Var1.f_0 - Var4.f_0)) * 0.5f);
					fVar9 = (unk_0xB9AA84B14E04BC20((Var1.f_2 - Var4.f_2)) * 0.5f);
					fVar10 = ((fVar7 * fVar7) + (fVar8 * fVar8));
					fVar10 = (fVar10 + fVar9);
					if (unk_0xB7A628320EFF8E47(Global_1607808.f_31468[iVar0 /*36*/], Param0) < fVar10)
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

int func_93(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_37(iVar1, 1, 1) && func_51(iVar1)) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
		{
			if ((unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1 && unk_0xCCFDB2B968281FE8(iVar1) == -1) && !func_32(unk_0x1329891157A54C63(), 1))
			{
				return 0;
			}
			else if ((unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1 && !unk_0x1329891157A54C63() == iVar1) || !func_91(unk_0x1329891157A54C63(), iVar1, -2, 0))
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

int func_94(int iParam0)
{
	if ((Global_2404607.f_465 == 9 || Global_2404607.f_465 == 9) || (Global_2404607.f_465 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_95(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x1329891157A54C63() != iVar1) || iParam8 == 0)
		{
			if (func_37(iVar1, bParam4, bParam5))
			{
				if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
				{
					if (!bParam7 || (!unk_0x5FEB513A4402FD59(unk_0xE495E987CB2BE7EF(iVar1)) && func_51(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) != unk_0xCCFDB2B968281FE8(iVar1))) || unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1)
						{
							if (((unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1 && iParam9) && bParam6) && func_53(iVar1))
							{
							}
							else if (unk_0x86CCCD2FAE9D5E65(unk_0xE495E987CB2BE7EF(iVar1)))
							{
								if (unk_0x0D6E79537424BACE(func_50(iVar1), Param0, 1) < fParam3)
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

int func_96(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_37(iVar1, 1, 1))
			{
				if ((!func_109(iVar1, 0) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1)) && iVar1 != unk_0x1329891157A54C63())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0xCCFDB2B968281FE8(iVar1) == -1)
						{
							if (unk_0xCCFDB2B968281FE8(iVar1) == unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0xCCFDB2B968281FE8(iVar1) == iVar3)
					{
						if (unk_0x0D6E79537424BACE(func_50(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
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

int func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1606167[iVar0 /*12*/] != -1;
	}
	return 0;
}

void func_98(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0x236D8AD7EE179F46(Global_2359718[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359718[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359718[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359718[iVar1 /*26*/].f_6.f_2;
					func_100(&Var2, uParam3, iVar0);
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
				func_99(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_99(var uParam0, var uParam1, int iParam2)
{
	Global_2408593 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_99(&Global_2408593, uParam1, iParam2 + 1);
	}
}

void func_100(var uParam0, var uParam1, int iParam2)
{
	Global_2408589 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_100(&Global_2408589, uParam1, iParam2 + 1);
	}
}

void func_101(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
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

void func_102()
{
	func_106();
	func_105();
	func_104();
	func_103();
}

void func_103()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404607.f_1287.f_63[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_104()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404607.f_1287.f_30[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_105()
{
	struct<8> Var0;
	int iVar8;
	
	Var0.f_2 = 1176256410;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		Global_2404607.f_1287.f_5[iVar8 /*8*/] = { Var0 };
		iVar8++;
	}
}

void func_106()
{
	struct<5> Var0;
	
	Var0.f_2 = -1;
	Global_2404607.f_1287 = { Var0 };
}

var func_107()
{
	return Global_1310987.f_4;
}

void func_108(var uParam0, var uParam1)
{
	func_134();
	func_132(uParam0, uParam1);
}

bool func_109(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_110(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_110(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_111();
	}
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_111()
{
	return Global_1312729;
}

bool func_112(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_113(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404607.f_1130 > 0 && func_131(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_114(uParam0, uParam1, uParam2);
	}
}

void func_114(var uParam0, var uParam1, var uParam2)
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
		if (func_130(uParam0, 1))
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
	Global_2408603.f_162 = 0;
	Global_2408603.f_163 = 0;
	Global_2408603.f_164 = -99;
	Global_2408603.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2408603[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2408603.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0x9F67FF2DB6102928(*uParam0, iVar0, &uVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xC1D4DBFBE3379308(iVar8))
		{
			unk_0xE9D68335D713DE1C(iVar8, &Var1);
			bVar12 = false;
			if (Global_2408603.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2408603.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x0A19925AC931BA81(iVar8)) || unk_0x4CEA9503BA068F3C(iVar8))
			{
				unk_0xABBEAD184B4628FB(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, *uParam0) > uParam2->f_4)
				{
					if (!func_80(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_129(Var1))
									{
										if (Var1.f_2 >= (uParam0->f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
										{
											if (Var1.f_2 <= (uParam0->f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
											{
												if (func_128(Var1, uParam2) || uParam2->f_33 >= 2)
												{
													if ((uParam2->f_48 && !func_130(&Var1, 0)) || uParam2->f_48 == 0)
													{
														Var1 = { func_126(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
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
																if ((uParam2->f_12 && !func_121(Var1, uVar4, uParam2->f_34, unk_0x1329891157A54C63(), 0, 1)) || !uParam2->f_12)
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
																				if (func_133(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																			}
																			else if (func_133(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0) && !func_120(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																						iVar22 = func_119(Var1, uParam2->f_54, &fVar23);
																					}
																					if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																					{
																						if (uParam2->f_52)
																						{
																							if (iVar22 < uParam2->f_53)
																							{
																								iVar16 = 0;
																								while (iVar16 < Global_2408603.f_162)
																								{
																									Global_2408603[iVar16 /*3*/] = { 0f, 0f, 0f };
																									Global_2408603.f_121[iVar16] = 0f;
																									iVar16++;
																								}
																								Global_2408603.f_162 = 0;
																								uParam2->f_53 = iVar22;
																							}
																						}
																						if (uParam2->f_30)
																						{
																							if (Global_2408603.f_162 == 0)
																							{
																								Global_2408603[0 /*3*/] = { Var1 };
																								Global_2408603.f_121[0] = uVar4;
																							}
																							else
																							{
																								iVar16 = 0;
																								while (iVar16 < Global_2408603.f_162 + 1)
																								{
																									if (iVar16 < 40)
																									{
																										if (unk_0xB7A628320EFF8E47(Var1, *uParam0) < unk_0xB7A628320EFF8E47(Global_2408603[iVar16 /*3*/], *uParam0))
																										{
																											func_118(Var1, uVar4, iVar16);
																											iVar16 = Global_2408603.f_162 + 1;
																										}
																									}
																									iVar16++;
																								}
																							}
																							Global_2408603.f_162++;
																							if (Global_2408603.f_162 >= 5)
																							{
																								if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																								{
																									iVar0 = 100;
																								}
																								else if (Global_2408603.f_162 == 40)
																								{
																									iVar0 = 100;
																								}
																							}
																						}
																						else
																						{
																							Global_2408603[Global_2408603.f_162 /*3*/] = { Var1 };
																							Global_2408603.f_121[Global_2408603.f_162] = uVar4;
																							Global_2408603.f_162++;
																							if (func_128(Var1, uParam2))
																							{
																								Global_2408603.f_163++;
																							}
																							if (Global_2408603.f_162 >= 10)
																							{
																								if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																								{
																									iVar0 = 100;
																								}
																								else if (Global_2408603.f_162 == 40)
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
				if (Global_2408603.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2408603[0 /*3*/] };
						*uParam1 = Global_2408603.f_121[0];
						return;
					}
					else
					{
						if (Global_2408603.f_163 > 0 && !Global_2408603.f_163 == Global_2408603.f_162)
						{
							func_116(0, uParam2);
						}
						iVar24 = unk_0x2E0A9E3291F398E3(0, Global_2408603.f_162);
						Var25 = { Global_2408603[0 /*3*/] };
						uVar28 = Global_2408603.f_121[0];
						Global_2408603[0 /*3*/] = { Global_2408603[iVar24 /*3*/] };
						Global_2408603.f_121[0] = Global_2408603.f_121[iVar24];
						Global_2408603[iVar24 /*3*/] = { Var25 };
						Global_2408603.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2408603[0 /*3*/] };
						*uParam1 = Global_2408603.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_114(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x2E0A9E3291F398E3((1 + iVar15), (40 + iVar15));
						unk_0x9F7E94EEF720E913(*uParam0, iVar0, &Var1, &uVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_126(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						uVar32 = uVar4;
						if (func_14(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), 1, 1) || func_130(&Var29, 1))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = uVar32;
								func_114(uParam0, uParam1, uParam2);
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
				func_114(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_115(&Global_1312061, uParam0, uParam1, unk_0x1329891157A54C63());
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2408603.f_164 = iVar8;
	}
}

void func_115(var uParam0, var uParam1, var uParam2, int iParam3)
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
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), func_50(iParam3));
		if (fVar1 < fVar0)
		{
			if (!func_82(*(uParam0[iVar2 /*4*/]), 5f, iParam3, 0, 0))
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

void func_116(int iParam0, var uParam1)
{
	if (!func_128(Global_2408603[iParam0 /*3*/], uParam1))
	{
		Global_2408603.f_162 = (Global_2408603.f_162 - 1);
		func_117(iParam0);
		if (Global_2408603.f_162 > Global_2408603.f_163)
		{
			func_116(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_116(iParam0 + 1, uParam1);
	}
}

void func_117(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2408603[iParam0 /*3*/] = { Global_2408603[iParam0 + 1 /*3*/] };
			Global_2408603.f_121[iParam0] = Global_2408603.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_118(struct<3> Param0, var uParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2408603[iParam4 /*3*/] };
	uVar3 = Global_2408603.f_121[iParam4];
	Global_2408603[iParam4 /*3*/] = { Param0 };
	Global_2408603.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2408603.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_118(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_119(struct<3> Param0, float fParam3, float fParam4)
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

int func_120(struct<3> Param0, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x1329891157A54C63() != iVar1) || iParam9 == 0)
		{
			if (func_37(iVar1, bParam5, bParam6))
			{
				if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
				{
					if (!bParam8 || (!unk_0x5FEB513A4402FD59(unk_0xE495E987CB2BE7EF(iVar1)) && func_51(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) != unk_0xCCFDB2B968281FE8(iVar1))) || unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1)
						{
							if (((unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1 && iParam10) && bParam7) && func_53(iVar1))
							{
							}
							else if (unk_0x86CCCD2FAE9D5E65(unk_0xE495E987CB2BE7EF(iVar1)))
							{
								if (func_84(func_50(iVar1), Param0, uParam3, iParam4, 1036831949))
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

int func_121(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_125(Param0, uParam3, iParam4, iParam5, iParam6) || func_122(Param0, uParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_122(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_124(Param0, iParam4, Global_2411434.f_293[iVar0 /*3*/], Global_2411434.f_423[iVar0]))
			{
				if (func_123(Param0, uParam3, iParam4, Global_2411434.f_293[iVar0 /*3*/], Global_2411434.f_390[iVar0], Global_2411434.f_423[iVar0]))
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

int func_123(struct<3> Param0, var uParam3, int iParam4, struct<3> Param5, var uParam8, int iParam9)
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
	
	if (func_84(Param0, Param5, uParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_85(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0xB9AA84B14E04BC20((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0xB9AA84B14E04BC20((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0xB9AA84B14E04BC20((Var17.f_2 - Var14.f_2));
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
		if (func_84(Var1[iVar0 /*3*/], Param5, uParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_124(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_86(iParam3, 1008981770);
	fVar1 = func_86(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_125(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
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
				if (Global_2411434.f_260[iVar0])
				{
					if (func_84(Global_2411434.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_84(func_50(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2411434.f_260[iVar0])
			{
				if (func_84(Global_2411434.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_37(iVar1, 0, 1))
			{
				if (func_84(func_50(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_126(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_127(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xABBEAD184B4628FB(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0xDA40F239F50BE0C4(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
				func_85(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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
		if (!func_127(Param0, *uParam3, Param6))
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
	Var0 = { unk_0x957F1AE07A974C5E(Param0, *uParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x5B2858B4CEB420CF(Param0, *uParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_85(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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

int func_127(struct<3> Param0, var uParam3, struct<3> Param4)
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

int func_128(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_112(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
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
				if (unk_0xE15A3D0C3294EAF3(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_129(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_45(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2408471[iVar1])
	{
		if (func_44(Param0, &(Global_2407768[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408471[8])
	{
		if (func_44(Param0, &(Global_2407768[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_130(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404607.f_22.f_16)
	{
		switch (Global_2404607.f_22.f_15)
		{
			case 0:
				if (func_112(*uParam0, Global_2404607.f_22.f_8, Global_2404607.f_22.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_38(*uParam0, Global_2404607.f_22.f_8, Global_2404607.f_22.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xE15A3D0C3294EAF3(*uParam0, Global_2404607.f_22.f_8, Global_2404607.f_22.f_11, Global_2404607.f_22.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_24(*uParam0, Global_2404607.f_22.f_8, Global_2404607.f_22.f_11, Global_2404607.f_22.f_14, Global_2404607.f_22.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_131(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2404607.f_1130 > 0)
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
			if (func_130(uParam0, 1))
			{
			}
		}
		Global_2408603.f_162 = 0;
		Global_2408603.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2408603[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2408603.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404607.f_1130)
		{
			Var1 = { Global_2404607.f_1131[iVar0 /*4*/] };
			uVar4 = Global_2404607.f_1131[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, *uParam0, uParam0->f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_121(Var1, uVar4, uParam2->f_34, unk_0x1329891157A54C63(), 0, 1)) || !uParam2->f_12)
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
									if (func_133(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_133(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0) && !func_120(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
											iVar11 = func_119(Var1, uParam2->f_54, &fVar12);
										}
										if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
										{
											if (uParam2->f_52)
											{
												if (iVar11 < uParam2->f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2408603.f_162)
													{
														Global_2408603[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2408603.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2408603.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2408603.f_162 == 0)
												{
													Global_2408603[0 /*3*/] = { Var1 };
													Global_2408603.f_121[0] = uVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2408603.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, *uParam0) < unk_0xB7A628320EFF8E47(Global_2408603[iVar5 /*3*/], *uParam0))
															{
																func_118(Var1, uVar4, iVar5);
																iVar5 = Global_2408603.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2408603.f_162++;
												if (Global_2408603.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404607.f_1130;
													}
													else if (Global_2408603.f_162 == 40)
													{
														iVar0 = Global_2404607.f_1130;
													}
												}
											}
											else
											{
												Global_2408603[Global_2408603.f_162 /*3*/] = { Var1 };
												Global_2408603.f_121[Global_2408603.f_162] = uVar4;
												Global_2408603.f_162++;
												if (Global_2408603.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404607.f_1130;
													}
													else if (Global_2408603.f_162 == 40)
													{
														iVar0 = Global_2404607.f_1130;
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
		if (Global_2408603.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2408603[0 /*3*/] };
				*uParam1 = Global_2408603.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2408603.f_163 > 0 && !Global_2408603.f_163 == Global_2408603.f_162)
				{
					func_116(0, uParam2);
				}
				iVar13 = unk_0x2E0A9E3291F398E3(0, Global_2408603.f_162);
				Var14 = { Global_2408603[0 /*3*/] };
				uVar17 = Global_2408603.f_121[0];
				Global_2408603[0 /*3*/] = { Global_2408603[iVar13 /*3*/] };
				Global_2408603.f_121[0] = Global_2408603.f_121[iVar13];
				Global_2408603[iVar13 /*3*/] = { Var14 };
				Global_2408603.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2408603[0 /*3*/] };
				*uParam1 = Global_2408603.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_131(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_114(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_132(var uParam0, var uParam1)
{
	unk_0x2800209132B51982(uParam0, uParam1, 0.1f);
	Global_2404607.f_1270 = unk_0x8F56512BDA9F6921();
	Global_2404607.f_1268 = 1;
	Global_2404607.f_1271 = unk_0xD74C7D8D2E5E43D2();
}

int func_133(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404607 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x8201B8E256A0E8AB(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xBAE0934DE3A0C108(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xBAE0934DE3A0C108(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2EBFC992EF940536(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam13)
	{
		if (unk_0x7781EEE3B32C0EBF(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404607++;
	if (fParam14 > 0f)
	{
		if (func_95(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_81(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404607++;
	return 1;
}

void func_134()
{
	if (Global_2404607.f_1268)
	{
		if (unk_0x8F56512BDA9F6921() == Global_2404607.f_1270)
		{
			unk_0xA3063424F5C9A51D();
		}
		else
		{
			unk_0xA3063424F5C9A51D();
		}
		Global_2404607.f_1268 = 0;
	}
}

int func_135()
{
	if (unk_0x29AFA2493D7C23D0())
	{
		return 10000;
	}
	return 1000;
}

int func_136(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
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

int func_137(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_138(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x1C7D9BFDF15A02B4())
		{
			func_139(uParam0, 0, 0);
		}
	}
}

void func_139(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1C6DF6AD69BE853E() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD74C7D8D2E5E43D2();
			}
			else
			{
				*uParam0 = unk_0xE36DF6414E5CCBBF();
			}
		}
		else
		{
			*uParam0 = unk_0x48E480685981C7D4();
		}
		uParam0->f_1 = 1;
	}
}

void func_140()
{
	switch (Local_66[unk_0x519AAFF77CC141DF() /*3*/].f_2)
	{
		case 0:
			func_173();
			func_172();
			if (func_162())
			{
				func_160();
				func_159();
				func_141(35);
				Local_66[unk_0x519AAFF77CC141DF() /*3*/].f_2 = 1;
			}
			else if (Local_55.f_8 >= 1)
			{
				func_159();
				Local_66[unk_0x519AAFF77CC141DF() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_55.f_8 >= 2)
			{
				Local_66[unk_0x519AAFF77CC141DF() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6864)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_158() /*9662*/].f_7252.f_1897[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_158() /*9662*/].f_7252.f_1897[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_158() /*9662*/].f_7252.f_1897[iVar2 /*3*/].f_1)
			{
				func_154(iVar2, 1);
				unk_0xF3148AAF69AF9CBC(&Global_2450539, (8 + iVar2));
				func_149(2098, -1);
				func_145(67, -1);
				func_149(2553, -1);
				func_145(69, -1);
				unk_0x217967C69D5A8954(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0x236D8AD7EE179F46(Global_2450539, 12))
					{
						func_142(7, 0);
					}
					else
					{
						func_142(15, 0);
					}
				}
			}
		}
	}
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_144(iParam0, iParam1))
	{
		iVar0 = func_143();
		Global_2436893[iVar0] = iParam0;
	}
}

int func_143()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2436893[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_144(int iParam0, var uParam1)
{
	if (Global_1315880)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315892) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_147(iParam0, func_148(iParam1));
	iVar0++;
	func_146(iParam0, iVar0, iParam1);
}

void func_146(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2479763[iParam0 /*5*/][func_148(uParam2)];
	unk_0x123B783056E76C4E(iVar0, iParam1, 1);
}

int func_147(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2479763[iParam0 /*5*/][func_148(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_148(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_111();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

void func_149(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_153(iParam0, func_148(iParam1), 0);
	iVar0++;
	if (!func_152(iParam0))
	{
		func_151(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_150(iParam0, iVar0, iParam1, 1);
	}
}

void func_150(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1343618[func_148(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1343624[func_148(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1343630[func_148(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1343636[func_148(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1343594[func_148(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1343600[func_148(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1343606[func_148(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1343612[func_148(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1343570[func_148(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1343576[func_148(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1343582[func_148(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1343588[func_148(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1343642[func_148(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1343648[func_148(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1343654[func_148(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1343660[func_148(iParam2)] = iParam1;
			break;
		
		case 1292:
			Global_1343666[func_148(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1343672[func_148(iParam2)] = iParam1;
			break;
		
		case 1267:
			Global_1343678[func_148(iParam2)] = iParam1;
			break;
		
		case 1864:
			Global_2480427[0 /*6*/][func_148(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2480427[1 /*6*/][func_148(iParam2)] = iParam1;
			break;
		
		case 2899:
			Global_2480427[2 /*6*/][func_148(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1343684[func_148(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1343690[func_148(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1343696[func_148(iParam2)] = iParam1;
			break;
		
		case 1225:
			Global_1343702[func_148(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
}

int func_152(int iParam0)
{
	if (Global_1343551)
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
			case 1292:
			case 629:
			case 1267:
			case 754:
			case 755:
			case 756:
			case 1225:
			case 1864:
			case 2255:
			case 2899:
				return 1;
				break;
			}
	}
	return 0;
}

int func_153(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_148(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_154(int iParam0, int iParam1)
{
	if (Global_2097152[func_158() /*9662*/].f_7252.f_1897[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_158() /*9662*/].f_7252.f_1897[iParam0 /*3*/].f_1 = iParam1;
		func_155(func_157(iParam0), iParam1, -1, 1);
	}
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_156())
	{
		iVar0 = Global_2478104[iParam0 /*5*/][func_148(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x20026873DF8DB72A(iVar0, iParam1, iParam3);
		}
	}
}

int func_156()
{
	return 1;
	return 0;
}

int func_157(int iParam0)
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

int func_158()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_159()
{
	if (unk_0xFBACB273AA628CC5(uLocal_164))
	{
		unk_0x0A8175F24237A3D4(&uLocal_164);
	}
}

void func_160()
{
	if (!unk_0x236D8AD7EE179F46(Global_2422670.f_3275, 0))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_3275), 0);
		func_161();
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_3275), 1);
	}
}

void func_161()
{
	func_149(1178, -1);
}

int func_162()
{
	struct<14> Var0;
	
	if (unk_0x250A8F68F67CA19A(Local_55.f_2))
	{
		if (unk_0xEB15D648177E41E9(unk_0x27BEFF6AE5D3664A(Local_55.f_2), unk_0x81873881071CD9FE()) && func_171(Local_55.f_2))
		{
			func_170(&(Local_55.f_2));
			if (unk_0xFBACB273AA628CC5(uLocal_164))
			{
				unk_0x0A8175F24237A3D4(&uLocal_164);
			}
			func_165("ABB_BOXCT", 1);
			Var0.f_2 = 108;
			Var0.f_10 = unk_0x1329891157A54C63();
			func_163(Var0, func_164(0));
			unk_0xF3148AAF69AF9CBC(&(Local_66[unk_0x519AAFF77CC141DF() /*3*/].f_1), 0);
			return 1;
		}
	}
	return 0;
}

void func_163(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x1329891157A54C63();
	if (!iParam14 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Param0, 14, iParam14);
	}
}

int func_164(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar1)))
		{
			iVar2 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar1));
			if (func_37(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1329891157A54C63() || iParam0)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_165(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x02A6B267064771B1(sParam0);
	iVar0 = unk_0x267D6EB296008122(0, 1);
	func_166(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_166(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_169() || !unk_0x726DA50057167075()) || !func_109(unk_0x1329891157A54C63(), 0))
	{
		return;
	}
	iVar0 = func_167(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1707570.f_5[iVar0 /*53*/] = iParam0;
		Global_1707570.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1707570.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1707570.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1707570.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1707570.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1707570.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1707570 - 1))
	{
		if (iParam0 > Global_1707570.f_5[iVar0 /*53*/].f_1)
		{
			func_168(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1707570++;
	if (Global_1707570 > 5)
	{
		Global_1707570 = 5;
		return Global_1707570;
	}
	return (Global_1707570 - 1);
}

void func_168(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1707570.f_5[iVar0 /*53*/] = { Global_1707570.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_169()
{
	return unk_0x2D6859674806FDCE(-1762644250);
}

void func_170(var uParam0)
{
	var uVar0;
	
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		if (!unk_0x402F3F19221FF696(*uParam0))
		{
		}
	}
	if (unk_0x335F574AD77E59CE(*uParam0))
	{
		uVar0 = unk_0x262EBD0AA0ED1D6D(*uParam0);
		unk_0xFF4D210CF887E915(&uVar0);
	}
}

int func_171(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		unk_0x3A6FE26AD5BF8C2E(uParam0);
		return unk_0x402F3F19221FF696(uParam0);
	}
	return 0;
}

void func_172()
{
	if (!unk_0xFBACB273AA628CC5(uLocal_164))
	{
		if (unk_0x250A8F68F67CA19A(Local_55.f_2))
		{
			uLocal_164 = unk_0xE122DDAE9E94767B(unk_0x27BEFF6AE5D3664A(Local_55.f_2));
			unk_0xD6DF56BB9537BCC5(uLocal_164, 1.2f);
			unk_0x8F827BB0F6ED7AA8(uLocal_164, 403);
			unk_0x1B86E7A8766EA6B4(uLocal_164, 2);
			unk_0x2AB7C42FF2AF476D(uLocal_164, "ABB_BLIPN");
		}
	}
}

void func_173()
{
	var uVar0;
	
	if (!unk_0xA83A609D74168B30())
	{
		uVar0 = func_153(1180, -1, 0);
		if (!unk_0x236D8AD7EE179F46(uVar0, 14))
		{
			unk_0xF3148AAF69AF9CBC(&uVar0, 14);
			func_151(1180, uVar0, -1, 1);
		}
	}
}

int func_174()
{
	return Local_55.f_0;
}

int func_175()
{
	unk_0x32A12757CBF48A33(joaat("prop_drug_package_02"));
	if (unk_0x33ACB874CECA2D4B(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_176(int iParam0)
{
	return Local_66[iParam0 /*3*/];
}

int func_177()
{
	bool bVar0;
	
	func_184(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315867 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 1;
		}
	}
	if (func_183())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_182())
	{
		return 1;
	}
	if (func_181(157))
	{
		if (!func_180())
		{
			return 1;
		}
	}
	if (func_181(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_178() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_178()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_178()
{
	switch (func_179())
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

int func_179()
{
	return Global_24946;
}

bool func_180()
{
	return Global_2428865.f_573;
}

int func_181(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_182()
{
	return Global_2436988;
}

bool func_183()
{
	return Global_2428865.f_568;
}

void func_184(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xDC8C46445C29336D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 310:
					func_185(iVar0);
					break;
				
				case 2:
					unk_0xDC8C46445C29336D(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 54)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_185(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_37(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(uVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(uVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_186(uVar4, &bVar5))
						{
							unk_0xAA33E712AB3178EC(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE0913C01F5C0CC3D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_186(var uParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0xE86442941AE40E75(uParam0))
		{
			if (unk_0x28BE3924E7CDB27F(uParam0))
			{
				unk_0xD768713E73165208(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(uParam0, 0))
		{
			if (unk_0x4D2386673BCED434(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_187()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_188(struct<20> Param0)
{
	func_193(func_194(Param0.f_0), Param0);
	unk_0x473FC121743BE890(1);
	func_190(0, -1, 0);
	unk_0x19F630B59442E836(&Local_55, 11);
	unk_0xCBCBE0D8DD0EF168(&Local_66, 97);
	if (!func_189())
	{
		return 0;
	}
	unk_0xE6E19E3BBABCBC24(0);
	if (unk_0x1C7D9BFDF15A02B4())
	{
		Local_55.f_7 = Param0.f_16;
		Local_55.f_3 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
		if (!func_3(Global_2451473.f_780.f_1))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_55.f_1), 8);
		}
	}
	iLocal_167 = unk_0x9B20331E99DD1C1C();
	Local_66[unk_0x519AAFF77CC141DF() /*3*/] = 0;
	return 1;
}

int func_189()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 0;
		}
		if (unk_0x299162DAA4768797())
		{
			return 1;
		}
		if (func_183())
		{
			return 0;
		}
		if (func_181(155))
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

int func_190(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_192();
			}
			else
			{
				return 0;
			}
		}
		if (!func_191())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_192();
					}
					else
					{
						return 0;
					}
				}
				if (func_183())
				{
					if (!bParam2)
					{
						func_192();
					}
					else
					{
						return 0;
					}
				}
				if (func_181(155))
				{
					if (!bParam2)
					{
						func_192();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x25E16CB232F8AB91())
			{
				if (!bParam2)
				{
					func_192();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x428E5E7D8B8CA428();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			if (!bParam2)
			{
				func_192();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x25E16CB232F8AB91())
	{
		if (!bParam2)
		{
			func_192();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_191()
{
	return Global_1315867;
}

void func_192()
{
	unk_0xC23A229F78DAD92A();
}

void func_193(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_192();
	}
	unk_0xBA029707F4D8FFB0(uParam0, 0, Param1.f_16);
}

int func_194(int iParam0)
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
		
		case 48:
			return 32;
		
		case 49:
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
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 32;
		
		case 66:
			return 2;
		
		case 71:
			return 1;
		
		case 67:
			return 2;
		
		case 68:
			return 4;
		
		case 69:
			return 2;
		
		case 70:
			return 2;
		
		case 52:
			return 1;
		
		case 72:
			return 2;
		
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
			return 0;
		
		case joaat("mpsv_lp0_31"):
			return 1;
		
		default:
	}
	return 0;
}

void func_195()
{
	if (unk_0xFBACB273AA628CC5(uLocal_164))
	{
		unk_0x0A8175F24237A3D4(&uLocal_164);
	}
	func_197();
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x1C7D9BFDF15A02B4())
		{
			if (unk_0x250A8F68F67CA19A(Local_55.f_2) && unk_0x402F3F19221FF696(Local_55.f_2))
			{
				func_170(&(Local_55.f_2));
			}
			Local_55.f_0 = 4;
		}
	}
	if (unk_0x236D8AD7EE179F46(Local_55.f_1, 8))
	{
		func_196();
	}
	func_192();
}

void func_196()
{
	Global_2451473.f_780 = 0;
	Global_2451473.f_780.f_1 = { 0f, 0f, 0f };
	Global_2451473.f_780.f_4 = 0f;
}

void func_197()
{
	if (unk_0x236D8AD7EE179F46(uLocal_163, 4))
	{
		unk_0x710585F43AC49C91(unk_0x1329891157A54C63(), 0.72f);
		unk_0xCE46CEF48ED953BE(unk_0x1329891157A54C63(), 1f);
		unk_0x21871772C6423BA8(unk_0x1329891157A54C63(), 1f);
		unk_0x5D89454F4D9AD218(unk_0x1329891157A54C63(), 1f);
		func_198(1);
		unk_0xC69E84EBBD7166E6(&uLocal_163, 5);
		unk_0xC69E84EBBD7166E6(&uLocal_163, 7);
		unk_0xC69E84EBBD7166E6(&uLocal_163, 4);
	}
}

void func_198(int iParam0)
{
	var uVar0;
	
	uVar0 = func_199(iParam0, 0);
	unk_0x7D123BA6B5E0F9B9(uVar0);
}

char* func_199(int iParam0, bool bParam1)
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

int func_200(int iParam0)
{
	return Global_1585045[iParam0 /*400*/];
}

