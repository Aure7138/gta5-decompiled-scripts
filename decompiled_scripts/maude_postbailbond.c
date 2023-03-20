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
	if (unk_0x9CEB376419A71A96(19))
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
		iLocal_83 = unk_0x1ADBAAC322D61F73();
		iLocal_85 = func_49();
		iLocal_84 = 0;
		func_48(1, &uLocal_88);
	}
	while (true)
	{
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			if (!func_51(uLocal_82))
			{
				func_55();
			}
			Var0 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
			Var3 = { unk_0xF4745590D18D14B8(uLocal_82, 1) };
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
						unk_0x198E497B820DA913(func_11());
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
					if (!func_4(iLocal_82, 1805844857) && !unk_0x0DA2000F5C8A8ECC(iLocal_82))
					{
						if (!unk_0x46E9388908C80483(iLocal_82, func_11(), func_3(), 3))
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
		unk_0xFEDD46326A41DB46(iLocal_82, unk_0x06736567F820A39E(), 10000f, -1, 0, 0);
		unk_0x97C5D2BB8E47131D(iLocal_82, 1);
	}
}

void func_2(var uParam0)
{
	if (func_51(*uParam0))
	{
		unk_0x6E2532A21AB2C125(*uParam0, 2, 0);
		unk_0x6E2532A21AB2C125(*uParam0, 64, 0);
		unk_0x6E2532A21AB2C125(*uParam0, 128, 0);
		unk_0x6E2532A21AB2C125(*uParam0, 8, 0);
		unk_0x6E2532A21AB2C125(*uParam0, 1, 0);
		unk_0x6E2532A21AB2C125(*uParam0, 32, 0);
		unk_0xD14E5ED9D5665519(*uParam0, 5, 0);
		unk_0xD14E5ED9D5665519(*uParam0, 17, 1);
		unk_0x6553935614875699(*uParam0, 118, 1);
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
		if (unk_0xFB900D9EE2ACC400(uParam0, iParam1) == 1 || unk_0xFB900D9EE2ACC400(uParam0, iParam1) == 0)
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
		if (unk_0x46E9388908C80483(*uParam0, func_10(), func_9(), 3))
		{
			if (!unk_0x9C4162CAC2B459EC(*uParam0) || unk_0x1514DF028FBE7449(*uParam0))
			{
				unk_0x198E497B820DA913(func_11());
				if (unk_0x7B43775D6E0D7325(func_11()))
				{
					*iParam2 = unk_0x70D62E1C98FBC411(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0x58E3D20EAF3A6C20(*iParam2, 0);
					unk_0xF0B400EA537067E0(*iParam2, 0);
					if (func_4(*uParam0, 1785177548))
					{
						unk_0xC1DCFD0B8D2E4221(*uParam0, -1000f, 1);
					}
					unk_0x13F17EF7A260536D(*uParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0xA9FA4149DF18912C(*uParam0, 0, 0);
					if (func_8(*uParam1))
					{
						if (unk_0x46E9388908C80483(*uParam1, func_10(), func_7(), 3))
						{
							unk_0xC1DCFD0B8D2E4221(*uParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0xD7C7DFD321D78CCA(*uParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
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
	if (unk_0xC1EDB61CE0A4B94E(iParam0))
	{
		if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
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
		if (!unk_0x5CB2DFF52F4D972D(iLocal_82))
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
		bVar0 = unk_0x7A3E44425AE7A4AB(*uParam0);
		if (bVar0)
		{
			unk_0x66ADFA638E00731E(*uParam0, 0);
		}
		func_14(*uParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			unk_0x66ADFA638E00731E(*uParam0, 1);
		}
	}
}

void func_14(var uParam0, var uParam1, var uParam2, int iParam3)
{
	unk_0x00BD2542D40FB0C9(uParam0, uParam1, uParam2, func_15(iParam3), 0);
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
		if (unk_0x2F6869889D97DFED(&Var0, uVar6))
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
	Global_14578 = 0;
	func_18();
}

void func_18()
{
	unk_0x0F9FE213495D2609();
	Global_16723 = 0;
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0xC48487554D051523(0);
		Global_15712 = 6;
	}
}

void func_19()
{
	Global_14578 = 0;
	func_20();
}

void func_20()
{
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0x0F9FE213495D2609();
		Global_16723 = 0;
		unk_0xC48487554D051523(1);
		Global_15712 = 6;
		return;
	}
}

char* func_21()
{
	if (unk_0x7DA173D4FD42F36B(Global_101186.f_29587, 3))
	{
		return "BB4_loiter";
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101186.f_29587, 2))
	{
		return "BB3_loiter";
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101186.f_29587, 1))
	{
		return "BB2_loiter";
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101186.f_29587, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

int func_23()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	if (unk_0xC1EDB61CE0A4B94E(uLocal_81))
	{
		unk_0x93F4FB97D1F2E7A1(iLocal_81, 0);
	}
	if (unk_0xC1EDB61CE0A4B94E(uLocal_80))
	{
		unk_0x93F4FB97D1F2E7A1(iLocal_80, 0);
	}
}

int func_25(var uParam0, bool bParam1)
{
	if (func_51(*uParam0))
	{
		if ((unk_0xA14561E9EE07759B(*uParam0) || unk_0xCCC1EF74C8029770(*uParam0)) || unk_0x742804C434C92427(*uParam0))
		{
			return 1;
		}
		if (unk_0x7A6749CADAC50206(unk_0x06736567F820A39E()))
		{
			if (unk_0x0280B42925DCFDEC(unk_0x06736567F820A39E(), *uParam0))
			{
				return 1;
			}
			if (unk_0xC1EDB61CE0A4B94E(uLocal_79))
			{
				if (unk_0x0280B42925DCFDEC(unk_0x06736567F820A39E(), iLocal_79))
				{
					return 1;
				}
			}
			if (unk_0xC1EDB61CE0A4B94E(iLocal_80))
			{
				if (unk_0x0280B42925DCFDEC(unk_0x06736567F820A39E(), iLocal_80))
				{
					return 1;
				}
			}
			if (unk_0xC1EDB61CE0A4B94E(iLocal_81))
			{
				if (unk_0x0280B42925DCFDEC(unk_0x06736567F820A39E(), iLocal_81))
				{
					return 1;
				}
			}
		}
		if (unk_0x4919502E298C3B50(*uParam0, 60))
		{
			return 1;
		}
		if (unk_0x9C4162CAC2B459EC(*uParam0))
		{
			if (unk_0x53B456945AE5C7DE(*uParam0, unk_0x06736567F820A39E(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0x4919502E298C3B50(*uParam0, 50))
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
		if (unk_0x3A55B6AA596FF586(-1, unk_0xF4745590D18D14B8(*uParam0, 1), 15f))
		{
			return 1;
		}
		if (unk_0x4919502E298C3B50(*uParam0, 72))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0xAA2F2E1D7A88C64E(unk_0xE0BDAFA1A39552D6(), 0))
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
	if (func_8(unk_0x06736567F820A39E()) && func_8(iParam0))
	{
		unk_0x47BF380FF078FA9F(unk_0x06736567F820A39E(), &iVar2, 1);
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
			if (unk_0x82D364243A5848A1(unk_0x06736567F820A39E()))
			{
				if (unk_0x98D424FE7497139D(unk_0x06736567F820A39E()))
				{
					if (unk_0xDECA6CE314913AC1(unk_0xF4745590D18D14B8(iParam0, 1), fVar0, 1))
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
	
	Var0 = { unk_0xF4745590D18D14B8(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x9BF2CF8F84C73E12(unk_0xF4745590D18D14B8(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x9BF2CF8F84C73E12(unk_0xF4745590D18D14B8(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x9BF2CF8F84C73E12(unk_0xF4745590D18D14B8(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x9BF2CF8F84C73E12(unk_0xF4745590D18D14B8(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
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
		if (unk_0x8CE40F22CEFDEA99(Var0, Var3, 1))
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
	
	if ((((unk_0xF35A6559ED6A44AB(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xF35A6559ED6A44AB(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xF35A6559ED6A44AB(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xF35A6559ED6A44AB(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xF35A6559ED6A44AB(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
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
	
	Var0 = { func_31(Param1 - unk_0xF4745590D18D14B8(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x1210C9F87A32AFD5(iParam0) };
	}
	else
	{
		Var3 = { func_31(unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 5f, 0f) - unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 0f, 0f)) };
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
		if (unk_0x98D424FE7497139D(unk_0x06736567F820A39E()))
		{
			if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xDECA6CE314913AC1(unk_0xF4745590D18D14B8(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_8(unk_0x06736567F820A39E()) && func_8(iParam0))
	{
		if (func_42(iParam0) || unk_0x225B26AE60B121A0(unk_0xE0BDAFA1A39552D6(), iParam0))
		{
			if (unk_0x09AED05FAA64E81C(unk_0x06736567F820A39E(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x53B456945AE5C7DE(unk_0x06736567F820A39E(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
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
	return func_35(iParam0, unk_0x06736567F820A39E(), fParam1, 1, 250, 7);
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
	Var1 = { unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1ADBAAC322D61F73() - Local_37[iVar4 /*4*/].f_3) < iParam4);
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
		*uParam0 = unk_0x290E65F6C850B833(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x31BBF34543BA157F(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x77CB3F400804EDD1(iVar7))
	{
		func_8(iVar7);
		if (unk_0x406B8F450D0105AB(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0x7906A03DA17FC0A2(Param1, unk_0xF4745590D18D14B8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x1ADBAAC322D61F73();
			return 1;
		}
		return 0;
	}
	if (unk_0xFCBEC4C2079B0872(iVar7))
	{
		func_8(iVar7);
		if (unk_0x0FDFEC0DD29106EE(iParam4, 0))
		{
			if (unk_0x43AB2E726FCE3BF7(iVar7) == unk_0x34E1EF1E8BCD1BFC(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0x7906A03DA17FC0A2(Param1, unk_0xF4745590D18D14B8(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x1ADBAAC322D61F73();
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
		iVar0 = unk_0xA6055C735E3DD877(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xF4745590D18D14B8(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xB90C4C04BACF96A1(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xF4745590D18D14B8(iParam0, 1);
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
	
	Var0 = { func_31(unk_0xF4745590D18D14B8(iParam1, 1) - unk_0xF4745590D18D14B8(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x1210C9F87A32AFD5(iParam0) };
	}
	else
	{
		Var3 = { func_31(unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 5f, 0f) - unk_0xB90C4C04BACF96A1(iParam0, 31086, 0f, 0f, 0f)) };
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
	if (unk_0x1D7CB59C357D17AB(unk_0xE0BDAFA1A39552D6(), uParam0) && unk_0x09AED05FAA64E81C(unk_0x06736567F820A39E(), 6))
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
				if (unk_0x1ADBAAC322D61F73() - iLocal_83) > (iParam6 + unk_0xA6055C735E3DD877(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_82, "MAUDE", 0, 1);
					cVar165 = func_46();
					sVar166 = func_21();
					func_44(&uVar0, cVar165, sVar166, 7, 0, 0);
					iLocal_83 = unk_0x1ADBAAC322D61F73();
					iLocal_84++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_83 = unk_0x1ADBAAC322D61F73();
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
	unk_0xE27C8E42A97895CF(&Global_14578, 0);
	Global_15715 = iParam3;
	StringCopy(&Global_15702, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

char* func_46()
{
	if (unk_0x7DA173D4FD42F36B(Global_101186.f_29587, 3))
	{
		return "BB4AUD";
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101186.f_29587, 2))
	{
		return "BB3AUD";
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101186.f_29587, 1))
	{
		return "BB2AUD";
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101186.f_29587, 0))
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
	if (!Global_69521)
	{
		if (!unk_0xCFC04A38F256EE06(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 0);
			}
			else
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 1);
			}
		}
		if (!unk_0xCFC04A38F256EE06(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5E0FA44E176DE736(iParam2, 0);
			}
			else
			{
				unk_0x5E0FA44E176DE736(iParam2, 1);
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
		*uParam1 = unk_0x33189531E55C7E33(Var0, Var3, 0, 1, 1, 1);
		unk_0xAAA48D4004763482(Var0, Var3);
		unk_0x41BBA77D020A0CEB(Var0, Var3, 0, 1);
		unk_0x2A5A7A67155CA694(Var0, Var3, 0);
		unk_0xD0AB55C45DC575B3(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0, 1);
		unk_0x79D9EC458879E8B8(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else
	{
		unk_0x8659A4920DA95096(*uParam1, 0);
		unk_0xFD97B3F2D9A2559A();
		unk_0x41BBA77D020A0CEB(Var0, Var3, 1, 1);
		unk_0x68BC92FE5E41018D(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

int func_49()
{
	if (unk_0x7DA173D4FD42F36B(Global_101186.f_29587, 3))
	{
		return 4;
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101186.f_29587, 2))
	{
		return 4;
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101186.f_29587, 1))
	{
		return 4;
	}
	else if (unk_0x7DA173D4FD42F36B(Global_101186.f_29587, 0))
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
		if (!unk_0xC9A01F9792B3D486(iLocal_82))
		{
			unk_0xB7E6C6AE18F1EDA6(iLocal_82, 1, 0);
		}
		unk_0xBA63517ADBC1E5E3(iLocal_82, 1);
		unk_0x194510CFB3606077(iLocal_82, 0);
		unk_0xA26A1133034ECD59(iLocal_82, 0);
		unk_0xDEA5F99894469373(iLocal_82, joaat("player"));
		unk_0x71DC50BAC450775F(iLocal_82, 0);
		unk_0x54579584D95BFE08(iLocal_82, 0);
		unk_0x6553935614875699(iLocal_82, 118, 0);
		Var0 = { 2728.33f, 4145.6f, 43.89f };
		if (unk_0x9DD14F307389ACD8(Var0, 10f, joaat("prop_table_03b"), 0))
		{
			iLocal_80 = unk_0x8CF711709719C86E(Var0, 10f, joaat("prop_table_03b"), 1, 0, 1);
			if (func_8(iLocal_80))
			{
				unk_0xA9AD2484206C8140(iLocal_80, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
				unk_0xEF32567B3A5047F5(iLocal_80, -92.17f);
				unk_0x93F4FB97D1F2E7A1(iLocal_80, 1);
			}
		}
		if (unk_0x9DD14F307389ACD8(Var0, 10f, joaat("prop_laptop_01a"), 0))
		{
			iLocal_81 = unk_0x8CF711709719C86E(Var0, 10f, joaat("prop_laptop_01a"), 0, 0, 1);
			if (func_8(iLocal_81))
			{
				if (!unk_0xC9A01F9792B3D486(iLocal_81))
				{
					unk_0xB7E6C6AE18F1EDA6(iLocal_81, 1, 0);
				}
				unk_0xA9AD2484206C8140(iLocal_81, 2727.686f, 4145.715f, 44.08f, 1, 0, 0, 1);
				unk_0xEF32567B3A5047F5(iLocal_81, 71f);
				unk_0x93F4FB97D1F2E7A1(iLocal_81, 1);
			}
		}
		if (unk_0x9DD14F307389ACD8(Var0, 10f, joaat("prop_table_03_chr"), 0))
		{
			iLocal_79 = unk_0x8CF711709719C86E(Var0, 10f, joaat("prop_table_03_chr"), 0, 0, 1);
			if (func_8(iLocal_79))
			{
				if (!unk_0xC9A01F9792B3D486(iLocal_79))
				{
					unk_0xB7E6C6AE18F1EDA6(iLocal_79, 1, 0);
				}
				unk_0xA9AD2484206C8140(iLocal_79, 2728.35f, 4145.59f, 43.3f, 1, 0, 0, 1);
				unk_0xEF32567B3A5047F5(iLocal_79, -91.28f);
			}
		}
	}
}

int func_51(int iParam0)
{
	if (func_8(uParam0))
	{
		if (!unk_0xCFC04A38F256EE06(uParam0))
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
	
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		iVar0 = unk_0x8DB7EA2D75DA4B59(unk_0x06736567F820A39E(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0x79469DA5833EACA8(uVar2[iVar1]) == func_53(62))
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
		return Global_101186.f_32651[iParam0 /*29*/];
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
		unk_0x93F4FB97D1F2E7A1(iLocal_81, 0);
	}
	func_57(&iLocal_81, 0);
	if (func_8(iLocal_80))
	{
		unk_0x93F4FB97D1F2E7A1(iLocal_80, 0);
	}
	func_57(&iLocal_80, 0);
	if (func_8(iLocal_79))
	{
		unk_0x93F4FB97D1F2E7A1(iLocal_79, 0);
		if (unk_0x46E9388908C80483(iLocal_79, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x5A847D74F5D84B36(iLocal_79, "base_chair", "special_ped@maude@base", -1000f);
			unk_0xC1DCFD0B8D2E4221(iLocal_79, -1000f, 1);
		}
		else if (unk_0x46E9388908C80483(iLocal_79, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x5A847D74F5D84B36(iLocal_79, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0xC1DCFD0B8D2E4221(iLocal_79, -1000f, 1);
		}
	}
	func_57(&iLocal_79, 0);
	if (func_51(iLocal_82))
	{
		unk_0x97C5D2BB8E47131D(iLocal_82, 1);
		unk_0x6553935614875699(iLocal_82, 118, 1);
	}
	func_56(&iLocal_82, 1, 0, 1);
	unk_0x6B09668CBB188BED(func_11());
	unk_0xF5DF8F3392CDD07B();
}

void func_56(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		if (!unk_0xCFC04A38F256EE06(*uParam0))
		{
			unk_0x215FFA3EE011BA3C(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xFB31564A849CEAF4(*uParam0);
			}
			unk_0x97C5D2BB8E47131D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xBA63517ADBC1E5E3(*uParam0, 0);
			}
		}
		unk_0x5318F6C4C2B82FA7(uParam0);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(*uParam0))
	{
		if (unk_0xCC30869D6AB6D4ED(*uParam0))
		{
			unk_0xD02CD3284DDA0268(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x61EEBF9B5AB9820D(uParam0);
		}
		else
		{
			unk_0xFFC497D1FB0F3253(*uParam0);
		}
	}
}

