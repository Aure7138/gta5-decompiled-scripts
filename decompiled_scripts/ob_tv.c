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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	struct<3> Local_30 = { 0, 0, 0 } ;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	bool bLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	char cLocal_45[64] = "";
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	char cLocal_61[64] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	int iScriptParam_0 = 0;
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
	iLocal_20 = 3;
	iLocal_24 = 1;
	iLocal_34 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	StringCopy(&cLocal_45, "NULL", 64);
	StringCopy(&cLocal_61, "NULL", 64);
	if (unk_0x2C897F101BA20806(2))
	{
		func_65();
	}
	if (unk_0x538DF9E5B1DF01EB(uScriptParam_0))
	{
		iLocal_36 = iScriptParam_0;
		iLocal_39 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_64();
		if (unk_0x538DF9E5B1DF01EB(iScriptParam_0))
		{
			if ((iLocal_42 != -1 && (func_63() && !func_62())) && !func_61(iLocal_42))
			{
				func_65();
			}
			if ((unk_0xB4B5BF5882A555F9() && unk_0xCC285AB3AF3E0AB4() != 3) && unk_0x449E31B77C93FF23() == 3)
			{
				func_65();
			}
			if (func_60(13) || func_60(14))
			{
				func_65();
			}
			if (unk_0xED012347A7D86E02(iScriptParam_0))
			{
				func_65();
			}
			if (unk_0xC3AF8259DB162ECA(iScriptParam_0))
			{
				if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
				{
					func_59();
					if (unk_0x6360D2FA3AD62AD1(iScriptParam_0) < 950)
					{
						func_65();
					}
					switch (iLocal_28)
					{
						case 0:
							func_56();
							if (iLocal_42 == 5)
							{
								if (func_55(18) == 1 && func_55(20) == 0)
								{
									uLocal_40 = unk_0xD79B270532855EF5(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x9F09959B01B0EA72(uLocal_40))
									{
										unk_0xACC214367B37DC24(uLocal_40, 9);
									}
									unk_0x82706E6C897B0FA1();
								}
							}
							if (iLocal_42 == -1)
							{
								func_65();
							}
							else
							{
								func_54();
								unk_0x17854028C26E15CB("SAFEHOUSE_MICHAEL_SIT_SOFA", 0);
								unk_0x6D073A8BCDE701F6(0);
								Global_24506[iLocal_42 /*11*/].f_2 = 0;
								Global_24506[iLocal_42 /*11*/].f_6 = 1;
								Global_24506[iLocal_42 /*11*/] = unk_0x444ECD635D5FD45F(0, 2);
								Global_24506[iLocal_42 /*11*/].f_1 = 0;
								Global_24506[iLocal_42 /*11*/].f_4 = 0;
								Global_24506[iLocal_42 /*11*/].f_7 = 0;
								Global_24506[iLocal_42 /*11*/].f_8 = 0;
								Global_24506[iLocal_42 /*11*/].f_10 = 0;
								fLocal_29 = -4f;
								func_52(&uLocal_25);
								func_50();
								func_49();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_28 = 1;
							}
							break;
						
						case 1:
							if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x7B78F167D435E681(iLocal_36) && unk_0xFDBE4265C0DBB630(iLocal_36, 1119092736))
							{
								if (func_41() || Global_24506[iLocal_42 /*11*/].f_5)
								{
									iLocal_28 = 2;
								}
							}
							else
							{
								func_40(&iLocal_41);
							}
							break;
						
						case 2:
							func_50();
							if (!func_61(iLocal_42))
							{
								func_40(&iLocal_41);
								if (func_39("TV_HLP1"))
								{
									unk_0xFD1E0AEC770DAF2E(1);
								}
							}
							if (unk_0x538DF9E5B1DF01EB(iLocal_36))
							{
								if (!unk_0x01F2C76388A112CD(iLocal_36))
								{
									unk_0x423D1EBE54B18555(iLocal_36, 1);
								}
							}
							if (unk_0x538DF9E5B1DF01EB(iLocal_38))
							{
								if (!unk_0x01F2C76388A112CD(iLocal_38))
								{
									unk_0x423D1EBE54B18555(iLocal_38, 1);
								}
							}
							if (unk_0x538DF9E5B1DF01EB(iLocal_37))
							{
								if (unk_0x01F2C76388A112CD(iLocal_37))
								{
									unk_0x423D1EBE54B18555(iLocal_37, 0);
								}
							}
							if (!unk_0x9BA82E09A986BA4B(&cLocal_45, "NULL"))
							{
								unk_0x4F5F5BF0722DFDC2(&cLocal_45, 0);
							}
							unk_0xA9E6C6693F0BC16F(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x538DF9E5B1DF01EB(iLocal_39))
							{
								unk_0x315062F8B8AFC63F(iLocal_39);
							}
							if (!func_61(iLocal_42))
							{
								if ((Global_24506[iLocal_42 /*11*/] == 3 || Global_24506[iLocal_42 /*11*/] == 2) || Global_24506[iLocal_42 /*11*/] == -1)
								{
									Global_24506[iLocal_42 /*11*/] = unk_0x444ECD635D5FD45F(0, 2);
								}
								unk_0x5C040443676B5C5A(Global_24506[iLocal_42 /*11*/]);
								unk_0x8CAA46EC5F803D98(fLocal_29);
							}
							else
							{
								iLocal_43 = Global_24506[iLocal_42 /*11*/];
								iLocal_44 = Global_24506[iLocal_42 /*11*/].f_1;
								unk_0xF09ECA7A93748C7A(iLocal_43, func_38(iLocal_44), Global_24506[iLocal_42 /*11*/].f_9);
								unk_0x5C040443676B5C5A(iLocal_43);
								if (Global_24506[iLocal_42 /*11*/].f_7)
								{
									Global_24506[iLocal_42 /*11*/].f_5 = 0;
									Global_24506[iLocal_42 /*11*/].f_7 = 0;
								}
							}
							Global_24506[iLocal_42 /*11*/].f_2 = 1;
							func_37(133, 1);
							func_37(131, 1);
							func_37(132, 1);
							iLocal_28 = 3;
							break;
						
						case 3:
							if (Global_24506[iLocal_42 /*11*/].f_4)
							{
								iLocal_28 = 6;
							}
							if (Global_24506[iLocal_42 /*11*/].f_7 && func_61(iLocal_42))
							{
								Global_24506[iLocal_42 /*11*/].f_7 = 0;
								iLocal_28 = 6;
							}
							if (!func_35(iLocal_42))
							{
								func_34();
								iLocal_28 = 5;
							}
							else
							{
								func_32();
								if (unk_0x072A31C847AA39B2() == -1)
								{
									unk_0x5C040443676B5C5A(Global_24506[iLocal_42 /*11*/]);
								}
								if (func_14())
								{
									iLocal_28 = 6;
								}
							}
							break;
						
						case 5:
							if (func_35(iLocal_42))
							{
								iLocal_28 = 2;
							}
							if (Global_24506[iLocal_42 /*11*/].f_4)
							{
								iLocal_28 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_41 != -1)
							{
								func_40(&iLocal_41);
							}
							Global_24506[iLocal_42 /*11*/].f_5 = 0;
							Global_24506[iLocal_42 /*11*/].f_4 = 0;
							Global_24506[iLocal_42 /*11*/].f_1 = 0;
							Global_24506[iLocal_42 /*11*/].f_2 = 0;
							Global_24506[iLocal_42 /*11*/].f_7 = 0;
							Global_24506[iLocal_42 /*11*/].f_8 = 0;
							Global_24506[iLocal_42 /*11*/].f_10 = 0;
							iLocal_28 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_65();
			unk_0x82706E6C897B0FA1();
		}
	}
	func_65();
	unk_0x82706E6C897B0FA1();
}

void func_1()
{
	if (iLocal_42 != -1)
	{
		Global_24506[iLocal_42 /*11*/] = unk_0x072A31C847AA39B2();
	}
	fLocal_29 = unk_0x94F06744F8703F62();
	unk_0x5C040443676B5C5A(-1);
	func_4();
	if (unk_0x16CDA1894CFE0781(joaat("family5")) == 0)
	{
		if (!unk_0x9BA82E09A986BA4B(&cLocal_45, "NULL"))
		{
			unk_0x4F5F5BF0722DFDC2(&cLocal_45, 1);
		}
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0xFD1E0AEC770DAF2E(1);
	}
	func_3();
	func_49();
	if (unk_0x538DF9E5B1DF01EB(iLocal_37))
	{
		if (!unk_0x01F2C76388A112CD(iLocal_37))
		{
			unk_0x423D1EBE54B18555(iLocal_37, 1);
		}
	}
	unk_0xD15944340BEDDC22(0);
	func_2();
}

void func_2()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (iLocal_86 == 1)
		{
			unk_0xCC13D6F01D181850();
			iLocal_86 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_34 == -1)
	{
		unk_0x8E515AA7023E13EA(iLocal_34);
		if (unk_0x538DF9E5B1DF01EB(iLocal_36))
		{
			if (unk_0xA609E58449080951(iLocal_36) == joaat("v_ilev_mm_screen2") || unk_0xA609E58449080951(iLocal_36) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x423D1EBE54B18555(iLocal_36, 0);
				if (unk_0xA609E58449080951(iLocal_36) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x7EEA32490EAB9FA4(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x7EEA32490EAB9FA4(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_38))
	{
		unk_0x423D1EBE54B18555(iLocal_38, 0);
	}
}

void func_4()
{
	if (iLocal_84)
	{
		unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
		if (unk_0x3C20CCC55C33AC27(uLocal_77))
		{
			unk_0xC8CEF95C63B283EC(uLocal_77, 0);
		}
		unk_0x27A62B1C26941E13(uLocal_77, 0);
		unk_0x20D6E0EA145DF751(0);
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), 0);
			unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
			unk_0x3116CFED02763A5D(unk_0xA16EC202D9D35357(), Local_30, 1, 0, 2);
			if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
			{
				if (bLocal_35 == 1)
				{
					bLocal_35 = false;
					unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 1, 0);
				}
			}
			unk_0x423D1EBE54B18555(unk_0xA16EC202D9D35357(), 1);
		}
		if (!unk_0x9BA82E09A986BA4B(&cLocal_61, "NULL"))
		{
			if (unk_0x4CBFDAD06D630F7C(&cLocal_61))
			{
				unk_0x124843CE93F39C27(&cLocal_61);
			}
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_38))
		{
			unk_0x423D1EBE54B18555(iLocal_38, 1);
		}
		func_5(0, 1, 0, 0);
		unk_0xD15944340BEDDC22(0);
		iLocal_84 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x31F1896E6453B935(unk_0x1788E93557766241());
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 1);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 1);
		func_13(1);
		unk_0xB0F2C1CA020DA7DA();
		unk_0xADD1FEC2646B4ECF();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xBE029393332523D7())
			{
				unk_0x0D68C13151B68364(0);
			}
			if (!func_12())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_11(1, iParam3, iParam2);
		Global_54764 = 1;
		Global_67069 = 1;
		Global_68323 = 1;
	}
	else
	{
		func_13(0);
		unk_0x5C6ECA43D8ACED5D();
		Global_54764 = 0;
		if (bParam1)
		{
			unk_0xAB5770BCC9EDAC2C();
		}
		unk_0xBD2E72FB9227CC74(unk_0x1788E93557766241(), 0);
		unk_0x50A6A4ED49FBBC83(unk_0x1788E93557766241(), 0);
		func_11(0, iParam3, iParam2);
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()) && !func_6(unk_0x1788E93557766241()))
		{
			unk_0xE31C4C317516E7A7(unk_0xA16EC202D9D35357(), 0);
		}
		Global_68323 = 0;
	}
}

int func_6(int iParam0)
{
	if (func_8(iParam0, 0))
	{
		return 1;
	}
	if (func_7())
	{
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
}

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_9(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_9(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_10();
	}
	if (Global_1315869[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_10()
{
	return Global_1312729;
}

int func_11(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0x24547C720F3E6709() != iParam0 && uParam2)
		{
			unk_0x3EA9937AF099576F(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_12()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_13(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 13);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 13);
	}
}

int func_14()
{
	if (!func_61(iLocal_42))
	{
		if (((((((func_28(&uLocal_25) >= 1f && unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_87, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x05681B6F593F0A9C(iLocal_36) == unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357())) && !func_27(8, -1)) && !unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0)) && unk_0xCF34027511646228(unk_0xA16EC202D9D35357(), Local_30, 90f)) && !unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357())) && !unk_0xB4B5BF5882A555F9())
		{
			if (iLocal_41 == -1)
			{
				func_26();
				func_25(&iLocal_41, 3, "TV_HLP5", 0, 0, 0);
			}
			else if (func_23(iLocal_41, 1))
			{
				func_40(&iLocal_41);
				func_52(&uLocal_25);
				Global_24506[iLocal_42 /*11*/].f_7 = 0;
				if (unk_0x3D3EDFDC89F288F8("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0xC2E1777941B4536E(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_15();
		}
		else
		{
			if (func_39("TV_HLP5"))
			{
				unk_0xFD1E0AEC770DAF2E(1);
			}
			func_2();
			func_40(&iLocal_41);
		}
	}
	return 0;
}

void func_15()
{
	if (iLocal_84 == 0)
	{
		unk_0xA6ED15B28077401E(2, 222);
		if (unk_0x1453F50088A91E4E(2, 222))
		{
			func_40(&iLocal_41);
			func_25(&iLocal_41, 3, "TV_HLP6", 0, 0, 0);
			func_22();
		}
	}
	else
	{
		unk_0x4B404C739A9AFC7A(2, 200, 1);
		if (unk_0x01F2C76388A112CD(unk_0xA16EC202D9D35357()))
		{
			unk_0x423D1EBE54B18555(unk_0xA16EC202D9D35357(), 0);
		}
		if (bLocal_35)
		{
			if (unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
			{
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
			}
		}
		unk_0x6C5CE54692FA7CB8();
		unk_0xB667327A8F84770A(unk_0xA16EC202D9D35357());
		func_20(1, 1);
		unk_0xA6ED15B28077401E(2, 222);
		func_16();
		if (unk_0x1453F50088A91E4E(2, 222) || (unk_0x3E512F3AB14225D6(2) && unk_0xAFD068D020C517F6(2, 200)))
		{
			func_40(&iLocal_41);
			func_4();
		}
	}
}

void func_16()
{
	if (!Global_14394.f_1 == 1)
	{
		if (func_19(0))
		{
			func_17(0);
		}
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 2);
	}
}

void func_17(int iParam0)
{
	if (Global_14552)
	{
		func_18(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
	}
	if (!func_12())
	{
		Global_14394.f_1 = 3;
	}
}

void func_18(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_19(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

int func_19(int iParam0)
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

void func_20(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_21(0))
		{
			if (!iLocal_21)
			{
				if (unk_0x3D3EDFDC89F288F8("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0xC2E1777941B4536E(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x072A31C847AA39B2() == 0)
				{
					unk_0x5C040443676B5C5A(1);
				}
				else
				{
					unk_0x5C040443676B5C5A(0);
				}
				iLocal_21 = 1;
			}
		}
		else if (iLocal_21)
		{
			iLocal_21 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x805905ED44A111AA(2, 219) - 127);
		if (!iLocal_22)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x94F06744F8703F62();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x8CAA46EC5F803D98(fVar2);
				iLocal_23 = unk_0x09560C7DE2A384BD();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x94F06744F8703F62();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x8CAA46EC5F803D98(fVar2);
				iLocal_23 = unk_0x09560C7DE2A384BD();
				iLocal_22 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_24 = 1;
			}
			else if (iLocal_24)
			{
				if (unk_0x3D3EDFDC89F288F8("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0xC2E1777941B4536E(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_24 = 0;
				}
			}
		}
		if (iLocal_22)
		{
			if (iVar1 == 0 || unk_0x09560C7DE2A384BD() > iLocal_23 + 24)
			{
				iLocal_22 = 0;
			}
		}
	}
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x805905ED44A111AA(2, 218) - 127);
	if (iParam0 || unk_0x83666F9FB8FEBD4B() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			unk_0xC1B1E9A034A63A62(0);
			return 1;
		}
	}
	return 0;
}

void func_22()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_84 == 0)
	{
		uLocal_77 = unk_0xB506BD07C3E21008("DEFAULT_SCRIPTED_CAMERA", Local_78, Local_81, fVar0, 0, 2);
		unk_0x1622CA5C3C81DA58(uLocal_77, 100f);
		unk_0xC8CEF95C63B283EC(uLocal_77, 1);
		unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 0, 0);
		if (unk_0x538DF9E5B1DF01EB(iLocal_38))
		{
			unk_0x423D1EBE54B18555(iLocal_38, 0);
		}
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), 1);
			unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
			if (unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
			{
				unk_0xC92B5D880C803814(unk_0x1788E93557766241(), 0, 0);
				bLocal_35 = true;
			}
			unk_0x3116CFED02763A5D(unk_0xA16EC202D9D35357(), Local_30, -1, 0, 2);
			unk_0x423D1EBE54B18555(unk_0xA16EC202D9D35357(), 0);
		}
		if (!unk_0x9BA82E09A986BA4B(&cLocal_61, "NULL"))
		{
			if (!unk_0x4CBFDAD06D630F7C(&cLocal_61))
			{
				unk_0x3EF2F05E6EA65602(&cLocal_61);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0xD15944340BEDDC22(1);
		iLocal_84 = 1;
	}
}

int func_23(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x2AF80829930084FD(unk_0xA495B6AB6F2BF8C7()))
	{
		return 0;
	}
	if (func_19(0))
	{
		return 0;
	}
	if (unk_0xEC35DAD55FA4EEF2())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35615[iVar0 /*19*/] == 1 && Global_35615[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_35615[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_35615[iVar0 /*19*/].f_5 = 1;
			Global_35615[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_35615[iVar0 /*19*/] == 0)
			{
			}
			if (Global_35615[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_35615[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0x16CDA1894CFE0781(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xB4B5BF5882A555F9())
	{
		if (!*iParam0 == -1)
		{
			func_40(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_35615[iVar0 /*19*/])
		{
			Global_35615[iVar0 /*19*/] = 1;
			Global_35615[iVar0 /*19*/].f_1 = Global_35738;
			Global_35738++;
			Global_35615[iVar0 /*19*/].f_4 = 0;
			Global_35615[iVar0 /*19*/].f_17 = 0;
			Global_35615[iVar0 /*19*/].f_5 = 0;
			Global_35615[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_35615[iVar0 /*19*/].f_8), sParam2, 16);
			Global_35615[iVar0 /*19*/].f_6 = iParam3;
			Global_35615[iVar0 /*19*/].f_18 = unk_0x60C807BBCBE66CC7();
			Global_35615[iVar0 /*19*/].f_7 = 0;
			Global_35615[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0x06771AF7795B3ECF(sParam4))
			{
				Global_35615[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_35615[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_35615[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_35615[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_26()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (iLocal_86 == 0)
		{
			unk_0x5B47AA96CE813747("TV_Controls");
			iLocal_86 = 1;
		}
	}
}

bool func_27(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

float func_28(var uParam0)
{
	if (func_31(uParam0))
	{
		if (func_30(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_29(unk_0x889D01384B54BCE3(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_29(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		iVar0 = unk_0x519586565311459B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x09560C7DE2A384BD()) / 1000f);
}

bool func_30(var uParam0)
{
	return unk_0x889D01384B54BCE3(*uParam0, 2);
}

bool func_31(var uParam0)
{
	return unk_0x889D01384B54BCE3(*uParam0, 1);
}

void func_32()
{
	float fVar0;
	
	fVar0 = 1f;
	func_33(&fVar0);
	unk_0x8E515AA7023E13EA(iLocal_34);
	unk_0xFA5652FA48ED466D(4);
	unk_0xFE412676B91F759D(1);
	unk_0xE4CC8CE52992D156(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x8E515AA7023E13EA(unk_0x2727E4BF66E33221());
}

void func_33(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x649F384939D0D134(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_34()
{
	Global_24506[iLocal_42 /*11*/].f_7 = 0;
	Global_24506[iLocal_42 /*11*/] = unk_0x072A31C847AA39B2();
	fLocal_29 = unk_0x94F06744F8703F62();
	if (unk_0x4CBFDAD06D630F7C(&cLocal_61))
	{
		unk_0x124843CE93F39C27(&cLocal_61);
	}
	if (((func_39("TV_HLP1") || func_39("TV_HLP2")) || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0xFD1E0AEC770DAF2E(1);
	}
	func_40(&iLocal_41);
	unk_0x5C040443676B5C5A(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_49();
}

int func_35(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_36(unk_0x1788E93557766241()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_36(int iParam0)
{
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iParam0), 0);
}

void func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/])
	{
		unk_0x3ED04C9A60CBD249(Global_50501[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x680350124CC21957(Global_50501[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_38(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_39(char* sParam0)
{
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
}

void func_40(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_24(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_35615[iVar0 /*19*/])
		{
			Global_35615[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_41()
{
	if (func_28(&uLocal_25) < 1f)
	{
		func_40(&iLocal_41);
		return 0;
	}
	if ((!unk_0x965556ACF6A83973(unk_0xA16EC202D9D35357(), Local_87, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0xCF34027511646228(unk_0xA16EC202D9D35357(), Local_30, 90f)) || unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (unk_0x05681B6F593F0A9C(iLocal_36) != unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357()))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (func_27(8, -1))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (Global_87375)
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (Global_24506[iLocal_42 /*11*/].f_8)
	{
		func_40(&iLocal_41);
		return 0;
	}
	if (iLocal_41 == -1)
	{
		func_25(&iLocal_41, 3, "TV_HLP1", 0, 0, 0);
		return 0;
	}
	if (func_23(iLocal_41, 1))
	{
		func_40(&iLocal_41);
		func_52(&uLocal_25);
		Global_24506[iLocal_42 /*11*/].f_7 = 1;
		if (unk_0x3D3EDFDC89F288F8("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
		{
			unk_0xC2E1777941B4536E(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_42(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_42(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_48((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97439.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97439.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97439.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97439.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97439.f_8448[iParam0 /*12*/].f_10 = iParam1;
		Global_97439.f_8448[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xC655DD24DA1F5D9D(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_43();
	}
}

void func_43()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_97175 = 0;
	Global_97176 = 0;
	Global_97177 = 0;
	Global_97178 = 0;
	Global_97179 = 0;
	Global_97180 = 0;
	Global_97181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97439.f_8448.f_3853;
	Global_97439.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97439.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97439.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97175++;
					fVar1 = (fVar1 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97176++;
					fVar2 = (fVar2 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97177++;
					fVar3 = (fVar3 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97178++;
					fVar4 = (fVar4 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97179++;
					fVar5 = (fVar5 + (Global_97439.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97180++;
					fVar6 = (fVar6 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97181++;
					fVar7 = (fVar7 + Global_97439.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97158 > 0)
	{
		if (Global_97175 == Global_97158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97159 > 0)
	{
		if (Global_97176 == Global_97159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97160 > 0)
	{
		if (Global_97177 == Global_97160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97161 > 0)
	{
		if (Global_97178 == Global_97161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97162 > 0)
	{
		if (((Global_97179 == Global_97162 || (Global_97162 * 10 / Global_97179) < 41) || Global_97179 > Global_97165) || Global_97179 == Global_97165)
		{
			if (!unk_0x889D01384B54BCE3(Global_97439.f_8448.f_3856, 14))
			{
				if (Global_97179 == Global_97162)
				{
					unk_0xC655DD24DA1F5D9D(joaat("num_rndevents_completed"), Global_97162, 0);
					unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97163 > 0)
	{
		if (Global_97180 == Global_97163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97164 > 0)
	{
		if (Global_97181 == Global_97164)
		{
			fVar7 = 5f;
		}
	}
	Global_97439.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97179 > Global_97165 || Global_97179 == Global_97165)
	{
		iVar9 = Global_97165;
	}
	else
	{
		iVar9 = Global_97179;
	}
	unk_0x680350124CC21957(joaat("num_missions_completed"), Global_97175, 1);
	unk_0x680350124CC21957(joaat("num_missions_available"), Global_97158, 1);
	unk_0x680350124CC21957(joaat("num_minigames_completed"), Global_97176, 1);
	unk_0x680350124CC21957(joaat("num_minigames_available"), Global_97159, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_completed"), Global_97177, 1);
	unk_0x680350124CC21957(joaat("num_oddjobs_available"), Global_97160, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_completed"), Global_97178, 1);
	unk_0x680350124CC21957(joaat("num_rndpeople_available"), Global_97161, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x680350124CC21957(joaat("num_rndevents_available"), Global_97165, 1);
	unk_0x680350124CC21957(joaat("num_misc_completed"), (Global_97181 + Global_97180), 1);
	unk_0x680350124CC21957(joaat("num_misc_available"), (Global_97164 + Global_97163), 1);
	Global_97182 = (Global_97175 * 100 / Global_97158);
	Global_97184 = ((Global_97177 + Global_97176) * 100 / (Global_97160 + Global_97159));
	Global_97183 = ((Global_97178 + iVar9) * 100 / (Global_97161 + Global_97165));
	Global_97185 = ((Global_97180 + Global_97181) * 100 / (Global_97163 + Global_97164));
	unk_0x17B4C1DC107FE8D1(joaat("total_progress_made"), Global_97439.f_8448.f_3853, 1);
	unk_0x680350124CC21957(joaat("percent_story_missions"), Global_97182, 1);
	unk_0x680350124CC21957(joaat("percent_ambient_missions"), Global_97183, 1);
	unk_0x680350124CC21957(joaat("percent_oddjobs"), Global_97184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853))
	{
		func_47(13, unk_0xF34EE736CF047844(Global_97439.f_8448.f_3853));
	}
	if (!unk_0x0DA6B7D4A76F5536())
	{
		if (!Global_68325)
		{
			if (func_46() == 2 == 0 && !unk_0x1DAD7CE53BEE7710())
			{
				if (unk_0xECA1708601B2AF8E())
				{
					Global_97173 = 0;
				}
				if (!Global_54758)
				{
					func_44();
				}
			}
		}
	}
}

int func_44()
{
	if (func_45(0))
	{
		return 0;
	}
	if (Global_90081.f_8)
	{
		if (Global_90081.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90081.f_10 > 1)
	{
		return 0;
	}
	Global_90081.f_10++;
	return 1;
}

bool func_45(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

int func_46()
{
	return Global_24446;
}

int func_47(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x9BE422A8A4809EB6(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA2D39EF26F970808(iParam0, iParam1);
	}
	return 0;
}

int func_48(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_10();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x63B1C03C36A780A1((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC59E8D3A53A786C7((iParam0 - 0)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x63B1C03C36A780A1((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC59E8D3A53A786C7((iParam0 - 192)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x63B1C03C36A780A1((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC59E8D3A53A786C7((iParam0 - 513)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x63B1C03C36A780A1((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC59E8D3A53A786C7((iParam0 - 705)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x544FDF5D46658EF4((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC59E8D3A53A786C7((iParam0 - 3111)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x544FDF5D46658EF4((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC59E8D3A53A786C7((iParam0 - 2919)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x681B0EB4863DC6EC((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC59E8D3A53A786C7((iParam0 - 4207)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x681B0EB4863DC6EC((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC59E8D3A53A786C7((iParam0 - 4335)) * 64);
		iVar0 = unk_0x7CC96DF09E2721D6(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_49()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x2E968B59470173AB("tvscreen"))
	{
		unk_0xE30D9670F9320015("tvscreen");
		iLocal_34 = -1;
		unk_0x8E515AA7023E13EA(unk_0x2727E4BF66E33221());
	}
}

void func_50()
{
	int iVar0;
	
	if (iLocal_42 == 4)
	{
		func_51();
	}
	if (unk_0x2E968B59470173AB("tvscreen"))
	{
		unk_0xE30D9670F9320015("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x538DF9E5B1DF01EB(iLocal_36))
	{
		func_65();
	}
	iVar0 = unk_0xA609E58449080951(iLocal_36);
	unk_0x29A7E12FB932C4BC("tvscreen", 0);
	unk_0x51EE3BB4A6B99F1C(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_42 != 4)
	{
		while (!unk_0x5ABA6DADCB25C9FA(iVar0))
		{
			if (!unk_0x538DF9E5B1DF01EB(iLocal_36))
			{
				func_65();
			}
			if (!unk_0xC3AF8259DB162ECA(iLocal_36))
			{
				func_65();
			}
			if (!unk_0x2E968B59470173AB("tvscreen"))
			{
				unk_0x29A7E12FB932C4BC("tvscreen", 0);
			}
			if (!unk_0x5ABA6DADCB25C9FA(iVar0))
			{
				unk_0x51EE3BB4A6B99F1C(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_34 = unk_0x180C45774462E561("tvscreen");
	func_3();
}

void func_51()
{
	if (unk_0x538DF9E5B1DF01EB(iLocal_36))
	{
		if (unk_0xA609E58449080951(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_36 = 0;
	iLocal_36 = unk_0xCBF2B33114D43CAA(joaat("v_ilev_mm_screen2"), Local_30, 1, 1, 0);
	unk_0x34639238667C4381(iLocal_36, uLocal_33);
	unk_0x3CC3106305C40A28(iLocal_36, 1);
	unk_0x423D1EBE54B18555(iLocal_36, 0);
	iLocal_38 = 0;
	iLocal_38 = unk_0xCBF2B33114D43CAA(joaat("v_ilev_mm_screen2_vl"), Local_30, 1, 1, 0);
	unk_0x34639238667C4381(iLocal_38, uLocal_33);
	unk_0x3CC3106305C40A28(iLocal_38, 1);
	unk_0x423D1EBE54B18555(iLocal_38, 0);
}

void func_52(var uParam0)
{
	func_53(uParam0, 0f);
}

void func_53(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_29(unk_0x889D01384B54BCE3(*uParam0, 4)) - fParam1);
	unk_0xD0E2BFCE93AE3ABD(uParam0, 1);
	unk_0x29DB79DD4D939B38(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_54()
{
}

int func_55(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97439.f_7341.f_328[iParam0 /*6*/];
}

void func_56()
{
	Local_30 = { unk_0xBF8499F46AD9093A(iLocal_36, 1) };
	uLocal_33 = unk_0xD1613577C809E98B(iLocal_36);
	func_58();
	if (unk_0xA609E58449080951(iLocal_36) == joaat("prop_tv_03"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_42 = 0;
			Local_78 = { -9.8135f, -1440.913f, 31.3654f };
			Local_81 = { 0f, 0f, -134.3211f };
			Local_87 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_45, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0xA609E58449080951(iLocal_36) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_42 = 2;
			Local_78 = { 1978.23f, 3819.65f, 34.2724f };
			Local_81 = { 0f, 0f, -105.15f };
			Local_87 = { 1978.33f, 3819.717f, 32.4501f };
			func_57();
			StringCopy(&cLocal_45, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0xA609E58449080951(iLocal_36) == joaat("prop_tv_flat_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_42 = 1;
			Local_78 = { 2.5724f, 527.9989f, 176.1619f };
			Local_81 = { 0f, 0f, -29.9488f };
			Local_87 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_45, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_61, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0xA609E58449080951(iLocal_36) == joaat("prop_tv_flat_02"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_42 = 3;
			Local_78 = { -1160.502f, -1520.76f, 10.7393f };
			Local_81 = { 0f, 0f, 60.061f };
			Local_87 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_45, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_61, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0xA609E58449080951(iLocal_36) == joaat("v_ilev_mm_screen2") || unk_0xA609E58449080951(iLocal_36) == joaat("v_ilev_mm_scre_off"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_42 = 4;
			Local_78 = { -802.8972f, 172.537f, 74.5801f };
			Local_81 = { 0f, 0f, -69.0273f };
			Local_87 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_45, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_61, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0xA609E58449080951(iLocal_36) == joaat("des_tvsmash_start"))
	{
		if (unk_0x2A488C176D52CCA5(Local_30, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_42 = 5;
			Local_78 = { -808.3051f, 171.2623f, 77.2822f };
			Local_81 = { 1.8886f, 0f, 110.9232f };
			Local_87 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_45, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_61, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_57()
{
	iLocal_37 = unk_0xCBF2B33114D43CAA(joaat("prop_tt_screenstatic"), Local_30, 1, 1, 0);
	unk_0x34639238667C4381(iLocal_37, uLocal_33);
	unk_0x423D1EBE54B18555(iLocal_37, 1);
	unk_0x3CC3106305C40A28(iLocal_37, 1);
}

void func_58()
{
	unk_0xF09ECA7A93748C7A(0, func_38(1), 0);
	if (func_55(22))
	{
		unk_0xF09ECA7A93748C7A(1, func_38(12), 0);
	}
	else
	{
		unk_0xF09ECA7A93748C7A(1, func_38(2), 0);
	}
}

void func_59()
{
	if (iLocal_42 == -1)
	{
		return;
	}
	if (Global_24506[iLocal_42 /*11*/].f_10 == 0)
	{
		if (iLocal_85 == 1)
		{
			if (unk_0x538DF9E5B1DF01EB(iLocal_39))
			{
				unk_0xE31C4C317516E7A7(iLocal_39, 0);
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_36))
			{
				unk_0xE31C4C317516E7A7(iLocal_36, 0);
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_38))
			{
				unk_0xE31C4C317516E7A7(iLocal_38, 0);
			}
			if (unk_0x538DF9E5B1DF01EB(iLocal_37))
			{
				unk_0xE31C4C317516E7A7(iLocal_37, 0);
			}
			iLocal_85 = 0;
		}
	}
	else if (iLocal_85 == 0)
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_39))
		{
			unk_0xE31C4C317516E7A7(iLocal_39, 1);
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_36))
		{
			unk_0xE31C4C317516E7A7(iLocal_36, 1);
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_38))
		{
			unk_0xE31C4C317516E7A7(iLocal_38, 1);
		}
		if (unk_0x538DF9E5B1DF01EB(iLocal_37))
		{
			unk_0xE31C4C317516E7A7(iLocal_37, 1);
		}
		iLocal_85 = 1;
	}
}

bool func_60(int iParam0)
{
	return Global_34915 == iParam0;
}

int func_61(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_24506[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_62()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (unk_0xC24CFE5409745AF5() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (Global_87369 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_81235[Global_87369 /*34*/].f_15, 20);
	}
	return 0;
}

void func_64()
{
}

void func_65()
{
	if (iLocal_42 == -1)
	{
		unk_0x82706E6C897B0FA1();
	}
	func_40(&iLocal_41);
	if (iLocal_42 != -1)
	{
		func_1();
		Global_24506[iLocal_42 /*11*/].f_6 = 0;
		Global_24506[iLocal_42 /*11*/].f_7 = 0;
		Global_24506[iLocal_42 /*11*/].f_8 = 0;
		Global_24506[iLocal_42 /*11*/].f_4 = 0;
		Global_24506[iLocal_42 /*11*/].f_5 = 0;
		Global_24506[iLocal_42 /*11*/].f_2 = 0;
		Global_24506[iLocal_42 /*11*/] = -1;
		Global_24506[iLocal_42 /*11*/].f_1 = 0;
		Global_24506[iLocal_42 /*11*/].f_10 = 0;
	}
	if ((func_39("TV_HLP1") || func_39("TV_HLP5")) || func_39("TV_HLP6"))
	{
		unk_0xFD1E0AEC770DAF2E(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_66();
	if (unk_0x4CBFDAD06D630F7C(&cLocal_61))
	{
		unk_0x124843CE93F39C27(&cLocal_61);
	}
	unk_0xD53E02C84AA3A0E3();
	func_2();
	unk_0x82706E6C897B0FA1();
}

void func_66()
{
	func_49();
	if (unk_0x538DF9E5B1DF01EB(iLocal_36))
	{
		if (unk_0xA609E58449080951(iLocal_36) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xD4C90F16EBBFE620(&iLocal_36);
			unk_0xEA054561294AEC10(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_38))
	{
		unk_0xD4C90F16EBBFE620(&iLocal_38);
		unk_0xEA054561294AEC10(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x538DF9E5B1DF01EB(iLocal_37))
	{
		unk_0xD4C90F16EBBFE620(&iLocal_37);
		unk_0xEA054561294AEC10(joaat("prop_tt_screenstatic"));
	}
}

