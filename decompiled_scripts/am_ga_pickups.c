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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	var uLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_105 = 0f;
	struct<3> Local_106 = { 0, 0, 0 } ;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	float fLocal_113 = 0f;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	float fLocal_125 = 0f;
	float fLocal_126 = 0f;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	float fLocal_136 = 0f;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<83> Local_139 = { 0, 0, 5, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_222 = 0;
	struct<2> Local_223[32];
	struct<46> ScriptParam_0 = { 31, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_93 = ((0.05f + 0.275f) - 0.01f);
	fLocal_96 = -0.05f;
	fLocal_97 = 0.92f;
	fLocal_98 = 1.94f;
	fLocal_99 = 2.99f;
	fLocal_100 = 3.7f;
	Local_102 = { -0.4f, 0.96f, 0.85f };
	fLocal_105 = 0.95f;
	Local_106 = { 0f, 2f, 2.5f };
	fLocal_109 = 1.75f;
	Local_110 = { 0f, 0f, 120f };
	fLocal_113 = 35.5f;
	fLocal_123 = 3f;
	fLocal_124 = 0f;
	fLocal_125 = 2f;
	fLocal_126 = 100f;
	fLocal_136 = 0.5f;
	if (unk_0x591AF4C50B46E014())
	{
		if (!func_28(ScriptParam_0))
		{
			func_26();
		}
	}
	while (true)
	{
		func_25();
		if (func_14())
		{
			func_26();
		}
		switch (func_13(unk_0x88641E5BC172153A()))
		{
			case 0:
				if (func_12() == 1)
				{
					Local_223[unk_0x88641E5BC172153A() /*2*/] = 1;
				}
				else if (func_12() == 4)
				{
					Local_223[unk_0x88641E5BC172153A() /*2*/] = 3;
				}
				break;
			
			case 1:
				if (func_12() == 4)
				{
					Local_223[unk_0x88641E5BC172153A() /*2*/] = 3;
				}
				if (!unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_139.f_78, 200f, 200f, 200f, 0, 1, 0))
				{
					Local_223[unk_0x88641E5BC172153A() /*2*/] = 4;
				}
				break;
			
			case 3:
				func_10(&(Local_139.f_82));
				if (func_9(&(Local_139.f_82)))
				{
					Local_223[unk_0x88641E5BC172153A() /*2*/] = 4;
				}
				break;
			
			case 2:
				Local_223[unk_0x88641E5BC172153A() /*2*/] = 4;
			
			case 4:
				func_26();
				break;
		}
		if (unk_0x62E688B72E3C57B0())
		{
			switch (func_12())
			{
				case 0:
					if (func_5())
					{
						Local_139.f_0 = 1;
					}
					break;
				
				case 1:
					func_3();
					if (func_1())
					{
						Local_139.f_0 = 4;
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
	return 0;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_139.f_2[iVar0 /*15*/].f_6, 1))
		{
			func_4(iVar0);
			if (Local_139.f_2[iVar0 /*15*/].f_14 > 5)
			{
				unk_0xF6082E2ADA1C795B(&(Local_139.f_2[iVar0 /*15*/].f_6), 1);
			}
			Local_139.f_2[iVar0 /*15*/].f_14++;
		}
		iVar0++;
	}
}

void func_4(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2137828D03306CAF(Local_139.f_2[iParam0 /*15*/].f_10[iVar0]))
		{
			if (unk_0x1979A7D1D0538188(Local_139.f_2[iParam0 /*15*/].f_10[iVar0]))
			{
				unk_0x8E979F037EACE55A(Local_139.f_2[iParam0 /*15*/].f_10[iVar0], unk_0xD1EE0E9FCD74A37B(Local_139.f_2[iParam0 /*15*/].f_10[iVar0], 1) + Vector((0.046f * 1.5f), 0f, 0f), 1, 0, 0, 1);
			}
		}
		iVar0++;
	}
}

int func_5()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_6(iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_6(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	if (func_8(Local_139.f_2[iParam0 /*15*/].f_2) || unk_0xAA4F14DA15DB0B51(Local_139.f_2[iParam0 /*15*/].f_6, 0))
	{
		return 1;
	}
	iVar4 = 0;
	unk_0xF6082E2ADA1C795B(&iVar4, 3);
	unk_0xF6082E2ADA1C795B(&iVar4, 4);
	switch (Local_139.f_2[iParam0 /*15*/].f_7)
	{
		case 0:
			if (unk_0x7DC1E7E4F4F004B4(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!unk_0x2137828D03306CAF(Local_139.f_2[iParam0 /*15*/].f_10[iVar0]))
					{
						Var1 = { unk_0xEBB6A451E594E1A8(Local_139.f_2[iParam0 /*15*/].f_2, Local_139.f_2[iParam0 /*15*/].f_5, (0.6f - (IntToFloat(iVar0) * 0.4f)), 0f, 0.1f) };
						Local_139.f_2[iParam0 /*15*/].f_10[iVar0] = unk_0xE9AB9BA1F0DCD1BC(joaat("pickup_gang_attack_money"), Var1, iVar4, Local_139.f_2[iParam0 /*15*/].f_9, 0, 1, 1);
					}
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x7DC1E7E4F4F004B4(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!unk_0x2137828D03306CAF(Local_139.f_2[iParam0 /*15*/].f_10[iVar0]))
					{
						Var1 = { unk_0xEBB6A451E594E1A8(Local_139.f_2[iParam0 /*15*/].f_2, Local_139.f_2[iParam0 /*15*/].f_5, 0f, (0.25f - (IntToFloat(iVar0) * 0.25f)), 0.1f) };
						Local_139.f_2[iParam0 /*15*/].f_10[iVar0] = unk_0xE9AB9BA1F0DCD1BC(Local_139.f_2[iParam0 /*15*/].f_8, Var1, iVar4, -1, 0, 1, 1);
					}
					iVar0++;
				}
				if (func_7(iParam0, 2))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0x7DC1E7E4F4F004B4(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!unk_0x2137828D03306CAF(Local_139.f_2[iParam0 /*15*/].f_10[iVar0]))
					{
						Var1 = { unk_0xEBB6A451E594E1A8(Local_139.f_2[iParam0 /*15*/].f_2, Local_139.f_2[iParam0 /*15*/].f_5, 0f, (0.25f - (IntToFloat(iVar0) * 0.25f)), 0.2f) };
						Local_139.f_2[iParam0 /*15*/].f_10[iVar0] = unk_0xE9AB9BA1F0DCD1BC(joaat("pickup_ammo_bullet_mp"), Var1, iVar4, Local_139.f_2[iParam0 /*15*/].f_9, 0, 1, 1);
					}
					iVar0++;
				}
				if (func_7(iParam0, 2))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	unk_0xF6082E2ADA1C795B(&iVar3, 3);
	unk_0xF6082E2ADA1C795B(&iVar3, 4);
	if (unk_0x7DC1E7E4F4F004B4(0, 0, 0, 1))
	{
		if (!unk_0x2137828D03306CAF(Local_139.f_2[iParam0 /*15*/].f_10[iParam1]))
		{
			Var0 = { unk_0xEBB6A451E594E1A8(Local_139.f_2[iParam0 /*15*/].f_2, Local_139.f_2[iParam0 /*15*/].f_5, 0f, (0.25f - (IntToFloat(iParam1) * 0.25f)), 0.1f) };
			Local_139.f_2[iParam0 /*15*/].f_10[iParam1] = unk_0xE9AB9BA1F0DCD1BC(joaat("pickup_gang_attack_money"), Var0, iVar3, Global_262145.f_4445, 0, 1, 1);
		}
		return 1;
	}
	return 0;
}

int func_8(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_9(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_10(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x62E688B72E3C57B0())
		{
			func_11(uParam0, 0, 0);
		}
	}
}

void func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x591AF4C50B46E014() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x11ABC381A58DD5AB();
			}
			else
			{
				*uParam0 = unk_0xFD0C6B49DA615791();
			}
		}
		else
		{
			*uParam0 = unk_0x3732B96D7A1859B4();
		}
		uParam0->f_1 = 1;
	}
}

int func_12()
{
	return Local_139.f_0;
}

int func_13(int iParam0)
{
	return Local_223[iParam0 /*2*/];
}

int func_14()
{
	var uVar0;
	
	func_21(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_20())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_19())
	{
		return 1;
	}
	if (func_18(157))
	{
		if (!func_17())
		{
			return 1;
		}
	}
	if (func_18(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_15() != 0)
	{
		if (unk_0x09952BA662A7629B(func_15()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_15()
{
	switch (func_16())
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

int func_16()
{
	return Global_25222;
}

bool func_17()
{
	return Global_2445217.f_578;
}

int func_18(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_19()
{
	return Global_2454709;
}

bool func_20()
{
	return Global_2445217.f_573;
}

void func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xD9298AF91B40C8C4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1145922221:
					func_22(iVar0);
					break;
				
				case 232736570:
					unk_0xD9298AF91B40C8C4(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 679497545)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_22(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_24(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(uVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(uVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_23(uVar4, &bVar5))
						{
							unk_0x43D817D6742248A4(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xFECCD8AF38671477(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_23(var uParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(uParam0))
		{
			if (unk_0x3321AFCAE6E141D4(uParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(uParam0)))
				{
					unk_0x216B434C1A609F5B(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(uParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_24(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_26()
{
	func_27();
}

void func_27()
{
	unk_0xA232817B0B36F2E5();
}

int func_28(struct<41> Param0, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45)
{
	struct<21> Var0;
	int iVar21;
	
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_0 = Param0.f_0;
	Var0.f_16 = Param0.f_1;
	func_32(func_33(Param0.f_0), Var0);
	func_30(0, -1, 0);
	unk_0x2D179B3FFCF1AADA(&Local_139, 84);
	unk_0xA5929B03CD847BE8(&Local_223, 65);
	if (!func_29())
	{
		return 0;
	}
	unk_0xAC09235E2065C253(0);
	if (unk_0x62E688B72E3C57B0())
	{
		Local_139.f_81 = Param0.f_1;
		Local_139.f_78 = { Param0.f_2 };
		iVar21 = 0;
		while (iVar21 < 5)
		{
			if (!unk_0xAA4F14DA15DB0B51(Param0.f_5, 0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_139.f_2[iVar21 /*15*/].f_6), 0);
			}
			Local_139.f_2[iVar21 /*15*/].f_2 = { Param0.f_6[iVar21 /*3*/] };
			Local_139.f_2[iVar21 /*15*/].f_5 = Param0.f_22[iVar21];
			Local_139.f_2[iVar21 /*15*/].f_7 = Param0.f_28[iVar21];
			Local_139.f_2[iVar21 /*15*/].f_8 = Param0.f_34[iVar21];
			Local_139.f_2[iVar21 /*15*/].f_9 = Param0.f_40[iVar21];
			iVar21++;
		}
	}
	Local_223[unk_0x88641E5BC172153A() /*2*/] = 0;
	return 1;
}

int func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x591AF4C50B46E014())
		{
			return 0;
		}
		if (unk_0x3F76B69AE9B695DD())
		{
			return 1;
		}
		if (func_20())
		{
			return 0;
		}
		if (func_18(155))
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

int func_30(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_27();
			}
			else
			{
				return 0;
			}
		}
		if (!func_31())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_27();
					}
					else
					{
						return 0;
					}
				}
				if (func_20())
				{
					if (!bParam2)
					{
						func_27();
					}
					else
					{
						return 0;
					}
				}
				if (func_18(155))
				{
					if (!bParam2)
					{
						func_27();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAD61841DF357CB5C())
			{
				if (!bParam2)
				{
					func_27();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBC3BAD18EBEFD169();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			if (!bParam2)
			{
				func_27();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAD61841DF357CB5C())
	{
		if (!bParam2)
		{
			func_27();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_31()
{
	return Global_1312829;
}

void func_32(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_27();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_33(int iParam0)
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
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
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
		
		case 109:
			return 32;
		
		case 110:
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
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 2;
		
		case 132:
			return 1;
		
		case 128:
			return 2;
		
		case 129:
			return 4;
		
		case 130:
			return 2;
		
		case 131:
			return 2;
		
		case 113:
			return 1;
		
		case 133:
			return 2;
		
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return 0;
		
		case 143:
			return 1;
		
		case 140:
			return 4;
		
		case 141:
			return 16;
		
		case 142:
			return 32;
		
		default:
	}
	return 0;
}

