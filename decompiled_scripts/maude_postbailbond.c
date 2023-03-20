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
	if (unk_0x8D841F1DD3FA555F(19))
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
		iLocal_82 = unk_0x48E480685981C7D4();
		iLocal_84 = func_49();
		iLocal_83 = 0;
		func_48(1, &uLocal_87);
	}
	while (true)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (!func_51(uLocal_81))
			{
				func_55();
			}
			Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			Var3 = { unk_0xB6AE0DAE06D56288(uLocal_81, 1) };
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
						unk_0x295DC04FC13E025B(func_11());
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
					if (!func_4(iLocal_81, 1805844857) && !unk_0x5EF53977B76418E5(iLocal_81))
					{
						if (!unk_0x0BAE7BE122182FA8(iLocal_81, func_11(), func_3(), 3))
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
		unk_0x754376E2234CBB4A(iLocal_81, unk_0x81873881071CD9FE(), 10000f, -1, 0, 0);
		unk_0x6CB332CB31E9FA96(iLocal_81, 1);
	}
}

void func_2(var uParam0)
{
	if (func_51(*uParam0))
	{
		unk_0x7F5F0D37173E518C(*uParam0, 2, 0);
		unk_0x7F5F0D37173E518C(*uParam0, 64, 0);
		unk_0x7F5F0D37173E518C(*uParam0, 128, 0);
		unk_0x7F5F0D37173E518C(*uParam0, 8, 0);
		unk_0x7F5F0D37173E518C(*uParam0, 1, 0);
		unk_0x7F5F0D37173E518C(*uParam0, 32, 0);
		unk_0x4B9FA68A3AC8C29D(*uParam0, 5, 0);
		unk_0x4B9FA68A3AC8C29D(*uParam0, 17, 1);
		unk_0xCE566DBDCACD245E(*uParam0, 118, 1);
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
		if (unk_0xFA1212DE7C455679(uParam0, iParam1) == 1 || unk_0xFA1212DE7C455679(uParam0, iParam1) == 0)
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
		if (unk_0x0BAE7BE122182FA8(*uParam0, func_10(), func_9(), 3))
		{
			if (!unk_0xD81BC0FD4D47CC04(*uParam0) || unk_0xEE6F2DE3DB966195(*uParam0))
			{
				unk_0x295DC04FC13E025B(func_11());
				if (unk_0x8E8B546E1A81D27F(func_11()))
				{
					*iParam2 = unk_0x59C061A719024602(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0xFD9AE4CEB0ED9DDF(*iParam2, 0);
					unk_0xC64A07C5C44EA267(*iParam2, 0);
					if (func_4(*uParam0, 1785177548))
					{
						unk_0x80E0D9AA3C331C9A(*uParam0, -1000f, 1);
					}
					unk_0x58BEA8B2364F8C48(*uParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0x95BE9BA77CA91710(*uParam0, 0, 0);
					if (func_8(*uParam1))
					{
						if (unk_0x0BAE7BE122182FA8(*uParam1, func_10(), func_7(), 3))
						{
							unk_0x80E0D9AA3C331C9A(*uParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0x0F5BEB6747CF25B4(*uParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
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
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
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
		if (!unk_0x3315DD7601B4423B(iLocal_81))
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
		bVar0 = unk_0x62D18762A9133F79(*uParam0);
		if (bVar0)
		{
			unk_0xC9E1121219C75417(*uParam0, 0);
		}
		func_14(*uParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			unk_0xC9E1121219C75417(*uParam0, 1);
		}
	}
}

void func_14(var uParam0, var uParam1, var uParam2, int iParam3)
{
	unk_0x00641949E82961EF(uParam0, uParam1, uParam2, func_15(iParam3), 0);
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
		if (unk_0xD994929E13CC1ED5(&Var0, uVar6))
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
	Global_14559 = 0;
	func_18();
}

void func_18()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

void func_19()
{
	Global_14559 = 0;
	func_20();
}

void func_20()
{
	if (unk_0xE1772957381F609F())
	{
		unk_0xE1BF98267C70D822();
		Global_16704 = 0;
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

char* func_21()
{
	if (unk_0x236D8AD7EE179F46(Global_98931.f_29435, 3))
	{
		return "BB4_loiter";
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_29435, 2))
	{
		return "BB3_loiter";
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_29435, 1))
	{
		return "BB2_loiter";
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_29435, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		return Global_15312;
	}
	return Var0;
}

int func_23()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	if (unk_0x86CCCD2FAE9D5E65(uLocal_80))
	{
		unk_0xA8F22633ACC22189(iLocal_80, 0);
	}
	if (unk_0x86CCCD2FAE9D5E65(uLocal_79))
	{
		unk_0xA8F22633ACC22189(iLocal_79, 0);
	}
}

int func_25(var uParam0, bool bParam1)
{
	if (func_51(*uParam0))
	{
		if ((unk_0x9862F6ED8C33D271(*uParam0) || unk_0xF20BCEF13A92EC03(*uParam0)) || unk_0xD81B25DF675AF038(*uParam0))
		{
			return 1;
		}
		if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
		{
			if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), *uParam0))
			{
				return 1;
			}
			if (unk_0x86CCCD2FAE9D5E65(uLocal_78))
			{
				if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iLocal_78))
				{
					return 1;
				}
			}
			if (unk_0x86CCCD2FAE9D5E65(iLocal_79))
			{
				if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iLocal_79))
				{
					return 1;
				}
			}
			if (unk_0x86CCCD2FAE9D5E65(iLocal_80))
			{
				if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iLocal_80))
				{
					return 1;
				}
			}
		}
		if (unk_0x63B36DC38706DE79(*uParam0, 60))
		{
			return 1;
		}
		if (unk_0xD81BC0FD4D47CC04(*uParam0))
		{
			if (unk_0x8D28631AAAEFC957(*uParam0, unk_0x81873881071CD9FE(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0x63B36DC38706DE79(*uParam0, 50))
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
		if (unk_0xF46EAA2C25D08B6F(-1, unk_0xB6AE0DAE06D56288(*uParam0, 1), 15f))
		{
			return 1;
		}
		if (unk_0x63B36DC38706DE79(*uParam0, 72))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
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
	if (func_8(unk_0x81873881071CD9FE()) && func_8(iParam0))
	{
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar2, 1);
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
			if (unk_0xC0DEC39E5B9D1886(unk_0x81873881071CD9FE()))
			{
				if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
				{
					if (unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iParam0, 1), fVar0, 1))
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
	
	Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
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
		if (unk_0x6DF2A27FBC647AEC(Var0, Var3, 1))
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
	
	if ((((unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
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
	
	Var0 = { func_31(Param1 - unk_0xB6AE0DAE06D56288(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xC99223BD7E489FC6(iParam0) };
	}
	else
	{
		Var3 = { func_31(unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 5f, 0f) - unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f)) };
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
		if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
		{
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_8(unk_0x81873881071CD9FE()) && func_8(iParam0))
	{
		if (func_42(iParam0) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iParam0))
		{
			if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
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
	return func_35(iParam0, unk_0x81873881071CD9FE(), fParam1, 1, 250, 7);
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
	Var1 = { unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x48E480685981C7D4() - Local_36[iVar4 /*4*/].f_3) < iParam4);
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
		*uParam0 = unk_0x68D61DC7116FF797(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x26CECBCADF60693F(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0xCF0C46D719D5302C(iVar7))
	{
		func_8(iVar7);
		if (unk_0x8F1CCE5AF629C4D3(iVar7) == iParam4)
		{
			if (bLocal_77)
			{
				unk_0xADE6A92F477E3034(Param1, unk_0xB6AE0DAE06D56288(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x48E480685981C7D4();
			return 1;
		}
		return 0;
	}
	if (unk_0xCF8AA94BAD0F766A(iVar7))
	{
		func_8(iVar7);
		if (unk_0xE5AB05962FA1FF3F(iParam4, 0))
		{
			if (unk_0x522C7043B2B961F9(iVar7) == unk_0xE68E6B44DABA9C05(iParam4, 0))
			{
				if (bLocal_77)
				{
					unk_0xADE6A92F477E3034(Param1, unk_0xB6AE0DAE06D56288(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x48E480685981C7D4();
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
		iVar0 = unk_0x2E0A9E3291F398E3(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xB6AE0DAE06D56288(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xB6AE0DAE06D56288(iParam0, 1);
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
	
	Var0 = { func_31(unk_0xB6AE0DAE06D56288(iParam1, 1) - unk_0xB6AE0DAE06D56288(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xC99223BD7E489FC6(iParam0) };
	}
	else
	{
		Var3 = { func_31(unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 5f, 0f) - unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f)) };
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
	if (unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), uParam0) && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
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
				if (unk_0x48E480685981C7D4() - iLocal_82) > (iParam6 + unk_0x2E0A9E3291F398E3(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_81, "MAUDE", 0, 1);
					cVar165 = func_46();
					sVar166 = func_21();
					func_44(&uVar0, cVar165, sVar166, 7, 0, 0);
					iLocal_82 = unk_0x48E480685981C7D4();
					iLocal_83++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_82 = unk_0x48E480685981C7D4();
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
	unk_0xF3148AAF69AF9CBC(&Global_14559, 0);
	Global_15696 = iParam3;
	StringCopy(&Global_15683, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

char* func_46()
{
	if (unk_0x236D8AD7EE179F46(Global_98931.f_29435, 3))
	{
		return "BB4AUD";
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_29435, 2))
	{
		return "BB3AUD";
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_29435, 1))
	{
		return "BB2AUD";
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_29435, 0))
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
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
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
		*uParam1 = unk_0x13705C66F125D98D(Var0, Var3, 0, 1, 1, 1);
		unk_0x536B53396BA193B3(Var0, Var3);
		unk_0x3DD1ED742E99F292(Var0, Var3, 0, 1);
		unk_0x14271BAB2BB24399(Var0, Var3);
		unk_0xEB1F3AEB071C6A9E(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0, 1);
		unk_0x7C6BF0CD5D7454C9(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else
	{
		unk_0xE91F714E010C7127(*uParam1, 0);
		unk_0xB0CC34FB1640F35B();
		unk_0x3DD1ED742E99F292(Var0, Var3, 1, 1);
		unk_0xFEA6E2B6E5CAFC2E(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

int func_49()
{
	if (unk_0x236D8AD7EE179F46(Global_98931.f_29435, 3))
	{
		return 4;
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_29435, 2))
	{
		return 4;
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_29435, 1))
	{
		return 4;
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_29435, 0))
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
		if (!unk_0xE86442941AE40E75(iLocal_81))
		{
			unk_0xD768713E73165208(iLocal_81, 1, 0);
		}
		unk_0x1D15D99A10A15334(iLocal_81, 1);
		unk_0x0CD6B65135C8C3FE(iLocal_81, 0);
		unk_0x33B1E568CEF14B0D(iLocal_81, 0);
		unk_0x506A601663C5417C(iLocal_81, joaat("player"));
		unk_0xD288E3CA159EA98B(iLocal_81, 0);
		unk_0x27849A3ED95FA4CC(iLocal_81, 0);
		unk_0xCE566DBDCACD245E(iLocal_81, 118, 0);
		Var0 = { 2728.33f, 4145.6f, 43.89f };
		if (unk_0x667A6FB4A24C8B47(Var0, 10f, joaat("prop_table_03b"), 0))
		{
			iLocal_79 = unk_0xA0650591A05CB4F6(Var0, 10f, joaat("prop_table_03b"), 1, 0, 1);
			if (func_8(iLocal_79))
			{
				unk_0xB067093BBAF0A747(iLocal_79, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
				unk_0xC24172029826A66F(iLocal_79, -92.17f);
				unk_0xA8F22633ACC22189(iLocal_79, 1);
			}
		}
		if (unk_0x667A6FB4A24C8B47(Var0, 10f, joaat("prop_laptop_01a"), 0))
		{
			iLocal_80 = unk_0xA0650591A05CB4F6(Var0, 10f, joaat("prop_laptop_01a"), 0, 0, 1);
			if (func_8(iLocal_80))
			{
				if (!unk_0xE86442941AE40E75(iLocal_80))
				{
					unk_0xD768713E73165208(iLocal_80, 1, 0);
				}
				unk_0xB067093BBAF0A747(iLocal_80, 2727.686f, 4145.715f, 44.08f, 1, 0, 0, 1);
				unk_0xC24172029826A66F(iLocal_80, 71f);
				unk_0xA8F22633ACC22189(iLocal_80, 1);
			}
		}
		if (unk_0x667A6FB4A24C8B47(Var0, 10f, joaat("prop_table_03_chr"), 0))
		{
			iLocal_78 = unk_0xA0650591A05CB4F6(Var0, 10f, joaat("prop_table_03_chr"), 0, 0, 1);
			if (func_8(iLocal_78))
			{
				if (!unk_0xE86442941AE40E75(iLocal_78))
				{
					unk_0xD768713E73165208(iLocal_78, 1, 0);
				}
				unk_0xB067093BBAF0A747(iLocal_78, 2728.35f, 4145.59f, 43.3f, 1, 0, 0, 1);
				unk_0xC24172029826A66F(iLocal_78, -91.28f);
			}
		}
	}
}

int func_51(int iParam0)
{
	if (func_8(uParam0))
	{
		if (!unk_0x5FEB513A4402FD59(uParam0))
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
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		iVar0 = unk_0x382F30F9319DA363(unk_0x81873881071CD9FE(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0x14B7103DBD149FFE(uVar2[iVar1]) == func_53(62))
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
		return Global_98931.f_32499[iParam0 /*29*/];
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
		unk_0xA8F22633ACC22189(iLocal_80, 0);
	}
	func_57(&iLocal_80, 0);
	if (func_8(iLocal_79))
	{
		unk_0xA8F22633ACC22189(iLocal_79, 0);
	}
	func_57(&iLocal_79, 0);
	if (func_8(iLocal_78))
	{
		unk_0xA8F22633ACC22189(iLocal_78, 0);
		if (unk_0x0BAE7BE122182FA8(iLocal_78, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x2FD752D1D887E49F(iLocal_78, "base_chair", "special_ped@maude@base", -1000f);
			unk_0x80E0D9AA3C331C9A(iLocal_78, -1000f, 1);
		}
		else if (unk_0x0BAE7BE122182FA8(iLocal_78, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x2FD752D1D887E49F(iLocal_78, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0x80E0D9AA3C331C9A(iLocal_78, -1000f, 1);
		}
	}
	func_57(&iLocal_78, 0);
	if (func_51(iLocal_81))
	{
		unk_0x6CB332CB31E9FA96(iLocal_81, 1);
		unk_0xCE566DBDCACD245E(iLocal_81, 118, 1);
	}
	func_56(&iLocal_81, 1, 0, 1);
	unk_0xD8323B49BAE93D80(func_11());
	unk_0xC23A229F78DAD92A();
}

void func_56(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0x5FEB513A4402FD59(*uParam0))
		{
			unk_0x3B7AFF7DCE22C1CF(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x4191220706130B86(*uParam0);
			}
			unk_0x6CB332CB31E9FA96(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x1D15D99A10A15334(*uParam0, 0);
			}
		}
		unk_0x71A8BCA218722FA1(uParam0);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (unk_0xE482770A8B024982(*uParam0))
		{
			unk_0xD88DD5B581458979(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xB5713813CBD9E79F(uParam0);
		}
		else
		{
			unk_0xD196F3B2D5DF4AC3(*uParam0);
		}
	}
}

