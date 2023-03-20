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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
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
	char* sLocal_69 = NULL;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	float fLocal_77 = 0f;
	int iLocal_78 = 0;
	int iLocal_79[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_45 = 1;
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
	iLocal_66 = joaat("bmx");
	iLocal_72 = 300000;
	fLocal_77 = 1f;
	if (unk_0x8D841F1DD3FA555F(34))
	{
		func_111();
	}
	Global_25191 = 0;
	Global_25190 = 0;
	Global_25192 = 0;
	Global_25193 = 0;
	Global_25195 = 0;
	Global_25194 = 0;
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
	func_2(iLocal_66);
}

void func_2(int iParam0)
{
	switch (iLocal_45)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0xABA72188CC7BE86B())
			{
				func_19("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_45 = 1;
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
	if (unk_0x33ACB874CECA2D4B(iParam0))
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_67))
			{
				if (!unk_0x930F8FBB8E9537CC(iLocal_67))
				{
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_67, 0))
					{
						Var0 = { unk_0xB6AE0DAE06D56288(iLocal_67, 1) };
						fVar3 = unk_0x3306AAAFE3B25098(iLocal_67);
						unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), 1, 0, 0, 1);
						bVar4 = true;
					}
				}
				unk_0x5D00E836B6BE8693(&iLocal_67);
			}
			if (!bVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { unk_0xB07F27EC3B05E4EA(unk_0x81873881071CD9FE(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0xB07F27EC3B05E4EA(unk_0x81873881071CD9FE(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0xB07F27EC3B05E4EA(unk_0x81873881071CD9FE(), 0f, 3.5f, 1f) };
				}
				fVar3 = (unk_0x3306AAAFE3B25098(unk_0x81873881071CD9FE()) + 90f);
			}
			if (func_16(iParam0, Var0, fVar3))
			{
				iLocal_67 = unk_0xE00F8DEA9778FC87(iParam0, Var0, fVar3, 0, 1);
				unk_0x5CC9D6711FE01F0D(iLocal_67);
				unk_0x887F4488DA99FD21(iParam0);
				unk_0xE0913C01F5C0CC3D(&iLocal_67);
				func_14(sLocal_69);
				func_4(20);
			}
			else
			{
				unk_0x887F4488DA99FD21(iParam0);
				func_19("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_45 = 1;
		}
	}
}

void func_4(int iParam0)
{
	if (!func_13(14) && !func_12(""))
	{
		unk_0xF3148AAF69AF9CBC(&Global_25192, iParam0);
		Global_25195 = 1;
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
	
	unk_0x85C45034BA638694(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x123B783056E76C4E(iParam0, iVar0, 1);
}

int func_7()
{
	func_8();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_8()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_11(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_10(unk_0x81873881071CD9FE());
			if (func_9(iVar0) && (!func_13(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_9(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_12(char* sParam0)
{
	if (iLocal_93 != 0)
	{
		if (func_13(14) && unk_0xECDEA377354CBDA4())
		{
			if (unk_0xD994929E13CC1ED5(sParam0, "CHEAT_SUPER_JUMP") && unk_0xABA72188CC7BE86B())
			{
				return 0;
			}
			if ((unk_0xD994929E13CC1ED5(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE())) && unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
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
	return Global_35443 == iParam0;
}

void func_14(char* sParam0)
{
	if (func_12(""))
	{
	}
	else
	{
		unk_0x02A6B267064771B1("CHEAT_ACTIVATED");
		unk_0x072D7B028D6C7A05(sParam0);
		func_15(unk_0x267D6EB296008122(0, 1));
		unk_0x8923DC896F0717E6(sParam0);
	}
}

void func_15(int iParam0)
{
	iLocal_79[iLocal_90] = iParam0;
	iLocal_90++;
	if (iLocal_90 >= 10)
	{
		iLocal_90 = 0;
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
	
	unk_0x01C5E7A27762AF21(iParam0, &Var28, &Var31);
	Var34.f_0 = (unk_0xB9AA84B14E04BC20((Var31.f_0 - Var28.f_0)) / 2f);
	Var34.f_1 = (unk_0xB9AA84B14E04BC20((Var31.f_1 - Var28.f_1)) / 2f);
	Var34.f_2 = (unk_0xB9AA84B14E04BC20((Var31.f_2 - Var28.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0x957F1AE07A974C5E(Param1, fParam4, -Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[2 /*3*/] = { unk_0x957F1AE07A974C5E(Param1, fParam4, Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[3 /*3*/] = { unk_0x957F1AE07A974C5E(Param1, fParam4, Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[4 /*3*/] = { unk_0x957F1AE07A974C5E(Param1, fParam4, -Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[5 /*3*/] = { unk_0x957F1AE07A974C5E(Param1, fParam4, -Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[6 /*3*/] = { unk_0x957F1AE07A974C5E(Param1, fParam4, Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[7 /*3*/] = { unk_0x957F1AE07A974C5E(Param1, fParam4, Var34.f_0, Var34.f_1, Var34.f_2) };
	Var0[8 /*3*/] = { unk_0x957F1AE07A974C5E(Param1, fParam4, -Var34.f_0, Var34.f_1, Var34.f_2) };
	if (!unk_0xD58E02A689955E29(Param1))
	{
		return 0;
	}
	uVar50 = unk_0x6ACE266137707867(func_17(unk_0x1329891157A54C63()) + Vector(1f, 0f, 0f), Param1, 87, unk_0x81873881071CD9FE(), 0);
	unk_0x26CECBCADF60693F(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar44 = unk_0x6ACE266137707867(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0x81873881071CD9FE(), 0);
	unk_0x26CECBCADF60693F(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar45 = unk_0x6ACE266137707867(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0x81873881071CD9FE(), 0);
	unk_0x26CECBCADF60693F(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar46 = unk_0x6ACE266137707867(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0x81873881071CD9FE(), 0);
	unk_0x26CECBCADF60693F(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar47 = unk_0x6ACE266137707867(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0x81873881071CD9FE(), 0);
	unk_0x26CECBCADF60693F(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar48 = unk_0x6ACE266137707867(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0x81873881071CD9FE(), 0);
	unk_0x26CECBCADF60693F(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar49 = unk_0x6ACE266137707867(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0x81873881071CD9FE(), 0);
	unk_0x26CECBCADF60693F(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_17(var uParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(uParam0), 0);
}

void func_18(int iParam0)
{
	if (unk_0xC6F372320BE985CB(uParam0))
	{
		unk_0x32A12757CBF48A33(uParam0);
		if (unk_0x33ACB874CECA2D4B(uParam0))
		{
			iLocal_45 = 4;
		}
	}
}

void func_19(char* sParam0)
{
	if (!func_13(14))
	{
		unk_0x02A6B267064771B1("CHEAT_DENIED");
		unk_0x072D7B028D6C7A05(sParam0);
		func_15(unk_0x267D6EB296008122(0, 1));
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
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_29(19, 1);
			func_28();
			break;
		
		case 5:
			if ((((!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) || func_26()) || func_25(23)) || func_25(21)) || func_25(19))
			{
				iLocal_65 = 9;
				return;
			}
			func_23();
			break;
		
		case 9:
			func_22("CHEAT_AIM_SLOW_MO");
			func_29(19, 0);
			unk_0xCF2F32222FF93448(1f);
			iLocal_76 = 0;
			iLocal_65 = 1;
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
		unk_0x02A6B267064771B1("CHEAT_DEACTIVATED");
		unk_0x072D7B028D6C7A05(sParam0);
		func_15(unk_0x267D6EB296008122(0, 1));
	}
}

void func_23()
{
	if (unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()))
	{
		if (unk_0xCAD9951C953F5B2D(2, 25))
		{
			if (func_24(unk_0x81873881071CD9FE()) != joaat("weapon_unarmed") && func_24(unk_0x81873881071CD9FE()) != joaat("object"))
			{
				unk_0xCF2F32222FF93448(fLocal_77);
			}
			else
			{
				unk_0xCF2F32222FF93448(1f);
			}
		}
		else
		{
			unk_0xCF2F32222FF93448(1f);
		}
	}
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0x5F446E70DA9B8122(iParam0, &uVar0, 1);
	return uVar0;
}

int func_25(int iParam0)
{
	if (unk_0x236D8AD7EE179F46(Global_25190, iParam0))
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
	return Global_98931.f_7699.f_99.f_58[iParam0];
}

void func_28()
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_76 = 0;
		iLocal_65 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_14("CHEAT_AIM_SLOW_MO1");
			fLocal_77 = 0.6f;
			break;
		
		case 2:
			func_14("CHEAT_AIM_SLOW_MO2");
			fLocal_77 = 0.4f;
			break;
		
		case 3:
			func_14("CHEAT_AIM_SLOW_MO3");
			fLocal_77 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_65 = 5;
}

void func_29(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_25191, iParam0);
		func_4(iParam0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_25191, iParam0);
	}
}

void func_30()
{
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_29(16, 1);
			func_33();
			break;
		
		case 5:
			unk_0xDE1125A413AF241C(2, 37, 1);
			unk_0xDE1125A413AF241C(2, 19, 1);
			if ((((((((!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) || func_26()) || func_32()) || func_31(1)) || unk_0x5BD35B90C0693406(2, 37)) || unk_0x5BD35B90C0693406(2, 19)) || func_25(23)) || func_25(21)) || func_25(16))
			{
				iLocal_62 = 9;
			}
			break;
		
		case 9:
			unk_0xDE1125A413AF241C(2, 37, 1);
			unk_0xDE1125A413AF241C(2, 19, 1);
			func_22("CHEAT_SLOW_MO");
			func_29(16, 0);
			iLocal_75 = 0;
			unk_0xCF2F32222FF93448(1f);
			iLocal_62 = 1;
			break;
		
		default:
			break;
	}
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17099.f_4 && Global_17099.f_104 == 4);
	}
	return Global_17099.f_4;
}

int func_32()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

void func_33()
{
	iLocal_75++;
	if (iLocal_75 > 3)
	{
		iLocal_62 = 9;
		return;
	}
	switch (iLocal_75)
	{
		case 1:
			func_14("CHEAT_SLOW_MO1");
			unk_0xCF2F32222FF93448(0.6f);
			break;
		
		case 2:
			func_14("CHEAT_SLOW_MO2");
			unk_0xCF2F32222FF93448(0.4f);
			break;
		
		case 3:
			func_14("CHEAT_SLOW_MO3");
			unk_0xCF2F32222FF93448(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_62 = 5;
}

void func_34()
{
	struct<3> Var0;
	var uVar3;
	float fVar4;
	
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 2:
			func_29(17, 1);
			unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), 1);
			unk_0xE5BBA710593FB752(unk_0x1329891157A54C63(), 1);
			unk_0xCEDA5B7DDF6C8846(unk_0x81873881071CD9FE(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x8E4A427F5C43E416(unk_0x81873881071CD9FE(), joaat("gadget_parachute"), 1, 0, 1);
			Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			uVar3 = unk_0x3306AAAFE3B25098(unk_0x81873881071CD9FE());
			unk_0x84426D0C9AE7A434(Var0, &fVar4, 0);
			fVar4 = (fVar4 + 500f);
			unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Var0.f_0, Var0.f_1, fVar4, 1, 0, 0, 1);
			unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), uVar3);
			iLocal_71 = unk_0x48E480685981C7D4();
			unk_0x3B283FEBA87FFBEB(0);
			iLocal_63 = 3;
			break;
		
		case 3:
			if (func_36(1000, iLocal_71))
			{
				unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), 0);
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
				iLocal_71 = unk_0x48E480685981C7D4();
				iLocal_63 = 4;
			}
			break;
		
		case 4:
			if (func_36(1000, iLocal_71))
			{
				unk_0xDE1125A413AF241C(0, 144, 1);
				unk_0xDE1125A413AF241C(0, 149, 1);
				if (func_7() == 0)
				{
					unk_0x03F73D35E5AC583A(unk_0x81873881071CD9FE(), 9, 0, 0, 0);
				}
				else
				{
					unk_0x03F73D35E5AC583A(unk_0x81873881071CD9FE(), 8, 0, 0, 0);
				}
				unk_0xAE2B1C30F8A0B67C(250);
				iLocal_71 = unk_0x48E480685981C7D4();
				func_14("CHEAT_SKYFALL");
				unk_0xDD17978B9F91686B(2);
				iLocal_63 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) || func_26()) || func_25(23)) || func_25(21)) || func_25(17))
			{
				iLocal_63 = 9;
				break;
			}
			unk_0xDE1125A413AF241C(0, 144, 1);
			unk_0xC9A352663D97EFC3(2);
			if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
			{
				unk_0x14A3456454DB40CE(unk_0x81873881071CD9FE(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0x03CF5B18BF9EC613(unk_0x81873881071CD9FE()))
				{
					iLocal_63 = 9;
				}
			}
			else
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			func_35();
			func_22("CHEAT_SKYFALL");
			func_29(17, 0);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

void func_35()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		unk_0x7FC06F0DCD7AC728(unk_0x81873881071CD9FE(), joaat("gadget_parachute"));
	}
	if (iLocal_61 != 5)
	{
		unk_0xE5BBA710593FB752(unk_0x1329891157A54C63(), 0);
		unk_0xCEDA5B7DDF6C8846(unk_0x81873881071CD9FE(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	unk_0xDD17978B9F91686B(0);
}

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x48E480685981C7D4();
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
	
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_INVINCIBILITY");
			func_29(15, 1);
			iLocal_61 = 5;
			iLocal_73 = unk_0x48E480685981C7D4();
			unk_0xE5BBA710593FB752(unk_0x1329891157A54C63(), 1);
			unk_0xCEDA5B7DDF6C8846(unk_0x81873881071CD9FE(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) || unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				iLocal_61 = 9;
				return;
			}
			Var0 = { func_17(unk_0x1329891157A54C63()) };
			if (((((func_26() || func_32()) || func_25(23)) || func_25(21)) || func_25(15)) || Var0.f_2 <= -170f)
			{
				iLocal_61 = 9;
				return;
			}
			iLocal_74 = (unk_0x48E480685981C7D4() - iLocal_73);
			if (unk_0x968BF1C2C695B61A(joaat("appinternet")) == 0)
			{
				func_38((iLocal_72 - iLocal_74), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0);
			}
			if (iLocal_74 >= (iLocal_72 - 1000))
			{
				iLocal_61 = 9;
				return;
			}
			unk_0xE5BBA710593FB752(unk_0x1329891157A54C63(), 1);
			unk_0xCEDA5B7DDF6C8846(unk_0x81873881071CD9FE(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xA658DB1A2F37E1D5();
			break;
		
		case 9:
			func_22("CHEAT_INVINCIBILITY_OFF");
			func_29(15, 0);
			iLocal_61 = 1;
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				unk_0xE5BBA710593FB752(unk_0x1329891157A54C63(), 0);
				unk_0xCEDA5B7DDF6C8846(unk_0x81873881071CD9FE(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_38(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
		Global_1336084.f_1 = 1;
		func_39(7, iVar0);
		Global_1336084.f_3911[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3911.f_172[iVar0] = iParam2;
		Global_1336084.f_3911.f_216[iVar0] = iParam3;
		Global_1336084.f_3911.f_183[iVar0] = iParam4;
		Global_1336084.f_3911.f_194[iVar0] = iParam5;
		Global_1336084.f_3911.f_249[iVar0] = iParam6;
		Global_1336084.f_3911.f_260[iVar0] = iParam7;
		Global_1336084.f_3911.f_205[iVar0] = iParam8;
		Global_1336084.f_3911.f_314[iVar0] = iParam9;
		Global_1336084.f_3911.f_325[iVar0] = iParam10;
		Global_1336084.f_3911.f_357[iVar0] = iParam11;
		Global_1336084.f_3911.f_238[iVar0] = iParam12;
		Global_1336084.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_39(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1336084.f_4506[iParam0]), iParam1);
}

bool func_40(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_1336084.f_4506[iParam0], iParam1);
}

void func_41()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FLAMING_BULLETS");
			func_29(12, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) || func_25(23)) || func_25(21)) || func_25(12))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0xCC29AAC2D7141B42(unk_0x1329891157A54C63());
			break;
		
		case 9:
			func_22("CHEAT_FLAMING_BULLETS");
			func_29(12, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_42()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_EXPLOSIVE_MELEE");
			func_29(13, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if ((((!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) || func_25(23)) || func_25(21)) || func_25(13)) || func_26())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0x7BE10BB147CBABBA(unk_0x1329891157A54C63());
			break;
		
		case 9:
			func_22("CHEAT_EXPLOSIVE_MELEE");
			func_29(13, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_43()
{
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_DRUNK");
			func_29(18, 1);
			func_58(unk_0x81873881071CD9FE());
			func_56(30000, 1050253722, 1065353216, 0);
			iLocal_64 = 5;
			break;
		
		case 5:
			if ((((func_26() || !unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63())) || func_25(23)) || func_25(21)) || func_25(18))
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_DRUNK");
			func_29(18, 0);
			func_47(unk_0x81873881071CD9FE());
			func_46(1000);
			iLocal_64 = 1;
			break;
		
		case 10:
			func_44(1);
			func_29(18, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_44(bool bParam0)
{
	unk_0x418F5717704BF717(0f);
	unk_0x7FACAFB713BC76BB(0f);
	unk_0xB6C88FA2212D78E0(0f);
	unk_0x55FFFE9031CD8ABF(1);
	unk_0x451B5C1EDF933E94(0f);
	unk_0x221C24DE301307B2(1);
	unk_0xF6F43530C380A7DA(0);
	if (unk_0x12F24A1A22BF90A7("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x0C22E352114F699C("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xB318FDA0D1ABDB20(&Global_36471))
	{
		if (unk_0x12F24A1A22BF90A7(&Global_36471))
		{
			unk_0x0C22E352114F699C(&Global_36471);
		}
	}
	if (unk_0x42E36F2D658EB2FF(Global_36460))
	{
		if (unk_0x3A5D57B5EBCB4FEF(Global_36460))
		{
			unk_0xB183977AFC75D047(Global_36460, 0f);
			unk_0x19E32192B402B7F9(Global_36460, 1);
		}
	}
	if (bParam0)
	{
		if (unk_0xADEB81F3682A29A2() != -1 || unk_0xEAB68DA0F3844031() != -1)
		{
			unk_0x89D15E63F65D1047();
		}
		else if (unk_0xF33755A765033580())
		{
			unk_0x89D15E63F65D1047();
		}
	}
	Global_36466 = 0f;
	StringCopy(&Global_36467, "", 16);
	StringCopy(&Global_36471, "", 64);
	StringCopy(&Global_36487, "", 16);
	func_45();
}

void func_45()
{
	Global_36459 = 0;
	Global_36460 = 0;
	Global_36461 = 0;
	Global_36462 = 30000;
	Global_36463 = 0f;
	Global_36465 = 0f;
	Global_36464 = 0f;
	Global_36466 = 0f;
	StringCopy(&Global_36467, "", 16);
}

void func_46(int iParam0)
{
	int iVar0;
	
	if (!Global_36459)
	{
		return;
	}
	iVar0 = unk_0x48E480685981C7D4();
	Global_36461 = (iVar0 + iParam0);
	Global_36462 = iParam0;
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
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36296[iVar0 /*5*/];
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
	if (!Global_36270[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36270[iParam0 /*5*/].f_1 == unk_0x81873881071CD9FE())
		{
			Global_36491 = 0;
		}
	}
	Global_36270[iParam0 /*5*/] = 13;
	Global_36270[iParam0 /*5*/].f_1 = 0;
	Global_36270[iParam0 /*5*/].f_2 = 0;
	Global_36270[iParam0 /*5*/].f_3 = 0;
	Global_36270[iParam0 /*5*/].f_4 = 0;
	Global_36269 = (Global_36269 - 1);
	if (Global_36269 < 0)
	{
		Global_36269 = 0;
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36270[iVar0 /*5*/].f_1 == iParam0)
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
	Global_36377[iVar0 /*5*/] = iParam0;
	Global_36377[iVar0 /*5*/].f_1 = iParam1;
	Global_36377[iVar0 /*5*/].f_2 = iParam2;
	Global_36377[iVar0 /*5*/].f_3 = iParam3;
	Global_36377[iVar0 /*5*/].f_4 = iParam4;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36377[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_36377[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36377[iVar0 /*5*/])
			{
				if (iParam1 == Global_36377[iVar0 /*5*/].f_1)
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
		if (!Global_36296[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36296[iVar0 /*5*/].f_1)
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
	if (Global_36459)
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
	if (!unk_0xAF4185036B3AF650())
	{
		unk_0x67F68184B7855814("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0x1AE77F1F79D443D0())
	{
		unk_0xB46F81CC5DBDBBDC("DRUNK_SHAKE", (fParam3 * Global_36458));
	}
	if (unk_0x42E36F2D658EB2FF(uParam4))
	{
		unk_0x4BC806FF702341FC(uParam4, "DRUNK_SHAKE", fParam3);
		Global_36460 = uParam4;
	}
	else
	{
		Global_36460 = 0;
	}
	Global_36459 = 1;
	iVar0 = unk_0x48E480685981C7D4();
	Global_36461 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_36461 = -1;
		}
	}
	Global_36462 = uParam1;
	Global_36463 = fParam2;
	Global_36465 = fParam3;
	Global_36464 = fParam3;
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
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
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
	Global_36270[iVar2 /*5*/] = 0;
	Global_36270[iVar2 /*5*/].f_1 = iParam0;
	Global_36270[iVar2 /*5*/].f_2 = iParam1;
	Global_36270[iVar2 /*5*/].f_3 = iParam1;
	Global_36270[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0x81873881071CD9FE())
	{
		Global_36491 = 1;
	}
	Global_36269++;
	return 1;
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36270[iVar0 /*5*/] == 13)
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
		if (iParam0 == Global_36296[iVar0 /*5*/].f_1)
		{
			return Global_36296[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_62()
{
	switch (iLocal_57)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_BANG_BANG");
			func_29(11, 1);
			iLocal_57 = 5;
			break;
		
		case 5:
			if (((!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) || func_25(23)) || func_25(21)) || func_25(11))
			{
				iLocal_57 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_57 = 9;
				return;
			}
			unk_0x7323E6AEEF318E37(unk_0x1329891157A54C63());
			break;
		
		case 9:
			func_22("CHEAT_BANG_BANG");
			func_29(11, 0);
			iLocal_57 = 1;
			break;
		
		default:
			break;
	}
}

void func_63()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_4(14);
			func_29(14, 1);
			func_65();
			break;
		
		case 5:
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if ((((((!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) || func_26()) || func_25(23)) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
				{
					iLocal_60 = 9;
				}
			}
			else
			{
				iLocal_60 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_GRAVITY_MOON");
			func_29(14, 0);
			unk_0x3C5FA3C9C075F961(0);
			iLocal_78 = 0;
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

int func_64(int iParam0)
{
	if (unk_0x236D8AD7EE179F46(Global_25191, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	iLocal_78++;
	if (iLocal_78 > 1)
	{
		iLocal_60 = 9;
		return;
	}
	switch (iLocal_78)
	{
		case 1:
			func_14("CHEAT_GRAVITY_MOON");
			unk_0x3C5FA3C9C075F961(1);
			break;
		
		default:
			break;
	}
	iLocal_60 = 5;
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
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			func_14("CHEAT_GIVE_PARACHUTE");
			unk_0x8E4A427F5C43E416(unk_0x81873881071CD9FE(), joaat("gadget_parachute"), 1, 1, 1);
			func_4(10);
		}
	}
}

int func_68()
{
	if (iLocal_92)
	{
		iLocal_92 = 0;
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
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_70()
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (unk_0x4D273DA55E880307() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63());
			if (iVar0 > 0)
			{
				func_14("CHEAT_WANTED_DOWN");
				unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), (iVar0 - 1), 0);
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
	
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if (unk_0x4D273DA55E880307() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63());
			if (iVar0 < unk_0x4D273DA55E880307())
			{
				unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), iVar0 + 1, 0);
				unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
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
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((((func_25(23) || func_25(22)) || func_25(7)) || func_13(9)) || func_13(10)) || !unk_0xD64856110D936480(func_73())) || !unk_0xA7E5DC80537EF3E0(unk_0x1329891157A54C63()))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			unk_0xD74A10556CE1D361(unk_0x1329891157A54C63(), 1);
			func_14("CHEAT_SPECIAL_ABILITY");
			func_4(7);
		}
	}
}

int func_73()
{
	return unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE());
}

void func_74()
{
	int iVar0;
	
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			func_14("CHEAT_HEALTH_ARMOR");
			func_4(6);
			unk_0x9765BF567DB87B5F(unk_0x81873881071CD9FE(), unk_0x0FDE1892CC627262(unk_0x81873881071CD9FE()));
			unk_0x013174979D22E550(unk_0x81873881071CD9FE(), (unk_0xAE087627B6F19911(unk_0x1329891157A54C63()) - unk_0xD5D8090026387C69(unk_0x81873881071CD9FE())));
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iVar0 = unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE());
				if (unk_0x86CCCD2FAE9D5E65(iVar0))
				{
					if (!unk_0x930F8FBB8E9537CC(iVar0))
					{
						unk_0x4F7552F76F378DB7(iVar0);
					}
				}
			}
		}
	}
}

void func_75()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
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
		switch (iLocal_70)
		{
			case 0:
				iLocal_70 = 1;
			
			case 1:
				unk_0x8B727106D3CCC9B7("EXTRASUNNY");
				unk_0x747C6D01EB69DBA8();
				func_14("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_70 = 2;
				break;
			
			case 2:
				unk_0x8B727106D3CCC9B7("CLEAR");
				unk_0x747C6D01EB69DBA8();
				func_14("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_70 = 3;
				break;
			
			case 3:
				unk_0x8B727106D3CCC9B7("CLOUDS");
				unk_0x747C6D01EB69DBA8();
				func_14("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_70 = 4;
				break;
			
			case 4:
				unk_0x8B727106D3CCC9B7("SMOG");
				unk_0x747C6D01EB69DBA8();
				func_14("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_70 = 6;
				break;
			
			case 6:
				unk_0x8B727106D3CCC9B7("OVERCAST");
				unk_0x747C6D01EB69DBA8();
				func_14("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_70 = 7;
				break;
			
			case 7:
				unk_0x8B727106D3CCC9B7("RAIN");
				unk_0x747C6D01EB69DBA8();
				func_14("CHEAT_ADVANCE_WEATHER_RAIN");
				func_29(5, 1);
				iLocal_70 = 8;
				break;
			
			case 8:
				unk_0x8B727106D3CCC9B7("THUNDER");
				unk_0x747C6D01EB69DBA8();
				func_14("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_70 = 9;
				break;
			
			case 9:
				unk_0x8B727106D3CCC9B7("CLEARING");
				unk_0x747C6D01EB69DBA8();
				func_14("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_70 = 11;
				break;
			
			case 11:
				unk_0x8B727106D3CCC9B7("XMAS");
				unk_0x747C6D01EB69DBA8();
				func_14("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_70 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_76()
{
	if (iLocal_50 == 4)
	{
		iLocal_50 = 1;
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
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			unk_0xA8190B0CB5814D75(unk_0x81873881071CD9FE(), joaat("weapon_knife"), -1, 0);
			unk_0xA8190B0CB5814D75(unk_0x81873881071CD9FE(), joaat("weapon_smg"), 300, 0);
			unk_0xA8190B0CB5814D75(unk_0x81873881071CD9FE(), joaat("weapon_assaultrifle"), 300, 1);
			unk_0xA8190B0CB5814D75(unk_0x81873881071CD9FE(), joaat("weapon_pumpshotgun"), 150, 0);
			unk_0xA8190B0CB5814D75(unk_0x81873881071CD9FE(), joaat("weapon_sniperrifle"), 30, 0);
			unk_0xA8190B0CB5814D75(unk_0x81873881071CD9FE(), joaat("weapon_grenade"), 5, 0);
			unk_0xA8190B0CB5814D75(unk_0x81873881071CD9FE(), joaat("weapon_rpg"), 5, 0);
		}
	}
}

void func_77()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_SWIM");
			func_29(3, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if (((!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) || func_25(23)) || func_25(22)) || func_25(3))
			{
				iLocal_49 = 9;
			}
			else
			{
				unk_0xCEA20241B0FC5A76(unk_0x1329891157A54C63(), 1.49f);
				unk_0xA658DB1A2F37E1D5();
			}
			break;
		
		case 9:
			unk_0xCEA20241B0FC5A76(unk_0x1329891157A54C63(), 1f);
			func_22("CHEAT_FAST_SWIM");
			func_29(3, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_78()
{
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_RUN");
			func_29(2, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if ((((!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) || unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE())) || func_25(23)) || func_25(22)) || func_25(2))
			{
				iLocal_48 = 9;
			}
			else
			{
				if (unk_0x4A92B11CC73C245D(unk_0x81873881071CD9FE()) || (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()) && !unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())))
				{
					unk_0x841697939BA22238(unk_0x1329891157A54C63(), 1.49f);
				}
				else
				{
					unk_0x841697939BA22238(unk_0x1329891157A54C63(), 1f);
				}
				unk_0xA658DB1A2F37E1D5();
			}
			break;
		
		case 9:
			unk_0x841697939BA22238(unk_0x1329891157A54C63(), 1f);
			func_22("CHEAT_FAST_RUN");
			func_29(2, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

void func_79()
{
	int iVar0;
	
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SLIDEY_CARS");
			func_29(1, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if (((!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) || func_25(23)) || func_25(22)) || func_25(1))
			{
				iLocal_47 = 9;
			}
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if (!unk_0x930F8FBB8E9537CC(iVar0))
				{
					if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) == unk_0x81873881071CD9FE())
					{
						if (iLocal_68 == 0)
						{
							iLocal_68 = iVar0;
							if (!unk_0x930F8FBB8E9537CC(iLocal_68))
							{
								if (func_80(1))
								{
									unk_0x373C7A5B9222AD33(iLocal_68, 1);
								}
								else
								{
									iLocal_68 = 0;
								}
							}
						}
						else if (iLocal_68 != 0)
						{
							if (!unk_0x930F8FBB8E9537CC(iLocal_68))
							{
								unk_0x373C7A5B9222AD33(iLocal_68, 0);
								iLocal_68 = 0;
							}
						}
					}
				}
			}
			break;
		
		case 9:
			func_22("CHEAT_SLIDEY_CARS");
			iLocal_47 = 10;
			break;
		
		case 10:
			if (!unk_0x930F8FBB8E9537CC(iLocal_68))
			{
				unk_0x373C7A5B9222AD33(iLocal_68, 0);
				iLocal_68 = 0;
			}
			func_29(1, 0);
			iLocal_47 = 1;
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
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		uVar0 = unk_0x2ADE2CEED2637E95();
		if (unk_0x86CCCD2FAE9D5E65(uVar0))
		{
			if (unk_0x7404950238A154C2(iVar0, 0))
			{
				iVar1 = unk_0x14B7103DBD149FFE(iVar0);
				iVar2 = func_7();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0x61A26017817C6AED(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0xC5ABD699DDC9D5A0(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0xE083914AB72DD7CE(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0x9F59BCFFFEAAD4B1(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0x2430739394FC68FC(iVar0, "door_dside_r") != -1 || unk_0x2430739394FC68FC(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0x2430739394FC68FC(iVar0, "door_dside_r") == -1 || unk_0x2430739394FC68FC(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0xC5ABD699DDC9D5A0(iVar1))
					{
						if (unk_0x2430739394FC68FC(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0x2430739394FC68FC(iVar0, "seat_dside_r") != -1 || unk_0x2430739394FC68FC(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0x2430739394FC68FC(iVar0, "seat_dside_r") == -1 || unk_0x2430739394FC68FC(iVar0, "seat_pside_r") == -1)
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
					if (!unk_0x61A26017817C6AED(iVar1) && !unk_0xC5ABD699DDC9D5A0(iVar1))
					{
						return 0;
					}
					if (unk_0x8807D8929DF94A13(iVar0))
					{
						return 0;
					}
					uVar4 = unk_0x9DE804DB82E9D0FC(iVar0, &uVar3);
					if (!unk_0xB318FDA0D1ABDB20(uVar4))
					{
						if (unk_0x8DAF7A748E41AD46(uVar4) == unk_0x8DAF7A748E41AD46("taxiService"))
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
	
	if (!unk_0x86CCCD2FAE9D5E65(uParam0) || !unk_0x7404950238A154C2(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_82(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x236D8AD7EE179F46(Global_98931.f_5843[iVar9], 0))
		{
			if (unk_0x9ED6CC42898E5346(&sVar1, iParam0))
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
			if (Global_98931.f_7699.f_99.f_58[128] && !Global_98931.f_7699.f_99.f_58[131])
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
					if (Global_98931.f_7699.f_99.f_58[119])
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
			else if (Global_98931.f_7699.f_99.f_58[118])
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
	switch (iLocal_46)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SUPER_JUMP");
			func_29(0, 1);
			iLocal_46 = 5;
			break;
		
		case 5:
			if ((((!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) || func_25(23)) || func_25(22)) || func_25(0)) || unk_0xABA72188CC7BE86B())
			{
				iLocal_46 = 9;
				return;
			}
			unk_0x783C2883BEB4A5E1(unk_0x1329891157A54C63());
			unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 217, 1);
			break;
		
		case 9:
			func_22("CHEAT_SUPER_JUMP");
			func_29(0, 0);
			iLocal_46 = 1;
			break;
		
		default:
			break;
	}
}

void func_86()
{
	if ((func_109() || iLocal_93 != 0) || func_13(14))
	{
		unk_0xDE1125A413AF241C(2, 243, 1);
	}
	func_108();
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		return;
	}
	if (unk_0xF4B729F99E682735(unk_0x81873881071CD9FE()))
	{
		return;
	}
	if (!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		return;
	}
	if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
	{
		return;
	}
	if (func_32() || unk_0xF33755A765033580())
	{
		return;
	}
	if (func_107())
	{
		if (!iLocal_91)
		{
			func_106();
			iLocal_91 = 1;
		}
		return;
	}
	iLocal_91 = 0;
	iLocal_92 = 0;
	if ((func_105(988027572, 12) || unk_0xDDABE14450EAF794(joaat("buzzoff"))) || func_104(20, joaat("buzzard")))
	{
		func_101(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_105(-1134279030, 11) || unk_0xDDABE14450EAF794(joaat("bandit"))) || func_104(20, joaat("bmx")))
	{
		func_101(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_105(971352167, 10) || unk_0xDDABE14450EAF794(joaat("holein1"))) || func_104(20, joaat("caddy")))
	{
		func_101(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_105(-269863225, 10) || unk_0xDDABE14450EAF794(joaat("comet"))) || func_104(20, joaat("comet2")))
	{
		func_101(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_105(458579068, 12) || unk_0xDDABE14450EAF794(joaat("flyspray"))) || func_104(20, joaat("duster")))
	{
		func_101(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_105(-666513193, 12) || unk_0xDDABE14450EAF794(joaat("rocket"))) || func_104(20, joaat("pcj")))
	{
		func_101(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_105(-1245984749, 10) || unk_0xDDABE14450EAF794(joaat("rapidgt"))) || func_104(20, joaat("rapidgt")))
	{
		func_101(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_105(2076774618, 12) || unk_0xDDABE14450EAF794(joaat("offroad"))) || func_104(20, joaat("sanchez")))
	{
		func_101(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_105(855685457, 9) || unk_0xDDABE14450EAF794(joaat("vinewood"))) || func_104(20, joaat("stretch")))
	{
		func_101(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_105(-591395876, 12) || unk_0xDDABE14450EAF794(joaat("barnstorm"))) || func_104(20, joaat("stunt")))
	{
		func_101(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_105(-1399217582, 10) || unk_0xDDABE14450EAF794(joaat("trashed"))) || func_104(20, joaat("trash")))
	{
		func_101(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_100())
	{
		if ((func_105(-375917581, 10) || unk_0xDDABE14450EAF794(joaat("extinct"))) || func_104(20, joaat("dodo")))
		{
			func_101(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_105(-2124307881, 10) || unk_0xDDABE14450EAF794(joaat("deathcar"))) || func_104(20, joaat("dukes2")))
		{
			func_101(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_105(1028964594, 9) || unk_0xDDABE14450EAF794(joaat("bubbles"))) || func_104(20, joaat("submersible2")))
		{
			func_101(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_105(-393416581, 11) || unk_0xDDABE14450EAF794(joaat("hoptoit"))) || func_104(0, 0))
	{
		func_99();
	}
	if ((func_105(-296509791, 8) || unk_0xDDABE14450EAF794(joaat("snowday"))) || func_104(1, 0))
	{
		func_98();
	}
	if ((func_105(1120820643, 7) || unk_0xDDABE14450EAF794(joaat("catchme"))) || func_104(2, 0))
	{
		func_97();
	}
	if ((func_105(-421458016, 9) || unk_0xDDABE14450EAF794(joaat("gotgills"))) || func_104(3, 0))
	{
		func_96();
	}
	if ((func_105(372390926, 12) || unk_0xDDABE14450EAF794(joaat("toolup"))) || func_104(4, 0))
	{
		iLocal_50 = 4;
	}
	if ((func_105(606506837, 8) || unk_0xDDABE14450EAF794(joaat("makeitrain"))) || func_104(5, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_105(453014206, 12) || unk_0xDDABE14450EAF794(joaat("turtle"))) || func_104(6, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_105(1773187142, 9) || unk_0xDDABE14450EAF794(joaat("powerup"))) || func_104(7, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_105(1173296014, 10) || unk_0xDDABE14450EAF794(joaat("fugitive"))) || func_104(8, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_105(-381269753, 10) || unk_0xDDABE14450EAF794(joaat("lawyerup"))) || func_104(9, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_105(-2023988698, 11) || unk_0xDDABE14450EAF794(joaat("skydive"))) || func_104(10, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_105(-835863906, 12) || unk_0xDDABE14450EAF794(joaat("highex"))) || func_104(11, 0))
	{
		func_95();
	}
	if ((func_105(1958387485, 12) || unk_0xDDABE14450EAF794(joaat("incendiary"))) || func_104(12, 0))
	{
		func_94();
	}
	if ((func_105(-903985180, 9) || unk_0xDDABE14450EAF794(joaat("hothands"))) || func_104(13, 0))
	{
		func_93();
	}
	if ((func_105(2087642905, 9) || unk_0xDDABE14450EAF794(joaat("floater"))) || func_104(14, 0))
	{
		func_92();
	}
	if ((func_105(1257820019, 10) || unk_0xDDABE14450EAF794(joaat("painkiller"))) || func_104(15, 0))
	{
		func_91();
	}
	if ((func_105(1540206179, 7) || unk_0xDDABE14450EAF794(joaat("slowmo"))) || func_104(16, 0))
	{
		func_90();
	}
	if ((func_105(115565392, 16) || unk_0xDDABE14450EAF794(joaat("skyfall"))) || func_104(17, 0))
	{
		func_89();
	}
	if ((func_105(-1276513277, 8) || unk_0xDDABE14450EAF794(joaat("liquor"))) || func_104(18, 0))
	{
		func_88();
	}
	if ((func_105(2040433593, 9) || unk_0xDDABE14450EAF794(joaat("deadeye"))) || func_104(19, 0))
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
	if (iLocal_62 != 1)
	{
		func_19("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_65 = 4;
	}
}

void func_88()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_64 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_64 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(18))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_64 = 1;
		return;
	}
	if (iLocal_64 == 1)
	{
		iLocal_64 = 4;
	}
	else if (iLocal_64 == 5)
	{
		iLocal_64 = 9;
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
	if (unk_0xABA72188CC7BE86B())
	{
		func_19("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_19("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_25(23) || func_25(21)) || func_25(17)) || func_64(0)) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0)) || !unk_0xC10A1C8C852AB41D())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 0)) || unk_0x968BF1C2C695B61A(joaat("respawn_controller")) > 0)
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_63 = 2;
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
	if (iLocal_65 != 1)
	{
		func_19("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_62 = 4;
	}
}

void func_91()
{
	struct<3> Var0;
	
	Var0 = { func_17(unk_0x1329891157A54C63()) };
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
	if (iLocal_61 == 1)
	{
		iLocal_61 = 4;
	}
	else if (iLocal_61 == 5)
	{
		iLocal_61 = 9;
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
	if ((((func_25(23) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_60 = 4;
}

void func_93()
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
	if ((func_25(23) || func_25(21)) || func_25(13))
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

void func_94()
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
	if ((func_25(23) || func_25(21)) || func_25(12))
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

void func_95()
{
	if (func_26())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_57 = 1;
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_57 = 1;
		return;
	}
	if ((func_25(23) || func_25(21)) || func_25(11))
	{
		func_19("CHEAT_NOT_NOW");
		iLocal_57 = 1;
		return;
	}
	if (iLocal_57 == 1)
	{
		iLocal_57 = 4;
	}
	else if (iLocal_57 == 5)
	{
		iLocal_57 = 9;
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
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
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
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
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
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

void func_99()
{
	if (((func_25(23) || func_25(22)) || func_25(0)) || unk_0xABA72188CC7BE86B())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_46 == 1)
	{
		iLocal_46 = 4;
	}
	else if (iLocal_46 == 5)
	{
		iLocal_46 = 9;
	}
}

int func_100()
{
	var uVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF3148AAF69AF9CBC(&uVar0, 2);
				unk_0xF3148AAF69AF9CBC(&uVar0, 4);
				unk_0xF3148AAF69AF9CBC(&uVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					iVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&iVar0, 0);
					unk_0x0A726855B16BE29A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_135975 == 2)
	{
		return 1;
	}
	else if (Global_135975 == 3)
	{
		return 0;
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		if (unk_0x236D8AD7EE179F46(unk_0xE19FDB171CBF814A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_101(int iParam0, char* sParam1)
{
	if (iLocal_45 == 1)
	{
		if (((((func_13(9) || unk_0x968BF1C2C695B61A(joaat("barry1")) > 0) || unk_0x968BF1C2C695B61A(joaat("tennis")) > 0) || func_25(23)) || func_25(22)) || func_25(20))
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
		iLocal_66 = iParam0;
		sLocal_69 = sParam1;
		iLocal_45 = 2;
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
	return unk_0x236D8AD7EE179F46(Global_98931.f_18731[iParam0], iParam1);
}

int func_104(int iParam0, int iParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_25193, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_25194)
			{
				unk_0xC69E84EBBD7166E6(&Global_25193, iParam0);
				iLocal_92 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&Global_25193, iParam0);
			iLocal_92 = 1;
			return 1;
		}
	}
	return 0;
}

int func_105(int iParam0, int iParam1)
{
	if (!func_13(14))
	{
		return unk_0x0AE2C218C4950816(iParam0, iParam1);
	}
	return 0;
}

void func_106()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_79[iVar0] != -1)
		{
			unk_0x4474CF0FD32A90B2(iLocal_79[iVar0]);
			iLocal_79[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_107()
{
	if (((Global_90809 == 13 || Global_90809 == 10) || Global_90809 == 11) || Global_90809 == 12)
	{
		return 0;
	}
	return 1;
}

void func_108()
{
	if (func_13(14) || (!unk_0xECDEA377354CBDA4() && iLocal_93 != 0))
	{
		iLocal_93 = unk_0x48E480685981C7D4();
	}
	if (iLocal_93 != 0)
	{
		if (!func_13(14))
		{
			if ((unk_0x48E480685981C7D4() - iLocal_93) > 1000)
			{
				iLocal_93 = 0;
			}
		}
	}
}

int func_109()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
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
		iLocal_79[iVar0] = -1;
		iVar0++;
	}
	iLocal_91 = 0;
	iLocal_90 = 0;
}

void func_111()
{
	unk_0xA607090793BFB21E(0);
	if (iLocal_63 == 5)
	{
		func_35();
	}
	if (iLocal_64 == 5)
	{
		func_44(1);
	}
	if (iLocal_62 == 5 || iLocal_65 == 5)
	{
		unk_0xCF2F32222FF93448(1f);
	}
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (iLocal_61 == 5)
		{
			unk_0xE5BBA710593FB752(unk_0x1329891157A54C63(), 0);
			unk_0xCEDA5B7DDF6C8846(unk_0x81873881071CD9FE(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		unk_0x841697939BA22238(unk_0x1329891157A54C63(), 1f);
		unk_0xCEA20241B0FC5A76(unk_0x1329891157A54C63(), 1f);
	}
	unk_0x3C5FA3C9C075F961(0);
	Global_25191 = 0;
	Global_25190 = 0;
	Global_25192 = 0;
	Global_25193 = 0;
	Global_25195 = 0;
	Global_25194 = 0;
	unk_0xC23A229F78DAD92A();
}

