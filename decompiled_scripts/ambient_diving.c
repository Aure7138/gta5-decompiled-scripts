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
	struct<8> Local_40 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	struct<11> Local_53[30];
	int iLocal_384 = 0;
	int* iLocal_385 = NULL;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391[4] = { 0, 0, 0, 0 };
	float fLocal_396[4] = { 0f, 0f, 0f, 0f };
	float fLocal_401 = 0f;
	float fLocal_402 = 0f;
	float fLocal_403 = 0f;
	int iLocal_404 = 0;
	bool bLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
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
	iLocal_386 = -1;
	iLocal_404 = 1;
	iLocal_406 = unk_0x430386FE9BF80B45();
	if (unk_0xC968670BFACE42D9(210))
	{
		func_74();
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("ambient_diving")) > 1)
	{
		unk_0x1090044AD1DA76FA();
	}
	func_73(27);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_72(unk_0xD80958FC74E988A6());
		switch (iLocal_384)
		{
			case 0:
				func_67();
				break;
			
			case 1:
				func_64();
				func_55();
				func_1();
				break;
			
			case 2:
				func_55();
				break;
			
			case 3:
				func_74();
				break;
		}
	}
}

void func_1()
{
	if (func_18(&Local_40, &Local_53) || func_17(110) == 1)
	{
		if (func_16())
		{
			func_15(0);
		}
		func_8(298, 0, 0);
		if (!func_17(110))
		{
			if (!bLocal_405)
			{
				bLocal_405 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
			}
		}
		func_2(2);
	}
}

void func_2(int iParam0)
{
	iLocal_384 = iParam0;
}

int func_3(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_7(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0xA921AA820C25702F(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_97173.f_5944.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_97173.f_5944.f_881 == Var0.f_0)
		{
			Global_97173.f_5944.f_881 = -1;
		}
		Var0.f_3 = func_6(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x9CD27B0045628463() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0xE80492A9AC099A93(&(Var0.f_1), 1);
		unk_0xE80492A9AC099A93(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0x933D6A9EEC1BACD0(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0x933D6A9EEC1BACD0(&(Var0.f_1), 10);
		}
		Global_97173.f_5944[Global_97173.f_5944.f_136 /*15*/] = { Var0 };
		Global_97173.f_5944.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0xA921AA820C25702F(iParam2, iVar15))
			{
				func_4(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_5(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97173.f_5944.f_136)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_5944[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_97173.f_5944[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_97173.f_5944[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_97173.f_5944.f_764)
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_5944.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_97173.f_5944.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_97173.f_5944.f_889[iParam0] = iVar1;
}

bool func_5(int iParam0)
{
	return iParam0 < 3;
}

int func_6(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

void func_8(int iParam0, int iParam1, int iParam2)
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
		func_13((891 + iParam0), 1, -1, 1);
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
		func_9();
	}
}

void func_9()
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
		func_12(13, unk_0xF34EE736CF047844(Global_97173.f_8415.f_3853));
	}
	if (!unk_0xBEDB96A7584AA8CF())
	{
		if (!Global_68067)
		{
			if (func_11() == 2 == 0 && !unk_0x10FAB35428CCC9D7())
			{
				if (unk_0x9A4CF4F48AD77302())
				{
					Global_96907 = 0;
				}
				if (!Global_54572)
				{
					func_10();
				}
			}
		}
	}
}

int func_10()
{
	if (func_7(0))
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

int func_11()
{
	return Global_24444;
}

int func_12(int iParam0, int iParam1)
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

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x80C75307B1C42837((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x80C75307B1C42837((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x80C75307B1C42837((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x80C75307B1C42837((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC4BB08EE7907471E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC4BB08EE7907471E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xBA52FF538ED2BC71((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xBA52FF538ED2BC71((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = unk_0x5BC62EC1937B9E5B(iVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_14()
{
	return Global_1312736;
}

void func_15(bool bParam0)
{
	if (bParam0)
	{
		Global_97173.f_12272.f_89 = 1;
	}
	else
	{
		Global_97173.f_12272.f_89 = 0;
	}
}

int func_16()
{
	if (unk_0x2C83A9DA6BFFC4F9(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_17(int iParam0)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_58[iParam0];
}

int func_18(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var5;
	int iVar8;
	
	unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6());
	Var2 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = func_54(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (!func_53((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f))
				{
					func_51(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else
				{
					func_51(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			func_36(uParam0, iParam1, Var2);
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
			func_26(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 5, &iLocal_387, &iLocal_385, "DIVING_TITLE", "DIVING_COLLECT");
		}
		if (!func_25(44))
		{
			Var5 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			if (func_24(&Local_40, &Local_53, Var5, &iVar8))
			{
				if (unk_0xF1B760881820C952(func_23(iVar8), Var5, false) > 200f)
				{
					func_20("DIVING_HELP4", 1, 7500, -1, 10000, 7, 0, 0, 0);
					func_19(44);
				}
			}
		}
	}
	if (!bLocal_405)
	{
		if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
		{
			bLocal_405 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_19(int iParam0)
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

void func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_21(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_21(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_22();
	}
}

void func_22()
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

Vector3 func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1036.73f, 6735.72f, -100.52f;
			break;
		
		case 1:
			return -908.86f, 6655.98f, -34.35f;
			break;
		
		case 2:
			return -985.14f, 6697.71f, -41.57f;
			break;
		
		case 3:
			return 1825.73f, -2920.67f, -36.82f;
			break;
		
		case 4:
			return 1772.11f, -2967.72f, -46.81f;
			break;
		
		case 5:
			return 3198.59f, -385.05f, -31.49f;
			break;
		
		case 6:
			return 3170.43f, -302.21f, -25.99f;
			break;
		
		case 7:
			return 3157.44f, -268.54f, -28.07f;
			break;
		
		case 8:
			return -3180.2f, 3010.9f, -37.6f;
			break;
		
		case 9:
			return -3178.3f, 3044.86f, -39.96f;
			break;
		
		case 10:
			return 910.48f, -3471.21f, -17.57f;
			break;
		
		case 11:
			return 1338.76f, -3041.59f, -19.23f;
			break;
		
		case 12:
			return 1153.38f, -2864.51f, -18.96f;
			break;
		
		case 13:
			return 958.56f, -2847.78f, -22.05f;
			break;
		
		case 14:
			return 782.28f, -2872.81f, -9.577f;
			break;
		
		case 15:
			return 581.28f, -2471.5f, -9.44f;
			break;
		
		case 16:
			return 636.56f, -2214.49f, -7.87f;
			break;
		
		case 17:
			return 371.06f, -3226.67f, -19.6f;
			break;
		
		case 18:
			return 689.69f, -3451.07f, -27.85f;
			break;
		
		case 19:
			return 180.17f, -2255.91f, -2.54f;
			break;
		
		case 20:
			return -691.64f, -2836.86f, -15.67f;
			break;
		
		case 21:
			return -3397.5f, 3717.52f, -86.14f;
			break;
		
		case 22:
			return -3357.11f, 3710.79f, -96.14f;
			break;
		
		case 23:
			return -3282.21f, 3682.6f, -82.87f;
			break;
		
		case 24:
			return -3256.66f, 3672.29f, -35.06f;
			break;
		
		case 25:
			return -3142.19f, 3625.95f, -26.31f;
			break;
		
		case 26:
			return 3271.34f, 6420.78f, -50.78f;
			break;
		
		case 27:
			return 3237.83f, 6487.44f, -43.9f;
			break;
		
		case 28:
			return 1772.1f, -2997.12f, -50.44f;
			break;
		
		case 29:
			return 3207f, -415.17f, -32.01f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_24(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!func_54(&(uParam0->f_1), iVar0))
		{
			fVar1 = unk_0xB7A628320EFF8E47(Param2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam5 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam5 != -1;
}

int func_25(int iParam0)
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

void func_26(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int* iParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_35(0);
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
				unk_0x03B504CF259931BC(func_28(iParam3));
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
				else if (!func_27())
				{
					if (unk_0x85F01B8D5B90570E(*iParam5))
					{
						func_35(1);
						unk_0x0DF606929C105BE1(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x9CD27B0045628463() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_27())
				{
					if (unk_0x85F01B8D5B90570E(*iParam5))
					{
						func_35(1);
						unk_0x0DF606929C105BE1(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0x85F01B8D5B90570E(*iParam5))
				{
					unk_0x1D132D614DD86811(iParam5);
				}
				func_35(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_27()
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

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_34(iParam0))
		{
			if (unk_0xA921AA820C25702F(Global_97173.f_8270.f_108, func_33(func_34(iParam0), iVar1)))
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
		while (iVar1 < func_34(iParam0))
		{
			iVar2 = (func_32(iParam0) + iVar1);
			if (func_29(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar1 = func_31(iParam0, iParam1);
	uVar2 = func_30(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x10FE3F1B79F9B071(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_30(int iParam0)
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

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
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

int func_32(int iParam0)
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

int func_33(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_34(int iParam0)
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

void func_35(int iParam0)
{
	if (Global_68334 != iParam0)
	{
		Global_68334 = iParam0;
	}
}

int func_36(var uParam0, var uParam1, struct<3> Param2)
{
	int iVar0;
	
	iVar0 = uParam0->f_10;
	if ((uParam1[iVar0 /*11*/])->f_10)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0x80EC48E6679313F9((uParam1[iVar0 /*11*/])->f_1) || func_49((uParam1[iVar0 /*11*/])->f_1))
			{
				func_39(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (unk_0xAFC1CA75AD4074D1((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((unk_0xB7A628320EFF8E47(Param2, unk_0x225B8B35C88029B3((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_38(13)) || func_38(14))
		{
			func_37(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_37(var uParam0)
{
	if (unk_0xAFC1CA75AD4074D1(*uParam0))
	{
		unk_0x3288D8ACAECD2AB2(*uParam0);
	}
}

bool func_38(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_39(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (func_32(*uParam0) + iParam2);
	func_37(&((uParam1[iParam2 /*11*/])->f_1));
	func_48(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_10 = 0;
	func_47(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_46(*uParam0, iParam2, 1);
	}
	unk_0x48B3886C1358D0D5(0, 200, 250);
	unk_0x9B5A68C6489E9909(uParam0->f_6, 1f);
	if (bLocal_39)
	{
		func_45(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_43(&(uParam0->f_1));
	}
	func_41();
	unk_0x79AB33F0FBFAC40C(iVar0);
	func_40(1, 0);
	func_10();
	uParam0->f_11 = 1;
}

void func_40(int iParam0, int iParam1)
{
	Global_89823.f_7 = iParam0;
	Global_89823.f_8 = iParam1;
}

void func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0x767FBC2AC802EF3D(func_42(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(18, iVar0);
	}
	unk_0x767FBC2AC802EF3D(func_42(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(19, iVar0);
	}
	unk_0x767FBC2AC802EF3D(func_42(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(20, iVar0);
	}
	iVar2 = ((func_34(0) + func_34(1)) + func_34(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0xB3271D7AB655B441(joaat("percent_hidden_packages"), iVar3, true);
}

int func_42(int iParam0)
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

void func_43(var uParam0)
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
		if (func_54(uParam0, iVar0))
		{
			iVar1++;
			func_13((uParam0->f_2 + iVar0), 1, -1, 1);
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
		func_44(168, 0);
	}
}

void func_44(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_97173.f_6839[iParam0] = 1;
	Global_97173.f_6839.f_236[iParam0] = (unk_0x9CD27B0045628463() + iParam1);
}

void func_45(var uParam0, int iParam1)
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
	if (func_54(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_13((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_38)
		{
		}
	}
	if (bLocal_38)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_44(168, 0);
	}
}

void func_46(int iParam0, int iParam1, bool bParam2)
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

void func_47(int* iParam0, int iParam1, bool bParam2)
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

void func_48(int* iParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		unk_0x4F7D8A9BFB0B43E9(*iParam0, false);
		unk_0x86A652570E5F25DD(iParam0);
	}
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xAFC1CA75AD4074D1(iParam0))
	{
		return 0;
	}
	if (func_50(unk_0xD80958FC74E988A6()))
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

int func_50(int iParam0)
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

void func_51(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (!func_38(13) && !func_38(14))
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
							func_52(uParam0->f_3);
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

void func_52(struct<3> Param0)
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

bool func_53(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_54(var uParam0, int iParam1)
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

void func_55()
{
	float fVar0;
	
	switch (iLocal_409)
	{
		case 0:
			if (func_62())
			{
				if (func_50(iLocal_407))
				{
					func_61();
					unk_0x75DBEC174AEEAD10(iLocal_407, false);
					iLocal_409 = 1;
					if (iLocal_384 == 2)
					{
						func_2(3);
					}
				}
			}
			else if (func_50(iLocal_407) && func_50(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
				{
					fVar0 = 500f;
				}
				else
				{
					fVar0 = 250f;
				}
				if (func_60(unk_0xD80958FC74E988A6(), iLocal_407, 0) > fVar0)
				{
					func_59();
					if (iLocal_384 == 2)
					{
						func_2(3);
					}
				}
			}
			else
			{
				func_61();
				if (iLocal_384 == 2)
				{
					func_2(3);
				}
			}
			break;
		
		case 1:
			if (iLocal_384 == 2)
			{
				func_2(3);
			}
			if (!func_62())
			{
				if (func_50(iLocal_407))
				{
					if (!unk_0xA6DB27D19ECBB7DA(iLocal_408))
					{
						iLocal_408 = func_56(iLocal_407, 0, 0);
					}
					unk_0x2497C4717C8B881E(iLocal_407, 0, 1);
					if (unk_0x45A9187928F4B9E3(unk_0x9F47B058362C84B5(iLocal_407)))
					{
						if (!unk_0x8BAD02F0368D9E14(iLocal_407))
						{
							unk_0x75DBEC174AEEAD10(iLocal_407, true);
						}
					}
					iLocal_409 = 0;
				}
			}
			break;
	}
}

int func_56(int iParam0, bool bParam1, bool bParam2)
{
	return func_57(iParam0, !bParam1, bParam2);
}

int func_57(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_58(unk_0x10FAB35428CCC9D7(), 1f, 1f));
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
		unk_0xD38744167B2FA257(iVar0, func_58(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_58(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59()
{
	func_61();
	if (func_50(iLocal_407))
	{
		if (unk_0x45A9187928F4B9E3(unk_0x9F47B058362C84B5(iLocal_407)))
		{
			unk_0x75DBEC174AEEAD10(iLocal_407, false);
		}
		unk_0x0A50A1EEDAD01E65(iLocal_407, false);
		if (unk_0x0A7B270912999B3C(iLocal_407))
		{
			unk_0x629BFA74418D6239(&iLocal_407);
		}
	}
}

float func_60(int iParam0, int iParam1, bool bParam2)
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

void func_61()
{
	if (unk_0xA6DB27D19ECBB7DA(iLocal_408))
	{
		unk_0x86A652570E5F25DD(&iLocal_408);
	}
}

int func_62()
{
	if (func_50(unk_0xD80958FC74E988A6()))
	{
		if (func_50(iLocal_407))
		{
			if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_407, false))
			{
				return 1;
			}
		}
		else if (func_63())
		{
			iLocal_407 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x7239B21A38F536BA(iLocal_407))
			{
				unk_0xAD738C3085FE7E11(iLocal_407, true, true);
				unk_0x0A50A1EEDAD01E65(iLocal_407, true);
				return 1;
			}
		}
	}
	return 0;
}

int func_63()
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x7239B21A38F536BA(iVar0))
		{
			if (unk_0x9F47B058362C84B5(iVar0) == joaat("dinghy") || unk_0x9F47B058362C84B5(iVar0) == joaat("dinghy2"))
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

void func_64()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	
	Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	if (func_24(&Local_40, &Local_53, Var0, &iLocal_386))
	{
		Var3 = { func_23(iLocal_386) };
		fVar6 = unk_0xF1B760881820C952(Var3, Var0, false);
		if (fVar6 > 200f)
		{
			func_66();
			if (!iLocal_404)
			{
				iLocal_404 = 1;
			}
			if (func_63())
			{
				if (!func_25(41))
				{
					func_20("DIVING_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(41);
				}
				if (iLocal_386 != iLocal_389)
				{
					if (unk_0xA6DB27D19ECBB7DA(iLocal_388))
					{
						unk_0x86A652570E5F25DD(&iLocal_388);
					}
				}
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_388))
				{
					iLocal_388 = unk_0x46818D79B1F7499A(Var3, 200f);
					unk_0x45FF974EEE1C8734(iLocal_388, 128);
					unk_0x03D7FB09E75D6B7E(iLocal_388, 2);
					unk_0x54318C915D27E4CE(iLocal_388, false);
					unk_0xEAA0FFE120D92784(iLocal_388, "B_WRE");
					unk_0x75A16C3DA34F1245(iLocal_388, false);
					iLocal_389 = iLocal_386;
				}
			}
			else if (unk_0xA6DB27D19ECBB7DA(iLocal_388))
			{
				unk_0x86A652570E5F25DD(&iLocal_388);
			}
		}
		else
		{
			if (func_63())
			{
				if (!func_25(42))
				{
					func_20("DIVING_HELP2", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(42);
				}
			}
			if (func_25(42))
			{
				if (!func_25(43))
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()) && !unk_0xC024869A53992F34(unk_0xD80958FC74E988A6()))
					{
						func_20("DIVING_HELP3", 1, 2000, -1, 10000, 7, 0, 0, 0);
						func_19(43);
					}
				}
			}
			if (unk_0xA6DB27D19ECBB7DA(iLocal_388))
			{
				unk_0x86A652570E5F25DD(&iLocal_388);
			}
			if (iLocal_386 != iLocal_389)
			{
				func_66();
				iLocal_389 = iLocal_386;
				iLocal_404 = 1;
			}
			if (Local_40.f_1.f_4 < Local_40.f_1.f_3)
			{
				if (iLocal_404)
				{
					fLocal_401 = 0f;
					fLocal_402 = fVar6;
					if (func_63())
					{
						fLocal_402 = func_65(fLocal_402, 20f, 200f);
					}
					else
					{
						fLocal_402 = func_65(fLocal_402, 10f, 200f);
					}
					fLocal_403 = (fLocal_402 * 0.025f);
					iLocal_404 = 0;
					if (func_63())
					{
						unk_0x8D8686B622B88120(iLocal_406, "SINGLE_BLIP_FROM_BOAT", Var3, "ABIGAIL_SONAR_SOUNDSET", false, 0, false);
					}
					else
					{
						unk_0x8D8686B622B88120(iLocal_406, "SCRIPT_TRIGGERED_FROM_PROP", Var0, "ABIGAIL_SONAR_SOUNDSET", false, 0, false);
					}
				}
				else
				{
					fLocal_401 = (fLocal_401 + fLocal_403);
					fLocal_401 = func_65(fLocal_401, 0f, fLocal_402);
					if (!unk_0xA6DB27D19ECBB7DA(iLocal_390))
					{
						iLocal_390 = unk_0x46818D79B1F7499A(Var3, fLocal_401);
						unk_0x45FF974EEE1C8734(iLocal_390, 255);
						unk_0x03D7FB09E75D6B7E(iLocal_390, 4);
						unk_0xBE8BE4FE60E27B72(iLocal_390, true);
						unk_0x25615540D894B814(iLocal_390, true);
						unk_0x75A16C3DA34F1245(iLocal_390, false);
					}
					else
					{
						unk_0xD38744167B2FA257(iLocal_390, fLocal_401);
					}
					iVar7 = 0;
					if (func_63())
					{
						iVar7 = 0;
						while (iVar7 <= 3)
						{
							if (!unk_0xA6DB27D19ECBB7DA(iLocal_391[iVar7]))
							{
								iLocal_391[iVar7] = unk_0x46818D79B1F7499A(Var3, (fLocal_401 + fLocal_396[iVar7]));
								unk_0x45FF974EEE1C8734(iLocal_391[iVar7], 255);
								unk_0x03D7FB09E75D6B7E(iLocal_391[iVar7], 4);
								unk_0xBE8BE4FE60E27B72(iLocal_391[iVar7], true);
								unk_0x25615540D894B814(iLocal_391[iVar7], true);
								unk_0x75A16C3DA34F1245(iLocal_391[iVar7], false);
							}
							else
							{
								unk_0xD38744167B2FA257(iLocal_391[iVar7], (fLocal_401 + fLocal_396[iVar7]));
							}
							iVar7++;
						}
					}
					else
					{
						iVar7 = 0;
						while (iVar7 <= 3)
						{
							if (unk_0xA6DB27D19ECBB7DA(iLocal_391[iVar7]))
							{
								unk_0xD38744167B2FA257(iLocal_391[iVar7], fLocal_401);
							}
							iVar7++;
						}
					}
					if (fLocal_401 >= fLocal_402)
					{
						iLocal_404 = 1;
					}
				}
			}
			else
			{
				func_66();
			}
		}
	}
}

float func_65(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_66()
{
	int iVar0;
	
	if (unk_0xA6DB27D19ECBB7DA(iLocal_390))
	{
		unk_0x86A652570E5F25DD(&iLocal_390);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (unk_0xA6DB27D19ECBB7DA(iLocal_391[iVar0]))
		{
			unk_0x86A652570E5F25DD(&(iLocal_391[iVar0]));
		}
		iVar0++;
	}
}

void func_67()
{
	iLocal_387 = 0;
	if (func_62())
	{
		iLocal_409 = 1;
	}
	else
	{
		iLocal_409 = 0;
	}
	func_71();
	func_70(&Local_40, 5, joaat("prop_sub_chunk_01"), "DIVING_COLLECT");
	func_68(&Local_40, joaat("num_hidden_packages_4"), 845, 30);
	func_2(1);
	fLocal_396[0] = 0.25f;
	fLocal_396[1] = 0.5f;
	fLocal_396[2] = 0.75f;
	fLocal_396[3] = 1f;
}

void func_68(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_69(&(uParam0->f_1), iParam2, iParam3);
}

void func_69(int* iParam0, var uParam1, var uParam2)
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
		if (func_29((iParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_47(iParam0, iVar0, 1);
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

void func_70(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_71()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Local_53[iVar0 /*11*/].f_3 = { func_23(iVar0) };
		Local_53[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_53[0 /*11*/].f_6 = { -16.4f, 78.53f, -146.67f };
	Local_53[1 /*11*/].f_6 = { 0f, 45f, 10f };
	Local_53[2 /*11*/].f_6 = { 0.72f, 65.2f, -50.26f };
	Local_53[3 /*11*/].f_6 = { 0f, 15f, -132.16f };
	Local_53[4 /*11*/].f_6 = { 166.37f, -40f, 168.81f };
	Local_53[5 /*11*/].f_6 = { 90f, 56.2f, 90f };
	Local_53[6 /*11*/].f_6 = { -20f, 0f, 89.95f };
	Local_53[7 /*11*/].f_6 = { 4.08f, 54.9f, -65.35f };
	Local_53[8 /*11*/].f_6 = { 174.15f, -58.2f, -144.66f };
	Local_53[9 /*11*/].f_6 = { -28.22f, 36.11f, -90.22f };
	Local_53[10 /*11*/].f_6 = { -5f, 44f, 65f };
	Local_53[11 /*11*/].f_6 = { 0f, -108f, 45.36f };
	Local_53[12 /*11*/].f_6 = { -10.9f, 43.12f, 131.52f };
	Local_53[13 /*11*/].f_6 = { 12.37f, 49.66f, 126.88f };
	Local_53[14 /*11*/].f_6 = { 4.35f, 10.22f, 27.51f };
	Local_53[15 /*11*/].f_6 = { 0f, 10f, 60.73f };
	Local_53[16 /*11*/].f_6 = { 150.56f, -78.67f, -174.35f };
	Local_53[17 /*11*/].f_6 = { 0f, 50f, 46.41f };
	Local_53[18 /*11*/].f_6 = { 6.26f, 44.65f, 8.88f };
	Local_53[19 /*11*/].f_6 = { 90f, 78.5f, 16.04f };
	Local_53[20 /*11*/].f_6 = { -1.36f, 6.53f, -70.94f };
	Local_53[21 /*11*/].f_6 = { -61.86f, 78.61f, 126.5f };
	Local_53[22 /*11*/].f_6 = { -10f, -80.71f, 69.7f };
	Local_53[23 /*11*/].f_6 = { -76.43f, -70.02f, 29.74f };
	Local_53[24 /*11*/].f_6 = { -28f, -70f, 107.53f };
	Local_53[25 /*11*/].f_6 = { 4.19f, 6.46f, 110.43f };
	Local_53[26 /*11*/].f_6 = { -3.19f, 60.6f, 25f };
	Local_53[27 /*11*/].f_6 = { 0f, -81.68f, -20.16f };
	Local_53[28 /*11*/].f_6 = { 7.39f, 44.52f, 19.65f };
	Local_53[29 /*11*/].f_6 = { 89.74f, 80.95f, 151.74f };
}

bool func_72(int iParam0)
{
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	return !unk_0x5F9532F3B5CC2551(iParam0);
}

int func_73(int iParam0)
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

void func_74()
{
	int iVar0;
	
	if (unk_0xA6DB27D19ECBB7DA(iLocal_388))
	{
		unk_0x86A652570E5F25DD(&iLocal_388);
	}
	func_66();
	if (!unk_0xFCBDCE714A7C88E5(iLocal_406))
	{
		unk_0xA3B0C41BA5CC0BB5(iLocal_406);
	}
	func_59();
	iVar0 = 0;
	while (iVar0 < Local_53.f_0)
	{
		func_48(&(Local_53[iVar0 /*11*/].f_2));
		func_37(&(Local_53[iVar0 /*11*/].f_1));
		Local_53[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (func_76(&(Local_40.f_1)) || func_17(110) == 1)
	{
		func_75(27);
	}
	unk_0xE532F5D78798DAAB(Local_40.f_7);
	unk_0x1090044AD1DA76FA();
}

int func_75(int iParam0)
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

bool func_76(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

