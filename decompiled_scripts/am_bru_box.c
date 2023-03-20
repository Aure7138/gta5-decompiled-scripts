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
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_197(unk_0x1788E93557766241()) != 1)
			{
				func_192();
			}
		}
		if (!func_185(ScriptParam_0))
		{
			func_192();
		}
	}
	while (true)
	{
		func_184();
		if (func_174())
		{
			func_192();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_197(unk_0x1788E93557766241()) != 1)
			{
				func_192();
			}
		}
		if (unk_0x31EF25060710376C() != iLocal_167)
		{
			func_192();
		}
		unk_0x7E0FDD5E104F403B();
		switch (func_173(unk_0x044A481E863E2F6B()))
		{
			case 0:
				if (func_172())
				{
					if (func_171() == 1)
					{
						Local_66[unk_0x044A481E863E2F6B() /*3*/] = 1;
					}
					else if (func_171() == 4)
					{
						Local_66[unk_0x044A481E863E2F6B() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_171() == 1)
				{
					func_137();
				}
				else if (func_171() == 4)
				{
					Local_66[unk_0x044A481E863E2F6B() /*3*/] = 3;
				}
				if (Local_66[unk_0x044A481E863E2F6B() /*3*/].f_2 == 0)
				{
					if (!unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_55.f_3, 500f, 500f, 500f, 0, 1, 0) && func_197(unk_0x1788E93557766241()) != 1)
					{
						Local_66[unk_0x044A481E863E2F6B() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_135(&(Local_55.f_9));
				if (func_134(&(Local_55.f_9)))
				{
					Local_66[unk_0x044A481E863E2F6B() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_66[unk_0x044A481E863E2F6B() /*3*/] = 4;
			
			case 4:
				func_192();
				break;
		}
		if (unk_0xE9849174628A9C50())
		{
			switch (func_171())
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
		if (func_3(Global_2446992.f_780.f_1))
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
			if (!unk_0x86CB59A6776A7C27(Local_55.f_2) || Local_55.f_6 != -1)
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
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar0)))
		{
			if (Local_55.f_6 == -1)
			{
				if (unk_0x889D01384B54BCE3(Local_66[iVar0 /*3*/].f_1, 0))
				{
					Local_55.f_6 = iVar0;
				}
			}
			if (!unk_0x889D01384B54BCE3(Local_55.f_1, 7))
			{
				if (unk_0x889D01384B54BCE3(Local_66[iVar0 /*3*/].f_1, 1))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Local_55.f_1), 7);
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
	
	if (!unk_0x86CB59A6776A7C27(Local_55.f_2))
	{
		if (func_172())
		{
			if (unk_0x39858297C572C247(1))
			{
				fVar5 = 250f;
				Var6 = { Local_55.f_3 };
				if (unk_0x889D01384B54BCE3(Local_55.f_1, 8))
				{
					Var0 = { Global_2446992.f_780.f_1 };
					uVar3 = Global_2446992.f_780.f_4;
				}
				if (func_197(unk_0x1788E93557766241()) == 7)
				{
					iVar12 = unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241());
					if (Global_1604248.f_74[iVar12 /*5606*/].f_446[0 /*23*/].f_10 > 0f)
					{
						Var6 = { Global_1604248.f_74[iVar12 /*5606*/].f_446[0 /*23*/].f_3 };
						Var9 = { Global_1604248.f_74[iVar12 /*5606*/].f_446[0 /*23*/].f_6 };
						fVar5 = Global_1604248.f_74[iVar12 /*5606*/].f_446[0 /*23*/].f_10;
						iVar4 = 1;
					}
					else if (Global_1604248.f_74[iVar12 /*5606*/].f_446[0 /*23*/].f_9 > 0f)
					{
						Var6 = { Global_1604248.f_74[iVar12 /*5606*/].f_446[0 /*23*/] };
						fVar5 = Global_1604248.f_74[iVar12 /*5606*/].f_446[0 /*23*/].f_9;
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
					if (unk_0x889D01384B54BCE3(Local_55.f_1, 8) || func_133(Var6, fVar5, &Var0, &uVar3, Var13))
					{
						if (Local_55.f_7 >= 32)
						{
							Local_55.f_2 = unk_0x9727CDE11D5BFC89(unk_0x3759BB80B868470B(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_55.f_2 = unk_0x9727CDE11D5BFC89(unk_0x31F582B94DB6CECE(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0x34639238667C4381(unk_0x9198B14217D71938(Local_55.f_2), uVar3);
					}
				}
				else if (unk_0x889D01384B54BCE3(Local_55.f_1, 8) || func_7(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_55.f_7 >= 32)
					{
						Local_55.f_2 = unk_0x9727CDE11D5BFC89(unk_0x3759BB80B868470B(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_55.f_2 = unk_0x9727CDE11D5BFC89(unk_0x31F582B94DB6CECE(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0x34639238667C4381(unk_0x9198B14217D71938(Local_55.f_2), uVar3);
				}
			}
		}
	}
	if (unk_0x86CB59A6776A7C27(Local_55.f_2))
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
			if (((!Global_2404570.f_1234 == *uParam0 || !Global_2404570.f_1234.f_1 == uParam0->f_1) || !Global_2404570.f_1234.f_2 == uParam0->f_2) || !Global_2404570.f_1237 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404570.f_1248 == uParam0->f_8 || !Global_2404570.f_1248.f_1 == uParam0->f_8.f_1) || !Global_2404570.f_1248.f_2 == uParam0->f_8.f_2) || !Global_2404570.f_1251 == uParam0->f_11) || !Global_2404570.f_1251.f_1 == uParam0->f_11.f_1) || !Global_2404570.f_1251.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404570.f_1248 == uParam0->f_8 || !Global_2404570.f_1248.f_1 == uParam0->f_8.f_1) || !Global_2404570.f_1248.f_2 == uParam0->f_8.f_2) || !Global_2404570.f_1251 == uParam0->f_11) || !Global_2404570.f_1251.f_1 == uParam0->f_11.f_1) || !Global_2404570.f_1251.f_2 == uParam0->f_11.f_2) || !Global_2404570.f_1254 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404570.f_1232 == 1)
		{
			if (unk_0xDECCEB462707CB3E(Global_2404570.f_1241))
			{
				if (Global_2404570.f_1241 == unk_0x60C807BBCBE66CC7())
				{
					if (unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Global_2404570.f_1238) < func_132())
					{
						return 0;
					}
				}
				else if (unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Global_2404570.f_1238) < func_132())
				{
					return 0;
				}
			}
			unk_0xF3B6EE3917FE056E();
			unk_0x1278B6E386A2A8C7();
			func_131();
		}
		Global_2404570.f_1232 = 0;
	}
	else if (unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Global_2404570.f_1238) > func_132())
	{
		Global_2404570.f_1239 = unk_0x519586565311459B();
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
	unk_0xEADE4FBDA54F2BFB(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404570.f_1232)
	{
		unk_0xF3B6EE3917FE056E();
		unk_0x1278B6E386A2A8C7();
		func_131();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_130(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xE8F72728C23278B0())
		{
			Global_2404570.f_1255 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404570.f_1234 = { *uParam0 };
					Global_2404570.f_1237 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404570.f_1248 = { uParam0->f_8 };
					Global_2404570.f_1251 = { uParam0->f_11 };
					Global_2404570.f_1254 = 0f;
					Global_2404570.f_1234 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404570.f_1248 = { uParam0->f_8 };
					Global_2404570.f_1251 = { uParam0->f_11 };
					Global_2404570.f_1254 = uParam0->f_14;
					Global_2404570.f_1234 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_129(Var8.f_0, Var8.f_1);
			}
			Global_2404570.f_1233 = 1;
			Global_2404570.f_1232 = 1;
			Global_2404570.f_1239 = unk_0x519586565311459B();
			Global_2404570.f_1238 = unk_0x519586565311459B();
			Global_2404570.f_1241 = unk_0x60C807BBCBE66CC7();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404570.f_1232)
	{
		if (Global_2404570.f_1233 == 1)
		{
			if (unk_0x1A17A011F311CC77(fVar4, fVar5, fVar6, fVar7) || unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Global_2404570.f_1239) > 5000)
			{
				Global_2404570.f_1239 = unk_0x519586565311459B();
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
					Global_2404570.f_1233 = 9;
				}
				else
				{
					Global_2404570.f_1233 = 2;
				}
			}
		}
		if (Global_2404570.f_1233 == 2)
		{
			if ((unk_0x4EB6F13BC1B8EF0F(Var11, Var14) || unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Global_2404570.f_1239) > 15000) || unk_0x8543537B3620A33B(Var11, Var14) == 0)
			{
				Global_2404570.f_1239 = unk_0x519586565311459B();
				if (uParam0->f_5 && !func_109(unk_0x1788E93557766241(), 0))
				{
					Global_2404570.f_1233 = 3;
				}
				else
				{
					Global_2404570.f_1233 = 4;
				}
			}
			else if (unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Global_2404570.f_1243) > 7000)
			{
				func_108(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404570.f_1233 == 3)
		{
			if (func_107() || unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Global_2404570.f_1239) > 10000)
			{
				Global_2404570.f_1239 = unk_0x519586565311459B();
				Global_2404570.f_1233 = 4;
			}
		}
		if (Global_2404570.f_1233 == 4)
		{
			if (unk_0xE8F72728C23278B0())
			{
				unk_0xF3B6EE3917FE056E();
				unk_0x1278B6E386A2A8C7();
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
					if (!unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1)
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
							if (unk_0x30D1FD0B5B3B24B9(unk_0x1788E93557766241(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404570.f_1239 = unk_0x519586565311459B();
								Global_2404570.f_1233 = 5;
							}
							break;
						
						case 1:
							func_101(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x29A41870FA473875(unk_0x1788E93557766241(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404570.f_1239 = unk_0x519586565311459B();
								Global_2404570.f_1233 = 5;
							}
							break;
						
						case 2:
							if (unk_0x29A41870FA473875(unk_0x1788E93557766241(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404570.f_1239 = unk_0x519586565311459B();
								Global_2404570.f_1233 = 5;
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
					Global_2404570.f_1239 = unk_0x519586565311459B();
					Global_2404570.f_1233 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xF50214FDF685EE87(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_101(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x8DA9BE58FE9DB93E(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x8DA9BE58FE9DB93E(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404570.f_1233 == 5)
		{
			if (func_42(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404570.f_1259.f_4)
				{
					Global_2404570.f_1239 = unk_0x519586565311459B();
					Global_2404570.f_1233 = 6;
				}
				else
				{
					Global_2404570.f_1239 = unk_0x519586565311459B();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0x3C616B96B92181C5(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404570.f_1233 = 9;
				}
			}
			else if (unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Global_2404570.f_1239) > 20000)
			{
				unk_0xF3B6EE3917FE056E();
				unk_0x1278B6E386A2A8C7();
				Global_2404570.f_1239 = unk_0x519586565311459B();
				Global_2404570.f_1233 = 8;
			}
		}
		if (Global_2404570.f_1233 == 6)
		{
			iVar0 = 0;
			Global_2404570.f_1259 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_41(uParam0->f_4))
				{
					if (unk_0xF7037F2CC07D58B0(unk_0xE60DDD7D0864392E(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_40(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xF7037F2CC07D58B0(unk_0xE60DDD7D0864392E(Var8)))
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
			Global_2404570.f_1239 = unk_0x519586565311459B();
			Global_2404570.f_1233 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xF50214FDF685EE87(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_101(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x8DA9BE58FE9DB93E(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x8DA9BE58FE9DB93E(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404570.f_1233 == 7)
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
							if (!unk_0x652D2EEEF1D3E62C(Global_2404570.f_1366[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_112(Global_2404570.f_1366[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404570.f_1366[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_38(Global_2404570.f_1366[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404570.f_1366[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x801B4FC214DEDCB7(Global_2404570.f_1366[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404570.f_1366[iVar17 /*3*/] };
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
				Global_2404570.f_1239 = unk_0x519586565311459B();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0x3C616B96B92181C5(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404570.f_1233 = 9;
			}
			else if (unk_0xF001CC441E445DFD(unk_0x519586565311459B(), Global_2404570.f_1239) > 20000)
			{
				Global_2404570.f_1239 = unk_0x519586565311459B();
				Global_2404570.f_1233 = 8;
			}
		}
		if (Global_2404570.f_1233 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_2404570.f_437))
				{
				}
			}
			else if (Global_2404570.f_1259.f_1)
			{
				func_9(uParam2, &(Global_2404570.f_1259.f_5));
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
				*(uParam2[0 /*3*/]) = { Global_2404570.f_1234 };
				func_11(uParam2[0 /*3*/], 0, bVar82, 0, 0, uParam0, uParam1);
			}
			Global_2404570.f_1239 = unk_0x519586565311459B();
			Global_2404570.f_1233 = 9;
		}
		if (Global_2404570.f_1233 == 9)
		{
			Global_2404570.f_1232 = 0;
			unk_0xF3B6EE3917FE056E();
			unk_0x1278B6E386A2A8C7();
			func_131();
			return 1;
		}
		Global_2404570.f_1238 = unk_0x519586565311459B();
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
						if (func_41(uParam5->f_4) || !unk_0xF7037F2CC07D58B0(unk_0xE60DDD7D0864392E(Var64)))
						{
							iVar63 += 4;
						}
						break;
					
					case 1:
						Var64 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_40(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xF7037F2CC07D58B0(unk_0xE60DDD7D0864392E(Var64)))
						{
							iVar63 += 4;
						}
						break;
					
					case 2:
						Var64 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_40(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xF7037F2CC07D58B0(unk_0xE60DDD7D0864392E(Var64)))
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
					if (unk_0x21B0D803C4C9C45E(Var0, &uVar60, 0))
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
				if (unk_0x21B0D803C4C9C45E(Var0, &uVar60, 0))
				{
					Var0.f_2 = uVar60;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404570.f_560 = 1;
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
			return unk_0x801B4FC214DEDCB7(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_13(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	if (unk_0x91EF7F183ADD75A5(Param0, 0, uParam3, iParam4))
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
		if (fVar0 < 40f)
		{
			uVar1 = 2;
			uVar8 = 2;
			if ((iParam5 == 1 && !func_14(Global_2404570.f_450, &Param0, &uVar1, &uVar8, bParam6, 1)) || iParam5 == 0)
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
		func_16(&Var0, 0f, 0f, unk_0x1E253A1A83763D22(0f, 360f));
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
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404570.f_1461[iVar0 /*3*/]) < fParam3)
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
		if (Global_2404570.f_316[iVar0 /*12*/].f_9 == 1)
		{
			if (func_25(*uParam0, &(Global_2404570.f_316[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					Var1 = { *uParam0 };
					func_19(&Var1, &(Global_2404570.f_316[iVar0 /*12*/]), 1036831949, 0, bParam2);
					if (func_18(&Var1, 0, 0))
					{
						Var1 = { *uParam0 };
						func_19(&Var1, &(Global_2404570.f_316[iVar0 /*12*/]), 1036831949, 1, bParam2);
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
				*uParam0 = { func_24(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404570.f_1460) * uParam1->f_8)), 0, fParam2, bParam3) };
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
				func_15(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404570.f_1460) * uParam1->f_8)), fParam2, bParam3);
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0xA8BB1E729C39DD16(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0xA8BB1E729C39DD16(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
		unk_0x4555877B8D40F1EF(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
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
				if (!unk_0x801B4FC214DEDCB7(Var1, Param3, Param6, fParam9, 0, 1))
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
			return func_112(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404570.f_1460) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_38(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x801B4FC214DEDCB7(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x801B4FC214DEDCB7(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x801B4FC214DEDCB7(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x801B4FC214DEDCB7(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
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
		if (Global_2404570.f_316[iVar0 /*12*/].f_9)
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
		if (Global_2406689[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2406689[iVar0 /*17*/].f_16))
			{
				if (func_25(*uParam0, &(Global_2406689[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2406689[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2406689[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_19(&Var1, &(Global_2406689[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_27(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_19(&Var1, &(Global_2406689[iVar0 /*17*/]), 1036831949, 1, 0);
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
	
	if (!Global_2404570.f_453)
	{
		if (!func_32(unk_0x1788E93557766241(), 1))
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
				Var1 = { func_29(&(Global_2404570.f_39[iVar0 /*12*/])) };
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
		if (Global_2404570.f_39[iVar0 /*12*/].f_9)
		{
			if (func_25(Param0, &(Global_2404570.f_39[iVar0 /*12*/]), fParam3, 0, 0))
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
		if (Global_2404570.f_39[iVar0 /*12*/].f_9)
		{
			if (func_25(Param0, &(Global_2404570.f_39[iVar0 /*12*/]), fParam3, 0, 0))
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
	if (Global_1583725[iParam0 /*334*/] == -1)
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
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_13.f_1, 0);
}

int func_36(int iParam0)
{
	if (func_37(iParam0, 0, 1))
	{
		return Global_2414327[iParam0 /*255*/].f_1;
	}
	return 0;
}

int func_37(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x38FA37FE3518BA38(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2AF80829930084FD(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422491.f_3[iVar0])
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
	
	if (Global_2404570.f_1259 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xBF3488E5CAED55CE(&(Global_2404570.f_1259)))
			{
				case 0:
					if (uParam2->f_7 && Global_2404570.f_480.f_7 == 0)
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
							*(uParam0[0 /*3*/]) = { Global_2404570.f_1234 };
						}
						if (uParam1->f_5 && func_10(Global_2404570.f_437))
						{
							if (!Global_2404570.f_1259.f_4)
							{
								Global_2404570.f_1259.f_4 = 1;
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
						uParam0->f_10[0] = unk_0x1E253A1A83763D22(0f, 360f);
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
		else if (unk_0xE8F72728C23278B0())
		{
			if (!unk_0xB77D6C13BF30FBE2())
			{
				if (unk_0x6E8D4C05CD9B4ED4())
				{
					Global_2404570.f_1259 = unk_0x98FDF5251C806457();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x1278B6E386A2A8C7();
				Global_2404570.f_1259.f_4 = 1;
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
		func_98(Global_2404570.f_480, &(Global_2404570.f_1259.f_30), &(Global_2404570.f_1259.f_63));
	}
	if (uParam2->f_7 && !Global_2404570.f_1259.f_3)
	{
		Global_2404570.f_1259.f_3 = 1;
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
	if (Global_2404570.f_1259 > 0)
	{
		if (uParam1->f_5 || unk_0xE8F72728C23278B0())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404570.f_1259)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404570.f_1259.f_2)
					{
						iVar4 = Global_2404570.f_1259.f_2 + 1;
					}
					if (iVar4 > (Global_2404570.f_1259 - 1))
					{
						iVar4 = (Global_2404570.f_1259 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xA6BD59FDCDB21E16(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0xE7DB977EF8ABC743(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x74F5E47F36981728(iVar4);
					}
					else
					{
						unk_0xB3D6EF4573500BAB(iVar4, &iVar5);
					}
					func_47(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404570.f_1259.f_2 = iVar4;
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
			iVar4 = Global_2404570.f_1259;
		}
		if (Global_2404570.f_1259 == iVar4)
		{
			if (uParam1->f_5 && func_10(Global_2404570.f_437))
			{
				if (Global_2404570.f_1259.f_1)
				{
					func_9(uParam0, &(Global_2404570.f_1259.f_5));
					func_46(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404570.f_1234 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x1E253A1A83763D22(0f, 360f);
					func_46(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404570.f_1259.f_1)
			{
				func_9(uParam0, &(Global_2404570.f_1259.f_5));
				func_46(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x444ECD635D5FD45F(0, Global_2404570.f_1259);
				unk_0xA6BD59FDCDB21E16(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_43(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_46(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404570.f_1234 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x1E253A1A83763D22(0f, 360f);
					func_46(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404570.f_1234 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0x1E253A1A83763D22(0f, 360f);
				func_46(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404570.f_1234 };
		if (uParam1->f_5 && func_10(Global_2404570.f_437))
		{
			if (!Global_2404570.f_1259.f_4)
			{
				Global_2404570.f_1259.f_4 = 1;
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
		uParam0->f_10[0] = unk_0x1E253A1A83763D22(0f, 360f);
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
	while (iVar0 < Global_2407655[iVar4])
	{
		if (func_44(Var1, &(Global_2406826[iVar4 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_20(&Var1, Global_2406826[iVar4 /*92*/][iVar0 /*7*/], Global_2406826[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2406826[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2407655[8])
	{
		if (func_44(Var1, &(Global_2406826[8 /*92*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_20(&Var1, Global_2406826[iVar4 /*92*/][iVar0 /*7*/], Global_2406826[iVar4 /*92*/][iVar0 /*7*/].f_3, Global_2406826[iVar4 /*92*/][iVar0 /*7*/].f_6, 1036831949, 0);
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
	return unk_0x801B4FC214DEDCB7(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_45(struct<2> Param0, var uParam2)
{
	if (Param0.f_0 < 0f)
	{
		if (Param0.f_1 > 4000f)
		{
			return 0;
		}
		else if (Param0.f_1 > 0f)
		{
			return 2;
		}
		else if (Param0.f_1 > -2000f)
		{
			return 4;
		}
		else
		{
			return 6;
		}
	}
	else if (Param0.f_1 > 4000f)
	{
		return 1;
	}
	else if (Param0.f_1 > 0f)
	{
		return 3;
	}
	else if (Param0.f_1 > -2000f)
	{
		return 5;
	}
	else
	{
		return 7;
	}
	return 8;
}

void func_46(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404570.f_1366[(3 - iVar0) /*3*/] = { Global_2404570.f_1366[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404570.f_1366[0 /*3*/] = { Param0 };
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
		if (Global_2404570.f_437 == 1)
		{
			if (unk_0x3545D662A0A53653((Global_2404570.f_450.f_2 - Param0.f_2)) < 25f)
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
		if (func_32(unk_0x1788E93557766241(), 1) || func_97(unk_0x1788E93557766241()))
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
		if (!unk_0xD639C4482527F2D5(unk_0xA16EC202D9D35357(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0xD639C4482527F2D5(unk_0xA16EC202D9D35357(), Param0, 20f))
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
		iVar7 += 64;
	}
	if (uParam4->f_5)
	{
		if (!Global_2404570.f_579)
		{
			if (func_28(Global_2404570.f_450))
			{
				if ((!func_27(&Param0, 0, 0, 0) && !func_18(&Param0, 0, 0)) && !func_94(&Param0, 0))
				{
					iVar7 += 128;
				}
			}
			else if ((!func_18(&Param0, 0, 0) && !func_94(&Param0, 0)) && !func_17(Param0, 0.5f))
			{
				iVar7 += 128;
			}
		}
		else
		{
			iVar7 += 128;
		}
	}
	else if (!func_93(Param0, 2.5f, 3))
	{
		iVar7 += 128;
	}
	if (uParam4->f_5)
	{
		if (func_86(Param0, fParam3, uParam4->f_15, func_92(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 256;
			iVar7 += 512;
		}
		else
		{
			iVar9 = Global_2404570.f_1;
		}
	}
	else if (!func_80(Param0, 25f, unk_0x1788E93557766241(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_79(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 512;
			iVar7 += 256;
		}
		else if (!func_79(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 256;
		}
	}
	if (uParam4->f_5)
	{
		if (!(func_78(unk_0x1788E93557766241()) && func_76(unk_0x1788E93557766241())))
		{
			if (!func_75(&Param0, &(Global_2404570.f_1259.f_63), 0, 1065353216))
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
		if (!func_76(unk_0x1788E93557766241()))
		{
			if (!func_74(Param0, &(Global_2404570.f_1259.f_30), &(Global_2404570.f_1259.f_63), 1073741824))
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
				if (func_10(Global_2404570.f_437))
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
	if (!Global_2404570.f_39.f_55)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0xF7037F2CC07D58B0(unk_0xE60DDD7D0864392E(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0xF7037F2CC07D58B0(unk_0xE60DDD7D0864392E(Param0)))
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
		if (iVar7 >= Global_2404570.f_1259.f_5[iVar12 /*8*/])
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
						fVar0 = func_63(Param0, Global_2404570.f_1234, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar21 = true;
				}
				if ((func_10(Global_2404570.f_437) && iVar7 == Global_2404570.f_1259.f_5[iVar12 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar22)
					{
						fVar2 = func_61(Param0);
						bVar22 = true;
					}
					if (fVar2 < Global_2404570.f_1259.f_5[iVar12 /*8*/].f_2)
					{
						Var13.f_4 = { Param0 };
						Var13.f_7 = fParam3;
						Var13.f_0 = iVar7;
						Var13.f_1 = fVar0;
						Var13.f_2 = fVar2;
						func_60(Var13, iVar12);
						Global_2404570.f_1259.f_1 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404570.f_1259.f_5[iVar12 /*8*/] || (iVar7 == Global_2404570.f_1259.f_5[iVar12 /*8*/] && fVar0 > Global_2404570.f_1259.f_5[iVar12 /*8*/].f_1))
				{
					Var13.f_4 = { Param0 };
					Var13.f_7 = fParam3;
					Var13.f_0 = iVar7;
					Var13.f_1 = fVar0;
					func_60(Var13, iVar12);
					Global_2404570.f_1259.f_1 = 1;
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
				if (iVar7 > Global_2404570.f_1259.f_5[iVar12 /*8*/] || (iVar7 == Global_2404570.f_1259.f_5[iVar12 /*8*/] && fVar3 > Global_2404570.f_1259.f_5[iVar12 /*8*/].f_3))
				{
					Var13.f_4 = { Param0 };
					Var13.f_7 = fParam3;
					Var13.f_0 = iVar7;
					Var13.f_3 = fVar3;
					func_60(Var13, iVar12);
					Global_2404570.f_1259.f_1 = 1;
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
			if (!iVar7 == unk_0x1788E93557766241() || iParam5 == 1)
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
					if (unk_0xA2D6C1E24AF2E058(iVar7) == unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))
					{
						if (!unk_0xA2D6C1E24AF2E058(iVar7) == -1 || !func_32(unk_0x1788E93557766241(), 1))
						{
							bVar3 = true;
						}
					}
				}
				if (bVar3)
				{
					if (unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar7) || !bParam6)
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
							fVar1 = unk_0x4970185D4CC64616(Param0, Var4, 1);
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
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iParam0), 0);
}

int func_51(int iParam0)
{
	if (unk_0x14D5064869773C21(unk_0xFF34D923BFB5E9FB(iParam0)) || Global_2414327[iParam0 /*255*/].f_239)
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
			if (unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iParam0))
			{
				if (!unk_0xA2D6C1E24AF2E058(iParam0) == unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))
				{
					if (func_33(unk_0x1788E93557766241(), 1))
					{
						if (!func_56(unk_0xA2D6C1E24AF2E058(iParam0), unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241())))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xA2D6C1E24AF2E058(iParam0) == -1 && unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1)
				{
					if (!func_33(unk_0x1788E93557766241(), 1))
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
	if (func_55(unk_0x1788E93557766241(), iParam0))
	{
		return 1;
	}
	Global_2446020 = { func_54(iParam0) };
	if (unk_0x765DD998E5AD03DC(&Global_2446020))
	{
		return 1;
	}
	return 0;
}

struct<13> func_54(var uParam0)
{
	struct<13> Var0;
	
	unk_0xBE9A3F2CD3728669(uParam0, &Var0, 13);
	return Var0;
}

int func_55(int iParam0, var uParam1)
{
	if (unk_0x70443014BEB6B15D())
	{
		Global_2446020 = { func_54(iParam0) };
		Global_2446033 = { func_54(uParam1) };
		if (unk_0x9A6FFB0772343488(&Global_2446020))
		{
			if (unk_0x9A6FFB0772343488(&Global_2446033))
			{
				unk_0x55FB44C9EE7B72D8(&Global_2445950, 35, &Global_2446020);
				unk_0x55FB44C9EE7B72D8(&Global_2445985, 35, &Global_2446033);
				if (Global_2445950 == Global_2445985)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
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
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 0);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 1);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 2);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 4);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 5);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 6);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 8);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 9);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 10);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 12);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 13);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 14);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 15);
				
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
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
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
		if (func_37(unk_0x1788E93557766241(), 1, 1))
		{
			if (!unk_0xF4C685E933068D23())
			{
				if (unk_0x7A98E0DD2E6FAB7A(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0));
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
			if (!func_109(iVar1, 0) && unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1788E93557766241()))
				{
					if (func_51(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xA2D6C1E24AF2E058(iVar1) != unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))) || unk_0xA2D6C1E24AF2E058(iVar1) == -1)
							{
								if (unk_0x0FC608B6B212C0E5(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0xA2D6C1E24AF2E058(iVar1) != iParam7 || unk_0xA2D6C1E24AF2E058(iVar1) == -1)
						{
							if (unk_0x0FC608B6B212C0E5(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iVar1), 0));
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
	Var0 = { Global_2404570.f_1259.f_5[iParam8 /*8*/] };
	Global_2404570.f_1259.f_5[iParam8 /*8*/] = { Param0 };
	if (iParam8 < 2)
	{
		func_60(Var0, iParam8 + 1);
	}
}

float func_61(struct<3> Param0)
{
	var uVar0;
	
	return func_62(Param0, &(Global_2404570.f_39), &uVar0);
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404570.f_1460) * (uParam3[iVar0 /*12*/])->f_8)));
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
	if (unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1 && !func_32(unk_0x1788E93557766241(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_48(func_65(Param0, unk_0x1788E93557766241(), 0), 0f, 0f, fVar4, 0f, 1f);
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
		fVar0 = func_48(unk_0x2A488C176D52CCA5(Global_2404570.f_450, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
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
	
	uVar3 = unk_0x7FC9D214D1B05C31(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x94E960B561A37CAE(uVar3))
	{
		unk_0x9B78F4A91B1AAF51(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x3545D662A0A53653((Param0.f_2 - Var0.f_2));
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
				if (unk_0xA2D6C1E24AF2E058(iVar3) != unk_0xA2D6C1E24AF2E058(iParam3) || (unk_0xA2D6C1E24AF2E058(iVar3) == -1 && unk_0xA2D6C1E24AF2E058(iParam3) == -1))
				{
					if (Global_2411255.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2411255.f_130[iVar2 /*3*/], Param0);
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
	
	iVar39 = unk_0x8645B73431E623E0(unk_0xA16EC202D9D35357(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x538DF9E5B1DF01EB(uVar6[iVar2]))
		{
			if (!unk_0xE44A580B551C3645(uVar6[iVar2]))
			{
				if (func_67(uVar6[iVar2]))
				{
					Var3 = { unk_0xBF8499F46AD9093A(uVar6[iVar2], 1) };
					fVar1 = unk_0x4970185D4CC64616(Param0, Var3, 1);
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
	
	uVar0 = unk_0x2C741960D7BA6D23(uParam0);
	switch (unk_0x232F05A66DCF2115(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0x232F05A66DCF2115(uVar0, Global_1574048[unk_0x1788E93557766241()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1583725[unk_0x1788E93557766241() /*334*/] == 0)
	{
		iVar1 = unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0x232F05A66DCF2115(uVar0, Global_1573759[iVar1]))
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
		if ((unk_0xEE41D6C2DA208994(Global_2404570.f_39.f_67) || unk_0x38B61EB14C5FBA9E(Global_2404570.f_39.f_67)) || Global_2404570.f_39.f_67 == joaat("rhino"))
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
	if (Global_2404570.f_39.f_65 && !Global_2404570.f_39.f_264)
	{
		if (!func_57(unk_0x1788E93557766241()))
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
		if ((unk_0xEE41D6C2DA208994(Global_2404570.f_39.f_67) || unk_0x38B61EB14C5FBA9E(Global_2404570.f_39.f_67)) || Global_2404570.f_39.f_67 == joaat("rhino"))
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
	if ((((fParam7 > 0f && unk_0x233BBF4CAB603F14(Param0, fParam7)) || (fVar0 > 0f && unk_0xB04974FC0ED6E892(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x2F82A7CF030B6A1D(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x2F82A7CF030B6A1D(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_72(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404570.f_39.f_55)
	{
		if (unk_0xF7037F2CC07D58B0(Global_2404570.f_39.f_56))
		{
			if (!unk_0xCF993CC55171C8A0(Param0))
			{
				uVar0 = unk_0xE60DDD7D0864392E(Param0);
				if (unk_0xF7037F2CC07D58B0(uVar0))
				{
					iVar1 = unk_0x69656405954EFB7F(uVar0);
					if (!iVar1 == Global_2404570.f_39.f_57)
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
	switch (Global_2404570.f_1255)
	{
		case 0:
			return func_112(Param0, Global_2404570.f_1234, Global_2404570.f_1237, 0, 0);
			break;
		
		case 1:
			return func_38(Param0, Global_2404570.f_1248, Global_2404570.f_1251, 0, 0);
			break;
		
		case 2:
			return unk_0x801B4FC214DEDCB7(Param0, Global_2404570.f_1248, Global_2404570.f_1251, Global_2404570.f_1254, 0, 1);
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
		if (unk_0x801B4FC214DEDCB7(Param0, Var2, Var5, fVar8, 0, 1))
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
				if (Global_1583725[iParam0 /*334*/] == 0)
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
	return Global_1583725[iParam0 /*334*/].f_173 != 0;
}

int func_78(int iParam0)
{
	if (func_33(iParam0, 1))
	{
		if (Global_1583725[iParam0 /*334*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_79(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_37(unk_0x1788E93557766241(), 1, 1))
		{
			if (!unk_0xF4C685E933068D23())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4970185D4CC64616(func_50(unk_0x1788E93557766241()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x7A98E0DD2E6FAB7A(Param0, fParam3))
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
			if (!func_109(iVar1, 0) && unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1788E93557766241()))
				{
					if ((func_51(iVar1) || !bParam10) && !Global_2414327[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xA2D6C1E24AF2E058(iVar1) == -1)
							{
								if (unk_0xA2D6C1E24AF2E058(iVar1) == unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xA2D6C1E24AF2E058(iVar1) != unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))) || unk_0xA2D6C1E24AF2E058(iVar1) == -1)
							{
								if (unk_0x4970185D4CC64616(func_50(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0FC608B6B212C0E5(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xA2D6C1E24AF2E058(iVar1) != iParam8 || unk_0xA2D6C1E24AF2E058(iVar1) == -1)
						{
							if (unk_0x4970185D4CC64616(func_50(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0FC608B6B212C0E5(iVar1, Param0, fParam3))
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

int func_80(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_85(Param0, fParam3, iParam4, iParam5) || func_81(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_81(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_82(Param0, Global_2411255.f_293[iVar0 /*3*/], Global_2411255.f_390[iVar0], Global_2411255.f_423[iVar0], 1036831949))
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

int func_82(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_84(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_16(&Var0, 0f, 0f, uParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_83(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0x3545D662A0A53653((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0x3545D662A0A53653((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0x3545D662A0A53653((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		return unk_0x801B4FC214DEDCB7(Param0, Var12, Var15, fVar10, 0, 1);
	}
	return 0;
}

void func_83(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	unk_0xD7CB63D07AABC54F(iParam0, fParam1, fParam2);
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

float func_84(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_83(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	return (unk_0x71D93B57D07F9804((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f)))) + fParam1);
}

int func_85(struct<3> Param0, float fParam3, int iParam4, int iParam5)
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
				if (Global_2411255.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2411255.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_50(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2411255.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2411255.f_130[iVar0 /*3*/], Param0) < fParam3)
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

int func_86(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404570.f_1 = 0;
	if (!func_80(Param0, 0.5f, unk_0x1788E93557766241(), 0, 0))
	{
		Global_2404570.f_1++;
		if (bParam5)
		{
			if (func_130(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404570.f_1 = (Global_2404570.f_1 + Global_2404570);
				if (!func_91(Param0, fParam12))
				{
					Global_2404570.f_1++;
					if (!func_90(Param0))
					{
						Global_2404570.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404570.f_1 = (Global_2404570.f_1 + Global_2404570);
			}
		}
		else if (!bParam4)
		{
			if (func_130(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404570.f_1 = (Global_2404570.f_1 + Global_2404570);
				if (!func_91(Param0, fParam12))
				{
					Global_2404570.f_1++;
					if (!func_87(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404570.f_1++;
						if (!func_90(Param0))
						{
							Global_2404570.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404570.f_1 = (Global_2404570.f_1 + Global_2404570);
			}
		}
		else if (func_130(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
		{
			Global_2404570.f_1 = (Global_2404570.f_1 + Global_2404570);
			if (!func_91(Param0, fParam12))
			{
				Global_2404570.f_1++;
				if (!func_87(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404570.f_1++;
					if (!func_90(Param0))
					{
						Global_2404570.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404570.f_1 = (Global_2404570.f_1 + Global_2404570);
		}
	}
	return 0;
}

int func_87(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x1788E93557766241() == iVar1)
		{
			if ((func_37(iVar1, 1, 1) && func_51(iVar1)) && unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
			{
				if (!func_89(unk_0x1788E93557766241(), iVar1, -2, 0))
				{
					if (func_88(func_50(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_88(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0x801B4FC214DEDCB7(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_89(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xA2D6C1E24AF2E058(iParam0) == -1 && unk_0xA2D6C1E24AF2E058(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xA2D6C1E24AF2E058(iParam0) == unk_0xA2D6C1E24AF2E058(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xA2D6C1E24AF2E058(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xA2D6C1E24AF2E058(iParam0) == iParam2;
	}
	return unk_0xA2D6C1E24AF2E058(iParam0) == iParam2;
}

int func_90(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (func_33(unk_0x1788E93557766241(), 1))
	{
		if (Global_1604248.f_29765 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1604248.f_29765)
			{
				if (Global_1604248.f_29766[iVar0 /*31*/].f_7 != 0)
				{
					func_83(Global_1604248.f_29766[iVar0 /*31*/].f_7, &Var1, &Var4, 1086324736, 1080033280, 1077936128);
					fVar7 = (unk_0x3545D662A0A53653((Var1.f_1 - Var4.f_1)) * 0.5f);
					fVar8 = (unk_0x3545D662A0A53653((Var1.f_0 - Var4.f_0)) * 0.5f);
					fVar9 = (unk_0x3545D662A0A53653((Var1.f_2 - Var4.f_2)) * 0.5f);
					fVar10 = ((fVar7 * fVar7) + (fVar8 * fVar8));
					fVar10 = (fVar10 + fVar9);
					if (unk_0xB7A628320EFF8E47(Global_1604248.f_29766[iVar0 /*31*/], Param0) < fVar10)
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

int func_91(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_37(iVar1, 1, 1) && func_51(iVar1)) && unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
		{
			if ((unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1 && unk_0xA2D6C1E24AF2E058(iVar1) == -1) && !func_32(unk_0x1788E93557766241(), 1))
			{
				return 0;
			}
			else if ((unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1 && !unk_0x1788E93557766241() == iVar1) || !func_89(unk_0x1788E93557766241(), iVar1, -2, 0))
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

int func_92(int iParam0)
{
	if ((Global_2404570.f_437 == 9 || Global_2404570.f_437 == 9) || (Global_2404570.f_437 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_93(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404570.f_1366[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_94(var uParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (Global_2404570.f_515 > 0f)
	{
		fVar3 = unk_0x2A488C176D52CCA5(*uParam0, Global_2404570.f_512);
		if (fVar3 < Global_2404570.f_515)
		{
			if (bParam1)
			{
				Var0 = { *uParam0 };
				func_15(&Var0, Global_2404570.f_512, Global_2404570.f_515, 1036831949, 0);
				if (func_94(&Var0, 0))
				{
					Var0 = { *uParam0 };
					func_15(&Var0, Global_2404570.f_512, Global_2404570.f_515, 1036831949, 1);
				}
				*uParam0 = { Var0 };
			}
			return 1;
		}
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
		if ((iParam8 == 1 && unk_0x1788E93557766241() != iVar1) || iParam8 == 0)
		{
			if (func_37(iVar1, bParam4, bParam5))
			{
				if (unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
				{
					if (!bParam7 || (!unk_0x2DE0B96E966FD817(unk_0xFF34D923BFB5E9FB(iVar1)) && func_51(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) != unk_0xA2D6C1E24AF2E058(iVar1))) || unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1)
						{
							if (((unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1 && iParam9) && bParam6) && func_53(iVar1))
							{
							}
							else if (unk_0x538DF9E5B1DF01EB(unk_0xFF34D923BFB5E9FB(iVar1)))
							{
								if (unk_0x4970185D4CC64616(func_50(iVar1), Param0, 1) < fParam3)
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
	
	iVar3 = unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_37(iVar1, 1, 1))
			{
				if ((!func_109(iVar1, 0) && unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1)) && iVar1 != unk_0x1788E93557766241())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0xA2D6C1E24AF2E058(iVar1) == -1)
						{
							if (unk_0xA2D6C1E24AF2E058(iVar1) == unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0xA2D6C1E24AF2E058(iVar1) == iVar3)
					{
						if (unk_0x4970185D4CC64616(func_50(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x0FC608B6B212C0E5(iVar1, Param0, fParam3))
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
		return Global_1602607[iVar0 /*12*/] != -1;
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
			if (!unk_0x889D01384B54BCE3(Global_2359718[iVar1 /*26*/].f_12, 11))
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
	Global_2408483 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_99(&Global_2408483, uParam1, iParam2 + 1);
	}
}

void func_100(var uParam0, var uParam1, int iParam2)
{
	Global_2408479 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_100(&Global_2408479, uParam1, iParam2 + 1);
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
		Global_2404570.f_1259.f_63[iVar10 /*10*/] = { Var0 };
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
		Global_2404570.f_1259.f_30[iVar4 /*4*/] = { Var0 };
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
		Global_2404570.f_1259.f_5[iVar8 /*8*/] = { Var0 };
		iVar8++;
	}
}

void func_106()
{
	struct<5> Var0;
	
	Var0.f_2 = -1;
	Global_2404570.f_1259 = { Var0 };
}

var func_107()
{
	return Global_1310987.f_4;
}

void func_108(var uParam0, var uParam1)
{
	func_131();
	func_129(uParam0, uParam1);
}

bool func_109(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_110(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
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
	if (Global_1315869[iVar1] == 1)
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
	if (Global_2404570.f_1102 > 0 && func_128(uParam0, uParam1, uParam2))
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
		if (func_127(uParam0, 1))
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
	Global_2408493.f_162 = 0;
	Global_2408493.f_163 = 0;
	Global_2408493.f_164 = -99;
	Global_2408493.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2408493[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2408493.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0x7FC9D214D1B05C31(*uParam0, iVar0, &uVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x94E960B561A37CAE(iVar8))
		{
			unk_0x9B78F4A91B1AAF51(iVar8, &Var1);
			bVar12 = false;
			if (Global_2408493.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2408493.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x45ADF7D9ECA3040B(iVar8)) || unk_0x7F16BE9170F6E59C(iVar8))
			{
				unk_0x52CE93FE280D39B4(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, *uParam0) > uParam2->f_4)
				{
					if (!func_94(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_126(Var1))
									{
										if (Var1.f_2 >= (uParam0->f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
										{
											if (Var1.f_2 <= (uParam0->f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
											{
												if (func_125(Var1, uParam2) || uParam2->f_33 >= 2)
												{
													if ((uParam2->f_48 && !func_127(&Var1, 0)) || uParam2->f_48 == 0)
													{
														Var1 = { func_123(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
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
																if ((uParam2->f_12 && !func_121(Var1, uVar4, uParam2->f_34, unk_0x1788E93557766241(), 0, 1)) || !uParam2->f_12)
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
																				if (func_130(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																			}
																			else if (func_130(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0) && !func_120(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								while (iVar16 < Global_2408493.f_162)
																								{
																									Global_2408493[iVar16 /*3*/] = { 0f, 0f, 0f };
																									Global_2408493.f_121[iVar16] = 0f;
																									iVar16++;
																								}
																								Global_2408493.f_162 = 0;
																								uParam2->f_53 = iVar22;
																							}
																						}
																						if (uParam2->f_30)
																						{
																							if (Global_2408493.f_162 == 0)
																							{
																								Global_2408493[0 /*3*/] = { Var1 };
																								Global_2408493.f_121[0] = uVar4;
																							}
																							else
																							{
																								iVar16 = 0;
																								while (iVar16 < Global_2408493.f_162 + 1)
																								{
																									if (iVar16 < 40)
																									{
																										if (unk_0xB7A628320EFF8E47(Var1, *uParam0) < unk_0xB7A628320EFF8E47(Global_2408493[iVar16 /*3*/], *uParam0))
																										{
																											func_118(Var1, uVar4, iVar16);
																											iVar16 = Global_2408493.f_162 + 1;
																										}
																									}
																									iVar16++;
																								}
																							}
																							Global_2408493.f_162++;
																							if (Global_2408493.f_162 >= 5)
																							{
																								if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																								{
																									iVar0 = 100;
																								}
																								else if (Global_2408493.f_162 == 40)
																								{
																									iVar0 = 100;
																								}
																							}
																						}
																						else
																						{
																							Global_2408493[Global_2408493.f_162 /*3*/] = { Var1 };
																							Global_2408493.f_121[Global_2408493.f_162] = uVar4;
																							Global_2408493.f_162++;
																							if (func_125(Var1, uParam2))
																							{
																								Global_2408493.f_163++;
																							}
																							if (Global_2408493.f_162 >= 10)
																							{
																								if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																								{
																									iVar0 = 100;
																								}
																								else if (Global_2408493.f_162 == 40)
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
				if (Global_2408493.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2408493[0 /*3*/] };
						*uParam1 = Global_2408493.f_121[0];
						return;
					}
					else
					{
						if (Global_2408493.f_163 > 0 && !Global_2408493.f_163 == Global_2408493.f_162)
						{
							func_116(0, uParam2);
						}
						iVar24 = unk_0x444ECD635D5FD45F(0, Global_2408493.f_162);
						Var25 = { Global_2408493[0 /*3*/] };
						uVar28 = Global_2408493.f_121[0];
						Global_2408493[0 /*3*/] = { Global_2408493[iVar24 /*3*/] };
						Global_2408493.f_121[0] = Global_2408493.f_121[iVar24];
						Global_2408493[iVar24 /*3*/] = { Var25 };
						Global_2408493.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2408493[0 /*3*/] };
						*uParam1 = Global_2408493.f_121[0];
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
						iVar0 = unk_0x444ECD635D5FD45F((1 + iVar15), (40 + iVar15));
						unk_0x8C4964C5036133AB(*uParam0, iVar0, &Var1, &uVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_123(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						uVar32 = uVar4;
						if (func_14(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), 1, 1) || func_127(&Var29, 1))
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
				func_115(&Global_1312061, uParam0, uParam1, unk_0x1788E93557766241());
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2408493.f_164 = iVar8;
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
			if (!func_80(*(uParam0[iVar2 /*4*/]), 5f, iParam3, 0, 0))
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
	if (!func_125(Global_2408493[iParam0 /*3*/], uParam1))
	{
		Global_2408493.f_162 = (Global_2408493.f_162 - 1);
		func_117(iParam0);
		if (Global_2408493.f_162 > Global_2408493.f_163)
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
			Global_2408493[iParam0 /*3*/] = { Global_2408493[iParam0 + 1 /*3*/] };
			Global_2408493.f_121[iParam0] = Global_2408493.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_118(struct<3> Param0, var uParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2408493[iParam4 /*3*/] };
	uVar3 = Global_2408493.f_121[iParam4];
	Global_2408493[iParam4 /*3*/] = { Param0 };
	Global_2408493.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2408493.f_162 && iParam4 < 39)
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
		if ((iParam9 == 1 && unk_0x1788E93557766241() != iVar1) || iParam9 == 0)
		{
			if (func_37(iVar1, bParam5, bParam6))
			{
				if (unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
				{
					if (!bParam8 || (!unk_0x2DE0B96E966FD817(unk_0xFF34D923BFB5E9FB(iVar1)) && func_51(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) != unk_0xA2D6C1E24AF2E058(iVar1))) || unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1)
						{
							if (((unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1 && iParam10) && bParam7) && func_53(iVar1))
							{
							}
							else if (unk_0x538DF9E5B1DF01EB(unk_0xFF34D923BFB5E9FB(iVar1)))
							{
								if (func_82(func_50(iVar1), Param0, uParam3, iParam4, 1036831949))
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
	if (func_122(Param0, uParam3, iParam4, iParam5, iParam6) || func_81(Param0, iParam5, iParam7))
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
			if (func_37(iVar1, 0, 1) && func_37(iParam5, 0, 1))
			{
				if (Global_2411255.f_260[iVar0])
				{
					if (func_82(Global_2411255.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_82(func_50(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2411255.f_260[iVar0])
			{
				if (func_82(Global_2411255.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_37(iVar1, 0, 1))
			{
				if (func_82(func_50(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_123(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_124(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x52CE93FE280D39B4(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x400883584ED2E634(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
				func_83(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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
		if (!func_124(Param0, *uParam3, Param6))
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
	Var0 = { unk_0xCC6B7A025E72F529(Param0, *uParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xA0F8A7517A273C05(Param0, *uParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_83(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
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

int func_124(struct<3> Param0, var uParam3, struct<3> Param4)
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

int func_125(struct<3> Param0, var uParam3)
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
				if (unk_0x801B4FC214DEDCB7(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_126(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_45(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2408368[iVar1])
	{
		if (func_44(Param0, &(Global_2407665[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408368[8])
	{
		if (func_44(Param0, &(Global_2407665[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_127(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2404570.f_22.f_16)
	{
		switch (Global_2404570.f_22.f_15)
		{
			case 0:
				if (func_112(*uParam0, Global_2404570.f_22.f_8, Global_2404570.f_22.f_14, 0, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 1:
				if (func_38(*uParam0, Global_2404570.f_22.f_8, Global_2404570.f_22.f_11, 0, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 2:
				if (unk_0x801B4FC214DEDCB7(*uParam0, Global_2404570.f_22.f_8, Global_2404570.f_22.f_11, Global_2404570.f_22.f_14, 0, 1))
				{
					iVar0 = 1;
				}
				break;
		}
		if (bParam1)
		{
			*uParam0 = { func_24(*uParam0, Global_2404570.f_22.f_8, Global_2404570.f_22.f_11, Global_2404570.f_22.f_14, Global_2404570.f_22.f_15, 1036831949, 0) };
		}
	}
	return iVar0;
}

int func_128(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2404570.f_1102 > 0)
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
			if (func_127(uParam0, 1))
			{
			}
		}
		Global_2408493.f_162 = 0;
		Global_2408493.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2408493[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2408493.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404570.f_1102)
		{
			Var1 = { Global_2404570.f_1103[iVar0 /*4*/] };
			uVar4 = Global_2404570.f_1103[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, *uParam0, uParam0->f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_121(Var1, uVar4, uParam2->f_34, unk_0x1788E93557766241(), 0, 1)) || !uParam2->f_12)
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
									if (func_130(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_130(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0) && !func_120(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
													while (iVar5 < Global_2408493.f_162)
													{
														Global_2408493[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2408493.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2408493.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2408493.f_162 == 0)
												{
													Global_2408493[0 /*3*/] = { Var1 };
													Global_2408493.f_121[0] = uVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2408493.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, *uParam0) < unk_0xB7A628320EFF8E47(Global_2408493[iVar5 /*3*/], *uParam0))
															{
																func_118(Var1, uVar4, iVar5);
																iVar5 = Global_2408493.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2408493.f_162++;
												if (Global_2408493.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404570.f_1102;
													}
													else if (Global_2408493.f_162 == 40)
													{
														iVar0 = Global_2404570.f_1102;
													}
												}
											}
											else
											{
												Global_2408493[Global_2408493.f_162 /*3*/] = { Var1 };
												Global_2408493.f_121[Global_2408493.f_162] = uVar4;
												Global_2408493.f_162++;
												if (Global_2408493.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404570.f_1102;
													}
													else if (Global_2408493.f_162 == 40)
													{
														iVar0 = Global_2404570.f_1102;
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
		if (Global_2408493.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2408493[0 /*3*/] };
				*uParam1 = Global_2408493.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2408493.f_163 > 0 && !Global_2408493.f_163 == Global_2408493.f_162)
				{
					func_116(0, uParam2);
				}
				iVar13 = unk_0x444ECD635D5FD45F(0, Global_2408493.f_162);
				Var14 = { Global_2408493[0 /*3*/] };
				uVar17 = Global_2408493.f_121[0];
				Global_2408493[0 /*3*/] = { Global_2408493[iVar13 /*3*/] };
				Global_2408493.f_121[0] = Global_2408493.f_121[iVar13];
				Global_2408493[iVar13 /*3*/] = { Var14 };
				Global_2408493.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2408493[0 /*3*/] };
				*uParam1 = Global_2408493.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_128(uParam0, uParam1, uParam2);
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

void func_129(var uParam0, var uParam1)
{
	unk_0xB773273450D0140B(uParam0, uParam1, 0.1f);
	Global_2404570.f_1242 = unk_0x60C807BBCBE66CC7();
	Global_2404570.f_1240 = 1;
	Global_2404570.f_1243 = unk_0x519586565311459B();
}

int func_130(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404570 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x233BBF4CAB603F14(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xB04974FC0ED6E892(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xB04974FC0ED6E892(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2F82A7CF030B6A1D(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404570++;
	if (bParam13)
	{
		if (unk_0xDBC834909DE748A2(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404570++;
	if (fParam14 > 0f)
	{
		if (func_95(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404570++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_79(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404570++;
	return 1;
}

void func_131()
{
	if (Global_2404570.f_1240)
	{
		if (unk_0x60C807BBCBE66CC7() == Global_2404570.f_1242)
		{
			unk_0x2107A8F4DF8377BA();
		}
		else
		{
			unk_0x2107A8F4DF8377BA();
		}
		Global_2404570.f_1240 = 0;
	}
}

int func_132()
{
	if (unk_0xF4C685E933068D23())
	{
		return 10000;
	}
	return 1000;
}

int func_133(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
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

int func_134(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_135(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xE9849174628A9C50())
		{
			func_136(uParam0, 0, 0);
		}
	}
}

void func_136(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1DAD7CE53BEE7710() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x519586565311459B();
			}
			else
			{
				*uParam0 = unk_0x4EAB1171B13C220B();
			}
		}
		else
		{
			*uParam0 = unk_0x09560C7DE2A384BD();
		}
		uParam0->f_1 = 1;
	}
}

void func_137()
{
	switch (Local_66[unk_0x044A481E863E2F6B() /*3*/].f_2)
	{
		case 0:
			func_170();
			func_169();
			if (func_159())
			{
				func_157();
				func_156();
				func_138(35);
				Local_66[unk_0x044A481E863E2F6B() /*3*/].f_2 = 1;
			}
			else if (Local_55.f_8 >= 1)
			{
				func_156();
				Local_66[unk_0x044A481E863E2F6B() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_55.f_8 >= 2)
			{
				Local_66[unk_0x044A481E863E2F6B() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6843)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_155() /*8064*/].f_5756.f_1795[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_155() /*8064*/].f_5756.f_1795[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_155() /*8064*/].f_5756.f_1795[iVar2 /*3*/].f_1)
			{
				func_151(iVar2, 1);
				unk_0xD0E2BFCE93AE3ABD(&Global_2446058, (8 + iVar2));
				func_146(2103, -1);
				func_142(67, -1);
				func_146(2535, -1);
				func_142(69, -1);
				unk_0x732AC1ACE8A38FF5(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0x889D01384B54BCE3(Global_2446058, 12))
					{
						func_139(7, 0);
					}
					else
					{
						func_139(15, 0);
					}
				}
			}
		}
	}
}

void func_139(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_141(iParam0, iParam1))
	{
		iVar0 = func_140();
		Global_2435463[iVar0] = iParam0;
	}
}

int func_140()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435463[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_141(int iParam0, var uParam1)
{
	if (Global_1315879)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315891) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_144(iParam0, func_145(iParam1));
	iVar0++;
	func_143(iParam0, iVar0, iParam1);
}

void func_143(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2473157[iParam0 /*5*/][func_145(uParam2)];
	unk_0x680350124CC21957(iVar0, iParam1, 1);
}

int func_144(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473157[iParam0 /*5*/][func_145(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_145(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_111();
		if (iVar1 > -1)
		{
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

void func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_150(iParam0, func_145(iParam1), 0);
	iVar0++;
	if (!func_149(iParam0))
	{
		func_148(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_147(iParam0, iVar0, iParam1, 1);
	}
}

void func_147(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_145(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1336437[func_145(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1336443[func_145(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1336449[func_145(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1336455[func_145(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1336413[func_145(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1336419[func_145(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1336425[func_145(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1336431[func_145(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1336389[func_145(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1336395[func_145(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1336401[func_145(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1336407[func_145(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1336461[func_145(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1336467[func_145(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1336473[func_145(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1336479[func_145(iParam2)] = iParam1;
			break;
		
		case 1297:
			Global_1336485[func_145(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1336491[func_145(iParam2)] = iParam1;
			break;
		
		case 1272:
			Global_1336497[func_145(iParam2)] = iParam1;
			break;
		
		case 1869:
			Global_2473821[0 /*6*/][func_145(iParam2)] = iParam1;
			break;
		
		case 2260:
			Global_2473821[1 /*6*/][func_145(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1336503[func_145(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1336509[func_145(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1336515[func_145(iParam2)] = iParam1;
			break;
		
		case 1230:
			Global_1336521[func_145(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_148(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_145(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
}

int func_149(int iParam0)
{
	if (Global_1336370)
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
			case 1297:
			case 634:
			case 1272:
			case 759:
			case 760:
			case 761:
			case 1230:
			case 1869:
			case 2260:
				return 1;
				break;
			}
	}
	return 0;
}

int func_150(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2455246[iParam0 /*5*/][func_145(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_151(int iParam0, int iParam1)
{
	if (Global_2097152[func_155() /*8064*/].f_5756.f_1795[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_155() /*8064*/].f_5756.f_1795[iParam0 /*3*/].f_1 = iParam1;
		func_152(func_154(iParam0), iParam1, -1, 1);
	}
}

void func_152(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_153())
	{
		iVar0 = Global_2471573[iParam0 /*5*/][func_145(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xA65D74B65C28C5D7(iVar0, iParam1, iParam3);
		}
	}
}

int func_153()
{
	return 1;
	return 0;
}

int func_154(int iParam0)
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

int func_155()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_156()
{
	if (unk_0x5660C8AFDD9C1721(uLocal_164))
	{
		unk_0xB6FB9702660D84F6(&uLocal_164);
	}
}

void func_157()
{
	if (!unk_0x889D01384B54BCE3(Global_2422491.f_3274, 0))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_2422491.f_3274), 0);
		func_158();
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_2422491.f_3274), 1);
	}
}

void func_158()
{
	func_146(1183, -1);
}

int func_159()
{
	struct<14> Var0;
	
	if (unk_0x86CB59A6776A7C27(Local_55.f_2))
	{
		if (unk_0x59F7AAEE0CBA2C9F(unk_0x9198B14217D71938(Local_55.f_2), unk_0xA16EC202D9D35357()) && func_168(Local_55.f_2))
		{
			func_167(&(Local_55.f_2));
			if (unk_0x5660C8AFDD9C1721(uLocal_164))
			{
				unk_0xB6FB9702660D84F6(&uLocal_164);
			}
			func_162("ABB_BOXCT", 1);
			Var0.f_2 = 107;
			Var0.f_10 = unk_0x1788E93557766241();
			func_160(Var0, func_161(0));
			unk_0xD0E2BFCE93AE3ABD(&(Local_66[unk_0x044A481E863E2F6B() /*3*/].f_1), 0);
			return 1;
		}
	}
	return 0;
}

void func_160(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x1788E93557766241();
	if (!iParam14 == 0)
	{
		unk_0xD311A006D41D0704(1, &Param0, 14, iParam14);
	}
}

int func_161(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x3F202553F90D4442())
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar1)))
		{
			iVar2 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iVar1));
			if (func_37(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1788E93557766241() || iParam0)
				{
					unk_0xD0E2BFCE93AE3ABD(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_162(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xA6CE1BB0BF7AE715(sParam0);
	iVar0 = unk_0x69CF75457662E450(0, 1);
	func_163(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_163(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_166() || !unk_0x7A75BEF6DA1EDF3D()) || !func_109(unk_0x1788E93557766241(), 0))
	{
		return;
	}
	iVar0 = func_164(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1698841.f_5[iVar0 /*53*/] = iParam0;
		Global_1698841.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1698841.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1698841.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1698841.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1698841.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1698841.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1698841.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_164(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1698841 - 1))
	{
		if (iParam0 > Global_1698841.f_5[iVar0 /*53*/].f_1)
		{
			func_165(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1698841++;
	if (Global_1698841 > 5)
	{
		Global_1698841 = 5;
		return Global_1698841;
	}
	return (Global_1698841 - 1);
}

void func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1698841.f_5[iVar0 /*53*/] = { Global_1698841.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_166()
{
	return unk_0xD5883629B43B6F20(-1762644250);
}

void func_167(var uParam0)
{
	var uVar0;
	
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		if (!unk_0x428E17610BCE75C2(*uParam0))
		{
		}
	}
	if (unk_0xCB5D8B19B62A3B89(*uParam0))
	{
		uVar0 = unk_0xD65CB1FBC5B5BA6A(*uParam0);
		unk_0xD5FE44FF1732DF73(&uVar0);
	}
}

int func_168(var uParam0)
{
	if (unk_0x86CB59A6776A7C27(uParam0))
	{
		unk_0x9B863F3140F59B7F(uParam0);
		return unk_0x428E17610BCE75C2(uParam0);
	}
	return 0;
}

void func_169()
{
	if (!unk_0x5660C8AFDD9C1721(uLocal_164))
	{
		if (unk_0x86CB59A6776A7C27(Local_55.f_2))
		{
			uLocal_164 = unk_0xDF78B7F06503567E(unk_0x9198B14217D71938(Local_55.f_2));
			unk_0xBE97A5A41C1F5C4C(uLocal_164, 1.2f);
			unk_0x2025496D9184D312(uLocal_164, 403);
			unk_0x1AD45E3CF020D50D(uLocal_164, 2);
			unk_0xFDA1FE98ECD75505(uLocal_164, "ABB_BLIPN");
		}
	}
}

void func_170()
{
	var uVar0;
	
	if (!unk_0x11A809BBE3889742())
	{
		uVar0 = func_150(1185, -1, 0);
		if (!unk_0x889D01384B54BCE3(uVar0, 14))
		{
			unk_0xD0E2BFCE93AE3ABD(&uVar0, 14);
			func_148(1185, uVar0, -1, 1);
		}
	}
}

int func_171()
{
	return Local_55.f_0;
}

int func_172()
{
	unk_0x939DA7EBCC6588FF(joaat("prop_drug_package_02"));
	if (unk_0x5494F37F35C1D7D7(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0)
{
	return Local_66[iParam0 /*3*/];
}

int func_174()
{
	bool bVar0;
	
	func_181(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315866 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 1;
		}
	}
	if (func_180())
	{
		return 1;
	}
	if (Global_2437386)
	{
		return 1;
	}
	if (func_179())
	{
		return 1;
	}
	if (func_178(157))
	{
		if (!func_177())
		{
			return 1;
		}
	}
	if (func_178(155))
	{
		return 1;
	}
	if (!unk_0x54CE0989F263D8A3())
	{
		return 1;
	}
	if (func_175() != 0)
	{
		if (unk_0x16CDA1894CFE0781(func_175()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_175()
{
	switch (func_176())
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

int func_176()
{
	return Global_24446;
}

bool func_177()
{
	return Global_2428577.f_572;
}

int func_178(int iParam0)
{
	if (unk_0xA519E4AC66148E87(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_179()
{
	return Global_2435556;
}

bool func_180()
{
	return Global_2428577.f_567;
}

void func_181(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2C15B7979450724C(1))
	{
		iVar1 = unk_0x8B6CEAB2AD1BD1CD(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6A4B863200ABAA44(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 307:
					func_182(iVar0);
					break;
				
				case 2:
					unk_0x6A4B863200ABAA44(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_182(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 3))
	{
		if (func_37(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xFF34D923BFB5E9FB(Var0.f_1);
			if (unk_0x538DF9E5B1DF01EB(uVar3))
			{
				if (unk_0x202EF5D8203705EF(uVar3, 0))
				{
					uVar4 = unk_0x6ADAC08D70C79DE5(uVar3, 0);
					if (unk_0xA7FB2A2F471A969B(uVar4, Var0.f_2) && unk_0x93C72DAC35C5D38C())
					{
						if (func_183(uVar4, &bVar5))
						{
							unk_0x2FC1F6BC6D0D9D77(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x3A3C5A6572B3C611(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_183(var uParam0, var uParam1)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0x22349EC06EA5B08B(uParam0))
		{
			if (unk_0xFD9706CAB35EA810(uParam0))
			{
				unk_0x7B9576B4E099FB1F(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xD8233CB95CB48A7C(uParam0, 0))
		{
			if (unk_0xC7402AE8FD6AACA2(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_184()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_185(struct<20> Param0)
{
	func_190(func_191(Param0.f_0), Param0);
	unk_0x992F36F53DC17762(1);
	func_187(0, -1, 0);
	unk_0x241F80BF72379478(&Local_55, 11);
	unk_0x51FC2B81A21C009A(&Local_66, 97);
	if (!func_186())
	{
		return 0;
	}
	unk_0xFF9F94FD851C212A(0);
	if (unk_0xE9849174628A9C50())
	{
		Local_55.f_7 = Param0.f_16;
		Local_55.f_3 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0) };
		if (!func_3(Global_2446992.f_780.f_1))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_55.f_1), 8);
		}
	}
	iLocal_167 = unk_0x31EF25060710376C();
	Local_66[unk_0x044A481E863E2F6B() /*3*/] = 0;
	return 1;
}

int func_186()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 0;
		}
		if (unk_0x5D0D85F8A1CCEE45())
		{
			return 1;
		}
		if (func_180())
		{
			return 0;
		}
		if (func_178(155))
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

int func_187(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x92078BBBAEFC7998();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_189();
			}
			else
			{
				return 0;
			}
		}
		if (!func_188())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1DAD7CE53BEE7710())
				{
					if (!bParam2)
					{
						func_189();
					}
					else
					{
						return 0;
					}
				}
				if (func_180())
				{
					if (!bParam2)
					{
						func_189();
					}
					else
					{
						return 0;
					}
				}
				if (func_178(155))
				{
					if (!bParam2)
					{
						func_189();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x0987AD2F87AA4427())
			{
				if (!bParam2)
				{
					func_189();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x92078BBBAEFC7998();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			if (!bParam2)
			{
				func_189();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x0987AD2F87AA4427())
	{
		if (!bParam2)
		{
			func_189();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_188()
{
	return Global_1315866;
}

void func_189()
{
	unk_0x82706E6C897B0FA1();
}

void func_190(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		func_189();
	}
	unk_0x3005435C0CFEEE94(uParam0, 0, Param1.f_16);
}

int func_191(int iParam0)
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
		
		case 59:
			return 32;
		
		case 60:
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
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 56:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 2;
		
		case 70:
			return 1;
		
		case 66:
			return 2;
		
		case 67:
			return 4;
		
		case 68:
			return 2;
		
		case 69:
			return 2;
		
		case 52:
			return 1;
		
		case 71:
			return 2;
		
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
			return 0;
		
		case 78:
			return 1;
		
		default:
	}
	return 0;
}

void func_192()
{
	if (unk_0x5660C8AFDD9C1721(uLocal_164))
	{
		unk_0xB6FB9702660D84F6(&uLocal_164);
	}
	func_194();
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0xE9849174628A9C50())
		{
			if (unk_0x86CB59A6776A7C27(Local_55.f_2) && unk_0x428E17610BCE75C2(Local_55.f_2))
			{
				func_167(&(Local_55.f_2));
			}
			Local_55.f_0 = 4;
		}
	}
	if (unk_0x889D01384B54BCE3(Local_55.f_1, 8))
	{
		func_193();
	}
	func_189();
}

void func_193()
{
	Global_2446992.f_780 = 0;
	Global_2446992.f_780.f_1 = { 0f, 0f, 0f };
	Global_2446992.f_780.f_4 = 0f;
}

void func_194()
{
	if (unk_0x889D01384B54BCE3(uLocal_163, 4))
	{
		unk_0x310B8D4323B6B583(unk_0x1788E93557766241(), 0.72f);
		unk_0x2AE2EC6E5A219092(unk_0x1788E93557766241(), 1f);
		unk_0x7198ED9173DD67C3(unk_0x1788E93557766241(), 1f);
		unk_0xA52653539EDBB411(unk_0x1788E93557766241(), 1f);
		func_195(1);
		unk_0x29DB79DD4D939B38(&uLocal_163, 5);
		unk_0x29DB79DD4D939B38(&uLocal_163, 7);
		unk_0x29DB79DD4D939B38(&uLocal_163, 4);
	}
}

void func_195(int iParam0)
{
	var uVar0;
	
	uVar0 = func_196(iParam0, 0);
	unk_0xBB74A3D7C0228EBE(uVar0);
}

char* func_196(int iParam0, bool bParam1)
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

int func_197(int iParam0)
{
	return Global_1583725[iParam0 /*334*/];
}

