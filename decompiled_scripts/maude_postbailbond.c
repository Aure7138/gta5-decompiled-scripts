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
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_84 = -1;
	iLocal_85 = -1;
	if (unk_0xC11469DCA6FC3BB5(19))
	{
		func_55();
	}
	if (!func_52())
	{
		func_55();
	}
	if (!func_51(uLocal_81))
	{
		func_55();
	}
	else
	{
		func_50();
		iLocal_82 = unk_0x4F67E8ECA7D3F667();
		iLocal_84 = func_49();
		iLocal_83 = 0;
		func_48(1, &uLocal_87);
	}
	while (true)
	{
		if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
		{
			if (!func_51(uLocal_81))
			{
				func_55();
			}
			Var0 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
			Var3 = { unk_0xA86D5F069399F44D(uLocal_81, 1) };
			if (unk_0xB7A628320EFF8E47(Var0, Var3) >= (100f * 100f))
			{
				func_55();
			}
			switch (iLocal_86)
			{
				case 0:
					func_43(Var3, Var0, 18000, 1101004800);
					if (func_25(&iLocal_81, 0))
					{
						func_24();
						func_16(0);
						func_12(Var3, Var0);
						unk_0xA862A2AD321F94B4(func_11());
						iLocal_86 = 1;
					}
					break;
				
				case 1:
					if (func_5(&iLocal_81, &uLocal_78, &iLocal_85))
					{
						iLocal_86 = 2;
					}
					break;
				
				case 2:
					if (!func_4(iLocal_81, 1805844857) && !unk_0x78413032BDA99B80(iLocal_81))
					{
						if (!unk_0xDEE49D5CA6C49148(iLocal_81, func_11(), func_3(), 3))
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
	if (func_51(iLocal_81))
	{
		func_2(&iLocal_81);
		unk_0x06C6AD4F38E8412D(iLocal_81, unk_0x096275889B8E0EE0(), 10000f, -1, 0, 0);
		unk_0x2AD4789CBFD829EC(iLocal_81, 1);
	}
}

void func_2(var uParam0)
{
	if (func_51(*uParam0))
	{
		unk_0xF6482620334B0094(*uParam0, 2, 0);
		unk_0xF6482620334B0094(*uParam0, 64, 0);
		unk_0xF6482620334B0094(*uParam0, 128, 0);
		unk_0xF6482620334B0094(*uParam0, 8, 0);
		unk_0xF6482620334B0094(*uParam0, 1, 0);
		unk_0xF6482620334B0094(*uParam0, 32, 0);
		unk_0x32A582AACCBCAEFE(*uParam0, 5, 0);
		unk_0x32A582AACCBCAEFE(*uParam0, 17, 1);
		unk_0x020E173F318C12DA(*uParam0, 118, 1);
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
		if (unk_0x04932A97CB319DE0(uParam0, iParam1) == 1 || unk_0x04932A97CB319DE0(uParam0, iParam1) == 0)
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
		if (unk_0xDEE49D5CA6C49148(*uParam0, func_10(), func_9(), 3))
		{
			if (!unk_0x14BDA64F4D0D5E1D(*uParam0) || unk_0x8072F0912899C46C(*uParam0))
			{
				unk_0xA862A2AD321F94B4(func_11());
				if (unk_0x27FF6FE8009B40CA(func_11()))
				{
					*iParam2 = unk_0x4D3B117F889EADDA(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0x074C419F65D01DE7(*iParam2, 0);
					unk_0x0D750763E4B00866(*iParam2, 0);
					if (func_4(*uParam0, 1785177548))
					{
						unk_0x9BBC32B584987163(*uParam0, -1000f, 1);
					}
					unk_0x3605588B4955CFAF(*uParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0x76BA60E29B3C3B96(*uParam0, 0, 0);
					if (func_8(*uParam1))
					{
						if (unk_0xDEE49D5CA6C49148(*uParam1, func_10(), func_7(), 3))
						{
							unk_0x9BBC32B584987163(*uParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0xCF307902D4A3A68C(*uParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
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
	if (unk_0xD42BD6EB2E0F1677(iParam0))
	{
		if (!unk_0x7D5B1F88E7504BBA(iParam0))
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
	if (func_51(iLocal_81))
	{
		if (!unk_0xE83F3075C21CC0A2(iLocal_81))
		{
			if (unk_0xB7A628320EFF8E47(Param3, Param0) < (35f * 35f))
			{
				func_13(&iLocal_81, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	bool bVar0;
	
	if (func_51(*uParam0))
	{
		bVar0 = unk_0x72F9B2CDA312C991(*uParam0);
		if (bVar0)
		{
			unk_0x1A6DC1AE2121C6C4(*uParam0, 0);
		}
		func_14(*uParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			unk_0x1A6DC1AE2121C6C4(*uParam0, 1);
		}
	}
}

void func_14(var uParam0, var uParam1, var uParam2, int iParam3)
{
	unk_0xD318BF1FC64DD7D9(uParam0, uParam1, uParam2, func_15(iParam3), 0);
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
		if (unk_0xD3852F22AB713A1F(&Var0, uVar6))
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
	Global_14558 = 0;
	func_18();
}

void func_18()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
	}
}

void func_19()
{
	Global_14558 = 0;
	func_20();
}

void func_20()
{
	if (unk_0x200E87988220C592())
	{
		unk_0x1DDACDCB7482E6F1();
		Global_16703 = 0;
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

char* func_21()
{
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28183, 3))
	{
		return "BB4_loiter";
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28183, 2))
	{
		return "BB3_loiter";
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28183, 1))
	{
		return "BB2_loiter";
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28183, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

int func_23()
{
	if (Global_15692 != 0 || unk_0x200E87988220C592())
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	if (unk_0xD42BD6EB2E0F1677(uLocal_80))
	{
		unk_0x7D9EFB7AD6B19754(iLocal_80, 0);
	}
	if (unk_0xD42BD6EB2E0F1677(uLocal_79))
	{
		unk_0x7D9EFB7AD6B19754(iLocal_79, 0);
	}
}

int func_25(var uParam0, bool bParam1)
{
	if (func_51(*uParam0))
	{
		if ((unk_0x9934E9C42D52D87E(*uParam0) || unk_0x695D7C26DE65C423(*uParam0)) || unk_0x73BB763880CD23A6(*uParam0))
		{
			return 1;
		}
		if (unk_0x08B96A437661F1BC(unk_0x096275889B8E0EE0()))
		{
			if (unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), *uParam0))
			{
				return 1;
			}
			if (unk_0xD42BD6EB2E0F1677(uLocal_78))
			{
				if (unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), iLocal_78))
				{
					return 1;
				}
			}
			if (unk_0xD42BD6EB2E0F1677(iLocal_79))
			{
				if (unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), iLocal_79))
				{
					return 1;
				}
			}
			if (unk_0xD42BD6EB2E0F1677(iLocal_80))
			{
				if (unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), iLocal_80))
				{
					return 1;
				}
			}
		}
		if (unk_0xFE2D4B95046CBC40(*uParam0, 60))
		{
			return 1;
		}
		if (unk_0x14BDA64F4D0D5E1D(*uParam0))
		{
			if (unk_0xC057F02B837A27F6(*uParam0, unk_0x096275889B8E0EE0(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0xFE2D4B95046CBC40(*uParam0, 50))
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
		if (unk_0xD62DD846D82CBB90(-1, unk_0xA86D5F069399F44D(*uParam0, 1), 15f))
		{
			return 1;
		}
		if (unk_0xFE2D4B95046CBC40(*uParam0, 72))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0xE1C0AD4C24324C36(unk_0x217E9DC48139933D(), 0))
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
	if (func_8(unk_0x096275889B8E0EE0()) && func_8(iParam0))
	{
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar2, 1);
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
			if (unk_0x3ED6DDEF9C89FB87(unk_0x096275889B8E0EE0()))
			{
				if (unk_0x69BBBA1223D4C644(unk_0x096275889B8E0EE0()))
				{
					if (unk_0xC652FD308772D79E(unk_0xA86D5F069399F44D(iParam0, 1), fVar0, 1))
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
	
	Var0 = { unk_0xA86D5F069399F44D(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xF51C9BAAD9ED64C4(unk_0xA86D5F069399F44D(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xF51C9BAAD9ED64C4(unk_0xA86D5F069399F44D(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xF51C9BAAD9ED64C4(unk_0xA86D5F069399F44D(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xF51C9BAAD9ED64C4(unk_0xA86D5F069399F44D(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
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
		if (unk_0x05B0061EFDFC8941(Var0, Var3, 1))
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
	
	if ((((unk_0x9578986A6105A6AD(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x9578986A6105A6AD(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x9578986A6105A6AD(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x9578986A6105A6AD(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x9578986A6105A6AD(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
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
	
	Var0 = { func_31(Param1 - unk_0xA86D5F069399F44D(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x2412D9C05BB09B97(iParam0) };
	}
	else
	{
		Var3 = { func_31(unk_0x012B43913EE9671C(iParam0, 31086, 0f, 5f, 0f) - unk_0x012B43913EE9671C(iParam0, 31086, 0f, 0f, 0f)) };
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
		if (unk_0x69BBBA1223D4C644(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xC652FD308772D79E(unk_0xA86D5F069399F44D(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_8(unk_0x096275889B8E0EE0()) && func_8(iParam0))
	{
		if (func_42(iParam0) || unk_0x27F89FDC16688A7A(unk_0x217E9DC48139933D(), iParam0))
		{
			if (unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xC057F02B837A27F6(unk_0x096275889B8E0EE0(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
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
	return func_35(iParam0, unk_0x096275889B8E0EE0(), fParam1, 1, 250, 7);
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
			func_40(&(Local_36[iVar4 /*4*/]));
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
		Local_36[iVar4 /*4*/].f_1 = iParam0;
		Local_36[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x012B43913EE9671C(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x4F67E8ECA7D3F667() - Local_36[iVar4 /*4*/].f_3) < iParam4);
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
		*uParam0 = unk_0xD1B966852E9F6951(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xEDE8AC7C5108FB1D(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0xCF8176912DDA4EA5(iVar7))
	{
		func_8(iVar7);
		if (unk_0x0F16D042BD640EA3(iVar7) == iParam4)
		{
			if (bLocal_77)
			{
				unk_0xE83143951E290CAD(Param1, unk_0xA86D5F069399F44D(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x4F67E8ECA7D3F667();
			return 1;
		}
		return 0;
	}
	if (unk_0xC3D96AF45FCCEC4C(iVar7))
	{
		func_8(iVar7);
		if (unk_0x52BE10F427339B39(iParam4, 0))
		{
			if (unk_0xDF1E5AAC561AFC59(iVar7) == unk_0xB3598EA616C3FFC3(iParam4, 0))
			{
				if (bLocal_77)
				{
					unk_0xE83143951E290CAD(Param1, unk_0xA86D5F069399F44D(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x4F67E8ECA7D3F667();
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
		iVar0 = unk_0x9C1C462D7B1DD1F9(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xA86D5F069399F44D(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x012B43913EE9671C(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x012B43913EE9671C(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x012B43913EE9671C(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x012B43913EE9671C(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x012B43913EE9671C(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x012B43913EE9671C(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xA86D5F069399F44D(iParam0, 1);
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36.f_0)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
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
	
	Var0 = { func_31(unk_0xA86D5F069399F44D(iParam1, 1) - unk_0xA86D5F069399F44D(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x2412D9C05BB09B97(iParam0) };
	}
	else
	{
		Var3 = { func_31(unk_0x012B43913EE9671C(iParam0, 31086, 0f, 5f, 0f) - unk_0x012B43913EE9671C(iParam0, 31086, 0f, 0f, 0f)) };
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
	while (iVar0 < Local_36.f_0)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(var uParam0)
{
	if (unk_0x8C67C11C68713D25(unk_0x217E9DC48139933D(), uParam0) && unk_0x0878A3DD21BC848A(unk_0x096275889B8E0EE0(), 6))
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
	
	if (iLocal_83 < iLocal_84)
	{
		if (!func_23())
		{
			if (unk_0xB7A628320EFF8E47(Param3, Param0) < (fParam7 * fParam7))
			{
				if (unk_0x4F67E8ECA7D3F667() - iLocal_82) > (iParam6 + unk_0x9C1C462D7B1DD1F9(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_81, "MAUDE", 0, 1);
					cVar165 = func_46();
					sVar166 = func_21();
					func_44(&uVar0, cVar165, sVar166, 7, 0, 0);
					iLocal_82 = unk_0x4F67E8ECA7D3F667();
					iLocal_83++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_82 = unk_0x4F67E8ECA7D3F667();
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
	unk_0xF73FBE4845C43B5B(&Global_14558, 0);
	Global_15695 = iParam3;
	StringCopy(&Global_15682, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

char* func_46()
{
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28183, 3))
	{
		return "BB4AUD";
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28183, 2))
	{
		return "BB3AUD";
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28183, 1))
	{
		return "BB2AUD";
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28183, 0))
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
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(iParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(iParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(iParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(iParam2, 1);
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
		*uParam1 = unk_0x55686F8055FF786B(Var0, Var3, 0, 1, 1, 1);
		unk_0xEC40E7864AB23E9D(Var0, Var3);
		unk_0xBBB134FB9D50C0CC(Var0, Var3, 0, 1);
		unk_0xC619A44639BC0CB4(Var0, Var3);
		unk_0xEDF13ED104B0FF6B(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0, 1);
		unk_0x3B882A96EA77D5B1(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else
	{
		unk_0xE2E2B535953BF59E(*uParam1, 0);
		unk_0xA47145093063CDF4();
		unk_0xBBB134FB9D50C0CC(Var0, Var3, 1, 1);
		unk_0xC77E39B7E42156B8(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

int func_49()
{
	if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28183, 3))
	{
		return 4;
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28183, 2))
	{
		return 4;
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28183, 1))
	{
		return 4;
	}
	else if (unk_0x4ED6CFDFE8D4131A(Global_97353.f_28183, 0))
	{
		return 3;
	}
	return 4;
}

void func_50()
{
	struct<3> Var0;
	
	if (func_51(iLocal_81))
	{
		if (!unk_0x138190F64DB4BBD1(iLocal_81))
		{
			unk_0xDC19C288082E586E(iLocal_81, 1, 0);
		}
		unk_0x49876BF356F39E66(iLocal_81, 1);
		unk_0x92DA957FFDF2DA79(iLocal_81, 0);
		unk_0x5E95290AF8605EA1(iLocal_81, 0);
		unk_0x6ECBACF91786FB7A(iLocal_81, joaat("player"));
		unk_0x9F738242D71A6D8E(iLocal_81, 0);
		unk_0xF53EA9027AFFBCC0(iLocal_81, 0);
		unk_0x020E173F318C12DA(iLocal_81, 118, 0);
		Var0 = { 2728.33f, 4145.6f, 43.89f };
		if (unk_0x1C168182BEBE2DDA(Var0, 10f, joaat("prop_table_03b"), 0))
		{
			iLocal_79 = unk_0x066A16145417A72D(Var0, 10f, joaat("prop_table_03b"), 1, 0, 1);
			if (func_8(iLocal_79))
			{
				unk_0xF6A103413A202C37(iLocal_79, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
				unk_0xCF2B9C0645C4651B(iLocal_79, -92.17f);
				unk_0x7D9EFB7AD6B19754(iLocal_79, 1);
			}
		}
		if (unk_0x1C168182BEBE2DDA(Var0, 10f, joaat("prop_laptop_01a"), 0))
		{
			iLocal_80 = unk_0x066A16145417A72D(Var0, 10f, joaat("prop_laptop_01a"), 0, 0, 1);
			if (func_8(iLocal_80))
			{
				if (!unk_0x138190F64DB4BBD1(iLocal_80))
				{
					unk_0xDC19C288082E586E(iLocal_80, 1, 0);
				}
				unk_0xF6A103413A202C37(iLocal_80, 2727.686f, 4145.715f, 44.08f, 1, 0, 0, 1);
				unk_0xCF2B9C0645C4651B(iLocal_80, 71f);
				unk_0x7D9EFB7AD6B19754(iLocal_80, 1);
			}
		}
		if (unk_0x1C168182BEBE2DDA(Var0, 10f, joaat("prop_table_03_chr"), 0))
		{
			iLocal_78 = unk_0x066A16145417A72D(Var0, 10f, joaat("prop_table_03_chr"), 0, 0, 1);
			if (func_8(iLocal_78))
			{
				if (!unk_0x138190F64DB4BBD1(iLocal_78))
				{
					unk_0xDC19C288082E586E(iLocal_78, 1, 0);
				}
				unk_0xF6A103413A202C37(iLocal_78, 2728.35f, 4145.59f, 43.3f, 1, 0, 0, 1);
				unk_0xCF2B9C0645C4651B(iLocal_78, -91.28f);
			}
		}
	}
}

int func_51(int iParam0)
{
	if (func_8(uParam0))
	{
		if (!unk_0x6CFF81397164A1D3(uParam0))
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
	
	if (!unk_0x6CFF81397164A1D3(unk_0x096275889B8E0EE0()))
	{
		iVar0 = unk_0xD998C3CE9F8EB5C2(unk_0x096275889B8E0EE0(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0xDA76A9F39210D365(uVar2[iVar1]) == func_53(62))
				{
					iLocal_81 = uVar2[iVar1];
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
		return Global_97353.f_29774[iParam0 /*29*/];
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
	func_48(0, &uLocal_87);
	if (func_8(iLocal_80))
	{
		unk_0x7D9EFB7AD6B19754(iLocal_80, 0);
	}
	func_57(&iLocal_80, 0);
	if (func_8(iLocal_79))
	{
		unk_0x7D9EFB7AD6B19754(iLocal_79, 0);
	}
	func_57(&iLocal_79, 0);
	if (func_8(iLocal_78))
	{
		unk_0x7D9EFB7AD6B19754(iLocal_78, 0);
		if (unk_0xDEE49D5CA6C49148(iLocal_78, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x786591D986DE9159(iLocal_78, "base_chair", "special_ped@maude@base", -1000f);
			unk_0x9BBC32B584987163(iLocal_78, -1000f, 1);
		}
		else if (unk_0xDEE49D5CA6C49148(iLocal_78, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x786591D986DE9159(iLocal_78, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0x9BBC32B584987163(iLocal_78, -1000f, 1);
		}
	}
	func_57(&iLocal_78, 0);
	if (func_51(iLocal_81))
	{
		unk_0x2AD4789CBFD829EC(iLocal_81, 1);
		unk_0x020E173F318C12DA(iLocal_81, 118, 1);
	}
	func_56(&iLocal_81, 1, 0, 1);
	unk_0x4763145053A33D46(func_11());
	unk_0x5E8B6D17FF91CD59();
}

void func_56(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD42BD6EB2E0F1677(*uParam0))
	{
		if (!unk_0x6CFF81397164A1D3(*uParam0))
		{
			unk_0x9B9EE31AED48072E(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x74D112F5843DB3CA(*uParam0);
			}
			unk_0x2AD4789CBFD829EC(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x49876BF356F39E66(*uParam0, 0);
			}
		}
		unk_0xEB7C3FF98F454165(uParam0);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (unk_0xD42BD6EB2E0F1677(*uParam0))
	{
		if (unk_0xC841153DED2CA89A(*uParam0))
		{
			unk_0x64CDE9D6BF8ECAD3(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x0AD8BB0ADAFEDEE5(uParam0);
		}
		else
		{
			unk_0x2FF919702D2464F3(*uParam0);
		}
	}
}

