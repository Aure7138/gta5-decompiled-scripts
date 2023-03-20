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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
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
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_56 = 0;
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	struct<20> Local_90 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	struct<3> Local_114 = { 0, 0, 0 } ;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	struct<3> Local_119[32];
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_113 = 40;
	if (unk_0x00AAD79B42B3E036())
	{
		if (!func_123(ScriptParam_0))
		{
			func_122();
		}
	}
	while (true)
	{
		func_121();
		if (func_112())
		{
			func_122();
		}
		switch (func_111(unk_0xA1468451F71B8A98()))
		{
			case 0:
				if (func_110() == 1)
				{
					if (func_109())
					{
						Local_119[unk_0xA1468451F71B8A98() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_110() == 1)
				{
					func_39();
				}
				else if (func_110() == 3)
				{
					Local_119[unk_0xA1468451F71B8A98() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_122();
				break;
		}
		if (unk_0xFA4B36553B2A7802())
		{
			switch (func_110())
			{
				case 0:
					if (func_37())
					{
						Global_2452246 = 1;
					}
					break;
				
				case 1:
					if (func_36())
					{
						Global_2452246 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_122();
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
	
	switch (Global_2452246.f_2)
	{
		case 0:
			if (!unk_0xB519E5386FBF69E5(Global_2452246.f_1, 1))
			{
				func_35(&(Global_2452246.f_167));
				unk_0x9956FB0E4B50ECB8(&(Global_2452246.f_1), 1);
			}
			else if (func_33(&(Global_2452246.f_167), Global_2452246.f_169, 0))
			{
				unk_0x73817D396768E4C6(&(Global_2452246.f_1), 1);
				func_32(1);
			}
			break;
		
		case 1:
			if (unk_0x00AAD79B42B3E036())
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
				Global_2452246.f_3 = { Global_2452246.f_8[iVar2 /*5*/] };
				func_32(4);
			}
			else
			{
				Global_2452246.f_169 = (Global_262145.f_6446 / 2);
				func_32(0);
			}
			break;
		
		case 4:
			switch (func_10(Global_2452246.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2452246.f_3)
					{
						case 1:
							func_8();
							break;
					}
					bVar3 = true;
					if (bVar3)
					{
						if (Global_2452246.f_3 == 1)
						{
							if (unk_0xB519E5386FBF69E5(Global_2452246.f_1, 4))
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
						func_31(Global_2452246.f_3, 0f);
						func_32(3);
					}
					break;
				
				case 2:
					func_31(Global_2452246.f_3, 0f);
					func_32(3);
					break;
			}
			break;
		
		case 5:
			if (Global_2452246.f_3 == 1)
			{
				if (unk_0xB519E5386FBF69E5(Global_2452246.f_1, 4))
				{
					if (!unk_0xB519E5386FBF69E5(Global_2452246.f_1, 3))
					{
						func_35(&(Global_2452246.f_165));
						unk_0x9956FB0E4B50ECB8(&(Global_2452246.f_1), 3);
					}
					else if (func_33(&(Global_2452246.f_165), (Global_262145.f_45 * 120000), 0))
					{
						unk_0x73817D396768E4C6(&(Global_2452246.f_1), 3);
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
			if (Global_2452246.f_3.f_1 == 19)
			{
				if (unk_0xA960844B9B166EA9("AM_IMP_EXP", -1, 0) != func_7())
				{
					func_5(func_6(unk_0xA960844B9B166EA9("AM_IMP_EXP", -1, 0)), 1);
					Global_2457699.f_1561 = 0;
					func_32(7);
					func_3(Global_2452246.f_3);
				}
			}
			else if (unk_0x3A062DC2C492FE13(func_2(Global_2452246.f_3.f_1), -1, 0, 0))
			{
				func_32(7);
				func_3(Global_2452246.f_3);
			}
			break;
		
		case 7:
			if (Global_2452246.f_3.f_1 == 19)
			{
				if (Global_2457699.f_1561)
				{
					func_32(8);
					Global_2457699.f_1561 = 0;
				}
			}
			else if (!unk_0x3A062DC2C492FE13(func_2(Global_2452246.f_3.f_1), -1, 0, 0))
			{
				func_32(8);
			}
			break;
		
		case 8:
			if (unk_0xB519E5386FBF69E5(Global_2452246.f_1, 0))
			{
				func_32(0);
				unk_0x73817D396768E4C6(&(Global_2452246.f_1), 0);
			}
			else
			{
				Global_2452246.f_169 = Global_262145.f_6446;
				Global_2452246.f_8[Global_2452246.f_3 /*5*/].f_4 = 1;
				if (unk_0xB519E5386FBF69E5(Global_2452246.f_1, 2))
				{
					unk_0x73817D396768E4C6(&(Global_2452246.f_1), 2);
				}
				if (unk_0xB519E5386FBF69E5(Global_2452246.f_1, 4))
				{
					unk_0x73817D396768E4C6(&(Global_2452246.f_1), 4);
				}
				Global_2452246.f_3 = -1;
				Global_2452246.f_3.f_1 = 0;
				unk_0x9956FB0E4B50ECB8(&(Global_2452246.f_1), 0);
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
		
		case 48:
			return "GB_LIMO_ATTACK";
		
		case 49:
			return "GB_DEATHMATCH";
		
		case 50:
			return "GB_STEAL_VEH";
		
		case 51:
			return "GB_POINT_TO_POINT";
		
		case 52:
			return "GB_TERMINATE";
		
		case 53:
			return "GB_YACHT_ROB";
		
		case 54:
			return "GB_BELLYBEAST";
		
		case 55:
			return "GB_FIVESTAR";
		
		case 56:
			return "GB_ROB_SHOP";
		
		case 57:
			return "GB_COLLECT_MONEY";
		
		case 58:
			return "GB_ASSAULT";
		
		case 59:
			return "GB_VEH_SURV";
		
		case 60:
			return "GB_SIGHTSEER";
		
		case 61:
			return "GB_FLYING_IN_STYLE";
		
		case 62:
			return "GB_FINDERSKEEPERS";
		
		case 63:
			return "GB_HUNT_THE_BOSS";
		
		case 64:
			return "GB_CARJACKING";
		
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
		
		case 65:
			return "AM_BOAT_TAXI";
		
		case 66:
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
		
		case joaat("mpsv_lp0_31"):
			return "am_rollercoaster";
		
		case 80:
			return "am_ferriswheel";
		
		case 81:
			return "AM_LAUNCHER";
		
		case 82:
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
		
		case 67:
			return "fm_hold_up_tut";
		
		case 68:
			return "AM_CAR_MOD_TUT";
		
		case 69:
			return "AM_CONTACT_REQUESTS";
		
		case 70:
			return "am_mission_launch";
		
		case 71:
			return "am_npc_invites";
		
		case 72:
			return "am_lester_cut";
		
		case 75:
			return "AM_VEHICLE_SPAWN";
		
		case 76:
			return "am_ronTrevor_Cut";
		
		case 77:
			return "AM_ARMYBASE";
		
		case 78:
			return "AM_PRISON";
		
		case 83:
			return "AM_ArmWrestling";
		
		case 90:
			return "fm_Bj_race_controler";
		
		case 84:
			return "AM_Darts";
		
		case 91:
			return "fm_deathmatch_controler";
		
		case 89:
			return "FM_Impromptu_DM_Controler";
		
		case 92:
			return "fm_hideout_controler";
		
		case 85:
			return "golf_mp";
		
		case 88:
			return "Pilot_School_MP";
		
		case 93:
			return "FM_Mission_Controller";
		
		case 94:
			return "FM_Race_Controler";
		
		case 86:
			return "Range_Modern_MP";
		
		case 95:
			return "FM_Horde_Controler";
		
		case 87:
			return "tennis_network_mp";
		
		case 73:
			return "am_heist_int";
		
		case 74:
			return "am_lowrider_int";
		
		case 96:
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
		if (Global_262145.f_6444 > 0 && Global_262145.f_6444 <= 19)
		{
			if (!Global_2452246.f_104[(Global_262145.f_6444 - 1)] == -1)
			{
				iVar0 = 0;
				while (iVar0 < (Global_262145.f_6444 - 1))
				{
					Global_2452246.f_104[iVar0] = Global_2452246.f_104[iVar0 + 1];
					iVar0++;
				}
			}
			Global_2452246.f_104[(Global_262145.f_6444 - 1)] = iParam0;
		}
	}
	iVar0 = 18;
	while (iVar0 >= 0)
	{
		Global_2452246.f_124[iVar0 + 1 /*2*/] = { Global_2452246.f_124[iVar0 /*2*/] };
		iVar0 = (iVar0 + -1);
	}
	Global_2452246.f_124[0 /*2*/] = iParam0;
	Global_2452246.f_124[0 /*2*/].f_1 = -1;
	if (iParam0 == 9)
	{
		Global_2452246.f_170 = 0;
		func_4();
	}
	else
	{
		Global_2452246.f_170++;
	}
}

void func_4()
{
	Global_2452246.f_171 = unk_0x0ADD324BC46177EF(Global_262145.f_8952, Global_262145.f_8951);
}

void func_5(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 371;
	Var0.f_1 = unk_0x3F80C6638E3A1A90();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xBBEF99A5C6E20CCC(1, &Var0, 3, iParam0);
	}
}

int func_6(int iParam0)
{
	var uVar0;
	
	unk_0x9956FB0E4B50ECB8(&uVar0, iParam0);
	return uVar0;
}

int func_7()
{
	return -1;
}

void func_8()
{
	func_9(func_6(unk_0xA960844B9B166EA9("freemode", -1, 0)), 0);
	if (unk_0x0ADD324BC46177EF(0, 100) < Global_262145.f_123)
	{
		if (unk_0x6B808843AE53852B() >= Global_262145.f_124)
		{
			func_9(func_6(unk_0xA960844B9B166EA9("freemode", -1, 0)), 1);
			unk_0x9956FB0E4B50ECB8(&(Global_2452246.f_1), 4);
		}
	}
}

void func_9(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 372;
	Var0.f_1 = unk_0x3F80C6638E3A1A90();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xBBEF99A5C6E20CCC(1, &Var0, 3, iParam0);
	}
}

int func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	
	iLocal_110 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0xD18C3CF631455087(unk_0x0F810277E61B87AE(iVar0)) && func_12(unk_0x0F810277E61B87AE(iVar0), 1, 1))
		{
			if (unk_0xB519E5386FBF69E5(Local_119[iVar0 /*3*/].f_1, 0))
			{
				if (!unk_0xB519E5386FBF69E5(Local_119[iVar0 /*3*/].f_1, 4))
				{
					iLocal_110++;
				}
				if (Param0.f_1 == 18)
				{
					if (unk_0x6B808843AE53852B() >= func_11(Param0.f_0))
					{
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (iLocal_110 >= func_11(Param0.f_0))
				{
					if (Param0.f_1 == 2)
					{
						if (!unk_0xB519E5386FBF69E5(Global_2452246.f_1, 2))
						{
							unk_0x9956FB0E4B50ECB8(&(Global_2452246.f_1), 2);
						}
					}
					return 1;
				}
			}
			else if (unk_0xB519E5386FBF69E5(Local_119[iVar0 /*3*/].f_1, 1))
			{
			}
			else if (!unk_0xB519E5386FBF69E5(Local_119[iVar0 /*3*/].f_1, 1))
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
			return Global_262145.f_4854;
		
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
			return Global_262145.f_8940;
		
		case 9:
			return Global_262145.f_8845;
		
		case 10:
			return Global_262145.f_8892;
		
		case 11:
			return Global_262145.f_8913;
		
		case 12:
			return Global_262145.f_8963;
		
		case 13:
			return Global_262145.f_8981;
		
		case 14:
			return Global_262145.f_8996;
		
		case 15:
			return Global_262145.f_9007;
		
		case 16:
			return Global_262145.f_9015;
		
		case 17:
			return Global_262145.f_9029;
		
		case 18:
			return Global_262145.f_9038;
		
		default:
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xD18C3CF631455087(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2E6D4A0CE8AD9494(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426494.f_3[iVar0])
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
		fVar1 = (fVar1 + Global_2452246.f_8[iVar0 /*5*/].f_2);
		iVar0++;
	}
	fVar3 = unk_0x8AF26D6D6BBE6931(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		fVar2 = (fVar2 + Global_2452246.f_8[iVar0 /*5*/].f_2);
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
	if (Global_2452246.f_8[9 /*5*/].f_2 >= 1f)
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
			return Global_262145.f_6486;
		
		case 1:
			return Global_262145.f_6483;
		
		case 2:
			return Global_262145.f_6484;
		
		case 3:
			return Global_262145.f_6485;
		
		case 4:
			return Global_262145.f_6487;
		
		case 5:
			return Global_262145.f_6488;
		
		case 6:
			return Global_262145.f_6489;
		
		case 7:
			return Global_262145.f_6869;
		
		case 8:
			return Global_262145.f_8013;
		
		case 9:
			return Global_262145.f_8015;
		
		case 10:
			return Global_262145.f_8011;
		
		case 11:
			return Global_262145.f_8018;
		
		case 12:
			return Global_262145.f_8448;
		
		case 13:
			return Global_262145.f_8450;
		
		case 14:
			return Global_262145.f_8451;
		
		case 15:
			return Global_262145.f_8452;
		
		case 16:
			return Global_262145.f_8453;
		
		case 17:
			return Global_262145.f_8457;
		
		case 18:
			return Global_262145.f_9039;
		
		default:
	}
	return 0f;
}

int func_16()
{
	if (Global_2452246.f_170 >= Global_2452246.f_171)
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
			return Global_262145.f_5032;
		
		case 1:
			return Global_262145.f_5029;
		
		case 2:
			return Global_262145.f_5030;
		
		case 3:
			return Global_262145.f_5031;
		
		case 4:
			return Global_262145.f_6537;
		
		case 5:
			return Global_262145.f_6430;
		
		case 6:
			return Global_262145.f_6435;
		
		case 7:
			return Global_262145.f_6440;
		
		case 8:
			return Global_262145.f_8014;
		
		case 9:
			return Global_262145.f_8016;
		
		case 10:
			return Global_262145.f_8012;
		
		case 11:
			return (Global_262145.f_9185 && Global_262145.f_9184);
		
		case 12:
			return Global_262145.f_8442;
		
		case 13:
			return Global_262145.f_8444;
		
		case 14:
			return Global_262145.f_8445;
		
		case 15:
			return Global_262145.f_8446;
		
		case 16:
			return Global_262145.f_8447;
		
		case 17:
			return Global_262145.f_8456;
		
		case 18:
			return Global_262145.f_9040;
		
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
	
	if (!unk_0xB519E5386FBF69E5(Global_1348588, 0))
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
		if (!bParam4 && Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/] != 3)
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
			return Global_1348588.f_1;
			break;
		
		case 1:
			return Global_1348588.f_2;
			break;
		
		case 2:
			return Global_1348588.f_3;
			break;
	}
	return 0;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x3F80C6638E3A1A90();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x0D47370227E1A847())
			{
				return Global_2416794[iVar0 /*303*/].f_207;
			}
			else
			{
				return unk_0xD6E896F8239D8EF2(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x0D47370227E1A847())
			{
				return Global_2416794[iVar0 /*303*/].f_208;
			}
			else
			{
				return unk_0xF3BCBCADB5D1D2A5(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x0D47370227E1A847())
			{
				return Global_2416794[iVar0 /*303*/].f_209;
			}
			else
			{
				return unk_0xBD5D7DEF087C4F66(!bParam1);
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
			return Global_1348596;
			break;
		
		case 1:
			return Global_1348597;
			break;
		
		case 2:
			return Global_1348598;
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
	if (Global_262145.f_6444 > 0 && Global_262145.f_6444 <= 19)
	{
		if (!Global_2452246.f_104[(Global_262145.f_6444 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_6444)
			{
				if (Global_2452246.f_104[iVar0] == iParam0)
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
		Global_2452246.f_8[iParam0 /*5*/].f_2 = fParam1;
	}
}

void func_32(int iParam0)
{
	Global_2452246.f_2 = iParam0;
}

int func_33(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_34(uParam0, bParam2, 0);
	if (unk_0x00AAD79B42B3E036() && !bParam2)
	{
		if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF073E12B43682F7D(unk_0x4B7B32731313EF0E(unk_0x9D40BBF80D8F5E8A(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_34(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x00AAD79B42B3E036() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xC7F926248AF8587B();
			}
			else
			{
				*uParam0 = unk_0xDBD31D1E0E5F2049();
			}
		}
		else
		{
			*uParam0 = unk_0x9D40BBF80D8F5E8A();
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
	
	Global_2452246.f_169 = Global_262145.f_6446;
	iVar0 = 0;
	while (iVar0 < 19)
	{
		Global_2452246.f_8[iVar0 /*5*/] = iVar0;
		Global_2452246.f_8[iVar0 /*5*/].f_1 = func_38(iVar0);
		Global_2452246.f_8[iVar0 /*5*/].f_2 = 1f;
		iVar0++;
	}
	if (Global_262145.f_6444 > 0 && Global_262145.f_6444 <= 19)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_6444)
		{
			Global_2452246.f_104[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			Global_2452246.f_124[iVar1 /*2*/] = -1;
			Global_2452246.f_124[iVar1 /*2*/].f_1 = -1;
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
			return 70;
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
	switch (Local_119[unk_0xA1468451F71B8A98() /*3*/].f_2)
	{
		case 0:
			if (Global_2452246.f_2 >= 4 && Global_2452246.f_2 != 8)
			{
				if (unk_0xB519E5386FBF69E5(Global_2452246.f_1, 2))
				{
					unk_0x9956FB0E4B50ECB8(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 0);
					unk_0x73817D396768E4C6(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 1);
				}
				if (!unk_0xB519E5386FBF69E5(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1, 1))
				{
					func_108(4);
				}
				else if (!unk_0xB519E5386FBF69E5(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1, 3))
				{
					func_35(&uLocal_111);
					unk_0x9956FB0E4B50ECB8(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 3);
				}
				else
				{
					if (unk_0xB519E5386FBF69E5(uLocal_89, 1))
					{
						iVar0 = 500;
					}
					if (func_33(&uLocal_111, iVar0, 0))
					{
						unk_0x73817D396768E4C6(&uLocal_89, 1);
						func_108(4);
						unk_0x73817D396768E4C6(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 3);
					}
				}
			}
			else if (unk_0xB519E5386FBF69E5(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1, 1))
			{
				unk_0x73817D396768E4C6(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 1);
			}
			break;
		
		case 4:
			if (unk_0xB519E5386FBF69E5(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1, 0))
			{
				if (Global_2452246.f_2 == 8)
				{
					func_108(8);
					unk_0x73817D396768E4C6(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 0);
					unk_0x73817D396768E4C6(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 4);
				}
				else if (Global_2452246.f_2 == 5)
				{
					func_108(5);
					unk_0x73817D396768E4C6(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 0);
					unk_0x73817D396768E4C6(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 4);
				}
				else if (Global_2452246.f_2 >= 6)
				{
					func_108(6);
					unk_0x73817D396768E4C6(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 0);
					unk_0x73817D396768E4C6(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 4);
				}
				else if (Global_2452246.f_2 == 3)
				{
					func_108(0);
					unk_0x73817D396768E4C6(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 0);
					unk_0x73817D396768E4C6(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 4);
				}
			}
			else
			{
				iVar1 = 0;
				if (((((((((((((((!unk_0x9321E9548CA02149() && !func_107(unk_0x3F80C6638E3A1A90())) && !func_106()) && !func_105()) && !func_104()) && !func_103()) && !func_101(unk_0x3F80C6638E3A1A90())) && !unk_0x6B042133C9334B77()) && !func_99(unk_0x3F80C6638E3A1A90())) && func_97()) && !func_96(unk_0x3F80C6638E3A1A90(), 0)) && !func_96(unk_0x3F80C6638E3A1A90(), 7)) && !func_96(unk_0x3F80C6638E3A1A90(), 21)) && (!func_95(unk_0x3F80C6638E3A1A90(), 0) || Global_2452246.f_3 == 11)) && func_12(unk_0x3F80C6638E3A1A90(), 1, 1)) && !func_94(unk_0x3F80C6638E3A1A90()))
				{
					iVar2 = func_93(Global_2452246.f_3);
					if ((((iVar2 >= 0 && (func_91(iVar2) || func_91(0))) || func_89(unk_0x3F80C6638E3A1A90())) || func_87(unk_0x3F80C6638E3A1A90())) || !func_86(unk_0x3F80C6638E3A1A90()))
					{
						unk_0x9956FB0E4B50ECB8(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 4);
					}
					switch (Global_2452246.f_3)
					{
						case 0:
							if (((func_81(0) && func_79(func_80(unk_0x3F80C6638E3A1A90()), 40f, 40f, 40f)) && unk_0xD4F0FC8FFEDE152B(unk_0xE7869D5D7816A9B6()) < 10f) && !func_78())
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 1:
							if (func_68(31, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 2:
							if (func_68(20, 0) && !func_67())
							{
								iVar1 = func_57();
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 3:
							if (func_68(19, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 4:
							if (((((func_68(20, 0) && !func_96(unk_0x3F80C6638E3A1A90(), 1)) && !func_96(unk_0x3F80C6638E3A1A90(), 2)) && !func_96(unk_0x3F80C6638E3A1A90(), 3)) && !Global_2426494.f_3128) && !func_55())
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 5:
							if (func_68(124, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 6:
							if (func_68(126, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 7:
							if (func_68(127, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 8:
							if (func_68(132, 0) || func_52(unk_0x3F80C6638E3A1A90(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 9:
							if (func_68(133, 0) || func_52(unk_0x3F80C6638E3A1A90(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 10:
							if (func_68(131, 0) || func_52(unk_0x3F80C6638E3A1A90(), 0))
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
							if (func_68(138, 0) || func_52(unk_0x3F80C6638E3A1A90(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 14:
							if (func_68(139, 0) || func_52(unk_0x3F80C6638E3A1A90(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 15:
							if (func_68(140, 0) || func_52(unk_0x3F80C6638E3A1A90(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 16:
							if (func_68(141, 0) || func_52(unk_0x3F80C6638E3A1A90(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 17:
							if (func_68(144, 0) || func_52(unk_0x3F80C6638E3A1A90(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 18:
							if (func_68(146, 0) || func_52(unk_0x3F80C6638E3A1A90(), 0))
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
					unk_0x9956FB0E4B50ECB8(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 0);
				}
				else if (iVar1 == 2)
				{
					if (!func_97() && !unk_0xB519E5386FBF69E5(uLocal_89, 0))
					{
						unk_0x9956FB0E4B50ECB8(&uLocal_89, 1);
					}
					func_108(0);
					unk_0x9956FB0E4B50ECB8(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 1);
					unk_0x73817D396768E4C6(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 4);
				}
			}
			break;
		
		case 5:
			if (Global_2452246.f_2 == 6)
			{
				unk_0x73817D396768E4C6(&(Global_2457699.f_202.f_1), 1);
				unk_0x73817D396768E4C6(&(Global_2457699.f_202.f_1), 2);
				unk_0x73817D396768E4C6(&(Global_2457699.f_202.f_1), 3);
				func_108(6);
			}
			else if (unk_0xB519E5386FBF69E5(Global_2452246.f_1, 3) && func_51(&(Global_2452246.f_165)))
			{
				func_44();
			}
			break;
		
		case 6:
			uVar3 = func_2(Global_2452246.f_3.f_1);
			if (Global_2452246.f_3.f_1 == 19)
			{
				if (Global_2457699.f_1558)
				{
					if (Global_2452246.f_2 == 7)
					{
						func_108(7);
					}
				}
				else if (Global_2457699.f_1559)
				{
					Global_2457699.f_1559 = 0;
					func_108(0);
					unk_0x9956FB0E4B50ECB8(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 1);
				}
			}
			else if (!unk_0xB519E5386FBF69E5(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1, 2))
			{
				Local_90.f_16 = -1;
				if (unk_0xFF6891E21E7FC193(unk_0xC7C6DDDE84A8E734(uVar3)) == 0)
				{
					if (!unk_0x3A062DC2C492FE13(uVar3, -1, 0, 0) || unk_0x08187755394696C2(uVar3, -1, 0) < 32)
					{
						if (!unk_0x3A062DC2C492FE13(uVar3, -1, 1, 0))
						{
							Local_90.f_0 = Global_2452246.f_3.f_1;
							if (func_40(Local_90, 0))
							{
								unk_0x9956FB0E4B50ECB8(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 2);
							}
						}
					}
				}
			}
			else if (unk_0xFF6891E21E7FC193(unk_0xC7C6DDDE84A8E734(uVar3)) != 0)
			{
				if (Global_2452246.f_2 == 7)
				{
					func_108(7);
					unk_0x9956FB0E4B50ECB8(&uLocal_89, 0);
					unk_0x73817D396768E4C6(&(Local_119[unk_0xA1468451F71B8A98() /*3*/].f_1), 2);
				}
			}
			break;
		
		case 7:
			if (Global_2452246.f_2 != 7)
			{
				func_108(8);
			}
			break;
		
		case 8:
			func_108(0);
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
	if (unk_0xB24EEA4AFBB75A39(&cVar0))
	{
		unk_0x5BA7CCA84A74BEA3(&cVar0);
		if (unk_0xD51489677E1B0844(&cVar0))
		{
			iVar8 = 1;
			if (bParam20)
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 16)
				{
					if (unk_0x3A062DC2C492FE13(&cVar0, iVar9, iVar8, 0))
					{
						return 0;
					}
					iVar9++;
				}
			}
			else if (unk_0x3A062DC2C492FE13(&cVar0, Param0.f_16, iVar8, 0))
			{
				return 0;
			}
			iVar10 = unk_0xB8BA7F44DF1575E1(&cVar0, &Param0, 20, func_41(Param0.f_0));
			unk_0x307B32C17692E50D(&cVar0);
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
		case 83:
		case 90:
		case 84:
		case 88:
		case 91:
		case 92:
		case 85:
		case 93:
		case 94:
		case 86:
		case 95:
		case 87:
		case 96:
		case 89:
		case 49:
		case 64:
		case 62:
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
		if (((((((iParam0 == 18 || iParam0 == 22) || iParam0 == 24) || iParam0 == 17) || iParam0 == 79) || iParam0 == 80) || iParam0 == 60) || iParam0 == 71)
		{
			return 3650;
		}
		if (iParam0 == 69)
		{
			return 8344;
		}
		if ((((((((((iParam0 == 9 || iParam0 == 16) || iParam0 == 15) || iParam0 == 66) || iParam0 == 65) || iParam0 == 19) || iParam0 == 70) || iParam0 == 67) || iParam0 == 21) || iParam0 == 81) || iParam0 == 82)
		{
			return 2050;
		}
		if (iParam0 == 75)
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
		
		case 48:
			return 6;
		
		case 49:
			return 6;
		
		case 50:
			return 6;
		
		case 51:
			return 6;
		
		case 52:
			return 6;
		
		case 53:
			return 6;
		
		case 54:
			return 6;
		
		case 55:
			return 6;
		
		case 56:
			return 6;
		
		case 57:
			return 6;
		
		case 58:
			return 6;
		
		case 59:
			return 6;
		
		case 60:
			return 6;
		
		case 61:
			return 6;
		
		case 62:
			return 6;
		
		case 63:
			return 6;
		
		case 64:
			return 6;
		
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
		
		case 65:
			return 6;
		
		case 66:
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
		
		case 69:
			return 6;
		
		case joaat("mpsv_lp0_31"):
			return 6;
		
		case 80:
			return 6;
		
		case 81:
			return 6;
		
		case 82:
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
		
		case 77:
			return 6;
		
		case 78:
			return 6;
		
		case 67:
			return 6;
		
		case 70:
			return 6;
		
		case 71:
			return 6;
		
		case 68:
			return 6;
		
		case 72:
			return 6;
		
		case 75:
			return 6;
		
		case 76:
			return 6;
		
		case 83:
			return 6;
		
		case 90:
			return 0;
		
		case 84:
			return 6;
		
		case 91:
			return 0;
		
		case 89:
			return 0;
		
		case 92:
			return 0;
		
		case 85:
			return 6;
		
		case 93:
			return 0;
		
		case 88:
			return 6;
		
		case 94:
			return 0;
		
		case 86:
			return 6;
		
		case 95:
			return 0;
		
		case 87:
			return 6;
		
		case 73:
			return 6;
		
		case 74:
			return 6;
		
		case 96:
			return 6;
		
		default:
	}
	return 11;
}

bool func_43()
{
	return Global_2432717.f_568;
}

void func_44()
{
	if (Global_2414248.f_84.f_2 == 1)
	{
		if (!unk_0xB519E5386FBF69E5(Global_2457699.f_202.f_1, 1))
		{
			if (((Global_262145.f_45 * 120000) - func_50(&(Global_2452246.f_165), 0, 0)) < 360000)
			{
				if (!unk_0xB519E5386FBF69E5(Global_2457699.f_202.f_1, 1))
				{
					if (func_68(31, 0) && !func_104())
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
					unk_0x9956FB0E4B50ECB8(&(Global_2457699.f_202.f_1), 1);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_50(&(Global_2452246.f_165), 0, 0)) < 600000)
			{
				if (!unk_0xB519E5386FBF69E5(Global_2457699.f_202.f_1, 2))
				{
					if (func_68(31, 0) && !func_104())
					{
						func_45("ACD_TSCH", 5, 1);
					}
					unk_0x9956FB0E4B50ECB8(&(Global_2457699.f_202.f_1), 2);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_50(&(Global_2452246.f_165), 0, 0)) < 1200000)
			{
				if (!unk_0xB519E5386FBF69E5(Global_2457699.f_202.f_1, 3))
				{
					if (func_68(31, 0) && !func_104())
					{
						func_45("ACD_TSCH", 10, 1);
					}
					unk_0x9956FB0E4B50ECB8(&(Global_2457699.f_202.f_1), 3);
				}
			}
		}
	}
}

int func_45(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x4A4F36C4EFDE341F(sParam0);
	unk_0x8D23CF083336DA9B(iParam1);
	iVar0 = unk_0x40A23ED713DD1662(0, 1);
	func_46(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_46(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_49() || !unk_0x6B042133C9334B77()) || !func_52(unk_0x3F80C6638E3A1A90(), 0))
	{
		return;
	}
	iVar0 = func_47(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1713447.f_5[iVar0 /*53*/] = iParam0;
		Global_1713447.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1713447.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1713447.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1713447.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1713447.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1713447.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1713447.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1713447 - 1))
	{
		if (iParam0 > Global_1713447.f_5[iVar0 /*53*/].f_1)
		{
			func_48(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1713447++;
	if (Global_1713447 > 5)
	{
		Global_1713447 = 5;
		return Global_1713447;
	}
	return (Global_1713447 - 1);
}

void func_48(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1713447.f_5[iVar0 /*53*/] = { Global_1713447.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_49()
{
	return unk_0x3442D8DA379C5187(-1762644250);
}

int func_50(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x00AAD79B42B3E036() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x4B7B32731313EF0E(unk_0xC7F926248AF8587B(), *uParam0);
		}
		else
		{
			return unk_0x4B7B32731313EF0E(unk_0xDBD31D1E0E5F2049(), *uParam0);
		}
	}
	return unk_0x4B7B32731313EF0E(unk_0x9D40BBF80D8F5E8A(), *uParam0);
}

var func_51(var uParam0)
{
	return uParam0->f_1;
}

bool func_52(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_53(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
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
	if (Global_1315887[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_54()
{
	return Global_1312746;
}

int func_55()
{
	if (!func_56())
	{
		return 0;
	}
	if (Global_2404482.f_2 == Global_262145.f_6882 || Global_2404482.f_2 == Global_262145.f_6906)
	{
		return 1;
	}
	return 0;
}

int func_56()
{
	switch (Global_2404482)
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
	Var5 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
	if (!bVar0)
	{
		if (unk_0xE67882ADA97B9D94(Var5, iLocal_113, &Local_114, &uLocal_117, &uVar2, 0, 1077936128, 0))
		{
			if (unk_0xF18329472591CFE6(-1367.557f, -3220.598f, 12.9448f, Var5, 1) >= 600f)
			{
				if (unk_0xF18329472591CFE6(Var5, Local_114, 1) >= 75f)
				{
					unk_0x1A10579F8DE3BF6B((Var5.f_0 - 250f), (Var5.f_1 - 250f), (Var5.f_0 + 250f), (Var5.f_1 + 250f));
					if (unk_0x6778910539806944(Local_114, &uVar3, &uVar4))
					{
						if (uVar4 & 1 == 0)
						{
							if (iLocal_118 <= 0)
							{
								if (func_58(Local_114, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
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
		iLocal_113 += 3;
		if (iLocal_113 >= 150)
		{
			iLocal_113 = 40;
			iLocal_118++;
		}
	}
	if (iLocal_118 > 0)
	{
		iVar1 = 2;
	}
	return iVar1;
}

int func_58(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404919 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xEEC849D5E3FC13E0(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xF0CC6299CE9D9124(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xF0CC6299CE9D9124(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDADCC8A8DA94F002(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam13)
	{
		if (unk_0x743D96D854EFA6C5(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404919++;
	if (fParam14 > 0f)
	{
		if (func_61(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404919++;
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
	Global_2404919++;
	return 1;
}

int func_59(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0x3F80C6638E3A1A90(), 1, 1))
		{
			if (!unk_0xAEF17BDE274A1247())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xF18329472591CFE6(func_80(unk_0x3F80C6638E3A1A90()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x86ECD59CFE6143AC(Param0, fParam3))
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
			if (!func_52(iVar1, 0) && unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x3F80C6638E3A1A90()))
				{
					if ((func_60(iVar1) || !bParam10) && !Global_2416794[iVar1 /*303*/].f_254)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x2CC717AC6CF51F8F(iVar1) == -1)
							{
								if (unk_0x2CC717AC6CF51F8F(iVar1) == unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x2CC717AC6CF51F8F(iVar1) != unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()))) || unk_0x2CC717AC6CF51F8F(iVar1) == -1)
							{
								if (unk_0xF18329472591CFE6(func_80(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x2CC717AC6CF51F8F(iVar1) != iParam8 || unk_0x2CC717AC6CF51F8F(iVar1) == -1)
						{
							if (unk_0xF18329472591CFE6(func_80(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0719BE80FE2477AB(iVar1, Param0, fParam3))
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
	if (unk_0x715CF32E4ACFA610(unk_0x91B73D905EA38F6B(iParam0)) || Global_2416794[iParam0 /*303*/].f_240)
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
		if ((iParam8 == 1 && unk_0x3F80C6638E3A1A90() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0x55AD8BE0B6CDBEAE(unk_0x3F80C6638E3A1A90(), iVar1))
				{
					if (!bParam7 || (!unk_0xAF437D7C802AB246(unk_0x91B73D905EA38F6B(iVar1)) && func_60(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) != unk_0x2CC717AC6CF51F8F(iVar1))) || unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1)
						{
							if (((unk_0x2CC717AC6CF51F8F(unk_0x3F80C6638E3A1A90()) == -1 && uParam9) && bParam6) && func_62(iVar1))
							{
							}
							else if (unk_0xD51CFE69539DB6D8(unk_0x91B73D905EA38F6B(iVar1)))
							{
								if (unk_0xF18329472591CFE6(func_80(iVar1), Param0, 1) < fParam3)
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
	if (func_66(unk_0x3F80C6638E3A1A90(), iParam0))
	{
		return 1;
	}
	Global_2456685 = { func_65(iParam0) };
	if (unk_0x74320D9FF94A9E7E(&Global_2456685))
	{
		return 1;
	}
	if (func_63(unk_0x3F80C6638E3A1A90(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (!iVar0 == func_7())
	{
		if (iVar0 == func_64(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (iParam0 != func_7())
	{
		return Global_1607618[iParam0 /*106*/].f_8;
	}
	return func_7();
}

struct<13> func_65(var uParam0)
{
	struct<13> Var0;
	
	unk_0xD82458461B583D5D(uParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0, var uParam1)
{
	if (unk_0xAB7778782580F313())
	{
		Global_2456685 = { func_65(iParam0) };
		Global_2456698 = { func_65(uParam1) };
		if (unk_0x89398BAF58AA485C(&Global_2456685))
		{
			if (unk_0x89398BAF58AA485C(&Global_2456698))
			{
				unk_0xB486161F8A7A8AFB(&Global_2456615, 35, &Global_2456685);
				unk_0xB486161F8A7A8AFB(&Global_2456650, 35, &Global_2456698);
				if (Global_2456615 == Global_2456650)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_67()
{
	if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_68(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6053 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_73(unk_0x3F80C6638E3A1A90(), 85))
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
		if (Global_262145.f_4853 == 1)
		{
			return 1;
		}
	}
	if (func_72() || func_71())
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
			if (func_69())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return unk_0xB519E5386FBF69E5(Global_1573865[iVar1], iVar0);
}

int func_69()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0xB519E5386FBF69E5(Global_2457699.f_1631, 23))
	{
		return 1;
	}
	if (func_72())
	{
		return 1;
	}
	if (func_71())
	{
		return 1;
	}
	uVar0 = Global_1347570[func_70(-1)];
	if (unk_0xB519E5386FBF69E5(uVar0, 7))
	{
		unk_0x9956FB0E4B50ECB8(&(Global_2457699.f_1631), 23);
		return 1;
	}
	return 0;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
		if (iVar1 > -1)
		{
			Global_2466023 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466023 = 1;
		}
	}
	return iVar0;
}

bool func_71()
{
	return Global_1315897;
}

bool func_72()
{
	return Global_1315899;
}

bool func_73(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_76())
	{
		return 0;
	}
	if (func_75())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_74(iParam1);
	iVar1 = uVar0;
	return unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_322, iVar1);
}

int func_74(int iParam0)
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

bool func_75()
{
	return unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_132, 3);
}

int func_76()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_72())
	{
		return 1;
	}
	if (func_71())
	{
		return 1;
	}
	return func_77(120, -1);
}

int func_77(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486042[iParam0 /*5*/][func_70(iParam1)];
	if (unk_0xA1B21B1D84085DB0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_78()
{
	if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_79(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	
	if (unk_0x45E3C087F9B6E0A3(Param0, &Var0, 0, 1077936128, 0))
	{
		if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Var0, Param3, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_80(int iParam0)
{
	return unk_0x1141852D07400777(unk_0x91B73D905EA38F6B(iParam0), 0);
}

int func_81(bool bParam0)
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (func_85(unk_0x3F80C6638E3A1A90(), 1))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_106())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0x6B042133C9334B77())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0x9321E9548CA02149())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!func_68(19, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_82(9))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	return 1;
}

bool func_82(int iParam0)
{
	return !func_83(iParam0);
}

int func_83(int iParam0)
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
			if (Global_262145.f_5029)
			{
				return 0;
			}
			if (func_96(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5030)
			{
				return 0;
			}
			if (func_96(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5031)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5032)
			{
				return 0;
			}
			if (func_96(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_84(4))
			{
				return 0;
			}
			if (func_96(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_84(4))
			{
				return 0;
			}
			if (func_96(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_84(4))
			{
				return 0;
			}
			if (func_96(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_84(4))
			{
				return 0;
			}
			if (func_96(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			if (unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 0) || unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_248.f_6, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_84(4))
			{
				return 0;
			}
			if (func_96(unk_0x3F80C6638E3A1A90(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_84(4))
			{
				return 0;
			}
			if (func_96(unk_0x3F80C6638E3A1A90(), 7))
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

int func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0x0F810277E61B87AE(iVar0), 0, 1))
		{
			if (unk_0xB519E5386FBF69E5(Global_2416794[iVar0 /*303*/].f_206, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_85(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_99(iParam0))
		{
			return 1;
		}
	}
	if (Global_1586079[iParam0 /*408*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_86(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_128, 22);
}

int func_87(int iParam0)
{
	if (func_52(iParam0, 0))
	{
		return 1;
	}
	if (func_88())
	{
		if (iParam0 == unk_0x3F80C6638E3A1A90())
		{
			return 1;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_88()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 3);
}

bool func_89(int iParam0)
{
	if (func_90(iParam0))
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_1607618[iParam0 /*106*/].f_1, 8);
}

bool func_90(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_1607618[iParam0 /*106*/].f_1, 2);
}

bool func_91(int iParam0)
{
	var uVar0;
	
	uVar0 = func_92(2453, -1, 0);
	return unk_0xB519E5386FBF69E5(uVar0, iParam0);
}

int func_92(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466310[iParam0 /*5*/][func_70(iParam1)];
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_93(int iParam0)
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

int func_94(int iParam0)
{
	if (unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_248.f_6, 14))
	{
		return 1;
	}
	if (unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_248.f_6, 11))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0, bool bParam1)
{
	if (Global_1586079[iParam0 /*408*/].f_248.f_8 > 0)
	{
		if (bParam1)
		{
			if (unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_248.f_6, 0))
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

bool func_96(int iParam0, int iParam1)
{
	return unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_206, iParam1);
}

int func_97()
{
	if (func_98() == 0)
	{
		return 1;
	}
	return 0;
}

int func_98()
{
	return Global_1312466.f_18;
}

bool func_99(int iParam0)
{
	return func_100(iParam0);
}

bool func_100(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_1586079[iParam0 /*408*/].f_13.f_1, 0);
}

int func_101(int iParam0)
{
	switch (func_102(iParam0))
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

int func_102(int iParam0)
{
	return Global_1586079[iParam0 /*408*/].f_177;
}

bool func_103()
{
	return Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_177 != 0;
}

bool func_104()
{
	return Global_1315909;
}

bool func_105()
{
	return Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/] == 5;
}

bool func_106()
{
	return unk_0xB519E5386FBF69E5(Global_1586079[unk_0x3F80C6638E3A1A90() /*408*/].f_39.f_18, 0);
}

int func_107(int iParam0)
{
	if (func_85(iParam0, 1))
	{
		if (Global_1586079[iParam0 /*408*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

void func_108(int iParam0)
{
	Local_119[unk_0xA1468451F71B8A98() /*3*/].f_2 = iParam0;
}

int func_109()
{
	return 1;
}

int func_110()
{
	return Global_2452246;
}

int func_111(int iParam0)
{
	return Local_119[iParam0 /*3*/];
}

int func_112()
{
	bool bVar0;
	
	func_118(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315884 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			return 1;
		}
	}
	if (func_43())
	{
		return 1;
	}
	if (Global_2442886)
	{
		return 1;
	}
	if (func_117())
	{
		return 1;
	}
	if (func_116(157))
	{
		if (!func_115())
		{
			return 1;
		}
	}
	if (func_116(155))
	{
		return 1;
	}
	if (!unk_0xC8FFCE1611C4F73B())
	{
		return 1;
	}
	if (func_113() != 0)
	{
		if (unk_0xFF6891E21E7FC193(func_113()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_113()
{
	switch (func_114())
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

int func_114()
{
	return Global_25034;
}

bool func_115()
{
	return Global_2432717.f_573;
}

int func_116(int iParam0)
{
	if (unk_0x957F04289F04E160(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_117()
{
	return Global_2440974;
}

void func_118(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xE4E91039B15CA110(1))
	{
		iVar1 = unk_0xCEDD7FE4546BFC4F(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x0586E3C97DD61FE4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 313:
					func_119(iVar0);
					break;
				
				case 2:
					unk_0x0586E3C97DD61FE4(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_119(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x0586E3C97DD61FE4(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x91B73D905EA38F6B(Var0.f_1);
			if (unk_0xD51CFE69539DB6D8(uVar3))
			{
				if (unk_0x51374A0BB2871E6E(uVar3, 0))
				{
					uVar4 = unk_0xF0295FF51F2D7803(uVar3, 0);
					if (unk_0x7DF549E9DDE0A2CE(uVar4, Var0.f_2) && unk_0x0D47370227E1A847())
					{
						if (func_120(uVar4, &bVar5))
						{
							unk_0x2C47D40CD2967A44(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xC1F2137782A816E9(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_120(var uParam0, var uParam1)
{
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		if (!unk_0x28D33422BA6C479D(uParam0))
		{
			if (unk_0x4F9572356C55E94C(uParam0))
			{
				unk_0x20BB4B94CC6DDC9A(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x4C5CA989AEF3A14C(uParam0, 0))
		{
			if (unk_0x9B5F286CC8377932(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_121()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_122()
{
	Global_2457699.f_1558 = 0;
	Global_2457699.f_1559 = 0;
	Global_2457699.f_1561 = 0;
	Global_2457699.f_1560 = 0;
	unk_0x73817D396768E4C6(&(Global_2457699.f_202.f_1), 1);
	unk_0x73817D396768E4C6(&(Global_2457699.f_202.f_1), 2);
	unk_0x73817D396768E4C6(&(Global_2457699.f_202.f_1), 3);
	unk_0x52F20802944F8DCE();
}

int func_123(struct<20> Param0)
{
	func_129();
	func_127(func_128(Param0.f_0), Param0);
	unk_0xFCFA396E73EBBE3E(0);
	func_124(0, -1, 0);
	unk_0xF7B58B81A69E540F(&Global_2452246, 172);
	unk_0x1AC0E3669E60AAAD(&Local_119, 97);
	unk_0x8A10FCF639EC0104(0);
	Local_119[unk_0xA1468451F71B8A98() /*3*/] = 0;
	func_108(0);
	return 1;
}

int func_124(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD0642B91C061B527();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_126();
			}
			else
			{
				return 0;
			}
		}
		if (!func_125())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x00AAD79B42B3E036())
				{
					if (!bParam2)
					{
						func_126();
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
						func_126();
					}
					else
					{
						return 0;
					}
				}
				if (func_116(155))
				{
					if (!bParam2)
					{
						func_126();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAB63AB6154522A4E())
			{
				if (!bParam2)
				{
					func_126();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD0642B91C061B527();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			if (!bParam2)
			{
				func_126();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAB63AB6154522A4E())
	{
		if (!bParam2)
		{
			func_126();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_125()
{
	return Global_1315884;
}

void func_126()
{
	unk_0x52F20802944F8DCE();
}

void func_127(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		func_126();
	}
	unk_0xE1306BF06D83921B(uParam0, 0, Param1.f_16);
}

int func_128(int iParam0)
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
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
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
		
		case 65:
			return 32;
		
		case 66:
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
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}

void func_129()
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
	Global_2452246 = { Var0 };
}

