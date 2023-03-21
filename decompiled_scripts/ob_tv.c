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
	if (unk_0x5EBD03AF78E7B4DB(2))
	{
		func_67();
	}
	if (unk_0xDC5D81351D6A4DDB(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_66();
		if (unk_0xDC5D81351D6A4DDB(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_65() && !func_64())) && !func_63(iLocal_43))
			{
				func_67();
			}
			if ((unk_0x47C3DC461C758C29() && unk_0xF6F3AB25005ED460() != 3) && unk_0x84C1DECF60EFBBD7() == 3)
			{
				func_67();
			}
			if (func_62(13) || func_62(14))
			{
				func_67();
			}
			if (unk_0x53C1CCE5622F35FF(iScriptParam_0))
			{
				func_67();
			}
			if (unk_0x1E99F8A10D565A13(iScriptParam_0))
			{
				if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
				{
					func_61();
					if (unk_0x24A1A7BF4ED94B71(iScriptParam_0) < 950)
					{
						func_67();
					}
					switch (iLocal_29)
					{
						case 0:
							func_58();
							if (iLocal_43 == 5)
							{
								if (func_57(18) == 1 && func_57(20) == 0)
								{
									uLocal_41 = unk_0x389F96269D4F1FD8(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0xCD7C9B7A8F43BA15(uLocal_41))
									{
										unk_0x317CA41ED2351630(uLocal_41, 9);
									}
									unk_0x8F1A9FE6D91AAFEB();
								}
							}
							if (iLocal_43 == -1)
							{
								func_67();
							}
							else
							{
								func_56();
								unk_0x01475066910DA845("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0x789152CB302E8726(0);
								Global_25519[iLocal_43 /*11*/].f_2 = 0;
								Global_25519[iLocal_43 /*11*/].f_6 = 1;
								Global_25519[iLocal_43 /*11*/] = unk_0x22C775856F4633CA(0, 2);
								Global_25519[iLocal_43 /*11*/].f_1 = 0;
								Global_25519[iLocal_43 /*11*/].f_4 = 0;
								Global_25519[iLocal_43 /*11*/].f_7 = 0;
								Global_25519[iLocal_43 /*11*/].f_8 = 0;
								Global_25519[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_54(&uLocal_26);
								func_52();
								func_51();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0xEC702053BF35BAD5(iLocal_37) && unk_0xE0DEA0A8127CF965(iLocal_37, 1119092736))
							{
								if (func_43() || Global_25519[iLocal_43 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_42(&iLocal_42);
							}
							break;
						
						case 2:
							func_52();
							if (!func_63(iLocal_43))
							{
								func_42(&iLocal_42);
								if (func_41("TV_HLP1"))
								{
									unk_0x135C61E339DABBAC(1);
								}
							}
							if (unk_0xDC5D81351D6A4DDB(iLocal_37))
							{
								if (!unk_0x7E65E323A95E4187(iLocal_37))
								{
									unk_0x7C73A424F1117528(iLocal_37, 1, 0);
								}
							}
							if (unk_0xDC5D81351D6A4DDB(iLocal_39))
							{
								if (!unk_0x7E65E323A95E4187(iLocal_39))
								{
									unk_0x7C73A424F1117528(iLocal_39, 1, 0);
								}
							}
							if (unk_0xDC5D81351D6A4DDB(iLocal_38))
							{
								if (unk_0x7E65E323A95E4187(iLocal_38))
								{
									unk_0x7C73A424F1117528(iLocal_38, 0, 0);
								}
							}
							if (!unk_0x3CAC2741CC1A631F(&cLocal_46, "NULL"))
							{
								unk_0x665C47CF8EF3A8D1(&cLocal_46, 0);
							}
							unk_0x9BD64A4E6F5A143C(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0xDC5D81351D6A4DDB(iLocal_40))
							{
								unk_0xE1FCD83CB585B66E(iLocal_40);
							}
							if (!func_63(iLocal_43))
							{
								if ((Global_25519[iLocal_43 /*11*/] == 3 || Global_25519[iLocal_43 /*11*/] == 2) || Global_25519[iLocal_43 /*11*/] == -1)
								{
									Global_25519[iLocal_43 /*11*/] = unk_0x22C775856F4633CA(0, 2);
								}
								unk_0x15049F016446258E(Global_25519[iLocal_43 /*11*/]);
								unk_0xD5DB3F88722178ED(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25519[iLocal_43 /*11*/];
								iLocal_45 = Global_25519[iLocal_43 /*11*/].f_1;
								unk_0x64B5792B3A187831(iLocal_44, func_40(iLocal_45), Global_25519[iLocal_43 /*11*/].f_9);
								unk_0x15049F016446258E(iLocal_44);
								if (Global_25519[iLocal_43 /*11*/].f_7)
								{
									Global_25519[iLocal_43 /*11*/].f_5 = 0;
									Global_25519[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25519[iLocal_43 /*11*/].f_2 = 1;
							func_39(133, 1);
							func_39(131, 1);
							func_39(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25519[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25519[iLocal_43 /*11*/].f_7 && func_63(iLocal_43))
							{
								Global_25519[iLocal_43 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_37(iLocal_43))
							{
								func_36();
								iLocal_29 = 5;
							}
							else
							{
								func_34();
								if (unk_0x857E93ABA46E1FD8() == -1)
								{
									unk_0x15049F016446258E(Global_25519[iLocal_43 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_37(iLocal_43))
							{
								iLocal_29 = 2;
							}
							if (Global_25519[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_42 != -1)
							{
								func_42(&iLocal_42);
							}
							Global_25519[iLocal_43 /*11*/].f_5 = 0;
							Global_25519[iLocal_43 /*11*/].f_4 = 0;
							Global_25519[iLocal_43 /*11*/].f_1 = 0;
							Global_25519[iLocal_43 /*11*/].f_2 = 0;
							Global_25519[iLocal_43 /*11*/].f_7 = 0;
							Global_25519[iLocal_43 /*11*/].f_8 = 0;
							Global_25519[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_67();
			unk_0x8F1A9FE6D91AAFEB();
		}
	}
	func_67();
	unk_0x8F1A9FE6D91AAFEB();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25519[iLocal_43 /*11*/] = unk_0x857E93ABA46E1FD8();
	}
	fLocal_30 = unk_0x7FF868C2D4D46872();
	unk_0x15049F016446258E(-1);
	func_4();
	if (unk_0x8B1574454E8C2421(joaat("family5")) == 0)
	{
		if (!unk_0x3CAC2741CC1A631F(&cLocal_46, "NULL"))
		{
			unk_0x665C47CF8EF3A8D1(&cLocal_46, 1);
		}
	}
	if (((func_41("TV_HLP1") || func_41("TV_HLP2")) || func_41("TV_HLP5")) || func_41("TV_HLP6"))
	{
		unk_0x135C61E339DABBAC(1);
	}
	func_3();
	func_51();
	if (unk_0xDC5D81351D6A4DDB(iLocal_38))
	{
		if (!unk_0x7E65E323A95E4187(iLocal_38))
		{
			unk_0x7C73A424F1117528(iLocal_38, 1, 0);
		}
	}
	unk_0x272F3D0AA11C53C8(0);
	func_2();
}

void func_2()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (iLocal_87 == 1)
		{
			unk_0xFFC237573AEB000B();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0x7AF4A31FB51D0A4D(iLocal_35);
		if (unk_0xDC5D81351D6A4DDB(iLocal_37))
		{
			if (unk_0x8F474E419F56E48D(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x8F474E419F56E48D(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x7C73A424F1117528(iLocal_37, 0, 0);
				if (unk_0x8F474E419F56E48D(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0xFF35427AF9343886(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0xFF35427AF9343886(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_39))
	{
		unk_0x7C73A424F1117528(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
		if (unk_0xC3553172354FFB69(uLocal_78))
		{
			unk_0x930701157A4B9374(uLocal_78, 0);
		}
		unk_0x77F0486CE0E598D5(uLocal_78, 0);
		unk_0xD87B76260C547F31(0);
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), 0);
			unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
			unk_0x8CBE3882704F529D(unk_0xA19140A5C42D8715(), Local_31, 1, 0, 2);
			if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 1, 0);
				}
			}
			unk_0x7C73A424F1117528(unk_0xA19140A5C42D8715(), 1, 0);
		}
		if (!unk_0x3CAC2741CC1A631F(&cLocal_62, "NULL"))
		{
			if (unk_0x2F8EAF18929E1E59(&cLocal_62))
			{
				unk_0x5AD7D03C214BDA88(&cLocal_62);
			}
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_39))
		{
			unk_0x7C73A424F1117528(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0, 0);
		unk_0x272F3D0AA11C53C8(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0xC97ACA9456A064F3(unk_0xD4E735F4B6A956AC());
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 1);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 1);
		func_14(1);
		unk_0x158181F81A221D70();
		unk_0xD8EA6395AE60BF4A();
		if (Global_14513.f_1 > 3)
		{
			if (unk_0xB39808C1DCE0DCFA())
			{
				unk_0xA8B97F91CBDE376C(0);
			}
			if (!func_13())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_14(0);
		unk_0x21727E2C492FE1B3();
		Global_56187 = 0;
		if (bParam1)
		{
			unk_0x1A81FD78261DCFCD();
		}
		unk_0x87A84AA8644AACAE(unk_0xD4E735F4B6A956AC(), 0);
		unk_0x580B6C51F831EEBC(unk_0xD4E735F4B6A956AC(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x4C9BACA8D249CB13())
		{
			if ((((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_10(unk_0xD4E735F4B6A956AC())) && !func_7(unk_0xD4E735F4B6A956AC(), 0)) && !func_6()) && !bParam4)
			{
				unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
			}
		}
		else if ((!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()) && !func_10(unk_0xD4E735F4B6A956AC())) && !bParam4)
		{
			unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
		}
		Global_71203 = 0;
	}
}

bool func_6()
{
	return unk_0x05EFB6A616B6FADE(Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			bVar0 = unk_0xE46ECB9FD23D3264(iParam0) == 8;
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
	if (Global_1312837[iVar1] == 1)
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

int func_9()
{
	return Global_1312736;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0xD4E735F4B6A956AC())
		{
			return 1;
		}
	}
	if (unk_0x05EFB6A616B6FADE(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0xDA9416DF9C88432D() != iParam0 && uParam2)
		{
			unk_0x5126E6F88EF5B7A1(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 13);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 13);
	}
}

int func_15()
{
	if (!func_63(iLocal_43))
	{
		if (((((((func_30(&uLocal_26) >= 1f && unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0xDA3A4E46D189F555(iLocal_37) == unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715())) && !func_29(8, -1)) && !unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0)) && unk_0x5393F5210E66E1B6(unk_0xA19140A5C42D8715(), Local_31, 90f)) && !unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715())) && !unk_0x47C3DC461C758C29())
		{
			if (iLocal_42 == -1)
			{
				func_28();
				func_27(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_25(iLocal_42, 1))
			{
				func_42(&iLocal_42);
				func_54(&uLocal_26);
				Global_25519[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0xF44A747F75103BCF("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xE11F00B4AC919F45(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_41("TV_HLP5"))
			{
				unk_0x135C61E339DABBAC(1);
			}
			func_2();
			func_42(&iLocal_42);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_85 == 0)
	{
		unk_0x9EA8CBEA7355649E(2, 222);
		if (unk_0xDF0ADAD7E584090D(2, 222))
		{
			func_42(&iLocal_42);
			func_27(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_24();
		}
	}
	else
	{
		unk_0xD481A812073CCF02(2, 200, 1);
		if (unk_0x7E65E323A95E4187(unk_0xA19140A5C42D8715()))
		{
			unk_0x7C73A424F1117528(unk_0xA19140A5C42D8715(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
			{
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 0, 0);
			}
		}
		unk_0x74BF5F6EEF62D5A9();
		unk_0x72F6879426DD8BE7(unk_0xA19140A5C42D8715());
		func_22(1, 1);
		unk_0x9EA8CBEA7355649E(2, 222);
		func_17(0);
		if (unk_0xDF0ADAD7E584090D(2, 222) || (unk_0x0B9F814BC8D14042(2) && unk_0x63247BC34C80F88C(2, 200)))
		{
			func_42(&iLocal_42);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (func_21())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(iParam0);
		}
		unk_0x2BCFB39E86340DAA(&Global_2384, 2);
	}
}

void func_18(int iParam0)
{
	if (func_21())
	{
		return;
	}
	if (Global_14681)
	{
		func_19(0, 0);
	}
	if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 16);
	}
	if (unk_0xB39808C1DCE0DCFA())
	{
		unk_0xA8B97F91CBDE376C(0);
	}
	Global_15822 = 5;
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 30);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 30);
	}
	if (!func_13())
	{
		Global_14513.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_20(0))
		{
			Global_14681 = 1;
			if (bParam1)
			{
				unk_0x75B4B390EE495A3B(&Global_14450);
			}
			Global_14441 = { Global_14459[Global_14458 /*3*/] };
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
	else if (Global_14681 == 1)
	{
		Global_14681 = 0;
		Global_14441 = { Global_14466[Global_14458 /*3*/] };
		if (bParam1)
		{
			unk_0xB8927E9A664047D4(Global_14450);
		}
		else
		{
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
}

int func_20(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
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
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_21()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

void func_22(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_23(0))
		{
			if (!iLocal_22)
			{
				if (unk_0xF44A747F75103BCF("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0xE11F00B4AC919F45(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x857E93ABA46E1FD8() == 0)
				{
					unk_0x15049F016446258E(1);
				}
				else
				{
					unk_0x15049F016446258E(0);
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
		iVar1 = (unk_0x55D3DD553C0E44E6(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x7FF868C2D4D46872();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0xD5DB3F88722178ED(fVar2);
				iLocal_24 = unk_0xFD34717937104F1C();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x7FF868C2D4D46872();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0xD5DB3F88722178ED(fVar2);
				iLocal_24 = unk_0xFD34717937104F1C();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0xF44A747F75103BCF("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0xE11F00B4AC919F45(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0xFD34717937104F1C() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x55D3DD553C0E44E6(2, 218) - 127);
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

void func_24()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_85 == 0)
	{
		uLocal_78 = unk_0x4AD86AC07DD005D4("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0x87D780D3C0F65A0D(uLocal_78, 100f);
		unk_0x930701157A4B9374(uLocal_78, 1);
		unk_0x8E88E73F74A9FF79(1, 0, 3000, 1, 0, 0);
		if (unk_0xDC5D81351D6A4DDB(iLocal_39))
		{
			unk_0x7C73A424F1117528(iLocal_39, 0, 0);
		}
		if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
		{
			unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), 1);
			unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
			if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
			{
				unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), 0, 0);
				bLocal_36 = true;
			}
			unk_0x8CBE3882704F529D(unk_0xA19140A5C42D8715(), Local_31, -1, 0, 2);
			unk_0x7C73A424F1117528(unk_0xA19140A5C42D8715(), 0, 0);
		}
		if (!unk_0x3CAC2741CC1A631F(&cLocal_62, "NULL"))
		{
			if (!unk_0x2F8EAF18929E1E59(&cLocal_62))
			{
				unk_0x8969D02DEDC106D2(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0, 0);
		unk_0x272F3D0AA11C53C8(1);
		iLocal_85 = 1;
	}
}

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_26(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x58E3CCF930D23BD5(unk_0xA6580F898F4E801C()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (unk_0x5CA3186381FC012C())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/] == 1 && Global_36827[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36827[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36827[iVar0 /*32*/].f_5 = 1;
			Global_36827[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36827[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36827[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
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
		if (Global_36827[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8B1574454E8C2421(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x47C3DC461C758C29())
	{
		if (!*iParam0 == -1)
		{
			func_42(iParam0);
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
		if (!Global_36827[iVar0 /*32*/])
		{
			Global_36827[iVar0 /*32*/] = 1;
			Global_36827[iVar0 /*32*/].f_1 = Global_37028;
			Global_37028++;
			Global_36827[iVar0 /*32*/].f_4 = 0;
			Global_36827[iVar0 /*32*/].f_29 = 0;
			Global_36827[iVar0 /*32*/].f_5 = 0;
			Global_36827[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36827[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36827[iVar0 /*32*/].f_6 = iParam3;
			Global_36827[iVar0 /*32*/].f_31 = unk_0xFCB3E4B16B4A9EC1();
			Global_36827[iVar0 /*32*/].f_7 = 0;
			Global_36827[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x429D45A6C6520026(sParam4))
			{
				Global_36827[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36827[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36827[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36827[iVar0 /*32*/].f_12 = 0;
				Global_36827[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36827[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_28()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (iLocal_87 == 0)
		{
			unk_0xD427B2DF0DC98BBA("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

bool func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_1048, iParam0);
}

float func_30(var uParam0)
{
	if (func_33(uParam0))
	{
		if (func_32(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_31(unk_0x05EFB6A616B6FADE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_31(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0xFD34717937104F1C());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		iVar2 = unk_0xFFCC7EBF88BDEE54();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0xFD34717937104F1C()) / 1000f);
}

bool func_32(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 2);
}

bool func_33(var uParam0)
{
	return unk_0x05EFB6A616B6FADE(*uParam0, 1);
}

void func_34()
{
	float fVar0;
	
	fVar0 = 1f;
	func_35(&fVar0);
	unk_0x7AF4A31FB51D0A4D(iLocal_35);
	unk_0x0A74F1E9CF777638(4);
	unk_0xF997724AC8A71261(1);
	unk_0xFD7F9CA801A079A5(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x7AF4A31FB51D0A4D(unk_0x351670D4BE8B10E6());
}

void func_35(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xA0B98358F89CB4ED(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_36()
{
	Global_25519[iLocal_43 /*11*/].f_7 = 0;
	Global_25519[iLocal_43 /*11*/] = unk_0x857E93ABA46E1FD8();
	fLocal_30 = unk_0x7FF868C2D4D46872();
	if (unk_0x2F8EAF18929E1E59(&cLocal_62))
	{
		unk_0x5AD7D03C214BDA88(&cLocal_62);
	}
	if (((func_41("TV_HLP1") || func_41("TV_HLP2")) || func_41("TV_HLP5")) || func_41("TV_HLP6"))
	{
		unk_0x135C61E339DABBAC(1);
	}
	func_42(&iLocal_42);
	unk_0x15049F016446258E(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_51();
}

int func_37(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_38(unk_0xD4E735F4B6A956AC()) };
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

Vector3 func_38(int iParam0)
{
	return unk_0xE2BBD32891C18569(unk_0xEE978C39384D834F(iParam0), 0);
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/])
	{
		unk_0x2AD48F3CEBA882E9(Global_51923[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x93180BE33E7149EF(Global_51923[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

char* func_40(int iParam0)
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

bool func_41(char* sParam0)
{
	unk_0x42FEBE6569FBB03A(sParam0);
	return unk_0x3D94488A86ABB03F(0);
}

void func_42(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_26(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/])
		{
			Global_36827[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_43()
{
	if (func_30(&uLocal_26) < 1f)
	{
		func_42(&iLocal_42);
		return 0;
	}
	if ((!unk_0xA60C975CBAB69F34(unk_0xA19140A5C42D8715(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x5393F5210E66E1B6(unk_0xA19140A5C42D8715(), Local_31, 90f)) || unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (unk_0xDA3A4E46D189F555(iLocal_37) != unk_0xDA3A4E46D189F555(unk_0xA19140A5C42D8715()))
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (func_29(8, -1))
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (unk_0x5D7DFE2058701942(unk_0xA19140A5C42D8715(), 0))
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (Global_90255)
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (Global_25519[iLocal_43 /*11*/].f_8)
	{
		func_42(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1)
	{
		func_27(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_25(iLocal_42, 1))
	{
		func_42(&iLocal_42);
		func_54(&uLocal_26);
		Global_25519[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0xF44A747F75103BCF("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0xE11F00B4AC919F45(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_44(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_44(int iParam0, int iParam1, int iParam2)
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
		func_50((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106070.f_10166[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106070.f_10166[iParam0 /*12*/].f_6 == 11 || Global_106070.f_10166[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106070.f_10166[iParam0 /*12*/].f_5 = 1;
		Global_106070.f_10166[iParam0 /*12*/].f_10 = iParam1;
		Global_106070.f_10166[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xCEF3BD89444715A5(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_45();
	}
}

void func_45()
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
	Global_105806 = 0;
	Global_105807 = 0;
	Global_105808 = 0;
	Global_105809 = 0;
	Global_105810 = 0;
	Global_105811 = 0;
	Global_105812 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106070.f_10166.f_3853;
	Global_106070.f_10166.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106070.f_10166[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106070.f_10166[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_105806++;
					fVar1 = (fVar1 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_105807++;
					fVar2 = (fVar2 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_105808++;
					fVar3 = (fVar3 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_105809++;
					fVar4 = (fVar4 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_105810++;
					fVar5 = (fVar5 + (Global_106070.f_10166[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_105811++;
					fVar6 = (fVar6 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_105812++;
					fVar7 = (fVar7 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_105789 > 0)
	{
		if (Global_105806 == Global_105789)
		{
			fVar1 = 55f;
		}
	}
	if (Global_105790 > 0)
	{
		if (Global_105807 == Global_105790)
		{
			fVar2 = 10f;
		}
	}
	if (Global_105791 > 0)
	{
		if (Global_105808 == Global_105791)
		{
			fVar3 = 0f;
		}
	}
	if (Global_105792 > 0)
	{
		if (Global_105809 == Global_105792)
		{
			fVar4 = 10f;
		}
	}
	if (Global_105793 > 0)
	{
		if (((Global_105810 == Global_105793 || (Global_105793 * 10 / Global_105810) < 41) || Global_105810 > Global_105796) || Global_105810 == Global_105796)
		{
			if (!unk_0x05EFB6A616B6FADE(Global_106070.f_10166.f_3856, 14))
			{
				if (Global_105810 == Global_105793)
				{
					unk_0xCEF3BD89444715A5(joaat("num_rndevents_completed"), Global_105793, 0);
					unk_0x2BCFB39E86340DAA(&(Global_106070.f_10166.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_105794 > 0)
	{
		if (Global_105811 == Global_105794)
		{
			fVar6 = 15f;
		}
	}
	if (Global_105795 > 0)
	{
		if (Global_105812 == Global_105795)
		{
			fVar7 = 5f;
		}
	}
	Global_106070.f_10166.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_105810 > Global_105796 || Global_105810 == Global_105796)
	{
		iVar9 = Global_105796;
	}
	else
	{
		iVar9 = Global_105810;
	}
	unk_0x93180BE33E7149EF(joaat("num_missions_completed"), Global_105806, 1);
	unk_0x93180BE33E7149EF(joaat("num_missions_available"), Global_105789, 1);
	unk_0x93180BE33E7149EF(joaat("num_minigames_completed"), Global_105807, 1);
	unk_0x93180BE33E7149EF(joaat("num_minigames_available"), Global_105790, 1);
	unk_0x93180BE33E7149EF(joaat("num_oddjobs_completed"), Global_105808, 1);
	unk_0x93180BE33E7149EF(joaat("num_oddjobs_available"), Global_105791, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndpeople_completed"), Global_105809, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndpeople_available"), Global_105792, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x93180BE33E7149EF(joaat("num_rndevents_available"), Global_105796, 1);
	unk_0x93180BE33E7149EF(joaat("num_misc_completed"), (Global_105812 + Global_105811), 1);
	unk_0x93180BE33E7149EF(joaat("num_misc_available"), (Global_105795 + Global_105794), 1);
	Global_105813 = (Global_105806 * 100 / Global_105789);
	Global_105815 = ((Global_105808 + Global_105807) * 100 / (Global_105791 + Global_105790));
	Global_105814 = ((Global_105809 + iVar9) * 100 / (Global_105792 + Global_105796));
	Global_105816 = ((Global_105811 + Global_105812) * 100 / (Global_105794 + Global_105795));
	unk_0x0D3D00C75484323C(joaat("total_progress_made"), Global_106070.f_10166.f_3853, 1);
	unk_0x93180BE33E7149EF(joaat("percent_story_missions"), Global_105813, 1);
	unk_0x93180BE33E7149EF(joaat("percent_ambient_missions"), Global_105814, 1);
	unk_0x93180BE33E7149EF(joaat("percent_oddjobs"), Global_105815, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_106070.f_10166.f_3853))
	{
		func_49(13, unk_0xF34EE736CF047844(Global_106070.f_10166.f_3853));
	}
	if (!unk_0xC253B4B0BD2DE4DD())
	{
		if (!Global_71205)
		{
			if (func_48() == 2 == 0 && !unk_0x4C9BACA8D249CB13())
			{
				if (unk_0x4F3E20635369D110())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_46();
				}
			}
		}
	}
}

int func_46()
{
	if (func_47(0))
	{
		return 0;
	}
	if (Global_93271.f_8)
	{
		if (Global_93271.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93271.f_10 > 1)
	{
		return 0;
	}
	Global_93271.f_10++;
	return 1;
}

bool func_47(bool bParam0)
{
	if (!bParam0 && unk_0x8B1574454E8C2421(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x05EFB6A616B6FADE(Global_71453, 0);
}

int func_48()
{
	return Global_25459;
}

int func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x710B605F9A596359(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1BADC756CBF95E97(iParam0, iParam1);
	}
	return 0;
}

int func_50(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar17;
	var uVar18;
	var uVar19;
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xF84B918DCDA549C0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12FA763CEA4960B5((iParam0 - 0)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xF84B918DCDA549C0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12FA763CEA4960B5((iParam0 - 192)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xF84B918DCDA549C0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12FA763CEA4960B5((iParam0 - 513)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xF84B918DCDA549C0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12FA763CEA4960B5((iParam0 - 705)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x7D93C2914375D70B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12FA763CEA4960B5((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x7D93C2914375D70B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12FA763CEA4960B5((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD7C999E88C211597((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12FA763CEA4960B5((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD7C999E88C211597((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12FA763CEA4960B5((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD7C999E88C211597((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12FA763CEA4960B5((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xD7C999E88C211597((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12FA763CEA4960B5((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD7C999E88C211597((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12FA763CEA4960B5((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xD7C999E88C211597((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12FA763CEA4960B5((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xD7C999E88C211597((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12FA763CEA4960B5((iParam0 - 15369)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xD7C999E88C211597((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12FA763CEA4960B5((iParam0 - 15562)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0xD7C999E88C211597((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12FA763CEA4960B5((iParam0 - 15946)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0xD7C999E88C211597((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12FA763CEA4960B5((iParam0 - 18098)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0xD7C999E88C211597((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12FA763CEA4960B5((iParam0 - 22066)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0xD7C999E88C211597((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12FA763CEA4960B5((iParam0 - 24962)) * 64);
		iVar0 = unk_0x6582D084521A871B(uVar19, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_51()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0xA41DC7627220D3D5("tvscreen"))
	{
		unk_0x9625FCE863F284BD("tvscreen");
		iLocal_35 = -1;
		unk_0x7AF4A31FB51D0A4D(unk_0x351670D4BE8B10E6());
	}
}

void func_52()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_53();
	}
	if (unk_0xA41DC7627220D3D5("tvscreen"))
	{
		unk_0x9625FCE863F284BD("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0xDC5D81351D6A4DDB(iLocal_37))
	{
		func_67();
	}
	iVar0 = unk_0x8F474E419F56E48D(iLocal_37);
	unk_0xA998025A612085C5("tvscreen", 0);
	unk_0xDD449E57001A6C13(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x60A2E576E6A5E399(iVar0))
		{
			if (!unk_0xDC5D81351D6A4DDB(iLocal_37))
			{
				func_67();
			}
			if (!unk_0x1E99F8A10D565A13(iLocal_37))
			{
				func_67();
			}
			if (!unk_0xA41DC7627220D3D5("tvscreen"))
			{
				unk_0xA998025A612085C5("tvscreen", 0);
			}
			if (!unk_0x60A2E576E6A5E399(iVar0))
			{
				unk_0xDD449E57001A6C13(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0x88A337F7A8A721B3("tvscreen");
	func_3();
}

void func_53()
{
	if (unk_0xDC5D81351D6A4DDB(iLocal_37))
	{
		if (unk_0x8F474E419F56E48D(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0xDAD26B7BC6DCE4C1(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0x92DDCF53AA47A63D(iLocal_37, uLocal_34);
	unk_0xB29E08C7AB729BAD(iLocal_37, 1);
	unk_0x7C73A424F1117528(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0xDAD26B7BC6DCE4C1(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0x92DDCF53AA47A63D(iLocal_39, uLocal_34);
	unk_0xB29E08C7AB729BAD(iLocal_39, 1);
	unk_0x7C73A424F1117528(iLocal_39, 0, 0);
}

void func_54(var uParam0)
{
	func_55(uParam0, 0f);
}

void func_55(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_31(unk_0x05EFB6A616B6FADE(*uParam0, 4)) - fParam1);
	unk_0x2BCFB39E86340DAA(uParam0, 1);
	unk_0xFA57C719261AA55D(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_56()
{
}

int func_57(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_330[iParam0 /*6*/];
}

void func_58()
{
	Local_31 = { unk_0xE2BBD32891C18569(iLocal_37, 1) };
	uLocal_34 = unk_0x552C823E1D2A019C(iLocal_37);
	func_60();
	if (unk_0x8F474E419F56E48D(iLocal_37) == joaat("prop_tv_03"))
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
	else if (unk_0x8F474E419F56E48D(iLocal_37) == joaat("prop_trev_tv_01"))
	{
		if (unk_0x2A488C176D52CCA5(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_43 = 2;
			Local_79 = { 1978.23f, 3819.65f, 34.2724f };
			Local_82 = { 0f, 0f, -105.15f };
			Local_88 = { 1978.33f, 3819.717f, 32.4501f };
			func_59();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x8F474E419F56E48D(iLocal_37) == joaat("prop_tv_flat_01"))
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
	else if (unk_0x8F474E419F56E48D(iLocal_37) == joaat("prop_tv_flat_02"))
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
	else if (unk_0x8F474E419F56E48D(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x8F474E419F56E48D(iLocal_37) == joaat("v_ilev_mm_scre_off"))
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
	else if (unk_0x8F474E419F56E48D(iLocal_37) == joaat("des_tvsmash_start"))
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

void func_59()
{
	iLocal_38 = unk_0xDAD26B7BC6DCE4C1(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0x92DDCF53AA47A63D(iLocal_38, uLocal_34);
	unk_0x7C73A424F1117528(iLocal_38, 1, 0);
	unk_0xB29E08C7AB729BAD(iLocal_38, 1);
}

void func_60()
{
	unk_0x64B5792B3A187831(0, func_40(1), 0);
	if (func_57(22))
	{
		unk_0x64B5792B3A187831(1, func_40(12), 0);
	}
	else
	{
		unk_0x64B5792B3A187831(1, func_40(2), 0);
	}
}

void func_61()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25519[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0xDC5D81351D6A4DDB(iLocal_40))
			{
				unk_0x33CF95E95A476FB9(iLocal_40, 0);
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_37))
			{
				unk_0x33CF95E95A476FB9(iLocal_37, 0);
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_39))
			{
				unk_0x33CF95E95A476FB9(iLocal_39, 0);
			}
			if (unk_0xDC5D81351D6A4DDB(iLocal_38))
			{
				unk_0x33CF95E95A476FB9(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0xDC5D81351D6A4DDB(iLocal_40))
		{
			unk_0x33CF95E95A476FB9(iLocal_40, 1);
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_37))
		{
			unk_0x33CF95E95A476FB9(iLocal_37, 1);
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_39))
		{
			unk_0x33CF95E95A476FB9(iLocal_39, 1);
		}
		if (unk_0xDC5D81351D6A4DDB(iLocal_38))
		{
			unk_0x33CF95E95A476FB9(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_62(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_63(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25519[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (unk_0x47C01C0E6F4C1D06())
	{
		if (unk_0x9E14E7823B1059CE() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	if (Global_90249 != -1)
	{
		return unk_0x05EFB6A616B6FADE(Global_84115[Global_90249 /*34*/].f_15, 20);
	}
	return 0;
}

void func_66()
{
}

void func_67()
{
	if (iLocal_43 == -1)
	{
		unk_0x8F1A9FE6D91AAFEB();
	}
	func_42(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25519[iLocal_43 /*11*/].f_6 = 0;
		Global_25519[iLocal_43 /*11*/].f_7 = 0;
		Global_25519[iLocal_43 /*11*/].f_8 = 0;
		Global_25519[iLocal_43 /*11*/].f_4 = 0;
		Global_25519[iLocal_43 /*11*/].f_5 = 0;
		Global_25519[iLocal_43 /*11*/].f_2 = 0;
		Global_25519[iLocal_43 /*11*/] = -1;
		Global_25519[iLocal_43 /*11*/].f_1 = 0;
		Global_25519[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_41("TV_HLP1") || func_41("TV_HLP5")) || func_41("TV_HLP6"))
	{
		unk_0x135C61E339DABBAC(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_68();
	if (unk_0x2F8EAF18929E1E59(&cLocal_62))
	{
		unk_0x5AD7D03C214BDA88(&cLocal_62);
	}
	unk_0xF474CA27470E4A89();
	func_2();
	unk_0x8F1A9FE6D91AAFEB();
}

void func_68()
{
	func_51();
	if (unk_0xDC5D81351D6A4DDB(iLocal_37))
	{
		if (unk_0x8F474E419F56E48D(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0xC0AC848E56940C34(&iLocal_37);
			unk_0xA5DE74AE39867B03(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_39))
	{
		unk_0xC0AC848E56940C34(&iLocal_39);
		unk_0xA5DE74AE39867B03(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0xDC5D81351D6A4DDB(iLocal_38))
	{
		unk_0xC0AC848E56940C34(&iLocal_38);
		unk_0xA5DE74AE39867B03(joaat("prop_tt_screenstatic"));
	}
}

