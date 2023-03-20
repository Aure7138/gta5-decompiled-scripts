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
	unk_0xAE2A9FD3EEF99954(1);
	if (unk_0x8D841F1DD3FA555F(3))
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
	
	if (unk_0x86CCCD2FAE9D5E65(iLocal_95))
	{
		if (unk_0x7404950238A154C2(iLocal_95, 0))
		{
			iVar0 = 200;
			iVar1 = (unk_0x4DC6EF945236C0F7(iLocal_95) - 800);
			if (unk_0x69F59C68E86FDF3D(iLocal_95))
			{
				unk_0x9765BF567DB87B5F(iLocal_95, (unk_0x4DC6EF945236C0F7(iLocal_95) - 5));
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
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, 2, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0);
}

void func_4(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
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
		Global_1336084.f_1 = 1;
		func_5(0, iVar0);
		Global_1336084.f_946[iVar0] = uParam0;
		Global_1336084.f_946.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1336084.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1336084.f_946.f_194[iVar0] = uParam3;
		Global_1336084.f_946.f_183[iVar0] = uParam4;
		Global_1336084.f_946.f_216[iVar0] = iParam5;
		Global_1336084.f_946.f_227[iVar0 /*3*/] = fParam6;
		Global_1336084.f_946.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1336084.f_946.f_258[iVar0] = iParam8;
		Global_1336084.f_946.f_269[iVar0] = uParam9;
		Global_1336084.f_946.f_312[iVar0] = iParam10;
		Global_1336084.f_946.f_323[iVar0] = iParam11;
		Global_1336084.f_946.f_334[iVar0] = iParam12;
		Global_1336084.f_946.f_345[iVar0] = iParam13;
		Global_1336084.f_941 = 1;
		Global_1336084.f_946.f_356[iVar0] = iParam14;
		Global_1336084.f_946.f_367[iVar0] = iParam15;
	}
}

void func_5(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1336084.f_4506[iParam0]), iParam1);
}

bool func_6(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_1336084.f_4506[iParam0], iParam1);
}

void func_7()
{
	int iVar0;
	
	iVar0 = (iLocal_79 - unk_0x48E480685981C7D4());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (unk_0x48E480685981C7D4() >= iLocal_83)
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
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 10000))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 1:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 9000))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 2:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 8000))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 3:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 7000))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 4:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 6000))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 5:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 5000))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 6:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 4500))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 7:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 4000))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 8:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 3500))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 9:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 3000))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 10:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 2500))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 11:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 2000))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 12:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 1500))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 13:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 1000))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 14:
			if (unk_0x48E480685981C7D4() >= (iLocal_79 - 500))
			{
				unk_0x35D7948F61AA3FEC(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 15:
			if (unk_0x48E480685981C7D4() >= iLocal_79)
			{
				unk_0x35D7948F61AA3FEC(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
				iLocal_80++;
			}
			break;
		
		case 16:
			break;
	}
	if (unk_0x48E480685981C7D4() >= iLocal_79)
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
		Global_1336084.f_1 = 1;
		func_5(7, iVar0);
		Global_1336084.f_3911[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3911.f_172[iVar0] = iParam2;
		Global_1336084.f_3911.f_216[iVar0] = iParam3;
		Global_1336084.f_3911.f_183[iVar0] = iParam4;
		Global_1336084.f_3911.f_194[iVar0] = iParam5;
		Global_1336084.f_3911.f_249[iVar0] = iParam6;
		Global_1336084.f_3911.f_260[iVar0] = iParam7;
		Global_1336084.f_3911.f_205[iVar0] = iParam8;
		Global_1336084.f_3911.f_314[iVar0] = iParam9;
		Global_1336084.f_3911.f_325[iVar0] = iParam10;
		Global_1336084.f_3911.f_357[iVar0] = iParam11;
		Global_1336084.f_3911.f_238[iVar0] = iParam12;
		Global_1336084.f_3911.f_271[iVar0] = iParam13;
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
				if (!unk_0x5FEB513A4402FD59(iLocal_92[iVar0]))
				{
					if (!unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_63, 50f, 50f, 50f, 0, 1, 0))
					{
						unk_0x9979AC3F15FA9FCF(unk_0x1329891157A54C63(), 2, 0);
						unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
						unk_0xE453EF46E6CA8CB3(unk_0x1329891157A54C63(), 0f);
						iLocal_77 = 1;
					}
				}
			}
			else if (!unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_92[iVar0]))
				{
					unk_0x754376E2234CBB4A(iLocal_92[iVar0], unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
					unk_0x6CB332CB31E9FA96(iLocal_92[iVar0], 1);
					unk_0x71A8BCA218722FA1(&(iLocal_92[iVar0]));
				}
				if (unk_0x86CCCD2FAE9D5E65(uLocal_96))
				{
					unk_0xE0913C01F5C0CC3D(&iLocal_96);
				}
			}
			iVar0++;
		}
	}
	if (func_20(&uLocal_38, Local_66, Global_22, 1, iLocal_95, sLocal_103, "", sLocal_104, 1, 0, 1, -1))
	{
		func_19(iLocal_95, 10.5f, 2, 1056964608, 0, 1, 0);
		unk_0x98046F3D16B9CF76(unk_0x81873881071CD9FE(), 2000, 0);
		unk_0x8F26EC305B587F81(iLocal_95, 0);
		func_14(&uLocal_38, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_89)
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_89[iVar1]))
		{
			if (!unk_0xFBACB273AA628CC5(uLocal_98[iVar1]))
			{
				uLocal_98[iVar1] = func_10(iLocal_89[iVar1], 1, 145);
				unk_0xEAD984C2869B8B7C(&uLocal_119);
				unk_0x98046F3D16B9CF76(0, 0, 0);
				unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
				unk_0x56D9ED1541046AF6(uLocal_119);
				unk_0xC65002CAA1212AF9(iLocal_89[iVar1], uLocal_119);
				unk_0xA3561415EB3DA3A3(&uLocal_119);
				unk_0x6CB332CB31E9FA96(iLocal_89[iVar1], 1);
			}
			if (!unk_0x8D28631AAAEFC957(iLocal_89[iVar1], unk_0x81873881071CD9FE(), 100f, 100f, 100f, 0, 1, 0))
			{
				if (unk_0xFBACB273AA628CC5(uLocal_98[iVar1]))
				{
					unk_0x0A8175F24237A3D4(&(uLocal_98[iVar1]));
				}
				unk_0x754376E2234CBB4A(iLocal_89[iVar1], unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
				unk_0x6CB332CB31E9FA96(iLocal_89[iVar1], 1);
				unk_0x71A8BCA218722FA1(&(iLocal_89[iVar1]));
			}
		}
		else if (unk_0xFBACB273AA628CC5(uLocal_98[iVar1]))
		{
			unk_0x0A8175F24237A3D4(&(uLocal_98[iVar1]));
		}
		iVar1++;
	}
}

var func_10(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_11(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(uVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_12(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(uVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_12(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_12(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
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
	
	if (unk_0x236D8AD7EE179F46(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_18(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFBACB273AA628CC5(uParam0->f_1[iVar0]))
		{
			unk_0x0A8175F24237A3D4(&(uParam0->f_1[iVar0]));
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
			unk_0xC69E84EBBD7166E6(&(uParam0->f_13), iVar0);
			unk_0xC69E84EBBD7166E6(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xFBACB273AA628CC5(*uParam0))
	{
		unk_0x0A8175F24237A3D4(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar0]))
		{
			unk_0xE814EBF9E6A3FB47(uParam0->f_17[iVar0], 1);
			unk_0x50C24260EFF2A0DE(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0xCE566DBDCACD245E(uParam0->f_17[iVar0], 32, 1);
				unk_0xCE566DBDCACD245E(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0xCE566DBDCACD245E(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x6914EFE7823C0640(uParam0->f_17[iVar0], func_15()) && uParam0->f_17[iVar0] != unk_0x81873881071CD9FE())
				{
					unk_0x6EC15FE0ADD3E99C(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 29))
			{
				unk_0xB0388221F47D2A80(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		unk_0xE814EBF9E6A3FB47(unk_0x81873881071CD9FE(), 1);
		unk_0x50C24260EFF2A0DE(unk_0x81873881071CD9FE(), 1);
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (bParam2)
		{
			unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_15()
{
	return unk_0xC80D3C64CC2CE6A3(unk_0xEC537F0C0E8265EE());
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xC69E84EBBD7166E6(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xC69E84EBBD7166E6(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xC69E84EBBD7166E6(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xC69E84EBBD7166E6(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xC69E84EBBD7166E6(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xC69E84EBBD7166E6(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0)
{
	if (unk_0xFBACB273AA628CC5(uParam0->f_5))
	{
		unk_0x0A8175F24237A3D4(&(uParam0->f_5));
	}
}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xDE1125A413AF241C(0, 71, 1);
	unk_0xDE1125A413AF241C(0, 72, 1);
	unk_0xDE1125A413AF241C(0, 76, 1);
	unk_0xDE1125A413AF241C(0, 73, 1);
	unk_0xDE1125A413AF241C(0, 59, 1);
	unk_0xDE1125A413AF241C(0, 60, 1);
	if (bParam5)
	{
		unk_0xDE1125A413AF241C(0, 75, 1);
	}
	unk_0xDE1125A413AF241C(0, 80, 1);
	if (!bParam6)
	{
		unk_0xDE1125A413AF241C(0, 69, 1);
		unk_0xDE1125A413AF241C(0, 70, 1);
		unk_0xDE1125A413AF241C(0, 68, 1);
	}
	unk_0xDE1125A413AF241C(0, 74, 1);
	unk_0xDE1125A413AF241C(0, 86, 1);
	unk_0xDE1125A413AF241C(0, 81, 1);
	unk_0xDE1125A413AF241C(0, 82, 1);
	unk_0xDE1125A413AF241C(0, 138, 1);
	unk_0xDE1125A413AF241C(0, 136, 1);
	unk_0xDE1125A413AF241C(0, 114, 1);
	unk_0xDE1125A413AF241C(0, 107, 1);
	unk_0xDE1125A413AF241C(0, 110, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 87, 1);
	unk_0xDE1125A413AF241C(0, 88, 1);
	unk_0xDE1125A413AF241C(0, 113, 1);
	unk_0xDE1125A413AF241C(0, 115, 1);
	unk_0xDE1125A413AF241C(0, 116, 1);
	unk_0xDE1125A413AF241C(0, 117, 1);
	unk_0xDE1125A413AF241C(0, 118, 1);
	unk_0xDE1125A413AF241C(0, 119, 1);
	unk_0xDE1125A413AF241C(0, 131, 1);
	unk_0xDE1125A413AF241C(0, 132, 1);
	unk_0xDE1125A413AF241C(0, 123, 1);
	unk_0xDE1125A413AF241C(0, 126, 1);
	unk_0xDE1125A413AF241C(0, 129, 1);
	unk_0xDE1125A413AF241C(0, 130, 1);
	unk_0xDE1125A413AF241C(0, 133, 1);
	unk_0xDE1125A413AF241C(0, 134, 1);
	unk_0xA733C8A9B9CF0E2E();
	if ((unk_0x48E480685981C7D4() - Global_29) > 500)
	{
		unk_0xE4DF2496E641851E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x48E480685981C7D4();
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (unk_0xB9AA84B14E04BC20(unk_0xA04824262F150982(iParam0)) <= fParam3)
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
		if (unk_0xECDEA377354CBDA4())
		{
			bVar1 = false;
			if (unk_0x7404950238A154C2(iParam18, 0))
			{
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iParam18, 0))
				{
					unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 3);
					if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 9))
					{
						unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 4);
					}
					if (unk_0x236D8AD7EE179F46(uParam0->f_13, 23))
					{
						unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 23);
					}
					unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_40(uParam0, iParam29))
				{
					unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 3);
					if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 9))
					{
						unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 4);
					}
					unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 9);
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
				if (bParam26 && unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
				{
					if (unk_0xFBACB273AA628CC5(uParam0->f_5))
					{
						unk_0x0A8175F24237A3D4(&(uParam0->f_5));
						func_42(sParam19);
					}
					if (unk_0xFBACB273AA628CC5(*uParam0))
					{
						unk_0x0A8175F24237A3D4(uParam0);
					}
					if ((!func_36(uParam0, 1) && !func_35(uParam0)) && !unk_0x236D8AD7EE179F46(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_33(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x5FEB513A4402FD59(uParam0->f_17[0]))
							{
								func_31(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 0);
						unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x236D8AD7EE179F46(uParam0->f_13, 0))
					{
						func_42("LOSE_WANTED");
						unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 0);
						unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 1);
					}
					if (unk_0x236D8AD7EE179F46(uParam0->f_13, 1))
					{
						if (!func_36(uParam0, 1))
						{
							if (!unk_0x5FEB513A4402FD59(uParam0->f_17[0]))
							{
								func_31(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0xFBACB273AA628CC5(uParam0->f_5))
					{
						if (unk_0xFBACB273AA628CC5(*uParam0))
						{
							unk_0x0A8175F24237A3D4(uParam0);
						}
						uParam0->f_5 = func_30(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0x8F827BB0F6ED7AA8(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_29(uParam0->f_5, uParam0);
						}
					}
					else if (!func_28(Var3, unk_0x3BB744083EDD3FF5(uParam0->f_5), 0.1f, 0))
					{
						unk_0x8F0CD34B4BFF4767(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_29(uParam0->f_5, uParam0);
						}
					}
					if (!func_36(uParam0, 2))
					{
						if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 2))
						{
							func_33(uParam0, sParam19, 0);
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0x236D8AD7EE179F46(uParam0->f_13, 13))
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
						unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Param7, Param10, iParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
									if (!unk_0x04C377C10639B842(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x04C377C10639B842(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x6914EFE7823C0640(uParam0->f_17[iVar2], func_15()) || !func_26(uParam0->f_17[iVar2], 1))
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
			else if (unk_0x86CCCD2FAE9D5E65(iParam18))
			{
				if ((bParam26 && unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) && (!unk_0x236D8AD7EE179F46(uParam0->f_13, 9) && !unk_0x236D8AD7EE179F46(uParam0->f_13, 22)))
				{
					func_42(sParam24);
					func_42(sParam27);
					if (unk_0xFBACB273AA628CC5(uParam0->f_5) || unk_0xFBACB273AA628CC5(*uParam0))
					{
						unk_0x0A8175F24237A3D4(&(uParam0->f_5));
						unk_0x0A8175F24237A3D4(uParam0);
						func_42(sParam19);
					}
					if ((!func_36(uParam0, 1) && !func_35(uParam0)) && !unk_0x236D8AD7EE179F46(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_33(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x5FEB513A4402FD59(uParam0->f_17[0]))
							{
								func_31(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 0);
						unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0x236D8AD7EE179F46(uParam0->f_13, 0))
					{
						func_42("LOSE_WANTED");
						unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 0);
						unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 1);
					}
					if (unk_0x236D8AD7EE179F46(uParam0->f_13, 1))
					{
						if (!func_36(uParam0, 1))
						{
							if (!unk_0x5FEB513A4402FD59(uParam0->f_17[0]))
							{
								func_31(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 1);
						}
					}
					if (unk_0x7404950238A154C2(iParam18, 0))
					{
						if (!unk_0xFBACB273AA628CC5(*uParam0))
						{
							if (unk_0xFBACB273AA628CC5(uParam0->f_5))
							{
								unk_0x0A8175F24237A3D4(&(uParam0->f_5));
								func_42(sParam19);
							}
							*uParam0 = func_22(iParam18, 0, 0);
							unk_0x885CCA7D7CA0FAE3(*uParam0, 2);
							if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 4))
							{
								func_29(*uParam0, uParam0);
							}
						}
						if (!func_36(uParam0, 2))
						{
							if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 3))
							{
								func_33(uParam0, sParam24, 0);
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 3);
								unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 4);
							}
							else if (unk_0x236D8AD7EE179F46(uParam0->f_13, 9))
							{
								if (!unk_0x4357449749A521B1(sParam27))
								{
									if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 4))
									{
										func_33(uParam0, sParam27, 0);
										unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 4))
								{
									func_33(uParam0, sParam24, 0);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 4);
								}
								if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 23))
								{
									if (!unk_0x5FEB513A4402FD59(uParam0->f_17[0]))
									{
										func_31(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xFBACB273AA628CC5(uParam0->f_5))
				{
					unk_0x0A8175F24237A3D4(&(uParam0->f_5));
					func_42(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_36(uParam0, 2))
						{
							if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
							{
								if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x2E0A9E3291F398E3(0, iVar8);
									if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar9]))
									{
										func_31(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_33(uParam0, "MORE_SEATS", 0);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 3))
							{
								func_33(uParam0, sParam24, 0);
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 3);
								unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 4);
							}
							else if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 4))
							{
								if (unk_0x236D8AD7EE179F46(uParam0->f_13, 9))
								{
									func_33(uParam0, sParam27, 0);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_36(uParam0, 2))
					{
						if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 3))
						{
							func_33(uParam0, sParam24, 0);
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 3);
							unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 4);
						}
						else if (unk_0x236D8AD7EE179F46(uParam0->f_13, 9))
						{
							if (!unk_0x4357449749A521B1(sParam27))
							{
								if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 4))
								{
									func_33(uParam0, sParam27, 0);
									unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 4))
							{
								func_33(uParam0, sParam24, 0);
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x236D8AD7EE179F46(uParam0->f_13, 0))
		{
			unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 0);
		}
		func_42(sParam19);
		func_42(sParam24);
		func_42(sParam27);
		func_42(sParam24);
		func_42("LOSE_WANTED");
		if (unk_0xFBACB273AA628CC5(uParam0->f_5))
		{
			unk_0x0A8175F24237A3D4(&(uParam0->f_5));
		}
		if (unk_0xFBACB273AA628CC5(*uParam0))
		{
			unk_0x0A8175F24237A3D4(uParam0);
		}
	}
	unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 11);
	unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 12);
	return 0;
}

int func_22(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_23(var uParam0)
{
	if (unk_0x236D8AD7EE179F46(uParam0->f_13, 12))
	{
		if (func_25(unk_0x81873881071CD9FE()))
		{
			if (func_24(1, 0, 1) || unk_0x236D8AD7EE179F46(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_24(1, 0, 1) || unk_0x236D8AD7EE179F46(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_24(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x4DA8CC792B3D5CB0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (bParam0)
		{
			if (unk_0x930F8FBB8E9537CC(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x930F8FBB8E9537CC(iVar0))
			{
				if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) != unk_0x81873881071CD9FE())
				{
					return 0;
				}
			}
		}
		if (!unk_0x930F8FBB8E9537CC(iVar0))
		{
			if (unk_0xCADEFB8A5B164C68(iVar0) < 0.95f || unk_0xCADEFB8A5B164C68(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (!unk_0xD894621CB0A2B724(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	return 1;
}

int func_25(int iParam0)
{
	float fVar0;
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		fVar0 = unk_0xA04824262F150982(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_26(int iParam0, int iParam1)
{
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()) && iParam1)
		{
			if (func_27(unk_0x81873881071CD9FE(), iParam0))
			{
				unk_0x10421CB82A4653C3(func_15(), 50f);
				return 1;
			}
		}
		else if (unk_0x6914EFE7823C0640(iParam0, func_15()))
		{
			unk_0x10421CB82A4653C3(func_15(), 50f);
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
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (unk_0x86F7E6A693F6370F(iParam0))
		{
			iVar0 = unk_0xE68E6B44DABA9C05(iParam0, 0);
			if (unk_0x7404950238A154C2(iVar0, 0))
			{
				if (!unk_0x5FEB513A4402FD59(iParam1))
				{
					if (unk_0x58A69336FE7307D8(iParam1, iVar0))
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
		if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xB9AA84B14E04BC20((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_29(var uParam0, var uParam1)
{
	if (unk_0xFBACB273AA628CC5(uParam0))
	{
		if (unk_0xFBACB273AA628CC5(uParam1->f_6))
		{
			unk_0x116FDB7E27590C7F(uParam1->f_6, 0);
		}
		unk_0xD327B3F9D26CFBBC(0);
		unk_0x169327598E00BC8A();
		uParam1->f_6 = uParam0;
		unk_0x116FDB7E27590C7F(uParam0, 1);
	}
}

var func_30(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_12(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
	unk_0x116FDB7E27590C7F(uVar0, iParam3);
	return uVar0;
}

void func_31(var uParam0, char* sParam1, int iParam2)
{
	unk_0xE66E1668957ECE7B(uParam0, sParam1, func_32(iParam2), 1);
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
		if (!unk_0x4357449749A521B1(sParam1))
		{
			if (!unk_0xD994929E13CC1ED5(sParam1, ""))
			{
				func_34(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x48E480685981C7D4();
}

void func_34(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x645DF34C4E038370(sParam0);
	unk_0x16885CADDEC73B2E(iParam1, 1);
}

int func_35(var uParam0)
{
	if (!unk_0x5FEB513A4402FD59(uParam0->f_16))
	{
		if (unk_0x3315DD7601B4423B(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_36(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0x3EA487B1116F83F7())
	{
		if (unk_0xDBD19E93A4D01117())
		{
			return 1;
		}
		if (func_39(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0x3EA487B1116F83F7())
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
	if (Global_16704 == 1)
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

int func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x48E480685981C7D4();
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
	
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
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
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x86CCCD2FAE9D5E65(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x59D35AC211D17FAB(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xC7035752F85F4DD2(iParam0, 1))
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
				if (!unk_0xC7035752F85F4DD2(iParam0, 1))
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
	if (!unk_0x4357449749A521B1(sParam0))
	{
		unk_0xAC6C9BCDC1EB8365(sParam0);
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
		if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
		{
			if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 29) && !unk_0x236D8AD7EE179F46(uParam0->f_13, 28))
			{
				if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar0]))
				{
					unk_0xB0388221F47D2A80(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 29) && unk_0x236D8AD7EE179F46(uParam0->f_13, 28))
		{
			if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar0]))
			{
				unk_0xB0388221F47D2A80(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x86CCCD2FAE9D5E65(uParam0->f_21))
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
			uVar24 = unk_0x19DFFDAF59F973CC(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 50f, 0, iVar25);
			if (unk_0x7404950238A154C2(uVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x7404950238A154C2(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
				{
					if (!unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0) || !bParam17)
					{
						if (func_41(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar0]))
								{
									unk_0x99E525B7A12DCDBE(uParam0->f_17[iVar0], 1f);
									if (unk_0x6914EFE7823C0640(uParam0->f_17[iVar0], func_15()))
									{
										unk_0x6EC15FE0ADD3E99C(uParam0->f_17[iVar0]);
									}
									if (unk_0xFA1212DE7C455679(uParam0->f_17[iVar0], -1794415470) == 7 && !func_58(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0xD81BC0FD4D47CC04(uParam0->f_17[iVar0]) && !unk_0xEE6F2DE3DB966195(uParam0->f_17[iVar0]))
										{
											unk_0x1D15D99A10A15334(uParam0->f_17[iVar0], 1);
											unk_0x3C3A95141D01773E(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x2DA3CE5ACB2F30AC(uParam0->f_17[iVar0], iVar0);
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
			unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar0]))
				{
					if (!unk_0x463E18F5BBDEA9C4(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x27CC98B7C879C320(uParam0->f_17[iVar0]);
					}
					if (!unk_0x6914EFE7823C0640(uParam0->f_17[iVar0], func_15()))
					{
						if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0xABED360AB1F46D3D(uParam0->f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 26))
	{
		if ((!func_55(uParam0) && unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE())) && !unk_0x86CCCD2FAE9D5E65(iParam10))
		{
			iVar13 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if (unk_0x7404950238A154C2(iVar13, 0))
			{
				if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 13))
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
							if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x2E0A9E3291F398E3(0, iVar26);
						if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar27]))
						{
							func_31(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_33(uParam0, "MORE_SEATS", 0);
						unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 13);
			func_42("MORE_SEATS");
		}
		if (!unk_0x86CCCD2FAE9D5E65(iParam10))
		{
			if ((!unk_0x5FEB513A4402FD59(uParam0->f_17[0]) || !unk_0x5FEB513A4402FD59(uParam0->f_17[1])) || !unk_0x5FEB513A4402FD59(uParam0->f_17[2]))
			{
				if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 31))
				{
					if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()) && !func_36(uParam0, 2))
					{
						iVar13 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
						if (func_54(iVar13, uParam0))
						{
							func_33(uParam0, "CMN_VEHSUIT", 0);
							unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
				{
					unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 31);
					func_42("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x7404950238A154C2(iParam10, 0))
		{
			if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), iParam10))
			{
				if (unk_0x093DEAE9A023FAA0(0, 75))
				{
					unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0x236D8AD7EE179F46(uParam0->f_13, 21))
			{
				unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x86CCCD2FAE9D5E65(uParam0->f_17[iVar0]))
			{
				if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar0]))
				{
					if (!unk_0x6914EFE7823C0640(uParam0->f_17[iVar0], func_15()))
					{
						unk_0xE56D08F12AE48555(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0xE56D08F12AE48555(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
					{
						iVar13 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
						if (unk_0x7404950238A154C2(iVar13, 0))
						{
							if (unk_0x6914EFE7823C0640(uParam0->f_17[iVar0], func_15()))
							{
								if (!func_55(uParam0) && unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
								{
									if (!func_53(uParam0->f_17[iVar0]))
									{
										unk_0x6EC15FE0ADD3E99C(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x930F8FBB8E9537CC(iVar13))
						{
							if (unk_0x58A69336FE7307D8(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0x2C237D28F05F0008(iVar13) && !unk_0x653781B2157A929D(iVar13))
								{
									Var28 = { unk_0xB6AE0DAE06D56288(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x3535A48C04BEA949(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x6914EFE7823C0640(uParam0->f_17[iVar0], func_15()))
					{
						if (unk_0x86F7E6A693F6370F(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0xE68E6B44DABA9C05(uParam0->f_17[iVar0], 0);
							if (!unk_0x930F8FBB8E9537CC(iVar13))
							{
								if (unk_0x7404950238A154C2(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), iVar13))
										{
											if (unk_0xA04824262F150982(iVar13) > 5f)
											{
												unk_0x3535A48C04BEA949(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x3535A48C04BEA949(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
									{
										iVar31 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
									}
									if (unk_0x7404950238A154C2(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0xA04824262F150982(iVar13) > 5f)
											{
												unk_0x3535A48C04BEA949(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x3535A48C04BEA949(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x6914EFE7823C0640(uParam0->f_17[iVar0], func_15()))
					{
						iVar32 = unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE());
						if (unk_0x86CCCD2FAE9D5E65(iVar32))
						{
							if (func_41(iVar32, uParam0, 0))
							{
								if (func_52(iVar0, uParam0) || !unk_0x236D8AD7EE179F46(uParam0->f_13, 27))
								{
									unk_0x2DA3CE5ACB2F30AC(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_52(iVar0, uParam0))
							{
								if (unk_0x14B7103DBD149FFE(iVar32) == joaat("sentinel2"))
								{
									unk_0x2DA3CE5ACB2F30AC(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x2DA3CE5ACB2F30AC(uParam0->f_17[iVar0], 2);
								}
								func_51(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x6914EFE7823C0640(uParam0->f_17[iVar0], func_15()) && !func_50(uParam0->f_17[iVar0], iParam10)) && !func_49(uParam0->f_17[iVar0], iParam10))
					{
						if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x6914EFE7823C0640(uParam0->f_17[iVar0], func_15()))
							{
								if (((!unk_0xD81BC0FD4D47CC04(uParam0->f_17[iVar0]) && !unk_0xEE6F2DE3DB966195(uParam0->f_17[iVar0])) && !unk_0xCFEA22FD803E3199(uParam0->f_17[iVar0])) && !unk_0x463E18F5BBDEA9C4(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0xFA1212DE7C455679(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0x27CC98B7C879C320(uParam0->f_17[iVar0]);
									}
									unk_0xABED360AB1F46D3D(uParam0->f_17[iVar0], func_15());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0xFBACB273AA628CC5(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x48E480685981C7D4();
								uParam0->f_1[iVar0] = func_22(uParam0->f_17[iVar0], 0, 0);
								unk_0x885CCA7D7CA0FAE3(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_29(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xFBACB273AA628CC5(uParam0->f_1[iVar0]))
					{
						if (((func_26(uParam0->f_17[iVar0], 1) || func_50(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x7404950238A154C2(iParam10, 0) && !unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iParam10, 0)))
						{
							if (unk_0xFBACB273AA628CC5(uParam0->f_1[iVar0]))
							{
								unk_0x0A8175F24237A3D4(&(uParam0->f_1[iVar0]));
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
					else if (unk_0x7404950238A154C2(iParam10, 0))
					{
						if (!unk_0x58A69336FE7307D8(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x8D28631AAAEFC957(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0x236D8AD7EE179F46(uParam0->f_13, 11)) && !((bParam17 && unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) && !unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iParam10, 0)))
							{
								if (unk_0x86F7E6A693F6370F(uParam0->f_17[iVar0]))
								{
									if (!unk_0x04C377C10639B842(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_26(uParam0->f_17[iVar0], 1))
										{
											if (func_25(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0xFA1212DE7C455679(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x98046F3D16B9CF76(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x6914EFE7823C0640(uParam0->f_17[iVar0], func_15()))
									{
										if ((((!unk_0xCFEA22FD803E3199(uParam0->f_17[iVar0]) && !unk_0xD81BC0FD4D47CC04(uParam0->f_17[iVar0])) && !unk_0xEE6F2DE3DB966195(uParam0->f_17[iVar0])) && !unk_0x463E18F5BBDEA9C4(uParam0->f_17[iVar0])) && !unk_0x2D2289DC6C760F31(iParam10))
										{
											unk_0x6EC15FE0ADD3E99C(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0xFA1212DE7C455679(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_58(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xCFEA22FD803E3199(uParam0->f_17[iVar0]) && !unk_0xCFEA22FD803E3199(unk_0x81873881071CD9FE())) && !func_48(uParam0->f_17[iVar0], 2f)) && !unk_0xD81BC0FD4D47CC04(uParam0->f_17[iVar0])) && !unk_0xEE6F2DE3DB966195(uParam0->f_17[iVar0])) && !unk_0x2D2289DC6C760F31(iParam10))
										{
											unk_0x1D15D99A10A15334(uParam0->f_17[iVar0], 1);
											if (unk_0x236D8AD7EE179F46(uParam0->f_13, 10))
											{
												unk_0x99E525B7A12DCDBE(uParam0->f_17[iVar0], 1f);
											}
											unk_0x3C3A95141D01773E(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x36C8C9789AEE2A5D(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_22(uParam0->f_17[iVar0], 0, 0);
										unk_0x885CCA7D7CA0FAE3(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x6914EFE7823C0640(uParam0->f_17[iVar0], func_15()))
							{
								if (func_56(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0xD81BC0FD4D47CC04(uParam0->f_17[iVar0]) && !unk_0xEE6F2DE3DB966195(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0xFA1212DE7C455679(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0x27CC98B7C879C320(uParam0->f_17[iVar0]);
										}
										unk_0x1D15D99A10A15334(uParam0->f_17[iVar0], 0);
										unk_0xABED360AB1F46D3D(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), iParam10))
						{
							if (!unk_0x6914EFE7823C0640(uParam0->f_17[iVar0], func_15()))
							{
								if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 21))
								{
									unk_0xABED360AB1F46D3D(uParam0->f_17[iVar0], func_15());
								}
							}
							else if (unk_0x236D8AD7EE179F46(uParam0->f_13, 21))
							{
								unk_0x6EC15FE0ADD3E99C(uParam0->f_17[iVar0]);
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x6914EFE7823C0640(uParam0->f_17[iVar0], func_15()) && !unk_0x2D2289DC6C760F31(iParam10))
						{
							unk_0x6EC15FE0ADD3E99C(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xFBACB273AA628CC5(uParam0->f_1[iVar0]))
				{
					unk_0x0A8175F24237A3D4(&(uParam0->f_1[iVar0]));
					func_42(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xFBACB273AA628CC5(uParam0->f_1[iVar0]))
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
						if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar0]))
						{
							if (func_53(uParam0->f_17[iVar0]) || unk_0x8D28631AAAEFC957(uParam0->f_17[iVar0], unk_0x81873881071CD9FE(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar0]))
					{
						if (!unk_0x8D28631AAAEFC957(uParam0->f_17[iVar0], unk_0x81873881071CD9FE(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_53(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x48E480685981C7D4();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 5))
							{
								func_33(uParam0, sParam7, 0);
								unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 5);
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
										if (!unk_0x4357449749A521B1(uVar19[iVar0]))
										{
											if (!unk_0xD994929E13CC1ED5(uVar19[iVar0], ""))
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
		unk_0xC69E84EBBD7166E6(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xFBACB273AA628CC5(uParam0->f_1[iVar0]))
				{
					unk_0x0A8175F24237A3D4(&(uParam0->f_1[iVar0]));
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
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_13), 16);
			break;
	}
}

void func_45(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x4357449749A521B1(sParam1))
		{
			if (!unk_0xD994929E13CC1ED5(sParam1, ""))
			{
				func_46(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x48E480685981C7D4();
}

void func_46(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x645DF34C4E038370(sParam0);
	unk_0x072D7B028D6C7A05(uParam1);
	unk_0x16885CADDEC73B2E(iParam2, 1);
}

int func_47(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x236D8AD7EE179F46(uParam1->f_13, 14);
		
		case 1:
			return unk_0x236D8AD7EE179F46(uParam1->f_13, 15);
		
		case 2:
			return unk_0x236D8AD7EE179F46(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_48(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0xE5AB05962FA1FF3F(iParam0, 0))
	{
		iVar0 = unk_0xE68E6B44DABA9C05(iParam0, 0);
		if (!unk_0x930F8FBB8E9537CC(iVar0))
		{
			if (unk_0xA04824262F150982(iVar0) > fParam1)
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
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (!unk_0x6914EFE7823C0640(iParam0, func_15()))
		{
			iVar0 = unk_0xC03D6CD4574382AB(iParam0);
			if (unk_0x7404950238A154C2(iParam1, 0))
			{
				if (unk_0x8D28631AAAEFC957(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (unk_0x86CCCD2FAE9D5E65(iParam1))
		{
			if (unk_0x7404950238A154C2(iParam1, 0))
			{
				if (unk_0x58A69336FE7307D8(iParam0, iParam1))
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
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_13), 19);
			break;
	}
}

int func_52(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x236D8AD7EE179F46(uParam1->f_13, 17);
		
		case 1:
			return unk_0x236D8AD7EE179F46(uParam1->f_13, 18);
		
		case 2:
			return unk_0x236D8AD7EE179F46(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		iVar0 = unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE());
		if (unk_0x7404950238A154C2(iVar0, 0))
		{
			if (!unk_0x5FEB513A4402FD59(iParam0))
			{
				iVar1 = unk_0xC848C6F4EF7777AB(iParam0);
				if (unk_0x7404950238A154C2(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x8D28631AAAEFC957(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		if (unk_0x14B7103DBD149FFE(iParam0) == joaat("bus") || unk_0x14B7103DBD149FFE(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x5FEB513A4402FD59(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xB0B9E53CEFDB16AA(iParam0, 0);
			if (!unk_0x5FEB513A4402FD59(iVar3))
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
			iVar4 = unk_0xB0B9E53CEFDB16AA(iParam0, 1);
			if (!unk_0x5FEB513A4402FD59(iVar4))
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
			iVar5 = unk_0xB0B9E53CEFDB16AA(iParam0, 2);
			if (!unk_0x5FEB513A4402FD59(iVar5))
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
	
	if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
	{
		uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
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
	
	if (!unk_0x5FEB513A4402FD59(iParam1))
	{
		if (unk_0x86F7E6A693F6370F(iParam1))
		{
			uVar0 = unk_0xE68E6B44DABA9C05(iParam1, 0);
			if (!unk_0x930F8FBB8E9537CC(uVar0))
			{
				if (unk_0x7404950238A154C2(iVar0, 0))
				{
					if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), iVar0))
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
				else if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE());
				if (unk_0x86CCCD2FAE9D5E65(iVar0))
				{
					if (func_41(iVar0, uParam0, 0))
					{
						if (unk_0x7404950238A154C2(iVar0, 0))
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
	
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		fVar0 = unk_0xA04824262F150982(iParam0);
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
	
	if (!unk_0x5FEB513A4402FD59(uParam0))
	{
		if (unk_0x7404950238A154C2(iParam1, 0))
		{
			iVar0 = unk_0xC848C6F4EF7777AB(iParam0);
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
	
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		iVar0 = unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE());
		if (unk_0x7404950238A154C2(iVar0, 0))
		{
			iVar1 = unk_0xB0B9E53CEFDB16AA(iVar0, 0);
			if (!unk_0x5FEB513A4402FD59(iVar1))
			{
				if (iVar1 != unk_0x81873881071CD9FE())
				{
					if (unk_0xE86442941AE40E75(iVar1))
					{
						if (!unk_0x3E3058289D865B2D(iVar1, unk_0x81873881071CD9FE()))
						{
							unk_0xAF625598EDA64AD3(iVar1, unk_0x81873881071CD9FE(), 2000, 2048, 2);
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
	
	if (!unk_0x236D8AD7EE179F46(uParam0->f_13, 25))
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x86CCCD2FAE9D5E65(uParam0->f_17[iVar0]))
			{
				if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar0]))
				{
					unk_0xCE566DBDCACD245E(uParam0->f_17[iVar0], 32, 0);
					unk_0xCE566DBDCACD245E(uParam0->f_17[iVar0], 305, 1);
					unk_0xCE566DBDCACD245E(uParam0->f_17[iVar0], 268, 1);
					unk_0x36C8C9789AEE2A5D(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_13), 25);
	}
}

void func_61(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x86CCCD2FAE9D5E65(uParam0->f_17[iVar0]))
		{
			if (!unk_0x5FEB513A4402FD59(uParam0->f_17[iVar0]))
			{
				if (unk_0x86F7E6A693F6370F(uParam0->f_17[iVar0]))
				{
					unk_0xE814EBF9E6A3FB47(uParam0->f_17[iVar0], 0);
					unk_0x50C24260EFF2A0DE(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
			{
				unk_0xE814EBF9E6A3FB47(unk_0x81873881071CD9FE(), 0);
				unk_0x50C24260EFF2A0DE(unk_0x81873881071CD9FE(), 0);
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
	
	if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_95, 0))
	{
		if (unk_0xFBACB273AA628CC5(uLocal_101))
		{
			unk_0x0A8175F24237A3D4(&uLocal_101);
		}
		if (iLocal_35 <= 2)
		{
			iLocal_79 = (unk_0x44D418A3EEF5DA87() * ((60 * iLocal_81) + iLocal_82));
			iLocal_79 = (iLocal_79 + unk_0x48E480685981C7D4());
			iLocal_83 = (iLocal_79 - unk_0x44D418A3EEF5DA87() * 30);
		}
		else if (iLocal_35 > 6)
		{
			iLocal_79 = (unk_0x44D418A3EEF5DA87() * ((60 * iLocal_81) + iLocal_82));
			iLocal_79 = (iLocal_79 + unk_0x48E480685981C7D4());
			iLocal_83 = (iLocal_79 - unk_0x44D418A3EEF5DA87() * 30);
		}
		else if (iLocal_35 >= 3 && iLocal_35 <= 4)
		{
			iLocal_96 = unk_0xE00F8DEA9778FC87(iLocal_88, Local_69, fLocal_73, 1, 1);
			iLocal_92[0] = unk_0x4D135F3066A9BF9C(iLocal_96, 6, iLocal_86, -1, 1, 1);
			iLocal_92[1] = unk_0x4D135F3066A9BF9C(iLocal_96, 6, iLocal_86, 0, 1, 1);
			unk_0x4865E80F793024CE("rghCop", &uLocal_117);
			unk_0xF8E77F310A5B6EAB(4, uLocal_117, joaat("player"));
			unk_0x4B9FA68A3AC8C29D(iLocal_92[0], 39, 1);
			unk_0x4B9FA68A3AC8C29D(iLocal_92[1], 39, 1);
			iVar0 = 0;
			while (iVar0 < iLocal_92)
			{
				unk_0x8E4A427F5C43E416(iLocal_92[iVar0], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xA867A6CA433961B0(iLocal_92[iVar0], 100f);
				unk_0x506A601663C5417C(iLocal_92[iVar0], uLocal_117);
				iVar0++;
			}
		}
		iLocal_37 = 2;
	}
}

void func_65()
{
	int iVar0;
	
	if (!unk_0x930F8FBB8E9537CC(iLocal_95))
	{
		if (func_92() || unk_0x5FEB513A4402FD59(iLocal_89[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_89)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_89[iVar0]))
				{
					if (!unk_0xFBACB273AA628CC5(uLocal_98[iVar0]))
					{
						uLocal_98[iVar0] = func_10(iLocal_89[iVar0], 1, 145);
						unk_0x4B9FA68A3AC8C29D(iLocal_89[iVar0], 1, 0);
						unk_0xEAD984C2869B8B7C(&uLocal_119);
						unk_0x98046F3D16B9CF76(0, 0, 0);
						unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
						unk_0x56D9ED1541046AF6(uLocal_119);
						unk_0xC65002CAA1212AF9(iLocal_89[iVar0], uLocal_119);
						unk_0xA3561415EB3DA3A3(&uLocal_119);
					}
				}
				else if (unk_0xFBACB273AA628CC5(uLocal_98[iVar0]))
				{
					unk_0x0A8175F24237A3D4(&(uLocal_98[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_78)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_89[0]))
			{
				if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iLocal_89[0], 50f, 50f, 50f, 0, 1, 0))
				{
					unk_0xEFACB1875068FA30(iLocal_89[0], iLocal_95, unk_0x81873881071CD9FE(), 8, 25f, 786469, -1f, -1f, 1);
					iLocal_78 = 1;
				}
			}
		}
		if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_95, 0))
		{
			if (unk_0xFBACB273AA628CC5(uLocal_101))
			{
				unk_0x0A8175F24237A3D4(&uLocal_101);
			}
			func_91(&uLocal_105, 0, 0);
			iLocal_37 = 2;
		}
		else if (unk_0xBEB00EB4ADDC2A33(iLocal_95, -1) || unk_0x5FEB513A4402FD59(iLocal_89[0]))
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
	if (!unk_0x5FEB513A4402FD59(iLocal_89[0]) && !unk_0x930F8FBB8E9537CC(iLocal_95))
	{
		if (unk_0x04C377C10639B842(iLocal_89[0], iLocal_95, 0))
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
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
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
	
	if (uParam0->f_1 && unk_0xCA020F3125A93EB9())
	{
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x4357449749A521B1(iVar0))
	{
		if (!unk_0x1C6DF6AD69BE853E())
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
	if (func_88(uParam1) && unk_0x1DB417C2D78C2390(uParam1))
	{
		iVar1 = 0;
		if (unk_0xCF0C46D719D5302C(uParam1))
		{
			unk_0xDADDFD5743EF6B4C(unk_0x8F1CCE5AF629C4D3(iParam1));
			unk_0xAA2EC5375B3FAE29(unk_0x8F1CCE5AF629C4D3(iParam1), 1);
			if (unk_0x06B618A8746F665B(unk_0x8F1CCE5AF629C4D3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xCF8AA94BAD0F766A(iParam1))
		{
			unk_0xFBE0C43B6A21C8D0(unk_0x522C7043B2B961F9(iParam1));
			if (unk_0x29C2AB191ACB1F1A(unk_0x522C7043B2B961F9(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x9F76B19299294A0E(iParam1))
		{
			unk_0x078BE1F12FC92912(unk_0x440E5F4F3C17D1EB(iParam1));
			if (unk_0x336B49310DF9C666(unk_0x440E5F4F3C17D1EB(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xCA020F3125A93EB9())
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
					if ((unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0)) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if ((iVar1 && !unk_0xA83A609D74168B30()) && uParam8)
						{
							if (!func_90(iVar0))
							{
								func_74(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
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
				if (unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0))
				{
					if (((unk_0x331E7ACCFD0869AD(iParam1) && iVar1) && !unk_0xA83A609D74168B30()) && uParam8)
					{
						if (!func_90(iVar0))
						{
							func_74(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
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
			if (!unk_0x4357449749A521B1(sParam5))
			{
				if (func_90(sParam5))
				{
					unk_0xB8BB626315D394F5(1);
				}
			}
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
			{
				if (unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(3) == 3 || unk_0x7FCE6803A3D23268(3) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
					{
						func_91(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
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
	if (func_88(unk_0x81873881071CD9FE()))
	{
		unk_0xF64D185C5B88AF31(unk_0x81873881071CD9FE());
	}
	if (unk_0xCA020F3125A93EB9())
	{
		unk_0x0D7089406F6A5C6E(1);
		unk_0x59E3A6BEFC421137(0);
		unk_0x0C22E352114F699C("HINT_CAM_SCENE");
		unk_0x7D123BA6B5E0F9B9("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x45D2AAD93E9AC4B3("FocusOut", 0, 0);
			unk_0x35D7948F61AA3FEC(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x48E480685981C7D4()
		{
			return 1;
		}
	}
	return 0;
}

int func_73(bool bParam0)
{
	switch (Global_35443)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_98931.f_8663.f_100++;
			}
			return Global_98931.f_8663.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_98931.f_8663.f_101++;
			}
			return Global_98931.f_8663.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_98931.f_8663.f_102++;
			}
			return Global_98931.f_8663.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_74(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

int func_75(char* sParam0)
{
	if (!func_76(1, 1, 0))
	{
		if ((!unk_0xB318FDA0D1ABDB20(sParam0) && func_90(sParam0)) || func_90("CMN_HINT"))
		{
			unk_0xB8BB626315D394F5(1);
		}
		return 0;
	}
	switch (Global_35443)
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
		if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xF33755A765033580())
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
	if (unk_0x18138B3C6FD07449())
	{
		return 0;
	}
	if (Global_67710)
	{
		return 0;
	}
	if (unk_0x968BF1C2C695B61A(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52584)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
		{
			if (unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(3) == 3 || unk_0x7FCE6803A3D23268(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
			{
				return 0;
			}
			if (unk_0xA1E64A079AAE6506())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_77()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

int func_78(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
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
	
	if (unk_0x930F8FBB8E9537CC(uParam1))
	{
		func_91(uParam0, 0, 0);
	}
	if (func_82(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xCF0C46D719D5302C(iParam1))
		{
			uVar0 = unk_0x8F1CCE5AF629C4D3(iParam1);
			if (!unk_0xE5AB05962FA1FF3F(uVar0, 0))
			{
				if (unk_0x0452D5BF20AD945A(iVar0))
				{
					if (!func_80())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xBFC4295E811860E5(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x0D7089406F6A5C6E(0);
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
	unk_0xA9076AE35130AE29(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iParam1, -1, iVar3, iVar4);
	unk_0x45D2AAD93E9AC4B3("FocusIn", 0, 0);
	unk_0xF2A6D4C99549CA85("HINT_CAM_SCENE");
	unk_0x35D7948F61AA3FEC(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x48E480685981C7D4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_80()
{
	return func_81(unk_0x1329891157A54C63());
}

int func_81(var uParam0)
{
	if (unk_0x14B7103DBD149FFE(unk_0xE495E987CB2BE7EF(uParam0)) == joaat("mp_f_freemode_01"))
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
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					if (func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_86(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_87(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
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
			if ((unk_0x48E480685981C7D4() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
					{
						if (!func_87(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x48E480685981C7D4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_86(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_87(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
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
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
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
				if (!func_86(bParam1, bParam2, bParam3) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2))
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
			if ((unk_0x48E480685981C7D4() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
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
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || func_84(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2))
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
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()))
		{
			unk_0xDE1125A413AF241C(0, 140, 1);
			unk_0xDE1125A413AF241C(0, 80, 1);
			if (unk_0x938788609A5D0621(0, 80))
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
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0xDE1125A413AF241C(0, 80, 1);
		if (unk_0x2AE1029043B25E5E())
		{
			if (unk_0x938788609A5D0621(0, 80))
			{
				unk_0x0D7089406F6A5C6E(0);
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
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()))
		{
			unk_0xDE1125A413AF241C(0, 140, 1);
			unk_0xDE1125A413AF241C(0, 80, 1);
			if (unk_0x70A79CA636F98FA5(0, 80) && unk_0x48E480685981C7D4() > Global_97)
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
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0xDE1125A413AF241C(0, 80, 1);
		if (unk_0x2AE1029043B25E5E())
		{
			if (unk_0x70A79CA636F98FA5(0, 80) && unk_0x48E480685981C7D4() > Global_97)
			{
				unk_0x0D7089406F6A5C6E(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_88(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (unk_0xCF8AA94BAD0F766A(iParam0))
		{
			if (unk_0x7404950238A154C2(unk_0x522C7043B2B961F9(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xCF0C46D719D5302C(iParam0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x8F1CCE5AF629C4D3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x9F76B19299294A0E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_89()
{
	unk_0xF3148AAF69AF9CBC(&Global_2265, 4);
}

bool func_90(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_91(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 26))
		{
			return;
		}
	}
	if (unk_0xCA020F3125A93EB9())
	{
		unk_0x59E3A6BEFC421137(iParam2);
		unk_0x7D123BA6B5E0F9B9("FocusIn");
		unk_0x0C22E352114F699C("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x45D2AAD93E9AC4B3("FocusOut", 0, 0);
			unk_0x35D7948F61AA3FEC(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0D7089406F6A5C6E(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x4357449749A521B1(sVar0))
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x4357449749A521B1(uParam0->f_3))
	{
		if (func_90(uParam0->f_3))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
	if (!unk_0x4357449749A521B1(sVar0))
	{
		if (func_90(sVar0))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
}

int func_92()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_95))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_95))
		{
			if ((((((unk_0x4DC6EF945236C0F7(iLocal_95) < 300 || unk_0xFF463728B23A0037(iLocal_95) < 200f) || unk_0x2D2289DC6C760F31(iLocal_95)) || (unk_0x2A87B5EC03992FB8(iLocal_95, 0, 0) && unk_0x2A87B5EC03992FB8(iLocal_95, 1, 0))) || (unk_0x2A87B5EC03992FB8(iLocal_95, 4, 0) && unk_0x2A87B5EC03992FB8(iLocal_95, 5, 0))) || (unk_0x2A87B5EC03992FB8(iLocal_95, 0, 0) && unk_0x2A87B5EC03992FB8(iLocal_95, 4, 0))) || (unk_0x2A87B5EC03992FB8(iLocal_95, 1, 0) && unk_0x2A87B5EC03992FB8(iLocal_95, 5, 0)))
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
	if (!unk_0x7404950238A154C2(iLocal_95, 0))
	{
		iLocal_95 = unk_0xE00F8DEA9778FC87(iLocal_87, Local_63, uLocal_72, 1, 1);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			unk_0x90B59F54B0DB5FF7(iLocal_95, iVar0, 1);
			iVar0++;
		}
		if (iLocal_84 != -1)
		{
			unk_0x90B59F54B0DB5FF7(iLocal_95, iLocal_84, 0);
		}
	}
	unk_0x0175D90DBB1149FA(iLocal_95, 1);
	uLocal_101 = func_94(iLocal_95, 0, 0);
	if (iLocal_35 != 5 && iLocal_35 != 6)
	{
		if (iLocal_35 > 6)
		{
			unk_0xCEDA5B7DDF6C8846(iLocal_95, 0, 0, 0, 0, 1, 0, 0, 0);
			unk_0x058526005957A956(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_95, 0, 0, 0);
		}
		func_34(sLocal_102, 7500, 1);
	}
	else
	{
		iLocal_89[0] = unk_0x4D135F3066A9BF9C(iLocal_95, 26, iLocal_85, -1, 1, 1);
		iLocal_89[1] = unk_0x4D135F3066A9BF9C(iLocal_95, 26, iLocal_85, 0, 1, 1);
		unk_0x4865E80F793024CE("rghCriminal", &uLocal_118);
		unk_0xF8E77F310A5B6EAB(5, uLocal_118, joaat("player"));
		iVar1 = 0;
		while (iVar1 < iLocal_89)
		{
			unk_0x1D15D99A10A15334(iLocal_89[iVar1], 1);
			unk_0x8E4A427F5C43E416(iLocal_89[iVar1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
			unk_0x506A601663C5417C(iLocal_89[iVar1], uLocal_118);
			iVar1++;
		}
		unk_0x2D7E8CD6F4101CAB(iLocal_89[0], iLocal_95, 25f, 786599);
		func_34("PMDL_REC", 7500, 1);
	}
	if (!unk_0x930F8FBB8E9537CC(unk_0x2ADE2CEED2637E95()))
	{
		iLocal_97 = unk_0x2ADE2CEED2637E95();
	}
	iLocal_37 = 1;
}

int func_94(var uParam0, bool bParam1, bool bParam2)
{
	return func_11(uParam0, !bParam1, bParam2);
}

int func_95(int iParam0)
{
	if (unk_0x7404950238A154C2(Global_97643.f_222[iParam0], 0))
	{
		unk_0xD768713E73165208(Global_97643.f_222[iParam0], 1, 1);
		return Global_97643.f_222[iParam0];
	}
	return 0;
}

int func_96()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_95))
	{
		if (unk_0x7404950238A154C2(iLocal_95, 0))
		{
			if (!unk_0x8D28631AAAEFC957(iLocal_95, unk_0x81873881071CD9FE(), 300f, 300f, 300f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x5FEB513A4402FD59(iLocal_89[0]))
	{
		if (unk_0xFBACB273AA628CC5(uLocal_98[0]))
		{
			unk_0x0A8175F24237A3D4(&(uLocal_98[0]));
		}
	}
	return 0;
}

void func_97()
{
	unk_0x32A12757CBF48A33(iLocal_87);
	unk_0x86B83C54AF71BD12("PMDL", 0);
	if (iLocal_35 >= 3 && iLocal_35 <= 4)
	{
		unk_0x32A12757CBF48A33(iLocal_86);
		unk_0x32A12757CBF48A33(iLocal_88);
	}
	else if (iLocal_35 == 5 || iLocal_35 == 6)
	{
		unk_0x32A12757CBF48A33(iLocal_85);
	}
	unk_0xB5A91586385F755B(joaat("benson"), 1);
	unk_0xB5A91586385F755B(joaat("pony2"), 1);
	if (unk_0x33ACB874CECA2D4B(iLocal_87) && unk_0xCD8DA898314F3016(0))
	{
		if (iLocal_35 >= 3 && iLocal_35 <= 4)
		{
			if (unk_0x33ACB874CECA2D4B(iLocal_86) && unk_0x33ACB874CECA2D4B(iLocal_88))
			{
				bLocal_74 = true;
			}
		}
		else if (iLocal_35 == 5 || iLocal_35 == 6)
		{
			if (unk_0x33ACB874CECA2D4B(iLocal_85))
			{
				bLocal_74 = true;
			}
		}
		else if (iLocal_35 > 6)
		{
			if (unk_0x9D2B95F4020E5347("Deliveries", 0))
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
		fVar0 = unk_0x0D6E79537424BACE(Local_63, Local_66, 1);
		iLocal_82 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_102() == 13)
	{
		Local_66 = { -323.356f, 6264.431f, 30.4463f };
		fVar0 = unk_0x0D6E79537424BACE(Local_63, Local_66, 1);
		iLocal_82 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_102() == 12)
	{
		Local_66 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = unk_0x0D6E79537424BACE(Local_63, Local_66, 1);
		iLocal_82 = unk_0xF2DB717A73826179((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (func_102() == 11)
	{
		Local_66 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = unk_0x0D6E79537424BACE(Local_63, Local_66, 1);
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
	return Global_97643.f_20;
}

int func_103()
{
	return func_104(Global_97643.f_20, Global_97643.f_29);
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
	unk_0xB5A91586385F755B(joaat("benson"), 0);
	unk_0xB5A91586385F755B(joaat("pony2"), 0);
	unk_0xABF33AFE6B2877A8();
	if (iLocal_76)
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_97))
		{
			func_106(iLocal_97, 0, 145);
		}
		unk_0xD600F85196278A9D(unk_0x1329891157A54C63());
		func_91(&uLocal_105, 0, 0);
	}
	unk_0xC23A229F78DAD92A();
}

int func_106(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x9DE804DB82E9D0FC(iParam0, &uVar0);
		if (!unk_0xB318FDA0D1ABDB20(uVar1))
		{
			if (unk_0x8DAF7A748E41AD46(sVar1) == unk_0x8DAF7A748E41AD46("vehicle_gen_controller"))
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
		iVar0 = unk_0xB0B9E53CEFDB16AA(iParam0, -1);
		if (!unk_0x86CCCD2FAE9D5E65(iVar0))
		{
			iVar0 = unk_0x24E1D5759BFC6ECE(iParam0, -1);
		}
		if (unk_0x86CCCD2FAE9D5E65(iVar0) && !unk_0x5FEB513A4402FD59(iVar0))
		{
			if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_98931.f_1750.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x14B7103DBD149FFE(iParam0) == Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xB318FDA0D1ABDB20(&(Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xD994929E13CC1ED5(unk_0xE0DCE5625B61B0CC(iParam0), &(Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_98931.f_18731.f_5592[iVar1] = iVar2;
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
		if (unk_0x14B7103DBD149FFE(iParam0) == Global_98931.f_18731.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xB318FDA0D1ABDB20(&(Global_98931.f_18731.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xD994929E13CC1ED5(unk_0xE0DCE5625B61B0CC(iParam0), &(Global_98931.f_18731.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_98931.f_18731.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_98931.f_18731.f_5590 = iParam1;
	Global_68794 = iParam0;
	Global_98931.f_18731.f_5588 = 1;
	func_108(iParam0, &(Global_98931.f_18731.f_5510));
}

void func_108(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		func_111(uParam1);
		uParam1->f_66 = unk_0x14B7103DBD149FFE(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE0DCE5625B61B0CC(iParam0), 16);
		*uParam1 = unk_0xBF74E89FC6941108(iParam0);
		unk_0x1D3AAB0507DD3600(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x6942D519F6FE2C32(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB931B48FB3E13CF0(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x48F64101B58EB7F7(iParam0);
		uParam1->f_67 = unk_0xA3EFB2F9FFCDC48D(iParam0);
		uParam1->f_69 = unk_0xBB644BAE860F67B7(iParam0);
		uParam1->f_70 = unk_0x4AC847D90EBAFAEE(iParam0);
		unk_0x332D9608C3A4D1BE(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3182B161F39E40BC(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x1CD308F8479FBE52(iParam0, 2))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 28);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 3))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 29);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 30);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 1))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xD31A4E6B116BE250(iParam0, 0))
		{
			uParam1->f_68 = unk_0x48D44DDE1A5A9BD7(iParam0);
		}
		if (unk_0x1699D7B95446F15C(uParam1->f_66))
		{
			if (unk_0x923087289F6BA752(iParam0))
			{
				switch (unk_0x3D09A88E72AB7687(iParam0))
				{
					case 2:
					case 0:
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 23);
						unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 23);
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x263B56EFBC6AC36C(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 9);
		}
		if (unk_0x1E729885E653D827(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 10);
		}
		if (unk_0x6E728693163D9496(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 13);
			unk_0x4B850687F46D6E15(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9EBDB9930E2E0600(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 12);
		}
		func_110(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), func_109(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x45AFEFCDD35076F2(iParam0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 11);
		}
		if (unk_0xCEC9D74C9FF51C8C(iParam0, "IgnoredByQuickSave") && unk_0x53ABC9BE848EA65A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 27);
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
	
	if (!unk_0x7404950238A154C2(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xBE23E5C609DF6E79(*iParam0) == 0)
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
			if (unk_0x91B47E3FC237F24A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x64D946BA23568D30(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB0BC5473B799F536(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB0BC5473B799F536(*iParam0, iVar0);
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
	if ((((((((((!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0)) || func_125(iParam0, 0, 0)) || func_125(iParam0, 1, 0)) || func_125(iParam0, 2, 0)) || func_124(iParam0) != 145) || func_123(iParam0)) || func_122(iParam0)) || func_121(iParam0)) || func_120(iParam0)) || !func_113(unk_0x14B7103DBD149FFE(iParam0)))
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
	if (((unk_0x9F59BCFFFEAAD4B1(iParam0) || unk_0x1699D7B95446F15C(iParam0)) || unk_0xE083914AB72DD7CE(iParam0)) || unk_0xE4CD4B212196D2C5(iParam0))
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
	if (!unk_0xA84E120D1B16B142(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1C6DF6AD69BE853E())) || (iParam0 == joaat("buffalo3") && !unk_0x1C6DF6AD69BE853E())) || (iParam0 == joaat("gauntlet2") && !unk_0x1C6DF6AD69BE853E())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1C6DF6AD69BE853E())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_119())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xCDB51B918CEDF9B8())
		{
			if (unk_0x292BAD2AB4F88E45(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xA10BCE9255970BC8(Var1.f_0))
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
		if ((unk_0x3F0C224D3CC05EF2() || unk_0x913B1C01C1BA6C6F()) || unk_0xEC209B562C5EFDB2())
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
	if (unk_0x2D6859674806FDCE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	var uVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF3148AAF69AF9CBC(&uVar0, 2);
				unk_0xF3148AAF69AF9CBC(&uVar0, 4);
				unk_0xF3148AAF69AF9CBC(&uVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					uVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&uVar0, 0);
					unk_0x0A726855B16BE29A(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_135975 == 2)
	{
		return 1;
	}
	else if (Global_135975 == 3)
	{
		return 0;
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		if (unk_0x236D8AD7EE179F46(unk_0xE19FDB171CBF814A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	uVar1 = unk_0xE0DCE5625B61B0CC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xD994929E13CC1ED5(uVar1, "LAMAR G "))
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
		if (unk_0x86CCCD2FAE9D5E65(Global_88503[iVar0]))
		{
			if (Global_88503[iVar0] == iParam0)
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
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]) && unk_0x7404950238A154C2(Global_88473[iVar0], 0))
			{
				if (Global_88473[iVar0] == iParam0 && unk_0x14B7103DBD149FFE(Global_88473[iVar0]) == unk_0x14B7103DBD149FFE(iParam0))
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
	
	if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[24]))
	{
		if (iParam0 == Global_67889.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67889.f_484[iVar0])
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
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 145;
	}
	if (!unk_0x7404950238A154C2(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]))
		{
			if (Global_88473[iVar0] == iParam0)
			{
				return Global_88483[iVar0];
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
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_126(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x236D8AD7EE179F46(Global_98931.f_5843[iVar9], 0))
		{
			if (unk_0x9ED6CC42898E5346(&sVar1, iParam0))
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
	Global_97643.f_22 = iParam0;
}

