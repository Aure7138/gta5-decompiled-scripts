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
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_189(unk_0xCFC72E446B0B3AD7()) != 1)
			{
				func_184();
			}
		}
		if (!func_177(ScriptParam_0))
		{
			func_184();
		}
	}
	while (true)
	{
		func_176();
		if (func_166())
		{
			func_184();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_189(unk_0xCFC72E446B0B3AD7()) != 1)
			{
				func_184();
			}
		}
		if (unk_0x4F0283431254A343() != iLocal_167)
		{
			func_184();
		}
		unk_0x1681D3BDC05D9A0C();
		switch (func_165(unk_0x9725084D4DFE8258()))
		{
			case 0:
				if (func_164())
				{
					if (func_163() == 1)
					{
						Local_66[unk_0x9725084D4DFE8258() /*3*/] = 1;
					}
					else if (func_163() == 4)
					{
						Local_66[unk_0x9725084D4DFE8258() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_163() == 1)
				{
					func_133();
				}
				else if (func_163() == 4)
				{
					Local_66[unk_0x9725084D4DFE8258() /*3*/] = 3;
				}
				if (Local_66[unk_0x9725084D4DFE8258() /*3*/].f_2 == 0)
				{
					if (!unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_55.f_3, 500f, 500f, 500f, 0, 1, 0) && func_189(unk_0xCFC72E446B0B3AD7()) != 1)
					{
						Local_66[unk_0x9725084D4DFE8258() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_131(&(Local_55.f_9));
				if (func_130(&(Local_55.f_9)))
				{
					Local_66[unk_0x9725084D4DFE8258() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_66[unk_0x9725084D4DFE8258() /*3*/] = 4;
			
			case 4:
				func_184();
				break;
		}
		if (unk_0x7EF90A4891193127())
		{
			switch (func_163())
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
		if (func_3(Global_2446533.f_778.f_1))
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
			if (!unk_0x53C457DC61CBEBCA(Local_55.f_2) || Local_55.f_6 != -1)
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
	while (iVar0 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar0)))
		{
			if (Local_55.f_6 == -1)
			{
				if (unk_0x94E72F17611BCD3C(Local_66[iVar0 /*3*/].f_1, 0))
				{
					Local_55.f_6 = iVar0;
				}
			}
			if (!unk_0x94E72F17611BCD3C(Local_55.f_1, 7))
			{
				if (unk_0x94E72F17611BCD3C(Local_66[iVar0 /*3*/].f_1, 1))
				{
					unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 7);
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
	struct<19> Var13;
	
	if (!unk_0x53C457DC61CBEBCA(Local_55.f_2))
	{
		if (func_164())
		{
			if (unk_0xBFEA5FB0489937A1(1))
			{
				fVar5 = 250f;
				Var6 = { Local_55.f_3 };
				if (unk_0x94E72F17611BCD3C(Local_55.f_1, 8))
				{
					Var0 = { Global_2446533.f_778.f_1 };
					uVar3 = Global_2446533.f_778.f_4;
				}
				if (func_189(unk_0xCFC72E446B0B3AD7()) == 7)
				{
					iVar12 = unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7());
					if (Global_1603097.f_73[iVar12 /*5400*/].f_409[0 /*23*/].f_10 > 0f)
					{
						Var6 = { Global_1603097.f_73[iVar12 /*5400*/].f_409[0 /*23*/].f_3 };
						Var9 = { Global_1603097.f_73[iVar12 /*5400*/].f_409[0 /*23*/].f_6 };
						fVar5 = Global_1603097.f_73[iVar12 /*5400*/].f_409[0 /*23*/].f_10;
						iVar4 = 1;
					}
					else if (Global_1603097.f_73[iVar12 /*5400*/].f_409[0 /*23*/].f_9 > 0f)
					{
						Var6 = { Global_1603097.f_73[iVar12 /*5400*/].f_409[0 /*23*/] };
						fVar5 = Global_1603097.f_73[iVar12 /*5400*/].f_409[0 /*23*/].f_9;
					}
				}
				Var13.f_5 = 1115815936;
				Var13.f_4 = 1;
				Var13.f_5 = 30f;
				Var13.f_10 = 1;
				if (iVar4 == 0)
				{
					if (unk_0x94E72F17611BCD3C(Local_55.f_1, 8) || func_129(Var6, fVar5, &Var0, &uVar3, Var13))
					{
						if (Local_55.f_7 >= 32)
						{
							Local_55.f_2 = unk_0x635710BDD2A0E12A(unk_0x81EAD65CFCA98365(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_55.f_2 = unk_0x635710BDD2A0E12A(unk_0x79AC381614D56E06(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0x03D97EDECF2E1859(unk_0xD0B6FBBB171CDD42(Local_55.f_2), uVar3);
					}
				}
				else if (unk_0x94E72F17611BCD3C(Local_55.f_1, 8) || func_7(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_55.f_7 >= 32)
					{
						Local_55.f_2 = unk_0x635710BDD2A0E12A(unk_0x81EAD65CFCA98365(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_55.f_2 = unk_0x635710BDD2A0E12A(unk_0x79AC381614D56E06(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0x03D97EDECF2E1859(unk_0xD0B6FBBB171CDD42(Local_55.f_2), uVar3);
				}
			}
		}
	}
	if (unk_0x53C457DC61CBEBCA(Local_55.f_2))
	{
		return 1;
	}
	return 0;
}

int func_7(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7, var uParam8, struct<8> Param9, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27)
{
	struct<11> Var0;
	struct<24> Var18;
	
	if (Param9.f_5 < 20f)
	{
		Param9.f_5 = 20f;
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_22 = 1;
	Var18.f_23 = 1;
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
	struct<46> Var26;
	bool bVar75;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2404554.f_1197 == *uParam0 || !Global_2404554.f_1197.f_1 == uParam0->f_1) || !Global_2404554.f_1197.f_2 == uParam0->f_2) || !Global_2404554.f_1200 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2404554.f_1211 == uParam0->f_8 || !Global_2404554.f_1211.f_1 == uParam0->f_8.f_1) || !Global_2404554.f_1211.f_2 == uParam0->f_8.f_2) || !Global_2404554.f_1214 == uParam0->f_11) || !Global_2404554.f_1214.f_1 == uParam0->f_11.f_1) || !Global_2404554.f_1214.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2404554.f_1211 == uParam0->f_8 || !Global_2404554.f_1211.f_1 == uParam0->f_8.f_1) || !Global_2404554.f_1211.f_2 == uParam0->f_8.f_2) || !Global_2404554.f_1214 == uParam0->f_11) || !Global_2404554.f_1214.f_1 == uParam0->f_11.f_1) || !Global_2404554.f_1214.f_2 == uParam0->f_11.f_2) || !Global_2404554.f_1217 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2404554.f_1195 == 1)
		{
			if (unk_0x4E8A0A2FF31F0831(Global_2404554.f_1204))
			{
				if (Global_2404554.f_1204 == unk_0x81ACA1EEF1E4410D())
				{
					if (unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Global_2404554.f_1201) < func_128())
					{
						return 0;
					}
				}
				else if (unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Global_2404554.f_1201) < func_128())
				{
					return 0;
				}
			}
			unk_0x4DB27B69961A2559();
			unk_0x1675BDAA2C733B04();
			func_127();
		}
		Global_2404554.f_1195 = 0;
	}
	else if (unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Global_2404554.f_1201) > func_128())
	{
		Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
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
	unk_0xA1D66B742793EE32(fVar4, fVar5, fVar6, fVar7);
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
	if (!Global_2404554.f_1195)
	{
		unk_0x4DB27B69961A2559();
		unk_0x1675BDAA2C733B04();
		func_127();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_126(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x924000FC6B1F6737())
		{
			Global_2404554.f_1218 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2404554.f_1197 = { *uParam0 };
					Global_2404554.f_1200 = uParam0->f_4;
					break;
				
				case 1:
					Global_2404554.f_1211 = { uParam0->f_8 };
					Global_2404554.f_1214 = { uParam0->f_11 };
					Global_2404554.f_1217 = 0f;
					Global_2404554.f_1197 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2404554.f_1211 = { uParam0->f_8 };
					Global_2404554.f_1214 = { uParam0->f_11 };
					Global_2404554.f_1217 = uParam0->f_14;
					Global_2404554.f_1197 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_125(Var8.f_0, Var8.f_1);
			}
			Global_2404554.f_1196 = 1;
			Global_2404554.f_1195 = 1;
			Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
			Global_2404554.f_1201 = unk_0x6A8628B6E9F055B3();
			Global_2404554.f_1204 = unk_0x81ACA1EEF1E4410D();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404554.f_1195)
	{
		if (Global_2404554.f_1196 == 1)
		{
			if (unk_0x7069B4C453FC8202(fVar4, fVar5, fVar6, fVar7) || unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Global_2404554.f_1202) > 5000)
			{
				Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
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
					Var26.f_43 = 1123024896;
					Var26.f_47 = 999;
					Var26.f_48 = 1176256410;
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
					Var26.f_38 = { uParam1->f_13 };
					Var26.f_41 = uParam1->f_16;
					Var26.f_45 = uParam1->f_17;
					func_111(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_110(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404554.f_1196 = 9;
				}
				else
				{
					Global_2404554.f_1196 = 2;
				}
			}
		}
		if (Global_2404554.f_1196 == 2)
		{
			if ((unk_0xDA8A3DB45248F05E(Var11, Var14) || unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Global_2404554.f_1202) > 15000) || unk_0xBF2497D7CA78E973(Var11, Var14) == 0)
			{
				Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
				if (uParam0->f_5 && !func_107(unk_0xCFC72E446B0B3AD7(), 0))
				{
					Global_2404554.f_1196 = 3;
				}
				else
				{
					Global_2404554.f_1196 = 4;
				}
			}
			else if (unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Global_2404554.f_1206) > 7000)
			{
				func_106(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404554.f_1196 == 3)
		{
			if (func_105() || unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Global_2404554.f_1202) > 10000)
			{
				Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
				Global_2404554.f_1196 = 4;
			}
		}
		if (Global_2404554.f_1196 == 4)
		{
			if (unk_0x924000FC6B1F6737())
			{
				unk_0x4DB27B69961A2559();
				unk_0x1675BDAA2C733B04();
			}
			else
			{
				iVar0 = 0;
				func_100();
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
					if (!unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1)
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
							if (unk_0x65512B38F8162B16(unk_0xCFC72E446B0B3AD7(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
								Global_2404554.f_1196 = 5;
							}
							break;
						
						case 1:
							func_99(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (unk_0x9C3D05B738991994(unk_0xCFC72E446B0B3AD7(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
								Global_2404554.f_1196 = 5;
							}
							break;
						
						case 2:
							if (unk_0x9C3D05B738991994(unk_0xCFC72E446B0B3AD7(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
								Global_2404554.f_1196 = 5;
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
					Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
					Global_2404554.f_1196 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x9EE99FAE99FF7734(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_99(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							unk_0x248DC44A9AC23FF1(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0x248DC44A9AC23FF1(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2404554.f_1196 == 5)
		{
			if (func_41(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404554.f_1222.f_4)
				{
					Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
					Global_2404554.f_1196 = 6;
				}
				else
				{
					Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0x4F034F83AF91EC27(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404554.f_1196 = 9;
				}
			}
			else if (unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Global_2404554.f_1202) > 20000)
			{
				unk_0x4DB27B69961A2559();
				unk_0x1675BDAA2C733B04();
				Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
				Global_2404554.f_1196 = 8;
			}
		}
		if (Global_2404554.f_1196 == 6)
		{
			iVar0 = 0;
			Global_2404554.f_1222 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_40(uParam0->f_4))
				{
					if (unk_0xF67FA89DDC5D0BDC(unk_0x8AE51093FA7FBE3F(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_39(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xF67FA89DDC5D0BDC(unk_0x8AE51093FA7FBE3F(Var8)))
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
			Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
			Global_2404554.f_1196 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x9EE99FAE99FF7734(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_99(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					unk_0x248DC44A9AC23FF1(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0x248DC44A9AC23FF1(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2404554.f_1196 == 7)
		{
			if (func_41(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404554.f_1329[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_110(Global_2404554.f_1329[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404554.f_1329[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_37(Global_2404554.f_1329[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2404554.f_1329[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0xABDC7B22D1A3C451(Global_2404554.f_1329[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2404554.f_1329[iVar17 /*3*/] };
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
				Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0x4F034F83AF91EC27(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404554.f_1196 = 9;
			}
			else if (unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), Global_2404554.f_1202) > 20000)
			{
				Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
				Global_2404554.f_1196 = 8;
			}
		}
		if (Global_2404554.f_1196 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_2404554.f_407))
				{
				}
			}
			else if (Global_2404554.f_1222.f_1)
			{
				func_9(uParam2, &(Global_2404554.f_1222.f_5));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar75 = false;
				}
				else
				{
					bVar75 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404554.f_1197 };
				func_11(uParam2[0 /*3*/], 0, bVar75, 0, 0, uParam0, uParam1);
			}
			Global_2404554.f_1202 = unk_0x6A8628B6E9F055B3();
			Global_2404554.f_1196 = 9;
		}
		if (Global_2404554.f_1196 == 9)
		{
			Global_2404554.f_1195 = 0;
			unk_0x4DB27B69961A2559();
			unk_0x1675BDAA2C733B04();
			func_127();
			return 1;
		}
		Global_2404554.f_1201 = unk_0x6A8628B6E9F055B3();
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
	struct<46> Var4;
	var uVar53;
	bool bVar54;
	int iVar55;
	struct<3> Var56;
	struct<3> Var59;
	struct<3> Var62;
	float fVar65;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_43 = 1123024896;
	Var4.f_47 = 999;
	Var4.f_48 = 1176256410;
	if (bParam1)
	{
		iVar55 = 0;
	}
	else
	{
		iVar55 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar55 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var56 = { *uParam5 };
						if (func_40(uParam5->f_4) || !unk_0xF67FA89DDC5D0BDC(unk_0x8AE51093FA7FBE3F(Var56)))
						{
							iVar55 += 4;
						}
						break;
					
					case 1:
						Var56 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_39(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xF67FA89DDC5D0BDC(unk_0x8AE51093FA7FBE3F(Var56)))
						{
							iVar55 += 4;
						}
						break;
					
					case 2:
						Var56 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_39(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xF67FA89DDC5D0BDC(unk_0x8AE51093FA7FBE3F(Var56)))
						{
							iVar55 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar55 += 4;
		}
	}
	if (func_13(*uParam0, &Var0, iVar55, iParam3, 1))
	{
	}
	else
	{
		bVar54 = true;
	}
	if (bVar54)
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
		Var4.f_38 = { uParam6->f_13 };
		Var4.f_41 = uParam6->f_16;
		Var4.f_45 = uParam6->f_17;
		func_111(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var59 = { *uParam5 };
				fVar65 = uParam5->f_4;
				break;
			
			case 1:
				Var59 = { uParam5->f_8 };
				Var62 = { uParam5->f_11 };
				break;
			
			case 2:
				Var59 = { uParam5->f_8 };
				Var62 = { uParam5->f_11 };
				fVar65 = uParam5->f_14;
				break;
		}
		if (!func_12(Var0, uParam5->f_7, Var59, Var62, fVar65))
		{
			if (func_13(*uParam0, &Var0, iVar55, iParam3, 0))
			{
				if (!func_12(Var0, uParam5->f_7, Var59, Var62, fVar65))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var59 + Var62 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var59 };
					}
					if (unk_0x7844FB9DB5F9220C(Var0, &uVar53))
					{
						Var0.f_2 = uVar53;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var59 + Var62 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var59 };
				}
				if (unk_0x7844FB9DB5F9220C(Var0, &uVar53))
				{
					Var0.f_2 = uVar53;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404554.f_523 = 1;
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
			return func_37(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return unk_0xABDC7B22D1A3C451(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_13(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	float fVar0;
	
	if (unk_0x4910ADCDC985F1A9(Param0, 0, uParam3, iParam4))
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
		if (fVar0 < 40f)
		{
			if ((iParam5 == 1 && !func_14(Global_2404554.f_420, &Param0, 0f, 0f, 0f, 0f, bParam6, 1)) || iParam5 == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7, bool bParam8, bool bParam9)
{
	if (func_27(Param0))
	{
		if (func_26(uParam3, bParam8, 0, 1))
		{
			if (bParam8)
			{
			}
			return 1;
		}
	}
	if (func_17(uParam3, bParam8, 1))
	{
		if (bParam8)
		{
		}
		return 1;
	}
	if (bParam9)
	{
		if (func_16(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	if (unk_0x2A488C176D52CCA5(*uParam3, Param4) < fParam7)
	{
		if (bParam8)
		{
			func_15(uParam3, Param4, fParam7, 1036831949, 0);
		}
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

int func_16(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404554.f_1423[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_17(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_25();
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (Global_2404554.f_286[iVar0 /*12*/].f_9 == 1)
		{
			if (func_24(*uParam0, &(Global_2404554.f_286[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					Var1 = { *uParam0 };
					func_18(&Var1, &(Global_2404554.f_286[iVar0 /*12*/]), 1036831949, 0, bParam2);
					if (func_17(&Var1, 0, 0))
					{
						Var1 = { *uParam0 };
						func_18(&Var1, &(Global_2404554.f_286[iVar0 /*12*/]), 1036831949, 1, bParam2);
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

void func_18(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_23(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404554.f_1422) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_23(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_23(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_15(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404554.f_1422) * uParam1->f_8)), fParam2, bParam3);
				break;
			
			case 1:
				func_22(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_19(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_19(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
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
	Var6 = { func_21(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x2DFCF5504EF3D1B9(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_20(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_20(Var6, Var3) >= 0f)
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
		Var6 = { func_21(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_21(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x2DFCF5504EF3D1B9(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_20(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_20(Var6, Var29) >= 0f)
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

float func_20(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_21(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_22(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

Vector3 func_23(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_15(&Param0, Param3, fParam9, fParam11, bParam12);
			break;
		
		case 1:
			func_22(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_19(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0xB60134452ED5852A(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_110(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_37(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0xABDC7B22D1A3C451(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_24(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_110(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404554.f_1422) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_37(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xABDC7B22D1A3C451(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xABDC7B22D1A3C451(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0xABDC7B22D1A3C451(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xABDC7B22D1A3C451(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_25()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404554.f_286[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_26(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2406602[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2406602[iVar0 /*17*/].f_16))
			{
				if (func_24(*uParam0, &(Global_2406602[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2406602[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2406602[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_18(&Var1, &(Global_2406602[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_26(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_18(&Var1, &(Global_2406602[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_27(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!func_31(unk_0xCFC72E446B0B3AD7(), 1))
	{
		return 1;
	}
	if (!Global_2404554.f_423)
	{
		if (!func_30(Param0, 1008981770))
		{
			if (!func_26(&Param0, 0, 0, 0))
			{
				return 1;
			}
			else if (func_26(&Param0, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = func_29(Param0, 1008981770);
			if (iVar0 > -1)
			{
				Var1 = { func_28(&(Global_2404554.f_39[iVar0 /*12*/])) };
				if (!func_26(&Var1, 0, 0, 0))
				{
					if (!func_26(&Param0, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_28(var uParam0)
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

int func_29(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2404554.f_39[iVar0 /*12*/].f_9)
		{
			if (func_24(Param0, &(Global_2404554.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_30(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2404554.f_39[iVar0 /*12*/].f_9)
		{
			if (func_24(Param0, &(Global_2404554.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_31(int iParam0, bool bParam1)
{
	if (Global_1312449 != 0)
	{
		return func_35(iParam0) != 0;
	}
	return func_32(iParam0, bParam1);
}

int func_32(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_33(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582869[iParam0 /*332*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_33(int iParam0)
{
	return func_34(iParam0);
}

bool func_34(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_13.f_1, 0);
}

int func_35(int iParam0)
{
	if (func_36(iParam0, 0, 1))
	{
		return Global_2414035[iParam0 /*254*/].f_1;
	}
	return 0;
}

int func_36(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xCB29E1C3D086FBAE(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_37(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_38(&Param3, &Param6);
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

void func_38(var uParam0, var uParam1)
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

int func_39(struct<3> Param0, struct<3> Param3, float fParam6)
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

int func_40(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_41(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404554.f_1222 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x7DD2047C49658D8C(&(Global_2404554.f_1222)))
			{
				case 0:
					if (uParam2->f_7 && Global_2404554.f_444.f_7 == 0)
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
							*(uParam0[0 /*3*/]) = { Global_2404554.f_1197 };
						}
						if (uParam1->f_5 && func_10(Global_2404554.f_407))
						{
							if (!Global_2404554.f_1222.f_4)
							{
								Global_2404554.f_1222.f_4 = 1;
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
						uParam0->f_10[0] = unk_0x3250987ED5A577C0(0f, 360f);
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
		else if (unk_0x924000FC6B1F6737())
		{
			if (!unk_0xF6F4FD2390386EE3())
			{
				if (unk_0x39A3625A1CBD23ED())
				{
					Global_2404554.f_1222 = unk_0x6E3B1652DC37DF64();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0x1675BDAA2C733B04();
				Global_2404554.f_1222.f_4 = 1;
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
		func_96(Global_2404554.f_444, &(Global_2404554.f_1222.f_30), &(Global_2404554.f_1222.f_63));
	}
	if (uParam2->f_7 && !Global_2404554.f_1222.f_3)
	{
		Global_2404554.f_1222.f_3 = 1;
		func_46(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
	if (Global_2404554.f_1222 > 0)
	{
		if (uParam1->f_5 || unk_0x924000FC6B1F6737())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404554.f_1222)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404554.f_1222.f_2)
					{
						iVar4 = Global_2404554.f_1222.f_2 + 1;
					}
					if (iVar4 > (Global_2404554.f_1222 - 1))
					{
						iVar4 = (Global_2404554.f_1222 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xB0C7F1090A13E36E(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0xA700156A947EB4E1(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0x5178DA9895962FE2(iVar4);
					}
					else
					{
						unk_0x94F39F8E31E5B1A5(iVar4, &iVar5);
					}
					func_46(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404554.f_1222.f_2 = iVar4;
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
			iVar4 = Global_2404554.f_1222;
		}
		if (Global_2404554.f_1222 == iVar4)
		{
			if (uParam1->f_5 && func_10(Global_2404554.f_407))
			{
				if (Global_2404554.f_1222.f_1)
				{
					func_9(uParam0, &(Global_2404554.f_1222.f_5));
					func_45(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404554.f_1197 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x3250987ED5A577C0(0f, 360f);
					func_45(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404554.f_1222.f_1)
			{
				func_9(uParam0, &(Global_2404554.f_1222.f_5));
				func_45(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x073B65E051D2F03E(0, Global_2404554.f_1222);
				unk_0xB0C7F1090A13E36E(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_42(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_45(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404554.f_1197 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x3250987ED5A577C0(0f, 360f);
					func_45(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404554.f_1197 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0x3250987ED5A577C0(0f, 360f);
				func_45(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404554.f_1197 };
		if (uParam1->f_5 && func_10(Global_2404554.f_407))
		{
			if (!Global_2404554.f_1222.f_4)
			{
				Global_2404554.f_1222.f_4 = 1;
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
		uParam0->f_10[0] = unk_0x3250987ED5A577C0(0f, 360f);
		func_45(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

int func_42(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_44(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2407505[iVar4])
	{
		if (func_43(Var1, &(Global_2406739[iVar4 /*85*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_19(&Var1, Global_2406739[iVar4 /*85*/][iVar0 /*7*/], Global_2406739[iVar4 /*85*/][iVar0 /*7*/].f_3, Global_2406739[iVar4 /*85*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2407505[8])
	{
		if (func_43(Var1, &(Global_2406739[8 /*85*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_19(&Var1, Global_2406739[iVar4 /*85*/][iVar0 /*7*/], Global_2406739[iVar4 /*85*/][iVar0 /*7*/].f_3, Global_2406739[iVar4 /*85*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_43(struct<3> Param0, var uParam3)
{
	return unk_0xABDC7B22D1A3C451(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_44(struct<2> Param0, var uParam2)
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

void func_45(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404554.f_1329[(3 - iVar0) /*3*/] = { Global_2404554.f_1329[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404554.f_1329[0 /*3*/] = { Param0 };
}

void func_46(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
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
	struct<8> Var11;
	bool bVar19;
	bool bVar20;
	
	iVar9 = 0;
	iVar7 = 0;
	bVar8 = false;
	if (uParam4->f_5)
	{
		if (Global_2404554.f_407 == 1)
		{
			if (unk_0xE3DAC530D2CCDAE3((Global_2404554.f_420.f_2 - Param0.f_2)) < 25f)
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
		if (func_31(unk_0xCFC72E446B0B3AD7(), 1))
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
		if (!func_95(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x055C4F1E1B74AD28(unk_0x9F92518438215DD0(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x055C4F1E1B74AD28(unk_0x9F92518438215DD0(), Param0, 20f))
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
		if (!func_94(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar7 += 32;
		}
	}
	else
	{
		iVar7 += 32;
	}
	if (unk_0x652D2EEEF1D3E62C(uParam5->f_13) > 0f)
	{
		if (unk_0x2A488C176D52CCA5(Param0, uParam5->f_13) > uParam5->f_16)
		{
			iVar7 += 64;
		}
	}
	else
	{
		iVar7 += 64;
	}
	if (uParam4->f_5)
	{
		if (!Global_2404554.f_542)
		{
			if (func_27(Global_2404554.f_420))
			{
				if ((!func_26(&Param0, 0, 0, 0) && !func_17(&Param0, 0, 0)) && !func_93(&Param0, 0))
				{
					iVar7 += 128;
				}
			}
			else if ((!func_17(&Param0, 0, 0) && !func_93(&Param0, 0)) && !func_16(Param0, 0.5f))
			{
				iVar7 += 128;
			}
		}
		else
		{
			iVar7 += 128;
		}
	}
	else if (!func_92(Param0, 2.5f, 3))
	{
		iVar7 += 128;
	}
	if (uParam4->f_5)
	{
		if (func_85(Param0, fParam3, uParam4->f_15, func_91(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 256;
			iVar7 += 512;
		}
		else
		{
			iVar9 = Global_2404554.f_1;
		}
	}
	else if (!func_79(Param0, 25f, unk_0xCFC72E446B0B3AD7(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_78(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 512;
			iVar7 += 256;
		}
		else if (!func_78(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 256;
		}
	}
	if (uParam4->f_5)
	{
		if (!(func_77(unk_0xCFC72E446B0B3AD7()) && func_75(unk_0xCFC72E446B0B3AD7())))
		{
			if (!func_74(&Param0, &(Global_2404554.f_1222.f_63), 0, 1065353216))
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
		if (!func_75(unk_0xCFC72E446B0B3AD7()))
		{
			if (!func_73(Param0, &(Global_2404554.f_1222.f_30), &(Global_2404554.f_1222.f_63), 1073741824))
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
	if (func_72(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_72(Param0))
			{
				if (func_10(Global_2404554.f_407))
				{
					if (func_30(Param0, 1f))
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
		if (func_71(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404554.f_39.f_31)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0xF67FA89DDC5D0BDC(unk_0x8AE51093FA7FBE3F(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0xF67FA89DDC5D0BDC(unk_0x8AE51093FA7FBE3F(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (!func_42(&Param0, 0))
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
	else if (func_70(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var11.f_2 = 1176256410;
	bVar19 = false;
	bVar20 = false;
	iVar10 = 0;
	while (iVar10 < 3)
	{
		if (iVar7 >= Global_2404554.f_1222.f_5[iVar10 /*8*/])
		{
			if (uParam4->f_5)
			{
				if (!bVar19)
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
						fVar0 = func_62(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					else
					{
						fVar0 = func_62(Param0, Global_2404554.f_1197, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar19 = true;
				}
				if ((func_10(Global_2404554.f_407) && iVar7 == Global_2404554.f_1222.f_5[iVar10 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar20)
					{
						fVar2 = func_60(Param0);
						bVar20 = true;
					}
					if (fVar2 < Global_2404554.f_1222.f_5[iVar10 /*8*/].f_2)
					{
						Var11.f_4 = { Param0 };
						Var11.f_7 = fParam3;
						Var11.f_0 = iVar7;
						Var11.f_1 = fVar0;
						Var11.f_2 = fVar2;
						func_59(Var11, iVar10);
						Global_2404554.f_1222.f_1 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404554.f_1222.f_5[iVar10 /*8*/] || (iVar7 == Global_2404554.f_1222.f_5[iVar10 /*8*/] && fVar0 > Global_2404554.f_1222.f_5[iVar10 /*8*/].f_1))
				{
					Var11.f_4 = { Param0 };
					Var11.f_7 = fParam3;
					Var11.f_0 = iVar7;
					Var11.f_1 = fVar0;
					func_59(Var11, iVar10);
					Global_2404554.f_1222.f_1 = 1;
					return;
				}
			}
			else
			{
				if (!bVar19)
				{
					if (uParam4->f_15)
					{
						fVar1 = 3.5f;
					}
					else
					{
						fVar1 = 1f;
					}
					fVar5 = func_58(Param0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_48(Param0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = func_47(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = func_47(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					bVar19 = true;
				}
				if (iVar7 > Global_2404554.f_1222.f_5[iVar10 /*8*/] || (iVar7 == Global_2404554.f_1222.f_5[iVar10 /*8*/] && fVar3 > Global_2404554.f_1222.f_5[iVar10 /*8*/].f_3))
				{
					Var11.f_4 = { Param0 };
					Var11.f_7 = fParam3;
					Var11.f_0 = iVar7;
					Var11.f_3 = fVar3;
					func_59(Var11, iVar10);
					Global_2404554.f_1222.f_1 = 1;
					return;
				}
			}
		}
		iVar10++;
	}
}

float func_47(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_48(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
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
		if (func_36(iVar7, 1, 1))
		{
			if (!iVar7 == unk_0xCFC72E446B0B3AD7() || iParam5 == 1)
			{
				bVar3 = false;
				if (bParam3)
				{
					if (func_51(iVar7))
					{
						bVar3 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x59A4BF97B76AD953(iVar7) == unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))
					{
						if (!unk_0x59A4BF97B76AD953(iVar7) == -1 || !func_31(unk_0xCFC72E446B0B3AD7(), 1))
						{
							bVar3 = true;
						}
					}
				}
				if (bVar3)
				{
					if (unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar7) || !bParam6)
					{
						if (func_50(iVar7))
						{
							Var4 = { func_49(iVar7) };
							if (!bParam6)
							{
								if (Var4.f_2 < -100f)
								{
									Var4.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x91EAD4F2F9B5B38A(Param0, Var4, 1);
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

Vector3 func_49(int iParam0)
{
	return unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(iParam0), 0);
}

int func_50(int iParam0)
{
	if (unk_0x706AF1DFAF966E35(unk_0x4E6043D225B9C75F(iParam0)) || Global_2414035[iParam0 /*254*/].f_239)
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0)
{
	if (func_36(iParam0, 0, 1))
	{
		if (!func_56(iParam0))
		{
			if (unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iParam0))
			{
				if (!unk_0x59A4BF97B76AD953(iParam0) == unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))
				{
					if (func_32(unk_0xCFC72E446B0B3AD7(), 1))
					{
						if (!func_55(unk_0x59A4BF97B76AD953(iParam0), unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7())))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x59A4BF97B76AD953(iParam0) == -1 && unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1)
				{
					if (!func_32(unk_0xCFC72E446B0B3AD7(), 1))
					{
						if (!func_52(iParam0))
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

int func_52(int iParam0)
{
	if (func_54(unk_0xCFC72E446B0B3AD7(), iParam0))
	{
		return 1;
	}
	Global_2445561 = { func_53(iParam0) };
	if (unk_0x9E1C8024B80AA59C(&Global_2445561))
	{
		return 1;
	}
	return 0;
}

struct<13> func_53(var uParam0)
{
	struct<13> Var0;
	
	unk_0x4DB2D434F7F3C6B1(uParam0, &Var0, 13);
	return Var0;
}

int func_54(int iParam0, var uParam1)
{
	if (unk_0xEBD30B93B1EED82E())
	{
		Global_2445561 = { func_53(iParam0) };
		Global_2445574 = { func_53(uParam1) };
		if (unk_0x1F0B5C273160FECE(&Global_2445561))
		{
			if (unk_0x1F0B5C273160FECE(&Global_2445574))
			{
				unk_0xFFB76AAE8F413B73(&Global_2445491, 35, &Global_2445561);
				unk_0xFFB76AAE8F413B73(&Global_2445526, 35, &Global_2445574);
				if (Global_2445491 == Global_2445526)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_55(int iParam0, int iParam1)
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
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 0);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 1);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 2);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 4);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 5);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 6);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 8);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 9);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 10);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 12);
				
				case 1:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 13);
				
				case 2:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 14);
				
				case 3:
					return unk_0x94E72F17611BCD3C(Global_1603097.f_33, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_56(int iParam0)
{
	if (func_107(iParam0, 0))
	{
		return 1;
	}
	if (func_57())
	{
		if (iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			return 1;
		}
	}
	if (unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_57()
{
	return unk_0x94E72F17611BCD3C(Global_2359301, 3);
}

float func_58(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_36(unk_0xCFC72E446B0B3AD7(), 1, 1))
		{
			if (!unk_0x2E9CF5C574019636())
			{
				if (unk_0xE298336AB6E66F7E(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0));
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
		if (func_36(iVar1, 1, 1))
		{
			if (!func_107(iVar1, 0) && unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xCFC72E446B0B3AD7()))
				{
					if (func_50(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x59A4BF97B76AD953(iVar1) != unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))) || unk_0x59A4BF97B76AD953(iVar1) == -1)
							{
								if (unk_0x2C7D3FB84365CF4E(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x59A4BF97B76AD953(iVar1) != iParam7 || unk_0x59A4BF97B76AD953(iVar1) == -1)
						{
							if (unk_0x2C7D3FB84365CF4E(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(iVar1), 0));
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

void func_59(struct<8> Param0, int iParam8)
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404554.f_1222.f_5[iParam8 /*8*/] };
	Global_2404554.f_1222.f_5[iParam8 /*8*/] = { Param0 };
	if (iParam8 < 2)
	{
		func_59(Var0, iParam8 + 1);
	}
}

float func_60(struct<3> Param0)
{
	var uVar0;
	
	return func_61(Param0, &(Global_2404554.f_39), &uVar0);
}

float func_61(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404554.f_1422) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_62(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9)
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
		fVar0 = func_47(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	fVar0 = func_47(func_48(Param0, 1, 0, 0, 1), 0f, func_69(), func_67(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar0 = func_47(func_65(Param0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar4 = 100f;
	if (unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1 && !func_31(unk_0xCFC72E446B0B3AD7(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_47(func_64(Param0, unk_0xCFC72E446B0B3AD7(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bParam7)
	{
		if (func_63(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_47(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_47(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_47(unk_0x2A488C176D52CCA5(Global_2404554.f_420, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_63(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0xCD55F9503AC32C6E(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x8B8E0478251CF88E(uVar3))
	{
		unk_0xCF52CDAB0176B8BB(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0xE3DAC530D2CCDAE3((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_64(struct<3> Param0, int iParam3, int iParam4)
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
			if (func_36(iVar3, 0, 1))
			{
				if (unk_0x59A4BF97B76AD953(iVar3) != unk_0x59A4BF97B76AD953(iParam3) || (unk_0x59A4BF97B76AD953(iVar3) == -1 && unk_0x59A4BF97B76AD953(iParam3) == -1))
				{
					if (Global_2410963.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2410963.f_130[iVar2 /*3*/], Param0);
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

float func_65(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x6E83F85086466E82(unk_0x9F92518438215DD0(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0x746960881FB19A89(uVar6[iVar2]))
		{
			if (!unk_0x0BA451447C3B1A8D(uVar6[iVar2]))
			{
				if (func_66(uVar6[iVar2]))
				{
					Var3 = { unk_0x77009B1C011405A9(uVar6[iVar2], 1) };
					fVar1 = unk_0x91EAD4F2F9B5B38A(Param0, Var3, 1);
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

int func_66(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x859AF9B2709EF054(uParam0);
	switch (unk_0xAD1B30EA74D6348D(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0xAD1B30EA74D6348D(uVar0, Global_1574020[unk_0xCFC72E446B0B3AD7()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] == 0)
	{
		iVar1 = unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0xAD1B30EA74D6348D(uVar0, Global_1573731[iVar1]))
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

float func_67()
{
	if (func_68())
	{
		if ((unk_0xDB519A4108C6BFB1(Global_2404554.f_39.f_43) || unk_0xAAF77E03CD60491E(Global_2404554.f_39.f_43)) || Global_2404554.f_39.f_43 == joaat("rhino"))
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

int func_68()
{
	if (Global_2404554.f_39.f_41 && !Global_2404554.f_39.f_240)
	{
		if (!func_56(unk_0xCFC72E446B0B3AD7()))
		{
			return 1;
		}
	}
	return 0;
}

float func_69()
{
	if (func_68())
	{
		if ((unk_0xDB519A4108C6BFB1(Global_2404554.f_39.f_43) || unk_0xAAF77E03CD60491E(Global_2404554.f_39.f_43)) || Global_2404554.f_39.f_43 == joaat("rhino"))
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

int func_70(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x65473DAE13685EEB(Param0, fParam7)) || (fVar0 > 0f && unk_0x04F609D23DD56222(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0xDFE956DB96641937(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0xDFE956DB96641937(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_71(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404554.f_39.f_31)
	{
		if (unk_0xF67FA89DDC5D0BDC(Global_2404554.f_39.f_32))
		{
			if (!unk_0xB0164DDCBF420548(Param0))
			{
				uVar0 = unk_0x8AE51093FA7FBE3F(Param0);
				if (unk_0xF67FA89DDC5D0BDC(uVar0))
				{
					iVar1 = unk_0x863D77F0F83867DF(uVar0);
					if (!iVar1 == Global_2404554.f_39.f_33)
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

int func_72(struct<3> Param0)
{
	switch (Global_2404554.f_1218)
	{
		case 0:
			return func_110(Param0, Global_2404554.f_1197, Global_2404554.f_1200, 0, 0);
			break;
		
		case 1:
			return func_37(Param0, Global_2404554.f_1211, Global_2404554.f_1214, 0, 0);
			break;
		
		case 2:
			return unk_0xABDC7B22D1A3C451(Param0, Global_2404554.f_1211, Global_2404554.f_1214, Global_2404554.f_1217, 0, 1);
			break;
	}
	return 0;
}

int func_73(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0xABDC7B22D1A3C451(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_74(var uParam0, var uParam1, bool bParam2, float fParam3)
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

int func_75(int iParam0)
{
	switch (Global_1312449)
	{
		case 0:
			if (!func_76(iParam0))
			{
				if (Global_1582869[iParam0 /*332*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_76(int iParam0)
{
	return Global_1582869[iParam0 /*332*/].f_173 != 0;
}

int func_77(int iParam0)
{
	if (func_32(iParam0, 1))
	{
		if (Global_1582869[iParam0 /*332*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_78(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_36(unk_0xCFC72E446B0B3AD7(), 1, 1))
		{
			if (!unk_0x2E9CF5C574019636())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x91EAD4F2F9B5B38A(func_49(unk_0xCFC72E446B0B3AD7()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE298336AB6E66F7E(Param0, fParam3))
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
		if (func_36(iVar1, 1, 1))
		{
			if (!func_107(iVar1, 0) && unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xCFC72E446B0B3AD7()))
				{
					if ((func_50(iVar1) || !bParam10) && !Global_2414035[iVar1 /*254*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x59A4BF97B76AD953(iVar1) == -1)
							{
								if (unk_0x59A4BF97B76AD953(iVar1) == unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x59A4BF97B76AD953(iVar1) != unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))) || unk_0x59A4BF97B76AD953(iVar1) == -1)
							{
								if (unk_0x91EAD4F2F9B5B38A(func_49(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x2C7D3FB84365CF4E(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x59A4BF97B76AD953(iVar1) != iParam8 || unk_0x59A4BF97B76AD953(iVar1) == -1)
						{
							if (unk_0x91EAD4F2F9B5B38A(func_49(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x2C7D3FB84365CF4E(iVar1, Param0, fParam3))
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

int func_79(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_84(Param0, fParam3, iParam4, iParam5) || func_80(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_80(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_81(Param0, Global_2410963.f_293[iVar0 /*3*/], Global_2410963.f_390[iVar0], Global_2410963.f_423[iVar0], 1036831949))
			{
				if (func_36(iVar1, 0, 1) && func_36(iParam3, 0, 1))
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

int func_81(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_83(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_82(&Var0, 0f, 0f, uParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		unk_0x6BD8057B0B6EC46D(iParam7, &Var3, &Var6);
		fVar9 = unk_0xE3DAC530D2CCDAE3((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0xE3DAC530D2CCDAE3((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0xE3DAC530D2CCDAE3((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		return unk_0xABDC7B22D1A3C451(Param0, Var12, Var15, fVar10, 0, 1);
	}
	return 0;
}

void func_82(var uParam0, struct<3> Param1)
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

float func_83(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	unk_0x6BD8057B0B6EC46D(iParam0, &Var0, &Var3);
	Var6 = { Var3 - Var0 };
	return (unk_0x71D93B57D07F9804((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f)))) + fParam1);
}

int func_84(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (func_36(iVar1, 0, 1) && func_36(iParam4, 0, 1))
			{
				if (Global_2410963.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2410963.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_49(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2410963.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2410963.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_36(iVar1, 0, 1))
			{
				if (unk_0x2A488C176D52CCA5(func_49(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_85(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404554.f_1 = 0;
	if (!func_79(Param0, 0.5f, unk_0xCFC72E446B0B3AD7(), 0, 0))
	{
		Global_2404554.f_1++;
		if (bParam5)
		{
			if (func_126(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404554.f_1 = (Global_2404554.f_1 + Global_2404554);
				if (!func_90(Param0, fParam12))
				{
					Global_2404554.f_1++;
					if (!func_89(Param0))
					{
						Global_2404554.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404554.f_1 = (Global_2404554.f_1 + Global_2404554);
			}
		}
		else if (!bParam4)
		{
			if (func_126(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404554.f_1 = (Global_2404554.f_1 + Global_2404554);
				if (!func_90(Param0, fParam12))
				{
					Global_2404554.f_1++;
					if (!func_86(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404554.f_1++;
						if (!func_89(Param0))
						{
							Global_2404554.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404554.f_1 = (Global_2404554.f_1 + Global_2404554);
			}
		}
		else if (func_126(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
		{
			Global_2404554.f_1 = (Global_2404554.f_1 + Global_2404554);
			if (!func_90(Param0, fParam12))
			{
				Global_2404554.f_1++;
				if (!func_86(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404554.f_1++;
					if (!func_89(Param0))
					{
						Global_2404554.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404554.f_1 = (Global_2404554.f_1 + Global_2404554);
		}
	}
	return 0;
}

int func_86(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xCFC72E446B0B3AD7() == iVar1)
		{
			if ((func_36(iVar1, 1, 1) && func_50(iVar1)) && unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1))
			{
				if (!func_88(unk_0xCFC72E446B0B3AD7(), iVar1, -2, 0))
				{
					if (func_87(func_49(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_87(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0xABDC7B22D1A3C451(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x59A4BF97B76AD953(iParam0) == -1 && unk_0x59A4BF97B76AD953(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x59A4BF97B76AD953(iParam0) == unk_0x59A4BF97B76AD953(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x59A4BF97B76AD953(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x59A4BF97B76AD953(iParam0) == iParam2;
	}
	return unk_0x59A4BF97B76AD953(iParam0) == iParam2;
}

int func_89(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (func_32(unk_0xCFC72E446B0B3AD7(), 1))
	{
		if (Global_1603097.f_28679 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1603097.f_28679)
			{
				if (Global_1603097.f_28680[iVar0 /*31*/].f_7 != 0)
				{
					unk_0x6BD8057B0B6EC46D(Global_1603097.f_28680[iVar0 /*31*/].f_7, &Var1, &Var4);
					fVar7 = (unk_0xE3DAC530D2CCDAE3((Var1.f_1 - Var4.f_1)) * 0.5f);
					fVar8 = (unk_0xE3DAC530D2CCDAE3((Var1.f_0 - Var4.f_0)) * 0.5f);
					fVar9 = (unk_0xE3DAC530D2CCDAE3((Var1.f_2 - Var4.f_2)) * 0.5f);
					fVar10 = ((fVar7 * fVar7) + (fVar8 * fVar8));
					fVar10 = (fVar10 + fVar9);
					if (unk_0xB7A628320EFF8E47(Global_1603097.f_28680[iVar0 /*31*/], Param0) < fVar10)
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

int func_90(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_36(iVar1, 1, 1) && func_50(iVar1)) && unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1))
		{
			if ((unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1 && unk_0x59A4BF97B76AD953(iVar1) == -1) && !func_31(unk_0xCFC72E446B0B3AD7(), 1))
			{
				return 0;
			}
			else if ((unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1 && !unk_0xCFC72E446B0B3AD7() == iVar1) || !func_88(unk_0xCFC72E446B0B3AD7(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_49(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_91(int iParam0)
{
	if ((Global_2404554.f_407 == 9 || Global_2404554.f_407 == 9) || (Global_2404554.f_407 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_92(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404554.f_1329[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_93(var uParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (Global_2404554.f_478 > 0f)
	{
		fVar3 = unk_0x2A488C176D52CCA5(*uParam0, Global_2404554.f_475);
		if (fVar3 < Global_2404554.f_478)
		{
			if (bParam1)
			{
				Var0 = { *uParam0 };
				func_15(&Var0, Global_2404554.f_475, Global_2404554.f_478, 1036831949, 0);
				if (func_93(&Var0, 0))
				{
					Var0 = { *uParam0 };
					func_15(&Var0, Global_2404554.f_475, Global_2404554.f_478, 1036831949, 1);
				}
				*uParam0 = { Var0 };
			}
			return 1;
		}
	}
	return 0;
}

int func_94(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xCFC72E446B0B3AD7() != iVar1) || iParam8 == 0)
		{
			if (func_36(iVar1, bParam4, bParam5))
			{
				if (unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1))
				{
					if (!bParam7 || (!unk_0x3E0478C40AB5B38D(unk_0x4E6043D225B9C75F(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) != unk_0x59A4BF97B76AD953(iVar1))) || unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1)
						{
							if (((unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1 && iParam9) && bParam6) && func_52(iVar1))
							{
							}
							else if (unk_0x746960881FB19A89(unk_0x4E6043D225B9C75F(iVar1)))
							{
								if (unk_0x91EAD4F2F9B5B38A(func_49(iVar1), Param0, 1) < fParam3)
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

int func_95(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_36(iVar1, 1, 1))
			{
				if ((!func_107(iVar1, 0) && unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1)) && iVar1 != unk_0xCFC72E446B0B3AD7())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x59A4BF97B76AD953(iVar1) == -1)
						{
							if (unk_0x59A4BF97B76AD953(iVar1) == unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x59A4BF97B76AD953(iVar1) == iVar3)
					{
						if (unk_0x91EAD4F2F9B5B38A(func_49(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0x2C7D3FB84365CF4E(iVar1, Param0, fParam3))
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

void func_96(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0x94E72F17611BCD3C(Global_2359718[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359718[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359718[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359718[iVar1 /*26*/].f_6.f_2;
					func_98(&Var2, uParam3, iVar0);
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
				func_97(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_97(var uParam0, var uParam1, int iParam2)
{
	Global_2408333 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_97(&Global_2408333, uParam1, iParam2 + 1);
	}
}

void func_98(var uParam0, var uParam1, int iParam2)
{
	Global_2408329 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_98(&Global_2408329, uParam1, iParam2 + 1);
	}
}

void func_99(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_38(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*uParam8 = (fVar0 * 0.5f);
}

void func_100()
{
	func_104();
	func_103();
	func_102();
	func_101();
}

void func_101()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404554.f_1222.f_63[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_102()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404554.f_1222.f_30[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_103()
{
	struct<8> Var0;
	int iVar8;
	
	Var0.f_2 = 1176256410;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		Global_2404554.f_1222.f_5[iVar8 /*8*/] = { Var0 };
		iVar8++;
	}
}

void func_104()
{
	struct<5> Var0;
	
	Var0.f_2 = -1;
	Global_2404554.f_1222 = { Var0 };
}

var func_105()
{
	return Global_1310987.f_4;
}

void func_106(var uParam0, var uParam1)
{
	func_127();
	func_125(uParam0, uParam1);
}

bool func_107(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_108(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_108(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_109();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_109()
{
	return Global_1312737;
}

bool func_110(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_111(var uParam0, var uParam1, var uParam2)
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
	var uVar23;
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
		if (func_14(uParam2->f_35, uParam0, uParam2->f_38, uParam2->f_41, 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_45)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_42)
	{
		if (func_124(uParam0, 1))
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
	Global_2408343.f_162 = 0;
	Global_2408343.f_163 = 0;
	Global_2408343.f_164 = -99;
	Global_2408343.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2408343[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2408343.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xCD55F9503AC32C6E(*uParam0, iVar0, &uVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x8B8E0478251CF88E(iVar8))
		{
			unk_0xCF52CDAB0176B8BB(iVar8, &Var1);
			bVar12 = false;
			if (Global_2408343.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2408343.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x10DEE1D7716BD095(iVar8)) || unk_0x116D31BEEBA45B3C(iVar8))
			{
				unk_0xF7779FC5D28E4A59(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, *uParam0) > uParam2->f_4)
				{
					if (!func_93(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_123(Var1))
									{
										if (Var1.f_2 >= (uParam0->f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
										{
											if (Var1.f_2 <= (uParam0->f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
											{
												if (func_122(Var1, uParam2) || uParam2->f_33 >= 2)
												{
													if ((uParam2->f_42 && !func_124(&Var1, 0)) || uParam2->f_42 == 0)
													{
														Var1 = { func_120(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_45) };
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
																if ((uParam2->f_12 && !func_118(Var1, uVar4, uParam2->f_34, unk_0xCFC72E446B0B3AD7(), 0, 1)) || !uParam2->f_12)
																{
																	if (!uParam2->f_15 || !func_14(uParam2->f_35, &Var1, uParam2->f_38, uParam2->f_41, 0, 1))
																	{
																		if (uParam2->f_8)
																		{
																			iVar17 = uParam2->f_31;
																			bVar18 = true;
																			iVar19 = 1;
																			fVar20 = uParam2->f_43;
																			if (uParam2->f_17)
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
																				if (func_126(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																			}
																			else if (func_126(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0) && !func_117(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																			{
																				iVar21 = 1;
																			}
																			if (iVar21 || uParam2->f_33 >= 2)
																			{
																				if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_46) || uParam2->f_33 >= 2)
																				{
																					if (uParam2->f_46)
																					{
																						iVar22 = func_116(Var1, uParam2->f_48, &uVar23);
																					}
																					if (!uParam2->f_46 || (uParam2->f_46 && iVar22 <= uParam2->f_47))
																					{
																						if (uParam2->f_46)
																						{
																							if (iVar22 < uParam2->f_47)
																							{
																								iVar16 = 0;
																								while (iVar16 < Global_2408343.f_162)
																								{
																									Global_2408343[iVar16 /*3*/] = { 0f, 0f, 0f };
																									Global_2408343.f_121[iVar16] = 0f;
																									iVar16++;
																								}
																								Global_2408343.f_162 = 0;
																								uParam2->f_47 = iVar22;
																							}
																						}
																						if (uParam2->f_30)
																						{
																							if (Global_2408343.f_162 == 0)
																							{
																								Global_2408343[0 /*3*/] = { Var1 };
																								Global_2408343.f_121[0] = uVar4;
																							}
																							else
																							{
																								iVar16 = 0;
																								while (iVar16 < Global_2408343.f_162 + 1)
																								{
																									if (iVar16 < 40)
																									{
																										if (unk_0xB7A628320EFF8E47(Var1, *uParam0) < unk_0xB7A628320EFF8E47(Global_2408343[iVar16 /*3*/], *uParam0))
																										{
																											func_115(Var1, uVar4, iVar16);
																											iVar16 = Global_2408343.f_162 + 1;
																										}
																									}
																									iVar16++;
																								}
																							}
																							Global_2408343.f_162++;
																							if (Global_2408343.f_162 >= 5)
																							{
																								if ((uParam2->f_46 && uParam2->f_47 == 0) || uParam2->f_46 == 0)
																								{
																									iVar0 = 100;
																								}
																								else if (Global_2408343.f_162 == 40)
																								{
																									iVar0 = 100;
																								}
																							}
																						}
																						else
																						{
																							Global_2408343[Global_2408343.f_162 /*3*/] = { Var1 };
																							Global_2408343.f_121[Global_2408343.f_162] = uVar4;
																							Global_2408343.f_162++;
																							if (func_122(Var1, uParam2))
																							{
																								Global_2408343.f_163++;
																							}
																							if (Global_2408343.f_162 >= 10)
																							{
																								if ((uParam2->f_46 && uParam2->f_47 == 0) || uParam2->f_46 == 0)
																								{
																									iVar0 = 100;
																								}
																								else if (Global_2408343.f_162 == 40)
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
				if (Global_2408343.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2408343[0 /*3*/] };
						*uParam1 = Global_2408343.f_121[0];
						return;
					}
					else
					{
						if (Global_2408343.f_163 > 0 && !Global_2408343.f_163 == Global_2408343.f_162)
						{
							func_113(0, uParam2);
						}
						iVar24 = unk_0x073B65E051D2F03E(0, Global_2408343.f_162);
						Var25 = { Global_2408343[0 /*3*/] };
						uVar28 = Global_2408343.f_121[0];
						Global_2408343[0 /*3*/] = { Global_2408343[iVar24 /*3*/] };
						Global_2408343.f_121[0] = Global_2408343.f_121[iVar24];
						Global_2408343[iVar24 /*3*/] = { Var25 };
						Global_2408343.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2408343[0 /*3*/] };
						*uParam1 = Global_2408343.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_111(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x073B65E051D2F03E((1 + iVar15), (40 + iVar15));
						unk_0x1B75703EDFED9125(*uParam0, iVar0, &Var1, &uVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_120(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_45) };
						Var29 = { Var1 };
						uVar32 = uVar4;
						if (func_14(uParam2->f_35, &Var29, uParam2->f_38, uParam2->f_41, 1, 1) || func_124(&Var29, 1))
						{
							if (!uParam2->f_44)
							{
								uParam2->f_33 = 0;
								uParam2->f_44 = 1;
								*uParam0 = { Var29 };
								*uParam1 = uVar32;
								func_111(uParam0, uParam1, uParam2);
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
				func_111(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_112(&Global_1312061, uParam0, uParam1, unk_0xCFC72E446B0B3AD7());
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2408343.f_164 = iVar8;
	}
}

void func_112(var uParam0, var uParam1, var uParam2, int iParam3)
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
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), func_49(iParam3));
		if (fVar1 < fVar0)
		{
			if (!func_79(*(uParam0[iVar2 /*4*/]), 5f, iParam3, 0, 0))
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

void func_113(int iParam0, var uParam1)
{
	if (!func_122(Global_2408343[iParam0 /*3*/], uParam1))
	{
		Global_2408343.f_162 = (Global_2408343.f_162 - 1);
		func_114(iParam0);
		if (Global_2408343.f_162 > Global_2408343.f_163)
		{
			func_113(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_113(iParam0 + 1, uParam1);
	}
}

void func_114(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2408343[iParam0 /*3*/] = { Global_2408343[iParam0 + 1 /*3*/] };
			Global_2408343.f_121[iParam0] = Global_2408343.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_115(struct<3> Param0, var uParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2408343[iParam4 /*3*/] };
	uVar3 = Global_2408343.f_121[iParam4];
	Global_2408343[iParam4 /*3*/] = { Param0 };
	Global_2408343.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2408343.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_115(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_116(struct<3> Param0, float fParam3, var uParam4)
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
		if (func_51(iVar5))
		{
			Var1 = { func_49(iVar5) };
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
	*uParam4 = fVar6;
	return iVar4;
}

int func_117(struct<3> Param0, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xCFC72E446B0B3AD7() != iVar1) || iParam9 == 0)
		{
			if (func_36(iVar1, bParam5, bParam6))
			{
				if (unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1))
				{
					if (!bParam8 || (!unk_0x3E0478C40AB5B38D(unk_0x4E6043D225B9C75F(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) != unk_0x59A4BF97B76AD953(iVar1))) || unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1)
						{
							if (((unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1 && iParam10) && bParam7) && func_52(iVar1))
							{
							}
							else if (unk_0x746960881FB19A89(unk_0x4E6043D225B9C75F(iVar1)))
							{
								if (func_81(func_49(iVar1), Param0, uParam3, iParam4, 1036831949))
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

int func_118(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_119(Param0, uParam3, iParam4, iParam5, iParam6) || func_80(Param0, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_119(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_36(iVar1, 0, 1) && func_36(iParam5, 0, 1))
			{
				if (Global_2410963.f_260[iVar0])
				{
					if (func_81(Global_2410963.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_81(func_49(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2410963.f_260[iVar0])
			{
				if (func_81(Global_2410963.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_36(iVar1, 0, 1))
			{
				if (func_81(func_49(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_120(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_121(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xF7779FC5D28E4A59(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x8D9DFADC33F0817B(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
				unk_0x6BD8057B0B6EC46D(iParam11, &fVar17, &fVar20);
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
		if (!func_121(Param0, *uParam3, Param6))
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
	Var0 = { unk_0x81D32A4E7E765EA7(Param0, *uParam3, fVar14, 0f, 0f) };
	return Var0;
}

int func_121(struct<3> Param0, var uParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_82(&Var0, 0f, 0f, uParam3);
	Var3 = { Param4 - Param0 };
	if (func_20(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_122(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_110(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_37(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xABDC7B22D1A3C451(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_123(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_44(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2408218[iVar1])
	{
		if (func_43(Param0, &(Global_2407515[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408218[8])
	{
		if (func_43(Param0, &(Global_2407515[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_124(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2404554.f_22.f_16)
	{
		switch (Global_2404554.f_22.f_15)
		{
			case 0:
				if (func_110(*uParam0, Global_2404554.f_22.f_8, Global_2404554.f_22.f_14, 0, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 1:
				if (func_37(*uParam0, Global_2404554.f_22.f_8, Global_2404554.f_22.f_11, 0, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 2:
				if (unk_0xABDC7B22D1A3C451(*uParam0, Global_2404554.f_22.f_8, Global_2404554.f_22.f_11, Global_2404554.f_22.f_14, 0, 1))
				{
					iVar0 = 1;
				}
				break;
		}
		if (bParam1)
		{
			*uParam0 = { func_23(*uParam0, Global_2404554.f_22.f_8, Global_2404554.f_22.f_11, Global_2404554.f_22.f_14, Global_2404554.f_22.f_15, 1036831949, 0) };
		}
	}
	return iVar0;
}

void func_125(var uParam0, var uParam1)
{
	unk_0x2FD27D1E02488193(uParam0, uParam1, 0.1f);
	Global_2404554.f_1205 = unk_0x81ACA1EEF1E4410D();
	Global_2404554.f_1203 = 1;
	Global_2404554.f_1206 = unk_0x6A8628B6E9F055B3();
}

int func_126(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404554 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x65473DAE13685EEB(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x04F609D23DD56222(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x04F609D23DD56222(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDFE956DB96641937(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404554++;
	if (bParam13)
	{
		if (unk_0xFC096FF22FF07A48(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404554++;
	if (fParam14 > 0f)
	{
		if (func_94(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404554++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_78(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404554++;
	return 1;
}

void func_127()
{
	if (Global_2404554.f_1203)
	{
		if (unk_0x81ACA1EEF1E4410D() == Global_2404554.f_1205)
		{
			unk_0x592CBB5BF561A072();
		}
		else
		{
			unk_0x592CBB5BF561A072();
		}
		Global_2404554.f_1203 = 0;
	}
}

int func_128()
{
	if (unk_0x2E9CF5C574019636())
	{
		return 10000;
	}
	return 1000;
}

int func_129(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24)
{
	struct<11> Var0;
	struct<18> Var18;
	struct<3> Var42;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_22 = 1;
	Var18.f_23 = 1;
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
			Var42 = { Param0 - Var0[0 /*3*/] };
			if (Var42.f_2 > Param6.f_12)
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

int func_130(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_131(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x7EF90A4891193127())
		{
			func_132(uParam0, 0, 0);
		}
	}
}

void func_132(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4B69FB3A5B09A1BA() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6A8628B6E9F055B3();
			}
			else
			{
				*uParam0 = unk_0x4FEA29C1086C638D();
			}
		}
		else
		{
			*uParam0 = unk_0x17103F66FBB44C3C();
		}
		uParam0->f_1 = 1;
	}
}

void func_133()
{
	switch (Local_66[unk_0x9725084D4DFE8258() /*3*/].f_2)
	{
		case 0:
			func_162();
			func_161();
			if (func_151())
			{
				func_149();
				func_148();
				func_134(35);
				Local_66[unk_0x9725084D4DFE8258() /*3*/].f_2 = 1;
			}
			else if (Local_55.f_8 >= 1)
			{
				func_148();
				Local_66[unk_0x9725084D4DFE8258() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_55.f_8 >= 2)
			{
				Local_66[unk_0x9725084D4DFE8258() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6838)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_147() /*8064*/].f_5756.f_1795[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_147() /*8064*/].f_5756.f_1795[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_147() /*8064*/].f_5756.f_1795[iVar2 /*3*/].f_1)
			{
				Global_2097152[func_147() /*8064*/].f_5756.f_1795[iVar2 /*3*/].f_1 = 1;
				unk_0xEDB9A377CD8B7F03(&Global_2445599, (8 + iVar2));
				func_142(2098, -1);
				func_138(67, -1);
				unk_0xA1E454FFE8764EA5(1000, iVar1);
				if (iVar3 < 2)
				{
					func_135(15, 0);
				}
			}
		}
	}
}

void func_135(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_137(iParam0, iParam1))
	{
		iVar0 = func_136();
		Global_2435039[iVar0] = iParam0;
	}
}

int func_136()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435039[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_137(int iParam0, var uParam1)
{
	if (Global_1315888)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315900) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_138(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_140(iParam0, func_141(iParam1));
	iVar0++;
	func_139(iParam0, iVar0, iParam1);
}

void func_139(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2476020[iParam0 /*6*/][func_141(uParam2)];
	unk_0xC46BDC34976E9532(iVar0, iParam1, 1);
}

int func_140(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2476020[iParam0 /*6*/][func_141(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_141(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_109();
		if (iVar1 > -1)
		{
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_146(iParam0, func_141(iParam1), 0);
	iVar0++;
	if (!func_145(iParam0))
	{
		func_144(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_143(iParam0, iVar0, iParam1, 1);
	}
}

void func_143(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_141(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 779:
			Global_1335551[func_141(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1335557[func_141(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1335563[func_141(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1335569[func_141(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1335527[func_141(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1335533[func_141(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1335539[func_141(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1335545[func_141(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1335503[func_141(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1335509[func_141(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1335515[func_141(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1335521[func_141(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1335575[func_141(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1335581[func_141(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1335587[func_141(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1335593[func_141(iParam2)] = iParam1;
			break;
		
		case 1294:
			Global_1335599[func_141(iParam2)] = iParam1;
			break;
		
		case 631:
			Global_1335605[func_141(iParam2)] = iParam1;
			break;
		
		case 1269:
			Global_1335611[func_141(iParam2)] = iParam1;
			break;
		
		case 1866:
			Global_2476789[0 /*6*/][func_141(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2476789[1 /*6*/][func_141(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1335617[func_141(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1335623[func_141(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1335629[func_141(iParam2)] = iParam1;
			break;
		
		case 1227:
			Global_1335635[func_141(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_144(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_141(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, iParam3);
	}
}

int func_145(int iParam0)
{
	if (Global_1335484)
	{
		switch (iParam0)
		{
			case 779:
			case 780:
			case 781:
			case 782:
			case 769:
			case 770:
			case 771:
			case 772:
			case 759:
			case 760:
			case 761:
			case 762:
			case 749:
			case 750:
			case 751:
			case 752:
			case 1294:
			case 631:
			case 1269:
			case 756:
			case 757:
			case 758:
			case 1227:
			case 1866:
			case 2255:
				return 1;
				break;
			}
	}
	return 0;
}

int func_146(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_141(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_147()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_148()
{
	if (unk_0x2E6E8D325977B3EC(uLocal_164))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_164);
	}
}

void func_149()
{
	if (!unk_0x94E72F17611BCD3C(Global_2422166.f_3185, 0))
	{
		unk_0xEDB9A377CD8B7F03(&(Global_2422166.f_3185), 0);
		func_150();
	}
	else
	{
		unk_0xEDB9A377CD8B7F03(&(Global_2422166.f_3185), 1);
	}
}

void func_150()
{
	func_142(1180, -1);
}

int func_151()
{
	struct<14> Var0;
	
	if (unk_0x53C457DC61CBEBCA(Local_55.f_2))
	{
		if (unk_0x46A61489C128881A(unk_0xD0B6FBBB171CDD42(Local_55.f_2), unk_0x9F92518438215DD0()) && func_160(Local_55.f_2))
		{
			func_159(&(Local_55.f_2));
			if (unk_0x2E6E8D325977B3EC(uLocal_164))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_164);
			}
			func_154("ABB_BOXCT", 1);
			Var0.f_2 = 107;
			Var0.f_10 = unk_0xCFC72E446B0B3AD7();
			func_152(Var0, func_153(0));
			unk_0xEDB9A377CD8B7F03(&(Local_66[unk_0x9725084D4DFE8258() /*3*/].f_1), 0);
			return 1;
		}
	}
	return 0;
}

void func_152(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xCFC72E446B0B3AD7();
	if (!iParam14 == 0)
	{
		unk_0x0EA5A5773B9C09AE(1, &Param0, 14, iParam14);
	}
}

int func_153(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x0C20B275AC51DD95())
	{
		if (unk_0xD3AFE733DFF53CF5(unk_0x7DB5D4F6F4C81C82(iVar1)))
		{
			iVar2 = unk_0xA6118988A879C889(unk_0x7DB5D4F6F4C81C82(iVar1));
			if (func_36(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xCFC72E446B0B3AD7() || iParam0)
				{
					unk_0xEDB9A377CD8B7F03(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_154(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x3BE5C2319988C0DB(sParam0);
	iVar0 = unk_0x21B9348B2F3B9A98(0, 1);
	func_155(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_155(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_158() || !unk_0x11D7DF356299D4F0()) || !func_107(unk_0xCFC72E446B0B3AD7(), 0))
	{
		return;
	}
	iVar0 = func_156(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1694032.f_5[iVar0 /*53*/] = iParam0;
		Global_1694032.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1694032.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1694032.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1694032.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1694032.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1694032.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_156(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1694032 - 1))
	{
		if (iParam0 > Global_1694032.f_5[iVar0 /*53*/].f_1)
		{
			func_157(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1694032++;
	if (Global_1694032 > 5)
	{
		Global_1694032 = 5;
		return Global_1694032;
	}
	return (Global_1694032 - 1);
}

void func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1694032.f_5[iVar0 /*53*/] = { Global_1694032.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_158()
{
	return unk_0x9501317225249120(-1762644250);
}

void func_159(var uParam0)
{
	var uVar0;
	
	if (unk_0x53C457DC61CBEBCA(*uParam0))
	{
		if (!unk_0x34CE5EC4D87561E4(*uParam0))
		{
		}
	}
	if (unk_0x62FC9AA71A0BB8DB(*uParam0))
	{
		uVar0 = unk_0x6394B7AC14B39864(*uParam0);
		unk_0xAB5ECB7EFE6A4784(&uVar0);
	}
}

int func_160(var uParam0)
{
	if (unk_0x53C457DC61CBEBCA(uParam0))
	{
		unk_0xD8D9F2D24F8E952E(uParam0);
		return unk_0x34CE5EC4D87561E4(uParam0);
	}
	return 0;
}

void func_161()
{
	if (!unk_0x2E6E8D325977B3EC(uLocal_164))
	{
		if (unk_0x53C457DC61CBEBCA(Local_55.f_2))
		{
			uLocal_164 = unk_0x5304FE8A2CED6AE8(unk_0xD0B6FBBB171CDD42(Local_55.f_2));
			unk_0xD4916ED85412C8D9(uLocal_164, 1.2f);
			unk_0xAFF0147EA2454485(uLocal_164, 403);
			unk_0x016722B6E0559A9A(uLocal_164, 2);
			unk_0x2A8C2BEEA4F7041F(uLocal_164, "ABB_BLIPN");
		}
	}
}

void func_162()
{
	var uVar0;
	
	if (!unk_0xC9EED58014EF1F40())
	{
		uVar0 = func_146(1182, -1, 0);
		if (!unk_0x94E72F17611BCD3C(uVar0, 14))
		{
			unk_0xEDB9A377CD8B7F03(&uVar0, 14);
			func_144(1182, uVar0, -1, 1);
		}
	}
}

int func_163()
{
	return Local_55.f_0;
}

int func_164()
{
	unk_0x3BC6D217451D6BB7(joaat("prop_drug_package_02"));
	if (unk_0x149162179DBAEDB0(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_165(int iParam0)
{
	return Local_66[iParam0 /*3*/];
}

int func_166()
{
	bool bVar0;
	
	func_173(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 1;
		}
	}
	if (func_172())
	{
		return 1;
	}
	if (Global_2437036)
	{
		return 1;
	}
	if (func_171())
	{
		return 1;
	}
	if (func_170(157))
	{
		if (!func_169())
		{
			return 1;
		}
	}
	if (func_170(155))
	{
		return 1;
	}
	if (!unk_0x6518D9FF7C996D2B())
	{
		return 1;
	}
	if (func_167() != 0)
	{
		if (unk_0x7B47A371E2D93C2C(func_167()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_167()
{
	switch (func_168())
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

int func_168()
{
	return Global_24444;
}

bool func_169()
{
	return Global_2428162.f_572;
}

int func_170(int iParam0)
{
	if (unk_0xAFB34077E5ACCBA7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_171()
{
	return Global_2435128;
}

bool func_172()
{
	return Global_2428162.f_567;
}

void func_173(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2E567DCD11FE0296(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_174(iVar0);
					break;
				
				case 2:
					unk_0x2E567DCD11FE0296(1, iVar0, &Var4, 3);
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

void func_174(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 3))
	{
		if (func_36(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4E6043D225B9C75F(Var0.f_1);
			if (unk_0x746960881FB19A89(uVar3))
			{
				if (unk_0x827151D7B70CB853(uVar3, 0))
				{
					uVar4 = unk_0x1161215F69587BDA(uVar3, 0);
					if (unk_0x4A4FC7B76BEF1AC9(uVar4, Var0.f_2) && unk_0xD28DD58204E8F9D1())
					{
						if (func_175(uVar4, &bVar5))
						{
							unk_0xB3216D41373DA6C7(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9187463EB4918A4D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_175(var uParam0, var uParam1)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(uParam0))
		{
			if (unk_0x1F298C7D5F6EEDBF(uParam0))
			{
				unk_0x336AE92FD68DEF98(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xAD2C236C4A4B83C9(uParam0, 0))
		{
			if (unk_0x88A3865085DFB7AD(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_176()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_177(struct<20> Param0)
{
	func_182(func_183(Param0.f_0), Param0);
	unk_0xE35F47F90962E4D9(1);
	func_179(0, -1, 0);
	unk_0xA32DB9C55050112C(&Local_55, 11);
	unk_0x85862F9356411B89(&Local_66, 97);
	if (!func_178())
	{
		return 0;
	}
	unk_0xE5556978B2858C53(0);
	if (unk_0x7EF90A4891193127())
	{
		Local_55.f_7 = Param0.f_16;
		Local_55.f_3 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 0) };
		if (!func_3(Global_2446533.f_778.f_1))
		{
			unk_0xEDB9A377CD8B7F03(&(Local_55.f_1), 8);
		}
	}
	iLocal_167 = unk_0x4F0283431254A343();
	Local_66[unk_0x9725084D4DFE8258() /*3*/] = 0;
	return 1;
}

int func_178()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 0;
		}
		if (unk_0xA3E98C97E459BD8E())
		{
			return 1;
		}
		if (func_172())
		{
			return 0;
		}
		if (func_170(155))
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

int func_179(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x56448188B27B0D1C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_181();
			}
			else
			{
				return 0;
			}
		}
		if (!func_180())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4B69FB3A5B09A1BA())
				{
					if (!bParam2)
					{
						func_181();
					}
					else
					{
						return 0;
					}
				}
				if (func_172())
				{
					if (!bParam2)
					{
						func_181();
					}
					else
					{
						return 0;
					}
				}
				if (func_170(155))
				{
					if (!bParam2)
					{
						func_181();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB659F73755907B0D())
			{
				if (!bParam2)
				{
					func_181();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x56448188B27B0D1C();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			if (!bParam2)
			{
				func_181();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB659F73755907B0D())
	{
		if (!bParam2)
		{
			func_181();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_180()
{
	return Global_1315874;
}

void func_181()
{
	unk_0xE60DEFFB2A853900();
}

void func_182(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		func_181();
	}
	unk_0x097416E6C5CBD31B(uParam0, 0, Param1.f_16);
}

int func_183(int iParam0)
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
		
		case 36:
			return 32;
		
		case 37:
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
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

void func_184()
{
	if (unk_0x2E6E8D325977B3EC(uLocal_164))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_164);
	}
	func_186();
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x7EF90A4891193127())
		{
			if (unk_0x53C457DC61CBEBCA(Local_55.f_2) && unk_0x34CE5EC4D87561E4(Local_55.f_2))
			{
				func_159(&(Local_55.f_2));
			}
			Local_55.f_0 = 4;
		}
	}
	if (unk_0x94E72F17611BCD3C(Local_55.f_1, 8))
	{
		func_185();
	}
	func_181();
}

void func_185()
{
	Global_2446533.f_778 = 0;
	Global_2446533.f_778.f_1 = { 0f, 0f, 0f };
	Global_2446533.f_778.f_4 = 0f;
}

void func_186()
{
	if (unk_0x94E72F17611BCD3C(uLocal_163, 4))
	{
		unk_0xF384D6678D781A0A(unk_0xCFC72E446B0B3AD7(), 0.72f);
		unk_0x27FC9504951BD7C0(unk_0xCFC72E446B0B3AD7(), 1f);
		unk_0x66516BDB92C33C85(unk_0xCFC72E446B0B3AD7(), 1f);
		unk_0x9D10F4DA54A3F700(unk_0xCFC72E446B0B3AD7(), 1f);
		func_187(1);
		unk_0xF76EE56D3E7DAF1B(&uLocal_163, 5);
		unk_0xF76EE56D3E7DAF1B(&uLocal_163, 7);
		unk_0xF76EE56D3E7DAF1B(&uLocal_163, 4);
	}
}

void func_187(int iParam0)
{
	var uVar0;
	
	uVar0 = func_188(iParam0, 0);
	unk_0x075BBF37597121A7(uVar0);
}

char* func_188(int iParam0, bool bParam1)
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

int func_189(int iParam0)
{
	return Global_1582869[iParam0 /*332*/];
}

