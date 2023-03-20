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
	unk_0x52A56383568A954B(1);
	if (unk_0x2170E7BC25114A22(3))
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
	
	if (unk_0x7887B64A08364778(iLocal_96))
	{
		if (unk_0xA4DB44DF73EF4FE5(iLocal_96, 0))
		{
			iVar0 = 200;
			iVar1 = (unk_0xB38A470B669AC00B(iLocal_96) - 800);
			if (unk_0x04B02215CFC8E89F(iLocal_96))
			{
				unk_0xE81D470B804DC69A(iLocal_96, (unk_0xB38A470B669AC00B(iLocal_96) - 5));
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
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0);
}

void func_4(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21)
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
		Global_1354290.f_1 = 1;
		func_5(0, iVar0);
		Global_1354290.f_946[iVar0] = uParam0;
		Global_1354290.f_946.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1354290.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1354290.f_946.f_194[iVar0] = uParam3;
		Global_1354290.f_946.f_183[iVar0] = uParam4;
		Global_1354290.f_946.f_216[iVar0] = uParam5;
		Global_1354290.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1354290.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1354290.f_946.f_258[iVar0] = iParam8;
		Global_1354290.f_946.f_269[iVar0] = uParam9;
		Global_1354290.f_946.f_312[iVar0] = iParam10;
		Global_1354290.f_946.f_323[iVar0] = iParam11;
		Global_1354290.f_946.f_334[iVar0] = iParam12;
		Global_1354290.f_946.f_345[iVar0] = iParam13;
		Global_1354290.f_941 = 1;
		Global_1354290.f_946.f_356[iVar0] = iParam14;
		Global_1354290.f_946.f_367[iVar0] = iParam15;
		Global_1354290.f_946.f_378[iVar0] = iParam16;
		Global_1354290.f_946.f_389[iVar0] = iParam17;
		Global_1354290.f_946.f_400[iVar0] = iParam18;
		Global_1354290.f_946.f_411[iVar0] = iParam19;
		Global_1354290.f_946.f_422[iVar0] = iParam20;
		Global_1354290.f_946.f_433[iVar0] = iParam21;
	}
}

void func_5(int iParam0, int iParam1)
{
	unk_0xB8A73E7DA87B2968(&(Global_1354290.f_5139[iParam0]), iParam1);
}

bool func_6(int iParam0, int iParam1)
{
	return unk_0xF44A5E894FE76438(Global_1354290.f_5139[iParam0], iParam1);
}

void func_7()
{
	int iVar0;
	
	iVar0 = (iLocal_80 - unk_0x84A97C70FFDEC0C8());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (unk_0x84A97C70FFDEC0C8() >= iLocal_84)
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
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 10000))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 1:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 9000))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 2:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 8000))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 3:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 7000))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 4:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 6000))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 5:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 5000))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 6:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 4500))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 7:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 4000))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 8:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 3500))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 9:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 3000))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 10:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 2500))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 11:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 2000))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 12:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 1500))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 13:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 1000))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 14:
			if (unk_0x84A97C70FFDEC0C8() >= (iLocal_80 - 500))
			{
				unk_0xA93E75A5493862BD(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 15:
			if (unk_0x84A97C70FFDEC0C8() >= iLocal_80)
			{
				unk_0xA93E75A5493862BD(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 16:
			break;
	}
	if (unk_0x84A97C70FFDEC0C8() >= iLocal_80)
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
		Global_1354290.f_1 = 1;
		func_5(7, iVar0);
		Global_1354290.f_4131[iVar0] = iParam0;
		StringCopy(&(Global_1354290.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354290.f_4131.f_172[iVar0] = iParam2;
		Global_1354290.f_4131.f_216[iVar0] = iParam3;
		Global_1354290.f_4131.f_183[iVar0] = iParam4;
		Global_1354290.f_4131.f_194[iVar0] = iParam5;
		Global_1354290.f_4131.f_249[iVar0] = iParam6;
		Global_1354290.f_4131.f_260[iVar0] = iParam7;
		Global_1354290.f_4131.f_205[iVar0] = iParam8;
		Global_1354290.f_4131.f_314[iVar0] = iParam9;
		Global_1354290.f_4131.f_325[iVar0] = iParam10;
		Global_1354290.f_4131.f_357[iVar0] = iParam11;
		Global_1354290.f_4131.f_238[iVar0] = iParam12;
		Global_1354290.f_4131.f_271[iVar0] = iParam13;
		Global_1354290.f_4131.f_368[iVar0] = iParam14;
		Global_1354290.f_4131.f_379[iVar0] = iParam15;
		Global_1354290.f_4131.f_390[iVar0] = iParam16;
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
				if (!unk_0x00B5B0B68211D89B(iLocal_93[iVar0]))
				{
					if (!unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Local_64, 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0x1CDFDF1BD5941010(unk_0xFB6B3EEFAB2DD12C(), 2, 0);
						unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
						unk_0xE49B615FC18760D7(unk_0xFB6B3EEFAB2DD12C(), 0f);
						iLocal_78 = 1;
					}
				}
			}
			else if (!unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0))
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_93[iVar0]))
				{
					unk_0xBB8F1D58B7578137(iLocal_93[iVar0], unk_0xD5A676B97920D126(), 1000f, -1, 0, 0);
					unk_0x7D99F00F48D15ADB(iLocal_93[iVar0], 1);
					unk_0xD4B3FF1E63C36391(&(iLocal_93[iVar0]));
				}
				if (unk_0x7887B64A08364778(uLocal_97))
				{
					unk_0xB24D3BF5DABD13AA(&iLocal_97);
				}
			}
			iVar0++;
		}
	}
	if (func_21(&uLocal_39, Local_67, Global_22, 1, iLocal_96, sLocal_104, "", sLocal_105, 1, 0, 1, -1))
	{
		func_19(iLocal_96, 10.5f, 2, 1056964608, 0, 1, 0);
		unk_0xE9148EE8AA200B60(unk_0xD5A676B97920D126(), 2000, 0);
		unk_0xFF4749958FDEC48C(iLocal_96, 0);
		func_14(&uLocal_39, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_90)
	{
		if (!unk_0x00B5B0B68211D89B(iLocal_90[iVar1]))
		{
			if (!unk_0x6901135DDCC4904D(uLocal_99[iVar1]))
			{
				uLocal_99[iVar1] = func_10(iLocal_90[iVar1], 1, 145);
				unk_0x456121A0AAC868D4(&uLocal_120);
				unk_0xE9148EE8AA200B60(0, 0, 0);
				unk_0x182DAF81B229194E(0, unk_0xD5A676B97920D126(), 0, 16);
				unk_0xCFE67FBB69F1C410(uLocal_120);
				unk_0x8B06B801B92CEC2D(iLocal_90[iVar1], uLocal_120);
				unk_0x873418BFBF9A6780(&uLocal_120);
				unk_0x7D99F00F48D15ADB(iLocal_90[iVar1], 1);
			}
			if (!unk_0x108650178993C477(iLocal_90[iVar1], unk_0xD5A676B97920D126(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (unk_0x6901135DDCC4904D(uLocal_99[iVar1]))
				{
					unk_0x8A3D7569826A325D(&(uLocal_99[iVar1]));
				}
				unk_0xBB8F1D58B7578137(iLocal_90[iVar1], unk_0xD5A676B97920D126(), 1000f, -1, 0, 0);
				unk_0x7D99F00F48D15ADB(iLocal_90[iVar1], 1);
				unk_0xD4B3FF1E63C36391(&(iLocal_90[iVar1]));
			}
		}
		else if (unk_0x6901135DDCC4904D(uLocal_99[iVar1]))
		{
			unk_0x8A3D7569826A325D(&(uLocal_99[iVar1]));
		}
		iVar1++;
	}
}

var func_10(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_11(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x6901135DDCC4904D(uVar0)) && unk_0xA6AD4206830E160C(&(Global_101652.f_26993[iParam2 /*29*/].f_3)))
	{
		unk_0x2EDAF851B28036F0(uVar0, &(Global_101652.f_26993[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x7887B64A08364778(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x890C68C377CE0CA4(iParam0);
	if (unk_0x8041FE602D4689B1(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_12(unk_0x1995B52453EF6537(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
		}
		else
		{
			unk_0x4F095059F1C175D5(uVar0, 2);
		}
	}
	else if (unk_0x6DA4D1391A7B813F(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_12(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
		unk_0x1BDDADB5ACDFD382(uVar0, bParam1);
	}
	else if (unk_0x8E0E23664261A6B9(iParam0))
	{
		unk_0xF563C3AC64885E69(uVar0, func_12(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
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
	
	if (unk_0xF44A5E894FE76438(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_18(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x6901135DDCC4904D(uParam0->f_1[iVar0]))
		{
			unk_0x8A3D7569826A325D(&(uParam0->f_1[iVar0]));
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
			unk_0x4EA098C870B73AB7(&(uParam0->f_13), iVar0);
			unk_0x4EA098C870B73AB7(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x6901135DDCC4904D(*uParam0))
	{
		unk_0x8A3D7569826A325D(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar0]))
		{
			unk_0xF2B008953E08940C(uParam0->f_17[iVar0], 1);
			unk_0x4C3AE97631B9B672(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x237B0CFB6EEBD3BA(uParam0->f_17[iVar0], 32, 1);
				unk_0x237B0CFB6EEBD3BA(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x237B0CFB6EEBD3BA(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar0], func_15()) && uParam0->f_17[iVar0] != unk_0xD5A676B97920D126())
				{
					unk_0x195690A8FA7145B8(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xF44A5E894FE76438(uParam0->f_13, 29))
			{
				unk_0xE95B3D9B1E241453(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		unk_0xF2B008953E08940C(unk_0xD5A676B97920D126(), 1);
		unk_0x4C3AE97631B9B672(unk_0xD5A676B97920D126(), 1);
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (bParam2)
		{
			unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_15()
{
	return unk_0xB31CADDD9247FE2C(unk_0xF3F8195C98263BF5());
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x4EA098C870B73AB7(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x4EA098C870B73AB7(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x4EA098C870B73AB7(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x4EA098C870B73AB7(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x4EA098C870B73AB7(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x4EA098C870B73AB7(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0)
{
	if (unk_0x6901135DDCC4904D(uParam0->f_5))
	{
		unk_0x8A3D7569826A325D(&(uParam0->f_5));
	}
}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x2A29D86854DC4BC0(0, 71, 1);
	unk_0x2A29D86854DC4BC0(0, 72, 1);
	unk_0x2A29D86854DC4BC0(0, 76, 1);
	unk_0x2A29D86854DC4BC0(0, 73, 1);
	unk_0x2A29D86854DC4BC0(0, 59, 1);
	unk_0x2A29D86854DC4BC0(0, 60, 1);
	if (bParam5)
	{
		unk_0x2A29D86854DC4BC0(0, 75, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 80, 1);
	if (!bParam6)
	{
		unk_0x2A29D86854DC4BC0(0, 69, 1);
		unk_0x2A29D86854DC4BC0(0, 70, 1);
		unk_0x2A29D86854DC4BC0(0, 68, 1);
	}
	unk_0x2A29D86854DC4BC0(0, 74, 1);
	unk_0x2A29D86854DC4BC0(0, 86, 1);
	unk_0x2A29D86854DC4BC0(0, 81, 1);
	unk_0x2A29D86854DC4BC0(0, 82, 1);
	unk_0x2A29D86854DC4BC0(0, 138, 1);
	unk_0x2A29D86854DC4BC0(0, 136, 1);
	unk_0x2A29D86854DC4BC0(0, 114, 1);
	unk_0x2A29D86854DC4BC0(0, 107, 1);
	unk_0x2A29D86854DC4BC0(0, 110, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 89, 1);
	unk_0x2A29D86854DC4BC0(0, 87, 1);
	unk_0x2A29D86854DC4BC0(0, 88, 1);
	unk_0x2A29D86854DC4BC0(0, 113, 1);
	unk_0x2A29D86854DC4BC0(0, 115, 1);
	unk_0x2A29D86854DC4BC0(0, 116, 1);
	unk_0x2A29D86854DC4BC0(0, 117, 1);
	unk_0x2A29D86854DC4BC0(0, 118, 1);
	unk_0x2A29D86854DC4BC0(0, 119, 1);
	unk_0x2A29D86854DC4BC0(0, 131, 1);
	unk_0x2A29D86854DC4BC0(0, 132, 1);
	unk_0x2A29D86854DC4BC0(0, 123, 1);
	unk_0x2A29D86854DC4BC0(0, 126, 1);
	unk_0x2A29D86854DC4BC0(0, 129, 1);
	unk_0x2A29D86854DC4BC0(0, 130, 1);
	unk_0x2A29D86854DC4BC0(0, 133, 1);
	unk_0x2A29D86854DC4BC0(0, 134, 1);
	unk_0x6CE614A8ED95A6CF();
	func_20(iParam0);
	if ((unk_0x84A97C70FFDEC0C8() - Global_29) > 500)
	{
		unk_0xF351193474DA13BB(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x84A97C70FFDEC0C8();
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		if (unk_0xC3D3EC28F0EB3C6D(unk_0x78D3CDB884C74FEB(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_20(int iParam0)
{
	if (unk_0x36D782F68B309BDA(iParam0))
	{
		if (unk_0x3D34E80EED4AE3BE(iParam0))
		{
			unk_0x81E1552E35DC3839(iParam0, false);
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
		if (unk_0x8AFBC859AA63D3D7())
		{
			bVar1 = false;
			if (unk_0xA4DB44DF73EF4FE5(iParam18, 0))
			{
				if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iParam18, 0))
				{
					unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 3);
					if (!unk_0xF44A5E894FE76438(uParam0->f_13, 9))
					{
						unk_0x4EA098C870B73AB7(&(uParam0->f_13), 4);
					}
					if (unk_0xF44A5E894FE76438(uParam0->f_13, 23))
					{
						unk_0x4EA098C870B73AB7(&(uParam0->f_13), 23);
					}
					unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_41(uParam0, iParam29))
				{
					unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 3);
					if (!unk_0xF44A5E894FE76438(uParam0->f_13, 9))
					{
						unk_0x4EA098C870B73AB7(&(uParam0->f_13), 4);
					}
					unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 9);
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
				if (bParam26 && unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0))
				{
					if (unk_0x6901135DDCC4904D(uParam0->f_5))
					{
						unk_0x8A3D7569826A325D(&(uParam0->f_5));
						func_43(sParam19);
					}
					if (unk_0x6901135DDCC4904D(*uParam0))
					{
						unk_0x8A3D7569826A325D(uParam0);
					}
					if ((!func_37(uParam0, 1) && !func_36(uParam0)) && !unk_0xF44A5E894FE76438(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x00B5B0B68211D89B(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 0);
						unk_0x4EA098C870B73AB7(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xF44A5E894FE76438(uParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0x4EA098C870B73AB7(&(uParam0->f_13), 0);
						unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 1);
					}
					if (unk_0xF44A5E894FE76438(uParam0->f_13, 1))
					{
						if (!func_37(uParam0, 1))
						{
							if (!unk_0x00B5B0B68211D89B(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x4EA098C870B73AB7(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0x6901135DDCC4904D(uParam0->f_5))
					{
						if (unk_0x6901135DDCC4904D(*uParam0))
						{
							unk_0x8A3D7569826A325D(uParam0);
						}
						uParam0->f_5 = func_31(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xD6507DB77BCBD904(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_30(uParam0->f_5, uParam0);
						}
					}
					else if (!func_29(Var3, unk_0xAEB3F4D3AF0E0C0B(uParam0->f_5), 0.1f, 0))
					{
						unk_0x4B55FF1D49C3A70D(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_30(uParam0->f_5, uParam0);
						}
					}
					if (!func_37(uParam0, 2))
					{
						if (!unk_0xF44A5E894FE76438(uParam0->f_13, 2))
						{
							func_34(uParam0, sParam19, 0);
							unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xF44A5E894FE76438(uParam0->f_13, 13))
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
						unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
									if (!unk_0x04D83291EB9DE51D(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x04D83291EB9DE51D(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar2], func_15()) || !func_27(uParam0->f_17[iVar2], 1))
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
			else if (unk_0x7887B64A08364778(iParam18))
			{
				if ((bParam26 && unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0)) && (!unk_0xF44A5E894FE76438(uParam0->f_13, 9) && !unk_0xF44A5E894FE76438(uParam0->f_13, 22)))
				{
					func_43(sParam24);
					func_43(sParam27);
					if (unk_0x6901135DDCC4904D(uParam0->f_5) || unk_0x6901135DDCC4904D(*uParam0))
					{
						unk_0x8A3D7569826A325D(&(uParam0->f_5));
						unk_0x8A3D7569826A325D(uParam0);
						func_43(sParam19);
					}
					if ((!func_37(uParam0, 1) && !func_36(uParam0)) && !unk_0xF44A5E894FE76438(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x00B5B0B68211D89B(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 0);
						unk_0x4EA098C870B73AB7(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xF44A5E894FE76438(uParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0x4EA098C870B73AB7(&(uParam0->f_13), 0);
						unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 1);
					}
					if (unk_0xF44A5E894FE76438(uParam0->f_13, 1))
					{
						if (!func_37(uParam0, 1))
						{
							if (!unk_0x00B5B0B68211D89B(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x4EA098C870B73AB7(&(uParam0->f_13), 1);
						}
					}
					if (unk_0xA4DB44DF73EF4FE5(iParam18, 0))
					{
						if (!unk_0x6901135DDCC4904D(*uParam0))
						{
							if (unk_0x6901135DDCC4904D(uParam0->f_5))
							{
								unk_0x8A3D7569826A325D(&(uParam0->f_5));
								func_43(sParam19);
							}
							*uParam0 = func_23(iParam18, 0, 0);
							unk_0xBEC798FF88A42020(*uParam0, 2);
							if (!unk_0xF44A5E894FE76438(uParam0->f_13, 4))
							{
								func_30(*uParam0, uParam0);
							}
						}
						if (!func_37(uParam0, 2))
						{
							if (!unk_0xF44A5E894FE76438(uParam0->f_13, 3))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 3);
								unk_0x4EA098C870B73AB7(&(uParam0->f_13), 4);
							}
							else if (unk_0xF44A5E894FE76438(uParam0->f_13, 9))
							{
								if (!unk_0x1C079483C9D16F36(sParam27))
								{
									if (!unk_0xF44A5E894FE76438(uParam0->f_13, 4))
									{
										func_34(uParam0, sParam27, 0);
										unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xF44A5E894FE76438(uParam0->f_13, 4))
								{
									func_34(uParam0, sParam24, 0);
									unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 4);
								}
								if (!unk_0xF44A5E894FE76438(uParam0->f_13, 23))
								{
									if (!unk_0x00B5B0B68211D89B(uParam0->f_17[0]))
									{
										func_32(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x6901135DDCC4904D(uParam0->f_5))
				{
					unk_0x8A3D7569826A325D(&(uParam0->f_5));
					func_43(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_37(uParam0, 2))
						{
							if (unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
							{
								if (!unk_0xF44A5E894FE76438(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x7BC26452241AC7C9(0, iVar8);
									if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar9]))
									{
										func_32(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_34(uParam0, "MORE_SEATS", 0);
									unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xF44A5E894FE76438(uParam0->f_13, 3))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 3);
								unk_0x4EA098C870B73AB7(&(uParam0->f_13), 4);
							}
							else if (!unk_0xF44A5E894FE76438(uParam0->f_13, 4))
							{
								if (unk_0xF44A5E894FE76438(uParam0->f_13, 9))
								{
									func_34(uParam0, sParam27, 0);
									unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_37(uParam0, 2))
					{
						if (!unk_0xF44A5E894FE76438(uParam0->f_13, 3))
						{
							func_34(uParam0, sParam24, 0);
							unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 3);
							unk_0x4EA098C870B73AB7(&(uParam0->f_13), 4);
						}
						else if (unk_0xF44A5E894FE76438(uParam0->f_13, 9))
						{
							if (!unk_0x1C079483C9D16F36(sParam27))
							{
								if (!unk_0xF44A5E894FE76438(uParam0->f_13, 4))
								{
									func_34(uParam0, sParam27, 0);
									unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xF44A5E894FE76438(uParam0->f_13, 4))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xF44A5E894FE76438(uParam0->f_13, 0))
		{
			unk_0x4EA098C870B73AB7(&(uParam0->f_13), 0);
		}
		func_43(sParam19);
		func_43(sParam24);
		func_43(sParam27);
		func_43(sParam24);
		func_43("LOSE_WANTED");
		if (unk_0x6901135DDCC4904D(uParam0->f_5))
		{
			unk_0x8A3D7569826A325D(&(uParam0->f_5));
		}
		if (unk_0x6901135DDCC4904D(*uParam0))
		{
			unk_0x8A3D7569826A325D(uParam0);
		}
	}
	unk_0x4EA098C870B73AB7(&(uParam0->f_13), 11);
	unk_0x4EA098C870B73AB7(&(uParam0->f_13), 12);
	return 0;
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_24(var uParam0)
{
	if (unk_0xF44A5E894FE76438(uParam0->f_13, 12))
	{
		if (func_26(unk_0xD5A676B97920D126()))
		{
			if (func_25(1, 0, 1) || unk_0xF44A5E894FE76438(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_25(1, 0, 1) || unk_0xF44A5E894FE76438(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_25(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94EB20429840304E())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
		{
			return 0;
		}
		iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		if (bParam0)
		{
			if (unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
			{
				if (unk_0x98BE504E8B389665(iVar0, -1, 0) != unk_0xD5A676B97920D126())
				{
					return 0;
				}
			}
		}
		if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
		{
			if (unk_0x6016987E9628A7F6(iVar0) < 0.95f || unk_0x6016987E9628A7F6(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xFD491158A0A4F57B(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	if (!unk_0x120A59070FBE9283(unk_0xFB6B3EEFAB2DD12C()))
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)
{
	float fVar0;
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		fVar0 = unk_0x78D3CDB884C74FEB(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		if (unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()) && iParam1)
		{
			if (func_28(unk_0xD5A676B97920D126(), iParam0))
			{
				unk_0x2429894B9E6D2690(func_15(), 50f);
				return 1;
			}
		}
		else if (unk_0x1906CFCBD9C30E25(iParam0, func_15()))
		{
			unk_0x2429894B9E6D2690(func_15(), 50f);
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
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		if (unk_0x81C4995860081BC3(iParam0))
		{
			iVar0 = unk_0x0DBD8FE531FD620D(iParam0, 0);
			if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
			{
				if (!unk_0x00B5B0B68211D89B(iParam1))
				{
					if (unk_0xE4133A0C3C6C74A7(iParam1, iVar0))
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
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xC3D3EC28F0EB3C6D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_30(var uParam0, var uParam1)
{
	if (unk_0x6901135DDCC4904D(uParam0))
	{
		if (unk_0x6901135DDCC4904D(uParam1->f_6))
		{
			unk_0xD947D2F43FD7F6D7(uParam1->f_6, 0);
		}
		unk_0x905724898AD77C0C(0);
		unk_0xEF14AD354D9E2237();
		uParam1->f_6 = uParam0;
		unk_0xD947D2F43FD7F6D7(uParam0, 1);
	}
}

var func_31(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x6678F4628618607C(Param0);
	unk_0xF563C3AC64885E69(uVar0, func_12(unk_0x1995B52453EF6537(), 1f, 1f));
	unk_0xD947D2F43FD7F6D7(uVar0, iParam3);
	return uVar0;
}

void func_32(var uParam0, char* sParam1, int iParam2)
{
	unk_0x66D323B3A964108A(uParam0, sParam1, func_33(iParam2), 1);
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
		if (!unk_0x1C079483C9D16F36(sParam1))
		{
			if (!unk_0xCC257DA11A122B5F(sParam1, ""))
			{
				func_35(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x84A97C70FFDEC0C8();
}

void func_35(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x47C7D6CDCDD9966C(sParam0);
	unk_0x9C51EFE6A55E70E2(iParam1, 1);
}

int func_36(var uParam0)
{
	if (!unk_0x00B5B0B68211D89B(uParam0->f_16))
	{
		if (unk_0x9A258C41330B5103(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_37(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x161B10EA125B7654())
	{
		if (unk_0xE7C48EF8F50001B1())
		{
			return 1;
		}
		if (func_40(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x161B10EA125B7654())
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
	if (Global_15745 != 0 || unk_0x33688D334D224255())
	{
		return 1;
	}
	return 0;
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x84A97C70FFDEC0C8();
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
	
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
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
	
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x7887B64A08364778(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x7D44D16B4A9E941E(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x2518095D09270DDA(iParam0, 1))
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
				if (!unk_0x2518095D09270DDA(iParam0, 1))
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
	if (!unk_0x1C079483C9D16F36(sParam0))
	{
		unk_0x0CA19C427F18E80B(sParam0);
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
		if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0))
		{
			if (!unk_0xF44A5E894FE76438(uParam0->f_13, 29) && !unk_0xF44A5E894FE76438(uParam0->f_13, 28))
			{
				if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar0]))
				{
					unk_0xE95B3D9B1E241453(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xF44A5E894FE76438(uParam0->f_13, 29) && unk_0xF44A5E894FE76438(uParam0->f_13, 28))
		{
			if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar0]))
			{
				unk_0xE95B3D9B1E241453(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x4EA098C870B73AB7(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xF44A5E894FE76438(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x7887B64A08364778(uParam0->f_21))
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
			uVar24 = unk_0xC2F89F29527CAB64(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 50f, 0, iVar25);
			if (unk_0xA4DB44DF73EF4FE5(uVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0xA4DB44DF73EF4FE5(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), unk_0xC086F8D75730FA3A(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
				{
					if (!unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0) || !bParam17)
					{
						if (func_42(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar0]))
								{
									unk_0x759857815829A6A8(uParam0->f_17[iVar0], 1f);
									if (unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar0], func_15()))
									{
										unk_0x195690A8FA7145B8(uParam0->f_17[iVar0]);
									}
									if (unk_0x1774A68441553185(uParam0->f_17[iVar0], -1794415470) == 7 && !func_59(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x9B0C8A2FC23E64AB(uParam0->f_17[iVar0]) && !unk_0x03D369634BAB7D91(uParam0->f_17[iVar0]))
										{
											unk_0x5457695C257D1470(uParam0->f_17[iVar0], 1);
											unk_0x87D70F1F81DB77D3(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xA10AD3E3709451B4(uParam0->f_17[iVar0], iVar0);
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
			unk_0x4EA098C870B73AB7(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar0]))
				{
					if (!unk_0xD7143F03AB03DDF2(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x37338B7B7C4982DC(uParam0->f_17[iVar0]);
					}
					if (!unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar0], func_15()))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0xB3AD67B7714E1E77(uParam0->f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xF44A5E894FE76438(uParam0->f_13, 26))
	{
		if ((!func_56(uParam0) && unk_0x81C4995860081BC3(unk_0xD5A676B97920D126())) && !unk_0x7887B64A08364778(iParam10))
		{
			iVar13 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			if (unk_0xA4DB44DF73EF4FE5(iVar13, 0))
			{
				if (!unk_0xF44A5E894FE76438(uParam0->f_13, 13))
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
							if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x7BC26452241AC7C9(0, iVar26);
						if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar27]))
						{
							func_32(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_34(uParam0, "MORE_SEATS", 0);
						unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x4EA098C870B73AB7(&(uParam0->f_13), 13);
			func_43("MORE_SEATS");
		}
		if (!unk_0x7887B64A08364778(iParam10))
		{
			if ((!unk_0x00B5B0B68211D89B(uParam0->f_17[0]) || !unk_0x00B5B0B68211D89B(uParam0->f_17[1])) || !unk_0x00B5B0B68211D89B(uParam0->f_17[2]))
			{
				if (!unk_0xF44A5E894FE76438(uParam0->f_13, 31))
				{
					if (unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()) && !func_37(uParam0, 2))
					{
						iVar13 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
						if (func_55(iVar13, uParam0))
						{
							func_34(uParam0, "CMN_VEHSUIT", 0);
							unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
				{
					unk_0x4EA098C870B73AB7(&(uParam0->f_13), 31);
					func_43("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xA4DB44DF73EF4FE5(iParam10, 0))
		{
			if (unk_0xE4133A0C3C6C74A7(unk_0xD5A676B97920D126(), iParam10))
			{
				if (unk_0x3CEEA45E4779F6BD(0, 75))
				{
					unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xF44A5E894FE76438(uParam0->f_13, 21))
			{
				unk_0x4EA098C870B73AB7(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x7887B64A08364778(uParam0->f_17[iVar0]))
			{
				if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar0]))
				{
					if (!unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar0], func_15()))
					{
						unk_0x7071090DA7F7AD33(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x7071090DA7F7AD33(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
					{
						iVar13 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
						if (unk_0xA4DB44DF73EF4FE5(iVar13, 0))
						{
							if (unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar0], func_15()))
							{
								if (!func_56(uParam0) && unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
								{
									if (!func_54(uParam0->f_17[iVar0]))
									{
										unk_0x195690A8FA7145B8(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0xB529B2A4B7C64D6D(iVar13, 0))
						{
							if (unk_0xE4133A0C3C6C74A7(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0x3ACA21A90E0A949C(iVar13) && !unk_0xE8112E973BED9DEF(iVar13))
								{
									Var28 = { unk_0xC086F8D75730FA3A(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x458C747DC544B598(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar0], func_15()))
					{
						if (unk_0x81C4995860081BC3(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x0DBD8FE531FD620D(uParam0->f_17[iVar0], 0);
							if (!unk_0xB529B2A4B7C64D6D(iVar13, 0))
							{
								if (unk_0xA4DB44DF73EF4FE5(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0xE4133A0C3C6C74A7(unk_0xD5A676B97920D126(), iVar13))
										{
											if (unk_0x78D3CDB884C74FEB(iVar13) > 5f)
											{
												unk_0x458C747DC544B598(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x458C747DC544B598(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
									{
										iVar31 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
									}
									if (unk_0xA4DB44DF73EF4FE5(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x78D3CDB884C74FEB(iVar13) > 5f)
											{
												unk_0x458C747DC544B598(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x458C747DC544B598(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar0], func_15()))
					{
						iVar32 = unk_0x19912132A3CBAD3C(unk_0xD5A676B97920D126());
						if (unk_0x7887B64A08364778(iVar32))
						{
							if (func_42(iVar32, uParam0, 0))
							{
								if (func_53(iVar0, uParam0) || !unk_0xF44A5E894FE76438(uParam0->f_13, 27))
								{
									unk_0xA10AD3E3709451B4(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_53(iVar0, uParam0))
							{
								if (unk_0xA0A4DA31DEDFAC4F(iVar32) == joaat("sentinel2"))
								{
									unk_0xA10AD3E3709451B4(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xA10AD3E3709451B4(uParam0->f_17[iVar0], 2);
								}
								func_52(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar0], func_15()) && !func_51(uParam0->f_17[iVar0], iParam10)) && !func_50(uParam0->f_17[iVar0], iParam10))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar0], func_15()))
							{
								if (((!unk_0x9B0C8A2FC23E64AB(uParam0->f_17[iVar0]) && !unk_0x03D369634BAB7D91(uParam0->f_17[iVar0])) && !unk_0xBCDAE5C8BF864002(uParam0->f_17[iVar0])) && !unk_0xD7143F03AB03DDF2(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x1774A68441553185(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0x37338B7B7C4982DC(uParam0->f_17[iVar0]);
									}
									unk_0xB3AD67B7714E1E77(uParam0->f_17[iVar0], func_15());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0x6901135DDCC4904D(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x84A97C70FFDEC0C8();
								uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
								unk_0xBEC798FF88A42020(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_30(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x6901135DDCC4904D(uParam0->f_1[iVar0]))
					{
						if (((func_27(uParam0->f_17[iVar0], 1) || func_51(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xA4DB44DF73EF4FE5(iParam10, 0) && !unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iParam10, 0)))
						{
							if (unk_0x6901135DDCC4904D(uParam0->f_1[iVar0]))
							{
								unk_0x8A3D7569826A325D(&(uParam0->f_1[iVar0]));
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
					else if (unk_0xA4DB44DF73EF4FE5(iParam10, 0))
					{
						if (!unk_0xE4133A0C3C6C74A7(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x108650178993C477(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xF44A5E894FE76438(uParam0->f_13, 11)) && !((bParam17 && unk_0x222B4D6308DFC3F1(unk_0xFB6B3EEFAB2DD12C(), 0)) && !unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iParam10, 0)))
							{
								if (unk_0x81C4995860081BC3(uParam0->f_17[iVar0]))
								{
									if (!unk_0x04D83291EB9DE51D(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_27(uParam0->f_17[iVar0], 1))
										{
											if (func_26(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x1774A68441553185(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0xE9148EE8AA200B60(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar0], func_15()))
									{
										if ((((!unk_0xBCDAE5C8BF864002(uParam0->f_17[iVar0]) && !unk_0x9B0C8A2FC23E64AB(uParam0->f_17[iVar0])) && !unk_0x03D369634BAB7D91(uParam0->f_17[iVar0])) && !unk_0xD7143F03AB03DDF2(uParam0->f_17[iVar0])) && !unk_0xF60B0BCAFB1D30FF(iParam10))
										{
											unk_0x195690A8FA7145B8(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x1774A68441553185(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_59(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xBCDAE5C8BF864002(uParam0->f_17[iVar0]) && !unk_0xBCDAE5C8BF864002(unk_0xD5A676B97920D126())) && !func_49(uParam0->f_17[iVar0], 2f)) && !unk_0x9B0C8A2FC23E64AB(uParam0->f_17[iVar0])) && !unk_0x03D369634BAB7D91(uParam0->f_17[iVar0])) && !unk_0xF60B0BCAFB1D30FF(iParam10))
										{
											unk_0x5457695C257D1470(uParam0->f_17[iVar0], 1);
											if (unk_0xF44A5E894FE76438(uParam0->f_13, 10))
											{
												unk_0x759857815829A6A8(uParam0->f_17[iVar0], 1f);
											}
											unk_0x87D70F1F81DB77D3(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xBC7766FCDA0D303C(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
										unk_0xBEC798FF88A42020(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar0], func_15()))
							{
								if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x9B0C8A2FC23E64AB(uParam0->f_17[iVar0]) && !unk_0x03D369634BAB7D91(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x1774A68441553185(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0x37338B7B7C4982DC(uParam0->f_17[iVar0]);
										}
										unk_0x5457695C257D1470(uParam0->f_17[iVar0], 0);
										unk_0xB3AD67B7714E1E77(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (unk_0xE4133A0C3C6C74A7(unk_0xD5A676B97920D126(), iParam10))
						{
							if (!unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar0], func_15()))
							{
								if (!unk_0xF44A5E894FE76438(uParam0->f_13, 21))
								{
									unk_0xB3AD67B7714E1E77(uParam0->f_17[iVar0], func_15());
								}
							}
							else if (unk_0xF44A5E894FE76438(uParam0->f_13, 21))
							{
								unk_0x195690A8FA7145B8(uParam0->f_17[iVar0]);
								unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x1906CFCBD9C30E25(uParam0->f_17[iVar0], func_15()) && !unk_0xF60B0BCAFB1D30FF(iParam10))
						{
							unk_0x195690A8FA7145B8(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x6901135DDCC4904D(uParam0->f_1[iVar0]))
				{
					unk_0x8A3D7569826A325D(&(uParam0->f_1[iVar0]));
					func_43(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x6901135DDCC4904D(uParam0->f_1[iVar0]))
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
						if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar0]))
						{
							if (func_54(uParam0->f_17[iVar0]) || unk_0x108650178993C477(uParam0->f_17[iVar0], unk_0xD5A676B97920D126(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar0]))
					{
						if (!unk_0x108650178993C477(uParam0->f_17[iVar0], unk_0xD5A676B97920D126(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_54(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x84A97C70FFDEC0C8();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xF44A5E894FE76438(uParam0->f_13, 5))
							{
								func_34(uParam0, sParam7, 0);
								unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 5);
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
										if (!unk_0x1C079483C9D16F36(uVar19[iVar0]))
										{
											if (!unk_0xCC257DA11A122B5F(uVar19[iVar0], ""))
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
		unk_0x4EA098C870B73AB7(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x6901135DDCC4904D(uParam0->f_1[iVar0]))
				{
					unk_0x8A3D7569826A325D(&(uParam0->f_1[iVar0]));
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
			unk_0xB8A73E7DA87B2968(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xB8A73E7DA87B2968(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xB8A73E7DA87B2968(&(uParam1->f_13), 16);
			break;
	}
}

void func_46(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x1C079483C9D16F36(sParam1))
		{
			if (!unk_0xCC257DA11A122B5F(sParam1, ""))
			{
				func_47(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x84A97C70FFDEC0C8();
}

void func_47(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x47C7D6CDCDD9966C(sParam0);
	unk_0xB1953EBEF4D6BD85(uParam1);
	unk_0x9C51EFE6A55E70E2(iParam2, 1);
}

int func_48(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xF44A5E894FE76438(uParam1->f_13, 14);
		
		case 1:
			return unk_0xF44A5E894FE76438(uParam1->f_13, 15);
		
		case 2:
			return unk_0xF44A5E894FE76438(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_49(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x6A0583ECFCCECC9B(iParam0, 0))
	{
		iVar0 = unk_0x0DBD8FE531FD620D(iParam0, 0);
		if (!unk_0xB529B2A4B7C64D6D(iVar0, 0))
		{
			if (unk_0x78D3CDB884C74FEB(iVar0) > fParam1)
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
	
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		if (!unk_0x1906CFCBD9C30E25(iParam0, func_15()))
		{
			iVar0 = unk_0x3349F29CAC088F0B(iParam0);
			if (unk_0xA4DB44DF73EF4FE5(iParam1, 0))
			{
				if (unk_0x108650178993C477(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		if (unk_0x7887B64A08364778(iParam1))
		{
			if (unk_0xA4DB44DF73EF4FE5(iParam1, 0))
			{
				if (unk_0xE4133A0C3C6C74A7(iParam0, iParam1))
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
			unk_0xB8A73E7DA87B2968(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xB8A73E7DA87B2968(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xB8A73E7DA87B2968(&(uParam1->f_13), 19);
			break;
	}
}

int func_53(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xF44A5E894FE76438(uParam1->f_13, 17);
		
		case 1:
			return unk_0xF44A5E894FE76438(uParam1->f_13, 18);
		
		case 2:
			return unk_0xF44A5E894FE76438(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		iVar0 = unk_0x19912132A3CBAD3C(unk_0xD5A676B97920D126());
		if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
		{
			if (!unk_0x00B5B0B68211D89B(iParam0))
			{
				iVar1 = unk_0x19912132A3CBAD3C(iParam0);
				if (unk_0xA4DB44DF73EF4FE5(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x108650178993C477(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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
	
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		if (unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("bus") || unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x00B5B0B68211D89B(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x98BE504E8B389665(iParam0, 0, 0);
			if (!unk_0x00B5B0B68211D89B(iVar3))
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
			iVar4 = unk_0x98BE504E8B389665(iParam0, 1, 0);
			if (!unk_0x00B5B0B68211D89B(iVar4))
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
			iVar5 = unk_0x98BE504E8B389665(iParam0, 2, 0);
			if (!unk_0x00B5B0B68211D89B(iVar5))
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
	
	if (unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
	{
		uVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
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
	
	if (!unk_0x00B5B0B68211D89B(iParam1))
	{
		if (unk_0x81C4995860081BC3(iParam1))
		{
			uVar0 = unk_0x0DBD8FE531FD620D(iParam1, 0);
			if (!unk_0xB529B2A4B7C64D6D(uVar0, 0))
			{
				if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
				{
					if (unk_0xE4133A0C3C6C74A7(unk_0xD5A676B97920D126(), iVar0))
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
				else if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x19912132A3CBAD3C(unk_0xD5A676B97920D126());
				if (unk_0x7887B64A08364778(iVar0))
				{
					if (func_42(iVar0, uParam0, 0))
					{
						if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
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
	
	if (!unk_0xB529B2A4B7C64D6D(uParam0, 0))
	{
		fVar0 = unk_0x78D3CDB884C74FEB(iParam0);
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
	
	if (!unk_0x00B5B0B68211D89B(uParam0))
	{
		if (unk_0xA4DB44DF73EF4FE5(iParam1, 0))
		{
			iVar0 = unk_0x19912132A3CBAD3C(iParam0);
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
	
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
	{
		iVar0 = unk_0x3349F29CAC088F0B(unk_0xD5A676B97920D126());
		if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
		{
			iVar1 = unk_0x98BE504E8B389665(iVar0, 0, 0);
			if (!unk_0x00B5B0B68211D89B(iVar1))
			{
				if (iVar1 != unk_0xD5A676B97920D126())
				{
					if (unk_0x2A29BF08180E7ADF(iVar1))
					{
						if (!unk_0xE1A5247B3FE06469(iVar1, unk_0xD5A676B97920D126()))
						{
							unk_0x0988FFC0C75637DF(iVar1, unk_0xD5A676B97920D126(), 2000, 2048, 2);
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
	
	if (!unk_0xF44A5E894FE76438(uParam0->f_13, 25))
	{
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x237B0CFB6EEBD3BA(unk_0xD5A676B97920D126(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x7887B64A08364778(uParam0->f_17[iVar0]))
			{
				if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar0]))
				{
					unk_0x237B0CFB6EEBD3BA(uParam0->f_17[iVar0], 32, 0);
					unk_0x237B0CFB6EEBD3BA(uParam0->f_17[iVar0], 305, 1);
					unk_0x237B0CFB6EEBD3BA(uParam0->f_17[iVar0], 268, 1);
					unk_0xBC7766FCDA0D303C(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xB8A73E7DA87B2968(&(uParam0->f_13), 25);
	}
}

void func_62(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7887B64A08364778(uParam0->f_17[iVar0]))
		{
			if (!unk_0x00B5B0B68211D89B(uParam0->f_17[iVar0]))
			{
				if (unk_0x81C4995860081BC3(uParam0->f_17[iVar0]))
				{
					unk_0xF2B008953E08940C(uParam0->f_17[iVar0], 0);
					unk_0x4C3AE97631B9B672(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			if (unk_0x81C4995860081BC3(unk_0xD5A676B97920D126()))
			{
				unk_0xF2B008953E08940C(unk_0xD5A676B97920D126(), 0);
				unk_0x4C3AE97631B9B672(unk_0xD5A676B97920D126(), 0);
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
	
	if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_96, 0))
	{
		if (unk_0x6901135DDCC4904D(uLocal_102))
		{
			unk_0x8A3D7569826A325D(&uLocal_102);
		}
		if (iLocal_36 <= 2)
		{
			iLocal_80 = (unk_0xF3385A738D66E7A6() * ((60 * iLocal_82) + iLocal_83));
			iLocal_80 = (iLocal_80 + unk_0x84A97C70FFDEC0C8());
			iLocal_84 = (iLocal_80 - unk_0xF3385A738D66E7A6() * 30);
		}
		else if (iLocal_36 > 6)
		{
			iLocal_80 = (unk_0xF3385A738D66E7A6() * ((60 * iLocal_82) + iLocal_83));
			iLocal_80 = (iLocal_80 + unk_0x84A97C70FFDEC0C8());
			iLocal_84 = (iLocal_80 - unk_0xF3385A738D66E7A6() * 30);
		}
		else if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			iLocal_97 = unk_0xDE8A46A23FDCBBFE(iLocal_89, Local_70, fLocal_74, 1, 1);
			iLocal_93[0] = unk_0x0BD2D83BDCAED6E6(iLocal_97, 6, iLocal_87, -1, 1, 1);
			iLocal_93[1] = unk_0x0BD2D83BDCAED6E6(iLocal_97, 6, iLocal_87, 0, 1, 1);
			unk_0x5CF7BD3BFEB33582("rghCop", &uLocal_118);
			unk_0x42AFB71D42AF78EA(4, uLocal_118, joaat("player"));
			unk_0x77E24C0B92B4FC24(iLocal_93[0], 39, 1);
			unk_0x77E24C0B92B4FC24(iLocal_93[1], 39, 1);
			iVar0 = 0;
			while (iVar0 < iLocal_93)
			{
				unk_0x4408969E7EC5C720(iLocal_93[iVar0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x3F0508FC63D0DEF5(iLocal_93[iVar0], 100f);
				unk_0x417BCC1ECC12E9A2(iLocal_93[iVar0], uLocal_118);
				iVar0++;
			}
		}
		iLocal_38 = 2;
	}
}

void func_66()
{
	int iVar0;
	
	if (!unk_0xB529B2A4B7C64D6D(iLocal_96, 0))
	{
		if (func_93() || unk_0x00B5B0B68211D89B(iLocal_90[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_90)
			{
				if (!unk_0x00B5B0B68211D89B(iLocal_90[iVar0]))
				{
					if (!unk_0x6901135DDCC4904D(uLocal_99[iVar0]))
					{
						uLocal_99[iVar0] = func_10(iLocal_90[iVar0], 1, 145);
						unk_0x77E24C0B92B4FC24(iLocal_90[iVar0], 1, 0);
						unk_0x456121A0AAC868D4(&uLocal_120);
						unk_0xE9148EE8AA200B60(0, 0, 0);
						unk_0x182DAF81B229194E(0, unk_0xD5A676B97920D126(), 0, 16);
						unk_0xCFE67FBB69F1C410(uLocal_120);
						unk_0x8B06B801B92CEC2D(iLocal_90[iVar0], uLocal_120);
						unk_0x873418BFBF9A6780(&uLocal_120);
					}
				}
				else if (unk_0x6901135DDCC4904D(uLocal_99[iVar0]))
				{
					unk_0x8A3D7569826A325D(&(uLocal_99[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_79)
		{
			if (!unk_0x00B5B0B68211D89B(iLocal_90[0]))
			{
				if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iLocal_90[0], 50f, 50f, 50f, 0, 1, 0))
				{
					unk_0x1DC0501F19F1A583(iLocal_90[0], iLocal_96, unk_0xD5A676B97920D126(), 8, 25f, 786469, -1f, -1f, 1);
					iLocal_79 = 1;
				}
			}
		}
		if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_96, 0))
		{
			if (unk_0x6901135DDCC4904D(uLocal_102))
			{
				unk_0x8A3D7569826A325D(&uLocal_102);
			}
			func_92(&uLocal_106, 0, 0);
			iLocal_38 = 2;
		}
		else if (unk_0x06F2E112EBC0C4FB(iLocal_96, -1, 0) || unk_0x00B5B0B68211D89B(iLocal_90[0]))
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
	if (!unk_0x00B5B0B68211D89B(iLocal_90[0]) && !unk_0xB529B2A4B7C64D6D(iLocal_96, 0))
	{
		if (unk_0x04D83291EB9DE51D(iLocal_90[0], iLocal_96, 0))
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
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
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
	
	if (uParam0->f_1 && unk_0x96F8C2C945A9B758())
	{
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x1C079483C9D16F36(iVar0))
	{
		if (!unk_0x1995B52453EF6537())
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
	if (func_89(uParam1) && unk_0xA3E7DE487D314279(uParam1))
	{
		iVar1 = 0;
		if (unk_0x6DA4D1391A7B813F(uParam1))
		{
			unk_0x5C5EA29ED298B14F(unk_0x36B702E1B6552B8A(iParam1));
			unk_0x8E5A2F0D57C1DF15(unk_0x36B702E1B6552B8A(iParam1), 1);
			if (unk_0x33853ED448B52835(unk_0x36B702E1B6552B8A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8041FE602D4689B1(iParam1))
		{
			unk_0x5362ADB0E848B600(unk_0x9A1EB82BF4C4844D(iParam1));
			if (unk_0xF39AD11288893C1D(unk_0x9A1EB82BF4C4844D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam1))
		{
			unk_0xAA8FA16ED286C065(unk_0x028455DF6C933604(iParam1));
			if (unk_0xE5C01F114CB61F98(unk_0x028455DF6C933604(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x96F8C2C945A9B758())
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
					if ((unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0)) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
					{
						if ((iVar1 && !unk_0xA14FC57CB26C2B67()) && uParam8)
						{
							if (!func_91(iVar0))
							{
								func_75(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
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
				if (unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0))
				{
					if (((unk_0xBB5DD90D4926F21A(iParam1) && iVar1) && !unk_0xA14FC57CB26C2B67()) && uParam8)
					{
						if (!func_91(iVar0))
						{
							func_75(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
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
			if (!unk_0x1C079483C9D16F36(sParam5))
			{
				if (func_91(sParam5))
				{
					unk_0x04890EB0282525A5(1);
				}
			}
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
			{
				if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
					{
						func_92(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
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
	if (func_89(unk_0xD5A676B97920D126()))
	{
		unk_0x0565F5F2EE81A23F(unk_0xD5A676B97920D126());
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x33E4179F57B9F232(1);
		unk_0x6125B94865C458A0(0);
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		unk_0x044DCEA35050EC01("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x84A97C70FFDEC0C8()
		{
			return 1;
		}
	}
	return 0;
}

int func_74(bool bParam0)
{
	switch (Global_35777)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101652.f_8992.f_100++;
			}
			return Global_101652.f_8992.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101652.f_8992.f_101++;
			}
			return Global_101652.f_8992.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101652.f_8992.f_102++;
			}
			return Global_101652.f_8992.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_75(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

int func_76(char* sParam0)
{
	if (!func_77(1, 1, 0))
	{
		if ((!unk_0xC55B9553B3EDADE9(sParam0) && func_91(sParam0)) || func_91("CMN_HINT"))
		{
			unk_0x04890EB0282525A5(1);
		}
		return 0;
	}
	switch (Global_35777)
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
		if (!unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xB0D174BA6F10DF7B())
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
	if (unk_0x976A3E0B7A766593())
	{
		return 0;
	}
	if (Global_68127)
	{
		return 0;
	}
	if (unk_0xAB964FCFAC3C767A(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52999)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
		{
			if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
			{
				return 0;
			}
			if (unk_0x2AD8D2893EF54BC3())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_78()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

int func_79(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
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
	
	if (unk_0xB529B2A4B7C64D6D(uParam1, 0))
	{
		func_92(uParam0, 0, 0);
	}
	if (func_83(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x6DA4D1391A7B813F(iParam1))
		{
			uVar0 = unk_0x36B702E1B6552B8A(iParam1);
			if (!unk_0x6A0583ECFCCECC9B(uVar0, 0))
			{
				if (unk_0xBEC34BF6B72C417A(iVar0))
				{
					if (!func_81())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x300B1E56EE76D45C(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x33E4179F57B9F232(0);
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
	unk_0x218CB9DF4F72DD01(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x0988FFC0C75637DF(unk_0xD5A676B97920D126(), iParam1, -1, iVar3, iVar4);
	unk_0xAAD655F2351CC4B7("FocusIn", 0, 0);
	unk_0xE3E53903AE9B5BD5("HINT_CAM_SCENE");
	unk_0xA93E75A5493862BD(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_81()
{
	return func_82(unk_0xFB6B3EEFAB2DD12C());
}

int func_82(var uParam0)
{
	if (unk_0xA0A4DA31DEDFAC4F(unk_0x4572B13EE70C8F52(uParam0)) == joaat("mp_f_freemode_01"))
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
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					if (func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_88(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
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
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
					{
						if (!func_88(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_88(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
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
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
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
				if (!func_87(bParam1, bParam2, bParam3) || unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
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
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
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
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || func_85(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
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
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xBCCED7DE90D60F92(0, 80))
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
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xBCCED7DE90D60F92(0, 80))
			{
				unk_0x33E4179F57B9F232(0);
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
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
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
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
			{
				unk_0x33E4179F57B9F232(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	if (unk_0x7887B64A08364778(uParam0))
	{
		if (unk_0x8041FE602D4689B1(iParam0))
		{
			if (unk_0xA4DB44DF73EF4FE5(unk_0x9A1EB82BF4C4844D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x6DA4D1391A7B813F(iParam0))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0x36B702E1B6552B8A(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_90()
{
	unk_0xB8A73E7DA87B2968(&Global_2314, 4);
}

bool func_91(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

void func_92(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1995B52453EF6537())
	{
		if (unk_0xF44A5E894FE76438(Global_2494149.f_4449, 26))
		{
			return;
		}
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x6125B94865C458A0(iParam2);
		unk_0x044DCEA35050EC01("FocusIn");
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x33E4179F57B9F232(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x1C079483C9D16F36(sVar0))
	{
		if (!unk_0x1995B52453EF6537())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x1C079483C9D16F36(uParam0->f_3))
	{
		if (func_91(uParam0->f_3))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
	if (!unk_0x1C079483C9D16F36(sVar0))
	{
		if (func_91(sVar0))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
}

int func_93()
{
	if (unk_0x7887B64A08364778(iLocal_96))
	{
		if (!unk_0xB529B2A4B7C64D6D(iLocal_96, 0))
		{
			if ((((((unk_0xB38A470B669AC00B(iLocal_96) < 300 || unk_0xD5ABCE2B8F82DD84(iLocal_96) < 200f) || unk_0xF60B0BCAFB1D30FF(iLocal_96)) || (unk_0xA53003F5B0019FFC(iLocal_96, 0, 0) && unk_0xA53003F5B0019FFC(iLocal_96, 1, 0))) || (unk_0xA53003F5B0019FFC(iLocal_96, 4, 0) && unk_0xA53003F5B0019FFC(iLocal_96, 5, 0))) || (unk_0xA53003F5B0019FFC(iLocal_96, 0, 0) && unk_0xA53003F5B0019FFC(iLocal_96, 4, 0))) || (unk_0xA53003F5B0019FFC(iLocal_96, 1, 0) && unk_0xA53003F5B0019FFC(iLocal_96, 5, 0)))
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
	if (!unk_0xA4DB44DF73EF4FE5(iLocal_96, 0))
	{
		iLocal_96 = unk_0xDE8A46A23FDCBBFE(iLocal_88, Local_64, uLocal_73, 1, 1);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			unk_0xE1896E88D2301642(iLocal_96, iVar0, 1);
			iVar0++;
		}
		if (iLocal_85 != -1)
		{
			unk_0xE1896E88D2301642(iLocal_96, iLocal_85, 0);
		}
	}
	unk_0x813D530BF06F1730(iLocal_96, 1);
	uLocal_102 = func_95(iLocal_96, 0, 0);
	if (iLocal_36 != 5 && iLocal_36 != 6)
	{
		if (iLocal_36 > 6)
		{
			unk_0x490BF4D8A55D8ECA(iLocal_96, 0, 0, 0, 0, 1, 0, 0, 0);
			unk_0xEC49B508B83FF2C9(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_96, 0, 0, 0);
		}
		func_35(sLocal_103, 7500, 1);
	}
	else
	{
		iLocal_90[0] = unk_0x0BD2D83BDCAED6E6(iLocal_96, 26, iLocal_86, -1, 1, 1);
		iLocal_90[1] = unk_0x0BD2D83BDCAED6E6(iLocal_96, 26, iLocal_86, 0, 1, 1);
		unk_0x5CF7BD3BFEB33582("rghCriminal", &uLocal_119);
		unk_0x42AFB71D42AF78EA(5, uLocal_119, joaat("player"));
		iVar1 = 0;
		while (iVar1 < iLocal_90)
		{
			unk_0x5457695C257D1470(iLocal_90[iVar1], 1);
			unk_0x4408969E7EC5C720(iLocal_90[iVar1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
			unk_0x417BCC1ECC12E9A2(iLocal_90[iVar1], uLocal_119);
			iVar1++;
		}
		unk_0xB192238F4F854097(iLocal_90[0], iLocal_96, 25f, 786599);
		func_35("PMDL_REC", 7500, 1);
	}
	if (!unk_0xB529B2A4B7C64D6D(unk_0x80AA649904BB5788(), 0))
	{
		iLocal_98 = unk_0x80AA649904BB5788();
	}
	iLocal_38 = 1;
}

int func_95(var uParam0, bool bParam1, bool bParam2)
{
	return func_11(uParam0, !bParam1, bParam2);
}

int func_96(int iParam0)
{
	if (unk_0xA4DB44DF73EF4FE5(Global_100364.f_222[iParam0], 0))
	{
		unk_0xC53606C390BE2727(Global_100364.f_222[iParam0], 1, 1);
		return Global_100364.f_222[iParam0];
	}
	return 0;
}

int func_97()
{
	if (unk_0x7887B64A08364778(iLocal_96))
	{
		if (unk_0xA4DB44DF73EF4FE5(iLocal_96, 0))
		{
			if (!unk_0x108650178993C477(iLocal_96, unk_0xD5A676B97920D126(), 300f, 300f, 300f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x00B5B0B68211D89B(iLocal_90[0]))
	{
		if (unk_0x6901135DDCC4904D(uLocal_99[0]))
		{
			unk_0x8A3D7569826A325D(&(uLocal_99[0]));
		}
	}
	return 0;
}

void func_98()
{
	unk_0x4ACD1E4CBA159ED1(iLocal_88);
	unk_0x68A99AC5778ED123("PMDL", 0);
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		unk_0x4ACD1E4CBA159ED1(iLocal_87);
		unk_0x4ACD1E4CBA159ED1(iLocal_89);
	}
	else if (iLocal_36 == 5 || iLocal_36 == 6)
	{
		unk_0x4ACD1E4CBA159ED1(iLocal_86);
	}
	unk_0xFA03BA297FE81584(joaat("benson"), 1);
	unk_0xFA03BA297FE81584(joaat("pony2"), 1);
	if (unk_0x7AD0E9452821C95D(iLocal_88) && unk_0x4A980428C9937F4E(0))
	{
		if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			if (unk_0x7AD0E9452821C95D(iLocal_87) && unk_0x7AD0E9452821C95D(iLocal_89))
			{
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 == 5 || iLocal_36 == 6)
		{
			if (unk_0x7AD0E9452821C95D(iLocal_86))
			{
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 > 6)
		{
			if (unk_0x3F51F950AB346CCA("Deliveries", 0, -1))
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
		fVar0 = unk_0x8E92CDAEB8357ABD(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_103() == 13)
	{
		Local_67 = { -323.356f, 6264.431f, 30.4463f };
		fVar0 = unk_0x8E92CDAEB8357ABD(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_103() == 12)
	{
		Local_67 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = unk_0x8E92CDAEB8357ABD(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (func_103() == 11)
	{
		Local_67 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = unk_0x8E92CDAEB8357ABD(Local_64, Local_67, 1);
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
	return Global_100364.f_20;
}

int func_104()
{
	return func_105(Global_100364.f_20, Global_100364.f_29);
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
	unk_0xFA03BA297FE81584(joaat("benson"), 0);
	unk_0xFA03BA297FE81584(joaat("pony2"), 0);
	unk_0x480B760C1687F038();
	if (iLocal_77)
	{
		if (!unk_0xB529B2A4B7C64D6D(iLocal_98, 0))
		{
			func_107(iLocal_98, 0, 145);
		}
		unk_0xECD09BE7A4D429A7(unk_0xFB6B3EEFAB2DD12C());
		func_92(&uLocal_106, 0, 0);
	}
	unk_0x01DFCA3621B68C4A();
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0xB20FC7F756C6FEF5(iParam0, &uVar0);
		if (!unk_0xC55B9553B3EDADE9(uVar1))
		{
			if (unk_0x6D9FF4C899CD785F(sVar1) == unk_0x6D9FF4C899CD785F("vehicle_gen_controller"))
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
		iVar0 = unk_0x98BE504E8B389665(iParam0, -1, 0);
		if (!unk_0x7887B64A08364778(iVar0))
		{
			iVar0 = unk_0x517A852AA8FDFD63(iParam0, -1);
		}
		if (unk_0x7887B64A08364778(iVar0) && !unk_0x00B5B0B68211D89B(iVar0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101652.f_2079.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xA0A4DA31DEDFAC4F(iParam0) == Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xC55B9553B3EDADE9(&(Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xCC257DA11A122B5F(unk_0x2CC6A8460C4261C6(iParam0), &(Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101652.f_31373.f_5592[iVar1] = iVar2;
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
		if (unk_0xA0A4DA31DEDFAC4F(iParam0) == Global_101652.f_31373.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xC55B9553B3EDADE9(&(Global_101652.f_31373.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xCC257DA11A122B5F(unk_0x2CC6A8460C4261C6(iParam0), &(Global_101652.f_31373.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101652.f_31373.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101652.f_31373.f_5590 = iParam1;
	Global_69431 = iParam0;
	Global_101652.f_31373.f_5588 = 1;
	func_109(iParam0, &(Global_101652.f_31373.f_5510));
}

void func_109(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		func_112(uParam1);
		uParam1->f_66 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2CC6A8460C4261C6(iParam0), 16);
		*uParam1 = unk_0x643D0787FF300BE8(iParam0);
		unk_0xAB44311BC9F89232(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCFF130F4559BF748(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x43FF1E5EC4917728(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xEF0C3A770E8892FA(iParam0);
		uParam1->f_67 = unk_0x49CCC8B15830B17D(iParam0);
		uParam1->f_69 = unk_0x65E205594044F652(iParam0);
		uParam1->f_70 = unk_0xF7E41E4E5E67E2CB(iParam0);
		unk_0x956FB9F729445ED6(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xF69AB637A0DAC546(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x1150CC5330ABD6DF(iParam0, 2))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
		}
		if (unk_0x1150CC5330ABD6DF(iParam0, 3))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
		}
		if (unk_0x1150CC5330ABD6DF(iParam0, 0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
		}
		if (unk_0x1150CC5330ABD6DF(iParam0, 1))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xEF9CF6170A8C90B7(iParam0, 0))
		{
			uParam1->f_68 = unk_0x80F6A1A9BF0E38FD(iParam0);
		}
		if (unk_0x825416FB822BF706(uParam1->f_66))
		{
			if (unk_0x93B92294DAD9D50D(iParam0))
			{
				switch (unk_0xB230881064F01DEF(iParam0))
				{
					case 2:
					case 0:
						unk_0x4EA098C870B73AB7(&(uParam1->f_77), 23);
						unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x4EA098C870B73AB7(&(uParam1->f_77), 23);
						unk_0x4EA098C870B73AB7(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xAB35C8D69EA2E6B5(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 9);
		}
		if (unk_0x7E2FFDDA80D69669(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 10);
		}
		if (unk_0x826C510E26394C33(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 13);
			unk_0xD31BD28E3DFD0487(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x5451EB0FF6AB9E17(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 12);
		}
		func_111(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x90ECFFEFD5446B32(iParam0, iVar0 + 1))
			{
				unk_0xB8A73E7DA87B2968(&(uParam1->f_77), func_110(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x0A330F7918C05F13(iParam0, 0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(uParam1->f_77), 11);
		}
		if (unk_0xA438D75809973A56(iParam0, "IgnoredByQuickSave") && unk_0x79945CA981E4560A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(uParam1->f_77), 27);
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
	
	if (!unk_0xA4DB44DF73EF4FE5(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x83608391BBAB09A9(*iParam0) == 0)
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
			if (unk_0xFA1526FE26DC997C(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xFFB080E19B6AD134(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x54352EF465143135(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x54352EF465143135(*iParam0, iVar0);
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
	if ((((((((((!unk_0x7887B64A08364778(iParam0) || !unk_0xA4DB44DF73EF4FE5(iParam0, 0)) || func_129(iParam0, 0, 0)) || func_129(iParam0, 1, 0)) || func_129(iParam0, 2, 0)) || func_128(iParam0) != 145) || func_127(iParam0)) || func_126(iParam0)) || func_125(iParam0)) || func_124(iParam0)) || !func_114(unk_0xA0A4DA31DEDFAC4F(iParam0)))
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
	if (((unk_0xDA82A890460AACEE(iParam0) || unk_0x825416FB822BF706(iParam0)) || unk_0x4B09D3321F53E524(iParam0)) || unk_0x8F8A0D55EBDCBE44(iParam0))
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
	if (!unk_0x5B8C6C17DBDB0252(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1995B52453EF6537())) || (iParam0 == joaat("buffalo3") && !unk_0x1995B52453EF6537())) || (iParam0 == joaat("gauntlet2") && !unk_0x1995B52453EF6537())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1995B52453EF6537())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_123())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x8858A4ECC3790CBC())
		{
			if (unk_0xAC7E4897AB3A644C(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x68410A55F20AE7A5(Var1.f_0))
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
		if ((unk_0xF1A016B51831B87B() || unk_0x2D337DD29A7ABD30()) || unk_0x603D621ED5E06CB0())
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
	unk_0x157A3D4FE52A3BBF(&iVar0, &uVar1);
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
	if (!unk_0x0E4E21380596D57E(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_117()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2482045)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x632066A9E8CB2C4D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5431 && !Global_262145.f_11409) && iVar1 < Global_262145.f_11410)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12221 && iVar1 < Global_262145.f_12233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12217 && iVar1 < Global_262145.f_12229)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12218 && iVar1 < Global_262145.f_12230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12219 && iVar1 < Global_262145.f_12231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12220 && iVar1 < Global_262145.f_12232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12222 && iVar1 < Global_262145.f_12234)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12223 && iVar1 < Global_262145.f_12226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12224 && iVar1 < Global_262145.f_12227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12225 && iVar1 < Global_262145.f_12228)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14848 && iVar1 < Global_262145.f_14813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14843 && iVar1 < Global_262145.f_14808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14847 && iVar1 < Global_262145.f_14812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14846 && iVar1 < Global_262145.f_14811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14840 && iVar1 < Global_262145.f_14805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14841 && iVar1 < Global_262145.f_14806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14844 && iVar1 < Global_262145.f_14809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14845 && iVar1 < Global_262145.f_14810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14842 && iVar1 < Global_262145.f_14807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14850 && iVar1 < Global_262145.f_14815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14851 && iVar1 < Global_262145.f_14816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14839 && iVar1 < Global_262145.f_14804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14838 && iVar1 < Global_262145.f_14803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14837 && iVar1 < Global_262145.f_14802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14849 && iVar1 < Global_262145.f_14814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14852 && iVar1 < Global_262145.f_14817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14853 && iVar1 < Global_262145.f_14818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14854 && iVar1 < Global_262145.f_14819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14855 && iVar1 < Global_262145.f_14820)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15000 && iVar1 < Global_262145.f_15022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15001 && iVar1 < Global_262145.f_15023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15002 && iVar1 < Global_262145.f_15024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15003 && iVar1 < Global_262145.f_15025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15004 && iVar1 < Global_262145.f_15026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15005 && iVar1 < Global_262145.f_15027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15007 && iVar1 < Global_262145.f_15028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15008 && iVar1 < Global_262145.f_15029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15009 && iVar1 < Global_262145.f_15030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15010 && iVar1 < Global_262145.f_15031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15011 && iVar1 < Global_262145.f_15032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15012 && iVar1 < Global_262145.f_15033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15013 && iVar1 < Global_262145.f_15034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15019 && iVar1 < Global_262145.f_15041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15016 && iVar1 < Global_262145.f_15037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15017 && iVar1 < Global_262145.f_15038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15018 && iVar1 < Global_262145.f_15039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15006 && iVar1 < Global_262145.f_15040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15020 && iVar1 < Global_262145.f_15042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15014 && iVar1 < Global_262145.f_15035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15015 && iVar1 < Global_262145.f_15036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15021 && iVar1 < Global_262145.f_15043)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_16649 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_16650 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_16651 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_16652 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_16653 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_16654 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_16655 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_16656 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_16657 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_16658 && iVar1 < Global_262145.f_16699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_16659 && iVar1 < Global_262145.f_16700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_16660 && iVar1 < Global_262145.f_16701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_16661 && iVar1 < Global_262145.f_16702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_16662 && iVar1 < Global_262145.f_16703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_16663 && iVar1 < Global_262145.f_16704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_16664 && iVar1 < Global_262145.f_16705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_16665 && iVar1 < Global_262145.f_16706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_16666 && iVar1 < Global_262145.f_16707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_16667 && iVar1 < Global_262145.f_16708)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_16668 && iVar1 < Global_262145.f_16709)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_16669 && iVar1 < Global_262145.f_16710)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_16670 && iVar1 < Global_262145.f_16711)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_16671 && iVar1 < Global_262145.f_16712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_16672 && iVar1 < Global_262145.f_16713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_16673 && iVar1 < Global_262145.f_16714)
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
	if (unk_0xF14C5BAFFF8F4CB7(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_123()
{
	var uVar0;
	
	if (unk_0x52F8BF27157D00A2())
	{
		if (unk_0xA65719DC666C97C3())
		{
			if (unk_0x65D57B279D4CB27E())
			{
				unk_0x5BC7B5709E38CBE0(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xB8A73E7DA87B2968(&uVar0, 2);
				unk_0xB8A73E7DA87B2968(&uVar0, 4);
				unk_0xB8A73E7DA87B2968(&uVar0, 6);
				unk_0xB8A73E7DA87B2968(&Global_25, 2);
				unk_0xB8A73E7DA87B2968(&Global_25, 4);
				unk_0xB8A73E7DA87B2968(&Global_25, 6);
				unk_0xB924315F0872835A(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xE0A03D8892BEF6BB())
				{
					uVar0 = unk_0x2428688746A375BE(866);
					unk_0xB8A73E7DA87B2968(&uVar0, 0);
					unk_0xC0F82A66B119B68A(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139115 == 2)
	{
		return 1;
	}
	else if (Global_139115 == 3)
	{
		return 0;
	}
	if (unk_0xE0A03D8892BEF6BB())
	{
		if (unk_0xF44A5E894FE76438(unk_0x2428688746A375BE(866), 0))
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
	
	iVar0 = unk_0xA0A4DA31DEDFAC4F(iParam0);
	uVar1 = unk_0x2CC6A8460C4261C6(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xCC257DA11A122B5F(uVar1, "LAMAR G "))
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
		if (unk_0x7887B64A08364778(Global_89180[iVar0]))
		{
			if (Global_89180[iVar0] == iParam0)
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
	
	if (unk_0x7887B64A08364778(iParam0) && unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7887B64A08364778(Global_89150[iVar0]) && unk_0xA4DB44DF73EF4FE5(Global_89150[iVar0], 0))
			{
				if (Global_89150[iVar0] == iParam0 && unk_0xA0A4DA31DEDFAC4F(Global_89150[iVar0]) == unk_0xA0A4DA31DEDFAC4F(iParam0))
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
	
	if (unk_0x7887B64A08364778(Global_68526.f_484[24]))
	{
		if (iParam0 == Global_68526.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7887B64A08364778(Global_68526.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68526.f_484[iVar0])
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
	
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 145;
	}
	if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7887B64A08364778(Global_89150[iVar0]))
		{
			if (Global_89150[iVar0] == iParam0)
			{
				return Global_89160[iVar0];
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
	
	if (!unk_0x7887B64A08364778(iParam0) || !unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_130(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xF44A5E894FE76438(Global_101652.f_6172[iVar9], 0))
		{
			if (unk_0x2C1F463EB409D0B0(&sVar1, iParam0))
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
	Global_100364.f_22 = iParam0;
}

