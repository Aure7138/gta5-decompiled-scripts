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
	unk_0x21C966D49C5B368B(1);
	if (unk_0x78BF2001491914AC(3))
	{
		func_133(2);
		func_108();
	}
	iLocal_36 = func_106();
	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (!iLocal_76)
				{
					func_101();
				}
				else
				{
					func_100();
				}
				if (bLocal_75)
				{
					iLocal_77 = 1;
					iLocal_37 = 1;
				}
				break;
			
			case 1:
				if (!func_99())
				{
					switch (iLocal_38)
					{
						case 0:
							func_96();
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
	func_133(2);
	func_108();
}

void func_2()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(iLocal_96))
	{
		if (unk_0x7FAC45D56235AB39(iLocal_96, 0))
		{
			iVar0 = 200;
			iVar1 = (unk_0xE86A53C202B21FAB(iLocal_96) - 800);
			if (unk_0x9BAC506645B22467(iLocal_96))
			{
				unk_0x67E5DE1657F60AC6(iLocal_96, (unk_0xE86A53C202B21FAB(iLocal_96) - 5));
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
		Global_1353013.f_1 = 1;
		func_5(0, iVar0);
		Global_1353013.f_1093[iVar0] = uParam0;
		Global_1353013.f_1093.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1353013.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1353013.f_1093.f_194[iVar0] = uParam3;
		Global_1353013.f_1093.f_183[iVar0] = uParam4;
		Global_1353013.f_1093.f_216[iVar0] = uParam5;
		Global_1353013.f_1093.f_227[iVar0 /*3*/] = fParam6;
		Global_1353013.f_1093.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1353013.f_1093.f_258[iVar0] = iParam8;
		Global_1353013.f_1093.f_269[iVar0] = uParam9;
		Global_1353013.f_1093.f_312[iVar0] = iParam10;
		Global_1353013.f_1093.f_323[iVar0] = iParam11;
		Global_1353013.f_1093.f_334[iVar0] = iParam12;
		Global_1353013.f_1093.f_345[iVar0] = iParam13;
		Global_1353013.f_1088 = 1;
		Global_1353013.f_1093.f_356[iVar0] = iParam14;
		Global_1353013.f_1093.f_367[iVar0] = iParam15;
		Global_1353013.f_1093.f_378[iVar0] = iParam16;
		Global_1353013.f_1093.f_389[iVar0] = iParam17;
		Global_1353013.f_1093.f_400[iVar0] = iParam18;
		Global_1353013.f_1093.f_411[iVar0] = iParam19;
		Global_1353013.f_1093.f_422[iVar0] = iParam20;
		Global_1353013.f_1093.f_433[iVar0] = iParam21;
		Global_1353013.f_1093.f_444[iVar0] = iParam22;
		Global_1353013.f_1093.f_455[iVar0] = iParam23;
	}
}

void func_5(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1353013.f_5941[iParam0]), iParam1);
}

bool func_6(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1353013.f_5941[iParam0], iParam1);
}

void func_7()
{
	int iVar0;
	
	iVar0 = (iLocal_80 - unk_0x3732B96D7A1859B4());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (unk_0x3732B96D7A1859B4() >= iLocal_84)
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
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 10000))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 1:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 9000))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 2:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 8000))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 3:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 7000))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 4:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 6000))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 5:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 5000))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 6:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 4500))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 7:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 4000))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 8:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 3500))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 9:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 3000))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 10:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 2500))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 11:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 2000))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 12:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 1500))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 13:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 1000))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 14:
			if (unk_0x3732B96D7A1859B4() >= (iLocal_80 - 500))
			{
				unk_0x08BE237DBCD9CBD9(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 15:
			if (unk_0x3732B96D7A1859B4() >= iLocal_80)
			{
				unk_0x08BE237DBCD9CBD9(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_81++;
			}
			break;
		
		case 16:
			break;
	}
	if (unk_0x3732B96D7A1859B4() >= iLocal_80)
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
		Global_1353013.f_1 = 1;
		func_5(7, iVar0);
		Global_1353013.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1353013.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_4366.f_172[iVar0] = iParam2;
		Global_1353013.f_4366.f_216[iVar0] = iParam3;
		Global_1353013.f_4366.f_183[iVar0] = iParam4;
		Global_1353013.f_4366.f_194[iVar0] = iParam5;
		Global_1353013.f_4366.f_249[iVar0] = iParam6;
		Global_1353013.f_4366.f_260[iVar0] = iParam7;
		Global_1353013.f_4366.f_205[iVar0] = iParam8;
		Global_1353013.f_4366.f_314[iVar0] = iParam9;
		Global_1353013.f_4366.f_325[iVar0] = iParam10;
		Global_1353013.f_4366.f_357[iVar0] = iParam11;
		Global_1353013.f_4366.f_238[iVar0] = iParam12;
		Global_1353013.f_4366.f_271[iVar0] = iParam13;
		Global_1353013.f_4366.f_368[iVar0] = iParam14;
		Global_1353013.f_4366.f_379[iVar0] = iParam15;
		Global_1353013.f_4366.f_390[iVar0] = iParam16;
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
				if (!unk_0x769F0F6444C1ABE0(iLocal_93[iVar0]))
				{
					if (!unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Local_64, 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0x3406B7CA9E05661E(unk_0x0FFED3E94261A832(), 2, 0);
						unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
						unk_0x219804CBDE138C4C(unk_0x0FFED3E94261A832(), 0f);
						iLocal_78 = 1;
					}
				}
			}
			else if (!unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_93[iVar0]))
				{
					unk_0xCD6FB688ED8B6284(iLocal_93[iVar0], unk_0x2A5EB8B0FE590B91(), 1000f, -1, 0, 0);
					unk_0x015B50BC21C88C8C(iLocal_93[iVar0], 1);
					unk_0x6C559FCFFD2365CB(&(iLocal_93[iVar0]));
				}
				if (unk_0x2137828D03306CAF(uLocal_97))
				{
					unk_0xFECCD8AF38671477(&iLocal_97);
				}
			}
			iVar0++;
		}
	}
	if (func_21(&uLocal_39, Local_67, Global_22, 1, iLocal_96, sLocal_104, "", sLocal_105, 1, 0, 1, -1))
	{
		func_19(iLocal_96, 10.5f, 2, 1056964608, 0, 1, 0);
		unk_0x8F2751B831A7B303(unk_0x2A5EB8B0FE590B91(), 2000, 0);
		unk_0xBB7DA429845F53D4(iLocal_96, 0);
		func_14(&uLocal_39, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_90)
	{
		if (!unk_0x769F0F6444C1ABE0(iLocal_90[iVar1]))
		{
			if (!unk_0xBDD3EABACAB97D09(uLocal_99[iVar1]))
			{
				uLocal_99[iVar1] = func_10(iLocal_90[iVar1], 1, 145);
				unk_0x219EE6A7B599E7DC(&uLocal_120);
				unk_0x8F2751B831A7B303(0, 0, 0);
				unk_0xDD0413EAB0ADDE6A(0, unk_0x2A5EB8B0FE590B91(), 0, 16);
				unk_0xBD718C5BA2122192(uLocal_120);
				unk_0x234E551BB8E8813B(iLocal_90[iVar1], uLocal_120);
				unk_0xEDD36C58DDE03C8F(&uLocal_120);
				unk_0x015B50BC21C88C8C(iLocal_90[iVar1], 1);
			}
			if (!unk_0x2860DA9980AC4109(iLocal_90[iVar1], unk_0x2A5EB8B0FE590B91(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (unk_0xBDD3EABACAB97D09(uLocal_99[iVar1]))
				{
					unk_0x789C84F1B8496AD0(&(uLocal_99[iVar1]));
				}
				unk_0xCD6FB688ED8B6284(iLocal_90[iVar1], unk_0x2A5EB8B0FE590B91(), 1000f, -1, 0, 0);
				unk_0x015B50BC21C88C8C(iLocal_90[iVar1], 1);
				unk_0x6C559FCFFD2365CB(&(iLocal_90[iVar1]));
			}
		}
		else if (unk_0xBDD3EABACAB97D09(uLocal_99[iVar1]))
		{
			unk_0x789C84F1B8496AD0(&(uLocal_99[iVar1]));
		}
		iVar1++;
	}
}

var func_10(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_11(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xBDD3EABACAB97D09(uVar0)) && unk_0x9418F0AE636D9770(&(Global_103236.f_27831[iParam2 /*29*/].f_3)))
	{
		unk_0xA6B842B66643C116(uVar0, &(Global_103236.f_27831[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x2137828D03306CAF(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x9E3A324AB806771E(iParam0);
	if (unk_0x82DF3B947FC3E281(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_12(unk_0x591AF4C50B46E014(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
		}
		else
		{
			unk_0xEB5D36079067EBA5(uVar0, 2);
		}
	}
	else if (unk_0xEE46DE31F43DCAF1(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_12(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
		unk_0xE1DA6FCEE4F2BEEC(uVar0, bParam1);
	}
	else if (unk_0xD277B6800A356CC0(iParam0))
	{
		unk_0x0B584E556B01101F(uVar0, func_12(unk_0x591AF4C50B46E014(), 0.7f, 0.7f));
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
	func_133(1);
	func_108();
}

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_18(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
		{
			unk_0x789C84F1B8496AD0(&(uParam0->f_1[iVar0]));
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
			unk_0x507FE690B1271947(&(uParam0->f_13), iVar0);
			unk_0x507FE690B1271947(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		unk_0x789C84F1B8496AD0(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
		{
			unk_0x76DB40064D4A807D(uParam0->f_17[iVar0], 1);
			unk_0x1EA7D129CB42F133(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x31AC59B7C21A2047(uParam0->f_17[iVar0], 32, 1);
				unk_0x31AC59B7C21A2047(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x31AC59B7C21A2047(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_15()) && uParam0->f_17[iVar0] != unk_0x2A5EB8B0FE590B91())
				{
					unk_0x799D2CB4039F4804(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 29))
			{
				unk_0xE293CCEE24FD3DDA(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		unk_0x76DB40064D4A807D(unk_0x2A5EB8B0FE590B91(), 1);
		unk_0x1EA7D129CB42F133(unk_0x2A5EB8B0FE590B91(), 1);
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (bParam2)
		{
			unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_15()
{
	return unk_0x60A7F9A542DD09AD(unk_0x8A41C463063AFC8E());
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x507FE690B1271947(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x507FE690B1271947(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x507FE690B1271947(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x507FE690B1271947(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x507FE690B1271947(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x507FE690B1271947(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0)
{
	if (unk_0xBDD3EABACAB97D09(uParam0->f_5))
	{
		unk_0x789C84F1B8496AD0(&(uParam0->f_5));
	}
}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x4E6996123FABDB93(0, 71, 1);
	unk_0x4E6996123FABDB93(0, 72, 1);
	unk_0x4E6996123FABDB93(0, 76, 1);
	unk_0x4E6996123FABDB93(0, 73, 1);
	unk_0x4E6996123FABDB93(0, 59, 1);
	unk_0x4E6996123FABDB93(0, 60, 1);
	if (bParam5)
	{
		unk_0x4E6996123FABDB93(0, 75, 1);
	}
	unk_0x4E6996123FABDB93(0, 80, 1);
	if (!bParam6)
	{
		unk_0x4E6996123FABDB93(0, 69, 1);
		unk_0x4E6996123FABDB93(0, 70, 1);
		unk_0x4E6996123FABDB93(0, 68, 1);
	}
	unk_0x4E6996123FABDB93(0, 74, 1);
	unk_0x4E6996123FABDB93(0, 86, 1);
	unk_0x4E6996123FABDB93(0, 81, 1);
	unk_0x4E6996123FABDB93(0, 82, 1);
	unk_0x4E6996123FABDB93(0, 138, 1);
	unk_0x4E6996123FABDB93(0, 136, 1);
	unk_0x4E6996123FABDB93(0, 114, 1);
	unk_0x4E6996123FABDB93(0, 107, 1);
	unk_0x4E6996123FABDB93(0, 110, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 89, 1);
	unk_0x4E6996123FABDB93(0, 87, 1);
	unk_0x4E6996123FABDB93(0, 88, 1);
	unk_0x4E6996123FABDB93(0, 113, 1);
	unk_0x4E6996123FABDB93(0, 115, 1);
	unk_0x4E6996123FABDB93(0, 116, 1);
	unk_0x4E6996123FABDB93(0, 117, 1);
	unk_0x4E6996123FABDB93(0, 118, 1);
	unk_0x4E6996123FABDB93(0, 119, 1);
	unk_0x4E6996123FABDB93(0, 131, 1);
	unk_0x4E6996123FABDB93(0, 132, 1);
	unk_0x4E6996123FABDB93(0, 123, 1);
	unk_0x4E6996123FABDB93(0, 126, 1);
	unk_0x4E6996123FABDB93(0, 129, 1);
	unk_0x4E6996123FABDB93(0, 130, 1);
	unk_0x4E6996123FABDB93(0, 133, 1);
	unk_0x4E6996123FABDB93(0, 134, 1);
	unk_0xB5924913D8350E63();
	func_20(iParam0);
	if ((unk_0x3732B96D7A1859B4() - Global_29) > 500)
	{
		unk_0x8231579045104F87(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x3732B96D7A1859B4();
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		if (unk_0x3FEF699D13BCC798(unk_0xD2660BAC03EB7433(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_20(int iParam0)
{
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		if (unk_0x317EBF76D4EFACBF(iParam0))
		{
			if (unk_0xBCE28DDC8BEC619D(iParam0))
			{
				unk_0xE3F9604466DA5BF0(iParam0, 0);
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
		if (unk_0x0B21CC5276C2CE1B())
		{
			bVar1 = false;
			if (unk_0x7FAC45D56235AB39(iParam18, 0))
			{
				if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iParam18, 0))
				{
					unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 3);
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 9))
					{
						unk_0x507FE690B1271947(&(uParam0->f_13), 4);
					}
					if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 23))
					{
						unk_0x507FE690B1271947(&(uParam0->f_13), 23);
					}
					unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_41(uParam0, iParam29))
				{
					unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 3);
					if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 9))
					{
						unk_0x507FE690B1271947(&(uParam0->f_13), 4);
					}
					unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 9);
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
				if (bParam26 && unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
				{
					if (unk_0xBDD3EABACAB97D09(uParam0->f_5))
					{
						unk_0x789C84F1B8496AD0(&(uParam0->f_5));
						func_43(sParam19);
					}
					if (unk_0xBDD3EABACAB97D09(*uParam0))
					{
						unk_0x789C84F1B8496AD0(uParam0);
					}
					if ((!func_37(uParam0, 1) && !func_36(uParam0)) && !unk_0xAA4F14DA15DB0B51(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 0);
						unk_0x507FE690B1271947(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0x507FE690B1271947(&(uParam0->f_13), 0);
						unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 1);
					}
					if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 1))
					{
						if (!func_37(uParam0, 1))
						{
							if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x507FE690B1271947(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0xBDD3EABACAB97D09(uParam0->f_5))
					{
						if (unk_0xBDD3EABACAB97D09(*uParam0))
						{
							unk_0x789C84F1B8496AD0(uParam0);
						}
						uParam0->f_5 = func_31(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0x9FD1808EF916E312(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_30(uParam0->f_5, uParam0);
						}
					}
					else if (!func_29(Var3, unk_0x052304A1A2560A55(uParam0->f_5), 0.1f, 0))
					{
						unk_0xF1194645A0CA23EC(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_30(uParam0->f_5, uParam0);
						}
					}
					if (!func_37(uParam0, 2))
					{
						if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 2))
						{
							func_34(uParam0, sParam19, 0);
							unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 13))
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
						unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x9A46207BB68ED2F0(unk_0x2A5EB8B0FE590B91(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x7DDA81F38FB30F23(unk_0x2A5EB8B0FE590B91(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
									if (!unk_0x5B9B499C707C2A95(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x5B9B499C707C2A95(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar2], func_15()) || !func_27(uParam0->f_17[iVar2], 1))
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
			else if (unk_0x2137828D03306CAF(iParam18))
			{
				if ((bParam26 && unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0)) && (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 9) && !unk_0xAA4F14DA15DB0B51(uParam0->f_13, 22)))
				{
					func_43(sParam24);
					func_43(sParam27);
					if (unk_0xBDD3EABACAB97D09(uParam0->f_5) || unk_0xBDD3EABACAB97D09(*uParam0))
					{
						unk_0x789C84F1B8496AD0(&(uParam0->f_5));
						unk_0x789C84F1B8496AD0(uParam0);
						func_43(sParam19);
					}
					if ((!func_37(uParam0, 1) && !func_36(uParam0)) && !unk_0xAA4F14DA15DB0B51(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_34(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 0);
						unk_0x507FE690B1271947(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 0))
					{
						func_43("LOSE_WANTED");
						unk_0x507FE690B1271947(&(uParam0->f_13), 0);
						unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 1);
					}
					if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 1))
					{
						if (!func_37(uParam0, 1))
						{
							if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[0]))
							{
								func_32(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x507FE690B1271947(&(uParam0->f_13), 1);
						}
					}
					if (unk_0x7FAC45D56235AB39(iParam18, 0))
					{
						if (!unk_0xBDD3EABACAB97D09(*uParam0))
						{
							if (unk_0xBDD3EABACAB97D09(uParam0->f_5))
							{
								unk_0x789C84F1B8496AD0(&(uParam0->f_5));
								func_43(sParam19);
							}
							*uParam0 = func_23(iParam18, 0, 0);
							unk_0x929538D619711815(*uParam0, 2);
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 4))
							{
								func_30(*uParam0, uParam0);
							}
						}
						if (!func_37(uParam0, 2))
						{
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 3))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 3);
								unk_0x507FE690B1271947(&(uParam0->f_13), 4);
							}
							else if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 9))
							{
								if (!unk_0x47988E04F8E2F0AD(sParam27))
								{
									if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 4))
									{
										func_34(uParam0, sParam27, 0);
										unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 4))
								{
									func_34(uParam0, sParam24, 0);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 4);
								}
								if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 23))
								{
									if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[0]))
									{
										func_32(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xBDD3EABACAB97D09(uParam0->f_5))
				{
					unk_0x789C84F1B8496AD0(&(uParam0->f_5));
					func_43(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_37(uParam0, 2))
						{
							if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
							{
								if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x895FB9FE885E36ED(0, iVar8);
									if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar9]))
									{
										func_32(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_34(uParam0, "MORE_SEATS", 0);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 3))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 3);
								unk_0x507FE690B1271947(&(uParam0->f_13), 4);
							}
							else if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 4))
							{
								if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 9))
								{
									func_34(uParam0, sParam27, 0);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_37(uParam0, 2))
					{
						if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 3))
						{
							func_34(uParam0, sParam24, 0);
							unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 3);
							unk_0x507FE690B1271947(&(uParam0->f_13), 4);
						}
						else if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 9))
						{
							if (!unk_0x47988E04F8E2F0AD(sParam27))
							{
								if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 4))
								{
									func_34(uParam0, sParam27, 0);
									unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 4))
							{
								func_34(uParam0, sParam24, 0);
								unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 0))
		{
			unk_0x507FE690B1271947(&(uParam0->f_13), 0);
		}
		func_43(sParam19);
		func_43(sParam24);
		func_43(sParam27);
		func_43(sParam24);
		func_43("LOSE_WANTED");
		if (unk_0xBDD3EABACAB97D09(uParam0->f_5))
		{
			unk_0x789C84F1B8496AD0(&(uParam0->f_5));
		}
		if (unk_0xBDD3EABACAB97D09(*uParam0))
		{
			unk_0x789C84F1B8496AD0(uParam0);
		}
	}
	unk_0x507FE690B1271947(&(uParam0->f_13), 11);
	unk_0x507FE690B1271947(&(uParam0->f_13), 12);
	return 0;
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_24(var uParam0)
{
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 12))
	{
		if (func_26(unk_0x2A5EB8B0FE590B91()))
		{
			if (func_25(1, 0, 1) || unk_0xAA4F14DA15DB0B51(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_25(1, 0, 1) || unk_0xAA4F14DA15DB0B51(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_25(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xDDA1B42A28EFD32F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
		{
			return 0;
		}
		iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
		if (bParam0)
		{
			if (unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) != unk_0x2A5EB8B0FE590B91())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA9A04898798AE9E6(iVar0, 0))
		{
			if (unk_0x3A564E53FCAA6917(iVar0) < 0.95f || unk_0x3A564E53FCAA6917(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x08F7FBC16F351FEE(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!unk_0x30B90655507F26E3(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)
{
	float fVar0;
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		fVar0 = unk_0xD2660BAC03EB7433(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()) && iParam1)
		{
			if (func_28(unk_0x2A5EB8B0FE590B91(), iParam0))
			{
				unk_0xD3C70F0B396F74BF(func_15(), 50f);
				return 1;
			}
		}
		else if (unk_0xE7EA59D3048D0B8F(iParam0, func_15()))
		{
			unk_0xD3C70F0B396F74BF(func_15(), 50f);
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
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0xB1C4356ECEE878FE(iParam0))
		{
			iVar0 = unk_0x0C20E539D876C5B3(iParam0, 0);
			if (unk_0x7FAC45D56235AB39(iVar0, 0))
			{
				if (!unk_0x769F0F6444C1ABE0(iParam1))
				{
					if (unk_0xF8ED2D0629FE764D(iParam1, iVar0))
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
		if (unk_0x3FEF699D13BCC798((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x3FEF699D13BCC798((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x3FEF699D13BCC798((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x3FEF699D13BCC798((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x3FEF699D13BCC798((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_30(var uParam0, var uParam1)
{
	if (unk_0xBDD3EABACAB97D09(uParam0))
	{
		if (unk_0xBDD3EABACAB97D09(uParam1->f_6))
		{
			unk_0xD42DEAFD12809447(uParam1->f_6, 0);
		}
		unk_0x765A2A874BCB30A7(0);
		unk_0xC621FE33C5D99948();
		uParam1->f_6 = uParam0;
		unk_0xD42DEAFD12809447(uParam0, 1);
	}
}

var func_31(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x9EDB165CAADCAB2C(Param0);
	unk_0x0B584E556B01101F(uVar0, func_12(unk_0x591AF4C50B46E014(), 1f, 1f));
	unk_0xD42DEAFD12809447(uVar0, iParam3);
	return uVar0;
}

void func_32(var uParam0, char* sParam1, int iParam2)
{
	unk_0x430053236FA97FB8(uParam0, sParam1, func_33(iParam2), 1);
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
		if (!unk_0x47988E04F8E2F0AD(sParam1))
		{
			if (!unk_0x35302CD5A5D37EED(sParam1, ""))
			{
				func_35(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x3732B96D7A1859B4();
}

void func_35(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x63EE614B6594E772(sParam0);
	unk_0x17C5AB14FA142F36(iParam1, 1);
}

int func_36(var uParam0)
{
	if (!unk_0x769F0F6444C1ABE0(uParam0->f_16))
	{
		if (unk_0x7C8D4D8A617D31D0(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_37(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x53461A7B49FA20A0())
	{
		if (unk_0x5CA780C6DF42F0B0())
		{
			return 1;
		}
		if (func_40(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x53461A7B49FA20A0())
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
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x3732B96D7A1859B4();
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
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
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
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x2137828D03306CAF(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xCBA4F77BB9D2F115(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xB98B8EFF8C77CE6F(iParam0, 1))
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
				if (!unk_0xB98B8EFF8C77CE6F(iParam0, 1))
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
	if (!unk_0x47988E04F8E2F0AD(sParam0))
	{
		unk_0x465D8BC4210558AF(sParam0);
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
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
		{
			if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 29) && !unk_0xAA4F14DA15DB0B51(uParam0->f_13, 28))
			{
				if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
				{
					unk_0xE293CCEE24FD3DDA(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 29) && unk_0xAA4F14DA15DB0B51(uParam0->f_13, 28))
		{
			if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
			{
				unk_0xE293CCEE24FD3DDA(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x507FE690B1271947(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x2137828D03306CAF(uParam0->f_21))
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
			uVar24 = unk_0x8B62441BF8D73898(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), 50f, 0, iVar25);
			if (unk_0x7FAC45D56235AB39(uVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x7FAC45D56235AB39(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), unk_0xD1EE0E9FCD74A37B(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
				{
					if (!unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0) || !bParam17)
					{
						if (func_42(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
								{
									unk_0x861C75D434F4572D(uParam0->f_17[iVar0], 1f);
									if (unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_15()))
									{
										unk_0x799D2CB4039F4804(uParam0->f_17[iVar0]);
									}
									if (unk_0xE897E371352225D5(uParam0->f_17[iVar0], -1794415470) == 7 && !func_59(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x62F5757271CA0B05(uParam0->f_17[iVar0]) && !unk_0x96BD442529F76EE7(uParam0->f_17[iVar0]))
										{
											unk_0x4C47904AE69D7393(uParam0->f_17[iVar0], 1);
											unk_0xA6AC097BEBB7B1F0(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x6DADD4361C85DDAC(uParam0->f_17[iVar0], iVar0);
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
			unk_0x507FE690B1271947(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
				{
					if (!unk_0xF5A478192BF88D01(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x654FFF4D16298AC5(uParam0->f_17[iVar0]);
					}
					if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_15()))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0xD234B4C90ED0E156(uParam0->f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 26))
	{
		if ((!func_56(uParam0) && unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91())) && !unk_0x2137828D03306CAF(iParam10))
		{
			iVar13 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
			if (unk_0x7FAC45D56235AB39(iVar13, 0))
			{
				if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 13))
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
							if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x895FB9FE885E36ED(0, iVar26);
						if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar27]))
						{
							func_32(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_34(uParam0, "MORE_SEATS", 0);
						unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x507FE690B1271947(&(uParam0->f_13), 13);
			func_43("MORE_SEATS");
		}
		if (!unk_0x2137828D03306CAF(iParam10))
		{
			if ((!unk_0x769F0F6444C1ABE0(uParam0->f_17[0]) || !unk_0x769F0F6444C1ABE0(uParam0->f_17[1])) || !unk_0x769F0F6444C1ABE0(uParam0->f_17[2]))
			{
				if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 31))
				{
					if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()) && !func_37(uParam0, 2))
					{
						iVar13 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
						if (func_55(iVar13, uParam0))
						{
							func_34(uParam0, "CMN_VEHSUIT", 0);
							unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
				{
					unk_0x507FE690B1271947(&(uParam0->f_13), 31);
					func_43("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x7FAC45D56235AB39(iParam10, 0))
		{
			if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), iParam10))
			{
				if (unk_0x92BC4A8239BDDACC(0, 75))
				{
					unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 21))
			{
				unk_0x507FE690B1271947(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x2137828D03306CAF(uParam0->f_17[iVar0]))
			{
				if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
				{
					if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_15()))
					{
						unk_0x2E0701CEBB06668C(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x2E0701CEBB06668C(uParam0->f_17[iVar0], 0);
					}
					if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
					{
						iVar13 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
						if (unk_0x7FAC45D56235AB39(iVar13, 0))
						{
							if (unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_15()))
							{
								if (!func_56(uParam0) && unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
								{
									if (!func_54(uParam0->f_17[iVar0]))
									{
										unk_0x799D2CB4039F4804(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0xA9A04898798AE9E6(iVar13, 0))
						{
							if (unk_0xF8ED2D0629FE764D(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xABCF7EB00A727656(iVar13) && !unk_0xBBC6067B2AA3BE97(iVar13))
								{
									Var28 = { unk_0xD1EE0E9FCD74A37B(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x153CD660E835E570(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_15()))
					{
						if (unk_0xB1C4356ECEE878FE(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x0C20E539D876C5B3(uParam0->f_17[iVar0], 0);
							if (!unk_0xA9A04898798AE9E6(iVar13, 0))
							{
								if (unk_0x7FAC45D56235AB39(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), iVar13))
										{
											if (unk_0xD2660BAC03EB7433(iVar13) > 5f)
											{
												unk_0x153CD660E835E570(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x153CD660E835E570(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
									{
										iVar31 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
									}
									if (unk_0x7FAC45D56235AB39(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0xD2660BAC03EB7433(iVar13) > 5f)
											{
												unk_0x153CD660E835E570(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x153CD660E835E570(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_15()))
					{
						iVar32 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
						if (unk_0x2137828D03306CAF(iVar32))
						{
							if (func_42(iVar32, uParam0, 0))
							{
								if (func_53(iVar0, uParam0) || !unk_0xAA4F14DA15DB0B51(uParam0->f_13, 27))
								{
									unk_0x6DADD4361C85DDAC(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_53(iVar0, uParam0))
							{
								if (unk_0xD3B21CE53AA7BE51(iVar32) == joaat("sentinel2"))
								{
									unk_0x6DADD4361C85DDAC(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x6DADD4361C85DDAC(uParam0->f_17[iVar0], 2);
								}
								func_52(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_15()) && !func_51(uParam0->f_17[iVar0], iParam10)) && !func_50(uParam0->f_17[iVar0], iParam10))
					{
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_15()))
							{
								if (((!unk_0x62F5757271CA0B05(uParam0->f_17[iVar0]) && !unk_0x96BD442529F76EE7(uParam0->f_17[iVar0])) && !unk_0xE3D9FA6DA44707FD(uParam0->f_17[iVar0])) && !unk_0xF5A478192BF88D01(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0xE897E371352225D5(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0x654FFF4D16298AC5(uParam0->f_17[iVar0]);
									}
									unk_0xD234B4C90ED0E156(uParam0->f_17[iVar0], func_15());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x3732B96D7A1859B4();
								uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
								unk_0x929538D619711815(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_30(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
					{
						if (((func_27(uParam0->f_17[iVar0], 1) || func_51(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x7FAC45D56235AB39(iParam10, 0) && !unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iParam10, 0)))
						{
							if (unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
							{
								unk_0x789C84F1B8496AD0(&(uParam0->f_1[iVar0]));
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
					else if (unk_0x7FAC45D56235AB39(iParam10, 0))
					{
						if (!unk_0xF8ED2D0629FE764D(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x2860DA9980AC4109(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xAA4F14DA15DB0B51(uParam0->f_13, 11)) && !((bParam17 && unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0)) && !unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iParam10, 0)))
							{
								if (unk_0xB1C4356ECEE878FE(uParam0->f_17[iVar0]))
								{
									if (!unk_0x5B9B499C707C2A95(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_27(uParam0->f_17[iVar0], 1))
										{
											if (func_26(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0xE897E371352225D5(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x8F2751B831A7B303(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_15()))
									{
										if ((((!unk_0xE3D9FA6DA44707FD(uParam0->f_17[iVar0]) && !unk_0x62F5757271CA0B05(uParam0->f_17[iVar0])) && !unk_0x96BD442529F76EE7(uParam0->f_17[iVar0])) && !unk_0xF5A478192BF88D01(uParam0->f_17[iVar0])) && !unk_0xFB4BF464D20ED824(iParam10))
										{
											unk_0x799D2CB4039F4804(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0xE897E371352225D5(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_59(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xE3D9FA6DA44707FD(uParam0->f_17[iVar0]) && !unk_0xE3D9FA6DA44707FD(unk_0x2A5EB8B0FE590B91())) && !func_49(uParam0->f_17[iVar0], 2f)) && !unk_0x62F5757271CA0B05(uParam0->f_17[iVar0])) && !unk_0x96BD442529F76EE7(uParam0->f_17[iVar0])) && !unk_0xFB4BF464D20ED824(iParam10))
										{
											unk_0x4C47904AE69D7393(uParam0->f_17[iVar0], 1);
											if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 10))
											{
												unk_0x861C75D434F4572D(uParam0->f_17[iVar0], 1f);
											}
											unk_0xA6AC097BEBB7B1F0(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x13DE0BD5FC063164(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
										unk_0x929538D619711815(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_15()))
							{
								if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x62F5757271CA0B05(uParam0->f_17[iVar0]) && !unk_0x96BD442529F76EE7(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0xE897E371352225D5(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0x654FFF4D16298AC5(uParam0->f_17[iVar0]);
										}
										unk_0x4C47904AE69D7393(uParam0->f_17[iVar0], 0);
										unk_0xD234B4C90ED0E156(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), iParam10))
						{
							if (!unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_15()))
							{
								if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 21))
								{
									unk_0xD234B4C90ED0E156(uParam0->f_17[iVar0], func_15());
								}
							}
							else if (unk_0xAA4F14DA15DB0B51(uParam0->f_13, 21))
							{
								unk_0x799D2CB4039F4804(uParam0->f_17[iVar0]);
								unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xE7EA59D3048D0B8F(uParam0->f_17[iVar0], func_15()) && !unk_0xFB4BF464D20ED824(iParam10))
						{
							unk_0x799D2CB4039F4804(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
				{
					unk_0x789C84F1B8496AD0(&(uParam0->f_1[iVar0]));
					func_43(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
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
						if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
						{
							if (func_54(uParam0->f_17[iVar0]) || unk_0x2860DA9980AC4109(uParam0->f_17[iVar0], unk_0x2A5EB8B0FE590B91(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
					{
						if (!unk_0x2860DA9980AC4109(uParam0->f_17[iVar0], unk_0x2A5EB8B0FE590B91(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_54(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x3732B96D7A1859B4();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 5))
							{
								func_34(uParam0, sParam7, 0);
								unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 5);
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
										if (!unk_0x47988E04F8E2F0AD(uVar19[iVar0]))
										{
											if (!unk_0x35302CD5A5D37EED(uVar19[iVar0], ""))
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
		unk_0x507FE690B1271947(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xBDD3EABACAB97D09(uParam0->f_1[iVar0]))
				{
					unk_0x789C84F1B8496AD0(&(uParam0->f_1[iVar0]));
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
			unk_0xF6082E2ADA1C795B(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xF6082E2ADA1C795B(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xF6082E2ADA1C795B(&(uParam1->f_13), 16);
			break;
	}
}

void func_46(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x47988E04F8E2F0AD(sParam1))
		{
			if (!unk_0x35302CD5A5D37EED(sParam1, ""))
			{
				func_47(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x3732B96D7A1859B4();
}

void func_47(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x63EE614B6594E772(sParam0);
	unk_0xD5DA3EC5EEC78358(uParam1);
	unk_0x17C5AB14FA142F36(iParam2, 1);
}

int func_48(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xAA4F14DA15DB0B51(uParam1->f_13, 14);
		
		case 1:
			return unk_0xAA4F14DA15DB0B51(uParam1->f_13, 15);
		
		case 2:
			return unk_0xAA4F14DA15DB0B51(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_49(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0xC4A39E4229BD3ABE(iParam0, 0))
	{
		iVar0 = unk_0x0C20E539D876C5B3(iParam0, 0);
		if (!unk_0xA9A04898798AE9E6(iVar0, 0))
		{
			if (unk_0xD2660BAC03EB7433(iVar0) > fParam1)
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
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (!unk_0xE7EA59D3048D0B8F(iParam0, func_15()))
		{
			iVar0 = unk_0x73E10648CA4D8C19(iParam0);
			if (unk_0x7FAC45D56235AB39(iParam1, 0))
			{
				if (unk_0x2860DA9980AC4109(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0x2137828D03306CAF(iParam1))
		{
			if (unk_0x7FAC45D56235AB39(iParam1, 0))
			{
				if (unk_0xF8ED2D0629FE764D(iParam0, iParam1))
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
			unk_0xF6082E2ADA1C795B(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xF6082E2ADA1C795B(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xF6082E2ADA1C795B(&(uParam1->f_13), 19);
			break;
	}
}

int func_53(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xAA4F14DA15DB0B51(uParam1->f_13, 17);
		
		case 1:
			return unk_0xAA4F14DA15DB0B51(uParam1->f_13, 18);
		
		case 2:
			return unk_0xAA4F14DA15DB0B51(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		iVar0 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
		if (unk_0x7FAC45D56235AB39(iVar0, 0))
		{
			if (!unk_0x769F0F6444C1ABE0(iParam0))
			{
				iVar1 = unk_0xCB705C0242571D84(iParam0);
				if (unk_0x7FAC45D56235AB39(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x2860DA9980AC4109(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		if (unk_0xD3B21CE53AA7BE51(iParam0) == joaat("bus") || unk_0xD3B21CE53AA7BE51(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x769F0F6444C1ABE0(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x8F8E5C33266ED978(iParam0, 0, 0);
			if (!unk_0x769F0F6444C1ABE0(iVar3))
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
			iVar4 = unk_0x8F8E5C33266ED978(iParam0, 1, 0);
			if (!unk_0x769F0F6444C1ABE0(iVar4))
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
			iVar5 = unk_0x8F8E5C33266ED978(iParam0, 2, 0);
			if (!unk_0x769F0F6444C1ABE0(iVar5))
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
	
	if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
	{
		uVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
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
	
	if (!unk_0x769F0F6444C1ABE0(iParam1))
	{
		if (unk_0xB1C4356ECEE878FE(iParam1))
		{
			uVar0 = unk_0x0C20E539D876C5B3(iParam1, 0);
			if (!unk_0xA9A04898798AE9E6(uVar0, 0))
			{
				if (unk_0x7FAC45D56235AB39(iVar0, 0))
				{
					if (unk_0xF8ED2D0629FE764D(unk_0x2A5EB8B0FE590B91(), iVar0))
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
				else if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
				if (unk_0x2137828D03306CAF(iVar0))
				{
					if (func_42(iVar0, uParam0, 0))
					{
						if (unk_0x7FAC45D56235AB39(iVar0, 0))
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
	
	if (!unk_0xA9A04898798AE9E6(uParam0, 0))
	{
		fVar0 = unk_0xD2660BAC03EB7433(iParam0);
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
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0x7FAC45D56235AB39(iParam1, 0))
		{
			iVar0 = unk_0xCB705C0242571D84(iParam0);
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
	
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		iVar0 = unk_0x73E10648CA4D8C19(unk_0x2A5EB8B0FE590B91());
		if (unk_0x7FAC45D56235AB39(iVar0, 0))
		{
			iVar1 = unk_0x8F8E5C33266ED978(iVar0, 0, 0);
			if (!unk_0x769F0F6444C1ABE0(iVar1))
			{
				if (iVar1 != unk_0x2A5EB8B0FE590B91())
				{
					if (unk_0x03322C3918511AA0(iVar1))
					{
						if (!unk_0xD175293EF7878334(iVar1, unk_0x2A5EB8B0FE590B91()))
						{
							unk_0xEDF42871EAD55C9B(iVar1, unk_0x2A5EB8B0FE590B91(), 2000, 2048, 2);
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
	
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_13, 25))
	{
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			unk_0x31AC59B7C21A2047(unk_0x2A5EB8B0FE590B91(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x2137828D03306CAF(uParam0->f_17[iVar0]))
			{
				if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
				{
					unk_0x31AC59B7C21A2047(uParam0->f_17[iVar0], 32, 0);
					unk_0x31AC59B7C21A2047(uParam0->f_17[iVar0], 305, 1);
					unk_0x31AC59B7C21A2047(uParam0->f_17[iVar0], 268, 1);
					unk_0x13DE0BD5FC063164(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xF6082E2ADA1C795B(&(uParam0->f_13), 25);
	}
}

void func_62(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2137828D03306CAF(uParam0->f_17[iVar0]))
		{
			if (!unk_0x769F0F6444C1ABE0(uParam0->f_17[iVar0]))
			{
				if (unk_0xB1C4356ECEE878FE(uParam0->f_17[iVar0]))
				{
					unk_0x76DB40064D4A807D(uParam0->f_17[iVar0], 0);
					unk_0x1EA7D129CB42F133(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0x76DB40064D4A807D(unk_0x2A5EB8B0FE590B91(), 0);
				unk_0x1EA7D129CB42F133(unk_0x2A5EB8B0FE590B91(), 0);
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
	
	if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_96, 0))
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_102))
		{
			unk_0x789C84F1B8496AD0(&uLocal_102);
		}
		if (iLocal_36 <= 2)
		{
			iLocal_80 = (unk_0x8CB0BCE2283F9861() * ((60 * iLocal_82) + iLocal_83));
			iLocal_80 = (iLocal_80 + unk_0x3732B96D7A1859B4());
			iLocal_84 = (iLocal_80 - unk_0x8CB0BCE2283F9861() * 30);
		}
		else if (iLocal_36 > 6)
		{
			iLocal_80 = (unk_0x8CB0BCE2283F9861() * ((60 * iLocal_82) + iLocal_83));
			iLocal_80 = (iLocal_80 + unk_0x3732B96D7A1859B4());
			iLocal_84 = (iLocal_80 - unk_0x8CB0BCE2283F9861() * 30);
		}
		else if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			iLocal_97 = unk_0xE42A511281C9895B(iLocal_89, Local_70, fLocal_74, 1, 1, 0);
			iLocal_93[0] = unk_0x7B47BFDF39EC38D3(iLocal_97, 6, iLocal_87, -1, 1, 1);
			iLocal_93[1] = unk_0x7B47BFDF39EC38D3(iLocal_97, 6, iLocal_87, 0, 1, 1);
			unk_0xEE8231F61ED038B0("rghCop", &uLocal_118);
			unk_0x3A8EFBE4AB457FE2(4, uLocal_118, joaat("player"));
			unk_0x89AEA58335779997(iLocal_93[0], 39, 1);
			unk_0x89AEA58335779997(iLocal_93[1], 39, 1);
			iVar0 = 0;
			while (iVar0 < iLocal_93)
			{
				unk_0x0013D519C885E60B(iLocal_93[iVar0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0x65648841F3329FD6(iLocal_93[iVar0], 100f);
				unk_0x3C030E241A3543D2(iLocal_93[iVar0], uLocal_118);
				iVar0++;
			}
		}
		iLocal_38 = 2;
	}
}

void func_66()
{
	int iVar0;
	
	if (!unk_0xA9A04898798AE9E6(iLocal_96, 0))
	{
		if (func_95() || unk_0x769F0F6444C1ABE0(iLocal_90[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_90)
			{
				if (!unk_0x769F0F6444C1ABE0(iLocal_90[iVar0]))
				{
					if (!unk_0xBDD3EABACAB97D09(uLocal_99[iVar0]))
					{
						uLocal_99[iVar0] = func_10(iLocal_90[iVar0], 1, 145);
						unk_0x89AEA58335779997(iLocal_90[iVar0], 1, 0);
						unk_0x219EE6A7B599E7DC(&uLocal_120);
						unk_0x8F2751B831A7B303(0, 0, 0);
						unk_0xDD0413EAB0ADDE6A(0, unk_0x2A5EB8B0FE590B91(), 0, 16);
						unk_0xBD718C5BA2122192(uLocal_120);
						unk_0x234E551BB8E8813B(iLocal_90[iVar0], uLocal_120);
						unk_0xEDD36C58DDE03C8F(&uLocal_120);
					}
				}
				else if (unk_0xBDD3EABACAB97D09(uLocal_99[iVar0]))
				{
					unk_0x789C84F1B8496AD0(&(uLocal_99[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_79)
		{
			if (!unk_0x769F0F6444C1ABE0(iLocal_90[0]))
			{
				if (unk_0x2860DA9980AC4109(unk_0x2A5EB8B0FE590B91(), iLocal_90[0], 50f, 50f, 50f, 0, 1, 0))
				{
					unk_0x8C6A1F8B258BDF97(iLocal_90[0], iLocal_96, unk_0x2A5EB8B0FE590B91(), 8, 25f, 786469, -1f, -1f, 1);
					iLocal_79 = 1;
				}
			}
		}
		if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), iLocal_96, 0))
		{
			if (unk_0xBDD3EABACAB97D09(uLocal_102))
			{
				unk_0x789C84F1B8496AD0(&uLocal_102);
			}
			func_94(&uLocal_106, 0, 0);
			iLocal_38 = 2;
		}
		else if (unk_0x457D9E478E06E354(iLocal_96, -1, 0) || unk_0x769F0F6444C1ABE0(iLocal_90[0]))
		{
			func_94(&uLocal_106, 0, 0);
		}
		else
		{
			func_67();
		}
	}
}

void func_67()
{
	if (!unk_0x769F0F6444C1ABE0(iLocal_90[0]) && !unk_0xA9A04898798AE9E6(iLocal_96, 0))
	{
		if (unk_0x5B9B499C707C2A95(iLocal_90[0], iLocal_96, 0))
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
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
	{
		func_94(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_71(uParam0, uParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_71(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x943D8B466B9BD1A3())
	{
		if (unk_0x3732B96D7A1859B4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x47988E04F8E2F0AD(iVar0))
	{
		if (!unk_0x591AF4C50B46E014())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_93(iVar0))
	{
		func_92();
	}
	if (func_91(uParam1) && unk_0x18570CCBAF7F635C(uParam1))
	{
		iVar1 = 0;
		if (unk_0xEE46DE31F43DCAF1(uParam1))
		{
			unk_0x2C9BFB18AC97D56A(unk_0xC3A7AD90290CA72E(iParam1));
			unk_0xB6E06390C751480C(unk_0xC3A7AD90290CA72E(iParam1), 1);
			if (unk_0x2CA699E76FE1F362(unk_0xC3A7AD90290CA72E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x82DF3B947FC3E281(iParam1))
		{
			unk_0x8D2653D3B0E4E932(unk_0x761AC59E782D169D(iParam1));
			if (unk_0x7C985EA0E2CA156C(unk_0x761AC59E782D169D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xD277B6800A356CC0(iParam1))
		{
			unk_0xB6F65B032F5104E8(unk_0x3D7676880675803E(iParam1));
			if (unk_0xC6E81CD09CBFB72A(unk_0x3D7676880675803E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x943D8B466B9BD1A3())
		{
			if (func_86(uParam0, bParam7, bParam9, 0))
			{
				func_82(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_76(iVar0))
				{
					if ((unk_0x47988E04F8E2F0AD(uParam0->f_3) && !unk_0x47988E04F8E2F0AD(iVar0)) && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
					{
						if ((iVar1 && !unk_0x6235C49EA2DBA22D()) && uParam8)
						{
							if (!func_93(iVar0))
							{
								func_75(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x35302CD5A5D37EED("CMN_HINT", iVar0))
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
				if (unk_0x47988E04F8E2F0AD(uParam0->f_3) && !unk_0x47988E04F8E2F0AD(iVar0))
				{
					if (((unk_0x57F6052FCF93BCFF(iParam1) && iVar1) && !unk_0x6235C49EA2DBA22D()) && uParam8)
					{
						if (!func_93(iVar0))
						{
							func_75(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x35302CD5A5D37EED("CMN_HINT", iVar0))
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
			if (!unk_0x47988E04F8E2F0AD(sParam5))
			{
				if (func_93(sParam5))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
			}
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
			{
				if (unk_0x67F6B31C1A3F63CC(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(3) == 3 || unk_0xC1A55CEDE7782B6F(3) == 4)
					{
						func_94(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(6) == 3 || unk_0xC1A55CEDE7782B6F(6) == 4)
					{
						func_94(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(4) == 3 || unk_0xC1A55CEDE7782B6F(4) == 4)
					{
						func_94(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x7674A841839E35A9(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(5) == 3 || unk_0xC1A55CEDE7782B6F(5) == 4)
					{
						func_94(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC6E131A80E016CB3(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xC1A55CEDE7782B6F(2) == 3 || unk_0xC1A55CEDE7782B6F(2) == 4)
					{
						func_94(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5B415C625D71532C() == 3 || unk_0x5B415C625D71532C() == 4)
				{
					func_94(uParam0, iVar0, 1);
				}
			}
			if (!func_86(uParam0, bParam7, bParam9, 0))
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
		func_94(uParam0, iVar0, 0);
	}
}

void func_72(var uParam0)
{
	if (func_91(unk_0x2A5EB8B0FE590B91()))
	{
		unk_0xAF2C217E49954DFD(unk_0x2A5EB8B0FE590B91());
	}
	if (unk_0x943D8B466B9BD1A3())
	{
		unk_0x47ABE7550330D9FC(1);
		unk_0xF01DFB77A6A50908(0);
		unk_0x40F160C3038ECAF5("HINT_CAM_SCENE");
		unk_0xDCE08B9AA97FFEB4("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x18A0B296F4932A7B("FocusOut", 0, 0);
			unk_0x08BE237DBCD9CBD9(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x3732B96D7A1859B4()
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
				Global_103236.f_9830.f_100++;
			}
			return Global_103236.f_9830.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_103236.f_9830.f_101++;
			}
			return Global_103236.f_9830.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_103236.f_9830.f_102++;
			}
			return Global_103236.f_9830.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_75(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

int func_76(char* sParam0)
{
	if (!func_77(1, 1, 0))
	{
		if ((!unk_0x58478145CAF8429C(sParam0) && func_93(sParam0)) || func_93("CMN_HINT"))
		{
			unk_0x7D53B6FFAEDA810A(1);
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
		if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x0AFBA1AD6DC1C540())
	{
		return 0;
	}
	if (func_81(0))
	{
		return 0;
	}
	if (func_80())
	{
		return 0;
	}
	if (unk_0x2593BD27F8406EC2())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (unk_0x09952BA662A7629B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53035)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
		{
			if (unk_0x67F6B31C1A3F63CC(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(3) == 3 || unk_0xC1A55CEDE7782B6F(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xCC7D3FD2D4585BF3(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(6) == 3 || unk_0xC1A55CEDE7782B6F(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9A1BA6388EDC7DF4(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(4) == 3 || unk_0xC1A55CEDE7782B6F(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x7674A841839E35A9(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(5) == 3 || unk_0xC1A55CEDE7782B6F(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC6E131A80E016CB3(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xC1A55CEDE7782B6F(2) == 3 || unk_0xC1A55CEDE7782B6F(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5B415C625D71532C() == 3 || unk_0x5B415C625D71532C() == 4)
			{
				return 0;
			}
			if (unk_0xFC99B60347524C55())
			{
				return 0;
			}
		}
	}
	if (func_79())
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0x3A55AED06BFC52DE(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), func_78(unk_0x2A5EB8B0FE590B91(), 0)) || (unk_0xD3B21CE53AA7BE51(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0)) == joaat("apc") && func_78(unk_0x2A5EB8B0FE590B91(), 0) != -1))
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
	
	if (!unk_0x769F0F6444C1ABE0(iParam0))
	{
		if (unk_0xC4A39E4229BD3ABE(iParam0, iParam1))
		{
			iVar0 = unk_0x0C20E539D876C5B3(iParam0, iParam1);
			if (unk_0x2137828D03306CAF(iVar0))
			{
				if (!unk_0xA9A04898798AE9E6(iVar0, 0))
				{
					iVar1 = unk_0xF0178FC88859A30C(unk_0xD3B21CE53AA7BE51(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						iVar3 = (iVar2 - 1);
						if (!unk_0x457D9E478E06E354(iVar0, iVar3, 0))
						{
							if (unk_0x8F8E5C33266ED978(iVar0, iVar3, 0) == iParam0)
							{
								return iVar3;
							}
						}
						iVar2++;
					}
					if (iVar1 == 1 && unk_0xD3B21CE53AA7BE51(iVar0) == joaat("trailersmall2"))
					{
						iVar3 = -1;
						return iVar3;
					}
				}
			}
		}
	}
	return iVar3;
}

bool func_79()
{
	return Global_2445217.f_13;
}

bool func_80()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

int func_81(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_82(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xA9A04898798AE9E6(uParam1, 0))
	{
		func_94(uParam0, 0, 0);
	}
	if (func_85(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xEE46DE31F43DCAF1(iParam1))
		{
			iVar0 = unk_0xC3A7AD90290CA72E(iParam1);
			if (!unk_0xC4A39E4229BD3ABE(iVar0, 0))
			{
				if (unk_0xDB61DD81432BD145(iVar0))
				{
					if (!func_83())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x8F40CB4DCBB7C8AB(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x47ABE7550330D9FC(0);
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
	unk_0x8E8B3A8DE1143EAE(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xEDF42871EAD55C9B(unk_0x2A5EB8B0FE590B91(), iParam1, -1, iVar3, iVar4);
	unk_0x18A0B296F4932A7B("FocusIn", 0, 0);
	unk_0xB0D390F8FEB78903("HINT_CAM_SCENE");
	unk_0x08BE237DBCD9CBD9(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x3732B96D7A1859B4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_83()
{
	return func_84(unk_0x0FFED3E94261A832());
}

int func_84(var uParam0)
{
	if (unk_0xD3B21CE53AA7BE51(unk_0x1E199569E0295838(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_85(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_86(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x3732B96D7A1859B4() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
				{
					if (func_90(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_89(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_89(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_90(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x3732B96D7A1859B4();
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
			if ((unk_0x3732B96D7A1859B4() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
					{
						if (!func_90(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x3732B96D7A1859B4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_89(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_89(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_90(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x3732B96D7A1859B4();
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
				if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
				{
					if (!func_90(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_89(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_89(bParam1, bParam2, bParam3) || unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || unk_0x07E119839AD14892(unk_0x2A5EB8B0FE590B91(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_90(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x3732B96D7A1859B4() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1))
					{
						if (func_88(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 1) || unk_0x07E119839AD14892(unk_0x2A5EB8B0FE590B91(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_88(bParam1, bParam2, bParam3))
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
		func_92();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_87(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0x59EB917897868D15(unk_0x0FFED3E94261A832()))
		{
			unk_0x4E6996123FABDB93(0, 140, 1);
			unk_0x4E6996123FABDB93(0, 80, 1);
			if (unk_0xDCBB59BAB1A90B0C(0, 80))
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
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x4E6996123FABDB93(0, 80, 1);
		if (unk_0x0AD047EB9A46B3EF())
		{
			if (unk_0xDCBB59BAB1A90B0C(0, 80))
			{
				unk_0x47ABE7550330D9FC(0);
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
	if (!unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		if (!unk_0x59EB917897868D15(unk_0x0FFED3E94261A832()))
		{
			unk_0x4E6996123FABDB93(0, 140, 1);
			unk_0x4E6996123FABDB93(0, 80, 1);
			if (unk_0xC20E8B2E17B46871(0, 80) && unk_0x3732B96D7A1859B4() > Global_116)
			{
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
	if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x4E6996123FABDB93(0, 80, 1);
		if (unk_0x0AD047EB9A46B3EF())
		{
			if (unk_0xC20E8B2E17B46871(0, 80) && unk_0x3732B96D7A1859B4() > Global_116)
			{
				unk_0x47ABE7550330D9FC(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_91(int iParam0)
{
	if (unk_0x2137828D03306CAF(iParam0))
	{
		if (unk_0x82DF3B947FC3E281(iParam0))
		{
			if (unk_0x7FAC45D56235AB39(unk_0x761AC59E782D169D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xEE46DE31F43DCAF1(iParam0))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0xC3A7AD90290CA72E(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xD277B6800A356CC0(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_92()
{
	unk_0xF6082E2ADA1C795B(&Global_2314, 4);
}

bool func_93(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

void func_94(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 26))
		{
			return;
		}
	}
	if (unk_0x943D8B466B9BD1A3())
	{
		unk_0xF01DFB77A6A50908(iParam2);
		unk_0xDCE08B9AA97FFEB4("FocusIn");
		unk_0x40F160C3038ECAF5("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x18A0B296F4932A7B("FocusOut", 0, 0);
			unk_0x08BE237DBCD9CBD9(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x47ABE7550330D9FC(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x47988E04F8E2F0AD(sVar0))
	{
		if (!unk_0x591AF4C50B46E014())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x47988E04F8E2F0AD(uParam0->f_3))
	{
		if (func_93(uParam0->f_3))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
	}
	if (!unk_0x47988E04F8E2F0AD(sVar0))
	{
		if (func_93(sVar0))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
	}
}

int func_95()
{
	if (unk_0x2137828D03306CAF(iLocal_96))
	{
		if (!unk_0xA9A04898798AE9E6(iLocal_96, 0))
		{
			if ((((((unk_0xE86A53C202B21FAB(iLocal_96) < 300 || unk_0xB01B1648698791BB(iLocal_96) < 200f) || unk_0xFB4BF464D20ED824(iLocal_96)) || (unk_0xD8BFF899C7596F35(iLocal_96, 0, 0) && unk_0xD8BFF899C7596F35(iLocal_96, 1, 0))) || (unk_0xD8BFF899C7596F35(iLocal_96, 4, 0) && unk_0xD8BFF899C7596F35(iLocal_96, 5, 0))) || (unk_0xD8BFF899C7596F35(iLocal_96, 0, 0) && unk_0xD8BFF899C7596F35(iLocal_96, 4, 0))) || (unk_0xD8BFF899C7596F35(iLocal_96, 1, 0) && unk_0xD8BFF899C7596F35(iLocal_96, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_96()
{
	int iVar0;
	int iVar1;
	
	iLocal_96 = func_98(0);
	if (!unk_0x7FAC45D56235AB39(iLocal_96, 0))
	{
		iLocal_96 = unk_0xE42A511281C9895B(iLocal_88, Local_64, uLocal_73, 1, 1, 0);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			unk_0xE4246493481B5222(iLocal_96, iVar0, 1);
			iVar0++;
		}
		if (iLocal_85 != -1)
		{
			unk_0xE4246493481B5222(iLocal_96, iLocal_85, 0);
		}
	}
	unk_0x5F7B0AB6D2DF1A8D(iLocal_96, 1);
	uLocal_102 = func_97(iLocal_96, 0, 0);
	if (iLocal_36 != 5 && iLocal_36 != 6)
	{
		if (iLocal_36 > 6)
		{
			unk_0x9C27A9366AD7DE0B(iLocal_96, 0, 0, 0, 0, 1, 0, 0, 0);
			unk_0x853D8B40635017CB(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_96, 0, 0, 0);
		}
		func_35(sLocal_103, 7500, 1);
	}
	else
	{
		iLocal_90[0] = unk_0x7B47BFDF39EC38D3(iLocal_96, 26, iLocal_86, -1, 1, 1);
		iLocal_90[1] = unk_0x7B47BFDF39EC38D3(iLocal_96, 26, iLocal_86, 0, 1, 1);
		unk_0xEE8231F61ED038B0("rghCriminal", &uLocal_119);
		unk_0x3A8EFBE4AB457FE2(5, uLocal_119, joaat("player"));
		iVar1 = 0;
		while (iVar1 < iLocal_90)
		{
			unk_0x4C47904AE69D7393(iLocal_90[iVar1], 1);
			unk_0x0013D519C885E60B(iLocal_90[iVar1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
			unk_0x3C030E241A3543D2(iLocal_90[iVar1], uLocal_119);
			iVar1++;
		}
		unk_0x37959C6A7F431781(iLocal_90[0], iLocal_96, 25f, 786599);
		func_35("PMDL_REC", 7500, 1);
	}
	if (!unk_0xA9A04898798AE9E6(unk_0x19D9DFABC3C7D219(), 0))
	{
		iLocal_98 = unk_0x19D9DFABC3C7D219();
	}
	iLocal_38 = 1;
}

int func_97(var uParam0, bool bParam1, bool bParam2)
{
	return func_11(uParam0, !bParam1, bParam2);
}

int func_98(int iParam0)
{
	if (unk_0x7FAC45D56235AB39(Global_101948.f_222[iParam0], 0))
	{
		unk_0x216B434C1A609F5B(Global_101948.f_222[iParam0], 1, 1);
		return Global_101948.f_222[iParam0];
	}
	return 0;
}

int func_99()
{
	if (unk_0x2137828D03306CAF(iLocal_96))
	{
		if (unk_0x7FAC45D56235AB39(iLocal_96, 0))
		{
			if (!unk_0x2860DA9980AC4109(iLocal_96, unk_0x2A5EB8B0FE590B91(), 300f, 300f, 300f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x769F0F6444C1ABE0(iLocal_90[0]))
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_99[0]))
		{
			unk_0x789C84F1B8496AD0(&(uLocal_99[0]));
		}
	}
	return 0;
}

void func_100()
{
	unk_0x0F39DF6675B2333E(iLocal_88);
	unk_0xC9173FA08E7D8227("PMDL", 0);
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		unk_0x0F39DF6675B2333E(iLocal_87);
		unk_0x0F39DF6675B2333E(iLocal_89);
	}
	else if (iLocal_36 == 5 || iLocal_36 == 6)
	{
		unk_0x0F39DF6675B2333E(iLocal_86);
	}
	unk_0x02E663D7DDAE8202(joaat("benson"), 1);
	unk_0x02E663D7DDAE8202(joaat("pony2"), 1);
	if (unk_0xA1FC9D7AEA164881(iLocal_88) && unk_0x44FB58EFDA8731B7(0))
	{
		if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			if (unk_0xA1FC9D7AEA164881(iLocal_87) && unk_0xA1FC9D7AEA164881(iLocal_89))
			{
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 == 5 || iLocal_36 == 6)
		{
			if (unk_0xA1FC9D7AEA164881(iLocal_86))
			{
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 > 6)
		{
			if (unk_0x741298E7009A20C9("Deliveries", 0, -1))
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

void func_101()
{
	float fVar0;
	
	Local_64 = { func_103(func_105(), iLocal_36) };
	fLocal_73 = func_102(func_105(), iLocal_36);
	if (iLocal_36 > 6)
	{
		sLocal_103 = "PMDL_TRUCK";
		sLocal_104 = "PMDL_BTIM";
		sLocal_105 = "PMDL_BCKT";
		iLocal_88 = joaat("benson");
		iLocal_85 = 2;
	}
	if (func_105() == 10)
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
	else if (func_105() == 14)
	{
		Local_67 = { -2169.828f, 4277.365f, 47.9568f };
		fVar0 = unk_0x4A2E6F541CD8C36E(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_105() == 13)
	{
		Local_67 = { -323.356f, 6264.431f, 30.4463f };
		fVar0 = unk_0x4A2E6F541CD8C36E(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_105() == 12)
	{
		Local_67 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = unk_0x4A2E6F541CD8C36E(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (func_105() == 11)
	{
		Local_67 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = unk_0x4A2E6F541CD8C36E(Local_64, Local_67, 1);
		iLocal_83 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	iLocal_81 = 0;
	iLocal_76 = 1;
}

float func_102(int iParam0, int iParam1)
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

Vector3 func_103(int iParam0, int iParam1)
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
	return func_104(iParam0);
}

Vector3 func_104(int iParam0)
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

int func_105()
{
	return Global_101948.f_20;
}

int func_106()
{
	return func_107(Global_101948.f_20, Global_101948.f_29);
}

int func_107(int iParam0, int iParam1)
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

void func_108()
{
	unk_0x02E663D7DDAE8202(joaat("benson"), 0);
	unk_0x02E663D7DDAE8202(joaat("pony2"), 0);
	unk_0x2A91BA279681D7D2();
	if (iLocal_77)
	{
		if (!unk_0xA9A04898798AE9E6(iLocal_98, 0))
		{
			func_109(iLocal_98, 0, 145);
		}
		unk_0x2D48AAEAE70BCD6E(unk_0x0FFED3E94261A832());
		func_94(&uLocal_106, 0, 0);
	}
	unk_0xA232817B0B36F2E5();
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0xF995FC030D2E2345(iParam0, &uVar0);
		if (!unk_0x58478145CAF8429C(uVar1))
		{
			if (unk_0xCAEDBF30E3EA14FC(sVar1) == unk_0xCAEDBF30E3EA14FC("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_110(iParam0, iParam2);
	return 1;
}

void func_110(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_115(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x8F8E5C33266ED978(iParam0, -1, 0);
		if (!unk_0x2137828D03306CAF(iVar0))
		{
			iVar0 = unk_0xB70DB151BB319BBB(iParam0, -1);
		}
		if (unk_0x2137828D03306CAF(iVar0) && !unk_0x769F0F6444C1ABE0(iVar0))
		{
			if (unk_0xD3B21CE53AA7BE51(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_103236.f_2164.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xD3B21CE53AA7BE51(iParam0) == Global_103236.f_32211.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x58478145CAF8429C(&(Global_103236.f_32211.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x35302CD5A5D37EED(unk_0x76FEACB77B140714(iParam0), &(Global_103236.f_32211.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_103236.f_32211.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_103236.f_32211.f_5592[iVar1] = iVar2;
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
		if (unk_0xD3B21CE53AA7BE51(iParam0) == Global_103236.f_32211.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x58478145CAF8429C(&(Global_103236.f_32211.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x35302CD5A5D37EED(unk_0x76FEACB77B140714(iParam0), &(Global_103236.f_32211.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_103236.f_32211.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_103236.f_32211.f_5590 = iParam1;
	Global_69533 = iParam0;
	Global_103236.f_32211.f_5588 = 1;
	func_111(iParam0, &(Global_103236.f_32211.f_5510));
}

void func_111(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		func_114(uParam1);
		uParam1->f_66 = unk_0xD3B21CE53AA7BE51(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x76FEACB77B140714(iParam0), 16);
		*uParam1 = unk_0x8721B6183C713CE4(iParam0);
		unk_0x89AFA08324111FDC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA410C943ACB84245(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xA6349759D1FE6F1C(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x289A21B43A9C74AA(iParam0);
		uParam1->f_67 = unk_0x30DA210F0843C9E9(iParam0);
		uParam1->f_69 = unk_0xEDE232D4FB7953E1(iParam0);
		uParam1->f_70 = unk_0xEC63E312ACFB2C99(iParam0);
		unk_0xD9F5533763950EB1(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x4140FA0DCDF92827(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xD046431B0EBE3CAF(iParam0, 2))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 28);
		}
		if (unk_0xD046431B0EBE3CAF(iParam0, 3))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 29);
		}
		if (unk_0xD046431B0EBE3CAF(iParam0, 0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 30);
		}
		if (unk_0xD046431B0EBE3CAF(iParam0, 1))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x4294F2710818C474(iParam0, 0))
		{
			uParam1->f_68 = unk_0x69F266E1CAA28F73(iParam0);
		}
		if (unk_0xDA6E804770521A18(uParam1->f_66))
		{
			if (unk_0x5C6E7D7E0AC7BBD7(iParam0))
			{
				switch (unk_0x720776EFC73F5B23(iParam0))
				{
					case 2:
					case 0:
						unk_0x507FE690B1271947(&(uParam1->f_77), 23);
						unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x507FE690B1271947(&(uParam1->f_77), 23);
						unk_0x507FE690B1271947(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x7C5D0771C19AD7FF(iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 9);
		}
		if (unk_0xED329BF1C4277ABD(iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 10);
		}
		if (unk_0x6143D7FE8749E532(iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 13);
			unk_0xF036A2A8ADC88DFC(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9139A45B8DE75586(iParam0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 12);
		}
		func_113(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x519A3AD50A2673BF(iParam0, iVar0 + 1))
			{
				unk_0xF6082E2ADA1C795B(&(uParam1->f_77), func_112(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xEDC05B7EC722C843(iParam0, 0))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x507FE690B1271947(&(uParam1->f_77), 11);
		}
		if (unk_0x30BD96CB13063EC9(iParam0, "IgnoredByQuickSave") && unk_0x42EC87EC81CA5339(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x507FE690B1271947(&(uParam1->f_77), 27);
		}
	}
}

int func_112(int iParam0)
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

int func_113(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7FAC45D56235AB39(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x300A7FCC6B376752(*iParam0) == 0)
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
			if (unk_0x9CFA3995FF093229(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x855369FDBD418C02(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xF9562C9903A5FC6A(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xF9562C9903A5FC6A(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_114(var uParam0)
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

int func_115(int iParam0)
{
	if ((((((((((!unk_0x2137828D03306CAF(iParam0) || !unk_0x7FAC45D56235AB39(iParam0, 0)) || func_131(iParam0, 0, 0)) || func_131(iParam0, 1, 0)) || func_131(iParam0, 2, 0)) || func_130(iParam0) != 145) || func_129(iParam0)) || func_128(iParam0)) || func_127(iParam0)) || func_126(iParam0)) || !func_116(unk_0xD3B21CE53AA7BE51(iParam0)))
	{
		if (func_128(iParam0))
		{
		}
		if (func_128(iParam0))
		{
		}
		if (func_131(iParam0, 0, 0))
		{
		}
		if (func_131(iParam0, 1, 0))
		{
		}
		if (func_131(iParam0, 2, 0))
		{
		}
		if (func_130(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_116(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_117(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xC6B6C45D0DE76B0B(iParam0) || unk_0xDA6E804770521A18(iParam0)) || unk_0x0F93427D94EAEAA2(iParam0)) || unk_0x11217C882DAE7DDD(iParam0))
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

int func_117(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x5FABA3586E57ED57(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x591AF4C50B46E014()) || (iParam0 == joaat("buffalo3") && !unk_0x591AF4C50B46E014())) || (iParam0 == joaat("gauntlet2") && !unk_0x591AF4C50B46E014())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x591AF4C50B46E014())) || iParam0 == joaat("blista3"))
	{
		if (!func_125())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x387A7CB2B4F8027A())
		{
			if (unk_0xC36B0959EAB89B8F(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x17983D8EA6EAF9C8(Var1.f_0))
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
		if ((((!func_124() && !func_123()) && !func_122()) && !func_121()) && !func_125())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x97FFE0491AC179A2() || unk_0x5018862FF5D9F844()) || unk_0x429A1F8C699BEE23())
		{
		}
		else if (!func_122())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_120(iParam0))
		{
			return 0;
		}
	}
	if (!func_118(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_118(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_119())
	{
		return 1;
	}
	unk_0xAA8D12A27D860B4A(&iVar0, &uVar1);
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
	if (!unk_0x8B420EE50F3B667E(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_119()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2484612)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xDA84A1E29323722E();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5515 && !Global_262145.f_11562) && iVar1 < Global_262145.f_11563)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12774 && iVar1 < Global_262145.f_12786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12770 && iVar1 < Global_262145.f_12782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12771 && iVar1 < Global_262145.f_12783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12772 && iVar1 < Global_262145.f_12784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12773 && iVar1 < Global_262145.f_12785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12775 && iVar1 < Global_262145.f_12787)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12776 && iVar1 < Global_262145.f_12779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12777 && iVar1 < Global_262145.f_12780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12778 && iVar1 < Global_262145.f_12781)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15405 && iVar1 < Global_262145.f_15370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15400 && iVar1 < Global_262145.f_15365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15404 && iVar1 < Global_262145.f_15369)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15403 && iVar1 < Global_262145.f_15368)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15397 && iVar1 < Global_262145.f_15362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15398 && iVar1 < Global_262145.f_15363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15401 && iVar1 < Global_262145.f_15366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15402 && iVar1 < Global_262145.f_15367)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15399 && iVar1 < Global_262145.f_15364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_15407 && iVar1 < Global_262145.f_15372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_15408 && iVar1 < Global_262145.f_15373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15396 && iVar1 < Global_262145.f_15361)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15395 && iVar1 < Global_262145.f_15360)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15394 && iVar1 < Global_262145.f_15359)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15406 && iVar1 < Global_262145.f_15371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_15409 && iVar1 < Global_262145.f_15374)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_15410 && iVar1 < Global_262145.f_15375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_15411 && iVar1 < Global_262145.f_15376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_15412 && iVar1 < Global_262145.f_15377)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15557 && iVar1 < Global_262145.f_15579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15558 && iVar1 < Global_262145.f_15580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15559 && iVar1 < Global_262145.f_15581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15560 && iVar1 < Global_262145.f_15582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15561 && iVar1 < Global_262145.f_15583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15562 && iVar1 < Global_262145.f_15584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15564 && iVar1 < Global_262145.f_15585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15565 && iVar1 < Global_262145.f_15586)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15566 && iVar1 < Global_262145.f_15587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15567 && iVar1 < Global_262145.f_15588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15568 && iVar1 < Global_262145.f_15589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15569 && iVar1 < Global_262145.f_15590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15570 && iVar1 < Global_262145.f_15591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15576 && iVar1 < Global_262145.f_15598)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15573 && iVar1 < Global_262145.f_15594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15574 && iVar1 < Global_262145.f_15595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15575 && iVar1 < Global_262145.f_15596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15563 && iVar1 < Global_262145.f_15597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15577 && iVar1 < Global_262145.f_15599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15571 && iVar1 < Global_262145.f_15592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15572 && iVar1 < Global_262145.f_15593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15578 && iVar1 < Global_262145.f_15600)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17206 && iVar1 < Global_262145.f_17247)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17207 && iVar1 < Global_262145.f_17248)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17208 && iVar1 < Global_262145.f_17249)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17209 && iVar1 < Global_262145.f_17250)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17210 && iVar1 < Global_262145.f_17251)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17211 && iVar1 < Global_262145.f_17252)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17212 && iVar1 < Global_262145.f_17253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17213 && iVar1 < Global_262145.f_17254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17214 && iVar1 < Global_262145.f_17255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17215 && iVar1 < Global_262145.f_17256)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17216 && iVar1 < Global_262145.f_17257)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17217 && iVar1 < Global_262145.f_17258)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17218 && iVar1 < Global_262145.f_17259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17219 && iVar1 < Global_262145.f_17260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17220 && iVar1 < Global_262145.f_17261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17221 && iVar1 < Global_262145.f_17262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17222 && iVar1 < Global_262145.f_17263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17223 && iVar1 < Global_262145.f_17264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17224 && iVar1 < Global_262145.f_17265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17225 && iVar1 < Global_262145.f_17266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17226 && iVar1 < Global_262145.f_17267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17227 && iVar1 < Global_262145.f_17268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17228 && iVar1 < Global_262145.f_17269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17229 && iVar1 < Global_262145.f_17270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17230 && iVar1 < Global_262145.f_17271)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18233 && iVar1 < Global_262145.f_18229)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18234 && iVar1 < Global_262145.f_18230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18235 && iVar1 < Global_262145.f_18231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18236 && iVar1 < Global_262145.f_18232)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19073 && iVar1 < Global_262145.f_19081)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19074 && iVar1 < Global_262145.f_19082)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19075 && iVar1 < Global_262145.f_19083)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19076 && iVar1 < Global_262145.f_19084)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19077 && iVar1 < Global_262145.f_19085)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19078 && iVar1 < Global_262145.f_19086)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("apc"))
	{
	}
	else if (iParam0 == joaat("dune3"))
	{
	}
	else if (iParam0 == joaat("halftrack"))
	{
	}
	else if (iParam0 == joaat("oppressor"))
	{
	}
	else if (iParam0 == joaat("tampa3"))
	{
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
	}
	return iVar0;
}

int func_121()
{
	return 0;
}

int func_122()
{
	return 1;
}

int func_123()
{
	return 1;
}

int func_124()
{
	if (unk_0xA438D14FADC1185B(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_125()
{
	var uVar0;
	
	if (unk_0x473DD4DAC8F55B34())
	{
		if (unk_0x5D806CF6D2796CC3())
		{
			if (unk_0x103C975BDE64E3C6())
			{
				unk_0xC225A90A8DE0D96B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF6082E2ADA1C795B(&uVar0, 2);
				unk_0xF6082E2ADA1C795B(&uVar0, 4);
				unk_0xF6082E2ADA1C795B(&uVar0, 6);
				unk_0xF6082E2ADA1C795B(&Global_25, 2);
				unk_0xF6082E2ADA1C795B(&Global_25, 4);
				unk_0xF6082E2ADA1C795B(&Global_25, 6);
				unk_0xC94674712BED1A82(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x4ED4E0D471EA6680())
				{
					uVar0 = unk_0x29B06605BA5CF280(866);
					unk_0xF6082E2ADA1C795B(&uVar0, 0);
					unk_0x01D51AAE02B320BA(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_141537 == 2)
	{
		return 1;
	}
	else if (Global_141537 == 3)
	{
		return 0;
	}
	if (unk_0x4ED4E0D471EA6680())
	{
		if (unk_0xAA4F14DA15DB0B51(unk_0x29B06605BA5CF280(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0xD3B21CE53AA7BE51(iParam0);
	uVar1 = unk_0x76FEACB77B140714(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x35302CD5A5D37EED(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_117(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2137828D03306CAF(Global_89283[iVar0]))
		{
			if (Global_89283[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_128(int iParam0)
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(iParam0) && unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x2137828D03306CAF(Global_89253[iVar0]) && unk_0x7FAC45D56235AB39(Global_89253[iVar0], 0))
			{
				if (Global_89253[iVar0] == iParam0 && unk_0xD3B21CE53AA7BE51(Global_89253[iVar0]) == unk_0xD3B21CE53AA7BE51(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(Global_68628.f_484[24]))
	{
		if (iParam0 == Global_68628.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x2137828D03306CAF(Global_68628.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68628.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return 145;
	}
	if (!unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x2137828D03306CAF(Global_89253[iVar0]))
		{
			if (Global_89253[iVar0] == iParam0)
			{
				return Global_89263[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_131(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x2137828D03306CAF(iParam0) || !unk_0x7FAC45D56235AB39(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_132(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xAA4F14DA15DB0B51(Global_103236.f_7010[iVar9], 0))
		{
			if (unk_0x62B2A00573987368(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_132(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_133(int iParam0)
{
	Global_101948.f_22 = iParam0;
}

