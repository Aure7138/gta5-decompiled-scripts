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
	if (unk_0x2C897F101BA20806(34))
	{
		func_111();
	}
	Global_24691 = 0;
	Global_24690 = 0;
	Global_24692 = 0;
	Global_24693 = 0;
	Global_24695 = 0;
	Global_24694 = 0;
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
			if (unk_0xA723CE7CA05AC85E())
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
	if (unk_0x5494F37F35C1D7D7(iParam0))
	{
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_67))
			{
				if (!unk_0xE44A580B551C3645(iLocal_67))
				{
					if (unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_67, 0))
					{
						Var0 = { unk_0xBF8499F46AD9093A(iLocal_67, 1) };
						fVar3 = unk_0xD1613577C809E98B(iLocal_67);
						unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), 1, 0, 0, 1);
						bVar4 = true;
					}
				}
				unk_0x2F2948A2506AA404(&iLocal_67);
			}
			if (!bVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { unk_0xA783C6007920169C(unk_0xA16EC202D9D35357(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0xA783C6007920169C(unk_0xA16EC202D9D35357(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0xA783C6007920169C(unk_0xA16EC202D9D35357(), 0f, 3.5f, 1f) };
				}
				fVar3 = (unk_0xD1613577C809E98B(unk_0xA16EC202D9D35357()) + 90f);
			}
			if (func_16(iParam0, Var0, fVar3))
			{
				iLocal_67 = unk_0x9BB6F54E415071A1(iParam0, Var0, fVar3, 0, 1);
				unk_0xAC894C93914464C2(iLocal_67);
				unk_0xEA054561294AEC10(iParam0);
				unk_0x3A3C5A6572B3C611(&iLocal_67);
				func_14(sLocal_69);
				func_4(20);
			}
			else
			{
				unk_0xEA054561294AEC10(iParam0);
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
		unk_0xD0E2BFCE93AE3ABD(&Global_24692, iParam0);
		Global_24695 = 1;
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
	
	unk_0x3ED04C9A60CBD249(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x680350124CC21957(iParam0, iVar0, 1);
}

int func_7()
{
	func_8();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_8()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_11(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_10(unk_0xA16EC202D9D35357());
			if (func_9(iVar0) && (!func_13(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_9(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
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
		return Global_97439.f_29795[iParam0 /*29*/];
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
		if (func_13(14) && unk_0x83B393DE31BAC8F0())
		{
			if (unk_0x9BA82E09A986BA4B(sParam0, "CHEAT_SUPER_JUMP") && unk_0xA723CE7CA05AC85E())
			{
				return 0;
			}
			if ((unk_0x9BA82E09A986BA4B(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357())) && unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
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
	return Global_34915 == iParam0;
}

void func_14(char* sParam0)
{
	if (func_12(""))
	{
	}
	else
	{
		unk_0xA6CE1BB0BF7AE715("CHEAT_ACTIVATED");
		unk_0x4498E0CBD76B2D72(sParam0);
		func_15(unk_0x69CF75457662E450(0, 1));
		unk_0x3990A745EC2AD2BF(sParam0);
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
	
	unk_0xD7CB63D07AABC54F(iParam0, &Var28, &Var31);
	Var34.f_0 = (unk_0x3545D662A0A53653((Var31.f_0 - Var28.f_0)) / 2f);
	Var34.f_1 = (unk_0x3545D662A0A53653((Var31.f_1 - Var28.f_1)) / 2f);
	Var34.f_2 = (unk_0x3545D662A0A53653((Var31.f_2 - Var28.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0xCC6B7A025E72F529(Param1, fParam4, -Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[2 /*3*/] = { unk_0xCC6B7A025E72F529(Param1, fParam4, Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[3 /*3*/] = { unk_0xCC6B7A025E72F529(Param1, fParam4, Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[4 /*3*/] = { unk_0xCC6B7A025E72F529(Param1, fParam4, -Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[5 /*3*/] = { unk_0xCC6B7A025E72F529(Param1, fParam4, -Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[6 /*3*/] = { unk_0xCC6B7A025E72F529(Param1, fParam4, Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[7 /*3*/] = { unk_0xCC6B7A025E72F529(Param1, fParam4, Var34.f_0, Var34.f_1, Var34.f_2) };
	Var0[8 /*3*/] = { unk_0xCC6B7A025E72F529(Param1, fParam4, -Var34.f_0, Var34.f_1, Var34.f_2) };
	if (!unk_0xCF993CC55171C8A0(Param1))
	{
		return 0;
	}
	uVar50 = unk_0x6295C1B164161BD1(func_17(unk_0x1788E93557766241()) + Vector(1f, 0f, 0f), Param1, 87, unk_0xA16EC202D9D35357(), 0);
	unk_0x65595DB38D0F502A(uVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar44 = unk_0x6295C1B164161BD1(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0xA16EC202D9D35357(), 0);
	unk_0x65595DB38D0F502A(uVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar45 = unk_0x6295C1B164161BD1(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0xA16EC202D9D35357(), 0);
	unk_0x65595DB38D0F502A(uVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar46 = unk_0x6295C1B164161BD1(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0xA16EC202D9D35357(), 0);
	unk_0x65595DB38D0F502A(uVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar47 = unk_0x6295C1B164161BD1(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0xA16EC202D9D35357(), 0);
	unk_0x65595DB38D0F502A(uVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar48 = unk_0x6295C1B164161BD1(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0xA16EC202D9D35357(), 0);
	unk_0x65595DB38D0F502A(uVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	uVar49 = unk_0x6295C1B164161BD1(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0xA16EC202D9D35357(), 0);
	unk_0x65595DB38D0F502A(uVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_17(var uParam0)
{
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(uParam0), 0);
}

void func_18(int iParam0)
{
	if (unk_0x46C6225A57CA6969(uParam0))
	{
		unk_0x939DA7EBCC6588FF(uParam0);
		if (unk_0x5494F37F35C1D7D7(uParam0))
		{
			iLocal_45 = 4;
		}
	}
}

void func_19(char* sParam0)
{
	if (!func_13(14))
	{
		unk_0xA6CE1BB0BF7AE715("CHEAT_DENIED");
		unk_0x4498E0CBD76B2D72(sParam0);
		func_15(unk_0x69CF75457662E450(0, 1));
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
			if ((((!unk_0x2AF80829930084FD(unk_0x1788E93557766241()) || func_26()) || func_25(23)) || func_25(21)) || func_25(19))
			{
				iLocal_65 = 9;
				return;
			}
			func_23();
			break;
		
		case 9:
			func_22("CHEAT_AIM_SLOW_MO");
			func_29(19, 0);
			unk_0x4A4C49D89D07255A(1f);
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
		unk_0xA6CE1BB0BF7AE715("CHEAT_DEACTIVATED");
		unk_0x4498E0CBD76B2D72(sParam0);
		func_15(unk_0x69CF75457662E450(0, 1));
	}
}

void func_23()
{
	if (unk_0xB4AD7D9D08986FF5(unk_0xA16EC202D9D35357()))
	{
		if (unk_0xF49761626882E968(2, 25))
		{
			if (func_24(unk_0xA16EC202D9D35357()) != joaat("weapon_unarmed") && func_24(unk_0xA16EC202D9D35357()) != joaat("object"))
			{
				unk_0x4A4C49D89D07255A(fLocal_77);
			}
			else
			{
				unk_0x4A4C49D89D07255A(1f);
			}
		}
		else
		{
			unk_0x4A4C49D89D07255A(1f);
		}
	}
}

int func_24(int iParam0)
{
	var uVar0;
	
	unk_0xC00D643B16552C4D(iParam0, &uVar0, 1);
	return uVar0;
}

int func_25(int iParam0)
{
	if (unk_0x889D01384B54BCE3(Global_24690, iParam0))
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
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97439.f_7341.f_99.f_58[iParam0];
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
		unk_0xD0E2BFCE93AE3ABD(&Global_24691, iParam0);
		func_4(iParam0);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_24691, iParam0);
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
			unk_0x4B404C739A9AFC7A(2, 37, 1);
			unk_0x4B404C739A9AFC7A(2, 19, 1);
			if ((((((((!unk_0x2AF80829930084FD(unk_0x1788E93557766241()) || func_26()) || func_32()) || func_31(1)) || unk_0x63D2949B11643BBA(2, 37)) || unk_0x63D2949B11643BBA(2, 19)) || func_25(23)) || func_25(21)) || func_25(16))
			{
				iLocal_62 = 9;
			}
			break;
		
		case 9:
			unk_0x4B404C739A9AFC7A(2, 37, 1);
			unk_0x4B404C739A9AFC7A(2, 19, 1);
			func_22("CHEAT_SLOW_MO");
			func_29(16, 0);
			iLocal_75 = 0;
			unk_0x4A4C49D89D07255A(1f);
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
	if (!unk_0x1DAD7CE53BEE7710())
	{
		return Global_87925.f_44 == 1;
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
			unk_0x4A4C49D89D07255A(0.6f);
			break;
		
		case 2:
			func_14("CHEAT_SLOW_MO2");
			unk_0x4A4C49D89D07255A(0.4f);
			break;
		
		case 3:
			func_14("CHEAT_SLOW_MO3");
			unk_0x4A4C49D89D07255A(0.2f);
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
			unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), 1);
			unk_0x68068FC275E8AC83(unk_0x1788E93557766241(), 1);
			unk_0x67565210B706E956(unk_0xA16EC202D9D35357(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x39272B2594E03395(unk_0xA16EC202D9D35357(), joaat("gadget_parachute"), 1, 0, 1);
			Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
			uVar3 = unk_0xD1613577C809E98B(unk_0xA16EC202D9D35357());
			unk_0x21B0D803C4C9C45E(Var0, &fVar4, 0);
			fVar4 = (fVar4 + 500f);
			unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), Var0.f_0, Var0.f_1, fVar4, 1, 0, 0, 1);
			unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), uVar3);
			iLocal_71 = unk_0x09560C7DE2A384BD();
			unk_0x271524E4281048DC(0);
			iLocal_63 = 3;
			break;
		
		case 3:
			if (func_36(1000, iLocal_71))
			{
				unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), 0);
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
				iLocal_71 = unk_0x09560C7DE2A384BD();
				iLocal_63 = 4;
			}
			break;
		
		case 4:
			if (func_36(1000, iLocal_71))
			{
				unk_0x4B404C739A9AFC7A(0, 144, 1);
				unk_0x4B404C739A9AFC7A(0, 149, 1);
				if (func_7() == 0)
				{
					unk_0x42544C0CC4949BD5(unk_0xA16EC202D9D35357(), 9, 0, 0, 0);
				}
				else
				{
					unk_0x42544C0CC4949BD5(unk_0xA16EC202D9D35357(), 8, 0, 0, 0);
				}
				unk_0x5FE2A83120E8127F(250);
				iLocal_71 = unk_0x09560C7DE2A384BD();
				func_14("CHEAT_SKYFALL");
				unk_0x9F7A8F859130736F(2);
				iLocal_63 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x2AF80829930084FD(unk_0x1788E93557766241()) || func_26()) || func_25(23)) || func_25(21)) || func_25(17))
			{
				iLocal_63 = 9;
				break;
			}
			unk_0x4B404C739A9AFC7A(0, 144, 1);
			unk_0x8A5A9834DB717F2D(2);
			if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
			{
				unk_0x3899C3FF414D2D90(unk_0xA16EC202D9D35357(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0xC406F7EDB827A6CF(unk_0xA16EC202D9D35357()))
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
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		unk_0x3E3552EF770E2B2A(unk_0xA16EC202D9D35357(), joaat("gadget_parachute"));
	}
	if (iLocal_61 != 5)
	{
		unk_0x68068FC275E8AC83(unk_0x1788E93557766241(), 0);
		unk_0x67565210B706E956(unk_0xA16EC202D9D35357(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	unk_0x9F7A8F859130736F(0);
}

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x09560C7DE2A384BD();
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
			iLocal_73 = unk_0x09560C7DE2A384BD();
			unk_0x68068FC275E8AC83(unk_0x1788E93557766241(), 1);
			unk_0x67565210B706E956(unk_0xA16EC202D9D35357(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0x2AF80829930084FD(unk_0x1788E93557766241()) || unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				iLocal_61 = 9;
				return;
			}
			Var0 = { func_17(unk_0x1788E93557766241()) };
			if (((((func_26() || func_32()) || func_25(23)) || func_25(21)) || func_25(15)) || Var0.f_2 <= -170f)
			{
				iLocal_61 = 9;
				return;
			}
			iLocal_74 = (unk_0x09560C7DE2A384BD() - iLocal_73);
			if (unk_0x16CDA1894CFE0781(joaat("appinternet")) == 0)
			{
				func_38((iLocal_72 - iLocal_74), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0);
			}
			if (iLocal_74 >= (iLocal_72 - 1000))
			{
				iLocal_61 = 9;
				return;
			}
			unk_0x68068FC275E8AC83(unk_0x1788E93557766241(), 1);
			unk_0x67565210B706E956(unk_0xA16EC202D9D35357(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xAC32259242A25364();
			break;
		
		case 9:
			func_22("CHEAT_INVINCIBILITY_OFF");
			func_29(15, 0);
			iLocal_61 = 1;
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				unk_0x68068FC275E8AC83(unk_0x1788E93557766241(), 0);
				unk_0x67565210B706E956(unk_0xA16EC202D9D35357(), 0, 0, 0, 0, 0, 0, 0, 0);
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
		Global_1328903.f_1 = 1;
		func_39(7, iVar0);
		Global_1328903.f_3911[iVar0] = iParam0;
		StringCopy(&(Global_1328903.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1328903.f_3911.f_172[iVar0] = iParam2;
		Global_1328903.f_3911.f_216[iVar0] = iParam3;
		Global_1328903.f_3911.f_183[iVar0] = iParam4;
		Global_1328903.f_3911.f_194[iVar0] = iParam5;
		Global_1328903.f_3911.f_249[iVar0] = iParam6;
		Global_1328903.f_3911.f_260[iVar0] = iParam7;
		Global_1328903.f_3911.f_205[iVar0] = iParam8;
		Global_1328903.f_3911.f_314[iVar0] = iParam9;
		Global_1328903.f_3911.f_325[iVar0] = iParam10;
		Global_1328903.f_3911.f_357[iVar0] = iParam11;
		Global_1328903.f_3911.f_238[iVar0] = iParam12;
		Global_1328903.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_39(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1328903.f_4506[iParam0]), iParam1);
}

bool func_40(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_1328903.f_4506[iParam0], iParam1);
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
			if (((!unk_0x2AF80829930084FD(unk_0x1788E93557766241()) || func_25(23)) || func_25(21)) || func_25(12))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0x538F5368E463E2C8(unk_0x1788E93557766241());
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
			if ((((!unk_0x2AF80829930084FD(unk_0x1788E93557766241()) || func_25(23)) || func_25(21)) || func_25(13)) || func_26())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0xF6ADB8771AFD2907(unk_0x1788E93557766241());
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
			func_58(unk_0xA16EC202D9D35357());
			func_56(30000, 1050253722, 1065353216, 0);
			iLocal_64 = 5;
			break;
		
		case 5:
			if ((((func_26() || !unk_0x2AF80829930084FD(unk_0x1788E93557766241())) || func_25(23)) || func_25(21)) || func_25(18))
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_22("CHEAT_DRUNK");
			func_29(18, 0);
			func_47(unk_0xA16EC202D9D35357());
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
	unk_0xA1D3E8BBFB4D4920(0f);
	unk_0x10B8CEB2B722BF40(0f);
	unk_0xAEED20447B8CECBE(0f);
	unk_0x32B9BE5C33D72403(1);
	unk_0x6826F3546F4ED44C(0f);
	unk_0x1AD37E488BC8D426(1);
	unk_0x9E450B87184E155A(0);
	if (unk_0x4CBFDAD06D630F7C("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x124843CE93F39C27("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x06771AF7795B3ECF(&Global_35943))
	{
		if (unk_0x4CBFDAD06D630F7C(&Global_35943))
		{
			unk_0x124843CE93F39C27(&Global_35943);
		}
	}
	if (unk_0xBAB691F99A2A7346(Global_35932))
	{
		if (unk_0xBFD41349389EDB4B(Global_35932))
		{
			unk_0xB37AA66899507900(Global_35932, 0f);
			unk_0x05F0ADDBF1E7785B(Global_35932, 1);
		}
	}
	if (bParam0)
	{
		if (unk_0xD6D9715C81634F0A() != -1 || unk_0xD58373CDEEC1F357() != -1)
		{
			unk_0x2116F20DFA679353();
		}
		else if (unk_0xB4B5BF5882A555F9())
		{
			unk_0x2116F20DFA679353();
		}
	}
	Global_35938 = 0f;
	StringCopy(&Global_35939, "", 16);
	StringCopy(&Global_35943, "", 64);
	StringCopy(&Global_35959, "", 16);
	func_45();
}

void func_45()
{
	Global_35931 = 0;
	Global_35932 = 0;
	Global_35933 = 0;
	Global_35934 = 30000;
	Global_35935 = 0f;
	Global_35937 = 0f;
	Global_35936 = 0f;
	Global_35938 = 0f;
	StringCopy(&Global_35939, "", 16);
}

void func_46(int iParam0)
{
	int iVar0;
	
	if (!Global_35931)
	{
		return;
	}
	iVar0 = unk_0x09560C7DE2A384BD();
	Global_35933 = (iVar0 + iParam0);
	Global_35934 = iParam0;
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
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35768[iVar0 /*5*/];
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
	if (!Global_35742[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35742[iParam0 /*5*/].f_1 == unk_0xA16EC202D9D35357())
		{
			Global_35963 = 0;
		}
	}
	Global_35742[iParam0 /*5*/] = 13;
	Global_35742[iParam0 /*5*/].f_1 = 0;
	Global_35742[iParam0 /*5*/].f_2 = 0;
	Global_35742[iParam0 /*5*/].f_3 = 0;
	Global_35742[iParam0 /*5*/].f_4 = 0;
	Global_35741 = (Global_35741 - 1);
	if (Global_35741 < 0)
	{
		Global_35741 = 0;
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35742[iVar0 /*5*/].f_1 == iParam0)
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
	Global_35849[iVar0 /*5*/] = iParam0;
	Global_35849[iVar0 /*5*/].f_1 = iParam1;
	Global_35849[iVar0 /*5*/].f_2 = iParam2;
	Global_35849[iVar0 /*5*/].f_3 = iParam3;
	Global_35849[iVar0 /*5*/].f_4 = iParam4;
}

int func_52()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35849[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_35849[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35849[iVar0 /*5*/])
			{
				if (iParam1 == Global_35849[iVar0 /*5*/].f_1)
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
		if (!Global_35768[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35768[iVar0 /*5*/].f_1)
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
	if (Global_35931)
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
	if (!unk_0xEB41CF848D5C74B3())
	{
		unk_0xAB5CCF01CDA7E330("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0x6E159174C751778D())
	{
		unk_0xFAF5828A1961B083("DRUNK_SHAKE", (fParam3 * Global_35930));
	}
	if (unk_0xBAB691F99A2A7346(uParam4))
	{
		unk_0x47FDCDDCBDC99BBB(uParam4, "DRUNK_SHAKE", fParam3);
		Global_35932 = uParam4;
	}
	else
	{
		Global_35932 = 0;
	}
	Global_35931 = 1;
	iVar0 = unk_0x09560C7DE2A384BD();
	Global_35933 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_35933 = -1;
		}
	}
	Global_35934 = uParam1;
	Global_35935 = fParam2;
	Global_35937 = fParam3;
	Global_35936 = fParam3;
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
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
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
	Global_35742[iVar2 /*5*/] = 0;
	Global_35742[iVar2 /*5*/].f_1 = iParam0;
	Global_35742[iVar2 /*5*/].f_2 = iParam1;
	Global_35742[iVar2 /*5*/].f_3 = iParam1;
	Global_35742[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xA16EC202D9D35357())
	{
		Global_35963 = 1;
	}
	Global_35741++;
	return 1;
}

int func_60()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35742[iVar0 /*5*/] == 13)
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
		if (iParam0 == Global_35768[iVar0 /*5*/].f_1)
		{
			return Global_35768[iVar0 /*5*/];
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
			if (((!unk_0x2AF80829930084FD(unk_0x1788E93557766241()) || func_25(23)) || func_25(21)) || func_25(11))
			{
				iLocal_57 = 9;
				return;
			}
			if (func_26())
			{
				iLocal_57 = 9;
				return;
			}
			unk_0xF490BCABE814BFE8(unk_0x1788E93557766241());
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
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if ((((((!unk_0x2AF80829930084FD(unk_0x1788E93557766241()) || func_26()) || func_25(23)) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
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
			unk_0xA67BEC863BDCCC89(0);
			iLocal_78 = 0;
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

int func_64(int iParam0)
{
	if (unk_0x889D01384B54BCE3(Global_24691, iParam0))
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
			unk_0xA67BEC863BDCCC89(1);
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
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			func_14("CHEAT_GIVE_PARACHUTE");
			unk_0x39272B2594E03395(unk_0xA16EC202D9D35357(), joaat("gadget_parachute"), 1, 1, 1);
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
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
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
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if (unk_0xF93068A0ED40C55D() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xD25129559B94E910(unk_0x1788E93557766241());
			if (iVar0 > 0)
			{
				func_14("CHEAT_WANTED_DOWN");
				unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), (iVar0 - 1), 0);
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
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if (unk_0xF93068A0ED40C55D() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xD25129559B94E910(unk_0x1788E93557766241());
			if (iVar0 < unk_0xF93068A0ED40C55D())
			{
				unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), iVar0 + 1, 0);
				unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
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
		if ((((((func_25(23) || func_25(22)) || func_25(7)) || func_13(9)) || func_13(10)) || !unk_0x83AD0C6E1C3806E9(func_73())) || !unk_0x11937EA5DA4C00E6(unk_0x1788E93557766241()))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			unk_0xE1F4F71394A235B8(unk_0x1788E93557766241(), 1);
			func_14("CHEAT_SPECIAL_ABILITY");
			func_4(7);
		}
	}
}

int func_73()
{
	return unk_0xA609E58449080951(unk_0xA16EC202D9D35357());
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
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			func_14("CHEAT_HEALTH_ARMOR");
			func_4(6);
			unk_0x4C31C3561F937348(unk_0xA16EC202D9D35357(), unk_0xB1EEA6D557831363(unk_0xA16EC202D9D35357()));
			unk_0x3E6B133FBC07C14C(unk_0xA16EC202D9D35357(), (unk_0x595D21C89E554483(unk_0x1788E93557766241()) - unk_0xF6CBD2E5DA76957E(unk_0xA16EC202D9D35357())));
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				iVar0 = unk_0x8256C5E2202E1DAD(unk_0xA16EC202D9D35357());
				if (unk_0x538DF9E5B1DF01EB(iVar0))
				{
					if (!unk_0xE44A580B551C3645(iVar0))
					{
						unk_0x9350E8544DFB199B(iVar0);
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
				unk_0x1D6412FFE74860F4("EXTRASUNNY");
				unk_0x28F0CE4241D29D1C();
				func_14("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_70 = 2;
				break;
			
			case 2:
				unk_0x1D6412FFE74860F4("CLEAR");
				unk_0x28F0CE4241D29D1C();
				func_14("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_70 = 3;
				break;
			
			case 3:
				unk_0x1D6412FFE74860F4("CLOUDS");
				unk_0x28F0CE4241D29D1C();
				func_14("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_70 = 4;
				break;
			
			case 4:
				unk_0x1D6412FFE74860F4("SMOG");
				unk_0x28F0CE4241D29D1C();
				func_14("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_70 = 6;
				break;
			
			case 6:
				unk_0x1D6412FFE74860F4("OVERCAST");
				unk_0x28F0CE4241D29D1C();
				func_14("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_70 = 7;
				break;
			
			case 7:
				unk_0x1D6412FFE74860F4("RAIN");
				unk_0x28F0CE4241D29D1C();
				func_14("CHEAT_ADVANCE_WEATHER_RAIN");
				func_29(5, 1);
				iLocal_70 = 8;
				break;
			
			case 8:
				unk_0x1D6412FFE74860F4("THUNDER");
				unk_0x28F0CE4241D29D1C();
				func_14("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_70 = 9;
				break;
			
			case 9:
				unk_0x1D6412FFE74860F4("CLEARING");
				unk_0x28F0CE4241D29D1C();
				func_14("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_70 = 11;
				break;
			
			case 11:
				unk_0x1D6412FFE74860F4("XMAS");
				unk_0x28F0CE4241D29D1C();
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
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			unk_0x37BEBD1D516179CF(unk_0xA16EC202D9D35357(), joaat("weapon_knife"), -1, 0);
			unk_0x37BEBD1D516179CF(unk_0xA16EC202D9D35357(), joaat("weapon_smg"), 300, 0);
			unk_0x37BEBD1D516179CF(unk_0xA16EC202D9D35357(), joaat("weapon_assaultrifle"), 300, 1);
			unk_0x37BEBD1D516179CF(unk_0xA16EC202D9D35357(), joaat("weapon_pumpshotgun"), 150, 0);
			unk_0x37BEBD1D516179CF(unk_0xA16EC202D9D35357(), joaat("weapon_sniperrifle"), 30, 0);
			unk_0x37BEBD1D516179CF(unk_0xA16EC202D9D35357(), joaat("weapon_grenade"), 5, 0);
			unk_0x37BEBD1D516179CF(unk_0xA16EC202D9D35357(), joaat("weapon_rpg"), 5, 0);
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
			if (((!unk_0x2AF80829930084FD(unk_0x1788E93557766241()) || func_25(23)) || func_25(22)) || func_25(3))
			{
				iLocal_49 = 9;
			}
			else
			{
				unk_0x4E14EE017615834A(unk_0x1788E93557766241(), 1.49f);
				unk_0xAC32259242A25364();
			}
			break;
		
		case 9:
			unk_0x4E14EE017615834A(unk_0x1788E93557766241(), 1f);
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
			if ((((!unk_0x2AF80829930084FD(unk_0x1788E93557766241()) || unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357())) || func_25(23)) || func_25(22)) || func_25(2))
			{
				iLocal_48 = 9;
			}
			else
			{
				if (unk_0x878FD309D6FA88D0(unk_0xA16EC202D9D35357()) || (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()) && !unk_0x5E01840EE8DA8D5B(unk_0xA16EC202D9D35357())))
				{
					unk_0xF84911857DEE21DE(unk_0x1788E93557766241(), 1.49f);
				}
				else
				{
					unk_0xF84911857DEE21DE(unk_0x1788E93557766241(), 1f);
				}
				unk_0xAC32259242A25364();
			}
			break;
		
		case 9:
			unk_0xF84911857DEE21DE(unk_0x1788E93557766241(), 1f);
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
			if (((!unk_0x2AF80829930084FD(unk_0x1788E93557766241()) || func_25(23)) || func_25(22)) || func_25(1))
			{
				iLocal_47 = 9;
			}
			if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
				if (!unk_0xE44A580B551C3645(iVar0))
				{
					if (unk_0xD8A521688BDBE867(iVar0, -1) == unk_0xA16EC202D9D35357())
					{
						if (iLocal_68 == 0)
						{
							iLocal_68 = iVar0;
							if (!unk_0xE44A580B551C3645(iLocal_68))
							{
								if (func_80(1))
								{
									unk_0x08FC39691ABE9E15(iLocal_68, 1);
								}
								else
								{
									iLocal_68 = 0;
								}
							}
						}
						else if (iLocal_68 != 0)
						{
							if (!unk_0xE44A580B551C3645(iLocal_68))
							{
								unk_0x08FC39691ABE9E15(iLocal_68, 0);
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
			if (!unk_0xE44A580B551C3645(iLocal_68))
			{
				unk_0x08FC39691ABE9E15(iLocal_68, 0);
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
	
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		uVar0 = unk_0xB49BA83A5C224F40();
		if (unk_0x538DF9E5B1DF01EB(uVar0))
		{
			if (unk_0xECFECDAD51A6184F(iVar0, 0))
			{
				iVar1 = unk_0xA609E58449080951(iVar0);
				iVar2 = func_7();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0xD548A98EDA33C15A(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0x2FDD93A1F5E63663(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0x38B61EB14C5FBA9E(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0xD18BE100522E5F15(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0xF8AE6180328ED522(iVar0, "door_dside_r") != -1 || unk_0xF8AE6180328ED522(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0xF8AE6180328ED522(iVar0, "door_dside_r") == -1 || unk_0xF8AE6180328ED522(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0x2FDD93A1F5E63663(iVar1))
					{
						if (unk_0xF8AE6180328ED522(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0xF8AE6180328ED522(iVar0, "seat_dside_r") != -1 || unk_0xF8AE6180328ED522(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0xF8AE6180328ED522(iVar0, "seat_dside_r") == -1 || unk_0xF8AE6180328ED522(iVar0, "seat_pside_r") == -1)
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
					if (!unk_0xD548A98EDA33C15A(iVar1) && !unk_0x2FDD93A1F5E63663(iVar1))
					{
						return 0;
					}
					if (unk_0x541898DB7669BD41(iVar0))
					{
						return 0;
					}
					uVar4 = unk_0xFD03B2968C4DD469(iVar0, &uVar3);
					if (!unk_0x06771AF7795B3ECF(uVar4))
					{
						if (unk_0xB793F1A0B6CC4AE1(uVar4) == unk_0xB793F1A0B6CC4AE1("taxiService"))
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
	
	if (!unk_0x538DF9E5B1DF01EB(uParam0) || !unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_82(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x889D01384B54BCE3(Global_97439.f_5486[iVar9], 0))
		{
			if (unk_0x83A989DB79B98F45(&sVar1, iParam0))
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
	struct<58> Var0;
	
	if (func_9(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
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
	
	uParam1->f_64 = 1;
	uParam1->f_60 = 255;
	uParam1->f_61 = 255;
	uParam1->f_62 = 255;
	uParam1->f_73 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_97439.f_7341.f_99.f_58[128] && !Global_97439.f_7341.f_99.f_58[131])
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
					if (Global_97439.f_7341.f_99.f_58[119])
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
			else if (Global_97439.f_7341.f_99.f_58[118])
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
			if ((((!unk_0x2AF80829930084FD(unk_0x1788E93557766241()) || func_25(23)) || func_25(22)) || func_25(0)) || unk_0xA723CE7CA05AC85E())
			{
				iLocal_46 = 9;
				return;
			}
			unk_0xC1B0B59877B928BC(unk_0x1788E93557766241());
			unk_0x117411595F7E531A(unk_0xA16EC202D9D35357(), 217, 1);
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
		unk_0x4B404C739A9AFC7A(2, 243, 1);
	}
	func_108();
	if (unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		return;
	}
	if (unk_0x82C996F35E05BB71(unk_0xA16EC202D9D35357()))
	{
		return;
	}
	if (!unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		return;
	}
	if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
	{
		return;
	}
	if (func_32() || unk_0xB4B5BF5882A555F9())
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
	if ((func_105(988027572, 12) || unk_0x35764620985CC622(joaat("buzzoff"))) || func_104(20, joaat("buzzard")))
	{
		func_101(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_105(-1134279030, 11) || unk_0x35764620985CC622(joaat("bandit"))) || func_104(20, joaat("bmx")))
	{
		func_101(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_105(971352167, 10) || unk_0x35764620985CC622(joaat("holein1"))) || func_104(20, joaat("caddy")))
	{
		func_101(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_105(-269863225, 10) || unk_0x35764620985CC622(joaat("comet"))) || func_104(20, joaat("comet2")))
	{
		func_101(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_105(458579068, 12) || unk_0x35764620985CC622(joaat("flyspray"))) || func_104(20, joaat("duster")))
	{
		func_101(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_105(-666513193, 12) || unk_0x35764620985CC622(joaat("rocket"))) || func_104(20, joaat("pcj")))
	{
		func_101(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_105(-1245984749, 10) || unk_0x35764620985CC622(joaat("rapidgt"))) || func_104(20, joaat("rapidgt")))
	{
		func_101(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_105(2076774618, 12) || unk_0x35764620985CC622(joaat("offroad"))) || func_104(20, joaat("sanchez")))
	{
		func_101(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_105(855685457, 9) || unk_0x35764620985CC622(joaat("vinewood"))) || func_104(20, joaat("stretch")))
	{
		func_101(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_105(-591395876, 12) || unk_0x35764620985CC622(joaat("barnstorm"))) || func_104(20, joaat("stunt")))
	{
		func_101(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_105(-1399217582, 10) || unk_0x35764620985CC622(joaat("trashed"))) || func_104(20, joaat("trash")))
	{
		func_101(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_100())
	{
		if ((func_105(-375917581, 10) || unk_0x35764620985CC622(joaat("extinct"))) || func_104(20, joaat("dodo")))
		{
			func_101(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_105(-2124307881, 10) || unk_0x35764620985CC622(joaat("deathcar"))) || func_104(20, joaat("dukes2")))
		{
			func_101(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_105(1028964594, 9) || unk_0x35764620985CC622(joaat("bubbles"))) || func_104(20, joaat("submersible2")))
		{
			func_101(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_105(-393416581, 11) || unk_0x35764620985CC622(joaat("hoptoit"))) || func_104(0, 0))
	{
		func_99();
	}
	if ((func_105(-296509791, 8) || unk_0x35764620985CC622(joaat("snowday"))) || func_104(1, 0))
	{
		func_98();
	}
	if ((func_105(1120820643, 7) || unk_0x35764620985CC622(joaat("catchme"))) || func_104(2, 0))
	{
		func_97();
	}
	if ((func_105(-421458016, 9) || unk_0x35764620985CC622(joaat("gotgills"))) || func_104(3, 0))
	{
		func_96();
	}
	if ((func_105(372390926, 12) || unk_0x35764620985CC622(joaat("toolup"))) || func_104(4, 0))
	{
		iLocal_50 = 4;
	}
	if ((func_105(606506837, 8) || unk_0x35764620985CC622(joaat("makeitrain"))) || func_104(5, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_105(453014206, 12) || unk_0x35764620985CC622(joaat("turtle"))) || func_104(6, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_105(1773187142, 9) || unk_0x35764620985CC622(joaat("powerup"))) || func_104(7, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_105(1173296014, 10) || unk_0x35764620985CC622(joaat("fugitive"))) || func_104(8, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_105(-381269753, 10) || unk_0x35764620985CC622(joaat("lawyerup"))) || func_104(9, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_105(-2023988698, 11) || unk_0x35764620985CC622(joaat("skydive"))) || func_104(10, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_105(-835863906, 12) || unk_0x35764620985CC622(joaat("highex"))) || func_104(11, 0))
	{
		func_95();
	}
	if ((func_105(1958387485, 12) || unk_0x35764620985CC622(joaat("incendiary"))) || func_104(12, 0))
	{
		func_94();
	}
	if ((func_105(-903985180, 9) || unk_0x35764620985CC622(joaat("hothands"))) || func_104(13, 0))
	{
		func_93();
	}
	if ((func_105(2087642905, 9) || unk_0x35764620985CC622(joaat("floater"))) || func_104(14, 0))
	{
		func_92();
	}
	if ((func_105(1257820019, 10) || unk_0x35764620985CC622(joaat("painkiller"))) || func_104(15, 0))
	{
		func_91();
	}
	if ((func_105(1540206179, 7) || unk_0x35764620985CC622(joaat("slowmo"))) || func_104(16, 0))
	{
		func_90();
	}
	if ((func_105(115565392, 16) || unk_0x35764620985CC622(joaat("skyfall"))) || func_104(17, 0))
	{
		func_89();
	}
	if ((func_105(-1276513277, 8) || unk_0x35764620985CC622(joaat("liquor"))) || func_104(18, 0))
	{
		func_88();
	}
	if ((func_105(2040433593, 9) || unk_0x35764620985CC622(joaat("deadeye"))) || func_104(19, 0))
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
	if (unk_0xA723CE7CA05AC85E())
	{
		func_19("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_19("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_25(23) || func_25(21)) || func_25(17)) || func_64(0)) || unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0)) || !unk_0xE0032FA93E122BA3())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) || unk_0x6EC1BCB7433D4827(unk_0x1788E93557766241(), 0)) || unk_0x16CDA1894CFE0781(joaat("respawn_controller")) > 0)
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
	
	Var0 = { func_17(unk_0x1788E93557766241()) };
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
	if ((((func_25(23) || func_25(21)) || func_25(14)) || func_64(17)) || unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
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
	if (((func_25(23) || func_25(22)) || func_25(0)) || unk_0xA723CE7CA05AC85E())
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
	
	if (unk_0xCEFAE6CD543A0383())
	{
		if (unk_0x889D01384B54BCE3(unk_0x7058289E8DD601D6(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131779 == 2)
	{
		return 1;
	}
	if (unk_0x6B7032CA494CCEE4())
	{
		if (unk_0x07ED3AB0A86F77AA())
		{
			if (unk_0xB7DEA1403E206005())
			{
				if (unk_0xCEFAE6CD543A0383())
				{
					uVar0 = unk_0x7058289E8DD601D6(866);
					unk_0xD0E2BFCE93AE3ABD(&uVar0, 0);
					unk_0xBE2CD6E2863337FA(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_101(int iParam0, char* sParam1)
{
	if (iLocal_45 == 1)
	{
		if (((((func_13(9) || unk_0x16CDA1894CFE0781(joaat("barry1")) > 0) || unk_0x16CDA1894CFE0781(joaat("tennis")) > 0) || func_25(23)) || func_25(22)) || func_25(20))
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
	return unk_0x889D01384B54BCE3(Global_97439.f_18371[iParam0], iParam1);
}

int func_104(int iParam0, int iParam1)
{
	if (unk_0x889D01384B54BCE3(Global_24693, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_24694)
			{
				unk_0x29DB79DD4D939B38(&Global_24693, iParam0);
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
			unk_0x29DB79DD4D939B38(&Global_24693, iParam0);
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
		return unk_0x87E815A808010249(iParam0, iParam1);
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
			unk_0x465FBA277E9176E4(iLocal_79[iVar0]);
			iLocal_79[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_107()
{
	if (((Global_90042 == 13 || Global_90042 == 10) || Global_90042 == 11) || Global_90042 == 12)
	{
		return 0;
	}
	return 1;
}

void func_108()
{
	if (func_13(14) || (!unk_0x83B393DE31BAC8F0() && iLocal_93 != 0))
	{
		iLocal_93 = unk_0x09560C7DE2A384BD();
	}
	if (iLocal_93 != 0)
	{
		if (!func_13(14))
		{
			if ((unk_0x09560C7DE2A384BD() - iLocal_93) > 1000)
			{
				iLocal_93 = 0;
			}
		}
	}
}

int func_109()
{
	if (Global_68585)
	{
		return 1;
	}
	else if (Global_54752 && !Global_54758)
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
	unk_0x07B8437B4885A819(0);
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
		unk_0x4A4C49D89D07255A(1f);
	}
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		if (iLocal_61 == 5)
		{
			unk_0x68068FC275E8AC83(unk_0x1788E93557766241(), 0);
			unk_0x67565210B706E956(unk_0xA16EC202D9D35357(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		unk_0xF84911857DEE21DE(unk_0x1788E93557766241(), 1f);
		unk_0x4E14EE017615834A(unk_0x1788E93557766241(), 1f);
	}
	unk_0xA67BEC863BDCCC89(0);
	Global_24691 = 0;
	Global_24690 = 0;
	Global_24692 = 0;
	Global_24693 = 0;
	Global_24695 = 0;
	Global_24694 = 0;
	unk_0x82706E6C897B0FA1();
}

