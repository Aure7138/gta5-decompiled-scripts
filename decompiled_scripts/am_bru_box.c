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
	if (unk_0xD95428C8AA1DBBF2())
	{
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_185(unk_0xAF65E5A58BE87D95()) != 1)
			{
				func_180();
			}
		}
		if (!func_173(ScriptParam_0))
		{
			func_180();
		}
	}
	while (true)
	{
		func_172();
		if (func_162())
		{
			func_180();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_185(unk_0xAF65E5A58BE87D95()) != 1)
			{
				func_180();
			}
		}
		if (unk_0x1965D5FB1AA96228() != iLocal_167)
		{
			func_180();
		}
		unk_0x83428269E589D8EC();
		switch (func_161(unk_0x9DCF1243D4AAD942()))
		{
			case 0:
				if (func_160())
				{
					if (func_159() == 1)
					{
						Local_66[unk_0x9DCF1243D4AAD942() /*3*/] = 1;
					}
					else if (func_159() == 4)
					{
						Local_66[unk_0x9DCF1243D4AAD942() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_159() == 1)
				{
					func_129();
				}
				else if (func_159() == 4)
				{
					Local_66[unk_0x9DCF1243D4AAD942() /*3*/] = 3;
				}
				if (Local_66[unk_0x9DCF1243D4AAD942() /*3*/].f_2 == 0)
				{
					if (!unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Local_55.f_3, 500f, 500f, 500f, 0, 1, 0) && func_185(unk_0xAF65E5A58BE87D95()) != 1)
					{
						Local_66[unk_0x9DCF1243D4AAD942() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_127(&(Local_55.f_9));
				if (func_126(&(Local_55.f_9)))
				{
					Local_66[unk_0x9DCF1243D4AAD942() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_66[unk_0x9DCF1243D4AAD942() /*3*/] = 4;
			
			case 4:
				func_180();
				break;
		}
		if (unk_0x2CCDE625E685C339())
		{
			switch (func_159())
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
		if (func_3(Global_2446210.f_775.f_1))
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
			if (!unk_0x3D8BF0E3847B29E0(Local_55.f_2) || Local_55.f_6 != -1)
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
	while (iVar0 < unk_0x0F0C172200951A9A())
	{
		if (unk_0xD0E2103B183CBA60(unk_0xC54850646145FF41(iVar0)))
		{
			if (Local_55.f_6 == -1)
			{
				if (unk_0x61D8FEAF64881CDA(Local_66[iVar0 /*3*/].f_1, 0))
				{
					Local_55.f_6 = iVar0;
				}
			}
			if (!unk_0x61D8FEAF64881CDA(Local_55.f_1, 7))
			{
				if (unk_0x61D8FEAF64881CDA(Local_66[iVar0 /*3*/].f_1, 1))
				{
					unk_0x3DBE2A7AF9E71C82(&(Local_55.f_1), 7);
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
	struct<18> Var13;
	
	if (!unk_0x3D8BF0E3847B29E0(Local_55.f_2))
	{
		if (func_160())
		{
			if (unk_0xAD902020E597F2AC(1))
			{
				fVar5 = 250f;
				Var6 = { Local_55.f_3 };
				if (unk_0x61D8FEAF64881CDA(Local_55.f_1, 8))
				{
					Var0 = { Global_2446210.f_775.f_1 };
					uVar3 = Global_2446210.f_775.f_4;
				}
				if (func_185(unk_0xAF65E5A58BE87D95()) == 7)
				{
					iVar12 = unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95());
					if (Global_1601761.f_72[iVar12 /*5254*/].f_371[0 /*23*/].f_10 > 0f)
					{
						Var6 = { Global_1601761.f_72[iVar12 /*5254*/].f_371[0 /*23*/].f_3 };
						Var9 = { Global_1601761.f_72[iVar12 /*5254*/].f_371[0 /*23*/].f_6 };
						fVar5 = Global_1601761.f_72[iVar12 /*5254*/].f_371[0 /*23*/].f_10;
						iVar4 = 1;
					}
					else if (Global_1601761.f_72[iVar12 /*5254*/].f_371[0 /*23*/].f_9 > 0f)
					{
						Var6 = { Global_1601761.f_72[iVar12 /*5254*/].f_371[0 /*23*/] };
						fVar5 = Global_1601761.f_72[iVar12 /*5254*/].f_371[0 /*23*/].f_9;
					}
				}
				Var13.f_5 = 1115815936;
				Var13.f_4 = 1;
				Var13.f_5 = 30f;
				Var13.f_10 = 1;
				if (iVar4 == 0)
				{
					if (unk_0x61D8FEAF64881CDA(Local_55.f_1, 8) || func_125(Var6, fVar5, &Var0, &uVar3, Var13))
					{
						if (Local_55.f_7 >= 32)
						{
							Local_55.f_2 = unk_0xE552D459248217B5(unk_0xA25854DB0CE2EB95(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_55.f_2 = unk_0xE552D459248217B5(unk_0x056F745470B5C8E6(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0x248DC16118AE5035(unk_0x9F00512086D0A86F(Local_55.f_2), uVar3);
					}
				}
				else if (unk_0x61D8FEAF64881CDA(Local_55.f_1, 8) || func_7(Var6, Var9, fVar5, &Var0, &uVar3, Var13))
				{
					if (Local_55.f_7 >= 32)
					{
						Local_55.f_2 = unk_0xE552D459248217B5(unk_0xA25854DB0CE2EB95(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_55.f_2 = unk_0xE552D459248217B5(unk_0x056F745470B5C8E6(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0x248DC16118AE5035(unk_0x9F00512086D0A86F(Local_55.f_2), uVar3);
				}
			}
		}
	}
	if (unk_0x3D8BF0E3847B29E0(Local_55.f_2))
	{
		return 1;
	}
	return 0;
}

int func_7(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7, var uParam8, struct<8> Param9, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26)
{
	struct<11> Var0;
	struct<18> Var18;
	
	if (Param9.f_5 < 20f)
	{
		Param9.f_5 = 20f;
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
	Var18.f_5 = 0;
	Var18.f_6 = 1;
	Var18.f_7 = 1;
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
	bool bVar18;
	struct<46> Var19;
	bool bVar65;
	
	bVar18 = false;
	if (!uParam0->f_7)
	{
		if (((!Global_2404546.f_1191 == *uParam0 || !Global_2404546.f_1191.f_1 == uParam0->f_1) || !Global_2404546.f_1191.f_2 == uParam0->f_2) || !Global_2404546.f_1194 == uParam0->f_4)
		{
			bVar18 = true;
		}
	}
	else if ((((((!Global_2404546.f_1205 == uParam0->f_8 || !Global_2404546.f_1205.f_1 == uParam0->f_8.f_1) || !Global_2404546.f_1205.f_2 == uParam0->f_8.f_2) || !Global_2404546.f_1208 == uParam0->f_11) || !Global_2404546.f_1208.f_1 == uParam0->f_11.f_1) || !Global_2404546.f_1208.f_2 == uParam0->f_11.f_2) || !Global_2404546.f_1211 == uParam0->f_14)
	{
		bVar18 = true;
	}
	if (bVar18)
	{
		if (Global_2404546.f_1189 == 1)
		{
			if (unk_0xB86C2D2B0CB3E42E(Global_2404546.f_1198))
			{
				if (Global_2404546.f_1198 == unk_0xF682120D0C324317())
				{
					if (unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), Global_2404546.f_1195) < func_124())
					{
						return 0;
					}
				}
				else if (unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), Global_2404546.f_1195) < func_124())
				{
					return 0;
				}
			}
			unk_0x606319450BD18268();
			unk_0xEE12B0307228F6E0();
			func_123();
		}
		Global_2404546.f_1189 = 0;
	}
	else if (unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), Global_2404546.f_1195) > func_124())
	{
		Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
	}
	if (!uParam0->f_7)
	{
		fVar4 = (*uParam0 - uParam0->f_4);
		fVar5 = (uParam0->f_1 - uParam0->f_4);
		fVar6 = (*uParam0 + uParam0->f_4);
		fVar7 = (uParam0->f_1 + uParam0->f_4);
	}
	else
	{
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
	}
	unk_0x32BB0750E9174D6C(fVar4, fVar5, fVar6, fVar7);
	if (!uParam0->f_7)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2404546.f_1189)
	{
		unk_0x606319450BD18268();
		unk_0xEE12B0307228F6E0();
		func_123();
		if (uParam1->f_7 && !uParam0->f_7)
		{
			if (unk_0x652D2EEEF1D3E62C(*uParam0) > 0f)
			{
				if (func_122(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x50F2384162070F3A())
		{
			if (!uParam0->f_7)
			{
				Global_2404546.f_1191 = { *uParam0 };
				Global_2404546.f_1194 = uParam0->f_4;
				Global_2404546.f_1212 = 0;
			}
			else
			{
				Global_2404546.f_1205 = { uParam0->f_8 };
				Global_2404546.f_1208 = { uParam0->f_11 };
				Global_2404546.f_1211 = uParam0->f_14;
				Global_2404546.f_1191 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
				Global_2404546.f_1212 = 1;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_121(Var8.f_0, Var8.f_1);
			}
			Global_2404546.f_1190 = 1;
			Global_2404546.f_1189 = 1;
			Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
			Global_2404546.f_1195 = unk_0xFACC0E85E40AD425();
			Global_2404546.f_1198 = unk_0xF682120D0C324317();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2404546.f_1189)
	{
		if (Global_2404546.f_1190 == 1)
		{
			if (unk_0x65AB4C5AAF640EB0(fVar4, fVar5, fVar6, fVar7) || unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), Global_2404546.f_1196) > 5000)
			{
				Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
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
					Var19.f_6 = 1082130432;
					Var19.f_7 = 1176255488;
					Var19.f_8 = 1;
					Var19.f_10 = 1;
					Var19.f_13 = 1;
					Var19.f_15 = 1;
					Var19.f_16 = 1;
					Var19.f_31 = 1;
					Var19.f_43 = 1123024896;
					Var19 = { *uParam1 };
					Var19.f_3 = uParam1->f_5;
					Var19.f_11 = uParam1->f_9;
					Var19.f_18 = 1;
					if (uParam0->f_7)
					{
						Var19.f_26 = 1;
						Var19.f_19 = { uParam0->f_8 };
						Var19.f_22 = { uParam0->f_11 };
						Var19.f_25 = uParam0->f_14;
					}
					else
					{
						Var19.f_26 = 0;
						Var19.f_19 = { *uParam0 };
						Var19.f_25 = uParam0->f_4;
					}
					Var19.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var19.f_30 = 1;
						Var19.f_32 = 1;
					}
					Var19.f_38 = { uParam1->f_13 };
					Var19.f_41 = uParam1->f_16;
					Var19.f_45 = uParam1->f_17;
					func_108(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var19);
					if ((uParam1->f_7 && uParam1->f_9) && !uParam0->f_7)
					{
						if (!func_107(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_2404546.f_1190 = 9;
				}
				else
				{
					Global_2404546.f_1190 = 2;
				}
			}
		}
		if (Global_2404546.f_1190 == 2)
		{
			if ((unk_0x8138C32B482323F5(Var11, Var14) || unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), Global_2404546.f_1196) > 15000) || unk_0x73EC3DA56D3FB398(Var11, Var14) == 0)
			{
				Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
				if (uParam0->f_5 && !func_104(unk_0xAF65E5A58BE87D95(), 0))
				{
					Global_2404546.f_1190 = 3;
				}
				else
				{
					Global_2404546.f_1190 = 4;
				}
			}
			else if (unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), Global_2404546.f_1200) > 7000)
			{
				func_103(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2404546.f_1190 == 3)
		{
			if (func_102() || unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), Global_2404546.f_1196) > 10000)
			{
				Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
				Global_2404546.f_1190 = 4;
			}
		}
		if (Global_2404546.f_1190 == 4)
		{
			if (unk_0x50F2384162070F3A())
			{
				unk_0x606319450BD18268();
				unk_0xEE12B0307228F6E0();
			}
			else
			{
				iVar0 = 0;
				func_97();
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
					if (!unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					if (!uParam0->f_7)
					{
						if (unk_0x16CF59103F382765(unk_0xAF65E5A58BE87D95(), *uParam0, uParam0->f_4, *uParam1, iVar0))
						{
							Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
							Global_2404546.f_1190 = 5;
						}
					}
					else if (unk_0x5B974B672AF66EA9(unk_0xAF65E5A58BE87D95(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
					{
						Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
						Global_2404546.f_1190 = 5;
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
					Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
					Global_2404546.f_1190 = 5;
					if (!uParam0->f_7)
					{
						unk_0x6C474EE15021D6F0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					}
					else
					{
						unk_0x193E2CDD2E26C6B3(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					}
				}
			}
		}
		if (Global_2404546.f_1190 == 5)
		{
			if (func_39(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2404546.f_1216.f_4)
				{
					Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
					Global_2404546.f_1190 = 6;
				}
				else
				{
					Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
					if (!uParam0->f_5)
					{
						if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0xA75239A5F28CBA62(Var1.f_0, Var1.f_1);
						}
					}
					Global_2404546.f_1190 = 9;
				}
			}
			else if (unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), Global_2404546.f_1196) > 20000)
			{
				unk_0x606319450BD18268();
				unk_0xEE12B0307228F6E0();
				Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
				Global_2404546.f_1190 = 8;
			}
		}
		if (Global_2404546.f_1190 == 6)
		{
			iVar0 = 0;
			Global_2404546.f_1216 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (!uParam0->f_7)
			{
				if (!func_38(uParam0->f_4))
				{
					if (unk_0x93AF5BB44F9A2E1B(unk_0x9C1CBD99573D4312(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_37(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0x93AF5BB44F9A2E1B(unk_0x9C1CBD99573D4312(Var8)))
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
			Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
			Global_2404546.f_1190 = 7;
			if (!uParam0->f_7)
			{
				unk_0x6C474EE15021D6F0(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
			}
			else
			{
				unk_0x193E2CDD2E26C6B3(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
			}
		}
		if (Global_2404546.f_1190 == 7)
		{
			if (func_39(uParam2, uParam0, uParam1, 1))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!unk_0x652D2EEEF1D3E62C(Global_2404546.f_1323[iVar17 /*3*/]) == 0f)
							{
								if (!uParam0->f_7)
								{
									if (unk_0x2A488C176D52CCA5(Global_2404546.f_1323[iVar17 /*3*/], *uParam0) < uParam0->f_4)
									{
									}
								}
								else if (unk_0x65EC44693BF9CB43(Global_2404546.f_1323[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
								{
									*(uParam2[0 /*3*/]) = { Global_2404546.f_1323[iVar17 /*3*/] };
								}
							}
						}
						iVar17++;
					}
					if (unk_0x652D2EEEF1D3E62C(*(uParam2[0 /*3*/])) == 0f)
					{
						if (!uParam0->f_7)
						{
							Var1 = { *uParam0 };
						}
						else
						{
							Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
						}
						func_11(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
				if (!unk_0x652D2EEEF1D3E62C(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_10[iVar17] = unk_0xA75239A5F28CBA62(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2404546.f_1190 = 9;
			}
			else if (unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), Global_2404546.f_1196) > 20000)
			{
				Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
				Global_2404546.f_1190 = 8;
			}
		}
		if (Global_2404546.f_1190 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_2404546.f_404))
				{
				}
			}
			else if (Global_2404546.f_1216.f_1)
			{
				func_9(uParam2, &(Global_2404546.f_1216.f_5));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar65 = false;
				}
				else
				{
					bVar65 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2404546.f_1191 };
				func_11(uParam2[0 /*3*/], 0, bVar65, 0, 0, uParam0, uParam1);
			}
			Global_2404546.f_1196 = unk_0xFACC0E85E40AD425();
			Global_2404546.f_1190 = 9;
		}
		if (Global_2404546.f_1190 == 9)
		{
			Global_2404546.f_1189 = 0;
			unk_0x606319450BD18268();
			unk_0xEE12B0307228F6E0();
			func_123();
			return 1;
		}
		Global_2404546.f_1195 = unk_0xFACC0E85E40AD425();
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
	var uVar50;
	bool bVar51;
	int iVar52;
	struct<3> Var53;
	struct<3> Var56;
	struct<3> Var59;
	float fVar62;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_43 = 1123024896;
	if (bParam1)
	{
		iVar52 = 0;
	}
	else
	{
		iVar52 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_7)
			{
				Var53 = { *uParam5 };
				if (func_38(uParam5->f_4) || !unk_0x93AF5BB44F9A2E1B(unk_0x9C1CBD99573D4312(Var53)))
				{
					iVar52 += 4;
				}
			}
			else
			{
				Var53 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
				if (func_37(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0x93AF5BB44F9A2E1B(unk_0x9C1CBD99573D4312(Var53)))
				{
					iVar52 += 4;
				}
			}
		}
		else
		{
			iVar52 += 4;
		}
	}
	if (func_13(*uParam0, &Var0, iVar52, iParam3, 1))
	{
	}
	else
	{
		bVar51 = true;
	}
	if (bVar51)
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
			if (uParam5->f_7)
			{
				Var4.f_26 = 1;
				Var4.f_19 = { uParam5->f_8 };
				Var4.f_22 = { uParam5->f_11 };
				Var4.f_25 = uParam5->f_14;
			}
			else
			{
				Var4.f_26 = 0;
				Var4.f_19 = { *uParam5 };
				Var4.f_25 = uParam5->f_4;
			}
		}
		Var4.f_38 = { uParam6->f_13 };
		Var4.f_41 = uParam6->f_16;
		Var4.f_45 = uParam6->f_17;
		func_108(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		if (uParam5->f_7)
		{
			Var56 = { uParam5->f_8 };
			Var59 = { uParam5->f_11 };
			fVar62 = uParam5->f_14;
		}
		else
		{
			Var56 = { *uParam5 };
			fVar62 = uParam5->f_4;
		}
		if (!func_12(Var0, uParam5->f_7, Var56, Var59, fVar62))
		{
			if (func_13(*uParam0, &Var0, iVar52, iParam3, 0))
			{
				if (!func_12(Var0, uParam5->f_7, Var56, Var59, fVar62))
				{
					if (uParam5->f_7)
					{
						Var0 = { Var56 + Var59 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var56 };
					}
					if (unk_0xBC5E1C3D489E93FD(Var0, &uVar50))
					{
						Var0.f_2 = uVar50;
					}
				}
			}
			else
			{
				if (uParam5->f_7)
				{
					Var0 = { Var56 + Var59 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var56 };
				}
				if (unk_0xBC5E1C3D489E93FD(Var0, &uVar50))
				{
					Var0.f_2 = uVar50;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2404546.f_517 = 1;
}

int func_12(struct<3> Param0, bool bParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	if (bParam3)
	{
		return unk_0x65EC44693BF9CB43(Param0, Param4, Param7, fParam10, 0, 1);
	}
	else if (unk_0x2A488C176D52CCA5(Param0, Param4) <= fParam10)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_13(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	float fVar0;
	
	if (unk_0x3CDB52EABD2C9FC7(Param0, 0, uParam3, iParam4))
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, *uParam3);
		if (fVar0 < 40f)
		{
			if ((iParam5 == 1 && !func_14(Global_2404546.f_417, &Param0, 0f, 0f, 0f, 0f, bParam6, 1)) || iParam5 == 0)
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
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404546.f_1416[iVar0 /*3*/]) < fParam3)
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
	
	iVar0 = 0;
	while (iVar0 < Global_2404546.f_282.f_121)
	{
		if (Global_2404546.f_282[iVar0 /*12*/].f_9 == 1)
		{
			if (func_25(*uParam0, &(Global_2404546.f_282[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					Var1 = { *uParam0 };
					func_18(&Var1, &(Global_2404546.f_282[iVar0 /*12*/]), 1036831949, 0, bParam2);
					if (func_17(&Var1, 0, 0))
					{
						Var1 = { *uParam0 };
						func_18(&Var1, &(Global_2404546.f_282[iVar0 /*12*/]), 1036831949, 1, bParam2);
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
				*uParam0 = { func_23(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404546.f_1415) * uParam1->f_8)), 0, fParam2, bParam3) };
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
				func_15(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404546.f_1415) * uParam1->f_8)), fParam2, bParam3);
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x6C63551083F1AB3E(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x6C63551083F1AB3E(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
		unk_0x28360C2B9B86505E(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_107(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_24(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x65EC44693BF9CB43(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_24(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
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

int func_25(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_107(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404546.f_1415) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_24(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x65EC44693BF9CB43(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x65EC44693BF9CB43(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x65EC44693BF9CB43(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x65EC44693BF9CB43(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_26(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2406584[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2406584[iVar0 /*17*/].f_16))
			{
				if (func_25(*uParam0, &(Global_2406584[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2406584[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2406584[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_18(&Var1, &(Global_2406584[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_26(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_18(&Var1, &(Global_2406584[iVar0 /*17*/]), 1036831949, 1, 0);
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
	
	if (!func_31(unk_0xAF65E5A58BE87D95(), 1))
	{
		return 1;
	}
	if (!Global_2404546.f_420)
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
				Var1 = { func_28(&(Global_2404546.f_37[iVar0 /*12*/])) };
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
		if (Global_2404546.f_37[iVar0 /*12*/].f_9)
		{
			if (func_25(Param0, &(Global_2404546.f_37[iVar0 /*12*/]), fParam3, 0, 0))
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
		if (Global_2404546.f_37[iVar0 /*12*/].f_9)
		{
			if (func_25(Param0, &(Global_2404546.f_37[iVar0 /*12*/]), fParam3, 0, 0))
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
	if (Global_1312448 != 0)
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
	if (Global_1582048[iParam0 /*324*/] == -1)
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
	return unk_0x61D8FEAF64881CDA(Global_1582048[iParam0 /*324*/].f_13.f_1, 0);
}

int func_35(int iParam0)
{
	if (func_36(iParam0, 0, 1))
	{
		return Global_2413868[iParam0 /*253*/].f_1;
	}
	return 0;
}

int func_36(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB832D52B86777A35(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x52A84D9C3A400EA8(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_37(struct<3> Param0, struct<3> Param3, float fParam6)
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

int func_38(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_39(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2404546.f_1216 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0x193CE735823BDA6E(&(Global_2404546.f_1216)))
			{
				case 0:
					if (uParam2->f_7 && !Global_2404546.f_440.f_7)
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
							*(uParam0[0 /*3*/]) = { Global_2404546.f_1191 };
						}
						if (uParam1->f_5 && func_10(Global_2404546.f_404))
						{
							if (!Global_2404546.f_1216.f_4)
							{
								Global_2404546.f_1216.f_4 = 1;
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
						uParam0->f_10[0] = unk_0x01E9A2D3AF075537(0f, 360f);
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
		else if (unk_0x50F2384162070F3A())
		{
			if (!unk_0x4B9D86C8232D1110())
			{
				if (unk_0xABFE24513C5D2AF9())
				{
					Global_2404546.f_1216 = unk_0x5F4F4254E34C9F57();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xEE12B0307228F6E0();
				Global_2404546.f_1216.f_4 = 1;
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
		func_94(Global_2404546.f_440, &(Global_2404546.f_1216.f_30), &(Global_2404546.f_1216.f_63));
	}
	if (uParam2->f_7 && !Global_2404546.f_1216.f_3)
	{
		Global_2404546.f_1216.f_3 = 1;
		func_41(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
	if (Global_2404546.f_1216 > 0)
	{
		if (uParam1->f_5 || unk_0x50F2384162070F3A())
		{
			iVar4 = 0;
			while (iVar4 < Global_2404546.f_1216)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2404546.f_1216.f_2)
					{
						iVar4 = Global_2404546.f_1216.f_2 + 1;
					}
					if (iVar4 > (Global_2404546.f_1216 - 1))
					{
						iVar4 = (Global_2404546.f_1216 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x2842F2EB42EB3295(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						unk_0xD02DED3660889F08(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = unk_0xCBE564E4FA008C3C(iVar4);
					}
					else
					{
						unk_0xF4A89B0F7B78383E(iVar4, &iVar5);
					}
					func_41(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2404546.f_1216.f_2 = iVar4;
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
			iVar4 = Global_2404546.f_1216;
		}
		if (Global_2404546.f_1216 == iVar4)
		{
			if (uParam1->f_5 && func_10(Global_2404546.f_404))
			{
				if (Global_2404546.f_1216.f_1)
				{
					func_9(uParam0, &(Global_2404546.f_1216.f_5));
					func_40(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2404546.f_1191 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x01E9A2D3AF075537(0f, 360f);
					func_40(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2404546.f_1216.f_1)
			{
				func_9(uParam0, &(Global_2404546.f_1216.f_5));
				func_40(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = unk_0x4D3E68F73B727E49(0, Global_2404546.f_1216);
				unk_0x2842F2EB42EB3295(iVar4, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
				func_40(*(uParam0[0 /*3*/]));
				return 1;
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2404546.f_1191 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0x01E9A2D3AF075537(0f, 360f);
				func_40(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2404546.f_1191 };
		if (uParam1->f_5 && func_10(Global_2404546.f_404))
		{
			if (!Global_2404546.f_1216.f_4)
			{
				Global_2404546.f_1216.f_4 = 1;
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
		uParam0->f_10[0] = unk_0x01E9A2D3AF075537(0f, 360f);
		func_40(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_40(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2404546.f_1323[(3 - iVar0) /*3*/] = { Global_2404546.f_1323[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2404546.f_1323[0 /*3*/] = { Param0 };
}

void func_41(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
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
		if (Global_2404546.f_404 == 1)
		{
			if (unk_0x75E01E8585722F89((Global_2404546.f_417.f_2 - Param0.f_2)) < 25f)
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
		if (func_31(unk_0xAF65E5A58BE87D95(), 1))
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
		if (!func_93(Param0, 1084227584, 1123024896, 0))
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
		if (!unk_0x7714F26C0D3E05E5(unk_0x507DA4994C3D8EBD(), Param0, 65f))
		{
			iVar7 += 8;
			iVar7 += 16;
		}
		else if (!unk_0x7714F26C0D3E05E5(unk_0x507DA4994C3D8EBD(), Param0, 20f))
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
		if (!func_92(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (!Global_2404546.f_536)
		{
			if (func_27(Global_2404546.f_417))
			{
				if ((!func_26(&Param0, 0, 0, 0) && !func_17(&Param0, 0, 0)) && !func_91(&Param0, 0))
				{
					iVar7 += 128;
				}
			}
			else if ((!func_17(&Param0, 0, 0) && !func_91(&Param0, 0)) && !func_16(Param0, 0.5f))
			{
				iVar7 += 128;
			}
		}
		else
		{
			iVar7 += 128;
		}
	}
	else if (!func_90(Param0, 2.5f, 3))
	{
		iVar7 += 128;
	}
	if (uParam4->f_5)
	{
		if (func_83(Param0, fParam3, uParam4->f_15, func_89(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0))
		{
			iVar7 += 256;
			iVar7 += 512;
		}
		else
		{
			iVar9 = Global_2404546.f_1;
		}
	}
	else if (!func_77(Param0, 25f, unk_0xAF65E5A58BE87D95(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_76(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar7 += 512;
			iVar7 += 256;
		}
		else if (!func_76(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar7 += 256;
		}
	}
	if (uParam4->f_5)
	{
		if (!(func_75(unk_0xAF65E5A58BE87D95()) && func_73(unk_0xAF65E5A58BE87D95())))
		{
			if (!func_72(&Param0, &(Global_2404546.f_1216.f_63), 0, 1065353216))
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
		if (!func_73(unk_0xAF65E5A58BE87D95()))
		{
			if (!func_71(Param0, &(Global_2404546.f_1216.f_30), &(Global_2404546.f_1216.f_63), 1073741824))
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
	if (func_70(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_70(Param0))
			{
				if (func_10(Global_2404546.f_404))
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
		if (func_69(Param0))
		{
			iVar7 += 8192;
		}
	}
	else
	{
		iVar7 += 8192;
	}
	if (!Global_2404546.f_37.f_31)
	{
		iVar7 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (unk_0x93AF5BB44F9A2E1B(unk_0x9C1CBD99573D4312(Param0)))
			{
				iVar7 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (unk_0x93AF5BB44F9A2E1B(unk_0x9C1CBD99573D4312(Param0)))
		{
			iVar7 += 16384;
		}
	}
	if (!func_66(&Param0, 0))
	{
		iVar7 = (iVar7 + 32768);
	}
	if (uParam4->f_5)
	{
	}
	else if (func_65(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar7 = 0;
	}
	Var11.f_2 = 1176256410;
	bVar19 = false;
	bVar20 = false;
	iVar10 = 0;
	while (iVar10 < 3)
	{
		if (iVar7 >= Global_2404546.f_1216.f_5[iVar10 /*8*/])
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
						fVar0 = func_57(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					else
					{
						fVar0 = func_57(Param0, Global_2404546.f_1191, uParam5->f_6, uParam5->f_4, bVar4, iVar9);
					}
					if (bVar8)
					{
						fVar0 = (fVar0 * 3f);
					}
					bVar19 = true;
				}
				if ((func_10(Global_2404546.f_404) && iVar7 == Global_2404546.f_1216.f_5[iVar10 /*8*/]) && iVar7 < 4096)
				{
					if (!bVar20)
					{
						fVar2 = func_55(Param0);
						bVar20 = true;
					}
					if (fVar2 < Global_2404546.f_1216.f_5[iVar10 /*8*/].f_2)
					{
						Var11.f_4 = { Param0 };
						Var11.f_7 = fParam3;
						Var11.f_0 = iVar7;
						Var11.f_1 = fVar0;
						Var11.f_2 = fVar2;
						func_54(Var11, iVar10);
						Global_2404546.f_1216.f_1 = 1;
						return;
					}
				}
				else if (iVar7 > Global_2404546.f_1216.f_5[iVar10 /*8*/] || (iVar7 == Global_2404546.f_1216.f_5[iVar10 /*8*/] && fVar0 > Global_2404546.f_1216.f_5[iVar10 /*8*/].f_1))
				{
					Var11.f_4 = { Param0 };
					Var11.f_7 = fParam3;
					Var11.f_0 = iVar7;
					Var11.f_1 = fVar0;
					func_54(Var11, iVar10);
					Global_2404546.f_1216.f_1 = 1;
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
					fVar5 = func_53(Param0, fVar1, 1, 1, 0, -1, 1);
					fVar6 = func_43(Param0, 1, 1, 1, 1);
					if (fVar5 > 15f && fVar6 > 5f)
					{
						fVar3 = func_42(fVar5, 0f, 80f, 160f, 1f, 1.2f);
					}
					else
					{
						fVar3 = func_42(fVar6, 0f, 80f, 160f, 0f, 0.2f);
					}
					bVar19 = true;
				}
				if (iVar7 > Global_2404546.f_1216.f_5[iVar10 /*8*/] || (iVar7 == Global_2404546.f_1216.f_5[iVar10 /*8*/] && fVar3 > Global_2404546.f_1216.f_5[iVar10 /*8*/].f_3))
				{
					Var11.f_4 = { Param0 };
					Var11.f_7 = fParam3;
					Var11.f_0 = iVar7;
					Var11.f_3 = fVar3;
					func_54(Var11, iVar10);
					Global_2404546.f_1216.f_1 = 1;
					return;
				}
			}
		}
		iVar10++;
	}
}

float func_42(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_43(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
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
			if (!iVar7 == unk_0xAF65E5A58BE87D95() || iParam5 == 1)
			{
				bVar3 = false;
				if (bParam3)
				{
					if (func_46(iVar7))
					{
						bVar3 = true;
					}
				}
				if (bParam4)
				{
					if (unk_0x5805EAF13FC54BE6(iVar7) == unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()))
					{
						if (!unk_0x5805EAF13FC54BE6(iVar7) == -1 || !func_31(unk_0xAF65E5A58BE87D95(), 1))
						{
							bVar3 = true;
						}
					}
				}
				if (bVar3)
				{
					if (unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar7) || !bParam6)
					{
						if (func_45(iVar7))
						{
							Var4 = { func_44(iVar7) };
							if (!bParam6)
							{
								if (Var4.f_2 < -100f)
								{
									Var4.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0x8FE221761D524CFE(Param0, Var4, 1);
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

Vector3 func_44(int iParam0)
{
	return unk_0xBF1B13057E5119A4(unk_0x687D51F360787909(iParam0), 0);
}

int func_45(int iParam0)
{
	if (unk_0x1ACC4CD5A7C76F75(unk_0x687D51F360787909(iParam0)) || Global_2413868[iParam0 /*253*/].f_239)
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)
{
	if (func_36(iParam0, 0, 1))
	{
		if (!func_51(iParam0))
		{
			if (unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iParam0))
			{
				if (!unk_0x5805EAF13FC54BE6(iParam0) == unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()))
				{
					if (func_32(unk_0xAF65E5A58BE87D95(), 1))
					{
						if (!func_50(unk_0x5805EAF13FC54BE6(iParam0), unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95())))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x5805EAF13FC54BE6(iParam0) == -1 && unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1)
				{
					if (!func_32(unk_0xAF65E5A58BE87D95(), 1))
					{
						if (!func_47(iParam0))
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

int func_47(int iParam0)
{
	if (func_49(unk_0xAF65E5A58BE87D95(), iParam0))
	{
		return 1;
	}
	Global_2445239 = { func_48(iParam0) };
	if (unk_0x8EF73C99D8AA61C0(&Global_2445239))
	{
		return 1;
	}
	return 0;
}

struct<13> func_48(var uParam0)
{
	struct<13> Var0;
	
	unk_0x0D7D678636A21203(uParam0, &Var0, 13);
	return Var0;
}

int func_49(int iParam0, var uParam1)
{
	if (unk_0x48005FE1241D4091())
	{
		Global_2445239 = { func_48(iParam0) };
		Global_2445252 = { func_48(uParam1) };
		if (unk_0x39606F3949DA3895(&Global_2445239))
		{
			if (unk_0x39606F3949DA3895(&Global_2445252))
			{
				unk_0x96899C28EF61DCA9(&Global_2445169, 35, &Global_2445239);
				unk_0x96899C28EF61DCA9(&Global_2445204, 35, &Global_2445252);
				if (Global_2445169 == Global_2445204)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
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
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 0);
				
				case 1:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 1);
				
				case 2:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 2);
				
				case 3:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 4);
				
				case 1:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 5);
				
				case 2:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 6);
				
				case 3:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 8);
				
				case 1:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 9);
				
				case 2:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 10);
				
				case 3:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 12);
				
				case 1:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 13);
				
				case 2:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 14);
				
				case 3:
					return unk_0x61D8FEAF64881CDA(Global_1601761.f_32, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_51(int iParam0)
{
	if (func_104(iParam0, 0))
	{
		return 1;
	}
	if (func_52())
	{
		if (iParam0 == unk_0xAF65E5A58BE87D95())
		{
			return 1;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_52()
{
	return unk_0x61D8FEAF64881CDA(Global_2359301, 3);
}

float func_53(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_36(unk_0xAF65E5A58BE87D95(), 1, 1))
		{
			if (!unk_0xC2C705ED6124A7C2())
			{
				if (unk_0x23A9305227426F8B(Param0, fParam3))
				{
					fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0));
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
			if (!func_104(iVar1, 0) && unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xAF65E5A58BE87D95()))
				{
					if (func_45(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x5805EAF13FC54BE6(iVar1) != unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()))) || unk_0x5805EAF13FC54BE6(iVar1) == -1)
							{
								if (unk_0xEDACD0E59C5E7D93(iVar1, Param0, fParam3))
								{
									fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xBF1B13057E5119A4(unk_0x687D51F360787909(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x5805EAF13FC54BE6(iVar1) != iParam7 || unk_0x5805EAF13FC54BE6(iVar1) == -1)
						{
							if (unk_0xEDACD0E59C5E7D93(iVar1, Param0, fParam3))
							{
								fVar4 = unk_0xB7A628320EFF8E47(Param0, unk_0xBF1B13057E5119A4(unk_0x687D51F360787909(iVar1), 0));
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

void func_54(struct<8> Param0, int iParam8)
{
	struct<8> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2404546.f_1216.f_5[iParam8 /*8*/] };
	Global_2404546.f_1216.f_5[iParam8 /*8*/] = { Param0 };
	if (iParam8 < 2)
	{
		func_54(Var0, iParam8 + 1);
	}
}

float func_55(struct<3> Param0)
{
	var uVar0;
	
	return func_56(Param0, &(Global_2404546.f_37), &uVar0);
}

float func_56(struct<3> Param0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2404546.f_1415) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_57(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9)
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
		fVar0 = func_42(unk_0x2A488C176D52CCA5(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	fVar0 = func_42(func_43(Param0, 1, 0, 0, 1), 0f, func_64(), func_62(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar0 = func_42(func_60(Param0), 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	fVar4 = 100f;
	if (unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1 && !func_31(unk_0xAF65E5A58BE87D95(), 1))
	{
		fVar4 = 1f;
	}
	fVar0 = func_42(func_59(Param0, unk_0xAF65E5A58BE87D95(), 0), 0f, 0f, fVar4, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (bParam7)
	{
		if (func_58(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_42(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_42(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_42(unk_0x2A488C176D52CCA5(Global_2404546.f_417, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_58(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = unk_0x41EB80A253F99F2F(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (unk_0x5D626D890DCCBB00(uVar3))
	{
		unk_0x3810B8E4BE77F3FC(uVar3, &Var0);
		*uParam3 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = unk_0x75E01E8585722F89((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_59(struct<3> Param0, int iParam3, int iParam4)
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
				if (unk_0x5805EAF13FC54BE6(iVar3) != unk_0x5805EAF13FC54BE6(iParam3) || (unk_0x5805EAF13FC54BE6(iVar3) == -1 && unk_0x5805EAF13FC54BE6(iParam3) == -1))
				{
					if (Global_2410802.f_260[iVar2])
					{
						fVar1 = unk_0x2A488C176D52CCA5(Global_2410802.f_130[iVar2 /*3*/], Param0);
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

float func_60(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = unk_0x0C92E7719639C64A(unk_0x507DA4994C3D8EBD(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (unk_0xFD68187442384158(uVar6[iVar2]))
		{
			if (!unk_0xE5D56342B0FF1D0D(uVar6[iVar2]))
			{
				if (func_61(uVar6[iVar2]))
				{
					Var3 = { unk_0xBF1B13057E5119A4(uVar6[iVar2], 1) };
					fVar1 = unk_0x8FE221761D524CFE(Param0, Var3, 1);
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

int func_61(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x2F429CA4FEA3DA65(uParam0);
	switch (unk_0xA29A28F9314D99CA(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	switch (unk_0xA29A28F9314D99CA(uVar0, Global_1574016[unk_0xAF65E5A58BE87D95()]))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/] == 0)
	{
		iVar1 = unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95());
		if (iVar1 > -1 && iVar1 < 4)
		{
			switch (unk_0xA29A28F9314D99CA(uVar0, Global_1573727[iVar1]))
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

float func_62()
{
	if (func_63())
	{
		if ((unk_0x9652AA5F22572EA4(Global_2404546.f_37.f_43) || unk_0x6149FC3B1572A5B9(Global_2404546.f_37.f_43)) || Global_2404546.f_37.f_43 == joaat("rhino"))
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

int func_63()
{
	if (Global_2404546.f_37.f_41 && !Global_2404546.f_37.f_240)
	{
		if (!func_51(unk_0xAF65E5A58BE87D95()))
		{
			return 1;
		}
	}
	return 0;
}

float func_64()
{
	if (func_63())
	{
		if ((unk_0x9652AA5F22572EA4(Global_2404546.f_37.f_43) || unk_0x6149FC3B1572A5B9(Global_2404546.f_37.f_43)) || Global_2404546.f_37.f_43 == joaat("rhino"))
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

int func_65(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && unk_0x1DB23BF4B2FFF9BA(Param0, fParam7)) || (fVar0 > 0f && unk_0x98DDD45D8A6467D0(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && unk_0x3D4E28BCE4C60954(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && unk_0x3D4E28BCE4C60954(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_66(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_68(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2407487[iVar4])
	{
		if (func_67(Var1, &(Global_2406721[iVar4 /*85*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_19(&Var1, Global_2406721[iVar4 /*85*/][iVar0 /*7*/], Global_2406721[iVar4 /*85*/][iVar0 /*7*/].f_3, Global_2406721[iVar4 /*85*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2407487[8])
	{
		if (func_67(Var1, &(Global_2406721[8 /*85*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_19(&Var1, Global_2406721[iVar4 /*85*/][iVar0 /*7*/], Global_2406721[iVar4 /*85*/][iVar0 /*7*/].f_3, Global_2406721[iVar4 /*85*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_67(struct<3> Param0, var uParam3)
{
	return unk_0x65EC44693BF9CB43(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_68(struct<2> Param0, var uParam2)
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

int func_69(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2404546.f_37.f_31)
	{
		if (unk_0x93AF5BB44F9A2E1B(Global_2404546.f_37.f_32))
		{
			if (!unk_0xCA97BCE0621BFD25(Param0))
			{
				uVar0 = unk_0x9C1CBD99573D4312(Param0);
				if (unk_0x93AF5BB44F9A2E1B(uVar0))
				{
					iVar1 = unk_0x47747D43BC10F33E(uVar0);
					if (!iVar1 == Global_2404546.f_37.f_33)
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

int func_70(struct<3> Param0)
{
	float fVar0;
	
	if (!Global_2404546.f_1212)
	{
		fVar0 = unk_0x75E01E8585722F89((Param0.f_2 - Global_2404546.f_1191.f_2));
		if (fVar0 < Global_2404546.f_1194)
		{
			return 1;
		}
	}
	else if (unk_0x65EC44693BF9CB43(Param0, Global_2404546.f_1205, Global_2404546.f_1208, Global_2404546.f_1211, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_71(struct<3> Param0, var uParam3, var uParam4, float fParam5)
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
		if (unk_0x65EC44693BF9CB43(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_72(var uParam0, var uParam1, bool bParam2, float fParam3)
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

int func_73(int iParam0)
{
	switch (Global_1312448)
	{
		case 0:
			if (!func_74(iParam0))
			{
				if (Global_1582048[iParam0 /*324*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_74(int iParam0)
{
	return Global_1582048[iParam0 /*324*/].f_165 != 0;
}

int func_75(int iParam0)
{
	if (func_32(iParam0, 1))
	{
		if (Global_1582048[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_36(unk_0xAF65E5A58BE87D95(), 1, 1))
		{
			if (!unk_0xC2C705ED6124A7C2())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x8FE221761D524CFE(func_44(unk_0xAF65E5A58BE87D95()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x23A9305227426F8B(Param0, fParam3))
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
			if (!func_104(iVar1, 0) && unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xAF65E5A58BE87D95()))
				{
					if ((func_45(iVar1) || !bParam10) && !Global_2413868[iVar1 /*253*/].f_252)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x5805EAF13FC54BE6(iVar1) == -1)
							{
								if (unk_0x5805EAF13FC54BE6(iVar1) == unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x5805EAF13FC54BE6(iVar1) != unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()))) || unk_0x5805EAF13FC54BE6(iVar1) == -1)
							{
								if (unk_0x8FE221761D524CFE(func_44(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xEDACD0E59C5E7D93(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x5805EAF13FC54BE6(iVar1) != iParam8 || unk_0x5805EAF13FC54BE6(iVar1) == -1)
						{
							if (unk_0x8FE221761D524CFE(func_44(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xEDACD0E59C5E7D93(iVar1, Param0, fParam3))
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

int func_77(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_82(Param0, fParam3, iParam4, iParam5) || func_78(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_78(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_79(Param0, Global_2410802.f_293[iVar0 /*3*/], Global_2410802.f_390[iVar0], Global_2410802.f_423[iVar0], 1036831949))
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

int func_79(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_81(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_80(&Var0, 0f, 0f, uParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		unk_0xB72AA272E2B242A6(iParam7, &Var3, &Var6);
		fVar9 = unk_0x75E01E8585722F89((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0x75E01E8585722F89((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0x75E01E8585722F89((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		return unk_0x65EC44693BF9CB43(Param0, Var12, Var15, fVar10, 0, 1);
	}
	return 0;
}

void func_80(var uParam0, struct<3> Param1)
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

float func_81(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	unk_0xB72AA272E2B242A6(iParam0, &Var0, &Var3);
	Var6 = { Var3 - Var0 };
	return (unk_0x71D93B57D07F9804((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f)))) + fParam1);
}

int func_82(struct<3> Param0, float fParam3, int iParam4, int iParam5)
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
				if (Global_2410802.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2410802.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_44(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2410802.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2410802.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_36(iVar1, 0, 1))
			{
				if (unk_0x2A488C176D52CCA5(func_44(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_83(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14)
{
	Global_2404546.f_1 = 0;
	if (!func_77(Param0, 0.5f, unk_0xAF65E5A58BE87D95(), 0, 0))
	{
		Global_2404546.f_1++;
		if (bParam5)
		{
			if (func_122(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404546.f_1 = (Global_2404546.f_1 + Global_2404546);
				if (!func_88(Param0, fParam12))
				{
					Global_2404546.f_1++;
					if (!func_87(Param0))
					{
						Global_2404546.f_1++;
						return 1;
					}
				}
			}
			else
			{
				Global_2404546.f_1 = (Global_2404546.f_1 + Global_2404546);
			}
		}
		else if (!bParam4)
		{
			if (func_122(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
			{
				Global_2404546.f_1 = (Global_2404546.f_1 + Global_2404546);
				if (!func_88(Param0, fParam12))
				{
					Global_2404546.f_1++;
					if (!func_84(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2404546.f_1++;
						if (!func_87(Param0))
						{
							Global_2404546.f_1++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2404546.f_1 = (Global_2404546.f_1 + Global_2404546);
			}
		}
		else if (func_122(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, 0, -1, 1, 0, 0, fParam13, bParam14))
		{
			Global_2404546.f_1 = (Global_2404546.f_1 + Global_2404546);
			if (!func_88(Param0, fParam12))
			{
				Global_2404546.f_1++;
				if (!func_84(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2404546.f_1++;
					if (!func_87(Param0))
					{
						Global_2404546.f_1++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2404546.f_1 = (Global_2404546.f_1 + Global_2404546);
		}
	}
	return 0;
}

int func_84(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xAF65E5A58BE87D95() == iVar1)
		{
			if ((func_36(iVar1, 1, 1) && func_45(iVar1)) && unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar1))
			{
				if (!func_86(unk_0xAF65E5A58BE87D95(), iVar1, -2, 0))
				{
					if (func_85(func_44(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_85(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
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
	return unk_0x65EC44693BF9CB43(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x5805EAF13FC54BE6(iParam0) == -1 && unk_0x5805EAF13FC54BE6(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x5805EAF13FC54BE6(iParam0) == unk_0x5805EAF13FC54BE6(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x5805EAF13FC54BE6(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x5805EAF13FC54BE6(iParam0) == iParam2;
	}
	return unk_0x5805EAF13FC54BE6(iParam0) == iParam2;
}

int func_87(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (func_32(unk_0xAF65E5A58BE87D95(), 1))
	{
		if (Global_1601761.f_27014 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1601761.f_27014)
			{
				if (Global_1601761.f_27015[iVar0 /*31*/].f_7 != 0)
				{
					unk_0xB72AA272E2B242A6(Global_1601761.f_27015[iVar0 /*31*/].f_7, &Var1, &Var4);
					fVar7 = (unk_0x75E01E8585722F89((Var1.f_1 - Var4.f_1)) * 0.5f);
					fVar8 = (unk_0x75E01E8585722F89((Var1.f_0 - Var4.f_0)) * 0.5f);
					fVar9 = (unk_0x75E01E8585722F89((Var1.f_2 - Var4.f_2)) * 0.5f);
					fVar10 = ((fVar7 * fVar7) + (fVar8 * fVar8));
					fVar10 = (fVar10 + fVar9);
					if (unk_0xB7A628320EFF8E47(Global_1601761.f_27015[iVar0 /*31*/], Param0) < fVar10)
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

int func_88(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_36(iVar1, 1, 1) && func_45(iVar1)) && unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar1))
		{
			if ((unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1 && unk_0x5805EAF13FC54BE6(iVar1) == -1) && !func_31(unk_0xAF65E5A58BE87D95(), 1))
			{
				return 0;
			}
			else if ((unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1 && !unk_0xAF65E5A58BE87D95() == iVar1) || !func_86(unk_0xAF65E5A58BE87D95(), iVar1, -2, 0))
			{
				if (unk_0x2A488C176D52CCA5(Param0, func_44(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_89(int iParam0)
{
	if ((Global_2404546.f_404 == 9 || Global_2404546.f_404 == 9) || (Global_2404546.f_404 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_90(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (unk_0xB7A628320EFF8E47(Global_2404546.f_1323[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_91(var uParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (Global_2404546.f_472 > 0f)
	{
		fVar3 = unk_0x2A488C176D52CCA5(*uParam0, Global_2404546.f_469);
		if (fVar3 < Global_2404546.f_472)
		{
			if (bParam1)
			{
				Var0 = { *uParam0 };
				func_15(&Var0, Global_2404546.f_469, Global_2404546.f_472, 1036831949, 0);
				if (func_91(&Var0, 0))
				{
					Var0 = { *uParam0 };
					func_15(&Var0, Global_2404546.f_469, Global_2404546.f_472, 1036831949, 1);
				}
				*uParam0 = { Var0 };
			}
			return 1;
		}
	}
	return 0;
}

int func_92(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xAF65E5A58BE87D95() != iVar1) || iParam8 == 0)
		{
			if (func_36(iVar1, bParam4, bParam5))
			{
				if (unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar1))
				{
					if (!bParam7 || (!unk_0x9F94F2CFDCA78C55(unk_0x687D51F360787909(iVar1)) && func_45(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) != unk_0x5805EAF13FC54BE6(iVar1))) || unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1)
						{
							if (((unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1 && iParam9) && bParam6) && func_47(iVar1))
							{
							}
							else if (unk_0xFD68187442384158(unk_0x687D51F360787909(iVar1)))
							{
								if (unk_0x8FE221761D524CFE(func_44(iVar1), Param0, 1) < fParam3)
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

int func_93(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_36(iVar1, 1, 1))
			{
				if ((!func_104(iVar1, 0) && unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar1)) && iVar1 != unk_0xAF65E5A58BE87D95())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!unk_0x5805EAF13FC54BE6(iVar1) == -1)
						{
							if (unk_0x5805EAF13FC54BE6(iVar1) == unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (unk_0x5805EAF13FC54BE6(iVar1) == iVar3)
					{
						if (unk_0x8FE221761D524CFE(func_44(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (unk_0xEDACD0E59C5E7D93(iVar1, Param0, fParam3))
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

void func_94(struct<3> Param0, var uParam3, var uParam4)
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
			if (!unk_0x61D8FEAF64881CDA(Global_2359717[iVar1 /*26*/].f_12, 11))
			{
				if (unk_0x652D2EEEF1D3E62C(*(uParam3[iVar0 /*4*/])) == 0f || unk_0x2A488C176D52CCA5(Global_2359717[iVar1 /*26*/].f_3, Param0) < unk_0x2A488C176D52CCA5(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var2 = { Global_2359717[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2359717[iVar1 /*26*/].f_6.f_2;
					func_96(&Var2, uParam3, iVar0);
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
				Var6.f_7 = { Global_2359393[iVar1 /*3*/] };
				func_95(&Var6, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_95(var uParam0, var uParam1, int iParam2)
{
	Global_2408252 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_95(&Global_2408252, uParam1, iParam2 + 1);
	}
}

void func_96(var uParam0, var uParam1, int iParam2)
{
	Global_2408248 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_96(&Global_2408248, uParam1, iParam2 + 1);
	}
}

void func_97()
{
	func_101();
	func_100();
	func_99();
	func_98();
}

void func_98()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2404546.f_1216.f_63[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_99()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2404546.f_1216.f_30[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_100()
{
	struct<8> Var0;
	int iVar8;
	
	Var0.f_2 = 1176256410;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		Global_2404546.f_1216.f_5[iVar8 /*8*/] = { Var0 };
		iVar8++;
	}
}

void func_101()
{
	struct<5> Var0;
	
	Var0.f_2 = -1;
	Global_2404546.f_1216 = { Var0 };
}

var func_102()
{
	return Global_1310987.f_4;
}

void func_103(var uParam0, var uParam1)
{
	func_123();
	func_121(uParam0, uParam1);
}

bool func_104(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_105(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_105(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_106();
	}
	if (Global_1315875[iVar1] == 1)
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

int func_106()
{
	return Global_1312736;
}

bool func_107(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

void func_108(var uParam0, var uParam1, var uParam2)
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
	bool bVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	struct<3> Var23;
	var uVar26;
	
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
		}
	}
	if (uParam2->f_45)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_42)
	{
		if (func_120(uParam0, 1))
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
	Global_2408262.f_162 = 0;
	Global_2408262.f_163 = 0;
	Global_2408262.f_164 = -99;
	Global_2408262.f_165 = { 0f, 0f, 0f };
	while (true)
	{
		iVar8 = unk_0x41EB80A253F99F2F(*uParam0, iVar0, &uVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x5D626D890DCCBB00(iVar8))
		{
			unk_0x3810B8E4BE77F3FC(iVar8, &Var1);
			bVar12 = false;
			if (Global_2408262.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2408262.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xBF29019E61FCFC6F(iVar8)) || unk_0x4E95ACB56D760DBC(iVar8))
			{
				unk_0xC57DC64AD223F86E(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, *uParam0) > uParam2->f_4)
				{
					if (!func_91(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_119(Var1))
									{
										if (Var1.f_2 >= (uParam0->f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
										{
											if (Var1.f_2 <= (uParam0->f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
											{
												if (func_118(Var1, uParam2) || uParam2->f_33 >= 2)
												{
													if ((uParam2->f_42 && !func_120(&Var1, 0)) || uParam2->f_42 == 0)
													{
														Var1 = { func_116(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_45) };
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
																if ((uParam2->f_12 && !func_114(Var1, uVar4, uParam2->f_34, unk_0xAF65E5A58BE87D95(), 0, 1)) || !uParam2->f_12)
																{
																	if (!uParam2->f_15 || !func_14(uParam2->f_35, &Var1, uParam2->f_38, uParam2->f_41, 0, 1))
																	{
																		if (uParam2->f_8)
																		{
																			iVar16 = uParam2->f_31;
																			bVar17 = true;
																			iVar18 = 1;
																			fVar19 = uParam2->f_43;
																			if (uParam2->f_17)
																			{
																				iVar16 = 0;
																				bVar17 = false;
																				iVar18 = 0;
																				if (uParam2->f_33 == 1)
																				{
																					fVar19 = (fVar19 * 0.375f);
																				}
																			}
																			else
																			{
																				bVar17 = true;
																				iVar18 = 1;
																				if (uParam2->f_28)
																				{
																					if (uParam2->f_33 == 1)
																					{
																						fVar19 = (fVar19 * 0.375f);
																					}
																				}
																			}
																			iVar20 = 0;
																			if (uParam2->f_3 > 7f)
																			{
																				if (func_122(Var1, 6f, 1f, 1f, 5f, iVar16, bVar17, iVar18, fVar19, 0, -1, 1, uParam2->f_3, 0, 0, 0))
																				{
																					iVar20 = 1;
																				}
																			}
																			else if (func_122(Var1, 6f, 1f, 1f, 5f, iVar16, bVar17, iVar18, fVar19, 0, -1, 1, 0f, 0, 0, 0) && !func_113(Var1, uVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																			{
																				iVar20 = 1;
																			}
																			if (iVar20 || uParam2->f_33 >= 2)
																			{
																				if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2)
																				{
																					if (uParam2->f_30)
																					{
																						if (Global_2408262.f_162 == 0)
																						{
																							Global_2408262[0 /*3*/] = { Var1 };
																							Global_2408262.f_121[0] = uVar4;
																						}
																						else
																						{
																							iVar21 = 0;
																							while (iVar21 < Global_2408262.f_162)
																							{
																								if (unk_0xB7A628320EFF8E47(Var1, *uParam0) < unk_0xB7A628320EFF8E47(Global_2408262[iVar21 /*3*/], *uParam0))
																								{
																									func_112(Var1, uVar4, iVar21);
																									iVar21 = Global_2408262.f_162;
																								}
																								iVar21++;
																							}
																						}
																						Global_2408262.f_162++;
																						if (Global_2408262.f_162 >= 5)
																						{
																							iVar0 = 100;
																						}
																					}
																					else
																					{
																						Global_2408262[Global_2408262.f_162 /*3*/] = { Var1 };
																						Global_2408262.f_121[Global_2408262.f_162] = uVar4;
																						Global_2408262.f_162++;
																						if (func_118(Var1, uParam2))
																						{
																							Global_2408262.f_163++;
																						}
																						if (Global_2408262.f_162 >= 10)
																						{
																							iVar0 = 100;
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
				if (Global_2408262.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2408262[0 /*3*/] };
						*uParam1 = Global_2408262.f_121[0];
						return;
					}
					else
					{
						if (Global_2408262.f_163 > 0 && !Global_2408262.f_163 == Global_2408262.f_162)
						{
							func_110(0, uParam2);
						}
						iVar22 = unk_0x4D3E68F73B727E49(0, Global_2408262.f_162);
						*uParam0 = { Global_2408262[iVar22 /*3*/] };
						*uParam1 = Global_2408262.f_121[iVar22];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_108(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x4D3E68F73B727E49((1 + iVar15), (40 + iVar15));
						unk_0x3D84F9AECFD58EB5(*uParam0, iVar0, &Var1, &uVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_116(Var1, &uVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_45) };
						Var23 = { Var1 };
						uVar26 = uVar4;
						if (func_14(uParam2->f_35, &Var23, uParam2->f_38, uParam2->f_41, 1, 1) || func_120(&Var23, 1))
						{
							if (!uParam2->f_44)
							{
								uParam2->f_33 = 0;
								uParam2->f_44 = 1;
								*uParam0 = { Var23 };
								*uParam1 = uVar26;
								func_108(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var23 };
								*uParam1 = uVar26;
								return;
							}
						}
						else
						{
							*uParam0 = { Var23 };
							*uParam1 = uVar26;
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
				func_108(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_109(&Global_1312061, uParam0, uParam1, unk_0xAF65E5A58BE87D95());
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2408262.f_164 = iVar8;
	}
}

void func_109(var uParam0, var uParam1, var uParam2, int iParam3)
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
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), func_44(iParam3));
		if (fVar1 < fVar0)
		{
			if (!func_77(*(uParam0[iVar2 /*4*/]), 5f, iParam3, 0, 0))
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

void func_110(int iParam0, var uParam1)
{
	if (!func_118(Global_2408262[iParam0 /*3*/], uParam1))
	{
		Global_2408262.f_162 = (Global_2408262.f_162 - 1);
		func_111(iParam0);
		if (Global_2408262.f_162 > Global_2408262.f_163)
		{
			func_110(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_110(iParam0 + 1, uParam1);
	}
}

void func_111(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2408262[iParam0 /*3*/] = { Global_2408262[iParam0 + 1 /*3*/] };
			Global_2408262.f_121[iParam0] = Global_2408262.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_112(struct<3> Param0, var uParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2408262[iParam4 /*3*/] };
	uVar3 = Global_2408262.f_121[iParam4];
	Global_2408262[iParam4 /*3*/] = { Param0 };
	Global_2408262.f_121[iParam4] = uParam3;
	if (iParam4 <= Global_2408262.f_162 && iParam4 < 39)
	{
		func_112(Var0, uVar3, iParam4 + 1);
	}
}

int func_113(struct<3> Param0, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xAF65E5A58BE87D95() != iVar1) || iParam9 == 0)
		{
			if (func_36(iVar1, bParam5, bParam6))
			{
				if (unk_0x73AB522FB7F2E420(unk_0xAF65E5A58BE87D95(), iVar1))
				{
					if (!bParam8 || (!unk_0x9F94F2CFDCA78C55(unk_0x687D51F360787909(iVar1)) && func_45(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) != unk_0x5805EAF13FC54BE6(iVar1))) || unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1)
						{
							if (((unk_0x5805EAF13FC54BE6(unk_0xAF65E5A58BE87D95()) == -1 && iParam10) && bParam7) && func_47(iVar1))
							{
							}
							else if (unk_0xFD68187442384158(unk_0x687D51F360787909(iVar1)))
							{
								if (func_79(func_44(iVar1), Param0, uParam3, iParam4, 1036831949))
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

int func_114(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_115(Param0, uParam3, iParam4, iParam5, iParam6) || func_78(Param0, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_115(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6)
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
				if (Global_2410802.f_260[iVar0])
				{
					if (func_79(Global_2410802.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_79(func_44(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2410802.f_260[iVar0])
			{
				if (func_79(Global_2410802.f_130[iVar0 /*3*/], Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_36(iVar1, 0, 1))
			{
				if (func_79(func_44(iVar1), Param0, uParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_116(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_117(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xC57DC64AD223F86E(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0xD157439A5C52AA4E(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
				unk_0xB72AA272E2B242A6(iParam11, &fVar17, &fVar20);
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
		if (!func_117(Param0, *uParam3, Param6))
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
	Var0 = { unk_0xDA0070A0FA486D72(Param0, *uParam3, fVar14, 0f, 0f) };
	return Var0;
}

int func_117(struct<3> Param0, var uParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_80(&Var0, 0f, 0f, uParam3);
	Var3 = { Param4 - Param0 };
	if (func_20(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_118(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		if (!uParam3->f_26)
		{
			if (unk_0x2A488C176D52CCA5(Param0, uParam3->f_19) <= uParam3->f_25)
			{
				return 1;
			}
		}
		else if (unk_0x65EC44693BF9CB43(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_119(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_68(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2408137[iVar1])
	{
		if (func_67(Param0, &(Global_2407497[iVar1 /*71*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2408137[8])
	{
		if (func_67(Param0, &(Global_2407497[8 /*71*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_120(var uParam0, bool bParam1)
{
	if (Global_2404546.f_22.f_14)
	{
		if (((((*uParam0 > Global_2404546.f_22.f_8 && *uParam0 < Global_2404546.f_22.f_11) && uParam0->f_1 > Global_2404546.f_22.f_8.f_1) && uParam0->f_1 < Global_2404546.f_22.f_11.f_1) && uParam0->f_2 > Global_2404546.f_22.f_8.f_2) && uParam0->f_2 < Global_2404546.f_22.f_11.f_2)
		{
			if (bParam1)
			{
				*uParam0 = { func_23(*uParam0, Global_2404546.f_22.f_8, Global_2404546.f_22.f_11, 0f, 1, 1036831949, 0) };
			}
			return 1;
		}
	}
	return 0;
}

void func_121(var uParam0, var uParam1)
{
	unk_0xC47920984FEAECEF(uParam0, uParam1, 0.1f);
	Global_2404546.f_1199 = unk_0xF682120D0C324317();
	Global_2404546.f_1197 = 1;
	Global_2404546.f_1200 = unk_0xFACC0E85E40AD425();
}

int func_122(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404546 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x1DB23BF4B2FFF9BA(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x98DDD45D8A6467D0(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x98DDD45D8A6467D0(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x3D4E28BCE4C60954(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam13)
	{
		if (unk_0xF97CA70F2DB85F21(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404546++;
	if (fParam14 > 0f)
	{
		if (func_92(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_76(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404546++;
	return 1;
}

void func_123()
{
	if (Global_2404546.f_1197)
	{
		if (unk_0xF682120D0C324317() == Global_2404546.f_1199)
		{
			unk_0x0BEC066E45E66285();
		}
		else
		{
			unk_0x0BEC066E45E66285();
		}
		Global_2404546.f_1197 = 0;
	}
}

int func_124()
{
	if (unk_0xC2C705ED6124A7C2())
	{
		return 10000;
	}
	return 1000;
}

int func_125(struct<3> Param0, float fParam3, var uParam4, var uParam5, struct<13> Param6, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23)
{
	struct<11> Var0;
	struct<18> Var18;
	struct<3> Var40;
	
	if (Param6.f_5 > (fParam3 - 20f))
	{
		Param6.f_5 = (fParam3 - 20f);
	}
	Var0 = 3;
	Var0.f_10 = 3;
	Var0.f_14 = 3;
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
			Var40 = { Param0 - Var0[0 /*3*/] };
			if (Var40.f_2 > Param6.f_12)
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

int func_126(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_127(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x2CCDE625E685C339())
		{
			func_128(uParam0, 0, 0);
		}
	}
}

void func_128(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xD95428C8AA1DBBF2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xFACC0E85E40AD425();
			}
			else
			{
				*uParam0 = unk_0x49BD9731DF21C969();
			}
		}
		else
		{
			*uParam0 = unk_0xF976C624234A4AA8();
		}
		uParam0->f_1 = 1;
	}
}

void func_129()
{
	switch (Local_66[unk_0x9DCF1243D4AAD942() /*3*/].f_2)
	{
		case 0:
			func_158();
			func_157();
			if (func_147())
			{
				func_145();
				func_144();
				func_130(35);
				Local_66[unk_0x9DCF1243D4AAD942() /*3*/].f_2 = 1;
			}
			else if (Local_55.f_8 >= 1)
			{
				func_144();
				Local_66[unk_0x9DCF1243D4AAD942() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_55.f_8 >= 2)
			{
				Local_66[unk_0x9DCF1243D4AAD942() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6809)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_143() /*8053*/].f_5756.f_1795[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_143() /*8053*/].f_5756.f_1795[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_143() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1)
			{
				Global_2097152[func_143() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1 = 1;
				unk_0x3DBE2A7AF9E71C82(&Global_2445276, (8 + iVar2));
				func_138(2093, -1);
				func_134(67, -1);
				unk_0x53B471E359546EFA(1000, iVar1);
				if (iVar3 < 2)
				{
					func_131(15, 0);
				}
			}
		}
	}
}

void func_131(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_133(iParam0, iParam1))
	{
		iVar0 = func_132();
		Global_2434883[iVar0] = iParam0;
	}
}

int func_132()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2434883[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_133(int iParam0, var uParam1)
{
	if (Global_1315886)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315898) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_134(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_136(iParam0, func_137(iParam1));
	iVar0++;
	func_135(iParam0, iVar0, iParam1);
}

void func_135(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2474212[iParam0 /*6*/][func_137(uParam2)];
	unk_0x96B68C67633472DC(iVar0, iParam1, 1);
}

int func_136(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2474212[iParam0 /*6*/][func_137(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_137(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_106();
		if (iVar1 > -1)
		{
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
		}
	}
	return iVar0;
}

void func_138(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_142(iParam0, func_137(iParam1), 0);
	iVar0++;
	if (!func_141(iParam0))
	{
		func_140(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_139(iParam0, iVar0, iParam1, 1);
	}
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_137(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 774:
			Global_1333776[func_137(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1333782[func_137(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1333788[func_137(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1333794[func_137(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1333752[func_137(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1333758[func_137(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1333764[func_137(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1333770[func_137(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1333728[func_137(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1333734[func_137(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1333740[func_137(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1333746[func_137(iParam2)] = iParam1;
			break;
		
		case 744:
			Global_1333800[func_137(iParam2)] = iParam1;
			break;
		
		case 745:
			Global_1333806[func_137(iParam2)] = iParam1;
			break;
		
		case 746:
			Global_1333812[func_137(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1333818[func_137(iParam2)] = iParam1;
			break;
		
		case 1289:
			Global_1333824[func_137(iParam2)] = iParam1;
			break;
		
		case 626:
			Global_1333830[func_137(iParam2)] = iParam1;
			break;
		
		case 1264:
			Global_1333836[func_137(iParam2)] = iParam1;
			break;
		
		case 1861:
			Global_2474981[0 /*6*/][func_137(iParam2)] = iParam1;
			break;
		
		case 2250:
			Global_2474981[1 /*6*/][func_137(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1333842[func_137(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1333848[func_137(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1333854[func_137(iParam2)] = iParam1;
			break;
		
		case 1222:
			Global_1333860[func_137(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_140(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_137(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, iParam1, iParam3);
	}
}

int func_141(int iParam0)
{
	if (Global_1333709)
	{
		switch (iParam0)
		{
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
			case 744:
			case 745:
			case 746:
			case 747:
			case 1289:
			case 626:
			case 1264:
			case 751:
			case 752:
			case 753:
			case 1222:
			case 1861:
			case 2250:
				return 1;
				break;
			}
	}
	return 0;
}

int func_142(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454190[iParam0 /*6*/][func_137(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_143()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_144()
{
	if (unk_0xD361727124133DF3(uLocal_164))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_164);
	}
}

void func_145()
{
	if (!unk_0x61D8FEAF64881CDA(Global_2421967.f_3160, 0))
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_2421967.f_3160), 0);
		func_146();
	}
	else
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_2421967.f_3160), 1);
	}
}

void func_146()
{
	func_138(1175, -1);
}

int func_147()
{
	struct<9> Var0;
	
	if (unk_0x3D8BF0E3847B29E0(Local_55.f_2))
	{
		if (unk_0x21F34311BCDA79B9(unk_0x9F00512086D0A86F(Local_55.f_2), unk_0x507DA4994C3D8EBD()) && func_156(Local_55.f_2))
		{
			func_155(&(Local_55.f_2));
			if (unk_0xD361727124133DF3(uLocal_164))
			{
				unk_0xA0A65B537B1F11EC(&uLocal_164);
			}
			func_150("ABB_BOXCT", 1);
			Var0.f_2 = 107;
			Var0.f_5 = unk_0xAF65E5A58BE87D95();
			func_148(Var0, func_149(0));
			unk_0x3DBE2A7AF9E71C82(&(Local_66[unk_0x9DCF1243D4AAD942() /*3*/].f_1), 0);
			return 1;
		}
	}
	return 0;
}

void func_148(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xAF65E5A58BE87D95();
	if (!iParam9 == 0)
	{
		unk_0x16EC6B18501E56BB(1, &Param0, 9, iParam9);
	}
}

int func_149(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x0F0C172200951A9A())
	{
		if (unk_0xD0E2103B183CBA60(unk_0xC54850646145FF41(iVar1)))
		{
			iVar2 = unk_0x6E852073107AE8FE(unk_0xC54850646145FF41(iVar1));
			if (func_36(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xAF65E5A58BE87D95() || iParam0)
				{
					unk_0x3DBE2A7AF9E71C82(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_150(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x82FD00B995993186(sParam0);
	iVar0 = unk_0x81489E3284B071C0(0, 1);
	func_151(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_151(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_154() || !unk_0x0971F0C5992C6780()) || !func_104(unk_0xAF65E5A58BE87D95(), 0))
	{
		return;
	}
	iVar0 = func_152(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1689857.f_5[iVar0 /*53*/] = iParam0;
		Global_1689857.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1689857.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1689857.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1689857.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1689857.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1689857.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1689857 - 1))
	{
		if (iParam0 > Global_1689857.f_5[iVar0 /*53*/].f_1)
		{
			func_153(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1689857++;
	if (Global_1689857 > 5)
	{
		Global_1689857 = 5;
		return Global_1689857;
	}
	return (Global_1689857 - 1);
}

void func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1689857.f_5[iVar0 /*53*/] = { Global_1689857.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_154()
{
	return unk_0xFBD0BD8E550E0625(-1762644250);
}

void func_155(var uParam0)
{
	var uVar0;
	
	if (unk_0x3D8BF0E3847B29E0(*uParam0))
	{
		if (!unk_0xC6EE326730271D0C(*uParam0))
		{
		}
	}
	if (unk_0xB8C2D6B33E64EA14(*uParam0))
	{
		uVar0 = unk_0x3CB82CF6E610C2A9(*uParam0);
		unk_0xA65C6361932CEE99(&uVar0);
	}
}

int func_156(var uParam0)
{
	if (unk_0x3D8BF0E3847B29E0(uParam0))
	{
		unk_0x1301764D6FF2BC45(uParam0);
		return unk_0xC6EE326730271D0C(uParam0);
	}
	return 0;
}

void func_157()
{
	if (!unk_0xD361727124133DF3(uLocal_164))
	{
		if (unk_0x3D8BF0E3847B29E0(Local_55.f_2))
		{
			uLocal_164 = unk_0xB6F075D13B917FBE(unk_0x9F00512086D0A86F(Local_55.f_2));
			unk_0x1D8833C0F155BFE7(uLocal_164, 1.2f);
			unk_0x01DF6D56C47E7482(uLocal_164, 403);
			unk_0xEDB3DD98D55452E4(uLocal_164, 2);
			unk_0x2B271F66198227B7(uLocal_164, "ABB_BLIPN");
		}
	}
}

void func_158()
{
	var uVar0;
	
	if (!unk_0xBB51CB7A4D14453D())
	{
		uVar0 = func_142(1177, -1, 0);
		if (!unk_0x61D8FEAF64881CDA(uVar0, 14))
		{
			unk_0x3DBE2A7AF9E71C82(&uVar0, 14);
			func_140(1177, uVar0, -1, 1);
		}
	}
}

int func_159()
{
	return Local_55.f_0;
}

int func_160()
{
	unk_0xCBE6AC5010E5CE5C(joaat("prop_drug_package_02"));
	if (unk_0xD291857D0C9C7FEC(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)
{
	return Local_66[iParam0 /*3*/];
}

int func_162()
{
	bool bVar0;
	
	func_169(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315872 == 0)
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			return 1;
		}
	}
	if (func_168())
	{
		return 1;
	}
	if (Global_2436715)
	{
		return 1;
	}
	if (func_167())
	{
		return 1;
	}
	if (func_166(157))
	{
		if (!func_165())
		{
			return 1;
		}
	}
	if (func_166(155))
	{
		return 1;
	}
	if (!unk_0x0E4B4CA22DBCFA69())
	{
		return 1;
	}
	if (func_163() != 0)
	{
		if (unk_0x25531002BCF0D968(func_163()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_163()
{
	switch (func_164())
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

int func_164()
{
	return Global_24444;
}

bool func_165()
{
	return Global_2427935.f_570;
}

int func_166(int iParam0)
{
	if (unk_0x289D054E2E18C82E(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_167()
{
	return Global_2434971;
}

bool func_168()
{
	return Global_2427935.f_565;
}

void func_169(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB301423C53556EA6(1))
	{
		iVar1 = unk_0xAAB64DCC229F922F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6EDD33D6B8546C95(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_170(iVar0);
					break;
				
				case 2:
					unk_0x6EDD33D6B8546C95(1, iVar0, &Var4, 3);
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

void func_170(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6EDD33D6B8546C95(1, iParam0, &Var0, 3))
	{
		if (func_36(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x687D51F360787909(Var0.f_1);
			if (unk_0xFD68187442384158(uVar3))
			{
				if (unk_0x2A24448FF232F834(uVar3, 0))
				{
					uVar4 = unk_0x78AB10B64129B3D5(uVar3, 0);
					if (unk_0x9067781626AA370D(uVar4, Var0.f_2) && unk_0x0D1738F09A13D367())
					{
						if (func_171(uVar4, &bVar5))
						{
							unk_0xA8B02A3D719BC7B0(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xB67623A401171555(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_171(var uParam0, var uParam1)
{
	if (unk_0xFD68187442384158(uParam0))
	{
		if (!unk_0x73E2404DC70203CD(uParam0))
		{
			if (unk_0x9ACF2D423F8B5749(uParam0))
			{
				unk_0xBAE5DF507EEC53C8(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x51BC2FF711F8CF71(uParam0, 0))
		{
			if (unk_0xFE0D96A75DA37EB0(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_172()
{
	unk_0x4EDE34FBADD967A6(0);
}

int func_173(struct<20> Param0)
{
	func_178(func_179(Param0.f_0), Param0);
	unk_0x091AADFDC8448CBD(1);
	func_175(0, -1, 0);
	unk_0x661B032797391228(&Local_55, 11);
	unk_0xEF4D8ADC6645E7F7(&Local_66, 97);
	if (!func_174())
	{
		return 0;
	}
	unk_0xB43679BBB30F1391(0);
	if (unk_0x2CCDE625E685C339())
	{
		Local_55.f_7 = Param0.f_16;
		Local_55.f_3 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0) };
		if (!func_3(Global_2446210.f_775.f_1))
		{
			unk_0x3DBE2A7AF9E71C82(&(Local_55.f_1), 8);
		}
	}
	iLocal_167 = unk_0x1965D5FB1AA96228();
	Local_66[unk_0x9DCF1243D4AAD942() /*3*/] = 0;
	return 1;
}

int func_174()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xD95428C8AA1DBBF2())
		{
			return 0;
		}
		if (unk_0x0483A743E1339A51())
		{
			return 1;
		}
		if (func_168())
		{
			return 0;
		}
		if (func_166(155))
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

int func_175(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x2B79F83CAD49E762();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_177();
			}
			else
			{
				return 0;
			}
		}
		if (!func_176())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xD95428C8AA1DBBF2())
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
				if (func_168())
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
				if (func_166(155))
				{
					if (!bParam2)
					{
						func_177();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xD5762A6870CA7430())
			{
				if (!bParam2)
				{
					func_177();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x2B79F83CAD49E762();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			if (!bParam2)
			{
				func_177();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xD5762A6870CA7430())
	{
		if (!bParam2)
		{
			func_177();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_176()
{
	return Global_1315872;
}

void func_177()
{
	unk_0x883793591E631A3B();
}

void func_178(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		func_177();
	}
	unk_0x4C2DEED020A287EF(uParam0, 0, Param1.f_16);
}

int func_179(int iParam0)
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

void func_180()
{
	if (unk_0xD361727124133DF3(uLocal_164))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_164);
	}
	func_182();
	if (unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x2CCDE625E685C339())
		{
			if (unk_0x3D8BF0E3847B29E0(Local_55.f_2) && unk_0xC6EE326730271D0C(Local_55.f_2))
			{
				func_155(&(Local_55.f_2));
			}
			Local_55.f_0 = 4;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Local_55.f_1, 8))
	{
		func_181();
	}
	func_177();
}

void func_181()
{
	Global_2446210.f_775 = 0;
	Global_2446210.f_775.f_1 = { 0f, 0f, 0f };
	Global_2446210.f_775.f_4 = 0f;
}

void func_182()
{
	if (unk_0x61D8FEAF64881CDA(uLocal_163, 4))
	{
		unk_0x0B8668A8A57B0785(unk_0xAF65E5A58BE87D95(), 0.72f);
		unk_0x53168525D1CF19A8(unk_0xAF65E5A58BE87D95(), 1f);
		unk_0x4525FE997ADE7244(unk_0xAF65E5A58BE87D95(), 1f);
		unk_0xB56AF6C1B3D0A2B0(unk_0xAF65E5A58BE87D95(), 1f);
		func_183(1);
		unk_0xCD27BF29FB9012E2(&uLocal_163, 5);
		unk_0xCD27BF29FB9012E2(&uLocal_163, 7);
		unk_0xCD27BF29FB9012E2(&uLocal_163, 4);
	}
}

void func_183(int iParam0)
{
	var uVar0;
	
	uVar0 = func_184(iParam0, 0);
	unk_0x33D978A3F3EC8BD3(uVar0);
}

char* func_184(int iParam0, bool bParam1)
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

int func_185(int iParam0)
{
	return Global_1582048[iParam0 /*324*/];
}

