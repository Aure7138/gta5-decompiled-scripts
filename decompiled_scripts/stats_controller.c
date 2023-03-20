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
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
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
	unk_0x44E747EFAA4C6724();
	if (unk_0x7547D7CF93115D6D(32))
	{
		unk_0x883793591E631A3B();
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
	if (unk_0xD95428C8AA1DBBF2())
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
	if ((iLocal_51 == 6 && func_72(64)) || (iLocal_51 == 5 && unk_0x25531002BCF0D968(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_56 = 1;
	}
	func_66();
	if (Global_87471 || (Global_87472 && !func_63(0)))
	{
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
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
		if (((((((((unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) || (!unk_0xD95428C8AA1DBBF2() && !func_61(iLocal_54))) || unk_0xA4ADA92842355D33()) || func_60()) || unk_0x3574DD38C5FAC832()) || unk_0xC2C705ED6124A7C2()) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || Global_68065) || Global_87473) || iLocal_57)
		{
			iLocal_78 = 1;
			iLocal_79 = unk_0xF976C624234A4AA8();
			if (unk_0xD95428C8AA1DBBF2())
			{
				uLocal_80 = unk_0xFACC0E85E40AD425();
			}
			return;
		}
		if (iLocal_78)
		{
			if ((!unk_0xD95428C8AA1DBBF2() && (unk_0xF976C624234A4AA8() - iLocal_79) > 3000) || (unk_0xD95428C8AA1DBBF2() && unk_0xBAAA7FC3F886D297(unk_0xFACC0E85E40AD425(), unk_0x27BE5673BC364722(uLocal_80, 3000))))
			{
				iLocal_78 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!unk_0xD95428C8AA1DBBF2() && (unk_0xF976C624234A4AA8() - iLocal_52) > 2000) || (unk_0xD95428C8AA1DBBF2() && unk_0xBAAA7FC3F886D297(unk_0xFACC0E85E40AD425(), unk_0x27BE5673BC364722(uLocal_53, 2000)))) || bLocal_55)
	{
		if (iLocal_51 >= 8)
		{
			iLocal_51 = 0;
			iLocal_52 = unk_0xF976C624234A4AA8();
			if (unk_0xD95428C8AA1DBBF2())
			{
				uLocal_53 = unk_0xFACC0E85E40AD425();
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
			if (unk_0xD95428C8AA1DBBF2())
			{
				iVar3 = func_58(iVar6, -1, 0);
			}
			else if (iVar7 == 0)
			{
				iVar3 = Global_97173.f_1729.f_539.f_1615[iLocal_54];
			}
			else
			{
				unk_0x55FFE396AA3CA77A(iVar5, &iVar3, -1);
			}
			iVar3 = func_57(iVar3, 0, 100);
			if (func_47(iLocal_54, iVar7, iVar3, &iVar4))
			{
				if (unk_0xD95428C8AA1DBBF2())
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
					unk_0x96B68C67633472DC(iVar5, iVar4, 1);
				}
				if (iVar4 > func_44(iLocal_54, iVar7, -1))
				{
					if (unk_0xD95428C8AA1DBBF2())
					{
					}
					else if ((!Global_97173.f_7311 && !func_43(0)) || !unk_0x61D8FEAF64881CDA(Global_97173.f_7311.f_2[27 /*3*/], 2))
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
							if (unk_0xD95428C8AA1DBBF2())
							{
								if (func_41(117, -1) == 0)
								{
									if (!unk_0xBB51CB7A4D14453D() && func_9())
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
								unk_0x55FFE396AA3CA77A(joaat("sp0_total_playing_time"), &iVar9, -1);
								unk_0x96B68C67633472DC(iVar8, iVar9, 1);
							}
							else if (iLocal_54 == 1)
							{
								unk_0x55FFE396AA3CA77A(joaat("sp1_total_playing_time"), &iVar9, -1);
								unk_0x96B68C67633472DC(iVar8, iVar9, 1);
							}
							else if (iLocal_54 == 2)
							{
								unk_0x55FFE396AA3CA77A(joaat("sp2_total_playing_time"), &iVar9, -1);
								unk_0x96B68C67633472DC(iVar8, iVar9, 1);
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
				if (unk_0xD95428C8AA1DBBF2())
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
					unk_0x96B68C67633472DC(iVar5, iVar4, 1);
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

void func_4(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_7())
	{
		iVar0 = Global_2472534[iParam0 /*6*/][func_5(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD51A9EE025576399(iVar0, iParam1, iParam3);
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
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

int func_9()
{
	if (unk_0x5A55AE4A2A300EDF() && unk_0x25C455B54D545ED8())
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
	if (unk_0x56D6A1F4811E2F9A())
	{
		return 0;
	}
	if (Global_1573671 == 1)
	{
		return 0;
	}
	if (unk_0x46C8195C64F14258())
	{
		return 0;
	}
	if (Global_971738)
	{
		return 0;
	}
	if (Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_318 == 1)
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
				if (func_35(&Global_2436771, 300000, 0) == 1)
				{
					func_34(&Global_2436769);
					func_32(3, -1);
				}
				else if (func_35(&Global_2436769, 7000, 0) == 0)
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
	if (unk_0x47245DD35A0EDC7B())
	{
		return 0;
	}
	if (unk_0xBB02FD0C8166DE6D())
	{
		return 0;
	}
	if (unk_0x4B1DB7F8007D3A8E())
	{
		if (func_24(unk_0x507DA4994C3D8EBD()) == joaat("weapon_sniperrifle") || func_24(unk_0x507DA4994C3D8EBD()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (unk_0xC2C705ED6124A7C2())
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
	if (unk_0xC7F3C9E82B405F1E(19))
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
	if (Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_27)
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
	if (Global_2446210.f_3797)
	{
		return 0;
	}
	if (Global_2421967.f_3030)
	{
		return 0;
	}
	if (!func_17(unk_0xAF65E5A58BE87D95(), 1, 0))
	{
		return 0;
	}
	if (func_16(unk_0xAF65E5A58BE87D95()))
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
	if (unk_0xC7F3C9E82B405F1E(16))
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
	if (unk_0xA325E5426CD8AC07())
	{
		if (func_10("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_302)
	{
		return 0;
	}
	return 1;
}

bool func_10(char* sParam0)
{
	unk_0x74C587863BEFBDD0(sParam0);
	return unk_0x5D488553935013A9(0);
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
	return unk_0x61D8FEAF64881CDA(Global_1599457[iParam0 /*32*/], 0);
}

int func_17(int iParam0, bool bParam1, bool bParam2)
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

int func_18()
{
	if (unk_0x25531002BCF0D968(joaat("appcamera")) > 0)
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
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
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
			if (unk_0x61D8FEAF64881CDA(Global_1327591.f_947, iParam0))
			{
				return 1;
			}
			if (unk_0x61D8FEAF64881CDA(Global_1327591.f_948, iParam0))
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
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0xAE0CD3052D6ED1ED(iParam0, &uVar0, 1);
	return uVar0;
}

bool func_25()
{
	return Global_2427935.f_564;
}

bool func_26()
{
	return unk_0x61D8FEAF64881CDA(Global_964222.f_8, 13);
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
	if (unk_0x25531002BCF0D968(joaat("maintransition")) > 0)
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
	if (unk_0x85B80D0F84A3F70C() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x47AAFCA3EF6CC8B8(0, iParam1);
			iVar1 = func_33(iParam1);
			iVar0 = unk_0x227FB8F9C772BAFB(iVar1);
			break;
		
		default:
			iVar1 = func_33(iParam1);
			iVar0 = unk_0x227FB8F9C772BAFB(iVar1);
			if (!unk_0x61D8FEAF64881CDA(iVar0, iParam0))
			{
				unk_0x3DBE2A7AF9E71C82(&iVar0, iParam0);
				unk_0x47AAFCA3EF6CC8B8(iVar0, iParam1);
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
			func_46(1289, 0, iParam1, 1);
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
	if (unk_0xD95428C8AA1DBBF2() && !bParam2)
	{
		if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xFACC0E85E40AD425(), *uParam0)) >= iParam1)
		{
			func_34(uParam0);
			return 1;
		}
	}
	else if (unk_0xEC8415598F0CAF4B(unk_0x88702B74B95C046D(unk_0xF976C624234A4AA8(), *uParam0)) >= iParam1)
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

bool func_37(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = func_33(iParam1);
	uVar1 = unk_0x227FB8F9C772BAFB(iVar0);
	return unk_0x61D8FEAF64881CDA(uVar1, iParam0);
}

int func_38()
{
	var uVar0;
	
	if (unk_0x85B80D0F84A3F70C())
	{
		if (unk_0x61D8FEAF64881CDA(unk_0x227FB8F9C772BAFB(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0xA730AA29D1C70932())
	{
		if (unk_0x72B3C5483AF02F51())
		{
			if (unk_0xFA66FD5789959E48())
			{
				if (unk_0x85B80D0F84A3F70C())
				{
					uVar0 = unk_0x227FB8F9C772BAFB(866);
					unk_0x3DBE2A7AF9E71C82(&uVar0, 0);
					unk_0x6C25B3CA27EB626F(uVar0);
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
	return Global_1582048[unk_0xAF65E5A58BE87D95() /*324*/].f_165 != 0;
}

int func_41(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2472534[iParam0 /*6*/][func_5(iParam1)];
	if (unk_0xED5C4CADD81A8853(uVar0, &uVar1, -1))
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
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xD95428C8AA1DBBF2())
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
					return func_58(1210, iParam2, 0);
					break;
				
				case 3:
					return func_58(1216, iParam2, 0);
					break;
				
				case 2:
					return func_58(1212, iParam2, 0);
					break;
				
				case 4:
					return func_58(1215, iParam2, 0);
					break;
				
				case 5:
					return func_58(1214, iParam2, 0);
					break;
				
				case 6:
					return func_58(1211, iParam2, 0);
					break;
				
				case 7:
					return func_58(1213, iParam2, 0);
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

void func_46(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, iParam1, iParam3);
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
				unk_0x55FFE396AA3CA77A(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 1)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 2)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
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
				unk_0x3E6ED0C6CF9AA077(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_97173.f_1729.f_539.f_1583[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				unk_0x3E6ED0C6CF9AA077(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_97173.f_1729.f_539.f_1583[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				unk_0x3E6ED0C6CF9AA077(joaat("sp2_dist_running"), &fVar1, -1);
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
				unk_0x55FFE396AA3CA77A(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_58(1485, iParam3, 0)) / 20f);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp2_number_near_miss"), &iVar3, -1);
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
				unk_0x55FFE396AA3CA77A(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 1)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 2)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp2_plane_landings"), &iVar3, -1);
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
				unk_0x3E6ED0C6CF9AA077(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_97173.f_1729.f_539.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				unk_0x3E6ED0C6CF9AA077(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_97173.f_1729.f_539.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				unk_0x3E6ED0C6CF9AA077(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_97173.f_1729.f_539.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_56(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1599[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_97173.f_1729.f_539.f_1599[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp2_kills_stealth"), &iVar3, -1);
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
				unk_0x55FFE396AA3CA77A(joaat("sp0_hits_mission"), &iVar5, -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_97173.f_1729.f_539.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_97173.f_1729.f_539.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp1_hits_mission"), &iVar5, -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_97173.f_1729.f_539.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_97173.f_1729.f_539.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				unk_0x55FFE396AA3CA77A(joaat("sp2_hits_mission"), &iVar5, -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_97173.f_1729.f_539.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_97173.f_1729.f_539.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_58(158, iParam3, 0);
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
	if (unk_0x55FFE396AA3CA77A(iVar0, &uVar1, -1))
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
	iVar0 = (iVar0 + (unk_0x02E2EDB3B1CA99DB(iParam0) * 86400));
	iVar0 = (iVar0 + unk_0xC33F84241C8331EF(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0x903E709719C0C924(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x7977CBB09204D3E3(iParam0));
	return iVar0;
}

int func_54(int iParam0, int iParam1)
{
	return Global_2454190[iParam0 /*6*/][func_5(iParam1)];
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + unk_0x02E2EDB3B1CA99DB(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0xC33F84241C8331EF(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x903E709719C0C924(iParam0));
	return iVar0;
}

float func_56(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2471165[iParam0 /*6*/][func_5(iParam1)];
	if (unk_0x3E6ED0C6CF9AA077(iVar0, &uVar1, -1))
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
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454190[iParam0 /*6*/][func_5(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
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
	if (!unk_0xD95428C8AA1DBBF2())
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
	var uVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_59(iParam0, iParam1, &uVar2, &iVar3);
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = func_58(iVar3, -1, 0);
	}
	else
	{
		unk_0x55FFE396AA3CA77A(uVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (unk_0xBBDA792448DB5A89(iVar0) / 100f)));
			unk_0x53168525D1CF19A8(unk_0xAF65E5A58BE87D95(), fVar1);
			break;
		
		case 7:
			if (unk_0x25531002BCF0D968(joaat("armenian3")) != 0 || unk_0x25531002BCF0D968(joaat("trevor3")) != 0)
			{
				Global_87472 = 1;
			}
			else
			{
				fVar1 = (1f - (unk_0xBBDA792448DB5A89(iVar0) / 100f));
				unk_0x8BD370190E66BB94(unk_0xAF65E5A58BE87D95(), fVar1);
				unk_0x46E1941063DAC541(unk_0xAF65E5A58BE87D95(), fVar1);
				unk_0xB3D9BF898A7A3CF4(unk_0xAF65E5A58BE87D95(), fVar1);
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
				Global_2097152[func_69() /*8053*/].f_5756.f_4 = unk_0x116C811902B474B3();
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
				Global_97173.f_1729.f_539.f_1508[iLocal_54] = unk_0x116C811902B474B3();
			}
			iLocal_75 = Global_97173.f_1729.f_539.f_1508[iLocal_54];
			iLocal_74 = Global_97173.f_1729.f_539.f_1512[iLocal_54];
		}
		iLocal_76 = 1;
		iLocal_77 = 1;
	}
	else if ((unk_0x116C811902B474B3() - iLocal_75) > 86400)
	{
		iLocal_76 = 0;
		iLocal_77 = 0;
		iLocal_75 = unk_0x116C811902B474B3();
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
		if (iVar0 > (iLocal_73 + (unk_0x9C0DC2E2BADFB107() / 1000) * 60))
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
			iVar1 = 2829;
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
			if (iVar1 != 2829)
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
	var uVar1;
	var uVar2;
	
	if (iLocal_70)
	{
		bVar0 = true;
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			uVar1 = unk_0x527D4CB4E8181391(unk_0x507DA4994C3D8EBD());
			if ((((unk_0xFD68187442384158(uVar1) && unk_0xCA8794CE207FC6D5(uVar1, 0)) && !unk_0xF97DDB74A78F6500(uVar1)) && unk_0xE634CB9EE7094537(uVar1, -1) == unk_0x507DA4994C3D8EBD()) && (unk_0xA34706B20AE53D17(unk_0x26EA758C2A691D06(uVar1)) || unk_0x4658BA5921D40213(unk_0x26EA758C2A691D06(uVar1))))
			{
				bVar0 = false;
				if (unk_0x11F6A4A45943670E(uVar1) >= 53f)
				{
					func_68(iLocal_54, 4, 2);
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			iLocal_70 = 0;
			iLocal_71 = unk_0xF976C624234A4AA8();
			if (unk_0xD95428C8AA1DBBF2())
			{
				uLocal_72 = unk_0xFACC0E85E40AD425();
			}
		}
	}
	else if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		uVar2 = unk_0x527D4CB4E8181391(unk_0x507DA4994C3D8EBD());
		if (((unk_0xFD68187442384158(uVar2) && unk_0xCA8794CE207FC6D5(uVar2, 0)) && unk_0x11F6A4A45943670E(uVar2) < 20f) && !unk_0xF97DDB74A78F6500(uVar2))
		{
			if ((!unk_0xD95428C8AA1DBBF2() && (unk_0xF976C624234A4AA8() - iLocal_71) > 10000) || (unk_0xD95428C8AA1DBBF2() && unk_0xBAAA7FC3F886D297(unk_0xFACC0E85E40AD425(), unk_0x27BE5673BC364722(uLocal_72, 10000))))
			{
				iLocal_70 = 1;
			}
		}
	}
}

void func_71()
{
	bool bVar0;
	var uVar1;
	char cVar2[64];
	
	bVar0 = false;
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		uVar1 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (((unk_0xFD68187442384158(uVar1) && unk_0xCA8794CE207FC6D5(uVar1, 0)) && unk_0xE634CB9EE7094537(uVar1, -1) == unk_0x507DA4994C3D8EBD()) && (((unk_0x4658BA5921D40213(unk_0x26EA758C2A691D06(uVar1)) || unk_0xA34706B20AE53D17(unk_0x26EA758C2A691D06(uVar1))) || unk_0xD70F47541E70FD47(unk_0x26EA758C2A691D06(uVar1))) || unk_0x99F5A208CDBDA518(unk_0x26EA758C2A691D06(uVar1))))
		{
			if (iLocal_62)
			{
				if (!unk_0xF97DDB74A78F6500(uVar1))
				{
					if ((!unk_0xD95428C8AA1DBBF2() && (unk_0xF976C624234A4AA8() - iLocal_64) > 1500) || (unk_0xD95428C8AA1DBBF2() && unk_0xBAAA7FC3F886D297(unk_0xFACC0E85E40AD425(), unk_0x27BE5673BC364722(uLocal_65, 1500))))
					{
						iLocal_66 = unk_0xF976C624234A4AA8();
						if (unk_0xD95428C8AA1DBBF2())
						{
							uLocal_67 = unk_0xFACC0E85E40AD425();
						}
						iLocal_63 = 1;
					}
					iLocal_62 = 0;
				}
			}
			if (iLocal_63)
			{
				if (!unk_0xF97DDB74A78F6500(uVar1))
				{
					if (unk_0x525FB3C56A2F33BE(uVar1))
					{
						if ((((!unk_0xD95428C8AA1DBBF2() && (unk_0xF976C624234A4AA8() - iLocal_66) > 20) || (!unk_0xD95428C8AA1DBBF2() && (unk_0xF976C624234A4AA8() - iLocal_66) == 0)) || (unk_0xD95428C8AA1DBBF2() && unk_0xBAAA7FC3F886D297(unk_0xFACC0E85E40AD425(), unk_0x27BE5673BC364722(uLocal_67, 20)))) || (unk_0xD95428C8AA1DBBF2() && unk_0x72BC399AFD40817A(unk_0xFACC0E85E40AD425(), uLocal_67)))
						{
						}
						else
						{
							func_68(iLocal_54, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, (unk_0xF976C624234A4AA8() - iLocal_66), 64);
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
				if ((!unk_0xD95428C8AA1DBBF2() && (unk_0xF976C624234A4AA8() - iLocal_68) > 1000) || (unk_0xD95428C8AA1DBBF2() && unk_0xBAAA7FC3F886D297(unk_0xFACC0E85E40AD425(), unk_0x27BE5673BC364722(uLocal_69, 1000))))
				{
					if (unk_0xF97DDB74A78F6500(uVar1))
					{
						if (!iLocal_62)
						{
							iLocal_64 = unk_0xF976C624234A4AA8();
							if (unk_0xD95428C8AA1DBBF2())
							{
								uLocal_65 = unk_0xFACC0E85E40AD425();
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
		iLocal_68 = unk_0xF976C624234A4AA8();
		if (unk_0xD95428C8AA1DBBF2())
		{
			uLocal_69 = unk_0xFACC0E85E40AD425();
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
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_76(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_75(unk_0x507DA4994C3D8EBD());
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
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
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
				iVar1 = func_80(unk_0xAF65E5A58BE87D95());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = unk_0x47A5C6F75ADC0C8A(iVar1);
				}
				break;
		}
		unk_0x82FD00B995993186("PS_UPDATE");
		unk_0x844339A27F0F1508(iLocal_61);
		unk_0x9E9520CAFF9A8532(func_79(iLocal_59), func_78(iLocal_59), iLocal_60, (iLocal_61 - iLocal_60), 0, sVar0, sVar0);
		iLocal_78 = 1;
		iLocal_79 = unk_0xF976C624234A4AA8() + 5000;
		if (unk_0xD95428C8AA1DBBF2())
		{
			uLocal_80 = unk_0x27BE5673BC364722(unk_0xFACC0E85E40AD425(), 5000);
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
			if (unk_0x1132CE7A24BDADC2(Global_1334625[iVar0 /*5*/].f_2) && unk_0xDCBCBE55C7A8D357(Global_1334625[iVar0 /*5*/].f_2))
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
	if (unk_0x1132CE7A24BDADC2(Global_1334625[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1334625[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x47A5C6F75ADC0C8A(Global_1334625[iParam0 /*5*/].f_2), 64);
			unk_0x44F609A2056E59D2(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xEE99D3729480B00B(Global_1334625[iParam0 /*5*/].f_2);
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
	if (unk_0xD95428C8AA1DBBF2())
	{
		uParam0->f_3 = unk_0xFACC0E85E40AD425();
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
	
	if (unk_0x85D4D9CD3B4EADCA() != 1)
	{
		return;
	}
	if (unk_0xD95428C8AA1DBBF2())
	{
		if (!func_91(unk_0xAF65E5A58BE87D95()))
		{
			return;
		}
		if (func_90() != 0)
		{
			return;
		}
	}
	if (unk_0xD95428C8AA1DBBF2())
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
	if (unk_0xD95428C8AA1DBBF2())
	{
		uLocal_53 = unk_0xFACC0E85E40AD425();
	}
	iLocal_68 = unk_0xF976C624234A4AA8();
	if (unk_0xD95428C8AA1DBBF2())
	{
		uLocal_69 = unk_0xFACC0E85E40AD425();
	}
	if (unk_0xD95428C8AA1DBBF2())
	{
		if (!unk_0x61D8FEAF64881CDA(Global_2097152[func_69() /*8053*/].f_5756.f_651, 2))
		{
			fVar0 = (unk_0xBBDA792448DB5A89(func_58(179, -1, 0)) / 20f);
			iVar1 = unk_0xF34EE736CF047844(fVar0);
			iVar1 = func_57(iVar1, 0, 100);
			func_68(3, 2, iVar1);
			unk_0x3DBE2A7AF9E71C82(&(Global_2097152[func_69() /*8053*/].f_5756.f_651), 2);
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
	
	if (unk_0xD95428C8AA1DBBF2())
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
					unk_0x96B68C67633472DC(iVar5, func_44(iVar3, iVar4, -1), 1);
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
	if (unk_0xD95428C8AA1DBBF2())
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
		return unk_0x61D8FEAF64881CDA(Global_2421967.f_1, iParam0);
	}
	return 1;
}

void func_92()
{
	if (iLocal_50 != 0 && iLocal_49 != 3)
	{
		if (iLocal_49 == 0)
		{
			if (unk_0xD95428C8AA1DBBF2())
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
			if ((!unk_0xD95428C8AA1DBBF2() || !func_91(unk_0xAF65E5A58BE87D95())) || func_90() != 0)
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

