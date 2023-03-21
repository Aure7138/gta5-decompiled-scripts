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
	unk_0x1A41D12A38E6D79F(1);
	if (unk_0xD4BE58A7E3E102AC(3))
	{
		func_140(2);
		func_114();
	}
	iLocal_36 = func_112();
	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (!iLocal_76)
				{
					func_107();
				}
				else
				{
					func_106();
				}
				if (bLocal_75)
				{
					iLocal_77 = 1;
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				if (!func_105())
				{
					switch (iLocal_38)
					{
						case 0:
							func_102();
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
	func_140(2);
	func_114();
}

void func_2()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(iLocal_96))
	{
		if (unk_0xD960230552BC4165(iLocal_96, 0))
		{
			iVar0 = 200;
			iVar1 = (unk_0x35D31BEBAFD53DE6(iLocal_96) - 800);
			if (unk_0xF0B9188ED2464C51(iLocal_96))
			{
				unk_0x0BBBAC4546BFE280(iLocal_96, (unk_0x35D31BEBAFD53DE6(iLocal_96) - 5), 0);
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
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
}

void func_4(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
		Global_1375006.f_1 = 1;
		func_5(0, iVar0);
		Global_1375006.f_1114[iVar0] = uParam0;
		Global_1375006.f_1114.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1375006.f_1114.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1375006.f_1114.f_194[iVar0] = uParam3;
		Global_1375006.f_1114.f_183[iVar0] = uParam4;
		Global_1375006.f_1114.f_216[iVar0] = uParam5;
		Global_1375006.f_1114.f_227[iVar0 /*3*/] = fParam6;
		Global_1375006.f_1114.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1375006.f_1114.f_258[iVar0] = iParam8;
		Global_1375006.f_1114.f_269[iVar0] = uParam9;
		Global_1375006.f_1114.f_312[iVar0] = iParam10;
		Global_1375006.f_1114.f_323[iVar0] = iParam11;
		Global_1375006.f_1114.f_334[iVar0] = iParam12;
		Global_1375006.f_1114.f_345[iVar0] = iParam13;
		Global_1375006.f_1109 = 1;
		Global_1375006.f_1114.f_356[iVar0] = iParam14;
		Global_1375006.f_1114.f_367[iVar0] = iParam15;
		Global_1375006.f_1114.f_378[iVar0] = iParam16;
		Global_1375006.f_1114.f_389[iVar0] = iParam17;
		Global_1375006.f_1114.f_400[iVar0] = iParam18;
		Global_1375006.f_1114.f_411[iVar0] = iParam19;
		Global_1375006.f_1114.f_422[iVar0] = iParam20;
		Global_1375006.f_1114.f_433[iVar0] = iParam21;
		Global_1375006.f_1114.f_444[iVar0] = iParam22;
		Global_1375006.f_1114.f_455[iVar0] = iParam23;
		Global_1375006.f_1114.f_466[iVar0] = iParam24;
		Global_1375006.f_1114.f_205[iVar0] = iParam25;
	}
}

void func_5(int iParam0, int iParam1)
{
	unk_0xA1E7A40E1F56E511(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_6(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1375006.f_6184[iParam0], iParam1);
}

void func_7()
{
	int iVar0;
	
	iVar0 = (iLocal_80 - unk_0x9B35D07DCD0F0B43());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (unk_0x9B35D07DCD0F0B43() >= iLocal_84)
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iLocal_81)
	{
		case 0:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 10000))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 1:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 9000))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 2:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 8000))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 3:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 7000))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 4:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 6000))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 5:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 5000))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 6:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 4500))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 7:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 4000))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 8:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 3500))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 9:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 3000))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 10:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 2500))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 11:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 2000))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 12:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 1500))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 13:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 1000))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 14:
			if (unk_0x9B35D07DCD0F0B43() >= (iLocal_80 - 500))
			{
				unk_0x9964F5BBD9415AB7(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 15:
			if (unk_0x9B35D07DCD0F0B43() >= iLocal_80)
			{
				unk_0x9964F5BBD9415AB7(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 16:
			break;
	}
	if (unk_0x9B35D07DCD0F0B43() >= iLocal_80)
	{
		iLocal_38 = 3;
	}
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
		Global_1375006.f_1 = 1;
		func_5(7, iVar0);
		Global_1375006.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_4453.f_172[iVar0] = iParam2;
		Global_1375006.f_4453.f_216[iVar0] = iParam3;
		Global_1375006.f_4453.f_183[iVar0] = iParam4;
		Global_1375006.f_4453.f_194[iVar0] = iParam5;
		Global_1375006.f_4453.f_249[iVar0] = iParam6;
		Global_1375006.f_4453.f_260[iVar0] = iParam7;
		Global_1375006.f_4453.f_205[iVar0] = iParam8;
		Global_1375006.f_4453.f_314[iVar0] = iParam9;
		Global_1375006.f_4453.f_325[iVar0] = iParam10;
		Global_1375006.f_4453.f_357[iVar0] = iParam11;
		Global_1375006.f_4453.f_238[iVar0] = iParam12;
		Global_1375006.f_4453.f_271[iVar0] = iParam13;
		Global_1375006.f_4453.f_368[iVar0] = iParam14;
		Global_1375006.f_4453.f_379[iVar0] = iParam15;
		Global_1375006.f_4453.f_390[iVar0] = iParam16;
		Global_1375006.f_4453.f_227[iVar0] = iParam17;
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
				if (!unk_0x2BF5E63466422C38(iLocal_93[iVar0]))
				{
					if (!unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_64, 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0xBA0ADF29DCCA9258(unk_0x7C7787D2D7139A85(), 2, 0);
						unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
						unk_0xA79E892D0DDB947B(unk_0x7C7787D2D7139A85(), 0f);
						iLocal_78 = 1;
					}
				}
			}
			else if (!unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
			{
				if (!unk_0x2BF5E63466422C38(iLocal_93[iVar0]))
				{
					unk_0xF0E9590A910B74BE(iLocal_93[iVar0], unk_0x0FA8183DAD2B3203(), 1000f, -1, 0, 0);
					unk_0x7D81B41B134BD6F2(iLocal_93[iVar0], 1);
					unk_0x0FFB05DA97E810B5(&(iLocal_93[iVar0]));
				}
				if (unk_0xD4B321D9096B01FC(uLocal_97))
				{
					unk_0xF25956700ADFD77F(&iLocal_97);
				}
			}
			iVar0++;
		}
	}
	if (func_21(&uLocal_39, Local_67, Global_22, 1, iLocal_96, sLocal_104, "", sLocal_105, 1, 0, 1, -1))
	{
		func_19(iLocal_96, 10.5f, 2, 1056964608, 0, 1, 0);
		unk_0x2DCF88AC859255F3(unk_0x0FA8183DAD2B3203(), 2000, 0);
		unk_0x13BE685F855BA48C(iLocal_96, 0);
		func_14(&uLocal_39, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_90)
	{
		if (!unk_0x2BF5E63466422C38(iLocal_90[iVar1]))
		{
			if (!unk_0x39A01A052D9B5FF0(uLocal_99[iVar1]))
			{
				uLocal_99[iVar1] = func_10(iLocal_90[iVar1], 1, 145);
				unk_0xA12E1659DEF57244(&uLocal_120);
				unk_0x2DCF88AC859255F3(0, 0, 0);
				unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
				unk_0x15A7B753872B3CE3(uLocal_120);
				unk_0xC544A8E1032AC1CF(iLocal_90[iVar1], uLocal_120);
				unk_0x78829A259A6975CD(&uLocal_120);
				unk_0x7D81B41B134BD6F2(iLocal_90[iVar1], 1);
			}
			if (!unk_0x9B69E0F5342BA1A8(iLocal_90[iVar1], unk_0x0FA8183DAD2B3203(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (unk_0x39A01A052D9B5FF0(uLocal_99[iVar1]))
				{
					unk_0xAA2276003B2ADF1B(&(uLocal_99[iVar1]));
				}
				unk_0xF0E9590A910B74BE(iLocal_90[iVar1], unk_0x0FA8183DAD2B3203(), 1000f, -1, 0, 0);
				unk_0x7D81B41B134BD6F2(iLocal_90[iVar1], 1);
				unk_0x0FFB05DA97E810B5(&(iLocal_90[iVar1]));
			}
		}
		else if (unk_0x39A01A052D9B5FF0(uLocal_99[iVar1]))
		{
			unk_0xAA2276003B2ADF1B(&(uLocal_99[iVar1]));
		}
		iVar1++;
	}
}

var func_10(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_11(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x39A01A052D9B5FF0(uVar0)) && unk_0x005AF94672136563(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		unk_0x058B6969CEED705F(uVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD4B321D9096B01FC(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xADA89D4F1A58FCBA(iParam0);
	if (unk_0x905FBA24E7FA8D23(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_12(unk_0x393E9918BC37548A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x14C335BB2F079BD4(uVar0, bParam1);
		}
		else
		{
			unk_0x088577CF98F96D05(uVar0, 2);
		}
	}
	else if (unk_0x4625051E51BA911B(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_12(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
		unk_0x14C335BB2F079BD4(uVar0, bParam1);
	}
	else if (unk_0x0F100E7952E44923(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_12(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
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
	func_140(1);
	func_114();
}

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_18(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
		{
			unk_0xAA2276003B2ADF1B(&(uParam0->f_1[iVar0]));
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
			unk_0x3B76114EC84D5812(&(uParam0->f_13), iVar0);
			unk_0x3B76114EC84D5812(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x39A01A052D9B5FF0(*uParam0))
	{
		unk_0xAA2276003B2ADF1B(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
		{
			unk_0x773434A2783CA924(uParam0->f_17[iVar0], 1);
			unk_0xD2939754183602A1(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x1DB66BD2267055C0(uParam0->f_17[iVar0], 32, 1);
				unk_0x1DB66BD2267055C0(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x1DB66BD2267055C0(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_15()) && uParam0->f_17[iVar0] != unk_0x0FA8183DAD2B3203())
				{
					unk_0x91F590A9823EB649(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 29))
			{
				unk_0xA7E1CFAAFBBD71F8(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		unk_0x773434A2783CA924(unk_0x0FA8183DAD2B3203(), 1);
		unk_0xD2939754183602A1(unk_0x0FA8183DAD2B3203(), 1);
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (bParam2)
		{
			unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_15()
{
	return unk_0x85E4D364E5F296FC(unk_0x7A8732CFB5113E77());
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x3B76114EC84D5812(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x3B76114EC84D5812(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x3B76114EC84D5812(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x3B76114EC84D5812(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x3B76114EC84D5812(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x3B76114EC84D5812(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0)
{
	if (unk_0x39A01A052D9B5FF0(uParam0->f_5))
	{
		unk_0xAA2276003B2ADF1B(&(uParam0->f_5));
	}
}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x572062A62138FBA2(0, 71, 1);
	unk_0x572062A62138FBA2(0, 72, 1);
	unk_0x572062A62138FBA2(0, 76, 1);
	unk_0x572062A62138FBA2(0, 73, 1);
	unk_0x572062A62138FBA2(0, 59, 1);
	unk_0x572062A62138FBA2(0, 60, 1);
	if (bParam5)
	{
		unk_0x572062A62138FBA2(0, 75, 1);
	}
	unk_0x572062A62138FBA2(0, 80, 1);
	if (!bParam6)
	{
		unk_0x572062A62138FBA2(0, 69, 1);
		unk_0x572062A62138FBA2(0, 70, 1);
		unk_0x572062A62138FBA2(0, 68, 1);
	}
	unk_0x572062A62138FBA2(0, 74, 1);
	unk_0x572062A62138FBA2(0, 86, 1);
	unk_0x572062A62138FBA2(0, 81, 1);
	unk_0x572062A62138FBA2(0, 82, 1);
	unk_0x572062A62138FBA2(0, 138, 1);
	unk_0x572062A62138FBA2(0, 136, 1);
	unk_0x572062A62138FBA2(0, 114, 1);
	unk_0x572062A62138FBA2(0, 107, 1);
	unk_0x572062A62138FBA2(0, 110, 1);
	unk_0x572062A62138FBA2(0, 89, 1);
	unk_0x572062A62138FBA2(0, 89, 1);
	unk_0x572062A62138FBA2(0, 87, 1);
	unk_0x572062A62138FBA2(0, 88, 1);
	unk_0x572062A62138FBA2(0, 113, 1);
	unk_0x572062A62138FBA2(0, 115, 1);
	unk_0x572062A62138FBA2(0, 116, 1);
	unk_0x572062A62138FBA2(0, 117, 1);
	unk_0x572062A62138FBA2(0, 118, 1);
	unk_0x572062A62138FBA2(0, 119, 1);
	unk_0x572062A62138FBA2(0, 131, 1);
	unk_0x572062A62138FBA2(0, 132, 1);
	unk_0x572062A62138FBA2(0, 123, 1);
	unk_0x572062A62138FBA2(0, 126, 1);
	unk_0x572062A62138FBA2(0, 129, 1);
	unk_0x572062A62138FBA2(0, 130, 1);
	unk_0x572062A62138FBA2(0, 133, 1);
	unk_0x572062A62138FBA2(0, 134, 1);
	unk_0xCD00E3BA36117D4B();
	func_20(iParam0);
	if ((unk_0x9B35D07DCD0F0B43() - Global_29) > 500)
	{
		unk_0x784753B14715F27F(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x9B35D07DCD0F0B43();
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (unk_0x01CBD71E072E9F33(unk_0xB8D4A2BAA78AB950(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_20(int iParam0)
{
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (unk_0x270391FCE2D64F64(iParam0))
		{
			if (unk_0x9131E47288B6D66E(iParam0))
			{
				unk_0xDF5180225AFEE790(iParam0, 0);
			}
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
		if (unk_0xBF28CCACDDFF5346())
		{
			bVar1 = false;
			if (unk_0xD960230552BC4165(iParam18, 0))
			{
				if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iParam18, 0))
				{
					unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 3);
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 9))
					{
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 4);
					}
					if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 23))
					{
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 23);
					}
					unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_41(uParam0, iParam29))
				{
					unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 3);
					if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 9))
					{
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 4);
					}
					unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 9);
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
				if (bParam26 && unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
				{
					if (unk_0x39A01A052D9B5FF0(uParam0->f_5))
					{
						unk_0xAA2276003B2ADF1B(&(uParam0->f_5));
						func_43(sParam19);
					}
					if (unk_0x39A01A052D9B5FF0(*uParam0))
					{
						unk_0xAA2276003B2ADF1B(uParam0);
					}
					if ((!func_37(uParam0, 1) && !func_36(uParam0)) && !unk_0xA2BC31158C8CEFD2(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x2BF5E63466422C38(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 0);
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 0);
						unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 1);
					}
					if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 1))
					{
						if (!func_37(uParam0, 1))
						{
							if (!unk_0x2BF5E63466422C38(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x3B76114EC84D5812(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0x39A01A052D9B5FF0(uParam0->f_5))
					{
						if (unk_0x39A01A052D9B5FF0(*uParam0))
						{
							unk_0xAA2276003B2ADF1B(uParam0);
						}
						uParam0->f_5 = func_31(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xD1773DD05FE2AB54(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_30(uParam0->f_5, uParam0);
						}
					}
					else if (!func_29(Var3, unk_0xE3063EF8E0D6C8AD(uParam0->f_5), 0.1f, 0))
					{
						unk_0x58531110F2DD153B(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_30(uParam0->f_5, uParam0);
						}
					}
					if (!func_37(uParam0, 2))
					{
						if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 2))
						{
							func_34(uParam0, sParam19, 0);
							unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 13))
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
						unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
									if (!unk_0x95ED3BD0F52D542A(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x95ED3BD0F52D542A(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar2], func_15()) || !func_27(uParam0->f_17[iVar2], 1))
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
			else if (unk_0xD4B321D9096B01FC(iParam18))
			{
				if ((bParam26 && unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0)) && (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 9) && !unk_0xA2BC31158C8CEFD2(uParam0->f_13, 22)))
				{
					func_43(sParam24);
					func_43(sParam27);
					if (unk_0x39A01A052D9B5FF0(uParam0->f_5) || unk_0x39A01A052D9B5FF0(*uParam0))
					{
						unk_0xAA2276003B2ADF1B(&(uParam0->f_5));
						unk_0xAA2276003B2ADF1B(uParam0);
						func_43(sParam19);
					}
					if ((!func_37(uParam0, 1) && !func_36(uParam0)) && !unk_0xA2BC31158C8CEFD2(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x2BF5E63466422C38(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 0);
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0x3B76114EC84D5812(&(uParam0->f_13), 0);
						unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 1);
					}
					if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 1))
					{
						if (!func_37(uParam0, 1))
						{
							if (!unk_0x2BF5E63466422C38(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x3B76114EC84D5812(&(uParam0->f_13), 1);
						}
					}
					if (unk_0xD960230552BC4165(iParam18, 0))
					{
						if (!unk_0x39A01A052D9B5FF0(*uParam0))
						{
							if (unk_0x39A01A052D9B5FF0(uParam0->f_5))
							{
								unk_0xAA2276003B2ADF1B(&(uParam0->f_5));
								func_43(sParam19);
							}
							*uParam0 = func_23(iParam18, 0, 0);
							unk_0xB2FBFC8F00374981(*uParam0, 2);
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 4))
							{
								func_30(*uParam0, uParam0);
							}
						}
						if (!func_37(uParam0, 2))
						{
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 3))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 3);
								unk_0x3B76114EC84D5812(&(uParam0->f_13), 4);
							}
							else if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 9))
							{
								if (!unk_0x79FCE4565761C974(sParam27))
								{
									if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 4))
									{
										func_34(uParam0, sParam27, 0);
										unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 4))
								{
									func_34(uParam0, sParam24, 0);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 4);
								}
								if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 23))
								{
									if (!unk_0x2BF5E63466422C38(uParam0->f_17[0]))
									{
										func_32(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x39A01A052D9B5FF0(uParam0->f_5))
				{
					unk_0xAA2276003B2ADF1B(&(uParam0->f_5));
					func_43(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_37(uParam0, 2))
						{
							if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
							{
								if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0xBAC643F143880136(0, iVar8);
									if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar9]))
									{
										func_32(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_34(uParam0, "MORE_SEATS", 0);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 3))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 3);
								unk_0x3B76114EC84D5812(&(uParam0->f_13), 4);
							}
							else if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 4))
							{
								if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 9))
								{
									func_34(uParam0, sParam27, 0);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_37(uParam0, 2))
					{
						if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 3))
						{
							func_34(uParam0, sParam24, 0);
							unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 3);
							unk_0x3B76114EC84D5812(&(uParam0->f_13), 4);
						}
						else if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 9))
						{
							if (!unk_0x79FCE4565761C974(sParam27))
							{
								if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 4))
								{
									func_34(uParam0, sParam27, 0);
									unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 4))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 0))
		{
			unk_0x3B76114EC84D5812(&(uParam0->f_13), 0);
		}
		func_43(sParam19);
		func_43(sParam24);
		func_43(sParam27);
		func_43(sParam24);
		func_43("LOSE_WANTED");
		if (unk_0x39A01A052D9B5FF0(uParam0->f_5))
		{
			unk_0xAA2276003B2ADF1B(&(uParam0->f_5));
		}
		if (unk_0x39A01A052D9B5FF0(*uParam0))
		{
			unk_0xAA2276003B2ADF1B(uParam0);
		}
	}
	unk_0x3B76114EC84D5812(&(uParam0->f_13), 11);
	unk_0x3B76114EC84D5812(&(uParam0->f_13), 12);
	return 0;
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_24(var uParam0)
{
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 12))
	{
		if (func_26(unk_0x0FA8183DAD2B3203()))
		{
			if (func_25(1, 0, 1) || unk_0xA2BC31158C8CEFD2(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_25(1, 0, 1) || unk_0xA2BC31158C8CEFD2(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_25(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDE53EA8358302CB4())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
		{
			return 0;
		}
		iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
		if (bParam0)
		{
			if (unk_0xF4B969E0807E76C7(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xF4B969E0807E76C7(iVar0, 0))
			{
				if (unk_0x300C62F79A4441EB(iVar0, -1, 0) != unk_0x0FA8183DAD2B3203())
				{
					return 0;
				}
			}
		}
		if (!unk_0xF4B969E0807E76C7(iVar0, 0))
		{
			if (unk_0x7BB084963FF20373(iVar0) < 0.95f || unk_0x7BB084963FF20373(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (!unk_0xC22C143313E77BB2(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)
{
	float fVar0;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		fVar0 = unk_0xB8D4A2BAA78AB950(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()) && iParam1)
		{
			if (func_28(unk_0x0FA8183DAD2B3203(), iParam0))
			{
				unk_0xB439D67E6A36344A(func_15(), 50f);
				return 1;
			}
		}
		else if (unk_0x266F39A2B4FE04D0(iParam0, func_15()))
		{
			unk_0xB439D67E6A36344A(func_15(), 50f);
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
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0xA2DB82364F08360E(iParam0))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(iParam0, 0);
			if (unk_0xD960230552BC4165(iVar0, 0))
			{
				if (!unk_0x2BF5E63466422C38(iParam1))
				{
					if (unk_0x7E6F0519746C2295(iParam1, iVar0))
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
		if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x01CBD71E072E9F33((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_30(var uParam0, var uParam1)
{
	if (unk_0x39A01A052D9B5FF0(uParam0))
	{
		if (unk_0x39A01A052D9B5FF0(uParam1->f_6))
		{
			unk_0x925BD1075D119B45(uParam1->f_6, 0);
		}
		unk_0x990EDEB49BA0458D(0);
		unk_0x5B3499F998371238();
		uParam1->f_6 = uParam0;
		unk_0x925BD1075D119B45(uParam0, 1);
	}
}

var func_31(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xACAD99314B51277E(Param0);
	unk_0xBC0D06064C5B5413(uVar0, func_12(unk_0x393E9918BC37548A(), 1f, 1f));
	unk_0x925BD1075D119B45(uVar0, iParam3);
	return uVar0;
}

void func_32(var uParam0, char* sParam1, int iParam2)
{
	unk_0x39F932B751C1253B(uParam0, sParam1, func_33(iParam2), 1);
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
		if (!unk_0x79FCE4565761C974(sParam1))
		{
			if (!unk_0x2553916E420E8EF0(sParam1, ""))
			{
				func_35(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9B35D07DCD0F0B43();
}

void func_35(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xE1A3A3468E806677(sParam0);
	unk_0x743C4524DF783B2F(iParam1, 1);
}

int func_36(var uParam0)
{
	if (!unk_0x2BF5E63466422C38(uParam0->f_16))
	{
		if (unk_0x01891E23361FD324(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_37(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x0E7925961F4058CF())
	{
		if (unk_0xA99E47125B44409B())
		{
			return 1;
		}
		if (func_40(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x0E7925961F4058CF())
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
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

int func_39()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9B35D07DCD0F0B43();
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
	
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
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
	
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xD4B321D9096B01FC(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x78B310CB286001B8(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xB7655C0927ADAB13(iParam0, 1))
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
				if (!unk_0xB7655C0927ADAB13(iParam0, 1))
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
	if (!unk_0x79FCE4565761C974(sParam0))
	{
		unk_0x38C6C3B6F4074898(sParam0);
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
		if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
		{
			if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 29) && !unk_0xA2BC31158C8CEFD2(uParam0->f_13, 28))
			{
				if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
				{
					unk_0xA7E1CFAAFBBD71F8(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 29) && unk_0xA2BC31158C8CEFD2(uParam0->f_13, 28))
		{
			if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
			{
				unk_0xA7E1CFAAFBBD71F8(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x3B76114EC84D5812(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0xD4B321D9096B01FC(uParam0->f_21))
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
			uVar24 = unk_0x78FEEDC74FCCF78F(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 50f, 0, iVar25);
			if (unk_0xD960230552BC4165(uVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0xD960230552BC4165(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
				{
					if (!unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0) || !bParam17)
					{
						if (func_42(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
								{
									unk_0x4465F4659EE7FAE4(uParam0->f_17[iVar0], 1f);
									if (unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_15()))
									{
										unk_0x91F590A9823EB649(uParam0->f_17[iVar0]);
									}
									if (unk_0x411C065ADB822CD9(uParam0->f_17[iVar0], -1794415470) == 7 && !func_59(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x3DAA08BFD9A801FD(uParam0->f_17[iVar0]) && !unk_0x3DEC1EF42CC05213(uParam0->f_17[iVar0]))
										{
											unk_0xCC94EE23853F38E4(uParam0->f_17[iVar0], 1);
											unk_0x31A7662B885C7549(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x946F21DEBF92050D(uParam0->f_17[iVar0], iVar0);
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
			unk_0x3B76114EC84D5812(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
				{
					if (!unk_0xEC9DA7D08BCA2C06(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xC6612209077465DD(uParam0->f_17[iVar0]);
					}
					if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_15()))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0x3B1D4A59B3B6B42C(uParam0->f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 26))
	{
		if ((!func_56(uParam0) && unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203())) && !unk_0xD4B321D9096B01FC(iParam10))
		{
			iVar13 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (unk_0xD960230552BC4165(iVar13, 0))
			{
				if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 13))
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
							if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0xBAC643F143880136(0, iVar26);
						if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar27]))
						{
							func_32(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_34(uParam0, "MORE_SEATS", 0);
						unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x3B76114EC84D5812(&(uParam0->f_13), 13);
			func_43("MORE_SEATS");
		}
		if (!unk_0xD4B321D9096B01FC(iParam10))
		{
			if ((!unk_0x2BF5E63466422C38(uParam0->f_17[0]) || !unk_0x2BF5E63466422C38(uParam0->f_17[1])) || !unk_0x2BF5E63466422C38(uParam0->f_17[2]))
			{
				if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 31))
				{
					if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()) && !func_37(uParam0, 2))
					{
						iVar13 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
						if (func_55(iVar13, uParam0))
						{
							func_34(uParam0, "CMN_VEHSUIT", 0);
							unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
				{
					unk_0x3B76114EC84D5812(&(uParam0->f_13), 31);
					func_43("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xD960230552BC4165(iParam10, 0))
		{
			if (unk_0x7E6F0519746C2295(unk_0x0FA8183DAD2B3203(), iParam10))
			{
				if (unk_0x26BB91778477F482(0, 75))
				{
					unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 21))
			{
				unk_0x3B76114EC84D5812(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD4B321D9096B01FC(uParam0->f_17[iVar0]))
			{
				if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
				{
					if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_15()))
					{
						unk_0x11BA22EEA4D73366(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x11BA22EEA4D73366(uParam0->f_17[iVar0], 0);
					}
					if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
					{
						iVar13 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
						if (unk_0xD960230552BC4165(iVar13, 0))
						{
							if (unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_15()))
							{
								if (!func_56(uParam0) && unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
								{
									if (!func_54(uParam0->f_17[iVar0]))
									{
										unk_0x91F590A9823EB649(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0xF4B969E0807E76C7(iVar13, 0))
						{
							if (unk_0x7E6F0519746C2295(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xE294A1321110B3E9(iVar13) && !unk_0x0514219B96C5A22A(iVar13))
								{
									Var28 = { unk_0xACE5E491FC1B0D37(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x3D1E9B6872B0AE00(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_15()))
					{
						if (unk_0xA2DB82364F08360E(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x4D57D3E5ECE15A41(uParam0->f_17[iVar0], 0);
							if (!unk_0xF4B969E0807E76C7(iVar13, 0))
							{
								if (unk_0xD960230552BC4165(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x7E6F0519746C2295(unk_0x0FA8183DAD2B3203(), iVar13))
										{
											if (unk_0xB8D4A2BAA78AB950(iVar13) > 5f)
											{
												unk_0x3D1E9B6872B0AE00(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x3D1E9B6872B0AE00(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
									{
										iVar31 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
									}
									if (unk_0xD960230552BC4165(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0xB8D4A2BAA78AB950(iVar13) > 5f)
											{
												unk_0x3D1E9B6872B0AE00(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x3D1E9B6872B0AE00(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_15()))
					{
						iVar32 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
						if (unk_0xD4B321D9096B01FC(iVar32))
						{
							if (func_42(iVar32, uParam0, 0))
							{
								if (func_53(iVar0, uParam0) || !unk_0xA2BC31158C8CEFD2(uParam0->f_13, 27))
								{
									unk_0x946F21DEBF92050D(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_53(iVar0, uParam0))
							{
								if (unk_0x7F375072508F738F(iVar32) == joaat("sentinel2"))
								{
									unk_0x946F21DEBF92050D(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x946F21DEBF92050D(uParam0->f_17[iVar0], 2);
								}
								func_52(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_15()) && !func_51(uParam0->f_17[iVar0], iParam10)) && !func_50(uParam0->f_17[iVar0], iParam10))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_15()))
							{
								if (((!unk_0x3DAA08BFD9A801FD(uParam0->f_17[iVar0]) && !unk_0x3DEC1EF42CC05213(uParam0->f_17[iVar0])) && !unk_0x1C930EA46962E6D0(uParam0->f_17[iVar0])) && !unk_0xEC9DA7D08BCA2C06(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x411C065ADB822CD9(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0xC6612209077465DD(uParam0->f_17[iVar0]);
									}
									unk_0x3B1D4A59B3B6B42C(uParam0->f_17[iVar0], func_15());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x9B35D07DCD0F0B43();
								uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
								unk_0xB2FBFC8F00374981(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_30(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
					{
						if (((func_27(uParam0->f_17[iVar0], 1) || func_51(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xD960230552BC4165(iParam10, 0) && !unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iParam10, 0)))
						{
							if (unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
							{
								unk_0xAA2276003B2ADF1B(&(uParam0->f_1[iVar0]));
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
					else if (unk_0xD960230552BC4165(iParam10, 0))
					{
						if (!unk_0x7E6F0519746C2295(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x9B69E0F5342BA1A8(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xA2BC31158C8CEFD2(uParam0->f_13, 11)) && !((bParam17 && unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0)) && !unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iParam10, 0)))
							{
								if (unk_0xA2DB82364F08360E(uParam0->f_17[iVar0]))
								{
									if (!unk_0x95ED3BD0F52D542A(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_27(uParam0->f_17[iVar0], 1))
										{
											if (func_26(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x411C065ADB822CD9(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x2DCF88AC859255F3(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_15()))
									{
										if ((((!unk_0x1C930EA46962E6D0(uParam0->f_17[iVar0]) && !unk_0x3DAA08BFD9A801FD(uParam0->f_17[iVar0])) && !unk_0x3DEC1EF42CC05213(uParam0->f_17[iVar0])) && !unk_0xEC9DA7D08BCA2C06(uParam0->f_17[iVar0])) && !unk_0xCFBE5B663F1567A7(iParam10))
										{
											unk_0x91F590A9823EB649(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x411C065ADB822CD9(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_59(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x1C930EA46962E6D0(uParam0->f_17[iVar0]) && !unk_0x1C930EA46962E6D0(unk_0x0FA8183DAD2B3203())) && !func_49(uParam0->f_17[iVar0], 2f)) && !unk_0x3DAA08BFD9A801FD(uParam0->f_17[iVar0])) && !unk_0x3DEC1EF42CC05213(uParam0->f_17[iVar0])) && !unk_0xCFBE5B663F1567A7(iParam10))
										{
											unk_0xCC94EE23853F38E4(uParam0->f_17[iVar0], 1);
											if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 10))
											{
												unk_0x4465F4659EE7FAE4(uParam0->f_17[iVar0], 1f);
											}
											unk_0x31A7662B885C7549(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xE2806AF865804258(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
										unk_0xB2FBFC8F00374981(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_15()))
							{
								if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x3DAA08BFD9A801FD(uParam0->f_17[iVar0]) && !unk_0x3DEC1EF42CC05213(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x411C065ADB822CD9(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0xC6612209077465DD(uParam0->f_17[iVar0]);
										}
										unk_0xCC94EE23853F38E4(uParam0->f_17[iVar0], 0);
										unk_0x3B1D4A59B3B6B42C(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (unk_0x7E6F0519746C2295(unk_0x0FA8183DAD2B3203(), iParam10))
						{
							if (!unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_15()))
							{
								if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 21))
								{
									unk_0x3B1D4A59B3B6B42C(uParam0->f_17[iVar0], func_15());
								}
							}
							else if (unk_0xA2BC31158C8CEFD2(uParam0->f_13, 21))
							{
								unk_0x91F590A9823EB649(uParam0->f_17[iVar0]);
								unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x266F39A2B4FE04D0(uParam0->f_17[iVar0], func_15()) && !unk_0xCFBE5B663F1567A7(iParam10))
						{
							unk_0x91F590A9823EB649(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
				{
					unk_0xAA2276003B2ADF1B(&(uParam0->f_1[iVar0]));
					func_43(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
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
						if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
						{
							if (func_54(uParam0->f_17[iVar0]) || unk_0x9B69E0F5342BA1A8(uParam0->f_17[iVar0], unk_0x0FA8183DAD2B3203(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
					{
						if (!unk_0x9B69E0F5342BA1A8(uParam0->f_17[iVar0], unk_0x0FA8183DAD2B3203(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_54(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x9B35D07DCD0F0B43();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 5))
							{
								func_34(uParam0, sParam7, 0);
								unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 5);
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
										if (!unk_0x79FCE4565761C974(uVar19[iVar0]))
										{
											if (!unk_0x2553916E420E8EF0(uVar19[iVar0], ""))
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
		unk_0x3B76114EC84D5812(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x39A01A052D9B5FF0(uParam0->f_1[iVar0]))
				{
					unk_0xAA2276003B2ADF1B(&(uParam0->f_1[iVar0]));
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
			unk_0xA1E7A40E1F56E511(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xA1E7A40E1F56E511(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xA1E7A40E1F56E511(&(uParam1->f_13), 16);
			break;
	}
}

void func_46(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x79FCE4565761C974(sParam1))
		{
			if (!unk_0x2553916E420E8EF0(sParam1, ""))
			{
				func_47(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9B35D07DCD0F0B43();
}

void func_47(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xE1A3A3468E806677(sParam0);
	unk_0x0AC9F8E1AFCEC860(uParam1);
	unk_0x743C4524DF783B2F(iParam2, 1);
}

int func_48(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xA2BC31158C8CEFD2(uParam1->f_13, 14);
		
		case 1:
			return unk_0xA2BC31158C8CEFD2(uParam1->f_13, 15);
		
		case 2:
			return unk_0xA2BC31158C8CEFD2(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_49(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x5294582CE404D3F4(iParam0, 0))
	{
		iVar0 = unk_0x4D57D3E5ECE15A41(iParam0, 0);
		if (!unk_0xF4B969E0807E76C7(iVar0, 0))
		{
			if (unk_0xB8D4A2BAA78AB950(iVar0) > fParam1)
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
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (!unk_0x266F39A2B4FE04D0(iParam0, func_15()))
		{
			iVar0 = unk_0x31D8B4E11CC6050C(iParam0);
			if (unk_0xD960230552BC4165(iParam1, 0))
			{
				if (unk_0x9B69E0F5342BA1A8(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0xD4B321D9096B01FC(iParam1))
		{
			if (unk_0xD960230552BC4165(iParam1, 0))
			{
				if (unk_0x7E6F0519746C2295(iParam0, iParam1))
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
			unk_0xA1E7A40E1F56E511(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xA1E7A40E1F56E511(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xA1E7A40E1F56E511(&(uParam1->f_13), 19);
			break;
	}
}

int func_53(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xA2BC31158C8CEFD2(uParam1->f_13, 17);
		
		case 1:
			return unk_0xA2BC31158C8CEFD2(uParam1->f_13, 18);
		
		case 2:
			return unk_0xA2BC31158C8CEFD2(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		iVar0 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
		if (unk_0xD960230552BC4165(iVar0, 0))
		{
			if (!unk_0x2BF5E63466422C38(iParam0))
			{
				iVar1 = unk_0xA4BF70099C074BA0(iParam0);
				if (unk_0xD960230552BC4165(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x9B69E0F5342BA1A8(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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
	
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		if (unk_0x7F375072508F738F(iParam0) == joaat("bus") || unk_0x7F375072508F738F(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x2BF5E63466422C38(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x300C62F79A4441EB(iParam0, 0, 0);
			if (!unk_0x2BF5E63466422C38(iVar3))
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
			iVar4 = unk_0x300C62F79A4441EB(iParam0, 1, 0);
			if (!unk_0x2BF5E63466422C38(iVar4))
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
			iVar5 = unk_0x300C62F79A4441EB(iParam0, 2, 0);
			if (!unk_0x2BF5E63466422C38(iVar5))
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
	
	if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
	{
		uVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
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
	
	if (!unk_0x2BF5E63466422C38(iParam1))
	{
		if (unk_0xA2DB82364F08360E(iParam1))
		{
			uVar0 = unk_0x4D57D3E5ECE15A41(iParam1, 0);
			if (!unk_0xF4B969E0807E76C7(uVar0, 0))
			{
				if (unk_0xD960230552BC4165(iVar0, 0))
				{
					if (unk_0x7E6F0519746C2295(unk_0x0FA8183DAD2B3203(), iVar0))
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
				else if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
				if (unk_0xD4B321D9096B01FC(iVar0))
				{
					if (func_42(iVar0, uParam0, 0))
					{
						if (unk_0xD960230552BC4165(iVar0, 0))
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
	
	if (!unk_0xF4B969E0807E76C7(uParam0, 0))
	{
		fVar0 = unk_0xB8D4A2BAA78AB950(iParam0);
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
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0xD960230552BC4165(iParam1, 0))
		{
			iVar0 = unk_0xA4BF70099C074BA0(iParam0);
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
	
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
	{
		iVar0 = unk_0x31D8B4E11CC6050C(unk_0x0FA8183DAD2B3203());
		if (unk_0xD960230552BC4165(iVar0, 0))
		{
			iVar1 = unk_0x300C62F79A4441EB(iVar0, 0, 0);
			if (!unk_0x2BF5E63466422C38(iVar1))
			{
				if (iVar1 != unk_0x0FA8183DAD2B3203())
				{
					if (unk_0x00123AB82C5FAC28(iVar1))
					{
						if (!unk_0x8752F912B1823E3A(iVar1, unk_0x0FA8183DAD2B3203()))
						{
							unk_0x6E2920E14F5F962C(iVar1, unk_0x0FA8183DAD2B3203(), 2000, 2048, 2);
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
	
	if (!unk_0xA2BC31158C8CEFD2(uParam0->f_13, 25))
	{
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD4B321D9096B01FC(uParam0->f_17[iVar0]))
			{
				if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
				{
					unk_0x1DB66BD2267055C0(uParam0->f_17[iVar0], 32, 0);
					unk_0x1DB66BD2267055C0(uParam0->f_17[iVar0], 305, 1);
					unk_0x1DB66BD2267055C0(uParam0->f_17[iVar0], 268, 1);
					unk_0xE2806AF865804258(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xA1E7A40E1F56E511(&(uParam0->f_13), 25);
	}
}

void func_62(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD4B321D9096B01FC(uParam0->f_17[iVar0]))
		{
			if (!unk_0x2BF5E63466422C38(uParam0->f_17[iVar0]))
			{
				if (unk_0xA2DB82364F08360E(uParam0->f_17[iVar0]))
				{
					unk_0x773434A2783CA924(uParam0->f_17[iVar0], 0);
					unk_0xD2939754183602A1(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			if (unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
			{
				unk_0x773434A2783CA924(unk_0x0FA8183DAD2B3203(), 0);
				unk_0xD2939754183602A1(unk_0x0FA8183DAD2B3203(), 0);
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
	
	if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_96, 0))
	{
		if (unk_0x39A01A052D9B5FF0(uLocal_102))
		{
			unk_0xAA2276003B2ADF1B(&uLocal_102);
		}
		if (iLocal_36 <= 2)
		{
			iLocal_80 = (unk_0xFA2382CB8962720F() * ((60 * iLocal_82) + iLocal_83));
			iLocal_80 = (iLocal_80 + unk_0x9B35D07DCD0F0B43());
			iLocal_84 = (iLocal_80 - unk_0xFA2382CB8962720F() * 30);
		}
		else if (iLocal_36 > 6)
		{
			iLocal_80 = (unk_0xFA2382CB8962720F() * ((60 * iLocal_82) + iLocal_83));
			iLocal_80 = (iLocal_80 + unk_0x9B35D07DCD0F0B43());
			iLocal_84 = (iLocal_80 - unk_0xFA2382CB8962720F() * 30);
		}
		else if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			iLocal_97 = unk_0x847817A65E16621A(iLocal_89, Local_70, fLocal_74, 1, 1, 0);
			iLocal_93[0] = unk_0x81024A420EDCE2B5(iLocal_97, 6, iLocal_87, -1, 1, 1);
			iLocal_93[1] = unk_0x81024A420EDCE2B5(iLocal_97, 6, iLocal_87, 0, 1, 1);
			unk_0x8CBD7ED64E4A522F("rghCop", &uLocal_118);
			unk_0x9B54A3CCAAB4F5FB(4, uLocal_118, joaat("player"));
			unk_0xDEB0AA30ABFDCF48(iLocal_93[0], 39, 1);
			unk_0xDEB0AA30ABFDCF48(iLocal_93[1], 39, 1);
			iVar0 = 0;
			while (iVar0 < iLocal_93)
			{
				unk_0xC167C31F20B1FD61(iLocal_93[iVar0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x1FB49AA1C2C2A2F3(iLocal_93[iVar0], 100f);
				unk_0xDB889DCC8B0139E6(iLocal_93[iVar0], uLocal_118);
				iVar0++;
			}
		}
		iLocal_38 = 2;
	}
}

void func_66()
{
	int iVar0;
	
	if (!unk_0xF4B969E0807E76C7(iLocal_96, 0))
	{
		if (func_101() || unk_0x2BF5E63466422C38(iLocal_90[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_90)
			{
				if (!unk_0x2BF5E63466422C38(iLocal_90[iVar0]))
				{
					if (!unk_0x39A01A052D9B5FF0(uLocal_99[iVar0]))
					{
						uLocal_99[iVar0] = func_10(iLocal_90[iVar0], 1, 145);
						unk_0xDEB0AA30ABFDCF48(iLocal_90[iVar0], 1, 0);
						unk_0xA12E1659DEF57244(&uLocal_120);
						unk_0x2DCF88AC859255F3(0, 0, 0);
						unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
						unk_0x15A7B753872B3CE3(uLocal_120);
						unk_0xC544A8E1032AC1CF(iLocal_90[iVar0], uLocal_120);
						unk_0x78829A259A6975CD(&uLocal_120);
					}
				}
				else if (unk_0x39A01A052D9B5FF0(uLocal_99[iVar0]))
				{
					unk_0xAA2276003B2ADF1B(&(uLocal_99[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_79)
		{
			if (!unk_0x2BF5E63466422C38(iLocal_90[0]))
			{
				if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iLocal_90[0], 50f, 50f, 50f, 0, 1, 0))
				{
					unk_0x12038E5513D763A5(iLocal_90[0], iLocal_96, unk_0x0FA8183DAD2B3203(), 8, 25f, 786469, -1f, -1f, 1);
					iLocal_79 = 1;
				}
			}
		}
		if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_96, 0))
		{
			if (unk_0x39A01A052D9B5FF0(uLocal_102))
			{
				unk_0xAA2276003B2ADF1B(&uLocal_102);
			}
			func_100(&uLocal_106, 0, 0);
			iLocal_38 = 2;
		}
		else if (unk_0xBAA38708D7439CA7(iLocal_96, -1, 0) || unk_0x2BF5E63466422C38(iLocal_90[0]))
		{
			func_100(&uLocal_106, 0, 0);
		}
		else
		{
			func_67();
		}
	}
}

void func_67()
{
	if (!unk_0x2BF5E63466422C38(iLocal_90[0]) && !unk_0xF4B969E0807E76C7(iLocal_96, 0))
	{
		if (unk_0x95ED3BD0F52D542A(iLocal_90[0], iLocal_96, 0))
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
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
	{
		func_100(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_71(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_71(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE5409F09171D0BEE())
	{
		if (unk_0x9B35D07DCD0F0B43() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x79FCE4565761C974(iVar0))
	{
		if (!unk_0x393E9918BC37548A())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_99(iVar0))
	{
		func_98();
	}
	if (func_97(uParam1) && unk_0x0975E9E48EA2CC7B(uParam1))
	{
		iVar1 = 0;
		if (unk_0x4625051E51BA911B(uParam1))
		{
			unk_0x82A2F38195C2E953(unk_0x3D464779B732760F(iParam1));
			unk_0x443D0DA3964A4371(unk_0x3D464779B732760F(iParam1), 1);
			if (unk_0x9DEA7CC8D17DB89A(unk_0x3D464779B732760F(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x905FBA24E7FA8D23(iParam1))
		{
			unk_0x374DFF939ADCCC9A(unk_0xD05B0DA3866791D0(iParam1));
			if (unk_0x2C7F1A82D57EBB18(unk_0xD05B0DA3866791D0(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0F100E7952E44923(iParam1))
		{
			unk_0xA0CB3588697ABD83(unk_0xF0EFBC96AEA7ABA1(iParam1));
			if (unk_0xB12EB2EC44BBAC6B(unk_0xF0EFBC96AEA7ABA1(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE5409F09171D0BEE())
		{
			if (func_92(uParam0, bParam7, bParam9, 0))
			{
				func_88(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_76(iVar0))
				{
					if ((unk_0x79FCE4565761C974(uParam0->f_3) && !unk_0x79FCE4565761C974(iVar0)) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
					{
						if ((iVar1 && !unk_0x0945988C02AF3025()) && uParam8)
						{
							if (!func_99(iVar0))
							{
								func_75(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x2553916E420E8EF0("CMN_HINT", iVar0))
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
				if (unk_0x79FCE4565761C974(uParam0->f_3) && !unk_0x79FCE4565761C974(iVar0))
				{
					if (((unk_0x62E95D2FED28E41C(iParam1) && iVar1) && !unk_0x0945988C02AF3025()) && uParam8)
					{
						if (!func_99(iVar0))
						{
							func_75(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x2553916E420E8EF0("CMN_HINT", iVar0))
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
			if (!unk_0x79FCE4565761C974(sParam5))
			{
				if (func_99(sParam5))
				{
					unk_0x0D23E3918F7AF11B(1);
				}
			}
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
			{
				if (unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(3) == 3 || unk_0x328DC5757076B0D5(3) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(6) == 3 || unk_0x328DC5757076B0D5(6) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(4) == 3 || unk_0x328DC5757076B0D5(4) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(5) == 3 || unk_0x328DC5757076B0D5(5) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE3D760E77944F94(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(2) == 3 || unk_0x328DC5757076B0D5(2) == 4)
					{
						func_100(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC7EAF5DCD508410E() == 3 || unk_0xC7EAF5DCD508410E() == 4)
				{
					func_100(uParam0, iVar0, 1);
				}
			}
			if (!func_92(uParam0, bParam7, bParam9, 0))
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
		func_100(uParam0, iVar0, 0);
	}
}

void func_72(var uParam0)
{
	if (func_97(unk_0x0FA8183DAD2B3203()))
	{
		unk_0xECC035CAE5B59E06(unk_0x0FA8183DAD2B3203());
	}
	if (unk_0xE5409F09171D0BEE())
	{
		unk_0x538F8D7D228037B6(1);
		unk_0xAB681892AAC7844A(0);
		unk_0x8E3496DF5BF7F24D("HINT_CAM_SCENE");
		unk_0xF530F03252D7AEE0("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x3E5A3FD805488EB9("FocusOut", 0, 0);
			unk_0x9964F5BBD9415AB7(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x9B35D07DCD0F0B43()
		{
			return 1;
		}
	}
	return 0;
}

int func_74(bool bParam0)
{
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111560.f_10044.f_100++;
			}
			return Global_111560.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111560.f_10044.f_101++;
			}
			return Global_111560.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111560.f_10044.f_102++;
			}
			return Global_111560.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_75(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

int func_76(char* sParam0)
{
	if (!func_77(1, 1, 0))
	{
		if ((!unk_0x9591DE0F00127F2A(sParam0) && func_99(sParam0)) || func_99("CMN_HINT"))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
		return 0;
	}
	switch (Global_41396)
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
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x16587C6F71675106())
	{
		return 0;
	}
	if (func_87(0))
	{
		return 0;
	}
	if (func_86())
	{
		return 0;
	}
	if (unk_0x4ABA84DE907E0474())
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (unk_0x222F76006659B0EB(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_58652)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
		{
			if (unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(3) == 3 || unk_0x328DC5757076B0D5(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(6) == 3 || unk_0x328DC5757076B0D5(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(4) == 3 || unk_0x328DC5757076B0D5(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(5) == 3 || unk_0x328DC5757076B0D5(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFE3D760E77944F94(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(2) == 3 || unk_0x328DC5757076B0D5(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC7EAF5DCD508410E() == 3 || unk_0xC7EAF5DCD508410E() == 4)
			{
				return 0;
			}
			if (unk_0x9522187D5FDEA6E4())
			{
				return 0;
			}
		}
	}
	if ((func_85() || func_84(Global_4456448.f_190930)) || func_83())
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			iVar1 = func_82(unk_0x0FA8183DAD2B3203(), 0);
			if (((unk_0x2068C310844A89D8(iVar0, iVar1) || (unk_0x7F375072508F738F(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x7F375072508F738F(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x7F375072508F738F(iVar0) == joaat("riot2") && iVar1 == 0) && func_81(iVar0, 10)) && unk_0xF05B9E4C6631EA28(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686915)
	{
		return 0;
	}
	if (func_78(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_79(iParam0, 1, 1))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
		else if ((Global_1312873 && iParam0 == unk_0x7C7787D2D7139A85()) && func_79(iParam0, 1, 0))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_79(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xD699DB8EAB756F25(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_80()
{
	return -1;
}

int func_81(int iParam0, int iParam1)
{
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		if (unk_0x6AA7F87D45193D03(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x94FA12918F306658(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0x5294582CE404D3F4(iParam0, iParam1))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(iParam0, iParam1);
			if (unk_0xD4B321D9096B01FC(iVar0))
			{
				iVar1 = unk_0x26BC048DC7E3F551(unk_0x7F375072508F738F(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBAA38708D7439CA7(iVar0, iVar3, 0))
					{
						if (unk_0x300C62F79A4441EB(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_83()
{
	return Global_2448961.f_17;
}

bool func_84(int iParam0)
{
	return iParam0 == 51;
}

var func_85()
{
	return Global_2448961.f_16;
}

bool func_86()
{
	return unk_0x9B35D07DCD0F0B43() <= Global_22350.f_5878 + 100;
}

int func_87(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
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
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_88(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319113 == 1)
	{
		return;
	}
	if (unk_0xF4B969E0807E76C7(uParam1, 0))
	{
		func_100(uParam0, 0, 0);
	}
	if (func_91(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x4625051E51BA911B(iParam1))
		{
			iVar0 = unk_0x3D464779B732760F(iParam1);
			if (!unk_0x5294582CE404D3F4(iVar0, 0))
			{
				if (unk_0x7FA2061748BA645E(iVar0))
				{
					if (!func_89())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x0F81A86FA23D44FA(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x538F8D7D228037B6(0);
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
	unk_0xFFFB9D39E6C8D02D(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x6E2920E14F5F962C(unk_0x0FA8183DAD2B3203(), iParam1, -1, iVar3, iVar4);
	unk_0x3E5A3FD805488EB9("FocusIn", 0, 0);
	unk_0x7D17F1A2E0EEDBB9("HINT_CAM_SCENE");
	unk_0x9964F5BBD9415AB7(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9B35D07DCD0F0B43();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_89()
{
	return func_90(unk_0x7C7787D2D7139A85());
}

int func_90(int iParam0)
{
	if (unk_0x7F375072508F738F(unk_0x23625FE58BACEBFD(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_91(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_92(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9B35D07DCD0F0B43() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					if (func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
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
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
					{
						if (!func_96(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
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
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_95(bParam1, bParam2, bParam3) || unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || unk_0x5AFC77A2CEA0DE1E(unk_0x0FA8183DAD2B3203(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
					{
						if (func_94(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_93(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || func_93(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || unk_0x5AFC77A2CEA0DE1E(unk_0x0FA8183DAD2B3203(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_94(bParam1, bParam2, bParam3))
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
		func_98();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_93(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0x5F5EDE61626C58B9(unk_0x7C7787D2D7139A85()))
		{
			unk_0x572062A62138FBA2(0, 140, 1);
			unk_0x572062A62138FBA2(0, 80, 1);
			if (unk_0x38CEC20C56D8586B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_94(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x572062A62138FBA2(0, 80, 1);
		if (unk_0xD04F46D3CD9D946F())
		{
			if (unk_0x38CEC20C56D8586B(0, 80))
			{
				unk_0x538F8D7D228037B6(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_95(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0x5F5EDE61626C58B9(unk_0x7C7787D2D7139A85()))
		{
			unk_0x572062A62138FBA2(0, 140, 1);
			unk_0x572062A62138FBA2(0, 80, 1);
			if (unk_0x0B6782DED1C4B3B1(0, 80) && unk_0x9B35D07DCD0F0B43() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x572062A62138FBA2(0, 80, 1);
		if (unk_0xD04F46D3CD9D946F())
		{
			if (unk_0x0B6782DED1C4B3B1(0, 80) && unk_0x9B35D07DCD0F0B43() > Global_116)
			{
				unk_0x538F8D7D228037B6(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (unk_0x905FBA24E7FA8D23(iParam0))
		{
			if (unk_0xD960230552BC4165(unk_0xD05B0DA3866791D0(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4625051E51BA911B(iParam0))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x3D464779B732760F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0F100E7952E44923(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_98()
{
	unk_0xA1E7A40E1F56E511(&Global_7357, 4);
}

bool func_99(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

void func_100(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x393E9918BC37548A())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4591, 26))
		{
			return;
		}
	}
	if (unk_0xE5409F09171D0BEE())
	{
		unk_0xAB681892AAC7844A(iParam2);
		unk_0xF530F03252D7AEE0("FocusIn");
		unk_0x8E3496DF5BF7F24D("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x3E5A3FD805488EB9("FocusOut", 0, 0);
			unk_0x9964F5BBD9415AB7(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x538F8D7D228037B6(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x79FCE4565761C974(sVar0))
	{
		if (!unk_0x393E9918BC37548A())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x79FCE4565761C974(uParam0->f_3))
	{
		if (func_99(uParam0->f_3))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
	}
	if (!unk_0x79FCE4565761C974(sVar0))
	{
		if (func_99(sVar0))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
	}
}

int func_101()
{
	if (unk_0xD4B321D9096B01FC(iLocal_96))
	{
		if (!unk_0xF4B969E0807E76C7(iLocal_96, 0))
		{
			if ((((((unk_0x35D31BEBAFD53DE6(iLocal_96) < 300 || unk_0xF524E590E8C8C6BE(iLocal_96) < 200f) || unk_0xCFBE5B663F1567A7(iLocal_96)) || (unk_0x82C6A64BFC7E5440(iLocal_96, 0, 0) && unk_0x82C6A64BFC7E5440(iLocal_96, 1, 0))) || (unk_0x82C6A64BFC7E5440(iLocal_96, 4, 0) && unk_0x82C6A64BFC7E5440(iLocal_96, 5, 0))) || (unk_0x82C6A64BFC7E5440(iLocal_96, 0, 0) && unk_0x82C6A64BFC7E5440(iLocal_96, 4, 0))) || (unk_0x82C6A64BFC7E5440(iLocal_96, 1, 0) && unk_0x82C6A64BFC7E5440(iLocal_96, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_102()
{
	int iVar0;
	int iVar1;
	
	iLocal_96 = func_104(0);
	if (!unk_0xD960230552BC4165(iLocal_96, 0))
	{
		iLocal_96 = unk_0x847817A65E16621A(iLocal_88, Local_64, uLocal_73, 1, 1, 0);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			unk_0xE40520F16D25E48C(iLocal_96, iVar0, 1);
			iVar0++;
		}
		if (iLocal_85 != -1)
		{
			unk_0xE40520F16D25E48C(iLocal_96, iLocal_85, 0);
		}
	}
	unk_0xDF56144F9EE1975F(iLocal_96, 1);
	uLocal_102 = func_103(iLocal_96, 0, 0);
	if (iLocal_36 != 5 && iLocal_36 != 6)
	{
		if (iLocal_36 > 6)
		{
			unk_0x3427075D3608A3BB(iLocal_96, 0, 0, 0, 0, 1, 0, 0, 0);
			unk_0x5F5C6A264C2CA8B1(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_96, 0, 0, 0);
		}
		func_35(sLocal_103, 7500, 1);
	}
	else
	{
		iLocal_90[0] = unk_0x81024A420EDCE2B5(iLocal_96, 26, iLocal_86, -1, 1, 1);
		iLocal_90[1] = unk_0x81024A420EDCE2B5(iLocal_96, 26, iLocal_86, 0, 1, 1);
		unk_0x8CBD7ED64E4A522F("rghCriminal", &uLocal_119);
		unk_0x9B54A3CCAAB4F5FB(5, uLocal_119, joaat("player"));
		iVar1 = 0;
		while (iVar1 < iLocal_90)
		{
			unk_0xCC94EE23853F38E4(iLocal_90[iVar1], 1);
			unk_0xC167C31F20B1FD61(iLocal_90[iVar1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
			unk_0xDB889DCC8B0139E6(iLocal_90[iVar1], uLocal_119);
			iVar1++;
		}
		unk_0x24BD9CEBA5D40F00(iLocal_90[0], iLocal_96, 25f, 786599);
		func_35("PMDL_REC", 7500, 1);
	}
	if (!unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
	{
		iLocal_98 = unk_0x9B79A29933E4A8FA();
	}
	iLocal_38 = 1;
}

int func_103(var uParam0, bool bParam1, bool bParam2)
{
	return func_11(uParam0, !bParam1, bParam2);
}

int func_104(int iParam0)
{
	if (unk_0xD960230552BC4165(Global_110270.f_222[iParam0], 0))
	{
		unk_0xE5C667CF3B4642D2(Global_110270.f_222[iParam0], 1, 1);
		return Global_110270.f_222[iParam0];
	}
	return 0;
}

int func_105()
{
	if (unk_0xD4B321D9096B01FC(iLocal_96))
	{
		if (unk_0xD960230552BC4165(iLocal_96, 0))
		{
			if (!unk_0x9B69E0F5342BA1A8(iLocal_96, unk_0x0FA8183DAD2B3203(), 300f, 300f, 300f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x2BF5E63466422C38(iLocal_90[0]))
	{
		if (unk_0x39A01A052D9B5FF0(uLocal_99[0]))
		{
			unk_0xAA2276003B2ADF1B(&(uLocal_99[0]));
		}
	}
	return 0;
}

void func_106()
{
	unk_0x6BB2B1818CAE531E(iLocal_88);
	unk_0x9F815D4FA0C47F97("PMDL", 0);
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		unk_0x6BB2B1818CAE531E(iLocal_87);
		unk_0x6BB2B1818CAE531E(iLocal_89);
	}
	else if (iLocal_36 == 5 || iLocal_36 == 6)
	{
		unk_0x6BB2B1818CAE531E(iLocal_86);
	}
	unk_0x0A43D5D11052D038(joaat("benson"), 1);
	unk_0x0A43D5D11052D038(joaat("pony2"), 1);
	if (unk_0x6DF9C43E3CC645BC(iLocal_88) && unk_0xA3D567B14856EDE1(0))
	{
		if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			if (unk_0x6DF9C43E3CC645BC(iLocal_87) && unk_0x6DF9C43E3CC645BC(iLocal_89))
			{
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 == 5 || iLocal_36 == 6)
		{
			if (unk_0x6DF9C43E3CC645BC(iLocal_86))
			{
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 > 6)
		{
			if (unk_0x059780A8877D0C70("Deliveries", 0, -1))
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

void func_107()
{
	float fVar0;
	
	Local_64 = { func_109(func_111(), iLocal_36) };
	fLocal_73 = func_108(func_111(), iLocal_36);
	if (iLocal_36 > 6)
	{
		sLocal_103 = "PMDL_TRUCK";
		sLocal_104 = "PMDL_BTIM";
		sLocal_105 = "PMDL_BCKT";
		iLocal_88 = joaat("benson");
		iLocal_85 = 2;
	}
	if (func_111() == 10)
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
	else if (func_111() == 14)
	{
		Local_67 = { -2169.828f, 4277.365f, 47.9568f };
		fVar0 = unk_0xD34AF93E9BCF12F0(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_111() == 13)
	{
		Local_67 = { -323.356f, 6264.431f, 30.4463f };
		fVar0 = unk_0xD34AF93E9BCF12F0(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_111() == 12)
	{
		Local_67 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = unk_0xD34AF93E9BCF12F0(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (func_111() == 11)
	{
		Local_67 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = unk_0xD34AF93E9BCF12F0(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	iLocal_81 = 0;
	iLocal_76 = 1;
}

float func_108(int iParam0, int iParam1)
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

Vector3 func_109(int iParam0, int iParam1)
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
	return func_110(iParam0);
}

Vector3 func_110(int iParam0)
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

int func_111()
{
	return Global_110270.f_20;
}

int func_112()
{
	return func_113(Global_110270.f_20, Global_110270.f_29);
}

int func_113(int iParam0, int iParam1)
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

void func_114()
{
	unk_0x0A43D5D11052D038(joaat("benson"), 0);
	unk_0x0A43D5D11052D038(joaat("pony2"), 0);
	unk_0x22177E6DE081D074();
	if (iLocal_77)
	{
		if (!unk_0xF4B969E0807E76C7(iLocal_98, 0))
		{
			func_115(iLocal_98, 0, 145);
		}
		unk_0x64A2CE33F8382B61(unk_0x7C7787D2D7139A85());
		func_100(&uLocal_106, 0, 0);
	}
	unk_0x9C9E32388A7886A2();
}

int func_115(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x91523661893D9A04(iParam0, &uVar0);
		if (!unk_0x9591DE0F00127F2A(uVar1))
		{
			if (unk_0xA8C462EF7D9DC564(sVar1) == unk_0xA8C462EF7D9DC564("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_116(iParam0, iParam2);
	return 1;
}

void func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_122(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x300C62F79A4441EB(iParam0, -1, 0);
		if (!unk_0xD4B321D9096B01FC(iVar0))
		{
			iVar0 = unk_0x30766BC434AF2797(iParam0, -1);
		}
		if (unk_0xD4B321D9096B01FC(iVar0) && !unk_0x2BF5E63466422C38(iVar0))
		{
			if (unk_0x7F375072508F738F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x7F375072508F738F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x7F375072508F738F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111560.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x7F375072508F738F(iParam0) == Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x9591DE0F00127F2A(&(Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x2553916E420E8EF0(unk_0x8D762F81855E767B(iParam0), &(Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111560.f_32744.f_5592[iVar1] = iVar2;
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
		if (unk_0x7F375072508F738F(iParam0) == Global_111560.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x9591DE0F00127F2A(&(Global_111560.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x2553916E420E8EF0(unk_0x8D762F81855E767B(iParam0), &(Global_111560.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111560.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111560.f_32744.f_5590 = iParam1;
	Global_76301 = iParam0;
	Global_111560.f_32744.f_5588 = 1;
	func_117(iParam0, &(Global_111560.f_32744.f_5510));
}

void func_117(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		func_121(uParam1);
		uParam1->f_66 = unk_0x7F375072508F738F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x8D762F81855E767B(iParam0), 16);
		*uParam1 = unk_0x15573EDB7C261B90(iParam0);
		unk_0xA0D7A86C25861B15(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x419E9D2174D7719D(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xD71E7132121C0D3E(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xE3ED8ECBFAC24D1B(iParam0);
		uParam1->f_67 = unk_0xFAFC58D85092C270(iParam0);
		uParam1->f_69 = unk_0x20ACED1EFBCD772F(iParam0);
		uParam1->f_70 = unk_0x53B8ABE899D7A6D5(iParam0);
		unk_0xBF4B7EDAACFA006E(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3D70A45CE998115E(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xABAE008A600C0215(iParam0, 2))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 28);
		}
		if (unk_0xABAE008A600C0215(iParam0, 3))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 29);
		}
		if (unk_0xABAE008A600C0215(iParam0, 0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 30);
		}
		if (unk_0xABAE008A600C0215(iParam0, 1))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_120(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7A0A412D276E522A(iParam0, 0))
		{
			uParam1->f_68 = unk_0x331921060784BA6D(iParam0);
		}
		if (unk_0x31337ABC07783F10(uParam1->f_66))
		{
			if (unk_0x0B70023E8CF129D6(iParam0))
			{
				switch (unk_0x80560A645560481F(iParam0))
				{
					case 3:
					case 0:
						unk_0x3B76114EC84D5812(&(uParam1->f_77), 23);
						unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x3B76114EC84D5812(&(uParam1->f_77), 23);
						unk_0x3B76114EC84D5812(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xDD2D40FFFA144057(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 9);
		}
		if (unk_0x0064CADA7C0E1595(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 10);
		}
		if (unk_0x2C905D7AE4F3E3EA(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 13);
			unk_0xD6427EDEA38DA83A(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x86932E0F4CD07767(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 12);
		}
		func_119(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x21A121AEFFBC84B4(iParam0, iVar0 + 1))
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_77), func_118(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x7B2058C6797B2C04(iParam0, 0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(uParam1->f_77), 11);
		}
		if (unk_0x145DAE1A4D0EA05D(iParam0, "IgnoredByQuickSave") && unk_0x607A7A0DD7EB666D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(uParam1->f_77), 27);
		}
	}
}

int func_118(int iParam0)
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

int func_119(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD960230552BC4165(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x6AA7F87D45193D03(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x8FAB2067996663AC(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x8FAB2067996663AC(*iParam0, iVar1))
			{
				switch (unk_0xD1A3841ED22A9A4F(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xF05B9E4C6631EA28(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x627338D61F1048BA(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x627338D61F1048BA(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_121(var uParam0)
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

int func_122(int iParam0)
{
	if ((((((((((!unk_0xD4B321D9096B01FC(iParam0) || !unk_0xD960230552BC4165(iParam0, 0)) || func_138(iParam0, 0, 0)) || func_138(iParam0, 1, 0)) || func_138(iParam0, 2, 0)) || func_137(iParam0) != 145) || func_136(iParam0)) || func_135(iParam0)) || func_134(iParam0)) || func_133(iParam0)) || !func_123(unk_0x7F375072508F738F(iParam0)))
	{
		if (func_135(iParam0))
		{
		}
		if (func_135(iParam0))
		{
		}
		if (func_138(iParam0, 0, 0))
		{
		}
		if (func_138(iParam0, 1, 0))
		{
		}
		if (func_138(iParam0, 2, 0))
		{
		}
		if (func_137(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_123(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_124(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x5EA23EAAAD4E34BF(iParam0) || unk_0x31337ABC07783F10(iParam0)) || unk_0xDC118E11A4081E9A(iParam0)) || unk_0x89771D1B3DD40E7A(iParam0))
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

int func_124(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x7576BED9351136C1(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x393E9918BC37548A()) || (iParam0 == joaat("buffalo3") && !unk_0x393E9918BC37548A())) || (iParam0 == joaat("gauntlet2") && !unk_0x393E9918BC37548A())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x393E9918BC37548A()))
	{
		if (!func_132())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x77B48D1493D695CC())
		{
			if (unk_0x100A6954526E9D29(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xC095980A527DC92E(Var1.f_0))
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
		if ((((!func_131() && !func_130()) && !func_129()) && !func_128()) && !func_132())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x77BA37DB22C66465() || unk_0xE434AB6E3DE89861()) || unk_0x39FDED461BF385C3())
		{
		}
		else if (!func_129())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_127(iParam0))
		{
			return 0;
		}
	}
	if (!func_125(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_125(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_126())
	{
		return 1;
	}
	unk_0xF6DFB55D0FF92B17(&iVar0, &uVar1);
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
	if (!unk_0x83F1366905AB3447(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_126()
{
	if (unk_0xE434AB6E3DE89861())
	{
		return unk_0x60E2BDB67AA16B1C();
	}
	return 0;
}

int func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2507711)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x71EC776E812C6A0A();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12910) && iVar1 < Global_262145.f_12911)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14210 && iVar1 < Global_262145.f_14222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14206 && iVar1 < Global_262145.f_14218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14207 && iVar1 < Global_262145.f_14219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14208 && iVar1 < Global_262145.f_14220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14209 && iVar1 < Global_262145.f_14221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14211 && iVar1 < Global_262145.f_14223)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14212 && iVar1 < Global_262145.f_14215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14213 && iVar1 < Global_262145.f_14216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14214 && iVar1 < Global_262145.f_14217)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16841 && iVar1 < Global_262145.f_16806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16836 && iVar1 < Global_262145.f_16801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16840 && iVar1 < Global_262145.f_16805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16839 && iVar1 < Global_262145.f_16804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16833 && iVar1 < Global_262145.f_16798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16834 && iVar1 < Global_262145.f_16799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16837 && iVar1 < Global_262145.f_16802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16838 && iVar1 < Global_262145.f_16803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16835 && iVar1 < Global_262145.f_16800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16832 && iVar1 < Global_262145.f_16797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16831 && iVar1 < Global_262145.f_16796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16830 && iVar1 < Global_262145.f_16795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16995 && iVar1 < Global_262145.f_17017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16996 && iVar1 < Global_262145.f_17018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16997 && iVar1 < Global_262145.f_17019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16998 && iVar1 < Global_262145.f_17020)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16999 && iVar1 < Global_262145.f_17021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17000 && iVar1 < Global_262145.f_17022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17002 && iVar1 < Global_262145.f_17023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17003 && iVar1 < Global_262145.f_17024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17004 && iVar1 < Global_262145.f_17025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17005 && iVar1 < Global_262145.f_17026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17006 && iVar1 < Global_262145.f_17027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17001 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18647 && iVar1 < Global_262145.f_18744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18648 && iVar1 < Global_262145.f_18745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18649 && iVar1 < Global_262145.f_18746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18650 && iVar1 < Global_262145.f_18747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18651 && iVar1 < Global_262145.f_18748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18652 && iVar1 < Global_262145.f_18749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18653 && iVar1 < Global_262145.f_18750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18654 && iVar1 < Global_262145.f_18751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18655 && iVar1 < Global_262145.f_18752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18656 && iVar1 < Global_262145.f_18753)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18657 && iVar1 < Global_262145.f_18754)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18658 && iVar1 < Global_262145.f_18755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19728 && iVar1 < Global_262145.f_19724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19729 && iVar1 < Global_262145.f_19725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19730 && iVar1 < Global_262145.f_19726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19731 && iVar1 < Global_262145.f_19727)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20607 && iVar1 < Global_262145.f_20615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20608 && iVar1 < Global_262145.f_20616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20609 && iVar1 < Global_262145.f_20617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20610 && iVar1 < Global_262145.f_20618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20611 && iVar1 < Global_262145.f_20619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20612 && iVar1 < Global_262145.f_20620)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21384 && iVar1 < Global_262145.f_21404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21387 && iVar1 < Global_262145.f_21407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21385 && iVar1 < Global_262145.f_21405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21395 && iVar1 < Global_262145.f_21415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21394 && iVar1 < Global_262145.f_21414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21386 && iVar1 < Global_262145.f_21406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21388 && iVar1 < Global_262145.f_21408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21389 && iVar1 < Global_262145.f_21409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21390 && iVar1 < Global_262145.f_21410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21391 && iVar1 < Global_262145.f_21411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21392 && iVar1 < Global_262145.f_21412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21393 && iVar1 < Global_262145.f_21413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22345 && iVar1 < Global_262145.f_22373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22346 && iVar1 < Global_262145.f_22374)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22347 && iVar1 < Global_262145.f_22375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22348 && iVar1 < Global_262145.f_22376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22349 && iVar1 < Global_262145.f_22377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22350 && iVar1 < Global_262145.f_22378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22351 && iVar1 < Global_262145.f_22379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22352 && iVar1 < Global_262145.f_22380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22353 && iVar1 < Global_262145.f_22381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22354 && iVar1 < Global_262145.f_22382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22355 && iVar1 < Global_262145.f_22383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22356 && iVar1 < Global_262145.f_22384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23561 && iVar1 < Global_262145.f_23577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23562 && iVar1 < Global_262145.f_23578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23566 && iVar1 < Global_262145.f_23582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23569 && iVar1 < Global_262145.f_23585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23568 && iVar1 < Global_262145.f_23584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23560 && iVar1 < Global_262145.f_23576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23567 && iVar1 < Global_262145.f_23583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23563 && iVar1 < Global_262145.f_23579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23565 && iVar1 < Global_262145.f_23581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23571 && iVar1 < Global_262145.f_23587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23564 && iVar1 < Global_262145.f_23580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23570 && iVar1 < Global_262145.f_23586)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23651 && iVar1 < Global_262145.f_23638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23652 && iVar1 < Global_262145.f_23639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23657 && iVar1 < Global_262145.f_23644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23656 && iVar1 < Global_262145.f_23643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23654 && iVar1 < Global_262145.f_23641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23660 && iVar1 < Global_262145.f_23647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23662 && iVar1 < Global_262145.f_23649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23661 && iVar1 < Global_262145.f_23648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23653 && iVar1 < Global_262145.f_23640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23655 && iVar1 < Global_262145.f_23642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23659 && iVar1 < Global_262145.f_23646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23658 && iVar1 < Global_262145.f_23645)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_25913 && iVar1 < Global_262145.f_25915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_24926 && iVar1 < Global_262145.f_24919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_24927 && iVar1 < Global_262145.f_24920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_24928 && iVar1 < Global_262145.f_24921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_24929 && iVar1 < Global_262145.f_24922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_25914 && iVar1 < Global_262145.f_25916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_24930 && iVar1 < Global_262145.f_24923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_24931 && iVar1 < Global_262145.f_24924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_24932 && iVar1 < Global_262145.f_24925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_24937 && iVar1 < Global_262145.f_24958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_24938 && iVar1 < Global_262145.f_24959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_24939 && iVar1 < Global_262145.f_24960)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_24940 && iVar1 < Global_262145.f_24961)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_24941 && iVar1 < Global_262145.f_24962)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_24942 && iVar1 < Global_262145.f_24963)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_24943 && iVar1 < Global_262145.f_24964)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_24944 && iVar1 < Global_262145.f_24965)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_24945 && iVar1 < Global_262145.f_24966)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_24946 && iVar1 < Global_262145.f_24967)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_24947 && iVar1 < Global_262145.f_24968)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_24948 && iVar1 < Global_262145.f_24969)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_24949 && iVar1 < Global_262145.f_24970)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_24950 && iVar1 < Global_262145.f_24971)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_24951 && iVar1 < Global_262145.f_24972)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_24952 && iVar1 < Global_262145.f_24973)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_24953 && iVar1 < Global_262145.f_24974)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_24954 && iVar1 < Global_262145.f_24975)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_24955 && iVar1 < Global_262145.f_24976)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_24956 && iVar1 < Global_262145.f_24977)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_24957 && iVar1 < Global_262145.f_24978)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_27748 && iVar1 < Global_262145.f_27769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_27749 && iVar1 < Global_262145.f_27770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_27750 && iVar1 < Global_262145.f_27771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_27751 && iVar1 < Global_262145.f_27772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_27752 && iVar1 < Global_262145.f_27773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_27753 && iVar1 < Global_262145.f_27774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_27754 && iVar1 < Global_262145.f_27775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_27755 && iVar1 < Global_262145.f_27776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_27756 && iVar1 < Global_262145.f_27777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_27757 && iVar1 < Global_262145.f_27778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_27758 && iVar1 < Global_262145.f_27779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_27759 && iVar1 < Global_262145.f_27780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_27760 && iVar1 < Global_262145.f_27781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_27761 && iVar1 < Global_262145.f_27782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_27762 && iVar1 < Global_262145.f_27783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27763 && iVar1 < Global_262145.f_27784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27764 && iVar1 < Global_262145.f_27785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27765 && iVar1 < Global_262145.f_27786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_27766 && iVar1 < Global_262145.f_27787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27767 && iVar1 < Global_262145.f_27788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27768 && iVar1 < Global_262145.f_27789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_27791 && iVar1 < Global_262145.f_27792) && !Global_262145.f_27746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_27794 && iVar1 < Global_262145.f_27795) && !Global_262145.f_27747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_27799 && iVar1 < Global_262145.f_27802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_27800 && iVar1 < Global_262145.f_27803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_27801 && iVar1 < Global_262145.f_27804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_128()
{
	return 0;
}

int func_129()
{
	return 1;
}

int func_130()
{
	return 1;
}

int func_131()
{
	if (unk_0x9742C47C6EA02281(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_132()
{
	var uVar0;
	
	if (unk_0x543B7EB99B8B8637())
	{
		if (unk_0x6E49FBC03EADD517())
		{
			if (unk_0x9A23AF8E6095D4CF())
			{
				unk_0x367DA79FE620711B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xA1E7A40E1F56E511(&uVar0, 2);
				unk_0xA1E7A40E1F56E511(&uVar0, 4);
				unk_0xA1E7A40E1F56E511(&uVar0, 6);
				unk_0xA1E7A40E1F56E511(&Global_25, 2);
				unk_0xA1E7A40E1F56E511(&Global_25, 4);
				unk_0xA1E7A40E1F56E511(&Global_25, 6);
				unk_0x41410A69AD49AFCD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB61D5BE0528E9538())
				{
					uVar0 = unk_0xFD4B2AAE20AA1CBB(866);
					unk_0xA1E7A40E1F56E511(&uVar0, 0);
					unk_0x553DEB79071ABB59(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150394 == 2)
	{
		return 1;
	}
	else if (Global_150394 == 3)
	{
		return 0;
	}
	if (unk_0xB61D5BE0528E9538())
	{
		if (unk_0xA2BC31158C8CEFD2(unk_0xFD4B2AAE20AA1CBB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_133(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x7F375072508F738F(iParam0);
	uVar1 = unk_0x8D762F81855E767B(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x2553916E420E8EF0(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_124(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD4B321D9096B01FC(Global_96060[iVar0]))
		{
			if (Global_96060[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_135(int iParam0)
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(iParam0) && unk_0xD960230552BC4165(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD4B321D9096B01FC(Global_96030[iVar0]) && unk_0xD960230552BC4165(Global_96030[iVar0], 0))
			{
				if (Global_96030[iVar0] == iParam0 && unk_0x7F375072508F738F(Global_96030[iVar0]) == unk_0x7F375072508F738F(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_136(int iParam0)
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(Global_75396.f_484[24]))
	{
		if (iParam0 == Global_75396.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD4B321D9096B01FC(Global_75396.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75396.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD4B321D9096B01FC(iParam0))
	{
		return 145;
	}
	if (!unk_0xD960230552BC4165(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD4B321D9096B01FC(Global_96030[iVar0]))
		{
			if (Global_96030[iVar0] == iParam0)
			{
				return Global_96040[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_138(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD4B321D9096B01FC(iParam0) || !unk_0xD960230552BC4165(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_139(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xA2BC31158C8CEFD2(Global_111560.f_7224[iVar9], 0))
		{
			if (unk_0x89C1B63B3CB1739A(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_139(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_140(int iParam0)
{
	Global_110270.f_22 = iParam0;
}

