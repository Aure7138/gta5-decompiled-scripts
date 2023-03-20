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
	iLocal_34 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_109 = 40;
	if (unk_0x03A753E2C8458335())
	{
		if (!func_111(ScriptParam_0))
		{
			func_110();
		}
	}
	while (true)
	{
		func_109();
		if (func_100())
		{
			func_110();
		}
		switch (func_99(unk_0x8A9386F0749A17FA()))
		{
			case 0:
				if (func_98() == 1)
				{
					if (func_97())
					{
						Local_115[unk_0x8A9386F0749A17FA() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_98() == 1)
				{
					func_34();
				}
				else if (func_98() == 3)
				{
					Local_115[unk_0x8A9386F0749A17FA() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_110();
				break;
		}
		if (unk_0x6A4C37E16775564D())
		{
			switch (func_98())
			{
				case 0:
					if (func_31())
					{
						Global_2441732 = 1;
					}
					break;
				
				case 1:
					if (func_30())
					{
						Global_2441732 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_110();
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
	
	switch (Global_2441732.f_2)
	{
		case 0:
			if (!unk_0x4ED6CFDFE8D4131A(Global_2441732.f_1, 1))
			{
				func_29(&(Global_2441732.f_60));
				unk_0xF73FBE4845C43B5B(&(Global_2441732.f_1), 1);
			}
			else if (func_27(&(Global_2441732.f_60), Global_2441732.f_62, 0))
			{
				func_26(1);
				unk_0x7D1D4A3602B6AD4E(&(Global_2441732.f_1), 1);
			}
			break;
		
		case 1:
			if (unk_0x03A753E2C8458335())
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
			Global_2441732.f_3 = -1;
			iVar2 = func_9();
			if (iVar2 != -1)
			{
				Global_2441732.f_3 = { Global_2441732.f_8[iVar2 /*5*/] };
				func_26(4);
			}
			else
			{
				Global_2441732.f_62 = (Global_262145.f_6409 / 2);
				func_26(0);
			}
			break;
		
		case 4:
			switch (func_8(Global_2441732.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2441732.f_3)
					{
						case 1:
							func_6();
							break;
					}
					bVar3 = true;
					if (bVar3)
					{
						if (Global_2441732.f_3 == 1)
						{
							if (unk_0x4ED6CFDFE8D4131A(Global_2441732.f_1, 4))
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
						func_25(Global_2441732.f_3, 0f);
						func_26(3);
					}
					break;
				
				case 2:
					func_25(Global_2441732.f_3, 0f);
					func_26(3);
					break;
			}
			break;
		
		case 5:
			if (Global_2441732.f_3 == 1)
			{
				if (unk_0x4ED6CFDFE8D4131A(Global_2441732.f_1, 4))
				{
					if (!unk_0x4ED6CFDFE8D4131A(Global_2441732.f_1, 3))
					{
						func_29(&(Global_2441732.f_58));
						unk_0xF73FBE4845C43B5B(&(Global_2441732.f_1), 3);
					}
					else if (func_27(&(Global_2441732.f_58), (Global_262145.f_44 * 120000), 0))
					{
						unk_0x7D1D4A3602B6AD4E(&(Global_2441732.f_1), 3);
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
			if (Global_2441732.f_3.f_1 == 19)
			{
				func_4(func_5(unk_0xD8C39D22181118B3("AM_IMP_EXP", -1, 0)), 1);
				Global_2446554.f_1550 = 0;
				func_26(7);
				func_3(Global_2441732.f_3);
			}
			else if (unk_0x708F8E0E895B9247(func_2(Global_2441732.f_3.f_1), -1, 0, 0))
			{
				func_26(7);
				func_3(Global_2441732.f_3);
			}
			break;
		
		case 7:
			if (Global_2441732.f_3.f_1 == 19)
			{
				if (Global_2446554.f_1550)
				{
					func_26(8);
					Global_2446554.f_1550 = 0;
				}
			}
			else if (!unk_0x708F8E0E895B9247(func_2(Global_2441732.f_3.f_1), -1, 0, 0))
			{
				func_26(8);
			}
			break;
		
		case 8:
			if (unk_0x4ED6CFDFE8D4131A(Global_2441732.f_1, 0))
			{
				func_26(0);
				unk_0x7D1D4A3602B6AD4E(&(Global_2441732.f_1), 0);
			}
			else
			{
				Global_2441732.f_62 = Global_262145.f_6409;
				Global_2441732.f_8[Global_2441732.f_3 /*5*/].f_4 = 1;
				if (unk_0x4ED6CFDFE8D4131A(Global_2441732.f_1, 2))
				{
					unk_0x7D1D4A3602B6AD4E(&(Global_2441732.f_1), 2);
				}
				if (unk_0x4ED6CFDFE8D4131A(Global_2441732.f_1, 4))
				{
					unk_0x7D1D4A3602B6AD4E(&(Global_2441732.f_1), 4);
				}
				Global_2441732.f_3 = -1;
				Global_2441732.f_3.f_1 = 0;
				unk_0xF73FBE4845C43B5B(&(Global_2441732.f_1), 0);
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
	
	if (Global_262145.f_6408 > 0 && Global_262145.f_6408 <= 8)
	{
		if (!Global_2441732.f_49[(Global_262145.f_6408 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < (Global_262145.f_6408 - 1))
			{
				Global_2441732.f_49[iVar0] = Global_2441732.f_49[iVar0 + 1];
				iVar0++;
			}
		}
		Global_2441732.f_49[(Global_262145.f_6408 - 1)] = uParam0;
	}
}

void func_4(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 363;
	Var0.f_1 = unk_0x217E9DC48139933D();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x6691DE2D866FC69F(1, &Var0, 3, iParam0);
	}
}

int func_5(int iParam0)
{
	var uVar0;
	
	unk_0xF73FBE4845C43B5B(&uVar0, iParam0);
	return uVar0;
}

void func_6()
{
	func_7(func_5(unk_0xD8C39D22181118B3("freemode", -1, 0)), 0);
	if (unk_0x9C1C462D7B1DD1F9(0, 100) < Global_262145.f_108)
	{
		if (unk_0x29D398109BF4F9AC() >= Global_262145.f_109)
		{
			func_7(func_5(unk_0xD8C39D22181118B3("freemode", -1, 0)), 1);
			unk_0xF73FBE4845C43B5B(&(Global_2441732.f_1), 4);
		}
	}
}

void func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 364;
	Var0.f_1 = unk_0x217E9DC48139933D();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x6691DE2D866FC69F(1, &Var0, 3, iParam0);
	}
}

int func_8(struct<4> Param0, var uParam4)
{
	int iVar0;
	
	iLocal_106 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x1DB8366B5C46DA9E(unk_0x748B3A65C2604C33(iVar0)))
		{
			if (unk_0x4ED6CFDFE8D4131A(Local_115[iVar0 /*3*/].f_1, 0))
			{
				iLocal_106++;
				if (Param0.f_1 == 18)
				{
					if (unk_0x29D398109BF4F9AC() >= Param0.f_3)
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
						if (!unk_0x4ED6CFDFE8D4131A(Global_2441732.f_1, 2))
						{
							unk_0xF73FBE4845C43B5B(&(Global_2441732.f_1), 2);
						}
					}
					return 1;
				}
			}
			else if (unk_0x4ED6CFDFE8D4131A(Local_115[iVar0 /*3*/].f_1, 1))
			{
			}
			else if (!unk_0x4ED6CFDFE8D4131A(Local_115[iVar0 /*3*/].f_1, 1))
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
		fVar1 = (fVar1 + Global_2441732.f_8[iVar0 /*5*/].f_2);
		iVar0++;
	}
	fVar3 = unk_0xE29F927A961F8AAA(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		fVar2 = (fVar2 + Global_2441732.f_8[iVar0 /*5*/].f_2);
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
			return Global_262145.f_6446;
		
		case 1:
			return Global_262145.f_6443;
		
		case 2:
			return Global_262145.f_6444;
		
		case 3:
			return Global_262145.f_6445;
		
		case 4:
			return Global_262145.f_6447;
		
		case 5:
			return Global_262145.f_6448;
		
		case 6:
			return Global_262145.f_6449;
		
		case 7:
			return Global_262145.f_6829;
		
		default:
	}
	return 0f;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_4999;
		
		case 1:
			return Global_262145.f_4996;
		
		case 2:
			return Global_262145.f_4997;
		
		case 3:
			return Global_262145.f_4998;
		
		case 4:
			return Global_262145.f_6497;
		
		case 5:
			return Global_262145.f_6394;
		
		case 6:
			return Global_262145.f_6399;
		
		case 7:
			return Global_262145.f_6404;
		
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
	
	if (!unk_0x4ED6CFDFE8D4131A(Global_1336615, 0))
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
		if (!bParam4 && Global_1582596[unk_0x217E9DC48139933D() /*324*/] != 3)
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
			return Global_1336615.f_1;
			break;
		
		case 1:
			return Global_1336615.f_2;
			break;
		
		case 2:
			return Global_1336615.f_3;
			break;
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x217E9DC48139933D();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xB779D92A280DB7F7())
			{
				return Global_2414009[iVar0 /*254*/].f_206;
			}
			else
			{
				return unk_0x5E8CAF15E5B543BD(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xB779D92A280DB7F7())
			{
				return Global_2414009[iVar0 /*254*/].f_207;
			}
			else
			{
				return unk_0xA96540DBD2E950F2(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xB779D92A280DB7F7())
			{
				return Global_2414009[iVar0 /*254*/].f_208;
			}
			else
			{
				return unk_0x799D17F5F0EECB18(!bParam1);
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
			return Global_1336623;
			break;
		
		case 1:
			return Global_1336624;
			break;
		
		case 2:
			return Global_1336625;
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
	
	if (Global_262145.f_6408 > 0 && Global_262145.f_6408 <= 8)
	{
		if (!Global_2441732.f_49[(Global_262145.f_6408 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_6408)
			{
				if (Global_2441732.f_49[iVar0] == iParam0)
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
	Global_2441732.f_8[iParam0 /*5*/].f_2 = fParam1;
}

void func_26(int iParam0)
{
	Global_2441732.f_2 = iParam0;
}

int func_27(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_28(uParam0, bParam2, 0);
	if (unk_0x03A753E2C8458335() && !bParam2)
	{
		if (unk_0x0C214D5B8A38C828(unk_0x720C9CED76527377(unk_0x6AEB0DF30A9DB9F1(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C214D5B8A38C828(unk_0x720C9CED76527377(unk_0x4F67E8ECA7D3F667(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_28(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x03A753E2C8458335() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6AEB0DF30A9DB9F1();
			}
			else
			{
				*uParam0 = unk_0xCCF575E20D375E1B();
			}
		}
		else
		{
			*uParam0 = unk_0x4F67E8ECA7D3F667();
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
	
	Global_2441732.f_62 = Global_262145.f_6409;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2441732.f_8[iVar0 /*5*/] = iVar0;
		Global_2441732.f_8[iVar0 /*5*/].f_1 = func_33(iVar0);
		Global_2441732.f_8[iVar0 /*5*/].f_2 = 1f;
		Global_2441732.f_8[iVar0 /*5*/].f_3 = func_32(iVar0);
		iVar0++;
	}
	if (Global_262145.f_6408 > 0 && Global_262145.f_6408 <= 8)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_6408)
		{
			Global_2441732.f_49[iVar1] = -1;
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
			return Global_262145.f_4822;
		
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
			return 19;
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
	int iVar1;
	var uVar2;
	
	switch (Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_2)
	{
		case 0:
			if (Global_2441732.f_2 >= 4 && Global_2441732.f_2 != 8)
			{
				if (unk_0x4ED6CFDFE8D4131A(Global_2441732.f_1, 2))
				{
					unk_0xF73FBE4845C43B5B(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 0);
					unk_0x7D1D4A3602B6AD4E(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 1);
				}
				if (!unk_0x4ED6CFDFE8D4131A(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1, 1))
				{
					func_96(4);
				}
				else if (!unk_0x4ED6CFDFE8D4131A(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1, 3))
				{
					func_29(&uLocal_107);
					unk_0xF73FBE4845C43B5B(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 3);
				}
				else if (func_27(&uLocal_107, 10000, 0))
				{
					func_96(4);
					unk_0x7D1D4A3602B6AD4E(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 3);
				}
			}
			else if (unk_0x4ED6CFDFE8D4131A(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1, 1))
			{
				unk_0x7D1D4A3602B6AD4E(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 1);
			}
			break;
		
		case 4:
			if (unk_0x4ED6CFDFE8D4131A(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1, 0))
			{
				if (Global_2441732.f_2 == 8)
				{
					func_96(8);
					unk_0x7D1D4A3602B6AD4E(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 0);
				}
				else if (Global_2441732.f_2 == 5)
				{
					func_96(5);
					unk_0x7D1D4A3602B6AD4E(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 0);
				}
				else if (Global_2441732.f_2 >= 6)
				{
					func_96(6);
					unk_0x7D1D4A3602B6AD4E(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 0);
				}
				else if (Global_2441732.f_2 == 3)
				{
					func_96(0);
					unk_0x7D1D4A3602B6AD4E(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 0);
				}
			}
			else
			{
				iVar0 = 0;
				if (((((((((((((!unk_0x2D7C0AC1FF9AFBB7() && !func_95(unk_0x217E9DC48139933D())) && !func_94()) && !func_93()) && !func_92()) && !func_91()) && !func_89(unk_0x217E9DC48139933D())) && !unk_0xB8A3683DF4C96A44()) && !func_87(unk_0x217E9DC48139933D())) && func_85()) && !func_84(unk_0x217E9DC48139933D(), 0)) && !func_84(unk_0x217E9DC48139933D(), 7)) && !func_83(unk_0x217E9DC48139933D(), 0)) && func_82(unk_0x217E9DC48139933D(), 1, 1))
				{
					iVar1 = func_81(Global_2441732.f_3);
					if (iVar1 < 0 || !func_79(iVar1))
					{
						switch (Global_2441732.f_3)
						{
							case 0:
								if (((func_74(0) && func_72(func_73(unk_0x217E9DC48139933D()), 40f, 40f, 40f)) && unk_0xFB6BA510A533DF81(unk_0x096275889B8E0EE0()) < 10f) && !func_71())
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
								if (((((func_61(20, 0) && !func_84(unk_0x217E9DC48139933D(), 1)) && !func_84(unk_0x217E9DC48139933D(), 2)) && !func_84(unk_0x217E9DC48139933D(), 3)) && !Global_2422140.f_3033) && !func_50())
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
				}
				else
				{
					iVar0 = 2;
				}
				if (iVar0 == 1)
				{
					unk_0xF73FBE4845C43B5B(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 0);
				}
				else if (iVar0 == 2)
				{
					func_96(0);
					unk_0xF73FBE4845C43B5B(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 1);
				}
			}
			break;
		
		case 5:
			if (Global_2441732.f_2 == 6)
			{
				unk_0x7D1D4A3602B6AD4E(&(Global_2446554.f_200.f_1), 1);
				unk_0x7D1D4A3602B6AD4E(&(Global_2446554.f_200.f_1), 2);
				unk_0x7D1D4A3602B6AD4E(&(Global_2446554.f_200.f_1), 3);
				func_96(6);
			}
			else if (unk_0x4ED6CFDFE8D4131A(Global_2441732.f_1, 3) && func_49(&(Global_2441732.f_58)))
			{
				func_39();
			}
			break;
		
		case 6:
			uVar2 = func_2(Global_2441732.f_3.f_1);
			if (Global_2441732.f_3.f_1 == 19)
			{
				if (Global_2446554.f_1547)
				{
					if (Global_2441732.f_2 == 7)
					{
						func_96(7);
					}
				}
				else if (Global_2446554.f_1548)
				{
					Global_2446554.f_1548 = 0;
					func_96(0);
					unk_0xF73FBE4845C43B5B(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 1);
				}
			}
			else if (!unk_0x4ED6CFDFE8D4131A(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1, 2))
			{
				Local_86.f_16 = -1;
				if (unk_0x8E34C953364A76DD(unk_0xFD340785ADF8CFB7(uVar2)) == 0)
				{
					if (!unk_0x708F8E0E895B9247(uVar2, -1, 0, 0) || unk_0x02199938ADC0D4A9(uVar2, -1, 0) < 32)
					{
						if (!unk_0x708F8E0E895B9247(uVar2, -1, 1, 0))
						{
							Local_86.f_0 = Global_2441732.f_3.f_1;
							if (func_35(Local_86, 0))
							{
								unk_0xF73FBE4845C43B5B(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 2);
							}
						}
					}
				}
			}
			else if (unk_0x8E34C953364A76DD(unk_0xFD340785ADF8CFB7(uVar2)) != 0)
			{
				if (Global_2441732.f_2 == 7)
				{
					func_96(7);
					unk_0x7D1D4A3602B6AD4E(&(Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_1), 2);
				}
			}
			break;
		
		case 7:
			if (Global_2441732.f_2 != 7)
			{
				func_96(8);
			}
			break;
		
		case 8:
			func_96(0);
			break;
	}
}

int func_35(struct<17> Param0, var uParam17, var uParam18, var uParam19, bool bParam20)
{
	char cVar0[32];
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_38())
	{
		return 0;
	}
	bParam20 = bParam20;
	StringCopy(&cVar0, func_2(Param0.f_0), 32);
	if (unk_0x552B171E3F69E5AE(&cVar0))
	{
		unk_0x46ED607DDD40D7FE(&cVar0);
		if (unk_0xE97BD36574F8B0A6(&cVar0))
		{
			iVar8 = 1;
			if (bParam20)
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 16)
				{
					if (unk_0x708F8E0E895B9247(&cVar0, iVar9, iVar8, 0))
					{
						return 0;
					}
					iVar9++;
				}
			}
			else if (unk_0x708F8E0E895B9247(&cVar0, Param0.f_16, iVar8, 0))
			{
				return 0;
			}
			iVar10 = unk_0xB8BA7F44DF1575E1(&cVar0, &Param0, 20, func_36(Param0.f_0));
			unk_0x0086D3067E1CFD1C(&cVar0);
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
			return 2812;
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
	return Global_2428131.f_567;
}

void func_39()
{
	if (Global_2411466.f_84.f_2 == 1)
	{
		if (!unk_0x4ED6CFDFE8D4131A(Global_2446554.f_200.f_1, 1))
		{
			if (((Global_262145.f_44 * 120000) - func_48(&(Global_2441732.f_58), 0, 0)) < 360000)
			{
				if (!unk_0x4ED6CFDFE8D4131A(Global_2446554.f_200.f_1, 1))
				{
					if (func_61(31, 0) && !func_92())
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
					unk_0xF73FBE4845C43B5B(&(Global_2446554.f_200.f_1), 1);
				}
			}
			else if (((Global_262145.f_44 * 120000) - func_48(&(Global_2441732.f_58), 0, 0)) < 600000)
			{
				if (!unk_0x4ED6CFDFE8D4131A(Global_2446554.f_200.f_1, 2))
				{
					if (func_61(31, 0) && !func_92())
					{
						func_40("ACD_TSCH", 5, 1);
					}
					unk_0xF73FBE4845C43B5B(&(Global_2446554.f_200.f_1), 2);
				}
			}
			else if (((Global_262145.f_44 * 120000) - func_48(&(Global_2441732.f_58), 0, 0)) < 1200000)
			{
				if (!unk_0x4ED6CFDFE8D4131A(Global_2446554.f_200.f_1, 3))
				{
					if (func_61(31, 0) && !func_92())
					{
						func_40("ACD_TSCH", 10, 1);
					}
					unk_0xF73FBE4845C43B5B(&(Global_2446554.f_200.f_1), 3);
				}
			}
		}
	}
}

int func_40(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x88D2BE4120CBF840(sParam0);
	unk_0xF00CED653959DE03(iParam1);
	iVar0 = unk_0x32746D2B6BD5B12F(0, 1);
	func_41(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_41(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_47() || !unk_0xB8A3683DF4C96A44()) || !func_44(unk_0x217E9DC48139933D(), 0))
	{
		return;
	}
	iVar0 = func_42(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1692405.f_5[iVar0 /*53*/] = iParam0;
		Global_1692405.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1692405.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1692405.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1692405.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1692405.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1692405.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1692405.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_42(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1692405 - 1))
	{
		if (iParam0 > Global_1692405.f_5[iVar0 /*53*/].f_1)
		{
			func_43(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1692405++;
	if (Global_1692405 > 5)
	{
		Global_1692405 = 5;
		return Global_1692405;
	}
	return (Global_1692405 - 1);
}

void func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1692405.f_5[iVar0 /*53*/] = { Global_1692405.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_44(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x217E9DC48139933D())
	{
		bVar0 = func_45(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1DB8366B5C46DA9E(iParam0))
		{
			bVar0 = unk_0xB464EB6A40C7975B(iParam0) == 8;
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
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_46()
{
	return Global_1312737;
}

bool func_47()
{
	return unk_0x2763DC12BBE2BB6F(-1762644250);
}

int func_48(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x03A753E2C8458335() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x720C9CED76527377(unk_0x6AEB0DF30A9DB9F1(), *uParam0);
		}
		else
		{
			return unk_0x720C9CED76527377(unk_0xCCF575E20D375E1B(), *uParam0);
		}
	}
	return unk_0x720C9CED76527377(unk_0x4F67E8ECA7D3F667(), *uParam0);
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
	if (Global_2404111.f_2 == Global_262145.f_6842 || Global_2404111.f_2 == Global_262145.f_6866)
	{
		return 1;
	}
	return 0;
}

int func_51()
{
	switch (Global_2404111)
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
	Var5 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
	if (!bVar0)
	{
		if (unk_0x591B40D4390DB54A(Var5, iLocal_109, &Local_110, &uLocal_113, &uVar2, 0, 1077936128, 0))
		{
			if (unk_0x0BE7F4E3CDBAFB28(-1367.557f, -3220.598f, 12.9448f, Var5, 1) >= 600f)
			{
				if (unk_0x0BE7F4E3CDBAFB28(Var5, Local_110, 1) >= 75f)
				{
					unk_0x3A75D916CC3E33B5((Var5.f_0 - 250f), (Var5.f_1 - 250f), (Var5.f_0 + 250f), (Var5.f_1 + 250f));
					if (unk_0x5FA588A1A8710343(Local_110, &uVar3, &uVar4))
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
	Global_2404548 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x5698BA4FD04D39C4(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xEAD6926636D0C1B6(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xEAD6926636D0C1B6(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x65894EC3F0E84F0E(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404548++;
	if (bParam13)
	{
		if (unk_0xF9617BC6FAE61E08(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404548++;
	if (fParam14 > 0f)
	{
		if (func_56(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404548++;
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
	Global_2404548++;
	return 1;
}

int func_54(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_82(unk_0x217E9DC48139933D(), 1, 1))
		{
			if (!unk_0xF5472C80DF2FF847())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0BE7F4E3CDBAFB28(func_73(unk_0x217E9DC48139933D()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x2E941B5FFA2989C6(Param0, fParam3))
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
		if (func_82(iVar1, 1, 1))
		{
			if (!func_44(iVar1, 0) && unk_0x42995AC664A50A48(unk_0x217E9DC48139933D(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x217E9DC48139933D()))
				{
					if ((func_55(iVar1) || !bParam10) && !Global_2414009[iVar1 /*254*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB464EB6A40C7975B(iVar1) == -1)
							{
								if (unk_0xB464EB6A40C7975B(iVar1) == unk_0xB464EB6A40C7975B(unk_0x217E9DC48139933D()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB464EB6A40C7975B(iVar1) != unk_0xB464EB6A40C7975B(unk_0x217E9DC48139933D()))) || unk_0xB464EB6A40C7975B(iVar1) == -1)
							{
								if (unk_0x0BE7F4E3CDBAFB28(func_73(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x2DC8540EEEA3B3A3(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB464EB6A40C7975B(iVar1) != iParam8 || unk_0xB464EB6A40C7975B(iVar1) == -1)
						{
							if (unk_0x0BE7F4E3CDBAFB28(func_73(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x2DC8540EEEA3B3A3(iVar1, Param0, fParam3))
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
	if (unk_0xF213C724E77F321A(unk_0x275F255ED201B937(iParam0)) || Global_2414009[iParam0 /*254*/].f_239)
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
		if ((iParam8 == 1 && unk_0x217E9DC48139933D() != iVar1) || iParam8 == 0)
		{
			if (func_82(iVar1, bParam4, bParam5))
			{
				if (unk_0x42995AC664A50A48(unk_0x217E9DC48139933D(), iVar1))
				{
					if (!bParam7 || (!unk_0x6CFF81397164A1D3(unk_0x275F255ED201B937(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB464EB6A40C7975B(unk_0x217E9DC48139933D()) != unk_0xB464EB6A40C7975B(iVar1))) || unk_0xB464EB6A40C7975B(unk_0x217E9DC48139933D()) == -1)
						{
							if (((unk_0xB464EB6A40C7975B(unk_0x217E9DC48139933D()) == -1 && uParam9) && bParam6) && func_57(iVar1))
							{
							}
							else if (unk_0xD42BD6EB2E0F1677(unk_0x275F255ED201B937(iVar1)))
							{
								if (unk_0x0BE7F4E3CDBAFB28(func_73(iVar1), Param0, 1) < fParam3)
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
	if (func_59(unk_0x217E9DC48139933D(), iParam0))
	{
		return 1;
	}
	Global_2445582 = { func_58(iParam0) };
	if (unk_0xAA0167DC94EACB15(&Global_2445582))
	{
		return 1;
	}
	return 0;
}

struct<13> func_58(var uParam0)
{
	struct<13> Var0;
	
	unk_0xA7E9F04BBC5AF355(uParam0, &Var0, 13);
	return Var0;
}

int func_59(int iParam0, var uParam1)
{
	if (unk_0x2C079282730811D0())
	{
		Global_2445582 = { func_58(iParam0) };
		Global_2445595 = { func_58(uParam1) };
		if (unk_0x6BB4EDAA3A4778E8(&Global_2445582))
		{
			if (unk_0x6BB4EDAA3A4778E8(&Global_2445595))
			{
				unk_0x534D7C93C5A1A2C4(&Global_2445512, 35, &Global_2445582);
				unk_0x534D7C93C5A1A2C4(&Global_2445547, 35, &Global_2445595);
				if (Global_2445512 == Global_2445547)
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
	if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_61(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6017 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_66(unk_0x217E9DC48139933D(), 85))
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
		if (Global_262145.f_4821 == 1)
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
	return unk_0x4ED6CFDFE8D4131A(Global_1573723[iVar1], iVar0);
}

int func_62()
{
	var uVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (unk_0x4ED6CFDFE8D4131A(Global_2446554.f_1618, 23))
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
	uVar0 = Global_1335599[func_63(-1)];
	if (unk_0x4ED6CFDFE8D4131A(uVar0, 7))
	{
		unk_0xF73FBE4845C43B5B(&(Global_2446554.f_1618), 23);
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
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

bool func_64()
{
	return Global_1315888;
}

bool func_65()
{
	return Global_1315890;
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
	return unk_0x4ED6CFDFE8D4131A(Global_1582596[iParam0 /*324*/].f_300, iVar1);
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
	return unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_120, 3);
}

int func_69()
{
	if (Global_1312448)
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
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473393[iParam0 /*6*/][func_63(iParam1)];
	if (unk_0x50A9632CFBD07D9D(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_71()
{
	if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_72(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	
	if (unk_0xFB6670FE6C21B07D(Param0, &Var0, 0, 1077936128, 0))
	{
		if (unk_0x5E58342602E94718(unk_0x096275889B8E0EE0(), Var0, Param3, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_73(int iParam0)
{
	return unk_0xA86D5F069399F44D(unk_0x275F255ED201B937(iParam0), 0);
}

int func_74(bool bParam0)
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (func_78(unk_0x217E9DC48139933D(), 1))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_94())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0xB8A3683DF4C96A44())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0x2D7C0AC1FF9AFBB7())
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
			if (Global_262145.f_4996)
			{
				return 0;
			}
			if (func_84(unk_0x217E9DC48139933D(), 7))
			{
				return 0;
			}
			if (unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 0) || unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_4997)
			{
				return 0;
			}
			if (func_84(unk_0x217E9DC48139933D(), 7))
			{
				return 0;
			}
			if (unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 0) || unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_4998)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_4999)
			{
				return 0;
			}
			if (func_84(unk_0x217E9DC48139933D(), 7))
			{
				return 0;
			}
			if (unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 0) || unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_77(4))
			{
				return 0;
			}
			if (func_84(unk_0x217E9DC48139933D(), 7))
			{
				return 0;
			}
			if (unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 0) || unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 18:
			if (func_77(4))
			{
				return 0;
			}
			if (func_84(unk_0x217E9DC48139933D(), 7))
			{
				return 0;
			}
			if (unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 0) || unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_77(4))
			{
				return 0;
			}
			if (func_84(unk_0x217E9DC48139933D(), 7))
			{
				return 0;
			}
			if (unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 0) || unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_235.f_4, 1))
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
		if (func_82(unk_0x748B3A65C2604C33(iVar0), 0, 1))
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_2414009[iVar0 /*254*/].f_205, iParam0))
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
		if (func_87(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582596[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_79(int iParam0)
{
	var uVar0;
	
	uVar0 = func_80(2436, -1, 0);
	return unk_0x4ED6CFDFE8D4131A(uVar0, iParam0);
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_63(iParam1)];
	if (unk_0x380F22FED8D528A4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		case 4:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 6;
		
		case 7:
			return 5;
		
		default:
	}
	return -1;
}

int func_82(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x1DB8366B5C46DA9E(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0xBFFB35986CAAE58C(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422140.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_83(int iParam0, bool bParam1)
{
	if (Global_1582596[iParam0 /*324*/].f_235.f_6 > 0)
	{
		if (bParam1)
		{
			if (unk_0x4ED6CFDFE8D4131A(Global_1582596[iParam0 /*324*/].f_235.f_4, 0))
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

bool func_84(int iParam0, int iParam1)
{
	return unk_0x4ED6CFDFE8D4131A(Global_2414009[iParam0 /*254*/].f_205, iParam1);
}

int func_85()
{
	if (func_86() == 0)
	{
		return 1;
	}
	return 0;
}

int func_86()
{
	return Global_1312467.f_18;
}

bool func_87(int iParam0)
{
	return func_88(iParam0);
}

bool func_88(int iParam0)
{
	return unk_0x4ED6CFDFE8D4131A(Global_1582596[iParam0 /*324*/].f_13.f_1, 0);
}

int func_89(int iParam0)
{
	switch (func_90(iParam0))
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

int func_90(int iParam0)
{
	return Global_1582596[iParam0 /*324*/].f_165;
}

bool func_91()
{
	return Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_165 != 0;
}

bool func_92()
{
	return Global_1315900;
}

bool func_93()
{
	return Global_1582596[unk_0x217E9DC48139933D() /*324*/] == 5;
}

bool func_94()
{
	return unk_0x4ED6CFDFE8D4131A(Global_1582596[unk_0x217E9DC48139933D() /*324*/].f_31.f_18, 0);
}

int func_95(int iParam0)
{
	if (func_78(iParam0, 1))
	{
		if (Global_1582596[iParam0 /*324*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

void func_96(int iParam0)
{
	Local_115[unk_0x8A9386F0749A17FA() /*3*/].f_2 = iParam0;
}

int func_97()
{
	return 1;
}

int func_98()
{
	return Global_2441732;
}

int func_99(int iParam0)
{
	return Local_115[iParam0 /*3*/];
}

int func_100()
{
	bool bVar0;
	
	func_106(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!unk_0x03A753E2C8458335())
		{
			return 1;
		}
	}
	if (func_38())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (func_104(157))
	{
		if (!func_103())
		{
			return 1;
		}
	}
	if (func_104(155))
	{
		return 1;
	}
	if (!unk_0x4C82BD446C34CACD())
	{
		return 1;
	}
	if (func_101() != 0)
	{
		if (unk_0x8E34C953364A76DD(func_101()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_101()
{
	switch (func_102())
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

int func_102()
{
	return Global_24444;
}

bool func_103()
{
	return Global_2428131.f_572;
}

int func_104(int iParam0)
{
	if (unk_0xC9F59C0A710ECD34(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return Global_2435238;
}

void func_106(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5CE8DE5909565748(1))
	{
		iVar1 = unk_0xA85E614430EFF816(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x57EC5FA4D4D6AFCA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_107(iVar0);
					break;
				
				case 2:
					unk_0x57EC5FA4D4D6AFCA(1, iVar0, &Var4, 3);
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

void func_107(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x57EC5FA4D4D6AFCA(1, iParam0, &Var0, 3))
	{
		if (func_82(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x275F255ED201B937(Var0.f_1);
			if (unk_0xD42BD6EB2E0F1677(uVar3))
			{
				if (unk_0x52BE10F427339B39(uVar3, 0))
				{
					uVar4 = unk_0xB3598EA616C3FFC3(uVar3, 0);
					if (unk_0x0E7910A63E05B12C(uVar4, Var0.f_2) && unk_0xB779D92A280DB7F7())
					{
						if (func_108(uVar4, &bVar5))
						{
							unk_0x745F15A215F2DDF1(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x6C9B2BE03BBD5C98(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_108(var uParam0, var uParam1)
{
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		if (!unk_0x138190F64DB4BBD1(uParam0))
		{
			if (unk_0x3BDB448E5390D817(uParam0))
			{
				unk_0xDC19C288082E586E(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x622B1980CBE13332(uParam0, 0))
		{
			if (unk_0x711DB131BD66A278(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_109()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_110()
{
	Global_2446554.f_1547 = 0;
	Global_2446554.f_1548 = 0;
	Global_2446554.f_1550 = 0;
	Global_2446554.f_1549 = 0;
	unk_0x7D1D4A3602B6AD4E(&(Global_2446554.f_200.f_1), 1);
	unk_0x7D1D4A3602B6AD4E(&(Global_2446554.f_200.f_1), 2);
	unk_0x7D1D4A3602B6AD4E(&(Global_2446554.f_200.f_1), 3);
	unk_0x5E8B6D17FF91CD59();
}

int func_111(struct<20> Param0)
{
	func_117();
	func_115(func_116(Param0.f_0), Param0);
	unk_0x33B19D5996DAFD60(0);
	func_112(0, -1, 0);
	unk_0x0EA32F14A91BEC57(&Global_2441732, 63);
	unk_0x770EF39C9CAA1AEE(&Local_115, 97);
	unk_0x3215376E79F6EA18(0);
	Local_115[unk_0x8A9386F0749A17FA() /*3*/] = 0;
	func_96(0);
	return 1;
}

int func_112(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x48A97E77DF5DB711();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_114();
			}
			else
			{
				return 0;
			}
		}
		if (!func_113())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x03A753E2C8458335())
				{
					if (!bParam2)
					{
						func_114();
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
						func_114();
					}
					else
					{
						return 0;
					}
				}
				if (func_104(155))
				{
					if (!bParam2)
					{
						func_114();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x47499F21458D3AFA())
			{
				if (!bParam2)
				{
					func_114();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x48A97E77DF5DB711();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x03A753E2C8458335())
		{
			if (!bParam2)
			{
				func_114();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x47499F21458D3AFA())
	{
		if (!bParam2)
		{
			func_114();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_113()
{
	return Global_1315874;
}

void func_114()
{
	unk_0x5E8B6D17FF91CD59();
}

void func_115(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x03A753E2C8458335())
	{
		func_114();
	}
	unk_0x5543668CEF76D321(uParam0, 0, Param1.f_16);
}

int func_116(int iParam0)
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

void func_117()
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
	Global_2441732 = { Var0 };
}

