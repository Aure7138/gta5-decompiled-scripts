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
	char* sLocal_19 = NULL;
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
	int iLocal_35 = 0;
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
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 8;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 2;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 8;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	struct<20> Local_86 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	struct<3> Local_110 = { 0, 0, 0 } ;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	struct<3> Local_115[32];
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_109 = 40;
	if (unk_0x10FAB35428CCC9D7())
	{
		if (!func_108(ScriptParam_0))
		{
			func_107();
		}
	}
	while (true)
	{
		func_106();
		if (func_97())
		{
			func_107();
		}
		switch (func_96(unk_0xEE68096F9F37341E()))
		{
			case 0:
				if (func_95() == 1)
				{
					if (func_94())
					{
						Local_115[unk_0xEE68096F9F37341E() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_95() == 1)
				{
					func_34();
				}
				else if (func_95() == 3)
				{
					Local_115[unk_0xEE68096F9F37341E() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_107();
				break;
		}
		if (unk_0x83CD99A1E6061AB5())
		{
			switch (func_95())
			{
				case 0:
					if (func_31())
					{
						Global_2441386 = 1;
					}
					break;
				
				case 1:
					if (func_30())
					{
						Global_2441386 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_107();
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	switch (Global_2441386.f_2)
	{
		case 0:
			if (!unk_0xA921AA820C25702F(Global_2441386.f_1, 1))
			{
				func_29(&(Global_2441386.f_60));
				unk_0x933D6A9EEC1BACD0(&(Global_2441386.f_1), 1);
			}
			else if (func_27(&(Global_2441386.f_60), Global_2441386.f_62, 0))
			{
				func_26(1);
				unk_0xE80492A9AC099A93(&(Global_2441386.f_1), 1);
			}
			break;
		
		case 1:
			if (unk_0x10FAB35428CCC9D7())
			{
				iVar0 = 0;
				while (iVar0 < 8)
				{
					iVar1 = iVar0;
					func_25(iVar1, 0f);
					if (!func_24(iVar1))
					{
						if (func_12(func_23(iVar1), func_22(iVar1), func_21(iVar1), 1, 1))
						{
							if (!func_11(iVar1))
							{
								func_25(iVar1, func_10(iVar1));
							}
						}
					}
					iVar0++;
				}
				func_26(3);
			}
			else
			{
				func_26(0);
			}
			break;
		
		case 3:
			Global_2441386.f_3 = -1;
			iVar2 = func_9();
			if (iVar2 != -1)
			{
				Global_2441386.f_3 = { Global_2441386.f_8[iVar2 /*5*/] };
				func_26(4);
			}
			else
			{
				Global_2441386.f_62 = (Global_262145.f_6392 / 2);
				func_26(0);
			}
			break;
		
		case 4:
			switch (func_8(Global_2441386.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2441386.f_3)
					{
						case 1:
							func_6();
							break;
					}
					bVar3 = true;
					if (bVar3)
					{
						if (Global_2441386.f_3 == 1)
						{
							if (unk_0xA921AA820C25702F(Global_2441386.f_1, 4))
							{
								func_26(5);
							}
							else
							{
								func_26(6);
							}
						}
						else
						{
							func_26(6);
						}
					}
					else
					{
						func_25(Global_2441386.f_3, 0f);
						func_26(3);
					}
					break;
				
				case 2:
					func_25(Global_2441386.f_3, 0f);
					func_26(3);
					break;
			}
			break;
		
		case 5:
			if (Global_2441386.f_3 == 1)
			{
				if (unk_0xA921AA820C25702F(Global_2441386.f_1, 4))
				{
					if (!unk_0xA921AA820C25702F(Global_2441386.f_1, 3))
					{
						func_29(&(Global_2441386.f_58));
						unk_0x933D6A9EEC1BACD0(&(Global_2441386.f_1), 3);
					}
					else if (func_27(&(Global_2441386.f_58), (Global_262145.f_44 * 120000), 0))
					{
						unk_0xE80492A9AC099A93(&(Global_2441386.f_1), 3);
						func_26(6);
					}
				}
				else
				{
					func_26(6);
				}
			}
			else
			{
				func_26(6);
			}
			break;
		
		case 6:
			if (Global_2441386.f_3.f_1 == 7)
			{
				func_4(func_5(unk_0x1D6A14F1F9A736FC("AM_IMP_EXP", -1, 0)), 1);
				Global_2446207.f_1547 = 0;
				func_26(7);
				func_3(Global_2441386.f_3);
			}
			else if (unk_0x9D40DF90FAD26098(func_2(Global_2441386.f_3.f_1), -1, false, 0))
			{
				func_26(7);
				func_3(Global_2441386.f_3);
			}
			break;
		
		case 7:
			if (Global_2441386.f_3.f_1 == 7)
			{
				if (Global_2446207.f_1547)
				{
					func_26(8);
					Global_2446207.f_1547 = 0;
				}
			}
			else if (!unk_0x9D40DF90FAD26098(func_2(Global_2441386.f_3.f_1), -1, false, 0))
			{
				func_26(8);
			}
			break;
		
		case 8:
			if (unk_0xA921AA820C25702F(Global_2441386.f_1, 0))
			{
				func_26(0);
				unk_0xE80492A9AC099A93(&(Global_2441386.f_1), 0);
			}
			else
			{
				Global_2441386.f_62 = Global_262145.f_6392;
				Global_2441386.f_8[Global_2441386.f_3 /*5*/].f_4 = 1;
				if (unk_0xA921AA820C25702F(Global_2441386.f_1, 2))
				{
					unk_0xE80492A9AC099A93(&(Global_2441386.f_1), 2);
				}
				if (unk_0xA921AA820C25702F(Global_2441386.f_1, 4))
				{
					unk_0xE80492A9AC099A93(&(Global_2441386.f_1), 4);
				}
				Global_2441386.f_3 = -1;
				unk_0x933D6A9EEC1BACD0(&(Global_2441386.f_1), 0);
			}
			break;
	}
}

char* func_2(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "AM_HOLD_UP";
		
		case 2:
			return "AM_CR_SecurityVan";
		
		case 32:
			return "AM_JOYRIDER";
		
		case 33:
			return "AM_PLANE_TAKEDOWN";
		
		case 34:
			return "AM_DISTRACT_COPS";
		
		case 35:
			return "AM_DESTROY_VEH";
		
		case 3:
			return "AM_CR_SELL_DRUGS";
		
		case 12:
			return "AM_Safehouse";
		
		case 16:
			return "MG_RACE_TO_POINT";
		
		case 18:
			return "AM_CRATE_DROP";
		
		case 28:
			return "AM_AMMO_DROP";
		
		case 29:
			return "AM_VEHICLE_DROP";
		
		case 30:
			return "AM_BRU_BOX";
		
		case 31:
			return "AM_GA_PICKUPS";
		
		case 26:
			return "AM_backup_heli";
		
		case 27:
			return "AM_airstrike";
		
		case 17:
			return "AM_PI_MENU";
		
		case 36:
			return "AM_BOAT_TAXI";
		
		case 37:
			return "AM_HELI_TAXI";
		
		case 19:
			return "AM_IMP_EXP";
		
		case 22:
			return "AM_TAXI";
		
		case 23:
			return "AM_TAXI_LAUNCHER";
		
		case 24:
			return "AM_GANG_CALL";
		
		case 25:
			return "heli_gun";
		
		case 49:
			return "am_rollercoaster";
		
		case 50:
			return "am_ferriswheel";
		
		case 51:
			return "AM_LAUNCHER";
		
		case 52:
			return "AM_DAILY_OBJECTIVES";
		
		case 4:
			return "AM_STRIPPER";
		
		case 13:
			return "AM_Hitchhiker";
		
		case 5:
			return "stripclub_mp";
		
		case 6:
			return "AM_ArmWrestling";
		
		case 8:
			return "AM_Tennis";
		
		case 9:
			return "AM_Darts";
		
		case 7:
			return "AM_ImportExport";
		
		case 10:
			return "AM_FistFight";
		
		case 11:
			return "AM_DropOffHooker";
		
		case 15:
			return "AM_DOORS";
		
		case 20:
			return "FM_INTRO";
		
		case 21:
			return "AM_PROSTITUTE";
		
		case 38:
			return "fm_hold_up_tut";
		
		case 39:
			return "AM_CAR_MOD_TUT";
		
		case 40:
			return "AM_CONTACT_REQUESTS";
		
		case 41:
			return "am_mission_launch";
		
		case 42:
			return "am_npc_invites";
		
		case 43:
			return "am_lester_cut";
		
		case 45:
			return "AM_VEHICLE_SPAWN";
		
		case 46:
			return "am_ronTrevor_Cut";
		
		case 47:
			return "AM_ARMYBASE";
		
		case 48:
			return "AM_PRISON";
		
		case 53:
			return "AM_ArmWrestling";
		
		case 60:
			return "fm_Bj_race_controler";
		
		case 54:
			return "AM_Darts";
		
		case 61:
			return "fm_deathmatch_controler";
		
		case 59:
			return "FM_Impromptu_DM_Controler";
		
		case 62:
			return "fm_hideout_controler";
		
		case 55:
			return "golf_mp";
		
		case 58:
			return "Pilot_School_MP";
		
		case 63:
			return "FM_Mission_Controller";
		
		case 64:
			return "FM_Race_Controler";
		
		case 56:
			return "Range_Modern_MP";
		
		case 65:
			return "FM_Horde_Controler";
		
		case 57:
			return "tennis_network_mp";
		
		case 44:
			return "am_heist_int";
		
		case 66:
			return "SCTV";
		
		case 0:
			return "";
		
		default:
	}
	return "";
}

void func_3(var uParam0)
{
	int iVar0;
	
	if (Global_262145.f_6391 > 0 && Global_262145.f_6391 <= 8)
	{
		if (!Global_2441386.f_49[(Global_262145.f_6391 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < (Global_262145.f_6391 - 1))
			{
				Global_2441386.f_49[iVar0] = Global_2441386.f_49[iVar0 + 1];
				iVar0++;
			}
		}
		Global_2441386.f_49[(Global_262145.f_6391 - 1)] = uParam0;
	}
}

void func_4(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 361;
	Var0.f_1 = unk_0x4F8644AF03D0E0D6();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x5AE99C571D5BBE5D(1, &Var0, 3, iParam0);
	}
}

int func_5(int iParam0)
{
	var uVar0;
	
	unk_0x933D6A9EEC1BACD0(&uVar0, iParam0);
	return uVar0;
}

void func_6()
{
	func_7(func_5(unk_0x1D6A14F1F9A736FC("freemode", -1, 0)), 0);
	if (unk_0xD53343AA4FB7DD28(0, 100) < Global_262145.f_105)
	{
		if (unk_0x18D0456E86604654() >= Global_262145.f_106)
		{
			func_7(func_5(unk_0x1D6A14F1F9A736FC("freemode", -1, 0)), 1);
			unk_0x933D6A9EEC1BACD0(&(Global_2441386.f_1), 4);
		}
	}
}

void func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 362;
	Var0.f_1 = unk_0x4F8644AF03D0E0D6();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x5AE99C571D5BBE5D(1, &Var0, 3, iParam0);
	}
}

int func_8(struct<4> Param0, var uParam4)
{
	int iVar0;
	
	iLocal_106 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0xB8DFD30D6973E135(unk_0x41BD2A6B006AF756(iVar0)))
		{
			if (unk_0xA921AA820C25702F(Local_115[iVar0 /*3*/].f_1, 0))
			{
				iLocal_106++;
				if (Param0.f_1 == 18)
				{
					if (unk_0x18D0456E86604654() >= Param0.f_3)
					{
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (iLocal_106 >= Param0.f_3)
				{
					if (Param0.f_1 == 2)
					{
						if (!unk_0xA921AA820C25702F(Global_2441386.f_1, 2))
						{
							unk_0x933D6A9EEC1BACD0(&(Global_2441386.f_1), 2);
						}
					}
					return 1;
				}
			}
			else if (unk_0xA921AA820C25702F(Local_115[iVar0 /*3*/].f_1, 1))
			{
			}
			else if (!unk_0xA921AA820C25702F(Local_115[iVar0 /*3*/].f_1, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 2;
}

int func_9()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		fVar1 = (fVar1 + Global_2441386.f_8[iVar0 /*5*/].f_2);
		iVar0++;
	}
	fVar3 = unk_0x313CE5879CEB6FCD(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		fVar2 = (fVar2 + Global_2441386.f_8[iVar0 /*5*/].f_2);
		if (fVar3 < fVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_6428;
		
		case 1:
			return Global_262145.f_6425;
		
		case 2:
			return Global_262145.f_6426;
		
		case 3:
			return Global_262145.f_6427;
		
		case 4:
			return Global_262145.f_6429;
		
		case 5:
			return Global_262145.f_6430;
		
		case 6:
			return Global_262145.f_6431;
		
		case 7:
			return Global_262145.f_6810;
		
		default:
	}
	return 0f;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_4983;
		
		case 1:
			return Global_262145.f_4980;
		
		case 2:
			return Global_262145.f_4981;
		
		case 3:
			return Global_262145.f_4982;
		
		case 4:
			return Global_262145.f_6479;
		
		case 5:
			return Global_262145.f_6377;
		
		case 6:
			return Global_262145.f_6382;
		
		case 7:
			return Global_262145.f_6387;
		
		default:
	}
	return 0;
}

int func_12(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_20(iParam0, bParam3, bParam4) || func_19(iParam1, bParam3, bParam4)) || func_13(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
{
	return func_14(2, iParam0, 0, bParam1, bParam2);
}

int func_14(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA921AA820C25702F(Global_1334840, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_18(iParam0) - func_17(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_17(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_18(iParam0) - func_16(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_17(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_18(iParam0) - func_17(iParam0, 1));
		}
		if (!bParam4 && Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/] != 3)
		{
			iVar1 = (iVar1 - func_15(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1334840.f_1;
			break;
		
		case 1:
			return Global_1334840.f_2;
			break;
		
		case 2:
			return Global_1334840.f_3;
			break;
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x4F8644AF03D0E0D6();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2413868[iVar0 /*253*/].f_206;
			}
			else
			{
				return unk_0x1F13D5AE5CB17E17(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2413868[iVar0 /*253*/].f_207;
			}
			else
			{
				return unk_0xCF3A965906452031(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2413868[iVar0 /*253*/].f_208;
			}
			else
			{
				return unk_0xAA81B5F10BC43AC2(!bParam1);
			}
			break;
	}
	return 0;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1334848;
			break;
		
		case 1:
			return Global_1334849;
			break;
		
		case 2:
			return Global_1334850;
			break;
	}
	return 0;
}

int func_19(int iParam0, bool bParam1, bool bParam2)
{
	return func_14(1, iParam0, 0, bParam1, bParam2);
}

int func_20(int iParam0, bool bParam1, bool bParam2)
{
	return func_14(0, iParam0, 0, bParam1, bParam2);
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		default:
	}
	return 0;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 4;
		
		case 2:
			return 2;
		
		case 3:
			return 0;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 4;
		
		default:
	}
	return 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_6391 > 0 && Global_262145.f_6391 <= 8)
	{
		if (!Global_2441386.f_49[(Global_262145.f_6391 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_6391)
			{
				if (Global_2441386.f_49[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

void func_25(int iParam0, float fParam1)
{
	Global_2441386.f_8[iParam0 /*5*/].f_2 = fParam1;
}

void func_26(int iParam0)
{
	Global_2441386.f_2 = iParam0;
}

int func_27(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_28(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_28(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7A5487FE9FAA6B48();
			}
			else
			{
				*uParam0 = unk_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = unk_0x9CD27B0045628463();
		}
		uParam0->f_1 = 1;
	}
}

void func_29(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_30()
{
	return 0;
}

int func_31()
{
	int iVar0;
	int iVar1;
	
	Global_2441386.f_62 = Global_262145.f_6392;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2441386.f_8[iVar0 /*5*/] = iVar0;
		Global_2441386.f_8[iVar0 /*5*/].f_1 = func_33(iVar0);
		Global_2441386.f_8[iVar0 /*5*/].f_2 = 1f;
		Global_2441386.f_8[iVar0 /*5*/].f_3 = func_32(iVar0);
		iVar0++;
	}
	if (Global_262145.f_6391 > 0 && Global_262145.f_6391 <= 8)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_6391)
		{
			Global_2441386.f_49[iVar1] = -1;
			iVar1++;
		}
	}
	return 1;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return Global_262145.f_4807;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 2;
		
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 32;
			break;
		
		case 1:
			return 18;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 7;
			break;
		
		case 4:
			return 41;
			break;
		
		case 5:
			return 33;
			break;
		
		case 6:
			return 34;
			break;
		
		case 7:
			return 35;
			break;
	}
	return 0;
}

void func_34()
{
	int iVar0;
	char* sVar1;
	
	switch (Local_115[unk_0xEE68096F9F37341E() /*3*/].f_2)
	{
		case 0:
			if (Global_2441386.f_2 >= 4 && Global_2441386.f_2 != 8)
			{
				if (unk_0xA921AA820C25702F(Global_2441386.f_1, 2))
				{
					unk_0x933D6A9EEC1BACD0(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 0);
					unk_0xE80492A9AC099A93(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 1);
				}
				if (!unk_0xA921AA820C25702F(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1, 1))
				{
					func_93(4);
				}
				else if (!unk_0xA921AA820C25702F(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1, 3))
				{
					func_29(&uLocal_107);
					unk_0x933D6A9EEC1BACD0(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 3);
				}
				else if (func_27(&uLocal_107, 10000, 0))
				{
					func_93(4);
					unk_0xE80492A9AC099A93(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 3);
				}
			}
			else if (unk_0xA921AA820C25702F(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1, 1))
			{
				unk_0xE80492A9AC099A93(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 1);
			}
			break;
		
		case 4:
			if (unk_0xA921AA820C25702F(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1, 0))
			{
				if (Global_2441386.f_2 == 8)
				{
					func_93(8);
					unk_0xE80492A9AC099A93(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 0);
				}
				else if (Global_2441386.f_2 == 5)
				{
					func_93(5);
					unk_0xE80492A9AC099A93(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 0);
				}
				else if (Global_2441386.f_2 >= 6)
				{
					func_93(6);
					unk_0xE80492A9AC099A93(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 0);
				}
				else if (Global_2441386.f_2 == 3)
				{
					func_93(0);
					unk_0xE80492A9AC099A93(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 0);
				}
			}
			else
			{
				iVar0 = 0;
				if (((((((((((((!unk_0xADA24309FE08DACF() && !func_92(unk_0x4F8644AF03D0E0D6())) && !func_91()) && !func_90()) && !func_89()) && !func_88()) && !func_86(unk_0x4F8644AF03D0E0D6())) && !unk_0x05095437424397FA()) && !func_84(unk_0x4F8644AF03D0E0D6())) && func_82()) && !func_81(unk_0x4F8644AF03D0E0D6(), 0)) && !func_81(unk_0x4F8644AF03D0E0D6(), 7)) && !func_80(unk_0x4F8644AF03D0E0D6(), 0)) && func_79(unk_0x4F8644AF03D0E0D6(), 1, 1))
				{
					switch (Global_2441386.f_3)
					{
						case 0:
							if (((func_74(0) && func_72(func_73(unk_0x4F8644AF03D0E0D6()), 40f, 40f, 40f)) && unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) < 10f) && !func_71())
							{
								iVar0 = 1;
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 1:
							if (func_61(31, 0))
							{
								iVar0 = 1;
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 2:
							if (func_61(20, 0) && !func_60())
							{
								iVar0 = func_52();
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 3:
							if (func_61(19, 0))
							{
								iVar0 = 1;
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 4:
							if (((((func_61(20, 0) && !func_81(unk_0x4F8644AF03D0E0D6(), 1)) && !func_81(unk_0x4F8644AF03D0E0D6(), 2)) && !func_81(unk_0x4F8644AF03D0E0D6(), 3)) && !Global_2421967.f_3012) && !func_50())
							{
								iVar0 = 1;
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 5:
							if (func_61(124, 0))
							{
								iVar0 = 1;
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 6:
							if (func_61(126, 0))
							{
								iVar0 = 1;
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 7:
							if (func_61(127, 0))
							{
								iVar0 = 1;
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						default:
							iVar0 = 2;
							break;
					}
				}
				else
				{
					iVar0 = 2;
				}
				if (iVar0 == 1)
				{
					unk_0x933D6A9EEC1BACD0(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 0);
				}
				else if (iVar0 == 2)
				{
					func_93(0);
					unk_0x933D6A9EEC1BACD0(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 1);
				}
			}
			break;
		
		case 5:
			if (Global_2441386.f_2 == 6)
			{
				unk_0xE80492A9AC099A93(&(Global_2446207.f_200.f_1), 1);
				unk_0xE80492A9AC099A93(&(Global_2446207.f_200.f_1), 2);
				unk_0xE80492A9AC099A93(&(Global_2446207.f_200.f_1), 3);
				func_93(6);
			}
			else if (unk_0xA921AA820C25702F(Global_2441386.f_1, 3) && func_49(&(Global_2441386.f_58)))
			{
				func_39();
			}
			break;
		
		case 6:
			sVar1 = func_2(Global_2441386.f_3.f_1);
			if (Global_2441386.f_3.f_1 == 7)
			{
				if (Global_2446207.f_1544)
				{
					if (Global_2441386.f_2 == 7)
					{
						func_93(7);
					}
				}
				else if (Global_2446207.f_1545)
				{
					Global_2446207.f_1545 = 0;
					func_93(0);
					unk_0x933D6A9EEC1BACD0(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 1);
				}
			}
			else if (!unk_0xA921AA820C25702F(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1, 2))
			{
				Local_86.f_16 = -1;
				if (unk_0x2C83A9DA6BFFC4F9(unk_0xD24D37CC275948CC(sVar1)) == 0)
				{
					if (!unk_0x9D40DF90FAD26098(sVar1, -1, false, 0) || unk_0x3658E8CD94FC121A(sVar1, -1, 0) < 32)
					{
						if (!unk_0x9D40DF90FAD26098(sVar1, -1, true, 0))
						{
							Local_86.f_0 = Global_2441386.f_3.f_1;
							if (func_35(Local_86, 0))
							{
								unk_0x933D6A9EEC1BACD0(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 2);
							}
						}
					}
				}
			}
			else if (unk_0x2C83A9DA6BFFC4F9(unk_0xD24D37CC275948CC(sVar1)) != 0)
			{
				if (Global_2441386.f_2 == 7)
				{
					func_93(7);
					unk_0xE80492A9AC099A93(&(Local_115[unk_0xEE68096F9F37341E() /*3*/].f_1), 2);
				}
			}
			break;
		
		case 7:
			if (Global_2441386.f_2 != 7)
			{
				func_93(8);
			}
			break;
		
		case 8:
			func_93(0);
			break;
	}
}

int func_35(struct<17> Param0, var uParam17, var uParam18, var uParam19, bool bParam20)
{
	char cVar0[32];
	bool bVar8;
	int iVar9;
	int iVar10;
	
	if (func_38())
	{
		return 0;
	}
	bParam20 = bParam20;
	StringCopy(&cVar0, func_2(Param0.f_0), 32);
	if (unk_0xFC04745FBE67C19A(&cVar0))
	{
		unk_0x6EB5F71AA68F2E8E(&cVar0);
		if (unk_0xE6CC9F3BA0FB9EF1(&cVar0))
		{
			bVar8 = true;
			if (bParam20)
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 16)
				{
					if (unk_0x9D40DF90FAD26098(&cVar0, iVar9, bVar8, 0))
					{
						return 0;
					}
					iVar9++;
				}
			}
			else if (unk_0x9D40DF90FAD26098(&cVar0, Param0.f_16, bVar8, 0))
			{
				return 0;
			}
			iVar10 = unk_0xB8BA7F44DF1575E1(&cVar0, &Param0, 20, func_36(Param0.f_0));
			unk_0xC90D2DCACD56184C(&cVar0);
			if (iVar10 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 53:
		case 60:
		case 54:
		case 58:
		case 61:
		case 62:
		case 55:
		case 63:
		case 64:
		case 56:
		case 65:
		case 57:
		case 66:
		case 59:
			return 30000;
		
		default:
	}
	if (func_37(iParam0) == 3)
	{
		return 8344;
	}
	else if (func_37(iParam0) == 7)
	{
		return 3650;
	}
	else if (func_37(iParam0) == 0)
	{
		return 3650;
	}
	else if (func_37(iParam0) == 2)
	{
		return 3650;
	}
	else if (func_37(iParam0) == 6)
	{
		if (((((((iParam0 == 18 || iParam0 == 22) || iParam0 == 24) || iParam0 == 17) || iParam0 == 49) || iParam0 == 50) || iParam0 == 52) || iParam0 == 42)
		{
			return 3650;
		}
		if (iParam0 == 40)
		{
			return 8344;
		}
		if ((((((((((iParam0 == 9 || iParam0 == 16) || iParam0 == 15) || iParam0 == 37) || iParam0 == 36) || iParam0 == 19) || iParam0 == 41) || iParam0 == 38) || iParam0 == 21) || iParam0 == 51) || iParam0 == 52)
		{
			return 2050;
		}
		if (iParam0 == 45)
		{
			return 2556;
		}
	}
	return 1424;
}

int func_37(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 7;
		
		case 1:
			return 7;
		
		case 2:
			return 7;
		
		case 32:
			return 7;
		
		case 33:
			return 7;
		
		case 34:
			return 7;
		
		case 35:
			return 7;
		
		case 16:
			return 6;
		
		case 18:
			return 6;
		
		case 28:
			return 6;
		
		case 26:
			return 6;
		
		case 27:
			return 6;
		
		case 29:
			return 6;
		
		case 30:
			return 6;
		
		case 31:
			return 6;
		
		case 17:
			return 6;
		
		case 36:
			return 6;
		
		case 37:
			return 6;
		
		case 19:
			return 6;
		
		case 22:
			return 6;
		
		case 23:
			return 6;
		
		case 24:
			return 6;
		
		case 25:
			return 6;
		
		case 40:
			return 6;
		
		case 49:
			return 6;
		
		case 50:
			return 6;
		
		case 51:
			return 6;
		
		case 52:
			return 6;
		
		case 12:
			return 6;
		
		case 4:
			return 6;
		
		case 13:
			return 6;
		
		case 5:
			return 6;
		
		case 6:
			return 6;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 7:
			return 6;
		
		case 10:
			return 6;
		
		case 11:
			return 6;
		
		case 15:
			return 6;
		
		case 21:
			return 6;
		
		case 47:
			return 6;
		
		case 48:
			return 6;
		
		case 38:
			return 6;
		
		case 41:
			return 6;
		
		case 42:
			return 6;
		
		case 39:
			return 6;
		
		case 43:
			return 6;
		
		case 45:
			return 6;
		
		case 46:
			return 6;
		
		case 53:
			return 6;
		
		case 60:
			return 0;
		
		case 54:
			return 6;
		
		case 61:
			return 0;
		
		case 59:
			return 0;
		
		case 62:
			return 0;
		
		case 55:
			return 6;
		
		case 63:
			return 0;
		
		case 58:
			return 6;
		
		case 64:
			return 0;
		
		case 56:
			return 6;
		
		case 65:
			return 0;
		
		case 57:
			return 6;
		
		case 44:
			return 6;
		
		case 66:
			return 6;
		
		default:
	}
	return 11;
}

bool func_38()
{
	return Global_2427935.f_565;
}

void func_39()
{
	if (Global_2411328.f_84.f_2 == 1)
	{
		if (!unk_0xA921AA820C25702F(Global_2446207.f_200.f_1, 1))
		{
			if (((Global_262145.f_44 * 120000) - func_48(&(Global_2441386.f_58), 0, 0)) < 360000)
			{
				if (!unk_0xA921AA820C25702F(Global_2446207.f_200.f_1, 1))
				{
					if (func_61(31, 0) && !func_89())
					{
						if (Global_262145.f_44 < 3)
						{
							func_40("ACD_TSCH", Global_262145.f_44, 1);
						}
						else
						{
							func_40("ACD_TSCH", 3, 1);
						}
					}
					unk_0x933D6A9EEC1BACD0(&(Global_2446207.f_200.f_1), 1);
				}
			}
			else if (((Global_262145.f_44 * 120000) - func_48(&(Global_2441386.f_58), 0, 0)) < 600000)
			{
				if (!unk_0xA921AA820C25702F(Global_2446207.f_200.f_1, 2))
				{
					if (func_61(31, 0) && !func_89())
					{
						func_40("ACD_TSCH", 5, 1);
					}
					unk_0x933D6A9EEC1BACD0(&(Global_2446207.f_200.f_1), 2);
				}
			}
			else if (((Global_262145.f_44 * 120000) - func_48(&(Global_2441386.f_58), 0, 0)) < 1200000)
			{
				if (!unk_0xA921AA820C25702F(Global_2446207.f_200.f_1, 3))
				{
					if (func_61(31, 0) && !func_89())
					{
						func_40("ACD_TSCH", 10, 1);
					}
					unk_0x933D6A9EEC1BACD0(&(Global_2446207.f_200.f_1), 3);
				}
			}
		}
	}
}

int func_40(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x202709F4C58A0424(sParam0);
	unk_0x03B504CF259931BC(iParam1);
	iVar0 = unk_0x2ED7843F8F801023(false, true);
	func_41(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_41(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_47() || !unk_0x05095437424397FA()) || !func_44(unk_0x4F8644AF03D0E0D6(), 0))
	{
		return;
	}
	iVar0 = func_42(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1689857.f_5[iVar0 /*53*/] = iParam0;
		Global_1689857.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1689857.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1689857.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1689857.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1689857.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1689857.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1689857.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_42(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1689857 - 1))
	{
		if (iParam0 > Global_1689857.f_5[iVar0 /*53*/].f_1)
		{
			func_43(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1689857++;
	if (Global_1689857 > 5)
	{
		Global_1689857 = 5;
		return Global_1689857;
	}
	return (Global_1689857 - 1);
}

void func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1689857.f_5[iVar0 /*53*/] = { Global_1689857.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_44(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_45(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_45(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
	}
	if (Global_1315875[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_46()
{
	return Global_1312736;
}

bool func_47()
{
	return unk_0x812595A0644CE1DE(-1762644250);
}

int func_48(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x10FAB35428CCC9D7() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0);
		}
		else
		{
			return unk_0xA2C6FC031D46FFF0(unk_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0);
}

var func_49(var uParam0)
{
	return uParam0->f_1;
}

int func_50()
{
	if (!func_51())
	{
		return 0;
	}
	if (Global_2404109.f_2 == Global_262145.f_6823 || Global_2404109.f_2 == Global_262145.f_6847)
	{
		return 1;
	}
	return 0;
}

int func_51()
{
	switch (Global_2404109)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 11:
		case 12:
			return 0;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_52()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<3> Var5;
	
	iVar1 = 0;
	Var5 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
	if (!bVar0)
	{
		if (unk_0x80CA6A8B6C094CC4(Var5, iLocal_109, &Local_110, &uLocal_113, &uVar2, 0, 3f, 0f))
		{
			if (unk_0xF1B760881820C952(-1367.557f, -3220.598f, 12.9448f, Var5, true) >= 600f)
			{
				if (unk_0xF1B760881820C952(Var5, Local_110, true) >= 75f)
				{
					unk_0x07FB139B592FA687((Var5.f_0 - 250f), (Var5.f_1 - 250f), (Var5.f_0 + 250f), (Var5.f_1 + 250f));
					if (unk_0x0568566ACBB5DEDC(Local_110, &uVar3, &uVar4))
					{
						if (uVar4 & 1 == 0)
						{
							if (iLocal_114 <= 0)
							{
								if (func_53(Local_110, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
								{
									bVar0 = true;
									iVar1 = 1;
								}
							}
							else
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_109 += 3;
		if (iLocal_109 >= 150)
		{
			iLocal_109 = 40;
			iLocal_114++;
		}
	}
	if (iLocal_114 > 0)
	{
		iVar1 = 2;
	}
	return iVar1;
}

int func_53(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404546 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x61E1DD6125A3EEE6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x083961498679DC9F(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x083961498679DC9F(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x397DC58FF00298D1(Param0, fParam5, false))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam13)
	{
		if (unk_0x50CAD495A460B305(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404546++;
	if (fParam14 > 0f)
	{
		if (func_56(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_54(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404546++;
	return 1;
}

int func_54(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_79(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (!unk_0xB16FCE9DDC7BA182())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xF1B760881820C952(func_73(unk_0x4F8644AF03D0E0D6()), Param0, true) <= (fVar2 + fParam3))
				{
					if (unk_0xE33D59DA70B58FDF(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_79(iVar1, 1, 1))
		{
			if (!func_44(iVar1, 0) && unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x4F8644AF03D0E0D6()))
				{
					if ((func_55(iVar1) || !bParam10) && !Global_2413868[iVar1 /*253*/].f_252)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x37039302F4E0A008(iVar1) == -1)
							{
								if (unk_0x37039302F4E0A008(iVar1) == unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x37039302F4E0A008(iVar1) != unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))) || unk_0x37039302F4E0A008(iVar1) == -1)
							{
								if (unk_0xF1B760881820C952(func_73(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (unk_0xDC3A310219E5DA62(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x37039302F4E0A008(iVar1) != iParam8 || unk_0x37039302F4E0A008(iVar1) == -1)
						{
							if (unk_0xF1B760881820C952(func_73(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (unk_0xDC3A310219E5DA62(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_55(int iParam0)
{
	if (unk_0xD796CB5BA8F20E32(unk_0x43A66C31C68491C0(iParam0)) || Global_2413868[iParam0 /*253*/].f_239)
	{
		return 1;
	}
	return 0;
}

int func_56(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x4F8644AF03D0E0D6() != iVar1) || iParam8 == 0)
		{
			if (func_79(iVar1, bParam4, bParam5))
			{
				if (unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), iVar1))
				{
					if (!bParam7 || (!unk_0x84A2DD9AC37C35C1(unk_0x43A66C31C68491C0(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) != unk_0x37039302F4E0A008(iVar1))) || unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1)
						{
							if (((unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1 && uParam9) && bParam6) && func_57(iVar1))
							{
							}
							else if (unk_0x7239B21A38F536BA(unk_0x43A66C31C68491C0(iVar1)))
							{
								if (unk_0xF1B760881820C952(func_73(iVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (func_59(unk_0x4F8644AF03D0E0D6(), iParam0))
	{
		return 1;
	}
	Global_2445236 = { func_58(iParam0) };
	if (unk_0x1A24A179F9B31654(&Global_2445236))
	{
		return 1;
	}
	return 0;
}

struct<13> func_58(int iParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(iParam0, &Var0, 13);
	return Var0;
}

int func_59(int iParam0, int iParam1)
{
	if (unk_0x579CCED0265D4896())
	{
		Global_2445236 = { func_58(iParam0) };
		Global_2445249 = { func_58(iParam1) };
		if (unk_0xB124B57F571D8F18(&Global_2445236))
		{
			if (unk_0xB124B57F571D8F18(&Global_2445249))
			{
				unk_0xEEE6EACBE8874FBA(&Global_2445166, 35, &Global_2445236);
				unk_0xEEE6EACBE8874FBA(&Global_2445201, 35, &Global_2445249);
				if (Global_2445166 == Global_2445201)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_60()
{
	if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, false, true, 0))
	{
		return 1;
	}
	if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, false, true, 0))
	{
		return 1;
	}
	if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, false, true, 0))
	{
		return 1;
	}
	if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, false, true, 0))
	{
		return 1;
	}
	if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

bool func_61(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6000 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_66(unk_0x4F8644AF03D0E0D6(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4806 == 1)
		{
			return 1;
		}
	}
	if (func_65() || func_64())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_62())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return unk_0xA921AA820C25702F(Global_1573719[iVar1], iVar0);
}

int func_62()
{
	int iVar0;
	
	if (Global_1312447)
	{
		return 1;
	}
	if (unk_0xA921AA820C25702F(Global_2446207.f_1615, 23))
	{
		return 1;
	}
	if (func_65())
	{
		return 1;
	}
	if (func_64())
	{
		return 1;
	}
	iVar0 = Global_1333824[func_63(-1)];
	if (unk_0xA921AA820C25702F(iVar0, 7))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_2446207.f_1615), 23);
		return 1;
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_46();
		if (iVar1 > -1)
		{
			Global_2453900 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453900 = 1;
		}
	}
	return iVar0;
}

bool func_64()
{
	return Global_1315886;
}

bool func_65()
{
	return Global_1315888;
}

bool func_66(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_69())
	{
		return 0;
	}
	if (func_68())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_67(iParam1);
	iVar1 = uVar0;
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_300, iVar1);
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_68()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_120, 3);
}

int func_69()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_65())
	{
		return 1;
	}
	if (func_64())
	{
		return 1;
	}
	return func_70(120, -1);
}

int func_70(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2472519[iParam0 /*6*/][func_63(iParam1)];
	if (unk_0x11B5E6D2AE73F48E(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_71()
{
	if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, false, true, 0))
	{
		return 1;
	}
	else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, false, true, 0))
	{
		return 1;
	}
	else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, false, true, 0))
	{
		return 1;
	}
	else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, false, true, 0))
	{
		return 1;
	}
	else if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_72(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	
	if (unk_0x240A18690AE96513(Param0, &Var0, 0, 3f, 0f))
	{
		if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Var0, Param3, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_73(int iParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
}

int func_74(bool bParam0)
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (func_78(unk_0x4F8644AF03D0E0D6(), 1))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_91())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0x05095437424397FA())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0xADA24309FE08DACF())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!func_61(19, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_75(9))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	return 1;
}

bool func_75(int iParam0)
{
	return !func_76(iParam0);
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_4980)
			{
				return 0;
			}
			if (func_81(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_4981)
			{
				return 0;
			}
			if (func_81(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_4982)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_4983)
			{
				return 0;
			}
			if (func_81(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_77(4))
			{
				return 0;
			}
			if (func_81(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 18:
			if (func_77(4))
			{
				return 0;
			}
			if (func_81(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_77(4))
			{
				return 0;
			}
			if (func_81(unk_0x4F8644AF03D0E0D6(), 7))
			{
				return 0;
			}
			if (unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 0) || unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_79(unk_0x41BD2A6B006AF756(iVar0), 0, 1))
		{
			if (unk_0xA921AA820C25702F(Global_2413868[iVar0 /*253*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_78(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_84(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582048[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB8DFD30D6973E135(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x5E9564D8246B909A(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_80(int iParam0, bool bParam1)
{
	if (Global_1582048[iParam0 /*324*/].f_235.f_6 > 0)
	{
		if (bParam1)
		{
			if (unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_235.f_4, 0))
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

bool func_81(int iParam0, int iParam1)
{
	return unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_205, iParam1);
}

int func_82()
{
	if (func_83() == 0)
	{
		return 1;
	}
	return 0;
}

int func_83()
{
	return Global_1312466.f_18;
}

bool func_84(int iParam0)
{
	return func_85(iParam0);
}

bool func_85(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_13.f_1, 0);
}

int func_86(int iParam0)
{
	switch (func_87(iParam0))
	{
		case 20:
		case 21:
		case 24:
		case 25:
		case 26:
		case 28:
		case 27:
		case 29:
		case 30:
			return 1;
		
		default:
	}
	return 0;
}

int func_87(int iParam0)
{
	return Global_1582048[iParam0 /*324*/].f_165;
}

bool func_88()
{
	return Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_165 != 0;
}

bool func_89()
{
	return Global_1315898;
}

bool func_90()
{
	return Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/] == 5;
}

bool func_91()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_18, 0);
}

int func_92(int iParam0)
{
	if (func_78(iParam0, 1))
	{
		if (Global_1582048[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

void func_93(int iParam0)
{
	Local_115[unk_0xEE68096F9F37341E() /*3*/].f_2 = iParam0;
}

int func_94()
{
	return 1;
}

int func_95()
{
	return Global_2441386;
}

int func_96(int iParam0)
{
	return Local_115[iParam0 /*3*/];
}

int func_97()
{
	bool bVar0;
	
	func_103(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315872 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_38())
	{
		return 1;
	}
	if (Global_2436712)
	{
		return 1;
	}
	if (func_102())
	{
		return 1;
	}
	if (func_101(157))
	{
		if (!func_100())
		{
			return 1;
		}
	}
	if (func_101(155))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_98() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_98()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_98()
{
	switch (func_99())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_99()
{
	return Global_24444;
}

bool func_100()
{
	return Global_2427935.f_570;
}

int func_101(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	return Global_2434971;
}

void func_103(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5F92A689A06620AA(1))
	{
		iVar1 = unk_0xD8F66A3A60C62153(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2902843FCD2B2D79(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_104(iVar0);
					break;
				
				case 2:
					unk_0x2902843FCD2B2D79(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_104(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x2902843FCD2B2D79(1, iParam0, &Var0, 3))
	{
		if (func_79(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x43A66C31C68491C0(Var0.f_1);
			if (unk_0x7239B21A38F536BA(iVar3))
			{
				if (unk_0x997ABD671D25CA0B(iVar3, false))
				{
					iVar4 = unk_0x9A9112A0FE9A4713(iVar3, false);
					if (unk_0x46E571A0E20D01F1(iVar4, Var0.f_2) && unk_0x2910669969E9535E())
					{
						if (func_105(iVar4, &bVar5))
						{
							unk_0xA711568EEDB43069(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x629BFA74418D6239(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_105(int iParam0, var uParam1)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x0A7B270912999B3C(iParam0))
		{
			if (unk_0x0991549DE4D64762(iParam0))
			{
				unk_0xAD738C3085FE7E11(iParam0, false, true);
				*uParam1 = 1;
			}
		}
		if (unk_0xDDE6DF5AE89981D2(iParam0, false))
		{
			if (unk_0x01BF60A500E28887(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_106()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_107()
{
	Global_2446207.f_1544 = 0;
	Global_2446207.f_1545 = 0;
	Global_2446207.f_1547 = 0;
	Global_2446207.f_1546 = 0;
	unk_0xE80492A9AC099A93(&(Global_2446207.f_200.f_1), 1);
	unk_0xE80492A9AC099A93(&(Global_2446207.f_200.f_1), 2);
	unk_0xE80492A9AC099A93(&(Global_2446207.f_200.f_1), 3);
	unk_0x1090044AD1DA76FA();
}

int func_108(struct<20> Param0)
{
	func_114();
	func_112(func_113(Param0.f_0), Param0);
	unk_0x4E5C93BD0C32FBF8(0);
	func_109(0, -1, 0);
	unk_0x3E9B2F01C50DF595(&Global_2441386, 63);
	unk_0x3364AA97340CA215(&Local_115, 97);
	unk_0xAA391C728106F7AF(false);
	Local_115[unk_0xEE68096F9F37341E() /*3*/] = 0;
	func_93(0);
	return 1;
}

int func_109(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_111();
			}
			else
			{
				return 0;
			}
		}
		if (!func_110())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_111();
					}
					else
					{
						return 0;
					}
				}
				if (func_38())
				{
					if (!bParam2)
					{
						func_111();
					}
					else
					{
						return 0;
					}
				}
				if (func_101(155))
				{
					if (!bParam2)
					{
						func_111();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xCA97246103B63917())
			{
				if (!bParam2)
				{
					func_111();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x57D158647A6BFABF();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			if (!bParam2)
			{
				func_111();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xCA97246103B63917())
	{
		if (!bParam2)
		{
			func_111();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_110()
{
	return Global_1315872;
}

void func_111()
{
	unk_0x1090044AD1DA76FA();
}

void func_112(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		func_111();
	}
	unk_0x1CA59E306ECB80A5(iParam0, false, Param1.f_16);
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

void func_114()
{
	struct<63> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_2 = 1065353216;
	Var0.f_8 = 8;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_1.f_2 = 1065353216;
	Var0.f_8.f_1.f_5 = -1;
	Var0.f_8.f_1.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_49 = 8;
	Global_2441386 = { Var0 };
}

