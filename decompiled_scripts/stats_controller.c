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
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_50 = 3;
	unk_0x330AFE43E1483B3F();
	if (unk_0xBCA819F9975BEDFA(32))
	{
		unk_0x921053BAF754303D();
	}
	while (true)
	{
		func_100();
		switch (iLocal_51)
		{
			case 0:
				func_95();
				break;
			
			case 1:
				func_86();
				func_2();
				Global_89108 = 0;
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
	iLocal_51 = 0;
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
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	
	if (iLocal_57)
	{
		iLocal_57 = 0;
	}
	else
	{
		iLocal_52++;
	}
	bLocal_56 = false;
	if (unk_0x63C468D583002D23())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_82();
	}
	if (iVar0 != iLocal_55)
	{
		iLocal_55 = iVar0;
		bLocal_56 = true;
		iLocal_63 = 0;
		iLocal_64 = 0;
		iLocal_71 = 0;
		iLocal_77 = 0;
	}
	if (iLocal_55 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_52 == 6 && func_81(64)) || (iLocal_52 == 5 && unk_0x82F1A060D8F4583B(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_57 = 1;
	}
	func_75();
	if (Global_89106 || (Global_89107 && !func_72(0)))
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_71(iLocal_55, iVar2);
				iVar2++;
			}
			Global_89106 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) || (!unk_0x63C468D583002D23() && !func_70(iLocal_55))) || unk_0xE9E6B5364105A000()) || func_69()) || unk_0x1B76B77EDF24A933()) || unk_0x25BD4C26D84038CD()) || !unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) || Global_69700) || Global_89108) || iLocal_58)
		{
			iLocal_79 = 1;
			iLocal_80 = unk_0x94E3E074F38DF86C();
			if (unk_0x63C468D583002D23())
			{
				uLocal_81 = unk_0xCB150A8B81012128();
			}
			return;
		}
		if (iLocal_79)
		{
			if ((!unk_0x63C468D583002D23() && (unk_0x94E3E074F38DF86C() - iLocal_80) > 3000) || (unk_0x63C468D583002D23() && unk_0xC9DDE872F3412A54(unk_0xCB150A8B81012128(), unk_0xD9D7B8709F0A4696(uLocal_81, 3000))))
			{
				iLocal_79 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!unk_0x63C468D583002D23() && (unk_0x94E3E074F38DF86C() - iLocal_53) > 2000) || (unk_0x63C468D583002D23() && unk_0xC9DDE872F3412A54(unk_0xCB150A8B81012128(), unk_0xD9D7B8709F0A4696(uLocal_54, 2000)))) || bLocal_56)
	{
		if (iLocal_52 >= 8)
		{
			iLocal_52 = 0;
			iLocal_53 = unk_0x94E3E074F38DF86C();
			if (unk_0x63C468D583002D23())
			{
				uLocal_54 = unk_0xCB150A8B81012128();
			}
		}
		iVar11 = 1;
		if (bLocal_56)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_56)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_52;
			}
			func_68(iLocal_55, iVar8, &iVar6, &iVar7);
			if (unk_0x63C468D583002D23())
			{
				iVar3 = func_67(iVar7, -1, 0);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_101700.f_2095.f_539.f_1615[iLocal_55];
			}
			else
			{
				unk_0x7FE4F330D3D74809(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_66(iVar3, 0, 100);
			if (func_53(iLocal_55, iVar8, iVar3, &iVar4))
			{
				if (unk_0x63C468D583002D23())
				{
					func_52(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					if (Global_101700.f_2095.f_539.f_1615[iLocal_55] == 0)
					{
						bVar13 = false;
					}
					Global_101700.f_2095.f_539.f_1615[iLocal_55] = iVar4;
				}
				else
				{
					unk_0x731753D8494ABECD(iVar6, iVar4, 1);
				}
				if (iVar4 > func_50(iLocal_55, iVar8, -1))
				{
					if (unk_0x63C468D583002D23())
					{
					}
					else if ((!Global_101700.f_8044 && !func_49(0)) || !unk_0x48B8265059381CD0(Global_101700.f_8044.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = (iVar14 - (iVar14 % func_48(iLocal_55, iVar8)));
					if ((iVar14 % func_48(iLocal_55, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + func_48(iLocal_55, iVar8));
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = (iVar15 - func_48(iLocal_55, iVar8));
					}
					if (iVar4 > iVar14)
					{
						bVar13 = false;
					}
					if (func_42())
					{
						bVar13 = false;
					}
					if (bVar13)
					{
						if (!bLocal_56)
						{
							if (unk_0x63C468D583002D23())
							{
								if (func_41(117, -1) == 0)
								{
									if (!unk_0x9E123D5FF2973C60() && func_9())
									{
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_58 = 1;
							iLocal_61 = (iVar4 - iVar3);
							iLocal_61 = (iLocal_61 + (iVar3 % func_48(iLocal_55, iVar8)));
							iLocal_62 = iVar4;
							iLocal_59 = iLocal_55;
							iLocal_60 = iVar8;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_55, iVar8, &iVar9))
						{
							if (iLocal_55 == 0)
							{
								unk_0x7FE4F330D3D74809(joaat("sp0_total_playing_time"), &iVar10, -1);
								unk_0x731753D8494ABECD(iVar9, iVar10, 1);
							}
							else if (iLocal_55 == 1)
							{
								unk_0x7FE4F330D3D74809(joaat("sp1_total_playing_time"), &iVar10, -1);
								unk_0x731753D8494ABECD(iVar9, iVar10, 1);
							}
							else if (iLocal_55 == 2)
							{
								unk_0x7FE4F330D3D74809(joaat("sp2_total_playing_time"), &iVar10, -1);
								unk_0x731753D8494ABECD(iVar9, iVar10, 1);
							}
							else if (iLocal_55 == 3)
							{
							}
						}
					}
				}
				func_71(iLocal_55, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				bVar16 = true;
				if (unk_0x63C468D583002D23())
				{
					func_52(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					Global_101700.f_2095.f_539.f_1615[iLocal_55] = iVar4;
					bVar16 = false;
				}
				else
				{
					unk_0x731753D8494ABECD(iVar6, iVar4, 1);
				}
				if (bVar16)
				{
					func_71(iLocal_55, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_57 = 1;
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

void func_4(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_7())
	{
		iVar0 = Global_2522581[iParam0 /*3*/][func_5(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xCE46AC18A4A47E2D(iVar0, iParam1, iParam3);
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
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

int func_6()
{
	return Global_1312735;
}

int func_7()
{
	return 1;
	return 0;
}

void func_8(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

int func_9()
{
	if (unk_0x6F2032A889AACC62() && unk_0xF4CF563B04C79242())
	{
		return 0;
	}
	if (Global_1751174 == 1)
	{
		return 0;
	}
	if (Global_1751032 == 1)
	{
		return 0;
	}
	if (unk_0x5092B24E2147F9A9())
	{
		return 0;
	}
	if (Global_1574275 == 1)
	{
		return 0;
	}
	if (unk_0x485F411081A645B0())
	{
		return 0;
	}
	if (Global_979733)
	{
		return 0;
	}
	if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_510 == 1)
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
				if (func_35(&Global_2454822, 300000, 0) == 1)
				{
					func_34(&Global_2454820);
					func_32(3, -1);
				}
				else if (func_35(&Global_2454820, 7000, 0) == 0)
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
	if (unk_0xEE1438344034E8AA())
	{
		return 0;
	}
	if (unk_0x95DBE123BC2DB80B())
	{
		return 0;
	}
	if (unk_0x8BE30CF2E1E63744())
	{
		if (func_24(unk_0x17B5CC8A8615737D()) == joaat("weapon_sniperrifle") || func_24(unk_0x17B5CC8A8615737D()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (unk_0x25BD4C26D84038CD())
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
	if (unk_0x33243A46E91831D5(19))
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
	if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_35)
	{
		return 0;
	}
	if (Global_1574109)
	{
		return 0;
	}
	if (Global_1574113)
	{
		return 0;
	}
	if (Global_1574115)
	{
		return 0;
	}
	if (Global_2433125.f_3357.f_39)
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
	if (Global_2494199.f_3829)
	{
		return 0;
	}
	if (Global_2433125.f_3223)
	{
		return 0;
	}
	if (!func_17(unk_0xBE369BE1BC57A796(), 1, 0))
	{
		return 0;
	}
	if (func_16(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (Global_2433125.f_3357.f_39 == 1)
	{
		return 0;
	}
	if (Global_2443905.f_2842.f_25 == 1)
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
	if (unk_0x33243A46E91831D5(16))
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
	if (unk_0x7AED88F5CDBFFB3C())
	{
		if (func_10("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_493)
	{
		return 0;
	}
	return 1;
}

bool func_10(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

bool func_11()
{
	return Global_2433125.f_1385.f_688 != 0;
}

bool func_12()
{
	return Global_2433125.f_2506.f_577;
}

bool func_13()
{
	return func_14();
}

bool func_14()
{
	return Global_1346673.f_40 == 3;
}

bool func_15(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_16(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1618300[iParam0 /*35*/].f_13, 0);
}

int func_17(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCF7855B965948E97(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433125.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_18()
{
	if (unk_0x82F1A060D8F4583B(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_20()
{
	return Global_1353070.f_112;
}

bool func_21()
{
	return Global_2433125.f_2199[0 /*76*/].f_1 != 0;
}

int func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1353070.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1353070.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (unk_0x48B8265059381CD0(Global_1353070.f_1013, iParam0))
			{
				return 1;
			}
			if (unk_0x48B8265059381CD0(Global_1353070.f_1014, iParam0))
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
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0x5CD8291F2C5E0AD1(iParam0, &uVar0, 1);
	return uVar0;
}

bool func_25()
{
	return Global_2443134.f_571;
}

bool func_26()
{
	return unk_0x48B8265059381CD0(Global_970912.f_8, 13);
}

bool func_27()
{
	return Global_2443134.f_570;
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
	if (unk_0x82F1A060D8F4583B(joaat("maintransition")) > 0)
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
	Global_1363152 = 0;
	if (unk_0x8B57B9443E19F940() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x79B249530BFA775D(0, iParam1);
			iVar1 = func_33(iParam1);
			iVar0 = unk_0xBE675F7A607B46B0(iVar1);
			break;
		
		default:
			iVar1 = func_33(iParam1);
			iVar0 = unk_0xBE675F7A607B46B0(iVar1);
			if (!unk_0x48B8265059381CD0(iVar0, iParam0))
			{
				unk_0xEB79FECD9022AAF0(&iVar0, iParam0);
				unk_0x79B249530BFA775D(iVar0, iParam1);
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
			func_52(1298, 0, iParam1, 1, 0);
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
	if (unk_0x63C468D583002D23() && !bParam2)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= iParam1)
		{
			func_34(uParam0);
			return 1;
		}
	}
	else if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0)) >= iParam1)
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
		if (unk_0x63C468D583002D23() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xCB150A8B81012128();
			}
			else
			{
				*uParam0 = unk_0x8F8F2E80A7DA4D64();
			}
		}
		else
		{
			*uParam0 = unk_0x94E3E074F38DF86C();
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
	iVar1 = unk_0xBE675F7A607B46B0(iVar0);
	return unk_0x48B8265059381CD0(iVar1, iParam0);
}

int func_38()
{
	int iVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xEB79FECD9022AAF0(&iVar0, 2);
				unk_0xEB79FECD9022AAF0(&iVar0, 4);
				unk_0xEB79FECD9022AAF0(&iVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					iVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&iVar0, 0);
					unk_0x0D1285E5ED89254D(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2)
	{
		return 1;
	}
	else if (Global_139179 == 3)
	{
		return 0;
	}
	if (unk_0x8B57B9443E19F940())
	{
		if (unk_0x48B8265059381CD0(unk_0xBE675F7A607B46B0(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_39()
{
	return Global_1315233;
}

bool func_40()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_188 != 0;
}

int func_41(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522581[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x70BD7CFD9F825957(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_42()
{
	if (!func_46(1))
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	return Global_1763170;
}

bool func_43()
{
	return func_44(unk_0xBE369BE1BC57A796());
}

int func_44(int iParam0)
{
	if (iParam0 != func_45())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_45())
		{
			return Global_1619421[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_45()
{
	return -1;
}

bool func_46(bool bParam0)
{
	return func_47(unk_0xBE369BE1BC57A796(), bParam0);
}

bool func_47(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_44(iParam0))
		{
			return 0;
		}
	}
	return Global_1619421[iParam0 /*390*/].f_11 != func_45();
}

int func_48(int iParam0, int iParam1)
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

bool func_49(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

int func_50(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x63C468D583002D23())
	{
		if (func_51(14))
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
					return func_67(1219, iParam2, 0);
					break;
				
				case 3:
					return func_67(1225, iParam2, 0);
					break;
				
				case 2:
					return func_67(1221, iParam2, 0);
					break;
				
				case 4:
					return func_67(1224, iParam2, 0);
					break;
				
				case 5:
					return func_67(1223, iParam2, 0);
					break;
				
				case 6:
					return func_67(1220, iParam2, 0);
					break;
				
				case 7:
					return func_67(1222, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

bool func_51(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_52(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
}

int func_53(int iParam0, int iParam1, int iParam2, var uParam3)
{
	*uParam3 = func_54(iParam0, iParam1, 0, -1);
	if (*uParam3 > iParam2)
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0, int iParam1, bool bParam2, int iParam3)
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
				unk_0x7FE4F330D3D74809(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 1)
			{
				unk_0x7FE4F330D3D74809(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 2)
			{
				unk_0x7FE4F330D3D74809(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = unk_0xBBDA792448DB5A89(func_67(64, iParam3, 0));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				unk_0x5BA3D9E4E73996B2(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_101700.f_2095.f_539.f_1583[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				unk_0x5BA3D9E4E73996B2(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_101700.f_2095.f_539.f_1583[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				unk_0x5BA3D9E4E73996B2(joaat("sp2_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_101700.f_2095.f_539.f_1583[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_65(20, iParam3) / 175f);
				func_62(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_61(joaat("sp0_time_swimming"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_61(joaat("sp1_time_swimming"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_61(joaat("sp2_time_swimming"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_61(func_60(50, iParam3))));
				func_62(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_61(joaat("sp0_time_driving_bicycle"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_61(joaat("sp1_time_driving_bicycle"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_61(joaat("sp2_time_driving_bicycle"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(func_61(func_60(47, iParam3))));
				func_62(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0.25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_59(joaat("sp0_time_underwater"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_59(joaat("sp1_time_underwater"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_59(joaat("sp2_time_underwater"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_59(func_60(52, iParam3))) / 30f);
				func_62(&fVar0);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				unk_0x7FE4F330D3D74809(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_101700.f_2095.f_539.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				unk_0x7FE4F330D3D74809(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_101700.f_2095.f_539.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				unk_0x7FE4F330D3D74809(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_101700.f_2095.f_539.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_67(1494, iParam3, 0)) / 20f);
				func_62(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				unk_0x7FE4F330D3D74809(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_101700.f_2095.f_539.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				unk_0x7FE4F330D3D74809(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_101700.f_2095.f_539.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				unk_0x7FE4F330D3D74809(joaat("sp2_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_101700.f_2095.f_539.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_67(107, iParam3, 0) / 50)));
				func_62(&fVar0);
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_61(joaat("sp0_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_61(joaat("sp1_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_61(joaat("sp2_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_61(func_60(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(func_61(joaat("sp0_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(func_61(joaat("sp1_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(func_61(joaat("sp2_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(func_61(func_60(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				unk_0x7FE4F330D3D74809(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 1)
			{
				unk_0x7FE4F330D3D74809(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 2)
			{
				unk_0x7FE4F330D3D74809(joaat("sp2_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_67(61, iParam3, 0)));
				func_62(&fVar0);
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_58(iParam0, 0);
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
				iVar4 = func_58(iParam0, 1);
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
				iVar4 = func_58(iParam0, 2);
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
				iVar4 = func_58(iParam0, 3);
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
				iVar4 = func_58(iParam0, 6);
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
				iVar4 = func_58(iParam0, 4);
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
				iVar4 = func_58(iParam0, 5);
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
				iVar4 = func_58(iParam0, 7);
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
				iVar4 = func_58(iParam0, 8);
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
				iVar4 = func_58(iParam0, 11);
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
				unk_0x5BA3D9E4E73996B2(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_101700.f_2095.f_539.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				unk_0x5BA3D9E4E73996B2(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_101700.f_2095.f_539.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				unk_0x5BA3D9E4E73996B2(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_101700.f_2095.f_539.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_65(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				unk_0x7FE4F330D3D74809(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_101700.f_2095.f_539.f_1599[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				unk_0x7FE4F330D3D74809(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_101700.f_2095.f_539.f_1599[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				unk_0x7FE4F330D3D74809(joaat("sp2_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_101700.f_2095.f_539.f_1599[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_67(34, iParam3, 0);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89(iVar3) / 2f) * 1.5f));
				func_62(&fVar0);
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				unk_0x7FE4F330D3D74809(joaat("sp0_hits_mission"), &iVar5, -1);
				unk_0x7FE4F330D3D74809(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_101700.f_2095.f_539.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_101700.f_2095.f_539.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				unk_0x7FE4F330D3D74809(joaat("sp1_hits_mission"), &iVar5, -1);
				unk_0x7FE4F330D3D74809(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_101700.f_2095.f_539.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_101700.f_2095.f_539.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				unk_0x7FE4F330D3D74809(joaat("sp2_hits_mission"), &iVar5, -1);
				unk_0x7FE4F330D3D74809(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_101700.f_2095.f_539.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_101700.f_2095.f_539.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_67(166, iParam3, 0);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_57(iVar7, iParam0))
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
				fVar0 = (fVar0 + IntToFloat(func_56(joaat("mpply_shootingrange_wins")) * 1));
				func_62(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = func_50(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_55(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_48(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_48(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_48(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_48(iParam0, iParam1)));
		}
	}
	iVar2 = unk_0xF34EE736CF047844(fVar0);
	iVar2 = func_66(iVar2, 0, 100);
	return iVar2;
}

int func_55(int iParam0, int iParam1, int iParam2)
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
					return Global_101700.f_2095.f_539.f_1475[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_67(72, iParam2, 0);
					break;
				
				case 3:
					return func_67(74, iParam2, 0);
					break;
				
				case 2:
					return func_67(73, iParam2, 0);
					break;
				
				case 4:
					return func_67(75, iParam2, 0);
					break;
				
				case 5:
					return func_67(76, iParam2, 0);
					break;
				
				case 6:
					return func_67(77, iParam2, 0);
					break;
				
				case 7:
					return func_67(78, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_56(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x7FE4F330D3D74809(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_57(int iParam0, int iParam1)
{
	return Global_101700.f_18106[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_101700.f_1720[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (unk_0xE268096685DAFC46(iParam0) * 86400));
	iVar0 = (iVar0 + unk_0x4F02606E4347FF12(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0xF5E4A06714D654FF(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x45FD927635B67E9D(iParam0));
	return iVar0;
}

int func_60(int iParam0, int iParam1)
{
	return Global_2503826[iParam0 /*3*/][func_5(iParam1)];
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + unk_0xE268096685DAFC46(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0x4F02606E4347FF12(iParam0) * 60);
	iVar0 = (iVar0 + unk_0xF5E4A06714D654FF(iParam0));
	return iVar0;
}

var func_62(float fParam0)
{
	if (func_42())
	{
		if (func_63() < Global_262145.f_11315)
		{
			if (*fParam0 + (IntToFloat(func_63()) * Global_262145.f_11314)) <= IntToFloat(Global_262145.f_11324)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_63()) * Global_262145.f_11314));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_63()
{
	if (func_46(1))
	{
		return Global_1591201[func_64() /*602*/].f_203.f_6;
	}
	return 0;
}

int func_64()
{
	return Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11;
}

float func_65(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2521893[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x5BA3D9E4E73996B2(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_66(int iParam0, int iParam1, int iParam2)
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

int func_67(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503826[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_68(int iParam0, int iParam1, var uParam2, var uParam3)
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

int func_69()
{
	if (!unk_0x63C468D583002D23())
	{
		return Global_89302.f_44 == 1;
	}
	return 0;
}

bool func_70(int iParam0)
{
	return iParam0 < 3;
}

void func_71(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_68(iParam0, iParam1, &uVar2, &iVar3);
	if (unk_0x63C468D583002D23())
	{
		iVar0 = func_67(iVar3, -1, 0);
	}
	else
	{
		unk_0x7FE4F330D3D74809(uVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (unk_0xBBDA792448DB5A89(iVar0) / 100f)));
			unk_0x86B7738264429568(unk_0xBE369BE1BC57A796(), fVar1, 1);
			break;
		
		case 7:
			if (unk_0x82F1A060D8F4583B(joaat("armenian3")) != 0 || unk_0x82F1A060D8F4583B(joaat("trevor3")) != 0)
			{
				Global_89107 = 1;
			}
			else
			{
				fVar1 = (1f - (unk_0xBBDA792448DB5A89(iVar0) / 100f));
				unk_0x07B06D1DF7FB9392(unk_0xBE369BE1BC57A796(), fVar1);
				unk_0xB03DD283D080159E(unk_0xBE369BE1BC57A796(), fVar1);
				unk_0x50172E6C8E98A56F(unk_0xBE369BE1BC57A796(), fVar1);
			}
			break;
	}
}

int func_72(int iParam0)
{
	if (Global_35781 == 15)
	{
		return 0;
	}
	if (func_73(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_73(int iParam0)
{
	return func_74(iParam0, Global_35781);
}

int func_74(int iParam0, int iParam1)
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

void func_75()
{
	func_80();
	func_79();
	func_76();
}

void func_76()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_77)
	{
		if (iLocal_55 == 3)
		{
			if (Global_2097152[func_78() /*10758*/].f_7546.f_7)
			{
				iLocal_74 = func_59(func_60(142, -1));
				Global_2097152[func_78() /*10758*/].f_7546.f_7 = 0;
			}
			else
			{
				iLocal_74 = Global_2097152[func_78() /*10758*/].f_7546.f_6;
			}
			if (Global_2097152[func_78() /*10758*/].f_7546.f_4 == 0)
			{
				Global_2097152[func_78() /*10758*/].f_7546.f_4 = unk_0x57E9911EC23E2C54();
			}
			iLocal_76 = Global_2097152[func_78() /*10758*/].f_7546.f_4;
			iLocal_75 = Global_2097152[func_78() /*10758*/].f_7546.f_5;
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_1520[iLocal_55])
			{
				switch (iLocal_55)
				{
					case 0:
						iLocal_74 = func_59(joaat("sp0_total_wheelie_time"));
						break;
					
					case 1:
						iLocal_74 = func_59(joaat("sp1_total_wheelie_time"));
						break;
					
					case 2:
						iLocal_74 = func_59(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_101700.f_2095.f_539.f_1520[iLocal_55] = 0;
			}
			else
			{
				iLocal_74 = Global_101700.f_2095.f_539.f_1516[iLocal_55];
			}
			if (Global_101700.f_2095.f_539.f_1508[iLocal_55] == 0)
			{
				Global_101700.f_2095.f_539.f_1508[iLocal_55] = unk_0x57E9911EC23E2C54();
			}
			iLocal_76 = Global_101700.f_2095.f_539.f_1508[iLocal_55];
			iLocal_75 = Global_101700.f_2095.f_539.f_1512[iLocal_55];
		}
		iLocal_77 = 1;
		iLocal_78 = 1;
	}
	else if ((unk_0x57E9911EC23E2C54() - iLocal_76) > 86400)
	{
		iLocal_77 = 0;
		iLocal_78 = 0;
		iLocal_76 = unk_0x57E9911EC23E2C54();
		iLocal_75 = 0;
		if (iLocal_55 == 3)
		{
			Global_2097152[func_78() /*10758*/].f_7546.f_7 = 1;
		}
		else
		{
			Global_101700.f_2095.f_539.f_1520[iLocal_55] = 1;
		}
	}
	if (iLocal_78)
	{
		switch (iLocal_55)
		{
			case 0:
				iVar0 = func_59(joaat("sp0_total_wheelie_time"));
				break;
			
			case 1:
				iVar0 = func_59(joaat("sp1_total_wheelie_time"));
				break;
			
			case 2:
				iVar0 = func_59(joaat("sp2_total_wheelie_time"));
				break;
			
			case 3:
				iVar0 = func_59(func_60(142, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_74);
		iVar2 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) / 15f)) - iLocal_75);
		if (iVar2 > 0)
		{
			func_77(iLocal_55, 4, iVar2);
			iLocal_75 = (iLocal_75 + iVar2);
		}
		if (iVar0 > (iLocal_74 + (unk_0x1C4276E44E12611D() / 1000) * 60))
		{
			iLocal_78 = 0;
		}
	}
	if (iLocal_55 == 3)
	{
		Global_2097152[func_78() /*10758*/].f_7546.f_4 = iLocal_76;
		Global_2097152[func_78() /*10758*/].f_7546.f_5 = iLocal_75;
	}
	else
	{
		Global_101700.f_2095.f_539.f_1508[iLocal_55] = iLocal_76;
		Global_101700.f_2095.f_539.f_1512[iLocal_55] = iLocal_75;
	}
}

void func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_101700.f_2095.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_101700.f_2095.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 6022;
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
			if (iVar1 != 6022)
			{
				iVar0 = func_67(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_52(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_79()
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (iLocal_71)
	{
		bVar0 = true;
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			uVar1 = unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D());
			if ((((unk_0x23E9113C762466ED(uVar1) && unk_0x45CD66F0A131E554(uVar1, 0)) && !unk_0x14E01C4EC4170496(uVar1)) && unk_0x17206B315923243C(uVar1, -1, 0) == unk_0x17B5CC8A8615737D()) && (unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(uVar1)) || unk_0xC2AFD5CFEDC8F22A(unk_0x0324EEB10F81965F(uVar1))))
			{
				bVar0 = false;
				if (unk_0x13B7ACE69D27E3E4(uVar1) >= 53f)
				{
					func_77(iLocal_55, 4, 2);
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			iLocal_71 = 0;
			iLocal_72 = unk_0x94E3E074F38DF86C();
			if (unk_0x63C468D583002D23())
			{
				uLocal_73 = unk_0xCB150A8B81012128();
			}
		}
	}
	else if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		uVar2 = unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D());
		if (((unk_0x23E9113C762466ED(uVar2) && unk_0x45CD66F0A131E554(uVar2, 0)) && unk_0x13B7ACE69D27E3E4(uVar2) < 20f) && !unk_0x14E01C4EC4170496(uVar2))
		{
			if ((!unk_0x63C468D583002D23() && (unk_0x94E3E074F38DF86C() - iLocal_72) > 10000) || (unk_0x63C468D583002D23() && unk_0xC9DDE872F3412A54(unk_0xCB150A8B81012128(), unk_0xD9D7B8709F0A4696(uLocal_73, 10000))))
			{
				iLocal_71 = 1;
			}
		}
	}
}

void func_80()
{
	bool bVar0;
	var uVar1;
	char cVar2[64];
	
	bVar0 = false;
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		uVar1 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (((unk_0x23E9113C762466ED(uVar1) && unk_0x45CD66F0A131E554(uVar1, 0)) && unk_0x17206B315923243C(uVar1, -1, 0) == unk_0x17B5CC8A8615737D()) && (((unk_0xC2AFD5CFEDC8F22A(unk_0x0324EEB10F81965F(uVar1)) || unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(uVar1))) || unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(uVar1))) || unk_0xBA3A0947FBDD9ADD(unk_0x0324EEB10F81965F(uVar1))))
		{
			if (iLocal_63)
			{
				if (!unk_0x14E01C4EC4170496(uVar1))
				{
					if ((!unk_0x63C468D583002D23() && (unk_0x94E3E074F38DF86C() - iLocal_65) > 1500) || (unk_0x63C468D583002D23() && unk_0xC9DDE872F3412A54(unk_0xCB150A8B81012128(), unk_0xD9D7B8709F0A4696(uLocal_66, 1500))))
					{
						iLocal_67 = unk_0x94E3E074F38DF86C();
						if (unk_0x63C468D583002D23())
						{
							uLocal_68 = unk_0xCB150A8B81012128();
						}
						iLocal_64 = 1;
					}
					iLocal_63 = 0;
				}
			}
			if (iLocal_64)
			{
				if (!unk_0x14E01C4EC4170496(uVar1))
				{
					if (unk_0x4950AAD2A16D6B22(uVar1))
					{
						if ((((!unk_0x63C468D583002D23() && (unk_0x94E3E074F38DF86C() - iLocal_67) > 20) || (!unk_0x63C468D583002D23() && (unk_0x94E3E074F38DF86C() - iLocal_67) == 0)) || (unk_0x63C468D583002D23() && unk_0xC9DDE872F3412A54(unk_0xCB150A8B81012128(), unk_0xD9D7B8709F0A4696(uLocal_68, 20)))) || (unk_0x63C468D583002D23() && unk_0xE3E22121ECA881AB(unk_0xCB150A8B81012128(), uLocal_68)))
						{
						}
						else
						{
							func_77(iLocal_55, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, (unk_0x94E3E074F38DF86C() - iLocal_67), 64);
						StringConCat(&cVar2, "ms", 64);
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (!iLocal_63 && !iLocal_64)
			{
				if ((!unk_0x63C468D583002D23() && (unk_0x94E3E074F38DF86C() - iLocal_69) > 1000) || (unk_0x63C468D583002D23() && unk_0xC9DDE872F3412A54(unk_0xCB150A8B81012128(), unk_0xD9D7B8709F0A4696(uLocal_70, 1000))))
				{
					if (unk_0x14E01C4EC4170496(uVar1))
					{
						if (!iLocal_63)
						{
							iLocal_65 = unk_0x94E3E074F38DF86C();
							if (unk_0x63C468D583002D23())
							{
								uLocal_66 = unk_0xCB150A8B81012128();
							}
							iLocal_63 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_63 || iLocal_64)
		{
			bVar0 = true;
		}
	}
	else if (iLocal_63 || iLocal_64)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_69 = unk_0x94E3E074F38DF86C();
		if (unk_0x63C468D583002D23())
		{
			uLocal_70 = unk_0xCB150A8B81012128();
		}
		iLocal_63 = 0;
		iLocal_64 = 0;
	}
}

bool func_81(int iParam0)
{
	return (Global_100785 && iParam0) != 0;
}

int func_82()
{
	func_83();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_83()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_85(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_84(unk_0x17B5CC8A8615737D());
			if (func_70(iVar0) && (!func_51(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_70(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_85(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_85(int iParam0)
{
	if (func_70(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_86()
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_58)
	{
		if (iLocal_59 != iLocal_55)
		{
			iLocal_58 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_59)
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
				iVar1 = func_89(unk_0xBE369BE1BC57A796());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = unk_0x7F897CE1A139406E(iVar1);
				}
				break;
		}
		unk_0xBD18006F0815A298("PS_UPDATE");
		unk_0x69967F83C1E636E2(iLocal_62);
		unk_0xBD1025142299A003(func_88(iLocal_60), func_87(iLocal_60), iLocal_61, (iLocal_62 - iLocal_61), 0, sVar0, sVar0);
		iLocal_79 = 1;
		iLocal_80 = unk_0x94E3E074F38DF86C() + 5000;
		if (unk_0x63C468D583002D23())
		{
			uLocal_81 = unk_0xD9D7B8709F0A4696(unk_0xCB150A8B81012128(), 5000);
		}
		iLocal_58 = 0;
	}
}

int func_87(int iParam0)
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

char* func_88(int iParam0)
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

int func_89(int iParam0)
{
	int iVar0;
	
	iVar0 = func_92(iParam0);
	if (iVar0 == -1)
	{
		func_90(iParam0, 1);
		return 0;
	}
	Global_1364072[iVar0 /*5*/].f_4 = 1;
	return Global_1364072[iVar0 /*5*/].f_2;
}

void func_90(int iParam0, bool bParam1)
{
	if (!func_17(iParam0, 0, 1))
	{
		return;
	}
	if (func_92(iParam0) != -1)
	{
		return;
	}
	if (Global_1364235)
	{
		if (iParam0 == Global_1364235.f_1)
		{
			return;
		}
	}
	if (func_91(iParam0))
	{
		return;
	}
	if (Global_1364273 >= 32)
	{
		return;
	}
	Global_1364240[Global_1364273] = iParam0;
	Global_1364273++;
	if (bParam1)
	{
	}
}

int func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1364273)
	{
		if (Global_1364240[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_92(int iParam0)
{
	int iVar0;
	
	if (!func_17(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1364233 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1364233)
	{
		if (Global_1364072[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x570F715345905581(Global_1364072[iVar0 /*5*/].f_2) && unk_0x97CCE7AE66FA8CB9(Global_1364072[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_93(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_93(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1364233)
	{
		return;
	}
	if (unk_0x570F715345905581(Global_1364072[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1364072[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x7F897CE1A139406E(Global_1364072[iParam0 /*5*/].f_2), 64);
			unk_0xA15206CC127327EA(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x3DD64AC41265D51A(Global_1364072[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1364233)
	{
		Global_1364072[iVar32 /*5*/] = { Global_1364072[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_94(&(Global_1364072[iVar32 /*5*/]));
	Global_1364233 = (Global_1364233 - 1);
}

void func_94(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_45();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x63C468D583002D23())
	{
		uParam0->f_3 = unk_0xCB150A8B81012128();
	}
}

void func_95()
{
	float fVar0;
	int iVar1;
	
	if (unk_0x9D5221217E100BDE() != 1)
	{
		return;
	}
	if (unk_0x63C468D583002D23())
	{
		if (!func_99(unk_0xBE369BE1BC57A796()))
		{
			return;
		}
		if (func_98() != 0)
		{
			return;
		}
	}
	if (unk_0x63C468D583002D23())
	{
		if (func_98() == 0)
		{
			iLocal_50 = 2;
		}
	}
	else
	{
		iLocal_50 = 0;
	}
	if (!func_97())
	{
		func_96();
	}
	iLocal_52 = 0;
	iLocal_53 = 0;
	if (unk_0x63C468D583002D23())
	{
		uLocal_54 = unk_0xCB150A8B81012128();
	}
	iLocal_69 = unk_0x94E3E074F38DF86C();
	if (unk_0x63C468D583002D23())
	{
		uLocal_70 = unk_0xCB150A8B81012128();
	}
	if (unk_0x63C468D583002D23())
	{
		if (!unk_0x48B8265059381CD0(Global_2097152[func_78() /*10758*/].f_7546.f_1016, 2))
		{
			fVar0 = (unk_0xBBDA792448DB5A89(func_67(187, -1, 0)) / 20f);
			iVar1 = unk_0xF34EE736CF047844(fVar0);
			iVar1 = func_66(iVar1, 0, 100);
			func_77(3, 2, iVar1);
			unk_0xEB79FECD9022AAF0(&(Global_2097152[func_78() /*10758*/].f_7546.f_1016), 2);
		}
	}
	bLocal_56 = true;
	iLocal_51 = 1;
}

void func_96()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (unk_0x63C468D583002D23())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_68(3, iVar0, &uVar1, &iVar2);
				func_52(iVar2, func_50(3, iVar0, -1), -1, 1, 0);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_89106 = 1;
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
					func_68(iVar3, iVar4, &iVar5, &uVar6);
					unk_0x731753D8494ABECD(iVar5, func_50(iVar3, iVar4, -1), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_101700.f_2095.f_539.f_1615[0] = func_50(0, 0, -1);
		Global_101700.f_2095.f_539.f_1615[1] = func_50(1, 0, -1);
		Global_101700.f_2095.f_539.f_1615[2] = func_50(2, 0, -1);
		Global_101700.f_2095.f_539.f_1582 = 1;
		Global_89106 = 1;
	}
}

int func_97()
{
	if (unk_0x63C468D583002D23())
	{
		return 1;
	}
	return Global_101700.f_2095.f_539.f_1582;
}

int func_98()
{
	return Global_25190;
}

int func_99(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x48B8265059381CD0(Global_2433125.f_1, iParam0);
	}
	return 1;
}

void func_100()
{
	if (iLocal_51 != 0 && iLocal_50 != 3)
	{
		if (iLocal_50 == 0)
		{
			if (unk_0x63C468D583002D23())
			{
				iLocal_50 = 3;
			}
			if (!func_97())
			{
				iLocal_50 = 3;
			}
		}
		else if (iLocal_50 == 2)
		{
			if ((!unk_0x63C468D583002D23() || !func_99(unk_0xBE369BE1BC57A796())) || func_98() != 0)
			{
				iLocal_50 = 3;
			}
		}
		if (iLocal_50 == 3)
		{
			iLocal_51 = 2;
		}
	}
}

