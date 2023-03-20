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
	struct<20> Local_88 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	int iLocal_111 = 0;
	struct<3> Local_112 = { 0, 0, 0 } ;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	struct<3> Local_117[32];
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
	iLocal_111 = 40;
	if (unk_0x17CC0D5008835470())
	{
		if (!func_125(ScriptParam_0))
		{
			func_124();
		}
	}
	while (true)
	{
		func_123();
		if (func_114())
		{
			func_124();
		}
		switch (func_113(unk_0x4B6E64C01984DC43()))
		{
			case 0:
				if (func_112() == 1)
				{
					if (func_111())
					{
						Local_117[unk_0x4B6E64C01984DC43() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_112() == 1)
				{
					func_39();
				}
				else if (func_112() == 3)
				{
					Local_117[unk_0x4B6E64C01984DC43() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_124();
				break;
		}
		if (unk_0x587E5997B76F47FE())
		{
			switch (func_112())
			{
				case 0:
					if (func_37())
					{
						Global_2455819 = 1;
					}
					break;
				
				case 1:
					if (func_36())
					{
						Global_2455819 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_124();
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
	
	switch (Global_2455819.f_2)
	{
		case 0:
			if (!unk_0x7DA173D4FD42F36B(Global_2455819.f_1, 1))
			{
				func_35(&(Global_2455819.f_191));
				unk_0xE27C8E42A97895CF(&(Global_2455819.f_1), 1);
			}
			else if (func_33(&(Global_2455819.f_191), Global_2455819.f_193, 0))
			{
				unk_0x99BCB15F954AF579(&(Global_2455819.f_1), 1);
				func_32(1);
			}
			break;
		
		case 1:
			if (unk_0x17CC0D5008835470())
			{
				iVar0 = 0;
				while (iVar0 < 23)
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
				Global_2455819.f_3 = { Global_2455819.f_8[iVar2 /*5*/] };
				func_32(4);
			}
			else
			{
				Global_2455819.f_193 = (Global_262145.f_6692 / 2);
				func_32(0);
			}
			break;
		
		case 4:
			switch (func_10(Global_2455819.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2455819.f_3)
					{
						case 1:
							func_8();
							break;
					}
					bVar3 = true;
					if (bVar3)
					{
						if (Global_2455819.f_3 == 1)
						{
							if (unk_0x7DA173D4FD42F36B(Global_2455819.f_1, 4))
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
						func_31(Global_2455819.f_3, 0f);
						func_32(3);
					}
					break;
				
				case 2:
					func_31(Global_2455819.f_3, 0f);
					func_32(3);
					break;
			}
			break;
		
		case 5:
			if (Global_2455819.f_3 == 1)
			{
				if (unk_0x7DA173D4FD42F36B(Global_2455819.f_1, 4))
				{
					if (!unk_0x7DA173D4FD42F36B(Global_2455819.f_1, 3))
					{
						func_35(&(Global_2455819.f_189));
						unk_0xE27C8E42A97895CF(&(Global_2455819.f_1), 3);
					}
					else if (func_33(&(Global_2455819.f_189), (Global_262145.f_45 * 120000), 0))
					{
						unk_0x99BCB15F954AF579(&(Global_2455819.f_1), 3);
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
			if (Global_2455819.f_3.f_1 == 19)
			{
				if (unk_0x9EFA0F4073C51215("AM_IMP_EXP", -1, 0) != func_7())
				{
					func_5(func_6(unk_0x9EFA0F4073C51215("AM_IMP_EXP", -1, 0)), 1);
					Global_2464975.f_1568 = 0;
					func_32(7);
					func_3(Global_2455819.f_3);
				}
			}
			else if (unk_0x5B003181D760D4E1(func_2(Global_2455819.f_3.f_1), -1, 0, 0))
			{
				func_32(7);
				func_3(Global_2455819.f_3);
			}
			break;
		
		case 7:
			if (Global_2455819.f_3.f_1 == 19)
			{
				if (Global_2464975.f_1568)
				{
					func_32(8);
					Global_2464975.f_1568 = 0;
				}
			}
			else if (!unk_0x5B003181D760D4E1(func_2(Global_2455819.f_3.f_1), -1, 0, 0))
			{
				func_32(8);
			}
			break;
		
		case 8:
			if (unk_0x7DA173D4FD42F36B(Global_2455819.f_1, 0))
			{
				func_32(0);
				unk_0x99BCB15F954AF579(&(Global_2455819.f_1), 0);
			}
			else
			{
				Global_2455819.f_193 = Global_262145.f_6692;
				Global_2455819.f_8[Global_2455819.f_3 /*5*/].f_4 = 1;
				if (unk_0x7DA173D4FD42F36B(Global_2455819.f_1, 2))
				{
					unk_0x99BCB15F954AF579(&(Global_2455819.f_1), 2);
				}
				if (unk_0x7DA173D4FD42F36B(Global_2455819.f_1, 4))
				{
					unk_0x99BCB15F954AF579(&(Global_2455819.f_1), 4);
				}
				Global_2455819.f_3 = -1;
				Global_2455819.f_3.f_1 = 0;
				unk_0xE27C8E42A97895CF(&(Global_2455819.f_1), 0);
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
		
		case 65:
			return "GB_HEADHUNTER";
		
		case 66:
			return "GB_CONTRABAND_BUY";
		
		case 67:
			return "GB_CONTRABAND_SELL";
		
		case 68:
			return "GB_CONTRABAND_DEFEND";
		
		case 69:
			return "GB_AIRFREIGHT";
		
		case 70:
			return "GB_CASHING_OUT";
		
		case 71:
			return "GB_SALVAGE";
		
		case 72:
			return "GB_FRAGILE_GOODS";
		
		case 104:
			return "dont_cross_the_line";
		
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
		
		case 73:
			return "AM_BOAT_TAXI";
		
		case 74:
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
		
		case 87:
			return "am_rollercoaster";
		
		case 88:
			return "am_ferriswheel";
		
		case 89:
			return "AM_LAUNCHER";
		
		case 90:
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
		
		case 75:
			return "fm_hold_up_tut";
		
		case 76:
			return "AM_CAR_MOD_TUT";
		
		case 77:
			return "AM_CONTACT_REQUESTS";
		
		case 78:
			return "am_mission_launch";
		
		case joaat("mpsv_lp0_31"):
			return "am_npc_invites";
		
		case 80:
			return "am_lester_cut";
		
		case 83:
			return "AM_VEHICLE_SPAWN";
		
		case 84:
			return "am_ronTrevor_Cut";
		
		case 85:
			return "AM_ARMYBASE";
		
		case 86:
			return "AM_PRISON";
		
		case 91:
			return "AM_ArmWrestling";
		
		case 98:
			return "fm_Bj_race_controler";
		
		case 92:
			return "AM_Darts";
		
		case 99:
			return "fm_deathmatch_controler";
		
		case 97:
			return "FM_Impromptu_DM_Controler";
		
		case 100:
			return "fm_hideout_controler";
		
		case 93:
			return "golf_mp";
		
		case 96:
			return "Pilot_School_MP";
		
		case 101:
			return "FM_Mission_Controller";
		
		case 102:
			return "FM_Race_Controler";
		
		case 94:
			return "Range_Modern_MP";
		
		case 103:
			return "FM_Horde_Controler";
		
		case 95:
			return "tennis_network_mp";
		
		case 81:
			return "am_heist_int";
		
		case 82:
			return "am_lowrider_int";
		
		case 105:
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
		if (Global_262145.f_6690 > 0 && Global_262145.f_6690 <= 23)
		{
			if (!Global_2455819.f_124[(Global_262145.f_6690 - 1)] == -1)
			{
				iVar0 = 0;
				while (iVar0 < (Global_262145.f_6690 - 1))
				{
					Global_2455819.f_124[iVar0] = Global_2455819.f_124[iVar0 + 1];
					iVar0++;
				}
			}
			Global_2455819.f_124[(Global_262145.f_6690 - 1)] = iParam0;
		}
	}
	iVar0 = 18;
	while (iVar0 >= 0)
	{
		Global_2455819.f_148[iVar0 + 1 /*2*/] = { Global_2455819.f_148[iVar0 /*2*/] };
		iVar0 = (iVar0 + -1);
	}
	Global_2455819.f_148[0 /*2*/] = iParam0;
	Global_2455819.f_148[0 /*2*/].f_1 = -1;
	if (iParam0 == 9)
	{
		Global_2455819.f_194 = 0;
		func_4();
	}
	else
	{
		Global_2455819.f_194++;
	}
}

void func_4()
{
	Global_2455819.f_195 = unk_0xA6055C735E3DD877(Global_262145.f_9326, Global_262145.f_9325);
}

void func_5(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 405;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Var0, 3, iParam0);
	}
}

int func_6(int iParam0)
{
	var uVar0;
	
	unk_0xE27C8E42A97895CF(&uVar0, iParam0);
	return uVar0;
}

int func_7()
{
	return -1;
}

void func_8()
{
	func_9(func_6(unk_0x9EFA0F4073C51215("freemode", -1, 0)), 0);
	if (unk_0xA6055C735E3DD877(0, 100) < Global_262145.f_124)
	{
		if (unk_0x3A040D6EABAF9E85() >= Global_262145.f_125)
		{
			func_9(func_6(unk_0x9EFA0F4073C51215("freemode", -1, 0)), 1);
			unk_0xE27C8E42A97895CF(&(Global_2455819.f_1), 4);
		}
	}
}

void func_9(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 406;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Var0, 3, iParam0);
	}
}

int func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	
	iLocal_108 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(iVar0)) && func_12(unk_0x801C03D92F1C6755(iVar0), 1, 1))
		{
			if (unk_0x7DA173D4FD42F36B(Local_117[iVar0 /*3*/].f_1, 0))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_117[iVar0 /*3*/].f_1, 4))
				{
					iLocal_108++;
				}
				if (Param0.f_1 == 18)
				{
					if (unk_0x3A040D6EABAF9E85() >= func_11(Param0.f_0))
					{
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (iLocal_108 >= func_11(Param0.f_0))
				{
					if (Param0.f_1 == 2)
					{
						if (!unk_0x7DA173D4FD42F36B(Global_2455819.f_1, 2))
						{
							unk_0xE27C8E42A97895CF(&(Global_2455819.f_1), 2);
						}
					}
					return 1;
				}
			}
			else if (unk_0x7DA173D4FD42F36B(Local_117[iVar0 /*3*/].f_1, 1))
			{
			}
			else if (!unk_0x7DA173D4FD42F36B(Local_117[iVar0 /*3*/].f_1, 1))
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
			return Global_262145.f_4871;
		
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
			return Global_262145.f_9314;
		
		case 9:
			return Global_262145.f_9219;
		
		case 10:
			return Global_262145.f_9266;
		
		case 11:
			return Global_262145.f_9287;
		
		case 12:
			return Global_262145.f_9337;
		
		case 13:
			return Global_262145.f_9355;
		
		case 14:
			return Global_262145.f_9370;
		
		case 15:
			return Global_262145.f_9381;
		
		case 16:
			return Global_262145.f_9389;
		
		case 17:
			return Global_262145.f_9403;
		
		case 18:
			return Global_262145.f_9412;
		
		case 19:
			return 5;
		
		case 20:
			return 5;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		default:
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7868479D9B6694C0(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428549.f_3[iVar0])
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
	while (iVar0 < 23)
	{
		fVar1 = (fVar1 + Global_2455819.f_8[iVar0 /*5*/].f_2);
		iVar0++;
	}
	fVar3 = unk_0x83D8CBE6E641FA2A(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 23)
	{
		fVar2 = (fVar2 + Global_2455819.f_8[iVar0 /*5*/].f_2);
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
	if (Global_2455819.f_8[9 /*5*/].f_2 >= 1f)
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
			return Global_262145.f_6732;
		
		case 1:
			return Global_262145.f_6729;
		
		case 2:
			return Global_262145.f_6730;
		
		case 3:
			return Global_262145.f_6731;
		
		case 4:
			return Global_262145.f_6733;
		
		case 5:
			return Global_262145.f_6734;
		
		case 6:
			return Global_262145.f_6735;
		
		case 7:
			return Global_262145.f_7115;
		
		case 8:
			return Global_262145.f_8387;
		
		case 9:
			return Global_262145.f_8389;
		
		case 10:
			return Global_262145.f_8385;
		
		case 11:
			return Global_262145.f_8392;
		
		case 12:
			return Global_262145.f_8822;
		
		case 13:
			return Global_262145.f_8824;
		
		case 14:
			return Global_262145.f_8825;
		
		case 15:
			return Global_262145.f_8826;
		
		case 16:
			return Global_262145.f_8827;
		
		case 17:
			return Global_262145.f_8831;
		
		case 18:
			return Global_262145.f_9413;
		
		case 19:
			return 1f;
		
		case 20:
			return 1f;
		
		case 21:
			return 1f;
		
		case 22:
			return 1f;
		
		default:
	}
	return 0f;
}

int func_16()
{
	if (Global_2455819.f_194 >= Global_2455819.f_195)
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
			return Global_262145.f_5277;
		
		case 1:
			return Global_262145.f_5274;
		
		case 2:
			return Global_262145.f_5275;
		
		case 3:
			return Global_262145.f_5276;
		
		case 4:
			return Global_262145.f_6783;
		
		case 5:
			return Global_262145.f_6676;
		
		case 6:
			return Global_262145.f_6681;
		
		case 7:
			return Global_262145.f_6686;
		
		case 8:
			return Global_262145.f_8388;
		
		case 9:
			return Global_262145.f_8390;
		
		case 10:
			return Global_262145.f_8386;
		
		case 11:
			return (Global_262145.f_9559 && Global_262145.f_9558);
		
		case 12:
			return Global_262145.f_8816;
		
		case 13:
			return Global_262145.f_8818;
		
		case 14:
			return Global_262145.f_8819;
		
		case 15:
			return Global_262145.f_8820;
		
		case 16:
			return Global_262145.f_8821;
		
		case 17:
			return Global_262145.f_8830;
		
		case 18:
			return Global_262145.f_9414;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
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
	
	if (!unk_0x7DA173D4FD42F36B(Global_1348828, 0))
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
		if (!bParam4 && Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] != 3)
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
			return Global_1348828.f_1;
			break;
		
		case 1:
			return Global_1348828.f_2;
			break;
		
		case 2:
			return Global_1348828.f_3;
			break;
	}
	return 0;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xE0BDAFA1A39552D6();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x992E302DC36A4251())
			{
				return Global_2418529[iVar0 /*313*/].f_207;
			}
			else
			{
				return unk_0x5C49D3B9A41B0F55(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x992E302DC36A4251())
			{
				return Global_2418529[iVar0 /*313*/].f_208;
			}
			else
			{
				return unk_0xF4E3DD2031F77659(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x992E302DC36A4251())
			{
				return Global_2418529[iVar0 /*313*/].f_209;
			}
			else
			{
				return unk_0x2A5ED1AA56D1D7EA(!bParam1);
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
			return Global_1348836;
			break;
		
		case 1:
			return Global_1348837;
			break;
		
		case 2:
			return Global_1348838;
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
			return 14;
		
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
		
		case 19:
			return 1;
		
		case 20:
			return 26;
		
		case 21:
			return 0;
		
		case 22:
			return 8;
		
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
		
		case 19:
			return 10;
		
		case 20:
			return 2;
		
		case 21:
			return 10;
		
		case 22:
			return 3;
		
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
		
		case 19:
			return 0;
		
		case 20:
			return 0;
		
		case 21:
			return 0;
		
		case 22:
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
	if (Global_262145.f_6690 > 0 && Global_262145.f_6690 <= 23)
	{
		if (!Global_2455819.f_124[(Global_262145.f_6690 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_6690)
			{
				if (Global_2455819.f_124[iVar0] == iParam0)
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
		Global_2455819.f_8[iParam0 /*5*/].f_2 = fParam1;
	}
}

void func_32(int iParam0)
{
	Global_2455819.f_2 = iParam0;
}

int func_33(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_34(uParam0, bParam2, 0);
	if (unk_0x17CC0D5008835470() && !bParam2)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_34(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x17CC0D5008835470() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
			}
			else
			{
				*uParam0 = unk_0xED6DF4F701311AF8();
			}
		}
		else
		{
			*uParam0 = unk_0x1ADBAAC322D61F73();
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
	
	Global_2455819.f_193 = Global_262145.f_6692;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		Global_2455819.f_8[iVar0 /*5*/] = iVar0;
		Global_2455819.f_8[iVar0 /*5*/].f_1 = func_38(iVar0);
		Global_2455819.f_8[iVar0 /*5*/].f_2 = 1f;
		iVar0++;
	}
	if (Global_262145.f_6690 > 0 && Global_262145.f_6690 <= 23)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_6690)
		{
			Global_2455819.f_124[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			Global_2455819.f_148[iVar1 /*2*/] = -1;
			Global_2455819.f_148[iVar1 /*2*/].f_1 = -1;
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
			return 78;
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
	switch (Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_2)
	{
		case 0:
			if (Global_2455819.f_2 >= 4 && Global_2455819.f_2 != 8)
			{
				if (unk_0x7DA173D4FD42F36B(Global_2455819.f_1, 2))
				{
					unk_0xE27C8E42A97895CF(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 0);
					unk_0x99BCB15F954AF579(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 1);
				}
				if (!unk_0x7DA173D4FD42F36B(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1, 1))
				{
					func_110(4);
				}
				else if (!unk_0x7DA173D4FD42F36B(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1, 3))
				{
					func_35(&uLocal_109);
					unk_0xE27C8E42A97895CF(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 3);
				}
				else
				{
					if (unk_0x7DA173D4FD42F36B(uLocal_87, 1))
					{
						iVar0 = 500;
					}
					if (func_33(&uLocal_109, iVar0, 0))
					{
						unk_0x99BCB15F954AF579(&uLocal_87, 1);
						func_110(4);
						unk_0x99BCB15F954AF579(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 3);
					}
				}
			}
			else if (unk_0x7DA173D4FD42F36B(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1, 1))
			{
				unk_0x99BCB15F954AF579(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 1);
			}
			break;
		
		case 4:
			if (unk_0x7DA173D4FD42F36B(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1, 0))
			{
				if (Global_2455819.f_2 == 8)
				{
					func_110(8);
					unk_0x99BCB15F954AF579(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 0);
					unk_0x99BCB15F954AF579(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 4);
				}
				else if (Global_2455819.f_2 == 5)
				{
					func_110(5);
					unk_0x99BCB15F954AF579(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 0);
					unk_0x99BCB15F954AF579(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 4);
				}
				else if (Global_2455819.f_2 >= 6)
				{
					func_110(6);
					unk_0x99BCB15F954AF579(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 0);
					unk_0x99BCB15F954AF579(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 4);
				}
				else if (Global_2455819.f_2 == 3)
				{
					func_110(0);
					unk_0x99BCB15F954AF579(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 0);
					unk_0x99BCB15F954AF579(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 4);
				}
			}
			else
			{
				iVar1 = 0;
				if (((((((((((((((!unk_0x51857BE3D081B03F() && !func_109(unk_0xE0BDAFA1A39552D6())) && !func_108()) && !func_107()) && !func_106()) && !func_105()) && !func_103(unk_0xE0BDAFA1A39552D6())) && !unk_0x21A36E2323FEA4B1()) && !func_101(unk_0xE0BDAFA1A39552D6())) && func_99()) && !func_98(unk_0xE0BDAFA1A39552D6(), 0)) && !func_98(unk_0xE0BDAFA1A39552D6(), 7)) && !func_98(unk_0xE0BDAFA1A39552D6(), 21)) && (!func_95(unk_0xE0BDAFA1A39552D6(), 0, 0) || Global_2455819.f_3 == 11)) && func_12(unk_0xE0BDAFA1A39552D6(), 1, 1)) && !func_94(unk_0xE0BDAFA1A39552D6()))
				{
					iVar2 = func_93(Global_2455819.f_3);
					if ((((iVar2 >= 0 && (func_91(iVar2) || func_91(0))) || func_89(unk_0xE0BDAFA1A39552D6())) || func_87(unk_0xE0BDAFA1A39552D6())) || !func_86(unk_0xE0BDAFA1A39552D6()))
					{
						unk_0xE27C8E42A97895CF(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 4);
					}
					switch (Global_2455819.f_3)
					{
						case 0:
							if (((func_81(0) && func_79(func_80(unk_0xE0BDAFA1A39552D6()), 40f, 40f, 40f)) && unk_0x137B8B7A1CAD742A(unk_0x06736567F820A39E()) < 10f) && !func_78())
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 1:
							if (func_68(31, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 2:
							if (func_68(20, 0, 0) && !func_67())
							{
								iVar1 = func_57();
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 3:
							if (func_68(19, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 4:
							if (((((func_68(20, 0, 0) && !func_98(unk_0xE0BDAFA1A39552D6(), 1)) && !func_98(unk_0xE0BDAFA1A39552D6(), 2)) && !func_98(unk_0xE0BDAFA1A39552D6(), 3)) && !Global_2428549.f_3189) && !func_55())
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 5:
							if (func_68(124, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 6:
							if (func_68(126, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 7:
							if (func_68(127, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 8:
							if (func_68(132, 0, 0) || func_52(unk_0xE0BDAFA1A39552D6(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 9:
							if (func_68(133, 0, 0) || func_52(unk_0xE0BDAFA1A39552D6(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 10:
							if (func_68(131, 0, 0) || func_52(unk_0xE0BDAFA1A39552D6(), 0))
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
							if (func_68(138, 0, 0) || func_52(unk_0xE0BDAFA1A39552D6(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 14:
							if (func_68(139, 0, 0) || func_52(unk_0xE0BDAFA1A39552D6(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 15:
							if (func_68(140, 0, 0) || func_52(unk_0xE0BDAFA1A39552D6(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 16:
							if (func_68(141, 0, 0) || func_52(unk_0xE0BDAFA1A39552D6(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 17:
							if (func_68(144, 0, 0) || func_52(unk_0xE0BDAFA1A39552D6(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 18:
							if (func_68(146, 0, 0) || func_52(unk_0xE0BDAFA1A39552D6(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 19:
						case 20:
						case 21:
						case 22:
							iVar1 = 1;
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
					unk_0xE27C8E42A97895CF(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 0);
				}
				else if (iVar1 == 2)
				{
					if (!func_99() && !unk_0x7DA173D4FD42F36B(uLocal_87, 0))
					{
						unk_0xE27C8E42A97895CF(&uLocal_87, 1);
					}
					func_110(0);
					unk_0xE27C8E42A97895CF(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 1);
					unk_0x99BCB15F954AF579(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 4);
				}
			}
			break;
		
		case 5:
			if (Global_2455819.f_2 == 6)
			{
				unk_0x99BCB15F954AF579(&(Global_2464975.f_202.f_1), 1);
				unk_0x99BCB15F954AF579(&(Global_2464975.f_202.f_1), 2);
				unk_0x99BCB15F954AF579(&(Global_2464975.f_202.f_1), 3);
				func_110(6);
			}
			else if (unk_0x7DA173D4FD42F36B(Global_2455819.f_1, 3) && func_51(&(Global_2455819.f_189)))
			{
				func_44();
			}
			break;
		
		case 6:
			uVar3 = func_2(Global_2455819.f_3.f_1);
			if (Global_2455819.f_3.f_1 == 19)
			{
				if (Global_2464975.f_1565)
				{
					if (Global_2455819.f_2 == 7)
					{
						func_110(7);
					}
				}
				else if (Global_2464975.f_1566)
				{
					Global_2464975.f_1566 = 0;
					func_110(0);
					unk_0xE27C8E42A97895CF(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 1);
				}
			}
			else if (!unk_0x7DA173D4FD42F36B(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1, 2))
			{
				Local_88.f_16 = -1;
				if (unk_0x98934607F8D0FB03(unk_0x9F7CDE7B20BCB675(uVar3)) == 0)
				{
					if (!unk_0x5B003181D760D4E1(uVar3, -1, 0, 0) || unk_0x616D05BD6CAEDB74(uVar3, -1, 0) < 32)
					{
						if (!unk_0x5B003181D760D4E1(uVar3, -1, 1, 0))
						{
							Local_88.f_0 = Global_2455819.f_3.f_1;
							if (func_40(Local_88, 0))
							{
								unk_0xE27C8E42A97895CF(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 2);
							}
						}
					}
				}
			}
			else if (unk_0x98934607F8D0FB03(unk_0x9F7CDE7B20BCB675(uVar3)) != 0)
			{
				if (Global_2455819.f_2 == 7)
				{
					func_110(7);
					unk_0xE27C8E42A97895CF(&uLocal_87, 0);
					unk_0x99BCB15F954AF579(&(Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_1), 2);
				}
			}
			break;
		
		case 7:
			if (Global_2455819.f_2 != 7)
			{
				func_110(8);
			}
			break;
		
		case 8:
			func_110(0);
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
	if (unk_0x3CF51C8294DF5437(&cVar0))
	{
		unk_0x47CCE1B84DDCD2A7(&cVar0);
		if (unk_0x04D070195A8178CD(&cVar0))
		{
			iVar8 = 1;
			if (bParam20)
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 16)
				{
					if (unk_0x5B003181D760D4E1(&cVar0, iVar9, iVar8, 0))
					{
						return 0;
					}
					iVar9++;
				}
			}
			else if (unk_0x5B003181D760D4E1(&cVar0, Param0.f_16, iVar8, 0))
			{
				return 0;
			}
			iVar10 = unk_0xB8BA7F44DF1575E1(&cVar0, &Param0, 20, func_41(Param0.f_0));
			unk_0x3F380364F30A5C6B(&cVar0);
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
		case 91:
		case 98:
		case 92:
		case 96:
		case 99:
		case 100:
		case 93:
		case 101:
		case 102:
		case 94:
		case 103:
		case 95:
		case 105:
		case 97:
		case 49:
		case 64:
		case 62:
		case 70:
			return 33000;
		
		default:
	}
	if (func_42(iParam0) == 3)
	{
		return 8344;
	}
	else if (func_42(iParam0) == 7)
	{
		if ((((((iParam0 == 45 || iParam0 == 43) || iParam0 == 39) || iParam0 == 37) || iParam0 == 41) || iParam0 == 47) || iParam0 == 40)
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
		if ((((((((((((iParam0 == 18 || iParam0 == 22) || iParam0 == 24) || iParam0 == 17) || iParam0 == 87) || iParam0 == 88) || iParam0 == 60) || iParam0 == 79) || iParam0 == 65) || iParam0 == 71) || iParam0 == 66) || iParam0 == 67) || iParam0 == 68)
		{
			return 3650;
		}
		if (iParam0 == 77)
		{
			return 8344;
		}
		if ((((((((((iParam0 == 9 || iParam0 == 16) || iParam0 == 15) || iParam0 == 74) || iParam0 == 73) || iParam0 == 19) || iParam0 == 78) || iParam0 == 75) || iParam0 == 21) || iParam0 == 89) || iParam0 == 90)
		{
			return 2050;
		}
		if (iParam0 == 83)
		{
			return 2812;
		}
		if (iParam0 == 104)
		{
			return 1828;
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
		
		case 65:
			return 6;
		
		case 66:
			return 6;
		
		case 67:
			return 6;
		
		case 68:
			return 6;
		
		case 69:
			return 6;
		
		case 70:
			return 6;
		
		case 71:
			return 6;
		
		case 72:
			return 6;
		
		case 104:
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
		
		case 73:
			return 6;
		
		case 74:
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
		
		case 77:
			return 6;
		
		case 87:
			return 6;
		
		case 88:
			return 6;
		
		case 89:
			return 6;
		
		case 90:
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
		
		case 85:
			return 6;
		
		case 86:
			return 6;
		
		case 75:
			return 6;
		
		case 78:
			return 6;
		
		case joaat("mpsv_lp0_31"):
			return 6;
		
		case 76:
			return 6;
		
		case 80:
			return 6;
		
		case 83:
			return 6;
		
		case 84:
			return 6;
		
		case 91:
			return 6;
		
		case 98:
			return 0;
		
		case 92:
			return 6;
		
		case 99:
			return 0;
		
		case 97:
			return 0;
		
		case 100:
			return 0;
		
		case 93:
			return 6;
		
		case 101:
			return 0;
		
		case 96:
			return 6;
		
		case 102:
			return 0;
		
		case 94:
			return 6;
		
		case 103:
			return 0;
		
		case 95:
			return 6;
		
		case 81:
			return 6;
		
		case 82:
			return 6;
		
		case 105:
			return 6;
		
		default:
	}
	return 11;
}

bool func_43()
{
	return Global_2434839.f_570;
}

void func_44()
{
	if (Global_2415983.f_84.f_2 == 1)
	{
		if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_202.f_1, 1))
		{
			if (((Global_262145.f_45 * 120000) - func_50(&(Global_2455819.f_189), 0, 0)) < 360000)
			{
				if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_202.f_1, 1))
				{
					if (func_68(31, 0, 0) && !func_106())
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
					unk_0xE27C8E42A97895CF(&(Global_2464975.f_202.f_1), 1);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_50(&(Global_2455819.f_189), 0, 0)) < 600000)
			{
				if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_202.f_1, 2))
				{
					if (func_68(31, 0, 0) && !func_106())
					{
						func_45("ACD_TSCH", 5, 1);
					}
					unk_0xE27C8E42A97895CF(&(Global_2464975.f_202.f_1), 2);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_50(&(Global_2455819.f_189), 0, 0)) < 1200000)
			{
				if (!unk_0x7DA173D4FD42F36B(Global_2464975.f_202.f_1, 3))
				{
					if (func_68(31, 0, 0) && !func_106())
					{
						func_45("ACD_TSCH", 10, 1);
					}
					unk_0xE27C8E42A97895CF(&(Global_2464975.f_202.f_1), 3);
				}
			}
		}
	}
}

int func_45(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x999E5F6D1B49D87B(sParam0);
	unk_0xD92C45283BCDA624(iParam1);
	iVar0 = unk_0xB452F88B6A7B058D(0, 1);
	func_46(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_46(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_49() || !unk_0x21A36E2323FEA4B1()) || !func_52(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	iVar0 = func_47(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1731647.f_5[iVar0 /*53*/] = iParam0;
		Global_1731647.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1731647.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1731647.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1731647.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1731647.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1731647.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1731647 - 1))
	{
		if (iParam0 > Global_1731647.f_5[iVar0 /*53*/].f_1)
		{
			func_48(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1731647++;
	if (Global_1731647 > 5)
	{
		Global_1731647 = 5;
		return Global_1731647;
	}
	return (Global_1731647 - 1);
}

void func_48(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1731647.f_5[iVar0 /*53*/] = { Global_1731647.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_49()
{
	return unk_0xAACC697A3792B3EF(-1762644250);
}

int func_50(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x17CC0D5008835470() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0);
		}
		else
		{
			return unk_0x1F0E2DBE53276B95(unk_0xED6DF4F701311AF8(), *uParam0);
		}
	}
	return unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0);
}

var func_51(var uParam0)
{
	return uParam0->f_1;
}

bool func_52(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_53(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
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
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_54()
{
	return Global_1312747;
}

int func_55()
{
	if (!func_56())
	{
		return 0;
	}
	if (Global_2404556.f_2 == Global_262145.f_7128 || Global_2404556.f_2 == Global_262145.f_7152)
	{
		return 1;
	}
	return 0;
}

int func_56()
{
	switch (Global_2404556)
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
	Var5 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1) };
	if (!bVar0)
	{
		if (unk_0x92162FD91928AD78(Var5, iLocal_111, &Local_112, &uLocal_115, &uVar2, 0, 1077936128, 0))
		{
			if (unk_0xA1F52EC3ECE1D42E(-1367.557f, -3220.598f, 12.9448f, Var5, 1) >= 600f)
			{
				if (unk_0xA1F52EC3ECE1D42E(Var5, Local_112, 1) >= 75f)
				{
					unk_0x4F9B9416E775992C((Var5.f_0 - 250f), (Var5.f_1 - 250f), (Var5.f_0 + 250f), (Var5.f_1 + 250f));
					if (unk_0x226281136F155C6F(Local_112, &uVar3, &uVar4))
					{
						if (uVar4 & 1 == 0)
						{
							if (iLocal_116 <= 0)
							{
								if (func_58(Local_112, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
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
		iLocal_111 += 3;
		if (iLocal_111 >= 150)
		{
			iLocal_111 = 40;
			iLocal_116++;
		}
	}
	if (iLocal_116 > 0)
	{
		iVar1 = 2;
	}
	return iVar1;
}

int func_58(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x7D7A247EA1176EFA(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x6B1F3F8F6B7B5B2C(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x6B1F3F8F6B7B5B2C(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xE8689F4DBC5D8E1B(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993++;
	if (bParam13)
	{
		if (unk_0xFED7CD2BD3B9B1DB(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993++;
	if (fParam14 > 0f)
	{
		if (func_61(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993++;
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
	Global_2404993++;
	return 1;
}

int func_59(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			if (!unk_0x4FF34B5B023875E1())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xA1F52EC3ECE1D42E(func_80(unk_0xE0BDAFA1A39552D6()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x7515D29C901C4E76(Param0, fParam3))
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
			if (!func_52(iVar1, 0) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xE0BDAFA1A39552D6()))
				{
					if ((func_60(iVar1) || !bParam10) && !Global_2418529[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0xF749B19A9F9B3DBF(iVar1) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xF749B19A9F9B3DBF(iVar1) != unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))) || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0xA1F52EC3ECE1D42E(func_80(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xF749B19A9F9B3DBF(iVar1) != iParam8 || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
						{
							if (unk_0xA1F52EC3ECE1D42E(func_80(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
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
	if (unk_0xD1BDCACEB9BCE7A2(unk_0x44A9253132E1DDE0(iParam0)) || Global_2418529[iParam0 /*313*/].f_241)
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
		if ((iParam8 == 1 && unk_0xE0BDAFA1A39552D6() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
				{
					if (!bParam7 || (!unk_0xCFC04A38F256EE06(unk_0x44A9253132E1DDE0(iVar1)) && func_60(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) != unk_0xF749B19A9F9B3DBF(iVar1))) || unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
						{
							if (((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && uParam9) && bParam6) && func_62(iVar1))
							{
							}
							else if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
							{
								if (unk_0xA1F52EC3ECE1D42E(func_80(iVar1), Param0, 1) < fParam3)
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
	if (func_66(unk_0xE0BDAFA1A39552D6(), iParam0))
	{
		return 1;
	}
	Global_2460474 = { func_65(iParam0) };
	if (unk_0xC1CBB5CA861EE944(&Global_2460474))
	{
		return 1;
	}
	if (func_63(unk_0xE0BDAFA1A39552D6(), iParam0))
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
		return Global_1610705[iParam0 /*178*/].f_10;
	}
	return func_7();
}

struct<13> func_65(var uParam0)
{
	struct<13> Var0;
	
	unk_0x3C903E672223AE0B(uParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0, var uParam1)
{
	if (unk_0x3D340893CA28EFFC())
	{
		Global_2460474 = { func_65(iParam0) };
		Global_2460487 = { func_65(uParam1) };
		if (unk_0x781D726C27D122E2(&Global_2460474))
		{
			if (unk_0x781D726C27D122E2(&Global_2460487))
			{
				unk_0xAFAED23A75339868(&Global_2460404, 35, &Global_2460474);
				unk_0xAFAED23A75339868(&Global_2460439, 35, &Global_2460487);
				if (Global_2460404 == Global_2460439)
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
	if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_68(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6298 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_73(unk_0xE0BDAFA1A39552D6(), 85))
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
		if (Global_262145.f_4870 == 1)
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
	if (bParam2)
	{
		return 0;
	}
	return unk_0x7DA173D4FD42F36B(Global_1573893[iVar1], iVar0);
}

int func_69()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1638, 23))
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
	uVar0 = Global_1347809[func_70(-1)];
	if (unk_0x7DA173D4FD42F36B(uVar0, 7))
	{
		unk_0xE27C8E42A97895CF(&(Global_2464975.f_1638), 23);
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
			Global_2473567 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2473567 = 1;
		}
	}
	return iVar0;
}

bool func_71()
{
	return Global_1315901;
}

bool func_72()
{
	return Global_1315903;
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
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_345, iVar1);
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
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_135, 3);
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
	
	uVar0 = Global_2494881[iParam0 /*5*/][func_70(iParam1)];
	if (unk_0x4E4F28F5B7A7C06C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_78()
{
	if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x923F1BB1676259BF(unk_0x06736567F820A39E(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_79(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	
	if (unk_0x7E623731A72197E4(Param0, &Var0, 0, 1077936128, 0))
	{
		if (unk_0x8853522CEFF93BE9(unk_0x06736567F820A39E(), Var0, Param3, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_80(int iParam0)
{
	return unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iParam0), 0);
}

int func_81(bool bParam0)
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (func_85(unk_0xE0BDAFA1A39552D6(), 1))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_108())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0x21A36E2323FEA4B1())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0x51857BE3D081B03F())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!func_68(19, 0, 0))
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
			if (Global_262145.f_5274)
			{
				return 0;
			}
			if (func_98(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5275)
			{
				return 0;
			}
			if (func_98(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5276)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5277)
			{
				return 0;
			}
			if (func_98(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_84(4))
			{
				return 0;
			}
			if (func_98(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_84(4))
			{
				return 0;
			}
			if (func_98(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_84(4))
			{
				return 0;
			}
			if (func_98(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
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
			if (func_98(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 0) || unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_84(4))
			{
				return 0;
			}
			if (func_98(unk_0xE0BDAFA1A39552D6(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_84(4))
			{
				return 0;
			}
			if (func_98(unk_0xE0BDAFA1A39552D6(), 7))
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
		if (func_12(unk_0x801C03D92F1C6755(iVar0), 0, 1))
		{
			if (unk_0x7DA173D4FD42F36B(Global_2418529[iVar0 /*313*/].f_206, iParam0))
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
		if (func_101(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587816[iParam0 /*444*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_86(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_131, 22);
}

int func_87(int iParam0)
{
	if (func_52(iParam0, 0))
	{
		return 1;
	}
	if (func_88())
	{
		if (iParam0 == unk_0xE0BDAFA1A39552D6())
		{
			return 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_88()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

bool func_89(int iParam0)
{
	if (func_90(iParam0))
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 8);
}

bool func_90(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 2);
}

bool func_91(int iParam0)
{
	var uVar0;
	
	uVar0 = func_92(2458, -1, 0);
	return unk_0x7DA173D4FD42F36B(uVar0, iParam0);
}

int func_92(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2473854[iParam0 /*5*/][func_70(iParam1)];
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
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
			return 13;
		
		case 2:
			return 14;
		
		case 3:
			return 15;
		
		case 4:
			return 16;
		
		case 5:
			return 17;
		
		case 6:
			return 19;
		
		case 7:
			return 18;
		
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
	if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 14))
	{
		return 1;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 11))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1587816[iParam0 /*444*/].f_250.f_9 > 0)
	{
		if (bParam1)
		{
			if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_96(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_96(int iParam0)
{
	if (iParam0 != func_7())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2418529[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_97(Global_2418529[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
	}
	return -1;
}

bool func_98(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_206, iParam1);
}

int func_99()
{
	if (func_100() == 0)
	{
		return 1;
	}
	return 0;
}

int func_100()
{
	return Global_1312466.f_18;
}

bool func_101(int iParam0)
{
	return func_102(iParam0);
}

bool func_102(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
}

int func_103(int iParam0)
{
	switch (func_104(iParam0))
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

int func_104(int iParam0)
{
	return Global_1587816[iParam0 /*444*/].f_180;
}

bool func_105()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_180 != 0;
}

bool func_106()
{
	return Global_1315913;
}

bool func_107()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 5;
}

bool func_108()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 0);
}

int func_109(int iParam0)
{
	if (func_85(iParam0, 1))
	{
		if (Global_1587816[iParam0 /*444*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

void func_110(int iParam0)
{
	Local_117[unk_0x4B6E64C01984DC43() /*3*/].f_2 = iParam0;
}

int func_111()
{
	return 1;
}

int func_112()
{
	return Global_2455819;
}

int func_113(int iParam0)
{
	return Local_117[iParam0 /*3*/];
}

int func_114()
{
	bool bVar0;
	
	func_120(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			return 1;
		}
	}
	if (func_43())
	{
		return 1;
	}
	if (Global_2446452)
	{
		return 1;
	}
	if (func_119())
	{
		return 1;
	}
	if (func_118(157))
	{
		if (!func_117())
		{
			return 1;
		}
	}
	if (func_118(155))
	{
		return 1;
	}
	if (!unk_0x2CB436C59D8FC08B())
	{
		return 1;
	}
	if (func_115() != 0)
	{
		if (unk_0x98934607F8D0FB03(func_115()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_115()
{
	switch (func_116())
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

int func_116()
{
	return Global_25152;
}

bool func_117()
{
	return Global_2434839.f_575;
}

int func_118(int iParam0)
{
	if (unk_0x1151827D6B6D09C7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_119()
{
	return Global_2444095;
}

void func_120(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6E7EC37CC38579DB(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 347:
					func_121(iVar0);
					break;
				
				case 2:
					unk_0x6E7EC37CC38579DB(1, iVar0, &Var4, 3);
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

void func_121(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x44A9253132E1DDE0(Var0.f_1);
			if (unk_0xC1EDB61CE0A4B94E(uVar3))
			{
				if (unk_0x0FDFEC0DD29106EE(uVar3, 0))
				{
					uVar4 = unk_0x34E1EF1E8BCD1BFC(uVar3, 0);
					if (unk_0xBBDEC099189867B6(uVar4, Var0.f_2) && unk_0x992E302DC36A4251())
					{
						if (func_122(uVar4, &bVar5))
						{
							unk_0x87332622AA717A1B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x768B37F1452D4834(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_122(var uParam0, var uParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xC9A01F9792B3D486(uParam0))
		{
			if (unk_0x2A3F30E37EB8FDD8(uParam0))
			{
				unk_0xB7E6C6AE18F1EDA6(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x7292AF41BC6C644F(uParam0, 0))
		{
			if (unk_0xA2C0F3D7469C0A0B(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_123()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_124()
{
	Global_2464975.f_1565 = 0;
	Global_2464975.f_1566 = 0;
	Global_2464975.f_1568 = 0;
	Global_2464975.f_1567 = 0;
	unk_0x99BCB15F954AF579(&(Global_2464975.f_202.f_1), 1);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_202.f_1), 2);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_202.f_1), 3);
	unk_0xF5DF8F3392CDD07B();
}

int func_125(struct<20> Param0)
{
	func_131();
	func_129(func_130(Param0.f_0), Param0);
	unk_0x1E2BF4457AC05E16(0);
	func_126(0, -1, 0);
	unk_0x8C2CCD685DA243F6(&Global_2455819, 196);
	unk_0xE51AD091F27ECBFF(&Local_117, 97);
	unk_0x8AAE4CDF72BA829A(0);
	Local_117[unk_0x4B6E64C01984DC43() /*3*/] = 0;
	func_110(0);
	return 1;
}

int func_126(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD225119541DF4E45();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_128();
			}
			else
			{
				return 0;
			}
		}
		if (!func_127())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x17CC0D5008835470())
				{
					if (!bParam2)
					{
						func_128();
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
						func_128();
					}
					else
					{
						return 0;
					}
				}
				if (func_118(155))
				{
					if (!bParam2)
					{
						func_128();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE5302F426D0500D6())
			{
				if (!bParam2)
				{
					func_128();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD225119541DF4E45();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			if (!bParam2)
			{
				func_128();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE5302F426D0500D6())
	{
		if (!bParam2)
		{
			func_128();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_127()
{
	return Global_1315888;
}

void func_128()
{
	unk_0xF5DF8F3392CDD07B();
}

void func_129(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x17CC0D5008835470())
	{
		func_128();
	}
	unk_0xEC43D0BC14815F9E(uParam0, 0, Param1.f_16);
}

int func_130(int iParam0)
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
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
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
		
		case 73:
			return 32;
		
		case 74:
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
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

void func_131()
{
	struct<196> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_2 = 1065353216;
	Var0.f_8 = 23;
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
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_8.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = 1065353216;
	Var0.f_124 = 23;
	Var0.f_148 = 20;
	Var0.f_148.f_1 = -1;
	Var0.f_148.f_1.f_1 = -1;
	Var0.f_148.f_1.f_2 = -1;
	Var0.f_148.f_1.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
	Var0.f_148.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
	Global_2455819 = { Var0 };
}

