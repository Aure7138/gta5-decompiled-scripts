#region Local Var
	char* sLocal_0 = NULL;
	var uLocal_1 = 0;
	bool bLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7[2] = { 0, 0 };
	var uLocal_10[2] = { 0, 0 };
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "BG_NG 1.28.15";
	unk_0xE5556978B2858C53(0);
	unk_0x1ED2FDBD02899869();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	iVar0 = unk_0x17103F66FBB44C3C() + 10000;
	while (unk_0x17103F66FBB44C3C() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_59())
		{
			func_58();
			if (bLocal_2)
			{
				unk_0xC98C9F8951F37C8D(0f, 0.23f);
				unk_0x8DEED365C52CC9BE(255, 255, 255, 255);
				func_57(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (unk_0x4B69FB3A5B09A1BA())
		{
			func_55();
			func_54();
			func_50();
			func_49();
			func_43();
			func_41();
			func_36();
			func_34();
			func_30();
			func_25();
			func_24();
			if (unk_0x708CE249B4F97BF8())
			{
				func_19();
			}
			func_17();
			func_14();
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE60DEFFB2A853900();
}

void func_1()
{
	if (func_13() == 27)
	{
		unk_0xEDB9A377CD8B7F03(&uLocal_1, 12);
		func_2(func_12());
	}
}

void func_2(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_11(1266, iParam0, 0) > 30)
	{
		func_9(1266, 30, iParam0);
	}
	if (func_11(1267, iParam0, 0) > 15)
	{
		func_9(1267, 15, iParam0);
	}
	if (func_11(1268, iParam0, 0) > 5)
	{
		func_9(1268, 5, iParam0);
	}
	if (func_11(65, iParam0, 0) > 10)
	{
		func_9(65, 10, iParam0);
	}
	if (func_11(66, iParam0, 0) > 10)
	{
		func_9(66, 10, iParam0);
	}
	if (func_11(1089, iParam0, 0) > 20)
	{
		func_9(1089, 20, iParam0);
	}
	if (func_11(1869, iParam0, 0) > 10)
	{
		func_9(1869, 10, iParam0);
	}
	if (func_11(1870, iParam0, 0) > 10)
	{
		func_9(1870, 10, iParam0);
	}
	if (func_11(1871, iParam0, 0) > 10)
	{
		func_9(1871, 10, iParam0);
	}
	if (func_11(1872, iParam0, 0) > 10)
	{
		func_9(1872, 10, iParam0);
	}
	if (func_11(1873, iParam0, 0) > 10)
	{
		func_9(1873, 10, iParam0);
	}
	iVar0 = unk_0xF2DB717A73826179((50f * Global_262145.f_97));
	if (func_11(808, iParam0, 0) > iVar0)
	{
		func_9(808, iVar0, iParam0);
	}
	iVar3 = 0;
	while (iVar3 <= 64)
	{
		iVar2 = func_8(iVar3);
		if (unk_0xD2FFD78288C5EDEF(unk_0x9F92518438215DD0(), iVar2, &iVar1))
		{
			if (func_7(iVar2, iParam0) > iVar1)
			{
				func_3(iVar2, iVar1, iParam0);
			}
		}
		iVar3++;
	}
	if (func_11(73, iParam0, 0) > 100)
	{
		func_9(73, 0, iParam0);
	}
}

void func_3(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_4(iParam0);
	if (iVar0 < 3015)
	{
		func_9(iVar0, iParam1, iParam2);
	}
}

int func_4(int iParam0)
{
	if (func_6() == 0 || func_5() == 0)
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				return 250;
				break;
			
			case joaat("weapon_combatpistol"):
				return 260;
				break;
			
			case joaat("weapon_appistol"):
				return 280;
				break;
			
			case joaat("weapon_microsmg"):
				return 290;
				break;
			
			case joaat("weapon_smg"):
				return 300;
				break;
			
			case joaat("weapon_assaultrifle"):
				return 319;
				break;
			
			case joaat("weapon_carbinerifle"):
				return 328;
				break;
			
			case joaat("weapon_advancedrifle"):
				return 337;
				break;
			
			case joaat("weapon_mg"):
				return 346;
				break;
			
			case joaat("weapon_combatmg"):
				return 355;
				break;
			
			case joaat("weapon_pumpshotgun"):
				return 373;
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				return 383;
				break;
			
			case joaat("weapon_assaultshotgun"):
				return 401;
				break;
			
			case joaat("weapon_sniperrifle"):
				return 420;
				break;
			
			case joaat("weapon_grenadelauncher"):
				return 438;
				break;
			
			case joaat("weapon_rpg"):
				return 445;
				break;
			
			case joaat("weapon_minigun"):
				return 454;
				break;
			
			case joaat("weapon_grenade"):
				return 462;
				break;
			
			case joaat("weapon_smokegrenade"):
				return 471;
				break;
			
			case joaat("weapon_stickybomb"):
				return 479;
				break;
			
			case joaat("weapon_stungun"):
				return 411;
				break;
			
			case joaat("gadget_parachute"):
				return 576;
				break;
			
			case joaat("weapon_molotov"):
				return 488;
				break;
			
			case joaat("weapon_petrolcan"):
				return 579;
				break;
			
			case joaat("weapon_knife"):
				return 192;
				break;
			
			case joaat("weapon_nightstick"):
				return 199;
				break;
			
			case joaat("weapon_bat"):
				return 234;
				break;
			
			case joaat("weapon_heavysniper"):
				return 429;
				break;
			
			case joaat("weapon_golfclub"):
				return 241;
				break;
			
			case joaat("weapon_crowbar"):
				return 206;
				break;
			
			case joaat("weapon_hammer"):
				return 227;
				break;
			
			case joaat("weapon_pistol50"):
				return 270;
				break;
			
			case -572349828:
				return 364;
				break;
			
			case joaat("weapon_assaultsmg"):
				return 310;
				break;
			
			case 392730790:
				return 432;
				break;
			
			case joaat("weapon_bullpupshotgun"):
				return 392;
				break;
			
			case joaat("weapon_bottle"):
				return 1727;
				break;
			
			case joaat("weapon_specialcarbine"):
				return 2511;
				break;
			
			case joaat("weapon_snspistol"):
				return 1737;
				break;
			
			case joaat("weapon_heavypistol"):
				return 2501;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 2521;
				break;
			
			case joaat("weapon_gusenberg"):
				return 2531;
				break;
			
			case joaat("weapon_vintagepistol"):
				return 2814;
				break;
			
			case joaat("weapon_flaregun"):
				return 2607;
				break;
			
			case joaat("weapon_firework"):
				return 2824;
				break;
			
			case joaat("weapon_musket"):
				return 2834;
				break;
			
			case joaat("weapon_dagger"):
				return 2804;
				break;
			
			case joaat("weapon_heavyshotgun"):
				return 2912;
				break;
			
			case joaat("weapon_marksmanrifle"):
				return 2922;
				break;
			
			case joaat("weapon_hominglauncher"):
				return 2946;
				break;
			
			case joaat("weapon_proxmine"):
				return 2938;
				break;
			
			case joaat("weapon_combatpdw"):
				return 2956;
				break;
			
			case joaat("weapon_knuckle"):
				return 2963;
				break;
			
			case joaat("weapon_marksmanpistol"):
				return 2973;
				break;
			
			case joaat("weapon_hatchet"):
				return 2930;
				break;
			}
	}
	return 3015;
}

int func_5()
{
	return Global_24445;
}

int func_6()
{
	return Global_24444;
}

int func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_4(iParam0);
	if (iVar0 < 3015)
	{
		return func_11(iVar0, iParam1, 0);
	}
	return 0;
}

int func_8(int iParam0)
{
	switch (iParam0)
	{
		case 34:
			return joaat("weapon_knife");
			break;
		
		case 1:
			return joaat("weapon_pistol");
			break;
		
		case 2:
			return joaat("weapon_combatpistol");
			break;
		
		case 3:
			return joaat("weapon_appistol");
			break;
		
		case 5:
			return joaat("weapon_smg");
			break;
		
		case 7:
			return joaat("weapon_microsmg");
			break;
		
		case 8:
			return joaat("weapon_assaultrifle");
			break;
		
		case 9:
			return joaat("weapon_carbinerifle");
			break;
		
		case 11:
			return joaat("weapon_advancedrifle");
			break;
		
		case 12:
			return joaat("weapon_mg");
			break;
		
		case 13:
			return joaat("weapon_combatmg");
			break;
		
		case 15:
			return joaat("weapon_stickybomb");
			break;
		
		case 16:
			return joaat("weapon_grenade");
			break;
		
		case 17:
			return joaat("weapon_smokegrenade");
			break;
		
		case 60:
			return joaat("weapon_proxmine");
			break;
		
		case 18:
			return joaat("weapon_remotesniper");
			break;
		
		case 20:
			return joaat("weapon_sniperrifle");
			break;
		
		case 21:
			return joaat("weapon_heavysniper");
			break;
		
		case 56:
			return joaat("weapon_marksmanrifle");
			break;
		
		case 22:
			return joaat("weapon_pumpshotgun");
			break;
		
		case 24:
			return joaat("weapon_assaultshotgun");
			break;
		
		case 25:
			return joaat("weapon_sawnoffshotgun");
			break;
		
		case 55:
			return joaat("weapon_heavyshotgun");
			break;
		
		case 26:
			return joaat("weapon_grenadelauncher");
			break;
		
		case 27:
			return joaat("weapon_rpg");
			break;
		
		case 28:
			return joaat("weapon_minigun");
			break;
		
		case 61:
			return joaat("weapon_hominglauncher");
			break;
		
		case 31:
			return joaat("weapon_stungun");
			break;
		
		case 33:
			return joaat("gadget_parachute");
			break;
		
		case 35:
			return joaat("weapon_nightstick");
			break;
		
		case 43:
			return joaat("weapon_petrolcan");
			break;
		
		case 45:
			return joaat("weapon_bottle");
			break;
		
		case 46:
			return joaat("weapon_specialcarbine");
			break;
		
		case 47:
			return joaat("weapon_snspistol");
			break;
		
		case 48:
			return joaat("weapon_bullpuprifle");
			break;
		
		case 49:
			return joaat("weapon_heavypistol");
			break;
		
		case 23:
			return joaat("weapon_bullpupshotgun");
			break;
		
		case 50:
			return joaat("weapon_gusenberg");
			break;
		
		case 51:
			return joaat("weapon_dagger");
			break;
		
		case 52:
			return joaat("weapon_vintagepistol");
			break;
		
		case 57:
			return joaat("weapon_flaregun");
			break;
		
		case 53:
			return joaat("weapon_musket");
			break;
		
		case 54:
			return joaat("weapon_firework");
			break;
		
		case 58:
			return joaat("weapon_hatchet");
			break;
		
		case 59:
			return joaat("weapon_railgun");
			break;
		
		case 64:
			return joaat("weapon_combatpdw");
			break;
		
		case 62:
			return joaat("weapon_knuckle");
			break;
		
		case 63:
			return joaat("weapon_marksmanpistol");
			break;
	}
	return joaat("weapon_unarmed");
}

void func_9(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2454588[iParam0 /*6*/][func_10(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC46BDC34976E9532(iVar0, iParam1, 1);
	}
}

int func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_12();
		if (iVar1 > -1)
		{
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454588[iParam0 /*6*/][func_10(iParam1)];
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_12()
{
	return Global_1312737;
}

int func_13()
{
	return Global_1315832;
}

void func_14()
{
	if (((Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] == 2 || Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] == 1) || func_16(unk_0xCFC72E446B0B3AD7())) || func_15(unk_0xCFC72E446B0B3AD7()))
	{
		if (!unk_0x94E72F17611BCD3C(Global_1048576.f_4, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(Global_1048576.f_4), 0);
			iLocal_19 = 1;
		}
	}
	else if (iLocal_19 && unk_0x7B47A371E2D93C2C(joaat("am_mp_property_int")) == 0)
	{
		if (unk_0x94E72F17611BCD3C(Global_1048576.f_4, 0))
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_1048576.f_4), 0);
			iLocal_19 = 0;
		}
	}
}

bool func_15(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 6;
}

bool func_16(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 5;
}

void func_17()
{
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 11);
	if (!iLocal_21)
	{
		if (Global_1582702.f_140)
		{
			if (func_18(unk_0xCFC72E446B0B3AD7(), 1, 1))
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					uLocal_20 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					if (unk_0xA27FA05139033EDE("Player_Vehicle", 3) && unk_0xB4289912C78431FE(uLocal_20, "Player_Vehicle"))
					{
					}
					else if (unk_0xA27FA05139033EDE("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x865ACDDED75C1CC2(uLocal_20, "Not_Allow_As_Saved_Veh", 1);
						iLocal_21 = 1;
					}
				}
			}
		}
	}
	else if (!Global_1582702.f_140)
	{
		iLocal_21 = 0;
	}
}

int func_18(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xCB29E1C3D086FBAE(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_19()
{
	var uVar0;
	int iVar1;
	
	if (func_18(unk_0xCFC72E446B0B3AD7(), 1, 1))
	{
		iVar1 = unk_0xB6A50C909A8FABC3(unk_0x9F92518438215DD0());
		if (!func_21(3784, -1, -1))
		{
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				uVar0 = func_11(1943, -1, 0);
				if (unk_0x94E72F17611BCD3C(uVar0, 10))
				{
					func_20(3784, 1, -1, 1);
				}
			}
			else if (iVar1 == joaat("mp_f_freemode_01"))
			{
				uVar0 = func_11(1943, -1, 0);
				if (unk_0x94E72F17611BCD3C(uVar0, 23))
				{
					func_20(3784, 1, -1, 1);
				}
			}
		}
		if (!func_21(3787, -1, -1))
		{
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				uVar0 = func_11(1943, -1, 0);
				if (unk_0x94E72F17611BCD3C(uVar0, 13))
				{
					func_20(3787, 1, -1, 1);
				}
			}
			else if (iVar1 == joaat("mp_f_freemode_01"))
			{
				uVar0 = func_11(1943, -1, 0);
				if (unk_0x94E72F17611BCD3C(uVar0, 26))
				{
					func_20(3787, 1, -1, 1);
				}
			}
		}
		if (!func_21(3792, -1, -1))
		{
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				uVar0 = func_11(1943, -1, 0);
				if (unk_0x94E72F17611BCD3C(uVar0, 18))
				{
					func_20(3792, 1, -1, 1);
				}
			}
			else if (iVar1 == joaat("mp_f_freemode_01"))
			{
				uVar0 = func_11(1943, -1, 0);
				if (unk_0x94E72F17611BCD3C(uVar0, 31))
				{
					func_20(3792, 1, -1, 1);
				}
			}
		}
	}
}

int func_20(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_12();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		iVar8 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		iVar9 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_12();
	}
	iVar1 = func_23(iParam0, iParam1);
	uVar2 = func_22(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x6132304E7C8C9267(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_22(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		iVar0 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		iVar0 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
	}
	return iVar0;
}

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_12();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		iVar0 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		iVar0 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	return iVar0;
}

void func_24()
{
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 10);
	if (Global_262145.f_6914 != 37500)
	{
		Global_262145.f_6914 = 37500;
	}
}

void func_25()
{
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 9);
	if (Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_324 && Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_173 != 0)
	{
		if (Global_1312418.f_1 == 1)
		{
			if (Global_1312418)
			{
				Global_1312418 = 0;
				func_28();
				if ((!unk_0x11D7DF356299D4F0() && !Global_2428162.f_711) && !func_26(unk_0xCFC72E446B0B3AD7()))
				{
					Global_973956 = 0;
				}
			}
			Global_1312418.f_1 = 0;
		}
	}
}

int func_26(int iParam0)
{
	if (func_27(iParam0))
	{
		if (Global_1582869[iParam0 /*332*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (iParam0 != -1)
	{
		if (unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_13.f_1, 0))
		{
			return 1;
		}
		if (Global_1582869[iParam0 /*332*/] == -1)
		{
			return 0;
		}
	}
	return 1;
}

void func_28()
{
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (!func_29())
		{
			if (func_18(unk_0xCFC72E446B0B3AD7(), 1, 1))
			{
				unk_0x624C7BCDEBB9C07F(unk_0x9F92518438215DD0(), 1);
				unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 342, 0);
				unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 122, 0);
			}
			unk_0xC659370EBF580E0D(unk_0xCFC72E446B0B3AD7(), 1f);
			unk_0xECEB44CE3983E88C(0);
			unk_0x4834FC0305528BED(1);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				Global_1312418.f_2 = 0;
				unk_0x9B3D2D8783B4AD7E(0);
			}
		}
		else
		{
			if (func_18(unk_0xCFC72E446B0B3AD7(), 1, 1))
			{
				unk_0x624C7BCDEBB9C07F(unk_0x9F92518438215DD0(), 0);
				unk_0x3E5529EA76D127DA(unk_0x9F92518438215DD0(), joaat("weapon_unarmed"), 1);
				unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 342, 1);
				unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 122, 1);
				unk_0xC659370EBF580E0D(unk_0xCFC72E446B0B3AD7(), 0.5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					unk_0x9B3D2D8783B4AD7E(1);
				}
			}
			unk_0xECEB44CE3983E88C(1);
			unk_0x4834FC0305528BED(0);
		}
	}
}

bool func_29()
{
	return Global_1312418;
}

void func_30()
{
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 8);
	if (Global_1315827)
	{
		if (unk_0x4B69FB3A5B09A1BA() && func_31(unk_0xCFC72E446B0B3AD7()))
		{
			Global_1315827 = 0;
		}
	}
}

int func_31(int iParam0)
{
	if (func_33(iParam0) || func_32(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_32(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 7;
}

bool func_33(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 2;
}

void func_34()
{
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 7);
	if (!iLocal_18)
	{
		if (func_35())
		{
			if (Global_2422166.f_499.f_7 || Global_2422166.f_499.f_6)
			{
				iLocal_18 = 1;
				Global_2404554.f_22 = 0;
			}
		}
	}
	else if (!(Global_2422166.f_499.f_7 || Global_2422166.f_499.f_6))
	{
		iLocal_18 = 0;
	}
}

bool func_35()
{
	return Global_2404554.f_22;
}

void func_36()
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	var uVar23;
	
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 6);
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		if (iVar1 == 165)
		{
			if (unk_0x2E567DCD11FE0296(1, iVar0, &Var2, 21))
			{
				if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
				{
					if (((func_6() == 999 || func_6() == -1) && (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0) || unk_0x11CF47CA7B00BE4F(unk_0x9F92518438215DD0()))) && Var2.f_14 == 1)
					{
						func_38();
						func_37(1);
						uVar23 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
						unk_0x71628E52718BD195(unk_0x9F92518438215DD0());
						unk_0xCD3EBB4EAE50293F(&uVar23);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_37(int iParam0)
{
	Global_2435076 = iParam0;
}

void func_38()
{
	if (func_40() == 0 || unk_0xC8557993A78C1B3E())
	{
		func_39(1);
		unk_0xE8D54444121BA43A(0);
		unk_0xE8D54444121BA43A(0);
	}
}

void func_39(int iParam0)
{
	if (Global_1312467.f_20 != iParam0)
	{
		Global_1312467.f_20 = iParam0;
	}
}

int func_40()
{
	return Global_1312467.f_20;
}

void func_41()
{
	var uVar0[32];
	int iVar33;
	int iVar34;
	var uVar35;
	
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 5);
	if (!iLocal_16)
	{
		iLocal_17 = unk_0x6A8628B6E9F055B3();
		iLocal_16 = 1;
	}
	if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(iLocal_17, unk_0x6A8628B6E9F055B3())) < 1000)
	{
		return;
	}
	else
	{
		iLocal_17 = unk_0x6A8628B6E9F055B3();
	}
	iVar34 = unk_0xFC9FFBE3300B9CD9(unk_0x9F92518438215DD0(), &uVar0);
	if (iVar34 > 32)
	{
		iVar34 = 32;
	}
	if (Global_1582702.f_23 == -1 && !Global_1685057)
	{
		iVar33 = 0;
		while (iVar33 < iVar34)
		{
			if (unk_0x746960881FB19A89(uVar0[iVar33]) && unk_0xFC38B241541883D3(uVar0[iVar33], 0))
			{
				if (Global_1582702.f_23 == -1 && unk_0x6B08EC9A88700FBB(unk_0xC6FE92FD1DF5318E(uVar0[iVar33], &uVar35), "AM_MP_PROPERTY_EXT"))
				{
					if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), uVar0[iVar33], 1))
					{
						unk_0x71628E52718BD195(unk_0x9F92518438215DD0());
					}
					if (func_42(uVar0[iVar33], 1, 1, 0))
					{
						if (unk_0x88A3865085DFB7AD(uVar0[iVar33]))
						{
							unk_0x336AE92FD68DEF98(uVar0[iVar33], 0, 1);
							unk_0xCD3EBB4EAE50293F(&(uVar0[iVar33]));
						}
					}
				}
			}
			iVar33++;
		}
	}
}

int func_42(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x95A70C0B34435CA8(uParam0) + 1;
	if (!unk_0x0BA451447C3B1A8D(uParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x4A33023BC86AAA7F(uParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0xB5BBEB12C77EE430(uParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0x9F92518438215DD0())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x3E0478C40AB5B38D(iVar2))
					{
						if (unk_0x2FCB242469087013(iVar2))
						{
							return 0;
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else
				{
					iVar3 = unk_0xB5BBEB12C77EE430(uParam0, (iVar0 - 1));
					if (!unk_0x3E0478C40AB5B38D(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_43()
{
	var uVar0;
	
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 4);
	if (func_48())
	{
	}
	else
	{
		if (unk_0x11D7DF356299D4F0())
		{
			func_47(&uLocal_14);
			return;
		}
		if (!func_46(&uLocal_14))
		{
			func_45(&uLocal_14, 1, 0);
		}
		else if (func_44(&uLocal_14, 1000, 1))
		{
			if (func_18(unk_0xCFC72E446B0B3AD7(), 1, 1))
			{
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
				{
					uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
					if (((((unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()) && !unk_0x3E5B62F75695AF89()) && !unk_0x4F0283431254A343()) && !unk_0x2D8FCFBC4E01FF7C()) && !unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 11)) && !Global_1676157)
					{
						if (unk_0xCD22EDB73BA42551(uVar0))
						{
							if (unk_0x88A3865085DFB7AD(uVar0))
							{
								unk_0x78D5F615D8984F4E(uVar0, 1);
								func_47(&uLocal_14);
							}
						}
						else
						{
							unk_0x78D5F615D8984F4E(uVar0, 1);
							func_47(&uLocal_14);
						}
					}
					else
					{
						func_47(&uLocal_14);
					}
				}
				else
				{
					func_47(&uLocal_14);
				}
			}
			else
			{
				func_47(&uLocal_14);
			}
		}
	}
}

int func_44(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_45(uParam0, bParam2, 0);
	if (unk_0x4B69FB3A5B09A1BA() && !bParam2)
	{
		if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x17103F66FBB44C3C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_45(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4B69FB3A5B09A1BA() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6A8628B6E9F055B3();
			}
			else
			{
				*uParam0 = unk_0x4FEA29C1086C638D();
			}
		}
		else
		{
			*uParam0 = unk_0x17103F66FBB44C3C();
		}
		uParam0->f_1 = 1;
	}
}

bool func_46(var uParam0)
{
	return uParam0->f_1;
}

void func_47(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_48()
{
	return Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_173 != 0;
}

void func_49()
{
	int iVar0;
	
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 3);
	if (func_12() >= 0)
	{
		if (!iLocal_7[func_12()])
		{
			if (func_18(unk_0xCFC72E446B0B3AD7(), 1, 1))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (!unk_0x94E72F17611BCD3C(uLocal_10[func_12()], iVar0))
					{
						if (func_21((3594 + iVar0), -1, -1))
						{
							unk_0xEDB9A377CD8B7F03(&(uLocal_10[func_12()]), iVar0);
						}
					}
					iVar0++;
				}
				iLocal_7[func_12()] = 1;
			}
		}
		else
		{
			if (!unk_0x94E72F17611BCD3C(uLocal_10[func_12()], iLocal_13))
			{
				if (func_21((3594 + iLocal_13), -1, -1))
				{
					func_20((3594 + iLocal_13), 0, -1, 1);
				}
			}
			iLocal_13++;
			if (iLocal_13 >= 6)
			{
				iLocal_13 = 0;
			}
		}
	}
}

void func_50()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 2);
	bVar2 = false;
	if (func_52())
	{
		if (!iLocal_6)
		{
			Global_1694376 = 1;
			iLocal_6 = 1;
		}
	}
	else if (iLocal_6)
	{
		Global_1694376 = 0;
		iLocal_6 = 0;
	}
	if (!Global_1676157 && !unk_0x94E72F17611BCD3C(Global_1048576.f_4, 0))
	{
		if (func_18(unk_0xCFC72E446B0B3AD7(), 1, 1))
		{
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
			{
				iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
				if (unk_0xB4289912C78431FE(iVar0, "Player_Vehicle") && unk_0xE70466D7F0596A0E(unk_0xCFC72E446B0B3AD7()) == unk_0x70BD1F58B07BE0C1(iVar0, "Player_Vehicle"))
				{
					if (unk_0xB4289912C78431FE(iVar0, "PV_Slot") && !unk_0xB4289912C78431FE(iVar0, "Not_Allow_As_Saved_Veh"))
					{
						iVar1 = unk_0x70BD1F58B07BE0C1(iVar0, "PV_Slot");
						if (iVar1 >= 0)
						{
							if (iVar1 == Global_2097152[func_51() /*8064*/].f_5756.f_2 && iVar0 == Global_2446533.f_273)
							{
								if (iVar1 == Global_2097152[func_51() /*8064*/].f_5756.f_2)
								{
									bVar2 = true;
									if (!func_46(&uLocal_4))
									{
										func_45(&uLocal_4, 1, 0);
									}
									else if (func_44(&uLocal_4, 500, 1))
									{
										func_47(&uLocal_4);
										if (!unk_0x94E72F17611BCD3C(Global_2097152[func_51() /*8064*/][Global_2097152[func_51() /*8064*/].f_5756.f_2 /*111*/].f_72, 0))
										{
											unk_0xEDB9A377CD8B7F03(&(Global_2097152[func_51() /*8064*/][Global_2097152[func_51() /*8064*/].f_5756.f_2 /*111*/].f_72), 0);
											func_47(&uLocal_4);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (!bVar2 && func_46(&uLocal_4))
	{
		func_47(&uLocal_4);
	}
}

int func_51()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_52()
{
	if (((func_53() >= 0 && unk_0x94E72F17611BCD3C(Global_2097152[func_51() /*8064*/][func_53() /*111*/].f_72, 11)) && unk_0x94E72F17611BCD3C(Global_2097152[func_51() /*8064*/][func_53() /*111*/].f_72, 0)) && !unk_0xFC38B241541883D3(Global_2446533.f_273, 0))
	{
		return 1;
	}
	return 0;
}

int func_53()
{
	return Global_2097152[func_51() /*8064*/].f_5756.f_2;
}

void func_54()
{
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 1);
	if (Global_1311716[0 /*4*/] > 0)
	{
		if (Global_2391035 > 0)
		{
			if (Global_2359718[0 /*26*/].f_1 == 14)
			{
				if (Global_1603097 == 0)
				{
					if (Global_1603097.f_2 == 2)
					{
						Global_2391035 = 0;
						Global_2391036 = 0;
					}
				}
			}
		}
	}
}

void func_55()
{
	unk_0xEDB9A377CD8B7F03(&uLocal_1, 0);
	if (func_56() == 10)
	{
		if (!Global_68245)
		{
			Global_68245 = 1;
		}
	}
}

int func_56()
{
	return Global_1315856;
}

void func_57(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x94FC96A7EE0D90ED(sParam2);
	unk_0xBE450B0DD4D82DF2(sParam3);
	unk_0xC5A6B5A176BD3AE0(fParam0, fParam1, 0);
}

void func_58()
{
	if (!bLocal_2)
	{
		if (unk_0xC8557993A78C1B3E())
		{
			switch (iLocal_3)
			{
				case 0:
					if (unk_0x205C5BF7277043DF(2, 189))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x205C5BF7277043DF(2, 190))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 2:
					if (unk_0x205C5BF7277043DF(2, 189))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 3:
					if (unk_0x205C5BF7277043DF(2, 190))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 4:
					if (unk_0x205C5BF7277043DF(2, 188))
					{
						bLocal_2 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xC8557993A78C1B3E())
	{
		switch (iLocal_3)
		{
			case 0:
				if (unk_0x205C5BF7277043DF(2, 188))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x205C5BF7277043DF(2, 190))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 2:
				if (unk_0x205C5BF7277043DF(2, 189))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 3:
				if (unk_0x205C5BF7277043DF(2, 190))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 4:
				if (unk_0x205C5BF7277043DF(2, 189))
				{
					bLocal_2 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			}
	}
}

bool func_59()
{
	return unk_0x9501317225249120(-1762644250);
}

