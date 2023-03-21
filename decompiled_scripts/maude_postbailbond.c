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
	if (unk_0xD4BE58A7E3E102AC(19))
	{
		func_56();
	}
	if (!func_52())
	{
		func_56();
	}
	if (!func_51(uLocal_82))
	{
		func_56();
	}
	else
	{
		func_50();
		iLocal_83 = unk_0x9B35D07DCD0F0B43();
		iLocal_85 = func_49();
		iLocal_84 = 0;
		func_48(1, &uLocal_88);
	}
	while (true)
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			if (!func_51(uLocal_82))
			{
				func_56();
			}
			Var0 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
			Var3 = { unk_0xACE5E491FC1B0D37(uLocal_82, 1) };
			if (unk_0xB7A628320EFF8E47(Var0, Var3) >= (100f * 100f))
			{
				func_56();
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
						unk_0x36B659209EBDD366(func_11());
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
					if (!func_4(iLocal_82, 1805844857) && !unk_0x5C0FAAC7D36B617B(iLocal_82))
					{
						if (!unk_0xF6FD8019402CF03B(iLocal_82, func_11(), func_3(), 3))
						{
							func_1();
						}
					}
					else
					{
						func_56();
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
		unk_0xF0E9590A910B74BE(iLocal_82, unk_0x0FA8183DAD2B3203(), 10000f, -1, 0, 0);
		unk_0x7D81B41B134BD6F2(iLocal_82, 1);
	}
}

void func_2(var uParam0)
{
	if (func_51(*uParam0))
	{
		unk_0x3A6FD57A8EC62253(*uParam0, 2, 0);
		unk_0x3A6FD57A8EC62253(*uParam0, 64, 0);
		unk_0x3A6FD57A8EC62253(*uParam0, 128, 0);
		unk_0x3A6FD57A8EC62253(*uParam0, 8, 0);
		unk_0x3A6FD57A8EC62253(*uParam0, 1, 0);
		unk_0x3A6FD57A8EC62253(*uParam0, 32, 0);
		unk_0xDEB0AA30ABFDCF48(*uParam0, 5, 0);
		unk_0xDEB0AA30ABFDCF48(*uParam0, 17, 1);
		unk_0x1DB66BD2267055C0(*uParam0, 118, 1);
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
		if (unk_0x411C065ADB822CD9(uParam0, iParam1) == 1 || unk_0x411C065ADB822CD9(uParam0, iParam1) == 0)
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
		if (unk_0xF6FD8019402CF03B(*uParam0, func_10(), func_9(), 3))
		{
			if (!unk_0x3DAA08BFD9A801FD(*uParam0) || unk_0x3DEC1EF42CC05213(*uParam0))
			{
				unk_0x36B659209EBDD366(func_11());
				if (unk_0xB25A0D192C6A0A5B(func_11()))
				{
					*iParam2 = unk_0xF2A54C51C03CADAA(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0x3F8774A014F77C2D(*iParam2, 0);
					unk_0xC8210337A7389E13(*iParam2, 0);
					if (func_4(*uParam0, 1785177548))
					{
						unk_0x1498B6B9F7C33B0A(*uParam0, -1000f, 1);
					}
					unk_0x8582CCEB95B1F1BE(*uParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0xCFEC09B98C6C5993(*uParam0, 0, 0);
					if (func_8(*uParam1))
					{
						if (unk_0xF6FD8019402CF03B(*uParam1, func_10(), func_7(), 3))
						{
							unk_0x1498B6B9F7C33B0A(*uParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0xD9EC67B3064ADB79(*uParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
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
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (!unk_0xF4B969E0807E76C7(iParam0, 0))
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
		if (!unk_0x01891E23361FD324(iLocal_82))
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
		bVar0 = unk_0x381C09B47675E410(*uParam0);
		if (bVar0)
		{
			unk_0x017E89DAA23CDAA7(*uParam0, 0);
		}
		func_14(*uParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			unk_0x017E89DAA23CDAA7(*uParam0, 1);
		}
	}
}

void func_14(var uParam0, var uParam1, var uParam2, int iParam3)
{
	unk_0x8ED81066343F07B4(uParam0, uParam1, uParam2, func_15(iParam3), 0);
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
		if (unk_0x2553916E420E8EF0(&Var0, uVar6))
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
	Global_19671 = 0;
	func_18();
}

void func_18()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
	}
}

void func_19()
{
	Global_19671 = 0;
	func_20();
}

void func_20()
{
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0xE4F88BFF8FB3D84C();
		Global_21816 = 0;
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

char* func_21()
{
	if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 3))
	{
		return "BB4_loiter";
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 2))
	{
		return "BB3_loiter";
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 1))
	{
		return "BB2_loiter";
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_23()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	if (unk_0xD4B321D9096B01FC(uLocal_81))
	{
		unk_0x860A5CC30A0EF207(iLocal_81, 0);
	}
	if (unk_0xD4B321D9096B01FC(uLocal_80))
	{
		unk_0x860A5CC30A0EF207(iLocal_80, 0);
	}
}

int func_25(var uParam0, bool bParam1)
{
	if (func_51(*uParam0))
	{
		if ((unk_0x131D2F46228B31BA(*uParam0) || unk_0xAC5FBBB39EA7908F(*uParam0)) || unk_0xE852842872C2D9A9(*uParam0))
		{
			return 1;
		}
		if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
		{
			if (unk_0x7A10CED38342D31F(unk_0x0FA8183DAD2B3203(), *uParam0))
			{
				return 1;
			}
			if (unk_0xD4B321D9096B01FC(uLocal_79))
			{
				if (unk_0x7A10CED38342D31F(unk_0x0FA8183DAD2B3203(), iLocal_79))
				{
					return 1;
				}
			}
			if (unk_0xD4B321D9096B01FC(iLocal_80))
			{
				if (unk_0x7A10CED38342D31F(unk_0x0FA8183DAD2B3203(), iLocal_80))
				{
					return 1;
				}
			}
			if (unk_0xD4B321D9096B01FC(iLocal_81))
			{
				if (unk_0x7A10CED38342D31F(unk_0x0FA8183DAD2B3203(), iLocal_81))
				{
					return 1;
				}
			}
		}
		if (unk_0x41F11D4118027EC7(*uParam0, 61))
		{
			return 1;
		}
		if (unk_0x3DAA08BFD9A801FD(*uParam0))
		{
			if (unk_0x9B69E0F5342BA1A8(*uParam0, unk_0x0FA8183DAD2B3203(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0x41F11D4118027EC7(*uParam0, 51))
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
		if (unk_0x54D242CA888C9BF1(-1, unk_0xACE5E491FC1B0D37(*uParam0, 1), 15f))
		{
			return 1;
		}
		if (unk_0x41F11D4118027EC7(*uParam0, 73))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
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
	if (func_8(unk_0x0FA8183DAD2B3203()) && func_8(iParam0))
	{
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar2, 1);
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
			if (unk_0x64F825FCEFC07239(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x6C979EE77983FC04(unk_0xACE5E491FC1B0D37(iParam0, 1), fVar0, 1))
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
	
	Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xC6596EAF5F50B53A(unk_0xACE5E491FC1B0D37(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xC6596EAF5F50B53A(unk_0xACE5E491FC1B0D37(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xC6596EAF5F50B53A(unk_0xACE5E491FC1B0D37(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xC6596EAF5F50B53A(unk_0xACE5E491FC1B0D37(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
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
		if (unk_0x6E611F4ABF5BABF1(Var0, Var3, 1))
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
	
	if ((((unk_0x6267AE5438BF1CCD(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x6267AE5438BF1CCD(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x6267AE5438BF1CCD(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x6267AE5438BF1CCD(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x6267AE5438BF1CCD(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
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
	
	Var0 = { func_31(Param1 - unk_0xACE5E491FC1B0D37(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xDF29CF810DF94B60(iParam0) };
	}
	else
	{
		Var3 = { func_31(unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 5f, 0f) - unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 0f, 0f)) };
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
		if (unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
		{
			if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x6C979EE77983FC04(unk_0xACE5E491FC1B0D37(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_8(unk_0x0FA8183DAD2B3203()) && func_8(iParam0))
	{
		if (func_42(iParam0) || unk_0x4412340828EC2614(unk_0x7C7787D2D7139A85(), iParam0))
		{
			if (unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
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
	return func_35(iParam0, unk_0x0FA8183DAD2B3203(), fParam1, 1, 250, 7);
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
	Var1 = { unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x9B35D07DCD0F0B43() - Local_37[iVar4 /*4*/].f_3) < iParam4);
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
		*uParam0 = unk_0xE595A27685A9E166(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x19D3834206AE7960(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x4625051E51BA911B(iVar7))
	{
		func_8(iVar7);
		if (unk_0x3D464779B732760F(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0x7C20DD165B7C40CB(Param1, unk_0xACE5E491FC1B0D37(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x9B35D07DCD0F0B43();
			return 1;
		}
		return 0;
	}
	if (unk_0x905FBA24E7FA8D23(iVar7))
	{
		func_8(iVar7);
		if (unk_0x5294582CE404D3F4(iParam4, 0))
		{
			if (unk_0xD05B0DA3866791D0(iVar7) == unk_0x4D57D3E5ECE15A41(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0x7C20DD165B7C40CB(Param1, unk_0xACE5E491FC1B0D37(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x9B35D07DCD0F0B43();
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
		iVar0 = unk_0xBAC643F143880136(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xACE5E491FC1B0D37(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xACE5E491FC1B0D37(iParam0, 1);
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
	
	Var0 = { func_31(unk_0xACE5E491FC1B0D37(iParam1, 1) - unk_0xACE5E491FC1B0D37(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xDF29CF810DF94B60(iParam0) };
	}
	else
	{
		Var3 = { func_31(unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 5f, 0f) - unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 0f, 0f)) };
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
	if (unk_0x2A06948F22A49FC3(unk_0x7C7787D2D7139A85(), uParam0) && unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
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
				if (unk_0x9B35D07DCD0F0B43() - iLocal_83) > (iParam6 + unk_0xBAC643F143880136(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_82, "MAUDE", 0, 1);
					cVar165 = func_46();
					sVar166 = func_21();
					func_44(&uVar0, cVar165, sVar166, 7, 0, 0);
					iLocal_83 = unk_0x9B35D07DCD0F0B43();
					iLocal_84++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_83 = unk_0x9B35D07DCD0F0B43();
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
	unk_0xA1E7A40E1F56E511(&Global_19671, 0);
	Global_20808 = iParam3;
	StringCopy(&Global_20795, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

char* func_46()
{
	if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 3))
	{
		return "BB4AUD";
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 2))
	{
		return "BB3AUD";
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 1))
	{
		return "BB2AUD";
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 0))
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
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x773434A2783CA924(iParam2, 0);
			}
			else
			{
				unk_0x773434A2783CA924(iParam2, 1);
			}
		}
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xB35478A1AA54EA1A(iParam2, 0);
			}
			else
			{
				unk_0xB35478A1AA54EA1A(iParam2, 1);
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
		*uParam1 = unk_0x740FE9B7B3FE1CE5(Var0, Var3, 0, 1, 1, 1);
		unk_0xC5F5645D67898993(Var0, Var3);
		unk_0x80BCF42B42433CEB(Var0, Var3, 0, 1);
		unk_0x33FF6ACF3BBD338B(Var0, Var3, 0);
		unk_0x2D2E01EF7EFB0DB2(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0, 1);
		unk_0xB82DC93528F8603C(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else
	{
		unk_0x9E64FD43AF331B00(*uParam1, 0);
		unk_0xF13D526811FA8F57();
		unk_0x80BCF42B42433CEB(Var0, Var3, 1, 1);
		unk_0x8E4F6615F45C8C6B(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

int func_49()
{
	if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 3))
	{
		return 4;
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 2))
	{
		return 4;
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 1))
	{
		return 4;
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 0))
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
		if (!unk_0x00123AB82C5FAC28(iLocal_82))
		{
			unk_0xE5C667CF3B4642D2(iLocal_82, 1, 0);
		}
		unk_0xCC94EE23853F38E4(iLocal_82, 1);
		unk_0x6E84F47D0D3E5BC9(iLocal_82, 0);
		unk_0x6E712A176E3EEFA8(iLocal_82, 0);
		unk_0xDB889DCC8B0139E6(iLocal_82, joaat("player"));
		unk_0xA04A153F87117E57(iLocal_82, 0);
		unk_0x697D8E0444296B5E(iLocal_82, 0);
		unk_0x1DB66BD2267055C0(iLocal_82, 118, 0);
		Var0 = { 2728.33f, 4145.6f, 43.89f };
		if (unk_0x6DBAE8253C1BC686(Var0, 10f, joaat("prop_table_03b"), 0))
		{
			iLocal_80 = unk_0x91D67DB02D1040F1(Var0, 10f, joaat("prop_table_03b"), 1, 0, 1);
			if (func_8(iLocal_80))
			{
				unk_0xCB3446C6A91D1A78(iLocal_80, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
				unk_0x5A2B7C446C0CF087(iLocal_80, -92.17f);
				unk_0x860A5CC30A0EF207(iLocal_80, 1);
			}
		}
		if (unk_0x6DBAE8253C1BC686(Var0, 10f, joaat("prop_laptop_01a"), 0))
		{
			iLocal_81 = unk_0x91D67DB02D1040F1(Var0, 10f, joaat("prop_laptop_01a"), 0, 0, 1);
			if (func_8(iLocal_81))
			{
				if (!unk_0x00123AB82C5FAC28(iLocal_81))
				{
					unk_0xE5C667CF3B4642D2(iLocal_81, 1, 0);
				}
				unk_0xCB3446C6A91D1A78(iLocal_81, 2727.686f, 4145.715f, 44.08f, 1, 0, 0, 1);
				unk_0x5A2B7C446C0CF087(iLocal_81, 71f);
				unk_0x860A5CC30A0EF207(iLocal_81, 1);
			}
		}
		if (unk_0x6DBAE8253C1BC686(Var0, 10f, joaat("prop_table_03_chr"), 0))
		{
			iLocal_79 = unk_0x91D67DB02D1040F1(Var0, 10f, joaat("prop_table_03_chr"), 0, 0, 1);
			if (func_8(iLocal_79))
			{
				if (!unk_0x00123AB82C5FAC28(iLocal_79))
				{
					unk_0xE5C667CF3B4642D2(iLocal_79, 1, 0);
				}
				unk_0xCB3446C6A91D1A78(iLocal_79, 2728.35f, 4145.59f, 43.3f, 1, 0, 0, 1);
				unk_0x5A2B7C446C0CF087(iLocal_79, -91.28f);
			}
		}
	}
}

int func_51(int iParam0)
{
	if (func_8(uParam0))
	{
		if (!unk_0x2BF5E63466422C38(uParam0))
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
	
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		iVar0 = unk_0xB7AEB865047E4CC6(unk_0x0FA8183DAD2B3203(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0x7F375072508F738F(uVar2[iVar1]) == func_53(62))
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
	if (!func_55(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_54(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

void func_56()
{
	func_48(0, &uLocal_88);
	if (func_8(iLocal_81))
	{
		unk_0x860A5CC30A0EF207(iLocal_81, 0);
	}
	func_58(&iLocal_81, 0);
	if (func_8(iLocal_80))
	{
		unk_0x860A5CC30A0EF207(iLocal_80, 0);
	}
	func_58(&iLocal_80, 0);
	if (func_8(iLocal_79))
	{
		unk_0x860A5CC30A0EF207(iLocal_79, 0);
		if (unk_0xF6FD8019402CF03B(iLocal_79, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x14EDAEA512730353(iLocal_79, "base_chair", "special_ped@maude@base", -1000f);
			unk_0x1498B6B9F7C33B0A(iLocal_79, -1000f, 1);
		}
		else if (unk_0xF6FD8019402CF03B(iLocal_79, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x14EDAEA512730353(iLocal_79, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0x1498B6B9F7C33B0A(iLocal_79, -1000f, 1);
		}
	}
	func_58(&iLocal_79, 0);
	if (func_51(iLocal_82))
	{
		unk_0x7D81B41B134BD6F2(iLocal_82, 1);
		unk_0x1DB66BD2267055C0(iLocal_82, 118, 1);
	}
	func_57(&iLocal_82, 1, 0, 1);
	unk_0x7D74D6A091150B86(func_11());
	unk_0x9C9E32388A7886A2();
}

void func_57(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (!unk_0x2BF5E63466422C38(*uParam0))
		{
			unk_0xDA778D908FD69EEE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xB46600A5F9F79CE8(*uParam0);
			}
			unk_0x7D81B41B134BD6F2(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xCC94EE23853F38E4(*uParam0, 0);
			}
		}
		unk_0x0FFB05DA97E810B5(uParam0);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (unk_0x0671DB6A34EE14AA(*uParam0))
		{
			unk_0x363E2170E626A00A(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x86A9549BD3D71664(uParam0);
		}
		else
		{
			unk_0x7F871504FE14865C(*uParam0);
		}
	}
}

