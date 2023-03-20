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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
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
	int iLocal_67 = 0;
	struct<487> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	bool bLocal_574 = 0;
	int iLocal_575 = 0;
	bool bLocal_576 = 0;
	int iLocal_577 = 0;
	char* sLocal_578 = NULL;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	bool bLocal_582 = 0;
	int iLocal_583 = 0;
	struct<33> Local_584 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_617 = 1;
	var uLocal_618[3] = { 0, 0, 0 };
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	var uLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	int iLocal_642 = 0;
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_49 = { 500f, 500f, 500f };
	iLocal_630 = 3;
	if (unk_0x89522B8E487D4EF9(98))
	{
		func_306();
	}
	if (func_303(0))
	{
		bLocal_574 = true;
		iLocal_571 = unk_0xF3F3D9078A6EAC3E();
	}
	if (Global_3)
	{
		unk_0x1D208E4A4E1D4FFE(1);
		unk_0x52F20802944F8DCE();
	}
	if (func_302(14))
	{
		unk_0x1D208E4A4E1D4FFE(1);
		unk_0x52F20802944F8DCE();
	}
	func_301(&Local_584, 3);
	func_292(&uScriptParam_0);
	Var0 = { 24.088f, -1345.623f, 29.5082f };
	Var3 = { 24.94562f, -1344.954f, 29.49f };
	Var6 = { Var0 - Var3 };
	Var6 = { Var3 - Var0 };
	fVar12 = 147.297f;
	Var9 = { -1228.443f, -905.3416f, 13.523f };
	Var6 = { Var9 - Vector(12.31f, -907.8234f, -1222.331f) };
	Var6 = { func_291(Var6, fVar12) };
	if ((((func_290() && !func_289()) || Global_99099) || Global_25036) || Global_99144 != -1)
	{
		if (func_290() && !func_289())
		{
		}
		else if (Global_99099)
		{
		}
		else if (Global_25036)
		{
		}
		else if (Global_99144 != -1)
		{
		}
		if (!func_288())
		{
			func_286(&(Local_68.f_470), 64);
			func_284(1);
		}
		else
		{
			func_284(0);
		}
		func_306();
	}
	else if (Global_99155.f_18649[iLocal_568] > 0)
	{
		if (func_283())
		{
			func_281(iLocal_568, Local_68.f_486.f_9.f_2, &Var13, &Var16);
			unk_0xB0A7E0A62FB61A06(Local_68.f_181, 15f, 0);
			uLocal_567 = unk_0x8668A841B325FF16(Var13, Var16, 0, 1, 1, 1);
			if (!func_288())
			{
				func_284(1);
			}
			else
			{
				func_284(0);
				func_279(&(Local_68.f_470), 512);
			}
			iLocal_67 = 2;
		}
		else
		{
			func_284(0);
		}
		if (!func_278())
		{
			iLocal_64 = 10;
			iVar19 = unk_0x0ADD324BC46177EF(0, 3);
			if (iVar19 == 0)
			{
				Local_68.f_2.f_12 = 1;
			}
			else
			{
				Local_68.f_2.f_12 = 0;
			}
		}
	}
	else
	{
		func_284(0);
	}
	while (true)
	{
		func_275(&Local_584);
		if (func_270())
		{
			func_306();
		}
		if (!bLocal_574)
		{
			if (func_303(0))
			{
				func_269();
				bLocal_574 = true;
			}
		}
		switch (iLocal_67)
		{
			case 0:
				func_240();
				break;
			
			case 1:
				func_5();
				break;
			
			case 2:
				if (func_288())
				{
					if (!unk_0x23741E39BEA32E66())
					{
						if (!func_3("SHOP_CLOSED", func_4(iLocal_568)))
						{
							unk_0x43BCF79209E64C09(0);
							func_2("SHOP_CLOSED", func_4(iLocal_568));
						}
					}
				}
				else
				{
					if (func_3("SHOP_CLOSED", func_4(iLocal_568)))
					{
						unk_0x1D208E4A4E1D4FFE(1);
					}
					if (func_1(Local_68.f_470, 512))
					{
						func_284(1);
						func_286(&(Local_68.f_470), 512);
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
	unk_0xCAFBB15049416379(sParam0);
	unk_0x9359E7CC54335EB9(sParam1);
	unk_0x7CBFB87C647743C3(0, 1, 1, -1);
}

int func_3(char* sParam0, char* sParam1)
{
	unk_0xAA8D087D7A86072A(sParam0);
	unk_0x9359E7CC54335EB9(sParam1);
	return unk_0x360D41DC76A83E6A(0);
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
	
	func_237();
	func_234();
	func_229();
	func_223();
	func_205();
	func_183();
	func_177();
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
	if (unk_0xD51CFE69539DB6D8(Local_68.f_0))
	{
		unk_0x5E99B63A819500A5(Local_68.f_0, &iVar0, 1);
	}
	else
	{
		return;
	}
	bLocal_576 = false;
	if (!unk_0xAF437D7C802AB246(Local_68.f_2) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1))
		{
			if ((iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare"))
			{
				if ((((unk_0x3EB3CC572EB40155(unk_0x3F80C6638E3A1A90()) && unk_0xFA68268DB708808B(unk_0xE7869D5D7816A9B6(), Local_68.f_2, 45f)) && unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), Local_68.f_2, 5f, 5f, 2f, 0, 1, 0)) || unk_0xBC273BCD46110BE6(unk_0x3F80C6638E3A1A90(), Local_68.f_2)) || unk_0x386C3192F791D414(unk_0x3F80C6638E3A1A90(), Local_68.f_2))
				{
					if (!func_25() && !unk_0x96EB9D652C716259())
					{
						bLocal_576 = true;
					}
				}
			}
		}
	}
	if (bLocal_576)
	{
		if (!iLocal_577 && func_1(Local_68.f_470, 4))
		{
			iVar2 = func_24(unk_0xE7869D5D7816A9B6());
			iVar3 = unk_0xE98DA6AE7735AF9D(iVar2);
			if (iVar3 == joaat("GROUP_PISTOL"))
			{
				sLocal_578 = "hold_up_head_additive_pistol";
				unk_0xDCF460AE46C9489C(unk_0xE7869D5D7816A9B6(), "mp_am_hold_up", sLocal_578, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else if ((((iVar3 == joaat("GROUP_MG") || iVar3 == joaat("GROUP_RIFLE")) || iVar3 == joaat("GROUP_SHOTGUN")) || iVar3 == joaat("GROUP_SNIPER")) || iVar3 == joaat("GROUP_SMG"))
			{
				sLocal_578 = "hold_up_head_additive_rifle";
				unk_0xDCF460AE46C9489C(unk_0xE7869D5D7816A9B6(), "mp_am_hold_up", sLocal_578, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else
			{
				sLocal_578 = "";
			}
			iLocal_577 = 1;
		}
	}
	else if (iLocal_577)
	{
		if (!unk_0xF6917DE0E003509D(sLocal_578))
		{
			if (unk_0x23417CDB252083F9(unk_0xE7869D5D7816A9B6(), "mp_am_hold_up", sLocal_578, 3))
			{
				unk_0x91BC1C1D86377CB9(unk_0xE7869D5D7816A9B6(), "mp_am_hold_up", sLocal_578, -1056964608);
			}
		}
		iLocal_577 = 0;
	}
	switch (iLocal_64)
	{
		case 0:
			if (func_288())
			{
				if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
				{
					iLocal_64 = 12;
				}
				else
				{
					iLocal_52 = 2;
					iLocal_59 = 1;
					if (!unk_0x76B2D234F1895632(Local_68.f_0))
					{
						if (!unk_0x51374A0BB2871E6E(Local_68.f_0, 0))
						{
							if ((func_24(Local_68.f_0) == joaat("weapon_unarmed") || func_24(Local_68.f_0) == joaat("object")) || func_24(Local_68.f_0) == joaat("weapon_briefcase"))
							{
								iLocal_62 = 1;
								iLocal_64 = 1;
							}
							else if (!func_1(Local_68.f_470, 1))
							{
								if (iVar0 == joaat("weapon_bat"))
								{
									iLocal_62 = 2;
									iLocal_64 = 5;
								}
								else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
								{
									iLocal_62 = 3;
									iLocal_64 = 5;
								}
								else if (iVar0 == joaat("weapon_stickybomb"))
								{
									iLocal_62 = 4;
									iLocal_64 = 5;
								}
								else
								{
									iLocal_64 = 2;
								}
								func_279(&(Local_68.f_470), 1);
							}
						}
						else
						{
							iLocal_64 = 3;
						}
					}
				}
			}
			else if (func_23())
			{
				iLocal_52 = 2;
				iLocal_64 = 3;
			}
			else if (!func_288() && func_20(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1))
			{
				iLocal_64 = 12;
			}
			break;
		
		case 1:
			if (!func_1(Local_68.f_470, 2))
			{
				iLocal_53 = 1;
				iLocal_58 = 1;
				func_279(&(Local_68.f_470), 2);
			}
			iLocal_64 = 5;
			break;
		
		case 2:
			iLocal_53 = 5;
			iLocal_58 = 3;
			iLocal_64 = 5;
			break;
		
		case 3:
			iLocal_53 = 6;
			iLocal_58 = 4;
			iLocal_64 = 5;
			break;
		
		case 5:
			if (!func_288() && !func_1(Local_68.f_470, 1))
			{
				iLocal_64 = 0;
			}
			break;
		
		case 6:
			if (iLocal_53 >= 13)
			{
				if (Local_68.f_2.f_12)
				{
					if (!func_19())
					{
						iLocal_64 = 7;
					}
				}
				else
				{
					iLocal_64 = 8;
				}
				iLocal_54 = 1;
			}
			break;
		
		case 7:
			if (func_1(Local_68.f_470, 256))
			{
				func_18();
				unk_0x73817D396768E4C6(&Global_87209, 3);
				iLocal_64 = 13;
			}
			break;
		
		case 8:
			if (func_1(Local_68.f_470, 16))
			{
				if (func_16())
				{
					if (!unk_0x76B2D234F1895632(Local_68.f_2))
					{
						if (!unk_0x8E2CF6ACCED3BD0F(Local_68.f_2))
						{
							if (func_288())
							{
								if (Local_68.f_486 >= 0)
								{
									if (unk_0x47B2F09FC779F5CD(Local_68.f_486))
									{
										unk_0xDCF460AE46C9489C(Local_68.f_2, Local_68.f_486.f_1, "handsup_base", 4f, -8f, -1, 1, 0, 0, 0, 0);
										iLocal_60 = 10;
									}
								}
							}
							else
							{
								unk_0x4B79E06845D63B96(Local_68.f_2, unk_0xE7869D5D7816A9B6(), 100f, -1, 0, 0);
								iLocal_60 = 10;
							}
						}
					}
					unk_0x73817D396768E4C6(&Global_87209, 3);
					iLocal_64 = 13;
				}
			}
			break;
		
		case 9:
			func_15(2, 0);
			iLocal_61 = 7;
			if (iLocal_65 == 1)
			{
				iLocal_64 = 8;
			}
			else
			{
				iLocal_64 = 13;
			}
			break;
		
		case 10:
			if (func_288())
			{
				iLocal_64 = 11;
			}
			break;
		
		case 11:
			if (!func_14(&(Local_68.f_477)))
			{
				if (!Local_68.f_2.f_12)
				{
					iLocal_53 = 28;
				}
				else
				{
					iLocal_53 = 29;
				}
				func_11(&(Local_68.f_477));
			}
			else if (func_8(&(Local_68.f_477)) > 5f)
			{
				func_15(1, 0);
				iLocal_64 = 13;
			}
			else if (func_8(&(Local_68.f_477)) > 1.5f)
			{
				if (!func_19())
				{
					if (iLocal_60 != 12)
					{
						iLocal_60 = 12;
						if (!Local_68.f_2.f_12)
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
			if (!func_14(&(Local_68.f_477)))
			{
				func_6();
				iLocal_53 = 30;
				iLocal_60 = 12;
				func_11(&(Local_68.f_477));
			}
			else if (func_8(&(Local_68.f_477)) > 3f)
			{
				iLocal_64 = 13;
			}
			break;
		
		case 13:
			break;
	}
}

void func_6()
{
	var uVar0;
	
	if (unk_0x76B2D234F1895632(Local_68.f_2))
	{
		return;
	}
	unk_0x94026C1D1DB14225(&uVar0);
	unk_0x33E113E52A91C5C3(0, Local_68.f_2.f_6, 2f, -1, 0.25f, 0, Local_68.f_2.f_9);
	unk_0xC2EA5B4B2052D2F1(0, -1);
	unk_0x911ECBCE73F8EC3F(uVar0);
	unk_0xC2C4A3A9FF2FBFFF(Local_68.f_2, uVar0);
	unk_0x33A90AD8FA327B72(&uVar0);
	func_279(&(Local_68.f_470), 128);
}

void func_7()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_2))
	{
		unk_0x33A90AD8FA327B72(&uLocal_566);
		unk_0x94026C1D1DB14225(&uLocal_566);
		unk_0xC2EA5B4B2052D2F1(0, 5000);
		unk_0x4B79E06845D63B96(0, unk_0xE7869D5D7816A9B6(), 100f, -1, 0, 0);
		unk_0x911ECBCE73F8EC3F(uLocal_566);
		unk_0xC2C4A3A9FF2FBFFF(Local_68.f_2, uLocal_566);
	}
}

float func_8(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_10(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_9(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_9(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
	}
	if (unk_0x00AAD79B42B3E036())
	{
		iVar0 = unk_0xC7F926248AF8587B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
}

bool func_10(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 2);
}

void func_11(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_12(uParam0);
	}
}

void func_12(var uParam0)
{
	func_13(uParam0, 0f);
}

void func_13(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_9(unk_0xB519E5386FBF69E5(*uParam0, 4)) - fParam1);
	unk_0x9956FB0E4B50ECB8(uParam0, 1);
	unk_0x73817D396768E4C6(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_14(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 1);
}

void func_15(int iParam0, bool bParam1)
{
	if (unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) < iParam0 && (!bLocal_574 || (bLocal_574 && iParam0 < iLocal_571)))
	{
		unk_0x1B1CE102A7E7999E(unk_0xBFAE5F9DEC53DAE2(), iParam0, 0);
		unk_0x6FF6F40CA433340F(unk_0xBFAE5F9DEC53DAE2(), 0);
		Local_68.f_158 = 1;
		if (bParam1)
		{
			unk_0x8C1CE4F676968E94(iParam0);
		}
		else
		{
			unk_0x8C1CE4F676968E94(5);
		}
	}
	else if (bLocal_574 && iParam0 > iLocal_571)
	{
	}
}

int func_16()
{
	func_17();
	switch (iLocal_56)
	{
		case 0:
			Local_68.f_486 = unk_0xB839A1C489B63ACC(Local_68.f_486.f_6, Local_68.f_486.f_9, 2);
			if (!unk_0x3816C3BD290334DC(Local_68.f_2, 1))
			{
				if (!unk_0x76B2D234F1895632(Local_68.f_28))
				{
					if (Local_68.f_486 >= 0)
					{
						unk_0x70EE8EFEE355AD29(Local_68.f_28, 1, 0);
						unk_0x504BE965986F581A(Local_68.f_28, 1);
						unk_0x360F0D01112F8AD0(Local_68.f_2, Local_68.f_486, Local_68.f_486.f_1, Local_68.f_486.f_3, 8f, -1.5f, 25, 0, 1148846080, 0);
						unk_0xDE77F887DBEE3953(Local_68.f_28, Local_68.f_486, Local_68.f_486.f_4, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
						unk_0xDE77F887DBEE3953(Local_68.f_96.f_1, Local_68.f_486, Local_68.f_486.f_5, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
					}
					else
					{
						return 1;
					}
					iLocal_57 = 1;
					iLocal_60 = 5;
					iLocal_56 = 2;
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
			if (Local_68.f_486 >= 0)
			{
				if (unk_0x47B2F09FC779F5CD(Local_68.f_486))
				{
					if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) > 0.478f)
					{
						if (!unk_0x76B2D234F1895632(Local_68.f_28))
						{
							unk_0xDE77F887DBEE3953(Local_68.f_28, Local_68.f_486, Local_68.f_486.f_4, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
							Local_68.f_28.f_7 = { Local_68.f_28.f_7, Local_68.f_28.f_7.f_1, (Local_68.f_28.f_7.f_2 + 0.2f) };
						}
						iLocal_56 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_68.f_486 >= 0)
			{
				if (unk_0x47B2F09FC779F5CD(Local_68.f_486))
				{
					if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) > 0.447f)
					{
						if (!unk_0x76B2D234F1895632(Local_68.f_28))
						{
							if (!unk_0xB756E8D139BDE124(Local_68.f_28))
							{
								unk_0x60365B5AF8BF1FFA(Local_68.f_28, 1, 0);
							}
						}
					}
					if (Local_68.f_467)
					{
						if (unk_0x2D428F1A10E85B0D(Local_68.f_486) != 1.45f)
						{
							unk_0xD21D1CDEFEAA7FA8(Local_68.f_486, 1.45f);
						}
					}
					if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) > 0.894f)
					{
						iLocal_56 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x76B2D234F1895632(Local_68.f_28))
			{
				if (Local_68.f_486 >= 0)
				{
					if (unk_0x47B2F09FC779F5CD(Local_68.f_486))
					{
						if (iLocal_55 >= 4)
						{
							if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) < 0.871f)
							{
								iLocal_57 = 4;
							}
							unk_0xB4E40069DFD4B86F(Local_68.f_28, -16f, 1);
							unk_0x100966E1EB5421AA(Local_68.f_28);
						}
					}
				}
			}
			iLocal_56 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_17()
{
	if (Local_68.f_486 >= 0)
	{
		if (unk_0x47B2F09FC779F5CD(Local_68.f_486))
		{
			if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) >= 0f)
			{
				if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) < 0.117f)
				{
					iLocal_55 = 1;
				}
				else if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) < 0.154f)
				{
					iLocal_55 = 2;
				}
				else if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) < 0.477f)
				{
					iLocal_55 = 3;
				}
				else if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) < 0.487f)
				{
					iLocal_55 = 4;
				}
				else if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) < 0.809f)
				{
					iLocal_55 = 5;
				}
				else if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) < 0.871f)
				{
					iLocal_55 = 6;
				}
				else if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) < 0.894f)
				{
					iLocal_55 = 7;
				}
				else if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) < 0.999f)
				{
					iLocal_55 = 8;
				}
				else if (iLocal_55 == 9)
				{
				}
			}
			else
			{
				iLocal_55 = 0;
			}
		}
		else if (iLocal_55 == 0)
		{
		}
	}
	else
	{
		iLocal_55 = 0;
	}
}

void func_18()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_2))
	{
		unk_0xCC897563F1971D6A(Local_68.f_2, joaat("weapon_pumpshotgun"), 12, 0, 1);
		unk_0x36EE5CBF45EC4826(Local_68.f_2, joaat("weapon_pumpshotgun"), 0);
		unk_0x690C5239500171FE(Local_68.f_2, -2065892691);
		unk_0x94026C1D1DB14225(&(Local_68.f_2.f_22));
		unk_0xA02736B50802C8BB(0, Local_68.f_0, 2000, 0);
		unk_0x56421AD67F716D1C(0, Local_68.f_0, 4000, joaat("FIRING_PATTERN_FULL_AUTO"));
		unk_0xE8EC59D96A176616(0, 25f, 0);
		unk_0x911ECBCE73F8EC3F(Local_68.f_2.f_22);
		unk_0xC2C4A3A9FF2FBFFF(Local_68.f_2, Local_68.f_2.f_22);
	}
}

int func_19()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
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
	if (!unk_0x76B2D234F1895632(uParam1))
	{
		Var0 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	if (unk_0x742CA22C114D89E4(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x8B527A53714D07F2(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x72957E5DA83E879F(uParam0, 2))
	{
		if (unk_0xD0C9DCB982CB2D78(uParam0))
		{
			if (unk_0x3761EA7F8628B81A(iParam1, unk_0x1141852D07400777(uParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0xFA68268DB708808B(unk_0x10E754B2E0DF2A70(iParam1), iParam0, 120f) && unk_0xF70F7CD913F23E2A(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x51374A0BB2871E6E(unk_0x10E754B2E0DF2A70(iParam1), 0))
			{
				iVar3 = unk_0xF0295FF51F2D7803(unk_0x10E754B2E0DF2A70(iParam1), 0);
			}
			if (unk_0xA7AC3687807201B4(iParam0) || func_21(iVar3))
			{
				if (unk_0x3761EA7F8628B81A(iParam1, unk_0x1141852D07400777(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0xFA68268DB708808B(unk_0x10E754B2E0DF2A70(iParam1), iParam0, 120f) && unk_0xF70F7CD913F23E2A(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xC77E15B3AC49D8CF((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (unk_0xC45A34912542C4EB(iParam0, 0))
		{
			if (unk_0xBD6B21D725712BDE(iParam0, -1) != 0)
			{
				if (unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_22(unk_0xE7869D5D7816A9B6(), iParam0, 1) < 40f)
						{
							if (unk_0xAA0DBF98A1199035(unk_0x3F80C6638E3A1A90(), &uVar1))
							{
								if ((unk_0x8C1ED5BB2888BA25(uVar1) && unk_0xE59FAD6B5E1AA42D(iVar1) == iParam0) || (unk_0x41B17741CACC905E(iVar1) && unk_0x10E754B2E0DF2A70(iVar1) == unk_0xBD6B21D725712BDE(iParam0, -1)))
								{
									if ((unk_0xD33337101FE7D2FE(unk_0xE7869D5D7816A9B6()) && unk_0x6BBF308E0A0F9AD4(0, 24)) || (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && unk_0x6BBF308E0A0F9AD4(0, 69)))
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

float func_22(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x76B2D234F1895632(uParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	if (!unk_0x76B2D234F1895632(uParam1))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Var3, iParam2);
}

int func_23()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x76B2D234F1895632(Local_68.f_0))
	{
		if (unk_0x51374A0BB2871E6E(Local_68.f_0, 0))
		{
			iVar1 = unk_0xF0295FF51F2D7803(Local_68.f_0, 0);
			bVar0 = true;
		}
		else if (!unk_0x76B2D234F1895632(unk_0xA0B1717D806F4901()))
		{
			iVar1 = unk_0xA0B1717D806F4901();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0x76B2D234F1895632(iVar1))
		{
			if (unk_0x22E902D6AF27E232(iVar1, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
			{
				return 1;
			}
			else if (unk_0x22E902D6AF27E232(iVar1, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
			{
				return 1;
			}
			else if (unk_0x22E902D6AF27E232(iVar1, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
			{
				return 1;
			}
			else if (Local_68.f_199 != -1f)
			{
				if (unk_0x22E902D6AF27E232(iVar1, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
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
	
	unk_0x5E99B63A819500A5(iParam0, &uVar0, 1);
	return uVar0;
}

int func_25()
{
	if (unk_0xFF6891E21E7FC193(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_26()
{
	switch (iLocal_52)
	{
		case 0:
			break;
		
		case 2:
			if (!func_49())
			{
				if (func_288())
				{
					if (!func_1(Global_99155.f_18649.f_20, 1))
					{
						switch (func_35("SHR_HOLDUP_1"))
						{
							case 2:
								func_33("SHR_HOLDUP_1", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_279(&(Global_99155.f_18649.f_20), 1);
								iLocal_52 = 1;
								break;
						}
						if (iLocal_65 > 0)
						{
							if (func_32("SHR_HOLDUP_1"))
							{
								func_28("SHR_HOLDUP_1", 1);
								iLocal_52 = 4;
							}
						}
						if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
						{
						}
					}
					else
					{
						iLocal_52 = 1;
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
				if (func_288())
				{
					if (!func_1(Global_99155.f_18649.f_20, 2))
					{
						switch (func_35("SHR_SNK_TUT"))
						{
							case 2:
								func_33("SHR_SNK_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_279(&(Global_99155.f_18649.f_20), 2);
								iLocal_52 = 4;
								break;
						}
					}
					else
					{
						iLocal_52 = 4;
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
				unk_0x1D208E4A4E1D4FFE(1);
			}
			if (func_32("SHR_SNK_TUT") && !func_1(Global_99155.f_18649.f_20, 2))
			{
				func_28("SHR_SNK_TUT", 1);
			}
			if (func_32("SHR_HOLDUP_1") && !func_1(Global_99155.f_18649.f_20, 1))
			{
				func_28("SHR_HOLDUP_1", 1);
			}
			iLocal_52 = 4;
			break;
		
		case 4:
			if ((!func_288() && func_32("SHR_HOLDUP_1")) && !func_1(Global_99155.f_18649.f_20, 1))
			{
				func_28("SHR_HOLDUP_1", 1);
				iLocal_52 = 2;
			}
			if ((!func_288() && func_32("SHR_SNK_TUT")) && !func_1(Global_99155.f_18649.f_20, 2))
			{
				func_28("SHR_SNK_TUT", 1);
				iLocal_52 = 2;
			}
			break;
	}
}

int func_27(char* sParam0)
{
	unk_0xAA8D087D7A86072A(sParam0);
	return unk_0x360D41DC76A83E6A(0);
}

void func_28(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_97797 && iParam1)
	{
		if (func_27(sParam0) && !unk_0xF55B59670A5B4482())
		{
			unk_0x1D208E4A4E1D4FFE(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0x04E7E853E31F41A3(sParam0, &(Global_99155.f_24859[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_99155.f_24859.f_145 - 2))
			{
				func_31(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_30((Global_99155.f_24859.f_145 - 1));
			Global_99155.f_24859.f_145 = (Global_99155.f_24859.f_145 - 1);
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
		Global_99155.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[0])
			{
				Global_99155.f_24859.f_146[0] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[1])
			{
				Global_99155.f_24859.f_146[1] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[2])
			{
				Global_99155.f_24859.f_146[2] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_30(int iParam0)
{
	StringCopy(&(Global_99155.f_24859[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_99155.f_24859[iParam0 /*16*/].f_4), "", 16);
	Global_99155.f_24859[iParam0 /*16*/].f_8 = 0;
	Global_99155.f_24859[iParam0 /*16*/].f_9 = 0;
	Global_99155.f_24859[iParam0 /*16*/].f_11 = 0;
	Global_99155.f_24859[iParam0 /*16*/].f_10 = -1;
	Global_99155.f_24859[iParam0 /*16*/].f_12 = 0;
	Global_99155.f_24859[iParam0 /*16*/].f_13 = 0;
	Global_99155.f_24859[iParam0 /*16*/].f_14 = 0;
	Global_99155.f_24859[iParam0 /*16*/].f_15 = 0;
}

void func_31(int iParam0, int iParam1)
{
	Global_99155.f_24859[iParam0 /*16*/] = { Global_99155.f_24859[iParam1 /*16*/] };
	Global_99155.f_24859[iParam0 /*16*/].f_4 = { Global_99155.f_24859[iParam1 /*16*/].f_4 };
	Global_99155.f_24859[iParam0 /*16*/].f_8 = Global_99155.f_24859[iParam1 /*16*/].f_8;
	Global_99155.f_24859[iParam0 /*16*/].f_10 = Global_99155.f_24859[iParam1 /*16*/].f_10;
	Global_99155.f_24859[iParam0 /*16*/].f_9 = Global_99155.f_24859[iParam1 /*16*/].f_9;
	Global_99155.f_24859[iParam0 /*16*/].f_11 = Global_99155.f_24859[iParam1 /*16*/].f_11;
	Global_99155.f_24859[iParam0 /*16*/].f_12 = Global_99155.f_24859[iParam1 /*16*/].f_12;
	Global_99155.f_24859[iParam0 /*16*/].f_13 = Global_99155.f_24859[iParam1 /*16*/].f_13;
	Global_99155.f_24859[iParam0 /*16*/].f_14 = Global_99155.f_24859[iParam1 /*16*/].f_14;
	Global_99155.f_24859[iParam0 /*16*/].f_15 = Global_99155.f_24859[iParam1 /*16*/].f_15;
}

int func_32(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0x04E7E853E31F41A3(sParam0, &(Global_99155.f_24859[iVar0 /*16*/])))
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
	
	if (unk_0x04E7E853E31F41A3(sParam0, ""))
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
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0x04E7E853E31F41A3(&(Global_99155.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99155.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_8 = (unk_0x9D40BBF80D8F5E8A() + iParam3);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = ((unk_0x9D40BBF80D8F5E8A() + iParam3) + iParam4);
		}
		else
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_99155.f_24859.f_145++;
		func_29();
	}
}

int func_35(char* sParam0)
{
	if (unk_0x04E7E853E31F41A3(sParam0, &Global_97800))
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
	if (func_288())
	{
		if (!unk_0x76B2D234F1895632(Local_68.f_0))
		{
		}
	}
	if (!unk_0x76B2D234F1895632(Local_68.f_2))
	{
	}
	switch (iLocal_53)
	{
		case 1:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_GREET", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 2:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, func_45(bLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 3:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, func_45(bLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 4:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, func_45(bLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 5:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, func_45(bLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 6:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, func_45(bLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 15:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 7:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 8:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 36:
			if (!func_19())
			{
				if (!unk_0x76B2D234F1895632(Local_68.f_2))
				{
					func_47(Local_68.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 9:
			if (!func_19())
			{
				if (!unk_0x76B2D234F1895632(Local_68.f_2))
				{
					func_47(Local_68.f_2, "BUMP", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 10:
			if (!func_19())
			{
				if (!unk_0x76B2D234F1895632(Local_68.f_2))
				{
					func_47(Local_68.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 11:
			if (!func_19())
			{
				if (!unk_0x76B2D234F1895632(Local_68.f_2))
				{
					func_47(Local_68.f_2, "SHOP_BRAVE", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 14:
			if (func_44() || func_43())
			{
				if (func_44())
				{
					if (!iLocal_579)
					{
						iLocal_53 = 7;
						iLocal_579 = 1;
					}
				}
				else if (func_43())
				{
					if (!iLocal_580)
					{
						iLocal_53 = 8;
						iLocal_580 = 1;
					}
				}
				if (!func_14(&(Local_68.f_483)))
				{
					func_11(&(Local_68.f_483));
				}
				else if (func_10(&(Local_68.f_483)))
				{
					func_42(&(Local_68.f_483));
				}
				else if (func_8(&(Local_68.f_483)) > 10f)
				{
					if (!func_1(Local_68.f_470, 32))
					{
						if (!unk_0xAF437D7C802AB246(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							unk_0xDCF460AE46C9489C(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_53 = 36;
						func_15(1, 0);
						func_279(&(Local_68.f_470), 32);
					}
				}
			}
			else if (func_14(&(Local_68.f_483)) && !func_10(&(Local_68.f_483)))
			{
				func_41(&(Local_68.f_483));
			}
			break;
		
		case 12:
			if (!unk_0x2AA9423D1F896887(unk_0xE7869D5D7816A9B6()))
			{
				if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
				{
					func_47(unk_0xE7869D5D7816A9B6(), "SHOP_HOLDUP", 8);
				}
				func_12(&(Local_68.f_471));
				if (Local_68.f_2.f_11)
				{
					iLocal_53 = 37;
				}
				else
				{
					iLocal_53 = 13;
				}
			}
			else
			{
				unk_0x6C192F2018742EC1(unk_0xE7869D5D7816A9B6());
			}
			break;
		
		case 13:
			if (func_40(&(Local_68.f_471)) > 3f)
			{
				if (Local_68.f_2.f_12)
				{
					iLocal_53 = 22;
				}
				else if (Local_68.f_458)
				{
					iLocal_53 = 17;
				}
				else if (Local_68.f_459)
				{
					iLocal_53 = 18;
				}
				else if (Local_68.f_460)
				{
					iLocal_53 = 19;
				}
				else if (Local_68.f_461)
				{
					iLocal_53 = 20;
				}
				else if (Local_68.f_462)
				{
					iLocal_53 = 21;
				}
				else
				{
					iLocal_53 = 16;
				}
				func_39(&(Local_68.f_471));
			}
			break;
		
		case 16:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 17:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 18:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 19:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 20:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 21:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 22:
			if (!unk_0x2AA9423D1F896887(unk_0xE7869D5D7816A9B6()))
			{
				if (!unk_0x76B2D234F1895632(Local_68.f_2))
				{
					func_47(Local_68.f_2, "SHOP_BRAVE", 8);
				}
				func_279(&(Local_68.f_470), 256);
				iLocal_53 = 37;
			}
			break;
		
		case 23:
			if (!unk_0x2AA9423D1F896887(unk_0xE7869D5D7816A9B6()))
			{
				if (Local_68.f_28.f_14)
				{
					if (!unk_0x76B2D234F1895632(Local_68.f_2))
					{
						func_47(Local_68.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_53 = 37;
			}
			else
			{
				unk_0x6C192F2018742EC1(unk_0xE7869D5D7816A9B6());
			}
			break;
		
		case 24:
			if (unk_0xC45A34912542C4EB(Local_68.f_46.f_4[0], 0))
			{
				unk_0x821446383BC10D9B(Local_68.f_46.f_4[0], 0);
			}
			if (!unk_0x76B2D234F1895632(Local_68.f_46[0]))
			{
				func_47(Local_68.f_46[0], "SURROUNDED", 15);
			}
			iLocal_53 = 25;
			break;
		
		case 25:
			if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
			{
				func_47(unk_0xE7869D5D7816A9B6(), "SPOT_POLICE", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 26:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 27:
			if (!func_19())
			{
				if (!unk_0x76B2D234F1895632(Local_68.f_2))
				{
					func_47(Local_68.f_2, "SCREAM_PANIC", 3);
				}
				iLocal_53 = 37;
			}
			else
			{
				func_37();
			}
			break;
		
		case 28:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_53 = 37;
			break;
		
		case 29:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_53 = 37;
			break;
		
		case 30:
			if (!unk_0x76B2D234F1895632(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_NO_COPS", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 31:
			if (!func_19())
			{
				iLocal_53 = 37;
			}
			break;
		
		case 33:
			if (!unk_0x2AA9423D1F896887(unk_0xE7869D5D7816A9B6()) && !unk_0x2AA9423D1F896887(Local_68.f_2))
			{
				if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
				{
					func_47(unk_0xE7869D5D7816A9B6(), "SHOP_HURRY", 11);
				}
				func_12(&(Local_68.f_471));
				iLocal_53 = 32;
			}
			break;
		
		case 32:
			if (func_40(&(Local_68.f_471)) > 1f)
			{
				if (!unk_0x76B2D234F1895632(Local_68.f_2))
				{
					func_47(Local_68.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 34:
			if (!func_19())
			{
				if (!unk_0x76B2D234F1895632(Local_68.f_2))
				{
					func_47(Local_68.f_2, "SHOP_SELL", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 35:
			if (!func_19())
			{
				if (!unk_0x76B2D234F1895632(Local_68.f_2))
				{
					func_47(Local_68.f_2, "SHOP_STEAL", 3);
				}
				iLocal_53 = 37;
			}
			break;
	}
}

void func_37()
{
	Global_14578 = 0;
	func_38();
}

void func_38()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
	}
}

void func_39(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
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
			return (func_9(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_41(var uParam0)
{
	if (func_14(uParam0))
	{
		if (!func_10(uParam0))
		{
			uParam0->f_2 = (func_9(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
			unk_0x9956FB0E4B50ECB8(uParam0, 2);
		}
	}
}

void func_42(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_10(uParam0))
		{
			uParam0->f_1 = (func_9(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_2);
			uParam0->f_2 = 0f;
			unk_0x73817D396768E4C6(uParam0, 2);
		}
	}
}

int func_43()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_0))
	{
		if (unk_0x22E902D6AF27E232(Local_68.f_0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_44()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_0))
	{
		if (unk_0x22E902D6AF27E232(Local_68.f_0, Local_68.f_214, Local_68.f_217, Local_68.f_220, 0, 1, 0))
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
	if (unk_0xB519E5386FBF69E5(unk_0x0ADD324BC46177EF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_47(int iParam0, char* sParam1, int iParam2)
{
	unk_0x489E3B00AFB0758C(iParam0, sParam1, func_48(iParam2), 1);
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
	return Global_17116;
}

void func_50()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_288() && iLocal_66 != 3)
	{
		iVar2 = 0;
		while (iVar2 < unk_0xE4E91039B15CA110(0))
		{
			iVar0 = unk_0xCEDD7FE4546BFC4F(0, iVar2);
			switch (iVar0)
			{
				case 140:
					unk_0x0586E3C97DD61FE4(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (unk_0x41B17741CACC905E(iVar1))
						{
							if (iVar1 != func_51(Local_68.f_2) && iVar1 != func_51(unk_0xE7869D5D7816A9B6()))
							{
								func_279(&(Local_68.f_470), 8);
							}
						}
						if (!unk_0x41B17741CACC905E(iVar1) && !unk_0x8C1ED5BB2888BA25(iVar1))
						{
							func_279(&(Local_68.f_470), 8);
						}
					}
					break;
				
				case 139:
					unk_0x0586E3C97DD61FE4(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (unk_0x41B17741CACC905E(iVar1))
						{
							if (iVar1 != func_51(Local_68.f_2) && iVar1 != func_51(unk_0xE7869D5D7816A9B6()))
							{
								func_279(&(Local_68.f_470), 8);
							}
						}
						if (!unk_0x41B17741CACC905E(iVar1) && !unk_0x8C1ED5BB2888BA25(iVar1))
						{
							func_279(&(Local_68.f_470), 8);
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
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		if (unk_0xB034B5B185BD9C69(iParam0) == Local_68.f_185)
		{
			return 1;
		}
		else if (unk_0x22E902D6AF27E232(iParam0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x22E902D6AF27E232(iParam0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x22E902D6AF27E232(iParam0, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (unk_0x22E902D6AF27E232(iParam0, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
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
	
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (func_288())
		{
			if (!unk_0xB519E5386FBF69E5(Local_68.f_162.f_18, 0))
			{
				iVar12 = 0;
				iVar13 = 0;
				iVar12 = unk_0x312FA2EB3948B47C(unk_0xE7869D5D7816A9B6(), &uVar1, -1);
				iVar0 = 0;
				while (iVar0 < Local_68.f_162)
				{
					Local_68.f_162[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar13 = 0;
				while (iVar13 < iVar12)
				{
					if (iVar0 < Local_68.f_162)
					{
						if ((unk_0xD51CFE69539DB6D8(uVar1[iVar13]) && !unk_0xAF437D7C802AB246(uVar1[iVar13])) && !unk_0x51374A0BB2871E6E(uVar1[iVar13], 0))
						{
							if (unk_0xCA9354733F0AE57E(uVar1[iVar13], unk_0xF6138D85451616EC(unk_0x3F80C6638E3A1A90())))
							{
								Local_68.f_162[iVar0] = uVar1[iVar13];
								Local_68.f_162.f_5[iVar0 /*3*/] = { unk_0x1141852D07400777(uVar1[iVar13], 1) };
								iVar0++;
							}
						}
					}
					iVar13++;
				}
				unk_0x9956FB0E4B50ECB8(&(Local_68.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_68.f_162)
			{
				if ((unk_0xD51CFE69539DB6D8(Local_68.f_162[iVar0]) && !unk_0xAF437D7C802AB246(Local_68.f_162[iVar0])) && !unk_0x51374A0BB2871E6E(Local_68.f_162[iVar0], 0))
				{
					if (unk_0xB519E5386FBF69E5(Local_68.f_162.f_18, 1))
					{
						if ((unk_0x9D40BBF80D8F5E8A() % 1500) < 50)
						{
						}
						unk_0x60365B5AF8BF1FFA(Local_68.f_162[iVar0], 0, 0);
						unk_0x70EE8EFEE355AD29(Local_68.f_162[iVar0], 0, 0);
						unk_0x2878EC06B3F897A0(Local_68.f_162[iVar0], 1);
						unk_0x9CA89729A675E8FF(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
					else if (!unk_0xB756E8D139BDE124(Local_68.f_162[iVar0]))
					{
						unk_0x60365B5AF8BF1FFA(Local_68.f_162[iVar0], 1, 0);
						unk_0x70EE8EFEE355AD29(Local_68.f_162[iVar0], 1, 0);
						unk_0x2878EC06B3F897A0(Local_68.f_162[iVar0], 0);
						unk_0x9CA89729A675E8FF(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (unk_0xB519E5386FBF69E5(Local_68.f_162.f_18, 0))
			{
				unk_0x73817D396768E4C6(&(Local_68.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_68.f_162)
			{
				if ((unk_0xD51CFE69539DB6D8(Local_68.f_162[iVar0]) && !unk_0xAF437D7C802AB246(Local_68.f_162[iVar0])) && !unk_0x51374A0BB2871E6E(Local_68.f_162[iVar0], 0))
				{
					if (!unk_0xB756E8D139BDE124(Local_68.f_162[iVar0]))
					{
						unk_0x60365B5AF8BF1FFA(Local_68.f_162[iVar0], 1, 0);
						unk_0x70EE8EFEE355AD29(Local_68.f_162[iVar0], 1, 0);
						unk_0x2878EC06B3F897A0(Local_68.f_162[iVar0], 0);
						unk_0x9CA89729A675E8FF(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_54()
{
	switch (iLocal_622)
	{
		case 0:
			if (func_288())
			{
				unk_0xE03E82B34235FC17(unk_0x3F80C6638E3A1A90());
				unk_0x2B0BB514F9140141("oddjobs@shop_robbery@rob_till");
				unk_0x2B0BB514F9140141("misscommon@response");
				unk_0xDF7D4AE1A984CEF7(func_63(iLocal_568), false);
				unk_0x801429C020C467BA(joaat("prop_choc_ego"));
				unk_0x801429C020C467BA(joaat("prop_choc_meto"));
				unk_0x801429C020C467BA(joaat("prop_choc_pq"));
				if (!bLocal_574)
				{
					unk_0x801429C020C467BA(Local_68.f_46.f_26);
					unk_0x801429C020C467BA(Local_68.f_46.f_27);
				}
				iLocal_622 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xDF83A33BF4D93E6F("SCRIPT\MARKET_CASH_REGISTER", false))
			{
				return;
			}
			if (!unk_0x2917D5E1CB5CE43A("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!unk_0x2917D5E1CB5CE43A("misscommon@response"))
			{
				return;
			}
			if (!unk_0x5053BF6D5604065B(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!unk_0x5053BF6D5604065B(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!unk_0x5053BF6D5604065B(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_574)
			{
				if (!unk_0x5053BF6D5604065B(Local_68.f_46.f_26))
				{
					return;
				}
				if (!unk_0x5053BF6D5604065B(Local_68.f_46.f_27))
				{
					return;
				}
			}
			if (!func_61("SNK_MNU", iLocal_568))
			{
				return;
			}
			if (!func_1(Local_68.f_470, 4))
			{
				if (!func_1(Local_68.f_470, 1024))
				{
					uLocal_618[0] = unk_0x8C15E6EC0BC9B4BE(func_60(0), func_59(0), 1, 1, 0);
					uLocal_618[1] = unk_0x8C15E6EC0BC9B4BE(func_60(1), func_59(1), 1, 1, 0);
					uLocal_618[2] = unk_0x8C15E6EC0BC9B4BE(func_60(2), func_59(2), 1, 1, 0);
					unk_0x60365B5AF8BF1FFA(uLocal_618[0], 0, 0);
					unk_0x60365B5AF8BF1FFA(uLocal_618[1], 0, 0);
					unk_0x60365B5AF8BF1FFA(uLocal_618[2], 0, 0);
					func_279(&(Local_68.f_470), 1024);
				}
				func_279(&(Local_68.f_470), 4);
				iLocal_622 = 2;
			}
			break;
		
		case 2:
			if (!func_288())
			{
				func_55();
				func_286(&(Local_68.f_470), 4);
				iLocal_622 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_68.f_470, 4))
			{
				func_55();
				func_286(&(Local_68.f_470), 4);
			}
			break;
	}
}

void func_55()
{
	unk_0x8B10CC9832827D27("oddjobs@shop_robbery@rob_till");
	unk_0x8B10CC9832827D27("misscommon@response");
	unk_0x9694B1DF874054DF("SCRIPT\MARKET_CASH_REGISTER");
	unk_0xA857A54226CCD303(func_63(iLocal_568));
	unk_0x839E9476E54502A2(joaat("prop_choc_ego"));
	unk_0x839E9476E54502A2(joaat("prop_choc_meto"));
	unk_0x839E9476E54502A2(joaat("prop_choc_pq"));
	func_56(1, iLocal_568);
	if (!bLocal_574)
	{
		unk_0x839E9476E54502A2(Local_68.f_46.f_26);
		unk_0x839E9476E54502A2(Local_68.f_46.f_27);
	}
}

void func_56(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17257.f_7776)
	{
		unk_0x4A819C86009EE6EC(15);
		Global_17257.f_7776 = 0;
	}
	unk_0x74C2382519DF9D92(0f);
	if (Global_17257.f_5421[iVar0])
	{
		unk_0x3A2938D665EA8A9E(9, false);
		Global_17257.f_5421[iVar0] = 0;
	}
	if (Global_17257.f_5414[iVar0])
	{
		unk_0xA857A54226CCD303("CommonMenu");
		Global_17257.f_5414[iVar0] = 0;
	}
	if (bParam0)
	{
		func_57(&(Global_17257.f_5453[iVar0 /*10*/]));
		Global_17257.f_5514[iVar0] = 0;
	}
	else
	{
		Global_17257.f_5514[iVar0] = 0;
	}
}

void func_57(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x4A4851D44CDF03C0(*uParam0))
		{
			unk_0x8A86A209B0F0AF7D(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
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
		if (unk_0x00AAD79B42B3E036() && unk_0x0D47370227E1A847())
		{
			iParam2 = unk_0x0F263434E43646BA();
		}
	}
	StringCopy(&cVar0, unk_0x959E7FA37C0D0892(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xC7C6DDDE84A8E734(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5514[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17257.f_5514[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5514[iVar18] = iVar16;
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
			return Local_68.f_486.f_6 - Vector(1f, 0f, 0.1f);
		
		case 1:
			return Local_68.f_486.f_6 - Vector(1f, 0f, 0f);
		
		case 2:
			return Local_68.f_486.f_6 - Vector(1f, 0f, -0.1f);
		
		default:
	}
	return Local_68.f_486.f_6 - Vector(1f, 0f, -0.1f);
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
	StringCopy(&(Global_17257.f_5428[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xF6917DE0E003509D(&(Global_17257.f_5428[iVar0 /*4*/])))
	{
		unk_0x36A3D6FBED10EF81(&(Global_17257.f_5428[iVar0 /*4*/]), 9);
		Global_17257.f_5421[iVar0] = 1;
		if (!unk_0xA73545B11DECBFE2(&(Global_17257.f_5428[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xDF7D4AE1A984CEF7("CommonMenu", false);
	Global_17257.f_5414[iVar0] = 1;
	if (!unk_0x0B4924B3F0DADDD1("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17257.f_5453[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_62(&(Global_17257.f_5453[iVar0 /*10*/]));
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
			if (!unk_0x4A4851D44CDF03C0(*uParam0))
			{
				*uParam0 = unk_0xE3C796DC28BC3254(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x4A4851D44CDF03C0(*uParam0))
					{
						uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x4A4851D44CDF03C0(*uParam0))
			{
				uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x4A4851D44CDF03C0(*uParam0))
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
	switch (iLocal_623)
	{
		case 0:
			if (func_288())
			{
				unk_0x2B0BB514F9140141(Local_68.f_486.f_1);
				iLocal_623 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x2917D5E1CB5CE43A(Local_68.f_486.f_1))
			{
				return;
			}
			if (!func_1(Local_68.f_470, 16))
			{
				func_279(&(Local_68.f_470), 16);
				iLocal_623 = 2;
			}
			break;
		
		case 2:
			if (!func_288() && iLocal_65 != 1)
			{
				unk_0x8B10CC9832827D27(Local_68.f_486.f_1);
				func_286(&(Local_68.f_470), 16);
				iLocal_623 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_68.f_470, 16))
			{
				unk_0x8B10CC9832827D27(Local_68.f_486.f_1);
				func_286(&(Local_68.f_470), 16);
			}
			break;
	}
}

void func_65()
{
	switch (iLocal_642)
	{
		case 0:
			if (Local_68.f_158)
			{
				iLocal_642 = 1;
			}
			break;
		
		case 1:
			if (func_288())
			{
				if (func_14(&(Local_68.f_158.f_1)))
				{
					func_39(&(Local_68.f_158.f_1));
				}
				if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
				{
				}
				if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
				{
					unk_0x92DFD59D631E4C0B(unk_0x3F80C6638E3A1A90());
				}
			}
			else
			{
				func_12(&(Local_68.f_158.f_1));
				iLocal_642 = 2;
			}
			break;
		
		case 2:
			if (func_288())
			{
				iLocal_642 = 1;
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
	
	func_176();
	if (((((iLocal_60 == 1 || iLocal_60 == 2) && unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) == 0) && !unk_0xAF437D7C802AB246(Local_68.f_0)) && !func_175(-1082130432)) && !unk_0xAF437D7C802AB246(Local_68.f_2))
	{
		iVar1 = unk_0x8219941CC4732B36(unk_0xE7869D5D7816A9B6());
		iVar2 = unk_0x7475BB2772D8CC88(unk_0xE7869D5D7816A9B6());
		if (((iLocal_66 != 2 && iLocal_66 != 3) && iLocal_66 != 4) && func_288())
		{
			if (!unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
			{
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
			}
		}
		iVar6 = 0;
		switch (iLocal_66)
		{
			case 0:
				if (func_1(Local_68.f_470, 4) && func_24(Local_68.f_0) == joaat("weapon_unarmed"))
				{
					if (func_174(iLocal_568, &(Local_68.f_486.f_6), Local_68.f_486.f_9.f_2, &(Local_68.f_102.f_26[0 /*3*/]), &(Local_68.f_102.f_26[1 /*3*/]), &(Local_68.f_102.f_33), &(Local_68.f_102.f_36)))
					{
						Var3 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
						if (unk_0xF18329472591CFE6(Var3, Local_68.f_102.f_33, 1) < 5f)
						{
							if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Local_68.f_102.f_26[0 /*3*/], Local_68.f_102.f_26[1 /*3*/], Local_68.f_102.f_36, 0, 1, 0))
							{
								if (unk_0x50D7BCB98D6E1BFA(unk_0xE7869D5D7816A9B6(), Local_68.f_102.f_33, 135f))
								{
									if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
									{
									}
									if (((!func_27("SHR_HOLDUP_1") && !func_27("SHR_MENU")) && !func_49()) && func_173())
									{
										func_172("SHR_MENU");
									}
									Local_68.f_469 = -1;
									func_171(&(Local_68.f_469), 4, "SHR_MENU", 0, 0, 0);
									unk_0x73817D396768E4C6(&(Local_68.f_162.f_18), 1);
									unk_0x73817D396768E4C6(&(Local_68.f_162.f_18), 0);
									iLocal_66 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!unk_0x50D7BCB98D6E1BFA(unk_0xE7869D5D7816A9B6(), Local_68.f_102.f_33, 135f) || !func_24(Local_68.f_0) == joaat("weapon_unarmed"))
				{
					if (func_27("SHR_MENU"))
					{
						unk_0x1D208E4A4E1D4FFE(1);
					}
					Local_68.f_102.f_22 = -1;
					func_170(&(Local_68.f_469));
					iLocal_66 = 0;
				}
				else if (((!func_27("SHR_MENU") && !func_27("SHR_HOLDUP_1")) && func_173()) && !func_169(Local_68.f_469, 0))
				{
					func_172("SHR_MENU");
				}
				if ((!unk_0x32CB82F773482629(unk_0xE7869D5D7816A9B6()) && !unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) && !unk_0xE9116ECE1C4C9B9D(unk_0xE7869D5D7816A9B6()))
				{
					if (func_167(Local_68.f_469, 1))
					{
						if (func_27("SHR_MENU"))
						{
							unk_0x1D208E4A4E1D4FFE(1);
						}
						unk_0x9956FB0E4B50ECB8(&(Local_68.f_162.f_18), 1);
						func_12(&(Local_68.f_102.f_53));
						func_170(&(Local_68.f_469));
						func_166(23, 1);
						if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !unk_0xAF437D7C802AB246(Local_68.f_2))
						{
							unk_0x58F62EDF6111D598(unk_0xE7869D5D7816A9B6(), Local_68.f_2, 0);
						}
						iLocal_66 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0xCF686B56FD5328B5(uLocal_641))
				{
					uLocal_641 = unk_0xF90D4D0A9F2F4A42(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				func_165(iLocal_568, Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, &(Local_68.f_102), &(Local_68.f_102.f_3), &uVar8);
				unk_0x34F8B34A8E9D3B57(uLocal_641, Local_68.f_102);
				unk_0x3B330DB318EF2761(uLocal_641, Local_68.f_102.f_3, 2);
				unk_0xD2E0A9EDD55F008D(uLocal_641, 35f);
				unk_0x657EEE601EEC4152(uLocal_641, "HAND_SHAKE", 0.1f);
				unk_0x63498CF6CF35C6A2(uLocal_641, 1);
				unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
				if (unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
				{
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
					func_279(&(Local_68.f_470), 2048);
				}
				Local_68.f_102.f_46 = func_63(iLocal_568);
				Local_68.f_102.f_23 = 0;
				Local_68.f_102.f_24 = 3;
				func_164(0);
				func_163(1, 1, 0, 0, 0);
				func_162(1, 2, 1, 1, 1);
				func_161(func_4(iLocal_568));
				func_159(1, Local_68.f_102.f_46, Local_68.f_102.f_46);
				func_158();
				func_155(0, "SNK_ITEM1", 0, 1, 0, 0);
				func_155(0, "ITEM_COST", 1, 1, 0, 0);
				func_151(func_154(0), 0);
				func_155(1, "SNK_ITEM2", 0, 1, 0, 0);
				func_155(1, "ITEM_COST", 1, 1, 0, 0);
				func_151(func_154(1), 0);
				func_155(2, "SNK_ITEM3", 0, 1, 0, 0);
				func_155(2, "ITEM_COST", 1, 1, 0, 0);
				func_151(func_154(2), 0);
				func_150(0);
				func_149(Local_68.f_102.f_23, 1, 1);
				func_148("SNK_ITEM1_D", 0, 0);
				func_147(201, "ITEM_SELECT", -1, 0);
				func_147(202, "ITEM_BACK", -1, 0);
				func_147(203, "SNK_LIFT", -1, 0);
				iLocal_66 = 3;
				break;
			
			case 3:
				iVar6 = 0;
				if (unk_0xA78EA29AC2FFBADE())
				{
					if (unk_0x122DCA017A140FA8(2))
					{
						unk_0x8CCCC48313B0F20F(0, 1, 1);
						unk_0x8CCCC48313B0F20F(0, 2, 1);
						unk_0x5D1D27F205B40569(0, 237, 1);
						unk_0x5D1D27F205B40569(0, 238, 1);
						unk_0x5D1D27F205B40569(0, 241, 1);
						unk_0x5D1D27F205B40569(0, 242, 1);
						func_144(0, 0, 0, 1);
						func_143(0, -1, 1);
						if (func_142())
						{
							if (Global_2557322 != Local_68.f_102.f_23)
							{
								unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								Local_68.f_102.f_23 = Global_2557322;
								func_149(Local_68.f_102.f_23, 1, 1);
								Local_68.f_102.f_37 = 0;
								Local_68.f_102.f_41 = 0;
								Local_68.f_102.f_42 = 0;
								sVar7 = func_141(Local_68.f_102.f_23);
								if (unk_0x33FD8E2E139F4FAC(sVar7))
								{
									func_148(sVar7, 0, 0);
								}
							}
							else
							{
								iVar6 = 1;
							}
						}
					}
				}
				func_105(1, iLocal_568, 1, 0, 1, -1082130432, 0, 0);
				func_101();
				if (unk_0x28BB6250B86A5CA5(2, 201) || iVar6 == 1)
				{
					Local_68.f_102.f_37 = 1;
					Local_68.f_102.f_41 = 0;
					Local_68.f_102.f_42 = 0;
					if (Local_68.f_102.f_40 && Local_68.f_102.f_43)
					{
						Local_68.f_102.f_44 = 1;
						unk_0xCC18B241D266EF14(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						iLocal_631 = 1;
						iLocal_634 = Local_68.f_102.f_23;
						iLocal_66 = 4;
					}
					else
					{
						Local_68.f_102.f_44 = 0;
						unk_0xCC18B241D266EF14(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
				}
				if (unk_0x28BB6250B86A5CA5(2, 203))
				{
					iLocal_66 = 6;
					unk_0xCC18B241D266EF14(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_100();
				}
				if (unk_0x28BB6250B86A5CA5(2, 202) || unk_0xEA7F1ED415FFE2E8(2, 238))
				{
					iLocal_66 = 7;
					Local_68.f_102.f_45 = unk_0x9D40BBF80D8F5E8A();
					unk_0xCC18B241D266EF14(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_100();
				}
				break;
			
			case 4:
				func_105(1, iLocal_568, 1, 0, 1, -1082130432, 0, 0);
				switch (Local_68.f_102.f_23)
				{
					case 0:
						iVar0 = func_154(Local_68.f_102.f_23);
						if (iVar1 + 10 > iVar2)
						{
							unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), iVar2);
						}
						else
						{
							unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), iVar1 + 10);
						}
						break;
					
					case 1:
						iVar0 = func_154(Local_68.f_102.f_23);
						if (iVar1 + 20 > iVar2)
						{
							unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), iVar2);
						}
						else
						{
							unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), iVar1 + 20);
						}
						break;
					
					case 2:
						iVar0 = func_154(Local_68.f_102.f_23);
						if (iVar1 + 15 > iVar2)
						{
							unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), iVar2);
						}
						else
						{
							unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), iVar1 + 15);
						}
						break;
				}
				func_68(func_95(), 97, iVar0);
				if (!Local_68.f_102.f_39)
				{
					iLocal_53 = 34;
					Local_68.f_102.f_39 = 1;
				}
				func_12(&(Local_68.f_102.f_53));
				iLocal_66 = 3;
				break;
			
			case 5:
				if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
				{
					if (!bLocal_574)
					{
					}
					iLocal_66 = 6;
				}
				break;
			
			case 6:
				switch (Local_68.f_102.f_23)
				{
					case 0:
						if (iVar1 + 10 > iVar2)
						{
							unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), iVar2);
						}
						else
						{
							unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), iVar1 + 10);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), iVar2);
						}
						else
						{
							unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), iVar1 + 20);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), iVar2);
						}
						else
						{
							unk_0x09714949CF524B00(unk_0xE7869D5D7816A9B6(), iVar1 + 15);
						}
						break;
				}
				unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 1, 0);
				func_166(23, 0);
				iLocal_53 = 35;
				if (!unk_0xAF437D7C802AB246(Local_68.f_2) && func_1(Local_68.f_470, 4))
				{
					unk_0xDCF460AE46C9489C(Local_68.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) < 1)
				{
					func_15(1, 0);
				}
				iLocal_66 = 8;
				break;
			
			case 7:
				if ((unk_0x9D40BBF80D8F5E8A() - Local_68.f_102.f_45) > 1000)
				{
					iLocal_66 = 0;
				}
				else
				{
					unk_0x9F2D8D5B57CF6622(2, 193);
					unk_0x9F2D8D5B57CF6622(2, 202);
					unk_0x9F2D8D5B57CF6622(2, 188);
					unk_0x9F2D8D5B57CF6622(2, 187);
					unk_0x9F2D8D5B57CF6622(2, 189);
					unk_0x9F2D8D5B57CF6622(2, 190);
				}
				break;
			
			case 8:
				break;
		}
	}
	else
	{
		if (iLocal_66 != 8 && func_1(Local_68.f_470, 4))
		{
			if ((iLocal_66 == 3 || iLocal_66 == 2) || iLocal_66 == 4)
			{
				func_100();
			}
			iLocal_66 = 8;
		}
		if (func_27("SHR_SNACKS"))
		{
			unk_0x1D208E4A4E1D4FFE(1);
			func_170(&(Local_68.f_469));
		}
		if (func_27("SHR_MENU"))
		{
			unk_0x1D208E4A4E1D4FFE(1);
			func_170(&(Local_68.f_469));
		}
		if (unk_0xB519E5386FBF69E5(Local_68.f_162.f_18, 1) && iLocal_624 < 2)
		{
			unk_0x73817D396768E4C6(&(Local_68.f_162.f_18), 1);
		}
		if (func_1(Local_68.f_470, 4))
		{
			func_67();
		}
	}
}

void func_67()
{
	if (func_1(Local_68.f_470, 2048))
	{
		if (!unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
			}
			unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
			func_286(&(Local_68.f_470), 2048);
		}
	}
	Local_68.f_102.f_37 = 0;
	unk_0x73817D396768E4C6(&(Local_68.f_162.f_18), 1);
	if (unk_0xCF686B56FD5328B5(uLocal_641))
	{
		unk_0x74FF6D08DE291367(uLocal_641, 0);
	}
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_69(Global_99155.f_32499[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_94();
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
					func_93(99, 1);
					func_92(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_92(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_92(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_77(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
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
							func_92(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
							func_92(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_92(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_92(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_92(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_92(joaat("sp2_money_spent_property"), iParam3);
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
									func_92(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
									func_92(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_92(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_92(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_92(joaat("sp2_money_spent_car_mods"), iParam3);
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
					func_93(95, iParam3);
					break;
				
				case 1:
					func_93(97, iParam3);
					break;
				
				case 2:
					func_93(96, iParam3);
					break;
			}
			func_93(98, iParam3);
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
					func_92(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_92(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_92(joaat("sp2_total_cash_earned"), iParam3);
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
	func_71(iParam0);
	if (Global_35619 == 15)
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

void func_71(int iParam0)
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

void func_72(int iParam0)
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
	else if (unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0) || unk_0xB519E5386FBF69E5(Global_2097152[func_74() /*10169*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x73817D396768E4C6(&(Global_99155.f_25013.f_471), iParam0);
		unk_0x73817D396768E4C6(&(Global_2097152[func_74() /*10169*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x4A4F36C4EFDE341F("COUP_RED");
		unk_0x9359E7CC54335EB9(func_73(iParam0));
		unk_0x77AD0392EB2D45CC(&cVar1, &cVar1, 1, 0, "", 0);
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
	func_93(93, iParam0);
	func_93(29, iParam0);
	func_93(30, iParam0);
}

bool func_76(int iParam0)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0);
	}
	return unk_0xB519E5386FBF69E5(Global_2097152[func_74() /*10169*/].f_7698.f_10, iParam0);
}

int func_77(bool bParam0)
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
		func_91(27, iVar1);
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
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_79(iParam0, iParam1);
}

int func_79(int iParam0, int iParam1)
{
	if (func_302(14) && !func_90(iParam0))
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
	if (func_89(&Global_2558814))
	{
		if (func_87(&Global_2558814, iParam0))
		{
			return 0;
		}
		if (func_80(&Global_2558814, iParam0))
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

int func_80(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_302(14) && !func_90(iParam1))
	{
		return 0;
	}
	if (func_87(uParam0, iParam1))
	{
		return 0;
	}
	if (func_86(uParam0) < 0f)
	{
		func_85(uParam0, 0);
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
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_302(14) && !func_90(iParam1))
	{
		return 0;
	}
	if (func_87(uParam0, iParam1))
	{
		return 0;
	}
	if (func_86(uParam0) < 0f)
	{
		func_85(uParam0, 0);
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
	return (*uParam0)[iParam1] == 70;
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
	func_85(uParam0, (Global_2558813 - 0.5f));
}

void func_84(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_85(var uParam0, float fParam1)
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

float func_86(var uParam0)
{
	return uParam0->f_72;
}

bool func_87(var uParam0, int iParam1)
{
	return func_88(uParam0, iParam1) != -1;
}

int func_88(var uParam0, int iParam1)
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

bool func_89(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_90(int iParam0)
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

int func_91(int iParam0, int iParam1)
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

void func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x56DCF5665F92F9BD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x39DEDCCD70293F58(iParam0, iVar0, 1);
}

void func_93(int iParam0, int iParam1)
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

void func_94()
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

int func_95()
{
	func_96();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_96()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_99(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_98(unk_0xE7869D5D7816A9B6());
			if (func_97(iVar0) && (!func_302(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_97(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

bool func_97(int iParam0)
{
	return iParam0 < 3;
}

int func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_99(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_99(int iParam0)
{
	if (func_97(iParam0))
	{
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_100()
{
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
	}
	func_286(&(Local_68.f_470), 2048);
	unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
	unk_0x7FB81B1DD14A3BE4(0);
	unk_0x6EF372C057320AD4(0, 1065353216);
	func_166(23, 0);
	Local_68.f_102.f_37 = 0;
	unk_0x73817D396768E4C6(&(Local_68.f_162.f_18), 1);
	if (unk_0xCF686B56FD5328B5(uLocal_641))
	{
		unk_0x74FF6D08DE291367(uLocal_641, 0);
	}
	unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
}

void func_101()
{
	char* sVar0;
	
	unk_0x9F2D8D5B57CF6622(2, 193);
	unk_0x9F2D8D5B57CF6622(2, 202);
	unk_0x9F2D8D5B57CF6622(2, 188);
	unk_0x9F2D8D5B57CF6622(2, 187);
	unk_0x9F2D8D5B57CF6622(2, 189);
	unk_0x9F2D8D5B57CF6622(2, 190);
	if (func_104())
	{
		Local_68.f_102.f_37 = 0;
		func_39(&(Local_68.f_102.f_53));
		Local_68.f_102.f_23 = (Local_68.f_102.f_23 - 1);
		if (Local_68.f_102.f_23 < 0)
		{
			Local_68.f_102.f_23 = (Local_68.f_102.f_24 - 1);
		}
		unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_149(Local_68.f_102.f_23, 1, 1);
		sVar0 = func_141(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 0;
		Local_68.f_102.f_42 = 0;
		if (unk_0x33FD8E2E139F4FAC(sVar0))
		{
			func_148(sVar0, 0, 0);
		}
	}
	if (func_103())
	{
		Local_68.f_102.f_37 = 0;
		func_39(&(Local_68.f_102.f_53));
		Local_68.f_102.f_23++;
		if (Local_68.f_102.f_23 > (Local_68.f_102.f_24 - 1))
		{
			Local_68.f_102.f_23 = 0;
		}
		unk_0xCC18B241D266EF14(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_149(Local_68.f_102.f_23, 1, 1);
		sVar0 = func_141(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 0;
		Local_68.f_102.f_42 = 0;
		if (unk_0x33FD8E2E139F4FAC(sVar0))
		{
			func_148(sVar0, 0, 0);
		}
	}
	if (!Local_68.f_102.f_41)
	{
		Local_68.f_102.f_40 = func_102(func_98(unk_0xE7869D5D7816A9B6())) >= func_154(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 1;
	}
	if (!Local_68.f_102.f_42)
	{
		Local_68.f_102.f_43 = unk_0x8219941CC4732B36(unk_0xE7869D5D7816A9B6()) < unk_0x7475BB2772D8CC88(unk_0xE7869D5D7816A9B6());
		Local_68.f_102.f_42 = 1;
	}
	if (Local_68.f_102.f_37)
	{
		if (func_40(&(Local_68.f_102.f_53)) < 3f)
		{
			if (Local_68.f_102.f_44)
			{
				func_148("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_68.f_102.f_40)
			{
				func_148("SNK_AFFORD", 0, 0);
			}
			else if (!Local_68.f_102.f_43)
			{
				func_148("SNK_NEEDED", 0, 0);
			}
		}
		else
		{
			Local_68.f_102.f_37 = 0;
			Local_68.f_102.f_44 = 0;
			func_39(&(Local_68.f_102.f_53));
			sVar0 = func_141(Local_68.f_102.f_23);
			if (unk_0x33FD8E2E139F4FAC(sVar0))
			{
				func_148(sVar0, 0, 0);
			}
		}
	}
}

int func_102(int iParam0)
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

int func_103()
{
	float fVar0;
	
	fVar0 = unk_0x61BD13BBFFA4A7AD(2, 219);
	if ((fVar0 > 0.8f || unk_0x6BBF308E0A0F9AD4(2, 187)) || unk_0x958B4351DD28B142(2, 242))
	{
		if (!func_14(&uLocal_638))
		{
			func_11(&uLocal_638);
			return 1;
		}
		else if (func_8(&uLocal_638) > 0.25f)
		{
			func_12(&uLocal_638);
			return 1;
		}
	}
	else if (func_14(&uLocal_638))
	{
		func_39(&uLocal_638);
	}
	return 0;
}

int func_104()
{
	float fVar0;
	
	fVar0 = unk_0x61BD13BBFFA4A7AD(2, 219);
	if ((fVar0 < -0.8f || unk_0x6BBF308E0A0F9AD4(2, 188)) || unk_0x958B4351DD28B142(2, 241))
	{
		if (!func_14(&uLocal_635))
		{
			func_11(&uLocal_635);
			return 1;
		}
		else if (func_8(&uLocal_635) > 0.25f)
		{
			func_12(&uLocal_635);
			return 1;
		}
	}
	else if (func_14(&uLocal_635))
	{
		func_39(&uLocal_635);
	}
	return 0;
}

void func_105(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar46;
	int iVar47;
	int iVar48;
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
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_138(0, bParam6))
	{
		return;
	}
	unk_0x56B79B8AD45389A5(76, 84);
	unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_136(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17257 = 0;
		}
	}
	if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_1)) == unk_0xC7C6DDDE84A8E734("HIDE"))
	{
		fVar56 = Global_17255;
	}
	else
	{
		fVar56 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17256;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		unk_0x177E5285E888D643(&iVar57, &iVar58);
		fVar60 = unk_0x56995B080AF5D7D0(0);
		if (func_135())
		{
			iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) * fVar60));
		}
		fVar61 = (unk_0xBBDA792448DB5A89(iVar57) / unk_0xBBDA792448DB5A89(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_135())
		{
			fVar59 = 1f;
		}
		iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar57) / fVar59));
		iVar58 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) / fVar59));
	}
	else
	{
		unk_0xC2E26B11E2BC4A88(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5521)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_1)) == unk_0xC7C6DDDE84A8E734("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					unk_0xFE6A5236E50BDF64(func_134(29), func_132(29, 1), (Global_17254 + (fParam5 * 0.5f)), (Global_17255 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7746)
				{
					iVar1 = Global_17257.f_7742;
					iVar2 = Global_17257.f_7743;
					iVar3 = Global_17257.f_7744;
					iVar4 = Global_17257.f_7745;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_131(Global_17254, (Global_17255 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17255 + fVar55) + 0.034722f) + 0f);
				if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_1)) != 0)
				{
					func_130();
					unk_0x608B6701BEC4527A(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							unk_0x8D23CF083336DA9B(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							unk_0x9EA8AC61C9873436(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							unk_0x9359E7CC54335EB9(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							unk_0x9359E7CC54335EB9(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							unk_0x63E8D6007C32E426(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							unk_0x9359E7CC54335EB9(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							unk_0x63E8D6007C32E426(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x2ED77CF10395403E((Global_17254 + 0.00390625f), ((Global_17255 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17257.f_5524 > Global_17257.f_5031)
				{
					if (Global_17257.f_5527 != 0)
					{
						func_130();
						func_128((((Global_17254 + fParam5) - 0.00390625f) - func_129("CM_ITEM_COUNT", Global_17257.f_5527, Global_17257.f_5526)), ((Global_17255 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17257.f_5527, Global_17257.f_5526);
					}
				}
			}
			iVar6 = Global_17257.f_5528;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7756)
			{
				iVar1 = Global_17257.f_7752;
				iVar2 = Global_17257.f_7753;
				iVar3 = Global_17257.f_7754;
				iVar4 = Global_17257.f_7755;
			}
			else
			{
				unk_0xC8FBBC95190691A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5031 && iVar6 <= Global_17257.f_5024)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5287[iVar6])
					{
						if (Global_17257.f_5160[iVar6] && iVar6 != Global_17257.f_5528)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5535[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5535[iVar6];
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
					if (Global_17257.f_5024 <= 1)
					{
						Global_17257.f_5024++;
					}
					iVar52 = 1;
				}
			}
			unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5524 > Global_17257.f_5031)
			{
				if (Global_17257.f_7761)
				{
					iVar1 = Global_17257.f_7757;
					iVar2 = Global_17257.f_7758;
					iVar3 = Global_17257.f_7759;
					iVar4 = Global_17257.f_7760;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_131(Global_17254, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x8504C7FBA97E6D14("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17257.f_7774)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xC8FBBC95190691A8(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFE6A5236E50BDF64("CommonMenu", "shop_arrows_upANDdown", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar59), ((Var37.f_1 / 720f) * fVar59), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_4500)) != 0 && Global_17257.f_4574 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_17257.f_4576 != 0)
				{
					func_136(Global_17257.f_4576, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_127(fVar41);
				unk_0x4B846CECFAF9AF4D(&(Global_17257.f_4500));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4570)
				{
					if (Global_17257.f_4504[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_17257.f_4509[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4504[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_17257.f_4513[iVar16], Global_17257.f_4517[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4504[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBEEA466E167943A5(fVar41, (fVar49 + 0.00277776f));
				unk_0xC8FBBC95190691A8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_131(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7766)
				{
					iVar1 = Global_17257.f_7762;
					iVar2 = Global_17257.f_7763;
					iVar3 = Global_17257.f_7764;
					iVar4 = Global_17257.f_7765;
				}
				else
				{
					unk_0xC8FBBC95190691A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_127(fVar41);
				unk_0x608B6701BEC4527A(&(Global_17257.f_4500));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4570)
				{
					if (Global_17257.f_4504[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_17257.f_4509[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4504[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_17257.f_4513[iVar16], Global_17257.f_4517[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4504[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4504[iVar14] == 8)
					{
						unk_0x9359E7CC54335EB9(&(Global_17257.f_4521[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x2ED77CF10395403E(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17257.f_4576 != 0)
				{
					func_136(Global_17257.f_4576, 1, 1, &fVar35, &fVar36, bParam7);
					func_126(Global_17257.f_4576, 1, &iVar46, &iVar47, &iVar48);
					unk_0xFE6A5236E50BDF64(func_134(Global_17257.f_4576), func_132(Global_17257.f_4576, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17257.f_4574 > 0)
				{
					if ((unk_0x9D40BBF80D8F5E8A() - Global_17257.f_4575) > Global_17257.f_4574)
					{
						StringCopy(&(Global_17257.f_4500), "", 16);
						Global_17257.f_4574 = -1;
					}
				}
			}
			if (unk_0xC7C6DDDE84A8E734(&(Global_2557246.f_21)) != 0 && Global_2557246.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_2557246.f_67 != 0)
				{
					func_136(Global_2557246.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_127(fVar41);
				unk_0x4B846CECFAF9AF4D(&(Global_2557246.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2557246.f_61)
				{
					if (Global_2557246.f_25[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_2557246.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2557246.f_25[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_2557246.f_34[iVar16], Global_2557246.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2557246.f_25[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 8)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xBEEA466E167943A5(fVar41, (fVar49 + 0.00277776f));
				unk_0xC8FBBC95190691A8(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_131(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7766)
				{
					iVar1 = Global_17257.f_7762;
					iVar2 = Global_17257.f_7763;
					iVar3 = Global_17257.f_7764;
					iVar4 = Global_17257.f_7765;
				}
				else
				{
					unk_0xC8FBBC95190691A8(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_127(fVar41);
				unk_0x608B6701BEC4527A(&(Global_2557246.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2557246.f_61)
				{
					if (Global_2557246.f_25[iVar14] == 2)
					{
						unk_0x8D23CF083336DA9B(Global_2557246.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2557246.f_25[iVar14] == 3)
					{
						unk_0x9EA8AC61C9873436(Global_2557246.f_34[iVar16], Global_2557246.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2557246.f_25[iVar14] == 1)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 8)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 5)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 6)
					{
						unk_0x9359E7CC54335EB9(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557246.f_25[iVar14] == 7)
					{
						unk_0x63E8D6007C32E426(&(Global_2557246.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x2ED77CF10395403E(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2557246.f_67 != 0)
				{
					func_136(Global_2557246.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_126(Global_2557246.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xFE6A5236E50BDF64(func_134(Global_2557246.f_67), func_132(Global_2557246.f_67, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x75D27F83672CDCB0(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2557246.f_65 > 0)
				{
					if ((unk_0x9D40BBF80D8F5E8A() - Global_2557246.f_66) > Global_2557246.f_65)
					{
						StringCopy(&(Global_2557246.f_21), "", 16);
						Global_2557246.f_65 = -1;
					}
				}
			}
			func_118(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x56B79B8AD45389A5(76, 84);
			unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5521)
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
			iVar63 = Global_17257.f_5024;
			if (Global_17257.f_5522)
			{
				iVar63 = (Global_17257.f_5525 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5535[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5535[iVar6];
				}
				if (Global_17257.f_5522)
				{
					iVar6 = Global_17257.f_7402[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17257.f_5528 && iVar9 < Global_17257.f_5031)
				{
					bVar32 = true;
					if (Global_17257.f_5529 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5160[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17257.f_5667[iVar6] = fVar34;
				fVar33 = (Global_17254 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17257.f_5529 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7768)
					{
						unk_0xC8FBBC95190691A8(Global_17257.f_7767, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0xC8FBBC95190691A8(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0xFE6A5236E50BDF64("CommonMenu", "Gradient_Nav", (Global_17254 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5665 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_116(bVar31, 1, 0, 0, 0, 0);
					unk_0x608B6701BEC4527A("DFLT_MNU_OPT");
					unk_0x2ED77CF10395403E(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17257.f_5032)
					{
						if (unk_0xB519E5386FBF69E5(Global_17257.f_4897[iVar6], iVar8) || Global_17257.f_4864[iVar8] == 5)
						{
							if (Global_17257.f_5522)
							{
								iVar19 = Global_17257.f_7413[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar20 = Global_17257.f_7454[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar21 = Global_17257.f_7495[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar22 = Global_17257.f_7536[((iVar9 * Global_17257.f_5032) + iVar8)];
								iVar23 = Global_17257.f_7577[((iVar9 * Global_17257.f_5032) + iVar8)];
							}
							else
							{
								Global_17257.f_7413[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar19;
								Global_17257.f_7454[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar20;
								Global_17257.f_7495[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar21;
								Global_17257.f_7536[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar22;
								Global_17257.f_7577[((iVar9 * Global_17257.f_5032) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17257.f_5797[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5794[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5797[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5794[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4870[iVar8] != -1f)
							{
								fVar33 = ((Global_17254 + 0.0046875f) + Global_17257.f_4870[iVar8]);
							}
							if ((iVar8 < 4 && Global_17257.f_4870[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4870[iVar8 + 1])
							{
								fVar45 = (Global_17257.f_4870[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17254 + Global_17256) - 0.0046875f) - fVar33);
							}
							if ((Global_17257.f_4883[iVar8] && Global_17257.f_5662) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17257.f_4864[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5522)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_116(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, iVar70, bVar50);
												unk_0x2561F357565DEF13(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9359E7CC54335EB9(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x8D23CF083336DA9B(Global_17257.f_3866[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x9EA8AC61C9873436(Global_17257.f_4119[(iVar21 + iVar27)], Global_17257.f_4246[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0x4E53FEE658D9705E(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_136(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17257.f_4373[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4891[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4891[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
											Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar42;
											Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar42 = Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar43 = Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)];
										}
										if (bVar51)
										{
											if (func_136(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_136(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_126(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_134(26), func_132(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_136(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_136(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_126(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_134(27), func_132(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_116(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, bVar50);
											if (Global_17257.f_7772 && Global_17257.f_7773 == iVar6)
											{
												func_115(bVar31);
											}
											unk_0x608B6701BEC4527A(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9359E7CC54335EB9(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x63E8D6007C32E426(&(Global_2441085[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x8D23CF083336DA9B(Global_17257.f_3866[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EA8AC61C9873436(Global_17257.f_4119[(iVar21 + iVar27)], Global_17257.f_4246[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4373[(iVar22 + iVar28)] == 2)
												{
													if (func_136(Global_17257.f_4373[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_136(Global_17257.f_4373[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_126(Global_17257.f_4373[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4891[iVar8] == 2)
															{
																unk_0xFE6A5236E50BDF64(func_134(Global_17257.f_4373[(iVar22 + iVar28)]), func_132(Global_17257.f_4373[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xFE6A5236E50BDF64(func_134(Global_17257.f_4373[(iVar22 + iVar28)]), func_132(Global_17257.f_4373[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4891[iVar8] == 2)
											{
												unk_0x2ED77CF10395403E(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x2ED77CF10395403E((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4373[(iVar22 + iVar14)] != 2)
												{
													if (func_136(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_136(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_126(Global_17257.f_4373[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4373[(iVar22 + iVar14)] == 30)
															{
																unk_0xFE6A5236E50BDF64(func_134(Global_17257.f_4373[(iVar22 + iVar14)]), func_132(Global_17257.f_4373[(iVar22 + iVar14)], bVar31), (Global_17254 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4891[iVar8] == 2)
															{
																unk_0xFE6A5236E50BDF64(func_134(Global_17257.f_4373[(iVar22 + iVar14)]), func_132(Global_17257.f_4373[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xFE6A5236E50BDF64(func_134(Global_17257.f_4373[(iVar22 + iVar14)]), func_132(Global_17257.f_4373[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2092[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5522)
										{
											func_116(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7772 && Global_17257.f_7773 == iVar6)
											{
												func_115(bVar31);
											}
											unk_0x2561F357565DEF13("NUMBER");
											unk_0x8D23CF083336DA9B(Global_17257.f_3866[iVar20]);
											fVar42 = unk_0x4E53FEE658D9705E(1);
											fVar41 = 0f;
											if (Global_17257.f_4891[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4891[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
											Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar42 = Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)];
										}
										if (bVar51)
										{
											if (func_136(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_136(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_126(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_134(26), func_132(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_136(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_136(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_126(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_134(27), func_132(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_116(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
										func_114((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_3866[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5522)
										{
											func_116(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7772 && Global_17257.f_7773 == iVar6)
											{
												func_115(bVar31);
											}
											unk_0x2561F357565DEF13("NUMBER");
											unk_0x9EA8AC61C9873436(Global_17257.f_4119[iVar21], Global_17257.f_4246[iVar21]);
											fVar42 = unk_0x4E53FEE658D9705E(1);
											fVar41 = 0f;
											if (Global_17257.f_4891[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4891[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
											Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
											fVar42 = Global_17257.f_7659[((iVar9 * Global_17257.f_5032) + iVar8)];
										}
										if (bVar51)
										{
											if (func_136(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_136(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_126(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_134(26), func_132(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_136(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_136(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_126(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xFE6A5236E50BDF64(func_134(27), func_132(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_116(bVar31, Global_17257.f_1586[iVar24], Global_17257.f_1839[iVar24], bVar53, 0, 0);
										func_113((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_4119[iVar21], Global_17257.f_4246[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_136(Global_17257.f_4373[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17257.f_5522)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4891[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17257.f_4891[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar41;
												Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7618[((iVar9 * Global_17257.f_5032) + iVar8)];
												fVar43 = Global_17257.f_7700[((iVar9 * Global_17257.f_5032) + iVar8)];
											}
											if (bVar51)
											{
												if (func_136(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17257.f_4891[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_136(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_126(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xFE6A5236E50BDF64(func_134(26), func_132(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_136(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_136(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_126(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xFE6A5236E50BDF64(func_134(27), func_132(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_136(Global_17257.f_4373[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_126(Global_17257.f_4373[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xFE6A5236E50BDF64(func_134(Global_17257.f_4373[iVar22]), func_132(Global_17257.f_4373[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_112(Global_17257.f_4373[iVar22])), (fVar36 * func_112(Global_17257.f_4373[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
							if (Global_17257.f_4864[iVar8] == 5)
							{
								if (Global_17257.f_4876[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17257.f_4876[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17257.f_4876[iVar8]);
								if (Global_17257.f_4883[iVar8])
								{
									if (func_136(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17257.f_4876[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17257.f_7402[iVar9] = iVar6;
						Global_17257.f_5530 = iVar6;
						iVar9++;
						if (Global_17257.f_5160[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5535[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17257.f_5535[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17257.f_5521)
					{
						Global_17257.f_5287[iVar6] = 1;
						if (Global_17257.f_5033[iVar6])
						{
							if (bVar31)
							{
								Global_17257.f_5527 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17257.f_5527 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5521)
			{
				Global_17257.f_5523 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17257.f_5526 = iVar11;
				Global_17257.f_5524 = iVar10;
				Global_17257.f_5521 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5522)
	{
		Global_17257.f_5525 = iVar9;
		Global_17257.f_5522 = 1;
	}
	Global_17257.f_5664 = fVar49;
	Global_17257.f_5666 = unk_0x9D40BBF80D8F5E8A();
	unk_0x74C2382519DF9D92(Global_17257.f_5664);
	if (!Global_17257.f_7741)
	{
		func_107();
	}
	Global_17257.f_7741 = 0;
	if (bParam2)
	{
		unk_0x1B7A773B18DF3DB0(10);
	}
	unk_0x1B7A773B18DF3DB0(6);
	unk_0x1B7A773B18DF3DB0(7);
	unk_0x1B7A773B18DF3DB0(9);
	unk_0x1B7A773B18DF3DB0(8);
	if (bParam0)
	{
		func_106(1);
	}
	unk_0x26FD470559B5674D();
}

void func_106(int iParam0)
{
	Global_1339895.f_932 = iParam0;
}

void func_107()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_111(0))
		{
			func_108(0);
		}
		unk_0x9956FB0E4B50ECB8(&Global_2284, 2);
	}
}

void func_108(int iParam0)
{
	if (Global_14571)
	{
		func_110(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
	}
	if (!func_109())
	{
		Global_14413.f_1 = 3;
	}
}

int func_109()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_110(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_111(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_111(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

float func_112(int iParam0)
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

void func_113(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x9EA8AC61C9873436(uParam3, uParam4);
	unk_0x2ED77CF10395403E(fParam0, fParam1, 0);
}

void func_114(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x8D23CF083336DA9B(iParam3);
	unk_0x2ED77CF10395403E(fParam0, fParam1, iParam4);
}

void func_115(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xC8FBBC95190691A8(Global_17257.f_7769[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xC8FBBC95190691A8(Global_17257.f_7769[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
}

void func_116(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_117(Global_17257.f_5797[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xC8FBBC95190691A8(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xC8FBBC95190691A8(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
		}
		else
		{
			unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x63EBA277B22A4C2D(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
	}
	else
	{
		unk_0x63EBA277B22A4C2D(155, 155, 155, 255);
	}
	unk_0x1C00A83A6321F5E9(0f, 0.35f);
	unk_0xD1AB173831A6CDE6(1);
	if (bParam5)
	{
		unk_0x1C00A83A6321F5E9(0f, 0.425f);
		unk_0x2626D8742682C5ED(4);
	}
	else
	{
		unk_0x2626D8742682C5ED(0);
	}
	unk_0xE2458E4F6B499A9C(0f, 1f);
	unk_0x9A4139952357487D(0);
	unk_0x9806DF8CF9239C35(0, 0, 0, 0, 0);
	unk_0x872BE36490E5119C(0, 0, 0, 0, 0);
}

void func_117(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_118(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_138(bParam4, bParam8))
	{
		return;
	}
	if (func_124())
	{
		return;
	}
	if (unk_0x29C4AA4F29B1E539())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_121(unk_0x3F80C6638E3A1A90(), 0))
		{
			return;
		}
	}
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0x4C0203C9C5CF4108() == 0 || unk_0x29C4AA4F29B1E539())
		{
			return;
		}
	}
	if (Global_17257.f_4577 != 0)
	{
		if (unk_0x2C46E805556A1F00(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4577)
			{
				if (Global_17257.f_4834[iVar1] != 344)
				{
					StringCopy(&(Global_17257.f_4579[iVar1 /*16*/]), unk_0xE77F6122F2596EB4(2, Global_17257.f_4834[iVar1], 1), 64);
				}
				else if (Global_17257.f_4847[iVar1] != 32)
				{
					StringCopy(&(Global_17257.f_4579[iVar1 /*16*/]), unk_0xA2A8F65D8724B71E(2, Global_17257.f_4847[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17257.f_4578 = 0;
		}
		if (!Global_17257.f_4578)
		{
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x73B039A1CD485226((1f - (Global_17257.f_4889 / 100f)));
			unk_0xFF141057ED7B4C73();
			if (unk_0xA78EA29AC2FFBADE())
			{
				unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x840DDAF1126AE0CC(1);
				unk_0xFF141057ED7B4C73();
			}
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4577)
			{
				if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_4772[iVar1 /*4*/])) != unk_0xC7C6DDDE84A8E734("PREV"))
				{
					unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x43C93E686A1E92C5(iVar1);
					func_120(&(Global_17257.f_4579[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xC7C6DDDE84A8E734(&(Global_17257.f_4772[iVar2 /*4*/])) == unk_0xC7C6DDDE84A8E734("PREV"))
					{
						func_120(&(Global_17257.f_4579[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4821[iVar1] == -1)
					{
						func_119(&(Global_17257.f_4772[iVar1 /*4*/]));
					}
					else
					{
						unk_0x33D37B75FC2BCC8C(&(Global_17257.f_4772[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x96629435C64EFDA2(iParam2, 70);
						}
						else
						{
							unk_0x8D23CF083336DA9B(iParam2);
						}
						unk_0x057886C01DDC535D();
					}
					if (unk_0xA78EA29AC2FFBADE())
					{
						if (Global_17257.f_4834[iVar1] != 344 && unk_0xB519E5386FBF69E5(Global_17257.f_4860, iVar1))
						{
							unk_0x840DDAF1126AE0CC(1);
							unk_0x43C93E686A1E92C5(Global_17257.f_4834[iVar1]);
						}
						else
						{
							unk_0x840DDAF1126AE0CC(0);
							unk_0x43C93E686A1E92C5(344);
						}
					}
					unk_0xFF141057ED7B4C73();
				}
				iVar1++;
			}
			if (unk_0xC7C6DDDE84A8E734(&(Global_2557246.f_16)) != unk_0xC7C6DDDE84A8E734(""))
			{
				unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x43C93E686A1E92C5(Global_17257.f_4577);
				func_120(&Global_2557246);
				if (Global_2557246.f_20 == -1)
				{
					func_119(&(Global_2557246.f_16));
				}
				else
				{
					unk_0x33D37B75FC2BCC8C(&(Global_2557246.f_16));
					if (bParam5)
					{
						unk_0x96629435C64EFDA2(iParam2, 70);
					}
					else
					{
						unk_0x8D23CF083336DA9B(iParam2);
					}
					unk_0x057886C01DDC535D();
				}
				unk_0xFF141057ED7B4C73();
			}
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x43C93E686A1E92C5(0);
			unk_0x43C93E686A1E92C5(0);
			unk_0x43C93E686A1E92C5(0);
			unk_0x43C93E686A1E92C5(80);
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4890)
			{
				unk_0x43C93E686A1E92C5(1);
			}
			else
			{
				unk_0x43C93E686A1E92C5(0);
			}
			unk_0xFF141057ED7B4C73();
			Global_17257.f_4578 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17257.f_4577)
		{
			if (Global_17257.f_4821[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x43C93E686A1E92C5(iVar1);
					unk_0x33D37B75FC2BCC8C(&(Global_17257.f_4772[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x96629435C64EFDA2(iParam2, 70);
					}
					else
					{
						unk_0x8D23CF083336DA9B(iParam2);
					}
					unk_0x057886C01DDC535D();
					unk_0xFF141057ED7B4C73();
				}
			}
			iVar1++;
		}
		if (Global_2557246.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xA4F3B84032D46C13(Global_17257.f_5453[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x43C93E686A1E92C5(iVar1);
				unk_0x33D37B75FC2BCC8C(&(Global_2557246.f_16));
				if (bParam5)
				{
					unk_0x96629435C64EFDA2(iParam2, 70);
				}
				else
				{
					unk_0x8D23CF083336DA9B(iParam2);
				}
				unk_0x057886C01DDC535D();
				unk_0xFF141057ED7B4C73();
			}
		}
		unk_0x56B79B8AD45389A5(76, 66);
		unk_0xC49724172A0D506C(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17257.f_7776)
			{
				unk_0xA2DDC75885378542(15, 0f, -0.0375f);
				Global_17257.f_7776 = 1;
			}
		}
		else if (Global_17257.f_7776)
		{
			unk_0x4A819C86009EE6EC(15);
			Global_17257.f_7776 = 0;
		}
		unk_0x26FD470559B5674D();
		if (Global_17257.f_4863)
		{
			unk_0x56B79B8AD45389A5(82, 66);
			unk_0xC49724172A0D506C(0f, 0f, 0f, 0f);
			unk_0xAF5B7C9C0A5116E9(Global_17257.f_5453[iVar0 /*10*/], Global_17257.f_4861, Global_17257.f_4862, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x26FD470559B5674D();
		}
		else
		{
			unk_0xE2B331FD5EEF4684(Global_17257.f_5453[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_119(var uParam0)
{
	unk_0x33D37B75FC2BCC8C(uParam0);
	unk_0x057886C01DDC535D();
}

void func_120(var uParam0)
{
	unk_0x492B9DC2AF02FDDF(uParam0);
}

bool func_121(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_122(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_122(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_123();
	}
	if (Global_1315887[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_123()
{
	return Global_1312746;
}

int func_124()
{
	struct<3> Var0;
	
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	if (func_125())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x2EA67F1118848733(&Var0);
		if (Global_14358 == 0)
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

int func_125()
{
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0xC8FBBC95190691A8(1, iParam2, iParam3, iParam4, &uVar0);
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
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_127(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x2626D8742682C5ED(0);
	unk_0x1C00A83A6321F5E9(0f, 0.35f);
	unk_0xBAD855016DFBE4C3(2);
	unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, iVar3);
	unk_0xE2458E4F6B499A9C(fParam0, ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x9A4139952357487D(0);
	unk_0x9806DF8CF9239C35(0, 0, 0, 0, 0);
	unk_0x872BE36490E5119C(0, 0, 0, 0, 0);
}

void func_128(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x608B6701BEC4527A(sParam2);
	unk_0x8D23CF083336DA9B(uParam3);
	unk_0x8D23CF083336DA9B(uParam4);
	unk_0x2ED77CF10395403E(fParam0, fParam1, 0);
}

float func_129(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x356491C12DAD1A37(sParam0))
	{
		if (unk_0xC7C6DDDE84A8E734(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_130();
	unk_0x2561F357565DEF13(sParam0);
	unk_0x8D23CF083336DA9B(uParam1);
	unk_0x8D23CF083336DA9B(uParam2);
	return unk_0x4E53FEE658D9705E(1);
}

void func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xC8FBBC95190691A8(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7751)
	{
		iVar0 = Global_17257.f_7747;
		iVar1 = Global_17257.f_7748;
		iVar2 = Global_17257.f_7749;
		iVar3 = Global_17257.f_7750;
	}
	unk_0x2626D8742682C5ED(0);
	unk_0x1C00A83A6321F5E9(0f, 0.35f);
	unk_0x63EBA277B22A4C2D(iVar0, iVar1, iVar2, iVar3);
	unk_0xE2458E4F6B499A9C((Global_17254 + 0.0046875f), ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x9A4139952357487D(0);
	unk_0x9806DF8CF9239C35(0, 0, 0, 0, 0);
	unk_0x872BE36490E5119C(0, 0, 0, 0, 0);
}

void func_131(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC3BB3CA17D24E700((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_132(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0xF6917DE0E003509D(&(Global_17257.f_6601[iParam0 /*16*/])))
	{
		return func_133(&(Global_17257.f_6601[iParam0 /*16*/]));
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
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
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

var func_133(var uParam0)
{
	return uParam0;
}

char* func_134(int iParam0)
{
	if (!unk_0xF6917DE0E003509D(&(Global_17257.f_5800[iParam0 /*16*/])))
	{
		return func_133(&(Global_17257.f_5800[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_135()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x177E5285E888D643(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_134(iParam0);
	sVar1 = func_132(iParam0, bParam1);
	if (unk_0xC7C6DDDE84A8E734(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x177E5285E888D643(&iVar2, &iVar3);
			fVar5 = unk_0x56995B080AF5D7D0(0);
			if (func_135())
			{
				iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar5));
			}
			fVar6 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_135())
			{
				fVar4 = 1f;
			}
			if (unk_0xFF6891E21E7FC193(joaat("director_mode")) > 0)
			{
				unk_0xC2E26B11E2BC4A88(&iVar2, &iVar3);
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0xC2E26B11E2BC4A88(&iVar2, &iVar3);
		}
		Var7 = { unk_0x8504C7FBA97E6D14(uVar0, sVar1) };
		Var7.f_0 = (Var7.f_0 * (func_137(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_137(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.f_0 = (Var7.f_0 - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.f_0 = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x51807A4D76E3D4F4() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17256)
			{
				*fParam4 = (*fParam4 * (Global_17256 / *fParam3));
				*fParam3 = Global_17256;
			}
		}
		return 1;
	}
	return 0;
}

float func_137(int iParam0)
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
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_138(bool bParam0, bool bParam1)
{
	if (Global_2426494.f_1325.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xDE185266FE919B68() || (func_140(8, -1) && func_139() != 64)) || (unk_0x9449AC6115443388() != 0 && !bParam1)) || (unk_0xF478777FFCC96862() && !bParam0)) || unk_0x565848B3396785BC()) || Global_69496) || Global_17257.f_7775) || unk_0xA42A6C736BEA9778()) || Global_91077.f_1338)
	{
		return 0;
	}
	return 1;
}

int func_139()
{
	return Global_1315842;
}

bool func_140(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
}

char* func_141(int iParam0)
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

int func_142()
{
	if (unk_0x7EDB1AFBE755EC7A(2))
	{
		if (Global_2557322 > -1)
		{
			if (unk_0x958B4351DD28B142(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_143(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x7EDB1AFBE755EC7A(2))
	{
		return 0;
	}
	if (unk_0xA57007F9A665F322() || unk_0xA42A6C736BEA9778())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x422036F797F95CFC();
	}
	if (Global_2557322 == -6)
	{
		unk_0x2BDB7C3D77DB86C4(4);
		if (iParam0 && unk_0x6BBF308E0A0F9AD4(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2557322 = -1;
			return 0;
		}
	}
	if (((Global_2557322 > -1 || Global_2557322 == -3) || Global_2557322 == -2) || unk_0xD0B060C76BDF38BD())
	{
		unk_0x2BDB7C3D77DB86C4(1);
		return 0;
	}
	if (Global_2557322 == -1 && iParam0)
	{
		if (unk_0x6BBF308E0A0F9AD4(2, 237))
		{
			unk_0x2BDB7C3D77DB86C4(4);
			Global_2557322 = -6;
			return 1;
		}
		else
		{
			unk_0x2BDB7C3D77DB86C4(3);
			return 0;
		}
	}
	unk_0x2BDB7C3D77DB86C4(1);
	return 0;
}

void func_144(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	if (!unk_0x7EDB1AFBE755EC7A(2))
	{
		Global_2557322 = -1;
		return;
	}
	unk_0xA0644295A8C137BF(1);
	fVar0 = Global_17254;
	fVar2 = (fVar0 + Global_17256);
	fVar3 = Global_17257.f_5523;
	fVar1 = (Global_17257.f_5523 - (IntToFloat(Global_17257.f_5525) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17257.f_5525 < 1)
	{
		fVar1 = (Global_17257.f_5523 - 0.034722f);
	}
	unk_0x56B79B8AD45389A5(76, 84);
	unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x976D93A25CEA6E3A(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x976D93A25CEA6E3A(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x26FD470559B5674D();
	func_146();
	if (Global_2557322 == -6)
	{
		return;
	}
	Global_2557322 = -1;
	fVar7 = Global_2557316;
	fVar8 = Global_2557317;
	if (Global_17257.f_5526 > Global_17257.f_5525)
	{
		if (((Global_2557316 >= fVar0 && Global_2557316 <= fVar2) && Global_2557317 >= fVar3) && Global_2557317 < (fVar3 + fVar6))
		{
			Global_2557322 = -2;
			if (bParam3)
			{
				func_145(0);
			}
			return;
		}
		if (((Global_2557316 >= fVar0 && Global_2557316 <= fVar2) && Global_2557317 >= (fVar3 + fVar6)) && Global_2557317 < (fVar3 + 0.034722f))
		{
			Global_2557322 = -3;
			if (bParam3)
			{
				func_145(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = unk_0xF34EE736CF047844((fVar9 / 0.034722f));
		if (Global_17257.f_5526 == -1)
		{
			Global_2557322 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17257.f_5525);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x56B79B8AD45389A5(76, 84);
				unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
				func_131(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17256, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x26FD470559B5674D();
			}
		}
		Global_2557322 = Global_17257.f_7402[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2557322 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2557322 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2557322 = -4;
		return;
	}
	Global_2557322 = -1;
}

void func_145(bool bParam0)
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
	fVar0 = Global_17254;
	fVar1 = Global_17257.f_5523;
	unk_0x56B79B8AD45389A5(76, 84);
	unk_0xC49724172A0D506C(-0.05f, -0.05f, 0f, 0f);
	if (Global_2557322 == -2)
	{
		func_131(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2557322 == -3)
	{
		func_131(fVar0, (fVar1 + fVar2), Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x26FD470559B5674D();
}

void func_146()
{
	Global_2557318 = Global_2557316;
	Global_2557319 = Global_2557317;
	Global_2557316 = unk_0x9CF7E896E5D8A141(2, 239);
	Global_2557317 = unk_0x9CF7E896E5D8A141(2, 240);
	Global_2557320 = (Global_2557316 - Global_2557318);
	Global_2557321 = (Global_2557317 - Global_2557319);
}

void func_147(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xE77F6122F2596EB4(2, iParam0, 1);
	if (Global_17257.f_4577 >= 12)
	{
		StringCopy(&Global_2557246, sVar0, 64);
		StringCopy(&(Global_2557246.f_16), sParam1, 16);
		Global_2557246.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_17257.f_4860), Global_17257.f_4577);
	}
	StringCopy(&(Global_17257.f_4579[Global_17257.f_4577 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4772[Global_17257.f_4577 /*4*/]), sParam1, 16);
	Global_17257.f_4821[Global_17257.f_4577] = iParam2;
	Global_17257.f_4834[Global_17257.f_4577] = iParam0;
	Global_17257.f_4847[Global_17257.f_4577] = 32;
	Global_17257.f_4577++;
}

void func_148(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_4500), sParam0, 16);
	Global_17257.f_4570 = 0;
	Global_17257.f_4571 = 0;
	Global_17257.f_4572 = 0;
	Global_17257.f_4573 = 0;
	Global_17257.f_4574 = iParam1;
	Global_17257.f_4575 = unk_0x9D40BBF80D8F5E8A();
	Global_17257.f_4576 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4504[iVar0] = 0;
		iVar0++;
	}
}

void func_149(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_5529 = uParam0;
	Global_17257.f_5662 = iParam2;
	if (Global_17257.f_5529 < Global_17257.f_5528)
	{
		Global_17257.f_5528 = Global_17257.f_5529;
	}
	else if ((Global_17257.f_5522 && Global_17257.f_5529 > Global_17257.f_5530) || (!Global_17257.f_5522 && Global_17257.f_5529 >= (Global_17257.f_5528 + Global_17257.f_5031)))
	{
		iVar0 = Global_17257.f_5528;
		while (iVar0 <= Global_17257.f_5529)
		{
			if (iVar0 >= 0 && iVar0 < 125)
			{
				if (Global_17257.f_4897[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17257.f_5031 && Global_17257.f_5528 < 126)
		{
			Global_17257.f_5528++;
			iVar1 = 0;
			iVar0 = Global_17257.f_5528;
			while (iVar0 <= Global_17257.f_5529)
			{
				if (iVar0 >= 0 && iVar0 < 125)
				{
					if (Global_17257.f_4897[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17257.f_5521 = 0;
	Global_17257.f_5522 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17257.f_4500), "", 16);
		StringCopy(&(Global_2557246.f_21), "", 16);
	}
}

void func_150(int iParam0)
{
	Global_17257.f_5528 = iParam0;
}

void func_151(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5028 >= 252)
	{
		return;
	}
	if (Global_17257.f_5533 >= 4)
	{
		return;
	}
	if (Global_17257.f_5534 != 1)
	{
		return;
	}
	if (Global_17257.f_5533 >= Global_17257.f_5531)
	{
		return;
	}
	Global_17257.f_3866[Global_17257.f_5028] = uParam0;
	Global_17257.f_5028++;
	Global_17257.f_2092[Global_17257.f_5532 /*5*/][Global_17257.f_5533] = 2;
	Global_17257.f_5533++;
	if (Global_17257.f_5533 >= Global_17257.f_5531)
	{
		fVar0 = func_153();
		if (Global_17257.f_4883[Global_17257.f_5025] && Global_17257.f_5533 == Global_17257.f_5531)
		{
			func_136(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17257.f_4876[(Global_17257.f_5025 - 1)])
		{
			Global_17257.f_4876[(Global_17257.f_5025 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17257.f_5533 >= Global_17257.f_5531)
		{
			fVar3 = func_152();
			if (fVar3 > Global_17257.f_5535[Global_17257.f_5024])
			{
				Global_17257.f_5535[Global_17257.f_5024] = fVar3;
			}
		}
	}
}

float func_152()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5533)
	{
		if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17257.f_4373[((Global_17257.f_5030 - iVar1) + iVar0)] != 0)
		{
			if (func_136(Global_17257.f_4373[((Global_17257.f_5030 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x75D27F83672CDCB0(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x75D27F83672CDCB0(0.35f, 0);
}

float func_153()
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
	while (iVar7 < Global_17257.f_5533)
	{
		if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_116(0, 1, 0, 0, 0, iVar6 > 0);
	if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
	{
		unk_0x2561F357565DEF13(&(Global_17257.f_73[Global_17257.f_5532 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5533)
	{
		if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(Global_17257.f_5532 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9359E7CC54335EB9(&(Global_17257.f_73[(Global_17257.f_5532 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 2)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x8D23CF083336DA9B(Global_17257.f_3866[((Global_17257.f_5028 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 3)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9EA8AC61C9873436(Global_17257.f_4119[((Global_17257.f_5029 - iVar4) + iVar10)], Global_17257.f_4246[((Global_17257.f_5029 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 5)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x63E8D6007C32E426(&(Global_2441085[((Global_17257.f_5027 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 6)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x9359E7CC54335EB9(&(Global_2441085[((Global_17257.f_5027 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2092[Global_17257.f_5532 /*5*/][iVar7] == 7)
		{
			if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
			{
				unk_0x63E8D6007C32E426(&(Global_2441085[((Global_17257.f_5027 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0xC7C6DDDE84A8E734(&(Global_17257.f_73[Global_17257.f_5532 /*6*/])) != 0)
	{
		fVar0 = unk_0x4E53FEE658D9705E(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17257.f_4373[((Global_17257.f_5030 - iVar5) + iVar7)] != 0)
		{
			func_136(Global_17257.f_4373[((Global_17257.f_5030 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_154(int iParam0)
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

void func_155(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17257.f_5024 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5024 >= 126)
	{
		return;
	}
	if (Global_17257.f_5026 >= 252)
	{
		return;
	}
	if (Global_17257.f_5533 < Global_17257.f_5531)
	{
		return;
	}
	if (Global_17257.f_5024 != iParam0)
	{
		Global_17257.f_5024 = iParam0;
		Global_17257.f_5025 = 0;
	}
	iVar0 = Global_17257.f_4864[Global_17257.f_5025];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5025 < 4 && iVar0 != 1)
		{
			Global_17257.f_5025++;
			iVar0 = Global_17257.f_4864[Global_17257.f_5025];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5026 /*6*/]), sParam1, 24);
	if (!unk_0xF6917DE0E003509D(sParam1) && !unk_0x33FD8E2E139F4FAC(sParam1))
	{
	}
	Global_17257.f_1586[Global_17257.f_5026] = iParam3;
	Global_17257.f_1839[Global_17257.f_5026] = iParam4;
	Global_17257.f_5026++;
	if (iParam2 == 0)
	{
		fVar1 = func_157(&(Global_17257.f_73[Global_17257.f_5026 /*6*/]));
		if (Global_17257.f_4883[Global_17257.f_5025])
		{
			func_136(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17257.f_4876[Global_17257.f_5025])
		{
			Global_17257.f_4876[Global_17257.f_5025] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_156(&(Global_17257.f_73[Global_17257.f_5026 /*6*/]));
			if (fVar4 > Global_17257.f_5535[iParam0])
			{
				Global_17257.f_5535[iParam0] = fVar4;
			}
		}
	}
	unk_0x9956FB0E4B50ECB8(&(Global_17257.f_4897[iParam0]), Global_17257.f_5025);
	Global_17257.f_5025++;
	Global_17257.f_5534 = 1;
	Global_17257.f_5532 = (Global_17257.f_5026 - 1);
	Global_17257.f_5533 = 0;
	Global_17257.f_5531 = iParam2;
}

float func_156(char* sParam0)
{
	if (!unk_0x33FD8E2E139F4FAC(sParam0))
	{
	}
	return unk_0x75D27F83672CDCB0(0.35f, 0);
}

float func_157(char* sParam0)
{
	if (!unk_0x356491C12DAD1A37(sParam0))
	{
		if (unk_0xC7C6DDDE84A8E734(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_116(0, 1, 0, 0, 0, 0);
	unk_0x2561F357565DEF13(sParam0);
	return unk_0x4E53FEE658D9705E(1);
}

void func_158()
{
	if (unk_0xA78EA29AC2FFBADE())
	{
		unk_0x57DCE283775C55C6(0.325f, 0.3f);
	}
}

void func_159(int iParam0, char* sParam1, char* sParam2)
{
	Global_17257 = iParam0;
	func_160(29, sParam1, sParam2);
}

void func_160(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17257.f_5800[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17257.f_6601[iParam0 /*16*/]), sParam2, 64);
}

void func_161(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_1), sParam0, 16);
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4891[0] = iParam0;
	Global_17257.f_4891[1] = iParam1;
	Global_17257.f_4891[2] = iParam2;
	Global_17257.f_4891[3] = iParam3;
	Global_17257.f_4891[4] = iParam4;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4864[0] = iParam0;
	Global_17257.f_4864[1] = iParam1;
	Global_17257.f_4864[2] = iParam2;
	Global_17257.f_4864[3] = iParam3;
	Global_17257.f_4864[4] = iParam4;
	Global_17257.f_5032 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5032++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5032++;
	}
}

void func_164(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 252)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2092[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2441085[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 252)
	{
		Global_17257.f_3866[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		Global_17257.f_4119[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		Global_17257.f_4373[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		Global_17257.f_4897[iVar0] = 0;
		Global_17257.f_5033[iVar0] = 0;
		Global_17257.f_5160[iVar0] = 0;
		Global_17257.f_5667[iVar0] = 0f;
		Global_17257.f_5287[iVar0] = 0;
		Global_17257.f_5535[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4864[iVar0] = 0;
		Global_17257.f_4876[iVar0] = 0f;
		Global_17257.f_4870[iVar0] = -1f;
		Global_17257.f_4883[iVar0] = 0;
		Global_17257.f_4891[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4772[iVar0 /*4*/]), "", 16);
		Global_17257.f_4821[iVar0] = -1;
		Global_17257.f_4834[iVar0] = 344;
		Global_17257.f_4847[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_17257.f_5800[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6601[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2557246.f_16), "", 16);
	Global_2557246.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5024 = 0;
	Global_17257.f_5025 = 0;
	Global_17257.f_5026 = 0;
	Global_17257.f_5028 = 0;
	Global_17257.f_5029 = 0;
	Global_17257.f_5030 = 0;
	Global_17257.f_5027 = 0;
	Global_17257.f_5662 = 0;
	Global_17257.f_5529 = 0;
	Global_17257.f_5528 = 0;
	Global_17257.f_5530 = 0;
	StringCopy(&(Global_17257.f_4500), "", 16);
	Global_17257.f_4570 = 0;
	Global_17257.f_4571 = 0;
	Global_17257.f_4572 = 0;
	Global_17257.f_4573 = 0;
	Global_17257.f_4574 = 0;
	Global_17257.f_4575 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4504[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4576 = 0;
	StringCopy(&(Global_2557246.f_21), "", 16);
	Global_2557246.f_61 = 0;
	Global_2557246.f_62 = 0;
	Global_2557246.f_63 = 0;
	Global_2557246.f_64 = 0;
	Global_2557246.f_65 = 0;
	Global_2557246.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2557246.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2557246.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4882 = 0f;
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_5534 = 0;
	Global_17257.f_5533 = 0;
	Global_17257.f_5531 = 0;
	Global_17257.f_5532 = 0;
	Global_17257.f_4577 = 0;
	Global_17257.f_4578 = 0;
	Global_17257.f_5031 = 10;
	Global_17257.f_5032 = 0;
	Global_17257.f_5664 = 0f;
	Global_17257.f_5665 = 0f;
	Global_17257.f_5521 = 0;
	Global_17257.f_5522 = 0;
	Global_17257.f_5523 = 0f;
	Global_17257.f_5524 = 0;
	Global_17257.f_5526 = 0;
	Global_17257.f_5525 = 0;
	Global_17257.f_5527 = 0;
	Global_17257.f_7772 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5794[iVar0] = -1;
		Global_17257.f_5797[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4889 = 0f;
	Global_17257.f_4860 = 0;
	Global_17257.f_4890 = 0;
	Global_17257.f_7751 = 0;
	Global_17257.f_7746 = 0;
	Global_17257.f_7756 = 0;
	Global_17257.f_7761 = 0;
	Global_17257.f_7766 = 0;
	Global_17257.f_7768 = 0;
	Global_17257.f_7774 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = unk_0x56995B080AF5D7D0(0);
	if (bParam0)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17256 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17256 = 0.225f;
	}
}

int func_165(int iParam0, struct<3> Param1, float fParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam5 = { unk_0xF919633EBD0639D0(Param1, fParam4, 2.40015f, -7.75244f, 1.0825f) };
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
			*uParam5 = { unk_0xF919633EBD0639D0(Param1, fParam4, 3.80296f, -5.391f, 1.213f) };
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
			*uParam5 = { unk_0xF919633EBD0639D0(Param1, fParam4, 2.97963f, -3.39452f, 0.934498f) };
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

void func_166(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_25278, iParam0);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_25278, iParam0);
	}
}

int func_167(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_168(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x2E6D4A0CE8AD9494(unk_0xBFAE5F9DEC53DAE2()))
	{
		return 0;
	}
	if (func_111(0))
	{
		return 0;
	}
	if (unk_0x2DFE588AA3727FE3())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36319[iVar0 /*19*/] == 1 && Global_36319[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36319[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36319[iVar0 /*19*/].f_5 = 1;
			Global_36319[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36319[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36319[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_168(int iParam0)
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
		if (Global_36319[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_169(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_168(iParam0);
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
	if (Global_36319[iVar0 /*19*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36319[iVar0 /*19*/].f_12)
	{
		unk_0xAA8D087D7A86072A(&(Global_36319[iVar0 /*19*/].f_8));
		unk_0x9359E7CC54335EB9(&Global_36436);
		iVar1 = unk_0x360D41DC76A83E6A(0);
	}
	else
	{
		unk_0xAA8D087D7A86072A(&(Global_36319[iVar0 /*19*/].f_8));
		unk_0x9359E7CC54335EB9(&Global_36436);
		unk_0x9359E7CC54335EB9(&(Global_36319[iVar0 /*19*/].f_13));
		iVar1 = unk_0x360D41DC76A83E6A(0);
	}
	return iVar1;
}

void func_170(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_168(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36319[iVar0 /*19*/])
		{
			Global_36319[iVar0 /*19*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

void func_171(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0xFF6891E21E7FC193(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xF478777FFCC96862())
	{
		if (!*uParam0 == -1)
		{
			func_170(uParam0);
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
		if (!Global_36319[iVar0 /*19*/])
		{
			Global_36319[iVar0 /*19*/] = 1;
			Global_36319[iVar0 /*19*/].f_1 = Global_36442;
			Global_36442++;
			Global_36319[iVar0 /*19*/].f_4 = 0;
			Global_36319[iVar0 /*19*/].f_17 = 0;
			Global_36319[iVar0 /*19*/].f_5 = 0;
			Global_36319[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36319[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36319[iVar0 /*19*/].f_6 = iParam3;
			Global_36319[iVar0 /*19*/].f_18 = unk_0xE3E113B4DB09AAF8();
			Global_36319[iVar0 /*19*/].f_7 = 0;
			Global_36319[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xF6917DE0E003509D(sParam4))
			{
				Global_36319[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36319[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36319[iVar0 /*19*/].f_12 = 0;
			}
			*uParam0 = Global_36319[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_172(char* sParam0)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 1, 1, -1);
}

int func_173()
{
	if (Global_99155.f_24859.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

int func_174(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0xF919633EBD0639D0(*uParam1, uParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
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
			*uParam3 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0xF919633EBD0639D0(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
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

int func_175(float fParam0)
{
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()) && !unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x8F4395E832F66DDF(unk_0xE7869D5D7816A9B6()) > 0;
		}
		else
		{
			return unk_0x9A75BFB6043190AE(unk_0xE7869D5D7816A9B6(), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), fParam0) > 0;
		}
	}
	return 0;
}

void func_176()
{
	if (iLocal_631)
	{
		if (iLocal_630 == 3)
		{
			iLocal_630 = 0;
		}
		iLocal_631 = 0;
	}
	switch (iLocal_630)
	{
		case 0:
			unk_0x60365B5AF8BF1FFA(uLocal_618[iLocal_634], 1, 0);
			uLocal_632 = unk_0xB839A1C489B63ACC(unk_0xF919633EBD0639D0(Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_68.f_486.f_9, 2);
			if (!unk_0xAF437D7C802AB246(Local_68.f_2))
			{
				unk_0x360F0D01112F8AD0(Local_68.f_2, uLocal_632, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xDE77F887DBEE3953(uLocal_618[iLocal_634], uLocal_632, "purchase_chocbar", "mp_am_hold_up", 1000f, 1090519040, 1, 1148846080);
				iLocal_630 = 1;
			}
			break;
		
		case 1:
			if (unk_0x47B2F09FC779F5CD(uLocal_632))
			{
				if (unk_0x4D221DFBB84DCF0B(uLocal_632) == 1f)
				{
					if (!unk_0xAF437D7C802AB246(Local_68.f_2))
					{
						unk_0xFA2C5C2D054C888E(Local_68.f_2);
					}
					if (unk_0xD51CFE69539DB6D8(uLocal_618[iLocal_634]))
					{
						unk_0x504BE965986F581A(uLocal_618[iLocal_634], 1);
					}
					iLocal_633 = unk_0x9D40BBF80D8F5E8A();
					iLocal_630 = 2;
				}
			}
			else
			{
				iLocal_633 = unk_0x9D40BBF80D8F5E8A();
				iLocal_630 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x9D40BBF80D8F5E8A() - iLocal_633) > 1000)
			{
				if (unk_0xD51CFE69539DB6D8(uLocal_618[iLocal_634]))
				{
					unk_0x60365B5AF8BF1FFA(uLocal_618[iLocal_634], 0, 0);
					unk_0x88A973CE47FBEF95(uLocal_618[iLocal_634], func_59(iLocal_634), 1, 0, 0, 1);
					unk_0x504BE965986F581A(uLocal_618[iLocal_634], 0);
				}
				iLocal_630 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

void func_177()
{
	if (iLocal_54 != 6)
	{
		switch (iLocal_54)
		{
			case 1:
				if (func_182())
				{
					iLocal_54 = 2;
				}
				else
				{
					iLocal_54 = 6;
				}
				break;
			
			case 2:
				if (!unk_0x76B2D234F1895632(Local_68.f_86))
				{
					func_181();
					func_11(&(Local_68.f_86.f_7));
					iLocal_54 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x76B2D234F1895632(Local_68.f_86))
				{
					if ((func_180(&(Local_68.f_86.f_7), 5f) || func_178(Local_68.f_2, &(Local_68.f_451))) || unk_0x8E2CF6ACCED3BD0F(Local_68.f_86))
					{
						iLocal_54 = 4;
					}
				}
				break;
			
			case 4:
				if (!unk_0x76B2D234F1895632(Local_68.f_86))
				{
					iLocal_53 = 31;
					unk_0x4B79E06845D63B96(Local_68.f_86, Local_68.f_0, 500f, -1, 0, 0);
					iLocal_54 = 5;
				}
				func_39(&(Local_68.f_86.f_7));
				break;
			}
	}
}

int func_178(int iParam0, var uParam1)
{
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		if (unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), 7))
		{
			if (unk_0xBC273BCD46110BE6(unk_0x3F80C6638E3A1A90(), iParam0) || unk_0x386C3192F791D414(unk_0x3F80C6638E3A1A90(), iParam0))
			{
				if (unk_0xFA68268DB708808B(iParam0, unk_0xE7869D5D7816A9B6(), 90f))
				{
					if (func_179(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x9D40BBF80D8F5E8A();
						}
						else if ((unk_0x9D40BBF80D8F5E8A() - uParam1->f_1) > uParam1->f_3)
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

float func_179(int iParam0, int iParam1)
{
	return func_22(unk_0x91B73D905EA38F6B(unk_0xBFAE5F9DEC53DAE2()), iParam0, iParam1);
}

int func_180(var uParam0, float fParam1)
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

void func_181()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_86))
	{
		unk_0x94026C1D1DB14225(&(Local_68.f_86.f_6));
		unk_0x58F62EDF6111D598(0, Local_68.f_0, 0);
		unk_0x6A8BCE61F660B8D0(0, Local_68.f_0, 2500, 0, 2);
		unk_0xF504D2C6A132D1E5(0, 2500, 0, -1, 0);
		unk_0x911ECBCE73F8EC3F(Local_68.f_86.f_6);
		unk_0xC2C4A3A9FF2FBFFF(Local_68.f_86, Local_68.f_86.f_6);
	}
}

int func_182()
{
	unk_0x5353F70F9BA66F4D(Local_68.f_86.f_2, Local_68.f_86.f_5, 1, 0, &(Local_68.f_86), 0, 1, -1);
	if (!unk_0x76B2D234F1895632(Local_68.f_86))
	{
		if (unk_0x1B2DC87EFB36DF80(Local_68.f_86) == Local_68.f_86.f_1)
		{
			unk_0x20BB4B94CC6DDC9A(Local_68.f_86, 1, 0);
			unk_0x9BEE7E791BC4D38B(Local_68.f_86, 1);
			return 1;
		}
	}
	return 0;
}

void func_183()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	
	if (iLocal_624 > 1 && iLocal_624 < 5)
	{
		if (func_204())
		{
			unk_0x6A6E764D1DB633C7(500);
			iLocal_624 = 6;
		}
	}
	switch (iLocal_624)
	{
		case 0:
			if ((((unk_0x76B2D234F1895632(Local_68.f_2) || !func_203()) || func_1(Local_68.f_470, 128)) && iLocal_57 < 3) && unk_0x743D96D854EFA6C5(Local_68.f_2.f_1, 1.5f) == 0)
			{
				if ((func_44() && !unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0)) && !func_202(0))
				{
					func_201("SHR_ROBTILL", -1);
					Local_68.f_469 = -1;
					func_171(&(Local_68.f_469), 4, "SHR_ROBTILL", 0, 0, 0);
					unk_0x73817D396768E4C6(&(Local_68.f_162.f_18), 1);
					unk_0x73817D396768E4C6(&(Local_68.f_162.f_18), 0);
					iLocal_624 = 1;
				}
			}
			else if (!unk_0xAF437D7C802AB246(Local_68.f_2))
			{
			}
			else if (iLocal_57 == 7)
			{
			}
			else if (unk_0x743D96D854EFA6C5(Local_68.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_44())
			{
				if (func_167(Local_68.f_469, 1))
				{
					if (!unk_0x76B2D234F1895632(Local_68.f_0))
					{
						if (!unk_0x76B2D234F1895632(unk_0xA0B1717D806F4901()))
						{
							iVar3 = unk_0xA0B1717D806F4901();
							if (unk_0x22E902D6AF27E232(iVar3, Local_68.f_214, Local_68.f_217, Local_68.f_220, 0, 1, 0))
							{
								unk_0x88A973CE47FBEF95(iVar3, unk_0xF919633EBD0639D0(Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, -0.7961f, -1.562f, -0.4215f), 0, 0, 0, 1);
							}
						}
					}
					unk_0x9956FB0E4B50ECB8(&(Local_68.f_162.f_18), 1);
					if (func_27("SHR_ROBTILL"))
					{
						unk_0x1D208E4A4E1D4FFE(1);
					}
					func_170(&(Local_68.f_469));
					bVar2 = unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iLocal_628, 1);
					if (bVar2)
					{
						unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), joaat("weapon_unarmed"), 1);
					}
					unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 0, 0);
					unk_0x86F1B61A4BF04972(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 15f);
					unk_0xD60DE78AB9B18914(0);
					func_108(0);
					func_196(1, 1, 1, 0);
					unk_0xA8010B7497A9230B(0);
					func_166(23, 1);
					unk_0x28705A5E63C175CC(Local_68.f_2.f_1, 3f, 0);
					iLocal_624 = 2;
				}
				else if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
				{
					if (Local_68.f_469 <= 0)
					{
						Local_68.f_469 = -1;
						func_171(&(Local_68.f_469), 4, "SHR_ROBTILL", 0, 0, 0);
					}
				}
			}
			else
			{
				if (func_27("SHR_ROBTILL"))
				{
					unk_0x1D208E4A4E1D4FFE(1);
				}
				func_170(&(Local_68.f_469));
				iLocal_624 = 0;
			}
			break;
		
		case 2:
			if (unk_0x76B2D234F1895632(Local_68.f_2))
			{
				unk_0x70EE8EFEE355AD29(Local_68.f_2, 0, 0);
				unk_0x2878EC06B3F897A0(Local_68.f_2, 1);
			}
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), unk_0xF919633EBD0639D0(Local_68.f_2.f_1, Local_68.f_2.f_4, -0.75f, 0f, -1f), 1, 0, 0, 1);
				unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), Local_68.f_2.f_4);
				unk_0x33A90AD8FA327B72(&uLocal_566);
				unk_0x94026C1D1DB14225(&uLocal_566);
				unk_0xDCF460AE46C9489C(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xDCF460AE46C9489C(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0, 0, 0, 0);
				unk_0xDCF460AE46C9489C(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x911ECBCE73F8EC3F(uLocal_566);
				unk_0xC2C4A3A9FF2FBFFF(unk_0xE7869D5D7816A9B6(), uLocal_566);
				if (!unk_0xCF686B56FD5328B5(uLocal_625))
				{
					uLocal_625 = unk_0xF90D4D0A9F2F4A42(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x8E0CB5A43A2CA4CB(uLocal_625, unk_0xE7869D5D7816A9B6(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0xB98C70F0FFEA713A(uLocal_625, unk_0xE7869D5D7816A9B6(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0xD2E0A9EDD55F008D(uLocal_625, 35f);
				unk_0x657EEE601EEC4152(uLocal_625, "HAND_SHAKE", 0.1f);
				unk_0x63498CF6CF35C6A2(uLocal_625, 1);
				unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
			}
			iLocal_624 = 3;
			break;
		
		case 3:
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if (!unk_0xCF686B56FD5328B5(uLocal_626))
				{
					uLocal_626 = unk_0xF90D4D0A9F2F4A42(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x8E0CB5A43A2CA4CB(uLocal_626, unk_0xE7869D5D7816A9B6(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0xB98C70F0FFEA713A(uLocal_626, unk_0xE7869D5D7816A9B6(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0xD2E0A9EDD55F008D(uLocal_626, 35f);
				unk_0x657EEE601EEC4152(uLocal_626, "HAND_SHAKE", 0.3f);
				unk_0x7D333E815920766B(uLocal_626, uLocal_625, 8000, 1, 1);
			}
			iLocal_629 = unk_0x9D40BBF80D8F5E8A();
			iLocal_624 = 4;
			break;
		
		case 4:
			if (((unk_0x9D40BBF80D8F5E8A() - iLocal_629) > 4800 || (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))) || unk_0x743D96D854EFA6C5(Local_68.f_2.f_1, 3f) > 0)
			{
				iLocal_624 = 5;
			}
			else if ((unk_0x9D40BBF80D8F5E8A() - iLocal_629) > 4500)
			{
				if (func_195())
				{
					if (!iLocal_583)
					{
						unk_0xCD0E4FEA8B60FCA3("CamPushInNeutral", 0, 0);
						unk_0xCC18B241D266EF14(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_583 = 1;
					}
				}
			}
			else if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && unk_0x23417CDB252083F9(unk_0xE7869D5D7816A9B6(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = unk_0xCB337035DFE5097C(unk_0xE7869D5D7816A9B6(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_627)
					{
						iVar1 = unk_0x0ADD324BC46177EF(10, 51);
						func_194(func_95(), 1, iVar1, 0, 0);
						iLocal_569 = (iLocal_569 + iVar1);
						Local_68.f_28.f_6 = unk_0x2AD909D8CB732A41();
						unk_0xCC18B241D266EF14(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
						iLocal_627 = 1;
					}
				}
				else if (iLocal_627)
				{
					iLocal_627 = 0;
				}
			}
			break;
		
		case 5:
			if (unk_0x76B2D234F1895632(Local_68.f_2))
			{
				unk_0x70EE8EFEE355AD29(Local_68.f_2, 1, 0);
				unk_0x2878EC06B3F897A0(Local_68.f_2, 0);
			}
			unk_0x7FB81B1DD14A3BE4(0);
			unk_0x6EF372C057320AD4(0, 1065353216);
			if (unk_0xCF686B56FD5328B5(uLocal_625))
			{
				unk_0x74FF6D08DE291367(uLocal_625, 0);
			}
			if (unk_0xCF686B56FD5328B5(uLocal_626))
			{
				unk_0x74FF6D08DE291367(uLocal_626, 0);
			}
			unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
			if (!unk_0x76B2D234F1895632(unk_0xA0B1717D806F4901()))
			{
				iVar3 = unk_0xA0B1717D806F4901();
				Var4 = { unk_0x1141852D07400777(iVar3, 1) };
			}
			if (iLocal_628 != joaat("weapon_unarmed") && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), iLocal_628, 1);
			}
			if (unk_0xB519E5386FBF69E5(Local_68.f_162.f_18, 1))
			{
				unk_0x73817D396768E4C6(&(Local_68.f_162.f_18), 1);
			}
			func_193(1, 1, 1);
			func_15(1, 0);
			iLocal_62 = 12;
			func_190();
			func_184(297, 0, 0);
			Local_68.f_468 = 1;
			iLocal_624 = 7;
			break;
		
		case 6:
			if (unk_0xAEF17BDE274A1247())
			{
				unk_0x63498CF6CF35C6A2(uLocal_626, 0);
				unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
				if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
				{
					unk_0xDE31B2587775EDAD(unk_0xE7869D5D7816A9B6());
				}
				if (iLocal_569 < 15)
				{
					iVar1 = unk_0x0ADD324BC46177EF(25, 65);
					func_194(func_95(), 1, iVar1, 0, 0);
					iLocal_569 = (iLocal_569 + iVar1);
				}
				unk_0x2D3BB3EF936C4B76(500);
				iLocal_624 = 5;
			}
			break;
	}
}

void func_184(int iParam0, int iParam1, int iParam2)
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
		func_189((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_99155.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99155.f_8808[iParam0 /*12*/].f_6 == 11 || Global_99155.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99155.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_99155.f_8808[iParam0 /*12*/].f_10 = iParam1;
		Global_99155.f_8808[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_185();
	}
}

void func_185()
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
	Global_98891 = 0;
	Global_98892 = 0;
	Global_98893 = 0;
	Global_98894 = 0;
	Global_98895 = 0;
	Global_98896 = 0;
	Global_98897 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99155.f_8808.f_3853;
	Global_99155.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99155.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99155.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98891++;
					fVar1 = (fVar1 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98892++;
					fVar2 = (fVar2 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98893++;
					fVar3 = (fVar3 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98894++;
					fVar4 = (fVar4 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98895++;
					fVar5 = (fVar5 + (Global_99155.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98896++;
					fVar6 = (fVar6 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98897++;
					fVar7 = (fVar7 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98874 > 0)
	{
		if (Global_98891 == Global_98874)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98875 > 0)
	{
		if (Global_98892 == Global_98875)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98876 > 0)
	{
		if (Global_98893 == Global_98876)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98877 > 0)
	{
		if (Global_98894 == Global_98877)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98878 > 0)
	{
		if (((Global_98895 == Global_98878 || (Global_98878 * 10 / Global_98895) < 41) || Global_98895 > Global_98881) || Global_98895 == Global_98881)
		{
			if (!unk_0xB519E5386FBF69E5(Global_99155.f_8808.f_3856, 14))
			{
				if (Global_98895 == Global_98878)
				{
					unk_0xE4A025C0D4FCCAFA(joaat("num_rndevents_completed"), Global_98878, 0);
					unk_0x9956FB0E4B50ECB8(&(Global_99155.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98879 > 0)
	{
		if (Global_98896 == Global_98879)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98880 > 0)
	{
		if (Global_98897 == Global_98880)
		{
			fVar7 = 5f;
		}
	}
	Global_99155.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98895 > Global_98881 || Global_98895 == Global_98881)
	{
		iVar9 = Global_98881;
	}
	else
	{
		iVar9 = Global_98895;
	}
	unk_0x39DEDCCD70293F58(joaat("num_missions_completed"), Global_98891, 1);
	unk_0x39DEDCCD70293F58(joaat("num_missions_available"), Global_98874, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_completed"), Global_98892, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_available"), Global_98875, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_completed"), Global_98893, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_available"), Global_98876, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_completed"), Global_98894, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_available"), Global_98877, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_available"), Global_98881, 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_completed"), (Global_98897 + Global_98896), 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_available"), (Global_98880 + Global_98879), 1);
	Global_98898 = (Global_98891 * 100 / Global_98874);
	Global_98900 = ((Global_98893 + Global_98892) * 100 / (Global_98876 + Global_98875));
	Global_98899 = ((Global_98894 + iVar9) * 100 / (Global_98877 + Global_98881));
	Global_98901 = ((Global_98896 + Global_98897) * 100 / (Global_98879 + Global_98880));
	unk_0xFF6A346D78DD4938(joaat("total_progress_made"), Global_99155.f_8808.f_3853, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_story_missions"), Global_98898, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_ambient_missions"), Global_98899, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_oddjobs"), Global_98900, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853))
	{
		func_91(13, unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853));
	}
	if (!unk_0x11ED867E5A37BE49())
	{
		if (!Global_69236)
		{
			if (func_188() == 2 == 0 && !unk_0x00AAD79B42B3E036())
			{
				if (unk_0x472ED84D47326927())
				{
					Global_98889 = 0;
				}
				if (!Global_55578)
				{
					func_186();
				}
			}
		}
	}
}

int func_186()
{
	if (func_187(0))
	{
		return 0;
	}
	if (Global_91064.f_8)
	{
		if (Global_91064.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91064.f_10 > 1)
	{
		return 0;
	}
	Global_91064.f_10++;
	return 1;
}

bool func_187(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
}

int func_188()
{
	return Global_25034;
}

int func_189(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_123();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x489ECBF72F3DA469((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xA689D636E73D305A((iParam0 - 0)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x489ECBF72F3DA469((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xA689D636E73D305A((iParam0 - 192)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x489ECBF72F3DA469((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xA689D636E73D305A((iParam0 - 513)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x489ECBF72F3DA469((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xA689D636E73D305A((iParam0 - 705)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xB4BF922F35D7655F((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xA689D636E73D305A((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xB4BF922F35D7655F((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xA689D636E73D305A((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x2655E62E609CEE1A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xA689D636E73D305A((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x2655E62E609CEE1A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xA689D636E73D305A((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x2655E62E609CEE1A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xA689D636E73D305A((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_190()
{
	if (!iLocal_575)
	{
		Global_99155.f_18649[iLocal_568]++;
		Global_99155.f_18649.f_62[iLocal_568] = Local_68.f_1;
		if (func_95() == 0)
		{
			func_191(5);
		}
		iLocal_575 = 1;
	}
}

void func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_192(&Global_87826, 1);
			break;
		
		case 1:
			func_192(&Global_87828, 3);
			break;
		
		case 2:
			func_192(&Global_87832, 1);
			break;
		
		case 3:
			func_192(&Global_87834, 1);
			break;
		
		case 4:
			func_192(&Global_87836, 1);
			break;
		
		case 5:
			func_192(&Global_87838, 1);
			break;
		
		case 6:
			func_192(&Global_87840, 1);
			break;
		
		case 7:
			func_192(&Global_87842, 2);
			break;
		
		case 8:
			func_192(&Global_87845, 1);
			break;
		
		case 9:
			func_192(&Global_87847, 1);
			break;
	}
}

void func_192(var uParam0, int iParam1)
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
			(*uParam0)[iVar0] = unk_0x9D40BBF80D8F5E8A();
		}
		iVar0++;
	}
}

void func_193(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 1, 0);
	}
	unk_0xD60DE78AB9B18914(1);
	func_196(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0xA8010B7497A9230B(1);
		unk_0xE242D0D27B122FAC(1);
	}
	func_166(23, 0);
}

void func_194(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_69(Global_99155.f_32499[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_195()
{
	if (unk_0x08EE17D4722097C7(unk_0x5B93518F6779B7F5()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_196(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xB14E3E3C57569BDB(unk_0x3F80C6638E3A1A90());
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 1);
		func_200(1);
		unk_0x86F04B1FEFFA59AF();
		unk_0x7D5D106C0BC41E4F();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xD6F17BA188A65E8F())
			{
				unk_0xDA09A6E60FE9645E(0);
			}
			if (!func_109())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_199(1, iParam3, iParam2, 0);
		Global_55584 = 1;
		Global_67890 = 1;
		Global_69234 = 1;
	}
	else
	{
		func_200(0);
		unk_0x77B6DFDC1F6D6D54();
		Global_55584 = 0;
		if (bParam1)
		{
			unk_0xDD8068D05776246D();
		}
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 0);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 0);
		func_199(0, iParam3, iParam2, 0);
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !func_197(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 0);
		}
		Global_69234 = 0;
	}
}

int func_197(int iParam0)
{
	if (func_121(iParam0, 0))
	{
		return 1;
	}
	if (func_198())
	{
		if (iParam0 == unk_0x3F80C6638E3A1A90())
		{
			return 1;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_198()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 3);
}

int func_199(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xE5021B3C1EC84FDE() != iParam0 && uParam2)
		{
			unk_0xA0DB703A9F74EAE8(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_200(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 13);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 13);
	}
}

void func_201(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

int func_202(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
			{
				if (Global_14412 == 1)
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_14412 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_14413.f_1 > 3)
	{
		if (Global_14412 == 1)
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

int func_203()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_2))
	{
		if (unk_0xB034B5B185BD9C69(Local_68.f_2) == Local_68.f_185)
		{
			return 1;
		}
		else if (unk_0x22E902D6AF27E232(Local_68.f_2, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x22E902D6AF27E232(Local_68.f_2, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x22E902D6AF27E232(Local_68.f_2, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (unk_0x22E902D6AF27E232(Local_68.f_2, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204()
{
	if (unk_0xA57007F9A665F322())
	{
		return 0;
	}
	if (unk_0x958B4351DD28B142(0, 18) || unk_0x958B4351DD28B142(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_205()
{
	int iVar0;
	
	func_222();
	func_219();
	if (unk_0xD51CFE69539DB6D8(Local_68.f_0))
	{
		unk_0x5E99B63A819500A5(Local_68.f_0, &iVar0, 1);
		if ((iLocal_60 == 1 && iLocal_622 == 2) && ((unk_0xDB3D41842CEA074F(unk_0x3F80C6638E3A1A90()) || func_218()) || func_217()))
		{
			unk_0xE03E82B34235FC17(unk_0x3F80C6638E3A1A90());
			func_15(1, 0);
			iLocal_60 = 9;
		}
	}
	else
	{
		return;
	}
	func_214();
	if (!bLocal_574)
	{
		func_213();
	}
	switch (iLocal_60)
	{
		case 1:
			if (func_288())
			{
				if ((func_20(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1) || (func_178(Local_68.f_2, &(Local_68.f_451)) && !unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))) && iVar0 != joaat("weapon_unarmed"))
				{
					func_212();
					unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
					iLocal_53 = 12;
					iLocal_52 = 3;
					iLocal_60 = 5;
					unk_0x9956FB0E4B50ECB8(&Global_87209, 3);
					func_211();
				}
				if (func_1(Local_68.f_470, 8))
				{
					if (!func_1(Local_68.f_470, 32))
					{
						if (!unk_0xAF437D7C802AB246(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							unk_0xDCF460AE46C9489C(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_53 = 36;
						func_15(1, 0);
						func_210();
						func_279(&(Local_68.f_470), 32);
					}
				}
			}
			break;
		
		case 2:
			if (func_288())
			{
				if (func_178(Local_68.f_2, &(Local_68.f_451)) && iVar0 != joaat("weapon_unarmed"))
				{
					unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
					Local_68.f_2.f_11 = 1;
					func_190();
					iLocal_53 = 12;
					iLocal_52 = 3;
					iLocal_62 = 11;
					iLocal_60 = 3;
					unk_0x9956FB0E4B50ECB8(&Global_87209, 3);
					func_211();
				}
				else if (func_20(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1))
				{
					unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
					func_210();
					func_212();
					iLocal_53 = 12;
					iLocal_60 = 5;
					func_211();
				}
				else if (func_1(Local_68.f_470, 8))
				{
					if (!func_1(Local_68.f_470, 32))
					{
						if (!unk_0xAF437D7C802AB246(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							unk_0xDCF460AE46C9489C(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_53 = 36;
						func_15(1, 0);
						func_210();
						func_279(&(Local_68.f_470), 32);
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_53 >= 13)
			{
				if (!unk_0x2AA9423D1F896887(unk_0xE7869D5D7816A9B6()) && !unk_0x2AA9423D1F896887(Local_68.f_2))
				{
					iLocal_53 = 15;
					iLocal_58 = 5;
					iLocal_62 = 12;
					iLocal_60 = 4;
				}
			}
			break;
		
		case 4:
			if (func_20(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1) && func_288())
			{
				func_212();
				if (Local_68.f_2.f_12)
				{
					iLocal_53 = 22;
				}
				else
				{
					iLocal_53 = 16;
				}
				iLocal_60 = 5;
			}
			break;
		
		case 5:
			if (Local_68.f_486 >= 0)
			{
				if (func_20(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1) && func_288())
				{
					if (unk_0x47B2F09FC779F5CD(Local_68.f_486) && !Local_68.f_467)
					{
						iLocal_53 = 33;
						Local_68.f_467 = 1;
					}
				}
			}
			if (iLocal_55 >= 1 && iLocal_55 < 7)
			{
				unk_0xE03E82B34235FC17(unk_0xBFAE5F9DEC53DAE2());
				if (func_208(Local_68.f_2, 0, 1, 0, 1, 1) || !unk_0x47B2F09FC779F5CD(Local_68.f_486))
				{
					iLocal_60 = 6;
				}
			}
			break;
		
		case 6:
			if (iLocal_56 != 3 && iLocal_56 != 4)
			{
				iLocal_56 = 4;
			}
			unk_0x73817D396768E4C6(&Global_87209, 3);
			if (!unk_0x8E2CF6ACCED3BD0F(Local_68.f_2))
			{
				func_6();
				iLocal_60 = 0;
			}
			break;
		
		case 7:
			if (!unk_0x8E2CF6ACCED3BD0F(Local_68.f_2))
			{
				func_207();
				iLocal_53 = 36;
				func_15(1, 0);
				func_279(&(Local_68.f_470), 32);
				iLocal_58 = 7;
				iLocal_60 = 8;
			}
			break;
		
		case 8:
			if (((func_20(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1) || func_178(Local_68.f_2, &(Local_68.f_451))) && func_288()) && iVar0 != joaat("weapon_unarmed"))
			{
				if (!Local_68.f_2.f_12)
				{
					iLocal_53 = 10;
					iLocal_60 = 9;
				}
				else
				{
					func_18();
					iLocal_53 = 11;
					iLocal_60 = 0;
				}
				Local_68.f_2.f_13 = 0;
			}
			break;
		
		case 9:
			func_6();
			iLocal_60 = 12;
			break;
		
		case 10:
			if ((((func_20(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1) || func_178(Local_68.f_2, &(Local_68.f_451))) && func_288()) && iVar0 != joaat("weapon_unarmed")) && !func_14(&(Local_68.f_480)))
			{
				func_11(&(Local_68.f_480));
				if (unk_0x8E2CF6ACCED3BD0F(Local_68.f_2))
				{
					func_6();
				}
				iLocal_53 = 23;
			}
			else if (func_40(&(Local_68.f_480)) > 10f)
			{
				if (!unk_0xAF437D7C802AB246(Local_68.f_2))
				{
					unk_0x4B79E06845D63B96(Local_68.f_2, unk_0xE7869D5D7816A9B6(), 100f, -1, 0, 0);
				}
				iLocal_60 = 12;
			}
			break;
		
		case 11:
			func_206();
			iLocal_60 = 12;
			break;
	}
}

void func_206()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_2))
	{
		unk_0x9BEE7E791BC4D38B(Local_68.f_2, 0);
	}
}

void func_207()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_2))
	{
		unk_0x6A8BCE61F660B8D0(Local_68.f_2, Local_68.f_0, -1, 0, 2);
	}
}

int func_208(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = unk_0x8219941CC4732B36(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = unk_0x8219941CC4732B36(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = unk_0xA0B1717D806F4901();
		if (!unk_0x76B2D234F1895632(iVar0))
		{
			if (unk_0x915685CA559C211B(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0x915685CA559C211B(iParam0, unk_0xE7869D5D7816A9B6(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x915685CA559C211B(iParam0, unk_0xE7869D5D7816A9B6(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xA0B1717D806F4901();
		if (!unk_0x76B2D234F1895632(iVar1))
		{
			if (unk_0x915685CA559C211B(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x76B2D234F1895632(iParam0))
		{
			if (unk_0x4231F56FA5885AE9(iParam0))
			{
				if (unk_0x9D84FB8703BD7832(iParam0) == unk_0xE7869D5D7816A9B6())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x3761EA7F8628B81A(iParam0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0xDB3D41842CEA074F(unk_0x3F80C6638E3A1A90()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xAA6E5BDAAA361C61(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x7048B4332456CDFF(iParam0))
		{
			return 1;
		}
	}
	if (func_209(unk_0xE7869D5D7816A9B6(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x8E2CF6ACCED3BD0F(iParam0) && func_179(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x51374A0BB2871E6E(iParam0, 0))
		{
			if (unk_0x3C1B1C07A878AE1D(unk_0xE7869D5D7816A9B6(), unk_0xF0295FF51F2D7803(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x3C1B1C07A878AE1D(unk_0xE7869D5D7816A9B6(), iParam0))
		{
			return 1;
		}
		if (!unk_0x76B2D234F1895632(iParam1))
		{
			if (unk_0x915685CA559C211B(iParam1, unk_0xE7869D5D7816A9B6(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_209(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x5E99B63A819500A5(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xD0C9DCB982CB2D78(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(iParam0, 1), unk_0x1141852D07400777(iParam1, 1)) < 2.5f)
			{
				if (unk_0xFA68268DB708808B(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_210()
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()) && func_288())
	{
		iVar3 = unk_0x312FA2EB3948B47C(unk_0xE7869D5D7816A9B6(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((((uVar0[iVar4] != unk_0xE7869D5D7816A9B6() && uVar0[iVar4] != Local_68.f_2) && !unk_0xAF437D7C802AB246(uVar0[iVar4])) && !unk_0x28D33422BA6C479D(uVar0[iVar4])) && !unk_0x0930CF2B56CCE2B8(uVar0[iVar4], 0))
			{
				unk_0x20BB4B94CC6DDC9A(uVar0[iVar4], 1, 1);
				unk_0x4B79E06845D63B96(uVar0[iVar4], unk_0xE7869D5D7816A9B6(), 100f, -1, 0, 0);
			}
			iVar4++;
		}
	}
}

void func_211()
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()) && func_288())
	{
		iVar3 = unk_0x312FA2EB3948B47C(unk_0xE7869D5D7816A9B6(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((uVar0[iVar4] != unk_0xE7869D5D7816A9B6() && uVar0[iVar4] != Local_68.f_2) && !unk_0x28D33422BA6C479D(uVar0[iVar4]))
			{
				unk_0x20BB4B94CC6DDC9A(uVar0[iVar4], 1, 1);
				unk_0x33A90AD8FA327B72(&uLocal_566);
				unk_0x94026C1D1DB14225(&uLocal_566);
				unk_0xC2EA5B4B2052D2F1(0, 5000);
				unk_0x4B79E06845D63B96(0, unk_0xE7869D5D7816A9B6(), 100f, -1, 0, 0);
				unk_0x911ECBCE73F8EC3F(uLocal_566);
				unk_0xC2C4A3A9FF2FBFFF(uVar0[iVar4], uLocal_566);
			}
			iVar4++;
		}
	}
}

void func_212()
{
	if (func_24(Local_68.f_0) == joaat("weapon_rpg"))
	{
		Local_68.f_458 = 1;
	}
	else if (func_24(Local_68.f_0) == joaat("weapon_knife"))
	{
		Local_68.f_459 = 1;
	}
	else if (((func_24(Local_68.f_0) == joaat("weapon_hammer") || func_24(Local_68.f_0) == joaat("weapon_crowbar")) || func_24(Local_68.f_0) == joaat("weapon_bat")) || func_24(Local_68.f_0) == joaat("weapon_bottle"))
	{
		Local_68.f_460 = 1;
	}
	else if ((func_24(Local_68.f_0) == joaat("weapon_grenade") || func_24(Local_68.f_0) == joaat("weapon_smokegrenade")) || func_24(Local_68.f_0) == joaat("weapon_molotov"))
	{
		Local_68.f_461 = 1;
	}
	else if (func_24(Local_68.f_0) == joaat("weapon_stickybomb"))
	{
		Local_68.f_462 = 1;
	}
	iLocal_62 = 12;
	func_190();
	iLocal_61 = 2;
	iLocal_65 = 1;
	iLocal_64 = 6;
	Local_68.f_2.f_13 = 0;
}

void func_213()
{
	if (iLocal_55 == 0)
	{
		if (!unk_0x76B2D234F1895632(Local_68.f_2))
		{
			switch (iLocal_58)
			{
				case 1:
					iLocal_58 = 0;
					break;
				
				case 2:
					unk_0xDCF460AE46C9489C(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_17, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 3:
					unk_0xDCF460AE46C9489C(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_18, 8f, -4f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 4:
					unk_0xDCF460AE46C9489C(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_19, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 5:
					unk_0xDCF460AE46C9489C(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_20, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 6:
					iLocal_58 = 0;
					break;
				
				case 7:
					unk_0xDCF460AE46C9489C(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_21, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				}
			}
	}
}

void func_214()
{
	switch (iLocal_59)
	{
		case 1:
			func_207();
			iLocal_59 = 2;
			break;
		
		case 2:
			if (iLocal_55 == 2)
			{
				func_216();
				Local_68.f_2.f_13 = 0;
				iLocal_59 = 3;
			}
			if ((func_44() || func_43()) && !Local_68.f_2.f_13)
			{
				Local_68.f_2.f_13 = 1;
			}
			if (!Local_68.f_2.f_14)
			{
				if (!unk_0xAF437D7C802AB246(Local_68.f_2) && unk_0xF05AC1C00BC1230B(Local_68.f_2))
				{
					Local_68.f_2.f_14 = 1;
				}
			}
			if ((Local_68.f_2.f_13 && !unk_0xAF437D7C802AB246(Local_68.f_2)) && !iLocal_60 == 12)
			{
				func_215();
			}
			break;
		
		case 3:
			if (iLocal_55 >= 7)
			{
				func_207();
				iLocal_59 = 4;
			}
			break;
	}
}

void func_215()
{
	if ((unk_0x9D40BBF80D8F5E8A() - Local_68.f_2.f_10) > 5000)
	{
		unk_0x33A90AD8FA327B72(&(Local_68.f_2.f_24));
		unk_0x94026C1D1DB14225(&(Local_68.f_2.f_24));
		unk_0x58F62EDF6111D598(0, Local_68.f_0, 0);
		unk_0x6A8BCE61F660B8D0(0, Local_68.f_0, -1, 0, 2);
		unk_0x911ECBCE73F8EC3F(Local_68.f_2.f_24);
		unk_0xC2C4A3A9FF2FBFFF(Local_68.f_2, Local_68.f_2.f_24);
		Local_68.f_2.f_10 = unk_0x9D40BBF80D8F5E8A();
	}
}

void func_216()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_2))
	{
		unk_0x44C7AD5B54E267EE(Local_68.f_2);
	}
}

int func_217()
{
	if (unk_0x6018DB69EB3D81CB(Local_68.f_186, Local_68.f_189, Local_68.f_192, 1))
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	if (unk_0xDDCD1686C0C8CD63(-1, Local_68.f_186, Local_68.f_189, Local_68.f_192))
	{
		return 1;
	}
	return 0;
}

void func_219()
{
	if (!Local_68.f_465)
	{
		if (func_220())
		{
			if (!func_14(&(Local_68.f_474)))
			{
				func_11(&(Local_68.f_474));
			}
			else if (func_180(&(Local_68.f_474), 1f))
			{
				Local_68.f_465 = 1;
				iLocal_53 = 26;
				if (!unk_0xAF437D7C802AB246(Local_68.f_2))
				{
					unk_0x4B79E06845D63B96(Local_68.f_2, unk_0xE7869D5D7816A9B6(), 100f, -1, 0, 0);
					func_15(1, 0);
				}
			}
		}
		else if (func_14(&(Local_68.f_474)))
		{
			func_39(&(Local_68.f_474));
		}
	}
}

int func_220()
{
	int iVar0;
	
	if (!unk_0x76B2D234F1895632(Local_68.f_0))
	{
		if (func_221())
		{
			unk_0x5E99B63A819500A5(Local_68.f_0, &iVar0, 1);
			if (iVar0 == joaat("weapon_petrolcan"))
			{
				if (unk_0xD0C9DCB982CB2D78(Local_68.f_0))
				{
					if (unk_0xFA68268DB708808B(Local_68.f_2, Local_68.f_0, 180f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_221()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_0))
	{
		if (unk_0x22E902D6AF27E232(Local_68.f_0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_222()
{
	if (iLocal_60 != 12)
	{
		if (!unk_0x76B2D234F1895632(Local_68.f_2))
		{
			if (unk_0xF05AC1C00BC1230B(Local_68.f_2))
			{
				unk_0x4B79E06845D63B96(Local_68.f_2, Local_68.f_0, 100f, -1, 0, 0);
				iLocal_60 = 12;
				iLocal_59 = 4;
				iLocal_58 = 8;
				iLocal_62 = 15;
				if (iLocal_65 == 1)
				{
					iLocal_65 = 2;
				}
				else
				{
					iLocal_65 = 3;
				}
				iLocal_64 = 13;
				iLocal_53 = 27;
				if (!Local_68.f_2.f_14)
				{
					Local_68.f_2.f_14 = 1;
				}
			}
		}
	}
}

void func_223()
{
	switch (iLocal_57)
	{
		case 1:
			if (Local_68.f_486 >= 0)
			{
				if (unk_0x47B2F09FC779F5CD(Local_68.f_486))
				{
					if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) > 0.876f)
					{
						iLocal_57 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_68.f_486 >= 0)
			{
				if (unk_0x47B2F09FC779F5CD(Local_68.f_486))
				{
					if (unk_0x4D221DFBB84DCF0B(Local_68.f_486) > 0.894f || (unk_0x4D221DFBB84DCF0B(Local_68.f_486) > 0.871f && unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(Local_68.f_28, 1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1)) < 1f))
					{
						iLocal_57 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_15(1, 0);
			func_224(0);
			unk_0x2E9DAE56D293B951(Local_68.f_28, 0, 0);
			iLocal_57 = 5;
			break;
		
		case 4:
			func_15(1, 0);
			func_224(1);
			unk_0x60365B5AF8BF1FFA(Local_68.f_28, 0, 0);
			iLocal_57 = 5;
			break;
		
		case 5:
			if (unk_0x6CE07ABFB69A4990(Local_68.f_28, unk_0xE7869D5D7816A9B6()))
			{
				func_194(func_95(), 1, iLocal_569, 0, 0);
				unk_0x60365B5AF8BF1FFA(Local_68.f_28, 0, 0);
				if (unk_0xD11595488376CB53(Local_68.f_28.f_2))
				{
					unk_0x5B62CAB9B0D6ABF1(&(Local_68.f_28.f_2));
				}
				if (iLocal_62 != 12)
				{
					iLocal_62 = 12;
				}
				func_184(297, 0, 0);
				Local_68.f_468 = 1;
				Local_68.f_28.f_6 = unk_0x2AD909D8CB732A41();
				unk_0xCC18B241D266EF14(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
				func_12(&(Local_68.f_28.f_15));
				iLocal_57 = 6;
			}
			else if (!unk_0x76B2D234F1895632(Local_68.f_28) && unk_0xB756E8D139BDE124(Local_68.f_28))
			{
			}
			break;
		
		case 6:
			if (func_8(&(Local_68.f_28.f_15)) > 2.5f)
			{
				if (unk_0xD51CFE69539DB6D8(Local_68.f_28) && unk_0x6CE07ABFB69A4990(Local_68.f_28, unk_0xE7869D5D7816A9B6()))
				{
					unk_0x27B54A887EC71B05(unk_0xE7869D5D7816A9B6(), 1, 1);
					unk_0xD4E454973E16D31B(&(Local_68.f_28));
				}
				iLocal_57 = 7;
			}
			break;
	}
}

void func_224(bool bParam0)
{
	Local_68.f_28.f_3 = 0;
	unk_0x9956FB0E4B50ECB8(&(Local_68.f_28.f_3), 3);
	unk_0x9956FB0E4B50ECB8(&(Local_68.f_28.f_3), 4);
	if (!bParam0)
	{
		iLocal_569 = unk_0x0ADD324BC46177EF(Local_68.f_28.f_4, Local_68.f_28.f_5);
		if (!unk_0xD11595488376CB53(Local_68.f_28.f_2))
		{
			Local_68.f_28.f_2 = func_227(Local_68.f_28);
			unk_0xA887303978A245B8(Local_68.f_28.f_2, 2);
		}
		unk_0xE9AB8A0855082C3D(Local_68.f_28, -0.2f, 1);
	}
	else
	{
		iLocal_569 = unk_0x0ADD324BC46177EF(50, Local_68.f_28.f_4);
		Local_68.f_28.f_1 = unk_0x9052F866958BB3C9(joaat("pickup_money_variable"), unk_0x1141852D07400777(Local_68.f_28, 1), Local_68.f_28.f_3, iLocal_569, 1, 0);
		if (!unk_0xD11595488376CB53(Local_68.f_28.f_2))
		{
			Local_68.f_28.f_2 = func_225(Local_68.f_28.f_1);
		}
	}
	Local_68.f_28.f_14 = 1;
}

int func_225(var uParam0)
{
	var uVar0;
	
	if (!unk_0xA2BDDAEAA1C5ED8F(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x2A299ED1CFE48287(uParam0);
	unk_0xFC630C7120A34CE4(uVar0, func_226(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
	return uVar0;
}

float func_226(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_227(var uParam0)
{
	return func_228(uParam0, 1, 0);
}

int func_228(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD51CFE69539DB6D8(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF800CF9298ABC708(iParam0);
	if (unk_0x8C1ED5BB2888BA25(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_226(unk_0x00AAD79B42B3E036(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x4ADC112587E95B61(uVar0, iParam1);
		}
		else
		{
			unk_0xA887303978A245B8(uVar0, 2);
		}
	}
	else if (unk_0x41B17741CACC905E(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_226(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
		unk_0x4ADC112587E95B61(uVar0, iParam1);
	}
	else if (unk_0xC2F1E05878620398(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_226(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_229()
{
	int iVar0;
	int iVar1;
	
	if (Local_68.f_464)
	{
		switch (iLocal_61)
		{
			case 2:
				if (func_1(Local_68.f_470, 4))
				{
					func_233();
					Local_68.f_46.f_39 = unk_0x9D40BBF80D8F5E8A();
					iLocal_61 = 3;
				}
				break;
			
			case 3:
				if (unk_0x9D40BBF80D8F5E8A() - Local_68.f_46.f_39) > unk_0x0ADD324BC46177EF(1000, 3000)
				{
					if (unk_0xC45A34912542C4EB(Local_68.f_46.f_4[0], 0))
					{
						unk_0x821446383BC10D9B(Local_68.f_46.f_4[0], 1);
					}
					iLocal_61 = 4;
				}
				break;
			
			case 4:
				if (func_232() && func_231())
				{
					iLocal_61 = 5;
				}
				break;
			
			case 5:
				iLocal_53 = 24;
				func_15(1, 0);
				iLocal_61 = 6;
				break;
			
			case 6:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if ((((unk_0xAF437D7C802AB246(Local_68.f_46[iVar0]) || (!unk_0x76B2D234F1895632(Local_68.f_46[iVar0]) && unk_0x3D06E0340496855A(Local_68.f_46[iVar0], 0, 2))) || unk_0xAF437D7C802AB246(Local_68.f_2)) || (!unk_0x76B2D234F1895632(Local_68.f_2) && unk_0x3D06E0340496855A(Local_68.f_2, 0, 2))) || func_20(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1))
					{
						func_15(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0xAF437D7C802AB246(Local_68.f_46[iVar1]))
							{
								unk_0x13C351F151D49F89(Local_68.f_46[iVar1], unk_0xE7869D5D7816A9B6(), 0, 16);
								unk_0x9BEE7E791BC4D38B(Local_68.f_46[iVar1], 0);
							}
							iVar1++;
						}
						iLocal_61 = 0;
					}
					iVar0++;
				}
				break;
			
			case 7:
				func_230();
				iLocal_61 = 0;
				break;
			}
	}
}

void func_230()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x76B2D234F1895632(Local_68.f_46[iVar0]))
		{
			unk_0x9BEE7E791BC4D38B(Local_68.f_46[iVar0], 0);
		}
		iVar0++;
	}
}

int func_231()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x76B2D234F1895632(Local_68.f_46[iVar0]))
		{
			if (!unk_0x51374A0BB2871E6E(Local_68.f_46[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_232()
{
	int iVar0;
	
	if (!unk_0x76B2D234F1895632(Local_68.f_0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0x76B2D234F1895632(Local_68.f_46[iVar0]))
			{
				if (!unk_0x51AAB57E2FC16B14(Local_68.f_46[iVar0]))
				{
					return 1;
				}
			}
			if (!unk_0x76B2D234F1895632(Local_68.f_46.f_4[iVar0]))
			{
				if (!unk_0x51AAB57E2FC16B14(Local_68.f_46.f_4[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_233()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_68.f_46[iVar0] = unk_0xA7F4088D9A2629CC(6, Local_68.f_46.f_26, Local_68.f_46.f_8[iVar0 /*3*/], Local_68.f_46.f_18[iVar0], 1, 1);
		unk_0x20BB4B94CC6DDC9A(Local_68.f_46[iVar0], 1, 0);
		unk_0x9BEE7E791BC4D38B(Local_68.f_46[iVar0], 1);
		Local_68.f_46.f_4[iVar0] = unk_0xD504D1FF5DD2FFD7(Local_68.f_46.f_27, Local_68.f_46.f_8[iVar0 /*3*/], Local_68.f_46.f_18[iVar0], 1, 1);
		unk_0x20BB4B94CC6DDC9A(Local_68.f_46.f_4[iVar0], 1, 0);
		if (!(unk_0x76B2D234F1895632(Local_68.f_46[iVar0]) && unk_0x76B2D234F1895632(Local_68.f_46.f_4[iVar0])))
		{
			unk_0x0CC1C59D57D7212B(Local_68.f_46[iVar0], Local_68.f_46.f_4[iVar0], -1);
			unk_0xCC897563F1971D6A(Local_68.f_46[iVar0], joaat("weapon_pistol"), 99, 0, 1);
		}
		unk_0x94026C1D1DB14225(&(Local_68.f_46.f_35[iVar0]));
		unk_0x8543F365CDBCAAAD(0, Local_68.f_46.f_4[iVar0], Local_68.f_46.f_22, (unk_0x94DAC33E95329409(Local_68.f_46.f_4[iVar0]) - 8f), 1, Local_68.f_46.f_27, 786981, Local_68.f_46.f_25, -1f);
		unk_0xCD7A5BCC47D00FB2(0, 0, 0);
		unk_0xA02736B50802C8BB(0, Local_68.f_0, -1, 0);
		unk_0x911ECBCE73F8EC3F(Local_68.f_46.f_35[iVar0]);
		unk_0xC2C4A3A9FF2FBFFF(Local_68.f_46[iVar0], Local_68.f_46.f_35[iVar0]);
		iVar0++;
	}
}

void func_234()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(Local_68.f_0))
	{
		unk_0x5E99B63A819500A5(Local_68.f_0, &iVar0, 1);
	}
	else
	{
		return;
	}
	iVar1 = 0;
	switch (iLocal_62)
	{
		case 1:
			iLocal_62 = 6;
			break;
		
		case 2:
			iLocal_53 = 2;
			iLocal_62 = 5;
			break;
		
		case 3:
			iLocal_53 = 3;
			iLocal_62 = 5;
			break;
		
		case 4:
			iLocal_53 = 4;
			iLocal_62 = 5;
			break;
		
		case 5:
			if (((((func_24(Local_68.f_0) != joaat("weapon_unarmed") && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_bottle")) && func_288())
			{
				iLocal_62 = 7;
			}
			break;
		
		case 6:
			if (func_24(Local_68.f_0) != joaat("weapon_unarmed") && func_288())
			{
				if (iVar0 == joaat("weapon_bat"))
				{
					iLocal_62 = 8;
				}
				else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
				{
					iLocal_62 = 9;
				}
				else if (iVar0 == joaat("weapon_stickybomb"))
				{
					iLocal_62 = 10;
				}
				else if ((iVar0 != joaat("weapon_petrolcan") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_briefcase"))
				{
					iLocal_62 = 7;
				}
			}
			break;
		
		case 7:
			iLocal_53 = 5;
			iLocal_58 = 3;
			iLocal_62 = 15;
			break;
		
		case 8:
			iLocal_53 = 2;
			iLocal_58 = 2;
			iLocal_62 = 5;
			break;
		
		case 9:
			iLocal_53 = 3;
			iLocal_58 = 2;
			iLocal_62 = 5;
			break;
		
		case 10:
			iLocal_53 = 4;
			iLocal_58 = 2;
			iLocal_62 = 5;
			break;
		
		case 11:
			if (func_20(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1))
			{
				func_212();
				iLocal_60 = 5;
			}
			break;
		
		case 12:
			if (!func_288())
			{
				if (!Local_68.f_464)
				{
					iLocal_64 = 9;
					iLocal_62 = 15;
				}
				else
				{
					iLocal_62 = 13;
				}
			}
			break;
		
		case 13:
			if (unk_0xD4F0FC8FFEDE152B(Local_68.f_0) < 0.1f && !func_236())
			{
				func_235();
				iLocal_62 = 14;
			}
			else if (func_236() && !func_288())
			{
				iLocal_62 = 14;
			}
			break;
		
		case 14:
			if (func_236() && !func_288())
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!unk_0xAF437D7C802AB246(Local_68.f_46[iVar1]))
					{
						unk_0x13C351F151D49F89(Local_68.f_46[iVar1], unk_0xE7869D5D7816A9B6(), 0, 16);
						unk_0x9BEE7E791BC4D38B(Local_68.f_46[iVar1], 0);
					}
					iVar1++;
				}
				iLocal_64 = 9;
				iLocal_62 = 15;
			}
			break;
	}
}

void func_235()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x76B2D234F1895632(Local_68.f_46[iVar0]))
		{
			if (!unk_0x56EC82A742FF9EA5(Local_68.f_46[iVar0]))
			{
				unk_0xFA2C5C2D054C888E(Local_68.f_46[iVar0]);
				unk_0xF174FDF3B9BA09A3(Local_68.f_46[iVar0], Local_68.f_0);
			}
		}
		iVar0++;
	}
}

int func_236()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_0))
	{
		if (unk_0x22E902D6AF27E232(Local_68.f_0, Local_68.f_46.f_28, Local_68.f_46.f_31, Local_68.f_46.f_34, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_237()
{
	switch (iLocal_65)
	{
		case 0:
			if (!iLocal_581)
			{
				if (func_238())
				{
					iLocal_53 = 9;
					iLocal_60 = 7;
					iLocal_52 = 3;
					iLocal_64 = 13;
					iLocal_65 = 3;
					iLocal_581 = 1;
				}
			}
			break;
		
		case 1:
			break;
	}
}

int func_238()
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0xD51CFE69539DB6D8(Local_68.f_0))
	{
		unk_0x5E99B63A819500A5(Local_68.f_0, &iVar0, 1);
	}
	else
	{
		return 0;
	}
	if (!func_1(Local_68.f_470, 128))
	{
		if ((unk_0x8E2CF6ACCED3BD0F(Local_68.f_2) || (unk_0x915685CA559C211B(Local_68.f_2, Local_68.f_0, 1) && iVar0 == joaat("weapon_unarmed"))) || func_239(Local_68.f_2, Local_68.f_2.f_1, 1) > 1.15f)
		{
			if (unk_0x8E2CF6ACCED3BD0F(Local_68.f_2))
			{
			}
			if (unk_0x915685CA559C211B(Local_68.f_2, Local_68.f_0, 1) && iVar0 == joaat("weapon_unarmed"))
			{
			}
			if (func_239(Local_68.f_2, Local_68.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!unk_0x3761EA7F8628B81A(Local_68.f_2, Local_68.f_2.f_1, 0.35f, 0.35f, 1f, 0, 1, 0))
			{
				Var1 = { unk_0x1141852D07400777(Local_68.f_2, 1) };
				Var1 = { Local_68.f_2.f_1 };
			}
			return 1;
		}
	}
	return 0;
}

float func_239(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x76B2D234F1895632(uParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Param1, iParam4);
}

void func_240()
{
	switch (iLocal_63)
	{
		case 0:
			if (func_268())
			{
				iLocal_63 = 1;
			}
			break;
		
		case 1:
			func_261();
			iLocal_63 = 2;
			break;
		
		case 2:
			func_257();
			iLocal_63 = 3;
			break;
		
		case 3:
			if (func_252())
			{
				iLocal_63 = 4;
			}
			break;
		
		case 4:
			func_241();
			unk_0xE03E82B34235FC17(unk_0x3F80C6638E3A1A90());
			iLocal_67 = 1;
			break;
	}
}

void func_241()
{
	func_245();
	func_244();
	func_243();
	if (unk_0x4443D8D533ACB547(Local_68.f_185))
	{
		unk_0x6818FB8C56DEFA06(Local_68.f_2, Local_68.f_185);
		unk_0x6818FB8C56DEFA06(Local_68.f_28, Local_68.f_185);
		if (!bLocal_574)
		{
			unk_0x6818FB8C56DEFA06(Local_68.f_96.f_1, Local_68.f_185);
		}
	}
	func_242();
}

void func_242()
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
	
	iVar0 = unk_0x0ADD324BC46177EF(1, 11);
	iVar1 = unk_0x0ADD324BC46177EF(1, 5);
	iVar2 = unk_0x0ADD324BC46177EF(1, 5);
	iVar3 = unk_0x0ADD324BC46177EF(1, 3);
	iVar4 = unk_0x0ADD324BC46177EF(1, 6);
	iVar5 = unk_0x0ADD324BC46177EF(1, 4);
	iVar6 = unk_0x0ADD324BC46177EF(1, 5);
	iVar7 = unk_0x0ADD324BC46177EF(1, 4);
	iVar8 = unk_0x0ADD324BC46177EF(1, 4);
	iVar9 = unk_0x0ADD324BC46177EF(1, 5);
	iVar10 = unk_0x0ADD324BC46177EF(1, 5);
	iVar11 = unk_0x0ADD324BC46177EF(1, 5);
	iVar12 = unk_0x0ADD324BC46177EF(1, 5);
	iVar13 = unk_0x0ADD324BC46177EF(1, 9);
	iVar14 = unk_0x0ADD324BC46177EF(1, 3);
	iVar15 = unk_0x0ADD324BC46177EF(1, 5);
	iVar16 = unk_0x0ADD324BC46177EF(1, 3);
	iVar17 = unk_0x0ADD324BC46177EF(1, 6);
	iVar18 = unk_0x0ADD324BC46177EF(1, 5);
	iVar19 = unk_0x0ADD324BC46177EF(1, 4);
	iVar20 = unk_0x0ADD324BC46177EF(1, 4);
	iVar21 = unk_0x0ADD324BC46177EF(1, 4);
	iVar22 = unk_0x0ADD324BC46177EF(1, 6);
	iVar23 = unk_0x0ADD324BC46177EF(1, 6);
	iVar24 = unk_0x0ADD324BC46177EF(1, 6);
	iVar25 = unk_0x0ADD324BC46177EF(1, 6);
	iVar26 = unk_0x0ADD324BC46177EF(1, 4);
	iVar27 = unk_0x0ADD324BC46177EF(1, 3);
	iVar28 = unk_0x0ADD324BC46177EF(1, 4);
	iVar29 = unk_0x0ADD324BC46177EF(1, 4);
	if (func_95() == 0)
	{
		switch (iVar12)
		{
			case 1:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_1";
				break;
			
			case 2:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_2";
				break;
			
			case 3:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_3";
				break;
			
			case 4:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_68.f_221.f_220 = "OJSR_COPS_1";
				break;
			
			case 2:
				Local_68.f_221.f_220 = "OJSR_COPS_2";
				break;
			
			case 3:
				Local_68.f_221.f_220 = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_1";
				break;
			
			case 2:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (func_95() == 1)
	{
		switch (iVar12)
		{
			case 1:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_5";
				break;
			
			case 2:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_6";
				break;
			
			case 3:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_7";
				break;
			
			case 4:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_68.f_221.f_220 = "OJSR_COPS_5";
				break;
			
			case 2:
				Local_68.f_221.f_220 = "OJSR_COPS_6";
				break;
			
			case 3:
				Local_68.f_221.f_220 = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_3";
				break;
			
			case 2:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (func_95() == 2)
	{
		switch (iVar12)
		{
			case 1:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_9";
				break;
			
			case 2:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_10";
				break;
			
			case 3:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_11";
				break;
			
			case 4:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_68.f_221.f_220 = "OJSR_COPS_9";
				break;
			
			case 2:
				Local_68.f_221.f_220 = "OJSR_COPS_10";
				break;
			
			case 3:
				Local_68.f_221.f_220 = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_5";
				break;
			
			case 2:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 1:
			Local_68.f_221.f_198 = "OJSR_GREET_1";
			break;
		
		case 2:
			Local_68.f_221.f_198 = "OJSR_GREET_2";
			break;
		
		case 3:
			Local_68.f_221.f_198 = "OJSR_GREET_3";
			break;
		
		case 4:
			Local_68.f_221.f_198 = "OJSR_GREET_4";
			break;
		
		case 5:
			Local_68.f_221.f_198 = "OJSR_GREET_5";
			break;
		
		case 6:
			Local_68.f_221.f_198 = "OJSR_GREET_6";
			break;
		
		case 7:
			Local_68.f_221.f_198 = "OJSR_GREET_7";
			break;
		
		case 8:
			Local_68.f_221.f_198 = "OJSR_GREET_8";
			break;
		
		case 9:
			Local_68.f_221.f_198 = "OJSR_GREET_9";
			break;
		
		case 10:
			Local_68.f_221.f_198 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 1:
			Local_68.f_221.f_199 = "OJSR_BATEQ_1";
			break;
		
		case 2:
			Local_68.f_221.f_199 = "OJSR_BATEQ_2";
			break;
		
		case 3:
			Local_68.f_221.f_199 = "OJSR_BATEQ_3";
			break;
		
		case 4:
			Local_68.f_221.f_199 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 1:
			Local_68.f_221.f_200 = "OJSR_TOOLEQ_1";
			break;
		
		case 2:
			Local_68.f_221.f_200 = "OJSR_TOOLEQ_2";
			break;
		
		case 3:
			Local_68.f_221.f_200 = "OJSR_TOOLEQ_3";
			break;
		
		case 4:
			Local_68.f_221.f_200 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 1:
			Local_68.f_221.f_201 = "OJSR_STICKEQ_1";
			break;
		
		case 2:
			Local_68.f_221.f_201 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 1:
			Local_68.f_221.f_202 = "OJSR_WORRY_1";
			break;
		
		case 2:
			Local_68.f_221.f_202 = "OJSR_WORRY_2";
			break;
		
		case 3:
			Local_68.f_221.f_202 = "OJSR_WORRY_3";
			break;
		
		case 4:
			Local_68.f_221.f_202 = "OJSR_WORRY_4";
			break;
		
		case 5:
			Local_68.f_221.f_202 = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 1:
			Local_68.f_221.f_203 = "OJSR_SHOCK_1";
			break;
		
		case 2:
			Local_68.f_221.f_203 = "OJSR_SHOCK_2";
			break;
		
		case 3:
			Local_68.f_221.f_203 = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 1:
			Local_68.f_221.f_204 = "OJSR_STUBBRN_1";
			break;
		
		case 2:
			Local_68.f_221.f_204 = "OJSR_STUBBRN_2";
			break;
		
		case 3:
			Local_68.f_221.f_204 = "OJSR_STUBBRN_3";
			break;
		
		case 4:
			Local_68.f_221.f_204 = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 1:
			Local_68.f_221.f_205 = "OJSR_COUNTER_1";
			break;
		
		case 2:
			Local_68.f_221.f_205 = "OJSR_COUNTER_2";
			break;
		
		case 3:
			Local_68.f_221.f_205 = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 1:
			Local_68.f_221.f_206 = "OJSR_BACKRM_1";
			break;
		
		case 2:
			Local_68.f_221.f_206 = "OJSR_BACKRM_2";
			break;
		
		case 3:
			Local_68.f_221.f_206 = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 1:
			Local_68.f_221.f_207 = "OJSR_BUMP_1";
			break;
		
		case 2:
			Local_68.f_221.f_207 = "OJSR_BUMP_2";
			break;
		
		case 3:
			Local_68.f_221.f_207 = "OJSR_BUMP_3";
			break;
		
		case 4:
			Local_68.f_221.f_207 = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 1:
			Local_68.f_221.f_208 = "OJSR_BPAIM_1";
			break;
		
		case 2:
			Local_68.f_221.f_208 = "OJSR_BPAIM_2";
			break;
		
		case 3:
			Local_68.f_221.f_208 = "OJSR_BPAIM_3";
			break;
		
		case 4:
			Local_68.f_221.f_208 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 1:
			Local_68.f_221.f_209 = "OJSR_BPAIMAG_1";
			break;
		
		case 2:
			Local_68.f_221.f_209 = "OJSR_BPAIMAG_2";
			break;
		
		case 3:
			Local_68.f_221.f_209 = "OJSR_BPAIMAG_3";
			break;
		
		case 4:
			Local_68.f_221.f_209 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 1:
			Local_68.f_221.f_211 = "OJSR_SCARED_1";
			break;
		
		case 2:
			Local_68.f_221.f_211 = "OJSR_SCARED_2";
			break;
		
		case 3:
			Local_68.f_221.f_211 = "OJSR_SCARED_3";
			break;
		
		case 4:
			Local_68.f_221.f_211 = "OJSR_SCARED_4";
			break;
		
		case 5:
			Local_68.f_221.f_211 = "OJSR_SCARED_5";
			break;
		
		case 6:
			Local_68.f_221.f_211 = "OJSR_SCARED_6";
			break;
		
		case 7:
			Local_68.f_221.f_211 = "OJSR_SCARED_7";
			break;
		
		case 8:
			Local_68.f_221.f_211 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 1:
			Local_68.f_221.f_213 = "OJSR_SCARED_9";
			break;
		
		case 2:
			Local_68.f_221.f_213 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 1:
			Local_68.f_221.f_216 = "OJSR_GRANAIM_1";
			break;
		
		case 2:
			Local_68.f_221.f_216 = "OJSR_GRANAIM_2";
			break;
		
		case 3:
			Local_68.f_221.f_216 = "OJSR_GRANAIM_3";
			break;
		
		case 4:
			Local_68.f_221.f_216 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 1:
			Local_68.f_221.f_217 = "OJSR_STICAIM_1";
			break;
		
		case 2:
			Local_68.f_221.f_217 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 1:
			Local_68.f_221.f_212 = "OJSR_BRAVE_1";
			break;
		
		case 2:
			Local_68.f_221.f_212 = "OJSR_BRAVE_2";
			break;
		
		case 3:
			Local_68.f_221.f_212 = "OJSR_BRAVE_3";
			break;
		
		case 4:
			Local_68.f_221.f_212 = "OJSR_BRAVE_4";
			break;
		
		case 5:
			Local_68.f_221.f_212 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 1:
			Local_68.f_221.f_218 = "OJSR_MOREAIM_1";
			break;
		
		case 2:
			Local_68.f_221.f_218 = "OJSR_MOREAIM_2";
			break;
		
		case 3:
			Local_68.f_221.f_218 = "OJSR_MOREAIM_3";
			break;
		
		case 4:
			Local_68.f_221.f_218 = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 1:
			Local_68.f_221.f_219 = "OJSR_SURNDER_1";
			break;
		
		case 2:
			Local_68.f_221.f_219 = "OJSR_SURNDER_2";
			break;
		
		case 3:
			Local_68.f_221.f_219 = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 1:
			Local_68.f_221.f_221 = "OJSR_POURCAN_1";
			break;
		
		case 2:
			Local_68.f_221.f_221 = "OJSR_POURCAN_2";
			break;
		
		case 3:
			Local_68.f_221.f_221 = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 1:
			Local_68.f_221.f_222 = "OJSR_FLEE_1";
			break;
		
		case 2:
			Local_68.f_221.f_222 = "OJSR_FLEE_2";
			break;
		
		case 3:
			Local_68.f_221.f_222 = "OJSR_FLEE_3";
			break;
		
		case 4:
			Local_68.f_221.f_222 = "OJSR_FLEE_4";
			break;
		
		case 5:
			Local_68.f_221.f_222 = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 1:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_1";
			break;
		
		case 2:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_2";
			break;
		
		case 3:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_3";
			break;
		
		case 4:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_4";
			break;
		
		case 5:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 1:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_1";
			break;
		
		case 2:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_2";
			break;
		
		case 3:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_3";
			break;
		
		case 4:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_4";
			break;
		
		case 5:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 1:
			Local_68.f_221.f_225 = "OJSR_CSTMER_1";
			break;
		
		case 2:
			Local_68.f_221.f_225 = "OJSR_CSTMER_2";
			break;
		
		case 3:
			Local_68.f_221.f_225 = "OJSR_CSTMER_3";
			break;
		
		case 4:
			Local_68.f_221.f_225 = "OJSR_CSTMER_4";
			break;
		
		case 5:
			Local_68.f_221.f_225 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 1:
			Local_68.f_221.f_226 = "OJSR_MOSC_1";
			break;
		
		case 2:
			Local_68.f_221.f_226 = "OJSR_MOSC_2";
			break;
		
		case 3:
			Local_68.f_221.f_226 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 1:
			Local_68.f_221.f_228 = "OJSR_BUY_1";
			break;
		
		case 2:
			Local_68.f_221.f_228 = "OJSR_BUY_2";
			break;
		
		case 3:
			Local_68.f_221.f_228 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 1:
			Local_68.f_221.f_229 = "OJSR_STEAL_1";
			break;
		
		case 2:
			Local_68.f_221.f_229 = "OJSR_STEAL_2";
			break;
		
		case 3:
			Local_68.f_221.f_229 = "OJSR_STEAL_3";
			break;
	}
	Local_68.f_221.f_166 = "OJSRAUD";
	Local_68.f_221.f_167 = "OJSR_GREET";
	Local_68.f_221.f_168 = "OJSR_BATEQ";
	Local_68.f_221.f_169 = "OJSR_TOOLEQ";
	Local_68.f_221.f_170 = "OJSR_STICKEQ";
	Local_68.f_221.f_171 = "OJSR_WORRY";
	Local_68.f_221.f_172 = "OJSR_SHOCK";
	Local_68.f_221.f_173 = "OJSR_STUBBRN";
	Local_68.f_221.f_174 = "OJSR_COUNTER";
	Local_68.f_221.f_175 = "OJSR_BACKRM";
	Local_68.f_221.f_176 = "OJSR_BUMP";
	Local_68.f_221.f_177 = "OJSR_BPAIM";
	Local_68.f_221.f_178 = "OJSR_BPAIMAG";
	Local_68.f_221.f_179 = "OJSR_HOLDUP";
	Local_68.f_221.f_180 = "OJSR_SCARED";
	Local_68.f_221.f_181 = "OJSR_KNIFAIM";
	Local_68.f_221.f_182 = "OJSR_TOOLAIM";
	Local_68.f_221.f_183 = "OJSR_GRANAIM";
	Local_68.f_221.f_184 = "OJSR_STICAIM";
	Local_68.f_221.f_185 = "OJSR_BRAVE";
	Local_68.f_221.f_186 = "OJSR_MOREAIM";
	Local_68.f_221.f_187 = "OJSR_SURNDER";
	Local_68.f_221.f_188 = "OJSR_COPS";
	Local_68.f_221.f_189 = "OJSR_POURCAN";
	Local_68.f_221.f_190 = "OJSR_FLEE";
	Local_68.f_221.f_191 = "OJSR_RECSCAR";
	Local_68.f_221.f_192 = "OJSR_RECAGGR";
	Local_68.f_221.f_193 = "OJSR_CSTMER";
	Local_68.f_221.f_194 = "OJSR_MOSC";
	Local_68.f_221.f_195 = "OJSR_PLRHUR";
	Local_68.f_221.f_196 = "OJSR_BUY";
	Local_68.f_221.f_197 = "OJSR_STEAL";
	iLocal_579 = 0;
	iLocal_580 = 0;
	iLocal_581 = 0;
}

void func_243()
{
	unk_0x8C8B7B919A2D1050(Local_68.f_486.f_6, 0.5f, joaat("prop_till_01"), 1);
	unk_0x8C8B7B919A2D1050(Local_68.f_486.f_6, 0.5f, joaat("prop_till_02"), 1);
	unk_0x8C8B7B919A2D1050(Local_68.f_486.f_6, 0.5f, joaat("prop_till_03"), 1);
	Local_68.f_96.f_1 = unk_0x8C15E6EC0BC9B4BE(Local_68.f_96, Local_68.f_486.f_6, 1, 1, 0);
	unk_0x151F32CB40BE730C(Local_68.f_96.f_1, Local_68.f_96.f_5);
	unk_0x2878EC06B3F897A0(Local_68.f_96.f_1, 1);
}

void func_244()
{
	Local_68.f_28 = unk_0x914CCD68BC9B3DF2(joaat("pickup_portable_crate_unfixed"), Local_68.f_28.f_7, 0, Local_68.f_28.f_13);
	unk_0x11089405D5CD3FD2(Local_68.f_28, Local_68.f_28.f_10, 2, 1);
	unk_0x60365B5AF8BF1FFA(Local_68.f_28, 0, 0);
	unk_0x2E9DAE56D293B951(Local_68.f_28, 1, 0);
	Local_68.f_28.f_14 = 0;
}

void func_245()
{
	var uVar0;
	var uVar1;
	
	Local_68.f_2 = unk_0xA7F4088D9A2629CC(4, Local_68.f_2.f_5, Local_68.f_2.f_1, Local_68.f_2.f_4, 1, 1);
	func_251(iLocal_568, &uVar1, &uVar0);
	unk_0x497AFDFE79EEFE4F(Local_68.f_2, 0, uVar1, uVar0, 0);
	func_250(&uVar1, &uVar0);
	unk_0x497AFDFE79EEFE4F(Local_68.f_2, 2, uVar1, uVar0, 0);
	func_249(&uVar1, &uVar0);
	unk_0x497AFDFE79EEFE4F(Local_68.f_2, 3, uVar1, uVar0, 0);
	func_248(&uVar1, &uVar0);
	unk_0x497AFDFE79EEFE4F(Local_68.f_2, 4, uVar1, uVar0, 0);
	func_247(&uVar1, &uVar0);
	unk_0x497AFDFE79EEFE4F(Local_68.f_2, 8, uVar1, uVar0, 0);
	unk_0x9BEE7E791BC4D38B(Local_68.f_2, 1);
	if (Local_68.f_2.f_12)
	{
		func_246();
	}
}

void func_246()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_2))
	{
	}
}

void func_247(var uParam0, var uParam1)
{
	*uParam0 = unk_0x0ADD324BC46177EF(0, 2);
	if (*uParam0 == 0)
	{
		*uParam1 = unk_0x0ADD324BC46177EF(0, 2);
	}
	else
	{
		*uParam1 = 0;
	}
}

void func_248(var uParam0, var uParam1)
{
	*uParam0 = 0;
	*uParam1 = unk_0x0ADD324BC46177EF(0, 2);
}

void func_249(var uParam0, var uParam1)
{
	*uParam0 = unk_0x0ADD324BC46177EF(0, 2);
	*uParam1 = unk_0x0ADD324BC46177EF(0, 3);
}

void func_250(var uParam0, var uParam1)
{
	*uParam0 = unk_0x0ADD324BC46177EF(0, 3);
	if (*uParam0 > 0)
	{
		*uParam1 = unk_0x0ADD324BC46177EF(0, 2);
	}
	else
	{
		*uParam1 = 0;
	}
}

void func_251(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam1 = 0;
			*uParam2 = unk_0x0ADD324BC46177EF(0, 3);
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
			*uParam2 = unk_0x0ADD324BC46177EF(0, 3);
			break;
	}
}

int func_252()
{
	if (!func_253(&Local_584))
	{
		return 0;
	}
	if (!bLocal_574)
	{
		if (!unk_0x2917D5E1CB5CE43A(Local_68.f_2.f_15))
		{
			return 0;
		}
	}
	if (!unk_0x97ED7BE642158AAF(Local_68.f_185))
	{
		return 0;
	}
	unk_0x21B58370C1A6C16E(0);
	return 1;
}

int func_253(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_254(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_254(var uParam0)
{
	return func_255(*uParam0, "NULL", uParam0->f_1);
}

int func_255(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xB519E5386FBF69E5(uParam0, 30))
	{
		if (unk_0xB519E5386FBF69E5(iParam0, 29))
		{
			switch (func_256(iParam0))
			{
				case 0:
					return unk_0x5053BF6D5604065B(uParam2);
					break;
				
				case 1:
					return unk_0x2917D5E1CB5CE43A(sParam1);
					break;
				
				case 2:
					return unk_0x05416FE34E390CB7(sParam1);
					break;
				
				case 3:
					return unk_0x0B4924B3F0DADDD1(sParam1);
					break;
				
				case 4:
					return unk_0x08F84BB137ADEE81(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x729A24E50365D07B(sParam1);
					break;
				
				case 6:
					return unk_0xDF83A33BF4D93E6F(sParam1, unk_0xB519E5386FBF69E5(iParam0, 27));
					break;
				
				case 7:
					return unk_0xD24D76334CB5001C(iParam2);
					break;
				
				case 8:
					return unk_0x4D15A085E079AB18(iParam2);
					break;
				
				case 9:
					return unk_0xD6306290BE90B505();
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

int func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xB519E5386FBF69E5(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_257()
{
	unk_0x21B58370C1A6C16E(1);
	if (!bLocal_574)
	{
		unk_0x2B0BB514F9140141(Local_68.f_2.f_15);
		Local_584.f_32 = unk_0x9698C5C67A3BBE47();
	}
	func_258(&Local_584, Local_68.f_2.f_5);
	func_258(&Local_584, Local_68.f_28.f_13);
	func_258(&Local_584, Local_68.f_96);
	Local_68.f_466 = 1;
}

void func_258(var uParam0, int iParam1)
{
	func_259(uParam0, 0, iParam1, 0);
}

void func_259(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_260(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*2*/], iParam1))
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
		if (!unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x9956FB0E4B50ECB8(uParam0[iVar0 /*2*/], iParam1);
			unk_0x9956FB0E4B50ECB8(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_260(int iParam0)
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

void func_261()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	func_266(iLocal_568, &(Local_68.f_46.f_8), &(Local_68.f_46.f_18), &(Local_68.f_46.f_22), &(Local_68.f_46.f_25), &(Local_68.f_46.f_26), &(Local_68.f_46.f_27), &(Local_68.f_46.f_28), &(Local_68.f_46.f_31), &(Local_68.f_46.f_34));
	func_264(iLocal_568);
	Var0 = { -3244.573f, 1000.658f, 12.83f };
	fVar9 = 175.074f;
	Var3 = { -3242.008f, 1001.202f, 11.83071f };
	Var6 = { Var3 - Var0 };
	Var6 = { func_291(Var6, fVar9) };
	Var3 = { -3245.088f, 1001.468f, 13.65071f };
	Var6 = { Var3 - Var0 };
	Var6 = { func_291(Var6, fVar9) };
	Var3 = { -3243.37f, 1000.37f, 12.83f };
	Var6 = { Var3 - Var0 };
	Var6 = { func_291(Var6, fVar9) };
	Local_68.f_469 = -1;
	Local_68.f_102.f_22 = -1;
	Local_68.f_96 = joaat("p_till_01_s");
	Local_68.f_96.f_2 = { Local_68.f_486.f_6 };
	Local_68.f_96.f_5 = (Local_68.f_486.f_9.f_2 + 180f);
	Local_68.f_451.f_3 = 0;
	Local_68.f_458 = 0;
	Local_68.f_459 = 0;
	Local_68.f_460 = 0;
	Local_68.f_461 = 0;
	Local_68.f_462 = 0;
	Local_68.f_465 = 0;
	func_263(iLocal_568, &(Local_68.f_2.f_6), &(Local_68.f_2.f_9));
	func_262();
}

void func_262()
{
	Local_68.f_86.f_1 = joaat("a_m_y_soucent_04");
	Local_68.f_86.f_2 = { -1224.15f, -907.2f, 12.33f };
	Local_68.f_86.f_5 = 2f;
}

void func_263(int iParam0, var uParam1, var uParam2)
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

void func_264(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_265(Local_68.f_186, Local_68.f_189) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_68.f_185 = unk_0x41D9D981197E60A2(Var0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_68.f_185 = unk_0x41D9D981197E60A2(Var0, "v_gen_liquor");
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
			Local_68.f_185 = unk_0x41D9D981197E60A2(Var0, "v_shop_247");
			break;
	}
}

Vector3 func_265(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	
	Var0.f_0 = ((Param0.f_0 + Param3.f_0) / 2f);
	Var0.f_1 = ((Param0.f_1 + Param3.f_1) / 2f);
	Var0.f_2 = ((Param0.f_2 + Param3.f_2) / 2f);
	return Var0;
}

void func_266(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	if (!func_267(iParam0))
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

int func_267(int iParam0)
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

int func_268()
{
	struct<3> Var0;
	
	if (!unk_0x76B2D234F1895632(Local_68.f_0))
	{
		Var0 = { unk_0x1141852D07400777(Local_68.f_0, 1) };
		if (unk_0xF18329472591CFE6(Var0, Local_68.f_181, 1) < 50f)
		{
			return 1;
		}
	}
	return 0;
}

void func_269()
{
	if (Local_68.f_46.f_26 != 0)
	{
		unk_0x839E9476E54502A2(Local_68.f_46.f_26);
	}
	if (Local_68.f_46.f_27 != 0)
	{
		unk_0x839E9476E54502A2(Local_68.f_46.f_27);
	}
	if (!unk_0xF6917DE0E003509D(Local_68.f_2.f_15))
	{
		unk_0x8B10CC9832827D27(Local_68.f_2.f_15);
	}
}

int func_270()
{
	if (Global_99155.f_7699)
	{
		if (!func_274(56))
		{
			return 1;
		}
	}
	if (func_273())
	{
		return 1;
	}
	if (!unk_0x18544C93469391DA())
	{
		return 1;
	}
	if (func_290() && !func_289())
	{
		return 1;
	}
	if (func_272() && func_271())
	{
		return 1;
	}
	if (Global_25036)
	{
		unk_0x1D208E4A4E1D4FFE(1);
		unk_0x52F20802944F8DCE();
	}
	return 0;
}

bool func_271()
{
	return Global_98873 > 0;
}

int func_272()
{
	if (Global_88280 != -1)
	{
		return 1;
	}
	return 0;
}

int func_273()
{
	struct<3> Var0;
	float fVar3;
	
	if (!unk_0x76B2D234F1895632(Local_68.f_0))
	{
		Var0 = { unk_0x1141852D07400777(Local_68.f_0, 1) };
		fVar3 = unk_0xF18329472591CFE6(Var0, Local_68.f_181, 1);
		if (fVar3 > Local_68.f_184)
		{
			return 1;
		}
	}
	return 0;
}

int func_274(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_99155.f_7699.f_99.f_58[iParam0];
}

void func_275(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0x9698C5C67A3BBE47() >= (uParam0->f_32 + uParam0->f_33) || unk_0xB519E5386FBF69E5(Global_91025.f_20, 2)) || unk_0xB519E5386FBF69E5(Global_91025.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*2*/], 29))
					{
						func_276(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x9698C5C67A3BBE47();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_276(var uParam0)
{
	func_277(uParam0, "NULL", uParam0->f_1);
}

void func_277(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0xB519E5386FBF69E5(*uParam0, 30))
	{
		switch (func_256(*uParam0))
		{
			case 0:
				unk_0x801429C020C467BA(uParam2);
				break;
			
			case 1:
				unk_0x2B0BB514F9140141(sParam1);
				break;
			
			case 2:
				unk_0x5FC34204E17B27E0(sParam1);
				break;
			
			case 3:
				unk_0xDF7D4AE1A984CEF7(sParam1, unk_0xB519E5386FBF69E5(*uParam0, 28));
				break;
			
			case 4:
				unk_0xDBDFBE5906702D9E(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xCBEB830866A6963D(sParam1);
				break;
			
			case 6:
				unk_0xDF83A33BF4D93E6F(sParam1, unk_0xB519E5386FBF69E5(*uParam0, 27));
				break;
			
			case 7:
				unk_0x87D6D32DFD3B8BD1(iParam2);
				break;
			
			case 8:
				unk_0x36A3D6FBED10EF81(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xDF14478656A9018C();
				break;
			
			default:
				break;
		}
		unk_0x9956FB0E4B50ECB8(uParam0, 29);
	}
}

int func_278()
{
	int iVar0;
	
	if (Local_68.f_1 != Global_99155.f_18649.f_62[iLocal_568])
	{
		return 1;
	}
	iVar0 = (unk_0x2DA3502053F9E535() - Global_99155.f_18649.f_42[iLocal_568]);
	iLocal_573 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0x2DA3502053F9E535() + 31;
		iVar0 = (iVar0 - Global_99155.f_18649.f_42[iLocal_568]);
	}
	if (iVar0 < iLocal_573)
	{
		return 0;
	}
	return 1;
}

void func_279(var uParam0, int iParam1)
{
	func_280(uParam0, iParam1);
}

void func_280(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_281(int iParam0, float fParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam2 = { unk_0xF919633EBD0639D0(func_282(iParam0), uParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { unk_0xF919633EBD0639D0(func_282(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { unk_0xF919633EBD0639D0(func_282(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { unk_0xF919633EBD0639D0(func_282(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
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
			*uParam2 = { unk_0xF919633EBD0639D0(func_282(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { unk_0xF919633EBD0639D0(func_282(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
			break;
	}
	return 1;
}

Vector3 func_282(int iParam0)
{
	if (!func_267(iParam0))
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

int func_283()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (unk_0x7C833E3C6EEE41E0() - Global_99155.f_18649.f_21[iLocal_568]);
	iVar1 = (unk_0x2DA3502053F9E535() - Global_99155.f_18649.f_42[iLocal_568]);
	iLocal_572 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0x7C833E3C6EEE41E0() + 24;
		iVar0 = (iVar0 - Global_99155.f_18649.f_21[iLocal_568]);
		iVar2 = 1;
	}
	if ((iVar0 < iLocal_572 && iVar1 == 0) || (iVar0 < iLocal_572 && iVar2))
	{
		return 1;
	}
	return 0;
}

void func_284(bool bParam0)
{
	int iVar0;
	var uVar1[2];
	var uVar4[2];
	struct<3> Var7[2];
	
	func_285(iLocal_568, &uVar1, &uVar4, &Var7);
	if (!func_1(Local_68.f_470, 64))
	{
		if (!unk_0x17C7D2D5A8AF4A62(uVar1[iVar0]))
		{
			unk_0x9053753949C172D6(uVar1[0], uVar4[0], Var7[0 /*3*/], 0, 0, 0);
			if (uVar1[1] != -1)
			{
				unk_0x9053753949C172D6(uVar1[1], uVar4[1], Var7[1 /*3*/], 0, 0, 0);
			}
		}
		func_279(&(Local_68.f_470), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x17C7D2D5A8AF4A62(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (unk_0xD0B2BAA0C5BEC749(uVar1[iVar0]) != 1)
				{
					unk_0x31DB7F67CAF7CCFA(uVar1[iVar0], 1, 0, 0);
				}
			}
			else if (unk_0xD0B2BAA0C5BEC749(uVar1[iVar0]) != 0)
			{
				unk_0x31DB7F67CAF7CCFA(uVar1[iVar0], 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_285(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 1:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 2:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 3:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 4:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 5:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = -1;
			break;
		
		case 6:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = -1;
			break;
		
		case 7:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = -1;
			break;
		
		case 8:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = -1;
			break;
		
		case 9:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = -1;
			break;
		
		case 10:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 11:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 12:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 13:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 14:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 15:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 16:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 17:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 18:
			(*uParam1)[0] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = unk_0xC7C6DDDE84A8E734("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 377.88f, 323.17f, 103.72f };
			break;
	}
}

void func_286(var uParam0, int iParam1)
{
	func_287(uParam0, iParam1);
}

void func_287(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_288()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_0))
	{
		if (unk_0x22E902D6AF27E232(Local_68.f_0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x22E902D6AF27E232(Local_68.f_0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x22E902D6AF27E232(Local_68.f_0, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (unk_0x22E902D6AF27E232(Local_68.f_0, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_289()
{
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xB6A14C2017960DFA() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_290()
{
	if (Global_88280 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_82146[Global_88280 /*34*/].f_15, 20);
	}
	return 0;
}

Vector3 func_291(struct<3> Param0, float fParam3)
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

void func_292(var uParam0)
{
	iLocal_67 = 0;
	iLocal_65 = 0;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_62 = 0;
	iLocal_61 = 1;
	iLocal_57 = 0;
	iLocal_60 = 1;
	iLocal_59 = 0;
	iLocal_56 = 0;
	iLocal_55 = 0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	Local_68.f_0 = unk_0xE7869D5D7816A9B6();
	func_300(&(uParam0->f_1[0 /*3*/]), &(Local_68.f_181), &iLocal_568);
	if ((((((((iLocal_568 == 10 || iLocal_568 == 11) || iLocal_568 == 12) || iLocal_568 == 13) || iLocal_568 == 14) || iLocal_568 == 15) || iLocal_568 == 16) || iLocal_568 == 17) || iLocal_568 == 18)
	{
		bLocal_582 = true;
	}
	Local_68.f_184 = 150f;
	Local_68.f_2.f_15 = "random@shop_robbery_reactions@";
	Local_68.f_2.f_16 = "absolutely";
	Local_68.f_2.f_17 = "is_this_it";
	Local_68.f_2.f_18 = "shock";
	Local_68.f_2.f_19 = "anger_a";
	Local_68.f_2.f_20 = "screw_you";
	Local_68.f_2.f_21 = "but_why";
	Local_68.f_486.f_1 = "mp_am_hold_up";
	Local_68.f_486.f_2 = "guard_handsup_loop";
	Local_68.f_486.f_3 = "holdup_victim_20s";
	Local_68.f_486.f_4 = "holdup_victim_20s_bag";
	Local_68.f_486.f_5 = "holdup_victim_20s_till";
	iLocal_570 = func_299();
	if (!bLocal_574)
	{
		func_295();
	}
	iLocal_575 = 0;
	if (iLocal_568 != 7)
	{
		iLocal_54 = 6;
	}
	else
	{
		iLocal_54 = 0;
	}
	if (func_95() == 0)
	{
		Local_68.f_1 = 0;
	}
	else if (func_95() == 1)
	{
		Local_68.f_1 = 1;
	}
	else if (func_95() == 2)
	{
		Local_68.f_1 = 2;
	}
	func_294(iLocal_568, &(Local_68.f_186), &(Local_68.f_189), &(Local_68.f_192), &(Local_68.f_193), &(Local_68.f_196), &(Local_68.f_199), &(Local_68.f_200), &(Local_68.f_203), &(Local_68.f_206), &(Local_68.f_207), &(Local_68.f_210), &(Local_68.f_213), &(Local_68.f_214), &(Local_68.f_217), &(Local_68.f_220), &(Local_68.f_102.f_6), &(Local_68.f_102.f_9));
	func_293(iLocal_568, &(Local_68.f_486.f_6), &(Local_68.f_486.f_9), &(Local_68.f_2.f_1), &(Local_68.f_2.f_4), &(Local_68.f_2.f_5), &(Local_68.f_28.f_7), &(Local_68.f_28.f_10), &(Local_68.f_28.f_13), &(Local_68.f_28.f_4), &(Local_68.f_28.f_5), &(Local_68.f_102.f_21));
}

void func_293(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
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
	*uParam3 = { unk_0xF919633EBD0639D0(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { unk_0xF919633EBD0639D0(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { unk_0xF919633EBD0639D0(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
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
			*uParam6 = { unk_0xF919633EBD0639D0(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
			*uParam11 = 3;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_294(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
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

void func_295()
{
	func_298();
	func_297();
	func_296();
}

void func_296()
{
	int iVar0;
	
	if (iLocal_570 >= 9)
	{
		if (Global_99155.f_18649.f_41 > 3)
		{
			if (iLocal_570 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = unk_0x0ADD324BC46177EF(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_68.f_464 = 1;
				Global_99155.f_18649.f_41 = 0;
			}
			else
			{
				Local_68.f_464 = 0;
				Global_99155.f_18649.f_41++;
			}
		}
		else
		{
			Global_99155.f_18649.f_41++;
		}
	}
	else
	{
		Global_99155.f_18649.f_41++;
	}
}

void func_297()
{
	int iVar0;
	
	if (iLocal_570 >= 3)
	{
		if (iLocal_570 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0x0ADD324BC46177EF(0, 10);
		}
		if (iVar0 < 1)
		{
			Local_68.f_2.f_12 = 1;
		}
		else
		{
			Local_68.f_2.f_12 = 0;
		}
	}
}

void func_298()
{
	int iVar0;
	
	if (iLocal_570 >= 6)
	{
		if (iLocal_570 == 6)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0x0ADD324BC46177EF(0, 7);
		}
		if (iVar0 < 1)
		{
			iLocal_60 = 2;
		}
		else
		{
			iLocal_60 = 1;
		}
	}
}

int func_299()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = (iVar0 + Global_99155.f_18649[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_300(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	*iParam2 = 0;
	fVar0 = unk_0xB7A628320EFF8E47(func_282(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= (19 - 1))
	{
		fVar2 = unk_0xB7A628320EFF8E47(*uParam0, func_282(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { func_282(*iParam2) };
}

void func_301(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

bool func_302(int iParam0)
{
	return Global_35619 == iParam0;
}

int func_303(int iParam0)
{
	if (Global_35619 == 15)
	{
		return 0;
	}
	if (func_304(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_304(int iParam0)
{
	return func_305(iParam0, Global_35619);
}

int func_305(int iParam0, int iParam1)
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

void func_306()
{
	if (((iLocal_65 == 1 || iLocal_65 == 2) || iLocal_624 == 7) || (unk_0x76B2D234F1895632(Local_68.f_2) && iLocal_67 == 1))
	{
		if (iLocal_65 == 1)
		{
		}
		if (iLocal_65 == 2)
		{
		}
		if (iLocal_624 == 7)
		{
		}
		if (unk_0x76B2D234F1895632(Local_68.f_2) && iLocal_67 == 1)
		{
		}
		Global_99155.f_18649.f_21[iLocal_568] = unk_0x7C833E3C6EEE41E0();
		Global_99155.f_18649.f_42[iLocal_568] = unk_0x2DA3502053F9E535();
	}
	if ((unk_0xC8FFCE1611C4F73B() && func_318()) && Local_68.f_468)
	{
		func_313(&iLocal_568, &iLocal_575, &iLocal_569);
	}
	func_312();
	iLocal_575 = 0;
	iLocal_579 = 0;
	iLocal_580 = 0;
	iLocal_581 = 0;
	if (!bLocal_574)
	{
		unk_0x8C1CE4F676968E94(5);
	}
	unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 0);
	unk_0x3AD14BFC20FCADDB(uLocal_567, 0);
	func_28("SHR_HOLDUP_1", 1);
	func_28("SHR_SNK_TUT", 1);
	if ((func_27("SHR_MENU") || func_27("SHR_HOLDUP_1")) || func_27("SHR_SNK_TUT"))
	{
		unk_0x1D208E4A4E1D4FFE(1);
	}
	if (func_1(Local_68.f_470, 1024))
	{
		if ((unk_0xD51CFE69539DB6D8(uLocal_618[0]) && unk_0xD51CFE69539DB6D8(uLocal_618[1])) && unk_0xD51CFE69539DB6D8(uLocal_618[2]))
		{
			unk_0xD4E454973E16D31B(&(uLocal_618[0]));
			unk_0xD4E454973E16D31B(&(uLocal_618[1]));
			unk_0xD4E454973E16D31B(&(uLocal_618[2]));
		}
	}
	if (iLocal_623 == 2)
	{
		unk_0x8B10CC9832827D27(Local_68.f_486.f_1);
	}
	func_307(&Local_584, 0);
	unk_0x52F20802944F8DCE();
}

void func_307(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_309(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_308(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_308(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_309(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xB519E5386FBF69E5((*uParam0)[iVar0 /*2*/], 30))
		{
			func_310(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_310(var uParam0)
{
	func_311(*uParam0, "NULL", uParam0->f_1);
}

void func_311(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xB519E5386FBF69E5(uParam0, 30))
	{
		switch (func_256(iParam0))
		{
			case 0:
				unk_0x839E9476E54502A2(uParam2);
				break;
			
			case 1:
				unk_0x8B10CC9832827D27(sParam1);
				break;
			
			case 2:
				unk_0xE4036833A4846B4A(sParam1);
				break;
			
			case 3:
				unk_0xA857A54226CCD303(sParam1);
				break;
			
			case 4:
				unk_0xFC8E26A6FE4C2E54(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x4C5B723663B8F630(sParam1);
				break;
			
			case 6:
				unk_0x26512D4F43AB2347();
				break;
			
			case 7:
				unk_0x2508AC68323E213F(iParam2);
				break;
			
			case 8:
				unk_0x3A2938D665EA8A9E(iParam2, unk_0xB519E5386FBF69E5(iParam0, 26));
				break;
			
			case 9:
				unk_0x5736B7F949DFB3D6();
				break;
			
			default:
				break;
		}
	}
}

void func_312()
{
	if (!unk_0x76B2D234F1895632(Local_68.f_2))
	{
		unk_0xFA2C5C2D054C888E(Local_68.f_2);
	}
	if (unk_0xD51CFE69539DB6D8(Local_68.f_2))
	{
		func_206();
		unk_0x506D42CB68AE4EA5(&(Local_68.f_2));
	}
	if (unk_0xD51CFE69539DB6D8(Local_68.f_86))
	{
		unk_0x506D42CB68AE4EA5(&(Local_68.f_86));
	}
	if (!unk_0x76B2D234F1895632(Local_68.f_28))
	{
		if (iLocal_55 >= 4)
		{
			unk_0xB4E40069DFD4B86F(Local_68.f_28, -8f, 1);
			unk_0x4B89CEB084587C7F(Local_68.f_28, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
		}
	}
	if (unk_0xD51CFE69539DB6D8(Local_68.f_28))
	{
		unk_0x9083C015A6C271BD(&(Local_68.f_28));
	}
	if (unk_0xD51CFE69539DB6D8(Local_68.f_96.f_1))
	{
		unk_0xD4E454973E16D31B(&(Local_68.f_96.f_1));
		unk_0x4D8FEA7BB0E10A53(Local_68.f_486.f_6, 0.5f, joaat("prop_till_01"), 0);
		unk_0x4D8FEA7BB0E10A53(Local_68.f_486.f_6, 0.5f, joaat("prop_till_02"), 0);
		unk_0x4D8FEA7BB0E10A53(Local_68.f_486.f_6, 0.5f, joaat("prop_till_03"), 0);
	}
	if (unk_0xA2BDDAEAA1C5ED8F(Local_68.f_28.f_1))
	{
		unk_0x55E35CCCD4847E94(Local_68.f_28.f_1);
	}
	if (func_14(&(Local_68.f_477)))
	{
		func_39(&(Local_68.f_477));
	}
	if (Local_68.f_466)
	{
		if (!bLocal_574)
		{
			unk_0x8B10CC9832827D27(Local_68.f_2.f_15);
		}
		Local_68.f_466 = 0;
	}
}

void func_313(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<6> Var1[3];
	struct<8> Var20[2];
	
	iVar0 = func_317(*uParam1, 1, 0);
	StringCopy(&(Var20[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var20[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	MemCopy(&(Var1[1 /*6*/]), {func_316(iParam0)}, 6);
	if (func_314(276, &Var1, &Var20, 2, -1, 0, 0))
	{
		unk_0x22785BD1FEF81AE7(131, *uParam2, unk_0xBBDA792448DB5A89(*uParam2));
		unk_0x22785BD1FEF81AE7(114, iVar0, unk_0xBBDA792448DB5A89(iVar0));
	}
}

int func_314(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0xC8FFCE1611C4F73B())
	{
	}
	if ((!unk_0xCF6F23F6AE7795A2() && (unk_0xEF26821E74E58FDA() || !unk_0x1A8078D7630DABE2())) && unk_0xCE8A51232A14F3FD())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0xAB7778782580F313())
			{
				Var69 = { func_315(unk_0x3F80C6638E3A1A90()) };
				if (unk_0x89398BAF58AA485C(&Var69))
				{
					if (unk_0xB486161F8A7A8AFB(&uVar82, 35, &Var69))
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
			if (unk_0x00AAD79B42B3E036() && Global_2439374.f_3)
			{
				unk_0xF248832719C65E10(&Var0, &(Global_1704758.f_10));
			}
			else
			{
				unk_0xE58AD78E35CB23DB(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xCF6F23F6AE7795A2())
	{
	}
	if (!unk_0xEF26821E74E58FDA())
	{
	}
	if (unk_0x1A8078D7630DABE2())
	{
	}
	if (!unk_0xCE8A51232A14F3FD())
	{
	}
	return 0;
}

struct<13> func_315(var uParam0)
{
	struct<13> Var0;
	
	unk_0xD82458461B583D5D(uParam0, &Var0, 13);
	return Var0;
}

struct<8> func_316(var uParam0)
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

int func_317(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_318()
{
	if (func_320() && func_319(0))
	{
		return 1;
	}
	return 0;
}

var func_319(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_320()
{
	return func_319(func_123() + 1);
}

