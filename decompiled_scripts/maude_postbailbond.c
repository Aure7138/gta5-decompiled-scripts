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
	var uLocal_34 = 0;
	struct<4> Local_35[10];
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
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
	iLocal_83 = -1;
	iLocal_84 = -1;
	if (unk_0x7547D7CF93115D6D(19))
	{
		func_55();
	}
	if (!func_52())
	{
		func_55();
	}
	if (!func_51(uLocal_80))
	{
		func_55();
	}
	else
	{
		func_50();
		iLocal_81 = unk_0xF976C624234A4AA8();
		iLocal_83 = func_49();
		iLocal_82 = 0;
		func_48(1, &uLocal_86);
	}
	while (true)
	{
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			if (!func_51(uLocal_80))
			{
				func_55();
			}
			Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
			Var3 = { unk_0xBF1B13057E5119A4(uLocal_80, 1) };
			if (unk_0xB7A628320EFF8E47(Var0, Var3) >= (100f * 100f))
			{
				func_55();
			}
			switch (iLocal_85)
			{
				case 0:
					func_43(Var3, Var0, 18000, 1101004800);
					if (func_25(&iLocal_80, 0))
					{
						func_24();
						func_16(0);
						func_12(Var3, Var0);
						unk_0x395C5D98343F0040(func_11());
						iLocal_85 = 1;
					}
					break;
				
				case 1:
					if (func_5(&iLocal_80, &uLocal_77, &iLocal_84))
					{
						iLocal_85 = 2;
					}
					break;
				
				case 2:
					if (!func_4(iLocal_80, 1805844857) && !unk_0x1BA961C8CF14F399(iLocal_80))
					{
						if (!unk_0x22605DE2E6933CF2(iLocal_80, func_11(), func_3(), 3))
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
	if (func_51(iLocal_80))
	{
		func_2(&iLocal_80);
		unk_0xA859D289EEB2D72A(iLocal_80, unk_0x507DA4994C3D8EBD(), 10000f, -1, 0, 0);
		unk_0xA1E4BA3B17C6D931(iLocal_80, 1);
	}
}

void func_2(var uParam0)
{
	if (func_51(*uParam0))
	{
		unk_0xB2B080B88A4144B7(*uParam0, 2, 0);
		unk_0xB2B080B88A4144B7(*uParam0, 64, 0);
		unk_0xB2B080B88A4144B7(*uParam0, 128, 0);
		unk_0xB2B080B88A4144B7(*uParam0, 8, 0);
		unk_0xB2B080B88A4144B7(*uParam0, 1, 0);
		unk_0xB2B080B88A4144B7(*uParam0, 32, 0);
		unk_0x3A1E687904400847(*uParam0, 5, 0);
		unk_0x3A1E687904400847(*uParam0, 17, 1);
		unk_0x7FEDD088E489CE41(*uParam0, 118, 1);
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
		if (unk_0xEC043AB2FEE0E94F(uParam0, iParam1) == 1 || unk_0xEC043AB2FEE0E94F(uParam0, iParam1) == 0)
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
		if (unk_0x22605DE2E6933CF2(*uParam0, func_10(), func_9(), 3))
		{
			if (!unk_0x1983DA3C921BB046(*uParam0) || unk_0x08D60CA9F677F4AD(*uParam0))
			{
				unk_0x395C5D98343F0040(func_11());
				if (unk_0xCE40391AB65FE305(func_11()))
				{
					*iParam2 = unk_0x1BEDF9ACAEAB15F8(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0x15B365C4645F79B8(*iParam2, 0);
					unk_0x36069312B76436F6(*iParam2, 0);
					if (func_4(*uParam0, 1785177548))
					{
						unk_0x520A583BA5E4F9A7(*uParam0, -1000f, 1);
					}
					unk_0x206610E40EE4D7D9(*uParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0x243553B40CC46CFE(*uParam0, 0, 0);
					if (func_8(*uParam1))
					{
						if (unk_0x22605DE2E6933CF2(*uParam1, func_10(), func_7(), 3))
						{
							unk_0x520A583BA5E4F9A7(*uParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0x763BBCB2253879B8(*uParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
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
	if (unk_0xFD68187442384158(iParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
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
	if (func_51(iLocal_80))
	{
		if (!unk_0x135ED76D25C24E67(iLocal_80))
		{
			if (unk_0xB7A628320EFF8E47(Param3, Param0) < (35f * 35f))
			{
				func_13(&iLocal_80, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	bool bVar0;
	
	if (func_51(*uParam0))
	{
		bVar0 = unk_0x6A55A66588AE4BE7(*uParam0);
		if (bVar0)
		{
			unk_0x5466EB7A3FD9AFF0(*uParam0, 0);
		}
		func_14(*uParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			unk_0x5466EB7A3FD9AFF0(*uParam0, 1);
		}
	}
}

void func_14(var uParam0, var uParam1, var uParam2, int iParam3)
{
	unk_0xD5197208E9370D3D(uParam0, uParam1, uParam2, func_15(iParam3), 0);
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
		if (unk_0xA858564DC37EED5E(&Var0, uVar6))
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
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(0);
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
	if (unk_0xF611D1BB58990143())
	{
		unk_0xA2A4AD85BA2F7ADD();
		Global_16703 = 0;
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

char* func_21()
{
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_28108, 3))
	{
		return "BB4_loiter";
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_28108, 2))
	{
		return "BB3_loiter";
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_28108, 1))
	{
		return "BB2_loiter";
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_28108, 0))
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
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	if (unk_0xFD68187442384158(uLocal_79))
	{
		unk_0x479E7EEEBDEE245D(iLocal_79, 0);
	}
	if (unk_0xFD68187442384158(uLocal_78))
	{
		unk_0x479E7EEEBDEE245D(iLocal_78, 0);
	}
}

int func_25(var uParam0, bool bParam1)
{
	if (func_51(*uParam0))
	{
		if ((unk_0x06B91ED8EB0DE484(*uParam0) || unk_0x087F7B968CB47182(*uParam0)) || unk_0x43827D6447B61FA0(*uParam0))
		{
			return 1;
		}
		if (unk_0x2E177F2B797A4A34(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), *uParam0))
			{
				return 1;
			}
			if (unk_0xFD68187442384158(uLocal_77))
			{
				if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), iLocal_77))
				{
					return 1;
				}
			}
			if (unk_0xFD68187442384158(iLocal_78))
			{
				if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), iLocal_78))
				{
					return 1;
				}
			}
			if (unk_0xFD68187442384158(iLocal_79))
			{
				if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), iLocal_79))
				{
					return 1;
				}
			}
		}
		if (unk_0x22E454ACC745B58C(*uParam0, 60))
		{
			return 1;
		}
		if (unk_0x1983DA3C921BB046(*uParam0))
		{
			if (unk_0x2F406E91B59DB558(*uParam0, unk_0x507DA4994C3D8EBD(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0x22E454ACC745B58C(*uParam0, 50))
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
		if (unk_0x6588804F7BCB1101(-1, unk_0xBF1B13057E5119A4(*uParam0, 1), 15f))
		{
			return 1;
		}
		if (unk_0x22E454ACC745B58C(*uParam0, 72))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0))
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
	if (func_8(unk_0x507DA4994C3D8EBD()) && func_8(iParam0))
	{
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar2, 1);
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
			if (unk_0xB6CDBC1E2904184A(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0x0982F2F40B035E77(unk_0xBF1B13057E5119A4(iParam0, 1), fVar0, 1))
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
	
	Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x7EA638DAA99BFE28(unk_0xBF1B13057E5119A4(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x7EA638DAA99BFE28(unk_0xBF1B13057E5119A4(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x7EA638DAA99BFE28(unk_0xBF1B13057E5119A4(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x7EA638DAA99BFE28(unk_0xBF1B13057E5119A4(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
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
		if (unk_0xEE93FF4158B54B09(Var0, Var3, 1))
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
	
	if ((((unk_0x2409FBDFB6F61EB8(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x2409FBDFB6F61EB8(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x2409FBDFB6F61EB8(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x2409FBDFB6F61EB8(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x2409FBDFB6F61EB8(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
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
	
	Var0 = { func_31(Param1 - unk_0xBF1B13057E5119A4(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xF260FCBA09D07146(iParam0) };
	}
	else
	{
		Var3 = { func_31(unk_0xC5B1818639240D24(iParam0, 31086, 0f, 5f, 0f) - unk_0xC5B1818639240D24(iParam0, 31086, 0f, 0f, 0f)) };
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
		if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x0982F2F40B035E77(unk_0xBF1B13057E5119A4(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_8(unk_0x507DA4994C3D8EBD()) && func_8(iParam0))
	{
		if (func_42(iParam0) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iParam0))
		{
			if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
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
	return func_35(iParam0, unk_0x507DA4994C3D8EBD(), fParam1, 1, 250, 7);
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
			func_40(&(Local_35[iVar4 /*4*/]));
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
		Local_35[iVar4 /*4*/].f_1 = iParam0;
		Local_35[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0xC5B1818639240D24(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_35[iVar4 /*4*/]), Var1, iParam1, &(Local_35[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xF976C624234A4AA8() - Local_35[iVar4 /*4*/].f_3) < iParam4);
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
		*uParam0 = unk_0x9400A3EC34709233(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xBFABF77FCEA8BA3F(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x91F594068DF4424F(iVar7))
	{
		func_8(iVar7);
		if (unk_0x274BAC44978F9161(iVar7) == iParam4)
		{
			if (bLocal_76)
			{
				unk_0x05F8C0F598573E93(Param1, unk_0xBF1B13057E5119A4(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0xF976C624234A4AA8();
			return 1;
		}
		return 0;
	}
	if (unk_0x1BA544973A67E699(iVar7))
	{
		func_8(iVar7);
		if (unk_0x2A24448FF232F834(iParam4, 0))
		{
			if (unk_0x379620F9B34A512B(iVar7) == unk_0x78AB10B64129B3D5(iParam4, 0))
			{
				if (bLocal_76)
				{
					unk_0x05F8C0F598573E93(Param1, unk_0xBF1B13057E5119A4(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0xF976C624234A4AA8();
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
		iVar0 = unk_0x4D3E68F73B727E49(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xBF1B13057E5119A4(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xC5B1818639240D24(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xC5B1818639240D24(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xC5B1818639240D24(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xC5B1818639240D24(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xC5B1818639240D24(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xC5B1818639240D24(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xBF1B13057E5119A4(iParam0, 1);
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_35.f_0)
	{
		if ((Local_35[iVar0 /*4*/] == 0 && Local_35[iVar0 /*4*/].f_1 == 0) && Local_35[iVar0 /*4*/].f_2 == 0)
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
	
	Var0 = { func_31(unk_0xBF1B13057E5119A4(iParam1, 1) - unk_0xBF1B13057E5119A4(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xF260FCBA09D07146(iParam0) };
	}
	else
	{
		Var3 = { func_31(unk_0xC5B1818639240D24(iParam0, 31086, 0f, 5f, 0f) - unk_0xC5B1818639240D24(iParam0, 31086, 0f, 0f, 0f)) };
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
	while (iVar0 < Local_35.f_0)
	{
		if (Local_35[iVar0 /*4*/].f_1 == iParam0 && Local_35[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(var uParam0)
{
	if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), uParam0) && unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
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
	
	if (iLocal_82 < iLocal_83)
	{
		if (!func_23())
		{
			if (unk_0xB7A628320EFF8E47(Param3, Param0) < (fParam7 * fParam7))
			{
				if (unk_0xF976C624234A4AA8() - iLocal_81) > (iParam6 + unk_0x4D3E68F73B727E49(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_80, "MAUDE", 0, 1);
					cVar165 = func_46();
					sVar166 = func_21();
					func_44(&uVar0, cVar165, sVar166, 7, 0, 0);
					iLocal_81 = unk_0xF976C624234A4AA8();
					iLocal_82++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_81 = unk_0xF976C624234A4AA8();
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
	unk_0x3DBE2A7AF9E71C82(&Global_14558, 0);
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
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_28108, 3))
	{
		return "BB4AUD";
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_28108, 2))
	{
		return "BB3AUD";
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_28108, 1))
	{
		return "BB2AUD";
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_28108, 0))
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
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
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
		*uParam1 = unk_0x92832F671263F8E0(Var0, Var3, 0, 1, 1, 1);
		unk_0xE833E73A4C46A088(Var0, Var3);
		unk_0xC198E0954F22A27D(Var0, Var3, 0, 1);
		unk_0xFF2066264E0F3BD4(Var0, Var3);
		unk_0xE0988F7BD7BD3889(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0, 1);
		unk_0x4BCBC9058A5CECE1(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else
	{
		unk_0x1D6153ECFEB26B2A(*uParam1, 0);
		unk_0x8956FD662264693F();
		unk_0xC198E0954F22A27D(Var0, Var3, 1, 1);
		unk_0x9A76FCB3181D8AAB(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

int func_49()
{
	if (unk_0x61D8FEAF64881CDA(Global_97173.f_28108, 3))
	{
		return 4;
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_28108, 2))
	{
		return 4;
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_28108, 1))
	{
		return 4;
	}
	else if (unk_0x61D8FEAF64881CDA(Global_97173.f_28108, 0))
	{
		return 3;
	}
	return 4;
}

void func_50()
{
	struct<3> Var0;
	
	if (func_51(iLocal_80))
	{
		if (!unk_0x73E2404DC70203CD(iLocal_80))
		{
			unk_0xBAE5DF507EEC53C8(iLocal_80, 1, 0);
		}
		unk_0x2DC5B31EBB810396(iLocal_80, 1);
		unk_0xFBF796BC19E6FC23(iLocal_80, 0);
		unk_0x6A750A31D18DA81A(iLocal_80, 0);
		unk_0xE440546F94B26235(iLocal_80, joaat("player"));
		unk_0x22FBA3B6C028D989(iLocal_80, 0);
		unk_0xAF5129FECA4F2FB3(iLocal_80, 0);
		unk_0x7FEDD088E489CE41(iLocal_80, 118, 0);
		Var0 = { 2728.33f, 4145.6f, 43.89f };
		if (unk_0x93EADDF7E52E1671(Var0, 10f, joaat("prop_table_03b"), 0))
		{
			iLocal_78 = unk_0x78608A3628DF265E(Var0, 10f, joaat("prop_table_03b"), 1, 0, 1);
			if (func_8(iLocal_78))
			{
				unk_0xF85858E5CBF4D9F0(iLocal_78, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(iLocal_78, -92.17f);
				unk_0x479E7EEEBDEE245D(iLocal_78, 1);
			}
		}
		if (unk_0x93EADDF7E52E1671(Var0, 10f, joaat("prop_laptop_01a"), 0))
		{
			iLocal_79 = unk_0x78608A3628DF265E(Var0, 10f, joaat("prop_laptop_01a"), 0, 0, 1);
			if (func_8(iLocal_79))
			{
				if (!unk_0x73E2404DC70203CD(iLocal_79))
				{
					unk_0xBAE5DF507EEC53C8(iLocal_79, 1, 0);
				}
				unk_0xF85858E5CBF4D9F0(iLocal_79, 2727.686f, 4145.715f, 44.08f, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(iLocal_79, 71f);
				unk_0x479E7EEEBDEE245D(iLocal_79, 1);
			}
		}
		if (unk_0x93EADDF7E52E1671(Var0, 10f, joaat("prop_table_03_chr"), 0))
		{
			iLocal_77 = unk_0x78608A3628DF265E(Var0, 10f, joaat("prop_table_03_chr"), 0, 0, 1);
			if (func_8(iLocal_77))
			{
				if (!unk_0x73E2404DC70203CD(iLocal_77))
				{
					unk_0xBAE5DF507EEC53C8(iLocal_77, 1, 0);
				}
				unk_0xF85858E5CBF4D9F0(iLocal_77, 2728.35f, 4145.59f, 43.3f, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(iLocal_77, -91.28f);
			}
		}
	}
}

int func_51(int iParam0)
{
	if (func_8(uParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam0))
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
	
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		iVar0 = unk_0x0C92E7719639C64A(unk_0x507DA4994C3D8EBD(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0x26EA758C2A691D06(uVar2[iVar1]) == func_53(62))
				{
					iLocal_80 = uVar2[iVar1];
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
		return Global_97173.f_29699[iParam0 /*29*/];
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
	func_48(0, &uLocal_86);
	if (func_8(iLocal_79))
	{
		unk_0x479E7EEEBDEE245D(iLocal_79, 0);
	}
	func_57(&iLocal_79, 0);
	if (func_8(iLocal_78))
	{
		unk_0x479E7EEEBDEE245D(iLocal_78, 0);
	}
	func_57(&iLocal_78, 0);
	if (func_8(iLocal_77))
	{
		unk_0x479E7EEEBDEE245D(iLocal_77, 0);
		if (unk_0x22605DE2E6933CF2(iLocal_77, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x6F5A8AEA65939753(iLocal_77, "base_chair", "special_ped@maude@base", -1000f);
			unk_0x520A583BA5E4F9A7(iLocal_77, -1000f, 1);
		}
		else if (unk_0x22605DE2E6933CF2(iLocal_77, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x6F5A8AEA65939753(iLocal_77, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0x520A583BA5E4F9A7(iLocal_77, -1000f, 1);
		}
	}
	func_57(&iLocal_77, 0);
	if (func_51(iLocal_80))
	{
		unk_0xA1E4BA3B17C6D931(iLocal_80, 1);
		unk_0x7FEDD088E489CE41(iLocal_80, 118, 1);
	}
	func_56(&iLocal_80, 1, 0, 1);
	unk_0xA878656BC39BBC51(func_11());
	unk_0x883793591E631A3B();
}

void func_56(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(*uParam0))
		{
			unk_0x3C2614E45AB2F499(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x1E61DAA6A0EEC652(*uParam0);
			}
			unk_0xA1E4BA3B17C6D931(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2DC5B31EBB810396(*uParam0, 0);
			}
		}
		unk_0xCA4DD92F1F2931F3(uParam0);
	}
}

void func_57(var uParam0, bool bParam1)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (unk_0x42B70344077B22B9(*uParam0))
		{
			unk_0x5B97F41A7BE54877(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x05DADA1340CBB893(uParam0);
		}
		else
		{
			unk_0x0D693FF0257B8CE4(*uParam0);
		}
	}
}

