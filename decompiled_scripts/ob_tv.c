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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	char cLocal_62[64] = "";
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
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
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_35 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	StringCopy(&cLocal_46, "NULL", 64);
	StringCopy(&cLocal_62, "NULL", 64);
	if (unk_0xB9B05E900D325C36(2))
	{
		func_66();
	}
	if (unk_0x76B3C79DE564AFC6(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_65();
		if (unk_0x76B3C79DE564AFC6(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_64() && !func_63())) && !func_62(iLocal_43))
			{
				func_66();
			}
			if ((unk_0x003E46CBEF6CE07A() && unk_0xEBDBC787B1778ACF() != 3) && unk_0x3AA42F4BDAE68399() == 3)
			{
				func_66();
			}
			if (func_61(13) || func_61(14))
			{
				func_66();
			}
			if (unk_0xF81B898A82D4F5CB(iScriptParam_0))
			{
				func_66();
			}
			if (unk_0x4673A7E6EA033947(iScriptParam_0))
			{
				if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
				{
					func_60();
					if (unk_0x8DB158934E64B062(iScriptParam_0) < 950)
					{
						func_66();
					}
					switch (iLocal_29)
					{
						case 0:
							func_57();
							if (iLocal_43 == 5)
							{
								if (func_56(18) == 1 && func_56(20) == 0)
								{
									uLocal_41 = unk_0xE8F68AC81A5EDAD1(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x8189B050339E75F9(uLocal_41))
									{
										unk_0x4DE14D5368B45E37(uLocal_41, 9);
									}
									unk_0xBEE2834559A8897A();
								}
							}
							if (iLocal_43 == -1)
							{
								func_66();
							}
							else
							{
								func_55();
								unk_0x28815582C2002036("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0x8EF7C3B8BFF23680(0);
								Global_25282[iLocal_43 /*11*/].f_2 = 0;
								Global_25282[iLocal_43 /*11*/].f_6 = 1;
								Global_25282[iLocal_43 /*11*/] = unk_0x3AF262D7332EEDF5(0, 2);
								Global_25282[iLocal_43 /*11*/].f_1 = 0;
								Global_25282[iLocal_43 /*11*/].f_4 = 0;
								Global_25282[iLocal_43 /*11*/].f_7 = 0;
								Global_25282[iLocal_43 /*11*/].f_8 = 0;
								Global_25282[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_53(&uLocal_26);
								func_51();
								func_50();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0x3EAC46EBC673DC22(iLocal_37) && unk_0x92EB49CF1B9B60EB(iLocal_37, 1119092736))
							{
								if (func_42() || Global_25282[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_41(&iLocal_42);
							}
							break;
						
						case 2:
							func_51();
							if (!func_62(iLocal_43))
							{
								func_41(&iLocal_42);
								if (func_40("TV_HLP1"))
								{
									unk_0x8C361F37C04084F4(1);
								}
							}
							if (unk_0x76B3C79DE564AFC6(iLocal_37))
							{
								if (!unk_0x8CAADD2AA5EDCAAC(iLocal_37))
								{
									unk_0x477513BFF4F0CEC1(iLocal_37, 1, 0);
								}
							}
							if (unk_0x76B3C79DE564AFC6(iLocal_39))
							{
								if (!unk_0x8CAADD2AA5EDCAAC(iLocal_39))
								{
									unk_0x477513BFF4F0CEC1(iLocal_39, 1, 0);
								}
							}
							if (unk_0x76B3C79DE564AFC6(iLocal_38))
							{
								if (unk_0x8CAADD2AA5EDCAAC(iLocal_38))
								{
									unk_0x477513BFF4F0CEC1(iLocal_38, 0, 0);
								}
							}
							if (!unk_0xB3404E397FF56B3B(&cLocal_46, "NULL"))
							{
								unk_0xA56304EF5BC50A77(&cLocal_46, 0);
							}
							unk_0xE8B763C36E61B210(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0x76B3C79DE564AFC6(iLocal_40))
							{
								unk_0x3CD12DC85A5ACD1D(iLocal_40);
							}
							if (!func_62(iLocal_43))
							{
								if ((Global_25282[iLocal_43 /*11*/] == 3 || Global_25282[iLocal_43 /*11*/] == 2) || Global_25282[iLocal_43 /*11*/] == -1)
								{
									Global_25282[iLocal_43 /*11*/] = unk_0x3AF262D7332EEDF5(0, 2);
								}
								unk_0xFF180CD9D9AA06DF(Global_25282[iLocal_43 /*11*/]);
								unk_0x7DEF65DEF4E14960(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25282[iLocal_43 /*11*/];
								iLocal_45 = Global_25282[iLocal_43 /*11*/].f_1;
								unk_0x003F7FC52FDCD49D(iLocal_44, func_39(iLocal_45), Global_25282[iLocal_43 /*11*/].f_9);
								unk_0xFF180CD9D9AA06DF(iLocal_44);
								if (Global_25282[iLocal_43 /*11*/].f_7)
								{
									Global_25282[iLocal_43 /*11*/].f_5 = 0;
									Global_25282[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25282[iLocal_43 /*11*/].f_2 = 1;
							func_38(133, 1);
							func_38(131, 1);
							func_38(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25282[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25282[iLocal_43 /*11*/].f_7 && func_62(iLocal_43))
							{
								Global_25282[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_36(iLocal_43))
							{
								func_35();
								iLocal_29 = 5;
							}
							else
							{
								func_33();
								if (unk_0x3206C464F7803889() == -1)
								{
									unk_0xFF180CD9D9AA06DF(Global_25282[iLocal_43 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_36(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_25282[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_41(&iLocal_42);
							}
							Global_25282[iLocal_43 /*11*/].f_5 = 0;
							Global_25282[iLocal_43 /*11*/].f_4 = 0;
							Global_25282[iLocal_43 /*11*/].f_1 = 0;
							Global_25282[iLocal_43 /*11*/].f_2 = 0;
							Global_25282[iLocal_43 /*11*/].f_7 = 0;
							Global_25282[iLocal_43 /*11*/].f_8 = 0;
							Global_25282[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_66();
			unk_0xBEE2834559A8897A();
		}
	}
	func_66();
	unk_0xBEE2834559A8897A();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25282[iLocal_43 /*11*/] = unk_0x3206C464F7803889();
	}
	fLocal_30 = unk_0x9BB96F6C6E45B813();
	unk_0xFF180CD9D9AA06DF(-1);
	func_4();
	if (unk_0x7832F791572D5809(joaat("family5")) == 0)
	{
		if (!unk_0xB3404E397FF56B3B(&cLocal_46, "NULL"))
		{
			unk_0xA56304EF5BC50A77(&cLocal_46, 1);
		}
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x8C361F37C04084F4(1);
	}
	func_3();
	func_50();
	if (unk_0x76B3C79DE564AFC6(iLocal_38))
	{
		if (!unk_0x8CAADD2AA5EDCAAC(iLocal_38))
		{
			unk_0x477513BFF4F0CEC1(iLocal_38, 1, 0);
		}
	}
	unk_0xD45B500DB0F8DCA7(0);
	func_2();
}

void func_2()
{
	if (unk_0x20551D6D924ED04B())
	{
		if (iLocal_87 == 1)
		{
			unk_0xE59D2DD5DBF1A2CE();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0x1D56B3B9A8003E4A(iLocal_35);
		if (unk_0x76B3C79DE564AFC6(iLocal_37))
		{
			if (unk_0xE9559A12052415BE(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0xE9559A12052415BE(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x477513BFF4F0CEC1(iLocal_37, 0, 0);
				if (unk_0xE9559A12052415BE(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x45A34FA87FBE9599(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x45A34FA87FBE9599(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_39))
	{
		unk_0x477513BFF4F0CEC1(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0x087893C6FCE21842(0, 0, 3000, 1, 0, 0);
		if (unk_0x63D9209D70E2F5D5(uLocal_78))
		{
			unk_0x55CC07D5416539C8(uLocal_78, 0);
		}
		unk_0x46B35AD2F641A4A3(uLocal_78, 0);
		unk_0x31F42B23A853582E(0);
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			unk_0x1F18D3C78C8C1A11(unk_0x0031992CA618A445(), 0);
			unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
			unk_0xC5F8FCBA959CFCF8(unk_0x0031992CA618A445(), Local_31, 1, 0, 2);
			if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 1, 0);
				}
			}
			unk_0x477513BFF4F0CEC1(unk_0x0031992CA618A445(), 1, 0);
		}
		if (!unk_0xB3404E397FF56B3B(&cLocal_62, "NULL"))
		{
			if (unk_0x3A7B47D96E536F61(&cLocal_62))
			{
				unk_0xB3E27A9E412BBDF8(&cLocal_62);
			}
		}
		if (unk_0x76B3C79DE564AFC6(iLocal_39))
		{
			unk_0x477513BFF4F0CEC1(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0);
		unk_0xD45B500DB0F8DCA7(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x19118E4FD77F8B01(unk_0x3D35F9864E4640B1());
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 1);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 1);
		func_14(1);
		unk_0x94C26352258B001C();
		unk_0x7E403E6B20B0F65E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xCAD6D8C85D0F329B())
			{
				unk_0x683F0CB6CA4C99D0(0);
			}
			if (!func_13())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_55860 = 1;
		Global_68168 = 1;
		Global_70783 = 1;
	}
	else
	{
		func_14(0);
		unk_0xA82338775E53641E();
		Global_55860 = 0;
		if (bParam1)
		{
			unk_0x074C8061E9FD0B90();
		}
		unk_0x49499782410B8CE3(unk_0x3D35F9864E4640B1(), 0);
		unk_0x064117622D142B20(unk_0x3D35F9864E4640B1(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x27CA09C6DFAB1E79())
		{
			if (((!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_10(unk_0x3D35F9864E4640B1())) && !func_7(unk_0x3D35F9864E4640B1(), 0)) && !func_6())
			{
				unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
			}
		}
		else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()) && !func_10(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC20B73867395D06D(unk_0x0031992CA618A445(), 0);
		}
		Global_70783 = 0;
	}
}

bool func_6()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1312735;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
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

bool func_11()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xF1246FB9A9397227() != iParam0 && uParam2)
		{
			unk_0xC17B06EB7D180D8E(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 13);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 13);
	}
}

int func_15()
{
	if (!func_62(iLocal_43))
	{
		if (((((((func_29(&uLocal_26) >= 1f && unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0xF9E96260CEF7C23C(iLocal_37) == unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445())) && !func_28(8, -1)) && !unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0)) && unk_0x42F5B921E635D99B(unk_0x0031992CA618A445(), Local_31, 90f)) && !unk_0xABB40063444DEDAA(unk_0x0031992CA618A445())) && !unk_0x003E46CBEF6CE07A())
		{
			if (iLocal_42 == -1)
			{
				func_27();
				func_26(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_24(iLocal_42, 1))
			{
				func_41(&iLocal_42);
				func_53(&uLocal_26);
				Global_25282[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0x4FC3AEC9D3BD192C("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x18F1BFAF88AC511B(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_40("TV_HLP5"))
			{
				unk_0x8C361F37C04084F4(1);
			}
			func_2();
			func_41(&iLocal_42);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_85 == 0)
	{
		unk_0x8662FAB20C4C3CFB(2, 222);
		if (unk_0xD887E21676314450(2, 222))
		{
			func_41(&iLocal_42);
			func_26(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_23();
		}
	}
	else
	{
		unk_0xC9621A9AD282CC14(2, 200, 1);
		if (unk_0x8CAADD2AA5EDCAAC(unk_0x0031992CA618A445()))
		{
			unk_0x477513BFF4F0CEC1(unk_0x0031992CA618A445(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
			{
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
			}
		}
		unk_0x7CDDB154852DA508();
		unk_0xDC7987B373C71796(unk_0x0031992CA618A445());
		func_21(1, 1);
		unk_0x8662FAB20C4C3CFB(2, 222);
		func_17(0);
		if (unk_0xD887E21676314450(2, 222) || (unk_0xFF512A008EA368FF(2) && unk_0x0B34E1F8A98046A7(2, 200)))
		{
			func_41(&iLocal_42);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(iParam0);
		}
		unk_0xCD7E92DE2BFA0B0D(&Global_2314, 2);
	}
}

void func_18(int iParam0)
{
	if (Global_14604)
	{
		func_19(0, 0);
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
	if (!func_13())
	{
		Global_14443.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_20(0))
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

int func_20(int iParam0)
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

void func_21(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_22(0))
		{
			if (!iLocal_22)
			{
				if (unk_0x4FC3AEC9D3BD192C("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x18F1BFAF88AC511B(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x3206C464F7803889() == 0)
				{
					unk_0xFF180CD9D9AA06DF(1);
				}
				else
				{
					unk_0xFF180CD9D9AA06DF(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0xCDDADACC00BB60FC(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x9BB96F6C6E45B813();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x7DEF65DEF4E14960(fVar2);
				iLocal_24 = unk_0x31CD6E9F83C10233();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x9BB96F6C6E45B813();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x7DEF65DEF4E14960(fVar2);
				iLocal_24 = unk_0x31CD6E9F83C10233();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0x4FC3AEC9D3BD192C("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x18F1BFAF88AC511B(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x31CD6E9F83C10233() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0xCDDADACC00BB60FC(2, 218) - 127);
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

void func_23()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_85 == 0)
	{
		uLocal_78 = unk_0x12F2AB3581F0E537("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0x94D55D9214C7A296(uLocal_78, 100f);
		unk_0x55CC07D5416539C8(uLocal_78, 1);
		unk_0x087893C6FCE21842(1, 0, 3000, 1, 0, 0);
		if (unk_0x76B3C79DE564AFC6(iLocal_39))
		{
			unk_0x477513BFF4F0CEC1(iLocal_39, 0, 0);
		}
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			unk_0x1F18D3C78C8C1A11(unk_0x0031992CA618A445(), 1);
			unk_0xD706D9D85701BFBD(unk_0x0031992CA618A445());
			if (unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
			{
				unk_0xB568492AC80B8832(unk_0x3D35F9864E4640B1(), 0, 0);
				bLocal_36 = true;
			}
			unk_0xC5F8FCBA959CFCF8(unk_0x0031992CA618A445(), Local_31, -1, 0, 2);
			unk_0x477513BFF4F0CEC1(unk_0x0031992CA618A445(), 0, 0);
		}
		if (!unk_0xB3404E397FF56B3B(&cLocal_62, "NULL"))
		{
			if (!unk_0x3A7B47D96E536F61(&cLocal_62))
			{
				unk_0xFD69BDF108B32E5B(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0xD45B500DB0F8DCA7(1);
		iLocal_85 = 1;
	}
}

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_25(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x4B0365EB2D59E6FA(unk_0xED1168B8D2D313FA()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (unk_0x136B42AA35650CB6())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36516[iVar0 /*32*/] == 1 && Global_36516[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36516[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36516[iVar0 /*32*/].f_5 = 1;
			Global_36516[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36516[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36516[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
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
		if (Global_36516[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_26(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x7832F791572D5809(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x003E46CBEF6CE07A())
	{
		if (!*iParam0 == -1)
		{
			func_41(iParam0);
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
		if (!Global_36516[iVar0 /*32*/])
		{
			Global_36516[iVar0 /*32*/] = 1;
			Global_36516[iVar0 /*32*/].f_1 = Global_36717;
			Global_36717++;
			Global_36516[iVar0 /*32*/].f_4 = 0;
			Global_36516[iVar0 /*32*/].f_29 = 0;
			Global_36516[iVar0 /*32*/].f_5 = 0;
			Global_36516[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36516[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36516[iVar0 /*32*/].f_6 = iParam3;
			Global_36516[iVar0 /*32*/].f_31 = unk_0xFFDE6A3A0108B7CB();
			Global_36516[iVar0 /*32*/].f_7 = 0;
			Global_36516[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x0BD3CCFB6C6CFA91(sParam4))
			{
				Global_36516[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36516[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36516[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36516[iVar0 /*32*/].f_12 = 0;
				Global_36516[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36516[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_27()
{
	if (unk_0x20551D6D924ED04B())
	{
		if (iLocal_87 == 0)
		{
			unk_0xAA812BAAC452981B("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

bool func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

float func_29(var uParam0)
{
	if (func_32(uParam0))
	{
		if (func_31(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_30(unk_0x2A3398C6222EB190(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_30(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		iVar2 = unk_0x898811EA80D35DE2();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x31CD6E9F83C10233()) / 1000f);
}

bool func_31(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 2);
}

bool func_32(var uParam0)
{
	return unk_0x2A3398C6222EB190(*uParam0, 1);
}

void func_33()
{
	float fVar0;
	
	fVar0 = 1f;
	func_34(&fVar0);
	unk_0x1D56B3B9A8003E4A(iLocal_35);
	unk_0x38C75B31337B3454(4);
	unk_0xED9541AF8190B3D1(1);
	unk_0xAF49B1D1F3A2CBE3(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x1D56B3B9A8003E4A(unk_0x185E50731B1D06F6());
}

void func_34(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x5E61619C36D9095B(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_35()
{
	Global_25282[iLocal_43 /*11*/].f_7 = 0;
	Global_25282[iLocal_43 /*11*/] = unk_0x3206C464F7803889();
	fLocal_30 = unk_0x9BB96F6C6E45B813();
	if (unk_0x3A7B47D96E536F61(&cLocal_62))
	{
		unk_0xB3E27A9E412BBDF8(&cLocal_62);
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x8C361F37C04084F4(1);
	}
	func_41(&iLocal_42);
	unk_0xFF180CD9D9AA06DF(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_50();
}

int func_36(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_37(unk_0x3D35F9864E4640B1()) };
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

Vector3 func_37(int iParam0)
{
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iParam0), 0);
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/])
	{
		unk_0x2553A7EB99AABF55(Global_51596[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE931A869061F7BD2(Global_51596[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_39(int iParam0)
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

bool func_40(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

void func_41(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_25(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36516[iVar0 /*32*/])
		{
			Global_36516[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_42()
{
	if (func_29(&uLocal_26) < 1f)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if ((!unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x42F5B921E635D99B(unk_0x0031992CA618A445(), Local_31, 90f)) || unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0xF9E96260CEF7C23C(iLocal_37) != unk_0xF9E96260CEF7C23C(unk_0x0031992CA618A445()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (func_28(8, -1))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_89835)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_25282[iLocal_43 /*11*/].f_8)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1)
	{
		func_26(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_24(iLocal_42, 1))
	{
		func_41(&iLocal_42);
		func_53(&uLocal_26);
		Global_25282[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0x4FC3AEC9D3BD192C("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0x18F1BFAF88AC511B(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_43(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2)
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
		func_49((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104439.f_10055[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104439.f_10055[iParam0 /*12*/].f_6 == 11 || Global_104439.f_10055[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104439.f_10055[iParam0 /*12*/].f_5 = 1;
		Global_104439.f_10055[iParam0 /*12*/].f_10 = iParam1;
		Global_104439.f_10055[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x25676C1B212BF4A8(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_44();
	}
}

void func_44()
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
	Global_104175 = 0;
	Global_104176 = 0;
	Global_104177 = 0;
	Global_104178 = 0;
	Global_104179 = 0;
	Global_104180 = 0;
	Global_104181 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104439.f_10055.f_3853;
	Global_104439.f_10055.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104439.f_10055[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104439.f_10055[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104175++;
					fVar1 = (fVar1 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104176++;
					fVar2 = (fVar2 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104177++;
					fVar3 = (fVar3 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104178++;
					fVar4 = (fVar4 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104179++;
					fVar5 = (fVar5 + (Global_104439.f_10055[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104180++;
					fVar6 = (fVar6 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104181++;
					fVar7 = (fVar7 + Global_104439.f_10055[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104158 > 0)
	{
		if (Global_104175 == Global_104158)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104159 > 0)
	{
		if (Global_104176 == Global_104159)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104160 > 0)
	{
		if (Global_104177 == Global_104160)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104161 > 0)
	{
		if (Global_104178 == Global_104161)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104162 > 0)
	{
		if (((Global_104179 == Global_104162 || (Global_104162 * 10 / Global_104179) < 41) || Global_104179 > Global_104165) || Global_104179 == Global_104165)
		{
			if (!unk_0x2A3398C6222EB190(Global_104439.f_10055.f_3856, 14))
			{
				if (Global_104179 == Global_104162)
				{
					unk_0x25676C1B212BF4A8(joaat("num_rndevents_completed"), Global_104162, 0);
					unk_0xCD7E92DE2BFA0B0D(&(Global_104439.f_10055.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104163 > 0)
	{
		if (Global_104180 == Global_104163)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104164 > 0)
	{
		if (Global_104181 == Global_104164)
		{
			fVar7 = 5f;
		}
	}
	Global_104439.f_10055.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104179 > Global_104165 || Global_104179 == Global_104165)
	{
		iVar9 = Global_104165;
	}
	else
	{
		iVar9 = Global_104179;
	}
	unk_0xE931A869061F7BD2(joaat("num_missions_completed"), Global_104175, 1);
	unk_0xE931A869061F7BD2(joaat("num_missions_available"), Global_104158, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_completed"), Global_104176, 1);
	unk_0xE931A869061F7BD2(joaat("num_minigames_available"), Global_104159, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_completed"), Global_104177, 1);
	unk_0xE931A869061F7BD2(joaat("num_oddjobs_available"), Global_104160, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_completed"), Global_104178, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndpeople_available"), Global_104161, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xE931A869061F7BD2(joaat("num_rndevents_available"), Global_104165, 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_completed"), (Global_104181 + Global_104180), 1);
	unk_0xE931A869061F7BD2(joaat("num_misc_available"), (Global_104164 + Global_104163), 1);
	Global_104182 = (Global_104175 * 100 / Global_104158);
	Global_104184 = ((Global_104177 + Global_104176) * 100 / (Global_104160 + Global_104159));
	Global_104183 = ((Global_104178 + iVar9) * 100 / (Global_104161 + Global_104165));
	Global_104185 = ((Global_104180 + Global_104181) * 100 / (Global_104163 + Global_104164));
	unk_0x16E461F1C38154B6(joaat("total_progress_made"), Global_104439.f_10055.f_3853, 1);
	unk_0xE931A869061F7BD2(joaat("percent_story_missions"), Global_104182, 1);
	unk_0xE931A869061F7BD2(joaat("percent_ambient_missions"), Global_104183, 1);
	unk_0xE931A869061F7BD2(joaat("percent_oddjobs"), Global_104184, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853))
	{
		func_48(13, unk_0xF34EE736CF047844(Global_104439.f_10055.f_3853));
	}
	if (!unk_0xCED7B36AA85A9CCD())
	{
		if (!Global_70785)
		{
			if (func_47() == 2 == 0 && !unk_0x27CA09C6DFAB1E79())
			{
				if (unk_0x04F2E3CF902D6F5D())
				{
					Global_104173 = 0;
				}
				if (!Global_55854)
				{
					func_45();
				}
			}
		}
	}
}

int func_45()
{
	if (func_46(0))
	{
		return 0;
	}
	if (Global_92801.f_8)
	{
		if (Global_92801.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92801.f_10 > 1)
	{
		return 0;
	}
	Global_92801.f_10++;
	return 1;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

int func_47()
{
	return Global_25222;
}

int func_48(int iParam0, int iParam1)
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
	iVar0 = unk_0x354C8180327FFAF0(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1A7D8193599FBBC(iParam0, iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar16, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_50()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x5D33E8B1932372A0("tvscreen"))
	{
		unk_0xBB5A31D30029EA32("tvscreen");
		iLocal_35 = -1;
		unk_0x1D56B3B9A8003E4A(unk_0x185E50731B1D06F6());
	}
}

void func_51()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_52();
	}
	if (unk_0x5D33E8B1932372A0("tvscreen"))
	{
		unk_0xBB5A31D30029EA32("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0x76B3C79DE564AFC6(iLocal_37))
	{
		func_66();
	}
	iVar0 = unk_0xE9559A12052415BE(iLocal_37);
	unk_0x4B1047A97B08583C("tvscreen", 0);
	unk_0x855B6CE2A6768389(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x45234A6282A92C59(iVar0))
		{
			if (!unk_0x76B3C79DE564AFC6(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x4673A7E6EA033947(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x5D33E8B1932372A0("tvscreen"))
			{
				unk_0x4B1047A97B08583C("tvscreen", 0);
			}
			if (!unk_0x45234A6282A92C59(iVar0))
			{
				unk_0x855B6CE2A6768389(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0xD86A794CAE0C053E("tvscreen");
	func_3();
}

void func_52()
{
	if (unk_0x76B3C79DE564AFC6(iLocal_37))
	{
		if (unk_0xE9559A12052415BE(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0x814AF6966D681312(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0x5082D1A6D078DB20(iLocal_37, uLocal_34);
	unk_0x1F18D3C78C8C1A11(iLocal_37, 1);
	unk_0x477513BFF4F0CEC1(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0x814AF6966D681312(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0x5082D1A6D078DB20(iLocal_39, uLocal_34);
	unk_0x1F18D3C78C8C1A11(iLocal_39, 1);
	unk_0x477513BFF4F0CEC1(iLocal_39, 0, 0);
}

void func_53(var uParam0)
{
	func_54(uParam0, 0f);
}

void func_54(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_30(unk_0x2A3398C6222EB190(*uParam0, 4)) - fParam1);
	unk_0xCD7E92DE2BFA0B0D(uParam0, 1);
	unk_0xD804ACF2A7171150(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_55()
{
}

int func_56(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104439.f_8946.f_330[iParam0 /*6*/];
}

void func_57()
{
	Local_31 = { unk_0xF177E0DA126D71C8(iLocal_37, 1) };
	uLocal_34 = unk_0x69F9721375CE60CF(iLocal_37);
	func_59();
	if (unk_0xE9559A12052415BE(iLocal_37) == joaat("prop_tv_03"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_43 = 0;
			Local_79 = { -9.8135f, -1440.913f, 31.3654f };
			Local_82 = { 0f, 0f, -134.3211f };
			Local_88 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0xE9559A12052415BE(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			Local_79 = { 1978.23f, 3819.65f, 34.2724f };
			Local_82 = { 0f, 0f, -105.15f };
			Local_88 = { 1978.33f, 3819.717f, 32.4501f };
			func_58();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0xE9559A12052415BE(iLocal_37) == joaat("prop_tv_flat_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_43 = 1;
			Local_79 = { 2.5724f, 527.9989f, 176.1619f };
			Local_82 = { 0f, 0f, -29.9488f };
			Local_88 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0xE9559A12052415BE(iLocal_37) == joaat("prop_tv_flat_02"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_43 = 3;
			Local_79 = { -1160.502f, -1520.76f, 10.7393f };
			Local_82 = { 0f, 0f, 60.061f };
			Local_88 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_46, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_62, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0xE9559A12052415BE(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0xE9559A12052415BE(iLocal_37) == joaat("v_ilev_mm_scre_off"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_43 = 4;
			Local_79 = { -802.8972f, 172.537f, 74.5801f };
			Local_82 = { 0f, 0f, -69.0273f };
			Local_88 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0xE9559A12052415BE(iLocal_37) == joaat("des_tvsmash_start"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_43 = 5;
			Local_79 = { -808.3051f, 171.2623f, 77.2822f };
			Local_82 = { 1.8886f, 0f, 110.9232f };
			Local_88 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_58()
{
	iLocal_38 = unk_0x814AF6966D681312(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0x5082D1A6D078DB20(iLocal_38, uLocal_34);
	unk_0x477513BFF4F0CEC1(iLocal_38, 1, 0);
	unk_0x1F18D3C78C8C1A11(iLocal_38, 1);
}

void func_59()
{
	unk_0x003F7FC52FDCD49D(0, func_39(1), 0);
	if (func_56(22))
	{
		unk_0x003F7FC52FDCD49D(1, func_39(12), 0);
	}
	else
	{
		unk_0x003F7FC52FDCD49D(1, func_39(2), 0);
	}
}

void func_60()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25282[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0x76B3C79DE564AFC6(iLocal_40))
			{
				unk_0xC20B73867395D06D(iLocal_40, 0);
			}
			if (unk_0x76B3C79DE564AFC6(iLocal_37))
			{
				unk_0xC20B73867395D06D(iLocal_37, 0);
			}
			if (unk_0x76B3C79DE564AFC6(iLocal_39))
			{
				unk_0xC20B73867395D06D(iLocal_39, 0);
			}
			if (unk_0x76B3C79DE564AFC6(iLocal_38))
			{
				unk_0xC20B73867395D06D(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0x76B3C79DE564AFC6(iLocal_40))
		{
			unk_0xC20B73867395D06D(iLocal_40, 1);
		}
		if (unk_0x76B3C79DE564AFC6(iLocal_37))
		{
			unk_0xC20B73867395D06D(iLocal_37, 1);
		}
		if (unk_0x76B3C79DE564AFC6(iLocal_39))
		{
			unk_0xC20B73867395D06D(iLocal_39, 1);
		}
		if (unk_0x76B3C79DE564AFC6(iLocal_38))
		{
			unk_0xC20B73867395D06D(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_61(int iParam0)
{
	return Global_35813 == iParam0;
}

int func_62(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25282[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (unk_0x20551D6D924ED04B())
	{
		if (unk_0xEAD4F97609714B93() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (Global_89829 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_83695[Global_89829 /*34*/].f_15, 20);
	}
	return 0;
}

void func_65()
{
}

void func_66()
{
	if (iLocal_43 == -1)
	{
		unk_0xBEE2834559A8897A();
	}
	func_41(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25282[iLocal_43 /*11*/].f_6 = 0;
		Global_25282[iLocal_43 /*11*/].f_7 = 0;
		Global_25282[iLocal_43 /*11*/].f_8 = 0;
		Global_25282[iLocal_43 /*11*/].f_4 = 0;
		Global_25282[iLocal_43 /*11*/].f_5 = 0;
		Global_25282[iLocal_43 /*11*/].f_2 = 0;
		Global_25282[iLocal_43 /*11*/] = -1;
		Global_25282[iLocal_43 /*11*/].f_1 = 0;
		Global_25282[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_40("TV_HLP1") || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x8C361F37C04084F4(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_67();
	if (unk_0x3A7B47D96E536F61(&cLocal_62))
	{
		unk_0xB3E27A9E412BBDF8(&cLocal_62);
	}
	unk_0xA14D96845001C670();
	func_2();
	unk_0xBEE2834559A8897A();
}

void func_67()
{
	func_50();
	if (unk_0x76B3C79DE564AFC6(iLocal_37))
	{
		if (unk_0xE9559A12052415BE(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xF2EFF31F204F4A7D(&iLocal_37);
			unk_0x9793B48C4C8275F8(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_39))
	{
		unk_0xF2EFF31F204F4A7D(&iLocal_39);
		unk_0x9793B48C4C8275F8(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x76B3C79DE564AFC6(iLocal_38))
	{
		unk_0xF2EFF31F204F4A7D(&iLocal_38);
		unk_0x9793B48C4C8275F8(joaat("prop_tt_screenstatic"));
	}
}

