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
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
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
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_56 = 1000;
	iLocal_57 = 3333;
	fLocal_58 = 0f;
	bLocal_65 = true;
	unk_0x44E747EFAA4C6724();
	if (unk_0x7547D7CF93115D6D(32))
	{
		unk_0x883793591E631A3B();
	}
	iLocal_51 = unk_0xF976C624234A4AA8();
	iLocal_60 = 0;
	func_149(iLocal_61);
	func_148();
	func_146(&Global_2543759);
	func_145(&Global_2543759, 1);
	func_143(&uLocal_62);
	while (true)
	{
		if (Global_24690 != iLocal_60)
		{
			if (iLocal_60 == 0 && Global_24690 != 0)
			{
				if (unk_0x9763C0E44A644CB2() || unk_0xA09FDB4B3C001CAB())
				{
					func_142("CHEAT_TROPHIE", -1);
				}
				else
				{
					func_142("CHEAT_ACHIEVE", -1);
				}
			}
			if (iLocal_60 != 0 && Global_24690 == 0)
			{
			}
		}
		iLocal_60 = Global_24690;
		if (!func_141(14))
		{
			if (!unk_0xC91582A6D1E6CE38(24))
			{
				func_132();
			}
			if (!unk_0xC91582A6D1E6CE38(25))
			{
				func_130();
			}
			if (Global_24453)
			{
				if (!unk_0xC91582A6D1E6CE38(12))
				{
					iVar0 = func_115(1);
					if (iVar0 > 0)
					{
						func_114(12, iVar0);
						unk_0x96B68C67633472DC(joaat("num_gold_medals_obtained"), iVar0, 1);
					}
					if (iVar0 >= 70)
					{
						func_108(12, 1);
					}
				}
				Global_24453 = 0;
			}
			if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
			{
				if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
				{
					iLocal_61++;
					if (unk_0xF976C624234A4AA8() > iLocal_51)
					{
						func_97(0);
						iLocal_51 = (unk_0xF976C624234A4AA8() + iLocal_56);
					}
					if (unk_0xF976C624234A4AA8() > iLocal_52)
					{
						if (!unk_0xC91582A6D1E6CE38(14) || iLocal_59 == 1)
						{
							if (func_96(53))
							{
								func_95();
							}
						}
						iLocal_52 = (unk_0xF976C624234A4AA8() + iLocal_57);
					}
				}
			}
			func_90(&Global_2543759);
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	var uVar0;
	int iVar1;
	
	if (!func_89(&Global_2543759))
	{
		return;
	}
	if (!Global_68067)
	{
		if (iLocal_67)
		{
			iLocal_67 = 0;
		}
		return;
	}
	if (!func_86())
	{
		return;
	}
	if (bLocal_65)
	{
		if (!func_84(3, -1))
		{
			return;
		}
		if (!func_84(5, -1))
		{
			return;
		}
	}
	if (iLocal_67)
	{
		return;
	}
	uVar0 = unk_0xFD223E6B868B6E52(&iVar1);
	if (iVar1 == -1 && iLocal_66 == 0)
	{
	}
	if (uVar0 && iVar1 == 0)
	{
		func_83();
		iLocal_67 = 1;
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	int iVar0;
	
	if (!unk_0xC91582A6D1E6CE38(33))
	{
		if (func_80())
		{
			func_108(33, 1);
		}
	}
	if (!unk_0xC91582A6D1E6CE38(29))
	{
		if (func_76(&uLocal_62) > 5f)
		{
			func_19(unk_0x507DA4994C3D8EBD());
			func_143(&uLocal_62);
		}
	}
	iVar0 = func_17(func_18(-1), 0);
	if (iVar0 >= 100)
	{
		if (!unk_0xC91582A6D1E6CE38(36))
		{
			func_108(36, 1);
		}
	}
	if (iVar0 >= 50)
	{
		if (!unk_0xC91582A6D1E6CE38(35))
		{
			func_108(35, 1);
		}
	}
	if (iVar0 >= 25)
	{
		if (!unk_0xC91582A6D1E6CE38(34))
		{
			func_108(34, 1);
		}
	}
	if (!unk_0xC91582A6D1E6CE38(37))
	{
		func_15(0);
	}
	if (!unk_0xC91582A6D1E6CE38(38))
	{
		if (func_14(joaat("mpply_total_custom_races_won")) >= 5)
		{
			func_108(38, 1);
		}
	}
	if (!unk_0xC91582A6D1E6CE38(39))
	{
		if (func_13(48, -1) >= 10)
		{
			func_108(39, 1);
		}
	}
	if (!unk_0xC91582A6D1E6CE38(40))
	{
		if (func_13(52, -1) > 0)
		{
			func_108(40, 1);
		}
	}
	if (!unk_0xC91582A6D1E6CE38(41))
	{
		if (unk_0x61D8FEAF64881CDA(Global_2446210.f_2055.f_18, 1))
		{
			func_108(41, 1);
		}
	}
	if (!unk_0xC91582A6D1E6CE38(43))
	{
		if (func_12(742, -1, 0) >= 30)
		{
			func_108(43, 1);
		}
	}
	if (!unk_0xC91582A6D1E6CE38(44))
	{
		if (func_13(14, -1) >= 20)
		{
			func_108(44, 1);
		}
	}
	if (!unk_0xC91582A6D1E6CE38(45))
	{
		func_10(0);
	}
	if (!unk_0xC91582A6D1E6CE38(48))
	{
		if (func_7(11, -1, -1))
		{
			func_108(48, 1);
		}
	}
	if (!unk_0xC91582A6D1E6CE38(49))
	{
		func_3(0);
	}
}

int func_3(bool bParam0)
{
	if (!func_86())
	{
		return 0;
	}
	if (!Global_68067)
	{
		return 0;
	}
	if (unk_0xC91582A6D1E6CE38(49))
	{
		return 0;
	}
	if (bParam0 == 1)
	{
	}
	if (!func_4(100, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_4(102, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_4(101, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	func_108(49, 1);
	return 1;
}

int func_4(int iParam0, int iParam1)
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

int func_7(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar1 = func_9(iParam0, iParam1);
	uVar2 = func_8(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x5C2F5514FB69DABE(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x3216D1FFC9DAD41E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x3216D1FFC9DAD41E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x3216D1FFC9DAD41E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x3216D1FFC9DAD41E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x3216D1FFC9DAD41E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x3216D1FFC9DAD41E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x3216D1FFC9DAD41E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x3216D1FFC9DAD41E((iParam0 - 4207)) * 64);
	}
	return iVar0;
}

int func_9(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xA207790667DAE5A1((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xA207790667DAE5A1((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xA207790667DAE5A1((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xA207790667DAE5A1((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x2E32FF1D139F1210((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x2E32FF1D139F1210((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x6E59129DA6C486E4((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x6E59129DA6C486E4((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	return iVar0;
}

int func_10(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!func_86())
	{
		return 0;
	}
	if (unk_0xC91582A6D1E6CE38(45))
	{
		return 0;
	}
	if (!Global_68067)
	{
		return 0;
	}
	uVar2 = func_12(743, -1, 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_11(uVar2, iVar0, bParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		func_108(45, 1);
		return 1;
	}
	return 0;
}

int func_11(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = unk_0x61D8FEAF64881CDA(uParam0, iParam1);
	if (!bParam2)
	{
		return bVar0;
	}
	switch (iParam1)
	{
		case 0:
			return bVar0;
		
		case 1:
			return bVar0;
		
		case 2:
			return bVar0;
		
		case 3:
			return bVar0;
		
		case 4:
			return bVar0;
		
		case 5:
			return bVar0;
		
		case 6:
			return bVar0;
		
		case 7:
			return bVar0;
		
		case 8:
			return bVar0;
		
		default:
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454190[iParam0 /*6*/][func_5(iParam1)];
	if (unk_0x55FFE396AA3CA77A(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2474212[iParam0 /*6*/][func_5(iParam1)];
	if (unk_0x55FFE396AA3CA77A(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_14(int iParam0)
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

int func_15(bool bParam0)
{
	int iVar0;
	
	if (unk_0xC91582A6D1E6CE38(37))
	{
		return 0;
	}
	if (!func_86())
	{
		return 0;
	}
	if (!Global_68067)
	{
		return 0;
	}
	if (bParam0)
	{
		iVar0 = func_13(21, -1);
		iVar0 = (iVar0 - func_13(58, -1));
		iVar0 = (iVar0 - func_13(57, -1));
	}
	if (func_16(8, -1))
	{
		func_108(37, 1);
		return 1;
	}
	return 0;
}

int func_16(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2474741[iParam0 /*6*/][func_5(iParam1)];
	if (unk_0xED5C4CADD81A8853(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_270026[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270026[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_18(int iParam0)
{
	return Global_1333830[func_5(iParam0)];
}

void func_19(int iParam0)
{
	int iVar0;
	struct<134> Var1;
	
	Var1 = 44;
	Var1.f_133 = 50;
	if (unk_0xC91582A6D1E6CE38(29))
	{
		return;
	}
	func_72(iParam0, &Var1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1.f_0)
	{
		if (func_20(iParam0, Var1[iVar0 /*3*/]))
		{
			func_108(29, 1);
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1.f_133)
	{
		if (func_20(iParam0, Var1.f_133[iVar0 /*3*/]))
		{
			func_108(29, 1);
			return;
		}
		iVar0++;
	}
}

int func_20(var uParam0, int iParam1)
{
	var uVar0;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	struct<6> Var45;
	
	if (iParam1 == -61829581)
	{
		return 0;
	}
	if (unk_0x9F94F2CFDCA78C55(uParam0))
	{
		return 0;
	}
	if (!unk_0x99A28335809E4B6C(uParam0, iParam1, 0))
	{
		return 0;
	}
	iVar39 = func_71(iParam1, &uVar0);
	if ((((((((((((((((((((((iParam1 != joaat("weapon_pistol") && iParam1 != joaat("weapon_appistol")) && iParam1 != joaat("weapon_combatpistol")) && iParam1 != joaat("weapon_microsmg")) && iParam1 != joaat("weapon_smg")) && iParam1 != joaat("weapon_pumpshotgun")) && iParam1 != joaat("weapon_assaultshotgun")) && iParam1 != joaat("weapon_sawnoffshotgun")) && iParam1 != joaat("weapon_assaultrifle")) && iParam1 != joaat("weapon_carbinerifle")) && iParam1 != joaat("weapon_advancedrifle")) && iParam1 != joaat("weapon_sniperrifle")) && iParam1 != joaat("weapon_heavysniper")) && iParam1 != joaat("weapon_mg")) && iParam1 != joaat("weapon_combatmg")) && iParam1 != joaat("weapon_grenadelauncher")) && iParam1 != -572349828) && iParam1 != joaat("weapon_assaultsmg")) && iParam1 != 392730790) && iParam1 != joaat("weapon_heavyrifle")) && iParam1 != joaat("weapon_bullpupshotgun")) && iParam1 != joaat("weapon_pistol50")) && (iVar39 == -1 || unk_0x0B2C0362098CB97C(iVar39) < 3))
	{
		return 0;
	}
	iVar40 = 0;
	iVar41 = 0;
	iVar42 = 0;
	iVar43 = 0;
	iVar44 = 0;
	while (func_21(&Var45, iParam1, iVar44, 0))
	{
		if (Var45.f_4 == joaat("WAPClip"))
		{
			iVar41++;
		}
		if (Var45.f_4 == joaat("WAPScop"))
		{
			iVar40++;
		}
		if (unk_0xC2AA32EA0F5ABE8C(uParam0, iParam1, Var45.f_0))
		{
			if (Var45.f_4 == joaat("WAPClip"))
			{
				iVar43 = Var45.f_5;
			}
			else if (Var45.f_4 == joaat("WAPScop"))
			{
				iVar42 = Var45.f_5;
			}
		}
		else if ((Var45.f_4 == joaat("WAPClip") || Var45.f_4 == joaat("WAPScop")) || Var45.f_4 == joaat("WAPRail"))
		{
		}
		else
		{
			return 0;
		}
		iVar44++;
	}
	if (iVar40 > iVar42)
	{
		return 0;
	}
	if (iVar41 > iVar43)
	{
		return 0;
	}
	if (unk_0x66A8A449029FCEF9(iParam1) > 0 && unk_0x539EF466D1E3CB3E(uParam0, iParam1) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_21(var uParam0, int iParam1, int iParam2, bool bParam3)
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
	var uVar11;
	struct<4> Var50;
	
	func_70(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 5:
					func_70(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_railcover_01"), joaat("WAPRail"), 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 5:
					func_70(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
					break;
				
				case 6:
					func_70(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_70(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_at_ar_flsh"), 1170392792, 1, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_70(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_70(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_70(uParam0, joaat("component_at_pi_flsh"), 1170392792, 1, 0);
					break;
				
				case 3:
					func_70(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPGrip"), 1, 0);
					break;
			}
			break;
		
		default:
			iVar9 = func_71(iParam1, &uVar11);
			if (iVar9 != -1)
			{
				iVar10 = 0;
				while (iVar10 < unk_0x0B2C0362098CB97C(iVar9))
				{
					if (unk_0x47BF2221B5382C2A(iVar9, iVar10, &Var50))
					{
						if (Var50.f_0 == joaat("WAPClip"))
						{
							iVar1++;
						}
						else if (Var50.f_0 == 1170392792)
						{
							iVar2++;
						}
						else if (Var50.f_0 == joaat("WAPScop"))
						{
							iVar3++;
						}
						else if (Var50.f_0 == joaat("WAPRail"))
						{
							iVar4++;
						}
						else if (Var50.f_0 == joaat("WAPGrip"))
						{
							iVar5++;
						}
						else if (Var50.f_0 == joaat("WAPSupp"))
						{
							iVar6++;
						}
						else if (Var50.f_0 == 1731751835)
						{
							iVar7++;
						}
						else
						{
							iVar8++;
						}
						if (iVar10 == iParam2)
						{
							if (Var50.f_0 == joaat("WAPClip"))
							{
								iVar0 = iVar1;
							}
							else if (Var50.f_0 == 1170392792)
							{
								iVar0 = iVar2;
							}
							else if (Var50.f_0 == joaat("WAPScop"))
							{
								iVar0 = iVar3;
							}
							else if (Var50.f_0 == joaat("WAPRail"))
							{
								iVar0 = iVar4;
							}
							else if (Var50.f_0 == joaat("WAPGrip"))
							{
								iVar0 = iVar5;
							}
							else if (Var50.f_0 == joaat("WAPSupp"))
							{
								iVar0 = iVar6;
							}
							else if (Var50.f_0 == 1731751835)
							{
								iVar0 = iVar7;
							}
							else
							{
								iVar0 = iVar8;
							}
							func_70(uParam0, Var50.f_3, Var50.f_0, iVar0, Var50.f_1);
						}
					}
					iVar10++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_22(iParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<6> Var43;
	int iVar65;
	int iVar66;
	var uVar67;
	struct<6> Var106;
	char* sVar128;
	struct<4> Var144;
	float fVar148;
	
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!unk_0xD95428C8AA1DBBF2())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
				}
				if (func_69() && (func_68() || func_67()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (func_69() && (func_68() || func_67()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
				}
				if (func_69() && (func_68() || func_67()))
				{
					iVar0 = 0;
				}
				break;
			
			default:
				iVar2 = func_71(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < unk_0x0B2C0362098CB97C(iVar2))
					{
						if (unk_0x47BF2221B5382C2A(iVar2, iVar3, &Var43))
						{
							if (Var43.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var43.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var43.f_5;
								}
								if (iParam0 == joaat("weapon_hammer"))
								{
									if (func_69() && (func_68() || func_67()))
									{
										iVar0 = 0;
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2857));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4318));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4319));
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 9250;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2858));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4320));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12100;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4321));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2860));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4322));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4323));
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2861));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4326));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4328));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4327));
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2862));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4329));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4331));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4330));
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2864));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4338));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4335));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4337));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4336));
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2865));
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4346));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4343));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4345));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4344));
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2867));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4348));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4350));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4349));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2868));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4351));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2869));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4372));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4373));
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4354));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4355));
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2871));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4358));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4359));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4360));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4361));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4362));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4363));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4364));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4365));
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4374));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4370));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4371));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2863));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4332));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4334));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4333));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_262145.f_4923;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_262145.f_5500;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_262145.f_5504;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5507;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_5503;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_5501;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5506;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_262145.f_5505;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_5508;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_5502;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_262145.f_5511;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5513;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_5509;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_5510;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5512;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_262145.f_5982;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_5983;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_262145.f_6631;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6632;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_6633;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6634;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_262145.f_6637;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = Global_262145.f_6639;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6638;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_6640;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6641;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4356));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4357));
						break;
				}
				if (func_69() && (func_68() || func_67()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2859));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4324));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4325));
						break;
				}
				if (func_69() && (func_68() || func_67()))
				{
					iVar0 = 0;
				}
				break;
			
			default:
				iVar65 = func_71(iParam0, &uVar67);
				if (iVar65 != -1)
				{
					iVar66 = 0;
					while (iVar66 < unk_0x0B2C0362098CB97C(iVar65))
					{
						if (unk_0x47BF2221B5382C2A(iVar65, iVar66, &Var106))
						{
							if (Var106.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var106.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var106.f_5;
								}
							}
						}
						iVar66++;
					}
				}
				break;
			}
	}
	if (unk_0xD95428C8AA1DBBF2() && func_65())
	{
		StringCopy(&Var144, func_63(iParam1, iParam0), 16);
		func_60(&sVar128, Var144, unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()), 3, 1, func_61(iParam0), -1, -1);
		if (unk_0xCA4DCC64D1E3A15E(&sVar128))
		{
			iVar0 = unk_0x08685E0829D91880(unk_0x3BA42EA02A10243D(&sVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_23(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_23(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (unk_0xD95428C8AA1DBBF2() && func_65())
	{
		return 1f;
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * fParam2));
	}
	if (!Global_68067)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_52(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_49 == 1)
	{
		if (unk_0xD95428C8AA1DBBF2())
		{
			*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_60));
			fVar1 = (fVar1 + (unk_0xBBDA792448DB5A89(Global_262145.f_101) / 100f));
		}
	}
	if (iLocal_49 == 0)
	{
		if (unk_0xD95428C8AA1DBBF2())
		{
			*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_60));
			if (func_24())
			{
				fVar1 = (fVar1 + (unk_0xBBDA792448DB5A89(Global_262145.f_101) / 100f));
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * fVar0));
	return fVar0;
}

int func_24()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (func_86())
	{
		if (func_27())
		{
			iVar0 = func_26();
			iVar1 = func_25();
			fVar2 = ((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_100) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_25()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1333721);
	iVar0 = (iVar0 + Global_1333724);
	return iVar0;
}

int func_26()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1333722);
	iVar0 = (iVar0 + Global_1333723);
	iVar0 = (iVar0 + Global_1333721);
	iVar0 = (iVar0 + Global_1333724);
	iVar0 = (iVar0 + Global_1333726);
	iVar0 = (iVar0 + Global_1333725);
	iVar0 = (iVar0 + func_14(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_14(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_14(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_14(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_14(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_27()
{
	struct<7> Var0;
	struct<7> Var7;
	
	unk_0xE447A3C9003CA31C(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_51(joaat("mpply_started_mp")) };
	if (func_28(Var7, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_28(struct<7> Param0, struct<7> Param7, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_49(Param7);
	iVar1 = func_39(Param0, iParam14);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_29(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_37(iParam1) || !func_37(iParam0))
	{
		return 1;
	}
	iVar0 = func_35(iParam0);
	iVar1 = func_35(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_34(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_33(iParam0);
	iVar1 = func_33(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_32(iParam0);
	iVar1 = func_32(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_31(iParam0);
	iVar1 = func_31(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_30(iParam0);
	iVar1 = func_30(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_31(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_32(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_33(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_34(int iParam0)
{
	return iParam0 & 15;
}

var func_35(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_36(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
}

int func_36(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_30(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_31(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_32(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_35(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_34(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_33(iParam0);
	if (iVar5 < 1 || iVar5 > func_38(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_38(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_39(struct<7> Param0, int iParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_48(Param0) == 0)
	{
		uVar0 = func_49(Param0);
		uVar1 = uVar0;
		func_40(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_35(*uParam0);
	iVar1 = func_34(*uParam0);
	iVar2 = func_33(*uParam0);
	iVar3 = func_32(*uParam0);
	iVar4 = func_31(*uParam0);
	iVar5 = func_30(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_38(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_38(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_41(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_47(uParam0, iParam1);
	func_46(uParam0, iParam2);
	func_45(uParam0, iParam3);
	func_44(uParam0, iParam4);
	func_43(uParam0, iParam5);
	func_42(uParam0, iParam6);
}

void func_42(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_43(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_44(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_34(*uParam0);
	iVar1 = func_35(*uParam0);
	if (iParam1 < 1 || iParam1 > func_38(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_45(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_46(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_47(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_48(struct<7> Param0)
{
	if ((((((Param0.f_0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_49(struct<6> Param0, var uParam6)
{
	var uVar0;
	
	if (Param0.f_0 > 0)
	{
		func_42(&uVar0, Param0.f_0);
	}
	if (Param0.f_1 > 0)
	{
		func_43(&uVar0, func_50(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_44(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_45(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_46(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_47(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_50(int iParam0)
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_51(int iParam0)
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var8;
	
	uVar0 = iParam0;
	if (unk_0x8CD6BCAFEE2BEE66(uVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar10;
	
	iVar0 = func_56();
	if (iParam0 == 0 || !func_55(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_53(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = func_53(1, iVar0);
		iVar3[1] = func_53(3, iVar0);
		iVar3[2] = func_53(2, iVar0);
		iVar3[3] = func_53(4, iVar0);
		iVar3[4] = func_53(5, iVar0);
		iVar3[5] = func_53(0, iVar0);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 1;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 2;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 3;
		}
	}
	return -1;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_54(iVar0, iParam1);
	if (func_54(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar1, iParam1);
	}
	if (func_54(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_54(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_54(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_54(int iParam0, int iParam1)
{
	return Global_97173.f_17368[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

int func_56()
{
	func_57();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_57()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_59(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_58(unk_0x507DA4994C3D8EBD());
			if (func_55(iVar0) && (!func_141(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_55(Global_97173.f_1729.f_539.f_3213))
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

int func_58(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_59(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_59(int iParam0)
{
	if (func_55(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_60(char* sParam0, char[8] cParam1, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	switch (unk_0x3BA42EA02A10243D(&cParam1))
	{
		case 64715401:
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 1:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 2:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 4:
			if (iParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&cParam1, unk_0x9CA400FE84544C65(iParam5), 16);
				if (unk_0x8FA72E132AAFA62F(&cParam1) || unk_0x3BA42EA02A10243D(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				switch (iParam5)
				{
					case joaat("dubsta2"):
					case joaat("cavalcade2"):
					case joaat("mesa2"):
					case joaat("rapidgt2"):
					case joaat("emperor2"):
						StringConCat(sParam0, "2", 64);
						break;
					
					case joaat("mesa3"):
					case joaat("emperor3"):
					case joaat("burrito3"):
						StringConCat(sParam0, "3", 64);
						break;
					
					case joaat("tornado4"):
						StringConCat(sParam0, "4", 64);
						break;
				}
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				switch (iParam5)
				{
					case joaat("dubsta2"):
					case joaat("cavalcade2"):
					case joaat("mesa2"):
					case joaat("rapidgt2"):
					case joaat("emperor2"):
						StringConCat(sParam0, "2", 64);
						break;
					
					case joaat("mesa3"):
					case joaat("emperor3"):
					case joaat("burrito3"):
						StringConCat(sParam0, "3", 64);
						break;
					
					case joaat("tornado4"):
						StringConCat(sParam0, "4", 64);
						break;
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
	}
}

int func_61(int iParam0)
{
	return func_62(iParam0);
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case joaat("weapon_heavyrifle"):
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
	}
	return 0;
}

char* func_63(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var41;
	
	switch (iParam0)
	{
		case 0:
			return "WCT_INVALID";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_71(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < unk_0x0B2C0362098CB97C(iVar0))
					{
						if (unk_0x47BF2221B5382C2A(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_64(&(Var41.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_64(var uParam0)
{
	return uParam0;
}

int func_65()
{
	if (unk_0xD95428C8AA1DBBF2() && func_66())
	{
		return 1;
	}
	return 0;
}

int func_66()
{
	if (unk_0x80AD636AD4184F2B())
	{
		return 1;
	}
	return 0;
}

int func_67()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x61D8FEAF64881CDA(Global_24, 2) || unk_0x61D8FEAF64881CDA(Global_24, 4))
	{
		return 1;
	}
	if (unk_0x85B80D0F84A3F70C())
	{
		uVar0 = unk_0x227FB8F9C772BAFB(866);
		if (unk_0x61D8FEAF64881CDA(uVar0, 2) || unk_0x61D8FEAF64881CDA(iVar0, 4))
		{
			return 1;
		}
	}
	if (unk_0xE802DF20297BD521(0))
	{
		if (Global_131418.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x55FFE396AA3CA77A(iVar2, &uVar1, -1))
			{
				if (unk_0x61D8FEAF64881CDA(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_68()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (unk_0x61D8FEAF64881CDA(Global_24, 1) || unk_0x61D8FEAF64881CDA(Global_24, 3))
	{
		return 1;
	}
	if (unk_0x85B80D0F84A3F70C())
	{
		uVar0 = unk_0x227FB8F9C772BAFB(866);
		if (unk_0x61D8FEAF64881CDA(uVar0, 1) || unk_0x61D8FEAF64881CDA(iVar0, 3))
		{
			return 1;
		}
	}
	if (unk_0xE802DF20297BD521(0))
	{
		if (Global_131418.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x55FFE396AA3CA77A(iVar2, &uVar1, -1))
			{
				if (unk_0x61D8FEAF64881CDA(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xA730AA29D1C70932())
	{
		if (unk_0x72B3C5483AF02F51())
		{
			if (unk_0x9785D134CB2612F6())
			{
				if (unk_0x85B80D0F84A3F70C())
				{
					uVar3 = unk_0x227FB8F9C772BAFB(866);
					unk_0x3DBE2A7AF9E71C82(&uVar3, 1);
					unk_0x3DBE2A7AF9E71C82(&uVar3, 3);
					unk_0x6C25B3CA27EB626F(uVar3);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_69()
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

void func_70(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_5 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_71(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x2611EF4947AA943C();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x82A3D8743B8B79C0(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_72(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0x9F94F2CFDCA78C55(uParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_75(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x844EDB06A8B25065(uParam0, func_75(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x05B6F0BD6BBB2050(uParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), (20 + unk_0x539EF466D1E3CB3E(uParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x2A292A04D839BF3D(uParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_74(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xC2AA32EA0F5ABE8C(uParam0, Var4.f_0, iVar2))
						{
							unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_74(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0x2611EF4947AA943C();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x82A3D8743B8B79C0(iVar7, &Var9) && !func_73(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x33C8EAC2E4509403(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x05B6F0BD6BBB2050(uParam0, Var4.f_0);
					if (unk_0x99A28335809E4B6C(uParam0, Var4.f_0, 0))
					{
						unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), (20 + unk_0x539EF466D1E3CB3E(uParam0, Var4.f_0)));
					}
					else
					{
						unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x2A292A04D839BF3D(uParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x0B2C0362098CB97C(iVar7))
					{
						if (unk_0x47BF2221B5382C2A(iVar7, iVar1, &Var48))
						{
							if (unk_0xC2AA32EA0F5ABE8C(uParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x99A28335809E4B6C(uParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_73(int iParam0)
{
	if (unk_0xD95428C8AA1DBBF2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_71(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x0B2C0362098CB97C(iVar1))
					{
						if (unk_0x47BF2221B5382C2A(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

float func_76(var uParam0)
{
	if (func_79(uParam0))
	{
		if (func_78(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_77() - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_77()
{
	int iVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = unk_0xFACC0E85E40AD425();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xF976C624234A4AA8()) / 1000f);
}

bool func_78(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 2);
}

bool func_79(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 1);
}

int func_80()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_82())
	{
		return 1;
	}
	if (func_81())
	{
		return 1;
	}
	return func_4(124, -1);
}

bool func_81()
{
	return Global_1315886;
}

bool func_82()
{
	return Global_1315888;
}

void func_83()
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 <= 49)
	{
		if (!unk_0xC91582A6D1E6CE38(iVar0))
		{
			if (unk_0xC38BFF40021AF7B0(iVar0))
			{
				func_108(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 51;
	while (iVar0 <= 59)
	{
		if (!unk_0xC91582A6D1E6CE38(iVar0))
		{
			if (unk_0xC38BFF40021AF7B0(iVar0))
			{
				func_108(iVar0, 1);
			}
		}
		iVar0++;
	}
}

bool func_84(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	uVar0 = func_85(iParam1);
	uVar1 = unk_0x227FB8F9C772BAFB(uVar0);
	return unk_0x61D8FEAF64881CDA(uVar1, iParam0);
}

int func_85(int iParam0)
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

int func_86()
{
	if (func_88() && func_87(0))
	{
		return 1;
	}
	return 0;
}

var func_87(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_88()
{
	return func_87(func_6() + 1);
}

bool func_89(var uParam0)
{
	return uParam0->f_68 == 1;
}

void func_90(var uParam0)
{
	if (func_94(uParam0, 0))
	{
		return;
	}
	if (!func_89(uParam0))
	{
		return;
	}
	if (func_76(&(uParam0->f_62)) < 8f)
	{
		return;
	}
	if (func_93((*uParam0)[0]))
	{
		func_92(uParam0);
		func_91(uParam0);
		func_143(&(uParam0->f_62));
	}
}

void func_91(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_94(uParam0, iVar0))
		{
			iVar0 = *uParam0 + 100;
		}
		iVar0++;
	}
}

void func_92(var uParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (func_94(uParam0, 0))
	{
		return;
	}
	while (iVar0 < *uParam0)
	{
		(*uParam0)[(iVar0 - 1)] = (*uParam0)[iVar0];
		iVar0++;
	}
}

int func_93(int iParam0)
{
	if (unk_0xC91582A6D1E6CE38(iParam0))
	{
		return 0;
	}
	if (!unk_0xB13535CD55ADA8AF(iParam0))
	{
		return 0;
	}
	if (unk_0xC91582A6D1E6CE38(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_94(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 61;
}

int func_95()
{
	float fVar0;
	
	if (unk_0xD95428C8AA1DBBF2() || Global_68067)
	{
		return 0;
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
		{
			fVar0 = unk_0x9E398CF68DAC5B00();
			if (fVar0 > 0.01f && unk_0x80AD636AD4184F2B())
			{
				func_114(14, unk_0xF34EE736CF047844((fVar0 * 100f)));
			}
			if (fVar0 >= 0.975f)
			{
				func_108(14, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_96(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_325[iParam0 /*6*/];
}

void func_97(bool bParam0)
{
	if (Global_68067)
	{
		if (bParam0)
		{
			func_10(bParam0);
		}
		func_3(bParam0);
		func_15(bParam0);
		if (bParam0)
		{
		}
	}
	func_107(bParam0);
	func_100(bParam0);
	func_99();
	func_98();
	if (bParam0)
	{
		if (func_79(&uLocal_53))
		{
		}
	}
}

int func_98()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC91582A6D1E6CE38(50))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (iVar0 + unk_0x02E2EDB3B1CA99DB(joaat("first_person_cam_time")) * 24);
	iVar0 = (iVar0 + unk_0xC33F84241C8331EF(joaat("first_person_cam_time")));
	iVar1 = (iVar1 + unk_0x02E2EDB3B1CA99DB(joaat("mp_first_person_cam_time")) * 24);
	iVar1 = (iVar1 + unk_0xC33F84241C8331EF(joaat("mp_first_person_cam_time")));
	if ((iVar0 + iVar1) >= 15)
	{
		func_108(50, 1);
		return 1;
	}
	return 0;
}

int func_99()
{
	int iVar0;
	
	if (unk_0xC91582A6D1E6CE38(22))
	{
		return 0;
	}
	iVar0 = unk_0xCA7B0D7685599630();
	if (iVar0 > 0)
	{
		if (Global_24705 < iVar0)
		{
			if (Global_24705 >= 0)
			{
				func_114(22, iVar0);
			}
			Global_24705 = iVar0;
		}
	}
	if (unk_0xCA7B0D7685599630() >= 50)
	{
		func_108(22, 1);
		return 1;
	}
	return 0;
}

int func_100(bool bParam0)
{
	var uVar0[6];
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0xC91582A6D1E6CE38(17))
	{
		return 0;
	}
	uVar0[0] = func_106();
	uVar0[1] = func_105();
	uVar0[2] = func_104();
	uVar0[3] = func_103();
	uVar0[4] = func_102();
	uVar0[5] = func_101();
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < 6)
	{
		if (uVar0[iVar8])
		{
			iVar7++;
		}
		iVar8++;
	}
	unk_0x55FFE396AA3CA77A(joaat("num_discipline_gold_earned"), &iVar9, -1);
	if (iVar7 > iVar9 && iVar7 > 0)
	{
		unk_0x96B68C67633472DC(joaat("num_discipline_gold_earned"), iVar7, 1);
		func_114(17, iVar7);
	}
	if (bParam0)
	{
	}
	if (!uVar0[0])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[1])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[2])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[3])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[4])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[5])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	func_108(17, 1);
	return 1;
}

int func_101()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_97173.f_1354[0 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_97173.f_1354[1 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_97173.f_1354[2 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_102()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (Global_97173.f_17368[0 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_97173.f_17368[1 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_97173.f_17368[2 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_103()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_28098.f_1, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_104()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_28101.f_2, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_105()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_97173.f_17237.f_19[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_106()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_97173.f_18232[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_107(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0xC91582A6D1E6CE38(27))
	{
		return 0;
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x55FFE396AA3CA77A(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x55FFE396AA3CA77A(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x96B68C67633472DC(joaat("num_cash_spent"), iVar1, 1);
		func_114(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_108(27, 1);
	return 1;
}

int func_108(int iParam0, int iParam1)
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_109(iParam0, iParam1);
}

int func_109(int iParam0, int iParam1)
{
	if (unk_0xC91582A6D1E6CE38(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68067)
	{
		return 0;
	}
	if (func_89(&Global_2543759))
	{
		if (func_112(&Global_2543759, iParam0))
		{
			return 0;
		}
		if (func_110(&Global_2543759, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xB13535CD55ADA8AF(iParam0))
		{
			return 0;
		}
		if (unk_0xC91582A6D1E6CE38(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_110(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[61];
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_112(uParam0, iParam1))
	{
		return 0;
	}
	func_146(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_111(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_111(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC91582A6D1E6CE38(iParam1))
	{
		return 0;
	}
	if (func_112(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_94(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_112(var uParam0, int iParam1)
{
	return func_113(uParam0, iParam1) != -1;
}

int func_113(var uParam0, int iParam1)
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

int func_114(int iParam0, int iParam1)
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
	iVar0 = unk_0xF81DDE50AEEE85CC(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xC190BD464AD91623(iParam0, iParam1);
	}
	return 0;
}

int func_115(bool bParam0)
{
	int iVar0;
	
	iVar0 = (func_128(bParam0) + func_116(bParam0));
	if (bParam0)
	{
	}
	return iVar0;
}

int func_116(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_16795)
	{
		if (Global_97173.f_16795[iVar0 /*6*/].f_3 != -1 && func_126(iVar0, 7))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			while (iVar5 < func_124(iVar0, 7))
			{
				iVar7 = func_122(iVar0, 7, iVar5);
				if (!Global_54797[iVar7 /*13*/].f_7)
				{
					if (func_119(iVar7) == 1)
					{
						iVar4++;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_118(iVar4, iVar3, 0);
			iVar2 = func_117(fVar6);
			if (iVar0 >= 52 && iVar0 <= 56)
			{
				if (bParam0)
				{
				}
				iVar2 = Global_97173.f_1718[(iVar0 - 52) /*2*/];
				fVar6 = 0f;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_117(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_118(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (unk_0xBBDA792448DB5A89(iParam0) / unk_0xBBDA792448DB5A89(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = unk_0xBBDA792448DB5A89(unk_0x11E019C8F43ACC8A(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_119(int iParam0)
{
	if (func_120(iParam0, func_121(Global_54797[iParam0 /*13*/].f_4)))
	{
		return 1;
	}
	return 0;
}

int func_120(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_54797[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_97173.f_28026[4 /*4*/] == func_56())
	{
		Global_54797[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_54797[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_54797[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_54797[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (unk_0x55FFE396AA3CA77A(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

int func_122(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			return Global_80977[iParam0 /*34*/].f_17[iParam2];
			break;
		
		case 7:
			return func_123(iParam0, iParam2);
			break;
		
		default:
			break;
	}
	return 914;
}

int func_123(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
				
				case 1:
					return 742;
				
				default:
			}
			return -1;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
				
				case 1:
					return 744;
				
				default:
			}
			return -1;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
				
				case 1:
					return 746;
				
				default:
			}
			return -1;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
				
				case 1:
					return 748;
				
				default:
			}
			return -1;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
				
				default:
			}
			return -1;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
				
				default:
			}
			return -1;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
				
				case 1:
					return 752;
				
				default:
			}
			return -1;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
				
				case 1:
					return 754;
				
				default:
			}
			return -1;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
				
				case 1:
					return 756;
				
				case 2:
					return 757;
				
				default:
			}
			return -1;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
				
				case 1:
					return 759;
				
				default:
			}
			return -1;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
				
				case 1:
					return 761;
				
				default:
			}
			return -1;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
				
				default:
			}
			return -1;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
				
				default:
			}
			return -1;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
				
				case 1:
					return 765;
				
				default:
			}
			return -1;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
				
				default:
			}
			return -1;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
				
				case 1:
					return 768;
				
				case 2:
					return 769;
				
				default:
			}
			return -1;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
				
				case 1:
					return 771;
				
				default:
			}
			return -1;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
				
				case 1:
					return 773;
				
				default:
			}
			return -1;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
				
				case 1:
					return 775;
				
				default:
			}
			return -1;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
				
				case 1:
					return 777;
				
				default:
			}
			return -1;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
				
				case 1:
					return 779;
				
				default:
			}
			return -1;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
				
				case 1:
					return 781;
				
				case 2:
					return 782;
				
				default:
			}
			return -1;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
				
				case 1:
					return 784;
				
				default:
			}
			return -1;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
				
				case 1:
					return 786;
				
				default:
			}
			return -1;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
				
				case 1:
					return 788;
				
				default:
			}
			return -1;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
				
				default:
			}
			return -1;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
				
				case 1:
					return 791;
				
				case 2:
					return 792;
				
				default:
			}
			return -1;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
				
				case 1:
					return 794;
				
				case 2:
					return 795;
				
				default:
			}
			return -1;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
				
				case 1:
					return 797;
				
				default:
			}
			return -1;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
				
				case 1:
					return 799;
				
				default:
			}
			return -1;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
				
				case 1:
					return 801;
				
				default:
			}
			return -1;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
				
				case 1:
					return 803;
				
				default:
			}
			return -1;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
				
				case 1:
					return 805;
				
				default:
			}
			return -1;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
				
				default:
			}
			return -1;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
				
				case 1:
					return 808;
				
				case 2:
					return 809;
				
				default:
			}
			return -1;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
				
				case 1:
					return 829;
				
				case 2:
					return 830;
				
				default:
			}
			return -1;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
				
				case 1:
					return 832;
				
				case 2:
					return 833;
				
				default:
			}
			return -1;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
				
				case 1:
					return 835;
				
				case 2:
					return 836;
				
				default:
			}
			return -1;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
				
				case 1:
					return 838;
				
				case 2:
					return 839;
				
				default:
			}
			return -1;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
				
				case 1:
					return 841;
				
				case 2:
					return 842;
				
				default:
			}
			return -1;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
				
				case 1:
					return 844;
				
				case 2:
					return 845;
				
				default:
			}
			return -1;
		
		default:
	}
	return -1;
}

int func_124(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return Global_80977[iParam0 /*34*/].f_16;
			break;
		
		case 7:
			return func_125(iParam0);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		case 3:
			return 2;
		
		case 5:
			return 2;
		
		case 6:
			return 2;
		
		case 8:
			return 1;
		
		case 12:
			return 1;
		
		case 14:
			return 2;
		
		case 16:
			return 2;
		
		case 17:
			return 3;
		
		case 18:
			return 2;
		
		case 19:
			return 2;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 2;
		
		case 23:
			return 1;
		
		case 25:
			return 3;
		
		case 26:
			return 2;
		
		case 28:
			return 2;
		
		case 29:
			return 2;
		
		case 30:
			return 2;
		
		case 32:
			return 2;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			return 3;
		
		case 34:
			return 2;
		
		case 38:
			return 2;
		
		case 39:
			return 2;
		
		case 40:
			return 1;
		
		case 41:
			return 3;
		
		case 42:
			return 3;
		
		case 43:
			return 2;
		
		case 46:
			return 2;
		
		case 47:
			return 2;
		
		case 49:
			return 2;
		
		case 50:
			return 2;
		
		case 51:
			return 1;
		
		case 57:
			return 3;
		
		case 58:
			return 3;
		
		case 59:
			return 3;
		
		case 60:
			return 3;
		
		case 61:
			return 3;
		
		case 62:
			return 3;
		
		case 24:
			return 3;
		
		default:
	}
	return 0;
}

int func_126(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return !unk_0x61D8FEAF64881CDA(Global_80977[iParam0 /*34*/].f_15, 5);
			break;
		
		case 7:
			return func_127(iParam0);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_128(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_7311.f_325)
	{
		if (Global_97173.f_7311.f_325[iVar0 /*6*/].f_3 != -1 && func_126(iVar0, 1))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar8 = -1;
			iVar5 = 0;
			while (iVar5 < func_124(iVar0, 1))
			{
				iVar7 = func_122(iVar0, 1, iVar5);
				if (!Global_54797[iVar7 /*13*/].f_7)
				{
					if (func_119(iVar7) == 1)
					{
						iVar4++;
					}
					switch (iVar7)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							iVar8 = func_129(iVar7);
							if (iVar8 >= 2147483647)
							{
								iVar8 = 1;
							}
							break;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_118(iVar4, iVar3, 0);
			iVar2 = func_117(fVar6);
			if (iVar8 > -1)
			{
				iVar2 = iVar8;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = func_121(Global_54797[iParam0 /*13*/].f_4);
	if (iVar0 > -2)
	{
		return iVar0;
	}
	return 0;
}

void func_130()
{
	var uVar0;
	int iVar1;
	
	unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD());
	if (!unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
	{
		return;
	}
	if (unk_0x22605DE2E6933CF2(unk_0x507DA4994C3D8EBD(), "creatures@shark@move", "attack_player", 3))
	{
		func_108(25, 1);
		return;
	}
	if (unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		uVar0 = unk_0x05F3196CF91FEF27(unk_0x507DA4994C3D8EBD());
		if (unk_0x91F594068DF4424F(uVar0))
		{
			iVar1 = unk_0x274BAC44978F9161(uVar0);
			if (func_131(iVar1))
			{
				if (unk_0x26EA758C2A691D06(iVar1) == joaat("a_c_sharktiger"))
				{
					func_108(25, 1);
					return;
				}
			}
		}
	}
}

bool func_131(int iParam0)
{
	if (!unk_0xFD68187442384158(iParam0))
	{
		return 0;
	}
	return !unk_0xE5D56342B0FF1D0D(iParam0);
}

void func_132()
{
	switch (iLocal_50)
	{
		case 0:
			fLocal_58 = 0f;
			if (!unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
			{
				return;
			}
			if (unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				return;
			}
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) >= 3 && unk_0x4E6BA6FF244D94A8() == 0)
			{
				if (func_137() == 2)
				{
					func_143(&uLocal_53);
					iLocal_50++;
				}
			}
			break;
		
		case 1:
			if (func_136() || unk_0xA4ADA92842355D33())
			{
				return;
			}
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) < 3)
			{
				func_135(&uLocal_53);
				iLocal_50 = 0;
				return;
			}
			if (unk_0x4E6BA6FF244D94A8() == 1)
			{
				func_135(&uLocal_53);
				iLocal_50 = 0;
				return;
			}
			if (func_137() < 2)
			{
				func_135(&uLocal_53);
				iLocal_50 = 0;
				return;
			}
			if (unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				func_135(&uLocal_53);
				iLocal_50 = 0;
				return;
			}
			fLocal_58 = func_134(&uLocal_53);
			if (fLocal_58 >= 180f)
			{
				func_108(24, 1);
				func_133(&uLocal_53);
				iLocal_50++;
			}
			break;
		
		case 2:
			iLocal_50++;
			break;
	}
}

void func_133(var uParam0)
{
	if (func_79(uParam0))
	{
		if (!func_78(uParam0))
		{
			uParam0->f_2 = (func_77() - uParam0->f_1);
			unk_0x3DBE2A7AF9E71C82(uParam0, 2);
		}
	}
}

float func_134(var uParam0)
{
	if (func_79(uParam0))
	{
		if (func_78(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_77() - uParam0->f_1);
		}
	}
	return 0f;
}

void func_135(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_136()
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_137()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_139(2);
	if (func_138(iVar1, 0) || unk_0x61D8FEAF64881CDA(Global_86040, 2))
	{
		iVar0++;
	}
	iVar1 = func_139(1);
	if (func_138(iVar1, 0) || unk_0x61D8FEAF64881CDA(Global_86040, 1))
	{
		iVar0++;
	}
	iVar1 = func_139(0);
	if (func_138(iVar1, 0) || unk_0x61D8FEAF64881CDA(Global_86040, 0))
	{
		iVar0++;
	}
	return iVar0;
}

int func_138(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		iVar0 = func_58(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_139(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x507DA4994C3D8EBD())
			{
				return 0;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_86042, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_56())
	{
		return unk_0x507DA4994C3D8EBD();
	}
	return Global_87667[func_140(iParam0)];
}

int func_140(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

bool func_141(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_142(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

void func_143(var uParam0)
{
	func_144(uParam0, 0f);
}

void func_144(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_77() - fParam1);
	unk_0x3DBE2A7AF9E71C82(uParam0, 1);
	unk_0xCD27BF29FB9012E2(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_145(var uParam0, int iParam1)
{
	uParam0->f_68 = iParam1;
	if (uParam0->f_68)
	{
		func_143(&(uParam0->f_65));
	}
}

void func_146(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_147(uParam0, iVar0);
		iVar0++;
	}
	func_144(&(uParam0->f_62), (8f - 0.5f));
}

void func_147(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 61;
}

void func_148()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 61;
	iVar0 = 1;
	while (iVar0 <= (iVar1 - 1))
	{
		if (unk_0xC91582A6D1E6CE38(iVar0))
		{
		}
		iVar0++;
	}
}

void func_149(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

