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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	float fLocal_87 = 0f;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	struct<19> Local_96 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_115 = 0;
	struct<4> Local_116[32];
	int iLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_87 = ((0.05f + 0.275f) - 0.01f);
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	if (unk_0x0E063DDE8855EC52() && func_228(unk_0x4D29100D094E5511(), 0, 1))
	{
		func_220(ScriptParam_0);
	}
	else
	{
		func_217();
	}
	while (true)
	{
		func_216();
		if (func_206() || func_202(16))
		{
			func_217();
		}
		if (unk_0x233AF2DB663CF21D())
		{
			func_217();
		}
		switch (func_201(unk_0x7025777635AB04C0()))
		{
			case 0:
				if (func_200() == 1)
				{
					func_199();
					Local_116[unk_0x7025777635AB04C0() /*4*/] = 1;
				}
				else if (func_200() == 4)
				{
					Local_116[unk_0x7025777635AB04C0() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_200() == 1)
				{
					func_99();
				}
				else if (func_200() == 4)
				{
					func_14();
					Local_116[unk_0x7025777635AB04C0() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_96.f_18));
				if (func_12(&(Local_96.f_18)))
				{
					Local_116[unk_0x7025777635AB04C0() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_116[unk_0x7025777635AB04C0() /*4*/] = 4;
			
			case 4:
				func_217();
				break;
		}
		if (unk_0x96BA6BF1BA1235CC())
		{
			switch (func_200())
			{
				case 0:
					Local_96.f_0 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_96.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_96.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	struct<14> Var0;
	
	switch (Local_96.f_7)
	{
		case 0:
			if (unk_0xF426A5DE932B3BEE(Local_96.f_1, 0))
			{
				Local_96.f_7 = 1;
			}
			else if (func_9(&(Local_96.f_8), 480000, 0))
			{
				Var0.f_2 = 115;
				func_7(Var0, func_8(1));
				unk_0x26545538B51562AD(&(Local_96.f_1), 1);
				Local_96.f_7 = 2;
			}
			break;
		
		case 1:
			func_4();
			break;
		
		case 2:
			break;
	}
}

void func_4()
{
	if (!func_9(&(Local_96.f_10), Local_96.f_12, 0))
	{
		if (func_9(&(Local_96.f_13), Local_96.f_15, 0))
		{
			Local_96.f_17++;
			Local_96.f_16 = func_6();
			func_5(&(Local_96.f_13));
		}
	}
	else
	{
		Local_96.f_7 = 2;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6()
{
	switch (Local_96.f_17)
	{
		case 0:
		case 1:
			return 2;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		
		case 6:
		case 7:
		case 8:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return Local_96.f_16;
}

void func_7(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x4D29100D094E5511();
	if (!iParam14 == 0)
	{
		unk_0xCE8ECD07286D394D(1, &Param0, 14, iParam14);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xD81B83309CFE36FF())
	{
		if (unk_0x6985B636BB8652CD(unk_0xA9A38637698616EF(iVar1)))
		{
			iVar2 = unk_0xFAA1C60127DA6F80(unk_0xA9A38637698616EF(iVar1));
			if (func_228(iVar2, 0, 0))
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

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

void func_10(var uParam0, bool bParam1, bool bParam2)
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

void func_11()
{
	int iVar0;
	
	if (Local_96.f_0 == 1)
	{
		if (unk_0x6985B636BB8652CD(unk_0xA9A38637698616EF(iLocal_251)))
		{
			iVar0 = unk_0xFAA1C60127DA6F80(unk_0xA9A38637698616EF(iLocal_251));
			if (func_228(iVar0, 1, 1))
			{
				if (!unk_0xF426A5DE932B3BEE(Local_96.f_1, 0))
				{
					if (unk_0xF426A5DE932B3BEE(Local_116[iLocal_251 /*4*/].f_1, 0))
					{
						iLocal_252 = 1;
						unk_0x26545538B51562AD(&(Local_96.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_251++;
	if (iLocal_251 == unk_0xD81B83309CFE36FF())
	{
		if (iLocal_252 == 0)
		{
			if (unk_0xF426A5DE932B3BEE(Local_96.f_1, 0))
			{
				unk_0xF17F4B0641AB2DE1(&(Local_96.f_1), 0);
			}
		}
		else
		{
			iLocal_252 = 0;
		}
		iLocal_251 = 0;
	}
}

int func_12(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x96BA6BF1BA1235CC())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_14()
{
	int iVar0;
	var uVar1;
	var uVar5;
	
	if (!unk_0xF426A5DE932B3BEE(iLocal_245, 1))
	{
		if ((unk_0xF426A5DE932B3BEE(Local_116[unk_0x7025777635AB04C0() /*4*/].f_1, 0) && unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) >= (Local_96.f_16 - 1)) && Local_116[unk_0x7025777635AB04C0() /*4*/].f_2 < 10)
		{
			Local_116[unk_0x7025777635AB04C0() /*4*/].f_2++;
		}
		if (Local_116[unk_0x7025777635AB04C0() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_116[unk_0x7025777635AB04C0() /*4*/].f_2 * Global_262145.f_6472);
			Global_2445403 = iVar0;
			func_82(&iVar0, 1);
			if (iVar0 > 0)
			{
				func_79(iVar0, 1, 1, 0);
				if (func_78())
				{
					func_69(-2043695058, iVar0, &uVar5, 0, 0, 0);
				}
				else
				{
					unk_0xE5C5279CAFD166FD(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (func_68())
			{
				func_55(12, "DSC_PASS0", 0, 0, -99);
			}
			else
			{
				func_55(12, "DSC_PASS1", 0, 0, -99);
			}
			func_20(50, iVar0, "DSC_CASH", "DSC_BIGM", 1, -1, -1082130432, 2);
			if (unk_0xF426A5DE932B3BEE(iLocal_245, 4))
			{
				if (!unk_0xF426A5DE932B3BEE(iLocal_245, 5))
				{
					func_15(66, 1, -1);
				}
			}
		}
		unk_0x26545538B51562AD(&iLocal_245, 1);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_17(iParam0, func_18(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_16(iParam0, iVar0, iParam2);
}

void func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2492260[iParam0 /*5*/][func_18(iParam2)];
	unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, 1);
}

int func_17(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2492260[iParam0 /*5*/][func_18(iParam1)];
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312747;
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_54(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_65 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_66 = iParam7;
	return func_21(&Var0);
}

int func_21(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2428492.f_2461)
		{
			return 0;
		}
	}
	func_27(uParam0, uParam0->f_16);
	func_24(uParam0);
	if (func_23(uParam0->f_1))
	{
		if (Global_2428492.f_2171[0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2428492.f_2171[0 /*72*/].f_1 == 13 || Global_2428492.f_2171[0 /*72*/].f_1 == 52) || Global_2428492.f_2171[0 /*72*/].f_1 == 53) || Global_2428492.f_2171[0 /*72*/].f_1 == 57)
		{
			Global_2428492.f_2171[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2428492.f_2171[iVar0 + 1 /*72*/] = { Global_2428492.f_2171[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2428492.f_2171[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2428492.f_2171[iVar0 /*72*/].f_2 == 0)
		{
			Global_2428492.f_2171[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x26545538B51562AD(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), 1);
				Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 84)
			{
				if (func_22(Global_2428492.f_2171[iVar0 /*72*/].f_1))
				{
					Global_2428492.f_2171[iVar0 /*72*/].f_2 = 5;
					unk_0x26545538B51562AD(&(Global_2428492.f_2171[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 86:
		case 85:
		case 88:
		case 89:
		case 84:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 87:
		case 97:
			return 1;
		
		default:
	}
	return 0;
}

int func_23(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_24(var uParam0)
{
	if (func_26(uParam0->f_1))
	{
		uParam0->f_66 = func_25();
	}
}

int func_25()
{
	return 21;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
			return 1;
		
		default:
	}
	return 0;
}

void func_27(var uParam0, int iParam1)
{
	if (func_26(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_53())
	{
		return;
	}
	if (func_22(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_28(iParam1, -2, 0, 0);
		}
	}
}

int func_28(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_49(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_49(unk_0x4D29100D094E5511()) || (func_48() && func_47()))
	{
		uVar0 = func_46();
		if (unk_0xD2CFFE76B625AE55(uVar0))
		{
			if (unk_0x30D6008994E431E8(uVar0))
			{
				if (unk_0x881548CC6D5B749B(uVar0) != -1)
				{
					if (func_228(unk_0x881548CC6D5B749B(uVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x9404B1BCD022816B()) && iParam1 < 4)
						{
							if (Global_1617379.f_66777[iParam1] != -1)
							{
								return func_45(iParam1, iParam0, 0);
							}
							else
							{
								return func_36(iParam0, unk_0x881548CC6D5B749B(uVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_36(iParam0, unk_0x881548CC6D5B749B(uVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x9404B1BCD022816B()) && iParam1 < 4)
			{
				if (Global_1617379.f_66777[iParam1] != -1)
				{
					return func_45(iParam1, iParam0, 0);
				}
				else
				{
					return func_29(0, -1, 0);
				}
			}
			else
			{
				return func_29(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x9404B1BCD022816B()) && iParam1 < 4)
	{
		if (Global_1617379.f_66777[iParam1] != -1)
		{
			return func_45(iParam1, iParam0, 0);
		}
		else
		{
			return func_36(iParam0, unk_0x4D29100D094E5511(), iParam1, bParam2, bParam3);
		}
	}
	return func_36(iParam0, unk_0x4D29100D094E5511(), iParam1, bParam2, bParam3);
}

int func_29(bool bParam0, int iParam1, bool bParam2)
{
	return func_30(unk_0x4D29100D094E5511(), bParam0, iParam1, bParam2);
}

int func_30(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xEDB589A956C2855F(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_35(iVar0, iParam2, 0) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_34(1);
				}
				else
				{
					return func_34(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xF426A5DE932B3BEE(Global_1617379.f_4, 20))
			{
				return func_31(iVar0, iParam2, 1);
			}
			else
			{
				return func_31(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_34(1);
	}
	return func_34(0);
}

int func_31(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_33(iParam0, iParam1);
	if (func_32(Global_1617379.f_70365))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7339[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_35(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_34(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_35(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 0);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 1);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 2);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 4);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 5);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 6);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 8);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 9);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 10);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 12);
				
				case 1:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 13);
				
				case 2:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 14);
				
				case 3:
					return unk_0xF426A5DE932B3BEE(Global_1617379.f_39, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_36(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xEDB589A956C2855F(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587523[unk_0x4D29100D094E5511() /*444*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587523[iVar2 /*444*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_44(iParam1, iParam0, iVar0, 0) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 18)) || ((func_35(unk_0xEDB589A956C2855F(iParam1), unk_0xEDB589A956C2855F(iParam0), 0) && unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 23)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 18)))
			{
				return func_34(1);
			}
			else if (unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 26))
			{
				return func_43(1);
			}
			else
			{
				return func_30(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587523[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_34(1);
			}
			else
			{
				return func_30(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_39(iParam0);
	if (!iVar3 == -1)
	{
		return func_37(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = func_38(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 1;
}

var func_38(int iParam0)
{
	return Global_2413760.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_39(int iParam0)
{
	if (!iParam0 == func_53())
	{
		if (func_41(iParam0, 1))
		{
			return Global_2413760.f_1946.f_11[func_40(iParam0)];
		}
	}
	return -1;
}

int func_40(int iParam0)
{
	if (iParam0 != func_53())
	{
		return Global_1610316[iParam0 /*174*/].f_10;
	}
	return func_53();
}

bool func_41(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_42(iParam0))
		{
			return 0;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_53();
}

int func_42(int iParam0)
{
	if (iParam0 != func_53())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_53())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_43(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_44(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xEDB589A956C2855F(iParam0) == -1 && unk_0xEDB589A956C2855F(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xEDB589A956C2855F(iParam0) == unk_0xEDB589A956C2855F(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xEDB589A956C2855F(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xEDB589A956C2855F(iParam0) == iParam2;
	}
	return unk_0xEDB589A956C2855F(iParam0) == iParam2;
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1617379.f_66777[iParam0] != -1 && Global_1617379.f_66777[iParam0] <= 4)
	{
		if (Global_1617379.f_66777[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617379.f_66777[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617379.f_66777[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617379.f_66777[iParam0] == 4)
		{
			if (unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1617379.f_66777[iParam0];
		}
	}
	else
	{
		iVar0 = func_30(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_46()
{
	return Global_2359301.f_2;
}

bool func_47()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 4);
}

bool func_48()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 14);
}

int func_49(int iParam0)
{
	if (func_51(iParam0, 0))
	{
		return 1;
	}
	if (func_50())
	{
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			return 1;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_50()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 3);
}

bool func_51(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_52(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_52(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_53()
{
	return -1;
}

void func_54(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_53();
	uParam1->f_17 = func_53();
	uParam1->f_18 = func_53();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = uParam2;
	uParam1->f_65 = 1;
	uParam1->f_68 = 1;
	uParam1->f_69 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

void func_55(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_56(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_56(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_57(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_57(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x75CB9E30BA492FF0(sParam1))
	{
		return;
	}
	if (unk_0x171888B136481692(sParam1) > 15)
	{
		return;
	}
	if (!unk_0x75CB9E30BA492FF0(sParam4))
	{
		if (unk_0x171888B136481692(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_66();
	if (iVar0 == -1)
	{
		return;
	}
	func_65(iVar0);
	func_64(iVar0, uParam0);
	func_63(iVar0, uParam2, bParam3);
	func_62(iVar0, sParam1);
	if (unk_0x75CB9E30BA492FF0(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_61(iVar0);
	if (!unk_0x75CB9E30BA492FF0(sParam4))
	{
		func_59(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_58(iVar0, iParam6);
	}
}

void func_58(int iParam0, int iParam1)
{
	Global_1332285.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_59(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1332285.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_60(iParam0);
}

void func_60(int iParam0)
{
	unk_0x26545538B51562AD(&(Global_1332285.f_59[iParam0 /*16*/]), 5);
}

void func_61(int iParam0)
{
	unk_0x26545538B51562AD(&(Global_1332285.f_59[iParam0 /*16*/]), 4);
}

void func_62(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1332285.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_63(int iParam0, var uParam1, bool bParam2)
{
	Global_1332285.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0x26545538B51562AD(&(Global_1332285.f_59[iParam0 /*16*/]), 2);
		unk_0xF17F4B0641AB2DE1(&(Global_1332285.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0x26545538B51562AD(&(Global_1332285.f_59[iParam0 /*16*/]), 3);
		unk_0xF17F4B0641AB2DE1(&(Global_1332285.f_59[iParam0 /*16*/]), 2);
	}
}

void func_64(int iParam0, var uParam1)
{
	Global_1332285.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_65(int iParam0)
{
	unk_0x26545538B51562AD(&(Global_1332285.f_59[iParam0 /*16*/]), 0);
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_67(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_67(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_1332285.f_59[iParam0 /*16*/], 0);
}

int func_68()
{
	if (unk_0xF426A5DE932B3BEE(unk_0x3A5708FEE1B560A9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_69(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_78())
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
				func_70(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_70(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_70(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_78())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x6DDA083DB04D1FA1(func_19()) || unk_0xC0EF410FE489E4BC())
		{
			Global_2558637 = 1;
			return 0;
		}
		if (Global_2444207)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2558638 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2558146[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0xFF60755759699F54(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB4593E48EB78775A(iVar3))
		{
			*uParam0 = func_77(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2558146[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2558628 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2558636 = 1;
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2558639 = iParam4;
			Global_2558641 = iParam3;
			Global_2558642 = 1;
			Global_2558640 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_76(1, iParam4);
			Global_2558636 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_71(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_71(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x26545538B51562AD(&(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_72(iParam0);
	}
}

void func_72(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_78())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_75(iParam0))
		{
			if (!bVar0)
			{
				unk_0x8B4018F9DEC0BCDE();
			}
		}
		else if (!bVar0)
		{
			unk_0xA5546C3771405485(Global_2558146[iParam0 /*73*/]);
		}
		func_73(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_73(var uParam0)
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
	func_74(&(uParam0->f_8.f_3));
	func_74(&(uParam0->f_8.f_16));
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

void func_74(var uParam0)
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

int func_75(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

void func_76(int iParam0, var uParam1)
{
	Global_2445534 = uParam1;
	Global_2445533 = iParam0;
}

int func_77(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_78())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2558146[iVar0 /*73*/].f_2 = 1;
			Global_2558146[iVar0 /*73*/].f_1 = uParam5;
			Global_2558146[iVar0 /*73*/].f_3 = uParam1;
			Global_2558146[iVar0 /*73*/].f_4 = uParam2;
			Global_2558146[iVar0 /*73*/].f_7 = uParam3;
			Global_2558146[iVar0 /*73*/].f_5 = 0;
			Global_2558146[iVar0 /*73*/] = iParam0;
			Global_2558146[iVar0 /*73*/].f_6 = iParam4;
			Global_2558146[iVar0 /*73*/].f_69 = uParam8;
			Global_2558146[iVar0 /*73*/].f_68 = uParam7;
			Global_2558146[iVar0 /*73*/].f_72 = 0;
			Global_2558628 = 0;
			if (bParam6)
			{
				Global_2558146[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_78()
{
	if (unk_0xDFCB321F1D24137F())
	{
		return 1;
	}
	return 0;
}

void func_79(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_80(iParam0, iParam1, iParam2, fParam3);
}

void func_80(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = unk_0xF34EE736CF047844((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_195.f_4 = iVar1;
	Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_195.f_3 = (Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_195.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_81(iVar1, 0);
	}
}

void func_81(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_98())
		{
			if (func_97(0))
			{
				if (unk_0x27C9C05A6B4E58D2(func_96()))
				{
					if (func_95() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_95());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_93(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_86("GB_BCUT_TICK1", func_96(), iVar0, 0, 0, 1, 1);
					}
					func_85(20);
					func_83(func_96(), iVar0, 1);
				}
			}
		}
	}
}

void func_83(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_228(iParam0, 0, 1))
	{
		Var0.f_0 = 447;
		Var0.f_1 = unk_0x4D29100D094E5511();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xCE8ECD07286D394D(1, &Var0, 5, func_84(iParam0));
	}
}

var func_84(int iParam0)
{
	var uVar0;
	
	unk_0x26545538B51562AD(&uVar0, iParam0);
	return uVar0;
}

void func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x26545538B51562AD(&(Global_2460486.f_4660.f_7[iVar0]), iVar1);
}

int func_86(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xF05E4A287C3CAFE3(unk_0x4D29100D094E5511(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xD358A441FAC2240C(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xD358A441FAC2240C(iParam1), 64);
		}
		unk_0x5411F6B456B04A6B(sParam0);
		unk_0xF4D4BFD98B32BF85(func_28(iParam1, -2, 1, 0));
		unk_0xF9E9E11D6DF3EBF8(func_91(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xF4D4BFD98B32BF85(iParam3);
		}
		unk_0x90805938ADF0F45C(iParam2);
		iVar0 = unk_0xF51DE8AFFD9CC3C9(0, 1);
		func_87(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_87(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_90() || !unk_0x9404B1BCD022816B()) || !func_51(unk_0x4D29100D094E5511(), 0))
	{
		return;
	}
	iVar0 = func_88(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1724230.f_5[iVar0 /*53*/] = iParam0;
		Global_1724230.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1724230.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1724230.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1724230.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1724230.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1724230.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1724230.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_88(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1724230 - 1))
	{
		if (iParam0 > Global_1724230.f_5[iVar0 /*53*/].f_1)
		{
			func_89(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1724230++;
	if (Global_1724230 > 5)
	{
		Global_1724230 = 5;
		return Global_1724230;
	}
	return (Global_1724230 - 1);
}

void func_89(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1724230.f_5[iVar0 /*53*/] = { Global_1724230.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_90()
{
	return unk_0xA29E536967D6DF2E(-1762644250);
}

var func_91(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_92(&cVar0);
}

var func_92(char[4] cParam0)
{
	return cParam0;
}

void func_93(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_94(1);
	}
	else
	{
		iVar1 = func_94(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_94(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10329;
}

int func_95()
{
	return Global_262145.f_10328;
}

int func_96()
{
	return Global_1610316[unk_0x4D29100D094E5511() /*174*/].f_10;
}

bool func_97(bool bParam0)
{
	return func_41(unk_0x4D29100D094E5511(), bParam0);
}

bool func_98()
{
	return func_42(unk_0x4D29100D094E5511());
}

void func_99()
{
	func_197();
	if (unk_0x7B4654D62B7E0E9E(uLocal_246))
	{
		if (func_195())
		{
			unk_0xC11BDDB34C4D6840(uLocal_246, 0);
		}
		else
		{
			unk_0xC11BDDB34C4D6840(uLocal_246, 4);
		}
	}
	switch (Local_116[unk_0x7025777635AB04C0() /*4*/].f_3)
	{
		case 0:
			if (unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Local_96.f_2, Local_96.f_5, Local_96.f_5, 1000f, 0, 1, 0))
			{
				func_172();
				unk_0x26545538B51562AD(&(Local_116[unk_0x7025777635AB04C0() /*4*/].f_1), 0);
				unk_0x26545538B51562AD(&(Global_2460486.f_4430), 0);
				Local_116[unk_0x7025777635AB04C0() /*4*/].f_3 = 1;
			}
			if (Local_96.f_7 > 1)
			{
				Local_116[unk_0x7025777635AB04C0() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_159();
			func_100();
			if (Local_96.f_7 > 1)
			{
				Local_116[unk_0x7025777635AB04C0() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_100()
{
	func_158();
	func_109();
	func_102();
	func_101();
}

void func_101()
{
	if (!unk_0xF426A5DE932B3BEE(iLocal_245, 5))
	{
		if (!unk_0xF426A5DE932B3BEE(iLocal_245, 4))
		{
			if (Local_96.f_17 == 0)
			{
				unk_0x26545538B51562AD(&iLocal_245, 4);
			}
			else
			{
				unk_0x26545538B51562AD(&iLocal_245, 5);
			}
		}
		else if (!func_228(unk_0x4D29100D094E5511(), 1, 1))
		{
			unk_0x26545538B51562AD(&iLocal_245, 5);
		}
	}
}

void func_102()
{
	if (((unk_0xAD352C89B015DEBA() == 7 || unk_0xAD352C89B015DEBA() == 8) || unk_0xAD352C89B015DEBA() == 9) || unk_0xAD352C89B015DEBA() == 10)
	{
		func_108();
	}
	else
	{
		func_107();
	}
	if ((Local_96.f_12 - func_106(&(Local_96.f_10), 0, 0)) >= 0)
	{
		func_103((Local_96.f_12 - func_106(&(Local_96.f_10), 0, 0)), "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_103(0, "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_103(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_105(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339940.f_1 = 1;
		func_104(7, iVar0);
		Global_1339940.f_4109[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_4109.f_172[iVar0] = iParam2;
		Global_1339940.f_4109.f_216[iVar0] = iParam3;
		Global_1339940.f_4109.f_183[iVar0] = iParam4;
		Global_1339940.f_4109.f_194[iVar0] = iParam5;
		Global_1339940.f_4109.f_249[iVar0] = iParam6;
		Global_1339940.f_4109.f_260[iVar0] = iParam7;
		Global_1339940.f_4109.f_205[iVar0] = iParam8;
		Global_1339940.f_4109.f_314[iVar0] = iParam9;
		Global_1339940.f_4109.f_325[iVar0] = iParam10;
		Global_1339940.f_4109.f_357[iVar0] = iParam11;
		Global_1339940.f_4109.f_238[iVar0] = iParam12;
		Global_1339940.f_4109.f_271[iVar0] = iParam13;
		Global_1339940.f_4109.f_368[iVar0] = iParam14;
		Global_1339940.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_104(int iParam0, int iParam1)
{
	unk_0x26545538B51562AD(&(Global_1339940.f_4726[iParam0]), iParam1);
}

bool func_105(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_1339940.f_4726[iParam0], iParam1);
}

int func_106(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x0E063DDE8855EC52() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x46979BF7DA499D4E(unk_0x20D394965B47B01A(), *uParam0);
		}
		else
		{
			return unk_0x46979BF7DA499D4E(unk_0xBADD1A643AD56F36(), *uParam0);
		}
	}
	return unk_0x46979BF7DA499D4E(unk_0xA0F74982C6AAA9D4(), *uParam0);
}

void func_107()
{
	Global_1339940.f_942 = 1;
}

void func_108()
{
	Global_1339940.f_941 = 1;
}

void func_109()
{
	if (func_9(&uLocal_247, 30000, 0))
	{
		switch (Local_96.f_16)
		{
			case 2:
				func_155(2097, 1, -1);
				break;
			
			case 3:
				func_155(2098, 1, -1);
				break;
			
			case 4:
				func_155(2099, 1, -1);
				break;
			
			case 5:
				func_155(2100, 1, -1);
				break;
		}
		func_110(0, unk_0x27D769C59BC9D030(), "XPT_DSC", -1636175450, 2048546661, (Global_262145.f_6473 * Local_96.f_16), 1, -1, 0, 0);
		Local_116[unk_0x7025777635AB04C0() /*4*/].f_2++;
		func_5(&uLocal_247);
	}
}

int func_110(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_120(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD2CFFE76B625AE55(iParam1))
		{
			if (unk_0x54F37403E01EFD97(iParam1))
			{
				uVar1 = unk_0x97EA5EA3E7FE8500(iParam1);
				func_116(unk_0x52AB056B2AF7BB53(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_111(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_111(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_114(iParam0, 1) };
	if (iParam0 == func_113(unk_0x27D769C59BC9D030()))
	{
		func_112(1);
	}
	func_116(Var0, iParam1, 0, sParam2);
}

void func_112(int iParam0)
{
	Global_2428492.f_1355 = iParam0;
}

int func_113(var uParam0)
{
	return uParam0;
}

Vector3 func_114(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_115(unk_0x27D769C59BC9D030()) && unk_0xD7DDFCF6557D9296(unk_0x7DC564DE3CF907A4()) == 4)
	{
		Var0 = { unk_0xD7C4E2CB0B216852(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		fVar3 = unk_0x4D6B971C8AEE130C(iParam0);
	}
	unk_0x3DE83953A8E7C5D3(unk_0x946C63BD9EF05437(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0x8E183FB8F99DD2D7(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_115(var uParam0)
{
	return uParam0;
}

void func_116(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2428492.f_774[iVar0 /*29*/].f_6 == 0 || Global_2428492.f_774[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2428492.f_774[iVar1 /*29*/] = { Param0 };
			Global_2428492.f_774[iVar1 /*29*/].f_6 = 1;
			Global_2428492.f_774[iVar1 /*29*/].f_4 = func_119(Global_2428492.f_774[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2428492.f_774[iVar1 /*29*/].f_7 = unk_0x20D394965B47B01A();
			Global_2428492.f_774[iVar1 /*29*/].f_3 = iParam3;
			Global_2428492.f_774[iVar1 /*29*/].f_8 = iParam4;
			Global_2428492.f_774[iVar1 /*29*/].f_9 = func_118();
			Global_2428492.f_774[iVar1 /*29*/].f_10 = func_117();
			StringCopy(&(Global_2428492.f_774[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_117()
{
	if (Global_2428492.f_1355)
	{
		Global_2428492.f_1355 = 0;
		return 1;
	}
	Global_2428492.f_1355 = 0;
	return 0;
}

var func_118()
{
	var uVar0;
	
	uVar0 = Global_2428492.f_1357;
	Global_2428492.f_1357 = 1;
	return uVar0;
}

float func_119(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x676D4CD42E0837CA(unk_0xDD23360B0FA2E0E2(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_120(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_121(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_121(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_154(unk_0x4D29100D094E5511()) || func_153(unk_0x4D29100D094E5511()))
	{
		if (Global_262145.f_7596 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7596;
		}
	}
	else if (Global_262145.f_5039 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5039;
	}
	if (func_152(uParam2))
	{
	}
	if (func_151())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_149(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_148(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_145(0, &iVar1);
					break;
				
				case 3:
					func_145(1, &iVar1);
					break;
				
				case 1:
					func_142(&iVar1);
					break;
				}
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_155(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_132((func_141(unk_0x4D29100D094E5511()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x3D7FB311FE0FCB8D(iVar1, iParam8, iParam9);
				if (Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_2 != -1)
				{
					func_155(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_126(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_122((func_124(unk_0x4D29100D094E5511()) + iVar1));
			}
			else
			{
				func_122((func_124(unk_0x4D29100D094E5511()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_122(int iParam0)
{
	if (func_151())
	{
		Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_195.f_5 = iParam0;
		func_123(joaat("mpply_globalxp"), iParam0);
	}
}

void func_123(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, uParam1, 1);
	}
}

int func_124(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_228(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x4D29100D094E5511())
			{
				return func_125(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_125(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_125(int iParam0)
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

void func_126(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_131(unk_0x4D29100D094E5511()) };
	if (unk_0x4A95235C630E7410())
	{
		if (unk_0x5363E9DA9285526E(&Var0))
		{
			iVar13 = func_129(func_130(&Var0));
			if (iVar13 == 0)
			{
				func_128(&Global_1347641, iParam0);
				func_127(joaat("mpply_crew_local_xp_0"), Global_1347641);
			}
			else if (iVar13 == 1)
			{
				func_128(&Global_1347642, iParam0);
				func_127(joaat("mpply_crew_local_xp_1"), Global_1347642);
			}
			else if (iVar13 == 2)
			{
				func_128(&Global_1347643, iParam0);
				func_127(joaat("mpply_crew_local_xp_2"), Global_1347643);
			}
			else if (iVar13 == 3)
			{
				func_128(&Global_1347644, iParam0);
				func_127(joaat("mpply_crew_local_xp_3"), Global_1347644);
			}
			else if (iVar13 == 4)
			{
				func_128(&Global_1347645, iParam0);
				func_127(joaat("mpply_crew_local_xp_4"), Global_1347645);
			}
		}
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347636 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347639 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347640 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347641 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347642 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347643 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347644 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347645 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347646 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347647 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347648 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347649 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347650 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347651 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347652 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_128(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_129(int iParam0)
{
	if (iParam0 == Global_1347636)
	{
		return 0;
	}
	else if (iParam0 == Global_1347637)
	{
		return 1;
	}
	else if (iParam0 == Global_1347638)
	{
		return 2;
	}
	else if (iParam0 == Global_1347639)
	{
		return 3;
	}
	else if (iParam0 == Global_1347640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_130(var uParam0)
{
	if (unk_0x4A95235C630E7410())
	{
		if (unk_0x5363E9DA9285526E(uParam0))
		{
			return Global_2443013;
		}
	}
	return Global_2443013;
}

struct<13> func_131(int iParam0)
{
	struct<13> Var0;
	
	unk_0x224B05ED6725EA52(iParam0, &Var0, 13);
	return Var0;
}

void func_132(int iParam0, int iParam1, int iParam2)
{
	if (func_151())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7571 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347756[func_18(-1)])
				{
					unk_0x3D7FB311FE0FCB8D(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347756[func_18(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x3D7FB311FE0FCB8D(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7570 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x3D7FB311FE0FCB8D(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_140(unk_0x4D29100D094E5511()))
		{
			Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_195.f_1 = iParam0;
			Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_195.f_6 = func_138(iParam0, 1);
		}
		func_137(632, iParam0, -1, 1);
		func_136(633, func_138(iParam0, 1), -1, 1);
		Global_1347756[func_18(-1)] = iParam0;
		func_133(7, 0);
	}
}

void func_133(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_135(iParam0, iParam1))
	{
		iVar0 = func_134();
		Global_2442990[iVar0] = iParam0;
	}
}

int func_134()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2442990[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_135(int iParam0, var uParam1)
{
	if (Global_1315901)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_136(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
	}
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347702[func_18(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347708[func_18(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347714[func_18(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347720[func_18(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347678[func_18(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347684[func_18(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347690[func_18(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347696[func_18(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347654[func_18(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347660[func_18(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347666[func_18(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347672[func_18(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347726[func_18(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347732[func_18(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347738[func_18(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347744[func_18(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347750[func_18(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347756[func_18(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347762[func_18(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2492924[0 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2492924[1 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2492924[2 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2492924[3 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3891:
			Global_2492986[func_18(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347768[func_18(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347774[func_18(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347780[func_18(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347786[func_18(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2492955[0 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2492955[1 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2492955[2 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2492955[3 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2492955[4 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2492991[0 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2492991[1 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2492991[2 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2492991[3 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2492991[4 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2493017[0 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2493017[1 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2493017[2 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2493017[3 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2493017[4 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2492955[5 /*5*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2492924[4 /*6*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2493043[func_18(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2493058[func_18(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2493048[func_18(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2493063[func_18(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2493053[func_18(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2493068[func_18(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2493073[func_18(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_138(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_139(iParam0, 0);
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_275884[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_275884[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_140(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xF426A5DE932B3BEE(Global_2428492.f_1, iParam0);
	}
	return 1;
}

int func_141(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x4D29100D094E5511())
			{
				return Global_1347756[func_18(-1)];
			}
			else if (func_140(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_18(-1)];
	}
	return 0;
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xEDB589A956C2855F(unk_0x4D29100D094E5511());
	iVar0 = 0;
	while (iVar0 < unk_0xD81B83309CFE36FF())
	{
		iVar4 = unk_0xA9A38637698616EF(iVar0);
		if (unk_0x6985B636BB8652CD(iVar4))
		{
			iVar5 = unk_0xFAA1C60127DA6F80(iVar4);
			if (unk_0xEDB589A956C2855F(iVar5) != -1)
			{
				if (unk_0xEDB589A956C2855F(iVar5) == iVar1 || func_35(unk_0xEDB589A956C2855F(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x4D29100D094E5511())
					{
						if (func_144(unk_0x4D29100D094E5511(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_143(*iParam0, 100) * (10f * Global_262145.f_4211)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_143(*iParam0, 100) * (20f * Global_262145.f_4204)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_143(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_144(int iParam0, int iParam1)
{
	if (unk_0x4A95235C630E7410())
	{
		Global_2459440 = { func_131(iParam0) };
		Global_2459453 = { func_131(iParam1) };
		if (unk_0x5363E9DA9285526E(&Global_2459440))
		{
			if (unk_0x5363E9DA9285526E(&Global_2459453))
			{
				unk_0xCA2992FB3936A00C(&Global_2459370, 35, &Global_2459440);
				unk_0xCA2992FB3936A00C(&Global_2459405, 35, &Global_2459453);
				if (Global_2459370 == Global_2459405)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_145(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xD81B83309CFE36FF())
		{
			iVar3 = iVar0;
			if (unk_0x6985B636BB8652CD(iVar3))
			{
				iVar4 = unk_0xFAA1C60127DA6F80(iVar3);
				if (func_228(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x4D29100D094E5511())
					{
						iVar1++;
						if (func_144(unk_0x4D29100D094E5511(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_228(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x4D29100D094E5511())
				{
					if (func_146(unk_0x4D29100D094E5511(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_144(unk_0x4D29100D094E5511(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_143(*iParam1, 100) * (10f * Global_262145.f_4211)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_143(*iParam1, 100) * (20f * Global_262145.f_4204)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_146(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_147(iParam0), func_147(iParam1));
	return 0f;
}

Vector3 func_147(var uParam0)
{
	return unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(uParam0), 0);
}

int func_148(int iParam0)
{
	int iVar0;
	
	if (unk_0xF436232699272DC3() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_143(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_149(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x2D8D75F813225B7B(iParam0) > func_141(unk_0x4D29100D094E5511()))
		{
			iParam0 = -func_141(unk_0x4D29100D094E5511());
		}
	}
	if (func_150(8000, 0, 0) > 0)
	{
		if (func_150(8000, 0, 0) < (iParam0 + func_141(unk_0x4D29100D094E5511())))
		{
			iParam0 = (func_150(8000, 0, 0) - func_141(unk_0x4D29100D094E5511()));
		}
	}
	return iParam0;
}

int func_150(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_275884[iParam0];
}

int func_151()
{
	return 1;
}

int func_152(var uParam0)
{
	if (unk_0x0275404839C0A19A(uParam0))
	{
		return 1;
	}
	else if (unk_0xC1C5B83BB6719C6C(uParam0, "") || unk_0xC1C5B83BB6719C6C(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_153(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

bool func_154(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

void func_155(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_157(iParam0, func_18(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_156(iParam0))
	{
		func_136(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_137(iParam0, iVar0, iParam2, 1);
	}
}

int func_156(int iParam0)
{
	if (Global_1347635)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2907:
			case 3036:
			case 3891:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return 1;
				break;
			}
	}
	return 0;
}

int func_157(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2469339[iParam0 /*5*/][func_18(iParam1)];
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_158()
{
	if (func_9(&uLocal_249, 10000, 0))
	{
		if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) < Local_96.f_16)
		{
			unk_0x97FFE53522693832(unk_0x4D29100D094E5511(), Local_96.f_16, 0);
			unk_0x774840DEC1F0175E(unk_0x4D29100D094E5511(), 0);
		}
		unk_0xD0D4327CB5C33C15(unk_0x4D29100D094E5511());
	}
}

void func_159()
{
	if (!unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Local_96.f_2, Local_96.f_5, Local_96.f_5, 1000f, 0, 1, 0))
	{
		func_162();
		Local_116[unk_0x7025777635AB04C0() /*4*/].f_3 = 0;
	}
	else if (!unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Local_96.f_2, Local_96.f_6, Local_96.f_6, 950f, 0, 1, 0))
	{
		if (!unk_0xF426A5DE932B3BEE(iLocal_245, 0) && unk_0xF426A5DE932B3BEE(iLocal_245, 3))
		{
			if (!unk_0x46768B1495288824() && !func_161())
			{
				if (!func_195())
				{
					func_160("DCP_LEAVE", -1);
				}
				unk_0x26545538B51562AD(&iLocal_245, 0);
			}
		}
	}
	else
	{
		if (!unk_0xF426A5DE932B3BEE(iLocal_245, 3))
		{
			unk_0x26545538B51562AD(&iLocal_245, 3);
		}
		if (unk_0xF426A5DE932B3BEE(iLocal_245, 0))
		{
			unk_0xF17F4B0641AB2DE1(&iLocal_245, 0);
		}
	}
}

void func_160(char* sParam0, int iParam1)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	unk_0x9785EE0D78241684(0, 0, 1, iParam1);
}

bool func_161()
{
	return unk_0xA0F74982C6AAA9D4() <= Global_17257.f_5745 + 100;
}

void func_162()
{
	func_5(&uLocal_247);
	func_5(&uLocal_249);
	func_163();
	unk_0xF17F4B0641AB2DE1(&(Local_116[unk_0x7025777635AB04C0() /*4*/].f_1), 0);
	unk_0xF17F4B0641AB2DE1(&iLocal_245, 3);
	unk_0x26545538B51562AD(&(Global_2460486.f_4430), 0);
	if (!unk_0xF426A5DE932B3BEE(iLocal_245, 5))
	{
		unk_0x26545538B51562AD(&iLocal_245, 5);
	}
}

void func_163()
{
	if (unk_0xF426A5DE932B3BEE(iLocal_245, 2))
	{
		func_164(1, 1);
		unk_0xF17F4B0641AB2DE1(&iLocal_245, 2);
	}
}

void func_164(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404956.f_39 = { Global_2406784 };
	}
	else
	{
		Global_2404956.f_39 = { Global_2406784 };
		Global_2404956.f_39.f_49 = { Global_2406784.f_49 };
		Global_2404956.f_39.f_52 = Global_2406784.f_52;
		Global_2404956.f_39.f_53 = Global_2406784.f_53;
	}
	if (bParam0)
	{
		func_171();
	}
	func_167(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_166(0);
	func_165();
}

void func_165()
{
	struct<4> Var0;
	
	if (Global_2404956.f_469.f_1 == unk_0xF42B3EF31F918DB2())
	{
		Global_2404956.f_469 = { Var0 };
	}
}

void func_166(bool bParam0)
{
	if (bParam0)
	{
		Global_2404956.f_633 = 0;
	}
	else
	{
		Global_2404956.f_633 = 1;
	}
}

void func_167(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		Global_2404956.f_1139 = iParam1;
		Global_2404956.f_1140 = iParam2;
		Global_2404956.f_1141 = iParam10;
		func_169();
		func_168(8, 0, 0);
		Global_2404956.f_634 = 1;
		Global_2404956.f_1142 = iParam11;
		Global_2404956.f_1145 = iParam3;
		Global_2404956.f_1146 = iParam4;
		Global_2404956.f_1143 = iParam5;
		Global_2404956.f_1144 = iParam6;
		Global_2404956.f_1147 = iParam7;
		Global_2404956.f_1148 = iParam8;
		Global_2404956.f_1149 = iParam9;
	}
	else
	{
		func_169();
		func_168(0, 0, 0);
		Global_2404956.f_634 = 0;
	}
}

void func_168(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409529 = 0;
	}
	Global_2404956.f_469 = iParam0;
	Global_2404956.f_469.f_1 = unk_0xF42B3EF31F918DB2();
	Global_2404956.f_469.f_2 = iParam1;
	Global_2404956.f_469.f_3 = iParam2;
}

void func_169()
{
	func_170();
	Global_2404956.f_635 = 0;
}

void func_170()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404956.f_636[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_171()
{
	Global_2404956.f_347 = { Global_2407092 };
}

void func_172()
{
	if (!unk_0xF426A5DE932B3BEE(iLocal_245, 2))
	{
		func_191(Local_96.f_2, (Local_96.f_6 * 1.5f), 0, 0, 1, 0);
		func_174(Local_96.f_2, Local_96.f_6, 0, 1);
		func_173(Local_96.f_2, 1, 0);
		unk_0x26545538B51562AD(&iLocal_245, 2);
	}
}

void func_173(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404956.f_39.f_49 = { Param0 };
	Global_2404956.f_39.f_52 = iParam3;
	Global_2404956.f_39.f_53 = iParam4;
}

void func_174(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	func_175(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam5);
}

void func_175(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_184(unk_0x4D29100D094E5511()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_183(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_178(Var0))
		{
			Global_2404956.f_39.f_64 = func_177(unk_0x4D29100D094E5511());
			func_176(Var0, iParam8);
		}
	}
}

void func_176(struct<12> Param0, int iParam12)
{
	Global_2404956.f_347[iParam12 /*12*/] = { Param0 };
	Global_2404956.f_347[iParam12 /*12*/].f_9 = 1;
}

int func_177(int iParam0)
{
	if (func_228(iParam0, 0, 1))
	{
		return Global_2418472[iParam0 /*313*/].f_1;
	}
	return 0;
}

int func_178(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2404956.f_39[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_179(Global_2404956.f_39[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_179(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_182(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_180(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_182(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_180(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (unk_0x652D2EEEF1D3E62C(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_180(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_181(Param0, Param3, Var0, Var3);
}

int func_181(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_182(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_183(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var3.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var3.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var3.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var3.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var3.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var3 };
}

int func_184(int iParam0)
{
	if ((func_187(iParam0, 1) || func_186(iParam0)) || func_185(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0, int iParam1)
{
	if (Global_1610316[iParam0 /*174*/].f_10.f_28 != -1 || (iParam1 && Global_1610316[iParam0 /*174*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

int func_186(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610316[iVar0 /*174*/] != -1;
	}
	return 0;
}

bool func_187(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_177(iParam0) != 0;
	}
	return func_188(iParam0, bParam1);
}

int func_188(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_189(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587523[iParam0 /*444*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_189(int iParam0)
{
	return func_190(iParam0);
}

bool func_190(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_13.f_1, 0);
}

void func_191(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_192(Param0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_192(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11)
{
	struct<12> Var0;
	
	if (func_184(unk_0x4D29100D094E5511()) || uParam9)
	{
		if (Global_2404956.f_634)
		{
			func_194();
		}
		if (Var0.f_10 == 1)
		{
			func_183(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		Var0.f_11 = uParam10;
		Var0.f_8 = uParam11;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2404956.f_39.f_64 = func_177(unk_0x4D29100D094E5511());
		func_193(Var0, iParam8);
	}
}

void func_193(struct<12> Param0, int iParam12)
{
	Global_2404956.f_39[iParam12 /*12*/] = { Param0 };
	Global_2404956.f_39[iParam12 /*12*/].f_9 = 1;
}

void func_194()
{
	func_170();
	Global_2404956.f_634 = 0;
}

int func_195()
{
	if (func_196(19))
	{
		return 1;
	}
	if (func_196(0))
	{
		return 1;
	}
	return 0;
}

bool func_196(int iParam0)
{
	var uVar0;
	
	uVar0 = func_157(2458, -1, 0);
	return unk_0xF426A5DE932B3BEE(uVar0, iParam0);
}

void func_197()
{
	if (!unk_0xF426A5DE932B3BEE(iLocal_245, 6))
	{
		if (((((((func_198(60000) && func_200() == 1) && Local_96.f_7 <= 1) && !unk_0x46768B1495288824()) && !unk_0x1E114237D972903B()) && func_228(unk_0x4D29100D094E5511(), 1, 1)) && !func_161()) && Local_96.f_16 != 5)
		{
			if (!func_195())
			{
				func_160("DCP_HELP1", -1);
			}
			unk_0x26545538B51562AD(&iLocal_245, 6);
		}
	}
}

bool func_198(int iParam0)
{
	return unk_0x2D8D75F813225B7B(unk_0x46979BF7DA499D4E(Global_2410698, unk_0x20D394965B47B01A())) > iParam0;
}

void func_199()
{
	if (unk_0x7B4654D62B7E0E9E(uLocal_246))
	{
		if (func_195())
		{
			unk_0xC11BDDB34C4D6840(uLocal_246, 0);
		}
		else
		{
			unk_0xC11BDDB34C4D6840(uLocal_246, 4);
		}
	}
	else
	{
		uLocal_246 = unk_0xCFE7EAD1241D5643(Local_96.f_2, Local_96.f_5);
		unk_0x8D910E607F73E53D(uLocal_246, 50);
		unk_0xB412D79FA1018FF0(uLocal_246, 220);
		unk_0xE7BA3946385B4D19(uLocal_246, 0);
		unk_0xC5B67A5E18AF2B72(uLocal_246, "DCP_BLIPN");
		if (func_195())
		{
			unk_0xC11BDDB34C4D6840(uLocal_246, 0);
		}
	}
}

int func_200()
{
	return Local_96.f_0;
}

int func_201(int iParam0)
{
	return Local_116[iParam0 /*4*/];
}

bool func_202(int iParam0)
{
	return !func_203(iParam0);
}

int func_203(int iParam0)
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
			if (Global_262145.f_5064)
			{
				return 0;
			}
			if (func_205(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_5065)
			{
				return 0;
			}
			if (func_205(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_5066)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_5067)
			{
				return 0;
			}
			if (func_205(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_204(4))
			{
				return 0;
			}
			if (func_205(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_204(4))
			{
				return 0;
			}
			if (func_205(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_204(4))
			{
				return 0;
			}
			if (func_205(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_204(4))
			{
				return 0;
			}
			if (func_205(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			if (unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 0) || unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_250.f_7, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_204(4))
			{
				return 0;
			}
			if (func_205(unk_0x4D29100D094E5511(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_204(4))
			{
				return 0;
			}
			if (func_205(unk_0x4D29100D094E5511(), 7))
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

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_228(unk_0x6EED86A16F7EA8F2(iVar0), 0, 1))
		{
			if (unk_0xF426A5DE932B3BEE(Global_2418472[iVar0 /*313*/].f_206, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_205(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_206, iParam1);
}

int func_206()
{
	bool bVar0;
	
	func_213(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			return 1;
		}
	}
	if (func_212())
	{
		return 1;
	}
	if (Global_2445442)
	{
		return 1;
	}
	if (func_211())
	{
		return 1;
	}
	if (func_210(157))
	{
		if (!func_209())
		{
			return 1;
		}
	}
	if (func_210(155))
	{
		return 1;
	}
	if (!unk_0x88E055AE81551426())
	{
		return 1;
	}
	if (func_207() != 0)
	{
		if (unk_0xD32535FA4397160F(func_207()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_207()
{
	switch (func_208())
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

int func_208()
{
	return Global_25120;
}

bool func_209()
{
	return Global_2434762.f_574;
}

int func_210(int iParam0)
{
	if (unk_0x9CDCE7BB256E1E4B(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_211()
{
	return Global_2443085;
}

bool func_212()
{
	return Global_2434762.f_569;
}

void func_213(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDDC2E48CCBA23C1D(1))
	{
		iVar1 = unk_0x00D18151DCE3C65E(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xB03A3CBE4F7737B0(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 339:
					func_214(iVar0);
					break;
				
				case 2:
					unk_0xB03A3CBE4F7737B0(1, iVar0, &Var4, 3);
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

void func_214(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xB03A3CBE4F7737B0(1, iParam0, &Var0, 3))
	{
		if (func_228(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xC834A7C58DEB59B4(Var0.f_1);
			if (unk_0xD2CFFE76B625AE55(uVar3))
			{
				if (unk_0x9A4E2270C2271219(iVar3, 0))
				{
					uVar4 = unk_0xD9FFE8E1642C81E2(iVar3, 0);
					if (unk_0x35DBB18680CBB9BD(uVar4, Var0.f_2) && unk_0xA8EFC723756B7650())
					{
						if (func_215(uVar4, &bVar5))
						{
							unk_0xC72E18180AE0A1F0(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x9846B4D56971A958(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_215(int iParam0, var uParam1)
{
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		if (!unk_0xE24B37600DCB21FC(iParam0))
		{
			if (unk_0x2380875F8B6B9911(iParam0))
			{
				unk_0xAF3355298F537BB0(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xFF65D7BC656BA68E(iParam0, 0))
		{
			if (unk_0xFB1CEF9E7943CFF5(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_216()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_217()
{
	if (unk_0x7B4654D62B7E0E9E(uLocal_246))
	{
		unk_0x9403D0F4C7711241(&uLocal_246);
	}
	if (unk_0xF426A5DE932B3BEE(Local_96.f_1, 1))
	{
		func_55(12, "DSC_FAIL", 0, 0, -99);
	}
	func_163();
	func_219(16, 0);
	unk_0x26545538B51562AD(&(Global_2460486.f_4430), 0);
	func_218();
}

void func_218()
{
	unk_0x7C3AA2D27E16E2AD();
}

void func_219(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xF426A5DE932B3BEE(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_206, iParam0))
		{
			unk_0x26545538B51562AD(&(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_206), iParam0);
		}
	}
	else if (unk_0xF426A5DE932B3BEE(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_206, iParam0))
	{
		unk_0xF17F4B0641AB2DE1(&(Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_206), iParam0);
	}
}

void func_220(struct<20> Param0)
{
	func_226(func_227(Param0.f_0), Param0);
	func_224(0, -1, 0);
	unk_0xE6E20DA4BE6773A1(&Local_96, 20);
	unk_0xEC578E04792A69AD(&Local_116, 129);
	if (!func_223())
	{
		func_217();
	}
	if (unk_0x0E063DDE8855EC52())
	{
		unk_0xF160EBCA8FFA0E2A(0);
		if (unk_0x96BA6BF1BA1235CC())
		{
			func_221();
		}
		func_219(16, 1);
		Local_116[unk_0x7025777635AB04C0() /*4*/] = 0;
	}
	else
	{
		func_217();
	}
}

void func_221()
{
	Local_96.f_2 = { func_222() };
	Local_96.f_5 = 200f;
	Local_96.f_6 = 180f;
}

Vector3 func_222()
{
	switch (unk_0x3A5708FEE1B560A9(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		
		case 1:
			return 233f, -1725f, 30f;
		
		case 2:
			return -403f, -1207f, 38f;
		
		case 3:
			return -1060f, -1028f, 3f;
		
		case 4:
			return -2152f, -329f, 14f;
		
		case 5:
			return -1651f, 214f, 61f;
		
		case 6:
			return -527f, 662f, 142f;
		
		case 7:
			return -27f, -747f, 45f;
		
		case 8:
			return 1292f, -649f, 68f;
		
		case 9:
			return 978f, -3143f, 6f;
		
		default:
	}
	return 978f, -3143f, 6f;
}

int func_223()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x0E063DDE8855EC52())
		{
			return 0;
		}
		if (unk_0x3D3EC4199DF36385())
		{
			return 1;
		}
		if (func_212())
		{
			return 0;
		}
		if (func_210(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_224(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x3F2703DCC0FC2191();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_218();
			}
			else
			{
				return 0;
			}
		}
		if (!func_225())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x0E063DDE8855EC52())
				{
					if (!bParam2)
					{
						func_218();
					}
					else
					{
						return 0;
					}
				}
				if (func_212())
				{
					if (!bParam2)
					{
						func_218();
					}
					else
					{
						return 0;
					}
				}
				if (func_210(155))
				{
					if (!bParam2)
					{
						func_218();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x92CB7725500E696A())
			{
				if (!bParam2)
				{
					func_218();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x3F2703DCC0FC2191();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x0E063DDE8855EC52())
		{
			if (!bParam2)
			{
				func_218();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x92CB7725500E696A())
	{
		if (!bParam2)
		{
			func_218();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_225()
{
	return Global_1315888;
}

void func_226(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x0E063DDE8855EC52())
	{
		func_218();
	}
	unk_0x9064278EBCD8C84A(uParam0, 0, Param1.f_16);
}

int func_227(int iParam0)
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

int func_228(int iParam0, bool bParam1, bool bParam2)
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

