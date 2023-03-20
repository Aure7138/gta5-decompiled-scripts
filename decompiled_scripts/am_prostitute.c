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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
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
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54[32];
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
	sLocal_19 = "NULL";
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
	if (unk_0x10FAB35428CCC9D7())
	{
		func_36(ScriptParam_0);
	}
	else
	{
		func_33();
	}
	iLocal_49 = unk_0x9CD27B0045628463();
	while (true)
	{
		func_32();
		if ((func_22() || unk_0xADA24309FE08DACF()) || (func_21(unk_0x4F8644AF03D0E0D6()) || func_20(unk_0x4F8644AF03D0E0D6())))
		{
			func_33();
		}
		if (unk_0x10FAB35428CCC9D7())
		{
			func_2();
			func_1();
			iLocal_50++;
			if (iLocal_50 >= unk_0xA6C90FBC38E395EE())
			{
				iLocal_50 = 0;
			}
		}
		else
		{
			func_33();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xEE68096F9F37341E();
	iVar0 = 0;
	while (iVar0 < unk_0xA6C90FBC38E395EE())
	{
		if ((iLocal_50 % iVar0) == 0)
		{
			if (unk_0x6FF8FF40B6357D45(unk_0x9EC6603812C24710(iVar0)))
			{
				iVar2 = unk_0x43A66C31C68491C0(unk_0x24FB80D107371267(unk_0x9EC6603812C24710(iVar0)));
				if (!unk_0x5F9532F3B5CC2551(iVar2))
				{
					if (Local_54[iVar0 /*3*/].f_2)
					{
						if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false), unk_0x3FEF770D40960D5A(iVar2, true)) <= 22500f)
						{
							if (!iLocal_52)
							{
								unk_0xD3BD40951412FEF6("mini@prostitutes@sexlow_veh");
								unk_0xD3BD40951412FEF6("mini@prostitutes@sexnorm_veh");
								unk_0xD3BD40951412FEF6("mini@prostitutes@sexlow_veh_first_person");
								unk_0xD3BD40951412FEF6("mini@prostitutes@sexnorm_veh_first_person");
								iLocal_52 = 1;
							}
							if (!unk_0xA921AA820C25702F(iLocal_51, iVar0))
							{
								unk_0x933D6A9EEC1BACD0(&iLocal_51, iVar0);
							}
						}
						else if (unk_0xA921AA820C25702F(iLocal_51, iVar0))
						{
							unk_0xE80492A9AC099A93(&iLocal_51, iVar0);
						}
					}
					else if (unk_0xA921AA820C25702F(iLocal_51, iVar0))
					{
						unk_0xE80492A9AC099A93(&iLocal_51, iVar0);
					}
				}
				else if (unk_0xA921AA820C25702F(iLocal_51, iVar0))
				{
					unk_0xE80492A9AC099A93(&iLocal_51, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_51 == 0 && iLocal_52) && !Local_54[iVar1 /*3*/].f_2)
	{
		unk_0xF66A602F829E2A06("mini@prostitutes@sexlow_veh");
		unk_0xF66A602F829E2A06("mini@prostitutes@sexnorm_veh");
		unk_0xF66A602F829E2A06("mini@prostitutes@sexlow_veh_first_person");
		unk_0xF66A602F829E2A06("mini@prostitutes@sexnorm_veh_first_person");
		iLocal_52 = 0;
	}
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		return;
	}
	if (iLocal_49 > unk_0x9CD27B0045628463())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = unk_0xEE68096F9F37341E();
	bVar3 = false;
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar1 = unk_0xD80958FC74E988A6();
			if (func_19(&iVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_48)
	{
		case 0:
			if ((func_16(unk_0x4F8644AF03D0E0D6(), 1) || func_15()) || !bVar3)
			{
				iLocal_48 = 4;
			}
			else
			{
				iVar0 = func_12();
				if (iVar0 != func_11(iVar2) && iVar0 != 0)
				{
					func_10(iVar0);
					iLocal_49 = unk_0x9CD27B0045628463();
					iLocal_48 = 2;
				}
				else
				{
					iLocal_49 = unk_0x9CD27B0045628463() + 500;
				}
			}
			break;
		
		case 2:
			if (func_3())
			{
				Global_24597 = 0f;
				unk_0x6EB5F71AA68F2E8E("pb_prostitute");
				iLocal_49 = unk_0x9CD27B0045628463() + 250;
				Local_54[iVar2 /*3*/].f_2 = 0;
				iLocal_48 = 3;
			}
			else
			{
				iLocal_49 = unk_0x9CD27B0045628463() + 250;
			}
			break;
		
		case 3:
			if ((unk_0xE6CC9F3BA0FB9EF1("pb_prostitute") && unk_0x2C83A9DA6BFFC4F9(joaat("pb_prostitute")) <= 0) && !unk_0x9D40DF90FAD26098("pb_prostitute", unk_0xEE68096F9F37341E(), true, 0))
			{
				iVar4 = func_11(iVar2);
				iLocal_53 = unk_0xB8BA7F44DF1575E1("pb_prostitute", &iVar4, 1, 2050);
				unk_0xC90D2DCACD56184C("pb_prostitute");
				iLocal_48 = 0;
			}
			iLocal_49 = unk_0x9CD27B0045628463();
			break;
		
		case 4:
			if (func_3())
			{
				Local_54[iVar2 /*3*/].f_2 = 0;
				iLocal_49 = unk_0x9CD27B0045628463() + 250;
				iLocal_48 = 5;
			}
			else
			{
				iLocal_49 = unk_0x9CD27B0045628463() + 500;
			}
			break;
		
		case 5:
			if ((!func_16(unk_0x4F8644AF03D0E0D6(), 1) && !func_15()) && bVar3)
			{
				iLocal_49 = unk_0x9CD27B0045628463() + 250;
				iLocal_48 = 0;
			}
			else
			{
				iLocal_49 = unk_0x9CD27B0045628463() + 500;
			}
			break;
	}
}

int func_3()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("pb_prostitute")) <= 0 && !unk_0x9D40DF90FAD26098("pb_prostitute", unk_0xEE68096F9F37341E(), true, 0))
	{
		return 1;
	}
	if (iLocal_53 == 0)
	{
		return 1;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		func_4();
	}
	else
	{
		unk_0x4C68DDDDF0097317("pb_prostitute", 1);
	}
	return 0;
}

void func_4()
{
	struct<2> Var0;
	int iVar2;
	
	Var0.f_0 = 228;
	Var0.f_1 = unk_0x4F8644AF03D0E0D6();
	iVar2 = func_5(1, 1);
	if (iVar2 != 0)
	{
		unk_0x5AE99C571D5BBE5D(1, &Var0, 2, iVar2);
	}
}

var func_5(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x41BD2A6B006AF756(iVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x4F8644AF03D0E0D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, iVar1);
				}
				else if (!func_6(iVar2, 0))
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_6(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_7(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_7(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1312736;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB8DFD30D6973E135(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x5E9564D8246B909A(iParam0))
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

void func_10(int iParam0)
{
	Local_54[unk_0xEE68096F9F37341E() /*3*/] = iParam0;
}

int func_11(int iParam0)
{
	if (iParam0 == -1)
	{
		return Local_54[unk_0xEE68096F9F37341E() /*3*/];
	}
	return Local_54[iParam0 /*3*/];
}

int func_12()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	
	iVar0 = func_13();
	iVar1 = unk_0xEE68096F9F37341E();
	if (!unk_0x7239B21A38F536BA(func_11(iVar1)))
	{
		func_10(0);
		return iVar0;
	}
	if (iLocal_53 != 0 && unk_0x46E9AE36D8FA6417(iLocal_53))
	{
		if (Local_54[iVar1 /*3*/].f_2)
		{
			return func_11(iVar1);
		}
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar2 = unk_0xD80958FC74E988A6();
				if (func_19(&iVar2))
				{
					iVar3 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
					if (unk_0x7239B21A38F536BA(iVar3))
					{
						if (func_11(iVar1) == unk_0xBB40DD2270B65366(iVar3, 0) || unk_0xA3EE4A07279BB9DB(func_11(iVar1), iVar3, true))
						{
							Local_54[iVar1 /*3*/].f_2 = 1;
							return func_11(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_11(iVar1);
					}
					Var4 = { unk_0x3FEF770D40960D5A(func_11(iVar1), false) };
					Var7 = { unk_0x3FEF770D40960D5A(iVar0, false) };
					Var10 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), false) };
					fVar13 = unk_0x2A488C176D52CCA5(Var4, Var10);
					fVar14 = unk_0x2A488C176D52CCA5(Var10, Var7);
					if (fVar13 > fVar14)
					{
						if ((fVar13 - fVar14) > 25f)
						{
							return iVar0;
						}
						else if (fVar14 < 6f && fVar13 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_11(iVar1);
						}
					}
					else
					{
						return func_11(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_13()
{
	int iVar0;
	var uVar1[8];
	int iVar10;
	int iVar11;
	
	iVar0 = 0;
	iVar10 = unk_0x23F8F5FC7E8C4A6B(unk_0xD80958FC74E988A6(), &uVar1, -1);
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (!unk_0x84A2DD9AC37C35C1(uVar1[iVar11]))
			{
				if (unk_0x1BF094736DD62C2E(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0x1BF094736DD62C2E(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (!func_14(uVar1[iVar11]))
					{
						if (!unk_0xBBCCE00B381F8482(uVar1[iVar11]))
						{
							return uVar1[iVar11];
						}
					}
				}
			}
			iVar11++;
		}
	}
	return iVar0;
}

int func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Local_54[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_15()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_18, 0);
}

int func_16(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_17(iParam0))
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

bool func_17(int iParam0)
{
	return func_18(iParam0);
}

bool func_18(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_13.f_1, 0);
}

int func_19(int iParam0)
{
	if (unk_0x997ABD671D25CA0B(*iParam0, false))
	{
		if (unk_0xBB40DD2270B65366(unk_0x6094AD011A2EA87D(*iParam0), -1) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_20(int iParam0)
{
	return Global_2413868[iParam0 /*253*/].f_114 == 7;
}

bool func_21(int iParam0)
{
	return Global_2413868[iParam0 /*253*/].f_114 == 2;
}

int func_22()
{
	bool bVar0;
	
	func_29(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315872 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_28())
	{
		return 1;
	}
	if (Global_2436712)
	{
		return 1;
	}
	if (func_27())
	{
		return 1;
	}
	if (func_26(157))
	{
		if (!func_25())
		{
			return 1;
		}
	}
	if (func_26(155))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_23() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_23()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_23()
{
	switch (func_24())
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

int func_24()
{
	return Global_24444;
}

bool func_25()
{
	return Global_2427935.f_570;
}

int func_26(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_27()
{
	return Global_2434971;
}

bool func_28()
{
	return Global_2427935.f_565;
}

void func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5F92A689A06620AA(1))
	{
		iVar1 = unk_0xD8F66A3A60C62153(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2902843FCD2B2D79(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_30(iVar0);
					break;
				
				case 2:
					unk_0x2902843FCD2B2D79(1, iVar0, &Var4, 3);
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

void func_30(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x2902843FCD2B2D79(1, iParam0, &Var0, 3))
	{
		if (func_9(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x43A66C31C68491C0(Var0.f_1);
			if (unk_0x7239B21A38F536BA(iVar3))
			{
				if (unk_0x997ABD671D25CA0B(iVar3, false))
				{
					iVar4 = unk_0x9A9112A0FE9A4713(iVar3, false);
					if (unk_0x46E571A0E20D01F1(iVar4, Var0.f_2) && unk_0x2910669969E9535E())
					{
						if (func_31(iVar4, &bVar5))
						{
							unk_0xA711568EEDB43069(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x629BFA74418D6239(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_31(int iParam0, var uParam1)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x0A7B270912999B3C(iParam0))
		{
			if (unk_0x0991549DE4D64762(iParam0))
			{
				unk_0xAD738C3085FE7E11(iParam0, false, true);
				*uParam1 = 1;
			}
		}
		if (unk_0xDDE6DF5AE89981D2(iParam0, false))
		{
			if (unk_0x01BF60A500E28887(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_32()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_33()
{
	if (iLocal_52)
	{
		unk_0xF66A602F829E2A06("mini@prostitutes@sexlow_veh");
		unk_0xF66A602F829E2A06("mini@prostitutes@sexnorm_veh");
		unk_0xF66A602F829E2A06("mini@prostitutes@sexlow_veh_first_person");
		unk_0xF66A602F829E2A06("mini@prostitutes@sexnorm_veh_first_person");
	}
	func_35();
	func_3();
	if (unk_0x10FAB35428CCC9D7())
	{
		func_4();
	}
	else
	{
		unk_0x4C68DDDDF0097317("pb_prostitute", 1);
	}
	Global_2446207.f_2 = 0;
	func_34();
}

void func_34()
{
	unk_0x1090044AD1DA76FA();
}

void func_35()
{
	Global_2421967.f_599.f_10 = 0;
}

void func_36(struct<20> Param0)
{
	func_39(func_40(Param0.f_0), Param0);
	func_37(0, -1, 0);
	unk_0x3364AA97340CA215(&Local_54, 97);
	if (unk_0x10FAB35428CCC9D7())
	{
		func_4();
	}
	else
	{
		unk_0x4C68DDDDF0097317("pb_prostitute", 1);
	}
	unk_0xAA391C728106F7AF(false);
}

int func_37(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_34();
			}
			else
			{
				return 0;
			}
		}
		if (!func_38())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_34();
					}
					else
					{
						return 0;
					}
				}
				if (func_28())
				{
					if (!bParam2)
					{
						func_34();
					}
					else
					{
						return 0;
					}
				}
				if (func_26(155))
				{
					if (!bParam2)
					{
						func_34();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xCA97246103B63917())
			{
				if (!bParam2)
				{
					func_34();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x57D158647A6BFABF();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			if (!bParam2)
			{
				func_34();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xCA97246103B63917())
	{
		if (!bParam2)
		{
			func_34();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_38()
{
	return Global_1315872;
}

void func_39(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		func_34();
	}
	unk_0x1CA59E306ECB80A5(iParam0, false, Param1.f_16);
}

int func_40(int iParam0)
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

