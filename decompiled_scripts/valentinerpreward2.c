#region Local Var
	char* sLocal_0 = NULL;
	bool bLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	struct<7> Local_12[5];
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	struct<5> Local_59 = { -1, 0, 0, -1, -1 } ;
	int iLocal_64 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.34.21";
	iLocal_11 = -1;
	iLocal_58 = -1;
	unk_0xF160EBCA8FFA0E2A(0);
	unk_0x60F2C6DC397A6833();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1318847 = unk_0x70ABFF261710305D(sLocal_0);
	iVar0 = unk_0xA0F74982C6AAA9D4() + 10000;
	while (unk_0xA0F74982C6AAA9D4() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_99())
		{
			func_98();
			if (bLocal_1)
			{
				unk_0xFFA0132BAEE84558(0f, 0.23f);
				unk_0x09FBFA08412B6B1C(255, 255, 255, 255);
				func_97(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (unk_0x0E063DDE8855EC52())
		{
			func_90();
			func_89();
			func_85();
			func_82();
			func_72();
			func_62();
			func_46();
			func_29();
			func_28();
			func_26();
			func_24();
			func_22();
			func_15();
			func_11();
			func_5();
			func_1();
		}
		else
		{
			if (iLocal_3 == 1)
			{
				iLocal_3 = 0;
			}
			if (iLocal_5 == 1)
			{
				iLocal_5 = 0;
			}
			if (iLocal_4 == 1)
			{
				iLocal_4 = 0;
			}
			if (iLocal_64)
			{
				iLocal_64 = 0;
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x7C3AA2D27E16E2AD();
}

void func_1()
{
	int iVar0;
	
	if (!unk_0x9404B1BCD022816B())
	{
		if (iLocal_4 == 0)
		{
			if (Global_1315937 > 6)
			{
				if ((((((unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_musket"), 0) && !unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_pumpshotgun"), 0)) && !unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_sawnoffshotgun"), 0)) && !unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_assaultshotgun"), 0)) && !unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_bullpupshotgun"), 0)) && !unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_heavyshotgun"), 0)) && !unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_dbshotgun"), 0))
				{
					if (unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_musket"), 0))
					{
						iVar0 = unk_0xB88FDA5AF9B0C71D(unk_0x27D769C59BC9D030(), joaat("weapon_musket"));
						if (iVar0 == 0)
						{
							iVar0 = func_2(3693, -1, 0);
							unk_0x55F07E558111D23E(unk_0x27D769C59BC9D030(), unk_0x97769411F27FFE3A(unk_0x27D769C59BC9D030(), joaat("weapon_musket")), iVar0);
						}
						iLocal_4 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_4 == 1)
	{
		iLocal_4 = 0;
	}
}

int func_2(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2469339[iParam0 /*5*/][func_3(iParam1)];
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_3(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_4();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

int func_4()
{
	return Global_1312747;
}

void func_5()
{
	var uVar0;
	var uVar22;
	int iVar23;
	int iVar24;
	
	iVar24 = 0;
	iVar24 = 0;
	while (iVar24 < unk_0xDDC2E48CCBA23C1D(1))
	{
		iVar23 = unk_0x00D18151DCE3C65E(1, iVar24);
		switch (iVar23)
		{
			case 165:
				if (unk_0xB03A3CBE4F7737B0(1, iVar24, &uVar0, 22))
				{
					if (Global_91330.f_380 > 0)
					{
						func_6(Global_91330.f_380);
					}
				}
				break;
			
			case 222:
				if (unk_0xB03A3CBE4F7737B0(1, iVar24, &uVar22, 1))
				{
					if (Global_91330.f_380 > 0)
					{
						func_6(Global_91330.f_380);
					}
				}
				break;
		}
		iVar24++;
	}
}

void func_6(int iParam0)
{
	func_7(iParam0, 9, 1);
}

void func_7(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x26545538B51562AD(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x0E063DDE8855EC52())
	{
		if (func_10() == 0)
		{
			iVar0 = func_2(func_9(iParam0), -1, 0);
			unk_0x26545538B51562AD(&iVar0, iParam1);
			func_8(func_9(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		unk_0x26545538B51562AD(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_8(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_3(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
	}
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

int func_10()
{
	return Global_25120;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (Global_25120 == 0)
	{
		if (!iLocal_64)
		{
			iVar0 = func_14();
			if (iVar0 > 0)
			{
				iVar1 = func_12(iVar0);
				if (iVar1 != 0)
				{
					unk_0x7B89588C50DFBA50(iVar1);
					unk_0x6F2FF1C23D3D4535(-101, 0, 0);
					iLocal_64 = 1;
				}
			}
			else
			{
				iLocal_64 = 1;
			}
		}
	}
	else if (iLocal_64)
	{
		iLocal_64 = 0;
	}
}

var func_12(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 1:
			uVar0 = func_13("fm_race_creator");
			break;
		
		case 2:
			uVar0 = func_13("fm_deathmatch_creator");
			break;
		
		case 3:
			uVar0 = func_13("fm_lts_creator");
			break;
		
		case 4:
			uVar0 = func_13("fm_capture_creator");
			break;
	}
	return uVar0;
}

var func_13(char* sParam0)
{
	var uVar0;
	bool bVar1;
	
	unk_0x40535A620A8F49F6();
	while (!bVar1)
	{
		uVar0 = unk_0x9CC42B25DD74DD86();
		if (unk_0xC1C5B83BB6719C6C(unk_0xBAF779CD297E4913(uVar0), sParam0))
		{
			bVar1 = true;
		}
	}
	return uVar0;
}

int func_14()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xD32535FA4397160F(joaat("fm_race_creator")) != 0)
	{
		iVar0 = 1;
	}
	else if (unk_0xD32535FA4397160F(joaat("fm_deathmatch_creator")) != 0)
	{
		iVar0 = 2;
	}
	else if (unk_0xD32535FA4397160F(joaat("fm_lts_creator")) != 0)
	{
		iVar0 = 3;
	}
	else if (unk_0xD32535FA4397160F(joaat("fm_capture_creator")) != 0)
	{
		iVar0 = 4;
	}
	return iVar0;
}

void func_15()
{
	if (func_20(unk_0x4D29100D094E5511()) == 170)
	{
		if (!func_19(unk_0x4D29100D094E5511()))
		{
			if (!func_18(unk_0x4D29100D094E5511()) && !func_17(unk_0x4D29100D094E5511(), 21))
			{
				func_16(0);
			}
		}
		else
		{
			func_16(1);
		}
	}
}

void func_16(int iParam0)
{
	if (Global_978143 != -1 && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

bool func_17(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

int func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_1610316[iVar0 /*174*/].f_1, 7);
	}
	return 0;
}

bool func_19(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_1610316[iParam0 /*174*/].f_10.f_4, 20);
}

int func_20(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

int func_21(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

void func_22()
{
	if (iLocal_53 == 0)
	{
		if ((Global_68058 && func_23(unk_0x4D29100D094E5511())) && Global_1715399 == 0)
		{
			Global_1715399 = 1;
			iLocal_53 = 1;
		}
	}
	else if (Global_68058 == 0)
	{
		Global_1715399 = 0;
		iLocal_53 = 0;
	}
}

int func_23(int iParam0)
{
	if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
	{
		if (Global_2418472[iParam0 /*313*/].f_305.f_1 >= 0 && Global_2418472[iParam0 /*313*/].f_305.f_1 <= 21)
		{
			return 1;
		}
	}
	return 0;
}

void func_24()
{
	func_25(3165);
	func_25(3166);
	func_25(3167);
	iLocal_5 = 1;
}

void func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x9CC4C10F8D665832();
	if (func_2(iParam0, -1, 0) > 0)
	{
		if (func_2(iParam0, -1, 0) > iVar0)
		{
			iVar1 = (func_2(iParam0, -1, 0) - iVar0);
			if (iVar1 > 1000000)
			{
				iVar1 = Global_262145.f_10545;
			}
			else
			{
				iVar1 *= 1000;
			}
			func_8(iParam0, iVar1, -1, 1);
		}
		else
		{
			func_8(iParam0, 0, -1, 1);
		}
	}
}

void func_26()
{
	int iVar0;
	
	if (unk_0xD32535FA4397160F(joaat("fm_mission_controller")) > 0 && func_27(Global_1617379.f_88495))
	{
		if (!iLocal_52)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (unk_0x27C9C05A6B4E58D2(unk_0x6EED86A16F7EA8F2(iVar0)))
				{
					unk_0x9142BC6FF567DB85(unk_0x6EED86A16F7EA8F2(iVar0), joaat("pickup_armour_standard"), 1);
				}
				iVar0++;
			}
			iLocal_52 = 1;
		}
	}
	else if (iLocal_52)
	{
		iLocal_52 = 0;
	}
}

bool func_27(int iParam0)
{
	return iParam0 == 1;
}

void func_28()
{
	if (!func_21(unk_0x4D29100D094E5511(), 0) || func_20(unk_0x4D29100D094E5511()) != 167)
	{
		return;
	}
	if (Global_1728515.f_13 > 0 && !unk_0xF426A5DE932B3BEE(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_305, 1))
	{
		if (!unk_0xCBB243DDC0D132D1())
		{
			if (!iLocal_7)
			{
				iLocal_6 = Global_2443496;
				iLocal_7 = 1;
				Global_2443496 = 1;
			}
		}
		else if (iLocal_7)
		{
			iLocal_7 = 0;
			Global_2443496 = iLocal_6;
			iLocal_6 = 0;
		}
	}
	else if (iLocal_7)
	{
		iLocal_7 = 0;
		Global_2443496 = iLocal_6;
		iLocal_6 = 0;
	}
}

void func_29()
{
	if (Local_59.f_4 == -1)
	{
		Local_59.f_4 = Global_1728678;
		Local_59.f_1 = Global_1728816;
		Local_59.f_0 = unk_0x9CC4C10F8D665832();
		Local_59.f_3 = 1;
	}
	else if (func_20(unk_0x4D29100D094E5511()) == 167)
	{
		if (Local_59.f_0 > -1)
		{
			Local_59.f_0 = -1;
		}
		Local_59.f_2 = 1;
		Local_59.f_3 = 2;
	}
	else if (Local_59.f_2)
	{
		if (Local_59.f_4 != Global_1728678)
		{
			Local_59.f_4 = Global_1728678;
			Local_59.f_1 = Global_1728816;
			Local_59.f_2 = 0;
			Local_59.f_0 = unk_0x9CC4C10F8D665832();
		}
		Local_59.f_3 = 3;
	}
	else if (Local_59.f_4 != Global_1728678)
	{
		if ((unk_0x9CC4C10F8D665832() - Local_59.f_0) < Global_262145.f_12480)
		{
			if (!Local_59.f_1 && func_20(unk_0x4D29100D094E5511()) != 167)
			{
				Global_1728678 = Local_59.f_4;
				Global_1728816 = Local_59.f_1;
				Global_1332276 = (Global_1332276 - 1);
				if (Global_1332276 < 0)
				{
					Global_1332276 = 6;
				}
			}
			else if (Local_59.f_1)
			{
				Local_59.f_4 = Global_1728678;
				Local_59.f_1 = Global_1728816;
			}
		}
		else
		{
			Local_59.f_4 = Global_1728678;
			Local_59.f_1 = Global_1728816;
		}
		Local_59.f_3 = 4;
	}
	else if ((unk_0x9CC4C10F8D665832() - Local_59.f_0) >= Global_262145.f_12480)
	{
		Local_59.f_0 = unk_0x9CC4C10F8D665832();
		func_30();
		Local_59.f_4 = Global_1728678;
		Local_59.f_1 = Global_1728816;
		Local_59.f_3 = 5;
	}
	else
	{
		Local_59.f_3 = 6;
	}
}

void func_30()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar1 = 11;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	if (Global_1332276 == -1)
	{
		func_45();
		Global_1332276 = 0;
	}
	while (iVar3 < iVar1)
	{
		iVar2 = (iVar2 + func_43(iVar3));
		iVar3++;
	}
	iVar4 = unk_0x3A5708FEE1B560A9(0, iVar2 + 1);
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		if (iVar4 < func_43(iVar3))
		{
			iVar0 = iVar3;
			iVar3 = (iVar1 - 1);
		}
		iVar4 = (iVar4 - func_43(iVar3));
		iVar3++;
	}
	func_42(iVar0);
	iVar5 = unk_0x3A5708FEE1B560A9(1, 101);
	iVar6 = unk_0xF2DB717A73826179((Global_262145.f_12482 * 100f));
	if ((((iVar5 <= iVar6 && func_41()) && func_40(iVar0)) && !func_38(func_39(iVar0))) && func_32() < 6)
	{
		Global_1728816 = 1;
		func_31(54);
	}
	else
	{
		Global_1728816 = 0;
	}
	Global_1728678 = iVar0;
}

void func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x26545538B51562AD(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_32()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		iVar2 = func_37(iVar1);
		if (iVar2 != 0)
		{
			iVar0 = (iVar0 + func_33(iVar2));
		}
		iVar1++;
	}
	return iVar0;
}

int func_33(int iParam0)
{
	int iVar0;
	
	if (func_36(iParam0))
	{
		iVar0 = func_34(func_35(iParam0));
		return func_2(iVar0, -1, 0);
	}
	return 0;
}

int func_34(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3226;
	}
	else if (iParam0 == 1)
	{
		return 3227;
	}
	else if (iParam0 == 2)
	{
		return 3228;
	}
	else if (iParam0 == 3)
	{
		return 3229;
	}
	else if (iParam0 == 4)
	{
		return 3230;
	}
	return 3226;
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (func_36(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_36(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_37(int iParam0)
{
	if (Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_68[iParam0 /*2*/] != 0)
	{
		return Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_68[iParam0 /*2*/];
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1728679[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0)
{
	if (iParam0 == 2)
	{
		return 1;
	}
	else if (iParam0 == 4)
	{
		return 2;
	}
	else if (iParam0 == 6)
	{
		return 3;
	}
	else if (iParam0 == 7)
	{
		return 4;
	}
	else if (iParam0 == 8)
	{
		return 5;
	}
	else if (iParam0 == 9)
	{
		return 6;
	}
	return 0;
}

int func_40(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 4) || iParam0 == 6) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_41()
{
	return Global_2493043[func_4()] >= Global_262145.f_12481;
}

void func_42(int iParam0)
{
	Global_1332277[Global_1332276] = iParam0;
	Global_1332276++;
	if (Global_1332276 >= 7)
	{
		Global_1332276 = 0;
	}
}

int func_43(int iParam0)
{
	if (func_44(iParam0))
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 11;
	}
	else if (iParam0 == 1)
	{
		return 11;
	}
	else if (iParam0 == 2)
	{
		return 11;
	}
	else if (iParam0 == 3)
	{
		return 11;
	}
	else if (iParam0 == 4)
	{
		return 11;
	}
	else if (iParam0 == 5)
	{
		return 11;
	}
	else if (iParam0 == 6)
	{
		return 11;
	}
	else if (iParam0 == 7)
	{
		return 11;
	}
	else if (iParam0 == 8)
	{
		return 11;
	}
	else if (iParam0 == 9)
	{
		return 11;
	}
	else if (iParam0 == 10)
	{
		return 11;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1332277[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_1332277[iVar0] = -1;
		iVar0++;
	}
}

void func_46()
{
	if (func_58(unk_0x4D29100D094E5511()))
	{
		if (!iLocal_56)
		{
			iLocal_56 = 1;
		}
		if (func_54(unk_0x4D29100D094E5511()))
		{
			if ((unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), 1088.341f, -3101.304f, -38.70055f, 1f, 1f, 0.9f, 0, 1, 1) || unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), 1048.948f, -3100.666f, -38.70009f, 1f, 1f, 0.9f, 0, 1, 1)) || unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), 994.6483f, -3100.016f, -38.70055f, 1f, 1f, 0.9f, 0, 1, 1))
			{
				if (!Global_1715861)
				{
					Global_1715861 = 1;
				}
			}
			else if (Global_1715861)
			{
				Global_1715861 = 0;
			}
		}
		else if (func_52(unk_0x4D29100D094E5511()))
		{
			if (Global_2443110 == 6 && !Global_25391 >= 3)
			{
				unk_0xCFF471245AFEEDCE(2, 201, 1);
				if (!unk_0xE1834019C3CC3C33(2) && !unk_0x8C819425CC4D7DD4(unk_0x27D769C59BC9D030(), -1322051853))
				{
					if (!iLocal_57)
					{
						if (func_51())
						{
							iLocal_57 = 1;
						}
					}
					if (iLocal_57)
					{
						if (func_50("MPOFSEAT_PCEXIT"))
						{
							unk_0x5BD150B52CE8D356(1);
							func_48(&iLocal_58);
						}
						if (iLocal_58 == -1)
						{
							func_47(&iLocal_58, 5, "MPOFSEAT_EXIT", 0, 0, 0, 0);
						}
					}
				}
				else if (unk_0xE1834019C3CC3C33(2) && !unk_0x8C819425CC4D7DD4(unk_0x27D769C59BC9D030(), -1322051853))
				{
					if (!iLocal_57)
					{
						if (func_51())
						{
							iLocal_57 = 1;
						}
					}
					if (iLocal_57)
					{
						if (func_50("MPOFSEAT_EXIT"))
						{
							unk_0x5BD150B52CE8D356(1);
							func_48(&iLocal_58);
						}
						if (iLocal_58 == -1)
						{
							func_47(&iLocal_58, 5, "MPOFSEAT_PCEXIT", 0, 0, 0, 0);
						}
					}
				}
				else
				{
					unk_0x5BD150B52CE8D356(1);
					func_48(&iLocal_58);
				}
			}
			else
			{
				func_48(&iLocal_58);
				iLocal_57 = 0;
			}
		}
	}
	else if (iLocal_56)
	{
		iLocal_56 = 0;
		iLocal_57 = 0;
		if (Global_1715861)
		{
			Global_1715861 = 0;
		}
		if (func_50("MPOFSEAT_EXIT") || func_50("MPOFSEAT_PCEXIT"))
		{
			unk_0x5BD150B52CE8D356(1);
			func_48(&iLocal_58);
		}
	}
}

void func_47(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xD32535FA4397160F(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x5D293E404CA20AA5())
	{
		if (!*iParam0 == -1)
		{
			func_48(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/] = 1;
			Global_36411[iVar0 /*32*/].f_1 = Global_36612;
			Global_36612++;
			Global_36411[iVar0 /*32*/].f_4 = 0;
			Global_36411[iVar0 /*32*/].f_29 = 0;
			Global_36411[iVar0 /*32*/].f_5 = 0;
			Global_36411[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36411[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36411[iVar0 /*32*/].f_6 = iParam3;
			Global_36411[iVar0 /*32*/].f_31 = unk_0xF42B3EF31F918DB2();
			Global_36411[iVar0 /*32*/].f_7 = 0;
			Global_36411[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x75CB9E30BA492FF0(sParam4))
			{
				Global_36411[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36411[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36411[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36411[iVar0 /*32*/].f_12 = 0;
				Global_36411[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36411[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_48(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_49(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_50(char* sParam0)
{
	unk_0x66F753896FC4EEC3(sParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

bool func_51()
{
	if (unk_0xE1834019C3CC3C33(2))
	{
		return (((((func_50("WHOUSEINPUTTRPC") || func_50("MP_OFF_LAP_PC")) || func_50("OFF_COMP_MIS")) || func_50("SECINPUTTREGPC")) || func_50("OFF_COMP_BDY")) || func_50("OFFLAPTOP"));
	}
	return (((((func_50("WHOUSEINPUTTRIG") || func_50("MP_OFF_LAP_1")) || func_50("OFF_COMP_MIS")) || func_50("SECINPUTTREG")) || func_50("OFF_COMP_BDY")) || func_50("OFFLAPTOPPC"));
}

int func_52(int iParam0)
{
	if (func_53(Global_1587523[iParam0 /*444*/].f_250.f_9))
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_54(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_56(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_55(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_55(int iParam0)
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

int func_56(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x27C9C05A6B4E58D2(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2DB75A8F096AB1F1(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428492.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_57()
{
	return -1;
}

bool func_58(int iParam0)
{
	return func_59(iParam0) > 0;
}

int func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_56(iParam0, 0, 1))
	{
		if (Global_1610316[iParam0 /*174*/].f_10.f_117 != -1)
		{
			iVar0 = Global_1610316[iParam0 /*174*/].f_10.f_117;
		}
		else
		{
			iVar0 = func_61(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = ((iVar0 + func_60()) - unk_0x9CC4C10F8D665832());
		return iVar1;
	}
	return -1;
}

int func_60()
{
	return Global_262145.f_12331;
}

int func_61(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_62()
{
	var uVar0;
	
	uVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
	if (((((unk_0xF426A5DE932B3BEE(Global_91330.f_1300[39], 6) || unk_0xF426A5DE932B3BEE(Global_91330.f_1300[40], 6)) || unk_0xF426A5DE932B3BEE(Global_91330.f_1300[41], 6)) || unk_0xF426A5DE932B3BEE(Global_91330.f_1300[42], 6)) || unk_0xF426A5DE932B3BEE(Global_91330.f_1300[43], 6)) || unk_0xF426A5DE932B3BEE(Global_91330.f_1300[44], 6))
	{
		if (!func_71(uVar0))
		{
			if (!func_70(Global_2460486.f_275))
			{
				if (!func_69(Global_2460486.f_275, 1, 0, 0, 0, 0))
				{
					unk_0x26545538B51562AD(&(Global_91330.f_1445), 4);
					bLocal_55 = true;
				}
				else
				{
					func_64(0, 0, 0, 0);
					func_63(7);
				}
			}
			else if (unk_0xD2CFFE76B625AE55(Global_2460486.f_275))
			{
				if (!func_69(Global_2460486.f_275, 1, 0, 0, 0, 0))
				{
					unk_0x26545538B51562AD(&(Global_91330.f_1445), 4);
					bLocal_55 = true;
				}
				else
				{
					func_64(0, 0, 0, 0);
					func_63(7);
				}
			}
		}
	}
	else
	{
		bLocal_55 = false;
	}
	if (bLocal_55)
	{
		if (unk_0xD2CFFE76B625AE55(uVar0) && unk_0x0B4DDB992C7BCF57(uVar0, 0))
		{
			if (unk_0x90F7F7FF57758DF4("Not_Allow_As_Saved_Veh", 3))
			{
				if (!unk_0xE8E046017EE675F2(uVar0, "Not_Allow_As_Saved_Veh"))
				{
					unk_0xE259158ED7E55524(uVar0, "Not_Allow_As_Saved_Veh", unk_0x70ABFF261710305D(unk_0xD358A441FAC2240C(unk_0x4D29100D094E5511())));
					iLocal_54 = 1;
				}
			}
		}
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_91330.f_1445), 4);
		if (iLocal_54)
		{
			if (unk_0xD2CFFE76B625AE55(uVar0) && unk_0x0B4DDB992C7BCF57(uVar0, 0))
			{
				if (unk_0x90F7F7FF57758DF4("Not_Allow_As_Saved_Veh", 3))
				{
					if (unk_0xE8E046017EE675F2(uVar0, "Not_Allow_As_Saved_Veh"))
					{
						unk_0xEF7D3CA676ABA716(uVar0, "Not_Allow_As_Saved_Veh");
						iLocal_54 = 0;
					}
				}
			}
		}
	}
}

void func_63(int iParam0)
{
	Global_2435528.f_4093.f_228[iParam0] = 0;
}

void func_64(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam0)
	{
		func_68(2);
	}
	else
	{
		func_68(1);
	}
	if (bParam1)
	{
		func_68(11);
	}
	if (bParam2)
	{
		func_68(32);
		if (bParam3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_1321273[func_66() /*138*/].f_99, 0))
			{
				func_68(33);
			}
		}
		else
		{
			func_65(33);
		}
	}
	if (unk_0x0E063DDE8855EC52())
	{
		Global_2460486.f_353 = unk_0x20D394965B47B01A();
	}
}

void func_65(int iParam0)
{
	if (iParam0 < 32)
	{
		if (unk_0xF426A5DE932B3BEE(Global_2428492.f_501.f_1, iParam0))
		{
			unk_0xF17F4B0641AB2DE1(&(Global_2428492.f_501.f_1), iParam0);
		}
	}
	else if (unk_0xF426A5DE932B3BEE(Global_2428492.f_501.f_2, (iParam0 - 32)))
	{
		unk_0xF17F4B0641AB2DE1(&(Global_2428492.f_501.f_2), (iParam0 - 32));
	}
}

int func_66()
{
	return Global_2097152[func_67() /*10375*/].f_7704.f_2;
}

int func_67()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_68(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!unk_0xF426A5DE932B3BEE(Global_2428492.f_501.f_1, iParam0))
		{
			unk_0x26545538B51562AD(&(Global_2428492.f_501.f_1), iParam0);
		}
	}
	else if (!unk_0xF426A5DE932B3BEE(Global_2428492.f_501.f_2, (iParam0 - 32)))
	{
		unk_0x26545538B51562AD(&(Global_2428492.f_501.f_2), (iParam0 - 32));
	}
}

int func_69(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x1AEADBB0240E0B51(uParam0) + 1;
	if (iParam4 || !unk_0x2006A8C1BA2AFE80(uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x32C6487B93CCAF4F(uParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0x9297C590C99228DC(uParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0x27D769C59BC9D030())
				{
				}
				else if (bParam2)
				{
					if (!unk_0xE4F7206742848BAF(iVar2))
					{
						if (unk_0x30D6008994E431E8(iVar2))
						{
							if (unk_0xC6861DC0B749762A(unk_0x881548CC6D5B749B(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else
				{
					iVar3 = unk_0x9297C590C99228DC(uParam0, (iVar0 - 1));
					if (!unk_0xE4F7206742848BAF(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_70(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (unk_0x2006A8C1BA2AFE80(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x0B4DDB992C7BCF57(uParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_71(var uParam0)
{
	if (Global_69489)
	{
		if (unk_0xE8E046017EE675F2(uParam0, "Player_Vehicle"))
		{
			if (unk_0x6140AB07098540A5(uParam0, "Player_Vehicle") == unk_0x2FC415A5C4BD70D3(unk_0x4D29100D094E5511()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_72()
{
	int iVar0;
	struct<7> Var1;
	int iVar8;
	
	if (unk_0xD32535FA4397160F(joaat("fm_mission_controller")) > 0 && func_81(Global_1617379.f_88495))
	{
		func_79();
		if (unk_0x34BC92228D132865("fm_mission_controller", 0, 0) == func_57())
		{
			iLocal_51 = 1;
		}
		if (iLocal_51 == 1 && unk_0x34BC92228D132865("fm_mission_controller", 0, 0) != func_57())
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				if (Local_12[iVar0 /*7*/] == 125)
				{
					if (unk_0x34BC92228D132865("fm_mission_controller", 0, 0) == unk_0x4D29100D094E5511())
					{
						iVar8 = func_78(1);
						if (!iVar8 == 0)
						{
							unk_0xCE8ECD07286D394D(1, &(Local_12[iVar0 /*7*/]), 7, iVar8);
						}
					}
					Local_12[iVar0 /*7*/] = { Var1 };
				}
				iVar0++;
			}
			func_77(&uLocal_49);
			iLocal_48 = 0;
			iLocal_51 = 0;
		}
		if (func_76(&uLocal_49))
		{
			if (func_74(&uLocal_49, 10000, 0) && !iLocal_51)
			{
				func_73();
				func_77(&uLocal_49);
			}
		}
	}
	else
	{
		iLocal_51 = 0;
		func_77(&uLocal_49);
	}
}

void func_73()
{
	struct<7> Var0;
	int iVar7;
	
	iVar7 = 0;
	while (iVar7 <= 4)
	{
		Local_12[iVar7 /*7*/] = { Var0 };
		iVar7++;
	}
	iLocal_48 = 0;
}

int func_74(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_75(uParam0, bParam2, 0);
	if (unk_0x0E063DDE8855EC52() && !bParam2)
	{
		if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0xA0F74982C6AAA9D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_75(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x0E063DDE8855EC52() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x20D394965B47B01A();
			}
			else
			{
				*uParam0 = unk_0xBADD1A643AD56F36();
			}
		}
		else
		{
			*uParam0 = unk_0xA0F74982C6AAA9D4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_76(var uParam0)
{
	return uParam0->f_1;
}

void func_77(var uParam0)
{
	uParam0->f_1 = 0;
}

var func_78(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (unk_0x27C9C05A6B4E58D2(unk_0x6EED86A16F7EA8F2(iVar1)))
		{
			iVar2 = unk_0x6EED86A16F7EA8F2(iVar1);
			if (func_56(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x4D29100D094E5511() || iParam0)
				{
					unk_0x26545538B51562AD(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_79()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDDC2E48CCBA23C1D(1))
	{
		iVar1 = unk_0x00D18151DCE3C65E(1, iVar0);
		switch (iVar1)
		{
			case 168:
				func_80(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_80(int iParam0)
{
	int iVar0;
	struct<7> Var2;
	
	unk_0xB03A3CBE4F7737B0(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 125:
			if (iLocal_48 >= 5)
			{
				iLocal_48 = 0;
			}
			if (unk_0xB03A3CBE4F7737B0(1, iParam0, &(Local_12[iLocal_48 /*7*/]), 7))
			{
				if (Local_12[iLocal_48 /*7*/].f_5 == 8)
				{
					Local_12[iLocal_48 /*7*/] = { Var2 };
				}
				else
				{
					iLocal_48++;
					func_77(&uLocal_49);
					func_75(&uLocal_49, 0, 0);
				}
			}
			break;
	}
}

bool func_81(int iParam0)
{
	return iParam0 == 3;
}

void func_82()
{
	if (func_83())
	{
		if (func_21(unk_0x4D29100D094E5511(), 0))
		{
			if (func_20(unk_0x4D29100D094E5511()) != 167 && func_20(unk_0x4D29100D094E5511()) != 168)
			{
				if (iLocal_11 == -1)
				{
					iLocal_11 = Global_2435528.f_3065.f_70;
				}
				else if (iLocal_11 != Global_2435528.f_3065.f_70)
				{
					Global_2435528.f_3065.f_70 = iLocal_11;
					Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_152 = iLocal_11;
				}
			}
		}
		else if (iLocal_11 != -1)
		{
			iLocal_11 = -1;
		}
	}
}

bool func_83()
{
	return func_84(unk_0x4D29100D094E5511());
}

int func_84(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_57())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return 0;
}

void func_85()
{
	if (func_88() && func_87())
	{
		if (Global_2435528.f_1.f_2824.f_13 > 0)
		{
			if (!iLocal_10)
			{
				func_86();
				iLocal_10 = 1;
			}
		}
	}
	else
	{
		iLocal_10 = 0;
	}
}

void func_86()
{
	Global_2435528.f_1.f_2824.f_13 = 0;
	Global_2435528.f_1.f_2824 = 0;
	Global_2435528.f_1.f_2824.f_1 = 0;
	Global_2435528.f_1.f_2824.f_2 = 0;
	Global_2435528.f_1.f_2824.f_3 = 0;
	Global_2435528.f_1.f_2824.f_4 = 0;
	Global_2435528.f_1.f_2824.f_5 = 0;
	Global_2435528.f_1.f_2824.f_6 = 0;
	Global_2435528.f_1.f_2824.f_7 = 0;
	Global_2435528.f_1.f_2824.f_8 = 0;
	Global_2435528.f_1.f_2824.f_9 = 0;
	Global_2435528.f_1.f_2824.f_10 = 0;
	Global_2435528.f_1.f_2824.f_11 = 0;
	Global_2435528.f_1.f_2824.f_12 = 0;
}

var func_87()
{
	return Global_2434762.f_718;
}

var func_88()
{
	return Global_2434762.f_569;
}

void func_89()
{
	int iVar0;
	
	if (!unk_0x9404B1BCD022816B())
	{
		if (iLocal_3 == 0)
		{
			if (Global_1315937 > 6)
			{
				if (((((unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_machinepistol"), 0) && !unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_smg"), 0)) && !unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_microsmg"), 0)) && !unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_assaultsmg"), 0)) && !unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_gusenberg"), 0)) && !unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_combatpdw"), 0))
				{
					if (unk_0x9F1B20B487FAE1CF(unk_0x27D769C59BC9D030(), joaat("weapon_machinepistol"), 0))
					{
						iVar0 = unk_0xB88FDA5AF9B0C71D(unk_0x27D769C59BC9D030(), joaat("weapon_machinepistol"));
						if (iVar0 == 0)
						{
							iVar0 = func_2(3850, -1, 0);
							unk_0x55F07E558111D23E(unk_0x27D769C59BC9D030(), unk_0x97769411F27FFE3A(unk_0x27D769C59BC9D030(), joaat("weapon_machinepistol")), iVar0);
						}
						iLocal_3 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_3 == 1)
	{
		iLocal_3 = 0;
	}
}

void func_90()
{
	if (unk_0x4D29100D094E5511() != -1 && Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 == 153)
	{
		if (func_96())
		{
			if (func_95())
			{
				if (!unk_0x461535ED8B04D436(unk_0x4D29100D094E5511()))
				{
					if (unk_0x3934E959DB2478D3() && !unk_0xF1384D7CDC020749())
					{
						if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
						{
							unk_0x09D2BE36C9D2B76F(unk_0x27D769C59BC9D030());
						}
					}
				}
			}
		}
		if (Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_220 != 99 && func_94(1))
		{
			if (func_74(&uLocal_8, 10000, 0))
			{
				func_93(1);
				func_91();
			}
		}
	}
	else
	{
		func_77(&uLocal_8);
	}
}

void func_91()
{
	func_92(Global_2428492.f_731, -1, 0);
}

void func_92(var uParam0, int iParam1, bool bParam2)
{
	Global_2428492.f_732 = uParam0;
	Global_2428492.f_733 = iParam1;
	if (bParam2)
	{
		Global_2428492.f_731 = uParam0;
	}
	if ((Global_2428492.f_732 == 1 || Global_2428492.f_732 == 5) || Global_2428492.f_732 == 4)
	{
		unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 115, 1);
	}
}

void func_93(int iParam0)
{
	Global_2404956.f_1664 = iParam0;
}

bool func_94(int iParam0)
{
	return Global_2428492.f_2171[0 /*72*/].f_1 == iParam0;
}

bool func_95()
{
	return unk_0xF426A5DE932B3BEE(Global_2460486.f_4659, 0);
}

bool func_96()
{
	return unk_0xF426A5DE932B3BEE(Global_2460486.f_4659, 1);
}

void func_97(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x16073B7747C188AC(sParam2);
	unk_0x182296DAFE790204(sParam3);
	unk_0x03BB339EA038BF3F(fParam0, fParam1, 0);
}

void func_98()
{
	if (!bLocal_1)
	{
		if (unk_0x1E114237D972903B())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0x117D586920E8F7BA(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x117D586920E8F7BA(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0x117D586920E8F7BA(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0x117D586920E8F7BA(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0x117D586920E8F7BA(2, 188))
					{
						bLocal_1 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0x1E114237D972903B())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0x117D586920E8F7BA(2, 188))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x117D586920E8F7BA(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0x117D586920E8F7BA(2, 189))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0x117D586920E8F7BA(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0x117D586920E8F7BA(2, 189))
				{
					bLocal_1 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

bool func_99()
{
	return unk_0xA29E536967D6DF2E(-1762644250);
}

