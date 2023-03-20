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
	unk_0x7944710FF545C60B(1);
	if (unk_0x2EC83C7ACA23E8A4(3))
	{
		func_128(2);
		func_105();
	}
	iLocal_36 = func_103();
	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (!iLocal_76)
				{
					func_98();
				}
				else
				{
					func_97();
				}
				if (bLocal_75)
				{
					iLocal_77 = 1;
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				if (!func_96())
				{
					switch (iLocal_38)
					{
						case 0:
							func_93();
							break;
						
						case 1:
							if (iLocal_36 == 5 || iLocal_36 == 6)
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
	func_128(2);
	func_105();
}

void func_2()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(iLocal_96))
	{
		if (unk_0x1F1B2B6E500380C5(iLocal_96, 0))
		{
			iVar0 = 200;
			iVar1 = (unk_0xC6FE0F623405BFA8(iLocal_96) - 800);
			if (unk_0xB0D2E8D46D112F7F(iLocal_96))
			{
				unk_0xA082D4AC00BC651A(iLocal_96, (unk_0xC6FE0F623405BFA8(iLocal_96) - 5));
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
		Global_1344178.f_1 = 1;
		func_5(0, iVar0);
		Global_1344178.f_946[iVar0] = uParam0;
		Global_1344178.f_946.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1344178.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1344178.f_946.f_194[iVar0] = uParam3;
		Global_1344178.f_946.f_183[iVar0] = uParam4;
		Global_1344178.f_946.f_216[iVar0] = uParam5;
		Global_1344178.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1344178.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1344178.f_946.f_258[iVar0] = iParam8;
		Global_1344178.f_946.f_269[iVar0] = uParam9;
		Global_1344178.f_946.f_312[iVar0] = iParam10;
		Global_1344178.f_946.f_323[iVar0] = iParam11;
		Global_1344178.f_946.f_334[iVar0] = iParam12;
		Global_1344178.f_946.f_345[iVar0] = iParam13;
		Global_1344178.f_941 = 1;
		Global_1344178.f_946.f_356[iVar0] = iParam14;
		Global_1344178.f_946.f_367[iVar0] = iParam15;
		Global_1344178.f_946.f_378[iVar0] = iParam16;
		Global_1344178.f_946.f_389[iVar0] = iParam17;
		Global_1344178.f_946.f_400[iVar0] = iParam18;
		Global_1344178.f_946.f_411[iVar0] = iParam19;
		Global_1344178.f_946.f_422[iVar0] = iParam20;
		Global_1344178.f_946.f_433[iVar0] = iParam21;
	}
}

void func_5(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1344178.f_5139[iParam0]), iParam1);
}

bool func_6(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1344178.f_5139[iParam0], iParam1);
}

void func_7()
{
	int iVar0;
	
	iVar0 = (iLocal_80 - unk_0xDF658EB6CA91DFBC());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (unk_0xDF658EB6CA91DFBC() >= iLocal_84)
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
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 10000))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 1:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 9000))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 2:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 8000))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 3:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 7000))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 4:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 6000))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 5:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 5000))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 6:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 4500))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 7:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 4000))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 8:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 3500))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 9:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 3000))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 10:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 2500))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 11:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 2000))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 12:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 1500))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 13:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 1000))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 14:
			if (unk_0xDF658EB6CA91DFBC() >= (iLocal_80 - 500))
			{
				unk_0xAB16AADE80707D47(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 15:
			if (unk_0xDF658EB6CA91DFBC() >= iLocal_80)
			{
				unk_0xAB16AADE80707D47(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 16:
			break;
	}
	if (unk_0xDF658EB6CA91DFBC() >= iLocal_80)
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
		Global_1344178.f_1 = 1;
		func_5(7, iVar0);
		Global_1344178.f_4131[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_4131.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_4131.f_172[iVar0] = iParam2;
		Global_1344178.f_4131.f_216[iVar0] = iParam3;
		Global_1344178.f_4131.f_183[iVar0] = iParam4;
		Global_1344178.f_4131.f_194[iVar0] = iParam5;
		Global_1344178.f_4131.f_249[iVar0] = iParam6;
		Global_1344178.f_4131.f_260[iVar0] = iParam7;
		Global_1344178.f_4131.f_205[iVar0] = iParam8;
		Global_1344178.f_4131.f_314[iVar0] = iParam9;
		Global_1344178.f_4131.f_325[iVar0] = iParam10;
		Global_1344178.f_4131.f_357[iVar0] = iParam11;
		Global_1344178.f_4131.f_238[iVar0] = iParam12;
		Global_1344178.f_4131.f_271[iVar0] = iParam13;
		Global_1344178.f_4131.f_368[iVar0] = iParam14;
		Global_1344178.f_4131.f_379[iVar0] = iParam15;
		Global_1344178.f_4131.f_390[iVar0] = iParam16;
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
				if (!unk_0xEB361B4BD195A4D3(iLocal_93[iVar0]))
				{
					if (!unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Local_64, 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0x4855122D864556E5(unk_0x0C1D3C552325765B(), 2, 0);
						unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
						unk_0x7AC8B1C2CE95AF73(unk_0x0C1D3C552325765B(), 0f);
						iLocal_78 = 1;
					}
				}
			}
			else if (!unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
			{
				if (!unk_0xEB361B4BD195A4D3(iLocal_93[iVar0]))
				{
					unk_0x69E46DC398F0B2BD(iLocal_93[iVar0], unk_0xA0081090911D13E5(), 1000f, -1, 0, 0);
					unk_0x77637031DE326F70(iLocal_93[iVar0], 1);
					unk_0x0689C659BF2D3BF7(&(iLocal_93[iVar0]));
				}
				if (unk_0xD3FACCDA4D66AEAD(uLocal_97))
				{
					unk_0x615DE34FC732CF11(&iLocal_97);
				}
			}
			iVar0++;
		}
	}
	if (func_20(&uLocal_39, Local_67, Global_22, 1, iLocal_96, sLocal_104, "", sLocal_105, 1, 0, 1, -1))
	{
		func_19(iLocal_96, 10.5f, 2, 1056964608, 0, 1, 0);
		unk_0x8474D2383AC8AF53(unk_0xA0081090911D13E5(), 2000, 0);
		unk_0x325A2C5B8927293C(iLocal_96, 0);
		func_14(&uLocal_39, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_90)
	{
		if (!unk_0xEB361B4BD195A4D3(iLocal_90[iVar1]))
		{
			if (!unk_0x16833EFAA58E63DB(uLocal_99[iVar1]))
			{
				uLocal_99[iVar1] = func_10(iLocal_90[iVar1], 1, 145);
				unk_0x95C55738CAE00A20(&uLocal_120);
				unk_0x8474D2383AC8AF53(0, 0, 0);
				unk_0x0756233E85C362F2(0, unk_0xA0081090911D13E5(), 0, 16);
				unk_0x70B222EEA46C37FA(uLocal_120);
				unk_0x3998B29E786DFD96(iLocal_90[iVar1], uLocal_120);
				unk_0x7DFD14B8B873D6B5(&uLocal_120);
				unk_0x77637031DE326F70(iLocal_90[iVar1], 1);
			}
			if (!unk_0x7298BA0C4D4A4C9E(iLocal_90[iVar1], unk_0xA0081090911D13E5(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (unk_0x16833EFAA58E63DB(uLocal_99[iVar1]))
				{
					unk_0x0B57C567D698C373(&(uLocal_99[iVar1]));
				}
				unk_0x69E46DC398F0B2BD(iLocal_90[iVar1], unk_0xA0081090911D13E5(), 1000f, -1, 0, 0);
				unk_0x77637031DE326F70(iLocal_90[iVar1], 1);
				unk_0x0689C659BF2D3BF7(&(iLocal_90[iVar1]));
			}
		}
		else if (unk_0x16833EFAA58E63DB(uLocal_99[iVar1]))
		{
			unk_0x0B57C567D698C373(&(uLocal_99[iVar1]));
		}
		iVar1++;
	}
}

var func_10(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_11(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x16833EFAA58E63DB(uVar0)) && unk_0x7179DC5DD4B8EEBC(&(Global_101553.f_32740[iParam2 /*29*/].f_3)))
	{
		unk_0x6F18BFEFE84565FF(uVar0, &(Global_101553.f_32740[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x91B4D18C6AFDC14C(iParam0);
	if (unk_0x264883409423C6C3(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_12(unk_0xA86CA03D9749EEB3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
		}
		else
		{
			unk_0x77804F3DCBA01DB5(uVar0, 2);
		}
	}
	else if (unk_0x60F161681C368C4E(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_12(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
		unk_0x47C16DAEBDB1E5FD(uVar0, bParam1);
	}
	else if (unk_0x1FFA71644D1C7C16(iParam0))
	{
		unk_0xC40118229E47A3D7(uVar0, func_12(unk_0xA86CA03D9749EEB3(), 0.7f, 0.7f));
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
	func_128(1);
	func_105();
}

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x08BA6DD398CA197C(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_18(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x16833EFAA58E63DB(uParam0->f_1[iVar0]))
		{
			unk_0x0B57C567D698C373(&(uParam0->f_1[iVar0]));
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
			unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), iVar0);
			unk_0x09C86C0C5CA26B1E(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		unk_0x0B57C567D698C373(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar0]))
		{
			unk_0xD20DF430E654B489(uParam0->f_17[iVar0], 1);
			unk_0x5AE688291F6C92F5(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x705E4255B39314A7(uParam0->f_17[iVar0], 32, 1);
				unk_0x705E4255B39314A7(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x705E4255B39314A7(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar0], func_15()) && uParam0->f_17[iVar0] != unk_0xA0081090911D13E5())
				{
					unk_0x988206841442D7CE(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 29))
			{
				unk_0x6C77F5322B94AC81(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		unk_0xD20DF430E654B489(unk_0xA0081090911D13E5(), 1);
		unk_0x5AE688291F6C92F5(unk_0xA0081090911D13E5(), 1);
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (bParam2)
		{
			unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_15()
{
	return unk_0x67D12A4DCB18DE93(unk_0x4A0FB18E33FE5805());
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0)
{
	if (unk_0x16833EFAA58E63DB(uParam0->f_5))
	{
		unk_0x0B57C567D698C373(&(uParam0->f_5));
	}
}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xABC36CFE4F3421A0(0, 71, 1);
	unk_0xABC36CFE4F3421A0(0, 72, 1);
	unk_0xABC36CFE4F3421A0(0, 76, 1);
	unk_0xABC36CFE4F3421A0(0, 73, 1);
	unk_0xABC36CFE4F3421A0(0, 59, 1);
	unk_0xABC36CFE4F3421A0(0, 60, 1);
	if (bParam5)
	{
		unk_0xABC36CFE4F3421A0(0, 75, 1);
	}
	unk_0xABC36CFE4F3421A0(0, 80, 1);
	if (!bParam6)
	{
		unk_0xABC36CFE4F3421A0(0, 69, 1);
		unk_0xABC36CFE4F3421A0(0, 70, 1);
		unk_0xABC36CFE4F3421A0(0, 68, 1);
	}
	unk_0xABC36CFE4F3421A0(0, 74, 1);
	unk_0xABC36CFE4F3421A0(0, 86, 1);
	unk_0xABC36CFE4F3421A0(0, 81, 1);
	unk_0xABC36CFE4F3421A0(0, 82, 1);
	unk_0xABC36CFE4F3421A0(0, 138, 1);
	unk_0xABC36CFE4F3421A0(0, 136, 1);
	unk_0xABC36CFE4F3421A0(0, 114, 1);
	unk_0xABC36CFE4F3421A0(0, 107, 1);
	unk_0xABC36CFE4F3421A0(0, 110, 1);
	unk_0xABC36CFE4F3421A0(0, 89, 1);
	unk_0xABC36CFE4F3421A0(0, 89, 1);
	unk_0xABC36CFE4F3421A0(0, 87, 1);
	unk_0xABC36CFE4F3421A0(0, 88, 1);
	unk_0xABC36CFE4F3421A0(0, 113, 1);
	unk_0xABC36CFE4F3421A0(0, 115, 1);
	unk_0xABC36CFE4F3421A0(0, 116, 1);
	unk_0xABC36CFE4F3421A0(0, 117, 1);
	unk_0xABC36CFE4F3421A0(0, 118, 1);
	unk_0xABC36CFE4F3421A0(0, 119, 1);
	unk_0xABC36CFE4F3421A0(0, 131, 1);
	unk_0xABC36CFE4F3421A0(0, 132, 1);
	unk_0xABC36CFE4F3421A0(0, 123, 1);
	unk_0xABC36CFE4F3421A0(0, 126, 1);
	unk_0xABC36CFE4F3421A0(0, 129, 1);
	unk_0xABC36CFE4F3421A0(0, 130, 1);
	unk_0xABC36CFE4F3421A0(0, 133, 1);
	unk_0xABC36CFE4F3421A0(0, 134, 1);
	unk_0xB18D6B85BBC9224A();
	if ((unk_0xDF658EB6CA91DFBC() - Global_29) > 500)
	{
		unk_0xAAE246A3BA63EEF6(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xDF658EB6CA91DFBC();
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		if (unk_0x7466327978A6A24C(unk_0x39053CCA2C4B5DA1(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_20(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_21(uParam0, Param1, Param4, func_63(), func_63(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_62(), func_62(), func_62(), func_62(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_21(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, int iParam36)
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
	func_61(uParam0);
	func_60(uParam0);
	func_59();
	if (func_43(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_42(sParam20);
		func_42(sParam21);
		func_42(sParam22);
		func_42(sParam23);
		if (unk_0xB20CA7A3EE29687A())
		{
			bVar1 = false;
			if (unk_0x1F1B2B6E500380C5(iParam18, 0))
			{
				if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iParam18, 0))
				{
					unk_0x88B0F0DC270164B7(&(uParam0->f_13), 3);
					if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 9))
					{
						unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 4);
					}
					if (unk_0x08BA6DD398CA197C(uParam0->f_13, 23))
					{
						unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 23);
					}
					unk_0x88B0F0DC270164B7(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_40(uParam0, iParam29))
				{
					unk_0x88B0F0DC270164B7(&(uParam0->f_13), 3);
					if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 9))
					{
						unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 4);
					}
					unk_0x88B0F0DC270164B7(&(uParam0->f_13), 9);
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
				if (bParam26 && unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
				{
					if (unk_0x16833EFAA58E63DB(uParam0->f_5))
					{
						unk_0x0B57C567D698C373(&(uParam0->f_5));
						func_42(sParam19);
					}
					if (unk_0x16833EFAA58E63DB(*uParam0))
					{
						unk_0x0B57C567D698C373(uParam0);
					}
					if ((!func_36(uParam0, 1) && !func_35(uParam0)) && !unk_0x08BA6DD398CA197C(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_33(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[0]))
							{
								func_31(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x88B0F0DC270164B7(&(uParam0->f_13), 0);
						unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x08BA6DD398CA197C(uParam0->f_13, 0))
					{
						func_42("LOSE_WANTED");
						unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 0);
						unk_0x88B0F0DC270164B7(&(uParam0->f_13), 1);
					}
					if (unk_0x08BA6DD398CA197C(uParam0->f_13, 1))
					{
						if (!func_36(uParam0, 1))
						{
							if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[0]))
							{
								func_31(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0x16833EFAA58E63DB(uParam0->f_5))
					{
						if (unk_0x16833EFAA58E63DB(*uParam0))
						{
							unk_0x0B57C567D698C373(uParam0);
						}
						uParam0->f_5 = func_30(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0x32479C670EB9962F(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_29(uParam0->f_5, uParam0);
						}
					}
					else if (!func_28(Var3, unk_0xA4C471C6C99EDD6B(uParam0->f_5), 0.1f, 0))
					{
						unk_0x5E674CE3A7662F54(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_29(uParam0->f_5, uParam0);
						}
					}
					if (!func_36(uParam0, 2))
					{
						if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 2))
						{
							func_33(uParam0, sParam19, 0);
							unk_0x88B0F0DC270164B7(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0x08BA6DD398CA197C(uParam0->f_13, 13))
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
						unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0xFD4DDA3E1EF89C67(unk_0xA0081090911D13E5(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x6E07DBF03F3AC258(unk_0xA0081090911D13E5(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
									if (!unk_0x1FD87E888EB4FC00(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x1FD87E888EB4FC00(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar2], func_15()) || !func_26(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_23(uParam0))
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
								func_14(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xD3FACCDA4D66AEAD(iParam18))
			{
				if ((bParam26 && unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0)) && (!unk_0x08BA6DD398CA197C(uParam0->f_13, 9) && !unk_0x08BA6DD398CA197C(uParam0->f_13, 22)))
				{
					func_42(sParam24);
					func_42(sParam27);
					if (unk_0x16833EFAA58E63DB(uParam0->f_5) || unk_0x16833EFAA58E63DB(*uParam0))
					{
						unk_0x0B57C567D698C373(&(uParam0->f_5));
						unk_0x0B57C567D698C373(uParam0);
						func_42(sParam19);
					}
					if ((!func_36(uParam0, 1) && !func_35(uParam0)) && !unk_0x08BA6DD398CA197C(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_33(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[0]))
							{
								func_31(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x88B0F0DC270164B7(&(uParam0->f_13), 0);
						unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x08BA6DD398CA197C(uParam0->f_13, 0))
					{
						func_42("LOSE_WANTED");
						unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 0);
						unk_0x88B0F0DC270164B7(&(uParam0->f_13), 1);
					}
					if (unk_0x08BA6DD398CA197C(uParam0->f_13, 1))
					{
						if (!func_36(uParam0, 1))
						{
							if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[0]))
							{
								func_31(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 1);
						}
					}
					if (unk_0x1F1B2B6E500380C5(iParam18, 0))
					{
						if (!unk_0x16833EFAA58E63DB(*uParam0))
						{
							if (unk_0x16833EFAA58E63DB(uParam0->f_5))
							{
								unk_0x0B57C567D698C373(&(uParam0->f_5));
								func_42(sParam19);
							}
							*uParam0 = func_22(iParam18, 0, 0);
							unk_0x8373805E5E68D815(*uParam0, 2);
							if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 4))
							{
								func_29(*uParam0, uParam0);
							}
						}
						if (!func_36(uParam0, 2))
						{
							if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 3))
							{
								func_33(uParam0, sParam24, 0);
								unk_0x88B0F0DC270164B7(&(uParam0->f_13), 3);
								unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 4);
							}
							else if (unk_0x08BA6DD398CA197C(uParam0->f_13, 9))
							{
								if (!unk_0xD28EDDD3F7264249(sParam27))
								{
									if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 4))
									{
										func_33(uParam0, sParam27, 0);
										unk_0x88B0F0DC270164B7(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 4))
								{
									func_33(uParam0, sParam24, 0);
									unk_0x88B0F0DC270164B7(&(uParam0->f_13), 4);
								}
								if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 23))
								{
									if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[0]))
									{
										func_31(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x88B0F0DC270164B7(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x16833EFAA58E63DB(uParam0->f_5))
				{
					unk_0x0B57C567D698C373(&(uParam0->f_5));
					func_42(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_36(uParam0, 2))
						{
							if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
							{
								if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0xB5BF1B58C833F7A9(0, iVar8);
									if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar9]))
									{
										func_31(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_33(uParam0, "MORE_SEATS", 0);
									unk_0x88B0F0DC270164B7(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 3))
							{
								func_33(uParam0, sParam24, 0);
								unk_0x88B0F0DC270164B7(&(uParam0->f_13), 3);
								unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 4);
							}
							else if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 4))
							{
								if (unk_0x08BA6DD398CA197C(uParam0->f_13, 9))
								{
									func_33(uParam0, sParam27, 0);
									unk_0x88B0F0DC270164B7(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_36(uParam0, 2))
					{
						if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 3))
						{
							func_33(uParam0, sParam24, 0);
							unk_0x88B0F0DC270164B7(&(uParam0->f_13), 3);
							unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 4);
						}
						else if (unk_0x08BA6DD398CA197C(uParam0->f_13, 9))
						{
							if (!unk_0xD28EDDD3F7264249(sParam27))
							{
								if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 4))
								{
									func_33(uParam0, sParam27, 0);
									unk_0x88B0F0DC270164B7(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 4))
							{
								func_33(uParam0, sParam24, 0);
								unk_0x88B0F0DC270164B7(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x08BA6DD398CA197C(uParam0->f_13, 0))
		{
			unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 0);
		}
		func_42(sParam19);
		func_42(sParam24);
		func_42(sParam27);
		func_42(sParam24);
		func_42("LOSE_WANTED");
		if (unk_0x16833EFAA58E63DB(uParam0->f_5))
		{
			unk_0x0B57C567D698C373(&(uParam0->f_5));
		}
		if (unk_0x16833EFAA58E63DB(*uParam0))
		{
			unk_0x0B57C567D698C373(uParam0);
		}
	}
	unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 11);
	unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 12);
	return 0;
}

int func_22(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_23(var uParam0)
{
	if (unk_0x08BA6DD398CA197C(uParam0->f_13, 12))
	{
		if (func_25(unk_0xA0081090911D13E5()))
		{
			if (func_24(1, 0, 1) || unk_0x08BA6DD398CA197C(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_24(1, 0, 1) || unk_0x08BA6DD398CA197C(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_24(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x575662C16C9FE750())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		if (!unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
		{
			return 0;
		}
		iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
		if (bParam0)
		{
			if (unk_0x912AD5A10E7633F0(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x912AD5A10E7633F0(iVar0, 0))
			{
				if (unk_0x8FD32443A080784B(iVar0, -1, 0) != unk_0xA0081090911D13E5())
				{
					return 0;
				}
			}
		}
		if (!unk_0x912AD5A10E7633F0(iVar0, 0))
		{
			if (unk_0xC00FEF88F7C3E2FB(iVar0) < 0.95f || unk_0xC00FEF88F7C3E2FB(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0xB8E921FDBC0BA08C(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!unk_0x42322F841075FF38(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	return 1;
}

int func_25(int iParam0)
{
	float fVar0;
	
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		fVar0 = unk_0x39053CCA2C4B5DA1(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_26(int iParam0, int iParam1)
{
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()) && iParam1)
		{
			if (func_27(unk_0xA0081090911D13E5(), iParam0))
			{
				unk_0xFF241DECD8873FB3(func_15(), 50f);
				return 1;
			}
		}
		else if (unk_0xCD62786CA98E5AFD(iParam0, func_15()))
		{
			unk_0xFF241DECD8873FB3(func_15(), 50f);
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
	
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (unk_0x4745637EEB85132D(iParam0))
		{
			iVar0 = unk_0xF8DB47D339B8B953(iParam0, 0);
			if (unk_0x1F1B2B6E500380C5(iVar0, 0))
			{
				if (!unk_0xEB361B4BD195A4D3(iParam1))
				{
					if (unk_0x72550A6F2BC0E12B(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_28(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x7466327978A6A24C((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x7466327978A6A24C((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x7466327978A6A24C((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7466327978A6A24C((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x7466327978A6A24C((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_29(var uParam0, var uParam1)
{
	if (unk_0x16833EFAA58E63DB(uParam0))
	{
		if (unk_0x16833EFAA58E63DB(uParam1->f_6))
		{
			unk_0x71E206F83114C3D2(uParam1->f_6, 0);
		}
		unk_0x1150AE74ED88A928(0);
		unk_0xF8B3F0961E40A7B4();
		uParam1->f_6 = uParam0;
		unk_0x71E206F83114C3D2(uParam0, 1);
	}
}

var func_30(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x52CE8C31DD5898E7(Param0);
	unk_0xC40118229E47A3D7(uVar0, func_12(unk_0xA86CA03D9749EEB3(), 1f, 1f));
	unk_0x71E206F83114C3D2(uVar0, iParam3);
	return uVar0;
}

void func_31(var uParam0, char* sParam1, int iParam2)
{
	unk_0xD8A7A2C7456E47C9(uParam0, sParam1, func_32(iParam2), 1);
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

void func_33(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xD28EDDD3F7264249(sParam1))
		{
			if (!unk_0x28C1B9853548BD8E(sParam1, ""))
			{
				func_34(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0xDF658EB6CA91DFBC();
}

void func_34(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x43ADD6E60AA2507B(sParam0);
	unk_0xAA85370CFA6D5384(iParam1, 1);
}

int func_35(var uParam0)
{
	if (!unk_0xEB361B4BD195A4D3(uParam0->f_16))
	{
		if (unk_0x124290C0A019B083(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_36(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x32FF1663A80B4F87())
	{
		if (unk_0x43589182CF3243AE())
		{
			return 1;
		}
		if (func_39(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x32FF1663A80B4F87())
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
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

int func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xDF658EB6CA91DFBC();
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
	
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
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
	
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xD3FACCDA4D66AEAD(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x8EF0E5E933BE561D(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x4E78173E80C9C0FF(iParam0, 1))
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
				if (!unk_0x4E78173E80C9C0FF(iParam0, 1))
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
	if (!unk_0xD28EDDD3F7264249(sParam0))
	{
		unk_0xB32A833D2CE3521D(sParam0);
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
		if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
		{
			if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 29) && !unk_0x08BA6DD398CA197C(uParam0->f_13, 28))
			{
				if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar0]))
				{
					unk_0x6C77F5322B94AC81(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x88B0F0DC270164B7(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 29) && unk_0x08BA6DD398CA197C(uParam0->f_13, 28))
		{
			if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar0]))
			{
				unk_0x6C77F5322B94AC81(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0xD3FACCDA4D66AEAD(uParam0->f_21))
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
			uVar24 = unk_0xC9A2776428760D9D(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), 50f, 0, iVar25);
			if (unk_0x1F1B2B6E500380C5(uVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x1F1B2B6E500380C5(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), unk_0xC59DF10B4FC39DF8(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
				{
					if (!unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0) || !bParam17)
					{
						if (func_41(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar0]))
								{
									unk_0x44A694E0E28FA402(uParam0->f_17[iVar0], 1f);
									if (unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar0], func_15()))
									{
										unk_0x988206841442D7CE(uParam0->f_17[iVar0]);
									}
									if (unk_0x21178DF77817BF39(uParam0->f_17[iVar0], -1794415470) == 7 && !func_58(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0xFFE4F37124DBE6D9(uParam0->f_17[iVar0]) && !unk_0x5AE21A1C30DF235D(uParam0->f_17[iVar0]))
										{
											unk_0xFF5CE2ECB4FBD4A8(uParam0->f_17[iVar0], 1);
											unk_0xA4FE049E1F729261(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x69AB64EF21C2006E(uParam0->f_17[iVar0], iVar0);
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
			unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar0]))
				{
					if (!unk_0x69FEFE28E1352842(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xD3032BAC1ECE011F(uParam0->f_17[iVar0]);
					}
					if (!unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar0], func_15()))
					{
						if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0xF6C043D83EDAD90F(uParam0->f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 26))
	{
		if ((!func_55(uParam0) && unk_0x4745637EEB85132D(unk_0xA0081090911D13E5())) && !unk_0xD3FACCDA4D66AEAD(iParam10))
		{
			iVar13 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
			if (unk_0x1F1B2B6E500380C5(iVar13, 0))
			{
				if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 13))
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
							if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0xB5BF1B58C833F7A9(0, iVar26);
						if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar27]))
						{
							func_31(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_33(uParam0, "MORE_SEATS", 0);
						unk_0x88B0F0DC270164B7(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 13);
			func_42("MORE_SEATS");
		}
		if (!unk_0xD3FACCDA4D66AEAD(iParam10))
		{
			if ((!unk_0xEB361B4BD195A4D3(uParam0->f_17[0]) || !unk_0xEB361B4BD195A4D3(uParam0->f_17[1])) || !unk_0xEB361B4BD195A4D3(uParam0->f_17[2]))
			{
				if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 31))
				{
					if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()) && !func_36(uParam0, 2))
					{
						iVar13 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
						if (func_54(iVar13, uParam0))
						{
							func_33(uParam0, "CMN_VEHSUIT", 0);
							unk_0x88B0F0DC270164B7(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
				{
					unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 31);
					func_42("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x1F1B2B6E500380C5(iParam10, 0))
		{
			if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), iParam10))
			{
				if (unk_0x2A57AED61E15C7C7(0, 75))
				{
					unk_0x88B0F0DC270164B7(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0x08BA6DD398CA197C(uParam0->f_13, 21))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD3FACCDA4D66AEAD(uParam0->f_17[iVar0]))
			{
				if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar0]))
				{
					if (!unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar0], func_15()))
					{
						unk_0x181C1956DD1F0598(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x181C1956DD1F0598(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
					{
						iVar13 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
						if (unk_0x1F1B2B6E500380C5(iVar13, 0))
						{
							if (unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar0], func_15()))
							{
								if (!func_55(uParam0) && unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
								{
									if (!func_53(uParam0->f_17[iVar0]))
									{
										unk_0x988206841442D7CE(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x912AD5A10E7633F0(iVar13, 0))
						{
							if (unk_0x72550A6F2BC0E12B(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xB46E03E529421E99(iVar13) && !unk_0xF4EC4B99EA67DA10(iVar13))
								{
									Var28 = { unk_0xC59DF10B4FC39DF8(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0xAB74B3F15710FF7D(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar0], func_15()))
					{
						if (unk_0x4745637EEB85132D(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0xF8DB47D339B8B953(uParam0->f_17[iVar0], 0);
							if (!unk_0x912AD5A10E7633F0(iVar13, 0))
							{
								if (unk_0x1F1B2B6E500380C5(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), iVar13))
										{
											if (unk_0x39053CCA2C4B5DA1(iVar13) > 5f)
											{
												unk_0xAB74B3F15710FF7D(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xAB74B3F15710FF7D(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
									{
										iVar31 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
									}
									if (unk_0x1F1B2B6E500380C5(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x39053CCA2C4B5DA1(iVar13) > 5f)
											{
												unk_0xAB74B3F15710FF7D(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xAB74B3F15710FF7D(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar0], func_15()))
					{
						iVar32 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
						if (unk_0xD3FACCDA4D66AEAD(iVar32))
						{
							if (func_41(iVar32, uParam0, 0))
							{
								if (func_52(iVar0, uParam0) || !unk_0x08BA6DD398CA197C(uParam0->f_13, 27))
								{
									unk_0x69AB64EF21C2006E(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x88B0F0DC270164B7(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_52(iVar0, uParam0))
							{
								if (unk_0x705BC1BB91F530B5(iVar32) == joaat("sentinel2"))
								{
									unk_0x69AB64EF21C2006E(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x69AB64EF21C2006E(uParam0->f_17[iVar0], 2);
								}
								func_51(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar0], func_15()) && !func_50(uParam0->f_17[iVar0], iParam10)) && !func_49(uParam0->f_17[iVar0], iParam10))
					{
						if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar0], func_15()))
							{
								if (((!unk_0xFFE4F37124DBE6D9(uParam0->f_17[iVar0]) && !unk_0x5AE21A1C30DF235D(uParam0->f_17[iVar0])) && !unk_0x337FF43C2B365BF6(uParam0->f_17[iVar0])) && !unk_0x69FEFE28E1352842(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x21178DF77817BF39(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0xD3032BAC1ECE011F(uParam0->f_17[iVar0]);
									}
									unk_0xF6C043D83EDAD90F(uParam0->f_17[iVar0], func_15());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0x16833EFAA58E63DB(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0xDF658EB6CA91DFBC();
								uParam0->f_1[iVar0] = func_22(uParam0->f_17[iVar0], 0, 0);
								unk_0x8373805E5E68D815(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_29(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x16833EFAA58E63DB(uParam0->f_1[iVar0]))
					{
						if (((func_26(uParam0->f_17[iVar0], 1) || func_50(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x1F1B2B6E500380C5(iParam10, 0) && !unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iParam10, 0)))
						{
							if (unk_0x16833EFAA58E63DB(uParam0->f_1[iVar0]))
							{
								unk_0x0B57C567D698C373(&(uParam0->f_1[iVar0]));
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
					else if (unk_0x1F1B2B6E500380C5(iParam10, 0))
					{
						if (!unk_0x72550A6F2BC0E12B(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x7298BA0C4D4A4C9E(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0x08BA6DD398CA197C(uParam0->f_13, 11)) && !((bParam17 && unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0)) && !unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iParam10, 0)))
							{
								if (unk_0x4745637EEB85132D(uParam0->f_17[iVar0]))
								{
									if (!unk_0x1FD87E888EB4FC00(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_26(uParam0->f_17[iVar0], 1))
										{
											if (func_25(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x21178DF77817BF39(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x8474D2383AC8AF53(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar0], func_15()))
									{
										if ((((!unk_0x337FF43C2B365BF6(uParam0->f_17[iVar0]) && !unk_0xFFE4F37124DBE6D9(uParam0->f_17[iVar0])) && !unk_0x5AE21A1C30DF235D(uParam0->f_17[iVar0])) && !unk_0x69FEFE28E1352842(uParam0->f_17[iVar0])) && !unk_0x601CCD1205C6523F(iParam10))
										{
											unk_0x988206841442D7CE(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x21178DF77817BF39(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_58(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x337FF43C2B365BF6(uParam0->f_17[iVar0]) && !unk_0x337FF43C2B365BF6(unk_0xA0081090911D13E5())) && !func_48(uParam0->f_17[iVar0], 2f)) && !unk_0xFFE4F37124DBE6D9(uParam0->f_17[iVar0])) && !unk_0x5AE21A1C30DF235D(uParam0->f_17[iVar0])) && !unk_0x601CCD1205C6523F(iParam10))
										{
											unk_0xFF5CE2ECB4FBD4A8(uParam0->f_17[iVar0], 1);
											if (unk_0x08BA6DD398CA197C(uParam0->f_13, 10))
											{
												unk_0x44A694E0E28FA402(uParam0->f_17[iVar0], 1f);
											}
											unk_0xA4FE049E1F729261(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x7EF0CC11828DB6AC(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_22(uParam0->f_17[iVar0], 0, 0);
										unk_0x8373805E5E68D815(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar0], func_15()))
							{
								if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0xFFE4F37124DBE6D9(uParam0->f_17[iVar0]) && !unk_0x5AE21A1C30DF235D(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x21178DF77817BF39(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0xD3032BAC1ECE011F(uParam0->f_17[iVar0]);
										}
										unk_0xFF5CE2ECB4FBD4A8(uParam0->f_17[iVar0], 0);
										unk_0xF6C043D83EDAD90F(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), iParam10))
						{
							if (!unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar0], func_15()))
							{
								if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 21))
								{
									unk_0xF6C043D83EDAD90F(uParam0->f_17[iVar0], func_15());
								}
							}
							else if (unk_0x08BA6DD398CA197C(uParam0->f_13, 21))
							{
								unk_0x988206841442D7CE(uParam0->f_17[iVar0]);
								unk_0x88B0F0DC270164B7(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xCD62786CA98E5AFD(uParam0->f_17[iVar0], func_15()) && !unk_0x601CCD1205C6523F(iParam10))
						{
							unk_0x988206841442D7CE(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x16833EFAA58E63DB(uParam0->f_1[iVar0]))
				{
					unk_0x0B57C567D698C373(&(uParam0->f_1[iVar0]));
					func_42(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x16833EFAA58E63DB(uParam0->f_1[iVar0]))
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
						if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar0]))
						{
							if (func_53(uParam0->f_17[iVar0]) || unk_0x7298BA0C4D4A4C9E(uParam0->f_17[iVar0], unk_0xA0081090911D13E5(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar0]))
					{
						if (!unk_0x7298BA0C4D4A4C9E(uParam0->f_17[iVar0], unk_0xA0081090911D13E5(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_53(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0xDF658EB6CA91DFBC();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 5))
							{
								func_33(uParam0, sParam7, 0);
								unk_0x88B0F0DC270164B7(&(uParam0->f_13), 5);
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
										if (!unk_0xD28EDDD3F7264249(uVar19[iVar0]))
										{
											if (!unk_0x28C1B9853548BD8E(uVar19[iVar0], ""))
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
		unk_0x09C86C0C5CA26B1E(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x16833EFAA58E63DB(uParam0->f_1[iVar0]))
				{
					unk_0x0B57C567D698C373(&(uParam0->f_1[iVar0]));
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
			unk_0x88B0F0DC270164B7(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x88B0F0DC270164B7(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x88B0F0DC270164B7(&(uParam1->f_13), 16);
			break;
	}
}

void func_45(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xD28EDDD3F7264249(sParam1))
		{
			if (!unk_0x28C1B9853548BD8E(sParam1, ""))
			{
				func_46(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0xDF658EB6CA91DFBC();
}

void func_46(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x43ADD6E60AA2507B(sParam0);
	unk_0xBDE6EEC5F6BDC060(uParam1);
	unk_0xAA85370CFA6D5384(iParam2, 1);
}

int func_47(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x08BA6DD398CA197C(uParam1->f_13, 14);
		
		case 1:
			return unk_0x08BA6DD398CA197C(uParam1->f_13, 15);
		
		case 2:
			return unk_0x08BA6DD398CA197C(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_48(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x39FEE545B315414E(iParam0, 0))
	{
		iVar0 = unk_0xF8DB47D339B8B953(iParam0, 0);
		if (!unk_0x912AD5A10E7633F0(iVar0, 0))
		{
			if (unk_0x39053CCA2C4B5DA1(iVar0) > fParam1)
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
	
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (!unk_0xCD62786CA98E5AFD(iParam0, func_15()))
		{
			iVar0 = unk_0x3F561A9EB662F6AE(iParam0);
			if (unk_0x1F1B2B6E500380C5(iParam1, 0))
			{
				if (unk_0x7298BA0C4D4A4C9E(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1))
		{
			if (unk_0x1F1B2B6E500380C5(iParam1, 0))
			{
				if (unk_0x72550A6F2BC0E12B(iParam0, iParam1))
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
			unk_0x88B0F0DC270164B7(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x88B0F0DC270164B7(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x88B0F0DC270164B7(&(uParam1->f_13), 19);
			break;
	}
}

int func_52(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x08BA6DD398CA197C(uParam1->f_13, 17);
		
		case 1:
			return unk_0x08BA6DD398CA197C(uParam1->f_13, 18);
		
		case 2:
			return unk_0x08BA6DD398CA197C(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		iVar0 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
		if (unk_0x1F1B2B6E500380C5(iVar0, 0))
		{
			if (!unk_0xEB361B4BD195A4D3(iParam0))
			{
				iVar1 = unk_0x02056DA113641E74(iParam0);
				if (unk_0x1F1B2B6E500380C5(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x7298BA0C4D4A4C9E(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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
	
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		if (unk_0x705BC1BB91F530B5(iParam0) == joaat("bus") || unk_0x705BC1BB91F530B5(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0xEB361B4BD195A4D3(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x8FD32443A080784B(iParam0, 0, 0);
			if (!unk_0xEB361B4BD195A4D3(iVar3))
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
			iVar4 = unk_0x8FD32443A080784B(iParam0, 1, 0);
			if (!unk_0xEB361B4BD195A4D3(iVar4))
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
			iVar5 = unk_0x8FD32443A080784B(iParam0, 2, 0);
			if (!unk_0xEB361B4BD195A4D3(iVar5))
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
	var uVar0;
	
	if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
	{
		uVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
		if (func_41(uVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	var uVar0;
	
	if (!unk_0xEB361B4BD195A4D3(iParam1))
	{
		if (unk_0x4745637EEB85132D(iParam1))
		{
			uVar0 = unk_0xF8DB47D339B8B953(iParam1, 0);
			if (!unk_0x912AD5A10E7633F0(uVar0, 0))
			{
				if (unk_0x1F1B2B6E500380C5(iVar0, 0))
				{
					if (unk_0x72550A6F2BC0E12B(unk_0xA0081090911D13E5(), iVar0))
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
				else if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
				if (unk_0xD3FACCDA4D66AEAD(iVar0))
				{
					if (func_41(iVar0, uParam0, 0))
					{
						if (unk_0x1F1B2B6E500380C5(iVar0, 0))
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
	
	if (!unk_0x912AD5A10E7633F0(uParam0, 0))
	{
		fVar0 = unk_0x39053CCA2C4B5DA1(iParam0);
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
	
	if (!unk_0xEB361B4BD195A4D3(uParam0))
	{
		if (unk_0x1F1B2B6E500380C5(iParam1, 0))
		{
			iVar0 = unk_0x02056DA113641E74(iParam0);
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
	
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
	{
		iVar0 = unk_0x3F561A9EB662F6AE(unk_0xA0081090911D13E5());
		if (unk_0x1F1B2B6E500380C5(iVar0, 0))
		{
			iVar1 = unk_0x8FD32443A080784B(iVar0, 0, 0);
			if (!unk_0xEB361B4BD195A4D3(iVar1))
			{
				if (iVar1 != unk_0xA0081090911D13E5())
				{
					if (unk_0x18C670321BC98FDA(iVar1))
					{
						if (!unk_0x2C09015A1FBBC7B2(iVar1, unk_0xA0081090911D13E5()))
						{
							unk_0xD5DC2873808A9CB5(iVar1, unk_0xA0081090911D13E5(), 2000, 2048, 2);
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
	
	if (!unk_0x08BA6DD398CA197C(uParam0->f_13, 25))
	{
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			unk_0x705E4255B39314A7(unk_0xA0081090911D13E5(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD3FACCDA4D66AEAD(uParam0->f_17[iVar0]))
			{
				if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar0]))
				{
					unk_0x705E4255B39314A7(uParam0->f_17[iVar0], 32, 0);
					unk_0x705E4255B39314A7(uParam0->f_17[iVar0], 305, 1);
					unk_0x705E4255B39314A7(uParam0->f_17[iVar0], 268, 1);
					unk_0x7EF0CC11828DB6AC(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x88B0F0DC270164B7(&(uParam0->f_13), 25);
	}
}

void func_61(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD3FACCDA4D66AEAD(uParam0->f_17[iVar0]))
		{
			if (!unk_0xEB361B4BD195A4D3(uParam0->f_17[iVar0]))
			{
				if (unk_0x4745637EEB85132D(uParam0->f_17[iVar0]))
				{
					unk_0xD20DF430E654B489(uParam0->f_17[iVar0], 0);
					unk_0x5AE688291F6C92F5(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
			{
				unk_0xD20DF430E654B489(unk_0xA0081090911D13E5(), 0);
				unk_0x5AE688291F6C92F5(unk_0xA0081090911D13E5(), 0);
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
	
	if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_96, 0))
	{
		if (unk_0x16833EFAA58E63DB(uLocal_102))
		{
			unk_0x0B57C567D698C373(&uLocal_102);
		}
		if (iLocal_36 <= 2)
		{
			iLocal_80 = (unk_0x48DCBD1CC6671BDC() * ((60 * iLocal_82) + iLocal_83));
			iLocal_80 = (iLocal_80 + unk_0xDF658EB6CA91DFBC());
			iLocal_84 = (iLocal_80 - unk_0x48DCBD1CC6671BDC() * 30);
		}
		else if (iLocal_36 > 6)
		{
			iLocal_80 = (unk_0x48DCBD1CC6671BDC() * ((60 * iLocal_82) + iLocal_83));
			iLocal_80 = (iLocal_80 + unk_0xDF658EB6CA91DFBC());
			iLocal_84 = (iLocal_80 - unk_0x48DCBD1CC6671BDC() * 30);
		}
		else if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			iLocal_97 = unk_0xE044C77D0FC9DB66(iLocal_89, Local_70, fLocal_74, 1, 1);
			iLocal_93[0] = unk_0x667A2CFA1914073C(iLocal_97, 6, iLocal_87, -1, 1, 1);
			iLocal_93[1] = unk_0x667A2CFA1914073C(iLocal_97, 6, iLocal_87, 0, 1, 1);
			unk_0xD8C3303D0A49D05B("rghCop", &uLocal_118);
			unk_0xFDDE2C1A05E64390(4, uLocal_118, joaat("player"));
			unk_0x87BBAE0EE5DD7680(iLocal_93[0], 39, 1);
			unk_0x87BBAE0EE5DD7680(iLocal_93[1], 39, 1);
			iVar0 = 0;
			while (iVar0 < iLocal_93)
			{
				unk_0x8942ADC0DB9F81E4(iLocal_93[iVar0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x089391A6493B0105(iLocal_93[iVar0], 100f);
				unk_0x65889F26F311FC55(iLocal_93[iVar0], uLocal_118);
				iVar0++;
			}
		}
		iLocal_38 = 2;
	}
}

void func_65()
{
	int iVar0;
	
	if (!unk_0x912AD5A10E7633F0(iLocal_96, 0))
	{
		if (func_92() || unk_0xEB361B4BD195A4D3(iLocal_90[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_90)
			{
				if (!unk_0xEB361B4BD195A4D3(iLocal_90[iVar0]))
				{
					if (!unk_0x16833EFAA58E63DB(uLocal_99[iVar0]))
					{
						uLocal_99[iVar0] = func_10(iLocal_90[iVar0], 1, 145);
						unk_0x87BBAE0EE5DD7680(iLocal_90[iVar0], 1, 0);
						unk_0x95C55738CAE00A20(&uLocal_120);
						unk_0x8474D2383AC8AF53(0, 0, 0);
						unk_0x0756233E85C362F2(0, unk_0xA0081090911D13E5(), 0, 16);
						unk_0x70B222EEA46C37FA(uLocal_120);
						unk_0x3998B29E786DFD96(iLocal_90[iVar0], uLocal_120);
						unk_0x7DFD14B8B873D6B5(&uLocal_120);
					}
				}
				else if (unk_0x16833EFAA58E63DB(uLocal_99[iVar0]))
				{
					unk_0x0B57C567D698C373(&(uLocal_99[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_79)
		{
			if (!unk_0xEB361B4BD195A4D3(iLocal_90[0]))
			{
				if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), iLocal_90[0], 50f, 50f, 50f, 0, 1, 0))
				{
					unk_0x96F7890AEA06DDAE(iLocal_90[0], iLocal_96, unk_0xA0081090911D13E5(), 8, 25f, 786469, -1f, -1f, 1);
					iLocal_79 = 1;
				}
			}
		}
		if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), iLocal_96, 0))
		{
			if (unk_0x16833EFAA58E63DB(uLocal_102))
			{
				unk_0x0B57C567D698C373(&uLocal_102);
			}
			func_91(&uLocal_106, 0, 0);
			iLocal_38 = 2;
		}
		else if (unk_0x6315EBE95A97CADF(iLocal_96, -1, 0) || unk_0xEB361B4BD195A4D3(iLocal_90[0]))
		{
			func_91(&uLocal_106, 0, 0);
		}
		else
		{
			func_66();
		}
	}
}

void func_66()
{
	if (!unk_0xEB361B4BD195A4D3(iLocal_90[0]) && !unk_0x912AD5A10E7633F0(iLocal_96, 0))
	{
		if (unk_0x1FD87E888EB4FC00(iLocal_90[0], iLocal_96, 0))
		{
			func_67(&uLocal_106, iLocal_96, 0, 0, 1, 1, 1);
		}
	}
}

void func_67(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_68(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_68(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_69(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_69(var uParam0, var uParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
	{
		func_91(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_70(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_70(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xFA597181B01136F0())
	{
		if (unk_0xDF658EB6CA91DFBC() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xD28EDDD3F7264249(iVar0))
	{
		if (!unk_0xA86CA03D9749EEB3())
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
	if (func_88(uParam1) && unk_0x374C36A4A2089997(uParam1))
	{
		iVar1 = 0;
		if (unk_0x60F161681C368C4E(uParam1))
		{
			unk_0xE0E48FD2AE97A676(unk_0x90897FA118314142(iParam1));
			unk_0x8596E031C10DA22B(unk_0x90897FA118314142(iParam1), 1);
			if (unk_0x79C6BB40BB05BB73(unk_0x90897FA118314142(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x264883409423C6C3(iParam1))
		{
			unk_0x6DF8E06AA9365A4A(unk_0x5293F3C38E4842B3(iParam1));
			if (unk_0xC848DCB38697A02D(unk_0x5293F3C38E4842B3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x1FFA71644D1C7C16(iParam1))
		{
			unk_0x7A68038203474D14(unk_0xD6F8F75E3496EEF6(iParam1));
			if (unk_0x18E8AE05B615030F(unk_0xD6F8F75E3496EEF6(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xFA597181B01136F0())
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
					if ((unk_0xD28EDDD3F7264249(uParam0->f_3) && !unk_0xD28EDDD3F7264249(iVar0)) && unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
					{
						if ((iVar1 && !unk_0x598A9E990F05F82C()) && uParam8)
						{
							if (!func_90(iVar0))
							{
								func_74(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x28C1B9853548BD8E("CMN_HINT", iVar0))
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
				if (unk_0xD28EDDD3F7264249(uParam0->f_3) && !unk_0xD28EDDD3F7264249(iVar0))
				{
					if (((unk_0x7DB334F5F834726A(iParam1) && iVar1) && !unk_0x598A9E990F05F82C()) && uParam8)
					{
						if (!func_90(iVar0))
						{
							func_74(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x28C1B9853548BD8E("CMN_HINT", iVar0))
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
			if (!unk_0xD28EDDD3F7264249(sParam5))
			{
				if (func_90(sParam5))
				{
					unk_0x94724F7C938EBE34(1);
				}
			}
			if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
			{
				if (unk_0x0C4D70322C5AB4B5(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(3) == 3 || unk_0x819C3E64C255229B(3) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x496D383FB5E4FEC8(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(6) == 3 || unk_0x819C3E64C255229B(6) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(4) == 3 || unk_0x819C3E64C255229B(4) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA8023042566B2548(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(5) == 3 || unk_0x819C3E64C255229B(5) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD05DBB55CBEF6ACF(unk_0xA0081090911D13E5()))
				{
					if (unk_0x819C3E64C255229B(2) == 3 || unk_0x819C3E64C255229B(2) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9A86F9EDFD899454() == 3 || unk_0x9A86F9EDFD899454() == 4)
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
	if (func_88(unk_0xA0081090911D13E5()))
	{
		unk_0x5CEE5F34DA93AE97(unk_0xA0081090911D13E5());
	}
	if (unk_0xFA597181B01136F0())
	{
		unk_0x841EA440AD1F0294(1);
		unk_0xB3FF3FBDAFD0ADCF(0);
		unk_0x7C1793252FA472B6("HINT_CAM_SCENE");
		unk_0x33F96CD17F6BA7BD("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xFF4920BAFCB15F65("FocusOut", 0, 0);
			unk_0xAB16AADE80707D47(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0xDF658EB6CA91DFBC()
		{
			return 1;
		}
	}
	return 0;
}

int func_73(bool bParam0)
{
	switch (Global_35775)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101553.f_8904.f_100++;
			}
			return Global_101553.f_8904.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101553.f_8904.f_101++;
			}
			return Global_101553.f_8904.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101553.f_8904.f_102++;
			}
			return Global_101553.f_8904.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_74(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

int func_75(char* sParam0)
{
	if (!func_76(1, 1, 0))
	{
		if ((!unk_0x509383441597090D(sParam0) && func_90(sParam0)) || func_90("CMN_HINT"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		return 0;
	}
	switch (Global_35775)
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
		if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xC740F8182E7E9681())
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
	if (unk_0x04781D6F82022E77())
	{
		return 0;
	}
	if (Global_68125)
	{
		return 0;
	}
	if (unk_0xA96867DD0A63C62C(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52997)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
		{
			if (unk_0x0C4D70322C5AB4B5(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(3) == 3 || unk_0x819C3E64C255229B(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x496D383FB5E4FEC8(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(6) == 3 || unk_0x819C3E64C255229B(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD73333C5744EC59F(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(4) == 3 || unk_0x819C3E64C255229B(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA8023042566B2548(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(5) == 3 || unk_0x819C3E64C255229B(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD05DBB55CBEF6ACF(unk_0xA0081090911D13E5()))
			{
				if (unk_0x819C3E64C255229B(2) == 3 || unk_0x819C3E64C255229B(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9A86F9EDFD899454() == 3 || unk_0x9A86F9EDFD899454() == 4)
			{
				return 0;
			}
			if (unk_0x1D8A198427AB65AD())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_77()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

int func_78(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_79(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x912AD5A10E7633F0(uParam1, 0))
	{
		func_91(uParam0, 0, 0);
	}
	if (func_82(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x60F161681C368C4E(iParam1))
		{
			uVar0 = unk_0x90897FA118314142(iParam1);
			if (!unk_0x39FEE545B315414E(uVar0, 0))
			{
				if (unk_0x54F0AEFB11EA090A(iVar0))
				{
					if (!func_80())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x1F1602FD864AA4C1(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x841EA440AD1F0294(0);
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
	unk_0x7F06EF9578636ADC(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xD5DC2873808A9CB5(unk_0xA0081090911D13E5(), iParam1, -1, iVar3, iVar4);
	unk_0xFF4920BAFCB15F65("FocusIn", 0, 0);
	unk_0xC94C39C53546E775("HINT_CAM_SCENE");
	unk_0xAB16AADE80707D47(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xDF658EB6CA91DFBC();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_80()
{
	return func_81(unk_0x0C1D3C552325765B());
}

int func_81(var uParam0)
{
	if (unk_0x705BC1BB91F530B5(unk_0x21F191D9AFF98B5E(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_82(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_83(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xDF658EB6CA91DFBC() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
				{
					if (func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
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
			if ((unk_0xDF658EB6CA91DFBC() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
					{
						if (!func_87(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xDF658EB6CA91DFBC();
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
				if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
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
				if (!func_86(bParam1, bParam2, bParam3) || unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1) || unk_0x77B21D2C209C7D47(unk_0xA0081090911D13E5(), 2))
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
			if ((unk_0xDF658EB6CA91DFBC() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1))
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
					if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1) || func_84(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 1) || unk_0x77B21D2C209C7D47(unk_0xA0081090911D13E5(), 2))
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
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		if (!unk_0x8EFED6AE8FE72A0D(unk_0x0C1D3C552325765B()))
		{
			unk_0xABC36CFE4F3421A0(0, 140, 1);
			unk_0xABC36CFE4F3421A0(0, 80, 1);
			if (unk_0x7682E36A3D0D896F(0, 80))
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
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xABC36CFE4F3421A0(0, 80, 1);
		if (unk_0x16FD96008A4787C8())
		{
			if (unk_0x7682E36A3D0D896F(0, 80))
			{
				unk_0x841EA440AD1F0294(0);
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
	if (!unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		if (!unk_0x8EFED6AE8FE72A0D(unk_0x0C1D3C552325765B()))
		{
			unk_0xABC36CFE4F3421A0(0, 140, 1);
			unk_0xABC36CFE4F3421A0(0, 80, 1);
			if (unk_0xFEB2816B7220E998(0, 80) && unk_0xDF658EB6CA91DFBC() > Global_116)
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
	if (unk_0x39FEE545B315414E(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xABC36CFE4F3421A0(0, 80, 1);
		if (unk_0x16FD96008A4787C8())
		{
			if (unk_0xFEB2816B7220E998(0, 80) && unk_0xDF658EB6CA91DFBC() > Global_116)
			{
				unk_0x841EA440AD1F0294(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_88(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (unk_0x264883409423C6C3(iParam0))
		{
			if (unk_0x1F1B2B6E500380C5(unk_0x5293F3C38E4842B3(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x60F161681C368C4E(iParam0))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0x90897FA118314142(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x1FFA71644D1C7C16(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_89()
{
	unk_0x88B0F0DC270164B7(&Global_2314, 4);
}

bool func_90(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

void func_91(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x08BA6DD398CA197C(Global_2482149.f_4442, 26))
		{
			return;
		}
	}
	if (unk_0xFA597181B01136F0())
	{
		unk_0xB3FF3FBDAFD0ADCF(iParam2);
		unk_0x33F96CD17F6BA7BD("FocusIn");
		unk_0x7C1793252FA472B6("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xFF4920BAFCB15F65("FocusOut", 0, 0);
			unk_0xAB16AADE80707D47(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x841EA440AD1F0294(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xD28EDDD3F7264249(sVar0))
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xD28EDDD3F7264249(uParam0->f_3))
	{
		if (func_90(uParam0->f_3))
		{
			unk_0x94724F7C938EBE34(1);
		}
	}
	if (!unk_0xD28EDDD3F7264249(sVar0))
	{
		if (func_90(sVar0))
		{
			unk_0x94724F7C938EBE34(1);
		}
	}
}

int func_92()
{
	if (unk_0xD3FACCDA4D66AEAD(iLocal_96))
	{
		if (!unk_0x912AD5A10E7633F0(iLocal_96, 0))
		{
			if ((((((unk_0xC6FE0F623405BFA8(iLocal_96) < 300 || unk_0x34898726CD7A292C(iLocal_96) < 200f) || unk_0x601CCD1205C6523F(iLocal_96)) || (unk_0x3E474FAD80A0FADB(iLocal_96, 0, 0) && unk_0x3E474FAD80A0FADB(iLocal_96, 1, 0))) || (unk_0x3E474FAD80A0FADB(iLocal_96, 4, 0) && unk_0x3E474FAD80A0FADB(iLocal_96, 5, 0))) || (unk_0x3E474FAD80A0FADB(iLocal_96, 0, 0) && unk_0x3E474FAD80A0FADB(iLocal_96, 4, 0))) || (unk_0x3E474FAD80A0FADB(iLocal_96, 1, 0) && unk_0x3E474FAD80A0FADB(iLocal_96, 5, 0)))
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
	
	iLocal_96 = func_95(0);
	if (!unk_0x1F1B2B6E500380C5(iLocal_96, 0))
	{
		iLocal_96 = unk_0xE044C77D0FC9DB66(iLocal_88, Local_64, uLocal_73, 1, 1);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			unk_0x175E22227AEEF4D9(iLocal_96, iVar0, 1);
			iVar0++;
		}
		if (iLocal_85 != -1)
		{
			unk_0x175E22227AEEF4D9(iLocal_96, iLocal_85, 0);
		}
	}
	unk_0x90CB3242FBA5D01A(iLocal_96, 1);
	uLocal_102 = func_94(iLocal_96, 0, 0);
	if (iLocal_36 != 5 && iLocal_36 != 6)
	{
		if (iLocal_36 > 6)
		{
			unk_0xC2407AC016215F2D(iLocal_96, 0, 0, 0, 0, 1, 0, 0, 0);
			unk_0x7DEFCA77DEA2C174(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_96, 0, 0, 0);
		}
		func_34(sLocal_103, 7500, 1);
	}
	else
	{
		iLocal_90[0] = unk_0x667A2CFA1914073C(iLocal_96, 26, iLocal_86, -1, 1, 1);
		iLocal_90[1] = unk_0x667A2CFA1914073C(iLocal_96, 26, iLocal_86, 0, 1, 1);
		unk_0xD8C3303D0A49D05B("rghCriminal", &uLocal_119);
		unk_0xFDDE2C1A05E64390(5, uLocal_119, joaat("player"));
		iVar1 = 0;
		while (iVar1 < iLocal_90)
		{
			unk_0xFF5CE2ECB4FBD4A8(iLocal_90[iVar1], 1);
			unk_0x8942ADC0DB9F81E4(iLocal_90[iVar1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
			unk_0x65889F26F311FC55(iLocal_90[iVar1], uLocal_119);
			iVar1++;
		}
		unk_0x1F1428EF73399830(iLocal_90[0], iLocal_96, 25f, 786599);
		func_34("PMDL_REC", 7500, 1);
	}
	if (!unk_0x912AD5A10E7633F0(unk_0x525584039F375488(), 0))
	{
		iLocal_98 = unk_0x525584039F375488();
	}
	iLocal_38 = 1;
}

int func_94(var uParam0, bool bParam1, bool bParam2)
{
	return func_11(uParam0, !bParam1, bParam2);
}

int func_95(int iParam0)
{
	if (unk_0x1F1B2B6E500380C5(Global_100265.f_222[iParam0], 0))
	{
		unk_0x7B17650F15A8876D(Global_100265.f_222[iParam0], 1, 1);
		return Global_100265.f_222[iParam0];
	}
	return 0;
}

int func_96()
{
	if (unk_0xD3FACCDA4D66AEAD(iLocal_96))
	{
		if (unk_0x1F1B2B6E500380C5(iLocal_96, 0))
		{
			if (!unk_0x7298BA0C4D4A4C9E(iLocal_96, unk_0xA0081090911D13E5(), 300f, 300f, 300f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0xEB361B4BD195A4D3(iLocal_90[0]))
	{
		if (unk_0x16833EFAA58E63DB(uLocal_99[0]))
		{
			unk_0x0B57C567D698C373(&(uLocal_99[0]));
		}
	}
	return 0;
}

void func_97()
{
	unk_0x491067A8E906F22D(iLocal_88);
	unk_0x7BCE93123FE81E45("PMDL", 0);
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		unk_0x491067A8E906F22D(iLocal_87);
		unk_0x491067A8E906F22D(iLocal_89);
	}
	else if (iLocal_36 == 5 || iLocal_36 == 6)
	{
		unk_0x491067A8E906F22D(iLocal_86);
	}
	unk_0x3607936F13065720(joaat("benson"), 1);
	unk_0x3607936F13065720(joaat("pony2"), 1);
	if (unk_0x2C1B5A0D3E233FC3(iLocal_88) && unk_0x985A6C5313B2276C(0))
	{
		if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			if (unk_0x2C1B5A0D3E233FC3(iLocal_87) && unk_0x2C1B5A0D3E233FC3(iLocal_89))
			{
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 == 5 || iLocal_36 == 6)
		{
			if (unk_0x2C1B5A0D3E233FC3(iLocal_86))
			{
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 > 6)
		{
			if (unk_0xDD9B91529459212C("Deliveries", 0, -1))
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

void func_98()
{
	float fVar0;
	
	Local_64 = { func_100(func_102(), iLocal_36) };
	fLocal_73 = func_99(func_102(), iLocal_36);
	if (iLocal_36 > 6)
	{
		sLocal_103 = "PMDL_TRUCK";
		sLocal_104 = "PMDL_BTIM";
		sLocal_105 = "PMDL_BCKT";
		iLocal_88 = joaat("benson");
		iLocal_85 = 2;
	}
	if (func_102() == 10)
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
	else if (func_102() == 14)
	{
		Local_67 = { -2169.828f, 4277.365f, 47.9568f };
		fVar0 = unk_0x999A157665D69393(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_102() == 13)
	{
		Local_67 = { -323.356f, 6264.431f, 30.4463f };
		fVar0 = unk_0x999A157665D69393(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_102() == 12)
	{
		Local_67 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = unk_0x999A157665D69393(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (func_102() == 11)
	{
		Local_67 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = unk_0x999A157665D69393(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	iLocal_81 = 0;
	iLocal_76 = 1;
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
	return Global_100265.f_20;
}

int func_103()
{
	return func_104(Global_100265.f_20, Global_100265.f_29);
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
	unk_0x3607936F13065720(joaat("benson"), 0);
	unk_0x3607936F13065720(joaat("pony2"), 0);
	unk_0xAE8BF3C10F9D171E();
	if (iLocal_77)
	{
		if (!unk_0x912AD5A10E7633F0(iLocal_98, 0))
		{
			func_106(iLocal_98, 0, 145);
		}
		unk_0x79B635BB52BBA4C1(unk_0x0C1D3C552325765B());
		func_91(&uLocal_106, 0, 0);
	}
	unk_0x78C587487CD40B92();
}

int func_106(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x31A36F72D3ABDCD7(iParam0, &uVar0);
		if (!unk_0x509383441597090D(uVar1))
		{
			if (unk_0x3BB8D1C5FAAB25B3(sVar1) == unk_0x3BB8D1C5FAAB25B3("vehicle_gen_controller"))
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
		iVar0 = unk_0x8FD32443A080784B(iParam0, -1, 0);
		if (!unk_0xD3FACCDA4D66AEAD(iVar0))
		{
			iVar0 = unk_0xA89799E38057BB0B(iParam0, -1);
		}
		if (unk_0xD3FACCDA4D66AEAD(iVar0) && !unk_0xEB361B4BD195A4D3(iVar0))
		{
			if (unk_0x705BC1BB91F530B5(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101553.f_1991.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x705BC1BB91F530B5(iParam0) == Global_101553.f_18972.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x509383441597090D(&(Global_101553.f_18972.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x28C1B9853548BD8E(unk_0x65FDE11354F074FF(iParam0), &(Global_101553.f_18972.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101553.f_18972.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101553.f_18972.f_5592[iVar1] = iVar2;
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
		if (unk_0x705BC1BB91F530B5(iParam0) == Global_101553.f_18972.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x509383441597090D(&(Global_101553.f_18972.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x28C1B9853548BD8E(unk_0x65FDE11354F074FF(iParam0), &(Global_101553.f_18972.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101553.f_18972.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101553.f_18972.f_5590 = iParam1;
	Global_69351 = iParam0;
	Global_101553.f_18972.f_5588 = 1;
	func_108(iParam0, &(Global_101553.f_18972.f_5510));
}

void func_108(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		func_111(uParam1);
		uParam1->f_66 = unk_0x705BC1BB91F530B5(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x65FDE11354F074FF(iParam0), 16);
		*uParam1 = unk_0x35FA749428DD4A65(iParam0);
		unk_0xCAD2F245E2AC499C(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x86DEF98E95F667ED(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xC9061BC15843FFE0(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xB62C5DACDE4A3153(iParam0);
		uParam1->f_67 = unk_0xB7F7AFF78B9F9EF6(iParam0);
		uParam1->f_69 = unk_0x488810150C919B35(iParam0);
		uParam1->f_70 = unk_0x573723AAC88FEB61(iParam0);
		unk_0x6F1B26095D81AF5F(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x9072FD06FAA1F250(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x00808205EBA044E7(iParam0, 2))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 28);
		}
		if (unk_0x00808205EBA044E7(iParam0, 3))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 29);
		}
		if (unk_0x00808205EBA044E7(iParam0, 0))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 30);
		}
		if (unk_0x00808205EBA044E7(iParam0, 1))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xE7D026C4E15E6E7F(iParam0, 0))
		{
			uParam1->f_68 = unk_0x851DDA9C534FCA13(iParam0);
		}
		if (unk_0x1E3C80E7C4B8041B(uParam1->f_66))
		{
			if (unk_0xCCB7105CE933D5AB(iParam0))
			{
				switch (unk_0xB5BA4B2B27FE3A39(iParam0))
				{
					case 2:
					case 0:
						unk_0x09C86C0C5CA26B1E(&(uParam1->f_77), 23);
						unk_0x88B0F0DC270164B7(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x09C86C0C5CA26B1E(&(uParam1->f_77), 23);
						unk_0x09C86C0C5CA26B1E(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x88B0F0DC270164B7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x88B0F0DC270164B7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xA2FDA679363F53A2(iParam0))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 9);
		}
		if (unk_0x7DB73C3712A1EDD0(iParam0))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 10);
		}
		if (unk_0x2DE691A863102557(iParam0))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 13);
			unk_0xD7BF27AD958D4143(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xFC480E19F9385A5D(iParam0))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 12);
		}
		func_110(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDC21CA8351C75F1F(iParam0, iVar0 + 1))
			{
				unk_0x88B0F0DC270164B7(&(uParam1->f_77), func_109(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA24589903C9634D8(iParam0, 0))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_77), 11);
		}
		if (unk_0x4184E6D274FCBFF1(iParam0, "IgnoredByQuickSave") && unk_0x86DCF0A510F96A88(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_77), 27);
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
	
	if (!unk_0x1F1B2B6E500380C5(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x141913B932CAECD6(*iParam0) == 0)
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
			if (unk_0x11C052A5C8A50EE1(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xADEACD5FDE0D1FDE(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xA5E33613E078F35F(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xA5E33613E078F35F(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_111(var uParam0)
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

int func_112(int iParam0)
{
	if ((((((((((!unk_0xD3FACCDA4D66AEAD(iParam0) || !unk_0x1F1B2B6E500380C5(iParam0, 0)) || func_126(iParam0, 0, 0)) || func_126(iParam0, 1, 0)) || func_126(iParam0, 2, 0)) || func_125(iParam0) != 145) || func_124(iParam0)) || func_123(iParam0)) || func_122(iParam0)) || func_121(iParam0)) || !func_113(unk_0x705BC1BB91F530B5(iParam0)))
	{
		if (func_123(iParam0))
		{
		}
		if (func_123(iParam0))
		{
		}
		if (func_126(iParam0, 0, 0))
		{
		}
		if (func_126(iParam0, 1, 0))
		{
		}
		if (func_126(iParam0, 2, 0))
		{
		}
		if (func_125(iParam0) != 145)
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
	if (!func_114(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xE3C6E31B7236489F(iParam0) || unk_0x1E3C80E7C4B8041B(iParam0)) || unk_0xFC4346F9DE2AB4AE(iParam0)) || unk_0x11F6DEA60A2AE510(iParam0))
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

int func_114(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x30A854527925CD1E(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0xA86CA03D9749EEB3())) || (iParam0 == joaat("buffalo3") && !unk_0xA86CA03D9749EEB3())) || (iParam0 == joaat("gauntlet2") && !unk_0xA86CA03D9749EEB3())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0xA86CA03D9749EEB3())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_120())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x8BB2B23AB3E97230())
		{
			if (unk_0x0722C0B45A965936(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x993E467B1CA23C2D(Var1.f_0))
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
		if ((((!func_119() && !func_118()) && !func_117()) && !func_116()) && !func_120())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x15B0CAB107CFCDE1() || unk_0x955B8C8F89CC3AC0()) || unk_0xD95D58B9AAC86D55())
		{
		}
		else if (!func_117())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_115(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2471234)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x39E54E7BC7452169();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5415 && !Global_262145.f_11342) && iVar1 < Global_262145.f_11343)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12154 && iVar1 < Global_262145.f_12166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12150 && iVar1 < Global_262145.f_12162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12151 && iVar1 < Global_262145.f_12163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12152 && iVar1 < Global_262145.f_12164)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12153 && iVar1 < Global_262145.f_12165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12155 && iVar1 < Global_262145.f_12167)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12156 && iVar1 < Global_262145.f_12159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12157 && iVar1 < Global_262145.f_12160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12158 && iVar1 < Global_262145.f_12161)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14731 && iVar1 < Global_262145.f_14696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14726 && iVar1 < Global_262145.f_14691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14730 && iVar1 < Global_262145.f_14695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14729 && iVar1 < Global_262145.f_14694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14723 && iVar1 < Global_262145.f_14688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14724 && iVar1 < Global_262145.f_14689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14727 && iVar1 < Global_262145.f_14692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14728 && iVar1 < Global_262145.f_14693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14725 && iVar1 < Global_262145.f_14690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14733 && iVar1 < Global_262145.f_14698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14734 && iVar1 < Global_262145.f_14699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14722 && iVar1 < Global_262145.f_14687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14721 && iVar1 < Global_262145.f_14686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14720 && iVar1 < Global_262145.f_14685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14732 && iVar1 < Global_262145.f_14697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14735 && iVar1 < Global_262145.f_14700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14736 && iVar1 < Global_262145.f_14701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14737 && iVar1 < Global_262145.f_14702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14738 && iVar1 < Global_262145.f_14703)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_14884 && iVar1 < Global_262145.f_14906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_14885 && iVar1 < Global_262145.f_14907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_14886 && iVar1 < Global_262145.f_14908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_14888 && iVar1 < Global_262145.f_14909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_14889 && iVar1 < Global_262145.f_14910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_14890 && iVar1 < Global_262145.f_14911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_14891 && iVar1 < Global_262145.f_14912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_14892 && iVar1 < Global_262145.f_14913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_14893 && iVar1 < Global_262145.f_14914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_14894 && iVar1 < Global_262145.f_14915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_14895 && iVar1 < Global_262145.f_14916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_14896 && iVar1 < Global_262145.f_14917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_14897 && iVar1 < Global_262145.f_14918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_14903 && iVar1 < Global_262145.f_14925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_14900 && iVar1 < Global_262145.f_14921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_14901 && iVar1 < Global_262145.f_14922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_14902 && iVar1 < Global_262145.f_14923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_14887 && iVar1 < Global_262145.f_14924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_14904 && iVar1 < Global_262145.f_14926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_14898 && iVar1 < Global_262145.f_14919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_14899 && iVar1 < Global_262145.f_14920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_14905 && iVar1 < Global_262145.f_14927)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_116()
{
	return 0;
}

int func_117()
{
	return 1;
}

int func_118()
{
	return 1;
}

int func_119()
{
	if (unk_0x6E373DDF41F95D44(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_120()
{
	var uVar0;
	
	if (unk_0x446ED6C2B9B18A21())
	{
		if (unk_0x941A660B39C95F30())
		{
			if (unk_0x6FC368894467C692())
			{
				unk_0x8A3351ECF43DB941(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x88B0F0DC270164B7(&uVar0, 2);
				unk_0x88B0F0DC270164B7(&uVar0, 4);
				unk_0x88B0F0DC270164B7(&uVar0, 6);
				unk_0x88B0F0DC270164B7(&Global_25, 2);
				unk_0x88B0F0DC270164B7(&Global_25, 4);
				unk_0x88B0F0DC270164B7(&Global_25, 6);
				unk_0x10CE8769EE2626C7(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x3F59EA61B56AFBC2())
				{
					uVar0 = unk_0x680A5FBB1F20F775(866);
					unk_0x88B0F0DC270164B7(&uVar0, 0);
					unk_0xDA842F3F06329D8C(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138925 == 2)
	{
		return 1;
	}
	else if (Global_138925 == 3)
	{
		return 0;
	}
	if (unk_0x3F59EA61B56AFBC2())
	{
		if (unk_0x08BA6DD398CA197C(unk_0x680A5FBB1F20F775(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x705BC1BB91F530B5(iParam0);
	uVar1 = unk_0x65FDE11354F074FF(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x28C1B9853548BD8E(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_114(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD3FACCDA4D66AEAD(Global_89100[iVar0]))
		{
			if (Global_89100[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_123(int iParam0)
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0) && unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD3FACCDA4D66AEAD(Global_89070[iVar0]) && unk_0x1F1B2B6E500380C5(Global_89070[iVar0], 0))
			{
				if (Global_89070[iVar0] == iParam0 && unk_0x705BC1BB91F530B5(Global_89070[iVar0]) == unk_0x705BC1BB91F530B5(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[24]))
	{
		if (iParam0 == Global_68446.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD3FACCDA4D66AEAD(Global_68446.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68446.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return 145;
	}
	if (!unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD3FACCDA4D66AEAD(Global_89070[iVar0]))
		{
			if (Global_89070[iVar0] == iParam0)
			{
				return Global_89080[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_126(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD3FACCDA4D66AEAD(iParam0) || !unk_0x1F1B2B6E500380C5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_127(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x08BA6DD398CA197C(Global_101553.f_6084[iVar9], 0))
		{
			if (unk_0xE994FC7025A2258D(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_128(int iParam0)
{
	Global_100265.f_22 = iParam0;
}

