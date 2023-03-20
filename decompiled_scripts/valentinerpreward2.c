#region Local Var
	char* sLocal_0 = NULL;
	bool bLocal_1 = 0;
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
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.35.29";
	iLocal_7 = -1;
	iLocal_10 = -1;
	iLocal_20 = -1;
	iLocal_21 = -1;
	iLocal_22 = -1;
	iLocal_23 = -1;
	iLocal_24 = -1;
	iLocal_26 = -1;
	iLocal_27 = -1;
	iLocal_28 = -1;
	iLocal_29 = -1;
	unk_0x8AAE4CDF72BA829A(0);
	unk_0x6516E26C513581FA();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1318847 = unk_0x9F7CDE7B20BCB675(sLocal_0);
	iVar0 = unk_0x1ADBAAC322D61F73() + 10000;
	while (unk_0x1ADBAAC322D61F73() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_110())
		{
			func_109();
			if (bLocal_1)
			{
				unk_0xE885E03E7032CE54(0f, 0.23f);
				unk_0x0D1D7FED407C809B(255, 255, 255, 255);
				func_108(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		func_107();
		func_105();
		func_101();
		if (unk_0x17CC0D5008835470())
		{
			func_87();
			func_85();
			func_84();
			func_83();
			func_81();
			func_79();
			func_71();
			func_42();
			func_40();
			func_37();
			func_30();
			func_25();
			func_22();
			func_17();
			func_10();
			func_5();
		}
		else
		{
			if (unk_0x55812CD5A331E1F8())
			{
				if (iLocal_5 || iLocal_4)
				{
					func_4();
					iLocal_5 = 0;
					iLocal_6 = 0;
					iLocal_4 = 0;
				}
			}
			if (iLocal_7 != -1)
			{
				iLocal_7 = -1;
			}
			if (!func_3() && !func_2())
			{
				iLocal_8 = 0;
				if (iLocal_9 != 0)
				{
					Global_262145.f_5111 = iLocal_9;
					iLocal_9 = 0;
				}
			}
			func_1(&uLocal_17);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xF5DF8F3392CDD07B();
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_2()
{
	return Global_2434839.f_583;
}

bool func_3()
{
	return Global_2434839.f_570;
}

void func_4()
{
	if (Global_262145.f_5098 == 0)
	{
		Global_262145.f_5098 = iLocal_6;
		iLocal_6 = 0;
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_9(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if (!iLocal_3)
		{
			func_6(3376, iVar0, -1, 1);
			func_6(3377, iVar0, -1, 1);
			func_6(3378, iVar0, -1, 1);
			func_6(3162, iVar0, -1, 1);
			func_6(3163, iVar0, -1, 1);
			func_6(3164, iVar0, -1, 1);
			func_6(3165, iVar0, -1, 1);
			func_6(3166, iVar0, -1, 1);
			func_6(3167, iVar0, -1, 1);
			iLocal_3 = 1;
		}
	}
	else
	{
		iLocal_3 = 0;
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1312747;
}

int func_9(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_28 != -1 || (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	if (Global_1573837)
	{
		if (!(Global_1573842 && Global_1573844))
		{
			if (!func_16(unk_0xE0BDAFA1A39552D6(), 0) && !func_12(unk_0xE0BDAFA1A39552D6()))
			{
				if (unk_0x0FDFEC0DD29106EE(unk_0x06736567F820A39E(), 0))
				{
					func_11();
				}
			}
		}
	}
}

void func_11()
{
	int iVar0;
	
	iVar0 = unk_0xBEF2EC2EEA033AC8();
	if (unk_0x5066C5D6AF8A19DA())
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2404993.f_1677)
	{
		Global_2404993.f_1677 = iVar0;
	}
}

int func_12(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_13())
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

bool func_13()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_15(-1, 0) == 8;
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

int func_15(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_16(int iParam0, bool bParam1)
{
	if (Global_2418529[iParam0 /*313*/].f_220 == 99)
	{
		return 0;
	}
	if (bParam1)
	{
		if (Global_2418529[iParam0 /*313*/].f_220 == 13)
		{
			return 0;
		}
	}
	return 1;
}

void func_17()
{
	int iVar0;
	
	if (func_21())
	{
		iVar0 = func_20();
		if (iVar0 > 0 && func_18())
		{
			if (Global_1315846 != 3)
			{
				Global_1315846 = 3;
			}
		}
	}
}

int func_18()
{
	if (func_19() == 3 || func_19() == 2)
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	return Global_1312466.f_18;
}

int func_20()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x98934607F8D0FB03(joaat("fm_race_creator")) != 0)
	{
		iVar0 = 1;
	}
	else if (unk_0x98934607F8D0FB03(joaat("fm_deathmatch_creator")) != 0)
	{
		iVar0 = 2;
	}
	else if (unk_0x98934607F8D0FB03(joaat("fm_lts_creator")) != 0)
	{
		iVar0 = 3;
	}
	else if (unk_0x98934607F8D0FB03(joaat("fm_capture_creator")) != 0)
	{
		iVar0 = 4;
	}
	return iVar0;
}

bool func_21()
{
	return Global_1315913;
}

void func_22()
{
	int iVar0;
	int iVar1;
	
	if (Global_25152 == 0)
	{
		if (!iLocal_25)
		{
			iVar0 = func_20();
			if (iVar0 > 0)
			{
				iVar1 = func_23(iVar0);
				if (iVar1 != 0)
				{
					unk_0xE38301C93EB629A6(iVar1);
					unk_0xEB574DDECC1AE487(-101, 0, 0);
					iLocal_25 = 1;
				}
			}
			else
			{
				iLocal_25 = 1;
			}
		}
	}
	else if (iLocal_25)
	{
		iLocal_25 = 0;
	}
}

var func_23(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 1:
			uVar0 = func_24("fm_race_creator");
			break;
		
		case 2:
			uVar0 = func_24("fm_deathmatch_creator");
			break;
		
		case 3:
			uVar0 = func_24("fm_lts_creator");
			break;
		
		case 4:
			uVar0 = func_24("fm_capture_creator");
			break;
	}
	return uVar0;
}

var func_24(char* sParam0)
{
	var uVar0;
	bool bVar1;
	
	unk_0x965F371FF939A0F4();
	while (!bVar1)
	{
		uVar0 = unk_0xAD2184B31D16EE35();
		if (unk_0x2F6869889D97DFED(unk_0x9AC5FB535EC9B35E(uVar0), sParam0))
		{
			bVar1 = true;
		}
	}
	return uVar0;
}

void func_25()
{
	if (func_28())
	{
		if (iLocal_23 != -1 && func_27() == 4)
		{
			func_26(iLocal_23);
		}
		iLocal_23 = -1;
		if ((func_27() == 33 || func_27() == 35) || func_27() == 37)
		{
			iLocal_23 = func_27();
		}
	}
}

void func_26(int iParam0)
{
	Global_978175 = iParam0;
}

int func_27()
{
	return Global_978175;
}

int func_28()
{
	if (func_29())
	{
		return 1;
	}
	return Global_2434839.f_620;
}

bool func_29()
{
	return Global_1315871 == 10;
}

void func_30()
{
	if ((func_36() && func_35()) && func_34(0) == 184)
	{
		if (iLocal_22 != Global_2434839.f_765 || func_33())
		{
			iLocal_22 = Global_2434839.f_765;
			if (func_32())
			{
				if (Global_1573873.f_13[0] != -1 && iLocal_21 != Global_1573873.f_13[0])
				{
					iLocal_21 = Global_1573873.f_13[0];
					func_31(&(Global_794608.f_4[Global_1573873.f_13[0] /*88*/]));
				}
			}
			else if (Global_1573873.f_17 != -1 && iLocal_20 != Global_1573873.f_17)
			{
				iLocal_20 = Global_1573873.f_17;
				func_31(&(Global_794608.f_4[Global_1573873.f_17 /*88*/]));
			}
		}
	}
}

void func_31(char* sParam0)
{
	StringCopy(&(Global_2434839.f_735), sParam0, 24);
}

bool func_32()
{
	return unk_0x7DA173D4FD42F36B(Global_2434839.f_3, 3);
}

bool func_33()
{
	return Global_2434839.f_613;
}

int func_34(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_2434839.f_5;
}

bool func_35()
{
	return unk_0x7DA173D4FD42F36B(Global_2434839.f_3, 2);
}

bool func_36()
{
	return unk_0x7DA173D4FD42F36B(Global_2434839.f_2, 11);
}

void func_37()
{
	if (((Global_2435608.f_3614 && Global_2435608.f_3613) && Global_2435608.f_3617 <= 1) && !unk_0x21A36E2323FEA4B1())
	{
		if (!func_38(&uLocal_17, 4000, 0))
		{
			if (Global_2435608.f_3617 == 1)
			{
				Global_2435608.f_3617 = 0;
			}
		}
	}
	else
	{
		func_1(&uLocal_17);
	}
}

int func_38(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_39(uParam0, bParam2, 0);
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

void func_39(var uParam0, bool bParam1, bool bParam2)
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

void func_40()
{
	if (!unk_0x21A36E2323FEA4B1())
	{
		if (func_35())
		{
			if (func_34(0) != 184 && !func_32())
			{
				func_41();
			}
		}
	}
}

void func_41()
{
	unk_0x99BCB15F954AF579(&(Global_2434839.f_3), 2);
}

void func_42()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 22;
	if (func_69(unk_0xE0BDAFA1A39552D6()))
	{
		if (iLocal_15)
		{
			if (func_68(unk_0xE0BDAFA1A39552D6()) != 167)
			{
				if (iLocal_16 != Global_1736105)
				{
					if (Global_1736245)
					{
						unk_0xE27C8E42A97895CF(&(Global_2464975.f_4685.f_7[iVar0]), iVar1);
					}
					iLocal_15 = 0;
				}
			}
		}
		else if (func_68(unk_0xE0BDAFA1A39552D6()) == 167)
		{
			iLocal_15 = 1;
			iLocal_16 = Global_1736105;
		}
		if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4685.f_7[iVar0], iVar1) && func_43(1, 1, 1, 1, 1, 1))
		{
			unk_0x15835437CE85AEA4("SECURO_SPEC_TUT");
			unk_0x65FD8FA7D3B7F717(0, 0, 1, 8000);
			unk_0x99BCB15F954AF579(&(Global_2464975.f_4685.f_7[iVar0]), iVar1);
		}
	}
}

int func_43(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (unk_0x6146EFE5BC2DD8DC())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1637, 20))
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (func_67())
		{
			return 0;
		}
	}
	if (bParam4)
	{
		if (unk_0x7DA173D4FD42F36B(Global_2464975.f_1639, 29))
		{
			return 0;
		}
	}
	if (!unk_0xDF916BCF4D39E8C2())
	{
		return 0;
	}
	if (Global_2472483)
	{
		return 0;
	}
	if (func_66())
	{
		return 0;
	}
	if (func_65())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_62(unk_0xE0BDAFA1A39552D6(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_61(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (func_60())
	{
		return 0;
	}
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_58(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_57(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return 0;
	}
	if (!func_56())
	{
		return 0;
	}
	if (func_55(unk_0xE0BDAFA1A39552D6()))
	{
		if (func_54())
		{
			return 0;
		}
	}
	if (Global_1573684)
	{
		return 0;
	}
	if (func_53())
	{
		return 0;
	}
	if (func_52())
	{
		return 0;
	}
	if (func_51())
	{
		return 0;
	}
	if (Global_68089)
	{
		return 0;
	}
	if (func_50())
	{
		return 0;
	}
	if (func_49())
	{
		return 0;
	}
	if (Global_25416)
	{
		return 0;
	}
	if (Global_25417)
	{
		return 0;
	}
	if (bParam5)
	{
		if (func_45(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (func_44(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2562062[iParam0 /*19*/].f_3 > -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_45(int iParam0)
{
	if (func_48(iParam0))
	{
		return 1;
	}
	if (func_46(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_47(iParam0, 9);
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_10.f_4, iParam1);
}

int func_48(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_1610705[iVar0 /*178*/].f_1, 0);
	}
	return 0;
}

bool func_49()
{
	return Global_1311716[0 /*4*/] > 0;
}

bool func_50()
{
	return Global_2394682;
}

bool func_51()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_180 != 0;
}

bool func_52()
{
	return Global_2434839.f_568;
}

bool func_53()
{
	return Global_2434839.f_720;
}

bool func_54()
{
	return Global_2428549.f_2191[0 /*72*/].f_1 != 0;
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610705[iVar0 /*178*/] != -1;
	}
	return 0;
}

int func_56()
{
	if (func_19() == 0)
	{
		return 1;
	}
	return 0;
}

bool func_57(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_206, iParam1);
}

int func_58(int iParam0)
{
	if (!func_59(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587816[iParam0 /*444*/].f_35;
}

int func_59(int iParam0, bool bParam1, bool bParam2)
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

bool func_60()
{
	return Global_2428549.f_2482.f_585;
}

int func_61(int iParam0)
{
	if (Global_2418529[iParam0 /*313*/].f_206 == 0)
	{
		return 0;
	}
	return 1;
}

int func_62(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_63(iParam0))
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

bool func_63(int iParam0)
{
	return func_64(iParam0);
}

bool func_64(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
}

bool func_65()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 0);
}

bool func_66()
{
	return unk_0x1ADBAAC322D61F73() <= Global_17257.f_5745 + 100;
}

int func_67()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0)
{
	if (func_9(iParam0, 0))
	{
		return Global_1610705[iParam0 /*178*/].f_10.f_28;
	}
	return -1;
}

int func_69(int iParam0)
{
	if (iParam0 != func_70())
	{
		if (Global_1610705[iParam0 /*178*/].f_10 != func_70())
		{
			return Global_1610705[iParam0 /*178*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_70()
{
	return -1;
}

void func_71()
{
	if (!unk_0x21A36E2323FEA4B1() && func_76(17, -1, -1))
	{
		if (iLocal_7 == -1)
		{
			if (func_27() == 9)
			{
				iLocal_7 = 9;
			}
			if (func_27() == 27)
			{
				iLocal_7 = 27;
			}
			if (func_27() == 26)
			{
				iLocal_7 = 26;
			}
		}
		else if (func_75() && func_27() == 4)
		{
			func_26(iLocal_7);
			iLocal_7 = -1;
		}
	}
	else if (iLocal_7 != -1)
	{
		iLocal_7 = -1;
	}
	if (((func_74() || func_27() == 9) || func_27() == 26) || func_27() == 27)
	{
		if (func_72())
		{
			if (unk_0x21A36E2323FEA4B1())
			{
				if (Global_2433781.f_1057 == 15 && iLocal_8 == 0)
				{
					iLocal_8 = Global_2433781.f_1057;
					iLocal_9 = 0;
				}
			}
			else if (func_51() && iLocal_8 == 15)
			{
				if (iLocal_9 == 0)
				{
					iLocal_9 = Global_262145.f_5111;
					Global_262145.f_5111 = 10;
				}
			}
			else if (!func_51())
			{
			}
		}
	}
	else
	{
		if (iLocal_8 != 0)
		{
			iLocal_8 = 0;
		}
		if (iLocal_9 != 0)
		{
			Global_262145.f_5111 = iLocal_9;
			iLocal_9 = 0;
		}
	}
}

bool func_72()
{
	return func_73(Global_1617902.f_76918);
}

int func_73(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 30)
		{
			if (iParam0 == Global_262145.f_4912[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_74()
{
	return Global_2434839.f_752;
}

var func_75()
{
	return Global_2434839.f_594;
}

int func_76(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar1 = func_78(iParam0, iParam1);
	uVar2 = func_77(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4121CA0A35F0B8AA(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x962F55EEC297B13E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x962F55EEC297B13E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x962F55EEC297B13E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x962F55EEC297B13E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x962F55EEC297B13E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x962F55EEC297B13E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x962F55EEC297B13E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x962F55EEC297B13E((iParam0 - 4207)) * 64);
	}
	return iVar0;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xEBF0170044DAFCC1((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xEBF0170044DAFCC1((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xEBF0170044DAFCC1((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xEBF0170044DAFCC1((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x57523A7BBB9C991D((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x57523A7BBB9C991D((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x1DE02059C7818E12((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x1DE02059C7818E12((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	return iVar0;
}

void func_79()
{
	var uVar0;
	
	uVar0 = unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0);
	if (((((unk_0x7DA173D4FD42F36B(Global_91362.f_1300[39], 6) || unk_0x7DA173D4FD42F36B(Global_91362.f_1300[40], 6)) || unk_0x7DA173D4FD42F36B(Global_91362.f_1300[41], 6)) || unk_0x7DA173D4FD42F36B(Global_91362.f_1300[42], 6)) || unk_0x7DA173D4FD42F36B(Global_91362.f_1300[43], 6)) || unk_0x7DA173D4FD42F36B(Global_91362.f_1300[44], 6))
	{
		if (unk_0x79469DA5833EACA8(uVar0) == joaat("le7b"))
		{
			if (func_80() == 46)
			{
				StringCopy(&(Global_17257.f_73[0 /*6*/]), "CMOD_SPO_0b", 24);
			}
		}
	}
}

int func_80()
{
	return Global_91362.f_389;
}

void func_81()
{
	if (!unk_0x7DA173D4FD42F36B(Global_1617902.f_18, 3))
	{
		if (func_82())
		{
			if (unk_0xBF04DD936AAD574D())
			{
				if (!iLocal_14)
				{
					unk_0xCE3FE1C65AAE40F9(1);
					iLocal_14 = 1;
				}
				unk_0xC80D2B3478FFF428(0, 51, 1);
				unk_0xC80D2B3478FFF428(0, 74, 1);
			}
			else if (iLocal_14)
			{
				unk_0xCE3FE1C65AAE40F9(0);
				iLocal_14 = 0;
			}
		}
	}
}

int func_82()
{
	if ((unk_0x21A36E2323FEA4B1() && Global_1617902 == 2) && ((unk_0x7DA173D4FD42F36B(Global_1617902.f_13, 7) || Global_1617902.f_35640 == 6) || Global_1617902.f_35640 == 7))
	{
		return 1;
	}
	return 0;
}

void func_83()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	bVar1 = true;
	if (unk_0x3DC360442A11BB38())
	{
		if (unk_0x946F2E7C12468B39())
		{
			if (unk_0x2EB9388848720C9A())
			{
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (Global_262145.f_5102[iVar2] == 2)
					{
						iVar3 = iVar2;
					}
					iVar2++;
				}
				iVar0 = Global_1573873.f_9[iVar3];
				if (iVar0 != -1)
				{
					bVar1 = false;
					if (iLocal_11 == 0)
					{
						iLocal_11 = Global_794608.f_4[iVar0 /*88*/].f_70;
						Global_794608.f_4[iVar0 /*88*/].f_70 = 1;
						iLocal_10 = iVar0;
					}
				}
				if (!iLocal_12)
				{
					iLocal_12 = Global_1573892;
				}
				else
				{
					Global_1573892 = 1;
				}
			}
			else
			{
				iLocal_12 = 0;
				Global_1573892 = 0;
			}
		}
		else
		{
			iLocal_12 = 0;
			Global_1573892 = 0;
		}
	}
	else
	{
		iLocal_12 = 0;
		Global_1573892 = 0;
	}
	if (bVar1)
	{
		if (iLocal_11 != 0 && iLocal_10 != -1)
		{
			Global_794608.f_4[iLocal_10 /*88*/].f_70 = iLocal_11;
			iLocal_11 = 0;
			iLocal_10 = -1;
		}
	}
}

void func_84()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 5;
	iVar1 = (65 / iVar0);
	if (!func_21())
	{
		if (iLocal_13 < iVar0)
		{
			iVar2 = (iVar1 * iLocal_13 + 1);
			if (iVar2 >= 65)
			{
				iVar2 = 64;
			}
			iVar3 = (iVar1 * iLocal_13);
			while (iVar3 <= iVar2)
			{
				if ((Global_1321273[iVar3 /*138*/].f_66 == joaat("omnis") || Global_1321273[iVar3 /*138*/].f_66 == joaat("le7b")) || Global_1321273[iVar3 /*138*/].f_66 == joaat("tyrus"))
				{
					if (Global_1321273[iVar3 /*138*/].f_98 == 0)
					{
						Global_1321273[iVar3 /*138*/].f_98 = 134;
					}
				}
				iVar3++;
			}
			iLocal_13++;
		}
		else
		{
			iLocal_13 = 0;
		}
	}
}

void func_85()
{
	if ((((((((!func_36() && !func_52()) && !func_51()) && !func_33()) && !unk_0x8D8D4FF46966DDEF()) && !unk_0x21A36E2323FEA4B1()) && unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6())) && func_56()) && Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_87 != 8)
	{
		if (((func_27() == 35 || func_27() == 33) || func_27() == 37) || func_27() == 21)
		{
			func_86();
		}
	}
}

void func_86()
{
	Global_978175 = -1;
}

void func_87()
{
	var uVar0;
	
	if (func_98() && !func_14(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if (unk_0x55812CD5A331E1F8())
		{
			if ((unk_0x21A36E2323FEA4B1() && Global_1617902 == 2) && Global_1617902.f_35640 != 0)
			{
				if (!iLocal_4)
				{
					if (Global_262145.f_5098 != 0)
					{
						iLocal_6 = Global_262145.f_5098;
						Global_262145.f_5098 = 0;
					}
					if (func_51())
					{
						iLocal_5 = 1;
					}
					else if ((iLocal_5 && unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6())) && !func_51())
					{
						func_88(1940862352, iLocal_6, &uVar0, 0, 1, 0);
						iLocal_4 = 1;
					}
				}
				else
				{
					if (iLocal_5)
					{
						iLocal_5 = 0;
					}
					if (Global_1573840)
					{
						if (Global_262145.f_5098 == 0)
						{
							func_4();
						}
					}
					else if (Global_262145.f_5098 != 0)
					{
						iLocal_6 = Global_262145.f_5098;
						Global_262145.f_5098 = 0;
					}
				}
			}
			else
			{
				func_4();
				iLocal_5 = 0;
				iLocal_6 = 0;
				iLocal_4 = 0;
			}
		}
		if (Global_1574338 != 0)
		{
			Global_1574338 = 0;
		}
		if (Global_1617902.f_77558 == 0)
		{
			Global_1617902.f_77558 = 1;
		}
	}
}

void func_88(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_97())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
			if (iParam1 > 0)
			{
				func_89(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
			func_89(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_89(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_97())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5A041CC4F10FF856(func_8()) || unk_0x8E2645554EC732F0())
		{
			Global_2563294 = 1;
			return 0;
		}
		if (Global_2445217)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2563295 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2562803[iVar1 /*73*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0x1CFE5997DD1709D1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x535D3302CA34FAFF(iVar3))
		{
			*uParam0 = func_96(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2562803[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2563285 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2563293 = 1;
			Global_2563296 = iParam4;
			Global_2563298 = iParam3;
			Global_2563299 = 1;
			Global_2563297 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2563296 = iParam4;
			Global_2563298 = iParam3;
			Global_2563299 = 1;
			Global_2563297 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_95(1, iParam4);
			Global_2563293 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_90(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_90(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xE27C8E42A97895CF(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_91(iParam0);
	}
}

void func_91(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_97())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_94(iParam0))
		{
			if (!bVar0)
			{
				unk_0x8FFE442E1A39D51A();
			}
		}
		else if (!bVar0)
		{
			unk_0x00C69F802173480C(Global_2562803[iParam0 /*73*/]);
		}
		func_92(&(Global_2562803[iParam0 /*73*/]));
	}
}

void func_92(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_93(&(uParam0->f_8.f_3));
	func_93(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
}

void func_93(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_94(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2562803[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_95(int iParam0, var uParam1)
{
	Global_2446544 = uParam1;
	Global_2446543 = iParam0;
}

int func_96(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2562803[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_97())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2562803[iVar0 /*73*/].f_2 = 1;
			Global_2562803[iVar0 /*73*/].f_1 = uParam5;
			Global_2562803[iVar0 /*73*/].f_3 = uParam1;
			Global_2562803[iVar0 /*73*/].f_4 = uParam2;
			Global_2562803[iVar0 /*73*/].f_7 = uParam3;
			Global_2562803[iVar0 /*73*/].f_5 = 0;
			Global_2562803[iVar0 /*73*/] = iParam0;
			Global_2562803[iVar0 /*73*/].f_6 = iParam4;
			Global_2562803[iVar0 /*73*/].f_69 = uParam8;
			Global_2562803[iVar0 /*73*/].f_68 = uParam7;
			Global_2562803[iVar0 /*73*/].f_72 = 0;
			Global_2563285 = 0;
			if (bParam6)
			{
				Global_2562803[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_97()
{
	if (unk_0x55812CD5A331E1F8())
	{
		return 1;
	}
	return 0;
}

bool func_98()
{
	return (unk_0x21A36E2323FEA4B1() && func_99());
}

int func_99()
{
	return func_100(Global_1617902.f_76918);
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_262145.f_5102[iVar1] == 2)
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (iParam0 == Global_262145.f_4944[iVar1 /*21*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

void func_101()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		switch (iVar1)
		{
			case 166:
				func_102();
				break;
		}
		iVar0++;
	}
}

void func_102()
{
	if (func_104() == 0)
	{
		if (unk_0x4A565589F1D7602B() == 0)
		{
			unk_0xC6E468695AA7BEC4(0);
		}
		func_103(1);
	}
	else if (func_104() == 1)
	{
		if (unk_0x4A565589F1D7602B() == 1)
		{
			unk_0xC6E468695AA7BEC4(1);
		}
		func_103(1);
	}
	else if (func_104() == 2)
	{
		if (unk_0x4A565589F1D7602B() == 2)
		{
			unk_0xC6E468695AA7BEC4(2);
		}
		func_103(1);
	}
	else if (func_104() == 3)
	{
		if (unk_0x4A565589F1D7602B() == 3)
		{
			unk_0xC6E468695AA7BEC4(3);
		}
		func_103(1);
	}
}

void func_103(int iParam0)
{
	Global_2446415 = iParam0;
}

int func_104()
{
	return Global_2446414;
}

void func_105()
{
	int iVar0;
	
	if (func_20() == 1)
	{
		if (func_106())
		{
			if (Global_262145.f_13219 == 1)
			{
				if (unk_0x17CC0D5008835470())
				{
					iVar0 = func_24("fm_race_creator");
					if (iVar0 != 0)
					{
						unk_0xE38301C93EB629A6(iVar0);
						unk_0xEB574DDECC1AE487(-101, 0, 0);
					}
				}
				else
				{
					Global_1312366 = 1;
				}
			}
		}
	}
}

bool func_106()
{
	return ((Global_1617902.f_35640 == 6 || Global_1617902.f_35640 == 7) || unk_0x7DA173D4FD42F36B(Global_1617902.f_13, 7));
}

void func_107()
{
	if (Global_25152 == 0)
	{
		if (iLocal_24 != -1 && unk_0x17CC0D5008835470())
		{
			iLocal_24 = -1;
			unk_0xC47A54800078DDCF(0);
		}
	}
	else if (Global_25152 == -1)
	{
		if (iLocal_24 != -1)
		{
			iLocal_24 = -1;
			unk_0xC47A54800078DDCF(0);
		}
	}
	else if (iLocal_24 == -1)
	{
		iLocal_24 = func_20();
	}
}

void func_108(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x049CCB8537E77D8B(sParam2);
	unk_0x31D14A3385CE358B(sParam3);
	unk_0xBF7878373D9EA4E7(fParam0, fParam1, 0);
}

void func_109()
{
	if (!bLocal_1)
	{
		if (unk_0x3DC360442A11BB38())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0xD471C64C0898A7BF(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0xD471C64C0898A7BF(2, 190))
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
					if (unk_0xD471C64C0898A7BF(2, 189))
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
					if (unk_0xD471C64C0898A7BF(2, 190))
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
					if (unk_0xD471C64C0898A7BF(2, 188))
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
	else if (unk_0x3DC360442A11BB38())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0xD471C64C0898A7BF(2, 188))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0xD471C64C0898A7BF(2, 190))
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
				if (unk_0xD471C64C0898A7BF(2, 189))
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
				if (unk_0xD471C64C0898A7BF(2, 190))
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
				if (unk_0xD471C64C0898A7BF(2, 189))
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

bool func_110()
{
	return unk_0xAACC697A3792B3EF(-1762644250);
}

