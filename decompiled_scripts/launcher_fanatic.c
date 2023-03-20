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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	struct<42> Var0;
	struct<3> Var61;
	int iVar64[3];
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_82 = 1;
	iLocal_83 = 65;
	iLocal_84 = 49;
	iLocal_85 = 64;
	uLocal_89 = unk_0x9531B0A727EDF1BF();
	uLocal_90 = unk_0x0F07D7181C004903();
	uLocal_92 = func_274(61);
	iLocal_94 = -1;
	iLocal_97 = -1;
	unk_0xCDBC8F459D8E83A4(1);
	func_273();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	func_272(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	iVar64[0] = 21;
	iVar64[1] = 22;
	iVar64[2] = 23;
	if (unk_0x524AF15206846700(83))
	{
		func_271("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_100241[Var0.f_0 /*10*/].f_9 != -1)
			{
				func_271("Relinquishing candidate id...");
				func_270(&(Global_100241[Var0.f_0 /*10*/].f_9));
			}
		}
		func_255(&Var0, 1);
	}
	if (!func_252(&iVar64, &Var0, Var61, 1f))
	{
		func_251();
		func_271("SCRIPT TERMINATED");
		unk_0x7C3AA2D27E16E2AD();
	}
	if (!func_243(Var0.f_0))
	{
		func_251();
		func_271("SCRIPT TERMINATED");
		unk_0x7C3AA2D27E16E2AD();
	}
	if (func_242(Var0.f_0))
	{
		func_251();
		func_271("SCRIPT TERMINATED");
		unk_0x7C3AA2D27E16E2AD();
	}
	while (!func_226(&Var0))
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x7742FB54677E08D9())
		{
			func_271("Player out of range [TERMINATING]");
			func_255(&Var0, 1);
		}
	}
	unk_0xEFA71310CAEBAE1F(Var61, Var0.f_15, 1, 0, 0, 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!func_188(&Var0, 1))
		{
			func_255(&Var0, 1);
		}
		func_187(Var0.f_0);
		func_180(&iLocal_94, &(Var0.f_9), Var61);
		if (iLocal_95 == 0)
		{
			if (Var0.f_0 == 22)
			{
				if (unk_0x95921D2FB0B6ACDD())
				{
					if (func_179(Var0.f_28[1]))
					{
						func_271("Trying to set Mary Ann boyfriend component variation");
						unk_0xB68D048BCF11270A("MaryAnnes_Friend", Var0.f_28[1], 0);
						unk_0xEBCFA81EA7447178("MaryAnnes_Friend", 0, 0, 0, 0);
						iLocal_95 = 1;
					}
				}
			}
		}
		if (Var0.f_0 == 21)
		{
			func_176(&Var0, Var61, "FAN1AU", "FAN1_AMB", 3, "MARYANN", 1500);
		}
		else if (Var0.f_0 == 22)
		{
			func_171(&Var0, Var61, "FAN2AU", "FAN2_AMB", 3, "MARYANN", 5000, 1101004800);
		}
		else if (Var0.f_0 == 23)
		{
			if (iLocal_96 == 0)
			{
				if (func_176(&Var0, Var61, "FAN3AUD", "FAN3_AMB", 3, "MARYANN", 50))
				{
					iLocal_96 = 1;
				}
			}
			else
			{
				func_168(&Var0);
			}
		}
		if (func_153(&Var0, 0))
		{
			if (func_152(Var0.f_0))
			{
				func_149(Var0.f_0, &uLocal_98);
			}
			if (!func_2(&Var0))
			{
				func_255(&Var0, 1);
			}
			if (func_1(&Var0))
			{
				func_255(&Var0, 0);
			}
		}
	}
}

int func_1(int iParam0)
{
	while (!Global_100241[*iParam0 /*10*/])
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	return 1;
}

int func_2(int iParam0)
{
	struct<4> Var0;
	char* sVar32;
	
	if (!func_148())
	{
		while (!func_139(*iParam0))
		{
			if (func_138(*iParam0))
			{
				func_130();
			}
			if (!func_188(iParam0, *iParam0 != 2))
			{
				func_271("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_129())
	{
		func_127();
	}
	if (!func_97(iParam0))
	{
		func_271("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_94(*iParam0, &Var0);
	MemCopy(&sVar32, {func_93(*iParam0)}, 4);
	func_91(&sVar32, Var0.f_3, 0);
	func_90(*iParam0);
	if (!func_148())
	{
		if (iParam0->f_16 == 2)
		{
			func_22(&(iParam0->f_1), 0);
		}
		else
		{
			func_22(&(iParam0->f_1), 1);
		}
	}
	func_3(*iParam0, Var0.f_0);
	return 1;
}

void func_3(int iParam0, char* sParam1)
{
	func_21(sParam1);
	unk_0xF17F4B0641AB2DE1(&(Global_101154.f_17264[iParam0 /*6*/]), 5);
	if (unk_0xD32535FA4397160F(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0xD32535FA4397160F(joaat("mission_stat_watcher")) > 0)
		{
			func_19();
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0xD32535FA4397160F(joaat("mission_stat_watcher")) < 1)
	{
		Global_55750 = 0;
		unk_0xA51826E3518111A3("mission_stat_watcher");
		while (!unk_0x9A8E9A1E029E9A5A("mission_stat_watcher"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("mission_stat_watcher", 1828);
		unk_0xABAEB0389A1F036F("mission_stat_watcher");
	}
	while (!unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iParam0 /*6*/], 5))
	{
		if (unk_0xD32535FA4397160F(joaat("mission_stat_watcher")) > 0)
		{
			unk_0x26545538B51562AD(&(Global_101154.f_17264[iParam0 /*6*/]), 5);
		}
	}
	func_4(iParam0);
}

void func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_55747 == 1)
	{
		func_18();
		Global_55747 = 0;
		if (Global_55742)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_55750 = 1;
		func_10();
		return;
	}
	MemCopy(&Global_55764, {func_9(iParam0)}, 4);
	Global_55752 = 0;
	Global_55751 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_55739 = 1;
			Global_55742 = 1;
			Global_55745 = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_55750 = 1;
			Global_55751 = 1;
			func_10();
			func_19();
			return;
			break;
	}
	iVar0 = Global_67994;
	Global_67994 = 1;
	iVar1 = Global_67995;
	Global_67995 = iParam0;
	if (!Global_55739)
	{
		if ((Global_67995 != iVar1 || Global_67844 == 0) || iVar0 != Global_67994)
		{
			Global_25369 = 0;
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_55742 = 1;
		}
	}
	Global_55777 = unk_0xA0F74982C6AAA9D4();
	func_5();
	Global_55749 = 0;
}

void func_5()
{
	int iVar0;
	
	if (!Global_55746)
	{
		return;
	}
	if (Global_67844 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		switch (Global_55974[Global_67845[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_67845[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_55757)
				{
					Global_67845[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_55974[Global_67845[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_67845[iVar0 /*9*/].f_1 != 0)
					{
						Global_67845[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_55746 = 0;
}

void func_6(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_7(741);
			func_7(742);
			return;
		
		case 3:
			func_7(743);
			func_7(744);
			return;
		
		case 5:
			func_7(745);
			func_7(746);
			return;
		
		case 6:
			func_7(747);
			func_7(748);
			return;
		
		case 8:
			func_7(749);
			return;
		
		case 12:
			func_7(750);
			return;
		
		case 14:
			func_7(751);
			func_7(752);
			return;
		
		case 16:
			func_7(753);
			func_7(754);
			return;
		
		case 17:
			func_7(755);
			func_7(756);
			func_7(757);
			return;
		
		case 18:
			func_7(758);
			func_7(759);
			return;
		
		case 19:
			func_7(760);
			func_7(761);
			return;
		
		case 20:
			func_7(762);
			return;
		
		case 21:
			func_7(763);
			return;
		
		case 22:
			func_7(764);
			func_7(765);
			return;
		
		case 23:
			func_7(766);
			return;
		
		case 25:
			func_7(767);
			func_7(768);
			func_7(769);
			return;
		
		case 26:
			func_7(770);
			func_7(771);
			return;
		
		case 28:
			func_7(772);
			func_7(773);
			return;
		
		case 29:
			func_7(774);
			func_7(775);
			return;
		
		case 30:
			func_7(776);
			func_7(777);
			return;
		
		case 32:
			func_7(778);
			func_7(779);
			return;
		
		case 33:
			func_7(780);
			func_7(781);
			func_7(782);
			return;
		
		case 34:
			func_7(783);
			func_7(784);
			return;
		
		case 38:
			func_7(785);
			func_7(786);
			return;
		
		case 39:
			func_7(787);
			func_7(788);
			return;
		
		case 40:
			func_7(789);
			return;
		
		case 41:
			func_7(790);
			func_7(791);
			func_7(792);
			return;
		
		case 42:
			func_7(793);
			func_7(794);
			func_7(795);
			return;
		
		case 43:
			func_7(796);
			func_7(797);
			return;
		
		case 46:
			func_7(798);
			func_7(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_7(800);
			func_7(801);
			return;
		
		case 49:
			func_7(802);
			func_7(803);
			return;
		
		case 50:
			func_7(804);
			func_7(805);
			return;
		
		case 51:
			func_7(806);
			return;
		
		case 57:
			func_7(807);
			func_7(808);
			func_7(809);
			return;
		
		case 58:
			func_7(828);
			func_7(829);
			func_7(830);
			return;
		
		case 59:
			func_7(831);
			func_7(832);
			func_7(833);
			return;
		
		case 60:
			func_7(834);
			func_7(835);
			func_7(836);
			return;
		
		case 61:
			func_7(837);
			func_7(838);
			func_7(839);
			return;
		
		case 62:
			func_7(840);
			func_7(841);
			func_7(842);
			return;
		
		case 24:
			func_7(843);
			func_7(844);
			func_7(845);
			return;
		
		default:
	}
}

void func_7(int iParam0)
{
	Global_55742 = 1;
	Global_55745 = 1;
	if (Global_67844 > 15)
	{
		return;
	}
	func_8(Global_67844);
	Global_67845[Global_67844 /*9*/] = iParam0;
	Global_67844++;
	if (Global_55974[iParam0 /*13*/] == 16)
	{
		Global_67996 = 1;
	}
}

void func_8(int iParam0)
{
	Global_67845[iParam0 /*9*/].f_1 = 0;
	Global_67845[iParam0 /*9*/].f_2 = 0f;
	Global_67845[iParam0 /*9*/].f_3 = 0;
	Global_67845[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_9(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_93(iParam0) };
	if (unk_0x75CB9E30BA492FF0(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

void func_10()
{
	if (Global_55749)
	{
		return;
	}
	Global_55758 = 0;
	Global_67844 = 0;
	Global_55760 = 0;
	if (Global_55757)
	{
	}
	Global_55757 = 0;
	func_17(0);
	func_16();
	Global_67996 = 0;
	Global_55748 = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_55739 = 0;
	Global_55769 = 0;
	Global_55777 = -1;
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_68031[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68040 = 0;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_67997[iVar0 /*2*/] = 0;
		Global_67997[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68030 = 0;
}

void func_13()
{
	Global_55908 = 0;
}

void func_14()
{
	Global_55768 = 0;
	Global_55772 = func_15(joaat("sp0_shots"));
	Global_55771 = func_15(joaat("sp0_hits"));
	Global_55774 = func_15(joaat("sp1_shots"));
	Global_55773 = func_15(joaat("sp1_hits"));
	Global_55776 = func_15(joaat("sp2_shots"));
	Global_55775 = func_15(joaat("sp2_hits"));
}

var func_15(int iParam0)
{
	var uVar0;
	
	unk_0xD0D748C6C14C0E92(iParam0, &uVar0, -1);
	return uVar0;
}

void func_16()
{
	int iVar0;
	
	Global_55778 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55779[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_17(int iParam0)
{
	Global_69749 = iParam0;
	Global_69750 = iParam0;
}

void func_18()
{
	int iVar0;
	
	Global_55747 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		Global_67845[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_55757)
	{
	}
	Global_55757 = 0;
}

void func_19()
{
	if (unk_0xD32535FA4397160F(joaat("mission_stat_watcher")) > 0)
	{
		if (func_20())
		{
			if (Global_55744 && !Global_55743)
			{
				Global_55744 = 0;
				unk_0x113FDF809A4916C2("mission_stat_watcher");
			}
		}
		else
		{
			unk_0x113FDF809A4916C2("mission_stat_watcher");
		}
	}
}

int func_20()
{
	if (unk_0xD32535FA4397160F(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_55742)
	{
		return 0;
	}
	return Global_55754;
}

void func_21(char* sParam0)
{
	if (unk_0xC1C5B83BB6719C6C(sParam0, sParam0))
	{
	}
}

void func_22(char[4] cParam0, int iParam1)
{
	unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 17);
	func_23(cParam0, iParam1, 0);
}

void func_23(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_91278 != 10 && Global_91278 != 9)
	{
		StringCopy(&Global_93083, cParam0, 32);
		func_25(&Global_93091, cParam0, 0, "Start", iParam1, iParam2);
		func_24();
		Global_85789 = 0;
	}
}

void func_24()
{
	int iVar0;
	int iVar1;
	
	Global_95496 = Global_93091;
	Global_95496.f_1 = Global_93091.f_1;
	Global_95496.f_6 = Global_93091.f_6;
	Global_95496.f_7 = Global_93091.f_7;
	Global_95496.f_8 = Global_93091.f_8;
	Global_95496.f_2 = Global_93091.f_2;
	Global_95496.f_3 = Global_93091.f_3;
	Global_95496.f_4 = Global_93091.f_4;
	Global_95496.f_5 = Global_93091.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_95496.f_9[iVar1] = Global_93091.f_9[iVar1];
		Global_95496.f_13[iVar1] = Global_93091.f_13[iVar1];
		Global_95496.f_17[iVar1] = Global_93091.f_17[iVar1];
		Global_95496.f_21[iVar1] = Global_93091.f_21[iVar1];
		Global_95496.f_25[0 /*295*/][iVar1 /*98*/] = { Global_93091.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_95496.f_25[1 /*295*/][iVar1 /*98*/] = { Global_93091.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_95496.f_616[iVar1 /*65*/][iVar0] = Global_93091.f_616[iVar1 /*65*/][iVar0];
			Global_95496.f_616[iVar1 /*65*/].f_13[iVar0] = Global_93091.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_95496.f_616[iVar1 /*65*/].f_26[iVar0] = Global_93091.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_95496.f_616[iVar1 /*65*/].f_59 = Global_93091.f_616[iVar1 /*65*/].f_59;
		Global_95496.f_616[iVar1 /*65*/].f_60 = Global_93091.f_616[iVar1 /*65*/].f_60;
		Global_95496.f_616[iVar1 /*65*/].f_61 = Global_93091.f_616[iVar1 /*65*/].f_61;
		Global_95496.f_616[iVar1 /*65*/].f_62 = Global_93091.f_616[iVar1 /*65*/].f_62;
		Global_95496.f_616[iVar1 /*65*/].f_63 = Global_93091.f_616[iVar1 /*65*/].f_63;
		Global_95496.f_616[iVar1 /*65*/].f_64 = Global_93091.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_95496.f_616[iVar1 /*65*/].f_39[iVar0] = Global_93091.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_95496.f_616[iVar1 /*65*/].f_49[iVar0] = Global_93091.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_95496.f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_93091.f_812[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_95496.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_93091.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_95496.f_1665[iVar1 /*32*/][iVar0] = Global_93091.f_1665[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_95496.f_1665[iVar1 /*32*/].f_5[iVar0] = Global_93091.f_1665[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_95496.f_1665[iVar1 /*32*/].f_16[iVar0] = Global_93091.f_1665[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_95496.f_1762[iVar1] = Global_93091.f_1762[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_95496.f_2259[iVar1 /*15*/][iVar0] = Global_93091.f_2259[iVar1 /*15*/][iVar0];
			Global_95496.f_2259[iVar1 /*15*/].f_5[iVar0] = Global_93091.f_2259[iVar1 /*15*/].f_5[iVar0];
			Global_95496.f_2259[iVar1 /*15*/].f_10[iVar0] = Global_93091.f_2259[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_95496.f_1766[iVar1 /*164*/][iVar0] = Global_93091.f_1766[iVar1 /*164*/][iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_4[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_4[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_8[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_8[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_12[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_12[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_16[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_16[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_20[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_20[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_24[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_24[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_28[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_28[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_32[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_32[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_36[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_36[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_40[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_40[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_44[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_44[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_48[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_48[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_52[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_52[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_56[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_56[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_60[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_60[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_64[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_64[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_68[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_68[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_72[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_72[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_76[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_76[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_80[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_80[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_84[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_84[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_88[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_88[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_92[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_92[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_96[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_96[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_100[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_100[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_104[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_104[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_108[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_108[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_112[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_112[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_116[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_116[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_120[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_120[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_124[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_124[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_128[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_128[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_132[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_132[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_136[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_136[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_140[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_140[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_144[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_144[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_148[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_148[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_152[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_152[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_156[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_156[iVar0];
			Global_95496.f_1766[iVar1 /*164*/].f_160[iVar0] = Global_93091.f_1766[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_95496.f_2305 = { Global_93091.f_2305 };
	Global_95496.f_2305.f_3 = Global_93091.f_2305.f_3;
	Global_95496.f_2311 = { Global_93091.f_2311 };
	Global_95496.f_2311.f_3 = { Global_93091.f_2311.f_3 };
	Global_95496.f_2311.f_6 = Global_93091.f_2311.f_6;
	Global_95496.f_2311.f_8 = Global_95496.f_2311.f_8;
	Global_95496.f_2311.f_7 = Global_93091.f_2311.f_7;
	Global_95496.f_2311.f_9 = Global_93091.f_2311.f_9;
	Global_95496.f_2311.f_11 = Global_93091.f_2311.f_11;
	Global_95496.f_2311.f_10 = Global_93091.f_2311.f_10;
	Global_95496.f_2311.f_12 = Global_93091.f_2311.f_12;
	Global_95496.f_2311.f_12.f_1 = { Global_93091.f_2311.f_12.f_1 };
	Global_95496.f_2311.f_12.f_5 = Global_93091.f_2311.f_12.f_5;
	Global_95496.f_2311.f_12.f_6 = Global_93091.f_2311.f_12.f_6;
	Global_95496.f_2311.f_12.f_7 = Global_93091.f_2311.f_12.f_7;
	Global_95496.f_2311.f_12.f_8 = Global_93091.f_2311.f_12.f_8;
	Global_95496.f_2311.f_12.f_9 = { Global_93091.f_2311.f_12.f_9 };
	Global_95496.f_2311.f_12.f_59 = { Global_93091.f_2311.f_12.f_59 };
	Global_95496.f_2311.f_12.f_62 = Global_93091.f_2311.f_12.f_62;
	Global_95496.f_2311.f_12.f_63 = Global_93091.f_2311.f_12.f_63;
	Global_95496.f_2311.f_12.f_64 = Global_93091.f_2311.f_12.f_64;
	Global_95496.f_2311.f_12.f_65 = Global_93091.f_2311.f_12.f_65;
	Global_95496.f_2311.f_12.f_77 = Global_93091.f_2311.f_12.f_77;
	Global_95496.f_2311.f_12.f_66 = Global_93091.f_2311.f_12.f_66;
	Global_95496.f_2311.f_12.f_67 = Global_93091.f_2311.f_12.f_67;
	Global_95496.f_2311.f_12.f_68 = Global_93091.f_2311.f_12.f_68;
	Global_95496.f_2311.f_12.f_69 = Global_93091.f_2311.f_12.f_69;
	Global_95496.f_2311.f_12.f_71 = Global_93091.f_2311.f_12.f_71;
	Global_95496.f_2311.f_12.f_72 = Global_93091.f_2311.f_12.f_72;
	Global_95496.f_2311.f_12.f_73 = Global_93091.f_2311.f_12.f_73;
	Global_95496.f_2311.f_12.f_74 = Global_93091.f_2311.f_12.f_74;
	Global_95496.f_2311.f_12.f_75 = Global_93091.f_2311.f_12.f_75;
	Global_95496.f_2311.f_12.f_76 = Global_93091.f_2311.f_12.f_76;
	Global_95496.f_2401 = Global_93091.f_2401;
	Global_95496.f_2401.f_1 = Global_93091.f_2401.f_1;
	Global_95496.f_2401.f_2 = Global_93091.f_2401.f_2;
	Global_95496.f_2401.f_3 = Global_93091.f_2401.f_3;
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_89();
	uParam0->f_1 = func_78();
	unk_0xF0A0648DE7C2A0BE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		func_63(&(uParam0->f_2305), 0);
		func_62(unk_0x27D769C59BC9D030());
		func_56(unk_0x27D769C59BC9D030(), 0);
		unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_101154.f_1826.f_539.f_294[iVar1];
		if (iVar1 == func_53())
		{
			func_46(unk_0x27D769C59BC9D030(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91068[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91068[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91068[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91068[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91068[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91068[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91068[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91068[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91068[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91068[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_101154.f_1826.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_101154.f_1826.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD0D748C6C14C0E92(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_101154.f_25089.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52923[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_101154.f_1826.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_101154.f_1826.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101154.f_1826[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xD0D748C6C14C0E92(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0xD0D748C6C14C0E92(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0xD0D748C6C14C0E92(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_27(&(uParam0->f_2311), uParam0, iParam5, 1, 1, 0);
	}
	func_26(&(uParam0->f_2401));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_26(var uParam0)
{
	*uParam0 = Global_87460;
	uParam0->f_1 = Global_87461;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_27(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x27D769C59BC9D030();
	}
	if (unk_0xD2CFFE76B625AE55(iParam2))
	{
		uParam1->f_5 = func_44(iParam2);
	}
	if (func_41(iParam2, &iVar0, iParam3, iParam5))
	{
		func_28(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xD2CFFE76B625AE55(iVar0))
	{
		if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
		{
			if (unk_0x753C14DD45ABE554(iVar0, joaat("skylift")) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iVar0, 0))
			{
				func_28(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_28(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x0B4DDB992C7BCF57(iParam2, 0))
	{
		func_30(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_29(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91278.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_30(var uParam0, int iParam1, int iParam2)
{
	func_37(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_33(iParam1, 145, 0);
	uParam0->f_11 = func_32(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_31(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xA8CFDE65C45F813B(iParam1, 1) };
		uParam0->f_6 = unk_0x4D6B971C8AEE130C(iParam1);
		uParam0->f_3 = { unk_0x73A52F9295BA1599(iParam1) };
		if (unk_0x98CEDC9398D49BB8(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69224 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[iVar0]))
		{
			if (iParam0 == Global_68319.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 145;
	}
	if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_33(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 0;
	}
	if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88952[iVar0])
				{
					if (iParam2 == 0 || unk_0x946C63BD9EF05437(iParam0) == func_34(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_36(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_35(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101154.f_7775.f_99.f_58[128] && !Global_101154.f_7775.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_101154.f_7775.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_101154.f_7775.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_36(int iParam0)
{
	return iParam0 < 3;
}

void func_37(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		func_40(uParam1);
		uParam1->f_66 = unk_0x946C63BD9EF05437(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x9111F14F8ABAE773(iParam0), 16);
		*uParam1 = unk_0xC960169422AD5363(iParam0);
		unk_0x923073D63782E037(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xC780DEE9C0D887BF(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x0C8CAFCFEDEEF36D(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xEF90EF7B0A4543EE(iParam0);
		uParam1->f_67 = unk_0xC3362AC1471926AA(iParam0);
		uParam1->f_69 = unk_0xA2A724EEE80F007F(iParam0);
		uParam1->f_70 = unk_0x977E90DD5881BA08(iParam0);
		unk_0x477102A8963B16B4(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x486F923523D0F4DB(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8A455A983374FA6C(iParam0, 2))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 28);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 3))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 29);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 30);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 1))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x1BCE164A254176FA(iParam0, 0))
		{
			uParam1->f_68 = unk_0xD3A88CAE99C338A3(iParam0);
		}
		if (unk_0xEC6E5897335290DD(uParam1->f_66))
		{
			if (unk_0x7D5667109E828021(iParam0))
			{
				switch (unk_0xDBA4852736CE4FDB(iParam0))
				{
					case 2:
					case 0:
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 23);
						unk_0x26545538B51562AD(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 23);
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x26545538B51562AD(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x480DA4A4EBDCE31C(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 9);
		}
		if (unk_0x6509ED7AD3D989FE(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 10);
		}
		if (unk_0xFD1E4AF84D93E688(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 13);
			unk_0x3E4DACD1434531DD(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xE00D5F67AE8F1A68(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 12);
		}
		func_39(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3D866A165E63B4FE(iParam0, iVar0 + 1))
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), func_38(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3E70A6BAFEE797B2(iParam0, 0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 11);
		}
		if (unk_0xE8E046017EE675F2(iParam0, "IgnoredByQuickSave") && unk_0xF47B23D65F733C81(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 27);
		}
	}
}

int func_38(int iParam0)
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

int func_39(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0B4DDB992C7BCF57(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x41EEFFCF5FB2A6E4(*iParam0) == 0)
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
			if (unk_0x56F45DEAAF97E44B(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xC90889BF6C7006D1(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x0334928DD9F6AEB8(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x0334928DD9F6AEB8(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_40(var uParam0)
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

int func_41(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (!unk_0xE4F7206742848BAF(iParam0))
		{
			if (iParam0 == unk_0x27D769C59BC9D030())
			{
				*uParam1 = unk_0x070841EC2D20AB5A();
			}
			else
			{
				*uParam1 = unk_0xD9FFE8E1642C81E2(iParam0, 1);
			}
			if (unk_0xD2CFFE76B625AE55(*uParam1))
			{
				if (unk_0x0B4DDB992C7BCF57(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(*uParam1, 1), unk_0xA8CFDE65C45F813B(iParam0, 1), 1) < 100f)
					{
						if (unk_0x753C14DD45ABE554(*uParam1, joaat("taxi")))
						{
							if (unk_0x9297C590C99228DC(*uParam1, -1) != iParam0 && unk_0x9297C590C99228DC(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_42(*uParam1, func_89(), 1))
						{
							sVar0 = unk_0x3AA961419D971CB2();
							if (!unk_0xC1C5B83BB6719C6C(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x9A4E2270C2271219(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xE8E046017EE675F2(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xF47B23D65F733C81(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x753C14DD45ABE554(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_42(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0) || !unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_43(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xF426A5DE932B3BEE(Global_101154.f_5919[iVar9], 0))
		{
			if (unk_0x005659B4CDF2566C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_45(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_45(int iParam0)
{
	if (func_36(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_46(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		iVar0 = func_44(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_52(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_51(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_36(iVar0))
		{
			uParam1->f_59 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x0E063DDE8855EC52() && unk_0x946C63BD9EF05437(iParam0) == unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			if (func_50(161, -1))
			{
				uParam1->f_59 = func_47(2043, Global_69309, 0);
			}
			else
			{
				uParam1->f_59 = func_47(745, Global_69309, 0);
			}
			uParam1->f_60 = func_47(746, Global_69309, 0);
			uParam1->f_61 = func_47(747, Global_69309, 0);
		}
		if (unk_0x0E063DDE8855EC52() && iParam0 == unk_0x27D769C59BC9D030())
		{
			if (func_50(161, -1))
			{
				uParam1->f_59 = func_47(2043, Global_69309, 0);
			}
			else
			{
				uParam1->f_59 = func_47(745, Global_69309, 0);
			}
		}
	}
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2469339[iParam0 /*5*/][func_48(iParam1)];
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_48(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

int func_49()
{
	return Global_1312747;
}

int func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2490231[iParam0 /*5*/][func_48(iParam1)];
	if (unk_0xA4169622221F92AC(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_51(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xA0ED5DF8C72F1600(iParam0, iParam1);
		*uParam3 = unk_0x1061092D9407E81F(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xCE9521447147FEB0(iParam0) && unk_0x43BF0C9BA19003AD(iParam0) != -1)
				{
					*uParam2 = unk_0x43BF0C9BA19003AD(iParam0);
					*uParam3 = unk_0xC9033D969FB3E3C6(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_52(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x8E6EAC2226EC1711(iParam0, iParam1);
		*uParam3 = unk_0x11865ADDF8F270CA(iParam0, iParam1);
		*uParam4 = unk_0x8EDDCCA11A9F2980(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_53()
{
	func_54();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_54()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_45(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_44(unk_0x27D769C59BC9D030());
			if (func_36(iVar0) && (!func_55(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_36(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_55(int iParam0)
{
	return Global_35711 == iParam0;
}

void func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_44(iParam0);
	if (func_36(iVar0) && !unk_0xE4F7206742848BAF(iParam0))
	{
		if (iParam0 == unk_0x27D769C59BC9D030())
		{
			func_57(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x2B8F9384E1F00638(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xEE6AE7A090902579();
					if (Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_101154.f_1826.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xC5B79244BD0EFDF7(unk_0x4D29100D094E5511(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0xE2A8B026FA4DDFFF(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xE2A8B026FA4DDFFF(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xE2A8B026FA4DDFFF(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_57(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_61(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x4411BBC9BC706B88(iParam0, func_61(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xB88FDA5AF9B0C71D(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x26545538B51562AD(&(Var4.f_2), (20 + unk_0xB1E4CC11662FA842(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0xD480BB70577C9F2A(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_59(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x533B5E3EE659E0D8(iParam0, Var4.f_0, iVar2))
						{
							unk_0x26545538B51562AD(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_59(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0x5F329C28EE128D99();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x91156000A6A01C12(iVar7, &Var9) && !func_58(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x80EC20FBCB429863(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0xB88FDA5AF9B0C71D(iParam0, Var4.f_0);
					if (unk_0x9F1B20B487FAE1CF(iParam0, Var4.f_0, 0))
					{
						unk_0x26545538B51562AD(&(Var4.f_2), (20 + unk_0xB1E4CC11662FA842(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0x26545538B51562AD(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xD480BB70577C9F2A(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x10717D9B27CF5851(iVar7))
					{
						if (unk_0xD1F2F7720C352D2F(iVar7, iVar1, &Var48))
						{
							if (unk_0x533B5E3EE659E0D8(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x26545538B51562AD(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x9F1B20B487FAE1CF(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_58(int iParam0)
{
	if (unk_0x0E063DDE8855EC52())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_60(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x10717D9B27CF5851(iVar1))
					{
						if (unk_0xD1F2F7720C352D2F(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_60(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x5F329C28EE128D99();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x91156000A6A01C12(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (func_36(iVar0) && !unk_0xE4F7206742848BAF(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = unk_0x0D9232E9B5AC5D23(iParam0);
	}
}

void func_63(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
	uParam0->f_3 = unk_0x4D6B971C8AEE130C(unk_0x27D769C59BC9D030());
	uParam0->f_5 = unk_0xF4660FE190F693DA(unk_0x27D769C59BC9D030());
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		uParam0->f_4 = unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0xD32535FA4397160F(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xF426A5DE932B3BEE(Global_69737, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xF426A5DE932B3BEE(Global_69737, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xF426A5DE932B3BEE(Global_69737, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xF426A5DE932B3BEE(Global_69737, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030()) == unk_0x695481387D3FCB8D(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_67(&iVar0))
		{
			if (func_65(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_89();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_64(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_64(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x76D34DF1CE9FE002(Param0))
	{
		iVar0 = unk_0x695481387D3FCB8D(Param4, sParam3);
		if (!unk_0xBFF8C08B5EEF0974(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0xA22E9C9DBD350349(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_65(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
	}
	return !func_66(*uParam1, 0f, 0f, 0f, 0);
}

bool func_66(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_67(var uParam0)
{
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0) && !unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (func_77())
		{
			*uParam0 = func_73(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), 5, -1, 0, 1, -1);
			if (func_72(*uParam0) && !func_68(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_68(int iParam0)
{
	return func_69(iParam0, 0, 1);
}

int func_69(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xF426A5DE932B3BEE(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (unk_0x0E063DDE8855EC52())
	{
		if (func_71() == 0)
		{
			return unk_0xF426A5DE932B3BEE(func_47(func_70(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xF426A5DE932B3BEE(Global_101154.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

int func_71()
{
	return Global_25120;
}

int func_72(int iParam0)
{
	return func_69(iParam0, 5, 1);
}

int func_73(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_76(iVar0))
		{
			if (!bParam5 || func_75(iVar0))
			{
				fVar1 = unk_0x676D4CD42E0837CA(Param0, func_74(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_74(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_75(int iParam0)
{
	return func_69(iParam0, 0, 0);
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

bool func_77()
{
	return Global_91330.f_296 > 0;
}

var func_78()
{
	var uVar0;
	
	func_88(&uVar0, unk_0x2FADF5E93AB8D64B());
	func_87(&uVar0, unk_0x51C7DC141C5D0E6B());
	func_86(&uVar0, unk_0xEFEADD7EBD01C0A6());
	func_81(&uVar0, unk_0x388418AD39C0F4DE());
	func_80(&uVar0, unk_0xE3911478C9FE04B2());
	func_79(&uVar0, unk_0x8FB5B60BC869990E());
	return uVar0;
}

void func_79(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_80(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_81(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_85(*uParam0);
	iVar1 = func_83(*uParam0);
	if (iParam1 < 1 || iParam1 > func_82(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_82(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_83(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_84(unk_0xF426A5DE932B3BEE(iParam0, 31), -1, 1)) + 2011;
}

int func_84(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_85(var uParam0)
{
	return uParam0 & 15;
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_87(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_89()
{
	func_54();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_90(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xE060CF72D1CA5C87() || unk_0xD0333FE560420AC5())
	{
		uVar0 = iParam0;
		unk_0x4392DD4CF5597D9C(9, &uVar0, 1, 1);
	}
	else if (unk_0x3E00A1016DB5AFEF() || unk_0x748A964A12412EBB())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xA5064174B9213E3A(9, &cVar1);
	}
}

void func_91(char* sParam0, var uParam1, int iParam2)
{
	if (!unk_0x75CB9E30BA492FF0(&Global_88681))
	{
		unk_0x3E945AE78BE77CD8(&Global_88681, 0, 0, 0, 1, 0);
		StringCopy(&Global_88681, "", 64);
	}
	StringCopy(&Global_88681, sParam0, 64);
	unk_0x29DB55F64B471648(sParam0, uParam1, iParam2, func_92(0));
}

bool func_92(bool bParam0)
{
	if (!bParam0 && unk_0xD32535FA4397160F(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_69737, 0);
}

struct<2> func_93(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_94(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_95(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 1:
			func_95(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 2:
			func_95(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 3:
			func_95(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 4:
			func_95(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 5:
			func_95(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 6:
			func_95(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 7:
			func_95(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_96(iParam0), 0, 0);
			break;
		
		case 8:
			func_95(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 9:
			func_95(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 10:
			func_95(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 11:
			func_95(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 12:
			func_95(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 13:
			func_95(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 14:
			func_95(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 15:
			func_95(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 16:
			func_95(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 17:
			func_95(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 18:
			func_95(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 19:
			func_95(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 20:
			func_95(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 21:
			func_95(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_96(iParam0), 1, 0);
			break;
		
		case 22:
			func_95(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_96(iParam0), 1, 0);
			break;
		
		case 23:
			func_95(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_96(iParam0), 0, 1);
			break;
		
		case 24:
			func_95(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_96(iParam0), 0, 1);
			break;
		
		case 25:
			func_95(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 26:
			func_95(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 27:
			func_95(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 28:
			func_95(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 29:
			func_95(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 30:
			func_95(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 31:
			func_95(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 32:
			func_95(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 33:
			func_95(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 34:
			func_95(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 35:
			func_95(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 36:
			func_95(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 37:
			func_95(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 38:
			func_95(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 39:
			func_95(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 40:
			func_95(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 41:
			func_95(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 42:
			func_95(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 43:
			func_95(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 44:
			func_95(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 45:
			func_95(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 46:
			func_95(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 47:
			func_95(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 48:
			func_95(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 49:
			func_95(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 50:
			func_95(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 51:
			func_95(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 52:
			func_95(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 54:
			func_95(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 55:
			func_95(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 56:
			func_95(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 53:
			func_95(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 57:
			func_95(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 58:
			func_95(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 59:
			func_95(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 60:
			func_95(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 61:
			func_95(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 62:
			func_95(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_95(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_97(var* uParam0)
{
	int iVar0;
	
	if (func_126(&(uParam0->f_1)))
	{
		if (!unk_0x75CB9E30BA492FF0(&(uParam0->f_9)))
		{
			func_116(1);
			func_114(uParam0, 1, func_115(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (func_113(*uParam0))
			{
				while (!unk_0x17753565205CF66F(unk_0x27D769C59BC9D030()))
				{
					func_130();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		func_98(*uParam0);
		iVar0 = unk_0xB8BA7F44DF1575E1(&(uParam0->f_1), uParam0, 61, 18000);
		unk_0xABAEB0389A1F036F(&(uParam0->f_1));
		if (unk_0xAA28218C604F91A5())
		{
			func_271("Initial cutscene loaded and passing to RC mission.");
			unk_0x7BC5C3EE2B9CEBD8(iVar0);
		}
		else
		{
			func_271("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0x18159512D699D089();
		}
		return 1;
	}
	return 0;
}

void func_98(int iParam0)
{
	struct<2> Var0;
	
	func_112();
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 32, 0);
		unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 250, 0);
	}
	if (func_111(iParam0))
	{
		unk_0x126149F876BC6432(unk_0x27D769C59BC9D030(), 0);
	}
	unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 1);
	unk_0x85DF15590BBEBCCD(0, 1);
	unk_0x85DF15590BBEBCCD(3, 1);
	unk_0x85DF15590BBEBCCD(2, 1);
	if (Global_36839 == 1)
	{
		if (func_110(unk_0x27D769C59BC9D030()))
		{
			func_101(unk_0x27D769C59BC9D030());
		}
	}
	if (!func_148())
	{
		if (iParam0 < 63)
		{
			func_99(iParam0);
			Var0 = { func_9(iParam0) };
			unk_0x0F0476353304C917(1, &Var0);
		}
	}
}

void func_99(int iParam0)
{
	if (iParam0 < 63)
	{
		func_100();
		Global_69744 = iParam0;
		Global_69743 = 0;
		Global_69746 = 7;
	}
}

void func_100()
{
	if (Global_69743 != 6)
	{
	}
	if (Global_69748)
	{
		unk_0xFEA003123EAA8CFB(15);
		Global_69748 = 0;
		Global_17257.f_7862 = 0;
	}
	Global_69743 = 6;
	Global_69745 = -1;
	Global_69744 = -1;
}

void func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36642[iVar0 /*5*/];
		func_104(1, iVar1, 1);
		return;
	}
	iVar2 = func_103(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_102(iVar2);
}

void func_102(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36616[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36616[iParam0 /*5*/].f_1 == unk_0x27D769C59BC9D030())
		{
			Global_36837 = 0;
		}
	}
	Global_36616[iParam0 /*5*/] = 13;
	Global_36616[iParam0 /*5*/].f_1 = 0;
	Global_36616[iParam0 /*5*/].f_2 = 0;
	Global_36616[iParam0 /*5*/].f_3 = 0;
	Global_36616[iParam0 /*5*/].f_4 = 0;
	Global_36615 = (Global_36615 - 1);
	if (Global_36615 < 0)
	{
		Global_36615 = 0;
	}
}

int func_103(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36616[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_104(int iParam0, int iParam1, int iParam2)
{
	func_105(iParam0, iParam1, iParam2, 0, 0);
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_107(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_106();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36723[iVar0 /*5*/] = iParam0;
	Global_36723[iVar0 /*5*/].f_1 = iParam1;
	Global_36723[iVar0 /*5*/].f_2 = iParam2;
	Global_36723[iVar0 /*5*/].f_3 = iParam3;
	Global_36723[iVar0 /*5*/].f_4 = iParam4;
}

int func_106()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36723[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	if (func_108(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_108(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36723[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36723[iVar0 /*5*/])
			{
				if (iParam1 == Global_36723[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_109(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36642[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_110(int iParam0)
{
	if (func_179(iParam0))
	{
		if (!unk_0xE4F7206742848BAF(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_112()
{
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xF17F4B0641AB2DE1(&Global_2283, 25);
	unk_0x26545538B51562AD(&Global_2284, 11);
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_114(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_179(uParam0->f_28[iVar0]))
		{
			unk_0xF7B3552987613A6B(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_179(uParam0->f_35[iVar0]))
		{
			unk_0xF7B3552987613A6B(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_179(uParam0->f_41[iVar0]))
		{
			unk_0xF7B3552987613A6B(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xF7B3552987613A6B(unk_0x27D769C59BC9D030(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), iParam1);
		if (bParam2)
		{
			unk_0xCA26676919C42B5B(unk_0x27D769C59BC9D030(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_116(bool bParam0)
{
	var uVar0;
	
	uVar0 = unk_0xB927AFB90873B8C1();
	if (!unk_0xE319A8D4D9264966(uVar0))
	{
		if (bParam0)
		{
		}
		unk_0x9F805E4A6F671CEE(uVar0, bParam0, 16);
		unk_0x9F805E4A6F671CEE(uVar0, bParam0, 32);
	}
	func_117(1, 1, 0, 0);
}

void func_117(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x0952A7BA90103950(unk_0x4D29100D094E5511());
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 1);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 1);
		func_125(1);
		unk_0xD14C6D196E70C6B0();
		unk_0x7CC7CFD7BFFAAC4C();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x0EFEEF8E6B0B4E34())
			{
				unk_0x94DA6AACA7F07289(0);
			}
			if (!func_124())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_123(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_125(0);
		unk_0xFF2A2F3774F8F7B6();
		Global_55755 = 0;
		if (bParam1)
		{
			unk_0x2E6328B1B95241F5();
		}
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 0);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 0);
		func_123(0, iParam3, iParam2, 0);
		if (unk_0x0E063DDE8855EC52())
		{
			if (((!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_121(unk_0x4D29100D094E5511())) && !func_119(unk_0x4D29100D094E5511(), 0)) && !func_118())
			{
				unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
			}
		}
		else if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_121(unk_0x4D29100D094E5511()))
		{
			unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
		}
		Global_69487 = 0;
	}
}

bool func_118()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 14);
}

bool func_119(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_120(-1, 0) == 8;
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

int func_120(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_49();
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

int func_121(int iParam0)
{
	if (func_119(iParam0, 0))
	{
		return 1;
	}
	if (func_122())
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

bool func_122()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 3);
}

int func_123(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_124()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0)
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

int func_126(char* sParam0)
{
	if (!unk_0x75CB9E30BA492FF0(uParam0))
	{
		unk_0xA51826E3518111A3(uParam0);
		while (!unk_0x9A8E9A1E029E9A5A(sParam0))
		{
			unk_0xA51826E3518111A3(sParam0);
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	func_271("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_127()
{
	Global_14578 = 0;
	func_128();
}

void func_128()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if ((unk_0x0EFEEF8E6B0B4E34() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(1);
		Global_15712 = 6;
		return;
	}
}

int func_129()
{
	if (Global_15712 != 0 || unk_0x1BF2632AED6B5924())
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	func_134();
	func_133();
	func_131();
}

void func_131()
{
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			if (func_132(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0x810AFFABCBF31E2D(unk_0x27D769C59BC9D030(), -828834893) != 1)
				{
					unk_0x550B00F01FC4ADF0(unk_0x27D769C59BC9D030(), 0, 0);
				}
			}
		}
	}
}

int func_132(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xCFF471245AFEEDCE(0, 71, 1);
	unk_0xCFF471245AFEEDCE(0, 72, 1);
	unk_0xCFF471245AFEEDCE(0, 76, 1);
	unk_0xCFF471245AFEEDCE(0, 73, 1);
	unk_0xCFF471245AFEEDCE(0, 59, 1);
	unk_0xCFF471245AFEEDCE(0, 60, 1);
	if (bParam5)
	{
		unk_0xCFF471245AFEEDCE(0, 75, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 80, 1);
	if (!bParam6)
	{
		unk_0xCFF471245AFEEDCE(0, 69, 1);
		unk_0xCFF471245AFEEDCE(0, 70, 1);
		unk_0xCFF471245AFEEDCE(0, 68, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 74, 1);
	unk_0xCFF471245AFEEDCE(0, 86, 1);
	unk_0xCFF471245AFEEDCE(0, 81, 1);
	unk_0xCFF471245AFEEDCE(0, 82, 1);
	unk_0xCFF471245AFEEDCE(0, 138, 1);
	unk_0xCFF471245AFEEDCE(0, 136, 1);
	unk_0xCFF471245AFEEDCE(0, 114, 1);
	unk_0xCFF471245AFEEDCE(0, 107, 1);
	unk_0xCFF471245AFEEDCE(0, 110, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 87, 1);
	unk_0xCFF471245AFEEDCE(0, 88, 1);
	unk_0xCFF471245AFEEDCE(0, 113, 1);
	unk_0xCFF471245AFEEDCE(0, 115, 1);
	unk_0xCFF471245AFEEDCE(0, 116, 1);
	unk_0xCFF471245AFEEDCE(0, 117, 1);
	unk_0xCFF471245AFEEDCE(0, 118, 1);
	unk_0xCFF471245AFEEDCE(0, 119, 1);
	unk_0xCFF471245AFEEDCE(0, 131, 1);
	unk_0xCFF471245AFEEDCE(0, 132, 1);
	unk_0xCFF471245AFEEDCE(0, 123, 1);
	unk_0xCFF471245AFEEDCE(0, 126, 1);
	unk_0xCFF471245AFEEDCE(0, 129, 1);
	unk_0xCFF471245AFEEDCE(0, 130, 1);
	unk_0xCFF471245AFEEDCE(0, 133, 1);
	unk_0xCFF471245AFEEDCE(0, 134, 1);
	unk_0xD2707D96EC4B48D3();
	if ((unk_0xA0F74982C6AAA9D4() - Global_29) > 500)
	{
		unk_0x29D71D9710F2540E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xA0F74982C6AAA9D4();
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		if (unk_0x43698C98CC255554(unk_0xECC01072E61D2F3A(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_133()
{
	unk_0xCFF471245AFEEDCE(0, 21, 1);
	unk_0xCFF471245AFEEDCE(0, 37, 1);
	unk_0xCFF471245AFEEDCE(0, 25, 1);
	unk_0xCFF471245AFEEDCE(0, 141, 1);
	unk_0xCFF471245AFEEDCE(0, 140, 1);
	unk_0xCFF471245AFEEDCE(0, 24, 1);
	unk_0xCFF471245AFEEDCE(0, 257, 1);
	unk_0xCFF471245AFEEDCE(0, 22, 1);
	unk_0xCFF471245AFEEDCE(0, 23, 1);
}

void func_134()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_137(0))
		{
			func_135(0);
		}
		unk_0x26545538B51562AD(&Global_2284, 2);
	}
}

void func_135(int iParam0)
{
	if (Global_14571)
	{
		func_136(0, 0);
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
	if (!func_124())
	{
		Global_14413.f_1 = 3;
	}
}

void func_136(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_137(0))
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

int func_137(int iParam0)
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

int func_138(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_146();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_141(&(Global_100241[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_140(iParam0);
	return 1;
}

void func_140(int iParam0)
{
	Global_100241[iParam0 /*10*/].f_4 = 1;
	Global_100241[iParam0 /*10*/].f_5 = 0;
	Global_100241[iParam0 /*10*/].f_6 = 0;
	Global_100241[iParam0 /*10*/] = 0;
}

int func_141(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89089.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_145(0))
		{
			return 0;
		}
		Global_35675++;
		*uParam0 = Global_35675;
		unk_0x4056514F44BCBB31(unk_0xB927AFB90873B8C1(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xB1063C2349425DD1(8);
		}
		Global_35711 = iParam2;
		Global_35673 = *uParam0;
		Global_35674 = iParam4;
		Global_35672 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35672 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35672)
			{
				if (Global_35678[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35673 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_143(iParam2))
		{
			return 0;
		}
		if (Global_35672 == 8)
		{
			return 0;
		}
		Global_35675++;
		*uParam0 = Global_35675;
		Global_35678[Global_35672 /*4*/] = Global_35675;
		Global_35678[Global_35672 /*4*/].f_1 = iParam1;
		Global_35678[Global_35672 /*4*/].f_2 = iParam2;
		Global_35678[Global_35672 /*4*/].f_3 = 0;
		Global_35672++;
		if (iParam4 != 0)
		{
			func_142(uParam0, iParam4);
		}
	}
	return 2;
}

void func_142(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35672 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35672)
	{
		if (Global_35678[iVar0 /*4*/] == *uParam0)
		{
			Global_35678[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_143(int iParam0)
{
	return func_144(iParam0, Global_35711);
}

int func_144(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_145(int iParam0)
{
	if (Global_35711 == 15)
	{
		return 0;
	}
	if (func_143(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_146()
{
	return func_147(unk_0x3AA961419D971CB2(), 0);
}

int func_147(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x70ABFF261710305D(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_94(iVar0, &uVar1);
		if (unk_0x70ABFF261710305D(uVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_148()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return 1;
	}
	return 0;
}

void func_149(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = func_150(-1604.668f, 5239.1f, 3.01f, 0);
			unk_0x216986E3E3E543F2(*uParam1, 66);
			unk_0x8D910E607F73E53D(*uParam1, 42);
			break;
		
		case 1:
			*uParam1 = func_150(-1592.84f, 5214.04f, 3.01f, 0);
			unk_0x216986E3E3E543F2(*uParam1, 400);
			unk_0x8D910E607F73E53D(*uParam1, 42);
			break;
		
		case 2:
		case 3:
			*uParam1 = func_150(190.26f, -956.35f, 29.63f, 0);
			if ((unk_0xF426A5DE932B3BEE(Global_101154.f_17264[2 /*6*/], 3) || unk_0xF426A5DE932B3BEE(Global_101154.f_17264[4 /*6*/], 3)) || unk_0xF426A5DE932B3BEE(Global_101154.f_17264[4 /*6*/], 3))
			{
				unk_0x216986E3E3E543F2(*uParam1, 381);
			}
			else
			{
				unk_0x216986E3E3E543F2(*uParam1, 66);
			}
			if (iParam0 == 2)
			{
				unk_0x8D910E607F73E53D(*uParam1, 42);
			}
			else
			{
				unk_0x8D910E607F73E53D(*uParam1, 44);
			}
			break;
		
		case 4:
			*uParam1 = func_150(414f, -761f, 29f, 0);
			if (unk_0xF426A5DE932B3BEE(Global_101154.f_17264[2 /*6*/], 3) || unk_0xF426A5DE932B3BEE(Global_101154.f_17264[3 /*6*/], 3))
			{
				unk_0x216986E3E3E543F2(*uParam1, 381);
			}
			else
			{
				unk_0x216986E3E3E543F2(*uParam1, 66);
			}
			unk_0x8D910E607F73E53D(*uParam1, 43);
			break;
		
		case 9:
			*uParam1 = func_150(-1622.89f, 4204.87f, 83.3f, 0);
			unk_0x216986E3E3E543F2(*uParam1, 66);
			unk_0x8D910E607F73E53D(*uParam1, 42);
			break;
		
		case 11:
		case 12:
		case 13:
			if (iParam0 == 11)
			{
				*uParam1 = func_150(1835.53f, 4705.86f, 38.1f, 0);
			}
			else if (iParam0 == 12)
			{
				*uParam1 = func_150(1826.13f, 4698.88f, 38.92f, 0);
			}
			else
			{
				*uParam1 = func_150(637.02f, 119.7093f, 89.5f, 0);
			}
			unk_0x216986E3E3E543F2(*uParam1, 206);
			unk_0x8D910E607F73E53D(*uParam1, 42);
			break;
		
		case 18:
		case 19:
			if (iParam0 == 18)
			{
				*uParam1 = func_150(-954.19f, -2760.05f, 14.64f, 0);
			}
			else
			{
				*uParam1 = func_150(-63.8f, -809.5f, 321.8f, 0);
			}
			unk_0x216986E3E3E543F2(*uParam1, 382);
			unk_0x8D910E607F73E53D(*uParam1, 43);
			break;
		
		case 21:
		case 23:
			if (iParam0 == 21)
			{
				*uParam1 = func_150(-1877.82f, -440.649f, 45.05f, 0);
			}
			else
			{
				*uParam1 = func_150(-915.6f, 6139.2f, 5.5f, 0);
			}
			if ((unk_0xF426A5DE932B3BEE(Global_101154.f_17264[21 /*6*/], 3) || unk_0xF426A5DE932B3BEE(Global_101154.f_17264[22 /*6*/], 3)) || unk_0xF426A5DE932B3BEE(Global_101154.f_17264[23 /*6*/], 3))
			{
				unk_0x216986E3E3E543F2(*uParam1, 405);
			}
			else
			{
				unk_0x216986E3E3E543F2(*uParam1, 66);
			}
			if (iParam0 == 21)
			{
				unk_0x8D910E607F73E53D(*uParam1, 42);
			}
			else
			{
				unk_0x8D910E607F73E53D(*uParam1, 43);
			}
			break;
		
		case 27:
			*uParam1 = func_150(-1104.93f, 291.25f, 64.3f, 0);
			unk_0x216986E3E3E543F2(*uParam1, 66);
			unk_0x8D910E607F73E53D(*uParam1, 44);
			break;
		
		case 30:
			*uParam1 = func_150(-1104.93f, 291.25f, 64.3f, 0);
			unk_0x216986E3E3E543F2(*uParam1, 385);
			unk_0x8D910E607F73E53D(*uParam1, 44);
			break;
		
		case 34:
			*uParam1 = func_150(-303.82f, 6211.29f, 31.05f, 0);
			unk_0x216986E3E3E543F2(*uParam1, 386);
			unk_0x8D910E607F73E53D(*uParam1, 44);
			break;
		
		case 43:
			*uParam1 = func_150(-44.75f, -1288.67f, 28.21f, 0);
			unk_0x216986E3E3E543F2(*uParam1, 149);
			unk_0x8D910E607F73E53D(*uParam1, 44);
			break;
		
		case 46:
			*uParam1 = func_150(-149.75f, 285.81f, 93.67f, 0);
			unk_0x216986E3E3E543F2(*uParam1, 66);
			unk_0x8D910E607F73E53D(*uParam1, 43);
			break;
		
		case 47:
		case 48:
			if (iParam0 == 47)
			{
				*uParam1 = func_150(-70.71f, 301.43f, 106.79f, 0);
			}
			else
			{
				*uParam1 = func_150(-257.22f, 292.85f, 90.63f, 0);
			}
			unk_0x216986E3E3E543F2(*uParam1, 389);
			unk_0x8D910E607F73E53D(*uParam1, 43);
			break;
	}
}

var func_150(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x43B8950858CAD66F(Param0);
	unk_0xC5B4E9487339A2BB(uVar0, func_151(unk_0x0E063DDE8855EC52(), 1f, 1f));
	unk_0xAB27F3DE6390C749(uVar0, iParam3);
	return uVar0;
}

float func_151(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 9:
		case 11:
		case 12:
		case 13:
		case 18:
		case 19:
		case 21:
		case 23:
		case 27:
		case 30:
		case 34:
		case 43:
		case 46:
		case 47:
		case 48:
			return 1;
			break;
	}
	return 0;
}

int func_153(int iParam0, int iParam1)
{
	switch (iParam0->f_16)
	{
		case 0:
			if (*iParam0 == 12)
			{
				if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0))
				{
					if (func_179(iParam0->f_28[0]))
					{
						if (unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), unk_0xA8CFDE65C45F813B(iParam0->f_28[0], 1), 1) < 3f)
						{
							if (func_159(2))
							{
								if (func_157(iParam0->f_27))
								{
									func_156(iParam0->f_27, *iParam0);
									func_271("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_179(iParam0->f_28[0]))
				{
					if (func_155(iParam0))
					{
						if (func_159(2))
						{
							if (func_157(iParam0->f_27))
							{
								func_156(iParam0->f_27, *iParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*iParam0 == 21)
			{
				if ((((!unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0))
				{
					if (func_179(iParam0->f_28[0]))
					{
						if (func_155(iParam0))
						{
							if (func_159(2))
							{
								if (func_157(iParam0->f_27))
								{
									func_156(iParam0->f_27, *iParam0);
									return 1;
								}
							}
						}
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
			else if (*iParam0 == 22)
			{
				if (!unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0))
				{
					if (func_179(iParam0->f_28[0]))
					{
						if (func_155(iParam0))
						{
							if (func_159(2))
							{
								if (func_157(iParam0->f_27))
								{
									func_156(iParam0->f_27, *iParam0);
									return 1;
								}
							}
						}
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
			else if (func_179(iParam0->f_28[0]))
			{
				if (func_155(iParam0))
				{
					if (func_159(2))
					{
						if (func_157(iParam0->f_27))
						{
							func_156(iParam0->f_27, *iParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_179(iParam0->f_35[0]))
			{
				if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iParam0->f_35[0], 0))
				{
					if (func_159(3))
					{
						func_156(iParam0->f_27, *iParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_154();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0xD2CFFE76B625AE55(iParam0->f_35[0]))
			{
				if (!unk_0x2006A8C1BA2AFE80(iParam0->f_35[0], 0))
				{
					if (unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), unk_0xA8CFDE65C45F813B(iParam0->f_35[0], 1), 1) < iParam0->f_15)
					{
						if (func_159(2))
						{
							if (func_157(iParam0->f_27))
							{
								func_156(iParam0->f_27, *iParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), iParam0->f_17[0 /*3*/], 1) < iParam0->f_15)
			{
				if (func_159(2))
				{
					if (func_157(iParam0->f_27))
					{
						func_156(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], 0, 1, 0))
			{
				if (func_159(2))
				{
					if (func_157(iParam0->f_27))
					{
						func_156(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*iParam0 == 6)
			{
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					if (func_179(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0)))
					{
						if (unk_0x753C14DD45ABE554(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), joaat("towtruck")) || unk_0x753C14DD45ABE554(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), joaat("towtruck2")))
						{
							if (unk_0x10BD59A398C824DA(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), iParam0->f_35[0]))
							{
								if (func_159(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0x753C14DD45ABE554(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), joaat("cargobob")) || unk_0x753C14DD45ABE554(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), joaat("cargobob2"))) || unk_0x753C14DD45ABE554(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), joaat("cargobob3")))
						{
							if (unk_0x49DCB5DE283168AD(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0)) && unk_0x19A55033C9E27A8A(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), iParam0->f_35[0]))
							{
								if (func_159(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*iParam0 == 10)
			{
				if (unk_0x20F71E6370022C2C(unk_0x27D769C59BC9D030()) >= 2f)
				{
					if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0))
					{
						if (func_159(2))
						{
							if (func_157(iParam0->f_27))
							{
								func_156(iParam0->f_27, *iParam0);
								func_271("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*iParam0 == 46)
			{
				if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (*iParam0 == 31)
			{
				if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0))
				{
					if (func_159(2))
					{
						if (func_157(1))
						{
							func_156(1, *iParam0);
							func_271("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*iParam0 == 39)
			{
				if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0))
				{
					if (!unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0))
					{
						if (!unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0))
						{
							if (func_159(2))
							{
								if (func_157(iParam0->f_27))
								{
									func_156(iParam0->f_27, *iParam0);
									func_271("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], iParam0->f_24, 0, 1, 0))
			{
				if (*iParam0 == 45)
				{
					if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0))
					{
						return 0;
					}
				}
				if (func_159(2))
				{
					if (func_157(iParam0->f_27))
					{
						func_156(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_154()
{
	func_27(&(Global_93091.f_2311), &Global_93091, 0, 1, 1, 0);
}

int func_155(var uParam0)
{
	float fVar0;
	
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), unk_0xA8CFDE65C45F813B(uParam0->f_28[0], 1), 1) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), unk_0xA8CFDE65C45F813B(uParam0->f_28[0], 1), 1) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_156(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_113(iParam1))
		{
			return;
		}
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			func_271("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0x5723DA3F8C10C270(unk_0x27D769C59BC9D030()) || unk_0xDF29E1AF81C00A22(unk_0x27D769C59BC9D030()))
			{
				func_271("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0x8BE1AEC303A057F7(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 0, 1, 0);
			}
			func_130();
		}
	}
}

int func_157(bool bParam0)
{
	int iVar0;
	
	if (unk_0x2DB75A8F096AB1F1(unk_0xB927AFB90873B8C1()))
	{
		if (unk_0x17753565205CF66F(unk_0x27D769C59BC9D030()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
			{
				iVar0 = unk_0x070841EC2D20AB5A();
				if (func_158(iVar0))
				{
					if (unk_0x5723DA3F8C10C270(unk_0x27D769C59BC9D030()) || unk_0xDF29E1AF81C00A22(unk_0x27D769C59BC9D030()))
					{
						if ((!unk_0xF6E7E32D0D604675(iVar0) && !unk_0x0BAF34551BADE6DC(iVar0)) && unk_0xECC01072E61D2F3A(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0x0BAF34551BADE6DC(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	if (func_179(uParam0))
	{
		if (unk_0x0B4DDB992C7BCF57(uParam0, 0))
		{
			if (!unk_0xFA7888B344869306(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_159(int iParam0)
{
	int iVar0;
	
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
		{
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				iVar0 = func_89();
				if (!func_36(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511()) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0)) || func_167()) || Global_100201) || Global_25122) || func_166()) || func_165(8, -1)) || func_77()) || func_164()) || func_163()) || func_162()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1) || func_167()) || Global_25122) || func_166()) || func_165(8, -1)) || func_163()) || func_77()) || func_164()) || func_162()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511()) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0)) || func_167()) || Global_100201) || Global_25122) || func_166()) || func_165(8, -1)) || func_163()) || func_77()) || func_164()) || func_162()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0)) || func_167()) || Global_100201) || Global_25122) || func_166()) || func_165(8, -1)) || func_77()) || func_164()) || func_162()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_167() || unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0) || func_165(8, -1)) || func_162()) || func_161()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_165(8, -1) || func_77()) || func_164()) || func_161()) || func_160())
						{
							return 0;
						}
						if ((unk_0x5D293E404CA20AA5() && unk_0x472A7A9D6102404C() != 3) && unk_0x00798D768A589710() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
						{
							if ((((((((((((((unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0) || unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || func_167()) || Global_25122) || func_166()) || func_165(8, -1)) || func_164()) || func_163()) || func_162()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0) || !unk_0x170C6E2649B67440(unk_0x4D29100D094E5511())) || !unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511())) || !unk_0xCBB243DDC0D132D1()) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || func_167()) || func_164()) || Global_100201) || Global_25122) || func_166()) || Global_36839) || func_165(8, -1)) || func_163()) || func_161()) || func_162()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0) || !unk_0x170C6E2649B67440(unk_0x4D29100D094E5511())) || !unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511())) || !unk_0xCBB243DDC0D132D1()) || unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0)) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1)) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0x27B3DE54D214014B(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || func_167()) || Global_100201) || Global_25122) || func_166()) || func_165(8, -1)) || func_163()) || func_161()) || func_77()) || func_164()) || func_162())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_160()
{
	return Global_91317.f_1;
}

int func_161()
{
	if (Global_88533 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return 0;
}

int func_162()
{
	if (unk_0xD32535FA4397160F(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (Global_69749)
	{
		return 1;
	}
	else if (Global_55743 && !Global_55749)
	{
		return 1;
	}
	return 0;
}

bool func_164()
{
	return Global_91330.f_297 > 0;
}

bool func_165(int iParam0, int iParam1)
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

var func_166()
{
	return Global_1315913;
}

int func_167()
{
	if (!unk_0x0E063DDE8855EC52())
	{
		return Global_89089.f_44 == 1;
	}
	return 0;
}

void func_168(int iParam0)
{
	if (iLocal_97 == -1)
	{
		iLocal_97 = unk_0xA0F74982C6AAA9D4();
	}
	if ((unk_0xA0F74982C6AAA9D4() - iLocal_97) >= 900)
	{
		if (func_179(iParam0->f_28[0]))
		{
			if (!func_129())
			{
				func_169(iParam0->f_28[0], "PUSHUP_BREATH", "MARYANN", 6);
				iLocal_97 = unk_0xA0F74982C6AAA9D4();
			}
		}
	}
}

void func_169(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x1D6AFE0F8AC2F140(uParam0, sParam1, sParam2, func_170(iParam3), 0);
}

int func_170(int iParam0)
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

int func_171(int iParam0, struct<3> Param1, char[4] cParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	var uVar0;
	
	if ((((func_179(unk_0x27D769C59BC9D030()) && func_179(iParam0->f_28[0])) && !func_129()) && (unk_0xA0F74982C6AAA9D4() - iParam0->f_60) > iParam8) && func_175(unk_0x27D769C59BC9D030(), Param1, 1) < fParam9)
	{
		uVar0 = 16;
		func_174(&uVar0, iParam6, iParam0->f_28[0], sParam7, 0, 1);
		func_172(&uVar0, cParam4, sParam5, 7, 0, 0);
		iParam0->f_60 = unk_0xA0F74982C6AAA9D4();
		return 1;
	}
	return 0;
}

void func_172(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_173(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x26545538B51562AD(&Global_14578, 0);
	Global_15715 = iParam3;
	StringCopy(&Global_15702, sParam2, 24);
}

void func_173(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_174(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69489)
	{
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 0);
			}
			else
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 1);
			}
		}
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 0);
			}
			else
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 1);
			}
		}
	}
}

float func_175(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Param1, iParam4);
}

int func_176(int iParam0, struct<3> Param1, char[4] cParam4, char* sParam5, int iParam6, char* sParam7, int iParam8)
{
	var uVar0;
	
	if (func_159(2))
	{
		if (!func_129())
		{
			if (((func_179(unk_0x27D769C59BC9D030()) && func_179(iParam0->f_28[0])) && (unk_0xA0F74982C6AAA9D4() - iParam0->f_60) > iParam8) && func_175(unk_0x27D769C59BC9D030(), Param1, 1) < 20f)
			{
				uVar0 = 16;
				func_174(&uVar0, iParam6, iParam0->f_28[0], sParam7, 0, 1);
				func_172(&uVar0, cParam4, sParam5, 7, 0, 0);
				iParam0->f_60 = unk_0xA0F74982C6AAA9D4();
				return 1;
			}
		}
		else if (func_177(sParam5))
		{
			if (func_179(unk_0x27D769C59BC9D030()))
			{
				if (func_175(unk_0x27D769C59BC9D030(), Param1, 1) >= 20f)
				{
					func_127();
				}
			}
		}
	}
	return 0;
}

int func_177(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = { func_178() };
	if (unk_0xC1C5B83BB6719C6C(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_178()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

int func_179(int iParam0)
{
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_180(int iParam0, char* sParam1, struct<3> Param2)
{
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (!unk_0x75CB9E30BA492FF0(sParam1))
		{
			if (Global_35711 == 17)
			{
				if (*iParam0 != -1)
				{
					func_185(iParam0);
				}
			}
			else if (func_184())
			{
				if (*iParam0 != -1)
				{
					func_185(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_175(unk_0x27D769C59BC9D030(), Param2, 1) <= 100f)
				{
					func_183(iParam0, 1);
				}
			}
			else
			{
				switch (func_182(*iParam0))
				{
					case 1:
						if (unk_0xC1C5B83BB6719C6C(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0xD6EC97AEEF3FE2E2(sParam1, 14, 8);
						}
						else
						{
							unk_0xE592C68A352C5B0A(sParam1, 8);
						}
						unk_0x9DF148510E13CD9A(2);
						func_181(*iParam0, 1);
						break;
					
					case 2:
						unk_0x6D84AAC1F334DEE9(0);
						unk_0x18159512D699D089();
						unk_0x9DF148510E13CD9A(0);
						func_181(*iParam0, 0);
						break;
				}
				if (func_175(unk_0x27D769C59BC9D030(), Param2, 1) > 120f)
				{
					func_185(iParam0);
				}
			}
		}
	}
}

void func_181(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_69485 == iParam0)
		{
			Global_69486 = iParam0;
		}
	}
	else if (Global_69486 == iParam0)
	{
		Global_69486 = -1;
	}
}

int func_182(int iParam0)
{
	if (Global_69485 == iParam0)
	{
		if (Global_69486 == -1)
		{
			if (Global_69484 < unk_0xA08D2B17A64B8371())
			{
				return 1;
			}
		}
	}
	else if (Global_69486 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_183(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (Global_69482 < 5)
	{
		Global_69471[Global_69482 /*2*/] = 0;
		Global_69471[Global_69482 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_69482)
			{
				if (Global_69471[iVar1 /*2*/] == Global_69471[Global_69482 /*2*/])
				{
					Global_69471[Global_69482 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_69471[Global_69482 /*2*/];
		Global_69482++;
		Global_69483 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

bool func_184()
{
	return Global_88920;
}

void func_185(int iParam0)
{
	unk_0x6D84AAC1F334DEE9(0);
	unk_0x18159512D699D089();
	func_186(iParam0);
}

void func_186(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_69486 == *iParam0)
	{
		func_181(*iParam0, 0);
	}
	if (Global_69485 == *iParam0)
	{
		Global_69485 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_69482)
	{
		if (Global_69471[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_69482 - 2))
	{
		Global_69471[iVar2 /*2*/] = Global_69471[iVar2 + 1 /*2*/];
		Global_69471[iVar2 /*2*/].f_1 = Global_69471[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_69471[(Global_69482 - 1) /*2*/] = -1;
	Global_69471[(Global_69482 - 1) /*2*/].f_1 = 3;
	Global_69482 = (Global_69482 - 1);
	Global_69483 = 1;
	Global_69484 = unk_0xA08D2B17A64B8371();
	*iParam0 = -1;
}

void func_187(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_146();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_100241[iParam0 /*10*/].f_1 = 1;
}

int func_188(var uParam0, bool bParam1)
{
	struct<27> Var0;
	
	if (Global_69489)
	{
		func_271("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_94(*uParam0, &Var0);
	if ((func_225(*uParam0) || func_223(*uParam0)) || Global_69734 == 1)
	{
		return 1;
	}
	if (!unk_0x7742FB54677E08D9())
	{
		func_271("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_219(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_218(uParam0->f_28[0]);
		}
		func_271("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_198(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_198(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_196(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_195(uParam0);
			}
			else
			{
				func_193(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_196(uParam0, 0, 1))
		{
			func_193(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_196(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_196(uParam0, 1, 0))
		{
			func_193(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_196(uParam0, 0, 0))
		{
			func_193(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_179(uParam0->f_35[0]))
		{
			if (!unk_0xB1988D54B2C48CB5(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (unk_0xACD604A3AE9C4A92(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_271("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!unk_0xF426A5DE932B3BEE(Var0.f_26, func_89()))
		{
			func_271("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_192(&(uParam0->f_48)) && bParam1)
	{
		func_189(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_189(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_179(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_192(uParam1))
				{
					if (unk_0x482101C9B3483958(*uParam1))
					{
						unk_0x09D2BE36C9D2B76F(iParam0);
						if (iParam2 != 21)
						{
							if (func_66(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								unk_0x878D12AEFBF5BAF0(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0x33A0CEA494F4C2A3(&uVar0);
								if (func_191(uParam1))
								{
									unk_0xFEB38679E5E29979(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									unk_0xFEB38679E5E29979(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								unk_0xFEB38679E5E29979(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0x33F83FC0F5F458E3(uVar0);
								unk_0x8B8674266D533E9F(iParam0, uVar0);
								unk_0x433C209504FBC7EE(&uVar0);
							}
						}
						else
						{
							unk_0xFEB38679E5E29979(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_191(uParam1) || !unk_0xF4954568C87BA772(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_190(iParam2) && !unk_0xB1D18B06E0525A9E(iParam0, unk_0x27D769C59BC9D030(), 25f))
					{
						unk_0xF14C2AE8A3F59CE0(iParam0, unk_0x27D769C59BC9D030(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_191(uParam1) && uParam1->f_4 == 0) && unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), unk_0xA8CFDE65C45F813B(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0x33A0CEA494F4C2A3(&uVar1);
				if (func_66(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					unk_0x878D12AEFBF5BAF0(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0x878D12AEFBF5BAF0(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0xFEB38679E5E29979(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0xFEB38679E5E29979(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				unk_0x33F83FC0F5F458E3(uVar1);
				unk_0x8B8674266D533E9F(iParam0, uVar1);
				unk_0x433C209504FBC7EE(&uVar1);
				uParam1->f_4 = 1;
				if (func_190(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_190(iParam2) || unk_0xB1D18B06E0525A9E(iParam0, unk_0x27D769C59BC9D030(), 10f))
				{
					if (func_66(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						unk_0x878D12AEFBF5BAF0(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						unk_0xFEB38679E5E29979(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_190(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_191(var uParam0)
{
	if (unk_0x75CB9E30BA492FF0(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_192(var uParam0)
{
	if (unk_0x75CB9E30BA492FF0(*uParam0) || unk_0x75CB9E30BA492FF0(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_193(var uParam0)
{
	int iVar0;
	var uVar1;
	
	if (*uParam0 == 52)
	{
		func_194(&(uParam0->f_41[1]));
		func_194(&(uParam0->f_41[2]));
	}
	if (func_179(unk_0x27D769C59BC9D030()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_110(uParam0->f_28[iVar0]))
			{
				if (!unk_0x9A4E2270C2271219(uParam0->f_28[iVar0], 0))
				{
					unk_0xF1919C21714E9FAF(uParam0->f_28[iVar0], 1, 0);
					unk_0xA8CA82EB31D1626F(uParam0->f_28[0], 0);
				}
				unk_0x94DC76C688E7D222(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (func_179(uParam0->f_41[0]))
					{
						unk_0xF1919C21714E9FAF(uParam0->f_41[0], 1, 0);
						unk_0xA8CA82EB31D1626F(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_218(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						unk_0x88172B3983EC5071("rcmcollect_paperleadinout@");
						while (!unk_0x482101C9B3483958("rcmcollect_paperleadinout@"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x33A0CEA494F4C2A3(&uVar1);
						unk_0x878D12AEFBF5BAF0(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x3DA9DFE29006A19F(0, unk_0x27D769C59BC9D030(), 10000f, -1, 0, 0);
						unk_0x33F83FC0F5F458E3(uVar1);
						unk_0x8B8674266D533E9F(uParam0->f_28[iVar0], uVar1);
						unk_0x433C209504FBC7EE(&uVar1);
						break;
					
					case 0:
					case 1:
						unk_0x88172B3983EC5071("rcmabigail");
						while (!unk_0x482101C9B3483958("rcmabigail"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x33A0CEA494F4C2A3(&uVar1);
						unk_0x878D12AEFBF5BAF0(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x3DA9DFE29006A19F(0, unk_0x27D769C59BC9D030(), 10000f, -1, 0, 0);
						unk_0x33F83FC0F5F458E3(uVar1);
						unk_0x8B8674266D533E9F(uParam0->f_28[iVar0], uVar1);
						unk_0x433C209504FBC7EE(&uVar1);
						break;
					
					case 32:
						unk_0x88172B3983EC5071("rcmminute1");
						while (!unk_0x482101C9B3483958("rcmminute1"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x33A0CEA494F4C2A3(&uVar1);
						if (iVar0 == 0)
						{
							unk_0x878D12AEFBF5BAF0(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							unk_0x878D12AEFBF5BAF0(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						unk_0x3DA9DFE29006A19F(0, unk_0x27D769C59BC9D030(), 10000f, -1, 0, 0);
						unk_0x33F83FC0F5F458E3(uVar1);
						unk_0x8B8674266D533E9F(uParam0->f_28[iVar0], uVar1);
						unk_0x433C209504FBC7EE(&uVar1);
						break;
					
					case 24:
						unk_0x88172B3983EC5071("special_ped@hao@base");
						while (!unk_0x482101C9B3483958("special_ped@hao@base"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x33A0CEA494F4C2A3(&uVar1);
						unk_0x878D12AEFBF5BAF0(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0x3DA9DFE29006A19F(0, unk_0x27D769C59BC9D030(), 10000f, -1, 0, 0);
						unk_0x33F83FC0F5F458E3(uVar1);
						unk_0x8B8674266D533E9F(uParam0->f_28[iVar0], uVar1);
						unk_0x433C209504FBC7EE(&uVar1);
						break;
					
					default:
						unk_0xEC500F39EFE9D522(uParam0->f_28[iVar0]);
						unk_0x3DA9DFE29006A19F(uParam0->f_28[iVar0], unk_0x27D769C59BC9D030(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_194(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (unk_0x738E93147C5CBA85(*uParam0))
		{
			unk_0xE223D49B3EFFD3E3(*uParam0, 1, 1);
		}
		unk_0x7C0FE14555841C1E(uParam0);
	}
}

void func_195(var uParam0)
{
	int iVar0;
	
	if (func_179(unk_0x27D769C59BC9D030()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_110(uParam0->f_28[iVar0]))
			{
				unk_0x7ED3655E5924C6F4(uParam0->f_28[iVar0], 1, 0);
				unk_0xA8ED9F72DC442242(uParam0->f_28[iVar0], 0);
				unk_0x94DC76C688E7D222(uParam0->f_28[iVar0], 1);
				unk_0xF7CC6FE06DC847BB(uParam0->f_28[iVar0], unk_0x27D769C59BC9D030(), 0, 16);
				unk_0x7E8F7C1D05860F53(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_196(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_110(unk_0x27D769C59BC9D030()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0xD2CFFE76B625AE55(uParam0->f_35[iVar0]))
			{
				if (unk_0x2006A8C1BA2AFE80(uParam0->f_35[iVar0], 0))
				{
					func_271("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0x0B4DDB992C7BCF57(uParam0->f_35[iVar0], 0))
				{
					func_271("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0x77F1B7F6C32990D6(uParam0->f_35[iVar0], unk_0x27D769C59BC9D030(), 0))
				{
					func_271("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0x4C3235E6E203703D(uParam0->f_35[iVar0]) < 850)
				{
					func_271("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
					{
						if (unk_0x799B2D82E6E6C363(uParam0->f_35[iVar0], unk_0x27D769C59BC9D030()) && unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) > 5f)
						{
							func_271("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						uVar2 = unk_0x070841EC2D20AB5A();
						if (func_158(uVar2))
						{
							if (unk_0x946C63BD9EF05437(uVar2) == joaat("towtruck") || unk_0x946C63BD9EF05437(iVar2) == joaat("towtruck2"))
							{
								if (func_158(uParam0->f_35[iVar0]))
								{
									if (unk_0x10BD59A398C824DA(iVar2, uParam0->f_35[iVar0]))
									{
										func_271("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = unk_0x070841EC2D20AB5A();
						if (func_158(iVar3))
						{
							if (unk_0x799B2D82E6E6C363(uParam0->f_35[iVar0], iVar3) && unk_0xECC01072E61D2F3A(iVar3) > 6f)
							{
								func_271("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_197(unk_0x27D769C59BC9D030(), uParam0->f_35[iVar0]))
							{
								func_271("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_197(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		if (unk_0x0B4DDB992C7BCF57(iParam1, 0))
		{
			iVar0 = unk_0x841B76F992C06AAC(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_198(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_110(unk_0x27D769C59BC9D030()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0xD2CFFE76B625AE55(uParam0->f_28[iVar0]))
			{
				if (!unk_0xE4F7206742848BAF(uParam0->f_28[iVar0]))
				{
					if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
					{
						if (unk_0x799B2D82E6E6C363(unk_0x27D769C59BC9D030(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_193(uParam0);
							}
							else
							{
								func_195(uParam0);
							}
							if (func_129())
							{
								func_127();
							}
							func_271("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((unk_0x4D58D4878F3F3E12(uParam0->f_28[iVar0]) || unk_0x1A82CEBB20BF3F73(uParam0->f_28[iVar0])) || unk_0x84BB56A10D9E43D8(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_193(uParam0);
						}
						else
						{
							func_195(uParam0);
						}
						func_271("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (unk_0xBD036012AF60D938(uParam0->f_28[iVar0]))
					{
						if (unk_0xC4F9E3DD5445F8E4(uParam0->f_28[iVar0], unk_0x27D769C59BC9D030(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_193(uParam0);
							}
							else
							{
								func_195(uParam0);
							}
							func_271("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_217(*uParam0))
					{
						if (!func_138(*uParam0))
						{
							if (func_212(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_193(uParam0);
								}
								else
								{
									func_195(uParam0);
								}
								func_271("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (unk_0xACD604A3AE9C4A92(-1, unk_0xA8CFDE65C45F813B(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_193(uParam0);
							}
							else
							{
								func_195(uParam0);
							}
							func_271("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_200(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_193(uParam0);
							}
							else
							{
								func_195(uParam0);
							}
							func_271("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_199(*uParam0))
					{
						if (unk_0xACD604A3AE9C4A92(-1, unk_0xA8CFDE65C45F813B(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_193(uParam0);
							}
							else
							{
								func_195(uParam0);
							}
							func_271("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0)
						{
							if (iParam2 == 0)
							{
								func_193(uParam0);
							}
							else
							{
								func_195(uParam0);
							}
							func_271("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_271("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_179(uParam0->f_41[0]))
						{
							unk_0xF1919C21714E9FAF(uParam0->f_41[0], 1, 0);
							unk_0xA8CA82EB31D1626F(uParam0->f_41[0], 0);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_199(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_179(unk_0x27D769C59BC9D030()) && func_179(iParam0))
	{
		if (func_211(iParam0) || unk_0x3FB18423318A562B(unk_0x4D29100D094E5511(), iParam0))
		{
			if (unk_0x1D01F222CF5E89FA(unk_0x27D769C59BC9D030(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_201(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_201(int iParam0, float fParam1)
{
	return func_202(iParam0, unk_0x27D769C59BC9D030(), fParam1, 1, 250, 7);
}

bool func_202(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_210(iParam0, iParam1);
	if (!func_179(iParam0) || !func_179(iParam1))
	{
		if (iVar4 != -1)
		{
			func_209(&(Local_37[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_206(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_205();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x52AB056B2AF7BB53(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_203(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xA0F74982C6AAA9D4() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_203(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_179(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_204(iParam4, iParam7) };
		*uParam0 = unk_0xE98636CD6C8CB7F8(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xF196E47C22823C63(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x54F37403E01EFD97(iVar7))
	{
		func_179(iVar7);
		if (unk_0x97EA5EA3E7FE8500(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0x90686E8E74E1F89E(Param1, unk_0xA8CFDE65C45F813B(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0xA0F74982C6AAA9D4();
			return 1;
		}
		return 0;
	}
	if (unk_0x8F8858152A9B9959(iVar7))
	{
		func_179(iVar7);
		if (unk_0x9A4E2270C2271219(iParam4, 0))
		{
			if (unk_0x35E488C304B2E03E(iVar7) == unk_0xD9FFE8E1642C81E2(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0x90686E8E74E1F89E(Param1, unk_0xA8CFDE65C45F813B(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0xA0F74982C6AAA9D4();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_204(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x3A5708FEE1B560A9(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xA8CFDE65C45F813B(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x52AB056B2AF7BB53(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x52AB056B2AF7BB53(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x52AB056B2AF7BB53(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x52AB056B2AF7BB53(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x52AB056B2AF7BB53(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x52AB056B2AF7BB53(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xA8CFDE65C45F813B(iParam0, 1);
}

int func_205()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_206(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_208(unk_0xA8CFDE65C45F813B(iParam1, 1) - unk_0xA8CFDE65C45F813B(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xE7669FB0FEEAD3DD(iParam0) };
	}
	else
	{
		Var3 = { func_208(unk_0x52AB056B2AF7BB53(iParam0, 31086, 0f, 5f, 0f) - unk_0x52AB056B2AF7BB53(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_207(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_207(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_208(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_209(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_210(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_211(var uParam0)
{
	if (unk_0xC542D24D363306EC(unk_0x4D29100D094E5511(), uParam0) && unk_0x1D01F222CF5E89FA(unk_0x27D769C59BC9D030(), 6))
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_179(unk_0x27D769C59BC9D030()) && func_179(uParam0))
	{
		unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_216(uParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_213(uParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x32A33034ED29B524(unk_0x27D769C59BC9D030()))
			{
				if (unk_0x7C2070521268C99E(unk_0x27D769C59BC9D030()))
				{
					if (unk_0xFFA15D908A6FDCD4(unk_0xA8CFDE65C45F813B(uParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_216(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_213(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_213(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xA8CFDE65C45F813B(uParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x9EE518BD3F590933(unk_0xA8CFDE65C45F813B(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x9EE518BD3F590933(unk_0xA8CFDE65C45F813B(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x9EE518BD3F590933(unk_0xA8CFDE65C45F813B(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x9EE518BD3F590933(unk_0xA8CFDE65C45F813B(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_214(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_214(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x92C13FDA105016D1(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_214(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x4978AB631CEE55BD(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x4978AB631CEE55BD(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x4978AB631CEE55BD(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x4978AB631CEE55BD(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x4978AB631CEE55BD(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_215(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_215(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_208(Param1 - unk_0xA8CFDE65C45F813B(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xE7669FB0FEEAD3DD(iParam0) };
	}
	else
	{
		Var3 = { func_208(unk_0x52AB056B2AF7BB53(iParam0, 31086, 0f, 5f, 0f) - unk_0x52AB056B2AF7BB53(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_207(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_216(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x7C2070521268C99E(unk_0x27D769C59BC9D030()))
		{
			if (unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xFFA15D908A6FDCD4(unk_0xA8CFDE65C45F813B(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_218(int iParam0)
{
	var uVar0;
	
	if (func_179(unk_0x27D769C59BC9D030()) && func_179(uParam0))
	{
		unk_0x88172B3983EC5071("rcmextreme3");
		while (!unk_0x482101C9B3483958("rcmextreme3"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x33A0CEA494F4C2A3(&uVar0);
		unk_0x878D12AEFBF5BAF0(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0xF2E2A21DDA5A0DA4(0, 1);
		unk_0x7EE6C8CC61C98440(0, 64.6f, -737.8f, 44.2f);
		unk_0x3DA9DFE29006A19F(0, unk_0x27D769C59BC9D030(), 10000f, -1, 0, 0);
		unk_0x33F83FC0F5F458E3(uVar0);
		unk_0x8B8674266D533E9F(uParam0, uVar0);
		unk_0x433C209504FBC7EE(&uVar0);
	}
}

int func_219(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_146();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_225(iParam0))
	{
		return 0;
	}
	if (!func_143(4))
	{
		if (func_223(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_222() && !func_221())
	{
		return 1;
	}
	if (!func_220(iParam0))
	{
		if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
		{
			if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) != 0)
			{
				return 1;
			}
		}
	}
	if (!unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_221()
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

int func_222()
{
	if (Global_88533 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return 0;
}

int func_223(int iParam0)
{
	if ((func_224() && Global_91278.f_11 == 6) && iParam0 == func_147(&(Global_91278.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return 0;
	}
	return 1;
}

int func_225(int iParam0)
{
	if (func_92(0))
	{
		if (Global_69735.f_1 == 7)
		{
			if (Global_69735 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_226(int iParam0)
{
	switch (*iParam0)
	{
		case 21:
			if (!func_241(iParam0))
			{
				return 0;
			}
			break;
		
		case 22:
			if (!func_235(iParam0))
			{
				return 0;
			}
			break;
		
		case 23:
			if (!func_228(iParam0))
			{
				return 0;
			}
			break;
	}
	if (*iParam0 == 22)
	{
		uLocal_93 = func_227();
		unk_0x90CDF5C9FC20A5BF(816.3f, 1275.61f, 359.5f, 75f, 0);
	}
	func_271("Created initial scene");
	return 1;
}

var func_227()
{
	return unk_0x84496C593C3C7F04(744.7144f, 1254.726f, 357.0291f, 847.8754f, 1342.243f, 370.0352f, 0, 1, 1, 1);
}

int func_228(var uParam0)
{
	int iVar0[5];
	int iVar6;
	bool bVar7;
	struct<3> Var8;
	
	iVar0[0] = uLocal_92;
	iVar0[1] = joaat("prop_beach_towel_01");
	iVar0[2] = joaat("prop_energy_drink");
	iVar0[3] = joaat("prop_freeweight_01");
	iVar0[4] = joaat("prop_freeweight_02");
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			StringCopy(&(uParam0->f_9), "EF_3_RCM_CONCAT", 24);
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				unk_0x97C59C4E8349D15F(iVar0[iVar6]);
				iVar6++;
			}
			func_234(&(uParam0->f_48), "rcmfanatic3", "ef_3_rcm_loop_maryann", 0);
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_233(&iVar0) || !func_232(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			bVar7 = true;
			if (!unk_0xD2CFFE76B625AE55(uParam0->f_28[0]))
			{
				if (func_229(&(uParam0->f_28[0]), 61, -915.6f, 6139.192f, 5.525f, 111.24f, "FANATIC LAUNCHER RC", 1))
				{
					unk_0x018805F05877E2E2(uParam0->f_28[0], -915.6f, 6139.192f, 5.525f, 1, 0, 1);
					unk_0x0359A241E2DD22AC(uParam0->f_28[0], 2.52f, 0f, 111.24f, 0, 0);
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!unk_0xD2CFFE76B625AE55(uParam0->f_41[0]))
			{
				Var8 = { -916.6389f, 6137.046f, 4.7157f };
				uParam0->f_41[0] = unk_0xA8C993B9F5CB4D92(iVar0[1], Var8, 1, 1, 0);
				unk_0x018805F05877E2E2(uParam0->f_41[0], -916.6389f, 6137.046f, 4.7157f, 0, 0, 1);
				unk_0x0359A241E2DD22AC(uParam0->f_41[0], 1.7f, 19.1067f, 79.515f, 0, 1);
				unk_0xF01F794A8E94C0E1(uParam0->f_41[0], -0.0949f, 0.1369f, 0.6325f, 0.7564f);
				unk_0xA8CA82EB31D1626F(uParam0->f_41[0], 1);
			}
			if (!unk_0xD2CFFE76B625AE55(uParam0->f_41[1]))
			{
				Var8 = { -917.7f, 6138.89f, 4.72f };
				unk_0xF1F1EBE69E9A0DE7(Var8, &(Var8.f_2), 0);
				uParam0->f_41[1] = unk_0xA8C993B9F5CB4D92(iVar0[2], Var8, 1, 1, 0);
				unk_0xA8CA82EB31D1626F(uParam0->f_41[1], 1);
				unk_0x0359A241E2DD22AC(uParam0->f_41[1], -6.625818f, 1.30159f, -1.248891f, 0, 0);
			}
			if (!unk_0xD2CFFE76B625AE55(uParam0->f_41[2]))
			{
				Var8 = { -915.6122f, 6137.662f, 4.6129f };
				uParam0->f_41[2] = unk_0xA8C993B9F5CB4D92(iVar0[3], Var8, 1, 1, 0);
				unk_0x018805F05877E2E2(uParam0->f_41[2], -915.6122f, 6137.662f, 4.6129f, 0, 0, 1);
				unk_0x0359A241E2DD22AC(uParam0->f_41[2], -1.6843f, 2.1363f, -0.0913f, 0, 1);
				unk_0xF01F794A8E94C0E1(uParam0->f_41[2], -0.0147f, 0.0187f, -0.0011f, 0.9997f);
				unk_0xA8CA82EB31D1626F(uParam0->f_41[2], 1);
			}
			if (!unk_0xD2CFFE76B625AE55(uParam0->f_41[3]))
			{
				Var8 = { -915.4199f, 6137.855f, 4.6221f };
				uParam0->f_41[3] = unk_0xA8C993B9F5CB4D92(iVar0[4], Var8, 1, 1, 0);
				unk_0x018805F05877E2E2(uParam0->f_41[3], -915.4199f, 6137.855f, 4.6221f, 0, 0, 1);
				unk_0x0359A241E2DD22AC(uParam0->f_41[3], -5.793f, 1.496f, -36.333f, 2, 1);
				unk_0xF01F794A8E94C0E1(uParam0->f_41[3], -0.0439f, 0.0281f, -0.312f, 0.9487f);
				unk_0xA8CA82EB31D1626F(uParam0->f_41[3], 1);
			}
			if (bVar7)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				unk_0x0049DE0B34213B12(iVar0[iVar6]);
				iVar6++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_229(var uParam0, int iParam1, struct<3> Param2, float fParam5, char* sParam6, int iParam7)
{
	if (func_230(uParam0, iParam1, Param2, fParam5, 1))
	{
		if (unk_0xD2CFFE76B625AE55(*uParam0))
		{
			if (!unk_0x2006A8C1BA2AFE80(*uParam0, 0))
			{
				unk_0xA8ED9F72DC442242(*uParam0, 1);
				unk_0x0705DFFD1CB9FCA6(*uParam0, 0);
				if (iParam7 == 1)
				{
					unk_0xFFD8329ED7A8E20C(*uParam0, 0);
				}
			}
			unk_0x87BC6B9F690D1A6A(*uParam0, sParam6);
		}
		return 1;
	}
	return 0;
}

int func_230(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_36(iParam1))
	{
		iVar0 = func_274(iParam1);
		unk_0x97C59C4E8349D15F(iVar0);
		if (unk_0x875098323FCA8FE6(iVar0))
		{
			if (unk_0xD2CFFE76B625AE55(*uParam0))
			{
				unk_0xF6ADC11BDB5ECA41(uParam0);
			}
			*uParam0 = unk_0x91D233CD0204A37F(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x1F0017B996C78B72(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x8E6EAC2226EC1711(*uParam0, 3) == 0)
				{
					unk_0x5D927D8655264D6C(*uParam0, 5, 2, 0, 0);
				}
			}
			func_231(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x0049DE0B34213B12(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_231(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_87445[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_232(var uParam0)
{
	if (func_192(uParam0))
	{
		unk_0x88172B3983EC5071(*uParam0);
		if (unk_0x482101C9B3483958(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_233(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!unk_0x875098323FCA8FE6((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_234(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = iParam3;
	unk_0x88172B3983EC5071(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

int func_235(var uParam0)
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	
	iVar0[0] = uLocal_92;
	iVar0[1] = joaat("u_m_y_cyclist_01");
	iVar0[2] = joaat("scorcher");
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "EF_2_RCM", 24);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				unk_0x97C59C4E8349D15F(iVar0[iVar4]);
				iVar4++;
			}
			func_234(&(uParam0->f_48), "rcm_fanatic2", "ef_2_rcm__maryann_biking_maryann", 0);
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_233(&iVar0) || !func_232(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			bVar5 = true;
			if (!unk_0xD2CFFE76B625AE55(uParam0->f_28[0]))
			{
				if (!func_229(&(uParam0->f_28[0]), 61, 809.66f, 1279.76f, 360.49f, 122.53f, "FANATIC LAUNCHER RC", 1))
				{
					bVar5 = false;
				}
			}
			if (!unk_0xD2CFFE76B625AE55(uParam0->f_28[1]))
			{
				func_239(&(uParam0->f_28[1]), iVar0[1], 808.43f, 1279.16f, 360.47f, -79.11f, 26);
				if (func_179(uParam0->f_28[1]))
				{
					unk_0x5D927D8655264D6C(uParam0->f_28[1], 3, 1, 2, 0);
					unk_0x5D927D8655264D6C(uParam0->f_28[1], 4, 1, 0, 0);
					unk_0x2F228A16D7B61C5F(uParam0->f_28[1], 0, 0, 0, 0);
					unk_0xA8ED9F72DC442242(uParam0->f_28[1], 1);
					unk_0x07E227C9815AD64F(uParam0->f_28[1], 3.5f);
				}
				else
				{
					bVar5 = false;
				}
			}
			if (!unk_0xD2CFFE76B625AE55(uParam0->f_35[0]))
			{
				func_237(&(uParam0->f_35[0]), iVar0[2], 808.35f, 1277.2f, 360.15f, 216.5f);
			}
			if (!unk_0xD2CFFE76B625AE55(uParam0->f_35[1]))
			{
				func_237(&(uParam0->f_35[1]), iVar0[2], 807.89f, 1275.73f, 360.18f, 208.2f);
			}
			if (bVar5)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			iVar4 = 0;
			while (iVar4 <= 1)
			{
				if (func_179(uParam0->f_35[iVar4]))
				{
					unk_0xFC5D934CEF290A3E(uParam0->f_35[iVar4], iVar4);
				}
				iVar4++;
			}
			unk_0x7C898812896A5304(iVar0[2], 1);
			if (unk_0x482101C9B3483958("rcm_fanatic2"))
			{
				if (func_179(uParam0->f_28[1]))
				{
					unk_0x878D12AEFBF5BAF0(uParam0->f_28[1], "rcm_fanatic2", "ef_2_rcm__maryann_biking_cyclist", 8f, -8f, -1, 1, 0, 0, 0, 0);
					func_271("Playing Mary Ann's friend anim...");
				}
			}
			func_236();
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				unk_0x0049DE0B34213B12(iVar0[iVar4]);
				iVar4++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_236()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x62C3C410FFEFF6CF(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_facgate_03_l"), 0))
	{
		unk_0xA2D570F4DBAB7E26(joaat("prop_facgate_03_l"), 801.7148f, 1270.138f, 359.2855f, 1, 0f, 0);
		iVar0++;
	}
	if (unk_0x62C3C410FFEFF6CF(802.9195f, 1280.92f, 360.7272f, 6f, joaat("prop_facgate_03_r"), 0))
	{
		unk_0xA2D570F4DBAB7E26(joaat("prop_facgate_03_r"), 802.9195f, 1280.92f, 360.7272f, 1, 0f, 0);
		iVar0++;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_237(var uParam0, var uParam1, struct<3> Param2, float fParam5)
{
	func_238(uParam0);
	*uParam0 = unk_0x4E76306EE6AE7596(uParam1, Param2, fParam5, 1, 1);
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		unk_0xFA3ED0FFF3FD8F34(*uParam0);
		unk_0x51F79AC13D2AD286(*uParam0, 1000);
	}
}

void func_238(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (!unk_0xE24B37600DCB21FC(*uParam0))
		{
			unk_0xAF3355298F537BB0(*uParam0, 1, 0);
		}
		if (func_158(*uParam0))
		{
			if (unk_0xE24B37600DCB21FC(*uParam0) && unk_0xFF65D7BC656BA68E(*uParam0, 1))
			{
				if (func_179(unk_0x27D769C59BC9D030()))
				{
					if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), *uParam0, 0))
					{
						unk_0x9846B4D56971A958(uParam0);
						return;
					}
				}
				unk_0xF6E128C391C16F7C(uParam0);
			}
		}
		else
		{
			if (func_179(unk_0x27D769C59BC9D030()))
			{
				if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), *uParam0, 0))
				{
					unk_0x9846B4D56971A958(uParam0);
					return;
				}
			}
			unk_0xF6E128C391C16F7C(uParam0);
		}
	}
}

void func_239(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6)
{
	func_240(uParam0);
	*uParam0 = unk_0x91D233CD0204A37F(iParam6, uParam1, Param2, fParam5, 0, 0);
}

void func_240(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (!unk_0x2006A8C1BA2AFE80(*uParam0, 0))
		{
			unk_0xD6FF698E7BC1C003(*uParam0, 0);
		}
		if (!unk_0xE24B37600DCB21FC(*uParam0))
		{
			unk_0xAF3355298F537BB0(*uParam0, 1, 0);
		}
		unk_0xF6ADC11BDB5ECA41(uParam0);
	}
}

int func_241(var uParam0)
{
	int iVar0[1];
	int iVar2;
	bool bVar3;
	
	iVar0[0] = uLocal_92;
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			StringCopy(&(uParam0->f_9), "EF_1_RCM", 24);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				unk_0x97C59C4E8349D15F(iVar0[iVar2]);
				iVar2++;
			}
			func_234(&(uParam0->f_48), "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base", 0);
			uParam0->f_48.f_5 = { -1878.223f, -440.5181f, 46.03983f };
			uParam0->f_48.f_8 = { 0f, 0f, 159.97f };
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_233(&iVar0) || !func_232(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			bVar3 = true;
			if (!unk_0xD2CFFE76B625AE55(uParam0->f_28[0]))
			{
				if (func_229(&(uParam0->f_28[0]), 61, -1878.27f, -440.55f, 46.23f, 165.94f, "FANATIC LAUNCHER RC", 1))
				{
					unk_0xD6FF698E7BC1C003(uParam0->f_28[0], 1);
					unk_0xA8CA82EB31D1626F(uParam0->f_28[0], 1);
				}
				else
				{
					bVar3 = false;
				}
			}
			if (bVar3)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				unk_0x0049DE0B34213B12(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_242(int iParam0)
{
	struct<27> Var0;
	int iVar32;
	
	func_94(iParam0, &Var0);
	iVar32 = func_89();
	if (iVar32 == 145)
	{
		return 1;
	}
	else if ((iVar32 != 1 && iVar32 != 0) && iVar32 != 2)
	{
		return 1;
	}
	if (!unk_0xF426A5DE932B3BEE(Var0.f_26, iVar32))
	{
		return 1;
	}
	return 0;
}

int func_243(int iParam0)
{
	char* sVar0;
	
	if (Global_69489)
	{
		func_271("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_101154.f_7775 && !func_92(1))
	{
		func_271("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_244(iParam0))
	{
		Global_100241[iParam0 /*10*/].f_1 = 1;
		func_271("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_91278.f_11 == 6)
	{
		if (Global_91278 < 9)
		{
			func_94(iParam0, &sVar0);
			if (unk_0xC1C5B83BB6719C6C(&(Global_91278.f_3), sVar0))
			{
				func_271("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0xD32535FA4397160F(joaat("candidate_controller")) == 0)
	{
		Global_100241[iParam0 /*10*/].f_1 = 1;
		func_271("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_244(int iParam0)
{
	var uVar0;
	
	func_94(iParam0, &uVar0);
	if (!func_143(4))
	{
		if (func_223(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_222() && !func_221())
	{
		return 0;
	}
	if (func_250(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_146();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_225(iParam0))
	{
		if (!func_249(iParam0))
		{
			return 0;
		}
		if (!func_248(iParam0))
		{
			return 0;
		}
		if (func_247(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_245(5))
		{
			Global_100241[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_100241[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_245(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_91330.f_294 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_245(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		func_246(iParam0, &sVar1);
		iVar9 = unk_0x695481387D3FCB8D(Global_86649[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_91330.f_294 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_246(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (unk_0xBDA20BD415464BD5("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0xBDA20BD415464BD5("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0xBDA20BD415464BD5("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0xC1C5B83BB6719C6C(sParam1, "");
}

bool func_247(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iParam0 /*6*/], 3);
}

bool func_248(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iParam0 /*6*/], 2);
}

bool func_249(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iParam0 /*6*/], 0);
}

int func_250(int iParam0)
{
	if (func_220(iParam0))
	{
		return 0;
	}
	else if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_251()
{
	func_271("Running end routines.");
	Global_100872 = (Global_100872 - 1);
}

int func_252(int iParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_253((*iParam0)[0], Param2, fParam5, iParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_253((*iParam0)[iVar0], Param2, fParam5, iParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_271("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_253(int iParam0, struct<3> Param1, float fParam4, var uParam5)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_94(iParam0, &Var1);
	if (func_254(Var1.f_6, Param1, fParam4, 0))
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iParam0 /*6*/], 0))
		{
			if (!unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_225(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam5 = iParam0;
		StringCopy(&(uParam5->f_1), Var1.f_0, 32);
		return 1;
	}
	return 0;
}

int func_254(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x43698C98CC255554((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x43698C98CC255554((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x43698C98CC255554((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x43698C98CC255554((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x43698C98CC255554((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_255(int iParam0, bool bParam1)
{
	char* sVar0;
	
	if (bParam1)
	{
		func_260(iParam0, 0, 0, 0);
	}
	if (unk_0x7B4654D62B7E0E9E(uLocal_98))
	{
		unk_0x9403D0F4C7711241(&uLocal_98);
	}
	func_259(&(iParam0->f_48));
	if (*iParam0 == 22)
	{
		unk_0x3CE75187603652E2(uLocal_93, 0);
	}
	if (iLocal_94 != -1)
	{
		func_271("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_186(&iLocal_94);
	}
	switch (*iParam0)
	{
		case 21:
			sVar0 = "FAN1_AMB";
			break;
		
		case 22:
			sVar0 = "FAN2_AMB";
			break;
		
		case 23:
			sVar0 = "FAN3_AMB";
			break;
	}
	func_256(sVar0);
	if (bParam1)
	{
		func_187(*iParam0);
	}
	func_251();
	func_271("SCRIPT TERMINATED");
	unk_0x7C3AA2D27E16E2AD();
}

void func_256(char* sParam0)
{
	if (!unk_0x75CB9E30BA492FF0(sParam0))
	{
		if (func_177(sParam0))
		{
			func_257();
		}
	}
}

void func_257()
{
	Global_14578 = 0;
	func_258();
}

void func_258()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
	}
}

int func_259(var uParam0)
{
	if (func_192(uParam0))
	{
		if (unk_0x482101C9B3483958(*uParam0))
		{
			unk_0x651E63BA2F4975EC(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_260(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_267(uParam0, iParam1);
	func_264(uParam0, bParam2);
	func_261(uParam0, bParam3);
}

void func_261(var uParam0, bool bParam1)
{
	func_262(&(uParam0->f_41), bParam1);
}

void func_262(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_194(uParam0[iVar0]);
		}
		else
		{
			func_263(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_263(var uParam0, bool bParam1)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (unk_0x738E93147C5CBA85(*uParam0))
		{
			unk_0xE223D49B3EFFD3E3(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x7DC0C08D21B1080D(uParam0);
		}
		else
		{
			unk_0xB2FA212D612BB449(*uParam0);
		}
	}
}

void func_264(var uParam0, bool bParam1)
{
	func_265(&(uParam0->f_35), bParam1);
}

void func_265(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_238(uParam0[iVar0]);
		}
		else
		{
			func_266(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_266(var uParam0)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		unk_0x2006A8C1BA2AFE80(*uParam0, 0);
		if (unk_0xE24B37600DCB21FC(*uParam0) && unk_0xFF65D7BC656BA68E(*uParam0, 1))
		{
			unk_0x9846B4D56971A958(uParam0);
		}
	}
}

void func_267(var uParam0, int iParam1)
{
	func_268(&(uParam0->f_28), iParam1);
}

void func_268(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_240(uParam0[iVar0]);
		}
		else
		{
			func_269(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_269(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (!unk_0xE4F7206742848BAF(*uParam0))
		{
			unk_0xD6FF698E7BC1C003(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEC500F39EFE9D522(*uParam0);
			}
			unk_0x94DC76C688E7D222(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xA8ED9F72DC442242(*uParam0, 0);
			}
		}
		unk_0x7E8F7C1D05860F53(uParam0);
	}
}

void func_270(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35673)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35672 = 0;
	Global_35674 = 0;
	Global_35711 = 15;
	Global_55746 = 0;
	Global_55747 = 0;
}

void func_271(char* sParam0)
{
	if (!unk_0x75CB9E30BA492FF0(sParam0))
	{
	}
}

void func_272(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_273()
{
	func_271("Running start routines.");
	Global_100872++;
}

int func_274(int iParam0)
{
	if (!func_36(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

