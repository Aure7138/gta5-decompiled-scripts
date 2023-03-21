#region Local Var
	char* sLocal_0 = NULL;
	bool bLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	char cLocal_4[32] = "";
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27[4] = { 0, 0, 0, 0 };
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	struct<2> Local_40 = { 0, 0 } ;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45[4] = { 0, 0, 0, 0 };
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	float fLocal_73 = 0f;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	struct<3> Local_108[6];
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156[184] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	int iLocal_352 = 0;
	bool bLocal_353 = 0;
	int iLocal_354 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.41.41";
	StringCopy(&cLocal_4, "", 32);
	iLocal_38 = -1;
	iLocal_54 = -1;
	iLocal_55 = -1;
	iLocal_72 = -1;
	fLocal_73 = 0f;
	iLocal_75 = -1;
	iLocal_86 = -1;
	iLocal_100 = 2147483647;
	iLocal_101 = -1;
	iLocal_102 = -1;
	iLocal_104 = 99;
	unk_0x0BDEAF4CD9510F40(0);
	unk_0x11103F6657466FF8();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1315784 = unk_0x50B7853132D8438E(sLocal_0);
	iVar0 = unk_0x31CD6E9F83C10233() + 10000;
	while (unk_0x31CD6E9F83C10233() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_603())
		{
			func_602();
			if (bLocal_1)
			{
				unk_0xD1F2C9FF58856AEC(0f, 0.23f);
				unk_0x52D4D0409C49DF8C(255, 255, 255, 255);
				func_601(0.69f, 0.06f, "STRING", sLocal_0);
			}
		}
		func_600();
		if (unk_0x27CA09C6DFAB1E79() && Global_2453457.f_3)
		{
			func_596();
			func_595();
			func_594();
			func_590();
			func_589();
			func_588();
			func_587();
			func_586();
			func_583();
			func_582();
			func_579();
			func_577();
			func_571();
			func_570();
			func_569();
			func_563();
			func_557();
			func_556();
			func_547();
			func_542();
			func_540();
			func_537();
			func_534();
			func_507();
			func_505();
			func_503();
			func_502();
			func_501();
			func_495();
			func_488();
			func_486();
			func_447();
			func_446();
			func_445();
			if (unk_0x20551D6D924ED04B())
			{
				func_442();
				func_441();
				func_439();
			}
			func_407();
			func_318();
			func_307();
			func_303();
			func_301();
			func_300();
			func_293();
			func_292();
			func_289();
			func_285();
			func_283();
			func_282();
			func_280();
			func_270();
			func_264();
			func_263();
			func_259();
			func_253();
			if (unk_0xF4F91CD09D59F42E())
			{
				func_251();
				func_250();
				func_249();
			}
			func_248();
			func_246();
			func_245();
			func_242();
			func_239();
			func_235();
			func_162();
			func_158();
			func_154();
			func_147();
			func_61();
		}
		if (!unk_0x27CA09C6DFAB1E79())
		{
			if (iLocal_127)
			{
				iLocal_127 = 0;
			}
		}
		func_59();
		func_52();
		func_51();
		func_47();
		func_46();
		func_44();
		func_43();
		func_42();
		func_39();
		func_18();
		func_8();
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xBEE2834559A8897A();
}

void func_1()
{
	if (((func_7(unk_0x3D35F9864E4640B1()) || func_4(unk_0x3D35F9864E4640B1())) || Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_255 != -1) || (unk_0x76B3C79DE564AFC6(Global_2501777.f_281) && unk_0xBB43B50327B1A590(Global_2501777.f_281, 1060.325f, -3064.239f, -100.9374f, 821.32f, -3255.345f, -75f, 0, 1, 0)))
	{
		if (func_3(&Global_1312501))
		{
			func_2(&Global_1312501);
		}
	}
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_3(var uParam0)
{
	return uParam0->f_1;
}

int func_4(int iParam0)
{
	if (iParam0 != func_6() && func_5(iParam0, 1, 1))
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_318, 3);
	}
	return 0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x80BA8E3CC61A8625(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x4B0365EB2D59E6FA(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2434915.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_6()
{
	return -1;
}

int func_7(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			return Global_2422142[iParam0 /*399*/].f_318.f_1 != -1;
		}
		else if ((Global_1312853 && iParam0 == unk_0x3D35F9864E4640B1()) && func_5(iParam0, 1, 0))
		{
			return Global_2422142[iParam0 /*399*/].f_318.f_1 != -1;
		}
	}
	return 0;
}

void func_8()
{
	var uVar0[1];
	int iVar2;
	
	if ((func_16(unk_0x3D35F9864E4640B1()) && Global_1592924 != unk_0x3D35F9864E4640B1()) && !unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &uVar0);
		if ((unk_0x76B3C79DE564AFC6(uVar0[0]) && unk_0x036E1D5EA494CEB2(uVar0[0])) && func_14(uVar0[0], 0, 1, 0, 0, 0, 1, 0))
		{
			if ((unk_0xE9559A12052415BE(uVar0[0]) != joaat("caddy2") && unk_0xE9559A12052415BE(uVar0[0]) != joaat("caddy3")) || !func_10(unk_0x0031992CA618A445(), unk_0xF177E0DA126D71C8(uVar0[0], 0), 50f))
			{
				unk_0xC9621A9AD282CC14(0, 23, 1);
			}
		}
		if (unk_0x6517762DDFC7E0E9(unk_0x0031992CA618A445()) != 0)
		{
			iVar2 = unk_0x882388E2A8356C6F(unk_0x0031992CA618A445());
			if ((unk_0x76B3C79DE564AFC6(iVar2) && func_14(iVar2, 0, 1, 0, 0, 0, 1, 0)) && func_9(iVar2, 1))
			{
				unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
			}
		}
	}
}

int func_9(int iParam0, bool bParam1)
{
	if (Global_70785)
	{
		if (unk_0x76B3C79DE564AFC6(iParam0) && (!bParam1 || unk_0x432757A9E7AAFA96(iParam0, 0)))
		{
			if (unk_0x8B0523D9EF9595C2(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_10(int iParam0, struct<3> Param1, float fParam4)
{
	return func_11(unk_0xF177E0DA126D71C8(iParam0, 1), unk_0x69F9721375CE60CF(iParam0), Param1, fParam4);
}

bool func_11(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { unk_0x261E7847B591A8DC(0f, 0f, 0f, uParam3, 0f, 1f, 0f) };
	uVar3 = func_12(func_13(Var0), func_13(Param4 - Param0));
	return unk_0xA55A440F1B40A25E(uVar3) <= fParam7;
}

float func_12(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_13(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_14(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xB8B31FD7EF092667(iParam0) + 1;
	if (iParam4 || !unk_0x7A6C051038031EFA(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_15(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x76B3C79DE564AFC6(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x0031992CA618A445())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x8682D8A6269E52C9(iVar2))
					{
						if (unk_0x972B5786EA49FE1A(iVar2))
						{
							if (unk_0x4347749EAD4D87DF(unk_0x46E9A8D99AF6D7BC(iVar2)) == 0)
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
				else if (!unk_0x8682D8A6269E52C9(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_15(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x00E962E9D49FD6C4(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x3251C2B06497863C(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x76B3C79DE564AFC6(iVar0) && !unk_0x7A6C051038031EFA(iParam0, 0))
		{
			iVar0 = unk_0xB4ED2AD9365A5F9E(iParam0, iParam1);
			if (!unk_0x7A6C051038031EFA(iVar0, 0))
			{
				if (unk_0xF57D21B49780A7A8(iVar0, 451360105) == 1 || unk_0xF57D21B49780A7A8(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(iParam0, 0), unk_0xF177E0DA126D71C8(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_16(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_17(Global_2422142[iParam0 /*399*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_17(int iParam0)
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
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 3;
			break;
		
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
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
	}
	return -1;
}

void func_18()
{
	if (func_5(unk_0x3D35F9864E4640B1(), 1, 1))
	{
		if (func_38())
		{
			if (!func_3(&uLocal_350) && func_16(Global_1592924))
			{
				func_37(&uLocal_350, 0, 0);
			}
			else if (unk_0x2A116936C6E6EBEC(unk_0x0031992CA618A445()) == joaat("bunker_bigbit") && func_36(&uLocal_350, 5000, 0))
			{
				if (unk_0x5114FCEE2A997B95())
				{
					unk_0x18D7C8000EDEAAB4(500);
				}
				else if (unk_0xF9FC07CC13402AEF())
				{
					func_29(unk_0x3D35F9864E4640B1(), 1, 0);
					func_22(0);
					func_20(0, -1);
					func_19(0);
					func_2(&uLocal_350);
				}
			}
		}
		else if (func_3(&uLocal_350))
		{
			func_2(&uLocal_350);
		}
	}
}

void func_19(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_1780828, 17))
		{
			unk_0xCD7E92DE2BFA0B0D(&Global_1780828, 17);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_1780828, 17))
	{
		unk_0xD804ACF2A7171150(&Global_1780828, 17);
	}
}

void func_20(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 5))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 5);
			if (iParam1 != -1)
			{
				func_21(1, iParam1);
			}
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 5))
	{
		unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 5);
		if (iParam1 != -1)
		{
			func_21(0, -1);
		}
	}
}

void func_21(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_13 = iParam1;
	}
	else
	{
		Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_13 = -1;
	}
}

void func_22(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_244, 30))
		{
			func_23(func_25(1, 1), bParam0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_244), 30);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_244, 30))
	{
		func_23(func_25(1, 1), bParam0);
		unk_0xD804ACF2A7171150(&(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_244), 30);
	}
}

void func_23(int iParam0, bool bParam1)
{
	struct<5> Var0;
	
	Var0.f_0 = 857724024;
	Var0.f_2 = bParam1;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	func_24(&(Var0.f_3), &(Var0.f_4));
	if (!iParam0 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Var0, 5, iParam0);
	}
}

void func_24(var uParam0, var uParam1)
{
	*uParam0 = Global_1639417.f_9;
	*uParam1 = Global_1639417.f_10;
}

int func_25(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA7871E29B06DA901(iVar1);
		if (func_5(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x3D35F9864E4640B1() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
				}
				else if (!func_26(iVar2, 0))
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_26(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_27(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_27(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_28();
	}
	if (Global_1312833[iVar1] == 1)
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

int func_28()
{
	return Global_1312735;
}

void func_29(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xA253C0846CB05565())
		{
			unk_0xCF304E352457AD63(0);
		}
	}
	if (!unk_0x27CA09C6DFAB1E79())
	{
		iVar0 = iParam2;
		unk_0xB568492AC80B8832(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_34())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x80BA8E3CC61A8625(iParam0) && unk_0x4B0365EB2D59E6FA(iParam0))
		{
			iVar25 = unk_0xD33F4BC17EB987E5(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x27CA09C6DFAB1E79())
				{
					unk_0xE5C165A30D0F0E71(1);
				}
				else
				{
					unk_0x477513BFF4F0CEC1(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x27CA09C6DFAB1E79() && !bVar18)
					{
						unk_0xE5C165A30D0F0E71(0);
					}
					Global_2422142[iParam0 /*399*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_33(iVar25) && !unk_0x362938436B006A86(iVar25))
				{
					if (!bVar21)
					{
						unk_0x33808CAFB62A256D(iVar25, true, 0);
					}
				}
				if (!unk_0x6781178AD73D2128(iVar25))
				{
					if (!bVar20)
					{
						unk_0x1F18D3C78C8C1A11(iVar25, false);
					}
					unk_0x583AB626B1CF33F0(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x1F18D3C78C8C1A11(iVar25, false);
				}
				unk_0x0EB00C68DDFABE19(iVar25, true);
				unk_0x94EB0EFC2C10DAF6(iParam0, 0);
				unk_0xE755BEBFEFA61027(iVar25);
				unk_0x825129266C8D3F32(iVar25, 1);
				func_32();
				func_31();
				if (unk_0xDF68FB003CB64BF7())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x391103C96DB7B6E4())
				{
				}
				Global_2422142[iParam0 /*399*/].f_254 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_33(iVar25) && !unk_0x362938436B006A86(iVar25))
				{
					if (!bVar21)
					{
						unk_0x33808CAFB62A256D(iVar25, !bVar14, 0);
					}
					if (!unk_0x6781178AD73D2128(iVar25))
					{
						if (!bVar20)
						{
							unk_0x1F18D3C78C8C1A11(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0x583AB626B1CF33F0(iVar25, 1);
						}
					}
					if (func_30(Global_1641087.f_116067))
					{
						unk_0x1F18D3C78C8C1A11(iVar25, true);
					}
				}
				if (Global_1312830)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x94EB0EFC2C10DAF6(iParam0, 0);
				}
				else
				{
					unk_0x94EB0EFC2C10DAF6(iParam0, 1);
				}
				unk_0x0EB00C68DDFABE19(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x5370C33577D50923(iVar25) && !unk_0x90219307C9D2728D(iVar25, 0))
					{
						unk_0x3000ECF14A659126(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0xB568492AC80B8832(iParam0, bParam1, iVar26);
		}
	}
}

bool func_30(int iParam0)
{
	return iParam0 == 17;
}

void func_31()
{
	struct<2> Var0;
	
	Global_2434915.f_1010 = 0;
	Global_2434915.f_1011 = 0;
	Global_2434915.f_1012 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2434915.f_1017 = -1;
	Global_2434915.f_1018 = 0;
	Global_2404997.f_2592 = { Var0 };
}

void func_32()
{
	Global_2404997.f_668 = 0;
	Global_2404997.f_2633 = 0;
	Global_2404997.f_503 = 0;
	Global_2404997.f_582 = 0;
	Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_216 = 0;
}

int func_33(int iParam0)
{
	int iVar0;
	
	if (unk_0x90219307C9D2728D(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF57D21B49780A7A8(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (func_35() == 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	return Global_1312466.f_18;
}

int func_36(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_37(uParam0, bParam2, 0);
	if (unk_0x27CA09C6DFAB1E79() && !bParam2)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_37(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x27CA09C6DFAB1E79() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x898811EA80D35DE2();
			}
			else
			{
				*uParam0 = unk_0x51A193745FDE917D();
			}
		}
		else
		{
			*uParam0 = unk_0x31CD6E9F83C10233();
		}
		uParam0->f_1 = 1;
	}
}

bool func_38()
{
	return unk_0x2A3398C6222EB190(Global_1780828, 17);
}

void func_39()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x2A3398C6222EB190(Global_1780828, 6) || func_41(0))
	{
		iLocal_150 = 1;
		bVar0 = true;
	}
	if (iLocal_150)
	{
		if (bVar0)
		{
			if (!func_3(&uLocal_148))
			{
				func_37(&uLocal_148, 0, 0);
			}
			else
			{
				func_40(&uLocal_148, 0, 0);
			}
		}
		else if (!func_3(&uLocal_148))
		{
			func_37(&uLocal_148, 0, 0);
		}
		else if (func_36(&uLocal_148, 200, 0))
		{
			iLocal_150 = 0;
			func_2(&uLocal_148);
		}
		unk_0xC9621A9AD282CC14(2, 51, 1);
	}
}

void func_40(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x27CA09C6DFAB1E79() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x898811EA80D35DE2();
		}
		else
		{
			*uParam0 = unk_0x51A193745FDE917D();
		}
	}
	else
	{
		*uParam0 = unk_0x31CD6E9F83C10233();
	}
	uParam0->f_1 = 1;
}

int func_41(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x2A3398C6222EB190(Global_2313, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_42()
{
	int iVar0;
	
	if (unk_0x7832F791572D5809(joaat("fm_race_creator")) != 0)
	{
		if (Global_1641087.f_2 == 20)
		{
			if (Global_1641087.f_29 > 14)
			{
				if (unk_0x9148803485DEDF45(2, 190) || unk_0xD887E21676314450(2, 190))
				{
					Global_1641087.f_29 = 0;
				}
				else
				{
					Global_1641087.f_29 = 14;
				}
			}
			if (Global_1641087.f_29 == 12 && iLocal_151 == 14)
			{
				Global_1641087.f_29 = 14;
			}
			iLocal_151 = Global_1641087.f_29;
			iVar0 = 0;
			while (iVar0 <= 20)
			{
				if (unk_0xB3404E397FF56B3B(&(Global_17290.f_73[iVar0 /*6*/]), "FMMC_T0_M1_O28"))
				{
					StringCopy(&(Global_17290.f_73[iVar0 /*6*/]), "FMMC_T0_M1_O14", 24);
				}
				else if (unk_0xB3404E397FF56B3B(&(Global_17290.f_73[iVar0 /*6*/]), "FMMC_T0_M1_O15"))
				{
					StringCopy(&(Global_17290.f_73[iVar0 /*6*/]), "FMMC_T0_M1_O0", 24);
				}
				iVar0++;
			}
		}
	}
	else
	{
		iLocal_151 = 0;
	}
}

void func_43()
{
	int iVar0;
	
	if (unk_0x7832F791572D5809(joaat("fm_mission_controller")) > 0)
	{
		if (Global_1641087.f_2 == 6 || Global_1641087.f_2 == 5)
		{
			if (Global_1641087.f_68541 > 0)
			{
				iVar0 = 0;
				while (iVar0 <= (Global_1641087.f_68541 - 1))
				{
					if (Global_1641087.f_68546[iVar0 /*309*/].f_283 > 0)
					{
						Global_1641087.f_68546[iVar0 /*309*/].f_283 = 0;
					}
					iVar0++;
				}
			}
		}
	}
}

void func_44()
{
	if (func_45() == 62 && (((((unk_0x7832F791572D5809(joaat("fm_mission_controller")) > 0 || unk_0x7832F791572D5809(joaat("creator")) > 0) || unk_0x7832F791572D5809(joaat("fm_race_creator")) > 0) || unk_0x7832F791572D5809(joaat("fm_deathmatch_creator")) > 0) || unk_0x7832F791572D5809(joaat("fm_lts_creator")) > 0) || unk_0x7832F791572D5809(joaat("fm_capture_creator")) > 0))
	{
		unk_0xACA0BFCCF00FD7D7();
	}
}

int func_45()
{
	return Global_1312788;
}

void func_46()
{
	if ((Global_25222 == 0 && Global_25467 > 0) && !Global_1574126)
	{
		if (!iLocal_128)
		{
			unk_0x11047BA199BB9FE9(-101, 0, 0);
			iLocal_128 = 1;
		}
	}
	else if (iLocal_128)
	{
		iLocal_128 = 0;
	}
}

void func_47()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7832F791572D5809(joaat("main")) != 0)
	{
		iVar0 = func_50();
		if (iVar0 > 0)
		{
			iVar1 = func_48(iVar0);
			if (iVar1 != 0)
			{
				Global_1312370 = 1;
			}
		}
	}
}

var func_48(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 1:
			uVar0 = func_49("fm_race_creator");
			break;
		
		case 2:
			uVar0 = func_49("fm_deathmatch_creator");
			break;
		
		case 3:
			uVar0 = func_49("fm_lts_creator");
			break;
		
		case 4:
			uVar0 = func_49("fm_capture_creator");
			break;
	}
	return uVar0;
}

var func_49(char* sParam0)
{
	var uVar0;
	bool bVar1;
	
	unk_0x3A7FDE5BC12BC44B();
	while (!bVar1)
	{
		uVar0 = unk_0xCA2DD04E898609C9();
		if (unk_0xB3404E397FF56B3B(unk_0x4B4C7C487385F4F9(uVar0), sParam0))
		{
			bVar1 = true;
		}
	}
	return uVar0;
}

int func_50()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x7832F791572D5809(joaat("fm_race_creator")) != 0)
	{
		iVar0 = 1;
	}
	else if (unk_0x7832F791572D5809(joaat("fm_deathmatch_creator")) != 0)
	{
		iVar0 = 2;
	}
	else if (unk_0x7832F791572D5809(joaat("fm_lts_creator")) != 0)
	{
		iVar0 = 3;
	}
	else if (unk_0x7832F791572D5809(joaat("fm_capture_creator")) != 0)
	{
		iVar0 = 4;
	}
	return iVar0;
}

void func_51()
{
	if (unk_0x7832F791572D5809(joaat("fm_race_creator")) != 0)
	{
		switch (iLocal_103)
		{
			case 0:
				if (unk_0x2A3398C6222EB190(Global_1641087.f_46382, 15))
				{
					if (iLocal_102 == -1)
					{
						if (Global_1641087.f_46380 == 1)
						{
							unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 24);
							unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 26);
							unk_0xCD7E92DE2BFA0B0D(&(Global_1641087.f_22), 25);
							Global_1641087.f_47037 = 1;
							unk_0xD804ACF2A7171150(&(Global_1641087.f_46400[15]), 0);
							unk_0xCD7E92DE2BFA0B0D(&(Global_1641087.f_46400[15]), 1);
						}
						if (Global_1641087.f_46380 == 2)
						{
							unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 25);
							unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 26);
							unk_0xCD7E92DE2BFA0B0D(&(Global_1641087.f_22), 24);
							Global_1641087.f_47037 = 2;
							unk_0xD804ACF2A7171150(&(Global_1641087.f_46400[15]), 0);
							unk_0xCD7E92DE2BFA0B0D(&(Global_1641087.f_46400[15]), 2);
						}
						iLocal_102 = Global_1641087.f_46400[15];
					}
					if (unk_0xB3404E397FF56B3B(&(Global_17290.f_1), "FMMCC_RTITLE"))
					{
						iLocal_103 = 1;
					}
				}
				break;
			
			case 1:
				if (Global_1641087.f_46400[15] != iLocal_102)
				{
					Global_1641087.f_46400[15] = iLocal_102;
					if (unk_0x2A3398C6222EB190(Global_1641087.f_46400[15], 0))
					{
						unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 24);
						unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 25);
						unk_0xCD7E92DE2BFA0B0D(&(Global_1641087.f_22), 26);
						Global_1641087.f_47037 = 0;
						Global_1641087.f_46380 = 0;
					}
					else if (unk_0x2A3398C6222EB190(Global_1641087.f_46400[15], 1))
					{
						unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 24);
						unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 26);
						unk_0xCD7E92DE2BFA0B0D(&(Global_1641087.f_22), 25);
						Global_1641087.f_47037 = 1;
						Global_1641087.f_46380 = 1;
					}
					else if (unk_0x2A3398C6222EB190(Global_1641087.f_46400[15], 2))
					{
						unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 25);
						unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 26);
						unk_0xCD7E92DE2BFA0B0D(&(Global_1641087.f_22), 24);
						Global_1641087.f_47037 = 2;
						Global_1641087.f_46380 = 2;
					}
				}
				if (!unk_0xB3404E397FF56B3B(&(Global_17290.f_1), "FMMCC_RTITLE"))
				{
					iLocal_103 = 2;
				}
				break;
			
			case 2:
				if (iLocal_102 != Global_1641087.f_46400[15])
				{
					iLocal_102 = Global_1641087.f_46400[15];
				}
				if (unk_0xB3404E397FF56B3B(&(Global_17290.f_1), "FMMCC_RTITLE"))
				{
					iLocal_103 = 1;
				}
				break;
		}
	}
	else
	{
		iLocal_102 = -1;
		iLocal_103 = 0;
	}
}

void func_52()
{
	if (func_58(11) || func_58(1))
	{
		if (func_57())
		{
			func_54();
			func_53(0);
		}
	}
}

void func_53(int iParam0)
{
	Global_2457275 = iParam0;
}

void func_54()
{
	if (func_56() == 0)
	{
		if (unk_0xB3B0E7D7665CC157() == 0 || unk_0xB3B0E7D7665CC157() == 1)
		{
			unk_0x095D3ADD28F96882(0);
		}
		func_55(1);
	}
	else if (func_56() == 1)
	{
		if (unk_0xB3B0E7D7665CC157() == 1 || unk_0xB3B0E7D7665CC157() == 0)
		{
			unk_0x095D3ADD28F96882(1);
		}
		func_55(1);
	}
	else if (func_56() == 2)
	{
		if (unk_0xB3B0E7D7665CC157() == 2 || unk_0xB3B0E7D7665CC157() == 3)
		{
			unk_0x095D3ADD28F96882(2);
		}
		func_55(1);
	}
	else if (func_56() == 3)
	{
		if (unk_0xB3B0E7D7665CC157() == 3 || unk_0xB3B0E7D7665CC157() == 2)
		{
			unk_0x095D3ADD28F96882(3);
		}
		func_55(1);
	}
}

void func_55(int iParam0)
{
	Global_2457301 = iParam0;
}

int func_56()
{
	return Global_2457300;
}

bool func_57()
{
	return Global_2457275;
}

bool func_58(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x2A3398C6222EB190(Global_1312752[iVar0], iVar1);
}

void func_59()
{
	if ((((unk_0x27CA09C6DFAB1E79() || func_60() == -1) || func_60() == 0) || func_45() == 4) && (unk_0x7832F791572D5809(joaat("director_mode")) > 0 || Global_103385))
	{
		unk_0x477513BFF4F0CEC1(unk_0x0031992CA618A445(), true, 0);
		unk_0xF2D7D8B46FCE6118(unk_0x0031992CA618A445(), 0);
		unk_0xACA0BFCCF00FD7D7();
	}
}

int func_60()
{
	return Global_25222;
}

void func_61()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
		switch (iVar1)
		{
			case 171:
				func_62(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_62(int iParam0)
{
	int iVar0;
	
	unk_0x4AE700F97F1781DC(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 453269032:
			if (unk_0x20551D6D924ED04B())
			{
				func_67(iParam0);
			}
			break;
		
		case 1956759263:
			func_63(iParam0);
			break;
	}
}

void func_63(int iParam0)
{
	struct<8> Var0;
	
	Var0.f_2.f_1 = -1;
	if (unk_0x4AE700F97F1781DC(1, uParam0, &Var0, 8))
	{
		if (Var0.f_7 && func_66(Var0.f_5, 0))
		{
			if (Var0.f_1 == unk_0x3D35F9864E4640B1())
			{
				if (func_64(unk_0x3D35F9864E4640B1(), 0))
				{
					iLocal_32 = 1;
					iLocal_33 = Var0.f_5;
				}
			}
		}
	}
}

bool func_64(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_65(iParam0))
		{
			return 0;
		}
	}
	return Global_1623799[iParam0 /*488*/].f_11 != func_6();
}

int func_65(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_6())
		{
			return Global_1623799[iParam0 /*488*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_66(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			return iParam1;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

void func_67(int iParam0)
{
	struct<10> Var0;
	int iVar10;
	struct<11> Var11;
	int iVar22;
	int iVar23;
	
	if (unk_0x4AE700F97F1781DC(1, uParam0, &Var0, 10))
	{
		if (func_146(Var0.f_7) || func_145(Var0.f_7))
		{
			if (Var0.f_4 == unk_0x3D35F9864E4640B1())
			{
				func_144(&uLocal_13, &iLocal_12, 1, 5000);
				func_144(&uLocal_16, &iLocal_15, 2, 30000);
				func_144(&uLocal_19, &iLocal_18, 3, 60000);
				func_144(&uLocal_22, &iLocal_21, 5, 300000);
			}
		}
		else if (func_143(Var0.f_7))
		{
			if (Var0.f_5 == unk_0x3D35F9864E4640B1())
			{
				if (Var0.f_9 == 0 || Var0.f_9 == 97)
				{
					iLocal_26 = 1;
				}
			}
		}
		else
		{
			if (func_141(unk_0x3D35F9864E4640B1()) != 188)
			{
				return;
			}
			if (!func_140(Var0.f_9))
			{
				return;
			}
			if (func_139(Var0.f_9))
			{
				return;
			}
			if (!func_128(Var0.f_2, Var0.f_3, Var0.f_9, Var0.f_6, Var0.f_7, func_138()))
			{
				return;
			}
			if (Var0.f_5 == unk_0x3D35F9864E4640B1() && !unk_0x2A3398C6222EB190(Global_1788584, 6))
			{
				if (!func_127(8))
				{
					return;
				}
			}
			if (Var0.f_4 == unk_0x3D35F9864E4640B1())
			{
				if (func_146(Var0.f_7) || func_145(Var0.f_7))
				{
					if (func_124(unk_0x3D35F9864E4640B1(), 1) && !func_123(unk_0x3D35F9864E4640B1()))
					{
						func_122(100);
					}
					else if (!func_123(func_121()))
					{
						func_122(98);
					}
				}
				if (func_146(Var0.f_7))
				{
					if (func_120() && func_123(unk_0x3D35F9864E4640B1()))
					{
						if (!func_118(func_121()))
						{
							func_117(9);
						}
					}
				}
				else if (!func_145(Var0.f_7))
				{
				}
			}
			if (Var0.f_4 == unk_0x3D35F9864E4640B1())
			{
				Global_2488624.f_25++;
			}
			if (func_116(unk_0x3D35F9864E4640B1(), Var0.f_5))
			{
				if (func_138())
				{
					if (!func_146(Var0.f_7) && !func_145(Var0.f_7))
					{
						iVar10 = 0;
						while (iVar10 < 4)
						{
							if (Global_2488624.f_20[iVar10] == 0)
							{
								Global_2488624.f_20[iVar10] = Var0.f_9;
							}
							else
							{
								iVar10++;
							}
						}
						Global_2488624.f_19 = func_115();
					}
				}
			}
			Var11.f_9 = 1065353216;
			Var11.f_10 = 1065353216;
			Var11.f_0 = Var0.f_7;
			Var11.f_1 = Var0.f_6;
			Var11.f_2 = func_114(Var0.f_5, Var0.f_4);
			Var11.f_3 = Var0.f_5;
			Var11.f_4 = Var0.f_4;
			Var11.f_5 = Var0.f_9;
			if (Var0.f_5 == unk_0x3D35F9864E4640B1())
			{
				Var11.f_6 = (Var0.f_2 - Var0.f_3);
			}
			else
			{
				Var11.f_6 = 0;
			}
			if (func_138())
			{
				iVar22 = func_115();
				if (iVar22 == 2000)
				{
					iVar22 = Global_2488624.f_19;
				}
				if (func_110(iVar22))
				{
					Var11.f_7 = func_108(iVar22, Global_2488624.f_25);
					func_107();
					if (Global_262145.f_18115 && Var0.f_5 != unk_0x3D35F9864E4640B1())
					{
						Var11.f_7 = 0;
					}
					else if (Var0.f_5 != unk_0x3D35F9864E4640B1() && Var11.f_7 > 0)
					{
						func_102(Var11.f_7);
					}
				}
			}
			else
			{
				func_107();
			}
			if (Var0.f_5 == unk_0x3D35F9864E4640B1())
			{
				iVar23 = (Var11.f_6 + Var11.f_7);
				if ((func_114(Var0.f_5, Var0.f_4) && !func_146(Var0.f_7)) && !func_145(Var0.f_7))
				{
					func_97(iVar23);
				}
				func_96(Var0.f_9);
			}
			func_68(&Var11);
		}
	}
}

void func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	
	if (uParam0->f_2)
	{
		if (func_143(*uParam0))
		{
		}
		else if (func_65(unk_0x3D35F9864E4640B1()) && uParam0->f_3 == unk_0x3D35F9864E4640B1())
		{
			if ((func_95(*uParam0) || func_94(*uParam0)) || func_93(*uParam0))
			{
				iVar0 = uParam0->f_6;
				iVar2 = 0;
				while (iVar2 < unk_0x32C41AA379415932())
				{
					iVar3 = iVar2;
					if (unk_0xA3C5F17FDDF2701D(iVar3))
					{
						iVar4 = unk_0x3F3ED1FF7CF1C641(iVar3);
						if (uParam0->f_4 == iVar4)
						{
							if (func_89(iVar4))
							{
								func_78(iVar4, 1, -81613951);
							}
						}
					}
					iVar2++;
				}
			}
		}
	}
	else if (uParam0->f_4 == unk_0x3D35F9864E4640B1())
	{
		if (func_146(*uParam0))
		{
			iVar0 = func_77();
			iVar1 = func_76();
		}
		else if (func_145(*uParam0))
		{
			iVar0 = func_75();
			iVar1 = func_74();
		}
	}
	if (uParam0->f_7 > 0)
	{
		iVar0 = (iVar0 + uParam0->f_7);
	}
	if (uParam0->f_8 > 0)
	{
		iVar1 = (iVar1 + uParam0->f_8);
	}
	Var5 = -1;
	Var5.f_1 = -1;
	Var5.f_0 = iVar0;
	Var5.f_1 = iVar1;
	func_73(Var5);
	func_69(uParam0->f_4, uParam0->f_3, *uParam0, uParam0->f_1, uParam0->f_5, iVar0, iVar1);
}

void func_69(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		if ((iParam1 != func_6() && func_64(iParam0, 1)) && !func_114(iParam0, iParam1))
		{
			unk_0xFB1C2650F7F692B1(func_71(func_72(iParam0)), func_70(func_72(iParam0)), Global_1623799[iParam1 /*488*/].f_446, Global_1623799[iParam1 /*488*/].f_447, uParam2, iParam5, iParam6, uParam3, uParam4, func_141(iParam1) == 178);
		}
	}
}

int func_70(int iParam0)
{
	if (iParam0 == func_6())
	{
		return -1;
	}
	return Global_1623799[iParam0 /*488*/].f_11.f_7[1];
}

int func_71(int iParam0)
{
	if (iParam0 == func_6())
	{
		return -1;
	}
	return Global_1623799[iParam0 /*488*/].f_11.f_7[0];
}

int func_72(int iParam0)
{
	if (iParam0 != func_6())
	{
		return Global_1623799[iParam0 /*488*/].f_11;
	}
	return func_6();
}

void func_73(struct<2> Param0)
{
	if (Param0.f_0 > 0 || Param0.f_1 > 0)
	{
		if (Global_2488624.f_26 < Global_2488624.f_27)
		{
			Global_2488624.f_27[Global_2488624.f_26 /*2*/] = { Param0 };
			Global_2488624.f_26++;
		}
	}
}

var func_74()
{
	return Global_262145.f_17979;
}

var func_75()
{
	return Global_262145.f_17978;
}

var func_76()
{
	return Global_262145.f_17977;
}

var func_77()
{
	return Global_262145.f_17976;
}

void func_78(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_82(iParam0);
	func_79(iParam0, uVar0, iParam1, iParam2);
}

void func_79(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1095396841;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_81(iParam0);
	func_24(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_6())
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			unk_0xBD257D33BCFA529A(1, &Var0, 8, func_80(iParam0));
		}
	}
}

var func_80(int iParam0)
{
	var uVar0;
	
	unk_0xCD7E92DE2BFA0B0D(&uVar0, iParam0);
	return uVar0;
}

var func_81(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_430;
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_88();
	iVar0 = func_85(iParam0, iVar0);
	iVar1 = Global_1623799[func_121() /*488*/].f_11.f_369;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14075));
	if (iVar0 < func_84())
	{
		iVar0 = func_84();
	}
	if (iVar0 > func_83())
	{
		iVar0 = func_83();
	}
	return iVar0;
}

int func_83()
{
	return Global_262145.f_14076;
}

int func_84()
{
	return Global_262145.f_15251;
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_87(iParam0) * func_86());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_86()
{
	return Global_262145.f_15250;
}

int func_87(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_27;
}

var func_88()
{
	return Global_262145.f_11570;
}

int func_89(int iParam0)
{
	if (unk_0x80BA8E3CC61A8625(iParam0))
	{
		if (iParam0 != unk_0x3D35F9864E4640B1())
		{
			if (func_91(iParam0, unk_0x3D35F9864E4640B1(), 0))
			{
				if (!func_90(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_90(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_11.f_4, iParam1);
}

int func_91(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_6())
	{
		if (!bParam2)
		{
			if (func_92(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1623799[iParam0 /*488*/].f_11 != func_6())
		{
			return iParam1 == Global_1623799[iParam0 /*488*/].f_11;
		}
	}
	return 0;
}

int func_92(int iParam0, int iParam1)
{
	if (iParam1 != func_6())
	{
		if (iParam0 != func_6())
		{
			if (Global_1623799[iParam0 /*488*/].f_11 != func_6())
			{
				if (Global_1623799[iParam0 /*488*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_95(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

void func_96(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0 || iParam0 == 97)
	{
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_27[iVar0] == 0)
		{
			iLocal_27[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

void func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = func_100();
	iVar0 = (iVar0 + iParam0);
	func_98(5309, iVar0, -1, 1, 0);
}

void func_98(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_99(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
}

int func_99(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_28();
		if (iVar1 > -1)
		{
			Global_2511680 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2511680 = 1;
		}
	}
	return iVar0;
}

int func_100()
{
	return func_101(5309, -1, 0);
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2511967[iParam0 /*3*/][func_99(iParam1)];
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_102(var uParam0)
{
	if (!func_65(unk_0x3D35F9864E4640B1()))
	{
		func_103("ASSOC_COL_DEL", uParam0, 1);
	}
}

int func_103(char* sParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	unk_0x96577CAA1D1E72DB(uParam1);
	iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	func_104(3, sParam0, 1, "", uParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_104(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_603() || !unk_0xF4F91CD09D59F42E()) || !func_26(unk_0x3D35F9864E4640B1(), 0))
	{
		return;
	}
	iVar0 = func_105(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1775874.f_5[iVar0 /*53*/] = iParam0;
		Global_1775874.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1775874.f_5[iVar0 /*53*/].f_2[0] = uParam4;
		Global_1775874.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1775874.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1775874.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1775874.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_105(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1775874 - 1))
	{
		if (iParam0 > Global_1775874.f_5[iVar0 /*53*/].f_1)
		{
			func_106(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1775874++;
	if (Global_1775874 > 5)
	{
		Global_1775874 = 5;
		return Global_1775874;
	}
	return (Global_1775874 - 1);
}

void func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1775874.f_5[iVar0 /*53*/] = { Global_1775874.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2488624.f_20[iVar0] = 0;
		iVar0++;
	}
	Global_2488624.f_25 = 0;
	Global_2488624.f_19 = 2000;
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_291 = 2000;
}

int func_108(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_109(iParam0);
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	switch (iParam0)
	{
		case 2001:
			iVar1 = Global_262145.f_18117;
			break;
		
		case 2002:
			iVar1 = Global_262145.f_18118;
			break;
		
		case 2003:
			iVar1 = Global_262145.f_18119;
			break;
		
		case 2004:
			iVar1 = Global_262145.f_18120;
			break;
		
		case 2005:
			iVar1 = Global_262145.f_18121;
			break;
		
		case 2006:
			iVar1 = Global_262145.f_18122;
			break;
		
		case 2007:
			iVar1 = Global_262145.f_18123;
			break;
		
		case 2008:
			iVar1 = Global_262145.f_18124;
			break;
		
		case 2009:
			iVar1 = Global_262145.f_18125;
			break;
		
		case 2010:
			iVar1 = Global_262145.f_18126;
			break;
	}
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	return (iVar0 * iVar1);
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 2001:
			return 4;
		
		case 2002:
			return 4;
		
		case 2003:
			return 4;
		
		case 2004:
			return 4;
		
		case 2005:
			return 3;
		
		case 2006:
			return 3;
		
		case 2007:
			return 3;
		
		case 2008:
			return 3;
		
		case 2009:
			return 2;
		
		case 2010:
			return 2;
		
		default:
	}
	return 0;
}

bool func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2488624.f_20[iVar1] != 0 && func_111(iParam0, Global_2488624.f_20[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0 == func_109(iParam0);
}

int func_111(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	
	Var1.f_1 = 4;
	func_112(&Var1, iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Var1.f_1[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_112(var uParam0, int iParam1)
{
	*uParam0 = func_109(iParam1);
	uParam0->f_6 = func_113(iParam1);
	switch (iParam1)
	{
		case 2001:
			uParam0->f_1[0] = 28;
			uParam0->f_1[1] = 23;
			uParam0->f_1[2] = 90;
			uParam0->f_1[3] = 55;
			break;
		
		case 2002:
			uParam0->f_1[0] = 76;
			uParam0->f_1[1] = 4;
			uParam0->f_1[2] = 19;
			uParam0->f_1[3] = 50;
			break;
		
		case 2003:
			uParam0->f_1[0] = 82;
			uParam0->f_1[1] = 42;
			uParam0->f_1[2] = 65;
			uParam0->f_1[3] = 87;
			break;
		
		case 2004:
			uParam0->f_1[0] = 59;
			uParam0->f_1[1] = 48;
			uParam0->f_1[2] = 96;
			uParam0->f_1[3] = 52;
			break;
		
		case 2005:
			uParam0->f_1[0] = 73;
			uParam0->f_1[1] = 67;
			uParam0->f_1[2] = 15;
			uParam0->f_1[3] = 0;
			break;
		
		case 2006:
			uParam0->f_1[0] = 93;
			uParam0->f_1[1] = 34;
			uParam0->f_1[2] = 32;
			uParam0->f_1[3] = 0;
			break;
		
		case 2007:
			uParam0->f_1[0] = 2;
			uParam0->f_1[1] = 12;
			uParam0->f_1[2] = 18;
			uParam0->f_1[3] = 0;
			break;
		
		case 2008:
			uParam0->f_1[0] = 70;
			uParam0->f_1[1] = 27;
			uParam0->f_1[2] = 7;
			uParam0->f_1[3] = 0;
			break;
		
		case 2009:
			uParam0->f_1[0] = 61;
			uParam0->f_1[1] = 80;
			uParam0->f_1[2] = 0;
			uParam0->f_1[3] = 0;
			break;
		
		case 2010:
			uParam0->f_1[0] = 43;
			uParam0->f_1[1] = 38;
			uParam0->f_1[2] = 0;
			uParam0->f_1[3] = 0;
			break;
	}
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 2001:
			return 100000;
		
		case 2002:
			return 200000;
		
		case 2003:
			return 300000;
		
		case 2004:
			return 400000;
		
		case 2005:
			return 500000;
		
		case 2006:
			return 600000;
		
		case 2007:
			return 700000;
		
		case 2008:
			return 800000;
		
		case 2009:
			return 900000;
		
		case 2010:
			return 1000000;
		
		default:
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_6() && iParam1 != func_6())
	{
		iVar0 = func_72(iParam0);
		if (iVar0 != func_6())
		{
			return iVar0 == func_72(iParam1);
		}
	}
	return 0;
}

int func_115()
{
	int iVar0;
	
	if (func_65(unk_0x3D35F9864E4640B1()))
	{
		return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_291;
	}
	else
	{
		iVar0 = func_121();
		if (iVar0 != func_6())
		{
			return Global_1623799[iVar0 /*488*/].f_11.f_291;
		}
	}
	return 2000;
}

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_72(iParam0);
	if (!iVar0 == func_6())
	{
		if (iVar0 == func_72(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4867.f_15[iVar0]), iVar1);
}

bool func_118(int iParam0)
{
	return func_119(iParam0) != 0;
}

int func_119(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 0;
	}
	return Global_1593076[iParam0 /*647*/].f_259.f_105;
}

bool func_120()
{
	return func_65(unk_0x3D35F9864E4640B1());
}

int func_121()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11;
}

void func_122(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4867.f_7[iVar0]), iVar1);
}

bool func_123(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 26);
}

int func_124(int iParam0, bool bParam1)
{
	return func_125(iParam0, bParam1, 1);
}

int func_125(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_126(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1623799[iParam0 /*488*/].f_11;
	if (iVar0 != func_6() && Global_1623799[iVar0 /*488*/].f_11.f_370 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0, int iParam1)
{
	if (iParam0 != func_6())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_6())
		{
			if (Global_1623799[iParam0 /*488*/].f_11 == iParam0 && Global_1623799[iParam0 /*488*/].f_11.f_370 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	if (iParam0 == 8)
	{
		if (func_3(&(Global_2488853.f_144)) && !func_36(&(Global_2488853.f_144), Global_2489044, 0))
		{
			return 0;
		}
	}
	else if (func_3(&(Global_2488853.f_146)) && !func_36(&(Global_2488853.f_146), Global_262145.f_17903, 1))
	{
		return 0;
	}
	return 1;
}

int func_128(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_131(iParam3, iParam4, 0, bParam5);
	iVar1 = func_129(iParam3);
	iVar2 = (iVar0 - iVar1);
	iVar3 = (iParam0 - iParam1);
	if (iParam0 > iVar0)
	{
		return 0;
	}
	if (iParam1 > iVar1)
	{
		return 0;
	}
	if (iVar2 > iVar3)
	{
		return 0;
	}
	return 1;
}

int func_129(int iParam0)
{
	switch (func_130(iParam0))
	{
		case 3:
			return Global_262145.f_18250;
		
		case 2:
			return Global_262145.f_18251;
		
		case 1:
			return Global_262145.f_18252;
		
		default:
	}
	return 0;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case joaat("prototipo"):
		case joaat("tyrus"):
		case joaat("t20"):
		case joaat("sheava"):
		case joaat("osiris"):
		case joaat("fmj"):
		case joaat("reaper"):
		case joaat("pfister811"):
		case joaat("mamba"):
		case joaat("btype3"):
		case joaat("feltzer3"):
		case joaat("ztype"):
			return 3;
		
		case joaat("tropos"):
		case joaat("entityxf"):
		case joaat("sultanrs"):
		case joaat("zentorno"):
		case joaat("omnis"):
		case joaat("coquette3"):
		case joaat("seven70"):
		case joaat("verlierer2"):
		case joaat("coquette2"):
		case joaat("cheetah"):
			return 2;
		
		case joaat("bestiagts"):
		case joaat("nightshade"):
		case joaat("banshee2"):
		case joaat("sabregt2"):
		case joaat("turismor"):
		case joaat("tampa"):
		case joaat("massacro"):
		case joaat("jester"):
		case joaat("alpha"):
		case joaat("feltzer2"):
			return 1;
		
		default:
	}
	return 1;
}

int func_131(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_137(iParam0))
	{
		iVar0 = func_130(iParam0);
		iVar1 = 0;
		iVar2 = 0;
		if (func_93(iParam1) && !bParam3)
		{
			iVar2 = func_135(func_136(iVar0));
			iVar1 = func_134(iVar0, bParam3);
		}
		else if (func_94(iParam1) || bParam3)
		{
			iVar2 = func_133(func_136(iVar0));
			iVar1 = func_132(iVar0, bParam3);
		}
		else
		{
			iVar2 = Global_262145.f_18004;
			iVar1 = func_136(iVar0);
		}
		if (bParam2)
		{
			iVar1 = iVar2;
		}
		return iVar1;
	}
	return 0;
}

int func_132(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x11E019C8F43ACC8A((IntToFloat(func_136(iParam0)) * Global_262145.f_18008));
	iVar1 = 0;
	if (!bParam1)
	{
		iVar1 = func_133(func_136(iParam0));
	}
	return (iVar0 + iVar1);
}

int func_133(int iParam0)
{
	return unk_0x11E019C8F43ACC8A((IntToFloat(iParam0) * Global_262145.f_18006));
}

int func_134(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x11E019C8F43ACC8A((IntToFloat(func_136(iParam0)) * Global_262145.f_18007));
	iVar1 = 0;
	if (!bParam1)
	{
		iVar1 = func_135(func_136(iParam0));
	}
	return (iVar0 + iVar1);
}

int func_135(int iParam0)
{
	return unk_0x11E019C8F43ACC8A((IntToFloat(iParam0) * Global_262145.f_18005));
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return Global_262145.f_18001;
		
		case 2:
			return Global_262145.f_18002;
		
		case 1:
			return Global_262145.f_18003;
		
		default:
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6DFDB26E7DC403AF(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x13ED5971E86205D9(iParam0);
	if ((((((((((((((unk_0x9C4740BA7F0AF553(iParam0) || unk_0xF9CDF5CA6A1D6756(iParam0)) || unk_0x1DBFCF939B3B47D0(iParam0)) || unk_0x1B9B48622A4D3FC0(iParam0)) || unk_0xF9CDF5CA6A1D6756(iParam0)) || unk_0xA31F3B8AEDBCEB1E(iParam0)) || unk_0x22237535B3A68DF9(iParam0)) || iVar0 == 2) || iVar0 == 12) || iVar0 == 18) || iVar0 == 19) || iVar0 == 11) || iVar0 == 20) || iVar0 == 10) || iVar0 == 17)
	{
		return 0;
	}
	return 1;
}

int func_138()
{
	if (func_115() != 2000 || Global_2488624.f_19 != 2000)
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_27[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_64(unk_0x3D35F9864E4640B1(), 1))
	{
		return 0;
	}
	iVar1 = func_121();
	if (iVar1 == func_6())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1623799[iVar1 /*488*/].f_11.f_178[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_141(int iParam0)
{
	if (func_142(iParam0, 0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_32;
	}
	return -1;
}

int func_142(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_32 != -1 || (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			return 1;
		
		default:
	}
	return 0;
}

void func_144(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_3(uParam0))
	{
		func_37(uParam0, 0, 0);
		*iParam1++;
	}
	else if (func_36(uParam0, iParam3, 0))
	{
		func_40(uParam0, 0, 0);
		*iParam1 = 1;
	}
	else
	{
		*iParam1++;
	}
	if (*iParam1 > iParam2)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_1788584, 7);
		unk_0xCD7E92DE2BFA0B0D(&Global_1788584, 8);
		if (!func_3(&uLocal_24))
		{
			func_37(&uLocal_24, 0, 0);
		}
		else
		{
			func_40(&uLocal_24, 0, 0);
		}
	}
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
			return 1;
		
		default:
	}
	return 0;
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 1;
		
		default:
	}
	return 0;
}

void func_147()
{
	var uVar0[2];
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	if (func_153())
	{
		return;
	}
	if (unk_0xF9FC07CC13402AEF() && !func_152())
	{
		if (func_151(unk_0x3D35F9864E4640B1()))
		{
			if (unk_0x3D35F9864E4640B1() == Global_1592923)
			{
				unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &uVar0);
				if (((unk_0x76B3C79DE564AFC6(uVar0[0]) && unk_0x036E1D5EA494CEB2(uVar0[0])) && unk_0x76B3C79DE564AFC6(uVar0[1])) && unk_0x036E1D5EA494CEB2(uVar0[1]))
				{
					if (func_150(uVar0[0]) && func_150(uVar0[1]))
					{
						if (uVar0[0] != uVar0[1])
						{
							if (func_148(uVar0[0]) != func_148(uVar0[1]))
							{
								if (!iLocal_352)
								{
									unk_0xC9621A9AD282CC14(0, 23, 1);
									bLocal_353 = true;
								}
							}
							if (unk_0xB3404E397FF56B3B(unk_0xCF9C6545E179C4AD(uVar0[0]), unk_0xCF9C6545E179C4AD(uVar0[1])) || func_148(uVar0[0]) == func_148(uVar0[1]))
							{
								if (!bLocal_353)
								{
									unk_0xC9621A9AD282CC14(0, 23, 1);
									iLocal_352 = 1;
								}
							}
						}
					}
				}
				if (unk_0x76B3C79DE564AFC6(uVar0[0]) && unk_0x036E1D5EA494CEB2(uVar0[0]))
				{
					if (func_150(uVar0[0]))
					{
						if (func_148(uVar0[0]) != unk_0x3D35F9864E4640B1())
						{
							if (!iLocal_352)
							{
								unk_0xC9621A9AD282CC14(0, 23, 1);
								iLocal_354 = 1;
							}
						}
					}
				}
				if ((iLocal_354 && !bLocal_353) && !iLocal_352)
				{
					if (unk_0x76B3C79DE564AFC6(uVar0[0]) && unk_0x036E1D5EA494CEB2(uVar0[0]))
					{
						if (func_148(uVar0[0]) != unk_0x3D35F9864E4640B1())
						{
							if (unk_0x3B077EBCBD1ABF1F(uVar0[0]))
							{
								if (!unk_0x1B45925959DE7F9F(uVar0[0]))
								{
									if (!unk_0x7A6C051038031EFA(uVar0[0], 0) && unk_0xB3404E397FF56B3B(unk_0x82C5E5956536E83D(uVar0[0], &uVar3), "freemode"))
									{
										unk_0x1581691D748490F3(uVar0[0], 0, 1);
										unk_0xE9F8539D5AF6B052(&(uVar0[0]));
										iLocal_354 = 0;
									}
								}
							}
							else
							{
								unk_0xDE78E0A451F0CC44(uVar0[0]);
							}
						}
					}
				}
				if (bLocal_353 && !iLocal_352)
				{
					if (unk_0x76B3C79DE564AFC6(uVar0[0]) && unk_0x036E1D5EA494CEB2(uVar0[0]))
					{
						if (func_148(uVar0[0]) != unk_0x3D35F9864E4640B1())
						{
							if (unk_0x3B077EBCBD1ABF1F(uVar0[0]))
							{
								if (!unk_0x1B45925959DE7F9F(uVar0[0]))
								{
									if (!unk_0x7A6C051038031EFA(uVar0[0], 0) && unk_0xB3404E397FF56B3B(unk_0x82C5E5956536E83D(uVar0[0], &uVar4), "freemode"))
									{
										unk_0x1581691D748490F3(uVar0[0], 0, 1);
										unk_0xE9F8539D5AF6B052(&(uVar0[0]));
										bLocal_353 = false;
									}
								}
							}
							else
							{
								unk_0xDE78E0A451F0CC44(uVar0[0]);
							}
						}
					}
					if (unk_0x76B3C79DE564AFC6(uVar0[1]) && unk_0x036E1D5EA494CEB2(uVar0[1]))
					{
						if (func_148(uVar0[1]) != unk_0x3D35F9864E4640B1())
						{
							if (unk_0x3B077EBCBD1ABF1F(uVar0[1]))
							{
								if (!unk_0x1B45925959DE7F9F(uVar0[1]))
								{
									if (!unk_0x7A6C051038031EFA(uVar0[1], 0) && unk_0xB3404E397FF56B3B(unk_0x82C5E5956536E83D(uVar0[1], &uVar5), "freemode"))
									{
										unk_0x1581691D748490F3(uVar0[1], 0, 1);
										unk_0xE9F8539D5AF6B052(&(uVar0[1]));
										bLocal_353 = false;
									}
								}
							}
							else
							{
								unk_0xDE78E0A451F0CC44(uVar0[1]);
							}
						}
					}
				}
				if (iLocal_352 && !bLocal_353)
				{
					if (unk_0x76B3C79DE564AFC6(uVar0[0]) && unk_0x036E1D5EA494CEB2(uVar0[0]))
					{
						if (unk_0x3B077EBCBD1ABF1F(uVar0[0]))
						{
							if (!unk_0x1B45925959DE7F9F(uVar0[0]))
							{
								if (!unk_0x7A6C051038031EFA(uVar0[0], 0) && unk_0xB3404E397FF56B3B(unk_0x82C5E5956536E83D(uVar0[0], &uVar6), "freemode"))
								{
									unk_0x1581691D748490F3(uVar0[0], 0, 1);
									unk_0xE9F8539D5AF6B052(&(uVar0[0]));
								}
							}
						}
						else
						{
							unk_0xDE78E0A451F0CC44(uVar0[0]);
						}
					}
					if (unk_0x76B3C79DE564AFC6(uVar0[1]) && unk_0x036E1D5EA494CEB2(uVar0[1]))
					{
						if (unk_0x3B077EBCBD1ABF1F(uVar0[1]))
						{
							if (!unk_0x1B45925959DE7F9F(uVar0[1]))
							{
								if (!unk_0x7A6C051038031EFA(uVar0[1], 0) && unk_0xB3404E397FF56B3B(unk_0x82C5E5956536E83D(uVar0[1], &uVar7), "freemode"))
								{
									unk_0x1581691D748490F3(uVar0[1], 0, 1);
									unk_0xE9F8539D5AF6B052(&(uVar0[1]));
								}
							}
						}
						else
						{
							unk_0xDE78E0A451F0CC44(uVar0[1]);
						}
					}
					if (!unk_0x76B3C79DE564AFC6(uVar0[0]) && !unk_0x76B3C79DE564AFC6(uVar0[1]))
					{
						if (iLocal_352)
						{
							iLocal_352 = 0;
						}
					}
				}
			}
		}
	}
}

int func_148(int iParam0)
{
	int iVar0;
	
	if (!func_9(iParam0, 1))
	{
		return func_6();
	}
	iVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "Player_Vehicle");
	return func_149(iVar0, 0);
}

int func_149(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = unk_0xA7871E29B06DA901(iVar1);
		if (func_5(iVar0, 0, 1) || (iParam1 && unk_0x3BC26C16BAEB8818(iVar0)))
		{
			if (iParam0 == unk_0x09A791318A38B63D(iVar0))
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return func_6();
}

int func_150(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0) && !unk_0x7A6C051038031EFA(iParam0, 0))
	{
		switch (unk_0xE9559A12052415BE(iParam0))
		{
			case joaat("hauler2"):
			case joaat("phantom3"):
				return 0;
				break;
			}
	}
	return 1;
}

int func_151(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1 && Global_2422142[iParam0 /*399*/].f_318.f_4 != func_6())
			{
				return func_17(Global_2422142[iParam0 /*399*/].f_318.f_1) == 5;
			}
		}
	}
	return 0;
}

bool func_152()
{
	return Global_1780828.f_22;
}

bool func_153()
{
	return Global_92814.f_310 > 0;
}

void func_154()
{
	int iVar0;
	
	if (unk_0x0CF4609684193305() && func_157(unk_0x3D35F9864E4640B1()))
	{
		if (func_5(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				if (func_155(iVar0))
				{
					if (unk_0xF57D21B49780A7A8(unk_0x0031992CA618A445(), -828834893) != 1 && unk_0xF57D21B49780A7A8(unk_0x0031992CA618A445(), -828834893) != 0)
					{
						unk_0x471E558A661279DE(unk_0x0031992CA618A445(), 0, 576);
					}
				}
			}
		}
	}
}

int func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6781178AD73D2128(iParam0))
	{
		iVar0 = unk_0x0EDEAF4ABE35A577(iParam0);
		if (unk_0x76B3C79DE564AFC6(iVar0) && !unk_0x7A6C051038031EFA(iVar0, 0))
		{
			iVar1 = unk_0x89C1AD6422029361(iVar0);
			if (func_156(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_156(int iParam0)
{
	return (((unk_0xE9559A12052415BE(iParam0) == joaat("cargobob") || unk_0xE9559A12052415BE(iParam0) == joaat("cargobob2")) || unk_0xE9559A12052415BE(iParam0) == joaat("cargobob3")) || unk_0xE9559A12052415BE(iParam0) == joaat("cargobob4"));
}

bool func_157(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 11);
}

void func_158()
{
	if (func_5(unk_0x3D35F9864E4640B1(), 1, 1))
	{
		if (func_159() && (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) || iLocal_345))
		{
			if (unk_0x7832F791572D5809(joaat("am_mp_smpl_interior_int")) > 0)
			{
				iLocal_346 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
				iLocal_345 = 1;
			}
			else if (iLocal_345)
			{
				if (unk_0x432757A9E7AAFA96(iLocal_346, 0))
				{
					if (unk_0x3B077EBCBD1ABF1F(iLocal_346))
					{
						unk_0x8903B4129E141B11(iLocal_346, 1);
					}
				}
				iLocal_345 = 0;
			}
		}
		else if (iLocal_345)
		{
			if (unk_0x7832F791572D5809(joaat("am_mp_smpl_interior_int")) <= 0 && !func_16(unk_0x3D35F9864E4640B1()))
			{
				if ((unk_0x432757A9E7AAFA96(iLocal_346, 0) && unk_0x3B077EBCBD1ABF1F(iLocal_346)) && !unk_0x98409A99AD9A3AA9(iLocal_346))
				{
					unk_0x8903B4129E141B11(iLocal_346, 1);
				}
				else if (!unk_0x432757A9E7AAFA96(iLocal_346, 0))
				{
				}
				else if (!unk_0x3B077EBCBD1ABF1F(iLocal_346))
				{
				}
				else
				{
					unk_0x98409A99AD9A3AA9(iLocal_346);
				}
				iLocal_345 = 0;
			}
			else if (unk_0x7832F791572D5809(joaat("am_mp_smpl_interior_int")) > 0 && func_16(unk_0x3D35F9864E4640B1()))
			{
				iLocal_345 = 0;
			}
		}
	}
}

int func_159()
{
	if ((unk_0x30758DD2AA5FF762() && func_4(unk_0x3D35F9864E4640B1())) && func_160(func_161(unk_0x3D35F9864E4640B1())))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 70 && iParam0 <= 80)
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)
{
	if (iParam0 != func_6() && func_5(iParam0, 1, 1))
	{
		return Global_2422142[iParam0 /*399*/].f_318.f_12;
	}
	return -1;
}

void func_162()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((func_234() || !unk_0x27CA09C6DFAB1E79()) || !func_34())
	{
		return;
	}
	if (!iLocal_341)
	{
		if (func_233())
		{
			if (unk_0x76B3C79DE564AFC6(Global_2501777.f_287[0]) && !unk_0x7A6C051038031EFA(Global_2501777.f_287[0], 0))
			{
				func_232(158, &iVar0, 1);
				if (iVar0 >= 0 && iVar0 != 158)
				{
					iLocal_342 = func_101(func_231(4, iVar0), func_28(), 0);
					if (unk_0x3B077EBCBD1ABF1F(Global_2501777.f_287[0]))
					{
						if (!unk_0xCC234795142FC2D2(Global_2501777.f_287[0]))
						{
							unk_0x1581691D748490F3(Global_2501777.f_287[0], 0, 1);
						}
						else
						{
							func_228(iVar0, -1);
							iLocal_341 = 1;
							unk_0xE9F8539D5AF6B052(&(Global_2501777.f_287[0]));
						}
					}
					else
					{
						unk_0xDE78E0A451F0CC44(Global_2501777.f_287[0]);
					}
				}
			}
		}
	}
	if (iLocal_341 && !iLocal_344)
	{
		iVar1 = func_227(unk_0x3D35F9864E4640B1());
		if (iVar1 == 0 || iVar1 == 32)
		{
		}
		Global_68330.f_66 = iLocal_342;
		if (Global_68330.f_66 == joaat("phantom3"))
		{
			Global_68330.f_5 = 0;
			Global_68330.f_6 = 0;
			Global_68330.f_7 = 0;
			Global_68330.f_8 = 0;
			Global_68330.f_96 = 0;
			Global_68330.f_98 = 0;
			Global_68330.f_67 = -1;
		}
		else if (Global_68330.f_66 == joaat("hauler2"))
		{
			Global_68330.f_5 = 0;
			Global_68330.f_6 = 0;
			Global_68330.f_7 = 0;
			Global_68330.f_8 = 0;
			Global_68330.f_96 = 0;
			Global_68330.f_98 = 0;
			Global_68330.f_67 = -1;
		}
		func_232(158, &iVar2, 1);
		func_225(158, 158, -1);
		if (func_212(323, &Global_68330, &iLocal_343))
		{
			func_163(iLocal_343, 158, 1, 1, 0, 1, 0, -1);
			iLocal_344 = 1;
		}
	}
}

void func_163(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		func_210();
		if (unk_0x5583DCB5A49F0E53(iParam0) != 0)
		{
			unk_0x9B0BD13ABD4E15D1(iParam0, 0);
		}
		if (bParam5)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1319069[iParam1 /*140*/].f_101), 12);
			unk_0xD804ACF2A7171150(&(Global_1319069[iParam1 /*140*/].f_101), 15);
			unk_0xD804ACF2A7171150(&(Global_1319069[iParam1 /*140*/].f_101), 2);
			unk_0xD804ACF2A7171150(&(Global_1319069[iParam1 /*140*/].f_101), 8);
			unk_0xD804ACF2A7171150(&(Global_1319069[iParam1 /*140*/].f_101), 9);
			func_208();
			func_207(iParam1, 1);
			Global_1784304 = 1;
		}
		func_189(iParam0, &(Global_1319069[iParam1 /*140*/]), bParam5);
		Global_1319069[iParam1 /*140*/].f_70 = 1;
		if (bParam2)
		{
			unk_0xD804ACF2A7171150(&(Global_1319069[iParam1 /*140*/].f_101), 1);
			unk_0xD804ACF2A7171150(&(Global_1319069[iParam1 /*140*/].f_101), 6);
			unk_0xD804ACF2A7171150(&(Global_1319069[iParam1 /*140*/].f_101), 7);
		}
		if (bParam3)
		{
			unk_0xD804ACF2A7171150(&(Global_1319069[iParam1 /*140*/].f_101), 0);
		}
		else
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1319069[iParam1 /*140*/].f_101), 0);
		}
		if (bParam4)
		{
			func_188(iParam1);
		}
		if (bParam6)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1319069[iParam1 /*140*/].f_101), 15);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1319069[iParam1 /*140*/].f_101), 2);
		}
		if (unk_0x496D18970B708258("MPBitset", 3))
		{
			if (unk_0x8B0523D9EF9595C2(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "MPBitset");
				if (unk_0x2A3398C6222EB190(iVar0, 3))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1319069[iParam1 /*140*/].f_101), 2);
				}
			}
		}
		if (unk_0x0A264F4746D9A02B(iParam0) >= 0 && unk_0x0A264F4746D9A02B(iParam0) < 255)
		{
			func_187(&iParam0, &(Global_1319069[iParam1 /*140*/].f_9), &(Global_1319069[iParam1 /*140*/].f_59));
			if (func_186(iParam1, &iVar1))
			{
				if (bParam5 || unk_0x7899A2987EB03783() == iParam0)
				{
					Global_2097152[func_185() /*11035*/].f_5526.f_2022 = iParam1 + 1;
				}
				Global_2097152[func_185() /*11035*/].f_5526[iVar1 /*13*/].f_10 = 1;
				Global_2097152[func_185() /*11035*/].f_5526[iVar1 /*13*/].f_11 = 0;
				Global_2097152[func_185() /*11035*/].f_5526[iVar1 /*13*/] = Global_1319069[iParam1 /*140*/].f_66;
				Global_2097152[func_185() /*11035*/].f_5526[iVar1 /*13*/].f_9 = unk_0x43CF7C22C63E44EA(iParam0, 23) + 1;
				Global_2097152[func_185() /*11035*/].f_5526[iVar1 /*13*/].f_3[0] = unk_0x75581E55A902E534(iParam0);
				Global_2097152[func_185() /*11035*/].f_5526[iVar1 /*13*/].f_3[1] = unk_0x39BA0DF99894DAE5(iParam0, 14, 0);
				Global_2097152[func_185() /*11035*/].f_5526[iVar1 /*13*/].f_3[2] = unk_0x39BA0DF99894DAE5(iParam0, 14, 1);
				Global_2097152[func_185() /*11035*/].f_5526[iVar1 /*13*/].f_3[3] = unk_0x39BA0DF99894DAE5(iParam0, 14, 2);
				Global_2097152[func_185() /*11035*/].f_5526[iVar1 /*13*/].f_3[4] = unk_0x39BA0DF99894DAE5(iParam0, 14, 3);
				func_183(Global_1319069[iParam1 /*140*/].f_5, Global_1319069[iParam1 /*140*/].f_7, Global_1319069[iParam1 /*140*/].f_136, 1, &(Global_2097152[func_185() /*11035*/].f_5526[iVar1 /*13*/].f_1));
				func_183(Global_1319069[iParam1 /*140*/].f_6, -1, Global_1319069[iParam1 /*140*/].f_137, 0, &(Global_2097152[func_185() /*11035*/].f_5526[iVar1 /*13*/].f_2));
				if (unk_0x973A322D4D80E2D1(iParam0))
				{
					Global_2097152[func_185() /*11035*/].f_5526[iVar1 /*13*/].f_1 = -1;
				}
				if (unk_0xD19B16472550A083(iParam0))
				{
					Global_2097152[func_185() /*11035*/].f_5526[iVar1 /*13*/].f_2 = -1;
				}
			}
		}
		Global_2097152[func_185() /*11035*/].f_7550.f_1165 = unk_0x6239D1A379D387A4();
		func_164(iParam1, &(Global_1319069[iParam1 /*140*/]), 0, iParam7, 0, 0);
	}
}

int func_164(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[func_185() /*11035*/].f_7550.f_1165 = unk_0x6239D1A379D387A4();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_182(1411, iParam0);
	func_181(iVar1, uParam1->f_136, iParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = func_182(1412, iParam0);
	func_181(iVar1, uParam1->f_137, iParam3, 1);
	if (!bParam4)
	{
	}
	if (func_180(iParam0))
	{
	}
	else
	{
		iVar1 = func_182(1413, iParam0);
		func_181(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_182(1414, iParam0) + iVar0);
				func_181(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			else
			{
				iVar1 = (func_179(iParam0) + (iVar0 - 25));
				func_181(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_182(1439, iParam0) + iVar0);
			func_181(iVar1, uParam1->f_59[iVar0], iParam3, 1);
			iVar0++;
		}
	}
	iVar1 = func_182(1441, iParam0);
	func_181(iVar1, uParam1->f_62, iParam3, 1);
	iVar1 = func_182(1442, iParam0);
	func_181(iVar1, uParam1->f_63, iParam3, 1);
	iVar1 = func_182(1443, iParam0);
	func_181(iVar1, uParam1->f_64, iParam3, 1);
	if (func_180(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_182(1444, iParam0);
		func_181(iVar1, uParam1->f_65, iParam3, 1);
	}
	iVar1 = func_182(1445, iParam0);
	func_181(iVar1, uParam1->f_67, iParam3, 1);
	if (func_180(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_182(1446, iParam0);
		func_181(iVar1, uParam1->f_68, iParam3, 1);
	}
	iVar1 = func_182(1447, iParam0);
	func_181(iVar1, uParam1->f_69, iParam3, 1);
	iVar1 = func_182(1448, iParam0);
	func_181(iVar1, uParam1->f_70, -1, 1);
	iVar1 = func_182(1449, iParam0);
	func_181(iVar1, uParam1->f_71, iParam3, 1);
	iVar1 = func_182(1450, iParam0);
	func_181(iVar1, uParam1->f_72, iParam3, 1);
	iVar1 = func_182(1451, iParam0);
	func_181(iVar1, uParam1->f_73, iParam3, 1);
	iVar1 = func_182(1452, iParam0);
	func_181(iVar1, uParam1->f_5, iParam3, 1);
	iVar1 = func_182(1453, iParam0);
	func_181(iVar1, uParam1->f_6, iParam3, 1);
	iVar1 = func_182(1454, iParam0);
	func_181(iVar1, uParam1->f_7, iParam3, 1);
	iVar1 = func_182(1455, iParam0);
	func_181(iVar1, uParam1->f_8, iParam3, 1);
	if (func_180(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_182(3880, iParam0);
		func_181(iVar1, uParam1->f_74, iParam3, 1);
		iVar1 = func_182(3881, iParam0);
		func_181(iVar1, uParam1->f_75, iParam3, 1);
		iVar1 = func_182(3882, iParam0);
		func_181(iVar1, uParam1->f_76, iParam3, 1);
		iVar1 = func_178(iParam0);
		func_181(iVar1, uParam1->f_96, iParam3, 1);
		iVar1 = func_177(iParam0);
		func_181(iVar1, uParam1->f_98, iParam3, 1);
		iVar1 = func_166(iParam0);
		func_181(iVar1, uParam1->f_97, iParam3, 1);
	}
	uVar2 = Global_2097152[func_185() /*11035*/].f_7550.f_1165;
	if (bParam5)
	{
		uVar2 = unk_0x6239D1A379D387A4();
	}
	func_98(1625, uVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_98(func_231(1, iParam0), uParam1->f_101, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_98(func_231(2, iParam0), uParam1->f_102, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_98(func_231(3, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_98(func_231(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_98(func_231(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_98(func_231(7, iParam0), uParam1->f_138, iParam3, 1, 0);
	if (!func_180(iParam0))
	{
		if (!unk_0x0BD3CCFB6C6CFA91(&(uParam1->f_1)))
		{
			func_165(func_231(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_165(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2511967[iParam0 /*3*/][func_99(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6ACD6012FE412CB7(iVar0, uParam1);
	}
}

int func_166(int iParam0)
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 < func_167(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	return 0;
}

int func_167(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_176(iParam0);
		return func_175(iVar0);
	}
	return (func_168(iParam0, -1) * iParam0 + 1);
}

int func_168(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_171(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_170(iParam1))
			{
				return 0;
			}
			else if (func_169(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 <= 116 && iParam1 > 0)
			{
				if (Global_1049495[iParam1 /*1943*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049495[iParam1 /*1943*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049495[iParam1 /*1943*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
	}
	return 0;
}

int func_169(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_170(int iParam0)
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

int func_171(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_172(unk_0x3D35F9864E4640B1(), 0);
	}
	if (bParam1)
	{
		if (func_172(unk_0x3D35F9864E4640B1(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_172(int iParam0, bool bParam1)
{
	if (Global_1592922 != func_6())
	{
		if (!func_174(Global_1592922))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x3D35F9864E4640B1() != Global_1592922)
			{
				if (unk_0x2A3398C6222EB190(Global_2422142[Global_1592922 /*399*/].f_204, 24) || func_173(Global_1592922))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 24);
}

int func_173(int iParam0)
{
	if (iParam0 != func_6())
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 9);
	}
	return 0;
}

int func_174(int iParam0)
{
	if (iParam0 != func_6())
	{
		return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 2);
	}
	return 0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_176(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

int func_177(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 < func_167(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 < func_167(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	return 0;
}

int func_179(int iParam0)
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
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 < func_167(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	return 0;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
			return 1;
			break;
	}
	return 0;
}

var func_181(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_28();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x6E96BEFC52A9E22E(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_182(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_167(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_167(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_167(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_167(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	return iVar0;
}

int func_183(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_184(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_184(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_185()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_186(int iParam0, var uParam1)
{
	if (iParam0 == 157 || iParam0 == 158)
	{
		return 0;
	}
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*uParam1 = iParam0;
		return 1;
	}
	else if (iParam0 >= 13 && iParam0 <= 22)
	{
		*uParam1 = (iParam0 - 3);
		return 1;
	}
	else if (iParam0 >= 26 && iParam0 <= 35)
	{
		*uParam1 = (iParam0 - 6);
		return 1;
	}
	else if (iParam0 >= 39 && iParam0 <= 48)
	{
		*uParam1 = (iParam0 - 9);
		return 1;
	}
	else if (iParam0 >= 52 && iParam0 <= 61)
	{
		*uParam1 = (iParam0 - 12);
		return 1;
	}
	else if (iParam0 >= 65 && iParam0 <= 84)
	{
		if (!Global_100973)
		{
			*uParam1 = (iParam0 - 15);
			return 1;
		}
	}
	else if (iParam0 >= 88 && iParam0 <= 155)
	{
		if (!Global_100973)
		{
			*uParam1 = (iParam0 - 18);
			return 1;
		}
	}
	else if (iParam0 >= 179 && iParam0 <= 185)
	{
		if (!Global_100973)
		{
			*uParam1 = (iParam0 - 41);
			return 1;
		}
	}
	return 0;
}

int func_187(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x432757A9E7AAFA96(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x5583DCB5A49F0E53(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xEB185A7D2320BECE(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xBE7294CB9B3BEC34(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xE69CED5522DA627F(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xE69CED5522DA627F(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_188(int iParam0)
{
	Global_2097152[func_185() /*11035*/].f_7550.f_2 = iParam0;
}

void func_189(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	func_206(uParam1);
	if (bParam2)
	{
		uParam1->f_101 = 0;
		uParam1->f_103 = 0;
		StringCopy(&(uParam1->f_104), "", 64);
		StringCopy(&(uParam1->f_120), "", 64);
		uParam1->f_138 = 0;
		uParam1->f_136 = -1;
		uParam1->f_137 = -1;
		uParam1->f_139 = unk_0x6239D1A379D387A4();
		if (Global_262145.f_9813)
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_101), 22);
		}
	}
	if (func_205(iParam0, 0))
	{
		func_204();
		unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_101), 3);
	}
	func_192(iParam0, uParam1);
	if (unk_0x496D18970B708258("MPBitset", 3))
	{
		if (unk_0x8B0523D9EF9595C2(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "MPBitset");
			if (unk_0x2A3398C6222EB190(iVar0, 3))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_101), 2);
			}
		}
	}
	if (unk_0x2A3398C6222EB190(uParam1->f_101, 8))
	{
		if (!func_190(iParam0))
		{
		}
	}
	else if (func_190(iParam0))
	{
		unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_101), 8);
		unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_101), 9);
	}
}

int func_190(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		if (unk_0x66FE8ED1424CB0E3(iParam0, 0) || func_191(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	int iVar0;
	
	if (unk_0x496D18970B708258("MPBitset", 3))
	{
		if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (unk_0x8B0523D9EF9595C2(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "MPBitset");
				return unk_0x2A3398C6222EB190(iVar0, 16);
			}
		}
	}
	return 0;
}

void func_192(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		func_201(iParam0, uParam1);
		unk_0xD804ACF2A7171150(&(uParam1->f_94), 0);
		if (unk_0x2A3398C6222EB190(uParam1->f_77, 11))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_94), 0);
		}
		if (func_190(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_94), 0);
		}
		if (func_199(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_94), 0);
		}
		if (uParam1->f_70 == 0)
		{
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = unk_0x050FBB69DDC43293(iParam0);
		uParam1->f_79 = unk_0x4B3C1BE57AC6B090(iParam0);
		unk_0x49FB83BE43190F23(iParam0, &(uParam1->f_96));
		unk_0x13CD0E07DE230774(iParam0, &(uParam1->f_98));
		uParam1->f_97 = unk_0x6A05ADEF0288BFEB(iParam0);
		iVar0 = func_194(iParam0, &(uParam1->f_93), &(uParam1->f_95));
		unk_0xD804ACF2A7171150(&(uParam1->f_94), 3);
		if (!iVar0 == func_6())
		{
			unk_0xA82433D60351864D(iVar0, &(uParam1->f_80), 13);
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_94), 1);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_94), 1);
		}
		if (iVar0 == unk_0x3D35F9864E4640B1())
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_94), 2);
			if (uParam1->f_93 == 1)
			{
				if (func_193(iParam0))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_94), 3);
				}
			}
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_94), 2);
		}
	}
}

int func_193(int iParam0)
{
	if (Global_2501777.f_281 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_194(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		if (func_9(iParam0, 1))
		{
			*uParam1 = 1;
			if (unk_0x496D18970B708258("PV_Slot", 3))
			{
				if (unk_0x8B0523D9EF9595C2(iParam0, "PV_Slot"))
				{
					*uParam2 = unk_0x9E69E04AC6AD5C49(iParam0, "PV_Slot");
				}
			}
			return func_148(iParam0);
		}
		else if (func_198(iParam0, 1))
		{
			return func_197(iParam0);
		}
		else if (func_196(iParam0, 1))
		{
			*uParam1 = 2;
			return func_195(iParam0);
		}
		else if (!unk_0x00E962E9D49FD6C4(iParam0, -1, 0))
		{
			iVar0 = unk_0x3251C2B06497863C(iParam0, -1, 0);
			if (unk_0x76B3C79DE564AFC6(iVar0))
			{
				if (unk_0x972B5786EA49FE1A(iVar0))
				{
					*uParam1 = 3;
					return unk_0x46E9A8D99AF6D7BC(iVar0);
				}
			}
		}
	}
	*uParam1 = 4;
	return unk_0x3D35F9864E4640B1();
}

int func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "Veh_Modded_By_Player");
	return func_149(iVar0, 0);
}

int func_196(int iParam0, bool bParam1)
{
	if (Global_70785)
	{
		if (unk_0x76B3C79DE564AFC6(iParam0) && (!bParam1 || unk_0x432757A9E7AAFA96(iParam0, 0)))
		{
			if (unk_0x8B0523D9EF9595C2(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_197(int iParam0)
{
	int iVar0;
	
	if (!func_198(iParam0, 1))
	{
		return func_6();
	}
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		iVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "Player_Truck");
		return func_149(iVar0, 0);
	}
	return func_6();
}

int func_198(int iParam0, bool bParam1)
{
	if (Global_70785)
	{
		if (unk_0x76B3C79DE564AFC6(iParam0) && (!bParam1 || unk_0x432757A9E7AAFA96(iParam0, 0)))
		{
			if (unk_0x8B0523D9EF9595C2(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		iVar0 = unk_0xA34FF5EE6F449E4F(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (unk_0x27CA09C6DFAB1E79())
			{
				iVar1 = unk_0x898811EA80D35DE2();
			}
			else
			{
				iVar1 = unk_0x31CD6E9F83C10233();
			}
			iVar2 = unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(iVar1, Global_1315706));
			iVar3 = 20000;
			if (Global_1574297)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0x33C3289E2BF21EEB(iParam0);
				func_200(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_200(int iParam0)
{
	int iVar0;
	
	if (unk_0x496D18970B708258("MPBitset", 3))
	{
		if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (unk_0x8B0523D9EF9595C2(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "MPBitset");
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(iVar0, 16))
	{
		unk_0xCD7E92DE2BFA0B0D(&iVar0, 16);
		unk_0x2EDC8603BB24D464(iParam0, "MPBitset", iVar0);
	}
}

void func_201(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		func_203(uParam1);
		uParam1->f_66 = unk_0xE9559A12052415BE(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xCF9C6545E179C4AD(iParam0), 16);
		*uParam1 = unk_0x3863090BB0402D29(iParam0);
		unk_0xB3EEFAD2583A0B39(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCC1E6825E8AEFA91(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB6CD70E75256F4B4(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x92D3D399848DA022(iParam0);
		uParam1->f_67 = unk_0x27F913045BB0E0C6(iParam0);
		uParam1->f_69 = unk_0x0B56976C59C0773F(iParam0);
		uParam1->f_70 = unk_0xB026720421512310(iParam0);
		unk_0x807574B316B857A4(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x6B1D7C9564AA9095(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x429138BE60703CCA(iParam0, 2))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 28);
		}
		if (unk_0x429138BE60703CCA(iParam0, 3))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 29);
		}
		if (unk_0x429138BE60703CCA(iParam0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 30);
		}
		if (unk_0x429138BE60703CCA(iParam0, 1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x949DE8C96217A79B(iParam0, 0))
		{
			uParam1->f_68 = unk_0x727C05A2BF43A1DA(iParam0);
		}
		if (unk_0xF9CDF5CA6A1D6756(uParam1->f_66))
		{
			if (unk_0xB24748D4EDC0E921(iParam0))
			{
				switch (unk_0x04A9D89D1A4A6CCC(iParam0))
				{
					case 2:
					case 0:
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 23);
						unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 23);
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x95C125C85B156194(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 9);
		}
		if (unk_0x09F06C3C37B36D10(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 10);
		}
		if (unk_0x973A322D4D80E2D1(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 13);
			unk_0xE22FB988FAA3CC86(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xD19B16472550A083(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 12);
		}
		func_187(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3BE354A1A1BD6623(iParam0, iVar0 + 1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_202(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x66FE8ED1424CB0E3(iParam0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_77), 11);
		}
		if (unk_0x8B0523D9EF9595C2(iParam0, "IgnoredByQuickSave") && unk_0x0E340E113E76A82F(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_77), 27);
		}
	}
}

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

void func_203(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_204()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 184)
	{
		if (unk_0x2A3398C6222EB190(Global_1319069[iVar0 /*140*/].f_101, 3))
		{
			unk_0xD804ACF2A7171150(&(Global_1319069[iVar0 /*140*/].f_101), 3);
		}
		iVar0++;
	}
}

int func_205(int iParam0, int iParam1)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (iParam1 == 0)
			{
				if (unk_0x496D18970B708258("bombdec1", 3))
				{
					if (unk_0x8B0523D9EF9595C2(iParam0, "bombdec1"))
					{
						return 1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (unk_0x496D18970B708258("bombdec", 3))
				{
					if (unk_0x8B0523D9EF9595C2(iParam0, "bombdec"))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_206(var uParam0)
{
	func_203(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_79 = 0f;
	uParam0->f_96 = 1;
	uParam0->f_97 = 0;
	uParam0->f_98 = 132;
	uParam0->f_80 = 0;
	uParam0->f_80.f_1 = 0;
	uParam0->f_80.f_2 = 0;
	uParam0->f_80.f_3 = 0;
	uParam0->f_80.f_4 = 0;
	uParam0->f_80.f_5 = 0;
	uParam0->f_80.f_6 = 0;
	uParam0->f_80.f_7 = 0;
	uParam0->f_80.f_8 = 0;
	uParam0->f_80.f_9 = 0;
	uParam0->f_80.f_10 = 0;
	uParam0->f_80.f_11 = 0;
	uParam0->f_80.f_12 = 0;
	uParam0->f_94 = 0;
	uParam0->f_93 = 0;
	uParam0->f_95 = -1;
}

void func_207(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2501777.f_2201[iVar0 /*44*/].f_40 == iParam0)
			{
				func_207(iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		StringCopy(&(Global_2501777.f_2201[iParam0 /*44*/]), "", 24);
		Global_2501777.f_2201[iParam0 /*44*/].f_6 = 138;
		StringCopy(&(Global_2501777.f_2201[iParam0 /*44*/].f_7), "", 64);
		StringCopy(&(Global_2501777.f_2201[iParam0 /*44*/].f_23), "", 64);
		Global_2501777.f_2201[iParam0 /*44*/].f_39 = -1;
		Global_2501777.f_2201[iParam0 /*44*/].f_40 = -1;
		func_2(&(Global_2501777.f_2201[iParam0 /*44*/].f_41));
		Global_2501777.f_2201[iParam0 /*44*/].f_43 = 0;
	}
}

void func_208()
{
	func_209(10);
}

void func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCD7E92DE2BFA0B0D(&(Global_1574333.f_3[iVar0]), iVar1);
}

void func_210()
{
	Global_2434915.f_502.f_34 = 0;
	func_211(25);
	func_211(24);
}

void func_211(int iParam0)
{
	if (iParam0 < 32)
	{
		if (unk_0x2A3398C6222EB190(Global_2434915.f_502.f_1, iParam0))
		{
			unk_0xD804ACF2A7171150(&(Global_2434915.f_502.f_1), iParam0);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_2434915.f_502.f_2, (iParam0 - 32)))
	{
		unk_0xD804ACF2A7171150(&(Global_2434915.f_502.f_2), (iParam0 - 32));
	}
}

int func_212(int iParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	struct<100> Var3;
	int iVar104;
	
	unk_0xBE91026C1FC72180(uParam1->f_66);
	if (!unk_0x772F801619C83779(uParam1->f_66))
	{
		return 0;
	}
	Var0 = { func_224(unk_0xED1168B8D2D313FA()) };
	*uParam2 = unk_0x5129A9193468FF77(uParam1->f_66, Var0.f_0, Var0.f_1, (Var0.f_2 + 200f), 0f, 0, 0, 0);
	Var3.f_9 = 49;
	Var3.f_59 = 2;
	Var3.f_78 = -1;
	Var3.f_95 = -1;
	Var3.f_96 = 1;
	Var3.f_98 = 132;
	Var3.f_99 = -1;
	if (!unk_0x27CA09C6DFAB1E79())
	{
		func_201(*uParam2, &Var3);
	}
	else
	{
		func_192(*uParam2, &Var3);
	}
	uParam1->f_77 = 0;
	iVar104 = 0;
	while (iVar104 < 12)
	{
		if (unk_0x2A3398C6222EB190(Var3.f_77, func_202(iVar104 + 1)))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_202(iVar104 + 1));
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_77), func_202(iVar104 + 1));
		}
		iVar104++;
	}
	func_223(iParam0, &(uParam1->f_77));
	if (!unk_0x27CA09C6DFAB1E79())
	{
		func_216(*uParam2, uParam1, 0, 1);
	}
	else
	{
		func_213(*uParam2, uParam1, 1, 1);
	}
	if (unk_0x27CA09C6DFAB1E79() && func_234())
	{
		unk_0x1F18D3C78C8C1A11(*uParam2, true);
		unk_0x477513BFF4F0CEC1(*uParam2, false, 0);
		unk_0x33808CAFB62A256D(*uParam2, false, 0);
	}
	return 1;
}

void func_213(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	
	if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		if ((unk_0x27CA09C6DFAB1E79() && unk_0x3B077EBCBD1ABF1F(iParam0)) || !unk_0x27CA09C6DFAB1E79())
		{
			if (unk_0x3D35F9864E4640B1() != func_6())
			{
				uParam1->f_99 = unk_0x3D35F9864E4640B1();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_216(iParam0, uParam1, bParam2, bParam3);
			if (!uParam1->f_78 == -1)
			{
				if (uParam1->f_9[14] == -1)
				{
					unk_0x0F62E0F47924EDDD(iParam0, 1, uParam1->f_78);
				}
			}
			if (func_215(uParam1->f_66, &fVar0) && uParam1->f_79 != fVar0)
			{
				uParam1->f_79 = fVar0;
			}
			unk_0x18804D60D4766EA6(iParam0, uParam1->f_79);
			unk_0xD01D42556982CC43(iParam0, uParam1->f_96);
			if (uParam1->f_98 >= 0)
			{
				unk_0x1D44A8E22E1A3A1D(iParam0, uParam1->f_98);
			}
			if (unk_0x43C1A94D558D8FC5(iParam0) > 1 && uParam1->f_97 >= 0)
			{
				unk_0xBD6E3A46AFAC860D(iParam0, uParam1->f_97);
			}
			switch (uParam1->f_93)
			{
				case 0:
					break;
				
				case 1:
					if (unk_0x2A3398C6222EB190(uParam1->f_94, 1) && unk_0x2A3398C6222EB190(uParam1->f_94, 2))
					{
						if (unk_0x2A3398C6222EB190(uParam1->f_94, 3))
						{
						}
					}
					else if (unk_0x496D18970B708258("Player_Vehicle", 3))
					{
						unk_0x2EDC8603BB24D464(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (unk_0x2A3398C6222EB190(uParam1->f_94, 1) && unk_0x2A3398C6222EB190(uParam1->f_94, 2))
					{
						if (unk_0x496D18970B708258("Veh_Modded_By_Player", 3))
						{
							unk_0x2EDC8603BB24D464(iParam0, "Veh_Modded_By_Player", unk_0x09A791318A38B63D(unk_0x3D35F9864E4640B1()));
						}
					}
					else if (unk_0x496D18970B708258("Veh_Modded_By_Player", 3))
					{
						if (func_214(uParam1->f_80) && unk_0x7B30C254A284990A(&(uParam1->f_80)))
						{
							unk_0x2EDC8603BB24D464(iParam0, "Veh_Modded_By_Player", unk_0x09A791318A38B63D(unk_0x999CF6F4F06C277B(&(uParam1->f_80))));
						}
						else
						{
							unk_0x2EDC8603BB24D464(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
			}
	}
}

var func_214(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3E72C35EA9759781(&uParam0, 13);
}

bool func_215(int iParam0, float fParam1)
{
	*fParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*fParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*fParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*fParam1 = 1f;
			break;
		
		case joaat("alphaz1"):
			*fParam1 = 0.2f;
			break;
		
		case joaat("bombushka"):
			*fParam1 = 0.15f;
			break;
		
		case joaat("howard"):
			*fParam1 = 0.3f;
			break;
		
		case joaat("hunter"):
			*fParam1 = 0.5f;
			break;
		
		case joaat("microlight"):
			*fParam1 = 0.3f;
			break;
		
		case joaat("mogul"):
			*fParam1 = 0.4f;
			break;
		
		case joaat("molotok"):
			*fParam1 = 0.3f;
			break;
		
		case joaat("nokota"):
			*fParam1 = 0.4f;
			break;
		
		case joaat("pyro"):
			*fParam1 = 0.4f;
			break;
		
		case joaat("rogue"):
			*fParam1 = 0.4f;
			break;
		
		case joaat("seabreeze"):
			*fParam1 = 0.3f;
			break;
		
		case joaat("starling"):
			*fParam1 = 0.5f;
			break;
		
		case joaat("tula"):
			*fParam1 = 0.15f;
			break;
	}
	return *fParam1 != -1f;
}

void func_216(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		if (unk_0x50B7853132D8438E(&(uParam1->f_1)) != 0)
		{
			unk_0x3F8A1297DC6573A7(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0xE10B4E7E4009175A())
		{
			unk_0xD84C2B9A469EBB35(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0x2A3398C6222EB190(uParam1->f_77, func_202(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_202(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x2A3398C6222EB190(uParam1->f_77, func_202(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_202(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xDDCE14D69DD34587(iParam0, 0);
			if (unk_0xBE7294CB9B3BEC34(iParam0, 5) != -1)
			{
				unk_0xDDCE14D69DD34587(iParam0, 1);
			}
		}
		if (unk_0x2A3398C6222EB190(uParam1->f_77, 13))
		{
			unk_0xB42601D692EB8047(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xC459B9A3E3C57829(iParam0);
		}
		if (unk_0x2A3398C6222EB190(uParam1->f_77, 12))
		{
			unk_0xFE4330842941D50F(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x4E06F09BF15B5520(iParam0);
		}
		unk_0xBF9154ADAF4F11E1(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xD6B0D4015CC61FF4(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x2A3398C6222EB190(uParam1->f_77, 15) || func_222(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_221())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xDBEB3DBC65F0B19E(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x79C5F51FA95DC57C(iParam0, 0);
		}
		else
		{
			unk_0x79C5F51FA95DC57C(iParam0, 0);
			unk_0x79C5F51FA95DC57C(iParam0, uParam1->f_65);
		}
		unk_0xC587296050B2CA93(iParam0, !unk_0x2A3398C6222EB190(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xFABEFEE17018AE2A(iParam0, uParam1->f_70);
		}
		unk_0x368756789FF0788C(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xA199088C3081D928(iParam0, 2, unk_0x2A3398C6222EB190(uParam1->f_77, 28));
		unk_0xA199088C3081D928(iParam0, 3, unk_0x2A3398C6222EB190(uParam1->f_77, 29));
		unk_0xA199088C3081D928(iParam0, 0, unk_0x2A3398C6222EB190(uParam1->f_77, 30));
		unk_0xA199088C3081D928(iParam0, 1, unk_0x2A3398C6222EB190(uParam1->f_77, 31));
		unk_0x5028E664ECBD1407(iParam0, unk_0x2A3398C6222EB190(uParam1->f_77, 10));
		if (unk_0xD546CB3F87365B85(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xE4707C143B24BAB3(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x1B9B48622A4D3FC0(unk_0xE9559A12052415BE(iParam0)))
			{
				if (unk_0x34C854420D02F57B(unk_0xE9559A12052415BE(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_220(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_220(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x949DE8C96217A79B(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x2808AF25A6A6B7CE(iParam0, 1);
			}
			else
			{
				unk_0x1C22AE46A9DC4530(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_217(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x1DBFCF939B3B47D0(uParam1->f_66) && !unk_0x9C4740BA7F0AF553(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0x2A3398C6222EB190(uParam1->f_77, func_202(iVar2 + 1)))
				{
					if (!unk_0x3BE354A1A1BD6623(iParam0, iVar2 + 1))
					{
						unk_0x9B48A5E9A884175D(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0x3BE354A1A1BD6623(iParam0, iVar2 + 1))
				{
					unk_0x9B48A5E9A884175D(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0xE9559A12052415BE(iParam0) == joaat("sheava") || unk_0xE9559A12052415BE(iParam0) == joaat("omnis")) || unk_0xE9559A12052415BE(iParam0) == joaat("le7b"))
		{
			if (unk_0xBE7294CB9B3BEC34(iParam0, 0) == -1)
			{
				unk_0x9B48A5E9A884175D(iParam0, 1, 0);
			}
		}
		if ((unk_0xF9CDF5CA6A1D6756(uParam1->f_66) && unk_0xE43701C36CAFF1A4(iParam0)) && !((Global_1641087.f_46375 == 6 || Global_1641087.f_46375 == 7) && unk_0x2A3398C6222EB190(Global_1641087.f_26, 8)))
		{
			if (!unk_0x2A3398C6222EB190(uParam1->f_77, 23))
			{
				if (unk_0x2A3398C6222EB190(uParam1->f_77, 22))
				{
					unk_0xC82776FBB5D72B5A(iParam0, 2);
				}
				else
				{
					unk_0xC82776FBB5D72B5A(iParam0, 3);
				}
			}
			else
			{
				unk_0xC82776FBB5D72B5A(iParam0, 4);
			}
		}
		if (unk_0x2A3398C6222EB190(uParam1->f_77, 27))
		{
			unk_0xEE33BB634B0CC618(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xEE33BB634B0CC618(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_217(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x432757A9E7AAFA96(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x5583DCB5A49F0E53(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x9B0BD13ABD4E15D1(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xF4E4907109CEF0EC(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xBE7294CB9B3BEC34(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xFB84A01F8B3E62E6(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x5A814851114E34FB(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x5A814851114E34FB(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x5A814851114E34FB(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	func_219(iParam0);
	if (func_218(*iParam0))
	{
		unk_0x9DFCC19370F919F3(*iParam0, 1);
		unk_0x014C5648BA70BF8B(*iParam0, 1);
	}
	return 1;
}

int func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0)) && unk_0x5583DCB5A49F0E53(iParam0) > 0)
	{
		unk_0x9B0BD13ABD4E15D1(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xBE7294CB9B3BEC34(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x961891FDFDEF0C10(iParam0, iVar1, unk_0xBE7294CB9B3BEC34(iParam0, iVar1)), 16);
				iVar2 = unk_0x50B7853132D8438E(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x50B7853132D8438E("MNU_CAGE") || iVar2 == unk_0x50B7853132D8438E("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_219(var uParam0)
{
	switch (unk_0xE9559A12052415BE(*uParam0))
	{
		case joaat("starling"):
			if (unk_0xBE7294CB9B3BEC34(*uParam0, 4) == 0)
			{
				unk_0x5A814851114E34FB(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xFB84A01F8B3E62E6(*uParam0, 13);
			}
			break;
	}
}

void func_220(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5583DCB5A49F0E53(iParam0) > 0)
	{
		unk_0x9B0BD13ABD4E15D1(iParam0, 0);
		iVar0 = unk_0xBE7294CB9B3BEC34(iParam0, 24);
		iVar1 = unk_0xE69CED5522DA627F(iParam0, 24);
		unk_0x61038A1B29CB9EEB(iParam0, uParam1);
		if (unk_0xE9559A12052415BE(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xFB84A01F8B3E62E6(iParam0, 24);
		}
		else
		{
			unk_0x5A814851114E34FB(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

var func_221()
{
	return unk_0x43456EBBDC27D696(joaat("mpindependence"));
}

int func_222(int iParam0)
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam0, 0))
		{
			if (unk_0x496D18970B708258("MPBitset", 3))
			{
				if (unk_0x8B0523D9EF9595C2(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x9E69E04AC6AD5C49(iParam0, "MPBitset");
				}
				return unk_0x2A3398C6222EB190(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_223(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 64:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 4);
			break;
		
		case 67:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 4);
			break;
		
		case 72:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 117:
			unk_0xD804ACF2A7171150(uParam1, 1);
			break;
		
		case 49:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 118:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xD804ACF2A7171150(uParam1, 1);
			break;
		
		case 1:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 119:
			unk_0xD804ACF2A7171150(uParam1, 1);
			break;
		
		case 77:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xD804ACF2A7171150(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			break;
		
		case 120:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			break;
		
		case 130:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 132:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 135:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 137:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 141:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 6);
			break;
		
		case 147:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 2);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 3);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 4);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 5);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 6);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 7);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 8);
			break;
		
		case 203:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xD804ACF2A7171150(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			break;
		
		case 100:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 2);
			break;
		
		case 170:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xD804ACF2A7171150(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			break;
		
		case 160:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 15);
			break;
		
		case 161:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 15);
			break;
		
		case 192:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			break;
		
		case 221:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			break;
		
		case 222:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 172:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 165:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 166:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xD804ACF2A7171150(uParam1, 1);
			break;
		
		case 139:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 104:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 109:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 2);
			break;
		
		case 227:
		case 252:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xD804ACF2A7171150(uParam1, 2);
			unk_0xD804ACF2A7171150(uParam1, 4);
			break;
		
		case 97:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 52:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 108:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			break;
		
		case 237:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 9);
			break;
		
		case 238:
			unk_0xD804ACF2A7171150(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_69586)
			{
				unk_0xCD7E92DE2BFA0B0D(uParam1, 9);
			}
			break;
		
		case 271:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 1);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 2);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 3);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 4);
			break;
		
		case 272:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 3);
			unk_0xCD7E92DE2BFA0B0D(uParam1, 4);
			break;
		
		case 273:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 281:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 267:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 268:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 0);
			break;
		
		case 292:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 9);
			break;
		
		case 309:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 9);
			break;
		
		case 329:
			unk_0xCD7E92DE2BFA0B0D(uParam1, 9);
			break;
		
		default:
			return;
			break;
	}
}

Vector3 func_224(int iParam0)
{
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iParam0), 0);
}

void func_225(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_181(func_226(iParam0), iParam1, iParam2, 1);
	if (iParam0 >= 184)
	{
		return;
	}
	if (iParam2 == func_28() || iParam2 == -1)
	{
		Global_1776225[iParam0] = iParam1;
	}
}

int func_226(int iParam0)
{
	if (iParam0 <= 38)
	{
		return (4036 + iParam0);
	}
	else if (iParam0 <= 48)
	{
		return ((5905 + iParam0) - 39);
	}
	else if (iParam0 <= 51)
	{
		return ((6025 + iParam0) - 49);
	}
	else if (iParam0 <= 64)
	{
		return ((7199 + iParam0) - 52);
	}
	else if (iParam0 <= 87)
	{
		return ((9207 + iParam0) - 65);
	}
	else if (iParam0 < 158)
	{
		return ((14734 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 184)
	{
		return ((17911 + iParam0) - 159);
	}
	return (4036 + iParam0);
}

int func_227(int iParam0)
{
	if (iParam0 == func_6())
	{
		return 0;
	}
	return Global_1593076[iParam0 /*647*/].f_259.f_154[5 /*12*/];
}

void func_228(int iParam0, int iParam1)
{
	int iVar0;
	
	func_230(iParam0, &iVar0);
	if (iVar0 >= 0)
	{
		func_225(iVar0, -1, -1);
	}
	func_229(&(Global_1319069[iParam0 /*140*/]));
	Global_2097152[func_185() /*11035*/].f_7550.f_1165 = unk_0x6239D1A379D387A4();
	func_164(iParam0, &(Global_1319069[iParam0 /*140*/]), 0, iParam1, 0, 0);
}

void func_229(var uParam0)
{
	func_206(uParam0);
	uParam0->f_101 = 0;
	uParam0->f_102 = 0;
	uParam0->f_103 = 0;
	StringCopy(&(uParam0->f_104), "", 64);
	StringCopy(&(uParam0->f_120), "", 64);
	uParam0->f_136 = 0;
	uParam0->f_137 = 0;
	uParam0->f_138 = 0;
	uParam0->f_139 = 0;
}

void func_230(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 184)
		{
			if (iParam0 == (Global_1776225[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

int func_231(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1626;
				
				case 1:
					return 1633;
				
				case 2:
					return 1640;
				
				case 3:
					return 1647;
				
				case 4:
					return 1654;
				
				case 5:
					return 1661;
				
				case 6:
					return 1668;
				
				case 7:
					return 1675;
				
				case 8:
					return 1682;
				
				case 9:
					return 1689;
				
				case 10:
					return 1696;
				
				case 11:
					return 1702;
				
				case 12:
					return 1708;
				
				case 13:
					return 1714;
				
				case 14:
					return 1792;
				
				case 15:
					return 1799;
				
				case 16:
					return 1806;
				
				case 17:
					return 1813;
				
				case 18:
					return 1820;
				
				case 19:
					return 1827;
				
				case 20:
					return 1834;
				
				case 21:
					return 1841;
				
				case 22:
					return 1848;
				
				case 23:
					return 1855;
				
				case 24:
					return 1861;
				
				case 25:
					return 1867;
				
				case 26:
					return 2162;
				
				case 27:
					return 2169;
				
				case 28:
					return 2176;
				
				case 29:
					return 2183;
				
				case 30:
					return 2190;
				
				case 31:
					return 2197;
				
				case 32:
					return 2204;
				
				case 33:
					return 2211;
				
				case 34:
					return 2218;
				
				case 35:
					return 2225;
				
				case 36:
					return 2232;
				
				case 37:
					return 2238;
				
				case 38:
					return 2244;
				
				case 39:
					return 2815;
				
				case 40:
					return 2822;
				
				case 41:
					return 2829;
				
				case 42:
					return 2836;
				
				case 43:
					return 2843;
				
				case 44:
					return 2850;
				
				case 45:
					return 2857;
				
				case 46:
					return 2864;
				
				case 47:
					return 2871;
				
				case 48:
					return 2878;
				
				case 49:
					return 2885;
				
				case 50:
					return 2891;
				
				case 51:
					return 2897;
				
				case 52:
					return 2939;
				
				case 53:
					return 2946;
				
				case 54:
					return 2953;
				
				case 55:
					return 2960;
				
				case 56:
					return 2967;
				
				case 57:
					return 2974;
				
				case 58:
					return 2981;
				
				case 59:
					return 2988;
				
				case 60:
					return 2995;
				
				case 61:
					return 3002;
				
				case 62:
					return 3009;
				
				case 63:
					return 3015;
				
				case 64:
					return 3021;
				
				case 65:
					return 3222;
				
				case 66:
					return 3230;
				
				case 67:
					return 3238;
				
				case 68:
					return 3246;
				
				case 69:
					return 3254;
				
				case 70:
					return 3262;
				
				case 71:
					return 3270;
				
				case 72:
					return 3278;
				
				case 73:
					return 3286;
				
				case 74:
					return 3294;
				
				case 75:
					return 3302;
				
				case 76:
					return 3310;
				
				case 77:
					return 3318;
				
				case 78:
					return 3326;
				
				case joaat("mpsv_lp0_31"):
					return 3334;
				
				case 80:
					return 3342;
				
				case 81:
					return 3350;
				
				case 82:
					return 3358;
				
				case 83:
					return 3366;
				
				case 84:
					return 3374;
				
				case 85:
					return 3382;
				
				case 86:
					return 3389;
				
				case 87:
					return 3396;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4010;
				
				case 89:
					return 4018;
				
				case 90:
					return 4026;
				
				case 91:
					return 4034;
				
				case 92:
					return 4042;
				
				case 93:
					return 4050;
				
				case 94:
					return 4058;
				
				case 95:
					return 4066;
				
				case 96:
					return 4074;
				
				case 97:
					return 4082;
				
				case 98:
					return 4090;
				
				case 99:
					return 4098;
				
				case 100:
					return 4106;
				
				case 101:
					return 4114;
				
				case 102:
					return 4122;
				
				case 103:
					return 4130;
				
				case 104:
					return 4138;
				
				case 105:
					return 4146;
				
				case 106:
					return 4154;
				
				case 107:
					return 4162;
				
				case 108:
					return 4170;
				
				case 109:
					return 4178;
				
				case 110:
					return 4186;
				
				case 111:
					return 4194;
				
				case 112:
					return 4202;
				
				case 113:
					return 4210;
				
				case 114:
					return 4218;
				
				case 115:
					return 4226;
				
				case 116:
					return 4234;
				
				case 117:
					return 4242;
				
				case 118:
					return 4250;
				
				case 119:
					return 4258;
				
				case 120:
					return 4266;
				
				case 121:
					return 4274;
				
				case 122:
					return 4282;
				
				case 123:
					return 4290;
				
				case 124:
					return 4298;
				
				case 125:
					return 4306;
				
				case 126:
					return 4314;
				
				case 127:
					return 4322;
				
				case 128:
					return 4330;
				
				case 129:
					return 4338;
				
				case 130:
					return 4346;
				
				case 131:
					return 4354;
				
				case 132:
					return 4362;
				
				case 133:
					return 4370;
				
				case 134:
					return 4378;
				
				case 135:
					return 4386;
				
				case 136:
					return 4394;
				
				case 137:
					return 4402;
				
				case 138:
					return 4410;
				
				case 139:
					return 4418;
				
				case 140:
					return 4426;
				
				case 141:
					return 4434;
				
				case 142:
					return 4442;
				
				case 143:
					return 4450;
				
				case 144:
					return 4458;
				
				case 145:
					return 4466;
				
				case 146:
					return 4474;
				
				case 147:
					return 4482;
				
				case 148:
					return 4490;
				
				case 149:
					return 4498;
				
				case 150:
					return 4506;
				
				case 151:
					return 4514;
				
				case 152:
					return 4522;
				
				case 153:
					return 4530;
				
				case 154:
					return 4538;
				
				case 155:
					return 4546;
				
				case 156:
					return 4554;
				
				case 157:
					return 4562;
				
				case 158:
					return 5455;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5904;
				
				case 160:
					return 5911;
				
				case 161:
					return 5918;
				
				case 162:
					return 5925;
				
				case 163:
					return 5932;
				
				case 164:
					return 5939;
				
				case 165:
					return 5946;
				
				case 166:
					return 5953;
				
				case 167:
					return 5960;
				
				case 168:
					return 5967;
				
				case 169:
					return 5974;
				
				case 170:
					return 5981;
				
				case 171:
					return 5988;
				
				case 172:
					return 5995;
				
				case 173:
					return 6002;
				
				case 174:
					return 6009;
				
				case 175:
					return 6016;
				
				case 176:
					return 6023;
				
				case 177:
					return 6030;
				
				case 178:
					return 6037;
				
				case 179:
					return 6044;
				
				case 180:
					return 6051;
				
				case 181:
					return 6058;
				
				case 182:
					return 6065;
				
				case 183:
					return 6072;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1627;
				
				case 1:
					return 1634;
				
				case 2:
					return 1641;
				
				case 3:
					return 1648;
				
				case 4:
					return 1655;
				
				case 5:
					return 1662;
				
				case 6:
					return 1669;
				
				case 7:
					return 1676;
				
				case 8:
					return 1683;
				
				case 9:
					return 1690;
				
				case 10:
					return 1697;
				
				case 11:
					return 1703;
				
				case 12:
					return 1709;
				
				case 13:
					return 1715;
				
				case 14:
					return 1793;
				
				case 15:
					return 1800;
				
				case 16:
					return 1807;
				
				case 17:
					return 1814;
				
				case 18:
					return 1821;
				
				case 19:
					return 1828;
				
				case 20:
					return 1835;
				
				case 21:
					return 1842;
				
				case 22:
					return 1849;
				
				case 23:
					return 1856;
				
				case 24:
					return 1862;
				
				case 25:
					return 1868;
				
				case 26:
					return 2163;
				
				case 27:
					return 2170;
				
				case 28:
					return 2177;
				
				case 29:
					return 2184;
				
				case 30:
					return 2191;
				
				case 31:
					return 2198;
				
				case 32:
					return 2205;
				
				case 33:
					return 2212;
				
				case 34:
					return 2219;
				
				case 35:
					return 2226;
				
				case 36:
					return 2233;
				
				case 37:
					return 2239;
				
				case 38:
					return 2245;
				
				case 39:
					return 2816;
				
				case 40:
					return 2823;
				
				case 41:
					return 2830;
				
				case 42:
					return 2837;
				
				case 43:
					return 2844;
				
				case 44:
					return 2851;
				
				case 45:
					return 2858;
				
				case 46:
					return 2865;
				
				case 47:
					return 2872;
				
				case 48:
					return 2879;
				
				case 49:
					return 2886;
				
				case 50:
					return 2892;
				
				case 51:
					return 2898;
				
				case 52:
					return 2940;
				
				case 53:
					return 2947;
				
				case 54:
					return 2954;
				
				case 55:
					return 2961;
				
				case 56:
					return 2968;
				
				case 57:
					return 2975;
				
				case 58:
					return 2982;
				
				case 59:
					return 2989;
				
				case 60:
					return 2996;
				
				case 61:
					return 3003;
				
				case 62:
					return 3010;
				
				case 63:
					return 3016;
				
				case 64:
					return 3022;
				
				case 65:
					return 3223;
				
				case 66:
					return 3231;
				
				case 67:
					return 3239;
				
				case 68:
					return 3247;
				
				case 69:
					return 3255;
				
				case 70:
					return 3263;
				
				case 71:
					return 3271;
				
				case 72:
					return 3279;
				
				case 73:
					return 3287;
				
				case 74:
					return 3295;
				
				case 75:
					return 3303;
				
				case 76:
					return 3311;
				
				case 77:
					return 3319;
				
				case 78:
					return 3327;
				
				case joaat("mpsv_lp0_31"):
					return 3335;
				
				case 80:
					return 3343;
				
				case 81:
					return 3351;
				
				case 82:
					return 3359;
				
				case 83:
					return 3367;
				
				case 84:
					return 3375;
				
				case 85:
					return 3383;
				
				case 86:
					return 3390;
				
				case 87:
					return 3397;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4011;
				
				case 89:
					return 4019;
				
				case 90:
					return 4027;
				
				case 91:
					return 4035;
				
				case 92:
					return 4043;
				
				case 93:
					return 4051;
				
				case 94:
					return 4059;
				
				case 95:
					return 4067;
				
				case 96:
					return 4075;
				
				case 97:
					return 4083;
				
				case 98:
					return 4091;
				
				case 99:
					return 4099;
				
				case 100:
					return 4107;
				
				case 101:
					return 4115;
				
				case 102:
					return 4123;
				
				case 103:
					return 4131;
				
				case 104:
					return 4139;
				
				case 105:
					return 4147;
				
				case 106:
					return 4155;
				
				case 107:
					return 4163;
				
				case 108:
					return 4171;
				
				case 109:
					return 4179;
				
				case 110:
					return 4187;
				
				case 111:
					return 4195;
				
				case 112:
					return 4203;
				
				case 113:
					return 4211;
				
				case 114:
					return 4219;
				
				case 115:
					return 4227;
				
				case 116:
					return 4235;
				
				case 117:
					return 4243;
				
				case 118:
					return 4251;
				
				case 119:
					return 4259;
				
				case 120:
					return 4267;
				
				case 121:
					return 4275;
				
				case 122:
					return 4283;
				
				case 123:
					return 4291;
				
				case 124:
					return 4299;
				
				case 125:
					return 4307;
				
				case 126:
					return 4315;
				
				case 127:
					return 4323;
				
				case 128:
					return 4331;
				
				case 129:
					return 4339;
				
				case 130:
					return 4347;
				
				case 131:
					return 4355;
				
				case 132:
					return 4363;
				
				case 133:
					return 4371;
				
				case 134:
					return 4379;
				
				case 135:
					return 4387;
				
				case 136:
					return 4395;
				
				case 137:
					return 4403;
				
				case 138:
					return 4411;
				
				case 139:
					return 4419;
				
				case 140:
					return 4427;
				
				case 141:
					return 4435;
				
				case 142:
					return 4443;
				
				case 143:
					return 4451;
				
				case 144:
					return 4459;
				
				case 145:
					return 4467;
				
				case 146:
					return 4475;
				
				case 147:
					return 4483;
				
				case 148:
					return 4491;
				
				case 149:
					return 4499;
				
				case 150:
					return 4507;
				
				case 151:
					return 4515;
				
				case 152:
					return 4523;
				
				case 153:
					return 4531;
				
				case 154:
					return 4539;
				
				case 155:
					return 4547;
				
				case 156:
					return 4555;
				
				case 157:
					return 4563;
				
				case 158:
					return 5456;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5905;
				
				case 160:
					return 5912;
				
				case 161:
					return 5919;
				
				case 162:
					return 5926;
				
				case 163:
					return 5933;
				
				case 164:
					return 5940;
				
				case 165:
					return 5947;
				
				case 166:
					return 5954;
				
				case 167:
					return 5961;
				
				case 168:
					return 5968;
				
				case 169:
					return 5975;
				
				case 170:
					return 5982;
				
				case 171:
					return 5989;
				
				case 172:
					return 5996;
				
				case 173:
					return 6003;
				
				case 174:
					return 6010;
				
				case 175:
					return 6017;
				
				case 176:
					return 6024;
				
				case 177:
					return 6031;
				
				case 178:
					return 6038;
				
				case 179:
					return 6045;
				
				case 180:
					return 6052;
				
				case 181:
					return 6059;
				
				case 182:
					return 6066;
				
				case 183:
					return 6073;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1628;
				
				case 1:
					return 1635;
				
				case 2:
					return 1642;
				
				case 3:
					return 1649;
				
				case 4:
					return 1656;
				
				case 5:
					return 1663;
				
				case 6:
					return 1670;
				
				case 7:
					return 1677;
				
				case 8:
					return 1684;
				
				case 9:
					return 1691;
				
				case 10:
					return 1698;
				
				case 11:
					return 1704;
				
				case 12:
					return 1710;
				
				case 13:
					return 1716;
				
				case 14:
					return 1794;
				
				case 15:
					return 1801;
				
				case 16:
					return 1808;
				
				case 17:
					return 1815;
				
				case 18:
					return 1822;
				
				case 19:
					return 1829;
				
				case 20:
					return 1836;
				
				case 21:
					return 1843;
				
				case 22:
					return 1850;
				
				case 23:
					return 1857;
				
				case 24:
					return 1863;
				
				case 25:
					return 1869;
				
				case 26:
					return 2164;
				
				case 27:
					return 2171;
				
				case 28:
					return 2178;
				
				case 29:
					return 2185;
				
				case 30:
					return 2192;
				
				case 31:
					return 2199;
				
				case 32:
					return 2206;
				
				case 33:
					return 2213;
				
				case 34:
					return 2220;
				
				case 35:
					return 2227;
				
				case 36:
					return 2234;
				
				case 37:
					return 2240;
				
				case 38:
					return 2246;
				
				case 39:
					return 2817;
				
				case 40:
					return 2824;
				
				case 41:
					return 2831;
				
				case 42:
					return 2838;
				
				case 43:
					return 2845;
				
				case 44:
					return 2852;
				
				case 45:
					return 2859;
				
				case 46:
					return 2866;
				
				case 47:
					return 2873;
				
				case 48:
					return 2880;
				
				case 49:
					return 2887;
				
				case 50:
					return 2893;
				
				case 51:
					return 2899;
				
				case 52:
					return 2941;
				
				case 53:
					return 2948;
				
				case 54:
					return 2955;
				
				case 55:
					return 2962;
				
				case 56:
					return 2969;
				
				case 57:
					return 2976;
				
				case 58:
					return 2983;
				
				case 59:
					return 2990;
				
				case 60:
					return 2997;
				
				case 61:
					return 3004;
				
				case 62:
					return 3011;
				
				case 63:
					return 3017;
				
				case 64:
					return 3023;
				
				case 65:
					return 3224;
				
				case 66:
					return 3232;
				
				case 67:
					return 3240;
				
				case 68:
					return 3248;
				
				case 69:
					return 3256;
				
				case 70:
					return 3264;
				
				case 71:
					return 3272;
				
				case 72:
					return 3280;
				
				case 73:
					return 3288;
				
				case 74:
					return 3296;
				
				case 75:
					return 3304;
				
				case 76:
					return 3312;
				
				case 77:
					return 3320;
				
				case 78:
					return 3328;
				
				case joaat("mpsv_lp0_31"):
					return 3336;
				
				case 80:
					return 3344;
				
				case 81:
					return 3352;
				
				case 82:
					return 3360;
				
				case 83:
					return 3368;
				
				case 84:
					return 3376;
				
				case 85:
					return 3384;
				
				case 86:
					return 3391;
				
				case 87:
					return 3398;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4012;
				
				case 89:
					return 4020;
				
				case 90:
					return 4028;
				
				case 91:
					return 4036;
				
				case 92:
					return 4044;
				
				case 93:
					return 4052;
				
				case 94:
					return 4060;
				
				case 95:
					return 4068;
				
				case 96:
					return 4076;
				
				case 97:
					return 4084;
				
				case 98:
					return 4092;
				
				case 99:
					return 4100;
				
				case 100:
					return 4108;
				
				case 101:
					return 4116;
				
				case 102:
					return 4124;
				
				case 103:
					return 4132;
				
				case 104:
					return 4140;
				
				case 105:
					return 4148;
				
				case 106:
					return 4156;
				
				case 107:
					return 4164;
				
				case 108:
					return 4172;
				
				case 109:
					return 4180;
				
				case 110:
					return 4188;
				
				case 111:
					return 4196;
				
				case 112:
					return 4204;
				
				case 113:
					return 4212;
				
				case 114:
					return 4220;
				
				case 115:
					return 4228;
				
				case 116:
					return 4236;
				
				case 117:
					return 4244;
				
				case 118:
					return 4252;
				
				case 119:
					return 4260;
				
				case 120:
					return 4268;
				
				case 121:
					return 4276;
				
				case 122:
					return 4284;
				
				case 123:
					return 4292;
				
				case 124:
					return 4300;
				
				case 125:
					return 4308;
				
				case 126:
					return 4316;
				
				case 127:
					return 4324;
				
				case 128:
					return 4332;
				
				case 129:
					return 4340;
				
				case 130:
					return 4348;
				
				case 131:
					return 4356;
				
				case 132:
					return 4364;
				
				case 133:
					return 4372;
				
				case 134:
					return 4380;
				
				case 135:
					return 4388;
				
				case 136:
					return 4396;
				
				case 137:
					return 4404;
				
				case 138:
					return 4412;
				
				case 139:
					return 4420;
				
				case 140:
					return 4428;
				
				case 141:
					return 4436;
				
				case 142:
					return 4444;
				
				case 143:
					return 4452;
				
				case 144:
					return 4460;
				
				case 145:
					return 4468;
				
				case 146:
					return 4476;
				
				case 147:
					return 4484;
				
				case 148:
					return 4492;
				
				case 149:
					return 4500;
				
				case 150:
					return 4508;
				
				case 151:
					return 4516;
				
				case 152:
					return 4524;
				
				case 153:
					return 4532;
				
				case 154:
					return 4540;
				
				case 155:
					return 4548;
				
				case 156:
					return 4556;
				
				case 157:
					return 4564;
				
				case 158:
					return 5457;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5906;
				
				case 160:
					return 5913;
				
				case 161:
					return 5920;
				
				case 162:
					return 5927;
				
				case 163:
					return 5934;
				
				case 164:
					return 5941;
				
				case 165:
					return 5948;
				
				case 166:
					return 5955;
				
				case 167:
					return 5962;
				
				case 168:
					return 5969;
				
				case 169:
					return 5976;
				
				case 170:
					return 5983;
				
				case 171:
					return 5990;
				
				case 172:
					return 5997;
				
				case 173:
					return 6004;
				
				case 174:
					return 6011;
				
				case 175:
					return 6018;
				
				case 176:
					return 6025;
				
				case 177:
					return 6032;
				
				case 178:
					return 6039;
				
				case 179:
					return 6046;
				
				case 180:
					return 6053;
				
				case 181:
					return 6060;
				
				case 182:
					return 6067;
				
				case 183:
					return 6074;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2818;
				
				case 40:
					return 2825;
				
				case 41:
					return 2832;
				
				case 42:
					return 2839;
				
				case 43:
					return 2846;
				
				case 44:
					return 2853;
				
				case 45:
					return 2860;
				
				case 46:
					return 2867;
				
				case 47:
					return 2874;
				
				case 48:
					return 2881;
				
				case 49:
					return 2888;
				
				case 50:
					return 2894;
				
				case 51:
					return 2900;
				
				case 52:
					return 2942;
				
				case 53:
					return 2949;
				
				case 54:
					return 2956;
				
				case 55:
					return 2963;
				
				case 56:
					return 2970;
				
				case 57:
					return 2977;
				
				case 58:
					return 2984;
				
				case 59:
					return 2991;
				
				case 60:
					return 2998;
				
				case 61:
					return 3005;
				
				case 62:
					return 3012;
				
				case 63:
					return 3018;
				
				case 64:
					return 3024;
				
				case 65:
					return 3225;
				
				case 66:
					return 3233;
				
				case 67:
					return 3241;
				
				case 68:
					return 3249;
				
				case 69:
					return 3257;
				
				case 70:
					return 3265;
				
				case 71:
					return 3273;
				
				case 72:
					return 3281;
				
				case 73:
					return 3289;
				
				case 74:
					return 3297;
				
				case 75:
					return 3305;
				
				case 76:
					return 3313;
				
				case 77:
					return 3321;
				
				case 78:
					return 3329;
				
				case joaat("mpsv_lp0_31"):
					return 3337;
				
				case 80:
					return 3345;
				
				case 81:
					return 3353;
				
				case 82:
					return 3361;
				
				case 83:
					return 3369;
				
				case 84:
					return 3377;
				
				case 85:
					return 3385;
				
				case 86:
					return 3392;
				
				case 87:
					return 3399;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4013;
				
				case 89:
					return 4021;
				
				case 90:
					return 4029;
				
				case 91:
					return 4037;
				
				case 92:
					return 4045;
				
				case 93:
					return 4053;
				
				case 94:
					return 4061;
				
				case 95:
					return 4069;
				
				case 96:
					return 4077;
				
				case 97:
					return 4085;
				
				case 98:
					return 4093;
				
				case 99:
					return 4101;
				
				case 100:
					return 4109;
				
				case 101:
					return 4117;
				
				case 102:
					return 4125;
				
				case 103:
					return 4133;
				
				case 104:
					return 4141;
				
				case 105:
					return 4149;
				
				case 106:
					return 4157;
				
				case 107:
					return 4165;
				
				case 108:
					return 4173;
				
				case 109:
					return 4181;
				
				case 110:
					return 4189;
				
				case 111:
					return 4197;
				
				case 112:
					return 4205;
				
				case 113:
					return 4213;
				
				case 114:
					return 4221;
				
				case 115:
					return 4229;
				
				case 116:
					return 4237;
				
				case 117:
					return 4245;
				
				case 118:
					return 4253;
				
				case 119:
					return 4261;
				
				case 120:
					return 4269;
				
				case 121:
					return 4277;
				
				case 122:
					return 4285;
				
				case 123:
					return 4293;
				
				case 124:
					return 4301;
				
				case 125:
					return 4309;
				
				case 126:
					return 4317;
				
				case 127:
					return 4325;
				
				case 128:
					return 4333;
				
				case 129:
					return 4341;
				
				case 130:
					return 4349;
				
				case 131:
					return 4357;
				
				case 132:
					return 4365;
				
				case 133:
					return 4373;
				
				case 134:
					return 4381;
				
				case 135:
					return 4389;
				
				case 136:
					return 4397;
				
				case 137:
					return 4405;
				
				case 138:
					return 4413;
				
				case 139:
					return 4421;
				
				case 140:
					return 4429;
				
				case 141:
					return 4437;
				
				case 142:
					return 4445;
				
				case 143:
					return 4453;
				
				case 144:
					return 4461;
				
				case 145:
					return 4469;
				
				case 146:
					return 4477;
				
				case 147:
					return 4485;
				
				case 148:
					return 4493;
				
				case 149:
					return 4501;
				
				case 150:
					return 4509;
				
				case 151:
					return 4517;
				
				case 152:
					return 4525;
				
				case 153:
					return 4533;
				
				case 154:
					return 4541;
				
				case 155:
					return 4549;
				
				case 156:
					return 4557;
				
				case 157:
					return 4565;
				
				case 158:
					return 5458;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5907;
				
				case 160:
					return 5914;
				
				case 161:
					return 5921;
				
				case 162:
					return 5928;
				
				case 163:
					return 5935;
				
				case 164:
					return 5942;
				
				case 165:
					return 5949;
				
				case 166:
					return 5956;
				
				case 167:
					return 5963;
				
				case 168:
					return 5970;
				
				case 169:
					return 5977;
				
				case 170:
					return 5984;
				
				case 171:
					return 5991;
				
				case 172:
					return 5998;
				
				case 173:
					return 6005;
				
				case 174:
					return 6012;
				
				case 175:
					return 6019;
				
				case 176:
					return 6026;
				
				case 177:
					return 6033;
				
				case 178:
					return 6040;
				
				case 179:
					return 6047;
				
				case 180:
					return 6054;
				
				case 181:
					return 6061;
				
				case 182:
					return 6068;
				
				case 183:
					return 6075;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2819;
				
				case 40:
					return 2826;
				
				case 41:
					return 2833;
				
				case 42:
					return 2840;
				
				case 43:
					return 2847;
				
				case 44:
					return 2854;
				
				case 45:
					return 2861;
				
				case 46:
					return 2868;
				
				case 47:
					return 2875;
				
				case 48:
					return 2882;
				
				case 49:
					return 2889;
				
				case 50:
					return 2895;
				
				case 51:
					return 2901;
				
				case 52:
					return 2943;
				
				case 53:
					return 2950;
				
				case 54:
					return 2957;
				
				case 55:
					return 2964;
				
				case 56:
					return 2971;
				
				case 57:
					return 2978;
				
				case 58:
					return 2985;
				
				case 59:
					return 2992;
				
				case 60:
					return 2999;
				
				case 61:
					return 3006;
				
				case 62:
					return 3013;
				
				case 63:
					return 3019;
				
				case 64:
					return 3025;
				
				case 65:
					return 3226;
				
				case 66:
					return 3234;
				
				case 67:
					return 3242;
				
				case 68:
					return 3250;
				
				case 69:
					return 3258;
				
				case 70:
					return 3266;
				
				case 71:
					return 3274;
				
				case 72:
					return 3282;
				
				case 73:
					return 3290;
				
				case 74:
					return 3298;
				
				case 75:
					return 3306;
				
				case 76:
					return 3314;
				
				case 77:
					return 3322;
				
				case 78:
					return 3330;
				
				case joaat("mpsv_lp0_31"):
					return 3338;
				
				case 80:
					return 3346;
				
				case 81:
					return 3354;
				
				case 82:
					return 3362;
				
				case 83:
					return 3370;
				
				case 84:
					return 3378;
				
				case 85:
					return 3386;
				
				case 86:
					return 3393;
				
				case 87:
					return 3400;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4014;
				
				case 89:
					return 4022;
				
				case 90:
					return 4030;
				
				case 91:
					return 4038;
				
				case 92:
					return 4046;
				
				case 93:
					return 4054;
				
				case 94:
					return 4062;
				
				case 95:
					return 4070;
				
				case 96:
					return 4078;
				
				case 97:
					return 4086;
				
				case 98:
					return 4094;
				
				case 99:
					return 4102;
				
				case 100:
					return 4110;
				
				case 101:
					return 4118;
				
				case 102:
					return 4126;
				
				case 103:
					return 4134;
				
				case 104:
					return 4142;
				
				case 105:
					return 4150;
				
				case 106:
					return 4158;
				
				case 107:
					return 4166;
				
				case 108:
					return 4174;
				
				case 109:
					return 4182;
				
				case 110:
					return 4190;
				
				case 111:
					return 4198;
				
				case 112:
					return 4206;
				
				case 113:
					return 4214;
				
				case 114:
					return 4222;
				
				case 115:
					return 4230;
				
				case 116:
					return 4238;
				
				case 117:
					return 4246;
				
				case 118:
					return 4254;
				
				case 119:
					return 4262;
				
				case 120:
					return 4270;
				
				case 121:
					return 4278;
				
				case 122:
					return 4286;
				
				case 123:
					return 4294;
				
				case 124:
					return 4302;
				
				case 125:
					return 4310;
				
				case 126:
					return 4318;
				
				case 127:
					return 4326;
				
				case 128:
					return 4334;
				
				case 129:
					return 4342;
				
				case 130:
					return 4350;
				
				case 131:
					return 4358;
				
				case 132:
					return 4366;
				
				case 133:
					return 4374;
				
				case 134:
					return 4382;
				
				case 135:
					return 4390;
				
				case 136:
					return 4398;
				
				case 137:
					return 4406;
				
				case 138:
					return 4414;
				
				case 139:
					return 4422;
				
				case 140:
					return 4430;
				
				case 141:
					return 4438;
				
				case 142:
					return 4446;
				
				case 143:
					return 4454;
				
				case 144:
					return 4462;
				
				case 145:
					return 4470;
				
				case 146:
					return 4478;
				
				case 147:
					return 4486;
				
				case 148:
					return 4494;
				
				case 149:
					return 4502;
				
				case 150:
					return 4510;
				
				case 151:
					return 4518;
				
				case 152:
					return 4526;
				
				case 153:
					return 4534;
				
				case 154:
					return 4542;
				
				case 155:
					return 4550;
				
				case 156:
					return 4558;
				
				case 157:
					return 4566;
				
				case 158:
					return 5459;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5908;
				
				case 160:
					return 5915;
				
				case 161:
					return 5922;
				
				case 162:
					return 5929;
				
				case 163:
					return 5936;
				
				case 164:
					return 5943;
				
				case 165:
					return 5950;
				
				case 166:
					return 5957;
				
				case 167:
					return 5964;
				
				case 168:
					return 5971;
				
				case 169:
					return 5978;
				
				case 170:
					return 5985;
				
				case 171:
					return 5992;
				
				case 172:
					return 5999;
				
				case 173:
					return 6006;
				
				case 174:
					return 6013;
				
				case 175:
					return 6020;
				
				case 176:
					return 6027;
				
				case 177:
					return 6034;
				
				case 178:
					return 6041;
				
				case 179:
					return 6048;
				
				case 180:
					return 6055;
				
				case 181:
					return 6062;
				
				case 182:
					return 6069;
				
				case 183:
					return 6076;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 39:
					return 2821;
				
				case 40:
					return 2828;
				
				case 41:
					return 2835;
				
				case 42:
					return 2842;
				
				case 43:
					return 2849;
				
				case 44:
					return 2856;
				
				case 45:
					return 2863;
				
				case 46:
					return 2870;
				
				case 47:
					return 2877;
				
				case 48:
					return 2884;
				
				case 52:
					return 2945;
				
				case 53:
					return 2952;
				
				case 54:
					return 2959;
				
				case 55:
					return 2966;
				
				case 56:
					return 2973;
				
				case 57:
					return 2980;
				
				case 58:
					return 2987;
				
				case 59:
					return 2994;
				
				case 60:
					return 3001;
				
				case 61:
					return 3008;
				
				case 65:
					return 3229;
				
				case 66:
					return 3237;
				
				case 67:
					return 3245;
				
				case 68:
					return 3253;
				
				case 69:
					return 3261;
				
				case 70:
					return 3269;
				
				case 71:
					return 3277;
				
				case 72:
					return 3285;
				
				case 73:
					return 3293;
				
				case 74:
					return 3301;
				
				case 75:
					return 3309;
				
				case 76:
					return 3317;
				
				case 77:
					return 3325;
				
				case 78:
					return 3333;
				
				case joaat("mpsv_lp0_31"):
					return 3341;
				
				case 80:
					return 3349;
				
				case 81:
					return 3357;
				
				case 82:
					return 3365;
				
				case 83:
					return 3373;
				
				case 84:
					return 3381;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4017;
				
				case 89:
					return 4025;
				
				case 90:
					return 4033;
				
				case 91:
					return 4041;
				
				case 92:
					return 4049;
				
				case 93:
					return 4057;
				
				case 94:
					return 4065;
				
				case 95:
					return 4073;
				
				case 96:
					return 4081;
				
				case 97:
					return 4089;
				
				case 98:
					return 4097;
				
				case 99:
					return 4105;
				
				case 100:
					return 4113;
				
				case 101:
					return 4121;
				
				case 102:
					return 4129;
				
				case 103:
					return 4137;
				
				case 104:
					return 4145;
				
				case 105:
					return 4153;
				
				case 106:
					return 4161;
				
				case 107:
					return 4169;
				
				case 108:
					return 4177;
				
				case 109:
					return 4185;
				
				case 110:
					return 4193;
				
				case 111:
					return 4201;
				
				case 112:
					return 4209;
				
				case 113:
					return 4217;
				
				case 114:
					return 4225;
				
				case 115:
					return 4233;
				
				case 116:
					return 4241;
				
				case 117:
					return 4249;
				
				case 118:
					return 4257;
				
				case 119:
					return 4265;
				
				case 120:
					return 4273;
				
				case 121:
					return 4281;
				
				case 122:
					return 4289;
				
				case 123:
					return 4297;
				
				case 124:
					return 4305;
				
				case 125:
					return 4313;
				
				case 126:
					return 4321;
				
				case 127:
					return 4329;
				
				case 128:
					return 4337;
				
				case 129:
					return 4345;
				
				case 130:
					return 4353;
				
				case 131:
					return 4361;
				
				case 132:
					return 4369;
				
				case 133:
					return 4377;
				
				case 134:
					return 4385;
				
				case 135:
					return 4393;
				
				case 136:
					return 4401;
				
				case 137:
					return 4409;
				
				case 138:
					return 4417;
				
				case 139:
					return 4425;
				
				case 140:
					return 4433;
				
				case 141:
					return 4441;
				
				case 142:
					return 4449;
				
				case 143:
					return 4457;
				
				case 144:
					return 4465;
				
				case 145:
					return 4473;
				
				case 146:
					return 4481;
				
				case 147:
					return 4489;
				
				case 148:
					return 4497;
				
				case 149:
					return 4505;
				
				case 150:
					return 4513;
				
				case 151:
					return 4521;
				
				case 152:
					return 4529;
				
				case 153:
					return 4537;
				
				case 154:
					return 4545;
				
				case 155:
					return 4553;
				
				case 156:
					return 4561;
				
				case 157:
					return 4569;
				
				case 158:
					return 5462;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5910;
				
				case 160:
					return 5917;
				
				case 161:
					return 5924;
				
				case 162:
					return 5931;
				
				case 163:
					return 5938;
				
				case 164:
					return 5945;
				
				case 165:
					return 5952;
				
				case 166:
					return 5959;
				
				case 167:
					return 5966;
				
				case 168:
					return 5973;
				
				case 169:
					return 5980;
				
				case 170:
					return 5987;
				
				case 171:
					return 5994;
				
				case 172:
					return 6001;
				
				case 173:
					return 6008;
				
				case 174:
					return 6015;
				
				case 175:
					return 6022;
				
				case 176:
					return 6029;
				
				case 177:
					return 6036;
				
				case 178:
					return 6043;
				
				case 179:
					return 6050;
				
				case 180:
					return 6057;
				
				case 181:
					return 6064;
				
				case 182:
					return 6071;
				
				case 183:
					return 6078;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2820;
				
				case 40:
					return 2827;
				
				case 41:
					return 2834;
				
				case 42:
					return 2841;
				
				case 43:
					return 2848;
				
				case 44:
					return 2855;
				
				case 45:
					return 2862;
				
				case 46:
					return 2869;
				
				case 47:
					return 2876;
				
				case 48:
					return 2883;
				
				case 49:
					return 2890;
				
				case 50:
					return 2896;
				
				case 51:
					return 2902;
				
				case 52:
					return 2944;
				
				case 53:
					return 2951;
				
				case 54:
					return 2958;
				
				case 55:
					return 2965;
				
				case 56:
					return 2972;
				
				case 57:
					return 2979;
				
				case 58:
					return 2986;
				
				case 59:
					return 2993;
				
				case 60:
					return 3000;
				
				case 61:
					return 3007;
				
				case 62:
					return 3014;
				
				case 63:
					return 3020;
				
				case 64:
					return 3026;
				
				case 65:
					return 3227;
				
				case 66:
					return 3235;
				
				case 67:
					return 3243;
				
				case 68:
					return 3251;
				
				case 69:
					return 3259;
				
				case 70:
					return 3267;
				
				case 71:
					return 3275;
				
				case 72:
					return 3283;
				
				case 73:
					return 3291;
				
				case 74:
					return 3299;
				
				case 75:
					return 3307;
				
				case 76:
					return 3315;
				
				case 77:
					return 3324;
				
				case 78:
					return 3332;
				
				case joaat("mpsv_lp0_31"):
					return 3339;
				
				case 80:
					return 3347;
				
				case 81:
					return 3355;
				
				case 82:
					return 3363;
				
				case 83:
					return 3371;
				
				case 84:
					return 3379;
				
				case 85:
					return 3387;
				
				case 86:
					return 3394;
				
				case 87:
					return 3401;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4015;
				
				case 89:
					return 4023;
				
				case 90:
					return 4031;
				
				case 91:
					return 4039;
				
				case 92:
					return 4047;
				
				case 93:
					return 4055;
				
				case 94:
					return 4063;
				
				case 95:
					return 4071;
				
				case 96:
					return 4079;
				
				case 97:
					return 4087;
				
				case 98:
					return 4095;
				
				case 99:
					return 4103;
				
				case 100:
					return 4112;
				
				case 101:
					return 4120;
				
				case 102:
					return 4127;
				
				case 103:
					return 4135;
				
				case 104:
					return 4143;
				
				case 105:
					return 4151;
				
				case 106:
					return 4159;
				
				case 107:
					return 4167;
				
				case 108:
					return 4175;
				
				case 109:
					return 4183;
				
				case 110:
					return 4191;
				
				case 111:
					return 4199;
				
				case 112:
					return 4207;
				
				case 113:
					return 4215;
				
				case 114:
					return 4223;
				
				case 115:
					return 4231;
				
				case 116:
					return 4239;
				
				case 117:
					return 4247;
				
				case 118:
					return 4255;
				
				case 119:
					return 4263;
				
				case 120:
					return 4272;
				
				case 121:
					return 4280;
				
				case 122:
					return 4287;
				
				case 123:
					return 4295;
				
				case 124:
					return 4303;
				
				case 125:
					return 4311;
				
				case 126:
					return 4319;
				
				case 127:
					return 4327;
				
				case 128:
					return 4335;
				
				case 129:
					return 4343;
				
				case 130:
					return 4351;
				
				case 131:
					return 4359;
				
				case 132:
					return 4367;
				
				case 133:
					return 4375;
				
				case 134:
					return 4383;
				
				case 135:
					return 4391;
				
				case 136:
					return 4399;
				
				case 137:
					return 4407;
				
				case 138:
					return 4415;
				
				case 139:
					return 4423;
				
				case 140:
					return 4432;
				
				case 141:
					return 4440;
				
				case 142:
					return 4447;
				
				case 143:
					return 4455;
				
				case 144:
					return 4463;
				
				case 145:
					return 4471;
				
				case 146:
					return 4479;
				
				case 147:
					return 4487;
				
				case 148:
					return 4495;
				
				case 149:
					return 4503;
				
				case 150:
					return 4511;
				
				case 151:
					return 4519;
				
				case 152:
					return 4527;
				
				case 153:
					return 4535;
				
				case 154:
					return 4543;
				
				case 155:
					return 4551;
				
				case 156:
					return 4559;
				
				case 157:
					return 4567;
				
				case 158:
					return 5460;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5909;
				
				case 160:
					return 5916;
				
				case 161:
					return 5923;
				
				case 162:
					return 5930;
				
				case 163:
					return 5937;
				
				case 164:
					return 5944;
				
				case 165:
					return 5951;
				
				case 166:
					return 5958;
				
				case 167:
					return 5965;
				
				case 168:
					return 5972;
				
				case 169:
					return 5979;
				
				case 170:
					return 5986;
				
				case 171:
					return 5993;
				
				case 172:
					return 6000;
				
				case 173:
					return 6007;
				
				case 174:
					return 6014;
				
				case 175:
					return 6021;
				
				case 176:
					return 6028;
				
				case 177:
					return 6035;
				
				case 178:
					return 6042;
				
				case 179:
					return 6049;
				
				case 180:
					return 6056;
				
				case 181:
					return 6063;
				
				case 182:
					return 6070;
				
				case 183:
					return 6077;
				
				default:
			}
			break;
			break;
	}
	return 1626;
}

void func_232(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_9364)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1776225[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

bool func_233()
{
	return func_101(5372, -1, 0) != 0;
}

int func_234()
{
	if (unk_0x20551D6D924ED04B())
	{
		return 1;
	}
	return 0;
}

void func_235()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char cVar7[64];
	
	if ((!unk_0x27CA09C6DFAB1E79() || !func_238(-1)) || !iLocal_155 == func_28())
	{
		if (iLocal_153 != 0)
		{
			iVar0 = 0;
			while (iVar0 < 184)
			{
				iLocal_156[iVar0] = 0;
				iVar0++;
			}
			iLocal_153 = 0;
			iLocal_154 = 0;
		}
		if (!iLocal_155 == func_28())
		{
			iLocal_155 = func_28();
		}
		return;
	}
	if (func_234())
	{
		return;
	}
	iVar1 = func_237(joaat("mpply_ingamestore_moneyspent"));
	iVar2 = func_101(2055, -1, 0);
	if (iLocal_153 != iVar1)
	{
		iVar3 = (iVar2 - iLocal_154);
		iVar4 = 0;
		while (iVar4 < 184)
		{
			if (iLocal_156[iVar4] != Global_1319069[iVar4 /*140*/].f_138)
			{
				if (iLocal_153 != 0)
				{
					iVar5 = Global_1319069[iVar4 /*140*/].f_138;
					StringCopy(&cVar7, "", 64);
					StringCopy(&cVar7, "MODEL_", 64);
					StringIntConCat(&cVar7, Global_1319069[iVar4 /*140*/].f_66, 64);
					if (iVar5 == iVar3)
					{
						bVar6 = true;
					}
					else
					{
						bVar6 = false;
					}
					if (bVar6)
					{
					}
					else if (!unk_0x2A3398C6222EB190(Global_1319069[iVar4 /*140*/].f_101, 10))
					{
					}
					else
					{
						func_228(iVar4, -1);
						func_236();
					}
				}
				iLocal_156[iVar4] = Global_1319069[iVar4 /*140*/].f_138;
			}
			iVar4++;
		}
		iLocal_153 = iVar1;
		iLocal_154 = iVar2;
	}
}

void func_236()
{
	if (!Global_1767505)
	{
	}
	Global_1767505 = 1;
}

int func_237(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_238(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_28();
	}
	iParam0++;
	return Global_1312373[iParam0];
}

void func_239()
{
	if (unk_0x7832F791572D5809(joaat("am_mp_hangar")) > 0 || (unk_0x7832F791572D5809(joaat("am_mp_smpl_interior_ext")) > 0 && !unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 10)))
	{
		if (Global_1592729.f_169)
		{
			if (!iLocal_152)
			{
				iLocal_152 = 1;
			}
		}
	}
	else if (iLocal_152)
	{
		if (!unk_0x2A3398C6222EB190(Global_2501777.f_371.f_5, 2))
		{
			func_240();
		}
		iLocal_152 = 0;
	}
}

void func_240()
{
	Global_1592729 = -1;
	Global_1592729.f_3 = func_6();
	func_241(&(Global_1592729.f_4));
	Global_1592729.f_17 = 0;
	Global_1592729.f_18 = 0;
	Global_1592729.f_19 = 0;
	Global_1592729.f_20 = 0;
	Global_1592729.f_22 = 0;
	Global_1592729.f_24 = 0;
	Global_1592729.f_26 = 0;
	Global_1592729.f_27 = 0;
	Global_1592729.f_21 = -1;
	Global_1592729.f_169 = 0;
	Global_1592729.f_1 = -1;
	Global_1592729.f_2 = -1;
	Global_1592729.f_187 = -1;
	Global_1592729.f_188 = -1;
	Global_1592729.f_189 = { 0f, 0f, 0f };
}

void func_241(var uParam0)
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

void func_242()
{
	if ((func_244(unk_0x0031992CA618A445(), 0) && (unk_0x7832F791572D5809(joaat("am_mp_bunker")) <= 0 || !unk_0xE55A601AD360484C("AM_MP_BUNKER", -1, 1, 0))) && !unk_0xF4F91CD09D59F42E())
	{
		func_243();
	}
}

void func_243()
{
	int iVar0;
	
	if (unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar0, 0))
	{
		if (iVar0 != joaat("weapon_unarmed"))
		{
			unk_0x64517F908482FA52(unk_0x0031992CA618A445(), joaat("weapon_unarmed"), 1);
			unk_0x46EA1909922AC1A4(unk_0x0031992CA618A445(), 1);
		}
	}
	unk_0xC9621A9AD282CC14(0, 24, 1);
	unk_0xC9621A9AD282CC14(0, 257, 1);
	unk_0xC9621A9AD282CC14(0, 25, 1);
	unk_0xC9621A9AD282CC14(0, 37, 1);
	unk_0xC9621A9AD282CC14(0, 157, 1);
	unk_0xC9621A9AD282CC14(0, 159, 1);
	unk_0xC9621A9AD282CC14(0, 160, 1);
	unk_0xC9621A9AD282CC14(0, 161, 1);
	unk_0xC9621A9AD282CC14(0, 162, 1);
	unk_0xC9621A9AD282CC14(0, 163, 1);
	unk_0xC9621A9AD282CC14(0, 164, 1);
	unk_0xC9621A9AD282CC14(0, 165, 1);
	unk_0xC9621A9AD282CC14(0, 158, 1);
	unk_0xC9621A9AD282CC14(0, 101, 1);
	unk_0xC9621A9AD282CC14(0, 337, 1);
	unk_0xC9621A9AD282CC14(0, 53, 1);
	unk_0xC9621A9AD282CC14(0, 54, 1);
	unk_0xC9621A9AD282CC14(0, 47, 1);
	unk_0xC9621A9AD282CC14(0, 140, 1);
	unk_0xC9621A9AD282CC14(0, 141, 1);
	unk_0xC9621A9AD282CC14(0, 263, 1);
	unk_0xC9621A9AD282CC14(0, 264, 1);
	unk_0xC9621A9AD282CC14(0, 142, 1);
	unk_0xC9621A9AD282CC14(0, 143, 1);
	unk_0xC9621A9AD282CC14(0, 24, 1);
	unk_0xC9621A9AD282CC14(0, 257, 1);
	unk_0xC9621A9AD282CC14(0, 44, 1);
	unk_0xC9621A9AD282CC14(0, 282, 1);
	unk_0xC9621A9AD282CC14(0, 283, 1);
	unk_0xC9621A9AD282CC14(0, 284, 1);
	unk_0xC9621A9AD282CC14(0, 285, 1);
	unk_0xC9621A9AD282CC14(0, 69, 1);
	unk_0xC9621A9AD282CC14(0, 70, 1);
	unk_0xC9621A9AD282CC14(0, 114, 1);
	unk_0xC9621A9AD282CC14(0, 99, 1);
	unk_0xC9621A9AD282CC14(0, 100, 1);
	unk_0xC9621A9AD282CC14(0, 102, 1);
	unk_0xC9621A9AD282CC14(0, 22, 1);
	unk_0xC9621A9AD282CC14(0, 74, 1);
	unk_0xC9621A9AD282CC14(0, 68, 1);
	unk_0xC9621A9AD282CC14(0, 25, 1);
	unk_0xC9621A9AD282CC14(0, 36, 1);
	unk_0xC9621A9AD282CC14(0, 345, 1);
	unk_0xC9621A9AD282CC14(0, 346, 1);
	unk_0xC9621A9AD282CC14(0, 347, 1);
	unk_0xC9621A9AD282CC14(0, 91, 1);
	unk_0xC9621A9AD282CC14(0, 92, 1);
	unk_0xC9621A9AD282CC14(0, 81, 1);
	unk_0xC9621A9AD282CC14(0, 82, 1);
	unk_0xC9621A9AD282CC14(0, 83, 1);
	unk_0xC9621A9AD282CC14(0, 84, 1);
	unk_0xC9621A9AD282CC14(0, 85, 1);
}

int func_244(int iParam0, bool bParam1)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0xBB43B50327B1A590(iParam0, 1060.325f, -3064.239f, -100.9374f, 821.32f, -3255.345f, -75f, 0, 1, 0))
		{
			if (!bParam1)
			{
				if (((!unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 892.162f, -3170.261f, -98.12341f, 893.6292f, -3170.498f, -95.62341f, 2f, 0, 1, 0) && !unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 893.7611f, -3170.526f, -98.12341f, 895.2001f, -3170.787f, -95.62341f, 2f, 0, 1, 0)) && !unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 895.3466f, -3170.819f, -98.12341f, 896.7942f, -3171.079f, -95.62341f, 2f, 0, 1, 0)) && !unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 896.9323f, -3171.1f, -98.12341f, 898.3902f, -3171.377f, -95.62341f, 2f, 0, 1, 0))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_245()
{
	if (func_5(unk_0x3D35F9864E4640B1(), 1, 1))
	{
		if (func_38())
		{
			if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				func_19(0);
			}
		}
	}
}

void func_246()
{
	if (func_151(unk_0x3D35F9864E4640B1()))
	{
		if (func_247(1))
		{
			unk_0xC9621A9AD282CC14(0, 72, 1);
			unk_0xC9621A9AD282CC14(0, 71, 1);
		}
	}
}

bool func_247(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

void func_248()
{
	if (!iLocal_143)
	{
		if (unk_0x2A3398C6222EB190(Global_2501777.f_371.f_5, 0))
		{
			iLocal_143 = 1;
			func_2(&uLocal_141);
		}
	}
	else if (!unk_0x2A3398C6222EB190(Global_2501777.f_371.f_5, 0))
	{
		if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 4))
		{
			if (!Global_1757705 && unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
			{
				if (!func_3(&uLocal_141))
				{
					func_37(&uLocal_141, 0, 0);
				}
				else if (func_36(&uLocal_141, 1000, 1))
				{
					unk_0xD804ACF2A7171150(&(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14), 4);
					iLocal_143 = 0;
				}
			}
		}
		else
		{
			iLocal_143 = 0;
		}
	}
}

void func_249()
{
	if (Global_2422142[unk_0xED1168B8D2D313FA() /*399*/].f_124 == 1 && unk_0xE6A94C903E0230BE("cs3_07_mpgates"))
	{
		unk_0x24F0CAC77C3B1EBE("cs3_07_mpgates");
	}
}

void func_250()
{
	int iVar0;
	
	if (Global_2445582.f_13 && Global_262145.f_5152[5] == Global_1641087.f_96810)
	{
		if (!unk_0x8682D8A6269E52C9(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA())) && unk_0x90219307C9D2728D(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), 0))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), 0);
			if (unk_0xE9559A12052415BE(iVar0) == joaat("tampa3") && !unk_0x2A3398C6222EB190(uLocal_44, 0))
			{
				if (unk_0x43CF7C22C63E44EA(iVar0, 1) > 0 && unk_0xBE7294CB9B3BEC34(iVar0, 1) == -1)
				{
					unk_0x99E14FF48B75F303(iVar0, 1, 0);
					unk_0x5A814851114E34FB(iVar0, 1, 0, false);
				}
				if (unk_0x43CF7C22C63E44EA(iVar0, 2) > 0 && unk_0xBE7294CB9B3BEC34(iVar0, 2) == -1)
				{
					unk_0x99E14FF48B75F303(iVar0, 2, 0);
					unk_0x5A814851114E34FB(iVar0, 2, 0, false);
				}
				unk_0xCD7E92DE2BFA0B0D(&iLocal_44, 0);
			}
		}
		else if (unk_0x2A3398C6222EB190(iLocal_44, 0))
		{
			unk_0xD804ACF2A7171150(&iLocal_44, 0);
		}
	}
}

void func_251()
{
	int iVar0;
	int iVar1;
	
	if (Global_1641087.f_116067 == 54)
	{
		if (!unk_0x8682D8A6269E52C9(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA())))
		{
			if (!unk_0x01E5C4868E4E75B3())
			{
				unk_0xD6A092D1F1B9A9F1(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), 184, 1);
				unk_0xD6A092D1F1B9A9F1(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), 360, 1);
				unk_0xD6A092D1F1B9A9F1(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), 366, 0);
			}
			else
			{
				unk_0xD6A092D1F1B9A9F1(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), 184, 0);
				unk_0xD6A092D1F1B9A9F1(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), 366, 1);
			}
		}
		iVar1 = unk_0xB5E2A107E006EC7A(unk_0xED1168B8D2D313FA());
		if (((iVar1 > -1 && !unk_0x8682D8A6269E52C9(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()))) && !unk_0x90219307C9D2728D(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()), 0)) && !unk_0x01E5C4868E4E75B3())
		{
			if (!func_3(&Local_40))
			{
				func_37(&Local_40, 0, 0);
			}
			if (func_3(&Local_40) && func_252(Local_40, 7500, 0))
			{
				unk_0x3000ECF14A659126(unk_0xD33F4BC17EB987E5(unk_0xED1168B8D2D313FA()));
				iVar0 = 0;
				while (iVar0 <= 16)
				{
					if (unk_0x2A3398C6222EB190(Global_1641087.f_96[iVar1 /*9318*/].f_4771[iVar0], 10))
					{
						unk_0xCD7E92DE2BFA0B0D(&uLocal_42, iVar0);
						unk_0xD804ACF2A7171150(&(Global_1641087.f_96[iVar1 /*9318*/].f_4771[iVar0]), 10);
					}
					iVar0++;
				}
				func_2(&Local_40);
				unk_0xCD7E92DE2BFA0B0D(&uLocal_43, 0);
			}
		}
		else if (!unk_0x01E5C4868E4E75B3())
		{
			if (func_3(&Local_40))
			{
				func_2(&Local_40);
			}
			if (unk_0x2A3398C6222EB190(uLocal_43, 0))
			{
				unk_0xD804ACF2A7171150(&iLocal_43, 0);
				iVar0 = 0;
				while (iVar0 <= 16)
				{
					if (unk_0x2A3398C6222EB190(uLocal_42, iVar0))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Global_1641087.f_96[iVar1 /*9318*/].f_4771[iVar0]), 10);
						unk_0xD804ACF2A7171150(&iLocal_42, iVar0);
					}
					iVar0++;
				}
			}
		}
	}
}

int func_252(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x27CA09C6DFAB1E79() && !bParam3)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_253()
{
	int iVar0;
	
	if (unk_0xF4F91CD09D59F42E())
	{
		if (iLocal_349)
		{
			if (Global_980439 != 9)
			{
				iLocal_349 = 0;
			}
		}
		if (Global_1641087.f_116067 == 55)
		{
			if (unk_0x2A3398C6222EB190(Global_980439.f_2, 21))
			{
				if (!iLocal_349)
				{
					if (Global_2422142[unk_0xED1168B8D2D313FA() /*399*/].f_231 == 99 && unk_0x46F4AE18D5506B08(unk_0xED1168B8D2D313FA()))
					{
						unk_0xD804ACF2A7171150(&Global_2359302, 25);
						iLocal_349 = 1;
					}
				}
			}
			else if (!unk_0x2A3398C6222EB190(Global_2359302, 25))
			{
				unk_0xCD7E92DE2BFA0B0D(&Global_2359302, 25);
			}
		}
	}
	else if (iLocal_349)
	{
		iLocal_349 = 0;
	}
	if (unk_0x9D3EA2635512FD6B())
	{
		if ((((func_258() || !func_257()) || func_256()) || func_255()) || func_254())
		{
			iLocal_348 = 1;
		}
		else if (iLocal_348)
		{
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (Global_794643.f_4[iVar0 /*88*/].f_80 == 55)
				{
					Global_794643.f_4[iVar0 /*88*/].f_71 = 4;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 31)
			{
				if (Global_967476.f_33[iVar0 /*88*/].f_80 == 55)
				{
					Global_967476.f_33[iVar0 /*88*/].f_71 = 4;
				}
				iVar0++;
			}
			iLocal_348 = 0;
		}
		if (iLocal_347 != Global_1641087.f_96810)
		{
			if (Global_1641087.f_116067 == 55)
			{
				Global_1641087.f_41[0] = 2;
				Global_1641087.f_41[1] = 2;
				Global_1641087.f_29 = 4;
			}
			iLocal_347 = Global_1641087.f_96810;
		}
		if (Global_1641087.f_116067 == 55)
		{
			if (unk_0x3D35F9864E4640B1() != -1)
			{
				if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_96 == 8)
				{
					if (Global_2445582.f_30 > 4)
					{
						Global_2445582.f_30 = 4;
					}
				}
			}
		}
	}
}

var func_254()
{
	return Global_2453457.f_1;
}

var func_255()
{
	return Global_1573274.f_10;
}

var func_256()
{
	return Global_2453457.f_4;
}

bool func_257()
{
	return Global_2453457.f_6;
}

var func_258()
{
	return Global_1573274.f_3;
}

void func_259()
{
	if (!func_34())
	{
		func_262(0);
		func_261(0);
		func_260(0);
	}
}

void func_260(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_1780828, 16))
		{
			unk_0xCD7E92DE2BFA0B0D(&Global_1780828, 16);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_1780828, 16))
	{
		unk_0xD804ACF2A7171150(&Global_1780828, 16);
	}
}

void func_261(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 7))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 7);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 7))
	{
		unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 7);
	}
}

void func_262(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_1780828, 12))
		{
			unk_0xCD7E92DE2BFA0B0D(&Global_1780828, 12);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_1780828, 12))
	{
		unk_0xD804ACF2A7171150(&Global_1780828, 12);
	}
}

void func_263()
{
	int iVar0;
	
	if (func_4(unk_0x3D35F9864E4640B1()) && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		iVar0 = unk_0x3251C2B06497863C(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), -1, 0);
		if (!unk_0x76B3C79DE564AFC6(iVar0))
		{
			unk_0x3000ECF14A659126(unk_0x0031992CA618A445());
		}
	}
}

void func_264()
{
	if (!iLocal_147)
	{
		if (func_269())
		{
			func_267();
			func_266();
			iLocal_147 = 1;
		}
	}
	else if (!func_269())
	{
		func_265();
		iLocal_147 = 0;
	}
}

void func_265()
{
	Global_2434915.f_933.f_10 = 0;
}

void func_266()
{
	Global_2434915.f_933.f_10 = 1;
}

void func_267()
{
	if (func_268())
	{
		Global_2434915.f_933.f_16 = 1;
	}
}

int func_268()
{
	if (Global_2434915.f_933.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_269()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		iVar0 = unk_0x89A8BEEC1AA87D33(unk_0x0031992CA618A445());
		if (unk_0x76B3C79DE564AFC6(iVar0) && !unk_0x7A6C051038031EFA(iVar0, 0))
		{
			iVar1 = -1;
			while (iVar1 <= 8)
			{
				iVar2 = iVar1;
				if (!unk_0x00E962E9D49FD6C4(iVar0, iVar2, 0))
				{
					iVar3 = unk_0x3251C2B06497863C(iVar0, iVar2, 0);
					if (unk_0x76B3C79DE564AFC6(iVar3))
					{
						iVar4 = unk_0x46E9A8D99AF6D7BC(iVar3);
						if (iVar4 != func_6() && func_5(iVar4, 1, 1))
						{
							if (func_4(iVar4))
							{
								return 1;
							}
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

void func_270()
{
	if (func_16(unk_0x3D35F9864E4640B1()) && func_278())
	{
		if (!func_3(&uLocal_144))
		{
			if (func_271())
			{
				func_37(&uLocal_144, 0, 0);
				iLocal_146 = 1;
			}
		}
		if (func_3(&uLocal_144))
		{
			if (func_271())
			{
				func_40(&uLocal_144, 0, 0);
				if (!Global_2488784)
				{
					Global_2488784 = 1;
					iLocal_146 = 1;
				}
			}
			else if (func_36(&uLocal_144, 10000, 0))
			{
				func_2(&uLocal_144);
				Global_2488784 = 0;
				iLocal_146 = 0;
			}
			else if (!Global_2488784)
			{
				Global_2488784 = 0;
				iLocal_146 = 1;
			}
		}
	}
	else if (iLocal_146)
	{
		Global_2488784 = 0;
		iLocal_146 = 0;
		func_2(&uLocal_144);
	}
}

int func_271()
{
	if (unk_0x0CF4609684193305())
	{
		return 1;
	}
	if (!func_34())
	{
		return 1;
	}
	if (func_277() || func_272())
	{
		return 1;
	}
	return 0;
}

int func_272()
{
	if (((func_276() || func_275()) || func_274()) || func_273())
	{
		return 1;
	}
	return 0;
}

bool func_273()
{
	return unk_0x2A3398C6222EB190(Global_2445582, 1);
}

bool func_274()
{
	return unk_0x2A3398C6222EB190(Global_2445582, 2);
}

bool func_275()
{
	return unk_0x2A3398C6222EB190(Global_2445582, 20);
}

var func_276()
{
	return Global_2445582.f_579;
}

var func_277()
{
	return Global_1312822;
}

int func_278()
{
	int iVar0;
	
	if (!func_279(unk_0x0031992CA618A445()))
	{
		return 0;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
		return unk_0x3251C2B06497863C(iVar0, -1, 0) == unk_0x0031992CA618A445();
	}
	return 1;
}

int func_279(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (!unk_0x7A6C051038031EFA(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_280()
{
	if (unk_0x3D35F9864E4640B1() != func_6())
	{
		if (func_281(unk_0x3D35F9864E4640B1()))
		{
			if (func_152())
			{
				if (unk_0xF9FC07CC13402AEF())
				{
					if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
					{
						if ((!unk_0x8CAADD2AA5EDCAAC(unk_0x0031992CA618A445()) && !unk_0x30758DD2AA5FF762()) && !unk_0x3CF56F4219E5B69A(unk_0x3D35F9864E4640B1()))
						{
							if (!func_3(&uLocal_139))
							{
								func_37(&uLocal_139, 0, 0);
							}
							if (func_36(&uLocal_139, 10000, 0))
							{
								Global_1780828.f_27 = 1;
							}
						}
						else if (func_3(&uLocal_139))
						{
							func_2(&uLocal_139);
						}
					}
				}
				if ((unk_0xA83FFA3FA7711E6D() % 30) == 0)
				{
				}
			}
		}
		else if (func_3(&uLocal_139))
		{
			func_2(&uLocal_139);
		}
	}
}

int func_281(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_17(Global_2422142[iParam0 /*399*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

void func_282()
{
	if ((func_16(unk_0x3D35F9864E4640B1()) && !unk_0xF4F91CD09D59F42E()) && !unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if ((((!unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 892.162f, -3170.261f, -98.12341f, 893.6292f, -3170.498f, -95.62341f, 2f, 0, 1, 0) && !unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 893.7611f, -3170.526f, -98.12341f, 895.2001f, -3170.787f, -95.62341f, 2f, 0, 1, 0)) && !unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 895.3466f, -3170.819f, -98.12341f, 896.7942f, -3171.079f, -95.62341f, 2f, 0, 1, 0)) && !unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 896.9323f, -3171.1f, -98.12341f, 898.3902f, -3171.377f, -95.62341f, 2f, 0, 1, 0)) || !Global_1348150)
		{
			func_243();
		}
	}
}

void func_283()
{
	func_284(23, 1);
	func_284(2, 1);
}

void func_284(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_25466, iParam0);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_25466, iParam0);
	}
}

void func_285()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_151(unk_0x3D35F9864E4640B1()) || (func_288(unk_0x3D35F9864E4640B1()) && Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_12 == 81))
	{
		func_232(156, &iVar0, 1);
		if (iVar0 >= 0)
		{
			if (unk_0x2A3398C6222EB190(Global_1319069[iVar0 /*140*/].f_101, 0) && !func_286())
			{
				if (!iLocal_138)
				{
					iLocal_138 = 1;
				}
			}
			else if (iLocal_138 && (!Global_2434915.f_502.f_30 || func_286()))
			{
				if (!unk_0x2A3398C6222EB190(Global_1319069[iVar0 /*140*/].f_101, 12))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1319069[iVar0 /*140*/].f_101), 12);
					iLocal_138 = 0;
				}
			}
		}
	}
	else if (iLocal_138)
	{
		iLocal_138 = 0;
	}
}

int func_286()
{
	if (func_287(2) || func_287(1))
	{
		return 1;
	}
	return 0;
}

bool func_287(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0x2A3398C6222EB190(Global_2434915.f_502.f_1, iParam0);
	}
	return unk_0x2A3398C6222EB190(Global_2434915.f_502.f_2, (iParam0 - 32));
}

int func_288(int iParam0)
{
	if (iParam0 != func_6() && func_5(iParam0, 1, 1))
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_318, 4);
	}
	return 0;
}

void func_289()
{
	if (func_5(unk_0x3D35F9864E4640B1(), 1, 1))
	{
		if (func_291(unk_0x3D35F9864E4640B1()) && !func_290(unk_0x3D35F9864E4640B1(), 0))
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
				{
					if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_205, 5))
					{
						if (!unk_0x00E962E9D49FD6C4(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), -1, 0))
						{
							iLocal_136 = unk_0x3251C2B06497863C(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), -1, 0);
						}
						if (unk_0x76B3C79DE564AFC6(iLocal_136) && !unk_0x7A6C051038031EFA(iLocal_136, 0))
						{
							if (!unk_0x90219307C9D2728D(iLocal_136, 0))
							{
								unk_0x471E558A661279DE(unk_0x0031992CA618A445(), 0, 0);
								unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_205), 5);
								iLocal_137 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_137)
		{
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_16 > 0)
			{
				switch (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_16)
				{
					case 103:
					case 104:
					case 105:
						unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), -1582.971f, -556.2847f, 33.9532f, 1, 0, 0, 1);
						Global_2446355.f_1.f_2840 = 1;
						break;
					
					case 106:
					case 107:
					case 108:
						unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), -1371.415f, -503.9825f, 32.1574f, 1, 0, 0, 1);
						Global_2446355.f_1.f_2840 = 1;
						break;
					
					case 109:
					case 110:
					case 111:
						unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), -114.8805f, -603.2027f, 35.2857f, 1, 0, 0, 1);
						Global_2446355.f_1.f_2840 = 1;
						break;
					
					case 112:
					case 113:
					case 114:
						unk_0x0A69FBBF51E1A08F(unk_0x0031992CA618A445(), -83.7985f, -791.2855f, 43.327f, 1, 0, 0, 1);
						Global_2446355.f_1.f_2840 = 1;
						break;
					
					default:
						break;
				}
			}
			else
			{
				unk_0x18D7C8000EDEAAB4(500);
				func_29(unk_0x3D35F9864E4640B1(), 1, 0);
				Global_2446355.f_1.f_2840 = 0;
				iLocal_137 = 0;
			}
		}
	}
}

bool func_290(int iParam0, bool bParam1)
{
	if (Global_1592922 != func_6())
	{
		if (!func_174(Global_1592922))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x3D35F9864E4640B1() != Global_1592922)
			{
				if (unk_0x2A3398C6222EB190(Global_2422142[Global_1592922 /*399*/].f_204, 24) || func_173(Global_1592922))
				{
					return 1;
				}
			}
		}
	}
	if (iParam0 == func_6())
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 24);
}

int func_291(int iParam0)
{
	if (func_171(Global_1593076[iParam0 /*647*/].f_259.f_16, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_292()
{
	if (Global_1348150)
	{
		unk_0xC9621A9AD282CC14(0, 23, 1);
	}
}

void func_293()
{
	func_298();
	if ((iLocal_65 && !func_151(unk_0x3D35F9864E4640B1())) && unk_0x2A116936C6E6EBEC(unk_0x0031992CA618A445()) != unk_0x50B7853132D8438E("GtaMloRoom001"))
	{
		if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (func_185() != -1)
			{
				if (Global_2097152[func_185() /*11035*/].f_7550.f_2 != -1 && Global_2434915.f_502.f_30)
				{
					func_294(1, 0, 1, 0, 0, 0, 0);
					iLocal_65 = 0;
				}
				else
				{
					if (Global_2434915.f_502.f_30)
					{
					}
					if (Global_2097152[func_185() /*11035*/].f_7550.f_2 == -1)
					{
					}
				}
			}
		}
		else if (iLocal_65)
		{
			iLocal_65 = 0;
		}
	}
}

void func_294(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_297() < 0 && Global_1789363)
	{
		return;
	}
	if (func_287(35))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_296(2);
	}
	else
	{
		func_296(1);
	}
	if (bParam1)
	{
		func_296(11);
	}
	if (bParam2)
	{
		func_296(32);
		if (bParam3)
		{
			if (func_297() >= 0 && unk_0x2A3398C6222EB190(Global_1319069[func_297() /*140*/].f_101, 0))
			{
				func_296(33);
			}
		}
		else
		{
			func_211(33);
		}
		if (func_297() >= 0)
		{
			if (func_295(Global_1319069[func_297() /*140*/].f_66))
			{
				func_296(40);
			}
		}
	}
	else if (bParam5)
	{
		func_296(37);
	}
	if (bParam4)
	{
		func_296(36);
	}
	if (func_287(36))
	{
		if (func_287(2))
		{
			func_211(36);
		}
	}
	if (bParam6)
	{
		func_296(38);
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		Global_2501777.f_367 = unk_0x898811EA80D35DE2();
	}
}

int func_295(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_296(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!unk_0x2A3398C6222EB190(Global_2434915.f_502.f_1, iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_502.f_1), iParam0);
		}
	}
	else if (!unk_0x2A3398C6222EB190(Global_2434915.f_502.f_2, (iParam0 - 32)))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_502.f_2), (iParam0 - 32));
	}
}

int func_297()
{
	return Global_2097152[func_185() /*11035*/].f_7550.f_2;
}

void func_298()
{
	if (((((func_5(unk_0x3D35F9864E4640B1(), 1, 1) && unk_0x84432DB7C4069064(unk_0x0031992CA618A445())) && !Global_1312416.f_6) && !func_247(1)) && !func_299(unk_0x3D35F9864E4640B1())) && func_151(unk_0x3D35F9864E4640B1()))
	{
		if (!unk_0x0CF4609684193305() && !unk_0x2A3398C6222EB190(Global_95025, 0))
		{
		}
		else if (!iLocal_65)
		{
			iLocal_65 = 1;
		}
	}
	if (func_5(unk_0x3D35F9864E4640B1(), 1, 1))
	{
		if (((func_151(unk_0x3D35F9864E4640B1()) && !func_152()) && !unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0)) && unk_0x2A116936C6E6EBEC(unk_0x0031992CA618A445()) != unk_0x50B7853132D8438E("GtaMloRoom001"))
		{
			if (iLocal_65)
			{
				iLocal_65 = 0;
			}
		}
	}
}

int func_299(int iParam0)
{
	if (iParam0 != func_6())
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_318, 25);
	}
	return 0;
}

void func_300()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Global_262145.f_20430)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			iVar1 = 0;
			iVar2 = iVar0 + 159;
			func_232(iVar2, &iVar1, 0);
			if ((iVar1 >= 0 && Global_1319069[iVar1 /*140*/].f_66 != 0) && Global_1319069[iVar1 /*140*/].f_66 == joaat("lazer"))
			{
				Global_1319069[iVar1 /*140*/].f_66 = 0;
			}
			iVar0++;
		}
	}
}

void func_301()
{
	if (((func_302() && (unk_0x7832F791572D5809(joaat("am_mp_armory_truck")) != 0 || unk_0x7832F791572D5809(joaat("am_mp_smpl_interior_int")) != 0)) && func_4(unk_0x3D35F9864E4640B1())) && !func_151(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			iLocal_135 = 1;
		}
		else if (iLocal_135)
		{
			unk_0x11047BA199BB9FE9(100, 0, 0);
		}
	}
	else
	{
		iLocal_135 = 0;
	}
	if (iLocal_129)
	{
		if (unk_0x7832F791572D5809(joaat("am_mp_armory_truck")) == 0 && unk_0x7832F791572D5809(joaat("am_mp_smpl_interior_int")) == 0)
		{
			iLocal_129 = 0;
			Global_1780828.f_27 = 0;
		}
	}
}

bool func_302()
{
	return unk_0x2A3398C6222EB190(Global_1780828.f_2, 21);
}

void func_303()
{
	if (!iLocal_132)
	{
		if (func_306(unk_0x3D35F9864E4640B1()))
		{
			if (((((func_305() || func_41(0)) || func_304()) || func_247(1)) || unk_0x0CF4609684193305()) || Global_68165)
			{
				Global_1788556 = 1;
				iLocal_132 = 1;
			}
		}
	}
	else if (((((!func_305() && !func_41(0)) && !func_304()) && !func_247(1)) && !unk_0x0CF4609684193305()) && !Global_68165)
	{
		if (!func_3(&uLocal_133))
		{
			func_37(&uLocal_133, 0, 0);
		}
		else if (func_36(&uLocal_133, 1500, 0))
		{
			func_2(&uLocal_133);
			Global_1788556 = 0;
			iLocal_132 = 0;
		}
	}
	else
	{
		func_2(&uLocal_133);
	}
	if (func_306(unk_0x3D35F9864E4640B1()))
	{
		if (((((((func_4(unk_0x3D35F9864E4640B1()) || unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0)) || func_304()) || func_247(1)) || unk_0x0CF4609684193305()) || Global_68165) || unk_0x5114FCEE2A997B95()) || unk_0x229840854A80E0D9())
		{
			Global_2446355.f_4228.f_499 = 1;
			Global_2446355.f_4228.f_500 = 1;
		}
	}
}

bool func_304()
{
	return unk_0xA095EFC51C188A82() != 0;
}

bool func_305()
{
	return unk_0x31CD6E9F83C10233() <= Global_17290.f_5745 + 100;
}

int func_306(int iParam0)
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_17(Global_2422142[iParam0 /*399*/].f_318.f_1) == 7;
			}
		}
	}
	return 0;
}

void func_307()
{
	if (unk_0x3D35F9864E4640B1() != func_6())
	{
		if (func_308())
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 5))
				{
					iLocal_131 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
					iLocal_130 = 1;
				}
			}
			if (unk_0xB37AB4AC3AD45AD8(unk_0x0031992CA618A445(), 2) || !unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				if (!func_151(unk_0x3D35F9864E4640B1()))
				{
					if (iLocal_130)
					{
						if (unk_0x00E962E9D49FD6C4(iLocal_131, -1, 0))
						{
							unk_0x3000ECF14A659126(unk_0x0031992CA618A445());
							unk_0x7E3C622EB2D4D2E2(unk_0x0031992CA618A445(), iLocal_131, -1);
							iLocal_130 = 0;
						}
					}
				}
				else if (func_5(unk_0x3D35F9864E4640B1(), 1, 1))
				{
					if (unk_0x2A116936C6E6EBEC(unk_0x0031992CA618A445()) == joaat("GtaMloRoom001"))
					{
						if (iLocal_130)
						{
							iLocal_130 = 0;
						}
					}
				}
			}
		}
		else if (iLocal_130)
		{
			iLocal_130 = 0;
		}
	}
}

int func_308()
{
	if (unk_0x76B3C79DE564AFC6(func_315()) && !unk_0x7A6C051038031EFA(func_315(), 0))
	{
		if (unk_0xE9559A12052415BE(func_315()) == joaat("trailerlarge"))
		{
			if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), unk_0x261E7847B591A8DC(unk_0xF177E0DA126D71C8(func_315(), 1), unk_0x69F9721375CE60CF(func_315()), 0f, -15f, -7f), unk_0x261E7847B591A8DC(unk_0xF177E0DA126D71C8(func_315(), 1), unk_0x69F9721375CE60CF(func_315()), 0f, -6.5f, 2.5f), (func_309(joaat("trailerlarge")) * 2.5f), 0, 1, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

float func_309(int iParam0)
{
	float fVar0;
	float fVar3;
	
	func_310(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	return unk_0x229F35E7CDDBF757((fVar0 - fVar3));
}

void func_310(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x43A90D5881106ECD(iParam0))
	{
		unk_0x9E360FFC6FB1DDFD(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_313(iParam0);
		if (iVar0 != 0)
		{
			func_311(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(*uParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_311(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_312(iParam0, &Global_1315787);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x43A90D5881106ECD(Global_1315787[iVar0]))
		{
			unk_0x9E360FFC6FB1DDFD(Global_1315787[iVar0], &(Global_1315791[iVar0 /*3*/]), &(Global_1315798[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1315791[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1315798[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315791[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315798[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315791[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315798[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315791[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315798[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315805[iVar0] = (Global_1315798[iVar0 /*3*/] - Global_1315791[iVar0 /*3*/]);
		Global_1315808[iVar0] = (Global_1315798[iVar0 /*3*/].f_1 - Global_1315791[iVar0 /*3*/].f_1);
		Global_1315811[iVar0] = (Global_1315798[iVar0 /*3*/].f_2 - Global_1315791[iVar0 /*3*/].f_2);
		if (Global_1315805[iVar0] > Global_1315814)
		{
			Global_1315814 = Global_1315805[iVar0];
		}
		if (Global_1315811[iVar0] > Global_1315815)
		{
			Global_1315815 = Global_1315811[iVar0];
		}
		iVar0++;
	}
	Global_1315816 = (Global_1315814 * -0.5f);
	Global_1315819 = (Global_1315814 * 0.5f);
	Global_1315816.f_1 = ((((0.5f * Global_1315808[0]) + Global_1315808[1]) + Global_1315787.f_3) * -1f);
	Global_1315819.f_1 = (0.5f * Global_1315808[0]);
	Global_1315816.f_2 = (Global_1315811[0] * -0.5f);
	Global_1315819.f_2 = (Global_1315811[0] * 0.5f);
	*uParam1 = { Global_1315816 };
	*uParam2 = { Global_1315819 };
}

void func_312(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
	}
}

int func_313(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		if (func_314(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_314(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

int func_315()
{
	int iVar0;
	var uVar1;
	var uVar2[25];
	var uVar28;
	int iVar29;
	int iVar30;
	var uVar31[25];
	int iVar57;
	int iVar58;
	var uVar59[25];
	int iVar85;
	
	if ((Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_12 != -1 && func_288(unk_0x3D35F9864E4640B1())) && func_17(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_12) == 4)
	{
		return -1;
	}
	if (func_16(unk_0x3D35F9864E4640B1()) && !func_317(unk_0x3D35F9864E4640B1()))
	{
		iVar29 = unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &uVar2);
		iVar0 = 0;
		while (iVar0 < iVar29)
		{
			if (unk_0x76B3C79DE564AFC6(uVar2[iVar0]) && unk_0x036E1D5EA494CEB2(uVar2[iVar0]))
			{
				if (!unk_0x7A6C051038031EFA(uVar2[iVar0], 0))
				{
					if (unk_0x496D18970B708258("Player_Truck", 3))
					{
						if (func_198(uVar2[iVar0], 1))
						{
							uVar28 = unk_0x82C5E5956536E83D(uVar2[iVar0], &uVar1);
							if (!unk_0x0BD3CCFB6C6CFA91(uVar28))
							{
								if (unk_0xB3404E397FF56B3B(uVar28, "am_mp_bunker"))
								{
									if (func_5(Global_1592924, 1, 1))
									{
										if (func_197(uVar2[iVar0]) == Global_1592924)
										{
											return uVar2[iVar0];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (func_64(unk_0x3D35F9864E4640B1(), 0) && !func_16(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x3D35F9864E4640B1() != func_121())
		{
			iVar57 = unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &uVar31);
			iVar30 = 0;
			while (iVar30 < iVar57)
			{
				if (unk_0x76B3C79DE564AFC6(uVar31[iVar30]) && unk_0x036E1D5EA494CEB2(uVar31[iVar30]))
				{
					if (!unk_0x7A6C051038031EFA(uVar31[iVar30], 0))
					{
						if (unk_0x496D18970B708258("Player_Truck", 3))
						{
							if (func_198(uVar31[iVar30], 1))
							{
								if (func_5(func_121(), 1, 1))
								{
									if (func_197(uVar31[iVar30]) == func_121())
									{
										return uVar31[iVar30];
									}
								}
							}
						}
					}
				}
				iVar30++;
			}
		}
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (func_317(unk_0x3D35F9864E4640B1()))
		{
			if (!unk_0x76B3C79DE564AFC6(Global_2501777.f_279))
			{
				iVar85 = unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &uVar59);
				iVar58 = 0;
				while (iVar58 < iVar85)
				{
					if (unk_0x76B3C79DE564AFC6(uVar59[iVar58]) && unk_0x036E1D5EA494CEB2(uVar59[iVar58]))
					{
						if (!unk_0x7A6C051038031EFA(uVar59[iVar58], 0))
						{
							if (unk_0x496D18970B708258("Player_Truck", 3))
							{
								if (func_198(uVar59[iVar58], 1))
								{
									if (func_5(Global_1780828.f_1816, 1, 1))
									{
										if (func_197(uVar59[iVar58]) == Global_1780828.f_1816)
										{
											Global_2501777.f_279 = uVar59[iVar58];
											return uVar59[iVar58];
										}
									}
								}
							}
						}
					}
					iVar58++;
				}
			}
			else
			{
				return Global_2501777.f_279;
			}
		}
	}
	else if (func_317(unk_0x3D35F9864E4640B1()))
	{
		func_316(0);
	}
	return Global_2501777.f_287[1];
}

void func_316(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 8))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 8);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 8))
	{
		unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 8);
	}
}

int func_317(int iParam0)
{
	if (iParam0 != func_6())
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_318, 8);
	}
	return 0;
}

void func_318()
{
	if ((((unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_9, 7) || unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 25)) && func_326(81)) && !func_324(func_325())) && func_325() != unk_0x3D35F9864E4640B1())
	{
		if (unk_0xF57D21B49780A7A8(unk_0x0031992CA618A445(), -828834893) != 1 && unk_0xF57D21B49780A7A8(unk_0x0031992CA618A445(), -828834893) != 0)
		{
			unk_0x471E558A661279DE(unk_0x0031992CA618A445(), 0, 0);
		}
		func_323(0);
		func_262(0);
		func_322(0);
		unk_0x18D7C8000EDEAAB4(500);
		func_321(0);
		func_29(unk_0x3D35F9864E4640B1(), 1, 0);
		func_320(0);
		if (unk_0x30758DD2AA5FF762())
		{
			unk_0x33A6B3F4B1E565DD(0, 0);
		}
		func_321(0);
		if ((unk_0x7832F791572D5809(joaat("am_mp_armory_truck")) != 0 || unk_0x7832F791572D5809(joaat("am_mp_smpl_interior_int")) != 0) && !func_151(unk_0x3D35F9864E4640B1()))
		{
			iLocal_129 = 1;
			Global_1780828.f_27 = 1;
		}
		func_319(0, 81, 0);
	}
}

void func_319(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (Global_1780828.f_24 == -1)
		{
			Global_1780828.f_24 = iParam1;
			Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_12 = iParam1;
			Global_1780828.f_22 = 1;
			Global_1780828.f_23 = bParam2;
			unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 3);
			if (bParam2)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 4);
			}
			else
			{
				unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 4);
			}
			Global_71053 = 1;
		}
	}
	else if (Global_1780828.f_24 == iParam1)
	{
		Global_1780828.f_24 = -1;
		Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_12 = -1;
		Global_1780828.f_22 = 0;
		Global_1780828.f_23 = 0;
		unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 3);
		unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 4);
		Global_71053 = 0;
	}
}

void func_320(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 25))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 25);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 25))
	{
		unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 25);
	}
}

void func_321(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_9, 7))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_9), 7);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_9, 7))
	{
		unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_9), 7);
	}
}

void func_322(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_1780828, 30))
		{
			unk_0xCD7E92DE2BFA0B0D(&Global_1780828, 30);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_1780828, 30))
	{
		unk_0xD804ACF2A7171150(&Global_1780828, 30);
	}
}

void func_323(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 18))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 18);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 18))
	{
		unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 18);
	}
}

int func_324(int iParam0)
{
	if (iParam0 != func_6())
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_318, 6);
	}
	return 0;
}

int func_325()
{
	return func_197(func_315());
}

int func_326(int iParam0)
{
	if (unk_0x0CF4609684193305() || func_328(iParam0))
	{
		return 1;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!func_327(unk_0x3D35F9864E4640B1(), -1))
		{
			if (unk_0x5114FCEE2A997B95())
			{
				if (unk_0x00E962E9D49FD6C4(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 1), -1, 0))
				{
					return 1;
				}
				else if (Global_1780828.f_1816 != func_6())
				{
					if ((!func_4(Global_1780828.f_1816) && !func_7(Global_1780828.f_1816)) && !unk_0x2A3398C6222EB190(Global_2422142[Global_1780828.f_1816 /*399*/].f_318, 5))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_327(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_5(iParam0, 1, 1))
	{
		if (unk_0x90219307C9D2728D(unk_0xD33F4BC17EB987E5(iParam0), 0))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(unk_0xD33F4BC17EB987E5(iParam0), 0);
			if (unk_0x432757A9E7AAFA96(iVar0, 0))
			{
				if (unk_0x0031992CA618A445() == unk_0x3251C2B06497863C(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_328(int iParam0)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!func_382(1))
	{
		return 1;
	}
	bVar0 = false;
	if (func_361(bVar0, 6))
	{
		return 1;
	}
	if (unk_0x76B3C79DE564AFC6(func_315()))
	{
		if (unk_0x7A6C051038031EFA(func_315(), 0) && !unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 19))
		{
			return 1;
		}
	}
	if (unk_0x76B3C79DE564AFC6(func_315()))
	{
		if ((!unk_0x8CAADD2AA5EDCAAC(func_315()) && !unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 19)) && !func_299(unk_0x3D35F9864E4640B1()))
		{
			return 1;
		}
	}
	if (unk_0x76B3C79DE564AFC6(func_315()) && !unk_0x7A6C051038031EFA(func_315(), 0))
	{
		if (unk_0x38A3CC71471EC547(func_315()) > 0.5f)
		{
			func_358(0, iParam0, 0);
			return 1;
		}
	}
	if (func_357())
	{
		return 1;
	}
	if (func_356())
	{
		return 1;
	}
	if ((((unk_0x2A3398C6222EB190(Global_1780828, 19) && unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445())) && !unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445())) && !unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445())) && !func_299(unk_0x3D35F9864E4640B1()))
	{
		if (!func_324(func_197(func_355())) && !func_16(unk_0x3D35F9864E4640B1()))
		{
			if (!unk_0x2A3398C6222EB190(Global_1780828.f_2, 3))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_2), 3);
			}
		}
		return 1;
	}
	if (func_354(func_197(func_355())) || func_353(func_197(func_355())))
	{
		return 1;
	}
	if (unk_0x76B3C79DE564AFC6(func_315()) && !unk_0x7A6C051038031EFA(func_315(), 0))
	{
		if (unk_0xF6C6ED9F9C63AEC0(func_315()))
		{
			if (!unk_0x2A3398C6222EB190(Global_1780828.f_2, 3))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_2), 3);
			}
			return 1;
		}
	}
	if (unk_0x76B3C79DE564AFC6(func_355()) && !unk_0x7A6C051038031EFA(func_355(), 0))
	{
		if (unk_0xF6C6ED9F9C63AEC0(func_355()))
		{
			if (!unk_0x2A3398C6222EB190(Global_1780828.f_2, 3))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_2), 3);
			}
			return 1;
		}
	}
	if (func_64(unk_0x3D35F9864E4640B1(), 0))
	{
		if (unk_0x3D35F9864E4640B1() == func_325())
		{
			return 1;
		}
	}
	if (func_352(func_197(func_355())))
	{
		return 1;
	}
	if (func_350(iParam0))
	{
		if (!unk_0x2A3398C6222EB190(Global_1780828.f_2, 3))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_2), 3);
		}
		return 1;
	}
	if (func_348(iParam0))
	{
		if (!unk_0x2A3398C6222EB190(Global_1780828.f_2, 3))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_2), 3);
		}
		return 1;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (unk_0x76B3C79DE564AFC6(func_347()))
		{
			func_345(iParam0, &Var1);
			if (func_344(func_347(), Var1, 1) < 1.5f)
			{
				return 1;
			}
		}
	}
	if (func_343(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	if (func_341())
	{
		return 1;
	}
	if (func_340(func_197(func_355())))
	{
		return 1;
	}
	if (func_197(func_355()) != func_6() && func_197(func_355()) != unk_0x3D35F9864E4640B1())
	{
		if (unk_0x2A3398C6222EB190(Global_2422142[func_197(func_355()) /*399*/].f_318, 12))
		{
			return 1;
		}
	}
	if (func_197(func_355()) != func_6())
	{
		if (unk_0x2A3398C6222EB190(Global_2422142[func_197(func_355()) /*399*/].f_318.f_9, 20))
		{
			return 1;
		}
		if (unk_0x2A3398C6222EB190(Global_2422142[func_197(func_355()) /*399*/].f_318.f_9, 23))
		{
			return 1;
		}
	}
	if ((unk_0x30758DD2AA5FF762() && !unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 19)) && !func_299(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	if (func_339(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	if (Global_2501777.f_291 && !func_16(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	if (func_338())
	{
		return 1;
	}
	func_345(iParam0, &Var4);
	if ((unk_0x76B3C79DE564AFC6(func_315()) && !unk_0x7A6C051038031EFA(func_315(), 0)) && !func_324(func_197(func_355())))
	{
		Var7 = { unk_0xCD59EF1D7098A4B4(func_315(), 0f, -8.1f, 0f) };
		if (unk_0x229F35E7CDDBF757((Var7.f_2 - Var4.f_2)) > 4f)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_2), 3);
			return 1;
		}
	}
	if (func_336(Var4))
	{
		if (!unk_0x2A3398C6222EB190(Global_1780828.f_2, 3))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_2), 3);
		}
		return 1;
	}
	if (func_334())
	{
		if (!unk_0x2A3398C6222EB190(Global_1780828.f_2, 3))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_2), 3);
		}
		return 1;
	}
	if (func_333(func_197(func_355())))
	{
		return 1;
	}
	if (Global_2488784)
	{
		return 1;
	}
	if ((Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_96 == 8 && func_332()) && !func_331())
	{
		return 1;
	}
	if (func_173(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	if (func_330(unk_0x3D35F9864E4640B1(), 29))
	{
		return 1;
	}
	if (func_329())
	{
		if (!func_324(func_197(func_355())) && !func_16(unk_0x3D35F9864E4640B1()))
		{
			if (!unk_0x2A3398C6222EB190(Global_1780828.f_2, 3))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_2), 3);
			}
		}
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Global_1780828.f_2, 3))
	{
		unk_0xD804ACF2A7171150(&(Global_1780828.f_2), 3);
	}
	return 0;
}

int func_329()
{
	int iVar0;
	var uVar1[25];
	int iVar27;
	struct<3> Var28;
	
	if (unk_0x76B3C79DE564AFC6(func_315()) && !unk_0x7A6C051038031EFA(func_315(), 0))
	{
		func_345(81, &Var28);
		if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			iVar27 = unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &uVar1);
			iVar0 = 0;
			while (iVar0 < iVar27)
			{
				if (unk_0x76B3C79DE564AFC6(uVar1[iVar0]) && unk_0x036E1D5EA494CEB2(uVar1[iVar0]))
				{
					if (!unk_0x7A6C051038031EFA(uVar1[iVar0], 0) && !func_198(uVar1[iVar0], 1))
					{
						if (func_344(uVar1[iVar0], Var28, 1) < 8f)
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_330(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_11.f_5, iParam1);
}

bool func_331()
{
	return unk_0x2A3398C6222EB190(Global_2445582.f_2, 11);
}

bool func_332()
{
	return unk_0x2A3398C6222EB190(Global_2445582, 5);
}

int func_333(int iParam0)
{
	if (iParam0 != func_6())
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_318.f_9, 11);
	}
	return 0;
}

int func_334()
{
	if (!func_16(unk_0x3D35F9864E4640B1()))
	{
		if (func_335("MATC_DPADRIGH5") || func_335("MATC_DPADRIGHT"))
		{
			return 1;
		}
	}
	return 0;
}

var func_335(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

int func_336(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!func_337(Global_1048576.f_891[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			if (unk_0xB7A628320EFF8E47(Global_1048576.f_891[iVar0 /*3*/], Param0) <= 225f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_337(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_338()
{
	return unk_0x2A3398C6222EB190(Global_1780828, 13);
}

int func_339(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_1623799[iVar0 /*488*/].f_1, 0);
	}
	return 0;
}

int func_340(int iParam0)
{
	if (iParam0 != func_6())
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_205, 10);
	}
	return 0;
}

int func_341()
{
	if ((func_342(2) || func_342(1)) || func_342(36))
	{
		return 1;
	}
	return 0;
}

bool func_342(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0x2A3398C6222EB190(Global_2434915.f_502.f_3, iParam0);
	}
	return unk_0x2A3398C6222EB190(Global_2434915.f_502.f_4, (iParam0 - 32));
}

int func_343(int iParam0)
{
	if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 14))
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 11))
	{
		return 1;
	}
	return 0;
}

float func_344(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	return unk_0x1410333E912D4EC6(Var0, Param1, iParam4);
}

void func_345(int iParam0, var uParam1)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 81:
			if (unk_0x76B3C79DE564AFC6(func_315()) && !unk_0x7A6C051038031EFA(func_315(), 0))
			{
				if (unk_0xE9559A12052415BE(func_315()) == joaat("trailerlarge"))
				{
					*uParam1 = { unk_0xCD59EF1D7098A4B4(func_315(), 0f, -8.9f, -2f) };
					if (unk_0x6192E81E5C0DCC27(*uParam1, &uVar0, 0))
					{
						*uParam1 = { *uParam1, uParam1->f_1, uVar0 };
					}
					else
					{
						*uParam1 = { *uParam1, uParam1->f_1, (uParam1->f_2 - 1.5f) };
					}
				}
			}
			break;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (func_317(unk_0x3D35F9864E4640B1()))
		{
			if (func_346(*uParam1))
			{
				if (Global_1780828.f_1816 != func_6())
				{
					if (!func_346(Global_2422142[Global_1780828.f_1816 /*399*/].f_318.f_5))
					{
						*uParam1 = { Global_2422142[Global_1780828.f_1816 /*399*/].f_318.f_5 };
					}
				}
			}
		}
	}
}

int func_346(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_347()
{
	return Global_2404997.f_2572;
}

int func_348(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x76B3C79DE564AFC6(func_315()) && !unk_0x7A6C051038031EFA(func_315(), 0))
	{
		func_345(iParam0, &Var0);
		iVar3 = 83;
		while (iVar3 <= 87)
		{
			if (unk_0x1410333E912D4EC6(Var0, func_349(iVar3), 1) < 5f)
			{
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

Vector3 func_349(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return -1153.09f, -3411.827f, 12.945f;
		
		case 84:
			return -1396.268f, -3268.027f, 12.9448f;
		
		case 85:
			return -2020.328f, 3158.775f, 31.8103f;
		
		case 86:
			return -1877.091f, 3110.341f, 31.8103f;
		
		case 87:
			return -2469.099f, 3276.577f, 31.8302f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_350(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x76B3C79DE564AFC6(func_315()) && !unk_0x7A6C051038031EFA(func_315(), 0))
	{
		func_345(iParam0, &Var0);
		iVar3 = 70;
		while (iVar3 <= 80)
		{
			if (unk_0x1410333E912D4EC6(Var0, func_351(iVar3), 1) < 5f)
			{
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

Vector3 func_351(int iParam0)
{
	switch (iParam0)
	{
		case 70:
			return 492.8395f, 3014.057f, 39.9793f;
		
		case 71:
			return 849.603f, 3021.697f, 40.3076f;
		
		case 72:
			return 39.5967f, 2930.506f, 54.8034f;
		
		case 73:
			return 1572.078f, 2226.001f, 77.2829f;
		
		case 74:
			return 2110.019f, 3326.12f, 44.3526f;
		
		case 75:
			return 2489.36f, 3162.12f, 48.0015f;
		
		case 76:
			return 1801.273f, 4705.483f, 38.8253f;
		
		case 77:
			return -755.5687f, 5943.835f, 18.9008f;
		
		case 78:
			return -388.8392f, 4340.109f, 55.1741f;
		
		case joaat("mpsv_lp0_31"):
			return -3031.356f, 3334.059f, 9.1805f;
		
		case 80:
			return -3157.599f, 1376.695f, 15.866f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_352(int iParam0)
{
	if (iParam0 != func_6())
	{
		return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 25);
	}
	return 0;
}

int func_353(int iParam0)
{
	if (iParam0 != func_6())
	{
		return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 27);
	}
	return 0;
}

int func_354(int iParam0)
{
	if (iParam0 != func_6())
	{
		return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 26);
	}
	return 0;
}

int func_355()
{
	return Global_2501777.f_287[0];
}

bool func_356()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_189 != 0;
}

int func_357()
{
	int iVar0;
	
	if (Global_25372)
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
			if (unk_0x432757A9E7AAFA96(iVar0, 0))
			{
				if (!unk_0x8682D8A6269E52C9(unk_0x3251C2B06497863C(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_358(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_360(iParam1))
	{
		func_359(iParam1, &iVar0, &iVar1);
		if (bParam0 && !unk_0x2A3398C6222EB190(Global_1780828.f_1752[iVar0], iVar1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1752[iVar0]), iVar1);
			Global_1780828.f_1663[iParam1] = iParam2;
		}
		else if (!bParam0 && unk_0x2A3398C6222EB190(Global_1780828.f_1752[iVar0], iVar1))
		{
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1752[iVar0]), iVar1);
			Global_1780828.f_1663[iParam1] = 0;
		}
	}
}

void func_359(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

int func_360(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 88)
	{
		return 1;
	}
	return 0;
}

int func_361(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	bVar0 = false;
	bVar1 = false;
	if (iParam1 == 1)
	{
		bVar1 = true;
	}
	else if (iParam1 == 2)
	{
		bVar0 = true;
	}
	if (Global_1573334 != 0)
	{
		if (!bVar0 && iParam1 != 4)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		else if (bVar0)
		{
			iVar2 = Global_1573334;
			unk_0xD804ACF2A7171150(&iVar2, 4);
			if (iVar2 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
		else if (iParam1 == 4)
		{
			iVar3 = Global_1573334;
			unk_0xD804ACF2A7171150(&iVar3, 6);
			if (iVar3 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
		else if (iParam1 == 6)
		{
			uVar4 = Global_1573334;
			unk_0xD804ACF2A7171150(&uVar4, 7);
			if (bParam0)
			{
			}
			return 1;
		}
		else if (iParam1 == 8)
		{
			uVar5 = Global_1573334;
			unk_0xD804ACF2A7171150(&uVar5, 8);
			if (bParam0)
			{
			}
			return 1;
		}
	}
	if ((((((func_380(unk_0x3D35F9864E4640B1()) && !func_378()) && !(iParam1 == 4 && func_376(unk_0x3D35F9864E4640B1()))) && !(iParam1 == 3 && func_373())) && !(iParam1 == 6 && func_371())) && !(iParam1 == 7 && func_371())) && !(iParam1 == 8 && func_369()))
	{
		return 1;
	}
	if (func_368(unk_0x0031992CA618A445()))
	{
		return 1;
	}
	if (func_367(unk_0x3D35F9864E4640B1(), 21))
	{
		return 1;
	}
	if (bVar1)
	{
		if (func_364() && unk_0xF4F91CD09D59F42E())
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 9)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (Global_262145.f_14473)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (func_363(unk_0x3D35F9864E4640B1()) || func_362(unk_0x3D35F9864E4640B1()))
		{
			if (bParam0)
			{
			}
			return 1;
		}
	}
	return 0;
}

bool func_362(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 7;
}

bool func_363(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 2;
}

int func_364()
{
	if (unk_0xF4F91CD09D59F42E())
	{
		return func_366();
	}
	return func_365(Global_1641087.f_96810);
}

int func_365(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5143[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_366()
{
	return Global_2445582.f_12;
}

bool func_367(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_217, iParam1);
}

int func_368(int iParam0)
{
	if (!unk_0x76B3C79DE564AFC6(iParam0) || unk_0x7A6C051038031EFA(iParam0, 0))
	{
		return 0;
	}
	if (unk_0x698ED51C7EF0C52D(unk_0x6EBEC7F03B4E2589(iParam0, 11, unk_0x2BCDCFC2AA7EC715(iParam0, 11), unk_0xBE6AC2A79C0215BC(iParam0, 11)), joaat("JUGG_SUIT"), 0))
	{
		return 1;
	}
	return 0;
}

int func_369()
{
	return func_370(unk_0x3D35F9864E4640B1());
}

int func_370(int iParam0)
{
	if (func_142(iParam0, 0))
	{
		if (func_141(iParam0) == 229)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_371()
{
	return func_372(unk_0x3D35F9864E4640B1());
}

int func_372(int iParam0)
{
	if (func_141(iParam0) == 225)
	{
		return 1;
	}
	return 0;
}

int func_373()
{
	return func_374(unk_0x3D35F9864E4640B1());
}

int func_374(int iParam0)
{
	if (func_142(iParam0, 0))
	{
		if (func_375(func_141(iParam0)))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_376(int iParam0)
{
	return func_377(func_141(iParam0));
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

bool func_378()
{
	return func_379(unk_0x3D35F9864E4640B1());
}

int func_379(int iParam0)
{
	if (((func_141(iParam0) == 167 || func_141(iParam0) == 168) || func_141(iParam0) == 190) || func_141(iParam0) == 178)
	{
		return 1;
	}
	return 0;
}

int func_380(int iParam0)
{
	if (func_339(iParam0))
	{
		return 1;
	}
	if (func_381(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_381(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_90(iParam0, 9);
	}
	return 0;
}

int func_382(bool bParam0)
{
	if (!func_398(60, 0, 0) && !bParam0)
	{
		return 0;
	}
	if (func_397(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_396(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_395(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_394())
	{
		return 0;
	}
	if (func_393())
	{
		return 0;
	}
	if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 1 || Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 3)
	{
		return 0;
	}
	if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 32)
	{
		return 0;
	}
	if (func_391(unk_0x3D35F9864E4640B1(), 140))
	{
		return 1;
	}
	if (func_388(unk_0x3D35F9864E4640B1(), 1))
	{
		return 0;
	}
	if (func_387())
	{
		return 0;
	}
	if (func_386())
	{
		return 0;
	}
	if (Global_1574331)
	{
		return 0;
	}
	if (func_385())
	{
		return 0;
	}
	if (func_383(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	return 1;
}

int func_383(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return 1;
	}
	if (func_384())
	{
		if (iParam0 == unk_0x3D35F9864E4640B1())
		{
			return 1;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_384()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

bool func_385()
{
	return Global_1312830;
}

bool func_386()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 0);
}

int func_387()
{
	int iVar0;
	
	iVar0 = Global_2434915;
	if (unk_0x2A3398C6222EB190(Global_1622678[iVar0 /*35*/].f_13, 0) && Global_1622678[iVar0 /*35*/].f_22 == 2)
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_389(iParam0))
		{
			return 1;
		}
	}
	if (Global_1593076[iParam0 /*647*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_389(int iParam0)
{
	return func_390(iParam0);
}

bool func_390(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_13.f_1, 0);
}

bool func_391(int iParam0, int iParam1)
{
	return iParam1 == func_392(iParam0);
}

int func_392(int iParam0)
{
	if (func_5(iParam0, 0, 1))
	{
		return Global_2422142[iParam0 /*399*/].f_1;
	}
	return 0;
}

bool func_393()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 148;
}

bool func_394()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 5;
}

bool func_395(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 4;
}

bool func_396(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 6;
}

bool func_397(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 5;
}

bool func_398(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7079 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_402(unk_0x3D35F9864E4640B1(), 85))
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
		if (Global_262145.f_4882 == 1)
		{
			return 1;
		}
	}
	if (func_401() || func_400())
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
			if (func_399())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1574372[iVar1], iVar0);
}

int func_399()
{
	var uVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_1697, 23))
	{
		return 1;
	}
	if (func_401())
	{
		return 1;
	}
	if (func_400())
	{
		return 1;
	}
	uVar0 = Global_1365053[func_99(-1)];
	if (unk_0x2A3398C6222EB190(uVar0, 7))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_1697), 23);
		return 1;
	}
	return 0;
}

bool func_400()
{
	return Global_1312841;
}

bool func_401()
{
	return Global_1312843;
}

bool func_402(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_405())
	{
		return 0;
	}
	if (func_404())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_403(iParam1);
	iVar1 = uVar0;
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_533, iVar1);
}

int func_403(int iParam0)
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

bool func_404()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_144, 3);
}

int func_405()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_401())
	{
		return 1;
	}
	if (func_400())
	{
		return 1;
	}
	return func_406(120, -1);
}

int func_406(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2534367[iParam0 /*3*/][func_99(iParam1)];
	if (unk_0xA617FFC40BC2D0D9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_407()
{
	var uVar0[4];
	bool bVar5;
	int iVar6;
	
	if (!Global_1312853 && Global_25222 == 0)
	{
		if (((unk_0x27CA09C6DFAB1E79() || Global_2445582.f_572) || Global_2445582.f_573) || unk_0x2A3398C6222EB190(Global_2445582, 21))
		{
			if (unk_0xF4F91CD09D59F42E())
			{
				func_438(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0);
				iVar6 = 0;
				while (iVar6 < 4)
				{
					if (func_437(uVar0[iVar6], &(iLocal_45[iVar6])))
					{
						bVar5 = true;
					}
					iVar6++;
				}
				if (bVar5)
				{
					if (!func_3(&uLocal_50))
					{
						func_37(&uLocal_50, 0, 0);
					}
					else if (func_36(&uLocal_50, 900000, 0))
					{
						func_409();
					}
				}
				else if (func_3(&uLocal_50))
				{
					func_2(&uLocal_50);
					func_408();
				}
			}
			else
			{
				func_408();
			}
		}
		else
		{
			func_408();
		}
	}
}

void func_408()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_45[iVar0] = 0;
		iVar0++;
	}
}

void func_409()
{
	unk_0x63952BAA4328B246(0);
	func_436();
	Global_1312742 = 1;
	Global_1312832 = 1;
	func_410(1, 1);
	Global_2455114 = 1;
	if (Global_1312853 == 0)
	{
		Global_1312367 = 1;
	}
}

void func_410(bool bParam0, int iParam1)
{
	struct<12> Var0;
	var uVar12;
	struct<13> Var13;
	int iVar26;
	struct<68> Var27;
	int iVar95;
	
	if (!Global_2453457.f_3)
	{
		return;
	}
	if (Global_2445582.f_664.f_5)
	{
		Global_2445582.f_664.f_5 = 0;
		unk_0xB4D6EA3820AC4BDA();
	}
	Global_2446355.f_3409.f_2 = 0;
	Global_2446355.f_3409.f_3 = 0;
	Global_2446355.f_5911 = -1;
	Global_1312416 = 0;
	if (Global_2445582.f_664.f_5)
	{
		Global_2445582.f_664.f_5 = 0;
	}
	Global_1574833 = -1;
	func_435(1, 1);
	func_434(1, 1, 0);
	func_433();
	Global_2453457.f_7 = 0;
	Global_2501777.f_1702 = 0;
	Global_2501777.f_1703 = 0;
	Global_2501777.f_1704 = 0;
	func_431(-1);
	Global_1574826 = 0;
	func_430();
	if (unk_0x43F4A6D2081CC5ED() && iParam1)
	{
		func_429();
		unk_0x54D4B0E0FA75C180();
	}
	Global_979817 = 0;
	Global_1767185.f_2 = 0;
	Global_979818 = -1;
	Global_1758606.f_1345 = 0;
	Global_2446355.f_2843 = 0;
	Global_2445582.f_31.f_41 = -1;
	Global_2445582.f_31.f_39 = 0;
	Global_2445582.f_29 = 0;
	Global_2445582.f_608 = 0;
	Global_2445582.f_630 = 0;
	Global_2445582.f_10 = 0;
	Global_2446355.f_3795 = 0;
	Global_2446355.f_3796 = 0;
	Global_2446355.f_3797 = 0;
	Global_2445582.f_764 = 0;
	Global_2445582.f_763 = 0;
	Var0.f_1 = 10;
	Global_2446355.f_6095 = { Var0 };
	Global_2445582.f_11 = 0;
	Global_2445582.f_9 = -1;
	Global_2445582.f_8 = -1;
	Global_2445582.f_7 = 0;
	StringCopy(&(Global_2445582.f_15), "", 24);
	Global_2445582.f_27 = 0;
	Global_2445582.f_28 = 0;
	Global_2445582.f_756 = 0;
	Global_1767466 = 0;
	Global_1767466.f_1 = 0;
	Global_1767466.f_2 = 0;
	StringCopy(&(Global_1767466.f_3), "", 24);
	Global_970998.f_8 = 0;
	Global_2445582.f_6 = -2;
	StringCopy(&(Global_1767185.f_10), "", 24);
	Global_2445582.f_724 = 0;
	Global_2445582.f_640 = 0;
	Global_2445582.f_642 = 0;
	Global_2445582.f_641 = 0;
	Global_2445582.f_638 = 0;
	Global_2445582.f_610 = 0;
	Global_2445582.f_640 = 0;
	Global_2445582.f_735 = 0;
	Global_2445582.f_736 = 0;
	Global_2445582.f_737 = 0;
	Global_2445582.f_615 = 0;
	Global_2445582.f_710 = 0;
	Global_2446355.f_1.f_837 = 6;
	Global_2445582.f_636 = 0;
	Global_2446355.f_1.f_2801 = 0;
	Global_2445582.f_722 = 0;
	Global_2445582.f_581 = 0;
	Global_2445582.f_567 = 0;
	Global_2445582.f_568 = 0;
	Global_2445582.f_569 = 0;
	Global_2445582.f_4 = -1;
	Global_2445582.f_664.f_10 = 0;
	Global_2445582.f_664.f_8 = 0;
	Global_2445582.f_664.f_7 = 0;
	Global_2445582.f_575 = 0;
	Global_2445582.f_664.f_11 = 0;
	Global_2445582.f_594 = 0;
	Global_2445582.f_617 = 0;
	Global_2445582.f_619 = 0;
	Global_2445582.f_595 = 0;
	Global_2445582.f_620 = 0;
	Global_2445582.f_725 = 0;
	Global_2445582.f_624 = 0;
	Global_2445582.f_718 = 0;
	Global_2445582.f_729 = 0;
	Global_2445582.f_599 = 0;
	Global_2445582.f_726 = 0;
	Global_2445582.f_612 = 0;
	Global_2445582.f_591 = 0;
	Global_2445582.f_634 = 0;
	Global_2445582.f_600 = 0;
	Global_2445582.f_601 = 0;
	Global_2445582.f_715 = 0;
	Global_2445582.f_716 = 0;
	Global_2445582.f_592 = 0;
	Global_2445582.f_594 = 0;
	Global_2445582.f_593 = 0;
	Global_2445582.f_613 = 0;
	Global_2445582.f_727 = 0;
	Global_2445582.f_585 = 0;
	Global_2445582.f_730 = 0;
	Global_2445582.f_728 = 0;
	Global_2445582.f_757 = 0;
	Global_2445582.f_758 = 0;
	Global_2445582.f_732 = 0;
	Global_2445582.f_633 = 0;
	Global_2445582.f_606 = 0;
	Global_2445582.f_598 = 0;
	Global_2445582.f_711 = 0;
	Global_2445582.f_611 = 0;
	Global_2445582.f_621 = 0;
	Global_2445582.f_745 = -1;
	Global_2445582.f_706 = 0;
	Global_2445582.f_635 = 0;
	Global_2445582.f_637 = 0;
	Global_2445582.f_627 = 0;
	Global_2445582.f_628 = 0;
	Global_2445582.f_762 = 0;
	Global_2445582.f_639 = 0;
	Global_2445582.f_768 = 0;
	Global_2445582.f_765 = 0;
	Global_2446355 = 0;
	Global_2445582.f_767 = 0;
	Global_2445582.f_12 = 0;
	Global_2445582.f_13 = 0;
	if (bParam0)
	{
		Global_2446355.f_2843.f_13 = 3;
		Global_2446355.f_2843.f_77 = 1;
		Global_2446355.f_2843.f_4 = 0;
	}
	Global_1312781 = 0;
	Global_1641087.f_70 = { 0f, 0f, 0f };
	func_428();
	func_427();
	func_426();
	func_425();
	func_424();
	func_423();
	func_422();
	func_421();
	func_420();
	func_418(1);
	func_422();
	func_417();
	func_416();
	func_415();
	func_413();
	unk_0xD804ACF2A7171150(&(Global_2445582.f_2), 7);
	func_412();
	Global_2446355.f_5941 = 0;
	Global_2446355.f_5943 = 0;
	Global_2446355.f_5938 = 0;
	Global_2446355.f_5939 = 0;
	Global_2446355.f_5940 = 0;
	Global_2446355.f_5941 = 0;
	Global_2446355.f_5942 = 0;
	Global_2446355.f_5943 = 0;
	Global_2446355.f_5944 = 0;
	Global_2446355.f_5945 = 0;
	Global_2446355.f_5946 = 0;
	Global_2446355.f_5948 = 0;
	Global_2446355.f_5957 = -1;
	Global_2446355.f_5958 = -1;
	Global_2446355.f_5960 = 0;
	Global_2446355.f_5961 = -1;
	Global_2446355.f_5949 = 0;
	Global_2446355.f_5950 = 0;
	Global_16 = 0;
	Global_1767541 = -1;
	Global_1769474.f_2768 = -1;
	Global_1769474.f_2769 = 0;
	Global_1776166.f_6 = 0;
	Global_1776166.f_7 = 0;
	Global_1773084.f_3 = 0;
	Global_1767541.f_1 = 0;
	Global_1767541.f_1758 = 0;
	Global_1773084.f_42 = 0;
	Global_1767541.f_1766 = 0;
	Global_2446355.f_5941 = 0;
	Global_1769474.f_3033.f_140 = 0;
	Global_1767541.f_1767 = 0;
	Global_2445582.f_597 = 0;
	Global_1773084.f_45 = 0;
	Global_1767541.f_1770 = 0;
	Global_1767541.f_1771 = 0;
	Global_1767541.f_1772 = 0;
	Global_1767541.f_1773 = 0;
	Global_1767541.f_1774 = 0;
	Global_1767541.f_1775 = 0;
	Global_1773084.f_1336 = 0;
	Global_1773084.f_52 = 0;
	Global_1773084.f_48 = 0;
	Global_1767541.f_1784 = 0;
	StringCopy(&(Global_1773084.f_10), "", 24);
	Global_2446355.f_5956 = 0;
	Global_2404969 = 0;
	Global_1767541.f_1717 = 0;
	Global_1773084.f_1 = uVar12;
	Global_1773084 = uVar12;
	Global_1773084.f_2 = uVar12;
	iVar26 = 0;
	while (iVar26 <= 3)
	{
		Global_2446355.f_5976[iVar26 /*16*/] = { Var13 };
		Global_2446355.f_5976[iVar26 /*16*/].f_13 = -1;
		Global_2446355.f_5976[iVar26 /*16*/].f_14 = -1;
		Global_2446355.f_5976[iVar26 /*16*/].f_15 = -1;
		iVar26++;
	}
	func_411();
	Global_2446355.f_5962 = 0;
	Global_2446355.f_6043 = 0;
	if (Global_1776411 != 0 || Global_1776411.f_1 != 0)
	{
		unk_0x33A6B3F4B1E565DD(0, 0);
		Global_1776411 = 0;
		Global_1776411.f_1 = 0;
		StringCopy(&(Global_1776411.f_4), "", 32);
		Global_1776411.f_12 = { 0f, 0f, 0f };
		Global_1776411.f_15 = { 0f, 0f, 0f };
		Global_1776411.f_18 = 0;
		Global_1776411.f_199 = 0;
		Global_1776411.f_204 = 0;
		Global_1776411.f_200 = 0;
		Global_1776411.f_202 = 0;
		Global_1776411.f_203 = 0;
		Global_1776411.f_201 = 0;
		Global_1776411.f_19 = 0;
	}
	Global_2404996 = 0;
	if (Global_2404560 == 9)
	{
		Global_2404560 = 6;
	}
	Var27.f_1 = -1;
	Var27.f_2 = -1;
	Var27.f_3.f_53 = -1;
	Var27.f_3.f_55 = -1;
	Var27.f_3.f_56 = -1;
	Var27.f_3.f_57 = -1;
	Var27.f_3.f_58 = -1;
	Var27.f_3.f_59 = -1;
	Var27.f_3.f_60 = -1;
	Var27.f_3.f_62 = 16777215;
	Var27.f_3.f_64 = 2;
	Global_2398119 = { Var27 };
	StringCopy(&(Global_2398119.f_3), "", 24);
	Global_1311838 = 1;
	Global_2446355.f_1.f_2823 = 0;
	Global_1767475 = 0;
	Global_1767475.f_1 = 0;
	Global_1767475.f_1.f_1 = 0;
	Global_1767475.f_1.f_2 = 0;
	Global_1767475.f_1.f_3 = 0;
	Global_1767475.f_1.f_4 = 0;
	Global_1767475.f_1.f_5 = 0;
	Global_1767475.f_1.f_6 = 0;
	Global_1767475.f_1.f_7 = 0;
	Global_1767475.f_1.f_8 = 0;
	Global_1767475.f_1.f_9 = 0;
	Global_1767475.f_1.f_10 = 0;
	Global_1767475.f_1.f_11 = 0;
	Global_1767475.f_1.f_12 = 0;
	Global_2445582.f_746 = 0;
	Global_2456527 = 0;
	Global_2456530 = 0;
	Global_2446355.f_6041 = -1;
	Global_2445582.f_771 = 1;
	iVar95 = 0;
	iVar95 = 0;
	while (iVar95 < 4)
	{
		Global_2446355.f_5925[iVar95] = 0;
		Global_2446355.f_5930[iVar95] = 0;
		iVar95++;
	}
	Global_70761 = 0;
	Global_70762 = -1;
	Global_70763 = -1;
	Global_70764 = -1;
	Global_70765 = -1;
	Global_70766 = -1;
	Global_1789432 = 0;
}

void func_411()
{
	Global_2445582.f_772 = 0;
}

void func_412()
{
	Global_2446355.f_1.f_2825.f_13 = 0;
	Global_2446355.f_1.f_2825 = 0;
	Global_2446355.f_1.f_2825.f_1 = 0;
	Global_2446355.f_1.f_2825.f_2 = 0;
	Global_2446355.f_1.f_2825.f_3 = 0;
	Global_2446355.f_1.f_2825.f_4 = 0;
	Global_2446355.f_1.f_2825.f_5 = 0;
	Global_2446355.f_1.f_2825.f_6 = 0;
	Global_2446355.f_1.f_2825.f_7 = 0;
	Global_2446355.f_1.f_2825.f_8 = 0;
	Global_2446355.f_1.f_2825.f_9 = 0;
	Global_2446355.f_1.f_2825.f_10 = 0;
	Global_2446355.f_1.f_2825.f_11 = 0;
	Global_2446355.f_1.f_2825.f_12 = 0;
}

void func_413()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (((Global_2483261[iVar0 /*5*/].f_1 != -1 || Global_2483261[iVar0 /*5*/].f_2 != -1) || Global_2483261[iVar0 /*5*/].f_3 != -1) || Global_2483261[iVar0 /*5*/].f_4 != -1)
		{
			func_414(iVar0);
		}
		iVar0++;
	}
}

void func_414(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2483261[iParam0 /*5*/].f_1 == -1 || Global_2483261[iParam0 /*5*/].f_2 == -1) || Global_2483261[iParam0 /*5*/].f_3 == -1) || Global_2483261[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	unk_0xA4C9363FEF506728(Global_2483261[iParam0 /*5*/], Global_2483261[iParam0 /*5*/].f_1, Global_2483261[iParam0 /*5*/].f_2, Global_2483261[iParam0 /*5*/].f_3, Global_2483261[iParam0 /*5*/].f_4);
	Global_2483261[iParam0 /*5*/] = -1;
	Global_2483261[iParam0 /*5*/].f_1 = -1;
	Global_2483261[iParam0 /*5*/].f_2 = -1;
	Global_2483261[iParam0 /*5*/].f_3 = -1;
	Global_2483261[iParam0 /*5*/].f_4 = -1;
}

void func_415()
{
	Global_2446355.f_1.f_840 = 0;
}

void func_416()
{
	Global_1758581.f_7 = 0;
}

void func_417()
{
	Global_2446355.f_1.f_838 = 0;
	Global_2446355.f_1.f_839 = 0;
	Global_2446355.f_1.f_841 = 0;
}

void func_418(bool bParam0)
{
	struct<57> Var0;
	int iVar57;
	
	Global_2446355.f_1.f_2798 = 0;
	Global_2446355.f_1.f_2799 = 0;
	Global_2446355.f_1.f_2821 = 0;
	Global_2446355.f_1.f_2805 = 0;
	Global_2446355.f_1.f_2806 = 0;
	Global_2446355.f_1.f_2809 = 0;
	Global_2446355.f_1.f_2810 = 0;
	Global_2446355.f_1.f_2808 = -1;
	Global_2446355.f_1.f_2811 = -1;
	Global_2446355.f_1.f_2813 = 0;
	Global_2446355.f_1.f_2814 = 0;
	Global_2446355.f_1.f_2815 = 0;
	Global_2446355.f_1.f_2816 = 0;
	Global_2446355.f_1.f_2817 = 0;
	Global_2446355.f_1.f_2818 = 0;
	Global_2446355.f_1.f_2822 = -1;
	if (bParam0)
	{
		Global_2446355.f_1.f_2819 = -1;
		Global_2446355.f_1.f_2820 = -1;
	}
	Global_2446355.f_1.f_2841 = 0;
	func_419();
	Var0.f_33 = 2;
	Var0.f_36 = 7;
	iVar57 = 0;
	while (iVar57 <= 31)
	{
		Global_2446355.f_1.f_845[iVar57 /*57*/] = { Var0 };
		iVar57++;
	}
	Global_2442471.f_32 = -1;
}

void func_419()
{
	Global_2442471.f_31 = 0;
}

void func_420()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	struct<13> Var18;
	struct<16> Var31;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	var uVar52;
	var uVar53;
	int iVar54;
	var uVar55;
	int iVar56;
	int iVar57;
	
	iVar5 = -1;
	iVar7 = -1;
	iVar54 = -1;
	Global_2446355.f_5619 = { Var18 };
	iVar56 = 0;
	while (iVar56 <= 31)
	{
		Global_2446355.f_1.f_845[iVar56 /*57*/] = { Var18 };
		Global_2446355.f_1.f_845[iVar56 /*57*/].f_13 = { Var31 };
		StringCopy(&(Global_2446355.f_1.f_845[iVar56 /*57*/].f_29), "", 16);
		Global_2446355.f_1.f_845[iVar56 /*57*/].f_44 = uVar49;
		Global_2446355.f_1.f_845[iVar56 /*57*/].f_45 = uVar50;
		Global_2446355.f_1.f_845[iVar56 /*57*/].f_46 = 0;
		Global_2446355.f_1.f_845[iVar56 /*57*/].f_47 = uVar51;
		Global_2446355.f_1.f_845[iVar56 /*57*/].f_50 = uVar52;
		Global_2446355.f_1.f_845[iVar56 /*57*/].f_55 = uVar53;
		Global_2446355.f_1.f_845[iVar56 /*57*/].f_48 = 0;
		Global_2446355.f_1.f_845[iVar56 /*57*/].f_49 = 0;
		Global_2446355.f_1.f_845[iVar56 /*57*/].f_54 = 0;
		Global_2446355.f_1.f_845[iVar56 /*57*/].f_56 = uVar53;
		Global_2446355.f_1.f_845[iVar56 /*57*/].f_53 = uVar55;
		iVar57 = 0;
		while (iVar57 <= 1)
		{
			Global_2446355.f_1.f_845[iVar56 /*57*/].f_33[iVar57] = uVar47;
			iVar57++;
		}
		iVar57 = 0;
		while (iVar57 <= 6)
		{
			Global_2446355.f_1.f_845[iVar56 /*57*/].f_36[iVar57] = uVar48;
			iVar57++;
		}
		iVar56++;
	}
	iVar56 = 0;
	while (iVar56 <= 1)
	{
		Global_2446355.f_1.f_2670[iVar56 /*57*/] = { Var18 };
		Global_2446355.f_1.f_2670[iVar56 /*57*/].f_13 = { Var31 };
		Global_2446355.f_1.f_2670[iVar56 /*57*/].f_44 = uVar49;
		Global_2446355.f_1.f_2670[iVar56 /*57*/].f_45 = uVar50;
		Global_2446355.f_1.f_2670[iVar56 /*57*/].f_47 = uVar51;
		Global_2446355.f_1.f_2670[iVar56 /*57*/].f_50 = uVar52;
		Global_2446355.f_1.f_2670[iVar56 /*57*/].f_55 = uVar53;
		Global_2446355.f_1.f_2670[iVar56 /*57*/].f_56 = uVar53;
		iVar57 = 0;
		while (iVar57 <= 1)
		{
			Global_2446355.f_1.f_2670[iVar56 /*57*/].f_33[iVar57] = uVar47;
			iVar57++;
		}
		iVar57 = 0;
		while (iVar57 <= 6)
		{
			Global_2446355.f_1.f_2670[iVar56 /*57*/].f_36[iVar57] = uVar48;
			iVar57++;
		}
		iVar56++;
	}
	Global_2446355.f_1.f_2798 = uVar0;
	Global_2446355.f_1.f_2799 = uVar1;
	Global_2446355.f_1.f_2800 = uVar2;
	Global_2446355.f_1.f_2802 = uVar3;
	Global_2446355.f_1.f_2805 = uVar4;
	Global_2446355.f_1.f_2806 = 0;
	Global_2446355.f_1.f_2808 = iVar5;
	Global_2446355.f_1.f_2809 = uVar6;
	Global_2446355.f_1.f_2810 = uVar6;
	Global_2446355.f_1.f_2811 = iVar7;
	Global_2446355.f_1.f_2812 = uVar8;
	Global_2446355.f_1.f_2813 = uVar9;
	Global_2446355.f_1.f_2814 = uVar10;
	Global_2446355.f_1.f_2815 = uVar11;
	Global_2446355.f_1.f_2816 = uVar12;
	Global_2446355.f_1.f_2817 = uVar13;
	Global_2446355.f_1.f_2818 = uVar14;
	Global_2446355.f_1.f_2822 = iVar54;
	Global_2446355.f_1.f_2819 = uVar15;
	Global_2446355.f_1.f_2820 = uVar16;
	Global_2446355.f_1.f_2821 = uVar17;
	Global_2445582.f_720 = 0;
}

void func_421()
{
	Global_2446355.f_1.f_2813 = 0;
	Global_2446355.f_1.f_2814 = 0;
	Global_2446355.f_1.f_2815 = 0;
	Global_2446355.f_1.f_2816 = 0;
	Global_2446355.f_1.f_2817 = 0;
	Global_2446355.f_1.f_2818 = 0;
}

void func_422()
{
	Global_2445582 = 0;
	Global_2445582.f_2 = 0;
	Global_2445582.f_3 = 0;
}

void func_423()
{
	Global_2445582.f_574 = 0;
}

void func_424()
{
	Global_2445582.f_577 = 0;
}

void func_425()
{
	Global_2445582.f_587 = 0;
}

void func_426()
{
	Global_2445582.f_572 = 0;
}

void func_427()
{
	unk_0x129432F245E1C55D(0);
	unk_0xD34DE96680FD919D(0);
}

void func_428()
{
	Global_2445582.f_579 = 0;
}

void func_429()
{
	struct<9> Var0;
	
	Global_1767466 = { Var0 };
}

void func_430()
{
	unk_0xADA0A4C226503297("freemode");
	unk_0xADA0A4C226503297("bootycallhandler");
	unk_0xADA0A4C226503297("emergencycalllauncher");
	unk_0xADA0A4C226503297("net_cloud_mission_loader");
	unk_0xADA0A4C226503297("FMMC_Launcher");
	unk_0xADA0A4C226503297("freemode_init");
	unk_0xADA0A4C226503297("AM_MP_PROPERTY_INT");
	unk_0xADA0A4C226503297("am_doors");
}

void func_431(int iParam0)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (((Global_2446355.f_3413 != 0 && Global_2446355.f_3413.f_1 != 0) && Global_2446355.f_3413.f_2 != 0) && Global_2446355.f_3413.f_3 != 0)
		{
			unk_0x02EFC211E8BF54D2(Global_2446355.f_3413, Global_2446355.f_3413.f_1, Global_2446355.f_3413.f_2, Global_2446355.f_3413.f_3, iParam0);
		}
	}
	func_432();
}

void func_432()
{
	Global_2446355.f_3413 = 0;
	Global_2446355.f_3413.f_1 = 0;
	Global_2446355.f_3413.f_2 = 0;
	Global_2446355.f_3413.f_3 = 0;
}

void func_433()
{
	struct<12> Var0;
	
	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Global_1776622 = { Var0 };
}

void func_434(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2445582.f_550.f_3 = { Var0 };
	Global_2445582.f_550 = 0;
	Global_2445582.f_550.f_1 = 0;
	Global_2445582.f_550.f_12 = 0;
	if (bParam0)
	{
		Global_2445582.f_550.f_2 = 0;
		Global_2445582.f_550.f_13 = 0;
		Global_2445582.f_550.f_14 = 0;
		Global_2394785 = 0;
		if (bParam1)
		{
			Global_2445582.f_550.f_9 = 0;
			Global_2445582.f_550.f_10 = 0;
			Global_2445582.f_550.f_11 = 0;
			Global_2445582.f_550.f_16 = -1;
		}
		if (iParam2 && !unk_0xF4F91CD09D59F42E())
		{
			Global_1758606.f_1347 = 0;
			Global_1758606.f_1348 = 0;
		}
		if (unk_0x3D35F9864E4640B1() != -1)
		{
			Global_1622678[unk_0x3D35F9864E4640B1() /*35*/].f_2 = 0;
			Global_1622678[unk_0x3D35F9864E4640B1() /*35*/] = 0;
		}
	}
}

void func_435(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar6;
	
	Global_2445582.f_31 = -1;
	Global_2445582.f_31.f_55 = -1;
	Global_2445582.f_31.f_1 = -1;
	Global_2445582.f_31.f_4 = 0;
	Global_2445582.f_31.f_2 = 0;
	Global_2445582.f_31.f_3 = 0;
	Global_2445582.f_31.f_40 = -1;
	Global_2445582.f_31.f_5 = { Var0 };
	Global_2445582.f_31.f_53 = 0;
	Global_2445582.f_31.f_129 = 0;
	Global_2445582.f_31.f_344 = 0;
	Global_2445582.f_31.f_54 = 0;
	Global_2445582.f_31.f_130 = 0;
	Global_2445582.f_31.f_345 = 0;
	Global_2445582.f_31.f_518 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2445582.f_31.f_476[iVar6] = 0;
		iVar6++;
	}
	Global_2445582.f_31.f_52 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2445582.f_31.f_56[iVar6] = 0;
		iVar6++;
	}
	Global_2445582.f_31.f_128 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2445582.f_31.f_131[iVar6] = 0;
		iVar6++;
	}
	Global_2445582.f_31.f_343 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2445582.f_31.f_346[iVar6] = 0;
		Global_2445582.f_31.f_361[iVar6] = 0;
		Global_2445582.f_31.f_391[iVar6 /*6*/] = { Var0 };
		Global_2445582.f_31.f_376[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2445582.f_31.f_42[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2445582.f_31.f_497 = 0;
			Global_2445582.f_31.f_498 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2445582.f_31.f_505[iVar6] = -1;
				Global_2445582.f_31.f_511[iVar6] = -1;
				iVar6++;
			}
			Global_2445582.f_31.f_47 = 0;
			Global_2445582.f_31.f_11 = { Var0 };
			Global_2445582.f_31.f_51 = 0;
			Global_2445582.f_31.f_491 = { 0f, 0f, 0f };
			Global_2445582.f_31.f_494 = { 0f, 0f, 0f };
			Global_2445582.f_31.f_50 = 0;
			Global_2445582.f_31.f_49 = 0;
		}
	}
}

void func_436()
{
	Global_2456646 = 1;
	if (Global_1312466.f_20 == 0 || unk_0x957E53BB191CB24D())
	{
		if (Global_1312466.f_20 != 1)
		{
			Global_1312466.f_20 = 1;
		}
		unk_0x91A0CAC408E34C50(0);
		unk_0x91A0CAC408E34C50(0);
	}
}

int func_437(int iParam0, var uParam1)
{
	if ((iParam0 > 10 || iParam0 < -10) && *uParam1 == iParam0)
	{
		return 1;
	}
	else
	{
		*uParam1 = iParam0;
	}
	return 0;
}

void func_438(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0xB3878AEB2FF752C6(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xF227625A36477D1C(2, 221) * 127f));
		}
	}
}

void func_439()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iLocal_104)
	{
		case 0:
			bVar0 = false;
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (Global_2602788[iVar1 /*80*/].f_2 == 1)
				{
					bVar0 = true;
				}
				else
				{
					iVar1++;
				}
			}
			if (bVar0)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					Local_108[iVar1 /*3*/] = 0;
					Local_108[iVar1 /*3*/].f_2 = 0;
					iVar1++;
				}
				iLocal_105 = unk_0x89AAFC610FD6BBDE();
				iLocal_106 = unk_0x1DAB1FC590B3245C(-1);
				iLocal_107 = 0;
				if (iLocal_105 >= 1000000000 || iLocal_106 >= 1000000000)
				{
					iLocal_104 = 99;
				}
				else
				{
					iLocal_104 = 1;
				}
			}
			break;
		
		case 1:
			bVar0 = false;
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (Global_2602788[iVar1 /*80*/].f_2 != 0)
				{
					if (Global_2602788[iVar1 /*80*/].f_5 == 1)
					{
						iLocal_104 = 99;
						Jump @371; //curOff = 220
					}
					else
					{
						bVar0 = true;
						if (!Local_108[iVar1 /*3*/])
						{
							Local_108[iVar1 /*3*/].f_1 = func_440(Global_2602788[iVar1 /*80*/].f_4);
							Local_108[iVar1 /*3*/].f_2 = Global_2602788[iVar1 /*80*/].f_1;
							Local_108[iVar1 /*3*/] = 1;
						}
					}
				}
				else if (Local_108[iVar1 /*3*/])
				{
					if (Global_2602788[iVar1 /*80*/].f_78 == 0)
					{
						if (Local_108[iVar1 /*3*/].f_1)
						{
							iLocal_107 = (iLocal_107 + Local_108[iVar1 /*3*/].f_2);
						}
						else
						{
							iLocal_107 = (iLocal_107 - Local_108[iVar1 /*3*/].f_2);
						}
					}
					Local_108[iVar1 /*3*/] = 0;
				}
				iVar1++;
			}
			if (!bVar0 && iLocal_104 == 1)
			{
				iLocal_104 = 2;
			}
			break;
		
		case 2:
			iVar2 = unk_0x89AAFC610FD6BBDE();
			iVar3 = unk_0x1DAB1FC590B3245C(-1);
			if (iVar2 >= 1000000000 || iVar3 >= 1000000000)
			{
				iLocal_104 = 99;
			}
			else
			{
				iLocal_104 = 99;
				if (unk_0x0C58CE21DE9AD283(((iLocal_105 + iLocal_106) - (iVar2 + iVar3))) != unk_0x0C58CE21DE9AD283(iLocal_107))
				{
					unk_0x11047BA199BB9FE9(100, 0, 0);
					iLocal_104 = 100;
				}
			}
			break;
		
		case 99:
			bVar0 = false;
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (Global_2602788[iVar1 /*80*/].f_2 != 0)
				{
					bVar0 = true;
				}
				iVar1++;
			}
			if (!bVar0)
			{
				iLocal_104 = 0;
			}
			break;
		
		case 100:
			unk_0x11047BA199BB9FE9(100, 0, 0);
			break;
	}
}

int func_440(int iParam0)
{
	switch (iParam0)
	{
		case -31156877:
		case 1718438689:
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
		case -47546905:
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
		case 1841563381:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1524702415:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case 211022587:
		case 1181422469:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case -101307780:
		case 1550217370:
		case 208223429:
		case -1981427218:
		case 848090538:
		case -1574637581:
		case -1426920838:
		case -293060240:
		case 463142405:
			return 1;
			break;
	}
	return 0;
}

void func_441()
{
	if (Global_2488624.f_36 > Global_262145.f_18250)
	{
		Global_2488624.f_36 = 0;
		func_2(&(Global_2488624.f_38));
		func_2(&(Global_2488624.f_40));
	}
	if (iLocal_26)
	{
		if (!func_3(&uLocal_36))
		{
			func_37(&uLocal_36, 0, 0);
		}
		else if (func_36(&uLocal_36, 250, 0))
		{
			func_2(&uLocal_36);
			iLocal_26 = 0;
		}
		if (Global_2488624.f_36 > 0)
		{
			Global_2488624.f_36 = 0;
			func_2(&(Global_2488624.f_38));
			func_2(&(Global_2488624.f_40));
			func_2(&uLocal_36);
			iLocal_26 = 0;
		}
	}
}

void func_442()
{
	if (!unk_0x2A3398C6222EB190(Global_1788584, 1))
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_1788584, 1);
	}
	func_444();
	if (func_3(&uLocal_24) && func_36(&uLocal_24, 1800000, 0))
	{
		func_2(&uLocal_24);
		unk_0xD804ACF2A7171150(&Global_1788584, 7);
		unk_0xD804ACF2A7171150(&Global_1788584, 8);
	}
	if (func_141(unk_0x3D35F9864E4640B1()) == 188)
	{
		iLocal_34 = 1;
	}
	else if (iLocal_34)
	{
		func_443();
		iLocal_34 = 0;
	}
	if (!iLocal_35)
	{
		func_443();
		iLocal_35 = 1;
	}
}

void func_443()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_27[iVar0] = 0;
		iVar0++;
	}
}

void func_444()
{
	if (func_3(&uLocal_13) && func_36(&uLocal_13, 5000, 0))
	{
		iLocal_12 = 0;
		func_2(&uLocal_13);
	}
	if (func_3(&uLocal_16) && func_36(&uLocal_16, 30000, 0))
	{
		iLocal_15 = 0;
		func_2(&uLocal_16);
	}
	if (func_3(&uLocal_19) && func_36(&uLocal_19, 60000, 0))
	{
		iLocal_18 = 0;
		func_2(&uLocal_19);
	}
	if (func_3(&uLocal_22) && func_36(&uLocal_22, 300000, 0))
	{
		iLocal_21 = 0;
		func_2(&uLocal_22);
	}
}

void func_445()
{
	int iVar0;
	int iVar1;
	
	if (Global_25222 == 0)
	{
		if (!iLocal_127)
		{
			iVar0 = func_50();
			if (iVar0 > 0)
			{
				iVar1 = func_48(iVar0);
				if (iVar1 != 0)
				{
					Global_1312370 = 1;
					unk_0x11047BA199BB9FE9(-101, 0, 0);
					iLocal_127 = 1;
				}
			}
			else
			{
				iLocal_127 = 1;
			}
		}
	}
	else if (iLocal_127)
	{
		iLocal_127 = 0;
	}
}

void func_446()
{
	if (Global_1641087 == 2)
	{
		if (unk_0x2A3398C6222EB190(Global_1641087.f_46382, 15))
		{
			if (Global_1641087.f_46380 > 0)
			{
				if (Global_1641087.f_46380 == 1)
				{
					unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 24);
					unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 26);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1641087.f_22), 25);
					Global_1641087.f_47037 = 1;
					unk_0xD804ACF2A7171150(&(Global_1641087.f_46400[15]), 0);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1641087.f_46400[15]), 1);
					Global_1641087.f_46380 = 0;
				}
				if (Global_1641087.f_46380 == 2)
				{
					unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 25);
					unk_0xD804ACF2A7171150(&(Global_1641087.f_22), 26);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1641087.f_22), 24);
					Global_1641087.f_47037 = 2;
					unk_0xD804ACF2A7171150(&(Global_1641087.f_46400[15]), 0);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1641087.f_46400[15]), 2);
					Global_1641087.f_46380 = 0;
				}
			}
		}
	}
}

void func_447()
{
	bool bVar0;
	
	bVar0 = false;
	if ((((func_356() || func_485()) || func_484()) && func_483()) && func_482() == 21)
	{
		if (iLocal_101 == -1)
		{
			iLocal_101 = func_448();
		}
		if (iLocal_101 >= 118)
		{
			bVar0 = true;
		}
		if (iLocal_100 != 2147483647)
		{
			bVar0 = true;
		}
	}
	else
	{
		iLocal_101 = -1;
	}
	if (bVar0)
	{
		if (iLocal_100 == 2147483647)
		{
			iLocal_100 = Global_70597;
			if (Global_70597 == 0)
			{
				Global_70597 = 1;
			}
			else if (Global_70597 == 1)
			{
				Global_70597 = 0;
			}
		}
		if (iLocal_100 == Global_70597)
		{
			iLocal_100 = Global_70597;
			if (Global_70597 == 0)
			{
				Global_70597 = 1;
			}
			else if (Global_70597 == 1)
			{
				Global_70597 = 0;
			}
		}
	}
	else if (iLocal_100 != 2147483647)
	{
		Global_70597 = iLocal_100;
		iLocal_100 = 2147483647;
	}
}

int func_448()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<14> Var5;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	struct<10> Var23;
	var uVar40;
	bool bVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = 0;
	bVar1 = false;
	iVar3 = unk_0xE9559A12052415BE(unk_0x0031992CA618A445());
	if (iVar3 == joaat("mp_m_freemode_01"))
	{
		iVar4 = 131;
	}
	else
	{
		iVar4 = 131;
	}
	iVar2 = 0;
	while (iVar2 < 26)
	{
		if (iVar2 > 0)
		{
			iVar19 = ((iVar2 - 1) + iVar4);
			Var5 = { func_469(iVar3, 14, iVar19) };
			bVar1 = false;
			if (unk_0x2A3398C6222EB190(Var5.f_6, 2))
			{
				if (unk_0x2A3398C6222EB190(Var5.f_6, 6))
				{
					if (unk_0x698ED51C7EF0C52D(Global_2621444, joaat("PILOT_SUIT"), 1))
					{
						if ((iVar3 == joaat("mp_m_freemode_01") && unk_0x698ED51C7EF0C52D(func_456(iVar3, func_460(unk_0x0031992CA618A445(), 11, -1), 11, 3), joaat("PILOT_SUIT"), 0)) || (iVar3 == joaat("mp_f_freemode_01") && unk_0x698ED51C7EF0C52D(func_456(iVar3, func_460(unk_0x0031992CA618A445(), 11, -1), 11, 4), joaat("PILOT_SUIT"), 0)))
						{
							bVar1 = true;
						}
					}
				}
				else if (!unk_0x2A3398C6222EB190(Var5.f_6, 3))
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		iVar2++;
	}
	unk_0xB73F53C041C3C8E8(&Var23);
	unk_0x91227C3DBA3B761D(&uVar40);
	if (iVar3 == joaat("mp_m_freemode_01"))
	{
		iVar21 = 327;
		iVar20 = 3;
	}
	else if (iVar3 == joaat("mp_f_freemode_01"))
	{
		iVar21 = 327;
		iVar20 = 4;
	}
	iVar59 = 0;
	iVar60 = unk_0xF6A17D900553E83D(iVar20, 6, -1, 1, -1, -1);
	iVar58 = 0;
	while (iVar58 < iVar60)
	{
		unk_0x88CB23B975DF1F74(iVar58, &Var23);
		unk_0x456AF95F7C897433(iVar58, &uVar40);
		if (!unk_0x03CF889BDA5553A9(Var23.f_0))
		{
			iVar22 = (iVar21 + iVar59);
			if (!func_452(Var23.f_0, Var23.f_1, 1, 0))
			{
				if (unk_0xA56C5821F50C3275(&(Var23.f_9)))
				{
					if (Var23.f_6 == 0)
					{
						if (func_450(Var23.f_1, 1, 1, 1, -1))
						{
							if (unk_0x698ED51C7EF0C52D(Var23.f_1, joaat("HELMET"), 1))
							{
								bVar57 = true;
								if (unk_0x698ED51C7EF0C52D(Var23.f_1, joaat("PILOT_SUIT"), 1))
								{
									if ((iVar3 == joaat("mp_m_freemode_01") && !unk_0x698ED51C7EF0C52D(func_456(iVar3, func_460(unk_0x0031992CA618A445(), 11, -1), 11, 3), joaat("PILOT_SUIT"), 0)) || (iVar3 == joaat("mp_f_freemode_01") && !unk_0x698ED51C7EF0C52D(func_456(iVar3, func_460(unk_0x0031992CA618A445(), 11, -1), 11, 4), joaat("PILOT_SUIT"), 0)))
									{
										bVar57 = false;
									}
								}
								if (unk_0x698ED51C7EF0C52D(Var23.f_1, joaat("DEADLINE_OUTFIT"), 1))
								{
									if ((iVar3 == joaat("mp_m_freemode_01") && !unk_0x698ED51C7EF0C52D(func_456(iVar3, func_460(unk_0x0031992CA618A445(), 11, -1), 11, 3), joaat("DEADLINE_OUTFIT"), 0)) || (iVar3 == joaat("mp_f_freemode_01") && !unk_0x698ED51C7EF0C52D(func_456(iVar3, func_460(unk_0x0031992CA618A445(), 11, -1), 11, 4), joaat("DEADLINE_OUTFIT"), 0)))
									{
										bVar57 = false;
									}
								}
								if (unk_0xD23920F1D738F9C8(Var23.f_1) > 0)
								{
									if (func_449(-1) != unk_0x698ED51C7EF0C52D(Var23.f_1, joaat("ALT_HELMET"), 1))
									{
										bVar57 = false;
									}
								}
								if (unk_0x698ED51C7EF0C52D(Var23.f_1, joaat("ALT_HELMET"), 1))
								{
								}
								if (bVar57)
								{
									iVar0++;
								}
							}
						}
					}
				}
			}
			iVar59++;
		}
		iVar58++;
	}
	return iVar0;
}

int func_449(int iParam0)
{
	if (func_406(205, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_450(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_70597;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_451(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_101(iVar2, iVar0, 0);
		return unk_0x2A3398C6222EB190(uVar3, iVar1);
	}
	return 0;
}

bool func_451(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 7237;
	if ((bParam4 && Global_2605706) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 968;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 968;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 968;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 968;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 968;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 968;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 968;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 968;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 932;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 932;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 932;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 932;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 932;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 932;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 932;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 932;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 932;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1020;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1020;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1020;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1020;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1020;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1020;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1020;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1020;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 968;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 968;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 968;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 968;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 968;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 968;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 968;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 968;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1020;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1020;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1020;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1020;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1020;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1020;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1020;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1020;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_2605706)
		{
			iVar0 = unk_0x249D5BF9149E23C7(iParam0);
		}
		else
		{
			iVar0 = unk_0x4793C31F973B1748(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x249D5BF9149E23C7(iParam0);
	}
	else
	{
		iVar0 = unk_0x4793C31F973B1748(iParam0);
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
					*uParam2 = 1756;
					break;
				
				case 1:
					*uParam2 = 1757;
					break;
				
				case 2:
					*uParam2 = 1758;
					break;
				
				case 3:
					*uParam2 = 1759;
					break;
				
				case 4:
					*uParam2 = 1760;
					break;
				
				case 5:
					*uParam2 = 1761;
					break;
				
				case 6:
					*uParam2 = 1768;
					break;
				
				case 7:
					*uParam2 = 1769;
					break;
				
				case 8:
					*uParam2 = 1770;
					break;
				
				case 9:
					*uParam2 = 1771;
					break;
				
				case 10:
					*uParam2 = 1772;
					break;
				
				case 11:
					*uParam2 = 1773;
					break;
				
				case 12:
					*uParam2 = 1774;
					break;
				
				case 13:
					*uParam2 = 1782;
					break;
				
				case 14:
					*uParam2 = 1783;
					break;
				
				case 15:
					*uParam2 = 1884;
					break;
				
				case 16:
					*uParam2 = 1885;
					break;
				
				case 17:
					*uParam2 = 1916;
					break;
				
				case 18:
					*uParam2 = 1930;
					break;
				
				case 19:
					*uParam2 = 1931;
					break;
				
				case 20:
					*uParam2 = 1932;
					break;
				
				case 21:
					*uParam2 = 1933;
					break;
				
				case 22:
					*uParam2 = 1934;
					break;
				
				case 23:
					*uParam2 = 2038;
					break;
				
				case 24:
					*uParam2 = 2039;
					break;
				
				case 25:
					*uParam2 = 2065;
					break;
				
				case 26:
					*uParam2 = 2066;
					break;
				
				case 27:
					*uParam2 = 2067;
					break;
				
				case 28:
					*uParam2 = 2068;
					break;
				
				case 29:
					*uParam2 = 2069;
					break;
				
				case 30:
					*uParam2 = 2070;
					break;
				
				case 31:
					*uParam2 = 2071;
					break;
				
				case 32:
					*uParam2 = 2072;
					break;
				
				case 33:
					*uParam2 = 2073;
					break;
				
				case 34:
					*uParam2 = 2074;
					break;
				
				case 35:
					*uParam2 = 2321;
					break;
				
				case 36:
					*uParam2 = 2322;
					break;
				
				case 37:
					*uParam2 = 2376;
					break;
				
				case 38:
					*uParam2 = 2377;
					break;
				
				case 39:
					*uParam2 = 2378;
					break;
				
				case 40:
					*uParam2 = 2379;
					break;
				
				case 41:
					*uParam2 = 2438;
					break;
				
				case 42:
					*uParam2 = 2439;
					break;
				
				case 43:
					*uParam2 = 2440;
					break;
				
				case 44:
					*uParam2 = 2441;
					break;
				
				case 45:
					*uParam2 = 2442;
					break;
				
				case 46:
					*uParam2 = 2443;
					break;
				
				case 47:
					*uParam2 = 2444;
					break;
				
				case 48:
					*uParam2 = 2445;
					break;
				
				case 49:
					*uParam2 = 2446;
					break;
				
				case 50:
					*uParam2 = 2447;
					break;
				
				case 51:
					*uParam2 = 2576;
					break;
				
				case 52:
					*uParam2 = 2577;
					break;
				
				case 53:
					*uParam2 = 2578;
					break;
				
				case 54:
					*uParam2 = 2579;
					break;
				
				case 55:
					*uParam2 = 2580;
					break;
				
				case 56:
					*uParam2 = 2581;
					break;
				
				case 57:
					*uParam2 = 2582;
					break;
				
				case 58:
					*uParam2 = 2583;
					break;
				
				case 59:
					*uParam2 = 2584;
					break;
				
				case 60:
					*uParam2 = 2585;
					break;
				
				case 61:
					*uParam2 = 2586;
					break;
				
				case 62:
					*uParam2 = 3183;
					break;
				
				case 63:
					*uParam2 = 3184;
					break;
				
				case 64:
					*uParam2 = 3185;
					break;
				
				case 65:
					*uParam2 = 3186;
					break;
				
				case 66:
					*uParam2 = 3187;
					break;
				
				case 67:
					*uParam2 = 3188;
					break;
				
				case 68:
					*uParam2 = 3656;
					break;
				
				case 69:
					*uParam2 = 3657;
					break;
				
				case 70:
					*uParam2 = 3658;
					break;
				
				case 71:
					*uParam2 = 3659;
					break;
				
				case 72:
					*uParam2 = 3660;
					break;
				
				case 73:
					*uParam2 = 3661;
					break;
				
				case 74:
					*uParam2 = 3662;
					break;
				
				case 75:
					*uParam2 = 3663;
					break;
				
				case 76:
					*uParam2 = 3664;
					break;
				
				case 77:
					*uParam2 = 3665;
					break;
				
				case 78:
					*uParam2 = 3771;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3772;
					break;
				
				case 80:
					*uParam2 = 3773;
					break;
				
				case 81:
					*uParam2 = 3774;
					break;
				
				case 82:
					*uParam2 = 3775;
					break;
				
				case 83:
					*uParam2 = 3776;
					break;
				
				case 84:
					*uParam2 = 3777;
					break;
				
				case 85:
					*uParam2 = 3778;
					break;
				
				case 86:
					*uParam2 = 3881;
					break;
				
				case 87:
					*uParam2 = 3882;
					break;
				
				case 88:
					*uParam2 = 3883;
					break;
				
				case 89:
					*uParam2 = 5316;
					break;
				
				case 90:
					*uParam2 = 5317;
					break;
				
				case 91:
					*uParam2 = 5318;
					break;
				
				case 92:
					*uParam2 = 5319;
					break;
				
				case 93:
					*uParam2 = 5320;
					break;
				
				case 94:
					*uParam2 = 5321;
					break;
				
				case 95:
					*uParam2 = 5322;
					break;
				
				case 96:
					*uParam2 = 5323;
					break;
				
				case 97:
					*uParam2 = 5324;
					break;
				
				case 98:
					*uParam2 = 5325;
					break;
				
				case 99:
					*uParam2 = 5326;
					break;
				
				case 100:
					*uParam2 = 5327;
					break;
				
				case 101:
					*uParam2 = 5373;
					break;
				
				case 102:
					*uParam2 = 5374;
					break;
				
				case 103:
					*uParam2 = 5375;
					break;
				
				case 104:
					*uParam2 = 5376;
					break;
				
				case 105:
					*uParam2 = 5377;
					break;
				
				case 106:
					*uParam2 = 5378;
					break;
				
				case 107:
					*uParam2 = 5379;
					break;
				
				case 108:
					*uParam2 = 5380;
					break;
				
				case 109:
					*uParam2 = 5381;
					break;
				
				case 110:
					*uParam2 = 5382;
					break;
				
				case 111:
					*uParam2 = 5383;
					break;
				
				case 112:
					*uParam2 = 5384;
					break;
				
				case 113:
					*uParam2 = 5385;
					break;
				
				case 114:
					*uParam2 = 5386;
					break;
				
				case 115:
					*uParam2 = 5387;
					break;
				
				case 116:
					*uParam2 = 5388;
					break;
				
				case 117:
					*uParam2 = 5389;
					break;
				
				case 118:
					*uParam2 = 5390;
					break;
				
				case 119:
					*uParam2 = 5391;
					break;
				
				case 120:
					*uParam2 = 5392;
					break;
				
				case 121:
					*uParam2 = 5393;
					break;
				
				case 122:
					*uParam2 = 5394;
					break;
				
				case 123:
					*uParam2 = 5395;
					break;
				
				case 124:
					*uParam2 = 6101;
					break;
				
				case 125:
					*uParam2 = 6102;
					break;
				
				case 126:
					*uParam2 = 6103;
					break;
				
				case 127:
					*uParam2 = 6104;
					break;
				
				case 128:
					*uParam2 = 6105;
					break;
				
				case 129:
					*uParam2 = 6106;
					break;
				
				case 130:
					*uParam2 = 6107;
					break;
				
				case 131:
					*uParam2 = 6108;
					break;
				
				case 132:
					*uParam2 = 6109;
					break;
				
				case 133:
					*uParam2 = 6110;
					break;
				
				case 134:
					*uParam2 = 6111;
					break;
				
				case 135:
					*uParam2 = 6112;
					break;
				
				case 136:
					*uParam2 = 6113;
					break;
				
				case 137:
					*uParam2 = 6114;
					break;
				
				case 138:
					*uParam2 = 6115;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1762;
					break;
				
				case 1:
					*uParam2 = 1763;
					break;
				
				case 2:
					*uParam2 = 1764;
					break;
				
				case 3:
					*uParam2 = 1765;
					break;
				
				case 4:
					*uParam2 = 1766;
					break;
				
				case 5:
					*uParam2 = 1767;
					break;
				
				case 6:
					*uParam2 = 1775;
					break;
				
				case 7:
					*uParam2 = 1776;
					break;
				
				case 8:
					*uParam2 = 1777;
					break;
				
				case 9:
					*uParam2 = 1778;
					break;
				
				case 10:
					*uParam2 = 1779;
					break;
				
				case 11:
					*uParam2 = 1780;
					break;
				
				case 12:
					*uParam2 = 1781;
					break;
				
				case 13:
					*uParam2 = 1784;
					break;
				
				case 14:
					*uParam2 = 1785;
					break;
				
				case 15:
					*uParam2 = 1886;
					break;
				
				case 16:
					*uParam2 = 1887;
					break;
				
				case 17:
					*uParam2 = 1917;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2040;
					break;
				
				case 24:
					*uParam2 = 2041;
					break;
				
				case 25:
					*uParam2 = 2075;
					break;
				
				case 26:
					*uParam2 = 2076;
					break;
				
				case 27:
					*uParam2 = 2077;
					break;
				
				case 28:
					*uParam2 = 2078;
					break;
				
				case 29:
					*uParam2 = 2079;
					break;
				
				case 30:
					*uParam2 = 2080;
					break;
				
				case 31:
					*uParam2 = 2081;
					break;
				
				case 32:
					*uParam2 = 2082;
					break;
				
				case 33:
					*uParam2 = 2083;
					break;
				
				case 34:
					*uParam2 = 2084;
					break;
				
				case 35:
					*uParam2 = 2323;
					break;
				
				case 36:
					*uParam2 = 2324;
					break;
				
				case 37:
					*uParam2 = 2380;
					break;
				
				case 38:
					*uParam2 = 2381;
					break;
				
				case 39:
					*uParam2 = 2382;
					break;
				
				case 40:
					*uParam2 = 2383;
					break;
				
				case 41:
					*uParam2 = 2448;
					break;
				
				case 42:
					*uParam2 = 2449;
					break;
				
				case 43:
					*uParam2 = 2450;
					break;
				
				case 44:
					*uParam2 = 2451;
					break;
				
				case 45:
					*uParam2 = 2452;
					break;
				
				case 46:
					*uParam2 = 2453;
					break;
				
				case 47:
					*uParam2 = 2454;
					break;
				
				case 48:
					*uParam2 = 2455;
					break;
				
				case 49:
					*uParam2 = 2456;
					break;
				
				case 50:
					*uParam2 = 2457;
					break;
				
				case 51:
					*uParam2 = 2587;
					break;
				
				case 52:
					*uParam2 = 2588;
					break;
				
				case 53:
					*uParam2 = 2589;
					break;
				
				case 54:
					*uParam2 = 2590;
					break;
				
				case 55:
					*uParam2 = 2591;
					break;
				
				case 56:
					*uParam2 = 2592;
					break;
				
				case 57:
					*uParam2 = 2593;
					break;
				
				case 58:
					*uParam2 = 2594;
					break;
				
				case 59:
					*uParam2 = 2595;
					break;
				
				case 60:
					*uParam2 = 2596;
					break;
				
				case 61:
					*uParam2 = 2597;
					break;
				
				case 62:
					*uParam2 = 3189;
					break;
				
				case 63:
					*uParam2 = 3190;
					break;
				
				case 64:
					*uParam2 = 3191;
					break;
				
				case 65:
					*uParam2 = 3192;
					break;
				
				case 66:
					*uParam2 = 3193;
					break;
				
				case 67:
					*uParam2 = 3194;
					break;
				
				case 68:
					*uParam2 = 3666;
					break;
				
				case 69:
					*uParam2 = 3667;
					break;
				
				case 70:
					*uParam2 = 3668;
					break;
				
				case 71:
					*uParam2 = 3669;
					break;
				
				case 72:
					*uParam2 = 3670;
					break;
				
				case 73:
					*uParam2 = 3671;
					break;
				
				case 74:
					*uParam2 = 3672;
					break;
				
				case 75:
					*uParam2 = 3673;
					break;
				
				case 76:
					*uParam2 = 3674;
					break;
				
				case 77:
					*uParam2 = 3675;
					break;
				
				case 78:
					*uParam2 = 3779;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3780;
					break;
				
				case 80:
					*uParam2 = 3781;
					break;
				
				case 81:
					*uParam2 = 3782;
					break;
				
				case 82:
					*uParam2 = 3783;
					break;
				
				case 83:
					*uParam2 = 3784;
					break;
				
				case 84:
					*uParam2 = 3785;
					break;
				
				case 85:
					*uParam2 = 3786;
					break;
				
				case 86:
					*uParam2 = 3884;
					break;
				
				case 87:
					*uParam2 = 3885;
					break;
				
				case 88:
					*uParam2 = 3886;
					break;
				
				case 89:
					*uParam2 = 5328;
					break;
				
				case 90:
					*uParam2 = 5329;
					break;
				
				case 91:
					*uParam2 = 5330;
					break;
				
				case 92:
					*uParam2 = 5331;
					break;
				
				case 93:
					*uParam2 = 5332;
					break;
				
				case 94:
					*uParam2 = 5333;
					break;
				
				case 95:
					*uParam2 = 5334;
					break;
				
				case 96:
					*uParam2 = 5335;
					break;
				
				case 97:
					*uParam2 = 5336;
					break;
				
				case 98:
					*uParam2 = 5337;
					break;
				
				case 99:
					*uParam2 = 5338;
					break;
				
				case 100:
					*uParam2 = 5339;
					break;
				
				case 101:
					*uParam2 = 5396;
					break;
				
				case 102:
					*uParam2 = 5397;
					break;
				
				case 103:
					*uParam2 = 5398;
					break;
				
				case 104:
					*uParam2 = 5399;
					break;
				
				case 105:
					*uParam2 = 5400;
					break;
				
				case 106:
					*uParam2 = 5401;
					break;
				
				case 107:
					*uParam2 = 5402;
					break;
				
				case 108:
					*uParam2 = 5403;
					break;
				
				case 109:
					*uParam2 = 5404;
					break;
				
				case 110:
					*uParam2 = 5405;
					break;
				
				case 111:
					*uParam2 = 5406;
					break;
				
				case 112:
					*uParam2 = 5407;
					break;
				
				case 113:
					*uParam2 = 5408;
					break;
				
				case 114:
					*uParam2 = 5409;
					break;
				
				case 115:
					*uParam2 = 5410;
					break;
				
				case 116:
					*uParam2 = 5411;
					break;
				
				case 117:
					*uParam2 = 5412;
					break;
				
				case 118:
					*uParam2 = 5413;
					break;
				
				case 119:
					*uParam2 = 5414;
					break;
				
				case 120:
					*uParam2 = 5415;
					break;
				
				case 121:
					*uParam2 = 5416;
					break;
				
				case 122:
					*uParam2 = 5417;
					break;
				
				case 123:
					*uParam2 = 5418;
					break;
				
				case 124:
					*uParam2 = 6116;
					break;
				
				case 125:
					*uParam2 = 6117;
					break;
				
				case 126:
					*uParam2 = 6118;
					break;
				
				case 127:
					*uParam2 = 6119;
					break;
				
				case 128:
					*uParam2 = 6120;
					break;
				
				case 129:
					*uParam2 = 6121;
					break;
				
				case 130:
					*uParam2 = 6122;
					break;
				
				case 131:
					*uParam2 = 6123;
					break;
				
				case 132:
					*uParam2 = 6124;
					break;
				
				case 133:
					*uParam2 = 6125;
					break;
				
				case 134:
					*uParam2 = 6126;
					break;
				
				case 135:
					*uParam2 = 6127;
					break;
				
				case 136:
					*uParam2 = 6128;
					break;
				
				case 137:
					*uParam2 = 6129;
					break;
				
				case 138:
					*uParam2 = 6130;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 7237;
}

int func_452(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("CU_GUNRUN_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_GR_M_JBIB_19_0"):
				case joaat("DLC_MP_GR_F_JBIB_25_0"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15417, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_JBIB_19_1"):
				case joaat("DLC_MP_GR_F_JBIB_25_1"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15418, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_JBIB_20_0"):
				case joaat("DLC_MP_GR_F_JBIB_26_0"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15425, -1, -1))
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
				case joaat("DLC_MP_GR_M_DECL_5_0"):
				case joaat("DLC_MP_GR_F_DECL_5_0"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15405, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_DECL_5_1"):
				case joaat("DLC_MP_GR_F_DECL_5_1"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15393, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_DECL_5_2"):
				case joaat("DLC_MP_GR_F_DECL_5_2"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15409, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_DECL_5_3"):
				case joaat("DLC_MP_GR_F_DECL_5_3"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15396, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_DECL_5_4"):
				case joaat("DLC_MP_GR_F_DECL_5_4"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15412, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_DECL_5_5"):
				case joaat("DLC_MP_GR_F_DECL_5_5"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_406(209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_DECL_5_6"):
				case joaat("DLC_MP_GR_F_DECL_5_6"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15403, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_DECL_5_7"):
				case joaat("DLC_MP_GR_F_DECL_5_7"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_406(209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_DECL_5_8"):
				case joaat("DLC_MP_GR_F_DECL_5_8"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15389, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_DECL_5_9"):
				case joaat("DLC_MP_GR_F_DECL_5_9"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_406(209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_DECL_5_10"):
				case joaat("DLC_MP_GR_F_DECL_5_10"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15398, -1, -1))
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
				case joaat("DLC_MP_GR_M_PHEAD_6_0"):
				case joaat("DLC_MP_GR_F_PHEAD_6_0"):
				case joaat("DLC_MP_GR_M_PHEAD_7_0"):
				case joaat("DLC_MP_GR_F_PHEAD_7_0"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15400, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_PHEAD_6_1"):
				case joaat("DLC_MP_GR_F_PHEAD_6_1"):
				case joaat("DLC_MP_GR_M_PHEAD_7_1"):
				case joaat("DLC_MP_GR_F_PHEAD_7_1"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_406(209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_PHEAD_6_2"):
				case joaat("DLC_MP_GR_F_PHEAD_6_2"):
				case joaat("DLC_MP_GR_M_PHEAD_7_2"):
				case joaat("DLC_MP_GR_F_PHEAD_7_2"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15408, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_PHEAD_6_3"):
				case joaat("DLC_MP_GR_F_PHEAD_6_3"):
				case joaat("DLC_MP_GR_M_PHEAD_7_3"):
				case joaat("DLC_MP_GR_F_PHEAD_7_3"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_406(209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_PHEAD_6_4"):
				case joaat("DLC_MP_GR_F_PHEAD_6_4"):
				case joaat("DLC_MP_GR_M_PHEAD_7_4"):
				case joaat("DLC_MP_GR_F_PHEAD_7_4"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15411, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_PHEAD_6_5"):
				case joaat("DLC_MP_GR_F_PHEAD_6_5"):
				case joaat("DLC_MP_GR_M_PHEAD_7_5"):
				case joaat("DLC_MP_GR_F_PHEAD_7_5"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15397, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_PHEAD_6_6"):
				case joaat("DLC_MP_GR_F_PHEAD_6_6"):
				case joaat("DLC_MP_GR_M_PHEAD_7_6"):
				case joaat("DLC_MP_GR_F_PHEAD_7_6"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15413, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_PHEAD_6_7"):
				case joaat("DLC_MP_GR_F_PHEAD_6_7"):
				case joaat("DLC_MP_GR_M_PHEAD_7_7"):
				case joaat("DLC_MP_GR_F_PHEAD_7_7"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15391, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_PHEAD_6_8"):
				case joaat("DLC_MP_GR_F_PHEAD_6_8"):
				case joaat("DLC_MP_GR_M_PHEAD_7_8"):
				case joaat("DLC_MP_GR_F_PHEAD_7_8"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15388, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_PHEAD_6_9"):
				case joaat("DLC_MP_GR_F_PHEAD_6_9"):
				case joaat("DLC_MP_GR_M_PHEAD_7_9"):
				case joaat("DLC_MP_GR_F_PHEAD_7_9"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_406(209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_GR_M_PHEAD_6_10"):
				case joaat("DLC_MP_GR_F_PHEAD_6_10"):
				case joaat("DLC_MP_GR_M_PHEAD_7_10"):
				case joaat("DLC_MP_GR_F_PHEAD_7_10"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(15401, -1, -1))
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
		
		case joaat("CU_IMPEXP_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_IE_M_BERD_7_0"):
				case joaat("DLC_MP_IE_F_BERD_7_0"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(9443, -1, -1))
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
				case joaat("DLC_MP_IE_M_OUTFIT_0"):
				case joaat("DLC_MP_IE_M_BERD_11_0"):
				case joaat("DLC_MP_IE_M_LEGS_7_0"):
				case joaat("DLC_MP_IE_M_FEET_1_0"):
				case joaat("DLC_MP_IE_M_JBIB_15_0"):
					if (!Global_262145.f_17844 && !func_450(joaat("DLC_MP_IE_M_OUTFIT_0"), 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_IE_M_OUTFIT_1"):
				case joaat("DLC_MP_IE_M_BERD_11_1"):
				case joaat("DLC_MP_IE_M_LEGS_7_1"):
				case joaat("DLC_MP_IE_M_FEET_1_1"):
				case joaat("DLC_MP_IE_M_JBIB_15_1"):
					if (!Global_262145.f_17844 && !func_450(joaat("DLC_MP_IE_M_OUTFIT_1"), 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_IE_M_OUTFIT_2"):
				case joaat("DLC_MP_IE_M_BERD_11_2"):
				case joaat("DLC_MP_IE_M_LEGS_7_2"):
				case joaat("DLC_MP_IE_M_FEET_1_2"):
				case joaat("DLC_MP_IE_M_JBIB_15_2"):
					if (!Global_262145.f_17844 && !func_450(joaat("DLC_MP_IE_M_OUTFIT_2"), 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_IE_F_OUTFIT_0"):
				case joaat("DLC_MP_IE_F_BERD_11_0"):
				case joaat("DLC_MP_IE_F_LEGS_7_0"):
				case joaat("DLC_MP_IE_F_FEET_1_0"):
				case joaat("DLC_MP_IE_F_JBIB_15_0"):
					if (!Global_262145.f_17844 && !func_450(joaat("DLC_MP_IE_F_OUTFIT_0"), 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_IE_F_OUTFIT_1"):
				case joaat("DLC_MP_IE_F_BERD_11_1"):
				case joaat("DLC_MP_IE_F_LEGS_7_1"):
				case joaat("DLC_MP_IE_F_FEET_1_1"):
				case joaat("DLC_MP_IE_F_JBIB_15_1"):
					if (!Global_262145.f_17844 && !func_450(joaat("DLC_MP_IE_F_OUTFIT_1"), 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_IE_F_OUTFIT_2"):
				case joaat("DLC_MP_IE_F_BERD_11_2"):
				case joaat("DLC_MP_IE_F_LEGS_7_2"):
				case joaat("DLC_MP_IE_F_FEET_1_2"):
				case joaat("DLC_MP_IE_F_JBIB_15_2"):
					if (!Global_262145.f_17844 && !func_450(joaat("DLC_MP_IE_F_OUTFIT_2"), 1, 1, 1, -1))
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
		
		case joaat("CU_BIKER_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_BIKER_M_OUTFIT_0"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_1"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_2"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_3"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_4"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_5"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_6"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_7"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_0"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_1"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_2"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_3"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_4"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_5"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_6"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_9"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_0"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_1"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_2"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_3"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_4"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_5"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_6"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_9"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_0"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_1"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_2"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_3"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_4"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_5"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_6"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_7"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_0"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_1"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_2"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_3"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_4"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_5"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_6"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_9"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_0"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_1"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_2"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_3"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_4"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_5"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_6"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_9"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(9386, -1, -1)) && Global_262145.f_16206 != 0)
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
				case joaat("DLC_MP_BIKER_M_DECL_0_0"):
				case joaat("DLC_MP_BIKER_F_DECL_0_0"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(9375, -1, -1)) && !Global_262145.f_16196)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_BIKER_M_DECL_0_1"):
				case joaat("DLC_MP_BIKER_F_DECL_0_1"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(9376, -1, -1)) && !Global_262145.f_16197)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_BIKER_M_DECL_0_2"):
				case joaat("DLC_MP_BIKER_F_DECL_0_2"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(9377, -1, -1)) && !Global_262145.f_16198)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_BIKER_M_DECL_0_3"):
				case joaat("DLC_MP_BIKER_F_DECL_0_3"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(9378, -1, -1)) && !Global_262145.f_16199)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_BIKER_M_DECL_0_4"):
				case joaat("DLC_MP_BIKER_F_DECL_0_4"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(9379, -1, -1)) && !Global_262145.f_16200)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_BIKER_M_DECL_0_5"):
				case joaat("DLC_MP_BIKER_F_DECL_0_5"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(9380, -1, -1)) && !Global_262145.f_16201)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_BIKER_M_DECL_0_6"):
				case joaat("DLC_MP_BIKER_F_DECL_0_6"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(9381, -1, -1)) && !Global_262145.f_16202)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_BIKER_M_DECL_0_7"):
				case joaat("DLC_MP_BIKER_F_DECL_0_7"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(9382, -1, -1)) && !Global_262145.f_16203)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_BIKER_M_DECL_0_8"):
				case joaat("DLC_MP_BIKER_F_DECL_0_8"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(9383, -1, -1)) && !Global_262145.f_16204)
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
		
		case joaat("CU_STUNT_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
				case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
				case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
				case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
				case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(7595, -1, -1)) && !Global_262145.f_15437)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
				case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
				case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
				case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
				case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(7596, -1, -1)) && !Global_262145.f_15438)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
				case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
				case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
				case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
				case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(7597, -1, -1)) && !Global_262145.f_15439)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
				case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
				case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
				case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
				case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(7599, -1, -1)) && !Global_262145.f_15441)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
				case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
				case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
				case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
				case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(7600, -1, -1)) && !Global_262145.f_15442)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
				case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
				case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
				case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
				case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(7598, -1, -1)) && !Global_262145.f_15440)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
				case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
				case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
				case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
				case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(7601, -1, -1)) && !Global_262145.f_15443)
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
		
		case joaat("CU_EXE_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7482, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7483, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7484, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7485, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7486, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(7487, -1, -1)) && !func_453(9441, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7488, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
					if ((!func_450(iParam1, 1, 1, 1, -1) && !func_453(7489, -1, -1)) && !func_453(9442, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7490, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7491, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7492, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7493, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7494, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7495, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7515, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7516, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7517, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7518, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7519, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7520, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7521, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7522, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7523, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7524, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7525, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7526, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7527, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(7528, -1, -1))
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
		
		case joaat("CU_LOW_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(4247, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(4248, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(4249, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(4250, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(4251, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(4252, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(4253, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(4254, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(4255, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(4256, -1, -1))
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
		
		case joaat("CU_HEIST_CLOTHES"):
			return 1;
			break;
		
		case joaat("CU_XMAS_CLOTHES"):
		case joaat("CU_XMAS2_CLOTHES"):
		case joaat("CU_XMAS3_CLOTHES"):
		case joaat("CU_XMAS4_CLOTHES"):
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
					if (Global_262145.f_11426)
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(110, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(111, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(112, -1, -1))
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
					if (Global_262145.f_11427)
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(4333, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(4334, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if (iParam0 == joaat("CU_XMAS4_CLOTHES"))
			{
				if (!Global_262145.f_17843)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (Global_262145.f_8245)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("CU_XMAS2_MASKS"):
		case joaat("CU_XMAS3_MASKS"):
		case joaat("CU_XMAS4_MASKS"):
			switch (iParam1)
			{
				case -1208373599:
				case 1656518170:
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(4335, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(3750, -1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if (iParam0 == joaat("CU_XMAS4_MASKS"))
			{
				if (!Global_262145.f_17842)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (iParam0 != joaat("CU_XMAS3_MASKS"))
			{
				if (Global_262145.f_8246)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (!Global_262145.f_11425)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("CU_VAL_CLOTHES"):
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !Global_262145.f_10753)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if (((!Global_262145.f_5994 && !func_450(iParam1, 1, 1, 1, -1)) && !unk_0x698ED51C7EF0C52D(iParam1, joaat("MULTI_DECAL"), iParam2)) && !Global_262145.f_10755)
			{
				return 1;
			}
			break;
		
		case joaat("CU_VAL2_CLOTHES"):
			if ((!Global_262145.f_12098 && !func_450(iParam1, 1, 1, 1, -1)) && !unk_0x698ED51C7EF0C52D(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		
		case joaat("CU_INDI_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_IND_F_PHEAD_6_0"):
				case joaat("DLC_MP_IND_M_PHEAD_6_0"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(3594, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(3595, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(3596, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(3597, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(3598, -1, -1))
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
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(3599, -1, -1))
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
					if (((!Global_262145.f_7176 && !func_450(iParam1, 1, 1, 1, -1)) && !unk_0x698ED51C7EF0C52D(iParam1, joaat("MULTI_DECAL"), iParam2)) && !func_453(3606, -1, -1))
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
					if (!Global_262145.f_10778 && !func_450(iParam1, 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if ((!Global_262145.f_7176 && !func_450(iParam1, 1, 1, 1, -1)) && !unk_0x698ED51C7EF0C52D(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		
		case joaat("CU_LTS_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_LTS_M_BERD_2_0"):
				case joaat("DLC_MP_LTS_F_BERD_2_0"):
					if (!func_450(iParam1, 1, 1, 1, -1) && !func_453(3616, -1, -1))
					{
						return 1;
					}
					break;
				
				case joaat("DLC_MP_LTS_M_BERD_0_0"):
				case joaat("DLC_MP_LTS_M_BERD_0_1"):
				case joaat("DLC_MP_LTS_M_BERD_0_2"):
				case joaat("DLC_MP_LTS_M_BERD_0_3"):
				case joaat("DLC_MP_LTS_M_BERD_0_4"):
				case joaat("DLC_MP_LTS_F_BERD_0_0"):
				case joaat("DLC_MP_LTS_F_BERD_0_1"):
				case joaat("DLC_MP_LTS_F_BERD_0_2"):
				case joaat("DLC_MP_LTS_F_BERD_0_3"):
				case joaat("DLC_MP_LTS_F_BERD_0_4"):
					return 1;
					break;
			}
			break;
		
		case joaat("CU_HAL_CLOTHES"):
			if ((!Global_262145.f_10771 && !func_450(iParam1, 1, 1, 1, -1)) && !unk_0x698ED51C7EF0C52D(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		
		case joaat("CU_HAL_MASKS"):
			if (!Global_262145.f_10763 && !func_450(iParam1, 1, 1, 1, -1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_453(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar1 = func_455(iParam0, iParam1);
	uVar2 = func_454(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xCADA079847403C94(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_454(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
	}
	return iVar0;
}

int func_455(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	return iVar0;
}

int func_456(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xB73F53C041C3C8E8(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_459(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0xF6A17D900553E83D(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0x88CB23B975DF1F74(iVar17, &Var0);
			if (!unk_0x03CF889BDA5553A9(Var0.f_0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x91227C3DBA3B761D(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_457(iParam0, func_458(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_70722.f_26[iParam2] && iParam1 == Global_70722[iParam2]) && Global_70722.f_13[iParam2] != 0)
		{
			return Global_70722.f_13[iParam2];
		}
		iVar41 = unk_0xF6A17D900553E83D(iParam3, 6, -1, 0, -1, func_458(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0x456AF95F7C897433(iVar38, &Var21);
			if (!unk_0x03CF889BDA5553A9(Var21.f_0))
			{
				if (iVar39 == iVar40)
				{
					Global_70722.f_13[iParam2] = Var21.f_1;
					Global_70722[iParam2] = iParam1;
					Global_70722.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_457(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_458(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_460(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_468(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_468(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_463(iParam0, iParam2);
			}
		}
		else
		{
			return func_461(iParam0, iParam1);
		}
	}
	return -99;
}

int func_461(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x8682D8A6269E52C9(iParam0))
	{
		return -99;
	}
	iVar0 = func_458(iParam1);
	iVar1 = unk_0x2BCDCFC2AA7EC715(iParam0, iVar0);
	iVar2 = unk_0xBE6AC2A79C0215BC(iParam0, iVar0);
	return func_462(iParam0, iVar1, iVar2, iParam1);
}

int func_462(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_458(iParam3);
	iVar1 = unk_0x5F422CF5F3E6B0BA(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0xDC84DA4DF0F0606C(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_463(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x8682D8A6269E52C9(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x6C5A6C5A6F492576(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_467(iParam1);
	}
	iVar1 = unk_0x04FAC202A4D72E17(iParam0, iParam1);
	return func_464(iParam0, iVar0, iVar1, iParam1);
}

int func_464(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_467(iParam3);
	}
	iVar0 = unk_0xE9559A12052415BE(iParam0);
	iVar1 = unk_0x5DBC221293B7BFC9(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_466(unk_0xE9559A12052415BE(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_466(unk_0xE9559A12052415BE(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xC0A0A334C0369983(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x465D08A946635D1A(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_465(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_467(iParam3);
}

int func_465(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xE9559A12052415BE(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_466(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xB73F53C041C3C8E8(&Var0);
		iVar18 = 0;
		iVar19 = unk_0xF6A17D900553E83D(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x88CB23B975DF1F74(iVar17, &Var0);
			if (!unk_0x03CF889BDA5553A9(Var0.f_0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_459(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x91227C3DBA3B761D(&Var20);
		iVar38 = 0;
		iVar39 = unk_0xF6A17D900553E83D(iParam3, 6, -1, 0, -1, func_458(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0x456AF95F7C897433(iVar37, &Var20);
			if (!unk_0x03CF889BDA5553A9(Var20.f_0))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_457(iParam0, func_458(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_468(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	struct<5> Var6;
	
	if (unk_0x8682D8A6269E52C9(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xE9559A12052415BE(iParam0);
	Global_70600[1 /*14*/] = { func_469(iVar0, iParam1, iParam2) };
	if (!unk_0x2A3398C6222EB190(Global_70600[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 14)
	{
		if (unk_0x6C5A6C5A6F492576(iParam0, Global_70600[1 /*14*/].f_12) == Global_70600[1 /*14*/].f_3 && (unk_0x04FAC202A4D72E17(iParam0, Global_70600[1 /*14*/].f_12) == Global_70600[1 /*14*/].f_4 || Global_70600[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_70600[1 /*14*/].f_12 == 0 && unk_0x2A3398C6222EB190(Global_70600[1 /*14*/].f_6, 6)) && unk_0x698ED51C7EF0C52D(Global_2621444, joaat("HELMET"), 1)) && unk_0xD23920F1D738F9C8(Global_2621444) > 0)
		{
			iVar5 = unk_0xD23920F1D738F9C8(Global_2621444);
			iVar1 = 0;
			while (iVar1 < iVar5)
			{
				unk_0xB98DF031B38A04B1(Global_2621444, iVar1, &iVar2, &uVar3, &uVar4);
				if (iVar2 != 0 && iVar2 != joaat("0"))
				{
					unk_0xB73F53C041C3C8E8(&Var6);
					unk_0x05C940F12A5EBB7A(iVar2, &Var6);
					if (Var6.f_3 == unk_0x6C5A6C5A6F492576(iParam0, Global_70600[1 /*14*/].f_12) && Var6.f_4 == unk_0x04FAC202A4D72E17(iParam0, Global_70600[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

struct<14> func_469(int iParam0, int iParam1, int iParam2)
{
	func_481();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_479(iParam1, iParam2);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_470(iParam1, iParam2);
	}
	return Global_70600[0 /*14*/];
}

void func_470(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
			func_471(iParam1);
			break;
	}
}

void func_471(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 970;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1125;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 740;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 805;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 2390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 2005;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 1490;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 1105;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2043[iVar12]) * Global_283502.f_26));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2164[iVar13]) * Global_283502.f_27));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2189[iVar14]) * Global_283502.f_56));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2318[iVar15]) * Global_283502.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_70600[0 /*14*/].f_5 = 4;
		func_478(iVar10, iParam0, 327);
		if (Global_70600[0 /*14*/].f_7 > 0)
		{
			if (unk_0x698ED51C7EF0C52D(Global_2621444, joaat("HAT"), 1))
			{
				Global_70600[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_70600[0 /*14*/].f_7) * Global_283502.f_26));
			}
			else if (unk_0x698ED51C7EF0C52D(Global_2621444, joaat("GLASSES"), 1))
			{
				Global_70600[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_70600[0 /*14*/].f_7) * Global_283502.f_56));
			}
			else if (unk_0x698ED51C7EF0C52D(Global_2621444, joaat("WATCH"), 1))
			{
				Global_70600[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_70600[0 /*14*/].f_7) * Global_283502.f_28));
			}
		}
	}
	else
	{
		func_472(&(Global_70600[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_472(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_477(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x50B7853132D8438E(sParam3) != unk_0x50B7853132D8438E("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 5);
		}
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 1);
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 2);
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 6);
		if (iParam1 == 1)
		{
			if (unk_0x698ED51C7EF0C52D(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_450(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xD804ACF2A7171150(&(uParam0->f_6), 2);
			}
			if (!func_450(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_450(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xD804ACF2A7171150(&(uParam0->f_6), 2);
			}
			if (!func_450(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_450(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xD804ACF2A7171150(&(uParam0->f_6), 2);
			}
			if (!func_450(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 0);
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 5);
		if (func_476(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 1);
		}
		if (func_476(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 2);
		}
		if (!func_476(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			uVar0 = func_101(func_475(iParam1, uParam0->f_2), Global_70597, 0);
			if (unk_0x2A3398C6222EB190(uVar0, uParam0->f_1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 1);
			}
			iVar0 = func_101(func_474(iParam1, uParam0->f_2), Global_70597, 0);
			if (unk_0x2A3398C6222EB190(iVar0, uParam0->f_1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 2);
			}
			if (func_473(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_101(iVar1, Global_70597, 0);
				if (!unk_0x2A3398C6222EB190(iVar0, uParam0->f_1))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 1);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 1);
			unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_6), 2);
		}
	}
}

bool func_473(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 975;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 976;
					break;
				
				case 3:
					*uParam2 = 1426;
					break;
				
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 9:
					*uParam2 = 1435;
					break;
				
				case 10:
					*uParam2 = 1437;
					break;
				
				case 1:
					*uParam2 = 1008;
					break;
				
				case 7:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
				
				case 12:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 977;
					break;
				
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 9:
					*uParam2 = 1436;
					break;
				
				case 7:
					*uParam2 = 1439;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 978;
					break;
				
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 7:
					*uParam2 = 1440;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	}
	return *uParam2 != 975;
}

int func_474(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 924;
					break;
				
				case 3:
					return 1411;
					break;
				
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 9:
					return 1420;
					break;
				
				case 10:
					return 1422;
					break;
				
				case 1:
					return 956;
					break;
				
				case 7:
					return 1423;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
				
				case 12:
					return 975;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 925;
					break;
				
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 9:
					return 1421;
					break;
				
				case 7:
					return 1424;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 926;
					break;
				
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 7:
					return 1425;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 972;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 973;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 974;
					break;
			}
			break;
	}
	return 932;
}

int func_475(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 872;
					break;
				
				case 3:
					return 1396;
					break;
				
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 9:
					return 1405;
					break;
				
				case 10:
					return 1407;
					break;
				
				case 1:
					return 904;
					break;
				
				case 7:
					return 1408;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
				
				case 12:
					return 923;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 873;
					break;
				
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 9:
					return 1406;
					break;
				
				case 7:
					return 1409;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 874;
					break;
				
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 7:
					return 1410;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 920;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 921;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 922;
					break;
			}
			break;
	}
	return 880;
}

int func_476(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_2244[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD804ACF2A7171150(&(Global_104439.f_2244[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x2A3398C6222EB190(Global_104439.f_2244[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_477(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_478(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_70600[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0xE172C3B8EA185D8A(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x2586D37F07416B1E(iVar17, &Var2);
			if (!unk_0x03CF889BDA5553A9(Var2.f_0))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2.f_0;
					func_472(&(Global_70600[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_472(&(Global_70600[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0xB73F53C041C3C8E8(&Var20);
		iVar39 = 0;
		iVar40 = unk_0xF6A17D900553E83D(uVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0x88CB23B975DF1F74(iVar38, &Var20);
			if (!unk_0x03CF889BDA5553A9(Var20.f_0))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20.f_0;
					func_472(&(Global_70600[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0x698ED51C7EF0C52D(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0x91227C3DBA3B761D(&Var41);
		iVar59 = 0;
		iVar60 = unk_0xF6A17D900553E83D(iVar1, 6, -1, 0, -1, func_458(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0x456AF95F7C897433(iVar58, &Var41);
			if (!unk_0x03CF889BDA5553A9(Var41.f_0))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41.f_0;
					func_472(&(Global_70600[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x698ED51C7EF0C52D(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_479(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 14:
			func_480(iParam1);
			break;
	}
}

void func_480(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 380;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 950;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 630;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 265;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 675;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 4050;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 4060;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 1760;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 1375;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 1440;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 1445;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 530;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 785;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 850;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 4260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 4310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 4130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1885;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 1500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 1565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 4290;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 4150;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 4295;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 6240;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 4955;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 5590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4920;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 4990;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 4780;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 4775;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 4800;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 385;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 3655;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 4055;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 3595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 3605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 3645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 2230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 1690;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 2715;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 2395;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 485;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 695;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_954[iVar12]) * Global_283502.f_18));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1075[iVar13]) * Global_283502.f_19));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1100[iVar14]) * Global_283502.f_20));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 15)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1229[iVar15]) * Global_283502.f_21));
		}
	}
	if (iParam0 >= 327)
	{
		Global_70600[0 /*14*/].f_5 = 3;
		func_478(iVar10, iParam0, 327);
		if (Global_70600[0 /*14*/].f_7 > 0)
		{
			if (unk_0x698ED51C7EF0C52D(Global_2621444, joaat("HAT"), 1))
			{
				Global_70600[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_70600[0 /*14*/].f_7) * Global_283502.f_18));
			}
			else if (unk_0x698ED51C7EF0C52D(Global_2621444, joaat("GLASSES"), 1))
			{
				Global_70600[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_70600[0 /*14*/].f_7) * Global_283502.f_20));
			}
			else if (unk_0x698ED51C7EF0C52D(Global_2621444, joaat("WATCH"), 1))
			{
				Global_70600[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_70600[0 /*14*/].f_7) * Global_283502.f_21));
			}
		}
	}
	else
	{
		func_472(&(Global_70600[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_481()
{
	Global_70600[0 /*14*/].f_1 = -1;
	Global_70600[0 /*14*/].f_2 = -1;
	Global_70600[0 /*14*/].f_5 = -1;
	Global_70600[0 /*14*/].f_3 = -1;
	Global_70600[0 /*14*/].f_4 = -1;
	Global_70600[0 /*14*/].f_7 = 0;
	Global_70600[0 /*14*/].f_6 = 0;
	Global_70600[0 /*14*/].f_13 = -1;
	Global_70600[0 /*14*/].f_12 = 0;
	Global_70600[0 /*14*/] = 0;
	StringCopy(&(Global_70600[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_482()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_189;
}

int func_483()
{
	if (Global_1641087 == 2)
	{
		if ((unk_0x2A3398C6222EB190(Global_1641087.f_13, 7) || Global_1641087.f_46375 == 6) || Global_1641087.f_46375 == 7)
		{
			return 1;
		}
	}
	return 0;
}

var func_484()
{
	return Global_2445582.f_573;
}

var func_485()
{
	return Global_2445582.f_572;
}

void func_486()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3[4];
	
	if ((func_151(unk_0x3D35F9864E4640B1()) && Global_1592923 != func_6()) && func_487(Global_1592923))
	{
		iVar0 = unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &uVar3);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (unk_0x76B3C79DE564AFC6(uVar3[iVar1]))
			{
				if (unk_0x496D18970B708258("Player_Vehicle", 3))
				{
					if (unk_0x8B0523D9EF9595C2(uVar3[iVar1], "Player_Vehicle"))
					{
						if (unk_0xBB43B50327B1A590(uVar3[iVar1], 1097.535f, -3016.011f, -40.7658f, 1109.298f, -2983.69f, -34.1882f, 0, 1, 0))
						{
							if (!unk_0xB3404E397FF56B3B(unk_0x82C5E5956536E83D(uVar3[iVar1], &uVar2), "am_mp_armory_truck"))
							{
								unk_0xC9621A9AD282CC14(0, 23, 1);
								return;
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

int func_487(int iParam0)
{
	if (iParam0 != func_6())
	{
		if ((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 12) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 13)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 14))
		{
			return 1;
		}
	}
	return 0;
}

void func_488()
{
	var uVar0;
	var uVar1[1];
	int iVar3;
	
	if (Global_1788565)
	{
		if (func_487(unk_0x3D35F9864E4640B1()))
		{
			if (!iLocal_59)
			{
				if (unk_0x7832F791572D5809(joaat("am_mp_smpl_interior_int")) > 0)
				{
					if (Global_1780822 != 7)
					{
						func_320(1);
						iLocal_59 = 1;
					}
				}
			}
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				if (func_494(unk_0x0031992CA618A445(), 0) == -1)
				{
					if (((!iLocal_59 && func_151(unk_0x3D35F9864E4640B1())) && unk_0x2A116936C6E6EBEC(unk_0x0031992CA618A445()) == joaat("GtaMloRoom001")) && unk_0x7832F791572D5809(joaat("am_mp_smpl_interior_int")) > 0)
					{
						if (!unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 25))
						{
							func_320(1);
							unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
							iLocal_59 = 1;
						}
					}
				}
			}
			if (Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_4 == unk_0x3D35F9864E4640B1())
			{
				iLocal_97 = 1;
			}
		}
	}
	else if (iLocal_59)
	{
		if (unk_0xF9FC07CC13402AEF() && !unk_0x0CF4609684193305())
		{
			if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 25))
			{
				func_320(0);
			}
			if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				if (func_185() != -1)
				{
					if (Global_2097152[func_185() /*11035*/].f_7550.f_2 != -1 && Global_2434915.f_502.f_30)
					{
						func_294(1, 0, 1, 0, 0, 0, 0);
					}
				}
			}
			iLocal_59 = 0;
		}
	}
	if (func_5(unk_0x3D35F9864E4640B1(), 1, 1))
	{
		if (iLocal_59)
		{
			if (unk_0x2A116936C6E6EBEC(unk_0x0031992CA618A445()) != joaat("GtaMloRoom001"))
			{
				if (unk_0xF9FC07CC13402AEF())
				{
					func_320(0);
					if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						if (func_185() != -1)
						{
							if (Global_2097152[func_185() /*11035*/].f_7550.f_2 != -1 && Global_2434915.f_502.f_30)
							{
								func_294(1, 0, 1, 0, 0, 0, 0);
							}
						}
					}
					iLocal_59 = 0;
				}
			}
		}
	}
	if (iLocal_97)
	{
		if ((!func_34() || func_277()) || func_272())
		{
			iLocal_97 = 0;
			iLocal_98 = 0;
			func_294(1, 0, 1, 0, 0, 0, 0);
		}
		if (!iLocal_98)
		{
			if (func_493())
			{
				iLocal_98 = 1;
			}
		}
		else
		{
			if (!func_493())
			{
				if (unk_0xF9FC07CC13402AEF())
				{
					if (func_279(unk_0x0031992CA618A445()) && !unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						func_294(1, 0, 1, 0, 0, 0, 0);
					}
					iLocal_97 = 0;
					iLocal_98 = 0;
				}
			}
			if (func_161(unk_0x3D35F9864E4640B1()) != 81)
			{
				iLocal_97 = 0;
				iLocal_98 = 0;
			}
		}
	}
	if (func_279(unk_0x0031992CA618A445()))
	{
		if ((func_288(unk_0x3D35F9864E4640B1()) && func_161(unk_0x3D35F9864E4640B1()) == 81) && func_492())
		{
			if (Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_4 == unk_0x3D35F9864E4640B1())
			{
				if (func_489())
				{
					unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &uVar1);
					if (unk_0x76B3C79DE564AFC6(uVar1[0]) && unk_0x036E1D5EA494CEB2(uVar1[0]))
					{
						if (unk_0x8B0523D9EF9595C2(uVar1[0], "Player_Vehicle") && unk_0x9E69E04AC6AD5C49(uVar1[0], "Player_Vehicle") == unk_0x09A791318A38B63D(unk_0x3D35F9864E4640B1()))
						{
							if (unk_0xB3404E397FF56B3B(unk_0x82C5E5956536E83D(uVar1[0], &uVar0), "freemode"))
							{
								if (!func_193(uVar1[0]))
								{
									if (unk_0x3B077EBCBD1ABF1F(uVar1[0]))
									{
										unk_0x1581691D748490F3(uVar1[0], 1, 1);
										unk_0xE9F8539D5AF6B052(&(uVar1[0]));
										iLocal_99 = 0;
									}
									else
									{
										iLocal_99 = 1;
										unk_0xDE78E0A451F0CC44(uVar1[0]);
									}
								}
							}
						}
					}
				}
			}
		}
		else if (iLocal_99)
		{
			if (func_151(unk_0x3D35F9864E4640B1()) && func_489())
			{
				if (func_492())
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						iVar3 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
						if (func_279(iVar3))
						{
							if (((unk_0x8B0523D9EF9595C2(iVar3, "Player_Vehicle") && unk_0x9E69E04AC6AD5C49(iVar3, "Player_Vehicle") == unk_0x09A791318A38B63D(unk_0x3D35F9864E4640B1())) && unk_0xB3404E397FF56B3B(unk_0x82C5E5956536E83D(iVar3, &uVar0), "freemode")) && !func_193(iVar3))
							{
								if (unk_0x3251C2B06497863C(iVar3, -1, 0) == unk_0x0031992CA618A445())
								{
									unk_0x1581691D748490F3(iVar3, 1, 1);
									unk_0xE9F8539D5AF6B052(&iVar3);
								}
								else
								{
									return;
								}
							}
							iLocal_99 = 0;
						}
					}
				}
			}
			else
			{
				iLocal_99 = 0;
			}
		}
	}
}

int func_489()
{
	int iVar0;
	
	if (func_491(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	else
	{
		iVar0 = func_490(2, unk_0x3D35F9864E4640B1());
		if ((((iVar0 == 5 || iVar0 == 6) || iVar0 == 0) || iVar0 == 4) || iVar0 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_490(int iParam0, int iParam1)
{
	if (iParam1 == func_6())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 0))
			{
				return 3;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 3))
			{
				return 2;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 6))
			{
				return 4;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 9))
			{
				return 1;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 12))
			{
				return 7;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 15))
			{
				return 5;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 18))
			{
				return 6;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 21))
			{
				return 0;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 1))
			{
				return 3;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 4))
			{
				return 2;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 7))
			{
				return 4;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 10))
			{
				return 1;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 13))
			{
				return 7;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 16))
			{
				return 5;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 19))
			{
				return 6;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 22))
			{
				return 0;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 2))
			{
				return 3;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 5))
			{
				return 2;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 8))
			{
				return 4;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 11))
			{
				return 1;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 14))
			{
				return 7;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 17))
			{
				return 5;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 20))
			{
				return 6;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 23))
			{
				return 0;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_491(int iParam0)
{
	if (iParam0 != func_6())
	{
		if ((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 0) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 1)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_492()
{
	if ((unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 1103.532f, -3005.913f, -40.2376f, 1103.578f, -2990.15f, -36.389f, 8.4375f, 0, 1, 0) || unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 1103.6f, -2990.124f, -39.88574f, 1103.584f, -2997.96f, -37.04425f, 4.0625f, 0, 1, 0)) || unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 1103.598f, -3005.774f, -39.99834f, 1103.54f, -2990.237f, -37.06084f, 4.0625f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_493()
{
	if (Global_1780828.f_22 && !Global_1780828.f_23)
	{
		return 1;
	}
	return 0;
}

int func_494(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (unk_0x90219307C9D2728D(iParam0, iParam1))
		{
			uVar0 = unk_0xCFA31F1E461A6BB5(iParam0, iParam1);
			if (unk_0x76B3C79DE564AFC6(uVar0))
			{
				iVar1 = unk_0x09139F011D2AE2D0(unk_0xE9559A12052415BE(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x00E962E9D49FD6C4(iVar0, iVar3, 0))
					{
						if (unk_0x3251C2B06497863C(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_495()
{
	if (Global_1592923 != func_6())
	{
		if (unk_0x3D35F9864E4640B1() == Global_1592923)
		{
			if (func_324(unk_0x3D35F9864E4640B1()))
			{
				if ((((func_500(unk_0x3D35F9864E4640B1()) || func_340(unk_0x3D35F9864E4640B1())) || func_338()) || func_38()) || Global_1788565)
				{
					func_496(1);
				}
			}
		}
	}
}

void func_496(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_41(0))
		{
			func_497(iParam0);
		}
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 2);
	}
}

void func_497(int iParam0)
{
	if (Global_14604)
	{
		func_499(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 16);
	}
	if (unk_0xCAD6D8C85D0F329B())
	{
		unk_0x683F0CB6CA4C99D0(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 30);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 30);
	}
	if (!func_498())
	{
		Global_14443.f_1 = 3;
	}
}

int func_498()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_499(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_41(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EBACDA5E9A0E784(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x99C19CAA37B6F6D3(Global_14380);
		}
		else
		{
			unk_0x99C19CAA37B6F6D3(Global_14371);
		}
	}
}

int func_500(int iParam0)
{
	if (iParam0 != func_6())
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_318, 7);
	}
	return 0;
}

void func_501()
{
	int iVar0;
	
	if (iLocal_96)
	{
		if (!Global_1312853 && func_5(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			if (func_3(&(Global_2489001.f_26)))
			{
				func_40(&(Global_2489001.f_26), 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (func_3(&(Global_2489001[iVar0 /*2*/])))
				{
					func_40(&(Global_2489001[iVar0 /*2*/]), 0, 0);
				}
				iVar0++;
			}
			iLocal_96 = 0;
		}
	}
	else if (Global_1312853 && Global_25223 == 0)
	{
		iLocal_96 = 1;
	}
}

void func_502()
{
	if (func_306(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0xD887E21676314450(2, 51))
		{
			iLocal_91 = 1;
			Global_1788565 = 0;
			func_37(&uLocal_93, 0, 0);
		}
		if (iLocal_91)
		{
			Global_1788565 = 0;
			if (func_36(&uLocal_93, 1000, 0))
			{
				iLocal_91 = 0;
				func_2(&uLocal_93);
			}
		}
		if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_204, 9))
		{
			iLocal_92 = 1;
			Global_1788565 = 0;
		}
		else if (iLocal_92)
		{
			iLocal_92 = 0;
		}
	}
}

void func_503()
{
	if (func_504())
	{
		unk_0xC9621A9AD282CC14(2, 51, 1);
		iLocal_90 = 1;
	}
	else if (iLocal_90)
	{
		iLocal_90 = 0;
		unk_0x14C5CBCF9E6EB7B5(2, 51, 1);
	}
}

int func_504()
{
	if ((((!func_279(unk_0x0031992CA618A445()) || !func_5(unk_0x3D35F9864E4640B1(), 1, 1)) || func_41(0)) || Global_68165) || unk_0xEC1794D6178F34A3(1, 0) < 50)
	{
		return 0;
	}
	if (func_169(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_16, 91))
	{
		if ((((unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), 1122.809f, -3144.566f, -38.0628f, 1f, 1f, 2f, 0, 1, 0) || unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), 1117.096f, -3153.258f, -38.0628f, 1.5f, 1.5f, 2f, 0, 1, 0)) || unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), 1115.983f, -3153.241f, -38.0628f, 1.5f, 1.5f, 2f, 0, 1, 0)) || unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), 1118.926f, -3157.069f, -38.0628f, 1.25f, 1.25f, 2f, 0, 1, 0)) || unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 1124.354f, -3146.942f, -38.06275f, 1124.297f, -3142.433f, -36.08583f, 2.3125f, 0, 1, 0))
		{
			return 1;
		}
	}
	else if (func_169(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_16, 97))
	{
		if ((((unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), 998.3519f, -3168.562f, -35.0467f, 1f, 1f, 2f, 0, 1, 0) || unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), 1003.154f, -3166.269f, -35.0725f, 1f, 1f, 2f, 0, 1, 0)) || unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), 1003.248f, -3165.182f, -35.0725f, 1f, 1f, 2f, 0, 1, 0)) || unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), 1000.822f, -3163.997f, -35.0725f, 1.25f, 1.25f, 2f, 0, 1, 0)) || unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), 1007.506f, -3164.634f, -35.05763f, 1007.464f, -3168.688f, -33.25998f, 3.8125f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_505()
{
	if (func_288(unk_0x3D35F9864E4640B1()) && func_17(func_161(unk_0x3D35F9864E4640B1())) == 4)
	{
		if (unk_0x5114FCEE2A997B95() || unk_0x229840854A80E0D9())
		{
			if (func_277() || func_506())
			{
				if (!iLocal_89)
				{
					iLocal_89 = 1;
					Global_1780828.f_27 = 1;
					if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
					{
						if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
						{
							unk_0x471E558A661279DE(unk_0x0031992CA618A445(), 0, 16);
						}
					}
				}
			}
		}
	}
	else if (iLocal_89)
	{
		iLocal_89 = 0;
	}
}

var func_506()
{
	return Global_1312738;
}

void func_507()
{
	if (func_120())
	{
		if (func_141(unk_0x3D35F9864E4640B1()) == 229)
		{
			if (iLocal_86 == -1)
			{
				if (Global_2501777.f_5834 != -1)
				{
					iLocal_86 = Global_2501777.f_5834;
				}
			}
		}
		else if (iLocal_86 != -1)
		{
			if (!func_34())
			{
				iLocal_86 = -1;
				return;
			}
			if (func_5(unk_0x3D35F9864E4640B1(), 0, 1))
			{
				func_508();
				iLocal_86 = -1;
			}
		}
	}
}

void func_508()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_101(6080, -1, 0);
	iVar1 = func_530();
	if (iVar1 > iVar0)
	{
	}
	else if (iVar1 < iVar0)
	{
		iVar2 = iLocal_86;
		iVar3 = (iVar0 - iVar1);
		iVar4 = func_529(iVar2);
		if (iVar2 == -1 || iVar2 == 8)
		{
			iVar2 = unk_0x3AF262D7332EEDF5(0, 8);
		}
		iVar5 = 0;
		while (iVar5 < iVar3)
		{
			func_514(iVar4);
			iVar5++;
		}
		func_509();
	}
	Global_2455047 = 1;
}

void func_509()
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	if (func_511(unk_0x3D35F9864E4640B1()))
	{
		uVar1 = Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_2;
		if (unk_0x87D05145F203EF5E("AM_MP_HANGAR", uVar1, 0) == unk_0x3D35F9864E4640B1())
		{
			Global_1789429 = 1;
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar2 = 0;
		while (iVar2 < unk_0x32C41AA379415932())
		{
			if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar2)))
			{
				iVar3 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar2));
				if (func_5(iVar3, 1, 1))
				{
					if (func_511(iVar3))
					{
						uVar4 = Global_2422142[iVar3 /*399*/].f_318.f_2;
						if (unk_0x87D05145F203EF5E("AM_MP_HANGAR", uVar4, 0) == iVar3)
						{
							func_510(iVar3, &Global_1789378);
						}
					}
				}
			}
			iVar2++;
		}
		bVar0 = false;
	}
}

void func_510(int iParam0, var uParam1)
{
	struct<3> Var0;
	int iVar53;
	
	Var0.f_2 = 50;
	Var0.f_0 = 2039062468;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	iVar53 = 0;
	while (iVar53 < *uParam1)
	{
		Var0.f_2[iVar53] = (*uParam1)[iVar53];
		iVar53++;
	}
	unk_0xBD257D33BCFA529A(1, &Var0, 53, func_80(iParam0));
}

int func_511(int iParam0)
{
	if (func_512())
	{
		if (iParam0 != func_6())
		{
			if (func_306(iParam0))
			{
				return Global_2422142[iParam0 /*399*/].f_318.f_4 == unk_0x3D35F9864E4640B1();
			}
		}
	}
	return 0;
}

bool func_512()
{
	return func_513() != 0;
}

int func_513()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_235;
}

void func_514(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = func_528();
	if (func_527(iVar0))
	{
		uVar1 = func_526(iParam0);
		iVar2 = func_517(uVar1, iVar0);
		func_181(func_516(iVar0), func_515(iVar2), -1, 1);
		Global_1789378[iVar0] = func_515(iVar2);
	}
}

int func_515(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 2;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 8;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 9;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 10;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 11;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 12;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 13;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 14;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 15;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 16;
		
		default:
	}
	return 0;
}

int func_516(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

int func_517(var uParam0, int iParam1)
{
	struct<2> Var0;
	var uVar2;
	
	if (iParam1 > 0)
	{
		func_525(&Var0, uParam0);
		func_521(&uVar2, iParam1);
		if (func_519(&Var0, &uVar2, iParam1))
		{
			return func_518(Var0);
		}
	}
	else if (iParam1 == 0)
	{
		func_525(&Var0, uParam0);
		return func_518(Var0);
	}
	return 0;
}

int func_518(struct<2> Param0)
{
	switch (Param0.f_0)
	{
		case 5:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_medical");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_medical");
					break;
			}
			break;
		
		case 7:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_tobacco");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_tobacco");
					break;
			}
			break;
		
		case 1:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_antiques");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_antiques");
					break;
			}
			break;
		
		case 6:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_narc");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_narc");
					break;
			}
			break;
		
		case 4:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_jewellery");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_jewellery");
					break;
			}
			break;
		
		case 0:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_bones");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_bones");
					break;
			}
			break;
		
		case 3:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_fake");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_fake");
					break;
			}
			break;
		
		case 2:
			switch (Param0.f_1)
			{
				case 1:
					return joaat("sm_prop_smug_crate_l_hazard");
					break;
				
				case 0:
					return joaat("sm_prop_smug_crate_m_hazard");
					break;
			}
			break;
	}
	return 0;
}

int func_519(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 != *uParam1)
	{
		return 1;
	}
	else if (uParam0->f_1 == uParam1->f_1)
	{
		iVar0 = func_520(uParam0, iParam2);
		if (iVar0 <= 2)
		{
			return 1;
		}
		else
		{
			iVar1 = 0;
			while (uParam0->f_1 == uParam1->f_1 && iVar1 < 10)
			{
				func_525(uParam0, *uParam0);
				iVar1++;
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_520(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar1 = 0;
	iVar0 = iParam1;
	while (iVar0 >= (iParam1 - 2))
	{
		if (iVar0 >= 0)
		{
			func_521(&Var2, iParam1);
			if (*uParam0 == Var2.f_0 && uParam0->f_1 == Var2.f_1)
			{
				iVar1++;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	return iVar1;
}

void func_521(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_524(Global_1789378[iParam1]);
	*uParam0 = func_523(iVar0);
	uParam0->f_1 = func_522(iVar0);
}

int func_522(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 0;
		
		default:
	}
	return 0;
}

int func_523(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_524(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

void func_525(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = unk_0x3AF262D7332EEDF5(0, 2);
	*uParam0 = uParam1;
	uParam0->f_1 = iVar0;
}

int func_526(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 0;
		
		case 6:
			return 1;
		
		case 7:
			return 2;
		
		case 8:
			return 3;
		
		case 9:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		default:
	}
	return -1;
}

bool func_527(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

int func_528()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (Global_1789378[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_529(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		case 3:
			return 8;
		
		case 4:
			return 9;
		
		case 5:
			return 10;
		
		case 6:
			return 11;
		
		case 7:
			return 12;
		
		default:
	}
	return 0;
}

int func_530()
{
	int iVar0;
	int iVar1;
	
	if (!func_512())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (func_531(func_516(iVar0), -1, -1) != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_531(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar0 = 0;
	iVar1 = func_533(iParam0, iParam1);
	uVar2 = func_532(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8105A63E77701FA4(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_532(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	return iVar0;
}

int func_533(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	return iVar0;
}

void func_534()
{
	if (iLocal_32)
	{
		if (!func_3(&uLocal_87))
		{
			func_37(&uLocal_87, 0, 0);
		}
		else if (func_36(&uLocal_87, 5000, 0))
		{
			func_535(1, func_536(iLocal_33));
			func_2(&uLocal_87);
			iLocal_32 = 0;
			iLocal_33 = 0;
		}
	}
}

void func_535(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	iVar1 = 0;
	iVar0 = 49;
	while (iVar0 >= 0)
	{
		iVar2 = func_524(func_531(func_516(iVar0), -1, -1));
		if (func_523(iVar2) == iParam1 || (iParam1 == 8 && iVar2 != 0))
		{
			func_181(func_516(iVar0), 0, -1, 1);
			Global_1789378[iVar0] = 0;
			iVar1++;
		}
		if (iVar1 == iParam0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	Global_2455047 = 1;
}

int func_536(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 0;
		
		case 6:
			return 1;
		
		case 7:
			return 2;
		
		case 8:
			return 3;
		
		case 9:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		default:
	}
	return -1;
}

void func_537()
{
	int iVar0;
	
	if (func_306(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xEE37D610E00A6E4E(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), joaat("swift")) || unk_0xEE37D610E00A6E4E(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), joaat("swift2")))
			{
				if (func_539(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)))
				{
					func_538(67, 1);
					iLocal_85 = 1;
				}
			}
			else if (iLocal_85)
			{
				iVar0 = 0;
				while (iVar0 < Global_94290)
				{
					Global_94290[iVar0] = 0;
					iVar0++;
				}
				iLocal_85 = 0;
			}
		}
	}
}

void func_538(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_94290[(iParam0 / 32)]), (iParam0 % 32));
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_94290[(iParam0 / 32)]), (iParam0 % 32));
	}
}

int func_539(int iParam0)
{
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		if (unk_0xE9559A12052415BE(iParam0) == joaat("bati2") || unk_0xE9559A12052415BE(iParam0) == joaat("sanchez"))
		{
			return 1;
		}
		if (unk_0xD546CB3F87365B85(iParam0) > 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_540()
{
	int iVar0;
	
	if (func_306(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
			if (unk_0x76B3C79DE564AFC6(iVar0))
			{
				if (func_541(unk_0xE9559A12052415BE(iVar0)))
				{
					Global_2501777.f_4857 = 1;
					iLocal_84 = 1;
				}
			}
		}
		else if (iLocal_84 && !unk_0x2A3398C6222EB190(Global_92814.f_1315[45], 6))
		{
			Global_2501777.f_4857 = 0;
			iLocal_84 = 0;
		}
	}
}

int func_541(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("lazer"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("swift"):
			return 1;
		
		default:
	}
	return 0;
}

void func_542()
{
	if (unk_0x2A3398C6222EB190(Global_1780828.f_2, 6))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
		{
			unk_0x3000ECF14A659126(unk_0x0031992CA618A445());
		}
	}
	if (unk_0x76B3C79DE564AFC6(func_315()) && !unk_0x7A6C051038031EFA(func_315(), 0))
	{
		if (func_546())
		{
			bLocal_78 = true;
			Global_2488784 = 1;
		}
		else if (bLocal_78)
		{
			bLocal_78 = false;
			Global_2488784 = 0;
		}
	}
	if ((func_305() && !unk_0xB3404E397FF56B3B(&(Global_17290.f_1), "ARMORY_TITLE")) || func_545(unk_0x0031992CA618A445(), 1))
	{
		Global_2488784 = 1;
		func_40(&uLocal_79, 1, 0);
		if (iLocal_83 == 0)
		{
			iLocal_83 = unk_0x3AF262D7332EEDF5(1000, 1750);
		}
		if (func_308())
		{
			unk_0xC9621A9AD282CC14(0, 23, 1);
		}
	}
	else if ((func_3(&uLocal_79) && !func_36(&uLocal_79, iLocal_83, 1)) || func_544())
	{
		if (func_308())
		{
			unk_0xC9621A9AD282CC14(0, 23, 1);
		}
	}
	else
	{
		func_2(&uLocal_79);
		iLocal_83 = 0;
	}
	if (func_356())
	{
		func_40(&uLocal_81, 1, 0);
		Global_2488784 = 1;
	}
	if ((func_308() || func_543(10f)) && func_544())
	{
		unk_0xC9621A9AD282CC14(0, 23, 1);
		if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0) && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
		{
			unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
		}
	}
	if ((func_545(unk_0x0031992CA618A445(), 1) || (func_3(&uLocal_79) && !func_36(&uLocal_79, 500, 1))) || (func_3(&uLocal_81) && !func_36(&uLocal_81, 2000, 1)))
	{
		if (func_308())
		{
			unk_0xC9621A9AD282CC14(0, 23, 1);
		}
		iLocal_77 = 1;
		Global_2488784 = 1;
	}
	else if (iLocal_77 && !bLocal_78)
	{
		iLocal_77 = 0;
		Global_2488784 = 0;
	}
}

int func_543(float fParam0)
{
	struct<3> Var0;
	
	if (unk_0x76B3C79DE564AFC6(func_315()) && !unk_0x7A6C051038031EFA(func_315(), 0))
	{
		if (unk_0xE9559A12052415BE(func_315()) == joaat("trailerlarge"))
		{
			Var0 = { unk_0xCD59EF1D7098A4B4(func_315(), 0f, -8.9f, -2f) };
			if (unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Var0, 1) <= fParam0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_544()
{
	if (func_152())
	{
		return Global_1780828.f_23 == 1;
	}
	return 0;
}

int func_545(int iParam0, int iParam1)
{
	if (iParam1 && (!unk_0x76B3C79DE564AFC6(iParam0) || unk_0x7A6C051038031EFA(iParam0, 0)))
	{
		return 0;
	}
	if (unk_0xB37AB4AC3AD45AD8(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x6517762DDFC7E0E9(iParam0) != 0 || unk_0x882388E2A8356C6F(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_546()
{
	int iVar0;
	var uVar1[25];
	int iVar27;
	struct<3> Var28;
	
	if (unk_0x76B3C79DE564AFC6(func_315()) && !unk_0x7A6C051038031EFA(func_315(), 0))
	{
		func_345(81, &Var28);
		if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			iVar27 = unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &uVar1);
			iVar0 = 0;
			while (iVar0 < iVar27)
			{
				if (unk_0x76B3C79DE564AFC6(uVar1[iVar0]) && unk_0x036E1D5EA494CEB2(uVar1[iVar0]))
				{
					if (!unk_0x7A6C051038031EFA(uVar1[iVar0], 0) && !func_198(uVar1[iVar0], 1))
					{
						if (func_344(uVar1[iVar0], Var28, 1) < 6.5f)
						{
							return 1;
						}
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

void func_547()
{
	if ((((func_5(unk_0x3D35F9864E4640B1(), 1, 1) && func_279(unk_0x0031992CA618A445())) && func_555()) && func_553(func_121())) && func_548())
	{
		if (!iLocal_74)
		{
			iLocal_74 = 1;
			Global_1784339.f_4198 = 386;
		}
	}
	else if (iLocal_74)
	{
		iLocal_74 = 0;
		Global_1784339.f_4198 = -1;
	}
}

int func_548()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!func_552(1))
	{
		return 0;
	}
	iVar1 = func_121();
	if (iVar1 == func_6())
	{
		return 0;
	}
	iVar2 = func_227(iVar1);
	if (iVar2 == 0 || iVar2 == 32)
	{
		return 0;
	}
	iVar3 = func_550(iVar2);
	if (iVar3 == -1)
	{
		return 0;
	}
	iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 1);
	Var4 = { Global_1780828.f_301[iVar3 /*3*/] };
	Var7 = { unk_0xF177E0DA126D71C8(iVar0, 1) };
	if (func_549(Var7, Var4) > 75f)
	{
		return 0;
	}
	return 1;
}

float func_549(struct<3> Param0, struct<3> Param3)
{
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	return unk_0x2A488C176D52CCA5(Param0, Param3);
}

int func_550(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (func_551(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_551(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
		
		case 71:
			return 22;
		
		case 72:
			return 23;
		
		case 73:
			return 24;
		
		case 74:
			return 25;
		
		case 75:
			return 26;
		
		case 76:
			return 27;
		
		case 77:
			return 28;
		
		case 78:
			return 29;
		
		case joaat("mpsv_lp0_31"):
			return 30;
		
		case 80:
			return 31;
	}
	return 0;
}

bool func_552(bool bParam0)
{
	return func_64(unk_0x3D35F9864E4640B1(), bParam0);
}

int func_553(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
	{
		iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 1);
		if (((func_279(iVar0) && func_9(iVar0, 1)) && func_148(iVar0) == iParam0) && func_554(unk_0xE9559A12052415BE(iVar0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
			return 1;
		
		default:
	}
	return 0;
}

int func_555()
{
	if (func_141(unk_0x3D35F9864E4640B1()) == 225 || func_141(unk_0x3D35F9864E4640B1()) == 227)
	{
		return 1;
	}
	return 0;
}

void func_556()
{
	if (func_17(Global_1780828.f_2509) == 7 || func_306(unk_0x3D35F9864E4640B1()))
	{
		if (iLocal_72 == -1)
		{
			iLocal_72 = Global_262145.f_20247;
			fLocal_73 = Global_262145.f_17691;
			Global_262145.f_20247 = 10000000;
			Global_262145.f_17691 = 1E+07f;
		}
	}
	else if (iLocal_72 != -1)
	{
		Global_262145.f_20247 = iLocal_72;
		Global_262145.f_17691 = fLocal_73;
		iLocal_72 = -1;
		fLocal_73 = -1f;
	}
}

void func_557()
{
	if (!iLocal_71)
	{
		if (func_559(unk_0x3D35F9864E4640B1()) || func_558())
		{
			Global_1789441 = 1;
			iLocal_71 = 1;
		}
	}
	else if (!func_559(unk_0x3D35F9864E4640B1()) && !func_558())
	{
		Global_1789441 = 0;
		iLocal_71 = 0;
	}
}

int func_558()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
		if (func_494(unk_0x0031992CA618A445(), 0) != -1)
		{
			iVar1 = unk_0x3251C2B06497863C(iVar0, -1, 0);
			if (unk_0x76B3C79DE564AFC6(iVar1) && !unk_0x8682D8A6269E52C9(iVar1))
			{
				iVar2 = unk_0x46E9A8D99AF6D7BC(iVar1);
				if (func_5(iVar2, 1, 1) && func_559(iVar2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_559(int iParam0)
{
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		return func_562();
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_241.f_136[func_561(10) /*33*/][iParam0], func_560(10));
}

int func_560(int iParam0)
{
	return (iParam0 % 32);
}

int func_561(int iParam0)
{
	return (iParam0 / 32);
}

var func_562()
{
	return Global_1312416;
}

void func_563()
{
	bool bVar0;
	var uVar1[2];
	int iVar4;
	
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
	{
		iLocal_68 = 0;
	}
	else
	{
		bVar0 = true;
	}
	if (func_151(unk_0x3D35F9864E4640B1()))
	{
		if (func_487(unk_0x3D35F9864E4640B1()))
		{
			if (func_305())
			{
				func_40(&uLocal_69, 1, 0);
			}
			if (func_3(&uLocal_69) && !func_36(&uLocal_69, 750, 1))
			{
				unk_0xC9621A9AD282CC14(0, 23, 1);
			}
			if ((((((Global_68165 || func_41(0)) || unk_0x4E5CFAAEE4D157CF()) || func_304()) || func_564()) || func_272()) || unk_0x992C76EADFD95349())
			{
				if ((!Global_1788565 && !func_152()) && !func_500(Global_1592923))
				{
					if (bVar0)
					{
						iLocal_68 = 1;
					}
					unk_0xC9621A9AD282CC14(0, 23, 1);
				}
				else if (bVar0 && (Global_68165 || func_41(0)))
				{
					func_236();
					func_496(1);
				}
			}
			iLocal_67 = 1;
			unk_0x37F64122D082DAF5(unk_0x0031992CA618A445(), &uVar1);
			if (((unk_0x76B3C79DE564AFC6(uVar1[0]) && unk_0x036E1D5EA494CEB2(uVar1[0])) && unk_0x76B3C79DE564AFC6(uVar1[1])) && unk_0x036E1D5EA494CEB2(uVar1[1]))
			{
				if (unk_0xB3404E397FF56B3B(unk_0xCF9C6545E179C4AD(uVar1[1]), unk_0xCF9C6545E179C4AD(uVar1[0])))
				{
					unk_0xC9621A9AD282CC14(0, 23, 1);
				}
			}
		}
	}
	else if (!iLocal_66 && !func_3(&(Global_2434915.f_502.f_27)))
	{
		if (iLocal_67)
		{
			iLocal_67 = 0;
		}
	}
	if (iLocal_68)
	{
		if (((bVar0 && !Global_1788565) && !func_152()) && !func_500(Global_1592923))
		{
			if (unk_0xF57D21B49780A7A8(unk_0x0031992CA618A445(), -828834893) != 1 && unk_0xF57D21B49780A7A8(unk_0x0031992CA618A445(), -828834893) != 0)
			{
				unk_0x471E558A661279DE(unk_0x0031992CA618A445(), 0, 576);
				iLocal_65 = 1;
			}
		}
		else
		{
			iLocal_68 = 0;
		}
	}
	if (func_3(&(Global_2434915.f_502.f_27)))
	{
		if (!iLocal_66)
		{
			iVar4 = -1;
			func_232(156, &iVar4, 1);
			if (func_297() != -1 && func_297() != iVar4)
			{
				if (!func_487(unk_0x3D35F9864E4640B1()) && iLocal_67)
				{
					if (func_185() != -1)
					{
						if (Global_2097152[func_185() /*11035*/].f_7550.f_2 != -1 && Global_2434915.f_502.f_30)
						{
							func_294(0, 1, 1, 0, 0, 0, 0);
						}
					}
					if (iVar4 >= 0)
					{
						func_188(iVar4);
					}
					iLocal_66 = 1;
				}
			}
			else
			{
				iLocal_66 = 1;
			}
		}
	}
	else if (iLocal_66)
	{
		iLocal_66 = 0;
	}
}

int func_564()
{
	if (((((((((func_276() || func_275()) || func_274()) || func_356()) || (func_332() && !unk_0xF4F91CD09D59F42E())) || (func_567() && !func_566())) || Global_2394684) || Global_2394684.f_1 != 0) || Global_2394757 != 0) || (func_565() == 2 && !unk_0xF4F91CD09D59F42E()))
	{
		return 1;
	}
	return 0;
}

int func_565()
{
	return Global_979818;
}

bool func_566()
{
	return unk_0x2A3398C6222EB190(Global_2445582.f_2, 27);
}

int func_567()
{
	if (func_331() || func_568())
	{
		return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_96 == 8;
	}
	return 0;
}

var func_568()
{
	return Global_2445582.f_615;
}

void func_569()
{
	if (Global_2501777.f_825 == 1)
	{
		if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
		{
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					Global_2501777.f_823 = 1;
				}
			}
		}
	}
}

void func_570()
{
	if ((((unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 5) || func_151(unk_0x3D35F9864E4640B1())) || func_16(unk_0x3D35F9864E4640B1())) && (unk_0x3D35F9864E4640B1() == Global_1592923 || unk_0x3D35F9864E4640B1() == Global_1592924)) && !func_493())
	{
		if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_9, 8))
		{
			if (unk_0x76B3C79DE564AFC6(Global_2501777.f_287[1]))
			{
				if (unk_0x3B077EBCBD1ABF1F(Global_2501777.f_287[1]))
				{
					if (!unk_0x8CAADD2AA5EDCAAC(Global_2501777.f_287[1]))
					{
						unk_0x477513BFF4F0CEC1(Global_2501777.f_287[1], true, 0);
						iLocal_64 = 1;
					}
				}
				else
				{
					unk_0xDE78E0A451F0CC44(Global_2501777.f_287[1]);
				}
			}
		}
	}
	else if ((!Global_1780828.f_22 && !func_151(unk_0x3D35F9864E4640B1())) && !func_16(unk_0x3D35F9864E4640B1()))
	{
		if (iLocal_64)
		{
			iLocal_64 = 0;
		}
	}
}

void func_571()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (func_5(unk_0x3D35F9864E4640B1(), 1, 1))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (func_494(unk_0x0031992CA618A445(), 0) == -1)
			{
				return;
			}
		}
	}
	func_572();
	if (func_151(unk_0x3D35F9864E4640B1()))
	{
		if (Global_1592923 != func_6())
		{
			if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 25))
			{
				if (unk_0x5114FCEE2A997B95())
				{
					if (!unk_0x30758DD2AA5FF762() && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						iLocal_62 = 1;
						unk_0x3FBCF62006AA891E(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1, 0);
						unk_0xA4F33A8DF744EA90(1, 0);
						unk_0x33A6B3F4B1E565DD(1, 0);
					}
				}
				if (func_151(Global_1592923))
				{
					if (unk_0x2A116936C6E6EBEC(unk_0x0031992CA618A445()) != joaat("GtaMloRoom001"))
					{
						if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
						{
							iLocal_63 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
						}
						if (unk_0x76B3C79DE564AFC6(iLocal_63) && !unk_0x7A6C051038031EFA(iLocal_63, 0))
						{
							unk_0x2409C9AF3525012C(iLocal_63, 1);
						}
						if (!func_3(&uLocal_60))
						{
							func_37(&uLocal_60, 0, 0);
							if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
							{
								if (unk_0x76B3C79DE564AFC6(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)) && !unk_0x7A6C051038031EFA(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 0))
								{
									unk_0x2409C9AF3525012C(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1);
								}
							}
						}
						else if (func_36(&uLocal_60, 6000, 0) && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
						{
							Var0 = { unk_0xF177E0DA126D71C8(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1) };
							Var3 = { unk_0x7F26B7A4881CE80A(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)) };
							if (unk_0x229F35E7CDDBF757((Var3.f_2 - Var0.f_2)) > 5f)
							{
								unk_0x2409C9AF3525012C(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1);
							}
							else
							{
								func_2(&uLocal_60);
							}
						}
					}
				}
				else if (func_3(&uLocal_60))
				{
					func_2(&uLocal_60);
				}
			}
			else if (iLocal_62)
			{
				if (unk_0x30758DD2AA5FF762())
				{
					iLocal_62 = 0;
					unk_0x33A6B3F4B1E565DD(0, 0);
				}
			}
		}
	}
}

void func_572()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (func_5(unk_0x3D35F9864E4640B1(), 1, 1))
	{
		if (func_299(unk_0x3D35F9864E4640B1()) && func_151(unk_0x3D35F9864E4640B1()))
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				if (func_494(unk_0x0031992CA618A445(), 0) == -1)
				{
					return;
				}
			}
			if (unk_0x2A116936C6E6EBEC(unk_0x0031992CA618A445()) == joaat("GtaMloRoom001"))
			{
				if (!func_3(&uLocal_57))
				{
					func_37(&uLocal_57, 0, 0);
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						if (unk_0x76B3C79DE564AFC6(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)) && !unk_0x7A6C051038031EFA(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 0))
						{
							unk_0x2409C9AF3525012C(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1);
						}
					}
				}
				else if (func_36(&uLocal_57, 1500, 0))
				{
					if (unk_0x5114FCEE2A997B95())
					{
						unk_0x18D7C8000EDEAAB4(500);
						if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
						{
							unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), true, 0);
						}
						if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
						{
							if (unk_0x76B3C79DE564AFC6(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)) && !unk_0x7A6C051038031EFA(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 0))
							{
								unk_0x2409C9AF3525012C(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1);
								if (!func_573(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)))
								{
									unk_0x471E558A661279DE(unk_0x0031992CA618A445(), 0, 0);
								}
							}
						}
						else if (unk_0x76B3C79DE564AFC6(unk_0x7899A2987EB03783()) && !unk_0x7A6C051038031EFA(unk_0x7899A2987EB03783(), 0))
						{
							unk_0x2409C9AF3525012C(unk_0x7899A2987EB03783(), 1);
						}
						if (unk_0x30758DD2AA5FF762())
						{
							unk_0x33A6B3F4B1E565DD(0, 0);
						}
						func_20(0, -1);
						func_316(0);
						func_320(0);
						func_2(&uLocal_57);
					}
				}
			}
			else if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				Var0 = { unk_0xF177E0DA126D71C8(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1) };
				Var3 = { unk_0x7F26B7A4881CE80A(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)) };
				if (unk_0x229F35E7CDDBF757((Var3.f_2 - Var0.f_2)) > 10f || unk_0x229F35E7CDDBF757((Var0.f_2 - 40f)) > 3.5f)
				{
					unk_0x2409C9AF3525012C(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), 1);
				}
			}
		}
	}
}

int func_573(int iParam0)
{
	if (!unk_0x76B3C79DE564AFC6(iParam0))
	{
		return 0;
	}
	switch (unk_0xE9559A12052415BE(iParam0))
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("nightshark"):
		case joaat("ardent"):
		case joaat("vigilante"):
			return 1;
			break;
	}
	if (func_574(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

int func_574(int iParam0, bool bParam1)
{
	switch (unk_0xE9559A12052415BE(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_576(unk_0xE9559A12052415BE(iParam0)))
			{
				if (Global_2501777.f_286 == iParam0)
				{
					return 1;
				}
				else if (func_575(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_575(int iParam0)
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2434915.f_603[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_576(int iParam0)
{
	switch (iParam0)
	{
		case joaat("technical"):
			if (Global_262145.f_19649)
			{
				return 1;
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_19650)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_577()
{
	if (unk_0x20551D6D924ED04B())
	{
		if (Global_2501777.f_272 != 0)
		{
			func_578();
		}
	}
}

void func_578()
{
	Global_2501777.f_272 = 0;
	Global_2501777.f_273 = 0;
	Global_2501777.f_274 = 0;
}

void func_579()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x27CA09C6DFAB1E79() || !func_238(-1))
	{
		return;
	}
	iVar0 = -1;
	iVar1 = -1;
	if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_235 != 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 19)
		{
			iVar3 = iVar2 + 159;
			iVar4 = 0;
			func_232(iVar3, &iVar4, 0);
			if (iVar4 >= 0 && Global_1319069[iVar4 /*140*/].f_66 != 0)
			{
				iVar0++;
				if (!func_580(iVar3))
				{
					iVar1++;
				}
			}
			iVar2++;
		}
	}
	else
	{
		iVar0 = -1;
		iVar1 = -1;
	}
	if (iLocal_54 != iVar0 || iLocal_55 != iVar1)
	{
		if (iLocal_56 == 0)
		{
			iLocal_56 = Global_262145.f_21206;
		}
		Global_262145.f_21206 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iLocal_56) * (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1))));
		iLocal_54 = iVar0;
		iLocal_55 = iVar1;
	}
}

int func_580(int iParam0)
{
	int iVar0;
	
	iParam0 = (iParam0 - 159);
	if (func_581(iParam0, &iVar0))
	{
		return func_453(iVar0, -1, -1);
	}
	return 1;
}

int func_581(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 15947;
			return 1;
		
		case 1:
			*uParam1 = 15948;
			return 1;
		
		case 2:
			*uParam1 = 15949;
			return 1;
		
		case 3:
			*uParam1 = 15950;
			return 1;
		
		case 4:
			*uParam1 = 15951;
			return 1;
		
		case 5:
			*uParam1 = 15952;
			return 1;
		
		case 6:
			*uParam1 = 15953;
			return 1;
		
		case 7:
			*uParam1 = 15954;
			return 1;
		
		case 8:
			*uParam1 = 15955;
			return 1;
		
		case 9:
			*uParam1 = 15956;
			return 1;
		
		case 10:
			*uParam1 = 15957;
			return 1;
		
		case 11:
			*uParam1 = 15958;
			return 1;
		
		case 12:
			*uParam1 = 15959;
			return 1;
		
		case 13:
			*uParam1 = 15960;
			return 1;
		
		case 14:
			*uParam1 = 15961;
			return 1;
		
		case 15:
			*uParam1 = 15962;
			return 1;
		
		case 16:
			*uParam1 = 15996;
			return 1;
		
		case 17:
			*uParam1 = 15997;
			return 1;
		
		case 18:
			*uParam1 = 15998;
			return 1;
		
		default:
	}
	return 0;
}

void func_582()
{
	int iVar0;
	
	if (!iLocal_53)
	{
		if (Global_1574134)
		{
			iVar0 = func_237(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_9327 = 1;
			}
			iLocal_53 = 1;
		}
	}
	else if (!Global_1574134)
	{
		iLocal_53 = 0;
	}
}

void func_583()
{
	if (!iLocal_52)
	{
		if (Global_1574134)
		{
			if (func_585() || func_584())
			{
				Global_262145.f_18758 = 1;
			}
			else
			{
				Global_262145.f_18758 = 0;
			}
			iLocal_52 = 1;
		}
	}
	else if (!Global_1574134)
	{
		iLocal_52 = 0;
	}
}

int func_584()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_237(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_9436)
	{
		return 0;
	}
	uVar1[0] = func_237(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_237(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_237(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_237(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_9432 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_9436)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_585()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_237(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_9435)
	{
		return 0;
	}
	uVar1[0] = func_237(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_237(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_237(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_237(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_9431 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_9435)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_586()
{
	int iVar0;
	
	if (unk_0x20551D6D924ED04B())
	{
		iVar0 = 0;
		while (iVar0 < Global_1593076)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1593076[iVar0 /*647*/].f_540), 1);
			iVar0++;
		}
	}
}

void func_587()
{
	if (Global_262145.f_9411 != 60)
	{
		Global_262145.f_9411 = 60;
	}
}

void func_588()
{
	if (iLocal_39 == 0)
	{
		Global_1592940 = { -1554.513f, -574.1351f, 30.70791f };
		Global_1592940.f_3 = { -1547.893f, -581.5151f, 32.9337f };
		Global_1592940.f_6 = { 4.75f, 3.75f, 6f };
		iLocal_39 = 1;
	}
}

void func_589()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (!unk_0x27CA09C6DFAB1E79() || !func_238(-1))
	{
		iLocal_38 = -1;
		return;
	}
	if (iLocal_38 == -1)
	{
		iLocal_38 = 0;
		iLocal_38 = 0;
		while (iLocal_38 < 184)
		{
			fVar0 = -1f;
			iVar1 = Global_1319069[iLocal_38 /*140*/].f_66;
			if (func_215(iVar1, &fVar0))
			{
				if (!Global_1319069[iLocal_38 /*140*/].f_79 == fVar0)
				{
					Global_1319069[iLocal_38 /*140*/].f_79 = fVar0;
				}
			}
			iLocal_38++;
		}
		iLocal_38 = 0;
	}
	else
	{
		fVar2 = -1f;
		iVar3 = Global_1319069[iLocal_38 /*140*/].f_66;
		if (func_215(iVar3, &fVar2))
		{
			if (!Global_1319069[iLocal_38 /*140*/].f_79 == fVar2)
			{
				Global_1319069[iLocal_38 /*140*/].f_79 = fVar2;
			}
		}
		iLocal_38++;
		if (iLocal_38 >= 184)
		{
			iLocal_38 = 0;
		}
	}
}

void func_590()
{
	bool bVar0;
	int iVar1;
	struct<8> Var2;
	
	if (!unk_0x27CA09C6DFAB1E79() || !func_238(-1))
	{
		return;
	}
	bVar0 = false;
	if (func_593(unk_0x3D35F9864E4640B1()))
	{
		if (Global_1641087.f_96810 == Global_262145.f_7912)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (unk_0x0BD3CCFB6C6CFA91(&cLocal_4))
		{
			iVar1 = unk_0xE9559A12052415BE(unk_0x0031992CA618A445());
			StringCopy(&Var2, "", 32);
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				StringCopy(&Var2, "DLC_MP_HEIST_M_BERD_2_0", 32);
			}
			else if (iVar1 == joaat("mp_f_freemode_01"))
			{
				StringCopy(&Var2, "DLC_MP_HEIST_F_BERD_2_0", 32);
			}
			if (!unk_0x0BD3CCFB6C6CFA91(&Var2))
			{
				if (!func_450(unk_0x50B7853132D8438E(&Var2), 1, 1, 1, -1))
				{
					func_592(unk_0x50B7853132D8438E(&Var2), 1, 1, 1, -1);
					cLocal_4 = { Var2 };
				}
			}
		}
	}
	else if (!unk_0x0BD3CCFB6C6CFA91(&cLocal_4))
	{
		func_591(unk_0x50B7853132D8438E(&cLocal_4), 1, 1, 1, -1);
		StringCopy(&cLocal_4, "", 32);
	}
}

void func_591(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_70597;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_451(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		uVar3 = func_101(iVar2, iVar0, 0);
		unk_0xD804ACF2A7171150(&uVar3, uVar1);
		func_98(iVar2, uVar3, iVar0, 1, 0);
	}
}

void func_592(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_70597;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_451(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		uVar3 = func_101(iVar2, iVar0, 0);
		unk_0xCD7E92DE2BFA0B0D(&uVar3, uVar1);
		func_98(iVar2, uVar3, iVar0, 1, 0);
	}
}

int func_593(int iParam0)
{
	if (func_363(iParam0) || func_362(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_594()
{
	if (Global_17290.f_5606 == -1)
	{
		return;
	}
	if (func_306(unk_0x3D35F9864E4640B1()))
	{
		if (func_305())
		{
			if (Global_17290.f_5598)
			{
				if (!unk_0x0BD3CCFB6C6CFA91(&(Global_17290.f_1)))
				{
					if (unk_0xB3404E397FF56B3B(&(Global_17290.f_1), "CMOD_BOMB_T"))
					{
						switch ((Global_17290.f_5606 - 10))
						{
							case 0:
								StringCopy(&(Global_92814.f_407[Global_17290.f_5606 /*4*/]), "CMOD_BOMB_S", 16);
								break;
							
							case 1:
								StringCopy(&(Global_92814.f_407[Global_17290.f_5606 /*4*/]), "PBOMBS_STANDARD", 16);
								break;
							
							case 2:
								StringCopy(&(Global_92814.f_407[Global_17290.f_5606 /*4*/]), "PBOMBS_INCEN", 16);
								break;
							
							case 3:
								StringCopy(&(Global_92814.f_407[Global_17290.f_5606 /*4*/]), "PBOMBS_GAS", 16);
								break;
							
							case 4:
								StringCopy(&(Global_92814.f_407[Global_17290.f_5606 /*4*/]), "PBOMBS_CLUS", 16);
								break;
							}
						}
					}
				}
			}
	}
}

void func_595()
{
	if (func_151(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 6))
		{
			if (Global_1788562)
			{
				iLocal_3 = 1;
				Global_1788562 = 0;
			}
		}
	}
	else if (iLocal_3)
	{
		iLocal_3 = 0;
	}
}

void func_596()
{
	if (func_598(unk_0x3D35F9864E4640B1(), 229))
	{
		if (iLocal_75 == -1)
		{
			iLocal_75 = unk_0x6F8EA18C531AB271(unk_0x0031992CA618A445(), joaat("AMMO_SNIPER"));
		}
	}
	if (iLocal_75 != -1)
	{
		if (func_597(unk_0x3D35F9864E4640B1()) == 14)
		{
			if (!iLocal_76)
			{
				iLocal_76 = 1;
			}
		}
		else if (iLocal_76)
		{
			unk_0x4247B80AE7532C26(unk_0x0031992CA618A445(), joaat("AMMO_SNIPER"), iLocal_75);
			iLocal_75 = -1;
			iLocal_76 = 0;
		}
		else if (!func_598(unk_0x3D35F9864E4640B1(), 229))
		{
			iLocal_75 = -1;
			iLocal_76 = 0;
		}
	}
}

int func_597(int iParam0)
{
	if (func_141(iParam0) == 229)
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_173;
	}
	return -1;
}

int func_598(int iParam0, int iParam1)
{
	if (func_599(iParam0, 0))
	{
		if (Global_1623799[iParam0 /*488*/].f_11.f_31 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_599(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_31 != -1 || (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_600()
{
	if (((unk_0x27CA09C6DFAB1E79() && func_5(unk_0x3D35F9864E4640B1(), 1, 1)) && !Global_1574126) && Global_25222 == 0)
	{
		if (unk_0x7832F791572D5809(joaat("animal_controller")) != 0)
		{
			unk_0x11047BA199BB9FE9(-201, 0, 0);
		}
	}
}

void func_601(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x0B8B91F21AE25854(sParam2);
	unk_0xA9895403BC230880(sParam3);
	unk_0x7E43DE6F9866B44B(fParam0, fParam1, 0);
}

void func_602()
{
	if (!bLocal_1)
	{
		if (unk_0x957E53BB191CB24D())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0xD887E21676314450(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0xD887E21676314450(2, 190))
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
					if (unk_0xD887E21676314450(2, 189))
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
					if (unk_0xD887E21676314450(2, 190))
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
					if (unk_0xD887E21676314450(2, 188))
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
	else if (unk_0x957E53BB191CB24D())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0xD887E21676314450(2, 188))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0xD887E21676314450(2, 190))
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
				if (unk_0xD887E21676314450(2, 189))
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
				if (unk_0xD887E21676314450(2, 190))
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
				if (unk_0xD887E21676314450(2, 189))
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

bool func_603()
{
	return unk_0x43456EBBDC27D696(-1762644250);
}

