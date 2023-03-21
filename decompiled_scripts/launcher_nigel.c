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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
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
	var uVar64;
	struct<2> Var116;
	int iVar126[7];
	bool bVar134;
	
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	uLocal_47 = unk_0x8FB19B229BCF8953();
	uLocal_48 = unk_0x355073A98A8FF72A();
	uLocal_92 = func_313(64);
	uLocal_93 = func_313(63);
	iLocal_94 = joaat("u_m_m_aldinapoli");
	iLocal_95 = joaat("premier");
	iLocal_108 = -1;
	unk_0x3AFF990CF9565D40(1);
	func_312();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	uVar64 = 15;
	func_311(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	Var116.f_1 = -1;
	iVar126[0] = 37;
	iVar126[1] = 38;
	iVar126[2] = 39;
	iVar126[3] = 40;
	iVar126[4] = 41;
	iVar126[5] = 42;
	iVar126[6] = 43;
	if (unk_0x76BF814AB8D4CAB8(83))
	{
		func_310("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_103638[Var0.f_0 /*10*/].f_9 != -1)
			{
				func_310("Relinquishing candidate id...");
				func_309(&(Global_103638[Var0.f_0 /*10*/].f_9));
			}
		}
		func_291(&Var0, &Var116, 1);
	}
	if (!func_288(&iVar126, &Var0, Var61, 1f))
	{
		func_287();
		func_310("SCRIPT TERMINATED");
		unk_0x810C5D6462DD69E6();
	}
	if (!func_279(Var0.f_0))
	{
		func_287();
		func_310("SCRIPT TERMINATED");
		unk_0x810C5D6462DD69E6();
	}
	if (func_278(Var0.f_0))
	{
		func_287();
		func_310("SCRIPT TERMINATED");
		unk_0x810C5D6462DD69E6();
	}
	while (!func_244(&Var0, &uVar64))
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x6E65FD9B611945AD())
		{
			func_310("Player out of range [TERMINATING]");
			func_291(&Var0, &Var116, 1);
		}
	}
	if (Var0.f_0 == 43)
	{
		Var116.f_0 = 0;
	}
	unk_0x7EE425AE3317BA69(Var61, Var0.f_15, 1, 0, 0, 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!func_210(&Var0, 1))
		{
			func_291(&Var0, &Var116, 1);
		}
		func_209(Var0.f_0);
		func_202(&iLocal_108, &(Var0.f_9), Var61);
		if (Var0.f_0 == 42)
		{
			if (unk_0x42AFCF847E4360A0())
			{
				unk_0x58DE45421C2560C5(func_201(), 4, 0, 0, func_200());
				func_310("Nigel 2 : set Di Napoli's cutscene trousers variation in launcher");
			}
		}
		if (func_199(&uLocal_96) && Var0.f_0 == 37)
		{
			func_196(Var0.f_28[1], &uLocal_96, Var0.f_0);
		}
		if (Var0.f_0 == 37)
		{
			func_192(&Var0, Var61, "NIG1AAU", "NIG1A_AMB", 0, "NIGEL", 1, "MRSTHORNHILL", &uLocal_110);
		}
		else if (Var0.f_0 == 42)
		{
			func_187(&Var0, Var61, "NIG2AUD", "NIG2_AMB", 4, "NIGEL", 5000, 14f);
		}
		else if (Var0.f_0 == 43)
		{
			func_185(&Var116, &(Var0.f_35[0]), &(Var0.f_28[1]));
			func_187(&Var0, -44.75f, -1289.86f, 29.16f, "NIGE3AU", "NIGEL3_AMB", 4, "NIGEL", 8000, 1101004800);
		}
		bVar134 = false;
		if (Var0.f_0 == 41)
		{
			if (func_183(&Var0, &uVar64) || func_182(&Var0))
			{
				bVar134 = true;
			}
		}
		else if (func_167(&Var0, 0))
		{
			bVar134 = true;
		}
		if (bVar134)
		{
			if (Var0.f_0 == 42)
			{
				func_166(1, 0, 1, 0);
			}
			if (func_165(Var0.f_0))
			{
				func_162(Var0.f_0, &uLocal_109);
			}
			if (!func_2(&Var0))
			{
				func_291(&Var0, &Var116, 1);
			}
			if (func_1(&Var0))
			{
				func_291(&Var0, &Var116, 0);
			}
		}
	}
}

int func_1(int iParam0)
{
	while (!Global_103638[*iParam0 /*10*/])
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	return 1;
}

int func_2(int iParam0)
{
	struct<4> Var0;
	char* sVar32;
	
	if (!func_161())
	{
		while (!func_152(*iParam0))
		{
			if (func_151(*iParam0))
			{
				func_142();
			}
			if (!func_210(iParam0, *iParam0 != 2))
			{
				func_310("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_141())
	{
		func_139();
	}
	if (!func_109(iParam0))
	{
		func_310("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_106(*iParam0, &Var0);
	MemCopy(&sVar32, {func_105(*iParam0)}, 4);
	func_103(&sVar32, Var0.f_3, 0);
	func_102(*iParam0);
	if (!func_161())
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
	unk_0x62148293B793073B(&(Global_104551.f_18544[iParam0 /*6*/]), 5);
	if (unk_0xE7FAF8E78F7D3A73(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0xE7FAF8E78F7D3A73(joaat("mission_stat_watcher")) > 0)
		{
			func_19();
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("mission_stat_watcher")) < 1)
	{
		Global_55902 = 0;
		unk_0xC8A5933869E73673("mission_stat_watcher");
		while (!unk_0xC040FCA5F6E73B3E("mission_stat_watcher"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("mission_stat_watcher", 1828);
		unk_0x2130D1396EE39C8E("mission_stat_watcher");
	}
	while (!unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 5))
	{
		if (unk_0xE7FAF8E78F7D3A73(joaat("mission_stat_watcher")) > 0)
		{
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_18544[iParam0 /*6*/]), 5);
		}
	}
	func_4(iParam0);
}

void func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_55899 == 1)
	{
		func_18();
		Global_55899 = 0;
		if (Global_55894)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_55902 = 1;
		func_10();
		return;
	}
	MemCopy(&Global_55916, {func_9(iParam0)}, 4);
	Global_55904 = 0;
	Global_55903 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_55891 = 1;
			Global_55894 = 1;
			Global_55897 = 1;
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
			Global_55902 = 1;
			Global_55903 = 1;
			func_10();
			func_19();
			return;
			break;
	}
	iVar0 = Global_68146;
	Global_68146 = 1;
	iVar1 = Global_68147;
	Global_68147 = iParam0;
	if (!Global_55891)
	{
		if ((Global_68147 != iVar1 || Global_67996 == 0) || iVar0 != Global_68146)
		{
			Global_25482 = 0;
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_55894 = 1;
		}
	}
	Global_55929 = unk_0x5AFB8ED811F05E4D();
	func_5();
	Global_55901 = 0;
}

void func_5()
{
	int iVar0;
	
	if (!Global_55898)
	{
		return;
	}
	if (Global_67996 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67996)
	{
		switch (Global_56126[Global_67997[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_67997[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_55909)
				{
					Global_67997[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_56126[Global_67997[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_67997[iVar0 /*9*/].f_1 != 0)
					{
						Global_67997[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_55898 = 0;
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
	Global_55894 = 1;
	Global_55897 = 1;
	if (Global_67996 > 15)
	{
		return;
	}
	func_8(Global_67996);
	Global_67997[Global_67996 /*9*/] = iParam0;
	Global_67996++;
	if (Global_56126[iParam0 /*13*/] == 16)
	{
		Global_68148 = 1;
	}
}

void func_8(int iParam0)
{
	Global_67997[iParam0 /*9*/].f_1 = 0;
	Global_67997[iParam0 /*9*/].f_2 = 0f;
	Global_67997[iParam0 /*9*/].f_3 = 0;
	Global_67997[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_9(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_105(iParam0) };
	if (unk_0xFAFFA408239A026B(&cVar2))
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
	if (Global_55901)
	{
		return;
	}
	Global_55910 = 0;
	Global_67996 = 0;
	Global_55912 = 0;
	if (Global_55909)
	{
	}
	Global_55909 = 0;
	func_17(0);
	func_16();
	Global_68148 = 0;
	Global_55900 = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_55891 = 0;
	Global_55921 = 0;
	Global_55929 = -1;
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_68183[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68192 = 0;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_68149[iVar0 /*2*/] = 0;
		Global_68149[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68182 = 0;
}

void func_13()
{
	Global_56060 = 0;
}

void func_14()
{
	Global_55920 = 0;
	Global_55924 = func_15(joaat("sp0_shots"));
	Global_55923 = func_15(joaat("sp0_hits"));
	Global_55926 = func_15(joaat("sp1_shots"));
	Global_55925 = func_15(joaat("sp1_hits"));
	Global_55928 = func_15(joaat("sp2_shots"));
	Global_55927 = func_15(joaat("sp2_hits"));
}

var func_15(int iParam0)
{
	var uVar0;
	
	unk_0xD194C635833AC189(iParam0, &uVar0, -1);
	return uVar0;
}

void func_16()
{
	int iVar0;
	
	Global_55930 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55931[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_17(int iParam0)
{
	Global_71112 = iParam0;
	Global_71113 = iParam0;
}

void func_18()
{
	int iVar0;
	
	Global_55899 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67996)
	{
		Global_67997[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_55909)
	{
	}
	Global_55909 = 0;
}

void func_19()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("mission_stat_watcher")) > 0)
	{
		if (func_20())
		{
			if (Global_55896 && !Global_55895)
			{
				Global_55896 = 0;
				unk_0x983D86B7F4F283B8("mission_stat_watcher");
			}
		}
		else
		{
			unk_0x983D86B7F4F283B8("mission_stat_watcher");
		}
	}
}

int func_20()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_55894)
	{
		return 0;
	}
	return Global_55906;
}

void func_21(char* sParam0)
{
	if (unk_0x9D39145AD645E383(sParam0, sParam0))
	{
	}
}

void func_22(char[4] cParam0, int iParam1)
{
	unk_0x62148293B793073B(&(Global_92829.f_20), 17);
	func_23(cParam0, iParam1, 0);
}

void func_23(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_92829 != 10 && Global_92829 != 9)
	{
		StringCopy(&Global_95137, cParam0, 32);
		func_25(&Global_95145, cParam0, 0, "Start", iParam1, iParam2);
		func_24();
		Global_87152 = 0;
	}
}

void func_24()
{
	int iVar0;
	int iVar1;
	
	Global_98114 = Global_95145;
	Global_98114.f_1 = Global_95145.f_1;
	Global_98114.f_6 = Global_95145.f_6;
	Global_98114.f_7 = Global_95145.f_7;
	Global_98114.f_8 = Global_95145.f_8;
	Global_98114.f_2 = Global_95145.f_2;
	Global_98114.f_3 = Global_95145.f_3;
	Global_98114.f_4 = Global_95145.f_4;
	Global_98114.f_5 = Global_95145.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_98114.f_9[iVar1] = Global_95145.f_9[iVar1];
		Global_98114.f_13[iVar1] = Global_95145.f_13[iVar1];
		Global_98114.f_17[iVar1] = Global_95145.f_17[iVar1];
		Global_98114.f_21[iVar1] = Global_95145.f_21[iVar1];
		Global_98114.f_25[0 /*295*/][iVar1 /*98*/] = { Global_95145.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_98114.f_25[1 /*295*/][iVar1 /*98*/] = { Global_95145.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_98114.f_616[iVar1 /*65*/][iVar0] = Global_95145.f_616[iVar1 /*65*/][iVar0];
			Global_98114.f_616[iVar1 /*65*/].f_13[iVar0] = Global_95145.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_98114.f_616[iVar1 /*65*/].f_26[iVar0] = Global_95145.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_98114.f_616[iVar1 /*65*/].f_59 = Global_95145.f_616[iVar1 /*65*/].f_59;
		Global_98114.f_616[iVar1 /*65*/].f_60 = Global_95145.f_616[iVar1 /*65*/].f_60;
		Global_98114.f_616[iVar1 /*65*/].f_61 = Global_95145.f_616[iVar1 /*65*/].f_61;
		Global_98114.f_616[iVar1 /*65*/].f_62 = Global_95145.f_616[iVar1 /*65*/].f_62;
		Global_98114.f_616[iVar1 /*65*/].f_63 = Global_95145.f_616[iVar1 /*65*/].f_63;
		Global_98114.f_616[iVar1 /*65*/].f_64 = Global_95145.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_98114.f_616[iVar1 /*65*/].f_39[iVar0] = Global_95145.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_98114.f_616[iVar1 /*65*/].f_49[iVar0] = Global_95145.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_98114.f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_95145.f_812[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_98114.f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_95145.f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_98114.f_2229[iVar1 /*32*/][iVar0] = Global_95145.f_2229[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_98114.f_2229[iVar1 /*32*/].f_5[iVar0] = Global_95145.f_2229[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_98114.f_2229[iVar1 /*32*/].f_16[iVar0] = Global_95145.f_2229[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_98114.f_2326[iVar1] = Global_95145.f_2326[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_98114.f_2823[iVar1 /*15*/][iVar0] = Global_95145.f_2823[iVar1 /*15*/][iVar0];
			Global_98114.f_2823[iVar1 /*15*/].f_5[iVar0] = Global_95145.f_2823[iVar1 /*15*/].f_5[iVar0];
			Global_98114.f_2823[iVar1 /*15*/].f_10[iVar0] = Global_95145.f_2823[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_98114.f_2330[iVar1 /*164*/][iVar0] = Global_95145.f_2330[iVar1 /*164*/][iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_4[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_4[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_8[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_8[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_12[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_12[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_16[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_16[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_20[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_20[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_24[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_24[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_28[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_28[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_32[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_32[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_36[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_36[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_40[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_40[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_44[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_44[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_48[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_48[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_52[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_52[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_56[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_56[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_60[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_60[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_64[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_64[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_68[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_68[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_72[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_72[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_76[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_76[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_80[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_80[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_84[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_84[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_88[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_88[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_92[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_92[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_96[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_96[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_100[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_100[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_104[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_104[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_108[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_108[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_112[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_112[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_116[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_116[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_120[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_120[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_124[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_124[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_128[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_128[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_132[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_132[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_136[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_136[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_140[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_140[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_144[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_144[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_148[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_148[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_152[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_152[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_156[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_156[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_160[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_98114.f_2869 = { Global_95145.f_2869 };
	Global_98114.f_2869.f_3 = Global_95145.f_2869.f_3;
	Global_98114.f_2875 = { Global_95145.f_2875 };
	Global_98114.f_2875.f_3 = { Global_95145.f_2875.f_3 };
	Global_98114.f_2875.f_6 = Global_95145.f_2875.f_6;
	Global_98114.f_2875.f_8 = Global_98114.f_2875.f_8;
	Global_98114.f_2875.f_7 = Global_95145.f_2875.f_7;
	Global_98114.f_2875.f_9 = Global_95145.f_2875.f_9;
	Global_98114.f_2875.f_11 = Global_95145.f_2875.f_11;
	Global_98114.f_2875.f_10 = Global_95145.f_2875.f_10;
	Global_98114.f_2875.f_12 = Global_95145.f_2875.f_12;
	Global_98114.f_2875.f_12.f_1 = { Global_95145.f_2875.f_12.f_1 };
	Global_98114.f_2875.f_12.f_5 = Global_95145.f_2875.f_12.f_5;
	Global_98114.f_2875.f_12.f_6 = Global_95145.f_2875.f_12.f_6;
	Global_98114.f_2875.f_12.f_7 = Global_95145.f_2875.f_12.f_7;
	Global_98114.f_2875.f_12.f_8 = Global_95145.f_2875.f_12.f_8;
	Global_98114.f_2875.f_12.f_9 = { Global_95145.f_2875.f_12.f_9 };
	Global_98114.f_2875.f_12.f_59 = { Global_95145.f_2875.f_12.f_59 };
	Global_98114.f_2875.f_12.f_62 = Global_95145.f_2875.f_12.f_62;
	Global_98114.f_2875.f_12.f_63 = Global_95145.f_2875.f_12.f_63;
	Global_98114.f_2875.f_12.f_64 = Global_95145.f_2875.f_12.f_64;
	Global_98114.f_2875.f_12.f_65 = Global_95145.f_2875.f_12.f_65;
	Global_98114.f_2875.f_12.f_77 = Global_95145.f_2875.f_12.f_77;
	Global_98114.f_2875.f_12.f_66 = Global_95145.f_2875.f_12.f_66;
	Global_98114.f_2875.f_12.f_67 = Global_95145.f_2875.f_12.f_67;
	Global_98114.f_2875.f_12.f_68 = Global_95145.f_2875.f_12.f_68;
	Global_98114.f_2875.f_12.f_69 = Global_95145.f_2875.f_12.f_69;
	Global_98114.f_2875.f_12.f_71 = Global_95145.f_2875.f_12.f_71;
	Global_98114.f_2875.f_12.f_72 = Global_95145.f_2875.f_12.f_72;
	Global_98114.f_2875.f_12.f_73 = Global_95145.f_2875.f_12.f_73;
	Global_98114.f_2875.f_12.f_74 = Global_95145.f_2875.f_12.f_74;
	Global_98114.f_2875.f_12.f_75 = Global_95145.f_2875.f_12.f_75;
	Global_98114.f_2875.f_12.f_76 = Global_95145.f_2875.f_12.f_76;
	Global_98114.f_2965 = Global_95145.f_2965;
	Global_98114.f_2965.f_1 = Global_95145.f_2965.f_1;
	Global_98114.f_2965.f_2 = Global_95145.f_2965.f_2;
	Global_98114.f_2965.f_3 = Global_95145.f_2965.f_3;
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_101();
	uParam0->f_1 = func_90();
	unk_0x4B7C093DEAAF2CAD(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		func_64(&(uParam0->f_2869), 0);
		func_63(unk_0x18F7BE9ACB7D08F4());
		func_56(unk_0x18F7BE9ACB7D08F4(), 0);
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_104551.f_2353.f_539.f_294[iVar1];
		if (iVar1 == func_53())
		{
			func_46(unk_0x18F7BE9ACB7D08F4(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_92619[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_92619[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_92619[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_92619[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_92619[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_92619[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_92619[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_92619[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_92619[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_92619[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_104551.f_2353.f_539.f_298[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_104551.f_2353.f_539.f_298[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xD194C635833AC189(joaat("sp0_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xD194C635833AC189(joaat("sp1_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xD194C635833AC189(joaat("sp2_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_104551.f_20534.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53075[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_104551.f_2353.f_539.f_2387[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_104551.f_2353.f_539.f_2387[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = Global_104551.f_2353.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = Global_104551.f_2353.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = Global_104551.f_2353.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = Global_104551.f_2353[iVar1 /*164*/][iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xD194C635833AC189(joaat("sp0_special_ability"), &(uParam0->f_2326[0]), -1);
	unk_0xD194C635833AC189(joaat("sp1_special_ability"), &(uParam0->f_2326[1]), -1);
	unk_0xD194C635833AC189(joaat("sp2_special_ability"), &(uParam0->f_2326[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_27(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_26(&(uParam0->f_2965));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_26(var uParam0)
{
	*uParam0 = Global_88823;
	uParam0->f_1 = Global_88824;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_27(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x18F7BE9ACB7D08F4();
	}
	if (unk_0x31F12808DC47A9E5(iParam2))
	{
		uParam1->f_5 = func_44(iParam2);
	}
	if (func_41(iParam2, &iVar0, iParam3, iParam5))
	{
		func_28(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x31F12808DC47A9E5(iVar0))
	{
		if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
		{
			if (unk_0x0665EB554F07889E(iVar0, joaat("skylift")) && unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iVar0, 0))
			{
				func_28(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_28(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xC4B84EB67F78C1F0(iParam2, 0))
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
		if (Global_92829.f_22[iVar0] == iParam0)
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
		*uParam0 = { unk_0x761660F5CE986DC4(iParam1, 1) };
		uParam0->f_6 = unk_0x93FDA3BF59E7B77F(iParam1);
		uParam0->f_3 = { unk_0xEF288D764F53C90C(iParam1) };
		if (unk_0x11BBEE2752B9D0C8(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_70579 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
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
		if (unk_0x31F12808DC47A9E5(Global_69674.f_484[iVar0]))
		{
			if (iParam0 == Global_69674.f_484[iVar0])
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
	
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 145;
	}
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x31F12808DC47A9E5(Global_90305[iVar0]))
		{
			if (Global_90305[iVar0] == iParam0)
			{
				return Global_90315[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_33(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x31F12808DC47A9E5(Global_90305[iVar0]))
		{
			if (Global_90305[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_90315[iVar0])
				{
					if (iParam2 == 0 || unk_0x4F69FBD64CDF125B(iParam0) == func_34(iParam1, iParam2))
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
			if (Global_104551.f_9055.f_99.f_58[128] && !Global_104551.f_9055.f_99.f_58[131])
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
					if (Global_104551.f_9055.f_99.f_58[119])
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
			else if (Global_104551.f_9055.f_99.f_58[118])
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
	
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		func_40(uParam1);
		uParam1->f_66 = unk_0x4F69FBD64CDF125B(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE6A2C60E19ABFD84(iParam0), 16);
		*uParam1 = unk_0x2B07F86D9BC57D14(iParam0);
		unk_0xC2CED850D0B7AE40(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x939E5110724C9FF5(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5DEE36C41FD07639(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x5B416ECA8172648C(iParam0);
		uParam1->f_67 = unk_0x178913209B5C278C(iParam0);
		uParam1->f_69 = unk_0x459703DBCA7E4F90(iParam0);
		uParam1->f_70 = unk_0xA15463616D2BE67B(iParam0);
		unk_0x868FCC1ABD0392E2(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xC501B2A5F74552E1(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x6BF5E4054292013A(iParam0, 2))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 28);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 3))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 29);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 30);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 1))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7C094ED2B27D253F(iParam0, 0))
		{
			uParam1->f_68 = unk_0xB5305F9F7739856F(iParam0);
		}
		if (unk_0xD8BB60C76D29E4BB(uParam1->f_66))
		{
			if (unk_0xAD1AE6AEE26C1B5B(iParam0))
			{
				switch (unk_0xF0623119822BFA16(iParam0))
				{
					case 2:
					case 0:
						unk_0x62148293B793073B(&(uParam1->f_77), 23);
						unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x62148293B793073B(&(uParam1->f_77), 23);
						unk_0x62148293B793073B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xDCACEB538A650DBE(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 9);
		}
		if (unk_0x43AB555BD9D432EA(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 10);
		}
		if (unk_0x598942D690303B92(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 13);
			unk_0x9F7E6674DE4C23B5(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xFD2F81E6B2E852DA(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 12);
		}
		func_39(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x6276BF0E9518E43A(iParam0, iVar0 + 1))
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_38(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x6D111CD3D2767A08(iParam0, 0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam1->f_77), 11);
		}
		if (unk_0x788C6B35BB3FCF53(iParam0, "IgnoredByQuickSave") && unk_0x3C32210A85B95B19(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam1->f_77), 27);
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
	
	if (!unk_0xC4B84EB67F78C1F0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x8A27C3C945C9E921(*iParam0) == 0)
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
			if (unk_0xFA82454B8C070DBB(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x2FA7EA3CA1AD2BF9(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8730A3E327DA8627(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8730A3E327DA8627(*iParam0, iVar0);
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
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (!unk_0x0FAE113CE72ED842(iParam0))
		{
			if (iParam0 == unk_0x18F7BE9ACB7D08F4())
			{
				*uParam1 = unk_0x952F33F151D40D1A();
			}
			else
			{
				*uParam1 = unk_0x5AD687C3474F04B4(iParam0, 1);
			}
			if (unk_0x31F12808DC47A9E5(*uParam1))
			{
				if (unk_0xC4B84EB67F78C1F0(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(*uParam1, 1), unk_0x761660F5CE986DC4(iParam0, 1), 1) < 100f)
					{
						if (unk_0x0665EB554F07889E(*uParam1, joaat("taxi")))
						{
							if (unk_0x4983F8C51A0C0AF3(*uParam1, -1, 0) != iParam0 && unk_0x4983F8C51A0C0AF3(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_42(*uParam1, func_101(), 1))
						{
							sVar0 = unk_0xFCA64981FEF7C913();
							if (!unk_0x9D39145AD645E383(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x657B649BA2AD3582(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x788C6B35BB3FCF53(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x3C32210A85B95B19(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x0665EB554F07889E(*uParam1, joaat("blimp")))
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
	
	if (!unk_0x31F12808DC47A9E5(iParam0) || !unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_43(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB03A1684359C50A1(Global_104551.f_7199[iVar9], 0))
		{
			if (unk_0x31AAECA8242E34AD(&sVar1, iParam0))
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
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
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
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
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
			uParam1->f_59 = Global_104551.f_2353.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_104551.f_2353.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_104551.f_2353.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_104551.f_2353.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_104551.f_2353.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_104551.f_2353.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x44243F2E2F58B8E3() && unk_0x4F69FBD64CDF125B(iParam0) == unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			if (func_50(161, -1))
			{
				uParam1->f_59 = func_47(2048, Global_70664, 0);
			}
			else
			{
				uParam1->f_59 = func_47(749, Global_70664, 0);
			}
			uParam1->f_60 = func_47(750, Global_70664, 0);
			uParam1->f_61 = func_47(751, Global_70664, 0);
		}
		if (unk_0x44243F2E2F58B8E3() && iParam0 == unk_0x18F7BE9ACB7D08F4())
		{
			if (func_50(161, -1))
			{
				uParam1->f_59 = func_47(2048, Global_70664, 0);
			}
			else
			{
				uParam1->f_59 = func_47(749, Global_70664, 0);
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
	uVar0 = Global_2522855[iParam0 /*3*/][func_48(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
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
			Global_2522568 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522568 = 1;
		}
	}
	return iVar0;
}

int func_49()
{
	return Global_1312736;
}

int func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547154[iParam0 /*3*/][func_48(iParam1)];
	if (unk_0xA17AF9F044C9C70E(uVar0, &uVar1, -1))
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
		*uParam2 = unk_0x62B4434F66D8AEB5(iParam0, iParam1);
		*uParam3 = unk_0x15FEE8AC415BEF7E(iParam0, iParam1);
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
				if (unk_0x2E64174C91365575(iParam0) && unk_0x425D437D4CBBC6E3(iParam0) != -1)
				{
					*uParam2 = unk_0x425D437D4CBBC6E3(iParam0);
					*uParam3 = unk_0x5D4A99501B804292(iParam0);
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
		*uParam2 = unk_0x6363507A3F1C0EFE(iParam0, iParam1);
		*uParam3 = unk_0xFCE96424181023AC(iParam0, iParam1);
		*uParam4 = unk_0x635F829197D5C265(iParam0, iParam1);
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
	return Global_104551.f_2353.f_539.f_4301;
}

void func_54()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_45(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_44(unk_0x18F7BE9ACB7D08F4());
			if (func_36(iVar0) && (!func_55(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_36(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_55(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_44(iParam0);
	if (func_36(iVar0) && !unk_0x0FAE113CE72ED842(iParam0))
	{
		if (iParam0 == unk_0x18F7BE9ACB7D08F4())
		{
			func_57(iParam0, &(Global_104551.f_2353.f_539.f_298[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_104551.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] = unk_0x7717AD244E17BCED(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x9670CE10A454F1BB();
					if (Global_104551.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_104551.f_2353.f_539.f_1748 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x8740AF1177AF8A6D(unk_0x8CFC7D6E1DA5D304(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0xD92C8D8AF3C67820(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xD92C8D8AF3C67820(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xD92C8D8AF3C67820(joaat("sp2_parachute_current_tint"), uVar3, 1);
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
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_62(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xBBDDEBFD9564D52C(iParam0, func_62(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x2406A9C8DA99D3F4(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x3A369A0A4E1FD5B7(iParam0, Var4.f_0);
					Var4.f_4 = unk_0x61AF6C49F51AFFB4(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xE6AB5C185BE01BC6(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_60(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x149CE5A9BC10146A(iParam0, Var4.f_0, iVar2))
						{
							unk_0xD2A9C3F486236CC5(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_60(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0xA3657E0D395F8A0F();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0x5C134543285617E0(iVar9, &Var11) && !func_59(Var11.f_1)) && iVar72 < 50)
			{
				if (!unk_0x0663FFD85FC79E8F(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x2406A9C8DA99D3F4(iParam0, Var4.f_0);
					if (unk_0xBEF481E5CF03DC93(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x3A369A0A4E1FD5B7(iParam0, Var4.f_0);
						Var4.f_4 = unk_0x61AF6C49F51AFFB4(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xE6AB5C185BE01BC6(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x184BE178B47BBA96(iVar9))
					{
						if (unk_0xFBDC30E38B541C22(iVar9, iVar1, &Var50))
						{
							if (!func_58(Var50.f_3))
							{
								if (unk_0x149CE5A9BC10146A(iParam0, Var4.f_0, Var50.f_3))
								{
									unk_0xD2A9C3F486236CC5(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xBEF481E5CF03DC93(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_59(int iParam0)
{
	if (unk_0x44243F2E2F58B8E3())
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
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
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
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
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
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
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
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
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
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_61(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x184BE178B47BBA96(iVar1))
					{
						if (unk_0xFBDC30E38B541C22(iVar1, iVar2, &Var43))
						{
							if (!func_58(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_61(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xA3657E0D395F8A0F();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x5C134543285617E0(iVar0, uParam1))
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

int func_62(int iParam0)
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

void func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (func_36(iVar0) && !unk_0x0FAE113CE72ED842(iParam0))
	{
		Global_104551.f_2353.f_539.f_294[iVar0] = unk_0x061F295089D77639(iParam0);
	}
}

void func_64(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
	uParam0->f_3 = unk_0x93FDA3BF59E7B77F(unk_0x18F7BE9ACB7D08F4());
	uParam0->f_5 = unk_0xA0F074EA9E24102C(unk_0x18F7BE9ACB7D08F4());
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		uParam0->f_4 = unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304());
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
	else if (unk_0xE7FAF8E78F7D3A73(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xB03A1684359C50A1(Global_71100, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xB03A1684359C50A1(Global_71100, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xB03A1684359C50A1(Global_71100, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xB03A1684359C50A1(Global_71100, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x0E40E816537BFB87(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_68(&iVar0))
		{
			if (func_66(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_101();
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
		else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_65(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_65(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x311945498D684788(Param0))
	{
		iVar0 = unk_0x0E40E816537BFB87(Param4, sParam3);
		if (!unk_0xB79050CDE709F080(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x1FD2682AAB3A901A(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_66(int iParam0, var uParam1, var uParam2)
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
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_67(*uParam1, 0f, 0f, 0f, 0);
}

bool func_67(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_68(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_89())
		{
			*uParam0 = func_74(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), 6, -1, 0, 1, -1);
			if (func_73(*uParam0) && !func_69(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_69(int iParam0)
{
	return func_70(iParam0, 0, 1);
}

int func_70(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB03A1684359C50A1(Global_92881.f_1322[iParam0], iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_72() == 0)
		{
			return unk_0xB03A1684359C50A1(func_47(func_71(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 7011;
			break;
		
		case 45:
			return 3791;
			break;
		
		case 46:
			return 5366;
			break;
		
		case 47:
			return 6138;
			break;
		
		default:
			break;
	}
	return 7870;
}

int func_72()
{
	return Global_25233;
}

int func_73(int iParam0)
{
	return func_70(iParam0, 5, 1);
}

int func_74(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 47)
	{
		if (iParam3 == 6 || iParam3 == func_88(iVar0))
		{
			if (!bParam5 || func_87(iVar0))
			{
				fVar1 = unk_0x15EE504466B7BBD3(Param0, func_75(iVar0, 0), 1);
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

Vector3 func_75(int iParam0, bool bParam1)
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
		
		case 45:
			return func_86(Global_94370);
			break;
		
		case 46:
			if (Global_1595526 != func_85())
			{
				if (func_84(Global_1595526))
				{
					return func_77(2, 2);
				}
				else if (func_76(Global_1595526))
				{
					return func_77(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_76(int iParam0)
{
	if (iParam0 != func_85())
	{
		if ((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 0) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 1)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_77(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1595526 != func_85())
	{
		if (iParam1 == 3)
		{
			if (func_78(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xB03A1684359C50A1(Global_1595681[Global_1595526 /*678*/].f_266.f_236, 4))
			{
				if (func_78(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[Global_1595526 /*678*/].f_266.f_236, 5))
			{
				if (func_78(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_78(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_83(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_83(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_81(iParam0) };
	}
	else
	{
		Var12 = { func_80(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_79(Var18, -Var0.f_3.f_2) };
	Var18 = { func_79(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0xA89DC5E1C1F12DBF(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_79(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_80(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_81(int iParam0)
{
	return func_82(iParam0);
}

struct<6> func_82(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_83(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_84(int iParam0)
{
	if (iParam0 != func_85())
	{
		if ((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 3) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 4)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_85()
{
	return -1;
}

Vector3 func_86(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_87(int iParam0)
{
	return func_70(iParam0, 0, 0);
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
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
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
	}
	return 6;
}

bool func_89()
{
	return Global_92881.f_315 > 0;
}

var func_90()
{
	var uVar0;
	
	func_100(&uVar0, unk_0xB093145A4ED05C87());
	func_99(&uVar0, unk_0x4BF279EB036481A0());
	func_98(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_93(&uVar0, unk_0x518720E0DE404FFC());
	func_92(&uVar0, unk_0x5E3E9A684A609866());
	func_91(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

void func_91(var uParam0, int iParam1)
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

void func_92(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_93(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_97(*uParam0);
	iVar1 = func_95(*uParam0);
	if (iParam1 < 1 || iParam1 > func_94(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_94(int iParam0, int iParam1)
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

var func_95(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_96(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_96(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_97(var uParam0)
{
	return uParam0 & 15;
}

void func_98(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_99(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_100(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_101()
{
	func_54();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_102(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x35D499EE14C3D367() || unk_0x929A0C5D6A986B4F())
	{
		uVar0 = iParam0;
		unk_0x7B7CECD66CFA2F8F(9, &uVar0, 1, 1);
	}
	else if (unk_0xC57A05B38A912073() || unk_0x0A8A596EB9C068FA())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x096B0E6C117BD7BF(9, &cVar1);
	}
}

void func_103(char* sParam0, var uParam1, int iParam2)
{
	if (!unk_0xFAFFA408239A026B(&Global_90044))
	{
		unk_0x4F1472C5C6D453BB(&Global_90044, 0, 0, 0, 1, 0);
		StringCopy(&Global_90044, "", 64);
	}
	StringCopy(&Global_90044, sParam0, 64);
	unk_0x77E88B6C1513A778(sParam0, uParam1, iParam2, func_104(0));
}

bool func_104(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

struct<2> func_105(int iParam0)
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

void func_106(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_107(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_108(iParam0), 1, 0);
			break;
		
		case 1:
			func_107(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_108(iParam0), 1, 0);
			break;
		
		case 2:
			func_107(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_108(iParam0), 1, 0);
			break;
		
		case 3:
			func_107(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_108(iParam0), 1, 1);
			break;
		
		case 4:
			func_107(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 5:
			func_107(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 6:
			func_107(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 7:
			func_107(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_108(iParam0), 0, 0);
			break;
		
		case 8:
			func_107(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 9:
			func_107(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 10:
			func_107(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_108(iParam0), 1, 0);
			break;
		
		case 11:
			func_107(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 12:
			func_107(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 13:
			func_107(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_108(iParam0), 1, 0);
			break;
		
		case 14:
			func_107(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 15:
			func_107(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 16:
			func_107(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_108(iParam0), 1, 0);
			break;
		
		case 17:
			func_107(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 18:
			func_107(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 19:
			func_107(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 20:
			func_107(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 21:
			func_107(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_108(iParam0), 1, 0);
			break;
		
		case 22:
			func_107(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_108(iParam0), 1, 0);
			break;
		
		case 23:
			func_107(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_108(iParam0), 0, 1);
			break;
		
		case 24:
			func_107(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_108(iParam0), 0, 1);
			break;
		
		case 25:
			func_107(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 26:
			func_107(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 27:
			func_107(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_108(iParam0), 1, 0);
			break;
		
		case 28:
			func_107(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_108(iParam0), 1, 1);
			break;
		
		case 29:
			func_107(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_108(iParam0), 1, 1);
			break;
		
		case 30:
			func_107(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_108(iParam0), 1, 0);
			break;
		
		case 31:
			func_107(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 32:
			func_107(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 33:
			func_107(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 34:
			func_107(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 35:
			func_107(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 36:
			func_107(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 37:
			func_107(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_108(iParam0), 1, 0);
			break;
		
		case 38:
			func_107(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_108(iParam0), 1, 1);
			break;
		
		case 39:
			func_107(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_108(iParam0), 1, 1);
			break;
		
		case 40:
			func_107(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_108(iParam0), 1, 1);
			break;
		
		case 41:
			func_107(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_108(iParam0), 1, 1);
			break;
		
		case 42:
			func_107(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_108(iParam0), 1, 1);
			break;
		
		case 43:
			func_107(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_108(iParam0), 1, 1);
			break;
		
		case 44:
			func_107(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 45:
			func_107(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 46:
			func_107(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 47:
			func_107(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 48:
			func_107(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 49:
			func_107(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 50:
			func_107(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 51:
			func_107(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 52:
			func_107(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 54:
			func_107(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_108(iParam0), 1, 0);
			break;
		
		case 55:
			func_107(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_108(iParam0), 1, 0);
			break;
		
		case 56:
			func_107(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_108(iParam0), 0, 0);
			break;
		
		case 53:
			func_107(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_108(iParam0), 1, 0);
			break;
		
		case 57:
			func_107(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 58:
			func_107(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 59:
			func_107(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 60:
			func_107(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 61:
			func_107(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		case 62:
			func_107(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_108(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_107(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_108(int iParam0)
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

int func_109(var* uParam0)
{
	int iVar0;
	
	if (func_138(&(uParam0->f_1)))
	{
		if (!unk_0xFAFFA408239A026B(&(uParam0->f_9)))
		{
			func_129(1);
			func_127(uParam0, 1, func_128(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (func_126(*uParam0))
			{
				while (!unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()))
				{
					func_142();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		func_110(*uParam0);
		iVar0 = unk_0xB8BA7F44DF1575E1(&(uParam0->f_1), uParam0, 61, 22000);
		unk_0x2130D1396EE39C8E(&(uParam0->f_1));
		if (unk_0xF76283B558B032AE())
		{
			func_310("Initial cutscene loaded and passing to RC mission.");
			unk_0x2B843F566FEA0930(iVar0);
		}
		else
		{
			func_310("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0x183705334A83083E();
		}
		return 1;
	}
	return 0;
}

void func_110(int iParam0)
{
	struct<2> Var0;
	
	func_125();
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 0);
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 250, 0);
	}
	if (func_124(iParam0))
	{
		unk_0xE8144E7C72E963DC(unk_0x18F7BE9ACB7D08F4(), 0);
	}
	unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
	unk_0x000ED7BEBF44F5EA(0, 1);
	unk_0x000ED7BEBF44F5EA(3, 1);
	unk_0x000ED7BEBF44F5EA(2, 1);
	if (Global_36991 == 1)
	{
		if (func_122(unk_0x18F7BE9ACB7D08F4()))
		{
			func_113(unk_0x18F7BE9ACB7D08F4());
		}
	}
	if (!func_161())
	{
		if (iParam0 < 63)
		{
			func_111(iParam0);
			Var0 = { func_9(iParam0) };
			unk_0xC5FD44365E5AB875(1, &Var0);
		}
	}
}

void func_111(int iParam0)
{
	if (iParam0 < 63)
	{
		func_112();
		Global_71107 = iParam0;
		Global_71106 = 0;
		Global_71109 = 7;
	}
}

void func_112()
{
	if (Global_71106 != 6)
	{
	}
	if (Global_71111)
	{
		unk_0xB9C0BA93B50CE575(15);
		Global_71111 = 0;
		Global_17301.f_7931 = 0;
	}
	Global_71106 = 6;
	Global_71108 = -1;
	Global_71107 = -1;
}

void func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36794[iVar0 /*5*/];
		func_116(1, iVar1, 1);
		return;
	}
	iVar2 = func_115(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_114(iVar2);
}

void func_114(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36768[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36768[iParam0 /*5*/].f_1 == unk_0x18F7BE9ACB7D08F4())
		{
			Global_36989 = 0;
		}
	}
	Global_36768[iParam0 /*5*/] = 13;
	Global_36768[iParam0 /*5*/].f_1 = 0;
	Global_36768[iParam0 /*5*/].f_2 = 0;
	Global_36768[iParam0 /*5*/].f_3 = 0;
	Global_36768[iParam0 /*5*/].f_4 = 0;
	Global_36767 = (Global_36767 - 1);
	if (Global_36767 < 0)
	{
		Global_36767 = 0;
	}
}

int func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36768[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_116(int iParam0, int iParam1, int iParam2)
{
	func_117(iParam0, iParam1, iParam2, 0, 0);
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_119(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_118();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36875[iVar0 /*5*/] = iParam0;
	Global_36875[iVar0 /*5*/].f_1 = iParam1;
	Global_36875[iVar0 /*5*/].f_2 = iParam2;
	Global_36875[iVar0 /*5*/].f_3 = iParam3;
	Global_36875[iVar0 /*5*/].f_4 = iParam4;
}

int func_118()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36875[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_119(int iParam0, int iParam1, int iParam2)
{
	if (func_120(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_120(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36875[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36875[iVar0 /*5*/])
			{
				if (iParam1 == Global_36875[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_121(int iParam0)
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
		if (!Global_36794[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36794[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_122(int iParam0)
{
	if (func_123(iParam0))
	{
		if (!unk_0x0FAE113CE72ED842(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)
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

void func_125()
{
	if (Global_3128[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3128[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3128[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x62148293B793073B(&Global_2323, 25);
	unk_0xD2A9C3F486236CC5(&Global_2324, 11);
}

int func_126(int iParam0)
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

void func_127(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_123(uParam0->f_28[iVar0]))
		{
			unk_0x8BA533846256EA8E(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_123(uParam0->f_35[iVar0]))
		{
			unk_0x8BA533846256EA8E(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_123(uParam0->f_41[iVar0]))
		{
			unk_0x8BA533846256EA8E(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x8BA533846256EA8E(unk_0x18F7BE9ACB7D08F4(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), iParam1);
		if (bParam2)
		{
			unk_0x5C7D86C4752CBC68(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_128(int iParam0)
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

void func_129(bool bParam0)
{
	var uVar0;
	
	uVar0 = unk_0x0A91D180DDC7A1B8();
	if (!unk_0xA43E30AC0AF7BE76(uVar0))
	{
		if (bParam0)
		{
		}
		unk_0xF70DE7344EBF0825(uVar0, bParam0, 16);
		unk_0xF70DE7344EBF0825(uVar0, bParam0, 32);
	}
	func_130(1, 1, 0, 0);
}

void func_130(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_137(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_136())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_166(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_137(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_166(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_134(unk_0x8CFC7D6E1DA5D304())) && !func_132(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_131())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_134(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_131()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

bool func_132(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_133(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_133(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_49();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_134(int iParam0)
{
	if (func_132(iParam0, 0))
	{
		return 1;
	}
	if (func_135())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_135()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_136()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_137(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

int func_138(char* sParam0)
{
	if (!unk_0xFAFFA408239A026B(uParam0))
	{
		unk_0xC8A5933869E73673(uParam0);
		while (!unk_0xC040FCA5F6E73B3E(sParam0))
		{
			unk_0xC8A5933869E73673(sParam0);
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	func_310("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_139()
{
	Global_14622 = 0;
	func_140();
}

void func_140()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

int func_141()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

void func_142()
{
	func_147(0);
	func_146();
	func_143();
}

void func_143()
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (func_144(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 1)
				{
					unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 0);
				}
			}
		}
	}
}

int func_144(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x9C7EE7DE7041A3F4(0, 71, 1);
	unk_0x9C7EE7DE7041A3F4(0, 72, 1);
	unk_0x9C7EE7DE7041A3F4(0, 76, 1);
	unk_0x9C7EE7DE7041A3F4(0, 73, 1);
	unk_0x9C7EE7DE7041A3F4(0, 59, 1);
	unk_0x9C7EE7DE7041A3F4(0, 60, 1);
	if (bParam5)
	{
		unk_0x9C7EE7DE7041A3F4(0, 75, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x9C7EE7DE7041A3F4(0, 69, 1);
		unk_0x9C7EE7DE7041A3F4(0, 70, 1);
		unk_0x9C7EE7DE7041A3F4(0, 68, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 74, 1);
	unk_0x9C7EE7DE7041A3F4(0, 86, 1);
	unk_0x9C7EE7DE7041A3F4(0, 81, 1);
	unk_0x9C7EE7DE7041A3F4(0, 82, 1);
	unk_0x9C7EE7DE7041A3F4(0, 138, 1);
	unk_0x9C7EE7DE7041A3F4(0, 136, 1);
	unk_0x9C7EE7DE7041A3F4(0, 114, 1);
	unk_0x9C7EE7DE7041A3F4(0, 107, 1);
	unk_0x9C7EE7DE7041A3F4(0, 110, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 87, 1);
	unk_0x9C7EE7DE7041A3F4(0, 88, 1);
	unk_0x9C7EE7DE7041A3F4(0, 113, 1);
	unk_0x9C7EE7DE7041A3F4(0, 115, 1);
	unk_0x9C7EE7DE7041A3F4(0, 116, 1);
	unk_0x9C7EE7DE7041A3F4(0, 117, 1);
	unk_0x9C7EE7DE7041A3F4(0, 118, 1);
	unk_0x9C7EE7DE7041A3F4(0, 119, 1);
	unk_0x9C7EE7DE7041A3F4(0, 131, 1);
	unk_0x9C7EE7DE7041A3F4(0, 132, 1);
	unk_0x9C7EE7DE7041A3F4(0, 123, 1);
	unk_0x9C7EE7DE7041A3F4(0, 126, 1);
	unk_0x9C7EE7DE7041A3F4(0, 129, 1);
	unk_0x9C7EE7DE7041A3F4(0, 130, 1);
	unk_0x9C7EE7DE7041A3F4(0, 133, 1);
	unk_0x9C7EE7DE7041A3F4(0, 134, 1);
	unk_0x95C6D943AF847EEC();
	func_145(iParam0);
	if ((unk_0x5AFB8ED811F05E4D() - Global_29) > 500)
	{
		unk_0x7F8DAED41E5794FC(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x5AFB8ED811F05E4D();
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x36E1A96E1D63ED91(unk_0x2A72627520A107B5(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_145(int iParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		if (unk_0x15E3947C9B9DDEC8(iParam0))
		{
			if (unk_0x1F8B50D0C3034AAE(iParam0))
			{
				unk_0xFE5D726DE23CEFF5(iParam0, 0);
			}
		}
	}
}

void func_146()
{
	unk_0x9C7EE7DE7041A3F4(0, 21, 1);
	unk_0x9C7EE7DE7041A3F4(0, 37, 1);
	unk_0x9C7EE7DE7041A3F4(0, 25, 1);
	unk_0x9C7EE7DE7041A3F4(0, 141, 1);
	unk_0x9C7EE7DE7041A3F4(0, 140, 1);
	unk_0x9C7EE7DE7041A3F4(0, 24, 1);
	unk_0x9C7EE7DE7041A3F4(0, 257, 1);
	unk_0x9C7EE7DE7041A3F4(0, 22, 1);
	unk_0x9C7EE7DE7041A3F4(0, 23, 1);
}

void func_147(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_150(0))
		{
			func_148(iParam0);
		}
		unk_0xD2A9C3F486236CC5(&Global_2324, 2);
	}
}

void func_148(int iParam0)
{
	if (Global_14615)
	{
		func_149(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_136())
	{
		Global_14453.f_1 = 3;
	}
}

void func_149(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_150(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_150(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_151(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_159();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_154(&(Global_103638[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_153(iParam0);
	return 1;
}

void func_153(int iParam0)
{
	Global_103638[iParam0 /*10*/].f_4 = 1;
	Global_103638[iParam0 /*10*/].f_5 = 0;
	Global_103638[iParam0 /*10*/].f_6 = 0;
	Global_103638[iParam0 /*10*/] = 0;
}

int func_154(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90452.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_158(0))
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		unk_0x36643EAE6212D16F(unk_0x0A91D180DDC7A1B8(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x9BEC17E13AB1F07F(8);
		}
		Global_35859 = iParam2;
		Global_35821 = *uParam0;
		Global_35822 = iParam4;
		Global_35820 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35820 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35820)
			{
				if (Global_35826[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35821 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_156(iParam2))
		{
			return 0;
		}
		if (Global_35820 == 8)
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		Global_35826[Global_35820 /*4*/] = Global_35823;
		Global_35826[Global_35820 /*4*/].f_1 = iParam1;
		Global_35826[Global_35820 /*4*/].f_2 = iParam2;
		Global_35826[Global_35820 /*4*/].f_3 = 0;
		Global_35820++;
		if (iParam4 != 0)
		{
			func_155(uParam0, iParam4);
		}
	}
	return 2;
}

void func_155(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35820 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35820)
	{
		if (Global_35826[iVar0 /*4*/] == *uParam0)
		{
			Global_35826[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_156(int iParam0)
{
	return func_157(iParam0, Global_35859);
}

int func_157(int iParam0, int iParam1)
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

int func_158(int iParam0)
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	if (func_156(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_159()
{
	return func_160(unk_0xFCA64981FEF7C913(), 0);
}

int func_160(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x6E987D62C8535B6E(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_106(iVar0, &uVar1);
		if (unk_0x6E987D62C8535B6E(uVar1) == iVar33)
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

int func_161()
{
	if (Global_92829 == 10 || Global_92829 == 9)
	{
		return 1;
	}
	return 0;
}

void func_162(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = func_163(-1604.668f, 5239.1f, 3.01f, 0);
			unk_0xDC0EBFC7730AA226(*uParam1, 66);
			unk_0x71925FF3194E84CE(*uParam1, 42);
			break;
		
		case 1:
			*uParam1 = func_163(-1592.84f, 5214.04f, 3.01f, 0);
			unk_0xDC0EBFC7730AA226(*uParam1, 400);
			unk_0x71925FF3194E84CE(*uParam1, 42);
			break;
		
		case 2:
		case 3:
			*uParam1 = func_163(190.26f, -956.35f, 29.63f, 0);
			if ((unk_0xB03A1684359C50A1(Global_104551.f_18544[2 /*6*/], 3) || unk_0xB03A1684359C50A1(Global_104551.f_18544[4 /*6*/], 3)) || unk_0xB03A1684359C50A1(Global_104551.f_18544[4 /*6*/], 3))
			{
				unk_0xDC0EBFC7730AA226(*uParam1, 381);
			}
			else
			{
				unk_0xDC0EBFC7730AA226(*uParam1, 66);
			}
			if (iParam0 == 2)
			{
				unk_0x71925FF3194E84CE(*uParam1, 42);
			}
			else
			{
				unk_0x71925FF3194E84CE(*uParam1, 44);
			}
			break;
		
		case 4:
			*uParam1 = func_163(414f, -761f, 29f, 0);
			if (unk_0xB03A1684359C50A1(Global_104551.f_18544[2 /*6*/], 3) || unk_0xB03A1684359C50A1(Global_104551.f_18544[3 /*6*/], 3))
			{
				unk_0xDC0EBFC7730AA226(*uParam1, 381);
			}
			else
			{
				unk_0xDC0EBFC7730AA226(*uParam1, 66);
			}
			unk_0x71925FF3194E84CE(*uParam1, 43);
			break;
		
		case 9:
			*uParam1 = func_163(-1622.89f, 4204.87f, 83.3f, 0);
			unk_0xDC0EBFC7730AA226(*uParam1, 66);
			unk_0x71925FF3194E84CE(*uParam1, 42);
			break;
		
		case 11:
		case 12:
		case 13:
			if (iParam0 == 11)
			{
				*uParam1 = func_163(1835.53f, 4705.86f, 38.1f, 0);
			}
			else if (iParam0 == 12)
			{
				*uParam1 = func_163(1826.13f, 4698.88f, 38.92f, 0);
			}
			else
			{
				*uParam1 = func_163(637.02f, 119.7093f, 89.5f, 0);
			}
			unk_0xDC0EBFC7730AA226(*uParam1, 206);
			unk_0x71925FF3194E84CE(*uParam1, 42);
			break;
		
		case 18:
		case 19:
			if (iParam0 == 18)
			{
				*uParam1 = func_163(-954.19f, -2760.05f, 14.64f, 0);
			}
			else
			{
				*uParam1 = func_163(-63.8f, -809.5f, 321.8f, 0);
			}
			unk_0xDC0EBFC7730AA226(*uParam1, 382);
			unk_0x71925FF3194E84CE(*uParam1, 43);
			break;
		
		case 21:
		case 23:
			if (iParam0 == 21)
			{
				*uParam1 = func_163(-1877.82f, -440.649f, 45.05f, 0);
			}
			else
			{
				*uParam1 = func_163(-915.6f, 6139.2f, 5.5f, 0);
			}
			if ((unk_0xB03A1684359C50A1(Global_104551.f_18544[21 /*6*/], 3) || unk_0xB03A1684359C50A1(Global_104551.f_18544[22 /*6*/], 3)) || unk_0xB03A1684359C50A1(Global_104551.f_18544[23 /*6*/], 3))
			{
				unk_0xDC0EBFC7730AA226(*uParam1, 405);
			}
			else
			{
				unk_0xDC0EBFC7730AA226(*uParam1, 66);
			}
			if (iParam0 == 21)
			{
				unk_0x71925FF3194E84CE(*uParam1, 42);
			}
			else
			{
				unk_0x71925FF3194E84CE(*uParam1, 43);
			}
			break;
		
		case 27:
			*uParam1 = func_163(-1104.93f, 291.25f, 64.3f, 0);
			unk_0xDC0EBFC7730AA226(*uParam1, 66);
			unk_0x71925FF3194E84CE(*uParam1, 44);
			break;
		
		case 30:
			*uParam1 = func_163(-1104.93f, 291.25f, 64.3f, 0);
			unk_0xDC0EBFC7730AA226(*uParam1, 385);
			unk_0x71925FF3194E84CE(*uParam1, 44);
			break;
		
		case 34:
			*uParam1 = func_163(-303.82f, 6211.29f, 31.05f, 0);
			unk_0xDC0EBFC7730AA226(*uParam1, 386);
			unk_0x71925FF3194E84CE(*uParam1, 44);
			break;
		
		case 43:
			*uParam1 = func_163(-44.75f, -1288.67f, 28.21f, 0);
			unk_0xDC0EBFC7730AA226(*uParam1, 149);
			unk_0x71925FF3194E84CE(*uParam1, 44);
			break;
		
		case 46:
			*uParam1 = func_163(-149.75f, 285.81f, 93.67f, 0);
			unk_0xDC0EBFC7730AA226(*uParam1, 66);
			unk_0x71925FF3194E84CE(*uParam1, 43);
			break;
		
		case 47:
		case 48:
			if (iParam0 == 47)
			{
				*uParam1 = func_163(-70.71f, 301.43f, 106.79f, 0);
			}
			else
			{
				*uParam1 = func_163(-257.22f, 292.85f, 90.63f, 0);
			}
			unk_0xDC0EBFC7730AA226(*uParam1, 389);
			unk_0x71925FF3194E84CE(*uParam1, 43);
			break;
	}
}

var func_163(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x29F0B4D7EFF08BF6(Param0);
	unk_0x0590222010A36CE4(uVar0, func_164(unk_0x44243F2E2F58B8E3(), 1f, 1f));
	unk_0x63EECA6600F1090E(uVar0, iParam3);
	return uVar0;
}

float func_164(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_165(int iParam0)
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

int func_166(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && iParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_167(int iParam0, int iParam1)
{
	switch (iParam0->f_16)
	{
		case 0:
			if (*iParam0 == 12)
			{
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0))
				{
					if (func_123(iParam0->f_28[0]))
					{
						if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iParam0->f_28[0], 1), 1) < 3f)
						{
							if (func_173(2))
							{
								if (func_171(iParam0->f_27))
								{
									func_170(iParam0->f_27, *iParam0);
									func_310("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
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
				else if (func_123(iParam0->f_28[0]))
				{
					if (func_169(iParam0))
					{
						if (func_173(2))
						{
							if (func_171(iParam0->f_27))
							{
								func_170(iParam0->f_27, *iParam0);
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
				if ((((!unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0))
				{
					if (func_123(iParam0->f_28[0]))
					{
						if (func_169(iParam0))
						{
							if (func_173(2))
							{
								if (func_171(iParam0->f_27))
								{
									func_170(iParam0->f_27, *iParam0);
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
				if (!unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0))
				{
					if (func_123(iParam0->f_28[0]))
					{
						if (func_169(iParam0))
						{
							if (func_173(2))
							{
								if (func_171(iParam0->f_27))
								{
									func_170(iParam0->f_27, *iParam0);
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
			else if (func_123(iParam0->f_28[0]))
			{
				if (func_169(iParam0))
				{
					if (func_173(2))
					{
						if (func_171(iParam0->f_27))
						{
							func_170(iParam0->f_27, *iParam0);
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
			if (func_123(iParam0->f_35[0]))
			{
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iParam0->f_35[0], 0))
				{
					if (func_173(3))
					{
						func_170(iParam0->f_27, *iParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_168();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x31F12808DC47A9E5(iParam0->f_35[0]))
			{
				if (!unk_0x74C2FE037DFC8B4A(iParam0->f_35[0], 0))
				{
					if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iParam0->f_35[0], 1), 1) < iParam0->f_15)
					{
						if (func_173(2))
						{
							if (func_171(iParam0->f_27))
							{
								func_170(iParam0->f_27, *iParam0);
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
			if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), iParam0->f_17[0 /*3*/], 1) < iParam0->f_15)
			{
				if (func_173(2))
				{
					if (func_171(iParam0->f_27))
					{
						func_170(iParam0->f_27, *iParam0);
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
			if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], 0, 1, 0))
			{
				if (func_173(2))
				{
					if (func_171(iParam0->f_27))
					{
						func_170(iParam0->f_27, *iParam0);
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
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if (func_123(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)))
					{
						if (unk_0x0665EB554F07889E(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), joaat("towtruck")) || unk_0x0665EB554F07889E(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), joaat("towtruck2")))
						{
							if (unk_0x3C87303CA056FB80(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), iParam0->f_35[0]))
							{
								if (func_173(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0x0665EB554F07889E(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), joaat("cargobob")) || unk_0x0665EB554F07889E(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), joaat("cargobob2"))) || unk_0x0665EB554F07889E(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), joaat("cargobob3")))
						{
							if (unk_0xA33B7AEA0022927C(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) && unk_0xB851C5B01462C0D0(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), iParam0->f_35[0]))
							{
								if (func_173(3))
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
				if (unk_0xC3B6FA61D67F5BDD(unk_0x18F7BE9ACB7D08F4()) >= 2f)
				{
					if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0))
					{
						if (func_173(2))
						{
							if (func_171(iParam0->f_27))
							{
								func_170(iParam0->f_27, *iParam0);
								func_310("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*iParam0 == 46)
			{
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (*iParam0 == 31)
			{
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0))
				{
					if (func_173(2))
					{
						if (func_171(1))
						{
							func_170(1, *iParam0);
							func_310("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*iParam0 == 39)
			{
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0))
				{
					if (!unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0))
					{
						if (!unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0))
						{
							if (func_173(2))
							{
								if (func_171(iParam0->f_27))
								{
									func_170(iParam0->f_27, *iParam0);
									func_310("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], iParam0->f_24, 0, 1, 0))
			{
				if (*iParam0 == 45)
				{
					if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0))
					{
						return 0;
					}
				}
				if (func_173(2))
				{
					if (func_171(iParam0->f_27))
					{
						func_170(iParam0->f_27, *iParam0);
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

void func_168()
{
	func_27(&(Global_95145.f_2875), &Global_95145, 0, 1, 1, 0);
}

int func_169(var uParam0)
{
	float fVar0;
	
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(uParam0->f_28[0], 1), 1) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(uParam0->f_28[0], 1), 1) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_170(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_126(iParam1))
		{
			return;
		}
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			func_310("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()) || unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
			{
				func_310("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0x0F3F86C855582784(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0, 1, 0);
			}
			func_142();
		}
	}
}

int func_171(bool bParam0)
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x0A91D180DDC7A1B8()))
	{
		if (unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				iVar0 = unk_0x952F33F151D40D1A();
				if (func_172(iVar0))
				{
					if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()) || unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
					{
						if ((!unk_0x5BEDB1779AE301BA(iVar0) && !unk_0x2409C4B1759B2661(iVar0)) && unk_0x2A72627520A107B5(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0x2409C4B1759B2661(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_172(int iParam0)
{
	if (func_123(uParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(uParam0, 0))
		{
			if (!unk_0x25A40FAC128F45B0(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_173(int iParam0)
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				iVar0 = func_101();
				if (!func_36(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_181()) || Global_103598) || Global_25235) || func_180()) || func_179(8, -1)) || func_89()) || func_178()) || func_177()) || func_176()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1) || func_181()) || Global_25235) || func_180()) || func_179(8, -1)) || func_177()) || func_89()) || func_178()) || func_176()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_181()) || Global_103598) || Global_25235) || func_180()) || func_179(8, -1)) || func_177()) || func_89()) || func_178()) || func_176()) || Global_104551.f_7658.f_919[iVar0] == 5) || Global_36406 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_181()) || Global_103598) || Global_25235) || func_180()) || func_179(8, -1)) || func_89()) || func_178()) || func_176()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_181() || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || func_179(8, -1)) || func_176()) || func_175()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_179(8, -1) || func_89()) || func_178()) || func_175()) || func_174())
						{
							return 0;
						}
						if ((unk_0x51CFE20A158947F4() && unk_0x32C5C8379484CA74() != 3) && unk_0xCAC20ED19D675C6E() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
						{
							if ((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_181()) || Global_25235) || func_180()) || func_179(8, -1)) || func_178()) || func_177()) || func_176()) || Global_104551.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || func_181()) || func_178()) || Global_103598) || Global_25235) || func_180()) || Global_36991) || func_179(8, -1)) || func_177()) || func_175()) || func_176()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0x00C9F17EF169BFC9(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_181()) || Global_103598) || Global_25235) || func_180()) || func_179(8, -1)) || func_177()) || func_175()) || func_89()) || func_178()) || func_176())
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

var func_174()
{
	return Global_92868.f_1;
}

int func_175()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_176()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_177()
{
	if (Global_71112)
	{
		return 1;
	}
	else if (Global_55895 && !Global_55901)
	{
		return 1;
	}
	return 0;
}

bool func_178()
{
	return Global_92881.f_316 > 0;
}

bool func_179(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

var func_180()
{
	return Global_1312854;
}

int func_181()
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
	}
	return 0;
}

int func_182(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_123(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar0 = 0;
		while (iVar0 <= (iParam0->f_28 - 1))
		{
			if (unk_0x31F12808DC47A9E5(iParam0->f_28[iVar0]))
			{
				if (func_123(iParam0->f_28[iVar0]))
				{
					if (unk_0x1B843A60307EECA4(iParam0->f_28[iVar0], unk_0x18F7BE9ACB7D08F4(), 1) || unk_0x70832328F090DD95(unk_0x761660F5CE986DC4(iParam0->f_28[iVar0], 1), 7.5f, 1))
					{
						if (func_173(2))
						{
							func_170(iParam0->f_27, *iParam0);
							return 1;
						}
						else
						{
							func_310("Player damaged the N1D peds but it's not safe to trigger the mission!");
						}
					}
				}
				else if (func_173(2))
				{
					func_170(iParam0->f_27, *iParam0);
					return 1;
				}
				else
				{
					func_310("Player killed a N1D ped but it's not safe to trigger the mission!");
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_183(int iParam0, var uParam1)
{
	if (func_184(uParam1, unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)))
	{
		if (func_173(2))
		{
			if (func_171(iParam0->f_27))
			{
				func_170(iParam0->f_27, *iParam0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_184(var uParam0, struct<2> Param1, Vector3 vParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1.f_0)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_185(int iParam0, var uParam1, var uParam2)
{
	if (func_123(*uParam1))
	{
		switch (*iParam0)
		{
			case 0:
				if (unk_0xFF22FE9205F44FB6("CAR_TRUNK_THUMPS", 0, -1))
				{
					iParam0->f_1 = unk_0x2D524E0AFDB169D5();
					iParam0->f_2 = unk_0x5AFB8ED811F05E4D();
					iParam0->f_3 = unk_0x61E9B3BFA06B017B(6000, 12000);
					*iParam0 = 1;
				}
				break;
			
			case 1:
				if ((unk_0x5AFB8ED811F05E4D() - iParam0->f_2) > iParam0->f_3)
				{
					unk_0xFF4225D4B94E1277(iParam0->f_1, "TRUNK_THUMPS", unk_0x0AF3D0AB54EA2104(*uParam1, 0f, -2.2f, 0.5f), 0, 0, 0, 0);
					unk_0x40033E3EAE3C63BB(*uParam2, "NIGE3_CXAA", "DINAPOLI", func_186(0), 0);
					iParam0->f_4 = unk_0x61E9B3BFA06B017B(3, 7);
					iParam0->f_5 = 0;
					iParam0->f_6 = unk_0x5AFB8ED811F05E4D();
					iParam0->f_7 = unk_0x61E9B3BFA06B017B(100, 250);
					*iParam0 = 2;
				}
				break;
			
			case 2:
				if ((unk_0x5AFB8ED811F05E4D() - iParam0->f_6) > iParam0->f_7)
				{
					iParam0->f_8 = unk_0x61E9B3BFA06B017B(-200, -120);
					iParam0->f_9 = (0.5f * unk_0xBBDA792448DB5A89(unk_0x61E9B3BFA06B017B(-2, 3)));
					unk_0x4B75B258E14231A7(*uParam1, 1, 0f, 0f, IntToFloat(iParam0->f_8), iParam0->f_9, -1.5f, 0f, 0, 1, 1, 0, 1, 1);
					iParam0->f_5++;
					if (iParam0->f_5 < iParam0->f_4)
					{
						iParam0->f_6 = unk_0x5AFB8ED811F05E4D();
						iParam0->f_7 = unk_0x61E9B3BFA06B017B(150, 280);
					}
					else
					{
						iParam0->f_2 = unk_0x5AFB8ED811F05E4D();
						iParam0->f_3 = unk_0x61E9B3BFA06B017B(6000, 12000);
						*iParam0 = 1;
					}
				}
				break;
			}
	}
}

int func_186(int iParam0)
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

int func_187(int iParam0, struct<3> Param1, char[4] cParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	var uVar0;
	
	if ((((func_123(unk_0x18F7BE9ACB7D08F4()) && func_123(iParam0->f_28[0])) && !func_141()) && (unk_0x5AFB8ED811F05E4D() - iParam0->f_60) > iParam8) && func_191(unk_0x18F7BE9ACB7D08F4(), Param1, 1) < fParam9)
	{
		uVar0 = 16;
		func_190(&uVar0, iParam6, iParam0->f_28[0], sParam7, 0, 1);
		func_188(&uVar0, cParam4, sParam5, 7, 0, 0);
		iParam0->f_60 = unk_0x5AFB8ED811F05E4D();
		return 1;
	}
	return 0;
}

void func_188(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_189(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xD2A9C3F486236CC5(&Global_14622, 0);
	Global_15759 = iParam3;
	StringCopy(&Global_15746, sParam2, 24);
}

void func_189(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

void func_190(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
			}
		}
	}
}

float func_191(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Param1, iParam4);
}

int func_192(int iParam0, struct<3> Param1, char[4] cParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, var uParam10)
{
	var uVar0;
	
	if (!*uParam10 == 3)
	{
		if (func_173(2))
		{
			if (!func_141())
			{
				if (((func_123(unk_0x18F7BE9ACB7D08F4()) && func_123(iParam0->f_28[0])) && func_123(iParam0->f_28[1])) && func_191(unk_0x18F7BE9ACB7D08F4(), Param1, 1) < 20f)
				{
					func_310("start conversation");
					uVar0 = 16;
					if (*uParam10 == 0)
					{
						func_190(&uVar0, iParam6, iParam0->f_28[0], sParam7, 0, 1);
						func_190(&uVar0, iParam8, iParam0->f_28[1], sParam9, 0, 1);
						func_188(&uVar0, cParam4, sParam5, 7, 0, 0);
						*uParam10 = 2;
					}
					else if (*uParam10 == 2)
					{
						func_310("conversation ended");
						*uParam10 = 3;
						return 1;
					}
				}
			}
			else if (((func_194(sParam5) && !*uParam10 == 1) && func_123(unk_0x18F7BE9ACB7D08F4())) && func_191(unk_0x18F7BE9ACB7D08F4(), Param1, 1) >= 20f)
			{
				func_310("pause conversation");
				func_193(1);
				*uParam10 = 1;
			}
			if (func_191(unk_0x18F7BE9ACB7D08F4(), Param1, 1) < 20f && *uParam10 == 1)
			{
				func_310("unpause conversation");
				func_193(0);
				*uParam10 = 2;
			}
		}
	}
	return 0;
}

void func_193(int iParam0)
{
	Global_16767 = iParam0;
}

int func_194(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = { func_195() };
	if (unk_0x9D39145AD645E383(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_195()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

void func_196(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_123(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_199(uParam1))
				{
					if (unk_0x028356968FDD2DF2(*uParam1))
					{
						unk_0xD9FCA20C1C5553F7(iParam0);
						if (iParam2 != 21)
						{
							if (func_67(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								unk_0xB5746603774C4C9D(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0xC8BEB049F3BFC0AB(&uVar0);
								if (func_198(uParam1))
								{
									unk_0x981A584B2E775D45(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									unk_0x981A584B2E775D45(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								unk_0x981A584B2E775D45(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0xAFDA7B8F83B2CA58(uVar0);
								unk_0x73F69DD57B7E92A9(iParam0, uVar0);
								unk_0x56C7B20E11B37066(&uVar0);
							}
						}
						else
						{
							unk_0x981A584B2E775D45(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
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
				if (!func_198(uParam1) || !unk_0xDFEB6D8BCE2B43F6(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_197(iParam2) && !unk_0x3821A75ECC8A0D5B(iParam0, unk_0x18F7BE9ACB7D08F4(), 25f))
					{
						unk_0x8F467CFC5FBBCE77(iParam0, unk_0x18F7BE9ACB7D08F4(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_198(uParam1) && uParam1->f_4 == 0) && unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0xC8BEB049F3BFC0AB(&uVar1);
				if (func_67(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					unk_0xB5746603774C4C9D(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0xB5746603774C4C9D(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0x981A584B2E775D45(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0x981A584B2E775D45(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				unk_0xAFDA7B8F83B2CA58(uVar1);
				unk_0x73F69DD57B7E92A9(iParam0, uVar1);
				unk_0x56C7B20E11B37066(&uVar1);
				uParam1->f_4 = 1;
				if (func_197(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_197(iParam2) || unk_0x3821A75ECC8A0D5B(iParam0, unk_0x18F7BE9ACB7D08F4(), 10f))
				{
					if (func_67(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						unk_0xB5746603774C4C9D(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						unk_0x981A584B2E775D45(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_197(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_198(var uParam0)
{
	if (unk_0xFAFFA408239A026B(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_199(var uParam0)
{
	if (unk_0xFAFFA408239A026B(*uParam0) || unk_0xFAFFA408239A026B(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

int func_200()
{
	return joaat("u_m_m_aldinapoli");
}

char* func_201()
{
	return "Al_DiNapoli";
}

void func_202(int iParam0, char* sParam1, struct<3> Param2)
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (!unk_0xFAFFA408239A026B(sParam1))
		{
			if (Global_35859 == 17)
			{
				if (*iParam0 != -1)
				{
					func_207(iParam0);
				}
			}
			else if (func_206())
			{
				if (*iParam0 != -1)
				{
					func_207(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_191(unk_0x18F7BE9ACB7D08F4(), Param2, 1) <= 100f)
				{
					func_205(iParam0, 1);
				}
			}
			else
			{
				switch (func_204(*iParam0))
				{
					case 1:
						if (unk_0x9D39145AD645E383(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0x2638484EFB343584(sParam1, 14, 8);
						}
						else
						{
							unk_0xFC829E6465CFFAC1(sParam1, 8);
						}
						unk_0xA4F0831C61D8389E(2);
						func_203(*iParam0, 1);
						break;
					
					case 2:
						unk_0xFF0F9807F8F0062F(0);
						unk_0x183705334A83083E();
						unk_0xA4F0831C61D8389E(0);
						func_203(*iParam0, 0);
						break;
				}
				if (func_191(unk_0x18F7BE9ACB7D08F4(), Param2, 1) > 120f)
				{
					func_207(iParam0);
				}
			}
		}
	}
}

void func_203(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_70848 == iParam0)
		{
			Global_70849 = iParam0;
		}
	}
	else if (Global_70849 == iParam0)
	{
		Global_70849 = -1;
	}
}

int func_204(int iParam0)
{
	if (Global_70848 == iParam0)
	{
		if (Global_70849 == -1)
		{
			if (Global_70847 < unk_0x756DE011CEDBBD7E())
			{
				return 1;
			}
		}
	}
	else if (Global_70849 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_205(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (Global_70845 < 5)
	{
		Global_70834[Global_70845 /*2*/] = 0;
		Global_70834[Global_70845 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_70845)
			{
				if (Global_70834[iVar1 /*2*/] == Global_70834[Global_70845 /*2*/])
				{
					Global_70834[Global_70845 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_70834[Global_70845 /*2*/];
		Global_70845++;
		Global_70846 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

bool func_206()
{
	return Global_90283;
}

void func_207(int iParam0)
{
	unk_0xFF0F9807F8F0062F(0);
	unk_0x183705334A83083E();
	func_208(iParam0);
}

void func_208(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_70849 == *iParam0)
	{
		func_203(*iParam0, 0);
	}
	if (Global_70848 == *iParam0)
	{
		Global_70848 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_70845)
	{
		if (Global_70834[iVar1 /*2*/] == *iParam0)
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
	while (iVar2 <= (Global_70845 - 2))
	{
		Global_70834[iVar2 /*2*/] = Global_70834[iVar2 + 1 /*2*/];
		Global_70834[iVar2 /*2*/].f_1 = Global_70834[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_70834[(Global_70845 - 1) /*2*/] = -1;
	Global_70834[(Global_70845 - 1) /*2*/].f_1 = 3;
	Global_70845 = (Global_70845 - 1);
	Global_70846 = 1;
	Global_70847 = unk_0x756DE011CEDBBD7E();
	*iParam0 = -1;
}

void func_209(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_159();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_103638[iParam0 /*10*/].f_1 = 1;
}

int func_210(var uParam0, bool bParam1)
{
	struct<27> Var0;
	
	if (Global_70852)
	{
		func_310("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_106(*uParam0, &Var0);
	if ((func_243(*uParam0) || func_241(*uParam0)) || Global_71097 == 1)
	{
		return 1;
	}
	if (!unk_0x6E65FD9B611945AD())
	{
		func_310("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_237(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_236(uParam0->f_28[0]);
		}
		func_310("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_216(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_216(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_214(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_213(uParam0);
			}
			else
			{
				func_211(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_214(uParam0, 0, 1))
		{
			func_211(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_214(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_214(uParam0, 1, 0))
		{
			func_211(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_214(uParam0, 0, 0))
		{
			func_211(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_123(uParam0->f_35[0]))
		{
			if (!unk_0x8673F2F1802ADEF7(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (unk_0x7824A0A217B1F7A8(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_310("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!unk_0xB03A1684359C50A1(Var0.f_26, func_101()))
		{
			func_310("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_199(&(uParam0->f_48)) && bParam1)
	{
		func_196(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_211(var uParam0)
{
	int iVar0;
	var uVar1;
	
	if (*uParam0 == 52)
	{
		func_212(&(uParam0->f_41[1]));
		func_212(&(uParam0->f_41[2]));
	}
	if (func_123(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_122(uParam0->f_28[iVar0]))
			{
				if (!unk_0x657B649BA2AD3582(uParam0->f_28[iVar0], 0))
				{
					unk_0xF342BF6A7A4C7A8F(uParam0->f_28[iVar0], 1, 0);
					unk_0x73D7E57BF0ED7FEB(uParam0->f_28[0], 0);
				}
				unk_0x10F31830C95ED2E5(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (func_123(uParam0->f_41[0]))
					{
						unk_0xF342BF6A7A4C7A8F(uParam0->f_41[0], 1, 0);
						unk_0x73D7E57BF0ED7FEB(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_236(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						unk_0x831CD0FBFB26EC7E("rcmcollect_paperleadinout@");
						while (!unk_0x028356968FDD2DF2("rcmcollect_paperleadinout@"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xC8BEB049F3BFC0AB(&uVar1);
						unk_0xB5746603774C4C9D(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 10000f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uVar1);
						unk_0x73F69DD57B7E92A9(uParam0->f_28[iVar0], uVar1);
						unk_0x56C7B20E11B37066(&uVar1);
						break;
					
					case 0:
					case 1:
						unk_0x831CD0FBFB26EC7E("rcmabigail");
						while (!unk_0x028356968FDD2DF2("rcmabigail"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xC8BEB049F3BFC0AB(&uVar1);
						unk_0xB5746603774C4C9D(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 10000f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uVar1);
						unk_0x73F69DD57B7E92A9(uParam0->f_28[iVar0], uVar1);
						unk_0x56C7B20E11B37066(&uVar1);
						break;
					
					case 32:
						unk_0x831CD0FBFB26EC7E("rcmminute1");
						while (!unk_0x028356968FDD2DF2("rcmminute1"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xC8BEB049F3BFC0AB(&uVar1);
						if (iVar0 == 0)
						{
							unk_0xB5746603774C4C9D(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							unk_0xB5746603774C4C9D(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 10000f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uVar1);
						unk_0x73F69DD57B7E92A9(uParam0->f_28[iVar0], uVar1);
						unk_0x56C7B20E11B37066(&uVar1);
						break;
					
					case 24:
						unk_0x831CD0FBFB26EC7E("special_ped@hao@base");
						while (!unk_0x028356968FDD2DF2("special_ped@hao@base"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xC8BEB049F3BFC0AB(&uVar1);
						unk_0xB5746603774C4C9D(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 10000f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uVar1);
						unk_0x73F69DD57B7E92A9(uParam0->f_28[iVar0], uVar1);
						unk_0x56C7B20E11B37066(&uVar1);
						break;
					
					default:
						unk_0x1436BC29BF45FBAE(uParam0->f_28[iVar0]);
						unk_0x9603FB72C3126396(uParam0->f_28[iVar0], unk_0x18F7BE9ACB7D08F4(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_212(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (unk_0xA3D5B4AC814DFA69(*uParam0))
		{
			unk_0x964B3F361C3DBDF4(*uParam0, 1, 1);
		}
		unk_0x5BE35A26B9097351(uParam0);
	}
}

void func_213(var uParam0)
{
	int iVar0;
	
	if (func_123(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_122(uParam0->f_28[iVar0]))
			{
				unk_0x273FE09AE985A00A(uParam0->f_28[iVar0], 1, 0);
				unk_0x40E2910BAF39B1C7(uParam0->f_28[iVar0], 0);
				unk_0x10F31830C95ED2E5(uParam0->f_28[iVar0], 1);
				unk_0x48B25C02FAB9DC81(uParam0->f_28[iVar0], unk_0x18F7BE9ACB7D08F4(), 0, 16);
				unk_0xDBE64C5761554FBF(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_214(var uParam0, bool bParam1, bool bParam2)
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
	if (func_122(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x31F12808DC47A9E5(uParam0->f_35[iVar0]))
			{
				if (unk_0x74C2FE037DFC8B4A(uParam0->f_35[iVar0], 0))
				{
					func_310("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0xC4B84EB67F78C1F0(uParam0->f_35[iVar0], 0))
				{
					func_310("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0x1B843A60307EECA4(uParam0->f_35[iVar0], unk_0x18F7BE9ACB7D08F4(), 0))
				{
					func_310("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0x0A088F357EF627CA(uParam0->f_35[iVar0]) < 850)
				{
					func_310("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if (unk_0x8D11942CD2B49BB5(uParam0->f_35[iVar0], unk_0x18F7BE9ACB7D08F4()) && unk_0x2A72627520A107B5(unk_0x18F7BE9ACB7D08F4()) > 5f)
						{
							func_310("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						uVar2 = unk_0x952F33F151D40D1A();
						if (func_172(uVar2))
						{
							if (unk_0x4F69FBD64CDF125B(uVar2) == joaat("towtruck") || unk_0x4F69FBD64CDF125B(iVar2) == joaat("towtruck2"))
							{
								if (func_172(uParam0->f_35[iVar0]))
								{
									if (unk_0x3C87303CA056FB80(iVar2, uParam0->f_35[iVar0]))
									{
										func_310("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = unk_0x952F33F151D40D1A();
						if (func_172(iVar3))
						{
							if (unk_0x8D11942CD2B49BB5(uParam0->f_35[iVar0], iVar3) && unk_0x2A72627520A107B5(iVar3) > 6f)
							{
								func_310("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_215(unk_0x18F7BE9ACB7D08F4(), uParam0->f_35[iVar0]))
							{
								func_310("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
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

int func_215(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam1, 0))
		{
			iVar0 = unk_0x0B495402BD092DEB(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_216(var uParam0, bool bParam1, int iParam2)
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
	if (func_122(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x31F12808DC47A9E5(uParam0->f_28[iVar0]))
			{
				if (!unk_0x0FAE113CE72ED842(uParam0->f_28[iVar0]))
				{
					if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
					{
						if (unk_0x8D11942CD2B49BB5(unk_0x18F7BE9ACB7D08F4(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_211(uParam0);
							}
							else
							{
								func_213(uParam0);
							}
							if (func_141())
							{
								func_139();
							}
							func_310("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((unk_0x20BE2EAD83953A78(uParam0->f_28[iVar0]) || unk_0x7F3463BA18B53A3D(uParam0->f_28[iVar0])) || unk_0x2B9DD94F17265ECD(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_211(uParam0);
						}
						else
						{
							func_213(uParam0);
						}
						func_310("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (unk_0x0B90D19A63676F41(uParam0->f_28[iVar0]))
					{
						if (unk_0xEA07F07380ABC460(uParam0->f_28[iVar0], unk_0x18F7BE9ACB7D08F4(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_211(uParam0);
							}
							else
							{
								func_213(uParam0);
							}
							func_310("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_235(*uParam0))
					{
						if (!func_151(*uParam0))
						{
							if (func_230(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_211(uParam0);
								}
								else
								{
									func_213(uParam0);
								}
								func_310("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (unk_0x7824A0A217B1F7A8(-1, unk_0x761660F5CE986DC4(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_211(uParam0);
							}
							else
							{
								func_213(uParam0);
							}
							func_310("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_218(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_211(uParam0);
							}
							else
							{
								func_213(uParam0);
							}
							func_310("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_217(*uParam0))
					{
						if (unk_0x7824A0A217B1F7A8(-1, unk_0x761660F5CE986DC4(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_211(uParam0);
							}
							else
							{
								func_213(uParam0);
							}
							func_310("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
						{
							if (iParam2 == 0)
							{
								func_211(uParam0);
							}
							else
							{
								func_213(uParam0);
							}
							func_310("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_310("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_123(uParam0->f_41[0]))
						{
							unk_0xF342BF6A7A4C7A8F(uParam0->f_41[0], 1, 0);
							unk_0x73D7E57BF0ED7FEB(uParam0->f_41[0], 0);
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

int func_217(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_123(unk_0x18F7BE9ACB7D08F4()) && func_123(iParam0))
	{
		if (func_229(iParam0) || unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam0))
		{
			if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_219(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_219(int iParam0, float fParam1)
{
	return func_220(iParam0, unk_0x18F7BE9ACB7D08F4(), fParam1, 1, 250, 7);
}

bool func_220(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_228(iParam0, iParam1);
	if (!func_123(iParam0) || !func_123(iParam1))
	{
		if (iVar4 != -1)
		{
			func_227(&(Local_49[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_224(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_223();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_49[iVar4 /*4*/].f_1 = iParam0;
		Local_49[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_221(&(Local_49[iVar4 /*4*/]), Var1, iParam1, &(Local_49[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x5AFB8ED811F05E4D() - Local_49[iVar4 /*4*/].f_3) < iParam4);
}

int func_221(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_123(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_222(iParam4, iParam7) };
		*uParam0 = unk_0x96011BB04BED3CD0(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xA3F56DCC3ACBDEC5(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0xB6C2454233C8F532(iVar7))
	{
		func_123(iVar7);
		if (unk_0x6DE4035D8BAB73B4(iVar7) == iParam4)
		{
			if (bLocal_90)
			{
				unk_0xD2F8DE21E0732141(Param1, unk_0x761660F5CE986DC4(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x5AFB8ED811F05E4D();
			return 1;
		}
		return 0;
	}
	if (unk_0x978B4E1292EBBE41(iVar7))
	{
		func_123(iVar7);
		if (unk_0x657B649BA2AD3582(iParam4, 0))
		{
			if (unk_0x00ABCA0241A97143(iVar7) == unk_0x5AD687C3474F04B4(iParam4, 0))
			{
				if (bLocal_90)
				{
					unk_0xD2F8DE21E0732141(Param1, unk_0x761660F5CE986DC4(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x5AFB8ED811F05E4D();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_222(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x61E9B3BFA06B017B(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x761660F5CE986DC4(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x433176BD83D09D7E(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x433176BD83D09D7E(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x433176BD83D09D7E(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x433176BD83D09D7E(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x433176BD83D09D7E(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x761660F5CE986DC4(iParam0, 1);
}

int func_223()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49.f_0)
	{
		if ((Local_49[iVar0 /*4*/] == 0 && Local_49[iVar0 /*4*/].f_1 == 0) && Local_49[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_224(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_226(unk_0x761660F5CE986DC4(iParam1, 1) - unk_0x761660F5CE986DC4(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x9B40AD9E8738972C(iParam0) };
	}
	else
	{
		Var3 = { func_226(unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 5f, 0f) - unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_225(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_225(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_226(struct<3> Param0)
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

void func_227(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_228(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_49.f_0)
	{
		if (Local_49[iVar0 /*4*/].f_1 == iParam0 && Local_49[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_229(var uParam0)
{
	if (unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), uParam0) && unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
	{
		return 1;
	}
	return 0;
}

int func_230(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_123(unk_0x18F7BE9ACB7D08F4()) && func_123(uParam0))
	{
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_234(uParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_231(uParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x11879DABC3CC8D46(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0x70832328F090DD95(unk_0x761660F5CE986DC4(uParam0, 1), fVar0, 1))
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
				if (func_234(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_231(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_231(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x761660F5CE986DC4(uParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xC803706E49FF7A7F(unk_0x761660F5CE986DC4(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xC803706E49FF7A7F(unk_0x761660F5CE986DC4(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xC803706E49FF7A7F(unk_0x761660F5CE986DC4(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xC803706E49FF7A7F(unk_0x761660F5CE986DC4(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_232(iParam0, fParam1))
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
			if (func_232(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xAB3BDB14DC75494C(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_232(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x7110E50212169A23(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x7110E50212169A23(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x7110E50212169A23(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x7110E50212169A23(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x7110E50212169A23(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_233(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_233(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_226(Param1 - unk_0x761660F5CE986DC4(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x9B40AD9E8738972C(iParam0) };
	}
	else
	{
		Var3 = { func_226(unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 5f, 0f) - unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_225(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_234(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x70832328F090DD95(unk_0x761660F5CE986DC4(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_236(int iParam0)
{
	var uVar0;
	
	if (func_123(unk_0x18F7BE9ACB7D08F4()) && func_123(uParam0))
	{
		unk_0x831CD0FBFB26EC7E("rcmextreme3");
		while (!unk_0x028356968FDD2DF2("rcmextreme3"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC8BEB049F3BFC0AB(&uVar0);
		unk_0xB5746603774C4C9D(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0x4C7506FBB6FFDFC8(0, 1);
		unk_0x589CAFF490F034E2(0, 64.6f, -737.8f, 44.2f);
		unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 10000f, -1, 0, 0);
		unk_0xAFDA7B8F83B2CA58(uVar0);
		unk_0x73F69DD57B7E92A9(uParam0, uVar0);
		unk_0x56C7B20E11B37066(&uVar0);
	}
}

int func_237(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_159();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_243(iParam0))
	{
		return 0;
	}
	if (!func_156(4))
	{
		if (func_241(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_240() && !func_239())
	{
		return 1;
	}
	if (!func_238(iParam0))
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) != 0)
			{
				return 1;
			}
		}
	}
	if (!unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_239()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x05C1AD623B6C5E86() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_240()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 20);
	}
	return 0;
}

int func_241(int iParam0)
{
	if ((func_242() && Global_92829.f_11 == 6) && iParam0 == func_160(&(Global_92829.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_242()
{
	if (((Global_92829 == 13 || Global_92829 == 10) || Global_92829 == 11) || Global_92829 == 12)
	{
		return 0;
	}
	return 1;
}

int func_243(int iParam0)
{
	if (func_104(0))
	{
		if (Global_71098.f_1 == 7)
		{
			if (Global_71098 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_244(int iParam0, var uParam1)
{
	switch (*iParam0)
	{
		case 37:
			if (!func_277(iParam0))
			{
				return 0;
			}
			break;
		
		case 38:
			if (!func_269(iParam0))
			{
				return 0;
			}
			break;
		
		case 39:
			if (!func_265(iParam0))
			{
				return 0;
			}
			break;
		
		case 40:
			if (!func_264(iParam0))
			{
				return 0;
			}
			break;
		
		case 41:
			if (!func_260(iParam0, uParam1))
			{
				return 0;
			}
			break;
		
		case 42:
			if (!func_255(iParam0))
			{
				return 0;
			}
			break;
		
		case 43:
			if (!func_245(iParam0))
			{
				return 0;
			}
			break;
	}
	func_310("Created initial scene");
	return 1;
}

int func_245(var uParam0)
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	
	iVar0[0] = uLocal_92;
	iVar0[1] = iLocal_94;
	iVar0[2] = iLocal_95;
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "NMT_3_RCM", 24);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				unk_0x9016574B77A748EE(iVar0[iVar4]);
				iVar4++;
			}
			func_254(&(uParam0->f_48), "rcmnigel3", "base", 0);
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_253(&iVar0) || !func_252(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			bVar5 = true;
			if (!unk_0x31F12808DC47A9E5(uParam0->f_28[0]))
			{
				if (!func_249(&(uParam0->f_28[0]), 64, -44.6f, -1289.86f, 29.16f, 22.9f, "RC NIGEL", 1))
				{
					bVar5 = false;
				}
			}
			if (!unk_0x31F12808DC47A9E5(uParam0->f_35[0]))
			{
				func_247(&(uParam0->f_35[0]), iLocal_95, -39.9688f, -1285.962f, 28.3505f, 181.02f);
				if (func_123(uParam0->f_35[0]))
				{
					unk_0x62270578972B4C56(uParam0->f_35[0], 65, 0);
					unk_0x215DD08C065C3A14(uParam0->f_35[0], 5, 0);
					unk_0x1C4B08C81FA52071(uParam0->f_35[0], "28BNT310");
					unk_0x98347A9DB184A9E3(uParam0->f_35[0], 0);
					unk_0xA2B45B1D3EE42178(uParam0->f_35[0], 10);
					unk_0xA49981D53ECFC36D(uParam0->f_35[0], 0);
					unk_0xDFE3E6C2A4635F0A(uParam0->f_35[0], 0);
					unk_0xF9A57C919E2B4735(uParam0->f_35[0], 0);
				}
			}
			if (!func_246(&(uParam0->f_28[1]), &(uParam0->f_35[0])))
			{
				bVar5 = false;
			}
			if (bVar5)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				unk_0x419C9117019F2E5A(iVar0[iVar4]);
				iVar4++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_246(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0x31F12808DC47A9E5(*uParam1) && unk_0xEDFE27D1AEA0EA7F(iLocal_94))
	{
		*uParam0 = unk_0x364B87C5C64BD100(26, joaat("u_m_m_aldinapoli"), -59.7094f, -1330.129f, 32.1963f, 0f, 1, 1);
		unk_0x97236214E312A8E7(*uParam0, "NI3_LNCH_CELEB");
		unk_0xDEA702F2138E0B35(*uParam0, 4, 0, 0, 0);
		unk_0x40E2910BAF39B1C7(*uParam0, 1);
		Var0 = { unk_0x0AF3D0AB54EA2104(*uParam1, -0.2f, -1.8f, -1f) };
		fVar6 = (-90f + unk_0x93FDA3BF59E7B77F(*uParam1));
		Var3 = { 0f, 0f, fVar6 };
		unk_0x3FF1EE7D5FD7094C(*uParam0, Var0, 0, 0, 1);
		unk_0x58F6B49606932378(*uParam0, Var3, 2, 1);
		unk_0x947CE5CCDDBA0651(*uParam0, *uParam1, 0, 0.2f, -1.8f, 0f, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
		unk_0xA12407EB7D7CF146(*uParam0, 0, 0);
		return 1;
	}
	return 0;
}

void func_247(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_248(uParam0);
	*uParam0 = unk_0x3064CCF56C6C32BC(iParam1, Param2, fParam5, 1, 1, 0);
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		unk_0x9B53B2691E2B1F79(*uParam0, 1084227584);
		unk_0x874004759C4BE8DC(*uParam0, 1000);
	}
}

void func_248(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (!unk_0x90D1FDC9D31B7BE1(*uParam0))
		{
			unk_0x337F2213526139E0(*uParam0, 1, 0);
		}
		if (func_172(*uParam0))
		{
			if (unk_0x90D1FDC9D31B7BE1(*uParam0) && unk_0xE54DCC6B21FDC95A(*uParam0, 1))
			{
				if (func_123(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), *uParam0, 0))
					{
						unk_0x4F5FF3F3FDCAB15D(uParam0);
						return;
					}
				}
				unk_0xBECECD970F645217(uParam0);
			}
		}
		else
		{
			if (func_123(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), *uParam0, 0))
				{
					unk_0x4F5FF3F3FDCAB15D(uParam0);
					return;
				}
			}
			unk_0xBECECD970F645217(uParam0);
		}
	}
}

int func_249(var uParam0, int iParam1, struct<3> Param2, float fParam5, char* sParam6, int iParam7)
{
	if (func_250(uParam0, iParam1, Param2, fParam5, 1))
	{
		if (unk_0x31F12808DC47A9E5(*uParam0))
		{
			if (!unk_0x74C2FE037DFC8B4A(*uParam0, 0))
			{
				unk_0x40E2910BAF39B1C7(*uParam0, 1);
				unk_0xD592E5486B0119A2(*uParam0, 0);
				if (iParam7 == 1)
				{
					unk_0x44EB7E24C5D75087(*uParam0, 0);
				}
			}
			unk_0x97236214E312A8E7(*uParam0, sParam6);
		}
		return 1;
	}
	return 0;
}

int func_250(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_36(iParam1))
	{
		iVar0 = func_313(iParam1);
		unk_0x9016574B77A748EE(iVar0);
		if (unk_0xEDFE27D1AEA0EA7F(iVar0))
		{
			if (unk_0x31F12808DC47A9E5(*uParam0))
			{
				unk_0x63C116C2153FAA3C(uParam0);
			}
			*uParam0 = unk_0x364B87C5C64BD100(26, iVar0, Param2, uParam5, 0, 0);
			unk_0xFB644935627FBD9A(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x6363507A3F1C0EFE(*uParam0, 3) == 0)
				{
					unk_0xDEA702F2138E0B35(*uParam0, 5, 2, 0, 0);
				}
			}
			func_251(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0x419C9117019F2E5A(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_251(var uParam0, int iParam1)
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
	Global_88808[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_252(var uParam0)
{
	if (func_199(uParam0))
	{
		unk_0x831CD0FBFB26EC7E(*uParam0);
		if (unk_0x028356968FDD2DF2(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_253(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!unk_0xEDFE27D1AEA0EA7F((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_254(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = sParam3;
	unk_0x831CD0FBFB26EC7E(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

int func_255(var uParam0)
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	
	iVar0[0] = uLocal_92;
	iVar0[1] = iLocal_95;
	iVar0[2] = joaat("dubsta");
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 9f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "NMT_2_RCM", 24);
			func_256(42, 1);
			func_254(&(uParam0->f_48), "rcmnigel2", "base_nigel", "base_nigel");
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				unk_0x9016574B77A748EE(iVar0[iVar4]);
				iVar4++;
			}
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_253(&iVar0) || !func_252(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			bVar5 = true;
			if (!unk_0x31F12808DC47A9E5(uParam0->f_28[0]))
			{
				if (!func_249(&(uParam0->f_28[0]), 64, -1310.65f, -640.17f, 26.52f, 153.43f, "RC NIGEL", 1))
				{
					bVar5 = false;
				}
			}
			if (!unk_0x31F12808DC47A9E5(uParam0->f_35[0]))
			{
				func_247(&(uParam0->f_35[0]), iLocal_95, -1304.01f, -644.58f, 25.91f, 127.67f);
				if (func_123(uParam0->f_35[0]))
				{
					unk_0x62270578972B4C56(uParam0->f_35[0], 65, 0);
					unk_0x215DD08C065C3A14(uParam0->f_35[0], 5, 0);
					unk_0x1C4B08C81FA52071(uParam0->f_35[0], "28BNT310");
					unk_0x98347A9DB184A9E3(uParam0->f_35[0], 0);
					unk_0xA2B45B1D3EE42178(uParam0->f_35[0], 10);
				}
			}
			if (!unk_0x31F12808DC47A9E5(uParam0->f_35[1]))
			{
				func_247(&(uParam0->f_35[1]), iVar0[2], -1290.73f, -634.603f, 26.1004f, 126.961f);
				if (func_123(uParam0->f_35[1]))
				{
					unk_0x62270578972B4C56(uParam0->f_35[1], 0, 0);
					unk_0xA2B45B1D3EE42178(uParam0->f_35[1], 10);
				}
			}
			if (bVar5)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				unk_0x419C9117019F2E5A(iVar0[iVar4]);
				iVar4++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_256(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 37:
			if (bParam1)
			{
				uLocal_107 = func_259();
				unk_0x6D7801DE0E52AE2C("WORLD_HUMAN_GUARD_STAND", 0);
				unk_0x6D7801DE0E52AE2C("WORLD_HUMAN_CLIPBOARD", 0);
				unk_0x6D7801DE0E52AE2C("WORLD_VEHICLE_DRIVE_SOLO", 0);
				func_258();
				unk_0xE6B6928D4EED07B1(-1100.5f, 789.8f, 164.34f, 20f, 0);
				func_257(0);
			}
			else
			{
				unk_0x7E1D02126DA8A751(uLocal_107, 0);
				unk_0xEE0B7B5DD68BDE7A();
				func_257(1);
			}
			break;
		
		case 38:
			if (bParam1)
			{
				uLocal_107 = unk_0x1701E0E6A11D6B65(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 0, 1, 1, 1);
				unk_0x6D7801DE0E52AE2C("WORLD_HUMAN_GUARD_STAND", 0);
				unk_0x6D7801DE0E52AE2C("WORLD_HUMAN_CLIPBOARD", 0);
				unk_0x6D7801DE0E52AE2C("WORLD_VEHICLE_DRIVE_SOLO", 0);
				unk_0x3E965E42EA49AF68(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f);
				unk_0xB2EF92AE2CB97F2F(joaat("s_m_y_doorman_01"), 1);
				unk_0xB2EF92AE2CB97F2F(joaat("s_m_m_bouncer_01"), 1);
				unk_0xE6B6928D4EED07B1(-558.2858f, 284.4073f, 81.1764f, 15f, 0);
				unk_0xE6B6928D4EED07B1(-573.394f, 289.3696f, 79.06918f, 15f, 0);
				unk_0x7EE425AE3317BA69(-554.17f, 307.68f, 82.84f, 2f, 1, 0, 0, 0);
				unk_0x3B4B46A2A779D56E(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 0, 1);
				unk_0xC3033060E0409665(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 0);
				unk_0x116D235ABEF5CE46(joaat("gauntlet"), 1);
			}
			else
			{
				unk_0x7E1D02126DA8A751(uLocal_107, 0);
				unk_0x6D7801DE0E52AE2C("WORLD_HUMAN_GUARD_STAND", 1);
				unk_0x6D7801DE0E52AE2C("WORLD_HUMAN_CLIPBOARD", 1);
				unk_0x6D7801DE0E52AE2C("WORLD_VEHICLE_DRIVE_SOLO", 1);
				unk_0xEE0B7B5DD68BDE7A();
				unk_0xB2EF92AE2CB97F2F(joaat("s_m_y_doorman_01"), 0);
				unk_0xB2EF92AE2CB97F2F(joaat("s_m_m_bouncer_01"), 0);
				unk_0x3B4B46A2A779D56E(-577.274f, 270.6505f, 77f, -543.1793f, 315.2973f, 94f, 1, 1);
				unk_0x116D235ABEF5CE46(joaat("gauntlet"), 0);
			}
			break;
		
		case 39:
			if (bParam1)
			{
				uLocal_107 = unk_0x1701E0E6A11D6B65(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 0, 1, 1, 1);
				unk_0x3E965E42EA49AF68(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f);
				unk_0x3B4B46A2A779D56E(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 0, 1);
				unk_0xC3033060E0409665(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 0);
				unk_0x7EE425AE3317BA69(-1035.73f, 365.44f, 68.91f, 35f, 1, 0, 0, 0);
				unk_0xE54597236B7D8C63(-1035.73f, 365.44f, 68.91f, 27f, 0, 0, 0, 0, 0, 0);
				unk_0xE6B6928D4EED07B1(-1035.73f, 365.44f, 68.91f, 27f, 0);
			}
			else
			{
				unk_0x7E1D02126DA8A751(uLocal_107, 0);
				unk_0xEE0B7B5DD68BDE7A();
				unk_0x3B4B46A2A779D56E(-1073.19f, 342.05f, 63.32832f, -966.24f, 411.05f, 84.82043f, 1, 1);
			}
			break;
		
		case 40:
			break;
		
		case 41:
			if (bParam1)
			{
				uLocal_107 = unk_0x1701E0E6A11D6B65(-1122.202f, 48.5724f, 51.4652f, -1076.233f, 92.1041f, 60.0617f, 0, 1, 1, 1);
				unk_0x3E965E42EA49AF68(-1122.202f, 48.5724f, 51.4652f, -1076.233f, 92.1041f, 60.0617f);
				unk_0x7EE425AE3317BA69(-1096.855f, 67.6858f, 52.952f, 15f, 1, 0, 0, 0);
			}
			else
			{
				unk_0x7E1D02126DA8A751(uLocal_107, 0);
				unk_0xEE0B7B5DD68BDE7A();
			}
			break;
		
		case 42:
			if (bParam1)
			{
				uLocal_107 = unk_0x1701E0E6A11D6B65(-1319.566f, -650.077f, 23.53715f, -1301.789f, -634.0721f, 38.18122f, 0, 1, 1, 1);
				unk_0x3E965E42EA49AF68(-1319.566f, -650.077f, 23.53715f, -1301.789f, -634.0721f, 38.18122f);
			}
			else
			{
				unk_0x7E1D02126DA8A751(uLocal_107, 0);
				unk_0xEE0B7B5DD68BDE7A();
			}
			break;
	}
}

void func_257(bool bParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	Var0 = { -1212.164f, 634.8231f, 100.5055f };
	Var3 = { -1010.083f, 830.9487f, 250.4705f };
	Var6 = { Var0 };
	Var9 = { Var3 };
	unk_0xEDE582F2B0825317(Var6, Var9, 25f, 0, bParam0, 1);
	unk_0x3B4B46A2A779D56E(Var0, Var3, bParam0, 1);
	if (!bParam0)
	{
		unk_0xC3033060E0409665(Var0, Var3, 0);
		unk_0x7EE425AE3317BA69(-1100.5f, 789.8f, 164.34f, 40f, 1, 0, 0, 0);
	}
}

void func_258()
{
	unk_0x3E965E42EA49AF68(-1112.99f, 774.12f, 151.77f, -1077.99f, 853.65f, 187.66f);
}

var func_259()
{
	return unk_0x1701E0E6A11D6B65(-1212.16f, 634.82f, 138.5f, -1010.08f, 830.94f, 180.47f, 0, 1, 1, 1);
}

int func_260(var uParam0, var uParam1)
{
	int iVar0[7];
	char* sVar8;
	int iVar9;
	var uVar10;
	
	sVar8 = "mini@golf";
	iVar0[0] = joaat("s_m_m_highsec_01");
	iVar0[1] = joaat("prop_golf_wood_01");
	iVar0[2] = joaat("prop_golf_wood_01");
	iVar0[3] = joaat("u_m_m_markfost");
	iVar0[4] = joaat("a_m_y_golfer_01");
	iVar0[5] = joaat("caddy");
	iVar0[6] = joaat("prop_golf_bag_01");
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_27 = 1;
			uParam0->f_48 = "rcmnigel1d";
			func_263(uParam1);
			func_262(uParam1, -1313.714f, -27.2202f, 48.0314f);
			func_262(uParam1, -1294.066f, -27.0136f, 47.5724f);
			func_262(uParam1, -1069.844f, -143.769f, 39.7493f);
			func_262(uParam1, -925.2529f, -89.9079f, 38.3457f);
			func_262(uParam1, -1010.948f, 40.0643f, 49.9277f);
			func_262(uParam1, -1122.838f, 233.7037f, 64.7587f);
			func_262(uParam1, -1282.578f, 188.8798f, 59.2769f);
			func_262(uParam1, -1328.153f, 192.0178f, 57.8136f);
			func_262(uParam1, -1386.75f, 167.32f, 57.11f);
			func_262(uParam1, -1411.5f, 109.64f, 51.49f);
			func_262(uParam1, -1379.52f, 111.05f, 54.28f);
			func_262(uParam1, -1371.77f, 24.07f, 52.88f);
			func_262(uParam1, -1342.27f, 16.92f, 52.16f);
			func_261(uParam1);
			iVar9 = 0;
			while (iVar9 <= (iVar0 - 1))
			{
				unk_0x9016574B77A748EE(iVar0[iVar9]);
				iVar9++;
			}
			unk_0x831CD0FBFB26EC7E(uParam0->f_48);
			unk_0x831CD0FBFB26EC7E(sVar8);
			iLocal_91 = 1;
			break;
		
		case 1:
			if ((!func_253(&iVar0) || !unk_0x028356968FDD2DF2(uParam0->f_48)) || !unk_0x028356968FDD2DF2(sVar8))
			{
				return 0;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			func_256(41, 1);
			uParam0->f_28[0] = unk_0x364B87C5C64BD100(26, iVar0[3], -1096.855f, 67.6858f, 52.952f, 112f, 1, 1);
			unk_0xD8D896F64358DA36(uParam0->f_28[0], 0, 0, 0, 0);
			unk_0x40E2910BAF39B1C7(uParam0->f_28[0], 1);
			unk_0xDC633118188196B0(uParam0->f_28[0], 1);
			unk_0x503DF1366BC3493D(uParam0->f_28[0], 1, 1);
			unk_0x44EB7E24C5D75087(uParam0->f_28[0], 1);
			uParam0->f_41[0] = unk_0x7082ECB3731CD86C(iVar0[1], -1096.855f, 67.6858f, 52.952f, 1, 1, 0);
			unk_0x947CE5CCDDBA0651(uParam0->f_41[0], uParam0->f_28[0], unk_0xCA57A734FF47CDF5(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			unk_0xC8BEB049F3BFC0AB(&uVar10);
			unk_0xB5746603774C4C9D(0, uParam0->f_48, "swing_a_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0xB5746603774C4C9D(0, uParam0->f_48, "swing_b_mark", 8f, -2f, -1, 0, 0, 0, 0, 0);
			unk_0x8F251305F4CAD788(uVar10, 1);
			unk_0xAFDA7B8F83B2CA58(uVar10);
			unk_0x73F69DD57B7E92A9(uParam0->f_28[0], uVar10);
			unk_0x56C7B20E11B37066(&uVar10);
			uParam0->f_28[1] = unk_0x364B87C5C64BD100(26, iVar0[4], -1096.258f, 69.723f, 53.0107f, 163f, 1, 1);
			unk_0xB5746603774C4C9D(uParam0->f_28[1], uParam0->f_48, "idle_a_friend_watching", 8f, -8f, -1, 1, 0, 0, 0, 0);
			unk_0x40E2910BAF39B1C7(uParam0->f_28[1], 1);
			uParam0->f_41[1] = unk_0x7082ECB3731CD86C(iVar0[2], -1096.258f, 69.723f, 53.0107f, 1, 1, 0);
			unk_0x947CE5CCDDBA0651(uParam0->f_41[1], uParam0->f_28[1], unk_0xCA57A734FF47CDF5(uParam0->f_28[1], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			uParam0->f_28[2] = unk_0x364B87C5C64BD100(26, iVar0[0], -1105.622f, 66.4609f, 53.07f, 118f, 1, 1);
			uParam0->f_28[3] = unk_0x364B87C5C64BD100(26, iVar0[0], -1090.09f, 64.3905f, 52.5607f, 238f, 1, 1);
			uParam0->f_28[4] = unk_0x364B87C5C64BD100(26, iVar0[0], -1093.736f, 73.8568f, 53.0388f, 319f, 1, 1);
			iVar9 = 2;
			while (iVar9 <= 4)
			{
				unk_0x40E2910BAF39B1C7(uParam0->f_28[iVar9], 1);
				unk_0x7D154B840BD03D00(uParam0->f_28[iVar9], joaat("weapon_pistol"), -1, 0, 1);
				unk_0xDC633118188196B0(uParam0->f_28[iVar9], 1);
				unk_0x44EB7E24C5D75087(uParam0->f_28[iVar9], 1);
				unk_0x07C41718268FCB31(uParam0->f_28[iVar9], 1);
				unk_0xDBCF2793EC480B5F(uParam0->f_28[iVar9], 1);
				unk_0xB2EF92AE2CB97F2F(iVar0[0], 1);
				iVar9++;
			}
			uParam0->f_35[0] = unk_0x3064CCF56C6C32BC(iVar0[5], -1099.91f, 61.2608f, 52.8124f, 243f, 1, 1, 0);
			unk_0x9B53B2691E2B1F79(uParam0->f_35[0], 1084227584);
			unk_0x0F3F86C855582784(uParam0->f_35[0], 1, 1, 0);
			unk_0x874004759C4BE8DC(uParam0->f_35[0], 1200);
			unk_0x116D235ABEF5CE46(iVar0[5], 1);
			uParam0->f_41[2] = unk_0x7082ECB3731CD86C(iVar0[6], -1099.91f, 63.2608f, 52.8124f, 1, 1, 0);
			unk_0x947CE5CCDDBA0651(uParam0->f_41[2], uParam0->f_35[0], 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			uParam0->f_35[1] = unk_0x3064CCF56C6C32BC(iVar0[5], -1102.335f, 75.7757f, 53.2591f, 293f, 1, 1, 0);
			uParam0->f_35[2] = unk_0x3064CCF56C6C32BC(iVar0[5], -1103.023f, 65.6267f, 53.056f, 203f, 1, 1, 0);
			iVar9 = 1;
			while (iVar9 <= 2)
			{
				unk_0x9B53B2691E2B1F79(uParam0->f_35[iVar9], 1084227584);
				iVar9++;
			}
			iVar9 = 0;
			while (iVar9 <= (iVar0 - 1))
			{
				unk_0x419C9117019F2E5A(iVar0[iVar9]);
				iVar9++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_261(var uParam0)
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(unk_0xBBDA792448DB5A89(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = unk_0xB7A628320EFF8E47(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = unk_0x71D93B57D07F9804(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_262(var uParam0, struct<3> Param1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { Param1 };
	uParam0->f_46++;
}

void func_263(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

int func_264(var uParam0)
{
	int iVar0[2];
	int iVar3;
	char* sVar4;
	var uVar5;
	
	sVar4 = "rcmnigel1cnmt_1c";
	iVar0[0] = joaat("ig_kerrymcintosh");
	iVar0[1] = joaat("a_c_rottweiler");
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -650.5558f, -217.0627f, 35.55435f };
			uParam0->f_17[1 /*3*/] = { -601.4099f, -300.3887f, 64.24574f };
			uParam0->f_24 = 35f;
			uParam0->f_27 = 1;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				unk_0x9016574B77A748EE(iVar0[iVar3]);
				iVar3++;
			}
			unk_0x831CD0FBFB26EC7E(sVar4);
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_253(&iVar0) || !unk_0x028356968FDD2DF2(sVar4))
			{
				return 0;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			uParam0->f_28[0] = unk_0x364B87C5C64BD100(26, iVar0[0], -626.87f, -268.85f, 38f, 121f, 1, 1);
			unk_0xDEA702F2138E0B35(uParam0->f_28[0], 0, 1, 1, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_28[0], 2, 1, 2, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_28[0], 3, 0, 0, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_28[0], 4, 0, 0, 0);
			unk_0x273FE09AE985A00A(uParam0->f_28[0], 17, 1);
			unk_0x764AFC5A3A16C2B0(uParam0->f_28[0], 132, 1);
			unk_0xDC633118188196B0(uParam0->f_28[0], 1);
			unk_0xFE6A6646619C0AED(uParam0->f_28[0], 0);
			unk_0x08971142B244BD72(uParam0->f_28[0], 1);
			unk_0xC8BEB049F3BFC0AB(&uVar5);
			unk_0xB5746603774C4C9D(0, sVar4, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xB5746603774C4C9D(0, sVar4, "dexy_stay_there", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xB5746603774C4C9D(0, sVar4, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xB5746603774C4C9D(0, sVar4, "price_tag", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xB5746603774C4C9D(0, sVar4, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xB5746603774C4C9D(0, sVar4, "such_a_good", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xB5746603774C4C9D(0, sVar4, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xB5746603774C4C9D(0, sVar4, "this_looks", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xB5746603774C4C9D(0, sVar4, "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xB5746603774C4C9D(0, sVar4, "who_would", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x8F251305F4CAD788(uVar5, 1);
			unk_0xAFDA7B8F83B2CA58(uVar5);
			unk_0x73F69DD57B7E92A9(uParam0->f_28[0], uVar5);
			unk_0x56C7B20E11B37066(&uVar5);
			uParam0->f_28[1] = unk_0x364B87C5C64BD100(26, iVar0[1], -627.4f, -267.12f, 38.23f, -59.95f, 1, 1);
			unk_0xDEA702F2138E0B35(uParam0->f_28[1], 3, 0, 3, 0);
			unk_0xDEA702F2138E0B35(uParam0->f_28[1], 4, 0, 1, 0);
			unk_0x764AFC5A3A16C2B0(uParam0->f_28[1], 132, 1);
			unk_0xDC633118188196B0(uParam0->f_28[1], 1);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				unk_0x419C9117019F2E5A(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_265(var uParam0)
{
	int iVar0[6];
	int iVar7;
	char* sVar8;
	float fVar9;
	
	sVar8 = "rcmnigel1b";
	iVar0[0] = joaat("ig_tylerdix");
	iVar0[1] = joaat("a_f_y_beach_01");
	iVar0[2] = joaat("s_m_m_gardener_01");
	iVar0[3] = joaat("speedo");
	iVar0[4] = joaat("comet2");
	iVar0[5] = joaat("prop_nigel_bag_pickup");
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -1065.12f, 366.3438f, 97.59101f };
			uParam0->f_17[1 /*3*/] = { -1020.775f, 364.7596f, 65.23878f };
			uParam0->f_24 = 40f;
			uParam0->f_27 = 1;
			uParam0->f_48 = "rcmnigel1bnmt_1b";
			func_256(39, 1);
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				unk_0x9016574B77A748EE(iVar0[iVar7]);
				iVar7++;
			}
			unk_0x831CD0FBFB26EC7E(uParam0->f_48);
			unk_0x831CD0FBFB26EC7E(sVar8);
			iLocal_91 = 1;
			break;
		
		case 1:
			if ((!func_253(&iVar0) || !unk_0x028356968FDD2DF2(uParam0->f_48)) || !unk_0x028356968FDD2DF2(sVar8))
			{
				return 0;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			if (!unk_0x31F12808DC47A9E5(uParam0->f_35[0]))
			{
				func_247(&(uParam0->f_35[0]), iVar0[3], -1010.97f, 359.91f, 70.65f, 331.46f);
				if (func_123(uParam0->f_35[0]))
				{
					unk_0x9B53B2691E2B1F79(uParam0->f_35[0], 1084227584);
					unk_0x62270578972B4C56(uParam0->f_35[0], 97, 97);
					unk_0xD5D1BF12DEFE6979(uParam0->f_35[0], 13.5f);
					unk_0x215DD08C065C3A14(uParam0->f_35[0], 2, 0);
					unk_0x9F2024F28D07EE1E(uParam0->f_35[0], 2, 0, 1);
					unk_0xC6D32B0FDD8821E4(uParam0->f_35[0], 2, 0, 1f);
					unk_0x7A3ECE21267AEEE8(uParam0->f_35[0]);
					return 0;
				}
			}
			if (func_123(uParam0->f_35[0]))
			{
				fVar9 = unk_0x841242FE915D0B29(uParam0->f_35[0], 2);
				if (!unk_0x5377F097256EBE89(uParam0->f_35[0], 2) && fVar9 < 0.8f)
				{
					unk_0xC6D32B0FDD8821E4(uParam0->f_35[0], 2, 0, 1f);
				}
				else
				{
					iLocal_91 = 3;
				}
			}
			break;
		
		case 3:
			if (func_123(uParam0->f_35[0]))
			{
				if (!unk_0xDFEB6D8BCE2B43F6(uParam0->f_35[0], sVar8, "idle_speedo", 3))
				{
					if (unk_0x028356968FDD2DF2(sVar8))
					{
						unk_0x78DBADACA338FEF9(uParam0->f_35[0], sVar8, "idle_speedo");
						return 0;
					}
					else
					{
						unk_0x831CD0FBFB26EC7E(sVar8);
						return 0;
					}
				}
			}
			func_247(&(uParam0->f_35[1]), iVar0[4], -1018.26f, 357.76f, 70.2f, 339.52f);
			if (func_123(uParam0->f_35[1]))
			{
				unk_0x62270578972B4C56(uParam0->f_35[1], 27, 27);
			}
			func_267(&(uParam0->f_28[0]), iVar0[0], -1054.7f, 355.94f, 68.35f, 23.67f, 26);
			if (func_122(uParam0->f_28[0]))
			{
				unk_0xAE24027C5F456397(uParam0->f_28[0], 0);
				unk_0x3FF1EE7D5FD7094C(uParam0->f_28[0], -1054.7f, 355.94f, 68.35f, 0, 0, 1);
				unk_0xB88121FF8A34A66F(uParam0->f_28[0], 23.67f);
				unk_0xB5746603774C4C9D(uParam0->f_28[0], sVar8, "Swimming_Idle", 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			func_267(&(uParam0->f_28[1]), iVar0[1], -1058.43f, 362.78f, 69.86f, 130.45f, 26);
			if (func_122(uParam0->f_28[1]))
			{
				unk_0xDEA702F2138E0B35(uParam0->f_28[1], 0, 0, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[1], 2, 0, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[1], 3, 0, 2, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[1], 4, 0, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[1], 8, 0, 1, 0);
				unk_0xAE24027C5F456397(uParam0->f_28[1], 0);
				uParam0->f_59 = unk_0x3C3438327FFEB224(-1059f, 360.976f, 69f, 0f, 0f, -1.08f, 2);
				unk_0xAB888668498FCC04(uParam0->f_59, 1);
				unk_0x07BA5921A1FAAFFF(uParam0->f_59, 0);
				unk_0x4DD2EB945B4192FD(uParam0->f_28[1], uParam0->f_59, uParam0->f_48, "base_girl", 1000f, -8f, 592, 0, 1148846080, 0);
			}
			func_267(&(uParam0->f_28[2]), iVar0[2], -1012.57f, 357.48f, 70.62f, -28.55f, 26);
			if (func_122(uParam0->f_28[2]))
			{
				unk_0xFB644935627FBD9A(uParam0->f_28[2]);
				unk_0x3FF1EE7D5FD7094C(uParam0->f_28[2], -1012.57f, 357.48f, 70.62f, 0, 0, 1);
				unk_0x874004759C4BE8DC(uParam0->f_28[2], 160);
				if (unk_0x028356968FDD2DF2(sVar8))
				{
					unk_0xB5746603774C4C9D(uParam0->f_28[2], sVar8, "idle_gardener", 1000f, -8f, -1, 270337, 0, 0, 0, 0);
				}
			}
			func_266(&(uParam0->f_41[0]), iVar0[5], -1050.03f, 368.95f, 69.29f, -11.27f);
			if (func_123(uParam0->f_41[0]))
			{
				unk_0x58F6B49606932378(uParam0->f_41[0], 0f, 0f, -11.27f, 2, 1);
				unk_0x5F1E15DC35404E1B(uParam0->f_41[0], 0);
				unk_0xF74B493CCF90C997(uParam0->f_41[0], 1);
				unk_0x7B1E589707CC388A(uParam0->f_41[0], 0);
				unk_0xCF8FDC4FED72AECE(uParam0->f_41[0], 0);
			}
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				unk_0x419C9117019F2E5A(iVar0[iVar7]);
				iVar7++;
			}
			unk_0x334F1DD67B2EC86A(uParam0->f_48);
			unk_0x334F1DD67B2EC86A(sVar8);
			return 1;
			break;
	}
	return 0;
}

void func_266(var uParam0, var uParam1, struct<3> Param2, float fParam5)
{
	func_212(uParam0);
	*uParam0 = unk_0x7082ECB3731CD86C(uParam1, Param2, 1, 1, 0);
	unk_0xB88121FF8A34A66F(*uParam0, fParam5);
}

void func_267(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6)
{
	func_268(uParam0);
	*uParam0 = unk_0x364B87C5C64BD100(iParam6, uParam1, Param2, fParam5, 0, 0);
}

void func_268(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(*uParam0, 0))
		{
			unk_0x503DF1366BC3493D(*uParam0, 0, 1);
		}
		if (!unk_0x90D1FDC9D31B7BE1(*uParam0))
		{
			unk_0x337F2213526139E0(*uParam0, 1, 0);
		}
		unk_0x63C116C2153FAA3C(uParam0);
	}
}

int func_269(var uParam0)
{
	int iVar0[7];
	int iVar8;
	var uVar9;
	
	iVar0[0] = joaat("u_m_m_willyfist");
	iVar0[1] = joaat("a_f_y_bevhills_03");
	iVar0[2] = joaat("a_f_y_bevhills_03");
	iVar0[3] = joaat("a_f_y_bevhills_03");
	iVar0[4] = joaat("a_m_y_vinewood_04");
	iVar0[5] = joaat("a_m_y_gay_01");
	iVar0[6] = joaat("gauntlet");
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -565.5146f, 269.6139f, 81.02081f };
			uParam0->f_17[1 /*3*/] = { -562.2337f, 306.5382f, 94.13258f };
			uParam0->f_24 = 30f;
			uParam0->f_27 = 1;
			func_270(4, 0);
			func_310(" SetupScene_NIGEL_1A - SET_INTERIOR_CAPPED(INTERIOR_V_ROCKCLUB, FALSE)	");
			uParam0->f_48 = "rcmnigel1aig_1";
			uParam0->f_59 = -1;
			func_256(38, 1);
			uVar9 = unk_0x0E40E816537BFB87(-555.5934f, 285.7738f, 81.1763f, "v_rockclub");
			if (unk_0xB79050CDE709F080(uVar9))
			{
				unk_0x80977EE9734C826D(iVar9);
			}
			iVar8 = 0;
			while (iVar8 <= (iVar0 - 1))
			{
				unk_0x9016574B77A748EE(iVar0[iVar8]);
				iVar8++;
			}
			unk_0x831CD0FBFB26EC7E(uParam0->f_48);
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_253(&iVar0) || !unk_0x028356968FDD2DF2(uParam0->f_48))
			{
				return 0;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			func_267(&(uParam0->f_28[0]), iVar0[0], -552.66f, 287.75f, 82.18f, 123.75f, 26);
			func_267(&(uParam0->f_28[1]), iVar0[1], -553.46f, 287.34f, 82.18f, -65.86f, 26);
			if (func_122(uParam0->f_28[1]))
			{
				unk_0x44EB7E24C5D75087(uParam0->f_28[1], 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[1], 0, 1, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[1], 2, 0, 2, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[1], 3, 1, 2, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[1], 4, 0, 1, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[1], 7, 0, 1, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[1], 8, 1, 0, 0);
			}
			uParam0->f_59 = unk_0x3C3438327FFEB224(-552.18f, 285.476f, 81.976f, 0f, 0f, 79.5f, 2);
			unk_0xAB888668498FCC04(uParam0->f_59, 1);
			unk_0x07BA5921A1FAAFFF(uParam0->f_59, 0);
			if (func_122(uParam0->f_28[0]))
			{
				unk_0x4DD2EB945B4192FD(uParam0->f_28[0], uParam0->f_59, uParam0->f_48, "BASE_02_Willie", 1000f, -8f, 17, 0, 1148846080, 0);
			}
			if (func_122(uParam0->f_28[1]))
			{
				unk_0x4DD2EB945B4192FD(uParam0->f_28[1], uParam0->f_59, uParam0->f_48, "BASE_02_GIRL", 1000f, -8f, 17, 0, 1148846080, 0);
			}
			func_267(&(uParam0->f_28[2]), iVar0[2], -559.94f, 285.99f, 85.38f, -59.06f, 26);
			func_267(&(uParam0->f_28[3]), iVar0[3], -558.87f, 289.79f, 85.38f, 162.44f, 26);
			func_267(&(uParam0->f_28[4]), iVar0[4], -559f, 286.09f, 85.38f, 65.92f, 26);
			func_267(&(uParam0->f_28[5]), iVar0[5], -558.84f, 288.97f, 85.38f, -7.72f, 26);
			if (func_122(uParam0->f_28[2]))
			{
				unk_0xDEA702F2138E0B35(uParam0->f_28[2], 0, 0, 1, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[2], 2, 1, 2, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[2], 3, 1, 1, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[2], 4, 1, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[2], 7, 1, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[2], 8, 1, 0, 0);
			}
			if (func_122(uParam0->f_28[3]))
			{
				unk_0xDEA702F2138E0B35(uParam0->f_28[3], 0, 1, 1, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[3], 2, 1, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[3], 3, 1, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[3], 4, 1, 1, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[3], 7, 1, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[3], 8, 1, 0, 0);
			}
			if (func_122(uParam0->f_28[4]))
			{
				unk_0xDEA702F2138E0B35(uParam0->f_28[4], 0, 0, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[4], 2, 0, 2, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[4], 3, 0, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[4], 4, 0, 1, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[4], 8, 0, 0, 0);
			}
			if (func_122(uParam0->f_28[5]))
			{
				unk_0xDEA702F2138E0B35(uParam0->f_28[5], 0, 1, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[5], 2, 2, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[5], 3, 0, 3, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[5], 4, 1, 0, 0);
				unk_0xDEA702F2138E0B35(uParam0->f_28[5], 8, 0, 2, 0);
			}
			func_247(&(uParam0->f_35[0]), iVar0[6], -553.55f, 308.61f, 82.81f, 202.78f);
			if (func_123(uParam0->f_35[0]))
			{
				unk_0xB447DBA72E281B1B(uParam0->f_35[0], 1);
				unk_0xA2B45B1D3EE42178(uParam0->f_35[0], 1);
				unk_0x7B1E589707CC388A(uParam0->f_35[0], 0);
			}
			iVar8 = 0;
			while (iVar8 <= (iVar0 - 1))
			{
				unk_0x419C9117019F2E5A(iVar0[iVar8]);
				iVar8++;
			}
			unk_0x334F1DD67B2EC86A(uParam0->f_48);
			return 1;
			break;
	}
	return 0;
}

void func_270(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_274(iParam0, &iVar1);
	if (!unk_0x9D39145AD645E383("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0x86F61DB549CCD597(iVar1))
		{
			if (unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == iVar1)
			{
				func_273(iParam0, 1);
				return;
			}
			unk_0xDA6B81788C10A6E2(iVar1, 1);
		}
		else if (!bParam1 && unk_0x86F61DB549CCD597(iVar1))
		{
			if (func_271(iParam0))
			{
				func_273(iParam0, 0);
			}
			unk_0xDA6B81788C10A6E2(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_271(iParam0))
			{
				func_273(iParam0, 0);
			}
		}
	}
}

int func_271(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_272(iParam0) };
	if (Var0.f_1 != -1 && unk_0xB03A1684359C50A1(Global_31630[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_272(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3.f_0 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 6)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3.f_0 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_273(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_272(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_31630[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_31630[Var0.f_1]), Var0.f_0);
	}
}

var func_274(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_275(iParam0) };
	*iParam1 = unk_0x0E40E816537BFB87(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_275(int iParam0)
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_276(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_276(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_276(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_276(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_276(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_276(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_276(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049531[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_276(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_276(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_276(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_276(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_276(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_276(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_276(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_276(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_276(43, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var5 = { func_276(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_276(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_276(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_276(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_276(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_276(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_276(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_276(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_276(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_276(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_276(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_276(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_276(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_276(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_276(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_276(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_276(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_276(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_276(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_276(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_276(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_276(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_276(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_276(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_276(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_276(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_276(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_276(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_276(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_276(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_276(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_276(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_276(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_276(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_276(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_276(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_276(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_276(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_276(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_276(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_276(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_276(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_276(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_276(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_276(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_276(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_276(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_276(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_276(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_276(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_276(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_276(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_276(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_276(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_276(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_277(var uParam0)
{
	int iVar0[3];
	int iVar4;
	var uVar5;
	bool bVar6;
	
	iVar0[0] = uLocal_92;
	iVar0[1] = uLocal_93;
	iVar0[2] = iLocal_95;
	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "NMT_1_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				unk_0x9016574B77A748EE(iVar0[iVar4]);
				iVar4++;
			}
			func_254(&(uParam0->f_48), "rcmnigel1", "base_nigel", "base_nigel");
			func_254(&uLocal_96, "rcmnigel1", "base_mrs_thornhill", "base_mrs_thornhill");
			iLocal_91 = 1;
			break;
		
		case 1:
			if (!func_253(&iVar0) || !func_252(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_91 = 2;
			break;
		
		case 2:
			bVar6 = true;
			if (!func_249(&(uParam0->f_28[0]), 64, -1100.5f, 789.8f, 164.34f, 1.82f, "RC: NIGEL", 1))
			{
				bVar6 = false;
			}
			if (!func_249(&(uParam0->f_28[1]), 63, -1099.35f, 789.15f, 164.47f, 0f, "RC: MRS THORNHILL", 1))
			{
				bVar6 = false;
			}
			if (!unk_0x31F12808DC47A9E5(uParam0->f_35[0]))
			{
				func_247(&(uParam0->f_35[0]), iLocal_95, -1077.959f, 793.9361f, 164.6374f, 172.8563f);
				if (func_123(uParam0->f_35[0]))
				{
					unk_0x62270578972B4C56(uParam0->f_35[0], 65, 0);
					unk_0x215DD08C065C3A14(uParam0->f_35[0], 5, 0);
					unk_0x1C4B08C81FA52071(uParam0->f_35[0], "28BNT310");
					unk_0x98347A9DB184A9E3(uParam0->f_35[0], 0);
					unk_0xA2B45B1D3EE42178(uParam0->f_35[0], 10);
					unk_0xA49981D53ECFC36D(uParam0->f_35[0], 0);
					unk_0xDFE3E6C2A4635F0A(uParam0->f_35[0], 0);
					unk_0xF9A57C919E2B4735(uParam0->f_35[0], 0);
				}
			}
			if (bVar6)
			{
				iLocal_91 = 3;
			}
			break;
		
		case 3:
			if (func_123(uParam0->f_28[0]) && func_123(uParam0->f_28[1]))
			{
				unk_0x40E2910BAF39B1C7(uParam0->f_28[0], 1);
				unk_0x40E2910BAF39B1C7(uParam0->f_28[1], 1);
				uVar5 = unk_0x3C3438327FFEB224(-1100.558f, 789.8862f, 163.3285f, 0f, 0f, 0f, 2);
				unk_0x4DD2EB945B4192FD(uParam0->f_28[0], uVar5, "rcmnigel1", "base_nigel", 8f, -8f, 0, 0, 1148846080, 0);
				unk_0x4DD2EB945B4192FD(uParam0->f_28[1], uVar5, "rcmnigel1", "base_mrs_thornhill", 8f, -8f, 0, 0, 1148846080, 0);
			}
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				unk_0x419C9117019F2E5A(iVar0[iVar4]);
				iVar4++;
			}
			func_256(37, 1);
			return 1;
			break;
	}
	return 0;
}

int func_278(int iParam0)
{
	struct<27> Var0;
	int iVar32;
	
	func_106(iParam0, &Var0);
	iVar32 = func_101();
	if (iVar32 == 145)
	{
		return 1;
	}
	else if ((iVar32 != 1 && iVar32 != 0) && iVar32 != 2)
	{
		return 1;
	}
	if (!unk_0xB03A1684359C50A1(Var0.f_26, iVar32))
	{
		return 1;
	}
	return 0;
}

int func_279(int iParam0)
{
	char* sVar0;
	
	if (Global_70852)
	{
		func_310("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_104551.f_9055 && !func_104(1))
	{
		func_310("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_280(iParam0))
	{
		Global_103638[iParam0 /*10*/].f_1 = 1;
		func_310("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_92829.f_11 == 6)
	{
		if (Global_92829 < 9)
		{
			func_106(iParam0, &sVar0);
			if (unk_0x9D39145AD645E383(&(Global_92829.f_3), sVar0))
			{
				func_310("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("candidate_controller")) == 0)
	{
		Global_103638[iParam0 /*10*/].f_1 = 1;
		func_310("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_280(int iParam0)
{
	var uVar0;
	
	func_106(iParam0, &uVar0);
	if (!func_156(4))
	{
		if (func_241(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_240() && !func_239())
	{
		return 0;
	}
	if (func_286(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_159();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_243(iParam0))
	{
		if (!func_285(iParam0))
		{
			return 0;
		}
		if (!func_284(iParam0))
		{
			return 0;
		}
		if (func_283(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_281(5))
		{
			Global_103638[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_103638[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_281(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_92881.f_313 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_281(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		func_282(iParam0, &sVar1);
		iVar9 = unk_0x0E40E816537BFB87(Global_88012[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_92881.f_313 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_282(int iParam0, char* sParam1)
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
			if (unk_0x055A9BA923455525("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0x055A9BA923455525("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0x055A9BA923455525("TrevorsTrailerTrash"))
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
	return !unk_0x9D39145AD645E383(sParam1, "");
}

bool func_283(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 3);
}

bool func_284(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 2);
}

bool func_285(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 0);
}

int func_286(int iParam0)
{
	if (func_238(iParam0))
	{
		return 0;
	}
	else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_287()
{
	func_310("Running end routines.");
	Global_104269 = (Global_104269 - 1);
}

int func_288(int iParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_289((*iParam0)[0], Param2, fParam5, iParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_289((*iParam0)[iVar0], Param2, fParam5, iParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_310("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_289(int iParam0, struct<3> Param1, float fParam4, var uParam5)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_106(iParam0, &Var1);
	if (func_290(Var1.f_6, Param1, fParam4, 0))
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 0))
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_243(iParam0))
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

int func_290(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x36E1A96E1D63ED91((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_291(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	
	if (*iParam0 == 43)
	{
		func_268(&(iParam0->f_28[1]));
	}
	if (unk_0xE769D9B5158D0F11(uLocal_109))
	{
		unk_0x40D517D991458154(&uLocal_109);
	}
	if (bParam2)
	{
		func_310("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		if (*iParam0 == 38)
		{
			func_270(4, 1);
			func_308(iParam0);
			func_310(" Script_Cleanup - SET_INTERIOR_CAPPED(INTERIOR_V_ROCKCLUB, TRUE)");
		}
		else if (*iParam0 == 39)
		{
			func_306(iParam0);
		}
		func_296(iParam0, 0, 0, 0);
	}
	func_256(*iParam0, 0);
	switch (*iParam0)
	{
		case 43:
			if (iParam1->f_1 != -1)
			{
				unk_0x906C6BAB7E9BD0FF(iParam1->f_1);
			}
			break;
	}
	func_295(&(iParam0->f_48));
	if (iLocal_108 != -1)
	{
		func_310("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_208(&iLocal_108);
	}
	switch (*iParam0)
	{
		case 37:
			sVar0 = "NIG1A_AMB";
			break;
	}
	func_292(sVar0);
	if (bParam2)
	{
		func_209(*iParam0);
	}
	func_287();
	func_310("SCRIPT TERMINATED");
	unk_0x810C5D6462DD69E6();
}

void func_292(char* sParam0)
{
	if (!unk_0xFAFFA408239A026B(sParam0))
	{
		if (func_194(sParam0))
		{
			func_293();
		}
	}
}

void func_293()
{
	Global_14622 = 0;
	func_294();
}

void func_294()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

int func_295(var uParam0)
{
	if (func_199(uParam0))
	{
		if (unk_0x028356968FDD2DF2(*uParam0))
		{
			unk_0x334F1DD67B2EC86A(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_296(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_303(uParam0, iParam1);
	func_300(uParam0, bParam2);
	func_297(uParam0, bParam3);
}

void func_297(var uParam0, bool bParam1)
{
	func_298(&(uParam0->f_41), bParam1);
}

void func_298(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_212(uParam0[iVar0]);
		}
		else
		{
			func_299(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_299(var uParam0, bool bParam1)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (unk_0xA3D5B4AC814DFA69(*uParam0))
		{
			unk_0x964B3F361C3DBDF4(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xF0862FA354B164C4(uParam0);
		}
		else
		{
			unk_0xFC528B61F5E1D89B(*uParam0);
		}
	}
}

void func_300(var uParam0, bool bParam1)
{
	func_301(&(uParam0->f_35), bParam1);
}

void func_301(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_248(uParam0[iVar0]);
		}
		else
		{
			func_302(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_302(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		unk_0x74C2FE037DFC8B4A(*uParam0, 0);
		if (unk_0x90D1FDC9D31B7BE1(*uParam0) && unk_0xE54DCC6B21FDC95A(*uParam0, 1))
		{
			unk_0x4F5FF3F3FDCAB15D(uParam0);
		}
	}
}

void func_303(var uParam0, int iParam1)
{
	func_304(&(uParam0->f_28), iParam1);
}

void func_304(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_268(uParam0[iVar0]);
		}
		else
		{
			func_305(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_305(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (!unk_0x0FAE113CE72ED842(*uParam0))
		{
			unk_0x503DF1366BC3493D(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x1436BC29BF45FBAE(*uParam0);
			}
			unk_0x10F31830C95ED2E5(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x40E2910BAF39B1C7(*uParam0, 0);
			}
		}
		unk_0xDBE64C5761554FBF(uParam0);
	}
}

void func_306(var uParam0)
{
	if (unk_0xCF0FA6AB02EA68F7(uParam0->f_59))
	{
		if (func_122(uParam0->f_28[1]))
		{
			if (func_307(uParam0->f_28[1], 1785177548))
			{
				unk_0x267F7A2DFDFFB077(uParam0->f_28[1]);
			}
			unk_0xF392BEDFD9CD33F7(uParam0->f_28[1], -1000f, 1);
		}
	}
}

int func_307(int iParam0, int iParam1)
{
	if (func_122(uParam0))
	{
		if (unk_0x2BBAA45ECDE3DAE2(uParam0, iParam1) == 1 || unk_0x2BBAA45ECDE3DAE2(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_308(var uParam0)
{
	if (unk_0xCF0FA6AB02EA68F7(uParam0->f_59))
	{
		if (func_122(uParam0->f_28[0]))
		{
			if (func_307(uParam0->f_28[0], 1785177548))
			{
				unk_0x267F7A2DFDFFB077(uParam0->f_28[0]);
			}
			unk_0xF392BEDFD9CD33F7(uParam0->f_28[0], -1000f, 1);
		}
		if (func_122(uParam0->f_28[1]))
		{
			if (func_307(uParam0->f_28[1], 1785177548))
			{
				unk_0x267F7A2DFDFFB077(uParam0->f_28[1]);
			}
			unk_0xF392BEDFD9CD33F7(uParam0->f_28[1], -1000f, 1);
		}
	}
}

void func_309(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35821)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35820 = 0;
	Global_35822 = 0;
	Global_35859 = 15;
	Global_55898 = 0;
	Global_55899 = 0;
}

void func_310(char* sParam0)
{
	if (!unk_0xFAFFA408239A026B(sParam0))
	{
	}
}

void func_311(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_312()
{
	func_310("Running start routines.");
	Global_104269++;
}

int func_313(int iParam0)
{
	if (!func_36(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

