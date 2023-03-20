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
	if (unk_0xC968670BFACE42D9(34))
	{
		func_111();
	}
	Global_24689 = 0;
	Global_24688 = 0;
	Global_24690 = 0;
	Global_24691 = 0;
	Global_24693 = 0;
	Global_24692 = 0;
	func_110();
	while (true)
	{
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	func_88();
	func_69();
	func_23();
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
			if (unk_0xBC72B5D7A1CBD54D())
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
	if (unk_0x98A4EB5D89A0C952(iParam0))
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (unk_0x7239B21A38F536BA(iLocal_67))
			{
				if (!unk_0x5F9532F3B5CC2551(iLocal_67))
				{
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_67, false))
					{
						Var0 = { unk_0x3FEF770D40960D5A(iLocal_67, true) };
						fVar3 = unk_0xE83D4F9BA2A38914(iLocal_67);
						unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), true, false, false, true);
						bVar4 = true;
					}
				}
				unk_0xEA386986E786A54F(&iLocal_67);
			}
			if (!bVar4)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { unk_0x1899F328B0E12848(unk_0xD80958FC74E988A6(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0x1899F328B0E12848(unk_0xD80958FC74E988A6(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0x1899F328B0E12848(unk_0xD80958FC74E988A6(), 0f, 3.5f, 1f) };
				}
				fVar3 = (unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6()) + 90f);
			}
			if (func_16(iParam0, Var0, fVar3))
			{
				iLocal_67 = unk_0xAF35D0D2583051B0(iParam0, Var0, fVar3, 0, 1);
				unk_0x49733E92263139D1(iLocal_67);
				unk_0xE532F5D78798DAAB(iParam0);
				unk_0x629BFA74418D6239(&iLocal_67);
				func_14(sLocal_69);
				func_4(20);
			}
			else
			{
				unk_0xE532F5D78798DAAB(iParam0);
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
		unk_0x933D6A9EEC1BACD0(&Global_24690, iParam0);
		Global_24693 = 1;
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
	
	unk_0x767FBC2AC802EF3D(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xB3271D7AB655B441(iParam0, iVar0, true);
}

int func_7()
{
	func_8();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_8()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_11(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_10(unk_0xD80958FC74E988A6());
			if (func_9(iVar0) && (!func_13(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_9(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_12(char* sParam0)
{
	if (func_13(14))
	{
		iLocal_93 = unk_0x9CD27B0045628463();
	}
	if (iLocal_93 != 0)
	{
		if ((unk_0x9CD27B0045628463() - iLocal_93) <= 1000)
		{
			if (func_13(14) && unk_0x5A859503B0C08678())
			{
				if (unk_0x0C515FAB3FF9EA92(sParam0, "CHEAT_SUPER_JUMP") && unk_0xBC72B5D7A1CBD54D())
				{
					return 0;
				}
				if (unk_0x0C515FAB3FF9EA92(sParam0, "CHEAT_GRAVITY_MOON") && unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
			}
			return 1;
		}
		else if (!unk_0x5A859503B0C08678())
		{
			iLocal_93 = unk_0x9CD27B0045628463();
			return 1;
		}
		else
		{
			iLocal_93 = 0;
		}
	}
	return 0;
}

bool func_13(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_14(char* sParam0)
{
	if (func_12(""))
	{
	}
	else
	{
		unk_0x202709F4C58A0424("CHEAT_ACTIVATED");
		unk_0xC63CD5D2920ACBE7(sParam0);
		func_15(unk_0x2ED7843F8F801023(false, true));
		unk_0x6058665D72302D3F(sParam0);
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
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	var uVar51;
	
	unk_0x03E8D3D5F549087A(iParam0, &Var28, &Var31);
	Var34.f_0 = (unk_0x73D57CFFDD12C355((Var31.f_0 - Var28.f_0)) / 2f);
	Var34.f_1 = (unk_0x73D57CFFDD12C355((Var31.f_1 - Var28.f_1)) / 2f);
	Var34.f_2 = (unk_0x73D57CFFDD12C355((Var31.f_2 - Var28.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam4, -Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[2 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam4, Var34.f_0, -Var34.f_1, -Var34.f_2) };
	Var0[3 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam4, Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[4 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam4, -Var34.f_0, Var34.f_1, -Var34.f_2) };
	Var0[5 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam4, -Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[6 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam4, Var34.f_0, -Var34.f_1, Var34.f_2) };
	Var0[7 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam4, Var34.f_0, Var34.f_1, Var34.f_2) };
	Var0[8 /*3*/] = { unk_0x163E252DE035A133(Param1, fParam4, -Var34.f_0, Var34.f_1, Var34.f_2) };
	if (!unk_0xEEA5AC2EDA7C33E8(Param1))
	{
		return 0;
	}
	iVar50 = unk_0x377906D8A31E5586(func_17(unk_0x4F8644AF03D0E0D6()) + Vector(1f, 0f, 0f), Param1, 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	iVar44 = unk_0x377906D8A31E5586(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	iVar45 = unk_0x377906D8A31E5586(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	iVar46 = unk_0x377906D8A31E5586(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	iVar47 = unk_0x377906D8A31E5586(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	iVar48 = unk_0x377906D8A31E5586(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	iVar49 = unk_0x377906D8A31E5586(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0xD80958FC74E988A6(), 0);
	unk_0x3D87450E15D98694(iVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_17(int iParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
}

void func_18(int iParam0)
{
	if (unk_0x35B9E0803292B641(iParam0))
	{
		unk_0x963D27A58DF860AC(iParam0);
		if (unk_0x98A4EB5D89A0C952(iParam0))
		{
			iLocal_45 = 4;
		}
	}
}

void func_19(char* sParam0)
{
	unk_0x202709F4C58A0424("CHEAT_DENIED");
	unk_0xC63CD5D2920ACBE7(sParam0);
	func_15(unk_0x2ED7843F8F801023(false, true));
	if (func_13(14))
	{
		if (unk_0x0C515FAB3FF9EA92(sParam0, "CHEAT_NOT_NOW"))
		{
			if (func_21(func_22()))
			{
				func_20("CM_WHLP_CHT_ANI", sParam0, 5000);
			}
			else
			{
				func_20("CM_WHLP_CHT", sParam0, 5000);
			}
		}
	}
}

void func_20(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0xC63CD5D2920ACBE7(sParam1);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam2);
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
		case joaat("a_c_cat_01"):
		case joaat("a_c_cow"):
		case joaat("a_c_coyote"):
		case joaat("a_c_deer"):
		case joaat("a_c_husky"):
		case joaat("a_c_mtlion"):
		case joaat("a_c_pig"):
		case joaat("a_c_poodle"):
		case joaat("a_c_pug"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_retriever"):
		case joaat("a_c_rottweiler"):
		case joaat("a_c_shepherd"):
		case joaat("a_c_westy"):
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
		case joaat("ig_orleans"):
			return 1;
			break;
	}
	return 0;
}

int func_22()
{
	return unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6());
}

void func_23()
{
	func_66();
	func_65();
	func_46();
	func_45();
	func_44();
	func_40();
	func_37();
	func_33();
	func_24();
}

void func_24()
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_32(19, 1);
			func_31();
			break;
		
		case 5:
			if ((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_29()) || func_28(23)) || func_28(21)) || func_28(19))
			{
				iLocal_65 = 9;
				return;
			}
			func_26();
			break;
		
		case 9:
			func_25("CHEAT_AIM_SLOW_MO");
			func_32(19, 0);
			unk_0x1D408577D440E81E(1f);
			iLocal_76 = 0;
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_25(char* sParam0)
{
	if (func_12(sParam0))
	{
	}
	else
	{
		unk_0x202709F4C58A0424("CHEAT_DEACTIVATED");
		unk_0xC63CD5D2920ACBE7(sParam0);
		func_15(unk_0x2ED7843F8F801023(false, true));
	}
}

void func_26()
{
	if (unk_0x01FEE67DB37F59B2(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xF3A21BCD95725A4A(2, 25))
		{
			if (func_27(unk_0xD80958FC74E988A6()) != joaat("weapon_unarmed") && func_27(unk_0xD80958FC74E988A6()) != joaat("object"))
			{
				unk_0x1D408577D440E81E(fLocal_77);
			}
			else
			{
				unk_0x1D408577D440E81E(1f);
			}
		}
		else
		{
			unk_0x1D408577D440E81E(1f);
		}
	}
}

int func_27(int iParam0)
{
	var uVar0;
	
	unk_0x3A87E44BB9A01D54(iParam0, &uVar0, true);
	return uVar0;
}

int func_28(int iParam0)
{
	if (unk_0xA921AA820C25702F(Global_24688, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_29()
{
	if (((((((func_13(0) || func_13(11)) || func_13(4)) || func_13(9)) || func_13(10)) || func_13(3)) || func_13(2)) || func_30(35))
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_58[iParam0];
}

void func_31()
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

void func_32(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x933D6A9EEC1BACD0(&Global_24689, iParam0);
		func_4(iParam0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&Global_24689, iParam0);
	}
}

void func_33()
{
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_32(16, 1);
			func_36();
			break;
		
		case 5:
			unk_0xFE99B66D079CF6BC(2, 37, true);
			unk_0xFE99B66D079CF6BC(2, 19, true);
			if ((((((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_29()) || func_35()) || func_34(1)) || unk_0x91AEF906BCA88877(2, 37)) || unk_0x91AEF906BCA88877(2, 19)) || func_28(23)) || func_28(21)) || func_28(16))
			{
				iLocal_62 = 9;
			}
			break;
		
		case 9:
			unk_0xFE99B66D079CF6BC(2, 37, true);
			unk_0xFE99B66D079CF6BC(2, 19, true);
			func_25("CHEAT_SLOW_MO");
			func_32(16, 0);
			iLocal_75 = 0;
			unk_0x1D408577D440E81E(1f);
			iLocal_62 = 1;
			break;
		
		default:
			break;
	}
}

bool func_34(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17098.f_4 && Global_17098.f_104 == 4);
	}
	return Global_17098.f_4;
}

int func_35()
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

void func_36()
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
			unk_0x1D408577D440E81E(0.6f);
			break;
		
		case 2:
			func_14("CHEAT_SLOW_MO2");
			unk_0x1D408577D440E81E(0.4f);
			break;
		
		case 3:
			func_14("CHEAT_SLOW_MO3");
			unk_0x1D408577D440E81E(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_62 = 5;
}

void func_37()
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 2:
			func_32(17, 1);
			unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
			unk_0x239528EACDC3E7DE(unk_0x4F8644AF03D0E0D6(), true);
			unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), true, true, true, true, true, false, false, false);
			unk_0xBF0FD6E56C964FCB(unk_0xD80958FC74E988A6(), joaat("gadget_parachute"), 1, false, true);
			Var0 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
			fVar3 = unk_0xE83D4F9BA2A38914(unk_0xD80958FC74E988A6());
			unk_0xC906A7DAB05C8D2B(Var0, &fVar4);
			fVar4 = (fVar4 + 500f);
			unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Var0.f_0, Var0.f_1, fVar4, true, false, false, true);
			unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), fVar3);
			iLocal_71 = unk_0x9CD27B0045628463();
			unk_0x891B5B39AC6302AF(0);
			iLocal_63 = 3;
			break;
		
		case 3:
			if (func_39(1000, iLocal_71))
			{
				unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
				iLocal_71 = unk_0x9CD27B0045628463();
				iLocal_63 = 4;
			}
			break;
		
		case 4:
			if (func_39(1000, iLocal_71))
			{
				unk_0xFE99B66D079CF6BC(0, 144, true);
				unk_0xFE99B66D079CF6BC(0, 149, true);
				if (func_7() == 0)
				{
					unk_0x262B14F48D29DE80(unk_0xD80958FC74E988A6(), 9, 0, 0, 0);
				}
				else
				{
					unk_0x262B14F48D29DE80(unk_0xD80958FC74E988A6(), 8, 0, 0, 0);
				}
				unk_0xD4E8E24955024033(250);
				iLocal_71 = unk_0x9CD27B0045628463();
				func_14("CHEAT_SKYFALL");
				unk_0xC5F0A8EBD3F361CE(2);
				iLocal_63 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_29()) || func_28(23)) || func_28(21)) || func_28(17))
			{
				iLocal_63 = 9;
				break;
			}
			unk_0xFE99B66D079CF6BC(0, 144, true);
			unk_0x6806C51AD12B83B8(2);
			if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
			{
				unk_0xC5F68BE9613E2D18(unk_0xD80958FC74E988A6(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, true, false, false, false, true);
				if (unk_0x8BAD02F0368D9E14(unk_0xD80958FC74E988A6()))
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
			func_38();
			func_25("CHEAT_SKYFALL");
			func_32(17, 0);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

void func_38()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		unk_0x4899CB088EDF59B8(unk_0xD80958FC74E988A6(), joaat("gadget_parachute"));
	}
	if (iLocal_61 != 5)
	{
		unk_0x239528EACDC3E7DE(unk_0x4F8644AF03D0E0D6(), false);
		unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), false, false, false, false, false, false, false, false);
	}
	unk_0xC5F0A8EBD3F361CE(0);
}

int func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x9CD27B0045628463();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_40()
{
	struct<3> Var0;
	
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_INVINCIBILITY");
			func_32(15, 1);
			iLocal_61 = 5;
			iLocal_73 = unk_0x9CD27B0045628463();
			unk_0x239528EACDC3E7DE(unk_0x4F8644AF03D0E0D6(), true);
			unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), true, true, true, true, true, false, false, false);
			break;
		
		case 5:
			if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				iLocal_61 = 9;
				return;
			}
			Var0 = { func_17(unk_0x4F8644AF03D0E0D6()) };
			if (((((func_29() || func_35()) || func_28(23)) || func_28(21)) || func_28(15)) || Var0.f_2 <= -170f)
			{
				iLocal_61 = 9;
				return;
			}
			iLocal_74 = (unk_0x9CD27B0045628463() - iLocal_73);
			if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) == 0)
			{
				func_41((iLocal_72 - iLocal_74), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0);
			}
			if (iLocal_74 >= (iLocal_72 - 1000))
			{
				iLocal_61 = 9;
				return;
			}
			unk_0x239528EACDC3E7DE(unk_0x4F8644AF03D0E0D6(), true);
			unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), true, true, true, true, true, false, false, false);
			unk_0x047CBED6F6F8B63C();
			break;
		
		case 9:
			func_25("CHEAT_INVINCIBILITY_OFF");
			func_32(15, 0);
			iLocal_61 = 1;
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				unk_0x239528EACDC3E7DE(unk_0x4F8644AF03D0E0D6(), false);
				unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), false, false, false, false, false, false, false, false);
			}
			break;
		
		default:
			break;
	}
}

void func_41(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iVar0 == -1)
		{
			if (func_43(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328798.f_1 = 1;
		func_42(7, iVar0);
		Global_1328798.f_1664[iVar0] = iParam0;
		StringCopy(&(Global_1328798.f_1664.f_5[iVar0 /*16*/]), sParam1, 64);
		Global_1328798.f_1664.f_70[iVar0] = iParam2;
		Global_1328798.f_1664.f_90[iVar0] = iParam3;
		Global_1328798.f_1664.f_75[iVar0] = iParam4;
		Global_1328798.f_1664.f_80[iVar0] = iParam5;
		Global_1328798.f_1664.f_105[iVar0] = iParam6;
		Global_1328798.f_1664.f_110[iVar0] = iParam7;
		Global_1328798.f_1664.f_85[iVar0] = iParam8;
		Global_1328798.f_1664.f_129[iVar0] = iParam9;
		Global_1328798.f_1664.f_134[iVar0] = iParam10;
		Global_1328798.f_1664.f_148[iVar0] = iParam11;
		Global_1328798.f_1664.f_100[iVar0] = iParam12;
	}
}

void func_42(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1328798.f_1912[iParam0]), iParam1);
}

bool func_43(int iParam0, int iParam1)
{
	return unk_0xA921AA820C25702F(Global_1328798.f_1912[iParam0], iParam1);
}

void func_44()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FLAMING_BULLETS");
			func_32(12, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_28(23)) || func_28(21)) || func_28(12))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_29())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0x11879CDD803D30F4(unk_0x4F8644AF03D0E0D6());
			break;
		
		case 9:
			func_25("CHEAT_FLAMING_BULLETS");
			func_32(12, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_45()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_EXPLOSIVE_MELEE");
			func_32(13, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if ((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_28(23)) || func_28(21)) || func_28(13)) || func_29())
			{
				iLocal_59 = 9;
				return;
			}
			unk_0xFF1BED81BFDC0FE0(unk_0x4F8644AF03D0E0D6());
			break;
		
		case 9:
			func_25("CHEAT_EXPLOSIVE_MELEE");
			func_32(13, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_46()
{
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_DRUNK");
			func_32(18, 1);
			func_61(unk_0xD80958FC74E988A6());
			func_59(30000, 1050253722, 1065353216, 0);
			iLocal_64 = 5;
			break;
		
		case 5:
			if ((((func_29() || !unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6())) || func_28(23)) || func_28(21)) || func_28(18))
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_25("CHEAT_DRUNK");
			func_32(18, 0);
			func_50(unk_0xD80958FC74E988A6());
			func_49(1000);
			iLocal_64 = 1;
			break;
		
		case 10:
			func_47(1);
			func_32(18, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_47(bool bParam0)
{
	unk_0x487A82C650EB7799(0f);
	unk_0x0225778816FDC28C(0f);
	unk_0xA87E00932DB4D85D(0f);
	unk_0x0EF93E9F3D08C178(true);
	unk_0xC724C701C30B2FE7(0f);
	unk_0x2238E588E588A6D7(true);
	unk_0x12561FCBB62D5B9C(0);
	if (unk_0xB65B60556E2A9225("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xDFE8422B3B94E688("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xCA042B6957743895(&Global_35931))
	{
		if (unk_0xB65B60556E2A9225(&Global_35931))
		{
			unk_0xDFE8422B3B94E688(&Global_35931);
		}
	}
	if (unk_0xA7A932170592B50E(Global_35920))
	{
		if (unk_0x6B24BFE83A2BE47B(Global_35920))
		{
			unk_0xD93DB43B82BC0D00(Global_35920, 0f);
			unk_0xBDECF64367884AC3(Global_35920, true);
		}
	}
	if (bParam0)
	{
		if (unk_0xFDF3D97C674AFB66() != -1 || unk_0x459FD2C8D0AB78BC() != -1)
		{
			unk_0x0F07E7745A236711();
		}
		else if (unk_0xD9D2CFFF49FAB35F())
		{
			unk_0x0F07E7745A236711();
		}
	}
	Global_35926 = 0f;
	StringCopy(&Global_35927, "", 16);
	StringCopy(&Global_35931, "", 64);
	StringCopy(&Global_35947, "", 16);
	func_48();
}

void func_48()
{
	Global_35919 = 0;
	Global_35920 = 0;
	Global_35921 = 0;
	Global_35922 = 30000;
	Global_35923 = 0f;
	Global_35925 = 0f;
	Global_35924 = 0f;
	Global_35926 = 0f;
	StringCopy(&Global_35927, "", 16);
}

void func_49(int iParam0)
{
	int iVar0;
	
	if (!Global_35919)
	{
		return;
	}
	iVar0 = unk_0x9CD27B0045628463();
	Global_35921 = (iVar0 + iParam0);
	Global_35922 = iParam0;
}

void func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return;
	}
	iVar0 = func_58(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35756[iVar0 /*5*/];
		func_53(1, iVar1, 1);
		return;
	}
	iVar2 = func_52(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_51(iVar2);
}

void func_51(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35730[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35730[iParam0 /*5*/].f_1 == unk_0xD80958FC74E988A6())
		{
			Global_35951 = 0;
		}
	}
	Global_35730[iParam0 /*5*/] = 13;
	Global_35730[iParam0 /*5*/].f_1 = 0;
	Global_35730[iParam0 /*5*/].f_2 = 0;
	Global_35730[iParam0 /*5*/].f_3 = 0;
	Global_35730[iParam0 /*5*/].f_4 = 0;
	Global_35729 = (Global_35729 - 1);
	if (Global_35729 < 0)
	{
		Global_35729 = 0;
	}
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35730[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_53(int iParam0, int iParam1, int iParam2)
{
	func_54(iParam0, iParam1, iParam2, 0, 0);
}

void func_54(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_56(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_55();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35837[iVar0 /*5*/] = iParam0;
	Global_35837[iVar0 /*5*/].f_1 = iParam1;
	Global_35837[iVar0 /*5*/].f_2 = iParam2;
	Global_35837[iVar0 /*5*/].f_3 = iParam3;
	Global_35837[iVar0 /*5*/].f_4 = iParam4;
}

int func_55()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35837[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	if (func_57(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_35837[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35837[iVar0 /*5*/])
			{
				if (iParam1 == Global_35837[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_58(int iParam0)
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
		if (!Global_35756[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35756[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_59(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_60(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_60(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_35919)
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
	if (!unk_0x016C090630DF1F89())
	{
		unk_0xFD55E49555E017CF("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0xBBC08F6B4CB8FF0A())
	{
		unk_0xDCE214D9ED58F3CF("DRUNK_SHAKE", (fParam3 * Global_35918));
	}
	if (unk_0xA7A932170592B50E(iParam4))
	{
		unk_0x6A25241C340D3822(iParam4, "DRUNK_SHAKE", fParam3);
		Global_35920 = iParam4;
	}
	else
	{
		Global_35920 = 0;
	}
	Global_35919 = 1;
	iVar0 = unk_0x9CD27B0045628463();
	Global_35921 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_35921 = -1;
		}
	}
	Global_35922 = uParam1;
	Global_35923 = fParam2;
	Global_35925 = fParam3;
	Global_35924 = fParam3;
}

int func_61(int iParam0)
{
	return func_62(iParam0, -1, 1);
}

int func_62(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = func_64(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_52(iParam0);
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
	iVar2 = func_63();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_35730[iVar2 /*5*/] = 0;
	Global_35730[iVar2 /*5*/].f_1 = iParam0;
	Global_35730[iVar2 /*5*/].f_2 = iParam1;
	Global_35730[iVar2 /*5*/].f_3 = iParam1;
	Global_35730[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xD80958FC74E988A6())
	{
		Global_35951 = 1;
	}
	Global_35729++;
	return 1;
}

int func_63()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35730[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_64(int iParam0)
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
		if (iParam0 == Global_35756[iVar0 /*5*/].f_1)
		{
			return Global_35756[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_65()
{
	switch (iLocal_57)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_BANG_BANG");
			func_32(11, 1);
			iLocal_57 = 5;
			break;
		
		case 5:
			if (((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_28(23)) || func_28(21)) || func_28(11))
			{
				iLocal_57 = 9;
				return;
			}
			if (func_29())
			{
				iLocal_57 = 9;
				return;
			}
			unk_0xA66C71C98D5F2CFB(unk_0x4F8644AF03D0E0D6());
			break;
		
		case 9:
			func_25("CHEAT_BANG_BANG");
			func_32(11, 0);
			iLocal_57 = 1;
			break;
		
		default:
			break;
	}
}

void func_66()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_4(14);
			func_32(14, 1);
			func_68();
			break;
		
		case 5:
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if ((((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_29()) || func_28(23)) || func_28(21)) || func_28(14)) || func_67(17)) || unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
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
			func_25("CHEAT_GRAVITY_MOON");
			func_32(14, 0);
			unk_0x740E14FAD5842351(0);
			iLocal_78 = 0;
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

int func_67(int iParam0)
{
	if (unk_0xA921AA820C25702F(Global_24689, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_68()
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
			unk_0x740E14FAD5842351(1);
			break;
		
		default:
			break;
	}
	iLocal_60 = 5;
}

void func_69()
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_75();
	func_74();
	func_73();
	func_70();
}

void func_70()
{
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_28(23) || func_28(22)) || func_28(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			func_14("CHEAT_GIVE_PARACHUTE");
			unk_0xBF0FD6E56C964FCB(unk_0xD80958FC74E988A6(), joaat("gadget_parachute"), 1, true, true);
			func_4(10);
		}
	}
}

int func_71()
{
	if (iLocal_92)
	{
		iLocal_92 = 0;
		return 0;
	}
	if (func_72(0))
	{
		return 1;
	}
	return 0;
}

int func_72(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_2263, 14))
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_73()
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_28(23) || func_28(22)) || func_28(9))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (unk_0x462E0DB9B137DC5F() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6());
			if (iVar0 > 0)
			{
				func_14("CHEAT_WANTED_DOWN");
				unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), (iVar0 - 1), false);
				func_4(9);
			}
			else
			{
				func_19("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_74()
{
	int iVar0;
	
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((func_28(23) || func_28(22)) || func_28(8))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if (unk_0x462E0DB9B137DC5F() == 0)
			{
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xE28E54788CE8F12D(unk_0x4F8644AF03D0E0D6());
			if (iVar0 < unk_0x462E0DB9B137DC5F())
			{
				unk_0x39FF19C64EF7DA5B(unk_0x4F8644AF03D0E0D6(), iVar0 + 1, false);
				unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
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

void func_75()
{
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_28(23) || func_28(22)) || func_28(7)) || func_13(9)) || func_13(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x3DACA8DDC6FD4980(unk_0x4F8644AF03D0E0D6(), 1);
			func_14("CHEAT_SPECIAL_ABILITY");
			func_4(7);
		}
	}
}

void func_76()
{
	int iVar0;
	
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((((func_28(23) || func_28(22)) || func_28(6)) || func_13(9)) || func_13(10))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			func_14("CHEAT_HEALTH_ARMOR");
			func_4(6);
			unk_0x6B76DC1F3AE6E6A3(unk_0xD80958FC74E988A6(), unk_0x15D757606D170C3C(unk_0xD80958FC74E988A6()));
			unk_0x5BA652A0CD14DF2F(unk_0xD80958FC74E988A6(), (unk_0x92659B4CE1863CB3(unk_0x4F8644AF03D0E0D6()) - unk_0x9483AF821605B1D8(unk_0xD80958FC74E988A6())));
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
				if (unk_0x7239B21A38F536BA(iVar0))
				{
					if (!unk_0x5F9532F3B5CC2551(iVar0))
					{
						unk_0x115722B1B9C14C1C(iVar0);
					}
				}
			}
		}
	}
}

void func_77()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_28(23) || func_28(22)) || func_28(5))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
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
				unk_0xED712CA327900C8A("EXTRASUNNY");
				unk_0xCCC39339BEF76CF5();
				func_14("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_70 = 2;
				break;
			
			case 2:
				unk_0xED712CA327900C8A("CLEAR");
				unk_0xCCC39339BEF76CF5();
				func_14("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_70 = 3;
				break;
			
			case 3:
				unk_0xED712CA327900C8A("CLOUDS");
				unk_0xCCC39339BEF76CF5();
				func_14("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_70 = 4;
				break;
			
			case 4:
				unk_0xED712CA327900C8A("SMOG");
				unk_0xCCC39339BEF76CF5();
				func_14("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_70 = 6;
				break;
			
			case 6:
				unk_0xED712CA327900C8A("OVERCAST");
				unk_0xCCC39339BEF76CF5();
				func_14("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_70 = 7;
				break;
			
			case 7:
				unk_0xED712CA327900C8A("RAIN");
				unk_0xCCC39339BEF76CF5();
				func_14("CHEAT_ADVANCE_WEATHER_RAIN");
				func_32(5, 1);
				iLocal_70 = 8;
				break;
			
			case 8:
				unk_0xED712CA327900C8A("THUNDER");
				unk_0xCCC39339BEF76CF5();
				func_14("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_70 = 9;
				break;
			
			case 9:
				unk_0xED712CA327900C8A("CLEARING");
				unk_0xCCC39339BEF76CF5();
				func_14("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_70 = 11;
				break;
			
			case 11:
				unk_0xED712CA327900C8A("XMAS");
				unk_0xCCC39339BEF76CF5();
				func_14("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_70 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_78()
{
	if (iLocal_50 == 4)
	{
		iLocal_50 = 1;
		if ((func_28(23) || func_28(22)) || func_28(4))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		func_14("CHEAT_GIVE_WEAPONS");
		func_4(4);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_knife"), -1, false);
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_smg"), 300, false);
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_assaultrifle"), 300, true);
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_pumpshotgun"), 150, false);
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_sniperrifle"), 30, false);
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_grenade"), 5, false);
			unk_0xB282DC6EBD803C75(unk_0xD80958FC74E988A6(), joaat("weapon_rpg"), 5, false);
		}
	}
}

void func_79()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_SWIM");
			func_32(3, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if (((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_28(23)) || func_28(22)) || func_28(3))
			{
				iLocal_49 = 9;
			}
			else
			{
				unk_0xA91C6F0FF7D16A13(unk_0x4F8644AF03D0E0D6(), 1.49f);
				unk_0x047CBED6F6F8B63C();
			}
			break;
		
		case 9:
			unk_0xA91C6F0FF7D16A13(unk_0x4F8644AF03D0E0D6(), 1f);
			func_25("CHEAT_FAST_SWIM");
			func_32(3, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()
{
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_FAST_RUN");
			func_32(2, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if ((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6())) || func_28(23)) || func_28(22)) || func_28(2))
			{
				iLocal_48 = 9;
			}
			else
			{
				if (unk_0xC5286FFC176F28A2(unk_0xD80958FC74E988A6()) || (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()) && !unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6())))
				{
					unk_0x6DB47AA77FD94E09(unk_0x4F8644AF03D0E0D6(), 1.49f);
				}
				else
				{
					unk_0x6DB47AA77FD94E09(unk_0x4F8644AF03D0E0D6(), 1f);
				}
				unk_0x047CBED6F6F8B63C();
			}
			break;
		
		case 9:
			unk_0x6DB47AA77FD94E09(unk_0x4F8644AF03D0E0D6(), 1f);
			func_25("CHEAT_FAST_RUN");
			func_32(2, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

void func_81()
{
	int iVar0;
	
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SLIDEY_CARS");
			func_32(1, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if (((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_28(23)) || func_28(22)) || func_28(1))
			{
				iLocal_47 = 9;
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
			{
				iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				if (!unk_0x5F9532F3B5CC2551(iVar0))
				{
					if (unk_0xBB40DD2270B65366(iVar0, -1) == unk_0xD80958FC74E988A6())
					{
						if (iLocal_68 == 0)
						{
							iLocal_68 = iVar0;
							if (!unk_0x5F9532F3B5CC2551(iLocal_68))
							{
								if (func_82(1))
								{
									unk_0x222FF6A823D122E2(iLocal_68, true);
								}
								else
								{
									iLocal_68 = 0;
								}
							}
						}
						else if (iLocal_68 != 0)
						{
							if (!unk_0x5F9532F3B5CC2551(iLocal_68))
							{
								unk_0x222FF6A823D122E2(iLocal_68, false);
								iLocal_68 = 0;
							}
						}
					}
				}
			}
			break;
		
		case 9:
			func_25("CHEAT_SLIDEY_CARS");
			iLocal_47 = 10;
			break;
		
		case 10:
			if (!unk_0x5F9532F3B5CC2551(iLocal_68))
			{
				unk_0x222FF6A823D122E2(iLocal_68, false);
				iLocal_68 = 0;
			}
			func_32(1, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar4;
	
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		iVar0 = unk_0xB6997A7EB3F5C8C0();
		if (unk_0x7239B21A38F536BA(iVar0))
		{
			if (unk_0x4C241E39B23DF959(iVar0, false))
			{
				iVar1 = unk_0x9F47B058362C84B5(iVar0);
				iVar2 = func_7();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0x7F6DB52EEFC96DF8(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0xB50C0B0CEDC6CE84(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0xDCE4334788AF94EA(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0x45A9187928F4B9E3(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0xFB71170B7E76ACBA(iVar0, "door_dside_r") != -1 || unk_0xFB71170B7E76ACBA(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0xFB71170B7E76ACBA(iVar0, "door_dside_r") == -1 || unk_0xFB71170B7E76ACBA(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0xB50C0B0CEDC6CE84(iVar1))
					{
						if (unk_0xFB71170B7E76ACBA(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0xFB71170B7E76ACBA(iVar0, "seat_dside_r") != -1 || unk_0xFB71170B7E76ACBA(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0xFB71170B7E76ACBA(iVar0, "seat_dside_r") == -1 || unk_0xFB71170B7E76ACBA(iVar0, "seat_pside_r") == -1)
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
					if (func_85(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0x7F6DB52EEFC96DF8(iVar1) && !unk_0xB50C0B0CEDC6CE84(iVar1))
					{
						return 0;
					}
					if (unk_0x9F243D3919F442FE(iVar0))
					{
						return 0;
					}
					sVar4 = unk_0xA6E9C38DB51D7748(iVar0, &uVar3);
					if (!unk_0xCA042B6957743895(sVar4))
					{
						if (unk_0xD24D37CC275948CC(sVar4) == unk_0xD24D37CC275948CC("taxiService"))
						{
							return 0;
						}
					}
					if (func_83(iVar0, iVar2, 0))
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

int func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x7239B21A38F536BA(iParam0) || !unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_84(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xA921AA820C25702F(Global_97173.f_5486[iVar9], 0))
		{
			if (unk_0xCEE4490CD57BB3C2(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_85(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_9(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_86(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_86(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	Var1.f_64 = 1;
	Var1.f_60 = 255;
	Var1.f_61 = 255;
	Var1.f_62 = 255;
	Var1.f_73 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_97173.f_7311.f_99.f_58[128] && !Global_97173.f_7311.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_11[0] = 1;
					StringCopy(&(Var1.f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "BETTY 32", 16);
					if (Global_97173.f_7311.f_99.f_58[119])
					{
						Var1.f_11[1] = 1;
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
			else if (Global_97173.f_7311.f_99.f_58[118])
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
					Var1.f_0 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "FC1988", 16);
					Var1.f_11[0] = 1;
					Var1.f_11[1] = 1;
					Var1.f_11[2] = 1;
					Var1.f_11[3] = 1;
					Var1.f_11[4] = 1;
					Var1.f_11[5] = 1;
					Var1.f_11[6] = 1;
					Var1.f_11[7] = 1;
					Var1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

void func_87()
{
	switch (iLocal_46)
	{
		case 1:
			break;
		
		case 4:
			func_14("CHEAT_SUPER_JUMP");
			func_32(0, 1);
			iLocal_46 = 5;
			break;
		
		case 5:
			if ((((!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()) || func_28(23)) || func_28(22)) || func_28(0)) || unk_0xBC72B5D7A1CBD54D())
			{
				iLocal_46 = 9;
				return;
			}
			unk_0x57FFF03E423A4C0B(unk_0x4F8644AF03D0E0D6());
			unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 217, true);
			break;
		
		case 9:
			func_25("CHEAT_SUPER_JUMP");
			func_32(0, 0);
			iLocal_46 = 1;
			break;
		
		default:
			break;
	}
}

void func_88()
{
	if ((func_109() || iLocal_93 != 0) || func_13(14))
	{
		unk_0xFE99B66D079CF6BC(2, 243, true);
	}
	if (iLocal_93 != 0)
	{
		if (!func_13(14))
		{
			if ((unk_0x9CD27B0045628463() - iLocal_93) > 1000)
			{
				iLocal_93 = 0;
			}
		}
	}
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		return;
	}
	if (unk_0x90A09F3A45FED688(unk_0xD80958FC74E988A6()))
	{
		return;
	}
	if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		return;
	}
	if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
	{
		return;
	}
	if (func_35() || unk_0xD9D2CFFF49FAB35F())
	{
		return;
	}
	if (func_108())
	{
		if (!iLocal_91)
		{
			func_107();
			iLocal_91 = 1;
		}
		return;
	}
	iLocal_91 = 0;
	iLocal_92 = 0;
	if ((unk_0x071E2A839DE82D90(988027572, 12) || unk_0x557E43C447E700A8(joaat("buzzoff"))) || func_106(20, joaat("buzzard")))
	{
		func_103(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((unk_0x071E2A839DE82D90(-1134279030, 11) || unk_0x557E43C447E700A8(joaat("bandit"))) || func_106(20, joaat("bmx")))
	{
		func_103(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((unk_0x071E2A839DE82D90(971352167, 10) || unk_0x557E43C447E700A8(joaat("holein1"))) || func_106(20, joaat("caddy")))
	{
		func_103(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((unk_0x071E2A839DE82D90(-269863225, 10) || unk_0x557E43C447E700A8(joaat("comet"))) || func_106(20, joaat("comet2")))
	{
		func_103(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((unk_0x071E2A839DE82D90(458579068, 12) || unk_0x557E43C447E700A8(joaat("flyspray"))) || func_106(20, joaat("duster")))
	{
		func_103(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((unk_0x071E2A839DE82D90(-666513193, 12) || unk_0x557E43C447E700A8(joaat("rocket"))) || func_106(20, joaat("pcj")))
	{
		func_103(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((unk_0x071E2A839DE82D90(-1245984749, 10) || unk_0x557E43C447E700A8(joaat("rapidgt"))) || func_106(20, joaat("rapidgt")))
	{
		func_103(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((unk_0x071E2A839DE82D90(2076774618, 12) || unk_0x557E43C447E700A8(joaat("offroad"))) || func_106(20, joaat("sanchez")))
	{
		func_103(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((unk_0x071E2A839DE82D90(855685457, 9) || unk_0x557E43C447E700A8(joaat("vinewood"))) || func_106(20, joaat("stretch")))
	{
		func_103(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((unk_0x071E2A839DE82D90(-591395876, 12) || unk_0x557E43C447E700A8(joaat("barnstorm"))) || func_106(20, joaat("stunt")))
	{
		func_103(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((unk_0x071E2A839DE82D90(-1399217582, 10) || unk_0x557E43C447E700A8(joaat("trashed"))) || func_106(20, joaat("trash")))
	{
		func_103(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_102())
	{
		if ((unk_0x071E2A839DE82D90(-375917581, 10) || unk_0x557E43C447E700A8(joaat("extinct"))) || func_106(20, joaat("dodo")))
		{
			func_103(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((unk_0x071E2A839DE82D90(-2124307881, 10) || unk_0x557E43C447E700A8(joaat("deathcar"))) || func_106(20, joaat("dukes2")))
		{
			func_103(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((unk_0x071E2A839DE82D90(1028964594, 9) || unk_0x557E43C447E700A8(joaat("bubbles"))) || func_106(20, joaat("submersible2")))
		{
			func_103(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((unk_0x071E2A839DE82D90(-393416581, 11) || unk_0x557E43C447E700A8(joaat("hoptoit"))) || func_106(0, 0))
	{
		func_101();
	}
	if ((unk_0x071E2A839DE82D90(-296509791, 8) || unk_0x557E43C447E700A8(joaat("snowday"))) || func_106(1, 0))
	{
		func_100();
	}
	if ((unk_0x071E2A839DE82D90(1120820643, 7) || unk_0x557E43C447E700A8(joaat("catchme"))) || func_106(2, 0))
	{
		func_99();
	}
	if ((unk_0x071E2A839DE82D90(-421458016, 9) || unk_0x557E43C447E700A8(joaat("gotgills"))) || func_106(3, 0))
	{
		func_98();
	}
	if ((unk_0x071E2A839DE82D90(372390926, 12) || unk_0x557E43C447E700A8(joaat("toolup"))) || func_106(4, 0))
	{
		iLocal_50 = 4;
	}
	if ((unk_0x071E2A839DE82D90(606506837, 8) || unk_0x557E43C447E700A8(joaat("makeitrain"))) || func_106(5, 0))
	{
		iLocal_51 = 4;
	}
	if ((unk_0x071E2A839DE82D90(453014206, 12) || unk_0x557E43C447E700A8(joaat("turtle"))) || func_106(6, 0))
	{
		iLocal_52 = 4;
	}
	if ((unk_0x071E2A839DE82D90(1773187142, 9) || unk_0x557E43C447E700A8(joaat("powerup"))) || func_106(7, 0))
	{
		iLocal_53 = 4;
	}
	if ((unk_0x071E2A839DE82D90(1173296014, 10) || unk_0x557E43C447E700A8(joaat("fugitive"))) || func_106(8, 0))
	{
		iLocal_54 = 4;
	}
	if ((unk_0x071E2A839DE82D90(-381269753, 10) || unk_0x557E43C447E700A8(joaat("lawyerup"))) || func_106(9, 0))
	{
		iLocal_55 = 4;
	}
	if ((unk_0x071E2A839DE82D90(-2023988698, 11) || unk_0x557E43C447E700A8(joaat("skydive"))) || func_106(10, 0))
	{
		iLocal_56 = 4;
	}
	if ((unk_0x071E2A839DE82D90(-835863906, 12) || unk_0x557E43C447E700A8(joaat("highex"))) || func_106(11, 0))
	{
		func_97();
	}
	if ((unk_0x071E2A839DE82D90(1958387485, 12) || unk_0x557E43C447E700A8(joaat("incendiary"))) || func_106(12, 0))
	{
		func_96();
	}
	if ((unk_0x071E2A839DE82D90(-903985180, 9) || unk_0x557E43C447E700A8(joaat("hothands"))) || func_106(13, 0))
	{
		func_95();
	}
	if ((unk_0x071E2A839DE82D90(2087642905, 9) || unk_0x557E43C447E700A8(joaat("floater"))) || func_106(14, 0))
	{
		func_94();
	}
	if ((unk_0x071E2A839DE82D90(1257820019, 10) || unk_0x557E43C447E700A8(joaat("painkiller"))) || func_106(15, 0))
	{
		func_93();
	}
	if ((unk_0x071E2A839DE82D90(1540206179, 7) || unk_0x557E43C447E700A8(joaat("slowmo"))) || func_106(16, 0))
	{
		func_92();
	}
	if ((unk_0x071E2A839DE82D90(115565392, 16) || unk_0x557E43C447E700A8(joaat("skyfall"))) || func_106(17, 0))
	{
		func_91();
	}
	if ((unk_0x071E2A839DE82D90(-1276513277, 8) || unk_0x557E43C447E700A8(joaat("liquor"))) || func_106(18, 0))
	{
		func_90();
	}
	if ((unk_0x071E2A839DE82D90(2040433593, 9) || unk_0x557E43C447E700A8(joaat("deadeye"))) || func_106(19, 0))
	{
		func_89();
	}
}

void func_89()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_28(23) || func_28(21)) || func_28(16))
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

void func_90()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_64 = 1;
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_64 = 1;
		return;
	}
	if ((func_28(23) || func_28(21)) || func_28(18))
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

void func_91()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0xBC72B5D7A1CBD54D())
	{
		func_19("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_19("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if ((((func_28(23) || func_28(21)) || func_28(17)) || func_67(0)) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()) || unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), false)) || unk_0x2C83A9DA6BFFC4F9(joaat("respawn_controller")) > 0)
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_63 = 2;
}

void func_92()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_28(23) || func_28(21)) || func_28(16))
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

void func_93()
{
	struct<3> Var0;
	
	Var0 = { func_17(unk_0x4F8644AF03D0E0D6()) };
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_28(23) || func_28(21)) || func_28(15)) || Var0.f_2 <= -170f)
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

void func_94()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_28(23) || func_28(21)) || func_28(14)) || func_67(17)) || unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_60 = 4;
}

void func_95()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_28(23) || func_28(21)) || func_28(13))
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

void func_96()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_28(23) || func_28(21)) || func_28(12))
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

void func_97()
{
	if (func_29())
	{
		func_19("CHEAT_MISSION_DENIED");
		iLocal_57 = 1;
		return;
	}
	if (func_71())
	{
		func_19("CHEAT_PHONE_DENIED");
		iLocal_57 = 1;
		return;
	}
	if ((func_28(23) || func_28(21)) || func_28(11))
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

void func_98()
{
	if ((((func_28(23) || func_28(22)) || func_28(3)) || func_13(9)) || func_13(10))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_71())
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

void func_99()
{
	if ((((func_28(23) || func_28(22)) || func_28(2)) || func_13(9)) || func_13(10))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_71())
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

void func_100()
{
	if ((func_28(23) || func_28(22)) || func_28(1))
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_71())
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

void func_101()
{
	if (((func_28(23) || func_28(22)) || func_28(0)) || unk_0xBC72B5D7A1CBD54D())
	{
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_71())
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

int func_102()
{
	int iVar0;
	
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (unk_0xA921AA820C25702F(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				if (unk_0x5AA3BEFA29F03AD4())
				{
					iVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&iVar0, 0);
					unk_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_103(int iParam0, char* sParam1)
{
	if (iLocal_45 == 1)
	{
		if (((((func_13(9) || unk_0x2C83A9DA6BFFC4F9(joaat("barry1")) > 0) || unk_0x2C83A9DA6BFFC4F9(joaat("tennis")) > 0) || func_28(23)) || func_28(22)) || func_28(20))
		{
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_71())
		{
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_104(iParam0))
		{
			func_19("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_66 = iParam0;
		sLocal_69 = sParam1;
		iLocal_45 = 2;
	}
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_105(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_105(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_105(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_105(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xA921AA820C25702F(Global_97173.f_18338[iParam0], iParam1);
}

int func_106(int iParam0, int iParam1)
{
	if (unk_0xA921AA820C25702F(Global_24691, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_24692)
			{
				unk_0xE80492A9AC099A93(&Global_24691, iParam0);
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
			unk_0xE80492A9AC099A93(&Global_24691, iParam0);
			iLocal_92 = 1;
			return 1;
		}
	}
	return 0;
}

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_79[iVar0] != -1)
		{
			unk_0xBE4390CB40B3E627(iLocal_79[iVar0]);
			iLocal_79[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_108()
{
	if (((Global_89784 == 13 || Global_89784 == 10) || Global_89784 == 11) || Global_89784 == 12)
	{
		return 0;
	}
	return 1;
}

int func_109()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
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
	unk_0x2587A48BC88DFADF(false);
	if (iLocal_63 == 5)
	{
		func_38();
	}
	if (iLocal_64 == 5)
	{
		func_47(1);
	}
	if (iLocal_62 == 5 || iLocal_65 == 5)
	{
		unk_0x1D408577D440E81E(1f);
	}
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (iLocal_61 == 5)
		{
			unk_0x239528EACDC3E7DE(unk_0x4F8644AF03D0E0D6(), false);
			unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), false, false, false, false, false, false, false, false);
		}
		unk_0x6DB47AA77FD94E09(unk_0x4F8644AF03D0E0D6(), 1f);
		unk_0xA91C6F0FF7D16A13(unk_0x4F8644AF03D0E0D6(), 1f);
	}
	unk_0x740E14FAD5842351(0);
	Global_24689 = 0;
	Global_24688 = 0;
	Global_24690 = 0;
	Global_24691 = 0;
	Global_24693 = 0;
	Global_24692 = 0;
	unk_0x1090044AD1DA76FA();
}

