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
	int iLocal_18[2] = { 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
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
	if (unk_0xC11469DCA6FC3BB5(2))
	{
		func_42();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(250);
		switch (iLocal_17)
		{
			case 0:
				if (iLocal_18[0])
				{
					if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
					{
						Global_16811[3 /*42*/].f_27[0] = func_41(2);
						func_40(2, 32, Global_16811[3 /*42*/].f_27[0]);
					}
					StringCopy(&(Global_16811[3 /*42*/]), "PA_TREV1", 16);
					StringCopy(&(Global_16811[3 /*42*/].f_4), "PA_TREV1", 16);
					Global_16811[3 /*42*/].f_8 = 0;
					Global_16811[3 /*42*/].f_9 = 1;
					StringCopy(&(Global_16811[3 /*42*/].f_10[1 /*4*/]), "PA_TREV1A", 16);
					Global_16811[3 /*42*/].f_37[1] = 0;
					if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
					{
						Global_16811[3 /*42*/].f_27[1] = func_41(2);
					}
					func_33(2, 3, 1, 1);
					func_30("PA_TREV1A", Global_16811[3 /*42*/].f_27[1]);
					iLocal_17 = 1;
				}
				break;
			
			case 1:
				if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
				{
					Global_16811[3 /*42*/].f_27[1] = func_41(2);
					if (func_29(2, 999999))
					{
						func_28("PA_COMPLETE", "PA_TREV1", 2000, 1);
						Global_16811[3 /*42*/].f_37[1] = 1;
						Global_16811[3 /*42*/].f_8 = 1;
						iLocal_23 = unk_0x4F67E8ECA7D3F667();
						iLocal_17 = 2;
					}
					else if (func_29(2, 499999))
					{
						if (!iLocal_21)
						{
							func_27("PA_TREV1", 2000, 1);
							iLocal_21 = 1;
						}
					}
					if (iLocal_18[1])
					{
						func_1(2, 32, 500000, 0, 0);
						iLocal_18[1] = 0;
					}
				}
				break;
			
			case 2:
				iLocal_22 = unk_0x4F67E8ECA7D3F667();
				if ((iLocal_22 - iLocal_23) < 5000)
				{
					func_30("PA_TREV1A", Global_16811[3 /*42*/].f_27[1]);
				}
				break;
		}
	}
}

void func_1(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_2(Global_97353.f_29774[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x380F22FED8D528A4(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xA4DDF5DF95E65EED(iVar1, iVar0, 1);
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
	
	func_26();
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
					func_25(99, 1);
					func_24(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_24(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_24(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_10(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_9(5))
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
							func_24(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_24(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_24(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_9(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_24(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_24(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_24(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_24(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_24(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_24(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_24(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_24(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_24(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xBC2C927F5C264960())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_24(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_24(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_24(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_24(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_24(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_24(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_9(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_24(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_24(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_24(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_24(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_24(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_24(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_8(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_25(95, iParam3);
					break;
				
				case 1:
					func_25(97, iParam3);
					break;
				
				case 2:
					func_25(96, iParam3);
					break;
			}
			func_25(98, iParam3);
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
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_24(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_24(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_24(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
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
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97353.f_23789.f_233[iVar2 /*69*/]++;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_4(iParam0);
	if (Global_34913 == 15)
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
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97353.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97353.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97353.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97353.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97353.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97353.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97353.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97353.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97353.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97353.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97353.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97353.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97353.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97353.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97353.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97353.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97353.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97353.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_4(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xA4DDF5DF95E65EED(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xA4DDF5DF95E65EED(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xA4DDF5DF95E65EED(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_5(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x03A753E2C8458335())
	{
		if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		}
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0) || unk_0x4ED6CFDFE8D4131A(Global_2097152[func_7() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x7D1D4A3602B6AD4E(&(Global_97353.f_23789.f_471), iParam0);
		unk_0x7D1D4A3602B6AD4E(&(Global_2097152[func_7() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x88D2BE4120CBF840("COUP_RED");
		unk_0x734AB59A7DBD1DAA(func_6(iParam0));
		unk_0xA514271203084072(&cVar1, &cVar1, 1, 0, "", 0);
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

void func_8(int iParam0)
{
	func_25(93, iParam0);
	func_25(29, iParam0);
	func_25(30, iParam0);
}

bool func_9(int iParam0)
{
	if (!unk_0x03A753E2C8458335())
	{
		return unk_0x4ED6CFDFE8D4131A(Global_97353.f_23789.f_471, iParam0);
	}
	return unk_0x4ED6CFDFE8D4131A(Global_2097152[func_7() /*8053*/].f_5756.f_10, iParam0);
}

int func_10(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x962C3F7D4BAA7DBC(27))
	{
		return 0;
	}
	if (unk_0x380F22FED8D528A4(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x380F22FED8D528A4(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x380F22FED8D528A4(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x380F22FED8D528A4(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xA4DDF5DF95E65EED(joaat("num_cash_spent"), iVar1, 1);
		func_23(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_11(27, 1);
	return 1;
}

int func_11(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_12(iParam0, iParam1);
}

int func_12(int iParam0, int iParam1)
{
	if (unk_0x962C3F7D4BAA7DBC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_22(&Global_2544859))
	{
		if (func_20(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_13(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x67FB10C1C400FB25(iParam0))
		{
			return 0;
		}
		if (unk_0x962C3F7D4BAA7DBC(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_13(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_20(uParam0, iParam1))
	{
		return 0;
	}
	func_16(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_14(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x962C3F7D4BAA7DBC(iParam1))
	{
		return 0;
	}
	if (func_20(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_15(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_15(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_16(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0, iVar0);
		iVar0++;
	}
	func_17(&(uParam0->f_62), (8f - 0.5f));
}

void func_17(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_18(unk_0x4ED6CFDFE8D4131A(*uParam0, 4)) - fParam1);
	unk_0xF73FBE4845C43B5B(uParam0, 1);
	unk_0x7D1D4A3602B6AD4E(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_18(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
	}
	if (unk_0x03A753E2C8458335())
	{
		iVar0 = unk_0x6AEB0DF30A9DB9F1();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x4F67E8ECA7D3F667()) / 1000f);
}

void func_19(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_20(var uParam0, int iParam1)
{
	return func_21(uParam0, iParam1) != -1;
}

int func_21(var uParam0, int iParam1)
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

bool func_22(var uParam0)
{
	return uParam0->f_68 == 1;
}

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x70521018B2248C91(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xB3F01FFD71B4B4DC(iParam0, iParam1);
	}
	return 0;
}

void func_24(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x380F22FED8D528A4(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xA4DDF5DF95E65EED(iParam0, iVar0, 1);
}

void func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x03A753E2C8458335())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		unk_0x380F22FED8D528A4(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xA4DDF5DF95E65EED(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_26()
{
	int iVar0;
	
	if (unk_0x179A3B2BFCDDD9DF())
	{
		unk_0x380F22FED8D528A4(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		unk_0x380F22FED8D528A4(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		unk_0x380F22FED8D528A4(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

void func_27(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x0BBD76EF782760F3(sParam0);
	unk_0x3103E77581D5165C(iParam1, 0);
}

void func_28(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x0BBD76EF782760F3(sParam0);
	unk_0x734AB59A7DBD1DAA(sParam1);
	unk_0x3103E77581D5165C(iParam2, 0);
}

int func_29(int iParam0, int iParam1)
{
	if (func_41(iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_30(char* sParam0, var uParam1)
{
	unk_0x405224591DF02025(0.852f, 0.81f, 0.141f, 0.025f, 0, 0, 0, 175, 0);
	func_32(255, 255, 255, 255);
	func_31(0.81f, 0.8f, sParam0, uParam1, 0);
}

void func_31(float fParam0, float fParam1, var uParam2, var uParam3, int iParam4)
{
	unk_0x44507FCF2678B557(uParam2);
	unk_0xF00CED653959DE03(uParam3);
	unk_0xC915BBFBCA1E5AB8(fParam0, fParam1, iParam4);
}

void func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x4170B650590B3B00(0.3f, 0.3f);
	unk_0x1BE39DBAA7263CA5(0, 0, 0, 0, 0);
	unk_0x44569BAFDAA644BF(1, 0, 0, 0, 205);
	unk_0x7BF6B00A0E7F5C36(1);
	unk_0x031ABF27ACAA1595(0);
	unk_0x1844BFD606087D68(iParam0, iParam1, iParam2, iParam3);
}

int func_33(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_39())
	{
		return 0;
	}
	if (func_34(iParam0, iParam1, bParam2, iParam3) == 1)
	{
		return 1;
	}
	return 0;
}

int func_34(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (unk_0x8E34C953364A76DD(joaat("appsidetask")) > 0)
	{
		return 0;
	}
	if (func_37() == 0)
	{
		func_36();
		return 0;
	}
	func_35(Global_16810);
	Global_16980[Global_16810 /*9*/].f_1 = uParam1;
	Global_16980[Global_16810 /*9*/] = uParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_16980[Global_16810 /*9*/].f_8 = iParam3;
	}
	if (bParam2)
	{
	}
	return 1;
}

void func_35(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xB6101ABE62B5F080();
	uVar1 = unk_0x4E162231B823DBBF();
	uVar2 = unk_0xC82CF208C2B19199();
	uVar3 = unk_0xDF2FD796C54480A5();
	uVar4 = unk_0x2D44E8FC79EAB1AC() + 1;
	uVar5 = unk_0xE136DCA28C4A48BA();
	Global_16980[iParam0 /*9*/].f_2 = uVar0;
	Global_16980[iParam0 /*9*/].f_2.f_1 = uVar1;
	Global_16980[iParam0 /*9*/].f_2.f_2 = uVar2;
	Global_16980[iParam0 /*9*/].f_2.f_3 = uVar3;
	Global_16980[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_16980[iParam0 /*9*/].f_2.f_5 = uVar5;
}

void func_36()
{
}

int func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_16980[iVar0 /*9*/].f_8 == 0)
		{
			Global_16810 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_16810 = 3;
	Global_16980[Global_16810 /*9*/].f_2 = -1;
	Global_16980[Global_16810 /*9*/].f_2.f_1 = 0;
	Global_16980[Global_16810 /*9*/].f_2.f_2 = 0;
	Global_16980[Global_16810 /*9*/].f_2.f_3 = 0;
	Global_16980[Global_16810 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_16980[iVar0 /*9*/].f_8 == 0 || Global_16980[iVar0 /*9*/].f_8 == 1)
		{
			if (!func_38(Global_16980[iVar0 /*9*/].f_2, Global_16980[Global_16810 /*9*/].f_2))
			{
				Global_16810 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_16810 == 3)
	{
		return 0;
	}
	return 1;
}

int func_38(struct<6> Param0, struct<6> Param6)
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

int func_39()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_40(int iParam0, int iParam1, int iParam2)
{
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_2(Global_97353.f_29774[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_41(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x380F22FED8D528A4(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x380F22FED8D528A4(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x380F22FED8D528A4(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

void func_42()
{
	unk_0x5E8B6D17FF91CD59();
}

