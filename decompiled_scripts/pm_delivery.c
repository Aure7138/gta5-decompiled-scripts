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
	var uLocal_38 = 0;
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
	var uLocal_101 = 0;
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
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
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
	unk_0x6F468A6C94DC21AE(1);
	if (unk_0xD63E63DFACCEB80E(3))
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
	
	if (unk_0x746960881FB19A89(iLocal_95))
	{
		if (unk_0xFC38B241541883D3(iLocal_95, 0))
		{
			iVar0 = 200;
			iVar1 = (unk_0xFD181DDA4D8D6786(iLocal_95) - 800);
			if (unk_0xB602FFF24CBFD2C5(iLocal_95))
			{
				unk_0x5C66176FC9E6724C(iLocal_95, (unk_0xFD181DDA4D8D6786(iLocal_95) - 5));
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
	while (iVar1 <= 7)
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
		Global_1328872.f_1 = 1;
		func_5(0, iVar0);
		Global_1328872.f_769[iVar0] = uParam0;
		Global_1328872.f_769.f_9[iVar0] = uParam1;
		StringCopy(&(Global_1328872.f_769.f_18[iVar0 /*16*/]), sParam2, 64);
		Global_1328872.f_769.f_156[iVar0] = uParam3;
		Global_1328872.f_769.f_147[iVar0] = uParam4;
		Global_1328872.f_769.f_174[iVar0] = iParam5;
		Global_1328872.f_769.f_183[iVar0 /*3*/] = fParam6;
		Global_1328872.f_769.f_183[iVar0 /*3*/].f_1 = fParam7;
		Global_1328872.f_769.f_208[iVar0] = iParam8;
		Global_1328872.f_769.f_217[iVar0] = uParam9;
		Global_1328872.f_769.f_252[iVar0] = iParam10;
		Global_1328872.f_769.f_261[iVar0] = iParam11;
		Global_1328872.f_769.f_270[iVar0] = iParam12;
		Global_1328872.f_769.f_279[iVar0] = iParam13;
		Global_1328872.f_764 = 1;
		Global_1328872.f_769.f_288[iVar0] = iParam14;
	}
}

void func_5(int iParam0, int iParam1)
{
	unk_0xEDB9A377CD8B7F03(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_6(int iParam0, int iParam1)
{
	return unk_0x94E72F17611BCD3C(Global_1328872.f_3613[iParam0], iParam1);
}

void func_7()
{
	int iVar0;
	
	iVar0 = (iLocal_79 - unk_0x17103F66FBB44C3C());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (unk_0x17103F66FBB44C3C() >= iLocal_83)
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	else
	{
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	}
	switch (iLocal_80)
	{
		case 0:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 10000))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 1:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 9000))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 2:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 8000))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 3:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 7000))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 4:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 6000))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 5:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 5000))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 6:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 4500))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 7:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 4000))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 8:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 3500))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 9:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 3000))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 10:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 2500))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 11:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 2000))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 12:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 1500))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 13:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 1000))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 14:
			if (unk_0x17103F66FBB44C3C() >= (iLocal_79 - 500))
			{
				unk_0x86F4B3D6FF8F65DE(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 15:
			if (unk_0x17103F66FBB44C3C() >= iLocal_79)
			{
				unk_0x86F4B3D6FF8F65DE(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 16:
			break;
	}
	if (unk_0x17103F66FBB44C3C() >= iLocal_79)
	{
		iLocal_37 = 3;
	}
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
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
		Global_1328872.f_1 = 1;
		func_5(7, iVar0);
		Global_1328872.f_3132[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = iParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = iParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = iParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
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
				if (!unk_0x3E0478C40AB5B38D(iLocal_92[iVar0]))
				{
					if (!unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Local_63, 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0xCDF07288D526B918(unk_0xCFC72E446B0B3AD7(), 2, 0);
						unk_0x4BAAF4A818239FFF(unk_0xCFC72E446B0B3AD7(), 0);
						unk_0x398F361E54424C32(unk_0xCFC72E446B0B3AD7(), 0f);
						iLocal_77 = 1;
					}
				}
			}
			else if (!unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_92[iVar0]))
				{
					unk_0x722E6B3A5162A6BB(iLocal_92[iVar0], unk_0x9F92518438215DD0(), 1000f, -1, 0, 0);
					unk_0xE8105B7E3908547D(iLocal_92[iVar0], 1);
					unk_0x995B3705D02B0401(&(iLocal_92[iVar0]));
				}
				if (unk_0x746960881FB19A89(uLocal_96))
				{
					unk_0x9187463EB4918A4D(&iLocal_96);
				}
			}
			iVar0++;
		}
	}
	if (func_20(&uLocal_38, Local_66, Global_21, 1, iLocal_95, sLocal_103, "", sLocal_104, 1, 0, 1, -1))
	{
		func_19(iLocal_95, 10.5f, 2, 1056964608, 0, 1);
		unk_0xF811299AF81DB581(unk_0x9F92518438215DD0(), 2000, 0);
		unk_0x4E4495A4D2C1856B(iLocal_95, 0);
		func_14(&uLocal_38, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_89)
	{
		if (!unk_0x3E0478C40AB5B38D(iLocal_89[iVar1]))
		{
			if (!unk_0x2E6E8D325977B3EC(uLocal_98[iVar1]))
			{
				uLocal_98[iVar1] = func_10(iLocal_89[iVar1], 1, 145);
				unk_0xF87DA7F5BA8C7D0F(&uLocal_119);
				unk_0xF811299AF81DB581(0, 0, 0);
				unk_0xF78316EFCA911012(0, unk_0x9F92518438215DD0(), 0, 16);
				unk_0x3179CCC77CBAB31F(uLocal_119);
				unk_0xC7EBE3C9AC83FAAA(iLocal_89[iVar1], uLocal_119);
				unk_0xCD02E3C29B8253A6(&uLocal_119);
				unk_0xE8105B7E3908547D(iLocal_89[iVar1], 1);
			}
			if (!unk_0x5093D6F9140AD109(iLocal_89[iVar1], unk_0x9F92518438215DD0(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (unk_0x2E6E8D325977B3EC(uLocal_98[iVar1]))
				{
					unk_0x0451B5D93A4BDAA0(&(uLocal_98[iVar1]));
				}
				unk_0x722E6B3A5162A6BB(iLocal_89[iVar1], unk_0x9F92518438215DD0(), 1000f, -1, 0, 0);
				unk_0xE8105B7E3908547D(iLocal_89[iVar1], 1);
				unk_0x995B3705D02B0401(&(iLocal_89[iVar1]));
			}
		}
		else if (unk_0x2E6E8D325977B3EC(uLocal_98[iVar1]))
		{
			unk_0x0451B5D93A4BDAA0(&(uLocal_98[iVar1]));
		}
		iVar1++;
	}
}

var func_10(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_11(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2E6E8D325977B3EC(uVar0)) && unk_0x75426D5397CE9E5D(&(Global_97358.f_29774[iParam2 /*29*/].f_3)))
	{
		unk_0x2A8C2BEEA4F7041F(uVar0, &(Global_97358.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x746960881FB19A89(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x5304FE8A2CED6AE8(iParam0);
	if (unk_0x2B1914308D0376C8(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_12(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xFEE42298F5E238BE(uVar0, bParam1);
		}
		else
		{
			unk_0x016722B6E0559A9A(uVar0, 2);
		}
	}
	else if (unk_0x4E178F5D4155391A(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_12(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
		unk_0xFEE42298F5E238BE(uVar0, bParam1);
	}
	else if (unk_0xA6C29CC20CD3DCB4(iParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_12(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
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
	func_127(1);
	func_105();
}

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x94E72F17611BCD3C(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_18(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
		{
			unk_0x0451B5D93A4BDAA0(&(uParam0->f_1[iVar0]));
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
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), iVar0);
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x2E6E8D325977B3EC(*uParam0))
	{
		unk_0x0451B5D93A4BDAA0(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
		{
			unk_0xF25BFC104A163677(uParam0->f_17[iVar0], 1);
			unk_0x9352BAE0948677D4(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 32, 1);
				unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_15()) && uParam0->f_17[iVar0] != unk_0x9F92518438215DD0())
				{
					unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 29))
			{
				unk_0x8AB186762992E626(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		unk_0xF25BFC104A163677(unk_0x9F92518438215DD0(), 1);
		unk_0x9352BAE0948677D4(unk_0x9F92518438215DD0(), 1);
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (bParam2)
		{
			unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_15()
{
	return unk_0x0CD9BC7F312ED395(unk_0x2563F6EECD8726D3());
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0)
{
	if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
	{
		unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
	}
}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x6A6A41C66448AD09(0, 71, 1);
	unk_0x6A6A41C66448AD09(0, 72, 1);
	unk_0x6A6A41C66448AD09(0, 76, 1);
	unk_0x6A6A41C66448AD09(0, 73, 1);
	unk_0x6A6A41C66448AD09(0, 59, 1);
	unk_0x6A6A41C66448AD09(0, 60, 1);
	if (bParam5)
	{
		unk_0x6A6A41C66448AD09(0, 75, 1);
	}
	unk_0x6A6A41C66448AD09(0, 80, 1);
	unk_0x6A6A41C66448AD09(0, 69, 1);
	unk_0x6A6A41C66448AD09(0, 70, 1);
	unk_0x6A6A41C66448AD09(0, 68, 1);
	unk_0x6A6A41C66448AD09(0, 74, 1);
	unk_0x6A6A41C66448AD09(0, 86, 1);
	unk_0x6A6A41C66448AD09(0, 81, 1);
	unk_0x6A6A41C66448AD09(0, 82, 1);
	unk_0x6A6A41C66448AD09(0, 138, 1);
	unk_0x6A6A41C66448AD09(0, 136, 1);
	unk_0x6A6A41C66448AD09(0, 114, 1);
	unk_0x6A6A41C66448AD09(0, 107, 1);
	unk_0x6A6A41C66448AD09(0, 110, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 89, 1);
	unk_0x6A6A41C66448AD09(0, 87, 1);
	unk_0x6A6A41C66448AD09(0, 88, 1);
	unk_0x6A6A41C66448AD09(0, 113, 1);
	unk_0x6A6A41C66448AD09(0, 115, 1);
	unk_0x6A6A41C66448AD09(0, 116, 1);
	unk_0x6A6A41C66448AD09(0, 117, 1);
	unk_0x6A6A41C66448AD09(0, 118, 1);
	unk_0x6A6A41C66448AD09(0, 119, 1);
	unk_0x6A6A41C66448AD09(0, 131, 1);
	unk_0x6A6A41C66448AD09(0, 132, 1);
	unk_0x6A6A41C66448AD09(0, 123, 1);
	unk_0x6A6A41C66448AD09(0, 126, 1);
	unk_0x6A6A41C66448AD09(0, 129, 1);
	unk_0x6A6A41C66448AD09(0, 130, 1);
	unk_0x6A6A41C66448AD09(0, 133, 1);
	unk_0x6A6A41C66448AD09(0, 134, 1);
	unk_0x2630A94EE47FEC93();
	if ((unk_0x17103F66FBB44C3C() - Global_28) > 500)
	{
		unk_0xEF5DFB41E5585C16(iParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = unk_0x17103F66FBB44C3C();
	if (!unk_0x0BA451447C3B1A8D(iParam0))
	{
		if (unk_0xE3DAC530D2CCDAE3(unk_0x9EF11DECA38804B6(iParam0)) <= fParam3)
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
		if (unk_0x9685D9855970A029())
		{
			bVar1 = false;
			if (unk_0xFC38B241541883D3(iParam18, 0))
			{
				if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam18, 0))
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
					if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
					{
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
					}
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 23))
					{
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 23);
					}
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_40(uParam0, iParam29))
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
					if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
					{
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
					}
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 9);
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
				if (bParam26 && unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
				{
					if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
					{
						unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
						func_42(sParam19);
					}
					if (unk_0x2E6E8D325977B3EC(*uParam0))
					{
						unk_0x0451B5D93A4BDAA0(uParam0);
					}
					if ((!func_36(uParam0, 1) && !func_35(uParam0)) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_33(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
							{
								func_31(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 0);
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
					{
						func_42("LOSE_WANTED");
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 0);
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 1);
					}
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 1))
					{
						if (!func_36(uParam0, 1))
						{
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
							{
								func_31(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0x2E6E8D325977B3EC(uParam0->f_5))
					{
						if (unk_0x2E6E8D325977B3EC(*uParam0))
						{
							unk_0x0451B5D93A4BDAA0(uParam0);
						}
						uParam0->f_5 = func_30(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xAFF0147EA2454485(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_29(uParam0->f_5, uParam0);
						}
					}
					else if (!func_28(Var3, unk_0xF4A29E04CA54F443(uParam0->f_5), 0.1f))
					{
						unk_0xAB1A4C1CDE66050B(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_29(uParam0->f_5, uParam0);
						}
					}
					if (!func_36(uParam0, 2))
					{
						if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 2))
						{
							func_33(uParam0, sParam19, 0);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0x94E72F17611BCD3C(uParam0->f_13, 13))
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
						unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0xFE0FA79BC49EBB07(unk_0x9F92518438215DD0(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x41EEB10CCC2497A8(unk_0x9F92518438215DD0(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
									if (!unk_0x44E080690DA76A2A(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x44E080690DA76A2A(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar2], func_15()) || !func_26(uParam0->f_17[iVar2], 1))
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
			else if (unk_0x746960881FB19A89(iParam18))
			{
				if ((bParam26 && unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) && (!unk_0x94E72F17611BCD3C(uParam0->f_13, 9) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 22)))
				{
					func_42(sParam24);
					func_42(sParam27);
					if (unk_0x2E6E8D325977B3EC(uParam0->f_5) || unk_0x2E6E8D325977B3EC(*uParam0))
					{
						unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
						unk_0x0451B5D93A4BDAA0(uParam0);
						func_42(sParam19);
					}
					if ((!func_36(uParam0, 1) && !func_35(uParam0)) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_33(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
							{
								func_31(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 0);
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
					{
						func_42("LOSE_WANTED");
						unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 0);
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 1);
					}
					if (unk_0x94E72F17611BCD3C(uParam0->f_13, 1))
					{
						if (!func_36(uParam0, 1))
						{
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
							{
								func_31(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 1);
						}
					}
					if (unk_0xFC38B241541883D3(iParam18, 0))
					{
						if (!unk_0x2E6E8D325977B3EC(*uParam0))
						{
							if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
							{
								unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
								func_42(sParam19);
							}
							*uParam0 = func_22(iParam18, 0, 0);
							unk_0xCA523773918411B5(*uParam0, 2);
							if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
							{
								func_29(*uParam0, uParam0);
							}
						}
						if (!func_36(uParam0, 2))
						{
							if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 3))
							{
								func_33(uParam0, sParam24, 0);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
								unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
							}
							else if (unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
							{
								if (!unk_0x471A7F8C908126F0(sParam27))
								{
									if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
									{
										func_33(uParam0, sParam27, 0);
										unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
								{
									func_33(uParam0, sParam24, 0);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
								}
								if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 23))
								{
									if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]))
									{
										func_31(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
				{
					unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
					func_42(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_36(uParam0, 2))
						{
							if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
							{
								if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x073B65E051D2F03E(0, iVar8);
									if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar9]))
									{
										func_31(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_33(uParam0, "MORE_SEATS", 0);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 3))
							{
								func_33(uParam0, sParam24, 0);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
								unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
							}
							else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
							{
								if (unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
								{
									func_33(uParam0, sParam27, 0);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_36(uParam0, 2))
					{
						if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 3))
						{
							func_33(uParam0, sParam24, 0);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 3);
							unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 4);
						}
						else if (unk_0x94E72F17611BCD3C(uParam0->f_13, 9))
						{
							if (!unk_0x471A7F8C908126F0(sParam27))
							{
								if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
								{
									func_33(uParam0, sParam27, 0);
									unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 4))
							{
								func_33(uParam0, sParam24, 0);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x94E72F17611BCD3C(uParam0->f_13, 0))
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 0);
		}
		func_42(sParam19);
		func_42(sParam24);
		func_42(sParam27);
		func_42(sParam24);
		func_42("LOSE_WANTED");
		if (unk_0x2E6E8D325977B3EC(uParam0->f_5))
		{
			unk_0x0451B5D93A4BDAA0(&(uParam0->f_5));
		}
		if (unk_0x2E6E8D325977B3EC(*uParam0))
		{
			unk_0x0451B5D93A4BDAA0(uParam0);
		}
	}
	unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 11);
	unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 12);
	return 0;
}

int func_22(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_23(var uParam0)
{
	if (unk_0x94E72F17611BCD3C(uParam0->f_13, 12))
	{
		if (func_25(unk_0x9F92518438215DD0()))
		{
			if (func_24(1, 0, 1) || unk_0x94E72F17611BCD3C(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_24(1, 0, 1) || unk_0x94E72F17611BCD3C(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_24(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x01F284681531A927())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x0BA451447C3B1A8D(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
		{
			return 0;
		}
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (bParam0)
		{
			if (unk_0x0BA451447C3B1A8D(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x0BA451447C3B1A8D(iVar0))
			{
				if (unk_0xB5BBEB12C77EE430(iVar0, -1) != unk_0x9F92518438215DD0())
				{
					return 0;
				}
			}
		}
		if (!unk_0x0BA451447C3B1A8D(iVar0))
		{
			if (unk_0xCC4F040D720C3035(iVar0) < 0.95f || unk_0xCC4F040D720C3035(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x6C08E4B26051504F(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	if (!unk_0x2439A8FCC113E966(unk_0xCFC72E446B0B3AD7()))
	{
		return 0;
	}
	return 1;
}

int func_25(int iParam0)
{
	float fVar0;
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		fVar0 = unk_0x9EF11DECA38804B6(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_26(int iParam0, int iParam1)
{
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()) && iParam1)
		{
			if (func_27(unk_0x9F92518438215DD0(), iParam0))
			{
				unk_0xB5F8484B6841C167(func_15(), 50f);
				return 1;
			}
		}
		else if (unk_0x91690C37B3C4E5FA(iParam0, func_15()))
		{
			unk_0xB5F8484B6841C167(func_15(), 50f);
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
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (unk_0x44615198247FF471(iParam0))
		{
			iVar0 = unk_0x1161215F69587BDA(iParam0, 0);
			if (unk_0xFC38B241541883D3(iVar0, 0))
			{
				if (!unk_0x3E0478C40AB5B38D(iParam1))
				{
					if (unk_0x2A2DBEFFFC03A22F(iParam1, iVar0))
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
	if (unk_0xE3DAC530D2CCDAE3((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE3DAC530D2CCDAE3((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0xE3DAC530D2CCDAE3((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_29(var uParam0, var uParam1)
{
	if (unk_0x2E6E8D325977B3EC(uParam0))
	{
		if (unk_0x2E6E8D325977B3EC(uParam1->f_6))
		{
			unk_0xD8EEE815F0120FCE(uParam1->f_6, 0);
		}
		unk_0x85EEFE5F20EFE4F4(0);
		unk_0x6B4C4F6AAE56C4E9();
		uParam1->f_6 = uParam0;
		unk_0xD8EEE815F0120FCE(uParam0, 1);
	}
}

var func_30(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x2290D76D0A4ACACA(Param0);
	unk_0xD4916ED85412C8D9(uVar0, func_12(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
	unk_0xD8EEE815F0120FCE(uVar0, iParam3);
	return uVar0;
}

void func_31(var uParam0, char* sParam1, int iParam2)
{
	unk_0xA3F41D007914F399(uParam0, sParam1, func_32(iParam2), 1);
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
		if (!unk_0x471A7F8C908126F0(sParam1))
		{
			if (!unk_0x6B08EC9A88700FBB(sParam1, ""))
			{
				func_34(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x17103F66FBB44C3C();
}

void func_34(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xF2274EFBA02CA0E6(sParam0);
	unk_0x51E13ACB7C47100D(iParam1, 1);
}

int func_35(var uParam0)
{
	if (!unk_0x3E0478C40AB5B38D(uParam0->f_16))
	{
		if (unk_0xE7C093C63744E17E(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_36(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xBB7E3545EC8FC5BF())
	{
		if (unk_0x18DF50385FACBD8E())
		{
			return 1;
		}
		if (func_39(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xBB7E3545EC8FC5BF())
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
	if (Global_15692 != 0 || unk_0xDFF00E8709AA7095())
	{
		return 1;
	}
	return 0;
}

int func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x17103F66FBB44C3C();
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
	
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		iVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
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
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x746960881FB19A89(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x95A70C0B34435CA8(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xC14639558EA3C489(iParam0, 1))
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
				if (!unk_0xC14639558EA3C489(iParam0, 1))
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
	if (!unk_0x471A7F8C908126F0(sParam0))
	{
		unk_0xE9EEE16322458D65(sParam0);
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
		if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0))
		{
			if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 29) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 28))
			{
				if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
				{
					unk_0x8AB186762992E626(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 29) && unk_0x94E72F17611BCD3C(uParam0->f_13, 28))
		{
			if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
			{
				unk_0x8AB186762992E626(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0x94E72F17611BCD3C(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x746960881FB19A89(uParam0->f_21))
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
			uVar24 = unk_0x86ED1EA56B0ED915(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), 50f, 0, iVar25);
			if (unk_0xFC38B241541883D3(uVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0xFC38B241541883D3(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x77009B1C011405A9(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
				{
					if (!unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0) || !bParam17)
					{
						if (func_41(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
								{
									unk_0x0365EE015603E149(uParam0->f_17[iVar0], 1f);
									if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_15()))
									{
										unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
									}
									if (unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], -1794415470) == 7 && !func_58(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0xBD280C076BC69C97(uParam0->f_17[iVar0]) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0]))
										{
											unk_0x4A1AC49BA4A747F7(uParam0->f_17[iVar0], 1);
											unk_0x4073360CA020BB84(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xC70FD27B0FCC0545(uParam0->f_17[iVar0], iVar0);
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
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
				{
					if (!unk_0x11CF47CA7B00BE4F(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x32D18ECD9E6F9BE2(uParam0->f_17[iVar0]);
					}
					if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_15()))
					{
						if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0x78267FAB4E1661CE(uParam0->f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 26))
	{
		if ((!func_55(uParam0) && unk_0x44615198247FF471(unk_0x9F92518438215DD0())) && !unk_0x746960881FB19A89(iParam10))
		{
			iVar13 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0xFC38B241541883D3(iVar13, 0))
			{
				if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 13))
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
							if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x073B65E051D2F03E(0, iVar26);
						if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar27]))
						{
							func_31(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_33(uParam0, "MORE_SEATS", 0);
						unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 13);
			func_42("MORE_SEATS");
		}
		if (!unk_0x746960881FB19A89(iParam10))
		{
			if ((!unk_0x3E0478C40AB5B38D(uParam0->f_17[0]) || !unk_0x3E0478C40AB5B38D(uParam0->f_17[1])) || !unk_0x3E0478C40AB5B38D(uParam0->f_17[2]))
			{
				if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 31))
				{
					if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()) && !func_36(uParam0, 2))
					{
						iVar13 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
						if (func_54(iVar13, uParam0))
						{
							func_33(uParam0, "CMN_VEHSUIT", 0);
							unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
				{
					unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 31);
					func_42("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xFC38B241541883D3(iParam10, 0))
		{
			if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), iParam10))
			{
				if (unk_0x205C5BF7277043DF(0, 75))
				{
					unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0x94E72F17611BCD3C(uParam0->f_13, 21))
			{
				unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x746960881FB19A89(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
				{
					if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_15()))
					{
						unk_0x04B1E4FA412227A8(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x04B1E4FA412227A8(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
					{
						iVar13 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
						if (unk_0xFC38B241541883D3(iVar13, 0))
						{
							if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_15()))
							{
								if (!func_55(uParam0) && unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
								{
									if (!func_53(uParam0->f_17[iVar0]))
									{
										unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x0BA451447C3B1A8D(iVar13))
						{
							if (unk_0x2A2DBEFFFC03A22F(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0x5BFFEED2EB6664D5(iVar13) && !unk_0xF37F1CECABC7FC33(iVar13))
								{
									Var28 = { unk_0x77009B1C011405A9(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_15()))
					{
						if (unk_0x44615198247FF471(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x1161215F69587BDA(uParam0->f_17[iVar0], 0);
							if (!unk_0x0BA451447C3B1A8D(iVar13))
							{
								if (unk_0xFC38B241541883D3(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), iVar13))
										{
											if (unk_0x9EF11DECA38804B6(iVar13) > 5f)
											{
												unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
									{
										iVar31 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
									}
									if (unk_0xFC38B241541883D3(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x9EF11DECA38804B6(iVar13) > 5f)
											{
												unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xDC6D5C817B48C45A(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_15()))
					{
						iVar32 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
						if (unk_0x746960881FB19A89(iVar32))
						{
							if (func_41(iVar32, uParam0, 0))
							{
								if (func_52(iVar0, uParam0) || !unk_0x94E72F17611BCD3C(uParam0->f_13, 27))
								{
									unk_0xC70FD27B0FCC0545(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_52(iVar0, uParam0))
							{
								if (unk_0xB6A50C909A8FABC3(iVar32) == joaat("sentinel2"))
								{
									unk_0xC70FD27B0FCC0545(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xC70FD27B0FCC0545(uParam0->f_17[iVar0], 2);
								}
								func_51(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_15()) && !func_50(uParam0->f_17[iVar0], iParam10)) && !func_49(uParam0->f_17[iVar0], iParam10))
					{
						if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_15()))
							{
								if (((!unk_0xBD280C076BC69C97(uParam0->f_17[iVar0]) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0])) && !unk_0x8EB51A494E8B42B4(uParam0->f_17[iVar0])) && !unk_0x11CF47CA7B00BE4F(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0x32D18ECD9E6F9BE2(uParam0->f_17[iVar0]);
									}
									unk_0x78267FAB4E1661CE(uParam0->f_17[iVar0], func_15());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x17103F66FBB44C3C();
								uParam0->f_1[iVar0] = func_22(uParam0->f_17[iVar0], 0, 0);
								unk_0xCA523773918411B5(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_29(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
					{
						if (((func_26(uParam0->f_17[iVar0], 1) || func_50(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xFC38B241541883D3(iParam10, 0) && !unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam10, 0)))
						{
							if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
							{
								unk_0x0451B5D93A4BDAA0(&(uParam0->f_1[iVar0]));
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
					else if (unk_0xFC38B241541883D3(iParam10, 0))
					{
						if (!unk_0x2A2DBEFFFC03A22F(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x5093D6F9140AD109(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0x94E72F17611BCD3C(uParam0->f_13, 11)) && !((bParam17 && unk_0x99A27D5F9B887E5F(unk_0xCFC72E446B0B3AD7(), 0)) && !unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam10, 0)))
							{
								if (unk_0x44615198247FF471(uParam0->f_17[iVar0]))
								{
									if (!unk_0x44E080690DA76A2A(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_26(uParam0->f_17[iVar0], 1))
										{
											if (func_25(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0xF811299AF81DB581(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_15()))
									{
										if ((((!unk_0x8EB51A494E8B42B4(uParam0->f_17[iVar0]) && !unk_0xBD280C076BC69C97(uParam0->f_17[iVar0])) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0])) && !unk_0x11CF47CA7B00BE4F(uParam0->f_17[iVar0])) && !unk_0x0FC809E10EF0EAC3(iParam10))
										{
											unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_58(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x8EB51A494E8B42B4(uParam0->f_17[iVar0]) && !unk_0x8EB51A494E8B42B4(unk_0x9F92518438215DD0())) && !func_48(uParam0->f_17[iVar0], 2f)) && !unk_0xBD280C076BC69C97(uParam0->f_17[iVar0])) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0])) && !unk_0x0FC809E10EF0EAC3(iParam10))
										{
											unk_0x4A1AC49BA4A747F7(uParam0->f_17[iVar0], 1);
											if (unk_0x94E72F17611BCD3C(uParam0->f_13, 10))
											{
												unk_0x0365EE015603E149(uParam0->f_17[iVar0], 1f);
											}
											unk_0x4073360CA020BB84(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xC5E1B2288C6D4382(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_22(uParam0->f_17[iVar0], 0, 0);
										unk_0xCA523773918411B5(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_15()))
							{
								if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0xBD280C076BC69C97(uParam0->f_17[iVar0]) && !unk_0x11579615465D25B4(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0xE962BD784DD0E442(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0x32D18ECD9E6F9BE2(uParam0->f_17[iVar0]);
										}
										unk_0x4A1AC49BA4A747F7(uParam0->f_17[iVar0], 0);
										unk_0x78267FAB4E1661CE(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), iParam10))
						{
							if (!unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_15()))
							{
								if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 21))
								{
									unk_0x78267FAB4E1661CE(uParam0->f_17[iVar0], func_15());
								}
							}
							else if (unk_0x94E72F17611BCD3C(uParam0->f_13, 21))
							{
								unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x91690C37B3C4E5FA(uParam0->f_17[iVar0], func_15()) && !unk_0x0FC809E10EF0EAC3(iParam10))
						{
							unk_0x1FA92C26AB9467D3(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
				{
					unk_0x0451B5D93A4BDAA0(&(uParam0->f_1[iVar0]));
					func_42(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
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
						if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
						{
							if (func_53(uParam0->f_17[iVar0]) || unk_0x5093D6F9140AD109(uParam0->f_17[iVar0], unk_0x9F92518438215DD0(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
					{
						if (!unk_0x5093D6F9140AD109(uParam0->f_17[iVar0], unk_0x9F92518438215DD0(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_53(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x17103F66FBB44C3C();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 5))
							{
								func_33(uParam0, sParam7, 0);
								unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 5);
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
										if (!unk_0x471A7F8C908126F0(uVar19[iVar0]))
										{
											if (!unk_0x6B08EC9A88700FBB(uVar19[iVar0], ""))
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
		unk_0xF76EE56D3E7DAF1B(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x2E6E8D325977B3EC(uParam0->f_1[iVar0]))
				{
					unk_0x0451B5D93A4BDAA0(&(uParam0->f_1[iVar0]));
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
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 16);
			break;
	}
}

void func_45(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x471A7F8C908126F0(sParam1))
		{
			if (!unk_0x6B08EC9A88700FBB(sParam1, ""))
			{
				func_46(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x17103F66FBB44C3C();
}

void func_46(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xF2274EFBA02CA0E6(sParam0);
	unk_0xDB4BC767CEF09274(uParam1);
	unk_0x51E13ACB7C47100D(iParam2, 1);
}

int func_47(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 14);
		
		case 1:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 15);
		
		case 2:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_48(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x827151D7B70CB853(iParam0, 0))
	{
		iVar0 = unk_0x1161215F69587BDA(iParam0, 0);
		if (!unk_0x0BA451447C3B1A8D(iVar0))
		{
			if (unk_0x9EF11DECA38804B6(iVar0) > fParam1)
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
	
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (!unk_0x91690C37B3C4E5FA(iParam0, func_15()))
		{
			iVar0 = unk_0xBD0F8DEB580D2E67(iParam0);
			if (unk_0xFC38B241541883D3(iParam1, 0))
			{
				if (unk_0x5093D6F9140AD109(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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
	if (!unk_0x3E0478C40AB5B38D(iParam0))
	{
		if (unk_0x746960881FB19A89(iParam1))
		{
			if (unk_0xFC38B241541883D3(iParam1, 0))
			{
				if (unk_0x2A2DBEFFFC03A22F(iParam0, iParam1))
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
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_13), 19);
			break;
	}
}

int func_52(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 17);
		
		case 1:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 18);
		
		case 2:
			return unk_0x94E72F17611BCD3C(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		iVar0 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
		if (unk_0xFC38B241541883D3(iVar0, 0))
		{
			if (!unk_0x3E0478C40AB5B38D(iParam0))
			{
				iVar1 = unk_0xEF1C7D5F912BEE3D(iParam0);
				if (unk_0xFC38B241541883D3(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x5093D6F9140AD109(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		if (unk_0xB6A50C909A8FABC3(iParam0) == joaat("bus") || unk_0xB6A50C909A8FABC3(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x3E0478C40AB5B38D(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xB5BBEB12C77EE430(iParam0, 0);
			if (!unk_0x3E0478C40AB5B38D(iVar3))
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
			iVar4 = unk_0xB5BBEB12C77EE430(iParam0, 1);
			if (!unk_0x3E0478C40AB5B38D(iVar4))
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
			iVar5 = unk_0xB5BBEB12C77EE430(iParam0, 2);
			if (!unk_0x3E0478C40AB5B38D(iVar5))
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
	
	if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
	{
		uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
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
	
	if (!unk_0x3E0478C40AB5B38D(iParam1))
	{
		if (unk_0x44615198247FF471(iParam1))
		{
			uVar0 = unk_0x1161215F69587BDA(iParam1, 0);
			if (!unk_0x0BA451447C3B1A8D(uVar0))
			{
				if (unk_0xFC38B241541883D3(iVar0, 0))
				{
					if (unk_0x2A2DBEFFFC03A22F(unk_0x9F92518438215DD0(), iVar0))
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
				else if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xEF1C7D5F912BEE3D(unk_0x9F92518438215DD0());
				if (unk_0x746960881FB19A89(iVar0))
				{
					if (func_41(iVar0, uParam0, 0))
					{
						if (unk_0xFC38B241541883D3(iVar0, 0))
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
	
	if (!unk_0x0BA451447C3B1A8D(uParam0))
	{
		fVar0 = unk_0x9EF11DECA38804B6(iParam0);
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
	
	if (!unk_0x3E0478C40AB5B38D(uParam0))
	{
		if (unk_0xFC38B241541883D3(iParam1, 0))
		{
			iVar0 = unk_0xEF1C7D5F912BEE3D(iParam0);
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
	
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
	{
		iVar0 = unk_0xBD0F8DEB580D2E67(unk_0x9F92518438215DD0());
		if (unk_0xFC38B241541883D3(iVar0, 0))
		{
			iVar1 = unk_0xB5BBEB12C77EE430(iVar0, 0);
			if (!unk_0x3E0478C40AB5B38D(iVar1))
			{
				if (iVar1 != unk_0x9F92518438215DD0())
				{
					if (unk_0x34E74FF8690AA4B1(iVar1))
					{
						if (!unk_0xACBBD9D9F0EB7D59(iVar1, unk_0x9F92518438215DD0()))
						{
							unk_0x402A96371F34E6D8(iVar1, unk_0x9F92518438215DD0(), 2000, 2048, 2);
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
	
	if (!unk_0x94E72F17611BCD3C(uParam0->f_13, 25))
	{
		if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x9001FCB58244C11D(unk_0x9F92518438215DD0(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x746960881FB19A89(uParam0->f_17[iVar0]))
			{
				if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
				{
					unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 32, 0);
					unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 305, 1);
					unk_0x9001FCB58244C11D(uParam0->f_17[iVar0], 268, 1);
					unk_0xC5E1B2288C6D4382(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_13), 25);
	}
}

void func_61(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x746960881FB19A89(uParam0->f_17[iVar0]))
		{
			if (!unk_0x3E0478C40AB5B38D(uParam0->f_17[iVar0]))
			{
				if (unk_0x44615198247FF471(uParam0->f_17[iVar0]))
				{
					unk_0xF25BFC104A163677(uParam0->f_17[iVar0], 0);
					unk_0x9352BAE0948677D4(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x378E80A2B7D7C8DF(unk_0xCFC72E446B0B3AD7()))
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (unk_0x44615198247FF471(unk_0x9F92518438215DD0()))
			{
				unk_0xF25BFC104A163677(unk_0x9F92518438215DD0(), 0);
				unk_0x9352BAE0948677D4(unk_0x9F92518438215DD0(), 0);
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
	
	if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_95, 0))
	{
		if (unk_0x2E6E8D325977B3EC(uLocal_101))
		{
			unk_0x0451B5D93A4BDAA0(&uLocal_101);
		}
		if (iLocal_35 <= 2)
		{
			iLocal_79 = (unk_0xCA35CA70AAE8FBC6() * ((60 * iLocal_81) + iLocal_82));
			iLocal_79 = (iLocal_79 + unk_0x17103F66FBB44C3C());
			iLocal_83 = (iLocal_79 - unk_0xCA35CA70AAE8FBC6() * 30);
		}
		else if (iLocal_35 > 6)
		{
			iLocal_79 = (unk_0xCA35CA70AAE8FBC6() * ((60 * iLocal_81) + iLocal_82));
			iLocal_79 = (iLocal_79 + unk_0x17103F66FBB44C3C());
			iLocal_83 = (iLocal_79 - unk_0xCA35CA70AAE8FBC6() * 30);
		}
		else if (iLocal_35 >= 3 && iLocal_35 <= 4)
		{
			iLocal_96 = unk_0xB0694AD0A3BB8936(iLocal_88, Local_69, fLocal_73, 1, 1);
			iLocal_92[0] = unk_0xAD7526C9AA33EE39(iLocal_96, 6, iLocal_86, -1, 1, 1);
			iLocal_92[1] = unk_0xAD7526C9AA33EE39(iLocal_96, 6, iLocal_86, 0, 1, 1);
			unk_0x4B38C66919CC2E48("rghCop", &uLocal_117);
			unk_0xF2061C15946C53A2(4, uLocal_117, joaat("player"));
			unk_0x64277E0EB39C1162(iLocal_92[0], 39, 1);
			unk_0x64277E0EB39C1162(iLocal_92[1], 39, 1);
			iVar0 = 0;
			while (iVar0 < iLocal_92)
			{
				unk_0x46D3B8FF073CD238(iLocal_92[iVar0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xA2972B846BDC7E33(iLocal_92[iVar0], 100f);
				unk_0xA50AD6983D49A772(iLocal_92[iVar0], uLocal_117);
				iVar0++;
			}
		}
		iLocal_37 = 2;
	}
}

void func_65()
{
	int iVar0;
	
	if (!unk_0x0BA451447C3B1A8D(iLocal_95))
	{
		if (func_92() || unk_0x3E0478C40AB5B38D(iLocal_89[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_89)
			{
				if (!unk_0x3E0478C40AB5B38D(iLocal_89[iVar0]))
				{
					if (!unk_0x2E6E8D325977B3EC(uLocal_98[iVar0]))
					{
						uLocal_98[iVar0] = func_10(iLocal_89[iVar0], 1, 145);
						unk_0x64277E0EB39C1162(iLocal_89[iVar0], 1, 0);
						unk_0xF87DA7F5BA8C7D0F(&uLocal_119);
						unk_0xF811299AF81DB581(0, 0, 0);
						unk_0xF78316EFCA911012(0, unk_0x9F92518438215DD0(), 0, 16);
						unk_0x3179CCC77CBAB31F(uLocal_119);
						unk_0xC7EBE3C9AC83FAAA(iLocal_89[iVar0], uLocal_119);
						unk_0xCD02E3C29B8253A6(&uLocal_119);
					}
				}
				else if (unk_0x2E6E8D325977B3EC(uLocal_98[iVar0]))
				{
					unk_0x0451B5D93A4BDAA0(&(uLocal_98[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_78)
		{
			if (!unk_0x3E0478C40AB5B38D(iLocal_89[0]))
			{
				if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), iLocal_89[0], 50f, 50f, 50f, 0, 1, 0))
				{
					unk_0x7FC0EEAECC1615C3(iLocal_89[0], iLocal_95, unk_0x9F92518438215DD0(), 8, 25f, 786469, -1f, -1f, 1);
					iLocal_78 = 1;
				}
			}
		}
		if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), iLocal_95, 0))
		{
			if (unk_0x2E6E8D325977B3EC(uLocal_101))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_101);
			}
			func_91(&uLocal_105, 0, 0);
			iLocal_37 = 2;
		}
		else if (unk_0x4A33023BC86AAA7F(iLocal_95, -1) || unk_0x3E0478C40AB5B38D(iLocal_89[0]))
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
	if (!unk_0x3E0478C40AB5B38D(iLocal_89[0]) && !unk_0x0BA451447C3B1A8D(iLocal_95))
	{
		if (unk_0x44E080690DA76A2A(iLocal_89[0], iLocal_95, 0))
		{
			func_67(&uLocal_105, iLocal_95, 0, 0, 1, 1, 1);
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
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
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
	
	if (uParam0->f_1 && unk_0x66ABEB57BE23A1E8())
	{
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x471A7F8C908126F0(iVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
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
	if (func_88(uParam1) && unk_0xB3CC729BBAA21637(uParam1))
	{
		iVar1 = 0;
		if (unk_0x4E178F5D4155391A(uParam1))
		{
			unk_0x77AD4F1EB5E9941E(unk_0x240654B57CFFBFB3(iParam1));
			unk_0x86240DC80CA03EAA(unk_0x240654B57CFFBFB3(iParam1), 1);
			if (unk_0x279B7F77009BB4FE(unk_0x240654B57CFFBFB3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x2B1914308D0376C8(iParam1))
		{
			unk_0x13DE0701DBD9B873(unk_0x40A2BB73421EA79A(iParam1));
			if (unk_0x89E19A8E46D632B8(unk_0x40A2BB73421EA79A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam1))
		{
			unk_0x0468D4FE2D4E06D1(unk_0xBF367154777CAECE(iParam1));
			if (unk_0x2EF3D938DF2094F2(unk_0xBF367154777CAECE(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x66ABEB57BE23A1E8())
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
					if ((unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0)) && unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
					{
						if ((iVar1 && !unk_0xC9EED58014EF1F40()) && uParam8)
						{
							if (!func_90(iVar0))
							{
								func_74(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
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
				if (unk_0x471A7F8C908126F0(uParam0->f_3) && !unk_0x471A7F8C908126F0(iVar0))
				{
					if (((unk_0x0FF9FE2CB115CFB9(iParam1) && iVar1) && !unk_0xC9EED58014EF1F40()) && uParam8)
					{
						if (!func_90(iVar0))
						{
							func_74(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6B08EC9A88700FBB("CMN_HINT", iVar0))
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
			if (!unk_0x471A7F8C908126F0(sParam5))
			{
				if (func_90(sParam5))
				{
					unk_0x35611EEE7A1FFEDB(1);
				}
			}
			if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
			{
				if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
				{
					if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
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
	if (func_88(unk_0x9F92518438215DD0()))
	{
		unk_0xD2062A6AC314B85E(unk_0x9F92518438215DD0());
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0x3229F8D82C561641(1);
		unk_0xF457518D39569180(0);
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		unk_0x075BBF37597121A7("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x17103F66FBB44C3C()
		{
			return 1;
		}
	}
	return 0;
}

int func_73(bool bParam0)
{
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97358.f_8303.f_100++;
			}
			return Global_97358.f_8303.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97358.f_8303.f_101++;
			}
			return Global_97358.f_8303.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97358.f_8303.f_102++;
			}
			return Global_97358.f_8303.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_74(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

int func_75(char* sParam0)
{
	if (!func_76(1, 1, 0))
	{
		if ((!unk_0x9E9AFDBF482248F6(sParam0) && func_90(sParam0)) || func_90("CMN_HINT"))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
		return 0;
	}
	switch (Global_34913)
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
		if (!unk_0x1C7932D7B27409A6(unk_0xCFC72E446B0B3AD7()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x2D8FCFBC4E01FF7C())
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
	if (unk_0xB693DB1187BBD585())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (unk_0x7B47A371E2D93C2C(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51932)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
		{
			if (unk_0x3B83AAE4CA8F87EC(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(3) == 3 || unk_0xB49A1BEB8771FD4C(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8524DF00FC9C3785(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(6) == 3 || unk_0xB49A1BEB8771FD4C(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC438EC3E56EB640E(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(4) == 3 || unk_0xB49A1BEB8771FD4C(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xBFC77F45674913F8(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(5) == 3 || unk_0xB49A1BEB8771FD4C(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x633DA2F150D07C27(unk_0x9F92518438215DD0()))
			{
				if (unk_0xB49A1BEB8771FD4C(2) == 3 || unk_0xB49A1BEB8771FD4C(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xAF8ACF13449C208C() == 3 || unk_0xAF8ACF13449C208C() == 4)
			{
				return 0;
			}
			if (unk_0x9DA0D8B7E5367D16())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_77()
{
	return unk_0x17103F66FBB44C3C() <= Global_17236.f_5130 + 100;
}

int func_78(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
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
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x0BA451447C3B1A8D(uParam1))
	{
		func_91(uParam0, 0, 0);
	}
	if (func_82(Param2, 0f, 0f, 0f))
	{
		if (unk_0x4E178F5D4155391A(iParam1))
		{
			uVar0 = unk_0x240654B57CFFBFB3(iParam1);
			if (!unk_0x827151D7B70CB853(uVar0, 0))
			{
				if (unk_0x2FCB242469087013(iVar0))
				{
					if (!func_80())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xA880B447140A3E0D(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x3229F8D82C561641(0);
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
	unk_0x7762AD97EBCE06D8(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x402A96371F34E6D8(unk_0x9F92518438215DD0(), iParam1, -1, iVar3, iVar4);
	unk_0x20BCECAA3CCE96D0("FocusIn", 0, 0);
	unk_0x9B517A4FE28A719F("HINT_CAM_SCENE");
	unk_0x86F4B3D6FF8F65DE(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x17103F66FBB44C3C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_80()
{
	return func_81(unk_0xCFC72E446B0B3AD7());
}

int func_81(var uParam0)
{
	if (unk_0xB6A50C909A8FABC3(unk_0x4E6043D225B9C75F(uParam0)) == joaat("mp_f_freemode_01"))
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
		if (unk_0x17103F66FBB44C3C() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					if (func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x17103F66FBB44C3C();
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
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
					{
						if (!func_87(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x17103F66FBB44C3C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x17103F66FBB44C3C();
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
				if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
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
				if (!func_86(bParam1, bParam2, bParam3) || unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
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
			if ((unk_0x17103F66FBB44C3C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1))
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
					if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || func_84(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 1) || unk_0xFB39E95238A639FE(unk_0x9F92518438215DD0(), 2))
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
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x52F1618353272A82(0, 80))
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
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x52F1618353272A82(0, 80))
			{
				unk_0x3229F8D82C561641(0);
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
	if (!unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		if (!unk_0xFC431486FFB3EF94(unk_0xCFC72E446B0B3AD7()))
		{
			unk_0x6A6A41C66448AD09(0, 140, 1);
			unk_0x6A6A41C66448AD09(0, 80, 1);
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
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
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		unk_0x6A6A41C66448AD09(0, 80, 1);
		if (unk_0x2C5534A802F57303())
		{
			if (unk_0x9F02FE1D24674A84(0, 80) && unk_0x17103F66FBB44C3C() > Global_96)
			{
				unk_0x3229F8D82C561641(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_88(int iParam0)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (unk_0x2B1914308D0376C8(iParam0))
		{
			if (unk_0xFC38B241541883D3(unk_0x40A2BB73421EA79A(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4E178F5D4155391A(iParam0))
		{
			if (!unk_0x3E0478C40AB5B38D(unk_0x240654B57CFFBFB3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xA6C29CC20CD3DCB4(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_89()
{
	unk_0xEDB9A377CD8B7F03(&Global_2264, 4);
}

bool func_90(char* sParam0)
{
	unk_0x1935773249F749A2(sParam0);
	return unk_0x7796B4D54E5DF47E(0);
}

void func_91(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_2446533.f_4399, 25))
		{
			return;
		}
	}
	if (unk_0x66ABEB57BE23A1E8())
	{
		unk_0xF457518D39569180(iParam2);
		unk_0x075BBF37597121A7("FocusIn");
		unk_0x6041FBFC1EE8196A("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x20BCECAA3CCE96D0("FocusOut", 0, 0);
			unk_0x86F4B3D6FF8F65DE(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x3229F8D82C561641(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x471A7F8C908126F0(sVar0))
	{
		if (!unk_0x4B69FB3A5B09A1BA())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x471A7F8C908126F0(uParam0->f_3))
	{
		if (func_90(uParam0->f_3))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
	if (!unk_0x471A7F8C908126F0(sVar0))
	{
		if (func_90(sVar0))
		{
			unk_0x35611EEE7A1FFEDB(1);
		}
	}
}

int func_92()
{
	if (unk_0x746960881FB19A89(iLocal_95))
	{
		if (!unk_0x0BA451447C3B1A8D(iLocal_95))
		{
			if ((((((unk_0xFD181DDA4D8D6786(iLocal_95) < 300 || unk_0x9D878480FA8925BB(iLocal_95) < 200f) || unk_0x0FC809E10EF0EAC3(iLocal_95)) || (unk_0xD8E4239907299552(iLocal_95, 0, 0) && unk_0xD8E4239907299552(iLocal_95, 1, 0))) || (unk_0xD8E4239907299552(iLocal_95, 4, 0) && unk_0xD8E4239907299552(iLocal_95, 5, 0))) || (unk_0xD8E4239907299552(iLocal_95, 0, 0) && unk_0xD8E4239907299552(iLocal_95, 4, 0))) || (unk_0xD8E4239907299552(iLocal_95, 1, 0) && unk_0xD8E4239907299552(iLocal_95, 5, 0)))
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
	if (!unk_0xFC38B241541883D3(iLocal_95, 0))
	{
		iLocal_95 = unk_0xB0694AD0A3BB8936(iLocal_87, Local_63, uLocal_72, 1, 1);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			unk_0x2125574BF8773B98(iLocal_95, iVar0, 1);
			iVar0++;
		}
		if (iLocal_84 != -1)
		{
			unk_0x2125574BF8773B98(iLocal_95, iLocal_84, 0);
		}
	}
	unk_0x9656A574D7E2E64F(iLocal_95, 1);
	uLocal_101 = func_94(iLocal_95, 0, 0);
	if (iLocal_35 != 5 && iLocal_35 != 6)
	{
		if (iLocal_35 > 6)
		{
			unk_0x08B4E5756419497B(iLocal_95, 0, 0, 0, 0, 1, 0, 0, 0);
			unk_0x98EA7CB0A268270F(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_95, 0, 0, 0);
		}
		func_34(sLocal_102, 7500, 1);
	}
	else
	{
		iLocal_89[0] = unk_0xAD7526C9AA33EE39(iLocal_95, 26, iLocal_85, -1, 1, 1);
		iLocal_89[1] = unk_0xAD7526C9AA33EE39(iLocal_95, 26, iLocal_85, 0, 1, 1);
		unk_0x4B38C66919CC2E48("rghCriminal", &uLocal_118);
		unk_0xF2061C15946C53A2(5, uLocal_118, joaat("player"));
		iVar1 = 0;
		while (iVar1 < iLocal_89)
		{
			unk_0x4A1AC49BA4A747F7(iLocal_89[iVar1], 1);
			unk_0x46D3B8FF073CD238(iLocal_89[iVar1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
			unk_0xA50AD6983D49A772(iLocal_89[iVar1], uLocal_118);
			iVar1++;
		}
		unk_0xAFFE01EF7078CAD9(iLocal_89[0], iLocal_95, 25f, 786599);
		func_34("PMDL_REC", 7500, 1);
	}
	if (!unk_0x0BA451447C3B1A8D(unk_0x228A016F863DED95()))
	{
		iLocal_97 = unk_0x228A016F863DED95();
	}
	iLocal_37 = 1;
}

int func_94(var uParam0, bool bParam1, bool bParam2)
{
	return func_11(uParam0, !bParam1, bParam2);
}

int func_95(int iParam0)
{
	if (unk_0xFC38B241541883D3(Global_96071.f_222[iParam0], 0))
	{
		unk_0x336AE92FD68DEF98(Global_96071.f_222[iParam0], 1, 1);
		return Global_96071.f_222[iParam0];
	}
	return 0;
}

int func_96()
{
	if (unk_0x746960881FB19A89(iLocal_95))
	{
		if (unk_0xFC38B241541883D3(iLocal_95, 0))
		{
			if (!unk_0x5093D6F9140AD109(iLocal_95, unk_0x9F92518438215DD0(), 300f, 300f, 300f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x3E0478C40AB5B38D(iLocal_89[0]))
	{
		if (unk_0x2E6E8D325977B3EC(uLocal_98[0]))
		{
			unk_0x0451B5D93A4BDAA0(&(uLocal_98[0]));
		}
	}
	return 0;
}

void func_97()
{
	unk_0x3BC6D217451D6BB7(iLocal_87);
	unk_0x9C53AD1E8A38ADEE("PMDL", 0);
	if (iLocal_35 >= 3 && iLocal_35 <= 4)
	{
		unk_0x3BC6D217451D6BB7(iLocal_86);
		unk_0x3BC6D217451D6BB7(iLocal_88);
	}
	else if (iLocal_35 == 5 || iLocal_35 == 6)
	{
		unk_0x3BC6D217451D6BB7(iLocal_85);
	}
	unk_0x60DAE84D0B296FD2(joaat("benson"), 1);
	unk_0x60DAE84D0B296FD2(joaat("pony2"), 1);
	if (unk_0x149162179DBAEDB0(iLocal_87) && unk_0x7DE7B5897062BC2C(0))
	{
		if (iLocal_35 >= 3 && iLocal_35 <= 4)
		{
			if (unk_0x149162179DBAEDB0(iLocal_86) && unk_0x149162179DBAEDB0(iLocal_88))
			{
				bLocal_74 = true;
			}
		}
		else if (iLocal_35 == 5 || iLocal_35 == 6)
		{
			if (unk_0x149162179DBAEDB0(iLocal_85))
			{
				bLocal_74 = true;
			}
		}
		else if (iLocal_35 > 6)
		{
			if (unk_0xEC2376DA57EC68E1("Deliveries", 0))
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
		fVar0 = unk_0x91EAD4F2F9B5B38A(Local_63, Local_66, 1);
		iLocal_82 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_102() == 13)
	{
		Local_66 = { -323.356f, 6264.431f, 30.4463f };
		fVar0 = unk_0x91EAD4F2F9B5B38A(Local_63, Local_66, 1);
		iLocal_82 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_102() == 12)
	{
		Local_66 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = unk_0x91EAD4F2F9B5B38A(Local_63, Local_66, 1);
		iLocal_82 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (func_102() == 11)
	{
		Local_66 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = unk_0x91EAD4F2F9B5B38A(Local_63, Local_66, 1);
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
	return Global_96071.f_20;
}

int func_103()
{
	return func_104(Global_96071.f_20, Global_96071.f_29);
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
	unk_0x60DAE84D0B296FD2(joaat("benson"), 0);
	unk_0x60DAE84D0B296FD2(joaat("pony2"), 0);
	unk_0xD1622C66EC50A005();
	if (iLocal_76)
	{
		if (!unk_0x0BA451447C3B1A8D(iLocal_97))
		{
			func_106(iLocal_97, 0, 145);
		}
		unk_0x0A28407BD5150043(unk_0xCFC72E446B0B3AD7());
		func_91(&uLocal_105, 0, 0);
	}
	unk_0xE60DEFFB2A853900();
}

int func_106(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0xC6FE92FD1DF5318E(iParam0, &uVar0);
		if (!unk_0x9E9AFDBF482248F6(uVar1))
		{
			if (unk_0x398F092142D37E17(sVar1) == unk_0x398F092142D37E17("vehicle_gen_controller"))
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
		iVar0 = unk_0xB5BBEB12C77EE430(iParam0, -1);
		if (!unk_0x746960881FB19A89(iVar0))
		{
			iVar0 = unk_0xDF49708B4996403C(iParam0, -1);
		}
		if (unk_0x746960881FB19A89(iVar0) && !unk_0x3E0478C40AB5B38D(iVar0))
		{
			if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xB6A50C909A8FABC3(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97358.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xB6A50C909A8FABC3(iParam0) == Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x9E9AFDBF482248F6(&(Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x6B08EC9A88700FBB(unk_0xDFECACF4B22FB69E(iParam0), &(Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97358.f_18371.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97358.f_18371.f_4800[iVar1] = iVar2;
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
		if (unk_0xB6A50C909A8FABC3(iParam0) == Global_97358.f_18371.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x9E9AFDBF482248F6(&(Global_97358.f_18371.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x6B08EC9A88700FBB(unk_0xDFECACF4B22FB69E(iParam0), &(Global_97358.f_18371.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97358.f_18371.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97358.f_18371.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_97358.f_18371.f_4796 = 1;
	func_108(iParam0, &(Global_97358.f_18371.f_4742));
}

void func_108(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xFC38B241541883D3(iParam0, 0))
	{
		func_111(uParam1);
		uParam1->f_42 = unk_0xB6A50C909A8FABC3(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xDFECACF4B22FB69E(iParam0), 16);
		*uParam1 = unk_0x015D5CDAA9114947(iParam0);
		unk_0x9EB96E7956694DA9(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x4096E2FD42D248FC(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9A09BEE60599C8C6(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x754F7DC22DC17C57(iParam0);
		uParam1->f_43 = unk_0x19CE0669140A3681(iParam0);
		uParam1->f_45 = unk_0x87C86C986E8206D3(iParam0);
		uParam1->f_46 = unk_0x433D30FBB06F5E87(iParam0);
		unk_0x87C25793C98E3EDD(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0x1B3DD3EA702F7E43(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 2))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 28);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 3))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 29);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 30);
		}
		if (unk_0xEA0BE4C867F7CF5D(iParam0, 1))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0xD3FA39A943FC7567(iParam0, 0))
		{
			uParam1->f_44 = unk_0x110EA7EDEDCFBFE8(iParam0);
		}
		if (unk_0xDB519A4108C6BFB1(uParam1->f_42))
		{
			if (unk_0x39A71639E61C656C(iParam0))
			{
				switch (unk_0x5077B59B95490801(iParam0))
				{
					case 2:
					case 0:
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 23);
						unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 23);
						unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x960C88BA5B643397(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 9);
		}
		if (unk_0x35329BF26006D691(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 10);
		}
		if (unk_0x93F3EEE519AAA9E3(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 13);
			unk_0xF16D2D3110DDCF5F(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x104FDCF227248C6F(iParam0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 12);
		}
		func_110(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x364F41CAA0A051EA(iParam0, iVar0 + 1))
			{
				unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), func_109(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x8B13B9F670524CB7(iParam0, 0))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 11);
		}
		if (unk_0xB4289912C78431FE(iParam0, "IgnoredByQuickSave") && unk_0x8AEE5670B72C39C1(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(uParam1->f_53), 27);
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
	
	if (!unk_0xFC38B241541883D3(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x2C1B23216A36AE4C(*iParam0) == 0)
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
			if (unk_0xC39F5439AB30508A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x68446DE1A840C25F(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x191F73B5E833A5BC(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x191F73B5E833A5BC(*iParam0, iVar0);
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
	if ((((((((((!unk_0x746960881FB19A89(iParam0) || !unk_0xFC38B241541883D3(iParam0, 0)) || func_125(iParam0, 0, 0)) || func_125(iParam0, 1, 0)) || func_125(iParam0, 2, 0)) || func_124(iParam0) != 145) || func_123(iParam0)) || func_122(iParam0)) || func_121(iParam0)) || func_120(iParam0)) || !func_113(unk_0xB6A50C909A8FABC3(iParam0)))
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
	if (((unk_0x567194A60F82D51A(iParam0) || unk_0xDB519A4108C6BFB1(iParam0)) || unk_0xAAF77E03CD60491E(iParam0)) || unk_0x297BD02A9765671B(iParam0))
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
	if (!unk_0x71A852A48EEBEFCC(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x4B69FB3A5B09A1BA())) || (iParam0 == joaat("buffalo3") && !unk_0x4B69FB3A5B09A1BA())) || (iParam0 == joaat("gauntlet2") && !unk_0x4B69FB3A5B09A1BA())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x4B69FB3A5B09A1BA())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_119())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x7B787FDDFE6F942B())
		{
			if (unk_0x3B23C8D6B23157DE(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xCB8350C6120AA79A(Var1.f_0))
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
		if ((unk_0x035E2C7B598704F7() || unk_0x708CE249B4F97BF8()) || unk_0x7F11C755C90EFEC5())
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
	if (unk_0x9501317225249120(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	var uVar0;
	
	if (unk_0x6979E33C9417DF13())
	{
		if (unk_0x94E72F17611BCD3C(unk_0xF10205C2D28EABD5(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131677 == 2)
	{
		return 1;
	}
	if (unk_0x9183AA5076D2BF07())
	{
		if (unk_0x92966E63982CCDA8())
		{
			if (unk_0xDE4ECE183EAC7EDB())
			{
				if (unk_0x6979E33C9417DF13())
				{
					uVar0 = unk_0xF10205C2D28EABD5(866);
					unk_0xEDB9A377CD8B7F03(&uVar0, 0);
					unk_0x69EF975E73B9F02D(uVar0);
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
	var uVar1;
	
	iVar0 = unk_0xB6A50C909A8FABC3(iParam0);
	uVar1 = unk_0xDFECACF4B22FB69E(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x6B08EC9A88700FBB(uVar1, "LAMAR G "))
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
		if (unk_0x746960881FB19A89(Global_87728[iVar0]))
		{
			if (Global_87728[iVar0] == iParam0)
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
	
	if (unk_0x746960881FB19A89(iParam0) && unk_0xFC38B241541883D3(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x746960881FB19A89(Global_87698[iVar0]) && unk_0xFC38B241541883D3(Global_87698[iVar0], 0))
			{
				if (Global_87698[iVar0] == iParam0 && unk_0xB6A50C909A8FABC3(Global_87698[iVar0]) == unk_0xB6A50C909A8FABC3(iParam0))
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
	
	if (unk_0x746960881FB19A89(Global_67138.f_484[24]))
	{
		if (iParam0 == Global_67138.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x746960881FB19A89(Global_67138.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67138.f_484[iVar0])
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
	
	if (!unk_0x746960881FB19A89(iParam0))
	{
		return 145;
	}
	if (!unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x746960881FB19A89(Global_87698[iVar0]))
		{
			if (Global_87698[iVar0] == iParam0)
			{
				return Global_87708[iVar0];
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
	
	if (!unk_0x746960881FB19A89(iParam0) || !unk_0xFC38B241541883D3(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_126(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x94E72F17611BCD3C(Global_97358.f_5486[iVar9], 0))
		{
			if (unk_0x95E3E236782BBF37(&sVar1, iParam0))
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
	Global_96071.f_22 = iParam0;
}

