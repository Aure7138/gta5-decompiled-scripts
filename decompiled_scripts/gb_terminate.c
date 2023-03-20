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
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	struct<10> Local_100 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_110[32];
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
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_89 = ((0.05f + 0.275f) - 0.01f);
	fLocal_92 = -0.05f;
	fLocal_93 = 0.92f;
	fLocal_94 = 1.94f;
	fLocal_95 = 2.99f;
	fLocal_96 = 3.7f;
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (!func_426(ScriptParam_0))
		{
			func_415();
		}
	}
	while (true)
	{
		func_414();
		if (func_406())
		{
			func_415();
		}
		switch (func_405(unk_0x935FA14EDA695A82()))
		{
			case 0:
				if (func_404() == 1)
				{
					if (func_403())
					{
						func_402(unk_0x935FA14EDA695A82(), 1);
					}
				}
				break;
			
			case 1:
				if (func_404() == 1)
				{
					if (!func_400())
					{
						func_72();
					}
					if (func_39())
					{
						func_402(unk_0x935FA14EDA695A82(), 3);
					}
				}
				else if (func_404() == 3)
				{
					func_402(unk_0x935FA14EDA695A82(), 3);
				}
				break;
			
			case 3:
				func_415();
				break;
		}
		if (unk_0x736DBE187CFCC863())
		{
			if (func_38())
			{
				func_37(3);
			}
			switch (func_404())
			{
				case 0:
					if (func_30())
					{
						func_37(1);
					}
					break;
				
				case 1:
					if (func_29() == 3)
					{
						func_37(3);
					}
					else
					{
						func_1();
					}
					break;
				
				case 3:
					func_415();
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_100.f_8)
	{
		case 0:
			if (func_28())
			{
				func_27(1);
			}
			func_25();
			break;
		
		case 1:
			func_25();
			func_2();
			break;
		
		case 2:
			if (unk_0xDCC86F723E82125E(Local_100.f_1, 5))
			{
				func_27(3);
			}
			func_25();
			break;
		
		case 3:
			break;
	}
}

void func_2()
{
	if (!func_10(func_24()))
	{
		func_9(1);
		func_27(2);
		unk_0x59A0729D503ED758(&(Local_100.f_1), 2);
	}
	if (func_8() == func_7() || !func_6(func_8(), 0, 1))
	{
		func_9(3);
		func_27(2);
		unk_0x59A0729D503ED758(&(Local_100.f_1), 3);
	}
	if (unk_0xDCC86F723E82125E(Local_100.f_1, 0))
	{
		if (func_3(&(Local_100.f_4), func_5(), 0))
		{
			unk_0x59A0729D503ED758(&(Local_100.f_1), 4);
		}
	}
	if (unk_0xDCC86F723E82125E(Local_100.f_1, 4))
	{
		func_9(2);
		func_27(2);
	}
	if (unk_0xDCC86F723E82125E(Local_100.f_1, 1))
	{
		func_9(0);
		func_27(2);
	}
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam2)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2AA13A84EE2D3B24();
			}
			else
			{
				*uParam0 = unk_0x3BC33547A5F418E8();
			}
		}
		else
		{
			*uParam0 = unk_0x693EBB4F13506457();
		}
		uParam0->f_1 = 1;
	}
}

int func_5()
{
	return 300000;
}

int func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xDF73DA5E2287C499(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x06972B20E75CBE06(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426867.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_7()
{
	return -1;
}

int func_8()
{
	return Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9;
}

void func_9(int iParam0)
{
	Local_100.f_9 = iParam0;
}

int func_10(int iParam0)
{
	if (func_21(iParam0) && ((func_19(iParam0) == 142 || func_19(iParam0) == 164) || func_19(iParam0) == 148))
	{
		return 0;
	}
	if (iParam0 == func_7())
	{
		return 0;
	}
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_18(iParam0, 1))
	{
		return 0;
	}
	if (func_16(iParam0, 1) && func_15(iParam0) == func_8())
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_11(int iParam0)
{
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		return func_14();
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_241.f_136[func_13(10) /*33*/][iParam0], func_12(10));
}

int func_12(int iParam0)
{
	return (iParam0 % 32);
}

int func_13(int iParam0)
{
	return (iParam0 / 32);
}

bool func_14()
{
	return Global_1312416;
}

int func_15(int iParam0)
{
	if (iParam0 != func_7())
	{
		return Global_1608811[iParam0 /*109*/].f_9;
	}
	return func_7();
}

bool func_16(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_17(iParam0))
		{
			return 0;
		}
	}
	return Global_1608811[iParam0 /*109*/].f_9 != func_7();
}

int func_17(int iParam0)
{
	if (iParam0 != func_7())
	{
		if (Global_1608811[iParam0 /*109*/].f_9 != func_7())
		{
			return Global_1608811[iParam0 /*109*/].f_9 == iParam0;
		}
	}
	return 0;
}

int func_18(int iParam0, bool bParam1)
{
	if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_19(int iParam0)
{
	if (func_20(iParam0, 0))
	{
		return Global_1608811[iParam0 /*109*/].f_9.f_28;
	}
	return -1;
}

int func_20(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_28 != -1 || (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)
{
	if (func_17(iParam0))
	{
		if (func_22(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_23(iParam0, 9);
	}
	return 0;
}

bool func_23(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_9.f_4, iParam1);
}

int func_24()
{
	return Local_100.f_2;
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x55191629F1199760();
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_29() < 2)
		{
			if (unk_0xDCC86F723E82125E(Local_110[iVar2 /*4*/].f_1, 1))
			{
				func_26(unk_0x20A20BF765914E37(iVar2));
				unk_0x59A0729D503ED758(&(Local_100.f_1), 1);
			}
			if (unk_0xDCC86F723E82125E(Local_110[iVar2 /*4*/].f_1, 0))
			{
				unk_0x59A0729D503ED758(&(Local_100.f_1), 0);
			}
			if (unk_0xDCC86F723E82125E(Local_110[iVar2 /*4*/].f_1, 2))
			{
				unk_0x59A0729D503ED758(&(Local_100.f_1), 4);
			}
		}
		else if (func_29() == 2)
		{
			if (unk_0xDCC86F723E82125E(Local_110[iVar2 /*4*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	if (func_29() == 2)
	{
		if (iVar0 == unk_0xEE9C884FC3CB6070())
		{
			unk_0x59A0729D503ED758(&(Local_100.f_1), 5);
		}
		else if (func_3(&(Local_100.f_6), 10000, 0))
		{
			unk_0x59A0729D503ED758(&(Local_100.f_1), 5);
		}
	}
}

void func_26(int iParam0)
{
	Local_100.f_3 = iParam0;
}

void func_27(int iParam0)
{
	Local_100.f_8 = iParam0;
}

int func_28()
{
	return 1;
}

int func_29()
{
	return Local_100.f_8;
}

int func_30()
{
	if (func_31())
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	func_36(func_7());
	if (Global_2458121.f_4648.f_4 != func_7())
	{
	}
	if (func_6(Global_2458121.f_4648.f_4, 0, 1))
	{
		if (!func_34(Global_2458121.f_4648.f_4, unk_0xA34E7C2A5118D638(), 1))
		{
			func_36(Global_2458121.f_4648.f_4);
		}
	}
	if (func_24() != func_7())
	{
		func_32(func_33(func_24()), 1);
		Global_2458121.f_4648.f_4 = func_7();
		return 1;
	}
	else if (func_24() == func_7())
	{
	}
	return 0;
}

void func_32(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 438;
	Var0.f_1 = unk_0xA34E7C2A5118D638();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x74A5559828D3116B(1, &Var0, 3, iParam0);
	}
}

int func_33(int iParam0)
{
	var uVar0;
	
	unk_0x59A0729D503ED758(&uVar0, iParam0);
	return uVar0;
}

int func_34(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_7())
	{
		if (!bParam2)
		{
			if (func_35(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1608811[iParam0 /*109*/].f_9 != func_7())
		{
			return iParam1 == Global_1608811[iParam0 /*109*/].f_9;
		}
	}
	return 0;
}

int func_35(int iParam0, int iParam1)
{
	if (iParam1 != func_7())
	{
		if (iParam0 != func_7())
		{
			if (Global_1608811[iParam0 /*109*/].f_9 != func_7())
			{
				if (Global_1608811[iParam0 /*109*/].f_9 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_36(int iParam0)
{
	Local_100.f_2 = iParam0;
	if (iParam0 == func_7())
	{
	}
}

void func_37(int iParam0)
{
	Local_100.f_0 = iParam0;
}

int func_38()
{
	if (Global_2458121.f_4648.f_11)
	{
		Global_2458121.f_4648.f_11 = 0;
		return 1;
	}
	return 0;
}

int func_39()
{
	if (Global_2458121.f_4648.f_12)
	{
		Global_2458121.f_4648.f_12 = 0;
		return 1;
	}
	if (func_40(1))
	{
		return 1;
	}
	return 0;
}

int func_40(bool bParam0)
{
	var uVar0;
	
	if (!func_71(1))
	{
		if ((Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_51 != func_7() && func_6(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_51, 0, 1)) && Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_19 == 4)
		{
			if (bParam0)
			{
				uVar0 = func_67(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_51);
				func_43("LEFT_GB_MSSN", uVar0, func_44(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_51, -2, 0, 0), -1);
				func_41(1);
			}
			return 1;
		}
	}
	return 0;
}

void func_41(int iParam0)
{
	if (iParam0 && !func_42())
	{
		unk_0xC4EE38A4CFF7544C(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

bool func_42()
{
	return Global_2426867.f_2138[0 /*72*/].f_1 != 0;
}

void func_43(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x1AE578B67805BFB7(iParam2);
	}
	unk_0x2DED6C1306496257(uParam1);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam3);
}

int func_44(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_62(iParam0))
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
	if (func_62(unk_0xA34E7C2A5118D638()) || (func_61() && func_60()))
	{
		uVar0 = func_59();
		if (unk_0x95CCECA3948CFE7B(uVar0))
		{
			if (unk_0xA815CBE767EFA3CB(uVar0))
			{
				if (unk_0x8ACC9D9AC6076DCB(uVar0) != -1)
				{
					if (func_6(unk_0x8ACC9D9AC6076DCB(uVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
						{
							if (Global_1613622.f_65200[iParam1] != -1)
							{
								return func_58(iParam1, iParam0, 0);
							}
							else
							{
								return func_52(iParam0, unk_0x8ACC9D9AC6076DCB(uVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_52(iParam0, unk_0x8ACC9D9AC6076DCB(uVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
			{
				if (Global_1613622.f_65200[iParam1] != -1)
				{
					return func_58(iParam1, iParam0, 0);
				}
				else
				{
					return func_45(0, -1, 0);
				}
			}
			else
			{
				return func_45(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
	{
		if (Global_1613622.f_65200[iParam1] != -1)
		{
			return func_58(iParam1, iParam0, 0);
		}
		else
		{
			return func_52(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
		}
	}
	return func_52(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
}

int func_45(bool bParam0, int iParam1, bool bParam2)
{
	return func_46(unk_0xA34E7C2A5118D638(), bParam0, iParam1, bParam2);
}

int func_46(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_51(iVar0, iParam2, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_50(1);
				}
				else
				{
					return func_50(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_4, 20))
			{
				return func_47(iVar0, iParam2, 1);
			}
			else
			{
				return func_47(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_50(1);
	}
	return func_50(0);
}

int func_47(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_49(iParam0, iParam1);
	if (func_48(Global_1613622.f_68788))
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

int func_48(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7331[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
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
			if (!func_51(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_50(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_51(int iParam0, int iParam1, int iParam2)
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
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 0);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 1);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 2);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 4);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 5);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 6);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 8);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 9);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 10);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 12);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 13);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 14);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587175[iVar2 /*410*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_57(iParam1, iParam0, iVar0, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)) || ((func_51(unk_0x07CBE0ED3114C7D8(iParam1), unk_0x07CBE0ED3114C7D8(iParam0), 0) && unk_0xDCC86F723E82125E(Global_1613622.f_15, 23)) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)))
			{
				return func_50(1);
			}
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 26))
			{
				return func_56(1);
			}
			else
			{
				return func_46(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573833 || Global_1573824) || Global_1587175[iParam0 /*410*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573833 == 1 && Global_1573843 == 0))
			{
				return func_50(1);
			}
			else
			{
				return func_46(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573828 && Global_1573408.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_55(iParam0);
	if (!iVar3 == -1)
	{
		return func_53(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = func_54(iParam0);
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
	return 12;
}

var func_54(int iParam0)
{
	return Global_2412494.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_55(int iParam0)
{
	if (!iParam0 == func_7())
	{
		if (func_16(iParam0, 1))
		{
			return Global_2412494.f_1946.f_11[func_15(iParam0)];
		}
	}
	return -1;
}

int func_56(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_57(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && unk_0x07CBE0ED3114C7D8(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == unk_0x07CBE0ED3114C7D8(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
	}
	return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
}

int func_58(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1613622.f_65200[iParam0] != -1 && Global_1613622.f_65200[iParam0] <= 4)
	{
		if (Global_1613622.f_65200[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1613622.f_65200[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1613622.f_65200[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1613622.f_65200[iParam0] == 4)
		{
			if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 29))
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
			iVar0 = Global_1613622.f_65200[iParam0];
		}
	}
	else
	{
		iVar0 = func_46(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_59()
{
	return Global_2359301.f_2;
}

bool func_60()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 4);
}

bool func_61()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 14);
}

int func_62(int iParam0)
{
	if (func_64(iParam0, 0))
	{
		return 1;
	}
	if (func_63())
	{
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_63()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_64(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_65(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_66();
	}
	if (Global_1315889[iVar1] == 1)
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

int func_66()
{
	return Global_1312746;
}

char* func_67(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	if ((func_23(iParam0, 28) || func_23(unk_0xA34E7C2A5118D638(), 28)) || func_69(iParam0))
	{
		return unk_0x73630CECCD6630B5("GB_REST_ACC");
	}
	iVar0 = func_15(iParam0);
	if (iVar0 != func_7())
	{
		sVar1 = func_68(&(Global_1608811[iVar0 /*109*/].f_9.f_74));
		if (unk_0xB8A06E7E729EED0A(sVar1))
		{
			return unk_0x73630CECCD6630B5("GB_REST_ACC");
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_68(var uParam0)
{
	return uParam0;
}

int func_69(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_70(iParam0) };
	if (unk_0x62F8BA7ED89768FB() || unk_0x68B0A67658F2D9C2())
	{
		if (unk_0xE028438B8B6A57B6(0))
		{
			return 0;
		}
	}
	else if (unk_0xF7FE713C9F786F8C())
	{
		if (unk_0x3084526A863D7966(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

struct<13> func_70(int iParam0)
{
	struct<13> Var0;
	
	unk_0xC7B591FDF5AB5356(iParam0, &Var0, 13);
	return Var0;
}

bool func_71(bool bParam0)
{
	return func_16(unk_0xA34E7C2A5118D638(), bParam0);
}

void func_72()
{
	switch (func_399())
	{
		case 0:
			func_394(151, 1);
			func_393(1);
			if (func_29() > 0)
			{
				func_392(1);
			}
			break;
		
		case 1:
			if (!unk_0xDCC86F723E82125E(uLocal_98, 2))
			{
				func_390();
			}
			func_384();
			func_377();
			func_358();
			func_356();
			func_325();
			func_213(&(Global_1330242.f_527), &Global_1330242, 24, &(Global_1330242.f_1), &(Global_1330242.f_110), -1, 0);
			if (func_29() > 1)
			{
				func_392(2);
			}
			break;
		
		case 2:
			if (!unk_0xDCC86F723E82125E(Local_110[unk_0x935FA14EDA695A82() /*4*/].f_1, 3))
			{
				func_210(0, func_212());
				func_170();
				func_73();
			}
			if (func_29() > 2)
			{
				func_392(3);
			}
			break;
		
		case 3:
			break;
	}
}

void func_73()
{
	struct<5> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	if (!unk_0xDCC86F723E82125E(Local_110[unk_0x935FA14EDA695A82() /*4*/].f_1, 3))
	{
		if ((unk_0xDCC86F723E82125E(Local_100.f_1, 2) || unk_0xDCC86F723E82125E(Local_100.f_1, 4)) || unk_0xDCC86F723E82125E(Local_100.f_1, 4))
		{
			unk_0x59A0729D503ED758(&(Local_110[unk_0x935FA14EDA695A82() /*4*/].f_1), 3);
			return;
		}
		if (func_169())
		{
			unk_0x59A0729D503ED758(&(Local_110[unk_0x935FA14EDA695A82() /*4*/].f_1), 3);
			return;
		}
		if (func_161())
		{
			unk_0x59A0729D503ED758(&(Local_110[unk_0x935FA14EDA695A82() /*4*/].f_1), 3);
			return;
		}
		func_74(151, unk_0xDCC86F723E82125E(Local_110[unk_0x935FA14EDA695A82() /*4*/].f_1, 1), &Var0);
		unk_0x59A0729D503ED758(&(Local_110[unk_0x935FA14EDA695A82() /*4*/].f_1), 3);
	}
}

void func_74(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
	func_159(iParam0, &fVar2, &fVar3);
	iVar1 = (iVar1 + uParam2->f_1);
	iVar0 = (iVar0 + *uParam2);
	if (bParam1)
	{
		iVar1 = (iVar1 + func_158(iParam0));
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_157(iParam0));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	iVar4 = func_156();
	if (iVar4 != func_7() && iParam0 != 148)
	{
		if (func_16(unk_0xA34E7C2A5118D638(), 0))
		{
			if (!func_34(unk_0xA34E7C2A5118D638(), iVar4, 1))
			{
				func_142(&iVar0, 1);
			}
		}
	}
	func_138(iParam0, &iVar5, &iVar6);
	iVar1 = (iVar1 + iVar5);
	iVar0 = (iVar0 + iVar6);
	if (iVar1 > 0)
	{
		Global_1722053.f_10 = iVar1;
		func_137();
		func_88(0, unk_0xC8B93D94F8954288(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1722053.f_9 = iVar0;
		iVar9 = func_8();
		if (iVar9 != func_7())
		{
			func_87(iVar9, &uVar7, &uVar8);
		}
		bVar10 = !func_71(1);
		if (func_86())
		{
			func_77(-856006867, iVar0, &iVar11, 0, 1, 0);
			Global_2554598[iVar11 /*72*/].f_8.f_54 = uVar7;
			Global_2554598[iVar11 /*72*/].f_8.f_55 = uVar8;
			Global_2554598[iVar11 /*72*/].f_8.f_56 = bVar10;
		}
		else
		{
			unk_0xC9F8C348359975C3(uVar7, uVar8, iVar0, bVar10);
		}
		if (func_76(iParam0) > -1)
		{
			func_75(func_76(iParam0), iVar0);
		}
		Global_2443261 = iVar0;
	}
}

void func_75(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2458121.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4983)
		{
			iParam1 = Global_262145.f_4983;
		}
		Global_2458121.f_270 = iParam1;
		Global_2458121.f_271 = 0;
	}
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		default:
	}
	return 0;
}

void func_77(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_86())
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
			if (iParam1 > 0)
			{
				func_78(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_78(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_86())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x9A07DDC8D6013A35(func_66()) || unk_0x2661EFA58162BE03())
		{
			Global_2555082 = 1;
			return 0;
		}
		if (Global_2442114)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2555083 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2554598[iVar1 /*72*/].f_2 == 0)
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
	if (bVar0 || unk_0xA697855E051773F2(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB2F39A45C7C097F8(iVar3))
		{
			*uParam0 = func_85(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2554598[*uParam0 /*72*/].f_65 = 1;
				}
			}
			Global_2555074 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2555081 = 1;
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2555084 = iParam4;
			Global_2555086 = iParam3;
			Global_2555087 = 1;
			Global_2555085 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_84(1, iParam4);
			Global_2555081 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_79(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_79(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x59A0729D503ED758(&(Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_80(iParam0);
	}
}

void func_80(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_86())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_83(iParam0))
		{
			if (!bVar0)
			{
				unk_0x57AF313235EC1176();
			}
		}
		else if (!bVar0)
		{
			unk_0xCE4D85A04F5B2192(Global_2554598[iParam0 /*72*/]);
		}
		func_81(&(Global_2554598[iParam0 /*72*/]));
	}
}

void func_81(var uParam0)
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
	func_82(&(uParam0->f_8.f_3));
	func_82(&(uParam0->f_8.f_16));
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
	uParam0->f_65 = 0;
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
}

void func_82(var uParam0)
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

int func_83(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2554598[iParam0 /*72*/].f_5 == 1;
	}
	return 0;
}

void func_84(int iParam0, var uParam1)
{
	Global_2443392 = uParam1;
	Global_2443391 = iParam0;
}

int func_85(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2554598[iVar0 /*72*/].f_2 == 0)
		{
			if (!func_86())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2554598[iVar0 /*72*/].f_2 = 1;
			Global_2554598[iVar0 /*72*/].f_1 = uParam5;
			Global_2554598[iVar0 /*72*/].f_3 = uParam1;
			Global_2554598[iVar0 /*72*/].f_4 = uParam2;
			Global_2554598[iVar0 /*72*/].f_7 = uParam3;
			Global_2554598[iVar0 /*72*/].f_5 = 0;
			Global_2554598[iVar0 /*72*/] = iParam0;
			Global_2554598[iVar0 /*72*/].f_6 = iParam4;
			Global_2554598[iVar0 /*72*/].f_68 = uParam8;
			Global_2554598[iVar0 /*72*/].f_67 = uParam7;
			Global_2554598[iVar0 /*72*/].f_71 = 0;
			Global_2555074 = 0;
			if (bParam6)
			{
				Global_2554598[iVar0 /*72*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_86()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		return 1;
	}
	return 0;
}

void func_87(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1608811[iParam0 /*109*/].f_9.f_7[0];
	*uParam2 = Global_1608811[iParam0 /*109*/].f_9.f_7[1];
}

int func_88(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_89(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_89(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_99(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x95CCECA3948CFE7B(iParam1))
		{
			if (unk_0x96209AADF56E8FE8(iParam1))
			{
				iVar1 = unk_0x4D3C2AC8339BFB4F(iParam1);
				func_95(unk_0xB867FC7DBA46C0F1(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_90(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_90(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_93(iParam0, 1) };
	if (iParam0 == func_92(unk_0xC8B93D94F8954288()))
	{
		func_91(1);
	}
	func_95(Var0, iParam1, 0, sParam2);
}

void func_91(int iParam0)
{
	Global_2426867.f_1322 = iParam0;
}

int func_92(int iParam0)
{
	return iParam0;
}

Vector3 func_93(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_94(unk_0xC8B93D94F8954288()) && unk_0xA9B6C2A8F9FE269A(unk_0xBFFCA1BD025B90B2()) == 4)
	{
		Var0 = { unk_0xCC31DB73C65552D8(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		fVar3 = unk_0x59DD203239FBDCAD(iParam0);
	}
	unk_0xA8349C905E4A8DE7(unk_0x6D5BB810CC209E15(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xE79F1883B253E5B8(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_94(int iParam0)
{
	return iParam0;
}

void func_95(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2426867.f_741[iVar0 /*29*/].f_6 == 0 || Global_2426867.f_741[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2426867.f_741[iVar1 /*29*/] = { Param0 };
			Global_2426867.f_741[iVar1 /*29*/].f_6 = 1;
			Global_2426867.f_741[iVar1 /*29*/].f_4 = func_98(Global_2426867.f_741[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2426867.f_741[iVar1 /*29*/].f_7 = unk_0x2AA13A84EE2D3B24();
			Global_2426867.f_741[iVar1 /*29*/].f_3 = iParam3;
			Global_2426867.f_741[iVar1 /*29*/].f_8 = iParam4;
			Global_2426867.f_741[iVar1 /*29*/].f_9 = func_97();
			Global_2426867.f_741[iVar1 /*29*/].f_10 = func_96();
			StringCopy(&(Global_2426867.f_741[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_96()
{
	if (Global_2426867.f_1322)
	{
		Global_2426867.f_1322 = 0;
		return 1;
	}
	Global_2426867.f_1322 = 0;
	return 0;
}

var func_97()
{
	var uVar0;
	
	uVar0 = Global_2426867.f_1324;
	Global_2426867.f_1324 = 1;
	return uVar0;
}

float func_98(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4F982ED5336EA899(unk_0xE81835FB046A7978(), Param0, 1);
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

var func_99(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_100(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_100(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_136(unk_0xA34E7C2A5118D638()) || func_135(unk_0xA34E7C2A5118D638()))
	{
		if (Global_262145.f_7555 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7555;
		}
	}
	else if (Global_262145.f_5033 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5033;
	}
	if (func_134(uParam2))
	{
	}
	if (func_133())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_131(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_130(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_127(0, &iVar1);
					break;
				
				case 3:
					func_127(1, &iVar1);
					break;
				
				case 1:
					func_124(&iVar1);
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
			func_121(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_110((func_120(unk_0xA34E7C2A5118D638()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xEF84C5FA6302A771(iVar1, iParam8, iParam9);
				if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_2 != -1)
				{
					func_121(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_105(iVar1);
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
				func_101((func_103(unk_0xA34E7C2A5118D638()) + iVar1));
			}
			else
			{
				func_101((func_103(unk_0xA34E7C2A5118D638()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_101(int iParam0)
{
	if (func_133())
	{
		Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_5 = iParam0;
		func_102(joaat("mpply_globalxp"), iParam0);
	}
}

void func_102(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, uParam1, 1);
	}
}

int func_103(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xA34E7C2A5118D638())
			{
				return func_104(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587175[iParam0 /*410*/].f_192.f_5;
			}
		}
		else
		{
			return func_104(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_105(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_70(unk_0xA34E7C2A5118D638()) };
	if (unk_0x14F2268F2CD21E48())
	{
		if (unk_0x0BB7D2D2CAAFD70C(&Var0))
		{
			iVar13 = func_108(func_109(&Var0));
			if (iVar13 == 0)
			{
				func_107(&Global_1347498, iParam0);
				func_106(joaat("mpply_crew_local_xp_0"), Global_1347498);
			}
			else if (iVar13 == 1)
			{
				func_107(&Global_1347499, iParam0);
				func_106(joaat("mpply_crew_local_xp_1"), Global_1347499);
			}
			else if (iVar13 == 2)
			{
				func_107(&Global_1347500, iParam0);
				func_106(joaat("mpply_crew_local_xp_2"), Global_1347500);
			}
			else if (iVar13 == 3)
			{
				func_107(&Global_1347501, iParam0);
				func_106(joaat("mpply_crew_local_xp_3"), Global_1347501);
			}
			else if (iVar13 == 4)
			{
				func_107(&Global_1347502, iParam0);
				func_106(joaat("mpply_crew_local_xp_4"), Global_1347502);
			}
		}
	}
}

void func_106(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347493 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347495 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347495 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347496 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347497 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347498 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347499 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347500 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347501 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347502 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347503 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347504 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347505 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347506 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347507 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347508 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347509 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_107(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_108(int iParam0)
{
	if (iParam0 == Global_1347493)
	{
		return 0;
	}
	else if (iParam0 == Global_1347494)
	{
		return 1;
	}
	else if (iParam0 == Global_1347495)
	{
		return 2;
	}
	else if (iParam0 == Global_1347496)
	{
		return 3;
	}
	else if (iParam0 == Global_1347497)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_109(var uParam0)
{
	if (unk_0x14F2268F2CD21E48())
	{
		if (unk_0x0BB7D2D2CAAFD70C(uParam0))
		{
			return Global_2441309;
		}
	}
	return Global_2441309;
}

void func_110(int iParam0, int iParam1, int iParam2)
{
	if (func_133())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7530 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347613[func_119(-1)])
				{
					unk_0xEF84C5FA6302A771(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347613[func_119(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7529 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xEF84C5FA6302A771(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7529 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xEF84C5FA6302A771(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_118(unk_0xA34E7C2A5118D638()))
		{
			Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_1 = iParam0;
			Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_192.f_6 = func_116(iParam0, 1);
		}
		func_115(629, iParam0, -1, 1);
		func_114(630, func_116(iParam0, 1), -1, 1);
		Global_1347613[func_119(-1)] = iParam0;
		func_111(7, 0);
	}
}

void func_111(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_113(iParam0, iParam1))
	{
		iVar0 = func_112();
		Global_2441286[iVar0] = iParam0;
	}
}

int func_112()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2441286[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_113(int iParam0, var uParam1)
{
	if (Global_1315899)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315911) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_114(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_119(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
}

void func_115(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_119(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1347559[func_119(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1347565[func_119(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1347571[func_119(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1347577[func_119(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1347535[func_119(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1347541[func_119(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1347547[func_119(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347553[func_119(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347511[func_119(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347517[func_119(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347523[func_119(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347529[func_119(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1347583[func_119(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1347589[func_119(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1347595[func_119(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347601[func_119(iParam2)] = iParam1;
			break;
		
		case 1293:
			Global_1347607[func_119(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1347613[func_119(iParam2)] = iParam1;
			break;
		
		case 1268:
			Global_1347619[func_119(iParam2)] = iParam1;
			break;
		
		case 1865:
			Global_2489474[0 /*6*/][func_119(iParam2)] = iParam1;
			break;
		
		case 2256:
			Global_2489474[1 /*6*/][func_119(iParam2)] = iParam1;
			break;
		
		case 2902:
			Global_2489474[2 /*6*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3030:
			Global_2489474[3 /*6*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3732:
			Global_2489525[func_119(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1347625[func_119(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1347631[func_119(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1347637[func_119(iParam2)] = iParam1;
			break;
		
		case 1226:
			Global_1347643[func_119(iParam2)] = iParam1;
			break;
		
		case 3025:
			Global_2489499[0 /*5*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3026:
			Global_2489499[1 /*5*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3027:
			Global_2489499[2 /*5*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3028:
			Global_2489499[3 /*5*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3029:
			Global_2489499[4 /*5*/][func_119(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_116(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_117(iParam0, 0);
}

int func_117(int iParam0, int iParam1)
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
		if (Global_273943[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_273943[iVar3] < iParam0)
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

int func_118(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_2426867.f_1, iParam0);
	}
	return 1;
}

int func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_66();
		if (iVar1 > -1)
		{
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

int func_120(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xA34E7C2A5118D638())
			{
				return Global_1347613[func_119(-1)];
			}
			else if (func_118(iParam0))
			{
				return Global_1587175[iParam0 /*410*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1347613[func_119(-1)];
	}
	return 0;
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_123(iParam0, func_119(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_122(iParam0))
	{
		func_114(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_115(iParam0, iVar0, iParam2, 1);
	}
}

int func_122(int iParam0)
{
	if (Global_1347492)
	{
		switch (iParam0)
		{
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 747:
			case 748:
			case 749:
			case 750:
			case 1293:
			case 629:
			case 1268:
			case 754:
			case 755:
			case 756:
			case 1226:
			case 1865:
			case 2256:
			case 2902:
			case 3030:
			case 3732:
			case 3025:
			case 3026:
			case 3027:
			case 3028:
			case 3029:
				return 1;
				break;
			}
	}
	return 0;
}

int func_123(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466774[iParam0 /*5*/][func_119(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638());
	iVar0 = 0;
	while (iVar0 < unk_0x55191629F1199760())
	{
		iVar4 = unk_0xD9BFAEBB04416B09(iVar0);
		if (unk_0x784B3253F40F728C(iVar4))
		{
			iVar5 = unk_0x8F765930684A893F(iVar4);
			if (unk_0x07CBE0ED3114C7D8(iVar5) != -1)
			{
				if (unk_0x07CBE0ED3114C7D8(iVar5) == iVar1 || func_51(unk_0x07CBE0ED3114C7D8(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xA34E7C2A5118D638())
					{
						if (func_126(unk_0xA34E7C2A5118D638(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_125(*iParam0, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_125(*iParam0, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_125(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_126(int iParam0, int iParam1)
{
	if (unk_0x14F2268F2CD21E48())
	{
		Global_2457104 = { func_70(iParam0) };
		Global_2457117 = { func_70(iParam1) };
		if (unk_0x0BB7D2D2CAAFD70C(&Global_2457104))
		{
			if (unk_0x0BB7D2D2CAAFD70C(&Global_2457117))
			{
				unk_0x59E0C66A4FA07806(&Global_2457034, 35, &Global_2457104);
				unk_0x59E0C66A4FA07806(&Global_2457069, 35, &Global_2457117);
				if (Global_2457034 == Global_2457069)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_127(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x55191629F1199760())
		{
			iVar3 = iVar0;
			if (unk_0x784B3253F40F728C(iVar3))
			{
				iVar4 = unk_0x8F765930684A893F(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xA34E7C2A5118D638())
					{
						iVar1++;
						if (func_126(unk_0xA34E7C2A5118D638(), iVar4))
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
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xA34E7C2A5118D638())
				{
					if (func_128(unk_0xA34E7C2A5118D638(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_126(unk_0xA34E7C2A5118D638(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_125(*iParam1, 100) * (10f * Global_262145.f_4209)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_125(*iParam1, 100) * (20f * Global_262145.f_4202)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_128(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_129(iParam0), func_129(iParam1));
	return 0f;
}

Vector3 func_129(int iParam0)
{
	return unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(iParam0), 0);
}

int func_130(int iParam0)
{
	int iVar0;
	
	if (unk_0xBAEDEB596C4FA2C5() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_125(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_131(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xA1836B70A59643DD(iParam0) > func_120(unk_0xA34E7C2A5118D638()))
		{
			iParam0 = -func_120(unk_0xA34E7C2A5118D638());
		}
	}
	if (func_132(8000, 0, 0) > 0)
	{
		if (func_132(8000, 0, 0) < (iParam0 + func_120(unk_0xA34E7C2A5118D638())))
		{
			iParam0 = (func_132(8000, 0, 0) - func_120(unk_0xA34E7C2A5118D638()));
		}
	}
	return iParam0;
}

int func_132(int iParam0, bool bParam1, int iParam2)
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
	return Global_273943[iParam0];
}

int func_133()
{
	return 1;
}

int func_134(var uParam0)
{
	if (unk_0x544AEDB4A15228FF(uParam0))
	{
		return 1;
	}
	else if (unk_0xF8D041B05C3D1FD4(uParam0, "") || unk_0xF8D041B05C3D1FD4(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_135(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 2;
}

bool func_136(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 7;
}

void func_137()
{
	Global_2442431 = 1;
}

void func_138(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_141(7))
	{
		return;
	}
	iVar0 = func_140(iParam0);
	iVar1 = func_139(iParam0);
	iVar2 = unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(Global_2458121.f_4648.f_63, unk_0x2AA13A84EE2D3B24()));
	if (iVar2 > Global_262145.f_10293)
	{
		iVar2 = Global_262145.f_10293;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10384;
		
		case 152:
			return Global_262145.f_10419;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10407;
		
		case 157:
			return Global_262145.f_10374;
		
		case 159:
			return Global_262145.f_10357;
		
		case 164:
			return Global_262145.f_10397;
		
		case 160:
			return Global_262145.f_10447;
		
		case 162:
			return Global_262145.f_10467;
		
		case 163:
			return Global_262145.f_10432;
		
		case 154:
			return Global_262145.f_10502;
		
		case 155:
			return Global_262145.f_10492;
		
		case 153:
			return Global_262145.f_10456;
		
		default:
	}
	return 0;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10383;
		
		case 152:
			return Global_262145.f_10418;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10406;
		
		case 157:
			return Global_262145.f_10373;
		
		case 159:
			return Global_262145.f_10356;
		
		case 164:
			return Global_262145.f_10396;
		
		case 160:
			return Global_262145.f_10446;
		
		case 162:
			return Global_262145.f_10466;
		
		case 163:
			return Global_262145.f_10431;
		
		case 154:
			return Global_262145.f_10501;
		
		case 155:
			return Global_262145.f_10491;
		
		case 153:
			return Global_262145.f_10455;
		
		default:
	}
	return 0;
}

bool func_141(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_2458121.f_4648.f_16, iParam0);
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_155())
		{
			if (func_71(0))
			{
				if (unk_0xDF73DA5E2287C499(func_8()))
				{
					if (func_154() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_154());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_152(&iVar0);
					if (iParam1 == 1)
					{
						func_145("GB_BCUT_TICK1", func_8(), iVar0, 0, 0, 1, 1);
					}
					func_144(20);
					func_143(func_8(), iVar0, 1);
				}
			}
		}
	}
}

void func_143(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_6(iParam0, 0, 1))
	{
		Var0.f_0 = 433;
		Var0.f_1 = unk_0xA34E7C2A5118D638();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x74A5559828D3116B(1, &Var0, 5, func_33(iParam0));
	}
}

void func_144(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_4648.f_7), iParam0);
}

int func_145(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x74C5CB21CF9F1178(iParam1), 64);
		}
		unk_0x12F4A48D84A3989D(sParam0);
		unk_0x1AE578B67805BFB7(func_44(iParam1, -2, 1, 0));
		unk_0x2DED6C1306496257(func_150(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x1AE578B67805BFB7(iParam3);
		}
		unk_0x6DC80A902A91958F(iParam2);
		iVar0 = unk_0xC754466C15BD85AC(0, 1);
		func_146(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_146(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_149() || !unk_0xDC9A5ADFE0C41DD2()) || !func_64(unk_0xA34E7C2A5118D638(), 0))
	{
		return;
	}
	iVar0 = func_147(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1718883.f_5[iVar0 /*53*/] = iParam0;
		Global_1718883.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1718883.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1718883.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1718883.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1718883.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1718883.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1718883.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_147(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1718883 - 1))
	{
		if (iParam0 > Global_1718883.f_5[iVar0 /*53*/].f_1)
		{
			func_148(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1718883++;
	if (Global_1718883 > 5)
	{
		Global_1718883 = 5;
		return Global_1718883;
	}
	return (Global_1718883 - 1);
}

void func_148(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1718883.f_5[iVar0 /*53*/] = { Global_1718883.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_149()
{
	return unk_0x9F37711843A20114(-1762644250);
}

var func_150(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_151(&cVar0);
}

var func_151(char[4] cParam0)
{
	return cParam0;
}

void func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_153();
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_153()
{
	return Global_262145.f_10288;
}

int func_154()
{
	return Global_262145.f_10287;
}

bool func_155()
{
	return func_17(unk_0xA34E7C2A5118D638());
}

int func_156()
{
	return Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_30;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10404) * Global_262145.f_10409));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10354) * Global_262145.f_10359));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10381) * Global_262145.f_10385));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10394) * Global_262145.f_10398));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10416) * Global_262145.f_10421));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10578) * Global_262145.f_10579));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10584) * Global_262145.f_10585));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10582) * Global_262145.f_10583));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10576) * Global_262145.f_10577));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10580) * Global_262145.f_10581));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10574) * Global_262145.f_10575));
		
		default:
	}
	return 0;
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10405) * Global_262145.f_10410));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10355) * Global_262145.f_10360));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10382) * Global_262145.f_10386));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10395) * Global_262145.f_10399));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10417) * Global_262145.f_10422));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10454) * Global_262145.f_10457));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10500) * Global_262145.f_10503));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10490) * Global_262145.f_10493));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10445) * Global_262145.f_10448));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10465) * Global_262145.f_10470));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10430) * Global_262145.f_10433));
		
		default:
	}
	return 0;
}

void func_159(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_160(iParam0))
	{
		if (!func_155())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10298;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	*uParam1 = Global_262145.f_10297;
	*uParam2 = Global_262145.f_10296;
	if (func_16(unk_0xA34E7C2A5118D638(), 1))
	{
		*uParam1 = Global_262145.f_10295;
		*uParam2 = Global_262145.f_10294;
	}
	iVar0 = func_156();
	if (iVar0 != func_7())
	{
		if (func_34(unk_0xA34E7C2A5118D638(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
			return 1;
		
		default:
	}
	return 0;
}

int func_161()
{
	if ((func_23(unk_0xA34E7C2A5118D638(), 21) || func_23(unk_0xA34E7C2A5118D638(), 22)) || func_167())
	{
		return 1;
	}
	if (func_163())
	{
		func_162(22);
		return 1;
	}
	return 0;
}

void func_162(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_4), iParam0);
}

int func_163()
{
	if (func_20(unk_0xA34E7C2A5118D638(), 0))
	{
		if ((func_14() && !func_166()) || func_165(unk_0xA34E7C2A5118D638(), 21))
		{
			if (!func_23(unk_0xA34E7C2A5118D638(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_164(27);
		}
	}
	return 0;
}

void func_164(int iParam0)
{
	unk_0x77621132305B133B(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_4), iParam0);
}

bool func_165(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_206, iParam1);
}

bool func_166()
{
	return Global_1312416.f_1;
}

bool func_167()
{
	return func_168(267, -1);
}

int func_168(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486871[iParam0 /*5*/][func_119(iParam1)];
	if (unk_0xC7E465DF93CF8F2C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_169()
{
	return 0;
}

void func_170()
{
	struct<14> Var0;
	
	if (func_192())
	{
		return;
	}
	if (func_191())
	{
		func_184();
	}
	if (func_42())
	{
		func_183();
	}
	if ((!unk_0xDCC86F723E82125E(Local_100.f_1, 2) && !unk_0xDCC86F723E82125E(Local_100.f_1, 4)) && !unk_0xDCC86F723E82125E(Local_100.f_1, 3))
	{
		if (func_212() != unk_0xA34E7C2A5118D638())
		{
			func_182(88, func_212(), func_24(), -1, "GBTER_BIG_COMS", "GB_WORK_OVER", 1, -1, 2, 0, 0, 0);
		}
		else
		{
			func_181(85, func_24(), -1, "GBTER_BIG_WINS", "GB_WINNER", 1, -1, 2);
		}
	}
	else if (unk_0xDCC86F723E82125E(Local_100.f_1, 3))
	{
	}
	else
	{
		func_172(86, "GB_WORK_OVER", "GBTER_BIG_FLEE", 1, -1, 2);
		if (unk_0xDCC86F723E82125E(Local_100.f_1, 4) || func_18(func_24(), 1))
		{
			if (unk_0xA34E7C2A5118D638() == func_156())
			{
				Var0.f_10 = func_156();
				Var0.f_2 = 179;
				func_171(Var0, func_33(func_24()));
			}
		}
	}
}

void func_171(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xA34E7C2A5118D638();
	if (!iParam14 == 0)
	{
		unk_0x74A5559828D3116B(1, &Param0, 14, iParam14);
	}
}

int func_172(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_180(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_173(&Var0);
}

int func_173(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2426867.f_2428)
		{
			return 0;
		}
	}
	func_179(uParam0, uParam0->f_16);
	func_176(uParam0);
	if (func_175(uParam0->f_1))
	{
		if (Global_2426867.f_2138[0 /*72*/].f_2 == 0)
		{
			Global_2426867.f_2138[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2426867.f_2138[0 /*72*/].f_1 == 13 || Global_2426867.f_2138[0 /*72*/].f_1 == 52) || Global_2426867.f_2138[0 /*72*/].f_1 == 53) || Global_2426867.f_2138[0 /*72*/].f_1 == 57)
		{
			Global_2426867.f_2138[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2426867.f_2138[iVar0 + 1 /*72*/] = { Global_2426867.f_2138[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2426867.f_2138[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2426867.f_2138[iVar0 /*72*/].f_2 == 0)
		{
			Global_2426867.f_2138[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 1);
				Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 84)
			{
				if (func_174(Global_2426867.f_2138[iVar0 /*72*/].f_1))
				{
					Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
					unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_174(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

int func_175(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_176(var uParam0)
{
	if (func_178(uParam0->f_1))
	{
		uParam0->f_66 = func_177();
	}
}

int func_177()
{
	return 21;
}

int func_178(int iParam0)
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

void func_179(var uParam0, int iParam1)
{
	if (func_178(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_7())
	{
		return;
	}
	if (func_174(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_44(iParam1, -2, 0, 0);
		}
	}
}

void func_180(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_7();
	uParam1->f_17 = func_7();
	uParam1->f_18 = func_7();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_68 = 1;
	uParam1->f_69 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_181(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
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
	func_180(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_16 = iParam1;
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_173(&Var0);
}

int func_182(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_180(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_16 = iParam1;
	Var0.f_17 = iParam2;
	Var0.f_65 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_66 = iParam8;
	StringCopy(&(Var0.f_23), sParam9, 64);
	StringCopy(&(Var0.f_39), sParam10, 64);
	StringCopy(&(Var0.f_55), sParam11, 16);
	return func_173(&Var0);
}

void func_183()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2426867.f_2138[iVar0 /*72*/].f_2 != 0)
		{
			Global_2426867.f_2138[iVar0 /*72*/].f_2 = 5;
			unk_0x59A0729D503ED758(&(Global_2426867.f_2138[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

void func_184()
{
	if (!func_190())
	{
		return;
	}
	if (!unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == Global_1312577.f_7)
	{
		return;
	}
	func_185();
}

void func_185()
{
	func_187();
	func_186(0);
}

void func_186(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xBBAE3E0C60A8AD4B();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x2AA13A84EE2D3B24();
		Global_1312577.f_9 = unk_0x2AA13A84EE2D3B24();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_56 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_187()
{
	if (!func_189())
	{
	}
	if (func_190())
	{
		unk_0x9793A6B024AF02EF(&(Global_1312577.f_10));
		func_188();
		unk_0x8C79EF3DED0E80D0();
	}
}

void func_188()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6DC80A902A91958F(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0x6DC80A902A91958F(Global_1312577.f_50);
			unk_0x6DC80A902A91958F(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x6B0C98F2CFD22419(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x6B0C98F2CFD22419(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_55);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x2DED6C1306496257(&(Global_1312577.f_14));
			unk_0x1AE578B67805BFB7(Global_1312577.f_54);
			unk_0xCE59E3E42586D52D(&(Global_1312577.f_46));
			unk_0x2DED6C1306496257(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_189()
{
	if (!func_190())
	{
		return 0;
	}
	unk_0xF932A8699EA66642(&(Global_1312577.f_10));
	func_188();
	return unk_0xD6AFC45B1375A9DD();
}

int func_190()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

bool func_191()
{
	return func_190();
}

int func_192()
{
	if (!func_193() || func_400())
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	if (func_165(unk_0xA34E7C2A5118D638(), 21))
	{
		return 0;
	}
	if (unk_0xE21B8C41C187AA64())
	{
		return 0;
	}
	if (unk_0x547823CBA92EEF50())
	{
		return 0;
	}
	if (func_208(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_207())
	{
		return 0;
	}
	if (func_206())
	{
		return 0;
	}
	if (func_205())
	{
		return 0;
	}
	if (func_204())
	{
		return 0;
	}
	if (unk_0xDC9A5ADFE0C41DD2())
	{
		return 0;
	}
	if (func_202(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (!func_200())
	{
		return 0;
	}
	if (func_165(unk_0xA34E7C2A5118D638(), 0) || func_165(unk_0xA34E7C2A5118D638(), 3))
	{
		return 0;
	}
	if ((func_165(unk_0xA34E7C2A5118D638(), 12) || func_165(unk_0xA34E7C2A5118D638(), 14)) || func_165(unk_0xA34E7C2A5118D638(), 13))
	{
		return 0;
	}
	if (func_199(unk_0xA34E7C2A5118D638(), 0))
	{
		return 0;
	}
	if (func_198())
	{
		return 0;
	}
	if (Global_1710052)
	{
		return 0;
	}
	if (func_197(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_196())
	{
		return 0;
	}
	if (func_195(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_194(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	return 1;
}

int func_194(int iParam0)
{
	if (Global_2417071[iParam0 /*306*/].f_257.f_4 != 0 || Global_2417071[iParam0 /*306*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0)
{
	if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 14))
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 11))
	{
		return 1;
	}
	return 0;
}

int func_196()
{
	if (Global_2549001.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587175[iParam0 /*410*/].f_35;
}

bool func_198()
{
	return Global_91158.f_297 > 0;
}

int func_199(int iParam0, bool bParam1)
{
	if (Global_1587175[iParam0 /*410*/].f_247.f_8 > 0)
	{
		if (bParam1)
		{
			if (unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_247.f_6, 0))
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

int func_200()
{
	if (func_201() == 0)
	{
		return 1;
	}
	return 0;
}

int func_201()
{
	return Global_1312466.f_18;
}

bool func_202(int iParam0)
{
	return func_203(iParam0);
}

bool func_203(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_13.f_1, 0);
}

bool func_204()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_177 != 0;
}

bool func_205()
{
	return Global_1315911;
}

bool func_206()
{
	return Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 5;
}

bool func_207()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 0);
}

int func_208(int iParam0)
{
	if (func_209(iParam0, 1))
	{
		if (Global_1587175[iParam0 /*410*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_202(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587175[iParam0 /*410*/] == -1)
	{
		return 0;
	}
	return 1;
}

void func_210(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_7())
	{
		if (unk_0xDF73DA5E2287C499(iParam1))
		{
			if (iParam1 == unk_0xA34E7C2A5118D638())
			{
				iVar0 = 1;
			}
			else if (func_211(iParam1, unk_0xA34E7C2A5118D638()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_6(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 0, 0);
			unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
		}
	}
}

int func_211(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_7() && iParam1 != func_7())
	{
		iVar0 = func_15(iParam0);
		if (iVar0 != func_7())
		{
			return iVar0 == func_15(iParam1);
		}
	}
	return 0;
}

int func_212()
{
	return Local_100.f_3;
}

void func_213(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_320(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_318() || iParam2 == 24)
	{
		if (func_278(uParam1, iParam2, uParam3, Global_1573681, 0, func_316()))
		{
			func_277(1);
			if ((!func_276() && !func_275()) || unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1))
			{
				if (func_274())
				{
					func_273();
				}
				else
				{
					unk_0xF799955FDE53592F(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_272(1);
						Global_1573681 = 0;
						iVar54 = -1;
						if (Global_1573829 != 1)
						{
							func_271(uParam1);
							if (unk_0xDCC86F723E82125E(uParam3->f_33, 7))
							{
								unk_0x77621132305B133B(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 24)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_6(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar35 = unk_0x20A20BF765914E37(iVar52);
									if (!func_64(iVar35, 0))
									{
										if ((unk_0x139A9C4D61DFD52E(iVar35, unk_0xA34E7C2A5118D638()) || Global_2417071[iVar35 /*306*/].f_232 != -1) || func_270(iVar35))
										{
											iVar44 = iVar35;
											if (func_17(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_269(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_267(unk_0xA34E7C2A5118D638(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_265())
							{
								if (func_6(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar35 = unk_0x20A20BF765914E37(iVar52);
								}
								else
								{
									iVar35 = func_7();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*47*/])->f_1;
							}
							if ((func_264(iVar35) && func_258(iVar35, iParam2)) && func_6(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587175[iVar44 /*410*/].f_192.f_6;
								Var38 = { func_253(iVar35) };
								if (iVar35 == unk_0xA34E7C2A5118D638())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x74C5CB21CF9F1178(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_70(iVar35) };
								iVar37 = func_247(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xC607197AF4E3A5B7(iVar37);
								}
								Global_1573681++;
								if ((uParam0[iVar52 /*47*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*47*/])->f_22;
								}
								if ((uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									iVar46 = (uParam0[iVar52 /*47*/])->f_30;
								}
								if ((uParam0[iVar52 /*47*/])->f_46 != -1)
								{
									iVar47 = (uParam0[iVar52 /*47*/])->f_46;
								}
								iVar43 = (uParam0[iVar52 /*47*/])->f_9;
								if (((uParam0[iVar52 /*47*/])->f_9 != -1 || (uParam0[iVar52 /*47*/])->f_22 != -1f) || (uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									if (!func_265())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_242(&iVar43, &fVar45, (uParam0[iVar52 /*47*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_241(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*47*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_238(iVar35, 0);
								if (bVar34)
								{
									if (func_16(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if (func_237(iParam5))
								{
									func_236(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								else
								{
									func_236(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								unk_0x59A0729D503ED758(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x20A20BF765914E37(iVar52);
							if (func_6(iVar35, 0, 1) && !unk_0xDCC86F723E82125E(iVar49, iVar35))
							{
								iVar35 = unk_0x20A20BF765914E37(iVar52);
							}
							else
							{
								iVar35 = func_7();
							}
							if (func_264(iVar35))
							{
								if (func_6(unk_0x20A20BF765914E37(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587175[iVar44 /*410*/].f_192.f_6;
									Var38 = { func_253(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_70(iVar35) };
									iVar37 = func_247(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xC607197AF4E3A5B7(iVar37);
									}
									Global_1573681++;
									iVar51 = func_238(iVar35, 1);
									if (bVar34)
									{
										if (func_16(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_228(unk_0x74C5CB21CF9F1178(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xDCC86F723E82125E(uParam3->f_33, 11))
						{
							func_225(uParam3, uParam1);
						}
						func_224(&(uParam3->f_21));
						func_223();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xDCC86F723E82125E(uParam3->f_33, 7))
						{
							func_222(uParam3, uParam1);
							func_221(uParam1, 0, 1);
							unk_0x59A0729D503ED758(&(uParam3->f_33), 7);
						}
						func_222(uParam3, uParam1);
						if (!unk_0xDCC86F723E82125E(uParam3->f_33, 11))
						{
							unk_0x59A0729D503ED758(&(uParam3->f_33), 11);
						}
						if (func_217(uParam3))
						{
							Global_1573829 = 1;
						}
						func_214(uParam3);
						if (Global_1573829 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573829 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xF518F3C7FACD43B7(*uParam1))
					{
						unk_0x7F1F2564B5CE06AF(7);
						unk_0x06D856499865F31F(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x7F1F2564B5CE06AF(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_223();
			func_272(0);
			if (unk_0xDCC86F723E82125E(uParam3->f_33, 7))
			{
				unk_0x77621132305B133B(&(uParam3->f_33), 7);
			}
			if (unk_0xDCC86F723E82125E(uParam3->f_33, 10))
			{
				unk_0x77621132305B133B(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xFA99CE7438CDE58B();
}

void func_214(var uParam0)
{
	if (!func_216(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_3(&(uParam0->f_21), 250, 0))
	{
		func_224(&(uParam0->f_21));
		func_215(0);
	}
}

void func_215(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573829 != 2)
		{
			Global_1573829 = 2;
		}
	}
	else
	{
		switch (Global_1573829)
		{
			case 0:
				Global_1573829 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

bool func_216(var uParam0)
{
	return uParam0->f_1;
}

int func_217(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x20A20BF765914E37(uParam0->f_37);
	if (iVar15 != func_7() && func_6(iVar15, 0, 1))
	{
		Var2 = { func_70(iVar15) };
		iVar1 = func_220(uParam0, uParam0->f_37);
		if (func_219(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (unk_0x0D22594652B31CB8(&Var2))
						{
							iVar16 = 1;
							func_218(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x186143F44A45035A(&Var2))
					{
						iVar16 = 1;
						func_218(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (!unk_0x0D22594652B31CB8(&Var2))
						{
							iVar16 = 1;
							func_218(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_218(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xF11F35D5182AC230(&Var2))
					{
						if (!unk_0x186143F44A45035A(&Var2))
						{
							iVar16 = 1;
							func_218(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x186143F44A45035A(&Var2))
					{
						iVar16 = 1;
						func_218(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_218(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_219(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xB622E0FF38C89E7E(&uParam0, 13);
}

var func_220(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_221(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x7C38F93AF52620B1(*uParam0, "COLLAPSE"))
	{
		unk_0x0139C89EE907A315(iParam1);
		unk_0xD013AC29829DDC02();
	}
	if (iParam2 == 1)
	{
		if (unk_0x7C38F93AF52620B1(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xD013AC29829DDC02();
		}
	}
}

void func_222(var uParam0, var uParam1)
{
	if (!unk_0xDCC86F723E82125E(uParam0->f_33, 10))
	{
		unk_0x7C38F93AF52620B1(*uParam1, "SET_HIGHLIGHT");
		unk_0x65960B4E2ADC9F6D(uParam0->f_35);
		unk_0xD013AC29829DDC02();
		unk_0x59A0729D503ED758(&(uParam0->f_33), 10);
	}
}

void func_223()
{
	if (Global_1573829 != 0)
	{
		Global_1573829 = 0;
	}
}

void func_224(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_225(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x20A20BF765914E37(iVar0);
		if (iVar2 != func_7())
		{
			if (func_6(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_227(uParam0->f_38[iVar0 /*2*/], 0);
					func_226(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1587175[iVar0 /*410*/].f_192.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_226(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		if (unk_0x7C38F93AF52620B1(*uParam0, "SET_ICON"))
		{
			unk_0x65960B4E2ADC9F6D(iParam1);
			unk_0x65960B4E2ADC9F6D(iParam2);
			if (iParam2 == 65)
			{
				unk_0x65960B4E2ADC9F6D(iParam3);
			}
			unk_0xD013AC29829DDC02();
		}
	}
}

int func_227(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_228(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_235() && iParam3 < func_234())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573683)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573829 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7C38F93AF52620B1(*uParam1, sVar1))
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
			if (unk_0xDCC86F723E82125E(uParam2->f_33, 8) || uParam2->f_108 == 6)
			{
				func_233("");
			}
			else
			{
				unk_0x65960B4E2ADC9F6D(iParam9);
			}
			func_233(sParam0);
			unk_0x65960B4E2ADC9F6D(iParam10);
			if (uParam2->f_108 == 6)
			{
				func_233("");
			}
			else
			{
				unk_0x65960B4E2ADC9F6D(65);
			}
			unk_0x65960B4E2ADC9F6D(-1);
			func_233("");
			if (uParam2->f_108 == 6)
			{
				func_233("");
			}
			else
			{
				func_233(&sParam4);
			}
			unk_0x0139C89EE907A315(uParam2->f_36);
			unk_0x36D5E26AC42570A3(sParam8);
			unk_0x36D5E26AC42570A3(sParam8);
			if (func_232(uParam2))
			{
				func_231("DPAD_FRIEND");
			}
			else if (func_230(uParam2))
			{
				func_231("DPAD_FRIEND");
			}
			else if (func_229(uParam2))
			{
				func_231("DPAD_CREW");
			}
			else
			{
				func_231("");
			}
			unk_0xD013AC29829DDC02();
		}
	}
}

bool func_229(var uParam0)
{
	return unk_0xDCC86F723E82125E(uParam0->f_33, 6);
}

bool func_230(var uParam0)
{
	return unk_0xDCC86F723E82125E(uParam0->f_33, 5);
}

void func_231(char* sParam0)
{
	unk_0x276F16E002D00C0C(sParam0);
	unk_0x354E2E7AA52E941F();
}

int func_232(var uParam0)
{
	if (func_230(uParam0) && func_229(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_233(char* sParam0)
{
	unk_0x621B4D0F6ED2315D(sParam0);
}

int func_234()
{
	int iVar0;
	
	if (Global_1573683)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_235()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573683)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_236(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_235() && iParam2 < func_234())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573683)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam9 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573829 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xF518F3C7FACD43B7(*uParam0))
		{
			if (unk_0x7C38F93AF52620B1(*uParam0, sVar1))
			{
				unk_0x65960B4E2ADC9F6D(iParam2);
				if (unk_0xDCC86F723E82125E(uParam1->f_33, 8) || uParam1->f_108 == 6)
				{
					func_233("");
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(iParam8);
				}
				if (uParam1->f_108 == 6 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					func_231(sParam15);
				}
				else
				{
					func_233(&(uParam1->f_1));
				}
				unk_0x65960B4E2ADC9F6D(iParam10);
				if (uParam1->f_108 == 6)
				{
					func_233("");
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(65);
				}
				if (iParam11 == 1)
				{
					unk_0x65960B4E2ADC9F6D(iVar0);
				}
				else
				{
					unk_0x65960B4E2ADC9F6D(-1);
				}
				if (func_265())
				{
					func_233("");
				}
				else if (uParam1->f_108 == 6 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					unk_0x276F16E002D00C0C("FM_AE_ONE_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 5 && !unk_0xB8A06E7E729EED0A(sParam15))
				{
					unk_0x276F16E002D00C0C("FM_AE_ONE_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if ((uParam1->f_108 == 7 && !unk_0xB8A06E7E729EED0A(sParam15)) && !unk_0xB8A06E7E729EED0A(sParam16))
				{
					unk_0x276F16E002D00C0C("FM_AE_TWO_INT");
					unk_0xCE59E3E42586D52D(sParam15);
					unk_0xCE59E3E42586D52D(sParam16);
					unk_0x6DC80A902A91958F(iParam17);
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 8 && !unk_0xB8A06E7E729EED0A(&(uParam1->f_104)))
				{
					unk_0x276F16E002D00C0C("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0x36E8D9048E194806(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0x6DC80A902A91958F(iParam9);
					}
					unk_0xCE59E3E42586D52D(&(uParam1->f_104));
					unk_0x354E2E7AA52E941F();
				}
				else if (uParam1->f_108 == 9)
				{
					unk_0x276F16E002D00C0C("FM_AE_CASH");
					unk_0x5CDA8F588F01C361(iParam9, 1);
					unk_0x354E2E7AA52E941F();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0xB8A06E7E729EED0A(&(uParam1->f_104)))
					{
						func_231(&(uParam1->f_104));
					}
					else
					{
						func_233("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x276F16E002D00C0C("STRING");
					unk_0xE4CFBF63F6DBED8E(iParam13, 6);
					unk_0x354E2E7AA52E941F();
				}
				else if (fParam12 != -1f)
				{
					unk_0x276F16E002D00C0C("NUMBER");
					unk_0x36E8D9048E194806(fParam12, 1);
					unk_0x354E2E7AA52E941F();
				}
				else if (iParam9 != -1)
				{
					unk_0x65960B4E2ADC9F6D(iParam9);
				}
				else
				{
					func_233("");
				}
				if (uParam1->f_108 == 6)
				{
					func_233("");
				}
				else
				{
					func_233(&sParam3);
				}
				unk_0x0139C89EE907A315(uParam1->f_36);
				if (iParam11 == 1 || unk_0xB8A06E7E729EED0A(sParam7))
				{
					func_233("");
					func_233("");
				}
				else
				{
					unk_0x36D5E26AC42570A3(sParam7);
					unk_0x36D5E26AC42570A3(sParam7);
				}
				if (func_232(uParam1))
				{
					func_231("DPAD_FRIEND");
				}
				else if (func_230(uParam1))
				{
					func_231("DPAD_FRIEND");
				}
				else if (func_229(uParam1))
				{
					func_231("DPAD_CREW");
				}
				else
				{
					func_231("");
				}
				unk_0xD013AC29829DDC02();
			}
		}
	}
}

int func_237(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_238(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_240(iParam0)) && !func_239(iParam0))
	{
		iVar0 = func_177();
	}
	iVar1 = func_55(iParam0);
	if (!iVar1 == -1)
	{
		return func_53(iVar1);
	}
	return iVar0;
}

bool func_239(int iParam0)
{
	return func_23(iParam0, 20);
}

int func_240(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608811[iVar0 /*109*/] != -1;
	}
	return 0;
}

char* func_241(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xC3D849E6E05C31A7())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0xC3D849E6E05C31A7())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_242(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_246(iParam3))
	{
		*fParam1 = (func_243(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_237(iParam3))
	{
		*fParam1 = (func_243(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xC3D849E6E05C31A7())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_245(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xC3D849E6E05C31A7())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_244(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_244(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_245(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = func_250(iParam0);
	if (iVar0 == -1)
	{
		func_248(iParam0, 1);
		return 0;
	}
	Global_1348409[iVar0 /*5*/].f_4 = 1;
	return Global_1348409[iVar0 /*5*/].f_2;
}

void func_248(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_250(iParam0) != -1)
	{
		return;
	}
	if (Global_1348572)
	{
		if (iParam0 == Global_1348572.f_1)
		{
			return;
		}
	}
	if (func_249(iParam0))
	{
		return;
	}
	if (Global_1348610 >= 32)
	{
		return;
	}
	Global_1348577[Global_1348610] = iParam0;
	Global_1348610++;
	if (bParam1)
	{
	}
}

int func_249(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348610)
	{
		if (Global_1348577[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_250(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348570 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348570)
	{
		if (Global_1348409[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x09EE7867D5A6100E(Global_1348409[iVar0 /*5*/].f_2) && unk_0x1A48755EDAA1BFA6(Global_1348409[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_251(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_251(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348570)
	{
		return;
	}
	if (unk_0x09EE7867D5A6100E(Global_1348409[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348409[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xC607197AF4E3A5B7(Global_1348409[iParam0 /*5*/].f_2), 64);
			unk_0xE0F13AAF9FB19B4B(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x0AF52A8B5613FE81(Global_1348409[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348570)
	{
		Global_1348409[iVar32 /*5*/] = { Global_1348409[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_252(&(Global_1348409[iVar32 /*5*/]));
	Global_1348570 = (Global_1348570 - 1);
}

void func_252(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_7();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		uParam0->f_3 = unk_0x2AA13A84EE2D3B24();
	}
}

struct<4> func_253(int iParam0)
{
	struct<4> Var0;
	
	if (func_6(iParam0, 0, 1))
	{
		Global_2457104 = { func_70(iParam0) };
		if (unk_0xF7FE713C9F786F8C())
		{
			if (func_219(Global_2457104))
			{
				if (!unk_0x3084526A863D7966(&Global_2457104))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xE028438B8B6A57B6(0))
		{
			return Var0;
		}
		if (func_257(&Global_2457104))
		{
			Global_2457034 = { func_255(iParam0) };
			func_254(&Global_2457034, &Var0);
		}
	}
	return Var0;
}

void func_254(var uParam0, var uParam1)
{
	unk_0xE0F4EA2B2963CFA2(uParam0, 35, uParam1);
}

struct<35> func_255(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_256(iParam0))
	{
		return Global_1315945[unk_0xA34E7C2A5118D638() /*35*/];
	}
	Var0 = { func_70(iParam0) };
	unk_0x59E0C66A4FA07806(&Var13, 35, &Var0);
	return Var13;
}

int func_256(int iParam0)
{
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		return 1;
	}
	return 0;
}

int func_257(var uParam0)
{
	if (unk_0x5AA202D345A0E889())
	{
		if (unk_0x14F2268F2CD21E48() && unk_0x0BB7D2D2CAAFD70C(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_258(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_263(iParam0) || func_262(iParam0)) || func_261(iParam0))
		{
			return 0;
		}
	}
	if (!func_260(iParam0))
	{
		return 0;
	}
	if ((!func_259(iParam0) && Global_2417071[iParam0 /*306*/].f_232 == -1) && !func_270(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_259(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (func_6(unk_0xA34E7C2A5118D638(), 0, 1))
		{
			if (unk_0x139A9C4D61DFD52E(iParam0, unk_0xA34E7C2A5118D638()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_260(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_128, 22);
}

bool func_261(int iParam0)
{
	if (func_263(iParam0))
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 8);
}

int func_262(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 10) || unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 9));
	}
	return 0;
}

bool func_263(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 2);
}

int func_264(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_7())
	{
		return 0;
	}
	if (func_64(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xDCC86F723E82125E(Global_1587175[iVar0 /*410*/].f_128, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_265()
{
	switch (func_266(unk_0xA34E7C2A5118D638()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_239(unk_0xA34E7C2A5118D638()))
	{
		switch (func_19(unk_0xA34E7C2A5118D638()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_266(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1608811[iVar0 /*109*/];
	}
	return -1;
}

int func_267(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_28 != -1 && func_268(Global_1608811[iParam0 /*109*/].f_9.f_28))
	{
		return 1;
	}
	if (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_27 != -1)
	{
		if (func_268(Global_1608811[iParam0 /*109*/].f_9.f_27))
		{
			return 1;
		}
	}
	return 0;
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_269(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_6(unk_0x20A20BF765914E37(iVar0), 0, 1))
		{
			iVar1 = unk_0x20A20BF765914E37(iVar0);
			if (!func_64(iVar1, 0))
			{
				if ((unk_0x139A9C4D61DFD52E(iVar1, unk_0xA34E7C2A5118D638()) || Global_2417071[iVar1 /*306*/].f_232 != -1) || func_270(iVar1))
				{
					if (func_34(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_270(int iParam0)
{
	return Global_1587175[iParam0 /*410*/].f_177 != 0;
}

void func_271(var uParam0)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x65960B4E2ADC9F6D(0);
		unk_0xD013AC29829DDC02();
	}
}

void func_272(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1338608.f_2 == 0)
		{
			Global_1338608.f_2 = 1;
		}
	}
	else if (Global_1338608.f_2 == 1)
	{
		Global_1338608.f_2 = 0;
	}
}

void func_273()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1))
	{
		if (func_42())
		{
			func_183();
		}
	}
}

int func_274()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 0) && func_42())
	{
		return 1;
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4414, 1) && func_42())
	{
		return 1;
	}
	return 0;
}

int func_275()
{
	if (func_42())
	{
		if (func_174(Global_2426867.f_2138[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_276()
{
	if (func_42())
	{
		if (func_178(Global_2426867.f_2138[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_277(int iParam0)
{
	Global_1338608.f_1 = Global_1338608;
	Global_1338608 = iParam0;
}

int func_278(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_315(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_314();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_313())
		{
			if (func_312() > 0 && Global_1573683)
			{
				unk_0x7662B6FB19655462();
				unk_0x416AE03EAAA9AE80(fVar7);
				unk_0x68A38902ADFD05FE(18);
				if (unk_0xB45DF29A98EEAD5D())
				{
					unk_0x0CD0751316BC99F7();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_304())
		{
			func_303(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4417, 26))
	{
		func_303(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_216(&(uParam2->f_19)))
	{
		if (func_312() == 1)
		{
			func_302(bVar6, uParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_303(uParam0, uParam2, 0);
		}
	}
	if (func_216(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xB45DF29A98EEAD5D())
		{
			unk_0x0CD0751316BC99F7();
		}
		if (func_3(&(uParam2->f_19), 10000, 0) || (func_312() == 0 && !bParam5))
		{
			func_303(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_301();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x7662B6FB19655462();
				}
				unk_0x68A38902ADFD05FE(18);
			}
			if (unk_0xDCC86F723E82125E(uParam2->f_33, 0))
			{
				Global_1573681 = uParam3;
				Global_1573680 = 1;
				unk_0x416AE03EAAA9AE80(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573682)
					{
						unk_0x77621132305B133B(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_301();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x7662B6FB19655462();
					}
					unk_0x68A38902ADFD05FE(18);
				}
				unk_0x416AE03EAAA9AE80(fVar7);
				if (func_302(bVar6, uParam0, 0))
				{
					func_271(uParam0);
					uVar4 = func_299(iParam1, &(Global_1613622.f_68795), bParam4);
					if (bParam4)
					{
						func_296(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_289(uParam0, func_293(uParam2), func_290(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_286(uParam0, func_288(), func_287(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573682;
						func_296(uParam0, uVar4, "", 0, -1, Global_1573682, 1);
					}
					else
					{
						Var0 = { func_284(iParam1) };
						iVar8 = func_279(iParam1);
						func_296(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x59A0729D503ED758(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_279(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_283())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_282(unk_0xA34E7C2A5118D638()))
			{
				iVar0 = 20;
			}
			if (func_281(unk_0xA34E7C2A5118D638()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_280(unk_0xA34E7C2A5118D638()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_280(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 4;
}

bool func_281(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 7;
}

bool func_282(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 2;
}

bool func_283()
{
	return Global_1613622.f_1 == 0;
}

struct<4> func_284(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_285(unk_0xA34E7C2A5118D638()) || func_280(unk_0xA34E7C2A5118D638()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1613622.f_22, 16);
			break;
	}
	return Var0;
}

bool func_285(int iParam0)
{
	return Global_2417071[iParam0 /*306*/].f_114 == 5;
}

void func_286(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (unk_0xB8A06E7E729EED0A(sParam2))
		{
			func_231(sParam1);
		}
		else
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT");
			unk_0xCE59E3E42586D52D(sParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		func_231("");
		if (iParam3 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
		}
		unk_0xD013AC29829DDC02();
	}
}

char* func_287()
{
	switch (func_19(unk_0xA34E7C2A5118D638()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_288()
{
	switch (func_19(unk_0xA34E7C2A5118D638()))
	{
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			return "PIM_MAGM201";
			break;
		
		case 151:
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
	}
	return "";
}

void func_289(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (unk_0xB8A06E7E729EED0A(uParam2))
		{
			func_231(uParam1);
		}
		else if (func_266(unk_0xA34E7C2A5118D638()) == 133)
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT_C");
			unk_0xCE59E3E42586D52D(uParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			unk_0x276F16E002D00C0C("FM_AE_BRACKT");
			unk_0xCE59E3E42586D52D(sParam1);
			unk_0xCE59E3E42586D52D(sParam2);
			unk_0x354E2E7AA52E941F();
		}
		func_231("");
		if (iParam3 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam3);
		}
		unk_0xD013AC29829DDC02();
	}
}

char* func_290(var uParam0)
{
	int iVar0;
	
	iVar0 = func_266(unk_0xA34E7C2A5118D638());
	if (func_292())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_291())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_291()
{
	if (func_266(unk_0xA34E7C2A5118D638()) == 133)
	{
		return Global_2458121.f_4635;
	}
	return -1;
}

bool func_292()
{
	return Global_1587174;
}

char* func_293(var uParam0)
{
	int iVar0;
	
	iVar0 = func_266(unk_0xA34E7C2A5118D638());
	if (func_292())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_295() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_295() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_291())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_294() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_294()
{
	return Global_2458121.f_4638;
}

int func_295()
{
	if (func_266(unk_0xA34E7C2A5118D638()) == 132)
	{
		return Global_2458121.f_4633;
	}
	return -1;
}

void func_296(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0x7C38F93AF52620B1(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_233(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x276F16E002D00C0C(uParam1);
			unk_0x6DC80A902A91958F(iParam5);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			func_231(sParam1);
		}
		if (func_313() && iParam6)
		{
			if (func_298())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x276F16E002D00C0C("LBD_DPD_CNT");
			unk_0x6DC80A902A91958F(iVar0);
			unk_0x6DC80A902A91958F(iVar1);
			unk_0x354E2E7AA52E941F();
		}
		else
		{
			func_231(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x65960B4E2ADC9F6D(iParam4);
			if (func_297(unk_0xA34E7C2A5118D638()))
			{
				unk_0x65960B4E2ADC9F6D(166);
			}
		}
		unk_0xD013AC29829DDC02();
	}
}

int func_297(int iParam0)
{
	if (func_282(iParam0) || func_281(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_298()
{
	return Global_1573683;
}

char* func_299(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_300();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573847 == 0)
		{
			Global_1573847 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xB8A06E7E729EED0A(uParam1))
	{
		if (Global_1573847 == 1)
		{
			Global_1573847 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573847 == 0)
		{
			Global_1573847 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 6:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_300()
{
	if (unk_0x94D4FEDA7822E39D())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x59F25675A261768C())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x6CD7F99044C6563E())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x70620CD9F8A7C758())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_301()
{
	Global_36522 = 1;
}

bool func_302(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x31DC2CEFEF13C96D("mp_matchmaking_card");
	}
	return unk_0xF518F3C7FACD43B7(*uParam1);
}

void func_303(var uParam0, var uParam1, bool bParam2)
{
	unk_0x77621132305B133B(&(uParam1->f_33), 7);
	Global_1573681 = 0;
	func_223();
	Global_1573680 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_216(&(uParam1->f_19)))
		{
			func_224(&(uParam1->f_19));
		}
	}
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		unk_0xEF145906684E3D72(uParam0);
	}
	if (unk_0xDCC86F723E82125E(uParam1->f_33, 0))
	{
		unk_0x77621132305B133B(&(uParam1->f_33), 0);
	}
	unk_0x416AE03EAAA9AE80(0f);
}

int func_304()
{
	if (func_311())
	{
		return 0;
	}
	if (func_206())
	{
		return 0;
	}
	if (!func_309())
	{
		return 0;
	}
	if (!func_200())
	{
		return 0;
	}
	if (func_308(8, -1))
	{
		return 0;
	}
	if (func_312() == 2)
	{
		return 0;
	}
	if (Global_2458121.f_4397)
	{
		return 0;
	}
	if (func_204())
	{
		return 0;
	}
	else if (!func_209(unk_0xA34E7C2A5118D638(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_307(1) || func_305(1)) || Global_17118.f_124) || Global_17118)
	{
		return 0;
	}
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (func_62(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (Global_1710052)
	{
		return 0;
	}
	if (Global_1710055)
	{
		return 0;
	}
	if (func_141(0))
	{
		return 0;
	}
	return 1;
}

int func_305(bool bParam0)
{
	if (unk_0x5E9D81C7387C86AE())
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (func_306(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x0139E142C27412BC(0, 25) || unk_0x0139E142C27412BC(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17118.f_130)
	{
		return 0;
	}
	if (unk_0x0139E142C27412BC(0, 19) || (!bParam0 && unk_0x69ED83B6DEBA60F9(0, 19)))
	{
		return 1;
	}
	if (unk_0x68B0A67658F2D9C2())
	{
		if (((unk_0x0139E142C27412BC(0, 166) || unk_0x0139E142C27412BC(0, 167)) || unk_0x0139E142C27412BC(0, 168)) || unk_0x0139E142C27412BC(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x69ED83B6DEBA60F9(0, 166) || unk_0x69ED83B6DEBA60F9(0, 167)) || unk_0x69ED83B6DEBA60F9(0, 168)) || unk_0x69ED83B6DEBA60F9(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_306(int iParam0)
{
	int iVar0;
	
	if (unk_0x6C0EF9FA1B336D64())
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam0))
		{
			unk_0xA51F11E1DC7307BB(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_307(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_308(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

int func_309()
{
	if (func_310())
	{
		return 1;
	}
	if (unk_0xD5DFCA69ACAA20E3())
	{
		return 0;
	}
	if (unk_0xE71FCE10773CF7B0() || unk_0x2230725B418B1240())
	{
		return 0;
	}
	if (unk_0x0B7B1F8E572996A4())
	{
		return 0;
	}
	return 1;
}

bool func_310()
{
	return Global_1312438;
}

bool func_311()
{
	return unk_0x693EBB4F13506457() <= Global_17257.f_5745 + 100;
}

int func_312()
{
	return Global_1338611.f_68;
}

int func_313()
{
	if (Global_1573682 > 16)
	{
		return 1;
	}
	return 0;
}

float func_314()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x5EC483EC6D05F31E()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return 1;
			break;
	}
	return 0;
}

int func_316()
{
	if (func_317(unk_0xA34E7C2A5118D638()))
	{
		return Global_1318847;
	}
	return 0;
}

int func_317(int iParam0)
{
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_64(iParam0, 0))
		{
			return unk_0x1E3906AEA0BF5747(iParam0);
		}
	}
	return 0;
}

int func_318()
{
	if (func_316())
	{
		return 1;
	}
	if (func_261(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (func_292())
	{
		return 1;
	}
	if (func_240(unk_0xA34E7C2A5118D638()))
	{
		switch (func_266(unk_0xA34E7C2A5118D638()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_319(unk_0xA34E7C2A5118D638()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_319(unk_0xA34E7C2A5118D638()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_319(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 4);
}

int func_320(int iParam0)
{
	if ((iParam0 == 24 && func_240(unk_0xA34E7C2A5118D638())) && !func_239(unk_0xA34E7C2A5118D638()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_20(unk_0xA34E7C2A5118D638(), 0) && func_239(unk_0xA34E7C2A5118D638()))
		{
			return 1;
		}
		if (func_321(unk_0xA34E7C2A5118D638()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_321(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_240(iParam0) && !func_263(iParam0)) && !unk_0xDCC86F723E82125E(Global_1608811[iParam0 /*109*/].f_1, 8));
	bVar2 = func_239(iParam0);
	uVar3 = func_14();
	uVar4 = func_161();
	if ((bVar1 && (func_324(iParam0) || func_323(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_22(iParam0)) && !func_322(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2458121.f_4648.f_18 != iVar0)
	{
		Global_2458121.f_4648.f_18 = iVar0;
	}
	return iVar0;
}

bool func_322(int iParam0)
{
	return func_23(iParam0, 19);
}

int func_323(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 0);
	}
	return 0;
}

int func_324(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 7);
	}
	return 0;
}

void func_325()
{
	if (func_6(func_24(), 1, 1) && !unk_0xB6900B8CB0ABBD2B(unk_0xCF4C00513A86E840(func_24())))
	{
		func_326(151, unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(func_24()), 1), &uLocal_99, 1140457472, 1144750080, 0);
	}
}

void func_326(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_240(unk_0xA34E7C2A5118D638()) && !func_263(unk_0xA34E7C2A5118D638())) && !unk_0xDCC86F723E82125E(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1, 8)) && (func_324(unk_0xA34E7C2A5118D638()) || func_323(unk_0xA34E7C2A5118D638())))
	{
		return;
	}
	Global_1722044 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), Param1);
	func_352(iParam0, fVar0);
	if (unk_0x2BF05095F2389894() && unk_0x45D1BEB329799891() == 15)
	{
		if (func_22(unk_0xA34E7C2A5118D638()) || func_21(unk_0xA34E7C2A5118D638()))
		{
			if (!unk_0x997F946EBE927086(1344549371))
			{
				unk_0xDB617B399FCCE424(1344549371);
			}
		}
		else if (unk_0x997F946EBE927086(1344549371))
		{
			unk_0x7876EF2FBBB49635(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_165(unk_0xA34E7C2A5118D638(), 21))
		{
			func_351(Param1, 1, 0);
		}
		if (!*uParam4 && func_6(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			*uParam4 = 1;
			if (func_350(iParam0))
			{
				unk_0xFD62177C7242216E(func_349(iParam0));
				if (func_348(iParam0))
				{
					unk_0x60B57BC5E51D2074(0);
					if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
					{
						unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 0, 1);
						unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 1);
					}
					unk_0x59A0729D503ED758(&(Global_1722044.f_3), 0);
				}
			}
			if (func_347(iParam0))
			{
				fVar1 = func_346(iParam0);
				if (fVar1 != 1f)
				{
					func_343(fVar1);
					unk_0x59A0729D503ED758(&(Global_1722044.f_3), 1);
				}
			}
			if (!Global_2391042)
			{
				if (func_342(iParam0) && func_22(unk_0xA34E7C2A5118D638()))
				{
					func_341(1);
					func_340(2);
				}
			}
			func_162(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_23(unk_0xA34E7C2A5118D638(), 19))
			{
				func_164(19);
			}
		}
		if (*uParam4 && func_6(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			*uParam4 = 0;
			if (func_350(iParam0))
			{
				if (unk_0xDCC86F723E82125E(Global_1722044.f_3, 0))
				{
					unk_0xFD62177C7242216E(1f);
					unk_0x60B57BC5E51D2074(5);
					unk_0x77621132305B133B(&(Global_1722044.f_3), 0);
				}
			}
			if (func_347(iParam0))
			{
				func_339();
				unk_0x77621132305B133B(&(Global_1722044.f_3), 1);
			}
			if (iParam7 && !func_240(unk_0xA34E7C2A5118D638()))
			{
				if (func_19(unk_0xA34E7C2A5118D638()) != 152)
				{
					func_328();
				}
			}
			if (func_141(2))
			{
				func_341(0);
				func_327(2);
			}
		}
	}
}

void func_327(int iParam0)
{
	unk_0x77621132305B133B(&(Global_2458121.f_4648.f_16), iParam0);
}

void func_328()
{
	Global_2404919.f_20 = { Global_2406723 };
	Global_2404919.f_22 = { Global_2406725 };
	func_337();
	func_329(1, 1);
}

void func_329(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404919.f_39 = { Global_2406742 };
	}
	else
	{
		Global_2404919.f_39 = { Global_2406742 };
		Global_2404919.f_39.f_49 = { Global_2406742.f_49 };
		Global_2404919.f_39.f_52 = Global_2406742.f_52;
		Global_2404919.f_39.f_53 = Global_2406742.f_53;
	}
	if (bParam0)
	{
		func_336();
	}
	func_332(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0);
	func_331(0);
	func_330();
}

void func_330()
{
	struct<4> Var0;
	
	if (Global_2404919.f_469.f_1 == unk_0x46CF50E0E5A24635())
	{
		Global_2404919.f_469 = { Var0 };
	}
}

void func_331(bool bParam0)
{
	if (bParam0)
	{
		Global_2404919.f_629 = 0;
	}
	else
	{
		Global_2404919.f_629 = 1;
	}
}

void func_332(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam0)
	{
		Global_2404919.f_1135 = iParam1;
		Global_2404919.f_1136 = iParam2;
		Global_2404919.f_1137 = iParam10;
		func_334();
		func_333(8, 0, 0);
		Global_2404919.f_630 = 1;
		Global_2404919.f_1140 = iParam3;
		Global_2404919.f_1141 = iParam4;
		Global_2404919.f_1138 = iParam5;
		Global_2404919.f_1139 = iParam6;
		Global_2404919.f_1142 = iParam7;
		Global_2404919.f_1143 = iParam8;
		Global_2404919.f_1144 = iParam9;
	}
	else
	{
		func_334();
		func_333(0, 0, 0);
		Global_2404919.f_630 = 0;
	}
}

void func_333(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409431 = 0;
	}
	Global_2404919.f_469 = iParam0;
	Global_2404919.f_469.f_1 = unk_0x46CF50E0E5A24635();
	Global_2404919.f_469.f_2 = iParam1;
	Global_2404919.f_469.f_3 = iParam2;
}

void func_334()
{
	func_335();
	Global_2404919.f_631 = 0;
}

void func_335()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404919.f_632[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_336()
{
	Global_2404919.f_347 = { Global_2407050 };
}

void func_337()
{
	func_338();
	Global_2404919.f_1275 = 0;
}

void func_338()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404919.f_1276[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_339()
{
	if (unk_0xC2DCA35AE2EC9DC4(Global_2458121.f_4644))
	{
		if (!Global_2458121.f_4644 == unk_0x46CF50E0E5A24635() && Global_2458121.f_4643 < 1f)
		{
			return;
		}
	}
	Global_2458121.f_4644 = -1;
	Global_2458121.f_4643 = 1f;
}

void func_340(int iParam0)
{
	unk_0x59A0729D503ED758(&(Global_2458121.f_4648.f_16), iParam0);
}

void func_341(int iParam0)
{
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
			return 1;
		
		default:
	}
	return 0;
}

void func_343(float fParam0)
{
	float fVar0;
	
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_344())
	{
		return;
	}
	fVar0 = (Global_2458121.f_4643 - fParam0);
	if (unk_0xC2DCA35AE2EC9DC4(Global_2458121.f_4644))
	{
		if (!Global_2458121.f_4644 == unk_0x46CF50E0E5A24635() && unk_0xA3C5926D6E5619AE(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2458121.f_4643 = fParam0;
	Global_2458121.f_4644 = unk_0x46CF50E0E5A24635();
}

int func_344()
{
	switch (func_345())
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

int func_345()
{
	return Global_25115;
}

float func_346(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
			return 1;
		
		default:
	}
	return 0;
}

int func_348(int iParam0)
{
	switch (iParam0)
	{
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		default:
	}
	return 0;
}

float func_349(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0f;
		
		case 144:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_350(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
			return 1;
		
		default:
	}
	return 0;
}

void func_351(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404919.f_39.f_49 = { Param0 };
	Global_2404919.f_39.f_52 = iParam3;
	Global_2404919.f_39.f_53 = iParam4;
}

void func_352(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_355(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_353();
	}
}

void func_353()
{
	if (!func_354(unk_0xA34E7C2A5118D638()))
	{
		func_162(25);
	}
}

bool func_354(int iParam0)
{
	return func_23(iParam0, 25);
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10420;
		
		case 142:
			return Global_262145.f_10408;
		
		case 157:
			return Global_262145.f_10375;
		
		case 159:
			return Global_262145.f_10358;
		
		case 162:
			return Global_262145.f_10469;
		
		default:
	}
	return -1;
}

void func_356()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_357(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_357(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 10))
	{
		if ((unk_0x95CCECA3948CFE7B(Var0.f_1) && unk_0x96209AADF56E8FE8(Var0.f_1)) && unk_0x4D3C2AC8339BFB4F(Var0.f_1) == unk_0xC8B93D94F8954288())
		{
			if ((unk_0x95CCECA3948CFE7B(Var0.f_0) && unk_0x96209AADF56E8FE8(Var0.f_0)) && unk_0x4D3C2AC8339BFB4F(Var0.f_0) == unk_0xCF4C00513A86E840(func_24()))
			{
				if (Var0.f_3)
				{
					unk_0x59A0729D503ED758(&(Local_110[unk_0x935FA14EDA695A82() /*4*/].f_1), 1);
				}
			}
		}
	}
}

void func_358()
{
	struct<2> Var0;
	
	if (!unk_0xDCC86F723E82125E(iLocal_98, 3))
	{
		if (func_6(func_24(), 1, 1) && unk_0xDF73DA5E2287C499(func_24()))
		{
			StringCopy(&Var0, "GBTBLIP", 8);
			func_374(func_24(), func_376(6), 1);
			func_373(func_24(), 432, 1);
			func_371(func_24(), 1, 1);
			func_370(func_24(), Global_262145.f_10253, 1);
			func_369(func_24(), 1);
			func_366(func_24(), Var0, 1);
			if (func_29() <= 1)
			{
				func_359(func_24(), 1, 7000);
			}
			unk_0x59A0729D503ED758(&iLocal_98, 3);
		}
	}
}

void func_359(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_7())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_2426867)
		{
		}
		else if (unk_0x6B4865E08E90ACC5(Global_2411623[iVar0]))
		{
			unk_0x59A0729D503ED758(&(Global_2411623.f_367), iVar0);
			unk_0x77621132305B133B(&(Global_2411623.f_372), iVar0);
			unk_0x2D482C2DD6BFCD09(Global_2411623[iVar0], 1);
			unk_0xCFE227FC030A80F2(Global_2411623[iVar0], 250);
			func_360(iParam0);
			if (iParam2 < 0)
			{
				unk_0x59A0729D503ED758(&(Global_2411623.f_372), iVar0);
			}
			else
			{
				Global_2411623.f_198[iVar0] = unk_0x1A184A79993F1536(unk_0x2AA13A84EE2D3B24(), iParam2);
			}
		}
		else
		{
			unk_0x59A0729D503ED758(&(Global_2411623.f_367), iVar0);
			unk_0x77621132305B133B(&(Global_2411623.f_372), iVar0);
			if (iParam2 < 0)
			{
				unk_0x59A0729D503ED758(&(Global_2411623.f_372), iVar0);
			}
			else
			{
				Global_2411623.f_198[iVar0] = unk_0x1A184A79993F1536(unk_0x2AA13A84EE2D3B24(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0x77621132305B133B(&(Global_2411623.f_367), iVar0);
		unk_0x77621132305B133B(&(Global_2411623.f_372), iVar0);
		if (unk_0x6B4865E08E90ACC5(Global_2411623[iVar0]))
		{
			func_360(iParam0);
			unk_0x2D482C2DD6BFCD09(Global_2411623[iVar0], 0);
		}
	}
}

void func_360(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	if (func_6(iParam0, 0, 1))
	{
		if (unk_0x6B4865E08E90ACC5(Global_2411623[iVar0]))
		{
			iVar1 = unk_0x88C79C7AA3272E3A(Global_2411623[iVar0]);
			if (unk_0xDCC86F723E82125E(Global_2411623.f_383, iVar0) || unk_0xDCC86F723E82125E(Global_2411623.f_382, iVar0))
			{
				iVar2 = 1;
			}
			else if ((unk_0xDCC86F723E82125E(Global_2411623.f_368, iVar0) || unk_0xDCC86F723E82125E(Global_2411623.f_367, iVar0)) || unk_0xDCC86F723E82125E(Global_2411623.f_385, iVar0))
			{
				iVar2 = func_363(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						iVar2 = func_363(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						iVar2 = func_363(11);
						break;
					
					case 254:
						if (unk_0x07CBE0ED3114C7D8(iParam0) == unk_0x07CBE0ED3114C7D8(Global_2426867))
						{
							iVar2 = func_363(6);
						}
						else
						{
							iVar2 = func_363(5);
						}
						break;
					
					case 271:
						if (unk_0x07CBE0ED3114C7D8(iParam0) == unk_0x07CBE0ED3114C7D8(Global_2426867))
						{
							iVar2 = func_363(6);
						}
						else
						{
							iVar2 = func_363(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_57(Global_2426867, iParam0, -2, 0))
						{
							iVar2 = func_363(6);
						}
						else
						{
							iVar2 = func_363(5);
						}
						break;
					
					case 303:
					case 418:
					case 364:
						iVar2 = func_363(10);
						break;
					
					case 102:
						iVar2 = func_363(10);
						break;
					
					case 417:
						if (func_361(Global_2426867, iParam0, 1))
						{
							iVar2 = func_363(6);
						}
						else
						{
							iVar2 = func_363(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_361(Global_2426867, iParam0, 1))
						{
							iVar2 = func_363(6);
						}
						else
						{
							iVar2 = func_363(5);
						}
						break;
					}
			}
			unk_0xEB19FBC5156AAE3A(Global_2411623[iVar0], iVar2);
		}
	}
}

int func_361(int iParam0, int iParam1, bool bParam2)
{
	if (func_44(iParam0, -2, 0, 0) == func_44(iParam1, -2, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_362(func_44(iParam0, -2, 0, 0)) && func_362(func_44(iParam1, -2, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_362(int iParam0)
{
	if (iParam0 == func_50(1) || iParam0 == func_50(0))
	{
		return 1;
	}
	return 0;
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_365())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_364(iParam0);
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_365()
{
	int iVar0;
	
	iVar0 = unk_0x07CBE0ED3114C7D8(Global_2426867);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return unk_0xDCC86F723E82125E(Global_1613622.f_79[iVar0 /*6794*/].f_3823, 4);
	}
	return 0;
}

void func_366(int iParam0, char[8] cParam1, bool bParam3)
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 == func_7())
	{
		return;
	}
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_344())
	{
		return;
	}
	iVar1 = iParam0;
	if (!unk_0xC2DCA35AE2EC9DC4(Global_2411623.f_726) || Global_2411623.f_726 == unk_0x46CF50E0E5A24635())
	{
		if (bParam3)
		{
			if (!unk_0xDCC86F723E82125E(Global_2411623.f_392, iVar1))
			{
				bVar0 = true;
			}
			unk_0x59A0729D503ED758(&(Global_2411623.f_392), iVar1);
			Global_2411623.f_727[iVar1 /*2*/] = { cParam1 };
			Global_2411623.f_726 = unk_0x46CF50E0E5A24635();
		}
		else
		{
			if (unk_0xDCC86F723E82125E(Global_2411623.f_392, iVar1))
			{
				bVar0 = true;
			}
			unk_0x77621132305B133B(&(Global_2411623.f_392), iVar1);
			if (Global_2411623.f_392 == 0)
			{
				Global_2411623.f_726 = -1;
			}
		}
	}
	if (bVar0)
	{
		if (unk_0x6B4865E08E90ACC5(Global_2411623[iVar1]))
		{
			func_367(iParam0);
		}
	}
}

void func_367(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_368(iParam0))
	{
		unk_0xF318DA2E8E4F4397("CUSPLNM");
		unk_0xCE59E3E42586D52D(&(Global_2411623.f_727[iVar0 /*2*/]));
		unk_0xA133FE69F7ED3360(Global_2411623[iVar0]);
	}
	else
	{
		unk_0xFE1697DE83D94AE7(Global_2411623[iVar0], iParam0);
	}
}

int func_368(int iParam0)
{
	if (unk_0xDCC86F723E82125E(Global_2411623.f_392, iParam0))
	{
		if (unk_0xC2DCA35AE2EC9DC4(Global_2411623.f_726))
		{
			return 1;
		}
		else
		{
			unk_0x77621132305B133B(&(Global_2411623.f_392), iParam0);
		}
	}
	return 0;
}

void func_369(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == func_7())
	{
		return;
	}
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_344())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0xC2DCA35AE2EC9DC4(Global_2411623.f_724) || Global_2411623.f_724 == unk_0x46CF50E0E5A24635())
	{
		if (bParam1)
		{
			unk_0x59A0729D503ED758(&(Global_2411623.f_389), iVar0);
			Global_2411623.f_724 = unk_0x46CF50E0E5A24635();
		}
		else
		{
			unk_0x77621132305B133B(&(Global_2411623.f_389), iVar0);
			if (Global_2411623.f_389 == 0)
			{
				Global_2411623.f_724 = -1;
			}
		}
	}
}

void func_370(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_7())
	{
		return;
	}
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_344())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0xC2DCA35AE2EC9DC4(Global_2411623.f_691[iParam0]) || Global_2411623.f_691[iParam0] == unk_0x46CF50E0E5A24635())
	{
		if (bParam2)
		{
			unk_0x59A0729D503ED758(&(Global_2411623.f_388), iVar0);
			Global_2411623.f_493[iVar0] = fParam1;
			Global_2411623.f_691[iParam0] = unk_0x46CF50E0E5A24635();
		}
		else
		{
			unk_0x77621132305B133B(&(Global_2411623.f_388), iVar0);
			Global_2411623.f_691[iParam0] = -1;
		}
	}
}

void func_371(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_6(iParam0, 1, 1))
		{
			Global_2411623.f_625[iParam0] = unk_0x46CF50E0E5A24635();
			unk_0x59A0729D503ED758(&(Global_2411623.f_364), iParam0);
			func_372(iParam0, bParam2);
		}
	}
	else
	{
		func_372(iParam0, bParam2);
		unk_0x77621132305B133B(&(Global_2411623.f_364), iParam0);
		Global_2411623.f_625[iParam0] = -1;
	}
}

void func_372(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x59A0729D503ED758(&(Global_2411623.f_365), iParam0);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_2411623.f_365), iParam0);
	}
	if (unk_0x6B4865E08E90ACC5(Global_2411623[iParam0]))
	{
		if (bParam1)
		{
			unk_0x577E650C288BBD2C(Global_2411623[iParam0], 0);
		}
		else
		{
			unk_0x577E650C288BBD2C(Global_2411623[iParam0], 1);
		}
	}
}

void func_373(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_7())
	{
		return;
	}
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_344())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xC2DCA35AE2EC9DC4(Global_2411623.f_526[iParam0]) || Global_2411623.f_526[iParam0] == unk_0x46CF50E0E5A24635())
	{
		if (bParam2)
		{
			unk_0x59A0729D503ED758(&(Global_2411623.f_385), iVar0);
			Global_2411623.f_394[iVar0] = uVar1;
			Global_2411623.f_526[iParam0] = unk_0x46CF50E0E5A24635();
		}
		else
		{
			unk_0x77621132305B133B(&(Global_2411623.f_385), iVar0);
			Global_2411623.f_526[iParam0] = -1;
		}
	}
}

void func_374(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_7())
	{
		return;
	}
	if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) == func_344())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_375(iParam0))
	{
		if (bParam2)
		{
			unk_0x59A0729D503ED758(&(Global_2411623.f_386), iVar0);
			Global_2411623.f_559[iParam0] = unk_0x46CF50E0E5A24635();
			Global_2411623.f_427[iVar0] = uParam1;
		}
		else
		{
			unk_0x77621132305B133B(&(Global_2411623.f_386), iVar0);
			Global_2411623.f_559[iParam0] = -1;
		}
	}
}

int func_375(int iParam0)
{
	if (!unk_0xC2DCA35AE2EC9DC4(Global_2411623.f_559[iParam0]) || Global_2411623.f_559[iParam0] == unk_0x46CF50E0E5A24635())
	{
		return 1;
	}
	return 0;
}

int func_376(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x7068E8DB78AD0A08(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_377()
{
	if (func_192())
	{
		if (func_191())
		{
			func_184();
		}
		return;
	}
	func_378("GBTER_KILL", func_24(), 1, 0);
}

void func_378(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_379(sParam0, unk_0x74C5CB21CF9F1178(iParam1), bParam3);
}

void func_379(char* sParam0, char* sParam1, bool bParam2)
{
	if (unk_0xB8A06E7E729EED0A(sParam0))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam0) > 23)
	{
		return;
	}
	if (unk_0xB8A06E7E729EED0A(sParam1))
	{
		return;
	}
	if (unk_0x7FB2AC00554ED7D4(sParam1) > 63)
	{
		return;
	}
	if (func_383(sParam0, sParam1))
	{
		return;
	}
	func_185();
	Global_1312577 = 9;
	StringCopy(&(Global_1312577.f_1), unk_0xC4E68AF0B559FAC4(), 24);
	Global_1312577.f_7 = unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	func_382();
	func_381(bParam2);
	func_380();
}

void func_380()
{
	unk_0x59A0729D503ED758(&(Global_1312577.f_56), 1);
}

void func_381(bool bParam0)
{
	if (bParam0)
	{
		unk_0x59A0729D503ED758(&(Global_1312577.f_56), 0);
		return;
	}
	unk_0x77621132305B133B(&(Global_1312577.f_56), 0);
}

void func_382()
{
	Global_1312577.f_8 = unk_0x1A184A79993F1536(unk_0x2AA13A84EE2D3B24(), 86400000);
	Global_1312577.f_9 = unk_0x2AA13A84EE2D3B24();
}

bool func_383(char* sParam0, char* sParam1)
{
	if (!func_190())
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(uParam0))
	{
		return 0;
	}
	if (unk_0xB8A06E7E729EED0A(uParam1))
	{
		return 0;
	}
	if (!unk_0x7CBED6EFED40E7EB(sParam0) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_10)))
	{
		return 0;
	}
	return unk_0x7CBED6EFED40E7EB(sParam1) == unk_0x7CBED6EFED40E7EB(&(Global_1312577.f_14));
}

void func_384()
{
	int iVar0;
	int iVar1;
	
	if (func_192())
	{
		return;
	}
	if (unk_0xDCC86F723E82125E(Local_100.f_1, 0))
	{
		if (func_216(&(Local_100.f_4)))
		{
			iVar1 = (func_5() - func_389(&(Local_100.f_4), 0, 0));
			if (iVar1 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iVar1 = func_388(iVar1, 0);
			if (iVar1 > 0)
			{
				func_385(iVar1, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_385(0, "GB_WORK_END", 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_385(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_387(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339929.f_1 = 1;
		func_386(7, iVar0);
		Global_1339929.f_3988[iVar0] = iParam0;
		StringCopy(&(Global_1339929.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339929.f_3988.f_172[iVar0] = iParam2;
		Global_1339929.f_3988.f_216[iVar0] = iParam3;
		Global_1339929.f_3988.f_183[iVar0] = iParam4;
		Global_1339929.f_3988.f_194[iVar0] = iParam5;
		Global_1339929.f_3988.f_249[iVar0] = iParam6;
		Global_1339929.f_3988.f_260[iVar0] = iParam7;
		Global_1339929.f_3988.f_205[iVar0] = iParam8;
		Global_1339929.f_3988.f_314[iVar0] = iParam9;
		Global_1339929.f_3988.f_325[iVar0] = iParam10;
		Global_1339929.f_3988.f_357[iVar0] = iParam11;
		Global_1339929.f_3988.f_238[iVar0] = iParam12;
		Global_1339929.f_3988.f_271[iVar0] = iParam13;
		Global_1339929.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_386(int iParam0, int iParam1)
{
	unk_0x59A0729D503ED758(&(Global_1339929.f_4594[iParam0]), iParam1);
}

bool func_387(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_1339929.f_4594[iParam0], iParam1);
}

int func_388(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_389(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0);
		}
		else
		{
			return unk_0x2F4EBE92EB266B70(unk_0x3BC33547A5F418E8(), *uParam0);
		}
	}
	return unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0);
}

void func_390()
{
	if (func_192())
	{
		return;
	}
	if (unk_0xA34E7C2A5118D638() != func_156())
	{
		if (unk_0xDCC86F723E82125E(iLocal_98, 0))
		{
			if (!func_42())
			{
				func_391("GBTER_START", unk_0x74C5CB21CF9F1178(func_24()), 0, -1);
				func_41(1);
				unk_0x59A0729D503ED758(&iLocal_98, 2);
			}
		}
		else
		{
			func_183();
			func_181(84, func_24(), -1, "GBTER_BIG_GS", "GBTER_BIG", 1, -1, 2);
			unk_0x59A0729D503ED758(&(Local_110[unk_0x935FA14EDA695A82() /*4*/].f_1), 0);
		}
	}
	else if (unk_0xDCC86F723E82125E(iLocal_98, 0))
	{
		if (!func_42())
		{
			func_391("GBTER_BOSS", unk_0x74C5CB21CF9F1178(func_24()), 0, -1);
			unk_0x59A0729D503ED758(&iLocal_98, 2);
			func_41(1);
		}
	}
	else
	{
		func_183();
		func_181(84, func_24(), -1, "GBTER_BIG_BS", "GBTER_BIG", 1, -1, 2);
		unk_0x59A0729D503ED758(&(Local_110[unk_0x935FA14EDA695A82() /*4*/].f_1), 0);
	}
	unk_0x59A0729D503ED758(&iLocal_98, 0);
}

void func_391(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x1AE578B67805BFB7(iParam2);
	}
	unk_0x2DED6C1306496257(uParam1);
	unk_0x31D76F87C39FB8DD(0, 0, 0, iParam3);
}

void func_392(int iParam0)
{
	Local_110[unk_0x935FA14EDA695A82() /*4*/].f_2 = iParam0;
}

void func_393(bool bParam0)
{
	if (bParam0)
	{
		if (!func_23(unk_0xA34E7C2A5118D638(), 9))
		{
			if (func_321(unk_0xA34E7C2A5118D638()) != 0)
			{
				func_162(9);
			}
		}
	}
	else if (func_23(unk_0xA34E7C2A5118D638(), 9))
	{
		func_164(9);
	}
}

void func_394(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_28 != iParam0)
	{
		func_398(-1);
		Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_28 = iParam0;
		if (!func_347(iParam0))
		{
			fVar0 = func_346(iParam0);
			if (fVar0 != 1f)
			{
				func_343(fVar0);
				unk_0x59A0729D503ED758(&(Global_1722044.f_3), 1);
			}
		}
		if (!func_350(iParam0))
		{
			if (func_348(iParam0))
			{
				unk_0x60B57BC5E51D2074(0);
				unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 0, 0);
				unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
				unk_0x59A0729D503ED758(&(Global_1722044.f_3), 0);
			}
			else if (unk_0xECB10B5C06DD2F31() < 5)
			{
				unk_0xFD62177C7242216E(1f);
				unk_0x60B57BC5E51D2074(5);
			}
		}
		if (func_14())
		{
			func_162(27);
		}
		if (bParam1)
		{
			if (!func_161())
			{
				func_341(1);
			}
		}
		if (((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155)
		{
			if ((unk_0xDCC86F723E82125E(Global_2458121.f_4407, 1) || unk_0xDCC86F723E82125E(Global_2458121.f_4407, 4)) || unk_0xDCC86F723E82125E(Global_2458121.f_4407, 0))
			{
				func_144(6);
			}
			func_397();
		}
		if (iParam0 == 164)
		{
			unk_0x21F5FB3C8D48F7F5(3, 0);
			unk_0x21F5FB3C8D48F7F5(5, 0);
		}
		if (func_240(unk_0xA34E7C2A5118D638()) && func_22(unk_0xA34E7C2A5118D638()))
		{
			unk_0x59A0729D503ED758(&(Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_1), 8);
		}
		func_395();
	}
}

void func_395()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_396();
	iVar2 = func_15(unk_0xA34E7C2A5118D638());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x20A20BF765914E37(iVar0);
		if (unk_0xDF73DA5E2287C499(iVar1))
		{
			if (func_34(iVar1, iVar2, 1))
			{
				unk_0x34281EBF7C57F442(unk_0xA34E7C2A5118D638(), iVar1, uVar3);
				unk_0x34281EBF7C57F442(iVar1, unk_0xA34E7C2A5118D638(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_396()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_8();
	if (iVar0 != func_7())
	{
		if (func_6(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xDCC86F723E82125E(Global_1608811[iVar1 /*109*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_397()
{
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4407, 1))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_4407), 1);
	}
	if (unk_0xDCC86F723E82125E(Global_2458121.f_4407, 4))
	{
		unk_0x77621132305B133B(&(Global_2458121.f_4407), 4);
	}
	unk_0x77621132305B133B(&(Global_2458121.f_4407), 0);
	unk_0x77621132305B133B(&(Global_2458121.f_4407), 2);
	Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_341 = 0;
	if (Global_2458121.f_4409 > 0)
	{
		unk_0x60B57BC5E51D2074(Global_2458121.f_4409);
	}
	Global_2458121.f_4408 = 0;
}

void func_398(int iParam0)
{
	Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_27 = iParam0;
}

int func_399()
{
	return Local_110[unk_0x935FA14EDA695A82() /*4*/].f_2;
}

int func_400()
{
	if (func_401(151) || func_161())
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0)
{
	if (!func_155() && !func_16(unk_0xA34E7C2A5118D638(), 1))
	{
		if (!func_22(unk_0xA34E7C2A5118D638()))
		{
			if (func_161())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

void func_402(int iParam0, int iParam1)
{
	Local_110[iParam0 /*4*/] = iParam1;
}

int func_403()
{
	return 1;
}

int func_404()
{
	return Local_100.f_0;
}

int func_405(int iParam0)
{
	return Local_110[iParam0 /*4*/];
}

int func_406()
{
	bool bVar0;
	
	func_411(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315886 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 1;
		}
	}
	if (func_410())
	{
		return 1;
	}
	if (Global_2443300)
	{
		return 1;
	}
	if (func_409())
	{
		return 1;
	}
	if (func_408(157))
	{
		if (!func_407())
		{
			return 1;
		}
	}
	if (func_408(155))
	{
		return 1;
	}
	if (!unk_0xDC6347A8EBB9281E())
	{
		return 1;
	}
	if (func_344() != 0)
	{
		if (unk_0xCBC8FFE55DC722B5(func_344()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_407()
{
	return Global_2433098.f_574;
}

int func_408(int iParam0)
{
	if (unk_0x88FC52D6FDFA0AFA(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_409()
{
	return Global_2441381;
}

bool func_410()
{
	return Global_2433098.f_569;
}

void func_411(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x74238B7708290D43(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 325:
					func_412(iVar0);
					break;
				
				case 2:
					unk_0x74238B7708290D43(1, iVar0, &Var4, 3);
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

void func_412(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		if (func_6(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xCF4C00513A86E840(Var0.f_1);
			if (unk_0x95CCECA3948CFE7B(uVar3))
			{
				if (unk_0x277ECDA23D8CCEB4(iVar3, 0))
				{
					uVar4 = unk_0x275BEBE583A163B5(iVar3, 0);
					if (unk_0x8AA327BE085BA8B4(uVar4, Var0.f_2) && unk_0xEE66E067C1F8D1F4())
					{
						if (func_413(uVar4, &bVar5))
						{
							unk_0x3440777B8DAAC4C1(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xEF84021B2AB5E334(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_413(int iParam0, var uParam1)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (!unk_0xD28A89C669EAD2E4(iParam0))
		{
			if (unk_0x75932C6E41A19C54(iParam0))
			{
				unk_0xFD816D0E738EB817(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x1F59F772AA90087D(iParam0, 0))
		{
			if (unk_0xFE7BCFB02217DCDF(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_414()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_415()
{
	func_184();
	func_370(func_24(), 1f, 1);
	func_32(func_33(func_24()), 0);
	func_416(1);
	unk_0xA4E0D8FD51F2A6F7();
}

void func_416(bool bParam0)
{
	if (Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_28 == 164)
	{
		unk_0x21F5FB3C8D48F7F5(3, 1);
		unk_0x21F5FB3C8D48F7F5(5, 1);
	}
	if (Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_28 != -1)
	{
		Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_28 = -1;
		if (!unk_0xDCC86F723E82125E(Global_1573879.f_1, 14) && !func_240(unk_0xA34E7C2A5118D638()))
		{
			func_341(0);
		}
	}
	else if (func_424(unk_0xA34E7C2A5118D638()) != -1)
	{
		func_398(-1);
	}
	if (unk_0xDCC86F723E82125E(Global_1722044.f_3, 0))
	{
		unk_0xFD62177C7242216E(1f);
		unk_0x60B57BC5E51D2074(5);
		unk_0x77621132305B133B(&(Global_1722044.f_3), 0);
	}
	if (func_268(func_423()))
	{
		func_422(-1);
	}
	else
	{
		func_418(-1, 1);
	}
	func_164(19);
	func_164(20);
	func_164(21);
	func_164(22);
	func_164(27);
	func_327(3);
	func_327(4);
	func_327(7);
	func_417();
	if (func_22(unk_0xA34E7C2A5118D638()))
	{
		func_393(0);
	}
	func_164(29);
	Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_51 = func_7();
	if (Global_2458121.f_4648.f_12 != 0)
	{
		Global_2458121.f_4648.f_12 = 0;
	}
	if (bParam0)
	{
		func_328();
	}
	if (!func_240(unk_0xA34E7C2A5118D638()))
	{
		func_339();
		unk_0x77621132305B133B(&(Global_1722044.f_3), 1);
	}
}

void func_417()
{
	if (func_354(unk_0xA34E7C2A5118D638()))
	{
		func_164(25);
	}
}

void func_418(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_423();
	}
	if (iParam0 > 0)
	{
		if (func_8() != func_7())
		{
			if (func_421(unk_0xA34E7C2A5118D638()) == unk_0xA34E7C2A5118D638())
			{
				Global_2457145.f_27[func_420(iParam0)] = 1;
			}
		}
		iVar0 = func_420(159);
		if (func_419(iVar0, Global_262145.f_10504, bParam1))
		{
			func_224(&(Global_2457145[iVar0 /*2*/]));
			func_4(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_420(157);
		if (func_419(iVar0, Global_262145.f_10504, bParam1))
		{
			func_224(&(Global_2457145[iVar0 /*2*/]));
			func_4(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_420(148);
		if (func_419(iVar0, Global_262145.f_10504, bParam1))
		{
			func_224(&(Global_2457145[iVar0 /*2*/]));
			func_4(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_420(164);
		if (func_419(iVar0, Global_262145.f_10504, bParam1))
		{
			func_224(&(Global_2457145[iVar0 /*2*/]));
			func_4(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_420(142);
		if (func_419(iVar0, Global_262145.f_10504, bParam1))
		{
			func_224(&(Global_2457145[iVar0 /*2*/]));
			func_4(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_420(152);
		if (func_419(iVar0, Global_262145.f_10504, bParam1))
		{
			func_224(&(Global_2457145[iVar0 /*2*/]));
			func_4(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_419(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_23(unk_0xA34E7C2A5118D638(), 19) && !func_23(unk_0xA34E7C2A5118D638(), 20)) && !func_23(unk_0xA34E7C2A5118D638(), 9))
		{
			return 0;
		}
	}
	if (Global_2457145.f_27[iParam0] == 1 && func_216(&(Global_2457145[iParam0 /*2*/])))
	{
		if (func_389(&(Global_2457145[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2457145.f_27[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 0;
		
		case 157:
			return 1;
		
		case 148:
			return 2;
		
		case 164:
			return 3;
		
		case 142:
			return 4;
		
		case 152:
			return 5;
		
		case 163:
			return 7;
		
		case 155:
			return 8;
		
		case 160:
			return 9;
		
		case 153:
			return 10;
		
		case 162:
			return 11;
		
		case 154:
			return 12;
		
		default:
	}
	return -1;
}

int func_421(int iParam0)
{
	return Global_1608811[iParam0 /*109*/].f_9.f_30;
}

void func_422(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_423();
	}
	if (iParam0 > 0)
	{
		if (func_8() != func_7())
		{
			Global_2457145.f_27[func_420(iParam0)] = 1;
		}
		iVar0 = func_420(155);
		if (func_419(iVar0, Global_262145.f_10505, 0))
		{
			func_224(&(Global_2457145[iVar0 /*2*/]));
			func_4(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_420(163);
		if (func_419(iVar0, Global_262145.f_10505, 0))
		{
			func_224(&(Global_2457145[iVar0 /*2*/]));
			func_4(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_420(160);
		if (func_419(iVar0, Global_262145.f_10505, 0))
		{
			func_224(&(Global_2457145[iVar0 /*2*/]));
			func_4(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_420(153);
		if (func_419(iVar0, Global_262145.f_10505, 0))
		{
			func_224(&(Global_2457145[iVar0 /*2*/]));
			func_4(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_420(162);
		if (func_419(iVar0, Global_262145.f_10505, 0))
		{
			func_224(&(Global_2457145[iVar0 /*2*/]));
			func_4(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_420(154);
		if (func_419(iVar0, Global_262145.f_10505, 0))
		{
			func_224(&(Global_2457145[iVar0 /*2*/]));
			func_4(&(Global_2457145[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_423()
{
	var uVar0;
	
	uVar0 = unk_0xC4E68AF0B559FAC4();
	if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xF8D041B05C3D1FD4(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	return 0;
}

int func_424(int iParam0)
{
	if (func_425(iParam0, 0))
	{
		return Global_1608811[iParam0 /*109*/].f_9.f_27;
	}
	return -1;
}

int func_425(int iParam0, int iParam1)
{
	if (Global_1608811[iParam0 /*109*/].f_9.f_27 != -1 || (iParam1 && Global_1608811[iParam0 /*109*/].f_9.f_28 != -1))
	{
		return 1;
	}
	return 0;
}

int func_426(struct<20> Param0)
{
	func_434(func_435(Param0.f_0), Param0);
	unk_0x898BA9C42084F452(0);
	func_431(0, -1, 0);
	unk_0xFE7B095449D5F053(&Local_100, 10);
	unk_0x99592530153DB318(&Local_110, 129);
	unk_0x6ECAEE4901F465A1(0);
	func_427(0, 0);
	return 1;
}

void func_427(int iParam0, int iParam1)
{
	func_430();
	if ((iParam0 != 0 && unk_0xDF73DA5E2287C499(iParam1)) && func_429(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x59A0729D503ED758(&Global_1722039, 0);
				break;
			}
	}
	if (!func_155() && !func_16(unk_0xA34E7C2A5118D638(), 1))
	{
		if (func_167())
		{
			func_340(3);
		}
		func_340(4);
	}
	if (func_71(0))
	{
		Global_1608811[unk_0xA34E7C2A5118D638() /*109*/].f_9.f_51 = func_8();
	}
	func_428();
}

void func_428()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1330242.f_527[iVar0 /*47*/].f_1 = func_7();
		Global_1330242.f_527[iVar0 /*47*/].f_9 = 0;
		iVar0++;
	}
}

int func_429(int iParam0, bool bParam1)
{
	return func_34(unk_0xA34E7C2A5118D638(), iParam0, bParam1);
}

void func_430()
{
	struct<14> Var0;
	
	Global_1722053 = { Var0 };
	Global_1722053.f_14 = 0;
	Global_1722053.f_15 = 0;
}

int func_431(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD93BACE0E8C906AB();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_433();
			}
			else
			{
				return 0;
			}
		}
		if (!func_432())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xBBAE3E0C60A8AD4B())
				{
					if (!bParam2)
					{
						func_433();
					}
					else
					{
						return 0;
					}
				}
				if (func_410())
				{
					if (!bParam2)
					{
						func_433();
					}
					else
					{
						return 0;
					}
				}
				if (func_408(155))
				{
					if (!bParam2)
					{
						func_433();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x16DD8839736956AC())
			{
				if (!bParam2)
				{
					func_433();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD93BACE0E8C906AB();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			if (!bParam2)
			{
				func_433();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x16DD8839736956AC())
	{
		if (!bParam2)
		{
			func_433();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_432()
{
	return Global_1315886;
}

void func_433()
{
	unk_0xA4E0D8FD51F2A6F7();
}

void func_434(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		func_433();
	}
	unk_0x170190A515596E3F(uParam0, 0, Param1.f_16);
}

int func_435(int iParam0)
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

