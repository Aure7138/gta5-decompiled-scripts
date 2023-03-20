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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	struct<11> Local_55[50];
	int iLocal_606 = 0;
	char* sLocal_607 = NULL;
	int iLocal_608 = 0;
	int* iLocal_609 = NULL;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	char* sLocal_612[4] = { NULL, NULL, NULL, NULL };
	int iLocal_617 = 0;
	var uLocal_618 = 0;
	int iLocal_619 = 0;
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	bLocal_38 = true;
	bLocal_39 = true;
	iLocal_606 = 4;
	sLocal_607 = "id1_11_tunnel6_int";
	if (unk_0xC968670BFACE42D9(210))
	{
		func_73();
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("letterscraps")) > 1)
	{
		unk_0x1090044AD1DA76FA();
	}
	func_72(12);
	if (func_71(106) == 1)
	{
		func_70(12);
		func_67(287, 0, 0);
		func_66(106, 1);
		func_65(168, 0);
		func_73();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_64(unk_0xD80958FC74E988A6());
		switch (iLocal_40)
		{
			case 0:
				func_19();
				break;
			
			case 1:
				func_1();
				break;
		}
	}
}

void func_1()
{
	switch (iLocal_41)
	{
		case 0:
			if (unk_0x2C83A9DA6BFFC4F9(joaat("startup_positioning")) > 0)
			{
				iLocal_41 = 2;
			}
			else if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x5A859503B0C08678())
				{
					if (!func_18())
					{
						if (((!unk_0x7497D2CE2C30D24C() && !func_12()) && !func_11()) && !func_10())
						{
							iLocal_617 = 0;
							iLocal_611 = 0;
							sLocal_612[0] = "LETTERS_PAGE_ONE";
							sLocal_612[1] = "LETTERS_PAGE_TWO";
							sLocal_612[2] = "LETTERS_PAGE_THREE";
							sLocal_612[3] = "LETTERS_PAGE_FOUR";
							iLocal_610 = unk_0x11FE353CF9733E6F("LETTER_SCRAPS");
							while (!unk_0x85F01B8D5B90570E(iLocal_610))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							unk_0xF6E48914C7A8694E(iLocal_610, "SET_LETTER_TEXT");
							func_9(sLocal_612[0]);
							unk_0xC6796A8FFA375E53();
							unk_0xC6372ECD45D73BCD(true);
							func_6(1);
							func_5(1, 1, 1);
							unk_0x960C9FF8F616E41C("LETTERS_HELP2", false);
							unk_0x577D1284D6873711(true);
							unk_0xA0EBB943C300E693(false);
							iLocal_41 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			func_3();
			unk_0x6D3465A73092F0E6();
			unk_0xC6372ECD45D73BCD(true);
			unk_0x61BB1D9B3A95D802(1);
			if (iLocal_611 < 4)
			{
				if (!iLocal_617)
				{
					if (unk_0xF3A21BCD95725A4A(2, 190))
					{
						if (iLocal_611 >= 0 && iLocal_611 < 3)
						{
							iLocal_611++;
							unk_0xF6E48914C7A8694E(iLocal_610, "SET_LETTER_TEXT");
							func_9(sLocal_612[iLocal_611]);
							unk_0xC6796A8FFA375E53();
						}
						iLocal_617 = 1;
					}
					else if (unk_0xF3A21BCD95725A4A(2, 189))
					{
						if (iLocal_611 > 0 && iLocal_611 < 4)
						{
							iLocal_611 = (iLocal_611 - 1);
							unk_0xF6E48914C7A8694E(iLocal_610, "SET_LETTER_TEXT");
							func_9(sLocal_612[iLocal_611]);
							unk_0xC6796A8FFA375E53();
						}
						iLocal_617 = 1;
					}
					else if (unk_0x50F940259D3841E6(2, 202))
					{
						iLocal_41 = 2;
					}
				}
				else if (!func_2())
				{
					iLocal_617 = 0;
				}
				unk_0x0DF606929C105BE1(iLocal_610, 255, 255, 255, 255, 0);
			}
			else
			{
				iLocal_41 = 2;
			}
			break;
		
		case 2:
			unk_0xA0EBB943C300E693(true);
			unk_0x8DFCED7A656F8802(true);
			func_5(0, 1, 1);
			func_70(12);
			func_73();
			break;
	}
}

int func_2()
{
	if ((unk_0xF3A21BCD95725A4A(2, 190) || unk_0xF3A21BCD95725A4A(2, 189)) || unk_0xF3A21BCD95725A4A(2, 202))
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_4(0))
		{
			func_6(0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_2264, 2);
	}
}

int func_4(int iParam0)
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

int func_5(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && iParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_6(int iParam0)
{
	if (Global_14551)
	{
		func_8(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2264, 16);
	}
	if (unk_0x7497D2CE2C30D24C())
	{
		unk_0xD79DEEFB53455EBA(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 30);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 30);
	}
	if (!func_7())
	{
		Global_14393.f_1 = 3;
	}
}

int func_7()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_8(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_4(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x584FDFDA48805B86(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x693A5C6D6734085B(Global_14330);
		}
		else
		{
			unk_0x693A5C6D6734085B(Global_14321);
		}
	}
}

void func_9(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

bool func_10()
{
	return Global_1318684;
}

int func_11()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2434883[iVar1] != 0)
		{
			Global_1318685 = iVar1;
			iVar0 = 1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_95829)
	{
		if (func_13(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_13(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x0C515FAB3FF9EA92(&(Global_95829[iParam0 /*28*/]), "") && !unk_0xF22B6C47C6EAB066(&(Global_95829[iParam0 /*28*/])))
	{
		if (unk_0xA921AA820C25702F(Global_95829[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0xA921AA820C25702F(Global_95829[iParam0 /*28*/].f_27, 2))
			{
				return func_17(iVar0, &(Global_95829[iParam0 /*28*/]), &(Global_95829[iParam0 /*28*/].f_4), Global_95829[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_16(iVar0, &(Global_95829[iParam0 /*28*/]), &(Global_95829[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0xA921AA820C25702F(Global_95829[iParam0 /*28*/].f_27, 2))
		{
			return func_15(iVar0, &(Global_95829[iParam0 /*28*/]), Global_95829[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_14(iVar0, &(Global_95829[iParam0 /*28*/]));
		}
	}
	return 0;
}

bool func_14(int iParam0, char* sParam1)
{
	unk_0x0A24DA3A41B718F5(sParam1);
	return unk_0x10BDDBFC529428DD((1 + iParam0));
}

bool func_15(int iParam0, char* sParam1, int iParam2)
{
	unk_0x0A24DA3A41B718F5(sParam1);
	unk_0x03B504CF259931BC(iParam2);
	return unk_0x10BDDBFC529428DD((1 + iParam0));
}

bool func_16(int iParam0, char* sParam1, char* sParam2)
{
	unk_0x0A24DA3A41B718F5(sParam1);
	unk_0xC63CD5D2920ACBE7(sParam2);
	return unk_0x10BDDBFC529428DD((1 + iParam0));
}

bool func_17(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x0A24DA3A41B718F5(sParam1);
	unk_0xC63CD5D2920ACBE7(sParam2);
	unk_0x03B504CF259931BC(iParam3);
	return unk_0x10BDDBFC529428DD((1 + iParam0));
}

int func_18()
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	return 1;
}

void func_19()
{
	switch (iLocal_41)
	{
		case 0:
			func_62();
			func_61(&Local_42, 1, joaat("prop_ld_scrap"), "LETTERS_COLLECT");
			func_59(&Local_42, joaat("num_hidden_packages_0"), 705, 50);
			iLocal_41 = 1;
			iLocal_619 = 1;
			break;
		
		case 1:
			if (!func_58(14) && !unk_0xB16FCE9DDC7BA182())
			{
				if (func_21(&Local_42, &Local_55) || uLocal_618)
				{
					iLocal_41 = 2;
				}
				if (Local_42.f_1.f_4 == Local_42.f_1.f_3)
				{
					if (func_71(106) == 0)
					{
						func_66(106, 1);
						func_65(168, 0);
					}
				}
			}
			break;
		
		case 2:
			func_66(106, 1);
			func_65(168, 0);
			func_20(1);
			break;
	}
}

void func_20(int iParam0)
{
	iLocal_40 = iParam0;
	iLocal_41 = 0;
}

int func_21(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	bool bVar5;
	
	bVar5 = (!func_18() && !func_18());
	unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6());
	Var2 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = func_57(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (((((((uParam0->f_10 == 1 || uParam0->f_10 == 5) || uParam0->f_10 == 7) || uParam0->f_10 == 13) || uParam0->f_10 == 18) || uParam0->f_10 == 20) || uParam0->f_10 == 37) || uParam0->f_10 == 42)
				{
					func_55(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
				}
				else if (uParam0->f_10 == iLocal_606)
				{
					func_55(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
					if (unk_0xAFC1CA75AD4074D1((iParam1[uParam0->f_10 /*11*/])->f_1))
					{
						unk_0x3F6167F351168730((iParam1[uParam0->f_10 /*11*/])->f_1, sLocal_607);
					}
				}
				else
				{
					func_55(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			if (func_38(uParam0, iParam1, Var2))
			{
				if (bVar5)
				{
					if (!func_37(33))
					{
						func_34("LETTERS_FIRST", 1, 0, -1, 10000, 7, 0, 0, 0);
						func_33(33);
					}
				}
			}
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_68327)
		{
			func_22(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 1, &iLocal_608, &iLocal_609, "LETTERS_TITLE", "LETTERS_COLLECT");
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_22(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int* iParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_32(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*iParam5 = unk_0x11FE353CF9733E6F("MIDSIZED_MESSAGE");
				if (unk_0x85F01B8D5B90570E(*iParam5))
				{
					iVar0 = unk_0x430386FE9BF80B45();
					if (iParam3 == 6)
					{
						unk_0x67C540AA08E4A6F5(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", true);
					}
					else
					{
						unk_0x67C540AA08E4A6F5(iVar0, "COLLECTED", "HUD_AWARDS", true);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0xF6E48914C7A8694E(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x80338406F3475E55(sParam6);
				unk_0x362E2D3FE93A9959();
				unk_0x80338406F3475E55(sParam7);
				unk_0x03B504CF259931BC(func_24(iParam3));
				unk_0x362E2D3FE93A9959();
				unk_0xC6796A8FFA375E53();
				*uParam2 = unk_0x9CD27B0045628463();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0x9CD27B0045628463() - *uParam2) > 7000)
				{
					unk_0xF6E48914C7A8694E(*iParam5, "SHARD_ANIM_OUT");
					unk_0xC3D0841A0CC546A6(1);
					unk_0xD69736AAE04DB51A(0.33f);
					unk_0xC6796A8FFA375E53();
					*iParam4++;
				}
				else if (!func_23())
				{
					if (unk_0x85F01B8D5B90570E(*iParam5))
					{
						func_32(1);
						unk_0x0DF606929C105BE1(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x9CD27B0045628463() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_23())
				{
					if (unk_0x85F01B8D5B90570E(*iParam5))
					{
						func_32(1);
						unk_0x0DF606929C105BE1(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0x85F01B8D5B90570E(*iParam5))
				{
					unk_0x1D132D614DD86811(iParam5);
				}
				func_32(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_23()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_31(iParam0))
		{
			if (unk_0xA921AA820C25702F(Global_97173.f_8270.f_108, func_30(func_31(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0x767FBC2AC802EF3D(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0x767FBC2AC802EF3D(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0x767FBC2AC802EF3D(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_31(iParam0))
		{
			iVar2 = (func_29(iParam0) + iVar1);
			if (func_25(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_25(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar1 = func_27(iParam0, iParam1);
	uVar2 = func_26(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x10FE3F1B79F9B071(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	return iVar0;
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	return iVar0;
}

int func_28()
{
	return Global_1312736;
}

int func_29(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_30(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_31(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_32(int iParam0)
{
	if (Global_68334 != iParam0)
	{
		Global_68334 = iParam0;
	}
}

void func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_23602.f_150[iVar1]), iVar0);
	}
}

void func_34(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_35(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_35(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x0C515FAB3FF9EA92(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(&(Global_97173.f_23602[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97173.f_23602.f_145 < 9)
	{
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_4), sParam1, 16);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_8 = (unk_0x9CD27B0045628463() + iParam3);
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_9 = iParam5;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_11 = iParam6;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_12 = uParam2;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_13 = iParam7;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_14 = iParam8;
		Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = ((unk_0x9CD27B0045628463() + iParam3) + iParam4);
		}
		else
		{
			Global_97173.f_23602[Global_97173.f_23602.f_145 /*16*/].f_10 = -1;
		}
		Global_97173.f_23602.f_145++;
		func_36();
	}
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97173.f_23602.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[0])
			{
				Global_97173.f_23602.f_146[0] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[1])
			{
				Global_97173.f_23602.f_146[1] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA921AA820C25702F(Global_97173.f_23602[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97173.f_23602[iVar0 /*16*/].f_12 > Global_97173.f_23602.f_146[2])
			{
				Global_97173.f_23602.f_146[2] = Global_97173.f_23602[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xA921AA820C25702F(Global_97173.f_23602.f_150[iVar1], iVar0);
	}
	return 0;
}

int func_38(var uParam0, var uParam1, struct<3> Param2)
{
	int iVar0;
	
	iVar0 = uParam0->f_10;
	if ((uParam1[iVar0 /*11*/])->f_10)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0x80EC48E6679313F9((uParam1[iVar0 /*11*/])->f_1) || func_53((uParam1[iVar0 /*11*/])->f_1))
			{
				func_40(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (unk_0xAFC1CA75AD4074D1((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((unk_0xB7A628320EFF8E47(Param2, unk_0x225B8B35C88029B3((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_58(13)) || func_58(14))
		{
			func_39(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_39(var uParam0)
{
	if (unk_0xAFC1CA75AD4074D1(*uParam0))
	{
		unk_0x3288D8ACAECD2AB2(*uParam0);
	}
}

void func_40(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (func_29(*uParam0) + iParam2);
	func_39(&((uParam1[iParam2 /*11*/])->f_1));
	func_52(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_10 = 0;
	func_51(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_50(*uParam0, iParam2, 1);
	}
	unk_0x48B3886C1358D0D5(0, 200, 250);
	unk_0x9B5A68C6489E9909(uParam0->f_6, 1f);
	if (bLocal_39)
	{
		func_49(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_47(&(uParam0->f_1));
	}
	func_44();
	unk_0x79AB33F0FBFAC40C(iVar0);
	func_43(1, 0);
	func_41();
	uParam0->f_11 = 1;
}

int func_41()
{
	if (func_42(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_42(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

void func_43(int iParam0, int iParam1)
{
	Global_89823.f_7 = iParam0;
	Global_89823.f_8 = iParam1;
}

void func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0x767FBC2AC802EF3D(func_46(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_45(18, iVar0);
	}
	unk_0x767FBC2AC802EF3D(func_46(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_45(19, iVar0);
	}
	unk_0x767FBC2AC802EF3D(func_46(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_45(20, iVar0);
	}
	iVar2 = ((func_31(0) + func_31(1)) + func_31(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0xB3271D7AB655B441(joaat("percent_hidden_packages"), iVar3, true);
}

int func_45(int iParam0, int iParam1)
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
	iVar0 = unk_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_46(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_38)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_57(uParam0, iVar0))
		{
			iVar1++;
			func_48((uParam0->f_2 + iVar0), 1, -1, 1);
			if (bLocal_38)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_38)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_65(168, 0);
	}
}

int func_48(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_28();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_49(var uParam0, int iParam1)
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_38)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_57(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_48((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_38)
		{
		}
	}
	if (bLocal_38)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_65(168, 0);
	}
}

void func_50(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8270.f_122), iParam1);
			}
			else
			{
				unk_0xE80492A9AC099A93(&(Global_97173.f_8270.f_122), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8270.f_122.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0xE80492A9AC099A93(&(Global_97173.f_8270.f_122.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8270.f_125), iParam1);
			}
			else
			{
				unk_0xE80492A9AC099A93(&(Global_97173.f_8270.f_125), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8270.f_125.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0xE80492A9AC099A93(&(Global_97173.f_8270.f_125.f_1), (iParam1 - 32));
		}
	}
}

void func_51(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (bParam2)
		{
			unk_0x933D6A9EEC1BACD0(iParam0, iParam1);
		}
		else
		{
			unk_0xE80492A9AC099A93(iParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0x933D6A9EEC1BACD0(&(iParam0->f_1), (iParam1 - 32));
	}
	else
	{
		unk_0xE80492A9AC099A93(&(iParam0->f_1), (iParam1 - 32));
	}
}

void func_52(int* iParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		unk_0x4F7D8A9BFB0B43E9(*iParam0, false);
		unk_0x86A652570E5F25DD(iParam0);
	}
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xAFC1CA75AD4074D1(iParam0))
	{
		return 0;
	}
	if (func_54(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			iVar1 = unk_0x9F47B058362C84B5(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x225B8B35C88029B3(iParam0)) < (5f * 5f) || unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), unk_0x5099BC55630B25AE(iParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_54(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_55(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (!func_58(13) && !func_58(14))
			{
				if (!unk_0xAFC1CA75AD4074D1(uParam0->f_1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x963D27A58DF860AC(iParam1);
						while (!unk_0x98A4EB5D89A0C952(iParam1))
						{
							unk_0x963D27A58DF860AC(iParam1);
							unk_0x4EDE34FBADD967A6(0);
						}
						if (bParam3)
						{
							func_56(uParam0->f_3);
						}
						unk_0xA56F01F3765B93A0(uParam0->f_3, 2.5f, false, false, false, false);
						if (bParam4)
						{
							unk_0x933D6A9EEC1BACD0(&iVar0, 1);
							uParam0->f_1 = unk_0x891804727E0A98B7(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, iVar0, -1, iParam5, true, iParam1);
						}
						else
						{
							unk_0x933D6A9EEC1BACD0(&iVar0, 3);
							unk_0x933D6A9EEC1BACD0(&iVar0, 4);
							unk_0x933D6A9EEC1BACD0(&iVar0, 8);
							unk_0x933D6A9EEC1BACD0(&iVar0, 1);
							uParam0->f_1 = unk_0xFBA08C503DD5FA58(iParam2, uParam0->f_3, iVar0, -1, true, iParam1);
						}
						unk_0xE532F5D78798DAAB(iParam1);
					}
				}
			}
			if (unk_0xAFC1CA75AD4074D1(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_56(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = unk_0xB0F7F8663821D9C3(Param0);
	if (unk_0x26B0E73D7EAAF4D3(iVar0))
	{
		unk_0x2CA429C029CCF247(iVar0);
		while (!unk_0x6726BDCCC1932F0E(iVar0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x4EDE34FBADD967A6(0);
		unk_0x261CCE7EED010641(iVar0);
	}
}

bool func_57(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return unk_0xA921AA820C25702F(*uParam0, iParam1);
	}
	return unk_0xA921AA820C25702F(uParam0->f_1, (iParam1 - 32));
}

bool func_58(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_59(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_60(&(uParam0->f_1), iParam2, iParam3);
}

void func_60(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = uParam1;
	iParam0->f_3 = uParam2;
	if (bLocal_38)
	{
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_3)
	{
		if (func_25((iParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_51(iParam0, iVar0, 1);
			if (bLocal_38)
			{
			}
		}
		iVar0++;
	}
	iParam0->f_4 = iVar1;
	if (bLocal_38)
	{
	}
}

void func_61(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_62()
{
	int iVar0;
	
	Global_97173.f_8270.f_122.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Local_55[iVar0 /*11*/].f_3 = { func_63(iVar0, 0) };
		Local_55[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	iLocal_608 = 0;
	Local_55[0 /*11*/].f_9 = 179.4746f;
	Local_55[1 /*11*/].f_6 = { 0f, 0f, 198f };
	Local_55[2 /*11*/].f_9 = 104f;
	Local_55[3 /*11*/].f_9 = 321.5f;
	Local_55[4 /*11*/].f_6 = { 0f, 0f, 49f };
	Local_55[5 /*11*/].f_6 = { 0f, 0f, 286.5f };
	Local_55[6 /*11*/].f_9 = 278.0092f;
	Local_55[7 /*11*/].f_6 = { 5.3f, -1801.4f, 15.57f };
	Local_55[8 /*11*/].f_9 = 80.5f;
	Local_55[9 /*11*/].f_9 = 116f;
	Local_55[10 /*11*/].f_9 = 15f;
	Local_55[11 /*11*/].f_9 = 305.5f;
	Local_55[12 /*11*/].f_9 = 0f;
	Local_55[13 /*11*/].f_9 = 95f;
	Local_55[13 /*11*/].f_6 = { -0.91f, -0.03f, -0.81f };
	Local_55[14 /*11*/].f_9 = 40f;
	Local_55[15 /*11*/].f_9 = 40f;
	Local_55[16 /*11*/].f_9 = 40f;
	Local_55[17 /*11*/].f_9 = 90f;
	Local_55[17 /*11*/].f_6 = { -0.55f, 0f, 0.78f };
	Local_55[18 /*11*/].f_6 = { 0f, 0f, 0f };
	Local_55[19 /*11*/].f_9 = 40f;
	Local_55[20 /*11*/].f_6 = { 0f, 2f, 15f };
	Local_55[21 /*11*/].f_9 = 40f;
	Local_55[22 /*11*/].f_9 = 40f;
	Local_55[23 /*11*/].f_9 = 40f;
	Local_55[24 /*11*/].f_9 = 40f;
	Local_55[25 /*11*/].f_9 = 40f;
	Local_55[26 /*11*/].f_9 = 40f;
	Local_55[26 /*11*/].f_6 = { -6f, 10f, 0f };
	Local_55[27 /*11*/].f_9 = 40f;
	Local_55[27 /*11*/].f_6 = { -4.66f, 8.7f, 67.03f };
	Local_55[28 /*11*/].f_9 = 40f;
	Local_55[28 /*11*/].f_6 = { 1.54f, -8.31f, -19.94f };
	Local_55[29 /*11*/].f_9 = 40f;
	Local_55[30 /*11*/].f_9 = 40f;
	Local_55[30 /*11*/].f_6 = { 27.21f, -3.11f, -2.09f };
	Local_55[31 /*11*/].f_9 = 40f;
	Local_55[32 /*11*/].f_9 = 40f;
	Local_55[33 /*11*/].f_9 = 40f;
	Local_55[33 /*11*/].f_6 = { -9.89f, 0.3f, -0.01f };
	Local_55[34 /*11*/].f_9 = 40f;
	Local_55[35 /*11*/].f_9 = 40f;
	Local_55[36 /*11*/].f_9 = 40f;
	Local_55[36 /*11*/].f_6 = { 6.5f, -4.41f, -0.62f };
	Local_55[37 /*11*/].f_6 = { -9f, 5.3f, -2f };
	Local_55[38 /*11*/].f_9 = 40f;
	Local_55[38 /*11*/].f_6 = { -13.32f, -0.57f, -0.15f };
	Local_55[39 /*11*/].f_9 = 40f;
	Local_55[39 /*11*/].f_6 = { 4.71f, -21.26f, -0.06f };
	Local_55[40 /*11*/].f_9 = 40f;
	Local_55[41 /*11*/].f_9 = 80f;
	Local_55[42 /*11*/].f_6 = { -2f, 9f, 1f };
	Local_55[43 /*11*/].f_9 = 198f;
	Local_55[44 /*11*/].f_9 = 198f;
	Local_55[44 /*11*/].f_6 = { 0f, -20f, 0f };
	Local_55[45 /*11*/].f_9 = 198f;
	Local_55[46 /*11*/].f_9 = 198f;
	Local_55[47 /*11*/].f_9 = 198f;
	Local_55[48 /*11*/].f_9 = 198f;
	Local_55[49 /*11*/].f_9 = 198f;
}

Vector3 func_63(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034.274f, -3026.275f, 4.90197f;
			}
			else
			{
				return 1026.705f, -3026.052f, 13.3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040.979f, -2743.509f, 12.94983f;
			}
			else
			{
				return -1048.604f, -2734.218f, 12.8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93.9012f, -2711.314f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.511f, 7.74f;
			}
			break;
		
		case 3:
			return -917.6909f, -2527.384f, 22.3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509.742f, -2126.038f, 75.21973f;
			}
			else
			{
				return 1509.099f, -2120.551f, 75.61f;
			}
			break;
		
		case 6:
			return 76.0032f, -1970.475f, 20.1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1.82327f, -1732.614f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377.766f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.491f, -1404.374f, 1.7273f;
			}
			break;
		
		case 9:
			return 2864.808f, -1372.84f, 1.3151f;
			break;
		
		case 10:
			return -1035.812f, -1273.077f, 0.8919f;
			break;
		
		case 11:
			return -1821.136f, -1201.36f, 18.1698f;
			break;
		
		case 12:
			return 643.0116f, -1035.65f, 35.8891f;
			break;
		
		case 13:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243.104f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.766f, -506.7138f, 37.6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		
		case 16:
			return 1095.953f, -210.4642f, 54.9477f;
			break;
		
		case 17:
			return -1724.522f, -196f, 57.2387f;
			break;
		
		case 18:
			return 265.374f, -199.546f, 60.795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020.475f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347.5277f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		
		case 21:
			return 1052.248f, 167.611f, 87.7406f;
			break;
		
		case 22:
			return -2303.798f, 217.4301f, 166.6017f;
			break;
		
		case 23:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688.1073f, 1204.671f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.928f, 344.3322f;
			}
			break;
		
		case 25:
			return -1548.763f, 1380.173f, 125.3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.129f, 356.613f;
			}
			break;
		
		case 27:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		
		case 28:
			return -594.38f, 2092f, 130.57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069.213f, 2160.988f, 1.1327f;
			}
			else
			{
				return 3063.583f, 2212.63f, 2.5863f;
			}
			break;
		
		case 30:
			return 180.21f, 2263.83f, 91.87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.115f, 48.43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380.212f, 2655.176f, 0.832f;
			}
			else
			{
				return -2379.948f, 2656.953f, 1.4906f;
			}
			break;
		
		case 33:
			return -861.38f, 2753.3f, 12.867f;
			break;
		
		case 34:
			return -289.0195f, 2848.853f, 53.331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288.8409f, 2871.912f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297.378f, 2988.71f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		
		case 37:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		
		case 38:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3.51812f, 4332.451f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		
		case 40:
			return 1336.737f, 4307.2f, 37.1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007.103f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		
		case 42:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366.099f, 5182.461f, 0.68317f;
			}
			else
			{
				return 3436.453f, 5176.911f, 6.386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		
		case 45:
			return 444.6518f, 5571.781f, 780.1888f;
			break;
		
		case 46:
			return -402.9948f, 6319.279f, 31.2256f;
			break;
		
		case 47:
			return 1439.599f, 6335.208f, 22.9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466.109f, 6552.266f, 12.95773f;
			}
			else
			{
				return 1469.632f, 6552.174f, 13.6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66.19278f, 6668.888f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.198f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_64(int iParam0)
{
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	return !unk_0x5F9532F3B5CC2551(iParam0);
}

void func_65(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_97173.f_6839[iParam0] = 1;
	Global_97173.f_6839.f_236[iParam0] = (unk_0x9CD27B0045628463() + iParam1);
}

void func_66(int iParam0, int iParam1)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return;
	}
	if (Global_97173.f_7311.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_97173.f_7311.f_99.f_58[iParam0] = iParam1;
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_48((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97173.f_8415[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97173.f_8415[iParam0 /*12*/].f_6 == 11 || Global_97173.f_8415[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97173.f_8415[iParam0 /*12*/].f_5 = 1;
		Global_97173.f_8415[iParam0 /*12*/].f_10 = iParam1;
		Global_97173.f_8415[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_68();
	}
}

void func_68()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_96909 = 0;
	Global_96910 = 0;
	Global_96911 = 0;
	Global_96912 = 0;
	Global_96913 = 0;
	Global_96914 = 0;
	Global_96915 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97173.f_8415.f_3853;
	Global_97173.f_8415.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97173.f_8415[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97173.f_8415[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_96909++;
					fVar1 = (fVar1 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_96910++;
					fVar2 = (fVar2 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_96911++;
					fVar3 = (fVar3 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_96912++;
					fVar4 = (fVar4 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_96913++;
					fVar5 = (fVar5 + (Global_97173.f_8415[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_96914++;
					fVar6 = (fVar6 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_96915++;
					fVar7 = (fVar7 + Global_97173.f_8415[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_96892 > 0)
	{
		if (Global_96909 == Global_96892)
		{
			fVar1 = 55f;
		}
	}
	if (Global_96893 > 0)
	{
		if (Global_96910 == Global_96893)
		{
			fVar2 = 10f;
		}
	}
	if (Global_96894 > 0)
	{
		if (Global_96911 == Global_96894)
		{
			fVar3 = 0f;
		}
	}
	if (Global_96895 > 0)
	{
		if (Global_96912 == Global_96895)
		{
			fVar4 = 10f;
		}
	}
	if (Global_96896 > 0)
	{
		if (((Global_96913 == Global_96896 || (Global_96896 * 10 / Global_96913) < 41) || Global_96913 > Global_96899) || Global_96913 == Global_96899)
		{
			if (!unk_0xA921AA820C25702F(Global_97173.f_8415.f_3856, 14))
			{
				if (Global_96913 == Global_96896)
				{
					unk_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_96896, 0);
					unk_0x933D6A9EEC1BACD0(&(Global_97173.f_8415.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_96897 > 0)
	{
		if (Global_96914 == Global_96897)
		{
			fVar6 = 15f;
		}
	}
	if (Global_96898 > 0)
	{
		if (Global_96915 == Global_96898)
		{
			fVar7 = 5f;
		}
	}
	Global_97173.f_8415.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_96913 > Global_96899 || Global_96913 == Global_96899)
	{
		iVar9 = Global_96899;
	}
	else
	{
		iVar9 = Global_96913;
	}
	unk_0xB3271D7AB655B441(joaat("num_missions_completed"), Global_96909, true);
	unk_0xB3271D7AB655B441(joaat("num_missions_available"), Global_96892, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_completed"), Global_96910, true);
	unk_0xB3271D7AB655B441(joaat("num_minigames_available"), Global_96893, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_completed"), Global_96911, true);
	unk_0xB3271D7AB655B441(joaat("num_oddjobs_available"), Global_96894, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_completed"), Global_96912, true);
	unk_0xB3271D7AB655B441(joaat("num_rndpeople_available"), Global_96895, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_completed"), iVar9, true);
	unk_0xB3271D7AB655B441(joaat("num_rndevents_available"), Global_96899, true);
	unk_0xB3271D7AB655B441(joaat("num_misc_completed"), (Global_96915 + Global_96914), true);
	unk_0xB3271D7AB655B441(joaat("num_misc_available"), (Global_96898 + Global_96897), true);
	Global_96916 = (Global_96909 * 100 / Global_96892);
	Global_96918 = ((Global_96911 + Global_96910) * 100 / (Global_96894 + Global_96893));
	Global_96917 = ((Global_96912 + iVar9) * 100 / (Global_96895 + Global_96899));
	Global_96919 = ((Global_96914 + Global_96915) * 100 / (Global_96897 + Global_96898));
	unk_0x4851997F37FE9B3C(joaat("total_progress_made"), Global_97173.f_8415.f_3853, true);
	unk_0xB3271D7AB655B441(joaat("percent_story_missions"), Global_96916, true);
	unk_0xB3271D7AB655B441(joaat("percent_ambient_missions"), Global_96917, true);
	unk_0xB3271D7AB655B441(joaat("percent_oddjobs"), Global_96918, true);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853))
	{
		func_45(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_69() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_41();
				}
			}
		}
	}
}

int func_69()
{
	return Global_24444;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[iVar0], iVar1))
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_7311.f_99.f_214[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_58[iParam0];
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x933D6A9EEC1BACD0(&(Global_97173.f_7311.f_99.f_214[iVar0]), iVar1);
	return 1;
}

void func_73()
{
	int iVar0;
	
	unk_0xC6372ECD45D73BCD(false);
	unk_0x1D132D614DD86811(&iLocal_610);
	unk_0x577D1284D6873711(false);
	Global_97173.f_8270.f_122.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_55.f_0)
	{
		func_52(&(Local_55[iVar0 /*11*/].f_2));
		func_39(&(Local_55[iVar0 /*11*/].f_1));
		Local_55[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (func_71(106) == 1)
	{
		func_66(106, 1);
		func_75();
		func_70(12);
	}
	else if (func_74(&(Local_42.f_1)))
	{
		func_66(106, 1);
		func_75();
		func_70(12);
	}
	else
	{
		func_72(12);
	}
	if (iLocal_619)
	{
		unk_0xE532F5D78798DAAB(Local_42.f_7);
	}
	unk_0x1090044AD1DA76FA();
}

bool func_74(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

void func_75()
{
	int iVar0;
	
	iVar0 = func_76(64);
	Global_2408752[iVar0 /*83*/] = 64;
	StringCopy(&(Global_2408752[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2408752[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2408752[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

