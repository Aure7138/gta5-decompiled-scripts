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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	char* sLocal_70 = NULL;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (unk_0x76BF814AB8D4CAB8(34))
	{
		func_111();
	}
	Global_25478 = 0;
	Global_25477 = 0;
	Global_25479 = 0;
	Global_25480 = 0;
	Global_25482 = 0;
	Global_25481 = 0;
	func_110();
	while (true)
	{
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	func_86();
	func_66();
	func_20();
	func_2(iLocal_67);
}

void func_2(int iParam0)
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0xFD45636C96407D04())
			{
				func_19("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_18(iParam0);
			}
			break;
		
		case 4:
			func_3(iParam0);
			break;
		
		default:
			break;
	}
}

void func_3(int iParam0)
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	
	bVar4 = false;
	if (unk_0xEDFE27D1AEA0EA7F(iParam0))
	{
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if (unk_0x31F12808DC47A9E5(iLocal_68))
			{
				if (!unk_0x74C2FE037DFC8B4A(iLocal_68, 0))
				{
					if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_68, 0))
					{
						Var0 = { unk_0x761660F5CE986DC4(iLocal_68, 1) };
						fVar3 = unk_0x93FDA3BF59E7B77F(iLocal_68);
						unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), 1, 0, 0, 1);
						bVar4 = true;
					}
				}
				unk_0xBECECD970F645217(&iLocal_68);
			}
			if (!bVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { unk_0x0AF3D0AB54EA2104(unk_0x18F7BE9ACB7D08F4(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0x0AF3D0AB54EA2104(unk_0x18F7BE9ACB7D08F4(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0x0AF3D0AB54EA2104(unk_0x18F7BE9ACB7D08F4(), 0f, 3.5f, 1f) };
				}
				fVar3 = (unk_0x93FDA3BF59E7B77F(unk_0x18F7BE9ACB7D08F4()) + 90f);
			}
			if (func_16(iParam0, Var0, fVar3))
			{
				iLocal_68 = unk_0x3064CCF56C6C32BC(iParam0, Var0, fVar3, 0, 1, 0);
				unk_0x9B53B2691E2B1F79(iLocal_68, 1084227584);
				unk_0x419C9117019F2E5A(iParam0);
				unk_0x4F5FF3F3FDCAB15D(&iLocal_68);
				func_14(sLocal_70);
				func_4(20);
			}
			else
			{
				unk_0x419C9117019F2E5A(iParam0);
				func_19("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_4(int iParam0)
{
	if (!func_13(14) && !func_12(""))
	{
		unk_0xD2A9C3F486236CC5(&Global_25479, iParam0);
		Global_25482 = 1;
		func_5();
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = func_7();
	switch (iVar0)
	{
		case 0:
			func_6(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			func_6(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			func_6(joaat("sp2_times_cheated"), 1);
			break;
	}
}

void func_6(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD194C635833AC189(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xD92C8D8AF3C67820(iParam0, iVar0, 1);
}

int func_7()
{
	func_8();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_8()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_11(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_10(unk_0x18F7BE9ACB7D08F4());
			if (func_9(iVar0) && (!func_13(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_9(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_12(char* sParam0)
{
	if (iLocal_94 != 0)
	{
		if (func_13(14) && unk_0xC8AB6A5E6C1E6613())
		{
			if (unk_0x9D39145AD645E383(sParam0, "CHEAT_SUPER_JUMP") && unk_0xFD45636C96407D04())
			{
				return 0;
			}
			if ((unk_0x9D39145AD645E383(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0)) && unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_13(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_14(char* sParam0)
{
	if (func_12(""))
	{
	}
	else
	{
		unk_0x55E6536147AC42E6("CHEAT_ACTIVATED");
		unk_0xBEFD1ED9B6BE5127(sParam0);
		func_15(unk_0xAA1D000B9BA8AF23(0, 1));
		unk_0xE6B451EA86603D38(sParam0);
	}
}

void func_15(int iParam0)
{
	iLocal_80[iLocal_91] = iParam0;
	iLocal_91++;
	if (iLocal_91 >= 10)
	{
		iLocal_91 = 0;
	}
}

int func_16(int iParam0, struct<3> Param1, float fParam4)
{
	struct<3> Var0[9];
	struct<3> Var28;
	struct<3> Var31;
	struct<3> Var34;
	var uVar37;
	var uVar40;
	int iVar43;
	var uVar44;
	var uVar45;
	var uVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	
	unk_0x0D8E51F437C55570(iParam0, &Var28, &Var31);
	Var34.f_0 = (unk_0x36E1A96E1D63ED91((Var31.f_0 - Var28.f_0)) / 2f);
	Var34.f_1 = (unk_0x36E1A96E1D63ED91((Var31.f_1 - Var28.f_1)) / 2f);
	Var34.f_2 = (unk_0x36E1A96E1D63ED91((Var31.f_2 - Var28.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0xA89DC5E1C1F12DBF(Param1, fParam4, -Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[2 /*3*/] = { unk_0xA89DC5E1C1F12DBF(Param1, fParam4, Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[3 /*3*/] = { unk_0xA89DC5E1C1F12DBF(Param1, fParam4, Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[4 /*3*/] = { unk_0xA89DC5E1C1F12DBF(Param1, fParam4, -Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[5 /*3*/] = { unk_0xA89DC5E1C1F12DBF(Param1, fParam4, -Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[6 /*3*/] = { unk_0xA89DC5E1C1F12DBF(Param1, fParam4, Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[7 /*3*/] = { unk_0xA89DC5E1C1F12DBF(Param1, fParam4, Var34.f_0, Var34.f_1, Var34.f_2) };
	Var0[8 /*3*/] = { unk_0xA89DC5E1C1F12DBF(Param1, fParam4, -Var34.f_0, Var34.f_1, Var34.f_2) };
	if (!unk_0x311945498D684788(Param1))
	{
		return 0;
	}
	uVar50 = unk_0x24B0D9ED8E2B2C70(func_17(unk_0x8CFC7D6E1DA5D304()) + Vector(1f, 0f, 0f), Param1, 87, unk_0x18F7BE9ACB7D08F4(), 0);
	unk_0xA3F56DCC3ACBDEC5(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar44 = unk_0x24B0D9ED8E2B2C70(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0x18F7BE9ACB7D08F4(), 0);
	unk_0xA3F56DCC3ACBDEC5(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar45 = unk_0x24B0D9ED8E2B2C70(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0x18F7BE9ACB7D08F4(), 0);
	unk_0xA3F56DCC3ACBDEC5(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar46 = unk_0x24B0D9ED8E2B2C70(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0x18F7BE9ACB7D08F4(), 0);
	unk_0xA3F56DCC3ACBDEC5(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar47 = unk_0x24B0D9ED8E2B2C70(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0x18F7BE9ACB7D08F4(), 0);
	unk_0xA3F56DCC3ACBDEC5(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar48 = unk_0x24B0D9ED8E2B2C70(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0x18F7BE9ACB7D08F4(), 0);
	unk_0xA3F56DCC3ACBDEC5(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar49 = unk_0x24B0D9ED8E2B2C70(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0x18F7BE9ACB7D08F4(), 0);
	unk_0xA3F56DCC3ACBDEC5(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_17(var uParam0)
{
	return unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(uParam0), 0);
}

void func_18(int iParam0)
{
	if (unk_0xC542C0B6386400EF(uParam0))
	{
		unk_0x9016574B77A748EE(uParam0);
		if (unk_0xEDFE27D1AEA0EA7F(uParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_19(char* sParam0)
{
	if (!func_13(14))
	{
		unk_0x55E6536147AC42E6("CHEAT_DENIED");
		unk_0xBEFD1ED9B6BE5127(sParam0);
		func_15(unk_0xAA1D000B9BA8AF23(0, 1));
	}
}

void func_20()
{
	func_63();
	func_62();
	func_43();
	func_42();
	func_41();
	func_37();
	func_34();
	func_30();
	func_21();
}

void func_21()
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_29(19, 1);
			func_28();
			break;
		
		case 5:
			if ((((!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) || func_26()) || func_25(23)) || func_25(21)) || func_25(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_23();
			break;
		
		case 9:
			func_22("CHEAT_AIM_SLOW_MO");
			func_29(19, 0);
			unk_0x3F9FBB0647D763E2(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_22(char* sParam0)
{
	if (func_12(sParam0))
	{
	}
	else
	{
		unk_0x55E6536147AC42E6("CHEAT_DEACTIVATED");
		unk_0xBEFD1ED9B6BE5127(sParam0);
		func_15(unk_0xAA1D000B9BA8AF23(0, 1));
	}
}

void func_23()
{
	if (unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x02EA7C5633421A0F(2, 25))
		{
			if (func_24(unk_0x18F7BE9ACB7D08F4()) != joaat("weapon_unarmed") && func_24(unk_0x18F7BE9ACB7D08F4()) != joaat("object"))
			{
				unk_0x3F9FBB0647D763E2(fLocal_78);
			}
			else
			{
				unk_0x3F9FBB0647D763E2(1f);
			}
		}
		else
		{
			unk_0x3F9FBB0647D763E2(1f);
		}
	}
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0x75CE6F8BEC2654E3(iParam0, &uVar0, 1);
	return uVar0;
}

int func_25(int iParam0)
{
	if (unk_0xB03A1684359C50A1(Global_25477, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	if (((((((func_13(0) || func_13(11)) || func_13(4)) || func_13(9)) || func_13(10)) || func_13(3)) || func_13(2)) || func_27(35))
	{
		return 1;
	}
	return 0;
}

int func_27(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104551.f_9055.f_99.f_58[iParam0];
}

void func_28()
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_14("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0.6f;
			break;
		
		case 2:
			func_14("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0.4f;
			break;
		
		case 3:
			func_14("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_29(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&Global_25478, iParam0);
		func_4(iParam0);
	}
	else
	{
		unk_0x62148293B793073B(&Global_25478, iParam0);
	}
}

void func_30()
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_29(16, 1);
			func_33();
			break;
		
		case 5:
			unk_0x9C7EE7DE7041A3F4(2, 37, 1);
			unk_0x9C7EE7DE7041A3F4(2, 19, 1);
			if ((((((((!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) || func_26()) || func_32()) || func_31(1)) || unk_0x3199F4F904C324F9(2, 37)) || unk_0x3199F4F904C324F9(2, 19)) || func_25(23)) || func_25(21)) || func_25(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			unk_0x9C7EE7DE7041A3F4(2, 37, 1);
			unk_0x9C7EE7DE7041A3F4(2, 19, 1);
			func_22("CHEAT_SLOW_MO");
			func_29(16, 0);
			iLocal_76 = 0;
			unk_0x3F9FBB0647D763E2(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

int func_32()
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
	}
	return 0;
}

void func_33()
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_14("CHEAT_SLOW_MO1");
			unk_0x3F9FBB0647D763E2(0.6f);
			break;
		
		case 2:
			func_14("CHEAT_SLOW_MO2");
			unk_0x3F9FBB0647D763E2(0.4f);
			break;
		
		case 3:
			func_14("CHEAT_SLOW_MO3");
			unk_0x3F9FBB0647D763E2(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_34()
{
	struct<3> Var0;
	var uVar3;
	float fVar4;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_29(17, 1);
			unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 1);
			unk_0x36643EAE6212D16F(unk_0x8CFC7D6E1DA5D304(), 1);
			unk_0x8BA533846256EA8E(unk_0x18F7BE9ACB7D08F4(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x7D154B840BD03D00(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute"), 1, 0, 1);
			Var0 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
			uVar3 = unk_0x93FDA3BF59E7B77F(unk_0x18F7BE9ACB7D08F4());
			unk_0xB5E0B10B5D88A8F5(Var0, &fVar4, 0, 0);
			fVar4 = (fVar4 + 500f);
			unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Var0.f_0, Var0.f_1, fVar4, 1, 0, 0, 1);
			unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), uVar3);
			iLocal_72 = unk_0x5AFB8ED811F05E4D();
			unk_0xFF91FEC6E57575E4(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_36(1000, iLocal_72))
			{
				unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 0);
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
				iLocal_72 = unk_0x5AFB8ED811F05E4D();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_36(1000, iLocal_72))
			{
				unk_0x9C7EE7DE7041A3F4(0, 144, 1);
				unk_0x9C7EE7DE7041A3F4(0, 149, 1);
				if (func_7() == 0)
				{
					unk_0xDEA702F2138E0B35(unk_0x18F7BE9ACB7D08F4(), 9, 0, 0, 0);
				}
				else
				{
					unk_0xDEA702F2138E0B35(unk_0x18F7BE9ACB7D08F4(), 8, 0, 0, 0);
				}
				unk_0x8359CF51370FC969(250);
				iLocal_72 = unk_0x5AFB8ED811F05E4D();
				func_14("CHEAT_SKYFALL");
				unk_0x517580CDE6972445(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) || func_26()) || func_25(23)) || func_25(21)) || func_25(17))
			{
				iLocal_64 = 9;
				break;
			}
			unk_0x9C7EE7DE7041A3F4(0, 144, 1);
			unk_0xE05212008FE9A018(2);
			if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x4B75B258E14231A7(unk_0x18F7BE9ACB7D08F4(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0x5BEDB1779AE301BA(unk_0x18F7BE9ACB7D08F4()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_35();
			func_22("CHEAT_SKYFALL");
			func_29(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_35()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0xA48F593CC7A71FCC(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		unk_0x36643EAE6212D16F(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x8BA533846256EA8E(unk_0x18F7BE9ACB7D08F4(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	unk_0x517580CDE6972445(0);
}

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x5AFB8ED811F05E4D();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_37()
{
	struct<3> Var0;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_INVINCIBILITY");
			func_29(15, 1);
			iLocal_62 = 5;
			iLocal_74 = unk_0x5AFB8ED811F05E4D();
			unk_0x36643EAE6212D16F(unk_0x8CFC7D6E1DA5D304(), 1);
			unk_0x8BA533846256EA8E(unk_0x18F7BE9ACB7D08F4(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) || unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				iLocal_62 = 9;
				return;
			}
			Var0 = { func_17(unk_0x8CFC7D6E1DA5D304()) };
			if (((((func_26() || func_32()) || func_25(23)) || func_25(21)) || func_25(15)) || Var0.f_2 <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (unk_0x5AFB8ED811F05E4D() - iLocal_74);
			if (unk_0xE7FAF8E78F7D3A73(joaat("appinternet")) == 0)
			{
				func_38((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			unk_0x36643EAE6212D16F(unk_0x8CFC7D6E1DA5D304(), 1);
			unk_0x8BA533846256EA8E(unk_0x18F7BE9ACB7D08F4(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xB31A31E41CB48A91();
			break;
		
		case 9:
			func_22("CHEAT_INVINCIBILITY_OFF");
			func_29(15, 0);
			iLocal_62 = 1;
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x36643EAE6212D16F(unk_0x8CFC7D6E1DA5D304(), 0);
				unk_0x8BA533846256EA8E(unk_0x18F7BE9ACB7D08F4(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_38(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_40(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1358718.f_1 = 1;
		func_39(7, iVar0);
		Global_1358718.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1358718.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1358718.f_4366.f_172[iVar0] = iParam2;
		Global_1358718.f_4366.f_216[iVar0] = iParam3;
		Global_1358718.f_4366.f_183[iVar0] = iParam4;
		Global_1358718.f_4366.f_194[iVar0] = iParam5;
		Global_1358718.f_4366.f_249[iVar0] = iParam6;
		Global_1358718.f_4366.f_260[iVar0] = iParam7;
		Global_1358718.f_4366.f_205[iVar0] = iParam8;
		Global_1358718.f_4366.f_314[iVar0] = iParam9;
		Global_1358718.f_4366.f_325[iVar0] = iParam10;
		Global_1358718.f_4366.f_357[iVar0] = iParam11;
		Global_1358718.f_4366.f_238[iVar0] = iParam12;
		Global_1358718.f_4366.f_271[iVar0] = iParam13;
		Global_1358718.f_4366.f_368[iVar0] = iParam14;
		Global_1358718.f_4366.f_379[iVar0] = iParam15;
		Global_1358718.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_39(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_1358718.f_6097[iParam0]), iParam1);
}

bool func_40(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_1358718.f_6097[iParam0], iParam1);
}

void func_41()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FLAMING_BULLETS");
			func_29(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) || func_25(23)) || func_25(21)) || func_25(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0x4EC5B2D966EA3733(unk_0x8CFC7D6E1DA5D304());
			break;
		
		case 9:
			func_22("CHEAT_FLAMING_BULLETS");
			func_29(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_42()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_EXPLOSIVE_MELEE");
			func_29(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) || func_25(23)) || func_25(21)) || func_25(13)) || func_26())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0x6BBF902641466FA7(unk_0x8CFC7D6E1DA5D304());
			break;
		
		case 9:
			func_22("CHEAT_EXPLOSIVE_MELEE");
			func_29(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_43()
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_DRUNK");
			func_29(18, 1);
			func_58(unk_0x18F7BE9ACB7D08F4());
			func_56(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_26() || !unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304())) || func_25(23)) || func_25(21)) || func_25(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_DRUNK");
			func_29(18, 0);
			func_47(unk_0x18F7BE9ACB7D08F4());
			func_46(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_44(1);
			func_29(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_44(bool bParam0)
{
	unk_0xA1FB3417C3449864(0f);
	unk_0xDD4424863F033940(0f);
	unk_0xB3EC3EC462B2CB79(0f);
	unk_0x116F780D5A758BE3(1);
	unk_0xDF53E98A4157D5D6(0f);
	unk_0x9D8275FB70AE1DBD(1);
	unk_0x8C8FFDC0DAC02F17(0);
	if (unk_0x36CC410474001FBC("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xA11D9B06B99FE786("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xFAFFA408239A026B(&Global_36969))
	{
		if (unk_0x36CC410474001FBC(&Global_36969))
		{
			unk_0xA11D9B06B99FE786(&Global_36969);
		}
	}
	if (unk_0x5400DC5FAEBF30F0(Global_36958))
	{
		if (unk_0x76DD0F1D9A93AB6C(Global_36958))
		{
			unk_0x0DF6CD63C0404942(Global_36958, 0f);
			unk_0xA41F88BA20F1376F(Global_36958, 1);
		}
	}
	if (unk_0xC8C71EAB5D37D499())
	{
		unk_0xAF3C6787189C4D52(0);
	}
	if (bParam0)
	{
		if (unk_0xEBB1B7EB9C7EA9B9() != -1 || unk_0x1CC829D6263C76A6() != -1)
		{
			unk_0x8D15A5FB83757D1A();
		}
		else if (unk_0x51CFE20A158947F4())
		{
			unk_0x8D15A5FB83757D1A();
		}
	}
	Global_36964 = 0f;
	StringCopy(&Global_36965, "", 16);
	StringCopy(&Global_36969, "", 64);
	StringCopy(&Global_36985, "", 16);
	func_45();
}

void func_45()
{
	Global_36957 = 0;
	Global_36958 = 0;
	Global_36959 = 0;
	Global_36960 = 30000;
	Global_36961 = 0f;
	Global_36963 = 0f;
	Global_36962 = 0f;
	Global_36964 = 0f;
	StringCopy(&Global_36965, "", 16);
}

void func_46(int iParam0)
{
	int iVar0;
	
	if (!Global_36957)
	{
		return;
	}
	iVar0 = unk_0x5AFB8ED811F05E4D();
	Global_36959 = (iVar0 + iParam0);
	Global_36960 = iParam0;
}

void func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36794[iVar0 /*5*/];
		func_50(1, iVar1, 1);
		return;
	}
	iVar2 = func_49(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_48(iVar2);
}

void func_48(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36768[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36768[iParam0 /*5*/].f_1 == unk_0x18F7BE9ACB7D08F4())
		{
			Global_36989 = 0;
		}
	}
	Global_36768[iParam0 /*5*/] = 13;
	Global_36768[iParam0 /*5*/].f_1 = 0;
	Global_36768[iParam0 /*5*/].f_2 = 0;
	Global_36768[iParam0 /*5*/].f_3 = 0;
	Global_36768[iParam0 /*5*/].f_4 = 0;
	Global_36767 = (Global_36767 - 1);
	if (Global_36767 < 0)
	{
		Global_36767 = 0;
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36768[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	func_51(iParam0, iParam1, iParam2, 0, 0);
}

void func_51(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_53(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_52();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36875[iVar0 /*5*/] = iParam0;
	Global_36875[iVar0 /*5*/].f_1 = iParam1;
	Global_36875[iVar0 /*5*/].f_2 = iParam2;
	Global_36875[iVar0 /*5*/].f_3 = iParam3;
	Global_36875[iVar0 /*5*/].f_4 = iParam4;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36875[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_53(int iParam0, int iParam1, int iParam2)
{
	if (func_54(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36875[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36875[iVar0 /*5*/])
			{
				if (iParam1 == Global_36875[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36794[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36794[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_56(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_57(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_57(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_36957)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x1CF36F2B95DC9A55())
	{
		unk_0x628F57B455120BC4("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0x5B5E9E25452D7459())
	{
		unk_0x919E5B3AAD71E52E("DRUNK_SHAKE", (fParam3 * Global_36956));
	}
	if (unk_0x5400DC5FAEBF30F0(uParam4))
	{
		unk_0x24144CB94D75CE91(uParam4, "DRUNK_SHAKE", fParam3);
		Global_36958 = uParam4;
	}
	else
	{
		Global_36958 = 0;
	}
	Global_36957 = 1;
	iVar0 = unk_0x5AFB8ED811F05E4D();
	Global_36959 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_36959 = -1;
		}
	}
	Global_36960 = uParam1;
	Global_36961 = fParam2;
	Global_36963 = fParam3;
	Global_36962 = fParam3;
}

int func_58(int iParam0)
{
	return func_59(iParam0, -1, 1);
}

int func_59(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	iVar0 = func_61(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_49(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_60();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_36768[iVar2 /*5*/] = 0;
	Global_36768[iVar2 /*5*/].f_1 = iParam0;
	Global_36768[iVar2 /*5*/].f_2 = iParam1;
	Global_36768[iVar2 /*5*/].f_3 = iParam1;
	Global_36768[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0x18F7BE9ACB7D08F4())
	{
		Global_36989 = 1;
	}
	Global_36767++;
	return 1;
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36768[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36794[iVar0 /*5*/].f_1)
		{
			return Global_36794[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_62()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_BANG_BANG");
			func_29(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) || func_25(23)) || func_25(21)) || func_25(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0x36FBC59EBBB73044(unk_0x8CFC7D6E1DA5D304());
			break;
		
		case 9:
			func_22("CHEAT_BANG_BANG");
			func_29(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_63()
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_4(14);
			func_29(14, 1);
			func_65();
			break;
		
		case 5:
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if ((((((!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) || func_26()) || func_25(23)) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_GRAVITY_MOON");
			func_29(14, 0);
			unk_0x9BCF5D03D6C8B38D(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_64(int iParam0)
{
	if (unk_0xB03A1684359C50A1(Global_25478, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_14("CHEAT_GRAVITY_MOON");
			unk_0x9BCF5D03D6C8B38D(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_66()
{
	func_85();
	func_79();
	func_78();
	func_77();
	func_76();
	func_75();
	func_74();
	func_72();
	func_71();
	func_70();
	func_67();
}

void func_67()
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_25(23) || func_25(22)) || func_25(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			func_14("CHEAT_GIVE_PARACHUTE");
			unk_0x7D154B840BD03D00(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute"), 1, 1, 1);
			func_4(10);
		}
	}
}

int func_68()
{
	if (iLocal_93)
	{
		iLocal_93 = 0;
		return 0;
	}
	if (func_69(0))
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_70()
{
	int iVar0;
	
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_25(23) || func_25(22)) || func_25(9))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if (unk_0xA41FC657B4BB4148() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304());
			if (iVar0 > 0)
			{
				func_14("CHEAT_WANTED_DOWN");
				unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), (iVar0 - 1), 0);
				func_4(9);
			}
			else
			{
				func_19("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_71()
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_25(23) || func_25(22)) || func_25(8))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if (unk_0xA41FC657B4BB4148() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304());
			if (iVar0 < unk_0xA41FC657B4BB4148())
			{
				unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), iVar0 + 1, 0);
				unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
				func_14("CHEAT_WANTED_UP");
				func_4(8);
			}
			else
			{
				func_19("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_72()
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_25(23) || func_25(22)) || func_25(7)) || func_13(9)) || func_13(10)) || !unk_0xA771D68C3A0B2508(func_73())) || !unk_0xEFE360F1E6611EE8(unk_0x8CFC7D6E1DA5D304()))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xD0A19BCBC3DB58DC(unk_0x8CFC7D6E1DA5D304(), 1);
			func_14("CHEAT_SPECIAL_ABILITY");
			func_4(7);
		}
	}
}

int func_73()
{
	return unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4());
}

void func_74()
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_25(23) || func_25(22)) || func_25(6)) || func_13(9)) || func_13(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			func_14("CHEAT_HEALTH_ARMOR");
			func_4(6);
			unk_0x874004759C4BE8DC(unk_0x18F7BE9ACB7D08F4(), unk_0x35FCCFE3A385AD85(unk_0x18F7BE9ACB7D08F4()));
			unk_0x35EE08851C326E77(unk_0x18F7BE9ACB7D08F4(), (unk_0xB8E19C2E9962F171(unk_0x8CFC7D6E1DA5D304()) - unk_0x061F295089D77639(unk_0x18F7BE9ACB7D08F4())));
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				iVar0 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
				if (unk_0x31F12808DC47A9E5(iVar0))
				{
					if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
					{
						unk_0x0901CE00CFBB408F(iVar0);
					}
				}
			}
		}
	}
}

void func_75()
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_25(23) || func_25(22)) || func_25(5))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		func_4(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				unk_0x13FC9F2BF3DFD755("EXTRASUNNY");
				unk_0x5E16FDDF59CA03E6();
				func_14("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				unk_0x13FC9F2BF3DFD755("CLEAR");
				unk_0x5E16FDDF59CA03E6();
				func_14("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				unk_0x13FC9F2BF3DFD755("CLOUDS");
				unk_0x5E16FDDF59CA03E6();
				func_14("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				unk_0x13FC9F2BF3DFD755("SMOG");
				unk_0x5E16FDDF59CA03E6();
				func_14("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				unk_0x13FC9F2BF3DFD755("OVERCAST");
				unk_0x5E16FDDF59CA03E6();
				func_14("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				unk_0x13FC9F2BF3DFD755("RAIN");
				unk_0x5E16FDDF59CA03E6();
				func_14("CHEAT_ADVANCE_WEATHER_RAIN");
				func_29(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				unk_0x13FC9F2BF3DFD755("THUNDER");
				unk_0x5E16FDDF59CA03E6();
				func_14("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				unk_0x13FC9F2BF3DFD755("CLEARING");
				unk_0x5E16FDDF59CA03E6();
				func_14("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				unk_0x13FC9F2BF3DFD755("XMAS");
				unk_0x5E16FDDF59CA03E6();
				func_14("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_76()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_25(23) || func_25(22)) || func_25(4))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		func_14("CHEAT_GIVE_WEAPONS");
		func_4(4);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x8DC604B7C26C3641(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_knife"), -1, 0);
			unk_0x8DC604B7C26C3641(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_smg"), 300, 0);
			unk_0x8DC604B7C26C3641(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_assaultrifle"), 300, 1);
			unk_0x8DC604B7C26C3641(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_pumpshotgun"), 150, 0);
			unk_0x8DC604B7C26C3641(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_sniperrifle"), 30, 0);
			unk_0x8DC604B7C26C3641(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_grenade"), 5, 0);
			unk_0x8DC604B7C26C3641(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_rpg"), 5, 0);
		}
	}
}

void func_77()
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_SWIM");
			func_29(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) || func_25(23)) || func_25(22)) || func_25(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0x71DC200691B821AF(unk_0x8CFC7D6E1DA5D304(), 1.49f);
				unk_0xB31A31E41CB48A91();
			}
			break;
		
		case 9:
			unk_0x71DC200691B821AF(unk_0x8CFC7D6E1DA5D304(), 1f);
			func_22("CHEAT_FAST_SWIM");
			func_29(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_78()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_RUN");
			func_29(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) || unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4())) || func_25(23)) || func_25(22)) || func_25(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0x5EC244BCCF9E2AF3(unk_0x18F7BE9ACB7D08F4()) || (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()) && !unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())))
				{
					unk_0x56A4B1F9D9B3100D(unk_0x8CFC7D6E1DA5D304(), 1.49f);
				}
				else
				{
					unk_0x56A4B1F9D9B3100D(unk_0x8CFC7D6E1DA5D304(), 1f);
				}
				unk_0xB31A31E41CB48A91();
			}
			break;
		
		case 9:
			unk_0x56A4B1F9D9B3100D(unk_0x8CFC7D6E1DA5D304(), 1f);
			func_22("CHEAT_FAST_RUN");
			func_29(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_79()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SLIDEY_CARS");
			func_29(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) || func_25(23)) || func_25(22)) || func_25(1))
			{
				iLocal_48 = 9;
			}
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
				if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
				{
					if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) == unk_0x18F7BE9ACB7D08F4())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!unk_0x74C2FE037DFC8B4A(iLocal_69, 0))
							{
								if (func_80(1))
								{
									unk_0x86F3FD61101564DE(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0x74C2FE037DFC8B4A(iLocal_69, 0))
							{
								unk_0x86F3FD61101564DE(iLocal_69, 0);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_22("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!unk_0x74C2FE037DFC8B4A(iLocal_69, 0))
			{
				unk_0x86F3FD61101564DE(iLocal_69, 0);
				iLocal_69 = 0;
			}
			func_29(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_80(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		uVar0 = unk_0x952F33F151D40D1A();
		if (unk_0x31F12808DC47A9E5(uVar0))
		{
			if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
			{
				iVar1 = unk_0x4F69FBD64CDF125B(iVar0);
				iVar2 = func_7();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0x881022B41FD53CD6(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0x422717A3330EA45D(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0xB6353CAE3EBC0919(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0x9605D2F02FA93911(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0xFCA9C8367E44D3C2(iVar0, "door_dside_r") != -1 || unk_0xFCA9C8367E44D3C2(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0xFCA9C8367E44D3C2(iVar0, "door_dside_r") == -1 || unk_0xFCA9C8367E44D3C2(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0x422717A3330EA45D(iVar1))
					{
						if (unk_0xFCA9C8367E44D3C2(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0xFCA9C8367E44D3C2(iVar0, "seat_dside_r") != -1 || unk_0xFCA9C8367E44D3C2(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0xFCA9C8367E44D3C2(iVar0, "seat_dside_r") == -1 || unk_0xFCA9C8367E44D3C2(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_9(iVar2))
					{
						return 0;
					}
					if (func_83(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0x881022B41FD53CD6(iVar1) && !unk_0x422717A3330EA45D(iVar1))
					{
						return 0;
					}
					if (unk_0x88EA695420CF2150(iVar0))
					{
						return 0;
					}
					uVar4 = unk_0x7677C12E3146DA0A(iVar0, &uVar3);
					if (!unk_0xFAFFA408239A026B(uVar4))
					{
						if (unk_0x6E987D62C8535B6E(uVar4) == unk_0x6E987D62C8535B6E("taxiService"))
						{
							return 0;
						}
					}
					if (func_81(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x31F12808DC47A9E5(uParam0) || !unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_82(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB03A1684359C50A1(Global_104551.f_7199[iVar9], 0))
		{
			if (unk_0x31AAECA8242E34AD(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_82(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_83(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_9(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_84(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_84(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_104551.f_9055.f_99.f_58[128] && !Global_104551.f_9055.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_104551.f_9055.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_104551.f_9055.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_85()
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SUPER_JUMP");
			func_29(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()) || func_25(23)) || func_25(22)) || func_25(0)) || unk_0xFD45636C96407D04())
			{
				iLocal_47 = 9;
				return;
			}
			unk_0x430DF7F239214A56(unk_0x8CFC7D6E1DA5D304());
			unk_0xB05E48165A6F6058(unk_0x18F7BE9ACB7D08F4(), 217, 1);
			break;
		
		case 9:
			func_22("CHEAT_SUPER_JUMP");
			func_29(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_86()
{
	if ((func_109() || iLocal_94 != 0) || func_13(14))
	{
		unk_0x9C7EE7DE7041A3F4(2, 243, 1);
	}
	func_108();
	if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		return;
	}
	if (unk_0x50FC5102E6F4D863(unk_0x18F7BE9ACB7D08F4()))
	{
		return;
	}
	if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		return;
	}
	if (!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
	{
		return;
	}
	if (func_32() || unk_0x51CFE20A158947F4())
	{
		return;
	}
	if (func_107())
	{
		if (!iLocal_92)
		{
			func_106();
			iLocal_92 = 1;
		}
		return;
	}
	iLocal_92 = 0;
	iLocal_93 = 0;
	if ((func_105(988027572, 12) || unk_0x91E54A9D5BAE0AAE(joaat("buzzoff"))) || func_104(20, joaat("buzzard")))
	{
		func_101(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_105(-1134279030, 11) || unk_0x91E54A9D5BAE0AAE(joaat("bandit"))) || func_104(20, joaat("bmx")))
	{
		func_101(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_105(971352167, 10) || unk_0x91E54A9D5BAE0AAE(joaat("holein1"))) || func_104(20, joaat("caddy")))
	{
		func_101(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_105(-269863225, 10) || unk_0x91E54A9D5BAE0AAE(joaat("comet"))) || func_104(20, joaat("comet2")))
	{
		func_101(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_105(458579068, 12) || unk_0x91E54A9D5BAE0AAE(joaat("flyspray"))) || func_104(20, joaat("duster")))
	{
		func_101(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_105(-666513193, 12) || unk_0x91E54A9D5BAE0AAE(joaat("rocket"))) || func_104(20, joaat("pcj")))
	{
		func_101(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_105(-1245984749, 10) || unk_0x91E54A9D5BAE0AAE(joaat("rapidgt"))) || func_104(20, joaat("rapidgt")))
	{
		func_101(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_105(2076774618, 12) || unk_0x91E54A9D5BAE0AAE(joaat("offroad"))) || func_104(20, joaat("sanchez")))
	{
		func_101(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_105(855685457, 9) || unk_0x91E54A9D5BAE0AAE(joaat("vinewood"))) || func_104(20, joaat("stretch")))
	{
		func_101(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_105(-591395876, 12) || unk_0x91E54A9D5BAE0AAE(joaat("barnstorm"))) || func_104(20, joaat("stunt")))
	{
		func_101(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_105(-1399217582, 10) || unk_0x91E54A9D5BAE0AAE(joaat("trashed"))) || func_104(20, joaat("trash")))
	{
		func_101(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_100())
	{
		if ((func_105(-375917581, 10) || unk_0x91E54A9D5BAE0AAE(joaat("extinct"))) || func_104(20, joaat("dodo")))
		{
			func_101(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_105(-2124307881, 10) || unk_0x91E54A9D5BAE0AAE(joaat("deathcar"))) || func_104(20, joaat("dukes2")))
		{
			func_101(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_105(1028964594, 9) || unk_0x91E54A9D5BAE0AAE(joaat("bubbles"))) || func_104(20, joaat("submersible2")))
		{
			func_101(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_105(-393416581, 11) || unk_0x91E54A9D5BAE0AAE(joaat("hoptoit"))) || func_104(0, 0))
	{
		func_99();
	}
	if ((func_105(-296509791, 8) || unk_0x91E54A9D5BAE0AAE(joaat("snowday"))) || func_104(1, 0))
	{
		func_98();
	}
	if ((func_105(1120820643, 7) || unk_0x91E54A9D5BAE0AAE(joaat("catchme"))) || func_104(2, 0))
	{
		func_97();
	}
	if ((func_105(-421458016, 9) || unk_0x91E54A9D5BAE0AAE(joaat("gotgills"))) || func_104(3, 0))
	{
		func_96();
	}
	if ((func_105(372390926, 12) || unk_0x91E54A9D5BAE0AAE(joaat("toolup"))) || func_104(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_105(606506837, 8) || unk_0x91E54A9D5BAE0AAE(joaat("makeitrain"))) || func_104(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_105(453014206, 12) || unk_0x91E54A9D5BAE0AAE(joaat("turtle"))) || func_104(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_105(1773187142, 9) || unk_0x91E54A9D5BAE0AAE(joaat("powerup"))) || func_104(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_105(1173296014, 10) || unk_0x91E54A9D5BAE0AAE(joaat("fugitive"))) || func_104(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_105(-381269753, 10) || unk_0x91E54A9D5BAE0AAE(joaat("lawyerup"))) || func_104(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_105(-2023988698, 11) || unk_0x91E54A9D5BAE0AAE(joaat("skydive"))) || func_104(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_105(-835863906, 12) || unk_0x91E54A9D5BAE0AAE(joaat("highex"))) || func_104(11, 0))
	{
		func_95();
	}
	if ((func_105(1958387485, 12) || unk_0x91E54A9D5BAE0AAE(joaat("incendiary"))) || func_104(12, 0))
	{
		func_94();
	}
	if ((func_105(-903985180, 9) || unk_0x91E54A9D5BAE0AAE(joaat("hothands"))) || func_104(13, 0))
	{
		func_93();
	}
	if ((func_105(2087642905, 9) || unk_0x91E54A9D5BAE0AAE(joaat("floater"))) || func_104(14, 0))
	{
		func_92();
	}
	if ((func_105(1257820019, 10) || unk_0x91E54A9D5BAE0AAE(joaat("painkiller"))) || func_104(15, 0))
	{
		func_91();
	}
	if ((func_105(1540206179, 7) || unk_0x91E54A9D5BAE0AAE(joaat("slowmo"))) || func_104(16, 0))
	{
		func_90();
	}
	if ((func_105(115565392, 16) || unk_0x91E54A9D5BAE0AAE(joaat("skyfall"))) || func_104(17, 0))
	{
		func_89();
	}
	if ((func_105(-1276513277, 8) || unk_0x91E54A9D5BAE0AAE(joaat("liquor"))) || func_104(18, 0))
	{
		func_88();
	}
	if ((func_105(2040433593, 9) || unk_0x91E54A9D5BAE0AAE(joaat("deadeye"))) || func_104(19, 0))
	{
		func_87();
	}
}

void func_87()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(16))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_19("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_88()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(18))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_89()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0xFD45636C96407D04())
	{
		func_19("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_19("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_25(23) || func_25(21)) || func_25(17)) || func_64(0)) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)) || !unk_0xF662B8CF03C92579())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 0)) || unk_0xE7FAF8E78F7D3A73(joaat("respawn_controller")) > 0)
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_90()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(16))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_19("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_91()
{
	struct<3> Var0;
	
	Var0 = { func_17(unk_0x8CFC7D6E1DA5D304()) };
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_25(23) || func_25(21)) || func_25(15)) || Var0.f_2 <= -170f)
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_92()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_25(23) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_93()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(13))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_94()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(12))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_95()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(11))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_96()
{
	if ((((func_25(23) || func_25(22)) || func_25(3)) || func_13(9)) || func_13(10))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_97()
{
	if ((((func_25(23) || func_25(22)) || func_25(2)) || func_13(9)) || func_13(10))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_98()
{
	if ((func_25(23) || func_25(22)) || func_25(1))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_99()
{
	if (((func_25(23) || func_25(22)) || func_25(0)) || unk_0xFD45636C96407D04())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

int func_100()
{
	var uVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0xD51AEB3E72C71D1B())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xD2A9C3F486236CC5(&uVar0, 2);
				unk_0xD2A9C3F486236CC5(&uVar0, 4);
				unk_0xD2A9C3F486236CC5(&uVar0, 6);
				unk_0xD2A9C3F486236CC5(&Global_25, 2);
				unk_0xD2A9C3F486236CC5(&Global_25, 4);
				unk_0xD2A9C3F486236CC5(&Global_25, 6);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x16DC46A28107A94A())
				{
					iVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&iVar0, 0);
					unk_0x167AC4B8CEEB1F11(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143070 == 2)
	{
		return 1;
	}
	else if (Global_143070 == 3)
	{
		return 0;
	}
	if (unk_0x16DC46A28107A94A())
	{
		if (unk_0xB03A1684359C50A1(unk_0x3A75EA627A024B7A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_101(int iParam0, char* sParam1)
{
	if (iLocal_46 == 1)
	{
		if (((((func_13(9) || unk_0xE7FAF8E78F7D3A73(joaat("barry1")) > 0) || unk_0xE7FAF8E78F7D3A73(joaat("tennis")) > 0) || func_25(23)) || func_25(22)) || func_25(20))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_102(iParam0))
		{
			func_19("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_103(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_103(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_103(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_103(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_104551.f_32429[iParam0], iParam1);
}

int func_104(int iParam0, int iParam1)
{
	if (unk_0xB03A1684359C50A1(Global_25480, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_25481)
			{
				unk_0x62148293B793073B(&Global_25480, iParam0);
				iLocal_93 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			unk_0x62148293B793073B(&Global_25480, iParam0);
			iLocal_93 = 1;
			return 1;
		}
	}
	return 0;
}

int func_105(int iParam0, int iParam1)
{
	if (!func_13(14))
	{
		return unk_0x7B5B1A975BA19F2E(iParam0, iParam1);
	}
	return 0;
}

void func_106()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			unk_0x1BEAF0E2DD876AA1(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_107()
{
	if (((Global_92829 == 13 || Global_92829 == 10) || Global_92829 == 11) || Global_92829 == 12)
	{
		return 0;
	}
	return 1;
}

void func_108()
{
	if (func_13(14) || (!unk_0xC8AB6A5E6C1E6613() && iLocal_94 != 0))
	{
		iLocal_94 = unk_0x5AFB8ED811F05E4D();
	}
	if (iLocal_94 != 0)
	{
		if (!func_13(14))
		{
			if ((unk_0x5AFB8ED811F05E4D() - iLocal_94) > 1000)
			{
				iLocal_94 = 0;
			}
		}
	}
}

int func_109()
{
	if (Global_71112)
	{
		return 1;
	}
	else if (Global_55895 && !Global_55901)
	{
		return 1;
	}
	return 0;
}

void func_110()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_92 = 0;
	iLocal_91 = 0;
}

void func_111()
{
	unk_0xE547AF9171AC43A2(0);
	if (iLocal_64 == 5)
	{
		func_35();
	}
	if (iLocal_65 == 5)
	{
		func_44(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		unk_0x3F9FBB0647D763E2(1f);
	}
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (iLocal_62 == 5)
		{
			unk_0x36643EAE6212D16F(unk_0x8CFC7D6E1DA5D304(), 0);
			unk_0x8BA533846256EA8E(unk_0x18F7BE9ACB7D08F4(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		unk_0x56A4B1F9D9B3100D(unk_0x8CFC7D6E1DA5D304(), 1f);
		unk_0x71DC200691B821AF(unk_0x8CFC7D6E1DA5D304(), 1f);
	}
	unk_0x9BCF5D03D6C8B38D(0);
	Global_25478 = 0;
	Global_25477 = 0;
	Global_25479 = 0;
	Global_25480 = 0;
	Global_25482 = 0;
	Global_25481 = 0;
	unk_0x810C5D6462DD69E6();
}

