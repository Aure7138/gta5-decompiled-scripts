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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<19> Local_103 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_122 = 0;
	struct<4> Local_123[32];
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x7AF0088ABFA713B6() && func_260(unk_0xB5CEFD608600A09F(), 0, 1))
	{
		func_252(ScriptParam_0);
	}
	else
	{
		func_249();
	}
	while (true)
	{
		func_248();
		if (func_238() || func_234(16))
		{
			func_249();
		}
		if (unk_0x2F7EEEA6378AC19B())
		{
			func_249();
		}
		switch (func_233(unk_0x6BAA0516CC970D99()))
		{
			case 0:
				if (func_232() == 1)
				{
					func_231();
					Local_123[unk_0x6BAA0516CC970D99() /*4*/] = 1;
				}
				else if (func_232() == 4)
				{
					Local_123[unk_0x6BAA0516CC970D99() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_232() == 1)
				{
					func_117();
				}
				else if (func_232() == 4)
				{
					func_14();
					Local_123[unk_0x6BAA0516CC970D99() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_103.f_18));
				if (func_12(&(Local_103.f_18)))
				{
					Local_123[unk_0x6BAA0516CC970D99() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_123[unk_0x6BAA0516CC970D99() /*4*/] = 4;
			
			case 4:
				func_249();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			switch (func_232())
			{
				case 0:
					Local_103.f_0 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_103.f_0 = 4;
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
	if (Local_103.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	struct<14> Var0;
	
	switch (Local_103.f_7)
	{
		case 0:
			if (unk_0xFA30DFD0084E92FE(Local_103.f_1, 0))
			{
				Local_103.f_7 = 1;
			}
			else if (func_9(&(Local_103.f_8), 480000, 0))
			{
				Var0.f_2 = -1510361326;
				func_7(Var0, func_8(1));
				unk_0xF0059F27F7BB6680(&(Local_103.f_1), 1);
				Local_103.f_7 = 2;
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
	if (!func_9(&(Local_103.f_10), Local_103.f_12, 0))
	{
		if (func_9(&(Local_103.f_13), Local_103.f_15, 0))
		{
			Local_103.f_17++;
			Local_103.f_16 = func_6();
			func_5(&(Local_103.f_13));
		}
	}
	else
	{
		Local_103.f_7 = 2;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6()
{
	switch (Local_103.f_17)
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
	return Local_103.f_16;
}

void func_7(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -471892217;
	Param0.f_1 = unk_0xB5CEFD608600A09F();
	if (!iParam14 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Param0, 14, iParam14);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar1)))
		{
			iVar2 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar1));
			if (func_260(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar2);
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
	if (unk_0x7AF0088ABFA713B6() && !bParam2)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x7AF0088ABFA713B6() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				*uParam0 = unk_0x1C44CABA911F93F7();
			}
		}
		else
		{
			*uParam0 = unk_0x105601648511CC64();
		}
		uParam0->f_1 = 1;
	}
}

void func_11()
{
	int iVar0;
	
	if (Local_103.f_0 == 1)
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iLocal_258)))
		{
			iVar0 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iLocal_258));
			if (func_260(iVar0, 1, 1))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 0))
				{
					if (unk_0xFA30DFD0084E92FE(Local_123[iLocal_258 /*4*/].f_1, 0))
					{
						iLocal_259 = 1;
						unk_0xF0059F27F7BB6680(&(Local_103.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_258++;
	if (iLocal_258 == unk_0x81C86888AEA2F49B())
	{
		if (iLocal_259 == 0)
		{
			if (unk_0xFA30DFD0084E92FE(Local_103.f_1, 0))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_103.f_1), 0);
			}
		}
		else
		{
			iLocal_259 = 0;
		}
		iLocal_258 = 0;
	}
}

int func_12(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= 1000)
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
		if (unk_0x0DE6397A2CB3EF75())
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
	
	if (!unk_0xFA30DFD0084E92FE(iLocal_252, 1))
	{
		if ((unk_0xFA30DFD0084E92FE(Local_123[unk_0x6BAA0516CC970D99() /*4*/].f_1, 0) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) >= (Local_103.f_16 - 1)) && Local_123[unk_0x6BAA0516CC970D99() /*4*/].f_2 < 10)
		{
			Local_123[unk_0x6BAA0516CC970D99() /*4*/].f_2++;
		}
		if (Local_123[unk_0x6BAA0516CC970D99() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_123[unk_0x6BAA0516CC970D99() /*4*/].f_2 * Global_262145.f_7490);
			Global_2459893 = iVar0;
			func_94(&iVar0, 1);
			if (iVar0 > 0)
			{
				func_91(iVar0, 1, 1, 0);
				if (func_90())
				{
					func_81(-2043695058, iVar0, &uVar5, 0, 0, 0);
				}
				else
				{
					unk_0x98D5F29DCDF681F8(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (func_80())
			{
				func_67(12, "DSC_PASS0", 0, 0, -99);
			}
			else
			{
				func_67(12, "DSC_PASS1", 0, 0, -99);
			}
			func_20(51, iVar0, "DSC_CASH", "DSC_BIGM", 1, -1, -1082130432, 2);
			if (unk_0xFA30DFD0084E92FE(iLocal_252, 4))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_252, 5))
				{
					func_15(66, 1, -1);
				}
			}
		}
		unk_0xF0059F27F7BB6680(&iLocal_252, 1);
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
	
	iVar0 = Global_2558778[iParam0 /*3*/][func_18(iParam2)];
	unk_0x3A57956BCE003880(iVar0, iParam1, 1);
}

int func_17(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2558778[iParam0 /*3*/][func_18(iParam1)];
	if (unk_0x6CB99B97664C3727(uVar0, &uVar1, -1))
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
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1312736;
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_66(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_21(&Var0);
}

int func_21(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436641.f_3025)
		{
			return 0;
		}
	}
	func_35(uParam0, uParam0->f_17);
	func_32(uParam0);
	if (func_31())
	{
		func_32(uParam0);
	}
	if (func_30(uParam0->f_1))
	{
		func_23();
		if (Global_2436641.f_2703[0 /*80*/].f_2 == 0)
		{
			Global_2436641.f_2703[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436641.f_2703[0 /*80*/].f_1 == 13 || Global_2436641.f_2703[0 /*80*/].f_1 == 53) || Global_2436641.f_2703[0 /*80*/].f_1 == 54) || Global_2436641.f_2703[0 /*80*/].f_1 == 58)
		{
			Global_2436641.f_2703[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436641.f_2703[iVar0 + 1 /*80*/] = { Global_2436641.f_2703[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436641.f_2703[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436641.f_2703[iVar0 /*80*/].f_2 == 0)
		{
			Global_2436641.f_2703[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_23();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_2436641.f_2703[iVar0 /*80*/].f_69), 1);
				Global_2436641.f_2703[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !unk_0xFA30DFD0084E92FE(uParam0->f_69, 7))
			{
				if (func_22(Global_2436641.f_2703[iVar0 /*80*/].f_1))
				{
					Global_2436641.f_2703[iVar0 /*80*/].f_2 = 5;
					unk_0xF0059F27F7BB6680(&(Global_2436641.f_2703[iVar0 /*80*/].f_69), 0);
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

void func_23()
{
	bool bVar0;
	
	if (Global_2436641.f_3026)
	{
		return;
	}
	if (!Global_71246)
	{
		Global_71246 = 1;
		bVar0 = true;
	}
	func_24();
	if (bVar0)
	{
		Global_71246 = 0;
	}
}

void func_24()
{
	Global_2436641.f_3027 = 0;
	Global_2436641.f_3027.f_578 = 0;
	func_28(&(Global_2436641.f_3027.f_1));
	Global_2436641.f_3027.f_1.f_1 = 0;
	func_25(&(Global_2436641.f_3027.f_1));
}

void func_25(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xB0B0FE33F4F22679(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5E5DBD0A6623969E(0);
			unk_0xF9FBC2F3F73D94C9();
		}
		unk_0xB0B0FE33F4F22679(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xC4248B71D9B26306(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71246)
	{
		if (!unk_0x0928DEFC3216677B(unk_0xFC1CAE18F3ECBF2D()))
		{
			if (!Global_71247)
			{
				if (unk_0x17FAADF9916EF741() && !func_27(0))
				{
					unk_0x829FA4611BD56B44(800);
				}
			}
		}
	}
	func_26(0);
}

void func_26(int iParam0)
{
	Global_71238 = iParam0;
	Global_71239 = iParam0;
}

bool func_27(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

void func_28(var uParam0)
{
	func_29(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_29(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_30(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

bool func_31()
{
	return Global_2447942.f_16;
}

void func_32(var uParam0)
{
	if (func_34(uParam0->f_1))
	{
		uParam0->f_72 = func_33();
	}
}

int func_33()
{
	return 21;
}

int func_34(int iParam0)
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

void func_35(var uParam0, int iParam1)
{
	if (func_34(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_65() || !func_260(iParam1, 0, 1))
	{
		return;
	}
	if (func_22(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_36(iParam1, -2, 0, 0);
		}
	}
}

int func_36(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_61(iParam0))
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
		iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_121853[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_61(unk_0xB5CEFD608600A09F()) || (func_60() && func_59())) && !unk_0xFA30DFD0084E92FE(Global_2519572.f_4576, 31))
	{
		uVar1 = func_58();
		if (unk_0x724D816EA203A79E(uVar1))
		{
			if (unk_0x15DBD981998D4FE1(uVar1))
			{
				if (unk_0x5363B43856FA7779(uVar1) != -1)
				{
					if (func_260(unk_0x5363B43856FA7779(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
						{
							if (Global_4456448.f_121853[iParam1] != -1)
							{
								return func_56(iParam1, iParam0, 0);
							}
							else
							{
								return func_44(iParam0, unk_0x5363B43856FA7779(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_44(iParam0, unk_0x5363B43856FA7779(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
			{
				if (Global_4456448.f_121853[iParam1] != -1)
				{
					return func_56(iParam1, iParam0, 0);
				}
				else
				{
					return func_37(0, -1, 0);
				}
			}
			else
			{
				return func_37(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
	{
		if (Global_4456448.f_121853[iParam1] != -1)
		{
			return func_56(iParam1, iParam0, 0);
		}
		else
		{
			return func_44(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
		}
	}
	return func_44(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
}

int func_37(bool bParam0, int iParam1, bool bParam2)
{
	return func_38(unk_0xB5CEFD608600A09F(), bParam0, iParam1, bParam2);
}

int func_38(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x96B1061E8F3CBC9A(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_43(iVar0, iParam2, 0) && !unk_0xFA30DFD0084E92FE(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_42(1);
				}
				else
				{
					return func_42(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_4456448.f_4, 20))
			{
				return func_39(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_39(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_42(1);
	}
	return func_42(0);
}

int func_39(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_41(iParam0, iParam1, iParam3);
	if (func_40(Global_4456448.f_126776, 1))
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
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
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

int func_40(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_148478 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8408[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_43(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_42(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_43(int iParam0, int iParam1, int iParam2)
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
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 0);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 1);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 2);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 4);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 5);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 6);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 8);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 9);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 10);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 12);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 13);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 14);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_4456448.f_50, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_44(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589291[unk_0xB5CEFD608600A09F() /*770*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589291[iVar2 /*770*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_53(1))
			{
				iVar3 = func_49(iParam0);
				if (!iVar3 == -1)
				{
					return func_47(iVar3);
				}
			}
			if ((func_46(iParam1, iParam0, iVar0, 0) && !unk_0xFA30DFD0084E92FE(Global_4456448.f_15, 18)) || ((func_43(unk_0x343CB262BF0CDF5A(iParam1), unk_0x343CB262BF0CDF5A(iParam0), 0) && unk_0xFA30DFD0084E92FE(Global_4456448.f_15, 23)) && !unk_0xFA30DFD0084E92FE(Global_4456448.f_15, 18)))
			{
				return func_42(1);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_4456448.f_15, 26))
			{
				return func_45(1);
			}
			else
			{
				return func_38(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574355 || Global_1574346) || Global_1589291[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574355 == 1 && Global_1574365 == 0))
			{
				return func_42(1);
			}
			else
			{
				return func_38(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574350 && Global_1573884.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_49(iParam0);
	if (!iVar4 == -1)
	{
		return func_47(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_45(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_46(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && unk_0x343CB262BF0CDF5A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == unk_0x343CB262BF0CDF5A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
	}
	return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
}

int func_47(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_48(iParam0);
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

var func_48(int iParam0)
{
	return Global_2417501.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_49(int iParam0)
{
	if (!iParam0 == func_65())
	{
		if (func_51(iParam0, 1))
		{
			return Global_2417501.f_2071.f_11[func_50(iParam0)];
		}
	}
	return -1;
}

int func_50(int iParam0)
{
	if (iParam0 != func_65())
	{
		return Global_1624079[iParam0 /*558*/].f_11;
	}
	return func_65();
}

bool func_51(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_52(iParam0))
		{
			return 0;
		}
	}
	return Global_1624079[iParam0 /*558*/].f_11 != func_65();
}

int func_52(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_65())
		{
			return Global_1624079[iParam0 /*558*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	if ((func_55() || func_54()) || (func_31() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_54()
{
	return Global_2447942.f_15;
}

var func_55()
{
	return Global_2447942.f_14;
}

int func_56(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_53(1))
	{
		iVar2 = func_49(iParam1);
		if (!iVar2 == -1)
		{
			return func_47(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xFA30DFD0084E92FE(Global_4456448.f_98[iParam0 /*10231*/].f_5361[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_65())
	{
		if (Global_4456448.f_121853[iParam0] != -1 && Global_4456448.f_121853[iParam0] <= 4)
		{
			if (Global_4456448.f_121853[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_121853[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_121853[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_121853[iParam0] == 4)
			{
				if (unk_0xFA30DFD0084E92FE(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_121853[iParam0];
			}
		}
		else
		{
			iVar0 = func_38(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_4456448.f_21, 13))
		{
			iVar0 = func_57(iParam0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_57(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_148521;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_148522;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_148523;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_148524;
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

var func_58()
{
	return Global_2359302.f_2;
}

bool func_59()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 4);
}

bool func_60()
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18, 14);
}

int func_61(int iParam0)
{
	if (func_63(iParam0, 0))
	{
		return 1;
	}
	if (func_62())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_191, 2))
	{
		return 1;
	}
	return 0;
}

bool func_62()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 3);
}

bool func_63(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_64(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_64(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_65()
{
	return -1;
}

void func_66(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_65();
	uParam1->f_18 = func_65();
	uParam1->f_19 = func_65();
	uParam1->f_20 = func_65();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = uParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

void func_67(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_68(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_68(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_69(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_69(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return;
	}
	if (unk_0xF5429F058A48A07C(sParam1) > 15)
	{
		return;
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		if (unk_0xF5429F058A48A07C(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_78();
	if (iVar0 == -1)
	{
		return;
	}
	func_77(iVar0);
	func_76(iVar0, uParam0);
	func_75(iVar0, uParam2, bParam3);
	func_74(iVar0, sParam1);
	if (unk_0xF1734B55490E9045(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_73(iVar0);
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_71(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_70(iVar0, iParam6);
	}
}

void func_70(int iParam0, int iParam1)
{
	Global_1356553.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_71(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1356553.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_72(iParam0);
}

void func_72(int iParam0)
{
	unk_0xF0059F27F7BB6680(&(Global_1356553.f_59[iParam0 /*16*/]), 5);
}

void func_73(int iParam0)
{
	unk_0xF0059F27F7BB6680(&(Global_1356553.f_59[iParam0 /*16*/]), 4);
}

void func_74(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1356553.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_75(int iParam0, var uParam1, bool bParam2)
{
	Global_1356553.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_1356553.f_59[iParam0 /*16*/]), 2);
		unk_0x7CB6FD92BE491AD9(&(Global_1356553.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_1356553.f_59[iParam0 /*16*/]), 3);
		unk_0x7CB6FD92BE491AD9(&(Global_1356553.f_59[iParam0 /*16*/]), 2);
	}
}

void func_76(int iParam0, var uParam1)
{
	Global_1356553.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_77(int iParam0)
{
	unk_0xF0059F27F7BB6680(&(Global_1356553.f_59[iParam0 /*16*/]), 0);
}

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_79(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_79(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1356553.f_59[iParam0 /*16*/], 0);
}

int func_80()
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_81(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_90())
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
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
			if (iParam1 > 0)
			{
				func_82(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
			func_82(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_90())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_19()) || unk_0xEBA8BD5AE6FF01CA())
		{
			Global_4262738 = 1;
			return 0;
		}
		if (Global_2458855)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262739 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4262188[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x4EB807D82D2F9433(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xCEA9F48EB9CF0CC7(iVar4))
		{
			*uParam0 = func_89(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4262188[*uParam0 /*80*/].f_69 = 1;
					Global_4262188[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262725 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262737 = 1;
			Global_4262740 = iParam4;
			Global_4262742 = iParam3;
			Global_4262743 = 1;
			Global_4262741 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262740 = iParam4;
			Global_4262742 = iParam3;
			Global_4262743 = 1;
			Global_4262741 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_88(1, iParam4);
			Global_4262737 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_83(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_83(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_118.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_84(iParam0);
	}
}

void func_84(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_90())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_87(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC7150D5EF5AFC7C1();
			}
		}
		else if (!bVar0)
		{
			unk_0xA48F55B05F42FD2C(Global_4262188[iParam0 /*80*/]);
		}
		func_85(&(Global_4262188[iParam0 /*80*/]));
	}
}

void func_85(var uParam0)
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
	func_86(&(uParam0->f_8.f_3));
	func_86(&(uParam0->f_8.f_16));
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
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_86(var uParam0)
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

int func_87(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262188[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_88(int iParam0, var uParam1)
{
	Global_2460027 = uParam1;
	Global_2460026 = iParam0;
}

int func_89(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262188[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_90())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262188[iVar0 /*80*/].f_2 = 1;
			Global_4262188[iVar0 /*80*/].f_1 = uParam5;
			Global_4262188[iVar0 /*80*/].f_3 = uParam1;
			Global_4262188[iVar0 /*80*/].f_4 = uParam2;
			Global_4262188[iVar0 /*80*/].f_7 = uParam3;
			Global_4262188[iVar0 /*80*/].f_5 = 0;
			Global_4262188[iVar0 /*80*/] = iParam0;
			Global_4262188[iVar0 /*80*/].f_6 = iParam4;
			Global_4262188[iVar0 /*80*/].f_72 = uParam8;
			Global_4262188[iVar0 /*80*/].f_71 = uParam7;
			Global_4262188[iVar0 /*80*/].f_74 = iParam9;
			Global_4262188[iVar0 /*80*/].f_73 = 0;
			Global_4262188[iVar0 /*80*/].f_75 = unk_0xC87A57742F7D3C06();
			Global_4262188[iVar0 /*80*/].f_79 = 0;
			Global_4262725 = 0;
			if (bParam6)
			{
				Global_4262188[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_90()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

void func_91(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_92(iParam0, iParam1, iParam2, fParam3);
}

void func_92(int iParam0, int iParam1, int iParam2, float fParam3)
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
	Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_211.f_4 = iVar1;
	Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_211.f_3 = (Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_93(iVar1, 0);
	}
}

void func_93(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_116())
		{
			if (func_115(0))
			{
				if (!func_111(0))
				{
					if (unk_0x96B1061E8F3CBC9A(func_110()))
					{
						if (func_109() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_109());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_107(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_100("GB_BCUT_TICK1", func_110(), iVar0, 0, 0, 1, 1);
						}
						func_99(20);
						func_95(func_110(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_95(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_260(iParam0, 0, 1))
	{
		Var0.f_0 = 1838378015;
		Var0.f_1 = unk_0xB5CEFD608600A09F();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_98(iParam0);
		func_97(&(Var0.f_6), &(Var0.f_7));
		unk_0x38E776D9FA75679B(1, &Var0, 8, func_96(iParam0));
	}
}

var func_96(int iParam0)
{
	var uVar0;
	
	unk_0xF0059F27F7BB6680(&uVar0, iParam0);
	return uVar0;
}

void func_97(var uParam0, var uParam1)
{
	*uParam0 = Global_1641937.f_9;
	*uParam1 = Global_1641937.f_10;
}

var func_98(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_491;
}

void func_99(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF0059F27F7BB6680(&(Global_2519572.f_4882.f_7[iVar0]), iVar1);
}

int func_100(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		if (unk_0xF1734B55490E9045(&Var1))
		{
		}
		unk_0x2E94302CFF011F2E(sParam0);
		unk_0x449F0674640D94C0(func_36(iParam1, -2, 1, 0));
		unk_0x607C19B90D297FE2(func_105(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x449F0674640D94C0(iParam3);
		}
		unk_0xAA5C5BF0489E5553(iParam2);
		iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
		func_101(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_101(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_104() || !unk_0x517823CA390A19F6()) || !func_63(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = func_102(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1661957.f_5[iVar0 /*53*/] = iParam0;
		Global_1661957.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1661957.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1661957.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1661957.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1661957.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1661957.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1661957 - 1))
	{
		if (iParam0 > Global_1661957.f_5[iVar0 /*53*/].f_1)
		{
			func_103(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1661957++;
	if (Global_1661957 > 5)
	{
		Global_1661957 = 5;
		return Global_1661957;
	}
	return (Global_1661957 - 1);
}

void func_103(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1661957.f_5[iVar0 /*53*/] = { Global_1661957.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_104()
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

var func_105(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_106(&cVar0);
}

var func_106(char[4] cParam0)
{
	return cParam0;
}

void func_107(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_108(1);
	}
	else
	{
		iVar1 = func_108(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_108(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11779;
}

int func_109()
{
	return Global_262145.f_11778;
}

int func_110()
{
	return Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_11;
}

bool func_111(bool bParam0)
{
	return func_112(unk_0xB5CEFD608600A09F(), bParam0);
}

int func_112(int iParam0, bool bParam1)
{
	return func_113(iParam0, bParam1, 1);
}

int func_113(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_114(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1624079[iParam0 /*558*/].f_11;
	if (iVar0 != func_65() && Global_1624079[iVar0 /*558*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	if (iParam0 != func_65())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_65())
		{
			if (Global_1624079[iParam0 /*558*/].f_11 == iParam0 && Global_1624079[iParam0 /*558*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_115(bool bParam0)
{
	return func_51(unk_0xB5CEFD608600A09F(), bParam0);
}

bool func_116()
{
	return func_52(unk_0xB5CEFD608600A09F());
}

void func_117()
{
	func_229();
	if (unk_0x2DA8CA50A72528FB(uLocal_253))
	{
		if (func_227() || func_226())
		{
			unk_0x2E9308F22ABD4DF5(uLocal_253, 0);
		}
		else
		{
			unk_0x2E9308F22ABD4DF5(uLocal_253, 4);
		}
	}
	switch (Local_123[unk_0x6BAA0516CC970D99() /*4*/].f_3)
	{
		case 0:
			if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_103.f_2, Local_103.f_5, Local_103.f_5, 1000f, 0, 1, 0))
			{
				func_204();
				unk_0xF0059F27F7BB6680(&(Local_123[unk_0x6BAA0516CC970D99() /*4*/].f_1), 0);
				unk_0xF0059F27F7BB6680(&(Global_2519572.f_4577), 0);
				Local_123[unk_0x6BAA0516CC970D99() /*4*/].f_3 = 1;
			}
			if (Local_103.f_7 > 1)
			{
				Local_123[unk_0x6BAA0516CC970D99() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_183();
			func_118();
			if (Local_103.f_7 > 1)
			{
				Local_123[unk_0x6BAA0516CC970D99() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_118()
{
	func_182();
	func_127();
	func_120();
	func_119();
}

void func_119()
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_252, 5))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_252, 4))
		{
			if (Local_103.f_17 == 0)
			{
				unk_0xF0059F27F7BB6680(&iLocal_252, 4);
			}
			else
			{
				unk_0xF0059F27F7BB6680(&iLocal_252, 5);
			}
		}
		else if (!func_260(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			unk_0xF0059F27F7BB6680(&iLocal_252, 5);
		}
	}
}

void func_120()
{
	if ((((unk_0x83D607D7994DEF3A() == 7 || unk_0x83D607D7994DEF3A() == 8) || unk_0x83D607D7994DEF3A() == 9) || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 12)
	{
		func_126();
	}
	else
	{
		func_125();
	}
	if ((Local_103.f_12 - func_124(&(Local_103.f_10), 0, 0)) >= 0)
	{
		func_121((Local_103.f_12 - func_124(&(Local_103.f_10), 0, 0)), "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_121(0, "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_121(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_123(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1364578.f_1 = 1;
		func_122(7, iVar0);
		Global_1364578.f_4388[iVar0] = iParam0;
		StringCopy(&(Global_1364578.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1364578.f_4388.f_172[iVar0] = iParam2;
		Global_1364578.f_4388.f_216[iVar0] = iParam3;
		Global_1364578.f_4388.f_183[iVar0] = iParam4;
		Global_1364578.f_4388.f_194[iVar0] = iParam5;
		Global_1364578.f_4388.f_249[iVar0] = iParam6;
		Global_1364578.f_4388.f_260[iVar0] = iParam7;
		Global_1364578.f_4388.f_205[iVar0] = iParam8;
		Global_1364578.f_4388.f_314[iVar0] = iParam9;
		Global_1364578.f_4388.f_325[iVar0] = iParam10;
		Global_1364578.f_4388.f_357[iVar0] = iParam11;
		Global_1364578.f_4388.f_238[iVar0] = iParam12;
		Global_1364578.f_4388.f_271[iVar0] = iParam13;
		Global_1364578.f_4388.f_368[iVar0] = iParam14;
		Global_1364578.f_4388.f_379[iVar0] = iParam15;
		Global_1364578.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_122(int iParam0, int iParam1)
{
	unk_0xF0059F27F7BB6680(&(Global_1364578.f_6119[iParam0]), iParam1);
}

bool func_123(int iParam0, int iParam1)
{
	return unk_0xFA30DFD0084E92FE(Global_1364578.f_6119[iParam0], iParam1);
}

int func_124(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x7AF0088ABFA713B6() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0);
		}
		else
		{
			return unk_0xCCA9497DA4595710(unk_0x1C44CABA911F93F7(), *uParam0);
		}
	}
	return unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0);
}

void func_125()
{
	Global_1364578.f_1089 = 1;
}

void func_126()
{
	Global_1364578.f_1088 = 1;
}

void func_127()
{
	if (func_9(&uLocal_254, 30000, 0))
	{
		switch (Local_103.f_16)
		{
			case 2:
				func_179(2105, 1, -1);
				break;
			
			case 3:
				func_179(2106, 1, -1);
				break;
			
			case 4:
				func_179(2107, 1, -1);
				break;
			
			case 5:
				func_179(2108, 1, -1);
				break;
		}
		func_128(0, unk_0xBC25C936A095B5BA(), "XPT_DSC", -1636175450, 2048546661, (Global_262145.f_7491 * Local_103.f_16), 1, -1, 0, 0, 0);
		Local_123[unk_0x6BAA0516CC970D99() /*4*/].f_2++;
		func_5(&uLocal_254);
	}
}

int func_128(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_138(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x724D816EA203A79E(iParam1))
		{
			if (unk_0x386592AF38881675(iParam1))
			{
				uVar1 = unk_0x399F7937FFE4DEBF(iParam1);
				func_134(unk_0x823166D9421223CA(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_129(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_129(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_132(iParam0, 1) };
	if (iParam0 == func_131(unk_0xBC25C936A095B5BA()))
	{
		func_130(1);
	}
	func_134(Var0, iParam1, 0, sParam2, uParam3);
}

void func_130(int iParam0)
{
	Global_2436641.f_1885 = iParam0;
}

int func_131(var uParam0)
{
	return uParam0;
}

Vector3 func_132(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xAE9335ADE2B33DFC())
	{
		Var3 = { unk_0x14C8316F37CF95AA(2) };
	}
	if (iParam0 == func_133(unk_0xBC25C936A095B5BA()) && unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
	{
		Var0 = { unk_0xA4455714F3DCE207(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		fVar6 = unk_0x349C94FFF43E2979(iParam0);
		if (unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x89D97EB4FAE4A574(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_133(var uParam0)
{
	return uParam0;
}

void func_134(struct<3> Param0, int iParam3, int iParam4, char* sParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2436641.f_1284[iVar0 /*30*/].f_6 == 0 || Global_2436641.f_1284[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436641.f_1284[iVar1 /*30*/] = { Param0 };
			Global_2436641.f_1284[iVar1 /*30*/].f_6 = 1;
			Global_2436641.f_1284[iVar1 /*30*/].f_4 = func_137(Global_2436641.f_1284[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436641.f_1284[iVar1 /*30*/].f_7 = unk_0xED678C85A82F0AB9();
			Global_2436641.f_1284[iVar1 /*30*/].f_3 = iParam3;
			Global_2436641.f_1284[iVar1 /*30*/].f_8 = iParam4;
			Global_2436641.f_1284[iVar1 /*30*/].f_9 = func_136();
			Global_2436641.f_1284[iVar1 /*30*/].f_10 = func_135();
			StringCopy(&(Global_2436641.f_1284[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2436641.f_1284[iVar1 /*30*/].f_26 = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), uParam6);
		}
	}
}

int func_135()
{
	if (Global_2436641.f_1885)
	{
		Global_2436641.f_1885 = 0;
		return 1;
	}
	Global_2436641.f_1885 = 0;
	return 0;
}

var func_136()
{
	var uVar0;
	
	uVar0 = Global_2436641.f_1887;
	Global_2436641.f_1887 = 1;
	return uVar0;
}

float func_137(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xF0F2FC9DE291567F(unk_0x4E95580B2DDCC7A9(), Param0, 1);
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

var func_138(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_139(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_139(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_178(unk_0xB5CEFD608600A09F()) || func_177(unk_0xB5CEFD608600A09F()))
	{
		if (Global_262145.f_9024 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9024;
		}
	}
	else if (func_175() || func_171(unk_0xB5CEFD608600A09F()))
	{
		if (Global_262145.f_22143 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22143;
		}
	}
	else if (Global_262145.f_6026 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6026;
	}
	if (func_170(uParam2))
	{
	}
	if (func_169())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_167(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_166(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_163(0, &iVar1);
					break;
				
				case 3:
					func_163(1, &iVar1);
					break;
				
				case 1:
					func_160(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1676003)
		{
			return 0;
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
			func_179(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_150((func_159(unk_0xB5CEFD608600A09F()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5FF267E54EB49897(iVar1, iParam8, iParam9);
				if (Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_2 != -1)
				{
					func_179(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_144(iVar1);
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
				func_140((func_142(unk_0xB5CEFD608600A09F()) + iVar1));
			}
			else
			{
				func_140((func_142(unk_0xB5CEFD608600A09F()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_140(int iParam0)
{
	if (func_169())
	{
		Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_211.f_5 = iParam0;
		func_141(joaat("mpply_globalxp"), iParam0);
	}
}

void func_141(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, uParam1, 1);
	}
}

int func_142(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_260(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return func_143(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589291[iParam0 /*770*/].f_211.f_5;
			}
		}
		else
		{
			return func_143(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_143(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x6CB99B97664C3727(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_144(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_149(unk_0xB5CEFD608600A09F()) };
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(&Var0))
		{
			iVar13 = func_147(func_148(&Var0));
			if (iVar13 == 0)
			{
				func_146(&Global_1373641, iParam0);
				func_145(joaat("mpply_crew_local_xp_0"), Global_1373641);
			}
			else if (iVar13 == 1)
			{
				func_146(&Global_1373642, iParam0);
				func_145(joaat("mpply_crew_local_xp_1"), Global_1373642);
			}
			else if (iVar13 == 2)
			{
				func_146(&Global_1373643, iParam0);
				func_145(joaat("mpply_crew_local_xp_2"), Global_1373643);
			}
			else if (iVar13 == 3)
			{
				func_146(&Global_1373644, iParam0);
				func_145(joaat("mpply_crew_local_xp_3"), Global_1373644);
			}
			else if (iVar13 == 4)
			{
				func_146(&Global_1373645, iParam0);
				func_145(joaat("mpply_crew_local_xp_4"), Global_1373645);
			}
		}
	}
}

void func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1373636 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1373638 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1373638 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1373639 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1373640 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1373641 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1373642 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1373643 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1373644 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1373645 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1373646 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1373647 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1373648 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1373649 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1373650 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1373651 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1373652 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_146(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_147(int iParam0)
{
	if (iParam0 == Global_1373636)
	{
		return 0;
	}
	else if (iParam0 == Global_1373637)
	{
		return 1;
	}
	else if (iParam0 == Global_1373638)
	{
		return 2;
	}
	else if (iParam0 == Global_1373639)
	{
		return 3;
	}
	else if (iParam0 == Global_1373640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_148(var uParam0)
{
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(uParam0))
		{
			return Global_2457627;
		}
	}
	return Global_2457627;
}

struct<13> func_149(int iParam0)
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

void func_150(int iParam0, int iParam1, int iParam2)
{
	if (func_169())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8992 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1373762[func_18(-1)])
				{
					unk_0x5FF267E54EB49897(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1373762[func_18(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8991 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5FF267E54EB49897(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8991 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5FF267E54EB49897(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_158(unk_0xB5CEFD608600A09F()))
		{
			Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_211.f_1 = iParam0;
			Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_211.f_6 = func_156(iParam0, 1);
		}
		func_155(639, iParam0, -1, 1);
		func_154(640, func_156(iParam0, 1), -1, 1, 0);
		Global_1373762[func_18(-1)] = iParam0;
		func_151(7, 0);
	}
}

void func_151(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_153(iParam0, iParam1))
	{
		iVar0 = func_152();
		Global_2457604[iVar0] = iParam0;
	}
}

int func_152()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2457604[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_153(int iParam0, var uParam1)
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2530245[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1373702[func_18(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1373708[func_18(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1373714[func_18(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1373720[func_18(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1373678[func_18(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1373684[func_18(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1373690[func_18(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1373696[func_18(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1373654[func_18(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1373660[func_18(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1373666[func_18(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1373672[func_18(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1373726[func_18(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1373732[func_18(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1373738[func_18(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1373744[func_18(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1373750[func_18(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_1373756[func_18(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1373762[func_18(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1373768[func_18(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2559219[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2559219[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_2559219[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2559219[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_2559326[func_18(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1373774[func_18(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1373780[func_18(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1373786[func_18(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1373792[func_18(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_2559271[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_2559271[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_2559271[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_2559271[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2559271[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2559329[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2559329[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2559329[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_2559329[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2559329[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2559345[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2559345[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2559345[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2559345[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2559345[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2559271[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2559219[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_2559361[func_18(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_2559370[func_18(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_2559364[func_18(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_2559373[func_18(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2559367[func_18(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2559376[func_18(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_2559379[func_18(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2559271[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_2559219[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2559271[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2559219[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_2559271[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_2559219[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_2559271[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2559219[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2559271[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2559219[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2559271[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2559219[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_2559271[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_2559219[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_2559271[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_2559219[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_2559271[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_2559219[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_2559271[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_2559219[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_2559271[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2559219[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2559271[17 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2559219[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_156(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_157(iParam0, 0);
}

int func_157(int iParam0, int iParam1)
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
		if (Global_286291[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_286291[iVar3] < iParam0)
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

int func_158(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_2436641.f_1, iParam0);
	}
	return 1;
}

int func_159(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return Global_1373762[func_18(-1)];
			}
			else if (func_158(iParam0))
			{
				return Global_1589291[iParam0 /*770*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1373762[func_18(-1)];
	}
	return 0;
}

void func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		iVar4 = unk_0xCFA8A401AAD7BB5A(iVar0);
		if (unk_0x05086B70D2CFEA6F(iVar4))
		{
			iVar5 = unk_0x4ED43B67B3F05E0F(iVar4);
			if (unk_0x343CB262BF0CDF5A(iVar5) != -1)
			{
				if (unk_0x343CB262BF0CDF5A(iVar5) == iVar1 || func_43(unk_0x343CB262BF0CDF5A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xB5CEFD608600A09F())
					{
						if (func_162(unk_0xB5CEFD608600A09F(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_161(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_161(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_161(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_162(int iParam0, int iParam1)
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_2498829 = { func_149(iParam0) };
		Global_2498842 = { func_149(iParam1) };
		if (unk_0xD7F4457CECF10121(&Global_2498829))
		{
			if (unk_0xD7F4457CECF10121(&Global_2498842))
			{
				unk_0x24723877416AAAFC(&Global_2498759, 35, &Global_2498829);
				unk_0x24723877416AAAFC(&Global_2498794, 35, &Global_2498842);
				if (Global_2498759 == Global_2498794)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_163(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x81C86888AEA2F49B())
		{
			iVar3 = iVar0;
			if (unk_0x05086B70D2CFEA6F(iVar3))
			{
				iVar4 = unk_0x4ED43B67B3F05E0F(iVar3);
				if (func_260(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xB5CEFD608600A09F())
					{
						iVar1++;
						if (func_162(unk_0xB5CEFD608600A09F(), iVar4))
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
			if (func_260(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xB5CEFD608600A09F())
				{
					if (func_164(unk_0xB5CEFD608600A09F(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_162(unk_0xB5CEFD608600A09F(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_161(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_161(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_164(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_165(iParam0), func_165(iParam1));
	return 0f;
}

Vector3 func_165(var uParam0)
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(uParam0), 0);
}

int func_166(int iParam0)
{
	int iVar0;
	
	if (unk_0x8820DB58BCD4A148() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_161(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_167(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xC40EDFF7541407A8(iParam0) > func_159(unk_0xB5CEFD608600A09F()))
		{
			iParam0 = -func_159(unk_0xB5CEFD608600A09F());
		}
	}
	if (func_168(8000, 0, 0) > 0)
	{
		if (func_168(8000, 0, 0) < (iParam0 + func_159(unk_0xB5CEFD608600A09F())))
		{
			iParam0 = (func_168(8000, 0, 0) - func_159(unk_0xB5CEFD608600A09F()));
		}
	}
	return iParam0;
}

int func_168(int iParam0, bool bParam1, int iParam2)
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
	return Global_286291[iParam0];
}

int func_169()
{
	return 1;
}

int func_170(var uParam0)
{
	if (unk_0xEAEFBBEC1AEA464B(uParam0))
	{
		return 1;
	}
	else if (unk_0x3362CDE8460ED38B(uParam0, "") || unk_0x3362CDE8460ED38B(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_171(int iParam0)
{
	return func_172(func_173(iParam0));
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_173(int iParam0)
{
	if (func_174(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_33;
	}
	return -1;
}

int func_174(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_33 != -1 || (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_175()
{
	if (unk_0x517823CA390A19F6())
	{
		return func_31();
	}
	return func_176(Global_4456448.f_126776);
}

int func_176(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4997[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_177(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 2;
}

bool func_178(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 7;
}

void func_179(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_181(iParam0, func_18(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_180(iParam0))
	{
		func_154(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_155(iParam0, iVar0, iParam2, 1);
	}
}

int func_180(int iParam0)
{
	if (Global_1373635)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
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
			case 1303:
			case 7229:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2925:
			case 3054:
			case 7818:
			case 3049:
			case 3050:
			case 3051:
			case 3052:
			case 3053:
			case 3228:
			case 3230:
			case 3632:
			case 3633:
			case 3634:
			case 3635:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3223:
			case 3217:
			case 3659:
			case 3660:
			case 3661:
			case 3662:
			case 3663:
			case 3664:
			case 3685:
			case 3226:
			case 3225:
			case 4016:
			case 4015:
			case 4019:
			case 4018:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 6106:
			case 6105:
			case 6164:
			case 6163:
			case 6529:
			case 6528:
			case 6542:
			case 6541:
			case 6555:
			case 6554:
			case 6558:
			case 6557:
			case 6561:
			case 6560:
				return 1;
				break;
			}
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2530245[iParam0 /*3*/][func_18(iParam1)];
	if (unk_0x6CB99B97664C3727(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_182()
{
	if (func_9(&uLocal_256, 10000, 0))
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < Local_103.f_16)
		{
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), Local_103.f_16, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		}
		unk_0x8C78A370F973FB74(unk_0xB5CEFD608600A09F());
	}
}

void func_183()
{
	if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_103.f_2, Local_103.f_5, Local_103.f_5, 1000f, 0, 1, 0))
	{
		func_186();
		Local_123[unk_0x6BAA0516CC970D99() /*4*/].f_3 = 0;
	}
	else if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_103.f_2, Local_103.f_6, Local_103.f_6, 950f, 0, 1, 0))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_252, 0) && unk_0xFA30DFD0084E92FE(iLocal_252, 3))
		{
			if (!unk_0xF16DAFF595E80F7C() && !func_185())
			{
				if (!func_227())
				{
					func_184("DCP_LEAVE", -1);
				}
				unk_0xF0059F27F7BB6680(&iLocal_252, 0);
			}
		}
	}
	else
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_252, 3))
		{
			unk_0xF0059F27F7BB6680(&iLocal_252, 3);
		}
		if (unk_0xFA30DFD0084E92FE(iLocal_252, 0))
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_252, 0);
		}
	}
}

void func_184(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

bool func_185()
{
	return unk_0x105601648511CC64() <= Global_17345.f_5745 + 100;
}

void func_186()
{
	func_5(&uLocal_254);
	func_5(&uLocal_256);
	func_187();
	unk_0x7CB6FD92BE491AD9(&(Local_123[unk_0x6BAA0516CC970D99() /*4*/].f_1), 0);
	unk_0x7CB6FD92BE491AD9(&iLocal_252, 3);
	unk_0xF0059F27F7BB6680(&(Global_2519572.f_4577), 0);
	if (!unk_0xFA30DFD0084E92FE(iLocal_252, 5))
	{
		unk_0xF0059F27F7BB6680(&iLocal_252, 5);
	}
}

void func_187()
{
	if (unk_0xFA30DFD0084E92FE(iLocal_252, 2))
	{
		func_188(1, 1, 0);
		unk_0x7CB6FD92BE491AD9(&iLocal_252, 2);
	}
}

void func_188(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_2405070.f_44), &Global_2409297, 317);
	}
	else
	{
		Global_2405070.f_44 = { Global_2409297 };
		Global_2405070.f_44.f_49 = { Global_2409297.f_49 };
		Global_2405070.f_44.f_52 = Global_2409297.f_52;
		Global_2405070.f_44.f_53 = Global_2409297.f_53;
	}
	if (bParam0)
	{
		func_203();
	}
	if (!bParam2)
	{
		func_191(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_190(0);
	func_189();
}

void func_189()
{
	struct<6> Var0;
	
	if (Global_2405070.f_483.f_1 == unk_0x8A55B15F4133C912())
	{
		Global_2405070.f_483 = { Var0 };
	}
}

void func_190(bool bParam0)
{
	if (bParam0)
	{
		Global_2405070.f_701 = 0;
	}
	else
	{
		Global_2405070.f_701 = 1;
	}
}

void func_191(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_202())
		{
			func_201();
		}
		Global_2405070.f_702.f_515 = unk_0x8A55B15F4133C912();
		Global_2405070.f_702.f_504 = iParam1;
		Global_2405070.f_702.f_505 = iParam2;
		Global_2405070.f_702.f_506 = iParam10;
		func_199();
		func_195(8, 0, 0, 0, 0);
		Global_2405070.f_702.f_507 = iParam11;
		Global_2405070.f_702.f_510 = iParam3;
		Global_2405070.f_702.f_511 = iParam4;
		Global_2405070.f_702.f_508 = iParam5;
		Global_2405070.f_702.f_509 = iParam6;
		Global_2405070.f_702.f_512 = iParam7;
		Global_2405070.f_702.f_513 = iParam8;
		Global_2405070.f_702.f_514 = iParam9;
		Global_2405070.f_1735 = 1;
	}
	else
	{
		func_192();
	}
}

void func_192()
{
	if (func_202() && !func_194())
	{
		func_201();
	}
	if (func_194())
	{
		func_193();
	}
	else
	{
		func_199();
		func_195(0, 0, 0, 0, 0);
		Global_2405070.f_1735 = 0;
		Global_2405070.f_1734 = 0;
	}
}

void func_193()
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_2405070.f_702), &(Global_2405070.f_1218), 516);
	Global_2405070.f_483 = { Global_2405070.f_489 };
	if (unk_0x8A55B15F4133C912() == Global_2405070.f_702.f_515)
	{
		Global_2405070.f_1734 = 0;
	}
}

int func_194()
{
	if ((Global_2405070.f_1734 && !unk_0x8A55B15F4133C912() == Global_2405070.f_1218.f_515) && unk_0x3C406FC829C1E14A(Global_2405070.f_1218.f_515))
	{
		return 1;
	}
	return 0;
}

void func_195(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2436641.f_1888.f_690.f_16 != func_65())
	{
		if (unk_0xFA30DFD0084E92FE(Global_2423644[Global_2436641.f_1888.f_690.f_16 /*406*/].f_396, 0) && func_196())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412387 = 0;
	}
	Global_2405070.f_483 = iParam0;
	Global_2405070.f_483.f_1 = unk_0x8A55B15F4133C912();
	Global_2405070.f_483.f_2 = iParam1;
	Global_2405070.f_483.f_3 = iParam2;
	Global_2405070.f_483.f_4 = iParam3;
	Global_2405070.f_483.f_5 = iParam4;
}

int func_196()
{
	if (((func_173(unk_0xB5CEFD608600A09F()) == 229 || func_173(unk_0xB5CEFD608600A09F()) == 191) || func_198()) || func_197())
	{
		return 0;
	}
	return 1;
}

var func_197()
{
	return Global_1574350;
}

int func_198()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_199()
{
	if (func_202() && !func_194())
	{
		func_201();
	}
	func_200();
	Global_2405070.f_702 = 0;
}

void func_200()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405070.f_702.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_201()
{
	if (func_194())
	{
		if (Global_2405070.f_702.f_515 == Global_2405070.f_1218.f_515)
		{
			return;
		}
	}
	if (!unk_0x8A55B15F4133C912() == Global_2405070.f_702.f_515)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_2405070.f_1218), &(Global_2405070.f_702), 516);
		Global_2405070.f_489 = { Global_2405070.f_483 };
		Global_2405070.f_1734 = 1;
	}
}

int func_202()
{
	if ((Global_2405070.f_1735 && !unk_0x8A55B15F4133C912() == Global_2405070.f_702.f_515) && unk_0x3C406FC829C1E14A(Global_2405070.f_702.f_515))
	{
		return 1;
	}
	return 0;
}

void func_203()
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_2405070.f_361), &Global_2409614, 121);
}

void func_204()
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_252, 2))
	{
		func_223(Local_103.f_2, (Local_103.f_6 * 1.5f), 0, 0, 1, 0);
		func_206(Local_103.f_2, Local_103.f_6, 0, 1);
		func_205(Local_103.f_2, 1, 0);
		unk_0xF0059F27F7BB6680(&iLocal_252, 2);
	}
}

void func_205(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405070.f_44.f_49 = { Param0 };
	Global_2405070.f_44.f_52 = iParam3;
	Global_2405070.f_44.f_53 = iParam4;
}

void func_206(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	func_207(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam5);
}

void func_207(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_216(unk_0xB5CEFD608600A09F()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_215(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_210(Var0))
		{
			Global_2405070.f_44.f_64 = func_209(unk_0xB5CEFD608600A09F());
			func_208(Var0, iParam8);
		}
	}
}

void func_208(struct<12> Param0, int iParam12)
{
	Global_2405070.f_361[iParam12 /*12*/] = { Param0 };
	Global_2405070.f_361[iParam12 /*12*/].f_9 = 1;
}

int func_209(int iParam0)
{
	if (func_260(iParam0, 0, 1))
	{
		return Global_2423644[iParam0 /*406*/].f_1;
	}
	return 0;
}

int func_210(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2405070.f_44[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_211(Global_2405070.f_44[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_211(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
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
							if (func_214(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_212(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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
							if (func_214(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_212(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
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

bool func_212(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_213(Param0, Param3, Var0, Var3);
}

int func_213(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_214(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((unk_0x652D2EEEF1D3E62C(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_215(var uParam0, var uParam1)
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

int func_216(int iParam0)
{
	if (((func_219(iParam0, 1) || func_218(iParam0)) || func_174(iParam0, 0)) || func_217(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	if (!func_260(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589291[iParam0 /*770*/].f_35;
}

int func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1624079[iVar0 /*558*/] != -1;
	}
	return 0;
}

bool func_219(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_209(iParam0) != 0;
	}
	return func_220(iParam0, bParam1);
}

int func_220(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_221(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589291[iParam0 /*770*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_221(int iParam0)
{
	return func_222(iParam0);
}

bool func_222(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_13.f_1, 0);
}

void func_223(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_224(Param0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_224(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11)
{
	struct<12> Var0;
	
	if (func_216(unk_0xB5CEFD608600A09F()) || uParam9)
	{
		if (Global_2405070.f_1735)
		{
			func_192();
		}
		if (Var0.f_10 == 1)
		{
			func_215(&Param0, &Param3);
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
		Global_2405070.f_44.f_64 = func_209(unk_0xB5CEFD608600A09F());
		func_225(Var0, iParam8);
	}
}

void func_225(struct<12> Param0, int iParam12)
{
	Global_2405070.f_44[iParam12 /*12*/] = { Param0 };
	Global_2405070.f_44[iParam12 /*12*/].f_9 = 1;
}

var func_226()
{
	return Global_2415808.f_1689;
}

int func_227()
{
	if (func_228(21))
	{
		return 1;
	}
	if (func_228(0))
	{
		return 1;
	}
	return 0;
}

bool func_228(int iParam0)
{
	var uVar0;
	
	uVar0 = func_181(2476, -1, 0);
	return unk_0xFA30DFD0084E92FE(uVar0, iParam0);
}

void func_229()
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_252, 6))
	{
		if (((((((func_230(60000) && func_232() == 1) && Local_103.f_7 <= 1) && !unk_0xF16DAFF595E80F7C()) && !unk_0xE186ACC7BE9B244E()) && func_260(unk_0xB5CEFD608600A09F(), 1, 1)) && !func_185()) && Local_103.f_16 != 5)
		{
			if (!func_227())
			{
				func_184("DCP_HELP1", -1);
			}
			unk_0xF0059F27F7BB6680(&iLocal_252, 6);
		}
	}
}

bool func_230(int iParam0)
{
	return unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(Global_2413624, unk_0xED678C85A82F0AB9())) > iParam0;
}

void func_231()
{
	if (unk_0x2DA8CA50A72528FB(uLocal_253))
	{
		if (func_227() || func_226())
		{
			unk_0x2E9308F22ABD4DF5(uLocal_253, 0);
		}
		else
		{
			unk_0x2E9308F22ABD4DF5(uLocal_253, 4);
		}
	}
	else
	{
		uLocal_253 = unk_0x489E7A92D55C10F8(Local_103.f_2, Local_103.f_5);
		unk_0x0D5352939CC40C16(uLocal_253, 50);
		unk_0x7781946F1FC054FA(uLocal_253, 220);
		unk_0x222805B89367761E(uLocal_253, 0);
		unk_0x436D0272182E484D(uLocal_253, "DCP_BLIPN");
		if (func_227())
		{
			unk_0x2E9308F22ABD4DF5(uLocal_253, 0);
		}
	}
}

int func_232()
{
	return Local_103.f_0;
}

int func_233(int iParam0)
{
	return Local_123[iParam0 /*4*/];
}

bool func_234(int iParam0)
{
	return !func_235(iParam0);
}

int func_235(int iParam0)
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
			if (Global_262145.f_6051)
			{
				return 0;
			}
			if (func_237(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 0) || unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6052)
			{
				return 0;
			}
			if (func_237(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 0) || unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6053)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6054)
			{
				return 0;
			}
			if (func_237(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 0) || unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_236(4))
			{
				return 0;
			}
			if (func_237(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 0) || unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_236(4))
			{
				return 0;
			}
			if (func_237(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 0) || unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_236(4))
			{
				return 0;
			}
			if (func_237(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 0) || unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_236(4))
			{
				return 0;
			}
			if (func_237(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 0) || unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_273.f_19, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_236(4))
			{
				return 0;
			}
			if (func_237(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_236(4))
			{
				return 0;
			}
			if (func_237(unk_0xB5CEFD608600A09F(), 7))
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

int func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_260(unk_0x3171C34AB3FE6F2E(iVar0), 0, 1))
		{
			if (unk_0xFA30DFD0084E92FE(Global_2423644[iVar0 /*406*/].f_204, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_237(int iParam0, int iParam1)
{
	return unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_204, iParam1);
}

int func_238()
{
	var uVar0;
	
	func_245(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_244())
	{
		return 1;
	}
	if (Global_2459932)
	{
		return 1;
	}
	if (func_243())
	{
		return 1;
	}
	if (func_242(157))
	{
		if (!func_241())
		{
			return 1;
		}
	}
	if (func_242(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_239() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_239()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_239()
{
	switch (func_240())
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

int func_240()
{
	return Global_25277;
}

bool func_241()
{
	return Global_2447942.f_586;
}

int func_242(int iParam0)
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_243()
{
	return Global_2457699;
}

bool func_244()
{
	return Global_2447942.f_581;
}

void func_245(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x414AA1932D1C88E2(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1113296425:
					func_246(iVar0);
					break;
				
				case -319074860:
					unk_0x414AA1932D1C88E2(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -1987561915)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_246(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &Var0, 3))
	{
		if (func_260(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xA95CF30C72EB526E(Var0.f_1);
			if (unk_0x724D816EA203A79E(uVar3))
			{
				if (unk_0x5237AF95232D78C5(iVar3, 0))
				{
					uVar4 = unk_0x9FE9D386222EEE47(iVar3, 0);
					if (unk_0x403C891106DCABAF(uVar4, Var0.f_2) && unk_0x32405B7614E36453())
					{
						if (func_247(uVar4, &bVar5))
						{
							unk_0xD5DC0505375F4D00(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x1E7A09C1710FB071(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_247(int iParam0, var uParam1)
{
	if (unk_0x724D816EA203A79E(uParam0))
	{
		if (!unk_0x5CAE759AE8219D20(iParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(iParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					unk_0x77815D3407C6700D(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xB248FAA35ED47DB9(iParam0, 0))
		{
			if (unk_0x4DF785C4DF542CD0(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_248()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_249()
{
	if (unk_0x2DA8CA50A72528FB(uLocal_253))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_253);
	}
	if (unk_0xFA30DFD0084E92FE(Local_103.f_1, 1))
	{
		func_67(12, "DSC_FAIL", 0, 0, -99);
	}
	func_187();
	func_251(16, 0);
	unk_0xF0059F27F7BB6680(&(Global_2519572.f_4577), 0);
	func_250();
}

void func_250()
{
	unk_0x95E4B6F3ED223F5A();
}

void func_251(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_204, iParam0))
		{
			unk_0xF0059F27F7BB6680(&(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_204), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_204, iParam0))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_204), iParam0);
	}
}

void func_252(struct<21> Param0)
{
	func_258(func_259(Param0.f_0), Param0);
	func_256(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_103, 20);
	unk_0xE45D6A3FD6454198(&Local_123, 129);
	if (!func_255())
	{
		func_249();
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		unk_0x6C87EFD58B261C6F(0);
		if (unk_0x0DE6397A2CB3EF75())
		{
			func_253();
		}
		func_251(16, 1);
		Local_123[unk_0x6BAA0516CC970D99() /*4*/] = 0;
	}
	else
	{
		func_249();
	}
}

void func_253()
{
	Local_103.f_2 = { func_254() };
	Local_103.f_5 = 200f;
	Local_103.f_6 = 180f;
}

Vector3 func_254()
{
	switch (unk_0x491B2241281A03B7(0, 10))
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

int func_255()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 0;
		}
		if (unk_0xB3E1B1F67FB95F04())
		{
			return 1;
		}
		if (func_244())
		{
			return 0;
		}
		if (func_242(155))
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

int func_256(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_250();
			}
			else
			{
				return 0;
			}
		}
		if (!func_257())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_250();
					}
					else
					{
						return 0;
					}
				}
				if (func_244())
				{
					if (!bParam2)
					{
						func_250();
					}
					else
					{
						return 0;
					}
				}
				if (func_242(155))
				{
					if (!bParam2)
					{
						func_250();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xF5F5C6DD66B0FB2A())
			{
				if (!bParam2)
				{
					func_250();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x4796DAD7A8894E2F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (!bParam2)
			{
				func_250();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xF5F5C6DD66B0FB2A())
	{
		if (!bParam2)
		{
			func_250();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_257()
{
	return Global_1312831;
}

void func_258(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_250();
	}
	unk_0xBF463BC3D6FFDE31(uParam0, 0, Param1.f_16);
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
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
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
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
		
		case 124:
			return 32;
		
		case 125:
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
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

int func_260(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

