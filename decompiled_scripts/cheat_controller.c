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
	if (unk_0x78BF2001491914AC(34))
	{
		func_111();
	}
	Global_25467 = 0;
	Global_25466 = 0;
	Global_25468 = 0;
	Global_25469 = 0;
	Global_25471 = 0;
	Global_25470 = 0;
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
			if (unk_0x832CFCEE4BC06D3A())
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
	if (unk_0xA1FC9D7AEA164881(iParam0))
	{
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (unk_0x2137828D03306CAF(iLocal_68))
			{
				if (!unk_0xA9A04898798AE9E6(iLocal_68, 0))
				{
					if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_68, 0))
					{
						Var0 = { unk_0xD1EE0E9FCD74A37B(iLocal_68, 1) };
						fVar3 = unk_0x6DAB28241B34DEED(iLocal_68);
						unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), 1, 0, 0, 1);
						bVar4 = true;
					}
				}
				unk_0xA613FDAC42DBBFAD(&iLocal_68);
			}
			if (!bVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { unk_0x82D9CF397BA8C885(unk_0x2A5EB8B0FE590B91(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0x82D9CF397BA8C885(unk_0x2A5EB8B0FE590B91(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0x82D9CF397BA8C885(unk_0x2A5EB8B0FE590B91(), 0f, 3.5f, 1f) };
				}
				fVar3 = (unk_0x6DAB28241B34DEED(unk_0x2A5EB8B0FE590B91()) + 90f);
			}
			if (func_16(iParam0, Var0, fVar3))
			{
				iLocal_68 = unk_0xE42A511281C9895B(iParam0, Var0, fVar3, 0, 1, 0);
				unk_0x07C140F31B3CDAFA(iLocal_68, 1084227584);
				unk_0xFD213087BC4CC3B3(iParam0);
				unk_0xFECCD8AF38671477(&iLocal_68);
				func_14(sLocal_70);
				func_4(20);
			}
			else
			{
				unk_0xFD213087BC4CC3B3(iParam0);
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
		unk_0xF6082E2ADA1C795B(&Global_25468, iParam0);
		Global_25471 = 1;
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
	
	unk_0xC225A90A8DE0D96B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xC94674712BED1A82(iParam0, iVar0, 1);
}

int func_7()
{
	func_8();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_8()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_11(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_10(unk_0x2A5EB8B0FE590B91());
			if (func_9(iVar0) && (!func_13(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_9(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
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
		return Global_103236.f_27831[iParam0 /*29*/];
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
		if (func_13(14) && unk_0x0B21CC5276C2CE1B())
		{
			if (unk_0x35302CD5A5D37EED(sParam0, "CHEAT_SUPER_JUMP") && unk_0x832CFCEE4BC06D3A())
			{
				return 0;
			}
			if ((unk_0x35302CD5A5D37EED(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0)) && unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
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
	return Global_35813 == iParam0;
}

void func_14(char* sParam0)
{
	if (func_12(""))
	{
	}
	else
	{
		unk_0xD05F099FEF4ED10A("CHEAT_ACTIVATED");
		unk_0xD5DA3EC5EEC78358(sParam0);
		func_15(unk_0xEF731ED745A201C5(0, 1));
		unk_0x13C93910A93FACF9(sParam0);
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
	
	unk_0xDE3E0D9E2E663E9A(iParam0, &Var28, &Var31);
	Var34.f_0 = (unk_0x3FEF699D13BCC798((Var31.f_0 - Var28.f_0)) / 2f);
	Var34.f_1 = (unk_0x3FEF699D13BCC798((Var31.f_1 - Var28.f_1)) / 2f);
	Var34.f_2 = (unk_0x3FEF699D13BCC798((Var31.f_2 - Var28.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0xEBB6A451E594E1A8(Param1, fParam4, -Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[2 /*3*/] = { unk_0xEBB6A451E594E1A8(Param1, fParam4, Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[3 /*3*/] = { unk_0xEBB6A451E594E1A8(Param1, fParam4, Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[4 /*3*/] = { unk_0xEBB6A451E594E1A8(Param1, fParam4, -Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[5 /*3*/] = { unk_0xEBB6A451E594E1A8(Param1, fParam4, -Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[6 /*3*/] = { unk_0xEBB6A451E594E1A8(Param1, fParam4, Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[7 /*3*/] = { unk_0xEBB6A451E594E1A8(Param1, fParam4, Var34.f_0, Var34.f_1, Var34.f_2) };
	Var0[8 /*3*/] = { unk_0xEBB6A451E594E1A8(Param1, fParam4, -Var34.f_0, Var34.f_1, Var34.f_2) };
	if (!unk_0xF079EF2C4FF76DFD(Param1))
	{
		return 0;
	}
	uVar50 = unk_0x298E7867742249EF(func_17(unk_0x0FFED3E94261A832()) + Vector(1f, 0f, 0f), Param1, 87, unk_0x2A5EB8B0FE590B91(), 0);
	unk_0x4021570E17CB0020(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar44 = unk_0x298E7867742249EF(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0x2A5EB8B0FE590B91(), 0);
	unk_0x4021570E17CB0020(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar45 = unk_0x298E7867742249EF(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0x2A5EB8B0FE590B91(), 0);
	unk_0x4021570E17CB0020(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar46 = unk_0x298E7867742249EF(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0x2A5EB8B0FE590B91(), 0);
	unk_0x4021570E17CB0020(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar47 = unk_0x298E7867742249EF(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0x2A5EB8B0FE590B91(), 0);
	unk_0x4021570E17CB0020(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar48 = unk_0x298E7867742249EF(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0x2A5EB8B0FE590B91(), 0);
	unk_0x4021570E17CB0020(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar49 = unk_0x298E7867742249EF(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0x2A5EB8B0FE590B91(), 0);
	unk_0x4021570E17CB0020(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_17(var uParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(uParam0), 0);
}

void func_18(int iParam0)
{
	if (unk_0x818F50CBEC587879(uParam0))
	{
		unk_0x0F39DF6675B2333E(uParam0);
		if (unk_0xA1FC9D7AEA164881(uParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_19(char* sParam0)
{
	if (!func_13(14))
	{
		unk_0xD05F099FEF4ED10A("CHEAT_DENIED");
		unk_0xD5DA3EC5EEC78358(sParam0);
		func_15(unk_0xEF731ED745A201C5(0, 1));
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
			if ((((!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) || func_26()) || func_25(23)) || func_25(21)) || func_25(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_23();
			break;
		
		case 9:
			func_22("CHEAT_AIM_SLOW_MO");
			func_29(19, 0);
			unk_0x27EB3C87BA9CA1FD(1f);
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
		unk_0xD05F099FEF4ED10A("CHEAT_DEACTIVATED");
		unk_0xD5DA3EC5EEC78358(sParam0);
		func_15(unk_0xEF731ED745A201C5(0, 1));
	}
}

void func_23()
{
	if (unk_0xC212BF73836863E3(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0x83F6A1E4E653AD75(2, 25))
		{
			if (func_24(unk_0x2A5EB8B0FE590B91()) != joaat("weapon_unarmed") && func_24(unk_0x2A5EB8B0FE590B91()) != joaat("object"))
			{
				unk_0x27EB3C87BA9CA1FD(fLocal_78);
			}
			else
			{
				unk_0x27EB3C87BA9CA1FD(1f);
			}
		}
		else
		{
			unk_0x27EB3C87BA9CA1FD(1f);
		}
	}
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0xE3B6C923999B844E(iParam0, &uVar0, 1);
	return uVar0;
}

int func_25(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_25466, iParam0))
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
	return Global_103236.f_8866.f_99.f_58[iParam0];
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
		unk_0xF6082E2ADA1C795B(&Global_25467, iParam0);
		func_4(iParam0);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_25467, iParam0);
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
			unk_0x4E6996123FABDB93(2, 37, 1);
			unk_0x4E6996123FABDB93(2, 19, 1);
			if ((((((((!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) || func_26()) || func_32()) || func_31(1)) || unk_0xBA36AFDE947F5C56(2, 37)) || unk_0xBA36AFDE947F5C56(2, 19)) || func_25(23)) || func_25(21)) || func_25(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			unk_0x4E6996123FABDB93(2, 37, 1);
			unk_0x4E6996123FABDB93(2, 19, 1);
			func_22("CHEAT_SLOW_MO");
			func_29(16, 0);
			iLocal_76 = 0;
			unk_0x27EB3C87BA9CA1FD(1f);
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
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_32()
{
	if (!unk_0x591AF4C50B46E014())
	{
		return Global_89400.f_44 == 1;
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
			unk_0x27EB3C87BA9CA1FD(0.6f);
			break;
		
		case 2:
			func_14("CHEAT_SLOW_MO2");
			unk_0x27EB3C87BA9CA1FD(0.4f);
			break;
		
		case 3:
			func_14("CHEAT_SLOW_MO3");
			unk_0x27EB3C87BA9CA1FD(0.2f);
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
			unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), 1);
			unk_0x1EF72C87138AD63D(unk_0x0FFED3E94261A832(), 1);
			unk_0x9C27A9366AD7DE0B(unk_0x2A5EB8B0FE590B91(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x0013D519C885E60B(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute"), 1, 0, 1);
			Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
			uVar3 = unk_0x6DAB28241B34DEED(unk_0x2A5EB8B0FE590B91());
			unk_0xE423CA97BB7EA540(Var0, &fVar4, 0);
			fVar4 = (fVar4 + 500f);
			unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), Var0.f_0, Var0.f_1, fVar4, 1, 0, 0, 1);
			unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), uVar3);
			iLocal_72 = unk_0x3732B96D7A1859B4();
			unk_0x5BFE0E837BA0AF60(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_36(1000, iLocal_72))
			{
				unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), 0);
				unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), 1, 0);
				iLocal_72 = unk_0x3732B96D7A1859B4();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_36(1000, iLocal_72))
			{
				unk_0x4E6996123FABDB93(0, 144, 1);
				unk_0x4E6996123FABDB93(0, 149, 1);
				if (func_7() == 0)
				{
					unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 9, 0, 0, 0);
				}
				else
				{
					unk_0x6CA29A70250F194F(unk_0x2A5EB8B0FE590B91(), 8, 0, 0, 0);
				}
				unk_0x9B0467159FAB9F56(250);
				iLocal_72 = unk_0x3732B96D7A1859B4();
				func_14("CHEAT_SKYFALL");
				unk_0x34B2EF6CD6495C38(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) || func_26()) || func_25(23)) || func_25(21)) || func_25(17))
			{
				iLocal_64 = 9;
				break;
			}
			unk_0x4E6996123FABDB93(0, 144, 1);
			unk_0x47BFFB0507046AE3(2);
			if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0x748D711A16EB2994(unk_0x2A5EB8B0FE590B91(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0xBB164D22A8F5D5D1(unk_0x2A5EB8B0FE590B91()))
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
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0x060F3ECCAB5F35C0(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		unk_0x1EF72C87138AD63D(unk_0x0FFED3E94261A832(), 0);
		unk_0x9C27A9366AD7DE0B(unk_0x2A5EB8B0FE590B91(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	unk_0x34B2EF6CD6495C38(0);
}

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x3732B96D7A1859B4();
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
			iLocal_74 = unk_0x3732B96D7A1859B4();
			unk_0x1EF72C87138AD63D(unk_0x0FFED3E94261A832(), 1);
			unk_0x9C27A9366AD7DE0B(unk_0x2A5EB8B0FE590B91(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) || unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				iLocal_62 = 9;
				return;
			}
			Var0 = { func_17(unk_0x0FFED3E94261A832()) };
			if (((((func_26() || func_32()) || func_25(23)) || func_25(21)) || func_25(15)) || Var0.f_2 <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (unk_0x3732B96D7A1859B4() - iLocal_74);
			if (unk_0x09952BA662A7629B(joaat("appinternet")) == 0)
			{
				func_38((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			unk_0x1EF72C87138AD63D(unk_0x0FFED3E94261A832(), 1);
			unk_0x9C27A9366AD7DE0B(unk_0x2A5EB8B0FE590B91(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x182CEEC831F7C489();
			break;
		
		case 9:
			func_22("CHEAT_INVINCIBILITY_OFF");
			func_29(15, 0);
			iLocal_62 = 1;
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0x1EF72C87138AD63D(unk_0x0FFED3E94261A832(), 0);
				unk_0x9C27A9366AD7DE0B(unk_0x2A5EB8B0FE590B91(), 0, 0, 0, 0, 0, 0, 0, 0);
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
		Global_1353013.f_1 = 1;
		func_39(7, iVar0);
		Global_1353013.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1353013.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_4366.f_172[iVar0] = iParam2;
		Global_1353013.f_4366.f_216[iVar0] = iParam3;
		Global_1353013.f_4366.f_183[iVar0] = iParam4;
		Global_1353013.f_4366.f_194[iVar0] = iParam5;
		Global_1353013.f_4366.f_249[iVar0] = iParam6;
		Global_1353013.f_4366.f_260[iVar0] = iParam7;
		Global_1353013.f_4366.f_205[iVar0] = iParam8;
		Global_1353013.f_4366.f_314[iVar0] = iParam9;
		Global_1353013.f_4366.f_325[iVar0] = iParam10;
		Global_1353013.f_4366.f_357[iVar0] = iParam11;
		Global_1353013.f_4366.f_238[iVar0] = iParam12;
		Global_1353013.f_4366.f_271[iVar0] = iParam13;
		Global_1353013.f_4366.f_368[iVar0] = iParam14;
		Global_1353013.f_4366.f_379[iVar0] = iParam15;
		Global_1353013.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_39(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1353013.f_5941[iParam0]), iParam1);
}

bool func_40(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1353013.f_5941[iParam0], iParam1);
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
			if (((!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) || func_25(23)) || func_25(21)) || func_25(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0x2B2A7F3EB047D928(unk_0x0FFED3E94261A832());
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
			if ((((!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) || func_25(23)) || func_25(21)) || func_25(13)) || func_26())
			{
				iLocal_60 = 9;
				return;
			}
			unk_0x949F0983CFD42373(unk_0x0FFED3E94261A832());
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
			func_58(unk_0x2A5EB8B0FE590B91());
			func_56(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_26() || !unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832())) || func_25(23)) || func_25(21)) || func_25(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_DRUNK");
			func_29(18, 0);
			func_47(unk_0x2A5EB8B0FE590B91());
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
	unk_0x9BCFE282549F0ABE(0f);
	unk_0xCA4458A7A267D61B(0f);
	unk_0xFAF41D405DD88AC2(0f);
	unk_0x7FAF8FA8166834A7(1);
	unk_0x22E814CEA7509B2E(0f);
	unk_0x32F2CFA05392F66B(1);
	unk_0xA007078AA477CB5C(0);
	if (unk_0x8BEECCAAE312A5BA("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x40F160C3038ECAF5("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x58478145CAF8429C(&Global_36922))
	{
		if (unk_0x8BEECCAAE312A5BA(&Global_36922))
		{
			unk_0x40F160C3038ECAF5(&Global_36922);
		}
	}
	if (unk_0x9FA769EB6C3BCCE4(Global_36911))
	{
		if (unk_0x1CD1490177850A31(Global_36911))
		{
			unk_0x16EC2DD3A07898B9(Global_36911, 0f);
			unk_0xBE51678DF2A99288(Global_36911, 1);
		}
	}
	if (unk_0x4055CAB247B1B43C())
	{
		unk_0xA701CFE8692AB746(0);
	}
	if (bParam0)
	{
		if (unk_0x134E720A17978737() != -1 || unk_0xE5A09C695A824354() != -1)
		{
			unk_0x64418B7144C47685();
		}
		else if (unk_0x0AFBA1AD6DC1C540())
		{
			unk_0x64418B7144C47685();
		}
	}
	Global_36917 = 0f;
	StringCopy(&Global_36918, "", 16);
	StringCopy(&Global_36922, "", 64);
	StringCopy(&Global_36938, "", 16);
	func_45();
}

void func_45()
{
	Global_36910 = 0;
	Global_36911 = 0;
	Global_36912 = 0;
	Global_36913 = 30000;
	Global_36914 = 0f;
	Global_36916 = 0f;
	Global_36915 = 0f;
	Global_36917 = 0f;
	StringCopy(&Global_36918, "", 16);
}

void func_46(int iParam0)
{
	int iVar0;
	
	if (!Global_36910)
	{
		return;
	}
	iVar0 = unk_0x3732B96D7A1859B4();
	Global_36912 = (iVar0 + iParam0);
	Global_36913 = iParam0;
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
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36747[iVar0 /*5*/];
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
	if (!Global_36721[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36721[iParam0 /*5*/].f_1 == unk_0x2A5EB8B0FE590B91())
		{
			Global_36942 = 0;
		}
	}
	Global_36721[iParam0 /*5*/] = 13;
	Global_36721[iParam0 /*5*/].f_1 = 0;
	Global_36721[iParam0 /*5*/].f_2 = 0;
	Global_36721[iParam0 /*5*/].f_3 = 0;
	Global_36721[iParam0 /*5*/].f_4 = 0;
	Global_36720 = (Global_36720 - 1);
	if (Global_36720 < 0)
	{
		Global_36720 = 0;
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36721[iVar0 /*5*/].f_1 == iParam0)
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
	Global_36828[iVar0 /*5*/] = iParam0;
	Global_36828[iVar0 /*5*/].f_1 = iParam1;
	Global_36828[iVar0 /*5*/].f_2 = iParam2;
	Global_36828[iVar0 /*5*/].f_3 = iParam3;
	Global_36828[iVar0 /*5*/].f_4 = iParam4;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36828[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_36828[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36828[iVar0 /*5*/])
			{
				if (iParam1 == Global_36828[iVar0 /*5*/].f_1)
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
		if (!Global_36747[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36747[iVar0 /*5*/].f_1)
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
	if (Global_36910)
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
	if (!unk_0xCD81A9A454D90566())
	{
		unk_0xCDAA71A14E257763("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0x9EF2C9B751261C7F())
	{
		unk_0x35774D786BF69A68("DRUNK_SHAKE", (fParam3 * Global_36909));
	}
	if (unk_0x9FA769EB6C3BCCE4(uParam4))
	{
		unk_0x1EB7361ECC8DAFEE(uParam4, "DRUNK_SHAKE", fParam3);
		Global_36911 = uParam4;
	}
	else
	{
		Global_36911 = 0;
	}
	Global_36910 = 1;
	iVar0 = unk_0x3732B96D7A1859B4();
	Global_36912 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_36912 = -1;
		}
	}
	Global_36913 = uParam1;
	Global_36914 = fParam2;
	Global_36916 = fParam3;
	Global_36915 = fParam3;
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
	if (!unk_0x2137828D03306CAF(iParam0))
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
	Global_36721[iVar2 /*5*/] = 0;
	Global_36721[iVar2 /*5*/].f_1 = iParam0;
	Global_36721[iVar2 /*5*/].f_2 = iParam1;
	Global_36721[iVar2 /*5*/].f_3 = iParam1;
	Global_36721[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0x2A5EB8B0FE590B91())
	{
		Global_36942 = 1;
	}
	Global_36720++;
	return 1;
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36721[iVar0 /*5*/] == 13)
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
		if (iParam0 == Global_36747[iVar0 /*5*/].f_1)
		{
			return Global_36747[iVar0 /*5*/];
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
			if (((!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) || func_25(23)) || func_25(21)) || func_25(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0x8C1481C73FD5FA61(unk_0x0FFED3E94261A832());
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
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if ((((((!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) || func_26()) || func_25(23)) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
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
			unk_0x84DFDC0E6ACD768F(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_64(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_25467, iParam0))
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
			unk_0x84DFDC0E6ACD768F(1);
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			func_14("CHEAT_GIVE_PARACHUTE");
			unk_0x0013D519C885E60B(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute"), 1, 1, 1);
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
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (unk_0xA0F7964BC7FD74A9() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832());
			if (iVar0 > 0)
			{
				func_14("CHEAT_WANTED_DOWN");
				unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), (iVar0 - 1), 0);
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (unk_0xA0F7964BC7FD74A9() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832());
			if (iVar0 < unk_0xA0F7964BC7FD74A9())
			{
				unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), iVar0 + 1, 0);
				unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
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
		if ((((((func_25(23) || func_25(22)) || func_25(7)) || func_13(9)) || func_13(10)) || !unk_0x351243B4CA3786F3(func_73())) || !unk_0x535F2C898124860D(unk_0x0FFED3E94261A832()))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			unk_0xA05830EF1E69B13F(unk_0x0FFED3E94261A832(), 1);
			func_14("CHEAT_SPECIAL_ABILITY");
			func_4(7);
		}
	}
}

int func_73()
{
	return unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91());
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			func_14("CHEAT_HEALTH_ARMOR");
			func_4(6);
			unk_0x67E5DE1657F60AC6(unk_0x2A5EB8B0FE590B91(), unk_0xDA6700D9B6C7E71A(unk_0x2A5EB8B0FE590B91()));
			unk_0x49835DFB534A47F4(unk_0x2A5EB8B0FE590B91(), (unk_0x4909A820576A43AD(unk_0x0FFED3E94261A832()) - unk_0xBF0FA17FFD0865A8(unk_0x2A5EB8B0FE590B91())));
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				iVar0 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
				if (unk_0x2137828D03306CAF(iVar0))
				{
					if (!unk_0xA9A04898798AE9E6(iVar0, 0))
					{
						unk_0x1FD7155AA0D91CFA(iVar0);
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
				unk_0xA7E3C6521C8E8DD8("EXTRASUNNY");
				unk_0xB50BDA7FABF1A5DC();
				func_14("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				unk_0xA7E3C6521C8E8DD8("CLEAR");
				unk_0xB50BDA7FABF1A5DC();
				func_14("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				unk_0xA7E3C6521C8E8DD8("CLOUDS");
				unk_0xB50BDA7FABF1A5DC();
				func_14("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				unk_0xA7E3C6521C8E8DD8("SMOG");
				unk_0xB50BDA7FABF1A5DC();
				func_14("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				unk_0xA7E3C6521C8E8DD8("OVERCAST");
				unk_0xB50BDA7FABF1A5DC();
				func_14("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				unk_0xA7E3C6521C8E8DD8("RAIN");
				unk_0xB50BDA7FABF1A5DC();
				func_14("CHEAT_ADVANCE_WEATHER_RAIN");
				func_29(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				unk_0xA7E3C6521C8E8DD8("THUNDER");
				unk_0xB50BDA7FABF1A5DC();
				func_14("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				unk_0xA7E3C6521C8E8DD8("CLEARING");
				unk_0xB50BDA7FABF1A5DC();
				func_14("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				unk_0xA7E3C6521C8E8DD8("XMAS");
				unk_0xB50BDA7FABF1A5DC();
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
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			unk_0x64B11F881078C75D(unk_0x2A5EB8B0FE590B91(), joaat("weapon_knife"), -1, 0);
			unk_0x64B11F881078C75D(unk_0x2A5EB8B0FE590B91(), joaat("weapon_smg"), 300, 0);
			unk_0x64B11F881078C75D(unk_0x2A5EB8B0FE590B91(), joaat("weapon_assaultrifle"), 300, 1);
			unk_0x64B11F881078C75D(unk_0x2A5EB8B0FE590B91(), joaat("weapon_pumpshotgun"), 150, 0);
			unk_0x64B11F881078C75D(unk_0x2A5EB8B0FE590B91(), joaat("weapon_sniperrifle"), 30, 0);
			unk_0x64B11F881078C75D(unk_0x2A5EB8B0FE590B91(), joaat("weapon_grenade"), 5, 0);
			unk_0x64B11F881078C75D(unk_0x2A5EB8B0FE590B91(), joaat("weapon_rpg"), 5, 0);
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
			if (((!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) || func_25(23)) || func_25(22)) || func_25(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				unk_0xC0C05E568E52651C(unk_0x0FFED3E94261A832(), 1.49f);
				unk_0x182CEEC831F7C489();
			}
			break;
		
		case 9:
			unk_0xC0C05E568E52651C(unk_0x0FFED3E94261A832(), 1f);
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
			if ((((!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) || unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91())) || func_25(23)) || func_25(22)) || func_25(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (unk_0x36BFC06926D3DFBC(unk_0x2A5EB8B0FE590B91()) || (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()) && !unk_0xF5A478192BF88D01(unk_0x2A5EB8B0FE590B91())))
				{
					unk_0x7159933CC2049EE6(unk_0x0FFED3E94261A832(), 1.49f);
				}
				else
				{
					unk_0x7159933CC2049EE6(unk_0x0FFED3E94261A832(), 1f);
				}
				unk_0x182CEEC831F7C489();
			}
			break;
		
		case 9:
			unk_0x7159933CC2049EE6(unk_0x0FFED3E94261A832(), 1f);
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
			if (((!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) || func_25(23)) || func_25(22)) || func_25(1))
			{
				iLocal_48 = 9;
			}
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
				if (!unk_0xA9A04898798AE9E6(iVar0, 0))
				{
					if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) == unk_0x2A5EB8B0FE590B91())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!unk_0xA9A04898798AE9E6(iLocal_69, 0))
							{
								if (func_80(1))
								{
									unk_0x0C84D8D8586A5A89(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!unk_0xA9A04898798AE9E6(iLocal_69, 0))
							{
								unk_0x0C84D8D8586A5A89(iLocal_69, 0);
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
			if (!unk_0xA9A04898798AE9E6(iLocal_69, 0))
			{
				unk_0x0C84D8D8586A5A89(iLocal_69, 0);
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
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		uVar0 = unk_0x19D9DFABC3C7D219();
		if (unk_0x2137828D03306CAF(uVar0))
		{
			if (unk_0x7FAC45D56235AB39(iVar0, 0))
			{
				iVar1 = unk_0xD3B21CE53AA7BE51(iVar0);
				iVar2 = func_7();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0x6CB676485E7724F8(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0x4BD9974FDDE2D1EC(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0x0F93427D94EAEAA2(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0xC6B6C45D0DE76B0B(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0x6EB9FFF630189D64(iVar0, "door_dside_r") != -1 || unk_0x6EB9FFF630189D64(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0x6EB9FFF630189D64(iVar0, "door_dside_r") == -1 || unk_0x6EB9FFF630189D64(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0x4BD9974FDDE2D1EC(iVar1))
					{
						if (unk_0x6EB9FFF630189D64(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0x6EB9FFF630189D64(iVar0, "seat_dside_r") != -1 || unk_0x6EB9FFF630189D64(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0x6EB9FFF630189D64(iVar0, "seat_dside_r") == -1 || unk_0x6EB9FFF630189D64(iVar0, "seat_pside_r") == -1)
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
					if (!unk_0x6CB676485E7724F8(iVar1) && !unk_0x4BD9974FDDE2D1EC(iVar1))
					{
						return 0;
					}
					if (unk_0xD540D62327324842(iVar0))
					{
						return 0;
					}
					uVar4 = unk_0xF995FC030D2E2345(iVar0, &uVar3);
					if (!unk_0x58478145CAF8429C(uVar4))
					{
						if (unk_0xCAEDBF30E3EA14FC(uVar4) == unk_0xCAEDBF30E3EA14FC("taxiService"))
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
	
	if (!unk_0x2137828D03306CAF(uParam0) || !unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_82(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xAA4F14DA15DB0B51(Global_103236.f_7010[iVar9], 0))
		{
			if (unk_0x62B2A00573987368(&sVar1, iParam0))
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
			if (Global_103236.f_8866.f_99.f_58[128] && !Global_103236.f_8866.f_99.f_58[131])
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
					if (Global_103236.f_8866.f_99.f_58[119])
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
			else if (Global_103236.f_8866.f_99.f_58[118])
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
			if ((((!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()) || func_25(23)) || func_25(22)) || func_25(0)) || unk_0x832CFCEE4BC06D3A())
			{
				iLocal_47 = 9;
				return;
			}
			unk_0x74F40F6087D3ECE6(unk_0x0FFED3E94261A832());
			unk_0x3EFE40733EFB6649(unk_0x2A5EB8B0FE590B91(), 217, 1);
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
		unk_0x4E6996123FABDB93(2, 243, 1);
	}
	func_108();
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return;
	}
	if (unk_0xB008BF4D43D33511(unk_0x2A5EB8B0FE590B91()))
	{
		return;
	}
	if (!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		return;
	}
	if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
	{
		return;
	}
	if (func_32() || unk_0x0AFBA1AD6DC1C540())
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
	if ((func_105(988027572, 12) || unk_0x9D1AB08117834211(joaat("buzzoff"))) || func_104(20, joaat("buzzard")))
	{
		func_101(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_105(-1134279030, 11) || unk_0x9D1AB08117834211(joaat("bandit"))) || func_104(20, joaat("bmx")))
	{
		func_101(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_105(971352167, 10) || unk_0x9D1AB08117834211(joaat("holein1"))) || func_104(20, joaat("caddy")))
	{
		func_101(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_105(-269863225, 10) || unk_0x9D1AB08117834211(joaat("comet"))) || func_104(20, joaat("comet2")))
	{
		func_101(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_105(458579068, 12) || unk_0x9D1AB08117834211(joaat("flyspray"))) || func_104(20, joaat("duster")))
	{
		func_101(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_105(-666513193, 12) || unk_0x9D1AB08117834211(joaat("rocket"))) || func_104(20, joaat("pcj")))
	{
		func_101(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_105(-1245984749, 10) || unk_0x9D1AB08117834211(joaat("rapidgt"))) || func_104(20, joaat("rapidgt")))
	{
		func_101(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_105(2076774618, 12) || unk_0x9D1AB08117834211(joaat("offroad"))) || func_104(20, joaat("sanchez")))
	{
		func_101(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_105(855685457, 9) || unk_0x9D1AB08117834211(joaat("vinewood"))) || func_104(20, joaat("stretch")))
	{
		func_101(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_105(-591395876, 12) || unk_0x9D1AB08117834211(joaat("barnstorm"))) || func_104(20, joaat("stunt")))
	{
		func_101(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_105(-1399217582, 10) || unk_0x9D1AB08117834211(joaat("trashed"))) || func_104(20, joaat("trash")))
	{
		func_101(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_100())
	{
		if ((func_105(-375917581, 10) || unk_0x9D1AB08117834211(joaat("extinct"))) || func_104(20, joaat("dodo")))
		{
			func_101(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_105(-2124307881, 10) || unk_0x9D1AB08117834211(joaat("deathcar"))) || func_104(20, joaat("dukes2")))
		{
			func_101(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_105(1028964594, 9) || unk_0x9D1AB08117834211(joaat("bubbles"))) || func_104(20, joaat("submersible2")))
		{
			func_101(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_105(-393416581, 11) || unk_0x9D1AB08117834211(joaat("hoptoit"))) || func_104(0, 0))
	{
		func_99();
	}
	if ((func_105(-296509791, 8) || unk_0x9D1AB08117834211(joaat("snowday"))) || func_104(1, 0))
	{
		func_98();
	}
	if ((func_105(1120820643, 7) || unk_0x9D1AB08117834211(joaat("catchme"))) || func_104(2, 0))
	{
		func_97();
	}
	if ((func_105(-421458016, 9) || unk_0x9D1AB08117834211(joaat("gotgills"))) || func_104(3, 0))
	{
		func_96();
	}
	if ((func_105(372390926, 12) || unk_0x9D1AB08117834211(joaat("toolup"))) || func_104(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_105(606506837, 8) || unk_0x9D1AB08117834211(joaat("makeitrain"))) || func_104(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_105(453014206, 12) || unk_0x9D1AB08117834211(joaat("turtle"))) || func_104(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_105(1773187142, 9) || unk_0x9D1AB08117834211(joaat("powerup"))) || func_104(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_105(1173296014, 10) || unk_0x9D1AB08117834211(joaat("fugitive"))) || func_104(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_105(-381269753, 10) || unk_0x9D1AB08117834211(joaat("lawyerup"))) || func_104(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_105(-2023988698, 11) || unk_0x9D1AB08117834211(joaat("skydive"))) || func_104(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_105(-835863906, 12) || unk_0x9D1AB08117834211(joaat("highex"))) || func_104(11, 0))
	{
		func_95();
	}
	if ((func_105(1958387485, 12) || unk_0x9D1AB08117834211(joaat("incendiary"))) || func_104(12, 0))
	{
		func_94();
	}
	if ((func_105(-903985180, 9) || unk_0x9D1AB08117834211(joaat("hothands"))) || func_104(13, 0))
	{
		func_93();
	}
	if ((func_105(2087642905, 9) || unk_0x9D1AB08117834211(joaat("floater"))) || func_104(14, 0))
	{
		func_92();
	}
	if ((func_105(1257820019, 10) || unk_0x9D1AB08117834211(joaat("painkiller"))) || func_104(15, 0))
	{
		func_91();
	}
	if ((func_105(1540206179, 7) || unk_0x9D1AB08117834211(joaat("slowmo"))) || func_104(16, 0))
	{
		func_90();
	}
	if ((func_105(115565392, 16) || unk_0x9D1AB08117834211(joaat("skyfall"))) || func_104(17, 0))
	{
		func_89();
	}
	if ((func_105(-1276513277, 8) || unk_0x9D1AB08117834211(joaat("liquor"))) || func_104(18, 0))
	{
		func_88();
	}
	if ((func_105(2040433593, 9) || unk_0x9D1AB08117834211(joaat("deadeye"))) || func_104(19, 0))
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
	if (unk_0x832CFCEE4BC06D3A())
	{
		func_19("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_19("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_25(23) || func_25(21)) || func_25(17)) || func_64(0)) || unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0)) || !unk_0xC30ED45C83B62BDA())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()) || unk_0xA3625C1BC5E50C51(unk_0x0FFED3E94261A832(), 0)) || unk_0x09952BA662A7629B(joaat("respawn_controller")) > 0)
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
	
	Var0 = { func_17(unk_0x0FFED3E94261A832()) };
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
	if ((((func_25(23) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
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
	if (((func_25(23) || func_25(22)) || func_25(0)) || unk_0x832CFCEE4BC06D3A())
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
	
	if (unk_0x473DD4DAC8F55B34())
	{
		if (unk_0x5D806CF6D2796CC3())
		{
			if (unk_0x103C975BDE64E3C6())
			{
				unk_0xC225A90A8DE0D96B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF6082E2ADA1C795B(&uVar0, 2);
				unk_0xF6082E2ADA1C795B(&uVar0, 4);
				unk_0xF6082E2ADA1C795B(&uVar0, 6);
				unk_0xF6082E2ADA1C795B(&Global_25, 2);
				unk_0xF6082E2ADA1C795B(&Global_25, 4);
				unk_0xF6082E2ADA1C795B(&Global_25, 6);
				unk_0xC94674712BED1A82(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x4ED4E0D471EA6680())
				{
					iVar0 = unk_0x29B06605BA5CF280(866);
					unk_0xF6082E2ADA1C795B(&iVar0, 0);
					unk_0x01D51AAE02B320BA(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_141537 == 2)
	{
		return 1;
	}
	else if (Global_141537 == 3)
	{
		return 0;
	}
	if (unk_0x4ED4E0D471EA6680())
	{
		if (unk_0xAA4F14DA15DB0B51(unk_0x29B06605BA5CF280(866), 0))
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
		if (((((func_13(9) || unk_0x09952BA662A7629B(joaat("barry1")) > 0) || unk_0x09952BA662A7629B(joaat("tennis")) > 0) || func_25(23)) || func_25(22)) || func_25(20))
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
	return unk_0xAA4F14DA15DB0B51(Global_103236.f_32211[iParam0], iParam1);
}

int func_104(int iParam0, int iParam1)
{
	if (unk_0xAA4F14DA15DB0B51(Global_25469, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_25470)
			{
				unk_0x507FE690B1271947(&Global_25469, iParam0);
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
			unk_0x507FE690B1271947(&Global_25469, iParam0);
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
		return unk_0x06A4EE58874D3AE4(iParam0, iParam1);
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
			unk_0xA216C26603EB04E7(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_107()
{
	if (((Global_91777 == 13 || Global_91777 == 10) || Global_91777 == 11) || Global_91777 == 12)
	{
		return 0;
	}
	return 1;
}

void func_108()
{
	if (func_13(14) || (!unk_0x0B21CC5276C2CE1B() && iLocal_94 != 0))
	{
		iLocal_94 = unk_0x3732B96D7A1859B4();
	}
	if (iLocal_94 != 0)
	{
		if (!func_13(14))
		{
			if ((unk_0x3732B96D7A1859B4() - iLocal_94) > 1000)
			{
				iLocal_94 = 0;
			}
		}
	}
}

int func_109()
{
	if (Global_70060)
	{
		return 1;
	}
	else if (Global_55848 && !Global_55854)
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
	unk_0xE4DE57CFB21F9897(0);
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
		unk_0x27EB3C87BA9CA1FD(1f);
	}
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (iLocal_62 == 5)
		{
			unk_0x1EF72C87138AD63D(unk_0x0FFED3E94261A832(), 0);
			unk_0x9C27A9366AD7DE0B(unk_0x2A5EB8B0FE590B91(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		unk_0x7159933CC2049EE6(unk_0x0FFED3E94261A832(), 1f);
		unk_0xC0C05E568E52651C(unk_0x0FFED3E94261A832(), 1f);
	}
	unk_0x84DFDC0E6ACD768F(0);
	Global_25467 = 0;
	Global_25466 = 0;
	Global_25468 = 0;
	Global_25469 = 0;
	Global_25471 = 0;
	Global_25470 = 0;
	unk_0xA232817B0B36F2E5();
}

