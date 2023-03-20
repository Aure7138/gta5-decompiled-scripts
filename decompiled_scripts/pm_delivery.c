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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int* iLocal_38 = NULL;
	var uLocal_39 = 3;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 1092616192;
	var uLocal_46 = 1101004800;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 3;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	bool bLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89[2] = { 0, 0 };
	int iLocal_92[2] = { 0, 0 };
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98[2] = { 0, 0 };
	int iLocal_101 = 0;
	char* sLocal_102 = NULL;
	char* sLocal_103 = NULL;
	char* sLocal_104 = NULL;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = -1;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 1000;
	var uLocal_115 = 1000;
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
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
	iLocal_19 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_84 = -1;
	sLocal_102 = "PMDL_OBJ";
	sLocal_103 = "PMDL_LOC";
	sLocal_104 = "PMDL_BCK";
	unk_0xC4301E5121A0ED73(true);
	if (unk_0xC968670BFACE42D9(3))
	{
		func_127(2);
		func_105();
	}
	iLocal_35 = func_103();
	while (true)
	{
		switch (iLocal_36)
		{
			case 0:
				if (!iLocal_75)
				{
					func_98();
				}
				else
				{
					func_97();
				}
				if (bLocal_74)
				{
					iLocal_76 = 1;
					iLocal_36 = 1;
				}
				break;
			
			case 1:
				if (!func_96())
				{
					switch (iLocal_37)
					{
						case 0:
							func_93();
							break;
						
						case 1:
							if (iLocal_35 == 5 || iLocal_35 == 6)
							{
								func_65();
							}
							else
							{
								func_64();
							}
							break;
						
						case 2:
							func_9();
							if (iLocal_35 < 3)
							{
								func_7();
							}
							else if (iLocal_35 > 6)
							{
								func_7();
								func_2();
							}
							break;
						
						case 3:
						case 4:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	func_127(2);
	func_105();
}

void func_2()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iLocal_95))
	{
		if (unk_0x4C241E39B23DF959(iLocal_95, false))
		{
			iVar0 = 200;
			iVar1 = (unk_0xEEF059FAD016D209(iLocal_95) - 800);
			if (unk_0x1DBD58820FA61D71(iLocal_95))
			{
				unk_0x6B76DC1F3AE6E6A3(iLocal_95, (unk_0xEEF059FAD016D209(iLocal_95) - 5));
			}
			if (iVar1 <= 0)
			{
				iLocal_37 = 4;
			}
			else if (iVar1 < 75)
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 6, 0, 1);
			}
			else
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 1, 0, 1);
			}
		}
		else
		{
			iLocal_37 = 4;
		}
	}
	else
	{
		iLocal_37 = 4;
	}
}

void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, 2, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0);
}

void func_4(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iVar0 == -1)
		{
			if (func_6(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328798.f_1 = 1;
		func_5(0, iVar0);
		Global_1328798.f_417[iVar0] = uParam0;
		Global_1328798.f_417.f_5[iVar0] = uParam1;
		StringCopy(&(Global_1328798.f_417.f_10[iVar0 /*16*/]), sParam2, 64);
		Global_1328798.f_417.f_80[iVar0] = uParam3;
		Global_1328798.f_417.f_75[iVar0] = uParam4;
		Global_1328798.f_417.f_90[iVar0] = iParam5;
		Global_1328798.f_417.f_95[iVar0 /*3*/] = fParam6;
		Global_1328798.f_417.f_95[iVar0 /*3*/].f_1 = fParam7;
		Global_1328798.f_417.f_108[iVar0] = iParam8;
		Global_1328798.f_417.f_113[iVar0] = uParam9;
		Global_1328798.f_417.f_132[iVar0] = iParam10;
		Global_1328798.f_417.f_137[iVar0] = iParam11;
		Global_1328798.f_417.f_142[iVar0] = iParam12;
		Global_1328798.f_417.f_147[iVar0] = iParam13;
		Global_1328798.f_412 = 1;
		Global_1328798.f_417.f_152[iVar0] = iParam14;
	}
}

void func_5(int iParam0, int iParam1)
{
	unk_0x933D6A9EEC1BACD0(&(Global_1328798.f_1912[iParam0]), iParam1);
}

bool func_6(int iParam0, int iParam1)
{
	return unk_0xA921AA820C25702F(Global_1328798.f_1912[iParam0], iParam1);
}

void func_7()
{
	int iVar0;
	
	iVar0 = (iLocal_79 - unk_0x9CD27B0045628463());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (unk_0x9CD27B0045628463() >= iLocal_83)
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0);
	}
	else
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0);
	}
	switch (iLocal_80)
	{
		case 0:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 10000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 1:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 9000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 2:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 8000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 3:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 7000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 4:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 6000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 5:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 5000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 6:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 4500))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 7:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 4000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 8:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 3500))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 9:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 3000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 10:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 2500))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 11:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 2000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 12:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 1500))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 13:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 1000))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 14:
			if (unk_0x9CD27B0045628463() >= (iLocal_79 - 500))
			{
				unk_0x67C540AA08E4A6F5(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 15:
			if (unk_0x9CD27B0045628463() >= iLocal_79)
			{
				unk_0x67C540AA08E4A6F5(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_80++;
			}
			break;
		
		case 16:
			break;
	}
	if (unk_0x9CD27B0045628463() >= iLocal_79)
	{
		iLocal_37 = 3;
	}
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iVar0 == -1)
		{
			if (func_6(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328798.f_1 = 1;
		func_5(7, iVar0);
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

void func_9()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_35 >= 3 && iLocal_35 <= 4)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_92)
		{
			if (!iLocal_77)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_92[iVar0]))
				{
					if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_63, 50f, 50f, 50f, false, true, 0))
					{
						unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), 2, false);
						unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
						unk_0x9B0BB33B04405E7A(unk_0x4F8644AF03D0E0D6(), 0f);
						iLocal_77 = 1;
					}
				}
			}
			else if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_92[iVar0]))
				{
					unk_0x22B0D0E37CCB840D(iLocal_92[iVar0], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
					unk_0x971D38760FBC02EF(iLocal_92[iVar0], true);
					unk_0x2595DD4236549CE3(&(iLocal_92[iVar0]));
				}
				if (unk_0x7239B21A38F536BA(iLocal_96))
				{
					unk_0x629BFA74418D6239(&iLocal_96);
				}
			}
			iVar0++;
		}
	}
	if (func_20(&iLocal_38, Local_66, Global_21, 1, iLocal_95, sLocal_103, "", sLocal_104, 1, 0, 1, -1))
	{
		func_19(iLocal_95, 10.5f, 2, 1056964608, 0, 1);
		unk_0x504D54DF3F6F2247(unk_0xD80958FC74E988A6(), 2000, 0);
		unk_0x31B927BBC44156CD(iLocal_95, false);
		func_14(&iLocal_38, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_89)
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_89[iVar1]))
		{
			if (!unk_0xA6DB27D19ECBB7DA(uLocal_98[iVar1]))
			{
				uLocal_98[iVar1] = func_10(iLocal_89[iVar1], 1, 145);
				unk_0xE8854A4326B9E12B(&iLocal_119);
				unk_0x504D54DF3F6F2247(0, 0, 0);
				unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
				unk_0x39E72BC99E6360CB(iLocal_119);
				unk_0x5ABA3986D90D8A3B(iLocal_89[iVar1], iLocal_119);
				unk_0x3841422E9C488D8C(&iLocal_119);
				unk_0x971D38760FBC02EF(iLocal_89[iVar1], true);
			}
			if (!unk_0x751B70C3D034E187(iLocal_89[iVar1], unk_0xD80958FC74E988A6(), 100f, 100f, 100f, false, true, 0))
			{
				if (unk_0xA6DB27D19ECBB7DA(uLocal_98[iVar1]))
				{
					unk_0x86A652570E5F25DD(&(uLocal_98[iVar1]));
				}
				unk_0x22B0D0E37CCB840D(iLocal_89[iVar1], unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
				unk_0x971D38760FBC02EF(iLocal_89[iVar1], true);
				unk_0x2595DD4236549CE3(&(iLocal_89[iVar1]));
			}
		}
		else if (unk_0xA6DB27D19ECBB7DA(uLocal_98[iVar1]))
		{
			unk_0x86A652570E5F25DD(&(uLocal_98[iVar1]));
		}
		iVar1++;
	}
}

int func_10(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_11(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DB27D19ECBB7DA(iVar0)) && unk_0xAC09CA973C564252(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0xEAA0FFE120D92784(iVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_12(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_12(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_12(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_12(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_13()
{
	func_127(1);
	func_105();
}

void func_14(int* iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xA921AA820C25702F(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_18(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA6DB27D19ECBB7DA(iParam0->f_1[iVar0]))
		{
			unk_0x86A652570E5F25DD(&(iParam0->f_1[iVar0]));
		}
		func_17(iVar0, iParam0);
		func_16(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0xE80492A9AC099A93(&(iParam0->f_13), iVar0);
			unk_0xE80492A9AC099A93(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		unk_0x86A652570E5F25DD(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[iVar0]))
		{
			unk_0x6373D1349925A70E(iParam0->f_17[iVar0], true);
			unk_0x0EB0585D15254740(iParam0->f_17[iVar0], true);
			if (bParam2)
			{
				unk_0x1913FE4CBF41C463(iParam0->f_17[iVar0], 32, true);
				unk_0x1913FE4CBF41C463(iParam0->f_17[iVar0], 305, false);
			}
			unk_0x1913FE4CBF41C463(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (unk_0x9BB01E3834671191(iParam0->f_17[iVar0], func_15()) && iParam0->f_17[iVar0] != unk_0xD80958FC74E988A6())
				{
					unk_0xED74007FFB146BC2(iParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xA921AA820C25702F(iParam0->f_13, 29))
			{
				unk_0xD75ACCF5E0FB5367(iParam0->f_17[iVar0], false, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0x6373D1349925A70E(unk_0xD80958FC74E988A6(), true);
		unk_0x0EB0585D15254740(unk_0xD80958FC74E988A6(), true);
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (bParam2)
		{
			unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

int func_15()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(uParam0->f_5))
	{
		unk_0x86A652570E5F25DD(&(uParam0->f_5));
	}
}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5)
{
	unk_0xFE99B66D079CF6BC(0, 71, true);
	unk_0xFE99B66D079CF6BC(0, 72, true);
	unk_0xFE99B66D079CF6BC(0, 76, true);
	unk_0xFE99B66D079CF6BC(0, 73, true);
	unk_0xFE99B66D079CF6BC(0, 59, true);
	unk_0xFE99B66D079CF6BC(0, 60, true);
	if (bParam5)
	{
		unk_0xFE99B66D079CF6BC(0, 75, true);
	}
	unk_0xFE99B66D079CF6BC(0, 80, true);
	unk_0xFE99B66D079CF6BC(0, 69, true);
	unk_0xFE99B66D079CF6BC(0, 70, true);
	unk_0xFE99B66D079CF6BC(0, 68, true);
	unk_0xFE99B66D079CF6BC(0, 74, true);
	unk_0xFE99B66D079CF6BC(0, 86, true);
	unk_0xFE99B66D079CF6BC(0, 81, true);
	unk_0xFE99B66D079CF6BC(0, 82, true);
	unk_0xFE99B66D079CF6BC(0, 138, true);
	unk_0xFE99B66D079CF6BC(0, 136, true);
	unk_0xFE99B66D079CF6BC(0, 114, true);
	unk_0xFE99B66D079CF6BC(0, 107, true);
	unk_0xFE99B66D079CF6BC(0, 110, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 87, true);
	unk_0xFE99B66D079CF6BC(0, 88, true);
	unk_0xFE99B66D079CF6BC(0, 113, true);
	unk_0xFE99B66D079CF6BC(0, 115, true);
	unk_0xFE99B66D079CF6BC(0, 116, true);
	unk_0xFE99B66D079CF6BC(0, 117, true);
	unk_0xFE99B66D079CF6BC(0, 118, true);
	unk_0xFE99B66D079CF6BC(0, 119, true);
	unk_0xFE99B66D079CF6BC(0, 131, true);
	unk_0xFE99B66D079CF6BC(0, 132, true);
	unk_0xFE99B66D079CF6BC(0, 123, true);
	unk_0xFE99B66D079CF6BC(0, 126, true);
	unk_0xFE99B66D079CF6BC(0, 129, true);
	unk_0xFE99B66D079CF6BC(0, 130, true);
	unk_0xFE99B66D079CF6BC(0, 133, true);
	unk_0xFE99B66D079CF6BC(0, 134, true);
	unk_0x17FCA7199A530203();
	if ((unk_0x9CD27B0045628463() - Global_28) > 500)
	{
		unk_0x260BE8F09E326A20(iParam0, fParam1, iParam2, bParam4);
	}
	Global_28 = unk_0x9CD27B0045628463();
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x73D57CFFDD12C355(unk_0xD5037BA82E12416F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_20(int* iParam0, struct<3> Param1, struct<3> Param4, bool bParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_21(iParam0, Param1, Param4, func_63(), func_63(), bParam7, 5, 0, 0, 0, iParam8, sParam9, func_62(), func_62(), func_62(), func_62(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_21(int* iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, bool bParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam15;
	iParam0->f_17[1] = iParam16;
	iParam0->f_17[2] = iParam17;
	iParam0->f_16 = iParam15;
	func_61(iParam0);
	func_60(iParam0);
	func_59();
	if (func_43(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, iParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_42(sParam20);
		func_42(sParam21);
		func_42(sParam22);
		func_42(sParam23);
		if (unk_0x5A859503B0C08678())
		{
			bVar1 = false;
			if (unk_0x4C241E39B23DF959(iParam18, false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam18, false))
				{
					unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
					if (!unk_0xA921AA820C25702F(iParam0->f_13, 9))
					{
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
					}
					if (unk_0xA921AA820C25702F(iParam0->f_13, 23))
					{
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 23);
					}
					unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_40(iParam0, iParam29))
				{
					unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
					if (!unk_0xA921AA820C25702F(iParam0->f_13, 9))
					{
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
					}
					unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_42(sParam24);
				func_42(sParam27);
				func_42("MORE_SEATS");
				if (bParam26 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
					{
						unk_0x86A652570E5F25DD(&(iParam0->f_5));
						func_42(sParam19);
					}
					if (unk_0xA6DB27D19ECBB7DA(*iParam0))
					{
						unk_0x86A652570E5F25DD(iParam0);
					}
					if ((!func_36(iParam0, 1) && !func_35(iParam0)) && !unk_0xA921AA820C25702F(iParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_33(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
							{
								func_31(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 0);
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xA921AA820C25702F(iParam0->f_13, 0))
					{
						func_42("LOSE_WANTED");
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 0);
						unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 1);
					}
					if (unk_0xA921AA820C25702F(iParam0->f_13, 1))
					{
						if (!func_36(iParam0, 1))
						{
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
							{
								func_31(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xE80492A9AC099A93(&(iParam0->f_13), 1);
						}
					}
					if (!unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
					{
						if (unk_0xA6DB27D19ECBB7DA(*iParam0))
						{
							unk_0x86A652570E5F25DD(iParam0);
						}
						iParam0->f_5 = func_30(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xDF735600A4696DAF(iParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_29(iParam0->f_5, iParam0);
						}
					}
					else if (!func_28(Var3, unk_0x586AFE3FF72D996E(iParam0->f_5), 0.1f))
					{
						unk_0xAE2AF67E9D9AF65D(iParam0->f_5, Var3);
						if (bParam35)
						{
							func_29(iParam0->f_5, iParam0);
						}
					}
					if (!func_36(iParam0, 2))
					{
						if (!unk_0xA921AA820C25702F(iParam0->f_13, 2))
						{
							func_33(iParam0, sParam19, 0);
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xA921AA820C25702F(iParam0->f_13, 13))
						{
							bParam13 = false;
						}
					}
					bVar1 = false;
					bVar6 = false;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						bVar6 = true;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Param1, Param4, bParam13, bVar6, iVar7);
						if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Param7, Param10, fParam36, false, bVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Param1, Param4, bParam13, bVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
									if (!unk_0xA3EE4A07279BB9DB(iParam0->f_17[iVar2], iVar0, false))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0xA3EE4A07279BB9DB(iParam0->f_17[iVar2], iParam18, false))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x9BB01E3834671191(iParam0->f_17[iVar2], func_15()) || !func_26(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_23(iParam0))
							{
								func_42(sParam19);
								func_42(sParam24);
								func_42(sParam20);
								func_42(sParam21);
								func_42(sParam22);
								func_42(sParam23);
								func_42("LOSE_WANTED");
								func_42("MORE_SEATS");
								func_42(sParam27);
								func_14(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x7239B21A38F536BA(iParam18))
			{
				if ((bParam26 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && (!unk_0xA921AA820C25702F(iParam0->f_13, 9) && !unk_0xA921AA820C25702F(iParam0->f_13, 22)))
				{
					func_42(sParam24);
					func_42(sParam27);
					if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5) || unk_0xA6DB27D19ECBB7DA(*iParam0))
					{
						unk_0x86A652570E5F25DD(&(iParam0->f_5));
						unk_0x86A652570E5F25DD(iParam0);
						func_42(sParam19);
					}
					if ((!func_36(iParam0, 1) && !func_35(iParam0)) && !unk_0xA921AA820C25702F(iParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_33(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
							{
								func_31(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 0);
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xA921AA820C25702F(iParam0->f_13, 0))
					{
						func_42("LOSE_WANTED");
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 0);
						unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 1);
					}
					if (unk_0xA921AA820C25702F(iParam0->f_13, 1))
					{
						if (!func_36(iParam0, 1))
						{
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
							{
								func_31(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xE80492A9AC099A93(&(iParam0->f_13), 1);
						}
					}
					if (unk_0x4C241E39B23DF959(iParam18, false))
					{
						if (!unk_0xA6DB27D19ECBB7DA(*iParam0))
						{
							if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
							{
								unk_0x86A652570E5F25DD(&(iParam0->f_5));
								func_42(sParam19);
							}
							*iParam0 = func_22(iParam18, 0, 0);
							unk_0x9029B2F3DA924928(*iParam0, 2);
							if (!unk_0xA921AA820C25702F(iParam0->f_13, 4))
							{
								func_29(*iParam0, iParam0);
							}
						}
						if (!func_36(iParam0, 2))
						{
							if (!unk_0xA921AA820C25702F(iParam0->f_13, 3))
							{
								func_33(iParam0, sParam24, 0);
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
								unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
							}
							else if (unk_0xA921AA820C25702F(iParam0->f_13, 9))
							{
								if (!unk_0xF22B6C47C6EAB066(sParam27))
								{
									if (!unk_0xA921AA820C25702F(iParam0->f_13, 4))
									{
										func_33(iParam0, sParam27, 0);
										unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
									}
								}
								else if (!unk_0xA921AA820C25702F(iParam0->f_13, 4))
								{
									func_33(iParam0, sParam24, 0);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
								}
								if (!unk_0xA921AA820C25702F(iParam0->f_13, 23))
								{
									if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
									{
										func_31(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
				{
					unk_0x86A652570E5F25DD(&(iParam0->f_5));
					func_42(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_36(iParam0, 2))
						{
							if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
							{
								if (!unk_0xA921AA820C25702F(iParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0xD53343AA4FB7DD28(0, iVar8);
									if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[iVar9]))
									{
										func_31(iParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_33(iParam0, "MORE_SEATS", 0);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 13);
								}
							}
							else if (!unk_0xA921AA820C25702F(iParam0->f_13, 3))
							{
								func_33(iParam0, sParam24, 0);
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
								unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
							}
							else if (!unk_0xA921AA820C25702F(iParam0->f_13, 4))
							{
								if (unk_0xA921AA820C25702F(iParam0->f_13, 9))
								{
									func_33(iParam0, sParam27, 0);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_36(iParam0, 2))
					{
						if (!unk_0xA921AA820C25702F(iParam0->f_13, 3))
						{
							func_33(iParam0, sParam24, 0);
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
							unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
						}
						else if (unk_0xA921AA820C25702F(iParam0->f_13, 9))
						{
							if (!unk_0xF22B6C47C6EAB066(sParam27))
							{
								if (!unk_0xA921AA820C25702F(iParam0->f_13, 4))
								{
									func_33(iParam0, sParam27, 0);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
								}
							}
							else if (!unk_0xA921AA820C25702F(iParam0->f_13, 4))
							{
								func_33(iParam0, sParam24, 0);
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xA921AA820C25702F(iParam0->f_13, 0))
		{
			unk_0xE80492A9AC099A93(&(iParam0->f_13), 0);
		}
		func_42(sParam19);
		func_42(sParam24);
		func_42(sParam27);
		func_42(sParam24);
		func_42("LOSE_WANTED");
		if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
		{
			unk_0x86A652570E5F25DD(&(iParam0->f_5));
		}
		if (unk_0xA6DB27D19ECBB7DA(*iParam0))
		{
			unk_0x86A652570E5F25DD(iParam0);
		}
	}
	unk_0xE80492A9AC099A93(&(iParam0->f_13), 11);
	unk_0xE80492A9AC099A93(&(iParam0->f_13), 12);
	return 0;
}

int func_22(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_23(int* iParam0)
{
	if (unk_0xA921AA820C25702F(iParam0->f_13, 12))
	{
		if (func_25(unk_0xD80958FC74E988A6()))
		{
			if (func_24(1, 0, 1) || unk_0xA921AA820C25702F(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_24(1, 0, 1) || unk_0xA921AA820C25702F(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_24(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x2B4A15E44DE0F478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (bParam0)
		{
			if (unk_0x5F9532F3B5CC2551(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x5F9532F3B5CC2551(iVar0))
			{
				if (unk_0xBB40DD2270B65366(iVar0, -1) != unk_0xD80958FC74E988A6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x5F9532F3B5CC2551(iVar0))
		{
			if (unk_0x95EED5A694951F9F(iVar0) < 0.95f || unk_0x95EED5A694951F9F(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

int func_25(int iParam0)
{
	float fVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		fVar0 = unk_0xD5037BA82E12416F(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_26(int iParam0, int iParam1)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()) && iParam1)
		{
			if (func_27(unk_0xD80958FC74E988A6(), iParam0))
			{
				unk_0x4102C7858CFEE4E4(func_15(), 50f);
				return 1;
			}
		}
		else if (unk_0x9BB01E3834671191(iParam0, func_15()))
		{
			unk_0x4102C7858CFEE4E4(func_15(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x826AA586EDB9FEF8(iParam0))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(iParam0, false);
			if (unk_0x4C241E39B23DF959(iVar0, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(iParam1))
				{
					if (unk_0xA808AA1D79230FC2(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_28(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x73D57CFFDD12C355((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_29(int iParam0, int* iParam1)
{
	if (unk_0xA6DB27D19ECBB7DA(iParam0))
	{
		if (unk_0xA6DB27D19ECBB7DA(iParam1->f_6))
		{
			unk_0x4F7D8A9BFB0B43E9(iParam1->f_6, false);
		}
		unk_0x3DDA37128DD1ACA8(false);
		unk_0x67EEDEA1B9BAFD94();
		iParam1->f_6 = iParam0;
		unk_0x4F7D8A9BFB0B43E9(iParam0, true);
	}
}

int func_30(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(iVar0, func_12(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(iVar0, bParam3);
	return iVar0;
}

void func_31(int iParam0, char* sParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(iParam0, sParam1, func_32(iParam2), 1);
}

int func_32(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_33(int* iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xF22B6C47C6EAB066(sParam1))
		{
			if (!unk_0x0C515FAB3FF9EA92(sParam1, ""))
			{
				func_34(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = unk_0x9CD27B0045628463();
}

void func_34(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0x9D77056A530643F6(iParam1, true);
}

int func_35(int* iParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0->f_16))
	{
		if (unk_0x9072C8B49907BFAD(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_36(int* iParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xAD6DACA4BA53E0A4())
	{
		if (unk_0x7984C03AA5CC2F41())
		{
			return 1;
		}
		if (func_39(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xAD6DACA4BA53E0A4())
	{
		if (func_38() && !func_37())
		{
			return 1;
		}
	}
	return 0;
}

int func_37()
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

int func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9CD27B0045628463();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_40(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (func_41(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_41(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x7239B21A38F536BA(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xA7C4F2C6E744A550(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xF7F203E31F96F6A1(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0xF7F203E31F96F6A1(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_42(char* sParam0)
{
	if (!unk_0xF22B6C47C6EAB066(sParam0))
	{
		unk_0xCF708001E1E536DD(sParam0);
	}
}

int func_43(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
		{
			if (!unk_0xA921AA820C25702F(uParam0->f_13, 29) && !unk_0xA921AA820C25702F(uParam0->f_13, 28))
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
				{
					unk_0xD75ACCF5E0FB5367(uParam0->f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xA921AA820C25702F(uParam0->f_13, 29) && unk_0xA921AA820C25702F(uParam0->f_13, 28))
		{
			if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
			{
				unk_0xD75ACCF5E0FB5367(uParam0->f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0xE80492A9AC099A93(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xA921AA820C25702F(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x7239B21A38F536BA(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = unk_0xF73EB622C4F1689B(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 50f, 0, iVar25);
			if (unk_0x4C241E39B23DF959(iVar24, false))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x4C241E39B23DF959(uParam0->f_21, false))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(uParam0->f_21, true)) < 400f)
			{
				if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0) || !bParam17)
					{
						if (func_41(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
								{
									unk_0x433083750C5E064A(uParam0->f_17[iVar0], 1f);
									if (unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_15()))
									{
										unk_0xED74007FFB146BC2(uParam0->f_17[iVar0]);
									}
									if (unk_0x77F1BEB8863288D5(uParam0->f_17[iVar0], -1794415470) == 7 && !func_58(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x47E4E977581C5B55(uParam0->f_17[iVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[iVar0]))
										{
											unk_0x9F8AA94D6D97DBF4(uParam0->f_17[iVar0], true);
											unk_0xC20E50AA46D09CA8(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			unk_0xE80492A9AC099A93(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
				{
					if (!unk_0xBB062B2B5722478E(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xE1EF3C1216AFF2CD(uParam0->f_17[iVar0]);
					}
					if (!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_15()))
					{
						if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0x9F3480FE65DB31B5(uParam0->f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xA921AA820C25702F(uParam0->f_13, 26))
	{
		if ((!func_55(uParam0) && unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6())) && !unk_0x7239B21A38F536BA(iParam10))
		{
			iVar13 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(iVar13, false))
			{
				if (!unk_0xA921AA820C25702F(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_36(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0xD53343AA4FB7DD28(0, iVar26);
						if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar27]))
						{
							func_31(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_33(uParam0, "MORE_SEATS", 0);
						unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0xE80492A9AC099A93(&(uParam0->f_13), 13);
			func_42("MORE_SEATS");
		}
		if (!unk_0x7239B21A38F536BA(iParam10))
		{
			if ((!unk_0x84A2DD9AC37C35C1(uParam0->f_17[0]) || !unk_0x84A2DD9AC37C35C1(uParam0->f_17[1])) || !unk_0x84A2DD9AC37C35C1(uParam0->f_17[2]))
			{
				if (!unk_0xA921AA820C25702F(uParam0->f_13, 31))
				{
					if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()) && !func_36(uParam0, 2))
					{
						iVar13 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (func_54(iVar13, uParam0))
						{
							func_33(uParam0, "CMN_VEHSUIT", 0);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
					unk_0xE80492A9AC099A93(&(uParam0->f_13), 31);
					func_42("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x4C241E39B23DF959(iParam10, false))
		{
			if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), iParam10))
			{
				if (unk_0x580417101DDB492F(0, 75))
				{
					unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xA921AA820C25702F(uParam0->f_13, 21))
			{
				unk_0xE80492A9AC099A93(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x7239B21A38F536BA(uParam0->f_17[iVar0]))
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
				{
					if (!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_15()))
					{
						unk_0x56CEF0AC79073BDE(uParam0->f_17[iVar0], true);
					}
					else
					{
						unk_0x56CEF0AC79073BDE(uParam0->f_17[iVar0], false);
					}
					if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
					{
						iVar13 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (unk_0x4C241E39B23DF959(iVar13, false))
						{
							if (unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_15()))
							{
								if (!func_55(uParam0) && unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
								{
									if (!func_53(uParam0->f_17[iVar0]))
									{
										unk_0xED74007FFB146BC2(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x5F9532F3B5CC2551(iVar13))
						{
							if (unk_0xA808AA1D79230FC2(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xCFB0A0D8EDD145A3(iVar13) && !unk_0xB104CD1BABF302E2(iVar13))
								{
									Var28 = { unk_0x3FEF770D40960D5A(iVar13, true) };
									if (Var28.f_2 < -1f)
									{
										unk_0xD3DBCE61A490BE02(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_15()))
					{
						if (unk_0x826AA586EDB9FEF8(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x9A9112A0FE9A4713(uParam0->f_17[iVar0], false);
							if (!unk_0x5F9532F3B5CC2551(iVar13))
							{
								if (unk_0x4C241E39B23DF959(iParam10, false))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), iVar13))
										{
											if (unk_0xD5037BA82E12416F(iVar13) > 5f)
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
									{
										iVar31 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
									}
									if (unk_0x4C241E39B23DF959(iVar31, false))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0xD5037BA82E12416F(iVar13) > 5f)
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_15()))
					{
						iVar32 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
						if (unk_0x7239B21A38F536BA(iVar32))
						{
							if (func_41(iVar32, uParam0, 0))
							{
								if (func_52(iVar0, uParam0) || !unk_0xA921AA820C25702F(uParam0->f_13, 27))
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_52(iVar0, uParam0))
							{
								if (unk_0x9F47B058362C84B5(iVar32) == joaat("sentinel2"))
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[iVar0], 2);
								}
								func_51(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_15()) && !func_50(uParam0->f_17[iVar0], iParam10)) && !func_49(uParam0->f_17[iVar0], iParam10))
					{
						if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_15()))
							{
								if (((!unk_0x47E4E977581C5B55(uParam0->f_17[iVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[iVar0])) && !unk_0x433DDFFE2044B636(uParam0->f_17[iVar0])) && !unk_0xBB062B2B5722478E(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x77F1BEB8863288D5(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0xE1EF3C1216AFF2CD(uParam0->f_17[iVar0]);
									}
									unk_0x9F3480FE65DB31B5(uParam0->f_17[iVar0], func_15());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0xA6DB27D19ECBB7DA(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x9CD27B0045628463();
								uParam0->f_1[iVar0] = func_22(uParam0->f_17[iVar0], 0, 0);
								unk_0x9029B2F3DA924928(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_29(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[iVar0]))
					{
						if (((func_26(uParam0->f_17[iVar0], 1) || func_50(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x4C241E39B23DF959(iParam10, false) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam10, false)))
						{
							if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[iVar0]))
							{
								unk_0x86A652570E5F25DD(&(uParam0->f_1[iVar0]));
								func_42(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_29(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x4C241E39B23DF959(iParam10, false))
					{
						if (!unk_0xA808AA1D79230FC2(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x751B70C3D034E187(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, false, true, 0) && !unk_0xA921AA820C25702F(uParam0->f_13, 11)) && !((bParam17 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam10, false)))
							{
								if (unk_0x826AA586EDB9FEF8(uParam0->f_17[iVar0]))
								{
									if (!unk_0xA3EE4A07279BB9DB(uParam0->f_17[iVar0], iParam10, false))
									{
										if (!func_26(uParam0->f_17[iVar0], 1))
										{
											if (func_25(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x77F1BEB8863288D5(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x504D54DF3F6F2247(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_15()))
									{
										if ((((!unk_0x433DDFFE2044B636(uParam0->f_17[iVar0]) && !unk_0x47E4E977581C5B55(uParam0->f_17[iVar0])) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[iVar0])) && !unk_0xBB062B2B5722478E(uParam0->f_17[iVar0])) && !unk_0x28D3FED7190D3A0B(iParam10))
										{
											unk_0xED74007FFB146BC2(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x77F1BEB8863288D5(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_58(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x433DDFFE2044B636(uParam0->f_17[iVar0]) && !unk_0x433DDFFE2044B636(unk_0xD80958FC74E988A6())) && !func_48(uParam0->f_17[iVar0], 2f)) && !unk_0x47E4E977581C5B55(uParam0->f_17[iVar0])) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[iVar0])) && !unk_0x28D3FED7190D3A0B(iParam10))
										{
											unk_0x9F8AA94D6D97DBF4(uParam0->f_17[iVar0], true);
											if (unk_0xA921AA820C25702F(uParam0->f_13, 10))
											{
												unk_0x433083750C5E064A(uParam0->f_17[iVar0], 1f);
											}
											unk_0xC20E50AA46D09CA8(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xBC0ED94165A48BC2(uParam0->f_17[iVar0], false);
										}
									}
									else if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam10, false))
									{
										uParam0->f_1[iVar0] = func_22(uParam0->f_17[iVar0], 0, 0);
										unk_0x9029B2F3DA924928(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_15()))
							{
								if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x47E4E977581C5B55(uParam0->f_17[iVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x77F1BEB8863288D5(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0xE1EF3C1216AFF2CD(uParam0->f_17[iVar0]);
										}
										unk_0x9F8AA94D6D97DBF4(uParam0->f_17[iVar0], false);
										unk_0x9F3480FE65DB31B5(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), iParam10))
						{
							if (!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_15()))
							{
								if (!unk_0xA921AA820C25702F(uParam0->f_13, 21))
								{
									unk_0x9F3480FE65DB31B5(uParam0->f_17[iVar0], func_15());
								}
							}
							else if (unk_0xA921AA820C25702F(uParam0->f_13, 21))
							{
								unk_0xED74007FFB146BC2(uParam0->f_17[iVar0]);
								unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_15()) && !unk_0x28D3FED7190D3A0B(iParam10))
						{
							unk_0xED74007FFB146BC2(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[iVar0]))
				{
					unk_0x86A652570E5F25DD(&(uParam0->f_1[iVar0]));
					func_42(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_36(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
						{
							if (func_53(uParam0->f_17[iVar0]) || unk_0x751B70C3D034E187(uParam0->f_17[iVar0], unk_0xD80958FC74E988A6(), uParam0->f_8, uParam0->f_8, uParam0->f_8, false, true, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
					{
						if (!unk_0x751B70C3D034E187(uParam0->f_17[iVar0], unk_0xD80958FC74E988A6(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, false, true, 0) && !func_53(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x9CD27B0045628463();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xA921AA820C25702F(uParam0->f_13, 5))
							{
								func_33(uParam0, sParam7, 0);
								unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_47(iVar0, uParam0))
									{
										if (!unk_0xF22B6C47C6EAB066(uVar19[iVar0]))
										{
											if (!unk_0x0C515FAB3FF9EA92(uVar19[iVar0], ""))
											{
												func_45(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_44(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_47(iVar0, uParam0))
										{
											func_33(uParam0, uVar15[iVar0], 0);
											func_44(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0xE80492A9AC099A93(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[iVar0]))
				{
					unk_0x86A652570E5F25DD(&(uParam0->f_1[iVar0]));
					func_42(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_42("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_44(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 16);
			break;
	}
}

void func_45(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xF22B6C47C6EAB066(sParam1))
		{
			if (!unk_0x0C515FAB3FF9EA92(sParam1, ""))
			{
				func_46(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9CD27B0045628463();
}

void func_46(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0xC63CD5D2920ACBE7(sParam1);
	unk_0x9D77056A530643F6(iParam2, true);
}

int func_47(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xA921AA820C25702F(uParam1->f_13, 14);
		
		case 1:
			return unk_0xA921AA820C25702F(uParam1->f_13, 15);
		
		case 2:
			return unk_0xA921AA820C25702F(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_48(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(iParam0, false))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(iParam0, false);
		if (!unk_0x5F9532F3B5CC2551(iVar0))
		{
			if (unk_0xD5037BA82E12416F(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (!unk_0x9BB01E3834671191(iParam0, func_15()))
		{
			iVar0 = unk_0xF92691AED837A5FC(iParam0);
			if (unk_0x4C241E39B23DF959(iParam1, false))
			{
				if (unk_0x751B70C3D034E187(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, false, true, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x7239B21A38F536BA(iParam1))
		{
			if (unk_0x4C241E39B23DF959(iParam1, false))
			{
				if (unk_0xA808AA1D79230FC2(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_51(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 19);
			break;
	}
}

int func_52(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xA921AA820C25702F(uParam1->f_13, 17);
		
		case 1:
			return unk_0xA921AA820C25702F(uParam1->f_13, 18);
		
		case 2:
			return unk_0xA921AA820C25702F(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(iParam0))
			{
				iVar1 = unk_0x6094AD011A2EA87D(iParam0);
				if (unk_0x4C241E39B23DF959(iVar1, false))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iParam0, 20f, 20f, 20f, false, true, 0) && unk_0x751B70C3D034E187(iParam0, iVar1, 20f, 20f, 20f, false, true, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_54(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		if (unk_0x9F47B058362C84B5(iParam0) == joaat("bus") || unk_0x9F47B058362C84B5(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xBB40DD2270B65366(iParam0, 0);
			if (!unk_0x84A2DD9AC37C35C1(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xBB40DD2270B65366(iParam0, 1);
			if (!unk_0x84A2DD9AC37C35C1(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xBB40DD2270B65366(iParam0, 2);
			if (!unk_0x84A2DD9AC37C35C1(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_55(var uParam0)
{
	int iVar0;
	
	if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (func_41(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam1))
	{
		if (unk_0x826AA586EDB9FEF8(iParam1))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(iParam1, false);
			if (!unk_0x5F9532F3B5CC2551(iVar0))
			{
				if (unk_0x4C241E39B23DF959(iVar0, false))
				{
					if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), iVar0))
					{
						if (func_55(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iParam1, fParam2, fParam2, 3f, false, true, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iParam1, fParam2, fParam2, 3f, false, true, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
				if (unk_0x7239B21A38F536BA(iVar0))
				{
					if (func_41(iVar0, uParam0, 0))
					{
						if (unk_0x4C241E39B23DF959(iVar0, false))
						{
							if (func_57(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_57(int iParam0)
{
	float fVar0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		fVar0 = unk_0xD5037BA82E12416F(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_58(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x4C241E39B23DF959(iParam1, false))
		{
			iVar0 = unk_0x6094AD011A2EA87D(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_59()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		iVar0 = unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6());
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			iVar1 = unk_0xBB40DD2270B65366(iVar0, 0);
			if (!unk_0x84A2DD9AC37C35C1(iVar1))
			{
				if (iVar1 != unk_0xD80958FC74E988A6())
				{
					if (unk_0x0A7B270912999B3C(iVar1))
					{
						if (!unk_0x813A0A7C9D2E831F(iVar1, unk_0xD80958FC74E988A6()))
						{
							unk_0x69F4BE8C8CC4796C(iVar1, unk_0xD80958FC74E988A6(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_60(var uParam0)
{
	int iVar0;
	
	if (!unk_0xA921AA820C25702F(uParam0->f_13, 25))
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x7239B21A38F536BA(uParam0->f_17[iVar0]))
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
				{
					unk_0x1913FE4CBF41C463(uParam0->f_17[iVar0], 32, false);
					unk_0x1913FE4CBF41C463(uParam0->f_17[iVar0], 305, true);
					unk_0x1913FE4CBF41C463(uParam0->f_17[iVar0], 268, true);
					unk_0xBC0ED94165A48BC2(uParam0->f_17[iVar0], false);
				}
			}
			iVar0++;
		}
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 25);
	}
}

void func_61(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7239B21A38F536BA(uParam0->f_17[iVar0]))
		{
			if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
			{
				if (unk_0x826AA586EDB9FEF8(uParam0->f_17[iVar0]))
				{
					unk_0x6373D1349925A70E(uParam0->f_17[iVar0], false);
					unk_0x0EB0585D15254740(uParam0->f_17[iVar0], false);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
			{
				unk_0x6373D1349925A70E(unk_0xD80958FC74E988A6(), false);
				unk_0x0EB0585D15254740(unk_0xD80958FC74E988A6(), false);
			}
		}
	}
}

var func_62()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_63()
{
	struct<3> Var0;
	
	return Var0;
}

void func_64()
{
	int iVar0;
	
	if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_95, false))
	{
		if (unk_0xA6DB27D19ECBB7DA(iLocal_101))
		{
			unk_0x86A652570E5F25DD(&iLocal_101);
		}
		if (iLocal_35 <= 2)
		{
			iLocal_79 = (unk_0x2F8B4D1C595B11DB() * ((60 * iLocal_81) + iLocal_82));
			iLocal_79 = (iLocal_79 + unk_0x9CD27B0045628463());
			iLocal_83 = (iLocal_79 - unk_0x2F8B4D1C595B11DB() * 30);
		}
		else if (iLocal_35 > 6)
		{
			iLocal_79 = (unk_0x2F8B4D1C595B11DB() * ((60 * iLocal_81) + iLocal_82));
			iLocal_79 = (iLocal_79 + unk_0x9CD27B0045628463());
			iLocal_83 = (iLocal_79 - unk_0x2F8B4D1C595B11DB() * 30);
		}
		else if (iLocal_35 >= 3 && iLocal_35 <= 4)
		{
			iLocal_96 = unk_0xAF35D0D2583051B0(iLocal_88, Local_69, fLocal_73, 1, 1);
			iLocal_92[0] = unk_0x7DD959874C1FD534(iLocal_96, 6, iLocal_86, -1, true, true);
			iLocal_92[1] = unk_0x7DD959874C1FD534(iLocal_96, 6, iLocal_86, 0, true, true);
			unk_0xF372BC22FCB88606("rghCop", &iLocal_117);
			unk_0xBF25EB89375A37AD(4, iLocal_117, joaat("player"));
			unk_0x9F7794730795E019(iLocal_92[0], 39, true);
			unk_0x9F7794730795E019(iLocal_92[1], 39, true);
			iVar0 = 0;
			while (iVar0 < iLocal_92)
			{
				unk_0xBF0FD6E56C964FCB(iLocal_92[iVar0], joaat("weapon_pistol"), -1, false, true);
				unk_0xF29CF591C4BF6CEE(iLocal_92[iVar0], 100f);
				unk_0xC80A74AC829DDD92(iLocal_92[iVar0], iLocal_117);
				iVar0++;
			}
		}
		iLocal_37 = 2;
	}
}

void func_65()
{
	int iVar0;
	
	if (!unk_0x5F9532F3B5CC2551(iLocal_95))
	{
		if (func_92() || unk_0x84A2DD9AC37C35C1(iLocal_89[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_89)
			{
				if (!unk_0x84A2DD9AC37C35C1(iLocal_89[iVar0]))
				{
					if (!unk_0xA6DB27D19ECBB7DA(uLocal_98[iVar0]))
					{
						uLocal_98[iVar0] = func_10(iLocal_89[iVar0], 1, 145);
						unk_0x9F7794730795E019(iLocal_89[iVar0], 1, false);
						unk_0xE8854A4326B9E12B(&iLocal_119);
						unk_0x504D54DF3F6F2247(0, 0, 0);
						unk_0xF166E48407BAC484(0, unk_0xD80958FC74E988A6(), 0, 16);
						unk_0x39E72BC99E6360CB(iLocal_119);
						unk_0x5ABA3986D90D8A3B(iLocal_89[iVar0], iLocal_119);
						unk_0x3841422E9C488D8C(&iLocal_119);
					}
				}
				else if (unk_0xA6DB27D19ECBB7DA(uLocal_98[iVar0]))
				{
					unk_0x86A652570E5F25DD(&(uLocal_98[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_78)
		{
			if (!unk_0x84A2DD9AC37C35C1(iLocal_89[0]))
			{
				if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_89[0], 50f, 50f, 50f, false, true, 0))
				{
					unk_0x9454528DF15D657A(iLocal_89[0], iLocal_95, unk_0xD80958FC74E988A6(), 8, 25f, 786469, -1f, -1f, true);
					iLocal_78 = 1;
				}
			}
		}
		if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_95, false))
		{
			if (unk_0xA6DB27D19ECBB7DA(iLocal_101))
			{
				unk_0x86A652570E5F25DD(&iLocal_101);
			}
			func_91(&uLocal_105, 0, 0);
			iLocal_37 = 2;
		}
		else if (unk_0x22AC59A870E6A669(iLocal_95, -1) || unk_0x84A2DD9AC37C35C1(iLocal_89[0]))
		{
			func_91(&uLocal_105, 0, 0);
		}
		else
		{
			func_66();
		}
	}
}

void func_66()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_89[0]) && !unk_0x5F9532F3B5CC2551(iLocal_95))
	{
		if (unk_0xA3EE4A07279BB9DB(iLocal_89[0], iLocal_95, false))
		{
			func_67(&uLocal_105, iLocal_95, 0, 0, 1, 1, 1);
		}
	}
}

void func_67(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_68(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_68(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_69(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_69(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		func_91(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_70(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_70(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE520FF1AD2785B40())
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xF22B6C47C6EAB066(iVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_90(iVar0))
	{
		func_89();
	}
	if (func_88(iParam1) && unk_0x47D6F43D77935C75(iParam1))
	{
		iVar1 = 0;
		if (unk_0x524AC5ECEA15343E(iParam1))
		{
			unk_0x7D7A2E43E74E2EB8(unk_0x04A2A40C73395041(iParam1));
			unk_0x2BC338A7B21F4608(unk_0x04A2A40C73395041(iParam1), true);
			if (unk_0x91C8E617F64188AC(unk_0x04A2A40C73395041(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x6AC7003FA6E5575E(iParam1))
		{
			unk_0x64473AEFDCF47DCA(unk_0x4B53F92932ADFAC0(iParam1));
			if (unk_0xAA0A52D24FB98293(unk_0x4B53F92932ADFAC0(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(iParam1))
		{
			unk_0xB252BC036B525623(unk_0xD7E3B9735C0F89D6(iParam1));
			if (unk_0x8B32ACE6326A7546(unk_0xD7E3B9735C0F89D6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE520FF1AD2785B40())
		{
			if (func_83(uParam0, bParam7, bParam9, 0))
			{
				func_79(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_75(iVar0))
				{
					if ((unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0)) && unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
					{
						if ((iVar1 && !unk_0x4D79439A6B55AC67()) && uParam8)
						{
							if (!func_90(iVar0))
							{
								func_74(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
								{
									func_73(1);
								}
							}
						}
					}
				}
			}
			else if (func_75(iVar0))
			{
				if (unk_0xF22B6C47C6EAB066(uParam0->f_3) && !unk_0xF22B6C47C6EAB066(iVar0))
				{
					if (((unk_0xE659E47AF827484B(iParam1) && iVar1) && !unk_0x4D79439A6B55AC67()) && uParam8)
					{
						if (!func_90(iVar0))
						{
							func_74(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x0C515FAB3FF9EA92("CMN_HINT", iVar0))
							{
								func_73(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xF22B6C47C6EAB066(sParam5))
			{
				if (func_90(sParam5))
				{
					unk_0x8DFCED7A656F8802(true);
				}
			}
			if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
			{
				if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
				{
					if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
				{
					func_91(uParam0, iVar0, 1);
				}
			}
			if (!func_83(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_72(uParam0))
				{
					func_71(uParam0);
				}
			}
		}
	}
	else
	{
		func_91(uParam0, iVar0, 0);
	}
}

void func_71(var uParam0)
{
	if (func_88(unk_0xD80958FC74E988A6()))
	{
		unk_0x0F804F1DB19B9689(unk_0xD80958FC74E988A6());
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0x51669F7D1FB53D9F(true);
		unk_0xF46C581C61718916(false);
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		unk_0x068E835A1D0DC0E3("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", 0, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_72(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x9CD27B0045628463()
		{
			return 1;
		}
	}
	return 0;
}

int func_73(bool bParam0)
{
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97173.f_8270.f_100++;
			}
			return Global_97173.f_8270.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97173.f_8270.f_101++;
			}
			return Global_97173.f_8270.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97173.f_8270.f_102++;
			}
			return Global_97173.f_8270.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_74(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_75(char* sParam0)
{
	if (!func_76(1, 1, 0))
	{
		if ((!unk_0xCA042B6957743895(sParam0) && func_90(sParam0)) || func_90("CMN_HINT"))
		{
			unk_0x8DFCED7A656F8802(true);
		}
		return 0;
	}
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (func_73(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_73(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_73(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_76(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x49C32D60007AFA47(unk_0x4F8644AF03D0E0D6()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xD9D2CFFF49FAB35F())
	{
		return 0;
	}
	if (func_78(0))
	{
		return 0;
	}
	if (func_77())
	{
		return 0;
	}
	if (Global_66880)
	{
		return 0;
	}
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51754)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
		{
			if (unk_0x2E0E1C2B4F6CB339(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(3) == 3 || unk_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x298B91AE825E5705(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(6) == 3 || unk_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5FFF4CFC74D8FB80(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(4) == 3 || unk_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFBFC01CCFB35D99E(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(5) == 3 || unk_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x94495889E22C6479(unk_0xD80958FC74E988A6()))
			{
				if (unk_0xEE778F8C7E1142E2(2) == 3 || unk_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA4FF579AC0E3AAAE() == 3 || unk_0xA4FF579AC0E3AAAE() == 4)
			{
				return 0;
			}
			if (unk_0x70FDA869F3317EA9())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_77()
{
	return unk_0x9CD27B0045628463() <= Global_17236.f_5130 + 100;
}

int func_78(int iParam0)
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

void func_79(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x5F9532F3B5CC2551(iParam1))
	{
		func_91(uParam0, 0, 0);
	}
	if (func_82(Param2, 0f, 0f, 0f))
	{
		if (unk_0x524AC5ECEA15343E(iParam1))
		{
			iVar0 = unk_0x04A2A40C73395041(iParam1);
			if (!unk_0x997ABD671D25CA0B(iVar0, false))
			{
				if (unk_0x12534C348C6CB68B(iVar0))
				{
					if (!func_80())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x6D9F5FAA7488BA46(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x51669F7D1FB53D9F(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x189E955A8313E298(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x69F4BE8C8CC4796C(unk_0xD80958FC74E988A6(), iParam1, -1, iVar3, iVar4);
	unk_0x2206BF9A37B7F724("FocusIn", 0, false);
	unk_0x013A80FC08F6E4F2("HINT_CAM_SCENE");
	unk_0x67C540AA08E4A6F5(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9CD27B0045628463();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_80()
{
	return func_81(unk_0x4F8644AF03D0E0D6());
}

int func_81(int iParam0)
{
	if (unk_0x9F47B058362C84B5(unk_0x43A66C31C68491C0(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_82(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_83(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9CD27B0045628463() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9CD27B0045628463();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_72(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (!func_87(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9CD27B0045628463();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9CD27B0045628463();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_86(bParam1, bParam2, bParam3) || unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9CD27B0045628463() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
					{
						if (func_85(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_84(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || func_84(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) || unk_0xB0760331C7AA4155(unk_0xD80958FC74E988A6(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_72(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_76(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_89();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_84(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_76(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_76(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0x305C8DCD79DA8B0F(0, 80))
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_86(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_76(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xFE99B66D079CF6BC(0, 140, true);
			unk_0xFE99B66D079CF6BC(0, 80, true);
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_87(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_76(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		unk_0xFE99B66D079CF6BC(0, 80, true);
		if (unk_0xCBBDE6D335D6D496())
		{
			if (unk_0xE2587F8CBBD87B1D(0, 80) && unk_0x9CD27B0045628463() > Global_96)
			{
				unk_0x51669F7D1FB53D9F(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_88(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x6AC7003FA6E5575E(iParam0))
		{
			if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(iParam0), false))
			{
				return 1;
			}
		}
		else if (unk_0x524AC5ECEA15343E(iParam0))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8D68C8FD0FACA94E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_89()
{
	unk_0x933D6A9EEC1BACD0(&Global_2264, 4);
}

bool func_90(char* sParam0)
{
	unk_0x0A24DA3A41B718F5(sParam0);
	return unk_0x10BDDBFC529428DD(0);
}

void func_91(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	
	if (unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_2446208.f_4393, 25))
		{
			return;
		}
	}
	if (unk_0xE520FF1AD2785B40())
	{
		unk_0xF46C581C61718916(bParam2);
		unk_0x068E835A1D0DC0E3("FocusIn");
		unk_0xDFE8422B3B94E688("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x2206BF9A37B7F724("FocusOut", 0, false);
			unk_0x67C540AA08E4A6F5(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0x51669F7D1FB53D9F(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xF22B6C47C6EAB066(sVar0))
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xF22B6C47C6EAB066(uParam0->f_3))
	{
		if (func_90(uParam0->f_3))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
	if (!unk_0xF22B6C47C6EAB066(sVar0))
	{
		if (func_90(sVar0))
		{
			unk_0x8DFCED7A656F8802(true);
		}
	}
}

int func_92()
{
	if (unk_0x7239B21A38F536BA(iLocal_95))
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_95))
		{
			if ((((((unk_0xEEF059FAD016D209(iLocal_95) < 300 || unk_0xC45D23BAF168AAB8(iLocal_95) < 200f) || unk_0x28D3FED7190D3A0B(iLocal_95)) || (unk_0xBA291848A0815CA9(iLocal_95, 0, false) && unk_0xBA291848A0815CA9(iLocal_95, 1, false))) || (unk_0xBA291848A0815CA9(iLocal_95, 4, false) && unk_0xBA291848A0815CA9(iLocal_95, 5, false))) || (unk_0xBA291848A0815CA9(iLocal_95, 0, false) && unk_0xBA291848A0815CA9(iLocal_95, 4, false))) || (unk_0xBA291848A0815CA9(iLocal_95, 1, false) && unk_0xBA291848A0815CA9(iLocal_95, 5, false)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_93()
{
	int iVar0;
	int iVar1;
	
	iLocal_95 = func_95(0);
	if (!unk_0x4C241E39B23DF959(iLocal_95, false))
	{
		iLocal_95 = unk_0xAF35D0D2583051B0(iLocal_87, Local_63, fLocal_72, 1, 1);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			unk_0x7EE3A3C5E4A40CC9(iLocal_95, iVar0, true);
			iVar0++;
		}
		if (iLocal_84 != -1)
		{
			unk_0x7EE3A3C5E4A40CC9(iLocal_95, iLocal_84, false);
		}
	}
	unk_0xF7EC25A3EBEEC726(iLocal_95, true);
	iLocal_101 = func_94(iLocal_95, 0, 0);
	if (iLocal_35 != 5 && iLocal_35 != 6)
	{
		if (iLocal_35 > 6)
		{
			unk_0xFAEE099C6F890BB8(iLocal_95, false, false, false, false, true, false, false, false);
			unk_0xE65F427EB70AB1ED(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_95, 0, false, 0);
		}
		func_34(sLocal_102, 7500, 1);
	}
	else
	{
		iLocal_89[0] = unk_0x7DD959874C1FD534(iLocal_95, 26, iLocal_85, -1, true, true);
		iLocal_89[1] = unk_0x7DD959874C1FD534(iLocal_95, 26, iLocal_85, 0, true, true);
		unk_0xF372BC22FCB88606("rghCriminal", &iLocal_118);
		unk_0xBF25EB89375A37AD(5, iLocal_118, joaat("player"));
		iVar1 = 0;
		while (iVar1 < iLocal_89)
		{
			unk_0x9F8AA94D6D97DBF4(iLocal_89[iVar1], true);
			unk_0xBF0FD6E56C964FCB(iLocal_89[iVar1], joaat("weapon_sawnoffshotgun"), -1, false, true);
			unk_0xC80A74AC829DDD92(iLocal_89[iVar1], iLocal_118);
			iVar1++;
		}
		unk_0x480142959D337D00(iLocal_89[0], iLocal_95, 25f, 786599);
		func_34("PMDL_REC", 7500, 1);
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xB6997A7EB3F5C8C0()))
	{
		iLocal_97 = unk_0xB6997A7EB3F5C8C0();
	}
	iLocal_37 = 1;
}

int func_94(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_95(int iParam0)
{
	if (unk_0x4C241E39B23DF959(Global_95887.f_222[iParam0], false))
	{
		unk_0xAD738C3085FE7E11(Global_95887.f_222[iParam0], true, true);
		return Global_95887.f_222[iParam0];
	}
	return 0;
}

int func_96()
{
	if (unk_0x7239B21A38F536BA(iLocal_95))
	{
		if (unk_0x4C241E39B23DF959(iLocal_95, false))
		{
			if (!unk_0x751B70C3D034E187(iLocal_95, unk_0xD80958FC74E988A6(), 300f, 300f, 300f, false, true, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x84A2DD9AC37C35C1(iLocal_89[0]))
	{
		if (unk_0xA6DB27D19ECBB7DA(uLocal_98[0]))
		{
			unk_0x86A652570E5F25DD(&(uLocal_98[0]));
		}
	}
	return 0;
}

void func_97()
{
	unk_0x963D27A58DF860AC(iLocal_87);
	unk_0x71A78003C8E71424("PMDL", 0);
	if (iLocal_35 >= 3 && iLocal_35 <= 4)
	{
		unk_0x963D27A58DF860AC(iLocal_86);
		unk_0x963D27A58DF860AC(iLocal_88);
	}
	else if (iLocal_35 == 5 || iLocal_35 == 6)
	{
		unk_0x963D27A58DF860AC(iLocal_85);
	}
	unk_0x0FC2D89AC25A5814(joaat("benson"), true);
	unk_0x0FC2D89AC25A5814(joaat("pony2"), true);
	if (unk_0x98A4EB5D89A0C952(iLocal_87) && unk_0x02245FE4BED318B8(0))
	{
		if (iLocal_35 >= 3 && iLocal_35 <= 4)
		{
			if (unk_0x98A4EB5D89A0C952(iLocal_86) && unk_0x98A4EB5D89A0C952(iLocal_88))
			{
				bLocal_74 = true;
			}
		}
		else if (iLocal_35 == 5 || iLocal_35 == 6)
		{
			if (unk_0x98A4EB5D89A0C952(iLocal_85))
			{
				bLocal_74 = true;
			}
		}
		else if (iLocal_35 > 6)
		{
			if (unk_0x2F844A8B08D76685("Deliveries", 0))
			{
				bLocal_74 = true;
			}
		}
		else
		{
			bLocal_74 = true;
		}
	}
}

void func_98()
{
	float fVar0;
	
	Local_63 = { func_100(func_102(), iLocal_35) };
	fLocal_72 = func_99(func_102(), iLocal_35);
	if (iLocal_35 > 6)
	{
		sLocal_102 = "PMDL_TRUCK";
		sLocal_103 = "PMDL_BTIM";
		sLocal_104 = "PMDL_BCKT";
		iLocal_87 = joaat("benson");
		iLocal_84 = 2;
	}
	if (func_102() == 10)
	{
		Local_66 = { -1161.213f, -1567.068f, 3.4234f };
		iLocal_87 = joaat("pony2");
		if (iLocal_35 == 0)
		{
			iLocal_81 = 2;
			iLocal_82 = 15;
			sLocal_103 = "PMDL_TIM";
		}
		else if (iLocal_35 == 1)
		{
			iLocal_81 = 1;
			iLocal_82 = 30;
			sLocal_103 = "PMDL_TIM";
		}
		else if (iLocal_35 == 2)
		{
			iLocal_81 = 1;
			iLocal_82 = 30;
			sLocal_103 = "PMDL_TIM";
		}
		else if (iLocal_35 == 3)
		{
			Local_69 = { -3121.261f, 1152.92f, 19.4047f };
			fLocal_73 = 176.4887f;
			iLocal_88 = joaat("police4");
			iLocal_86 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_35 == 4)
		{
			Local_69 = { 1543.145f, 2184.371f, 77.8114f };
			fLocal_73 = 45.3499f;
			iLocal_88 = joaat("police4");
			iLocal_86 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_35 >= 5)
		{
			iLocal_85 = joaat("g_m_y_salvagoon_02");
		}
	}
	else if (func_102() == 14)
	{
		Local_66 = { -2169.828f, 4277.365f, 47.9568f };
		fVar0 = unk_0xF1B760881820C952(Local_63, Local_66, true);
		iLocal_82 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_102() == 13)
	{
		Local_66 = { -323.356f, 6264.431f, 30.4463f };
		fVar0 = unk_0xF1B760881820C952(Local_63, Local_66, true);
		iLocal_82 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_102() == 12)
	{
		Local_66 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = unk_0xF1B760881820C952(Local_63, Local_66, true);
		iLocal_82 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (func_102() == 11)
	{
		Local_66 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = unk_0xF1B760881820C952(Local_63, Local_66, true);
		iLocal_82 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	iLocal_80 = 0;
	iLocal_75 = 1;
}

float func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0.5801f;
					break;
				
				case 1:
					return 177.9306f;
					break;
				
				case 2:
					return 49.6978f;
					break;
				
				case 3:
					return 336.9449f;
					break;
				
				case 4:
					return 80.1639f;
					break;
				
				case 5:
					return 287.983f;
					break;
				
				case 6:
					return 46.7895f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273.1085f;
					break;
				
				case 8:
					return 256.7899f;
					break;
				
				case 9:
					return 180.9647f;
					break;
				
				case 10:
					return 126.4385f;
					break;
				
				case 11:
					return 123.4767f;
					break;
				
				case 12:
					return 226.219f;
					break;
				
				case 13:
					return 82.6097f;
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_100(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return -128.1876f, 1934.495f, 194.9075f;
					break;
				
				case 1:
					return -179.8744f, 586.4468f, 196.6278f;
					break;
				
				case 2:
					return 1390.089f, -605.923f, 73.3378f;
					break;
				
				case 3:
					return -3170.048f, 1098.809f, 19.7817f;
					break;
				
				case 4:
					return 1581.22f, 2194.629f, 78.1062f;
					break;
				
				case 5:
					return 1475.833f, -113.5801f, 141.794f;
					break;
				
				case 6:
					return 1603.071f, -1793.915f, 89.0179f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 642.2169f, 2774.892f, 40.985f;
					break;
				
				case 8:
					return -1916.122f, 2060.313f, 139.7363f;
					break;
				
				case 9:
					return 824.8992f, -1064.192f, 26.9851f;
					break;
				
				case 10:
					return -669.6013f, -1198.664f, 9.6125f;
					break;
				
				case 11:
					return -1465.579f, -390.7494f, 37.5168f;
					break;
				
				case 12:
					return 797.7521f, -1793.008f, 28.3164f;
					break;
				
				case 13:
					return 806.319f, -2017.451f, 28.2215f;
					break;
			}
			break;
	}
	return func_101(iParam0);
}

Vector3 func_101(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 9:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 1:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 4:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 3:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 8:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 5:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 6:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 7:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 11:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 12:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 13:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 14:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_102()
{
	return Global_95887.f_20;
}

int func_103()
{
	return func_104(Global_95887.f_20, Global_95887.f_29);
}

int func_104(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 4;
					break;
				
				case 5:
					return 5;
					break;
				
				case 6:
					return 6;
					break;
			}
			break;
		
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 11;
					break;
				
				case 3:
					return 12;
					break;
				
				case 4:
					return 13;
					break;
			}
			break;
		
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 7;
					break;
			}
			break;
	}
	return 0;
}

void func_105()
{
	unk_0x0FC2D89AC25A5814(joaat("benson"), false);
	unk_0x0FC2D89AC25A5814(joaat("pony2"), false);
	unk_0x7A2D8AD0A9EB9C3F();
	if (iLocal_76)
	{
		if (!unk_0x5F9532F3B5CC2551(iLocal_97))
		{
			func_106(iLocal_97, 0, 145);
		}
		unk_0xB9D0DD990DC141DD(unk_0x4F8644AF03D0E0D6());
		func_91(&uLocal_105, 0, 0);
	}
	unk_0x1090044AD1DA76FA();
}

int func_106(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0xA6E9C38DB51D7748(iParam0, &uVar0);
		if (!unk_0xCA042B6957743895(sVar1))
		{
			if (unk_0xD24D37CC275948CC(sVar1) == unk_0xD24D37CC275948CC("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_107(iParam0, iParam2);
	return 1;
}

void func_107(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_112(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xBB40DD2270B65366(iParam0, -1);
		if (!unk_0x7239B21A38F536BA(iVar0))
		{
			iVar0 = unk_0x83F969AA1EE2A664(iParam0, -1);
		}
		if (unk_0x7239B21A38F536BA(iVar0) && !unk_0x84A2DD9AC37C35C1(iVar0))
		{
			if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97173.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x9F47B058362C84B5(iParam0) == Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0xCA042B6957743895(&(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(iParam0), &(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97173.f_18338.f_4800[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x9F47B058362C84B5(iParam0) == Global_97173.f_18338.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0xCA042B6957743895(&(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(iParam0), &(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97173.f_18338.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97173.f_18338.f_4798 = iParam1;
	Global_67865 = iParam0;
	Global_97173.f_18338.f_4796 = 1;
	func_108(iParam0, &(Global_97173.f_18338.f_4742));
}

void func_108(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		func_111(uParam1);
		uParam1->f_42 = unk_0x9F47B058362C84B5(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7CE1CCB9B293020E(iParam0), 16);
		*uParam1 = unk_0xF11BC2DD9A3E7195(iParam0);
		unk_0xA19435F193E081AC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x3BC4245933A166F7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB635392A4938B3C3(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x0EE21293DAD47C95(iParam0);
		uParam1->f_43 = unk_0x2BB9230590DA5E8A(iParam0);
		uParam1->f_45 = unk_0xB3ED1BFB4BE636DC(iParam0);
		uParam1->f_46 = unk_0x25BC98A59C2EA962(iParam0);
		unk_0x8389CD56CA8072DC(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0x7619EEE8C886757F(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0x8C4B92553E4766A5(iParam0, 2))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 28);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 3))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 29);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 30);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x52F357A30698BCCE(iParam0, false))
		{
			uParam1->f_44 = unk_0xF8C397922FC03F41(iParam0);
		}
		if (unk_0xA0948AB42D7BA0DE(uParam1->f_42))
		{
			if (unk_0x4198AB0022B15F87(iParam0))
			{
				switch (unk_0x9B0F3DCA3DB0F4CD(iParam0))
				{
					case 2:
					case 0:
						unk_0xE80492A9AC099A93(&(uParam1->f_53), 23);
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0xE80492A9AC099A93(&(uParam1->f_53), 23);
						unk_0xE80492A9AC099A93(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x678B9BB8C3F58FEB(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 9);
		}
		if (unk_0x4AF9BD80EEBEB453(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 10);
		}
		if (unk_0xF095C0405307B21B(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 13);
			unk_0xB64CF2CCA9D95F52(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x910A32E7AAD2656C(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 12);
		}
		func_110(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xD2E6822DBFD6C8BD(iParam0, iVar0 + 1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), func_109(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x060D935D3981A275(iParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_53), 11);
		}
		if (unk_0x05661B80A8C9165F(iParam0, "IgnoredByQuickSave") && unk_0xDACE671663F2F5DB(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_53), 27);
		}
	}
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_110(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4C241E39B23DF959(*iParam0, false))
	{
		return 0;
	}
	if (unk_0x33F2E3FE70EAAE1D(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x84B233A8C8FC8AE7(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x772960298DA26FDB(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB3924ECD70E095DC(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB3924ECD70E095DC(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_111(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_112(int iParam0)
{
	if ((((((((((!unk_0x7239B21A38F536BA(iParam0) || !unk_0x4C241E39B23DF959(iParam0, false)) || func_125(iParam0, 0, 0)) || func_125(iParam0, 1, 0)) || func_125(iParam0, 2, 0)) || func_124(iParam0) != 145) || func_123(iParam0)) || func_122(iParam0)) || func_121(iParam0)) || func_120(iParam0)) || !func_113(unk_0x9F47B058362C84B5(iParam0)))
	{
		if (func_122(iParam0))
		{
		}
		if (func_122(iParam0))
		{
		}
		if (func_125(iParam0, 0, 0))
		{
		}
		if (func_125(iParam0, 1, 0))
		{
		}
		if (func_125(iParam0, 2, 0))
		{
		}
		if (func_124(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_113(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (((unk_0x45A9187928F4B9E3(iParam0) || unk_0xA0948AB42D7BA0DE(iParam0)) || unk_0xDCE4334788AF94EA(iParam0)) || unk_0xAB935175B22E822B(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_114(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x19AAC8F07BFEC53E(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x10FAB35428CCC9D7())) || (iParam0 == joaat("buffalo3") && !unk_0x10FAB35428CCC9D7())) || (iParam0 == joaat("gauntlet2") && !unk_0x10FAB35428CCC9D7())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x10FAB35428CCC9D7())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_119())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xA7A866D21CD2329B())
		{
			if (unk_0x33468EDC08E371F6(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD4D7B033C3AA243C(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_118() && !func_117()) && !func_116()) && !func_115()) && !func_119())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x4D982ADB1978442D() || unk_0x48AF36444B965238()) || unk_0xA72BC0B675B1519E())
		{
		}
		else if (!func_116())
		{
			return 0;
		}
	}
	return 1;
}

int func_115()
{
	return 0;
}

int func_116()
{
	return 1;
}

int func_117()
{
	return 1;
}

int func_118()
{
	if (unk_0x812595A0644CE1DE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_119()
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

int func_120(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x9F47B058362C84B5(iParam0);
	sVar1 = unk_0x7CE1CCB9B293020E(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x0C515FAB3FF9EA92(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_114(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7239B21A38F536BA(Global_87550[iVar0]))
		{
			if (Global_87550[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_122(int iParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(iParam0) && unk_0x4C241E39B23DF959(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7239B21A38F536BA(Global_87520[iVar0]) && unk_0x4C241E39B23DF959(Global_87520[iVar0], false))
			{
				if (Global_87520[iVar0] == iParam0 && unk_0x9F47B058362C84B5(Global_87520[iVar0]) == unk_0x9F47B058362C84B5(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(Global_66960.f_484[24]))
	{
		if (iParam0 == Global_66960.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7239B21A38F536BA(Global_66960.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_66960.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 145;
	}
	if (!unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_87520[iVar0]))
		{
			if (Global_87520[iVar0] == iParam0)
			{
				return Global_87530[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_125(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x7239B21A38F536BA(iParam0) || !unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_126(iParam1, iVar0, &sVar1, &iVar9))
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

int func_126(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_127(int iParam0)
{
	Global_95887.f_22 = iParam0;
}

