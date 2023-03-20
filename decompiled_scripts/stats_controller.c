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
	int iLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
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
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
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
	iLocal_20 = 3;
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_49 = 3;
	unk_0x9243BAC96D64C050();
	if (unk_0xC968670BFACE42D9(32))
	{
		unk_0x1090044AD1DA76FA();
	}
	while (true)
	{
		func_92();
		switch (iLocal_50)
		{
			case 0:
				func_87();
				break;
			
			case 1:
				func_77();
				func_2();
				Global_87473 = 0;
				break;
			
			case 2:
				func_1();
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	iLocal_50 = 0;
}

void func_2()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	
	if (iLocal_56)
	{
		iLocal_56 = 0;
	}
	else
	{
		iLocal_51++;
	}
	bLocal_55 = false;
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_73();
	}
	if (iVar0 != iLocal_54)
	{
		iLocal_54 = iVar0;
		bLocal_55 = true;
		iLocal_62 = 0;
		iLocal_63 = 0;
		iLocal_70 = 0;
		iLocal_76 = 0;
	}
	if (iLocal_54 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_51 == 6 && func_72(64)) || (iLocal_51 == 5 && unk_0x2C83A9DA6BFFC4F9(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_56 = 1;
	}
	func_66();
	if (Global_87471 || (Global_87472 && !func_63(0)))
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_62(iLocal_54, iVar2);
				iVar2++;
			}
			Global_87471 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) || (!unk_0x10FAB35428CCC9D7() && !func_61(iLocal_54))) || unk_0xD9D2CFFF49FAB35F()) || func_60()) || unk_0xD3C2E180A40F031E()) || unk_0xB16FCE9DDC7BA182()) || !unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6())) || Global_68065) || Global_87473) || iLocal_57)
		{
			iLocal_78 = 1;
			iLocal_79 = unk_0x9CD27B0045628463();
			if (unk_0x10FAB35428CCC9D7())
			{
				iLocal_80 = unk_0x7A5487FE9FAA6B48();
			}
			return;
		}
		if (iLocal_78)
		{
			if ((!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_79) > 3000) || (unk_0x10FAB35428CCC9D7() && unk_0xDE350F8651E4346C(unk_0x7A5487FE9FAA6B48(), unk_0x017008CCDAD48503(iLocal_80, 3000))))
			{
				iLocal_78 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_52) > 2000) || (unk_0x10FAB35428CCC9D7() && unk_0xDE350F8651E4346C(unk_0x7A5487FE9FAA6B48(), unk_0x017008CCDAD48503(iLocal_53, 2000)))) || bLocal_55)
	{
		if (iLocal_51 >= 8)
		{
			iLocal_51 = 0;
			iLocal_52 = unk_0x9CD27B0045628463();
			if (unk_0x10FAB35428CCC9D7())
			{
				iLocal_53 = unk_0x7A5487FE9FAA6B48();
			}
		}
		iVar10 = 1;
		if (bLocal_55)
		{
			iVar10 = 8;
		}
		iVar11 = 0;
		while (iVar11 < iVar10)
		{
			bVar12 = true;
			if (bLocal_55)
			{
				iVar7 = iVar11;
			}
			else
			{
				iVar7 = iLocal_51;
			}
			func_59(iLocal_54, iVar7, &iVar5, &iVar6);
			if (unk_0x10FAB35428CCC9D7())
			{
				iVar3 = func_58(iVar6, -1, 0);
			}
			else if (iVar7 == 0)
			{
				iVar3 = Global_97173.f_1729.f_539.f_1615[iLocal_54];
			}
			else
			{
				unk_0x767FBC2AC802EF3D(iVar5, &iVar3, -1);
			}
			iVar3 = func_57(iVar3, 0, 100);
			if (func_47(iLocal_54, iVar7, iVar3, &iVar4))
			{
				if (unk_0x10FAB35428CCC9D7())
				{
					func_46(iVar6, iVar4, -1, 1);
				}
				else if (iVar7 == 0)
				{
					if (Global_97173.f_1729.f_539.f_1615[iLocal_54] == 0)
					{
						bVar12 = false;
					}
					Global_97173.f_1729.f_539.f_1615[iLocal_54] = iVar4;
				}
				else
				{
					unk_0xB3271D7AB655B441(iVar5, iVar4, true);
				}
				if (iVar4 > func_44(iLocal_54, iVar7, -1))
				{
					if (unk_0x10FAB35428CCC9D7())
					{
					}
					else if ((!Global_97173.f_7311 && !func_43(0)) || !unk_0xA921AA820C25702F(Global_97173.f_7311.f_2[27 /*3*/], 2))
					{
						bVar12 = false;
					}
					iVar13 = iVar4;
					iVar14 = (iVar13 - (iVar13 % func_42(iLocal_54, iVar7)));
					if ((iVar13 % func_42(iLocal_54, iVar7)) >= 0)
					{
						iVar14 = (iVar14 + func_42(iLocal_54, iVar7));
					}
					if (iVar13 >= iVar14)
					{
						iVar13 = iVar14;
					}
					else
					{
						iVar13 = (iVar14 - func_42(iLocal_54, iVar7));
					}
					if (iVar4 > iVar13)
					{
						bVar12 = false;
					}
					if (bVar12)
					{
						if (!bLocal_55)
						{
							if (unk_0x10FAB35428CCC9D7())
							{
								if (func_41(117, -1) == 0)
								{
									if (!unk_0x4D79439A6B55AC67() && func_9())
									{
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_57 = 1;
							iLocal_60 = (iVar4 - iVar3);
							iLocal_60 = (iLocal_60 + (iVar3 % func_42(iLocal_54, iVar7)));
							iLocal_61 = iVar4;
							iLocal_58 = iLocal_54;
							iLocal_59 = iVar7;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_54, iVar7, &iVar8))
						{
							if (iLocal_54 == 0)
							{
								unk_0x767FBC2AC802EF3D(joaat("sp0_total_playing_time"), &iVar9, -1);
								unk_0xB3271D7AB655B441(iVar8, iVar9, true);
							}
							else if (iLocal_54 == 1)
							{
								unk_0x767FBC2AC802EF3D(joaat("sp1_total_playing_time"), &iVar9, -1);
								unk_0xB3271D7AB655B441(iVar8, iVar9, true);
							}
							else if (iLocal_54 == 2)
							{
								unk_0x767FBC2AC802EF3D(joaat("sp2_total_playing_time"), &iVar9, -1);
								unk_0xB3271D7AB655B441(iVar8, iVar9, true);
							}
							else if (iLocal_54 == 3)
							{
							}
						}
					}
				}
				func_62(iLocal_54, iVar7);
			}
			else if (iVar4 < iVar3)
			{
				bVar15 = true;
				if (unk_0x10FAB35428CCC9D7())
				{
					func_46(iVar6, iVar4, -1, 1);
				}
				else if (iVar7 == 0)
				{
					Global_97173.f_1729.f_539.f_1615[iLocal_54] = iVar4;
					bVar15 = false;
				}
				else
				{
					unk_0xB3271D7AB655B441(iVar5, iVar4, true);
				}
				if (bVar15)
				{
					func_62(iLocal_54, iVar7);
				}
			}
			iVar11++;
		}
	}
	else
	{
		iLocal_56 = 1;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = joaat("last_playing_time");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability_maxed");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability_maxed");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability_maxed");
					break;
			}
			break;
	}
	return *uParam2 != joaat("last_playing_time");
}

void func_4(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_7())
	{
		iVar0 = Global_2472519[iParam0 /*6*/][func_5(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x4B33C4243DE0C432(iVar0, bParam1, bParam3);
		}
	}
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_6();
		if (iVar1 > -1)
		{
			Global_2453900 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453900 = 1;
		}
	}
	return iVar0;
}

int func_6()
{
	return Global_1312736;
}

int func_7()
{
	return 1;
	return 0;
}

void func_8(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_9()
{
	if (unk_0xA86478C6958735C5() && unk_0x157F93B036700462())
	{
		return 0;
	}
	if (Global_1681226 == 1)
	{
		return 0;
	}
	if (Global_1681085 == 1)
	{
		return 0;
	}
	if (unk_0x2272B0A1343129F4())
	{
		return 0;
	}
	if (Global_1573671 == 1)
	{
		return 0;
	}
	if (unk_0x7A3F19700A4D0525())
	{
		return 0;
	}
	if (Global_971738)
	{
		return 0;
	}
	if (Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_318 == 1)
	{
		return 0;
	}
	if (func_40())
	{
		return 0;
	}
	if (func_39())
	{
		return 0;
	}
	if (func_38())
	{
		if (!func_39())
		{
			if (!func_37(3, -1))
			{
				if (func_35(&Global_2436768, 300000, 0) == 1)
				{
					func_34(&Global_2436766);
					func_32(3, -1);
				}
				else if (func_35(&Global_2436766, 7000, 0) == 0)
				{
					return 0;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_31())
	{
		return 0;
	}
	if (func_30())
	{
		return 0;
	}
	if (func_28())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	if (func_26())
	{
		return 0;
	}
	if (func_25())
	{
		return 0;
	}
	if (unk_0x6CC27C9FA2040220())
	{
		return 0;
	}
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (unk_0x5E346D934122613F())
	{
		if (func_24(unk_0xD80958FC74E988A6()) == joaat("weapon_sniperrifle") || func_24(unk_0xD80958FC74E988A6()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (unk_0xB16FCE9DDC7BA182())
	{
		return 0;
	}
	if (func_23(8, -1))
	{
		return 0;
	}
	if (func_22(12, -1))
	{
		return 0;
	}
	if (unk_0xBC4C9EA5391ECC0D(19))
	{
		return 0;
	}
	if (func_21())
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	if (Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_27)
	{
		return 0;
	}
	if (Global_1573541)
	{
		return 0;
	}
	if (Global_1573545)
	{
		return 0;
	}
	if (Global_1573547)
	{
		return 0;
	}
	if (Global_2421967.f_3164.f_39)
	{
		return 0;
	}
	if (func_19(0))
	{
		return 0;
	}
	if (func_18())
	{
		return 0;
	}
	if (Global_2446207.f_3797)
	{
		return 0;
	}
	if (Global_2421967.f_3030)
	{
		return 0;
	}
	if (!func_17(unk_0x4F8644AF03D0E0D6(), 1, 0))
	{
		return 0;
	}
	if (func_16(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (Global_2421967.f_3164.f_39 == 1)
	{
		return 0;
	}
	if (Global_2428692.f_2841.f_25 == 1)
	{
		return 0;
	}
	if (func_15(1))
	{
		return 0;
	}
	if (func_13())
	{
		return 0;
	}
	if (unk_0xBC4C9EA5391ECC0D(16))
	{
		return 0;
	}
	if (func_12())
	{
		return 0;
	}
	if (func_11())
	{
		return 0;
	}
	if (unk_0xDAD37F45428801AE())
	{
		if (func_10("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_302)
	{
		return 0;
	}
	return 1;
}

bool func_10(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

bool func_11()
{
	return Global_2421967.f_1309.f_688 != 0;
}

bool func_12()
{
	return Global_2421967.f_2305.f_585;
}

bool func_13()
{
	return func_14();
}

bool func_14()
{
	return Global_1321257.f_40 == 3;
}

bool func_15(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17098.f_4 && Global_17098.f_104 == 4);
	}
	return Global_17098.f_4;
}

bool func_16(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_1599457[iParam0 /*32*/], 0);
}

int func_17(int iParam0, bool bParam1, bool bParam2)
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

int func_18()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
			return 0;
		}
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_20()
{
	return Global_1327591.f_112;
}

bool func_21()
{
	return Global_2421967.f_2122[0 /*45*/].f_1 != 0;
}

int func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1327591.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1327591.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (unk_0xA921AA820C25702F(Global_1327591.f_947, iParam0))
			{
				return 1;
			}
			if (unk_0xA921AA820C25702F(Global_1327591.f_948, iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_23(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0x3A87E44BB9A01D54(iParam0, &uVar0, true);
	return uVar0;
}

bool func_25()
{
	return Global_2427935.f_564;
}

bool func_26()
{
	return unk_0xA921AA820C25702F(Global_964222.f_8, 13);
}

bool func_27()
{
	return Global_2427935.f_563;
}

int func_28()
{
	if (func_29() == 1 || func_29() == 4)
	{
		return 1;
	}
	return 0;
}

int func_29()
{
	return Global_1312466.f_18;
}

int func_30()
{
	if (func_29() == 3 || func_29() == 2)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	Global_1333709 = 0;
	if (unk_0x5AA3BEFA29F03AD4() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x0D01D20616FC73FB(0, iParam1);
			iVar1 = func_33(iParam1);
			iVar0 = unk_0xC488FF2356EA7791(iVar1);
			break;
		
		default:
			iVar1 = func_33(iParam1);
			iVar0 = unk_0xC488FF2356EA7791(iVar1);
			if (!unk_0xA921AA820C25702F(iVar0, iParam0))
			{
				unk_0x933D6A9EEC1BACD0(&iVar0, iParam0);
				unk_0x0D01D20616FC73FB(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			func_46(1288, 0, iParam1, 1);
			break;
	}
}

int func_33(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_34(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_35(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_36(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			func_34(uParam0);
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		func_34(uParam0);
		return 1;
	}
	return 0;
}

void func_36(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7A5487FE9FAA6B48();
			}
			else
			{
				*uParam0 = unk_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = unk_0x9CD27B0045628463();
		}
		uParam0->f_1 = 1;
	}
}

bool func_37(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_33(iParam1);
	iVar1 = unk_0xC488FF2356EA7791(iVar0);
	return unk_0xA921AA820C25702F(iVar1, iParam0);
}

int func_38()
{
	int iVar0;
	
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (unk_0xA921AA820C25702F(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				if (unk_0x5AA3BEFA29F03AD4())
				{
					iVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&iVar0, 0);
					unk_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_39()
{
	return Global_1315898;
}

bool func_40()
{
	return Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_165 != 0;
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2472519[iParam0 /*6*/][func_5(iParam1)];
	if (unk_0x11B5E6D2AE73F48E(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

bool func_43(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (func_45(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 47;
					break;
				
				case 3:
					return 22;
					break;
				
				case 2:
					return 21;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 31;
					break;
				
				case 6:
					return 79;
					break;
				
				case 7:
					return 81;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 51;
					break;
				
				case 3:
					return 46;
					break;
				
				case 2:
					return 49;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 19;
					break;
				
				case 6:
					return 24;
					break;
				
				case 7:
					return 21;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 23;
					break;
				
				case 3:
					return 28;
					break;
				
				case 2:
					return 79;
					break;
				
				case 4:
					return 31;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 69;
					break;
				
				case 7:
					return 49;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_58(1209, iParam2, 0);
					break;
				
				case 3:
					return func_58(1215, iParam2, 0);
					break;
				
				case 2:
					return func_58(1211, iParam2, 0);
					break;
				
				case 4:
					return func_58(1214, iParam2, 0);
					break;
				
				case 5:
					return func_58(1213, iParam2, 0);
					break;
				
				case 6:
					return func_58(1210, iParam2, 0);
					break;
				
				case 7:
					return func_58(1212, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

bool func_45(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_46(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454187[iParam0 /*6*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

int func_47(int iParam0, int iParam1, int iParam2, var uParam3)
{
	*uParam3 = func_48(iParam0, iParam1, 0, -1);
	if (*uParam3 > iParam2)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 1)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 2)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = unk_0xBBDA792448DB5A89(func_58(64, iParam3, 0));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				unk_0xD7AE6C9C9C6AC54C(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_97173.f_1729.f_539.f_1583[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				unk_0xD7AE6C9C9C6AC54C(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_97173.f_1729.f_539.f_1583[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				unk_0xD7AE6C9C9C6AC54C(joaat("sp2_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_97173.f_1729.f_539.f_1583[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_56(20, iParam3) / 175f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_55(joaat("sp0_time_swimming"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_55(joaat("sp1_time_swimming"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_55(joaat("sp2_time_swimming"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_55(func_54(50, iParam3))));
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_55(joaat("sp0_time_driving_bicycle"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_55(joaat("sp1_time_driving_bicycle"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_55(joaat("sp2_time_driving_bicycle"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_55(func_54(47, iParam3))));
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_53(joaat("sp0_time_underwater"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_53(joaat("sp1_time_underwater"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_53(joaat("sp2_time_underwater"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_53(func_54(52, iParam3))) / 30f);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_58(1484, iParam3, 0)) / 20f);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp2_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_58(102, iParam3, 0) / 50)));
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_55(joaat("sp0_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_55(joaat("sp1_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_55(joaat("sp2_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_55(func_54(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(func_55(joaat("sp0_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(func_55(joaat("sp1_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(func_55(joaat("sp2_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(func_55(func_54(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 1)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 2)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp2_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_58(61, iParam3, 0)));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_52(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_52(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_52(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_52(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_52(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_52(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = func_52(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_52(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_52(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_52(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				unk_0xD7AE6C9C9C6AC54C(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_97173.f_1729.f_539.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				unk_0xD7AE6C9C9C6AC54C(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_97173.f_1729.f_539.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				unk_0xD7AE6C9C9C6AC54C(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_97173.f_1729.f_539.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_56(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1599[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1599[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp2_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1599[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_58(34, iParam3, 0);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89(iVar3) / 2f) * 1.5f));
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp0_hits_mission"), &iVar5, -1);
				unk_0x767FBC2AC802EF3D(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_97173.f_1729.f_539.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_97173.f_1729.f_539.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp1_hits_mission"), &iVar5, -1);
				unk_0x767FBC2AC802EF3D(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_97173.f_1729.f_539.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_97173.f_1729.f_539.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				unk_0x767FBC2AC802EF3D(joaat("sp2_hits_mission"), &iVar5, -1);
				unk_0x767FBC2AC802EF3D(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_97173.f_1729.f_539.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_97173.f_1729.f_539.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_58(157, iParam3, 0);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_51(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_50(joaat("mpply_shootingrange_wins")) * 1));
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = func_44(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_49(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_42(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_42(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_42(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_42(iParam0, iParam1)));
		}
	}
	iVar2 = unk_0xF34EE736CF047844(fVar0);
	iVar2 = func_57(iVar2, 0, 100);
	return iVar2;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_97173.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_58(72, iParam2, 0);
					break;
				
				case 3:
					return func_58(74, iParam2, 0);
					break;
				
				case 2:
					return func_58(73, iParam2, 0);
					break;
				
				case 4:
					return func_58(75, iParam2, 0);
					break;
				
				case 5:
					return func_58(76, iParam2, 0);
					break;
				
				case 6:
					return func_58(77, iParam2, 0);
					break;
				
				case 7:
					return func_58(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_50(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	return Global_97173.f_17368[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_52(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_97173.f_1354[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (unk_0xE0E854F5280FB769(iParam0) * 86400));
	iVar0 = (iVar0 + unk_0xF2D4B2FE415AAFC3(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0x7583B4BE4C5A41B5(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x2CE056FF3723F00B(iParam0));
	return iVar0;
}

int func_54(int iParam0, int iParam1)
{
	return Global_2454187[iParam0 /*6*/][func_5(iParam1)];
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + unk_0xE0E854F5280FB769(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0xF2D4B2FE415AAFC3(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x7583B4BE4C5A41B5(iParam0));
	return iVar0;
}

float func_56(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2471150[iParam0 /*6*/][func_5(iParam1)];
	if (unk_0xD7AE6C9C9C6AC54C(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454187[iParam0 /*6*/][func_5(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_59(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_60()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

bool func_61(int iParam0)
{
	return iParam0 < 3;
}

void func_62(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_59(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = func_58(iVar3, -1, 0);
	}
	else
	{
		unk_0x767FBC2AC802EF3D(iVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (unk_0xBBDA792448DB5A89(iVar0) / 100f)));
			unk_0x4A3DC7ECCC321032(unk_0x4F8644AF03D0E0D6(), fVar1);
			break;
		
		case 7:
			if (unk_0x2C83A9DA6BFFC4F9(joaat("armenian3")) != 0 || unk_0x2C83A9DA6BFFC4F9(joaat("trevor3")) != 0)
			{
				Global_87472 = 1;
			}
			else
			{
				fVar1 = (1f - (unk_0xBBDA792448DB5A89(iVar0) / 100f));
				unk_0xDB89EF50FF25FCE9(unk_0x4F8644AF03D0E0D6(), fVar1);
				unk_0xB2C1A29588A9F47C(unk_0x4F8644AF03D0E0D6(), fVar1);
				unk_0x4E9021C1FCDD507A(unk_0x4F8644AF03D0E0D6(), fVar1);
			}
			break;
	}
}

int func_63(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_64(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_64(int iParam0)
{
	return func_65(iParam0, Global_34909);
}

int func_65(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_66()
{
	func_71();
	func_70();
	func_67();
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_76)
	{
		if (iLocal_54 == 3)
		{
			if (Global_2097152[func_69() /*8053*/].f_5756.f_7)
			{
				iLocal_73 = func_53(func_54(135, -1));
				Global_2097152[func_69() /*8053*/].f_5756.f_7 = 0;
			}
			else
			{
				iLocal_73 = Global_2097152[func_69() /*8053*/].f_5756.f_6;
			}
			if (Global_2097152[func_69() /*8053*/].f_5756.f_4 == 0)
			{
				Global_2097152[func_69() /*8053*/].f_5756.f_4 = unk_0x9A73240B49945C76();
			}
			iLocal_75 = Global_2097152[func_69() /*8053*/].f_5756.f_4;
			iLocal_74 = Global_2097152[func_69() /*8053*/].f_5756.f_5;
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_1520[iLocal_54])
			{
				switch (iLocal_54)
				{
					case 0:
						iLocal_73 = func_53(joaat("sp0_total_wheelie_time"));
						break;
					
					case 1:
						iLocal_73 = func_53(joaat("sp1_total_wheelie_time"));
						break;
					
					case 2:
						iLocal_73 = func_53(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_97173.f_1729.f_539.f_1520[iLocal_54] = 0;
			}
			else
			{
				iLocal_73 = Global_97173.f_1729.f_539.f_1516[iLocal_54];
			}
			if (Global_97173.f_1729.f_539.f_1508[iLocal_54] == 0)
			{
				Global_97173.f_1729.f_539.f_1508[iLocal_54] = unk_0x9A73240B49945C76();
			}
			iLocal_75 = Global_97173.f_1729.f_539.f_1508[iLocal_54];
			iLocal_74 = Global_97173.f_1729.f_539.f_1512[iLocal_54];
		}
		iLocal_76 = 1;
		iLocal_77 = 1;
	}
	else if ((unk_0x9A73240B49945C76() - iLocal_75) > 86400)
	{
		iLocal_76 = 0;
		iLocal_77 = 0;
		iLocal_75 = unk_0x9A73240B49945C76();
		iLocal_74 = 0;
		if (iLocal_54 == 3)
		{
			Global_2097152[func_69() /*8053*/].f_5756.f_7 = 1;
		}
		else
		{
			Global_97173.f_1729.f_539.f_1520[iLocal_54] = 1;
		}
	}
	if (iLocal_77)
	{
		switch (iLocal_54)
		{
			case 0:
				iVar0 = func_53(joaat("sp0_total_wheelie_time"));
				break;
			
			case 1:
				iVar0 = func_53(joaat("sp1_total_wheelie_time"));
				break;
			
			case 2:
				iVar0 = func_53(joaat("sp2_total_wheelie_time"));
				break;
			
			case 3:
				iVar0 = func_53(func_54(135, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_73);
		iVar2 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) / 15f)) - iLocal_74);
		if (iVar2 > 0)
		{
			func_68(iLocal_54, 4, iVar2);
			iLocal_74 = (iLocal_74 + iVar2);
		}
		if (iVar0 > (iLocal_73 + (unk_0x2F8B4D1C595B11DB() / 1000) * 60))
		{
			iLocal_77 = 0;
		}
	}
	if (iLocal_54 == 3)
	{
		Global_2097152[func_69() /*8053*/].f_5756.f_4 = iLocal_75;
		Global_2097152[func_69() /*8053*/].f_5756.f_5 = iLocal_74;
	}
	else
	{
		Global_97173.f_1729.f_539.f_1508[iLocal_54] = iLocal_75;
		Global_97173.f_1729.f_539.f_1512[iLocal_54] = iLocal_74;
	}
}

void func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_97173.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_97173.f_1729.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 2827;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 2827)
			{
				iVar0 = func_58(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_46(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

int func_69()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_70()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_70)
	{
		bVar0 = true;
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar1 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
			if ((((unk_0x7239B21A38F536BA(iVar1) && unk_0x4C241E39B23DF959(iVar1, false)) && !unk_0x886E37EC497200B6(iVar1)) && unk_0xBB40DD2270B65366(iVar1, -1) == unk_0xD80958FC74E988A6()) && (unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(iVar1)) || unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(iVar1))))
			{
				bVar0 = false;
				if (unk_0xD5037BA82E12416F(iVar1) >= 53f)
				{
					func_68(iLocal_54, 4, 2);
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			iLocal_70 = 0;
			iLocal_71 = unk_0x9CD27B0045628463();
			if (unk_0x10FAB35428CCC9D7())
			{
				iLocal_72 = unk_0x7A5487FE9FAA6B48();
			}
		}
	}
	else if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iVar2 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
		if (((unk_0x7239B21A38F536BA(iVar2) && unk_0x4C241E39B23DF959(iVar2, false)) && unk_0xD5037BA82E12416F(iVar2) < 20f) && !unk_0x886E37EC497200B6(iVar2))
		{
			if ((!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_71) > 10000) || (unk_0x10FAB35428CCC9D7() && unk_0xDE350F8651E4346C(unk_0x7A5487FE9FAA6B48(), unk_0x017008CCDAD48503(iLocal_72, 10000))))
			{
				iLocal_70 = 1;
			}
		}
	}
}

void func_71()
{
	bool bVar0;
	int iVar1;
	char cVar2[64];
	
	bVar0 = false;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iVar1 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (((unk_0x7239B21A38F536BA(iVar1) && unk_0x4C241E39B23DF959(iVar1, false)) && unk_0xBB40DD2270B65366(iVar1, -1) == unk_0xD80958FC74E988A6()) && (((unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(iVar1)) || unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(iVar1))) || unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(iVar1))) || unk_0x39DAC362EE65FA28(unk_0x9F47B058362C84B5(iVar1))))
		{
			if (iLocal_62)
			{
				if (!unk_0x886E37EC497200B6(iVar1))
				{
					if ((!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_64) > 1500) || (unk_0x10FAB35428CCC9D7() && unk_0xDE350F8651E4346C(unk_0x7A5487FE9FAA6B48(), unk_0x017008CCDAD48503(iLocal_65, 1500))))
					{
						iLocal_66 = unk_0x9CD27B0045628463();
						if (unk_0x10FAB35428CCC9D7())
						{
							iLocal_67 = unk_0x7A5487FE9FAA6B48();
						}
						iLocal_63 = 1;
					}
					iLocal_62 = 0;
				}
			}
			if (iLocal_63)
			{
				if (!unk_0x886E37EC497200B6(iVar1))
				{
					if (unk_0xB104CD1BABF302E2(iVar1))
					{
						if ((((!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_66) > 20) || (!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_66) == 0)) || (unk_0x10FAB35428CCC9D7() && unk_0xDE350F8651E4346C(unk_0x7A5487FE9FAA6B48(), unk_0x017008CCDAD48503(iLocal_67, 20)))) || (unk_0x10FAB35428CCC9D7() && unk_0xF5BC95857BD6D512(unk_0x7A5487FE9FAA6B48(), iLocal_67)))
						{
						}
						else
						{
							func_68(iLocal_54, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, (unk_0x9CD27B0045628463() - iLocal_66), 64);
						StringConCat(&cVar2, "ms", 64);
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (!iLocal_62 && !iLocal_63)
			{
				if ((!unk_0x10FAB35428CCC9D7() && (unk_0x9CD27B0045628463() - iLocal_68) > 1000) || (unk_0x10FAB35428CCC9D7() && unk_0xDE350F8651E4346C(unk_0x7A5487FE9FAA6B48(), unk_0x017008CCDAD48503(iLocal_69, 1000))))
				{
					if (unk_0x886E37EC497200B6(iVar1))
					{
						if (!iLocal_62)
						{
							iLocal_64 = unk_0x9CD27B0045628463();
							if (unk_0x10FAB35428CCC9D7())
							{
								iLocal_65 = unk_0x7A5487FE9FAA6B48();
							}
							iLocal_62 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_62 || iLocal_63)
		{
			bVar0 = true;
		}
	}
	else if (iLocal_62 || iLocal_63)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_68 = unk_0x9CD27B0045628463();
		if (unk_0x10FAB35428CCC9D7())
		{
			iLocal_69 = unk_0x7A5487FE9FAA6B48();
		}
		iLocal_62 = 0;
		iLocal_63 = 0;
	}
}

bool func_72(int iParam0)
{
	return (Global_96258 && iParam0) != 0;
}

int func_73()
{
	func_74();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_74()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_76(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_75(unk_0xD80958FC74E988A6());
			if (func_61(iVar0) && (!func_45(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_61(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

int func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_76(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_76(int iParam0)
{
	if (func_61(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_77()
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_57)
	{
		if (iLocal_58 != iLocal_54)
		{
			iLocal_57 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_58)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 3:
				iVar1 = func_80(unk_0x4F8644AF03D0E0D6());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = unk_0xDB4EACD4AD0A5D6B(iVar1);
				}
				break;
		}
		unk_0x202709F4C58A0424("PS_UPDATE");
		unk_0x03B504CF259931BC(iLocal_61);
		unk_0x2B7E9A4EAAA93C89(func_79(iLocal_59), func_78(iLocal_59), iLocal_60, (iLocal_61 - iLocal_60), false, sVar0, sVar0);
		iLocal_78 = 1;
		iLocal_79 = unk_0x9CD27B0045628463() + 5000;
		if (unk_0x10FAB35428CCC9D7())
		{
			iLocal_80 = unk_0x017008CCDAD48503(unk_0x7A5487FE9FAA6B48(), 5000);
		}
		iLocal_57 = 0;
	}
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 24;
			break;
		
		case 2:
			return 25;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 17;
			break;
		
		case 7:
			return 28;
			break;
	}
	return -1;
}

char* func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB";
			break;
		
		case 1:
			return "PSF_STAMINA";
			break;
		
		case 3:
			return "PSF_LUNG";
			break;
		
		case 2:
			return "PSF_STRENGTH";
			break;
		
		case 4:
			return "PSF_DRIVING";
			break;
		
		case 5:
			return "PSF_FLYING";
			break;
		
		case 6:
			return "PSF_SHOOTING";
			break;
		
		case 7:
			return "PSF_STEALTH";
			break;
	}
	return "ERROR";
}

int func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (iVar0 == -1)
	{
		func_81(iParam0, 1);
		return 0;
	}
	Global_1334625[iVar0 /*5*/].f_4 = 1;
	return Global_1334625[iVar0 /*5*/].f_2;
}

void func_81(int iParam0, bool bParam1)
{
	if (!func_17(iParam0, 0, 1))
	{
		return;
	}
	if (func_83(iParam0) != -1)
	{
		return;
	}
	if (Global_1334788)
	{
		if (iParam0 == Global_1334788.f_1)
		{
			return;
		}
	}
	if (func_82(iParam0))
	{
		return;
	}
	if (Global_1334826 >= 32)
	{
		return;
	}
	Global_1334793[Global_1334826] = iParam0;
	Global_1334826++;
	if (bParam1)
	{
	}
}

int func_82(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1334826)
	{
		if (Global_1334793[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_83(int iParam0)
{
	int iVar0;
	
	if (!func_17(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1334786 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1334786)
	{
		if (Global_1334625[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA0A9668F158129A2(Global_1334625[iVar0 /*5*/].f_2) && unk_0x7085228842B13A67(Global_1334625[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_84(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_84(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1334786)
	{
		return;
	}
	if (unk_0xA0A9668F158129A2(Global_1334625[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1334625[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xDB4EACD4AD0A5D6B(Global_1334625[iParam0 /*5*/].f_2), 64);
			unk_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x96B1361D9B24C2FF(Global_1334625[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1334786)
	{
		Global_1334625[iVar32 /*5*/] = { Global_1334625[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_85(&(Global_1334625[iVar32 /*5*/]));
	Global_1334786 = (Global_1334786 - 1);
}

void func_85(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_86();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x10FAB35428CCC9D7())
	{
		uParam0->f_3 = unk_0x7A5487FE9FAA6B48();
	}
}

int func_86()
{
	return -1;
}

void func_87()
{
	float fVar0;
	int iVar1;
	
	if (unk_0xCBAD6729F7B1F4FC() != 1)
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (!func_91(unk_0x4F8644AF03D0E0D6()))
		{
			return;
		}
		if (func_90() != 0)
		{
			return;
		}
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (func_90() == 0)
		{
			iLocal_49 = 2;
		}
	}
	else
	{
		iLocal_49 = 0;
	}
	if (!func_89())
	{
		func_88();
	}
	iLocal_51 = 0;
	iLocal_52 = 0;
	if (unk_0x10FAB35428CCC9D7())
	{
		iLocal_53 = unk_0x7A5487FE9FAA6B48();
	}
	iLocal_68 = unk_0x9CD27B0045628463();
	if (unk_0x10FAB35428CCC9D7())
	{
		iLocal_69 = unk_0x7A5487FE9FAA6B48();
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		if (!unk_0xA921AA820C25702F(Global_2097152[func_69() /*8053*/].f_5756.f_651, 2))
		{
			fVar0 = (unk_0xBBDA792448DB5A89(func_58(178, -1, 0)) / 20f);
			iVar1 = unk_0xF34EE736CF047844(fVar0);
			iVar1 = func_57(iVar1, 0, 100);
			func_68(3, 2, iVar1);
			unk_0x933D6A9EEC1BACD0(&(Global_2097152[func_69() /*8053*/].f_5756.f_651), 2);
		}
	}
	bLocal_55 = true;
	iLocal_50 = 1;
}

void func_88()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_59(3, iVar0, &uVar1, &iVar2);
				func_46(iVar2, func_44(3, iVar0, -1), -1, 1);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_87471 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					func_59(iVar3, iVar4, &iVar5, &uVar6);
					unk_0xB3271D7AB655B441(iVar5, func_44(iVar3, iVar4, -1), true);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_97173.f_1729.f_539.f_1615[0] = func_44(0, 0, -1);
		Global_97173.f_1729.f_539.f_1615[1] = func_44(1, 0, -1);
		Global_97173.f_1729.f_539.f_1615[2] = func_44(2, 0, -1);
		Global_97173.f_1729.f_539.f_1582 = 1;
		Global_87471 = 1;
	}
}

int func_89()
{
	if (unk_0x10FAB35428CCC9D7())
	{
		return 1;
	}
	return Global_97173.f_1729.f_539.f_1582;
}

int func_90()
{
	return Global_24444;
}

int func_91(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xA921AA820C25702F(Global_2421967.f_1, iParam0);
	}
	return 1;
}

void func_92()
{
	if (iLocal_50 != 0 && iLocal_49 != 3)
	{
		if (iLocal_49 == 0)
		{
			if (unk_0x10FAB35428CCC9D7())
			{
				iLocal_49 = 3;
			}
			if (!func_89())
			{
				iLocal_49 = 3;
			}
		}
		else if (iLocal_49 == 2)
		{
			if ((!unk_0x10FAB35428CCC9D7() || !func_91(unk_0x4F8644AF03D0E0D6())) || func_90() != 0)
			{
				iLocal_49 = 3;
			}
		}
		if (iLocal_49 == 3)
		{
			iLocal_50 = 2;
		}
	}
}

