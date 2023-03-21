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
	unk_0xB5533C0C8A2B9BF2(1);
	if (unk_0xB9B05E900D325C36(3))
	{
		func_134(2);
		func_109();
	}
	iLocal_36 = func_107();
	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (!iLocal_76)
				{
					func_102();
				}
				else
				{
					func_101();
				}
				if (bLocal_75)
				{
					iLocal_77 = 1;
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				if (!func_100())
				{
					switch (iLocal_38)
					{
						case 0:
							func_97();
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
	func_134(2);
	func_109();
}

void func_2()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(iLocal_96))
	{
		if (unk_0x432757A9E7AAFA96(iLocal_96, 0))
		{
			iVar0 = 200;
			iVar1 = (unk_0x8DB158934E64B062(iLocal_96) - 800);
			if (unk_0x95E4E33CFB8D32BE(iLocal_96))
			{
				unk_0x990879ED64ED4138(iLocal_96, (unk_0x8DB158934E64B062(iLocal_96) - 5));
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
		Global_1356070.f_1 = 1;
		func_5(0, iVar0);
		Global_1356070.f_1093[iVar0] = uParam0;
		Global_1356070.f_1093.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1356070.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1356070.f_1093.f_194[iVar0] = uParam3;
		Global_1356070.f_1093.f_183[iVar0] = uParam4;
		Global_1356070.f_1093.f_216[iVar0] = uParam5;
		Global_1356070.f_1093.f_227[iVar0 /*3*/] = fParam6;
		Global_1356070.f_1093.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1356070.f_1093.f_258[iVar0] = iParam8;
		Global_1356070.f_1093.f_269[iVar0] = uParam9;
		Global_1356070.f_1093.f_312[iVar0] = iParam10;
		Global_1356070.f_1093.f_323[iVar0] = iParam11;
		Global_1356070.f_1093.f_334[iVar0] = iParam12;
		Global_1356070.f_1093.f_345[iVar0] = iParam13;
		Global_1356070.f_1088 = 1;
		Global_1356070.f_1093.f_356[iVar0] = iParam14;
		Global_1356070.f_1093.f_367[iVar0] = iParam15;
		Global_1356070.f_1093.f_378[iVar0] = iParam16;
		Global_1356070.f_1093.f_389[iVar0] = iParam17;
		Global_1356070.f_1093.f_400[iVar0] = iParam18;
		Global_1356070.f_1093.f_411[iVar0] = iParam19;
		Global_1356070.f_1093.f_422[iVar0] = iParam20;
		Global_1356070.f_1093.f_433[iVar0] = iParam21;
		Global_1356070.f_1093.f_444[iVar0] = iParam22;
		Global_1356070.f_1093.f_455[iVar0] = iParam23;
	}
}

void func_5(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1356070.f_5941[iParam0]), iParam1);
}

bool func_6(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1356070.f_5941[iParam0], iParam1);
}

void func_7()
{
	int iVar0;
	
	iVar0 = (iLocal_80 - unk_0x31CD6E9F83C10233());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (unk_0x31CD6E9F83C10233() >= iLocal_84)
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
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 10000))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 1:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 9000))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 2:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 8000))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 3:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 7000))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 4:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 6000))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 5:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 5000))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 6:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 4500))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 7:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 4000))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 8:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 3500))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 9:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 3000))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 10:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 2500))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 11:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 2000))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 12:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 1500))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 13:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 1000))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 14:
			if (unk_0x31CD6E9F83C10233() >= (iLocal_80 - 500))
			{
				unk_0x18F1BFAF88AC511B(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 15:
			if (unk_0x31CD6E9F83C10233() >= iLocal_80)
			{
				unk_0x18F1BFAF88AC511B(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 16:
			break;
	}
	if (unk_0x31CD6E9F83C10233() >= iLocal_80)
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
		Global_1356070.f_1 = 1;
		func_5(7, iVar0);
		Global_1356070.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1356070.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1356070.f_4366.f_172[iVar0] = iParam2;
		Global_1356070.f_4366.f_216[iVar0] = iParam3;
		Global_1356070.f_4366.f_183[iVar0] = iParam4;
		Global_1356070.f_4366.f_194[iVar0] = iParam5;
		Global_1356070.f_4366.f_249[iVar0] = iParam6;
		Global_1356070.f_4366.f_260[iVar0] = iParam7;
		Global_1356070.f_4366.f_205[iVar0] = iParam8;
		Global_1356070.f_4366.f_314[iVar0] = iParam9;
		Global_1356070.f_4366.f_325[iVar0] = iParam10;
		Global_1356070.f_4366.f_357[iVar0] = iParam11;
		Global_1356070.f_4366.f_238[iVar0] = iParam12;
		Global_1356070.f_4366.f_271[iVar0] = iParam13;
		Global_1356070.f_4366.f_368[iVar0] = iParam14;
		Global_1356070.f_4366.f_379[iVar0] = iParam15;
		Global_1356070.f_4366.f_390[iVar0] = iParam16;
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
				if (!unk_0x8682D8A6269E52C9(iLocal_93[iVar0]))
				{
					if (!unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), Local_64, 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0x3E770560EE4A1F19(unk_0x3D35F9864E4640B1(), 2, 0);
						unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
						unk_0x34434BC2A1CADD2A(unk_0x3D35F9864E4640B1(), 0f);
						iLocal_78 = 1;
					}
				}
			}
			else if (!unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
			{
				if (!unk_0x8682D8A6269E52C9(iLocal_93[iVar0]))
				{
					unk_0x53E150F8F0AD7101(iLocal_93[iVar0], unk_0x0031992CA618A445(), 1000f, -1, 0, 0);
					unk_0x390D16BCBFB23E1A(iLocal_93[iVar0], 1);
					unk_0x056049D9941BD43D(&(iLocal_93[iVar0]));
				}
				if (unk_0x76B3C79DE564AFC6(uLocal_97))
				{
					unk_0x28BB69BE14577487(&iLocal_97);
				}
			}
			iVar0++;
		}
	}
	if (func_21(&uLocal_39, Local_67, Global_22, 1, iLocal_96, sLocal_104, "", sLocal_105, 1, 0, 1, -1))
	{
		func_19(iLocal_96, 10.5f, 2, 1056964608, 0, 1, 0);
		unk_0x471E558A661279DE(unk_0x0031992CA618A445(), 2000, 0);
		unk_0x4AF3E3EF22AF92E4(iLocal_96, 0);
		func_14(&uLocal_39, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_90)
	{
		if (!unk_0x8682D8A6269E52C9(iLocal_90[iVar1]))
		{
			if (!unk_0xA761A0B6072010C8(uLocal_99[iVar1]))
			{
				uLocal_99[iVar1] = func_10(iLocal_90[iVar1], 1, 145);
				unk_0x173325AAF2CD766A(&uLocal_120);
				unk_0x471E558A661279DE(0, 0, 0);
				unk_0x8B4EE19968C93083(0, unk_0x0031992CA618A445(), 0, 16);
				unk_0xF81AD3C937316CCA(uLocal_120);
				unk_0xEDD5437C49B7B1F8(iLocal_90[iVar1], uLocal_120);
				unk_0x1F5B34056C3CB80B(&uLocal_120);
				unk_0x390D16BCBFB23E1A(iLocal_90[iVar1], 1);
			}
			if (!unk_0x830CAE5496B8AD6B(iLocal_90[iVar1], unk_0x0031992CA618A445(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (unk_0xA761A0B6072010C8(uLocal_99[iVar1]))
				{
					unk_0x0C4BDC77192798AE(&(uLocal_99[iVar1]));
				}
				unk_0x53E150F8F0AD7101(iLocal_90[iVar1], unk_0x0031992CA618A445(), 1000f, -1, 0, 0);
				unk_0x390D16BCBFB23E1A(iLocal_90[iVar1], 1);
				unk_0x056049D9941BD43D(&(iLocal_90[iVar1]));
			}
		}
		else if (unk_0xA761A0B6072010C8(uLocal_99[iVar1]))
		{
			unk_0x0C4BDC77192798AE(&(uLocal_99[iVar1]));
		}
		iVar1++;
	}
}

var func_10(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_11(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA761A0B6072010C8(uVar0)) && unk_0xA56C5821F50C3275(&(Global_104439.f_27911[iParam2 /*29*/].f_3)))
	{
		unk_0x50B5259DFC71B8EC(uVar0, &(Global_104439.f_27911[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x76B3C79DE564AFC6(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE80C2D6BF636C6C4(iParam0);
	if (unk_0x036E1D5EA494CEB2(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_12(unk_0x27CA09C6DFAB1E79(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x8D60956768933D7C(uVar0, bParam1);
		}
		else
		{
			unk_0xEB934A06DDA5027D(uVar0, 2);
		}
	}
	else if (unk_0x269F274F1955DE87(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_12(unk_0x27CA09C6DFAB1E79(), 0.7f, 0.7f));
		unk_0x8D60956768933D7C(uVar0, bParam1);
	}
	else if (unk_0xC207EA827E8CD735(iParam0))
	{
		unk_0x067D86058370B7EB(uVar0, func_12(unk_0x27CA09C6DFAB1E79(), 0.7f, 0.7f));
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
	func_134(1);
	func_109();
}

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x2A3398C6222EB190(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_18(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA761A0B6072010C8(uParam0->f_1[iVar0]))
		{
			unk_0x0C4BDC77192798AE(&(uParam0->f_1[iVar0]));
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
			unk_0xD804ACF2A7171150(&(uParam0->f_13), iVar0);
			unk_0xD804ACF2A7171150(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		unk_0x0C4BDC77192798AE(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar0]))
		{
			unk_0x9C8949CB342B3559(uParam0->f_17[iVar0], 1);
			unk_0x1481FD3C9C94FB39(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0xD6A092D1F1B9A9F1(uParam0->f_17[iVar0], 32, 1);
				unk_0xD6A092D1F1B9A9F1(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0xD6A092D1F1B9A9F1(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar0], func_15()) && uParam0->f_17[iVar0] != unk_0x0031992CA618A445())
				{
					unk_0x38396C255EC4D248(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0x2A3398C6222EB190(uParam0->f_13, 29))
			{
				unk_0x3C4C96D07A1CA39A(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		unk_0x9C8949CB342B3559(unk_0x0031992CA618A445(), 1);
		unk_0x1481FD3C9C94FB39(unk_0x0031992CA618A445(), 1);
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (bParam2)
		{
			unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_15()
{
	return unk_0xC95BCBF0579C6F1A(unk_0xED1168B8D2D313FA());
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD804ACF2A7171150(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xD804ACF2A7171150(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xD804ACF2A7171150(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD804ACF2A7171150(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xD804ACF2A7171150(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xD804ACF2A7171150(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0)
{
	if (unk_0xA761A0B6072010C8(uParam0->f_5))
	{
		unk_0x0C4BDC77192798AE(&(uParam0->f_5));
	}
}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xC9621A9AD282CC14(0, 71, 1);
	unk_0xC9621A9AD282CC14(0, 72, 1);
	unk_0xC9621A9AD282CC14(0, 76, 1);
	unk_0xC9621A9AD282CC14(0, 73, 1);
	unk_0xC9621A9AD282CC14(0, 59, 1);
	unk_0xC9621A9AD282CC14(0, 60, 1);
	if (bParam5)
	{
		unk_0xC9621A9AD282CC14(0, 75, 1);
	}
	unk_0xC9621A9AD282CC14(0, 80, 1);
	if (!bParam6)
	{
		unk_0xC9621A9AD282CC14(0, 69, 1);
		unk_0xC9621A9AD282CC14(0, 70, 1);
		unk_0xC9621A9AD282CC14(0, 68, 1);
	}
	unk_0xC9621A9AD282CC14(0, 74, 1);
	unk_0xC9621A9AD282CC14(0, 86, 1);
	unk_0xC9621A9AD282CC14(0, 81, 1);
	unk_0xC9621A9AD282CC14(0, 82, 1);
	unk_0xC9621A9AD282CC14(0, 138, 1);
	unk_0xC9621A9AD282CC14(0, 136, 1);
	unk_0xC9621A9AD282CC14(0, 114, 1);
	unk_0xC9621A9AD282CC14(0, 107, 1);
	unk_0xC9621A9AD282CC14(0, 110, 1);
	unk_0xC9621A9AD282CC14(0, 89, 1);
	unk_0xC9621A9AD282CC14(0, 89, 1);
	unk_0xC9621A9AD282CC14(0, 87, 1);
	unk_0xC9621A9AD282CC14(0, 88, 1);
	unk_0xC9621A9AD282CC14(0, 113, 1);
	unk_0xC9621A9AD282CC14(0, 115, 1);
	unk_0xC9621A9AD282CC14(0, 116, 1);
	unk_0xC9621A9AD282CC14(0, 117, 1);
	unk_0xC9621A9AD282CC14(0, 118, 1);
	unk_0xC9621A9AD282CC14(0, 119, 1);
	unk_0xC9621A9AD282CC14(0, 131, 1);
	unk_0xC9621A9AD282CC14(0, 132, 1);
	unk_0xC9621A9AD282CC14(0, 123, 1);
	unk_0xC9621A9AD282CC14(0, 126, 1);
	unk_0xC9621A9AD282CC14(0, 129, 1);
	unk_0xC9621A9AD282CC14(0, 130, 1);
	unk_0xC9621A9AD282CC14(0, 133, 1);
	unk_0xC9621A9AD282CC14(0, 134, 1);
	unk_0x36EF10C45CB5F97A();
	func_20(iParam0);
	if ((unk_0x31CD6E9F83C10233() - Global_29) > 500)
	{
		unk_0x0821297CFC3D8B81(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x31CD6E9F83C10233();
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (unk_0x229F35E7CDDBF757(unk_0x38A3CC71471EC547(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_20(int iParam0)
{
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (unk_0x51C1CCFBBE8CC4D1(iParam0))
		{
			if (unk_0x6753D44917FA47E9(iParam0))
			{
				unk_0x0323C8DAEC297D2A(iParam0, 0);
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
		if (unk_0xF9FC07CC13402AEF())
		{
			bVar1 = false;
			if (unk_0x432757A9E7AAFA96(iParam18, 0))
			{
				if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iParam18, 0))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 3);
					if (!unk_0x2A3398C6222EB190(uParam0->f_13, 9))
					{
						unk_0xD804ACF2A7171150(&(uParam0->f_13), 4);
					}
					if (unk_0x2A3398C6222EB190(uParam0->f_13, 23))
					{
						unk_0xD804ACF2A7171150(&(uParam0->f_13), 23);
					}
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_41(uParam0, iParam29))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 3);
					if (!unk_0x2A3398C6222EB190(uParam0->f_13, 9))
					{
						unk_0xD804ACF2A7171150(&(uParam0->f_13), 4);
					}
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 9);
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
				if (bParam26 && unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
				{
					if (unk_0xA761A0B6072010C8(uParam0->f_5))
					{
						unk_0x0C4BDC77192798AE(&(uParam0->f_5));
						func_43(sParam19);
					}
					if (unk_0xA761A0B6072010C8(*uParam0))
					{
						unk_0x0C4BDC77192798AE(uParam0);
					}
					if ((!func_37(uParam0, 1) && !func_36(uParam0)) && !unk_0x2A3398C6222EB190(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x8682D8A6269E52C9(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 0);
						unk_0xD804ACF2A7171150(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x2A3398C6222EB190(uParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0xD804ACF2A7171150(&(uParam0->f_13), 0);
						unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 1);
					}
					if (unk_0x2A3398C6222EB190(uParam0->f_13, 1))
					{
						if (!func_37(uParam0, 1))
						{
							if (!unk_0x8682D8A6269E52C9(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xD804ACF2A7171150(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0xA761A0B6072010C8(uParam0->f_5))
					{
						if (unk_0xA761A0B6072010C8(*uParam0))
						{
							unk_0x0C4BDC77192798AE(uParam0);
						}
						uParam0->f_5 = func_31(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0x3B815A6E8530D3A5(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_30(uParam0->f_5, uParam0);
						}
					}
					else if (!func_29(Var3, unk_0x453EDE9648F86D8C(uParam0->f_5), 0.1f, 0))
					{
						unk_0xAD390762A82890FB(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_30(uParam0->f_5, uParam0);
						}
					}
					if (!func_37(uParam0, 2))
					{
						if (!unk_0x2A3398C6222EB190(uParam0->f_13, 2))
						{
							func_34(uParam0, sParam19, 0);
							unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0x2A3398C6222EB190(uParam0->f_13, 13))
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
						unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x417F21FB3F950AEE(unk_0x0031992CA618A445(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0xF041E50CF58AF6F9(unk_0x0031992CA618A445(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
									if (!unk_0xA32DC7E16AD1DFB7(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0xA32DC7E16AD1DFB7(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar2], func_15()) || !func_27(uParam0->f_17[iVar2], 1))
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
			else if (unk_0x76B3C79DE564AFC6(iParam18))
			{
				if ((bParam26 && unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0)) && (!unk_0x2A3398C6222EB190(uParam0->f_13, 9) && !unk_0x2A3398C6222EB190(uParam0->f_13, 22)))
				{
					func_43(sParam24);
					func_43(sParam27);
					if (unk_0xA761A0B6072010C8(uParam0->f_5) || unk_0xA761A0B6072010C8(*uParam0))
					{
						unk_0x0C4BDC77192798AE(&(uParam0->f_5));
						unk_0x0C4BDC77192798AE(uParam0);
						func_43(sParam19);
					}
					if ((!func_37(uParam0, 1) && !func_36(uParam0)) && !unk_0x2A3398C6222EB190(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x8682D8A6269E52C9(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 0);
						unk_0xD804ACF2A7171150(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x2A3398C6222EB190(uParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0xD804ACF2A7171150(&(uParam0->f_13), 0);
						unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 1);
					}
					if (unk_0x2A3398C6222EB190(uParam0->f_13, 1))
					{
						if (!func_37(uParam0, 1))
						{
							if (!unk_0x8682D8A6269E52C9(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xD804ACF2A7171150(&(uParam0->f_13), 1);
						}
					}
					if (unk_0x432757A9E7AAFA96(iParam18, 0))
					{
						if (!unk_0xA761A0B6072010C8(*uParam0))
						{
							if (unk_0xA761A0B6072010C8(uParam0->f_5))
							{
								unk_0x0C4BDC77192798AE(&(uParam0->f_5));
								func_43(sParam19);
							}
							*uParam0 = func_23(iParam18, 0, 0);
							unk_0x10B7FEC9D017D330(*uParam0, 2);
							if (!unk_0x2A3398C6222EB190(uParam0->f_13, 4))
							{
								func_30(*uParam0, uParam0);
							}
						}
						if (!func_37(uParam0, 2))
						{
							if (!unk_0x2A3398C6222EB190(uParam0->f_13, 3))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 3);
								unk_0xD804ACF2A7171150(&(uParam0->f_13), 4);
							}
							else if (unk_0x2A3398C6222EB190(uParam0->f_13, 9))
							{
								if (!unk_0x996B09F758C57FBE(sParam27))
								{
									if (!unk_0x2A3398C6222EB190(uParam0->f_13, 4))
									{
										func_34(uParam0, sParam27, 0);
										unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0x2A3398C6222EB190(uParam0->f_13, 4))
								{
									func_34(uParam0, sParam24, 0);
									unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 4);
								}
								if (!unk_0x2A3398C6222EB190(uParam0->f_13, 23))
								{
									if (!unk_0x8682D8A6269E52C9(uParam0->f_17[0]))
									{
										func_32(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xA761A0B6072010C8(uParam0->f_5))
				{
					unk_0x0C4BDC77192798AE(&(uParam0->f_5));
					func_43(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_37(uParam0, 2))
						{
							if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
							{
								if (!unk_0x2A3398C6222EB190(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x3AF262D7332EEDF5(0, iVar8);
									if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar9]))
									{
										func_32(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_34(uParam0, "MORE_SEATS", 0);
									unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0x2A3398C6222EB190(uParam0->f_13, 3))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 3);
								unk_0xD804ACF2A7171150(&(uParam0->f_13), 4);
							}
							else if (!unk_0x2A3398C6222EB190(uParam0->f_13, 4))
							{
								if (unk_0x2A3398C6222EB190(uParam0->f_13, 9))
								{
									func_34(uParam0, sParam27, 0);
									unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_37(uParam0, 2))
					{
						if (!unk_0x2A3398C6222EB190(uParam0->f_13, 3))
						{
							func_34(uParam0, sParam24, 0);
							unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 3);
							unk_0xD804ACF2A7171150(&(uParam0->f_13), 4);
						}
						else if (unk_0x2A3398C6222EB190(uParam0->f_13, 9))
						{
							if (!unk_0x996B09F758C57FBE(sParam27))
							{
								if (!unk_0x2A3398C6222EB190(uParam0->f_13, 4))
								{
									func_34(uParam0, sParam27, 0);
									unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0x2A3398C6222EB190(uParam0->f_13, 4))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x2A3398C6222EB190(uParam0->f_13, 0))
		{
			unk_0xD804ACF2A7171150(&(uParam0->f_13), 0);
		}
		func_43(sParam19);
		func_43(sParam24);
		func_43(sParam27);
		func_43(sParam24);
		func_43("LOSE_WANTED");
		if (unk_0xA761A0B6072010C8(uParam0->f_5))
		{
			unk_0x0C4BDC77192798AE(&(uParam0->f_5));
		}
		if (unk_0xA761A0B6072010C8(*uParam0))
		{
			unk_0x0C4BDC77192798AE(uParam0);
		}
	}
	unk_0xD804ACF2A7171150(&(uParam0->f_13), 11);
	unk_0xD804ACF2A7171150(&(uParam0->f_13), 12);
	return 0;
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_24(var uParam0)
{
	if (unk_0x2A3398C6222EB190(uParam0->f_13, 12))
	{
		if (func_26(unk_0x0031992CA618A445()))
		{
			if (func_25(1, 0, 1) || unk_0x2A3398C6222EB190(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_25(1, 0, 1) || unk_0x2A3398C6222EB190(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_25(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x8CD86DB54E1E0747())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
		{
			return 0;
		}
		iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
		if (bParam0)
		{
			if (unk_0x7A6C051038031EFA(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x7A6C051038031EFA(iVar0, 0))
			{
				if (unk_0x3251C2B06497863C(iVar0, -1, 0) != unk_0x0031992CA618A445())
				{
					return 0;
				}
			}
		}
		if (!unk_0x7A6C051038031EFA(iVar0, 0))
		{
			if (unk_0x4F3A65A97120614D(iVar0) < 0.95f || unk_0x4F3A65A97120614D(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x5A5551782E5EEA91(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (!unk_0x99494FDEBA30D9AF(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)
{
	float fVar0;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		fVar0 = unk_0x38A3CC71471EC547(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()) && iParam1)
		{
			if (func_28(unk_0x0031992CA618A445(), iParam0))
			{
				unk_0x27D2FAEAF7CFF370(func_15(), 50f);
				return 1;
			}
		}
		else if (unk_0x03F0ADE460FD95F9(iParam0, func_15()))
		{
			unk_0x27D2FAEAF7CFF370(func_15(), 50f);
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
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (unk_0x84432DB7C4069064(iParam0))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(iParam0, 0);
			if (unk_0x432757A9E7AAFA96(iVar0, 0))
			{
				if (!unk_0x8682D8A6269E52C9(iParam1))
				{
					if (unk_0x26D7BF365BA84F9C(iParam1, iVar0))
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
		if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x229F35E7CDDBF757((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_30(var uParam0, var uParam1)
{
	if (unk_0xA761A0B6072010C8(uParam0))
	{
		if (unk_0xA761A0B6072010C8(uParam1->f_6))
		{
			unk_0xE4E08EF8CF4469E9(uParam1->f_6, 0);
		}
		unk_0x802EE7B12B5BF67E(0);
		unk_0x5BE457FB3A01F7C2();
		uParam1->f_6 = uParam0;
		unk_0xE4E08EF8CF4469E9(uParam0, 1);
	}
}

var func_31(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x97AC4FC1EEAC7A8B(Param0);
	unk_0x067D86058370B7EB(uVar0, func_12(unk_0x27CA09C6DFAB1E79(), 1f, 1f));
	unk_0xE4E08EF8CF4469E9(uVar0, iParam3);
	return uVar0;
}

void func_32(var uParam0, char* sParam1, int iParam2)
{
	unk_0x4A5113B7E65C8C80(uParam0, sParam1, func_33(iParam2), 1);
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
		if (!unk_0x996B09F758C57FBE(sParam1))
		{
			if (!unk_0xB3404E397FF56B3B(sParam1, ""))
			{
				func_35(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x31CD6E9F83C10233();
}

void func_35(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x8F8D0515CEE01015(sParam0);
	unk_0xCA3811E629240D04(iParam1, 1);
}

int func_36(var uParam0)
{
	if (!unk_0x8682D8A6269E52C9(uParam0->f_16))
	{
		if (unk_0x903C2842D53DEC75(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_37(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xD6B752BC5007FE40())
	{
		if (unk_0x2C4568A5B00B34DA())
		{
			return 1;
		}
		if (func_40(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xD6B752BC5007FE40())
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
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x31CD6E9F83C10233();
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
	
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		iVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
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
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x76B3C79DE564AFC6(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xB8B31FD7EF092667(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x0952B1054405A414(iParam0, 1))
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
				if (!unk_0x0952B1054405A414(iParam0, 1))
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
	if (!unk_0x996B09F758C57FBE(sParam0))
	{
		unk_0xEA8C7331F449F129(sParam0);
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
		if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0))
		{
			if (!unk_0x2A3398C6222EB190(uParam0->f_13, 29) && !unk_0x2A3398C6222EB190(uParam0->f_13, 28))
			{
				if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar0]))
				{
					unk_0x3C4C96D07A1CA39A(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0x2A3398C6222EB190(uParam0->f_13, 29) && unk_0x2A3398C6222EB190(uParam0->f_13, 28))
		{
			if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar0]))
			{
				unk_0x3C4C96D07A1CA39A(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0xD804ACF2A7171150(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x76B3C79DE564AFC6(uParam0->f_21))
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
			uVar24 = unk_0x2A1786470CB06BC9(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), 50f, 0, iVar25);
			if (unk_0x432757A9E7AAFA96(uVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x432757A9E7AAFA96(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
				{
					if (!unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0) || !bParam17)
					{
						if (func_42(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar0]))
								{
									unk_0x3470926F7E037B53(uParam0->f_17[iVar0], 1f);
									if (unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar0], func_15()))
									{
										unk_0x38396C255EC4D248(uParam0->f_17[iVar0]);
									}
									if (unk_0xF57D21B49780A7A8(uParam0->f_17[iVar0], -1794415470) == 7 && !func_59(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0xABB40063444DEDAA(uParam0->f_17[iVar0]) && !unk_0x3CE6EA6EC9DD3DE6(uParam0->f_17[iVar0]))
										{
											unk_0xEB9B39274C401888(uParam0->f_17[iVar0], 1);
											unk_0x2E0E5BF2A31392F4(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xC187A887517978D0(uParam0->f_17[iVar0], iVar0);
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
			unk_0xD804ACF2A7171150(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar0]))
				{
					if (!unk_0x292D1BF190062D1C(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xD706D9D85701BFBD(uParam0->f_17[iVar0]);
					}
					if (!unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar0], func_15()))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0xBF00F993DA29A169(uParam0->f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(uParam0->f_13, 26))
	{
		if ((!func_56(uParam0) && unk_0x84432DB7C4069064(unk_0x0031992CA618A445())) && !unk_0x76B3C79DE564AFC6(iParam10))
		{
			iVar13 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
			if (unk_0x432757A9E7AAFA96(iVar13, 0))
			{
				if (!unk_0x2A3398C6222EB190(uParam0->f_13, 13))
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
							if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x3AF262D7332EEDF5(0, iVar26);
						if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar27]))
						{
							func_32(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_34(uParam0, "MORE_SEATS", 0);
						unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0xD804ACF2A7171150(&(uParam0->f_13), 13);
			func_43("MORE_SEATS");
		}
		if (!unk_0x76B3C79DE564AFC6(iParam10))
		{
			if ((!unk_0x8682D8A6269E52C9(uParam0->f_17[0]) || !unk_0x8682D8A6269E52C9(uParam0->f_17[1])) || !unk_0x8682D8A6269E52C9(uParam0->f_17[2]))
			{
				if (!unk_0x2A3398C6222EB190(uParam0->f_13, 31))
				{
					if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()) && !func_37(uParam0, 2))
					{
						iVar13 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
						if (func_55(iVar13, uParam0))
						{
							func_34(uParam0, "CMN_VEHSUIT", 0);
							unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
				{
					unk_0xD804ACF2A7171150(&(uParam0->f_13), 31);
					func_43("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x432757A9E7AAFA96(iParam10, 0))
		{
			if (unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), iParam10))
			{
				if (unk_0xD887E21676314450(0, 75))
				{
					unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0x2A3398C6222EB190(uParam0->f_13, 21))
			{
				unk_0xD804ACF2A7171150(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x76B3C79DE564AFC6(uParam0->f_17[iVar0]))
			{
				if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar0]))
				{
					if (!unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar0], func_15()))
					{
						unk_0x47719B470B88CAC0(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x47719B470B88CAC0(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
					{
						iVar13 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
						if (unk_0x432757A9E7AAFA96(iVar13, 0))
						{
							if (unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar0], func_15()))
							{
								if (!func_56(uParam0) && unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
								{
									if (!func_54(uParam0->f_17[iVar0]))
									{
										unk_0x38396C255EC4D248(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x7A6C051038031EFA(iVar13, 0))
						{
							if (unk_0x26D7BF365BA84F9C(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0x7019CC495F72B3AC(iVar13) && !unk_0xB0264CE056EC6EF9(iVar13))
								{
									Var28 = { unk_0xF177E0DA126D71C8(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x89E71378750944C1(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar0], func_15()))
					{
						if (unk_0x84432DB7C4069064(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0xCFA31F1E461A6BB5(uParam0->f_17[iVar0], 0);
							if (!unk_0x7A6C051038031EFA(iVar13, 0))
							{
								if (unk_0x432757A9E7AAFA96(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), iVar13))
										{
											if (unk_0x38A3CC71471EC547(iVar13) > 5f)
											{
												unk_0x89E71378750944C1(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x89E71378750944C1(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
									{
										iVar31 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
									}
									if (unk_0x432757A9E7AAFA96(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x38A3CC71471EC547(iVar13) > 5f)
											{
												unk_0x89E71378750944C1(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x89E71378750944C1(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar0], func_15()))
					{
						iVar32 = unk_0x89A8BEEC1AA87D33(unk_0x0031992CA618A445());
						if (unk_0x76B3C79DE564AFC6(iVar32))
						{
							if (func_42(iVar32, uParam0, 0))
							{
								if (func_53(iVar0, uParam0) || !unk_0x2A3398C6222EB190(uParam0->f_13, 27))
								{
									unk_0xC187A887517978D0(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_53(iVar0, uParam0))
							{
								if (unk_0xE9559A12052415BE(iVar32) == joaat("sentinel2"))
								{
									unk_0xC187A887517978D0(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xC187A887517978D0(uParam0->f_17[iVar0], 2);
								}
								func_52(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar0], func_15()) && !func_51(uParam0->f_17[iVar0], iParam10)) && !func_50(uParam0->f_17[iVar0], iParam10))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar0], func_15()))
							{
								if (((!unk_0xABB40063444DEDAA(uParam0->f_17[iVar0]) && !unk_0x3CE6EA6EC9DD3DE6(uParam0->f_17[iVar0])) && !unk_0x61FB4278E46D84D7(uParam0->f_17[iVar0])) && !unk_0x292D1BF190062D1C(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0xF57D21B49780A7A8(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0xD706D9D85701BFBD(uParam0->f_17[iVar0]);
									}
									unk_0xBF00F993DA29A169(uParam0->f_17[iVar0], func_15());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0xA761A0B6072010C8(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x31CD6E9F83C10233();
								uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
								unk_0x10B7FEC9D017D330(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_30(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA761A0B6072010C8(uParam0->f_1[iVar0]))
					{
						if (((func_27(uParam0->f_17[iVar0], 1) || func_51(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x432757A9E7AAFA96(iParam10, 0) && !unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iParam10, 0)))
						{
							if (unk_0xA761A0B6072010C8(uParam0->f_1[iVar0]))
							{
								unk_0x0C4BDC77192798AE(&(uParam0->f_1[iVar0]));
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
					else if (unk_0x432757A9E7AAFA96(iParam10, 0))
					{
						if (!unk_0x26D7BF365BA84F9C(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x830CAE5496B8AD6B(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0x2A3398C6222EB190(uParam0->f_13, 11)) && !((bParam17 && unk_0x587694641947BA55(unk_0x3D35F9864E4640B1(), 0)) && !unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iParam10, 0)))
							{
								if (unk_0x84432DB7C4069064(uParam0->f_17[iVar0]))
								{
									if (!unk_0xA32DC7E16AD1DFB7(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_27(uParam0->f_17[iVar0], 1))
										{
											if (func_26(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0xF57D21B49780A7A8(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x471E558A661279DE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar0], func_15()))
									{
										if ((((!unk_0x61FB4278E46D84D7(uParam0->f_17[iVar0]) && !unk_0xABB40063444DEDAA(uParam0->f_17[iVar0])) && !unk_0x3CE6EA6EC9DD3DE6(uParam0->f_17[iVar0])) && !unk_0x292D1BF190062D1C(uParam0->f_17[iVar0])) && !unk_0xB3D4A3F00B489CC7(iParam10))
										{
											unk_0x38396C255EC4D248(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0xF57D21B49780A7A8(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_59(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x61FB4278E46D84D7(uParam0->f_17[iVar0]) && !unk_0x61FB4278E46D84D7(unk_0x0031992CA618A445())) && !func_49(uParam0->f_17[iVar0], 2f)) && !unk_0xABB40063444DEDAA(uParam0->f_17[iVar0])) && !unk_0x3CE6EA6EC9DD3DE6(uParam0->f_17[iVar0])) && !unk_0xB3D4A3F00B489CC7(iParam10))
										{
											unk_0xEB9B39274C401888(uParam0->f_17[iVar0], 1);
											if (unk_0x2A3398C6222EB190(uParam0->f_13, 10))
											{
												unk_0x3470926F7E037B53(uParam0->f_17[iVar0], 1f);
											}
											unk_0x2E0E5BF2A31392F4(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xD16C6E29725B1B9A(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
										unk_0x10B7FEC9D017D330(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar0], func_15()))
							{
								if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0xABB40063444DEDAA(uParam0->f_17[iVar0]) && !unk_0x3CE6EA6EC9DD3DE6(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0xF57D21B49780A7A8(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0xD706D9D85701BFBD(uParam0->f_17[iVar0]);
										}
										unk_0xEB9B39274C401888(uParam0->f_17[iVar0], 0);
										unk_0xBF00F993DA29A169(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), iParam10))
						{
							if (!unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar0], func_15()))
							{
								if (!unk_0x2A3398C6222EB190(uParam0->f_13, 21))
								{
									unk_0xBF00F993DA29A169(uParam0->f_17[iVar0], func_15());
								}
							}
							else if (unk_0x2A3398C6222EB190(uParam0->f_13, 21))
							{
								unk_0x38396C255EC4D248(uParam0->f_17[iVar0]);
								unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x03F0ADE460FD95F9(uParam0->f_17[iVar0], func_15()) && !unk_0xB3D4A3F00B489CC7(iParam10))
						{
							unk_0x38396C255EC4D248(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xA761A0B6072010C8(uParam0->f_1[iVar0]))
				{
					unk_0x0C4BDC77192798AE(&(uParam0->f_1[iVar0]));
					func_43(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xA761A0B6072010C8(uParam0->f_1[iVar0]))
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
						if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar0]))
						{
							if (func_54(uParam0->f_17[iVar0]) || unk_0x830CAE5496B8AD6B(uParam0->f_17[iVar0], unk_0x0031992CA618A445(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar0]))
					{
						if (!unk_0x830CAE5496B8AD6B(uParam0->f_17[iVar0], unk_0x0031992CA618A445(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_54(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x31CD6E9F83C10233();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0x2A3398C6222EB190(uParam0->f_13, 5))
							{
								func_34(uParam0, sParam7, 0);
								unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 5);
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
										if (!unk_0x996B09F758C57FBE(uVar19[iVar0]))
										{
											if (!unk_0xB3404E397FF56B3B(uVar19[iVar0], ""))
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
		unk_0xD804ACF2A7171150(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xA761A0B6072010C8(uParam0->f_1[iVar0]))
				{
					unk_0x0C4BDC77192798AE(&(uParam0->f_1[iVar0]));
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
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_13), 16);
			break;
	}
}

void func_46(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x996B09F758C57FBE(sParam1))
		{
			if (!unk_0xB3404E397FF56B3B(sParam1, ""))
			{
				func_47(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x31CD6E9F83C10233();
}

void func_47(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x8F8D0515CEE01015(sParam0);
	unk_0x7C8A7ECFBAD2C8C4(uParam1);
	unk_0xCA3811E629240D04(iParam2, 1);
}

int func_48(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x2A3398C6222EB190(uParam1->f_13, 14);
		
		case 1:
			return unk_0x2A3398C6222EB190(uParam1->f_13, 15);
		
		case 2:
			return unk_0x2A3398C6222EB190(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_49(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x90219307C9D2728D(iParam0, 0))
	{
		iVar0 = unk_0xCFA31F1E461A6BB5(iParam0, 0);
		if (!unk_0x7A6C051038031EFA(iVar0, 0))
		{
			if (unk_0x38A3CC71471EC547(iVar0) > fParam1)
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
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (!unk_0x03F0ADE460FD95F9(iParam0, func_15()))
		{
			iVar0 = unk_0x882388E2A8356C6F(iParam0);
			if (unk_0x432757A9E7AAFA96(iParam1, 0))
			{
				if (unk_0x830CAE5496B8AD6B(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (unk_0x76B3C79DE564AFC6(iParam1))
		{
			if (unk_0x432757A9E7AAFA96(iParam1, 0))
			{
				if (unk_0x26D7BF365BA84F9C(iParam0, iParam1))
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
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_13), 19);
			break;
	}
}

int func_53(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x2A3398C6222EB190(uParam1->f_13, 17);
		
		case 1:
			return unk_0x2A3398C6222EB190(uParam1->f_13, 18);
		
		case 2:
			return unk_0x2A3398C6222EB190(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		iVar0 = unk_0x89A8BEEC1AA87D33(unk_0x0031992CA618A445());
		if (unk_0x432757A9E7AAFA96(iVar0, 0))
		{
			if (!unk_0x8682D8A6269E52C9(iParam0))
			{
				iVar1 = unk_0x89A8BEEC1AA87D33(iParam0);
				if (unk_0x432757A9E7AAFA96(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x830CAE5496B8AD6B(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		if (unk_0xE9559A12052415BE(iParam0) == joaat("bus") || unk_0xE9559A12052415BE(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x8682D8A6269E52C9(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x3251C2B06497863C(iParam0, 0, 0);
			if (!unk_0x8682D8A6269E52C9(iVar3))
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
			iVar4 = unk_0x3251C2B06497863C(iParam0, 1, 0);
			if (!unk_0x8682D8A6269E52C9(iVar4))
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
			iVar5 = unk_0x3251C2B06497863C(iParam0, 2, 0);
			if (!unk_0x8682D8A6269E52C9(iVar5))
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
	
	if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
	{
		uVar0 = unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0);
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
	
	if (!unk_0x8682D8A6269E52C9(iParam1))
	{
		if (unk_0x84432DB7C4069064(iParam1))
		{
			uVar0 = unk_0xCFA31F1E461A6BB5(iParam1, 0);
			if (!unk_0x7A6C051038031EFA(uVar0, 0))
			{
				if (unk_0x432757A9E7AAFA96(iVar0, 0))
				{
					if (unk_0x26D7BF365BA84F9C(unk_0x0031992CA618A445(), iVar0))
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
				else if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x89A8BEEC1AA87D33(unk_0x0031992CA618A445());
				if (unk_0x76B3C79DE564AFC6(iVar0))
				{
					if (func_42(iVar0, uParam0, 0))
					{
						if (unk_0x432757A9E7AAFA96(iVar0, 0))
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
	
	if (!unk_0x7A6C051038031EFA(uParam0, 0))
	{
		fVar0 = unk_0x38A3CC71471EC547(iParam0);
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
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (unk_0x432757A9E7AAFA96(iParam1, 0))
		{
			iVar0 = unk_0x89A8BEEC1AA87D33(iParam0);
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
	
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
	{
		iVar0 = unk_0x882388E2A8356C6F(unk_0x0031992CA618A445());
		if (unk_0x432757A9E7AAFA96(iVar0, 0))
		{
			iVar1 = unk_0x3251C2B06497863C(iVar0, 0, 0);
			if (!unk_0x8682D8A6269E52C9(iVar1))
			{
				if (iVar1 != unk_0x0031992CA618A445())
				{
					if (unk_0xCC234795142FC2D2(iVar1))
					{
						if (!unk_0x0E91E9363F366FB3(iVar1, unk_0x0031992CA618A445()))
						{
							unk_0x43EC517AF665D2B9(iVar1, unk_0x0031992CA618A445(), 2000, 2048, 2);
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
	
	if (!unk_0x2A3398C6222EB190(uParam0->f_13, 25))
	{
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			unk_0xD6A092D1F1B9A9F1(unk_0x0031992CA618A445(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x76B3C79DE564AFC6(uParam0->f_17[iVar0]))
			{
				if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar0]))
				{
					unk_0xD6A092D1F1B9A9F1(uParam0->f_17[iVar0], 32, 0);
					unk_0xD6A092D1F1B9A9F1(uParam0->f_17[iVar0], 305, 1);
					unk_0xD6A092D1F1B9A9F1(uParam0->f_17[iVar0], 268, 1);
					unk_0xD16C6E29725B1B9A(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_13), 25);
	}
}

void func_62(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x76B3C79DE564AFC6(uParam0->f_17[iVar0]))
		{
			if (!unk_0x8682D8A6269E52C9(uParam0->f_17[iVar0]))
			{
				if (unk_0x84432DB7C4069064(uParam0->f_17[iVar0]))
				{
					unk_0x9C8949CB342B3559(uParam0->f_17[iVar0], 0);
					unk_0x1481FD3C9C94FB39(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
			{
				unk_0x9C8949CB342B3559(unk_0x0031992CA618A445(), 0);
				unk_0x1481FD3C9C94FB39(unk_0x0031992CA618A445(), 0);
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
	
	if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_96, 0))
	{
		if (unk_0xA761A0B6072010C8(uLocal_102))
		{
			unk_0x0C4BDC77192798AE(&uLocal_102);
		}
		if (iLocal_36 <= 2)
		{
			iLocal_80 = (unk_0x36BBEEB0A9B9FA57() * ((60 * iLocal_82) + iLocal_83));
			iLocal_80 = (iLocal_80 + unk_0x31CD6E9F83C10233());
			iLocal_84 = (iLocal_80 - unk_0x36BBEEB0A9B9FA57() * 30);
		}
		else if (iLocal_36 > 6)
		{
			iLocal_80 = (unk_0x36BBEEB0A9B9FA57() * ((60 * iLocal_82) + iLocal_83));
			iLocal_80 = (iLocal_80 + unk_0x31CD6E9F83C10233());
			iLocal_84 = (iLocal_80 - unk_0x36BBEEB0A9B9FA57() * 30);
		}
		else if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			iLocal_97 = unk_0x5129A9193468FF77(iLocal_89, Local_70, fLocal_74, 1, 1, 0);
			iLocal_93[0] = unk_0x4E2448BB7576232A(iLocal_97, 6, iLocal_87, -1, 1, 1);
			iLocal_93[1] = unk_0x4E2448BB7576232A(iLocal_97, 6, iLocal_87, 0, 1, 1);
			unk_0x659E5E147E8E6635("rghCop", &uLocal_118);
			unk_0x85F49C37BE784CD7(4, uLocal_118, joaat("player"));
			unk_0xA8A16396F3E7CD41(iLocal_93[0], 39, 1);
			unk_0xA8A16396F3E7CD41(iLocal_93[1], 39, 1);
			iVar0 = 0;
			while (iVar0 < iLocal_93)
			{
				unk_0xD5D9B48EB10FA2C0(iLocal_93[iVar0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x0B74ECD04F4F0262(iLocal_93[iVar0], 100f);
				unk_0x7F53E53C6F32D196(iLocal_93[iVar0], uLocal_118);
				iVar0++;
			}
		}
		iLocal_38 = 2;
	}
}

void func_66()
{
	int iVar0;
	
	if (!unk_0x7A6C051038031EFA(iLocal_96, 0))
	{
		if (func_96() || unk_0x8682D8A6269E52C9(iLocal_90[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_90)
			{
				if (!unk_0x8682D8A6269E52C9(iLocal_90[iVar0]))
				{
					if (!unk_0xA761A0B6072010C8(uLocal_99[iVar0]))
					{
						uLocal_99[iVar0] = func_10(iLocal_90[iVar0], 1, 145);
						unk_0xA8A16396F3E7CD41(iLocal_90[iVar0], 1, 0);
						unk_0x173325AAF2CD766A(&uLocal_120);
						unk_0x471E558A661279DE(0, 0, 0);
						unk_0x8B4EE19968C93083(0, unk_0x0031992CA618A445(), 0, 16);
						unk_0xF81AD3C937316CCA(uLocal_120);
						unk_0xEDD5437C49B7B1F8(iLocal_90[iVar0], uLocal_120);
						unk_0x1F5B34056C3CB80B(&uLocal_120);
					}
				}
				else if (unk_0xA761A0B6072010C8(uLocal_99[iVar0]))
				{
					unk_0x0C4BDC77192798AE(&(uLocal_99[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_79)
		{
			if (!unk_0x8682D8A6269E52C9(iLocal_90[0]))
			{
				if (unk_0x830CAE5496B8AD6B(unk_0x0031992CA618A445(), iLocal_90[0], 50f, 50f, 50f, 0, 1, 0))
				{
					unk_0xF67CC1918ACD3BB7(iLocal_90[0], iLocal_96, unk_0x0031992CA618A445(), 8, 25f, 786469, -1f, -1f, 1);
					iLocal_79 = 1;
				}
			}
		}
		if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), iLocal_96, 0))
		{
			if (unk_0xA761A0B6072010C8(uLocal_102))
			{
				unk_0x0C4BDC77192798AE(&uLocal_102);
			}
			func_95(&uLocal_106, 0, 0);
			iLocal_38 = 2;
		}
		else if (unk_0x00E962E9D49FD6C4(iLocal_96, -1, 0) || unk_0x8682D8A6269E52C9(iLocal_90[0]))
		{
			func_95(&uLocal_106, 0, 0);
		}
		else
		{
			func_67();
		}
	}
}

void func_67()
{
	if (!unk_0x8682D8A6269E52C9(iLocal_90[0]) && !unk_0x7A6C051038031EFA(iLocal_96, 0))
	{
		if (unk_0xA32DC7E16AD1DFB7(iLocal_90[0], iLocal_96, 0))
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
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
	{
		func_95(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_71(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_71(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x154C8F16279FF849())
	{
		if (unk_0x31CD6E9F83C10233() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x996B09F758C57FBE(iVar0))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_94(iVar0))
	{
		func_93();
	}
	if (func_92(uParam1) && unk_0x8CAADD2AA5EDCAAC(uParam1))
	{
		iVar1 = 0;
		if (unk_0x269F274F1955DE87(uParam1))
		{
			unk_0x74C81A83411D14D3(unk_0x4849801147A2BA1E(iParam1));
			unk_0x0FA8F26FCFDFF803(unk_0x4849801147A2BA1E(iParam1), 1);
			if (unk_0x5C428867F8F5FE0C(unk_0x4849801147A2BA1E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x036E1D5EA494CEB2(iParam1))
		{
			unk_0x932BE5F88FA96F6D(unk_0x89C1AD6422029361(iParam1));
			if (unk_0x896AC94320989D6D(unk_0x89C1AD6422029361(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xC207EA827E8CD735(iParam1))
		{
			unk_0x34CD6EBB80DC5D6B(unk_0x0B603933F47AABAA(iParam1));
			if (unk_0x3754E63199967977(unk_0x0B603933F47AABAA(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x154C8F16279FF849())
		{
			if (func_87(uParam0, bParam7, bParam9, 0))
			{
				func_83(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_76(iVar0))
				{
					if ((unk_0x996B09F758C57FBE(uParam0->f_3) && !unk_0x996B09F758C57FBE(iVar0)) && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
					{
						if ((iVar1 && !unk_0x068C69D0643C4B95()) && uParam8)
						{
							if (!func_94(iVar0))
							{
								func_75(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xB3404E397FF56B3B("CMN_HINT", iVar0))
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
				if (unk_0x996B09F758C57FBE(uParam0->f_3) && !unk_0x996B09F758C57FBE(iVar0))
				{
					if (((unk_0x4096DB4B0B8A982B(iParam1) && iVar1) && !unk_0x068C69D0643C4B95()) && uParam8)
					{
						if (!func_94(iVar0))
						{
							func_75(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xB3404E397FF56B3B("CMN_HINT", iVar0))
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
			if (!unk_0x996B09F758C57FBE(sParam5))
			{
				if (func_94(sParam5))
				{
					unk_0x8C361F37C04084F4(1);
				}
			}
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
			{
				if (unk_0x2567AB9A647DE5A7(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(3) == 3 || unk_0xE2378BA63E191ED9(3) == 4)
					{
						func_95(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(6) == 3 || unk_0xE2378BA63E191ED9(6) == 4)
					{
						func_95(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(4) == 3 || unk_0xE2378BA63E191ED9(4) == 4)
					{
						func_95(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57C2859D2506D4A1(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(5) == 3 || unk_0xE2378BA63E191ED9(5) == 4)
					{
						func_95(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
				{
					if (unk_0xE2378BA63E191ED9(2) == 3 || unk_0xE2378BA63E191ED9(2) == 4)
					{
						func_95(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7190CD5D1E49A125() == 3 || unk_0x7190CD5D1E49A125() == 4)
				{
					func_95(uParam0, iVar0, 1);
				}
			}
			if (!func_87(uParam0, bParam7, bParam9, 0))
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
		func_95(uParam0, iVar0, 0);
	}
}

void func_72(var uParam0)
{
	if (func_92(unk_0x0031992CA618A445()))
	{
		unk_0xCFA3B07B6CEEF62C(unk_0x0031992CA618A445());
	}
	if (unk_0x154C8F16279FF849())
	{
		unk_0xC938B5CB1FF90CA1(1);
		unk_0x59FA14CE9944B95A(0);
		unk_0xB3E27A9E412BBDF8("HINT_CAM_SCENE");
		unk_0xC84CB7879942C3BA("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xF177BD202464664F("FocusOut", 0, 0);
			unk_0x18F1BFAF88AC511B(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x31CD6E9F83C10233()
		{
			return 1;
		}
	}
	return 0;
}

int func_74(bool bParam0)
{
	switch (Global_35813)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_104439.f_9910.f_100++;
			}
			return Global_104439.f_9910.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_104439.f_9910.f_101++;
			}
			return Global_104439.f_9910.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_104439.f_9910.f_102++;
			}
			return Global_104439.f_9910.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_75(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 1, iParam1);
}

int func_76(char* sParam0)
{
	if (!func_77(1, 1, 0))
	{
		if ((!unk_0x0BD3CCFB6C6CFA91(sParam0) && func_94(sParam0)) || func_94("CMN_HINT"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		return 0;
	}
	switch (Global_35813)
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
		if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x003E46CBEF6CE07A())
	{
		return 0;
	}
	if (func_82(0))
	{
		return 0;
	}
	if (func_81())
	{
		return 0;
	}
	if (unk_0xFCFC2645B6CF6425())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (unk_0x7832F791572D5809(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53035)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
		{
			if (unk_0x2567AB9A647DE5A7(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(3) == 3 || unk_0xE2378BA63E191ED9(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9FA0D3FBA715E011(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(6) == 3 || unk_0xE2378BA63E191ED9(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF43A22E8C53B2D1E(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(4) == 3 || unk_0xE2378BA63E191ED9(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57C2859D2506D4A1(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(5) == 3 || unk_0xE2378BA63E191ED9(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x140FF1DD7B3CB531(unk_0x0031992CA618A445()))
			{
				if (unk_0xE2378BA63E191ED9(2) == 3 || unk_0xE2378BA63E191ED9(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7190CD5D1E49A125() == 3 || unk_0x7190CD5D1E49A125() == 4)
			{
				return 0;
			}
			if (unk_0xCE65BA0D5E39A5CB())
			{
				return 0;
			}
		}
	}
	if (func_80() || func_79(Global_1641087.f_116067))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xCF432047F5AFBA06(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), func_78(unk_0x0031992CA618A445(), 0)) || (unk_0xE9559A12052415BE(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0)) == joaat("apc") && func_78(unk_0x0031992CA618A445(), 0) != -1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x8682D8A6269E52C9(iParam0))
	{
		if (unk_0x90219307C9D2728D(iParam0, iParam1))
		{
			iVar0 = unk_0xCFA31F1E461A6BB5(iParam0, iParam1);
			if (unk_0x76B3C79DE564AFC6(iVar0))
			{
				iVar1 = unk_0x09139F011D2AE2D0(unk_0xE9559A12052415BE(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x00E962E9D49FD6C4(iVar0, iVar3, 0))
					{
						if (unk_0x3251C2B06497863C(iVar0, iVar3, 0) == iParam0)
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

bool func_79(int iParam0)
{
	return iParam0 == 51;
}

var func_80()
{
	return Global_2445582.f_13;
}

bool func_81()
{
	return unk_0x31CD6E9F83C10233() <= Global_17290.f_5745 + 100;
}

int func_82(int iParam0)
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

void func_83(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316441 == 1)
	{
		return;
	}
	if (unk_0x7A6C051038031EFA(uParam1, 0))
	{
		func_95(uParam0, 0, 0);
	}
	if (func_86(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x269F274F1955DE87(iParam1))
		{
			iVar0 = unk_0x4849801147A2BA1E(iParam1);
			if (!unk_0x90219307C9D2728D(iVar0, 0))
			{
				if (unk_0x972B5786EA49FE1A(iVar0))
				{
					if (!func_84())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xA7D1AE4528FB3B74(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xC938B5CB1FF90CA1(0);
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
	unk_0xF539A9F1BCA8C0E9(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x43EC517AF665D2B9(unk_0x0031992CA618A445(), iParam1, -1, iVar3, iVar4);
	unk_0xF177BD202464664F("FocusIn", 0, 0);
	unk_0xFD69BDF108B32E5B("HINT_CAM_SCENE");
	unk_0x18F1BFAF88AC511B(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x31CD6E9F83C10233();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_84()
{
	return func_85(unk_0x3D35F9864E4640B1());
}

int func_85(var uParam0)
{
	if (unk_0xE9559A12052415BE(unk_0xD33F4BC17EB987E5(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_86(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_87(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x31CD6E9F83C10233() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					if (func_91(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_90(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_90(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_91(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x31CD6E9F83C10233();
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
			if ((unk_0x31CD6E9F83C10233() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
					{
						if (!func_91(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x31CD6E9F83C10233();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_90(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_90(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_91(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x31CD6E9F83C10233();
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
				if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					if (!func_91(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_90(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_90(bParam1, bParam2, bParam3) || unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || unk_0xB37AB4AC3AD45AD8(unk_0x0031992CA618A445(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_91(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x31CD6E9F83C10233() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1))
					{
						if (func_89(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 1) || unk_0xB37AB4AC3AD45AD8(unk_0x0031992CA618A445(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_89(bParam1, bParam2, bParam3))
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
		func_93();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_88(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!unk_0x70C39849FCDB03D4(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC9621A9AD282CC14(0, 140, 1);
			unk_0xC9621A9AD282CC14(0, 80, 1);
			if (unk_0x0B34E1F8A98046A7(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_89(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		unk_0xC9621A9AD282CC14(0, 80, 1);
		if (unk_0x13C9F293A578AEF5())
		{
			if (unk_0x0B34E1F8A98046A7(0, 80))
			{
				unk_0xC938B5CB1FF90CA1(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_90(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		if (!unk_0x70C39849FCDB03D4(unk_0x3D35F9864E4640B1()))
		{
			unk_0xC9621A9AD282CC14(0, 140, 1);
			unk_0xC9621A9AD282CC14(0, 80, 1);
			if (unk_0x59ABF4F2C485FC38(0, 80) && unk_0x31CD6E9F83C10233() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_91(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
	{
		unk_0xC9621A9AD282CC14(0, 80, 1);
		if (unk_0x13C9F293A578AEF5())
		{
			if (unk_0x59ABF4F2C485FC38(0, 80) && unk_0x31CD6E9F83C10233() > Global_116)
			{
				unk_0xC938B5CB1FF90CA1(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_92(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(iParam0))
	{
		if (unk_0x036E1D5EA494CEB2(iParam0))
		{
			if (unk_0x432757A9E7AAFA96(unk_0x89C1AD6422029361(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x269F274F1955DE87(iParam0))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x4849801147A2BA1E(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xC207EA827E8CD735(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_93()
{
	unk_0xCD7E92DE2BFA0B0D(&Global_2314, 4);
}

bool func_94(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

void func_95(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0x2A3398C6222EB190(Global_2501777.f_4545, 26))
		{
			return;
		}
	}
	if (unk_0x154C8F16279FF849())
	{
		unk_0x59FA14CE9944B95A(iParam2);
		unk_0xC84CB7879942C3BA("FocusIn");
		unk_0xB3E27A9E412BBDF8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xF177BD202464664F("FocusOut", 0, 0);
			unk_0x18F1BFAF88AC511B(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xC938B5CB1FF90CA1(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x996B09F758C57FBE(sVar0))
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x996B09F758C57FBE(uParam0->f_3))
	{
		if (func_94(uParam0->f_3))
		{
			unk_0x8C361F37C04084F4(1);
		}
	}
	if (!unk_0x996B09F758C57FBE(sVar0))
	{
		if (func_94(sVar0))
		{
			unk_0x8C361F37C04084F4(1);
		}
	}
}

int func_96()
{
	if (unk_0x76B3C79DE564AFC6(iLocal_96))
	{
		if (!unk_0x7A6C051038031EFA(iLocal_96, 0))
		{
			if ((((((unk_0x8DB158934E64B062(iLocal_96) < 300 || unk_0x9944C9C4DBEAB270(iLocal_96) < 200f) || unk_0xB3D4A3F00B489CC7(iLocal_96)) || (unk_0xD5667AC07F79E531(iLocal_96, 0, 0) && unk_0xD5667AC07F79E531(iLocal_96, 1, 0))) || (unk_0xD5667AC07F79E531(iLocal_96, 4, 0) && unk_0xD5667AC07F79E531(iLocal_96, 5, 0))) || (unk_0xD5667AC07F79E531(iLocal_96, 0, 0) && unk_0xD5667AC07F79E531(iLocal_96, 4, 0))) || (unk_0xD5667AC07F79E531(iLocal_96, 1, 0) && unk_0xD5667AC07F79E531(iLocal_96, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_97()
{
	int iVar0;
	int iVar1;
	
	iLocal_96 = func_99(0);
	if (!unk_0x432757A9E7AAFA96(iLocal_96, 0))
	{
		iLocal_96 = unk_0x5129A9193468FF77(iLocal_88, Local_64, uLocal_73, 1, 1, 0);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			unk_0x9B48A5E9A884175D(iLocal_96, iVar0, 1);
			iVar0++;
		}
		if (iLocal_85 != -1)
		{
			unk_0x9B48A5E9A884175D(iLocal_96, iLocal_85, 0);
		}
	}
	unk_0x88B64C7A170FAF6E(iLocal_96, 1);
	uLocal_102 = func_98(iLocal_96, 0, 0);
	if (iLocal_36 != 5 && iLocal_36 != 6)
	{
		if (iLocal_36 > 6)
		{
			unk_0x31EFA4297B872C86(iLocal_96, 0, 0, 0, 0, 1, 0, 0, 0);
			unk_0x71CE8B25981385FD(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_96, 0, 0, 0);
		}
		func_35(sLocal_103, 7500, 1);
	}
	else
	{
		iLocal_90[0] = unk_0x4E2448BB7576232A(iLocal_96, 26, iLocal_86, -1, 1, 1);
		iLocal_90[1] = unk_0x4E2448BB7576232A(iLocal_96, 26, iLocal_86, 0, 1, 1);
		unk_0x659E5E147E8E6635("rghCriminal", &uLocal_119);
		unk_0x85F49C37BE784CD7(5, uLocal_119, joaat("player"));
		iVar1 = 0;
		while (iVar1 < iLocal_90)
		{
			unk_0xEB9B39274C401888(iLocal_90[iVar1], 1);
			unk_0xD5D9B48EB10FA2C0(iLocal_90[iVar1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
			unk_0x7F53E53C6F32D196(iLocal_90[iVar1], uLocal_119);
			iVar1++;
		}
		unk_0xF48F6EEC1EBEB012(iLocal_90[0], iLocal_96, 25f, 786599);
		func_35("PMDL_REC", 7500, 1);
	}
	if (!unk_0x7A6C051038031EFA(unk_0x7899A2987EB03783(), 0))
	{
		iLocal_98 = unk_0x7899A2987EB03783();
	}
	iLocal_38 = 1;
}

int func_98(var uParam0, bool bParam1, bool bParam2)
{
	return func_11(uParam0, !bParam1, bParam2);
}

int func_99(int iParam0)
{
	if (unk_0x432757A9E7AAFA96(Global_103149.f_222[iParam0], 0))
	{
		unk_0x1581691D748490F3(Global_103149.f_222[iParam0], 1, 1);
		return Global_103149.f_222[iParam0];
	}
	return 0;
}

int func_100()
{
	if (unk_0x76B3C79DE564AFC6(iLocal_96))
	{
		if (unk_0x432757A9E7AAFA96(iLocal_96, 0))
		{
			if (!unk_0x830CAE5496B8AD6B(iLocal_96, unk_0x0031992CA618A445(), 300f, 300f, 300f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x8682D8A6269E52C9(iLocal_90[0]))
	{
		if (unk_0xA761A0B6072010C8(uLocal_99[0]))
		{
			unk_0x0C4BDC77192798AE(&(uLocal_99[0]));
		}
	}
	return 0;
}

void func_101()
{
	unk_0xBE91026C1FC72180(iLocal_88);
	unk_0x1D69C39ECF71C85C("PMDL", 0);
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		unk_0xBE91026C1FC72180(iLocal_87);
		unk_0xBE91026C1FC72180(iLocal_89);
	}
	else if (iLocal_36 == 5 || iLocal_36 == 6)
	{
		unk_0xBE91026C1FC72180(iLocal_86);
	}
	unk_0x05C9FC8771682275(joaat("benson"), 1);
	unk_0x05C9FC8771682275(joaat("pony2"), 1);
	if (unk_0x772F801619C83779(iLocal_88) && unk_0xF376F1492C8D737F(0))
	{
		if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			if (unk_0x772F801619C83779(iLocal_87) && unk_0x772F801619C83779(iLocal_89))
			{
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 == 5 || iLocal_36 == 6)
		{
			if (unk_0x772F801619C83779(iLocal_86))
			{
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 > 6)
		{
			if (unk_0x1F1D255CB6501243("Deliveries", 0, -1))
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

void func_102()
{
	float fVar0;
	
	Local_64 = { func_104(func_106(), iLocal_36) };
	fLocal_73 = func_103(func_106(), iLocal_36);
	if (iLocal_36 > 6)
	{
		sLocal_103 = "PMDL_TRUCK";
		sLocal_104 = "PMDL_BTIM";
		sLocal_105 = "PMDL_BCKT";
		iLocal_88 = joaat("benson");
		iLocal_85 = 2;
	}
	if (func_106() == 10)
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
	else if (func_106() == 14)
	{
		Local_67 = { -2169.828f, 4277.365f, 47.9568f };
		fVar0 = unk_0x1410333E912D4EC6(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_106() == 13)
	{
		Local_67 = { -323.356f, 6264.431f, 30.4463f };
		fVar0 = unk_0x1410333E912D4EC6(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_106() == 12)
	{
		Local_67 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = unk_0x1410333E912D4EC6(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (func_106() == 11)
	{
		Local_67 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = unk_0x1410333E912D4EC6(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	iLocal_81 = 0;
	iLocal_76 = 1;
}

float func_103(int iParam0, int iParam1)
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

Vector3 func_104(int iParam0, int iParam1)
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
	return func_105(iParam0);
}

Vector3 func_105(int iParam0)
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

int func_106()
{
	return Global_103149.f_20;
}

int func_107()
{
	return func_108(Global_103149.f_20, Global_103149.f_29);
}

int func_108(int iParam0, int iParam1)
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

void func_109()
{
	unk_0x05C9FC8771682275(joaat("benson"), 0);
	unk_0x05C9FC8771682275(joaat("pony2"), 0);
	unk_0x616FBCC20E22C43A();
	if (iLocal_77)
	{
		if (!unk_0x7A6C051038031EFA(iLocal_98, 0))
		{
			func_110(iLocal_98, 0, 145);
		}
		unk_0xF39316F534343731(unk_0x3D35F9864E4640B1());
		func_95(&uLocal_106, 0, 0);
	}
	unk_0xBEE2834559A8897A();
}

int func_110(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x82C5E5956536E83D(iParam0, &uVar0);
		if (!unk_0x0BD3CCFB6C6CFA91(uVar1))
		{
			if (unk_0x50B7853132D8438E(sVar1) == unk_0x50B7853132D8438E("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_111(iParam0, iParam2);
	return 1;
}

void func_111(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_116(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x3251C2B06497863C(iParam0, -1, 0);
		if (!unk_0x76B3C79DE564AFC6(iVar0))
		{
			iVar0 = unk_0xB4ED2AD9365A5F9E(iParam0, -1);
		}
		if (unk_0x76B3C79DE564AFC6(iVar0) && !unk_0x8682D8A6269E52C9(iVar0))
		{
			if (unk_0xE9559A12052415BE(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xE9559A12052415BE(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xE9559A12052415BE(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_104439.f_2244.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xE9559A12052415BE(iParam0) == Global_104439.f_32291.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x0BD3CCFB6C6CFA91(&(Global_104439.f_32291.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xB3404E397FF56B3B(unk_0xCF9C6545E179C4AD(iParam0), &(Global_104439.f_32291.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_104439.f_32291.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_104439.f_32291.f_5592[iVar1] = iVar2;
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
		if (unk_0xE9559A12052415BE(iParam0) == Global_104439.f_32291.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x0BD3CCFB6C6CFA91(&(Global_104439.f_32291.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xB3404E397FF56B3B(unk_0xCF9C6545E179C4AD(iParam0), &(Global_104439.f_32291.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_104439.f_32291.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_104439.f_32291.f_5590 = iParam1;
	Global_70512 = iParam0;
	Global_104439.f_32291.f_5588 = 1;
	func_112(iParam0, &(Global_104439.f_32291.f_5510));
}

void func_112(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		func_115(uParam1);
		uParam1->f_66 = unk_0xE9559A12052415BE(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xCF9C6545E179C4AD(iParam0), 16);
		*uParam1 = unk_0x3863090BB0402D29(iParam0);
		unk_0xB3EEFAD2583A0B39(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCC1E6825E8AEFA91(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB6CD70E75256F4B4(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x92D3D399848DA022(iParam0);
		uParam1->f_67 = unk_0x27F913045BB0E0C6(iParam0);
		uParam1->f_69 = unk_0x0B56976C59C0773F(iParam0);
		uParam1->f_70 = unk_0xB026720421512310(iParam0);
		unk_0x807574B316B857A4(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x6B1D7C9564AA9095(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x429138BE60703CCA(iParam0, 2))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 28);
		}
		if (unk_0x429138BE60703CCA(iParam0, 3))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 29);
		}
		if (unk_0x429138BE60703CCA(iParam0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 30);
		}
		if (unk_0x429138BE60703CCA(iParam0, 1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x949DE8C96217A79B(iParam0, 0))
		{
			uParam1->f_68 = unk_0x727C05A2BF43A1DA(iParam0);
		}
		if (unk_0xF9CDF5CA6A1D6756(uParam1->f_66))
		{
			if (unk_0xB24748D4EDC0E921(iParam0))
			{
				switch (unk_0x04A9D89D1A4A6CCC(iParam0))
				{
					case 2:
					case 0:
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 23);
						unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 23);
						unk_0xD804ACF2A7171150(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x95C125C85B156194(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 9);
		}
		if (unk_0x09F06C3C37B36D10(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 10);
		}
		if (unk_0x973A322D4D80E2D1(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 13);
			unk_0xE22FB988FAA3CC86(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xD19B16472550A083(iParam0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 12);
		}
		func_114(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3BE354A1A1BD6623(iParam0, iVar0 + 1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), func_113(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x66FE8ED1424CB0E3(iParam0, 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_77), 11);
		}
		if (unk_0x8B0523D9EF9595C2(iParam0, "IgnoredByQuickSave") && unk_0x0E340E113E76A82F(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xD804ACF2A7171150(&(uParam1->f_77), 27);
		}
	}
}

int func_113(int iParam0)
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

int func_114(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x432757A9E7AAFA96(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x5583DCB5A49F0E53(*iParam0) == 0)
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
			if (unk_0xEB185A7D2320BECE(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xBE7294CB9B3BEC34(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xE69CED5522DA627F(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xE69CED5522DA627F(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_115(var uParam0)
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

int func_116(int iParam0)
{
	if ((((((((((!unk_0x76B3C79DE564AFC6(iParam0) || !unk_0x432757A9E7AAFA96(iParam0, 0)) || func_132(iParam0, 0, 0)) || func_132(iParam0, 1, 0)) || func_132(iParam0, 2, 0)) || func_131(iParam0) != 145) || func_130(iParam0)) || func_129(iParam0)) || func_128(iParam0)) || func_127(iParam0)) || !func_117(unk_0xE9559A12052415BE(iParam0)))
	{
		if (func_129(iParam0))
		{
		}
		if (func_129(iParam0))
		{
		}
		if (func_132(iParam0, 0, 0))
		{
		}
		if (func_132(iParam0, 1, 0))
		{
		}
		if (func_132(iParam0, 2, 0))
		{
		}
		if (func_131(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_117(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_118(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x9C4740BA7F0AF553(iParam0) || unk_0xF9CDF5CA6A1D6756(iParam0)) || unk_0x1DBFCF939B3B47D0(iParam0)) || unk_0x22237535B3A68DF9(iParam0))
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

int func_118(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6DFDB26E7DC403AF(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x27CA09C6DFAB1E79()) || (iParam0 == joaat("buffalo3") && !unk_0x27CA09C6DFAB1E79())) || (iParam0 == joaat("gauntlet2") && !unk_0x27CA09C6DFAB1E79())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x27CA09C6DFAB1E79())) || iParam0 == joaat("blista3"))
	{
		if (!func_126())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x9F1747E93F8C8B1E())
		{
			if (unk_0xF87BC0F22BCEB035(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x03CF889BDA5553A9(Var1.f_0))
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
		if ((((!func_125() && !func_124()) && !func_123()) && !func_122()) && !func_126())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x9D3EA2635512FD6B() || unk_0x20551D6D924ED04B()) || unk_0x43F4A6D2081CC5ED())
		{
		}
		else if (!func_123())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_121(iParam0))
		{
			return 0;
		}
	}
	if (!func_119(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_119(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_120())
	{
		return 1;
	}
	unk_0xE2A314A6903DD12E(&iVar0, &uVar1);
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
	if (!unk_0x09E7CE4C231F1F83(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_120()
{
	if (unk_0x20551D6D924ED04B())
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2488615)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x6239D1A379D387A4();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5994 && !Global_262145.f_12099) && iVar1 < Global_262145.f_12100)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13342 && iVar1 < Global_262145.f_13354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13338 && iVar1 < Global_262145.f_13350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13339 && iVar1 < Global_262145.f_13351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13340 && iVar1 < Global_262145.f_13352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13341 && iVar1 < Global_262145.f_13353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13343 && iVar1 < Global_262145.f_13355)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13344 && iVar1 < Global_262145.f_13347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13345 && iVar1 < Global_262145.f_13348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13346 && iVar1 < Global_262145.f_13349)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15973 && iVar1 < Global_262145.f_15938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15968 && iVar1 < Global_262145.f_15933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15972 && iVar1 < Global_262145.f_15937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15971 && iVar1 < Global_262145.f_15936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15965 && iVar1 < Global_262145.f_15930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15966 && iVar1 < Global_262145.f_15931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15969 && iVar1 < Global_262145.f_15934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15970 && iVar1 < Global_262145.f_15935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15967 && iVar1 < Global_262145.f_15932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_15975 && iVar1 < Global_262145.f_15940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_15976 && iVar1 < Global_262145.f_15941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15964 && iVar1 < Global_262145.f_15929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15963 && iVar1 < Global_262145.f_15928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15962 && iVar1 < Global_262145.f_15927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15974 && iVar1 < Global_262145.f_15939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_15977 && iVar1 < Global_262145.f_15942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_15978 && iVar1 < Global_262145.f_15943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_15979 && iVar1 < Global_262145.f_15944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_15980 && iVar1 < Global_262145.f_15945)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16125 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16126 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16127 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16128 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16129 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16130 && iVar1 < Global_262145.f_16152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16132 && iVar1 < Global_262145.f_16153)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16133 && iVar1 < Global_262145.f_16154)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16134 && iVar1 < Global_262145.f_16155)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16135 && iVar1 < Global_262145.f_16156)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16136 && iVar1 < Global_262145.f_16157)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16137 && iVar1 < Global_262145.f_16158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16138 && iVar1 < Global_262145.f_16159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16144 && iVar1 < Global_262145.f_16166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16141 && iVar1 < Global_262145.f_16162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16142 && iVar1 < Global_262145.f_16163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16143 && iVar1 < Global_262145.f_16164)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16131 && iVar1 < Global_262145.f_16165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16145 && iVar1 < Global_262145.f_16167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16139 && iVar1 < Global_262145.f_16160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16140 && iVar1 < Global_262145.f_16161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16146 && iVar1 < Global_262145.f_16168)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17774 && iVar1 < Global_262145.f_17815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17775 && iVar1 < Global_262145.f_17816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17776 && iVar1 < Global_262145.f_17817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17777 && iVar1 < Global_262145.f_17818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17778 && iVar1 < Global_262145.f_17819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17779 && iVar1 < Global_262145.f_17820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17780 && iVar1 < Global_262145.f_17821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17781 && iVar1 < Global_262145.f_17822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17782 && iVar1 < Global_262145.f_17823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17783 && iVar1 < Global_262145.f_17824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17784 && iVar1 < Global_262145.f_17825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17785 && iVar1 < Global_262145.f_17826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17786 && iVar1 < Global_262145.f_17827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17787 && iVar1 < Global_262145.f_17828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17788 && iVar1 < Global_262145.f_17829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17789 && iVar1 < Global_262145.f_17830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17790 && iVar1 < Global_262145.f_17831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17791 && iVar1 < Global_262145.f_17832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17792 && iVar1 < Global_262145.f_17833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17793 && iVar1 < Global_262145.f_17834)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17794 && iVar1 < Global_262145.f_17835)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17795 && iVar1 < Global_262145.f_17836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17796 && iVar1 < Global_262145.f_17837)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17839)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18801 && iVar1 < Global_262145.f_18797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18802 && iVar1 < Global_262145.f_18798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18803 && iVar1 < Global_262145.f_18799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18804 && iVar1 < Global_262145.f_18800)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19643 && iVar1 < Global_262145.f_19651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19644 && iVar1 < Global_262145.f_19652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19645 && iVar1 < Global_262145.f_19653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19646 && iVar1 < Global_262145.f_19654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19647 && iVar1 < Global_262145.f_19655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19648 && iVar1 < Global_262145.f_19656)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20411 && iVar1 < Global_262145.f_20431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20423 && iVar1 < Global_262145.f_20443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20414 && iVar1 < Global_262145.f_20434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20424 && iVar1 < Global_262145.f_20444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20412 && iVar1 < Global_262145.f_20432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20428 && iVar1 < Global_262145.f_20448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20426 && iVar1 < Global_262145.f_20446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20427 && iVar1 < Global_262145.f_20447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20422 && iVar1 < Global_262145.f_20442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20429 && iVar1 < Global_262145.f_20449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20425 && iVar1 < Global_262145.f_20445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20421 && iVar1 < Global_262145.f_20441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20413 && iVar1 < Global_262145.f_20433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20415 && iVar1 < Global_262145.f_20435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20416 && iVar1 < Global_262145.f_20436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20417 && iVar1 < Global_262145.f_20437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20418 && iVar1 < Global_262145.f_20438)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20419 && iVar1 < Global_262145.f_20439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20420 && iVar1 < Global_262145.f_20440)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_122()
{
	return 0;
}

int func_123()
{
	return 1;
}

int func_124()
{
	return 1;
}

int func_125()
{
	if (unk_0x43456EBBDC27D696(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_126()
{
	var uVar0;
	
	if (unk_0x5D07CD56579C6131())
	{
		if (unk_0xD69069794497409F())
		{
			if (unk_0x9F3509E90B1EE108())
			{
				unk_0x2553A7EB99AABF55(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 2);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 4);
				unk_0xCD7E92DE2BFA0B0D(&uVar0, 6);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 2);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 4);
				unk_0xCD7E92DE2BFA0B0D(&Global_25, 6);
				unk_0xE931A869061F7BD2(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6008D10CE7FC9AA8())
				{
					uVar0 = unk_0x03CCEFDDDC599303(866);
					unk_0xCD7E92DE2BFA0B0D(&uVar0, 0);
					unk_0x5149EEBBCD305987(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_142820 == 2)
	{
		return 1;
	}
	else if (Global_142820 == 3)
	{
		return 0;
	}
	if (unk_0x6008D10CE7FC9AA8())
	{
		if (unk_0x2A3398C6222EB190(unk_0x03CCEFDDDC599303(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xE9559A12052415BE(iParam0);
	uVar1 = unk_0xCF9C6545E179C4AD(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xB3404E397FF56B3B(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_118(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x76B3C79DE564AFC6(Global_90268[iVar0]))
		{
			if (Global_90268[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(iParam0) && unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x76B3C79DE564AFC6(Global_90238[iVar0]) && unk_0x432757A9E7AAFA96(Global_90238[iVar0], 0))
			{
				if (Global_90238[iVar0] == iParam0 && unk_0xE9559A12052415BE(Global_90238[iVar0]) == unk_0xE9559A12052415BE(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(Global_69607.f_484[24]))
	{
		if (iParam0 == Global_69607.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x76B3C79DE564AFC6(Global_69607.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69607.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	
	if (!unk_0x76B3C79DE564AFC6(iParam0))
	{
		return 145;
	}
	if (!unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x76B3C79DE564AFC6(Global_90238[iVar0]))
		{
			if (Global_90238[iVar0] == iParam0)
			{
				return Global_90248[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_132(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x76B3C79DE564AFC6(iParam0) || !unk_0x432757A9E7AAFA96(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_133(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x2A3398C6222EB190(Global_104439.f_7090[iVar9], 0))
		{
			if (unk_0xF71DD5142F86A1BE(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_134(int iParam0)
{
	Global_103149.f_22 = iParam0;
}

