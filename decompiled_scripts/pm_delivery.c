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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 3;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 1092616192;
	var uLocal_47 = 1101004800;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 3;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	bool bLocal_75 = 0;
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
	int iLocal_89 = 0;
	int iLocal_90[2] = { 0, 0 };
	int iLocal_93[2] = { 0, 0 };
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99[2] = { 0, 0 };
	var uLocal_102 = 0;
	char* sLocal_103 = NULL;
	char* sLocal_104 = NULL;
	char* sLocal_105 = NULL;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = -1;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 1000;
	var uLocal_116 = 1000;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_85 = -1;
	sLocal_103 = "PMDL_OBJ";
	sLocal_104 = "PMDL_LOC";
	sLocal_105 = "PMDL_BCK";
	unk_0x7E34CF542225E666(1);
	if (unk_0xBCA819F9975BEDFA(3))
	{
		func_131(2);
		func_106();
	}
	iLocal_36 = func_104();
	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (!iLocal_76)
				{
					func_99();
				}
				else
				{
					func_98();
				}
				if (bLocal_75)
				{
					iLocal_77 = 1;
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				if (!func_97())
				{
					switch (iLocal_38)
					{
						case 0:
							func_94();
							break;
						
						case 1:
							if (iLocal_36 == 5 || iLocal_36 == 6)
							{
								func_66();
							}
							else
							{
								func_65();
							}
							break;
						
						case 2:
							func_9();
							if (iLocal_36 < 3)
							{
								func_7();
							}
							else if (iLocal_36 > 6)
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
	func_131(2);
	func_106();
}

void func_2()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iLocal_96))
	{
		if (unk_0x45CD66F0A131E554(iLocal_96, 0))
		{
			iVar0 = 200;
			iVar1 = (unk_0xB5DF060B138CD2EA(iLocal_96) - 800);
			if (unk_0x879A5482D4D7A218(iLocal_96))
			{
				unk_0x4B04B4FAE554FA03(iLocal_96, (unk_0xB5DF060B138CD2EA(iLocal_96) - 5));
			}
			if (iVar1 <= 0)
			{
				iLocal_38 = 4;
			}
			else if (iVar1 < 75)
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 6, 0, 1, 2);
			}
			else
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 1, 0, 1, 2);
			}
		}
		else
		{
			iLocal_38 = 4;
		}
	}
	else
	{
		iLocal_38 = 4;
	}
}

void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
}

void func_4(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
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
		Global_1354542.f_1 = 1;
		func_5(0, iVar0);
		Global_1354542.f_1009[iVar0] = uParam0;
		Global_1354542.f_1009.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1354542.f_1009.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1354542.f_1009.f_194[iVar0] = uParam3;
		Global_1354542.f_1009.f_183[iVar0] = uParam4;
		Global_1354542.f_1009.f_216[iVar0] = uParam5;
		Global_1354542.f_1009.f_227[iVar0 /*3*/] = fParam6;
		Global_1354542.f_1009.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1354542.f_1009.f_258[iVar0] = iParam8;
		Global_1354542.f_1009.f_269[iVar0] = uParam9;
		Global_1354542.f_1009.f_312[iVar0] = iParam10;
		Global_1354542.f_1009.f_323[iVar0] = iParam11;
		Global_1354542.f_1009.f_334[iVar0] = iParam12;
		Global_1354542.f_1009.f_345[iVar0] = iParam13;
		Global_1354542.f_1004 = 1;
		Global_1354542.f_1009.f_356[iVar0] = iParam14;
		Global_1354542.f_1009.f_367[iVar0] = iParam15;
		Global_1354542.f_1009.f_378[iVar0] = iParam16;
		Global_1354542.f_1009.f_389[iVar0] = iParam17;
		Global_1354542.f_1009.f_400[iVar0] = iParam18;
		Global_1354542.f_1009.f_411[iVar0] = iParam19;
		Global_1354542.f_1009.f_422[iVar0] = iParam20;
		Global_1354542.f_1009.f_433[iVar0] = iParam21;
		Global_1354542.f_1009.f_444[iVar0] = iParam22;
		Global_1354542.f_1009.f_455[iVar0] = iParam23;
	}
}

void func_5(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_1354542.f_5703[iParam0]), iParam1);
}

bool func_6(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1354542.f_5703[iParam0], iParam1);
}

void func_7()
{
	int iVar0;
	
	iVar0 = (iLocal_80 - unk_0x94E3E074F38DF86C());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (unk_0x94E3E074F38DF86C() >= iLocal_84)
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iLocal_81)
	{
		case 0:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 10000))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 1:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 9000))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 2:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 8000))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 3:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 7000))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 4:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 6000))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 5:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 5000))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 6:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 4500))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 7:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 4000))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 8:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 3500))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 9:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 3000))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 10:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 2500))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 11:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 2000))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 12:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 1500))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 13:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 1000))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 14:
			if (unk_0x94E3E074F38DF86C() >= (iLocal_80 - 500))
			{
				unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 15:
			if (unk_0x94E3E074F38DF86C() >= iLocal_80)
			{
				unk_0x4988C48537D1AE4F(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 16:
			break;
	}
	if (unk_0x94E3E074F38DF86C() >= iLocal_80)
	{
		iLocal_38 = 3;
	}
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
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
		Global_1354542.f_1 = 1;
		func_5(7, iVar0);
		Global_1354542.f_4282[iVar0] = iParam0;
		StringCopy(&(Global_1354542.f_4282.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354542.f_4282.f_172[iVar0] = iParam2;
		Global_1354542.f_4282.f_216[iVar0] = iParam3;
		Global_1354542.f_4282.f_183[iVar0] = iParam4;
		Global_1354542.f_4282.f_194[iVar0] = iParam5;
		Global_1354542.f_4282.f_249[iVar0] = iParam6;
		Global_1354542.f_4282.f_260[iVar0] = iParam7;
		Global_1354542.f_4282.f_205[iVar0] = iParam8;
		Global_1354542.f_4282.f_314[iVar0] = iParam9;
		Global_1354542.f_4282.f_325[iVar0] = iParam10;
		Global_1354542.f_4282.f_357[iVar0] = iParam11;
		Global_1354542.f_4282.f_238[iVar0] = iParam12;
		Global_1354542.f_4282.f_271[iVar0] = iParam13;
		Global_1354542.f_4282.f_368[iVar0] = iParam14;
		Global_1354542.f_4282.f_379[iVar0] = iParam15;
		Global_1354542.f_4282.f_390[iVar0] = iParam16;
	}
}

void func_9()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_93)
		{
			if (!iLocal_78)
			{
				if (!unk_0xCA41A00932714525(iLocal_93[iVar0]))
				{
					if (!unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_64, 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0x2B46008B9EA5E05B(unk_0xBE369BE1BC57A796(), 2, 0);
						unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
						unk_0x4361500C7F56A212(unk_0xBE369BE1BC57A796(), 0f);
						iLocal_78 = 1;
					}
				}
			}
			else if (!unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
			{
				if (!unk_0xCA41A00932714525(iLocal_93[iVar0]))
				{
					unk_0xCA58071CE9CCE891(iLocal_93[iVar0], unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
					unk_0x650BB0E111420EAF(iLocal_93[iVar0], 1);
					unk_0x6500ADB01E821BC0(&(iLocal_93[iVar0]));
				}
				if (unk_0x23E9113C762466ED(uLocal_97))
				{
					unk_0x921CF98C637B0043(&iLocal_97);
				}
			}
			iVar0++;
		}
	}
	if (func_21(&uLocal_39, Local_67, Global_22, 1, iLocal_96, sLocal_104, "", sLocal_105, 1, 0, 1, -1))
	{
		func_19(iLocal_96, 10.5f, 2, 1056964608, 0, 1, 0);
		unk_0x83150B7E65C16AFE(unk_0x17B5CC8A8615737D(), 2000, 0);
		unk_0x4F94FF48185A8B4B(iLocal_96, 0);
		func_14(&uLocal_39, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_90)
	{
		if (!unk_0xCA41A00932714525(iLocal_90[iVar1]))
		{
			if (!unk_0xA3794949321E107C(uLocal_99[iVar1]))
			{
				uLocal_99[iVar1] = func_10(iLocal_90[iVar1], 1, 145);
				unk_0x86DD54980FE55567(&uLocal_120);
				unk_0x83150B7E65C16AFE(0, 0, 0);
				unk_0x7DD7196E1A0C1D43(0, unk_0x17B5CC8A8615737D(), 0, 16);
				unk_0x007AE2AA9E15FA7B(uLocal_120);
				unk_0x00E85C3B3BD34B10(iLocal_90[iVar1], uLocal_120);
				unk_0x08377FB2AE4C6899(&uLocal_120);
				unk_0x650BB0E111420EAF(iLocal_90[iVar1], 1);
			}
			if (!unk_0x4E84D2C9B54F79BA(iLocal_90[iVar1], unk_0x17B5CC8A8615737D(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (unk_0xA3794949321E107C(uLocal_99[iVar1]))
				{
					unk_0x020DF7300725ECAB(&(uLocal_99[iVar1]));
				}
				unk_0xCA58071CE9CCE891(iLocal_90[iVar1], unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
				unk_0x650BB0E111420EAF(iLocal_90[iVar1], 1);
				unk_0x6500ADB01E821BC0(&(iLocal_90[iVar1]));
			}
		}
		else if (unk_0xA3794949321E107C(uLocal_99[iVar1]))
		{
			unk_0x020DF7300725ECAB(&(uLocal_99[iVar1]));
		}
		iVar1++;
	}
}

var func_10(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_11(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA3794949321E107C(uVar0)) && unk_0x63A528817609801B(&(Global_101700.f_27009[iParam2 /*29*/].f_3)))
	{
		unk_0xAAF15482D9DB27D9(uVar0, &(Global_101700.f_27009[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x23E9113C762466ED(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF1FE04D602EA392E(iParam0);
	if (unk_0x3983CCB0D958159C(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_12(unk_0x63C468D583002D23(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
		}
		else
		{
			unk_0xCC930AE12D020496(uVar0, 2);
		}
	}
	else if (unk_0x80E9CA64E9C8E070(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_12(unk_0x63C468D583002D23(), 0.7f, 0.7f));
		unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
	}
	else if (unk_0x1461B0B259D86067(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_12(unk_0x63C468D583002D23(), 0.7f, 0.7f));
	}
	return uVar0;
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
	func_131(1);
	func_106();
}

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x48B8265059381CD0(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_18(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
		{
			unk_0x020DF7300725ECAB(&(uParam0->f_1[iVar0]));
		}
		func_17(iVar0, uParam0);
		func_16(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x21E7933CCC7B3724(&(uParam0->f_13), iVar0);
			unk_0x21E7933CCC7B3724(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xA3794949321E107C(*uParam0))
	{
		unk_0x020DF7300725ECAB(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
		{
			unk_0xFB616ABA635A95B3(uParam0->f_17[iVar0], 1);
			unk_0xEABCB9D3B3CDC77E(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x6018E338F7ABCE75(uParam0->f_17[iVar0], 32, 1);
				unk_0x6018E338F7ABCE75(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x6018E338F7ABCE75(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_15()) && uParam0->f_17[iVar0] != unk_0x17B5CC8A8615737D())
				{
					unk_0xFB2D342CDD441DD9(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0x48B8265059381CD0(uParam0->f_13, 29))
			{
				unk_0xE2D8919DE58194D4(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		unk_0xFB616ABA635A95B3(unk_0x17B5CC8A8615737D(), 1);
		unk_0xEABCB9D3B3CDC77E(unk_0x17B5CC8A8615737D(), 1);
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (bParam2)
		{
			unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_15()
{
	return unk_0xDC8370280C455166(unk_0x592069F95C314814());
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x21E7933CCC7B3724(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x21E7933CCC7B3724(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x21E7933CCC7B3724(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x21E7933CCC7B3724(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x21E7933CCC7B3724(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x21E7933CCC7B3724(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0)
{
	if (unk_0xA3794949321E107C(uParam0->f_5))
	{
		unk_0x020DF7300725ECAB(&(uParam0->f_5));
	}
}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xD1BB2AD73E7FC3A7(0, 71, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 72, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 76, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 73, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 59, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 60, 1);
	if (bParam5)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 75, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
	if (!bParam6)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 69, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 70, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 68, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 74, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 86, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 81, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 82, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 138, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 136, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 114, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 107, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 110, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 87, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 88, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 113, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 115, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 116, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 117, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 118, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 119, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 131, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 132, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 123, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 126, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 129, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 130, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 133, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 134, 1);
	unk_0xA07E0C7D04CFDAC7();
	func_20(iParam0);
	if ((unk_0x94E3E074F38DF86C() - Global_29) > 500)
	{
		unk_0xEEA9C8F490BB3507(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x94E3E074F38DF86C();
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		if (unk_0xE851F22ED3518011(unk_0x13B7ACE69D27E3E4(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_20(var uParam0)
{
	if (unk_0x2A0DB8BAFA0BA9B1(uParam0))
	{
		if (unk_0x877E4C9DCF0BC909(uParam0))
		{
			unk_0x84563853ACCAC2B6(uParam0, 0);
		}
	}
}

bool func_21(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_22(uParam0, Param1, Param4, func_64(), func_64(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_63(), func_63(), func_63(), func_63(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_22(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, int iParam36)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_62(uParam0);
	func_61(uParam0);
	func_60();
	if (func_44(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_43(sParam20);
		func_43(sParam21);
		func_43(sParam22);
		func_43(sParam23);
		if (unk_0x30F06AB0772AFB80())
		{
			bVar1 = false;
			if (unk_0x45CD66F0A131E554(iParam18, 0))
			{
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam18, 0))
				{
					unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 3);
					if (!unk_0x48B8265059381CD0(uParam0->f_13, 9))
					{
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 4);
					}
					if (unk_0x48B8265059381CD0(uParam0->f_13, 23))
					{
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 23);
					}
					unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_41(uParam0, iParam29))
				{
					unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 3);
					if (!unk_0x48B8265059381CD0(uParam0->f_13, 9))
					{
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 4);
					}
					unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_43(sParam24);
				func_43(sParam27);
				func_43("MORE_SEATS");
				if (bParam26 && unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
				{
					if (unk_0xA3794949321E107C(uParam0->f_5))
					{
						unk_0x020DF7300725ECAB(&(uParam0->f_5));
						func_43(sParam19);
					}
					if (unk_0xA3794949321E107C(*uParam0))
					{
						unk_0x020DF7300725ECAB(uParam0);
					}
					if ((!func_37(uParam0, 1) && !func_36(uParam0)) && !unk_0x48B8265059381CD0(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xCA41A00932714525(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 0);
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x48B8265059381CD0(uParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 0);
						unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 1);
					}
					if (unk_0x48B8265059381CD0(uParam0->f_13, 1))
					{
						if (!func_37(uParam0, 1))
						{
							if (!unk_0xCA41A00932714525(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x21E7933CCC7B3724(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0xA3794949321E107C(uParam0->f_5))
					{
						if (unk_0xA3794949321E107C(*uParam0))
						{
							unk_0x020DF7300725ECAB(uParam0);
						}
						uParam0->f_5 = func_31(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xA0BCCD5C2B5FC84F(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_30(uParam0->f_5, uParam0);
						}
					}
					else if (!func_29(Var3, unk_0xCC1DFCD030782230(uParam0->f_5), 0.1f, 0))
					{
						unk_0xC106C8D8B1488032(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_30(uParam0->f_5, uParam0);
						}
					}
					if (!func_37(uParam0, 2))
					{
						if (!unk_0x48B8265059381CD0(uParam0->f_13, 2))
						{
							func_34(uParam0, sParam19, 0);
							unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0x48B8265059381CD0(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
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
						unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0xCA41A00932714525(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
									if (!unk_0x2315BB1606BC3DC3(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x2315BB1606BC3DC3(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar2], func_15()) || !func_27(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_24(uParam0))
							{
								func_43(sParam19);
								func_43(sParam24);
								func_43(sParam20);
								func_43(sParam21);
								func_43(sParam22);
								func_43(sParam23);
								func_43("LOSE_WANTED");
								func_43("MORE_SEATS");
								func_43(sParam27);
								func_14(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x23E9113C762466ED(iParam18))
			{
				if ((bParam26 && unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0)) && (!unk_0x48B8265059381CD0(uParam0->f_13, 9) && !unk_0x48B8265059381CD0(uParam0->f_13, 22)))
				{
					func_43(sParam24);
					func_43(sParam27);
					if (unk_0xA3794949321E107C(uParam0->f_5) || unk_0xA3794949321E107C(*uParam0))
					{
						unk_0x020DF7300725ECAB(&(uParam0->f_5));
						unk_0x020DF7300725ECAB(uParam0);
						func_43(sParam19);
					}
					if ((!func_37(uParam0, 1) && !func_36(uParam0)) && !unk_0x48B8265059381CD0(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xCA41A00932714525(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 0);
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x48B8265059381CD0(uParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0x21E7933CCC7B3724(&(uParam0->f_13), 0);
						unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 1);
					}
					if (unk_0x48B8265059381CD0(uParam0->f_13, 1))
					{
						if (!func_37(uParam0, 1))
						{
							if (!unk_0xCA41A00932714525(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x21E7933CCC7B3724(&(uParam0->f_13), 1);
						}
					}
					if (unk_0x45CD66F0A131E554(iParam18, 0))
					{
						if (!unk_0xA3794949321E107C(*uParam0))
						{
							if (unk_0xA3794949321E107C(uParam0->f_5))
							{
								unk_0x020DF7300725ECAB(&(uParam0->f_5));
								func_43(sParam19);
							}
							*uParam0 = func_23(iParam18, 0, 0);
							unk_0x8E5BEC1151739D19(*uParam0, 2);
							if (!unk_0x48B8265059381CD0(uParam0->f_13, 4))
							{
								func_30(*uParam0, uParam0);
							}
						}
						if (!func_37(uParam0, 2))
						{
							if (!unk_0x48B8265059381CD0(uParam0->f_13, 3))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 3);
								unk_0x21E7933CCC7B3724(&(uParam0->f_13), 4);
							}
							else if (unk_0x48B8265059381CD0(uParam0->f_13, 9))
							{
								if (!unk_0xD3115E7F7876D6E6(sParam27))
								{
									if (!unk_0x48B8265059381CD0(uParam0->f_13, 4))
									{
										func_34(uParam0, sParam27, 0);
										unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0x48B8265059381CD0(uParam0->f_13, 4))
								{
									func_34(uParam0, sParam24, 0);
									unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 4);
								}
								if (!unk_0x48B8265059381CD0(uParam0->f_13, 23))
								{
									if (!unk_0xCA41A00932714525(uParam0->f_17[0]))
									{
										func_32(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xA3794949321E107C(uParam0->f_5))
				{
					unk_0x020DF7300725ECAB(&(uParam0->f_5));
					func_43(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_37(uParam0, 2))
						{
							if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
							{
								if (!unk_0x48B8265059381CD0(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0xCA41A00932714525(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x0E29C61F26D96FDB(0, iVar8);
									if (!unk_0xCA41A00932714525(uParam0->f_17[iVar9]))
									{
										func_32(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_34(uParam0, "MORE_SEATS", 0);
									unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0x48B8265059381CD0(uParam0->f_13, 3))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 3);
								unk_0x21E7933CCC7B3724(&(uParam0->f_13), 4);
							}
							else if (!unk_0x48B8265059381CD0(uParam0->f_13, 4))
							{
								if (unk_0x48B8265059381CD0(uParam0->f_13, 9))
								{
									func_34(uParam0, sParam27, 0);
									unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_37(uParam0, 2))
					{
						if (!unk_0x48B8265059381CD0(uParam0->f_13, 3))
						{
							func_34(uParam0, sParam24, 0);
							unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 3);
							unk_0x21E7933CCC7B3724(&(uParam0->f_13), 4);
						}
						else if (unk_0x48B8265059381CD0(uParam0->f_13, 9))
						{
							if (!unk_0xD3115E7F7876D6E6(sParam27))
							{
								if (!unk_0x48B8265059381CD0(uParam0->f_13, 4))
								{
									func_34(uParam0, sParam27, 0);
									unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0x48B8265059381CD0(uParam0->f_13, 4))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x48B8265059381CD0(uParam0->f_13, 0))
		{
			unk_0x21E7933CCC7B3724(&(uParam0->f_13), 0);
		}
		func_43(sParam19);
		func_43(sParam24);
		func_43(sParam27);
		func_43(sParam24);
		func_43("LOSE_WANTED");
		if (unk_0xA3794949321E107C(uParam0->f_5))
		{
			unk_0x020DF7300725ECAB(&(uParam0->f_5));
		}
		if (unk_0xA3794949321E107C(*uParam0))
		{
			unk_0x020DF7300725ECAB(uParam0);
		}
	}
	unk_0x21E7933CCC7B3724(&(uParam0->f_13), 11);
	unk_0x21E7933CCC7B3724(&(uParam0->f_13), 12);
	return 0;
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_24(var uParam0)
{
	if (unk_0x48B8265059381CD0(uParam0->f_13, 12))
	{
		if (func_26(unk_0x17B5CC8A8615737D()))
		{
			if (func_25(1, 0, 1) || unk_0x48B8265059381CD0(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_25(1, 0, 1) || unk_0x48B8265059381CD0(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_25(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xBDEC9B948A62578A())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
		{
			return 0;
		}
		iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (bParam0)
		{
			if (unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				if (unk_0x17206B315923243C(iVar0, -1, 0) != unk_0x17B5CC8A8615737D())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0x2BB7527A68E10019(iVar0) < 0.95f || unk_0x2BB7527A68E10019(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (!unk_0xD37F3675F4465D41(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)
{
	float fVar0;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		fVar0 = unk_0x13B7ACE69D27E3E4(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()) && iParam1)
		{
			if (func_28(unk_0x17B5CC8A8615737D(), iParam0))
			{
				unk_0x79530D3E0E0D8259(func_15(), 50f);
				return 1;
			}
		}
		else if (unk_0x143230304C45DBF3(iParam0, func_15()))
		{
			unk_0x79530D3E0E0D8259(func_15(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (unk_0xD035C652F0986F10(iParam0))
		{
			iVar0 = unk_0x60604E51E30D25B8(iParam0, 0);
			if (unk_0x45CD66F0A131E554(iVar0, 0))
			{
				if (!unk_0xCA41A00932714525(iParam1))
				{
					if (unk_0x7B816C72877502C5(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_29(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE851F22ED3518011((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_30(var uParam0, var uParam1)
{
	if (unk_0xA3794949321E107C(uParam0))
	{
		if (unk_0xA3794949321E107C(uParam1->f_6))
		{
			unk_0x5ACBCE67F0494242(uParam1->f_6, 0);
		}
		unk_0xAB47D4636B324239(0);
		unk_0x527330BECBB9D9CD();
		uParam1->f_6 = uParam0;
		unk_0x5ACBCE67F0494242(uParam0, 1);
	}
}

var func_31(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x9213703D695C6A7A(Param0);
	unk_0x00EA14207118EEE2(uVar0, func_12(unk_0x63C468D583002D23(), 1f, 1f));
	unk_0x5ACBCE67F0494242(uVar0, iParam3);
	return uVar0;
}

void func_32(var uParam0, char* sParam1, int iParam2)
{
	unk_0xE4C6605BC74297B4(uParam0, sParam1, func_33(iParam2), 1);
}

int func_33(int iParam0)
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

void func_34(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xD3115E7F7876D6E6(sParam1))
		{
			if (!unk_0x6A7B0D91FD88D9EE(sParam1, ""))
			{
				func_35(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x94E3E074F38DF86C();
}

void func_35(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7F755B97D75D9B44(sParam0);
	unk_0x6EBC181C75DC822D(iParam1, 1);
}

int func_36(var uParam0)
{
	if (!unk_0xCA41A00932714525(uParam0->f_16))
	{
		if (unk_0x872115A210435770(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_37(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xDA5E060432EE0B26())
	{
		if (unk_0x75342B3CD0FB5275())
		{
			return 1;
		}
		if (func_40(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xDA5E060432EE0B26())
	{
		if (func_39() && !func_38())
		{
			return 1;
		}
	}
	return 0;
}

int func_38()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

int func_39()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x94E3E074F38DF86C();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_41(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (func_42(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_42(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x23E9113C762466ED(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x58060A1B26EA2597(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x4325876506543E89(iParam0, 1))
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
				if (!unk_0x4325876506543E89(iParam0, 1))
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

void func_43(char* sParam0)
{
	if (!unk_0xD3115E7F7876D6E6(sParam0))
	{
		unk_0x69E47427C5084888(sParam0);
	}
}

int func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
	var uVar24;
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
		if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
		{
			if (!unk_0x48B8265059381CD0(uParam0->f_13, 29) && !unk_0x48B8265059381CD0(uParam0->f_13, 28))
			{
				if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
				{
					unk_0xE2D8919DE58194D4(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0x48B8265059381CD0(uParam0->f_13, 29) && unk_0x48B8265059381CD0(uParam0->f_13, 28))
		{
			if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
			{
				unk_0xE2D8919DE58194D4(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x21E7933CCC7B3724(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0x48B8265059381CD0(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x23E9113C762466ED(uParam0->f_21))
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
			uVar24 = unk_0xCE499B0B1C2F5684(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 50f, 0, iVar25);
			if (unk_0x45CD66F0A131E554(uVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x45CD66F0A131E554(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
				{
					if (!unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0) || !bParam17)
					{
						if (func_42(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
								{
									unk_0x7B0D34D6C9709C7A(uParam0->f_17[iVar0], 1f);
									if (unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_15()))
									{
										unk_0xFB2D342CDD441DD9(uParam0->f_17[iVar0]);
									}
									if (unk_0x1F8F07D86DA1A701(uParam0->f_17[iVar0], -1794415470) == 7 && !func_59(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x7F4AE93855973529(uParam0->f_17[iVar0]) && !unk_0x7276DD47CA44085D(uParam0->f_17[iVar0]))
										{
											unk_0xCC61640A821F277C(uParam0->f_17[iVar0], 1);
											unk_0x3AD5401AC8DD9226(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x346D6A5BC2F879E2(uParam0->f_17[iVar0], iVar0);
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
			unk_0x21E7933CCC7B3724(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
				{
					if (!unk_0x9172DCBCA2E183EC(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x15848523A8959DBC(uParam0->f_17[iVar0]);
					}
					if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_15()))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0xD25D00F8613DE69F(uParam0->f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0x48B8265059381CD0(uParam0->f_13, 26))
	{
		if ((!func_56(uParam0) && unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D())) && !unk_0x23E9113C762466ED(iParam10))
		{
			iVar13 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if (unk_0x45CD66F0A131E554(iVar13, 0))
			{
				if (!unk_0x48B8265059381CD0(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_37(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x0E29C61F26D96FDB(0, iVar26);
						if (!unk_0xCA41A00932714525(uParam0->f_17[iVar27]))
						{
							func_32(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_34(uParam0, "MORE_SEATS", 0);
						unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x21E7933CCC7B3724(&(uParam0->f_13), 13);
			func_43("MORE_SEATS");
		}
		if (!unk_0x23E9113C762466ED(iParam10))
		{
			if ((!unk_0xCA41A00932714525(uParam0->f_17[0]) || !unk_0xCA41A00932714525(uParam0->f_17[1])) || !unk_0xCA41A00932714525(uParam0->f_17[2]))
			{
				if (!unk_0x48B8265059381CD0(uParam0->f_13, 31))
				{
					if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()) && !func_37(uParam0, 2))
					{
						iVar13 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
						if (func_55(iVar13, uParam0))
						{
							func_34(uParam0, "CMN_VEHSUIT", 0);
							unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
				{
					unk_0x21E7933CCC7B3724(&(uParam0->f_13), 31);
					func_43("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x45CD66F0A131E554(iParam10, 0))
		{
			if (unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), iParam10))
			{
				if (unk_0x4B972043966C2EB8(0, 75))
				{
					unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0x48B8265059381CD0(uParam0->f_13, 21))
			{
				unk_0x21E7933CCC7B3724(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x23E9113C762466ED(uParam0->f_17[iVar0]))
			{
				if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
				{
					if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_15()))
					{
						unk_0x2BFFCC859E7DDFFF(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x2BFFCC859E7DDFFF(uParam0->f_17[iVar0], 0);
					}
					if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
					{
						iVar13 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
						if (unk_0x45CD66F0A131E554(iVar13, 0))
						{
							if (unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_15()))
							{
								if (!func_56(uParam0) && unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
								{
									if (!func_54(uParam0->f_17[iVar0]))
									{
										unk_0xFB2D342CDD441DD9(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0xA929B2923D14E2F8(iVar13, 0))
						{
							if (unk_0x7B816C72877502C5(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xA77EE6C138A588EB(iVar13) && !unk_0x4950AAD2A16D6B22(iVar13))
								{
									Var28 = { unk_0x57240623C1BC6E88(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x335F081010BB7A76(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_15()))
					{
						if (unk_0xD035C652F0986F10(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x60604E51E30D25B8(uParam0->f_17[iVar0], 0);
							if (!unk_0xA929B2923D14E2F8(iVar13, 0))
							{
								if (unk_0x45CD66F0A131E554(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), iVar13))
										{
											if (unk_0x13B7ACE69D27E3E4(iVar13) > 5f)
											{
												unk_0x335F081010BB7A76(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x335F081010BB7A76(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
									{
										iVar31 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
									}
									if (unk_0x45CD66F0A131E554(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x13B7ACE69D27E3E4(iVar13) > 5f)
											{
												unk_0x335F081010BB7A76(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x335F081010BB7A76(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_15()))
					{
						iVar32 = unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D());
						if (unk_0x23E9113C762466ED(iVar32))
						{
							if (func_42(iVar32, uParam0, 0))
							{
								if (func_53(iVar0, uParam0) || !unk_0x48B8265059381CD0(uParam0->f_13, 27))
								{
									unk_0x346D6A5BC2F879E2(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_53(iVar0, uParam0))
							{
								if (unk_0x0324EEB10F81965F(iVar32) == joaat("sentinel2"))
								{
									unk_0x346D6A5BC2F879E2(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x346D6A5BC2F879E2(uParam0->f_17[iVar0], 2);
								}
								func_52(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_15()) && !func_51(uParam0->f_17[iVar0], iParam10)) && !func_50(uParam0->f_17[iVar0], iParam10))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_15()))
							{
								if (((!unk_0x7F4AE93855973529(uParam0->f_17[iVar0]) && !unk_0x7276DD47CA44085D(uParam0->f_17[iVar0])) && !unk_0x53E28743D432E98F(uParam0->f_17[iVar0])) && !unk_0x9172DCBCA2E183EC(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x1F8F07D86DA1A701(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0x15848523A8959DBC(uParam0->f_17[iVar0]);
									}
									unk_0xD25D00F8613DE69F(uParam0->f_17[iVar0], func_15());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x94E3E074F38DF86C();
								uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
								unk_0x8E5BEC1151739D19(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_30(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
					{
						if (((func_27(uParam0->f_17[iVar0], 1) || func_51(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x45CD66F0A131E554(iParam10, 0) && !unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam10, 0)))
						{
							if (unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
							{
								unk_0x020DF7300725ECAB(&(uParam0->f_1[iVar0]));
								func_43(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_30(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0x45CD66F0A131E554(iParam10, 0))
					{
						if (!unk_0x7B816C72877502C5(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x4E84D2C9B54F79BA(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0x48B8265059381CD0(uParam0->f_13, 11)) && !((bParam17 && unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0)) && !unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam10, 0)))
							{
								if (unk_0xD035C652F0986F10(uParam0->f_17[iVar0]))
								{
									if (!unk_0x2315BB1606BC3DC3(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_27(uParam0->f_17[iVar0], 1))
										{
											if (func_26(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x1F8F07D86DA1A701(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x83150B7E65C16AFE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_15()))
									{
										if ((((!unk_0x53E28743D432E98F(uParam0->f_17[iVar0]) && !unk_0x7F4AE93855973529(uParam0->f_17[iVar0])) && !unk_0x7276DD47CA44085D(uParam0->f_17[iVar0])) && !unk_0x9172DCBCA2E183EC(uParam0->f_17[iVar0])) && !unk_0x03767DFC5EE2B0C6(iParam10))
										{
											unk_0xFB2D342CDD441DD9(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x1F8F07D86DA1A701(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_59(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x53E28743D432E98F(uParam0->f_17[iVar0]) && !unk_0x53E28743D432E98F(unk_0x17B5CC8A8615737D())) && !func_49(uParam0->f_17[iVar0], 2f)) && !unk_0x7F4AE93855973529(uParam0->f_17[iVar0])) && !unk_0x7276DD47CA44085D(uParam0->f_17[iVar0])) && !unk_0x03767DFC5EE2B0C6(iParam10))
										{
											unk_0xCC61640A821F277C(uParam0->f_17[iVar0], 1);
											if (unk_0x48B8265059381CD0(uParam0->f_13, 10))
											{
												unk_0x7B0D34D6C9709C7A(uParam0->f_17[iVar0], 1f);
											}
											unk_0x3AD5401AC8DD9226(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x5E36942B3AE4C67F(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
										unk_0x8E5BEC1151739D19(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_15()))
							{
								if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x7F4AE93855973529(uParam0->f_17[iVar0]) && !unk_0x7276DD47CA44085D(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x1F8F07D86DA1A701(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0x15848523A8959DBC(uParam0->f_17[iVar0]);
										}
										unk_0xCC61640A821F277C(uParam0->f_17[iVar0], 0);
										unk_0xD25D00F8613DE69F(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), iParam10))
						{
							if (!unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_15()))
							{
								if (!unk_0x48B8265059381CD0(uParam0->f_13, 21))
								{
									unk_0xD25D00F8613DE69F(uParam0->f_17[iVar0], func_15());
								}
							}
							else if (unk_0x48B8265059381CD0(uParam0->f_13, 21))
							{
								unk_0xFB2D342CDD441DD9(uParam0->f_17[iVar0]);
								unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x143230304C45DBF3(uParam0->f_17[iVar0], func_15()) && !unk_0x03767DFC5EE2B0C6(iParam10))
						{
							unk_0xFB2D342CDD441DD9(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
				{
					unk_0x020DF7300725ECAB(&(uParam0->f_1[iVar0]));
					func_43(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_37(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
						{
							if (func_54(uParam0->f_17[iVar0]) || unk_0x4E84D2C9B54F79BA(uParam0->f_17[iVar0], unk_0x17B5CC8A8615737D(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
					{
						if (!unk_0x4E84D2C9B54F79BA(uParam0->f_17[iVar0], unk_0x17B5CC8A8615737D(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_54(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x94E3E074F38DF86C();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0x48B8265059381CD0(uParam0->f_13, 5))
							{
								func_34(uParam0, sParam7, 0);
								unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 5);
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
									if (!func_48(iVar0, uParam0))
									{
										if (!unk_0xD3115E7F7876D6E6(uVar19[iVar0]))
										{
											if (!unk_0x6A7B0D91FD88D9EE(uVar19[iVar0], ""))
											{
												func_46(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_45(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_48(iVar0, uParam0))
										{
											func_34(uParam0, uVar15[iVar0], 0);
											func_45(iVar0, uParam0);
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
		unk_0x21E7933CCC7B3724(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xA3794949321E107C(uParam0->f_1[iVar0]))
				{
					unk_0x020DF7300725ECAB(&(uParam0->f_1[iVar0]));
					func_43(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_43("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_45(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xEB79FECD9022AAF0(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xEB79FECD9022AAF0(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xEB79FECD9022AAF0(&(uParam1->f_13), 16);
			break;
	}
}

void func_46(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xD3115E7F7876D6E6(sParam1))
		{
			if (!unk_0x6A7B0D91FD88D9EE(sParam1, ""))
			{
				func_47(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x94E3E074F38DF86C();
}

void func_47(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x7F755B97D75D9B44(sParam0);
	unk_0x34D84D73B5DF8E80(uParam1);
	unk_0x6EBC181C75DC822D(iParam2, 1);
}

int func_48(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x48B8265059381CD0(uParam1->f_13, 14);
		
		case 1:
			return unk_0x48B8265059381CD0(uParam1->f_13, 15);
		
		case 2:
			return unk_0x48B8265059381CD0(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_49(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0xFD0FE723227D5AB6(iParam0, 0))
	{
		iVar0 = unk_0x60604E51E30D25B8(iParam0, 0);
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0x13B7ACE69D27E3E4(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (!unk_0x143230304C45DBF3(iParam0, func_15()))
		{
			iVar0 = unk_0xF566689615D97192(iParam0);
			if (unk_0x45CD66F0A131E554(iParam1, 0))
			{
				if (unk_0x4E84D2C9B54F79BA(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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

int func_51(int iParam0, int iParam1)
{
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (unk_0x23E9113C762466ED(iParam1))
		{
			if (unk_0x45CD66F0A131E554(iParam1, 0))
			{
				if (unk_0x7B816C72877502C5(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_52(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xEB79FECD9022AAF0(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xEB79FECD9022AAF0(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xEB79FECD9022AAF0(&(uParam1->f_13), 19);
			break;
	}
}

int func_53(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x48B8265059381CD0(uParam1->f_13, 17);
		
		case 1:
			return unk_0x48B8265059381CD0(uParam1->f_13, 18);
		
		case 2:
			return unk_0x48B8265059381CD0(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		iVar0 = unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D());
		if (unk_0x45CD66F0A131E554(iVar0, 0))
		{
			if (!unk_0xCA41A00932714525(iParam0))
			{
				iVar1 = unk_0xFD05A5AA90984873(iParam0);
				if (unk_0x45CD66F0A131E554(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x4E84D2C9B54F79BA(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_55(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		if (unk_0x0324EEB10F81965F(iParam0) == joaat("bus") || unk_0x0324EEB10F81965F(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0xCA41A00932714525(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x17206B315923243C(iParam0, 0, 0);
			if (!unk_0xCA41A00932714525(iVar3))
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
			iVar4 = unk_0x17206B315923243C(iParam0, 1, 0);
			if (!unk_0xCA41A00932714525(iVar4))
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
			iVar5 = unk_0x17206B315923243C(iParam0, 2, 0);
			if (!unk_0xCA41A00932714525(iVar5))
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

int func_56(var uParam0)
{
	var uVar0;
	
	if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
	{
		uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (func_42(uVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_57(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	var uVar0;
	
	if (!unk_0xCA41A00932714525(iParam1))
	{
		if (unk_0xD035C652F0986F10(iParam1))
		{
			uVar0 = unk_0x60604E51E30D25B8(iParam1, 0);
			if (!unk_0xA929B2923D14E2F8(uVar0, 0))
			{
				if (unk_0x45CD66F0A131E554(iVar0, 0))
				{
					if (unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), iVar0))
					{
						if (func_56(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D());
				if (unk_0x23E9113C762466ED(iVar0))
				{
					if (func_42(iVar0, uParam0, 0))
					{
						if (unk_0x45CD66F0A131E554(iVar0, 0))
						{
							if (func_58(iVar0))
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

int func_58(int iParam0)
{
	float fVar0;
	
	if (!unk_0xA929B2923D14E2F8(uParam0, 0))
	{
		fVar0 = unk_0x13B7ACE69D27E3E4(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xCA41A00932714525(uParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam1, 0))
		{
			iVar0 = unk_0xFD05A5AA90984873(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_60()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		iVar0 = unk_0xF566689615D97192(unk_0x17B5CC8A8615737D());
		if (unk_0x45CD66F0A131E554(iVar0, 0))
		{
			iVar1 = unk_0x17206B315923243C(iVar0, 0, 0);
			if (!unk_0xCA41A00932714525(iVar1))
			{
				if (iVar1 != unk_0x17B5CC8A8615737D())
				{
					if (unk_0xC26429B504BA534D(iVar1))
					{
						if (!unk_0x3D6623406E6D16C8(iVar1, unk_0x17B5CC8A8615737D()))
						{
							unk_0x4718A774D9248520(iVar1, unk_0x17B5CC8A8615737D(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_61(var uParam0)
{
	int iVar0;
	
	if (!unk_0x48B8265059381CD0(uParam0->f_13, 25))
	{
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x23E9113C762466ED(uParam0->f_17[iVar0]))
			{
				if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
				{
					unk_0x6018E338F7ABCE75(uParam0->f_17[iVar0], 32, 0);
					unk_0x6018E338F7ABCE75(uParam0->f_17[iVar0], 305, 1);
					unk_0x6018E338F7ABCE75(uParam0->f_17[iVar0], 268, 1);
					unk_0x5E36942B3AE4C67F(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xEB79FECD9022AAF0(&(uParam0->f_13), 25);
	}
}

void func_62(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x23E9113C762466ED(uParam0->f_17[iVar0]))
		{
			if (!unk_0xCA41A00932714525(uParam0->f_17[iVar0]))
			{
				if (unk_0xD035C652F0986F10(uParam0->f_17[iVar0]))
				{
					unk_0xFB616ABA635A95B3(uParam0->f_17[iVar0], 0);
					unk_0xEABCB9D3B3CDC77E(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
			{
				unk_0xFB616ABA635A95B3(unk_0x17B5CC8A8615737D(), 0);
				unk_0xEABCB9D3B3CDC77E(unk_0x17B5CC8A8615737D(), 0);
			}
		}
	}
}

var func_63()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_64()
{
	struct<3> Var0;
	
	return Var0;
}

void func_65()
{
	int iVar0;
	
	if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_96, 0))
	{
		if (unk_0xA3794949321E107C(uLocal_102))
		{
			unk_0x020DF7300725ECAB(&uLocal_102);
		}
		if (iLocal_36 <= 2)
		{
			iLocal_80 = (unk_0x1C4276E44E12611D() * ((60 * iLocal_82) + iLocal_83));
			iLocal_80 = (iLocal_80 + unk_0x94E3E074F38DF86C());
			iLocal_84 = (iLocal_80 - unk_0x1C4276E44E12611D() * 30);
		}
		else if (iLocal_36 > 6)
		{
			iLocal_80 = (unk_0x1C4276E44E12611D() * ((60 * iLocal_82) + iLocal_83));
			iLocal_80 = (iLocal_80 + unk_0x94E3E074F38DF86C());
			iLocal_84 = (iLocal_80 - unk_0x1C4276E44E12611D() * 30);
		}
		else if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			iLocal_97 = unk_0x692A2891A2BA7352(iLocal_89, Local_70, fLocal_74, 1, 1);
			iLocal_93[0] = unk_0x3FBC0964EB7878AF(iLocal_97, 6, iLocal_87, -1, 1, 1);
			iLocal_93[1] = unk_0x3FBC0964EB7878AF(iLocal_97, 6, iLocal_87, 0, 1, 1);
			unk_0x1EF7A8224AE81790("rghCop", &uLocal_118);
			unk_0xDE574EA7A7A2CAF8(4, uLocal_118, joaat("player"));
			unk_0xC96275575DC981A9(iLocal_93[0], 39, 1);
			unk_0xC96275575DC981A9(iLocal_93[1], 39, 1);
			iVar0 = 0;
			while (iVar0 < iLocal_93)
			{
				unk_0xC1B7B5C6FDC0755B(iLocal_93[iVar0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x9593ABA7B045F264(iLocal_93[iVar0], 100f);
				unk_0x3BB70315907D9456(iLocal_93[iVar0], uLocal_118);
				iVar0++;
			}
		}
		iLocal_38 = 2;
	}
}

void func_66()
{
	int iVar0;
	
	if (!unk_0xA929B2923D14E2F8(iLocal_96, 0))
	{
		if (func_93() || unk_0xCA41A00932714525(iLocal_90[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_90)
			{
				if (!unk_0xCA41A00932714525(iLocal_90[iVar0]))
				{
					if (!unk_0xA3794949321E107C(uLocal_99[iVar0]))
					{
						uLocal_99[iVar0] = func_10(iLocal_90[iVar0], 1, 145);
						unk_0xC96275575DC981A9(iLocal_90[iVar0], 1, 0);
						unk_0x86DD54980FE55567(&uLocal_120);
						unk_0x83150B7E65C16AFE(0, 0, 0);
						unk_0x7DD7196E1A0C1D43(0, unk_0x17B5CC8A8615737D(), 0, 16);
						unk_0x007AE2AA9E15FA7B(uLocal_120);
						unk_0x00E85C3B3BD34B10(iLocal_90[iVar0], uLocal_120);
						unk_0x08377FB2AE4C6899(&uLocal_120);
					}
				}
				else if (unk_0xA3794949321E107C(uLocal_99[iVar0]))
				{
					unk_0x020DF7300725ECAB(&(uLocal_99[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_79)
		{
			if (!unk_0xCA41A00932714525(iLocal_90[0]))
			{
				if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_90[0], 50f, 50f, 50f, 0, 1, 0))
				{
					unk_0xA0F84EA3D7C06982(iLocal_90[0], iLocal_96, unk_0x17B5CC8A8615737D(), 8, 25f, 786469, -1f, -1f, 1);
					iLocal_79 = 1;
				}
			}
		}
		if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_96, 0))
		{
			if (unk_0xA3794949321E107C(uLocal_102))
			{
				unk_0x020DF7300725ECAB(&uLocal_102);
			}
			func_92(&uLocal_106, 0, 0);
			iLocal_38 = 2;
		}
		else if (unk_0xC0FA8EEF6413F866(iLocal_96, -1, 0) || unk_0xCA41A00932714525(iLocal_90[0]))
		{
			func_92(&uLocal_106, 0, 0);
		}
		else
		{
			func_67();
		}
	}
}

void func_67()
{
	if (!unk_0xCA41A00932714525(iLocal_90[0]) && !unk_0xA929B2923D14E2F8(iLocal_96, 0))
	{
		if (unk_0x2315BB1606BC3DC3(iLocal_90[0], iLocal_96, 0))
		{
			func_68(&uLocal_106, iLocal_96, 0, 0, 1, 1, 1);
		}
	}
}

void func_68(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_69(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_69(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_70(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_70(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		func_92(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_71(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_71(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xAB01297DD4A8577F())
	{
		if (unk_0x94E3E074F38DF86C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xD3115E7F7876D6E6(iVar0))
	{
		if (!unk_0x63C468D583002D23())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_91(iVar0))
	{
		func_90();
	}
	if (func_89(uParam1) && unk_0xADA6DD2D53C59AF0(uParam1))
	{
		iVar1 = 0;
		if (unk_0x80E9CA64E9C8E070(uParam1))
		{
			unk_0xCC614957B282546F(unk_0xB80CAAF3D65FBC1F(iParam1));
			unk_0x5A0679AC515DA45F(unk_0xB80CAAF3D65FBC1F(iParam1), 1);
			if (unk_0x4B08F3A62DC9B336(unk_0xB80CAAF3D65FBC1F(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x3983CCB0D958159C(iParam1))
		{
			unk_0x1976D6B36CACBFE7(unk_0xBFC71CD990E479DB(iParam1));
			if (unk_0x7D86ADEE79DE4C72(unk_0xBFC71CD990E479DB(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x1461B0B259D86067(iParam1))
		{
			unk_0xA8A81E4A8E21148C(unk_0xACDCB2312E61BD53(iParam1));
			if (unk_0xC61161F0BC70D70C(unk_0xACDCB2312E61BD53(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xAB01297DD4A8577F())
		{
			if (func_84(uParam0, bParam7, bParam9, 0))
			{
				func_80(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_76(iVar0))
				{
					if ((unk_0xD3115E7F7876D6E6(uParam0->f_3) && !unk_0xD3115E7F7876D6E6(iVar0)) && unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						if ((iVar1 && !unk_0x9E123D5FF2973C60()) && uParam8)
						{
							if (!func_91(iVar0))
							{
								func_75(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x6A7B0D91FD88D9EE("CMN_HINT", iVar0))
								{
									func_74(1);
								}
							}
						}
					}
				}
			}
			else if (func_76(iVar0))
			{
				if (unk_0xD3115E7F7876D6E6(uParam0->f_3) && !unk_0xD3115E7F7876D6E6(iVar0))
				{
					if (((unk_0x1DCFA79E268F3EE5(iParam1) && iVar1) && !unk_0x9E123D5FF2973C60()) && uParam8)
					{
						if (!func_91(iVar0))
						{
							func_75(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6A7B0D91FD88D9EE("CMN_HINT", iVar0))
							{
								func_74(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xD3115E7F7876D6E6(sParam5))
			{
				if (func_91(sParam5))
				{
					unk_0x2E2945F5602A744F(1);
				}
			}
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
			{
				if (unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(3) == 3 || unk_0xB866C0EABE959340(3) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(6) == 3 || unk_0xB866C0EABE959340(6) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(4) == 3 || unk_0xB866C0EABE959340(4) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(5) == 3 || unk_0xB866C0EABE959340(5) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x3B22E4CC0F88E52E(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(2) == 3 || unk_0xB866C0EABE959340(2) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x428CA09FA2E92B87() == 3 || unk_0x428CA09FA2E92B87() == 4)
				{
					func_92(uParam0, iVar0, 1);
				}
			}
			if (!func_84(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_73(uParam0))
				{
					func_72(uParam0);
				}
			}
		}
	}
	else
	{
		func_92(uParam0, iVar0, 0);
	}
}

void func_72(var uParam0)
{
	if (func_89(unk_0x17B5CC8A8615737D()))
	{
		unk_0xEF9294ED57E4AC3D(unk_0x17B5CC8A8615737D());
	}
	if (unk_0xAB01297DD4A8577F())
	{
		unk_0x73624B45C8E405BA(1);
		unk_0x72B6EAB729050F5B(0);
		unk_0xB8CAC5F3774894A1("HINT_CAM_SCENE");
		unk_0x8BBC558C75738A6D("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9AF1ABF0E97411BF("FocusOut", 0, 0);
			unk_0x4988C48537D1AE4F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_73(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x94E3E074F38DF86C()
		{
			return 1;
		}
	}
	return 0;
}

int func_74(bool bParam0)
{
	switch (Global_35781)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101700.f_9008.f_100++;
			}
			return Global_101700.f_9008.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101700.f_9008.f_101++;
			}
			return Global_101700.f_9008.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101700.f_9008.f_102++;
			}
			return Global_101700.f_9008.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_75(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

int func_76(char* sParam0)
{
	if (!func_77(1, 1, 0))
	{
		if ((!unk_0x9C88EB7B70229335(sParam0) && func_91(sParam0)) || func_91("CMN_HINT"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		return 0;
	}
	switch (Global_35781)
	{
		case 0:
		case 3:
			if (func_74(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_74(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_74(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_77(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xE9E6B5364105A000())
	{
		return 0;
	}
	if (func_79(0))
	{
		return 0;
	}
	if (func_78())
	{
		return 0;
	}
	if (unk_0x349B6C82BE3EF6DD())
	{
		return 0;
	}
	if (Global_68131)
	{
		return 0;
	}
	if (unk_0x82F1A060D8F4583B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53003)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
		{
			if (unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(3) == 3 || unk_0xB866C0EABE959340(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(6) == 3 || unk_0xB866C0EABE959340(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(4) == 3 || unk_0xB866C0EABE959340(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(5) == 3 || unk_0xB866C0EABE959340(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3B22E4CC0F88E52E(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(2) == 3 || unk_0xB866C0EABE959340(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x428CA09FA2E92B87() == 3 || unk_0x428CA09FA2E92B87() == 4)
			{
				return 0;
			}
			if (unk_0x54271E538645DBDB())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_78()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

int func_79(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_80(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xA929B2923D14E2F8(uParam1, 0))
	{
		func_92(uParam0, 0, 0);
	}
	if (func_83(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x80E9CA64E9C8E070(iParam1))
		{
			uVar0 = unk_0xB80CAAF3D65FBC1F(iParam1);
			if (!unk_0xFD0FE723227D5AB6(uVar0, 0))
			{
				if (unk_0x0764AC92F08BEC9E(iVar0))
				{
					if (!func_81())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x81E2E02C57D459E6(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x73624B45C8E405BA(0);
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
	unk_0x986AC95588E8693B(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x4718A774D9248520(unk_0x17B5CC8A8615737D(), iParam1, -1, iVar3, iVar4);
	unk_0x9AF1ABF0E97411BF("FocusIn", 0, 0);
	unk_0x4A5D4AD0FE6ACF73("HINT_CAM_SCENE");
	unk_0x4988C48537D1AE4F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x94E3E074F38DF86C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_81()
{
	return func_82(unk_0xBE369BE1BC57A796());
}

int func_82(var uParam0)
{
	if (unk_0x0324EEB10F81965F(unk_0xDF7CE83326F434E9(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_83(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_84(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x94E3E074F38DF86C() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					if (func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_88(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_73(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x94E3E074F38DF86C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
					{
						if (!func_88(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x94E3E074F38DF86C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
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
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					if (!func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_87(bParam1, bParam2, bParam3) || unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || unk_0x8B41403849A60C7C(unk_0x17B5CC8A8615737D(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_88(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x94E3E074F38DF86C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
					{
						if (func_86(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || unk_0x8B41403849A60C7C(unk_0x17B5CC8A8615737D(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_73(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_77(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_90();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_85(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()))
		{
			unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
			if (unk_0x7C48E6953368E08B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_86(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
		if (unk_0xBB4A435CD6A72A8E())
		{
			if (unk_0x7C48E6953368E08B(0, 80))
			{
				unk_0x73624B45C8E405BA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_87(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()))
		{
			unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
			if (unk_0x9E3D293A990C1BEF(0, 80) && unk_0x94E3E074F38DF86C() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
		if (unk_0xBB4A435CD6A72A8E())
		{
			if (unk_0x9E3D293A990C1BEF(0, 80) && unk_0x94E3E074F38DF86C() > Global_116)
			{
				unk_0x73624B45C8E405BA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (unk_0x3983CCB0D958159C(iParam0))
		{
			if (unk_0x45CD66F0A131E554(unk_0xBFC71CD990E479DB(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x80E9CA64E9C8E070(iParam0))
		{
			if (!unk_0xCA41A00932714525(unk_0xB80CAAF3D65FBC1F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x1461B0B259D86067(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_90()
{
	unk_0xEB79FECD9022AAF0(&Global_2314, 4);
}

bool func_91(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

void func_92(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x63C468D583002D23())
	{
		if (unk_0x48B8265059381CD0(Global_2494199.f_4449, 26))
		{
			return;
		}
	}
	if (unk_0xAB01297DD4A8577F())
	{
		unk_0x72B6EAB729050F5B(iParam2);
		unk_0x8BBC558C75738A6D("FocusIn");
		unk_0xB8CAC5F3774894A1("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9AF1ABF0E97411BF("FocusOut", 0, 0);
			unk_0x4988C48537D1AE4F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x73624B45C8E405BA(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xD3115E7F7876D6E6(sVar0))
	{
		if (!unk_0x63C468D583002D23())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xD3115E7F7876D6E6(uParam0->f_3))
	{
		if (func_91(uParam0->f_3))
		{
			unk_0x2E2945F5602A744F(1);
		}
	}
	if (!unk_0xD3115E7F7876D6E6(sVar0))
	{
		if (func_91(sVar0))
		{
			unk_0x2E2945F5602A744F(1);
		}
	}
}

int func_93()
{
	if (unk_0x23E9113C762466ED(iLocal_96))
	{
		if (!unk_0xA929B2923D14E2F8(iLocal_96, 0))
		{
			if ((((((unk_0xB5DF060B138CD2EA(iLocal_96) < 300 || unk_0x27CB4A87DBB58E6E(iLocal_96) < 200f) || unk_0x03767DFC5EE2B0C6(iLocal_96)) || (unk_0xC98320A98098650E(iLocal_96, 0, 0) && unk_0xC98320A98098650E(iLocal_96, 1, 0))) || (unk_0xC98320A98098650E(iLocal_96, 4, 0) && unk_0xC98320A98098650E(iLocal_96, 5, 0))) || (unk_0xC98320A98098650E(iLocal_96, 0, 0) && unk_0xC98320A98098650E(iLocal_96, 4, 0))) || (unk_0xC98320A98098650E(iLocal_96, 1, 0) && unk_0xC98320A98098650E(iLocal_96, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_94()
{
	int iVar0;
	int iVar1;
	
	iLocal_96 = func_96(0);
	if (!unk_0x45CD66F0A131E554(iLocal_96, 0))
	{
		iLocal_96 = unk_0x692A2891A2BA7352(iLocal_88, Local_64, uLocal_73, 1, 1);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			unk_0x70888C5F297D3D80(iLocal_96, iVar0, 1);
			iVar0++;
		}
		if (iLocal_85 != -1)
		{
			unk_0x70888C5F297D3D80(iLocal_96, iLocal_85, 0);
		}
	}
	unk_0x3F1D5D367E15601E(iLocal_96, 1);
	uLocal_102 = func_95(iLocal_96, 0, 0);
	if (iLocal_36 != 5 && iLocal_36 != 6)
	{
		if (iLocal_36 > 6)
		{
			unk_0x4C44C1A3160350E2(iLocal_96, 0, 0, 0, 0, 1, 0, 0, 0);
			unk_0xEE4ED1F88396A702(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_96, 0, 0, 0);
		}
		func_35(sLocal_103, 7500, 1);
	}
	else
	{
		iLocal_90[0] = unk_0x3FBC0964EB7878AF(iLocal_96, 26, iLocal_86, -1, 1, 1);
		iLocal_90[1] = unk_0x3FBC0964EB7878AF(iLocal_96, 26, iLocal_86, 0, 1, 1);
		unk_0x1EF7A8224AE81790("rghCriminal", &uLocal_119);
		unk_0xDE574EA7A7A2CAF8(5, uLocal_119, joaat("player"));
		iVar1 = 0;
		while (iVar1 < iLocal_90)
		{
			unk_0xCC61640A821F277C(iLocal_90[iVar1], 1);
			unk_0xC1B7B5C6FDC0755B(iLocal_90[iVar1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
			unk_0x3BB70315907D9456(iLocal_90[iVar1], uLocal_119);
			iVar1++;
		}
		unk_0x9178B6CFE95D27C6(iLocal_90[0], iLocal_96, 25f, 786599);
		func_35("PMDL_REC", 7500, 1);
	}
	if (!unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
	{
		iLocal_98 = unk_0x0C00E753D78DEA62();
	}
	iLocal_38 = 1;
}

int func_95(var uParam0, bool bParam1, bool bParam2)
{
	return func_11(uParam0, !bParam1, bParam2);
}

int func_96(int iParam0)
{
	if (unk_0x45CD66F0A131E554(Global_100412.f_222[iParam0], 0))
	{
		unk_0xF0F77C99098F999B(Global_100412.f_222[iParam0], 1, 1);
		return Global_100412.f_222[iParam0];
	}
	return 0;
}

int func_97()
{
	if (unk_0x23E9113C762466ED(iLocal_96))
	{
		if (unk_0x45CD66F0A131E554(iLocal_96, 0))
		{
			if (!unk_0x4E84D2C9B54F79BA(iLocal_96, unk_0x17B5CC8A8615737D(), 300f, 300f, 300f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0xCA41A00932714525(iLocal_90[0]))
	{
		if (unk_0xA3794949321E107C(uLocal_99[0]))
		{
			unk_0x020DF7300725ECAB(&(uLocal_99[0]));
		}
	}
	return 0;
}

void func_98()
{
	unk_0xE1324F59713746FA(iLocal_88);
	unk_0xA73AE78D2491E6E1("PMDL", 0);
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		unk_0xE1324F59713746FA(iLocal_87);
		unk_0xE1324F59713746FA(iLocal_89);
	}
	else if (iLocal_36 == 5 || iLocal_36 == 6)
	{
		unk_0xE1324F59713746FA(iLocal_86);
	}
	unk_0xD90CB3CF9A40791C(joaat("benson"), 1);
	unk_0xD90CB3CF9A40791C(joaat("pony2"), 1);
	if (unk_0x9F746898F7881612(iLocal_88) && unk_0x657558590DD37F85(0))
	{
		if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			if (unk_0x9F746898F7881612(iLocal_87) && unk_0x9F746898F7881612(iLocal_89))
			{
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 == 5 || iLocal_36 == 6)
		{
			if (unk_0x9F746898F7881612(iLocal_86))
			{
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 > 6)
		{
			if (unk_0x985A2515CBAF7290("Deliveries", 0, -1))
			{
				bLocal_75 = true;
			}
		}
		else
		{
			bLocal_75 = true;
		}
	}
}

void func_99()
{
	float fVar0;
	
	Local_64 = { func_101(func_103(), iLocal_36) };
	fLocal_73 = func_100(func_103(), iLocal_36);
	if (iLocal_36 > 6)
	{
		sLocal_103 = "PMDL_TRUCK";
		sLocal_104 = "PMDL_BTIM";
		sLocal_105 = "PMDL_BCKT";
		iLocal_88 = joaat("benson");
		iLocal_85 = 2;
	}
	if (func_103() == 10)
	{
		Local_67 = { -1161.213f, -1567.068f, 3.4234f };
		iLocal_88 = joaat("pony2");
		if (iLocal_36 == 0)
		{
			iLocal_82 = 2;
			iLocal_83 = 15;
			sLocal_104 = "PMDL_TIM";
		}
		else if (iLocal_36 == 1)
		{
			iLocal_82 = 1;
			iLocal_83 = 30;
			sLocal_104 = "PMDL_TIM";
		}
		else if (iLocal_36 == 2)
		{
			iLocal_82 = 1;
			iLocal_83 = 30;
			sLocal_104 = "PMDL_TIM";
		}
		else if (iLocal_36 == 3)
		{
			Local_70 = { -3121.261f, 1152.92f, 19.4047f };
			fLocal_74 = 176.4887f;
			iLocal_89 = joaat("police4");
			iLocal_87 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 == 4)
		{
			Local_70 = { 1543.145f, 2184.371f, 77.8114f };
			fLocal_74 = 45.3499f;
			iLocal_89 = joaat("police4");
			iLocal_87 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 >= 5)
		{
			iLocal_86 = joaat("g_m_y_salvagoon_02");
		}
	}
	else if (func_103() == 14)
	{
		Local_67 = { -2169.828f, 4277.365f, 47.9568f };
		fVar0 = unk_0x3DC4639D5F23DEA2(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_103() == 13)
	{
		Local_67 = { -323.356f, 6264.431f, 30.4463f };
		fVar0 = unk_0x3DC4639D5F23DEA2(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_103() == 12)
	{
		Local_67 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = unk_0x3DC4639D5F23DEA2(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (func_103() == 11)
	{
		Local_67 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = unk_0x3DC4639D5F23DEA2(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	iLocal_81 = 0;
	iLocal_76 = 1;
}

float func_100(int iParam0, int iParam1)
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

Vector3 func_101(int iParam0, int iParam1)
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
	return func_102(iParam0);
}

Vector3 func_102(int iParam0)
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

int func_103()
{
	return Global_100412.f_20;
}

int func_104()
{
	return func_105(Global_100412.f_20, Global_100412.f_29);
}

int func_105(int iParam0, int iParam1)
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

void func_106()
{
	unk_0xD90CB3CF9A40791C(joaat("benson"), 0);
	unk_0xD90CB3CF9A40791C(joaat("pony2"), 0);
	unk_0x9A27E67BCD441C6E();
	if (iLocal_77)
	{
		if (!unk_0xA929B2923D14E2F8(iLocal_98, 0))
		{
			func_107(iLocal_98, 0, 145);
		}
		unk_0x0DACC47E5EC16CF6(unk_0xBE369BE1BC57A796());
		func_92(&uLocal_106, 0, 0);
	}
	unk_0x921053BAF754303D();
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x1F1F11C691B0636E(iParam0, &uVar0);
		if (!unk_0x9C88EB7B70229335(uVar1))
		{
			if (unk_0x765F5B806B517045(sVar1) == unk_0x765F5B806B517045("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_108(iParam0, iParam2);
	return 1;
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_113(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x17206B315923243C(iParam0, -1, 0);
		if (!unk_0x23E9113C762466ED(iVar0))
		{
			iVar0 = unk_0x67649920B2C3A244(iParam0, -1);
		}
		if (unk_0x23E9113C762466ED(iVar0) && !unk_0xCA41A00932714525(iVar0))
		{
			if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
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
		if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_109(iParam0, &(Global_101700.f_31389.f_5510));
}

void func_109(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		func_112(uParam1);
		uParam1->f_66 = unk_0x0324EEB10F81965F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE184AC3A4DAF353D(iParam0), 16);
		*uParam1 = unk_0x420AD4B7A2DA4F74(iParam0);
		unk_0x3C5D9FD265196560(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x5CE46A3E89B49FAE(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xEFB6EA0CF01B73B1(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xB3A30C9CBD0AF035(iParam0);
		uParam1->f_67 = unk_0x7C73B96D4046CE64(iParam0);
		uParam1->f_69 = unk_0x5AADFFFE972FF9B9(iParam0);
		uParam1->f_70 = unk_0xB7541DEA333EE53D(iParam0);
		unk_0x44A79540466923A3(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x86916C0F8ACCF8A7(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 2))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 28);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 3))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 29);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 30);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 1))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x4555FC519F5B33E3(iParam0, 0))
		{
			uParam1->f_68 = unk_0x575D47C669B84572(iParam0);
		}
		if (unk_0x8432EA469FDB418D(uParam1->f_66))
		{
			if (unk_0x3B236BCC7CA86F1F(iParam0))
			{
				switch (unk_0xF4925FA16E991774(iParam0))
				{
					case 2:
					case 0:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x3AAC868F49EC1E0A(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 9);
		}
		if (unk_0xDABC65773FAE7D61(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 10);
		}
		if (unk_0xD74AC52CAC4E709E(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 13);
			unk_0xF1A2595FDE7845CA(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9FC3D9B8F2BAF3E6(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 12);
		}
		func_111(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xA13396827DE7EB7C(iParam0, iVar0 + 1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_110(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA95FCE90BA930118(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 11);
		}
		if (unk_0x44748DA5CF34DA5E(iParam0, "IgnoredByQuickSave") && unk_0x12D059B73664565A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 27);
		}
	}
}

int func_110(int iParam0)
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

int func_111(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x45CD66F0A131E554(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFA4A2220118417AE(*iParam0) == 0)
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
			if (unk_0x2E6E95784D18C8E0(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x68BE46B0EA4FCFAF(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_112(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_113(int iParam0)
{
	if ((((((((((!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0)) || func_129(iParam0, 0, 0)) || func_129(iParam0, 1, 0)) || func_129(iParam0, 2, 0)) || func_128(iParam0) != 145) || func_127(iParam0)) || func_126(iParam0)) || func_125(iParam0)) || func_124(iParam0)) || !func_114(unk_0x0324EEB10F81965F(iParam0)))
	{
		if (func_126(iParam0))
		{
		}
		if (func_126(iParam0))
		{
		}
		if (func_129(iParam0, 0, 0))
		{
		}
		if (func_129(iParam0, 1, 0))
		{
		}
		if (func_129(iParam0, 2, 0))
		{
		}
		if (func_128(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_114(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xA55B002FED5A9858(iParam0) || unk_0x8432EA469FDB418D(iParam0)) || unk_0xC5082382D5482C0C(iParam0)) || unk_0x3B548F49528B5FA7(iParam0))
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

int func_115(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x2ED6701376DBCF71(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x63C468D583002D23()) || (iParam0 == joaat("buffalo3") && !unk_0x63C468D583002D23())) || (iParam0 == joaat("gauntlet2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blista3"))
	{
		if (!func_123())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x9AEFEF0C873443F4())
		{
			if (unk_0xE8885AFFB348EA8C(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x5D46F50AE982AB28(Var1.f_0))
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
		if ((((!func_122() && !func_121()) && !func_120()) && !func_119()) && !func_123())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x8EA3D5407E9F4AF0() || unk_0xEF4E5E47AF0D4480()) || unk_0x7C2F31E78C33DE0F())
		{
		}
		else if (!func_120())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_118(iParam0))
		{
			return 0;
		}
	}
	if (!func_116(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_116(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_117())
	{
		return 1;
	}
	unk_0x5E5FAFB02AD6B99F(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x03E2F3A2203722EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_117()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2482093)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x57E9911EC23E2C54();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5506 && !Global_262145.f_11530) && iVar1 < Global_262145.f_11531)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_119()
{
	return 0;
}

int func_120()
{
	return 1;
}

int func_121()
{
	return 1;
}

int func_122()
{
	if (unk_0x6948821CC8D52AC2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_123()
{
	var uVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xEB79FECD9022AAF0(&uVar0, 2);
				unk_0xEB79FECD9022AAF0(&uVar0, 4);
				unk_0xEB79FECD9022AAF0(&uVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					uVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&uVar0, 0);
					unk_0x0D1285E5ED89254D(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2)
	{
		return 1;
	}
	else if (Global_139179 == 3)
	{
		return 0;
	}
	if (unk_0x8B57B9443E19F940())
	{
		if (unk_0x48B8265059381CD0(unk_0xBE675F7A607B46B0(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	uVar1 = unk_0xE184AC3A4DAF353D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x6A7B0D91FD88D9EE(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_115(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x23E9113C762466ED(Global_89185[iVar0]))
		{
			if (Global_89185[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_126(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x23E9113C762466ED(Global_89155[iVar0]) && unk_0x45CD66F0A131E554(Global_89155[iVar0], 0))
			{
				if (Global_89155[iVar0] == iParam0 && unk_0x0324EEB10F81965F(Global_89155[iVar0]) == unk_0x0324EEB10F81965F(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(Global_68531.f_484[24]))
	{
		if (iParam0 == Global_68531.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68531.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_128(int iParam0)
{
	int iVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 145;
	}
	if (!unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (Global_89155[iVar0] == iParam0)
			{
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_129(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_130(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x48B8265059381CD0(Global_101700.f_6188[iVar9], 0))
		{
			if (unk_0xA3342DAAC0684FAC(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_130(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_131(int iParam0)
{
	Global_100412.f_22 = iParam0;
}

