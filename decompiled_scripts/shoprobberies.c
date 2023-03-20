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
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
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
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	bool bLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<487> Local_67 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	bool bLocal_573 = 0;
	int iLocal_574 = 0;
	bool bLocal_575 = 0;
	int iLocal_576 = 0;
	char* sLocal_577 = NULL;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	bool bLocal_581 = 0;
	int iLocal_582 = 0;
	struct<33> Local_583 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_616 = 1;
	int iLocal_617[3] = { 0, 0, 0 };
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int* iLocal_634 = NULL;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	int* iLocal_637 = NULL;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	struct<3> Var13;
	struct<3> Var16;
	int iVar19;
	
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
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_48 = { 500f, 500f, 500f };
	iLocal_629 = 3;
	if (unk_0xC968670BFACE42D9(98))
	{
		func_302();
	}
	if (func_299(0))
	{
		bLocal_573 = true;
		iLocal_570 = unk_0x462E0DB9B137DC5F();
	}
	if (Global_3)
	{
		unk_0x8DFCED7A656F8802(true);
		unk_0x1090044AD1DA76FA();
	}
	if (func_298(14))
	{
		unk_0x8DFCED7A656F8802(true);
		unk_0x1090044AD1DA76FA();
	}
	func_297(&Local_583, 3);
	func_288(&uScriptParam_0);
	Var0 = { 24.088f, -1345.623f, 29.5082f };
	Var3 = { 24.94562f, -1344.954f, 29.49f };
	Var6 = { Var0 - Var3 };
	Var6 = { Var3 - Var0 };
	fVar12 = 147.297f;
	Var9 = { -1228.443f, -905.3416f, 13.523f };
	Var6 = { Var9 - Vector(12.31f, -907.8234f, -1222.331f) };
	Var6 = { func_287(Var6, fVar12) };
	if ((((func_286() && !func_285()) || Global_97117) || Global_24446) || Global_97162 != -1)
	{
		if (func_286() && !func_285())
		{
		}
		else if (Global_97117)
		{
		}
		else if (Global_24446)
		{
		}
		else if (Global_97162 != -1)
		{
		}
		if (!func_284())
		{
			func_282(&(Local_67.f_470), 64);
			func_280(1);
		}
		else
		{
			func_280(0);
		}
		func_302();
	}
	else if (Global_97173.f_18256[iLocal_567] > 0)
	{
		if (func_279())
		{
			func_277(iLocal_567, Local_67.f_486.f_9.f_2, &Var13, &Var16);
			unk_0xBE31FD6CE464AC59(Local_67.f_181, 15f, 0);
			iLocal_566 = unk_0x1B5C85C612E5256E(Var13, Var16, false, true, true, true);
			if (!func_284())
			{
				func_280(1);
			}
			else
			{
				func_280(0);
				func_275(&(Local_67.f_470), 512);
			}
			iLocal_66 = 2;
		}
		else
		{
			func_280(0);
		}
		if (!func_274())
		{
			iLocal_63 = 10;
			iVar19 = unk_0xD53343AA4FB7DD28(0, 3);
			if (iVar19 == 0)
			{
				Local_67.f_2.f_12 = 1;
			}
			else
			{
				Local_67.f_2.f_12 = 0;
			}
		}
	}
	else
	{
		func_280(0);
	}
	while (true)
	{
		func_271(&Local_583);
		if (func_266())
		{
			func_302();
		}
		if (!bLocal_573)
		{
			if (func_299(0))
			{
				func_265();
				bLocal_573 = true;
			}
		}
		switch (iLocal_66)
		{
			case 0:
				func_236();
				break;
			
			case 1:
				func_5();
				break;
			
			case 2:
				if (func_284())
				{
					if (!unk_0x4D79439A6B55AC67())
					{
						if (!func_3("SHOP_CLOSED", func_4(iLocal_567)))
						{
							unk_0x60296AF4BA14ABC5(false);
							func_2("SHOP_CLOSED", func_4(iLocal_567));
						}
					}
				}
				else
				{
					if (func_3("SHOP_CLOSED", func_4(iLocal_567)))
					{
						unk_0x8DFCED7A656F8802(true);
					}
					if (func_1(Local_67.f_470, 512))
					{
						func_280(1);
						func_282(&(Local_67.f_470), 512);
					}
				}
				break;
			
			case 3:
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_1(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_2(char* sParam0, char* sParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0xC63CD5D2920ACBE7(sParam1);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

bool func_3(char* sParam0, char* sParam1)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	unk_0xC63CD5D2920ACBE7(sParam1);
	return unk_0x10BDDBFC529428DD(0);
}

char* func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "SHR_GAS";
		
		case 5:
			return "SHR_LIQ1";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "SHR_LIQ2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "SHR_CONV";
		
		case -2:
			return "SHR_ACE";
		
		default:
	}
	return "";
}

void func_5()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_233();
	func_230();
	func_225();
	func_219();
	func_201();
	func_179();
	func_173();
	func_66();
	func_65();
	func_64();
	func_54();
	func_53();
	func_50();
	if (!func_49())
	{
		func_36();
		func_26();
	}
	if (unk_0x7239B21A38F536BA(Local_67.f_0))
	{
		unk_0x3A87E44BB9A01D54(Local_67.f_0, &iVar0, true);
	}
	else
	{
		return;
	}
	bLocal_575 = false;
	if (!unk_0x84A2DD9AC37C35C1(Local_67.f_2) && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true))
		{
			if ((iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare"))
			{
				if ((((unk_0x2E397FD2ECD37C87(unk_0x4F8644AF03D0E0D6()) && unk_0xD71649DB0A545AA3(unk_0xD80958FC74E988A6(), Local_67.f_2, 45f)) && unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), Local_67.f_2, 5f, 5f, 2f, false, true, 0)) || unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), Local_67.f_2)) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), Local_67.f_2))
				{
					if (!func_25() && !unk_0x5E346D934122613F())
					{
						bLocal_575 = true;
					}
				}
			}
		}
	}
	if (bLocal_575)
	{
		if (!iLocal_576 && func_1(Local_67.f_470, 4))
		{
			iVar2 = func_24(unk_0xD80958FC74E988A6());
			iVar3 = unk_0xC3287EE3050FB74C(iVar2);
			if (iVar3 == joaat("GROUP_PISTOL"))
			{
				sLocal_577 = "hold_up_head_additive_pistol";
				unk_0xEA47FE3719165B94(unk_0xD80958FC74E988A6(), "mp_am_hold_up", sLocal_577, 8f, -8f, -1, 305, 0f, false, false, false);
			}
			else if ((((iVar3 == joaat("GROUP_MG") || iVar3 == joaat("GROUP_RIFLE")) || iVar3 == joaat("GROUP_SHOTGUN")) || iVar3 == joaat("GROUP_SNIPER")) || iVar3 == joaat("GROUP_SMG"))
			{
				sLocal_577 = "hold_up_head_additive_rifle";
				unk_0xEA47FE3719165B94(unk_0xD80958FC74E988A6(), "mp_am_hold_up", sLocal_577, 8f, -8f, -1, 305, 0f, false, false, false);
			}
			else
			{
				sLocal_577 = "";
			}
			iLocal_576 = 1;
		}
	}
	else if (iLocal_576)
	{
		if (!unk_0xCA042B6957743895(sLocal_577))
		{
			if (unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "mp_am_hold_up", sLocal_577, 3))
			{
				unk_0x97FF36A1D40EA00A(unk_0xD80958FC74E988A6(), "mp_am_hold_up", sLocal_577, -8f);
			}
		}
		iLocal_576 = 0;
	}
	switch (iLocal_63)
	{
		case 0:
			if (func_284())
			{
				if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					iLocal_63 = 12;
				}
				else
				{
					iLocal_51 = 2;
					iLocal_58 = 1;
					if (!unk_0x5F9532F3B5CC2551(Local_67.f_0))
					{
						if (!unk_0x997ABD671D25CA0B(Local_67.f_0, false))
						{
							if ((func_24(Local_67.f_0) == joaat("weapon_unarmed") || func_24(Local_67.f_0) == joaat("object")) || func_24(Local_67.f_0) == joaat("weapon_briefcase"))
							{
								iLocal_61 = 1;
								iLocal_63 = 1;
							}
							else if (!func_1(Local_67.f_470, 1))
							{
								if (iVar0 == joaat("weapon_bat"))
								{
									iLocal_61 = 2;
									iLocal_63 = 5;
								}
								else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
								{
									iLocal_61 = 3;
									iLocal_63 = 5;
								}
								else if (iVar0 == joaat("weapon_stickybomb"))
								{
									iLocal_61 = 4;
									iLocal_63 = 5;
								}
								else
								{
									iLocal_63 = 2;
								}
								func_275(&(Local_67.f_470), 1);
							}
						}
						else
						{
							iLocal_63 = 3;
						}
					}
				}
			}
			else if (func_23())
			{
				iLocal_51 = 2;
				iLocal_63 = 3;
			}
			else if (!func_284() && func_20(Local_67.f_0, Local_67.f_2, &(Local_67.f_451), 1))
			{
				iLocal_63 = 12;
			}
			break;
		
		case 1:
			if (!func_1(Local_67.f_470, 2))
			{
				iLocal_52 = 1;
				iLocal_57 = 1;
				func_275(&(Local_67.f_470), 2);
			}
			iLocal_63 = 5;
			break;
		
		case 2:
			iLocal_52 = 5;
			iLocal_57 = 3;
			iLocal_63 = 5;
			break;
		
		case 3:
			iLocal_52 = 6;
			iLocal_57 = 4;
			iLocal_63 = 5;
			break;
		
		case 5:
			if (!func_284() && !func_1(Local_67.f_470, 1))
			{
				iLocal_63 = 0;
			}
			break;
		
		case 6:
			if (iLocal_52 >= 13)
			{
				if (Local_67.f_2.f_12)
				{
					if (!func_19())
					{
						iLocal_63 = 7;
					}
				}
				else
				{
					iLocal_63 = 8;
				}
				iLocal_53 = 1;
			}
			break;
		
		case 7:
			if (func_1(Local_67.f_470, 256))
			{
				func_18();
				unk_0xE80492A9AC099A93(&Global_86040, 3);
				iLocal_63 = 13;
			}
			break;
		
		case 8:
			if (func_1(Local_67.f_470, 16))
			{
				if (func_16())
				{
					if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
					{
						if (!unk_0x47E4E977581C5B55(Local_67.f_2))
						{
							if (func_284())
							{
								if (Local_67.f_486 >= 0)
								{
									if (unk_0x25D39B935A038A26(Local_67.f_486))
									{
										unk_0xEA47FE3719165B94(Local_67.f_2, Local_67.f_486.f_1, "handsup_base", 4f, -8f, -1, 1, 0f, false, false, false);
										iLocal_59 = 10;
									}
								}
							}
							else
							{
								unk_0x22B0D0E37CCB840D(Local_67.f_2, unk_0xD80958FC74E988A6(), 100f, -1, false, false);
								iLocal_59 = 10;
							}
						}
					}
					unk_0xE80492A9AC099A93(&Global_86040, 3);
					iLocal_63 = 13;
				}
			}
			break;
		
		case 9:
			func_15(2, 0);
			iLocal_60 = 7;
			if (iLocal_64 == 1)
			{
				iLocal_63 = 8;
			}
			else
			{
				iLocal_63 = 13;
			}
			break;
		
		case 10:
			if (func_284())
			{
				iLocal_63 = 11;
			}
			break;
		
		case 11:
			if (!func_14(&(Local_67.f_477)))
			{
				if (!Local_67.f_2.f_12)
				{
					iLocal_52 = 28;
				}
				else
				{
					iLocal_52 = 29;
				}
				func_11(&(Local_67.f_477));
			}
			else if (func_8(&(Local_67.f_477)) > 5f)
			{
				func_15(1, 0);
				iLocal_63 = 13;
			}
			else if (func_8(&(Local_67.f_477)) > 1.5f)
			{
				if (!func_19())
				{
					if (iLocal_59 != 12)
					{
						iLocal_59 = 12;
						if (!Local_67.f_2.f_12)
						{
							func_7();
						}
						else
						{
							func_18();
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_14(&(Local_67.f_477)))
			{
				func_6();
				iLocal_52 = 30;
				iLocal_59 = 12;
				func_11(&(Local_67.f_477));
			}
			else if (func_8(&(Local_67.f_477)) > 3f)
			{
				iLocal_63 = 13;
			}
			break;
		
		case 13:
			break;
	}
}

void func_6()
{
	int iVar0;
	
	if (unk_0x5F9532F3B5CC2551(Local_67.f_2))
	{
		return;
	}
	unk_0xE8854A4326B9E12B(&iVar0);
	unk_0x15D3A79D4E44B913(0, Local_67.f_2.f_6, 2f, -1, 0.25f, false, Local_67.f_2.f_9);
	unk_0x3EB1FE9E8E908E15(0, -1);
	unk_0x39E72BC99E6360CB(iVar0);
	unk_0x5ABA3986D90D8A3B(Local_67.f_2, iVar0);
	unk_0x3841422E9C488D8C(&iVar0);
	func_275(&(Local_67.f_470), 128);
}

void func_7()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
	{
		unk_0x3841422E9C488D8C(&iLocal_565);
		unk_0xE8854A4326B9E12B(&iLocal_565);
		unk_0x3EB1FE9E8E908E15(0, 5000);
		unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 100f, -1, false, false);
		unk_0x39E72BC99E6360CB(iLocal_565);
		unk_0x5ABA3986D90D8A3B(Local_67.f_2, iLocal_565);
	}
}

float func_8(int* iParam0)
{
	if (func_14(iParam0))
	{
		if (func_10(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_9() - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_9()
{
	int iVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		iVar0 = unk_0x7A5487FE9FAA6B48();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9CD27B0045628463()) / 1000f);
}

bool func_10(int* iParam0)
{
	return unk_0xA921AA820C25702F(*iParam0, 2);
}

void func_11(int* iParam0)
{
	if (!func_14(iParam0))
	{
		func_12(iParam0);
	}
}

void func_12(int* iParam0)
{
	func_13(iParam0, 0f);
}

void func_13(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_9() - fParam1);
	unk_0x933D6A9EEC1BACD0(iParam0, 1);
	unk_0xE80492A9AC099A93(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_14(int* iParam0)
{
	return unk_0xA921AA820C25702F(*iParam0, 1);
}

void func_15(int iParam0, bool bParam1)
{
	if (unk_0xE28E54788CE8F12D(unk_0xA5EDC40EF369B48D()) < iParam0 && (!bLocal_573 || (bLocal_573 && iParam0 < iLocal_570)))
	{
		unk_0x39FF19C64EF7DA5B(unk_0xA5EDC40EF369B48D(), iParam0, false);
		unk_0xE0A7D1E497FFCD6F(unk_0xA5EDC40EF369B48D(), false);
		Local_67.f_158 = 1;
		if (bParam1)
		{
			unk_0xAA5F02DB48D704B9(iParam0);
		}
		else
		{
			unk_0xAA5F02DB48D704B9(5);
		}
	}
	else if (bLocal_573 && iParam0 > iLocal_570)
	{
	}
}

int func_16()
{
	func_17();
	switch (iLocal_55)
	{
		case 0:
			Local_67.f_486 = unk_0x8C18E0F9080ADD73(Local_67.f_486.f_6, Local_67.f_486.f_9, 2);
			if (!unk_0x3317DEDB88C95038(Local_67.f_2, true))
			{
				if (!unk_0x5F9532F3B5CC2551(Local_67.f_28))
				{
					if (Local_67.f_486 >= 0)
					{
						unk_0x1A9205C1B9EE827F(Local_67.f_28, true, false);
						unk_0x1718DE8E3F2823CA(Local_67.f_28, true);
						unk_0xEEA929141F699854(Local_67.f_2, Local_67.f_486, Local_67.f_486.f_1, Local_67.f_486.f_3, 8f, -1.5f, 25, 0, 1000f, 0);
						unk_0xC77720A12FE14A86(Local_67.f_28, Local_67.f_486, Local_67.f_486.f_4, Local_67.f_486.f_1, 1000f, 8f, 137, 1000f);
						unk_0xC77720A12FE14A86(Local_67.f_96.f_1, Local_67.f_486, Local_67.f_486.f_5, Local_67.f_486.f_1, 1000f, 8f, 137, 1000f);
					}
					else
					{
						return 1;
					}
					iLocal_56 = 1;
					iLocal_59 = 5;
					iLocal_55 = 2;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			if (Local_67.f_486 >= 0)
			{
				if (unk_0x25D39B935A038A26(Local_67.f_486))
				{
					if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) > 0.478f)
					{
						if (!unk_0x5F9532F3B5CC2551(Local_67.f_28))
						{
							unk_0xC77720A12FE14A86(Local_67.f_28, Local_67.f_486, Local_67.f_486.f_4, Local_67.f_486.f_1, 1000f, 8f, 137, 1000f);
							Local_67.f_28.f_7 = { Local_67.f_28.f_7, Local_67.f_28.f_7.f_1, (Local_67.f_28.f_7.f_2 + 0.2f) };
						}
						iLocal_55 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_67.f_486 >= 0)
			{
				if (unk_0x25D39B935A038A26(Local_67.f_486))
				{
					if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) > 0.447f)
					{
						if (!unk_0x5F9532F3B5CC2551(Local_67.f_28))
						{
							if (!unk_0x47D6F43D77935C75(Local_67.f_28))
							{
								unk_0xEA1C610A04DB6BBB(Local_67.f_28, 1);
							}
						}
					}
					if (Local_67.f_467)
					{
						if (unk_0xD80932D577274D40(Local_67.f_486) != 1.45f)
						{
							unk_0xB6C49F8A5E295A5D(Local_67.f_486, 1.45f);
						}
					}
					if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) > 0.894f)
					{
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_28))
			{
				if (Local_67.f_486 >= 0)
				{
					if (unk_0x25D39B935A038A26(Local_67.f_486))
					{
						if (iLocal_54 >= 4)
						{
							if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) < 0.871f)
							{
								iLocal_56 = 4;
							}
							unk_0x43D3807C077261E3(Local_67.f_28, -16f, true);
							unk_0x710311ADF0E20730(Local_67.f_28);
						}
					}
				}
			}
			iLocal_55 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_17()
{
	if (Local_67.f_486 >= 0)
	{
		if (unk_0x25D39B935A038A26(Local_67.f_486))
		{
			if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) >= 0f)
			{
				if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) < 0.117f)
				{
					iLocal_54 = 1;
				}
				else if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) < 0.154f)
				{
					iLocal_54 = 2;
				}
				else if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) < 0.477f)
				{
					iLocal_54 = 3;
				}
				else if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) < 0.487f)
				{
					iLocal_54 = 4;
				}
				else if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) < 0.809f)
				{
					iLocal_54 = 5;
				}
				else if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) < 0.871f)
				{
					iLocal_54 = 6;
				}
				else if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) < 0.894f)
				{
					iLocal_54 = 7;
				}
				else if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) < 0.999f)
				{
					iLocal_54 = 8;
				}
				else if (iLocal_54 == 9)
				{
				}
			}
			else
			{
				iLocal_54 = 0;
			}
		}
		else if (iLocal_54 == 0)
		{
		}
	}
	else
	{
		iLocal_54 = 0;
	}
}

void func_18()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
	{
		unk_0xBF0FD6E56C964FCB(Local_67.f_2, joaat("weapon_pumpshotgun"), 12, false, true);
		unk_0xADF692B254977C0C(Local_67.f_2, joaat("weapon_pumpshotgun"), false);
		unk_0xC80A74AC829DDD92(Local_67.f_2, -2065892691);
		unk_0xE8854A4326B9E12B(&(Local_67.f_2.f_22));
		unk_0x9B53BB6E8943AF53(0, Local_67.f_0, 2000, false);
		unk_0x08DA95E8298AE772(0, Local_67.f_0, 4000, joaat("FIRING_PATTERN_FULL_AUTO"));
		unk_0x7BF835BB9E2698C8(0, 25f, 0);
		unk_0x39E72BC99E6360CB(Local_67.f_2.f_22);
		unk_0x5ABA3986D90D8A3B(Local_67.f_2, Local_67.f_2.f_22);
	}
}

int func_19()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	if (unk_0x3F2023999AD51C1F(Var0, 4f, true))
	{
		return 1;
	}
	if (unk_0x9870ACFB89A90995(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), true, true))
	{
		return 1;
	}
	if (unk_0x475768A975D5AD17(iParam0, 2))
	{
		if (unk_0x34616828CD07F1A1(iParam0))
		{
			if (unk_0x20B60995556D004F(iParam1, unk_0x3FEF770D40960D5A(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0xD71649DB0A545AA3(unk_0x04A2A40C73395041(iParam1), iParam0, 120f) && unk_0xFCDFF7B72D23A1AC(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x997ABD671D25CA0B(unk_0x04A2A40C73395041(iParam1), false))
			{
				iVar3 = unk_0x9A9112A0FE9A4713(unk_0x04A2A40C73395041(iParam1), false);
			}
			if (unk_0xC70B5FAE151982D8(iParam0) || func_21(iVar3))
			{
				if (unk_0x20B60995556D004F(iParam1, unk_0x3FEF770D40960D5A(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0xD71649DB0A545AA3(unk_0x04A2A40C73395041(iParam1), iParam0, 120f) && unk_0xFCDFF7B72D23A1AC(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x5270A8FBC098C3F8((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (unk_0xBB40DD2270B65366(iParam0, -1) != 0)
			{
				if (unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar0, true))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_22(unk_0xD80958FC74E988A6(), iParam0, 1) < 40f)
						{
							if (unk_0x2975C866E6713290(unk_0x4F8644AF03D0E0D6(), &iVar1))
							{
								if ((unk_0x6AC7003FA6E5575E(iVar1) && unk_0x4B53F92932ADFAC0(iVar1) == iParam0) || (unk_0x524AC5ECEA15343E(iVar1) && unk_0x04A2A40C73395041(iVar1) == unk_0xBB40DD2270B65366(iParam0, -1)))
								{
									if ((unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()) && unk_0xF3A21BCD95725A4A(0, 24)) || (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false) && unk_0xF3A21BCD95725A4A(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_22(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	else
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var3, bParam2);
}

int func_23()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_0))
	{
		if (unk_0x997ABD671D25CA0B(Local_67.f_0, false))
		{
			iVar1 = unk_0x9A9112A0FE9A4713(Local_67.f_0, false);
			bVar0 = true;
		}
		else if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
		{
			iVar1 = unk_0xB6997A7EB3F5C8C0();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0x5F9532F3B5CC2551(iVar1))
		{
			if (unk_0x51210CED3DA1C78A(iVar1, Local_67.f_186, Local_67.f_189, Local_67.f_192, false, true, 0))
			{
				return 1;
			}
			else if (unk_0x51210CED3DA1C78A(iVar1, Local_67.f_200, Local_67.f_203, Local_67.f_206, false, true, 0))
			{
				return 1;
			}
			else if (unk_0x51210CED3DA1C78A(iVar1, Local_67.f_207, Local_67.f_210, Local_67.f_213, false, true, 0))
			{
				return 1;
			}
			else if (Local_67.f_199 != -1f)
			{
				if (unk_0x51210CED3DA1C78A(iVar1, Local_67.f_193, Local_67.f_196, Local_67.f_199, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0x3A87E44BB9A01D54(iParam0, &uVar0, true);
	return uVar0;
}

int func_25()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	switch (iLocal_51)
	{
		case 0:
			break;
		
		case 2:
			if (!func_49())
			{
				if (func_284())
				{
					if (!func_1(Global_97173.f_18256.f_20, 1))
					{
						switch (func_35("SHR_HOLDUP_1"))
						{
							case 2:
								func_33("SHR_HOLDUP_1", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_275(&(Global_97173.f_18256.f_20), 1);
								iLocal_51 = 1;
								break;
						}
						if (iLocal_64 > 0)
						{
							if (func_32("SHR_HOLDUP_1"))
							{
								func_28("SHR_HOLDUP_1", 1);
								iLocal_51 = 4;
							}
						}
						if ((unk_0x9CD27B0045628463() % 1000) < 50)
						{
						}
					}
					else
					{
						iLocal_51 = 1;
					}
				}
				else if (func_32("SHR_HOLDUP_1"))
				{
					func_28("SHR_HOLDUP_1", 1);
				}
			}
			break;
		
		case 1:
			if (!func_49())
			{
				if (func_284())
				{
					if (!func_1(Global_97173.f_18256.f_20, 2))
					{
						switch (func_35("SHR_SNK_TUT"))
						{
							case 2:
								func_33("SHR_SNK_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_275(&(Global_97173.f_18256.f_20), 2);
								iLocal_51 = 4;
								break;
						}
					}
					else
					{
						iLocal_51 = 4;
					}
				}
				else if (func_32("SHR_SNK_TUT"))
				{
					func_28("SHR_SNK_TUT", 1);
				}
			}
			break;
		
		case 3:
			if (func_27("SHR_HOLDUP_1") || func_27("SHR_SNK_TUT"))
			{
				unk_0x8DFCED7A656F8802(true);
			}
			if (func_32("SHR_SNK_TUT") && !func_1(Global_97173.f_18256.f_20, 2))
			{
				func_28("SHR_SNK_TUT", 1);
			}
			if (func_32("SHR_HOLDUP_1") && !func_1(Global_97173.f_18256.f_20, 1))
			{
				func_28("SHR_HOLDUP_1", 1);
			}
			iLocal_51 = 4;
			break;
		
		case 4:
			if ((!func_284() && func_32("SHR_HOLDUP_1")) && !func_1(Global_97173.f_18256.f_20, 1))
			{
				func_28("SHR_HOLDUP_1", 1);
				iLocal_51 = 2;
			}
			if ((!func_284() && func_32("SHR_SNK_TUT")) && !func_1(Global_97173.f_18256.f_20, 2))
			{
				func_28("SHR_SNK_TUT", 1);
				iLocal_51 = 2;
			}
			break;
	}
}

bool func_27(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_28(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_95817 && iParam1)
	{
		if (func_27(sParam0) && !unk_0x327EDEEEAC55C369())
		{
			unk_0x8DFCED7A656F8802(false);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(sParam0, &(Global_97173.f_23602[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_97173.f_23602.f_145 - 2))
			{
				func_31(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_30((Global_97173.f_23602.f_145 - 1));
			Global_97173.f_23602.f_145 = (Global_97173.f_23602.f_145 - 1);
			func_29();
			return;
		}
		iVar0++;
	}
}

void func_29()
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

void func_30(int iParam0)
{
	StringCopy(&(Global_97173.f_23602[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_97173.f_23602[iParam0 /*16*/].f_4), "", 16);
	Global_97173.f_23602[iParam0 /*16*/].f_8 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_9 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_11 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_10 = -1;
	Global_97173.f_23602[iParam0 /*16*/].f_12 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_13 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_14 = 0;
	Global_97173.f_23602[iParam0 /*16*/].f_15 = 0;
}

void func_31(int iParam0, int iParam1)
{
	Global_97173.f_23602[iParam0 /*16*/] = { Global_97173.f_23602[iParam1 /*16*/] };
	Global_97173.f_23602[iParam0 /*16*/].f_4 = { Global_97173.f_23602[iParam1 /*16*/].f_4 };
	Global_97173.f_23602[iParam0 /*16*/].f_8 = Global_97173.f_23602[iParam1 /*16*/].f_8;
	Global_97173.f_23602[iParam0 /*16*/].f_10 = Global_97173.f_23602[iParam1 /*16*/].f_10;
	Global_97173.f_23602[iParam0 /*16*/].f_9 = Global_97173.f_23602[iParam1 /*16*/].f_9;
	Global_97173.f_23602[iParam0 /*16*/].f_11 = Global_97173.f_23602[iParam1 /*16*/].f_11;
	Global_97173.f_23602[iParam0 /*16*/].f_12 = Global_97173.f_23602[iParam1 /*16*/].f_12;
	Global_97173.f_23602[iParam0 /*16*/].f_13 = Global_97173.f_23602[iParam1 /*16*/].f_13;
	Global_97173.f_23602[iParam0 /*16*/].f_14 = Global_97173.f_23602[iParam1 /*16*/].f_14;
	Global_97173.f_23602[iParam0 /*16*/].f_15 = Global_97173.f_23602[iParam1 /*16*/].f_15;
}

int func_32(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_97173.f_23602.f_145)
	{
		if (unk_0x0C515FAB3FF9EA92(sParam0, &(Global_97173.f_23602[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_34(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_34(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_29();
	}
}

int func_35(char* sParam0)
{
	if (unk_0x0C515FAB3FF9EA92(sParam0, &Global_95820))
	{
		return 1;
	}
	if (func_32(sParam0))
	{
		return 0;
	}
	return 2;
}

void func_36()
{
	if (func_284())
	{
		if (!unk_0x5F9532F3B5CC2551(Local_67.f_0))
		{
		}
	}
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
	{
	}
	switch (iLocal_52)
	{
		case 1:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_GREET", 3);
			}
			iLocal_52 = 14;
			break;
		
		case 2:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, func_45(bLocal_581, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_52 = 14;
			break;
		
		case 3:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, func_45(bLocal_581, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_52 = 14;
			break;
		
		case 4:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, func_45(bLocal_581, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_52 = 14;
			break;
		
		case 5:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, func_45(bLocal_581, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_52 = 14;
			break;
		
		case 6:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, func_45(bLocal_581, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_52 = 14;
			break;
		
		case 15:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_52 = 14;
			break;
		
		case 7:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_52 = 14;
			break;
		
		case 8:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_52 = 14;
			break;
		
		case 36:
			if (!func_19())
			{
				if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
				{
					func_47(Local_67.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_52 = 37;
			}
			break;
		
		case 9:
			if (!func_19())
			{
				if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
				{
					func_47(Local_67.f_2, "BUMP", 3);
				}
				iLocal_52 = 37;
			}
			break;
		
		case 10:
			if (!func_19())
			{
				if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
				{
					func_47(Local_67.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_52 = 37;
			}
			break;
		
		case 11:
			if (!func_19())
			{
				if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
				{
					func_47(Local_67.f_2, "SHOP_BRAVE", 3);
				}
				iLocal_52 = 37;
			}
			break;
		
		case 14:
			if (func_44() || func_43())
			{
				if (func_44())
				{
					if (!iLocal_578)
					{
						iLocal_52 = 7;
						iLocal_578 = 1;
					}
				}
				else if (func_43())
				{
					if (!iLocal_579)
					{
						iLocal_52 = 8;
						iLocal_579 = 1;
					}
				}
				if (!func_14(&(Local_67.f_483)))
				{
					func_11(&(Local_67.f_483));
				}
				else if (func_10(&(Local_67.f_483)))
				{
					func_42(&(Local_67.f_483));
				}
				else if (func_8(&(Local_67.f_483)) > 10f)
				{
					if (!func_1(Local_67.f_470, 32))
					{
						if (!unk_0x84A2DD9AC37C35C1(Local_67.f_2) && func_1(Local_67.f_470, 4))
						{
							unk_0xEA47FE3719165B94(Local_67.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						iLocal_52 = 36;
						func_15(1, 0);
						func_275(&(Local_67.f_470), 32);
					}
				}
			}
			else if (func_14(&(Local_67.f_483)) && !func_10(&(Local_67.f_483)))
			{
				func_41(&(Local_67.f_483));
			}
			break;
		
		case 12:
			if (!unk_0x9072C8B49907BFAD(unk_0xD80958FC74E988A6()))
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
				{
					func_47(unk_0xD80958FC74E988A6(), "SHOP_HOLDUP", 8);
				}
				func_12(&(Local_67.f_471));
				if (Local_67.f_2.f_11)
				{
					iLocal_52 = 37;
				}
				else
				{
					iLocal_52 = 13;
				}
			}
			else
			{
				unk_0xB8BEC0CA6F0EDB0F(unk_0xD80958FC74E988A6());
			}
			break;
		
		case 13:
			if (func_40(&(Local_67.f_471)) > 3f)
			{
				if (Local_67.f_2.f_12)
				{
					iLocal_52 = 22;
				}
				else if (Local_67.f_458)
				{
					iLocal_52 = 17;
				}
				else if (Local_67.f_459)
				{
					iLocal_52 = 18;
				}
				else if (Local_67.f_460)
				{
					iLocal_52 = 19;
				}
				else if (Local_67.f_461)
				{
					iLocal_52 = 20;
				}
				else if (Local_67.f_462)
				{
					iLocal_52 = 21;
				}
				else
				{
					iLocal_52 = 16;
				}
				func_39(&(Local_67.f_471));
			}
			break;
		
		case 16:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_SCARED", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 17:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_SCARED", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 18:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_SCARED", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 19:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_SCARED", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 20:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_SCARED", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 21:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_SCARED", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 22:
			if (!unk_0x9072C8B49907BFAD(unk_0xD80958FC74E988A6()))
			{
				if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
				{
					func_47(Local_67.f_2, "SHOP_BRAVE", 8);
				}
				func_275(&(Local_67.f_470), 256);
				iLocal_52 = 37;
			}
			break;
		
		case 23:
			if (!unk_0x9072C8B49907BFAD(unk_0xD80958FC74E988A6()))
			{
				if (Local_67.f_28.f_14)
				{
					if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
					{
						func_47(Local_67.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_52 = 37;
			}
			else
			{
				unk_0xB8BEC0CA6F0EDB0F(unk_0xD80958FC74E988A6());
			}
			break;
		
		case 24:
			if (unk_0x4C241E39B23DF959(Local_67.f_46.f_4[0], false))
			{
				unk_0xF4924635A19EB37D(Local_67.f_46.f_4[0], false);
			}
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_46[0]))
			{
				func_47(Local_67.f_46[0], "SURROUNDED", 15);
			}
			iLocal_52 = 25;
			break;
		
		case 25:
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				func_47(unk_0xD80958FC74E988A6(), "SPOT_POLICE", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 26:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 27:
			if (!func_19())
			{
				if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
				{
					func_47(Local_67.f_2, "SCREAM_PANIC", 3);
				}
				iLocal_52 = 37;
			}
			else
			{
				func_37();
			}
			break;
		
		case 28:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_52 = 37;
			break;
		
		case 29:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_52 = 37;
			break;
		
		case 30:
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				func_47(Local_67.f_2, "SHOP_NO_COPS", 3);
			}
			iLocal_52 = 37;
			break;
		
		case 31:
			if (!func_19())
			{
				iLocal_52 = 37;
			}
			break;
		
		case 33:
			if (!unk_0x9072C8B49907BFAD(unk_0xD80958FC74E988A6()) && !unk_0x9072C8B49907BFAD(Local_67.f_2))
			{
				if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
				{
					func_47(unk_0xD80958FC74E988A6(), "SHOP_HURRY", 11);
				}
				func_12(&(Local_67.f_471));
				iLocal_52 = 32;
			}
			break;
		
		case 32:
			if (func_40(&(Local_67.f_471)) > 1f)
			{
				if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
				{
					func_47(Local_67.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_52 = 37;
			}
			break;
		
		case 34:
			if (!func_19())
			{
				if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
				{
					func_47(Local_67.f_2, "SHOP_SELL", 3);
				}
				iLocal_52 = 37;
			}
			break;
		
		case 35:
			if (!func_19())
			{
				if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
				{
					func_47(Local_67.f_2, "SHOP_STEAL", 3);
				}
				iLocal_52 = 37;
			}
			break;
	}
}

void func_37()
{
	Global_14558 = 0;
	func_38();
}

void func_38()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

void func_39(int* iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_40(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_10(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_9() - uParam0->f_1);
		}
	}
	return 0f;
}

void func_41(int* iParam0)
{
	if (func_14(iParam0))
	{
		if (!func_10(iParam0))
		{
			iParam0->f_2 = (func_9() - iParam0->f_1);
			unk_0x933D6A9EEC1BACD0(iParam0, 2);
		}
	}
}

void func_42(int* iParam0)
{
	if (func_14(iParam0))
	{
		if (func_10(iParam0))
		{
			iParam0->f_1 = (func_9() - iParam0->f_2);
			iParam0->f_2 = 0f;
			unk_0xE80492A9AC099A93(iParam0, 2);
		}
	}
}

int func_43()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_0))
	{
		if (unk_0x51210CED3DA1C78A(Local_67.f_0, Local_67.f_200, Local_67.f_203, Local_67.f_206, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_44()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_0))
	{
		if (unk_0x51210CED3DA1C78A(Local_67.f_0, Local_67.f_214, Local_67.f_217, Local_67.f_220, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_45(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_46()
{
	if (unk_0xA921AA820C25702F(unk_0xD53343AA4FB7DD28(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_47(int iParam0, char* sParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(iParam0, sParam1, func_48(iParam2), 1);
}

int func_48(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_49()
{
	return Global_17096;
}

void func_50()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_284() && iLocal_65 != 3)
	{
		iVar2 = 0;
		while (iVar2 < unk_0x5F92A689A06620AA(0))
		{
			iVar0 = unk_0xD8F66A3A60C62153(0, iVar2);
			switch (iVar0)
			{
				case 140:
					unk_0x2902843FCD2B2D79(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (unk_0x524AC5ECEA15343E(iVar1))
						{
							if (iVar1 != func_51(Local_67.f_2) && iVar1 != func_51(unk_0xD80958FC74E988A6()))
							{
								func_275(&(Local_67.f_470), 8);
							}
						}
						if (!unk_0x524AC5ECEA15343E(iVar1) && !unk_0x6AC7003FA6E5575E(iVar1))
						{
							func_275(&(Local_67.f_470), 8);
						}
					}
					break;
				
				case 139:
					unk_0x2902843FCD2B2D79(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (unk_0x524AC5ECEA15343E(iVar1))
						{
							if (iVar1 != func_51(Local_67.f_2) && iVar1 != func_51(unk_0xD80958FC74E988A6()))
							{
								func_275(&(Local_67.f_470), 8);
							}
						}
						if (!unk_0x524AC5ECEA15343E(iVar1) && !unk_0x6AC7003FA6E5575E(iVar1))
						{
							func_275(&(Local_67.f_470), 8);
						}
					}
					break;
			}
			iVar2++;
		}
	}
}

int func_51(int iParam0)
{
	return iParam0;
}

int func_52(int iParam0)
{
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x2107BA504071A6BB(iParam0) == Local_67.f_185)
		{
			return 1;
		}
		else if (unk_0x51210CED3DA1C78A(iParam0, Local_67.f_186, Local_67.f_189, Local_67.f_192, false, true, 0))
		{
			return 1;
		}
		else if (unk_0x51210CED3DA1C78A(iParam0, Local_67.f_200, Local_67.f_203, Local_67.f_206, false, true, 0))
		{
			return 1;
		}
		else if (unk_0x51210CED3DA1C78A(iParam0, Local_67.f_207, Local_67.f_210, Local_67.f_213, false, true, 0))
		{
			return 1;
		}
		else if (Local_67.f_199 != -1f)
		{
			if (unk_0x51210CED3DA1C78A(iParam0, Local_67.f_193, Local_67.f_196, Local_67.f_199, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_53()
{
	int iVar0;
	var uVar1[10];
	int iVar12;
	int iVar13;
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (func_284())
		{
			if (!unk_0xA921AA820C25702F(Local_67.f_162.f_18, 0))
			{
				iVar12 = 0;
				iVar13 = 0;
				iVar12 = unk_0x23F8F5FC7E8C4A6B(unk_0xD80958FC74E988A6(), &uVar1, -1);
				iVar0 = 0;
				while (iVar0 < Local_67.f_162)
				{
					Local_67.f_162[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar13 = 0;
				while (iVar13 < iVar12)
				{
					if (iVar0 < Local_67.f_162)
					{
						if ((unk_0x7239B21A38F536BA(uVar1[iVar13]) && !unk_0x84A2DD9AC37C35C1(uVar1[iVar13])) && !unk_0x997ABD671D25CA0B(uVar1[iVar13], false))
						{
							if (unk_0x9BB01E3834671191(uVar1[iVar13], unk_0x0D127585F77030AF(unk_0x4F8644AF03D0E0D6())))
							{
								Local_67.f_162[iVar0] = uVar1[iVar13];
								Local_67.f_162.f_5[iVar0 /*3*/] = { unk_0x3FEF770D40960D5A(uVar1[iVar13], true) };
								iVar0++;
							}
						}
					}
					iVar13++;
				}
				unk_0x933D6A9EEC1BACD0(&(Local_67.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_67.f_162)
			{
				if ((unk_0x7239B21A38F536BA(Local_67.f_162[iVar0]) && !unk_0x84A2DD9AC37C35C1(Local_67.f_162[iVar0])) && !unk_0x997ABD671D25CA0B(Local_67.f_162[iVar0], false))
				{
					if (unk_0xA921AA820C25702F(Local_67.f_162.f_18, 1))
					{
						if ((unk_0x9CD27B0045628463() % 1500) < 50)
						{
						}
						unk_0xEA1C610A04DB6BBB(Local_67.f_162[iVar0], 0);
						unk_0x1A9205C1B9EE827F(Local_67.f_162[iVar0], false, false);
						unk_0x428CA6DBD1094446(Local_67.f_162[iVar0], true);
						unk_0x239A3351AC1DA385(Local_67.f_162[iVar0], Local_67.f_162.f_5[iVar0 /*3*/], true, true, true);
					}
					else if (!unk_0x47D6F43D77935C75(Local_67.f_162[iVar0]))
					{
						unk_0xEA1C610A04DB6BBB(Local_67.f_162[iVar0], 1);
						unk_0x1A9205C1B9EE827F(Local_67.f_162[iVar0], true, false);
						unk_0x428CA6DBD1094446(Local_67.f_162[iVar0], false);
						unk_0x239A3351AC1DA385(Local_67.f_162[iVar0], Local_67.f_162.f_5[iVar0 /*3*/], true, true, true);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (unk_0xA921AA820C25702F(Local_67.f_162.f_18, 0))
			{
				unk_0xE80492A9AC099A93(&(Local_67.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_67.f_162)
			{
				if ((unk_0x7239B21A38F536BA(Local_67.f_162[iVar0]) && !unk_0x84A2DD9AC37C35C1(Local_67.f_162[iVar0])) && !unk_0x997ABD671D25CA0B(Local_67.f_162[iVar0], false))
				{
					if (!unk_0x47D6F43D77935C75(Local_67.f_162[iVar0]))
					{
						unk_0xEA1C610A04DB6BBB(Local_67.f_162[iVar0], 1);
						unk_0x1A9205C1B9EE827F(Local_67.f_162[iVar0], true, false);
						unk_0x428CA6DBD1094446(Local_67.f_162[iVar0], false);
						unk_0x239A3351AC1DA385(Local_67.f_162[iVar0], Local_67.f_162.f_5[iVar0 /*3*/], true, true, true);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_54()
{
	switch (iLocal_621)
	{
		case 0:
			if (func_284())
			{
				unk_0xF0B67A4DE6AB5F98(unk_0x4F8644AF03D0E0D6());
				unk_0xD3BD40951412FEF6("oddjobs@shop_robbery@rob_till");
				unk_0xD3BD40951412FEF6("misscommon@response");
				unk_0xDFA2EF8E04127DD5(func_63(iLocal_567), false);
				unk_0x963D27A58DF860AC(joaat("prop_choc_ego"));
				unk_0x963D27A58DF860AC(joaat("prop_choc_meto"));
				unk_0x963D27A58DF860AC(joaat("prop_choc_pq"));
				if (!bLocal_573)
				{
					unk_0x963D27A58DF860AC(Local_67.f_46.f_26);
					unk_0x963D27A58DF860AC(Local_67.f_46.f_27);
				}
				iLocal_621 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x2F844A8B08D76685("SCRIPT\MARKET_CASH_REGISTER", false))
			{
				return;
			}
			if (!unk_0xD031A9162D01088C("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!unk_0xD031A9162D01088C("misscommon@response"))
			{
				return;
			}
			if (!unk_0x98A4EB5D89A0C952(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!unk_0x98A4EB5D89A0C952(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!unk_0x98A4EB5D89A0C952(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_573)
			{
				if (!unk_0x98A4EB5D89A0C952(Local_67.f_46.f_26))
				{
					return;
				}
				if (!unk_0x98A4EB5D89A0C952(Local_67.f_46.f_27))
				{
					return;
				}
			}
			if (!func_61("SNK_MNU", iLocal_567))
			{
				return;
			}
			if (!func_1(Local_67.f_470, 4))
			{
				if (!func_1(Local_67.f_470, 1024))
				{
					iLocal_617[0] = unk_0x509D5878EB39E842(func_60(0), func_59(0), true, true, false);
					iLocal_617[1] = unk_0x509D5878EB39E842(func_60(1), func_59(1), true, true, false);
					iLocal_617[2] = unk_0x509D5878EB39E842(func_60(2), func_59(2), true, true, false);
					unk_0xEA1C610A04DB6BBB(iLocal_617[0], 0);
					unk_0xEA1C610A04DB6BBB(iLocal_617[1], 0);
					unk_0xEA1C610A04DB6BBB(iLocal_617[2], 0);
					func_275(&(Local_67.f_470), 1024);
				}
				func_275(&(Local_67.f_470), 4);
				iLocal_621 = 2;
			}
			break;
		
		case 2:
			if (!func_284())
			{
				func_55();
				func_282(&(Local_67.f_470), 4);
				iLocal_621 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_67.f_470, 4))
			{
				func_55();
				func_282(&(Local_67.f_470), 4);
			}
			break;
	}
}

void func_55()
{
	unk_0xF66A602F829E2A06("oddjobs@shop_robbery@rob_till");
	unk_0xF66A602F829E2A06("misscommon@response");
	unk_0x77ED170667F50170("SCRIPT\MARKET_CASH_REGISTER");
	unk_0xBE2CACCF5A8AA805(func_63(iLocal_567));
	unk_0xE532F5D78798DAAB(joaat("prop_choc_ego"));
	unk_0xE532F5D78798DAAB(joaat("prop_choc_meto"));
	unk_0xE532F5D78798DAAB(joaat("prop_choc_pq"));
	func_56(1, iLocal_567);
	if (!bLocal_573)
	{
		unk_0xE532F5D78798DAAB(Local_67.f_46.f_26);
		unk_0xE532F5D78798DAAB(Local_67.f_46.f_27);
	}
}

void func_56(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17236.f_7207)
	{
		unk_0x450930E616475D0D(15);
		Global_17236.f_7207 = 0;
	}
	unk_0x55598D21339CB998(0f);
	if (Global_17236.f_4886[iVar0])
	{
		unk_0x2A179DF17CCF04CD(9, false);
		Global_17236.f_4886[iVar0] = 0;
	}
	if (Global_17236.f_4879[iVar0])
	{
		unk_0xBE2CACCF5A8AA805("CommonMenu");
		Global_17236.f_4879[iVar0] = 0;
	}
	if (bParam0)
	{
		func_57(&(Global_17236.f_4918[iVar0 /*10*/]));
		Global_17236.f_4979[iVar0] = 0;
	}
	else
	{
		Global_17236.f_4979[iVar0] = 0;
	}
}

void func_57(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x85F01B8D5B90570E(*iParam0))
		{
			unk_0x1D132D614DD86811(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_58(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x10FAB35428CCC9D7() && unk_0x2910669969E9535E())
		{
			iParam2 = unk_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, unk_0x442E0A7EDE4A738A(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xD24D37CC275948CC(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17236.f_4979[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17236.f_4979[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17236.f_4979[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

Vector3 func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_67.f_486.f_6 - Vector(1f, 0f, 0.1f);
		
		case 1:
			return Local_67.f_486.f_6 - Vector(1f, 0f, 0f);
		
		case 2:
			return Local_67.f_486.f_6 - Vector(1f, 0f, -0.1f);
		
		default:
	}
	return Local_67.f_486.f_6 - Vector(1f, 0f, -0.1f);
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		default:
	}
	return joaat("prop_choc_pq");
}

bool func_61(char* sParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_58(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17236.f_4893[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xCA042B6957743895(&(Global_17236.f_4893[iVar0 /*4*/])))
	{
		unk_0x71A78003C8E71424(&(Global_17236.f_4893[iVar0 /*4*/]), 9);
		Global_17236.f_4886[iVar0] = 1;
		if (!unk_0xADBF060E2B30C5BC(&(Global_17236.f_4893[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xDFA2EF8E04127DD5("CommonMenu", false);
	Global_17236.f_4879[iVar0] = 1;
	if (!unk_0x0145F696AAAAD2E4("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17236.f_4918[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_62(&(Global_17236.f_4918[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_62(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x85F01B8D5B90570E(*uParam0))
			{
				*uParam0 = unk_0x11FE353CF9733E6F(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x85F01B8D5B90570E(*uParam0))
					{
						uParam0->f_8 = unk_0x9CD27B0045628463();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x9CD27B0045628463();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x85F01B8D5B90570E(*uParam0))
			{
				uParam0->f_8 = unk_0x9CD27B0045628463();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x85F01B8D5B90570E(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

char* func_63(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

void func_64()
{
	switch (iLocal_622)
	{
		case 0:
			if (func_284())
			{
				unk_0xD3BD40951412FEF6(Local_67.f_486.f_1);
				iLocal_622 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xD031A9162D01088C(Local_67.f_486.f_1))
			{
				return;
			}
			if (!func_1(Local_67.f_470, 16))
			{
				func_275(&(Local_67.f_470), 16);
				iLocal_622 = 2;
			}
			break;
		
		case 2:
			if (!func_284() && iLocal_64 != 1)
			{
				unk_0xF66A602F829E2A06(Local_67.f_486.f_1);
				func_282(&(Local_67.f_470), 16);
				iLocal_622 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_67.f_470, 16))
			{
				unk_0xF66A602F829E2A06(Local_67.f_486.f_1);
				func_282(&(Local_67.f_470), 16);
			}
			break;
	}
}

void func_65()
{
	switch (iLocal_641)
	{
		case 0:
			if (Local_67.f_158)
			{
				iLocal_641 = 1;
			}
			break;
		
		case 1:
			if (func_284())
			{
				if (func_14(&(Local_67.f_158.f_1)))
				{
					func_39(&(Local_67.f_158.f_1));
				}
				if ((unk_0x9CD27B0045628463() % 1000) < 50)
				{
				}
				if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					unk_0x4669B3ED80F24B4E(unk_0x4F8644AF03D0E0D6());
				}
			}
			else
			{
				func_12(&(Local_67.f_158.f_1));
				iLocal_641 = 2;
			}
			break;
		
		case 2:
			if (func_284())
			{
				iLocal_641 = 1;
			}
			break;
		
		case 3:
			break;
	}
}

void func_66()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	char* sVar7;
	var uVar8;
	
	func_172();
	if (((((iLocal_59 == 1 || iLocal_59 == 2) && unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) == 0) && !unk_0x84A2DD9AC37C35C1(Local_67.f_0)) && !func_171(-1082130432)) && !unk_0x84A2DD9AC37C35C1(Local_67.f_2))
	{
		iVar1 = unk_0xEEF059FAD016D209(unk_0xD80958FC74E988A6());
		iVar2 = unk_0x15D757606D170C3C(unk_0xD80958FC74E988A6());
		if (((iLocal_65 != 2 && iLocal_65 != 3) && iLocal_65 != 4) && func_284())
		{
			if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			}
		}
		iVar6 = 0;
		switch (iLocal_65)
		{
			case 0:
				if (func_1(Local_67.f_470, 4) && func_24(Local_67.f_0) == joaat("weapon_unarmed"))
				{
					if (func_170(iLocal_567, &(Local_67.f_486.f_6), Local_67.f_486.f_9.f_2, &(Local_67.f_102.f_26[0 /*3*/]), &(Local_67.f_102.f_26[1 /*3*/]), &(Local_67.f_102.f_33), &(Local_67.f_102.f_36)))
					{
						Var3 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
						if (unk_0xF1B760881820C952(Var3, Local_67.f_102.f_33, true) < 5f)
						{
							if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_67.f_102.f_26[0 /*3*/], Local_67.f_102.f_26[1 /*3*/], Local_67.f_102.f_36, false, true, 0))
							{
								if (unk_0xFCF37A457CB96DC0(unk_0xD80958FC74E988A6(), Local_67.f_102.f_33, 135f))
								{
									if ((unk_0x9CD27B0045628463() % 1000) < 50)
									{
									}
									if (((!func_27("SHR_HOLDUP_1") && !func_27("SHR_MENU")) && !func_49()) && func_169())
									{
										func_168("SHR_MENU");
									}
									Local_67.f_469 = -1;
									func_167(&(Local_67.f_469), 4, "SHR_MENU", 0, 0);
									unk_0xE80492A9AC099A93(&(Local_67.f_162.f_18), 1);
									unk_0xE80492A9AC099A93(&(Local_67.f_162.f_18), 0);
									iLocal_65 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!unk_0xFCF37A457CB96DC0(unk_0xD80958FC74E988A6(), Local_67.f_102.f_33, 135f) || !func_24(Local_67.f_0) == joaat("weapon_unarmed"))
				{
					if (func_27("SHR_MENU"))
					{
						unk_0x8DFCED7A656F8802(true);
					}
					Local_67.f_102.f_22 = -1;
					func_166(&(Local_67.f_469));
					iLocal_65 = 0;
				}
				else if (((!func_27("SHR_MENU") && !func_27("SHR_HOLDUP_1")) && func_169()) && !func_165(Local_67.f_469, 0))
				{
					func_168("SHR_MENU");
				}
				if ((!unk_0xC5286FFC176F28A2(unk_0xD80958FC74E988A6()) && !unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6())) && !unk_0xCEDABC5900A0BF97(unk_0xD80958FC74E988A6()))
				{
					if (func_163(Local_67.f_469, 1))
					{
						if (func_27("SHR_MENU"))
						{
							unk_0x8DFCED7A656F8802(true);
						}
						unk_0x933D6A9EEC1BACD0(&(Local_67.f_162.f_18), 1);
						func_12(&(Local_67.f_102.f_53));
						func_166(&(Local_67.f_469));
						func_162(23, 1);
						if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !unk_0x84A2DD9AC37C35C1(Local_67.f_2))
						{
							unk_0x5AD23D40115353AC(unk_0xD80958FC74E988A6(), Local_67.f_2, 0);
						}
						iLocal_65 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0xA7A932170592B50E(iLocal_640))
				{
					iLocal_640 = unk_0x6ABFA3E16460F22D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				func_161(iLocal_567, Local_67.f_486.f_6, Local_67.f_486.f_9.f_2, &(Local_67.f_102), &(Local_67.f_102.f_3), &uVar8);
				unk_0x4D41783FB745E42E(iLocal_640, Local_67.f_102);
				unk_0x85973643155D0B07(iLocal_640, Local_67.f_102.f_3, 2);
				unk_0xB13C14F66A00D047(iLocal_640, 35f);
				unk_0x6A25241C340D3822(iLocal_640, "HAND_SHAKE", 0.1f);
				unk_0x026FB97D0A425F84(iLocal_640, true);
				unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
				if (unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
				{
					unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
					func_275(&(Local_67.f_470), 2048);
				}
				Local_67.f_102.f_46 = func_63(iLocal_567);
				Local_67.f_102.f_23 = 0;
				Local_67.f_102.f_24 = 3;
				func_160();
				func_159(1, 1, 0, 0, 0);
				func_158(1, 2, 1, 1, 1);
				func_157(func_4(iLocal_567));
				func_155(1, Local_67.f_102.f_46, Local_67.f_102.f_46);
				func_154();
				func_151(0, "SNK_ITEM1", 0, 1, 0, 0);
				func_151(0, "ITEM_COST", 1, 1, 0, 0);
				func_147(func_150(0), 0);
				func_151(1, "SNK_ITEM2", 0, 1, 0, 0);
				func_151(1, "ITEM_COST", 1, 1, 0, 0);
				func_147(func_150(1), 0);
				func_151(2, "SNK_ITEM3", 0, 1, 0, 0);
				func_151(2, "ITEM_COST", 1, 1, 0, 0);
				func_147(func_150(2), 0);
				func_146(0);
				func_145(Local_67.f_102.f_23, 1, 1);
				func_144("SNK_ITEM1_D", 0, 0);
				func_143(201, "ITEM_SELECT", -1);
				func_143(202, "ITEM_BACK", -1);
				func_143(203, "SNK_LIFT", -1);
				iLocal_65 = 3;
				break;
			
			case 3:
				iVar6 = 0;
				if (unk_0x48AF36444B965238())
				{
					if (unk_0x13337B38DB572509(2))
					{
						unk_0xFE99B66D079CF6BC(0, 1, true);
						unk_0xFE99B66D079CF6BC(0, 2, true);
						unk_0x351220255D64C155(0, 237, true);
						unk_0x351220255D64C155(0, 238, true);
						unk_0x351220255D64C155(0, 241, true);
						unk_0x351220255D64C155(0, 242, true);
						func_140(0, 0, 0, 1);
						func_139(0, -1);
						if (func_138())
						{
							if (Global_2542270 != Local_67.f_102.f_23)
							{
								unk_0x67C540AA08E4A6F5(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								Local_67.f_102.f_23 = Global_2542270;
								func_145(Local_67.f_102.f_23, 1, 1);
								Local_67.f_102.f_37 = 0;
								Local_67.f_102.f_41 = 0;
								Local_67.f_102.f_42 = 0;
								sVar7 = func_137(Local_67.f_102.f_23);
								if (unk_0xAC09CA973C564252(sVar7))
								{
									func_144(sVar7, 0, 0);
								}
							}
							else
							{
								iVar6 = 1;
							}
						}
					}
				}
				func_102(1, iLocal_567, 1, 0, 1, -1082130432, 0);
				func_98();
				if (unk_0x91AEF906BCA88877(2, 201) || iVar6 == 1)
				{
					Local_67.f_102.f_37 = 1;
					Local_67.f_102.f_41 = 0;
					Local_67.f_102.f_42 = 0;
					if (Local_67.f_102.f_40 && Local_67.f_102.f_43)
					{
						Local_67.f_102.f_44 = 1;
						unk_0x67C540AA08E4A6F5(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
						iLocal_630 = 1;
						iLocal_633 = Local_67.f_102.f_23;
						iLocal_65 = 4;
					}
					else
					{
						Local_67.f_102.f_44 = 0;
						unk_0x67C540AA08E4A6F5(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
					}
				}
				if (unk_0x91AEF906BCA88877(2, 203))
				{
					iLocal_65 = 6;
					unk_0x67C540AA08E4A6F5(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_97();
				}
				if (unk_0x91AEF906BCA88877(2, 202) || unk_0x50F940259D3841E6(2, 238))
				{
					iLocal_65 = 7;
					Local_67.f_102.f_45 = unk_0x9CD27B0045628463();
					unk_0x67C540AA08E4A6F5(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_97();
				}
				break;
			
			case 4:
				func_102(1, iLocal_567, 1, 0, 1, -1082130432, 0);
				switch (Local_67.f_102.f_23)
				{
					case 0:
						iVar0 = func_150(Local_67.f_102.f_23);
						if (iVar1 + 10 > iVar2)
						{
							unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), iVar2);
						}
						else
						{
							unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), iVar1 + 10);
						}
						break;
					
					case 1:
						iVar0 = func_150(Local_67.f_102.f_23);
						if (iVar1 + 20 > iVar2)
						{
							unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), iVar2);
						}
						else
						{
							unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), iVar1 + 20);
						}
						break;
					
					case 2:
						iVar0 = func_150(Local_67.f_102.f_23);
						if (iVar1 + 15 > iVar2)
						{
							unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), iVar2);
						}
						else
						{
							unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), iVar1 + 15);
						}
						break;
				}
				func_68(func_92(), 96, iVar0);
				if (!Local_67.f_102.f_39)
				{
					iLocal_52 = 34;
					Local_67.f_102.f_39 = 1;
				}
				func_12(&(Local_67.f_102.f_53));
				iLocal_65 = 3;
				break;
			
			case 5:
				if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					if (!bLocal_573)
					{
					}
					iLocal_65 = 6;
				}
				break;
			
			case 6:
				switch (Local_67.f_102.f_23)
				{
					case 0:
						if (iVar1 + 10 > iVar2)
						{
							unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), iVar2);
						}
						else
						{
							unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), iVar1 + 10);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), iVar2);
						}
						else
						{
							unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), iVar1 + 20);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), iVar2);
						}
						else
						{
							unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), iVar1 + 15);
						}
						break;
				}
				unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), true, 0);
				func_162(23, 0);
				iLocal_52 = 35;
				if (!unk_0x84A2DD9AC37C35C1(Local_67.f_2) && func_1(Local_67.f_470, 4))
				{
					unk_0xEA47FE3719165B94(Local_67.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0f, false, false, false);
				}
				if (unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6()) < 1)
				{
					func_15(1, 0);
				}
				iLocal_65 = 8;
				break;
			
			case 7:
				if ((unk_0x9CD27B0045628463() - Local_67.f_102.f_45) > 1000)
				{
					iLocal_65 = 0;
				}
				else
				{
					unk_0xEDE476E5EE29EDB1(2, 193);
					unk_0xEDE476E5EE29EDB1(2, 202);
					unk_0xEDE476E5EE29EDB1(2, 188);
					unk_0xEDE476E5EE29EDB1(2, 187);
					unk_0xEDE476E5EE29EDB1(2, 189);
					unk_0xEDE476E5EE29EDB1(2, 190);
				}
				break;
			
			case 8:
				break;
		}
	}
	else
	{
		if (iLocal_65 != 8 && func_1(Local_67.f_470, 4))
		{
			if ((iLocal_65 == 3 || iLocal_65 == 2) || iLocal_65 == 4)
			{
				func_97();
			}
			iLocal_65 = 8;
		}
		if (func_27("SHR_SNACKS"))
		{
			unk_0x8DFCED7A656F8802(true);
			func_166(&(Local_67.f_469));
		}
		if (func_27("SHR_MENU"))
		{
			unk_0x8DFCED7A656F8802(true);
			func_166(&(Local_67.f_469));
		}
		if (unk_0xA921AA820C25702F(Local_67.f_162.f_18, 1) && iLocal_623 < 2)
		{
			unk_0xE80492A9AC099A93(&(Local_67.f_162.f_18), 1);
		}
		if (func_1(Local_67.f_470, 4))
		{
			func_67();
		}
	}
}

void func_67()
{
	if (func_1(Local_67.f_470, 2048))
	{
		if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
			}
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			func_282(&(Local_67.f_470), 2048);
		}
	}
	Local_67.f_102.f_37 = 0;
	unk_0xE80492A9AC099A93(&(Local_67.f_162.f_18), 1);
	if (unk_0xA7A932170592B50E(iLocal_640))
	{
		unk_0x865908C81A2C22E9(iLocal_640, false);
	}
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_69(Global_97173.f_29699[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_91();
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
					func_90(99, 1);
					func_89(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_89(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_89(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_77(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_76(5))
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
							func_89(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_89(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_89(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_76(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_89(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_89(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_89(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_89(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_89(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_89(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_89(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_89(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_89(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x8A1C8B1738FFE87E())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_89(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_89(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_89(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_89(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_89(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_89(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_76(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_89(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_89(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_89(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_89(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_89(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_89(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_75(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_90(95, iParam3);
					break;
				
				case 1:
					func_90(97, iParam3);
					break;
				
				case 2:
					func_90(96, iParam3);
					break;
			}
			func_90(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_72(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_72(iVar1);
	}
	iVar5 = (Global_51747[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51747[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51747[iVar2] = 2147483647;
				}
				else
				{
					Global_51747[iVar2] = (Global_51747[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_89(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_89(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_89(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51747[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51747[iVar2];
			Global_51747[iVar2] = (Global_51747[iVar2] - iParam3);
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
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_2[Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97173.f_23756.f_233[iVar2 /*69*/]++;
		Global_97173.f_23756.f_233[iVar2 /*69*/].f_1++;
		if (Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97173.f_23756.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_71(iParam0);
	if (Global_34909 == 15)
	{
		func_70(0);
	}
	return 1;
}

void func_70(bool bParam0)
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
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97173.f_23756.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51755[iVar0 /*3*/][0] = Global_97173.f_23756[iVar0];
		Global_51755.f_31[iVar0 /*3*/][0] = Global_97173.f_23756.f_11[iVar0];
		Global_51755.f_62[iVar0 /*3*/][0] = Global_97173.f_23756.f_22[iVar0];
		Global_51755.f_93[iVar0 /*3*/][0] = Global_97173.f_23756.f_33[iVar0];
		Global_51755.f_124[iVar0 /*3*/][0] = Global_97173.f_23756.f_44[iVar0];
		Global_51755.f_155[iVar0 /*3*/][0] = Global_97173.f_23756.f_55[iVar0];
		Global_51755.f_186[iVar0 /*3*/][0] = Global_97173.f_23756.f_66[iVar0];
		Global_51755.f_217[iVar0 /*3*/][0] = Global_97173.f_23756.f_77[iVar0];
		Global_51755.f_248[iVar0 /*3*/][0] = Global_97173.f_23756.f_88[iVar0];
		if (!bParam0)
		{
			Global_51755[iVar0 /*3*/][1] = Global_97173.f_23756[iVar0];
			Global_51755.f_31[iVar0 /*3*/][1] = Global_97173.f_23756.f_11[iVar0];
			Global_51755.f_62[iVar0 /*3*/][1] = Global_97173.f_23756.f_22[iVar0];
			Global_51755.f_93[iVar0 /*3*/][1] = Global_97173.f_23756.f_33[iVar0];
			Global_51755.f_124[iVar0 /*3*/][1] = Global_97173.f_23756.f_44[iVar0];
			Global_51755.f_155[iVar0 /*3*/][1] = Global_97173.f_23756.f_55[iVar0];
			Global_51755.f_186[iVar0 /*3*/][1] = Global_97173.f_23756.f_66[iVar0];
			Global_51755.f_217[iVar0 /*3*/][1] = Global_97173.f_23756.f_77[iVar0];
			Global_51755.f_248[iVar0 /*3*/][1] = Global_97173.f_23756.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_71(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_51747[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xB3271D7AB655B441(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			unk_0xB3271D7AB655B441(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			unk_0xB3271D7AB655B441(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_72(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xE80492A9AC099A93(&(Global_97173.f_23756.f_471), iParam0);
		}
	}
	else if (unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0) || unk_0xA921AA820C25702F(Global_2097152[func_74() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xE80492A9AC099A93(&(Global_97173.f_23756.f_471), iParam0);
		unk_0xE80492A9AC099A93(&(Global_2097152[func_74() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x202709F4C58A0424("COUP_RED");
		unk_0xC63CD5D2920ACBE7(func_73(iParam0));
		unk_0x1CCD9A37359072CF(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_73(int iParam0)
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

int func_74()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_75(int iParam0)
{
	func_90(93, iParam0);
	func_90(29, iParam0);
	func_90(30, iParam0);
}

bool func_76(int iParam0)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return unk_0xA921AA820C25702F(Global_97173.f_23756.f_471, iParam0);
	}
	return unk_0xA921AA820C25702F(Global_2097152[func_74() /*8053*/].f_5756.f_10, iParam0);
}

int func_77(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x867365E111A3B6EB(27))
	{
		return 0;
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x767FBC2AC802EF3D(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x767FBC2AC802EF3D(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xB3271D7AB655B441(joaat("num_cash_spent"), iVar1, true);
		func_88(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_78(27, 1);
	return 1;
}

int func_78(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_79(iParam0, iParam1);
}

int func_79(int iParam0, int iParam1)
{
	if (unk_0x867365E111A3B6EB(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_87(&Global_2543745))
	{
		if (func_85(&Global_2543745, iParam0))
		{
			return 0;
		}
		if (func_80(&Global_2543745, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xBEC7076D64130195(iParam0))
		{
			return 0;
		}
		if (unk_0x867365E111A3B6EB(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_80(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_85(uParam0, iParam1))
	{
		return 0;
	}
	func_83(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_81(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_81(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x867365E111A3B6EB(iParam1))
	{
		return 0;
	}
	if (func_85(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_82(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_82(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

void func_83(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_84(uParam0, iVar0);
		iVar0++;
	}
	func_13(&(uParam0->f_62), (8f - 0.5f));
}

void func_84(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

bool func_85(var uParam0, int iParam1)
{
	return func_86(uParam0, iParam1) != -1;
}

int func_86(var uParam0, int iParam1)
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

bool func_87(var uParam0)
{
	return uParam0->f_68 == 1;
}

int func_88(int iParam0, int iParam1)
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

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x767FBC2AC802EF3D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB3271D7AB655B441(iParam0, iVar0, true);
}

void func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x10FAB35428CCC9D7())
	{
		return;
	}
	if (Global_50315[iParam0 /*7*/])
	{
		unk_0x767FBC2AC802EF3D(Global_50315[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xB3271D7AB655B441(Global_50315[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_91()
{
	int iVar0;
	
	if (unk_0x054354A99211EB96())
	{
		unk_0x767FBC2AC802EF3D(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51747[0] == iVar0)
		{
			Global_51747[0] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51747[1] == iVar0)
		{
			Global_51747[1] = iVar0;
		}
		unk_0x767FBC2AC802EF3D(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51747[2] == iVar0)
		{
			Global_51747[2] = iVar0;
		}
	}
}

int func_92()
{
	func_93();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_93()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_96(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_95(unk_0xD80958FC74E988A6());
			if (func_94(iVar0) && (!func_298(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_94(Global_97173.f_1729.f_539.f_3213))
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

bool func_94(int iParam0)
{
	return iParam0 < 3;
}

int func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_96(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_96(int iParam0)
{
	if (func_94(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_97()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0xE1EF3C1216AFF2CD(unk_0xD80958FC74E988A6());
	}
	func_282(&(Local_67.f_470), 2048);
	unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
	unk_0xB4EC2312F4E5B1F1(0f);
	unk_0x6D0858B8EDFD2B7D(0f, 1f);
	func_162(23, 0);
	Local_67.f_102.f_37 = 0;
	unk_0xE80492A9AC099A93(&(Local_67.f_162.f_18), 1);
	if (unk_0xA7A932170592B50E(iLocal_640))
	{
		unk_0x865908C81A2C22E9(iLocal_640, false);
	}
	unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
}

void func_98()
{
	char* sVar0;
	
	unk_0xEDE476E5EE29EDB1(2, 193);
	unk_0xEDE476E5EE29EDB1(2, 202);
	unk_0xEDE476E5EE29EDB1(2, 188);
	unk_0xEDE476E5EE29EDB1(2, 187);
	unk_0xEDE476E5EE29EDB1(2, 189);
	unk_0xEDE476E5EE29EDB1(2, 190);
	if (func_101())
	{
		Local_67.f_102.f_37 = 0;
		func_39(&(Local_67.f_102.f_53));
		Local_67.f_102.f_23 = (Local_67.f_102.f_23 - 1);
		if (Local_67.f_102.f_23 < 0)
		{
			Local_67.f_102.f_23 = (Local_67.f_102.f_24 - 1);
		}
		unk_0x67C540AA08E4A6F5(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_145(Local_67.f_102.f_23, 1, 1);
		sVar0 = func_137(Local_67.f_102.f_23);
		Local_67.f_102.f_41 = 0;
		Local_67.f_102.f_42 = 0;
		if (unk_0xAC09CA973C564252(sVar0))
		{
			func_144(sVar0, 0, 0);
		}
	}
	if (func_100())
	{
		Local_67.f_102.f_37 = 0;
		func_39(&(Local_67.f_102.f_53));
		Local_67.f_102.f_23++;
		if (Local_67.f_102.f_23 > (Local_67.f_102.f_24 - 1))
		{
			Local_67.f_102.f_23 = 0;
		}
		unk_0x67C540AA08E4A6F5(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_145(Local_67.f_102.f_23, 1, 1);
		sVar0 = func_137(Local_67.f_102.f_23);
		Local_67.f_102.f_41 = 0;
		Local_67.f_102.f_42 = 0;
		if (unk_0xAC09CA973C564252(sVar0))
		{
			func_144(sVar0, 0, 0);
		}
	}
	if (!Local_67.f_102.f_41)
	{
		Local_67.f_102.f_40 = func_99(func_95(unk_0xD80958FC74E988A6())) >= func_150(Local_67.f_102.f_23);
		Local_67.f_102.f_41 = 1;
	}
	if (!Local_67.f_102.f_42)
	{
		Local_67.f_102.f_43 = unk_0xEEF059FAD016D209(unk_0xD80958FC74E988A6()) < unk_0x15D757606D170C3C(unk_0xD80958FC74E988A6());
		Local_67.f_102.f_42 = 1;
	}
	if (Local_67.f_102.f_37)
	{
		if (func_40(&(Local_67.f_102.f_53)) < 3f)
		{
			if (Local_67.f_102.f_44)
			{
				func_144("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_67.f_102.f_40)
			{
				func_144("SNK_AFFORD", 0, 0);
			}
			else if (!Local_67.f_102.f_43)
			{
				func_144("SNK_NEEDED", 0, 0);
			}
		}
		else
		{
			Local_67.f_102.f_37 = 0;
			Local_67.f_102.f_44 = 0;
			func_39(&(Local_67.f_102.f_53));
			sVar0 = func_137(Local_67.f_102.f_23);
			if (unk_0xAC09CA973C564252(sVar0))
			{
				func_144(sVar0, 0, 0);
			}
		}
	}
}

int func_99(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x767FBC2AC802EF3D(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x767FBC2AC802EF3D(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x767FBC2AC802EF3D(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_100()
{
	float fVar0;
	
	fVar0 = unk_0xEC3C9B8D5327B563(2, 219);
	if ((fVar0 > 0.8f || unk_0xF3A21BCD95725A4A(2, 187)) || unk_0x580417101DDB492F(2, 242))
	{
		if (!func_14(&iLocal_637))
		{
			func_11(&iLocal_637);
			return 1;
		}
		else if (func_8(&iLocal_637) > 0.25f)
		{
			func_12(&iLocal_637);
			return 1;
		}
	}
	else if (func_14(&iLocal_637))
	{
		func_39(&iLocal_637);
	}
	return 0;
}

int func_101()
{
	float fVar0;
	
	fVar0 = unk_0xEC3C9B8D5327B563(2, 219);
	if ((fVar0 < -0.8f || unk_0xF3A21BCD95725A4A(2, 188)) || unk_0x580417101DDB492F(2, 241))
	{
		if (!func_14(&iLocal_634))
		{
			func_11(&iLocal_634);
			return 1;
		}
		else if (func_8(&iLocal_634) > 0.25f)
		{
			func_12(&iLocal_634);
			return 1;
		}
	}
	else if (func_14(&iLocal_634))
	{
		func_39(&iLocal_634);
	}
	return 0;
}

void func_102(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6)
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
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int* iVar46;
	int* iVar47;
	int* iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_134(0, bParam6))
	{
		return;
	}
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17236)
	{
		if (func_132(29, 1, 1, &fVar35, &fVar36))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17236 = 0;
		}
	}
	if (unk_0xD24D37CC275948CC(&(Global_17236.f_1)) == unk_0xD24D37CC275948CC("HIDE"))
	{
		fVar56 = Global_17234;
	}
	else
	{
		fVar56 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17235;
	}
	unk_0x888D57E407E63624(&iVar57, &iVar58);
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17236.f_4986)
		{
			if (unk_0xD24D37CC275948CC(&(Global_17236.f_1)) == unk_0xD24D37CC275948CC("HIDE"))
			{
				fVar49 = Global_17234;
			}
			else
			{
				if (Global_17236)
				{
					unk_0xE7FFAE5EBF23D890(func_131(29), func_129(29, 1), (Global_17233 + (fParam5 * 0.5f)), (Global_17234 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, false);
				}
				if (Global_17236.f_7177)
				{
					iVar1 = Global_17236.f_7173;
					iVar2 = Global_17236.f_7174;
					iVar3 = Global_17236.f_7175;
					iVar4 = Global_17236.f_7176;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_128(Global_17233, (Global_17234 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17234 + fVar55) + 0.034722f) + 0f);
				if (unk_0xD24D37CC275948CC(&(Global_17236.f_1)) != 0)
				{
					func_127();
					unk_0x25FBB336DF1804CB(&(Global_17236.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17236.f_68)
					{
						if (Global_17236.f_5[iVar14] == 2)
						{
							unk_0x03B504CF259931BC(Global_17236.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17236.f_5[iVar14] == 3)
						{
							unk_0xE7DCB5B874BCD96E(Global_17236.f_14[iVar16], Global_17236.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17236.f_5[iVar14] == 1)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 8)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_17236.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17236.f_5[iVar14] == 5)
						{
							unk_0x6C188BE134E074AA(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 6)
						{
							unk_0xC63CD5D2920ACBE7(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17236.f_5[iVar14] == 7)
						{
							unk_0x6C188BE134E074AA(&(Global_17236.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xCD015E5BB0D96A57((Global_17233 + 0.00390625f), ((Global_17234 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17236.f_4989 > Global_17236.f_4499)
				{
					if (Global_17236.f_4992 != 0)
					{
						func_127();
						func_125((((Global_17233 + fParam5) - 0.00390625f) - func_126("CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991)), ((Global_17234 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17236.f_4992, Global_17236.f_4991);
					}
				}
			}
			iVar6 = Global_17236.f_4993;
			iVar9 = 0;
			fVar59 = fVar49;
			if (Global_17236.f_7187)
			{
				iVar1 = Global_17236.f_7183;
				iVar2 = Global_17236.f_7184;
				iVar3 = Global_17236.f_7185;
				iVar4 = Global_17236.f_7186;
			}
			else
			{
				unk_0x7C9C91AB74A0360F(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17236.f_4499 && iVar6 <= Global_17236.f_4492)
			{
				if (iVar6 >= 0)
				{
					if (Global_17236.f_4753[iVar6])
					{
						if (Global_17236.f_4627[iVar6] && iVar6 != Global_17236.f_4993)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar54 = Global_17236.f_5000[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17236.f_4492 <= 1)
					{
						Global_17236.f_4492++;
					}
					iVar52 = 1;
				}
			}
			unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar59 + ((fVar49 - fVar59) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar59), 0f, 255, 255, 255, 255, false);
			if (Global_17236.f_4989 > Global_17236.f_4499)
			{
				if (Global_17236.f_7192)
				{
					iVar1 = Global_17236.f_7188;
					iVar2 = Global_17236.f_7189;
					iVar3 = Global_17236.f_7190;
					iVar4 = Global_17236.f_7191;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_128(Global_17233, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x35736EE65BD00C11("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * 0.5f);
				Var37.f_1 = (Var37.f_1 * 0.5f);
				if (Global_17236.f_7205)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "shop_arrows_upANDdown", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), (Var37.f_0 / IntToFloat(iVar57)), (Var37.f_1 / IntToFloat(iVar58)), 0f, iVar1, iVar2, iVar3, iVar4, false);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xD24D37CC275948CC(&(Global_17236.f_3969)) != 0 && Global_17236.f_4043 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_17236.f_4045 != 0)
				{
					func_132(Global_17236.f_4045, 1, 1, &fVar35, &fVar36);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_124(fVar41);
				unk_0x521FB041D93DD0E4(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x9040DFB09BE75706(fVar41, (fVar49 + 0.00277776f));
				unk_0x7C9C91AB74A0360F(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_128(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_124(fVar41);
				unk_0x25FBB336DF1804CB(&(Global_17236.f_3969));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17236.f_4039)
				{
					if (Global_17236.f_3973[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_17236.f_3978[iVar15]);
						iVar15++;
					}
					else if (Global_17236.f_3973[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_17236.f_3982[iVar16], Global_17236.f_3986[iVar16]);
						iVar16++;
					}
					else if (Global_17236.f_3973[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17236.f_3973[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_17236.f_3990[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCD015E5BB0D96A57(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17236.f_4045 != 0)
				{
					func_132(Global_17236.f_4045, 1, 1, &fVar35, &fVar36);
					func_123(Global_17236.f_4045, 1, &iVar46, &iVar47, &iVar48);
					unk_0xE7FFAE5EBF23D890(func_131(Global_17236.f_4045), func_129(Global_17236.f_4045, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
				}
				fVar49 = (fVar49 + (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17236.f_4043 > 0)
				{
					if ((unk_0x9CD27B0045628463() - Global_17236.f_4044) > Global_17236.f_4043)
					{
						StringCopy(&(Global_17236.f_3969), "", 16);
						Global_17236.f_4043 = -1;
					}
				}
			}
			if (unk_0xD24D37CC275948CC(&(Global_2542194.f_21)) != 0 && Global_2542194.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17233 + 0.0046875f);
				if (Global_2542194.f_67 != 0)
				{
					func_132(Global_2542194.f_67, 1, 1, &fVar35, &fVar36);
					fVar41 = (((Global_17233 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_124(fVar41);
				unk_0x521FB041D93DD0E4(&(Global_2542194.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2542194.f_61)
				{
					if (Global_2542194.f_25[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_2542194.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2542194.f_25[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_2542194.f_34[iVar16], Global_2542194.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2542194.f_25[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_2542194.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542194.f_25[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_2542194.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542194.f_25[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_2542194.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542194.f_25[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_2542194.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542194.f_25[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_2542194.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x9040DFB09BE75706(fVar41, (fVar49 + 0.00277776f));
				unk_0x7C9C91AB74A0360F(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_128(Global_17233, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17236.f_7197)
				{
					iVar1 = Global_17236.f_7193;
					iVar2 = Global_17236.f_7194;
					iVar3 = Global_17236.f_7195;
					iVar4 = Global_17236.f_7196;
				}
				else
				{
					unk_0x7C9C91AB74A0360F(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Bgd", (Global_17233 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false);
				func_124(fVar41);
				unk_0x25FBB336DF1804CB(&(Global_2542194.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2542194.f_61)
				{
					if (Global_2542194.f_25[iVar14] == 2)
					{
						unk_0x03B504CF259931BC(Global_2542194.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2542194.f_25[iVar14] == 3)
					{
						unk_0xE7DCB5B874BCD96E(Global_2542194.f_34[iVar16], Global_2542194.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2542194.f_25[iVar14] == 1)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_2542194.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542194.f_25[iVar14] == 8)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_2542194.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542194.f_25[iVar14] == 5)
					{
						unk_0x6C188BE134E074AA(&(Global_2542194.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542194.f_25[iVar14] == 6)
					{
						unk_0xC63CD5D2920ACBE7(&(Global_2542194.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2542194.f_25[iVar14] == 7)
					{
						unk_0x6C188BE134E074AA(&(Global_2542194.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xCD015E5BB0D96A57(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2542194.f_67 != 0)
				{
					func_132(Global_2542194.f_67, 1, 1, &fVar35, &fVar36);
					func_123(Global_2542194.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xE7FFAE5EBF23D890(func_131(Global_2542194.f_67), func_129(Global_2542194.f_67, 1), ((Global_17233 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
				}
				fVar49 = (fVar49 + (((unk_0xDB88A37483346780(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2542194.f_65 > 0)
				{
					if ((unk_0x9CD27B0045628463() - Global_2542194.f_66) > Global_2542194.f_65)
					{
						StringCopy(&(Global_2542194.f_21), "", 16);
						Global_2542194.f_65 = -1;
					}
				}
			}
			func_115(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xB8A850F20A067EB6(76, 84);
			unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17236.f_4986)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar60 = Global_17236.f_4492;
			if (Global_17236.f_4987)
			{
				iVar60 = (Global_17236.f_4990 - 1);
			}
			fVar61 = 0f;
			fVar62 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar60)
			{
				fVar54 = 0.034722f;
				if (Global_17236.f_5000[iVar6] != 0f)
				{
					fVar54 = Global_17236.f_5000[iVar6];
				}
				if (Global_17236.f_4987)
				{
					iVar6 = Global_17236.f_6833[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17236.f_4993 && iVar9 < Global_17236.f_4499)
				{
					bVar32 = true;
					if (Global_17236.f_4994 == iVar6)
					{
						fVar62 = fVar61;
					}
					if (Global_17236.f_4627[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar61) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17236.f_5131[iVar6] = fVar34;
				fVar33 = (Global_17233 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17236.f_4994 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar63 = 255;
					iVar64 = 255;
					iVar65 = 255;
					iVar66 = 255;
					if (Global_17236.f_7199)
					{
						unk_0x7C9C91AB74A0360F(Global_17236.f_7198, &iVar63, &iVar64, &iVar65, &iVar66);
					}
					else
					{
						unk_0x7C9C91AB74A0360F(1, &iVar63, &iVar64, &iVar65, &iVar66);
					}
					unk_0xE7FFAE5EBF23D890("CommonMenu", "Gradient_Nav", (Global_17233 + (fParam5 * 0.5f)), (((fVar56 + fVar62) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar63, iVar64, iVar65, iVar66, false);
					Global_17236.f_5129 = fVar34;
				}
				if (iVar52 && iVar7 == iVar60)
				{
					func_113(bVar31, 1, 0, 0, 0, 0);
					unk_0x25FBB336DF1804CB("DFLT_MNU_OPT");
					unk_0xCD015E5BB0D96A57(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17236.f_4500)
					{
						if (unk_0xA921AA820C25702F(Global_17236.f_4366[iVar6], iVar8) || Global_17236.f_4333[iVar8] == 5)
						{
							if (Global_17236.f_4987)
							{
								iVar19 = Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar20 = Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar21 = Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar22 = Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)];
								iVar23 = Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)];
							}
							else
							{
								Global_17236.f_6844[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar19;
								Global_17236.f_6885[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar20;
								Global_17236.f_6926[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar21;
								Global_17236.f_6967[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar22;
								Global_17236.f_7008[((iVar9 * Global_17236.f_4500) + iVar8)] = iVar23;
							}
							iVar67 = 0;
							bVar53 = false;
							if (Global_17236.f_5260[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[0])
								{
									bVar53 = true;
									iVar67 = 0;
								}
							}
							if (Global_17236.f_5260[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17236.f_5257[1])
								{
									bVar53 = true;
									iVar67 = 1;
								}
							}
							if (Global_17236.f_4339[iVar8] != -1f)
							{
								fVar33 = ((Global_17233 + 0.0046875f) + Global_17236.f_4339[iVar8]);
							}
							if ((iVar8 < 4 && Global_17236.f_4339[iVar8 + 1] != -1f) && fVar33 < Global_17236.f_4339[iVar8 + 1])
							{
								fVar45 = (Global_17236.f_4339[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17233 + Global_17235) - 0.0046875f) - fVar33);
							}
							if ((Global_17236.f_4352[iVar8] && Global_17236.f_5126) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17236.f_4333[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_113(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, iVar67, bVar50);
												unk_0x54CE8AC98E120CAB(&(Global_17236.f_73[iVar24 /*4*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xC63CD5D2920ACBE7(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xC63CD5D2920ACBE7(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
													}
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x6C188BE134E074AA(&(Global_2435076[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xC63CD5D2920ACBE7(&(Global_2435076[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x6C188BE134E074AA(&(Global_2435076[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0x03B504CF259931BC(Global_17236.f_3340[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
													{
														unk_0xE7DCB5B874BCD96E(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
											{
												fVar42 = unk_0x85F061DA64ED2F67(true);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_132(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17236.f_3843[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
											Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_132(26, 1, 0, &fVar35, &fVar36))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_132(26, 1, 1, &fVar35, &fVar36))
												{
													func_123(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE7FFAE5EBF23D890(func_131(26), func_129(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
												}
											}
											if (func_132(27, 1, 0, &fVar35, &fVar36))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_132(27, 1, 1, &fVar35, &fVar36))
												{
													func_123(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE7FFAE5EBF23D890(func_131(27), func_129(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5 || Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_113(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, bVar50);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_112(bVar31);
											}
											unk_0x25FBB336DF1804CB(&(Global_17236.f_73[iVar24 /*4*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_17236.f_73[(iVar24 + iVar25) /*4*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x6C188BE134E074AA(&(Global_2435076[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xC63CD5D2920ACBE7(&(Global_2435076[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x6C188BE134E074AA(&(Global_2435076[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0x03B504CF259931BC(Global_17236.f_3340[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
												{
													unk_0xE7DCB5B874BCD96E(Global_17236.f_3591[(iVar21 + iVar27)], Global_17236.f_3717[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17236.f_3843[(iVar22 + iVar28)] == 2)
												{
													if (func_132(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_132(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36))
														{
															func_123(Global_17236.f_3843[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_4360[iVar8] == 2)
															{
																unk_0xE7FFAE5EBF23D890(func_131(Global_17236.f_3843[(iVar22 + iVar28)]), func_129(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
															}
															else
															{
																unk_0xE7FFAE5EBF23D890(func_131(Global_17236.f_3843[(iVar22 + iVar28)]), func_129(Global_17236.f_3843[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[iVar24 /*4*/])) != 0)
										{
											if (iVar30 == 4 && Global_17236.f_4360[iVar8] == 2)
											{
												unk_0xCD015E5BB0D96A57(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0xCD015E5BB0D96A57((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17236.f_3843[(iVar22 + iVar14)] != 2)
												{
													if (func_132(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_132(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36))
														{
															func_123(Global_17236.f_3843[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17236.f_3843[(iVar22 + iVar14)] == 30)
															{
																unk_0xE7FFAE5EBF23D890(func_131(Global_17236.f_3843[(iVar22 + iVar14)]), func_129(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (Global_17233 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
															}
															else if (Global_17236.f_4360[iVar8] == 2)
															{
																unk_0xE7FFAE5EBF23D890(func_131(Global_17236.f_3843[(iVar22 + iVar14)]), func_129(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
															}
															else
															{
																unk_0xE7FFAE5EBF23D890(func_131(Global_17236.f_3843[(iVar22 + iVar14)]), func_129(Global_17236.f_3843[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17236.f_1576[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											func_113(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_112(bVar31);
											}
											unk_0x54CE8AC98E120CAB("NUMBER");
											unk_0x03B504CF259931BC(Global_17236.f_3340[iVar20]);
											fVar42 = unk_0x85F061DA64ED2F67(true);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_132(26, 1, 0, &fVar35, &fVar36))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_132(26, 1, 1, &fVar35, &fVar36))
												{
													func_123(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE7FFAE5EBF23D890(func_131(26), func_129(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
												}
											}
											if (func_132(27, 1, 0, &fVar35, &fVar36))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_132(27, 1, 1, &fVar35, &fVar36))
												{
													func_123(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE7FFAE5EBF23D890(func_131(27), func_129(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
												}
											}
										}
										func_113(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_111((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3340[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17236.f_4987)
										{
											func_113(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
											if (Global_17236.f_7203 && Global_17236.f_7204 == iVar6)
											{
												func_112(bVar31);
											}
											unk_0x54CE8AC98E120CAB("NUMBER");
											unk_0xE7DCB5B874BCD96E(Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
											fVar42 = unk_0x85F061DA64ED2F67(true);
											fVar41 = 0f;
											if (Global_17236.f_4360[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17236.f_4360[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
											Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
											fVar42 = Global_17236.f_7090[((iVar9 * Global_17236.f_4500) + iVar8)];
										}
										if (bVar51)
										{
											if (func_132(26, 1, 0, &fVar35, &fVar36))
											{
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_132(26, 1, 1, &fVar35, &fVar36))
												{
													func_123(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE7FFAE5EBF23D890(func_131(26), func_129(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
												}
											}
											if (func_132(27, 1, 0, &fVar35, &fVar36))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_132(27, 1, 1, &fVar35, &fVar36))
												{
													func_123(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE7FFAE5EBF23D890(func_131(27), func_129(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
												}
											}
										}
										func_113(bVar31, Global_17236.f_1074[iVar24], Global_17236.f_1325[iVar24], bVar53, 0, 0);
										func_110((fVar33 + fVar41), fVar34, "NUMBER", Global_17236.f_3591[iVar21], Global_17236.f_3717[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_132(Global_17236.f_3843[iVar22], bVar31, 0, &fVar35, &fVar36))
										{
											if (!Global_17236.f_4987)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17236.f_4360[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17236.f_4360[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar41;
												Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17236.f_7049[((iVar9 * Global_17236.f_4500) + iVar8)];
												fVar43 = Global_17236.f_7131[((iVar9 * Global_17236.f_4500) + iVar8)];
											}
											if (bVar51)
											{
												if (func_132(26, 1, 0, &fVar35, &fVar36))
												{
													if (Global_17236.f_4360[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_132(26, 1, 1, &fVar35, &fVar36))
													{
														func_123(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xE7FFAE5EBF23D890(func_131(26), func_129(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
													}
												}
												if (func_132(27, 1, 0, &fVar35, &fVar36))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_132(27, 1, 1, &fVar35, &fVar36))
													{
														func_123(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xE7FFAE5EBF23D890(func_131(27), func_129(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, false);
													}
												}
											}
											if (func_132(Global_17236.f_3843[iVar22], bVar31, 1, &fVar35, &fVar36))
											{
												func_123(Global_17236.f_3843[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xE7FFAE5EBF23D890(func_131(Global_17236.f_3843[iVar22]), func_129(Global_17236.f_3843[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_109(Global_17236.f_3843[iVar22])), (fVar36 * func_109(Global_17236.f_3843[iVar22])), 0f, iVar46, iVar47, iVar48, 255, false);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17236.f_4333[iVar8] == 5)
							{
								if (Global_17236.f_4345[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
								if (Global_17236.f_4352[iVar8])
								{
									if (func_132(26, 1, 1, &fVar35, &fVar36))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17236.f_4345[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17236.f_6833[iVar9] = iVar6;
						Global_17236.f_4995 = iVar6;
						iVar9++;
						if (Global_17236.f_4627[iVar6])
						{
							iVar13++;
						}
						if (Global_17236.f_5000[iVar6] != 0f)
						{
							fVar61 = (fVar61 + Global_17236.f_5000[iVar6]);
						}
						else
						{
							fVar61 = (fVar61 + 0.034722f);
						}
					}
					if (!Global_17236.f_4986)
					{
						Global_17236.f_4753[iVar6] = 1;
						if (Global_17236.f_4501[iVar6])
						{
							if (bVar31)
							{
								Global_17236.f_4992 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17236.f_4992 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17236.f_4986)
			{
				Global_17236.f_4988 = ((fVar56 + fVar61) + (0.00277776f * IntToFloat(iVar12)));
				Global_17236.f_4991 = iVar11;
				Global_17236.f_4989 = iVar10;
				Global_17236.f_4986 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17236.f_4987)
	{
		Global_17236.f_4990 = iVar9;
		Global_17236.f_4987 = 1;
	}
	Global_17236.f_5128 = fVar49;
	Global_17236.f_5130 = unk_0x9CD27B0045628463();
	unk_0x55598D21339CB998(Global_17236.f_5128);
	if (!Global_17236.f_7172)
	{
		func_104();
	}
	Global_17236.f_7172 = 0;
	if (bParam2)
	{
		unk_0x6806C51AD12B83B8(10);
	}
	unk_0x6806C51AD12B83B8(6);
	unk_0x6806C51AD12B83B8(7);
	unk_0x6806C51AD12B83B8(9);
	unk_0x6806C51AD12B83B8(8);
	if (bParam0)
	{
		func_103(1);
	}
	unk_0xE3A3DB414A373DAB();
}

void func_103(int iParam0)
{
	Global_1328798.f_404 = iParam0;
}

void func_104()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_108(0))
		{
			func_105(0);
		}
		unk_0x933D6A9EEC1BACD0(&Global_2264, 2);
	}
}

void func_105(int iParam0)
{
	if (Global_14551)
	{
		func_107(0, 0);
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
	if (!func_106())
	{
		Global_14393.f_1 = 3;
	}
}

int func_106()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_107(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_108(0))
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

int func_108(int iParam0)
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

float func_109(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_110(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0xE7DCB5B874BCD96E(fParam3, iParam4);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

void func_111(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0x03B504CF259931BC(iParam3);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, iParam4);
}

void func_112(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x7C9C91AB74A0360F(Global_17236.f_7200[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x7C9C91AB74A0360F(Global_17236.f_7200[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, 255);
}

void func_113(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_114(Global_17236.f_5260[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x7C9C91AB74A0360F(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x7C9C91AB74A0360F(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x7C9C91AB74A0360F(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
		}
		else
		{
			unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xBE6B23FFA53FB442(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0x7C9C91AB74A0360F(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
	}
	else
	{
		unk_0xBE6B23FFA53FB442(155, 155, 155, 255);
	}
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0x4E096588B13FFECA(1);
	if (bParam5)
	{
		unk_0x07C837F9A01C34C9(0f, 0.425f);
		unk_0x66E0276CC5F6B9DA(4);
	}
	else
	{
		unk_0x66E0276CC5F6B9DA(0);
	}
	unk_0x63145D9C883A1A70(0f, 1f);
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_114(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_115(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_134(bParam4, bParam8))
	{
		return;
	}
	if (func_121())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_118(unk_0x4F8644AF03D0E0D6(), 0))
		{
			return;
		}
	}
	if (unk_0x48AF36444B965238())
	{
		if (unk_0x0CF2B696BBF945AE() == 0)
		{
			return;
		}
	}
	if (Global_17236.f_4046 != 0)
	{
		if (unk_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (Global_17236.f_4303[iVar1] != 332)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), unk_0x0499D7B09FC9B407(2, Global_17236.f_4303[iVar1], true), 64);
				}
				else if (Global_17236.f_4316[iVar1] != 31)
				{
					StringCopy(&(Global_17236.f_4048[iVar1 /*16*/]), unk_0x80C2FD58D720C801(2, Global_17236.f_4316[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17236.f_4047 = 0;
		}
		if (!Global_17236.f_4047)
		{
			unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD69736AAE04DB51A((1f - (Global_17236.f_4358 / 100f)));
			unk_0xC6796A8FFA375E53();
			if (unk_0x48AF36444B965238())
			{
				unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xC58424BA936EB458(true);
				unk_0xC6796A8FFA375E53();
			}
			iVar1 = 0;
			while (iVar1 < Global_17236.f_4046)
			{
				if (unk_0xD24D37CC275948CC(&(Global_17236.f_4241[iVar1 /*4*/])) != unk_0xD24D37CC275948CC("PREV"))
				{
					unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xC3D0841A0CC546A6(iVar1);
					func_117(&(Global_17236.f_4048[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xD24D37CC275948CC(&(Global_17236.f_4241[iVar2 /*4*/])) == unk_0xD24D37CC275948CC("PREV"))
					{
						func_117(&(Global_17236.f_4048[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17236.f_4290[iVar1] == -1)
					{
						func_116(&(Global_17236.f_4241[iVar1 /*4*/]));
					}
					else
					{
						unk_0x80338406F3475E55(&(Global_17236.f_4241[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x1115F16B8AB9E8BF(iParam2, 70);
						}
						else
						{
							unk_0x03B504CF259931BC(iParam2);
						}
						unk_0x362E2D3FE93A9959();
					}
					if (unk_0x48AF36444B965238())
					{
						if (Global_17236.f_4303[iVar1] != 332 && unk_0xA921AA820C25702F(Global_17236.f_4329, iVar1))
						{
							unk_0xC58424BA936EB458(true);
							unk_0xC3D0841A0CC546A6(Global_17236.f_4303[iVar1]);
						}
						else
						{
							unk_0xC58424BA936EB458(false);
							unk_0xC3D0841A0CC546A6(332);
						}
					}
					unk_0xC6796A8FFA375E53();
				}
				iVar1++;
			}
			if (unk_0xD24D37CC275948CC(&(Global_2542194.f_16)) != unk_0xD24D37CC275948CC(""))
			{
				unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xC3D0841A0CC546A6(Global_17236.f_4046);
				func_117(&Global_2542194);
				if (Global_2542194.f_20 == -1)
				{
					func_116(&(Global_2542194.f_16));
				}
				else
				{
					unk_0x80338406F3475E55(&(Global_2542194.f_16));
					if (bParam5)
					{
						unk_0x1115F16B8AB9E8BF(iParam2, 70);
					}
					else
					{
						unk_0x03B504CF259931BC(iParam2);
					}
					unk_0x362E2D3FE93A9959();
				}
				unk_0xC6796A8FFA375E53();
			}
			unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xC3D0841A0CC546A6(0);
			unk_0xC3D0841A0CC546A6(0);
			unk_0xC3D0841A0CC546A6(0);
			unk_0xC3D0841A0CC546A6(80);
			unk_0xC6796A8FFA375E53();
			unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17236.f_4359)
			{
				unk_0xC3D0841A0CC546A6(1);
			}
			else
			{
				unk_0xC3D0841A0CC546A6(0);
			}
			unk_0xC6796A8FFA375E53();
			Global_17236.f_4047 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17236.f_4046)
		{
			if (Global_17236.f_4290[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xC3D0841A0CC546A6(iVar1);
					unk_0x80338406F3475E55(&(Global_17236.f_4241[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x1115F16B8AB9E8BF(iParam2, 70);
					}
					else
					{
						unk_0x03B504CF259931BC(iParam2);
					}
					unk_0x362E2D3FE93A9959();
					unk_0xC6796A8FFA375E53();
				}
			}
			iVar1++;
		}
		if (Global_2542194.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xF6E48914C7A8694E(Global_17236.f_4918[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xC3D0841A0CC546A6(iVar1);
				unk_0x80338406F3475E55(&(Global_2542194.f_16));
				if (bParam5)
				{
					unk_0x1115F16B8AB9E8BF(iParam2, 70);
				}
				else
				{
					unk_0x03B504CF259931BC(iParam2);
				}
				unk_0x362E2D3FE93A9959();
				unk_0xC6796A8FFA375E53();
			}
		}
		unk_0xB8A850F20A067EB6(76, 66);
		unk_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17236.f_7207)
			{
				unk_0xAABB1F56E2A17CED(15, 0f, -0.0375f);
				Global_17236.f_7207 = 1;
			}
		}
		else if (Global_17236.f_7207)
		{
			unk_0x450930E616475D0D(15);
			Global_17236.f_7207 = 0;
		}
		unk_0xE3A3DB414A373DAB();
		if (Global_17236.f_4332)
		{
			unk_0xB8A850F20A067EB6(82, 66);
			unk_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
			unk_0x54972ADAF0294A93(Global_17236.f_4918[iVar0 /*10*/], Global_17236.f_4330, Global_17236.f_4331, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xE3A3DB414A373DAB();
		}
		else
		{
			unk_0x0DF606929C105BE1(Global_17236.f_4918[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_116(char* sParam0)
{
	unk_0x80338406F3475E55(sParam0);
	unk_0x362E2D3FE93A9959();
}

void func_117(char* sParam0)
{
	unk_0xE83A3E3557A56640(sParam0);
}

bool func_118(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_119(-1, 0) == 8;
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

int func_119(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_120();
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

int func_120()
{
	return Global_1312736;
}

int func_121()
{
	struct<3> Var0;
	
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	if (func_122())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x584FDFDA48805B86(&Var0);
		if (Global_14338 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_122()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_123(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4)
{
	var uVar0;
	
	unk_0x7C9C91AB74A0360F(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_124(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x7C9C91AB74A0360F(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x66E0276CC5F6B9DA(0);
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0xA50ABC31E3CDFAFF(2);
	unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, iVar3);
	unk_0x63145D9C883A1A70(fParam0, ((Global_17233 + Global_17235) - 0.0046875f));
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_125(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x25FBB336DF1804CB(sParam2);
	unk_0x03B504CF259931BC(iParam3);
	unk_0x03B504CF259931BC(iParam4);
	unk_0xCD015E5BB0D96A57(fParam0, fParam1, 0);
}

float func_126(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xF22B6C47C6EAB066(sParam0))
	{
		if (unk_0xD24D37CC275948CC(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_127();
	unk_0x54CE8AC98E120CAB(sParam0);
	unk_0x03B504CF259931BC(iParam1);
	unk_0x03B504CF259931BC(iParam2);
	return unk_0x85F061DA64ED2F67(true);
}

void func_127()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x7C9C91AB74A0360F(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17236.f_7182)
	{
		iVar0 = Global_17236.f_7178;
		iVar1 = Global_17236.f_7179;
		iVar2 = Global_17236.f_7180;
		iVar3 = Global_17236.f_7181;
	}
	unk_0x66E0276CC5F6B9DA(0);
	unk_0x07C837F9A01C34C9(0f, 0.35f);
	unk_0xBE6B23FFA53FB442(iVar0, iVar1, iVar2, iVar3);
	unk_0x63145D9C883A1A70((Global_17233 + 0.0046875f), ((Global_17233 + Global_17235) - 0.0046875f));
	unk_0xC02F4DBFB51D988B(false);
	unk_0x465C84BC39F1C351(0, 0, 0, 0, 0);
	unk_0x441603240D202FA6(0, 0, 0, 0, 0);
}

void func_128(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x3A618A217E5154F0((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

var func_129(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0xCA042B6957743895(&(Global_17236.f_6048[iParam0 /*16*/])))
	{
		return func_130(&(Global_17236.f_6048[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_130(var uParam0)
{
	return uParam0;
}

char* func_131(int iParam0)
{
	if (!unk_0xCA042B6957743895(&(Global_17236.f_5263[iParam0 /*16*/])))
	{
		return func_130(&(Global_17236.f_5263[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_132(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	sVar0 = func_131(iParam0);
	sVar1 = func_129(iParam0, bParam1);
	if (unk_0xD24D37CC275948CC(sVar1) != 0)
	{
		unk_0x888D57E407E63624(&iVar2, &iVar3);
		Var4 = { unk_0x35736EE65BD00C11(sVar0, sVar1) };
		Var4.f_0 = (Var4.f_0 * func_133(iParam0));
		Var4.f_1 = (Var4.f_1 * func_133(iParam0));
		if (!bParam2)
		{
			Var4.f_0 = (Var4.f_0 - 2f);
			Var4.f_1 = (Var4.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var4.f_0 = 288f;
			Var4.f_1 = 106f;
		}
		*fParam3 = ((Var4.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var4.f_1 / IntToFloat(iVar3)) / (Var4.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!unk_0x30CF4BDA4FCB1905() && iParam0 != 30)
		{
			*fParam3 = (*fParam3 * 1.33f);
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17235)
			{
				*fParam4 = (*fParam4 * (Global_17235 / *fParam3));
				*fParam3 = Global_17235;
			}
		}
		return 1;
	}
	return 0;
}

float func_133(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_134(bool bParam0, bool bParam1)
{
	if (Global_2421967.f_1309.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x5A859503B0C08678() || (func_136(8, -1) && func_135() != 65)) || (unk_0x272ACD84970869C5() != 0 && !bParam1)) || (unk_0xD9D2CFFF49FAB35F() && !bParam0)) || unk_0x2EAC52B4019E2782()) || Global_68327) || Global_17236.f_7206) || unk_0xE18B138FABC53103()) || Global_89836.f_1318)
	{
		return 0;
	}
	return 1;
}

int func_135()
{
	return Global_1315830;
}

bool func_136(int iParam0, int iParam1)
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

char* func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		default:
	}
	return "";
}

int func_138()
{
	if (unk_0xA571D46727E2B718(2))
	{
		if (Global_2542270 > -1)
		{
			if (unk_0x580417101DDB492F(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_139(int iParam0, int iParam1)
{
	if (!unk_0xA571D46727E2B718(2))
	{
		return 0;
	}
	if (unk_0xB0034A223497FFCB() || unk_0xE18B138FABC53103())
	{
		return 0;
	}
	unk_0xAAE7CE1D63167423();
	if (Global_2542270 == -6)
	{
		unk_0x8DB8CFFD58B62552(4);
		if (iParam0 && unk_0xF3A21BCD95725A4A(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2542270 = -1;
			return 0;
		}
	}
	if (((Global_2542270 > -1 || Global_2542270 == -3) || Global_2542270 == -2) || unk_0x3D9ACB1EB139E702())
	{
		unk_0x8DB8CFFD58B62552(1);
		return 0;
	}
	if (Global_2542270 == -1 && iParam0)
	{
		if (unk_0xF3A21BCD95725A4A(2, 237))
		{
			unk_0x8DB8CFFD58B62552(4);
			Global_2542270 = -6;
			return 1;
		}
		else
		{
			unk_0x8DB8CFFD58B62552(3);
			return 0;
		}
	}
	unk_0x8DB8CFFD58B62552(1);
	return 0;
}

void func_140(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0xA571D46727E2B718(2))
	{
		Global_2542270 = -1;
		return;
	}
	unk_0x5B73C77D9EB66E24(true);
	fVar0 = Global_17233;
	fVar2 = (fVar0 + Global_17235);
	fVar3 = Global_17236.f_4988;
	fVar1 = (Global_17236.f_4988 - (IntToFloat(Global_17236.f_4990) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17236.f_4990 < 1)
	{
		fVar1 = (Global_17236.f_4988 - 0.034722f);
	}
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xE3A3DB414A373DAB();
	func_142();
	if (Global_2542270 == -6)
	{
		return;
	}
	Global_2542270 = -1;
	fVar7 = Global_2542264;
	fVar8 = Global_2542265;
	if (Global_17236.f_4991 > Global_17236.f_4990)
	{
		if (((Global_2542264 >= fVar0 && Global_2542264 <= fVar2) && Global_2542265 >= fVar3) && Global_2542265 < (fVar3 + fVar6))
		{
			Global_2542270 = -2;
			if (bParam3)
			{
				func_141(0);
			}
			return;
		}
		if (((Global_2542264 >= fVar0 && Global_2542264 <= fVar2) && Global_2542265 >= (fVar3 + fVar6)) && Global_2542265 < (fVar3 + 0.034722f))
		{
			Global_2542270 = -3;
			if (bParam3)
			{
				func_141(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17236.f_4991 == -1)
		{
			Global_2542270 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17236.f_4990);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xB8A850F20A067EB6(76, 84);
				unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
				func_128(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17235, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xE3A3DB414A373DAB();
			}
		}
		Global_2542270 = Global_17236.f_6833[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2542270 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2542270 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2542270 = -4;
		return;
	}
	Global_2542270 = -1;
}

void func_141(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17233;
	fVar1 = Global_17236.f_4988;
	unk_0xB8A850F20A067EB6(76, 84);
	unk_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	if (Global_2542270 == -2)
	{
		func_128(fVar0, fVar1, Global_17235, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2542270 == -3)
	{
		func_128(fVar0, (fVar1 + fVar2), Global_17235, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xE3A3DB414A373DAB();
}

void func_142()
{
	Global_2542266 = Global_2542264;
	Global_2542267 = Global_2542265;
	Global_2542264 = unk_0x11E65974A982637C(2, 239);
	Global_2542265 = unk_0x11E65974A982637C(2, 240);
	Global_2542268 = (Global_2542264 - Global_2542266);
	Global_2542269 = (Global_2542265 - Global_2542267);
}

void func_143(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x0499D7B09FC9B407(2, iParam0, true);
	if (Global_17236.f_4046 >= 12)
	{
		StringCopy(&Global_2542194, sVar0, 64);
		StringCopy(&(Global_2542194.f_16), sParam1, 16);
		Global_2542194.f_20 = iParam2;
		return;
		return;
	}
	unk_0x933D6A9EEC1BACD0(&(Global_17236.f_4329), Global_17236.f_4046);
	StringCopy(&(Global_17236.f_4048[Global_17236.f_4046 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17236.f_4241[Global_17236.f_4046 /*4*/]), sParam1, 16);
	Global_17236.f_4290[Global_17236.f_4046] = iParam2;
	Global_17236.f_4303[Global_17236.f_4046] = iParam0;
	Global_17236.f_4316[Global_17236.f_4046] = 31;
	Global_17236.f_4046++;
}

void func_144(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17236.f_3969), sParam0, 16);
	Global_17236.f_4039 = 0;
	Global_17236.f_4040 = 0;
	Global_17236.f_4041 = 0;
	Global_17236.f_4042 = 0;
	Global_17236.f_4043 = iParam1;
	Global_17236.f_4044 = unk_0x9CD27B0045628463();
	Global_17236.f_4045 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_3973[iVar0] = 0;
		iVar0++;
	}
}

void func_145(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17236.f_4994 = uParam0;
	Global_17236.f_5126 = iParam2;
	if (Global_17236.f_4994 < Global_17236.f_4993)
	{
		Global_17236.f_4993 = Global_17236.f_4994;
	}
	else if ((Global_17236.f_4987 && Global_17236.f_4994 > Global_17236.f_4995) || (!Global_17236.f_4987 && Global_17236.f_4994 >= (Global_17236.f_4993 + Global_17236.f_4499)))
	{
		iVar0 = Global_17236.f_4993;
		while (iVar0 <= Global_17236.f_4994)
		{
			if (iVar0 >= 0 && iVar0 < 124)
			{
				if (Global_17236.f_4366[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17236.f_4499 && Global_17236.f_4993 < 125)
		{
			Global_17236.f_4993++;
			iVar1 = 0;
			iVar0 = Global_17236.f_4993;
			while (iVar0 <= Global_17236.f_4994)
			{
				if (iVar0 >= 0 && iVar0 < 124)
				{
					if (Global_17236.f_4366[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17236.f_4986 = 0;
	Global_17236.f_4987 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17236.f_3969), "", 16);
		StringCopy(&(Global_2542194.f_21), "", 16);
	}
}

void func_146(int iParam0)
{
	Global_17236.f_4993 = iParam0;
}

void func_147(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17236.f_4496 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 >= 4)
	{
		return;
	}
	if (Global_17236.f_4999 != 1)
	{
		return;
	}
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		return;
	}
	Global_17236.f_3340[Global_17236.f_4496] = uParam0;
	Global_17236.f_4496++;
	Global_17236.f_1576[Global_17236.f_4997 /*5*/][Global_17236.f_4998] = 2;
	Global_17236.f_4998++;
	if (Global_17236.f_4998 >= Global_17236.f_4996)
	{
		fVar0 = func_149();
		if (Global_17236.f_4352[Global_17236.f_4493] && Global_17236.f_4998 == Global_17236.f_4996)
		{
			func_132(26, 1, 0, &fVar1, &uVar2);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17236.f_4345[(Global_17236.f_4493 - 1)])
		{
			Global_17236.f_4345[(Global_17236.f_4493 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17236.f_4998 >= Global_17236.f_4996)
		{
			fVar3 = func_148();
			if (fVar3 > Global_17236.f_5000[Global_17236.f_4492])
			{
				Global_17236.f_5000[Global_17236.f_4492] = fVar3;
			}
		}
	}
}

float func_148()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17236.f_4998)
	{
		if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17236.f_3843[((Global_17236.f_4498 - iVar1) + iVar0)] != 0)
		{
			if (func_132(Global_17236.f_3843[((Global_17236.f_4498 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xDB88A37483346780(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0xDB88A37483346780(0.35f, 0);
}

float func_149()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17236.f_4998)
	{
		if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_113(0, 1, 0, 0, 0, iVar6 > 0);
	if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
	{
		unk_0x54CE8AC98E120CAB(&(Global_17236.f_73[Global_17236.f_4997 /*4*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17236.f_4998)
	{
		if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0xC63CD5D2920ACBE7(&(Global_17236.f_73[(Global_17236.f_4997 + iVar8) /*4*/]));
			}
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0xC63CD5D2920ACBE7(&(Global_17236.f_73[(Global_17236.f_4997 + iVar8) /*4*/]));
			}
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 2)
		{
			if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0x03B504CF259931BC(Global_17236.f_3340[((Global_17236.f_4496 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 3)
		{
			if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0xE7DCB5B874BCD96E(Global_17236.f_3591[((Global_17236.f_4497 - iVar4) + iVar10)], Global_17236.f_3717[((Global_17236.f_4497 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 5)
		{
			if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0x6C188BE134E074AA(&(Global_2435076[((Global_17236.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 6)
		{
			if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0xC63CD5D2920ACBE7(&(Global_2435076[((Global_17236.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17236.f_1576[Global_17236.f_4997 /*5*/][iVar7] == 7)
		{
			if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
			{
				unk_0x6C188BE134E074AA(&(Global_2435076[((Global_17236.f_4495 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0xD24D37CC275948CC(&(Global_17236.f_73[Global_17236.f_4997 /*4*/])) != 0)
	{
		fVar0 = unk_0x85F061DA64ED2F67(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17236.f_3843[((Global_17236.f_4498 - iVar5) + iVar7)] != 0)
		{
			func_132(Global_17236.f_3843[((Global_17236.f_4498 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_151(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17236.f_4492 > iParam0)
	{
		return;
	}
	if (Global_17236.f_4492 >= 125)
	{
		return;
	}
	if (Global_17236.f_4494 >= 250)
	{
		return;
	}
	if (Global_17236.f_4998 < Global_17236.f_4996)
	{
		return;
	}
	if (Global_17236.f_4492 != iParam0)
	{
		Global_17236.f_4492 = iParam0;
		Global_17236.f_4493 = 0;
	}
	iVar0 = Global_17236.f_4333[Global_17236.f_4493];
	if (iVar0 != 1)
	{
		while (Global_17236.f_4493 < 4 && iVar0 != 1)
		{
			Global_17236.f_4493++;
			iVar0 = Global_17236.f_4333[Global_17236.f_4493];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17236.f_73[Global_17236.f_4494 /*4*/]), sParam1, 16);
	Global_17236.f_1074[Global_17236.f_4494] = iParam3;
	Global_17236.f_1325[Global_17236.f_4494] = iParam4;
	Global_17236.f_4494++;
	if (iParam2 == 0)
	{
		fVar1 = func_153(sParam1);
		if (Global_17236.f_4352[Global_17236.f_4493])
		{
			func_132(26, 1, 0, &fVar2, &uVar3);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17236.f_4345[Global_17236.f_4493])
		{
			Global_17236.f_4345[Global_17236.f_4493] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_152(sParam1);
			if (fVar4 > Global_17236.f_5000[iParam0])
			{
				Global_17236.f_5000[iParam0] = fVar4;
			}
		}
	}
	unk_0x933D6A9EEC1BACD0(&(Global_17236.f_4366[iParam0]), Global_17236.f_4493);
	Global_17236.f_4493++;
	Global_17236.f_4999 = 1;
	Global_17236.f_4997 = (Global_17236.f_4494 - 1);
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = iParam2;
}

float func_152(char* sParam0)
{
	if (!unk_0xAC09CA973C564252(sParam0))
	{
	}
	return unk_0xDB88A37483346780(0.35f, 0);
}

float func_153(char* sParam0)
{
	if (!unk_0xF22B6C47C6EAB066(sParam0))
	{
		if (unk_0xD24D37CC275948CC(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_113(0, 1, 0, 0, 0, 0);
	unk_0x54CE8AC98E120CAB(sParam0);
	return unk_0x85F061DA64ED2F67(true);
}

void func_154()
{
	if (unk_0x48AF36444B965238())
	{
		unk_0xFC695459D4D0E219(0.325f, 0.3f);
	}
}

void func_155(int iParam0, char* sParam1, char* sParam2)
{
	Global_17236 = iParam0;
	func_156(29, sParam1, sParam2);
}

void func_156(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17236.f_5263[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17236.f_6048[iParam0 /*16*/]), sParam2, 64);
}

void func_157(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17236.f_1), sParam0, 16);
	Global_17236.f_68 = 0;
	Global_17236.f_69 = 0;
	Global_17236.f_70 = 0;
	Global_17236.f_71 = 0;
	Global_17236.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17236.f_4360[0] = iParam0;
	Global_17236.f_4360[1] = iParam1;
	Global_17236.f_4360[2] = iParam2;
	Global_17236.f_4360[3] = iParam3;
	Global_17236.f_4360[4] = iParam4;
}

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17236.f_4333[0] = iParam0;
	Global_17236.f_4333[1] = iParam1;
	Global_17236.f_4333[2] = iParam2;
	Global_17236.f_4333[3] = iParam3;
	Global_17236.f_4333[4] = iParam4;
	Global_17236.f_4500 = 0;
	if (iParam0 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam1 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam2 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam3 != 0)
	{
		Global_17236.f_4500++;
	}
	if (iParam4 != 0)
	{
		Global_17236.f_4500++;
	}
}

void func_160()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 250)
	{
		StringCopy(&(Global_17236.f_73[iVar0 /*4*/]), "", 16);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17236.f_1576[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2435076[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 250)
	{
		Global_17236.f_3340[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_3591[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_3843[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17236.f_4366[iVar0] = 0;
		Global_17236.f_4501[iVar0] = 0;
		Global_17236.f_4627[iVar0] = 0;
		Global_17236.f_5131[iVar0] = 0f;
		Global_17236.f_4753[iVar0] = 0;
		Global_17236.f_5000[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17236.f_4333[iVar0] = 0;
		Global_17236.f_4345[iVar0] = 0f;
		Global_17236.f_4339[iVar0] = -1f;
		Global_17236.f_4352[iVar0] = 0;
		Global_17236.f_4360[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17236.f_4241[iVar0 /*4*/]), "", 16);
		Global_17236.f_4290[iVar0] = -1;
		Global_17236.f_4303[iVar0] = 332;
		Global_17236.f_4316[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&(Global_17236.f_5263[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17236.f_6048[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2542194.f_16), "", 16);
	Global_2542194.f_20 = -1;
	Global_17236 = 0;
	Global_17236.f_4492 = 0;
	Global_17236.f_4493 = 0;
	Global_17236.f_4494 = 0;
	Global_17236.f_4496 = 0;
	Global_17236.f_4497 = 0;
	Global_17236.f_4498 = 0;
	Global_17236.f_4495 = 0;
	Global_17236.f_5126 = 0;
	Global_17236.f_4994 = 0;
	Global_17236.f_4993 = 0;
	Global_17236.f_4995 = 0;
	StringCopy(&(Global_17236.f_3969), "", 16);
	Global_17236.f_4039 = 0;
	Global_17236.f_4040 = 0;
	Global_17236.f_4041 = 0;
	Global_17236.f_4042 = 0;
	Global_17236.f_4043 = 0;
	Global_17236.f_4044 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_3973[iVar0] = 0;
		iVar0++;
	}
	Global_17236.f_4045 = 0;
	StringCopy(&(Global_2542194.f_21), "", 16);
	Global_2542194.f_61 = 0;
	Global_2542194.f_62 = 0;
	Global_2542194.f_63 = 0;
	Global_2542194.f_64 = 0;
	Global_2542194.f_65 = 0;
	Global_2542194.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2542194.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2542194.f_67 = 0;
	StringCopy(&(Global_17236.f_1), "", 16);
	Global_17236.f_4351 = 0f;
	Global_17236.f_68 = 0;
	Global_17236.f_69 = 0;
	Global_17236.f_70 = 0;
	Global_17236.f_71 = 0;
	Global_17236.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17236.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17236.f_4999 = 0;
	Global_17236.f_4998 = 0;
	Global_17236.f_4996 = 0;
	Global_17236.f_4997 = 0;
	Global_17236.f_4046 = 0;
	Global_17236.f_4047 = 0;
	Global_17236.f_4499 = 10;
	Global_17236.f_4500 = 0;
	Global_17236.f_5128 = 0f;
	Global_17236.f_5129 = 0f;
	Global_17236.f_4986 = 0;
	Global_17236.f_4987 = 0;
	Global_17236.f_4988 = 0f;
	Global_17236.f_4989 = 0;
	Global_17236.f_4991 = 0;
	Global_17236.f_4990 = 0;
	Global_17236.f_4992 = 0;
	Global_17236.f_7203 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17236.f_5257[iVar0] = -1;
		Global_17236.f_5260[iVar0] = -1;
		iVar0++;
	}
	Global_17236.f_4358 = 0f;
	Global_17236.f_4329 = 0;
	Global_17236.f_4359 = 0;
	Global_17236.f_7182 = 0;
	Global_17236.f_7177 = 0;
	Global_17236.f_7187 = 0;
	Global_17236.f_7192 = 0;
	Global_17236.f_7197 = 0;
	Global_17236.f_7199 = 0;
	Global_17236.f_7205 = 0;
	Global_17233 = 0.05f;
	Global_17234 = 0.05f;
	Global_17235 = 0.225f;
	fVar2 = unk_0xF1307EF624A80D87(false);
	if (fVar2 < 1.77777f)
	{
		Global_17235 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_17235 = 0.225f;
	}
}

int func_161(int iParam0, struct<3> Param1, float fParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam5 = { unk_0x163E252DE035A133(Param1, fParam4, 2.40015f, -7.75244f, 1.0825f) };
			*uParam6 = -4.2069f;
			uParam6->f_1 = -0.027f;
			uParam6->f_2 = (fParam4 + 22.8175f);
			*uParam7 = 32.8283f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam5 = { unk_0x163E252DE035A133(Param1, fParam4, 3.80296f, -5.391f, 1.213f) };
			*uParam6 = -9.3866f;
			uParam6->f_1 = -0.0011f;
			uParam6->f_2 = (fParam4 + 46.9866f);
			*uParam7 = 35f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam5 = { unk_0x163E252DE035A133(Param1, fParam4, 2.97963f, -3.39452f, 0.934498f) };
			*uParam6 = -8.483f;
			uParam6->f_1 = 0.0149f;
			uParam6->f_2 = (fParam4 + 53.5519f);
			*uParam7 = 35f;
			break;
		
		case -2:
			*uParam5 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam6 = { -3.6091f, 0.022f, -8.6461f };
			*uParam7 = 35f;
			break;
	}
	return 1;
}

void func_162(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_24688, iParam0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_24688, iParam0);
	}
}

int func_163(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_164(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5E9564D8246B909A(unk_0xA5EDC40EF369B48D()))
	{
		return 0;
	}
	if (func_108(0))
	{
		return 0;
	}
	if (unk_0xD3C2E180A40F031E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/] == 1 && Global_35609[iVar0 /*18*/].f_3 == 1)
		{
			if (bParam1)
			{
				if (Global_35609[iVar0 /*18*/].f_16)
				{
					return 0;
				}
			}
			Global_35609[iVar0 /*18*/].f_4 = 1;
			Global_35609[iVar0 /*18*/].f_16 = 1;
			return 1;
		}
		else
		{
			if (Global_35609[iVar0 /*18*/] == 0)
			{
			}
			if (Global_35609[iVar0 /*18*/].f_6)
			{
			}
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_165(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_164(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_35609[iVar0 /*18*/].f_5)
	{
		return 0;
	}
	bVar1 = false;
	if (!Global_35609[iVar0 /*18*/].f_11)
	{
		unk_0x0A24DA3A41B718F5(&(Global_35609[iVar0 /*18*/].f_7));
		unk_0xC63CD5D2920ACBE7(&Global_35720);
		bVar1 = unk_0x10BDDBFC529428DD(0);
	}
	else
	{
		unk_0x0A24DA3A41B718F5(&(Global_35609[iVar0 /*18*/].f_7));
		unk_0xC63CD5D2920ACBE7(&Global_35720);
		unk_0xC63CD5D2920ACBE7(&(Global_35609[iVar0 /*18*/].f_12));
		bVar1 = unk_0x10BDDBFC529428DD(0);
	}
	return bVar1;
}

void func_166(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_164(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/].f_6 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

void func_167(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4)
{
	int iVar0;
	
	if (unk_0x2C83A9DA6BFFC4F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		if (!*uParam0 == -1)
		{
			func_166(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_35609[iVar0 /*18*/])
		{
			Global_35609[iVar0 /*18*/] = 1;
			Global_35609[iVar0 /*18*/].f_1 = Global_35726;
			Global_35726++;
			Global_35609[iVar0 /*18*/].f_3 = 0;
			Global_35609[iVar0 /*18*/].f_16 = 0;
			Global_35609[iVar0 /*18*/].f_4 = 0;
			Global_35609[iVar0 /*18*/].f_2 = iParam1;
			StringCopy(&(Global_35609[iVar0 /*18*/].f_7), sParam2, 16);
			Global_35609[iVar0 /*18*/].f_5 = iParam3;
			Global_35609[iVar0 /*18*/].f_17 = unk_0xC30338E8088E2E21();
			Global_35609[iVar0 /*18*/].f_6 = 0;
			if (!unk_0xCA042B6957743895(sParam4))
			{
				Global_35609[iVar0 /*18*/].f_11 = 1;
				StringCopy(&(Global_35609[iVar0 /*18*/].f_12), sParam4, 16);
			}
			else
			{
				Global_35609[iVar0 /*18*/].f_11 = 0;
			}
			*uParam0 = Global_35609[iVar0 /*18*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_168(char* sParam0)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, true, true, -1);
}

int func_169()
{
	if (Global_97173.f_23602.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

int func_170(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0x163E252DE035A133(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0x163E252DE035A133(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0x163E252DE035A133(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x163E252DE035A133(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0x163E252DE035A133(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0x163E252DE035A133(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0x163E252DE035A133(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0x163E252DE035A133(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0x163E252DE035A133(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

int func_171(float fParam0)
{
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()) && !unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x5407B7288D0478B7(unk_0xD80958FC74E988A6()) > 0;
		}
		else
		{
			return unk_0x336B3D200AB007CB(unk_0xD80958FC74E988A6(), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), fParam0) > 0;
		}
	}
	return 0;
}

void func_172()
{
	if (iLocal_630)
	{
		if (iLocal_629 == 3)
		{
			iLocal_629 = 0;
		}
		iLocal_630 = 0;
	}
	switch (iLocal_629)
	{
		case 0:
			unk_0xEA1C610A04DB6BBB(iLocal_617[iLocal_633], 1);
			iLocal_631 = unk_0x8C18E0F9080ADD73(unk_0x163E252DE035A133(Local_67.f_486.f_6, Local_67.f_486.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_67.f_486.f_9, 2);
			if (!unk_0x84A2DD9AC37C35C1(Local_67.f_2))
			{
				unk_0xEEA929141F699854(Local_67.f_2, iLocal_631, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1000f, 0);
				unk_0xC77720A12FE14A86(iLocal_617[iLocal_633], iLocal_631, "purchase_chocbar", "mp_am_hold_up", 1000f, 8f, 1, 1000f);
				iLocal_629 = 1;
			}
			break;
		
		case 1:
			if (unk_0x25D39B935A038A26(iLocal_631))
			{
				if (unk_0xE4A310B1D7FA73CC(iLocal_631) == 1f)
				{
					if (!unk_0x84A2DD9AC37C35C1(Local_67.f_2))
					{
						unk_0xE1EF3C1216AFF2CD(Local_67.f_2);
					}
					if (unk_0x7239B21A38F536BA(iLocal_617[iLocal_633]))
					{
						unk_0x1718DE8E3F2823CA(iLocal_617[iLocal_633], true);
					}
					iLocal_632 = unk_0x9CD27B0045628463();
					iLocal_629 = 2;
				}
			}
			else
			{
				iLocal_632 = unk_0x9CD27B0045628463();
				iLocal_629 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x9CD27B0045628463() - iLocal_632) > 1000)
			{
				if (unk_0x7239B21A38F536BA(iLocal_617[iLocal_633]))
				{
					unk_0xEA1C610A04DB6BBB(iLocal_617[iLocal_633], 0);
					unk_0x06843DA7060A026B(iLocal_617[iLocal_633], func_59(iLocal_633), true, false, false, true);
					unk_0x1718DE8E3F2823CA(iLocal_617[iLocal_633], false);
				}
				iLocal_629 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

void func_173()
{
	if (iLocal_53 != 6)
	{
		switch (iLocal_53)
		{
			case 1:
				if (func_178())
				{
					iLocal_53 = 2;
				}
				else
				{
					iLocal_53 = 6;
				}
				break;
			
			case 2:
				if (!unk_0x5F9532F3B5CC2551(Local_67.f_86))
				{
					func_177();
					func_11(&(Local_67.f_86.f_7));
					iLocal_53 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x5F9532F3B5CC2551(Local_67.f_86))
				{
					if ((func_176(&(Local_67.f_86.f_7), 5f) || func_174(Local_67.f_2, &(Local_67.f_451))) || unk_0x47E4E977581C5B55(Local_67.f_86))
					{
						iLocal_53 = 4;
					}
				}
				break;
			
			case 4:
				if (!unk_0x5F9532F3B5CC2551(Local_67.f_86))
				{
					iLocal_52 = 31;
					unk_0x22B0D0E37CCB840D(Local_67.f_86, Local_67.f_0, 500f, -1, false, false);
					iLocal_53 = 5;
				}
				func_39(&(Local_67.f_86.f_7));
				break;
			}
	}
}

int func_174(int iParam0, var uParam1)
{
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 7))
		{
			if (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iParam0))
			{
				if (unk_0xD71649DB0A545AA3(iParam0, unk_0xD80958FC74E988A6(), 90f))
				{
					if (func_175(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x9CD27B0045628463();
						}
						else if ((unk_0x9CD27B0045628463() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_175(int iParam0, bool bParam1)
{
	return func_22(unk_0x43A66C31C68491C0(unk_0xA5EDC40EF369B48D()), iParam0, bParam1);
}

int func_176(var uParam0, float fParam1)
{
	if (func_14(uParam0))
	{
		if (func_8(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_177()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_86))
	{
		unk_0xE8854A4326B9E12B(&(Local_67.f_86.f_6));
		unk_0x5AD23D40115353AC(0, Local_67.f_0, 0);
		unk_0x69F4BE8C8CC4796C(0, Local_67.f_0, 2500, 0, 2);
		unk_0xF2EAB31979A7F910(0, 2500, 0, -1, false);
		unk_0x39E72BC99E6360CB(Local_67.f_86.f_6);
		unk_0x5ABA3986D90D8A3B(Local_67.f_86, Local_67.f_86.f_6);
	}
}

int func_178()
{
	unk_0xC33AB876A77F8164(Local_67.f_86.f_2, Local_67.f_86.f_5, true, false, &(Local_67.f_86), false, true, -1);
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_86))
	{
		if (unk_0x9F47B058362C84B5(Local_67.f_86) == Local_67.f_86.f_1)
		{
			unk_0xAD738C3085FE7E11(Local_67.f_86, true, false);
			unk_0x9F8AA94D6D97DBF4(Local_67.f_86, true);
			return 1;
		}
	}
	return 0;
}

void func_179()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	
	if (iLocal_623 > 1 && iLocal_623 < 5)
	{
		if (func_200())
		{
			unk_0x891B5B39AC6302AF(500);
			iLocal_623 = 6;
		}
	}
	switch (iLocal_623)
	{
		case 0:
			if ((((unk_0x5F9532F3B5CC2551(Local_67.f_2) || !func_199()) || func_1(Local_67.f_470, 128)) && iLocal_56 < 3) && unk_0x50CAD495A460B305(Local_67.f_2.f_1, 1.5f) == 0)
			{
				if ((func_44() && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false)) && !func_198(0))
				{
					func_197("SHR_ROBTILL", -1);
					Local_67.f_469 = -1;
					func_167(&(Local_67.f_469), 4, "SHR_ROBTILL", 0, 0);
					unk_0xE80492A9AC099A93(&(Local_67.f_162.f_18), 1);
					unk_0xE80492A9AC099A93(&(Local_67.f_162.f_18), 0);
					iLocal_623 = 1;
				}
			}
			else if (!unk_0x84A2DD9AC37C35C1(Local_67.f_2))
			{
			}
			else if (iLocal_56 == 7)
			{
			}
			else if (unk_0x50CAD495A460B305(Local_67.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_44())
			{
				if (func_163(Local_67.f_469, 1))
				{
					if (!unk_0x5F9532F3B5CC2551(Local_67.f_0))
					{
						if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
						{
							iVar3 = unk_0xB6997A7EB3F5C8C0();
							if (unk_0x51210CED3DA1C78A(iVar3, Local_67.f_214, Local_67.f_217, Local_67.f_220, false, true, 0))
							{
								unk_0x06843DA7060A026B(iVar3, unk_0x163E252DE035A133(Local_67.f_486.f_6, Local_67.f_486.f_9.f_2, -0.7961f, -1.562f, -0.4215f), false, false, false, true);
							}
						}
					}
					unk_0x933D6A9EEC1BACD0(&(Local_67.f_162.f_18), 1);
					if (func_27("SHR_ROBTILL"))
					{
						unk_0x8DFCED7A656F8802(true);
					}
					func_166(&(Local_67.f_469));
					bVar2 = unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iLocal_627, true);
					if (bVar2)
					{
						unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), true);
					}
					unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), false, 0);
					unk_0x056A8A219B8E829F(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 15f);
					unk_0xC61B86C9F61EB404(false);
					func_105(0);
					func_192(1, 1, 1, 0);
					unk_0xA0EBB943C300E693(false);
					func_162(23, 1);
					unk_0x0A1CB9094635D1A6(Local_67.f_2.f_1, 3f, 0);
					iLocal_623 = 2;
				}
				else if ((unk_0x9CD27B0045628463() % 1000) < 50)
				{
					if (Local_67.f_469 <= 0)
					{
						Local_67.f_469 = -1;
						func_167(&(Local_67.f_469), 4, "SHR_ROBTILL", 0, 0);
					}
				}
			}
			else
			{
				if (func_27("SHR_ROBTILL"))
				{
					unk_0x8DFCED7A656F8802(true);
				}
				func_166(&(Local_67.f_469));
				iLocal_623 = 0;
			}
			break;
		
		case 2:
			if (unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				unk_0x1A9205C1B9EE827F(Local_67.f_2, false, false);
				unk_0x428CA6DBD1094446(Local_67.f_2, true);
			}
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), unk_0x163E252DE035A133(Local_67.f_2.f_1, Local_67.f_2.f_4, -0.75f, 0f, -1f), true, false, false, true);
				unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), Local_67.f_2.f_4);
				unk_0x3841422E9C488D8C(&iLocal_565);
				unk_0xE8854A4326B9E12B(&iLocal_565);
				unk_0xEA47FE3719165B94(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0f, false, false, false);
				unk_0xEA47FE3719165B94(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0f, false, false, false);
				unk_0x39E72BC99E6360CB(iLocal_565);
				unk_0x5ABA3986D90D8A3B(unk_0xD80958FC74E988A6(), iLocal_565);
				if (!unk_0xA7A932170592B50E(iLocal_624))
				{
					iLocal_624 = unk_0x6ABFA3E16460F22D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				unk_0xFEDB7D269E8C60E3(iLocal_624, unk_0xD80958FC74E988A6(), -0.1878f, 3.0635f, 0.68f, true);
				unk_0x5640BFF86B16E8DC(iLocal_624, unk_0xD80958FC74E988A6(), -0.0129f, 0.0927f, 0.3008f, true);
				unk_0xB13C14F66A00D047(iLocal_624, 35f);
				unk_0x6A25241C340D3822(iLocal_624, "HAND_SHAKE", 0.1f);
				unk_0x026FB97D0A425F84(iLocal_624, true);
				unk_0x07E5B515DB0636FC(true, false, 3000, true, false, 0);
			}
			iLocal_623 = 3;
			break;
		
		case 3:
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (!unk_0xA7A932170592B50E(iLocal_625))
				{
					iLocal_625 = unk_0x6ABFA3E16460F22D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				unk_0xFEDB7D269E8C60E3(iLocal_625, unk_0xD80958FC74E988A6(), -1.0346f, 2.9183f, 0.68f, true);
				unk_0x5640BFF86B16E8DC(iLocal_625, unk_0xD80958FC74E988A6(), -0.0574f, 0.1074f, 0.3008f, true);
				unk_0xB13C14F66A00D047(iLocal_625, 35f);
				unk_0x6A25241C340D3822(iLocal_625, "HAND_SHAKE", 0.3f);
				unk_0x9FBDA379383A52A4(iLocal_625, iLocal_624, 8000, 1, 1);
			}
			iLocal_628 = unk_0x9CD27B0045628463();
			iLocal_623 = 4;
			break;
		
		case 4:
			if (((unk_0x9CD27B0045628463() - iLocal_628) > 4800 || (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))) || unk_0x50CAD495A460B305(Local_67.f_2.f_1, 3f) > 0)
			{
				iLocal_623 = 5;
			}
			else if ((unk_0x9CD27B0045628463() - iLocal_628) > 4500)
			{
				if (func_191())
				{
					if (!iLocal_582)
					{
						unk_0x2206BF9A37B7F724("CamPushInNeutral", 0, false);
						unk_0x67C540AA08E4A6F5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_582 = 1;
					}
				}
			}
			else if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && unk_0x1F0B79228E461EC9(unk_0xD80958FC74E988A6(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = unk_0x346D81500D088F42(unk_0xD80958FC74E988A6(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_626)
					{
						iVar1 = unk_0xD53343AA4FB7DD28(10, 51);
						func_190(func_92(), 1, iVar1, 0, 0);
						iLocal_568 = (iLocal_568 + iVar1);
						Local_67.f_28.f_6 = unk_0x430386FE9BF80B45();
						unk_0x67C540AA08E4A6F5(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
						iLocal_626 = 1;
					}
				}
				else if (iLocal_626)
				{
					iLocal_626 = 0;
				}
			}
			break;
		
		case 5:
			if (unk_0x5F9532F3B5CC2551(Local_67.f_2))
			{
				unk_0x1A9205C1B9EE827F(Local_67.f_2, true, false);
				unk_0x428CA6DBD1094446(Local_67.f_2, false);
			}
			unk_0xB4EC2312F4E5B1F1(0f);
			unk_0x6D0858B8EDFD2B7D(0f, 1f);
			if (unk_0xA7A932170592B50E(iLocal_624))
			{
				unk_0x865908C81A2C22E9(iLocal_624, false);
			}
			if (unk_0xA7A932170592B50E(iLocal_625))
			{
				unk_0x865908C81A2C22E9(iLocal_625, false);
			}
			unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
			if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
			{
				iVar3 = unk_0xB6997A7EB3F5C8C0();
				Var4 = { unk_0x3FEF770D40960D5A(iVar3, true) };
			}
			if (iLocal_627 != joaat("weapon_unarmed") && !unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), iLocal_627, true);
			}
			if (unk_0xA921AA820C25702F(Local_67.f_162.f_18, 1))
			{
				unk_0xE80492A9AC099A93(&(Local_67.f_162.f_18), 1);
			}
			func_189(1, 1, 1);
			func_15(1, 0);
			iLocal_61 = 12;
			func_186();
			func_180(297, 0, 0);
			Local_67.f_468 = 1;
			iLocal_623 = 7;
			break;
		
		case 6:
			if (unk_0xB16FCE9DDC7BA182())
			{
				unk_0x026FB97D0A425F84(iLocal_625, false);
				unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
				if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
				{
					unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
				}
				if (iLocal_568 < 15)
				{
					iVar1 = unk_0xD53343AA4FB7DD28(25, 65);
					func_190(func_92(), 1, iVar1, 0, 0);
					iLocal_568 = (iLocal_568 + iVar1);
				}
				unk_0xD4E8E24955024033(500);
				iLocal_623 = 5;
			}
			break;
	}
}

void func_180(int iParam0, int iParam1, int iParam2)
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
		func_185((891 + iParam0), 1, -1, 1);
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
		func_181();
	}
}

void func_181()
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
		func_88(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_184() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_182();
				}
			}
		}
	}
}

int func_182()
{
	if (func_183(0))
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

bool func_183(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

int func_184()
{
	return Global_24444;
}

int func_185(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_120();
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

void func_186()
{
	if (!iLocal_574)
	{
		Global_97173.f_18256[iLocal_567]++;
		Global_97173.f_18256.f_62[iLocal_567] = Local_67.f_1;
		if (func_92() == 0)
		{
			func_187(5);
		}
		iLocal_574 = 1;
	}
}

void func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_188(&Global_86657, 1);
			break;
		
		case 1:
			func_188(&Global_86659, 3);
			break;
		
		case 2:
			func_188(&Global_86663, 1);
			break;
		
		case 3:
			func_188(&Global_86665, 1);
			break;
		
		case 4:
			func_188(&Global_86667, 1);
			break;
		
		case 5:
			func_188(&Global_86669, 1);
			break;
		
		case 6:
			func_188(&Global_86671, 1);
			break;
		
		case 7:
			func_188(&Global_86673, 2);
			break;
		
		case 8:
			func_188(&Global_86676, 1);
			break;
		
		case 9:
			func_188(&Global_86678, 1);
			break;
	}
}

void func_188(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = unk_0x9CD27B0045628463();
		}
		iVar0++;
	}
}

void func_189(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x8D32347D6D4C40A2(unk_0xA5EDC40EF369B48D(), true, 0);
	}
	unk_0xC61B86C9F61EB404(true);
	func_192(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0xA0EBB943C300E693(true);
		unk_0xA6294919E56FF02A(true);
	}
	func_162(23, 0);
}

void func_190(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97173.f_29699[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_69(Global_97173.f_29699[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x767FBC2AC802EF3D(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xB3271D7AB655B441(iVar1, iVar0, true);
	}
}

int func_191()
{
	if (unk_0xEE778F8C7E1142E2(unk_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_192(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam0)
	{
		unk_0x9CB5CE07A3968D5A(unk_0x4F8644AF03D0E0D6());
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), true);
		func_196(1);
		unk_0xFDB423997FA30340();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x7497D2CE2C30D24C())
			{
				unk_0xD79DEEFB53455EBA(false);
			}
			if (!func_106())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_195(1, bParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_196(0);
		unk_0xE1CD1E48E025E661();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x03FC694AE06C5A20();
		}
		unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
		unk_0x32C62AA929C2DA6A(unk_0x4F8644AF03D0E0D6(), false);
		func_195(0, bParam3, iParam2);
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) && !func_193(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
		}
		Global_68065 = 0;
	}
}

int func_193(int iParam0)
{
	if (func_118(iParam0, 0))
	{
		return 1;
	}
	if (func_194())
	{
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_194()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

int func_195(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			unk_0x20746F7B1032A3C7(bParam0, bParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_196(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_2263, 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_2263, 13);
	}
}

void func_197(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_198(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
			{
				if (Global_14392 == 1)
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
		else
		{
			return 0;
		}
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_14392 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_14393.f_1 > 3)
	{
		if (Global_14392 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_199()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
	{
		if (unk_0x2107BA504071A6BB(Local_67.f_2) == Local_67.f_185)
		{
			return 1;
		}
		else if (unk_0x51210CED3DA1C78A(Local_67.f_2, Local_67.f_186, Local_67.f_189, Local_67.f_192, false, true, 0))
		{
			return 1;
		}
		else if (unk_0x51210CED3DA1C78A(Local_67.f_2, Local_67.f_200, Local_67.f_203, Local_67.f_206, false, true, 0))
		{
			return 1;
		}
		else if (unk_0x51210CED3DA1C78A(Local_67.f_2, Local_67.f_207, Local_67.f_210, Local_67.f_213, false, true, 0))
		{
			return 1;
		}
		else if (Local_67.f_199 != -1f)
		{
			if (unk_0x51210CED3DA1C78A(Local_67.f_2, Local_67.f_193, Local_67.f_196, Local_67.f_199, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_200()
{
	if (unk_0xB0034A223497FFCB())
	{
		return 0;
	}
	if (unk_0x580417101DDB492F(0, 18) || unk_0x580417101DDB492F(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_201()
{
	int iVar0;
	
	func_218();
	func_215();
	if (unk_0x7239B21A38F536BA(Local_67.f_0))
	{
		unk_0x3A87E44BB9A01D54(Local_67.f_0, &iVar0, true);
		if ((iLocal_59 == 1 && iLocal_621 == 2) && ((unk_0x20CE80B0C2BF4ACC(unk_0x4F8644AF03D0E0D6()) || func_214()) || func_213()))
		{
			unk_0xF0B67A4DE6AB5F98(unk_0x4F8644AF03D0E0D6());
			func_15(1, 0);
			iLocal_59 = 9;
		}
	}
	else
	{
		return;
	}
	func_210();
	if (!bLocal_573)
	{
		func_209();
	}
	switch (iLocal_59)
	{
		case 1:
			if (func_284())
			{
				if ((func_20(Local_67.f_0, Local_67.f_2, &(Local_67.f_451), 1) || (func_174(Local_67.f_2, &(Local_67.f_451)) && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))) && iVar0 != joaat("weapon_unarmed"))
				{
					func_208();
					unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
					iLocal_52 = 12;
					iLocal_51 = 3;
					iLocal_59 = 5;
					unk_0x933D6A9EEC1BACD0(&Global_86040, 3);
					func_207();
				}
				if (func_1(Local_67.f_470, 8))
				{
					if (!func_1(Local_67.f_470, 32))
					{
						if (!unk_0x84A2DD9AC37C35C1(Local_67.f_2) && func_1(Local_67.f_470, 4))
						{
							unk_0xEA47FE3719165B94(Local_67.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						iLocal_52 = 36;
						func_15(1, 0);
						func_206();
						func_275(&(Local_67.f_470), 32);
					}
				}
			}
			break;
		
		case 2:
			if (func_284())
			{
				if (func_174(Local_67.f_2, &(Local_67.f_451)) && iVar0 != joaat("weapon_unarmed"))
				{
					unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
					Local_67.f_2.f_11 = 1;
					func_186();
					iLocal_52 = 12;
					iLocal_51 = 3;
					iLocal_61 = 11;
					iLocal_59 = 3;
					unk_0x933D6A9EEC1BACD0(&Global_86040, 3);
					func_207();
				}
				else if (func_20(Local_67.f_0, Local_67.f_2, &(Local_67.f_451), 1))
				{
					unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
					func_206();
					func_208();
					iLocal_52 = 12;
					iLocal_59 = 5;
					func_207();
				}
				else if (func_1(Local_67.f_470, 8))
				{
					if (!func_1(Local_67.f_470, 32))
					{
						if (!unk_0x84A2DD9AC37C35C1(Local_67.f_2) && func_1(Local_67.f_470, 4))
						{
							unk_0xEA47FE3719165B94(Local_67.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						iLocal_52 = 36;
						func_15(1, 0);
						func_206();
						func_275(&(Local_67.f_470), 32);
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_52 >= 13)
			{
				if (!unk_0x9072C8B49907BFAD(unk_0xD80958FC74E988A6()) && !unk_0x9072C8B49907BFAD(Local_67.f_2))
				{
					iLocal_52 = 15;
					iLocal_57 = 5;
					iLocal_61 = 12;
					iLocal_59 = 4;
				}
			}
			break;
		
		case 4:
			if (func_20(Local_67.f_0, Local_67.f_2, &(Local_67.f_451), 1) && func_284())
			{
				func_208();
				if (Local_67.f_2.f_12)
				{
					iLocal_52 = 22;
				}
				else
				{
					iLocal_52 = 16;
				}
				iLocal_59 = 5;
			}
			break;
		
		case 5:
			if (Local_67.f_486 >= 0)
			{
				if (func_20(Local_67.f_0, Local_67.f_2, &(Local_67.f_451), 1) && func_284())
				{
					if (unk_0x25D39B935A038A26(Local_67.f_486) && !Local_67.f_467)
					{
						iLocal_52 = 33;
						Local_67.f_467 = 1;
					}
				}
			}
			if (iLocal_54 >= 1 && iLocal_54 < 7)
			{
				unk_0xF0B67A4DE6AB5F98(unk_0xA5EDC40EF369B48D());
				if (func_204(Local_67.f_2, 0, 1, 0, 1, 1) || !unk_0x25D39B935A038A26(Local_67.f_486))
				{
					iLocal_59 = 6;
				}
			}
			break;
		
		case 6:
			if (iLocal_55 != 3 && iLocal_55 != 4)
			{
				iLocal_55 = 4;
			}
			unk_0xE80492A9AC099A93(&Global_86040, 3);
			if (!unk_0x47E4E977581C5B55(Local_67.f_2))
			{
				func_6();
				iLocal_59 = 0;
			}
			break;
		
		case 7:
			if (!unk_0x47E4E977581C5B55(Local_67.f_2))
			{
				func_203();
				iLocal_52 = 36;
				func_15(1, 0);
				func_275(&(Local_67.f_470), 32);
				iLocal_57 = 7;
				iLocal_59 = 8;
			}
			break;
		
		case 8:
			if (((func_20(Local_67.f_0, Local_67.f_2, &(Local_67.f_451), 1) || func_174(Local_67.f_2, &(Local_67.f_451))) && func_284()) && iVar0 != joaat("weapon_unarmed"))
			{
				if (!Local_67.f_2.f_12)
				{
					iLocal_52 = 10;
					iLocal_59 = 9;
				}
				else
				{
					func_18();
					iLocal_52 = 11;
					iLocal_59 = 0;
				}
				Local_67.f_2.f_13 = 0;
			}
			break;
		
		case 9:
			func_6();
			iLocal_59 = 12;
			break;
		
		case 10:
			if ((((func_20(Local_67.f_0, Local_67.f_2, &(Local_67.f_451), 1) || func_174(Local_67.f_2, &(Local_67.f_451))) && func_284()) && iVar0 != joaat("weapon_unarmed")) && !func_14(&(Local_67.f_480)))
			{
				func_11(&(Local_67.f_480));
				if (unk_0x47E4E977581C5B55(Local_67.f_2))
				{
					func_6();
				}
				iLocal_52 = 23;
			}
			else if (func_40(&(Local_67.f_480)) > 10f)
			{
				if (!unk_0x84A2DD9AC37C35C1(Local_67.f_2))
				{
					unk_0x22B0D0E37CCB840D(Local_67.f_2, unk_0xD80958FC74E988A6(), 100f, -1, false, false);
				}
				iLocal_59 = 12;
			}
			break;
		
		case 11:
			func_202();
			iLocal_59 = 12;
			break;
	}
}

void func_202()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
	{
		unk_0x9F8AA94D6D97DBF4(Local_67.f_2, false);
	}
}

void func_203()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
	{
		unk_0x69F4BE8C8CC4796C(Local_67.f_2, Local_67.f_0, -1, 0, 2);
	}
}

int func_204(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_44)
		{
			iLocal_45 = unk_0xEEF059FAD016D209(iParam0);
			bLocal_44 = true;
		}
		iLocal_46 = unk_0xEEF059FAD016D209(iParam0);
		iLocal_47 = (iLocal_45 - iLocal_46);
		iVar0 = unk_0xB6997A7EB3F5C8C0();
		if (!unk_0x5F9532F3B5CC2551(iVar0))
		{
			if (unk_0xC86D67D52A707CF8(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_47) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_44)
		{
			if (unk_0xC86D67D52A707CF8(iParam0, unk_0xD80958FC74E988A6(), true))
			{
				if (IntToFloat(iLocal_47) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC86D67D52A707CF8(iParam0, unk_0xD80958FC74E988A6(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xB6997A7EB3F5C8C0();
		if (!unk_0x5F9532F3B5CC2551(iVar1))
		{
			if (unk_0xC86D67D52A707CF8(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x5F9532F3B5CC2551(iParam0))
		{
			if (unk_0x9A497FE2DF198913(iParam0))
			{
				if (unk_0x9B128DC36C1E04CF(iParam0) == unk_0xD80958FC74E988A6())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x20B60995556D004F(iParam0, unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x20CE80B0C2BF4ACC(unk_0x4F8644AF03D0E0D6()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xFD4CCDBCC59941B7(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xF9800AA1A771B000(iParam0))
		{
			return 1;
		}
	}
	if (func_205(unk_0xD80958FC74E988A6(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x47E4E977581C5B55(iParam0) && func_175(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x997ABD671D25CA0B(iParam0, false))
		{
			if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), unk_0x9A9112A0FE9A4713(iParam0, false)))
			{
				return 1;
			}
		}
		else if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), iParam0))
		{
			return 1;
		}
		if (!unk_0x5F9532F3B5CC2551(iParam1))
		{
			if (unk_0xC86D67D52A707CF8(iParam1, unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_205(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x3A87E44BB9A01D54(iParam0, &iVar0, true);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x34616828CD07F1A1(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x3FEF770D40960D5A(iParam0, true), unk_0x3FEF770D40960D5A(iParam1, true)) < 2.5f)
			{
				if (unk_0xD71649DB0A545AA3(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_206()
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()) && func_284())
	{
		iVar3 = unk_0x23F8F5FC7E8C4A6B(unk_0xD80958FC74E988A6(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((((uVar0[iVar4] != unk_0xD80958FC74E988A6() && uVar0[iVar4] != Local_67.f_2) && !unk_0x84A2DD9AC37C35C1(uVar0[iVar4])) && !unk_0x0A7B270912999B3C(uVar0[iVar4])) && !unk_0x4859F1FC66A6278E(uVar0[iVar4], 0))
			{
				unk_0xAD738C3085FE7E11(uVar0[iVar4], true, true);
				unk_0x22B0D0E37CCB840D(uVar0[iVar4], unk_0xD80958FC74E988A6(), 100f, -1, false, false);
			}
			iVar4++;
		}
	}
}

void func_207()
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()) && func_284())
	{
		iVar3 = unk_0x23F8F5FC7E8C4A6B(unk_0xD80958FC74E988A6(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((uVar0[iVar4] != unk_0xD80958FC74E988A6() && uVar0[iVar4] != Local_67.f_2) && !unk_0x0A7B270912999B3C(uVar0[iVar4]))
			{
				unk_0xAD738C3085FE7E11(uVar0[iVar4], true, true);
				unk_0x3841422E9C488D8C(&iLocal_565);
				unk_0xE8854A4326B9E12B(&iLocal_565);
				unk_0x3EB1FE9E8E908E15(0, 5000);
				unk_0x22B0D0E37CCB840D(0, unk_0xD80958FC74E988A6(), 100f, -1, false, false);
				unk_0x39E72BC99E6360CB(iLocal_565);
				unk_0x5ABA3986D90D8A3B(uVar0[iVar4], iLocal_565);
			}
			iVar4++;
		}
	}
}

void func_208()
{
	if (func_24(Local_67.f_0) == joaat("weapon_rpg"))
	{
		Local_67.f_458 = 1;
	}
	else if (func_24(Local_67.f_0) == joaat("weapon_knife"))
	{
		Local_67.f_459 = 1;
	}
	else if (((func_24(Local_67.f_0) == joaat("weapon_hammer") || func_24(Local_67.f_0) == joaat("weapon_crowbar")) || func_24(Local_67.f_0) == joaat("weapon_bat")) || func_24(Local_67.f_0) == joaat("weapon_bottle"))
	{
		Local_67.f_460 = 1;
	}
	else if ((func_24(Local_67.f_0) == joaat("weapon_grenade") || func_24(Local_67.f_0) == joaat("weapon_smokegrenade")) || func_24(Local_67.f_0) == joaat("weapon_molotov"))
	{
		Local_67.f_461 = 1;
	}
	else if (func_24(Local_67.f_0) == joaat("weapon_stickybomb"))
	{
		Local_67.f_462 = 1;
	}
	iLocal_61 = 12;
	func_186();
	iLocal_60 = 2;
	iLocal_64 = 1;
	iLocal_63 = 6;
	Local_67.f_2.f_13 = 0;
}

void func_209()
{
	if (iLocal_54 == 0)
	{
		if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
		{
			switch (iLocal_57)
			{
				case 1:
					iLocal_57 = 0;
					break;
				
				case 2:
					unk_0xEA47FE3719165B94(Local_67.f_2, Local_67.f_2.f_15, Local_67.f_2.f_17, 8f, -2f, -1, 0, 0f, false, false, false);
					iLocal_57 = 0;
					break;
				
				case 3:
					unk_0xEA47FE3719165B94(Local_67.f_2, Local_67.f_2.f_15, Local_67.f_2.f_18, 8f, -4f, -1, 0, 0f, false, false, false);
					iLocal_57 = 0;
					break;
				
				case 4:
					unk_0xEA47FE3719165B94(Local_67.f_2, Local_67.f_2.f_15, Local_67.f_2.f_19, 8f, -2f, -1, 0, 0f, false, false, false);
					iLocal_57 = 0;
					break;
				
				case 5:
					unk_0xEA47FE3719165B94(Local_67.f_2, Local_67.f_2.f_15, Local_67.f_2.f_20, 8f, -2f, -1, 0, 0f, false, false, false);
					iLocal_57 = 0;
					break;
				
				case 6:
					iLocal_57 = 0;
					break;
				
				case 7:
					unk_0xEA47FE3719165B94(Local_67.f_2, Local_67.f_2.f_15, Local_67.f_2.f_21, 8f, -2f, -1, 0, 0f, false, false, false);
					iLocal_57 = 0;
					break;
				}
			}
	}
}

void func_210()
{
	switch (iLocal_58)
	{
		case 1:
			func_203();
			iLocal_58 = 2;
			break;
		
		case 2:
			if (iLocal_54 == 2)
			{
				func_212();
				Local_67.f_2.f_13 = 0;
				iLocal_58 = 3;
			}
			if ((func_44() || func_43()) && !Local_67.f_2.f_13)
			{
				Local_67.f_2.f_13 = 1;
			}
			if (!Local_67.f_2.f_14)
			{
				if (!unk_0x84A2DD9AC37C35C1(Local_67.f_2) && unk_0xBBCCE00B381F8482(Local_67.f_2))
				{
					Local_67.f_2.f_14 = 1;
				}
			}
			if ((Local_67.f_2.f_13 && !unk_0x84A2DD9AC37C35C1(Local_67.f_2)) && !iLocal_59 == 12)
			{
				func_211();
			}
			break;
		
		case 3:
			if (iLocal_54 >= 7)
			{
				func_203();
				iLocal_58 = 4;
			}
			break;
	}
}

void func_211()
{
	if ((unk_0x9CD27B0045628463() - Local_67.f_2.f_10) > 5000)
	{
		unk_0x3841422E9C488D8C(&(Local_67.f_2.f_24));
		unk_0xE8854A4326B9E12B(&(Local_67.f_2.f_24));
		unk_0x5AD23D40115353AC(0, Local_67.f_0, 0);
		unk_0x69F4BE8C8CC4796C(0, Local_67.f_0, -1, 0, 2);
		unk_0x39E72BC99E6360CB(Local_67.f_2.f_24);
		unk_0x5ABA3986D90D8A3B(Local_67.f_2, Local_67.f_2.f_24);
		Local_67.f_2.f_10 = unk_0x9CD27B0045628463();
	}
}

void func_212()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
	{
		unk_0x0F804F1DB19B9689(Local_67.f_2);
	}
}

int func_213()
{
	if (unk_0x1A8B5F3C01E2B477(Local_67.f_186, Local_67.f_189, Local_67.f_192, true))
	{
		return 1;
	}
	return 0;
}

int func_214()
{
	if (unk_0xA079A6C51525DC4B(-1, Local_67.f_186, Local_67.f_189, Local_67.f_192))
	{
		return 1;
	}
	return 0;
}

void func_215()
{
	if (!Local_67.f_465)
	{
		if (func_216())
		{
			if (!func_14(&(Local_67.f_474)))
			{
				func_11(&(Local_67.f_474));
			}
			else if (func_176(&(Local_67.f_474), 1f))
			{
				Local_67.f_465 = 1;
				iLocal_52 = 26;
				if (!unk_0x84A2DD9AC37C35C1(Local_67.f_2))
				{
					unk_0x22B0D0E37CCB840D(Local_67.f_2, unk_0xD80958FC74E988A6(), 100f, -1, false, false);
					func_15(1, 0);
				}
			}
		}
		else if (func_14(&(Local_67.f_474)))
		{
			func_39(&(Local_67.f_474));
		}
	}
}

int func_216()
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_0))
	{
		if (func_217())
		{
			unk_0x3A87E44BB9A01D54(Local_67.f_0, &iVar0, true);
			if (iVar0 == joaat("weapon_petrolcan"))
			{
				if (unk_0x34616828CD07F1A1(Local_67.f_0))
				{
					if (unk_0xD71649DB0A545AA3(Local_67.f_2, Local_67.f_0, 180f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_217()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_0))
	{
		if (unk_0x51210CED3DA1C78A(Local_67.f_0, Local_67.f_186, Local_67.f_189, Local_67.f_192, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_218()
{
	if (iLocal_59 != 12)
	{
		if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
		{
			if (unk_0xBBCCE00B381F8482(Local_67.f_2))
			{
				unk_0x22B0D0E37CCB840D(Local_67.f_2, Local_67.f_0, 100f, -1, false, false);
				iLocal_59 = 12;
				iLocal_58 = 4;
				iLocal_57 = 8;
				iLocal_61 = 15;
				if (iLocal_64 == 1)
				{
					iLocal_64 = 2;
				}
				else
				{
					iLocal_64 = 3;
				}
				iLocal_63 = 13;
				iLocal_52 = 27;
				if (!Local_67.f_2.f_14)
				{
					Local_67.f_2.f_14 = 1;
				}
			}
		}
	}
}

void func_219()
{
	switch (iLocal_56)
	{
		case 1:
			if (Local_67.f_486 >= 0)
			{
				if (unk_0x25D39B935A038A26(Local_67.f_486))
				{
					if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) > 0.876f)
					{
						iLocal_56 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_67.f_486 >= 0)
			{
				if (unk_0x25D39B935A038A26(Local_67.f_486))
				{
					if (unk_0xE4A310B1D7FA73CC(Local_67.f_486) > 0.894f || (unk_0xE4A310B1D7FA73CC(Local_67.f_486) > 0.871f && unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(Local_67.f_28, true), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) < 1f))
					{
						iLocal_56 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_15(1, 0);
			func_220(0);
			unk_0x92AEFB5F6E294023(Local_67.f_28, false, false);
			iLocal_56 = 5;
			break;
		
		case 4:
			func_15(1, 0);
			func_220(1);
			unk_0xEA1C610A04DB6BBB(Local_67.f_28, 0);
			iLocal_56 = 5;
			break;
		
		case 5:
			if (unk_0xEFBE71898A993728(Local_67.f_28, unk_0xD80958FC74E988A6()))
			{
				func_190(func_92(), 1, iLocal_568, 0, 0);
				unk_0xEA1C610A04DB6BBB(Local_67.f_28, 0);
				if (unk_0xA6DB27D19ECBB7DA(Local_67.f_28.f_2))
				{
					unk_0x86A652570E5F25DD(&(Local_67.f_28.f_2));
				}
				if (iLocal_61 != 12)
				{
					iLocal_61 = 12;
				}
				func_180(297, 0, 0);
				Local_67.f_468 = 1;
				Local_67.f_28.f_6 = unk_0x430386FE9BF80B45();
				unk_0x67C540AA08E4A6F5(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
				func_12(&(Local_67.f_28.f_15));
				iLocal_56 = 6;
			}
			else if (!unk_0x5F9532F3B5CC2551(Local_67.f_28) && unk_0x47D6F43D77935C75(Local_67.f_28))
			{
			}
			break;
		
		case 6:
			if (func_8(&(Local_67.f_28.f_15)) > 2.5f)
			{
				if (unk_0x7239B21A38F536BA(Local_67.f_28) && unk_0xEFBE71898A993728(Local_67.f_28, unk_0xD80958FC74E988A6()))
				{
					unk_0x961AC54BF0613F5D(unk_0xD80958FC74E988A6(), true, true);
					unk_0x539E0AE3E6634B9F(&(Local_67.f_28));
				}
				iLocal_56 = 7;
			}
			break;
	}
}

void func_220(bool bParam0)
{
	Local_67.f_28.f_3 = 0;
	unk_0x933D6A9EEC1BACD0(&(Local_67.f_28.f_3), 3);
	unk_0x933D6A9EEC1BACD0(&(Local_67.f_28.f_3), 4);
	if (!bParam0)
	{
		iLocal_568 = unk_0xD53343AA4FB7DD28(Local_67.f_28.f_4, Local_67.f_28.f_5);
		if (!unk_0xA6DB27D19ECBB7DA(Local_67.f_28.f_2))
		{
			Local_67.f_28.f_2 = func_223(Local_67.f_28);
			unk_0x03D7FB09E75D6B7E(Local_67.f_28.f_2, 2);
		}
		unk_0xA08FE5E49BDC39DD(Local_67.f_28, -0.2f, true);
	}
	else
	{
		iLocal_568 = unk_0xD53343AA4FB7DD28(50, Local_67.f_28.f_4);
		Local_67.f_28.f_1 = unk_0xFBA08C503DD5FA58(joaat("pickup_money_variable"), unk_0x3FEF770D40960D5A(Local_67.f_28, true), Local_67.f_28.f_3, iLocal_568, true, 0);
		if (!unk_0xA6DB27D19ECBB7DA(Local_67.f_28.f_2))
		{
			Local_67.f_28.f_2 = func_221(Local_67.f_28.f_1);
		}
	}
	Local_67.f_28.f_14 = 1;
}

int func_221(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAFC1CA75AD4074D1(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xBE339365C863BD36(iParam0);
	unk_0xD38744167B2FA257(iVar0, func_222(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	return iVar0;
}

float func_222(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_223(int iParam0)
{
	return func_224(iParam0, 1, 0);
}

int func_224(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_222(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_222(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_222(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_225()
{
	int iVar0;
	int iVar1;
	
	if (Local_67.f_464)
	{
		switch (iLocal_60)
		{
			case 2:
				if (func_1(Local_67.f_470, 4))
				{
					func_229();
					Local_67.f_46.f_39 = unk_0x9CD27B0045628463();
					iLocal_60 = 3;
				}
				break;
			
			case 3:
				if (unk_0x9CD27B0045628463() - Local_67.f_46.f_39) > unk_0xD53343AA4FB7DD28(1000, 3000)
				{
					if (unk_0x4C241E39B23DF959(Local_67.f_46.f_4[0], false))
					{
						unk_0xF4924635A19EB37D(Local_67.f_46.f_4[0], true);
					}
					iLocal_60 = 4;
				}
				break;
			
			case 4:
				if (func_228() && func_227())
				{
					iLocal_60 = 5;
				}
				break;
			
			case 5:
				iLocal_52 = 24;
				func_15(1, 0);
				iLocal_60 = 6;
				break;
			
			case 6:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if ((((unk_0x84A2DD9AC37C35C1(Local_67.f_46[iVar0]) || (!unk_0x5F9532F3B5CC2551(Local_67.f_46[iVar0]) && unk_0x131D401334815E94(Local_67.f_46[iVar0], 0, 2))) || unk_0x84A2DD9AC37C35C1(Local_67.f_2)) || (!unk_0x5F9532F3B5CC2551(Local_67.f_2) && unk_0x131D401334815E94(Local_67.f_2, 0, 2))) || func_20(Local_67.f_0, Local_67.f_2, &(Local_67.f_451), 1))
					{
						func_15(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0x84A2DD9AC37C35C1(Local_67.f_46[iVar1]))
							{
								unk_0xF166E48407BAC484(Local_67.f_46[iVar1], unk_0xD80958FC74E988A6(), 0, 16);
								unk_0x9F8AA94D6D97DBF4(Local_67.f_46[iVar1], false);
							}
							iVar1++;
						}
						iLocal_60 = 0;
					}
					iVar0++;
				}
				break;
			
			case 7:
				func_226();
				iLocal_60 = 0;
				break;
			}
	}
}

void func_226()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x5F9532F3B5CC2551(Local_67.f_46[iVar0]))
		{
			unk_0x9F8AA94D6D97DBF4(Local_67.f_46[iVar0], false);
		}
		iVar0++;
	}
}

int func_227()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x5F9532F3B5CC2551(Local_67.f_46[iVar0]))
		{
			if (!unk_0x997ABD671D25CA0B(Local_67.f_46[iVar0], false))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_228()
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_46[iVar0]))
			{
				if (!unk_0xE31C2C72B8692B64(Local_67.f_46[iVar0]))
				{
					return 1;
				}
			}
			if (!unk_0x5F9532F3B5CC2551(Local_67.f_46.f_4[iVar0]))
			{
				if (!unk_0xE31C2C72B8692B64(Local_67.f_46.f_4[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_229()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_67.f_46[iVar0] = unk_0xD49F9B0955C367DE(6, Local_67.f_46.f_26, Local_67.f_46.f_8[iVar0 /*3*/], Local_67.f_46.f_18[iVar0], true, true);
		unk_0xAD738C3085FE7E11(Local_67.f_46[iVar0], true, false);
		unk_0x9F8AA94D6D97DBF4(Local_67.f_46[iVar0], true);
		Local_67.f_46.f_4[iVar0] = unk_0xAF35D0D2583051B0(Local_67.f_46.f_27, Local_67.f_46.f_8[iVar0 /*3*/], Local_67.f_46.f_18[iVar0], 1, 1);
		unk_0xAD738C3085FE7E11(Local_67.f_46.f_4[iVar0], true, false);
		if (!(unk_0x5F9532F3B5CC2551(Local_67.f_46[iVar0]) && unk_0x5F9532F3B5CC2551(Local_67.f_46.f_4[iVar0])))
		{
			unk_0xF75B0D629E1C063D(Local_67.f_46[iVar0], Local_67.f_46.f_4[iVar0], -1);
			unk_0xBF0FD6E56C964FCB(Local_67.f_46[iVar0], joaat("weapon_pistol"), 99, false, true);
		}
		unk_0xE8854A4326B9E12B(&(Local_67.f_46.f_35[iVar0]));
		unk_0xE2A2AA2F659D77A7(0, Local_67.f_46.f_4[iVar0], Local_67.f_46.f_22, (unk_0x53AF99BAA671CA47(Local_67.f_46.f_4[iVar0]) - 8f), 1, Local_67.f_46.f_27, 786981, Local_67.f_46.f_25, -1f);
		unk_0x504D54DF3F6F2247(0, 0, 0);
		unk_0x9B53BB6E8943AF53(0, Local_67.f_0, -1, false);
		unk_0x39E72BC99E6360CB(Local_67.f_46.f_35[iVar0]);
		unk_0x5ABA3986D90D8A3B(Local_67.f_46[iVar0], Local_67.f_46.f_35[iVar0]);
		iVar0++;
	}
}

void func_230()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(Local_67.f_0))
	{
		unk_0x3A87E44BB9A01D54(Local_67.f_0, &iVar0, true);
	}
	else
	{
		return;
	}
	iVar1 = 0;
	switch (iLocal_61)
	{
		case 1:
			iLocal_61 = 6;
			break;
		
		case 2:
			iLocal_52 = 2;
			iLocal_61 = 5;
			break;
		
		case 3:
			iLocal_52 = 3;
			iLocal_61 = 5;
			break;
		
		case 4:
			iLocal_52 = 4;
			iLocal_61 = 5;
			break;
		
		case 5:
			if (((((func_24(Local_67.f_0) != joaat("weapon_unarmed") && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_bottle")) && func_284())
			{
				iLocal_61 = 7;
			}
			break;
		
		case 6:
			if (func_24(Local_67.f_0) != joaat("weapon_unarmed") && func_284())
			{
				if (iVar0 == joaat("weapon_bat"))
				{
					iLocal_61 = 8;
				}
				else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
				{
					iLocal_61 = 9;
				}
				else if (iVar0 == joaat("weapon_stickybomb"))
				{
					iLocal_61 = 10;
				}
				else if ((iVar0 != joaat("weapon_petrolcan") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_briefcase"))
				{
					iLocal_61 = 7;
				}
			}
			break;
		
		case 7:
			iLocal_52 = 5;
			iLocal_57 = 3;
			iLocal_61 = 15;
			break;
		
		case 8:
			iLocal_52 = 2;
			iLocal_57 = 2;
			iLocal_61 = 5;
			break;
		
		case 9:
			iLocal_52 = 3;
			iLocal_57 = 2;
			iLocal_61 = 5;
			break;
		
		case 10:
			iLocal_52 = 4;
			iLocal_57 = 2;
			iLocal_61 = 5;
			break;
		
		case 11:
			if (func_20(Local_67.f_0, Local_67.f_2, &(Local_67.f_451), 1))
			{
				func_208();
				iLocal_59 = 5;
			}
			break;
		
		case 12:
			if (!func_284())
			{
				if (!Local_67.f_464)
				{
					iLocal_63 = 9;
					iLocal_61 = 15;
				}
				else
				{
					iLocal_61 = 13;
				}
			}
			break;
		
		case 13:
			if (unk_0xD5037BA82E12416F(Local_67.f_0) < 0.1f && !func_232())
			{
				func_231();
				iLocal_61 = 14;
			}
			else if (func_232() && !func_284())
			{
				iLocal_61 = 14;
			}
			break;
		
		case 14:
			if (func_232() && !func_284())
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!unk_0x84A2DD9AC37C35C1(Local_67.f_46[iVar1]))
					{
						unk_0xF166E48407BAC484(Local_67.f_46[iVar1], unk_0xD80958FC74E988A6(), 0, 16);
						unk_0x9F8AA94D6D97DBF4(Local_67.f_46[iVar1], false);
					}
					iVar1++;
				}
				iLocal_63 = 9;
				iLocal_61 = 15;
			}
			break;
	}
}

void func_231()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x5F9532F3B5CC2551(Local_67.f_46[iVar0]))
		{
			if (!unk_0x3DC52677769B4AE0(Local_67.f_46[iVar0]))
			{
				unk_0xE1EF3C1216AFF2CD(Local_67.f_46[iVar0]);
				unk_0xF3B9A78A178572B1(Local_67.f_46[iVar0], Local_67.f_0);
			}
		}
		iVar0++;
	}
}

int func_232()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_0))
	{
		if (unk_0x51210CED3DA1C78A(Local_67.f_0, Local_67.f_46.f_28, Local_67.f_46.f_31, Local_67.f_46.f_34, false, true, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_233()
{
	switch (iLocal_64)
	{
		case 0:
			if (!iLocal_580)
			{
				if (func_234())
				{
					iLocal_52 = 9;
					iLocal_59 = 7;
					iLocal_51 = 3;
					iLocal_63 = 13;
					iLocal_64 = 3;
					iLocal_580 = 1;
				}
			}
			break;
		
		case 1:
			break;
	}
}

int func_234()
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0x7239B21A38F536BA(Local_67.f_0))
	{
		unk_0x3A87E44BB9A01D54(Local_67.f_0, &iVar0, true);
	}
	else
	{
		return 0;
	}
	if (!func_1(Local_67.f_470, 128))
	{
		if ((unk_0x47E4E977581C5B55(Local_67.f_2) || (unk_0xC86D67D52A707CF8(Local_67.f_2, Local_67.f_0, true) && iVar0 == joaat("weapon_unarmed"))) || func_235(Local_67.f_2, Local_67.f_2.f_1, 1) > 1.15f)
		{
			if (unk_0x47E4E977581C5B55(Local_67.f_2))
			{
			}
			if (unk_0xC86D67D52A707CF8(Local_67.f_2, Local_67.f_0, true) && iVar0 == joaat("weapon_unarmed"))
			{
			}
			if (func_235(Local_67.f_2, Local_67.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!unk_0x20B60995556D004F(Local_67.f_2, Local_67.f_2.f_1, 0.35f, 0.35f, 1f, false, true, 0))
			{
				Var1 = { unk_0x3FEF770D40960D5A(Local_67.f_2, true) };
				Var1 = { Local_67.f_2.f_1 };
			}
			return 1;
		}
	}
	return 0;
}

float func_235(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam4);
}

void func_236()
{
	switch (iLocal_62)
	{
		case 0:
			if (func_264())
			{
				iLocal_62 = 1;
			}
			break;
		
		case 1:
			func_257();
			iLocal_62 = 2;
			break;
		
		case 2:
			func_253();
			iLocal_62 = 3;
			break;
		
		case 3:
			if (func_248())
			{
				iLocal_62 = 4;
			}
			break;
		
		case 4:
			func_237();
			unk_0xF0B67A4DE6AB5F98(unk_0x4F8644AF03D0E0D6());
			iLocal_66 = 1;
			break;
	}
}

void func_237()
{
	func_241();
	func_240();
	func_239();
	if (unk_0x26B0E73D7EAAF4D3(Local_67.f_185))
	{
		unk_0x82EBB79E258FA2B7(Local_67.f_2, Local_67.f_185);
		unk_0x82EBB79E258FA2B7(Local_67.f_28, Local_67.f_185);
		if (!bLocal_573)
		{
			unk_0x82EBB79E258FA2B7(Local_67.f_96.f_1, Local_67.f_185);
		}
	}
	func_238();
}

void func_238()
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
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar0 = unk_0xD53343AA4FB7DD28(1, 11);
	iVar1 = unk_0xD53343AA4FB7DD28(1, 5);
	iVar2 = unk_0xD53343AA4FB7DD28(1, 5);
	iVar3 = unk_0xD53343AA4FB7DD28(1, 3);
	iVar4 = unk_0xD53343AA4FB7DD28(1, 6);
	iVar5 = unk_0xD53343AA4FB7DD28(1, 4);
	iVar6 = unk_0xD53343AA4FB7DD28(1, 5);
	iVar7 = unk_0xD53343AA4FB7DD28(1, 4);
	iVar8 = unk_0xD53343AA4FB7DD28(1, 4);
	iVar9 = unk_0xD53343AA4FB7DD28(1, 5);
	iVar10 = unk_0xD53343AA4FB7DD28(1, 5);
	iVar11 = unk_0xD53343AA4FB7DD28(1, 5);
	iVar12 = unk_0xD53343AA4FB7DD28(1, 5);
	iVar13 = unk_0xD53343AA4FB7DD28(1, 9);
	iVar14 = unk_0xD53343AA4FB7DD28(1, 3);
	iVar15 = unk_0xD53343AA4FB7DD28(1, 5);
	iVar16 = unk_0xD53343AA4FB7DD28(1, 3);
	iVar17 = unk_0xD53343AA4FB7DD28(1, 6);
	iVar18 = unk_0xD53343AA4FB7DD28(1, 5);
	iVar19 = unk_0xD53343AA4FB7DD28(1, 4);
	iVar20 = unk_0xD53343AA4FB7DD28(1, 4);
	iVar21 = unk_0xD53343AA4FB7DD28(1, 4);
	iVar22 = unk_0xD53343AA4FB7DD28(1, 6);
	iVar23 = unk_0xD53343AA4FB7DD28(1, 6);
	iVar24 = unk_0xD53343AA4FB7DD28(1, 6);
	iVar25 = unk_0xD53343AA4FB7DD28(1, 6);
	iVar26 = unk_0xD53343AA4FB7DD28(1, 4);
	iVar27 = unk_0xD53343AA4FB7DD28(1, 3);
	iVar28 = unk_0xD53343AA4FB7DD28(1, 4);
	iVar29 = unk_0xD53343AA4FB7DD28(1, 4);
	if (func_92() == 0)
	{
		switch (iVar12)
		{
			case 1:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_1";
				break;
			
			case 2:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_2";
				break;
			
			case 3:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_3";
				break;
			
			case 4:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_67.f_221.f_220 = "OJSR_COPS_1";
				break;
			
			case 2:
				Local_67.f_221.f_220 = "OJSR_COPS_2";
				break;
			
			case 3:
				Local_67.f_221.f_220 = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_67.f_221.f_227 = "OJSR_PLRHUR_1";
				break;
			
			case 2:
				Local_67.f_221.f_227 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (func_92() == 1)
	{
		switch (iVar12)
		{
			case 1:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_5";
				break;
			
			case 2:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_6";
				break;
			
			case 3:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_7";
				break;
			
			case 4:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_67.f_221.f_220 = "OJSR_COPS_5";
				break;
			
			case 2:
				Local_67.f_221.f_220 = "OJSR_COPS_6";
				break;
			
			case 3:
				Local_67.f_221.f_220 = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_67.f_221.f_227 = "OJSR_PLRHUR_3";
				break;
			
			case 2:
				Local_67.f_221.f_227 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (func_92() == 2)
	{
		switch (iVar12)
		{
			case 1:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_9";
				break;
			
			case 2:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_10";
				break;
			
			case 3:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_11";
				break;
			
			case 4:
				Local_67.f_221.f_210 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_67.f_221.f_220 = "OJSR_COPS_9";
				break;
			
			case 2:
				Local_67.f_221.f_220 = "OJSR_COPS_10";
				break;
			
			case 3:
				Local_67.f_221.f_220 = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_67.f_221.f_227 = "OJSR_PLRHUR_5";
				break;
			
			case 2:
				Local_67.f_221.f_227 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 1:
			Local_67.f_221.f_198 = "OJSR_GREET_1";
			break;
		
		case 2:
			Local_67.f_221.f_198 = "OJSR_GREET_2";
			break;
		
		case 3:
			Local_67.f_221.f_198 = "OJSR_GREET_3";
			break;
		
		case 4:
			Local_67.f_221.f_198 = "OJSR_GREET_4";
			break;
		
		case 5:
			Local_67.f_221.f_198 = "OJSR_GREET_5";
			break;
		
		case 6:
			Local_67.f_221.f_198 = "OJSR_GREET_6";
			break;
		
		case 7:
			Local_67.f_221.f_198 = "OJSR_GREET_7";
			break;
		
		case 8:
			Local_67.f_221.f_198 = "OJSR_GREET_8";
			break;
		
		case 9:
			Local_67.f_221.f_198 = "OJSR_GREET_9";
			break;
		
		case 10:
			Local_67.f_221.f_198 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 1:
			Local_67.f_221.f_199 = "OJSR_BATEQ_1";
			break;
		
		case 2:
			Local_67.f_221.f_199 = "OJSR_BATEQ_2";
			break;
		
		case 3:
			Local_67.f_221.f_199 = "OJSR_BATEQ_3";
			break;
		
		case 4:
			Local_67.f_221.f_199 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 1:
			Local_67.f_221.f_200 = "OJSR_TOOLEQ_1";
			break;
		
		case 2:
			Local_67.f_221.f_200 = "OJSR_TOOLEQ_2";
			break;
		
		case 3:
			Local_67.f_221.f_200 = "OJSR_TOOLEQ_3";
			break;
		
		case 4:
			Local_67.f_221.f_200 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 1:
			Local_67.f_221.f_201 = "OJSR_STICKEQ_1";
			break;
		
		case 2:
			Local_67.f_221.f_201 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 1:
			Local_67.f_221.f_202 = "OJSR_WORRY_1";
			break;
		
		case 2:
			Local_67.f_221.f_202 = "OJSR_WORRY_2";
			break;
		
		case 3:
			Local_67.f_221.f_202 = "OJSR_WORRY_3";
			break;
		
		case 4:
			Local_67.f_221.f_202 = "OJSR_WORRY_4";
			break;
		
		case 5:
			Local_67.f_221.f_202 = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 1:
			Local_67.f_221.f_203 = "OJSR_SHOCK_1";
			break;
		
		case 2:
			Local_67.f_221.f_203 = "OJSR_SHOCK_2";
			break;
		
		case 3:
			Local_67.f_221.f_203 = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 1:
			Local_67.f_221.f_204 = "OJSR_STUBBRN_1";
			break;
		
		case 2:
			Local_67.f_221.f_204 = "OJSR_STUBBRN_2";
			break;
		
		case 3:
			Local_67.f_221.f_204 = "OJSR_STUBBRN_3";
			break;
		
		case 4:
			Local_67.f_221.f_204 = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 1:
			Local_67.f_221.f_205 = "OJSR_COUNTER_1";
			break;
		
		case 2:
			Local_67.f_221.f_205 = "OJSR_COUNTER_2";
			break;
		
		case 3:
			Local_67.f_221.f_205 = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 1:
			Local_67.f_221.f_206 = "OJSR_BACKRM_1";
			break;
		
		case 2:
			Local_67.f_221.f_206 = "OJSR_BACKRM_2";
			break;
		
		case 3:
			Local_67.f_221.f_206 = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 1:
			Local_67.f_221.f_207 = "OJSR_BUMP_1";
			break;
		
		case 2:
			Local_67.f_221.f_207 = "OJSR_BUMP_2";
			break;
		
		case 3:
			Local_67.f_221.f_207 = "OJSR_BUMP_3";
			break;
		
		case 4:
			Local_67.f_221.f_207 = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 1:
			Local_67.f_221.f_208 = "OJSR_BPAIM_1";
			break;
		
		case 2:
			Local_67.f_221.f_208 = "OJSR_BPAIM_2";
			break;
		
		case 3:
			Local_67.f_221.f_208 = "OJSR_BPAIM_3";
			break;
		
		case 4:
			Local_67.f_221.f_208 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 1:
			Local_67.f_221.f_209 = "OJSR_BPAIMAG_1";
			break;
		
		case 2:
			Local_67.f_221.f_209 = "OJSR_BPAIMAG_2";
			break;
		
		case 3:
			Local_67.f_221.f_209 = "OJSR_BPAIMAG_3";
			break;
		
		case 4:
			Local_67.f_221.f_209 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 1:
			Local_67.f_221.f_211 = "OJSR_SCARED_1";
			break;
		
		case 2:
			Local_67.f_221.f_211 = "OJSR_SCARED_2";
			break;
		
		case 3:
			Local_67.f_221.f_211 = "OJSR_SCARED_3";
			break;
		
		case 4:
			Local_67.f_221.f_211 = "OJSR_SCARED_4";
			break;
		
		case 5:
			Local_67.f_221.f_211 = "OJSR_SCARED_5";
			break;
		
		case 6:
			Local_67.f_221.f_211 = "OJSR_SCARED_6";
			break;
		
		case 7:
			Local_67.f_221.f_211 = "OJSR_SCARED_7";
			break;
		
		case 8:
			Local_67.f_221.f_211 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 1:
			Local_67.f_221.f_213 = "OJSR_SCARED_9";
			break;
		
		case 2:
			Local_67.f_221.f_213 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 1:
			Local_67.f_221.f_216 = "OJSR_GRANAIM_1";
			break;
		
		case 2:
			Local_67.f_221.f_216 = "OJSR_GRANAIM_2";
			break;
		
		case 3:
			Local_67.f_221.f_216 = "OJSR_GRANAIM_3";
			break;
		
		case 4:
			Local_67.f_221.f_216 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 1:
			Local_67.f_221.f_217 = "OJSR_STICAIM_1";
			break;
		
		case 2:
			Local_67.f_221.f_217 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 1:
			Local_67.f_221.f_212 = "OJSR_BRAVE_1";
			break;
		
		case 2:
			Local_67.f_221.f_212 = "OJSR_BRAVE_2";
			break;
		
		case 3:
			Local_67.f_221.f_212 = "OJSR_BRAVE_3";
			break;
		
		case 4:
			Local_67.f_221.f_212 = "OJSR_BRAVE_4";
			break;
		
		case 5:
			Local_67.f_221.f_212 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 1:
			Local_67.f_221.f_218 = "OJSR_MOREAIM_1";
			break;
		
		case 2:
			Local_67.f_221.f_218 = "OJSR_MOREAIM_2";
			break;
		
		case 3:
			Local_67.f_221.f_218 = "OJSR_MOREAIM_3";
			break;
		
		case 4:
			Local_67.f_221.f_218 = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 1:
			Local_67.f_221.f_219 = "OJSR_SURNDER_1";
			break;
		
		case 2:
			Local_67.f_221.f_219 = "OJSR_SURNDER_2";
			break;
		
		case 3:
			Local_67.f_221.f_219 = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 1:
			Local_67.f_221.f_221 = "OJSR_POURCAN_1";
			break;
		
		case 2:
			Local_67.f_221.f_221 = "OJSR_POURCAN_2";
			break;
		
		case 3:
			Local_67.f_221.f_221 = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 1:
			Local_67.f_221.f_222 = "OJSR_FLEE_1";
			break;
		
		case 2:
			Local_67.f_221.f_222 = "OJSR_FLEE_2";
			break;
		
		case 3:
			Local_67.f_221.f_222 = "OJSR_FLEE_3";
			break;
		
		case 4:
			Local_67.f_221.f_222 = "OJSR_FLEE_4";
			break;
		
		case 5:
			Local_67.f_221.f_222 = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 1:
			Local_67.f_221.f_223 = "OJSR_RECSCAR_1";
			break;
		
		case 2:
			Local_67.f_221.f_223 = "OJSR_RECSCAR_2";
			break;
		
		case 3:
			Local_67.f_221.f_223 = "OJSR_RECSCAR_3";
			break;
		
		case 4:
			Local_67.f_221.f_223 = "OJSR_RECSCAR_4";
			break;
		
		case 5:
			Local_67.f_221.f_223 = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 1:
			Local_67.f_221.f_224 = "OJSR_RECAGGR_1";
			break;
		
		case 2:
			Local_67.f_221.f_224 = "OJSR_RECAGGR_2";
			break;
		
		case 3:
			Local_67.f_221.f_224 = "OJSR_RECAGGR_3";
			break;
		
		case 4:
			Local_67.f_221.f_224 = "OJSR_RECAGGR_4";
			break;
		
		case 5:
			Local_67.f_221.f_224 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 1:
			Local_67.f_221.f_225 = "OJSR_CSTMER_1";
			break;
		
		case 2:
			Local_67.f_221.f_225 = "OJSR_CSTMER_2";
			break;
		
		case 3:
			Local_67.f_221.f_225 = "OJSR_CSTMER_3";
			break;
		
		case 4:
			Local_67.f_221.f_225 = "OJSR_CSTMER_4";
			break;
		
		case 5:
			Local_67.f_221.f_225 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 1:
			Local_67.f_221.f_226 = "OJSR_MOSC_1";
			break;
		
		case 2:
			Local_67.f_221.f_226 = "OJSR_MOSC_2";
			break;
		
		case 3:
			Local_67.f_221.f_226 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 1:
			Local_67.f_221.f_228 = "OJSR_BUY_1";
			break;
		
		case 2:
			Local_67.f_221.f_228 = "OJSR_BUY_2";
			break;
		
		case 3:
			Local_67.f_221.f_228 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 1:
			Local_67.f_221.f_229 = "OJSR_STEAL_1";
			break;
		
		case 2:
			Local_67.f_221.f_229 = "OJSR_STEAL_2";
			break;
		
		case 3:
			Local_67.f_221.f_229 = "OJSR_STEAL_3";
			break;
	}
	Local_67.f_221.f_166 = "OJSRAUD";
	Local_67.f_221.f_167 = "OJSR_GREET";
	Local_67.f_221.f_168 = "OJSR_BATEQ";
	Local_67.f_221.f_169 = "OJSR_TOOLEQ";
	Local_67.f_221.f_170 = "OJSR_STICKEQ";
	Local_67.f_221.f_171 = "OJSR_WORRY";
	Local_67.f_221.f_172 = "OJSR_SHOCK";
	Local_67.f_221.f_173 = "OJSR_STUBBRN";
	Local_67.f_221.f_174 = "OJSR_COUNTER";
	Local_67.f_221.f_175 = "OJSR_BACKRM";
	Local_67.f_221.f_176 = "OJSR_BUMP";
	Local_67.f_221.f_177 = "OJSR_BPAIM";
	Local_67.f_221.f_178 = "OJSR_BPAIMAG";
	Local_67.f_221.f_179 = "OJSR_HOLDUP";
	Local_67.f_221.f_180 = "OJSR_SCARED";
	Local_67.f_221.f_181 = "OJSR_KNIFAIM";
	Local_67.f_221.f_182 = "OJSR_TOOLAIM";
	Local_67.f_221.f_183 = "OJSR_GRANAIM";
	Local_67.f_221.f_184 = "OJSR_STICAIM";
	Local_67.f_221.f_185 = "OJSR_BRAVE";
	Local_67.f_221.f_186 = "OJSR_MOREAIM";
	Local_67.f_221.f_187 = "OJSR_SURNDER";
	Local_67.f_221.f_188 = "OJSR_COPS";
	Local_67.f_221.f_189 = "OJSR_POURCAN";
	Local_67.f_221.f_190 = "OJSR_FLEE";
	Local_67.f_221.f_191 = "OJSR_RECSCAR";
	Local_67.f_221.f_192 = "OJSR_RECAGGR";
	Local_67.f_221.f_193 = "OJSR_CSTMER";
	Local_67.f_221.f_194 = "OJSR_MOSC";
	Local_67.f_221.f_195 = "OJSR_PLRHUR";
	Local_67.f_221.f_196 = "OJSR_BUY";
	Local_67.f_221.f_197 = "OJSR_STEAL";
	iLocal_578 = 0;
	iLocal_579 = 0;
	iLocal_580 = 0;
}

void func_239()
{
	unk_0x8A97BCA30A0CE478(Local_67.f_486.f_6, 0.5f, joaat("prop_till_01"), true);
	unk_0x8A97BCA30A0CE478(Local_67.f_486.f_6, 0.5f, joaat("prop_till_02"), true);
	unk_0x8A97BCA30A0CE478(Local_67.f_486.f_6, 0.5f, joaat("prop_till_03"), true);
	Local_67.f_96.f_1 = unk_0x509D5878EB39E842(Local_67.f_96, Local_67.f_486.f_6, true, true, false);
	unk_0x8E2530AA8ADA980E(Local_67.f_96.f_1, Local_67.f_96.f_5);
	unk_0x428CA6DBD1094446(Local_67.f_96.f_1, true);
}

void func_240()
{
	Local_67.f_28 = unk_0x2EAF1FDB2FB55698(joaat("pickup_portable_crate_unfixed"), Local_67.f_28.f_7, false, Local_67.f_28.f_13);
	unk_0x8524A8B0171D5E07(Local_67.f_28, Local_67.f_28.f_10, 2, true);
	unk_0xEA1C610A04DB6BBB(Local_67.f_28, 0);
	unk_0x92AEFB5F6E294023(Local_67.f_28, true, false);
	Local_67.f_28.f_14 = 0;
}

void func_241()
{
	int iVar0;
	int iVar1;
	
	Local_67.f_2 = unk_0xD49F9B0955C367DE(4, Local_67.f_2.f_5, Local_67.f_2.f_1, Local_67.f_2.f_4, true, true);
	func_247(iLocal_567, &iVar1, &iVar0);
	unk_0x262B14F48D29DE80(Local_67.f_2, 0, iVar1, iVar0, 0);
	func_246(&iVar1, &iVar0);
	unk_0x262B14F48D29DE80(Local_67.f_2, 2, iVar1, iVar0, 0);
	func_245(&iVar1, &iVar0);
	unk_0x262B14F48D29DE80(Local_67.f_2, 3, iVar1, iVar0, 0);
	func_244(&iVar1, &iVar0);
	unk_0x262B14F48D29DE80(Local_67.f_2, 4, iVar1, iVar0, 0);
	func_243(&iVar1, &iVar0);
	unk_0x262B14F48D29DE80(Local_67.f_2, 8, iVar1, iVar0, 0);
	unk_0x9F8AA94D6D97DBF4(Local_67.f_2, true);
	if (Local_67.f_2.f_12)
	{
		func_242();
	}
}

void func_242()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
	{
	}
}

void func_243(int iParam0, int iParam1)
{
	*iParam0 = unk_0xD53343AA4FB7DD28(0, 2);
	if (*iParam0 == 0)
	{
		*iParam1 = unk_0xD53343AA4FB7DD28(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_244(int iParam0, int iParam1)
{
	*iParam0 = 0;
	*iParam1 = unk_0xD53343AA4FB7DD28(0, 2);
}

void func_245(int iParam0, int iParam1)
{
	*iParam0 = unk_0xD53343AA4FB7DD28(0, 2);
	*iParam1 = unk_0xD53343AA4FB7DD28(0, 3);
}

void func_246(int iParam0, int iParam1)
{
	*iParam0 = unk_0xD53343AA4FB7DD28(0, 3);
	if (*iParam0 > 0)
	{
		*iParam1 = unk_0xD53343AA4FB7DD28(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_247(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam1 = 0;
			*uParam2 = unk_0xD53343AA4FB7DD28(0, 3);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam1 = 2;
			*uParam2 = unk_0xD53343AA4FB7DD28(0, 3);
			break;
	}
}

int func_248()
{
	if (!func_249(&Local_583))
	{
		return 0;
	}
	if (!bLocal_573)
	{
		if (!unk_0xD031A9162D01088C(Local_67.f_2.f_15))
		{
			return 0;
		}
	}
	if (!unk_0x6726BDCCC1932F0E(Local_67.f_185))
	{
		return 0;
	}
	unk_0x6F2135B6129620C1(false);
	return 1;
}

int func_249(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_250(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_250(var uParam0)
{
	return func_251(*uParam0, "NULL", uParam0->f_1);
}

int func_251(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xA921AA820C25702F(iParam0, 30))
	{
		if (unk_0xA921AA820C25702F(iParam0, 29))
		{
			switch (func_252(iParam0))
			{
				case 0:
					return unk_0x98A4EB5D89A0C952(iParam2);
					break;
				
				case 1:
					return unk_0xD031A9162D01088C(sParam1);
					break;
				
				case 2:
					return unk_0x318234F4F3738AF3(sParam1);
					break;
				
				case 3:
					return unk_0x0145F696AAAAD2E4(sParam1);
					break;
				
				case 4:
					return unk_0x300D614A4C785FC4(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0xCB4E8BE8A0063C5D(sParam1);
					break;
				
				case 6:
					return unk_0x2F844A8B08D76685(sParam1, unk_0xA921AA820C25702F(iParam0, 27));
					break;
				
				case 7:
					return unk_0x5F0F0C783EB16C04(iParam2);
					break;
				
				case 8:
					return unk_0x02245FE4BED318B8(iParam2);
					break;
				
				case 9:
					return unk_0xCA7D9B86ECA7481B();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_252(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xA921AA820C25702F(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_253()
{
	unk_0x6F2135B6129620C1(true);
	if (!bLocal_573)
	{
		unk_0xD3BD40951412FEF6(Local_67.f_2.f_15);
		Local_583.f_32 = unk_0xFC8202EFC642E6F2();
	}
	func_254(&Local_583, Local_67.f_2.f_5);
	func_254(&Local_583, Local_67.f_28.f_13);
	func_254(&Local_583, Local_67.f_96);
	Local_67.f_466 = 1;
}

void func_254(var uParam0, int iParam1)
{
	func_255(uParam0, 0, iParam1, 0);
}

void func_255(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_256(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*2*/], iParam1);
			unk_0x933D6A9EEC1BACD0(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_257()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	func_262(iLocal_567, &(Local_67.f_46.f_8), &(Local_67.f_46.f_18), &(Local_67.f_46.f_22), &(Local_67.f_46.f_25), &(Local_67.f_46.f_26), &(Local_67.f_46.f_27), &(Local_67.f_46.f_28), &(Local_67.f_46.f_31), &(Local_67.f_46.f_34));
	func_260(iLocal_567);
	Var0 = { -3244.573f, 1000.658f, 12.83f };
	fVar9 = 175.074f;
	Var3 = { -3242.008f, 1001.202f, 11.83071f };
	Var6 = { Var3 - Var0 };
	Var6 = { func_287(Var6, fVar9) };
	Var3 = { -3245.088f, 1001.468f, 13.65071f };
	Var6 = { Var3 - Var0 };
	Var6 = { func_287(Var6, fVar9) };
	Var3 = { -3243.37f, 1000.37f, 12.83f };
	Var6 = { Var3 - Var0 };
	Var6 = { func_287(Var6, fVar9) };
	Local_67.f_469 = -1;
	Local_67.f_102.f_22 = -1;
	Local_67.f_96 = joaat("p_till_01_s");
	Local_67.f_96.f_2 = { Local_67.f_486.f_6 };
	Local_67.f_96.f_5 = (Local_67.f_486.f_9.f_2 + 180f);
	Local_67.f_451.f_3 = 0;
	Local_67.f_458 = 0;
	Local_67.f_459 = 0;
	Local_67.f_460 = 0;
	Local_67.f_461 = 0;
	Local_67.f_462 = 0;
	Local_67.f_465 = 0;
	func_259(iLocal_567, &(Local_67.f_2.f_6), &(Local_67.f_2.f_9));
	func_258();
}

void func_258()
{
	Local_67.f_86.f_1 = joaat("a_m_y_soucent_04");
	Local_67.f_86.f_2 = { -1224.15f, -907.2f, 12.33f };
	Local_67.f_86.f_5 = 2f;
}

void func_259(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -709.7998f, -907.1352f, 18.2156f };
			*uParam2 = 291.6504f;
			break;
		
		case 1:
			*uParam1 = { -41.8128f, -1749.685f, 28.421f };
			*uParam2 = 214.6526f;
			break;
		
		case 2:
			*uParam1 = { 1159.682f, -314.254f, 68.2051f };
			*uParam2 = 232.6337f;
			break;
		
		case 3:
			*uParam1 = { 1707.303f, 4918.31f, 41.0636f };
			*uParam2 = 24.9178f;
			break;
		
		case 4:
			*uParam1 = { -1828.907f, 799.6096f, 137.1776f };
			*uParam2 = 247.1234f;
			break;
		
		case 5:
			*uParam1 = { 1168.971f, 2719.118f, 36.0632f };
			*uParam2 = 136.5945f;
			break;
		
		case 6:
			*uParam1 = { -2962.983f, 391.9788f, 14.0433f };
			*uParam2 = 176.1174f;
			break;
		
		case 7:
			*uParam1 = { -1218.283f, -915.7103f, 10.3264f };
			*uParam2 = 43.8031f;
			break;
		
		case 8:
			*uParam1 = { 1130.155f, -979.2816f, 45.4158f };
			*uParam2 = 269.2587f;
			break;
		
		case 9:
			*uParam1 = { -1479.163f, -375.0302f, 38.1633f };
			*uParam2 = 36.5415f;
			break;
		
		case 10:
			*uParam1 = { -3249.114f, 1006.558f, 11.8307f };
			*uParam2 = 191.594f;
			break;
		
		case 11:
			*uParam1 = { -3047.512f, 588.9807f, 6.9089f };
			*uParam2 = 178.8753f;
			break;
		
		case 12:
			*uParam1 = { 543.0796f, 2663.967f, 41.1565f };
			*uParam2 = 228.4295f;
			break;
		
		case 13:
			*uParam1 = { 2549.85f, 387.1622f, 107.623f };
			*uParam2 = 197.2994f;
			break;
		
		case 14:
			*uParam1 = { 2671.351f, 3283.136f, 54.2411f };
			*uParam2 = 296.5427f;
			break;
		
		case 15:
			*uParam1 = { 1733.967f, 6421.495f, 34.0372f };
			*uParam2 = 130.9518f;
			break;
		
		case 16:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
		
		case 17:
			*uParam1 = { 30.5721f, -1339.782f, 28.4939f };
			*uParam2 = 110.7699f;
			break;
		
		case 18:
			*uParam1 = { 376.2976f, 331.8158f, 102.5664f };
			*uParam2 = 52.0064f;
			break;
		
		case -2:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
	}
}

void func_260(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_261(Local_67.f_186, Local_67.f_189) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_67.f_185 = unk_0x05B7A89BD78797FC(Var0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_67.f_185 = unk_0x05B7A89BD78797FC(Var0, "v_gen_liquor");
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			Local_67.f_185 = unk_0x05B7A89BD78797FC(Var0, "v_shop_247");
			break;
	}
}

Vector3 func_261(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	
	Var0.f_0 = ((Param0.f_0 + Param3.f_0) / 2f);
	Var0.f_1 = ((Param0.f_1 + Param3.f_1) / 2f);
	Var0.f_2 = ((Param0.f_2 + Param3.f_2) / 2f);
	return Var0;
}

void func_262(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	if (!func_263(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -677.0792f, -952.9478f, 20.4712f };
			(*uParam2)[0] = 90.5427f;
			*(uParam1[1 /*3*/]) = { -668.8872f, -961.7076f, 20.6313f };
			(*uParam2)[1] = 90.5427f;
			*(uParam1[2 /*3*/]) = { -749.7003f, -901.2264f, 19.6691f };
			(*uParam2)[2] = 170.7498f;
			*uParam3 = { -715.81f, -930.27f, 18.04f };
			*uParam4 = 8.81f;
			*uParam7 = { -714.079f, -918.088f, 18.196f };
			*uParam8 = { -709.079f, -918.166f, 22.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 1:
			*(uParam1[0 /*3*/]) = { -133.86f, -1764.29f, 29.39f };
			(*uParam2)[0] = 297.87f;
			*(uParam1[1 /*3*/]) = { -63.16f, -1793.14f, 27.23f };
			(*uParam2)[1] = 50.66f;
			*(uParam1[2 /*3*/]) = { -56.5f, -1810.22f, 26.6f };
			(*uParam2)[2] = 50.67f;
			*uParam3 = { -68.92f, -1764.16f, 28.23f };
			*uParam4 = 9f;
			*uParam7 = { -55.922f, -1756.021f, 28.196f };
			*uParam8 = { -52.122f, -1759.271f, 32.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 2:
			*(uParam1[0 /*3*/]) = { 1103.004f, -378.3616f, 66.6258f };
			(*uParam2)[0] = 310.6741f;
			*(uParam1[1 /*3*/]) = { 1186.703f, -289.3757f, 68.5913f };
			(*uParam2)[1] = 214.1061f;
			*(uParam1[2 /*3*/]) = { 1251.639f, -371.6591f, 68.7078f };
			(*uParam2)[2] = 164.5987f;
			*uParam3 = { 1161.84f, -339.25f, 67.29f };
			*uParam4 = 9.17f;
			*uParam7 = { 1157.417f, -328.616f, 68.048f };
			*uParam8 = { 1162.351f, -327.81f, 72.048f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 3:
			*(uParam1[0 /*3*/]) = { 1667.82f, 4916.04f, 41.71f };
			(*uParam2)[0] = 346.32f;
			*(uParam1[1 /*3*/]) = { 1710.43f, 4963.03f, 43.92f };
			(*uParam2)[1] = 112.11f;
			*(uParam1[2 /*3*/]) = { 1727.59f, 4986.13f, 46.4f };
			(*uParam2)[2] = 132.27f;
			*uParam3 = { 1692.99f, 4939.56f, 41.16f };
			*uParam4 = 10f;
			*uParam7 = { 1699.338f, 4932.104f, 41.083f };
			*uParam8 = { 1696.313f, 4928.124f, 45.083f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 4:
			*(uParam1[0 /*3*/]) = { -1862.436f, 732.8416f, 130.8709f };
			(*uParam2)[0] = 301.6958f;
			*(uParam1[1 /*3*/]) = { -1870.955f, 722.3616f, 129.6428f };
			(*uParam2)[1] = 300.6013f;
			*(uParam1[2 /*3*/]) = { -1711.103f, 873.6471f, 145.9411f };
			(*uParam2)[2] = 146.5694f;
			*uParam3 = { -1814.22f, 782.55f, 136.57f };
			*uParam4 = 7.24f;
			*uParam7 = { -1823.281f, 785.687f, 137.027f };
			*uParam8 = { -1819.465f, 788.918f, 141.027f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 5:
			*(uParam1[0 /*3*/]) = { 1127.43f, 2680.61f, 38.02f };
			(*uParam2)[0] = 268.18f;
			*(uParam1[1 /*3*/]) = { 1205.02f, 2687.1f, 37.34f };
			(*uParam2)[1] = 91.37f;
			*(uParam1[2 /*3*/]) = { 1218.17f, 2677.4f, 37.27f };
			(*uParam2)[2] = 88.15f;
			*uParam3 = { 1164.39f, 2683.2f, 37.06f };
			*uParam4 = 8.49f;
			*uParam7 = { 1164.771f, 2702.528f, 38.162f };
			*uParam8 = { 1167.771f, 2702.548f, 41.162f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 6:
			*(uParam1[0 /*3*/]) = { -3021.405f, 236.3884f, 15.6982f };
			(*uParam2)[0] = 354.8025f;
			*(uParam1[1 /*3*/]) = { -3021.883f, 207.4436f, 15.7511f };
			(*uParam2)[1] = 2.3146f;
			*(uParam1[2 /*3*/]) = { -3015.012f, 640.891f, 21.0514f };
			(*uParam2)[2] = 193.5162f;
			*uParam3 = { -2990.03f, 391.19f, 13.83f };
			*uParam4 = 9.41f;
			*uParam7 = { -2974.55f, 393.338f, 14.037f };
			*uParam8 = { -2975.084f, 388.366f, 18.037f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 7:
			*(uParam1[0 /*3*/]) = { -1270.806f, -944.262f, 10.8025f };
			(*uParam2)[0] = 17.2662f;
			*(uParam1[1 /*3*/]) = { -1327.767f, -855.9691f, 16.4331f };
			(*uParam2)[1] = 216.1689f;
			*(uParam1[2 /*3*/]) = { -1155.798f, -862.4445f, 13.4857f };
			(*uParam2)[2] = 36.347f;
			*uParam3 = { -1233.36f, -891.39f, 11.35f };
			*uParam4 = 5.7f;
			*uParam7 = { -1225.2f, -899.881f, 11.275f };
			*uParam8 = { -1229.293f, -902.753f, 15.275f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 8:
			*(uParam1[0 /*3*/]) = { 1132.016f, -956.2646f, 47.2548f };
			(*uParam2)[0] = 278.2335f;
			*(uParam1[1 /*3*/]) = { 1121.218f, -959.5676f, 46.788f };
			(*uParam2)[1] = 289.4738f;
			*(uParam1[2 /*3*/]) = { 1236.959f, -1153.587f, 37.1736f };
			(*uParam2)[2] = 27.5191f;
			*uParam3 = { 1154.17f, -979.23f, 45.36f };
			*uParam4 = 6.02f;
			*uParam7 = { 1142.794f, -983.315f, 45.205f };
			*uParam8 = { 1142.519f, -978.322f, 49.205f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 9:
			*(uParam1[0 /*3*/]) = { -1525.77f, -389.17f, 41.39f };
			(*uParam2)[0] = 229.73f;
			*(uParam1[1 /*3*/]) = { -1537.28f, -378.84f, 43.02f };
			(*uParam2)[1] = 226.22f;
			*(uParam1[2 /*3*/]) = { -1475.06f, -418.35f, 35.71f };
			(*uParam2)[2] = 45.71f;
			*uParam3 = { -1502.71f, -400.39f, 38.41f };
			*uParam4 = 7.86f;
			*uParam7 = { -1493.544f, -382.617f, 38.994f };
			*uParam8 = { -1489.947f, -386.09f, 42.994f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 10:
			*(uParam1[0 /*3*/]) = { -3218.999f, 1105.409f, 9.9489f };
			(*uParam2)[0] = 175.7402f;
			*(uParam1[1 /*3*/]) = { -3210.846f, 1114.875f, 9.8453f };
			(*uParam2)[1] = 152.4543f;
			*(uParam1[2 /*3*/]) = { -3201.518f, 920.3387f, 13.8887f };
			(*uParam2)[2] = 54.6774f;
			*uParam3 = { -3230.27f, 1003.54f, 11.31f };
			*uParam4 = 5.42f;
			*uParam7 = { -3238.442f, 1001.727f, 11.161f };
			*uParam8 = { -3238.268f, 1006.724f, 15.161f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 11:
			*(uParam1[0 /*3*/]) = { -3061.218f, 658.6545f, 9.6541f };
			(*uParam2)[0] = 216.9221f;
			*(uParam1[1 /*3*/]) = { -3017.391f, 509.7967f, 6.7435f };
			(*uParam2)[1] = 348.3592f;
			*(uParam1[2 /*3*/]) = { -3029.232f, 521.1291f, 6.975f };
			(*uParam2)[2] = 337.5117f;
			*uParam3 = { -3027.51f, 594.25f, 6.87f };
			*uParam4 = 5.89f;
			*uParam7 = { -3036.615f, 587.625f, 6.818f };
			*uParam8 = { -3038.087f, 592.404f, 10.818f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 12:
			*(uParam1[0 /*3*/]) = { 523.8614f, 2658.057f, 42.068f };
			(*uParam2)[0] = 2.8999f;
			*(uParam1[1 /*3*/]) = { 471.6328f, 2657.835f, 42.9164f };
			(*uParam2)[1] = 329.1264f;
			*(uParam1[2 /*3*/]) = { 656.9346f, 2731.927f, 41.5306f };
			(*uParam2)[2] = 183.28f;
			*uParam3 = { 545.05f, 2684.96f, 41.3f };
			*uParam4 = 6.77f;
			*uParam7 = { 546.505f, 2674.393f, 41.152f };
			*uParam8 = { 541.547f, 2673.75f, 45.152f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 13:
			*(uParam1[0 /*3*/]) = { 2593.841f, 273.2788f, 104.926f };
			(*uParam2)[0] = 345.1121f;
			*(uParam1[1 /*3*/]) = { 2595.69f, 262.9971f, 104.2577f };
			(*uParam2)[1] = 350.3949f;
			*(uParam1[2 /*3*/]) = { 2591.545f, 256.5517f, 103.7544f };
			(*uParam2)[2] = 343.9362f;
			*uParam3 = { 2575.75f, 385.11f, 107.46f };
			*uParam4 = 11.61f;
			*uParam7 = { 2560.435f, 382.891f, 107.626f };
			*uParam8 = { 2560.67f, 387.886f, 111.626f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 14:
			*(uParam1[0 /*3*/]) = { 2672.64f, 3259.44f, 54.87f };
			(*uParam2)[0] = 324.3f;
			*(uParam1[1 /*3*/]) = { 2703.37f, 3294.47f, 55.31f };
			(*uParam2)[1] = 152.87f;
			*(uParam1[2 /*3*/]) = { 2699.45f, 3299.76f, 55.35f };
			(*uParam2)[2] = 152.55f;
			*uParam3 = { 2691.41f, 3275.22f, 54.24f };
			*uParam4 = 7.56f;
			*uParam7 = { 2681.77f, 3279.805f, 54.245f };
			*uParam8 = { 2684.297f, 3284.12f, 58.245f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 15:
			*(uParam1[0 /*3*/]) = { 1740.035f, 6378.202f, 35.0341f };
			(*uParam2)[0] = 81.6255f;
			*(uParam1[1 /*3*/]) = { 1755.786f, 6375.046f, 36.2501f };
			(*uParam2)[1] = 76.057f;
			*(uParam1[2 /*3*/]) = { 1752.839f, 6367.344f, 36.135f };
			(*uParam2)[2] = 75.9713f;
			*uParam3 = { 1725.56f, 6400.85f, 33.42f };
			*uParam4 = 7.09f;
			*uParam7 = { 1728.266f, 6411.254f, 34.006f };
			*uParam8 = { 1732.739f, 6409.022f, 38.006f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 16:
			*(uParam1[0 /*3*/]) = { 1942.142f, 3738.897f, 31.9693f };
			(*uParam2)[0] = 210.3384f;
			*(uParam1[1 /*3*/]) = { 2024.891f, 3780.588f, 31.9156f };
			(*uParam2)[1] = 210.1552f;
			*(uParam1[2 /*3*/]) = { 1879.631f, 3673.292f, 33.1966f };
			(*uParam2)[2] = 302.2257f;
			*uParam3 = { 1968.55f, 3731.03f, 31.36f };
			*uParam4 = 6.12f;
			*uParam7 = { 1963.491f, 3738.337f, 31.324f };
			*uParam8 = { 1967.792f, 3740.886f, 35.324f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 17:
			*(uParam1[0 /*3*/]) = { 73.57f, -1359.63f, 28.96f };
			(*uParam2)[0] = 93.85f;
			*(uParam1[1 /*3*/]) = { 77.26f, -1364.69f, 28.97f };
			(*uParam2)[1] = 88.25f;
			*(uParam1[2 /*3*/]) = { -17.95f, -1366.03f, 28.97f };
			(*uParam2)[2] = 267.29f;
			*uParam3 = { 30.98f, -1362.09f, 28.33f };
			*uParam4 = 6f;
			*uParam7 = { 27.296f, -1350.255f, 28.33232f };
			*uParam8 = { 30.795f, -1350.308f, 30.82019f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 18:
			*(uParam1[0 /*3*/]) = { 424.9115f, 314.1133f, 102.622f };
			(*uParam2)[0] = 155.4277f;
			*(uParam1[1 /*3*/]) = { 439.6049f, 292.7892f, 102.5935f };
			(*uParam2)[1] = 74.6758f;
			*(uParam1[2 /*3*/]) = { 275.961f, 331.2577f, 105.1467f };
			(*uParam2)[2] = 250.7508f;
			*uParam3 = { 372.79f, 313f, 102.47f };
			*uParam4 = 3.94f;
			*uParam7 = { 373.907f, 322.739f, 102.439f };
			*uParam8 = { 378.778f, 321.61f, 106.439f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
	}
}

int func_263(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

int func_264()
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(Local_67.f_0, true) };
		if (unk_0xF1B760881820C952(Var0, Local_67.f_181, true) < 50f)
		{
			return 1;
		}
	}
	return 0;
}

void func_265()
{
	if (Local_67.f_46.f_26 != 0)
	{
		unk_0xE532F5D78798DAAB(Local_67.f_46.f_26);
	}
	if (Local_67.f_46.f_27 != 0)
	{
		unk_0xE532F5D78798DAAB(Local_67.f_46.f_27);
	}
	if (!unk_0xCA042B6957743895(Local_67.f_2.f_15))
	{
		unk_0xF66A602F829E2A06(Local_67.f_2.f_15);
	}
}

int func_266()
{
	if (Global_97173.f_7311)
	{
		if (!func_270(56))
		{
			return 1;
		}
	}
	if (func_269())
	{
		return 1;
	}
	if (!unk_0xC5042CC6F5E3D450())
	{
		return 1;
	}
	if (func_286() && !func_285())
	{
		return 1;
	}
	if (func_268() && func_267())
	{
		return 1;
	}
	if (Global_24446)
	{
		unk_0x8DFCED7A656F8802(true);
		unk_0x1090044AD1DA76FA();
	}
	return 0;
}

bool func_267()
{
	return Global_96891 > 0;
}

int func_268()
{
	if (Global_87111 != -1)
	{
		return 1;
	}
	return 0;
}

int func_269()
{
	struct<3> Var0;
	float fVar3;
	
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(Local_67.f_0, true) };
		fVar3 = unk_0xF1B760881820C952(Var0, Local_67.f_181, true);
		if (fVar3 > Local_67.f_184)
		{
			return 1;
		}
	}
	return 0;
}

int func_270(int iParam0)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_58[iParam0];
}

void func_271(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0xFC8202EFC642E6F2() >= (uParam0->f_32 + uParam0->f_33) || unk_0xA921AA820C25702F(Global_89784.f_20, 2)) || unk_0xA921AA820C25702F(Global_89784.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 29))
					{
						func_272(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0xFC8202EFC642E6F2();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_272(int* iParam0)
{
	func_273(iParam0, "NULL", iParam0->f_1);
}

void func_273(int* iParam0, char* sParam1, int iParam2)
{
	if (unk_0xA921AA820C25702F(*iParam0, 30))
	{
		switch (func_252(*iParam0))
		{
			case 0:
				unk_0x963D27A58DF860AC(iParam2);
				break;
			
			case 1:
				unk_0xD3BD40951412FEF6(sParam1);
				break;
			
			case 2:
				unk_0xD2A71E1A77418A49(sParam1);
				break;
			
			case 3:
				unk_0xDFA2EF8E04127DD5(sParam1, unk_0xA921AA820C25702F(*iParam0, 28));
				break;
			
			case 4:
				unk_0xAF514CABE74CBF15(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x9EEFB62EB27B5792(sParam1);
				break;
			
			case 6:
				unk_0x2F844A8B08D76685(sParam1, unk_0xA921AA820C25702F(*iParam0, 27));
				break;
			
			case 7:
				unk_0xD62A67D26D9653E6(iParam2);
				break;
			
			case 8:
				unk_0x71A78003C8E71424(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x944955FB2A3935C8();
				break;
			
			default:
				break;
		}
		unk_0x933D6A9EEC1BACD0(iParam0, 29);
	}
}

int func_274()
{
	int iVar0;
	
	if (Local_67.f_1 != Global_97173.f_18256.f_62[iLocal_567])
	{
		return 1;
	}
	iVar0 = (unk_0x3D10BC92A4DB1D35() - Global_97173.f_18256.f_42[iLocal_567]);
	iLocal_572 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0x3D10BC92A4DB1D35() + 31;
		iVar0 = (iVar0 - Global_97173.f_18256.f_42[iLocal_567]);
	}
	if (iVar0 < iLocal_572)
	{
		return 0;
	}
	return 1;
}

void func_275(var uParam0, int iParam1)
{
	func_276(uParam0, iParam1);
}

void func_276(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_277(int iParam0, float fParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam2 = { unk_0x163E252DE035A133(func_278(iParam0), fParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { unk_0x163E252DE035A133(func_278(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { unk_0x163E252DE035A133(func_278(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { unk_0x163E252DE035A133(func_278(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam2 = { unk_0x163E252DE035A133(func_278(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { unk_0x163E252DE035A133(func_278(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
			break;
	}
	return 1;
}

Vector3 func_278(int iParam0)
{
	if (!func_263(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_279()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (unk_0x25223CA6B4D20B7F() - Global_97173.f_18256.f_21[iLocal_567]);
	iVar1 = (unk_0x3D10BC92A4DB1D35() - Global_97173.f_18256.f_42[iLocal_567]);
	iLocal_571 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0x25223CA6B4D20B7F() + 24;
		iVar0 = (iVar0 - Global_97173.f_18256.f_21[iLocal_567]);
		iVar2 = 1;
	}
	if ((iVar0 < iLocal_571 && iVar1 == 0) || (iVar0 < iLocal_571 && iVar2))
	{
		return 1;
	}
	return 0;
}

void func_280(bool bParam0)
{
	int iVar0;
	var uVar1[2];
	var uVar4[2];
	struct<3> Var7[2];
	
	func_281(iLocal_567, &uVar1, &uVar4, &Var7);
	if (!func_1(Local_67.f_470, 64))
	{
		if (!unk_0xC153C43EA202C8C1(uVar1[iVar0]))
		{
			unk_0x6F8838D03D1DC226(uVar1[0], uVar4[0], Var7[0 /*3*/], false, false, false);
			if (uVar1[1] != -1)
			{
				unk_0x6F8838D03D1DC226(uVar1[1], uVar4[1], Var7[1 /*3*/], false, false, false);
			}
		}
		func_275(&(Local_67.f_470), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xC153C43EA202C8C1(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (unk_0x160AA1B32F6139B8(uVar1[iVar0]) != 1)
				{
					unk_0x6BAB9442830C7F53(uVar1[iVar0], 1, false, false);
				}
			}
			else if (unk_0x160AA1B32F6139B8(uVar1[iVar0]) != 0)
			{
				unk_0x6BAB9442830C7F53(uVar1[iVar0], 0, false, false);
			}
		}
		iVar0++;
	}
}

void func_281(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 1:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 2:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 3:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 4:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 5:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = -1;
			break;
		
		case 6:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = -1;
			break;
		
		case 7:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = -1;
			break;
		
		case 8:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = -1;
			break;
		
		case 9:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = -1;
			break;
		
		case 10:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 11:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 12:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 13:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 14:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 15:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 16:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 17:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 18:
			(*uParam1)[0] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = unk_0xD24D37CC275948CC("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 377.88f, 323.17f, 103.72f };
			break;
	}
}

void func_282(var uParam0, int iParam1)
{
	func_283(uParam0, iParam1);
}

void func_283(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_284()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_0))
	{
		if (unk_0x51210CED3DA1C78A(Local_67.f_0, Local_67.f_186, Local_67.f_189, Local_67.f_192, false, true, 0))
		{
			return 1;
		}
		else if (unk_0x51210CED3DA1C78A(Local_67.f_0, Local_67.f_200, Local_67.f_203, Local_67.f_206, false, true, 0))
		{
			return 1;
		}
		else if (unk_0x51210CED3DA1C78A(Local_67.f_0, Local_67.f_207, Local_67.f_210, Local_67.f_213, false, true, 0))
		{
			return 1;
		}
		else if (Local_67.f_199 != -1f)
		{
			if (unk_0x51210CED3DA1C78A(Local_67.f_0, Local_67.f_193, Local_67.f_196, Local_67.f_199, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_285()
{
	if (unk_0x48AF36444B965238())
	{
		if (unk_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_286()
{
	if (Global_87111 != -1)
	{
		return unk_0xA921AA820C25702F(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

Vector3 func_287(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

void func_288(var uParam0)
{
	iLocal_66 = 0;
	iLocal_64 = 0;
	iLocal_62 = 0;
	iLocal_63 = 0;
	iLocal_61 = 0;
	iLocal_60 = 1;
	iLocal_56 = 0;
	iLocal_59 = 1;
	iLocal_58 = 0;
	iLocal_55 = 0;
	iLocal_54 = 0;
	iLocal_52 = 0;
	iLocal_51 = 0;
	Local_67.f_0 = unk_0xD80958FC74E988A6();
	func_296(&(uParam0->f_1[0 /*3*/]), &(Local_67.f_181), &iLocal_567);
	if ((((((((iLocal_567 == 10 || iLocal_567 == 11) || iLocal_567 == 12) || iLocal_567 == 13) || iLocal_567 == 14) || iLocal_567 == 15) || iLocal_567 == 16) || iLocal_567 == 17) || iLocal_567 == 18)
	{
		bLocal_581 = true;
	}
	Local_67.f_184 = 150f;
	Local_67.f_2.f_15 = "random@shop_robbery_reactions@";
	Local_67.f_2.f_16 = "absolutely";
	Local_67.f_2.f_17 = "is_this_it";
	Local_67.f_2.f_18 = "shock";
	Local_67.f_2.f_19 = "anger_a";
	Local_67.f_2.f_20 = "screw_you";
	Local_67.f_2.f_21 = "but_why";
	Local_67.f_486.f_1 = "mp_am_hold_up";
	Local_67.f_486.f_2 = "guard_handsup_loop";
	Local_67.f_486.f_3 = "holdup_victim_20s";
	Local_67.f_486.f_4 = "holdup_victim_20s_bag";
	Local_67.f_486.f_5 = "holdup_victim_20s_till";
	iLocal_569 = func_295();
	if (!bLocal_573)
	{
		func_291();
	}
	iLocal_574 = 0;
	if (iLocal_567 != 7)
	{
		iLocal_53 = 6;
	}
	else
	{
		iLocal_53 = 0;
	}
	if (func_92() == 0)
	{
		Local_67.f_1 = 0;
	}
	else if (func_92() == 1)
	{
		Local_67.f_1 = 1;
	}
	else if (func_92() == 2)
	{
		Local_67.f_1 = 2;
	}
	func_290(iLocal_567, &(Local_67.f_186), &(Local_67.f_189), &(Local_67.f_192), &(Local_67.f_193), &(Local_67.f_196), &(Local_67.f_199), &(Local_67.f_200), &(Local_67.f_203), &(Local_67.f_206), &(Local_67.f_207), &(Local_67.f_210), &(Local_67.f_213), &(Local_67.f_214), &(Local_67.f_217), &(Local_67.f_220), &(Local_67.f_102.f_6), &(Local_67.f_102.f_9));
	func_289(iLocal_567, &(Local_67.f_486.f_6), &(Local_67.f_486.f_9), &(Local_67.f_2.f_1), &(Local_67.f_2.f_4), &(Local_67.f_2.f_5), &(Local_67.f_28.f_7), &(Local_67.f_28.f_10), &(Local_67.f_28.f_13), &(Local_67.f_28.f_4), &(Local_67.f_28.f_5), &(Local_67.f_102.f_21));
}

void func_289(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	switch (iParam0)
	{
		case 0:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -706.6382f, -913.6887f, 19.21f };
			*uParam2 = { 0f, 0f, -89.999f };
			break;
		
		case 1:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -47.19871f, -1757.67f, 29.42f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		
		case 2:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1164.21f, -322.89f, 69.2f };
			*uParam2 = { 0f, 0f, -80f };
			break;
		
		case 3:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1698.307f, 4923.371f, 42.06f };
			*uParam2 = { 0f, 0f, 145f };
			break;
		
		case 4:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1820.465f, 793.8166f, 138.09f };
			*uParam2 = { 0f, 0f, -47.53f };
			break;
		
		case 5:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1165.958f, 2710.201f, 38.14286f };
			*uParam2 = { 0f, 0f, -1.15f };
			break;
		
		case 6:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -2967.027f, 390.9038f, 15.02f };
			*uParam2 = { 0f, 0f, -94.76f };
			break;
		
		case 7:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1222.331f, -907.8234f, 12.31f };
			*uParam2 = { 0f, 0f, -147.297f };
			break;
		
		case 8:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1134.811f, -982.3615f, 46.4f };
			*uParam2 = { 0f, 0f, 96.68562f };
			break;
		
		case 9:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1486.673f, -378.4638f, 40.15f };
			*uParam2 = { 0f, 0f, -46.229f };
			break;
		
		case 10:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3244.573f, 1000.658f, 12.83f };
			*uParam2 = { 0f, 0f, 175.074f };
			break;
		
		case 11:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3041.357f, 584.2665f, 7.9f };
			*uParam2 = { 0f, 0f, -162.241f };
			break;
		
		case 12:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 548.9015f, 2668.941f, 42.15f };
			*uParam2 = { 0f, 0f, -82.5f };
			break;
		
		case 13:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2554.875f, 381.3857f, 108.62f };
			*uParam2 = { 0f, 0f, 177.716f };
			break;
		
		case 14:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2676.212f, 3280.969f, 55.24f };
			*uParam2 = { 0f, 0f, 150.87f };
			break;
		
		case 15:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1729.329f, 6417.123f, 35.03f };
			*uParam2 = { 0f, 0f, 63.641f };
			break;
		
		case 16:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1959.323f, 3742.29f, 32.34f };
			*uParam2 = { 0f, 0f, 120f };
			break;
		
		case 17:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 24.94562f, -1344.954f, 29.49f };
			*uParam2 = { 0f, 0f, 90f };
			break;
		
		case 18:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 373.5954f, 328.5892f, 103.56f };
			*uParam2 = { 0f, 0f, 75.885f };
			break;
	}
	*uParam9 = 220;
	*uParam10 = 787;
	*uParam3 = { unk_0x163E252DE035A133(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { unk_0x163E252DE035A133(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { unk_0x163E252DE035A133(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
			*uParam11 = 2;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam6 = { unk_0x163E252DE035A133(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
			*uParam11 = 3;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_290(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -711.81f, -916.36f, 18.22f };
			*uParam2 = { -711.74f, -908.75f, 21.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -705.76f, -908.76f, 18.22f };
			*uParam5 = { -705.8f, -903.16f, 21.24f };
			*uParam6 = 2.32f;
			*uParam7 = { -709.02f, -907.72f, 18.22f };
			*uParam8 = { -708.96f, -903.15f, 21.25f };
			*uParam9 = 3.66f;
			*uParam10 = { -707.05f, -907.18f, 18.23f };
			*uParam11 = { -707.04f, -905.9f, 20.51f };
			*uParam12 = 0.75f;
			*uParam13 = { -704.528f, -913.948f, 18f };
			*uParam14 = { -706.528f, -913.948f, 22.221f };
			*uParam15 = 4f;
			*uParam16 = { -711.2905f, -913.7919f, 19.1156f };
			*uParam17 = 1.05f;
			break;
		
		case 1:
			*uParam1 = { -52.86f, -1756.43f, 28.42f };
			*uParam2 = { -47.94f, -1750.6f, 31.93f };
			*uParam3 = 13.92f;
			*uParam4 = { -43.36f, -1754.47f, 28.44f };
			*uParam5 = { -39.78f, -1750.15f, 31.46f };
			*uParam6 = 2.32f;
			*uParam7 = { -45.14f, -1751.51f, 28.43f };
			*uParam8 = { -42.23f, -1748.08f, 31.48f };
			*uParam9 = 3.66f;
			*uParam10 = { -43.3f, -1752.4f, 28.48f };
			*uParam11 = { -42.5f, -1751.44f, 30.71f };
			*uParam12 = 0.75f;
			*uParam13 = { -45.23195f, -1756.996f, 28.42101f };
			*uParam14 = { -47.68424f, -1759.943f, 31.92101f };
			*uParam15 = 1.8f;
			*uParam16 = { -50.83334f, -1754.827f, 29.321f };
			*uParam17 = 1.05f;
			break;
		
		case 2:
			*uParam1 = { 1159.64f, -326.47f, 68.21f };
			*uParam2 = { 1158.33f, -318.91f, 71.71f };
			*uParam3 = 13.92f;
			*uParam4 = { 1164.22f, -317.89f, 68.21f };
			*uParam5 = { 1163.26f, -312.51f, 71.2f };
			*uParam6 = 2.32f;
			*uParam7 = { 1160.91f, -317.34f, 68.21f };
			*uParam8 = { 1160.11f, -313.19f, 71.13f };
			*uParam9 = 3.66f;
			*uParam10 = { 1162.68f, -316.51f, 68.23f };
			*uParam11 = { 1162.46f, -315.28f, 70.49f };
			*uParam12 = 0.75f;
			*uParam13 = { 1164.222f, -323.349f, 68.21f };
			*uParam14 = { 1166.191f, -323.001f, 72.21f };
			*uParam15 = 4f;
			*uParam16 = { 1159.639f, -323.7686f, 69.1051f };
			*uParam17 = 1.05f;
			break;
		
		case 3:
			*uParam1 = { 1699.09f, 4929.01f, 41.06f };
			*uParam2 = { 1705.3f, 4924.67f, 44.58f };
			*uParam3 = 13.92f;
			*uParam4 = { 1701.85f, 4919.78f, 41.06f };
			*uParam5 = { 1706.43f, 4916.54f, 44.1f };
			*uParam6 = 2.32f;
			*uParam7 = { 1704.57f, 4921.8f, 41.06f };
			*uParam8 = { 1708.29f, 4919.18f, 44.1f };
			*uParam9 = 3.66f;
			*uParam10 = { 1703.9f, 4919.88f, 41.09f };
			*uParam11 = { 1704.92f, 4919.15f, 43.36f };
			*uParam12 = 0.75f;
			*uParam13 = { 1698.032f, 4923.538f, 41.069f };
			*uParam14 = { 1696.99f, 4921.831f, 45.069f };
			*uParam15 = 4f;
			*uParam16 = { 1700.856f, 4927.15f, 41.96366f };
			*uParam17 = 1.05f;
			break;
		
		case 4:
			*uParam1 = { -1822.46f, 788.35f, 137.19f };
			*uParam2 = { -1827.54f, 794.02f, 140.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -1823.17f, 798.02f, 137.1f };
			*uParam5 = { -1826.81f, 802.05f, 140.12f };
			*uParam6 = 2.32f;
			*uParam7 = { -1826.25f, 796.63f, 137.16f };
			*uParam8 = { -1829.17f, 799.88f, 140.16f };
			*uParam9 = 3.66f;
			*uParam10 = { -1825.16f, 798.33f, 137.13f };
			*uParam11 = { -1826f, 799.31f, 139.43f };
			*uParam12 = 0.75f;
			*uParam13 = { -1820.332f, 793.679f, 137.084f };
			*uParam14 = { -1818.891f, 795.067f, 141.084f };
			*uParam15 = 4f;
			*uParam16 = { -1823.841f, 790.7311f, 138.0864f };
			*uParam17 = 1.05f;
			break;
		
		case 5:
			*uParam1 = { 1170.182f, 2708.049f, 37.6f };
			*uParam2 = { 1162.385f, 2708.255f, 40.6f };
			*uParam3 = 8.8f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1170.399f, 2716.422f, 37f };
			*uParam8 = { 1162.601f, 2716.628f, 41.19f };
			*uParam9 = 9f;
			*uParam10 = { 1170.7f, 2712.368f, 37.7f };
			*uParam11 = { 1168.3f, 2712.431f, 40.73f };
			*uParam12 = 1.5f;
			*uParam13 = { 1165.149f, 2712.433f, 37.138f };
			*uParam14 = { 1165.132f, 2710.033f, 41.138f };
			*uParam15 = 5f;
			*uParam16 = { 1165.946f, 2709.136f, 37.96316f };
			*uParam17 = 1f;
			break;
		
		case 6:
			*uParam1 = { -2973.31f, 390.75f, 14.04f };
			*uParam2 = { -2964.67f, 390.23f, 17.65f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -2956.98f, 389.73f, 13.21f };
			*uParam8 = { -2964.11f, 390.19f, 17.65f };
			*uParam9 = 7.5f;
			*uParam10 = { -2964.86f, 388.43f, 14.05f };
			*uParam11 = { -2964.98f, 386.49f, 17.63f };
			*uParam12 = 1.72f;
			*uParam13 = { -2964.645f, 391.391f, 14.048f };
			*uParam14 = { -2966.636f, 391.577f, 18.048f };
			*uParam15 = 4.5f;
			*uParam16 = { -2967.906f, 391.0424f, 14.94331f };
			*uParam17 = 1f;
			break;
		
		case 7:
			*uParam1 = { -1226.29f, -902.84f, 11.33f };
			*uParam2 = { -1221.4f, -910.16f, 14.93f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1217.01f, -916.41f, 10.47f };
			*uParam8 = { -1221.13f, -910.58f, 14.89f };
			*uParam9 = 7.5f;
			*uParam10 = { -1222.99f, -911.03f, 11.33f };
			*uParam11 = { -1224.59f, -912.13f, 14.93f };
			*uParam12 = 1.72f;
			*uParam13 = { -1220.512f, -909.343f, 11.331f };
			*uParam14 = { -1221.766f, -907.785f, 15.331f };
			*uParam15 = 4.5f;
			*uParam16 = { -1222.687f, -907.0001f, 12.22635f };
			*uParam17 = 1.15f;
			break;
		
		case 8:
			*uParam1 = { 1141f, -980.98f, 45.42f };
			*uParam2 = { 1132.3f, -982.16f, 48.99f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1124.73f, -983.22f, 44.57f };
			*uParam8 = { 1131.81f, -982.24f, 48.99f };
			*uParam9 = 7.5f;
			*uParam10 = { 1132.21f, -980.35f, 45.42f };
			*uParam11 = { 1131.91f, -978.44f, 49.02f };
			*uParam12 = 1.72f;
			*uParam13 = { 1132.764f, -983.742f, 45.42f };
			*uParam14 = { 1134.692f, -983.21f, 49.42f };
			*uParam15 = 4.5f;
			*uParam16 = { 1135.651f, -982.4113f, 46.31583f };
			*uParam17 = 1.05f;
			break;
		
		case 9:
			*uParam1 = { -1490.78f, -383.33f, 39.16f };
			*uParam2 = { -1484.56f, -377.1f, 42.74f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1479.17f, -371.69f, 38.33f };
			*uParam8 = { -1484.2f, -376.75f, 42.73f };
			*uParam9 = 7.5f;
			*uParam10 = { -1483.39f, -378.48f, 39.17f };
			*uParam11 = { -1482.01f, -379.86f, 42.77f };
			*uParam12 = 1.72f;
			*uParam13 = { -1485.5f, -376.545f, 39.167f };
			*uParam14 = { -1486.889f, -377.985f, 43.167f };
			*uParam15 = 4.5f;
			*uParam16 = { -1487.306f, -378.922f, 39.81341f };
			*uParam17 = 1.05f;
			break;
		
		case 10:
			*uParam1 = { -3240.12f, 1004.46f, 11.84f };
			*uParam2 = { -3247.19f, 1005.06f, 15.36f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3249.75f, 999.74f, 11.83f };
			*uParam8 = { -3249.05f, 1007.41f, 15.2f };
			*uParam9 = 3.66f;
			*uParam10 = { -3247.71f, 1000.33f, 11.83f };
			*uParam11 = { -3247.59f, 1001.62f, 14.13f };
			*uParam12 = 0.75f;
			*uParam13 = { -3242.573f, 999.168f, 11.835f };
			*uParam14 = { -3242.482f, 1000.365f, 15.835f };
			*uParam15 = 4.2f;
			*uParam16 = { -3241.872f, 1006.54f, 12.73071f };
			*uParam17 = 1f;
			break;
		
		case 11:
			*uParam1 = { -3038.7f, 589.51f, 6.92f };
			*uParam2 = { -3045.47f, 587.31f, 10.45f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3045.77f, 581.47f, 6.91f };
			*uParam8 = { -3048.23f, 589.1f, 10.43f };
			*uParam9 = 3.66f;
			*uParam10 = { -3044.12f, 582.75f, 6.9f };
			*uParam11 = { -3044.51f, 583.99f, 9.21f };
			*uParam12 = 0.75f;
			*uParam13 = { -3039.04f, 583.639f, 6.914f };
			*uParam14 = { -3039.453f, 584.766f, 10.914f };
			*uParam15 = 4.2f;
			*uParam16 = { -3041.18f, 590.7718f, 7.808933f };
			*uParam17 = 1f;
			break;
		
		case 12:
			*uParam1 = { 544.21f, 2672.5f, 41.16f };
			*uParam2 = { 545.16f, 2665.44f, 44.68f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 550.96f, 2664.13f, 41.16f };
			*uParam8 = { 542.86f, 2663.05f, 44.69f };
			*uParam9 = 3.66f;
			*uParam10 = { 549.89f, 2665.96f, 41.17f };
			*uParam11 = { 548.61f, 2665.78f, 43.46f };
			*uParam12 = 0.75f;
			*uParam13 = { 549.913f, 2671.202f, 41.161f };
			*uParam14 = { 548.726f, 2671.024f, 45.161f };
			*uParam15 = 4.2f;
			*uParam16 = { 542.5831f, 2670.376f, 42.05651f };
			*uParam17 = 1f;
			break;
		
		case 13:
			*uParam1 = { 2559.12f, 385.39f, 107.62f };
			*uParam2 = { 2552.06f, 385.68f, 111.17f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam10 = { 2551.76f, 380.95f, 107.65f };
			*uParam11 = { 2551.82f, 382.21f, 109.92f };
			*uParam12 = 0.75f;
			*uParam13 = { 2556.854f, 379.973f, 107.627f };
			*uParam14 = { 2556.845f, 381.173f, 111.627f };
			*uParam15 = 4.2f;
			*uParam16 = { 2557.248f, 387.3177f, 108.523f };
			*uParam17 = 1f;
			break;
		
		case 14:
			*uParam1 = { 2681.84f, 3282.62f, 54.24f };
			*uParam2 = { 2675.63f, 3286.07f, 57.79f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 2671.06f, 3282.22f, 54.48f };
			*uParam8 = { 2675.1f, 3289.37f, 57.77f };
			*uParam9 = 3.66f;
			*uParam10 = { 2673.23f, 3281.96f, 54.25f };
			*uParam11 = { 2673.85f, 3283.09f, 56.53f };
			*uParam12 = 0.75f;
			*uParam13 = { 2677.411f, 3278.796f, 54.246f };
			*uParam14 = { 2677.978f, 3279.854f, 58.246f };
			*uParam15 = 4.2f;
			*uParam16 = { 2680.964f, 3285.271f, 55.14115f };
			*uParam17 = 1f;
			break;
		
		case 15:
			*uParam1 = { 1731.25f, 6411.58f, 34.04f };
			*uParam2 = { 1734.35f, 6417.97f, 37.58f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1730.29f, 6422.24f, 34.23f };
			*uParam8 = { 1737.68f, 6418.66f, 37.59f };
			*uParam9 = 3.66f;
			*uParam10 = { 1730.17f, 6420.17f, 34.04f };
			*uParam11 = { 1731.33f, 6419.58f, 36.34f };
			*uParam12 = 0.75f;
			*uParam13 = { 1727.219f, 6415.816f, 34.042f };
			*uParam14 = { 1728.296f, 6415.289f, 38.042f };
			*uParam15 = 4.2f;
			*uParam16 = { 1733.865f, 6412.566f, 34.93724f };
			*uParam17 = 1f;
			break;
		
		case 16:
			*uParam1 = { 1964.96f, 3740.86f, 31.38f };
			*uParam2 = { 1961.43f, 3746.95f, 34.89f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1955.68f, 3746.02f, 31.4f };
			*uParam8 = { 1962.38f, 3749.91f, 34.72f };
			*uParam9 = 3.66f;
			*uParam10 = { 1957.3f, 3744.68f, 31.35f };
			*uParam11 = { 1958.38f, 3745.33f, 33.63f };
			*uParam12 = 0.75f;
			*uParam13 = { 1959.255f, 3739.774f, 31.349f };
			*uParam14 = { 1960.274f, 3740.408f, 35.349f };
			*uParam15 = 4.2f;
			*uParam16 = { 1965.634f, 3743.55f, 32.24376f };
			*uParam17 = 1f;
			break;
		
		case 17:
			*uParam1 = { 34.84f, -1345.6f, 27f };
			*uParam2 = { 23.34f, -1345.56f, 32f };
			*uParam3 = 7.2f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 27.44f, -1341.815f, 27.01f };
			*uParam8 = { 27.46f, -1337.815f, 32.01f };
			*uParam9 = 9f;
			*uParam10 = { 24.05f, -1341.89f, 27f };
			*uParam11 = { 26.05f, -1341.87f, 32f };
			*uParam12 = 1f;
			*uParam13 = { 23.566f, -1346.956f, 27f };
			*uParam14 = { 25.065f, -1346.901f, 32f };
			*uParam15 = 4f;
			*uParam16 = { 30.97348f, -1347.115f, 29.39393f };
			*uParam17 = 1f;
			break;
		
		case 18:
			*uParam1 = { 376.65f, 323.6f, 102.57f };
			*uParam2 = { 378.35f, 330.47f, 106.12f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 373.45f, 333.81f, 102.58f };
			*uParam8 = { 381.42f, 331.81f, 106.11f };
			*uParam9 = 3.66f;
			*uParam10 = { 373.79f, 331.72f, 102.58f };
			*uParam11 = { 375.03f, 331.41f, 104.86f };
			*uParam12 = 0.75f;
			*uParam13 = { 371.789f, 326.823f, 102.571f };
			*uParam14 = { 372.957f, 326.548f, 106.571f };
			*uParam15 = 4.2f;
			*uParam16 = { 378.9936f, 325.0343f, 103.4664f };
			*uParam17 = 1f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_291()
{
	func_294();
	func_293();
	func_292();
}

void func_292()
{
	int iVar0;
	
	if (iLocal_569 >= 9)
	{
		if (Global_97173.f_18256.f_41 > 3)
		{
			if (iLocal_569 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = unk_0xD53343AA4FB7DD28(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_67.f_464 = 1;
				Global_97173.f_18256.f_41 = 0;
			}
			else
			{
				Local_67.f_464 = 0;
				Global_97173.f_18256.f_41++;
			}
		}
		else
		{
			Global_97173.f_18256.f_41++;
		}
	}
	else
	{
		Global_97173.f_18256.f_41++;
	}
}

void func_293()
{
	int iVar0;
	
	if (iLocal_569 >= 3)
	{
		if (iLocal_569 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0xD53343AA4FB7DD28(0, 10);
		}
		if (iVar0 < 1)
		{
			Local_67.f_2.f_12 = 1;
		}
		else
		{
			Local_67.f_2.f_12 = 0;
		}
	}
}

void func_294()
{
	int iVar0;
	
	if (iLocal_569 >= 6)
	{
		if (iLocal_569 == 6)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0xD53343AA4FB7DD28(0, 7);
		}
		if (iVar0 < 1)
		{
			iLocal_59 = 2;
		}
		else
		{
			iLocal_59 = 1;
		}
	}
}

int func_295()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = (iVar0 + Global_97173.f_18256[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_296(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	*iParam2 = 0;
	fVar0 = unk_0xB7A628320EFF8E47(func_278(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= (19 - 1))
	{
		fVar2 = unk_0xB7A628320EFF8E47(*uParam0, func_278(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { func_278(*iParam2) };
}

void func_297(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

bool func_298(int iParam0)
{
	return Global_34909 == iParam0;
}

int func_299(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_300(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_300(int iParam0)
{
	return func_301(iParam0, Global_34909);
}

int func_301(int iParam0, int iParam1)
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

void func_302()
{
	if (((iLocal_64 == 1 || iLocal_64 == 2) || iLocal_623 == 7) || (unk_0x5F9532F3B5CC2551(Local_67.f_2) && iLocal_66 == 1))
	{
		if (iLocal_64 == 1)
		{
		}
		if (iLocal_64 == 2)
		{
		}
		if (iLocal_623 == 7)
		{
		}
		if (unk_0x5F9532F3B5CC2551(Local_67.f_2) && iLocal_66 == 1)
		{
		}
		Global_97173.f_18256.f_21[iLocal_567] = unk_0x25223CA6B4D20B7F();
		Global_97173.f_18256.f_42[iLocal_567] = unk_0x3D10BC92A4DB1D35();
	}
	if ((unk_0x1077788E268557C2() && func_314()) && Local_67.f_468)
	{
		func_309(&iLocal_567, &iLocal_574, &iLocal_568);
	}
	func_308();
	iLocal_574 = 0;
	iLocal_578 = 0;
	iLocal_579 = 0;
	iLocal_580 = 0;
	if (!bLocal_573)
	{
		unk_0xAA5F02DB48D704B9(5);
	}
	unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), false);
	unk_0x31D16B74C6E29D66(iLocal_566, false);
	func_28("SHR_HOLDUP_1", 1);
	func_28("SHR_SNK_TUT", 1);
	if ((func_27("SHR_MENU") || func_27("SHR_HOLDUP_1")) || func_27("SHR_SNK_TUT"))
	{
		unk_0x8DFCED7A656F8802(true);
	}
	if (func_1(Local_67.f_470, 1024))
	{
		if ((unk_0x7239B21A38F536BA(iLocal_617[0]) && unk_0x7239B21A38F536BA(iLocal_617[1])) && unk_0x7239B21A38F536BA(iLocal_617[2]))
		{
			unk_0x539E0AE3E6634B9F(&(iLocal_617[0]));
			unk_0x539E0AE3E6634B9F(&(iLocal_617[1]));
			unk_0x539E0AE3E6634B9F(&(iLocal_617[2]));
		}
	}
	if (iLocal_622 == 2)
	{
		unk_0xF66A602F829E2A06(Local_67.f_486.f_1);
	}
	func_303(&Local_583, 0);
	unk_0x1090044AD1DA76FA();
}

void func_303(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_305(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_304(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_304(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_305(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xA921AA820C25702F((*uParam0)[iVar0 /*2*/], 30))
		{
			func_306(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_306(var uParam0)
{
	func_307(*uParam0, "NULL", uParam0->f_1);
}

void func_307(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xA921AA820C25702F(iParam0, 30))
	{
		switch (func_252(iParam0))
		{
			case 0:
				unk_0xE532F5D78798DAAB(iParam2);
				break;
			
			case 1:
				unk_0xF66A602F829E2A06(sParam1);
				break;
			
			case 2:
				unk_0x01F73A131C18CD94(sParam1);
				break;
			
			case 3:
				unk_0xBE2CACCF5A8AA805(sParam1);
				break;
			
			case 4:
				unk_0xF1160ACCF98A3FC8(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xFF1B8B4AA1C25DC8(sParam1);
				break;
			
			case 6:
				unk_0x7A2D8AD0A9EB9C3F();
				break;
			
			case 7:
				unk_0xC5BC038960E9DB27(iParam2);
				break;
			
			case 8:
				unk_0x2A179DF17CCF04CD(iParam2, unk_0xA921AA820C25702F(iParam0, 26));
				break;
			
			case 9:
				unk_0x88C6814073DD4A73();
				break;
			
			default:
				break;
		}
	}
}

void func_308()
{
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_2))
	{
		unk_0xE1EF3C1216AFF2CD(Local_67.f_2);
	}
	if (unk_0x7239B21A38F536BA(Local_67.f_2))
	{
		func_202();
		unk_0x2595DD4236549CE3(&(Local_67.f_2));
	}
	if (unk_0x7239B21A38F536BA(Local_67.f_86))
	{
		unk_0x2595DD4236549CE3(&(Local_67.f_86));
	}
	if (!unk_0x5F9532F3B5CC2551(Local_67.f_28))
	{
		if (iLocal_54 >= 4)
		{
			unk_0x43D3807C077261E3(Local_67.f_28, -8f, true);
			unk_0xC5F68BE9613E2D18(Local_67.f_28, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, false, false, true);
		}
	}
	if (unk_0x7239B21A38F536BA(Local_67.f_28))
	{
		unk_0x3AE22DEB5BA5A3E6(&(Local_67.f_28));
	}
	if (unk_0x7239B21A38F536BA(Local_67.f_96.f_1))
	{
		unk_0x539E0AE3E6634B9F(&(Local_67.f_96.f_1));
		unk_0xD9E3006FB3CBD765(Local_67.f_486.f_6, 0.5f, joaat("prop_till_01"), false);
		unk_0xD9E3006FB3CBD765(Local_67.f_486.f_6, 0.5f, joaat("prop_till_02"), false);
		unk_0xD9E3006FB3CBD765(Local_67.f_486.f_6, 0.5f, joaat("prop_till_03"), false);
	}
	if (unk_0xAFC1CA75AD4074D1(Local_67.f_28.f_1))
	{
		unk_0x3288D8ACAECD2AB2(Local_67.f_28.f_1);
	}
	if (func_14(&(Local_67.f_477)))
	{
		func_39(&(Local_67.f_477));
	}
	if (Local_67.f_466)
	{
		if (!bLocal_573)
		{
			unk_0xF66A602F829E2A06(Local_67.f_2.f_15);
		}
		Local_67.f_466 = 0;
	}
}

void func_309(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<6> Var1[3];
	struct<8> Var20[2];
	
	iVar0 = func_313(*uParam1, 1, 0);
	StringCopy(&(Var20[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var20[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	MemCopy(&(Var1[1 /*6*/]), {func_312(iParam0)}, 6);
	if (func_310(276, &Var1, &Var20, 2, -1, 0, 0))
	{
		unk_0x0BCA1D2C47B0D269(131, *uParam2, unk_0xBBDA792448DB5A89(*uParam2));
		unk_0x0BCA1D2C47B0D269(114, iVar0, unk_0xBBDA792448DB5A89(iVar0));
	}
}

int func_310(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x1077788E268557C2())
	{
	}
	if ((!unk_0x655B91F1495A9090() && (unk_0x25CB5A9F37BFD063() || !unk_0x1353F87E89946207())) && unk_0x422D396F80A96547())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x579CCED0265D4896())
			{
				Var69 = { func_311(unk_0x4F8644AF03D0E0D6()) };
				if (unk_0xB124B57F571D8F18(&Var69))
				{
					if (unk_0xEEE6EACBE8874FBA(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x10FAB35428CCC9D7() && Global_2434309.f_3)
			{
				unk_0xC980E62E33DF1D5C(&Var0, &(Global_1681227.f_10));
			}
			else
			{
				unk_0xAE2206545888AE49(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x655B91F1495A9090())
	{
	}
	if (!unk_0x25CB5A9F37BFD063())
	{
	}
	if (unk_0x1353F87E89946207())
	{
	}
	if (!unk_0x422D396F80A96547())
	{
	}
	return 0;
}

struct<13> func_311(int iParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(iParam0, &Var0, 13);
	return Var0;
}

struct<8> func_312(var uParam0)
{
	struct<8> Var0;
	
	switch (*uParam0)
	{
		case -2:
		case -1:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			StringCopy(&Var0, "SHR_GAS", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "SHR_LIQ1", 32);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			StringCopy(&Var0, "SHR_LIQ2", 32);
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			StringCopy(&Var0, "SHR_CONV", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

int func_313(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_314()
{
	if (func_316() && func_315(0))
	{
		return 1;
	}
	return 0;
}

var func_315(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_316()
{
	return func_315(func_120() + 1);
}

