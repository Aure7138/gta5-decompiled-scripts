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
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
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
	iLocal_53 = 3;
	unk_0xEE998050210A7287();
	if (unk_0x76BF814AB8D4CAB8(32))
	{
		unk_0x810C5D6462DD69E6();
	}
	while (true)
	{
		func_100();
		switch (iLocal_54)
		{
			case 0:
				func_95();
				break;
			
			case 1:
				func_86();
				func_2();
				Global_90258 = 0;
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
	iLocal_54 = 0;
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
	
	if (iLocal_60)
	{
		iLocal_60 = 0;
	}
	else
	{
		iLocal_55++;
	}
	bLocal_59 = false;
	if (unk_0x44243F2E2F58B8E3())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_82();
	}
	if (iVar0 != iLocal_58)
	{
		iLocal_58 = iVar0;
		bLocal_59 = true;
		iLocal_66 = 0;
		iLocal_67 = 0;
		iLocal_74 = 0;
		iLocal_80 = 0;
	}
	if (iLocal_58 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_55 == 6 && func_81(64)) || (iLocal_55 == 5 && unk_0xE7FAF8E78F7D3A73(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_60 = 1;
	}
	func_75();
	if (Global_90256 || (Global_90257 && !func_72(0)))
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_71(iLocal_58, iVar2);
				iVar2++;
			}
			Global_90256 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) || (!unk_0x44243F2E2F58B8E3() && !func_70(iLocal_58))) || unk_0x51CFE20A158947F4()) || func_69()) || unk_0xEAE1A41FBC3984B1()) || unk_0xEC0ECEF2AF3FDA8D()) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || Global_70850) || Global_90258) || iLocal_61)
		{
			iLocal_82 = 1;
			iLocal_83 = unk_0x5AFB8ED811F05E4D();
			if (unk_0x44243F2E2F58B8E3())
			{
				uLocal_84 = unk_0xE92FCF3C05C2EF1D();
			}
			return;
		}
		if (iLocal_82)
		{
			if ((!unk_0x44243F2E2F58B8E3() && (unk_0x5AFB8ED811F05E4D() - iLocal_83) > 3000) || (unk_0x44243F2E2F58B8E3() && unk_0x3895E549A5DC7A53(unk_0xE92FCF3C05C2EF1D(), unk_0xCBD2990CF476037D(uLocal_84, 3000))))
			{
				iLocal_82 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!unk_0x44243F2E2F58B8E3() && (unk_0x5AFB8ED811F05E4D() - iLocal_56) > 2000) || (unk_0x44243F2E2F58B8E3() && unk_0x3895E549A5DC7A53(unk_0xE92FCF3C05C2EF1D(), unk_0xCBD2990CF476037D(uLocal_57, 2000)))) || bLocal_59)
	{
		if (iLocal_55 >= 8)
		{
			iLocal_55 = 0;
			iLocal_56 = unk_0x5AFB8ED811F05E4D();
			if (unk_0x44243F2E2F58B8E3())
			{
				uLocal_57 = unk_0xE92FCF3C05C2EF1D();
			}
		}
		iVar11 = 1;
		if (bLocal_59)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_59)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_55;
			}
			func_68(iLocal_58, iVar8, &iVar6, &iVar7);
			if (unk_0x44243F2E2F58B8E3())
			{
				iVar3 = func_67(iVar7, -1, 0);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_104551.f_2353.f_539.f_2367[iLocal_58];
			}
			else
			{
				unk_0xD194C635833AC189(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_66(iVar3, 0, 100);
			if (func_53(iLocal_58, iVar8, iVar3, &iVar4))
			{
				if (unk_0x44243F2E2F58B8E3())
				{
					func_52(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					if (Global_104551.f_2353.f_539.f_2367[iLocal_58] == 0)
					{
						bVar13 = false;
					}
					Global_104551.f_2353.f_539.f_2367[iLocal_58] = iVar4;
				}
				else
				{
					unk_0xD92C8D8AF3C67820(iVar6, iVar4, 1);
				}
				if (iVar4 > func_50(iLocal_58, iVar8, -1))
				{
					if (unk_0x44243F2E2F58B8E3())
					{
					}
					else if ((!Global_104551.f_9055 && !func_49(0)) || !unk_0xB03A1684359C50A1(Global_104551.f_9055.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = (iVar14 - (iVar14 % func_48(iLocal_58, iVar8)));
					if ((iVar14 % func_48(iLocal_58, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + func_48(iLocal_58, iVar8));
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = (iVar15 - func_48(iLocal_58, iVar8));
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
						if (!bLocal_59)
						{
							if (unk_0x44243F2E2F58B8E3())
							{
								if (func_41(117, -1) == 0)
								{
									if (!unk_0x622E10ED992CEB95() && func_9())
									{
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_61 = 1;
							iLocal_64 = (iVar4 - iVar3);
							iLocal_64 = (iLocal_64 + (iVar3 % func_48(iLocal_58, iVar8)));
							iLocal_65 = iVar4;
							iLocal_62 = iLocal_58;
							iLocal_63 = iVar8;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_58, iVar8, &iVar9))
						{
							if (iLocal_58 == 0)
							{
								unk_0xD194C635833AC189(joaat("sp0_total_playing_time"), &iVar10, -1);
								unk_0xD92C8D8AF3C67820(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 1)
							{
								unk_0xD194C635833AC189(joaat("sp1_total_playing_time"), &iVar10, -1);
								unk_0xD92C8D8AF3C67820(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 2)
							{
								unk_0xD194C635833AC189(joaat("sp2_total_playing_time"), &iVar10, -1);
								unk_0xD92C8D8AF3C67820(iVar9, iVar10, 1);
							}
							else if (iLocal_58 == 3)
							{
							}
						}
					}
				}
				func_71(iLocal_58, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				bVar16 = true;
				if (unk_0x44243F2E2F58B8E3())
				{
					func_52(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0)
				{
					Global_104551.f_2353.f_539.f_2367[iLocal_58] = iVar4;
					bVar16 = false;
				}
				else
				{
					unk_0xD92C8D8AF3C67820(iVar6, iVar4, 1);
				}
				if (bVar16)
				{
					func_71(iLocal_58, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_60 = 1;
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
		iVar0 = Global_2547154[iParam0 /*3*/][func_5(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0F1BF2DD8A1C0A68(iVar0, iParam1, iParam3);
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
			Global_2522568 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522568 = 1;
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
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

int func_9()
{
	if (unk_0x359D2F275016D7C2() && unk_0x834A29018EBFDCB3())
	{
		return 0;
	}
	if (Global_1794959 == 1)
	{
		return 0;
	}
	if (Global_1794814 == 1)
	{
		return 0;
	}
	if (unk_0x1CE8654E27598A5D())
	{
		return 0;
	}
	if (Global_1574295 == 1)
	{
		return 0;
	}
	if (unk_0x0F0887D98558C496())
	{
		return 0;
	}
	if (Global_979886)
	{
		return 0;
	}
	if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_576 == 1)
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
				if (func_35(&Global_2459088, 300000, 0) == 1)
				{
					func_34(&Global_2459086);
					func_32(3, -1);
				}
				else if (func_35(&Global_2459086, 7000, 0) == 0)
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
	if (unk_0x7DF51A716BE7A07F())
	{
		return 0;
	}
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (unk_0x0A88AA21DE172C4B())
	{
		if (func_24(unk_0x18F7BE9ACB7D08F4()) == joaat("weapon_sniperrifle") || func_24(unk_0x18F7BE9ACB7D08F4()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (unk_0xEC0ECEF2AF3FDA8D())
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
	if (unk_0xA9CC0DE677D82334(19))
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
	if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_35)
	{
		return 0;
	}
	if (Global_1574125)
	{
		return 0;
	}
	if (Global_1574129)
	{
		return 0;
	}
	if (Global_1574131)
	{
		return 0;
	}
	if (Global_2436169.f_3763.f_39)
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
	if (Global_2512581.f_3935)
	{
		return 0;
	}
	if (Global_2436169.f_3629)
	{
		return 0;
	}
	if (!func_17(unk_0x8CFC7D6E1DA5D304(), 1, 0))
	{
		return 0;
	}
	if (func_16(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (Global_2436169.f_3763.f_39 == 1)
	{
		return 0;
	}
	if (Global_2447908.f_2843.f_25 == 1)
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
	if (unk_0xA9CC0DE677D82334(16))
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
	if (unk_0x5AB5DEF5DD2227D4())
	{
		if (func_10("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_558)
	{
		return 0;
	}
	return 1;
}

bool func_10(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

bool func_11()
{
	return Global_2436169.f_1777.f_688 != 0;
}

bool func_12()
{
	return Global_2436169.f_2911.f_578;
}

bool func_13()
{
	return func_14();
}

bool func_14()
{
	return Global_1350816.f_40 == 3;
}

bool func_15(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

bool func_16(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1626339[iParam0 /*35*/].f_13, 0);
}

int func_17(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_20()
{
	return Global_1357213.f_112;
}

bool func_21()
{
	return Global_2436169.f_2591[0 /*79*/].f_1 != 0;
}

int func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1357213.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1357213.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (unk_0xB03A1684359C50A1(Global_1357213.f_1046, iParam0))
			{
				return 1;
			}
			if (unk_0xB03A1684359C50A1(Global_1357213.f_1047, iParam0))
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
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0x75CE6F8BEC2654E3(iParam0, &uVar0, 1);
	return uVar0;
}

bool func_25()
{
	return Global_2447128.f_580;
}

bool func_26()
{
	return unk_0xB03A1684359C50A1(Global_971063.f_8, 13);
}

bool func_27()
{
	return Global_2447128.f_579;
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("maintransition")) > 0)
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
	Global_1367753 = 0;
	if (unk_0x16DC46A28107A94A() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x0FF7F0CDD8B0D493(0, iParam1);
			iVar1 = func_33(iParam1);
			iVar0 = unk_0x3A75EA627A024B7A(iVar1);
			break;
		
		default:
			iVar1 = func_33(iParam1);
			iVar0 = unk_0x3A75EA627A024B7A(iVar1);
			if (!unk_0xB03A1684359C50A1(iVar0, iParam0))
			{
				unk_0xD2A9C3F486236CC5(&iVar0, iParam0);
				unk_0x0FF7F0CDD8B0D493(iVar0, iParam1);
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
			func_52(1300, 0, iParam1, 1, 0);
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
	if (unk_0x44243F2E2F58B8E3() && !bParam2)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0)) >= iParam1)
		{
			func_34(uParam0);
			return 1;
		}
	}
	else if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0x5AFB8ED811F05E4D(), *uParam0)) >= iParam1)
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
		if (unk_0x44243F2E2F58B8E3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE92FCF3C05C2EF1D();
			}
			else
			{
				*uParam0 = unk_0x5E1037C28AA2B562();
			}
		}
		else
		{
			*uParam0 = unk_0x5AFB8ED811F05E4D();
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
	iVar1 = unk_0x3A75EA627A024B7A(iVar0);
	return unk_0xB03A1684359C50A1(iVar1, iParam0);
}

int func_38()
{
	int iVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0xD51AEB3E72C71D1B())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xD2A9C3F486236CC5(&iVar0, 2);
				unk_0xD2A9C3F486236CC5(&iVar0, 4);
				unk_0xD2A9C3F486236CC5(&iVar0, 6);
				unk_0xD2A9C3F486236CC5(&Global_25, 2);
				unk_0xD2A9C3F486236CC5(&Global_25, 4);
				unk_0xD2A9C3F486236CC5(&Global_25, 6);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x16DC46A28107A94A())
				{
					iVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&iVar0, 0);
					unk_0x167AC4B8CEEB1F11(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143070 == 2)
	{
		return 1;
	}
	else if (Global_143070 == 3)
	{
		return 0;
	}
	if (unk_0x16DC46A28107A94A())
	{
		if (unk_0xB03A1684359C50A1(unk_0x3A75EA627A024B7A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_39()
{
	return Global_1312854;
}

bool func_40()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_196 != 0;
}

int func_41(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547154[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0xA17AF9F044C9C70E(uVar0, &uVar1, -1))
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
	return Global_1806994;
}

bool func_43()
{
	return func_44(unk_0x8CFC7D6E1DA5D304());
}

int func_44(int iParam0)
{
	if (iParam0 != func_45())
	{
		if (Global_1627460[iParam0 /*530*/].f_11 != func_45())
		{
			return Global_1627460[iParam0 /*530*/].f_11 == iParam0;
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
	return func_47(unk_0x8CFC7D6E1DA5D304(), bParam0);
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
	return Global_1627460[iParam0 /*530*/].f_11 != func_45();
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
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

int func_50(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x44243F2E2F58B8E3())
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
					return func_67(1221, iParam2, 0);
					break;
				
				case 3:
					return func_67(1227, iParam2, 0);
					break;
				
				case 2:
					return func_67(1223, iParam2, 0);
					break;
				
				case 4:
					return func_67(1226, iParam2, 0);
					break;
				
				case 5:
					return func_67(1225, iParam2, 0);
					break;
				
				case 6:
					return func_67(1222, iParam2, 0);
					break;
				
				case 7:
					return func_67(1224, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

bool func_51(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_52(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
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
				unk_0xD194C635833AC189(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 1)
			{
				unk_0xD194C635833AC189(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 2)
			{
				unk_0xD194C635833AC189(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
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
				unk_0x205C6BBC993A91EA(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_104551.f_2353.f_539.f_2335[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				unk_0x205C6BBC993A91EA(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_104551.f_2353.f_539.f_2335[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				unk_0x205C6BBC993A91EA(joaat("sp2_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_104551.f_2353.f_539.f_2335[iParam0]) / 175f);
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
				unk_0xD194C635833AC189(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_104551.f_2353.f_539.f_2339[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				unk_0xD194C635833AC189(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_104551.f_2353.f_539.f_2339[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				unk_0xD194C635833AC189(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_104551.f_2353.f_539.f_2339[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_67(1496, iParam3, 0)) / 20f);
				func_62(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				unk_0xD194C635833AC189(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_104551.f_2353.f_539.f_2343[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				unk_0xD194C635833AC189(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_104551.f_2353.f_539.f_2343[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				unk_0xD194C635833AC189(joaat("sp2_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_104551.f_2353.f_539.f_2343[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_67(109, iParam3, 0) / 50)));
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
				unk_0xD194C635833AC189(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 1)
			{
				unk_0xD194C635833AC189(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 2)
			{
				unk_0xD194C635833AC189(joaat("sp2_plane_landings"), &iVar3, -1);
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
				unk_0x205C6BBC993A91EA(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_104551.f_2353.f_539.f_2347[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				unk_0x205C6BBC993A91EA(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_104551.f_2353.f_539.f_2347[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				unk_0x205C6BBC993A91EA(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_104551.f_2353.f_539.f_2347[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_65(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				unk_0xD194C635833AC189(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_104551.f_2353.f_539.f_2351[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				unk_0xD194C635833AC189(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_104551.f_2353.f_539.f_2351[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				unk_0xD194C635833AC189(joaat("sp2_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_104551.f_2353.f_539.f_2351[iParam0])) / 2f) * 1.5f));
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
				unk_0xD194C635833AC189(joaat("sp0_hits_mission"), &iVar5, -1);
				unk_0xD194C635833AC189(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_104551.f_2353.f_539.f_2355[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_104551.f_2353.f_539.f_2359[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				unk_0xD194C635833AC189(joaat("sp1_hits_mission"), &iVar5, -1);
				unk_0xD194C635833AC189(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_104551.f_2353.f_539.f_2355[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_104551.f_2353.f_539.f_2359[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				unk_0xD194C635833AC189(joaat("sp2_hits_mission"), &iVar5, -1);
				unk_0xD194C635833AC189(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_104551.f_2353.f_539.f_2355[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_104551.f_2353.f_539.f_2359[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_67(168, iParam3, 0);
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
					return Global_104551.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0];
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
	if (unk_0xD194C635833AC189(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_57(int iParam0, int iParam1)
{
	return Global_104551.f_19117[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_104551.f_1978[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (unk_0x4E8ACA332EFBAA99(iParam0) * 86400));
	iVar0 = (iVar0 + unk_0x5A5CE49250E1E05F(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0x7B84519F17FE687A(iParam0) * 60);
	iVar0 = (iVar0 + unk_0xF50F13A0A272818D(iParam0));
	return iVar0;
}

int func_60(int iParam0, int iParam1)
{
	return Global_2522855[iParam0 /*3*/][func_5(iParam1)];
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + unk_0x4E8ACA332EFBAA99(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0x5A5CE49250E1E05F(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x7B84519F17FE687A(iParam0));
	return iVar0;
}

var func_62(float fParam0)
{
	if (func_42())
	{
		if (func_63() < Global_262145.f_11854)
		{
			if (*fParam0 + (IntToFloat(func_63()) * Global_262145.f_11853)) <= IntToFloat(Global_262145.f_11863)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_63()) * Global_262145.f_11853));
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
		return Global_1595681[func_64() /*678*/].f_211.f_6;
	}
	return 0;
}

int func_64()
{
	return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11;
}

float func_65(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2546466[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x205C6BBC993A91EA(iVar0, &uVar1, -1))
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
	uVar0 = Global_2522855[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
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
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
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
	if (unk_0x44243F2E2F58B8E3())
	{
		iVar0 = func_67(iVar3, -1, 0);
	}
	else
	{
		unk_0xD194C635833AC189(uVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (unk_0xBBDA792448DB5A89(iVar0) / 100f)));
			unk_0x0651470DF5898183(unk_0x8CFC7D6E1DA5D304(), fVar1, 1);
			break;
		
		case 7:
			if (unk_0xE7FAF8E78F7D3A73(joaat("armenian3")) != 0 || unk_0xE7FAF8E78F7D3A73(joaat("trevor3")) != 0)
			{
				Global_90257 = 1;
			}
			else
			{
				fVar1 = (1f - (unk_0xBBDA792448DB5A89(iVar0) / 100f));
				unk_0x0293CECDC1AEB119(unk_0x8CFC7D6E1DA5D304(), fVar1);
				unk_0x6AD7275A0EAA1A15(unk_0x8CFC7D6E1DA5D304(), fVar1);
				unk_0x4E1F7FAD9ED90C77(unk_0x8CFC7D6E1DA5D304(), fVar1);
			}
			break;
	}
}

int func_72(int iParam0)
{
	if (Global_35859 == 15)
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
	return func_74(iParam0, Global_35859);
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
	
	if (!iLocal_80)
	{
		if (iLocal_58 == 3)
		{
			if (Global_2097152[func_78() /*12062*/].f_7637.f_7)
			{
				iLocal_77 = func_59(func_60(144, -1));
				Global_2097152[func_78() /*12062*/].f_7637.f_7 = 0;
			}
			else
			{
				iLocal_77 = Global_2097152[func_78() /*12062*/].f_7637.f_6;
			}
			if (Global_2097152[func_78() /*12062*/].f_7637.f_4 == 0)
			{
				Global_2097152[func_78() /*12062*/].f_7637.f_4 = unk_0xE6E19D6A1FC25165();
			}
			iLocal_79 = Global_2097152[func_78() /*12062*/].f_7637.f_4;
			iLocal_78 = Global_2097152[func_78() /*12062*/].f_7637.f_5;
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_2272[iLocal_58])
			{
				switch (iLocal_58)
				{
					case 0:
						iLocal_77 = func_59(joaat("sp0_total_wheelie_time"));
						break;
					
					case 1:
						iLocal_77 = func_59(joaat("sp1_total_wheelie_time"));
						break;
					
					case 2:
						iLocal_77 = func_59(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_104551.f_2353.f_539.f_2272[iLocal_58] = 0;
			}
			else
			{
				iLocal_77 = Global_104551.f_2353.f_539.f_2268[iLocal_58];
			}
			if (Global_104551.f_2353.f_539.f_2260[iLocal_58] == 0)
			{
				Global_104551.f_2353.f_539.f_2260[iLocal_58] = unk_0xE6E19D6A1FC25165();
			}
			iLocal_79 = Global_104551.f_2353.f_539.f_2260[iLocal_58];
			iLocal_78 = Global_104551.f_2353.f_539.f_2264[iLocal_58];
		}
		iLocal_80 = 1;
		iLocal_81 = 1;
	}
	else if ((unk_0xE6E19D6A1FC25165() - iLocal_79) > 86400)
	{
		iLocal_80 = 0;
		iLocal_81 = 0;
		iLocal_79 = unk_0xE6E19D6A1FC25165();
		iLocal_78 = 0;
		if (iLocal_58 == 3)
		{
			Global_2097152[func_78() /*12062*/].f_7637.f_7 = 1;
		}
		else
		{
			Global_104551.f_2353.f_539.f_2272[iLocal_58] = 1;
		}
	}
	if (iLocal_81)
	{
		switch (iLocal_58)
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
				iVar0 = func_59(func_60(144, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_77);
		iVar2 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) / 15f)) - iLocal_78);
		if (iVar2 > 0)
		{
			func_77(iLocal_58, 4, iVar2);
			iLocal_78 = (iLocal_78 + iVar2);
		}
		if (iVar0 > (iLocal_77 + (unk_0x7BA495976DAC5657() / 1000) * 60))
		{
			iLocal_81 = 0;
		}
	}
	if (iLocal_58 == 3)
	{
		Global_2097152[func_78() /*12062*/].f_7637.f_4 = iLocal_79;
		Global_2097152[func_78() /*12062*/].f_7637.f_5 = iLocal_78;
	}
	else
	{
		Global_104551.f_2353.f_539.f_2260[iLocal_58] = iLocal_79;
		Global_104551.f_2353.f_539.f_2264[iLocal_58] = iLocal_78;
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
			Global_104551.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0] = (Global_104551.f_2353.f_539.f_2227[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 7870;
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
			if (iVar1 != 7870)
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
	
	if (iLocal_74)
	{
		bVar0 = true;
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			uVar1 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
			if ((((unk_0x31F12808DC47A9E5(uVar1) && unk_0xC4B84EB67F78C1F0(uVar1, 0)) && !unk_0x2409C4B1759B2661(uVar1)) && unk_0x4983F8C51A0C0AF3(uVar1, -1, 0) == unk_0x18F7BE9ACB7D08F4()) && (unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(uVar1)) || unk_0x881022B41FD53CD6(unk_0x4F69FBD64CDF125B(uVar1))))
			{
				bVar0 = false;
				if (unk_0x2A72627520A107B5(uVar1) >= 53f)
				{
					func_77(iLocal_58, 4, 2);
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			iLocal_74 = 0;
			iLocal_75 = unk_0x5AFB8ED811F05E4D();
			if (unk_0x44243F2E2F58B8E3())
			{
				uLocal_76 = unk_0xE92FCF3C05C2EF1D();
			}
		}
	}
	else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		uVar2 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
		if (((unk_0x31F12808DC47A9E5(uVar2) && unk_0xC4B84EB67F78C1F0(uVar2, 0)) && unk_0x2A72627520A107B5(uVar2) < 20f) && !unk_0x2409C4B1759B2661(uVar2))
		{
			if ((!unk_0x44243F2E2F58B8E3() && (unk_0x5AFB8ED811F05E4D() - iLocal_75) > 10000) || (unk_0x44243F2E2F58B8E3() && unk_0x3895E549A5DC7A53(unk_0xE92FCF3C05C2EF1D(), unk_0xCBD2990CF476037D(uLocal_76, 10000))))
			{
				iLocal_74 = 1;
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
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		uVar1 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		if (((unk_0x31F12808DC47A9E5(uVar1) && unk_0xC4B84EB67F78C1F0(uVar1, 0)) && unk_0x4983F8C51A0C0AF3(uVar1, -1, 0) == unk_0x18F7BE9ACB7D08F4()) && (((unk_0x881022B41FD53CD6(unk_0x4F69FBD64CDF125B(uVar1)) || unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(uVar1))) || unk_0x93CA7A248A4D402A(unk_0x4F69FBD64CDF125B(uVar1))) || unk_0x309C05EAA86E194E(unk_0x4F69FBD64CDF125B(uVar1))))
		{
			if (iLocal_66)
			{
				if (!unk_0x2409C4B1759B2661(uVar1))
				{
					if ((!unk_0x44243F2E2F58B8E3() && (unk_0x5AFB8ED811F05E4D() - iLocal_68) > 1500) || (unk_0x44243F2E2F58B8E3() && unk_0x3895E549A5DC7A53(unk_0xE92FCF3C05C2EF1D(), unk_0xCBD2990CF476037D(uLocal_69, 1500))))
					{
						iLocal_70 = unk_0x5AFB8ED811F05E4D();
						if (unk_0x44243F2E2F58B8E3())
						{
							uLocal_71 = unk_0xE92FCF3C05C2EF1D();
						}
						iLocal_67 = 1;
					}
					iLocal_66 = 0;
				}
			}
			if (iLocal_67)
			{
				if (!unk_0x2409C4B1759B2661(uVar1))
				{
					if (unk_0x19160618B3657F0E(uVar1))
					{
						if ((((!unk_0x44243F2E2F58B8E3() && (unk_0x5AFB8ED811F05E4D() - iLocal_70) > 20) || (!unk_0x44243F2E2F58B8E3() && (unk_0x5AFB8ED811F05E4D() - iLocal_70) == 0)) || (unk_0x44243F2E2F58B8E3() && unk_0x3895E549A5DC7A53(unk_0xE92FCF3C05C2EF1D(), unk_0xCBD2990CF476037D(uLocal_71, 20)))) || (unk_0x44243F2E2F58B8E3() && unk_0x6A80DE27BCCD78CA(unk_0xE92FCF3C05C2EF1D(), uLocal_71)))
						{
						}
						else
						{
							func_77(iLocal_58, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, (unk_0x5AFB8ED811F05E4D() - iLocal_70), 64);
						StringConCat(&cVar2, "ms", 64);
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			if (!iLocal_66 && !iLocal_67)
			{
				if ((!unk_0x44243F2E2F58B8E3() && (unk_0x5AFB8ED811F05E4D() - iLocal_72) > 1000) || (unk_0x44243F2E2F58B8E3() && unk_0x3895E549A5DC7A53(unk_0xE92FCF3C05C2EF1D(), unk_0xCBD2990CF476037D(uLocal_73, 1000))))
				{
					if (unk_0x2409C4B1759B2661(uVar1))
					{
						if (!iLocal_66)
						{
							iLocal_68 = unk_0x5AFB8ED811F05E4D();
							if (unk_0x44243F2E2F58B8E3())
							{
								uLocal_69 = unk_0xE92FCF3C05C2EF1D();
							}
							iLocal_66 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_66 || iLocal_67)
		{
			bVar0 = true;
		}
	}
	else if (iLocal_66 || iLocal_67)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_72 = unk_0x5AFB8ED811F05E4D();
		if (unk_0x44243F2E2F58B8E3())
		{
			uLocal_73 = unk_0xE92FCF3C05C2EF1D();
		}
		iLocal_66 = 0;
		iLocal_67 = 0;
	}
}

bool func_81(int iParam0)
{
	return (Global_103636 && iParam0) != 0;
}

int func_82()
{
	func_83();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_83()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_85(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_84(unk_0x18F7BE9ACB7D08F4());
			if (func_70(iVar0) && (!func_51(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_70(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
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
	
	if (iLocal_61)
	{
		if (iLocal_62 != iLocal_58)
		{
			iLocal_61 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_62)
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
				iVar1 = func_89(unk_0x8CFC7D6E1DA5D304());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = unk_0x18EA682CBBDF668A(iVar1);
				}
				break;
		}
		unk_0x55E6536147AC42E6("PS_UPDATE");
		unk_0x3A12001DBF78DC62(iLocal_65);
		unk_0x3665BDD0AE30371F(func_88(iLocal_63), func_87(iLocal_63), iLocal_64, (iLocal_65 - iLocal_64), 0, sVar0, sVar0);
		iLocal_82 = 1;
		iLocal_83 = unk_0x5AFB8ED811F05E4D() + 5000;
		if (unk_0x44243F2E2F58B8E3())
		{
			uLocal_84 = unk_0xCBD2990CF476037D(unk_0xE92FCF3C05C2EF1D(), 5000);
		}
		iLocal_61 = 0;
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
	Global_1368675[iVar0 /*5*/].f_4 = 1;
	return Global_1368675[iVar0 /*5*/].f_2;
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
	if (Global_1368838)
	{
		if (iParam0 == Global_1368838.f_1)
		{
			return;
		}
	}
	if (func_91(iParam0))
	{
		return;
	}
	if (Global_1368876 >= 32)
	{
		return;
	}
	Global_1368843[Global_1368876] = iParam0;
	Global_1368876++;
	if (bParam1)
	{
	}
}

int func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1368876)
	{
		if (Global_1368843[iVar0] == iParam0)
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
	if (Global_1368836 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1368836)
	{
		if (Global_1368675[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x474A54D9A9BD0D31(Global_1368675[iVar0 /*5*/].f_2) && unk_0x8A770CC4CC05DE07(Global_1368675[iVar0 /*5*/].f_2))
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
	
	if (iParam0 >= Global_1368836)
	{
		return;
	}
	if (unk_0x474A54D9A9BD0D31(Global_1368675[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1368675[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x18EA682CBBDF668A(Global_1368675[iParam0 /*5*/].f_2), 64);
			unk_0xBD17B901DFB6DC31(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x60E35C29E0313635(Global_1368675[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1368836)
	{
		Global_1368675[iVar32 /*5*/] = { Global_1368675[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_94(&(Global_1368675[iVar32 /*5*/]));
	Global_1368836 = (Global_1368836 - 1);
}

void func_94(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_45();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x44243F2E2F58B8E3())
	{
		uParam0->f_3 = unk_0xE92FCF3C05C2EF1D();
	}
}

void func_95()
{
	float fVar0;
	int iVar1;
	
	if (unk_0xBE773EB43BA738E3() != 1)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		if (!func_99(unk_0x8CFC7D6E1DA5D304()))
		{
			return;
		}
		if (func_98() != 0)
		{
			return;
		}
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		if (func_98() == 0)
		{
			iLocal_53 = 2;
		}
	}
	else
	{
		iLocal_53 = 0;
	}
	if (!func_97())
	{
		func_96();
	}
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (unk_0x44243F2E2F58B8E3())
	{
		uLocal_57 = unk_0xE92FCF3C05C2EF1D();
	}
	iLocal_72 = unk_0x5AFB8ED811F05E4D();
	if (unk_0x44243F2E2F58B8E3())
	{
		uLocal_73 = unk_0xE92FCF3C05C2EF1D();
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		if (!unk_0xB03A1684359C50A1(Global_2097152[func_78() /*12062*/].f_7637.f_1273, 2))
		{
			fVar0 = (unk_0xBBDA792448DB5A89(func_67(189, -1, 0)) / 20f);
			iVar1 = unk_0xF34EE736CF047844(fVar0);
			iVar1 = func_66(iVar1, 0, 100);
			func_77(3, 2, iVar1);
			unk_0xD2A9C3F486236CC5(&(Global_2097152[func_78() /*12062*/].f_7637.f_1273), 2);
		}
	}
	bLocal_59 = true;
	iLocal_54 = 1;
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
	
	if (unk_0x44243F2E2F58B8E3())
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
		Global_90256 = 1;
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
					unk_0xD92C8D8AF3C67820(iVar5, func_50(iVar3, iVar4, -1), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_104551.f_2353.f_539.f_2367[0] = func_50(0, 0, -1);
		Global_104551.f_2353.f_539.f_2367[1] = func_50(1, 0, -1);
		Global_104551.f_2353.f_539.f_2367[2] = func_50(2, 0, -1);
		Global_104551.f_2353.f_539.f_2334 = 1;
		Global_90256 = 1;
	}
}

int func_97()
{
	if (unk_0x44243F2E2F58B8E3())
	{
		return 1;
	}
	return Global_104551.f_2353.f_539.f_2334;
}

int func_98()
{
	return Global_25233;
}

int func_99(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xB03A1684359C50A1(Global_2436169.f_1, iParam0);
	}
	return 1;
}

void func_100()
{
	if (iLocal_54 != 0 && iLocal_53 != 3)
	{
		if (iLocal_53 == 0)
		{
			if (unk_0x44243F2E2F58B8E3())
			{
				iLocal_53 = 3;
			}
			if (!func_97())
			{
				iLocal_53 = 3;
			}
		}
		else if (iLocal_53 == 2)
		{
			if ((!unk_0x44243F2E2F58B8E3() || !func_99(unk_0x8CFC7D6E1DA5D304())) || func_98() != 0)
			{
				iLocal_53 = 3;
			}
		}
		if (iLocal_53 == 3)
		{
			iLocal_54 = 2;
		}
	}
}

