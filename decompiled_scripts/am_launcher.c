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
	var uLocal_57 = 10;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	struct<20> Local_91 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	struct<3> Local_115 = { 0, 0, 0 } ;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	struct<3> Local_120[32];
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
	iLocal_114 = 40;
	if (unk_0x63C468D583002D23())
	{
		if (!func_128(ScriptParam_0))
		{
			func_127();
		}
	}
	while (true)
	{
		func_126();
		if (func_117())
		{
			func_127();
		}
		switch (func_116(unk_0x08578C183D455935()))
		{
			case 0:
				if (func_115() == 1)
				{
					if (func_114())
					{
						Local_120[unk_0x08578C183D455935() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_115() == 1)
				{
					func_40();
				}
				else if (func_115() == 3)
				{
					Local_120[unk_0x08578C183D455935() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_127();
				break;
		}
		if (unk_0x415DF132F15085E8())
		{
			switch (func_115())
			{
				case 0:
					if (func_38())
					{
						Global_2477267 = 1;
					}
					break;
				
				case 1:
					if (func_37())
					{
						Global_2477267 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_127();
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
	
	switch (Global_2477267.f_2)
	{
		case 0:
			if (!unk_0x48B8265059381CD0(Global_2477267.f_1, 1))
			{
				func_36(&(Global_2477267.f_191));
				unk_0xEB79FECD9022AAF0(&(Global_2477267.f_1), 1);
			}
			else if (func_34(&(Global_2477267.f_191), Global_2477267.f_193, 0))
			{
				unk_0x21E7933CCC7B3724(&(Global_2477267.f_1), 1);
				func_33(1);
			}
			break;
		
		case 1:
			if (unk_0x63C468D583002D23())
			{
				iVar0 = 0;
				while (iVar0 < 23)
				{
					iVar1 = iVar0;
					func_32(iVar1, 0f);
					if (!func_31(iVar1))
					{
						if (!func_30(iVar1))
						{
							if (func_18(func_29(iVar1), func_28(iVar1), func_27(iVar1), 1, 1))
							{
								if (!func_17(iVar1))
								{
									if (iVar1 != 9 || func_16())
									{
										func_32(iVar1, func_15(iVar1));
									}
								}
							}
						}
					}
					iVar0++;
				}
				func_33(3);
			}
			else
			{
				func_33(0);
			}
			break;
		
		case 3:
			iVar2 = func_13();
			if (iVar2 != -1)
			{
				Global_2477267.f_3 = { Global_2477267.f_8[iVar2 /*5*/] };
				func_33(4);
			}
			else
			{
				Global_2477267.f_193 = (Global_262145.f_6987 / 2);
				func_33(0);
			}
			break;
		
		case 4:
			switch (func_10(Global_2477267.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2477267.f_3)
					{
						case 1:
							func_8();
							break;
					}
					bVar3 = true;
					if (bVar3)
					{
						if (Global_2477267.f_3 == 1)
						{
							if (unk_0x48B8265059381CD0(Global_2477267.f_1, 4))
							{
								func_33(5);
							}
							else
							{
								func_33(6);
							}
						}
						else
						{
							func_33(6);
						}
					}
					else
					{
						func_32(Global_2477267.f_3, 0f);
						func_33(3);
					}
					break;
				
				case 2:
					func_32(Global_2477267.f_3, 0f);
					func_33(3);
					break;
			}
			break;
		
		case 5:
			if (Global_2477267.f_3 == 1)
			{
				if (unk_0x48B8265059381CD0(Global_2477267.f_1, 4))
				{
					if (!unk_0x48B8265059381CD0(Global_2477267.f_1, 3))
					{
						func_36(&(Global_2477267.f_189));
						unk_0xEB79FECD9022AAF0(&(Global_2477267.f_1), 3);
					}
					else if (func_34(&(Global_2477267.f_189), (Global_262145.f_45 * 120000), 0))
					{
						unk_0x21E7933CCC7B3724(&(Global_2477267.f_1), 3);
						func_33(6);
					}
				}
				else
				{
					func_33(6);
				}
			}
			else
			{
				func_33(6);
			}
			break;
		
		case 6:
			if (Global_2477267.f_3.f_1 == 19)
			{
				if (unk_0x8ABF7805AF7306B7("AM_IMP_EXP", -1, 0) != func_7())
				{
					func_5(func_6(unk_0x8ABF7805AF7306B7("AM_IMP_EXP", -1, 0)), 1);
					Global_2494199.f_1569 = 0;
					func_33(7);
					func_3(Global_2477267.f_3);
				}
			}
			else if (unk_0x24A0C7A82D1B9734(func_2(Global_2477267.f_3.f_1), -1, 0, 0))
			{
				func_33(7);
				func_3(Global_2477267.f_3);
			}
			break;
		
		case 7:
			if (Global_2477267.f_3.f_1 == 19)
			{
				if (Global_2494199.f_1569)
				{
					func_33(8);
					Global_2494199.f_1569 = 0;
				}
			}
			else if (!unk_0x24A0C7A82D1B9734(func_2(Global_2477267.f_3.f_1), -1, 0, 0))
			{
				func_33(8);
			}
			break;
		
		case 8:
			if (unk_0x48B8265059381CD0(Global_2477267.f_1, 0))
			{
				func_33(0);
				unk_0x21E7933CCC7B3724(&(Global_2477267.f_1), 0);
			}
			else
			{
				Global_2477267.f_193 = Global_262145.f_6987;
				Global_2477267.f_8[Global_2477267.f_3 /*5*/].f_4 = 1;
				if (unk_0x48B8265059381CD0(Global_2477267.f_1, 2))
				{
					unk_0x21E7933CCC7B3724(&(Global_2477267.f_1), 2);
				}
				if (unk_0x48B8265059381CD0(Global_2477267.f_1, 4))
				{
					unk_0x21E7933CCC7B3724(&(Global_2477267.f_1), 4);
				}
				Global_2477267.f_3 = -1;
				Global_2477267.f_3.f_1 = 0;
				unk_0xEB79FECD9022AAF0(&(Global_2477267.f_1), 0);
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
		
		case 137:
			return "dont_cross_the_line";
		
		case 73:
		case 74:
			return "GB_VEHICLE_EXPORT";
		
		case 84:
			return "GB_BIKER_JOUST";
		
		case 83:
			return "GB_BIKER_RACE_P2P";
		
		case 85:
			return "GB_BIKER_UNLOAD_WEAPONS";
		
		case 86:
			return "GB_BIKER_BAD_DEAL";
		
		case 87:
			return "GB_BIKER_RESCUE_CONTACT";
		
		case 88:
			return "GB_BIKER_LAST_RESPECTS";
		
		case 89:
			return "GB_BIKER_CONTRACT_KILLING";
		
		case 90:
			return "GB_BIKER_CONTRABAND_SELL";
		
		case 91:
			return "GB_BIKER_CONTRABAND_DEFEND";
		
		case 92:
			return "GB_ILLICIT_GOODS_RESUPPLY";
		
		case 93:
			return "GB_BIKER_DRIVEBY_ASSASSIN";
		
		case 101:
			return "GB_BIKER_CRIMINAL_MISCHIEF";
		
		case 94:
			return "GB_BIKER_RIPPIN_IT_UP";
		
		case 75:
			return "GB_PLOUGHED";
		
		case 76:
			return "GB_FULLY_LOADED";
		
		case 77:
			return "GB_AMPHIBIOUS_ASSAULT";
		
		case 78:
			return "GB_TRANSPORTER";
		
		case joaat("mpsv_lp0_31"):
			return "GB_FORTIFIED";
		
		case 80:
			return "GB_VELOCITY";
		
		case 81:
			return "GB_RAMPED_UP";
		
		case 82:
			return "GB_STOCKPILING";
		
		case 95:
			return "GB_BIKER_FREE_PRISONER";
		
		case 96:
			return "GB_BIKER_SAFECRACKER";
		
		case 97:
			return "GB_BIKER_STEAL_BIKES";
		
		case 98:
			return "GB_BIKER_SEARCH_AND_DESTROY";
		
		case 99:
			return "AM_PENNED_IN";
		
		case 100:
			return "GB_BIKER_STAND_YOUR_GROUND";
		
		case 102:
			return "GB_BIKER_DESTROY_VANS";
		
		case 103:
			return "GB_BIKER_BURN_ASSETS";
		
		case 104:
			return "GB_BIKER_SHUTTLE";
		
		case 105:
			return "GB_BIKER_WHEELIE_RIDER";
		
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
		
		case 106:
			return "AM_BOAT_TAXI";
		
		case 107:
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
		
		case 120:
			return "am_rollercoaster";
		
		case 121:
			return "am_ferriswheel";
		
		case 122:
			return "AM_LAUNCHER";
		
		case 123:
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
		
		case 108:
			return "fm_hold_up_tut";
		
		case 109:
			return "AM_CAR_MOD_TUT";
		
		case 110:
			return "AM_CONTACT_REQUESTS";
		
		case 111:
			return "am_mission_launch";
		
		case 112:
			return "am_npc_invites";
		
		case 113:
			return "am_lester_cut";
		
		case 116:
			return "AM_VEHICLE_SPAWN";
		
		case 117:
			return "am_ronTrevor_Cut";
		
		case 118:
			return "AM_ARMYBASE";
		
		case 119:
			return "AM_PRISON";
		
		case 124:
			return "AM_ArmWrestling";
		
		case 131:
			return "fm_Bj_race_controler";
		
		case 125:
			return "AM_Darts";
		
		case 132:
			return "fm_deathmatch_controler";
		
		case 130:
			return "FM_Impromptu_DM_Controler";
		
		case 133:
			return "fm_hideout_controler";
		
		case 126:
			return "golf_mp";
		
		case 129:
			return "Pilot_School_MP";
		
		case 134:
			return "FM_Mission_Controller";
		
		case 135:
			return "FM_Race_Controler";
		
		case 127:
			return "Range_Modern_MP";
		
		case 136:
			return "FM_Horde_Controler";
		
		case 128:
			return "tennis_network_mp";
		
		case 114:
			return "am_heist_int";
		
		case 115:
			return "am_lowrider_int";
		
		case 138:
			return "am_darts_apartment";
		
		case 139:
			return "AM_Armwrestling_Apartment";
		
		case 140:
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
		if (Global_262145.f_6985 > 0 && Global_262145.f_6985 <= 23)
		{
			if (!Global_2477267.f_124[(Global_262145.f_6985 - 1)] == -1)
			{
				iVar0 = 0;
				while (iVar0 < (Global_262145.f_6985 - 1))
				{
					Global_2477267.f_124[iVar0] = Global_2477267.f_124[iVar0 + 1];
					iVar0++;
				}
			}
			Global_2477267.f_124[(Global_262145.f_6985 - 1)] = iParam0;
		}
	}
	iVar0 = 18;
	while (iVar0 >= 0)
	{
		Global_2477267.f_148[iVar0 + 1 /*2*/] = { Global_2477267.f_148[iVar0 /*2*/] };
		iVar0 = (iVar0 + -1);
	}
	Global_2477267.f_148[0 /*2*/] = iParam0;
	Global_2477267.f_148[0 /*2*/].f_1 = -1;
	if (iParam0 == 9)
	{
		Global_2477267.f_194 = 0;
		func_4();
	}
	else
	{
		Global_2477267.f_194++;
	}
}

void func_4()
{
	Global_2477267.f_195 = unk_0x0E29C61F26D96FDB(Global_262145.f_9755, Global_262145.f_9754);
}

void func_5(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 439;
	Var0.f_1 = unk_0xBE369BE1BC57A796();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x504D0D40319365B7(1, &Var0, 3, iParam0);
	}
}

int func_6(int iParam0)
{
	var uVar0;
	
	unk_0xEB79FECD9022AAF0(&uVar0, iParam0);
	return uVar0;
}

int func_7()
{
	return -1;
}

void func_8()
{
	func_9(func_6(unk_0x8ABF7805AF7306B7("freemode", -1, 0)), 0);
	if (unk_0x0E29C61F26D96FDB(0, 100) < Global_262145.f_126)
	{
		if (unk_0x22381E1DB54373A4() >= Global_262145.f_127)
		{
			func_9(func_6(unk_0x8ABF7805AF7306B7("freemode", -1, 0)), 1);
			unk_0xEB79FECD9022AAF0(&(Global_2477267.f_1), 4);
		}
	}
}

void func_9(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 440;
	Var0.f_1 = unk_0xBE369BE1BC57A796();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x504D0D40319365B7(1, &Var0, 3, iParam0);
	}
}

int func_10(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	
	iLocal_111 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x7268A1112372AA44(unk_0x0C36F33B3F746611(iVar0)) && func_12(unk_0x0C36F33B3F746611(iVar0), 1, 1))
		{
			if (unk_0x48B8265059381CD0(Local_120[iVar0 /*3*/].f_1, 0))
			{
				if (!unk_0x48B8265059381CD0(Local_120[iVar0 /*3*/].f_1, 4))
				{
					iLocal_111++;
				}
				if (Param0.f_1 == 18)
				{
					if (unk_0x22381E1DB54373A4() >= func_11(Param0.f_0))
					{
						return 1;
					}
					else
					{
						return 2;
					}
				}
				if (iLocal_111 >= func_11(Param0.f_0))
				{
					if (Param0.f_1 == 2)
					{
						if (!unk_0x48B8265059381CD0(Global_2477267.f_1, 2))
						{
							unk_0xEB79FECD9022AAF0(&(Global_2477267.f_1), 2);
						}
					}
					return 1;
				}
			}
			else if (unk_0x48B8265059381CD0(Local_120[iVar0 /*3*/].f_1, 1))
			{
			}
			else if (!unk_0x48B8265059381CD0(Local_120[iVar0 /*3*/].f_1, 1))
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
			return Global_262145.f_4883;
		
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
			return Global_262145.f_9743;
		
		case 9:
			return Global_262145.f_9648;
		
		case 10:
			return Global_262145.f_9695;
		
		case 11:
			return Global_262145.f_9716;
		
		case 12:
			return Global_262145.f_9766;
		
		case 13:
			return Global_262145.f_9784;
		
		case 14:
			return Global_262145.f_9799;
		
		case 15:
			return Global_262145.f_9810;
		
		case 16:
			return Global_262145.f_9818;
		
		case 17:
			return Global_262145.f_9832;
		
		case 18:
			return Global_262145.f_9841;
		
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
	if (iVar0 != -1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCF7855B965948E97(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433125.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
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
		fVar1 = (fVar1 + Global_2477267.f_8[iVar0 /*5*/].f_2);
		iVar0++;
	}
	fVar3 = unk_0x6B1497B2FDBC8466(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 23)
	{
		fVar2 = (fVar2 + Global_2477267.f_8[iVar0 /*5*/].f_2);
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
	if (Global_2477267.f_8[9 /*5*/].f_2 >= 1f)
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
			return Global_262145.f_7027;
		
		case 1:
			return Global_262145.f_7024;
		
		case 2:
			return Global_262145.f_7025;
		
		case 3:
			return Global_262145.f_7026;
		
		case 4:
			return Global_262145.f_7028;
		
		case 5:
			return Global_262145.f_7029;
		
		case 6:
			return Global_262145.f_7030;
		
		case 7:
			return Global_262145.f_7411;
		
		case 8:
			return Global_262145.f_8815;
		
		case 9:
			return Global_262145.f_8817;
		
		case 10:
			return Global_262145.f_8813;
		
		case 11:
			return Global_262145.f_8820;
		
		case 12:
			return Global_262145.f_9251;
		
		case 13:
			return Global_262145.f_9253;
		
		case 14:
			return Global_262145.f_9254;
		
		case 15:
			return Global_262145.f_9255;
		
		case 16:
			return Global_262145.f_9256;
		
		case 17:
			return Global_262145.f_9260;
		
		case 18:
			return Global_262145.f_9842;
		
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
	if (Global_2477267.f_194 >= Global_2477267.f_195)
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
			return Global_262145.f_5570;
		
		case 1:
			return Global_262145.f_5567;
		
		case 2:
			return Global_262145.f_5568;
		
		case 3:
			return Global_262145.f_5569;
		
		case 4:
			return Global_262145.f_7078;
		
		case 5:
			return Global_262145.f_6969;
		
		case 6:
			return Global_262145.f_6974;
		
		case 7:
			return Global_262145.f_6979;
		
		case 8:
			return Global_262145.f_8816;
		
		case 9:
			return Global_262145.f_8818;
		
		case 10:
			return Global_262145.f_8814;
		
		case 11:
			return (Global_262145.f_9988 && Global_262145.f_9987);
		
		case 12:
			return Global_262145.f_9245;
		
		case 13:
			return Global_262145.f_9247;
		
		case 14:
			return Global_262145.f_9248;
		
		case 15:
			return Global_262145.f_9249;
		
		case 16:
			return Global_262145.f_9250;
		
		case 17:
			return Global_262145.f_9259;
		
		case 18:
			return Global_262145.f_9843;
		
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
	
	if (!unk_0x48B8265059381CD0(Global_1364290, 0))
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
		if (!bParam4 && Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] != 3)
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
			return Global_1364290.f_1;
			break;
		
		case 1:
			return Global_1364290.f_2;
			break;
		
		case 2:
			return Global_1364290.f_3;
			break;
	}
	return 0;
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xBE369BE1BC57A796();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_212;
			}
			else
			{
				return unk_0xA2D6CF086A2F622F(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_213;
			}
			else
			{
				return unk_0x71726B5B622E1778(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_214;
			}
			else
			{
				return unk_0xC124B46B968EA962(!bParam1);
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
			return Global_1364298;
			break;
		
		case 1:
			return Global_1364299;
			break;
		
		case 2:
			return Global_1364300;
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
	if (Global_262145.f_6985 > 0 && Global_262145.f_6985 <= 23)
	{
		if (!Global_2477267.f_124[(Global_262145.f_6985 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_6985)
			{
				if (Global_2477267.f_124[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_31(int iParam0)
{
	if (iParam0 == 12)
	{
		if (unk_0x24A0C7A82D1B9734("AM_PENNED_IN", -1, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_32(int iParam0, float fParam1)
{
	if (iParam0 != -1)
	{
		Global_2477267.f_8[iParam0 /*5*/].f_2 = fParam1;
	}
}

void func_33(int iParam0)
{
	Global_2477267.f_2 = iParam0;
}

int func_34(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_35(uParam0, bParam2, 0);
	if (unk_0x63C468D583002D23() && !bParam2)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x63C468D583002D23() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xCB150A8B81012128();
			}
			else
			{
				*uParam0 = unk_0x8F8F2E80A7DA4D64();
			}
		}
		else
		{
			*uParam0 = unk_0x94E3E074F38DF86C();
		}
		uParam0->f_1 = 1;
	}
}

void func_36(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_37()
{
	return 0;
}

int func_38()
{
	int iVar0;
	int iVar1;
	
	Global_2477267.f_193 = Global_262145.f_6987;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		Global_2477267.f_8[iVar0 /*5*/] = iVar0;
		Global_2477267.f_8[iVar0 /*5*/].f_1 = func_39(iVar0);
		Global_2477267.f_8[iVar0 /*5*/].f_2 = 1f;
		iVar0++;
	}
	if (Global_262145.f_6985 > 0 && Global_262145.f_6985 <= 23)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_6985)
		{
			Global_2477267.f_124[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			Global_2477267.f_148[iVar1 /*2*/] = -1;
			Global_2477267.f_148[iVar1 /*2*/].f_1 = -1;
			iVar1++;
		}
	}
	func_4();
	return 1;
}

int func_39(int iParam0)
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
			return 111;
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

void func_40()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	
	iVar0 = 10000;
	switch (Local_120[unk_0x08578C183D455935() /*3*/].f_2)
	{
		case 0:
			if (Global_2477267.f_2 >= 4 && Global_2477267.f_2 != 8)
			{
				if (unk_0x48B8265059381CD0(Global_2477267.f_1, 2))
				{
					unk_0xEB79FECD9022AAF0(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 0);
					unk_0x21E7933CCC7B3724(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 1);
				}
				if (!unk_0x48B8265059381CD0(Local_120[unk_0x08578C183D455935() /*3*/].f_1, 1))
				{
					func_113(4);
				}
				else if (!unk_0x48B8265059381CD0(Local_120[unk_0x08578C183D455935() /*3*/].f_1, 3))
				{
					func_36(&uLocal_112);
					unk_0xEB79FECD9022AAF0(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 3);
				}
				else
				{
					if (unk_0x48B8265059381CD0(uLocal_90, 1))
					{
						iVar0 = 500;
					}
					if (func_34(&uLocal_112, iVar0, 0))
					{
						unk_0x21E7933CCC7B3724(&uLocal_90, 1);
						func_113(4);
						unk_0x21E7933CCC7B3724(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 3);
					}
				}
			}
			else if (unk_0x48B8265059381CD0(Local_120[unk_0x08578C183D455935() /*3*/].f_1, 1))
			{
				unk_0x21E7933CCC7B3724(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 1);
			}
			break;
		
		case 4:
			if (unk_0x48B8265059381CD0(Local_120[unk_0x08578C183D455935() /*3*/].f_1, 0))
			{
				if (Global_2477267.f_2 == 8)
				{
					func_113(8);
					unk_0x21E7933CCC7B3724(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 0);
					unk_0x21E7933CCC7B3724(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 4);
				}
				else if (Global_2477267.f_2 == 5)
				{
					func_113(5);
					unk_0x21E7933CCC7B3724(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 0);
					unk_0x21E7933CCC7B3724(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 4);
				}
				else if (Global_2477267.f_2 >= 6)
				{
					func_113(6);
					unk_0x21E7933CCC7B3724(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 0);
					unk_0x21E7933CCC7B3724(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 4);
				}
				else if (Global_2477267.f_2 == 3)
				{
					func_113(0);
					unk_0x21E7933CCC7B3724(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 0);
					unk_0x21E7933CCC7B3724(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 4);
				}
			}
			else
			{
				iVar1 = 0;
				if (((((((((((((((!unk_0x51FDEF56E23A7C33() && !func_112(unk_0xBE369BE1BC57A796())) && !func_111()) && !func_110()) && !func_109()) && !func_108()) && !func_106(unk_0xBE369BE1BC57A796())) && !unk_0xF7271A9481CAC8E3()) && !func_104(unk_0xBE369BE1BC57A796())) && func_102()) && !func_101(unk_0xBE369BE1BC57A796(), 0)) && !func_101(unk_0xBE369BE1BC57A796(), 7)) && !func_101(unk_0xBE369BE1BC57A796(), 21)) && (!func_96(unk_0xBE369BE1BC57A796(), 0, 0, 0, 0) || Global_2477267.f_3 == 11)) && func_12(unk_0xBE369BE1BC57A796(), 1, 1)) && !func_95(unk_0xBE369BE1BC57A796()))
				{
					iVar2 = func_94(Global_2477267.f_3);
					if ((((iVar2 >= 0 && (func_92(iVar2) || func_92(0))) || func_90(unk_0xBE369BE1BC57A796())) || func_88(unk_0xBE369BE1BC57A796())) || !func_87(unk_0xBE369BE1BC57A796()))
					{
						unk_0xEB79FECD9022AAF0(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 4);
					}
					switch (Global_2477267.f_3)
					{
						case 0:
							if (((func_82(0) && func_80(func_81(unk_0xBE369BE1BC57A796()), 40f, 40f, 40f)) && unk_0x13B7ACE69D27E3E4(unk_0x17B5CC8A8615737D()) < 10f) && !func_79())
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 1:
							if (func_69(31, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 2:
							if (func_69(20, 0, 0) && !func_68())
							{
								iVar1 = func_58();
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 3:
							if (func_69(19, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 4:
							if (((((func_69(20, 0, 0) && !func_101(unk_0xBE369BE1BC57A796(), 1)) && !func_101(unk_0xBE369BE1BC57A796(), 2)) && !func_101(unk_0xBE369BE1BC57A796(), 3)) && !Global_2433125.f_3205) && !func_56())
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 5:
							if (func_69(124, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 6:
							if (func_69(126, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 7:
							if (func_69(127, 0, 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 8:
							if (func_69(132, 0, 0) || func_53(unk_0xBE369BE1BC57A796(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 9:
							if (func_69(133, 0, 0) || func_53(unk_0xBE369BE1BC57A796(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 10:
							if (func_69(131, 0, 0) || func_53(unk_0xBE369BE1BC57A796(), 0))
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
							if (func_69(138, 0, 0) || func_53(unk_0xBE369BE1BC57A796(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 14:
							if (func_69(139, 0, 0) || func_53(unk_0xBE369BE1BC57A796(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 15:
							if (func_69(140, 0, 0) || func_53(unk_0xBE369BE1BC57A796(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 16:
							if (func_69(141, 0, 0) || func_53(unk_0xBE369BE1BC57A796(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 17:
							if (func_69(144, 0, 0) || func_53(unk_0xBE369BE1BC57A796(), 0))
							{
								iVar1 = 1;
							}
							else
							{
								iVar1 = 2;
							}
							break;
						
						case 18:
							if (func_69(146, 0, 0) || func_53(unk_0xBE369BE1BC57A796(), 0))
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
					unk_0xEB79FECD9022AAF0(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 0);
				}
				else if (iVar1 == 2)
				{
					if (!func_102() && !unk_0x48B8265059381CD0(uLocal_90, 0))
					{
						unk_0xEB79FECD9022AAF0(&uLocal_90, 1);
					}
					func_113(0);
					unk_0xEB79FECD9022AAF0(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 1);
					unk_0x21E7933CCC7B3724(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 4);
				}
			}
			break;
		
		case 5:
			if (Global_2477267.f_2 == 6)
			{
				unk_0x21E7933CCC7B3724(&(Global_2494199.f_202.f_1), 1);
				unk_0x21E7933CCC7B3724(&(Global_2494199.f_202.f_1), 2);
				unk_0x21E7933CCC7B3724(&(Global_2494199.f_202.f_1), 3);
				func_113(6);
			}
			else if (unk_0x48B8265059381CD0(Global_2477267.f_1, 3) && func_52(&(Global_2477267.f_189)))
			{
				func_45();
			}
			break;
		
		case 6:
			StringCopy(&cVar3, func_2(Global_2477267.f_3.f_1), 64);
			if (Global_2477267.f_3.f_1 == 19)
			{
				if (Global_2494199.f_1566)
				{
					if (Global_2477267.f_2 == 7)
					{
						func_113(7);
					}
				}
				else if (Global_2494199.f_1567)
				{
					Global_2494199.f_1567 = 0;
					func_113(0);
					unk_0xEB79FECD9022AAF0(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 1);
				}
			}
			else if (!unk_0x48B8265059381CD0(Local_120[unk_0x08578C183D455935() /*3*/].f_1, 2))
			{
				Local_91.f_16 = -1;
				if (unk_0x82F1A060D8F4583B(unk_0x765F5B806B517045(&cVar3)) == 0)
				{
					if (!unk_0x24A0C7A82D1B9734(&cVar3, -1, 0, 0) || unk_0xEE67B2EB75624ADC(&cVar3, -1, 0) < 32)
					{
						if (!unk_0x24A0C7A82D1B9734(&cVar3, -1, 1, 0))
						{
							Local_91.f_0 = Global_2477267.f_3.f_1;
							if (func_41(Local_91, 0))
							{
								unk_0xEB79FECD9022AAF0(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 2);
							}
						}
					}
				}
			}
			else if (unk_0x82F1A060D8F4583B(unk_0x765F5B806B517045(&cVar3)) != 0)
			{
				if (Global_2477267.f_2 == 7)
				{
					func_113(7);
					unk_0xEB79FECD9022AAF0(&uLocal_90, 0);
					unk_0x21E7933CCC7B3724(&(Local_120[unk_0x08578C183D455935() /*3*/].f_1), 2);
				}
			}
			break;
		
		case 7:
			if (Global_2477267.f_2 != 7)
			{
				func_113(8);
			}
			break;
		
		case 8:
			func_113(0);
			break;
	}
}

int func_41(struct<17> Param0, var uParam17, var uParam18, var uParam19, bool bParam20)
{
	char cVar0[32];
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_44())
	{
		return 0;
	}
	bParam20 = bParam20;
	StringCopy(&cVar0, func_2(Param0.f_0), 32);
	if (unk_0xD5B2C67F250954B4(&cVar0))
	{
		unk_0xFCDDC89C28E82BB4(&cVar0);
		if (unk_0x32B1F051FF487881(&cVar0))
		{
			iVar8 = 1;
			if (bParam20)
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 16)
				{
					if (unk_0x24A0C7A82D1B9734(&cVar0, iVar9, iVar8, 0))
					{
						return 0;
					}
					iVar9++;
				}
			}
			else if (unk_0x24A0C7A82D1B9734(&cVar0, Param0.f_16, iVar8, 0))
			{
				return 0;
			}
			iVar10 = unk_0xB8BA7F44DF1575E1(&cVar0, &Param0, 20, func_42(Param0.f_0));
			unk_0x07481837BFD9C1CD(&cVar0);
			if (iVar10 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 124:
		case 131:
		case 125:
		case 129:
		case 132:
		case 133:
		case 126:
		case 134:
		case 135:
		case 127:
		case 136:
		case 128:
		case 140:
		case 130:
		case 49:
		case 64:
		case 62:
		case 70:
			return 39500;
		
		default:
	}
	if (func_43(iParam0) == 3)
	{
		return 8344;
	}
	else if (func_43(iParam0) == 7)
	{
		switch (iParam0)
		{
			case 45:
			case 43:
			case 39:
			case 37:
			case 41:
			case 47:
			case 40:
				return 8344;
			
			default:
		}
		return 4500;
	}
	else if (func_43(iParam0) == 0)
	{
		return 4500;
	}
	else if (func_43(iParam0) == 2)
	{
		return 4500;
	}
	else if (func_43(iParam0) == 6)
	{
		switch (iParam0)
		{
			case 18:
			case 22:
			case 24:
			case 17:
			case 120:
			case 121:
			case 60:
			case 112:
			case 65:
			case 71:
			case 66:
			case 67:
			case 68:
			case 73:
			case 74:
			case 78:
			case 75:
			case joaat("mpsv_lp0_31"):
			case 80:
			case 82:
			case 81:
			case 87:
			case 88:
			case 90:
			case 91:
			case 92:
			case 89:
			case 98:
			case 85:
			case 84:
			case 99:
			case 100:
			case 96:
			case 97:
			case 102:
			case 103:
			case 104:
			case 105:
			case 95:
				return 4500;
			
			case 110:
				return 8344;
			
			case 86:
			case 77:
			case 76:
				return 8344;
			
			case 9:
			case 16:
			case 15:
			case 107:
			case 106:
			case 19:
			case 111:
			case 108:
			case 21:
			case 122:
			case 123:
				return 2050;
			
			case 116:
				return 2812;
			
			case 137:
				return 1828;
			}
		
		default:
	}
	return 1424;
}

int func_43(int iParam0)
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
		
		case 137:
			return 6;
		
		case 73:
		case 74:
			return 6;
		
		case 75:
			return 6;
		
		case 76:
			return 6;
		
		case 77:
			return 6;
		
		case 78:
			return 6;
		
		case joaat("mpsv_lp0_31"):
			return 6;
		
		case 80:
			return 6;
		
		case 81:
			return 6;
		
		case 82:
			return 6;
		
		case 84:
			return 6;
		
		case 83:
			return 6;
		
		case 85:
			return 6;
		
		case 86:
			return 6;
		
		case 87:
			return 6;
		
		case 88:
			return 6;
		
		case 89:
			return 6;
		
		case 90:
			return 6;
		
		case 91:
			return 6;
		
		case 92:
			return 6;
		
		case 93:
			return 6;
		
		case 101:
			return 6;
		
		case 94:
			return 6;
		
		case 95:
			return 6;
		
		case 96:
			return 6;
		
		case 97:
			return 6;
		
		case 98:
			return 6;
		
		case 99:
			return 6;
		
		case 100:
			return 6;
		
		case 102:
			return 6;
		
		case 103:
			return 6;
		
		case 104:
			return 6;
		
		case 105:
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
		
		case 106:
			return 6;
		
		case 107:
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
		
		case 110:
			return 6;
		
		case 120:
			return 6;
		
		case 121:
			return 6;
		
		case 122:
			return 6;
		
		case 123:
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
		
		case 118:
			return 6;
		
		case 119:
			return 6;
		
		case 108:
			return 6;
		
		case 111:
			return 6;
		
		case 112:
			return 6;
		
		case 109:
			return 6;
		
		case 113:
			return 6;
		
		case 116:
			return 6;
		
		case 117:
			return 6;
		
		case 124:
			return 6;
		
		case 131:
			return 0;
		
		case 125:
			return 6;
		
		case 132:
			return 0;
		
		case 130:
			return 0;
		
		case 133:
			return 0;
		
		case 126:
			return 6;
		
		case 134:
			return 0;
		
		case 129:
			return 6;
		
		case 135:
			return 0;
		
		case 127:
			return 6;
		
		case 136:
			return 0;
		
		case 128:
			return 6;
		
		case 114:
			return 6;
		
		case 115:
			return 6;
		
		case 140:
			return 6;
		
		case 138:
			return 6;
		
		case 139:
			return 6;
		
		default:
	}
	return 11;
}

bool func_44()
{
	return Global_2443134.f_572;
}

void func_45()
{
	if (Global_2419109.f_84.f_2 == 1)
	{
		if (!unk_0x48B8265059381CD0(Global_2494199.f_202.f_1, 1))
		{
			if (((Global_262145.f_45 * 120000) - func_51(&(Global_2477267.f_189), 0, 0)) < 360000)
			{
				if (!unk_0x48B8265059381CD0(Global_2494199.f_202.f_1, 1))
				{
					if (func_69(31, 0, 0) && !func_109())
					{
						if (Global_262145.f_45 < 3)
						{
							func_46("ACD_TSCH", Global_262145.f_45, 1);
						}
						else
						{
							func_46("ACD_TSCH", 3, 1);
						}
					}
					unk_0xEB79FECD9022AAF0(&(Global_2494199.f_202.f_1), 1);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_51(&(Global_2477267.f_189), 0, 0)) < 600000)
			{
				if (!unk_0x48B8265059381CD0(Global_2494199.f_202.f_1, 2))
				{
					if (func_69(31, 0, 0) && !func_109())
					{
						func_46("ACD_TSCH", 5, 1);
					}
					unk_0xEB79FECD9022AAF0(&(Global_2494199.f_202.f_1), 2);
				}
			}
			else if (((Global_262145.f_45 * 120000) - func_51(&(Global_2477267.f_189), 0, 0)) < 1200000)
			{
				if (!unk_0x48B8265059381CD0(Global_2494199.f_202.f_1, 3))
				{
					if (func_69(31, 0, 0) && !func_109())
					{
						func_46("ACD_TSCH", 10, 1);
					}
					unk_0xEB79FECD9022AAF0(&(Global_2494199.f_202.f_1), 3);
				}
			}
		}
	}
}

int func_46(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xBD18006F0815A298(sParam0);
	unk_0x69967F83C1E636E2(iParam1);
	iVar0 = unk_0x23048DD0C6E21613(0, 1);
	func_47(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_47(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_50() || !unk_0xF7271A9481CAC8E3()) || !func_53(unk_0xBE369BE1BC57A796(), 0))
	{
		return;
	}
	iVar0 = func_48(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1759864.f_5[iVar0 /*53*/] = iParam0;
		Global_1759864.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1759864.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1759864.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1759864.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1759864.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1759864.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1759864.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_48(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1759864 - 1))
	{
		if (iParam0 > Global_1759864.f_5[iVar0 /*53*/].f_1)
		{
			func_49(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1759864++;
	if (Global_1759864 > 5)
	{
		Global_1759864 = 5;
		return Global_1759864;
	}
	return (Global_1759864 - 1);
}

void func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1759864.f_5[iVar0 /*53*/] = { Global_1759864.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_50()
{
	return unk_0x6948821CC8D52AC2(-1762644250);
}

int func_51(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x63C468D583002D23() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0);
		}
		else
		{
			return unk_0xDFD92E57E3A82E9C(unk_0x8F8F2E80A7DA4D64(), *uParam0);
		}
	}
	return unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0);
}

var func_52(var uParam0)
{
	return uParam0->f_1;
}

bool func_53(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_54(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_54(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_55();
	}
	if (Global_1315213[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_55()
{
	return Global_1312735;
}

int func_56()
{
	if (!func_57())
	{
		return 0;
	}
	if (Global_2404557.f_2 == Global_262145.f_7424 || Global_2404557.f_2 == Global_262145.f_7448)
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	switch (Global_2404557)
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

int func_58()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<3> Var5;
	
	iVar1 = 0;
	Var5 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	if (!bVar0)
	{
		if (unk_0x25F8DA4A9E82297D(Var5, iLocal_114, &Local_115, &uLocal_118, &uVar2, 0, 1077936128, 0))
		{
			if (unk_0x3DC4639D5F23DEA2(-1367.557f, -3220.598f, 12.9448f, Var5, 1) >= 600f)
			{
				if (unk_0x3DC4639D5F23DEA2(Var5, Local_115, 1) >= 75f)
				{
					unk_0x0A53F2AFCE4F39E0((Var5.f_0 - 250f), (Var5.f_1 - 250f), (Var5.f_0 + 250f), (Var5.f_1 + 250f));
					if (unk_0x2987C771A97EE274(Local_115, &uVar3, &uVar4))
					{
						if (uVar4 & 1 == 0)
						{
							if (iLocal_119 <= 0)
							{
								if (func_59(Local_115, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
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
		iLocal_114 += 3;
		if (iLocal_114 >= 150)
		{
			iLocal_114 = 40;
			iLocal_119++;
		}
	}
	if (iLocal_119 > 0)
	{
		iVar1 = 2;
	}
	return iVar1;
}

int func_59(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404994.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x47865C56C9B1EFE6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x3FDEBC0190C73055(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x3FDEBC0190C73055(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xC3CEDFD4651E42EC(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam13)
	{
		if (unk_0x08A593150B122791(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (fParam14 > 0f)
	{
		if (func_62(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_60(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404994.f_2++;
	return 1;
}

int func_60(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_12(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			if (!unk_0x25BD4C26D84038CD())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x3DC4639D5F23DEA2(func_81(unk_0xBE369BE1BC57A796()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xF7E1BD8196545EE3(Param0, fParam3))
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
			if (!func_53(iVar1, 0) && unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xBE369BE1BC57A796()))
				{
					if ((func_61(iVar1) || !bParam10) && !Global_2421664[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0xB58DEBB81964A4E9(iVar1) == unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB58DEBB81964A4E9(iVar1) != unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))) || unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0x3DC4639D5F23DEA2(func_81(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB58DEBB81964A4E9(iVar1) != iParam8 || unk_0xB58DEBB81964A4E9(iVar1) == -1)
						{
							if (unk_0x3DC4639D5F23DEA2(func_81(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
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

int func_61(int iParam0)
{
	if (unk_0xF86EF5C41AFF5F1F(unk_0xDF7CE83326F434E9(iParam0)) || Global_2421664[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

int func_62(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xBE369BE1BC57A796() != iVar1) || iParam8 == 0)
		{
			if (func_12(iVar1, bParam4, bParam5))
			{
				if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
				{
					if (!bParam7 || (!unk_0xCA41A00932714525(unk_0xDF7CE83326F434E9(iVar1)) && func_61(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) != unk_0xB58DEBB81964A4E9(iVar1))) || unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1)
						{
							if (((unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1 && uParam9) && bParam6) && func_63(iVar1))
							{
							}
							else if (unk_0x23E9113C762466ED(unk_0xDF7CE83326F434E9(iVar1)))
							{
								if (unk_0x3DC4639D5F23DEA2(func_81(iVar1), Param0, 1) < fParam3)
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

int func_63(int iParam0)
{
	if (func_67(unk_0xBE369BE1BC57A796(), iParam0))
	{
		return 1;
	}
	Global_2482053 = { func_66(iParam0) };
	if (unk_0x2D5BDD3304DD4725(&Global_2482053))
	{
		return 1;
	}
	if (func_64(unk_0xBE369BE1BC57A796(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_65(iParam0);
	if (!iVar0 == func_7())
	{
		if (iVar0 == func_65(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_7())
	{
		return Global_1619421[iParam0 /*390*/].f_11;
	}
	return func_7();
}

struct<13> func_66(var uParam0)
{
	struct<13> Var0;
	
	unk_0xF3EE72618DF96AF7(uParam0, &Var0, 13);
	return Var0;
}

int func_67(int iParam0, var uParam1)
{
	if (unk_0x749CE7B33672D350())
	{
		Global_2482053 = { func_66(iParam0) };
		Global_2482066 = { func_66(uParam1) };
		if (unk_0x3B13D05FD2D29D80(&Global_2482053))
		{
			if (unk_0x3B13D05FD2D29D80(&Global_2482066))
			{
				unk_0x7E1D32162078314A(&Global_2481983, 35, &Global_2482053);
				unk_0x7E1D32162078314A(&Global_2482018, 35, &Global_2482066);
				if (Global_2481983 == Global_2482018)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_68()
{
	if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_69(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6591 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_74(unk_0xBE369BE1BC57A796(), 85))
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
		if (Global_262145.f_4882 == 1)
		{
			return 1;
		}
	}
	if (func_73() || func_72())
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
			if (func_70())
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
	return unk_0x48B8265059381CD0(Global_1574358[iVar1], iVar0);
}

int func_70()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0x48B8265059381CD0(Global_2494199.f_1639, 23))
	{
		return 1;
	}
	if (func_73())
	{
		return 1;
	}
	if (func_72())
	{
		return 1;
	}
	uVar0 = Global_1363267[func_71(-1)];
	if (unk_0x48B8265059381CD0(uVar0, 7))
	{
		unk_0xEB79FECD9022AAF0(&(Global_2494199.f_1639), 23);
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_55();
		if (iVar1 > -1)
		{
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

bool func_72()
{
	return Global_1315221;
}

bool func_73()
{
	return Global_1315223;
}

bool func_74(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_77())
	{
		return 0;
	}
	if (func_76())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_75(iParam1);
	iVar1 = uVar0;
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_491, iVar1);
}

int func_75(int iParam0)
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

bool func_76()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_143, 3);
}

int func_77()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_73())
	{
		return 1;
	}
	if (func_72())
	{
		return 1;
	}
	return func_78(120, -1);
}

int func_78(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2522581[iParam0 /*3*/][func_71(iParam1)];
	if (unk_0x70BD7CFD9F825957(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_79()
{
	if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_80(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	
	if (unk_0x958A4508B04D88F0(Param0, &Var0, 0, 1077936128, 0))
	{
		if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Var0, Param3, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_81(int iParam0)
{
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iParam0), 0);
}

int func_82(bool bParam0)
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (func_86(unk_0xBE369BE1BC57A796(), 1))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_111())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0xF7271A9481CAC8E3())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0x51FDEF56E23A7C33())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!func_69(19, 0, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_83(9))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	return 1;
}

bool func_83(int iParam0)
{
	return !func_84(iParam0);
}

int func_84(int iParam0)
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
			if (Global_262145.f_5567)
			{
				return 0;
			}
			if (func_101(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5568)
			{
				return 0;
			}
			if (func_101(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5569)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5570)
			{
				return 0;
			}
			if (func_101(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_85(4))
			{
				return 0;
			}
			if (func_101(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_85(4))
			{
				return 0;
			}
			if (func_101(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_85(4))
			{
				return 0;
			}
			if (func_101(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_85(4))
			{
				return 0;
			}
			if (func_101(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_85(4))
			{
				return 0;
			}
			if (func_101(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_85(4))
			{
				return 0;
			}
			if (func_101(unk_0xBE369BE1BC57A796(), 7))
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

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(unk_0x0C36F33B3F746611(iVar0), 0, 1))
		{
			if (unk_0x48B8265059381CD0(Global_2421664[iVar0 /*358*/].f_211, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_86(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_104(iParam0))
		{
			return 1;
		}
	}
	if (Global_1591201[iParam0 /*602*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_87(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_139, 22);
}

int func_88(int iParam0)
{
	if (func_53(iParam0, 0))
	{
		return 1;
	}
	if (func_89())
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_89()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

bool func_90(int iParam0)
{
	if (func_91(iParam0))
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 8);
}

bool func_91(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1619421[iParam0 /*390*/].f_1, 2);
}

bool func_92(int iParam0)
{
	var uVar0;
	
	uVar0 = func_93(2462, -1, 0);
	return unk_0x48B8265059381CD0(uVar0, iParam0);
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503826[iParam0 /*3*/][func_71(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_94(int iParam0)
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

int func_95(int iParam0)
{
	if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 14))
	{
		return 1;
	}
	if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (Global_1591201[iParam0 /*602*/].f_258.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 0))
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
		if (func_100(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_99(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_97(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	if (iParam0 != func_7())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_98(Global_2421664[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_98(int iParam0)
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
		
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 3;
			break;
	}
	return -1;
}

int func_99(int iParam0)
{
	if (iParam0 != func_7())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_98(Global_2421664[iParam0 /*358*/].f_312.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_100(int iParam0)
{
	if (iParam0 != func_7())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
			{
				return func_98(Global_2421664[iParam0 /*358*/].f_312.f_1) == 0;
			}
		}
	}
	return 0;
}

bool func_101(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_211, iParam1);
}

int func_102()
{
	if (func_103() == 0)
	{
		return 1;
	}
	return 0;
}

int func_103()
{
	return Global_1312466.f_18;
}

bool func_104(int iParam0)
{
	return func_105(iParam0);
}

bool func_105(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_13.f_1, 0);
}

int func_106(int iParam0)
{
	switch (func_107(iParam0))
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

int func_107(int iParam0)
{
	return Global_1591201[iParam0 /*602*/].f_188;
}

bool func_108()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_188 != 0;
}

bool func_109()
{
	return Global_1315233;
}

bool func_110()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 5;
}

bool func_111()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 0);
}

int func_112(int iParam0)
{
	if (func_86(iParam0, 1))
	{
		if (Global_1591201[iParam0 /*602*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

void func_113(int iParam0)
{
	Local_120[unk_0x08578C183D455935() /*3*/].f_2 = iParam0;
}

int func_114()
{
	return 1;
}

int func_115()
{
	return Global_2477267;
}

int func_116(int iParam0)
{
	return Local_120[iParam0 /*3*/];
}

int func_117()
{
	bool bVar0;
	var uVar1;
	
	func_123(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315210 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			return 1;
		}
	}
	if (func_44())
	{
		return 1;
	}
	if (Global_2454747)
	{
		return 1;
	}
	if (func_122())
	{
		return 1;
	}
	if (func_121(157))
	{
		if (!func_120())
		{
			return 1;
		}
	}
	if (func_121(155))
	{
		return 1;
	}
	if (!unk_0x6C119F3638AC7ABE())
	{
		return 1;
	}
	if (func_118() != 0)
	{
		if (unk_0x82F1A060D8F4583B(func_118()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_118()
{
	switch (func_119())
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

int func_119()
{
	return Global_25190;
}

bool func_120()
{
	return Global_2443134.f_577;
}

int func_121(int iParam0)
{
	if (unk_0x08E5392A79D45DEE(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_122()
{
	return Global_2452525;
}

void func_123(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x91015F07066D5841(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 381:
					func_124(iVar0);
					break;
				
				case 2:
					unk_0x91015F07066D5841(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_124(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xDF7CE83326F434E9(Var0.f_1);
			if (unk_0x23E9113C762466ED(uVar3))
			{
				if (unk_0xFD0FE723227D5AB6(uVar3, 0))
				{
					uVar4 = unk_0x60604E51E30D25B8(uVar3, 0);
					if (unk_0x4AFDA497DA0BF602(uVar4, Var0.f_2) && unk_0x9A0AB9C5586EA71E())
					{
						if (func_125(uVar4, &bVar5))
						{
							unk_0x7DCEC4E83315DC12(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x921CF98C637B0043(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_125(var uParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xC26429B504BA534D(uParam0))
		{
			if (unk_0xFB2400809D8DC8C7(uParam0))
			{
				if (!unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(uParam0)))
				{
					unk_0xF0F77C99098F999B(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x45CA7F42CA715849(uParam0, 0))
		{
			if (unk_0xC38F0FBE1914783C(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_126()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_127()
{
	Global_2494199.f_1566 = 0;
	Global_2494199.f_1567 = 0;
	Global_2494199.f_1569 = 0;
	Global_2494199.f_1568 = 0;
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_202.f_1), 1);
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_202.f_1), 2);
	unk_0x21E7933CCC7B3724(&(Global_2494199.f_202.f_1), 3);
	unk_0x921053BAF754303D();
}

int func_128(struct<20> Param0)
{
	func_134();
	func_132(func_133(Param0.f_0), Param0);
	unk_0x79AA4F6EE2078BCD(0);
	func_129(0, -1, 0);
	unk_0xB5EAF11213E48C1C(&Global_2477267, 196);
	unk_0x0C3BA36587E6FBEE(&Local_120, 97);
	unk_0xAA78C60F0BF0F8D4(0);
	Local_120[unk_0x08578C183D455935() /*3*/] = 0;
	func_113(0);
	return 1;
}

int func_129(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xCC130A646D137F0D();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_131();
			}
			else
			{
				return 0;
			}
		}
		if (!func_130())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x63C468D583002D23())
				{
					if (!bParam2)
					{
						func_131();
					}
					else
					{
						return 0;
					}
				}
				if (func_44())
				{
					if (!bParam2)
					{
						func_131();
					}
					else
					{
						return 0;
					}
				}
				if (func_121(155))
				{
					if (!bParam2)
					{
						func_131();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x9AD8CE0019487D7C())
			{
				if (!bParam2)
				{
					func_131();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xCC130A646D137F0D();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			if (!bParam2)
			{
				func_131();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x9AD8CE0019487D7C())
	{
		if (!bParam2)
		{
			func_131();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_130()
{
	return Global_1315210;
}

void func_131()
{
	unk_0x921053BAF754303D();
}

void func_132(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x63C468D583002D23())
	{
		func_131();
	}
	unk_0x181A13B993F735EB(uParam0, 0, Param1.f_16);
}

int func_133(int iParam0)
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
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
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
		
		case 106:
			return 32;
		
		case 107:
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
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 113:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 117:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 2;
		
		case 129:
			return 1;
		
		case 125:
			return 2;
		
		case 126:
			return 4;
		
		case 127:
			return 2;
		
		case 128:
			return 2;
		
		case 110:
			return 1;
		
		case 130:
			return 2;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 0;
		
		case 140:
			return 1;
		
		case 137:
			return 4;
		
		case 138:
			return 16;
		
		case 139:
			return 32;
		
		default:
	}
	return 0;
}

void func_134()
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
	Global_2477267 = { Var0 };
}

