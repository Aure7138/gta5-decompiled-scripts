#region Local Var
	char* sLocal_0 = NULL;
	var uLocal_1 = 0;
	bool bLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "BG_NG_1.32.33";
	iLocal_13 = -1;
	iLocal_20 = 52;
	unk_0x2A1F1A3180086B2E(0);
	unk_0x69BC3CC82D2BC993();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1318844 = unk_0x39BD4614CF899227(sLocal_0);
	iVar0 = unk_0x3EAC9995EC220C5A() + 10000;
	while (unk_0x3EAC9995EC220C5A() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_122())
		{
			func_121();
			if (bLocal_2)
			{
				unk_0x812DA59718C7CF24(0f, 0.23f);
				unk_0x3F570C434DAE03B3(255, 255, 255, 255);
				func_120(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (unk_0x4C779B19E6DDCDA2())
		{
			func_113();
			func_102();
			func_95();
			func_89();
			func_87();
			func_86();
			func_83();
			func_78();
			func_75();
			func_74();
			func_60();
			func_56();
			func_54();
			func_52();
			func_48();
			func_43();
			func_17();
			func_16();
			func_12();
		}
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x2F798BA2098FDADE();
}

void func_1()
{
	int iVar0;
	
	if (!iLocal_18)
	{
		if (Global_2442910 == 1546835529)
		{
			iLocal_18 = 1;
			iLocal_19 = 0;
		}
	}
	else if (Global_2442910 != 1546835529)
	{
		iVar0 = 52;
		while (iVar0 <= 61)
		{
			func_8(iVar0, &(Global_1321270[iVar0 /*138*/]), -1);
			iVar0++;
		}
		iLocal_19 = 1;
		iLocal_18 = 0;
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		if ((((!unk_0x2C063B4379F0C076() && iLocal_19) && !unk_0x4FE03C08BC095A57()) && func_7(unk_0x8ACD527A7E574590(), 1, 1)) && !func_6())
		{
			func_2(iLocal_20, &(Global_1321270[iLocal_20 /*138*/]), -1);
			iLocal_20++;
			if (iLocal_20 > 61)
			{
				iLocal_20 = 52;
			}
		}
	}
}

int func_2(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 25;
	while (iVar0 <= 48)
	{
		iVar1 = (func_5(iParam0) + (iVar0 - 25));
		func_3(iVar1, uParam1->f_9[iVar0], iParam2, 1);
		iVar0++;
	}
	return 1;
}

var func_3(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_4();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x84FC7C5D67B96367((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xB76DE807405BD074((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x84FC7C5D67B96367((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xB76DE807405BD074((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x84FC7C5D67B96367((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xB76DE807405BD074((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x84FC7C5D67B96367((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xB76DE807405BD074((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xACE65188CEAD12B6((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xB76DE807405BD074((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xACE65188CEAD12B6((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xB76DE807405BD074((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xFD3161B351B94824((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xB76DE807405BD074((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xFD3161B351B94824((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xB76DE807405BD074((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xFD3161B351B94824((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xB76DE807405BD074((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xFD3161B351B94824((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xB76DE807405BD074((iParam0 - 6413)) * 8) * 8;
	}
	uVar2 = unk_0x5D74F4E9C0C6901F(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_4()
{
	return Global_1312746;
}

int func_5(int iParam0)
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	return 0;
}

bool func_6()
{
	return Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_177 != 0;
}

int func_7(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x860CE5C791DC28F5(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x6DF20EAB8093DF19(iParam0))
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

int func_8(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 25;
	while (iVar0 <= 48)
	{
		iVar1 = (func_5(iParam0) + (iVar0 - 25));
		uParam1->f_9[iVar0] = func_9(iVar1, iParam2, -1);
		iVar0++;
	}
	return 1;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_4();
	}
	iVar0 = 0;
	iVar1 = func_11(iParam0, iParam1);
	uVar2 = func_10(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x0B7194EFFCE882EF(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xB76DE807405BD074((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xB76DE807405BD074((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xB76DE807405BD074((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xB76DE807405BD074((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xB76DE807405BD074((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xB76DE807405BD074((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xB76DE807405BD074((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xB76DE807405BD074((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xB76DE807405BD074((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xB76DE807405BD074((iParam0 - 6413)) * 8) * 8;
	}
	return iVar0;
}

int func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_4();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x84FC7C5D67B96367((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x84FC7C5D67B96367((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x84FC7C5D67B96367((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x84FC7C5D67B96367((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xACE65188CEAD12B6((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xACE65188CEAD12B6((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xFD3161B351B94824((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xFD3161B351B94824((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xFD3161B351B94824((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xFD3161B351B94824((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	return iVar0;
}

void func_12()
{
	int iVar0;
	int iVar1;
	
	if (Global_25115 == 0)
	{
		if (!iLocal_35)
		{
			iVar0 = func_15();
			if (iVar0 > 0)
			{
				iVar1 = func_13(iVar0);
				if (iVar1 != 0)
				{
					unk_0x1DAC8C83C88DABFD(iVar1);
					unk_0x67017B336DB127DA(-101, 0, 0);
					iLocal_35 = 1;
				}
			}
			else
			{
				iLocal_35 = 1;
			}
		}
	}
	else if (iLocal_35)
	{
		iLocal_35 = 0;
	}
}

var func_13(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 1:
			uVar0 = func_14("fm_race_creator");
			break;
		
		case 2:
			uVar0 = func_14("fm_deathmatch_creator");
			break;
		
		case 3:
			uVar0 = func_14("fm_lts_creator");
			break;
		
		case 4:
			uVar0 = func_14("fm_capture_creator");
			break;
	}
	return uVar0;
}

var func_14(char* sParam0)
{
	var uVar0;
	bool bVar1;
	
	unk_0x083520441B9D78C5();
	while (!bVar1)
	{
		uVar0 = unk_0x2BE3A814512B64CF();
		if (unk_0x35D1CAD6ADAB6491(unk_0xC5C646B875F99347(uVar0), sParam0))
		{
			bVar1 = true;
		}
	}
	return uVar0;
}

int func_15()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB1A77D5C890711F9(joaat("fm_race_creator")) != 0)
	{
		iVar0 = 1;
	}
	else if (unk_0xB1A77D5C890711F9(joaat("fm_deathmatch_creator")) != 0)
	{
		iVar0 = 2;
	}
	else if (unk_0xB1A77D5C890711F9(joaat("fm_lts_creator")) != 0)
	{
		iVar0 = 3;
	}
	else if (unk_0xB1A77D5C890711F9(joaat("fm_capture_creator")) != 0)
	{
		iVar0 = 4;
	}
	return iVar0;
}

void func_16()
{
	int iVar0;
	
	if (unk_0x2C063B4379F0C076())
	{
		iVar0 = 0;
		while (iVar0 < Global_1586488)
		{
			unk_0x573691DB812DC8AA(&(Global_1586488[iVar0 /*408*/].f_329), 1);
			iVar0++;
		}
	}
}

void func_17()
{
	int iVar0;
	
	if (unk_0x4FE03C08BC095A57() && func_42())
	{
		iVar0 = func_36();
		if ((iVar0 > -1 && unk_0x860CE5C791DC28F5(iVar0)) && !func_33(unk_0x8ACD527A7E574590(), 1))
		{
			if (func_29(iVar0))
			{
				if (func_28() && func_27() == 64)
				{
					func_18(0, 0);
				}
			}
		}
	}
}

void func_18(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_23(bParam0);
	}
	func_22(0);
	func_19(65);
}

void func_19(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	iVar0 = func_27();
	if (Global_1315910)
	{
		sVar1 = func_21(iParam0);
		iVar2 = unk_0x39BD4614CF899227(sVar1);
		func_20(&Global_2442911, 1, 0);
		unk_0xC3BFED92026A2AAD(iVar2, 1, iVar0, iParam0, 0);
	}
	Global_1315843 = iParam0;
}

void func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x4C779B19E6DDCDA2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xE23D71F521207E8D();
		}
		else
		{
			*uParam0 = unk_0x0A7450968AC14F54();
		}
	}
	else
	{
		*uParam0 = unk_0x3EAC9995EC220C5A();
	}
	uParam0->f_1 = 1;
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 28:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 29:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 30:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 31:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 33:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 34:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 35:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 37:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 38:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 39:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 45:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 46:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 47:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 48:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 50:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 51:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 44:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 53:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 52:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 54:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 55:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 57:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 61:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 62:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 63:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 64:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 65:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 66:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		default:
	}
	return "";
}

void func_22(int iParam0)
{
	Global_1315842 = iParam0;
}

void func_23(bool bParam0)
{
	int iVar0;
	
	func_25(&Global_17038);
	unk_0x426F853FD2A2913E(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			unk_0x0F499120243F0B96();
			func_24(0);
			if (unk_0x1F2158D615BC4B25(Global_1318694))
			{
				if (unk_0x95CBA891BCA778AA(Global_1318694, 0))
				{
					if (!unk_0x335346A332B62CA2(Global_1318694))
					{
						unk_0x8D429A827A931AC9(Global_1318694, 0, 0);
					}
					unk_0xAB3098579170FA46(&Global_1318694);
				}
			}
		}
	}
}

void func_24(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2442894 = 0;
	}
	Global_1312466.f_18 = iParam0;
}

void func_25(var uParam0)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (unk_0x06F36936289C5EC8(uParam0->f_9))
	{
		if (unk_0xFF10EEA93744C96A(uParam0->f_9))
		{
			func_26(0);
		}
		unk_0xFE65076A204F9258(uParam0->f_9, 0);
	}
	if (!Global_36716)
	{
		unk_0x144C3925583A3494(1);
		unk_0xF92FDE77F72784E9(0f);
		unk_0x04581C3F6B94D241(0f);
	}
	Global_2404919.f_555 = 0f;
	unk_0x81ADE7722FD45216(0, 0, 0, 1, 0, 0);
}

void func_26(int iParam0)
{
	Global_17116 = iParam0;
}

int func_27()
{
	return Global_1315843;
}

var func_28()
{
	return Global_1315910;
}

int func_29(int iParam0)
{
	if (unk_0x860CE5C791DC28F5(iParam0))
	{
		if ((func_32(iParam0) || func_31(iParam0)) || func_30(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_30(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_85.f_32, 7);
}

bool func_31(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_85.f_32, 8);
}

bool func_32(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_39.f_18, 16);
}

int func_33(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_34(iParam0))
		{
			return 1;
		}
	}
	if (Global_1586488[iParam0 /*408*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_34(int iParam0)
{
	return func_35(iParam0);
}

bool func_35(int iParam0)
{
	return unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_13.f_1, 0);
}

int func_36()
{
	if (func_40(unk_0x8ACD527A7E574590(), 0))
	{
		if (Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_332 > -1)
		{
			return Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_332;
		}
		else if (unk_0x860CE5C791DC28F5(func_39()))
		{
			func_38(func_39());
			return Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_332;
		}
	}
	else
	{
		return func_39();
	}
	return func_37();
}

int func_37()
{
	return -1;
}

void func_38(int iParam0)
{
	if (Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_332 != iParam0)
	{
		Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_332 = iParam0;
	}
	StringCopy(&Global_1706714, unk_0x2743F2603B2676CC(iParam0), 24);
}

int func_39()
{
	return Global_2432717.f_636;
}

bool func_40(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_41(-1) == 8;
	}
	else
	{
		bVar0 = Global_1586488[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x860CE5C791DC28F5(iParam0))
		{
			bVar0 = unk_0xE6C94A0E653BD3F1(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_4();
	}
	if (Global_1315888[iVar1] == 1)
	{
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
	}
	return iVar0;
}

var func_42()
{
	return Global_2432717.f_596;
}

void func_43()
{
	if (!func_47(&uLocal_33))
	{
		func_46(&uLocal_33, 1, 0);
	}
	else if (func_45(&uLocal_33, 2000, 1))
	{
		if (func_7(unk_0x8ACD527A7E574590(), 1, 1))
		{
			if (!unk_0xC5B525958FB84246())
			{
				if (!unk_0xD0935EF5E40E7EE1(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590()))
					{
						if (func_45(&uLocal_33, 5000, 1))
						{
							unk_0x68E5332DF8C1DA5A(unk_0x77F050A399DB77ED(), 1, 0);
							func_44(&uLocal_33);
						}
					}
					else
					{
						func_44(&uLocal_33);
					}
				}
				else
				{
					func_44(&uLocal_33);
				}
			}
			else
			{
				func_44(&uLocal_33);
			}
		}
		else
		{
			func_44(&uLocal_33);
		}
	}
}

void func_44(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_45(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_46(uParam0, bParam2, 0);
	if (unk_0x4C779B19E6DDCDA2() && !bParam2)
	{
		if (unk_0x737E62570AEFEFAA(unk_0xC552B3A8E47271B7(unk_0xE23D71F521207E8D(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x737E62570AEFEFAA(unk_0xC552B3A8E47271B7(unk_0x3EAC9995EC220C5A(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_46(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4C779B19E6DDCDA2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE23D71F521207E8D();
			}
			else
			{
				*uParam0 = unk_0x0A7450968AC14F54();
			}
		}
		else
		{
			*uParam0 = unk_0x3EAC9995EC220C5A();
		}
		uParam0->f_1 = 1;
	}
}

bool func_47(var uParam0)
{
	return uParam0->f_1;
}

void func_48()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	unk_0x573691DB812DC8AA(&uLocal_1, 1);
	if (unk_0x4FE03C08BC095A57() && (Global_1586488[unk_0x8ACD527A7E574590() /*408*/] != -1 || unk_0xB56FEBC510E7E9DE(Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_13.f_1, 0)))
	{
		if (Global_976926.f_1 > 0)
		{
			if (!Global_1315885 && func_51(unk_0x8ACD527A7E574590()))
			{
				if (!iLocal_29)
				{
					iVar0 = 0;
					while (iVar0 <= 11)
					{
						if (!unk_0xB56FEBC510E7E9DE(iLocal_31, iVar0) || unk_0xB56FEBC510E7E9DE(iLocal_30, iVar0))
						{
							if (!unk_0xB56FEBC510E7E9DE(iLocal_31, iVar0))
							{
								iVar1 = 0;
								while (iVar1 <= 3)
								{
									Var2 = { Global_1612768.f_78[iVar1 /*6344*/].f_2978[0 /*3*/] };
									fVar5 = (Global_1612768.f_78[iVar1 /*6344*/].f_3082[0] + 5f);
									if (Global_1612768.f_31381[iVar0 /*88*/].f_16[iVar1] != 0)
									{
										fVar6 = unk_0x2A488C176D52CCA5(Global_1612768.f_31381[iVar0 /*88*/], Var2);
										if (fVar6 < fVar5)
										{
											unk_0x573691DB812DC8AA(&iLocal_30, iVar0);
										}
									}
									iVar1++;
								}
								unk_0x573691DB812DC8AA(&iLocal_31, iVar0);
							}
							if (unk_0xB56FEBC510E7E9DE(iLocal_30, iVar0))
							{
								Var7 = { func_50(Global_1612768.f_31381[iVar0 /*88*/]) };
								if (!func_49(Var7))
								{
									Global_1612768.f_31381[iVar0 /*88*/] = { Var7 };
									unk_0xA5F70A8B83BDFA49(&iLocal_30, iVar0);
								}
							}
							if (unk_0xB56FEBC510E7E9DE(iLocal_31, iVar0) && !unk_0xB56FEBC510E7E9DE(iLocal_30, iVar0))
							{
								iLocal_32++;
							}
						}
						iVar0++;
					}
					if (iLocal_32 >= 12)
					{
						iLocal_29 = 1;
					}
				}
			}
			else
			{
				iLocal_31 = 0;
				iLocal_32 = 0;
				iLocal_30 = 0;
				iLocal_29 = 0;
			}
		}
		else
		{
			iLocal_31 = 0;
			iLocal_32 = 0;
			iLocal_30 = 0;
			iLocal_29 = 0;
		}
	}
	else
	{
		Global_976926.f_1 = 0;
		iLocal_31 = 0;
		iLocal_32 = 0;
		iLocal_30 = 0;
		iLocal_29 = 0;
	}
}

int func_49(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_50(struct<3> Param0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	int iVar8;
	float fVar9;
	
	if (iLocal_28 >= 100)
	{
		return 776.8f, 1175.7f, 346f;
	}
	iLocal_28++;
	uVar0 = unk_0xBA479C5E1FD2C9B0(Param0, iLocal_28, 1, 1077936128, 0);
	if (!unk_0x5BDFC1EA7A69B5A2(uVar0))
	{
		return 0f, 0f, 0f;
	}
	unk_0x72DA1508C924FA42(uVar0, &Var1);
	if (!func_49(Var1))
	{
		iVar8 = 0;
		while (iVar8 <= 3)
		{
			Var4 = { Global_1612768.f_78[iVar8 /*6344*/].f_2978[0 /*3*/] };
			fVar7 = (Global_1612768.f_78[iVar8 /*6344*/].f_3082[0] + 1f);
			fVar7 = (fVar7 * fVar7);
			fVar9 = unk_0xB7A628320EFF8E47(Var1, Var4);
			if (fVar9 < fVar7)
			{
				return 0f, 0f, 0f;
			}
			iVar8++;
		}
	}
	return Var1;
}

bool func_51(int iParam0)
{
	return Global_2416794[iParam0 /*303*/].f_114 == 6;
}

void func_52()
{
	unk_0x573691DB812DC8AA(&uLocal_1, 0);
	if (((unk_0xB1A77D5C890711F9(joaat("fm_mission_controller")) > 0 && Global_1315910) && func_53() == 0) && Global_1315843 == 64)
	{
		Global_1315842 = 0;
		Global_1315843 = 65;
	}
}

int func_53()
{
	return Global_1312466.f_18;
}

void func_54()
{
	if (unk_0x4FE03C08BC095A57())
	{
		if (((Global_1612768 == 0 && Global_1612768.f_23 != 0) && Global_2432717.f_545.f_9 != 0) && Global_2432717.f_545.f_11 == Global_1612768.f_23)
		{
			if (Global_1612768.f_23 < Global_1612768.f_22 && unk_0x8ACD527A7E574590() != -1)
			{
				if (func_55() != 0 && func_55() <= 9)
				{
					Global_1612768.f_22 = Global_1612768.f_23;
				}
			}
		}
	}
}

int func_55()
{
	return Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_177;
}

void func_56()
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	struct<3> Var6;
	float fVar9;
	int iVar10;
	
	if (unk_0x4FE03C08BC095A57() && (Global_1586488[unk_0x8ACD527A7E574590() /*408*/] != -1 || unk_0xB56FEBC510E7E9DE(Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_13.f_1, 0)))
	{
		if (Global_976926.f_1 > 0)
		{
			if (!iLocal_25)
			{
				if (((!iLocal_26 && !func_59(unk_0x8ACD527A7E574590())) && !func_58(unk_0x8ACD527A7E574590(), 0)) && func_7(unk_0x8ACD527A7E574590(), 1, 1))
				{
					if (!Global_1315885 && func_51(unk_0x8ACD527A7E574590()))
					{
						Var1 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0) };
						if (!unk_0x8BE5D4DC1A953832(Var1, &fVar4, 1))
						{
							bVar0 = true;
						}
						else if (Var1.f_2 > (fVar4 + 1.5f))
						{
							iVar5 = Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_85.f_28;
							if (iVar5 >= 0 && iVar5 < 4)
							{
								Var6 = { Global_1612768.f_78[iVar5 /*6344*/].f_2978[0 /*3*/] };
								fVar9 = unk_0xB7A628320EFF8E47(Var1.f_0, Var1.f_1, 0f, Var6.f_0, Var6.f_1, 0f);
								if (fVar9 < ((Global_1612768.f_78[iVar5 /*6344*/].f_3082[0] + 0.5f) * (Global_1612768.f_78[iVar5 /*6344*/].f_3082[0] + 0.5f)))
								{
									iLocal_26 = 1;
								}
							}
						}
					}
					if (!iLocal_26 && !bVar0)
					{
						iLocal_25 = 1;
					}
				}
				if (iLocal_26)
				{
					iVar10 = Global_1586488[unk_0x8ACD527A7E574590() /*408*/].f_85.f_28;
					if (func_57(Global_1612768.f_78[iVar10 /*6344*/].f_2978[0 /*3*/], Global_1612768.f_78[iVar10 /*6344*/].f_3082[0]))
					{
						iLocal_27 = 0;
						iLocal_25 = 1;
					}
				}
			}
			else
			{
				iLocal_26 = 0;
				iLocal_27 = 0;
			}
		}
		else
		{
			iLocal_25 = 0;
			iLocal_26 = 0;
			iLocal_27 = 0;
		}
	}
	else
	{
		Global_976926.f_1 = 0;
		iLocal_25 = 0;
		iLocal_26 = 0;
		iLocal_27 = 0;
	}
}

int func_57(struct<3> Param0, float fParam3)
{
	var uVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iLocal_27 >= 60)
	{
		return 1;
	}
	iLocal_27++;
	uVar0 = unk_0xBA479C5E1FD2C9B0(Param0, iLocal_27, 1, 1077936128, 0);
	if (!unk_0x5BDFC1EA7A69B5A2(uVar0))
	{
		return 0;
	}
	bVar1 = true;
	unk_0x72DA1508C924FA42(uVar0, &Var2);
	if (!func_49(Var2))
	{
		fVar5 = unk_0xB7A628320EFF8E47(Var2, Param0);
		if (fVar5 >= ((fParam3 + 10f) * (fParam3 + 10f)))
		{
			if ((!unk_0x8AAE56946AAF51A9(Var2, 4f) && !unk_0xD57B8BE8C701BB42(Var2, 2f)) && !unk_0x3B949E96DB795CB7(Var2, 2f, 0))
			{
				bVar1 = false;
			}
		}
	}
	if (bVar1)
	{
		return 0;
	}
	unk_0x0B5F372F57E469AC(unk_0x77F050A399DB77ED(), Var2, 1, 0, 0, 1);
	return 1;
}

int func_58(int iParam0, bool bParam1)
{
	if (Global_2416794[iParam0 /*303*/].f_220 == 99)
	{
		return 0;
	}
	if (bParam1)
	{
		if (Global_2416794[iParam0 /*303*/].f_220 == 13)
		{
			return 0;
		}
	}
	return 1;
}

int func_59(int iParam0)
{
	if (Global_2416794[iParam0 /*303*/].f_205 != 0)
	{
		return 1;
	}
	return 0;
}

void func_60()
{
	int iVar0;
	int iVar1;
	
	if ((((((func_7(unk_0x8ACD527A7E574590(), 1, 1) && Global_91158.f_297 == 0) && unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590())) && func_68() == 0) && !unk_0x4FE03C08BC095A57()) && !func_64(unk_0x8ACD527A7E574590())) && !func_63(unk_0x8ACD527A7E574590(), 1))
	{
		if (unk_0x737E62570AEFEFAA(unk_0xC552B3A8E47271B7(unk_0xE23D71F521207E8D(), uLocal_24)) > 10000)
		{
			iVar1 = func_62();
			iVar0 = 0;
			while (iVar0 < 11)
			{
				if (Global_2097152[iVar1 /*10185*/].f_7698.f_1221[iVar0])
				{
					if (((((func_61(unk_0xB4190D50AD0EB378(unk_0x77F050A399DB77ED(), 11, Global_2097152[iVar1 /*10185*/].f_7698.f_711[iVar0 /*13*/][11], Global_2097152[iVar1 /*10185*/].f_7698.f_855[iVar0 /*13*/][11])) || func_61(unk_0xB4190D50AD0EB378(unk_0x77F050A399DB77ED(), 4, Global_2097152[iVar1 /*10185*/].f_7698.f_711[iVar0 /*13*/][4], Global_2097152[iVar1 /*10185*/].f_7698.f_855[iVar0 /*13*/][4]))) || func_61(unk_0xB4190D50AD0EB378(unk_0x77F050A399DB77ED(), 6, Global_2097152[iVar1 /*10185*/].f_7698.f_711[iVar0 /*13*/][6], Global_2097152[iVar1 /*10185*/].f_7698.f_855[iVar0 /*13*/][6]))) || func_61(unk_0xB4190D50AD0EB378(unk_0x77F050A399DB77ED(), 7, Global_2097152[iVar1 /*10185*/].f_7698.f_711[iVar0 /*13*/][7], Global_2097152[iVar1 /*10185*/].f_7698.f_855[iVar0 /*13*/][7]))) || func_61(unk_0xB4190D50AD0EB378(unk_0x77F050A399DB77ED(), 8, Global_2097152[iVar1 /*10185*/].f_7698.f_711[iVar0 /*13*/][8], Global_2097152[iVar1 /*10185*/].f_7698.f_855[iVar0 /*13*/][8]))) || func_61(unk_0x7C1B30F338CF8777(unk_0x77F050A399DB77ED(), 0, Global_2097152[iVar1 /*10185*/].f_7698.f_999[iVar0 /*10*/][0], Global_2097152[iVar1 /*10185*/].f_7698.f_1110[iVar0 /*10*/][0])))
					{
						Global_2097152[iVar1 /*10185*/].f_7698.f_1221[iVar0] = 0;
					}
				}
				iVar0++;
			}
			if (((((func_61(unk_0xB4190D50AD0EB378(unk_0x77F050A399DB77ED(), 11, unk_0xB2833E96F49D3CDC(unk_0x77F050A399DB77ED(), 11), unk_0xD01703B8B3FC785F(unk_0x77F050A399DB77ED(), 11))) || func_61(unk_0xB4190D50AD0EB378(unk_0x77F050A399DB77ED(), 4, unk_0xB2833E96F49D3CDC(unk_0x77F050A399DB77ED(), 4), unk_0xD01703B8B3FC785F(unk_0x77F050A399DB77ED(), 4)))) || func_61(unk_0xB4190D50AD0EB378(unk_0x77F050A399DB77ED(), 6, unk_0xB2833E96F49D3CDC(unk_0x77F050A399DB77ED(), 6), unk_0xD01703B8B3FC785F(unk_0x77F050A399DB77ED(), 6)))) || func_61(unk_0xB4190D50AD0EB378(unk_0x77F050A399DB77ED(), 7, unk_0xB2833E96F49D3CDC(unk_0x77F050A399DB77ED(), 7), unk_0xD01703B8B3FC785F(unk_0x77F050A399DB77ED(), 7)))) || func_61(unk_0xB4190D50AD0EB378(unk_0x77F050A399DB77ED(), 8, unk_0xB2833E96F49D3CDC(unk_0x77F050A399DB77ED(), 8), unk_0xD01703B8B3FC785F(unk_0x77F050A399DB77ED(), 8)))) || func_61(unk_0x7C1B30F338CF8777(unk_0x77F050A399DB77ED(), 0, unk_0xB7A83E90E95B3E76(unk_0x77F050A399DB77ED(), 0), unk_0x7739EACC3B2657EC(unk_0x77F050A399DB77ED(), 0))))
			{
				if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == joaat("mp_m_freemode_01"))
				{
					unk_0x5F2AACB0122E1554(unk_0x77F050A399DB77ED(), 3, 97, 0, 0);
				}
				else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == joaat("mp_f_freemode_01"))
				{
					unk_0x5F2AACB0122E1554(unk_0x77F050A399DB77ED(), 3, 112, 0, 0);
				}
				Global_2456625 = 1;
			}
			uLocal_24 = unk_0xE23D71F521207E8D();
		}
	}
	else
	{
		uLocal_24 = unk_0x3273EF918EE77B03(unk_0xE23D71F521207E8D(), 5000);
	}
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case -1697490107:
		case 1244356498:
		case 863777332:
		case 631674505:
		case -960480251:
		case 1494999230:
		case 1869352282:
		case -13877721:
		case 318989781:
		case joaat("DLC_MP_APA_F_JBIB_4_2"):
		case 2034437041:
		case joaat("DLC_MP_APA_F_JBIB_6_0"):
		case joaat("DLC_MP_APA_F_JBIB_6_1"):
		case -1814618793:
		case -1651429173:
		case -1109205107:
		case -338576534:
		case -644901146:
		case 120812077:
		case joaat("DLC_MP_APA_F_JBIB_8_4"):
		case -181924378:
		case 511598738:
		case -1582242055:
		case -890095237:
		case -1106468944:
		case -766352173:
		case joaat("DLC_MP_APA_F_JBIB_10_1"):
		case 1055178230:
		case 763829051:
		case 1635609351:
		case 1338394521:
		case 1023910428:
		case -1153884555:
		case -815519388:
		case joaat("DLC_MP_APA_F_JBIB_13_0"):
		case -1491335966:
		case 1112376217:
		case 1505799307:
		case 2082926935:
		case joaat("DLC_MP_APA_F_JBIB_16_2"):
		case -705583889:
		case 852450985:
		case 826516320:
		case 495587617:
		case 2026344688:
		case -1778267292:
		case -1472958519:
		case -1313635633:
		case -1023597214:
		case -574530838:
		case -1917302634:
		case 755174499:
		case 981608289:
		case 1278495429:
		case 1578036858:
		case joaat("DLC_MP_APA_F_JBIB_25_0"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 2101691184:
		case -50873153:
		case joaat("DLC_MP_APA_F_LEGS_2_1"):
		case -1397953147:
		case 905707553:
		case -1795207349:
		case -1559893160:
		case 819398396:
		case 1076012435:
		case joaat("DLC_MP_APA_F_LEGS_4_4"):
		case joaat("DLC_MP_APA_F_LEGS_5_0"):
		case joaat("DLC_MP_APA_F_LEGS_5_1"):
		case -2132764550:
		case -210043471:
		case joaat("DLC_MP_APA_F_LEGS_5_4"):
		case joaat("DLC_MP_APA_F_LEGS_6_0"):
		case -460992432:
		case joaat("DLC_MP_APA_F_LEGS_6_2"):
		case 37522365:
		case joaat("DLC_MP_APA_F_LEGS_7_0"):
		case -310078170:
		case joaat("DLC_MP_APA_F_LEGS_8_1"):
		case joaat("DLC_MP_APA_F_LEGS_8_2"):
		case 1479240306:
		case joaat("DLC_MP_APA_F_LEGS_9_0"):
		case joaat("DLC_MP_APA_F_LEGS_12_0"):
		case -664552834:
		case -2037049630:
		case -104399548:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_APA_F_FEET_0_0"):
		case joaat("DLC_MP_APA_F_FEET_2_0"):
		case -2005924878:
		case -1264731975:
		case -958374594:
		case joaat("DLC_MP_APA_F_FEET_3_2"):
		case -1683847485:
		case joaat("DLC_MP_APA_F_FEET_4_0"):
		case 1080804486:
		case 1340826501:
		case 1236260618:
		case 1478849525:
		case 1551220777:
		case 2059205815:
		case 148019428:
		case 405583768:
		case 1852433417:
		case -1299464852:
		case -1076242424:
		case 1469187962:
		case 1698144965:
		case 2061880865:
		case joaat("DLC_MP_APA_F_SPECIAL_1_0"):
		case 285578369:
		case 474786575:
		case 223022352:
		case 386998428:
		case -388479961:
		case -744547915:
		case 1333556044:
		case 609426682:
		case -1565484621:
		case joaat("DLC_MP_APA_F_SPECIAL_3_3"):
		case 153151122:
		case -597586668:
		case joaat("DLC_MP_APA_F_TEETH_0_0"):
		case 653911448:
		case -1519558015:
		case -1509617832:
		case -552962106:
		case 571566700:
		case -801454400:
		case 1577827331:
		case 807355299:
		case joaat("DLC_MP_APA_F_SPECIAL2_1_0"):
		case 573873761:
		case 803879372:
		case -892781945:
		case -1116102680:
		case -564862562:
		case 1775069019:
		case 1550891523:
		case joaat("DLC_MP_APA_F_PHEAD_1_1"):
		case joaat("DLC_MP_APA_F_PHEAD_1_2"):
			return 1;
			break;
		
		case -672134378:
		case -484096606:
		case -681300448:
		case 257695247:
		case 550170193:
		case -360939083:
		case 895522684:
		case joaat("DLC_MP_APA_M_JBIB_4_0"):
		case -739443197:
		case 1647024774:
		case -1198403230:
		case joaat("DLC_MP_APA_M_JBIB_6_0"):
		case joaat("DLC_MP_APA_M_JBIB_6_1"):
		case 1630626729:
		case 941265276:
		case 881446284:
		case 1223489106:
		case 388895445:
		case 660058920:
		case joaat("DLC_MP_APA_M_JBIB_8_4"):
		case -1565801673:
		case -126980421:
		case -971077092:
		case -1509471686:
		case -1054605197:
		case -1798008670:
		case joaat("DLC_MP_APA_M_JBIB_10_1"):
		case -463228985:
		case 103478101:
		case -605293415:
		case -1393289558:
		case -1162694105:
		case -1738379897:
		case 101240891:
		case joaat("DLC_MP_APA_M_JBIB_13_0"):
		case -272483817:
		case 869567566:
		case -1614524187:
		case 964953190:
		case joaat("DLC_MP_APA_M_JBIB_16_2"):
		case 1585040977:
		case 1220846311:
		case -180257876:
		case 773303613:
		case -43531404:
		case -234181454:
		case -532084433:
		case 260597677:
		case -65421104:
		case -1158463868:
		case 67032006:
		case -504937326:
		case -719246586:
		case 258875295:
		case -254090631:
		case joaat("DLC_MP_APA_M_JBIB_24_0"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case -1454134696:
		case 862419088:
		case joaat("DLC_MP_APA_M_LEGS_2_1"):
		case joaat("DLC_MP_APA_M_LEGS_3_0"):
		case -1218262075:
		case -1091214220:
		case joaat("DLC_MP_APA_M_LEGS_4_1"):
		case 1651125087:
		case 1898432730:
		case joaat("DLC_MP_APA_M_LEGS_4_4"):
		case joaat("DLC_MP_APA_M_LEGS_5_0"):
		case -1435769399:
		case -1210220372:
		case -1896730922:
		case joaat("DLC_MP_APA_M_LEGS_5_4"):
		case 485903843:
		case 1251617062:
		case joaat("DLC_MP_APA_M_LEGS_6_2"):
		case 1752687841:
		case joaat("DLC_MP_APA_M_LEGS_7_0"):
		case 1100095433:
		case joaat("DLC_MP_APA_M_LEGS_8_1"):
		case joaat("DLC_MP_APA_M_LEGS_8_2"):
		case 1674798155:
		case joaat("DLC_MP_APA_M_LEGS_9_0"):
		case joaat("DLC_MP_APA_M_LEGS_11_0"):
		case -786201969:
		case -1039866806:
		case -1395344918:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_APA_M_FEET_0_0"):
		case joaat("DLC_MP_APA_M_FEET_2_0"):
		case 1515190786:
		case 1353529084:
		case 1046975089:
		case joaat("DLC_MP_APA_M_FEET_3_2"):
		case 1037209955:
		case 898422318:
		case -428623875:
		case -675964287:
		case -86515515:
		case -324975528:
		case joaat("DLC_MP_APA_M_FEET_5_0"):
		case joaat("DLC_MP_APA_M_FEET_5_1"):
		case -1370961300:
		case 61568300:
		case -773746279:
		case -311430559:
		case -546810286:
		case -1844462682:
		case -2083971303:
		case 738127742:
		case joaat("DLC_MP_APA_M_SPECIAL_1_0"):
		case -654188909:
		case -487067009:
		case -358907450:
		case 115653208:
		case -1646892999:
		case 1879018636:
		case -30928362:
		case 811071093:
		case 530666760:
		case joaat("DLC_MP_APA_M_SPECIAL_3_3"):
		case -1015276349:
		case -696597824:
		case joaat("DLC_MP_APA_M_TEETH_0_0"):
		case 1451524876:
		case -678623961:
		case -1254273277:
		case 1400019890:
		case 432404545:
		case -336716654:
		case -82784224:
		case 1296095987:
		case -510948971:
		case 1666190620:
		case 1943121439:
		case -1923624712:
		case -1626246037:
		case 718375917:
		case -679069478:
		case -1410320276:
		case joaat("DLC_MP_APA_M_PHEAD_1_1"):
		case joaat("DLC_MP_APA_M_PHEAD_1_2"):
			return 1;
			break;
	}
	return 0;
}

int func_62()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_63(int iParam0, int iParam1)
{
	if (Global_1608060[iParam0 /*106*/].f_8.f_27 != -1 || (iParam1 && Global_1608060[iParam0 /*106*/].f_8.f_26 != -1))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0)
{
	if (func_67(iParam0))
	{
		return 1;
	}
	if (func_65(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_66(iParam0, 9);
	}
	return 0;
}

bool func_66(int iParam0, int iParam1)
{
	return unk_0xB56FEBC510E7E9DE(Global_1608060[iParam0 /*106*/].f_8.f_4, iParam1);
}

int func_67(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xB56FEBC510E7E9DE(Global_1608060[iVar0 /*106*/].f_1, 0);
	}
	return 0;
}

int func_68()
{
	if (func_72(1))
	{
		if (func_70())
		{
			return Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_8.f_60;
		}
		else
		{
			return Global_1608060[func_69() /*106*/].f_8.f_60;
		}
	}
	return 0;
}

int func_69()
{
	return Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_8;
}

bool func_70()
{
	return func_71(unk_0x8ACD527A7E574590());
}

int func_71(int iParam0)
{
	if (iParam0 != func_37())
	{
		if (Global_1608060[iParam0 /*106*/].f_8 != func_37())
		{
			return Global_1608060[iParam0 /*106*/].f_8 == iParam0;
		}
	}
	return 0;
}

bool func_72(bool bParam0)
{
	return func_73(unk_0x8ACD527A7E574590(), bParam0);
}

bool func_73(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_71(iParam0))
		{
			return 0;
		}
	}
	return Global_1608060[iParam0 /*106*/].f_8 != func_37();
}

void func_74()
{
	var uVar0;
	float fVar1;
	int iVar2;
	
	if (!func_47(&uLocal_22))
	{
		func_46(&uLocal_22, 0, 0);
	}
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		uVar0 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
		if ((((((unk_0x1F2158D615BC4B25(uVar0) && unk_0x968EA16107097324(uVar0, 0)) && unk_0x07A8845F7F106A38(uVar0, -1) == unk_0x77F050A399DB77ED()) && unk_0x7E4AA54C16E2F4F2(uVar0) >= 0) && unk_0x7E4AA54C16E2F4F2(uVar0) < 255) && func_45(&uLocal_22, 5000, 0)) && unk_0xDF1398076E26B0E4(uVar0) == joaat("banshee2"))
		{
			fVar1 = 0f;
			iVar2 = unk_0x412350E0E75BCEFD(iVar0, 11);
			switch (iVar2)
			{
				case -1:
					fVar1 = 4f;
					break;
				
				case 0:
					fVar1 = 8f;
					break;
				
				case 1:
					fVar1 = 12f;
					break;
				
				case 2:
					fVar1 = 16f;
					break;
				
				case 3:
					fVar1 = 20f;
					break;
			}
			unk_0x9119A880771EC600(iVar0, fVar1);
			func_20(&uLocal_22, 0, 0);
		}
	}
}

void func_75()
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	bVar0 = true;
	if (((((!unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[39], 6) && !unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[40], 6)) && !unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[41], 6)) && !unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[42], 6)) && !unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[43], 6)) && !unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[44], 6))
	{
	}
	else if (Global_91158.f_389 == 42 && unk_0x39BD4614CF899227(&(Global_91158.f_392[0 /*4*/])) == 1850468163)
	{
		if (!iLocal_21)
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				uVar1 = unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0);
				if ((((unk_0x1F2158D615BC4B25(uVar1) && unk_0x968EA16107097324(uVar1, 0)) && func_77(unk_0xDF1398076E26B0E4(uVar1))) && Global_2097152[func_62() /*10185*/].f_7698.f_2 >= 0) && !unk_0xB56FEBC510E7E9DE(Global_1321270[Global_2097152[func_62() /*10185*/].f_7698.f_2 /*138*/].f_99, 15))
				{
					iVar2 = Global_91158.f_905[0];
					iVar2 = (iVar2 - unk_0xF34EE736CF047844((IntToFloat(func_76(unk_0xDF1398076E26B0E4(iVar1))) * 0.1f)));
					iVar2 = (iVar2 + unk_0xF34EE736CF047844((IntToFloat(func_76(unk_0xDF1398076E26B0E4(iVar1))) * Global_262145.f_4872)));
					Global_91158.f_905[0] = iVar2;
					Global_17257.f_3918[0] = Global_91158.f_905[0];
					Global_91158.f_1296 = Global_91158.f_905[0];
					Global_17257.f_5598 = 0;
					Global_17257.f_5599 = 0;
				}
			}
			iLocal_21 = 1;
		}
		bVar0 = false;
	}
	if (bVar0)
	{
		iLocal_21 = 0;
	}
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chino2"):
			return Global_262145.f_9712;
			break;
		
		case joaat("primo2"):
			return Global_262145.f_9715;
			break;
		
		case joaat("moonbeam2"):
			return Global_262145.f_9714;
			break;
		
		case joaat("faction2"):
			return Global_262145.f_9713;
			break;
		
		case joaat("buccaneer2"):
			return Global_262145.f_9711;
			break;
		
		case joaat("voodoo"):
			return Global_262145.f_9716;
			break;
		
		case joaat("sultanrs"):
			return Global_262145.f_10788;
			break;
		
		case joaat("banshee2"):
			return Global_262145.f_10790;
			break;
		
		case joaat("faction3"):
			return 250000;
			break;
		
		case joaat("minivan2"):
			return 250000;
			break;
		
		case joaat("sabregt2"):
			return 250000;
			break;
		
		case joaat("slamvan3"):
			return 250000;
			break;
		
		case joaat("tornado5"):
			return 250000;
			break;
		
		case joaat("virgo2"):
			return 250000;
			break;
	}
	return 0;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("sultanrs"):
		case joaat("banshee2"):
			return 1;
			break;
	}
	return 0;
}

void func_78()
{
	int iVar0;
	
	if ((Global_262145.f_4969 || Global_262145.f_10737) || unk_0xAEB19103FF099B1F() >= 1455011975)
	{
	}
	else
	{
		if (func_80(115, -1, -1))
		{
			func_79(115, 0, -1, 1);
		}
		iVar0 = 0;
		while (iVar0 < 65)
		{
			if (Global_1321270[iVar0 /*138*/].f_66 == joaat("btype3"))
			{
				Global_1321270[iVar0 /*138*/].f_66 = 0;
				unk_0xA5F70A8B83BDFA49(&(Global_1321270[iVar0 /*138*/].f_99), 2);
				unk_0x573691DB812DC8AA(&(Global_1321270[iVar0 /*138*/].f_99), 1);
			}
			iVar0++;
		}
	}
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_4();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xA1F1837E4A137310((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEDF2A618D8A93F7D((iParam0 - 0)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xA1F1837E4A137310((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEDF2A618D8A93F7D((iParam0 - 192)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xA1F1837E4A137310((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEDF2A618D8A93F7D((iParam0 - 513)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xA1F1837E4A137310((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEDF2A618D8A93F7D((iParam0 - 705)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC9FE62843EA157C0((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEDF2A618D8A93F7D((iParam0 - 3111)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC9FE62843EA157C0((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEDF2A618D8A93F7D((iParam0 - 2919)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x1F3B95F25F60E511((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEDF2A618D8A93F7D((iParam0 - 4207)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x1F3B95F25F60E511((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEDF2A618D8A93F7D((iParam0 - 4335)) * 64);
		iVar0 = unk_0x83C65B5F480695DC(iVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_4();
	}
	iVar1 = func_82(iParam0, iParam1);
	uVar2 = func_81(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x31E96FB56E815232(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xEDF2A618D8A93F7D((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xEDF2A618D8A93F7D((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xEDF2A618D8A93F7D((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xEDF2A618D8A93F7D((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xEDF2A618D8A93F7D((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xEDF2A618D8A93F7D((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xEDF2A618D8A93F7D((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xEDF2A618D8A93F7D((iParam0 - 4207)) * 64);
	}
	return iVar0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_4();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xA1F1837E4A137310((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xA1F1837E4A137310((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xA1F1837E4A137310((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xA1F1837E4A137310((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC9FE62843EA157C0((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC9FE62843EA157C0((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x1F3B95F25F60E511((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x1F3B95F25F60E511((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	return iVar0;
}

void func_83()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 3802 + 2;
	if (!func_80(iVar0, -1, -1))
	{
		if (func_7(unk_0x8ACD527A7E574590(), 1, 1))
		{
			unk_0x2B8B3581C4E63AD1("FM_HELP_BNY2");
			unk_0x70E981B5CF659D8A(0, 1);
			func_79(iVar0, 1, -1, 1);
		}
	}
	iVar1 = 3802 + 3;
	bVar2 = false;
	if (!func_80(iVar1, -1, -1))
	{
		if (func_7(unk_0x8ACD527A7E574590(), 1, 1))
		{
			if (Global_67968)
			{
				if (!func_47(&uLocal_15))
				{
					func_46(&uLocal_15, 0, 0);
				}
				if (func_45(&uLocal_15, 8000, 0))
				{
					func_79(iVar1, 1, -1, 1);
				}
				else
				{
					func_85("FM_HELP_BNY2", -1);
					bVar2 = true;
					iLocal_17 = 1;
				}
			}
			else if (func_47(&uLocal_15))
			{
				func_44(&uLocal_15);
			}
		}
	}
	if (!bVar2 && iLocal_17)
	{
		if (func_84("FM_HELP_BNY2"))
		{
			unk_0x4ACCE973F9C3CA3B(1);
		}
		iLocal_17 = 0;
	}
}

bool func_84(char* sParam0)
{
	unk_0xBA89110203C50939(sParam0);
	return unk_0x62881E3F5F311834(0);
}

void func_85(char* sParam0, int iParam1)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

void func_86()
{
	int iVar0;
	
	if (unk_0x2C063B4379F0C076())
	{
		if (((((!unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[39], 6) && !unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[40], 6)) && !unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[41], 6)) && !unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[42], 6)) && !unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[43], 6)) && !unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[44], 6))
		{
		}
		else if (Global_91158.f_389 == 42)
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if ((Global_2553876[iVar0 /*72*/].f_2 == 1 && Global_2553876[iVar0 /*72*/].f_3 == -1135378931) && Global_2553876[iVar0 /*72*/].f_4 == -46622315)
				{
					if (Global_91158.f_1296 != 0 && Global_91158.f_905[0] == Global_91158.f_1296)
					{
						Global_91158.f_905[0] = 0;
						Global_91158.f_1296 = 0;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_87()
{
	bool bVar0;
	
	if (Global_2426494.f_615.f_6 >= 0)
	{
		if (func_72(0) && func_88() != 0)
		{
			if (iLocal_13 <= 0)
			{
				iLocal_13 = 0;
			}
		}
		else if (!func_72(0))
		{
		}
		else if (!func_88() != 0)
		{
		}
	}
	switch (iLocal_13)
	{
		case 0:
			uLocal_14 = Global_25380;
			Global_25380 = 1;
			iLocal_13 = 1;
			break;
		
		case 1:
			bVar0 = false;
			if (!Global_2426494.f_615.f_6 >= 0)
			{
				bVar0 = true;
			}
			if (func_72(0))
			{
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				Global_25380 = uLocal_14;
				iLocal_13 = -1;
			}
			break;
		
		case -1:
			break;
		
		default:
			iLocal_13 = -1;
			break;
	}
}

int func_88()
{
	return Global_1608060[func_69() /*106*/].f_8.f_60.f_1;
}

void func_89()
{
	int iVar0;
	
	if ((unk_0x4FE03C08BC095A57() && Global_976942 == 12) && !unk_0xB56FEBC510E7E9DE(Global_976942.f_3, 31))
	{
		iVar0 = unk_0x8ACD527A7E574590();
		if (iVar0 != -1)
		{
			if (Global_1586488[iVar0 /*408*/] == 0)
			{
				if (Global_2432717.f_545.f_9 == 0 && Global_1606971[iVar0 /*34*/].f_22 != 0)
				{
					Global_1606971[iVar0 /*34*/].f_22 = 0;
				}
				if (unk_0xB56FEBC510E7E9DE(Global_1586488[iVar0 /*408*/].f_39.f_18, 14) && Global_2432717.f_545.f_9 != 0)
				{
					if (Global_1586488[iVar0 /*408*/].f_85.f_28 != -1 && func_94())
					{
						func_92(1);
						func_91();
						func_90();
						unk_0x67017B336DB127DA(26, 0, 0);
					}
				}
			}
		}
	}
}

void func_90()
{
	Global_2432717.f_706 = 1;
}

void func_91()
{
	Global_2432717 = 0;
	Global_2432717.f_2 = 0;
}

void func_92(bool bParam0)
{
	struct<57> Var0;
	int iVar57;
	
	Global_2433482.f_1.f_2797 = 0;
	Global_2433482.f_1.f_2798 = 0;
	Global_2433482.f_1.f_2820 = 0;
	Global_2433482.f_1.f_2804 = 0;
	Global_2433482.f_1.f_2805 = 0;
	Global_2433482.f_1.f_2808 = 0;
	Global_2433482.f_1.f_2809 = 0;
	Global_2433482.f_1.f_2807 = -1;
	Global_2433482.f_1.f_2810 = -1;
	Global_2433482.f_1.f_2812 = 0;
	Global_2433482.f_1.f_2813 = 0;
	Global_2433482.f_1.f_2814 = 0;
	Global_2433482.f_1.f_2815 = 0;
	Global_2433482.f_1.f_2816 = 0;
	Global_2433482.f_1.f_2817 = 0;
	Global_2433482.f_1.f_2821 = -1;
	if (bParam0)
	{
		Global_2433482.f_1.f_2818 = -1;
		Global_2433482.f_1.f_2819 = -1;
	}
	Global_2433482.f_1.f_2840 = 0;
	func_93();
	Var0.f_33 = 2;
	Var0.f_36 = 7;
	iVar57 = 0;
	while (iVar57 <= 31)
	{
		Global_2433482.f_1.f_844[iVar57 /*57*/] = { Var0 };
		iVar57++;
	}
	Global_2429899.f_21 = -1;
}

void func_93()
{
	Global_2429899.f_20 = 0;
}

int func_94()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x0BBA31C395EE0D30(iVar0);
		if ((iVar1 != -1 && iVar1 != unk_0x8ACD527A7E574590()) && unk_0x860CE5C791DC28F5(iVar1))
		{
			iVar2 = iVar1;
			if (((iVar2 != -1 && !Global_1586488[iVar2 /*408*/].f_192 == 8) && !unk_0xB56FEBC510E7E9DE(Global_1586488[iVar2 /*408*/].f_39.f_18, 14)) && Global_1586488[iVar2 /*408*/] != -1)
			{
				if (Global_1606971[iVar2 /*34*/].f_22 == 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_95()
{
	var uVar0[5];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (!func_47(&uLocal_11))
	{
		if (Global_1586281.f_167 && unk_0xB56FEBC510E7E9DE(Global_1586281.f_22, 8))
		{
			func_46(&uLocal_11, 1, 0);
		}
	}
	else if (func_101(unk_0x8ACD527A7E574590(), 1))
	{
		if (func_100())
		{
			if (func_99() >= 0)
			{
				if (unk_0xB56FEBC510E7E9DE(Global_1321270[func_99() /*138*/].f_99, 0))
				{
					unk_0xA5F70A8B83BDFA49(&(Global_1321270[func_99() /*138*/].f_99), 0);
					func_44(&uLocal_11);
				}
			}
			func_96(1, 0, 0, 0);
		}
		func_44(&uLocal_11);
	}
	else if (func_45(&uLocal_11, 7500, 1))
	{
		func_44(&uLocal_11);
	}
	if (((unk_0x4FE03C08BC095A57() || func_6()) || unk_0xA43AFD3572536610(unk_0x8ACD527A7E574590())) || unk_0x94B2757D7DE07565())
	{
		if (func_47(&uLocal_7))
		{
			func_44(&uLocal_7);
		}
	}
	else if (!func_47(&uLocal_7))
	{
		if (func_7(unk_0x8ACD527A7E574590(), 1, 1))
		{
			iVar6 = unk_0x1018DE502E6D9CD4(unk_0x77F050A399DB77ED(), &uVar0);
			iVar7 = 0;
			while (iVar7 < iVar6)
			{
				if (iVar7 < 5)
				{
					if ((((unk_0x1F2158D615BC4B25(uVar0[iVar7]) && unk_0xDD21A3DB256904E7(uVar0[iVar7])) && !unk_0x0B6E83A9A7ED3EBA(uVar0[iVar7])) && unk_0x9A2BADF8B8CE0E2A(uVar0[iVar7], -1)) && !unk_0xD0935EF5E40E7EE1(uVar0[iVar7]))
					{
						if (unk_0x9BBC2FD086E9AC98("Player_Vehicle", 3) && unk_0xB22BDF5B6DBD298B(uVar0[iVar7], "Player_Vehicle"))
						{
							iVar8 = 0;
							while (iVar8 < 32)
							{
								iVar9 = unk_0x0BBA31C395EE0D30(iVar8);
								if (func_7(iVar9, 0, 1) && !func_101(iVar9, 1))
								{
									if (unk_0xA68F5A9BCA4E78E1(uVar0[iVar7], "Player_Vehicle") == unk_0x3A5DCEF442550456(iVar9))
									{
										uLocal_9 = uVar0[iVar7];
										iLocal_10 = iVar9;
										func_46(&uLocal_7, 1, 0);
										return;
									}
								}
								iVar8++;
							}
						}
						else
						{
							iLocal_10 = func_37();
							uLocal_9 = uVar0[iVar7];
							func_46(&uLocal_7, 1, 0);
							return;
						}
					}
				}
				iVar7++;
			}
		}
	}
	else
	{
		if (iLocal_10 != func_37())
		{
			if (func_7(iLocal_10, 0, 1) && func_101(iLocal_10, 1))
			{
				func_44(&uLocal_7);
			}
		}
		if (((unk_0x1F2158D615BC4B25(uLocal_9) && !unk_0x0B6E83A9A7ED3EBA(uLocal_9)) && unk_0x9A2BADF8B8CE0E2A(uLocal_9, -1)) && !unk_0xD0935EF5E40E7EE1(uLocal_9))
		{
			if (func_45(&uLocal_7, 7000, 1))
			{
				if (unk_0xE8BD4B74271ABDCC(iLocal_9))
				{
					unk_0x8D429A827A931AC9(iLocal_9, 0, 1);
					unk_0x18D40A0CF27AD6D3(&iLocal_9);
				}
			}
		}
		else
		{
			func_44(&uLocal_7);
		}
	}
}

void func_96(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam0)
	{
		func_98(2);
	}
	else
	{
		func_98(1);
	}
	if (bParam1)
	{
		func_98(11);
	}
	if (bParam2)
	{
		func_98(32);
		if (bParam3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_1321270[func_99() /*138*/].f_99, 0))
			{
				func_98(33);
			}
		}
		else
		{
			func_97(33);
		}
	}
	if (unk_0x4C779B19E6DDCDA2())
	{
		Global_2457713.f_351 = unk_0xE23D71F521207E8D();
	}
}

void func_97(int iParam0)
{
	if (iParam0 < 32)
	{
		if (unk_0xB56FEBC510E7E9DE(Global_2426494.f_501.f_1, iParam0))
		{
			unk_0xA5F70A8B83BDFA49(&(Global_2426494.f_501.f_1), iParam0);
		}
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_2426494.f_501.f_2, (iParam0 - 32)))
	{
		unk_0xA5F70A8B83BDFA49(&(Global_2426494.f_501.f_2), (iParam0 - 32));
	}
}

void func_98(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!unk_0xB56FEBC510E7E9DE(Global_2426494.f_501.f_1, iParam0))
		{
			unk_0x573691DB812DC8AA(&(Global_2426494.f_501.f_1), iParam0);
		}
	}
	else if (!unk_0xB56FEBC510E7E9DE(Global_2426494.f_501.f_2, (iParam0 - 32)))
	{
		unk_0x573691DB812DC8AA(&(Global_2426494.f_501.f_2), (iParam0 - 32));
	}
}

int func_99()
{
	return Global_2097152[func_62() /*10185*/].f_7698.f_2;
}

bool func_100()
{
	return Global_2426494.f_501.f_23;
}

int func_101(int iParam0, bool bParam1)
{
	if (Global_1586488[iParam0 /*408*/].f_248.f_8 > 0)
	{
		if (bParam1)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_1586488[iParam0 /*408*/].f_248.f_6, 0))
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

void func_102()
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	int iVar19;
	int iVar20;
	
	if (iLocal_4 == 0)
	{
		if (Global_262145.f_10719 == 0)
		{
			if (func_7(unk_0x8ACD527A7E574590(), 1, 1))
			{
				iVar19 = func_62();
				iVar20 = 0;
				while (iVar20 < 11)
				{
					if (Global_2097152[iVar19 /*10185*/].f_7698.f_1221[iVar20])
					{
						iVar1 = unk_0x7C1B30F338CF8777(unk_0x77F050A399DB77ED(), uVar0, Global_2097152[iVar19 /*10185*/].f_7698.f_999[iVar20 /*10*/][0], Global_2097152[iVar19 /*10185*/].f_7698.f_1110[iVar20 /*10*/][0]);
						if (iVar1 != 0)
						{
							unk_0xDD5F9A455FC902C1(iVar1, &Var2);
							if (unk_0xD5451DF6AA0E4BDB(Var2.f_0) || func_103(Var2.f_0, Var2.f_1, 1))
							{
								Global_2097152[iVar19 /*10185*/].f_7698.f_1221[iVar20] = 0;
							}
						}
					}
					iVar20++;
				}
				iLocal_4 = 1;
			}
			else
			{
				iLocal_4 = 0;
			}
		}
	}
}

int func_103(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("CU_LOW_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(4247, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(4248, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(4249, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(4250, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(4251, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(4252, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(4253, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(4254, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(4255, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(4256, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		
		case joaat("CU_REPLAY_CLOTHES"):
			return 1;
			break;
		
		case joaat("CU_BEAST_CLOTHES"):
			return 1;
			break;
		
		case joaat("CU_XMAS_CLOTHES"):
		case joaat("CU_XMAS2_CLOTHES"):
		case joaat("CU_XMAS3_CLOTHES"):
			switch (iParam1)
			{
				case -1509584627:
				case 459635659:
				case 160618534:
				case -1927335420:
				case 1994785842:
				case -1564189714:
				case -954358616:
				case -2011951504:
				case -1814354434:
				case 1809339897:
				case 14132998:
				case -1144442271:
				case 1982080792:
				case -956905284:
					if (Global_262145.f_10075)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
			}
			switch (iParam1)
			{
				case 1743008394:
				case 1084175393:
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(110, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case -1090232119:
				case 787255484:
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(111, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case -1133356123:
				case -566366372:
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(112, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case -866104415:
				case -105273769:
				case -403504438:
				case 1700527522:
				case 1394759983:
				case -2134002551:
				case 1854607364:
				case -850378710:
				case -2098091154:
				case -1331493168:
				case -564272571:
				case -1735076172:
				case 1178251777:
				case -1551324718:
				case -1862564680:
				case -1295529880:
				case -512809538:
				case -1471270027:
				case -990352183:
				case -46441130:
				case -292603126:
				case -552690679:
				case -245382997:
				case 596681996:
				case -1506301372:
				case -1711042084:
					if (Global_262145.f_10076)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
			}
			switch (iParam1)
			{
				case 1970268516:
				case 2026483804:
				case 1831101822:
				case 1411612772:
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(4333, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case 1875861023:
				case -1385031204:
				case -703154335:
				case 798340921:
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(4334, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if (Global_262145.f_7214)
			{
				return 1;
			}
			break;
		
		case joaat("CU_XMAS2_MASKS"):
		case joaat("CU_XMAS3_MASKS"):
			switch (iParam1)
			{
				case -1208373599:
				case 1656518170:
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(4335, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case -970054678:
				case -840010097:
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(3750, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if (iParam0 != joaat("CU_XMAS3_MASKS"))
			{
				if (Global_262145.f_7215)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (!Global_262145.f_10074)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("CU_VAL_CLOTHES"):
			if (unk_0x368F9074322AFD91(joaat("mpbusiness2")))
			{
				switch (iParam1)
				{
					case joaat("DLC_MP_VAL_F_JBIB2_0"):
					case joaat("DLC_MP_VAL_F_JBIB2_1"):
					case joaat("DLC_MP_VAL_F_JBIB2_2"):
					case joaat("DLC_MP_VAL_F_ACCS0_0"):
					case joaat("DLC_MP_VAL_F_ACCS0_1"):
					case joaat("DLC_MP_VAL_F_ACCS0_2"):
					case joaat("DLC_MP_VAL_F_ACCS1_0"):
					case joaat("DLC_MP_VAL_F_ACCS1_1"):
					case joaat("DLC_MP_VAL_F_ACCS1_2"):
						return 1;
						break;
					}
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_VAL_M_BERD0_0"):
				case joaat("DLC_MP_VAL_M_BERD0_1"):
				case joaat("DLC_MP_VAL_M_BERD0_2"):
				case joaat("DLC_MP_VAL_M_BERD1_0"):
				case joaat("DLC_MP_VAL_M_BERD1_1"):
				case joaat("DLC_MP_VAL_M_BERD1_2"):
				case joaat("DLC_MP_VAL_M_BERD2_0"):
				case joaat("DLC_MP_VAL_F_BERD0_0"):
				case joaat("DLC_MP_VAL_F_BERD0_1"):
				case joaat("DLC_MP_VAL_F_BERD0_2"):
				case joaat("DLC_MP_VAL_F_BERD1_0"):
				case joaat("DLC_MP_VAL_F_BERD1_1"):
				case joaat("DLC_MP_VAL_F_BERD1_2"):
				case joaat("DLC_MP_VAL_F_BERD2_0"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !Global_262145.f_9403)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if (((!Global_262145.f_4969 && !func_111(iParam1, 1, 1, 1, -1)) && !unk_0x99A214601817F926(iParam1, joaat("MULTI_DECAL"), iParam2)) && !Global_262145.f_9405)
			{
				return 1;
			}
			break;
		
		case joaat("CU_VALENTINE_TATTOOS"):
			if ((!Global_262145.f_4969 && !func_104(iParam1, -1)) && !Global_262145.f_9405)
			{
				return 1;
			}
			break;
		
		case joaat("CU_VAL2_CLOTHES"):
			if ((!Global_262145.f_10736 && !func_111(iParam1, 1, 1, 1, -1)) && !unk_0x99A214601817F926(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		
		case joaat("CU_INDI_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_IND_F_PHEAD_6_0"):
				case joaat("DLC_MP_IND_M_PHEAD_6_0"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(3594, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_IND_F_PHEAD_6_1"):
				case joaat("DLC_MP_IND_M_PHEAD_6_1"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(3595, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_IND_F_PHEAD_6_2"):
				case joaat("DLC_MP_IND_M_PHEAD_6_2"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(3596, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_IND_F_PHEAD_6_3"):
				case joaat("DLC_MP_IND_M_PHEAD_6_3"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(3597, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_IND_F_PHEAD_6_4"):
				case joaat("DLC_MP_IND_M_PHEAD_6_4"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(3598, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_IND_F_PHEAD_6_5"):
				case joaat("DLC_MP_IND_M_PHEAD_6_5"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(3599, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_IND_F_HAIR0_0"):
				case joaat("DLC_MP_IND_F_HAIR0_1"):
				case joaat("DLC_MP_IND_F_HAIR0_2"):
				case joaat("DLC_MP_IND_F_HAIR0_3"):
				case joaat("DLC_MP_IND_F_HAIR0_4"):
				case joaat("DLC_MP_IND_M_HAIR0_0"):
				case joaat("DLC_MP_IND_M_HAIR0_1"):
				case joaat("DLC_MP_IND_M_HAIR0_2"):
				case joaat("DLC_MP_IND_M_HAIR0_3"):
				case joaat("DLC_MP_IND_M_HAIR0_4"):
					if (((!Global_262145.f_6149 && !func_111(iParam1, 1, 1, 1, -1)) && !unk_0x99A214601817F926(iParam1, joaat("MULTI_DECAL"), iParam2)) && !func_80(3606, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_IND_F_BERD_0_0"):
				case joaat("DLC_MP_IND_F_BERD_0_1"):
				case joaat("DLC_MP_IND_F_BERD_1_0"):
				case joaat("DLC_MP_IND_F_BERD_1_1"):
				case joaat("DLC_MP_IND_F_BERD_2_0"):
				case joaat("DLC_MP_IND_F_BERD_2_1"):
				case joaat("DLC_MP_IND_F_BERD_3_0"):
				case joaat("DLC_MP_IND_F_BERD_3_1"):
				case joaat("DLC_MP_IND_F_BERD_4_0"):
				case joaat("DLC_MP_IND_F_BERD_4_1"):
				case joaat("DLC_MP_IND_F_BERD_5_0"):
				case joaat("DLC_MP_IND_F_BERD_5_1"):
				case joaat("DLC_MP_IND_M_BERD_0_0"):
				case joaat("DLC_MP_IND_M_BERD_0_1"):
				case joaat("DLC_MP_IND_M_BERD_1_0"):
				case joaat("DLC_MP_IND_M_BERD_1_1"):
				case joaat("DLC_MP_IND_M_BERD_2_0"):
				case joaat("DLC_MP_IND_M_BERD_2_1"):
				case joaat("DLC_MP_IND_M_BERD_3_0"):
				case joaat("DLC_MP_IND_M_BERD_3_1"):
				case joaat("DLC_MP_IND_M_BERD_4_0"):
				case joaat("DLC_MP_IND_M_BERD_4_1"):
				case joaat("DLC_MP_IND_M_BERD_5_0"):
				case joaat("DLC_MP_IND_M_BERD_5_1"):
					if (!Global_262145.f_9427 && !func_111(iParam1, 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if ((!Global_262145.f_6149 && !func_111(iParam1, 1, 1, 1, -1)) && !unk_0x99A214601817F926(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		
		case joaat("CU_INDI_TATTOOS"):
			if (!Global_262145.f_6149 && !func_104(iParam1, -1))
			{
				return 1;
			}
			break;
		
		case joaat("CU_LTS_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_LTS_M_BERD_2_0"):
				case joaat("DLC_MP_LTS_F_BERD_2_0"):
					if (!func_111(iParam1, 1, 1, 1, -1) && !func_80(3616, -1, -1))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("CU_HAL_CLOTHES"):
			if ((!Global_262145.f_9420 && !func_111(iParam1, 1, 1, 1, -1)) && !unk_0x99A214601817F926(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		
		case joaat("CU_HAL_MASKS"):
			if (!Global_262145.f_9413 && !func_111(iParam1, 1, 1, 1, -1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_104(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (func_109(iParam0) == 3741)
	{
		return 0;
	}
	uVar0 = func_106(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xB56FEBC510E7E9DE(uVar0, func_105(iVar1));
}

int func_105(int iParam0)
{
	return (iParam0 % 32);
}

var func_106(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_107(func_109(uParam0), iParam1, 0);
	return uVar0;
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466327[iParam0 /*5*/][func_108(iParam1)];
	if (unk_0xBA16CA557222A92B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_108(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_4();
		if (iVar1 > -1)
		{
			Global_2466040 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466040 = 1;
		}
	}
	return iVar0;
}

int func_109(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_110(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1028;
			break;
		
		case 1:
			return 1029;
			break;
		
		case 2:
			return 1030;
			break;
		
		case 3:
			return 1031;
			break;
		
		case 4:
			return 1032;
			break;
		
		case 5:
			return 1492;
			break;
		
		case 6:
			return 1745;
			break;
		
		case 7:
			return 1939;
			break;
		
		case 8:
			return 1940;
			break;
		
		case 9:
			return 1941;
			break;
		
		case 10:
			return 1942;
			break;
		
		case 11:
			return 1943;
			break;
		
		case 12:
			return 1944;
			break;
		
		case 13:
			return 2395;
			break;
		
		case 14:
			return 2415;
			break;
		
		case 15:
			return 2418;
			break;
		
		case 16:
			return 2421;
			break;
		
		case 17:
			return 2584;
			break;
		
		case 18:
			return 2587;
			break;
		
		case 19:
			return 2590;
			break;
	}
	return 3741;
}

int func_110(int iParam0)
{
	return (iParam0 / 32);
}

int func_111(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_69176;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_112(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_107(iVar2, iVar0, 0);
		return unk_0xB56FEBC510E7E9DE(uVar3, iVar1);
	}
	return 0;
}

bool func_112(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 3741;
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_2556124)
		{
			iVar0 = unk_0xA33D6691C1FB01EB(uParam0);
		}
		else
		{
			iVar0 = unk_0x71316FAFA3DA4806(uParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xA33D6691C1FB01EB(uParam0);
	}
	else
	{
		iVar0 = unk_0x71316FAFA3DA4806(uParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1748;
					break;
				
				case 1:
					*uParam2 = 1749;
					break;
				
				case 2:
					*uParam2 = 1750;
					break;
				
				case 3:
					*uParam2 = 1751;
					break;
				
				case 4:
					*uParam2 = 1752;
					break;
				
				case 5:
					*uParam2 = 1753;
					break;
				
				case 6:
					*uParam2 = 1760;
					break;
				
				case 7:
					*uParam2 = 1761;
					break;
				
				case 8:
					*uParam2 = 1762;
					break;
				
				case 9:
					*uParam2 = 1763;
					break;
				
				case 10:
					*uParam2 = 1764;
					break;
				
				case 11:
					*uParam2 = 1765;
					break;
				
				case 12:
					*uParam2 = 1766;
					break;
				
				case 13:
					*uParam2 = 1774;
					break;
				
				case 14:
					*uParam2 = 1775;
					break;
				
				case 15:
					*uParam2 = 1876;
					break;
				
				case 16:
					*uParam2 = 1877;
					break;
				
				case 17:
					*uParam2 = 1908;
					break;
				
				case 18:
					*uParam2 = 1922;
					break;
				
				case 19:
					*uParam2 = 1923;
					break;
				
				case 20:
					*uParam2 = 1924;
					break;
				
				case 21:
					*uParam2 = 1925;
					break;
				
				case 22:
					*uParam2 = 1926;
					break;
				
				case 23:
					*uParam2 = 2030;
					break;
				
				case 24:
					*uParam2 = 2031;
					break;
				
				case 25:
					*uParam2 = 2057;
					break;
				
				case 26:
					*uParam2 = 2058;
					break;
				
				case 27:
					*uParam2 = 2059;
					break;
				
				case 28:
					*uParam2 = 2060;
					break;
				
				case 29:
					*uParam2 = 2061;
					break;
				
				case 30:
					*uParam2 = 2062;
					break;
				
				case 31:
					*uParam2 = 2063;
					break;
				
				case 32:
					*uParam2 = 2064;
					break;
				
				case 33:
					*uParam2 = 2065;
					break;
				
				case 34:
					*uParam2 = 2066;
					break;
				
				case 35:
					*uParam2 = 2313;
					break;
				
				case 36:
					*uParam2 = 2314;
					break;
				
				case 37:
					*uParam2 = 2362;
					break;
				
				case 38:
					*uParam2 = 2363;
					break;
				
				case 39:
					*uParam2 = 2364;
					break;
				
				case 40:
					*uParam2 = 2365;
					break;
				
				case 41:
					*uParam2 = 2424;
					break;
				
				case 42:
					*uParam2 = 2425;
					break;
				
				case 43:
					*uParam2 = 2426;
					break;
				
				case 44:
					*uParam2 = 2427;
					break;
				
				case 45:
					*uParam2 = 2428;
					break;
				
				case 46:
					*uParam2 = 2429;
					break;
				
				case 47:
					*uParam2 = 2430;
					break;
				
				case 48:
					*uParam2 = 2431;
					break;
				
				case 49:
					*uParam2 = 2432;
					break;
				
				case 50:
					*uParam2 = 2433;
					break;
				
				case 51:
					*uParam2 = 2562;
					break;
				
				case 52:
					*uParam2 = 2563;
					break;
				
				case 53:
					*uParam2 = 2564;
					break;
				
				case 54:
					*uParam2 = 2565;
					break;
				
				case 55:
					*uParam2 = 2566;
					break;
				
				case 56:
					*uParam2 = 2567;
					break;
				
				case 57:
					*uParam2 = 2568;
					break;
				
				case 58:
					*uParam2 = 2569;
					break;
				
				case 59:
					*uParam2 = 2570;
					break;
				
				case 60:
					*uParam2 = 2571;
					break;
				
				case 61:
					*uParam2 = 2572;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1754;
					break;
				
				case 1:
					*uParam2 = 1755;
					break;
				
				case 2:
					*uParam2 = 1756;
					break;
				
				case 3:
					*uParam2 = 1757;
					break;
				
				case 4:
					*uParam2 = 1758;
					break;
				
				case 5:
					*uParam2 = 1759;
					break;
				
				case 6:
					*uParam2 = 1767;
					break;
				
				case 7:
					*uParam2 = 1768;
					break;
				
				case 8:
					*uParam2 = 1769;
					break;
				
				case 9:
					*uParam2 = 1770;
					break;
				
				case 10:
					*uParam2 = 1771;
					break;
				
				case 11:
					*uParam2 = 1772;
					break;
				
				case 12:
					*uParam2 = 1773;
					break;
				
				case 13:
					*uParam2 = 1776;
					break;
				
				case 14:
					*uParam2 = 1777;
					break;
				
				case 15:
					*uParam2 = 1878;
					break;
				
				case 16:
					*uParam2 = 1879;
					break;
				
				case 17:
					*uParam2 = 1909;
					break;
				
				case 18:
					*uParam2 = 1927;
					break;
				
				case 19:
					*uParam2 = 1928;
					break;
				
				case 20:
					*uParam2 = 1929;
					break;
				
				case 21:
					*uParam2 = 1930;
					break;
				
				case 22:
					*uParam2 = 1931;
					break;
				
				case 23:
					*uParam2 = 2032;
					break;
				
				case 24:
					*uParam2 = 2033;
					break;
				
				case 25:
					*uParam2 = 2067;
					break;
				
				case 26:
					*uParam2 = 2068;
					break;
				
				case 27:
					*uParam2 = 2069;
					break;
				
				case 28:
					*uParam2 = 2070;
					break;
				
				case 29:
					*uParam2 = 2071;
					break;
				
				case 30:
					*uParam2 = 2072;
					break;
				
				case 31:
					*uParam2 = 2073;
					break;
				
				case 32:
					*uParam2 = 2074;
					break;
				
				case 33:
					*uParam2 = 2075;
					break;
				
				case 34:
					*uParam2 = 2076;
					break;
				
				case 35:
					*uParam2 = 2315;
					break;
				
				case 36:
					*uParam2 = 2316;
					break;
				
				case 37:
					*uParam2 = 2366;
					break;
				
				case 38:
					*uParam2 = 2367;
					break;
				
				case 39:
					*uParam2 = 2368;
					break;
				
				case 40:
					*uParam2 = 2369;
					break;
				
				case 41:
					*uParam2 = 2434;
					break;
				
				case 42:
					*uParam2 = 2435;
					break;
				
				case 43:
					*uParam2 = 2436;
					break;
				
				case 44:
					*uParam2 = 2437;
					break;
				
				case 45:
					*uParam2 = 2438;
					break;
				
				case 46:
					*uParam2 = 2439;
					break;
				
				case 47:
					*uParam2 = 2440;
					break;
				
				case 48:
					*uParam2 = 2441;
					break;
				
				case 49:
					*uParam2 = 2442;
					break;
				
				case 50:
					*uParam2 = 2443;
					break;
				
				case 51:
					*uParam2 = 2573;
					break;
				
				case 52:
					*uParam2 = 2574;
					break;
				
				case 53:
					*uParam2 = 2575;
					break;
				
				case 54:
					*uParam2 = 2576;
					break;
				
				case 55:
					*uParam2 = 2577;
					break;
				
				case 56:
					*uParam2 = 2578;
					break;
				
				case 57:
					*uParam2 = 2579;
					break;
				
				case 58:
					*uParam2 = 2580;
					break;
				
				case 59:
					*uParam2 = 2581;
					break;
				
				case 60:
					*uParam2 = 2582;
					break;
				
				case 61:
					*uParam2 = 2583;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 3741;
}

void func_113()
{
	if (unk_0x8ACD527A7E574590() != -1 && Global_1608060[unk_0x8ACD527A7E574590() /*106*/].f_8.f_27 == 153)
	{
		if (func_119())
		{
			if (func_118())
			{
				if (!unk_0x8C62C28475C0D105(unk_0x8ACD527A7E574590()))
				{
					if (unk_0x2CC731F9E664299E() && !unk_0x329E4482E654B910())
					{
						if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
						{
							unk_0xB28207B96952D994(unk_0x77F050A399DB77ED());
						}
					}
				}
			}
		}
		if (Global_2416794[unk_0x8ACD527A7E574590() /*303*/].f_220 != 99 && func_117(1))
		{
			if (func_45(&uLocal_5, 10000, 0))
			{
				func_116(1);
				func_114();
			}
		}
	}
	else
	{
		func_44(&uLocal_5);
	}
}

void func_114()
{
	func_115(Global_2426494.f_698, -1, 0);
}

void func_115(var uParam0, int iParam1, bool bParam2)
{
	Global_2426494.f_699 = uParam0;
	Global_2426494.f_700 = iParam1;
	if (bParam2)
	{
		Global_2426494.f_698 = uParam0;
	}
	if ((Global_2426494.f_699 == 1 || Global_2426494.f_699 == 5) || Global_2426494.f_699 == 4)
	{
		unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 115, 1);
	}
}

void func_116(int iParam0)
{
	Global_2404919.f_1455 = iParam0;
}

bool func_117(int iParam0)
{
	return Global_2426494.f_2138[0 /*70*/].f_1 == iParam0;
}

bool func_118()
{
	return unk_0xB56FEBC510E7E9DE(Global_2457713.f_4646, 0);
}

bool func_119()
{
	return unk_0xB56FEBC510E7E9DE(Global_2457713.f_4646, 1);
}

void func_120(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x978803CE12B5FCBA(sParam2);
	unk_0x0E477F7C472602E8(sParam3);
	unk_0x1AC4FC30A9B7577A(fParam0, fParam1, 0);
}

void func_121()
{
	if (!bLocal_2)
	{
		if (unk_0x4F297F09162EFB5D())
		{
			switch (iLocal_3)
			{
				case 0:
					if (unk_0x618071F6827C232E(2, 189))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x618071F6827C232E(2, 190))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 2:
					if (unk_0x618071F6827C232E(2, 189))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 3:
					if (unk_0x618071F6827C232E(2, 190))
					{
						iLocal_3++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				
				case 4:
					if (unk_0x618071F6827C232E(2, 188))
					{
						bLocal_2 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_3 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0x4F297F09162EFB5D())
	{
		switch (iLocal_3)
		{
			case 0:
				if (unk_0x618071F6827C232E(2, 188))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x618071F6827C232E(2, 190))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 2:
				if (unk_0x618071F6827C232E(2, 189))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 3:
				if (unk_0x618071F6827C232E(2, 190))
				{
					iLocal_3++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			
			case 4:
				if (unk_0x618071F6827C232E(2, 189))
				{
					bLocal_2 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_3 = 0;
				}
				break;
			}
	}
}

bool func_122()
{
	return unk_0x368F9074322AFD91(-1762644250);
}

