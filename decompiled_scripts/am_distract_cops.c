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
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	struct<19> Local_99 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_118 = 0;
	struct<4> Local_119[32];
	int iLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	if (unk_0x63C468D583002D23() && func_238(unk_0xBE369BE1BC57A796(), 0, 1))
	{
		func_230(ScriptParam_0);
	}
	else
	{
		func_227();
	}
	while (true)
	{
		func_226();
		if (func_216() || func_212(16))
		{
			func_227();
		}
		if (unk_0x51FDEF56E23A7C33())
		{
			func_227();
		}
		switch (func_211(unk_0xCA1D9459B2CC7619()))
		{
			case 0:
				if (func_210() == 1)
				{
					func_209();
					Local_119[unk_0xCA1D9459B2CC7619() /*4*/] = 1;
				}
				else if (func_210() == 4)
				{
					Local_119[unk_0xCA1D9459B2CC7619() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_210() == 1)
				{
					func_105();
				}
				else if (func_210() == 4)
				{
					func_14();
					Local_119[unk_0xCA1D9459B2CC7619() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_99.f_18));
				if (func_12(&(Local_99.f_18)))
				{
					Local_119[unk_0xCA1D9459B2CC7619() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_119[unk_0xCA1D9459B2CC7619() /*4*/] = 4;
			
			case 4:
				func_227();
				break;
		}
		if (unk_0x415DF132F15085E8())
		{
			switch (func_210())
			{
				case 0:
					Local_99.f_0 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_99.f_0 = 4;
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
	if (Local_99.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	struct<14> Var0;
	
	switch (Local_99.f_7)
	{
		case 0:
			if (unk_0x48B8265059381CD0(Local_99.f_1, 0))
			{
				Local_99.f_7 = 1;
			}
			else if (func_9(&(Local_99.f_8), 480000, 0))
			{
				Var0.f_2 = 115;
				func_7(Var0, func_8(1));
				unk_0xEB79FECD9022AAF0(&(Local_99.f_1), 1);
				Local_99.f_7 = 2;
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
	if (!func_9(&(Local_99.f_10), Local_99.f_12, 0))
	{
		if (func_9(&(Local_99.f_13), Local_99.f_15, 0))
		{
			Local_99.f_17++;
			Local_99.f_16 = func_6();
			func_5(&(Local_99.f_13));
		}
	}
	else
	{
		Local_99.f_7 = 2;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6()
{
	switch (Local_99.f_17)
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
	return Local_99.f_16;
}

void func_7(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xBE369BE1BC57A796();
	if (!iParam14 == 0)
	{
		unk_0x504D0D40319365B7(1, &Param0, 14, iParam14);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xCF8627766CD5D4CE())
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iVar1)))
		{
			iVar2 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iVar1));
			if (func_238(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xBE369BE1BC57A796() || iParam0)
				{
					unk_0xEB79FECD9022AAF0(&uVar0, iVar2);
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

void func_10(var uParam0, bool bParam1, bool bParam2)
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

void func_11()
{
	int iVar0;
	
	if (Local_99.f_0 == 1)
	{
		if (unk_0x5877B93374C85567(unk_0x62C65E3042052191(iLocal_254)))
		{
			iVar0 = unk_0xD878F413B7BB4895(unk_0x62C65E3042052191(iLocal_254));
			if (func_238(iVar0, 1, 1))
			{
				if (!unk_0x48B8265059381CD0(Local_99.f_1, 0))
				{
					if (unk_0x48B8265059381CD0(Local_119[iLocal_254 /*4*/].f_1, 0))
					{
						iLocal_255 = 1;
						unk_0xEB79FECD9022AAF0(&(Local_99.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_254++;
	if (iLocal_254 == unk_0xCF8627766CD5D4CE())
	{
		if (iLocal_255 == 0)
		{
			if (unk_0x48B8265059381CD0(Local_99.f_1, 0))
			{
				unk_0x21E7933CCC7B3724(&(Local_99.f_1), 0);
			}
		}
		else
		{
			iLocal_255 = 0;
		}
		iLocal_254 = 0;
	}
}

int func_12(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= 1000)
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
		if (unk_0x415DF132F15085E8())
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
	
	if (!unk_0x48B8265059381CD0(iLocal_248, 1))
	{
		if ((unk_0x48B8265059381CD0(Local_119[unk_0xCA1D9459B2CC7619() /*4*/].f_1, 0) && unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) >= (Local_99.f_16 - 1)) && Local_119[unk_0xCA1D9459B2CC7619() /*4*/].f_2 < 10)
		{
			Local_119[unk_0xCA1D9459B2CC7619() /*4*/].f_2++;
		}
		if (Local_119[unk_0xCA1D9459B2CC7619() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_119[unk_0xCA1D9459B2CC7619() /*4*/].f_2 * Global_262145.f_6975);
			Global_2454708 = iVar0;
			func_84(&iVar0, 1);
			if (iVar0 > 0)
			{
				func_81(iVar0, 1, 1, 0);
				if (func_80())
				{
					func_71(-2043695058, iVar0, &uVar5, 0, 0, 0);
				}
				else
				{
					unk_0x55F7C756B6776120(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (func_70())
			{
				func_57(12, "DSC_PASS0", 0, 0, -99);
			}
			else
			{
				func_57(12, "DSC_PASS1", 0, 0, -99);
			}
			func_20(51, iVar0, "DSC_CASH", "DSC_BIGM", 1, -1, -1082130432, 2);
			if (unk_0x48B8265059381CD0(iLocal_248, 4))
			{
				if (!unk_0x48B8265059381CD0(iLocal_248, 5))
				{
					func_15(66, 1, -1);
				}
			}
		}
		unk_0xEB79FECD9022AAF0(&iLocal_248, 1);
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
	
	iVar0 = Global_2523863[iParam0 /*3*/][func_18(iParam2)];
	unk_0x731753D8494ABECD(iVar0, iParam1, 1);
}

int func_17(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2523863[iParam0 /*3*/][func_18(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
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

int func_19()
{
	return Global_1312735;
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_56(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_69 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_70 = iParam7;
	return func_21(&Var0);
}

int func_21(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2433125.f_2505)
		{
			return 0;
		}
	}
	func_27(uParam0, uParam0->f_16);
	func_24(uParam0);
	if (func_23(uParam0->f_1))
	{
		if (Global_2433125.f_2199[0 /*76*/].f_2 == 0)
		{
			Global_2433125.f_2199[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2433125.f_2199[0 /*76*/].f_1 == 13 || Global_2433125.f_2199[0 /*76*/].f_1 == 53) || Global_2433125.f_2199[0 /*76*/].f_1 == 54) || Global_2433125.f_2199[0 /*76*/].f_1 == 58)
		{
			Global_2433125.f_2199[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2433125.f_2199[iVar0 + 1 /*76*/] = { Global_2433125.f_2199[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2433125.f_2199[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2433125.f_2199[iVar0 /*76*/].f_2 == 0)
		{
			Global_2433125.f_2199[iVar0 /*76*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_2433125.f_2199[iVar0 /*76*/].f_67), 1);
				Global_2433125.f_2199[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_22(Global_2433125.f_2199[iVar0 /*76*/].f_1))
				{
					Global_2433125.f_2199[iVar0 /*76*/].f_2 = 5;
					unk_0xEB79FECD9022AAF0(&(Global_2433125.f_2199[iVar0 /*76*/].f_67), 0);
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
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_23(int iParam0)
{
	if (((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103)
	{
		return 1;
	}
	return 0;
}

void func_24(var uParam0)
{
	if (func_26(uParam0->f_1))
	{
		uParam0->f_70 = func_25();
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
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_27(var uParam0, int iParam1)
{
	if (func_26(uParam0->f_1))
	{
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_55())
	{
		return;
	}
	if (func_22(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_28(iParam1, -2, 0, 0);
		}
	}
}

int func_28(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_51(iParam0))
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
	if (iParam1 == -2)
	{
		iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1633501.f_85058[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_51(unk_0xBE369BE1BC57A796()) || (func_50() && func_49())) && !unk_0x48B8265059381CD0(Global_2494199.f_4449, 31))
	{
		uVar1 = func_48();
		if (unk_0x23E9113C762466ED(uVar1))
		{
			if (unk_0x0764AC92F08BEC9E(uVar1))
			{
				if (unk_0xDE881A032F5BA110(uVar1) != -1)
				{
					if (func_238(unk_0xDE881A032F5BA110(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
						{
							if (Global_1633501.f_85058[iParam1] != -1)
							{
								return func_46(iParam1, iParam0, 0);
							}
							else
							{
								return func_36(iParam0, unk_0xDE881A032F5BA110(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_36(iParam0, unk_0xDE881A032F5BA110(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
			{
				if (Global_1633501.f_85058[iParam1] != -1)
				{
					return func_46(iParam1, iParam0, 0);
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
	if ((iParam1 > -1 && unk_0xF7271A9481CAC8E3()) && iParam1 < 4)
	{
		if (Global_1633501.f_85058[iParam1] != -1)
		{
			return func_46(iParam1, iParam0, 0);
		}
		else
		{
			return func_36(iParam0, unk_0xBE369BE1BC57A796(), iParam1, bParam2, bParam3);
		}
	}
	return func_36(iParam0, unk_0xBE369BE1BC57A796(), iParam1, bParam2, bParam3);
}

int func_29(bool bParam0, int iParam1, bool bParam2)
{
	return func_30(unk_0xBE369BE1BC57A796(), bParam0, iParam1, bParam2);
}

int func_30(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x7268A1112372AA44(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_35(iVar0, iParam2, 0) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18))
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
			else if (unk_0x48B8265059381CD0(Global_1633501.f_4, 20))
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
	if (func_32(Global_1633501.f_88646))
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
		if (iParam0 == Global_262145.f_7845[iVar0])
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
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 0);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 1);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 2);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 4);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 5);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 6);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 8);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 9);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 10);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 12);
				
				case 1:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 13);
				
				case 2:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 14);
				
				case 3:
					return unk_0x48B8265059381CD0(Global_1633501.f_44, 15);
				
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
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xB58DEBB81964A4E9(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1591201[iVar2 /*602*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_45())
			{
				iVar3 = func_41(iParam0);
				if (!iVar3 == -1)
				{
					return func_39(iVar3);
				}
			}
			if ((func_38(iParam1, iParam0, iVar0, 0) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18)) || ((func_35(unk_0xB58DEBB81964A4E9(iParam1), unk_0xB58DEBB81964A4E9(iParam0), 0) && unk_0x48B8265059381CD0(Global_1633501.f_15, 23)) && !unk_0x48B8265059381CD0(Global_1633501.f_15, 18)))
			{
				return func_34(1);
			}
			else if (unk_0x48B8265059381CD0(Global_1633501.f_15, 26))
			{
				return func_37(1);
			}
			else
			{
				return func_30(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574288 || Global_1574279) || Global_1591201[iParam0 /*602*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574288 == 1 && Global_1574298 == 0))
			{
				return func_34(1);
			}
			else
			{
				return func_30(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574283 && Global_1573825.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_41(iParam0);
	if (!iVar4 == -1)
	{
		return func_39(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_37(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_38(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xB58DEBB81964A4E9(iParam0) == -1 && unk_0xB58DEBB81964A4E9(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xB58DEBB81964A4E9(iParam0) == unk_0xB58DEBB81964A4E9(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xB58DEBB81964A4E9(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xB58DEBB81964A4E9(iParam0) == iParam2;
	}
	return unk_0xB58DEBB81964A4E9(iParam0) == iParam2;
}

int func_39(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_40(iParam0);
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
			}
		
		default:
	}
	return 1;
}

var func_40(int iParam0)
{
	return Global_2415716.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_41(int iParam0)
{
	if (!iParam0 == func_55())
	{
		if (func_43(iParam0, 1))
		{
			return Global_2415716.f_1946.f_11[func_42(iParam0)];
		}
	}
	return -1;
}

int func_42(int iParam0)
{
	if (iParam0 != func_55())
	{
		return Global_1619421[iParam0 /*390*/].f_11;
	}
	return func_55();
}

bool func_43(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_44(iParam0))
		{
			return 0;
		}
	}
	return Global_1619421[iParam0 /*390*/].f_11 != func_55();
}

int func_44(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_55())
		{
			return Global_1619421[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_45()
{
	return Global_2443134.f_12;
}

int func_46(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_45())
	{
		iVar1 = func_41(iParam1);
		if (!iVar1 == -1)
		{
			return func_39(iVar1);
		}
	}
	if (Global_1633501.f_85058[iParam0] != -1 && Global_1633501.f_85058[iParam0] <= 4)
	{
		if (Global_1633501.f_85058[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1633501.f_85058[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1633501.f_85058[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1633501.f_85058[iParam0] == 4)
		{
			if (unk_0x48B8265059381CD0(Global_1633501.f_15, 29))
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
			iVar0 = Global_1633501.f_85058[iParam0];
		}
	}
	else
	{
		iVar0 = func_30(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0x48B8265059381CD0(Global_1633501.f_21, 13))
	{
		iVar0 = func_47(iParam0);
	}
	return iVar0;
}

int func_47(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1633501.f_107616;
			break;
		
		case 1:
			iVar0 = Global_1633501.f_107617;
			break;
		
		case 2:
			iVar0 = Global_1633501.f_107618;
			break;
		
		case 3:
			iVar0 = Global_1633501.f_107619;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_48()
{
	return Global_2359301.f_2;
}

bool func_49()
{
	return unk_0x48B8265059381CD0(Global_2359301, 4);
}

bool func_50()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
}

int func_51(int iParam0)
{
	if (func_53(iParam0, 0))
	{
		return 1;
	}
	if (func_52())
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

bool func_52()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
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
		iVar1 = func_19();
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
	return -1;
}

void func_56(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_55();
	uParam1->f_17 = func_55();
	uParam1->f_18 = func_55();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = uParam2;
	uParam1->f_69 = 1;
	uParam1->f_72 = 1;
	uParam1->f_73 = 1;
	uParam1->f_71 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

void func_57(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_58(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_58(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_59(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_59(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x9C88EB7B70229335(sParam1))
	{
		return;
	}
	if (unk_0x761258E562C07369(sParam1) > 15)
	{
		return;
	}
	if (!unk_0x9C88EB7B70229335(sParam4))
	{
		if (unk_0x761258E562C07369(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_68();
	if (iVar0 == -1)
	{
		return;
	}
	func_67(iVar0);
	func_66(iVar0, uParam0);
	func_65(iVar0, uParam2, bParam3);
	func_64(iVar0, sParam1);
	if (unk_0x9C88EB7B70229335(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_63(iVar0);
	if (!unk_0x9C88EB7B70229335(sParam4))
	{
		func_61(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_60(iVar0, iParam6);
	}
}

void func_60(int iParam0, int iParam1)
{
	Global_1346673.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_61(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1346673.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_62(iParam0);
}

void func_62(int iParam0)
{
	unk_0xEB79FECD9022AAF0(&(Global_1346673.f_59[iParam0 /*16*/]), 5);
}

void func_63(int iParam0)
{
	unk_0xEB79FECD9022AAF0(&(Global_1346673.f_59[iParam0 /*16*/]), 4);
}

void func_64(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1346673.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_65(int iParam0, var uParam1, bool bParam2)
{
	Global_1346673.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0xEB79FECD9022AAF0(&(Global_1346673.f_59[iParam0 /*16*/]), 2);
		unk_0x21E7933CCC7B3724(&(Global_1346673.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0xEB79FECD9022AAF0(&(Global_1346673.f_59[iParam0 /*16*/]), 3);
		unk_0x21E7933CCC7B3724(&(Global_1346673.f_59[iParam0 /*16*/]), 2);
	}
}

void func_66(int iParam0, var uParam1)
{
	Global_1346673.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_67(int iParam0)
{
	unk_0xEB79FECD9022AAF0(&(Global_1346673.f_59[iParam0 /*16*/]), 0);
}

int func_68()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_69(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_69(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1346673.f_59[iParam0 /*16*/], 0);
}

int func_70()
{
	if (unk_0x48B8265059381CD0(unk_0x0E29C61F26D96FDB(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_71(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_80())
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
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
			if (iParam1 > 0)
			{
				func_72(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1426920838:
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
		case -293060240:
			func_72(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_72(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_80())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xAE2B681D784C7E64(func_19()) || unk_0xB4EE84164EB16A6B())
		{
			Global_2590762 = 1;
			return 0;
		}
		if (Global_2453677)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2590763 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2590252[iVar1 /*76*/].f_2 == 0)
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
	if (bVar0 || unk_0x1EB4A371BFB0E524(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x0F0045367541BC90(iVar3))
		{
			*uParam0 = func_79(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2590252[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590752 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2590761 = 1;
			Global_2590764 = iParam4;
			Global_2590766 = iParam3;
			Global_2590767 = 1;
			Global_2590765 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2590764 = iParam4;
			Global_2590766 = iParam3;
			Global_2590767 = 1;
			Global_2590765 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_78(1, iParam4);
			Global_2590761 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_73(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_73(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_125.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_74(iParam0);
	}
}

void func_74(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_80())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_77(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9B9AF9D22D9F6313();
			}
		}
		else if (!bVar0)
		{
			unk_0x2A618463FE332188(Global_2590252[iParam0 /*76*/]);
		}
		func_75(&(Global_2590252[iParam0 /*76*/]));
	}
}

void func_75(var uParam0)
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
	func_76(&(uParam0->f_8.f_3));
	func_76(&(uParam0->f_8.f_16));
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
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_76(var uParam0)
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

int func_77(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2590252[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

void func_78(int iParam0, var uParam1)
{
	Global_2454840 = uParam1;
	Global_2454839 = iParam0;
}

int func_79(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2590252[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_80())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2590252[iVar0 /*76*/].f_2 = 1;
			Global_2590252[iVar0 /*76*/].f_1 = uParam5;
			Global_2590252[iVar0 /*76*/].f_3 = uParam1;
			Global_2590252[iVar0 /*76*/].f_4 = uParam2;
			Global_2590252[iVar0 /*76*/].f_7 = uParam3;
			Global_2590252[iVar0 /*76*/].f_5 = 0;
			Global_2590252[iVar0 /*76*/] = iParam0;
			Global_2590252[iVar0 /*76*/].f_6 = iParam4;
			Global_2590252[iVar0 /*76*/].f_72 = uParam8;
			Global_2590252[iVar0 /*76*/].f_71 = uParam7;
			Global_2590252[iVar0 /*76*/].f_75 = 0;
			Global_2590752 = 0;
			if (bParam6)
			{
				Global_2590252[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_80()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

void func_81(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_82(iParam0, iParam1, iParam2, fParam3);
}

void func_82(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_4 = iVar1;
	Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_3 = (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_83(iVar1, 0);
	}
}

void func_83(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_104())
		{
			if (func_103(0))
			{
				if (!func_99(0))
				{
					if (unk_0x7268A1112372AA44(func_98()))
					{
						if (func_97() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_97());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_95(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_88("GB_BCUT_TICK1", func_98(), iVar0, 0, 0, 1, 1);
						}
						func_87(20);
						func_85(func_98(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_85(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_238(iParam0, 0, 1))
	{
		Var0.f_0 = 490;
		Var0.f_1 = unk_0xBE369BE1BC57A796();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x504D0D40319365B7(1, &Var0, 5, func_86(iParam0));
	}
}

var func_86(int iParam0)
{
	var uVar0;
	
	unk_0xEB79FECD9022AAF0(&uVar0, iParam0);
	return uVar0;
}

void func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4710.f_7[iVar0]), iVar1);
}

int func_88(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x592E5DF66777D40F(iParam1), 64);
		}
		if (unk_0x9C88EB7B70229335(&Var1))
		{
		}
		unk_0xBD18006F0815A298(sParam0);
		unk_0x80A171A436807CA0(func_28(iParam1, -2, 1, 0));
		unk_0xBAB00B98D1E61BEE(func_93(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x80A171A436807CA0(iParam3);
		}
		unk_0x69967F83C1E636E2(iParam2);
		iVar0 = unk_0x23048DD0C6E21613(0, 1);
		func_89(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_89(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_92() || !unk_0xF7271A9481CAC8E3()) || !func_53(unk_0xBE369BE1BC57A796(), 0))
	{
		return;
	}
	iVar0 = func_90(iParam2);
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

int func_90(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1759864 - 1))
	{
		if (iParam0 > Global_1759864.f_5[iVar0 /*53*/].f_1)
		{
			func_91(iVar0);
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

void func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1759864.f_5[iVar0 /*53*/] = { Global_1759864.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_92()
{
	return unk_0x6948821CC8D52AC2(-1762644250);
}

var func_93(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_94(&cVar0);
}

var func_94(char[4] cParam0)
{
	return cParam0;
}

void func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_96(1);
	}
	else
	{
		iVar1 = func_96(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_96(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11010;
}

int func_97()
{
	return Global_262145.f_11009;
}

int func_98()
{
	return Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11;
}

bool func_99(bool bParam0)
{
	return func_100(unk_0xBE369BE1BC57A796(), bParam0);
}

int func_100(int iParam0, bool bParam1)
{
	return func_101(iParam0, bParam1, 1);
}

int func_101(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_102(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_55() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0, int iParam1)
{
	if (iParam0 != func_55())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_55())
		{
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 && Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_103(bool bParam0)
{
	return func_43(unk_0xBE369BE1BC57A796(), bParam0);
}

bool func_104()
{
	return func_44(unk_0xBE369BE1BC57A796());
}

void func_105()
{
	func_207();
	if (unk_0xA3794949321E107C(uLocal_249))
	{
		if (func_205())
		{
			unk_0x8E5BEC1151739D19(uLocal_249, 0);
		}
		else
		{
			unk_0x8E5BEC1151739D19(uLocal_249, 4);
		}
	}
	switch (Local_119[unk_0xCA1D9459B2CC7619() /*4*/].f_3)
	{
		case 0:
			if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_99.f_2, Local_99.f_5, Local_99.f_5, 1000f, 0, 1, 0))
			{
				func_183();
				unk_0xEB79FECD9022AAF0(&(Local_119[unk_0xCA1D9459B2CC7619() /*4*/].f_1), 0);
				unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4450), 0);
				Local_119[unk_0xCA1D9459B2CC7619() /*4*/].f_3 = 1;
			}
			if (Local_99.f_7 > 1)
			{
				Local_119[unk_0xCA1D9459B2CC7619() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_165();
			func_106();
			if (Local_99.f_7 > 1)
			{
				Local_119[unk_0xCA1D9459B2CC7619() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_106()
{
	func_164();
	func_115();
	func_108();
	func_107();
}

void func_107()
{
	if (!unk_0x48B8265059381CD0(iLocal_248, 5))
	{
		if (!unk_0x48B8265059381CD0(iLocal_248, 4))
		{
			if (Local_99.f_17 == 0)
			{
				unk_0xEB79FECD9022AAF0(&iLocal_248, 4);
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&iLocal_248, 5);
			}
		}
		else if (!func_238(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			unk_0xEB79FECD9022AAF0(&iLocal_248, 5);
		}
	}
}

void func_108()
{
	if (((unk_0xB8EB22F9350F13DC() == 7 || unk_0xB8EB22F9350F13DC() == 8) || unk_0xB8EB22F9350F13DC() == 9) || unk_0xB8EB22F9350F13DC() == 10)
	{
		func_114();
	}
	else
	{
		func_113();
	}
	if ((Local_99.f_12 - func_112(&(Local_99.f_10), 0, 0)) >= 0)
	{
		func_109((Local_99.f_12 - func_112(&(Local_99.f_10), 0, 0)), "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_109(0, "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_109(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_111(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354542.f_1 = 1;
		func_110(7, iVar0);
		Global_1354542.f_4282[iVar0] = iParam0;
		StringCopy(&(Global_1354542.f_4282.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354542.f_4282.f_172[iVar0] = iParam2;
		Global_1354542.f_4282.f_216[iVar0] = iParam3;
		Global_1354542.f_4282.f_183[iVar0] = iParam4;
		Global_1354542.f_4282.f_194[iVar0] = iParam5;
		Global_1354542.f_4282.f_249[iVar0] = iParam6;
		Global_1354542.f_4282.f_260[iVar0] = iParam7;
		Global_1354542.f_4282.f_205[iVar0] = iParam8;
		Global_1354542.f_4282.f_314[iVar0] = iParam9;
		Global_1354542.f_4282.f_325[iVar0] = iParam10;
		Global_1354542.f_4282.f_357[iVar0] = iParam11;
		Global_1354542.f_4282.f_238[iVar0] = iParam12;
		Global_1354542.f_4282.f_271[iVar0] = iParam13;
		Global_1354542.f_4282.f_368[iVar0] = iParam14;
		Global_1354542.f_4282.f_379[iVar0] = iParam15;
		Global_1354542.f_4282.f_390[iVar0] = iParam16;
	}
}

void func_110(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_1354542.f_5703[iParam0]), iParam1);
}

bool func_111(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1354542.f_5703[iParam0], iParam1);
}

int func_112(var uParam0, bool bParam1, bool bParam2)
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

void func_113()
{
	Global_1354542.f_1005 = 1;
}

void func_114()
{
	Global_1354542.f_1004 = 1;
}

void func_115()
{
	if (func_9(&uLocal_250, 30000, 0))
	{
		switch (Local_99.f_16)
		{
			case 2:
				func_161(2099, 1, -1);
				break;
			
			case 3:
				func_161(2100, 1, -1);
				break;
			
			case 4:
				func_161(2101, 1, -1);
				break;
			
			case 5:
				func_161(2102, 1, -1);
				break;
		}
		func_116(0, unk_0x17B5CC8A8615737D(), "XPT_DSC", -1636175450, 2048546661, (Global_262145.f_6976 * Local_99.f_16), 1, -1, 0, 0, 0);
		Local_119[unk_0xCA1D9459B2CC7619() /*4*/].f_2++;
		func_5(&uLocal_250);
	}
}

int func_116(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_126(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x23E9113C762466ED(iParam1))
		{
			if (unk_0x80E9CA64E9C8E070(iParam1))
			{
				uVar1 = unk_0xB80CAAF3D65FBC1F(iParam1);
				func_122(unk_0x425DAA25CBB7EDE2(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_117(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_117(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_120(iParam0, 1) };
	if (iParam0 == func_119(unk_0x17B5CC8A8615737D()))
	{
		func_118(1);
	}
	func_122(Var0, iParam1, 0, sParam2, uParam3);
}

void func_118(int iParam0)
{
	Global_2433125.f_1382 = iParam0;
}

int func_119(var uParam0)
{
	return uParam0;
}

Vector3 func_120(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x354EBDB72A54F91B())
	{
		Var3 = { unk_0xBEBA2DED4C4C66BD(2) };
	}
	if (iParam0 == func_121(unk_0x17B5CC8A8615737D()) && unk_0xB866C0EABE959340(unk_0xB2CED41F4337ED8B()) == 4)
	{
		Var0 = { unk_0x854ED33E6D715648(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		fVar6 = unk_0x638527C9799F2AE4(iParam0);
		if (unk_0xB866C0EABE959340(unk_0xB2CED41F4337ED8B()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x9475086C69ACF470(unk_0x0324EEB10F81965F(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x3CE07141081BBC2B(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_121(var uParam0)
{
	return uParam0;
}

void func_122(struct<3> Param0, int iParam3, int iParam4, char* sParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2433125.f_781[iVar0 /*30*/].f_6 == 0 || Global_2433125.f_781[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2433125.f_781[iVar1 /*30*/] = { Param0 };
			Global_2433125.f_781[iVar1 /*30*/].f_6 = 1;
			Global_2433125.f_781[iVar1 /*30*/].f_4 = func_125(Global_2433125.f_781[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2433125.f_781[iVar1 /*30*/].f_7 = unk_0xCB150A8B81012128();
			Global_2433125.f_781[iVar1 /*30*/].f_3 = iParam3;
			Global_2433125.f_781[iVar1 /*30*/].f_8 = iParam4;
			Global_2433125.f_781[iVar1 /*30*/].f_9 = func_124();
			Global_2433125.f_781[iVar1 /*30*/].f_10 = func_123();
			StringCopy(&(Global_2433125.f_781[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2433125.f_781[iVar1 /*30*/].f_26 = unk_0xD9D7B8709F0A4696(unk_0xCB150A8B81012128(), uParam6);
		}
	}
}

int func_123()
{
	if (Global_2433125.f_1382)
	{
		Global_2433125.f_1382 = 0;
		return 1;
	}
	Global_2433125.f_1382 = 0;
	return 0;
}

var func_124()
{
	var uVar0;
	
	uVar0 = Global_2433125.f_1384;
	Global_2433125.f_1384 = 1;
	return uVar0;
}

float func_125(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x3DC4639D5F23DEA2(unk_0x667FF09580838E25(), Param0, 1);
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

var func_126(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_127(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_127(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_160(unk_0xBE369BE1BC57A796()) || func_159(unk_0xBE369BE1BC57A796()))
	{
		if (Global_262145.f_8270 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8270;
		}
	}
	else if (Global_262145.f_5542 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5542;
	}
	if (func_158(uParam2))
	{
	}
	if (func_157())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_155(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_154(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_151(0, &iVar1);
					break;
				
				case 3:
					func_151(1, &iVar1);
					break;
				
				case 1:
					func_148(&iVar1);
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
			func_161(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_138((func_147(unk_0xBE369BE1BC57A796()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x4A006931F5B47F5F(iVar1, iParam8, iParam9);
				if (Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_2 != -1)
				{
					func_161(1160, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_132(iVar1);
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
				func_128((func_130(unk_0xBE369BE1BC57A796()) + iVar1));
			}
			else
			{
				func_128((func_130(unk_0xBE369BE1BC57A796()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_128(int iParam0)
{
	if (func_157())
	{
		Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_5 = iParam0;
		func_129(joaat("mpply_globalxp"), iParam0);
	}
}

void func_129(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, uParam1, 1);
	}
}

int func_130(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_238(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xBE369BE1BC57A796())
			{
				return func_131(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1591201[iParam0 /*602*/].f_203.f_5;
			}
		}
		else
		{
			return func_131(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_131(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_132(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_137(unk_0xBE369BE1BC57A796()) };
	if (unk_0x749CE7B33672D350())
	{
		if (unk_0x3B13D05FD2D29D80(&Var0))
		{
			iVar13 = func_135(func_136(&Var0));
			if (iVar13 == 0)
			{
				func_134(&Global_1363158, iParam0);
				func_133(joaat("mpply_crew_local_xp_0"), Global_1363158);
			}
			else if (iVar13 == 1)
			{
				func_134(&Global_1363159, iParam0);
				func_133(joaat("mpply_crew_local_xp_1"), Global_1363159);
			}
			else if (iVar13 == 2)
			{
				func_134(&Global_1363160, iParam0);
				func_133(joaat("mpply_crew_local_xp_2"), Global_1363160);
			}
			else if (iVar13 == 3)
			{
				func_134(&Global_1363161, iParam0);
				func_133(joaat("mpply_crew_local_xp_3"), Global_1363161);
			}
			else if (iVar13 == 4)
			{
				func_134(&Global_1363162, iParam0);
				func_133(joaat("mpply_crew_local_xp_4"), Global_1363162);
			}
		}
	}
}

void func_133(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1363153 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1363155 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1363155 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1363156 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1363157 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1363158 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1363159 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1363160 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1363161 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1363162 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1363163 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1363164 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1363165 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1363166 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1363167 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1363168 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1363169 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_135(int iParam0)
{
	if (iParam0 == Global_1363153)
	{
		return 0;
	}
	else if (iParam0 == Global_1363154)
	{
		return 1;
	}
	else if (iParam0 == Global_1363155)
	{
		return 2;
	}
	else if (iParam0 == Global_1363156)
	{
		return 3;
	}
	else if (iParam0 == Global_1363157)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_136(var uParam0)
{
	if (unk_0x749CE7B33672D350())
	{
		if (unk_0x3B13D05FD2D29D80(uParam0))
		{
			return Global_2452452;
		}
	}
	return Global_2452452;
}

struct<13> func_137(int iParam0)
{
	struct<13> Var0;
	
	unk_0xF3EE72618DF96AF7(iParam0, &Var0, 13);
	return Var0;
}

void func_138(int iParam0, int iParam1, int iParam2)
{
	if (func_157())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8240 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1363273[func_18(-1)])
				{
					unk_0x4A006931F5B47F5F(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1363273[func_18(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8239 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x4A006931F5B47F5F(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8239 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x4A006931F5B47F5F(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_146(unk_0xBE369BE1BC57A796()))
		{
			Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_1 = iParam0;
			Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_203.f_6 = func_144(iParam0, 1);
		}
		func_143(634, iParam0, -1, 1);
		func_142(635, func_144(iParam0, 1), -1, 1, 0);
		Global_1363273[func_18(-1)] = iParam0;
		func_139(7, 0);
	}
}

void func_139(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_141(iParam0, iParam1))
	{
		iVar0 = func_140();
		Global_2452429[iVar0] = iParam0;
	}
}

int func_140()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2452429[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_141(int iParam0, var uParam1)
{
	if (Global_1315221)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315233) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_142(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
}

void func_143(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2503826[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1363219[func_18(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1363225[func_18(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1363231[func_18(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1363237[func_18(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1363195[func_18(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1363201[func_18(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1363207[func_18(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1363213[func_18(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1363171[func_18(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1363177[func_18(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1363183[func_18(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1363189[func_18(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1363243[func_18(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1363249[func_18(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1363255[func_18(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1363261[func_18(iParam2)] = iParam1;
			break;
		
		case 1298:
			Global_1363267[func_18(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1363273[func_18(iParam2)] = iParam1;
			break;
		
		case 1273:
			Global_1363279[func_18(iParam2)] = iParam1;
			break;
		
		case 1870:
			Global_2524277[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2261:
			Global_2524277[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2911:
			Global_2524277[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2524277[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 5886:
			Global_2524348[func_18(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1363285[func_18(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1363291[func_18(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1363297[func_18(iParam2)] = iParam1;
			break;
		
		case 1231:
			Global_1363303[func_18(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2524311[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2524311[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2524311[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2524311[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2524311[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2524351[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2524351[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2524351[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2524351[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2524351[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2524367[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2524367[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2524367[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2524367[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2524367[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3203:
			Global_2524311[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2524277[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2524383[func_18(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2524392[func_18(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2524386[func_18(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2524395[func_18(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2524389[func_18(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2524398[func_18(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2524401[func_18(iParam2)] = iParam1;
			break;
		
		case 3211:
			Global_2524311[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2524277[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2524311[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2524277[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3991:
			Global_2524311[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3992:
			Global_2524277[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2524311[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2524277[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2524311[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2524277[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2524311[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2524277[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_144(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_145(iParam0, 0);
}

int func_145(int iParam0, int iParam1)
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
		if (Global_280048[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_280048[iVar3] < iParam0)
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

int func_146(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x48B8265059381CD0(Global_2433125.f_1, iParam0);
	}
	return 1;
}

int func_147(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xBE369BE1BC57A796())
			{
				return Global_1363273[func_18(-1)];
			}
			else if (func_146(iParam0))
			{
				return Global_1591201[iParam0 /*602*/].f_203.f_1;
			}
		}
	}
	else
	{
		return Global_1363273[func_18(-1)];
	}
	return 0;
}

void func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796());
	iVar0 = 0;
	while (iVar0 < unk_0xCF8627766CD5D4CE())
	{
		iVar4 = unk_0x62C65E3042052191(iVar0);
		if (unk_0x5877B93374C85567(iVar4))
		{
			iVar5 = unk_0xD878F413B7BB4895(iVar4);
			if (unk_0xB58DEBB81964A4E9(iVar5) != -1)
			{
				if (unk_0xB58DEBB81964A4E9(iVar5) == iVar1 || func_35(unk_0xB58DEBB81964A4E9(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xBE369BE1BC57A796())
					{
						if (func_150(unk_0xBE369BE1BC57A796(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_149(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_149(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_149(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_150(int iParam0, int iParam1)
{
	if (unk_0x749CE7B33672D350())
	{
		Global_2482053 = { func_137(iParam0) };
		Global_2482066 = { func_137(iParam1) };
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

void func_151(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xCF8627766CD5D4CE())
		{
			iVar3 = iVar0;
			if (unk_0x5877B93374C85567(iVar3))
			{
				iVar4 = unk_0xD878F413B7BB4895(iVar3);
				if (func_238(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xBE369BE1BC57A796())
					{
						iVar1++;
						if (func_150(unk_0xBE369BE1BC57A796(), iVar4))
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
			if (func_238(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xBE369BE1BC57A796())
				{
					if (func_152(unk_0xBE369BE1BC57A796(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_150(unk_0xBE369BE1BC57A796(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_149(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_149(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_152(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_153(iParam0), func_153(iParam1));
	return 0f;
}

Vector3 func_153(var uParam0)
{
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(uParam0), 0);
}

int func_154(int iParam0)
{
	int iVar0;
	
	if (unk_0xF38E4347579BAB61() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_149(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_155(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x049F77DED8AE0AF4(iParam0) > func_147(unk_0xBE369BE1BC57A796()))
		{
			iParam0 = -func_147(unk_0xBE369BE1BC57A796());
		}
	}
	if (func_156(8000, 0, 0) > 0)
	{
		if (func_156(8000, 0, 0) < (iParam0 + func_147(unk_0xBE369BE1BC57A796())))
		{
			iParam0 = (func_156(8000, 0, 0) - func_147(unk_0xBE369BE1BC57A796()));
		}
	}
	return iParam0;
}

int func_156(int iParam0, bool bParam1, int iParam2)
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
	return Global_280048[iParam0];
}

int func_157()
{
	return 1;
}

int func_158(var uParam0)
{
	if (unk_0xD3115E7F7876D6E6(uParam0))
	{
		return 1;
	}
	else if (unk_0x6A7B0D91FD88D9EE(uParam0, "") || unk_0x6A7B0D91FD88D9EE(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_159(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 2;
}

bool func_160(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 7;
}

void func_161(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_163(iParam0, func_18(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_162(iParam0))
	{
		func_142(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_143(iParam0, iVar0, iParam2, 1);
	}
}

int func_162(int iParam0)
{
	if (Global_1363152)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1298:
			case 634:
			case 1273:
			case 759:
			case 760:
			case 761:
			case 1231:
			case 1870:
			case 2261:
			case 2911:
			case 3040:
			case 5886:
			case 3035:
			case 3036:
			case 3037:
			case 3038:
			case 3039:
			case 3214:
			case 3216:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3209:
			case 3203:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3649:
			case 3650:
			case 3671:
			case 3212:
			case 3211:
			case 3992:
			case 3991:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
				return 1;
				break;
			}
	}
	return 0;
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503826[iParam0 /*3*/][func_18(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_164()
{
	if (func_9(&uLocal_252, 10000, 0))
	{
		if (unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) < Local_99.f_16)
		{
			unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), Local_99.f_16, 0);
			unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
		}
		unk_0x2B80C4DD7C4BB325(unk_0xBE369BE1BC57A796());
	}
}

void func_165()
{
	if (!unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_99.f_2, Local_99.f_5, Local_99.f_5, 1000f, 0, 1, 0))
	{
		func_168();
		Local_119[unk_0xCA1D9459B2CC7619() /*4*/].f_3 = 0;
	}
	else if (!unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_99.f_2, Local_99.f_6, Local_99.f_6, 950f, 0, 1, 0))
	{
		if (!unk_0x48B8265059381CD0(iLocal_248, 0) && unk_0x48B8265059381CD0(iLocal_248, 3))
		{
			if (!unk_0x9E123D5FF2973C60() && !func_167())
			{
				if (!func_205())
				{
					func_166("DCP_LEAVE", -1);
				}
				unk_0xEB79FECD9022AAF0(&iLocal_248, 0);
			}
		}
	}
	else
	{
		if (!unk_0x48B8265059381CD0(iLocal_248, 3))
		{
			unk_0xEB79FECD9022AAF0(&iLocal_248, 3);
		}
		if (unk_0x48B8265059381CD0(iLocal_248, 0))
		{
			unk_0x21E7933CCC7B3724(&iLocal_248, 0);
		}
	}
}

void func_166(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

bool func_167()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

void func_168()
{
	func_5(&uLocal_250);
	func_5(&uLocal_252);
	func_169();
	unk_0x21E7933CCC7B3724(&(Local_119[unk_0xCA1D9459B2CC7619() /*4*/].f_1), 0);
	unk_0x21E7933CCC7B3724(&iLocal_248, 3);
	unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4450), 0);
	if (!unk_0x48B8265059381CD0(iLocal_248, 5))
	{
		unk_0xEB79FECD9022AAF0(&iLocal_248, 5);
	}
}

void func_169()
{
	if (unk_0x48B8265059381CD0(iLocal_248, 2))
	{
		func_170(1, 1);
		unk_0x21E7933CCC7B3724(&iLocal_248, 2);
	}
}

void func_170(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xFE072CB6D21717D2(&(Global_2404994.f_43), &Global_2408552, 313);
	}
	else
	{
		Global_2404994.f_43 = { Global_2408552 };
		Global_2404994.f_43.f_49 = { Global_2408552.f_49 };
		Global_2404994.f_43.f_52 = Global_2408552.f_52;
		Global_2404994.f_43.f_53 = Global_2408552.f_53;
	}
	if (bParam0)
	{
		func_182();
	}
	func_173(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_172(0);
	func_171();
}

void func_171()
{
	struct<6> Var0;
	
	if (Global_2404994.f_478.f_1 == unk_0xE9A5FDFDC239B2ED())
	{
		Global_2404994.f_478 = { Var0 };
	}
}

void func_172(bool bParam0)
{
	if (bParam0)
	{
		Global_2404994.f_655 = 0;
	}
	else
	{
		Global_2404994.f_655 = 1;
	}
}

void func_173(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_181())
		{
			func_180();
		}
		Global_2404994.f_656.f_504 = iParam1;
		Global_2404994.f_656.f_505 = iParam2;
		Global_2404994.f_656.f_506 = iParam10;
		func_178();
		func_177(8, 0, 0, 0, 0);
		Global_2404994.f_656.f_507 = iParam11;
		Global_2404994.f_656.f_510 = iParam3;
		Global_2404994.f_656.f_511 = iParam4;
		Global_2404994.f_656.f_508 = iParam5;
		Global_2404994.f_656.f_509 = iParam6;
		Global_2404994.f_656.f_512 = iParam7;
		Global_2404994.f_656.f_513 = iParam8;
		Global_2404994.f_656.f_514 = iParam9;
		Global_2404994.f_1689 = 1;
	}
	else
	{
		func_174();
	}
}

void func_174()
{
	if (func_181() && !func_176())
	{
		func_180();
	}
	if (func_176())
	{
		func_175();
	}
	else
	{
		func_178();
		func_177(0, 0, 0, 0, 0);
		Global_2404994.f_1689 = 0;
		Global_2404994.f_1688 = 0;
	}
}

void func_175()
{
	unk_0xFE072CB6D21717D2(&(Global_2404994.f_656), &(Global_2404994.f_1172), 516);
	Global_2404994.f_478 = { Global_2404994.f_484 };
	if (unk_0xE9A5FDFDC239B2ED() == Global_2404994.f_656.f_515)
	{
		Global_2404994.f_1688 = 0;
	}
}

int func_176()
{
	if ((Global_2404994.f_1688 && !unk_0xE9A5FDFDC239B2ED() == Global_2404994.f_1172.f_515) && unk_0x1EFA84312BB8AA22(Global_2404994.f_1172.f_515))
	{
		return 1;
	}
	return 0;
}

void func_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411323 = 0;
	}
	Global_2404994.f_478 = iParam0;
	Global_2404994.f_478.f_1 = unk_0xE9A5FDFDC239B2ED();
	Global_2404994.f_478.f_2 = iParam1;
	Global_2404994.f_478.f_3 = iParam2;
	Global_2404994.f_478.f_4 = iParam3;
	Global_2404994.f_478.f_5 = iParam4;
}

void func_178()
{
	if (func_181() && !func_176())
	{
		func_180();
	}
	func_179();
	Global_2404994.f_656 = 0;
}

void func_179()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404994.f_656.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_180()
{
	if (func_176())
	{
		if (Global_2404994.f_656.f_515 == Global_2404994.f_1172.f_515)
		{
			return;
		}
	}
	if (!unk_0xE9A5FDFDC239B2ED() == Global_2404994.f_656.f_515)
	{
		unk_0xFE072CB6D21717D2(&(Global_2404994.f_1172), &(Global_2404994.f_656), 516);
		Global_2404994.f_484 = { Global_2404994.f_478 };
		Global_2404994.f_1688 = 1;
	}
}

int func_181()
{
	if ((Global_2404994.f_1689 && !unk_0xE9A5FDFDC239B2ED() == Global_2404994.f_656.f_515) && unk_0x1EFA84312BB8AA22(Global_2404994.f_656.f_515))
	{
		return 1;
	}
	return 0;
}

void func_182()
{
	unk_0xFE072CB6D21717D2(&(Global_2404994.f_356), &Global_2408865, 121);
}

void func_183()
{
	if (!unk_0x48B8265059381CD0(iLocal_248, 2))
	{
		func_202(Local_99.f_2, (Local_99.f_6 * 1.5f), 0, 0, 1, 0);
		func_185(Local_99.f_2, Local_99.f_6, 0, 1);
		func_184(Local_99.f_2, 1, 0);
		unk_0xEB79FECD9022AAF0(&iLocal_248, 2);
	}
}

void func_184(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404994.f_43.f_49 = { Param0 };
	Global_2404994.f_43.f_52 = iParam3;
	Global_2404994.f_43.f_53 = iParam4;
}

void func_185(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	func_186(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam5);
}

void func_186(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_195(unk_0xBE369BE1BC57A796()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_194(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_189(Var0))
		{
			Global_2404994.f_43.f_64 = func_188(unk_0xBE369BE1BC57A796());
			func_187(Var0, iParam8);
		}
	}
}

void func_187(struct<12> Param0, int iParam12)
{
	Global_2404994.f_356[iParam12 /*12*/] = { Param0 };
	Global_2404994.f_356[iParam12 /*12*/].f_9 = 1;
}

int func_188(int iParam0)
{
	if (func_238(iParam0, 0, 1))
	{
		return Global_2421664[iParam0 /*358*/].f_1;
	}
	return 0;
}

int func_189(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2404994.f_43[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_190(Global_2404994.f_43[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_190(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
							if (func_193(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_191(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_193(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_191(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_191(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_192(Param0, Param3, Var0, Var3);
}

int func_192(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_193(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_194(var uParam0, var uParam1)
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

int func_195(int iParam0)
{
	if ((func_198(iParam0, 1) || func_197(iParam0)) || func_196(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0, int iParam1)
{
	if (Global_1619421[iParam0 /*390*/].f_11.f_32 != -1 || (iParam1 && Global_1619421[iParam0 /*390*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1619421[iVar0 /*390*/] != -1;
	}
	return 0;
}

bool func_198(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_188(iParam0) != 0;
	}
	return func_199(iParam0, bParam1);
}

int func_199(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_200(iParam0))
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

bool func_200(int iParam0)
{
	return func_201(iParam0);
}

bool func_201(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_13.f_1, 0);
}

void func_202(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_203(Param0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_203(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11)
{
	struct<12> Var0;
	
	if (func_195(unk_0xBE369BE1BC57A796()) || uParam9)
	{
		if (Global_2404994.f_1689)
		{
			func_174();
		}
		if (Var0.f_10 == 1)
		{
			func_194(&Param0, &Param3);
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
		Global_2404994.f_43.f_64 = func_188(unk_0xBE369BE1BC57A796());
		func_204(Var0, iParam8);
	}
}

void func_204(struct<12> Param0, int iParam12)
{
	Global_2404994.f_43[iParam12 /*12*/] = { Param0 };
	Global_2404994.f_43[iParam12 /*12*/].f_9 = 1;
}

int func_205()
{
	if (func_206(19))
	{
		return 1;
	}
	if (func_206(0))
	{
		return 1;
	}
	return 0;
}

bool func_206(int iParam0)
{
	var uVar0;
	
	uVar0 = func_163(2462, -1, 0);
	return unk_0x48B8265059381CD0(uVar0, iParam0);
}

void func_207()
{
	if (!unk_0x48B8265059381CD0(iLocal_248, 6))
	{
		if (((((((func_208(60000) && func_210() == 1) && Local_99.f_7 <= 1) && !unk_0x9E123D5FF2973C60()) && !unk_0x95DBE123BC2DB80B()) && func_238(unk_0xBE369BE1BC57A796(), 1, 1)) && !func_167()) && Local_99.f_16 != 5)
		{
			if (!func_205())
			{
				func_166("DCP_HELP1", -1);
			}
			unk_0xEB79FECD9022AAF0(&iLocal_248, 6);
		}
	}
}

bool func_208(int iParam0)
{
	return unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(Global_2412532, unk_0xCB150A8B81012128())) > iParam0;
}

void func_209()
{
	if (unk_0xA3794949321E107C(uLocal_249))
	{
		if (func_205())
		{
			unk_0x8E5BEC1151739D19(uLocal_249, 0);
		}
		else
		{
			unk_0x8E5BEC1151739D19(uLocal_249, 4);
		}
	}
	else
	{
		uLocal_249 = unk_0x2528C64BC2C01C92(Local_99.f_2, Local_99.f_5);
		unk_0xCC930AE12D020496(uLocal_249, 50);
		unk_0x5F97CFBDE7F2B599(uLocal_249, 220);
		unk_0x1441D969BF79AD61(uLocal_249, 0);
		unk_0xAAF15482D9DB27D9(uLocal_249, "DCP_BLIPN");
		if (func_205())
		{
			unk_0x8E5BEC1151739D19(uLocal_249, 0);
		}
	}
}

int func_210()
{
	return Local_99.f_0;
}

int func_211(int iParam0)
{
	return Local_119[iParam0 /*4*/];
}

bool func_212(int iParam0)
{
	return !func_213(iParam0);
}

int func_213(int iParam0)
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
			if (func_215(unk_0xBE369BE1BC57A796(), 7))
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
			if (func_215(unk_0xBE369BE1BC57A796(), 7))
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
			if (func_215(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_214(4))
			{
				return 0;
			}
			if (func_215(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_214(4))
			{
				return 0;
			}
			if (func_215(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_214(4))
			{
				return 0;
			}
			if (func_215(unk_0xBE369BE1BC57A796(), 7))
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
			if (func_214(4))
			{
				return 0;
			}
			if (func_215(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			if (unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 0) || unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_258.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_214(4))
			{
				return 0;
			}
			if (func_215(unk_0xBE369BE1BC57A796(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_214(4))
			{
				return 0;
			}
			if (func_215(unk_0xBE369BE1BC57A796(), 7))
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

int func_214(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_238(unk_0x0C36F33B3F746611(iVar0), 0, 1))
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

bool func_215(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_211, iParam1);
}

int func_216()
{
	bool bVar0;
	var uVar1;
	
	func_223(&bVar0, &uVar1);
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
	if (func_222())
	{
		return 1;
	}
	if (Global_2454747)
	{
		return 1;
	}
	if (func_221())
	{
		return 1;
	}
	if (func_220(157))
	{
		if (!func_219())
		{
			return 1;
		}
	}
	if (func_220(155))
	{
		return 1;
	}
	if (!unk_0x6C119F3638AC7ABE())
	{
		return 1;
	}
	if (func_217() != 0)
	{
		if (unk_0x82F1A060D8F4583B(func_217()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_217()
{
	switch (func_218())
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

int func_218()
{
	return Global_25190;
}

bool func_219()
{
	return Global_2443134.f_577;
}

int func_220(int iParam0)
{
	if (unk_0x08E5392A79D45DEE(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_221()
{
	return Global_2452525;
}

bool func_222()
{
	return Global_2443134.f_572;
}

void func_223(var uParam0, var uParam1)
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
					func_224(iVar0);
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

void func_224(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 3))
	{
		if (func_238(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xDF7CE83326F434E9(Var0.f_1);
			if (unk_0x23E9113C762466ED(uVar3))
			{
				if (unk_0xFD0FE723227D5AB6(iVar3, 0))
				{
					uVar4 = unk_0x60604E51E30D25B8(iVar3, 0);
					if (unk_0x4AFDA497DA0BF602(uVar4, Var0.f_2) && unk_0x9A0AB9C5586EA71E())
					{
						if (func_225(uVar4, &bVar5))
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

int func_225(int iParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xC26429B504BA534D(iParam0))
		{
			if (unk_0xFB2400809D8DC8C7(iParam0))
			{
				if (!unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(iParam0)))
				{
					unk_0xF0F77C99098F999B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x45CA7F42CA715849(iParam0, 0))
		{
			if (unk_0xC38F0FBE1914783C(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_226()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_227()
{
	if (unk_0xA3794949321E107C(uLocal_249))
	{
		unk_0x020DF7300725ECAB(&uLocal_249);
	}
	if (unk_0x48B8265059381CD0(Local_99.f_1, 1))
	{
		func_57(12, "DSC_FAIL", 0, 0, -99);
	}
	func_169();
	func_229(16, 0);
	unk_0xEB79FECD9022AAF0(&(Global_2494199.f_4450), 0);
	func_228();
}

void func_228()
{
	unk_0x921053BAF754303D();
}

void func_229(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211, iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211), iParam0);
		}
	}
	else if (unk_0x48B8265059381CD0(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211, iParam0))
	{
		unk_0x21E7933CCC7B3724(&(Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_211), iParam0);
	}
}

void func_230(struct<20> Param0)
{
	func_236(func_237(Param0.f_0), Param0);
	func_234(0, -1, 0);
	unk_0xB5EAF11213E48C1C(&Local_99, 20);
	unk_0x0C3BA36587E6FBEE(&Local_119, 129);
	if (!func_233())
	{
		func_227();
	}
	if (unk_0x63C468D583002D23())
	{
		unk_0xAA78C60F0BF0F8D4(0);
		if (unk_0x415DF132F15085E8())
		{
			func_231();
		}
		func_229(16, 1);
		Local_119[unk_0xCA1D9459B2CC7619() /*4*/] = 0;
	}
	else
	{
		func_227();
	}
}

void func_231()
{
	Local_99.f_2 = { func_232() };
	Local_99.f_5 = 200f;
	Local_99.f_6 = 180f;
}

Vector3 func_232()
{
	switch (unk_0x0E29C61F26D96FDB(0, 10))
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

int func_233()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x63C468D583002D23())
		{
			return 0;
		}
		if (unk_0xF8A920554B0F81A7())
		{
			return 1;
		}
		if (func_222())
		{
			return 0;
		}
		if (func_220(155))
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

int func_234(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xCC130A646D137F0D();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_228();
			}
			else
			{
				return 0;
			}
		}
		if (!func_235())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x63C468D583002D23())
				{
					if (!bParam2)
					{
						func_228();
					}
					else
					{
						return 0;
					}
				}
				if (func_222())
				{
					if (!bParam2)
					{
						func_228();
					}
					else
					{
						return 0;
					}
				}
				if (func_220(155))
				{
					if (!bParam2)
					{
						func_228();
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
					func_228();
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
				func_228();
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
			func_228();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_235()
{
	return Global_1315210;
}

void func_236(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x63C468D583002D23())
	{
		func_228();
	}
	unk_0x181A13B993F735EB(uParam0, 0, Param1.f_16);
}

int func_237(int iParam0)
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

int func_238(int iParam0, bool bParam1, bool bParam2)
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

