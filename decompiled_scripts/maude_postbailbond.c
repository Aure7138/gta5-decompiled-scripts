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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var3;
	
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_85 = -1;
	iLocal_86 = -1;
	if (unk_0xB9B05E900D325C36(19))
	{
		func_55();
	}
	if (!func_52())
	{
		func_55();
	}
	if (!func_51(uLocal_82))
	{
		func_55();
	}
	else
	{
		func_50();
		iLocal_83 = unk_0x31CD6E9F83C10233();
		iLocal_85 = func_49();
		iLocal_84 = 0;
		func_48(1, &uLocal_88);
	}
	while (true)
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (!func_51(uLocal_82))
			{
				func_55();
			}
			Var0 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1) };
			Var3 = { unk_0xF177E0DA126D71C8(uLocal_82, 1) };
			if (unk_0xB7A628320EFF8E47(Var0, Var3) >= (100f * 100f))
			{
				func_55();
			}
			switch (iLocal_87)
			{
				case 0:
					func_43(Var3, Var0, 18000, 1101004800);
					if (func_25(&iLocal_82, 0))
					{
						func_24();
						func_16(0);
						func_12(Var3, Var0);
						unk_0x9F62787D280BF2EC(func_11());
						iLocal_87 = 1;
					}
					break;
				
				case 1:
					if (func_5(&iLocal_82, &uLocal_79, &iLocal_86))
					{
						iLocal_87 = 2;
					}
					break;
				
				case 2:
					if (!func_4(iLocal_82, 1805844857) && !unk_0xFD4433475BBB55D3(iLocal_82))
					{
						if (!unk_0x4CB2F72EA418C083(iLocal_82, func_11(), func_3(), 3))
						{
							func_1();
						}
					}
					else
					{
						func_55();
					}
					break;
				}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (func_51(iLocal_82))
	{
		func_2(&iLocal_82);
		unk_0x53E150F8F0AD7101(iLocal_82, unk_0x0031992CA618A445(), 10000f, -1, 0, 0);
		unk_0x390D16BCBFB23E1A(iLocal_82, 1);
	}
}

void func_2(var uParam0)
{
	if (func_51(*uParam0))
	{
		unk_0x67ABC034CBFBD349(*uParam0, 2, 0);
		unk_0x67ABC034CBFBD349(*uParam0, 64, 0);
		unk_0x67ABC034CBFBD349(*uParam0, 128, 0);
		unk_0x67ABC034CBFBD349(*uParam0, 8, 0);
		unk_0x67ABC034CBFBD349(*uParam0, 1, 0);
		unk_0x67ABC034CBFBD349(*uParam0, 32, 0);
		unk_0xA8A16396F3E7CD41(*uParam0, 5, 0);
		unk_0xA8A16396F3E7CD41(*uParam0, 17, 1);
		unk_0xD6A092D1F1B9A9F1(*uParam0, 118, 1);
	}
}

char* func_3()
{
	return "female_Flee_Table_Left_Maude";
}

int func_4(var uParam0, int iParam1)
{
	if (func_51(uParam0))
	{
		if (unk_0xF57D21B49780A7A8(uParam0, iParam1) == 1 || unk_0xF57D21B49780A7A8(uParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_5(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (func_51(*uParam0))
	{
		if (unk_0x4CB2F72EA418C083(*uParam0, func_10(), func_9(), 3))
		{
			if (!unk_0xABB40063444DEDAA(*uParam0) || unk_0x3CE6EA6EC9DD3DE6(*uParam0))
			{
				unk_0x9F62787D280BF2EC(func_11());
				if (unk_0xB3379AC2E71D1E7E(func_11()))
				{
					*iParam2 = unk_0x87070FAB863D4019(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0x786E76DF7155D4EC(*iParam2, 0);
					unk_0x0BE1ECE391FD183F(*iParam2, 0);
					if (func_4(*uParam0, 1785177548))
					{
						unk_0x65F9639B4A46807A(*uParam0, -1000f, 1);
					}
					unk_0x5C774A8BEBE5BD26(*uParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0x7E54A33202605E52(*uParam0, 0, 0);
					if (func_8(*uParam1))
					{
						if (unk_0x4CB2F72EA418C083(*uParam1, func_10(), func_7(), 3))
						{
							unk_0x65F9639B4A46807A(*uParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0x34F4B9710A21CB7F(*uParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
					}
					return 1;
				}
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
	}
	return 0;
}

char* func_6()
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7()
{
	return "base_chair";
}

int func_8(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (!unk_0x7A6C051038031EFA(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_9()
{
	return "base";
}

char* func_10()
{
	return "special_ped@maude@base";
}

char* func_11()
{
	return "special_ped@maude@exit_flee";
}

void func_12(struct<3> Param0, struct<3> Param3)
{
	if (func_51(iLocal_82))
	{
		if (!unk_0x903C2842D53DEC75(iLocal_82))
		{
			if (unk_0xB7A628320EFF8E47(Param3, Param0) < (35f * 35f))
			{
				func_13(&iLocal_82, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	bool bVar0;
	
	if (func_51(*uParam0))
	{
		bVar0 = unk_0xE4A7032A54AA90D4(*uParam0);
		if (bVar0)
		{
			unk_0xBEDADBE0FDA3EF25(*uParam0, 0);
		}
		func_14(*uParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			unk_0xBEDADBE0FDA3EF25(*uParam0, 1);
		}
	}
}

void func_14(var uParam0, var uParam1, var uParam2, int iParam3)
{
	unk_0x90A3B3322B687517(uParam0, uParam1, uParam2, func_15(iParam3), 0);
}

int func_15(int iParam0)
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

void func_16(bool bParam0)
{
	struct<6> Var0;
	var uVar6;
	
	if (func_23())
	{
		Var0 = { func_22() };
		uVar6 = func_21();
		if (unk_0xB3404E397FF56B3B(&Var0, uVar6))
		{
			if (bParam0)
			{
				func_19();
			}
			else
			{
				func_17();
			}
		}
	}
}

void func_17()
{
	Global_14611 = 0;
	func_18();
}

void func_18()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
	}
}

void func_19()
{
	Global_14611 = 0;
	func_20();
}

void func_20()
{
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x8C8894B8C4CFE97F();
		Global_16756 = 0;
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

char* func_21()
{
	if (unk_0x2A3398C6222EB190(Global_104439.f_24847, 3))
	{
		return "BB4_loiter";
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_24847, 2))
	{
		return "BB3_loiter";
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_24847, 1))
	{
		return "BB2_loiter";
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_24847, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

int func_23()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	if (unk_0x76B3C79DE564AFC6(uLocal_81))
	{
		unk_0x1F18D3C78C8C1A11(iLocal_81, 0);
	}
	if (unk_0x76B3C79DE564AFC6(uLocal_80))
	{
		unk_0x1F18D3C78C8C1A11(iLocal_80, 0);
	}
}

int func_25(var uParam0, bool bParam1)
{
	if (func_51(*uParam0))
	{
		if ((unk_0x99DA63A867B3419C(*uParam0) || unk_0xB4C8C23C11AEB34D(*uParam0)) || unk_0x6028D22486E73F1F(*uParam0))
		{
			return 1;
		}
		if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
		{
			if (unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), *uParam0))
			{
				return 1;
			}
			if (unk_0x76B3C79DE564AFC6(uLocal_79))
			{
				if (unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), iLocal_79))
				{
					return 1;
				}
			}
			if (unk_0x76B3C79DE564AFC6(iLocal_80))
			{
				if (unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), iLocal_80))
				{
					return 1;
				}
			}
			if (unk_0x76B3C79DE564AFC6(iLocal_81))
			{
				if (unk_0xE771CD42874080E1(unk_0x0031992CA618A445(), iLocal_81))
				{
					return 1;
				}
			}
		}
		if (unk_0x3EA2B37C7CACF18A(*uParam0, 60))
		{
			return 1;
		}
		if (unk_0xABB40063444DEDAA(*uParam0))
		{
			if (unk_0x830CAE5496B8AD6B(*uParam0, unk_0x0031992CA618A445(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0x3EA2B37C7CACF18A(*uParam0, 50))
		{
			return 1;
		}
		if (func_33(*uParam0, 1126825984))
		{
			return 1;
		}
		if (func_26(*uParam0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (unk_0x40F3590C2FDAEDCC(-1, unk_0xF177E0DA126D71C8(*uParam0, 1), 15f))
		{
			return 1;
		}
		if (unk_0x3EA2B37C7CACF18A(*uParam0, 72))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_8(unk_0x0031992CA618A445()) && func_8(iParam0))
	{
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_32(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x57550D8981DAEF6C(unk_0x0031992CA618A445()))
			{
				if (unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
				{
					if (unk_0xA836CB82D16639AD(unk_0xF177E0DA126D71C8(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_32(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x755518C724FBCB30(unk_0xF177E0DA126D71C8(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x755518C724FBCB30(unk_0xF177E0DA126D71C8(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x755518C724FBCB30(unk_0xF177E0DA126D71C8(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x755518C724FBCB30(unk_0xF177E0DA126D71C8(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_28(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_28(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x358ED862352D8DB6(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x324758F5AB79458C(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x324758F5AB79458C(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x324758F5AB79458C(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x324758F5AB79458C(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x324758F5AB79458C(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_29(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_31(Param1 - unk_0xF177E0DA126D71C8(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xE9EAE230056F8FA1(iParam0) };
	}
	else
	{
		Var3 = { func_31(unk_0x616B55A822407A37(iParam0, 31086, 0f, 5f, 0f) - unk_0x616B55A822407A37(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_30(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_30(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_31(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_32(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0xD08ED8D7088059C5(unk_0x0031992CA618A445()))
		{
			if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xA836CB82D16639AD(unk_0xF177E0DA126D71C8(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_8(unk_0x0031992CA618A445()) && func_8(iParam0))
	{
		if (func_42(iParam0) || unk_0x35992691C50DF43E(unk_0x3D35F9864E4640B1(), iParam0))
		{
			if (unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_34(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_34(int iParam0, float fParam1)
{
	return func_35(iParam0, unk_0x0031992CA618A445(), fParam1, 1, 250, 7);
}

bool func_35(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_41(iParam0, iParam1);
	if (!func_8(iParam0) || !func_8(iParam1))
	{
		if (iVar4 != -1)
		{
			func_40(&(Local_37[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_39(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_38();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x616B55A822407A37(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x31CD6E9F83C10233() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_36(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_8(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_37(iParam4, iParam7) };
		*uParam0 = unk_0xB654849962F7FBC3(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xF645F030F8429492(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x269F274F1955DE87(iVar7))
	{
		func_8(iVar7);
		if (unk_0x4849801147A2BA1E(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0x15DCE0232A265CCA(Param1, unk_0xF177E0DA126D71C8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x31CD6E9F83C10233();
			return 1;
		}
		return 0;
	}
	if (unk_0x036E1D5EA494CEB2(iVar7))
	{
		func_8(iVar7);
		if (unk_0x90219307C9D2728D(iParam4, 0))
		{
			if (unk_0x89C1AD6422029361(iVar7) == unk_0xCFA31F1E461A6BB5(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0x15DCE0232A265CCA(Param1, unk_0xF177E0DA126D71C8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x31CD6E9F83C10233();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x3AF262D7332EEDF5(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xF177E0DA126D71C8(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x616B55A822407A37(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x616B55A822407A37(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x616B55A822407A37(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x616B55A822407A37(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x616B55A822407A37(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x616B55A822407A37(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xF177E0DA126D71C8(iParam0, 1);
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_39(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_31(unk_0xF177E0DA126D71C8(iParam1, 1) - unk_0xF177E0DA126D71C8(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xE9EAE230056F8FA1(iParam0) };
	}
	else
	{
		Var3 = { func_31(unk_0x616B55A822407A37(iParam0, 31086, 0f, 5f, 0f) - unk_0x616B55A822407A37(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_30(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_40(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(var uParam0)
{
	if (unk_0x14D51A9D0DDF4807(unk_0x3D35F9864E4640B1(), uParam0) && unk_0x1F510E862BD5CD12(unk_0x0031992CA618A445(), 6))
	{
		return 1;
	}
	return 0;
}

int func_43(struct<3> Param0, struct<3> Param3, int iParam6, float fParam7)
{
	var uVar0;
	char[] cVar165[8];
	char* sVar166;
	
	if (iLocal_84 < iLocal_85)
	{
		if (!func_23())
		{
			if (unk_0xB7A628320EFF8E47(Param3, Param0) < (fParam7 * fParam7))
			{
				if (unk_0x31CD6E9F83C10233() - iLocal_83) > (iParam6 + unk_0x3AF262D7332EEDF5(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_82, "MAUDE", 0, 1);
					cVar165 = func_46();
					sVar166 = func_21();
					func_44(&uVar0, cVar165, sVar166, 7, 0, 0);
					iLocal_83 = unk_0x31CD6E9F83C10233();
					iLocal_84++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_83 = unk_0x31CD6E9F83C10233();
		}
	}
	return 0;
}

void func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xCD7E92DE2BFA0B0D(&Global_14611, 0);
	Global_15748 = iParam3;
	StringCopy(&Global_15735, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

char* func_46()
{
	if (unk_0x2A3398C6222EB190(Global_104439.f_24847, 3))
	{
		return "BB4AUD";
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_24847, 2))
	{
		return "BB3AUD";
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_24847, 1))
	{
		return "BB2AUD";
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_24847, 0))
	{
		return "BB1AUD";
	}
	return "MAUDEAU";
}

void func_47(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9C8949CB342B3559(iParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(iParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(iParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(iParam2, 1);
			}
		}
	}
}

void func_48(bool bParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 2711.198f, 4134.425f, 32.90168f };
	Var3 = { 2739.981f, 4155.221f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = unk_0x765BE154A2FACB3E(Var0, Var3, 0, 1, 1, 1);
		unk_0x8AB6084B63613D29(Var0, Var3);
		unk_0x1ED966252985F895(Var0, Var3, 0, 1);
		unk_0x572B183FF881EBF0(Var0, Var3, 0);
		unk_0x4684D9ED3F94B4A8(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0, 1);
		unk_0x963AAB0E6FFD7E02(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else
	{
		unk_0x04021FF677078694(*uParam1, 0);
		unk_0x92C87DB219EDEB03();
		unk_0x1ED966252985F895(Var0, Var3, 1, 1);
		unk_0xEE470B9028B06E0A(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

int func_49()
{
	if (unk_0x2A3398C6222EB190(Global_104439.f_24847, 3))
	{
		return 4;
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_24847, 2))
	{
		return 4;
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_24847, 1))
	{
		return 4;
	}
	else if (unk_0x2A3398C6222EB190(Global_104439.f_24847, 0))
	{
		return 3;
	}
	return 4;
}

void func_50()
{
	struct<3> Var0;
	
	if (func_51(iLocal_82))
	{
		if (!unk_0xCC234795142FC2D2(iLocal_82))
		{
			unk_0x1581691D748490F3(iLocal_82, 1, 0);
		}
		unk_0xEB9B39274C401888(iLocal_82, 1);
		unk_0xE236218481966790(iLocal_82, 0);
		unk_0x0EB00C68DDFABE19(iLocal_82, 0);
		unk_0x7F53E53C6F32D196(iLocal_82, joaat("player"));
		unk_0x297A2A56868B1DF7(iLocal_82, 0);
		unk_0xA3DE6CAD28D7328F(iLocal_82, 0);
		unk_0xD6A092D1F1B9A9F1(iLocal_82, 118, 0);
		Var0 = { 2728.33f, 4145.6f, 43.89f };
		if (unk_0x6DA91F6BA155FC6B(Var0, 10f, joaat("prop_table_03b"), 0))
		{
			iLocal_80 = unk_0xE5277EB89570BEE8(Var0, 10f, joaat("prop_table_03b"), 1, 0, 1);
			if (func_8(iLocal_80))
			{
				unk_0x0A69FBBF51E1A08F(iLocal_80, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
				unk_0x5082D1A6D078DB20(iLocal_80, -92.17f);
				unk_0x1F18D3C78C8C1A11(iLocal_80, 1);
			}
		}
		if (unk_0x6DA91F6BA155FC6B(Var0, 10f, joaat("prop_laptop_01a"), 0))
		{
			iLocal_81 = unk_0xE5277EB89570BEE8(Var0, 10f, joaat("prop_laptop_01a"), 0, 0, 1);
			if (func_8(iLocal_81))
			{
				if (!unk_0xCC234795142FC2D2(iLocal_81))
				{
					unk_0x1581691D748490F3(iLocal_81, 1, 0);
				}
				unk_0x0A69FBBF51E1A08F(iLocal_81, 2727.686f, 4145.715f, 44.08f, 1, 0, 0, 1);
				unk_0x5082D1A6D078DB20(iLocal_81, 71f);
				unk_0x1F18D3C78C8C1A11(iLocal_81, 1);
			}
		}
		if (unk_0x6DA91F6BA155FC6B(Var0, 10f, joaat("prop_table_03_chr"), 0))
		{
			iLocal_79 = unk_0xE5277EB89570BEE8(Var0, 10f, joaat("prop_table_03_chr"), 0, 0, 1);
			if (func_8(iLocal_79))
			{
				if (!unk_0xCC234795142FC2D2(iLocal_79))
				{
					unk_0x1581691D748490F3(iLocal_79, 1, 0);
				}
				unk_0x0A69FBBF51E1A08F(iLocal_79, 2728.35f, 4145.59f, 43.3f, 1, 0, 0, 1);
				unk_0x5082D1A6D078DB20(iLocal_79, -91.28f);
			}
		}
	}
}

int func_51(int iParam0)
{
	if (func_8(uParam0))
	{
		if (!unk_0x8682D8A6269E52C9(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_52()
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		iVar0 = unk_0xCCB8FB63FA4C6CAB(unk_0x0031992CA618A445(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0xE9559A12052415BE(uVar2[iVar1]) == func_53(62))
				{
					iLocal_82 = uVar2[iVar1];
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	if (!func_54(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_54(int iParam0)
{
	return iParam0 < 3;
}

void func_55()
{
	func_48(0, &uLocal_88);
	if (func_8(iLocal_81))
	{
		unk_0x1F18D3C78C8C1A11(iLocal_81, 0);
	}
	func_57(&iLocal_81, 0);
	if (func_8(iLocal_80))
	{
		unk_0x1F18D3C78C8C1A11(iLocal_80, 0);
	}
	func_57(&iLocal_80, 0);
	if (func_8(iLocal_79))
	{
		unk_0x1F18D3C78C8C1A11(iLocal_79, 0);
		if (unk_0x4CB2F72EA418C083(iLocal_79, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x23A3B033C8CB0207(iLocal_79, "base_chair", "special_ped@maude@base", -1000f);
			unk_0x65F9639B4A46807A(iLocal_79, -1000f, 1);
		}
		else if (unk_0x4CB2F72EA418C083(iLocal_79, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x23A3B033C8CB0207(iLocal_79, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0x65F9639B4A46807A(iLocal_79, -1000f, 1);
		}
	}
	func_57(&iLocal_79, 0);
	if (func_51(iLocal_82))
	{
		unk_0x390D16BCBFB23E1A(iLocal_82, 1);
		unk_0xD6A092D1F1B9A9F1(iLocal_82, 118, 1);
	}
	func_56(&iLocal_82, 1, 0, 1);
	unk_0xBE238DB7614E8074(func_11());
	unk_0xBEE2834559A8897A();
}

void func_56(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		if (!unk_0x8682D8A6269E52C9(*uParam0))
		{
			unk_0xCFC7B014BB928D6D(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x2758EB35EE475C21(*uParam0);
			}
			unk_0x390D16BCBFB23E1A(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xEB9B39274C401888(*uParam0, 0);
			}
		}
		unk_0x056049D9941BD43D(uParam0);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (unk_0x76B3C79DE564AFC6(*uParam0))
	{
		if (unk_0x729737A6C2176E42(*uParam0))
		{
			unk_0x2C49E28C76DBD67B(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x4738E36A70E50A92(uParam0);
		}
		else
		{
			unk_0x03EEF0CEE1B75237(*uParam0);
		}
	}
}

