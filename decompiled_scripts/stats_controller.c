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
	unk_0x84027ACC1E53BA5C();
	if (unk_0x24862A9CDC8F8874(32))
	{
		unk_0xA4E0D8FD51F2A6F7();
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
				Global_88723 = 0;
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
	if (unk_0xBBAE3E0C60A8AD4B())
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
	if ((iLocal_52 == 6 && func_81(64)) || (iLocal_52 == 5 && unk_0xCBC8FFE55DC722B5(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_57 = 1;
	}
	func_75();
	if (Global_88721 || (Global_88722 && !func_72(0)))
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_71(iLocal_55, iVar2);
				iVar2++;
			}
			Global_88721 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) || (!unk_0xBBAE3E0C60A8AD4B() && !func_70(iLocal_55))) || unk_0xA8D4B6BDCF6DE72B()) || func_69()) || unk_0x308528B5CF35F306()) || unk_0xD5DFCA69ACAA20E3()) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || Global_69315) || Global_88723) || iLocal_58)
		{
			iLocal_79 = 1;
			iLocal_80 = unk_0x693EBB4F13506457();
			if (unk_0xBBAE3E0C60A8AD4B())
			{
				uLocal_81 = unk_0x2AA13A84EE2D3B24();
			}
			return;
		}
		if (iLocal_79)
		{
			if ((!unk_0xBBAE3E0C60A8AD4B() && (unk_0x693EBB4F13506457() - iLocal_80) > 3000) || (unk_0xBBAE3E0C60A8AD4B() && unk_0xC34F95EE52A51380(unk_0x2AA13A84EE2D3B24(), unk_0x1A184A79993F1536(uLocal_81, 3000))))
			{
				iLocal_79 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!unk_0xBBAE3E0C60A8AD4B() && (unk_0x693EBB4F13506457() - iLocal_53) > 2000) || (unk_0xBBAE3E0C60A8AD4B() && unk_0xC34F95EE52A51380(unk_0x2AA13A84EE2D3B24(), unk_0x1A184A79993F1536(uLocal_54, 2000)))) || bLocal_56)
	{
		if (iLocal_52 >= 8)
		{
			iLocal_52 = 0;
			iLocal_53 = unk_0x693EBB4F13506457();
			if (unk_0xBBAE3E0C60A8AD4B())
			{
				uLocal_54 = unk_0x2AA13A84EE2D3B24();
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
			if (unk_0xBBAE3E0C60A8AD4B())
			{
				iVar3 = func_67(iVar7, -1, 0);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_100976.f_1770.f_539.f_1615[iLocal_55];
			}
			else
			{
				unk_0x5F0618A5FDAD55C4(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_66(iVar3, 0, 100);
			if (func_53(iLocal_55, iVar8, iVar3, &iVar4))
			{
				if (unk_0xBBAE3E0C60A8AD4B())
				{
					func_52(iVar7, iVar4, -1, 1);
				}
				else if (iVar8 == 0)
				{
					if (Global_100976.f_1770.f_539.f_1615[iLocal_55] == 0)
					{
						bVar13 = false;
					}
					Global_100976.f_1770.f_539.f_1615[iLocal_55] = iVar4;
				}
				else
				{
					unk_0x071958EFED9481F5(iVar6, iVar4, 1);
				}
				if (iVar4 > func_50(iLocal_55, iVar8, -1))
				{
					if (unk_0xBBAE3E0C60A8AD4B())
					{
					}
					else if ((!Global_100976.f_7719 && !func_49(0)) || !unk_0xDCC86F723E82125E(Global_100976.f_7719.f_2[27 /*3*/], 2))
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
							if (unk_0xBBAE3E0C60A8AD4B())
							{
								if (func_41(117, -1) == 0)
								{
									if (!unk_0xB45DF29A98EEAD5D() && func_9())
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
								unk_0x5F0618A5FDAD55C4(joaat("sp0_total_playing_time"), &iVar10, -1);
								unk_0x071958EFED9481F5(iVar9, iVar10, 1);
							}
							else if (iLocal_55 == 1)
							{
								unk_0x5F0618A5FDAD55C4(joaat("sp1_total_playing_time"), &iVar10, -1);
								unk_0x071958EFED9481F5(iVar9, iVar10, 1);
							}
							else if (iLocal_55 == 2)
							{
								unk_0x5F0618A5FDAD55C4(joaat("sp2_total_playing_time"), &iVar10, -1);
								unk_0x071958EFED9481F5(iVar9, iVar10, 1);
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
				if (unk_0xBBAE3E0C60A8AD4B())
				{
					func_52(iVar7, iVar4, -1, 1);
				}
				else if (iVar8 == 0)
				{
					Global_100976.f_1770.f_539.f_1615[iLocal_55] = iVar4;
					bVar16 = false;
				}
				else
				{
					unk_0x071958EFED9481F5(iVar6, iVar4, 1);
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
		iVar0 = Global_2486871[iParam0 /*5*/][func_5(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x11C18C0E7876C1D0(iVar0, iParam1, iParam3);
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
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

int func_6()
{
	return Global_1312746;
}

int func_7()
{
	return 1;
	return 0;
}

void func_8(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

int func_9()
{
	if (unk_0x794BADE7D321095D() && unk_0xDA64C07A3B5D886D())
	{
		return 0;
	}
	if (Global_1710193 == 1)
	{
		return 0;
	}
	if (Global_1710052 == 1)
	{
		return 0;
	}
	if (unk_0xFF57B95AADC3D01A())
	{
		return 0;
	}
	if (Global_1573820 == 1)
	{
		return 0;
	}
	if (unk_0xF92DE571777D3526())
	{
		return 0;
	}
	if (Global_976342)
	{
		return 0;
	}
	if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_340 == 1)
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
				if (func_35(&Global_2443374, 300000, 0) == 1)
				{
					func_34(&Global_2443372);
					func_32(3, -1);
				}
				else if (func_35(&Global_2443372, 7000, 0) == 0)
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
	if (unk_0x547823CBA92EEF50())
	{
		return 0;
	}
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (unk_0x6C0EF9FA1B336D64())
	{
		if (func_24(unk_0xC8B93D94F8954288()) == joaat("weapon_sniperrifle") || func_24(unk_0xC8B93D94F8954288()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (unk_0xD5DFCA69ACAA20E3())
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
	if (unk_0xB8E84D49CFBF2001(19))
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
	if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_35)
	{
		return 0;
	}
	if (Global_1573687)
	{
		return 0;
	}
	if (Global_1573691)
	{
		return 0;
	}
	if (Global_1573693)
	{
		return 0;
	}
	if (Global_2426867.f_3288.f_39)
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
	if (Global_2458121.f_3819)
	{
		return 0;
	}
	if (Global_2426867.f_3154)
	{
		return 0;
	}
	if (!func_17(unk_0xA34E7C2A5118D638(), 1, 0))
	{
		return 0;
	}
	if (func_16(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (Global_2426867.f_3288.f_39 == 1)
	{
		return 0;
	}
	if (Global_2433864.f_2842.f_25 == 1)
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
	if (unk_0xB8E84D49CFBF2001(16))
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
	if (unk_0xB5AB8AD14244C87F())
	{
		if (func_10("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_323)
	{
		return 0;
	}
	return 1;
}

bool func_10(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

bool func_11()
{
	return Global_2426867.f_1325.f_688 != 0;
}

bool func_12()
{
	return Global_2426867.f_2429.f_585;
}

bool func_13()
{
	return func_14();
}

bool func_14()
{
	return Global_1332274.f_40 == 3;
}

bool func_15(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_16(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1607722[iParam0 /*34*/].f_12, 0);
}

int func_17(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xDF73DA5E2287C499(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x06972B20E75CBE06(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426867.f_3[iVar0])
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
	if (unk_0xCBC8FFE55DC722B5(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_20()
{
	return Global_1338611.f_112;
}

bool func_21()
{
	return Global_2426867.f_2138[0 /*72*/].f_1 != 0;
}

int func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1338611.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1338611.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (unk_0xDCC86F723E82125E(Global_1338611.f_947, iParam0))
			{
				return 1;
			}
			if (unk_0xDCC86F723E82125E(Global_1338611.f_948, iParam0))
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
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0xA51F11E1DC7307BB(iParam0, &uVar0, 1);
	return uVar0;
}

bool func_25()
{
	return Global_2433098.f_568;
}

bool func_26()
{
	return unk_0xDCC86F723E82125E(Global_967557.f_8, 13);
}

bool func_27()
{
	return Global_2433098.f_567;
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
	if (unk_0xCBC8FFE55DC722B5(joaat("maintransition")) > 0)
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
	Global_1347492 = 0;
	if (unk_0xD205A6ACC9C010D3() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			unk_0x7F00E2F1340492CF(0, iParam1);
			iVar1 = func_33(iParam1);
			iVar0 = unk_0x11BD984A2A4EF9A7(iVar1);
			break;
		
		default:
			iVar1 = func_33(iParam1);
			iVar0 = unk_0x11BD984A2A4EF9A7(iVar1);
			if (!unk_0xDCC86F723E82125E(iVar0, iParam0))
			{
				unk_0x59A0729D503ED758(&iVar0, iParam0);
				unk_0x7F00E2F1340492CF(iVar0, iParam1);
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
			func_52(1293, 0, iParam1, 1);
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
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam2)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= iParam1)
		{
			func_34(uParam0);
			return 1;
		}
	}
	else if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0)) >= iParam1)
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
		if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2AA13A84EE2D3B24();
			}
			else
			{
				*uParam0 = unk_0x3BC33547A5F418E8();
			}
		}
		else
		{
			*uParam0 = unk_0x693EBB4F13506457();
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
	iVar1 = unk_0x11BD984A2A4EF9A7(iVar0);
	return unk_0xDCC86F723E82125E(iVar1, iParam0);
}

int func_38()
{
	int iVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x76C144FFABF149C3())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x59A0729D503ED758(&iVar0, 2);
				unk_0x59A0729D503ED758(&iVar0, 4);
				unk_0x59A0729D503ED758(&iVar0, 6);
				unk_0x59A0729D503ED758(&Global_25, 2);
				unk_0x59A0729D503ED758(&Global_25, 4);
				unk_0x59A0729D503ED758(&Global_25, 6);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					iVar0 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&iVar0, 0);
					unk_0x1F071A4E400AAE0A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138040 == 2)
	{
		return 1;
	}
	else if (Global_138040 == 3)
	{
		return 0;
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		if (unk_0xDCC86F723E82125E(unk_0x11BD984A2A4EF9A7(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_39()
{
	return Global_1315911;
}

bool func_40()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_177 != 0;
}

int func_41(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486871[iParam0 /*5*/][func_5(iParam1)];
	if (unk_0xC7E465DF93CF8F2C(uVar0, &uVar1, -1))
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
	return Global_1722040;
}

bool func_43()
{
	return func_44(unk_0xA34E7C2A5118D638());
}

int func_44(int iParam0)
{
	if (iParam0 != func_45())
	{
		if (Global_1608811[iParam0 /*109*/].f_9 != func_45())
		{
			return Global_1608811[iParam0 /*109*/].f_9 == iParam0;
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
	return func_47(unk_0xA34E7C2A5118D638(), bParam0);
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
	return Global_1608811[iParam0 /*109*/].f_9 != func_45();
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
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

int func_50(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xBBAE3E0C60A8AD4B())
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
					return func_67(1214, iParam2, 0);
					break;
				
				case 3:
					return func_67(1220, iParam2, 0);
					break;
				
				case 2:
					return func_67(1216, iParam2, 0);
					break;
				
				case 4:
					return func_67(1219, iParam2, 0);
					break;
				
				case 5:
					return func_67(1218, iParam2, 0);
					break;
				
				case 6:
					return func_67(1215, iParam2, 0);
					break;
				
				case 7:
					return func_67(1217, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

bool func_51(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_52(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_5(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
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
				unk_0x5F0618A5FDAD55C4(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 1)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = unk_0xBBDA792448DB5A89(iVar3);
			}
			else if (iParam0 == 2)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
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
				unk_0xCE2D9189D4FA7E8E(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_100976.f_1770.f_539.f_1583[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				unk_0xCE2D9189D4FA7E8E(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_100976.f_1770.f_539.f_1583[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				unk_0xCE2D9189D4FA7E8E(joaat("sp2_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_100976.f_1770.f_539.f_1583[iParam0]) / 175f);
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
				unk_0x5F0618A5FDAD55C4(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_100976.f_1770.f_539.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_100976.f_1770.f_539.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar3 - Global_100976.f_1770.f_539.f_1587[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (unk_0xBBDA792448DB5A89(func_67(1489, iParam3, 0)) / 20f);
				func_62(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_100976.f_1770.f_539.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_100976.f_1770.f_539.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp2_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar3 - Global_100976.f_1770.f_539.f_1591[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_67(102, iParam3, 0) / 50)));
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
				unk_0x5F0618A5FDAD55C4(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 1)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + unk_0xBBDA792448DB5A89(iVar3));
			}
			else if (iParam0 == 2)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp2_plane_landings"), &iVar3, -1);
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
				unk_0xCE2D9189D4FA7E8E(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_100976.f_1770.f_539.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				unk_0xCE2D9189D4FA7E8E(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_100976.f_1770.f_539.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				unk_0xCE2D9189D4FA7E8E(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_100976.f_1770.f_539.f_1595[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_65(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_100976.f_1770.f_539.f_1599[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 1)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_100976.f_1770.f_539.f_1599[iParam0])) / 2f) * 1.5f));
			}
			else if (iParam0 == 2)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp2_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((unk_0xBBDA792448DB5A89((iVar3 - Global_100976.f_1770.f_539.f_1599[iParam0])) / 2f) * 1.5f));
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
				unk_0x5F0618A5FDAD55C4(joaat("sp0_hits_mission"), &iVar5, -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_100976.f_1770.f_539.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_100976.f_1770.f_539.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp1_hits_mission"), &iVar5, -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_100976.f_1770.f_539.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_100976.f_1770.f_539.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp2_hits_mission"), &iVar5, -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (unk_0xBBDA792448DB5A89((iVar5 - Global_100976.f_1770.f_539.f_1603[iParam0])) / 40f);
				fVar0 = (fVar0 + (unk_0xBBDA792448DB5A89((iVar6 - Global_100976.f_1770.f_539.f_1607[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_67(161, iParam3, 0);
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
					return Global_100976.f_1770.f_539.f_1475[iParam1 /*4*/][iParam0];
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
	if (unk_0x5F0618A5FDAD55C4(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_57(int iParam0, int iParam1)
{
	return Global_100976.f_17781[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_100976.f_1395[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (unk_0x7F18185D80E84BAA(iParam0) * 86400));
	iVar0 = (iVar0 + unk_0x7435C348C8174FDB(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0xF47C738E3AEC50A7(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x78FB340CC3726E5D(iParam0));
	return iVar0;
}

int func_60(int iParam0, int iParam1)
{
	return Global_2466774[iParam0 /*5*/][func_5(iParam1)];
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + unk_0x7F18185D80E84BAA(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0x7435C348C8174FDB(iParam0) * 60);
	iVar0 = (iVar0 + unk_0xF47C738E3AEC50A7(iParam0));
	return iVar0;
}

var func_62(float fParam0)
{
	if (func_42())
	{
		if (func_63() < Global_262145.f_10593)
		{
			if (*fParam0 + (IntToFloat(func_63()) * Global_262145.f_10592)) <= IntToFloat(Global_262145.f_10602)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_63()) * Global_262145.f_10592));
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
		return Global_1587175[func_64() /*410*/].f_192.f_6;
	}
	return 0;
}

int func_64()
{
	return Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9;
}

float func_65(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2485725[iParam0 /*5*/][func_5(iParam1)];
	if (unk_0xCE2D9189D4FA7E8E(iVar0, &uVar1, -1))
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
	uVar0 = Global_2466774[iParam0 /*5*/][func_5(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
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
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return Global_88917.f_44 == 1;
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
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		iVar0 = func_67(iVar3, -1, 0);
	}
	else
	{
		unk_0x5F0618A5FDAD55C4(uVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (unk_0xBBDA792448DB5A89(iVar0) / 100f)));
			unk_0x41AE51F2B56BFA08(unk_0xA34E7C2A5118D638(), fVar1);
			break;
		
		case 7:
			if (unk_0xCBC8FFE55DC722B5(joaat("armenian3")) != 0 || unk_0xCBC8FFE55DC722B5(joaat("trevor3")) != 0)
			{
				Global_88722 = 1;
			}
			else
			{
				fVar1 = (1f - (unk_0xBBDA792448DB5A89(iVar0) / 100f));
				unk_0xEF1F43AFAA25128D(unk_0xA34E7C2A5118D638(), fVar1);
				unk_0x3D2D864FFEB146A7(unk_0xA34E7C2A5118D638(), fVar1);
				unk_0xBC5CE29E02D3177A(unk_0xA34E7C2A5118D638(), fVar1);
			}
			break;
	}
}

int func_72(int iParam0)
{
	if (Global_35700 == 15)
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
	return func_74(iParam0, Global_35700);
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
			if (Global_2097152[func_78() /*10270*/].f_7698.f_7)
			{
				iLocal_74 = func_59(func_60(137, -1));
				Global_2097152[func_78() /*10270*/].f_7698.f_7 = 0;
			}
			else
			{
				iLocal_74 = Global_2097152[func_78() /*10270*/].f_7698.f_6;
			}
			if (Global_2097152[func_78() /*10270*/].f_7698.f_4 == 0)
			{
				Global_2097152[func_78() /*10270*/].f_7698.f_4 = unk_0x20F8506526D25CE0();
			}
			iLocal_76 = Global_2097152[func_78() /*10270*/].f_7698.f_4;
			iLocal_75 = Global_2097152[func_78() /*10270*/].f_7698.f_5;
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_1520[iLocal_55])
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
				Global_100976.f_1770.f_539.f_1520[iLocal_55] = 0;
			}
			else
			{
				iLocal_74 = Global_100976.f_1770.f_539.f_1516[iLocal_55];
			}
			if (Global_100976.f_1770.f_539.f_1508[iLocal_55] == 0)
			{
				Global_100976.f_1770.f_539.f_1508[iLocal_55] = unk_0x20F8506526D25CE0();
			}
			iLocal_76 = Global_100976.f_1770.f_539.f_1508[iLocal_55];
			iLocal_75 = Global_100976.f_1770.f_539.f_1512[iLocal_55];
		}
		iLocal_77 = 1;
		iLocal_78 = 1;
	}
	else if ((unk_0x20F8506526D25CE0() - iLocal_76) > 86400)
	{
		iLocal_77 = 0;
		iLocal_78 = 0;
		iLocal_76 = unk_0x20F8506526D25CE0();
		iLocal_75 = 0;
		if (iLocal_55 == 3)
		{
			Global_2097152[func_78() /*10270*/].f_7698.f_7 = 1;
		}
		else
		{
			Global_100976.f_1770.f_539.f_1520[iLocal_55] = 1;
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
				iVar0 = func_59(func_60(137, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_74);
		iVar2 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) / 15f)) - iLocal_75);
		if (iVar2 > 0)
		{
			func_77(iLocal_55, 4, iVar2);
			iLocal_75 = (iLocal_75 + iVar2);
		}
		if (iVar0 > (iLocal_74 + (unk_0x6E6295634A65B12E() / 1000) * 60))
		{
			iLocal_78 = 0;
		}
	}
	if (iLocal_55 == 3)
	{
		Global_2097152[func_78() /*10270*/].f_7698.f_4 = iLocal_76;
		Global_2097152[func_78() /*10270*/].f_7698.f_5 = iLocal_75;
	}
	else
	{
		Global_100976.f_1770.f_539.f_1508[iLocal_55] = iLocal_76;
		Global_100976.f_1770.f_539.f_1512[iLocal_55] = iLocal_75;
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
			Global_100976.f_1770.f_539.f_1475[iParam1 /*4*/][iParam0] = (Global_100976.f_1770.f_539.f_1475[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 3790;
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
			if (iVar1 != 3790)
			{
				iVar0 = func_67(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_52(iVar1, iVar0, -1, 1);
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
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			uVar1 = unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288());
			if ((((unk_0x95CCECA3948CFE7B(uVar1) && unk_0x5D42322C7DB888D0(uVar1, 0)) && !unk_0x25011B7D08ACD328(uVar1)) && unk_0xC0ADAF0814175B68(uVar1, -1) == unk_0xC8B93D94F8954288()) && (unk_0xE6CB12C10EE5D793(unk_0x6D5BB810CC209E15(uVar1)) || unk_0x1B477DDE9D088A91(unk_0x6D5BB810CC209E15(uVar1))))
			{
				bVar0 = false;
				if (unk_0x9BA9222C7124CA04(uVar1) >= 53f)
				{
					func_77(iLocal_55, 4, 2);
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			iLocal_71 = 0;
			iLocal_72 = unk_0x693EBB4F13506457();
			if (unk_0xBBAE3E0C60A8AD4B())
			{
				uLocal_73 = unk_0x2AA13A84EE2D3B24();
			}
		}
	}
	else if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		uVar2 = unk_0xBCEA8C5A6B3F7D71(unk_0xC8B93D94F8954288());
		if (((unk_0x95CCECA3948CFE7B(uVar2) && unk_0x5D42322C7DB888D0(uVar2, 0)) && unk_0x9BA9222C7124CA04(uVar2) < 20f) && !unk_0x25011B7D08ACD328(uVar2))
		{
			if ((!unk_0xBBAE3E0C60A8AD4B() && (unk_0x693EBB4F13506457() - iLocal_72) > 10000) || (unk_0xBBAE3E0C60A8AD4B() && unk_0xC34F95EE52A51380(unk_0x2AA13A84EE2D3B24(), unk_0x1A184A79993F1536(uLocal_73, 10000))))
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
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		uVar1 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (((unk_0x95CCECA3948CFE7B(uVar1) && unk_0x5D42322C7DB888D0(uVar1, 0)) && unk_0xC0ADAF0814175B68(uVar1, -1) == unk_0xC8B93D94F8954288()) && (((unk_0x1B477DDE9D088A91(unk_0x6D5BB810CC209E15(uVar1)) || unk_0xE6CB12C10EE5D793(unk_0x6D5BB810CC209E15(uVar1))) || unk_0x7F43378ECD4F3CCD(unk_0x6D5BB810CC209E15(uVar1))) || unk_0x1344FF0C5A540CFA(unk_0x6D5BB810CC209E15(uVar1))))
		{
			if (iLocal_63)
			{
				if (!unk_0x25011B7D08ACD328(uVar1))
				{
					if ((!unk_0xBBAE3E0C60A8AD4B() && (unk_0x693EBB4F13506457() - iLocal_65) > 1500) || (unk_0xBBAE3E0C60A8AD4B() && unk_0xC34F95EE52A51380(unk_0x2AA13A84EE2D3B24(), unk_0x1A184A79993F1536(uLocal_66, 1500))))
					{
						iLocal_67 = unk_0x693EBB4F13506457();
						if (unk_0xBBAE3E0C60A8AD4B())
						{
							uLocal_68 = unk_0x2AA13A84EE2D3B24();
						}
						iLocal_64 = 1;
					}
					iLocal_63 = 0;
				}
			}
			if (iLocal_64)
			{
				if (!unk_0x25011B7D08ACD328(uVar1))
				{
					if (unk_0xA4D2826AAFA337FD(uVar1))
					{
						if ((((!unk_0xBBAE3E0C60A8AD4B() && (unk_0x693EBB4F13506457() - iLocal_67) > 20) || (!unk_0xBBAE3E0C60A8AD4B() && (unk_0x693EBB4F13506457() - iLocal_67) == 0)) || (unk_0xBBAE3E0C60A8AD4B() && unk_0xC34F95EE52A51380(unk_0x2AA13A84EE2D3B24(), unk_0x1A184A79993F1536(uLocal_68, 20)))) || (unk_0xBBAE3E0C60A8AD4B() && unk_0xE8CCAE6E01008453(unk_0x2AA13A84EE2D3B24(), uLocal_68)))
						{
						}
						else
						{
							func_77(iLocal_55, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, (unk_0x693EBB4F13506457() - iLocal_67), 64);
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
				if ((!unk_0xBBAE3E0C60A8AD4B() && (unk_0x693EBB4F13506457() - iLocal_69) > 1000) || (unk_0xBBAE3E0C60A8AD4B() && unk_0xC34F95EE52A51380(unk_0x2AA13A84EE2D3B24(), unk_0x1A184A79993F1536(uLocal_70, 1000))))
				{
					if (unk_0x25011B7D08ACD328(uVar1))
					{
						if (!iLocal_63)
						{
							iLocal_65 = unk_0x693EBB4F13506457();
							if (unk_0xBBAE3E0C60A8AD4B())
							{
								uLocal_66 = unk_0x2AA13A84EE2D3B24();
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
		iLocal_69 = unk_0x693EBB4F13506457();
		if (unk_0xBBAE3E0C60A8AD4B())
		{
			uLocal_70 = unk_0x2AA13A84EE2D3B24();
		}
		iLocal_63 = 0;
		iLocal_64 = 0;
	}
}

bool func_81(int iParam0)
{
	return (Global_100061 && iParam0) != 0;
}

int func_82()
{
	func_83();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_83()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_85(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_84(unk_0xC8B93D94F8954288());
			if (func_70(iVar0) && (!func_51(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_70(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
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
				iVar1 = func_89(unk_0xA34E7C2A5118D638());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = unk_0xC607197AF4E3A5B7(iVar1);
				}
				break;
		}
		unk_0x12F4A48D84A3989D("PS_UPDATE");
		unk_0x6DC80A902A91958F(iLocal_62);
		unk_0xDFB280F580535C3E(func_88(iLocal_60), func_87(iLocal_60), iLocal_61, (iLocal_62 - iLocal_61), 0, sVar0, sVar0);
		iLocal_79 = 1;
		iLocal_80 = unk_0x693EBB4F13506457() + 5000;
		if (unk_0xBBAE3E0C60A8AD4B())
		{
			uLocal_81 = unk_0x1A184A79993F1536(unk_0x2AA13A84EE2D3B24(), 5000);
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
	Global_1348409[iVar0 /*5*/].f_4 = 1;
	return Global_1348409[iVar0 /*5*/].f_2;
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
	if (Global_1348572)
	{
		if (iParam0 == Global_1348572.f_1)
		{
			return;
		}
	}
	if (func_91(iParam0))
	{
		return;
	}
	if (Global_1348610 >= 32)
	{
		return;
	}
	Global_1348577[Global_1348610] = iParam0;
	Global_1348610++;
	if (bParam1)
	{
	}
}

int func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348610)
	{
		if (Global_1348577[iVar0] == iParam0)
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
	if (Global_1348570 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348570)
	{
		if (Global_1348409[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x09EE7867D5A6100E(Global_1348409[iVar0 /*5*/].f_2) && unk_0x1A48755EDAA1BFA6(Global_1348409[iVar0 /*5*/].f_2))
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
	
	if (iParam0 >= Global_1348570)
	{
		return;
	}
	if (unk_0x09EE7867D5A6100E(Global_1348409[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348409[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xC607197AF4E3A5B7(Global_1348409[iParam0 /*5*/].f_2), 64);
			unk_0xE0F13AAF9FB19B4B(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x0AF52A8B5613FE81(Global_1348409[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348570)
	{
		Global_1348409[iVar32 /*5*/] = { Global_1348409[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_94(&(Global_1348409[iVar32 /*5*/]));
	Global_1348570 = (Global_1348570 - 1);
}

void func_94(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_45();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		uParam0->f_3 = unk_0x2AA13A84EE2D3B24();
	}
}

void func_95()
{
	float fVar0;
	int iVar1;
	
	if (unk_0xE76641E47C9EFEE9() != 1)
	{
		return;
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (!func_99(unk_0xA34E7C2A5118D638()))
		{
			return;
		}
		if (func_98() != 0)
		{
			return;
		}
	}
	if (unk_0xBBAE3E0C60A8AD4B())
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
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		uLocal_54 = unk_0x2AA13A84EE2D3B24();
	}
	iLocal_69 = unk_0x693EBB4F13506457();
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		uLocal_70 = unk_0x2AA13A84EE2D3B24();
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (!unk_0xDCC86F723E82125E(Global_2097152[func_78() /*10270*/].f_7698.f_692, 2))
		{
			fVar0 = (unk_0xBBDA792448DB5A89(func_67(182, -1, 0)) / 20f);
			iVar1 = unk_0xF34EE736CF047844(fVar0);
			iVar1 = func_66(iVar1, 0, 100);
			func_77(3, 2, iVar1);
			unk_0x59A0729D503ED758(&(Global_2097152[func_78() /*10270*/].f_7698.f_692), 2);
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
	
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_68(3, iVar0, &uVar1, &iVar2);
				func_52(iVar2, func_50(3, iVar0, -1), -1, 1);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_88721 = 1;
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
					unk_0x071958EFED9481F5(iVar5, func_50(iVar3, iVar4, -1), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_100976.f_1770.f_539.f_1615[0] = func_50(0, 0, -1);
		Global_100976.f_1770.f_539.f_1615[1] = func_50(1, 0, -1);
		Global_100976.f_1770.f_539.f_1615[2] = func_50(2, 0, -1);
		Global_100976.f_1770.f_539.f_1582 = 1;
		Global_88721 = 1;
	}
}

int func_97()
{
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		return 1;
	}
	return Global_100976.f_1770.f_539.f_1582;
}

int func_98()
{
	return Global_25115;
}

int func_99(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_2426867.f_1, iParam0);
	}
	return 1;
}

void func_100()
{
	if (iLocal_51 != 0 && iLocal_50 != 3)
	{
		if (iLocal_50 == 0)
		{
			if (unk_0xBBAE3E0C60A8AD4B())
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
			if ((!unk_0xBBAE3E0C60A8AD4B() || !func_99(unk_0xA34E7C2A5118D638())) || func_98() != 0)
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

