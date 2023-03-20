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
	if (unk_0x89522B8E487D4EF9(2))
	{
		func_44();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(250);
		switch (iLocal_18)
		{
			case 0:
				if (iLocal_19[0])
				{
					if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
					{
						Global_16831[3 /*42*/].f_27[0] = func_43(2);
						func_42(2, 32, Global_16831[3 /*42*/].f_27[0]);
					}
					StringCopy(&(Global_16831[3 /*42*/]), "PA_TREV1", 16);
					StringCopy(&(Global_16831[3 /*42*/].f_4), "PA_TREV1", 16);
					Global_16831[3 /*42*/].f_8 = 0;
					Global_16831[3 /*42*/].f_9 = 1;
					StringCopy(&(Global_16831[3 /*42*/].f_10[1 /*4*/]), "PA_TREV1A", 16);
					Global_16831[3 /*42*/].f_37[1] = 0;
					if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
					{
						Global_16831[3 /*42*/].f_27[1] = func_43(2);
					}
					func_35(2, 3, 1, 1);
					func_32("PA_TREV1A", Global_16831[3 /*42*/].f_27[1]);
					iLocal_18 = 1;
				}
				break;
			
			case 1:
				if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
				{
					Global_16831[3 /*42*/].f_27[1] = func_43(2);
					if (func_31(2, 999999))
					{
						func_30("PA_COMPLETE", "PA_TREV1", 2000, 1);
						Global_16831[3 /*42*/].f_37[1] = 1;
						Global_16831[3 /*42*/].f_8 = 1;
						iLocal_24 = unk_0x9D40BBF80D8F5E8A();
						iLocal_18 = 2;
					}
					else if (func_31(2, 499999))
					{
						if (!iLocal_22)
						{
							func_29("PA_TREV1", 2000, 1);
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
				iLocal_23 = unk_0x9D40BBF80D8F5E8A();
				if ((iLocal_23 - iLocal_24) < 5000)
				{
					func_32("PA_TREV1A", Global_16831[3 /*42*/].f_27[1]);
				}
				break;
		}
	}
}

void func_1(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_2(Global_99155.f_32499[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x56DCF5665F92F9BD(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x39DEDCCD70293F58(iVar1, iVar0, 1);
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
	
	func_28();
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
					func_27(99, 1);
					func_26(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_26(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_26(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_10(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
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
							func_26(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_26(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_26(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_26(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_26(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_26(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_26(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_26(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_26(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_26(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_26(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_26(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x87F8C006AA576A39())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_26(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_26(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_26(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_26(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_26(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_26(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_26(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_26(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_26(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_26(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_26(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_26(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_27(95, iParam3);
					break;
				
				case 1:
					func_27(97, iParam3);
					break;
				
				case 2:
					func_27(96, iParam3);
					break;
			}
			func_27(98, iParam3);
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
	iVar5 = (Global_52753[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52753[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52753[iVar2] = 2147483647;
				}
				else
				{
					Global_52753[iVar2] = (Global_52753[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_26(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_26(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_26(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52753[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52753[iVar2];
			Global_52753[iVar2] = (Global_52753[iVar2] - iParam3);
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
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_99155.f_25013.f_233[iVar2 /*69*/]++;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_4(iParam0);
	if (Global_35619 == 15)
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
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52761[iVar0 /*3*/][0] = Global_99155.f_25013[iVar0];
		Global_52761.f_31[iVar0 /*3*/][0] = Global_99155.f_25013.f_11[iVar0];
		Global_52761.f_62[iVar0 /*3*/][0] = Global_99155.f_25013.f_22[iVar0];
		Global_52761.f_93[iVar0 /*3*/][0] = Global_99155.f_25013.f_33[iVar0];
		Global_52761.f_124[iVar0 /*3*/][0] = Global_99155.f_25013.f_44[iVar0];
		Global_52761.f_155[iVar0 /*3*/][0] = Global_99155.f_25013.f_55[iVar0];
		Global_52761.f_186[iVar0 /*3*/][0] = Global_99155.f_25013.f_66[iVar0];
		Global_52761.f_217[iVar0 /*3*/][0] = Global_99155.f_25013.f_77[iVar0];
		Global_52761.f_248[iVar0 /*3*/][0] = Global_99155.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52761[iVar0 /*3*/][1] = Global_99155.f_25013[iVar0];
			Global_52761.f_31[iVar0 /*3*/][1] = Global_99155.f_25013.f_11[iVar0];
			Global_52761.f_62[iVar0 /*3*/][1] = Global_99155.f_25013.f_22[iVar0];
			Global_52761.f_93[iVar0 /*3*/][1] = Global_99155.f_25013.f_33[iVar0];
			Global_52761.f_124[iVar0 /*3*/][1] = Global_99155.f_25013.f_44[iVar0];
			Global_52761.f_155[iVar0 /*3*/][1] = Global_99155.f_25013.f_55[iVar0];
			Global_52761.f_186[iVar0 /*3*/][1] = Global_99155.f_25013.f_66[iVar0];
			Global_52761.f_217[iVar0 /*3*/][1] = Global_99155.f_25013.f_77[iVar0];
			Global_52761.f_248[iVar0 /*3*/][1] = Global_99155.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_4(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52753[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x39DEDCCD70293F58(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x39DEDCCD70293F58(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x39DEDCCD70293F58(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_5(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x00AAD79B42B3E036())
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x73817D396768E4C6(&(Global_99155.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0) || unk_0xB519E5386FBF69E5(Global_2097152[func_7() /*10169*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x73817D396768E4C6(&(Global_99155.f_25013.f_471), iParam0);
		unk_0x73817D396768E4C6(&(Global_2097152[func_7() /*10169*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x4A4F36C4EFDE341F("COUP_RED");
		unk_0x9359E7CC54335EB9(func_6(iParam0));
		unk_0x77AD0392EB2D45CC(&cVar1, &cVar1, 1, 0, "", 0);
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
	func_27(93, iParam0);
	func_27(29, iParam0);
	func_27(30, iParam0);
}

bool func_9(int iParam0)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0);
	}
	return unk_0xB519E5386FBF69E5(Global_2097152[func_7() /*10169*/].f_7698.f_10, iParam0);
}

int func_10(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x1F0D90C2E3B3876D(27))
	{
		return 0;
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x56DCF5665F92F9BD(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x39DEDCCD70293F58(joaat("num_cash_spent"), iVar1, 1);
		func_25(27, iVar1);
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
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_12(iParam0, iParam1);
}

int func_12(int iParam0, int iParam1)
{
	if (func_24(14) && !func_23(iParam0))
	{
		return 0;
	}
	if (unk_0x1F0D90C2E3B3876D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25280 != 0 && !Global_69236)
	{
		return 0;
	}
	if (func_22(&Global_2558814))
	{
		if (func_20(&Global_2558814, iParam0))
		{
			return 0;
		}
		if (func_13(&Global_2558814, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x870B558D3473ADCD(iParam0))
		{
			return 0;
		}
		if (unk_0x1F0D90C2E3B3876D(iParam0))
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
	var uVar1[70];
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_23(iParam1))
	{
		return 0;
	}
	if (func_20(uParam0, iParam1))
	{
		return 0;
	}
	if (func_19(uParam0) < 0f)
	{
		func_18(uParam0, 0);
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
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_23(iParam1))
	{
		return 0;
	}
	if (func_20(uParam0, iParam1))
	{
		return 0;
	}
	if (func_19(uParam0) < 0f)
	{
		func_18(uParam0, 0);
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
	return (*uParam0)[iParam1] == 70;
}

void func_16(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_17(uParam0, iVar0);
		iVar0++;
	}
	func_18(uParam0, (Global_2558813 - 0.5f));
}

void func_17(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_18(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_19(var uParam0)
{
	return uParam0->f_72;
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
	return uParam0->f_71 == 1;
}

int func_23(int iParam0)
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

bool func_24(int iParam0)
{
	return Global_35619 == iParam0;
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x674FE6A5C8163DA5(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x613BED2AD524D24F(iParam0, iParam1);
	}
	return 0;
}

void func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x56DCF5665F92F9BD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x39DEDCCD70293F58(iParam0, iVar0, 1);
}

void func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51321[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x00AAD79B42B3E036())
	{
		return;
	}
	if (Global_51321[iParam0 /*7*/])
	{
		unk_0x56DCF5665F92F9BD(Global_51321[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x39DEDCCD70293F58(Global_51321[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_28()
{
	int iVar0;
	
	if (unk_0x6E2954F2B1919678())
	{
		unk_0x56DCF5665F92F9BD(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52753[0] == iVar0)
		{
			Global_52753[0] = iVar0;
		}
		unk_0x56DCF5665F92F9BD(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52753[1] == iVar0)
		{
			Global_52753[1] = iVar0;
		}
		unk_0x56DCF5665F92F9BD(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52753[2] == iVar0)
		{
			Global_52753[2] = iVar0;
		}
	}
}

void func_29(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x81E3FE28C9E14CDE(sParam0);
	unk_0xE45B7EE472DD7F7F(iParam1, 0);
}

void func_30(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x81E3FE28C9E14CDE(sParam0);
	unk_0x9359E7CC54335EB9(sParam1);
	unk_0xE45B7EE472DD7F7F(iParam2, 0);
}

int func_31(int iParam0, int iParam1)
{
	if (func_43(iParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_32(char* sParam0, var uParam1)
{
	unk_0xC3BB3CA17D24E700(0.852f, 0.81f, 0.141f, 0.025f, 0, 0, 0, 175, 0);
	func_34(255, 255, 255, 255);
	func_33(0.81f, 0.8f, sParam0, uParam1, 0);
}

void func_33(float fParam0, float fParam1, var uParam2, var uParam3, int iParam4)
{
	unk_0x608B6701BEC4527A(uParam2);
	unk_0x8D23CF083336DA9B(uParam3);
	unk_0x2ED77CF10395403E(fParam0, fParam1, iParam4);
}

void func_34(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x1C00A83A6321F5E9(0.3f, 0.3f);
	unk_0x9806DF8CF9239C35(0, 0, 0, 0, 0);
	unk_0x872BE36490E5119C(1, 0, 0, 0, 205);
	unk_0xC1EE2E3E6B7523EE(1);
	unk_0x2626D8742682C5ED(0);
	unk_0x63EBA277B22A4C2D(iParam0, iParam1, iParam2, iParam3);
}

int func_35(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_41())
	{
		return 0;
	}
	if (func_36(iParam0, iParam1, bParam2, iParam3) == 1)
	{
		return 1;
	}
	return 0;
}

int func_36(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (unk_0xFF6891E21E7FC193(joaat("appsidetask")) > 0)
	{
		return 0;
	}
	if (func_39() == 0)
	{
		func_38();
		return 0;
	}
	func_37(Global_16830);
	Global_17000[Global_16830 /*9*/].f_1 = uParam1;
	Global_17000[Global_16830 /*9*/] = uParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_17000[Global_16830 /*9*/].f_8 = iParam3;
	}
	if (bParam2)
	{
	}
	return 1;
}

void func_37(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x0CE219089BDB83C5();
	uVar1 = unk_0x1B24A2CA27443F7B();
	uVar2 = unk_0x7C833E3C6EEE41E0();
	uVar3 = unk_0x2DA3502053F9E535();
	uVar4 = unk_0xEB4EA596232DA76E() + 1;
	uVar5 = unk_0xB99227ECC84A576C();
	Global_17000[iParam0 /*9*/].f_2 = uVar0;
	Global_17000[iParam0 /*9*/].f_2.f_1 = uVar1;
	Global_17000[iParam0 /*9*/].f_2.f_2 = uVar2;
	Global_17000[iParam0 /*9*/].f_2.f_3 = uVar3;
	Global_17000[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_17000[iParam0 /*9*/].f_2.f_5 = uVar5;
}

void func_38()
{
}

int func_39()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_17000[iVar0 /*9*/].f_8 == 0)
		{
			Global_16830 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_16830 = 3;
	Global_17000[Global_16830 /*9*/].f_2 = -1;
	Global_17000[Global_16830 /*9*/].f_2.f_1 = 0;
	Global_17000[Global_16830 /*9*/].f_2.f_2 = 0;
	Global_17000[Global_16830 /*9*/].f_2.f_3 = 0;
	Global_17000[Global_16830 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_17000[iVar0 /*9*/].f_8 == 0 || Global_17000[iVar0 /*9*/].f_8 == 1)
		{
			if (!func_40(Global_17000[iVar0 /*9*/].f_2, Global_17000[Global_16830 /*9*/].f_2))
			{
				Global_16830 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_16830 == 3)
	{
		return 0;
	}
	return 1;
}

int func_40(struct<6> Param0, struct<6> Param6)
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

int func_41()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2)
{
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_2(Global_99155.f_32499[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_43(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x56DCF5665F92F9BD(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x56DCF5665F92F9BD(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x56DCF5665F92F9BD(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

void func_44()
{
	unk_0x52F20802944F8DCE();
}

