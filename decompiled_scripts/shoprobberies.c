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
	if (unk_0x4B4BD87E3D30C50D(98))
	{
		func_306();
	}
	if (func_303(0))
	{
		bLocal_574 = true;
		iLocal_571 = unk_0xAD99B2B66B00754F();
	}
	if (Global_3)
	{
		unk_0x4ACCE973F9C3CA3B(1);
		unk_0x2F798BA2098FDADE();
	}
	if (func_302(14))
	{
		unk_0x4ACCE973F9C3CA3B(1);
		unk_0x2F798BA2098FDADE();
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
	if ((((func_290() && !func_289()) || Global_99194) || Global_25117) || Global_99239 != -1)
	{
		if (func_290() && !func_289())
		{
		}
		else if (Global_99194)
		{
		}
		else if (Global_25117)
		{
		}
		else if (Global_99239 != -1)
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
	else if (Global_99250.f_18653[iLocal_568] > 0)
	{
		if (func_283())
		{
			func_281(iLocal_568, Local_68.f_486.f_9.f_2, &Var13, &Var16);
			unk_0xD1C12864812BFA0A(Local_68.f_181, 15f, 0);
			uLocal_567 = unk_0x2277155D92E898D2(Var13, Var16, 0, 1, 1, 1);
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
			iVar19 = unk_0xA3746E7F17F47DC2(0, 3);
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
					if (!unk_0x8E9825258F5C145C())
					{
						if (!func_3("SHOP_CLOSED", func_4(iLocal_568)))
						{
							unk_0x7B72A8C89BEC56C3(0);
							func_2("SHOP_CLOSED", func_4(iLocal_568));
						}
					}
				}
				else
				{
					if (func_3("SHOP_CLOSED", func_4(iLocal_568)))
					{
						unk_0x4ACCE973F9C3CA3B(1);
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
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0x703D2B4B1C7E10B6(sParam1);
	unk_0xF34A1D3B3034CC8A(0, 1, 1, -1);
}

int func_3(char* sParam0, char* sParam1)
{
	unk_0xBA89110203C50939(sParam0);
	unk_0x703D2B4B1C7E10B6(sParam1);
	return unk_0x62881E3F5F311834(0);
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
	if (unk_0x1F2158D615BC4B25(Local_68.f_0))
	{
		unk_0x587BE7B13B3A93BF(Local_68.f_0, &iVar0, 1);
	}
	else
	{
		return;
	}
	bLocal_576 = false;
	if (!unk_0x1E80C02AC16B6622(Local_68.f_2) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar1, 1))
		{
			if ((iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare"))
			{
				if ((((unk_0xA35DF80DCE8538ED(unk_0x8ACD527A7E574590()) && unk_0x6867AF84AF12BEFC(unk_0x77F050A399DB77ED(), Local_68.f_2, 45f)) && unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), Local_68.f_2, 5f, 5f, 2f, 0, 1, 0)) || unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), Local_68.f_2)) || unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), Local_68.f_2))
				{
					if (!func_25() && !unk_0xFFB998F7CF994F0E())
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
			iVar2 = func_24(unk_0x77F050A399DB77ED());
			iVar3 = unk_0x3BCE04A98A6A4916(iVar2);
			if (iVar3 == joaat("GROUP_PISTOL"))
			{
				sLocal_578 = "hold_up_head_additive_pistol";
				unk_0x642DDF74A8A2B3BB(unk_0x77F050A399DB77ED(), "mp_am_hold_up", sLocal_578, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else if ((((iVar3 == joaat("GROUP_MG") || iVar3 == joaat("GROUP_RIFLE")) || iVar3 == joaat("GROUP_SHOTGUN")) || iVar3 == joaat("GROUP_SNIPER")) || iVar3 == joaat("GROUP_SMG"))
			{
				sLocal_578 = "hold_up_head_additive_rifle";
				unk_0x642DDF74A8A2B3BB(unk_0x77F050A399DB77ED(), "mp_am_hold_up", sLocal_578, 8f, -8f, -1, 305, 0, 0, 0, 0);
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
		if (!unk_0x0AAC2160036975D9(sLocal_578))
		{
			if (unk_0x5EE0E9E5B7A50C2A(unk_0x77F050A399DB77ED(), "mp_am_hold_up", sLocal_578, 3))
			{
				unk_0x6354DB3EEA5E310C(unk_0x77F050A399DB77ED(), "mp_am_hold_up", sLocal_578, -1056964608);
			}
		}
		iLocal_577 = 0;
	}
	switch (iLocal_64)
	{
		case 0:
			if (func_288())
			{
				if (unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0))
				{
					iLocal_64 = 12;
				}
				else
				{
					iLocal_52 = 2;
					iLocal_59 = 1;
					if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_0))
					{
						if (!unk_0xB42592B9FFEB5EDE(Local_68.f_0, 0))
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
				unk_0xA5F70A8B83BDFA49(&Global_87290, 3);
				iLocal_64 = 13;
			}
			break;
		
		case 8:
			if (func_1(Local_68.f_470, 16))
			{
				if (func_16())
				{
					if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
					{
						if (!unk_0xCD7683F575A67B31(Local_68.f_2))
						{
							if (func_288())
							{
								if (Local_68.f_486 >= 0)
								{
									if (unk_0x671C6C3F21245221(Local_68.f_486))
									{
										unk_0x642DDF74A8A2B3BB(Local_68.f_2, Local_68.f_486.f_1, "handsup_base", 4f, -8f, -1, 1, 0, 0, 0, 0);
										iLocal_60 = 10;
									}
								}
							}
							else
							{
								unk_0x23E5F4496336DE4E(Local_68.f_2, unk_0x77F050A399DB77ED(), 100f, -1, 0, 0);
								iLocal_60 = 10;
							}
						}
					}
					unk_0xA5F70A8B83BDFA49(&Global_87290, 3);
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
	
	if (unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
	{
		return;
	}
	unk_0x2A6B9F9E71C479CF(&uVar0);
	unk_0xE3BCB930B62CBDE5(0, Local_68.f_2.f_6, 2f, -1, 0.25f, 0, Local_68.f_2.f_9);
	unk_0xD3AF1785A0A4CD09(0, -1);
	unk_0x44642CB08FA1637E(uVar0);
	unk_0xB8A8FA4B28E9F423(Local_68.f_2, uVar0);
	unk_0xAAD288E877AC833D(&uVar0);
	func_279(&(Local_68.f_470), 128);
}

void func_7()
{
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
	{
		unk_0xAAD288E877AC833D(&uLocal_566);
		unk_0x2A6B9F9E71C479CF(&uLocal_566);
		unk_0xD3AF1785A0A4CD09(0, 5000);
		unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 100f, -1, 0, 0);
		unk_0x44642CB08FA1637E(uLocal_566);
		unk_0xB8A8FA4B28E9F423(Local_68.f_2, uLocal_566);
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
			return (func_9(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_9(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x3EAC9995EC220C5A()) / 1000f);
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		iVar0 = unk_0xE23D71F521207E8D();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x3EAC9995EC220C5A()) / 1000f);
}

bool func_10(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(*uParam0, 2);
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
	uParam0->f_1 = (func_9(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - fParam1);
	unk_0x573691DB812DC8AA(uParam0, 1);
	unk_0xA5F70A8B83BDFA49(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_14(var uParam0)
{
	return unk_0xB56FEBC510E7E9DE(*uParam0, 1);
}

void func_15(int iParam0, bool bParam1)
{
	if (unk_0xAEE8018B8C539989(unk_0x7F3E348C0892D8D2()) < iParam0 && (!bLocal_574 || (bLocal_574 && iParam0 < iLocal_571)))
	{
		unk_0x3DF319A8C78275DD(unk_0x7F3E348C0892D8D2(), iParam0, 0);
		unk_0x32EB36CA60E96828(unk_0x7F3E348C0892D8D2(), 0);
		Local_68.f_158 = 1;
		if (bParam1)
		{
			unk_0xCBC9707F3BE3D5C2(iParam0);
		}
		else
		{
			unk_0xCBC9707F3BE3D5C2(5);
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
			Local_68.f_486 = unk_0xFCF0CDCAF2761068(Local_68.f_486.f_6, Local_68.f_486.f_9, 2);
			if (!unk_0xA989E7AFA45B368A(Local_68.f_2, 1))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_28))
				{
					if (Local_68.f_486 >= 0)
					{
						unk_0x5817B24FA3E70BC6(Local_68.f_28, 1, 0);
						unk_0x3B8C10CBBDDF7D04(Local_68.f_28, 1);
						unk_0x3C6CCFC07FD12077(Local_68.f_2, Local_68.f_486, Local_68.f_486.f_1, Local_68.f_486.f_3, 8f, -1.5f, 25, 0, 1148846080, 0);
						unk_0x1D8909C3B0308E1E(Local_68.f_28, Local_68.f_486, Local_68.f_486.f_4, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
						unk_0x1D8909C3B0308E1E(Local_68.f_96.f_1, Local_68.f_486, Local_68.f_486.f_5, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
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
				if (unk_0x671C6C3F21245221(Local_68.f_486))
				{
					if (unk_0x19779E7427AA44FB(Local_68.f_486) > 0.478f)
					{
						if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_28))
						{
							unk_0x1D8909C3B0308E1E(Local_68.f_28, Local_68.f_486, Local_68.f_486.f_4, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
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
				if (unk_0x671C6C3F21245221(Local_68.f_486))
				{
					if (unk_0x19779E7427AA44FB(Local_68.f_486) > 0.447f)
					{
						if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_28))
						{
							if (!unk_0xD0935EF5E40E7EE1(Local_68.f_28))
							{
								unk_0x68E5332DF8C1DA5A(Local_68.f_28, 1, 0);
							}
						}
					}
					if (Local_68.f_467)
					{
						if (unk_0x3CF1A6B6E95D84A3(Local_68.f_486) != 1.45f)
						{
							unk_0x850B3E7094E1A214(Local_68.f_486, 1.45f);
						}
					}
					if (unk_0x19779E7427AA44FB(Local_68.f_486) > 0.894f)
					{
						iLocal_56 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_28))
			{
				if (Local_68.f_486 >= 0)
				{
					if (unk_0x671C6C3F21245221(Local_68.f_486))
					{
						if (iLocal_55 >= 4)
						{
							if (unk_0x19779E7427AA44FB(Local_68.f_486) < 0.871f)
							{
								iLocal_57 = 4;
							}
							unk_0x8A817B41A6EAEFB5(Local_68.f_28, -16f, 1);
							unk_0xD22EAA7B4087A151(Local_68.f_28);
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
		if (unk_0x671C6C3F21245221(Local_68.f_486))
		{
			if (unk_0x19779E7427AA44FB(Local_68.f_486) >= 0f)
			{
				if (unk_0x19779E7427AA44FB(Local_68.f_486) < 0.117f)
				{
					iLocal_55 = 1;
				}
				else if (unk_0x19779E7427AA44FB(Local_68.f_486) < 0.154f)
				{
					iLocal_55 = 2;
				}
				else if (unk_0x19779E7427AA44FB(Local_68.f_486) < 0.477f)
				{
					iLocal_55 = 3;
				}
				else if (unk_0x19779E7427AA44FB(Local_68.f_486) < 0.487f)
				{
					iLocal_55 = 4;
				}
				else if (unk_0x19779E7427AA44FB(Local_68.f_486) < 0.809f)
				{
					iLocal_55 = 5;
				}
				else if (unk_0x19779E7427AA44FB(Local_68.f_486) < 0.871f)
				{
					iLocal_55 = 6;
				}
				else if (unk_0x19779E7427AA44FB(Local_68.f_486) < 0.894f)
				{
					iLocal_55 = 7;
				}
				else if (unk_0x19779E7427AA44FB(Local_68.f_486) < 0.999f)
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
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
	{
		unk_0x1592B6D205958934(Local_68.f_2, joaat("weapon_pumpshotgun"), 12, 0, 1);
		unk_0x9687CF9C13C1F6A1(Local_68.f_2, joaat("weapon_pumpshotgun"), 0);
		unk_0x054E434B0AECBDA6(Local_68.f_2, -2065892691);
		unk_0x2A6B9F9E71C479CF(&(Local_68.f_2.f_22));
		unk_0xF0C6B04F5AFE0B40(0, Local_68.f_0, 2000, 0);
		unk_0x2818FB4F0AE44857(0, Local_68.f_0, 4000, joaat("FIRING_PATTERN_FULL_AUTO"));
		unk_0x45ED0B787875F3AA(0, 25f, 0);
		unk_0x44642CB08FA1637E(Local_68.f_2.f_22);
		unk_0xB8A8FA4B28E9F423(Local_68.f_2, Local_68.f_2.f_22);
	}
}

int func_19()
{
	if (Global_15712 != 0 || unk_0x1066B6347C40B301())
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
	if (!unk_0x0B6E83A9A7ED3EBA(uParam1))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam1, 1) };
	}
	if (unk_0x5E9F3856F26E26EC(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xBD4E01D7376FA838(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x521CC5B1D76CAD7D(uParam0, 2))
	{
		if (unk_0x102639E2874F3AA1(uParam0))
		{
			if (unk_0xA427F05DB896EEBE(iParam1, unk_0xAF99169F0F5AE41D(uParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x6867AF84AF12BEFC(unk_0xCBABEE38E5DAB356(iParam1), iParam0, 120f) && unk_0xC76E1A07C6272140(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xB42592B9FFEB5EDE(unk_0xCBABEE38E5DAB356(iParam1), 0))
			{
				iVar3 = unk_0xF8D66A34AF0C53A5(unk_0xCBABEE38E5DAB356(iParam1), 0);
			}
			if (unk_0x7E0A8E0015B69AA4(iParam0) || func_21(iVar3))
			{
				if (unk_0xA427F05DB896EEBE(iParam1, unk_0xAF99169F0F5AE41D(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x6867AF84AF12BEFC(unk_0xCBABEE38E5DAB356(iParam1), iParam0, 120f) && unk_0xC76E1A07C6272140(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x1B2F50A8C0266050((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
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
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (unk_0x968EA16107097324(iParam0, 0))
		{
			if (unk_0x07A8845F7F106A38(iParam0, -1) != 0)
			{
				if (unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_22(unk_0x77F050A399DB77ED(), iParam0, 1) < 40f)
						{
							if (unk_0x007994E31CDF504F(unk_0x8ACD527A7E574590(), &uVar1))
							{
								if ((unk_0xDD21A3DB256904E7(uVar1) && unk_0x2EF671D3645D271D(iVar1) == iParam0) || (unk_0x94195F7CA642F937(iVar1) && unk_0xCBABEE38E5DAB356(iVar1) == unk_0x07A8845F7F106A38(iParam0, -1)))
								{
									if ((unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED()) && unk_0xE721293454745300(0, 24)) || (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && unk_0xE721293454745300(0, 69)))
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
	
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	if (!unk_0x0B6E83A9A7ED3EBA(uParam1))
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 0) };
	}
	return unk_0xA2490B3CE6382FBB(Var0, Var3, iParam2);
}

int func_23()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_0))
	{
		if (unk_0xB42592B9FFEB5EDE(Local_68.f_0, 0))
		{
			iVar1 = unk_0xF8D66A34AF0C53A5(Local_68.f_0, 0);
			bVar0 = true;
		}
		else if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
		{
			iVar1 = unk_0xD8D1111EA0CFD1DB();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iVar1))
		{
			if (unk_0xCA55F1A0D9ADE3AD(iVar1, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
			{
				return 1;
			}
			else if (unk_0xCA55F1A0D9ADE3AD(iVar1, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
			{
				return 1;
			}
			else if (unk_0xCA55F1A0D9ADE3AD(iVar1, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
			{
				return 1;
			}
			else if (Local_68.f_199 != -1f)
			{
				if (unk_0xCA55F1A0D9ADE3AD(iVar1, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
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
	
	unk_0x587BE7B13B3A93BF(iParam0, &uVar0, 1);
	return uVar0;
}

int func_25()
{
	if (unk_0xB1A77D5C890711F9(joaat("appcamera")) > 0)
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
					if (!func_1(Global_99250.f_18653.f_20, 1))
					{
						switch (func_35("SHR_HOLDUP_1"))
						{
							case 2:
								func_33("SHR_HOLDUP_1", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_279(&(Global_99250.f_18653.f_20), 1);
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
						if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
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
					if (!func_1(Global_99250.f_18653.f_20, 2))
					{
						switch (func_35("SHR_SNK_TUT"))
						{
							case 2:
								func_33("SHR_SNK_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_279(&(Global_99250.f_18653.f_20), 2);
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
				unk_0x4ACCE973F9C3CA3B(1);
			}
			if (func_32("SHR_SNK_TUT") && !func_1(Global_99250.f_18653.f_20, 2))
			{
				func_28("SHR_SNK_TUT", 1);
			}
			if (func_32("SHR_HOLDUP_1") && !func_1(Global_99250.f_18653.f_20, 1))
			{
				func_28("SHR_HOLDUP_1", 1);
			}
			iLocal_52 = 4;
			break;
		
		case 4:
			if ((!func_288() && func_32("SHR_HOLDUP_1")) && !func_1(Global_99250.f_18653.f_20, 1))
			{
				func_28("SHR_HOLDUP_1", 1);
				iLocal_52 = 2;
			}
			if ((!func_288() && func_32("SHR_SNK_TUT")) && !func_1(Global_99250.f_18653.f_20, 2))
			{
				func_28("SHR_SNK_TUT", 1);
				iLocal_52 = 2;
			}
			break;
	}
}

int func_27(char* sParam0)
{
	unk_0xBA89110203C50939(sParam0);
	return unk_0x62881E3F5F311834(0);
}

void func_28(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_97892 && iParam1)
	{
		if (func_27(sParam0) && !unk_0x3BBFCC8A1D8DA1E8())
		{
			unk_0x4ACCE973F9C3CA3B(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0x35D1CAD6ADAB6491(sParam0, &(Global_99250.f_24863[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_99250.f_24863.f_145 - 2))
			{
				func_31(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_30((Global_99250.f_24863.f_145 - 1));
			Global_99250.f_24863.f_145 = (Global_99250.f_24863.f_145 - 1);
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
		Global_99250.f_24863.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[0])
			{
				Global_99250.f_24863.f_146[0] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[1])
			{
				Global_99250.f_24863.f_146[1] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_24863[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99250.f_24863[iVar0 /*16*/].f_12 > Global_99250.f_24863.f_146[2])
			{
				Global_99250.f_24863.f_146[2] = Global_99250.f_24863[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_30(int iParam0)
{
	StringCopy(&(Global_99250.f_24863[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_99250.f_24863[iParam0 /*16*/].f_4), "", 16);
	Global_99250.f_24863[iParam0 /*16*/].f_8 = 0;
	Global_99250.f_24863[iParam0 /*16*/].f_9 = 0;
	Global_99250.f_24863[iParam0 /*16*/].f_11 = 0;
	Global_99250.f_24863[iParam0 /*16*/].f_10 = -1;
	Global_99250.f_24863[iParam0 /*16*/].f_12 = 0;
	Global_99250.f_24863[iParam0 /*16*/].f_13 = 0;
	Global_99250.f_24863[iParam0 /*16*/].f_14 = 0;
	Global_99250.f_24863[iParam0 /*16*/].f_15 = 0;
}

void func_31(int iParam0, int iParam1)
{
	Global_99250.f_24863[iParam0 /*16*/] = { Global_99250.f_24863[iParam1 /*16*/] };
	Global_99250.f_24863[iParam0 /*16*/].f_4 = { Global_99250.f_24863[iParam1 /*16*/].f_4 };
	Global_99250.f_24863[iParam0 /*16*/].f_8 = Global_99250.f_24863[iParam1 /*16*/].f_8;
	Global_99250.f_24863[iParam0 /*16*/].f_10 = Global_99250.f_24863[iParam1 /*16*/].f_10;
	Global_99250.f_24863[iParam0 /*16*/].f_9 = Global_99250.f_24863[iParam1 /*16*/].f_9;
	Global_99250.f_24863[iParam0 /*16*/].f_11 = Global_99250.f_24863[iParam1 /*16*/].f_11;
	Global_99250.f_24863[iParam0 /*16*/].f_12 = Global_99250.f_24863[iParam1 /*16*/].f_12;
	Global_99250.f_24863[iParam0 /*16*/].f_13 = Global_99250.f_24863[iParam1 /*16*/].f_13;
	Global_99250.f_24863[iParam0 /*16*/].f_14 = Global_99250.f_24863[iParam1 /*16*/].f_14;
	Global_99250.f_24863[iParam0 /*16*/].f_15 = Global_99250.f_24863[iParam1 /*16*/].f_15;
}

int func_32(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0x35D1CAD6ADAB6491(sParam0, &(Global_99250.f_24863[iVar0 /*16*/])))
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
	
	if (unk_0x35D1CAD6ADAB6491(sParam0, ""))
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
	while (iVar0 < Global_99250.f_24863.f_145)
	{
		if (unk_0x35D1CAD6ADAB6491(&(Global_99250.f_24863[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99250.f_24863.f_145 < 9)
	{
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_4), sParam1, 16);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_8 = (unk_0x3EAC9995EC220C5A() + iParam3);
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_9 = iParam5;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_11 = iParam6;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_12 = uParam2;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_13 = iParam7;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_14 = iParam8;
		Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = ((unk_0x3EAC9995EC220C5A() + iParam3) + iParam4);
		}
		else
		{
			Global_99250.f_24863[Global_99250.f_24863.f_145 /*16*/].f_10 = -1;
		}
		Global_99250.f_24863.f_145++;
		func_29();
	}
}

int func_35(char* sParam0)
{
	if (unk_0x35D1CAD6ADAB6491(sParam0, &Global_97895))
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
		if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_0))
		{
		}
	}
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
	{
	}
	switch (iLocal_53)
	{
		case 1:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_GREET", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 2:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, func_45(bLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 3:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, func_45(bLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 4:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, func_45(bLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 5:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, func_45(bLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 6:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, func_45(bLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 15:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 7:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 8:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 36:
			if (!func_19())
			{
				if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
				{
					func_47(Local_68.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 9:
			if (!func_19())
			{
				if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
				{
					func_47(Local_68.f_2, "BUMP", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 10:
			if (!func_19())
			{
				if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
				{
					func_47(Local_68.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 11:
			if (!func_19())
			{
				if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
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
						if (!unk_0x1E80C02AC16B6622(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							unk_0x642DDF74A8A2B3BB(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
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
			if (!unk_0x02807DDCACCF5736(unk_0x77F050A399DB77ED()))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
				{
					func_47(unk_0x77F050A399DB77ED(), "SHOP_HOLDUP", 8);
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
				unk_0xD94FD848D9F76114(unk_0x77F050A399DB77ED());
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
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 17:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 18:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 19:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 20:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 21:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 22:
			if (!unk_0x02807DDCACCF5736(unk_0x77F050A399DB77ED()))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
				{
					func_47(Local_68.f_2, "SHOP_BRAVE", 8);
				}
				func_279(&(Local_68.f_470), 256);
				iLocal_53 = 37;
			}
			break;
		
		case 23:
			if (!unk_0x02807DDCACCF5736(unk_0x77F050A399DB77ED()))
			{
				if (Local_68.f_28.f_14)
				{
					if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
					{
						func_47(Local_68.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_53 = 37;
			}
			else
			{
				unk_0xD94FD848D9F76114(unk_0x77F050A399DB77ED());
			}
			break;
		
		case 24:
			if (unk_0x968EA16107097324(Local_68.f_46.f_4[0], 0))
			{
				unk_0xE6AD70126CB40815(Local_68.f_46.f_4[0], 0);
			}
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_46[0]))
			{
				func_47(Local_68.f_46[0], "SURROUNDED", 15);
			}
			iLocal_53 = 25;
			break;
		
		case 25:
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
			{
				func_47(unk_0x77F050A399DB77ED(), "SPOT_POLICE", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 26:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 27:
			if (!func_19())
			{
				if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
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
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_53 = 37;
			break;
		
		case 29:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				func_47(Local_68.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_53 = 37;
			break;
		
		case 30:
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
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
			if (!unk_0x02807DDCACCF5736(unk_0x77F050A399DB77ED()) && !unk_0x02807DDCACCF5736(Local_68.f_2))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
				{
					func_47(unk_0x77F050A399DB77ED(), "SHOP_HURRY", 11);
				}
				func_12(&(Local_68.f_471));
				iLocal_53 = 32;
			}
			break;
		
		case 32:
			if (func_40(&(Local_68.f_471)) > 1f)
			{
				if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
				{
					func_47(Local_68.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 34:
			if (!func_19())
			{
				if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
				{
					func_47(Local_68.f_2, "SHOP_SELL", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 35:
			if (!func_19())
			{
				if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
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
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(0);
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
			return (func_9(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - uParam0->f_1);
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
			uParam0->f_2 = (func_9(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - uParam0->f_1);
			unk_0x573691DB812DC8AA(uParam0, 2);
		}
	}
}

void func_42(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_10(uParam0))
		{
			uParam0->f_1 = (func_9(unk_0xB56FEBC510E7E9DE(*uParam0, 4)) - uParam0->f_2);
			uParam0->f_2 = 0f;
			unk_0xA5F70A8B83BDFA49(uParam0, 2);
		}
	}
}

int func_43()
{
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_0))
	{
		if (unk_0xCA55F1A0D9ADE3AD(Local_68.f_0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_44()
{
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_0))
	{
		if (unk_0xCA55F1A0D9ADE3AD(Local_68.f_0, Local_68.f_214, Local_68.f_217, Local_68.f_220, 0, 1, 0))
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
	if (unk_0xB56FEBC510E7E9DE(unk_0xA3746E7F17F47DC2(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_47(int iParam0, char* sParam1, int iParam2)
{
	unk_0x71C24FB536157D30(iParam0, sParam1, func_48(iParam2), 1);
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
		while (iVar2 < unk_0xE8F73785A0FB2F57(0))
		{
			iVar0 = unk_0x6688A198308BEB5E(0, iVar2);
			switch (iVar0)
			{
				case 140:
					unk_0xA961A8FBAD16D683(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (unk_0x94195F7CA642F937(iVar1))
						{
							if (iVar1 != func_51(Local_68.f_2) && iVar1 != func_51(unk_0x77F050A399DB77ED()))
							{
								func_279(&(Local_68.f_470), 8);
							}
						}
						if (!unk_0x94195F7CA642F937(iVar1) && !unk_0xDD21A3DB256904E7(iVar1))
						{
							func_279(&(Local_68.f_470), 8);
						}
					}
					break;
				
				case 139:
					unk_0xA961A8FBAD16D683(0, iVar2, &iVar1, 1);
					if (func_52(iVar1))
					{
						if (unk_0x94195F7CA642F937(iVar1))
						{
							if (iVar1 != func_51(Local_68.f_2) && iVar1 != func_51(unk_0x77F050A399DB77ED()))
							{
								func_279(&(Local_68.f_470), 8);
							}
						}
						if (!unk_0x94195F7CA642F937(iVar1) && !unk_0xDD21A3DB256904E7(iVar1))
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
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		if (unk_0xFC0420DC987053AC(iParam0) == Local_68.f_185)
		{
			return 1;
		}
		else if (unk_0xCA55F1A0D9ADE3AD(iParam0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0xCA55F1A0D9ADE3AD(iParam0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0xCA55F1A0D9ADE3AD(iParam0, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (unk_0xCA55F1A0D9ADE3AD(iParam0, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
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
	
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (func_288())
		{
			if (!unk_0xB56FEBC510E7E9DE(Local_68.f_162.f_18, 0))
			{
				iVar12 = 0;
				iVar13 = 0;
				iVar12 = unk_0xC153C0A3AB834C19(unk_0x77F050A399DB77ED(), &uVar1, -1);
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
						if ((unk_0x1F2158D615BC4B25(uVar1[iVar13]) && !unk_0x1E80C02AC16B6622(uVar1[iVar13])) && !unk_0xB42592B9FFEB5EDE(uVar1[iVar13], 0))
						{
							if (unk_0x5BC4B43DD7116FE0(uVar1[iVar13], unk_0x9E97D0ACA210D142(unk_0x8ACD527A7E574590())))
							{
								Local_68.f_162[iVar0] = uVar1[iVar13];
								Local_68.f_162.f_5[iVar0 /*3*/] = { unk_0xAF99169F0F5AE41D(uVar1[iVar13], 1) };
								iVar0++;
							}
						}
					}
					iVar13++;
				}
				unk_0x573691DB812DC8AA(&(Local_68.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_68.f_162)
			{
				if ((unk_0x1F2158D615BC4B25(Local_68.f_162[iVar0]) && !unk_0x1E80C02AC16B6622(Local_68.f_162[iVar0])) && !unk_0xB42592B9FFEB5EDE(Local_68.f_162[iVar0], 0))
				{
					if (unk_0xB56FEBC510E7E9DE(Local_68.f_162.f_18, 1))
					{
						if ((unk_0x3EAC9995EC220C5A() % 1500) < 50)
						{
						}
						unk_0x68E5332DF8C1DA5A(Local_68.f_162[iVar0], 0, 0);
						unk_0x5817B24FA3E70BC6(Local_68.f_162[iVar0], 0, 0);
						unk_0xB92C428B448B51A4(Local_68.f_162[iVar0], 1);
						unk_0x1021AD8FA25CC2DB(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
					else if (!unk_0xD0935EF5E40E7EE1(Local_68.f_162[iVar0]))
					{
						unk_0x68E5332DF8C1DA5A(Local_68.f_162[iVar0], 1, 0);
						unk_0x5817B24FA3E70BC6(Local_68.f_162[iVar0], 1, 0);
						unk_0xB92C428B448B51A4(Local_68.f_162[iVar0], 0);
						unk_0x1021AD8FA25CC2DB(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (unk_0xB56FEBC510E7E9DE(Local_68.f_162.f_18, 0))
			{
				unk_0xA5F70A8B83BDFA49(&(Local_68.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_68.f_162)
			{
				if ((unk_0x1F2158D615BC4B25(Local_68.f_162[iVar0]) && !unk_0x1E80C02AC16B6622(Local_68.f_162[iVar0])) && !unk_0xB42592B9FFEB5EDE(Local_68.f_162[iVar0], 0))
				{
					if (!unk_0xD0935EF5E40E7EE1(Local_68.f_162[iVar0]))
					{
						unk_0x68E5332DF8C1DA5A(Local_68.f_162[iVar0], 1, 0);
						unk_0x5817B24FA3E70BC6(Local_68.f_162[iVar0], 1, 0);
						unk_0xB92C428B448B51A4(Local_68.f_162[iVar0], 0);
						unk_0x1021AD8FA25CC2DB(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
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
				unk_0x3F1BA020DCFDDF70(unk_0x8ACD527A7E574590());
				unk_0x6E2E777C1AD81C36("oddjobs@shop_robbery@rob_till");
				unk_0x6E2E777C1AD81C36("misscommon@response");
				unk_0x011CAFBB4767F059(func_63(iLocal_568), false);
				unk_0xC60576ADD1AECA45(joaat("prop_choc_ego"));
				unk_0xC60576ADD1AECA45(joaat("prop_choc_meto"));
				unk_0xC60576ADD1AECA45(joaat("prop_choc_pq"));
				if (!bLocal_574)
				{
					unk_0xC60576ADD1AECA45(Local_68.f_46.f_26);
					unk_0xC60576ADD1AECA45(Local_68.f_46.f_27);
				}
				iLocal_622 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x5F4EA7D1E9029E5C("SCRIPT\MARKET_CASH_REGISTER", false))
			{
				return;
			}
			if (!unk_0x5263DE3D9A17A86F("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!unk_0x5263DE3D9A17A86F("misscommon@response"))
			{
				return;
			}
			if (!unk_0x4A4B6FD54C499B7D(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!unk_0x4A4B6FD54C499B7D(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!unk_0x4A4B6FD54C499B7D(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_574)
			{
				if (!unk_0x4A4B6FD54C499B7D(Local_68.f_46.f_26))
				{
					return;
				}
				if (!unk_0x4A4B6FD54C499B7D(Local_68.f_46.f_27))
				{
					return;
				}
			}
			if (!func_61("SNK_MNU", iLocal_568, 0))
			{
				return;
			}
			if (!func_1(Local_68.f_470, 4))
			{
				if (!func_1(Local_68.f_470, 1024))
				{
					uLocal_618[0] = unk_0x4A498A71A7B2E7A5(func_60(0), func_59(0), 1, 1, 0);
					uLocal_618[1] = unk_0x4A498A71A7B2E7A5(func_60(1), func_59(1), 1, 1, 0);
					uLocal_618[2] = unk_0x4A498A71A7B2E7A5(func_60(2), func_59(2), 1, 1, 0);
					unk_0x68E5332DF8C1DA5A(uLocal_618[0], 0, 0);
					unk_0x68E5332DF8C1DA5A(uLocal_618[1], 0, 0);
					unk_0x68E5332DF8C1DA5A(uLocal_618[2], 0, 0);
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
	unk_0xD5A53B898943F331("oddjobs@shop_robbery@rob_till");
	unk_0xD5A53B898943F331("misscommon@response");
	unk_0x06956406078018F7("SCRIPT\MARKET_CASH_REGISTER");
	unk_0x18D66253D62D657B(func_63(iLocal_568));
	unk_0xFB4F6722A032A0F0(joaat("prop_choc_ego"));
	unk_0xFB4F6722A032A0F0(joaat("prop_choc_meto"));
	unk_0xFB4F6722A032A0F0(joaat("prop_choc_pq"));
	func_56(1, iLocal_568);
	if (!bLocal_574)
	{
		unk_0xFB4F6722A032A0F0(Local_68.f_46.f_26);
		unk_0xFB4F6722A032A0F0(Local_68.f_46.f_27);
	}
}

void func_56(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17257.f_7857)
	{
		unk_0x2CFB33EDB2933AD4(15);
		Global_17257.f_7857 = 0;
	}
	unk_0x0B46E54044546374(0f);
	if (Global_17257.f_5498[iVar0])
	{
		unk_0x9516B90C3EE9BEBE(9, false);
		Global_17257.f_5498[iVar0] = 0;
	}
	if (Global_17257.f_5484[iVar0])
	{
		unk_0x18D66253D62D657B("CommonMenu");
		Global_17257.f_5484[iVar0] = 0;
	}
	if (Global_17257.f_5491[iVar0])
	{
		unk_0x18D66253D62D657B("MPShopSale");
		Global_17257.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_57(&(Global_17257.f_5530[iVar0 /*10*/]));
		Global_17257.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17257.f_5591[iVar0] = 0;
	}
}

void func_57(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xEDE19C6ED6E2F478(*uParam0))
		{
			unk_0xD2E03CEA477E4E3D(uParam0);
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
		if (unk_0x4C779B19E6DDCDA2() && unk_0xCD9901F3C995D4B9())
		{
			iParam2 = unk_0x9164EC35BC992D17();
		}
	}
	StringCopy(&cVar0, unk_0x664B47C58CE8A0A4(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x39BD4614CF899227(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17257.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5591[iVar18] = iVar16;
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

bool func_61(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_58(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17257.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x0AAC2160036975D9(&(Global_17257.f_5505[iVar0 /*4*/])))
	{
		unk_0xC8C54AFEF8609CEF(&(Global_17257.f_5505[iVar0 /*4*/]), 9);
		Global_17257.f_5498[iVar0] = 1;
		if (!unk_0x5BD43F5CABDAEA1F(&(Global_17257.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x011CAFBB4767F059("CommonMenu", false);
	Global_17257.f_5484[iVar0] = 1;
	if (!unk_0x234DE5FAACE83930("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x011CAFBB4767F059("MPShopSale", false);
		Global_17257.f_5491[iVar0] = 1;
		if (!unk_0x234DE5FAACE83930("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17257.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_62(&(Global_17257.f_5530[iVar0 /*10*/]));
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
			if (!unk_0xEDE19C6ED6E2F478(*uParam0))
			{
				*uParam0 = unk_0x2F14983962462691(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xEDE19C6ED6E2F478(*uParam0))
					{
						uParam0->f_8 = unk_0x3EAC9995EC220C5A();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x3EAC9995EC220C5A();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xEDE19C6ED6E2F478(*uParam0))
			{
				uParam0->f_8 = unk_0x3EAC9995EC220C5A();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xEDE19C6ED6E2F478(*uParam0))
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
				unk_0x6E2E777C1AD81C36(Local_68.f_486.f_1);
				iLocal_623 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x5263DE3D9A17A86F(Local_68.f_486.f_1))
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
				unk_0xD5A53B898943F331(Local_68.f_486.f_1);
				func_286(&(Local_68.f_470), 16);
				iLocal_623 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_68.f_470, 16))
			{
				unk_0xD5A53B898943F331(Local_68.f_486.f_1);
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
				if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
				{
				}
				if (unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0))
				{
					unk_0x568339BA073CEE94(unk_0x8ACD527A7E574590());
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
	if (((((iLocal_60 == 1 || iLocal_60 == 2) && unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) == 0) && !unk_0x1E80C02AC16B6622(Local_68.f_0)) && !func_175(-1082130432)) && !unk_0x1E80C02AC16B6622(Local_68.f_2))
	{
		iVar1 = unk_0x070BBD7287E8E744(unk_0x77F050A399DB77ED());
		iVar2 = unk_0x3D59A8D081DBFA24(unk_0x77F050A399DB77ED());
		if (((iLocal_66 != 2 && iLocal_66 != 3) && iLocal_66 != 4) && func_288())
		{
			if (!unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
			{
				unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
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
						Var3 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
						if (unk_0xA2490B3CE6382FBB(Var3, Local_68.f_102.f_33, 1) < 5f)
						{
							if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), Local_68.f_102.f_26[0 /*3*/], Local_68.f_102.f_26[1 /*3*/], Local_68.f_102.f_36, 0, 1, 0))
							{
								if (unk_0x9F1C24920030C183(unk_0x77F050A399DB77ED(), Local_68.f_102.f_33, 135f))
								{
									if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
									{
									}
									if (((!func_27("SHR_HOLDUP_1") && !func_27("SHR_MENU")) && !func_49()) && func_173())
									{
										func_172("SHR_MENU");
									}
									Local_68.f_469 = -1;
									func_171(&(Local_68.f_469), 4, "SHR_MENU", 0, 0, 0);
									unk_0xA5F70A8B83BDFA49(&(Local_68.f_162.f_18), 1);
									unk_0xA5F70A8B83BDFA49(&(Local_68.f_162.f_18), 0);
									iLocal_66 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!unk_0x9F1C24920030C183(unk_0x77F050A399DB77ED(), Local_68.f_102.f_33, 135f) || !func_24(Local_68.f_0) == joaat("weapon_unarmed"))
				{
					if (func_27("SHR_MENU"))
					{
						unk_0x4ACCE973F9C3CA3B(1);
					}
					Local_68.f_102.f_22 = -1;
					func_170(&(Local_68.f_469));
					iLocal_66 = 0;
				}
				else if (((!func_27("SHR_MENU") && !func_27("SHR_HOLDUP_1")) && func_173()) && !func_169(Local_68.f_469, 0))
				{
					func_172("SHR_MENU");
				}
				if ((!unk_0x85757E7CE8A5768D(unk_0x77F050A399DB77ED()) && !unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) && !unk_0xDA04659F89FF1D4A(unk_0x77F050A399DB77ED()))
				{
					if (func_167(Local_68.f_469, 1))
					{
						if (func_27("SHR_MENU"))
						{
							unk_0x4ACCE973F9C3CA3B(1);
						}
						unk_0x573691DB812DC8AA(&(Local_68.f_162.f_18), 1);
						func_12(&(Local_68.f_102.f_53));
						func_170(&(Local_68.f_469));
						func_166(23, 1);
						if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !unk_0x1E80C02AC16B6622(Local_68.f_2))
						{
							unk_0x9A42ADE14351A508(unk_0x77F050A399DB77ED(), Local_68.f_2, 0);
						}
						iLocal_66 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0x06F36936289C5EC8(uLocal_641))
				{
					uLocal_641 = unk_0xEDBA42E4C9B7F653(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				func_165(iLocal_568, Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, &(Local_68.f_102), &(Local_68.f_102.f_3), &uVar8);
				unk_0xB2849E944D427EE8(uLocal_641, Local_68.f_102);
				unk_0x9CB35C360CE97517(uLocal_641, Local_68.f_102.f_3, 2);
				unk_0x93C424DD4488A7BF(uLocal_641, 35f);
				unk_0xBB088A7B5EA9D960(uLocal_641, "HAND_SHAKE", 0.1f);
				unk_0x12A448112D057EB4(uLocal_641, 1);
				unk_0x81ADE7722FD45216(1, 0, 3000, 1, 0, 0);
				if (unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
				{
					unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 0, 0);
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
				if (unk_0x2C063B4379F0C076())
				{
					if (unk_0x669BCDFA3148F8E3(2))
					{
						unk_0x6E20845D23D3DFD4(0, 1, 1);
						unk_0x6E20845D23D3DFD4(0, 2, 1);
						unk_0x8925C274703E7EF6(0, 237, 1);
						unk_0x8925C274703E7EF6(0, 238, 1);
						unk_0x8925C274703E7EF6(0, 241, 1);
						unk_0x8925C274703E7EF6(0, 242, 1);
						func_144(0, 0, 0, 1);
						func_143(0, -1, 1);
						if (func_142())
						{
							if (Global_2557489 != Local_68.f_102.f_23)
							{
								unk_0xBBEB613A917D7EE8(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								Local_68.f_102.f_23 = Global_2557489;
								func_149(Local_68.f_102.f_23, 1, 1);
								Local_68.f_102.f_37 = 0;
								Local_68.f_102.f_41 = 0;
								Local_68.f_102.f_42 = 0;
								sVar7 = func_141(Local_68.f_102.f_23);
								if (unk_0x03BBACB5FC5BF182(sVar7))
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
				if (unk_0x09097C4EB51A520B(2, 201) || iVar6 == 1)
				{
					Local_68.f_102.f_37 = 1;
					Local_68.f_102.f_41 = 0;
					Local_68.f_102.f_42 = 0;
					if (Local_68.f_102.f_40 && Local_68.f_102.f_43)
					{
						Local_68.f_102.f_44 = 1;
						unk_0xBBEB613A917D7EE8(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						iLocal_631 = 1;
						iLocal_634 = Local_68.f_102.f_23;
						iLocal_66 = 4;
					}
					else
					{
						Local_68.f_102.f_44 = 0;
						unk_0xBBEB613A917D7EE8(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
				}
				if (unk_0x09097C4EB51A520B(2, 203))
				{
					iLocal_66 = 6;
					unk_0xBBEB613A917D7EE8(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_100();
				}
				if (unk_0x09097C4EB51A520B(2, 202) || unk_0xCCA0765A3DB2A871(2, 238))
				{
					iLocal_66 = 7;
					Local_68.f_102.f_45 = unk_0x3EAC9995EC220C5A();
					unk_0xBBEB613A917D7EE8(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
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
							unk_0x9F48F299B333353E(unk_0x77F050A399DB77ED(), iVar2);
						}
						else
						{
							unk_0x9F48F299B333353E(unk_0x77F050A399DB77ED(), iVar1 + 10);
						}
						break;
					
					case 1:
						iVar0 = func_154(Local_68.f_102.f_23);
						if (iVar1 + 20 > iVar2)
						{
							unk_0x9F48F299B333353E(unk_0x77F050A399DB77ED(), iVar2);
						}
						else
						{
							unk_0x9F48F299B333353E(unk_0x77F050A399DB77ED(), iVar1 + 20);
						}
						break;
					
					case 2:
						iVar0 = func_154(Local_68.f_102.f_23);
						if (iVar1 + 15 > iVar2)
						{
							unk_0x9F48F299B333353E(unk_0x77F050A399DB77ED(), iVar2);
						}
						else
						{
							unk_0x9F48F299B333353E(unk_0x77F050A399DB77ED(), iVar1 + 15);
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
				if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
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
							unk_0x9F48F299B333353E(unk_0x77F050A399DB77ED(), iVar2);
						}
						else
						{
							unk_0x9F48F299B333353E(unk_0x77F050A399DB77ED(), iVar1 + 10);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							unk_0x9F48F299B333353E(unk_0x77F050A399DB77ED(), iVar2);
						}
						else
						{
							unk_0x9F48F299B333353E(unk_0x77F050A399DB77ED(), iVar1 + 20);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							unk_0x9F48F299B333353E(unk_0x77F050A399DB77ED(), iVar2);
						}
						else
						{
							unk_0x9F48F299B333353E(unk_0x77F050A399DB77ED(), iVar1 + 15);
						}
						break;
				}
				unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 1, 0);
				func_166(23, 0);
				iLocal_53 = 35;
				if (!unk_0x1E80C02AC16B6622(Local_68.f_2) && func_1(Local_68.f_470, 4))
				{
					unk_0x642DDF74A8A2B3BB(Local_68.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) < 1)
				{
					func_15(1, 0);
				}
				iLocal_66 = 8;
				break;
			
			case 7:
				if ((unk_0x3EAC9995EC220C5A() - Local_68.f_102.f_45) > 1000)
				{
					iLocal_66 = 0;
				}
				else
				{
					unk_0xE494527A450B8456(2, 193);
					unk_0xE494527A450B8456(2, 202);
					unk_0xE494527A450B8456(2, 188);
					unk_0xE494527A450B8456(2, 187);
					unk_0xE494527A450B8456(2, 189);
					unk_0xE494527A450B8456(2, 190);
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
			unk_0x4ACCE973F9C3CA3B(1);
			func_170(&(Local_68.f_469));
		}
		if (func_27("SHR_MENU"))
		{
			unk_0x4ACCE973F9C3CA3B(1);
			func_170(&(Local_68.f_469));
		}
		if (unk_0xB56FEBC510E7E9DE(Local_68.f_162.f_18, 1) && iLocal_624 < 2)
		{
			unk_0xA5F70A8B83BDFA49(&(Local_68.f_162.f_18), 1);
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
		if (!unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				unk_0xE2CB8488CFA42209(unk_0x77F050A399DB77ED());
			}
			unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
			func_286(&(Local_68.f_470), 2048);
		}
	}
	Local_68.f_102.f_37 = 0;
	unk_0xA5F70A8B83BDFA49(&(Local_68.f_162.f_18), 1);
	if (unk_0x06F36936289C5EC8(uLocal_641))
	{
		unk_0xFE65076A204F9258(uLocal_641, 0);
	}
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_69(Global_99250.f_32503[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
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
					switch (unk_0xD8D50BE3C4300244())
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
	iVar5 = (Global_52834[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52834[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52834[iVar2] = 2147483647;
				}
				else
				{
					Global_52834[iVar2] = (Global_52834[iVar2] + iParam3);
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
				if ((Global_52834[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52834[iVar2];
			Global_52834[iVar2] = (Global_52834[iVar2] - iParam3);
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
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_2[Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_99250.f_25017.f_233[iVar2 /*69*/]++;
		Global_99250.f_25017.f_233[iVar2 /*69*/].f_1++;
		if (Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_99250.f_25017.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_71(iParam0);
	if (Global_35700 == 15)
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
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_99250.f_25017.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52842[iVar0 /*3*/][0] = Global_99250.f_25017[iVar0];
		Global_52842.f_31[iVar0 /*3*/][0] = Global_99250.f_25017.f_11[iVar0];
		Global_52842.f_62[iVar0 /*3*/][0] = Global_99250.f_25017.f_22[iVar0];
		Global_52842.f_93[iVar0 /*3*/][0] = Global_99250.f_25017.f_33[iVar0];
		Global_52842.f_124[iVar0 /*3*/][0] = Global_99250.f_25017.f_44[iVar0];
		Global_52842.f_155[iVar0 /*3*/][0] = Global_99250.f_25017.f_55[iVar0];
		Global_52842.f_186[iVar0 /*3*/][0] = Global_99250.f_25017.f_66[iVar0];
		Global_52842.f_217[iVar0 /*3*/][0] = Global_99250.f_25017.f_77[iVar0];
		Global_52842.f_248[iVar0 /*3*/][0] = Global_99250.f_25017.f_88[iVar0];
		if (!bParam0)
		{
			Global_52842[iVar0 /*3*/][1] = Global_99250.f_25017[iVar0];
			Global_52842.f_31[iVar0 /*3*/][1] = Global_99250.f_25017.f_11[iVar0];
			Global_52842.f_62[iVar0 /*3*/][1] = Global_99250.f_25017.f_22[iVar0];
			Global_52842.f_93[iVar0 /*3*/][1] = Global_99250.f_25017.f_33[iVar0];
			Global_52842.f_124[iVar0 /*3*/][1] = Global_99250.f_25017.f_44[iVar0];
			Global_52842.f_155[iVar0 /*3*/][1] = Global_99250.f_25017.f_55[iVar0];
			Global_52842.f_186[iVar0 /*3*/][1] = Global_99250.f_25017.f_66[iVar0];
			Global_52842.f_217[iVar0 /*3*/][1] = Global_99250.f_25017.f_77[iVar0];
			Global_52842.f_248[iVar0 /*3*/][1] = Global_99250.f_25017.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_71(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52834[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x5716C8F12991E399(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x5716C8F12991E399(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x5716C8F12991E399(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_72(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x4C779B19E6DDCDA2())
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0) || unk_0xB56FEBC510E7E9DE(Global_2097152[func_74() /*10185*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xA5F70A8B83BDFA49(&(Global_99250.f_25017.f_471), iParam0);
		unk_0xA5F70A8B83BDFA49(&(Global_2097152[func_74() /*10185*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2B8B3581C4E63AD1("COUP_RED");
		unk_0x703D2B4B1C7E10B6(func_73(iParam0));
		unk_0xEF85B88DC049EA23(&cVar1, &cVar1, 1, 0, "", 0);
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
	if (!unk_0x4C779B19E6DDCDA2())
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_25017.f_471, iParam0);
	}
	return unk_0xB56FEBC510E7E9DE(Global_2097152[func_74() /*10185*/].f_7698.f_10, iParam0);
}

int func_77(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xEB1F5947DDF281A3(27))
	{
		return 0;
	}
	if (unk_0xBA16CA557222A92B(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xBA16CA557222A92B(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xBA16CA557222A92B(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xBA16CA557222A92B(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x5716C8F12991E399(joaat("num_cash_spent"), iVar1, 1);
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
	if (unk_0xEB1F5947DDF281A3(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25361 != 0 && !Global_69317)
	{
		return 0;
	}
	if (func_89(&Global_2558981))
	{
		if (func_87(&Global_2558981, iParam0))
		{
			return 0;
		}
		if (func_80(&Global_2558981, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x7F2415D4902EF64D(iParam0))
		{
			return 0;
		}
		if (unk_0xEB1F5947DDF281A3(iParam0))
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
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
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
	
	if (unk_0xEB1F5947DDF281A3(iParam1))
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
	func_85(uParam0, (Global_2558980 - 0.5f));
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
	iVar0 = unk_0xDE96DC4582CFD56F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1CB31CF925F17754(iParam0, iParam1);
	}
	return 0;
}

void func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xBA16CA557222A92B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x5716C8F12991E399(iParam0, iVar0, 1);
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/])
	{
		unk_0xBA16CA557222A92B(Global_51402[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x5716C8F12991E399(Global_51402[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_94()
{
	int iVar0;
	
	if (unk_0x9C77CB51883D12D1())
	{
		unk_0xBA16CA557222A92B(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52834[0] == iVar0)
		{
			Global_52834[0] = iVar0;
		}
		unk_0xBA16CA557222A92B(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52834[1] == iVar0)
		{
			Global_52834[1] = iVar0;
		}
		unk_0xBA16CA557222A92B(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52834[2] == iVar0)
		{
			Global_52834[2] = iVar0;
		}
	}
}

int func_95()
{
	func_96();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_96()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_99(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_98(unk_0x77F050A399DB77ED());
			if (func_97(iVar0) && (!func_302(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_97(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_97(int iParam0)
{
	return iParam0 < 3;
}

int func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
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
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_100()
{
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		unk_0xE2CB8488CFA42209(unk_0x77F050A399DB77ED());
	}
	func_286(&(Local_68.f_470), 2048);
	unk_0xC5FC9A0E5FD51B1A(unk_0x8ACD527A7E574590(), 1, 0);
	unk_0x8793DE27084C2CBD(0);
	unk_0xABF261CA61470DE0(0, 1065353216);
	func_166(23, 0);
	Local_68.f_102.f_37 = 0;
	unk_0xA5F70A8B83BDFA49(&(Local_68.f_162.f_18), 1);
	if (unk_0x06F36936289C5EC8(uLocal_641))
	{
		unk_0xFE65076A204F9258(uLocal_641, 0);
	}
	unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
}

void func_101()
{
	char* sVar0;
	
	unk_0xE494527A450B8456(2, 193);
	unk_0xE494527A450B8456(2, 202);
	unk_0xE494527A450B8456(2, 188);
	unk_0xE494527A450B8456(2, 187);
	unk_0xE494527A450B8456(2, 189);
	unk_0xE494527A450B8456(2, 190);
	if (func_104())
	{
		Local_68.f_102.f_37 = 0;
		func_39(&(Local_68.f_102.f_53));
		Local_68.f_102.f_23 = (Local_68.f_102.f_23 - 1);
		if (Local_68.f_102.f_23 < 0)
		{
			Local_68.f_102.f_23 = (Local_68.f_102.f_24 - 1);
		}
		unk_0xBBEB613A917D7EE8(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_149(Local_68.f_102.f_23, 1, 1);
		sVar0 = func_141(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 0;
		Local_68.f_102.f_42 = 0;
		if (unk_0x03BBACB5FC5BF182(sVar0))
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
		unk_0xBBEB613A917D7EE8(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_149(Local_68.f_102.f_23, 1, 1);
		sVar0 = func_141(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 0;
		Local_68.f_102.f_42 = 0;
		if (unk_0x03BBACB5FC5BF182(sVar0))
		{
			func_148(sVar0, 0, 0);
		}
	}
	if (!Local_68.f_102.f_41)
	{
		Local_68.f_102.f_40 = func_102(func_98(unk_0x77F050A399DB77ED())) >= func_154(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 1;
	}
	if (!Local_68.f_102.f_42)
	{
		Local_68.f_102.f_43 = unk_0x070BBD7287E8E744(unk_0x77F050A399DB77ED()) < unk_0x3D59A8D081DBFA24(unk_0x77F050A399DB77ED());
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
			if (unk_0x03BBACB5FC5BF182(sVar0))
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
			unk_0xBA16CA557222A92B(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xBA16CA557222A92B(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xBA16CA557222A92B(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_103()
{
	float fVar0;
	
	fVar0 = unk_0x42EC09AB11767A03(2, 219);
	if ((fVar0 > 0.8f || unk_0xE721293454745300(2, 187)) || unk_0x618071F6827C232E(2, 242))
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
	
	fVar0 = unk_0x42EC09AB11767A03(2, 219);
	if ((fVar0 < -0.8f || unk_0xE721293454745300(2, 188)) || unk_0x618071F6827C232E(2, 241))
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
	unk_0x015513B8B0CE59A3(76, 84);
	unk_0xCE77A121760CFAD9(-0.05f, -0.05f, 0f, 0f);
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
	if (unk_0x39BD4614CF899227(&(Global_17257.f_1)) == unk_0x39BD4614CF899227("HIDE"))
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
		unk_0x87B14B27D777B56E(&iVar57, &iVar58);
		fVar60 = unk_0x52846F7B892BD059(0);
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
		unk_0x0E0B4DFAC438518B(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5598)
		{
			if (unk_0x39BD4614CF899227(&(Global_17257.f_1)) == unk_0x39BD4614CF899227("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					unk_0xD66F6109A26F109D(func_134(29), func_132(29, 1), (Global_17254 + (fParam5 * 0.5f)), (Global_17255 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7827)
				{
					iVar1 = Global_17257.f_7823;
					iVar2 = Global_17257.f_7824;
					iVar3 = Global_17257.f_7825;
					iVar4 = Global_17257.f_7826;
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
				if (unk_0x39BD4614CF899227(&(Global_17257.f_1)) != 0)
				{
					func_130();
					unk_0x978803CE12B5FCBA(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							unk_0xA50C1D6E503AA51E(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							unk_0x3C6EADCCA29B8BAB(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							unk_0x703D2B4B1C7E10B6(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							unk_0x703D2B4B1C7E10B6(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							unk_0x82E0649BF28E05D3(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							unk_0x703D2B4B1C7E10B6(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							unk_0x82E0649BF28E05D3(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x1AC4FC30A9B7577A((Global_17254 + 0.00390625f), ((Global_17255 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17257.f_5601 > Global_17257.f_5095)
				{
					if (Global_17257.f_5604 != 0)
					{
						func_130();
						func_128((((Global_17254 + fParam5) - 0.00390625f) - func_129("CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603)), ((Global_17255 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603);
					}
				}
			}
			iVar6 = Global_17257.f_5605;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7837)
			{
				iVar1 = Global_17257.f_7833;
				iVar2 = Global_17257.f_7834;
				iVar3 = Global_17257.f_7835;
				iVar4 = Global_17257.f_7836;
			}
			else
			{
				unk_0xF63BA5AC6A181C40(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5095 && iVar6 <= Global_17257.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5355[iVar6])
					{
						if (Global_17257.f_5226[iVar6] && iVar6 != Global_17257.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5612[iVar6];
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
					if (Global_17257.f_5088 <= 1)
					{
						Global_17257.f_5088++;
					}
					iVar52 = 1;
				}
			}
			unk_0xD66F6109A26F109D("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5601 > Global_17257.f_5095)
			{
				if (Global_17257.f_7842)
				{
					iVar1 = Global_17257.f_7838;
					iVar2 = Global_17257.f_7839;
					iVar3 = Global_17257.f_7840;
					iVar4 = Global_17257.f_7841;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_131(Global_17254, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x59A3C08D6C3850F4("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17257.f_7855)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xF63BA5AC6A181C40(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xD66F6109A26F109D("CommonMenu", "shop_arrows_upANDdown", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar59), ((Var37.f_1 / 720f) * fVar59), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x39BD4614CF899227(&(Global_17257.f_4562)) != 0 && Global_17257.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_17257.f_4638 != 0)
				{
					func_136(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_127(fVar41);
				unk_0x48C9E3E402CE023E(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						unk_0xA50C1D6E503AA51E(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						unk_0x3C6EADCCA29B8BAB(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						unk_0x703D2B4B1C7E10B6(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						unk_0x82E0649BF28E05D3(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						unk_0x703D2B4B1C7E10B6(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						unk_0x82E0649BF28E05D3(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x59003DE5DB412E4D(fVar41, (fVar49 + 0.00277776f));
				unk_0xF63BA5AC6A181C40(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_131(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7847)
				{
					iVar1 = Global_17257.f_7843;
					iVar2 = Global_17257.f_7844;
					iVar3 = Global_17257.f_7845;
					iVar4 = Global_17257.f_7846;
				}
				else
				{
					unk_0xF63BA5AC6A181C40(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xD66F6109A26F109D("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xC10EAB47A91B2770(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC10EAB47A91B2770(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_127(fVar41);
				unk_0x978803CE12B5FCBA(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						unk_0xA50C1D6E503AA51E(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						unk_0x3C6EADCCA29B8BAB(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						unk_0x703D2B4B1C7E10B6(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						unk_0x82E0649BF28E05D3(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						unk_0x703D2B4B1C7E10B6(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						unk_0x82E0649BF28E05D3(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 8)
					{
						unk_0x703D2B4B1C7E10B6(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x1AC4FC30A9B7577A(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17257.f_4638 != 0)
				{
					func_136(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, bParam7);
					func_126(Global_17257.f_4638, 1, &iVar46, &iVar47, &iVar48);
					unk_0xD66F6109A26F109D(func_134(Global_17257.f_4638), func_132(Global_17257.f_4638, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xC10EAB47A91B2770(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17257.f_4636 > 0)
				{
					if ((unk_0x3EAC9995EC220C5A() - Global_17257.f_4637) > Global_17257.f_4636)
					{
						StringCopy(&(Global_17257.f_4562), "", 16);
						Global_17257.f_4636 = -1;
					}
				}
			}
			if (unk_0x39BD4614CF899227(&(Global_2557413.f_21)) != 0 && Global_2557413.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17254 + 0.0046875f);
				if (Global_2557413.f_67 != 0)
				{
					func_136(Global_2557413.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17254 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_127(fVar41);
				unk_0x48C9E3E402CE023E(&(Global_2557413.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2557413.f_61)
				{
					if (Global_2557413.f_25[iVar14] == 2)
					{
						unk_0xA50C1D6E503AA51E(Global_2557413.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2557413.f_25[iVar14] == 3)
					{
						unk_0x3C6EADCCA29B8BAB(Global_2557413.f_34[iVar16], Global_2557413.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2557413.f_25[iVar14] == 1)
					{
						unk_0x703D2B4B1C7E10B6(&(Global_2557413.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557413.f_25[iVar14] == 5)
					{
						unk_0x82E0649BF28E05D3(&(Global_2557413.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557413.f_25[iVar14] == 6)
					{
						unk_0x703D2B4B1C7E10B6(&(Global_2557413.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557413.f_25[iVar14] == 7)
					{
						unk_0x82E0649BF28E05D3(&(Global_2557413.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557413.f_25[iVar14] == 8)
					{
						unk_0x703D2B4B1C7E10B6(&(Global_2557413.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x59003DE5DB412E4D(fVar41, (fVar49 + 0.00277776f));
				unk_0xF63BA5AC6A181C40(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_131(Global_17254, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7847)
				{
					iVar1 = Global_17257.f_7843;
					iVar2 = Global_17257.f_7844;
					iVar3 = Global_17257.f_7845;
					iVar4 = Global_17257.f_7846;
				}
				else
				{
					unk_0xF63BA5AC6A181C40(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xD66F6109A26F109D("CommonMenu", "Gradient_Bgd", (Global_17254 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xC10EAB47A91B2770(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xC10EAB47A91B2770(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_127(fVar41);
				unk_0x978803CE12B5FCBA(&(Global_2557413.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2557413.f_61)
				{
					if (Global_2557413.f_25[iVar14] == 2)
					{
						unk_0xA50C1D6E503AA51E(Global_2557413.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2557413.f_25[iVar14] == 3)
					{
						unk_0x3C6EADCCA29B8BAB(Global_2557413.f_34[iVar16], Global_2557413.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2557413.f_25[iVar14] == 1)
					{
						unk_0x703D2B4B1C7E10B6(&(Global_2557413.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557413.f_25[iVar14] == 8)
					{
						unk_0x703D2B4B1C7E10B6(&(Global_2557413.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557413.f_25[iVar14] == 5)
					{
						unk_0x82E0649BF28E05D3(&(Global_2557413.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557413.f_25[iVar14] == 6)
					{
						unk_0x703D2B4B1C7E10B6(&(Global_2557413.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2557413.f_25[iVar14] == 7)
					{
						unk_0x82E0649BF28E05D3(&(Global_2557413.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x1AC4FC30A9B7577A(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2557413.f_67 != 0)
				{
					func_136(Global_2557413.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_126(Global_2557413.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xD66F6109A26F109D(func_134(Global_2557413.f_67), func_132(Global_2557413.f_67, 1), ((Global_17254 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0xC10EAB47A91B2770(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2557413.f_65 > 0)
				{
					if ((unk_0x3EAC9995EC220C5A() - Global_2557413.f_66) > Global_2557413.f_65)
					{
						StringCopy(&(Global_2557413.f_21), "", 16);
						Global_2557413.f_65 = -1;
					}
				}
			}
			func_118(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x015513B8B0CE59A3(76, 84);
			unk_0xCE77A121760CFAD9(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5598)
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
			iVar63 = Global_17257.f_5088;
			if (Global_17257.f_5599)
			{
				iVar63 = (Global_17257.f_5602 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5612[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5612[iVar6];
				}
				if (Global_17257.f_5599)
				{
					iVar6 = Global_17257.f_7483[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17257.f_5605 && iVar9 < Global_17257.f_5095)
				{
					bVar32 = true;
					if (Global_17257.f_5606 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17257.f_5746[iVar6] = fVar34;
				fVar33 = (Global_17254 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17257.f_5606 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7849)
					{
						unk_0xF63BA5AC6A181C40(Global_17257.f_7848, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0xF63BA5AC6A181C40(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0xD66F6109A26F109D("CommonMenu", "Gradient_Nav", (Global_17254 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5744 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_116(bVar31, 1, 0, 0, 0, 0);
					unk_0x978803CE12B5FCBA("DFLT_MNU_OPT");
					unk_0x1AC4FC30A9B7577A(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17257.f_5096)
					{
						if (unk_0xB56FEBC510E7E9DE(Global_17257.f_4959[iVar6], iVar8) || Global_17257.f_4926[iVar8] == 5)
						{
							if (Global_17257.f_5599)
							{
								iVar19 = Global_17257.f_7494[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar20 = Global_17257.f_7535[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar21 = Global_17257.f_7576[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar22 = Global_17257.f_7617[((iVar9 * Global_17257.f_5096) + iVar8)];
								iVar23 = Global_17257.f_7658[((iVar9 * Global_17257.f_5096) + iVar8)];
							}
							else
							{
								Global_17257.f_7494[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar19;
								Global_17257.f_7535[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar20;
								Global_17257.f_7576[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar21;
								Global_17257.f_7617[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar22;
								Global_17257.f_7658[((iVar9 * Global_17257.f_5096) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17257.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5875[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17257.f_5875[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4932[iVar8] != -1f)
							{
								fVar33 = ((Global_17254 + 0.0046875f) + Global_17257.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17257.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4932[iVar8 + 1])
							{
								fVar45 = (Global_17257.f_4932[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17254 + Global_17256) - 0.0046875f) - fVar33);
							}
							if ((Global_17257.f_4945[iVar8] && Global_17257.f_5741) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17257.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_116(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, iVar70, bVar50);
												unk_0x970219AE613F6E2B(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x703D2B4B1C7E10B6(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x703D2B4B1C7E10B6(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x82E0649BF28E05D3(&(Global_2441088[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x703D2B4B1C7E10B6(&(Global_2441088[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x82E0649BF28E05D3(&(Global_2441088[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xA50C1D6E503AA51E(Global_17257.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x3C6EADCCA29B8BAB(Global_17257.f_4175[(iVar21 + iVar27)], Global_17257.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0xE02D086D4AE06321(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_136(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17257.f_4433[(iVar22 + iVar14)] == 2 || Global_17257.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
											Global_17257.f_7781[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar43 = Global_17257.f_7781[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_136(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_136(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_126(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xD66F6109A26F109D(func_134(26), func_132(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_136(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_136(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_126(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xD66F6109A26F109D(func_134(27), func_132(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_116(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, bVar50);
											if (Global_17257.f_7853 && Global_17257.f_7854 == iVar6)
											{
												func_115(bVar31);
											}
											unk_0x978803CE12B5FCBA(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x703D2B4B1C7E10B6(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x703D2B4B1C7E10B6(&(Global_17257.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x82E0649BF28E05D3(&(Global_2441088[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x703D2B4B1C7E10B6(&(Global_2441088[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x82E0649BF28E05D3(&(Global_2441088[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA50C1D6E503AA51E(Global_17257.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x3C6EADCCA29B8BAB(Global_17257.f_4175[(iVar21 + iVar27)], Global_17257.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4433[(iVar22 + iVar28)] == 2 || Global_17257.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_136(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_136(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_126(Global_17257.f_4433[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4953[iVar8] == 2)
															{
																unk_0xD66F6109A26F109D(func_134(Global_17257.f_4433[(iVar22 + iVar28)]), func_132(Global_17257.f_4433[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xD66F6109A26F109D(func_134(Global_17257.f_4433[(iVar22 + iVar28)]), func_132(Global_17257.f_4433[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (unk_0x39BD4614CF899227(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4953[iVar8] == 2)
											{
												unk_0x1AC4FC30A9B7577A(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x1AC4FC30A9B7577A((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4433[(iVar22 + iVar14)] != 2 && Global_17257.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_136(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_136(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_126(Global_17257.f_4433[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0xD66F6109A26F109D(func_134(Global_17257.f_4433[(iVar22 + iVar14)]), func_132(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), (Global_17254 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4953[iVar8] == 2)
															{
																unk_0xD66F6109A26F109D(func_134(Global_17257.f_4433[(iVar22 + iVar14)]), func_132(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xD66F6109A26F109D(func_134(Global_17257.f_4433[(iVar22 + iVar14)]), func_132(Global_17257.f_4433[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
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
										if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_116(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7853 && Global_17257.f_7854 == iVar6)
											{
												func_115(bVar31);
											}
											unk_0x970219AE613F6E2B("NUMBER");
											unk_0xA50C1D6E503AA51E(Global_17257.f_3918[iVar20]);
											fVar42 = unk_0xE02D086D4AE06321(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_136(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_136(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_126(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xD66F6109A26F109D(func_134(26), func_132(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_136(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_136(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_126(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xD66F6109A26F109D(func_134(27), func_132(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_116(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
										func_114((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_3918[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_116(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
											if (Global_17257.f_7853 && Global_17257.f_7854 == iVar6)
											{
												func_115(bVar31);
											}
											unk_0x970219AE613F6E2B("NUMBER");
											unk_0x3C6EADCCA29B8BAB(Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
											fVar42 = unk_0xE02D086D4AE06321(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
											Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)];
											fVar42 = Global_17257.f_7740[((iVar9 * Global_17257.f_5096) + iVar8)];
										}
										if (bVar51)
										{
											if (func_136(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_136(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_126(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xD66F6109A26F109D(func_134(26), func_132(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_136(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_136(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_126(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xD66F6109A26F109D(func_134(27), func_132(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_116(bVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], bVar53, 0, 0);
										func_113((fVar33 + fVar41), fVar34, "NUMBER", Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_136(Global_17257.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17257.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17257.f_4953[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar41;
												Global_17257.f_7781[((iVar9 * Global_17257.f_5096) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7699[((iVar9 * Global_17257.f_5096) + iVar8)];
												fVar43 = Global_17257.f_7781[((iVar9 * Global_17257.f_5096) + iVar8)];
											}
											if (bVar51)
											{
												if (func_136(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17257.f_4953[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_136(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_126(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xD66F6109A26F109D(func_134(26), func_132(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_136(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_136(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_126(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xD66F6109A26F109D(func_134(27), func_132(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_136(Global_17257.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_126(Global_17257.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xD66F6109A26F109D(func_134(Global_17257.f_4433[iVar22]), func_132(Global_17257.f_4433[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_112(Global_17257.f_4433[iVar22])), (fVar36 * func_112(Global_17257.f_4433[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
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
							if (Global_17257.f_4926[iVar8] == 5)
							{
								if (Global_17257.f_4938[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
								if (Global_17257.f_4945[iVar8])
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
							fVar33 = (fVar33 + Global_17257.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17257.f_7483[iVar9] = iVar6;
						Global_17257.f_5607 = iVar6;
						iVar9++;
						if (Global_17257.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17257.f_5612[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17257.f_5598)
					{
						Global_17257.f_5355[iVar6] = 1;
						if (Global_17257.f_5097[iVar6])
						{
							if (bVar31)
							{
								Global_17257.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17257.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5598)
			{
				Global_17257.f_5600 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17257.f_5603 = iVar11;
				Global_17257.f_5601 = iVar10;
				Global_17257.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5599)
	{
		Global_17257.f_5602 = iVar9;
		Global_17257.f_5599 = 1;
	}
	Global_17257.f_5743 = fVar49;
	Global_17257.f_5745 = unk_0x3EAC9995EC220C5A();
	unk_0x0B46E54044546374(Global_17257.f_5743);
	if (!Global_17257.f_7822)
	{
		func_107();
	}
	Global_17257.f_7822 = 0;
	if (bParam2)
	{
		unk_0xCA3D1FCD234B8E0B(10);
	}
	unk_0xCA3D1FCD234B8E0B(6);
	unk_0xCA3D1FCD234B8E0B(7);
	unk_0xCA3D1FCD234B8E0B(9);
	unk_0xCA3D1FCD234B8E0B(8);
	if (bParam0)
	{
		func_106(1);
	}
	unk_0xA514BB978EE93FAD();
}

void func_106(int iParam0)
{
	Global_1339928.f_932 = iParam0;
}

void func_107()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_111(0))
		{
			func_108(0);
		}
		unk_0x573691DB812DC8AA(&Global_2284, 2);
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
		unk_0x573691DB812DC8AA(&Global_2284, 16);
	}
	if (unk_0xEA9C2A206A86B744())
	{
		unk_0xC9AB825AA4821BDA(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 30);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 30);
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
				unk_0x3E337B53281459DC(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x4317F0DBC6457B31(Global_14350);
		}
		else
		{
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
}

int func_111(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
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
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
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
	unk_0x978803CE12B5FCBA(sParam2);
	unk_0x3C6EADCCA29B8BAB(uParam3, uParam4);
	unk_0x1AC4FC30A9B7577A(fParam0, fParam1, 0);
}

void func_114(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x978803CE12B5FCBA(sParam2);
	unk_0xA50C1D6E503AA51E(iParam3);
	unk_0x1AC4FC30A9B7577A(fParam0, fParam1, iParam4);
}

void func_115(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xF63BA5AC6A181C40(Global_17257.f_7850[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xF63BA5AC6A181C40(Global_17257.f_7850[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x3F570C434DAE03B3(iVar0, iVar1, iVar2, 255);
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
			func_117(Global_17257.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xF63BA5AC6A181C40(1, &iVar0, &iVar1, &iVar2, &iVar3);
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
			unk_0x3F570C434DAE03B3(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xF63BA5AC6A181C40(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x3F570C434DAE03B3(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xF63BA5AC6A181C40(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x3F570C434DAE03B3(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x3F570C434DAE03B3(155, 155, 155, 255);
		}
		else
		{
			unk_0x3F570C434DAE03B3(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x3F570C434DAE03B3(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xF63BA5AC6A181C40(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x3F570C434DAE03B3(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x3F570C434DAE03B3(155, 155, 155, 255);
	}
	else
	{
		unk_0x3F570C434DAE03B3(155, 155, 155, 255);
	}
	unk_0x812DA59718C7CF24(0f, 0.35f);
	unk_0xB81FA419A7DF8808(1);
	if (bParam5)
	{
		unk_0x812DA59718C7CF24(0f, 0.425f);
		unk_0x7C2084C68CEC316C(4);
	}
	else
	{
		unk_0x7C2084C68CEC316C(0);
	}
	unk_0x1A1C41FB33FB4759(0f, 1f);
	unk_0x9DEC218A753E0E4D(0);
	unk_0x52E12C3A7A66F903(0, 0, 0, 0, 0);
	unk_0xB10C338B29F8D8D2(0, 0, 0, 0, 0);
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
	if (unk_0x5E694571CFF565ED())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_121(unk_0x8ACD527A7E574590(), 0))
		{
			return;
		}
	}
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x4240922EF24527F4() == 0 || unk_0x5E694571CFF565ED())
		{
			return;
		}
	}
	if (Global_17257.f_4639 != 0)
	{
		if (unk_0x18670847D587698A(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4639)
			{
				if (Global_17257.f_4896[iVar1] != 344)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), unk_0x7DD16933DB23299D(2, Global_17257.f_4896[iVar1], 1), 64);
				}
				else if (Global_17257.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), unk_0xEC039E3BEB450805(2, Global_17257.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17257.f_4640 = 0;
		}
		if (!Global_17257.f_4640)
		{
			unk_0x758017413321C628(Global_17257.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(Global_17257.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xBA93E45C163C745D((1f - (Global_17257.f_4951 / 100f)));
			unk_0x098CA28C04E62E55();
			if (unk_0x2C063B4379F0C076())
			{
				unk_0x758017413321C628(Global_17257.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x360FCC9A8FE84159(1);
				unk_0x098CA28C04E62E55();
			}
			iVar1 = 0;
			while (iVar1 < Global_17257.f_4639)
			{
				if (unk_0x39BD4614CF899227(&(Global_17257.f_4834[iVar1 /*4*/])) != unk_0x39BD4614CF899227("PREV"))
				{
					unk_0x758017413321C628(Global_17257.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4D57F6B69CCB6D95(iVar1);
					func_120(&(Global_17257.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x39BD4614CF899227(&(Global_17257.f_4834[iVar2 /*4*/])) == unk_0x39BD4614CF899227("PREV"))
					{
						func_120(&(Global_17257.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4883[iVar1] == -1)
					{
						func_119(&(Global_17257.f_4834[iVar1 /*4*/]));
					}
					else
					{
						unk_0xC976485333F81CE8(&(Global_17257.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x31E2823F336CCAD6(iParam2, 70);
						}
						else
						{
							unk_0xA50C1D6E503AA51E(iParam2);
						}
						unk_0xC8C5D5B9E15EB2E2();
					}
					if (unk_0x2C063B4379F0C076())
					{
						if (Global_17257.f_4896[iVar1] != 344 && unk_0xB56FEBC510E7E9DE(Global_17257.f_4922, iVar1))
						{
							unk_0x360FCC9A8FE84159(1);
							unk_0x4D57F6B69CCB6D95(Global_17257.f_4896[iVar1]);
						}
						else
						{
							unk_0x360FCC9A8FE84159(0);
							unk_0x4D57F6B69CCB6D95(344);
						}
					}
					unk_0x098CA28C04E62E55();
				}
				iVar1++;
			}
			if (unk_0x39BD4614CF899227(&(Global_2557413.f_16)) != unk_0x39BD4614CF899227(""))
			{
				unk_0x758017413321C628(Global_17257.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4D57F6B69CCB6D95(Global_17257.f_4639);
				func_120(&Global_2557413);
				if (Global_2557413.f_20 == -1)
				{
					func_119(&(Global_2557413.f_16));
				}
				else
				{
					unk_0xC976485333F81CE8(&(Global_2557413.f_16));
					if (bParam5)
					{
						unk_0x31E2823F336CCAD6(iParam2, 70);
					}
					else
					{
						unk_0xA50C1D6E503AA51E(iParam2);
					}
					unk_0xC8C5D5B9E15EB2E2();
				}
				unk_0x098CA28C04E62E55();
			}
			unk_0x758017413321C628(Global_17257.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4D57F6B69CCB6D95(0);
			unk_0x4D57F6B69CCB6D95(0);
			unk_0x4D57F6B69CCB6D95(0);
			unk_0x4D57F6B69CCB6D95(80);
			unk_0x098CA28C04E62E55();
			unk_0x758017413321C628(Global_17257.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4952)
			{
				unk_0x4D57F6B69CCB6D95(1);
			}
			else
			{
				unk_0x4D57F6B69CCB6D95(0);
			}
			unk_0x098CA28C04E62E55();
			Global_17257.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17257.f_4639)
		{
			if (Global_17257.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x758017413321C628(Global_17257.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4D57F6B69CCB6D95(iVar1);
					unk_0xC976485333F81CE8(&(Global_17257.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x31E2823F336CCAD6(iParam2, 70);
					}
					else
					{
						unk_0xA50C1D6E503AA51E(iParam2);
					}
					unk_0xC8C5D5B9E15EB2E2();
					unk_0x098CA28C04E62E55();
				}
			}
			iVar1++;
		}
		if (Global_2557413.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x758017413321C628(Global_17257.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4D57F6B69CCB6D95(iVar1);
				unk_0xC976485333F81CE8(&(Global_2557413.f_16));
				if (bParam5)
				{
					unk_0x31E2823F336CCAD6(iParam2, 70);
				}
				else
				{
					unk_0xA50C1D6E503AA51E(iParam2);
				}
				unk_0xC8C5D5B9E15EB2E2();
				unk_0x098CA28C04E62E55();
			}
		}
		unk_0x015513B8B0CE59A3(76, 66);
		unk_0xCE77A121760CFAD9(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17257.f_7857)
			{
				unk_0xD994B5E39F03448F(15, 0f, -0.0375f);
				Global_17257.f_7857 = 1;
			}
		}
		else if (Global_17257.f_7857)
		{
			unk_0x2CFB33EDB2933AD4(15);
			Global_17257.f_7857 = 0;
		}
		unk_0xA514BB978EE93FAD();
		if (Global_17257.f_4925)
		{
			unk_0x015513B8B0CE59A3(82, 66);
			unk_0xCE77A121760CFAD9(0f, 0f, 0f, 0f);
			unk_0x50137349427F6296(Global_17257.f_5530[iVar0 /*10*/], Global_17257.f_4923, Global_17257.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xA514BB978EE93FAD();
		}
		else
		{
			unk_0xE636AA747867BC3D(Global_17257.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_119(var uParam0)
{
	unk_0xC976485333F81CE8(uParam0);
	unk_0xC8C5D5B9E15EB2E2();
}

void func_120(var uParam0)
{
	unk_0x2747B3A98BE1082E(uParam0);
}

bool func_121(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_122(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586488[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x860CE5C791DC28F5(iParam0))
		{
			bVar0 = unk_0xE6C94A0E653BD3F1(iParam0) == 8;
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
	if (Global_1315888[iVar1] == 1)
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
		unk_0x3E337B53281459DC(&Var0);
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
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0xF63BA5AC6A181C40(1, iParam2, iParam3, iParam4, &uVar0);
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
	
	unk_0xF63BA5AC6A181C40(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x7C2084C68CEC316C(0);
	unk_0x812DA59718C7CF24(0f, 0.35f);
	unk_0x45630109191EB8CA(2);
	unk_0x3F570C434DAE03B3(iVar0, iVar1, iVar2, iVar3);
	unk_0x1A1C41FB33FB4759(fParam0, ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x9DEC218A753E0E4D(0);
	unk_0x52E12C3A7A66F903(0, 0, 0, 0, 0);
	unk_0xB10C338B29F8D8D2(0, 0, 0, 0, 0);
}

void func_128(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x978803CE12B5FCBA(sParam2);
	unk_0xA50C1D6E503AA51E(uParam3);
	unk_0xA50C1D6E503AA51E(uParam4);
	unk_0x1AC4FC30A9B7577A(fParam0, fParam1, 0);
}

float func_129(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x9D14A941038EF8A3(sParam0))
	{
		if (unk_0x39BD4614CF899227(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_130();
	unk_0x970219AE613F6E2B(sParam0);
	unk_0xA50C1D6E503AA51E(uParam1);
	unk_0xA50C1D6E503AA51E(uParam2);
	return unk_0xE02D086D4AE06321(1);
}

void func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xF63BA5AC6A181C40(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7832)
	{
		iVar0 = Global_17257.f_7828;
		iVar1 = Global_17257.f_7829;
		iVar2 = Global_17257.f_7830;
		iVar3 = Global_17257.f_7831;
	}
	unk_0x7C2084C68CEC316C(0);
	unk_0x812DA59718C7CF24(0f, 0.35f);
	unk_0x3F570C434DAE03B3(iVar0, iVar1, iVar2, iVar3);
	unk_0x1A1C41FB33FB4759((Global_17254 + 0.0046875f), ((Global_17254 + Global_17256) - 0.0046875f));
	unk_0x9DEC218A753E0E4D(0);
	unk_0x52E12C3A7A66F903(0, 0, 0, 0, 0);
	unk_0xB10C338B29F8D8D2(0, 0, 0, 0, 0);
}

void func_131(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x6F9FB0053F328D49((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_132(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0x0AAC2160036975D9(&(Global_17257.f_6682[iParam0 /*16*/])))
	{
		return func_133(&(Global_17257.f_6682[iParam0 /*16*/]));
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
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
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
	if (!unk_0x0AAC2160036975D9(&(Global_17257.f_5881[iParam0 /*16*/])))
	{
		return func_133(&(Global_17257.f_5881[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_135()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x87B14B27D777B56E(&iVar0, &iVar1);
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
	if (unk_0x39BD4614CF899227(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x87B14B27D777B56E(&iVar2, &iVar3);
			fVar5 = unk_0x52846F7B892BD059(0);
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
			if (unk_0xB1A77D5C890711F9(joaat("director_mode")) > 0)
			{
				unk_0x0E0B4DFAC438518B(&iVar2, &iVar3);
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0x0E0B4DFAC438518B(&iVar2, &iVar3);
		}
		Var7 = { unk_0x59A3C08D6C3850F4(uVar0, sVar1) };
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
			if (!unk_0xD151440E25EB1559() && iParam0 != 30)
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
	if ((((((((!unk_0x398F615441F52A47() || (func_140(8, -1) && func_139() != 64)) || (unk_0x8FE63F025578C271() != 0 && !bParam1)) || (unk_0xA153A26DF49EBCC0() && !bParam0)) || unk_0xE2B230B63F9C4C45()) || Global_69577) || Global_17257.f_7856) || unk_0x29E1357119AD22B2()) || Global_91158.f_1352)
	{
		return 0;
	}
	return 1;
}

int func_139()
{
	return Global_1315843;
}

bool func_140(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
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
	if (unk_0x417D84639C1F982B(2))
	{
		if (Global_2557489 > -1)
		{
			if (unk_0x618071F6827C232E(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_143(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x417D84639C1F982B(2))
	{
		return 0;
	}
	if (unk_0x4F297F09162EFB5D() || unk_0x29E1357119AD22B2())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xFD55C4B9BC2A66F5();
	}
	if (Global_2557489 == -6)
	{
		unk_0x3552A10C348BE90A(4);
		if (iParam0 && unk_0xE721293454745300(2, 237))
		{
			return 1;
		}
		else
		{
			Global_2557489 = -1;
			return 0;
		}
	}
	if (((Global_2557489 > -1 || Global_2557489 == -3) || Global_2557489 == -2) || unk_0x730CF608950989AF())
	{
		unk_0x3552A10C348BE90A(1);
		return 0;
	}
	if (Global_2557489 == -1 && iParam0)
	{
		if (unk_0xE721293454745300(2, 237))
		{
			unk_0x3552A10C348BE90A(4);
			Global_2557489 = -6;
			return 1;
		}
		else
		{
			unk_0x3552A10C348BE90A(3);
			return 0;
		}
	}
	unk_0x3552A10C348BE90A(1);
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
	if (!unk_0x417D84639C1F982B(2))
	{
		Global_2557489 = -1;
		return;
	}
	unk_0x3C182FD79F9CBACE(1);
	fVar0 = Global_17254;
	fVar2 = (fVar0 + Global_17256);
	fVar3 = Global_17257.f_5600;
	fVar1 = (Global_17257.f_5600 - (IntToFloat(Global_17257.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17257.f_5602 < 1)
	{
		fVar1 = (Global_17257.f_5600 - 0.034722f);
	}
	unk_0x015513B8B0CE59A3(76, 84);
	unk_0xCE77A121760CFAD9(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x8FEA11ED822369A9(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x8FEA11ED822369A9(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xA514BB978EE93FAD();
	func_146();
	if (Global_2557489 == -6)
	{
		return;
	}
	Global_2557489 = -1;
	fVar7 = Global_2557483;
	fVar8 = Global_2557484;
	if (Global_17257.f_5603 > Global_17257.f_5602)
	{
		if (((Global_2557483 >= fVar0 && Global_2557483 <= fVar2) && Global_2557484 >= fVar3) && Global_2557484 < (fVar3 + fVar6))
		{
			Global_2557489 = -2;
			if (bParam3)
			{
				func_145(0);
			}
			return;
		}
		if (((Global_2557483 >= fVar0 && Global_2557483 <= fVar2) && Global_2557484 >= (fVar3 + fVar6)) && Global_2557484 < (fVar3 + 0.034722f))
		{
			Global_2557489 = -3;
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
		if (Global_17257.f_5603 == -1)
		{
			Global_2557489 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17257.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x015513B8B0CE59A3(76, 84);
				unk_0xCE77A121760CFAD9(-0.05f, -0.05f, 0f, 0f);
				func_131(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17256, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xA514BB978EE93FAD();
			}
		}
		Global_2557489 = Global_17257.f_7483[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2557489 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2557489 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_2557489 = -4;
		return;
	}
	Global_2557489 = -1;
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
	fVar1 = Global_17257.f_5600;
	unk_0x015513B8B0CE59A3(76, 84);
	unk_0xCE77A121760CFAD9(-0.05f, -0.05f, 0f, 0f);
	if (Global_2557489 == -2)
	{
		func_131(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2557489 == -3)
	{
		func_131(fVar0, (fVar1 + fVar2), Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xA514BB978EE93FAD();
}

void func_146()
{
	Global_2557485 = Global_2557483;
	Global_2557486 = Global_2557484;
	Global_2557483 = unk_0x91C1A5C1C3B2124F(2, 239);
	Global_2557484 = unk_0x91C1A5C1C3B2124F(2, 240);
	Global_2557487 = (Global_2557483 - Global_2557485);
	Global_2557488 = (Global_2557484 - Global_2557486);
}

void func_147(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x7DD16933DB23299D(2, iParam0, 1);
	if (Global_17257.f_4639 >= 12)
	{
		StringCopy(&Global_2557413, sVar0, 64);
		StringCopy(&(Global_2557413.f_16), sParam1, 16);
		Global_2557413.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x573691DB812DC8AA(&(Global_17257.f_4922), Global_17257.f_4639);
	}
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = iParam0;
	Global_17257.f_4909[Global_17257.f_4639] = 32;
	Global_17257.f_4639++;
}

void func_148(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_4562), sParam0, 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = iParam1;
	Global_17257.f_4637 = unk_0x3EAC9995EC220C5A();
	Global_17257.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_149(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17257.f_5606 = uParam0;
	Global_17257.f_5741 = iParam2;
	if (Global_17257.f_5606 < Global_17257.f_5605)
	{
		Global_17257.f_5605 = Global_17257.f_5606;
	}
	else if ((Global_17257.f_5599 && Global_17257.f_5606 > Global_17257.f_5607) || (!Global_17257.f_5599 && Global_17257.f_5606 >= (Global_17257.f_5605 + Global_17257.f_5095)))
	{
		iVar0 = Global_17257.f_5605;
		while (iVar0 <= Global_17257.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17257.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17257.f_5095 && Global_17257.f_5605 < 128)
		{
			Global_17257.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17257.f_5605;
			while (iVar0 <= Global_17257.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17257.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17257.f_4562), "", 16);
		StringCopy(&(Global_2557413.f_21), "", 16);
	}
}

void func_150(int iParam0)
{
	Global_17257.f_5605 = iParam0;
}

void func_151(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5092 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	Global_17257.f_3918[Global_17257.f_5092] = uParam0;
	Global_17257.f_5092++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 2;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_153();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_136(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17257.f_4938[(Global_17257.f_5089 - 1)])
		{
			Global_17257.f_4938[(Global_17257.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_152();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
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
	while (iVar0 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17257.f_4433[((Global_17257.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_136(Global_17257.f_4433[((Global_17257.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0xC10EAB47A91B2770(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0xC10EAB47A91B2770(0.35f, 0);
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
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_116(0, 1, 0, 0, 0, iVar6 > 0);
	if (unk_0x39BD4614CF899227(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		unk_0x970219AE613F6E2B(&(Global_17257.f_73[Global_17257.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x39BD4614CF899227(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x703D2B4B1C7E10B6(&(Global_17257.f_73[(Global_17257.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x39BD4614CF899227(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x703D2B4B1C7E10B6(&(Global_17257.f_73[(Global_17257.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			if (unk_0x39BD4614CF899227(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0xA50C1D6E503AA51E(Global_17257.f_3918[((Global_17257.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			if (unk_0x39BD4614CF899227(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x3C6EADCCA29B8BAB(Global_17257.f_4175[((Global_17257.f_5093 - iVar4) + iVar10)], Global_17257.f_4304[((Global_17257.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			if (unk_0x39BD4614CF899227(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x82E0649BF28E05D3(&(Global_2441088[((Global_17257.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			if (unk_0x39BD4614CF899227(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x703D2B4B1C7E10B6(&(Global_2441088[((Global_17257.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			if (unk_0x39BD4614CF899227(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				unk_0x82E0649BF28E05D3(&(Global_2441088[((Global_17257.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x39BD4614CF899227(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		fVar0 = unk_0xE02D086D4AE06321(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17257.f_4433[((Global_17257.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_136(Global_17257.f_4433[((Global_17257.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
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
	
	if (Global_17257.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5088 >= 128)
	{
		return;
	}
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 < Global_17257.f_5608)
	{
		return;
	}
	if (Global_17257.f_5088 != iParam0)
	{
		Global_17257.f_5088 = iParam0;
		Global_17257.f_5089 = 0;
	}
	iVar0 = Global_17257.f_4926[Global_17257.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5089 < 4 && iVar0 != 1)
		{
			Global_17257.f_5089++;
			iVar0 = Global_17257.f_4926[Global_17257.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam1, 24);
	if (!unk_0x0AAC2160036975D9(sParam1) && !unk_0x03BBACB5FC5BF182(sParam1))
	{
	}
	Global_17257.f_1610[Global_17257.f_5090] = iParam3;
	Global_17257.f_1867[Global_17257.f_5090] = iParam4;
	Global_17257.f_5090++;
	if (iParam2 == 0)
	{
		fVar1 = func_157(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_136(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17257.f_4938[Global_17257.f_5089])
		{
			Global_17257.f_4938[Global_17257.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_156(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
			if (fVar4 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar4;
			}
		}
	}
	unk_0x573691DB812DC8AA(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 1;
	Global_17257.f_5609 = (Global_17257.f_5090 - 1);
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = iParam2;
}

float func_156(char* sParam0)
{
	if (!unk_0x03BBACB5FC5BF182(sParam0))
	{
	}
	return unk_0xC10EAB47A91B2770(0.35f, 0);
}

float func_157(char* sParam0)
{
	if (!unk_0x9D14A941038EF8A3(sParam0))
	{
		if (unk_0x39BD4614CF899227(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_116(0, 1, 0, 0, 0, 0);
	unk_0x970219AE613F6E2B(sParam0);
	return unk_0xE02D086D4AE06321(1);
}

void func_158()
{
	if (unk_0x2C063B4379F0C076())
	{
		unk_0xC29696A4ABAC0D38(0.325f, 0.3f);
	}
}

void func_159(int iParam0, char* sParam1, char* sParam2)
{
	Global_17257 = iParam0;
	func_160(29, sParam1, sParam2);
}

void func_160(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17257.f_5881[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17257.f_6682[iParam0 /*16*/]), sParam2, 64);
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
	Global_17257.f_4953[0] = iParam0;
	Global_17257.f_4953[1] = iParam1;
	Global_17257.f_4953[2] = iParam2;
	Global_17257.f_4953[3] = iParam3;
	Global_17257.f_4953[4] = iParam4;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4926[0] = iParam0;
	Global_17257.f_4926[1] = iParam1;
	Global_17257.f_4926[2] = iParam2;
	Global_17257.f_4926[3] = iParam3;
	Global_17257.f_4926[4] = iParam4;
	Global_17257.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5096++;
	}
}

void func_164(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2441088[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17257.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4959[iVar0] = 0;
		Global_17257.f_5097[iVar0] = 0;
		Global_17257.f_5226[iVar0] = 0;
		Global_17257.f_5746[iVar0] = 0f;
		Global_17257.f_5355[iVar0] = 0;
		Global_17257.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4926[iVar0] = 0;
		Global_17257.f_4938[iVar0] = 0f;
		Global_17257.f_4932[iVar0] = -1f;
		Global_17257.f_4945[iVar0] = 0;
		Global_17257.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 344;
		Global_17257.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_17257.f_5881[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6682[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2557413.f_16), "", 16);
	Global_2557413.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5088 = 0;
	Global_17257.f_5089 = 0;
	Global_17257.f_5090 = 0;
	Global_17257.f_5092 = 0;
	Global_17257.f_5093 = 0;
	Global_17257.f_5094 = 0;
	Global_17257.f_5091 = 0;
	Global_17257.f_5741 = 0;
	Global_17257.f_5606 = 0;
	Global_17257.f_5605 = 0;
	Global_17257.f_5607 = 0;
	StringCopy(&(Global_17257.f_4562), "", 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = 0;
	Global_17257.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4638 = 0;
	StringCopy(&(Global_2557413.f_21), "", 16);
	Global_2557413.f_61 = 0;
	Global_2557413.f_62 = 0;
	Global_2557413.f_63 = 0;
	Global_2557413.f_64 = 0;
	Global_2557413.f_65 = 0;
	Global_2557413.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2557413.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2557413.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4944 = 0f;
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
	Global_17257.f_5611 = 0;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = 0;
	Global_17257.f_5609 = 0;
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	Global_17257.f_5095 = 10;
	Global_17257.f_5096 = 0;
	Global_17257.f_5743 = 0f;
	Global_17257.f_5744 = 0f;
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	Global_17257.f_5600 = 0f;
	Global_17257.f_5601 = 0;
	Global_17257.f_5603 = 0;
	Global_17257.f_5602 = 0;
	Global_17257.f_5604 = 0;
	Global_17257.f_7853 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5875[iVar0] = -1;
		Global_17257.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4951 = 0f;
	Global_17257.f_4922 = 0;
	Global_17257.f_4952 = 0;
	Global_17257.f_7832 = 0;
	Global_17257.f_7827 = 0;
	Global_17257.f_7837 = 0;
	Global_17257.f_7842 = 0;
	Global_17257.f_7847 = 0;
	Global_17257.f_7849 = 0;
	Global_17257.f_7855 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = unk_0x52846F7B892BD059(0);
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
			*uParam5 = { unk_0xB91BD3EFC17D9612(Param1, fParam4, 2.40015f, -7.75244f, 1.0825f) };
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
			*uParam5 = { unk_0xB91BD3EFC17D9612(Param1, fParam4, 3.80296f, -5.391f, 1.213f) };
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
			*uParam5 = { unk_0xB91BD3EFC17D9612(Param1, fParam4, 2.97963f, -3.39452f, 0.934498f) };
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
		unk_0x573691DB812DC8AA(&Global_25359, iParam0);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_25359, iParam0);
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
	if (!unk_0x6DF20EAB8093DF19(unk_0x7F3E348C0892D8D2()))
	{
		return 0;
	}
	if (func_111(0))
	{
		return 0;
	}
	if (unk_0x7B8549A4F94FA4C8())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36400[iVar0 /*19*/] == 1 && Global_36400[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36400[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36400[iVar0 /*19*/].f_5 = 1;
			Global_36400[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36400[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36400[iVar0 /*19*/].f_7)
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
		if (Global_36400[iVar0 /*19*/].f_1 == iParam0)
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
	if (Global_36400[iVar0 /*19*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_36400[iVar0 /*19*/].f_12)
	{
		unk_0xBA89110203C50939(&(Global_36400[iVar0 /*19*/].f_8));
		unk_0x703D2B4B1C7E10B6(&Global_36517);
		iVar1 = unk_0x62881E3F5F311834(0);
	}
	else
	{
		unk_0xBA89110203C50939(&(Global_36400[iVar0 /*19*/].f_8));
		unk_0x703D2B4B1C7E10B6(&Global_36517);
		unk_0x703D2B4B1C7E10B6(&(Global_36400[iVar0 /*19*/].f_13));
		iVar1 = unk_0x62881E3F5F311834(0);
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
		if (Global_36400[iVar0 /*19*/])
		{
			Global_36400[iVar0 /*19*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

void func_171(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0xB1A77D5C890711F9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xA153A26DF49EBCC0())
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
		if (!Global_36400[iVar0 /*19*/])
		{
			Global_36400[iVar0 /*19*/] = 1;
			Global_36400[iVar0 /*19*/].f_1 = Global_36523;
			Global_36523++;
			Global_36400[iVar0 /*19*/].f_4 = 0;
			Global_36400[iVar0 /*19*/].f_17 = 0;
			Global_36400[iVar0 /*19*/].f_5 = 0;
			Global_36400[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36400[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36400[iVar0 /*19*/].f_6 = iParam3;
			Global_36400[iVar0 /*19*/].f_18 = unk_0x8EC1FFF6B789C28E();
			Global_36400[iVar0 /*19*/].f_7 = 0;
			Global_36400[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0x0AAC2160036975D9(sParam4))
			{
				Global_36400[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36400[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36400[iVar0 /*19*/].f_12 = 0;
			}
			*uParam0 = Global_36400[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_172(char* sParam0)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 1, 1, -1);
}

int func_173()
{
	if (Global_99250.f_24863.f_145 > 0)
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
			*uParam3 = { unk_0xB91BD3EFC17D9612(*uParam1, uParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0xB91BD3EFC17D9612(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0xB91BD3EFC17D9612(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0xB91BD3EFC17D9612(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0xB91BD3EFC17D9612(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0xB91BD3EFC17D9612(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
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
			*uParam3 = { unk_0xB91BD3EFC17D9612(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0xB91BD3EFC17D9612(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0xB91BD3EFC17D9612(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
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
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()) && !unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x15B943B129A1F2E7(unk_0x77F050A399DB77ED()) > 0;
		}
		else
		{
			return unk_0xE9D7E712C471720F(unk_0x77F050A399DB77ED(), unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), fParam0) > 0;
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
			unk_0x68E5332DF8C1DA5A(uLocal_618[iLocal_634], 1, 0);
			uLocal_632 = unk_0xFCF0CDCAF2761068(unk_0xB91BD3EFC17D9612(Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_68.f_486.f_9, 2);
			if (!unk_0x1E80C02AC16B6622(Local_68.f_2))
			{
				unk_0x3C6CCFC07FD12077(Local_68.f_2, uLocal_632, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x1D8909C3B0308E1E(uLocal_618[iLocal_634], uLocal_632, "purchase_chocbar", "mp_am_hold_up", 1000f, 1090519040, 1, 1148846080);
				iLocal_630 = 1;
			}
			break;
		
		case 1:
			if (unk_0x671C6C3F21245221(uLocal_632))
			{
				if (unk_0x19779E7427AA44FB(uLocal_632) == 1f)
				{
					if (!unk_0x1E80C02AC16B6622(Local_68.f_2))
					{
						unk_0xE2CB8488CFA42209(Local_68.f_2);
					}
					if (unk_0x1F2158D615BC4B25(uLocal_618[iLocal_634]))
					{
						unk_0x3B8C10CBBDDF7D04(uLocal_618[iLocal_634], 1);
					}
					iLocal_633 = unk_0x3EAC9995EC220C5A();
					iLocal_630 = 2;
				}
			}
			else
			{
				iLocal_633 = unk_0x3EAC9995EC220C5A();
				iLocal_630 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x3EAC9995EC220C5A() - iLocal_633) > 1000)
			{
				if (unk_0x1F2158D615BC4B25(uLocal_618[iLocal_634]))
				{
					unk_0x68E5332DF8C1DA5A(uLocal_618[iLocal_634], 0, 0);
					unk_0x0B5F372F57E469AC(uLocal_618[iLocal_634], func_59(iLocal_634), 1, 0, 0, 1);
					unk_0x3B8C10CBBDDF7D04(uLocal_618[iLocal_634], 0);
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
				if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_86))
				{
					func_181();
					func_11(&(Local_68.f_86.f_7));
					iLocal_54 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_86))
				{
					if ((func_180(&(Local_68.f_86.f_7), 5f) || func_178(Local_68.f_2, &(Local_68.f_451))) || unk_0xCD7683F575A67B31(Local_68.f_86))
					{
						iLocal_54 = 4;
					}
				}
				break;
			
			case 4:
				if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_86))
				{
					iLocal_53 = 31;
					unk_0x23E5F4496336DE4E(Local_68.f_86, Local_68.f_0, 500f, -1, 0, 0);
					iLocal_54 = 5;
				}
				func_39(&(Local_68.f_86.f_7));
				break;
			}
	}
}

int func_178(int iParam0, var uParam1)
{
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 7))
		{
			if (unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), iParam0) || unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iParam0))
			{
				if (unk_0x6867AF84AF12BEFC(iParam0, unk_0x77F050A399DB77ED(), 90f))
				{
					if (func_179(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x3EAC9995EC220C5A();
						}
						else if ((unk_0x3EAC9995EC220C5A() - uParam1->f_1) > uParam1->f_3)
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
	return func_22(unk_0xF555CE342BA0C333(unk_0x7F3E348C0892D8D2()), iParam0, iParam1);
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
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_86))
	{
		unk_0x2A6B9F9E71C479CF(&(Local_68.f_86.f_6));
		unk_0x9A42ADE14351A508(0, Local_68.f_0, 0);
		unk_0xD0C8DD55C652567F(0, Local_68.f_0, 2500, 0, 2);
		unk_0x712E9AF79EDC2710(0, 2500, 0, -1, 0);
		unk_0x44642CB08FA1637E(Local_68.f_86.f_6);
		unk_0xB8A8FA4B28E9F423(Local_68.f_86, Local_68.f_86.f_6);
	}
}

int func_182()
{
	unk_0x56BB9CFEACF06B75(Local_68.f_86.f_2, Local_68.f_86.f_5, 1, 0, &(Local_68.f_86), 0, 1, -1);
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_86))
	{
		if (unk_0xDF1398076E26B0E4(Local_68.f_86) == Local_68.f_86.f_1)
		{
			unk_0x8D429A827A931AC9(Local_68.f_86, 1, 0);
			unk_0x9526D9575C237F2F(Local_68.f_86, 1);
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
			unk_0x16AA81661A0624FB(500);
			iLocal_624 = 6;
		}
	}
	switch (iLocal_624)
	{
		case 0:
			if ((((unk_0x0B6E83A9A7ED3EBA(Local_68.f_2) || !func_203()) || func_1(Local_68.f_470, 128)) && iLocal_57 < 3) && unk_0xBF0CC7B3A5D6AC0C(Local_68.f_2.f_1, 1.5f) == 0)
			{
				if ((func_44() && !unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0)) && !func_202(0))
				{
					func_201("SHR_ROBTILL", -1);
					Local_68.f_469 = -1;
					func_171(&(Local_68.f_469), 4, "SHR_ROBTILL", 0, 0, 0);
					unk_0xA5F70A8B83BDFA49(&(Local_68.f_162.f_18), 1);
					unk_0xA5F70A8B83BDFA49(&(Local_68.f_162.f_18), 0);
					iLocal_624 = 1;
				}
			}
			else if (!unk_0x1E80C02AC16B6622(Local_68.f_2))
			{
			}
			else if (iLocal_57 == 7)
			{
			}
			else if (unk_0xBF0CC7B3A5D6AC0C(Local_68.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_44())
			{
				if (func_167(Local_68.f_469, 1))
				{
					if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_0))
					{
						if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
						{
							iVar3 = unk_0xD8D1111EA0CFD1DB();
							if (unk_0xCA55F1A0D9ADE3AD(iVar3, Local_68.f_214, Local_68.f_217, Local_68.f_220, 0, 1, 0))
							{
								unk_0x0B5F372F57E469AC(iVar3, unk_0xB91BD3EFC17D9612(Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, -0.7961f, -1.562f, -0.4215f), 0, 0, 0, 1);
							}
						}
					}
					unk_0x573691DB812DC8AA(&(Local_68.f_162.f_18), 1);
					if (func_27("SHR_ROBTILL"))
					{
						unk_0x4ACCE973F9C3CA3B(1);
					}
					func_170(&(Local_68.f_469));
					bVar2 = unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iLocal_628, 1);
					if (bVar2)
					{
						unk_0x9687CF9C13C1F6A1(unk_0x77F050A399DB77ED(), joaat("weapon_unarmed"), 1);
					}
					unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 0, 0);
					unk_0x571937D113E93996(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 15f);
					unk_0x87B88BB971295A97(0);
					func_108(0);
					func_196(1, 1, 1, 0);
					unk_0x488AF65D7EDB6B4A(0);
					func_166(23, 1);
					unk_0x2D170B30FD0AB4FC(Local_68.f_2.f_1, 3f, 0);
					iLocal_624 = 2;
				}
				else if ((unk_0x3EAC9995EC220C5A() % 1000) < 50)
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
					unk_0x4ACCE973F9C3CA3B(1);
				}
				func_170(&(Local_68.f_469));
				iLocal_624 = 0;
			}
			break;
		
		case 2:
			if (unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				unk_0x5817B24FA3E70BC6(Local_68.f_2, 0, 0);
				unk_0xB92C428B448B51A4(Local_68.f_2, 1);
			}
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), unk_0xB91BD3EFC17D9612(Local_68.f_2.f_1, Local_68.f_2.f_4, -0.75f, 0f, -1f), 1, 0, 0, 1);
				unk_0x2DA164E80FDEE7F2(unk_0x77F050A399DB77ED(), Local_68.f_2.f_4);
				unk_0xAAD288E877AC833D(&uLocal_566);
				unk_0x2A6B9F9E71C479CF(&uLocal_566);
				unk_0x642DDF74A8A2B3BB(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x642DDF74A8A2B3BB(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0, 0, 0, 0);
				unk_0x642DDF74A8A2B3BB(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x44642CB08FA1637E(uLocal_566);
				unk_0xB8A8FA4B28E9F423(unk_0x77F050A399DB77ED(), uLocal_566);
				if (!unk_0x06F36936289C5EC8(uLocal_625))
				{
					uLocal_625 = unk_0xEDBA42E4C9B7F653(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x798ACD39246B6DE2(uLocal_625, unk_0x77F050A399DB77ED(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0x210DD59678753DFE(uLocal_625, unk_0x77F050A399DB77ED(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0x93C424DD4488A7BF(uLocal_625, 35f);
				unk_0xBB088A7B5EA9D960(uLocal_625, "HAND_SHAKE", 0.1f);
				unk_0x12A448112D057EB4(uLocal_625, 1);
				unk_0x81ADE7722FD45216(1, 0, 3000, 1, 0, 0);
			}
			iLocal_624 = 3;
			break;
		
		case 3:
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				if (!unk_0x06F36936289C5EC8(uLocal_626))
				{
					uLocal_626 = unk_0xEDBA42E4C9B7F653(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x798ACD39246B6DE2(uLocal_626, unk_0x77F050A399DB77ED(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0x210DD59678753DFE(uLocal_626, unk_0x77F050A399DB77ED(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0x93C424DD4488A7BF(uLocal_626, 35f);
				unk_0xBB088A7B5EA9D960(uLocal_626, "HAND_SHAKE", 0.3f);
				unk_0x97A2169EA4EC4F21(uLocal_626, uLocal_625, 8000, 1, 1);
			}
			iLocal_629 = unk_0x3EAC9995EC220C5A();
			iLocal_624 = 4;
			break;
		
		case 4:
			if (((unk_0x3EAC9995EC220C5A() - iLocal_629) > 4800 || (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))) || unk_0xBF0CC7B3A5D6AC0C(Local_68.f_2.f_1, 3f) > 0)
			{
				iLocal_624 = 5;
			}
			else if ((unk_0x3EAC9995EC220C5A() - iLocal_629) > 4500)
			{
				if (func_195())
				{
					if (!iLocal_583)
					{
						unk_0x23D87B2CECB53E05("CamPushInNeutral", 0, 0);
						unk_0xBBEB613A917D7EE8(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_583 = 1;
					}
				}
			}
			else if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && unk_0x5EE0E9E5B7A50C2A(unk_0x77F050A399DB77ED(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = unk_0x91741EBC3EA7D505(unk_0x77F050A399DB77ED(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_627)
					{
						iVar1 = unk_0xA3746E7F17F47DC2(10, 51);
						func_194(func_95(), 1, iVar1, 0, 0);
						iLocal_569 = (iLocal_569 + iVar1);
						Local_68.f_28.f_6 = unk_0xBE8BBC6340F2B731();
						unk_0xBBEB613A917D7EE8(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
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
			if (unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
			{
				unk_0x5817B24FA3E70BC6(Local_68.f_2, 1, 0);
				unk_0xB92C428B448B51A4(Local_68.f_2, 0);
			}
			unk_0x8793DE27084C2CBD(0);
			unk_0xABF261CA61470DE0(0, 1065353216);
			if (unk_0x06F36936289C5EC8(uLocal_625))
			{
				unk_0xFE65076A204F9258(uLocal_625, 0);
			}
			if (unk_0x06F36936289C5EC8(uLocal_626))
			{
				unk_0xFE65076A204F9258(uLocal_626, 0);
			}
			unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
			if (!unk_0x0B6E83A9A7ED3EBA(unk_0xD8D1111EA0CFD1DB()))
			{
				iVar3 = unk_0xD8D1111EA0CFD1DB();
				Var4 = { unk_0xAF99169F0F5AE41D(iVar3, 1) };
			}
			if (iLocal_628 != joaat("weapon_unarmed") && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				unk_0x9687CF9C13C1F6A1(unk_0x77F050A399DB77ED(), iLocal_628, 1);
			}
			if (unk_0xB56FEBC510E7E9DE(Local_68.f_162.f_18, 1))
			{
				unk_0xA5F70A8B83BDFA49(&(Local_68.f_162.f_18), 1);
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
			if (unk_0x2CC731F9E664299E())
			{
				unk_0x12A448112D057EB4(uLocal_626, 0);
				unk_0x81ADE7722FD45216(0, 0, 3000, 1, 0, 0);
				if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
				{
					unk_0xB28207B96952D994(unk_0x77F050A399DB77ED());
				}
				if (iLocal_569 < 15)
				{
					iVar1 = unk_0xA3746E7F17F47DC2(25, 65);
					func_194(func_95(), 1, iVar1, 0, 0);
					iLocal_569 = (iLocal_569 + iVar1);
				}
				unk_0xCA6D671341405469(500);
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
	if (Global_99250.f_8812[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99250.f_8812[iParam0 /*12*/].f_6 == 11 || Global_99250.f_8812[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99250.f_8812[iParam0 /*12*/].f_5 = 1;
		Global_99250.f_8812[iParam0 /*12*/].f_10 = iParam1;
		Global_99250.f_8812[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x9E0BBE2E0E32750D(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_98986 = 0;
	Global_98987 = 0;
	Global_98988 = 0;
	Global_98989 = 0;
	Global_98990 = 0;
	Global_98991 = 0;
	Global_98992 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99250.f_8812.f_3853;
	Global_99250.f_8812.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99250.f_8812[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99250.f_8812[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98986++;
					fVar1 = (fVar1 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98987++;
					fVar2 = (fVar2 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98988++;
					fVar3 = (fVar3 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98989++;
					fVar4 = (fVar4 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98990++;
					fVar5 = (fVar5 + (Global_99250.f_8812[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98991++;
					fVar6 = (fVar6 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98992++;
					fVar7 = (fVar7 + Global_99250.f_8812[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98969 > 0)
	{
		if (Global_98986 == Global_98969)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98970 > 0)
	{
		if (Global_98987 == Global_98970)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98971 > 0)
	{
		if (Global_98988 == Global_98971)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98972 > 0)
	{
		if (Global_98989 == Global_98972)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98973 > 0)
	{
		if (((Global_98990 == Global_98973 || (Global_98973 * 10 / Global_98990) < 41) || Global_98990 > Global_98976) || Global_98990 == Global_98976)
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_8812.f_3856, 14))
			{
				if (Global_98990 == Global_98973)
				{
					unk_0x9E0BBE2E0E32750D(joaat("num_rndevents_completed"), Global_98973, 0);
					unk_0x573691DB812DC8AA(&(Global_99250.f_8812.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98974 > 0)
	{
		if (Global_98991 == Global_98974)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98975 > 0)
	{
		if (Global_98992 == Global_98975)
		{
			fVar7 = 5f;
		}
	}
	Global_99250.f_8812.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98990 > Global_98976 || Global_98990 == Global_98976)
	{
		iVar9 = Global_98976;
	}
	else
	{
		iVar9 = Global_98990;
	}
	unk_0x5716C8F12991E399(joaat("num_missions_completed"), Global_98986, 1);
	unk_0x5716C8F12991E399(joaat("num_missions_available"), Global_98969, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_completed"), Global_98987, 1);
	unk_0x5716C8F12991E399(joaat("num_minigames_available"), Global_98970, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_completed"), Global_98988, 1);
	unk_0x5716C8F12991E399(joaat("num_oddjobs_available"), Global_98971, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_completed"), Global_98989, 1);
	unk_0x5716C8F12991E399(joaat("num_rndpeople_available"), Global_98972, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x5716C8F12991E399(joaat("num_rndevents_available"), Global_98976, 1);
	unk_0x5716C8F12991E399(joaat("num_misc_completed"), (Global_98992 + Global_98991), 1);
	unk_0x5716C8F12991E399(joaat("num_misc_available"), (Global_98975 + Global_98974), 1);
	Global_98993 = (Global_98986 * 100 / Global_98969);
	Global_98995 = ((Global_98988 + Global_98987) * 100 / (Global_98971 + Global_98970));
	Global_98994 = ((Global_98989 + iVar9) * 100 / (Global_98972 + Global_98976));
	Global_98996 = ((Global_98991 + Global_98992) * 100 / (Global_98974 + Global_98975));
	unk_0x46160091B23E8313(joaat("total_progress_made"), Global_99250.f_8812.f_3853, 1);
	unk_0x5716C8F12991E399(joaat("percent_story_missions"), Global_98993, 1);
	unk_0x5716C8F12991E399(joaat("percent_ambient_missions"), Global_98994, 1);
	unk_0x5716C8F12991E399(joaat("percent_oddjobs"), Global_98995, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853))
	{
		func_91(13, unk_0xF34EE736CF047844(Global_99250.f_8812.f_3853));
	}
	if (!unk_0xB94B9782B4E786E9())
	{
		if (!Global_69317)
		{
			if (func_188() == 2 == 0 && !unk_0x4C779B19E6DDCDA2())
			{
				if (unk_0x01128ADE88E1C42B())
				{
					Global_98984 = 0;
				}
				if (!Global_55659)
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
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

bool func_187(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
}

int func_188()
{
	return Global_25115;
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
		uVar2 = unk_0xA1F1837E4A137310((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEDF2A618D8A93F7D((iParam0 - 0)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA1F1837E4A137310((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEDF2A618D8A93F7D((iParam0 - 192)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA1F1837E4A137310((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEDF2A618D8A93F7D((iParam0 - 513)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA1F1837E4A137310((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEDF2A618D8A93F7D((iParam0 - 705)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xC9FE62843EA157C0((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEDF2A618D8A93F7D((iParam0 - 3111)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xC9FE62843EA157C0((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEDF2A618D8A93F7D((iParam0 - 2919)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x1F3B95F25F60E511((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEDF2A618D8A93F7D((iParam0 - 4207)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x1F3B95F25F60E511((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEDF2A618D8A93F7D((iParam0 - 4335)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x1F3B95F25F60E511((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEDF2A618D8A93F7D((iParam0 - 6029)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_190()
{
	if (!iLocal_575)
	{
		Global_99250.f_18653[iLocal_568]++;
		Global_99250.f_18653.f_62[iLocal_568] = Local_68.f_1;
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
			func_192(&Global_87907, 1);
			break;
		
		case 1:
			func_192(&Global_87909, 3);
			break;
		
		case 2:
			func_192(&Global_87913, 1);
			break;
		
		case 3:
			func_192(&Global_87915, 1);
			break;
		
		case 4:
			func_192(&Global_87917, 1);
			break;
		
		case 5:
			func_192(&Global_87919, 1);
			break;
		
		case 6:
			func_192(&Global_87921, 1);
			break;
		
		case 7:
			func_192(&Global_87923, 2);
			break;
		
		case 8:
			func_192(&Global_87926, 1);
			break;
		
		case 9:
			func_192(&Global_87928, 1);
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
			(*uParam0)[iVar0] = unk_0x3EAC9995EC220C5A();
		}
		iVar0++;
	}
}

void func_193(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xC5FC9A0E5FD51B1A(unk_0x7F3E348C0892D8D2(), 1, 0);
	}
	unk_0x87B88BB971295A97(1);
	func_196(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x488AF65D7EDB6B4A(1);
		unk_0x1B40500A7841D6AB(1);
	}
	func_166(23, 0);
}

void func_194(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_99250.f_32503[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_69(Global_99250.f_32503[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0xBA16CA557222A92B(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x5716C8F12991E399(iVar1, iVar0, 1);
	}
}

int func_195()
{
	if (unk_0x7DF7F572759C0E1B(unk_0x1B5ACB4894956DC7()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_196(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xCBF71C579F3C5665(unk_0x8ACD527A7E574590());
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 1);
		func_200(1);
		unk_0xB2FE902971602DFF();
		unk_0x8AD31F9246CE7ADF();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xEA9C2A206A86B744())
			{
				unk_0xC9AB825AA4821BDA(0);
			}
			if (!func_109())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_199(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_200(0);
		unk_0x7A72DD566E92DC37();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x1F3478667D91BCDD();
		}
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 0);
		func_199(0, iParam3, iParam2, 0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !func_197(unk_0x8ACD527A7E574590()))
		{
			unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), 0);
		}
		Global_69315 = 0;
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
		if (iParam0 == unk_0x8ACD527A7E574590())
		{
			return 1;
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_198()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

int func_199(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x4967E3B78238C06C() != iParam0 && uParam2)
		{
			unk_0x5377CB2488C9CA95(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_200(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 13);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 13);
	}
}

void func_201(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

int func_202(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
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
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
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
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
	{
		if (unk_0xFC0420DC987053AC(Local_68.f_2) == Local_68.f_185)
		{
			return 1;
		}
		else if (unk_0xCA55F1A0D9ADE3AD(Local_68.f_2, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0xCA55F1A0D9ADE3AD(Local_68.f_2, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0xCA55F1A0D9ADE3AD(Local_68.f_2, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (unk_0xCA55F1A0D9ADE3AD(Local_68.f_2, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204()
{
	if (unk_0x4F297F09162EFB5D())
	{
		return 0;
	}
	if (unk_0x618071F6827C232E(0, 18) || unk_0x618071F6827C232E(2, 18))
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
	if (unk_0x1F2158D615BC4B25(Local_68.f_0))
	{
		unk_0x587BE7B13B3A93BF(Local_68.f_0, &iVar0, 1);
		if ((iLocal_60 == 1 && iLocal_622 == 2) && ((unk_0xFFE317628111CD4A(unk_0x8ACD527A7E574590()) || func_218()) || func_217()))
		{
			unk_0x3F1BA020DCFDDF70(unk_0x8ACD527A7E574590());
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
				if ((func_20(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1) || (func_178(Local_68.f_2, &(Local_68.f_451)) && !unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))) && iVar0 != joaat("weapon_unarmed"))
				{
					func_212();
					unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
					iLocal_53 = 12;
					iLocal_52 = 3;
					iLocal_60 = 5;
					unk_0x573691DB812DC8AA(&Global_87290, 3);
					func_211();
				}
				if (func_1(Local_68.f_470, 8))
				{
					if (!func_1(Local_68.f_470, 32))
					{
						if (!unk_0x1E80C02AC16B6622(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							unk_0x642DDF74A8A2B3BB(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
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
					unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
					Local_68.f_2.f_11 = 1;
					func_190();
					iLocal_53 = 12;
					iLocal_52 = 3;
					iLocal_62 = 11;
					iLocal_60 = 3;
					unk_0x573691DB812DC8AA(&Global_87290, 3);
					func_211();
				}
				else if (func_20(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1))
				{
					unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
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
						if (!unk_0x1E80C02AC16B6622(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							unk_0x642DDF74A8A2B3BB(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
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
				if (!unk_0x02807DDCACCF5736(unk_0x77F050A399DB77ED()) && !unk_0x02807DDCACCF5736(Local_68.f_2))
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
					if (unk_0x671C6C3F21245221(Local_68.f_486) && !Local_68.f_467)
					{
						iLocal_53 = 33;
						Local_68.f_467 = 1;
					}
				}
			}
			if (iLocal_55 >= 1 && iLocal_55 < 7)
			{
				unk_0x3F1BA020DCFDDF70(unk_0x7F3E348C0892D8D2());
				if (func_208(Local_68.f_2, 0, 1, 0, 1, 1) || !unk_0x671C6C3F21245221(Local_68.f_486))
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
			unk_0xA5F70A8B83BDFA49(&Global_87290, 3);
			if (!unk_0xCD7683F575A67B31(Local_68.f_2))
			{
				func_6();
				iLocal_60 = 0;
			}
			break;
		
		case 7:
			if (!unk_0xCD7683F575A67B31(Local_68.f_2))
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
				if (unk_0xCD7683F575A67B31(Local_68.f_2))
				{
					func_6();
				}
				iLocal_53 = 23;
			}
			else if (func_40(&(Local_68.f_480)) > 10f)
			{
				if (!unk_0x1E80C02AC16B6622(Local_68.f_2))
				{
					unk_0x23E5F4496336DE4E(Local_68.f_2, unk_0x77F050A399DB77ED(), 100f, -1, 0, 0);
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
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
	{
		unk_0x9526D9575C237F2F(Local_68.f_2, 0);
	}
}

void func_207()
{
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
	{
		unk_0xD0C8DD55C652567F(Local_68.f_2, Local_68.f_0, -1, 0, 2);
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
			iLocal_46 = unk_0x070BBD7287E8E744(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = unk_0x070BBD7287E8E744(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = unk_0xD8D1111EA0CFD1DB();
		if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
		{
			if (unk_0xCC580427ED36D7F8(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0xCC580427ED36D7F8(iParam0, unk_0x77F050A399DB77ED(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xCC580427ED36D7F8(iParam0, unk_0x77F050A399DB77ED(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0xD8D1111EA0CFD1DB();
		if (!unk_0x0B6E83A9A7ED3EBA(iVar1))
		{
			if (unk_0xCC580427ED36D7F8(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
		{
			if (unk_0xC5C7DFE5BAB3BB22(iParam0))
			{
				if (unk_0x69C3D6B9D12B0293(iParam0) == unk_0x77F050A399DB77ED())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xA427F05DB896EEBE(iParam0, unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0xFFE317628111CD4A(unk_0x8ACD527A7E574590()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x03CD213BEF8ECB90(unk_0x77F050A399DB77ED()))
	{
		if (unk_0x98186B9FCCFA0ADD(iParam0))
		{
			return 1;
		}
	}
	if (func_209(unk_0x77F050A399DB77ED(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xCD7683F575A67B31(iParam0) && func_179(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xB42592B9FFEB5EDE(iParam0, 0))
		{
			if (unk_0x32F9EB04315127B4(unk_0x77F050A399DB77ED(), unk_0xF8D66A34AF0C53A5(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x32F9EB04315127B4(unk_0x77F050A399DB77ED(), iParam0))
		{
			return 1;
		}
		if (!unk_0x0B6E83A9A7ED3EBA(iParam1))
		{
			if (unk_0xCC580427ED36D7F8(iParam1, unk_0x77F050A399DB77ED(), 1))
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
	
	unk_0x587BE7B13B3A93BF(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x102639E2874F3AA1(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xAF99169F0F5AE41D(iParam0, 1), unk_0xAF99169F0F5AE41D(iParam1, 1)) < 2.5f)
			{
				if (unk_0x6867AF84AF12BEFC(iParam0, iParam1, 180f))
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
	
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()) && func_288())
	{
		iVar3 = unk_0xC153C0A3AB834C19(unk_0x77F050A399DB77ED(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((((uVar0[iVar4] != unk_0x77F050A399DB77ED() && uVar0[iVar4] != Local_68.f_2) && !unk_0x1E80C02AC16B6622(uVar0[iVar4])) && !unk_0x335346A332B62CA2(uVar0[iVar4])) && !unk_0x1CC086F95707C553(uVar0[iVar4], 0))
			{
				unk_0x8D429A827A931AC9(uVar0[iVar4], 1, 1);
				unk_0x23E5F4496336DE4E(uVar0[iVar4], unk_0x77F050A399DB77ED(), 100f, -1, 0, 0);
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
	
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()) && func_288())
	{
		iVar3 = unk_0xC153C0A3AB834C19(unk_0x77F050A399DB77ED(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((uVar0[iVar4] != unk_0x77F050A399DB77ED() && uVar0[iVar4] != Local_68.f_2) && !unk_0x335346A332B62CA2(uVar0[iVar4]))
			{
				unk_0x8D429A827A931AC9(uVar0[iVar4], 1, 1);
				unk_0xAAD288E877AC833D(&uLocal_566);
				unk_0x2A6B9F9E71C479CF(&uLocal_566);
				unk_0xD3AF1785A0A4CD09(0, 5000);
				unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 100f, -1, 0, 0);
				unk_0x44642CB08FA1637E(uLocal_566);
				unk_0xB8A8FA4B28E9F423(uVar0[iVar4], uLocal_566);
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
		if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
		{
			switch (iLocal_58)
			{
				case 1:
					iLocal_58 = 0;
					break;
				
				case 2:
					unk_0x642DDF74A8A2B3BB(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_17, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 3:
					unk_0x642DDF74A8A2B3BB(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_18, 8f, -4f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 4:
					unk_0x642DDF74A8A2B3BB(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_19, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 5:
					unk_0x642DDF74A8A2B3BB(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_20, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 6:
					iLocal_58 = 0;
					break;
				
				case 7:
					unk_0x642DDF74A8A2B3BB(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_21, 8f, -2f, -1, 0, 0, 0, 0, 0);
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
				if (!unk_0x1E80C02AC16B6622(Local_68.f_2) && unk_0x823B1736EFAFA74A(Local_68.f_2))
				{
					Local_68.f_2.f_14 = 1;
				}
			}
			if ((Local_68.f_2.f_13 && !unk_0x1E80C02AC16B6622(Local_68.f_2)) && !iLocal_60 == 12)
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
	if ((unk_0x3EAC9995EC220C5A() - Local_68.f_2.f_10) > 5000)
	{
		unk_0xAAD288E877AC833D(&(Local_68.f_2.f_24));
		unk_0x2A6B9F9E71C479CF(&(Local_68.f_2.f_24));
		unk_0x9A42ADE14351A508(0, Local_68.f_0, 0);
		unk_0xD0C8DD55C652567F(0, Local_68.f_0, -1, 0, 2);
		unk_0x44642CB08FA1637E(Local_68.f_2.f_24);
		unk_0xB8A8FA4B28E9F423(Local_68.f_2, Local_68.f_2.f_24);
		Local_68.f_2.f_10 = unk_0x3EAC9995EC220C5A();
	}
}

void func_216()
{
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
	{
		unk_0x8530DA8508D7A4B8(Local_68.f_2);
	}
}

int func_217()
{
	if (unk_0xB678BA86C6A66E7E(Local_68.f_186, Local_68.f_189, Local_68.f_192, 1))
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	if (unk_0x2EE7D633ACF62CEF(-1, Local_68.f_186, Local_68.f_189, Local_68.f_192))
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
				if (!unk_0x1E80C02AC16B6622(Local_68.f_2))
				{
					unk_0x23E5F4496336DE4E(Local_68.f_2, unk_0x77F050A399DB77ED(), 100f, -1, 0, 0);
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
	
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_0))
	{
		if (func_221())
		{
			unk_0x587BE7B13B3A93BF(Local_68.f_0, &iVar0, 1);
			if (iVar0 == joaat("weapon_petrolcan"))
			{
				if (unk_0x102639E2874F3AA1(Local_68.f_0))
				{
					if (unk_0x6867AF84AF12BEFC(Local_68.f_2, Local_68.f_0, 180f))
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
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_0))
	{
		if (unk_0xCA55F1A0D9ADE3AD(Local_68.f_0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
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
		if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
		{
			if (unk_0x823B1736EFAFA74A(Local_68.f_2))
			{
				unk_0x23E5F4496336DE4E(Local_68.f_2, Local_68.f_0, 100f, -1, 0, 0);
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
				if (unk_0x671C6C3F21245221(Local_68.f_486))
				{
					if (unk_0x19779E7427AA44FB(Local_68.f_486) > 0.876f)
					{
						iLocal_57 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_68.f_486 >= 0)
			{
				if (unk_0x671C6C3F21245221(Local_68.f_486))
				{
					if (unk_0x19779E7427AA44FB(Local_68.f_486) > 0.894f || (unk_0x19779E7427AA44FB(Local_68.f_486) > 0.871f && unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(Local_68.f_28, 1), unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1)) < 1f))
					{
						iLocal_57 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_15(1, 0);
			func_224(0);
			unk_0xFA5D89C73FE8EA61(Local_68.f_28, 0, 0);
			iLocal_57 = 5;
			break;
		
		case 4:
			func_15(1, 0);
			func_224(1);
			unk_0x68E5332DF8C1DA5A(Local_68.f_28, 0, 0);
			iLocal_57 = 5;
			break;
		
		case 5:
			if (unk_0xD8EEAAAE9301A49D(Local_68.f_28, unk_0x77F050A399DB77ED()))
			{
				func_194(func_95(), 1, iLocal_569, 0, 0);
				unk_0x68E5332DF8C1DA5A(Local_68.f_28, 0, 0);
				if (unk_0xC3B073777B46C61A(Local_68.f_28.f_2))
				{
					unk_0x296CDA10C549A502(&(Local_68.f_28.f_2));
				}
				if (iLocal_62 != 12)
				{
					iLocal_62 = 12;
				}
				func_184(297, 0, 0);
				Local_68.f_468 = 1;
				Local_68.f_28.f_6 = unk_0xBE8BBC6340F2B731();
				unk_0xBBEB613A917D7EE8(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
				func_12(&(Local_68.f_28.f_15));
				iLocal_57 = 6;
			}
			else if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_28) && unk_0xD0935EF5E40E7EE1(Local_68.f_28))
			{
			}
			break;
		
		case 6:
			if (func_8(&(Local_68.f_28.f_15)) > 2.5f)
			{
				if (unk_0x1F2158D615BC4B25(Local_68.f_28) && unk_0xD8EEAAAE9301A49D(Local_68.f_28, unk_0x77F050A399DB77ED()))
				{
					unk_0xE8EBCCA6A3BE542B(unk_0x77F050A399DB77ED(), 1, 1);
					unk_0x7D779528B7C61C13(&(Local_68.f_28));
				}
				iLocal_57 = 7;
			}
			break;
	}
}

void func_224(bool bParam0)
{
	Local_68.f_28.f_3 = 0;
	unk_0x573691DB812DC8AA(&(Local_68.f_28.f_3), 3);
	unk_0x573691DB812DC8AA(&(Local_68.f_28.f_3), 4);
	if (!bParam0)
	{
		iLocal_569 = unk_0xA3746E7F17F47DC2(Local_68.f_28.f_4, Local_68.f_28.f_5);
		if (!unk_0xC3B073777B46C61A(Local_68.f_28.f_2))
		{
			Local_68.f_28.f_2 = func_227(Local_68.f_28);
			unk_0x80553402FCEB9A9C(Local_68.f_28.f_2, 2);
		}
		unk_0x2188C7CCD5DA85A7(Local_68.f_28, -0.2f, 1);
	}
	else
	{
		iLocal_569 = unk_0xA3746E7F17F47DC2(50, Local_68.f_28.f_4);
		Local_68.f_28.f_1 = unk_0x668D94B26744D7B2(joaat("pickup_money_variable"), unk_0xAF99169F0F5AE41D(Local_68.f_28, 1), Local_68.f_28.f_3, iLocal_569, 1, 0);
		if (!unk_0xC3B073777B46C61A(Local_68.f_28.f_2))
		{
			Local_68.f_28.f_2 = func_225(Local_68.f_28.f_1);
		}
	}
	Local_68.f_28.f_14 = 1;
}

int func_225(var uParam0)
{
	var uVar0;
	
	if (!unk_0xAE5A4FE344CB20A9(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x713298C4C81DB8B5(uParam0);
	unk_0x61CD4A0BA23CE782(uVar0, func_226(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
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
	
	if (!unk_0x1F2158D615BC4B25(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xBAA49E1DC5584B87(iParam0);
	if (unk_0xDD21A3DB256904E7(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_226(unk_0x4C779B19E6DDCDA2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x0AA0CF6371DDEDCF(uVar0, iParam1);
		}
		else
		{
			unk_0x80553402FCEB9A9C(uVar0, 2);
		}
	}
	else if (unk_0x94195F7CA642F937(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_226(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
		unk_0x0AA0CF6371DDEDCF(uVar0, iParam1);
	}
	else if (unk_0x0449EE7873816A89(iParam0))
	{
		unk_0x61CD4A0BA23CE782(uVar0, func_226(unk_0x4C779B19E6DDCDA2(), 0.7f, 0.7f));
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
					Local_68.f_46.f_39 = unk_0x3EAC9995EC220C5A();
					iLocal_61 = 3;
				}
				break;
			
			case 3:
				if (unk_0x3EAC9995EC220C5A() - Local_68.f_46.f_39) > unk_0xA3746E7F17F47DC2(1000, 3000)
				{
					if (unk_0x968EA16107097324(Local_68.f_46.f_4[0], 0))
					{
						unk_0xE6AD70126CB40815(Local_68.f_46.f_4[0], 1);
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
					if ((((unk_0x1E80C02AC16B6622(Local_68.f_46[iVar0]) || (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_46[iVar0]) && unk_0x1CBFB08D4D50FF0E(Local_68.f_46[iVar0], 0, 2))) || unk_0x1E80C02AC16B6622(Local_68.f_2)) || (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2) && unk_0x1CBFB08D4D50FF0E(Local_68.f_2, 0, 2))) || func_20(Local_68.f_0, Local_68.f_2, &(Local_68.f_451), 1))
					{
						func_15(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0x1E80C02AC16B6622(Local_68.f_46[iVar1]))
							{
								unk_0xFBE25F0677076CF9(Local_68.f_46[iVar1], unk_0x77F050A399DB77ED(), 0, 16);
								unk_0x9526D9575C237F2F(Local_68.f_46[iVar1], 0);
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
		if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_46[iVar0]))
		{
			unk_0x9526D9575C237F2F(Local_68.f_46[iVar0], 0);
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
		if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_46[iVar0]))
		{
			if (!unk_0xB42592B9FFEB5EDE(Local_68.f_46[iVar0], 0))
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
	
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_46[iVar0]))
			{
				if (!unk_0x3D8234BA64B54520(Local_68.f_46[iVar0]))
				{
					return 1;
				}
			}
			if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_46.f_4[iVar0]))
			{
				if (!unk_0x3D8234BA64B54520(Local_68.f_46.f_4[iVar0]))
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
		Local_68.f_46[iVar0] = unk_0x6665DCC708A346F3(6, Local_68.f_46.f_26, Local_68.f_46.f_8[iVar0 /*3*/], Local_68.f_46.f_18[iVar0], 1, 1);
		unk_0x8D429A827A931AC9(Local_68.f_46[iVar0], 1, 0);
		unk_0x9526D9575C237F2F(Local_68.f_46[iVar0], 1);
		Local_68.f_46.f_4[iVar0] = unk_0x2EEA15C0C12C8CDE(Local_68.f_46.f_27, Local_68.f_46.f_8[iVar0 /*3*/], Local_68.f_46.f_18[iVar0], 1, 1);
		unk_0x8D429A827A931AC9(Local_68.f_46.f_4[iVar0], 1, 0);
		if (!(unk_0x0B6E83A9A7ED3EBA(Local_68.f_46[iVar0]) && unk_0x0B6E83A9A7ED3EBA(Local_68.f_46.f_4[iVar0])))
		{
			unk_0x213DEA03167527BC(Local_68.f_46[iVar0], Local_68.f_46.f_4[iVar0], -1);
			unk_0x1592B6D205958934(Local_68.f_46[iVar0], joaat("weapon_pistol"), 99, 0, 1);
		}
		unk_0x2A6B9F9E71C479CF(&(Local_68.f_46.f_35[iVar0]));
		unk_0xA0C5D1F0ABDB245E(0, Local_68.f_46.f_4[iVar0], Local_68.f_46.f_22, (unk_0x976251C76AC42124(Local_68.f_46.f_4[iVar0]) - 8f), 1, Local_68.f_46.f_27, 786981, Local_68.f_46.f_25, -1f);
		unk_0x743E219F0C060EE5(0, 0, 0);
		unk_0xF0C6B04F5AFE0B40(0, Local_68.f_0, -1, 0);
		unk_0x44642CB08FA1637E(Local_68.f_46.f_35[iVar0]);
		unk_0xB8A8FA4B28E9F423(Local_68.f_46[iVar0], Local_68.f_46.f_35[iVar0]);
		iVar0++;
	}
}

void func_234()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(Local_68.f_0))
	{
		unk_0x587BE7B13B3A93BF(Local_68.f_0, &iVar0, 1);
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
			if (unk_0x2AA05370067DC5AC(Local_68.f_0) < 0.1f && !func_236())
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
					if (!unk_0x1E80C02AC16B6622(Local_68.f_46[iVar1]))
					{
						unk_0xFBE25F0677076CF9(Local_68.f_46[iVar1], unk_0x77F050A399DB77ED(), 0, 16);
						unk_0x9526D9575C237F2F(Local_68.f_46[iVar1], 0);
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
		if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_46[iVar0]))
		{
			if (!unk_0xB380A9B7B94D9DC2(Local_68.f_46[iVar0]))
			{
				unk_0xE2CB8488CFA42209(Local_68.f_46[iVar0]);
				unk_0x7F9C14A842A18687(Local_68.f_46[iVar0], Local_68.f_0);
			}
		}
		iVar0++;
	}
}

int func_236()
{
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_0))
	{
		if (unk_0xCA55F1A0D9ADE3AD(Local_68.f_0, Local_68.f_46.f_28, Local_68.f_46.f_31, Local_68.f_46.f_34, 0, 1, 0))
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
	
	if (unk_0x1F2158D615BC4B25(Local_68.f_0))
	{
		unk_0x587BE7B13B3A93BF(Local_68.f_0, &iVar0, 1);
	}
	else
	{
		return 0;
	}
	if (!func_1(Local_68.f_470, 128))
	{
		if ((unk_0xCD7683F575A67B31(Local_68.f_2) || (unk_0xCC580427ED36D7F8(Local_68.f_2, Local_68.f_0, 1) && iVar0 == joaat("weapon_unarmed"))) || func_239(Local_68.f_2, Local_68.f_2.f_1, 1) > 1.15f)
		{
			if (unk_0xCD7683F575A67B31(Local_68.f_2))
			{
			}
			if (unk_0xCC580427ED36D7F8(Local_68.f_2, Local_68.f_0, 1) && iVar0 == joaat("weapon_unarmed"))
			{
			}
			if (func_239(Local_68.f_2, Local_68.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!unk_0xA427F05DB896EEBE(Local_68.f_2, Local_68.f_2.f_1, 0.35f, 0.35f, 1f, 0, 1, 0))
			{
				Var1 = { unk_0xAF99169F0F5AE41D(Local_68.f_2, 1) };
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
	
	if (!unk_0x0B6E83A9A7ED3EBA(uParam0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	return unk_0xA2490B3CE6382FBB(Var0, Param1, iParam4);
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
			unk_0x3F1BA020DCFDDF70(unk_0x8ACD527A7E574590());
			iLocal_67 = 1;
			break;
	}
}

void func_241()
{
	func_245();
	func_244();
	func_243();
	if (unk_0x5C31634D1DECF73C(Local_68.f_185))
	{
		unk_0xE2116CE9DE52BDE0(Local_68.f_2, Local_68.f_185);
		unk_0xE2116CE9DE52BDE0(Local_68.f_28, Local_68.f_185);
		if (!bLocal_574)
		{
			unk_0xE2116CE9DE52BDE0(Local_68.f_96.f_1, Local_68.f_185);
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
	
	iVar0 = unk_0xA3746E7F17F47DC2(1, 11);
	iVar1 = unk_0xA3746E7F17F47DC2(1, 5);
	iVar2 = unk_0xA3746E7F17F47DC2(1, 5);
	iVar3 = unk_0xA3746E7F17F47DC2(1, 3);
	iVar4 = unk_0xA3746E7F17F47DC2(1, 6);
	iVar5 = unk_0xA3746E7F17F47DC2(1, 4);
	iVar6 = unk_0xA3746E7F17F47DC2(1, 5);
	iVar7 = unk_0xA3746E7F17F47DC2(1, 4);
	iVar8 = unk_0xA3746E7F17F47DC2(1, 4);
	iVar9 = unk_0xA3746E7F17F47DC2(1, 5);
	iVar10 = unk_0xA3746E7F17F47DC2(1, 5);
	iVar11 = unk_0xA3746E7F17F47DC2(1, 5);
	iVar12 = unk_0xA3746E7F17F47DC2(1, 5);
	iVar13 = unk_0xA3746E7F17F47DC2(1, 9);
	iVar14 = unk_0xA3746E7F17F47DC2(1, 3);
	iVar15 = unk_0xA3746E7F17F47DC2(1, 5);
	iVar16 = unk_0xA3746E7F17F47DC2(1, 3);
	iVar17 = unk_0xA3746E7F17F47DC2(1, 6);
	iVar18 = unk_0xA3746E7F17F47DC2(1, 5);
	iVar19 = unk_0xA3746E7F17F47DC2(1, 4);
	iVar20 = unk_0xA3746E7F17F47DC2(1, 4);
	iVar21 = unk_0xA3746E7F17F47DC2(1, 4);
	iVar22 = unk_0xA3746E7F17F47DC2(1, 6);
	iVar23 = unk_0xA3746E7F17F47DC2(1, 6);
	iVar24 = unk_0xA3746E7F17F47DC2(1, 6);
	iVar25 = unk_0xA3746E7F17F47DC2(1, 6);
	iVar26 = unk_0xA3746E7F17F47DC2(1, 4);
	iVar27 = unk_0xA3746E7F17F47DC2(1, 3);
	iVar28 = unk_0xA3746E7F17F47DC2(1, 4);
	iVar29 = unk_0xA3746E7F17F47DC2(1, 4);
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
	unk_0x523CCF1ADDF2EFE8(Local_68.f_486.f_6, 0.5f, joaat("prop_till_01"), 1);
	unk_0x523CCF1ADDF2EFE8(Local_68.f_486.f_6, 0.5f, joaat("prop_till_02"), 1);
	unk_0x523CCF1ADDF2EFE8(Local_68.f_486.f_6, 0.5f, joaat("prop_till_03"), 1);
	Local_68.f_96.f_1 = unk_0x4A498A71A7B2E7A5(Local_68.f_96, Local_68.f_486.f_6, 1, 1, 0);
	unk_0x2DA164E80FDEE7F2(Local_68.f_96.f_1, Local_68.f_96.f_5);
	unk_0xB92C428B448B51A4(Local_68.f_96.f_1, 1);
}

void func_244()
{
	Local_68.f_28 = unk_0x6845AE5AF39251EA(joaat("pickup_portable_crate_unfixed"), Local_68.f_28.f_7, 0, Local_68.f_28.f_13);
	unk_0x188DB3CD3BF87211(Local_68.f_28, Local_68.f_28.f_10, 2, 1);
	unk_0x68E5332DF8C1DA5A(Local_68.f_28, 0, 0);
	unk_0xFA5D89C73FE8EA61(Local_68.f_28, 1, 0);
	Local_68.f_28.f_14 = 0;
}

void func_245()
{
	var uVar0;
	var uVar1;
	
	Local_68.f_2 = unk_0x6665DCC708A346F3(4, Local_68.f_2.f_5, Local_68.f_2.f_1, Local_68.f_2.f_4, 1, 1);
	func_251(iLocal_568, &uVar1, &uVar0);
	unk_0x5F2AACB0122E1554(Local_68.f_2, 0, uVar1, uVar0, 0);
	func_250(&uVar1, &uVar0);
	unk_0x5F2AACB0122E1554(Local_68.f_2, 2, uVar1, uVar0, 0);
	func_249(&uVar1, &uVar0);
	unk_0x5F2AACB0122E1554(Local_68.f_2, 3, uVar1, uVar0, 0);
	func_248(&uVar1, &uVar0);
	unk_0x5F2AACB0122E1554(Local_68.f_2, 4, uVar1, uVar0, 0);
	func_247(&uVar1, &uVar0);
	unk_0x5F2AACB0122E1554(Local_68.f_2, 8, uVar1, uVar0, 0);
	unk_0x9526D9575C237F2F(Local_68.f_2, 1);
	if (Local_68.f_2.f_12)
	{
		func_246();
	}
}

void func_246()
{
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
	{
	}
}

void func_247(var uParam0, var uParam1)
{
	*uParam0 = unk_0xA3746E7F17F47DC2(0, 2);
	if (*uParam0 == 0)
	{
		*uParam1 = unk_0xA3746E7F17F47DC2(0, 2);
	}
	else
	{
		*uParam1 = 0;
	}
}

void func_248(var uParam0, var uParam1)
{
	*uParam0 = 0;
	*uParam1 = unk_0xA3746E7F17F47DC2(0, 2);
}

void func_249(var uParam0, var uParam1)
{
	*uParam0 = unk_0xA3746E7F17F47DC2(0, 2);
	*uParam1 = unk_0xA3746E7F17F47DC2(0, 3);
}

void func_250(var uParam0, var uParam1)
{
	*uParam0 = unk_0xA3746E7F17F47DC2(0, 3);
	if (*uParam0 > 0)
	{
		*uParam1 = unk_0xA3746E7F17F47DC2(0, 2);
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
			*uParam2 = unk_0xA3746E7F17F47DC2(0, 3);
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
			*uParam2 = unk_0xA3746E7F17F47DC2(0, 3);
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
		if (!unk_0x5263DE3D9A17A86F(Local_68.f_2.f_15))
		{
			return 0;
		}
	}
	if (!unk_0xE9F04AFCFBB82353(Local_68.f_185))
	{
		return 0;
	}
	unk_0x8BCDA02068806E38(0);
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
		if (unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*2*/], 29))
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
	if (unk_0xB56FEBC510E7E9DE(uParam0, 30))
	{
		if (unk_0xB56FEBC510E7E9DE(iParam0, 29))
		{
			switch (func_256(iParam0))
			{
				case 0:
					return unk_0x4A4B6FD54C499B7D(uParam2);
					break;
				
				case 1:
					return unk_0x5263DE3D9A17A86F(sParam1);
					break;
				
				case 2:
					return unk_0x738A9699E2BC26EE(sParam1);
					break;
				
				case 3:
					return unk_0x234DE5FAACE83930(sParam1);
					break;
				
				case 4:
					return unk_0xEF797B6DFFA2C629(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x496E42829279FD71(sParam1);
					break;
				
				case 6:
					return unk_0x5F4EA7D1E9029E5C(sParam1, unk_0xB56FEBC510E7E9DE(iParam0, 27));
					break;
				
				case 7:
					return unk_0xCFA460CFA5E219DE(iParam2);
					break;
				
				case 8:
					return unk_0x77E40DD6F32BC674(iParam2);
					break;
				
				case 9:
					return unk_0x4D35306F9B28A02F();
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
		if (unk_0xB56FEBC510E7E9DE(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_257()
{
	unk_0x8BCDA02068806E38(1);
	if (!bLocal_574)
	{
		unk_0x6E2E777C1AD81C36(Local_68.f_2.f_15);
		Local_584.f_32 = unk_0x27A15A339F2F298B();
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
		if (unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*2*/], iParam1))
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
		if (!unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x573691DB812DC8AA(uParam0[iVar0 /*2*/], iParam1);
			unk_0x573691DB812DC8AA(uParam0[iVar0 /*2*/], 30);
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
			Local_68.f_185 = unk_0x9794B606B17FAF25(Var0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_68.f_185 = unk_0x9794B606B17FAF25(Var0, "v_gen_liquor");
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
			Local_68.f_185 = unk_0x9794B606B17FAF25(Var0, "v_shop_247");
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
	
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(Local_68.f_0, 1) };
		if (unk_0xA2490B3CE6382FBB(Var0, Local_68.f_181, 1) < 50f)
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
		unk_0xFB4F6722A032A0F0(Local_68.f_46.f_26);
	}
	if (Local_68.f_46.f_27 != 0)
	{
		unk_0xFB4F6722A032A0F0(Local_68.f_46.f_27);
	}
	if (!unk_0x0AAC2160036975D9(Local_68.f_2.f_15))
	{
		unk_0xD5A53B898943F331(Local_68.f_2.f_15);
	}
}

int func_270()
{
	if (Global_99250.f_7703)
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
	if (!unk_0xD8AD97AB31334199())
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
	if (Global_25117)
	{
		unk_0x4ACCE973F9C3CA3B(1);
		unk_0x2F798BA2098FDADE();
	}
	return 0;
}

bool func_271()
{
	return Global_98968 > 0;
}

int func_272()
{
	if (Global_88361 != -1)
	{
		return 1;
	}
	return 0;
}

int func_273()
{
	struct<3> Var0;
	float fVar3;
	
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(Local_68.f_0, 1) };
		fVar3 = unk_0xA2490B3CE6382FBB(Var0, Local_68.f_181, 1);
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
	return Global_99250.f_7703.f_99.f_58[iParam0];
}

void func_275(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0x27A15A339F2F298B() >= (uParam0->f_32 + uParam0->f_33) || unk_0xB56FEBC510E7E9DE(Global_91106.f_20, 2)) || unk_0xB56FEBC510E7E9DE(Global_91106.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*2*/], 29))
					{
						func_276(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x27A15A339F2F298B();
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
	if (unk_0xB56FEBC510E7E9DE(*uParam0, 30))
	{
		switch (func_256(*uParam0))
		{
			case 0:
				unk_0xC60576ADD1AECA45(uParam2);
				break;
			
			case 1:
				unk_0x6E2E777C1AD81C36(sParam1);
				break;
			
			case 2:
				unk_0xD8684F03DA130C7B(sParam1);
				break;
			
			case 3:
				unk_0x011CAFBB4767F059(sParam1, unk_0xB56FEBC510E7E9DE(*uParam0, 28));
				break;
			
			case 4:
				unk_0xE3E5A6B56C247E86(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x1C18D36FD30A924E(sParam1);
				break;
			
			case 6:
				unk_0x5F4EA7D1E9029E5C(sParam1, unk_0xB56FEBC510E7E9DE(*uParam0, 27));
				break;
			
			case 7:
				unk_0xB83075ADFF6A3A01(iParam2);
				break;
			
			case 8:
				unk_0xC8C54AFEF8609CEF(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xAB01A53F64F073E1();
				break;
			
			default:
				break;
		}
		unk_0x573691DB812DC8AA(uParam0, 29);
	}
}

int func_278()
{
	int iVar0;
	
	if (Local_68.f_1 != Global_99250.f_18653.f_62[iLocal_568])
	{
		return 1;
	}
	iVar0 = (unk_0xCB12BC5A618B995B() - Global_99250.f_18653.f_42[iLocal_568]);
	iLocal_573 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0xCB12BC5A618B995B() + 31;
		iVar0 = (iVar0 - Global_99250.f_18653.f_42[iLocal_568]);
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
			*uParam2 = { unk_0xB91BD3EFC17D9612(func_282(iParam0), uParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { unk_0xB91BD3EFC17D9612(func_282(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { unk_0xB91BD3EFC17D9612(func_282(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { unk_0xB91BD3EFC17D9612(func_282(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
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
			*uParam2 = { unk_0xB91BD3EFC17D9612(func_282(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { unk_0xB91BD3EFC17D9612(func_282(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
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
	
	iVar0 = (unk_0x5C5157A539753532() - Global_99250.f_18653.f_21[iLocal_568]);
	iVar1 = (unk_0xCB12BC5A618B995B() - Global_99250.f_18653.f_42[iLocal_568]);
	iLocal_572 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0x5C5157A539753532() + 24;
		iVar0 = (iVar0 - Global_99250.f_18653.f_21[iLocal_568]);
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
		if (!unk_0x456AF8BC83CCA6FF(uVar1[iVar0]))
		{
			unk_0x45244BF5B177AB73(uVar1[0], uVar4[0], Var7[0 /*3*/], 0, 0, 0);
			if (uVar1[1] != -1)
			{
				unk_0x45244BF5B177AB73(uVar1[1], uVar4[1], Var7[1 /*3*/], 0, 0, 0);
			}
		}
		func_279(&(Local_68.f_470), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x456AF8BC83CCA6FF(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (unk_0xB0EBCA108443E198(uVar1[iVar0]) != 1)
				{
					unk_0x39FEEC3E8273065D(uVar1[iVar0], 1, 0, 0);
				}
			}
			else if (unk_0xB0EBCA108443E198(uVar1[iVar0]) != 0)
			{
				unk_0x39FEEC3E8273065D(uVar1[iVar0], 0, 0, 0);
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
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 1:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 2:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 3:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 4:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 5:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = -1;
			break;
		
		case 6:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = -1;
			break;
		
		case 7:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = -1;
			break;
		
		case 8:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = -1;
			break;
		
		case 9:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = -1;
			break;
		
		case 10:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 11:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 12:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 13:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 14:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 15:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 16:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 17:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 18:
			(*uParam1)[0] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = unk_0x39BD4614CF899227("eCRIM_HUP_SHOP247_10B");
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
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_0))
	{
		if (unk_0xCA55F1A0D9ADE3AD(Local_68.f_0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0xCA55F1A0D9ADE3AD(Local_68.f_0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0xCA55F1A0D9ADE3AD(Local_68.f_0, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (unk_0xCA55F1A0D9ADE3AD(Local_68.f_0, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_289()
{
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x93920F49CB9AD85E() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_290()
{
	if (Global_88361 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 20);
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
	Local_68.f_0 = unk_0x77F050A399DB77ED();
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
	*uParam3 = { unk_0xB91BD3EFC17D9612(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { unk_0xB91BD3EFC17D9612(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { unk_0xB91BD3EFC17D9612(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
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
			*uParam6 = { unk_0xB91BD3EFC17D9612(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
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
		if (Global_99250.f_18653.f_41 > 3)
		{
			if (iLocal_570 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = unk_0xA3746E7F17F47DC2(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_68.f_464 = 1;
				Global_99250.f_18653.f_41 = 0;
			}
			else
			{
				Local_68.f_464 = 0;
				Global_99250.f_18653.f_41++;
			}
		}
		else
		{
			Global_99250.f_18653.f_41++;
		}
	}
	else
	{
		Global_99250.f_18653.f_41++;
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
			iVar0 = unk_0xA3746E7F17F47DC2(0, 10);
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
			iVar0 = unk_0xA3746E7F17F47DC2(0, 7);
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
		iVar0 = (iVar0 + Global_99250.f_18653[iVar1]);
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
	return Global_35700 == iParam0;
}

int func_303(int iParam0)
{
	if (Global_35700 == 15)
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
	return func_305(iParam0, Global_35700);
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
	if (((iLocal_65 == 1 || iLocal_65 == 2) || iLocal_624 == 7) || (unk_0x0B6E83A9A7ED3EBA(Local_68.f_2) && iLocal_67 == 1))
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
		if (unk_0x0B6E83A9A7ED3EBA(Local_68.f_2) && iLocal_67 == 1)
		{
		}
		Global_99250.f_18653.f_21[iLocal_568] = unk_0x5C5157A539753532();
		Global_99250.f_18653.f_42[iLocal_568] = unk_0xCB12BC5A618B995B();
	}
	if ((unk_0x3A691B47D5DE2593() && func_318()) && Local_68.f_468)
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
		unk_0xCBC9707F3BE3D5C2(5);
	}
	unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
	unk_0x54575489AE798654(uLocal_567, 0);
	func_28("SHR_HOLDUP_1", 1);
	func_28("SHR_SNK_TUT", 1);
	if ((func_27("SHR_MENU") || func_27("SHR_HOLDUP_1")) || func_27("SHR_SNK_TUT"))
	{
		unk_0x4ACCE973F9C3CA3B(1);
	}
	if (func_1(Local_68.f_470, 1024))
	{
		if ((unk_0x1F2158D615BC4B25(uLocal_618[0]) && unk_0x1F2158D615BC4B25(uLocal_618[1])) && unk_0x1F2158D615BC4B25(uLocal_618[2]))
		{
			unk_0x7D779528B7C61C13(&(uLocal_618[0]));
			unk_0x7D779528B7C61C13(&(uLocal_618[1]));
			unk_0x7D779528B7C61C13(&(uLocal_618[2]));
		}
	}
	if (iLocal_623 == 2)
	{
		unk_0xD5A53B898943F331(Local_68.f_486.f_1);
	}
	func_307(&Local_584, 0);
	unk_0x2F798BA2098FDADE();
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
		if (unk_0xB56FEBC510E7E9DE((*uParam0)[iVar0 /*2*/], 30))
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
	if (unk_0xB56FEBC510E7E9DE(uParam0, 30))
	{
		switch (func_256(iParam0))
		{
			case 0:
				unk_0xFB4F6722A032A0F0(uParam2);
				break;
			
			case 1:
				unk_0xD5A53B898943F331(sParam1);
				break;
			
			case 2:
				unk_0xCF6799E8F8F03963(sParam1);
				break;
			
			case 3:
				unk_0x18D66253D62D657B(sParam1);
				break;
			
			case 4:
				unk_0xD6BB36F97A54533F(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xB616B0D2448050A6(sParam1);
				break;
			
			case 6:
				unk_0xB1FD6AC96E6B866D();
				break;
			
			case 7:
				unk_0x0594C68074129537(iParam2);
				break;
			
			case 8:
				unk_0x9516B90C3EE9BEBE(iParam2, unk_0xB56FEBC510E7E9DE(iParam0, 26));
				break;
			
			case 9:
				unk_0x9424E5B8292E239C();
				break;
			
			default:
				break;
		}
	}
}

void func_312()
{
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_2))
	{
		unk_0xE2CB8488CFA42209(Local_68.f_2);
	}
	if (unk_0x1F2158D615BC4B25(Local_68.f_2))
	{
		func_206();
		unk_0xA29D53AF339F4CD0(&(Local_68.f_2));
	}
	if (unk_0x1F2158D615BC4B25(Local_68.f_86))
	{
		unk_0xA29D53AF339F4CD0(&(Local_68.f_86));
	}
	if (!unk_0x0B6E83A9A7ED3EBA(Local_68.f_28))
	{
		if (iLocal_55 >= 4)
		{
			unk_0x8A817B41A6EAEFB5(Local_68.f_28, -8f, 1);
			unk_0x9F7DEFCB38719EA3(Local_68.f_28, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
		}
	}
	if (unk_0x1F2158D615BC4B25(Local_68.f_28))
	{
		unk_0xFF0E2D994E7D2E94(&(Local_68.f_28));
	}
	if (unk_0x1F2158D615BC4B25(Local_68.f_96.f_1))
	{
		unk_0x7D779528B7C61C13(&(Local_68.f_96.f_1));
		unk_0xFE13B06380BD607C(Local_68.f_486.f_6, 0.5f, joaat("prop_till_01"), 0);
		unk_0xFE13B06380BD607C(Local_68.f_486.f_6, 0.5f, joaat("prop_till_02"), 0);
		unk_0xFE13B06380BD607C(Local_68.f_486.f_6, 0.5f, joaat("prop_till_03"), 0);
	}
	if (unk_0xAE5A4FE344CB20A9(Local_68.f_28.f_1))
	{
		unk_0xFED6C9CCD794E1F5(Local_68.f_28.f_1);
	}
	if (func_14(&(Local_68.f_477)))
	{
		func_39(&(Local_68.f_477));
	}
	if (Local_68.f_466)
	{
		if (!bLocal_574)
		{
			unk_0xD5A53B898943F331(Local_68.f_2.f_15);
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
		unk_0xB33C6DC28CD900CB(131, *uParam2, unk_0xBBDA792448DB5A89(*uParam2));
		unk_0xB33C6DC28CD900CB(114, iVar0, unk_0xBBDA792448DB5A89(iVar0));
	}
}

int func_314(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0x3A691B47D5DE2593())
	{
	}
	if ((!unk_0xEF7FDD15CF67BEAE() && (unk_0x73AD3C66847D8B27() || !unk_0x5B13C6CE68AC15FB())) && unk_0x2FFC3CF907FE8282())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x99BD29C80FF8FFC7())
			{
				Var69 = { func_315(unk_0x8ACD527A7E574590()) };
				if (unk_0x149478BD8C953602(&Var69))
				{
					if (unk_0x9B8FA4DF999D2A3A(&uVar82, 35, &Var69))
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
			if (unk_0x4C779B19E6DDCDA2() && Global_2439377.f_3)
			{
				unk_0xB848E33BE24B4CF4(&Var0, &(Global_1706400.f_10));
			}
			else
			{
				unk_0x2A5EB7435F92FF1F(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xEF7FDD15CF67BEAE())
	{
	}
	if (!unk_0x73AD3C66847D8B27())
	{
	}
	if (unk_0x5B13C6CE68AC15FB())
	{
	}
	if (!unk_0x2FFC3CF907FE8282())
	{
	}
	return 0;
}

struct<13> func_315(var uParam0)
{
	struct<13> Var0;
	
	unk_0xAEFA54BD5AE42A15(uParam0, &Var0, 13);
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

