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
	int iLocal_34 = 0;
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
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	struct<20> Local_87 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	struct<3> Local_111 = { 0, 0, 0 } ;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	struct<3> Local_116[32];
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
	iLocal_34 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_110 = 40;
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (!func_119(ScriptParam_0))
		{
			func_118();
		}
	}
	while (true)
	{
		func_117();
		if (func_108())
		{
			func_118();
		}
		switch (func_107(unk_0x04EFA8D3BE8500E7()))
		{
			case 0:
				if (func_106() == 1)
				{
					if (func_105())
					{
						Local_116[unk_0x04EFA8D3BE8500E7() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_106() == 1)
				{
					func_39();
				}
				else if (func_106() == 3)
				{
					Local_116[unk_0x04EFA8D3BE8500E7() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_118();
				break;
		}
		if (unk_0x1C7D9BFDF15A02B4())
		{
			switch (func_106())
			{
				case 0:
					if (func_37())
					{
						Global_2446446 = 1;
					}
					break;
				
				case 1:
					if (func_36())
					{
						Global_2446446 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_118();
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
	
	switch (Global_2446446.f_2)
	{
		case 0:
			if (!unk_0x236D8AD7EE179F46(Global_2446446.f_1, 1))
			{
				func_35(&(Global_2446446.f_167));
				unk_0xF3148AAF69AF9CBC(&(Global_2446446.f_1), 1);
			}
			else if (func_33(&(Global_2446446.f_167), Global_2446446.f_169, 0))
			{
				func_32(1);
				unk_0xC69E84EBBD7166E6(&(Global_2446446.f_1), 1);
			}
			break;
		
		case 1:
			if (unk_0x1C6DF6AD69BE853E())
			{
				iVar0 = 0;
				while (iVar0 < 19)
				{
					iVar1 = iVar0;
					func_31(iVar1, 0f);
					if (!func_30(iVar1))
					{
						if (func_18(func_29(iVar1), func_28(iVar1), func_27(iVar1), 1, 1))
						{
							if (!func_17(iVar1))
							{
								if (iVar1 != 9 || func_16())
								{
									func_31(iVar1, func_15(iVar1));
								}
							}
						}
					}
					iVar0++;
				}
				func_32(3);
			}
			else
			{
				func_32(0);
			}
			break;
		
		case 3:
			iVar2 = func_13();
			if (iVar2 != -1)
			{
				Global_2446446.f_3 = { Global_2446446.f_8[iVar2 /*5*/] };
				func_32(4);
			}
			else
			{
				Global_2446446.f_169 = (Global_262145.f_6442 / 2);
				func_32(0);
			}
			break;
		
		case 4:
			switch (func_10(Global_2446446.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2446446.f_3)
					{
						case 1:
							func_8();
							break;
					}
					bVar3 = true;
					if (bVar3)
					{
						if (Global_2446446.f_3 == 1)
						{
							if (unk_0x236D8AD7EE179F46(Global_2446446.f_1, 4))
							{
								func_32(5);
							}
							else
							{
								func_32(6);
							}
						}
						else
						{
							func_32(6);
						}
					}
					else
					{
						func_31(Global_2446446.f_3, 0f);
						func_32(3);
					}
					break;
				
				case 2:
					func_31(Global_2446446.f_3, 0f);
					func_32(3);
					break;
			}
			break;
		
		case 5:
			if (Global_2446446.f_3 == 1)
			{
				if (unk_0x236D8AD7EE179F46(Global_2446446.f_1, 4))
				{
					if (!unk_0x236D8AD7EE179F46(Global_2446446.f_1, 3))
					{
						func_35(&(Global_2446446.f_165));
						unk_0xF3148AAF69AF9CBC(&(Global_2446446.f_1), 3);
					}
					else if (func_33(&(Global_2446446.f_165), (Global_262145.f_45 * 120000), 0))
					{
						unk_0xC69E84EBBD7166E6(&(Global_2446446.f_1), 3);
						func_32(6);
					}
				}
				else
				{
					func_32(6);
				}
			}
			else
			{
				func_32(6);
			}
			break;
		
		case 6:
			if (Global_2446446.f_3.f_1 == 19)
			{
				if (unk_0x1888BBA7387E194A("AM_IMP_EXP", -1, 0) != func_7())
				{
					func_5(func_6(unk_0x1888BBA7387E194A("AM_IMP_EXP", -1, 0)), 1);
					Global_2451473.f_1553 = 0;
					func_32(7);
					func_3(Global_2446446.f_3);
				}
			}
			else if (unk_0x253C9FE2EFE18AEC(func_2(Global_2446446.f_3.f_1), -1, 0, 0))
			{
				func_32(7);
				func_3(Global_2446446.f_3);
			}
			break;
		
		case 7:
			if (Global_2446446.f_3.f_1 == 19)
			{
				if (Global_2451473.f_1553)
				{
					func_32(8);
					Global_2451473.f_1553 = 0;
				}
			}
			else if (!unk_0x253C9FE2EFE18AEC(func_2(Global_2446446.f_3.f_1), -1, 0, 0))
			{
				func_32(8);
			}
			break;
		
		case 8:
			if (unk_0x236D8AD7EE179F46(Global_2446446.f_1, 0))
			{
				func_32(0);
				unk_0xC69E84EBBD7166E6(&(Global_2446446.f_1), 0);
			}
			else
			{
				Global_2446446.f_169 = Global_262145.f_6442;
				Global_2446446.f_8[Global_2446446.f_3 /*5*/].f_4 = 1;
				if (unk_0x236D8AD7EE179F46(Global_2446446.f_1, 2))
				{
					unk_0xC69E84EBBD7166E6(&(Global_2446446.f_1), 2);
				}
				if (unk_0x236D8AD7EE179F46(Global_2446446.f_1, 4))
				{
					unk_0xC69E84EBBD7166E6(&(Global_2446446.f_1), 4);
				}
				Global_2446446.f_3 = -1;
				Global_2446446.f_3.f_1 = 0;
				unk_0xF3148AAF69AF9CBC(&(Global_2446446.f_1), 0);
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
		
		case 36:
			return "AM_HOT_TARGET";
		
		case 37:
			return "AM_KILL_LIST";
		
		case 38:
			return "AM_TIME_TRIAL";
		
		case 39:
			return "AM_CP_COLLECTION";
		
		case 40:
			return "AM_CHALLENGES";
		
		case 41:
			return "AM_PENNED_IN";
		
		case 42:
			return "AM_PASS_THE_PARCEL";
		
		case 43:
			return "AM_HOT_PROPERTY";
		
		case 44:
			return "AM_DEAD_DROP";
		
		case 45:
			return "AM_KING_OF_THE_CASTLE";
		
		case 46:
			return "AM_CRIMINAL_DAMAGE";
		
		case 47:
			return "AM_HUNT_THE_BEAST";
		
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
		
		case 48:
			return "AM_BOAT_TAXI";
		
		case 49:
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
		
		case 62:
			return "am_rollercoaster";
		
		case 63:
			return "am_ferriswheel";
		
		case 64:
			return "AM_LAUNCHER";
		
		case 65:
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
		
		case 50:
			return "fm_hold_up_tut";
		
		case 51:
			return "AM_CAR_MOD_TUT";
		
		case 52:
			return "AM_CONTACT_REQUESTS";
		
		case 53:
			return "am_mission_launch";
		
		case 54:
			return "am_npc_invites";
		
		case 55:
			return "am_lester_cut";
		
		case 58:
			return "AM_VEHICLE_SPAWN";
		
		case 59:
			return "am_ronTrevor_Cut";
		
		case 60:
			return "AM_ARMYBASE";
		
		case 61:
			return "AM_PRISON";
		
		case 66:
			return "AM_ArmWrestling";
		
		case 73:
			return "fm_Bj_race_controler";
		
		case 67:
			return "AM_Darts";
		
		case 74:
			return "fm_deathmatch_controler";
		
		case 72:
			return "FM_Impromptu_DM_Controler";
		
		case 75:
			return "fm_hideout_controler";
		
		case 68:
			return "golf_mp";
		
		case 71:
			return "Pilot_School_MP";
		
		case 76:
			return "FM_Mission_Controller";
		
		case 77:
			return "FM_Race_Controler";
		
		case 69:
			return "Range_Modern_MP";
		
		case 78:
			return "FM_Horde_Controler";
		
		case 70:
			return "tennis_network_mp";
		
		case 56:
			return "am_heist_int";
		
		case 57:
			return "am_lowrider_int";
		
		case joaat("mpsv_lp0_31"):
			return "SCTV";
		
		case 0:
			return "";
		
		default:
	}
	return "";
}

void func_3(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 9)
	{
		if (Global_262145.f_6440 > 0 && Global_262145.f_6440 <= 19)
		{
			if (!Global_2446446.f_104[(Global_262145.f_6440 - 1)] == -1)
			{
				iVar0 = 0;
				while (iVar0 < (Global_262145.f_6440 - 1))
				{
					Global_2446446.f_104[iVar0] = Global_2446446.f_104[iVar0 + 1];
					iVar0++;
				}
			}
			Global_2446446.f_104[(Global_262145.f_6440 - 1)] = iParam0;
		}
	}
	iVar0 = 18;
	while (iVar0 >= 0)
	{
		Global_2446446.f_124[iVar0 + 1 /*2*/] = { Global_2446446.f_124[iVar0 /*2*/] };
		iVar0 = (iVar0 + -1);
	}
	Global_2446446.f_124[0 /*2*/] = iParam0;
	Global_2446446.f_124[0 /*2*/].f_1 = -1;
	if (iParam0 == 9)
	{
		Global_2446446.f_170 = 0;
		func_4();
	}
	else
	{
		Global_2446446.f_170++;
	}
}

void func_4()
{
	Global_2446446.f_171 = unk_0x2E0A9E3291F398E3(Global_262145.f_8896, Global_262145.f_8895);
}

void func_5(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 368;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 3, iParam0);
	}
}

int func_6(int iParam0)
{
	var uVar0;
	
	unk_0xF3148AAF69AF9CBC(&uVar0, iParam0);
	return uVar0;
}

int func_7()
{
	return -1;
}

void func_8()
{
	func_9(func_6(unk_0x1888BBA7387E194A("freemode", -1, 0)), 0);
	if (unk_0x2E0A9E3291F398E3(0, 100) < Global_262145.f_123)
	{
		if (unk_0xD49F8CA46CF1D5B3() >= Global_262145.f_124)
		{
			func_9(func_6(unk_0x1888BBA7387E194A("freemode", -1, 0)), 1);
			unk_0xF3148AAF69AF9CBC(&(Global_2446446.f_1), 4);
		}
	}
}

void func_9(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 369;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 3, iParam0);
	}
}

int func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	
	iLocal_107 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0xA89AE5060232966A(unk_0x6528B1497E4313F1(iVar0)) && func_12(unk_0x6528B1497E4313F1(iVar0), 1, 1))
		{
			if (unk_0x236D8AD7EE179F46(Local_116[iVar0 /*3*/].f_1, 0))
			{
				if (!unk_0x236D8AD7EE179F46(Local_116[iVar0 /*3*/].f_1, 4))
				{
					iLocal_107++;
				}
				if (Param0.f_1 == 18)
				{
					if (unk_0xD49F8CA46CF1D5B3() >= func_11(Param0.f_0))
					{
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (iLocal_107 >= func_11(Param0.f_0))
				{
					if (Param0.f_1 == 2)
					{
						if (!unk_0x236D8AD7EE179F46(Global_2446446.f_1, 2))
						{
							unk_0xF3148AAF69AF9CBC(&(Global_2446446.f_1), 2);
						}
					}
					return 1;
				}
			}
			else if (unk_0x236D8AD7EE179F46(Local_116[iVar0 /*3*/].f_1, 1))
			{
			}
			else if (!unk_0x236D8AD7EE179F46(Local_116[iVar0 /*3*/].f_1, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 2;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return Global_262145.f_4851;
		
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
		
		case 8:
			return Global_262145.f_8884;
		
		case 9:
			return Global_262145.f_8789;
		
		case 10:
			return Global_262145.f_8836;
		
		case 11:
			return Global_262145.f_8857;
		
		case 12:
			return Global_262145.f_8907;
		
		case 13:
			return Global_262145.f_8925;
		
		case 14:
			return Global_262145.f_8940;
		
		case 15:
			return Global_262145.f_8951;
		
		case 16:
			return Global_262145.f_8959;
		
		case 17:
			return Global_262145.f_8973;
		
		case 18:
			return Global_262145.f_8982;
		
		default:
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA89AE5060232966A(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_13()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (func_14())
	{
		return 9;
	}
	iVar0 = 0;
	while (iVar0 < 19)
	{
		fVar1 = (fVar1 + Global_2446446.f_8[iVar0 /*5*/].f_2);
		iVar0++;
	}
	fVar3 = unk_0x3ECD26BA4F631EE2(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		fVar2 = (fVar2 + Global_2446446.f_8[iVar0 /*5*/].f_2);
		if (fVar3 < fVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_14()
{
	if (Global_2446446.f_8[9 /*5*/].f_2 >= 1f)
	{
		return func_16();
	}
	return 0;
}

float func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_6482;
		
		case 1:
			return Global_262145.f_6479;
		
		case 2:
			return Global_262145.f_6480;
		
		case 3:
			return Global_262145.f_6481;
		
		case 4:
			return Global_262145.f_6483;
		
		case 5:
			return Global_262145.f_6484;
		
		case 6:
			return Global_262145.f_6485;
		
		case 7:
			return Global_262145.f_6865;
		
		case 8:
			return Global_262145.f_7962;
		
		case 9:
			return Global_262145.f_7964;
		
		case 10:
			return Global_262145.f_7960;
		
		case 11:
			return Global_262145.f_7967;
		
		case 12:
			return Global_262145.f_8397;
		
		case 13:
			return Global_262145.f_8399;
		
		case 14:
			return Global_262145.f_8400;
		
		case 15:
			return Global_262145.f_8401;
		
		case 16:
			return Global_262145.f_8402;
		
		case 17:
			return Global_262145.f_8406;
		
		case 18:
			return Global_262145.f_8983;
		
		default:
	}
	return 0f;
}

int func_16()
{
	if (Global_2446446.f_170 >= Global_2446446.f_171)
	{
		return 1;
	}
	return 0;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_5028;
		
		case 1:
			return Global_262145.f_5025;
		
		case 2:
			return Global_262145.f_5026;
		
		case 3:
			return Global_262145.f_5027;
		
		case 4:
			return Global_262145.f_6533;
		
		case 5:
			return Global_262145.f_6426;
		
		case 6:
			return Global_262145.f_6431;
		
		case 7:
			return Global_262145.f_6436;
		
		case 8:
			return Global_262145.f_7963;
		
		case 9:
			return Global_262145.f_7965;
		
		case 10:
			return Global_262145.f_7961;
		
		case 11:
			return (Global_262145.f_9129 && Global_262145.f_9128);
		
		case 12:
			return Global_262145.f_8391;
		
		case 13:
			return Global_262145.f_8393;
		
		case 14:
			return Global_262145.f_8394;
		
		case 15:
			return Global_262145.f_8395;
		
		case 16:
			return Global_262145.f_8396;
		
		case 17:
			return Global_262145.f_8405;
		
		case 18:
			return Global_262145.f_8984;
		
		default:
	}
	return 0;
}

int func_18(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_26(iParam0, bParam3, bParam4) || func_25(iParam1, bParam3, bParam4)) || func_19(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0, bool bParam1, bool bParam2)
{
	return func_20(2, iParam0, 0, bParam1, bParam2);
}

int func_20(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x236D8AD7EE179F46(Global_1344683, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_24(iParam0) - func_23(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_22(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_23(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_24(iParam0) - func_23(iParam0, 1));
		}
		if (!bParam4 && Global_1585045[unk_0x1329891157A54C63() /*400*/] != 3)
		{
			iVar1 = (iVar1 - func_21(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
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

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1344683.f_1;
			break;
		
		case 1:
			return Global_1344683.f_2;
			break;
		
		case 2:
			return Global_1344683.f_3;
			break;
	}
	return 0;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xA360A5024482E898())
			{
				return Global_2414506[iVar0 /*255*/].f_206;
			}
			else
			{
				return unk_0xE2146C98F90922C2(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xA360A5024482E898())
			{
				return Global_2414506[iVar0 /*255*/].f_207;
			}
			else
			{
				return unk_0xD2E2B0775C0B702C(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xA360A5024482E898())
			{
				return Global_2414506[iVar0 /*255*/].f_208;
			}
			else
			{
				return unk_0xAE49493A61A9139F(!bParam1);
			}
			break;
	}
	return 0;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1344691;
			break;
		
		case 1:
			return Global_1344692;
			break;
		
		case 2:
			return Global_1344693;
			break;
	}
	return 0;
}

int func_25(int iParam0, bool bParam1, bool bParam2)
{
	return func_20(1, iParam0, 0, bParam1, bParam2);
}

int func_26(int iParam0, bool bParam1, bool bParam2)
{
	return func_20(0, iParam0, 0, bParam1, bParam2);
}

int func_27(int iParam0)
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
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 0;
}

int func_28(int iParam0)
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
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 0;
}

int func_29(int iParam0)
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
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 24;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 9)
	{
		return 0;
	}
	if (Global_262145.f_6440 > 0 && Global_262145.f_6440 <= 19)
	{
		if (!Global_2446446.f_104[(Global_262145.f_6440 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_6440)
			{
				if (Global_2446446.f_104[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

void func_31(int iParam0, float fParam1)
{
	if (iParam0 != -1)
	{
		Global_2446446.f_8[iParam0 /*5*/].f_2 = fParam1;
	}
}

void func_32(int iParam0)
{
	Global_2446446.f_2 = iParam0;
}

int func_33(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_34(uParam0, bParam2, 0);
	if (unk_0x1C6DF6AD69BE853E() && !bParam2)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_34(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1C6DF6AD69BE853E() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD74C7D8D2E5E43D2();
			}
			else
			{
				*uParam0 = unk_0xE36DF6414E5CCBBF();
			}
		}
		else
		{
			*uParam0 = unk_0x48E480685981C7D4();
		}
		uParam0->f_1 = 1;
	}
}

void func_35(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_36()
{
	return 0;
}

int func_37()
{
	int iVar0;
	int iVar1;
	
	Global_2446446.f_169 = Global_262145.f_6442;
	iVar0 = 0;
	while (iVar0 < 19)
	{
		Global_2446446.f_8[iVar0 /*5*/] = iVar0;
		Global_2446446.f_8[iVar0 /*5*/].f_1 = func_38(iVar0);
		Global_2446446.f_8[iVar0 /*5*/].f_2 = 1f;
		iVar0++;
	}
	if (Global_262145.f_6440 > 0 && Global_262145.f_6440 <= 19)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_6440)
		{
			Global_2446446.f_104[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			Global_2446446.f_124[iVar1 /*2*/] = -1;
			Global_2446446.f_124[iVar1 /*2*/].f_1 = -1;
			iVar1++;
		}
	}
	func_4();
	return 1;
}

int func_38(int iParam0)
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
			return 19;
			break;
		
		case 4:
			return 53;
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
		
		case 8:
			return 39;
			break;
		
		case 9:
			return 40;
			break;
		
		case 10:
			return 36;
			break;
		
		case 11:
			return 37;
			break;
		
		case 12:
			return 41;
			break;
		
		case 13:
			return 42;
			break;
		
		case 14:
			return 43;
			break;
		
		case 15:
			return 44;
			break;
		
		case 16:
			return 45;
			break;
		
		case 17:
			return 46;
			break;
		
		case 18:
			return 47;
			break;
	}
	return 0;
}

void func_39()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 10000;
	switch (Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_2)
	{
		case 0:
			if (Global_2446446.f_2 >= 4 && Global_2446446.f_2 != 8)
			{
				if (unk_0x236D8AD7EE179F46(Global_2446446.f_1, 2))
				{
					unk_0xF3148AAF69AF9CBC(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 0);
					unk_0xC69E84EBBD7166E6(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 1);
				}
				if (!unk_0x236D8AD7EE179F46(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1, 1))
				{
					func_104(4);
				}
				else if (!unk_0x236D8AD7EE179F46(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1, 3))
				{
					func_35(&uLocal_108);
					unk_0xF3148AAF69AF9CBC(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 3);
				}
				else
				{
					if (unk_0x236D8AD7EE179F46(uLocal_86, 1))
					{
						iVar0 = 500;
					}
					if (func_33(&uLocal_108, iVar0, 0))
					{
						unk_0xC69E84EBBD7166E6(&uLocal_86, 1);
						func_104(4);
						unk_0xC69E84EBBD7166E6(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 3);
					}
				}
			}
			else if (unk_0x236D8AD7EE179F46(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1, 1))
			{
				unk_0xC69E84EBBD7166E6(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 1);
			}
			break;
		
		case 4:
			if (unk_0x236D8AD7EE179F46(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1, 0))
			{
				if (Global_2446446.f_2 == 8)
				{
					func_104(8);
					unk_0xC69E84EBBD7166E6(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 0);
					unk_0xC69E84EBBD7166E6(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 4);
				}
				else if (Global_2446446.f_2 == 5)
				{
					func_104(5);
					unk_0xC69E84EBBD7166E6(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 0);
					unk_0xC69E84EBBD7166E6(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 4);
				}
				else if (Global_2446446.f_2 >= 6)
				{
					func_104(6);
					unk_0xC69E84EBBD7166E6(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 0);
					unk_0xC69E84EBBD7166E6(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 4);
				}
				else if (Global_2446446.f_2 == 3)
				{
					func_104(0);
					unk_0xC69E84EBBD7166E6(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 0);
					unk_0xC69E84EBBD7166E6(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 4);
				}
			}
			else
			{
				iVar1 = 0;
				if (((((((((((((((!unk_0x9B20331E99DD1C1C() && !func_103(unk_0x1329891157A54C63())) && !func_102()) && !func_101()) && !func_100()) && !func_99()) && !func_97(unk_0x1329891157A54C63())) && !unk_0x726DA50057167075()) && !func_95(unk_0x1329891157A54C63())) && func_93()) && !func_92(unk_0x1329891157A54C63(), 0)) && !func_92(unk_0x1329891157A54C63(), 7)) && !func_92(unk_0x1329891157A54C63(), 21)) && !func_91(unk_0x1329891157A54C63(), 0)) && func_12(unk_0x1329891157A54C63(), 1, 1)) && !func_90(unk_0x1329891157A54C63()))
				{
					iVar2 = func_89(Global_2446446.f_3);
					if (((iVar2 >= 0 && (func_87(iVar2) || func_87(0))) || func_85(unk_0x1329891157A54C63())) || !func_84(unk_0x1329891157A54C63()))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 4);
					}
					switch (Global_2446446.f_3)
					{
						case 0:
							if (((func_79(0) && func_77(func_78(unk_0x1329891157A54C63()), 40f, 40f, 40f)) && unk_0xA04824262F150982(unk_0x81873881071CD9FE()) < 10f) && !func_76())
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 1:
							if (func_66(31, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 2:
							if (func_66(20, 0) && !func_65())
							{
								iVar1 = func_57();
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 3:
							if (func_66(19, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 4:
							if (((((func_66(20, 0) && !func_92(unk_0x1329891157A54C63(), 1)) && !func_92(unk_0x1329891157A54C63(), 2)) && !func_92(unk_0x1329891157A54C63(), 3)) && !Global_2422670.f_3127) && !func_55())
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 5:
							if (func_66(124, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 6:
							if (func_66(126, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 7:
							if (func_66(127, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 8:
							if (func_66(132, 0) || func_52(unk_0x1329891157A54C63(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 9:
							if (func_66(133, 0) || func_52(unk_0x1329891157A54C63(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 10:
							if (func_66(131, 0) || func_52(unk_0x1329891157A54C63(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 11:
							iVar1 = 1;
							break;
						
						case 12:
							iVar1 = 1;
							break;
						
						case 13:
							if (func_66(138, 0) || func_52(unk_0x1329891157A54C63(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 14:
							if (func_66(139, 0) || func_52(unk_0x1329891157A54C63(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 15:
							if (func_66(140, 0) || func_52(unk_0x1329891157A54C63(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 16:
							if (func_66(141, 0) || func_52(unk_0x1329891157A54C63(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 17:
							if (func_66(144, 0) || func_52(unk_0x1329891157A54C63(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 18:
							if (func_66(146, 0) || func_52(unk_0x1329891157A54C63(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						default:
							iVar1 = 2;
							break;
					}
				}
				else
				{
					iVar1 = 2;
				}
				if (iVar1 == 1)
				{
					unk_0xF3148AAF69AF9CBC(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 0);
				}
				else if (iVar1 == 2)
				{
					if (!func_93() && !unk_0x236D8AD7EE179F46(uLocal_86, 0))
					{
						unk_0xF3148AAF69AF9CBC(&uLocal_86, 1);
					}
					func_104(0);
					unk_0xF3148AAF69AF9CBC(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 1);
					unk_0xC69E84EBBD7166E6(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 4);
				}
			}
			break;
		
		case 5:
			if (Global_2446446.f_2 == 6)
			{
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_202.f_1), 1);
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_202.f_1), 2);
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_202.f_1), 3);
				func_104(6);
			}
			else if (unk_0x236D8AD7EE179F46(Global_2446446.f_1, 3) && func_51(&(Global_2446446.f_165)))
			{
				func_44();
			}
			break;
		
		case 6:
			uVar3 = func_2(Global_2446446.f_3.f_1);
			if (Global_2446446.f_3.f_1 == 19)
			{
				if (Global_2451473.f_1550)
				{
					if (Global_2446446.f_2 == 7)
					{
						func_104(7);
					}
				}
				else if (Global_2451473.f_1551)
				{
					Global_2451473.f_1551 = 0;
					func_104(0);
					unk_0xF3148AAF69AF9CBC(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 1);
				}
			}
			else if (!unk_0x236D8AD7EE179F46(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1, 2))
			{
				Local_87.f_16 = -1;
				if (unk_0x968BF1C2C695B61A(unk_0x8DAF7A748E41AD46(uVar3)) == 0)
				{
					if (!unk_0x253C9FE2EFE18AEC(uVar3, -1, 0, 0) || unk_0x74F3B9AA9AAFBFDC(uVar3, -1, 0) < 32)
					{
						if (!unk_0x253C9FE2EFE18AEC(uVar3, -1, 1, 0))
						{
							Local_87.f_0 = Global_2446446.f_3.f_1;
							if (func_40(Local_87, 0))
							{
								unk_0xF3148AAF69AF9CBC(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 2);
							}
						}
					}
				}
			}
			else if (unk_0x968BF1C2C695B61A(unk_0x8DAF7A748E41AD46(uVar3)) != 0)
			{
				if (Global_2446446.f_2 == 7)
				{
					func_104(7);
					unk_0xF3148AAF69AF9CBC(&uLocal_86, 0);
					unk_0xC69E84EBBD7166E6(&(Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_1), 2);
				}
			}
			break;
		
		case 7:
			if (Global_2446446.f_2 != 7)
			{
				func_104(8);
			}
			break;
		
		case 8:
			func_104(0);
			break;
	}
}

int func_40(struct<17> Param0, var uParam17, var uParam18, var uParam19, bool bParam20)
{
	char cVar0[32];
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_43())
	{
		return 0;
	}
	bParam20 = bParam20;
	StringCopy(&cVar0, func_2(Param0.f_0), 32);
	if (unk_0x3E2AF82E5D31BA07(&cVar0))
	{
		unk_0xE0013E74AB6963DC(&cVar0);
		if (unk_0x06D4A1BE3DF77306(&cVar0))
		{
			iVar8 = 1;
			if (bParam20)
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 16)
				{
					if (unk_0x253C9FE2EFE18AEC(&cVar0, iVar9, iVar8, 0))
					{
						return 0;
					}
					iVar9++;
				}
			}
			else if (unk_0x253C9FE2EFE18AEC(&cVar0, Param0.f_16, iVar8, 0))
			{
				return 0;
			}
			iVar10 = unk_0xB8BA7F44DF1575E1(&cVar0, &Param0, 20, func_41(Param0.f_0));
			unk_0xD25F9F5A80824C77(&cVar0);
			if (iVar10 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 66:
		case 73:
		case 67:
		case 71:
		case 74:
		case 75:
		case 68:
		case 76:
		case 77:
		case 69:
		case 78:
		case 70:
		case joaat("mpsv_lp0_31"):
		case 72:
			return 30000;
		
		default:
	}
	if (func_42(iParam0) == 3)
	{
		return 8344;
	}
	else if (func_42(iParam0) == 7)
	{
		if (((((iParam0 == 45 || iParam0 == 43) || iParam0 == 39) || iParam0 == 37) || iParam0 == 41) || iParam0 == 47)
		{
			return 8344;
		}
		return 3650;
	}
	else if (func_42(iParam0) == 0)
	{
		return 3650;
	}
	else if (func_42(iParam0) == 2)
	{
		return 3650;
	}
	else if (func_42(iParam0) == 6)
	{
		if (((((((iParam0 == 18 || iParam0 == 22) || iParam0 == 24) || iParam0 == 17) || iParam0 == 62) || iParam0 == 63) || iParam0 == 65) || iParam0 == 54)
		{
			return 3650;
		}
		if (iParam0 == 52)
		{
			return 8344;
		}
		if ((((((((((iParam0 == 9 || iParam0 == 16) || iParam0 == 15) || iParam0 == 49) || iParam0 == 48) || iParam0 == 19) || iParam0 == 53) || iParam0 == 50) || iParam0 == 21) || iParam0 == 64) || iParam0 == 65)
		{
			return 2050;
		}
		if (iParam0 == 58)
		{
			return 2812;
		}
	}
	return 1424;
}

int func_42(int iParam0)
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
		
		case 36:
			return 7;
		
		case 37:
			return 7;
		
		case 38:
			return 7;
		
		case 39:
			return 7;
		
		case 40:
			return 7;
		
		case 41:
			return 7;
		
		case 42:
			return 7;
		
		case 43:
			return 7;
		
		case 44:
			return 7;
		
		case 45:
			return 7;
		
		case 46:
			return 7;
		
		case 47:
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
		
		case 48:
			return 6;
		
		case 49:
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
		
		case 52:
			return 6;
		
		case 62:
			return 6;
		
		case 63:
			return 6;
		
		case 64:
			return 6;
		
		case 65:
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
		
		case 60:
			return 6;
		
		case 61:
			return 6;
		
		case 50:
			return 6;
		
		case 53:
			return 6;
		
		case 54:
			return 6;
		
		case 51:
			return 6;
		
		case 55:
			return 6;
		
		case 58:
			return 6;
		
		case 59:
			return 6;
		
		case 66:
			return 6;
		
		case 73:
			return 0;
		
		case 67:
			return 6;
		
		case 74:
			return 0;
		
		case 72:
			return 0;
		
		case 75:
			return 0;
		
		case 68:
			return 6;
		
		case 76:
			return 0;
		
		case 71:
			return 6;
		
		case 77:
			return 0;
		
		case 69:
			return 6;
		
		case 78:
			return 0;
		
		case 70:
			return 6;
		
		case 56:
			return 6;
		
		case 57:
			return 6;
		
		case joaat("mpsv_lp0_31"):
			return 6;
		
		default:
	}
	return 11;
}

bool func_43()
{
	return Global_2428865.f_568;
}

void func_44()
{
	if (Global_2411960.f_84.f_2 == 1)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_202.f_1, 1))
		{
			if (((Global_262145.f_45 * 120000) - func_50(&(Global_2446446.f_165), 0, 0)) < 360000)
			{
				if (!unk_0x236D8AD7EE179F46(Global_2451473.f_202.f_1, 1))
				{
					if (func_66(31, 0) && !func_100())
					{
						if (Global_262145.f_45 < 3)
						{
							func_45("ACD_TSCH", Global_262145.f_45, 1);
						}
						else
						{
							func_45("ACD_TSCH", 3, 1);
						}
					}
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_202.f_1), 1);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_50(&(Global_2446446.f_165), 0, 0)) < 600000)
			{
				if (!unk_0x236D8AD7EE179F46(Global_2451473.f_202.f_1, 2))
				{
					if (func_66(31, 0) && !func_100())
					{
						func_45("ACD_TSCH", 5, 1);
					}
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_202.f_1), 2);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_50(&(Global_2446446.f_165), 0, 0)) < 1200000)
			{
				if (!unk_0x236D8AD7EE179F46(Global_2451473.f_202.f_1, 3))
				{
					if (func_66(31, 0) && !func_100())
					{
						func_45("ACD_TSCH", 10, 1);
					}
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_202.f_1), 3);
				}
			}
		}
	}
}

int func_45(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x02A6B267064771B1(sParam0);
	unk_0x6D55FF05D62B91BC(iParam1);
	iVar0 = unk_0x267D6EB296008122(0, 1);
	func_46(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_46(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_49() || !unk_0x726DA50057167075()) || !func_52(unk_0x1329891157A54C63(), 0))
	{
		return;
	}
	iVar0 = func_47(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1707570.f_5[iVar0 /*53*/] = iParam0;
		Global_1707570.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1707570.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1707570.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1707570.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1707570.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1707570.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1707570.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1707570 - 1))
	{
		if (iParam0 > Global_1707570.f_5[iVar0 /*53*/].f_1)
		{
			func_48(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1707570++;
	if (Global_1707570 > 5)
	{
		Global_1707570 = 5;
		return Global_1707570;
	}
	return (Global_1707570 - 1);
}

void func_48(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1707570.f_5[iVar0 /*53*/] = { Global_1707570.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_49()
{
	return unk_0x2D6859674806FDCE(-1762644250);
}

int func_50(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1C6DF6AD69BE853E() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0);
		}
		else
		{
			return unk_0x996F735E5C03B101(unk_0xE36DF6414E5CCBBF(), *uParam0);
		}
	}
	return unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0);
}

var func_51(var uParam0)
{
	return uParam0->f_1;
}

bool func_52(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_53(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
	}
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_54()
{
	return Global_1312729;
}

int func_55()
{
	if (!func_56())
	{
		return 0;
	}
	if (Global_2404170.f_2 == Global_262145.f_6878 || Global_2404170.f_2 == Global_262145.f_6902)
	{
		return 1;
	}
	return 0;
}

int func_56()
{
	switch (Global_2404170)
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

int func_57()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<3> Var5;
	
	iVar1 = 0;
	Var5 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
	if (!bVar0)
	{
		if (unk_0x9F7E94EEF720E913(Var5, iLocal_110, &Local_111, &uLocal_114, &uVar2, 0, 1077936128, 0))
		{
			if (unk_0x0D6E79537424BACE(-1367.557f, -3220.598f, 12.9448f, Var5, 1) >= 600f)
			{
				if (unk_0x0D6E79537424BACE(Var5, Local_111, 1) >= 75f)
				{
					unk_0xCF95B143971C4F42((Var5.f_0 - 250f), (Var5.f_1 - 250f), (Var5.f_0 + 250f), (Var5.f_1 + 250f));
					if (unk_0xABBEAD184B4628FB(Local_111, &uVar3, &uVar4))
					{
						if (uVar4 & 1 == 0)
						{
							if (iLocal_115 <= 0)
							{
								if (func_58(Local_111, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
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
		iLocal_110 += 3;
		if (iLocal_110 >= 150)
		{
			iLocal_110 = 40;
			iLocal_115++;
		}
	}
	if (iLocal_115 > 0)
	{
		iVar1 = 2;
	}
	return iVar1;
}

int func_58(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404607 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x8201B8E256A0E8AB(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xBAE0934DE3A0C108(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xBAE0934DE3A0C108(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2EBFC992EF940536(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam13)
	{
		if (unk_0x7781EEE3B32C0EBF(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404607++;
	if (fParam14 > 0f)
	{
		if (func_61(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_59(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404607++;
	return 1;
}

int func_59(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0x1329891157A54C63(), 1, 1))
		{
			if (!unk_0x29AFA2493D7C23D0())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0D6E79537424BACE(func_78(unk_0x1329891157A54C63()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x547A2AA158CA2804(Param0, fParam3))
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
		if (func_12(iVar1, 1, 1))
		{
			if (!func_52(iVar1, 0) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1329891157A54C63()))
				{
					if ((func_60(iVar1) || !bParam10) && !Global_2414506[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0xCCFDB2B968281FE8(iVar1) == unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xCCFDB2B968281FE8(iVar1) != unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))) || unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0x0D6E79537424BACE(func_78(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xCCFDB2B968281FE8(iVar1) != iParam8 || unk_0xCCFDB2B968281FE8(iVar1) == -1)
						{
							if (unk_0x0D6E79537424BACE(func_78(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
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

int func_60(int iParam0)
{
	if (unk_0x3C965174F280226D(unk_0xE495E987CB2BE7EF(iParam0)) || Global_2414506[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

int func_61(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x1329891157A54C63() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
				{
					if (!bParam7 || (!unk_0x5FEB513A4402FD59(unk_0xE495E987CB2BE7EF(iVar1)) && func_60(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) != unk_0xCCFDB2B968281FE8(iVar1))) || unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1)
						{
							if (((unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1 && uParam9) && bParam6) && func_62(iVar1))
							{
							}
							else if (unk_0x86CCCD2FAE9D5E65(unk_0xE495E987CB2BE7EF(iVar1)))
							{
								if (unk_0x0D6E79537424BACE(func_78(iVar1), Param0, 1) < fParam3)
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

int func_62(int iParam0)
{
	if (func_64(unk_0x1329891157A54C63(), iParam0))
	{
		return 1;
	}
	Global_2450501 = { func_63(iParam0) };
	if (unk_0x5762EE910D467202(&Global_2450501))
	{
		return 1;
	}
	return 0;
}

struct<13> func_63(var uParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(uParam0, &Var0, 13);
	return Var0;
}

int func_64(int iParam0, var uParam1)
{
	if (unk_0x80622F5ED5957337())
	{
		Global_2450501 = { func_63(iParam0) };
		Global_2450514 = { func_63(uParam1) };
		if (unk_0x464883E45616A088(&Global_2450501))
		{
			if (unk_0x464883E45616A088(&Global_2450514))
			{
				unk_0xEF956A1EC046AA4A(&Global_2450431, 35, &Global_2450501);
				unk_0xEF956A1EC046AA4A(&Global_2450466, 35, &Global_2450514);
				if (Global_2450431 == Global_2450466)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_65()
{
	if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_66(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6049 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_71(unk_0x1329891157A54C63(), 85))
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
		if (Global_262145.f_4850 == 1)
		{
			return 1;
		}
	}
	if (func_70() || func_69())
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
			if (func_67())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return unk_0x236D8AD7EE179F46(Global_1573858[iVar1], iVar0);
}

int func_67()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1623, 23))
	{
		return 1;
	}
	if (func_70())
	{
		return 1;
	}
	if (func_69())
	{
		return 1;
	}
	uVar0 = Global_1343666[func_68(-1)];
	if (unk_0x236D8AD7EE179F46(uVar0, 7))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1623), 23);
		return 1;
	}
	return 0;
}

int func_68(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

bool func_69()
{
	return Global_1315880;
}

bool func_70()
{
	return Global_1315882;
}

bool func_71(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_74())
	{
		return 0;
	}
	if (func_73())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_72(iParam1);
	iVar1 = uVar0;
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_314, iVar1);
}

int func_72(int iParam0)
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

bool func_73()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_132, 3);
}

int func_74()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_70())
	{
		return 1;
	}
	if (func_69())
	{
		return 1;
	}
	return func_75(120, -1);
}

int func_75(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2478104[iParam0 /*5*/][func_68(iParam1)];
	if (unk_0xFD72912C9064BF1F(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_76()
{
	if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_77(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	
	if (unk_0x18CFF0F00246ABBC(Param0, &Var0, 0, 1077936128, 0))
	{
		if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Var0, Param3, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_78(int iParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

int func_79(bool bParam0)
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (func_83(unk_0x1329891157A54C63(), 1))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_102())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0x726DA50057167075())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0x9B20331E99DD1C1C())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!func_66(19, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_80(9))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	return 1;
}

bool func_80(int iParam0)
{
	return !func_81(iParam0);
}

int func_81(int iParam0)
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
			if (Global_262145.f_5025)
			{
				return 0;
			}
			if (func_92(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5026)
			{
				return 0;
			}
			if (func_92(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5027)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5028)
			{
				return 0;
			}
			if (func_92(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_82(4))
			{
				return 0;
			}
			if (func_92(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_82(4))
			{
				return 0;
			}
			if (func_92(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_82(4))
			{
				return 0;
			}
			if (func_92(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 19:
		case 21:
		case 22:
		case 23:
			if (func_82(4))
			{
				return 0;
			}
			if (func_92(unk_0x1329891157A54C63(), 7))
			{
				return 0;
			}
			if (unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 0) || unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_248.f_5, 1))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_82(4))
			{
				return 0;
			}
			if (func_92(unk_0x1329891157A54C63(), 7))
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

int func_82(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0x6528B1497E4313F1(iVar0), 0, 1))
		{
			if (unk_0x236D8AD7EE179F46(Global_2414506[iVar0 /*255*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_83(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_95(iParam0))
		{
			return 1;
		}
	}
	if (Global_1585045[iParam0 /*400*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_84(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_128, 22);
}

int func_85(int iParam0)
{
	if (func_52(iParam0, 0))
	{
		return 1;
	}
	if (func_86())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_86()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_87(int iParam0)
{
	var uVar0;
	
	uVar0 = func_88(2452, -1, 0);
	return unk_0x236D8AD7EE179F46(uVar0, iParam0);
}

int func_88(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_68(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 12;
		
		case 2:
			return 13;
		
		case 3:
			return 14;
		
		case 4:
			return 15;
		
		case 5:
			return 16;
		
		case 6:
			return 18;
		
		case 7:
			return 17;
		
		case 8:
			return 1;
		
		case 9:
			return 2;
		
		case 10:
			return 10;
		
		case 11:
			return 8;
		
		case 12:
			return 11;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 4;
		
		case 16:
			return 9;
		
		case 17:
			return 3;
		
		case 18:
			return 7;
		
		default:
	}
	return -1;
}

int func_90(int iParam0)
{
	if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 14))
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 11))
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0, bool bParam1)
{
	if (Global_1585045[iParam0 /*400*/].f_248.f_7 > 0)
	{
		if (bParam1)
		{
			if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 0))
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

bool func_92(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_205, iParam1);
}

int func_93()
{
	if (func_94() == 0)
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	return Global_1312466.f_18;
}

bool func_95(int iParam0)
{
	return func_96(iParam0);
}

bool func_96(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

int func_97(int iParam0)
{
	switch (func_98(iParam0))
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
		case 31:
			return 1;
		
		default:
	}
	return 0;
}

int func_98(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_177;
}

bool func_99()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/].f_177 != 0;
}

bool func_100()
{
	return Global_1315892;
}

bool func_101()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/] == 5;
}

bool func_102()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 0);
}

int func_103(int iParam0)
{
	if (func_83(iParam0, 1))
	{
		if (Global_1585045[iParam0 /*400*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

void func_104(int iParam0)
{
	Local_116[unk_0x04EFA8D3BE8500E7() /*3*/].f_2 = iParam0;
}

int func_105()
{
	return 1;
}

int func_106()
{
	return Global_2446446;
}

int func_107(int iParam0)
{
	return Local_116[iParam0 /*3*/];
}

int func_108()
{
	bool bVar0;
	
	func_114(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315867 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 1;
		}
	}
	if (func_43())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_113())
	{
		return 1;
	}
	if (func_112(157))
	{
		if (!func_111())
		{
			return 1;
		}
	}
	if (func_112(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_109() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_109()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_109()
{
	switch (func_110())
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

int func_110()
{
	return Global_24946;
}

bool func_111()
{
	return Global_2428865.f_573;
}

int func_112(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_113()
{
	return Global_2436988;
}

void func_114(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xDC8C46445C29336D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 310:
					func_115(iVar0);
					break;
				
				case 2:
					unk_0xDC8C46445C29336D(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 54)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_115(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(uVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(uVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_116(uVar4, &bVar5))
						{
							unk_0xAA33E712AB3178EC(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE0913C01F5C0CC3D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_116(var uParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0xE86442941AE40E75(uParam0))
		{
			if (unk_0x28BE3924E7CDB27F(uParam0))
			{
				unk_0xD768713E73165208(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(uParam0, 0))
		{
			if (unk_0x4D2386673BCED434(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_117()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_118()
{
	Global_2451473.f_1550 = 0;
	Global_2451473.f_1551 = 0;
	Global_2451473.f_1553 = 0;
	Global_2451473.f_1552 = 0;
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_202.f_1), 1);
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_202.f_1), 2);
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_202.f_1), 3);
	unk_0xC23A229F78DAD92A();
}

int func_119(struct<20> Param0)
{
	func_125();
	func_123(func_124(Param0.f_0), Param0);
	unk_0x473FC121743BE890(0);
	func_120(0, -1, 0);
	unk_0x19F630B59442E836(&Global_2446446, 172);
	unk_0xCBCBE0D8DD0EF168(&Local_116, 97);
	unk_0xE6E19E3BBABCBC24(0);
	Local_116[unk_0x04EFA8D3BE8500E7() /*3*/] = 0;
	func_104(0);
	return 1;
}

int func_120(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_122();
			}
			else
			{
				return 0;
			}
		}
		if (!func_121())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_122();
					}
					else
					{
						return 0;
					}
				}
				if (func_43())
				{
					if (!bParam2)
					{
						func_122();
					}
					else
					{
						return 0;
					}
				}
				if (func_112(155))
				{
					if (!bParam2)
					{
						func_122();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x25E16CB232F8AB91())
			{
				if (!bParam2)
				{
					func_122();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x428E5E7D8B8CA428();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			if (!bParam2)
			{
				func_122();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x25E16CB232F8AB91())
	{
		if (!bParam2)
		{
			func_122();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_121()
{
	return Global_1315867;
}

void func_122()
{
	unk_0xC23A229F78DAD92A();
}

void func_123(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_122();
	}
	unk_0xBA029707F4D8FFB0(uParam0, 0, Param1.f_16);
}

int func_124(int iParam0)
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
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
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
		
		case 48:
			return 32;
		
		case 49:
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
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 32;
		
		case 66:
			return 2;
		
		case 71:
			return 1;
		
		case 67:
			return 2;
		
		case 68:
			return 4;
		
		case 69:
			return 2;
		
		case 70:
			return 2;
		
		case 52:
			return 1;
		
		case 72:
			return 2;
		
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
			return 0;
		
		case joaat("mpsv_lp0_31"):
			return 1;
		
		default:
	}
	return 0;
}

void func_125()
{
	struct<172> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_2 = 1065353216;
	Var0.f_8 = 19;
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
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_104 = 19;
	Var0.f_124 = 20;
	Var0.f_124.f_1 = -1;
	Var0.f_124.f_1.f_1 = -1;
	Var0.f_124.f_1.f_2 = -1;
	Var0.f_124.f_1.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_124.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Global_2446446 = { Var0 };
}

