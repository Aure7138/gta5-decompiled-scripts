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
	if (unk_0x524AF15206846700(2))
	{
		func_66();
	}
	if (unk_0xD2CFFE76B625AE55(uScriptParam_0))
	{
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_65();
		if (unk_0xD2CFFE76B625AE55(iScriptParam_0))
		{
			if ((iLocal_43 != -1 && (func_64() && !func_63())) && !func_62(iLocal_43))
			{
				func_66();
			}
			if ((unk_0x5D293E404CA20AA5() && unk_0x472A7A9D6102404C() != 3) && unk_0x00798D768A589710() == 3)
			{
				func_66();
			}
			if (func_61(13) || func_61(14))
			{
				func_66();
			}
			if (unk_0x6299D442E6E3AE5F(iScriptParam_0))
			{
				func_66();
			}
			if (unk_0x179C5C4A19D3D535(iScriptParam_0))
			{
				if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
				{
					func_60();
					if (unk_0x4C3235E6E203703D(iScriptParam_0) < 950)
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
									uLocal_41 = unk_0xE933B0ADEB3E80F7(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x7078A05B99628DFC(uLocal_41))
									{
										unk_0x323370FC49529A13(uLocal_41, 9);
									}
									unk_0x7C3AA2D27E16E2AD();
								}
							}
							if (iLocal_43 == -1)
							{
								func_66();
							}
							else
							{
								func_55();
								unk_0x12A5CF71FED4EBA1("SAFEHOUSE_MICHAEL_SIT_SOFA", 0);
								unk_0x229773841C1D2E13(0);
								Global_25180[iLocal_43 /*11*/].f_2 = 0;
								Global_25180[iLocal_43 /*11*/].f_6 = 1;
								Global_25180[iLocal_43 /*11*/] = unk_0x3A5708FEE1B560A9(0, 2);
								Global_25180[iLocal_43 /*11*/].f_1 = 0;
								Global_25180[iLocal_43 /*11*/].f_4 = 0;
								Global_25180[iLocal_43 /*11*/].f_7 = 0;
								Global_25180[iLocal_43 /*11*/].f_8 = 0;
								Global_25180[iLocal_43 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_53(&uLocal_26);
								func_51();
								func_50();
								unk_0x4EDE34FBADD967A6(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
							{
								unk_0x4EDE34FBADD967A6(0);
							}
							else if (unk_0xB6B19B427CED946A(iLocal_37) && unk_0xB2D89B2FA7AD008C(iLocal_37, 1119092736))
							{
								if (func_42() || Global_25180[iLocal_43 /*11*/].f_5)
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
									unk_0x5BD150B52CE8D356(1);
								}
							}
							if (unk_0xD2CFFE76B625AE55(iLocal_37))
							{
								if (!unk_0x55D0FF0532D6A513(iLocal_37))
								{
									unk_0xFBE386F7181B95E8(iLocal_37, 1, 0);
								}
							}
							if (unk_0xD2CFFE76B625AE55(iLocal_39))
							{
								if (!unk_0x55D0FF0532D6A513(iLocal_39))
								{
									unk_0xFBE386F7181B95E8(iLocal_39, 1, 0);
								}
							}
							if (unk_0xD2CFFE76B625AE55(iLocal_38))
							{
								if (unk_0x55D0FF0532D6A513(iLocal_38))
								{
									unk_0xFBE386F7181B95E8(iLocal_38, 0, 0);
								}
							}
							if (!unk_0xC1C5B83BB6719C6C(&cLocal_46, "NULL"))
							{
								unk_0xE2AA080D37C384D4(&cLocal_46, 0);
							}
							unk_0xAFAF44361033A504(0);
							unk_0x4EDE34FBADD967A6(0);
							if (unk_0xD2CFFE76B625AE55(iLocal_40))
							{
								unk_0x3AE4B2D46F7C5554(iLocal_40);
							}
							if (!func_62(iLocal_43))
							{
								if ((Global_25180[iLocal_43 /*11*/] == 3 || Global_25180[iLocal_43 /*11*/] == 2) || Global_25180[iLocal_43 /*11*/] == -1)
								{
									Global_25180[iLocal_43 /*11*/] = unk_0x3A5708FEE1B560A9(0, 2);
								}
								unk_0xC6D30FF126156577(Global_25180[iLocal_43 /*11*/]);
								unk_0x8A1246D557AAB0BA(fLocal_30);
							}
							else
							{
								iLocal_44 = Global_25180[iLocal_43 /*11*/];
								iLocal_45 = Global_25180[iLocal_43 /*11*/].f_1;
								unk_0x5F9227A5260EEA03(iLocal_44, func_39(iLocal_45), Global_25180[iLocal_43 /*11*/].f_9);
								unk_0xC6D30FF126156577(iLocal_44);
								if (Global_25180[iLocal_43 /*11*/].f_7)
								{
									Global_25180[iLocal_43 /*11*/].f_5 = 0;
									Global_25180[iLocal_43 /*11*/].f_7 = 0;
								}
							}
							Global_25180[iLocal_43 /*11*/].f_2 = 1;
							func_38(133, 1);
							func_38(131, 1);
							func_38(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_25180[iLocal_43 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_25180[iLocal_43 /*11*/].f_7 && func_62(iLocal_43))
							{
								Global_25180[iLocal_43 /*11*/].f_7 = 0;
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
								if (unk_0x07F023DDE965A184() == -1)
								{
									unk_0xC6D30FF126156577(Global_25180[iLocal_43 /*11*/]);
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
							if (Global_25180[iLocal_43 /*11*/].f_4)
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
							Global_25180[iLocal_43 /*11*/].f_5 = 0;
							Global_25180[iLocal_43 /*11*/].f_4 = 0;
							Global_25180[iLocal_43 /*11*/].f_1 = 0;
							Global_25180[iLocal_43 /*11*/].f_2 = 0;
							Global_25180[iLocal_43 /*11*/].f_7 = 0;
							Global_25180[iLocal_43 /*11*/].f_8 = 0;
							Global_25180[iLocal_43 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_66();
			unk_0x7C3AA2D27E16E2AD();
		}
	}
	func_66();
	unk_0x7C3AA2D27E16E2AD();
}

void func_1()
{
	if (iLocal_43 != -1)
	{
		Global_25180[iLocal_43 /*11*/] = unk_0x07F023DDE965A184();
	}
	fLocal_30 = unk_0xF5575EF1F2EAD727();
	unk_0xC6D30FF126156577(-1);
	func_4();
	if (unk_0xD32535FA4397160F(joaat("family5")) == 0)
	{
		if (!unk_0xC1C5B83BB6719C6C(&cLocal_46, "NULL"))
		{
			unk_0xE2AA080D37C384D4(&cLocal_46, 1);
		}
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x5BD150B52CE8D356(1);
	}
	func_3();
	func_50();
	if (unk_0xD2CFFE76B625AE55(iLocal_38))
	{
		if (!unk_0x55D0FF0532D6A513(iLocal_38))
		{
			unk_0xFBE386F7181B95E8(iLocal_38, 1, 0);
		}
	}
	unk_0x8FAE35A1A7299F75(0);
	func_2();
}

void func_2()
{
	if (unk_0xDFCB321F1D24137F())
	{
		if (iLocal_87 == 1)
		{
			unk_0xAF8EDF24847B0EC9();
			iLocal_87 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_35 == -1)
	{
		unk_0x6989B1F0868251F4(iLocal_35);
		if (unk_0xD2CFFE76B625AE55(iLocal_37))
		{
			if (unk_0x946C63BD9EF05437(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x946C63BD9EF05437(iLocal_37) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0xFBE386F7181B95E8(iLocal_37, 0, 0);
				if (unk_0x946C63BD9EF05437(iLocal_37) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x962859A29A7D805C(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x962859A29A7D805C(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0xD2CFFE76B625AE55(iLocal_39))
	{
		unk_0xFBE386F7181B95E8(iLocal_39, 0, 0);
	}
}

void func_4()
{
	if (iLocal_85)
	{
		unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
		if (unk_0xF92D82BAF297B579(uLocal_78))
		{
			unk_0xA931FF68636DF31C(uLocal_78, 0);
		}
		unk_0x1D1A369233055AEC(uLocal_78, 0);
		unk_0x0B28AEB595CB09AF(0);
		if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
		{
			unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), 0);
			unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
			unk_0x398367D1AEB7ED62(unk_0x27D769C59BC9D030(), Local_31, 1, 0, 2);
			if (!unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()))
			{
				if (bLocal_36 == 1)
				{
					bLocal_36 = false;
					unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
				}
			}
			unk_0xFBE386F7181B95E8(unk_0x27D769C59BC9D030(), 1, 0);
		}
		if (!unk_0xC1C5B83BB6719C6C(&cLocal_62, "NULL"))
		{
			if (unk_0x159730DB57D995D0(&cLocal_62))
			{
				unk_0x354EC40268FD2071(&cLocal_62);
			}
		}
		if (unk_0xD2CFFE76B625AE55(iLocal_39))
		{
			unk_0xFBE386F7181B95E8(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0);
		unk_0x8FAE35A1A7299F75(0);
		iLocal_85 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x0952A7BA90103950(unk_0x4D29100D094E5511());
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 1);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 1);
		func_14(1);
		unk_0xD14C6D196E70C6B0();
		unk_0x7CC7CFD7BFFAAC4C();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x0EFEEF8E6B0B4E34())
			{
				unk_0x94DA6AACA7F07289(0);
			}
			if (!func_13())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_14(0);
		unk_0xFF2A2F3774F8F7B6();
		Global_55755 = 0;
		if (bParam1)
		{
			unk_0x2E6328B1B95241F5();
		}
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 0);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x0E063DDE8855EC52())
		{
			if (((!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_10(unk_0x4D29100D094E5511())) && !func_7(unk_0x4D29100D094E5511(), 0)) && !func_6())
			{
				unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
			}
		}
		else if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_10(unk_0x4D29100D094E5511()))
		{
			unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
		}
		Global_69487 = 0;
	}
}

bool func_6()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
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
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1312747;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			return 1;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0xE9F84F88F70445CA() != iParam0 && uParam2)
		{
			unk_0x4959DFBF16606CE5(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 13);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 13);
	}
}

int func_15()
{
	if (!func_62(iLocal_43))
	{
		if (((((((func_29(&uLocal_26) >= 1f && unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Local_88, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x94F32809C13F5225(iLocal_37) == unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030())) && !func_28(8, -1)) && !unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0)) && unk_0x586C5B4EFB499437(unk_0x27D769C59BC9D030(), Local_31, 90f)) && !unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) && !unk_0x5D293E404CA20AA5())
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
				Global_25180[iLocal_43 /*11*/].f_7 = 0;
				if (unk_0x32BC205C9A5813D0("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0x954BCDB8FDB0AC0F(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_40("TV_HLP5"))
			{
				unk_0x5BD150B52CE8D356(1);
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
		unk_0xDF3F6D6CDD523546(2, 222);
		if (unk_0x117D586920E8F7BA(2, 222))
		{
			func_41(&iLocal_42);
			func_26(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_23();
		}
	}
	else
	{
		unk_0xCFF471245AFEEDCE(2, 200, 1);
		if (unk_0x55D0FF0532D6A513(unk_0x27D769C59BC9D030()))
		{
			unk_0xFBE386F7181B95E8(unk_0x27D769C59BC9D030(), 0, 0);
		}
		if (bLocal_36)
		{
			if (unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()))
			{
				unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
			}
		}
		unk_0xC5EB6DE147B611C7();
		unk_0x777A55AADC80DE46(unk_0x27D769C59BC9D030());
		func_21(1, 1);
		unk_0xDF3F6D6CDD523546(2, 222);
		func_17();
		if (unk_0x117D586920E8F7BA(2, 222) || (unk_0xE1834019C3CC3C33(2) && unk_0x7E5B5D3856851E03(2, 200)))
		{
			func_41(&iLocal_42);
			func_4();
		}
	}
}

void func_17()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_20(0))
		{
			func_18(0);
		}
		unk_0x26545538B51562AD(&Global_2284, 2);
	}
}

void func_18(int iParam0)
{
	if (Global_14571)
	{
		func_19(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x26545538B51562AD(&Global_2284, 16);
	}
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		unk_0x94DA6AACA7F07289(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 30);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 30);
	}
	if (!func_13())
	{
		Global_14413.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_20(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x38AAAA167C55B731(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xF10089C8CCEFDB7A(Global_14350);
		}
		else
		{
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
}

int func_20(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 14))
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
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
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
				if (unk_0x32BC205C9A5813D0("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					unk_0x954BCDB8FDB0AC0F(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0x07F023DDE965A184() == 0)
				{
					unk_0xC6D30FF126156577(1);
				}
				else
				{
					unk_0xC6D30FF126156577(0);
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
		iVar1 = (unk_0x32BCD40DD9A8C4D3(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0xF5575EF1F2EAD727();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0x8A1246D557AAB0BA(fVar2);
				iLocal_24 = unk_0xA0F74982C6AAA9D4();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0xF5575EF1F2EAD727();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0x8A1246D557AAB0BA(fVar2);
				iLocal_24 = unk_0xA0F74982C6AAA9D4();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0x32BC205C9A5813D0("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x954BCDB8FDB0AC0F(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0xA0F74982C6AAA9D4() > iLocal_24 + 24)
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
	iVar1 = (unk_0x32BCD40DD9A8C4D3(2, 218) - 127);
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
		uLocal_78 = unk_0x4B49D13510261EFF("DEFAULT_SCRIPTED_CAMERA", Local_79, Local_82, fVar0, 0, 2);
		unk_0x176DD5FEFDE13359(uLocal_78, 100f);
		unk_0xA931FF68636DF31C(uLocal_78, 1);
		unk_0x04E786541E35ECB1(1, 0, 3000, 1, 0, 0);
		if (unk_0xD2CFFE76B625AE55(iLocal_39))
		{
			unk_0xFBE386F7181B95E8(iLocal_39, 0, 0);
		}
		if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
		{
			unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), 1);
			unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
			if (unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()))
			{
				unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
				bLocal_36 = true;
			}
			unk_0x398367D1AEB7ED62(unk_0x27D769C59BC9D030(), Local_31, -1, 0, 2);
			unk_0xFBE386F7181B95E8(unk_0x27D769C59BC9D030(), 0, 0);
		}
		if (!unk_0xC1C5B83BB6719C6C(&cLocal_62, "NULL"))
		{
			if (!unk_0x159730DB57D995D0(&cLocal_62))
			{
				unk_0xF8B012FD1C255840(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0);
		unk_0x8FAE35A1A7299F75(1);
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
	if (!unk_0x2DB75A8F096AB1F1(unk_0xB927AFB90873B8C1()))
	{
		return 0;
	}
	if (func_20(0))
	{
		return 0;
	}
	if (unk_0x67FB99B1361E144E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36411[iVar0 /*32*/] == 1 && Global_36411[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36411[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36411[iVar0 /*32*/].f_5 = 1;
			Global_36411[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36411[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36411[iVar0 /*32*/].f_7)
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
		if (Global_36411[iVar0 /*32*/].f_1 == iParam0)
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
	
	if (unk_0xD32535FA4397160F(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x5D293E404CA20AA5())
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
		if (!Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/] = 1;
			Global_36411[iVar0 /*32*/].f_1 = Global_36612;
			Global_36612++;
			Global_36411[iVar0 /*32*/].f_4 = 0;
			Global_36411[iVar0 /*32*/].f_29 = 0;
			Global_36411[iVar0 /*32*/].f_5 = 0;
			Global_36411[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36411[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36411[iVar0 /*32*/].f_6 = iParam3;
			Global_36411[iVar0 /*32*/].f_31 = unk_0xF42B3EF31F918DB2();
			Global_36411[iVar0 /*32*/].f_7 = 0;
			Global_36411[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x75CB9E30BA492FF0(sParam4))
			{
				Global_36411[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36411[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36411[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36411[iVar0 /*32*/].f_12 = 0;
				Global_36411[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36411[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_27()
{
	if (unk_0xDFCB321F1D24137F())
	{
		if (iLocal_87 == 0)
		{
			unk_0x474B73F09C08754C("TV_Controls");
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
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
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
			return (func_30(unk_0xF426A5DE932B3BEE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_30(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0xA0F74982C6AAA9D4()) / 1000f);
	}
	if (unk_0x0E063DDE8855EC52())
	{
		iVar0 = unk_0x20D394965B47B01A();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xA0F74982C6AAA9D4()) / 1000f);
}

bool func_31(var uParam0)
{
	return unk_0xF426A5DE932B3BEE(*uParam0, 2);
}

bool func_32(var uParam0)
{
	return unk_0xF426A5DE932B3BEE(*uParam0, 1);
}

void func_33()
{
	float fVar0;
	
	fVar0 = 1f;
	func_34(&fVar0);
	unk_0x6989B1F0868251F4(iLocal_35);
	unk_0x5F817444B4379247(4);
	unk_0xD19C316FC489A9F4(1);
	unk_0xF922AAE342AD6558(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x6989B1F0868251F4(unk_0xBB7A8E53D996256C());
}

void func_34(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xFE8EA5C3B2ABAB53(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_35()
{
	Global_25180[iLocal_43 /*11*/].f_7 = 0;
	Global_25180[iLocal_43 /*11*/] = unk_0x07F023DDE965A184();
	fLocal_30 = unk_0xF5575EF1F2EAD727();
	if (unk_0x159730DB57D995D0(&cLocal_62))
	{
		unk_0x354EC40268FD2071(&cLocal_62);
	}
	if (((func_40("TV_HLP1") || func_40("TV_HLP2")) || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x5BD150B52CE8D356(1);
	}
	func_41(&iLocal_42);
	unk_0xC6D30FF126156577(-1);
	unk_0x4EDE34FBADD967A6(0);
	func_3();
	func_50();
}

int func_36(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_37(unk_0x4D29100D094E5511()) };
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
	return unk_0xA8CFDE65C45F813B(unk_0xC834A7C58DEB59B4(iParam0), 0);
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x0E063DDE8855EC52())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		unk_0xD0D748C6C14C0E92(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE2A8B026FA4DDFFF(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0x66F753896FC4EEC3(sParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
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
		if (Global_36411[iVar0 /*32*/])
		{
			Global_36411[iVar0 /*32*/].f_7 = 1;
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
	if ((!unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Local_88, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x586C5B4EFB499437(unk_0x27D769C59BC9D030(), Local_31, 90f)) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0x94F32809C13F5225(iLocal_37) != unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030()))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (func_28(8, -1))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_88539)
	{
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_25180[iLocal_43 /*11*/].f_8)
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
		Global_25180[iLocal_43 /*11*/].f_7 = 1;
		if (unk_0x32BC205C9A5813D0("SAFEHOUSE_MICHAEL_SIT_SOFA", 0))
		{
			unk_0x954BCDB8FDB0AC0F(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
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
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101154.f_8884[iParam0 /*12*/].f_6 == 11 || Global_101154.f_8884[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101154.f_8884[iParam0 /*12*/].f_5 = 1;
		Global_101154.f_8884[iParam0 /*12*/].f_10 = iParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_100890 = 0;
	Global_100891 = 0;
	Global_100892 = 0;
	Global_100893 = 0;
	Global_100894 = 0;
	Global_100895 = 0;
	Global_100896 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101154.f_8884.f_3853;
	Global_101154.f_8884.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101154.f_8884[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101154.f_8884[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100890++;
					fVar1 = (fVar1 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100891++;
					fVar2 = (fVar2 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100892++;
					fVar3 = (fVar3 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100893++;
					fVar4 = (fVar4 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100894++;
					fVar5 = (fVar5 + (Global_101154.f_8884[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100895++;
					fVar6 = (fVar6 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100896++;
					fVar7 = (fVar7 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100873 > 0)
	{
		if (Global_100890 == Global_100873)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100874 > 0)
	{
		if (Global_100891 == Global_100874)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100875 > 0)
	{
		if (Global_100892 == Global_100875)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100876 > 0)
	{
		if (Global_100893 == Global_100876)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100877 > 0)
	{
		if (((Global_100894 == Global_100877 || (Global_100877 * 10 / Global_100894) < 41) || Global_100894 > Global_100880) || Global_100894 == Global_100880)
		{
			if (!unk_0xF426A5DE932B3BEE(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					unk_0x1C7E45166E04C12C(joaat("num_rndevents_completed"), Global_100877, 0);
					unk_0x26545538B51562AD(&(Global_101154.f_8884.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100878 > 0)
	{
		if (Global_100895 == Global_100878)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100879 > 0)
	{
		if (Global_100896 == Global_100879)
		{
			fVar7 = 5f;
		}
	}
	Global_101154.f_8884.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100894 > Global_100880 || Global_100894 == Global_100880)
	{
		iVar9 = Global_100880;
	}
	else
	{
		iVar9 = Global_100894;
	}
	unk_0xE2A8B026FA4DDFFF(joaat("num_missions_completed"), Global_100890, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_missions_available"), Global_100873, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_minigames_completed"), Global_100891, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_minigames_available"), Global_100874, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_oddjobs_completed"), Global_100892, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_oddjobs_available"), Global_100875, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndpeople_completed"), Global_100893, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndpeople_available"), Global_100876, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndevents_available"), Global_100880, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_misc_completed"), (Global_100896 + Global_100895), 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_misc_available"), (Global_100879 + Global_100878), 1);
	Global_100897 = (Global_100890 * 100 / Global_100873);
	Global_100899 = ((Global_100892 + Global_100891) * 100 / (Global_100875 + Global_100874));
	Global_100898 = ((Global_100893 + iVar9) * 100 / (Global_100876 + Global_100880));
	Global_100900 = ((Global_100895 + Global_100896) * 100 / (Global_100878 + Global_100879));
	unk_0x349899F07A0A435F(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_story_missions"), Global_100897, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_ambient_missions"), Global_100898, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101154.f_8884.f_3853))
	{
		func_48(13, unk_0xF34EE736CF047844(Global_101154.f_8884.f_3853));
	}
	if (!unk_0x1AB59BFCD46AAD2F())
	{
		if (!Global_69489)
		{
			if (func_47() == 2 == 0 && !unk_0x0E063DDE8855EC52())
			{
				if (unk_0x878E45E8C4AA7963())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
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
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return 0;
	}
	Global_91317.f_10++;
	return 1;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && unk_0xD32535FA4397160F(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_69737, 0);
}

int func_47()
{
	return Global_25120;
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
	iVar0 = unk_0x4ED42D8FD5CFED41(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x4BF394A19129A9AD(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x0093FE57B4BFD543((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC5B2C78271F9ACBC((iParam0 - 0)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x0093FE57B4BFD543((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC5B2C78271F9ACBC((iParam0 - 192)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x0093FE57B4BFD543((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC5B2C78271F9ACBC((iParam0 - 513)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x0093FE57B4BFD543((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC5B2C78271F9ACBC((iParam0 - 705)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x86AA01B00A711C0B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC5B2C78271F9ACBC((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x86AA01B00A711C0B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC5B2C78271F9ACBC((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD69CE51110B42B5E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC5B2C78271F9ACBC((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD69CE51110B42B5E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC5B2C78271F9ACBC((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD69CE51110B42B5E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC5B2C78271F9ACBC((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xD69CE51110B42B5E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC5B2C78271F9ACBC((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD69CE51110B42B5E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC5B2C78271F9ACBC((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_50()
{
	unk_0x4EDE34FBADD967A6(0);
	if (unk_0x8B2548A86532AA14("tvscreen"))
	{
		unk_0x508498A0BF4BE26A("tvscreen");
		iLocal_35 = -1;
		unk_0x6989B1F0868251F4(unk_0xBB7A8E53D996256C());
	}
}

void func_51()
{
	int iVar0;
	
	if (iLocal_43 == 4)
	{
		func_52();
	}
	if (unk_0x8B2548A86532AA14("tvscreen"))
	{
		unk_0x508498A0BF4BE26A("tvscreen");
	}
	unk_0x4EDE34FBADD967A6(0);
	if (!unk_0xD2CFFE76B625AE55(iLocal_37))
	{
		func_66();
	}
	iVar0 = unk_0x946C63BD9EF05437(iLocal_37);
	unk_0x2033498075071A0D("tvscreen", 0);
	unk_0xEC8E255B8B6DD682(iVar0);
	unk_0x4EDE34FBADD967A6(0);
	if (iLocal_43 != 4)
	{
		while (!unk_0x369E6667FA3FCD92(iVar0))
		{
			if (!unk_0xD2CFFE76B625AE55(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x179C5C4A19D3D535(iLocal_37))
			{
				func_66();
			}
			if (!unk_0x8B2548A86532AA14("tvscreen"))
			{
				unk_0x2033498075071A0D("tvscreen", 0);
			}
			if (!unk_0x369E6667FA3FCD92(iVar0))
			{
				unk_0xEC8E255B8B6DD682(iVar0);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	iLocal_35 = unk_0x61AE2E76850532C3("tvscreen");
	func_3();
}

void func_52()
{
	if (unk_0xD2CFFE76B625AE55(iLocal_37))
	{
		if (unk_0x946C63BD9EF05437(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = unk_0x8FC46BABCF818990(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0xFBDCF3D5834B58D8(iLocal_37, uLocal_34);
	unk_0xA8CA82EB31D1626F(iLocal_37, 1);
	unk_0xFBE386F7181B95E8(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = unk_0x8FC46BABCF818990(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0xFBDCF3D5834B58D8(iLocal_39, uLocal_34);
	unk_0xA8CA82EB31D1626F(iLocal_39, 1);
	unk_0xFBE386F7181B95E8(iLocal_39, 0, 0);
}

void func_53(var uParam0)
{
	func_54(uParam0, 0f);
}

void func_54(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_30(unk_0xF426A5DE932B3BEE(*uParam0, 4)) - fParam1);
	unk_0x26545538B51562AD(uParam0, 1);
	unk_0xF17F4B0641AB2DE1(uParam0, 2);
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
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_57()
{
	Local_31 = { unk_0xA8CFDE65C45F813B(iLocal_37, 1) };
	uLocal_34 = unk_0x4D6B971C8AEE130C(iLocal_37);
	func_59();
	if (unk_0x946C63BD9EF05437(iLocal_37) == joaat("prop_tv_03"))
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
	else if (unk_0x946C63BD9EF05437(iLocal_37) == joaat("prop_trev_tv_01"))
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
	else if (unk_0x946C63BD9EF05437(iLocal_37) == joaat("prop_tv_flat_01"))
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
	else if (unk_0x946C63BD9EF05437(iLocal_37) == joaat("prop_tv_flat_02"))
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
	else if (unk_0x946C63BD9EF05437(iLocal_37) == joaat("v_ilev_mm_screen2") || unk_0x946C63BD9EF05437(iLocal_37) == joaat("v_ilev_mm_scre_off"))
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
	else if (unk_0x946C63BD9EF05437(iLocal_37) == joaat("des_tvsmash_start"))
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
	iLocal_38 = unk_0x8FC46BABCF818990(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0xFBDCF3D5834B58D8(iLocal_38, uLocal_34);
	unk_0xFBE386F7181B95E8(iLocal_38, 1, 0);
	unk_0xA8CA82EB31D1626F(iLocal_38, 1);
}

void func_59()
{
	unk_0x5F9227A5260EEA03(0, func_39(1), 0);
	if (func_56(22))
	{
		unk_0x5F9227A5260EEA03(1, func_39(12), 0);
	}
	else
	{
		unk_0x5F9227A5260EEA03(1, func_39(2), 0);
	}
}

void func_60()
{
	if (iLocal_43 == -1)
	{
		return;
	}
	if (Global_25180[iLocal_43 /*11*/].f_10 == 0)
	{
		if (iLocal_86 == 1)
		{
			if (unk_0xD2CFFE76B625AE55(iLocal_40))
			{
				unk_0xDC994C828DF12354(iLocal_40, 0);
			}
			if (unk_0xD2CFFE76B625AE55(iLocal_37))
			{
				unk_0xDC994C828DF12354(iLocal_37, 0);
			}
			if (unk_0xD2CFFE76B625AE55(iLocal_39))
			{
				unk_0xDC994C828DF12354(iLocal_39, 0);
			}
			if (unk_0xD2CFFE76B625AE55(iLocal_38))
			{
				unk_0xDC994C828DF12354(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0)
	{
		if (unk_0xD2CFFE76B625AE55(iLocal_40))
		{
			unk_0xDC994C828DF12354(iLocal_40, 1);
		}
		if (unk_0xD2CFFE76B625AE55(iLocal_37))
		{
			unk_0xDC994C828DF12354(iLocal_37, 1);
		}
		if (unk_0xD2CFFE76B625AE55(iLocal_39))
		{
			unk_0xDC994C828DF12354(iLocal_39, 1);
		}
		if (unk_0xD2CFFE76B625AE55(iLocal_38))
		{
			unk_0xDC994C828DF12354(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

bool func_61(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_62(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25180[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0x0D8B62403640E4FC() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_64()
{
	if (Global_88533 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_82399[Global_88533 /*34*/].f_15, 20);
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
		unk_0x7C3AA2D27E16E2AD();
	}
	func_41(&iLocal_42);
	if (iLocal_43 != -1)
	{
		func_1();
		Global_25180[iLocal_43 /*11*/].f_6 = 0;
		Global_25180[iLocal_43 /*11*/].f_7 = 0;
		Global_25180[iLocal_43 /*11*/].f_8 = 0;
		Global_25180[iLocal_43 /*11*/].f_4 = 0;
		Global_25180[iLocal_43 /*11*/].f_5 = 0;
		Global_25180[iLocal_43 /*11*/].f_2 = 0;
		Global_25180[iLocal_43 /*11*/] = -1;
		Global_25180[iLocal_43 /*11*/].f_1 = 0;
		Global_25180[iLocal_43 /*11*/].f_10 = 0;
	}
	if ((func_40("TV_HLP1") || func_40("TV_HLP5")) || func_40("TV_HLP6"))
	{
		unk_0x5BD150B52CE8D356(1);
	}
	unk_0x4EDE34FBADD967A6(0);
	func_67();
	if (unk_0x159730DB57D995D0(&cLocal_62))
	{
		unk_0x354EC40268FD2071(&cLocal_62);
	}
	unk_0x06F834BFBDF5BAD3();
	func_2();
	unk_0x7C3AA2D27E16E2AD();
}

void func_67()
{
	func_50();
	if (unk_0xD2CFFE76B625AE55(iLocal_37))
	{
		if (unk_0x946C63BD9EF05437(iLocal_37) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x7C0FE14555841C1E(&iLocal_37);
			unk_0x0049DE0B34213B12(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0xD2CFFE76B625AE55(iLocal_39))
	{
		unk_0x7C0FE14555841C1E(&iLocal_39);
		unk_0x0049DE0B34213B12(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0xD2CFFE76B625AE55(iLocal_38))
	{
		unk_0x7C0FE14555841C1E(&iLocal_38);
		unk_0x0049DE0B34213B12(joaat("prop_tt_screenstatic"));
	}
}

