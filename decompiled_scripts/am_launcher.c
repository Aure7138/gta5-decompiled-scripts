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
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (!func_109(ScriptParam_0))
		{
			func_108();
		}
	}
	while (true)
	{
		func_107();
		if (func_98())
		{
			func_108();
		}
		switch (func_97(unk_0x8516D2494EB4AD1B()))
		{
			case 0:
				if (func_96() == 1)
				{
					if (func_95())
					{
						Local_115[unk_0x8516D2494EB4AD1B() /*3*/] = 1;
					}
				}
				break;
			
			case 1:
				if (func_96() == 1)
				{
					func_35();
				}
				else if (func_96() == 3)
				{
					Local_115[unk_0x8516D2494EB4AD1B() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_108();
				break;
		}
		if (unk_0x7EF90A4891193127())
		{
			switch (func_96())
			{
				case 0:
					if (func_32())
					{
						Global_2441711 = 1;
					}
					break;
				
				case 1:
					if (func_31())
					{
						Global_2441711 = 3;
					}
					func_1();
					break;
				
				case 3:
					func_108();
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
	
	switch (Global_2441711.f_2)
	{
		case 0:
			if (!unk_0x94E72F17611BCD3C(Global_2441711.f_1, 1))
			{
				func_30(&(Global_2441711.f_60));
				unk_0xEDB9A377CD8B7F03(&(Global_2441711.f_1), 1);
			}
			else if (func_28(&(Global_2441711.f_60), Global_2441711.f_62, 0))
			{
				func_27(1);
				unk_0xF76EE56D3E7DAF1B(&(Global_2441711.f_1), 1);
			}
			break;
		
		case 1:
			if (unk_0x4B69FB3A5B09A1BA())
			{
				iVar0 = 0;
				while (iVar0 < 8)
				{
					iVar1 = iVar0;
					func_26(iVar1, 0f);
					if (!func_25(iVar1))
					{
						if (func_13(func_24(iVar1), func_23(iVar1), func_22(iVar1), 1, 1))
						{
							if (!func_12(iVar1))
							{
								func_26(iVar1, func_11(iVar1));
							}
						}
					}
					iVar0++;
				}
				func_27(3);
			}
			else
			{
				func_27(0);
			}
			break;
		
		case 3:
			Global_2441711.f_3 = -1;
			iVar2 = func_10();
			if (iVar2 != -1)
			{
				Global_2441711.f_3 = { Global_2441711.f_8[iVar2 /*5*/] };
				func_27(4);
			}
			else
			{
				Global_2441711.f_62 = (Global_262145.f_6416 / 2);
				func_27(0);
			}
			break;
		
		case 4:
			switch (func_9(Global_2441711.f_3))
			{
				case 0:
					break;
				
				case 1:
					switch (Global_2441711.f_3)
					{
						case 1:
							func_7();
							break;
					}
					bVar3 = true;
					if (bVar3)
					{
						if (Global_2441711.f_3 == 1)
						{
							if (unk_0x94E72F17611BCD3C(Global_2441711.f_1, 4))
							{
								func_27(5);
							}
							else
							{
								func_27(6);
							}
						}
						else
						{
							func_27(6);
						}
					}
					else
					{
						func_26(Global_2441711.f_3, 0f);
						func_27(3);
					}
					break;
				
				case 2:
					func_26(Global_2441711.f_3, 0f);
					func_27(3);
					break;
			}
			break;
		
		case 5:
			if (Global_2441711.f_3 == 1)
			{
				if (unk_0x94E72F17611BCD3C(Global_2441711.f_1, 4))
				{
					if (!unk_0x94E72F17611BCD3C(Global_2441711.f_1, 3))
					{
						func_30(&(Global_2441711.f_58));
						unk_0xEDB9A377CD8B7F03(&(Global_2441711.f_1), 3);
					}
					else if (func_28(&(Global_2441711.f_58), (Global_262145.f_44 * 120000), 0))
					{
						unk_0xF76EE56D3E7DAF1B(&(Global_2441711.f_1), 3);
						func_27(6);
					}
				}
				else
				{
					func_27(6);
				}
			}
			else
			{
				func_27(6);
			}
			break;
		
		case 6:
			if (Global_2441711.f_3.f_1 == 19)
			{
				if (unk_0xA4B90494CB03833C("AM_IMP_EXP", -1, 0) != func_6())
				{
					func_4(func_5(unk_0xA4B90494CB03833C("AM_IMP_EXP", -1, 0)), 1);
					Global_2446533.f_1550 = 0;
					func_27(7);
					func_3(Global_2441711.f_3);
				}
			}
			else if (unk_0x6DB88021BE9DDB28(func_2(Global_2441711.f_3.f_1), -1, 0, 0))
			{
				func_27(7);
				func_3(Global_2441711.f_3);
			}
			break;
		
		case 7:
			if (Global_2441711.f_3.f_1 == 19)
			{
				if (Global_2446533.f_1550)
				{
					func_27(8);
					Global_2446533.f_1550 = 0;
				}
			}
			else if (!unk_0x6DB88021BE9DDB28(func_2(Global_2441711.f_3.f_1), -1, 0, 0))
			{
				func_27(8);
			}
			break;
		
		case 8:
			if (unk_0x94E72F17611BCD3C(Global_2441711.f_1, 0))
			{
				func_27(0);
				unk_0xF76EE56D3E7DAF1B(&(Global_2441711.f_1), 0);
			}
			else
			{
				Global_2441711.f_62 = Global_262145.f_6416;
				Global_2441711.f_8[Global_2441711.f_3 /*5*/].f_4 = 1;
				if (unk_0x94E72F17611BCD3C(Global_2441711.f_1, 2))
				{
					unk_0xF76EE56D3E7DAF1B(&(Global_2441711.f_1), 2);
				}
				if (unk_0x94E72F17611BCD3C(Global_2441711.f_1, 4))
				{
					unk_0xF76EE56D3E7DAF1B(&(Global_2441711.f_1), 4);
				}
				Global_2441711.f_3 = -1;
				Global_2441711.f_3.f_1 = 0;
				unk_0xEDB9A377CD8B7F03(&(Global_2441711.f_1), 0);
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
	
	if (Global_262145.f_6415 > 0 && Global_262145.f_6415 <= 8)
	{
		if (!Global_2441711.f_49[(Global_262145.f_6415 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < (Global_262145.f_6415 - 1))
			{
				Global_2441711.f_49[iVar0] = Global_2441711.f_49[iVar0 + 1];
				iVar0++;
			}
		}
		Global_2441711.f_49[(Global_262145.f_6415 - 1)] = uParam0;
	}
}

void func_4(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 364;
	Var0.f_1 = unk_0xCFC72E446B0B3AD7();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x0EA5A5773B9C09AE(1, &Var0, 3, iParam0);
	}
}

int func_5(int iParam0)
{
	var uVar0;
	
	unk_0xEDB9A377CD8B7F03(&uVar0, iParam0);
	return uVar0;
}

int func_6()
{
	return -1;
}

void func_7()
{
	func_8(func_5(unk_0xA4B90494CB03833C("freemode", -1, 0)), 0);
	if (unk_0x073B65E051D2F03E(0, 100) < Global_262145.f_110)
	{
		if (unk_0xFD5830093F5D6BD4() >= Global_262145.f_111)
		{
			func_8(func_5(unk_0xA4B90494CB03833C("freemode", -1, 0)), 1);
			unk_0xEDB9A377CD8B7F03(&(Global_2441711.f_1), 4);
		}
	}
}

void func_8(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 365;
	Var0.f_1 = unk_0xCFC72E446B0B3AD7();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x0EA5A5773B9C09AE(1, &Var0, 3, iParam0);
	}
}

int func_9(struct<4> Param0, var uParam4)
{
	int iVar0;
	
	iLocal_106 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0xCB29E1C3D086FBAE(unk_0x7225A5A7A532BC7C(iVar0)))
		{
			if (unk_0x94E72F17611BCD3C(Local_115[iVar0 /*3*/].f_1, 0))
			{
				iLocal_106++;
				if (Param0.f_1 == 18)
				{
					if (unk_0xFD5830093F5D6BD4() >= Param0.f_3)
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
						if (!unk_0x94E72F17611BCD3C(Global_2441711.f_1, 2))
						{
							unk_0xEDB9A377CD8B7F03(&(Global_2441711.f_1), 2);
						}
					}
					return 1;
				}
			}
			else if (unk_0x94E72F17611BCD3C(Local_115[iVar0 /*3*/].f_1, 1))
			{
			}
			else if (!unk_0x94E72F17611BCD3C(Local_115[iVar0 /*3*/].f_1, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 2;
}

int func_10()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		fVar1 = (fVar1 + Global_2441711.f_8[iVar0 /*5*/].f_2);
		iVar0++;
	}
	fVar3 = unk_0x3250987ED5A577C0(0f, fVar1);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		fVar2 = (fVar2 + Global_2441711.f_8[iVar0 /*5*/].f_2);
		if (fVar3 < fVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_6456;
		
		case 1:
			return Global_262145.f_6453;
		
		case 2:
			return Global_262145.f_6454;
		
		case 3:
			return Global_262145.f_6455;
		
		case 4:
			return Global_262145.f_6457;
		
		case 5:
			return Global_262145.f_6458;
		
		case 6:
			return Global_262145.f_6459;
		
		case 7:
			return Global_262145.f_6839;
		
		default:
	}
	return 0f;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_5006;
		
		case 1:
			return Global_262145.f_5003;
		
		case 2:
			return Global_262145.f_5004;
		
		case 3:
			return Global_262145.f_5005;
		
		case 4:
			return Global_262145.f_6507;
		
		case 5:
			return Global_262145.f_6401;
		
		case 6:
			return Global_262145.f_6406;
		
		case 7:
			return Global_262145.f_6411;
		
		default:
	}
	return 0;
}

int func_13(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_21(iParam0, bParam3, bParam4) || func_20(iParam1, bParam3, bParam4)) || func_14(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	return func_15(2, iParam0, 0, bParam1, bParam2);
}

int func_15(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x94E72F17611BCD3C(Global_1336615, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_19(iParam0) - func_18(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_18(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_19(iParam0) - func_17(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_18(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_19(iParam0) - func_18(iParam0, 1));
		}
		if (!bParam4 && Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] != 3)
		{
			iVar1 = (iVar1 - func_16(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_16(int iParam0)
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

int func_17(int iParam0)
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xCFC72E446B0B3AD7();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_206;
			}
			else
			{
				return unk_0x30F2E008CA509014(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_207;
			}
			else
			{
				return unk_0x56DAB67AA00A12D9(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xD28DD58204E8F9D1())
			{
				return Global_2414035[iVar0 /*254*/].f_208;
			}
			else
			{
				return unk_0x501C0D3244542A75(!bParam1);
			}
			break;
	}
	return 0;
}

int func_19(int iParam0)
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

int func_20(int iParam0, bool bParam1, bool bParam2)
{
	return func_15(1, iParam0, 0, bParam1, bParam2);
}

int func_21(int iParam0, bool bParam1, bool bParam2)
{
	return func_15(0, iParam0, 0, bParam1, bParam2);
}

int func_22(int iParam0)
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

int func_23(int iParam0)
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

int func_24(int iParam0)
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

int func_25(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_6415 > 0 && Global_262145.f_6415 <= 8)
	{
		if (!Global_2441711.f_49[(Global_262145.f_6415 - 1)] == -1)
		{
			iVar0 = 0;
			while (iVar0 < Global_262145.f_6415)
			{
				if (Global_2441711.f_49[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

void func_26(int iParam0, float fParam1)
{
	if (iParam0 != -1)
	{
		Global_2441711.f_8[iParam0 /*5*/].f_2 = fParam1;
	}
}

void func_27(int iParam0)
{
	Global_2441711.f_2 = iParam0;
}

int func_28(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_29(uParam0, bParam2, 0);
	if (unk_0x4B69FB3A5B09A1BA() && !bParam2)
	{
		if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB65C49ABD0DAB270(unk_0xE1C532DCCBD8FED6(unk_0x17103F66FBB44C3C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_29(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4B69FB3A5B09A1BA() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6A8628B6E9F055B3();
			}
			else
			{
				*uParam0 = unk_0x4FEA29C1086C638D();
			}
		}
		else
		{
			*uParam0 = unk_0x17103F66FBB44C3C();
		}
		uParam0->f_1 = 1;
	}
}

void func_30(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_31()
{
	return 0;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	Global_2441711.f_62 = Global_262145.f_6416;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2441711.f_8[iVar0 /*5*/] = iVar0;
		Global_2441711.f_8[iVar0 /*5*/].f_1 = func_34(iVar0);
		Global_2441711.f_8[iVar0 /*5*/].f_2 = 1f;
		Global_2441711.f_8[iVar0 /*5*/].f_3 = func_33(iVar0);
		iVar0++;
	}
	if (Global_262145.f_6415 > 0 && Global_262145.f_6415 <= 8)
	{
		iVar1 = 0;
		while (iVar1 < Global_262145.f_6415)
		{
			Global_2441711.f_49[iVar1] = -1;
			iVar1++;
		}
	}
	return 1;
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return Global_262145.f_4829;
		
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

int func_34(int iParam0)
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

void func_35()
{
	int iVar0;
	var uVar1;
	
	switch (Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_2)
	{
		case 0:
			if (Global_2441711.f_2 >= 4 && Global_2441711.f_2 != 8)
			{
				if (unk_0x94E72F17611BCD3C(Global_2441711.f_1, 2))
				{
					unk_0xEDB9A377CD8B7F03(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 0);
					unk_0xF76EE56D3E7DAF1B(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 1);
				}
				if (!unk_0x94E72F17611BCD3C(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1, 1))
				{
					func_94(4);
				}
				else if (!unk_0x94E72F17611BCD3C(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1, 3))
				{
					func_30(&uLocal_107);
					unk_0xEDB9A377CD8B7F03(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 3);
				}
				else if (func_28(&uLocal_107, 10000, 0))
				{
					func_94(4);
					unk_0xF76EE56D3E7DAF1B(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 3);
				}
			}
			else if (unk_0x94E72F17611BCD3C(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1, 1))
			{
				unk_0xF76EE56D3E7DAF1B(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 1);
			}
			break;
		
		case 4:
			if (unk_0x94E72F17611BCD3C(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1, 0))
			{
				if (Global_2441711.f_2 == 8)
				{
					func_94(8);
					unk_0xF76EE56D3E7DAF1B(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 0);
				}
				else if (Global_2441711.f_2 == 5)
				{
					func_94(5);
					unk_0xF76EE56D3E7DAF1B(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 0);
				}
				else if (Global_2441711.f_2 >= 6)
				{
					func_94(6);
					unk_0xF76EE56D3E7DAF1B(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 0);
				}
				else if (Global_2441711.f_2 == 3)
				{
					func_94(0);
					unk_0xF76EE56D3E7DAF1B(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 0);
				}
			}
			else
			{
				iVar0 = 0;
				if (((((((((((((!unk_0x4F0283431254A343() && !func_93(unk_0xCFC72E446B0B3AD7())) && !func_92()) && !func_91()) && !func_90()) && !func_89()) && !func_87(unk_0xCFC72E446B0B3AD7())) && !unk_0x11D7DF356299D4F0()) && !func_85(unk_0xCFC72E446B0B3AD7())) && func_83()) && !func_82(unk_0xCFC72E446B0B3AD7(), 0)) && !func_82(unk_0xCFC72E446B0B3AD7(), 7)) && !func_81(unk_0xCFC72E446B0B3AD7(), 0)) && func_80(unk_0xCFC72E446B0B3AD7(), 1, 1))
				{
					switch (Global_2441711.f_3)
					{
						case 0:
							if (((func_75(0) && func_73(func_74(unk_0xCFC72E446B0B3AD7()), 40f, 40f, 40f)) && unk_0x9EF11DECA38804B6(unk_0x9F92518438215DD0()) < 10f) && !func_72())
							{
								iVar0 = 1;
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 1:
							if (func_62(31, 0))
							{
								iVar0 = 1;
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 2:
							if (func_62(20, 0) && !func_61())
							{
								iVar0 = func_53();
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 3:
							if (func_62(19, 0))
							{
								iVar0 = 1;
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 4:
							if (((((func_62(20, 0) && !func_82(unk_0xCFC72E446B0B3AD7(), 1)) && !func_82(unk_0xCFC72E446B0B3AD7(), 2)) && !func_82(unk_0xCFC72E446B0B3AD7(), 3)) && !Global_2422166.f_3037) && !func_51())
							{
								iVar0 = 1;
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 5:
							if (func_62(124, 0))
							{
								iVar0 = 1;
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 6:
							if (func_62(126, 0))
							{
								iVar0 = 1;
							}
							else
							{
								iVar0 = 2;
							}
							break;
						
						case 7:
							if (func_62(127, 0))
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
					unk_0xEDB9A377CD8B7F03(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 0);
				}
				else if (iVar0 == 2)
				{
					func_94(0);
					unk_0xEDB9A377CD8B7F03(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 1);
				}
			}
			break;
		
		case 5:
			if (Global_2441711.f_2 == 6)
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_200.f_1), 1);
				unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_200.f_1), 2);
				unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_200.f_1), 3);
				func_94(6);
			}
			else if (unk_0x94E72F17611BCD3C(Global_2441711.f_1, 3) && func_50(&(Global_2441711.f_58)))
			{
				func_40();
			}
			break;
		
		case 6:
			uVar1 = func_2(Global_2441711.f_3.f_1);
			if (Global_2441711.f_3.f_1 == 19)
			{
				if (Global_2446533.f_1547)
				{
					if (Global_2441711.f_2 == 7)
					{
						func_94(7);
					}
				}
				else if (Global_2446533.f_1548)
				{
					Global_2446533.f_1548 = 0;
					func_94(0);
					unk_0xEDB9A377CD8B7F03(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 1);
				}
			}
			else if (!unk_0x94E72F17611BCD3C(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1, 2))
			{
				Local_86.f_16 = -1;
				if (unk_0x7B47A371E2D93C2C(unk_0x398F092142D37E17(uVar1)) == 0)
				{
					if (!unk_0x6DB88021BE9DDB28(uVar1, -1, 0, 0) || unk_0xAD66A3E5E78C507C(uVar1, -1, 0) < 32)
					{
						if (!unk_0x6DB88021BE9DDB28(uVar1, -1, 1, 0))
						{
							Local_86.f_0 = Global_2441711.f_3.f_1;
							if (func_36(Local_86, 0))
							{
								unk_0xEDB9A377CD8B7F03(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 2);
							}
						}
					}
				}
			}
			else if (unk_0x7B47A371E2D93C2C(unk_0x398F092142D37E17(uVar1)) != 0)
			{
				if (Global_2441711.f_2 == 7)
				{
					func_94(7);
					unk_0xF76EE56D3E7DAF1B(&(Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_1), 2);
				}
			}
			break;
		
		case 7:
			if (Global_2441711.f_2 != 7)
			{
				func_94(8);
			}
			break;
		
		case 8:
			func_94(0);
			break;
	}
}

int func_36(struct<17> Param0, var uParam17, var uParam18, var uParam19, bool bParam20)
{
	char cVar0[32];
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_39())
	{
		return 0;
	}
	bParam20 = bParam20;
	StringCopy(&cVar0, func_2(Param0.f_0), 32);
	if (unk_0x04E62AD7BB0C735A(&cVar0))
	{
		unk_0x9AD29F8AF48B9AD1(&cVar0);
		if (unk_0x197501C41CB2403F(&cVar0))
		{
			iVar8 = 1;
			if (bParam20)
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 16)
				{
					if (unk_0x6DB88021BE9DDB28(&cVar0, iVar9, iVar8, 0))
					{
						return 0;
					}
					iVar9++;
				}
			}
			else if (unk_0x6DB88021BE9DDB28(&cVar0, Param0.f_16, iVar8, 0))
			{
				return 0;
			}
			iVar10 = unk_0xB8BA7F44DF1575E1(&cVar0, &Param0, 20, func_37(Param0.f_0));
			unk_0x45C517E671FFDD0E(&cVar0);
			if (iVar10 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_37(int iParam0)
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
	if (func_38(iParam0) == 3)
	{
		return 8344;
	}
	else if (func_38(iParam0) == 7)
	{
		return 3650;
	}
	else if (func_38(iParam0) == 0)
	{
		return 3650;
	}
	else if (func_38(iParam0) == 2)
	{
		return 3650;
	}
	else if (func_38(iParam0) == 6)
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

int func_38(int iParam0)
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

bool func_39()
{
	return Global_2428162.f_567;
}

void func_40()
{
	if (Global_2411489.f_84.f_2 == 1)
	{
		if (!unk_0x94E72F17611BCD3C(Global_2446533.f_200.f_1, 1))
		{
			if (((Global_262145.f_44 * 120000) - func_49(&(Global_2441711.f_58), 0, 0)) < 360000)
			{
				if (!unk_0x94E72F17611BCD3C(Global_2446533.f_200.f_1, 1))
				{
					if (func_62(31, 0) && !func_90())
					{
						if (Global_262145.f_44 < 3)
						{
							func_41("ACD_TSCH", Global_262145.f_44, 1);
						}
						else
						{
							func_41("ACD_TSCH", 3, 1);
						}
					}
					unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_200.f_1), 1);
				}
			}
			else if (((Global_262145.f_44 * 120000) - func_49(&(Global_2441711.f_58), 0, 0)) < 600000)
			{
				if (!unk_0x94E72F17611BCD3C(Global_2446533.f_200.f_1, 2))
				{
					if (func_62(31, 0) && !func_90())
					{
						func_41("ACD_TSCH", 5, 1);
					}
					unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_200.f_1), 2);
				}
			}
			else if (((Global_262145.f_44 * 120000) - func_49(&(Global_2441711.f_58), 0, 0)) < 1200000)
			{
				if (!unk_0x94E72F17611BCD3C(Global_2446533.f_200.f_1, 3))
				{
					if (func_62(31, 0) && !func_90())
					{
						func_41("ACD_TSCH", 10, 1);
					}
					unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_200.f_1), 3);
				}
			}
		}
	}
}

int func_41(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x3BE5C2319988C0DB(sParam0);
	unk_0x25585F3578FE81FC(iParam1);
	iVar0 = unk_0x21B9348B2F3B9A98(0, 1);
	func_42(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_42(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_48() || !unk_0x11D7DF356299D4F0()) || !func_45(unk_0xCFC72E446B0B3AD7(), 0))
	{
		return;
	}
	iVar0 = func_43(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1694032.f_5[iVar0 /*53*/] = iParam0;
		Global_1694032.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1694032.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1694032.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1694032.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1694032.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1694032.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1694032.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1694032 - 1))
	{
		if (iParam0 > Global_1694032.f_5[iVar0 /*53*/].f_1)
		{
			func_44(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1694032++;
	if (Global_1694032 > 5)
	{
		Global_1694032 = 5;
		return Global_1694032;
	}
	return (Global_1694032 - 1);
}

void func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1694032.f_5[iVar0 /*53*/] = { Global_1694032.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		bVar0 = func_46(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582869[iParam0 /*332*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB29E1C3D086FBAE(iParam0))
		{
			bVar0 = unk_0x59A4BF97B76AD953(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_46(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

int func_47()
{
	return Global_1312737;
}

bool func_48()
{
	return unk_0x9501317225249120(-1762644250);
}

int func_49(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x4B69FB3A5B09A1BA() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xE1C532DCCBD8FED6(unk_0x6A8628B6E9F055B3(), *uParam0);
		}
		else
		{
			return unk_0xE1C532DCCBD8FED6(unk_0x4FEA29C1086C638D(), *uParam0);
		}
	}
	return unk_0xE1C532DCCBD8FED6(unk_0x17103F66FBB44C3C(), *uParam0);
}

var func_50(var uParam0)
{
	return uParam0->f_1;
}

int func_51()
{
	if (!func_52())
	{
		return 0;
	}
	if (Global_2404117.f_2 == Global_262145.f_6852 || Global_2404117.f_2 == Global_262145.f_6876)
	{
		return 1;
	}
	return 0;
}

int func_52()
{
	switch (Global_2404117)
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

int func_53()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<3> Var5;
	
	iVar1 = 0;
	Var5 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
	if (!bVar0)
	{
		if (unk_0x1B75703EDFED9125(Var5, iLocal_109, &Local_110, &uLocal_113, &uVar2, 0, 1077936128, 0))
		{
			if (unk_0x91EAD4F2F9B5B38A(-1367.557f, -3220.598f, 12.9448f, Var5, 1) >= 600f)
			{
				if (unk_0x91EAD4F2F9B5B38A(Var5, Local_110, 1) >= 75f)
				{
					unk_0xA1D66B742793EE32((Var5.f_0 - 250f), (Var5.f_1 - 250f), (Var5.f_0 + 250f), (Var5.f_1 + 250f));
					if (unk_0xF7779FC5D28E4A59(Local_110, &uVar3, &uVar4))
					{
						if (uVar4 & 1 == 0)
						{
							if (iLocal_114 <= 0)
							{
								if (func_54(Local_110, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
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

int func_54(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404554 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x65473DAE13685EEB(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x04F609D23DD56222(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x04F609D23DD56222(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDFE956DB96641937(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404554++;
	if (bParam13)
	{
		if (unk_0xFC096FF22FF07A48(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404554++;
	if (fParam14 > 0f)
	{
		if (func_57(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404554++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_55(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404554++;
	return 1;
}

int func_55(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_80(unk_0xCFC72E446B0B3AD7(), 1, 1))
		{
			if (!unk_0x2E9CF5C574019636())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x91EAD4F2F9B5B38A(func_74(unk_0xCFC72E446B0B3AD7()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE298336AB6E66F7E(Param0, fParam3))
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
		if (func_80(iVar1, 1, 1))
		{
			if (!func_45(iVar1, 0) && unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xCFC72E446B0B3AD7()))
				{
					if ((func_56(iVar1) || !bParam10) && !Global_2414035[iVar1 /*254*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x59A4BF97B76AD953(iVar1) == -1)
							{
								if (unk_0x59A4BF97B76AD953(iVar1) == unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x59A4BF97B76AD953(iVar1) != unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()))) || unk_0x59A4BF97B76AD953(iVar1) == -1)
							{
								if (unk_0x91EAD4F2F9B5B38A(func_74(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x2C7D3FB84365CF4E(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x59A4BF97B76AD953(iVar1) != iParam8 || unk_0x59A4BF97B76AD953(iVar1) == -1)
						{
							if (unk_0x91EAD4F2F9B5B38A(func_74(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x2C7D3FB84365CF4E(iVar1, Param0, fParam3))
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

int func_56(int iParam0)
{
	if (unk_0x706AF1DFAF966E35(unk_0x4E6043D225B9C75F(iParam0)) || Global_2414035[iParam0 /*254*/].f_239)
	{
		return 1;
	}
	return 0;
}

int func_57(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xCFC72E446B0B3AD7() != iVar1) || iParam8 == 0)
		{
			if (func_80(iVar1, bParam4, bParam5))
			{
				if (unk_0x7F0B9D2743F95A8F(unk_0xCFC72E446B0B3AD7(), iVar1))
				{
					if (!bParam7 || (!unk_0x3E0478C40AB5B38D(unk_0x4E6043D225B9C75F(iVar1)) && func_56(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) != unk_0x59A4BF97B76AD953(iVar1))) || unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1)
						{
							if (((unk_0x59A4BF97B76AD953(unk_0xCFC72E446B0B3AD7()) == -1 && uParam9) && bParam6) && func_58(iVar1))
							{
							}
							else if (unk_0x746960881FB19A89(unk_0x4E6043D225B9C75F(iVar1)))
							{
								if (unk_0x91EAD4F2F9B5B38A(func_74(iVar1), Param0, 1) < fParam3)
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

int func_58(int iParam0)
{
	if (func_60(unk_0xCFC72E446B0B3AD7(), iParam0))
	{
		return 1;
	}
	Global_2445561 = { func_59(iParam0) };
	if (unk_0x9E1C8024B80AA59C(&Global_2445561))
	{
		return 1;
	}
	return 0;
}

struct<13> func_59(var uParam0)
{
	struct<13> Var0;
	
	unk_0x4DB2D434F7F3C6B1(uParam0, &Var0, 13);
	return Var0;
}

int func_60(int iParam0, var uParam1)
{
	if (unk_0xEBD30B93B1EED82E())
	{
		Global_2445561 = { func_59(iParam0) };
		Global_2445574 = { func_59(uParam1) };
		if (unk_0x1F0B5C273160FECE(&Global_2445561))
		{
			if (unk_0x1F0B5C273160FECE(&Global_2445574))
			{
				unk_0xFFB76AAE8F413B73(&Global_2445491, 35, &Global_2445561);
				unk_0xFFB76AAE8F413B73(&Global_2445526, 35, &Global_2445574);
				if (Global_2445491 == Global_2445526)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_61()
{
	if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6024 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_67(unk_0xCFC72E446B0B3AD7(), 85))
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
		if (Global_262145.f_4828 == 1)
		{
			return 1;
		}
	}
	if (func_66() || func_65())
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
			if (func_63())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return unk_0x94E72F17611BCD3C(Global_1573723[iVar1], iVar0);
}

int func_63()
{
	var uVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (unk_0x94E72F17611BCD3C(Global_2446533.f_1620, 23))
	{
		return 1;
	}
	if (func_66())
	{
		return 1;
	}
	if (func_65())
	{
		return 1;
	}
	uVar0 = Global_1335599[func_64(-1)];
	if (unk_0x94E72F17611BCD3C(uVar0, 7))
	{
		unk_0xEDB9A377CD8B7F03(&(Global_2446533.f_1620), 23);
		return 1;
	}
	return 0;
}

int func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
		if (iVar1 > -1)
		{
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

bool func_65()
{
	return Global_1315888;
}

bool func_66()
{
	return Global_1315890;
}

bool func_67(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_70())
	{
		return 0;
	}
	if (func_69())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_68(iParam1);
	iVar1 = uVar0;
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_308, iVar1);
}

int func_68(int iParam0)
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

bool func_69()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_128, 3);
}

int func_70()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_66())
	{
		return 1;
	}
	if (func_65())
	{
		return 1;
	}
	return func_71(120, -1);
}

int func_71(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2474108[iParam0 /*6*/][func_64(iParam1)];
	if (unk_0xF02F9C69623F2904(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_72()
{
	if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 1216.995f, -3001.906f, 4.865235f, 835.3747f, -3013.846f, 54.7638f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 1284.885f, -3184.986f, 4.906164f, 833.8964f, -3182.306f, 54.90125f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 1284.793f, -3270.265f, 4.902858f, 838.3597f, -3268.248f, 55.07449f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 864.6642f, -2900.037f, 4.900886f, 864.0037f, -3345.969f, 54.90067f, 250f, 0, 1, 0))
	{
		return 1;
	}
	else if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), 447.0059f, -2983.689f, 5.00868f, 750.05f, -2981.953f, 54.88502f, 250f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_73(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	
	if (unk_0xED56472331EEB661(Param0, &Var0, 0, 1077936128, 0))
	{
		if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Var0, Param3, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_74(int iParam0)
{
	return unk_0x77009B1C011405A9(unk_0x4E6043D225B9C75F(iParam0), 0);
}

int func_75(bool bParam0)
{
	if (bParam0 == bParam0)
	{
		bParam0 = bParam0;
	}
	if (func_79(unk_0xCFC72E446B0B3AD7(), 1))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_92())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0x11D7DF356299D4F0())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (unk_0x4F0283431254A343())
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!func_62(19, 0))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (func_76(9))
	{
		if (bParam0)
		{
		}
		return 0;
	}
	return 1;
}

bool func_76(int iParam0)
{
	return !func_77(iParam0);
}

int func_77(int iParam0)
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
			if (Global_262145.f_5003)
			{
				return 0;
			}
			if (func_82(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5004)
			{
				return 0;
			}
			if (func_82(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5005)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5006)
			{
				return 0;
			}
			if (func_82(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_78(4))
			{
				return 0;
			}
			if (func_82(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_78(4))
			{
				return 0;
			}
			if (func_82(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_78(4))
			{
				return 0;
			}
			if (func_82(unk_0xCFC72E446B0B3AD7(), 7))
			{
				return 0;
			}
			if (unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 0) || unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_243.f_4, 1))
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

int func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_80(unk_0x7225A5A7A532BC7C(iVar0), 0, 1))
		{
			if (unk_0x94E72F17611BCD3C(Global_2414035[iVar0 /*254*/].f_205, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_79(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_85(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582869[iParam0 /*332*/] == -1)
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xCB29E1C3D086FBAE(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_81(int iParam0, bool bParam1)
{
	if (Global_1582869[iParam0 /*332*/].f_243.f_6 > 0)
	{
		if (bParam1)
		{
			if (unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_243.f_4, 0))
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

bool func_82(int iParam0, int iParam1)
{
	return unk_0x94E72F17611BCD3C(Global_2414035[iParam0 /*254*/].f_205, iParam1);
}

int func_83()
{
	if (func_84() == 0)
	{
		return 1;
	}
	return 0;
}

int func_84()
{
	return Global_1312467.f_18;
}

bool func_85(int iParam0)
{
	return func_86(iParam0);
}

bool func_86(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_13.f_1, 0);
}

int func_87(int iParam0)
{
	switch (func_88(iParam0))
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

int func_88(int iParam0)
{
	return Global_1582869[iParam0 /*332*/].f_173;
}

bool func_89()
{
	return Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_173 != 0;
}

bool func_90()
{
	return Global_1315900;
}

bool func_91()
{
	return Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/] == 5;
}

bool func_92()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_39.f_18, 0);
}

int func_93(int iParam0)
{
	if (func_79(iParam0, 1))
	{
		if (Global_1582869[iParam0 /*332*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

void func_94(int iParam0)
{
	Local_115[unk_0x8516D2494EB4AD1B() /*3*/].f_2 = iParam0;
}

int func_95()
{
	return 1;
}

int func_96()
{
	return Global_2441711;
}

int func_97(int iParam0)
{
	return Local_115[iParam0 /*3*/];
}

int func_98()
{
	bool bVar0;
	
	func_104(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315874 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			return 1;
		}
	}
	if (func_39())
	{
		return 1;
	}
	if (Global_2437036)
	{
		return 1;
	}
	if (func_103())
	{
		return 1;
	}
	if (func_102(157))
	{
		if (!func_101())
		{
			return 1;
		}
	}
	if (func_102(155))
	{
		return 1;
	}
	if (!unk_0x6518D9FF7C996D2B())
	{
		return 1;
	}
	if (func_99() != 0)
	{
		if (unk_0x7B47A371E2D93C2C(func_99()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_99()
{
	switch (func_100())
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

int func_100()
{
	return Global_24444;
}

bool func_101()
{
	return Global_2428162.f_572;
}

int func_102(int iParam0)
{
	if (unk_0xAFB34077E5ACCBA7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_103()
{
	return Global_2435128;
}

void func_104(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2FAEA355B623BA14(1))
	{
		iVar1 = unk_0x18F85CAA17F9F9A1(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2E567DCD11FE0296(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 306:
					func_105(iVar0);
					break;
				
				case 2:
					unk_0x2E567DCD11FE0296(1, iVar0, &Var4, 3);
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

void func_105(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 3))
	{
		if (func_80(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x4E6043D225B9C75F(Var0.f_1);
			if (unk_0x746960881FB19A89(uVar3))
			{
				if (unk_0x827151D7B70CB853(uVar3, 0))
				{
					uVar4 = unk_0x1161215F69587BDA(uVar3, 0);
					if (unk_0x4A4FC7B76BEF1AC9(uVar4, Var0.f_2) && unk_0xD28DD58204E8F9D1())
					{
						if (func_106(uVar4, &bVar5))
						{
							unk_0xB3216D41373DA6C7(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9187463EB4918A4D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_106(var uParam0, var uParam1)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (!unk_0x34E74FF8690AA4B1(uParam0))
		{
			if (unk_0x1F298C7D5F6EEDBF(uParam0))
			{
				unk_0x336AE92FD68DEF98(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xAD2C236C4A4B83C9(uParam0, 0))
		{
			if (unk_0x88A3865085DFB7AD(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_107()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_108()
{
	Global_2446533.f_1547 = 0;
	Global_2446533.f_1548 = 0;
	Global_2446533.f_1550 = 0;
	Global_2446533.f_1549 = 0;
	unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_200.f_1), 1);
	unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_200.f_1), 2);
	unk_0xF76EE56D3E7DAF1B(&(Global_2446533.f_200.f_1), 3);
	unk_0xE60DEFFB2A853900();
}

int func_109(struct<20> Param0)
{
	func_115();
	func_113(func_114(Param0.f_0), Param0);
	unk_0xE35F47F90962E4D9(0);
	func_110(0, -1, 0);
	unk_0xA32DB9C55050112C(&Global_2441711, 63);
	unk_0x85862F9356411B89(&Local_115, 97);
	unk_0xE5556978B2858C53(0);
	Local_115[unk_0x8516D2494EB4AD1B() /*3*/] = 0;
	func_94(0);
	return 1;
}

int func_110(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x56448188B27B0D1C();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_112();
			}
			else
			{
				return 0;
			}
		}
		if (!func_111())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x4B69FB3A5B09A1BA())
				{
					if (!bParam2)
					{
						func_112();
					}
					else
					{
						return 0;
					}
				}
				if (func_39())
				{
					if (!bParam2)
					{
						func_112();
					}
					else
					{
						return 0;
					}
				}
				if (func_102(155))
				{
					if (!bParam2)
					{
						func_112();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xB659F73755907B0D())
			{
				if (!bParam2)
				{
					func_112();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x56448188B27B0D1C();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			if (!bParam2)
			{
				func_112();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xB659F73755907B0D())
	{
		if (!bParam2)
		{
			func_112();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_111()
{
	return Global_1315874;
}

void func_112()
{
	unk_0xE60DEFFB2A853900();
}

void func_113(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		func_112();
	}
	unk_0x097416E6C5CBD31B(uParam0, 0, Param1.f_16);
}

int func_114(int iParam0)
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

void func_115()
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
	Global_2441711 = { Var0 };
}

