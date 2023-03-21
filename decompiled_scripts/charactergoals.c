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
	int iLocal_18 = 0;
	int iLocal_19[2] = { 0, 0 };
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
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
	if (unk_0xE8A79675302ED812(2))
	{
		func_49();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(250);
		switch (iLocal_18)
		{
			case 0:
				if (iLocal_19[0])
				{
					if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						Global_16919[3 /*42*/].f_27[0] = func_48(2);
						func_47(2, 32, Global_16919[3 /*42*/].f_27[0]);
					}
					StringCopy(&(Global_16919[3 /*42*/]), "PA_TREV1", 16);
					StringCopy(&(Global_16919[3 /*42*/].f_4), "PA_TREV1", 16);
					Global_16919[3 /*42*/].f_8 = 0;
					Global_16919[3 /*42*/].f_9 = 1;
					StringCopy(&(Global_16919[3 /*42*/].f_10[1 /*4*/]), "PA_TREV1A", 16);
					Global_16919[3 /*42*/].f_37[1] = 0;
					if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						Global_16919[3 /*42*/].f_27[1] = func_48(2);
					}
					func_40(2, 3, 1, 1);
					func_37("PA_TREV1A", Global_16919[3 /*42*/].f_27[1]);
					iLocal_18 = 1;
				}
				break;
			
			case 1:
				if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
				{
					Global_16919[3 /*42*/].f_27[1] = func_48(2);
					if (func_36(2, 999999))
					{
						func_35("PA_COMPLETE", "PA_TREV1", 2000, 1);
						Global_16919[3 /*42*/].f_37[1] = 1;
						Global_16919[3 /*42*/].f_8 = 1;
						iLocal_24 = unk_0x105601648511CC64();
						iLocal_18 = 2;
					}
					else if (func_36(2, 499999))
					{
						if (!iLocal_22)
						{
							func_34("PA_TREV1", 2000, 1);
							iLocal_22 = 1;
						}
					}
					if (iLocal_19[1])
					{
						func_1(2, 32, 500000, 0, 0);
						iLocal_19[1] = 0;
					}
				}
				break;
			
			case 2:
				iLocal_23 = unk_0x105601648511CC64();
				if ((iLocal_23 - iLocal_24) < 5000)
				{
					func_37("PA_TREV1A", Global_16919[3 /*42*/].f_27[1]);
				}
				break;
		}
	}
}

void func_1(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_2(Global_105220.f_28021[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6CB99B97664C3727(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3A57956BCE003880(iVar1, iVar0, 1);
	}
}

int func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_33();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_32(99, 1);
					func_31(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_31(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_31(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_15(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_11(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_31(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_31(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_31(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_11(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_31(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_31(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_31(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_31(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_31(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_31(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_31(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_31(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_31(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x2C087518F90303D5())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_31(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_31(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_31(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_31(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_31(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_31(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_11(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_31(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_31(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_31(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_31(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_31(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_31(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_10(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_32(95, iParam3);
					break;
				
				case 1:
					func_32(97, iParam3);
					break;
				
				case 2:
					func_32(96, iParam3);
					break;
			}
			func_32(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_5(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_5(iVar1);
	}
	iVar5 = (Global_53141[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53141[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53141[iVar2] = 2147483647;
				}
				else
				{
					Global_53141[iVar2] = (Global_53141[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_31(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_31(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_31(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53141[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53141[iVar2];
			Global_53141[iVar2] = (Global_53141[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_2[Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_105220.f_20535.f_233[iVar2 /*69*/]++;
		Global_105220.f_20535.f_233[iVar2 /*69*/].f_1++;
		if (Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_105220.f_20535.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_4(iParam0);
	if (Global_35905 == 15)
	{
		func_3(0);
	}
	return 1;
}

void func_3(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53149[iVar0 /*3*/][0] = Global_105220.f_20535[iVar0];
		Global_53149.f_31[iVar0 /*3*/][0] = Global_105220.f_20535.f_11[iVar0];
		Global_53149.f_62[iVar0 /*3*/][0] = Global_105220.f_20535.f_22[iVar0];
		Global_53149.f_93[iVar0 /*3*/][0] = Global_105220.f_20535.f_33[iVar0];
		Global_53149.f_124[iVar0 /*3*/][0] = Global_105220.f_20535.f_44[iVar0];
		Global_53149.f_155[iVar0 /*3*/][0] = Global_105220.f_20535.f_55[iVar0];
		Global_53149.f_186[iVar0 /*3*/][0] = Global_105220.f_20535.f_66[iVar0];
		Global_53149.f_217[iVar0 /*3*/][0] = Global_105220.f_20535.f_77[iVar0];
		Global_53149.f_248[iVar0 /*3*/][0] = Global_105220.f_20535.f_88[iVar0];
		if (!bParam0)
		{
			Global_53149[iVar0 /*3*/][1] = Global_105220.f_20535[iVar0];
			Global_53149.f_31[iVar0 /*3*/][1] = Global_105220.f_20535.f_11[iVar0];
			Global_53149.f_62[iVar0 /*3*/][1] = Global_105220.f_20535.f_22[iVar0];
			Global_53149.f_93[iVar0 /*3*/][1] = Global_105220.f_20535.f_33[iVar0];
			Global_53149.f_124[iVar0 /*3*/][1] = Global_105220.f_20535.f_44[iVar0];
			Global_53149.f_155[iVar0 /*3*/][1] = Global_105220.f_20535.f_55[iVar0];
			Global_53149.f_186[iVar0 /*3*/][1] = Global_105220.f_20535.f_66[iVar0];
			Global_53149.f_217[iVar0 /*3*/][1] = Global_105220.f_20535.f_77[iVar0];
			Global_53149.f_248[iVar0 /*3*/][1] = Global_105220.f_20535.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_4(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53141[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_5(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_8(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0) || unk_0xFA30DFD0084E92FE(Global_2097152[func_7() /*12171*/].f_7688.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_20535.f_471), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_2097152[func_7() /*12171*/].f_7688.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_6(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_6(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_7()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_8(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
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
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar18, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_9()
{
	return Global_1312736;
}

void func_10(int iParam0)
{
	func_32(93, iParam0);
	func_32(29, iParam0);
	func_32(30, iParam0);
}

bool func_11(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_12(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_20535.f_471, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_2097152[func_7() /*12171*/].f_7688.f_10, iParam0);
}

int func_12(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_9();
	}
	iVar1 = func_14(iParam0, iParam1);
	uVar2 = func_13(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_13(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_14(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

int func_15(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x6D5CBCB6411EDE89(27))
	{
		return 0;
	}
	if (unk_0x6CB99B97664C3727(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6CB99B97664C3727(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3A57956BCE003880(joaat("num_cash_spent"), iVar1, 1);
		func_30(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_16(27, 1);
	return 1;
}

int func_16(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_17(iParam0, iParam1);
}

int func_17(int iParam0, int iParam1)
{
	if (func_29(14) && !func_28(iParam0))
	{
		return 0;
	}
	if (unk_0x6D5CBCB6411EDE89(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25524 != 0 && !Global_70978)
	{
		return 0;
	}
	if (func_27(&Global_4267702))
	{
		if (func_25(&Global_4267702, iParam0))
		{
			return 0;
		}
		if (func_18(&Global_4267702, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xE07F36ACFF1AA002(iParam0))
		{
			return 0;
		}
		if (unk_0x6D5CBCB6411EDE89(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_18(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_29(14) && !func_28(iParam1))
	{
		return 0;
	}
	if (func_25(uParam0, iParam1))
	{
		return 0;
	}
	if (func_24(uParam0) < 0f)
	{
		func_23(uParam0, 0);
	}
	func_21(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_19(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_19(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_29(14) && !func_28(iParam1))
	{
		return 0;
	}
	if (func_25(uParam0, iParam1))
	{
		return 0;
	}
	if (func_24(uParam0) < 0f)
	{
		func_23(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_20(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_20(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_21(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_22(uParam0, iVar0);
		iVar0++;
	}
	func_23(uParam0, (Global_4267701 - 0.5f));
}

void func_22(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_23(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_24(var uParam0)
{
	return uParam0->f_80;
}

bool func_25(var uParam0, int iParam1)
{
	return func_26(uParam0, iParam1) != -1;
}

int func_26(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_27(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_29(int iParam0)
{
	return Global_35905 == iParam0;
}

int func_30(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
	}
	return 0;
}

void func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_51709[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_51709[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_33()
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53141[0] == iVar0)
		{
			Global_53141[0] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53141[1] == iVar0)
		{
			Global_53141[1] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53141[2] == iVar0)
		{
			Global_53141[2] = iVar0;
		}
	}
}

void func_34(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 0);
}

void func_35(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x41D8F63F629E76BE(iParam2, 0);
}

int func_36(int iParam0, int iParam1)
{
	if (func_48(iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_37(char* sParam0, var uParam1)
{
	unk_0xF7EBEC3FF57AEC65(0.852f, 0.81f, 0.141f, 0.025f, 0, 0, 0, 175, 0);
	func_39(255, 255, 255, 255);
	func_38(0.81f, 0.8f, sParam0, uParam1, 0);
}

void func_38(float fParam0, float fParam1, var uParam2, var uParam3, int iParam4)
{
	unk_0x8B371195127AACF2(uParam2);
	unk_0xAA5C5BF0489E5553(uParam3);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam4);
}

void func_39(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xB8F3C51875F7BEA3(0.3f, 0.3f);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(1, 0, 0, 0, 205);
	unk_0x39AFAD5E153F0203(1);
	unk_0xC8793973D4960AC4(0);
	unk_0xCC4FE6A016BA0765(iParam0, iParam1, iParam2, iParam3);
}

int func_40(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_46())
	{
		return 0;
	}
	if (func_41(iParam0, iParam1, bParam2, iParam3) == 1)
	{
		return 1;
	}
	return 0;
}

int func_41(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (unk_0xB731B8C5BCE89836(joaat("appsidetask")) > 0)
	{
		return 0;
	}
	if (func_44() == 0)
	{
		func_43();
		return 0;
	}
	func_42(Global_16918);
	Global_17088[Global_16918 /*9*/].f_1 = uParam1;
	Global_17088[Global_16918 /*9*/] = uParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_17088[Global_16918 /*9*/].f_8 = iParam3;
	}
	if (bParam2)
	{
	}
	return 1;
}

void func_42(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xF40D00CD7B81C0A8();
	uVar1 = unk_0x7E09057438B9D216();
	uVar2 = unk_0x6E06C0DB9B43570D();
	uVar3 = unk_0xBE14F159908E4EE5();
	uVar4 = unk_0xDD6A91E47ED4D0CF() + 1;
	uVar5 = unk_0x4EEB3860BFC44B78();
	Global_17088[iParam0 /*9*/].f_2 = uVar0;
	Global_17088[iParam0 /*9*/].f_2.f_1 = uVar1;
	Global_17088[iParam0 /*9*/].f_2.f_2 = uVar2;
	Global_17088[iParam0 /*9*/].f_2.f_3 = uVar3;
	Global_17088[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_17088[iParam0 /*9*/].f_2.f_5 = uVar5;
}

void func_43()
{
}

int func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_17088[iVar0 /*9*/].f_8 == 0)
		{
			Global_16918 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_16918 = 3;
	Global_17088[Global_16918 /*9*/].f_2 = -1;
	Global_17088[Global_16918 /*9*/].f_2.f_1 = 0;
	Global_17088[Global_16918 /*9*/].f_2.f_2 = 0;
	Global_17088[Global_16918 /*9*/].f_2.f_3 = 0;
	Global_17088[Global_16918 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_17088[iVar0 /*9*/].f_8 == 0 || Global_17088[iVar0 /*9*/].f_8 == 1)
		{
			if (!func_45(Global_17088[iVar0 /*9*/].f_2, Global_17088[Global_16918 /*9*/].f_2))
			{
				Global_16918 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_16918 == 3)
	{
		return 0;
	}
	return 1;
}

int func_45(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_46()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_105220.f_28021[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_2(Global_105220.f_28021[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_48(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

void func_49()
{
	unk_0x95E4B6F3ED223F5A();
}

