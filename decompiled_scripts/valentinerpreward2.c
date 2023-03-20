#region Local Var
	char* sLocal_0 = NULL;
	bool bLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	struct<7> Local_10[5];
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<5> Local_56 = { -1, 0, 0, -1, -1 } ;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.34.12";
	iLocal_9 = -1;
	iLocal_55 = -1;
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
		if (func_79())
		{
			func_78();
			if (bLocal_1)
			{
				unk_0xFFA0132BAEE84558(0f, 0.23f);
				unk_0x09FBFA08412B6B1C(255, 255, 255, 255);
				func_77(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		if (unk_0x0E063DDE8855EC52())
		{
			func_70();
			func_69();
			func_65();
			func_62();
			func_52();
			func_42();
			func_26();
			func_6();
			func_3();
			func_1();
		}
		else if (iLocal_3 == 1)
		{
			iLocal_3 = 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x7C3AA2D27E16E2AD();
}

void func_1()
{
	int iVar0;
	
	if (unk_0xD32535FA4397160F(joaat("fm_mission_controller")) > 0 && func_2(Global_1617379.f_88495))
	{
		if (!iLocal_50)
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
			iLocal_50 = 1;
		}
	}
	else if (iLocal_50)
	{
		iLocal_50 = 0;
	}
}

bool func_2(int iParam0)
{
	return iParam0 == 1;
}

void func_3()
{
	if (!func_5(unk_0x4D29100D094E5511(), 0) || func_4(unk_0x4D29100D094E5511()) != 167)
	{
		return;
	}
	if (Global_1728515.f_13 > 0 && !unk_0xF426A5DE932B3BEE(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_305, 1))
	{
		if (!unk_0xCBB243DDC0D132D1())
		{
			if (!iLocal_5)
			{
				iLocal_4 = Global_2443496;
				iLocal_5 = 1;
				Global_2443496 = 1;
			}
		}
		else if (iLocal_5)
		{
			iLocal_5 = 0;
			Global_2443496 = iLocal_4;
			iLocal_4 = 0;
		}
	}
	else if (iLocal_5)
	{
		iLocal_5 = 0;
		Global_2443496 = iLocal_4;
		iLocal_4 = 0;
	}
}

int func_4(int iParam0)
{
	if (func_5(iParam0, 0))
	{
		return Global_1610316[iParam0 /*174*/].f_10.f_28;
	}
	return -1;
}

int func_5(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	if (Local_56.f_4 == -1)
	{
		Local_56.f_4 = Global_1728678;
		Local_56.f_1 = Global_1728816;
		Local_56.f_0 = unk_0x9CC4C10F8D665832();
		Local_56.f_3 = 1;
	}
	else if (func_4(unk_0x4D29100D094E5511()) == 167)
	{
		if (Local_56.f_0 > -1)
		{
			Local_56.f_0 = -1;
		}
		Local_56.f_2 = 1;
		Local_56.f_3 = 2;
	}
	else if (Local_56.f_2)
	{
		if (Local_56.f_4 != Global_1728678)
		{
			Local_56.f_4 = Global_1728678;
			Local_56.f_1 = Global_1728816;
			Local_56.f_2 = 0;
			Local_56.f_0 = unk_0x9CC4C10F8D665832();
		}
		Local_56.f_3 = 3;
	}
	else if (Local_56.f_4 != Global_1728678)
	{
		if ((unk_0x9CC4C10F8D665832() - Local_56.f_0) < Global_262145.f_12480)
		{
			if (!Local_56.f_1 && func_4(unk_0x4D29100D094E5511()) != 167)
			{
				Global_1728678 = Local_56.f_4;
				Global_1728816 = Local_56.f_1;
				Global_1332276 = (Global_1332276 - 1);
				if (Global_1332276 < 0)
				{
					Global_1332276 = 6;
				}
			}
			else if (Local_56.f_1)
			{
				Local_56.f_4 = Global_1728678;
				Local_56.f_1 = Global_1728816;
			}
		}
		else
		{
			Local_56.f_4 = Global_1728678;
			Local_56.f_1 = Global_1728816;
		}
		Local_56.f_3 = 4;
	}
	else if ((unk_0x9CC4C10F8D665832() - Local_56.f_0) >= Global_262145.f_12480)
	{
		Local_56.f_0 = unk_0x9CC4C10F8D665832();
		func_7();
		Local_56.f_4 = Global_1728678;
		Local_56.f_1 = Global_1728816;
		Local_56.f_3 = 5;
	}
	else
	{
		Local_56.f_3 = 6;
	}
}

void func_7()
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
		func_25();
		Global_1332276 = 0;
	}
	while (iVar3 < iVar1)
	{
		iVar2 = (iVar2 + func_23(iVar3));
		iVar3++;
	}
	iVar4 = unk_0x3A5708FEE1B560A9(0, iVar2 + 1);
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		if (iVar4 < func_23(iVar3))
		{
			iVar0 = iVar3;
			iVar3 = (iVar1 - 1);
		}
		iVar4 = (iVar4 - func_23(iVar3));
		iVar3++;
	}
	func_22(iVar0);
	iVar5 = unk_0x3A5708FEE1B560A9(1, 101);
	iVar6 = unk_0xF2DB717A73826179((Global_262145.f_12482 * 100f));
	if ((((iVar5 <= iVar6 && func_21()) && func_20(iVar0)) && !func_18(func_19(iVar0))) && func_9() < 6)
	{
		Global_1728816 = 1;
		func_8(54);
	}
	else
	{
		Global_1728816 = 0;
	}
	Global_1728678 = iVar0;
}

void func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x26545538B51562AD(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		iVar2 = func_17(iVar1);
		if (iVar2 != 0)
		{
			iVar0 = (iVar0 + func_10(iVar2));
		}
		iVar1++;
	}
	return iVar0;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (func_16(iParam0))
	{
		iVar0 = func_14(func_15(iParam0));
		return func_11(iVar0, -1, 0);
	}
	return 0;
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2469339[iParam0 /*5*/][func_12(iParam1)];
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_12(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_13()
{
	return Global_1312747;
}

int func_14(int iParam0)
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

int func_15(int iParam0)
{
	int iVar0;
	
	if (func_16(iParam0))
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

int func_16(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_17(int iParam0)
{
	if (Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_68[iParam0 /*2*/] != 0)
	{
		return Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_68[iParam0 /*2*/];
	}
	return 0;
}

int func_18(int iParam0)
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

int func_19(int iParam0)
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

int func_20(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 4) || iParam0 == 6) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_21()
{
	return Global_2493043[func_13()] >= Global_262145.f_12481;
}

void func_22(int iParam0)
{
	Global_1332277[Global_1332276] = iParam0;
	Global_1332276++;
	if (Global_1332276 >= 7)
	{
		Global_1332276 = 0;
	}
}

int func_23(int iParam0)
{
	if (func_24(iParam0))
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

int func_24(int iParam0)
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

void func_25()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_1332277[iVar0] = -1;
		iVar0++;
	}
}

void func_26()
{
	if (func_38(unk_0x4D29100D094E5511()))
	{
		if (!iLocal_53)
		{
			iLocal_53 = 1;
		}
		if (func_34(unk_0x4D29100D094E5511()))
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
		else if (func_32(unk_0x4D29100D094E5511()))
		{
			if (Global_2443110 == 6 && !Global_25391 >= 3)
			{
				unk_0xCFF471245AFEEDCE(2, 201, 1);
				if (!unk_0xE1834019C3CC3C33(2) && !unk_0x8C819425CC4D7DD4(unk_0x27D769C59BC9D030(), -1322051853))
				{
					if (!iLocal_54)
					{
						if (func_31())
						{
							iLocal_54 = 1;
						}
					}
					if (iLocal_54)
					{
						if (func_30("MPOFSEAT_PCEXIT"))
						{
							unk_0x5BD150B52CE8D356(1);
							func_28(&iLocal_55);
						}
						if (iLocal_55 == -1)
						{
							func_27(&iLocal_55, 5, "MPOFSEAT_EXIT", 0, 0, 0, 0);
						}
					}
				}
				else if (unk_0xE1834019C3CC3C33(2) && !unk_0x8C819425CC4D7DD4(unk_0x27D769C59BC9D030(), -1322051853))
				{
					if (!iLocal_54)
					{
						if (func_31())
						{
							iLocal_54 = 1;
						}
					}
					if (iLocal_54)
					{
						if (func_30("MPOFSEAT_EXIT"))
						{
							unk_0x5BD150B52CE8D356(1);
							func_28(&iLocal_55);
						}
						if (iLocal_55 == -1)
						{
							func_27(&iLocal_55, 5, "MPOFSEAT_PCEXIT", 0, 0, 0, 0);
						}
					}
				}
				else
				{
					unk_0x5BD150B52CE8D356(1);
					func_28(&iLocal_55);
				}
			}
			else
			{
				func_28(&iLocal_55);
				iLocal_54 = 0;
			}
		}
	}
	else if (iLocal_53)
	{
		iLocal_53 = 0;
		iLocal_54 = 0;
		if (Global_1715861)
		{
			Global_1715861 = 0;
		}
		if (func_30("MPOFSEAT_EXIT") || func_30("MPOFSEAT_PCEXIT"))
		{
			unk_0x5BD150B52CE8D356(1);
			func_28(&iLocal_55);
		}
	}
}

void func_27(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xD32535FA4397160F(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x5D293E404CA20AA5())
	{
		if (!*iParam0 == -1)
		{
			func_28(iParam0);
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

void func_28(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_29(*iParam0);
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

int func_29(int iParam0)
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

bool func_30(char* sParam0)
{
	unk_0x66F753896FC4EEC3(sParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

bool func_31()
{
	if (unk_0xE1834019C3CC3C33(2))
	{
		return (((((func_30("WHOUSEINPUTTRPC") || func_30("MP_OFF_LAP_PC")) || func_30("OFF_COMP_MIS")) || func_30("SECINPUTTREGPC")) || func_30("OFF_COMP_BDY")) || func_30("OFFLAPTOP"));
	}
	return (((((func_30("WHOUSEINPUTTRIG") || func_30("MP_OFF_LAP_1")) || func_30("OFF_COMP_MIS")) || func_30("SECINPUTTREG")) || func_30("OFF_COMP_BDY")) || func_30("OFFLAPTOPPC"));
}

int func_32(int iParam0)
{
	if (func_33(Global_1587523[iParam0 /*444*/].f_250.f_9))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
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

int func_34(int iParam0)
{
	if (iParam0 != func_37())
	{
		if (func_36(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_35(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_35(int iParam0)
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

int func_36(int iParam0, bool bParam1, bool bParam2)
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

int func_37()
{
	return -1;
}

bool func_38(int iParam0)
{
	return func_39(iParam0) > 0;
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_36(iParam0, 0, 1))
	{
		if (Global_1610316[iParam0 /*174*/].f_10.f_117 != -1)
		{
			iVar0 = Global_1610316[iParam0 /*174*/].f_10.f_117;
		}
		else
		{
			iVar0 = func_41(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = ((iVar0 + func_40()) - unk_0x9CC4C10F8D665832());
		return iVar1;
	}
	return -1;
}

int func_40()
{
	return Global_262145.f_12331;
}

int func_41(int iParam0)
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

void func_42()
{
	var uVar0;
	
	uVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
	if (((((unk_0xF426A5DE932B3BEE(Global_91330.f_1300[39], 6) || unk_0xF426A5DE932B3BEE(Global_91330.f_1300[40], 6)) || unk_0xF426A5DE932B3BEE(Global_91330.f_1300[41], 6)) || unk_0xF426A5DE932B3BEE(Global_91330.f_1300[42], 6)) || unk_0xF426A5DE932B3BEE(Global_91330.f_1300[43], 6)) || unk_0xF426A5DE932B3BEE(Global_91330.f_1300[44], 6))
	{
		if (!func_51(uVar0))
		{
			if (!func_50(Global_2460486.f_275))
			{
				if (!func_49(Global_2460486.f_275, 1, 0, 0, 0, 0))
				{
					unk_0x26545538B51562AD(&(Global_91330.f_1445), 4);
					bLocal_52 = true;
				}
				else
				{
					func_44(0, 0, 0, 0);
					func_43(7);
				}
			}
			else if (unk_0xD2CFFE76B625AE55(Global_2460486.f_275))
			{
				if (!func_49(Global_2460486.f_275, 1, 0, 0, 0, 0))
				{
					unk_0x26545538B51562AD(&(Global_91330.f_1445), 4);
					bLocal_52 = true;
				}
				else
				{
					func_44(0, 0, 0, 0);
					func_43(7);
				}
			}
		}
	}
	else
	{
		bLocal_52 = false;
	}
	if (bLocal_52)
	{
		if (unk_0xD2CFFE76B625AE55(uVar0) && unk_0x0B4DDB992C7BCF57(uVar0, 0))
		{
			if (unk_0x90F7F7FF57758DF4("Not_Allow_As_Saved_Veh", 3))
			{
				if (!unk_0xE8E046017EE675F2(uVar0, "Not_Allow_As_Saved_Veh"))
				{
					unk_0xE259158ED7E55524(uVar0, "Not_Allow_As_Saved_Veh", unk_0x70ABFF261710305D(unk_0xD358A441FAC2240C(unk_0x4D29100D094E5511())));
					iLocal_51 = 1;
				}
			}
		}
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_91330.f_1445), 4);
		if (iLocal_51)
		{
			if (unk_0xD2CFFE76B625AE55(uVar0) && unk_0x0B4DDB992C7BCF57(uVar0, 0))
			{
				if (unk_0x90F7F7FF57758DF4("Not_Allow_As_Saved_Veh", 3))
				{
					if (unk_0xE8E046017EE675F2(uVar0, "Not_Allow_As_Saved_Veh"))
					{
						unk_0xEF7D3CA676ABA716(uVar0, "Not_Allow_As_Saved_Veh");
						iLocal_51 = 0;
					}
				}
			}
		}
	}
}

void func_43(int iParam0)
{
	Global_2435528.f_4093.f_228[iParam0] = 0;
}

void func_44(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam0)
	{
		func_48(2);
	}
	else
	{
		func_48(1);
	}
	if (bParam1)
	{
		func_48(11);
	}
	if (bParam2)
	{
		func_48(32);
		if (bParam3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_1321273[func_46() /*138*/].f_99, 0))
			{
				func_48(33);
			}
		}
		else
		{
			func_45(33);
		}
	}
	if (unk_0x0E063DDE8855EC52())
	{
		Global_2460486.f_353 = unk_0x20D394965B47B01A();
	}
}

void func_45(int iParam0)
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

int func_46()
{
	return Global_2097152[func_47() /*10375*/].f_7704.f_2;
}

int func_47()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_48(int iParam0)
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

int func_49(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
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

int func_50(var uParam0)
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

int func_51(var uParam0)
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

void func_52()
{
	int iVar0;
	struct<7> Var1;
	int iVar8;
	
	if (unk_0xD32535FA4397160F(joaat("fm_mission_controller")) > 0 && func_61(Global_1617379.f_88495))
	{
		func_59();
		if (unk_0x34BC92228D132865("fm_mission_controller", 0, 0) == func_37())
		{
			iLocal_49 = 1;
		}
		if (iLocal_49 == 1 && unk_0x34BC92228D132865("fm_mission_controller", 0, 0) != func_37())
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				if (Local_10[iVar0 /*7*/] == 125)
				{
					if (unk_0x34BC92228D132865("fm_mission_controller", 0, 0) == unk_0x4D29100D094E5511())
					{
						iVar8 = func_58(1);
						if (!iVar8 == 0)
						{
							unk_0xCE8ECD07286D394D(1, &(Local_10[iVar0 /*7*/]), 7, iVar8);
						}
					}
					Local_10[iVar0 /*7*/] = { Var1 };
				}
				iVar0++;
			}
			func_57(&uLocal_47);
			iLocal_46 = 0;
			iLocal_49 = 0;
		}
		if (func_56(&uLocal_47))
		{
			if (func_54(&uLocal_47, 10000, 0) && !iLocal_49)
			{
				func_53();
				func_57(&uLocal_47);
			}
		}
	}
	else
	{
		iLocal_49 = 0;
		func_57(&uLocal_47);
	}
}

void func_53()
{
	struct<7> Var0;
	int iVar7;
	
	iVar7 = 0;
	while (iVar7 <= 4)
	{
		Local_10[iVar7 /*7*/] = { Var0 };
		iVar7++;
	}
	iLocal_46 = 0;
}

int func_54(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_55(uParam0, bParam2, 0);
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

void func_55(var uParam0, bool bParam1, bool bParam2)
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

bool func_56(var uParam0)
{
	return uParam0->f_1;
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0;
}

var func_58(int iParam0)
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
			if (func_36(iVar2, 0, 0))
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

void func_59()
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
				func_60(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_60(int iParam0)
{
	int iVar0;
	struct<7> Var2;
	
	unk_0xB03A3CBE4F7737B0(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 125:
			if (iLocal_46 >= 5)
			{
				iLocal_46 = 0;
			}
			if (unk_0xB03A3CBE4F7737B0(1, iParam0, &(Local_10[iLocal_46 /*7*/]), 7))
			{
				if (Local_10[iLocal_46 /*7*/].f_5 == 8)
				{
					Local_10[iLocal_46 /*7*/] = { Var2 };
				}
				else
				{
					iLocal_46++;
					func_57(&uLocal_47);
					func_55(&uLocal_47, 0, 0);
				}
			}
			break;
	}
}

bool func_61(int iParam0)
{
	return iParam0 == 3;
}

void func_62()
{
	if (func_63())
	{
		if (func_5(unk_0x4D29100D094E5511(), 0))
		{
			if (func_4(unk_0x4D29100D094E5511()) != 167 && func_4(unk_0x4D29100D094E5511()) != 168)
			{
				if (iLocal_9 == -1)
				{
					iLocal_9 = Global_2435528.f_3065.f_70;
				}
				else if (iLocal_9 != Global_2435528.f_3065.f_70)
				{
					Global_2435528.f_3065.f_70 = iLocal_9;
					Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_152 = iLocal_9;
				}
			}
		}
		else if (iLocal_9 != -1)
		{
			iLocal_9 = -1;
		}
	}
}

bool func_63()
{
	return func_64(unk_0x4D29100D094E5511());
}

int func_64(int iParam0)
{
	if (iParam0 != func_37())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_37())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return 0;
}

void func_65()
{
	if (func_68() && func_67())
	{
		if (Global_2435528.f_1.f_2824.f_13 > 0)
		{
			if (!iLocal_8)
			{
				func_66();
				iLocal_8 = 1;
			}
		}
	}
	else
	{
		iLocal_8 = 0;
	}
}

void func_66()
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

var func_67()
{
	return Global_2434762.f_718;
}

var func_68()
{
	return Global_2434762.f_569;
}

void func_69()
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
							iVar0 = func_11(3850, -1, 0);
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

void func_70()
{
	if (unk_0x4D29100D094E5511() != -1 && Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10.f_28 == 153)
	{
		if (func_76())
		{
			if (func_75())
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
		if (Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_220 != 99 && func_74(1))
		{
			if (func_54(&uLocal_6, 10000, 0))
			{
				func_73(1);
				func_71();
			}
		}
	}
	else
	{
		func_57(&uLocal_6);
	}
}

void func_71()
{
	func_72(Global_2428492.f_731, -1, 0);
}

void func_72(var uParam0, int iParam1, bool bParam2)
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

void func_73(int iParam0)
{
	Global_2404956.f_1664 = iParam0;
}

bool func_74(int iParam0)
{
	return Global_2428492.f_2171[0 /*72*/].f_1 == iParam0;
}

bool func_75()
{
	return unk_0xF426A5DE932B3BEE(Global_2460486.f_4659, 0);
}

bool func_76()
{
	return unk_0xF426A5DE932B3BEE(Global_2460486.f_4659, 1);
}

void func_77(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x16073B7747C188AC(sParam2);
	unk_0x182296DAFE790204(sParam3);
	unk_0x03BB339EA038BF3F(fParam0, fParam1, 0);
}

void func_78()
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

bool func_79()
{
	return unk_0xA29E536967D6DF2E(-1762644250);
}

