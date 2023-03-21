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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	var uLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_105 = 0f;
	struct<3> Local_106 = { 0, 0, 0 } ;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	float fLocal_113 = 0f;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	struct<270> Local_127 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	struct<11> Local_397[32];
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	int iLocal_759 = 0;
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	struct<8> Local_769[10];
	var uLocal_850[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	int iLocal_864 = 0;
	var uLocal_865 = 0;
	int iLocal_866 = 0;
	char* sLocal_867 = NULL;
	var uLocal_868 = 16;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	int iLocal_1034 = 0;
	int iLocal_1035 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_93 = ((0.05f + 0.275f) - 0.01f);
	fLocal_96 = -0.05f;
	fLocal_97 = 0.92f;
	fLocal_98 = 1.94f;
	fLocal_99 = 2.99f;
	fLocal_100 = 3.7f;
	Local_102 = { -0.4f, 0.96f, 0.85f };
	fLocal_105 = 0.95f;
	Local_106 = { 0f, 2f, 2.5f };
	fLocal_109 = 1.75f;
	Local_110 = { 0f, 0f, 120f };
	fLocal_113 = 35.5f;
	iLocal_753 = -2;
	iLocal_754 = -1;
	sLocal_867 = "";
	if (unk_0x591AF4C50B46E014() && func_1072(unk_0x0FFED3E94261A832(), 0, 1))
	{
		func_1049(ScriptParam_0);
	}
	else
	{
		func_993();
	}
	while (true)
	{
		func_992();
		if (func_984())
		{
			func_993();
		}
		Global_1773254.f_2 = Local_127.f_267;
		Global_1773254.f_3 = Local_127.f_268;
		switch (func_983(unk_0x88641E5BC172153A()))
		{
			case 0:
				if (unk_0x741298E7009A20C9("ALARM_BELL_02", 0, -1))
				{
					if (func_982() == 1)
					{
						if (func_981())
						{
							func_980();
							if (func_979())
							{
								func_962(169, 1, func_977(), 1);
								func_961();
								func_959();
							}
							else
							{
								func_962(169, 0, func_977(), 1);
							}
							Local_397[unk_0x88641E5BC172153A() /*11*/] = 1;
						}
					}
					else if (func_982() == 4)
					{
						Local_397[unk_0x88641E5BC172153A() /*11*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_956(1))
				{
					Local_397[unk_0x88641E5BC172153A() /*11*/] = 2;
				}
				if (func_982() == 1)
				{
					func_947();
					func_874();
					func_393();
					func_384();
					if (!func_383())
					{
						if (func_979() || func_381())
						{
							func_235(&(Global_1341327.f_529), &Global_1341327, 26, &(Global_1341327.f_1), &(Global_1341327.f_112), -1, 0);
						}
					}
					else
					{
						func_230();
					}
					func_179();
					func_178();
				}
				else if (func_982() == 4)
				{
					Local_397[unk_0x88641E5BC172153A() /*11*/] = 3;
				}
				func_172();
				break;
			
			case 3:
				func_171(&(Local_127.f_224));
				if (func_170(&(Local_127.f_224)))
				{
					Local_397[unk_0x88641E5BC172153A() /*11*/] = 4;
				}
				break;
			
			case 2:
				Local_397[unk_0x88641E5BC172153A() /*11*/] = 4;
			
			case 4:
				func_993();
				break;
		}
		if (unk_0x62E688B72E3C57B0())
		{
			switch (func_982())
			{
				case 0:
					if (func_977() > -1)
					{
						func_168();
						func_166();
						func_165();
						func_162();
						if (func_43())
						{
							unk_0xABE13CB17EB2BE02(&(Local_127.f_267), &(Local_127.f_268));
							func_37();
							Local_127.f_0 = 1;
							Local_127.f_218 = unk_0x88641E5BC172153A();
							Local_127.f_219 = unk_0x0FFED3E94261A832();
							func_962(169, 1, func_977(), 1);
						}
					}
					break;
				
				case 1:
					func_29();
					func_162();
					func_22();
					func_4();
					if (func_2())
					{
						Local_127.f_0 = 4;
					}
					else if (func_1())
					{
						Local_127.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2497344.f_4828.f_22)
	{
		Global_2497344.f_4828.f_22 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_127.f_214)
	{
		case 0:
			func_19();
			func_17();
			if (func_383())
			{
				func_15();
				func_5();
			}
			if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 1))
			{
				Local_127.f_214 = 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 3))
			{
				Local_127.f_214 = 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 4))
			{
				Local_127.f_214 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	int iVar0;
	int iVar1;
	
	if (Local_127.f_215 > -1)
	{
		return;
	}
	if (!func_12())
	{
		return;
	}
	if (!func_11(&(Local_127.f_228)))
	{
		if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 6))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 11))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 7))
				{
					func_10(&(Local_127.f_228), 0, 0);
				}
			}
		}
	}
	if (func_11(&(Local_127.f_228)))
	{
		if (Local_127.f_222 > 0)
		{
			if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 7))
			{
				func_9(&(Local_127.f_228));
				Local_127.f_222 = 255;
			}
			else
			{
				iVar0 = func_8();
				iVar1 = func_7();
				if (func_6(&(Local_127.f_228), iVar0, 0))
				{
					func_9(&(Local_127.f_228));
					Local_127.f_222 = (Local_127.f_222 - iVar1);
					if (Local_127.f_222 < 0)
					{
						Local_127.f_222 = 0;
					}
				}
			}
		}
		if (Local_127.f_222 <= 0)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 9))
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 9);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (unk_0x591AF4C50B46E014() && !bParam2)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	return 10;
}

int func_8()
{
	return 2000;
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x591AF4C50B46E014() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x11ABC381A58DD5AB();
			}
			else
			{
				*uParam0 = unk_0xFD0C6B49DA615791();
			}
		}
		else
		{
			*uParam0 = unk_0x3732B96D7A1859B4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_11(var uParam0)
{
	return uParam0->f_1;
}

int func_12()
{
	int iVar0;
	
	if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_127.f_2[0 /*10*/].f_2))
		{
			iVar0 = unk_0x8F8E5C33266ED978(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), -1, 0);
			if (iVar0 != 0)
			{
				if (!unk_0x769F0F6444C1ABE0(iVar0))
				{
					if (!unk_0xDB61DD81432BD145(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_13(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return !func_14(unk_0xECBE9D2902B2B964(uParam0));
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x7FAC45D56235AB39(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_15()
{
	if (!func_383())
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 6))
	{
		if (!func_11(&(Local_127.f_234)))
		{
			func_10(&(Local_127.f_234), 0, 0);
		}
		if (func_6(&(Local_127.f_234), func_16(), 0))
		{
			unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 6);
		}
	}
}

int func_16()
{
	return 60000;
}

void func_17()
{
	if (!func_383())
	{
		return;
	}
	if (!func_11(&(Local_127.f_238)))
	{
		func_10(&(Local_127.f_238), 0, 0);
	}
	else if (func_6(&(Local_127.f_238), func_18(), 0))
	{
		unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 15);
	}
}

int func_18()
{
	return 1800000;
}

void func_19()
{
	if (func_383())
	{
		return;
	}
	if (!func_11(&(Local_127.f_236)))
	{
		func_10(&(Local_127.f_236), 0, 0);
		return;
	}
	else if (!func_6(&(Local_127.f_236), func_21(), 0))
	{
		return;
	}
	if (!func_11(&(Local_127.f_226)))
	{
		func_10(&(Local_127.f_226), 0, 0);
	}
	else if (func_6(&(Local_127.f_226), func_20(), 0))
	{
		unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 3);
	}
}

int func_20()
{
	return Global_262145.f_14691;
}

int func_21()
{
	return Local_127.f_223;
}

void func_22()
{
	int iVar0;
	int iVar1;
	
	if (func_28())
	{
		return;
	}
	if (unk_0x62E688B72E3C57B0())
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			switch (Local_127.f_2[iVar1 /*10*/].f_9)
			{
				case 0:
					if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar1 /*10*/].f_1))
					{
						if (func_383())
						{
							Local_127.f_2[iVar1 /*10*/].f_9 = 8;
						}
						else
						{
							Local_127.f_2[iVar1 /*10*/].f_9 = 6;
						}
					}
					break;
				
				case 8:
					if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 6))
					{
						Local_127.f_2[iVar1 /*10*/].f_9 = 1;
					}
					else
					{
						func_25(iVar0, iVar1);
					}
					break;
				
				case 1:
					if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar1 /*10*/].f_1))
					{
						if (func_383())
						{
							func_25(iVar0, iVar1);
						}
					}
					break;
				
				case 2:
					break;
				
				case 3:
					if (func_383())
					{
						if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar1 /*10*/].f_1))
						{
							if (!func_24(Local_127.f_2[iVar1 /*10*/].f_1))
							{
								if (!unk_0xB1C4356ECEE878FE(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar1 /*10*/].f_1)))
								{
									Local_127.f_2[iVar1 /*10*/].f_9 = 7;
								}
							}
						}
					}
					break;
				
				case 5:
					break;
				
				case 4:
					break;
				
				case 6:
					break;
				
				case 7:
					func_23(iVar1);
					break;
			}
			iVar1++;
		}
	}
}

void func_23(int iParam0)
{
	if (func_383())
	{
		if (iParam0 == 1)
		{
			if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iParam0 /*10*/].f_1))
			{
				if (!func_24(Local_127.f_2[iParam0 /*10*/].f_1))
				{
					if (unk_0xB1C4356ECEE878FE(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1)))
					{
						if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_1))
						{
							if (func_24(Local_127.f_2[0 /*10*/].f_1))
							{
								Local_127.f_2[iParam0 /*10*/].f_9 = 3;
							}
						}
					}
				}
			}
		}
	}
}

int func_24(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return unk_0x769F0F6444C1ABE0(unk_0xC09E9E2B61AD04E7(uParam0));
	}
	return 1;
}

void func_25(int iParam0, int iParam1)
{
	if (!func_24(Local_127.f_2[iParam1 /*10*/].f_1))
	{
		if (unk_0xB1C4356ECEE878FE(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam1 /*10*/].f_1)))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_127.f_205, iParam1))
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_204), iParam1);
				iParam0 = unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_127.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_127.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_127.f_206, iParam1))
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_204), iParam1);
				iParam0 = unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_127.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_127.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_127.f_207, iParam1))
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_204), iParam1);
				iParam0 = unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_127.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_127.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (func_26())
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_204), iParam1);
				iParam0 = unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_127.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_127.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else
			{
				func_23(iParam1);
			}
		}
		else if (Local_127.f_2[iParam1 /*10*/].f_9 != 7)
		{
			Local_127.f_2[iParam1 /*10*/].f_9 = 7;
		}
	}
}

int func_26()
{
	if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_1))
	{
		if (func_24(Local_127.f_2[0 /*10*/].f_1))
		{
			return 1;
		}
	}
	if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[1 /*10*/].f_1))
	{
		if (func_24(Local_127.f_2[1 /*10*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (unk_0xC4A39E4229BD3ABE(*iParam0, 0))
	{
		if (unk_0x8F8E5C33266ED978(unk_0xCB705C0242571D84(*iParam0), -1, 0) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_28()
{
	return ((((((unk_0xAA4F14DA15DB0B51(Local_127.f_1, 1) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 3)) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 4)) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 5)) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 8)) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 9)) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 15));
}

void func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = -1;
	bVar3 = false;
	bVar4 = true;
	if (Local_127.f_0 != 4)
	{
		iLocal_752 = 0;
		while (iLocal_752 < unk_0x244673FE98A43CA3())
		{
			if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iLocal_752)))
			{
				iVar5 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iLocal_752));
				if (!func_34(iVar5, 0))
				{
					if (func_1072(iVar5, 1, 1))
					{
					}
					func_33(iLocal_752);
					func_32(iLocal_752);
					if (func_383())
					{
						if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 8))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_397[iLocal_752 /*11*/].f_1, 9))
							{
								unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 8);
							}
						}
						if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 6))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_397[iLocal_752 /*11*/].f_1, 7))
							{
								unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 6);
							}
						}
						if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 11))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_397[iLocal_752 /*11*/].f_1, 10))
							{
								unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 11);
							}
						}
						if (!unk_0xAA4F14DA15DB0B51(Local_127.f_217, iLocal_752))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_397[iLocal_752 /*11*/].f_1, 8))
							{
								unk_0xF6082E2ADA1C795B(&(Local_127.f_217), iLocal_752);
							}
						}
						else if (!unk_0xAA4F14DA15DB0B51(Local_397[iLocal_752 /*11*/].f_1, 8))
						{
							unk_0x507FE690B1271947(&(Local_127.f_217), iLocal_752);
						}
						if (iVar2 == -1)
						{
							if (unk_0xAA4F14DA15DB0B51(Local_397[iLocal_752 /*11*/].f_1, 3))
							{
								iVar2 = iLocal_752;
							}
						}
						if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 4))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_397[iLocal_752 /*11*/].f_1, 2))
							{
								unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 4);
								Local_127.f_221 = Local_127.f_216;
							}
						}
						if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 17))
						{
							if (unk_0xAA4F14DA15DB0B51(Local_397[iLocal_752 /*11*/].f_1, 15))
							{
								unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 17);
							}
						}
						if (bVar4)
						{
							if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 4))
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_397[iLocal_752 /*11*/].f_1, 14))
								{
									bVar4 = false;
								}
							}
							else
							{
								bVar4 = false;
							}
						}
					}
					else if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 13))
					{
						if (unk_0xAA4F14DA15DB0B51(Local_397[iLocal_752 /*11*/].f_1, 11))
						{
							unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 13);
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 2))
					{
						if (!bVar3)
						{
							if (func_28())
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_397[iLocal_752 /*11*/].f_1, 4))
								{
									bVar3 = true;
								}
							}
							else
							{
								bVar3 = true;
							}
						}
					}
					if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 16))
					{
						if (unk_0xAA4F14DA15DB0B51(Local_397[iLocal_752 /*11*/].f_1, 13))
						{
							unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 16);
						}
					}
				}
			}
			else if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 5))
			{
				if (Local_127.f_218 > -1)
				{
					if (iLocal_752 == Local_127.f_218)
					{
						unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 5);
					}
				}
			}
			iLocal_752++;
		}
		func_31();
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (unk_0xAA4F14DA15DB0B51(Local_127.f_209, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_127.f_213 != iVar0)
		{
			Local_127.f_213 = iVar0;
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 1))
		{
			if (iVar0 >= func_30())
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 1);
			}
		}
		if (func_383())
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 7))
			{
				if (Local_127.f_217 != 0)
				{
					unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 7);
				}
			}
			else if (Local_127.f_217 == 0)
			{
				unk_0x507FE690B1271947(&(Local_127.f_1), 7);
			}
			if (!func_28())
			{
				if (Local_127.f_215 != iVar2)
				{
					Local_127.f_215 = iVar2;
					if (Local_127.f_215 > -1)
					{
						uVar6 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(Local_127.f_215));
						Local_127.f_216 = uVar6;
					}
					else
					{
						Local_127.f_216 = -1;
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 18))
			{
				if (bVar4)
				{
					unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 18);
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 2))
		{
			if (!bVar3)
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 2);
			}
		}
	}
}

int func_30()
{
	switch (Local_127.f_197)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 8:
			return 6;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 20:
			return 8;
		
		case 7:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 21:
			return 10;
		
		default:
	}
	return 8;
}

void func_31()
{
	int iVar0;
	
	if (func_383())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar0 /*10*/].f_1))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_127.f_209, iVar0))
			{
				if (!func_11(&(Local_127.f_240[iVar0 /*2*/])))
				{
					if (func_24(Local_127.f_2[iVar0 /*10*/].f_1))
					{
						func_10(&(Local_127.f_240[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_127.f_240[iVar0 /*2*/]), 10000, 0))
				{
					unk_0xF6082E2ADA1C795B(&(Local_127.f_209), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_127.f_205, iVar0))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_397[iParam0 /*11*/].f_5, iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_205), iVar0);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_127.f_206, iVar0))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_397[iParam0 /*11*/].f_2, iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_206), iVar0);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_127.f_208, iVar0))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_397[iParam0 /*11*/].f_3, iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_208), iVar0);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_127.f_207, iVar0))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_397[iParam0 /*11*/].f_4, iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_207), iVar0);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_127.f_209, iVar0))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_397[iParam0 /*11*/].f_6, iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_209), iVar0);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_397[iParam0 /*11*/].f_7, iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_209), iVar0);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_397[iParam0 /*11*/].f_8, iVar0))
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_209), iVar0);
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	if (func_383())
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_127.f_210, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar0 /*10*/].f_2))
			{
				if (func_13(Local_127.f_2[iVar0 /*10*/].f_2))
				{
					unk_0xB463DE5FD1717E9D(unk_0xECBE9D2902B2B964(Local_127.f_2[iVar0 /*10*/].f_2), unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iParam0)), 1);
					unk_0xF6082E2ADA1C795B(&(Local_127.f_210), iParam0);
				}
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&(Local_127.f_210), iParam0);
			}
			iVar0++;
		}
	}
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
	}
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_36()
{
	return Global_1312735;
}

void func_37()
{
	struct<3> Var0;
	
	Var0 = { func_40() };
	if (!func_39(Var0))
	{
		func_38(&(Local_127.f_269), Var0);
	}
}

void func_38(var uParam0, struct<3> Param1)
{
	if (!unk_0xCE8A2E4F71221F00(*uParam0))
	{
		*uParam0 = unk_0x879AF2D36849FEBE(Param1 - Vector(25f, 25f, 25f), Param1 + Vector(25f, 25f, 25f), 1f, 0.25f, 1, 1);
	}
}

int func_39(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_40()
{
	return func_41(Local_127.f_197 + 1);
}

Vector3 func_41(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_42(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 58.3f, -2560.8f, 5.0046f };
			break;
		
		case 2:
			Var0 = { -1082.958f, -1254.855f, 4.4214f };
			break;
		
		case 3:
			Var0 = { 900.0288f, -1029.762f, 33.9714f };
			break;
		
		case 4:
			Var0 = { 247.7398f, -1950.657f, 22.0817f };
			break;
		
		case 5:
			Var0 = { -404.5349f, 189.8157f, 80.518f };
			break;
		
		case 6:
			Var0 = { -1048.123f, -2017.136f, 12.1616f };
			break;
		
		case 7:
			Var0 = { -1267.888f, -818.313f, 16.0992f };
			break;
		
		case 8:
			Var0 = { -879.1935f, -2731.856f, 12.8285f };
			break;
		
		case 9:
			Var0 = { 274.4458f, -3004f, 4.6994f };
			break;
		
		case 10:
			Var0 = { 1566.514f, -2137.776f, 76.6229f };
			break;
		
		case 11:
			Var0 = { -314.3864f, -2721.792f, 5.0003f };
			break;
		
		case 12:
			Var0 = { 497.1263f, -635.2617f, 23.8849f };
			break;
		
		case 13:
			Var0 = { -546.1532f, -1775.258f, 20.6843f };
			break;
		
		case 14:
			Var0 = { -307.6485f, -1364.914f, 30.2957f };
			break;
		
		case 15:
			Var0 = { 366.4851f, 333.3937f, 102.4653f };
			break;
		
		case 16:
			Var0 = { 921.407f, -1556.423f, 29.7756f };
			break;
		
		case 17:
			Var0 = { 746.1452f, -882.8884f, 24.0639f };
			break;
		
		case 18:
			Var0 = { 1042.462f, -2177.798f, 30.4457f };
			break;
		
		case 19:
			Var0 = { 1013.842f, -2514.939f, 27.3049f };
			break;
		
		case 20:
			Var0 = { -272.0028f, 193.3204f, 84.5697f };
			break;
		
		case 21:
			Var0 = { 549.6728f, -1929.794f, 23.8145f };
			break;
		
		case 22:
			Var0 = { 126.5327f, -2200.172f, 5.0333f };
			break;
	}
	return Var0;
}

int func_42(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_43()
{
	int iVar0;
	
	if (func_383())
	{
		func_64();
		if (!func_63())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < func_30())
		{
			func_44(iVar0);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < func_30())
		{
			if (!unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar0 /*10*/].f_1))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_44(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	
	iVar0 = func_62();
	fVar5 = func_61();
	if (!unk_0xD0BCF9877CD72A3F(Local_127.f_2[iParam0 /*10*/].f_1))
	{
		if (unk_0xF157AC7C4936A07C(1))
		{
			if (func_60(iVar0))
			{
				if (func_59(Local_127.f_2[iParam0 /*10*/].f_5, 0f, 0f, 0f, 0))
				{
					if (func_47(iParam0, &Var1, &uVar4))
					{
						Local_127.f_2[iParam0 /*10*/].f_5 = { Var1 };
						Local_127.f_2[iParam0 /*10*/].f_8 = uVar4;
					}
				}
				else if (func_46(&(Local_127.f_2[iParam0 /*10*/].f_1), 22, iVar0, Local_127.f_2[iParam0 /*10*/].f_5, Local_127.f_2[iParam0 /*10*/].f_8, 1, 1, 1))
				{
					unk_0x30F81670C721F076(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), Global_1574731);
					unk_0xB5483E79C31DA808(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 1);
					if ((iParam0 % 2) == 0)
					{
						iVar6 = unk_0xE86A53C202B21FAB(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1));
						fVar7 = unk_0xBBDA792448DB5A89(iVar6);
						if (fVar5 != 0f)
						{
							fVar7 = (fVar7 * fVar5);
						}
						iVar6 = unk_0xF2DB717A73826179(fVar7);
						unk_0x4EA5B5526A4651E9(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), iVar6);
						unk_0x67E5DE1657F60AC6(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), iVar6);
						unk_0xF284B601CA7EB767(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 100);
						unk_0x0013D519C885E60B(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), joaat("weapon_assaultrifle"), 9999999, 0, 1);
					}
					else
					{
						unk_0x0013D519C885E60B(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), joaat("weapon_assaultrifle"), 9999999, 0, 1);
					}
					unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 281, 1);
					unk_0xB5AEEE6CCF634ECA(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 42, 1);
					unk_0xADC658162F2B08CD(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 43, 1);
					unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 44, 1);
					unk_0x0E05C8E294DD31A1(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 1);
					if (func_45(iParam0))
					{
						unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 0, 0);
					}
					unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 146, 1);
					unk_0xE9BA7ED0FD3FF42D(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), Local_127.f_2[iParam0 /*10*/].f_5, 7f, 0, 0);
					unk_0x015B50BC21C88C8C(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iParam0 /*10*/].f_1), 1);
					unk_0xF6082E2ADA1C795B(&(Local_127.f_203), iParam0);
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0)
{
	switch (Local_127.f_197)
	{
		case 1:
			if (iParam0 == 0 || iParam0 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_46(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0xF157AC7C4936A07C(1))
	{
		return 0;
	}
	iVar0 = unk_0xD00B79C0E206E082(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xDF7D91421097E934(iVar0);
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		unk_0xE77EEA92586CF2E8(iVar0, iParam9);
		if (unk_0x84AEB9C70AC446A5(iVar0))
		{
			if (bParam7)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_47(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if (!func_59(Local_127.f_103[iVar0 /*5*/], 0f, 0f, 0f, 0))
	{
		if (!Local_127.f_103[iVar0 /*5*/].f_4)
		{
			if (func_48(Local_127.f_103[iVar0 /*5*/], 1f, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam1 = { Local_127.f_103[iVar0 /*5*/] };
				*uParam2 = Local_127.f_103[iVar0 /*5*/].f_3;
				Local_127.f_103[iVar0 /*5*/].f_4 = 1;
				return 1;
			}
			else
			{
				if (unk_0xB6FB1ADA41270763(Local_127.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				else if (unk_0x2F88ECCEDDE3F341(Local_127.f_103[iVar0 /*5*/], Local_127.f_103[iVar0 /*5*/].f_1, (Local_127.f_103[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0x2F88ECCEDDE3F341(Local_127.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!unk_0xAA4F14DA15DB0B51(Local_127.f_212, iVar0))
					{
						unk_0x333EF04F1A5ADEB5(Local_127.f_103[iVar0 /*5*/], 5f, 1, 0, 0, 1);
						unk_0xF6082E2ADA1C795B(&(Local_127.f_212), iVar0);
					}
				}
			}
		}
	}
	return 0;
}

int func_48(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404996.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xB6FB1ADA41270763(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x2F88ECCEDDE3F341(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x2F88ECCEDDE3F341(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x1EC399095E4E3649(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (bParam13)
	{
		if (unk_0x9B4C386906F18D2A(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (fParam14 > 0f)
	{
		if (func_52(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_49(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404996.f_2++;
	return 1;
}

int func_49(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_1072(unk_0x0FFED3E94261A832(), 1, 1))
		{
			if (!unk_0xF4EE9D6C8E60AE22())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4A2E6F541CD8C36E(func_51(unk_0x0FFED3E94261A832()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x14CEA5D3B9541B99(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1072(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0FFED3E94261A832()))
				{
					if ((func_50(iVar1) || !bParam10) && !Global_2422215[iVar1 /*387*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x220AE8028FACE96A(iVar1) != unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))) || unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x4A2E6F541CD8C36E(func_51(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x220AE8028FACE96A(iVar1) != iParam8 || unk_0x220AE8028FACE96A(iVar1) == -1)
						{
							if (unk_0x4A2E6F541CD8C36E(func_51(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_50(int iParam0)
{
	if (unk_0xE64E8162575E0B82(unk_0x1E199569E0295838(iParam0)) || Global_2422215[iParam0 /*387*/].f_254)
	{
		return 1;
	}
	return 0;
}

Vector3 func_51(int iParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iParam0), 0);
}

int func_52(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0FFED3E94261A832() != iVar1) || iParam8 == 0)
		{
			if (func_1072(iVar1, bParam4, bParam5))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
				{
					if (!bParam7 || (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) != unk_0x220AE8028FACE96A(iVar1))) || unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
						{
							if (((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && uParam9) && bParam6) && func_53(iVar1))
							{
							}
							else if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
							{
								if (unk_0x4A2E6F541CD8C36E(func_51(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_53(int iParam0)
{
	if (func_58(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	Global_2484572 = { func_57(iParam0) };
	if (unk_0xC869A9FE1FE47589(&Global_2484572))
	{
		return 1;
	}
	if (func_54(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_56(iParam0);
	if (!iVar0 == func_55())
	{
		if (iVar0 == func_56(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_55()
{
	return -1;
}

int func_56(int iParam0)
{
	if (iParam0 != func_55())
	{
		return Global_1622795[iParam0 /*431*/].f_11;
	}
	return func_55();
}

struct<13> func_57(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

int func_58(int iParam0, int iParam1)
{
	if (unk_0x591BB87E287F24DC())
	{
		Global_2484572 = { func_57(iParam0) };
		Global_2484585 = { func_57(iParam1) };
		if (unk_0x3BE1A7ECC62DB032(&Global_2484572))
		{
			if (unk_0x3BE1A7ECC62DB032(&Global_2484585))
			{
				unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572);
				unk_0x78823C36BAC4791B(&Global_2484537, 35, &Global_2484585);
				if (Global_2484502 == Global_2484537)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_59(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_60(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x0F39DF6675B2333E(iParam0);
	return unk_0xA1FC9D7AEA164881(iParam0);
}

float func_61()
{
	return 2f;
}

int func_62()
{
	int iVar0;
	
	switch (Local_127.f_195)
	{
		case 0:
			iVar0 = joaat("g_m_m_armgoon_01");
			break;
		
		case 1:
			iVar0 = joaat("g_m_m_mexboss_01");
			break;
		
		case 2:
			iVar0 = joaat("g_m_y_korean_02");
			break;
	}
	return iVar0;
}

int func_63()
{
	if (!unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
	{
		return 0;
	}
	if (!unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_1))
	{
		return 0;
	}
	if (!unk_0xD0BCF9877CD72A3F(Local_127.f_2[1 /*10*/].f_1))
	{
		return 0;
	}
	return 1;
}

int func_64()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	struct<25> Var6;
	struct<3> Var32;
	
	iVar0 = func_161();
	iVar1 = func_62();
	if (!unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
	{
		if (unk_0x0EFB343481EA3E51(1))
		{
			if (func_60(iVar0))
			{
				if (!func_59(Local_127.f_262, 0f, 0f, 0f, 0))
				{
					Var2 = { Local_127.f_262 };
					uVar5 = Local_127.f_265;
					if (!unk_0xAA4F14DA15DB0B51(Local_127.f_211, 0))
					{
						unk_0x333EF04F1A5ADEB5(Var2, 5f, 1, 0, 0, 1);
						unk_0xF6082E2ADA1C795B(&(Local_127.f_211), 0);
					}
					if (func_160(&(Local_127.f_2[0 /*10*/].f_2), iVar0, Var2, uVar5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0x7BD22AA4A34AA06D(unk_0xC09E9E2B61AD04E7(Local_127.f_2[0 /*10*/].f_2), 1);
						func_159(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2));
						unk_0x11C8DD1ABA391722(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 0);
						unk_0xD3E5E6DE4F3CED03(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 0, 0);
						unk_0x9897DB908AE3BCFF(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 1);
						unk_0x5ADC55733B227FF7(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 0);
						unk_0x3EACD080B21FFD9A(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 1);
						unk_0x0D0D15C7245AE95A(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 0.08f);
						unk_0x67E5DE1657F60AC6(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), Global_262145.f_13635);
						unk_0x675A76D2D74FEAFE(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 1);
						unk_0x4ACEF9AFD39C05AD(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 1);
						unk_0x22079179ECAB5003(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 1);
						unk_0x2970E27F9EBDE13B(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 2, 2);
						unk_0x2970E27F9EBDE13B(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 3, 2);
					}
				}
				else
				{
					Var6.f_3 = 1125515264;
					Var6.f_4 = 1;
					Var6.f_5 = 1;
					Var6.f_7 = 1082130432;
					Var6.f_8 = 1;
					Var6.f_11 = 1;
					Var6.f_13 = 2;
					Var6.f_20 = 2;
					Var6.f_23 = 1;
					Var6.f_24 = 1;
					Var6.f_0 = 0f;
					Var6.f_1 = 0;
					Var6.f_3 = 200f;
					Var6.f_4 = 1;
					Var6.f_5 = 1;
					Var6.f_10 = 1;
					Var6.f_2 = 1;
					Var32 = { func_157(Local_127.f_2[0 /*10*/].f_5, Local_127.f_2[0 /*10*/].f_8, 20f) };
					if (func_66(Local_127.f_2[0 /*10*/].f_5, Var32, iVar0, 0, &(Local_127.f_262), &(Local_127.f_2[0 /*10*/].f_8), &Var6))
					{
						Local_127.f_265 = Local_127.f_2[0 /*10*/].f_8;
					}
				}
			}
		}
	}
	if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
	{
		if (!unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_1))
		{
			if (unk_0xF157AC7C4936A07C(1))
			{
				if (func_60(iVar1))
				{
					if (func_65(&(Local_127.f_2[0 /*10*/].f_1), Local_127.f_2[0 /*10*/].f_2, 22, iVar1, -1, 1, 1, 1))
					{
						unk_0x30F81670C721F076(unk_0xC09E9E2B61AD04E7(Local_127.f_2[0 /*10*/].f_1), 1);
						unk_0x0CF63D18742CACD4(unk_0xC09E9E2B61AD04E7(Local_127.f_2[0 /*10*/].f_1), 1, 0);
						unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_127.f_2[0 /*10*/].f_1), 1);
						unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_127.f_2[0 /*10*/].f_1), Global_1574731);
						unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_127.f_2[0 /*10*/].f_1), 42, 1);
						unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_127.f_2[0 /*10*/].f_1), 3, 0);
						unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_127.f_2[0 /*10*/].f_1), 2, 1);
					}
				}
			}
		}
	}
	if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_1))
	{
		if (!unk_0xD0BCF9877CD72A3F(Local_127.f_2[1 /*10*/].f_1))
		{
			if (unk_0xF157AC7C4936A07C(1))
			{
				if (func_60(iVar1))
				{
					if (func_65(&(Local_127.f_2[1 /*10*/].f_1), Local_127.f_2[0 /*10*/].f_2, 22, iVar1, 0, 1, 1, 1))
					{
						unk_0x30F81670C721F076(unk_0xC09E9E2B61AD04E7(Local_127.f_2[1 /*10*/].f_1), 1);
						unk_0x0CF63D18742CACD4(unk_0xC09E9E2B61AD04E7(Local_127.f_2[1 /*10*/].f_1), 1, 0);
						unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_127.f_2[1 /*10*/].f_1), 1);
						unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(Local_127.f_2[1 /*10*/].f_1), Global_1574731);
						unk_0x31AC59B7C21A2047(unk_0xC09E9E2B61AD04E7(Local_127.f_2[1 /*10*/].f_1), 42, 1);
						unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_127.f_2[1 /*10*/].f_1), 3, 0);
						unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_127.f_2[1 /*10*/].f_1), 2, 1);
						unk_0x89AEA58335779997(unk_0xC09E9E2B61AD04E7(Local_127.f_2[1 /*10*/].f_1), 5, 1);
						unk_0x0013D519C885E60B(unk_0xC09E9E2B61AD04E7(Local_127.f_2[1 /*10*/].f_1), joaat("weapon_microsmg"), 9999999, 0, 1);
						Local_127.f_2[1 /*10*/].f_2 = Local_127.f_2[0 /*10*/].f_2;
					}
				}
			}
		}
	}
	return 0;
}

int func_65(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xF157AC7C4936A07C(1))
	{
		return 0;
	}
	if (!unk_0x3756406E4D76B25E(uParam1))
	{
		return 0;
	}
	if (!unk_0x7FAC45D56235AB39(unk_0xECBE9D2902B2B964(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xDF7D91421097E934(unk_0x7B47BFDF39EC38D3(unk_0xECBE9D2902B2B964(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		unk_0xE77EEA92586CF2E8(unk_0xC09E9E2B61AD04E7(*uParam0), iParam7);
		if (unk_0x84AEB9C70AC446A5(unk_0xC09E9E2B61AD04E7(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_66(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
{
	bool bVar0;
	int iVar1;
	struct<58> Var2;
	struct<58> Var61;
	
	bVar0 = false;
	if (uParam10->f_12)
	{
		if (uParam10->f_23)
		{
			uParam10->f_23 = 0;
		}
	}
	if (unk_0x0AFBA1AD6DC1C540())
	{
		if (!unk_0xE858C2EA240D3C68() > 7 && !unk_0xE858C2EA240D3C68() == 5)
		{
			return 0;
		}
	}
	if (Global_2404996.f_503)
	{
		Global_2404996.f_503 = 0;
		return 0;
	}
	if (!func_156(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!Global_2404996.f_578 == 0 && unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_583) < func_155(0))
	{
		if (!Global_2404996.f_640 == 0)
		{
			Global_2404996.f_640 = 0;
			func_154();
			func_153();
		}
		return 0;
	}
	if (!unk_0xFF09208EC90C94CB() == Global_2404996.f_639)
	{
		if (!Global_2404996.f_640 == 0)
		{
			if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_643) < func_155(0))
			{
				return 0;
			}
			else
			{
				Global_2404996.f_640 = 0;
			}
		}
	}
	else
	{
		if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_641) > 30000)
		{
			Global_2404996.f_640 = 0;
		}
		if (!Global_2404996.f_640 == 0)
		{
			if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_643) > func_155(1))
			{
				Global_2404996.f_640 = 0;
			}
		}
	}
	if (uParam10->f_5)
	{
		if (func_147(Param0))
		{
			if (func_146(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2404996.f_640 == 0)
	{
		if (unk_0x2A488C176D52CCA5(Global_2404996.f_658, Param0) > 50f)
		{
			return 0;
		}
	}
	unk_0x22B61B02AFE2AF2E((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2404996.f_640 == 0)
	{
		Global_2404996.f_645 = 0;
		Global_2404996.f_641 = unk_0xFD0C6B49DA615791();
		Global_2404996.f_639 = unk_0xFF09208EC90C94CB();
		Global_2404996.f_643 = unk_0xFD0C6B49DA615791();
		Global_2404996.f_658 = { Param0 };
		Global_2404996.f_644 = unk_0xFD0C6B49DA615791();
		Global_2404996.f_640 = 2;
		func_145();
		func_154();
		if (!uParam10->f_25)
		{
			func_135(Param0, iParam6);
		}
	}
	switch (Global_2404996.f_640)
	{
		case 2:
			if (unk_0x6DF473E6458E85B6((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2404996.f_646 = { Param0 };
				Global_2404996.f_649 = 0f;
				if (((uParam10->f_2 && func_48(Param0, 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_6) && !func_132(Param0, *uParam9, iParam6, unk_0x0FFED3E94261A832(), 0))
				{
					Global_2404996.f_646 = { Param0 };
					Global_2404996.f_649 = *uParam9;
				}
				else
				{
					Var2.f_6 = 1082130432;
					Var2.f_7 = 1176255488;
					Var2.f_8 = 1;
					Var2.f_10 = 1;
					Var2.f_13 = 1;
					Var2.f_15 = 1;
					Var2.f_16 = 1;
					Var2.f_31 = 1;
					Var2.f_34 = joaat("tailgater");
					Var2.f_38 = 2;
					Var2.f_45 = 2;
					Var2.f_49 = 1123024896;
					Var2.f_53 = 999;
					Var2.f_54 = 1176256410;
					Var2.f_55 = 1;
					Var2.f_56 = 1;
					Var2.f_57 = 1;
					Var2.f_9 = iParam7;
					Var2.f_3 = 7f;
					Var2.f_10 = uParam10->f_4;
					Var2.f_4 = *uParam10;
					Var2.f_13 = uParam10->f_1;
					Var2.f_5 = uParam10->f_3;
					Var2.f_15 = uParam10->f_5;
					Var2.f_11 = uParam10->f_6;
					Var2.f_6 = uParam10->f_7;
					Var2.f_16 = uParam10->f_8;
					Var2.f_17 = uParam10->f_9;
					Var2 = { Param3 };
					Var2.f_12 = 1;
					Var2.f_34 = iParam6;
					Var2.f_31 = uParam10->f_11;
					Var2.f_30 = 1;
					Var2.f_48 = uParam10->f_12;
					Var2.f_56 = uParam10->f_23;
					Var2.f_57 = uParam10->f_24;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var2.f_38[iVar1 /*3*/] = { uParam10->f_13[iVar1 /*3*/] };
						Var2.f_45[iVar1] = uParam10->f_20[iVar1];
						iVar1++;
					}
					func_85(&(Global_2404996.f_646), &(Global_2404996.f_649), &Var2);
				}
				func_83(Global_2404996.f_646, Global_2404996.f_649, iParam6);
				Global_2404996.f_637 = 0;
				Global_2404996.f_638 = 0;
				Global_2404996.f_645++;
				Global_2404996.f_642 = unk_0xFD0C6B49DA615791();
				Global_2404996.f_641 = unk_0xFD0C6B49DA615791();
				Global_2404996.f_640 = 3;
			}
			break;
		
		case 3:
			if (Global_2404996.f_637)
			{
				if (Global_2404996.f_638)
				{
					if (uParam10->f_10 && !uParam10->f_9)
					{
						func_82(Global_2404996.f_646, 2f);
						Global_2404996.f_640 = 4;
						Global_2404996.f_662 = unk_0xFD0C6B49DA615791();
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					func_80(Global_2404996.f_646, 0);
					func_79(-1);
				}
			}
			else if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_642) > 3000)
			{
				func_79(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_10 && !uParam10->f_9)
			{
				if (unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_662) < 10000)
				{
					if (unk_0xD9DA39C7F012E377(Global_2404996.f_661))
					{
						if (unk_0x2504ECCAE19565D2(Global_2404996.f_661))
						{
							if (!unk_0xA56DDDEF867BE8C0(Global_2404996.f_661))
							{
								if (func_78(Global_2404996.f_646, Global_2404996.f_649, iParam6, unk_0x0FFED3E94261A832(), 0) || func_68(Global_2404996.f_646, Global_2404996.f_649, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_80(Global_2404996.f_646, 0);
									func_79(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_80(Global_2404996.f_646, 0);
								func_79(-1);
							}
						}
					}
					else
					{
						func_79(-1);
					}
				}
				else
				{
					func_79(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2404996.f_646 = { Param0 };
			Global_2404996.f_649 = 0f;
			Var61.f_6 = 1082130432;
			Var61.f_7 = 1176255488;
			Var61.f_8 = 1;
			Var61.f_10 = 1;
			Var61.f_13 = 1;
			Var61.f_15 = 1;
			Var61.f_16 = 1;
			Var61.f_31 = 1;
			Var61.f_34 = joaat("tailgater");
			Var61.f_38 = 2;
			Var61.f_45 = 2;
			Var61.f_49 = 1123024896;
			Var61.f_53 = 999;
			Var61.f_54 = 1176256410;
			Var61.f_55 = 1;
			Var61.f_56 = 1;
			Var61.f_57 = 1;
			Var61.f_9 = iParam7;
			Var61.f_3 = 3.5f;
			Var61.f_10 = uParam10->f_4;
			Var61.f_4 = *uParam10;
			Var61.f_12 = 1;
			Var61.f_13 = 0;
			Var61.f_15 = uParam10->f_5;
			Var61.f_11 = uParam10->f_6;
			Var61.f_6 = uParam10->f_7;
			Var61 = { Param3 };
			Var61.f_34 = iParam6;
			Var61.f_31 = uParam10->f_11;
			Var61.f_30 = 1;
			Var61.f_48 = uParam10->f_12;
			Var61.f_56 = uParam10->f_23;
			Var61.f_57 = uParam10->f_24;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var61.f_38[iVar1 /*3*/] = { uParam10->f_13[iVar1 /*3*/] };
				Var61.f_45[iVar1] = uParam10->f_20[iVar1];
				iVar1++;
			}
			func_85(&(Global_2404996.f_646), &(Global_2404996.f_649), &Var61);
			Global_2404996.f_640 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2404996.f_658 = { Param0 };
	Global_2404996.f_643 = unk_0xFD0C6B49DA615791();
	if (bVar0)
	{
		*uParam8 = { Global_2404996.f_646 };
		*uParam9 = Global_2404996.f_649;
		func_67();
		return 1;
	}
	return 0;
}

void func_67()
{
	Global_2404996.f_640 = 0;
	func_145();
	func_154();
	func_153();
}

int func_68(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x0FFED3E94261A832() != iVar1) || iParam9 == 0)
		{
			if (func_1072(iVar1, bParam5, bParam6))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
				{
					if (!bParam8 || (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) != unk_0x220AE8028FACE96A(iVar1))) || unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
						{
							if (((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && iParam10) && bParam7) && func_53(iVar1))
							{
							}
							else if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
							{
								if (func_69(func_51(iVar1), Param0, fParam3, iParam4, 1036831949))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_69(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_77(iParam7, 1008981770))
	{
		func_70(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0x19007189599EBBF5(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_70(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_76(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	func_71(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x3FEF699D13BCC798((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x3FEF699D13BCC798((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x3FEF699D13BCC798((Var6.f_0 - Var3.f_0));
}

void func_71(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x88516260CF32A1A0(iParam0))
	{
		unk_0xDE3E0D9E2E663E9A(iParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_74(iParam0);
		if (iVar0 != 0)
		{
			func_72(iVar0, fParam1, fParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(*fParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*fParam2) <= 0.01f)
	{
		*fParam1 = (0f - (fParam4 * 0.5f));
		*fParam2 = (0f + (fParam4 * 0.5f));
		fParam1->f_1 = (0f - (fParam3 * 0.5f));
		fParam2->f_1 = (0f + (fParam3 * 0.5f));
		fParam1->f_2 = (0f - (fParam5 * 0.5f));
		fParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_72(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_73(iParam0, &Global_1315786);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x88516260CF32A1A0(Global_1315786[iVar0]))
		{
			unk_0xDE3E0D9E2E663E9A(Global_1315786[iVar0], &(Global_1315790[iVar0 /*3*/]), &(Global_1315797[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1315790[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1315797[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315790[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315797[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315790[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315797[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315790[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315797[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315804[iVar0] = (Global_1315797[iVar0 /*3*/] - Global_1315790[iVar0 /*3*/]);
		Global_1315807[iVar0] = (Global_1315797[iVar0 /*3*/].f_1 - Global_1315790[iVar0 /*3*/].f_1);
		Global_1315810[iVar0] = (Global_1315797[iVar0 /*3*/].f_2 - Global_1315790[iVar0 /*3*/].f_2);
		if (Global_1315804[iVar0] > Global_1315813)
		{
			Global_1315813 = Global_1315804[iVar0];
		}
		if (Global_1315810[iVar0] > Global_1315814)
		{
			Global_1315814 = Global_1315810[iVar0];
		}
		iVar0++;
	}
	Global_1315815 = (Global_1315813 * -0.5f);
	Global_1315818 = (Global_1315813 * 0.5f);
	Global_1315815.f_1 = ((((0.5f * Global_1315807[0]) + Global_1315807[1]) + Global_1315786.f_3) * -1f);
	Global_1315818.f_1 = (0.5f * Global_1315807[0]);
	Global_1315815.f_2 = (Global_1315810[0] * -0.5f);
	Global_1315818.f_2 = (Global_1315810[0] * 0.5f);
	*uParam1 = { Global_1315815 };
	*uParam2 = { Global_1315818 };
}

void func_73(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
	}
}

int func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		if (func_75(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_76(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_0);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_1);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(Param1.f_2);
	fVar1 = unk_0x0BADBFA3B172435F(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_77(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_71(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_78(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_1072(iVar1, 0, 1) && func_1072(iParam5, 0, 1))
			{
				if (Global_2416174.f_261[iVar0])
				{
					if (func_69(Global_2416174.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_69(func_51(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2416174.f_261[iVar0])
			{
				if (func_69(Global_2416174.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1072(iVar1, 0, 0))
			{
				if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
				{
					if (func_69(func_51(iVar1), Param0, fParam3, iParam4, 1036831949))
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

void func_79(int iParam0)
{
	if (Global_2404996.f_645 < 20 && unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), Global_2404996.f_644) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2404996.f_645 < iParam0))
		{
			Global_2404996.f_640 = 2;
		}
		else
		{
			Global_2404996.f_640 = 5;
		}
	}
	else
	{
		Global_2404996.f_640 = 5;
	}
}

void func_80(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	if (iParam3 == 0 && func_81(Param0, 0.01f))
	{
		return;
	}
	if (iParam3 < 30 && unk_0x652D2EEEF1D3E62C(Param0) > 0f)
	{
		Var0 = { Global_2404996.f_2515[iParam3 /*3*/] };
		Global_2404996.f_2515[iParam3 /*3*/] = { Param0 };
		func_80(Var0, iParam3 + 1);
	}
}

int func_81(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404996.f_2515[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_82(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	func_154();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2404996.f_650[iVar0] == -1)
		{
			Global_2404996.f_650[iVar0] = unk_0x2DEE5EB0D05685E9(Param0 - Vector(fParam3, fParam3, fParam3), Param0 + Vector(fParam3, fParam3, fParam3));
			Global_2404996.f_654[iVar0] = unk_0xFF09208EC90C94CB();
			Global_2404996.f_661 = Global_2404996.f_650[iVar0];
			return;
		}
		iVar0++;
	}
}

void func_83(struct<3> Param0, var uParam3, int iParam4)
{
	struct<7> Var0;
	
	Var0.f_0 = 1625612513;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	unk_0xA40CC53DF8E50837(1, &Var0, 7, func_84(1, 1));
}

var func_84(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar1);
		if (func_1072(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0FFED3E94261A832() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
				else if (!func_34(iVar2, 0))
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_85(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404996.f_1710 > 0 && func_129(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_86(uParam0, uParam1, uParam2);
	}
}

void func_86(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	float fVar24;
	int iVar25;
	struct<3> Var26;
	var uVar29;
	struct<3> Var30;
	float fVar33;
	bool bVar34;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_125(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_120(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2411470.f_162 = 0;
	Global_2411470.f_163 = 0;
	Global_2411470.f_164 = -99;
	Global_2411470.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411470[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411470.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_74(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x8CB53B9AB648FF36(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xB22A5C995D319408(iVar8))
		{
			unk_0x637503F5ED6C575B(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411470.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411470.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xAF3BC0B78BEBFE3C(iVar8)) || unk_0x69BC60DD5A50B10D(iVar8))
			{
				unk_0xAA55F1A37EDDE3B7(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_114(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_111(Var1))
									{
										Var1 = { func_108(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_107(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_103(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_120(&Var1, 0)) || uParam2->f_48 == 0)
															{
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																	}
																}
																if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_102(Var1, fVar4, uParam2->f_34, unk_0x0FFED3E94261A832(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_125(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar18 = uParam2->f_31;
																					bVar19 = true;
																					iVar20 = 1;
																					fVar21 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar18 = 0;
																						bVar19 = false;
																						iVar20 = 0;
																						fVar21 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar18 = 0;
																						bVar19 = false;
																						iVar20 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar21 = (fVar21 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar19 = true;
																						iVar20 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar21 = (fVar21 * 0.375f);
																							}
																						}
																					}
																					iVar22 = 0;
																					if (uParam2->f_3 > 7f)
																					{
																						if (func_48(Var1, 6f, 1f, 1f, 5f, iVar18, bVar19, iVar20, fVar21, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																						{
																							iVar22 = 1;
																						}
																					}
																					else if (func_48(Var1, 6f, 1f, 1f, 5f, iVar18, bVar19, iVar20, fVar21, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_68(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																					{
																						iVar22 = 1;
																					}
																					if (iVar22 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar24 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar23 = func_94(Var1, uParam2->f_54, &fVar24);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar23 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar23 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411470.f_162)
																										{
																											Global_2411470[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2411470.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2411470.f_162 = 0;
																										uParam2->f_53 = iVar23;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2411470.f_162 == 0)
																									{
																										Global_2411470[0 /*3*/] = { Var1 };
																										Global_2411470.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411470.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411470[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_93(Var1, fVar4, iVar16);
																													iVar16 = Global_2411470.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2411470.f_162++;
																									if (Global_2411470.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411470.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2411470[Global_2411470.f_162 /*3*/] = { Var1 };
																									Global_2411470.f_121[Global_2411470.f_162] = fVar4;
																									Global_2411470.f_162++;
																									if (func_103(Var1, uParam2))
																									{
																										Global_2411470.f_163++;
																									}
																									if (Global_2411470.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411470.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return;
																						}
																					}
																					else
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2411470.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411470[0 /*3*/] };
						*uParam1 = Global_2411470.f_121[0];
						return;
					}
					else
					{
						if (Global_2411470.f_163 > 0 && !Global_2411470.f_163 == Global_2411470.f_162)
						{
							func_91(0, uParam2);
						}
						iVar25 = unk_0x895FB9FE885E36ED(0, Global_2411470.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar25 = 0;
						}
						Var26 = { Global_2411470[0 /*3*/] };
						uVar29 = Global_2411470.f_121[0];
						Global_2411470[0 /*3*/] = { Global_2411470[iVar25 /*3*/] };
						Global_2411470.f_121[0] = Global_2411470.f_121[iVar25];
						Global_2411470[iVar25 /*3*/] = { Var26 };
						Global_2411470.f_121[iVar25] = uVar29;
						*uParam0 = { Global_2411470[0 /*3*/] };
						*uParam1 = Global_2411470.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_86(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x895FB9FE885E36ED((1 + iVar15), (40 + iVar15));
						unk_0x74AE6A2A7B9031D9(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_108(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var30 = { Var1 };
						fVar33 = fVar4;
						if (!uParam2->f_50)
						{
							bVar34 = true;
						}
						else
						{
							bVar34 = false;
						}
						if (func_125(uParam2->f_35, &Var30, &(uParam2->f_38), &(uParam2->f_45), bVar34, 1) || func_120(&Var30, bVar34))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var30 };
								*uParam1 = fVar33;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_86(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var30 };
								*uParam1 = fVar33;
								return;
							}
						}
						else
						{
							*uParam0 = { Var30 };
							*uParam1 = fVar33;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				func_86(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_87(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2411470.f_164 = iVar8;
	}
}

void func_87(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = unk_0x2A488C176D52CCA5(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_88(*(uParam0[iVar2 /*4*/]), 5f, unk_0x0FFED3E94261A832(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_88(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_90(Param0, fParam3, iParam4, iParam5, 0) || func_89(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_89(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2416174.f_557[iVar0] == 0)
			{
				if (func_69(Param0, Global_2416174.f_427[iVar0 /*3*/], Global_2416174.f_524[iVar0], Global_2416174.f_557[iVar0], 1036831949))
				{
					if (func_1072(iVar1, 0, 1) && func_1072(iParam3, 0, 1))
					{
						return 1;
					}
					else
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

int func_90(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_1072(iVar1, 0, 1) && func_1072(iParam4, 0, 1))
				{
					if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1072(iVar1, 0, 1) && func_1072(iParam4, 0, 1))
				{
					if (Global_2416174.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2416174.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_51(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416174.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2416174.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_1072(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_51(iVar1), Param0) < 1f)
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

void func_91(int iParam0, var uParam1)
{
	if (!func_103(Global_2411470[iParam0 /*3*/], uParam1))
	{
		Global_2411470.f_162 = (Global_2411470.f_162 - 1);
		func_92(iParam0);
		if (Global_2411470.f_162 > Global_2411470.f_163)
		{
			func_91(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_91(iParam0 + 1, uParam1);
	}
}

void func_92(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2411470[iParam0 /*3*/] = { Global_2411470[iParam0 + 1 /*3*/] };
			Global_2411470.f_121[iParam0] = Global_2411470.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_93(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411470[iParam4 /*3*/] };
	uVar3 = Global_2411470.f_121[iParam4];
	Global_2411470[iParam4 /*3*/] = { Param0 };
	Global_2411470.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411470.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_93(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_94(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_95(iVar5))
		{
			Var1 = { func_51(iVar5) };
			fVar7 = unk_0x2A488C176D52CCA5(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_95(int iParam0)
{
	if (func_1072(iParam0, 0, 1))
	{
		if (!func_100(iParam0))
		{
			if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam0))
			{
				if (!unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
				{
					if (func_97(unk_0x0FFED3E94261A832(), 1))
					{
						if (!func_96(unk_0x220AE8028FACE96A(iParam0), unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x220AE8028FACE96A(iParam0) == -1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
				{
					if (!func_97(unk_0x0FFED3E94261A832(), 1))
					{
						if (!func_53(iParam0))
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
		}
	}
	return 0;
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 0);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 1);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 2);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 4);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 5);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 6);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 8);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 9);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 10);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 12);
				
				case 1:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 13);
				
				case 2:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 14);
				
				case 3:
					return unk_0xAA4F14DA15DB0B51(Global_1638223.f_46, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_97(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_98(iParam0))
		{
			return 1;
		}
	}
	if (Global_1592456[iParam0 /*635*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_98(int iParam0)
{
	return func_99(iParam0);
}

bool func_99(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

int func_100(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_101())
	{
		if (iParam0 == unk_0x0FFED3E94261A832())
		{
			return 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 3);
}

int func_102(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_78(Param0, fParam3, iParam4, iParam5, iParam6) || func_132(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_103(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_106(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_104(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x19007189599EBBF5(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_104(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_105(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_106(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
	}
	return unk_0x2A488C176D52CCA5(Param0, Param3) < (fParam6 + 0.01f);
}

int func_107(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_97(unk_0x0FFED3E94261A832(), 1))
	{
		if (Global_1638223.f_47358 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1638223.f_47358)
			{
				if (Global_1638223.f_47359[iVar0 /*61*/].f_7 != 0)
				{
					if (func_69(Param0, Global_1638223.f_47359[iVar0 /*61*/], Global_1638223.f_47359[iVar0 /*61*/].f_6, Global_1638223.f_47359[iVar0 /*61*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1638223.f_44971 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1638223.f_44971)
			{
				if (Global_1638223.f_44974[iVar0 /*98*/].f_16 != 0)
				{
					if (func_69(Param0, Global_1638223.f_44974[iVar0 /*98*/], Global_1638223.f_44974[iVar0 /*98*/].f_3, Global_1638223.f_44974[iVar0 /*98*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1638223.f_59830 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1638223.f_59830)
			{
				if (Global_1638223.f_59834[iVar0 /*160*/].f_12 != 0)
				{
					if (func_69(Param0, Global_1638223.f_59834[iVar0 /*160*/], Global_1638223.f_59834[iVar0 /*160*/].f_3, Global_1638223.f_59834[iVar0 /*160*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_108(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	float fVar17;
	float fVar20;
	struct<3> Var21;
	struct<3> Var24;
	struct<3> Var27;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_109(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xAA55F1A37EDDE3B7(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x1FD487C25EAD970B(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
		{
			*bParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *bParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (unk_0xBBDA792448DB5A89(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * unk_0xBBDA792448DB5A89(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				func_71(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
				fVar20 = (fVar17 - fVar14);
				if (fVar20 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar20 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_109(Param0, *fParam3, Param6))
		{
			if (bParam5)
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { unk_0xEBB6A451E594E1A8(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x2A381E6324A8F56E(Param0, *fParam3, &Var21))
		{
			Var24 = { Var21 - Param0 };
			if (!iParam11 == 0)
			{
				Var27 = { Var24 / FtoV(unk_0x652D2EEEF1D3E62C(Var24)) };
				func_71(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
				fVar20 = (fVar17 - fVar14);
				Var27 = { Var27 * FtoV((fVar20 * 0.5f)) };
				Var24 = { Var24 - Var27 };
				Var21 = { Param0 + Var24 };
			}
			Var27 = { Var0 - Var21 };
			Var0 = { Var21 };
		}
	}
	return Var0;
}

int func_109(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_76(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_110(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_110(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_111(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_113(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2411184[iVar1])
	{
		if (func_112(Param0, &(Global_2410481[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411184[8])
	{
		if (func_112(Param0, &(Global_2410481[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_112(struct<3> Param0, var uParam3)
{
	return unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_113(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410472[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410472[1])
	{
		if (Param0.f_0 < Global_2410476[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410472[2])
	{
		if (Param0.f_0 < Global_2410476[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410476[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410476[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_114(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_119(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x399F81B56505EE6F(0.01f, 360f);
			func_118(&Var1, Global_2404996.f_565, Global_2404996.f_568, 1036831949, 0, fVar4);
			if (func_115(Var1, &uVar0) || func_119(Var1))
			{
				Var1 = { *uParam0 };
				func_118(&Var1, Global_2404996.f_565, Global_2404996.f_568, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_115(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_117();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404996.f_357[iVar0 /*12*/].f_9 == 1)
		{
			if (func_116(Param0, &(Global_2404996.f_357[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_116(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_106(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404996.f_2513) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_104(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x19007189599EBBF5(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_117()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404996.f_357[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_118(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_76(&Var0, 0f, 0f, unk_0x399F81B56505EE6F(0f, 360f));
		}
		else
		{
			func_76(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

int func_119(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404996.f_568 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404996.f_565);
		if (fVar0 < Global_2404996.f_568)
		{
			return 1;
		}
	}
	return 0;
}

bool func_120(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404996.f_26.f_16)
	{
		switch (Global_2404996.f_26.f_15)
		{
			case 0:
				if (func_106(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_104(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x19007189599EBBF5(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_11, Global_2404996.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_121(*uParam0, Global_2404996.f_26.f_8, Global_2404996.f_26.f_11, Global_2404996.f_26.f_14, Global_2404996.f_26.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_121(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_118(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_124(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_122(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x6B839244A185DBDF(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_106(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_104(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x19007189599EBBF5(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_122(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_123(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x8A19CC9865A4AAC2(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_110(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_110(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = unk_0x2A488C176D52CCA5(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_123(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_123(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x8A19CC9865A4AAC2(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_110(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_110(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (unk_0x2A488C176D52CCA5(Var10, *uParam0, uParam0->f_1, 0f) < unk_0x2A488C176D52CCA5(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

Vector3 func_123(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_124(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

int func_125(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_147(Param0))
	{
		if (func_128(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_126(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_81(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (unk_0x2A488C176D52CCA5(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_118(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_126(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_115(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_127(&Var2, &(Global_2404996.f_357[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_115(Var2, &uVar1) || func_119(Var2))
			{
				Var2 = { *uParam0 };
				func_127(&Var2, &(Global_2404996.f_357[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_127(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_121(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404996.f_2513) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_121(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_121(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_118(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404996.f_2513) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_124(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_122(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_128(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409496[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409496[iVar0 /*17*/].f_16))
			{
				if (func_116(*uParam0, &(Global_2409496[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2409496[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409496[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_127(&Var1, &(Global_2409496[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_128(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_127(&Var1, &(Global_2409496[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_129(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2404996.f_1710 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_125(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_120(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2411470.f_162 = 0;
		Global_2411470.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2411470[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2411470.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_130(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2404996.f_1710)
		{
			iVar1 = Global_2404996.f_1984[iVar0];
			if (iVar1 > -1 && iVar1 < 68)
			{
				Var2 = { Global_2404996.f_1711[iVar1 /*4*/] };
				fVar5 = Global_2404996.f_1711[iVar1 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var2) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var2.f_0, Var2.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_102(Var2, fVar5, uParam2->f_34, unk_0x0FFED3E94261A832(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_125(uParam2->f_35, &Var2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0.375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (uParam2->f_3 > 7f)
										{
											if (func_48(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
											{
												bVar11 = true;
											}
										}
										else if (func_48(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_68(Var2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
										{
											bVar11 = true;
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_94(Var2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2411470.f_162)
															{
																Global_2411470[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2411470.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2411470.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2411470.f_162 == 0)
														{
															Global_2411470[0 /*3*/] = { Var2 };
															Global_2411470.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2411470.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var2, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411470[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_93(Var2, fVar5, iVar6);
																		iVar6 = Global_2411470.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2411470.f_162++;
														if (Global_2411470.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2404996.f_1710;
															}
															else if (Global_2411470.f_162 == 40)
															{
																iVar0 = Global_2404996.f_1710;
															}
														}
													}
													else
													{
														Global_2411470[Global_2411470.f_162 /*3*/] = { Var2 };
														Global_2411470.f_121[Global_2411470.f_162] = fVar5;
														Global_2411470.f_162++;
														if (Global_2411470.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2404996.f_1710;
															}
															else if (Global_2411470.f_162 == 40)
															{
																iVar0 = Global_2404996.f_1710;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var2 };
										*uParam1 = fVar5;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2411470.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411470[0 /*3*/] };
				*uParam1 = Global_2411470.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411470.f_163 > 0 && !Global_2411470.f_163 == Global_2411470.f_162)
				{
					func_91(0, uParam2);
				}
				iVar14 = unk_0x895FB9FE885E36ED(0, Global_2411470.f_162);
				Var15 = { Global_2411470[0 /*3*/] };
				uVar18 = Global_2411470.f_121[0];
				Global_2411470[0 /*3*/] = { Global_2411470[iVar14 /*3*/] };
				Global_2411470.f_121[0] = Global_2411470.f_121[iVar14];
				Global_2411470[iVar14 /*3*/] = { Var15 };
				Global_2411470.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2411470[0 /*3*/] };
				*uParam1 = Global_2411470.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_129(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_86(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_130(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2404996.f_1710)
	{
		uVar1 = func_131(Param0, fVar0, &fVar0);
		Global_2404996.f_1984[iVar2] = uVar1;
		iVar2++;
	}
}

int func_131(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2404996.f_1710)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2404996.f_1711[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

int func_132(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_134(Param0, iParam4, Global_2416174.f_427[iVar0 /*3*/], Global_2416174.f_557[iVar0]))
			{
				if (func_133(Param0, fParam3, iParam4, Global_2416174.f_427[iVar0 /*3*/], Global_2416174.f_524[iVar0], Global_2416174.f_557[iVar0], 0))
				{
					if (func_1072(iVar1, 0, 1) && func_1072(iParam5, 0, 1))
					{
						return 1;
					}
					else
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

int func_133(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_69(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_71(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	Var20 = { 0f, Var17.f_1, 0f };
	func_76(&Var20, 0f, 0f, fParam3);
	Var23 = { 0f, Var14.f_1, 0f };
	func_76(&Var23, 0f, 0f, fParam3);
	Var26 = { (unk_0x3FEF699D13BCC798((Var17.f_0 - Var14.f_0)) * 0.5f), 0f, 0f };
	func_76(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var20 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	Var1[1 /*3*/] = { Param0 + Var20 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	Var1[2 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	Var1[3 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * unk_0x3FEF699D13BCC798((Var17.f_2 - Var14.f_2))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_69(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_133(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_134(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_77(iParam3, 1008981770);
	fVar1 = func_77(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

void func_135(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	var uVar6[3];
	
	if (!func_144())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_143(Param0);
		if (iVar1 > -1)
		{
			func_153();
			switch (iVar1)
			{
				case 0:
					func_142(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_142(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_142(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_142(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_142(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_142(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_142(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_142(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_142(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_142(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_142(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_142(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_142(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_142(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_142(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_142(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_142(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_142(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_142(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_142(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_142(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_142(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_142(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_142(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_142(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_142(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_142(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_142(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_142(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_142(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_142(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_142(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_142(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_142(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_142(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_142(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_142(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_142(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_142(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_142(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_142(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_142(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_142(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_142(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_142(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_142(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_142(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_142(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_142(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_142(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_142(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_142(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_142(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_140(78);
					break;
				
				case 11:
					func_140(79);
					break;
				
				case 12:
					func_140(82);
					break;
				
				case 13:
					func_140(81);
					break;
				
				case 14:
					func_140(73);
					break;
				
				case 15:
					func_142(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_142(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_142(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_142(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_140(75);
					break;
				
				case 17:
					func_140(76);
					break;
				
				case 18:
					func_140(77);
					break;
				
				case 19:
					func_142(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_142(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_142(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_142(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_140(80);
					break;
				
				case 21:
				case 25:
					func_140(87);
					break;
				
				case 22:
				case 26:
					func_140(88);
					break;
				
				case 23:
				case 27:
					func_140(89);
					break;
				
				case 24:
				case 28:
					func_140(90);
					break;
				
				case 29:
				case 30:
					if (func_139(iParam3))
					{
						func_140(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15);
					}
					break;
			}
		}
		else if (func_138(Param0, 50f, &iVar2, &uVar6))
		{
			func_153();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (!uVar6[iVar0] && func_137(iVar2[iVar0], -1))
				{
					if (func_139(iParam3))
					{
						func_140(iVar2[iVar0]);
					}
				}
				else if (uVar6[iVar0])
				{
					func_136(iVar2[iVar0]);
				}
				else
				{
					func_140(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_136(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			func_142(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_142(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_142(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_142(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_142(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_142(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_142(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_142(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_142(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_142(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_142(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_142(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_142(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_142(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_142(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_142(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_142(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_142(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_142(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_142(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_142(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_142(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_142(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_142(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_142(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_142(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_142(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_142(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_142(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_142(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_142(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_142(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_142(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_142(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_142(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_142(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_142(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_142(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_142(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_142(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_142(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_142(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_142(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_142(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_142(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_142(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_142(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_142(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_142(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_142(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_142(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_142(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_142(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_142(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_142(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_142(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_142(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_142(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_142(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_142(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_142(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_142(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_142(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_142(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_142(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_142(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_142(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_142(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_142(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_142(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_142(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_142(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_142(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_142(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_142(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_142(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_142(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_142(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_142(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_142(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_142(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_142(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_142(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_142(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_142(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_142(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_142(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_142(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_142(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_142(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_142(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_142(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_142(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_142(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_142(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_142(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_142(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_142(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_142(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_142(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_142(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_142(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_142(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_142(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_142(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_142(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_142(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_142(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_142(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_142(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_142(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_142(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_142(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_142(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_142(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_142(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_142(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_142(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_142(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_142(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_142(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_142(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_142(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_142(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_142(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_142(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_142(142.7427f, -2536.147f, 5f, 205.0002f);
			func_142(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_142(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_142(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_142(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_142(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_142(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_142(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_142(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_142(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_142(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_142(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_142(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_142(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_142(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_142(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_142(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_142(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_142(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_142(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_142(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_142(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_142(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_142(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_142(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_142(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_142(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_142(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_142(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_142(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_142(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_142(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_142(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_142(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		default:
			break;
	}
}

int func_137(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_138(struct<2> Param0, var uParam2, float fParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar0 = 1;
	while (iVar0 <= 115)
	{
		if (iVar2 < *uParam4)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Global_1049460[iVar0 /*1943*/].f_3[iVar1 /*3*/], Global_1049460[iVar0 /*1943*/].f_3[iVar1 /*3*/].f_1, 0f) < fParam3)
				{
					(*uParam4)[iVar2] = iVar0;
					(*uParam5)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 83)
	{
		if (iVar2 < *uParam4)
		{
			if (unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Global_1774803.f_30[iVar0 /*3*/], Global_1774803.f_30[iVar0 /*3*/].f_1, 0f) < fParam3)
			{
				(*uParam4)[iVar2] = iVar0;
				(*uParam5)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	if ((unk_0x4BD9974FDDE2D1EC(iParam0) || unk_0xD043D4D784E459B0(iParam0)) || unk_0xB8B97965F826E07D(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_140(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_142(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_142(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_142(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_142(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_142(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_142(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_142(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_142(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_142(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_142(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_142(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_142(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_142(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_142(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_142(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_142(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_142(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_142(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_142(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_142(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_142(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_142(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_142(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_142(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_142(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_142(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_142(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_142(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_142(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_142(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_142(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_142(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_142(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_142(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_142(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_142(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_141())
			{
				func_142(-1608.297f, -556.875f, 33.406f, 310f);
				func_142(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_142(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_142(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_142(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_142(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_142(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_142(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_142(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_142(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_142(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_142(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_141())
			{
				func_142(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_142(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_142(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_142(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_142(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_142(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_142(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_142(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_142(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_142(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_142(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_142(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_141())
			{
				func_142(-102.737f, -597.379f, 35.053f, 160.999f);
				func_142(-97.793f, -589.568f, 35.082f, 134.799f);
				func_142(-110.357f, -619.402f, 35.055f, 160.599f);
				func_142(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_142(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_142(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_142(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_142(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_142(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_142(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_142(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_142(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_141())
			{
				func_142(-59.349f, -779.238f, 43.134f, 228.398f);
				func_142(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_142(-65.212f, -772.66f, 43.151f, 219.398f);
				func_142(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_142(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_142(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_142(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_142(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_142(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_142(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_142(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_142(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_142(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_142(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_142(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_142(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_142(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_142(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_142(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_142(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_142(-1464.5f, -927.9f, 9f, 296.7991f);
			func_142(-1466f, -926.1f, 9f, 296.7991f);
			func_142(-1467.9f, -924.7f, 9f, 296.7991f);
			func_142(-1469.7f, -923.7f, 9f, 296.7991f);
			func_142(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_142(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_142(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_142(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_142(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_142(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_142(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_142(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_142(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_142(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_142(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_142(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_142(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_142(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_142(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_142(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_142(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_142(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_142(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_142(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_142(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_142(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_142(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_142(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_142(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_142(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_142(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_142(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_142(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_142(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_142(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_142(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_142(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_142(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_142(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_142(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_142(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_142(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_142(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_142(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_142(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_142(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_142(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_142(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_142(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_142(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_142(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_142(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_142(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_142(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_142(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_142(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_142(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_142(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_142(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_142(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_142(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_142(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_142(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_142(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_142(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_142(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_142(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_142(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_142(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_142(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_142(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_142(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_142(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_142(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_142(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_142(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_142(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_142(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_142(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_142(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_142(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_142(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_142(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_142(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_142(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_142(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_142(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_142(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_141()
{
	return Global_2445217.f_12;
}

void func_142(struct<3> Param0, float fParam3)
{
	if (Global_2404996.f_1710 < 68)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404996.f_1711[Global_2404996.f_1710 /*4*/] = { Param0 };
		Global_2404996.f_1711[Global_2404996.f_1710 /*4*/].f_3 = fParam3;
		Global_2404996.f_1710++;
	}
}

int func_143(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2411238[iVar0 /*7*/].f_2 + Global_2411238[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_112(Param0, &(Global_2411238[iVar0 /*7*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_144()
{
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_13, 0) && !Global_2445989.f_6016)
	{
		return 0;
	}
	return 0;
}

void func_145()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2404996.f_2515[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_146(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2411194[iVar0 /*7*/].f_2 + Global_2411194[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_112(Var1, &(Global_2411194[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_122(&Var1, Global_2411194[iVar0 /*7*/], Global_2411194[iVar0 /*7*/].f_3, Global_2411194[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_147(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404996.f_502)
	{
		if (!Global_2404996.f_43.f_312)
		{
			if (!func_151(unk_0x0FFED3E94261A832(), 1))
			{
				return 1;
			}
			if (!func_150(Param0, 1008981770))
			{
				if (!func_128(&Param0, 0, 0, 0))
				{
					return 1;
				}
				else if (func_128(&Param0, 0, 1, 0))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_149(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_148(&(Global_2404996.f_43[iVar0 /*12*/])) };
					if (!func_128(&Var1, 0, 0, 0))
					{
						if (!func_128(&Param0, 0, 0, 0))
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

Vector3 func_148(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_149(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404996.f_43[iVar0 /*12*/].f_9)
		{
			if (func_116(Param0, &(Global_2404996.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_150(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404996.f_43[iVar0 /*12*/].f_9)
		{
			if (func_116(Param0, &(Global_2404996.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_151(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_152(iParam0) != 0;
	}
	return func_97(iParam0, bParam1);
}

int func_152(int iParam0)
{
	if (func_1072(iParam0, 0, 1))
	{
		return Global_2422215[iParam0 /*387*/].f_1;
	}
	return 0;
}

void func_153()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_2404996.f_1711[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2404996.f_1710 = 0;
}

void func_154()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE00BB08A385D5A25(Global_2404996.f_654[iVar0]))
		{
			if (unk_0xFF09208EC90C94CB() == Global_2404996.f_654[iVar0])
			{
				if (!Global_2404996.f_650[iVar0] == -1)
				{
					if (unk_0xD9DA39C7F012E377(Global_2404996.f_650[iVar0]))
					{
						unk_0xF047B794DDAB117E(Global_2404996.f_650[iVar0]);
						Global_2404996.f_650[iVar0] = -1;
					}
					else
					{
						Global_2404996.f_650[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2404996.f_650[iVar0] == -1)
		{
			Global_2404996.f_650[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_155(bool bParam0)
{
	if (unk_0xF4EE9D6C8E60AE22())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_156(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xAA4F14DA15DB0B51(Global_2434604.f_1, iParam0);
	}
	return 1;
}

Vector3 func_157(struct<3> Param0, float fParam3, float fParam4)
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_158(Var0, fParam3);
	Var0.f_0 = (Var0.f_0 * fParam4);
	Var0.f_1 = (Var0.f_1 * fParam4);
	Var0.f_2 = (Var0.f_2 * fParam4);
	Var0 = { Var0 + Param0 };
	return Var0;
}

Vector3 func_158(struct<3> Param0, float fParam3)
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

void func_159(int iParam0)
{
	if (!func_383())
	{
		switch (Local_127.f_195)
		{
			case 0:
				unk_0x23B7F0BEB9890E62(iParam0, 0);
				break;
			
			case 1:
				unk_0x23B7F0BEB9890E62(iParam0, 2);
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		unk_0xC2C096B78AB918EB(iParam0, 15, 1);
		unk_0x1225B25A5432A577(iParam0, 0, 156);
	}
}

int func_160(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	var uVar0;
	
	if (!unk_0x0EFB343481EA3E51(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x17F1CA1754EDB8DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE42A511281C9895B(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0xEDE67C014A25CEBB(uVar0);
	Global_2497344.f_5742 = uVar0;
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		if (bParam15)
		{
			unk_0x6584E56EC53294F2(uVar0, 1);
		}
		unk_0xE77EEA92586CF2E8(uVar0, iParam10);
		if (unk_0x84AEB9C70AC446A5(iVar0))
		{
			if (bParam8)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
			else
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0x71BF6BEE4B09B8FF(*uParam0, unk_0x0FFED3E94261A832(), 1);
			}
		}
		unk_0xC0CE5D00E49597D9(iVar0, iParam9);
		unk_0xE373A18F5FF76D31(iVar0, 1);
		if (bParam12)
		{
			unk_0xC4021F26C717AD72(iVar0);
			unk_0x1873102BDC0A9FE0(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_161()
{
	int iVar0;
	
	switch (Local_127.f_195)
	{
		case 0:
			iVar0 = joaat("mule");
			break;
		
		case 1:
			iVar0 = joaat("mule");
			break;
		
		case 2:
			iVar0 = joaat("mule");
			break;
	}
	return iVar0;
}

void func_162()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x62E688B72E3C57B0())
	{
		return;
	}
	if (func_383())
	{
		return;
	}
	if (Local_127.f_209 != 0)
	{
		return;
	}
	if (!func_11(&(Local_127.f_230)))
	{
		func_10(&(Local_127.f_230), 0, 0);
	}
	iVar1 = func_164();
	if (!func_6(&(Local_127.f_230), 15000, 0))
	{
		iVar0 = 0;
		while (iVar0 < func_163())
		{
			iVar2 = 0;
			if (!unk_0xD0BCF9877CD72A3F(Local_127.f_199[iVar0]))
			{
				if (unk_0x0EFB343481EA3E51(1))
				{
					if (func_60(iVar1))
					{
						if (!func_59(Local_127.f_179[iVar0 /*5*/], 0f, 0f, 0f, 0))
						{
							if (func_48(Local_127.f_179[iVar0 /*5*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_127.f_211, iVar0))
								{
									unk_0x333EF04F1A5ADEB5(Local_127.f_179[iVar0 /*5*/], 5f, 1, 0, 0, 1);
									unk_0xF6082E2ADA1C795B(&(Local_127.f_211), iVar0);
								}
								if (func_160(&(Local_127.f_199[iVar0]), iVar1, Local_127.f_179[iVar0 /*5*/], Local_127.f_179[iVar0 /*5*/].f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									unk_0x650AA1AFE335239C(unk_0xECBE9D2902B2B964(Local_127.f_199[iVar0]), 1);
									func_159(unk_0xECBE9D2902B2B964(Local_127.f_199[iVar0]));
								}
							}
							else
							{
								if (unk_0xB6FB1ADA41270763(Local_127.f_179[iVar0 /*5*/], 6f))
								{
									iVar2 = 1;
								}
								else if (unk_0x2F88ECCEDDE3F341(Local_127.f_179[iVar0 /*5*/], Local_127.f_179[iVar0 /*5*/].f_1, (Local_127.f_179[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0x2F88ECCEDDE3F341(Local_127.f_179[iVar0 /*5*/], 1f))
								{
									iVar2 = 1;
								}
								if (iVar2 == 1)
								{
									if (!unk_0xAA4F14DA15DB0B51(Local_127.f_211, iVar0))
									{
										unk_0x333EF04F1A5ADEB5(Local_127.f_179[iVar0 /*5*/], 6f, 1, 0, 0, 1);
										unk_0xF6082E2ADA1C795B(&(Local_127.f_211), iVar0);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_163()
{
	switch (Local_127.f_197)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 8:
			return 2;
		
		default:
	}
	return 3;
}

int func_164()
{
	int iVar0;
	
	switch (Local_127.f_195)
	{
		case 0:
			iVar0 = joaat("speedo");
			break;
		
		case 1:
			iVar0 = joaat("burrito3");
			break;
		
		case 2:
			iVar0 = joaat("gburrito2");
			break;
	}
	return iVar0;
}

void func_165()
{
	if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 12))
	{
		return;
	}
	switch (Local_127.f_197)
	{
		case 0:
			Local_127.f_261 = unk_0x25118499AB6F447B(31.1862f, -2594.657f, -50f, 68.0247f, -2551.956f, 50f, 1, 1, 1, 1);
			break;
		
		case 1:
			Local_127.f_261 = unk_0x25118499AB6F447B(-1109.664f, -1297.61f, -50f, -1074.653f, -1223.725f, 50f, 1, 1, 1, 1);
			break;
		
		case 2:
			Local_127.f_261 = unk_0x25118499AB6F447B(859.394f, -1082.382f, -50f, 914.3219f, -1008.526f, 50f, 1, 1, 1, 1);
			break;
		
		case 3:
			Local_127.f_261 = unk_0x25118499AB6F447B(240.8218f, -1997.975f, -50f, 243.8696f, -1933.894f, 50f, 1, 1, 1, 1);
			break;
		
		case 4:
			Local_127.f_261 = unk_0x25118499AB6F447B(-451.6602f, 171.9769f, -50f, -397.3188f, 222.9419f, 50f, 1, 1, 1, 1);
			break;
		
		case 5:
			Local_127.f_261 = unk_0x25118499AB6F447B(-1059.294f, -2044.054f, -50f, -1011.896f, -1884.057f, 140.3546f, 1, 1, 1, 1);
			break;
		
		case 6:
			Local_127.f_261 = unk_0x25118499AB6F447B(-1284.743f, -836.3273f, -50f, -1246.317f, -774.2995f, 50f, 1, 1, 1, 1);
			break;
		
		case 7:
			Local_127.f_261 = unk_0x25118499AB6F447B(-924.5807f, -2758.87f, -50.9462f, -789.014f, -2731.518f, 112.94f, 1, 1, 1, 1);
			break;
		
		case 8:
			Local_127.f_261 = unk_0x25118499AB6F447B(253.779f, -3039.713f, -50f, 308.8536f, -2986.068f, 50f, 1, 1, 1, 1);
			break;
		
		case 9:
			Local_127.f_261 = unk_0x25118499AB6F447B(1515.631f, -2191.266f, -50f, 1597.112f, -2059.625f, 150f, 1, 1, 1, 1);
			break;
		
		case 10:
			Local_127.f_261 = unk_0x25118499AB6F447B(-348.6945f, -2731.759f, -50f, -230.5551f, -2670.349f, 50.0003f, 1, 1, 1, 1);
			break;
		
		case 11:
			Local_127.f_261 = unk_0x25118499AB6F447B(464.591f, -669.6168f, -50f, 598.1423f, -499.8008f, 50f, 1, 1, 1, 1);
			break;
		
		case 12:
			Local_127.f_261 = unk_0x25118499AB6F447B(-564.2241f, -1836.488f, -50f, -498.0586f, -1768.227f, 50f, 1, 1, 1, 1);
			break;
		
		case 13:
			Local_127.f_261 = unk_0x25118499AB6F447B(-357.3719f, -1413.902f, -50f, -287.5592f, -1320.63f, 50f, 1, 1, 1, 1);
			break;
		
		case 14:
			Local_127.f_261 = unk_0x25118499AB6F447B(302.4282f, 333.8127f, -50f, 359.9608f, 361.1776f, 150f, 1, 1, 1, 1);
			break;
		
		case 15:
			Local_127.f_261 = unk_0x25118499AB6F447B(883.963f, -1600.535f, -50f, 980.0828f, -1532.579f, 50f, 1, 1, 1, 1);
			break;
		
		case 16:
			Local_127.f_261 = unk_0x25118499AB6F447B(691.8906f, -946.6288f, -50f, 792.8187f, -856.2645f, 50f, 1, 1, 1, 1);
			break;
		
		case 17:
			Local_127.f_261 = unk_0x25118499AB6F447B(931.0925f, -2203.321f, -50f, 1054.687f, -2104.696f, 50f, 1, 1, 1, 1);
			break;
		
		case 18:
			Local_127.f_261 = unk_0x25118499AB6F447B(909.5201f, -2548.777f, -50f, 1079.576f, -2480.221f, 50f, 1, 1, 1, 1);
			break;
		
		case 19:
			Local_127.f_261 = unk_0x25118499AB6F447B(-285.6858f, 169.6409f, -50f, -231.663f, 249.5953f, 150f, 1, 1, 1, 1);
			break;
		
		case 20:
			Local_127.f_261 = unk_0x25118499AB6F447B(490.689f, -2005.857f, -50f, 557.8708f, -1886.362f, 124.4746f, 1, 1, 1, 1);
			break;
		
		case 21:
			Local_127.f_261 = unk_0x25118499AB6F447B(88.2044f, -2235.053f, -50f, 199.7525f, -2183.485f, 50f, 1, 1, 1, 1);
			break;
	}
	unk_0xF6082E2ADA1C795B(&(Local_127.f_1), 12);
}

void func_166()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_127.f_223 == 0)
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0) };
		Var3 = { func_167() };
		fVar6 = unk_0x4A2E6F541CD8C36E(Var0, Var3, 0);
		if (fVar6 > 2500f)
		{
			Local_127.f_223 = Global_262145.f_14686;
		}
		else if (fVar6 > 2000f)
		{
			Local_127.f_223 = Global_262145.f_14687;
		}
		else if (fVar6 > 1500f)
		{
			Local_127.f_223 = Global_262145.f_14688;
		}
		else if (fVar6 > 1000f)
		{
			Local_127.f_223 = Global_262145.f_14689;
		}
		else
		{
			Local_127.f_223 = Global_262145.f_14690;
		}
	}
}

Vector3 func_167()
{
	switch (Local_127.f_197)
	{
		case 0:
			return 57.4898f, -2566.763f, 5.2753f;
		
		case 1:
			return -1080.198f, -1262.176f, 4.6922f;
		
		case 2:
			return 902.1754f, -1028.345f, 33.9666f;
		
		case 3:
			return 248.97f, -1955.611f, 22.1629f;
		
		case 4:
			return -420.2774f, 183.9635f, 79.5661f;
		
		case 5:
			return -1048.901f, -2013.738f, 12.1616f;
		
		case 6:
			return -1269.405f, -811.931f, 16.1114f;
		
		case 7:
			return -872.9662f, -2735.341f, 12.9538f;
		
		case 8:
			return 273.7365f, -3019.411f, 4.7024f;
		
		case 9:
			return 1561.409f, -2134.272f, 76.4751f;
		
		case 10:
			return -304.1417f, -2695.407f, 5.0003f;
		
		case 11:
			return 504.3576f, -651.182f, 23.7512f;
		
		case 12:
			return -529.7162f, -1779.501f, 20.3865f;
		
		case 13:
			return -297.2056f, -1362.507f, 30.2971f;
		
		case 14:
			return 346.6934f, 338.6926f, 104.2013f;
		
		case 15:
			return 962.1667f, -1557.684f, 29.8012f;
		
		case 16:
			return 749.9839f, -887.2051f, 24.0879f;
		
		case 17:
			return 1008.78f, -2144.658f, 29.5516f;
		
		case 18:
			return 1010.923f, -2523.426f, 27.3091f;
		
		case 19:
			return -259.173f, 200.7894f, 84.0941f;
		
		case 20:
			return 540.001f, -1945.595f, 23.9847f;
		
		case 21:
			return 95.5855f, -2215.18f, 5.1712f;
		
		default:
	}
	return 941.8403f, -1560.594f, 30.9244f;
}

void func_168()
{
	int iVar0;
	
	if (!func_59(Local_127.f_103[0 /*5*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	func_169();
	iVar0 = func_977();
	switch (iVar0)
	{
		case 99:
			switch (Local_127.f_197)
			{
				case 0:
					Local_127.f_2[0 /*10*/].f_5 = { 81.7918f, -2554.375f, 5f };
					Local_127.f_2[0 /*10*/].f_8 = 268.2536f;
					break;
				
				case 1:
					Local_127.f_2[0 /*10*/].f_5 = { -1065.693f, -1275.444f, 4.9818f };
					Local_127.f_2[0 /*10*/].f_8 = 120.7465f;
					break;
				
				case 2:
					Local_127.f_2[0 /*10*/].f_5 = { 905.6629f, -1003.347f, 33.8966f };
					Local_127.f_2[0 /*10*/].f_8 = 271.0984f;
					break;
				
				case 3:
					Local_127.f_2[0 /*10*/].f_5 = { 231.9853f, -1935.578f, 22.4437f };
					Local_127.f_2[0 /*10*/].f_8 = 322.2929f;
					break;
				
				case 4:
					Local_127.f_2[0 /*10*/].f_5 = { -399.3887f, 230.6774f, 82.492f };
					Local_127.f_2[0 /*10*/].f_8 = 270.2787f;
					break;
				
				case 5:
					Local_127.f_2[0 /*10*/].f_5 = { -1086.639f, -2005.462f, 12.0063f };
					Local_127.f_2[0 /*10*/].f_8 = 11.8952f;
					break;
				
				case 6:
					Local_127.f_2[0 /*10*/].f_5 = { -1244.429f, -884.493f, 11.165f };
					Local_127.f_2[0 /*10*/].f_8 = 126.962f;
					break;
				
				case 7:
					Local_127.f_2[0 /*10*/].f_5 = { -835.0118f, -2630.999f, 12.9249f };
					Local_127.f_2[0 /*10*/].f_8 = 328.7649f;
					break;
				
				case 8:
					Local_127.f_2[0 /*10*/].f_5 = { 296.2087f, -3013.953f, 4.9212f };
					Local_127.f_2[0 /*10*/].f_8 = 0.24f;
					break;
				
				case 9:
					Local_127.f_2[0 /*10*/].f_5 = { 1413.249f, -1954.944f, 64.6238f };
					Local_127.f_2[0 /*10*/].f_8 = 326.5977f;
					break;
				
				case 10:
					Local_127.f_2[0 /*10*/].f_5 = { -318.5519f, -2671.678f, 5.0502f };
					Local_127.f_2[0 /*10*/].f_8 = 318.3914f;
					break;
				
				case 11:
					Local_127.f_2[0 /*10*/].f_5 = { 504.8237f, -711.9799f, 23.9127f };
					Local_127.f_2[0 /*10*/].f_8 = 177.966f;
					break;
				
				case 12:
					Local_127.f_2[0 /*10*/].f_5 = { -524.3798f, -1770.964f, 20.3834f };
					Local_127.f_2[0 /*10*/].f_8 = 245.3696f;
					break;
				
				case 13:
					Local_127.f_2[0 /*10*/].f_5 = { -286.5591f, -1359.238f, 30.3043f };
					Local_127.f_2[0 /*10*/].f_8 = 180.1492f;
					break;
				
				case 14:
					Local_127.f_2[0 /*10*/].f_5 = { 343.9299f, 321.1165f, 103.4987f };
					Local_127.f_2[0 /*10*/].f_8 = 75.8829f;
					break;
				
				case 15:
					Local_127.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_127.f_2[0 /*10*/].f_8 = 4.069f;
					break;
				
				case 16:
					Local_127.f_2[0 /*10*/].f_5 = { 777.0914f, -937.4927f, 24.7044f };
					Local_127.f_2[0 /*10*/].f_8 = 186.7581f;
					break;
				
				case 17:
					Local_127.f_2[0 /*10*/].f_5 = { 997.4642f, -2087.759f, 30.2136f };
					Local_127.f_2[0 /*10*/].f_8 = 275.8696f;
					break;
				
				case 18:
					Local_127.f_2[0 /*10*/].f_5 = { 987.9297f, -2461.676f, 27.3773f };
					Local_127.f_2[0 /*10*/].f_8 = 85.6201f;
					break;
				
				case 19:
					Local_127.f_2[0 /*10*/].f_5 = { -227.6549f, 188.3366f, 78.676f };
					Local_127.f_2[0 /*10*/].f_8 = 178.634f;
					break;
				
				case 20:
					Local_127.f_2[0 /*10*/].f_5 = { 460.4135f, -1932.892f, 23.6765f };
					Local_127.f_2[0 /*10*/].f_8 = 295.2699f;
					break;
				
				case 21:
					Local_127.f_2[0 /*10*/].f_5 = { 241.4945f, -2093.446f, 16.3114f };
					Local_127.f_2[0 /*10*/].f_8 = 225.7471f;
					break;
				
				default:
					Local_127.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_127.f_2[0 /*10*/].f_8 = 4.069f;
					break;
			}
			break;
		
		case 0:
			switch (Local_127.f_197)
			{
				case 0:
					Local_127.f_103[0 /*5*/] = { 48.6581f, -2562.141f, 5f };
					Local_127.f_103[0 /*5*/].f_3 = 18.2728f;
					Local_127.f_103[1 /*5*/] = { 51.6031f, -2571.123f, 5.0046f };
					Local_127.f_103[1 /*5*/].f_3 = 345.3663f;
					Local_127.f_103[2 /*5*/] = { 56.6838f, -2564.757f, 5.0641f };
					Local_127.f_103[2 /*5*/].f_3 = 55.4785f;
					Local_127.f_103[3 /*5*/] = { 62.9447f, -2585.068f, 5.0046f };
					Local_127.f_103[3 /*5*/].f_3 = 271.0223f;
					Local_127.f_103[4 /*5*/] = { 65.0669f, -2563.442f, 5f };
					Local_127.f_103[4 /*5*/].f_3 = 316.6382f;
					Local_127.f_103[5 /*5*/] = { 47.7942f, -2575.388f, 9.0407f };
					Local_127.f_103[5 /*5*/].f_3 = 37.4409f;
					Local_127.f_179[0 /*5*/] = { 61.478f, -2560.506f, 5f };
					Local_127.f_179[0 /*5*/].f_3 = 238.6826f;
					Local_127.f_179[1 /*5*/] = { 49.6015f, -2564.766f, 5.0046f };
					Local_127.f_179[1 /*5*/].f_3 = 154.2891f;
					break;
				
				case 1:
					Local_127.f_103[0 /*5*/] = { -1078.744f, -1271.7f, 9.5625f };
					Local_127.f_103[0 /*5*/].f_3 = 274.4253f;
					Local_127.f_103[1 /*5*/] = { -1087.233f, -1257.104f, 9.5625f };
					Local_127.f_103[1 /*5*/].f_3 = 354.2453f;
					Local_127.f_103[2 /*5*/] = { -1072.724f, -1267.841f, 4.9577f };
					Local_127.f_103[2 /*5*/].f_3 = 193.2412f;
					Local_127.f_103[3 /*5*/] = { -1085.99f, -1254.825f, 4.431f };
					Local_127.f_103[3 /*5*/].f_3 = 304.0791f;
					Local_127.f_103[4 /*5*/] = { -1081.952f, -1259.029f, 4.5607f };
					Local_127.f_103[4 /*5*/].f_3 = 251.1138f;
					Local_127.f_103[5 /*5*/] = { -1063.538f, -1257.842f, 5.0206f };
					Local_127.f_103[5 /*5*/].f_3 = 31.8546f;
					Local_127.f_179[0 /*5*/] = { -1063.267f, -1260.492f, 5.0582f };
					Local_127.f_179[0 /*5*/].f_3 = 134.6062f;
					Local_127.f_179[1 /*5*/] = { -1080.071f, -1255.526f, 4.4927f };
					Local_127.f_179[1 /*5*/].f_3 = 282.3716f;
					break;
				
				case 2:
					Local_127.f_103[0 /*5*/] = { 902.5689f, -1021.511f, 33.9664f };
					Local_127.f_103[0 /*5*/].f_3 = 337.3475f;
					Local_127.f_103[1 /*5*/] = { 894.0451f, -1020.726f, 33.9665f };
					Local_127.f_103[1 /*5*/].f_3 = 303.745f;
					Local_127.f_103[2 /*5*/] = { 901.3245f, -1033.82f, 33.9661f };
					Local_127.f_103[2 /*5*/].f_3 = 343.5762f;
					Local_127.f_103[3 /*5*/] = { 909.4354f, -1035.19f, 33.9662f };
					Local_127.f_103[3 /*5*/].f_3 = 175.276f;
					Local_127.f_103[4 /*5*/] = { 900.9361f, -1044.508f, 38.9808f };
					Local_127.f_103[4 /*5*/].f_3 = 150.7164f;
					Local_127.f_103[5 /*5*/] = { 894.3841f, -1032.681f, 38.9808f };
					Local_127.f_103[5 /*5*/].f_3 = 327.9728f;
					Local_127.f_179[0 /*5*/] = { 900.9302f, -1019.053f, 33.967f };
					Local_127.f_179[0 /*5*/].f_3 = 294.1935f;
					Local_127.f_179[1 /*5*/] = { 905.7681f, -1034.471f, 33.9661f };
					Local_127.f_179[1 /*5*/].f_3 = 222.0787f;
					break;
				
				case 3:
					Local_127.f_103[0 /*5*/] = { 241.6933f, -1941.756f, 22.6063f };
					Local_127.f_103[0 /*5*/].f_3 = 54.0685f;
					Local_127.f_103[1 /*5*/] = { 247.0794f, -1955.052f, 22.2033f };
					Local_127.f_103[1 /*5*/].f_3 = 350.0075f;
					Local_127.f_103[2 /*5*/] = { 260.179f, -1959.165f, 22.0967f };
					Local_127.f_103[2 /*5*/].f_3 = 284.5439f;
					Local_127.f_103[3 /*5*/] = { 258.183f, -1967.262f, 21.487f };
					Local_127.f_103[3 /*5*/].f_3 = 173.9707f;
					Local_127.f_103[4 /*5*/] = { 248.7987f, -1959.507f, 27.2402f };
					Local_127.f_103[4 /*5*/].f_3 = 231.9236f;
					Local_127.f_103[5 /*5*/] = { 233.8911f, -1946.98f, 27.2402f };
					Local_127.f_103[5 /*5*/].f_3 = 342.0352f;
					Local_127.f_179[0 /*5*/] = { 260.5989f, -1964.07f, 21.7532f };
					Local_127.f_179[0 /*5*/].f_3 = 147.0433f;
					Local_127.f_179[1 /*5*/] = { 241.5964f, -1944.464f, 22.3678f };
					Local_127.f_179[1 /*5*/].f_3 = 73.2698f;
					break;
				
				case 4:
					Local_127.f_103[0 /*5*/] = { -405.6343f, 182.3138f, 79.2232f };
					Local_127.f_103[0 /*5*/].f_3 = 306.9303f;
					Local_127.f_103[1 /*5*/] = { -420.0244f, 184.8413f, 79.6851f };
					Local_127.f_103[1 /*5*/].f_3 = 228.321f;
					Local_127.f_103[2 /*5*/] = { -428.4716f, 185.8607f, 79.7578f };
					Local_127.f_103[2 /*5*/].f_3 = 44.5389f;
					Local_127.f_103[3 /*5*/] = { -435.6789f, 179.3023f, 74.3213f };
					Local_127.f_103[3 /*5*/].f_3 = 85.0906f;
					Local_127.f_103[4 /*5*/] = { -399.305f, 190.302f, 80.5987f };
					Local_127.f_103[4 /*5*/].f_3 = 85.1506f;
					Local_127.f_103[5 /*5*/] = { -438.713f, 183.3993f, 74.2764f };
					Local_127.f_103[5 /*5*/].f_3 = 351.0685f;
					Local_127.f_179[0 /*5*/] = { -436.8526f, 183.3829f, 74.3109f };
					Local_127.f_179[0 /*5*/].f_3 = 7.2644f;
					Local_127.f_179[1 /*5*/] = { -405.3793f, 187.1801f, 79.9864f };
					Local_127.f_179[1 /*5*/].f_3 = 354.7918f;
					break;
				
				case 5:
					Local_127.f_103[0 /*5*/] = { -1069.206f, -2014.558f, 12.1616f };
					Local_127.f_103[0 /*5*/].f_3 = 201.0558f;
					Local_127.f_103[1 /*5*/] = { -1063.069f, -2014.715f, 12.1616f };
					Local_127.f_103[1 /*5*/].f_3 = 141.4469f;
					Local_127.f_103[2 /*5*/] = { -1067.427f, -2023.773f, 12.2027f };
					Local_127.f_103[2 /*5*/].f_3 = 197.023f;
					Local_127.f_103[3 /*5*/] = { -1060.439f, -2024.766f, 12.1616f };
					Local_127.f_103[3 /*5*/].f_3 = 152.4942f;
					Local_127.f_103[4 /*5*/] = { -1052.16f, -2022.239f, 12.1616f };
					Local_127.f_103[4 /*5*/].f_3 = 146.7409f;
					Local_127.f_103[5 /*5*/] = { -1051.755f, -2029.141f, 12.1616f };
					Local_127.f_103[5 /*5*/].f_3 = 82.1706f;
					Local_127.f_103[6 /*5*/] = { -1073.135f, -2011.029f, 12.6172f };
					Local_127.f_103[6 /*5*/].f_3 = 214.1918f;
					Local_127.f_103[7 /*5*/] = { -1071.441f, -2002.931f, 14.7905f };
					Local_127.f_103[7 /*5*/].f_3 = 187.3056f;
					Local_127.f_179[0 /*5*/] = { -1052.354f, -2025.611f, 12.1616f };
					Local_127.f_179[0 /*5*/].f_3 = 358.8676f;
					Local_127.f_179[1 /*5*/] = { -1066.611f, -2016.299f, 12.1616f };
					Local_127.f_179[1 /*5*/].f_3 = 280.333f;
					Local_127.f_179[2 /*5*/] = { -1063.965f, -2024.623f, 12.1831f };
					Local_127.f_179[2 /*5*/].f_3 = 269.67f;
					break;
				
				case 6:
					Local_127.f_103[0 /*5*/] = { -1280.076f, -805.8421f, 16.508f };
					Local_127.f_103[0 /*5*/].f_3 = 57.9953f;
					Local_127.f_103[1 /*5*/] = { -1286.231f, -811.6383f, 16.4521f };
					Local_127.f_103[1 /*5*/].f_3 = 35.4979f;
					Local_127.f_103[2 /*5*/] = { -1277.371f, -821.9402f, 16.1003f };
					Local_127.f_103[2 /*5*/].f_3 = 239.3392f;
					Local_127.f_103[3 /*5*/] = { -1267.488f, -824.3138f, 16.0992f };
					Local_127.f_103[3 /*5*/].f_3 = 144.6389f;
					Local_127.f_103[4 /*5*/] = { -1262.181f, -824.9617f, 16.0996f };
					Local_127.f_103[4 /*5*/].f_3 = 39.795f;
					Local_127.f_103[5 /*5*/] = { -1287.23f, -791.7753f, 16.5858f };
					Local_127.f_103[5 /*5*/].f_3 = 140.3937f;
					Local_127.f_179[0 /*5*/] = { -1273.327f, -823.6479f, 16.0992f };
					Local_127.f_179[0 /*5*/].f_3 = 254.419f;
					Local_127.f_179[1 /*5*/] = { -1285.171f, -807.566f, 16.5295f };
					Local_127.f_179[1 /*5*/].f_3 = 146.8347f;
					break;
				
				case 7:
					Local_127.f_103[0 /*5*/] = { -886.5272f, -2713.691f, 12.8285f };
					Local_127.f_103[0 /*5*/].f_3 = 330.9706f;
					Local_127.f_103[1 /*5*/] = { -876.2014f, -2718.661f, 12.9446f };
					Local_127.f_103[1 /*5*/].f_3 = 335.853f;
					Local_127.f_103[2 /*5*/] = { -882.2947f, -2732.553f, 12.8285f };
					Local_127.f_103[2 /*5*/].f_3 = 33.564f;
					Local_127.f_103[3 /*5*/] = { -884.4581f, -2724.486f, 12.8285f };
					Local_127.f_103[3 /*5*/].f_3 = 22.4268f;
					Local_127.f_103[4 /*5*/] = { -887.4197f, -2737.267f, 12.8285f };
					Local_127.f_103[4 /*5*/].f_3 = 356.0724f;
					Local_127.f_103[5 /*5*/] = { -894.7762f, -2736.815f, 12.8285f };
					Local_127.f_103[5 /*5*/].f_3 = 164.3784f;
					Local_127.f_103[6 /*5*/] = { -897.211f, -2750.013f, 12.9445f };
					Local_127.f_103[6 /*5*/].f_3 = 321.2128f;
					Local_127.f_103[7 /*5*/] = { -882.6691f, -2745.853f, 12.9362f };
					Local_127.f_103[7 /*5*/].f_3 = 64.3587f;
					Local_127.f_103[8 /*5*/] = { -907.6017f, -2749.353f, 12.9445f };
					Local_127.f_103[8 /*5*/].f_3 = 335.7514f;
					Local_127.f_103[9 /*5*/] = { -869.9126f, -2715.025f, 12.9446f };
					Local_127.f_103[9 /*5*/].f_3 = 8.2036f;
					Local_127.f_179[0 /*5*/] = { -882.8745f, -2713.687f, 12.8285f };
					Local_127.f_179[0 /*5*/].f_3 = 239.8798f;
					Local_127.f_179[1 /*5*/] = { -883.874f, -2728.786f, 12.8285f };
					Local_127.f_179[1 /*5*/].f_3 = 201.2263f;
					Local_127.f_179[2 /*5*/] = { -891.2535f, -2737.411f, 12.8285f };
					Local_127.f_179[2 /*5*/].f_3 = 92.5365f;
					break;
				
				case 8:
					Local_127.f_103[0 /*5*/] = { 258.4958f, -3019.888f, 4.7612f };
					Local_127.f_103[0 /*5*/].f_3 = 190.0675f;
					Local_127.f_103[1 /*5*/] = { 273.9505f, -3013.159f, 4.7016f };
					Local_127.f_103[1 /*5*/].f_3 = 68.4427f;
					Local_127.f_103[2 /*5*/] = { 273.0544f, -3016.924f, 4.7049f };
					Local_127.f_103[2 /*5*/].f_3 = 136.0059f;
					Local_127.f_103[3 /*5*/] = { 274.0455f, -2995.704f, 4.7009f };
					Local_127.f_103[3 /*5*/].f_3 = 145.0681f;
					Local_127.f_103[4 /*5*/] = { 277.7727f, -3020.606f, 10.5614f };
					Local_127.f_103[4 /*5*/].f_3 = 59.5107f;
					Local_127.f_103[5 /*5*/] = { 277.1279f, -3034.719f, 10.5614f };
					Local_127.f_103[5 /*5*/].f_3 = 113.9025f;
					Local_127.f_179[0 /*5*/] = { 266.3998f, -3022.136f, 4.7302f };
					Local_127.f_179[0 /*5*/].f_3 = 14.1592f;
					Local_127.f_179[1 /*5*/] = { 270.9944f, -2999.383f, 4.7128f };
					Local_127.f_179[1 /*5*/].f_3 = 145.314f;
					break;
				
				case 9:
					Local_127.f_103[0 /*5*/] = { 1546.335f, -2124.289f, 76.1382f };
					Local_127.f_103[0 /*5*/].f_3 = 17.7805f;
					Local_127.f_103[1 /*5*/] = { 1554.385f, -2125.222f, 76.3125f };
					Local_127.f_103[1 /*5*/].f_3 = 10.9741f;
					Local_127.f_103[2 /*5*/] = { 1558.224f, -2118.532f, 76.3765f };
					Local_127.f_103[2 /*5*/].f_3 = 15.6854f;
					Local_127.f_103[3 /*5*/] = { 1547.75f, -2143.708f, 76.4844f };
					Local_127.f_103[3 /*5*/].f_3 = 154.3238f;
					Local_127.f_103[4 /*5*/] = { 1552.05f, -2147.172f, 76.5383f };
					Local_127.f_103[4 /*5*/].f_3 = 147.9245f;
					Local_127.f_103[5 /*5*/] = { 1563.341f, -2138.102f, 76.5841f };
					Local_127.f_103[5 /*5*/].f_3 = 149.5447f;
					Local_127.f_103[6 /*5*/] = { 1561.244f, -2133.029f, 76.4828f };
					Local_127.f_103[6 /*5*/].f_3 = 76.8144f;
					Local_127.f_103[7 /*5*/] = { 1569.277f, -2130.628f, 77.3351f };
					Local_127.f_103[7 /*5*/].f_3 = 112.2364f;
					Local_127.f_179[0 /*5*/] = { 1550.601f, -2145.957f, 76.5271f };
					Local_127.f_179[0 /*5*/].f_3 = 296.1894f;
					Local_127.f_179[1 /*5*/] = { 1563.138f, -2135.943f, 76.5206f };
					Local_127.f_179[1 /*5*/].f_3 = 260.3118f;
					Local_127.f_179[2 /*5*/] = { 1550.38f, -2123.159f, 76.2165f };
					Local_127.f_179[2 /*5*/].f_3 = 235.2799f;
					break;
				
				case 10:
					Local_127.f_103[0 /*5*/] = { -307.7643f, -2684.145f, 5.0079f };
					Local_127.f_103[0 /*5*/].f_3 = 10.2057f;
					Local_127.f_103[1 /*5*/] = { -298.4151f, -2685.329f, 5.1595f };
					Local_127.f_103[1 /*5*/].f_3 = 34.7011f;
					Local_127.f_103[2 /*5*/] = { -309.9699f, -2692.377f, 5.1532f };
					Local_127.f_103[2 /*5*/].f_3 = 231.6414f;
					Local_127.f_103[3 /*5*/] = { -315.5637f, -2698.447f, 6.55f };
					Local_127.f_103[3 /*5*/].f_3 = 279.1803f;
					Local_127.f_103[4 /*5*/] = { -307.4792f, -2699.072f, 5.0003f };
					Local_127.f_103[4 /*5*/].f_3 = 2.2931f;
					Local_127.f_103[5 /*5*/] = { -304.3626f, -2700.868f, 5.0003f };
					Local_127.f_103[5 /*5*/].f_3 = 253.2487f;
					Local_127.f_103[6 /*5*/] = { -306.5913f, -2707.836f, 5.1532f };
					Local_127.f_103[6 /*5*/].f_3 = 313.0547f;
					Local_127.f_103[7 /*5*/] = { -303.2011f, -2711.413f, 5.0003f };
					Local_127.f_103[7 /*5*/].f_3 = 288.4283f;
					Local_127.f_179[0 /*5*/] = { -304.9815f, -2709.62f, 5.0003f };
					Local_127.f_179[0 /*5*/].f_3 = 135.5251f;
					Local_127.f_179[1 /*5*/] = { -305.7259f, -2696.407f, 5.0003f };
					Local_127.f_179[1 /*5*/].f_3 = 207.3978f;
					Local_127.f_179[2 /*5*/] = { -303.8944f, -2685.304f, 5.0003f };
					Local_127.f_179[2 /*5*/].f_3 = 255.2084f;
					break;
				
				case 11:
					Local_127.f_103[0 /*5*/] = { 518.3859f, -657.3704f, 23.7512f };
					Local_127.f_103[0 /*5*/].f_3 = 138.1634f;
					Local_127.f_103[1 /*5*/] = { 519.1835f, -649.9944f, 23.7512f };
					Local_127.f_103[1 /*5*/].f_3 = 17.4978f;
					Local_127.f_103[2 /*5*/] = { 495.9756f, -648.6689f, 31.7074f };
					Local_127.f_103[2 /*5*/].f_3 = 283.3737f;
					Local_127.f_103[3 /*5*/] = { 504.1287f, -641.0121f, 23.7369f };
					Local_127.f_103[3 /*5*/].f_3 = 303.125f;
					Local_127.f_103[4 /*5*/] = { 498.1048f, -638.1683f, 23.9727f };
					Local_127.f_103[4 /*5*/].f_3 = 289.9783f;
					Local_127.f_103[5 /*5*/] = { 499.259f, -630.4283f, 23.7512f };
					Local_127.f_103[5 /*5*/].f_3 = 194.1317f;
					Local_127.f_103[6 /*5*/] = { 508.6016f, -626.3681f, 23.7571f };
					Local_127.f_103[6 /*5*/].f_3 = 343.9152f;
					Local_127.f_103[7 /*5*/] = { 497.44f, -661.5337f, 27.617f };
					Local_127.f_103[7 /*5*/].f_3 = 199.5863f;
					Local_127.f_179[0 /*5*/] = { 517.3517f, -654.2748f, 23.7512f };
					Local_127.f_179[0 /*5*/].f_3 = 150.2542f;
					Local_127.f_179[1 /*5*/] = { 505.3363f, -645.2184f, 23.7512f };
					Local_127.f_179[1 /*5*/].f_3 = 23.9108f;
					Local_127.f_179[2 /*5*/] = { 508.3529f, -630.1296f, 23.7512f };
					Local_127.f_179[2 /*5*/].f_3 = 127.1383f;
					break;
				
				case 12:
					Local_127.f_103[0 /*5*/] = { -546.3519f, -1769.694f, 20.5902f };
					Local_127.f_103[0 /*5*/].f_3 = 277.4846f;
					Local_127.f_103[1 /*5*/] = { -541.7958f, -1776.458f, 20.5973f };
					Local_127.f_103[1 /*5*/].f_3 = 356.3462f;
					Local_127.f_103[2 /*5*/] = { -534.571f, -1772.565f, 20.4432f };
					Local_127.f_103[2 /*5*/].f_3 = 23.1421f;
					Local_127.f_103[3 /*5*/] = { -527.7571f, -1776.274f, 20.367f };
					Local_127.f_103[3 /*5*/].f_3 = 255.9772f;
					Local_127.f_103[4 /*5*/] = { -531.6744f, -1781.516f, 20.4994f };
					Local_127.f_103[4 /*5*/].f_3 = 295.9945f;
					Local_127.f_103[5 /*5*/] = { -555.2966f, -1799.182f, 21.5471f };
					Local_127.f_103[5 /*5*/].f_3 = 327.6154f;
					Local_127.f_103[6 /*5*/] = { -549.1064f, -1786.567f, 21.012f };
					Local_127.f_103[6 /*5*/].f_3 = 334.4709f;
					Local_127.f_103[7 /*5*/] = { -518.8139f, -1785.754f, 20.6425f };
					Local_127.f_103[7 /*5*/].f_3 = 206.6088f;
					Local_127.f_179[0 /*5*/] = { -556.8245f, -1795.383f, 21.5195f };
					Local_127.f_179[0 /*5*/].f_3 = 204.3955f;
					Local_127.f_179[1 /*5*/] = { -531.0875f, -1774.35f, 20.4042f };
					Local_127.f_179[1 /*5*/].f_3 = 77.9003f;
					Local_127.f_179[2 /*5*/] = { -548.1949f, -1767.868f, 20.6224f };
					Local_127.f_179[2 /*5*/].f_3 = 102.3641f;
					break;
				
				case 13:
					Local_127.f_103[0 /*5*/] = { -295.7925f, -1366.301f, 30.3114f };
					Local_127.f_103[0 /*5*/].f_3 = 200.7773f;
					Local_127.f_103[1 /*5*/] = { -294.7914f, -1361.439f, 30.3099f };
					Local_127.f_103[1 /*5*/].f_3 = 280.8006f;
					Local_127.f_103[2 /*5*/] = { -294.8237f, -1355.167f, 30.3168f };
					Local_127.f_103[2 /*5*/].f_3 = 223.8718f;
					Local_127.f_103[3 /*5*/] = { -291.4968f, -1352.201f, 30.2753f };
					Local_127.f_103[3 /*5*/].f_3 = 205.2611f;
					Local_127.f_103[4 /*5*/] = { -294.7546f, -1345.713f, 30.3095f };
					Local_127.f_103[4 /*5*/].f_3 = 323.2399f;
					Local_127.f_103[5 /*5*/] = { -291.2322f, -1339.262f, 30.2775f };
					Local_127.f_103[5 /*5*/].f_3 = 257.2056f;
					Local_127.f_103[6 /*5*/] = { -295.7278f, -1331.49f, 30.3084f };
					Local_127.f_103[6 /*5*/].f_3 = 75.2552f;
					Local_127.f_103[7 /*5*/] = { -293.849f, -1328.756f, 30.2182f };
					Local_127.f_103[7 /*5*/].f_3 = 328.9491f;
					Local_127.f_179[0 /*5*/] = { -292.8152f, -1332.385f, 30.1537f };
					Local_127.f_179[0 /*5*/].f_3 = 29.6972f;
					Local_127.f_179[1 /*5*/] = { -291.6872f, -1348.131f, 30.282f };
					Local_127.f_179[1 /*5*/].f_3 = 166.5207f;
					Local_127.f_179[2 /*5*/] = { -295.23f, -1364.201f, 30.3097f };
					Local_127.f_179[2 /*5*/].f_3 = 108.2429f;
					break;
				
				case 14:
					Local_127.f_103[0 /*5*/] = { 344.5797f, 336.7456f, 104.1594f };
					Local_127.f_103[0 /*5*/].f_3 = 346.2658f;
					Local_127.f_103[1 /*5*/] = { 342.3423f, 332.3715f, 103.7572f };
					Local_127.f_103[1 /*5*/].f_3 = 102.4295f;
					Local_127.f_103[2 /*5*/] = { 341.1604f, 310.392f, 103.4193f };
					Local_127.f_103[2 /*5*/].f_3 = 61.0026f;
					Local_127.f_103[3 /*5*/] = { 346.6567f, 309.6925f, 103.1454f };
					Local_127.f_103[3 /*5*/].f_3 = 257.871f;
					Local_127.f_103[4 /*5*/] = { 350.7382f, 328.2918f, 103.2696f };
					Local_127.f_103[4 /*5*/].f_3 = 117.8644f;
					Local_127.f_103[5 /*5*/] = { 354.2978f, 327.3369f, 103.0974f };
					Local_127.f_103[5 /*5*/].f_3 = 177.6163f;
					Local_127.f_103[6 /*5*/] = { 366.9816f, 326.3944f, 102.6179f };
					Local_127.f_103[6 /*5*/].f_3 = 201.951f;
					Local_127.f_103[7 /*5*/] = { 363.9641f, 322.1239f, 102.6943f };
					Local_127.f_103[7 /*5*/].f_3 = 243.2871f;
					Local_127.f_179[0 /*5*/] = { 343.0425f, 312.0052f, 103.3437f };
					Local_127.f_179[0 /*5*/].f_3 = 258.1888f;
					Local_127.f_179[1 /*5*/] = { 360.5493f, 322.6658f, 102.7946f };
					Local_127.f_179[1 /*5*/].f_3 = 286.3943f;
					Local_127.f_179[2 /*5*/] = { 343.9996f, 332.1288f, 103.7176f };
					Local_127.f_179[2 /*5*/].f_3 = 7.4532f;
					break;
				
				case 15:
					Local_127.f_103[0 /*5*/] = { 962.8411f, -1572.776f, 29.5579f };
					Local_127.f_103[0 /*5*/].f_3 = 198.1588f;
					Local_127.f_103[1 /*5*/] = { 958.9659f, -1572.392f, 29.6097f };
					Local_127.f_103[1 /*5*/].f_3 = 93.0019f;
					Local_127.f_103[2 /*5*/] = { 974.9329f, -1566.858f, 29.5658f };
					Local_127.f_103[2 /*5*/].f_3 = 171.6639f;
					Local_127.f_103[3 /*5*/] = { 977.1616f, -1563.333f, 29.6385f };
					Local_127.f_103[3 /*5*/].f_3 = 4.8635f;
					Local_127.f_103[4 /*5*/] = { 961.7667f, -1559.233f, 29.8001f };
					Local_127.f_103[4 /*5*/].f_3 = 241.449f;
					Local_127.f_103[5 /*5*/] = { 961.8814f, -1556.363f, 29.807f };
					Local_127.f_103[5 /*5*/].f_3 = 275.0858f;
					Local_127.f_103[6 /*5*/] = { 968.3688f, -1552.087f, 29.6598f };
					Local_127.f_103[6 /*5*/].f_3 = 176.2653f;
					Local_127.f_103[7 /*5*/] = { 965.8116f, -1547.661f, 29.6223f };
					Local_127.f_103[7 /*5*/].f_3 = 333.7709f;
					Local_127.f_103[8 /*5*/] = { 957.9225f, -1553.855f, 33.7974f };
					Local_127.f_103[8 /*5*/].f_3 = 308.3917f;
					Local_127.f_103[9 /*5*/] = { 957.7077f, -1566.216f, 33.7974f };
					Local_127.f_103[9 /*5*/].f_3 = 219.3558f;
					Local_127.f_179[0 /*5*/] = { 965.2025f, -1549.952f, 29.6078f };
					Local_127.f_179[0 /*5*/].f_3 = 41.5896f;
					Local_127.f_179[1 /*5*/] = { 974.5963f, -1564.88f, 29.5937f };
					Local_127.f_179[1 /*5*/].f_3 = 251.9554f;
					Local_127.f_179[2 /*5*/] = { 960.7539f, -1572.775f, 29.6016f };
					Local_127.f_179[2 /*5*/].f_3 = 322.5412f;
					break;
				
				case 16:
					Local_127.f_103[0 /*5*/] = { 764.532f, -917.6445f, 24.3477f };
					Local_127.f_103[0 /*5*/].f_3 = 200.6824f;
					Local_127.f_103[1 /*5*/] = { 757.4073f, -914.5825f, 24.2703f };
					Local_127.f_103[1 /*5*/].f_3 = 268.7243f;
					Local_127.f_103[2 /*5*/] = { 763.8087f, -928.9955f, 24.4204f };
					Local_127.f_103[2 /*5*/].f_3 = 359.3907f;
					Local_127.f_103[3 /*5*/] = { 762.9298f, -935.2947f, 24.4307f };
					Local_127.f_103[3 /*5*/].f_3 = 337.1544f;
					Local_127.f_103[4 /*5*/] = { 720.5742f, -888.9393f, 23.2796f };
					Local_127.f_103[4 /*5*/].f_3 = 301.5278f;
					Local_127.f_103[5 /*5*/] = { 763.72f, -888.6782f, 24.0956f };
					Local_127.f_103[5 /*5*/].f_3 = 196.7567f;
					Local_127.f_103[6 /*5*/] = { 763.0903f, -884.3161f, 23.9395f };
					Local_127.f_103[6 /*5*/].f_3 = 321.9963f;
					Local_127.f_103[7 /*5*/] = { 743.7985f, -872.6409f, 24.0443f };
					Local_127.f_103[7 /*5*/].f_3 = 251.8575f;
					Local_127.f_103[8 /*5*/] = { 741.907f, -881.8726f, 24.0428f };
					Local_127.f_103[8 /*5*/].f_3 = 268.2814f;
					Local_127.f_103[9 /*5*/] = { 752.8027f, -884.268f, 24.1054f };
					Local_127.f_103[9 /*5*/].f_3 = 282.8442f;
					Local_127.f_179[0 /*5*/] = { 763.8987f, -886.4079f, 24.0887f };
					Local_127.f_179[0 /*5*/].f_3 = 85.7335f;
					Local_127.f_179[1 /*5*/] = { 744.0313f, -877.4133f, 24.0497f };
					Local_127.f_179[1 /*5*/].f_3 = 152.0251f;
					Local_127.f_179[2 /*5*/] = { 763.1165f, -916.4111f, 24.3315f };
					Local_127.f_179[2 /*5*/].f_3 = 133.3755f;
					break;
				
				case 17:
					Local_127.f_103[0 /*5*/] = { 1003.053f, -2149.714f, 37.3448f };
					Local_127.f_103[0 /*5*/].f_3 = 182.3138f;
					Local_127.f_103[1 /*5*/] = { 1010.169f, -2135.276f, 29.5516f };
					Local_127.f_103[1 /*5*/].f_3 = 349.7712f;
					Local_127.f_103[2 /*5*/] = { 1011.614f, -2142.546f, 29.5516f };
					Local_127.f_103[2 /*5*/].f_3 = 2.675f;
					Local_127.f_103[3 /*5*/] = { 1018.429f, -2145.479f, 29.5994f };
					Local_127.f_103[3 /*5*/].f_3 = 263.1569f;
					Local_127.f_103[4 /*5*/] = { 1020.569f, -2148.083f, 30.5334f };
					Local_127.f_103[4 /*5*/].f_3 = 259.3002f;
					Local_127.f_103[5 /*5*/] = { 1011.448f, -2146.674f, 29.5516f };
					Local_127.f_103[5 /*5*/].f_3 = 139.4625f;
					Local_127.f_103[6 /*5*/] = { 1013.688f, -2150.349f, 30.5334f };
					Local_127.f_103[6 /*5*/].f_3 = 91.3056f;
					Local_127.f_103[7 /*5*/] = { 1011.563f, -2153.055f, 29.5516f };
					Local_127.f_103[7 /*5*/].f_3 = 44.0468f;
					Local_127.f_103[8 /*5*/] = { 1008.21f, -2156.475f, 29.5516f };
					Local_127.f_103[8 /*5*/].f_3 = 347.5848f;
					Local_127.f_103[9 /*5*/] = { 1007.324f, -2161.736f, 29.5516f };
					Local_127.f_103[9 /*5*/].f_3 = 172.5634f;
					Local_127.f_179[0 /*5*/] = { 1007.872f, -2138.394f, 29.5516f };
					Local_127.f_179[0 /*5*/].f_3 = 139.8753f;
					Local_127.f_179[1 /*5*/] = { 1013.982f, -2145.138f, 29.5516f };
					Local_127.f_179[1 /*5*/].f_3 = 259.47f;
					Local_127.f_179[2 /*5*/] = { 1008.767f, -2160.593f, 29.5516f };
					Local_127.f_179[2 /*5*/].f_3 = 200.1719f;
					break;
				
				case 18:
					Local_127.f_103[0 /*5*/] = { 1016.825f, -2498.752f, 27.3493f };
					Local_127.f_103[0 /*5*/].f_3 = 61.8849f;
					Local_127.f_103[1 /*5*/] = { 996.0087f, -2540.799f, 27.3073f };
					Local_127.f_103[1 /*5*/].f_3 = 3.7927f;
					Local_127.f_103[2 /*5*/] = { 1017.77f, -2493.367f, 27.3879f };
					Local_127.f_103[2 /*5*/].f_3 = 88.4198f;
					Local_127.f_103[3 /*5*/] = { 1012.715f, -2506.288f, 27.302f };
					Local_127.f_103[3 /*5*/].f_3 = 27.7498f;
					Local_127.f_103[4 /*5*/] = { 996.7639f, -2512.485f, 27.302f };
					Local_127.f_103[4 /*5*/].f_3 = 40.6136f;
					Local_127.f_103[5 /*5*/] = { 1015.915f, -2514.646f, 27.3035f };
					Local_127.f_103[5 /*5*/].f_3 = 56.6315f;
					Local_127.f_103[6 /*5*/] = { 1011.236f, -2524.491f, 27.3083f };
					Local_127.f_103[6 /*5*/].f_3 = 15.7729f;
					Local_127.f_103[7 /*5*/] = { 1006.954f, -2527.826f, 27.3043f };
					Local_127.f_103[7 /*5*/].f_3 = 101.1154f;
					Local_127.f_103[8 /*5*/] = { 999.3998f, -2523.023f, 27.302f };
					Local_127.f_103[8 /*5*/].f_3 = 354.1063f;
					Local_127.f_103[9 /*5*/] = { 994.9509f, -2527.176f, 27.302f };
					Local_127.f_103[9 /*5*/].f_3 = 125.381f;
					Local_127.f_179[0 /*5*/] = { 1012.638f, -2502.169f, 27.302f };
					Local_127.f_179[0 /*5*/].f_3 = 316.6046f;
					Local_127.f_179[1 /*5*/] = { 1013.986f, -2523.53f, 27.3055f };
					Local_127.f_179[1 /*5*/].f_3 = 240.5153f;
					Local_127.f_179[2 /*5*/] = { 996.9083f, -2523.664f, 27.302f };
					Local_127.f_179[2 /*5*/].f_3 = 164.8845f;
					break;
				
				case 19:
					Local_127.f_103[0 /*5*/] = { -266.5881f, 190.2768f, 84.3252f };
					Local_127.f_103[0 /*5*/].f_3 = 121.811f;
					Local_127.f_103[1 /*5*/] = { -271.8751f, 195.5884f, 84.6149f };
					Local_127.f_103[1 /*5*/].f_3 = 274.2204f;
					Local_127.f_103[2 /*5*/] = { -265.1418f, 201.9027f, 84.4806f };
					Local_127.f_103[2 /*5*/].f_3 = 181.8879f;
					Local_127.f_103[3 /*5*/] = { -261.9281f, 201.8817f, 84.2857f };
					Local_127.f_103[3 /*5*/].f_3 = 253.3033f;
					Local_127.f_103[4 /*5*/] = { -260.6143f, 186.3196f, 84.0337f };
					Local_127.f_103[4 /*5*/].f_3 = 4.0892f;
					Local_127.f_103[5 /*5*/] = { -255.9788f, 194.8307f, 83.7181f };
					Local_127.f_103[5 /*5*/].f_3 = 103.808f;
					Local_127.f_103[6 /*5*/] = { -252.9307f, 192.114f, 82.7736f };
					Local_127.f_103[6 /*5*/].f_3 = 262.768f;
					Local_127.f_103[7 /*5*/] = { -242.0461f, 190.5416f, 79.3582f };
					Local_127.f_103[7 /*5*/].f_3 = 200.5955f;
					Local_127.f_103[8 /*5*/] = { -241.619f, 202.893f, 82.2432f };
					Local_127.f_103[8 /*5*/].f_3 = 209.8882f;
					Local_127.f_103[9 /*5*/] = { -235.1685f, 202.9628f, 82.1429f };
					Local_127.f_103[9 /*5*/].f_3 = 338.4766f;
					Local_127.f_179[0 /*5*/] = { -237.4442f, 203.1399f, 82.1887f };
					Local_127.f_179[0 /*5*/].f_3 = 159.4961f;
					Local_127.f_179[1 /*5*/] = { -251.6716f, 193.9603f, 82.6293f };
					Local_127.f_179[1 /*5*/].f_3 = 87.8942f;
					Local_127.f_179[2 /*5*/] = { -266.8874f, 193.015f, 84.3937f };
					Local_127.f_179[2 /*5*/].f_3 = 65.6299f;
					break;
				
				case 20:
					Local_127.f_103[0 /*5*/] = { 534.4465f, -1941.385f, 30.2292f };
					Local_127.f_103[0 /*5*/].f_3 = 311.177f;
					Local_127.f_103[1 /*5*/] = { 558.1476f, -1927.909f, 23.7833f };
					Local_127.f_103[1 /*5*/].f_3 = 342.9807f;
					Local_127.f_103[2 /*5*/] = { 546.3505f, -1928.6f, 23.8219f };
					Local_127.f_103[2 /*5*/].f_3 = 311.7955f;
					Local_127.f_103[3 /*5*/] = { 547.1193f, -1947.377f, 23.9851f };
					Local_127.f_103[3 /*5*/].f_3 = 250.7509f;
					Local_127.f_103[4 /*5*/] = { 572.5258f, -1930.575f, 23.7494f };
					Local_127.f_103[4 /*5*/].f_3 = 346.9088f;
					Local_127.f_103[5 /*5*/] = { 539.3912f, -1923.777f, 23.9851f };
					Local_127.f_103[5 /*5*/].f_3 = 316.7842f;
					Local_127.f_103[6 /*5*/] = { 563.26f, -1920.301f, 23.7598f };
					Local_127.f_103[6 /*5*/].f_3 = 325.4008f;
					Local_127.f_103[7 /*5*/] = { 533.5303f, -1938.4f, 23.9851f };
					Local_127.f_103[7 /*5*/].f_3 = 309.4188f;
					Local_127.f_179[0 /*5*/] = { 548.8199f, -1930.106f, 23.8175f };
					Local_127.f_179[0 /*5*/].f_3 = 159.5928f;
					Local_127.f_179[1 /*5*/] = { 551.0328f, -1946.83f, 23.9851f };
					Local_127.f_179[1 /*5*/].f_3 = 84.4521f;
					Local_127.f_179[2 /*5*/] = { 561.5193f, -1927.552f, 23.7627f };
					Local_127.f_179[2 /*5*/].f_3 = 80.685f;
					break;
				
				case 21:
					Local_127.f_103[0 /*5*/] = { 110.1075f, -2228.434f, 5.1712f };
					Local_127.f_103[0 /*5*/].f_3 = 265.3441f;
					Local_127.f_103[1 /*5*/] = { 109.2036f, -2234.949f, 5.0633f };
					Local_127.f_103[1 /*5*/].f_3 = 271.2665f;
					Local_127.f_103[2 /*5*/] = { 92.4692f, -2228.285f, 5.0333f };
					Local_127.f_103[2 /*5*/].f_3 = 246.2804f;
					Local_127.f_103[3 /*5*/] = { 89.8902f, -2221.848f, 5.0483f };
					Local_127.f_103[3 /*5*/].f_3 = 77.5276f;
					Local_127.f_103[4 /*5*/] = { 119.3045f, -2188.549f, 4.9608f };
					Local_127.f_103[4 /*5*/].f_3 = 260.6882f;
					Local_127.f_103[5 /*5*/] = { 135.5824f, -2185.041f, 5.0909f };
					Local_127.f_103[5 /*5*/].f_3 = 248.253f;
					Local_127.f_103[6 /*5*/] = { 102.5402f, -2183.203f, 4.953f };
					Local_127.f_103[6 /*5*/].f_3 = 254.5778f;
					Local_127.f_103[7 /*5*/] = { 93.2016f, -2199.761f, 5.0431f };
					Local_127.f_103[7 /*5*/].f_3 = 178.9871f;
					Local_127.f_103[8 /*5*/] = { 95.4634f, -2193.558f, 5.0313f };
					Local_127.f_103[8 /*5*/].f_3 = 283.6666f;
					Local_127.f_103[9 /*5*/] = { 99.6321f, -2203.004f, 5.181f };
					Local_127.f_103[9 /*5*/].f_3 = 312.4828f;
					Local_127.f_179[0 /*5*/] = { 95.909f, -2196.279f, 5.0431f };
					Local_127.f_179[0 /*5*/].f_3 = 139.258f;
					Local_127.f_179[1 /*5*/] = { 120.4857f, -2191.816f, 5.0209f };
					Local_127.f_179[1 /*5*/].f_3 = 159.3418f;
					Local_127.f_179[2 /*5*/] = { 109.2645f, -2231.557f, 5.0333f };
					Local_127.f_179[2 /*5*/].f_3 = 62.2714f;
					break;
				
				default:
					Local_127.f_103[0 /*5*/] = { 968.5941f, -1557.899f, 29.6842f };
					Local_127.f_103[0 /*5*/].f_3 = 114.28f;
					Local_127.f_103[1 /*5*/] = { 965.9659f, -1571.214f, 29.5878f };
					Local_127.f_103[1 /*5*/].f_3 = 62.3577f;
					Local_127.f_103[2 /*5*/] = { 951.7892f, -1575.491f, 29.434f };
					Local_127.f_103[2 /*5*/].f_3 = 41.1548f;
					Local_127.f_103[3 /*5*/] = { 939.3943f, -1575.787f, 29.345f };
					Local_127.f_103[3 /*5*/].f_3 = 85.4368f;
					Local_127.f_103[4 /*5*/] = { 928.4522f, -1577.374f, 29.4239f };
					Local_127.f_103[4 /*5*/].f_3 = 336.8404f;
					Local_127.f_103[5 /*5*/] = { 921.6147f, -1573.96f, 29.6373f };
					Local_127.f_103[5 /*5*/].f_3 = 337.606f;
					Local_127.f_103[6 /*5*/] = { 920.303f, -1564.142f, 29.7523f };
					Local_127.f_103[6 /*5*/].f_3 = 52.3963f;
					Local_127.f_103[7 /*5*/] = { 918.5511f, -1552.143f, 29.7808f };
					Local_127.f_103[7 /*5*/].f_3 = 244.4705f;
					Local_127.f_103[8 /*5*/] = { 922.5096f, -1543.686f, 29.8074f };
					Local_127.f_103[8 /*5*/].f_3 = 8.0474f;
					Local_127.f_103[9 /*5*/] = { 910.6829f, -1547.757f, 29.6528f };
					Local_127.f_103[9 /*5*/].f_3 = 217.9933f;
					Local_127.f_103[10 /*5*/] = { 910.2541f, -1557.902f, 29.7034f };
					Local_127.f_103[10 /*5*/].f_3 = 237.5501f;
					Local_127.f_103[11 /*5*/] = { 909.9764f, -1572.07f, 29.791f };
					Local_127.f_103[11 /*5*/].f_3 = 287.341f;
					Local_127.f_179[0 /*5*/] = { 912.0468f, -1562.435f, 29.7522f };
					Local_127.f_179[0 /*5*/].f_3 = 305.0547f;
					Local_127.f_179[1 /*5*/] = { 903.5677f, -1559.325f, 29.6796f };
					Local_127.f_179[1 /*5*/].f_3 = 301.2764f;
					Local_127.f_179[2 /*5*/] = { 970.6998f, -1558.555f, 29.6813f };
					Local_127.f_179[2 /*5*/].f_3 = 43.0116f;
					break;
			}
			break;
	}
}

var func_169()
{
	if (Local_127.f_195 != -1)
	{
		return Local_127.f_195;
	}
	Local_127.f_195 = unk_0x895FB9FE885E36ED(0, 3);
	return Local_127.f_195;
}

int func_170(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_171(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x62E688B72E3C57B0())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_172()
{
	char* sVar0;
	
	func_177();
	if (unk_0xAA4F14DA15DB0B51(iLocal_751, 9))
	{
		return;
	}
	if (func_979())
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 0))
		{
			unk_0x9B17C5A6F6836A83("DisableFlightMusic", 1);
			unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 1);
			unk_0xF6082E2ADA1C795B(&iLocal_751, 0);
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 1))
		{
			if (!func_383())
			{
				sVar0 = "EXEC1_UNDER_ATTACK_START";
			}
			else
			{
				sVar0 = "EXEC1_DEFEND_FLEEING_START";
			}
			if (unk_0x988197573BDAD49A(sVar0))
			{
				unk_0xF6082E2ADA1C795B(&iLocal_751, 1);
			}
		}
		if (!func_383())
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 3))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 13))
				{
					if (unk_0x988197573BDAD49A("EXEC1_UNDER_ATTACK_ARRIVE_SMA"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_751, 3);
					}
				}
			}
		}
		if (!func_383())
		{
			if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 1))
			{
				if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 4))
				{
					if (unk_0x988197573BDAD49A("EXEC1_UNDER_ATTACK_STOP"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_751, 4);
					}
				}
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 6))
		{
			if ((((unk_0xAA4F14DA15DB0B51(Local_127.f_1, 3) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 15)) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 5)) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 9)) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 8))
			{
				if (unk_0x988197573BDAD49A("EXEC1_UNDER_ATTACK_FAIL"))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_751, 6);
				}
			}
		}
		if (func_383())
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 16))
			{
				if (Local_127.f_215 == -1)
				{
					if (func_173("DCONTRA_OBJ4"))
					{
						if (unk_0x988197573BDAD49A("EXEC1_DEFEND_FLEEING_RETRIEVE_SMA"))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_751, 16);
						}
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 17))
			{
				if (Local_127.f_215 != -1)
				{
					if (unk_0x988197573BDAD49A("EXEC1_DEFEND_FLEEING_RETURN_SMA"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_751, 17);
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 18))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 4))
				{
					if (unk_0x988197573BDAD49A("EXEC1_DEFEND_FLEEING_STOP"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_751, 18);
					}
				}
			}
		}
	}
}

int func_173(char* sParam0)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (!func_176())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		if (unk_0x8A3FBC299F47ED6B(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return 0;
	}
	return func_174(sParam0);
}

bool func_174(char* sParam0)
{
	if (!func_176())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_175(sParam0);
	}
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12));
}

bool func_175(char* sParam0)
{
	if (!func_176())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

int func_176()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

void func_177()
{
	if (unk_0xAA4F14DA15DB0B51(iLocal_751, 8))
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_751, 9))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 10))
			{
				if (unk_0xAA4F14DA15DB0B51(iLocal_751, 11))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 12))
					{
						unk_0x6040865446FA4030(1);
						unk_0x9B17C5A6F6836A83("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 15))
				{
					if (unk_0x988197573BDAD49A("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_751, 15);
					}
				}
				if (unk_0xAA4F14DA15DB0B51(iLocal_751, 15))
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 13))
					{
						if (unk_0x988197573BDAD49A("APT_FADE_IN_RADIO"))
						{
							unk_0xF6082E2ADA1C795B(&iLocal_751, 13);
						}
					}
					if (unk_0xAA4F14DA15DB0B51(iLocal_751, 13))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_751, 10);
					}
				}
			}
		}
	}
}

void func_178()
{
	struct<3> Var0;
	float fVar3;
	
	if (!func_979() && !func_381())
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_750, 15))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 16))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xA0F7964BC7FD74A9() == 0)
				{
					unk_0xE0125DCD8DB3EFC3(5);
					unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 2, 0);
					unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
					unk_0xF6082E2ADA1C795B(&iLocal_750, 16);
				}
			}
		}
		return;
	}
	if (func_383())
	{
		if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
		{
			Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 0) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	fVar3 = unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var0);
	if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 17))
	{
		if (fVar3 < 250000f)
		{
			unk_0xE0125DCD8DB3EFC3(0);
			unk_0xF6082E2ADA1C795B(&iLocal_750, 17);
		}
	}
	else if (fVar3 > 360000f)
	{
		unk_0xE0125DCD8DB3EFC3(5);
		unk_0x507FE690B1271947(&iLocal_750, 17);
	}
}

void func_179()
{
	struct<3> Var0;
	
	if (!func_979() && !func_381())
	{
		return;
	}
	if (func_383())
	{
		if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
		{
			Var0 = { unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 0) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	if (!func_59(Var0, 0f, 0f, 0f, 0))
	{
		func_180(169, Var0, &uLocal_865, 1140457472, 1144750080, 0);
	}
}

void func_180(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_229(unk_0x0FFED3E94261A832()) && !func_228(unk_0x0FFED3E94261A832())) && !unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 8)) && (func_227(unk_0x0FFED3E94261A832()) || func_226(unk_0x0FFED3E94261A832())))
	{
		return;
	}
	Global_1773245 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Param1);
	func_224(iParam0, fVar0);
	if (unk_0x9E5289F5D782437C() && unk_0x237515DD54DDE573() == 15)
	{
		if (func_223(unk_0x0FFED3E94261A832()) || func_221(unk_0x0FFED3E94261A832()))
		{
			if (!unk_0x440E77FA46936F83(1344549371))
			{
				unk_0x23949161B04DFF2C(1344549371);
			}
		}
		else if (unk_0x440E77FA46936F83(1344549371))
		{
			unk_0x74B42EAFF204A87F(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_220(unk_0x0FFED3E94261A832(), 21))
		{
			func_219(Param1, 1, 0);
		}
		if (!*uParam4 && func_1072(unk_0x0FFED3E94261A832(), 1, 1))
		{
			*uParam4 = 1;
			if (func_218(iParam0))
			{
				unk_0xFBC4596E19752537(func_217(iParam0));
				if (func_216(iParam0, -1))
				{
					unk_0xE0125DCD8DB3EFC3(0);
					if (unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832()) > 0)
					{
						unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 1);
						unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 1);
					}
					unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 0);
				}
			}
			if (func_215(iParam0))
			{
				fVar1 = func_214(iParam0);
				if (fVar1 != 1f)
				{
					func_211(fVar1);
					unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_210(iParam0) && func_223(unk_0x0FFED3E94261A832()))
				{
					func_208(1);
					func_207(2);
				}
			}
			func_206(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_205(unk_0x0FFED3E94261A832(), 19))
			{
				func_204(19);
			}
		}
		if (*uParam4 && func_1072(unk_0x0FFED3E94261A832(), 1, 1))
		{
			*uParam4 = 0;
			if (func_218(iParam0))
			{
				if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 0))
				{
					unk_0xFBC4596E19752537(1f);
					unk_0xE0125DCD8DB3EFC3(5);
					unk_0x507FE690B1271947(&(Global_1773245.f_3), 0);
				}
			}
			if (func_215(iParam0))
			{
				func_203();
				unk_0x507FE690B1271947(&(Global_1773245.f_3), 1);
			}
			if (iParam7 && !func_229(unk_0x0FFED3E94261A832()))
			{
				if (func_201(unk_0x0FFED3E94261A832()) != 152)
				{
					func_183();
				}
			}
			if (func_182(2))
			{
				func_208(0);
				func_181(2);
			}
		}
	}
}

void func_181(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_27), iParam0);
}

bool func_182(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_27, iParam0);
}

void func_183()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_24), &Global_2408847, 2);
	unk_0x7A98CD761239D589(&(Global_2404996.f_26), &Global_2408849, 17);
	func_199();
	func_186(1, 1);
	func_184();
}

void func_184()
{
	func_185(0, 0);
}

void func_185(int iParam0, int iParam1)
{
	Global_2404996.f_22 = iParam0;
	Global_2404996.f_23 = iParam1;
}

void func_186(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x7A98CD761239D589(&(Global_2404996.f_43), &Global_2408866, 314);
	}
	else
	{
		Global_2404996.f_43 = { Global_2408866 };
		Global_2404996.f_43.f_49 = { Global_2408866.f_49 };
		Global_2404996.f_43.f_52 = Global_2408866.f_52;
		Global_2404996.f_43.f_53 = Global_2408866.f_53;
	}
	if (bParam0)
	{
		func_198();
	}
	func_189(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_188(0);
	func_187();
}

void func_187()
{
	struct<6> Var0;
	
	if (Global_2404996.f_479.f_1 == unk_0xFF09208EC90C94CB())
	{
		Global_2404996.f_479 = { Var0 };
	}
}

void func_188(bool bParam0)
{
	if (bParam0)
	{
		Global_2404996.f_675 = 0;
	}
	else
	{
		Global_2404996.f_675 = 1;
	}
}

void func_189(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_197())
		{
			func_196();
		}
		Global_2404996.f_676.f_515 = unk_0xFF09208EC90C94CB();
		Global_2404996.f_676.f_504 = iParam1;
		Global_2404996.f_676.f_505 = iParam2;
		Global_2404996.f_676.f_506 = iParam10;
		func_194();
		func_193(8, 0, 0, 0, 0);
		Global_2404996.f_676.f_507 = iParam11;
		Global_2404996.f_676.f_510 = iParam3;
		Global_2404996.f_676.f_511 = iParam4;
		Global_2404996.f_676.f_508 = iParam5;
		Global_2404996.f_676.f_509 = iParam6;
		Global_2404996.f_676.f_512 = iParam7;
		Global_2404996.f_676.f_513 = iParam8;
		Global_2404996.f_676.f_514 = iParam9;
		Global_2404996.f_1709 = 1;
	}
	else
	{
		func_190();
	}
}

void func_190()
{
	if (func_197() && !func_192())
	{
		func_196();
	}
	if (func_192())
	{
		func_191();
	}
	else
	{
		func_194();
		func_193(0, 0, 0, 0, 0);
		Global_2404996.f_1709 = 0;
		Global_2404996.f_1708 = 0;
	}
}

void func_191()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_676), &(Global_2404996.f_1192), 516);
	Global_2404996.f_479 = { Global_2404996.f_485 };
	if (unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515)
	{
		Global_2404996.f_1708 = 0;
	}
}

int func_192()
{
	if ((Global_2404996.f_1708 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_1192.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_1192.f_515))
	{
		return 1;
	}
	return 0;
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411638 = 0;
	}
	Global_2404996.f_479 = iParam0;
	Global_2404996.f_479.f_1 = unk_0xFF09208EC90C94CB();
	Global_2404996.f_479.f_2 = iParam1;
	Global_2404996.f_479.f_3 = iParam2;
	Global_2404996.f_479.f_4 = iParam3;
	Global_2404996.f_479.f_5 = iParam4;
}

void func_194()
{
	if (func_197() && !func_192())
	{
		func_196();
	}
	func_195();
	Global_2404996.f_676 = 0;
}

void func_195()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404996.f_676.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_196()
{
	if (func_192())
	{
		if (Global_2404996.f_676.f_515 == Global_2404996.f_1192.f_515)
		{
			return;
		}
	}
	if (!unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515)
	{
		unk_0x7A98CD761239D589(&(Global_2404996.f_1192), &(Global_2404996.f_676), 516);
		Global_2404996.f_485 = { Global_2404996.f_479 };
		Global_2404996.f_1708 = 1;
	}
}

int func_197()
{
	if ((Global_2404996.f_1709 && !unk_0xFF09208EC90C94CB() == Global_2404996.f_676.f_515) && unk_0xE00BB08A385D5A25(Global_2404996.f_676.f_515))
	{
		return 1;
	}
	return 0;
}

void func_198()
{
	unk_0x7A98CD761239D589(&(Global_2404996.f_357), &Global_2409180, 121);
}

void func_199()
{
	func_200();
	Global_2404996.f_2053 = 0;
}

void func_200()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404996.f_2054[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_201(int iParam0)
{
	if (func_202(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_32;
	}
	return -1;
}

int func_202(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

void func_203()
{
	if (unk_0xE00BB08A385D5A25(Global_2497344.f_4824))
	{
		if (!Global_2497344.f_4824 == unk_0xFF09208EC90C94CB() && Global_2497344.f_4823 < 1f)
		{
			return;
		}
	}
	Global_2497344.f_4824 = -1;
	Global_2497344.f_4823 = 1f;
}

void func_204(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

bool func_205(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_4, iParam1);
}

void func_206(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_4), iParam0);
}

void func_207(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_27), iParam0);
}

void func_208(int iParam0)
{
	if (func_209() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391043)
	{
		return;
	}
	Global_2391043 = iParam0;
	Global_2391045 = 0;
	Global_2391046 = 0;
}

int func_209()
{
	if ((((Global_979818 != -1 && Global_979818 != 33) && Global_979818 != 35) && Global_979818 != 37) && Global_979818 != 21)
	{
		return 1;
	}
	return 0;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_211(float fParam0)
{
	float fVar0;
	
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_212())
	{
		return;
	}
	fVar0 = (Global_2497344.f_4823 - fParam0);
	if (unk_0xE00BB08A385D5A25(Global_2497344.f_4824))
	{
		if (!Global_2497344.f_4824 == unk_0xFF09208EC90C94CB() && unk_0x3FEF699D13BCC798(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2497344.f_4823 = fParam0;
	Global_2497344.f_4824 = unk_0xFF09208EC90C94CB();
}

int func_212()
{
	switch (func_213())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_213()
{
	return Global_25222;
}

float func_214(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_216(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_217(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_219(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404996.f_43.f_49 = { Param0 };
	Global_2404996.f_43.f_52 = iParam3;
	Global_2404996.f_43.f_53 = iParam4;
}

bool func_220(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

int func_221(int iParam0)
{
	if (func_222(iParam0))
	{
		if (func_223(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_222(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_55())
		{
			return Global_1622795[iParam0 /*431*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_223(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_205(iParam0, 9);
	}
	return 0;
}

void func_224(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_225(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_959();
	}
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11174;
		
		case 142:
			return Global_262145.f_11162;
		
		case 157:
			return Global_262145.f_11129;
		
		case 159:
			return Global_262145.f_11112;
		
		case 162:
			return Global_262145.f_11223;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

int func_227(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 7);
	}
	return 0;
}

bool func_228(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 2);
}

int func_229(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/] != -1;
	}
	return 0;
}

void func_230()
{
	if (!func_383())
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 4))
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 18))
	{
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 17))
	{
		if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2) && unk_0x434105A1C45F1BED(Local_127.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_127.f_2[0 /*10*/].f_2))
			{
				if (!unk_0x18570CCBAF7F635C(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2)))
				{
					func_234(&(Local_127.f_2[0 /*10*/].f_2));
				}
			}
		}
		return;
	}
	if (unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 15))
	{
		return;
	}
	if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_127.f_2[0 /*10*/].f_2))
		{
			if (func_231(Local_127.f_2[0 /*10*/].f_2))
			{
				if (unk_0x434105A1C45F1BED(Local_127.f_2[0 /*10*/].f_2))
				{
					unk_0x1A523A6A03E13CF9(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 1, 1);
					unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 15);
				}
			}
		}
	}
}

int func_231(var uParam0)
{
	if (unk_0x2D46D2FB70C76390(uParam0))
	{
		return 1;
	}
	if (func_232(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_232(var uParam0)
{
	if (!unk_0x62E688B72E3C57B0())
	{
		return 0;
	}
	if (!unk_0xD0BCF9877CD72A3F(uParam0))
	{
		return 0;
	}
	if (func_233(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_233(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		unk_0x47ABF422A76CAA6A(uParam0);
		return unk_0x434105A1C45F1BED(uParam0);
	}
	return 0;
}

void func_234(var uParam0)
{
	var uVar0;
	
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		if (!unk_0x434105A1C45F1BED(*uParam0))
		{
		}
	}
	if (unk_0xD0BCF9877CD72A3F(*uParam0))
	{
		uVar0 = unk_0x7BAE3A9057619E1F(*uParam0);
		unk_0xA54DE0E68212CD6B(&uVar0);
	}
}

void func_235(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	
	if (func_371(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_369() || iParam2 == 26)
	{
		if (func_319(uParam1, iParam2, uParam3, Global_1574108, 0, func_367()))
		{
			func_318(1);
			if ((!func_316() && !func_314()) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
			{
				if (func_313())
				{
					func_310();
				}
				else
				{
					unk_0xA7924ED81D250E3A(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_309(1);
						Global_1574108 = 0;
						iVar54 = -1;
						if (Global_1574291 != 1)
						{
							func_308(uParam1);
							if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
							{
								unk_0x507FE690B1271947(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 26)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_1072(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
									if (!func_34(iVar35, 0))
									{
										if ((unk_0x2985DBA93DA270F7(iVar35, unk_0x0FFED3E94261A832()) || Global_2422215[iVar35 /*387*/].f_245 != -1) || func_307(iVar35))
										{
											iVar44 = iVar35;
											if (func_222(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_304(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_301(unk_0x0FFED3E94261A832(), 0) && func_201(unk_0x0FFED3E94261A832()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_299())
							{
								if (func_1072(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar35 = unk_0x7C214DA899F05536(iVar52);
								}
								else
								{
									iVar35 = func_55();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*49*/])->f_1;
							}
							if ((func_298(iVar35) && func_293(iVar35, iParam2)) && func_1072(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
								Var38 = { func_288(iVar35) };
								if (iVar35 == unk_0x0FFED3E94261A832())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x4325D353D7D27B34(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_57(iVar35) };
								iVar37 = func_282(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
								}
								Global_1574108++;
								if ((uParam0[iVar52 /*49*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*49*/])->f_22;
								}
								if ((uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*49*/])->f_31;
								}
								if ((uParam0[iVar52 /*49*/])->f_48 != -1)
								{
									iVar47 = (uParam0[iVar52 /*49*/])->f_48;
								}
								iVar43 = (uParam0[iVar52 /*49*/])->f_9;
								if (((uParam0[iVar52 /*49*/])->f_9 != -1 || (uParam0[iVar52 /*49*/])->f_22 != -1f) || (uParam0[iVar52 /*49*/])->f_31 != -1)
								{
									if (!func_299())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_277(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_276(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*49*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_270(iVar35, 0);
								if (bVar34)
								{
									if (func_269(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if (func_268(iParam5))
								{
									func_267(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_267(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0xF6082E2ADA1C795B(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x7C214DA899F05536(iVar52);
							if (func_1072(iVar35, 0, 1) && !unk_0xAA4F14DA15DB0B51(iVar49, iVar35))
							{
								iVar35 = unk_0x7C214DA899F05536(iVar52);
							}
							else
							{
								iVar35 = func_55();
							}
							if (func_298(iVar35))
							{
								if (func_1072(unk_0x7C214DA899F05536(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1592456[iVar44 /*635*/].f_204.f_6;
									Var38 = { func_288(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_57(iVar35) };
									iVar37 = func_282(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xCF8EC788EB8AB4DB(iVar37);
									}
									Global_1574108++;
									iVar51 = func_270(iVar35, 1);
									if (bVar34)
									{
										if (func_269(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_248(iVar35, unk_0x4325D353D7D27B34(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							func_245(uParam3, uParam1);
						}
						func_9(&(uParam3->f_21));
						func_244();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
						{
							func_243(uParam3, uParam1);
							func_242(uParam1, 0, 1);
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 7);
						}
						func_243(uParam3, uParam1);
						if (!unk_0xAA4F14DA15DB0B51(uParam3->f_33, 11))
						{
							unk_0xF6082E2ADA1C795B(&(uParam3->f_33), 11);
						}
						if (func_238(uParam3))
						{
							Global_1574291 = 1;
						}
						func_236(uParam3);
						if (Global_1574291 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574291 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0xA8AF99BD8D81CFB7(*uParam1))
					{
						unk_0xFF4C3B41848CE5CD(7);
						unk_0xED8A6509C85CF7A1(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xFF4C3B41848CE5CD(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_244();
			func_309(0);
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 7))
			{
				unk_0x507FE690B1271947(&(uParam3->f_33), 7);
			}
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 10))
			{
				unk_0x507FE690B1271947(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xE98F6B2EFC674042();
}

void func_236(var uParam0)
{
	if (!func_11(&(uParam0->f_21)))
	{
		func_10(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_9(&(uParam0->f_21));
		func_237(0);
	}
}

void func_237(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574291 != 2)
		{
			Global_1574291 = 2;
		}
	}
	else
	{
		switch (Global_1574291)
		{
			case 0:
				Global_1574291 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_238(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x7C214DA899F05536(uParam0->f_37);
	if (iVar15 != func_55() && func_1072(iVar15, 0, 1))
	{
		Var2 = { func_57(iVar15) };
		iVar1 = func_241(uParam0, uParam0->f_37);
		if (func_240(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_239(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_239(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x4CF9C4F6BB19A464(&Var2))
						{
							iVar16 = 1;
							func_239(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_239(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4DD457935649A429(&Var2))
					{
						if (!unk_0x7F20205AFD1B2752(&Var2))
						{
							iVar16 = 1;
							func_239(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7F20205AFD1B2752(&Var2))
					{
						iVar16 = 1;
						func_239(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_239(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_240(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6A68E91B1AC64FBD(&uParam0, 13);
}

var func_241(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_242(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xD1FCC52F87A98873(*uParam0, "COLLAPSE"))
	{
		unk_0xD426F7366505EADF(iParam1);
		unk_0x8123397DC676E794();
	}
	if (iParam2 == 1)
	{
		if (unk_0xD1FCC52F87A98873(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x8123397DC676E794();
		}
	}
}

void func_243(var uParam0, var uParam1)
{
	if (!unk_0xAA4F14DA15DB0B51(uParam0->f_33, 10))
	{
		unk_0xD1FCC52F87A98873(*uParam1, "SET_HIGHLIGHT");
		unk_0x4CECF13AF144A8F6(uParam0->f_35);
		unk_0x8123397DC676E794();
		unk_0xF6082E2ADA1C795B(&(uParam0->f_33), 10);
	}
}

void func_244()
{
	if (Global_1574291 != 0)
	{
		Global_1574291 = 0;
	}
}

void func_245(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar0);
		if (iVar2 != func_55())
		{
			if (func_1072(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_247(uParam0->f_38[iVar0 /*2*/], 0);
					func_246(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1592456[iVar0 /*635*/].f_204.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		if (unk_0xD1FCC52F87A98873(*uParam0, "SET_ICON"))
		{
			unk_0x4CECF13AF144A8F6(iParam1);
			unk_0x4CECF13AF144A8F6(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4CECF13AF144A8F6(iParam3);
			}
			unk_0x8123397DC676E794();
		}
	}
}

int func_247(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_248(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_266() && iParam4 < func_265())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574110)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574291 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xD1FCC52F87A98873(*uParam2, sVar1))
		{
			unk_0x4CECF13AF144A8F6(iParam4);
			if (unk_0xAA4F14DA15DB0B51(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_264("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(iParam10);
			}
			func_264(sParam1);
			unk_0x4CECF13AF144A8F6(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_264("");
			}
			else
			{
				unk_0x4CECF13AF144A8F6(65);
			}
			unk_0x4CECF13AF144A8F6(-1);
			func_264("");
			if (uParam3->f_108 == 6)
			{
				func_264("");
			}
			else
			{
				func_264(&sParam5);
			}
			func_253(uParam3, iParam0);
			unk_0x4B897FDFB899F911(sParam9);
			unk_0x4B897FDFB899F911(sParam9);
			if (func_252(uParam3))
			{
				func_251("DPAD_FRIEND");
			}
			else if (func_250(uParam3))
			{
				func_251("DPAD_FRIEND");
			}
			else if (func_249(uParam3))
			{
				func_251("DPAD_CREW");
			}
			else
			{
				func_251("");
			}
			unk_0x8123397DC676E794();
		}
	}
}

bool func_249(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 6);
}

bool func_250(var uParam0)
{
	return unk_0xAA4F14DA15DB0B51(uParam0->f_33, 5);
}

void func_251(char* sParam0)
{
	unk_0xADBDBA2DF8443753(sParam0);
	unk_0xF7D95CCE1364B5CE();
}

int func_252(var uParam0)
{
	if (func_250(uParam0) && func_249(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_253(var uParam0, int iParam1)
{
	if (func_263(iParam1))
	{
		unk_0x4CECF13AF144A8F6(121);
	}
	else if (func_257(iParam1))
	{
		unk_0x4CECF13AF144A8F6(122);
	}
	else
	{
		if (func_254())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD426F7366505EADF(uParam0->f_36);
	}
}

int func_254()
{
	if (unk_0x1B154DE2D4606530())
	{
		if (func_255() || func_141())
		{
			return 1;
		}
	}
	return 0;
}

bool func_255()
{
	if (unk_0x1B154DE2D4606530())
	{
		return func_141();
	}
	return func_256(Global_1638223.f_93532);
}

int func_256(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_257(int iParam0)
{
	if ((func_1072(iParam0, 0, 1) && func_261()) && func_258(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_258(int iParam0, bool bParam1)
{
	return func_259(iParam0, bParam1, 1);
}

int func_259(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_260(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1622795[iParam0 /*431*/].f_11;
	if (iVar0 != func_55() && Global_1622795[iVar0 /*431*/].f_11.f_317 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0, int iParam1)
{
	if (iParam0 != func_55())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_55())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 == iParam0 && Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_261()
{
	if (func_229(unk_0x0FFED3E94261A832()) || func_262())
	{
		return 0;
	}
	return 1;
}

int func_262()
{
	switch (func_201(unk_0x0FFED3E94261A832()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_263(int iParam0)
{
	if (func_254())
	{
		if (func_1072(iParam0, 0, 1))
		{
			return func_222(iParam0);
		}
	}
	if ((func_1072(iParam0, 0, 1) && func_261()) && func_260(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_264(char* sParam0)
{
	unk_0x7B7BB0114231AF09(sParam0);
}

int func_265()
{
	int iVar0;
	
	if (Global_1574110)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_266()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574110)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_267(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_266() && iParam3 < func_265())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574110)
		{
			iVar0 += 16;
		}
		if (bParam20)
		{
			iVar0 = iParam19;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574291 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xA8AF99BD8D81CFB7(*uParam1))
		{
			if (unk_0xD1FCC52F87A98873(*uParam1, sVar1))
			{
				unk_0x4CECF13AF144A8F6(iParam3);
				if (unk_0xAA4F14DA15DB0B51(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_264("");
				}
				else
				{
					unk_0x4CECF13AF144A8F6(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x58478145CAF8429C(sParam16))
				{
					func_251(sParam16);
				}
				else
				{
					func_264(&(uParam2->f_1));
				}
				unk_0x4CECF13AF144A8F6(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_264("");
				}
				else
				{
					unk_0x4CECF13AF144A8F6(65);
				}
				if (iParam12 == 1)
				{
					unk_0x4CECF13AF144A8F6(iVar0);
				}
				else
				{
					unk_0x4CECF13AF144A8F6(-1);
				}
				if (func_299())
				{
					func_264("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x58478145CAF8429C(sParam16))
				{
					unk_0xADBDBA2DF8443753("FM_AE_ONE_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 5 && !unk_0x58478145CAF8429C(sParam16))
				{
					unk_0xADBDBA2DF8443753("FM_AE_ONE_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x58478145CAF8429C(sParam16)) && !unk_0x58478145CAF8429C(sParam17))
				{
					unk_0xADBDBA2DF8443753("FM_AE_TWO_INT");
					unk_0xD5DA3EC5EEC78358(sParam16);
					unk_0xD5DA3EC5EEC78358(sParam17);
					unk_0xEA97619D8B89D387(iParam18);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 8 && !unk_0x58478145CAF8429C(&(uParam2->f_104)))
				{
					unk_0xADBDBA2DF8443753("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x31A1C6406BB66808(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xEA97619D8B89D387(iParam10);
					}
					unk_0xD5DA3EC5EEC78358(&(uParam2->f_104));
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0xADBDBA2DF8443753("FM_AE_CASH");
					unk_0xF671F12DFCDA7746(iParam10, 1);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0xADBDBA2DF8443753("FM_AE_CASH");
						unk_0xF671F12DFCDA7746(iParam10, 1);
						unk_0xF7D95CCE1364B5CE();
					}
					else
					{
						unk_0xADBDBA2DF8443753("FM_NG_CASH");
						unk_0xF671F12DFCDA7746(iParam10, 1);
						unk_0xF7D95CCE1364B5CE();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x58478145CAF8429C(&(uParam2->f_104)))
					{
						func_251(&(uParam2->f_104));
					}
					else
					{
						func_264("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0xADBDBA2DF8443753("STRING");
					unk_0x365072D1FE8AEADE(iParam14, 6);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (fParam13 != -1f)
				{
					unk_0xADBDBA2DF8443753("NUMBER");
					unk_0x31A1C6406BB66808(fParam13, 1);
					unk_0xF7D95CCE1364B5CE();
				}
				else if (iParam10 != -1)
				{
					unk_0x4CECF13AF144A8F6(iParam10);
				}
				else
				{
					func_264("");
				}
				if (uParam2->f_108 == 6)
				{
					func_264("");
				}
				else
				{
					func_264(&sParam4);
				}
				func_253(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x58478145CAF8429C(sParam8))
				{
					func_264("");
					func_264("");
				}
				else
				{
					unk_0x4B897FDFB899F911(sParam8);
					unk_0x4B897FDFB899F911(sParam8);
				}
				if (func_252(uParam2))
				{
					func_251("DPAD_FRIEND");
				}
				else if (func_250(uParam2))
				{
					func_251("DPAD_FRIEND");
				}
				else if (func_249(uParam2))
				{
					func_251("DPAD_CREW");
				}
				else
				{
					func_251("");
				}
				unk_0x8123397DC676E794();
			}
		}
	}
}

int func_268(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_269(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_222(iParam0))
		{
			return 0;
		}
	}
	return Global_1622795[iParam0 /*431*/].f_11 != func_55();
}

int func_270(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_229(iParam0)) && !func_275(iParam0))
	{
		iVar0 = func_274();
	}
	iVar1 = func_273(iParam0);
	if (!iVar1 == -1)
	{
		return func_271(iVar1);
	}
	return iVar0;
}

int func_271(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_272(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_272(int iParam0)
{
	return Global_2416174.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_273(int iParam0)
{
	if (!iParam0 == func_55())
	{
		if (func_269(iParam0, 1))
		{
			return Global_2416174.f_1947.f_11[func_56(iParam0)];
		}
	}
	return -1;
}

int func_274()
{
	return 21;
}

bool func_275(int iParam0)
{
	return func_205(iParam0, 20);
}

char* func_276(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x82529919A0EAC7FC())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x82529919A0EAC7FC())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_277(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_281(iParam3))
	{
		*fParam1 = (func_278(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_268(iParam3))
	{
		*fParam1 = (func_278(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_278(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x82529919A0EAC7FC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_280(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x82529919A0EAC7FC())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_279(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_279(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_280(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_282(int iParam0)
{
	int iVar0;
	
	iVar0 = func_285(iParam0);
	if (iVar0 == -1)
	{
		func_283(iParam0, 1);
		return 0;
	}
	Global_1362801[iVar0 /*5*/].f_4 = 1;
	return Global_1362801[iVar0 /*5*/].f_2;
}

void func_283(int iParam0, bool bParam1)
{
	if (!func_1072(iParam0, 0, 1))
	{
		return;
	}
	if (func_285(iParam0) != -1)
	{
		return;
	}
	if (Global_1362964)
	{
		if (iParam0 == Global_1362964.f_1)
		{
			return;
		}
	}
	if (func_284(iParam0))
	{
		return;
	}
	if (Global_1363002 >= 32)
	{
		return;
	}
	Global_1362969[Global_1363002] = iParam0;
	Global_1363002++;
	if (bParam1)
	{
	}
}

int func_284(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1363002)
	{
		if (Global_1362969[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_285(int iParam0)
{
	int iVar0;
	
	if (!func_1072(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1362962 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1362962)
	{
		if (Global_1362801[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA630F1AB10AC8C10(Global_1362801[iVar0 /*5*/].f_2) && unk_0x32291EA29B6FC538(Global_1362801[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_286(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_286(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1362962)
	{
		return;
	}
	if (unk_0xA630F1AB10AC8C10(Global_1362801[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1362801[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xCF8EC788EB8AB4DB(Global_1362801[iParam0 /*5*/].f_2), 64);
			unk_0xE6AF47B902DCABC1(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x1156FB73B5FB1CC5(Global_1362801[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1362962)
	{
		Global_1362801[iVar32 /*5*/] = { Global_1362801[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_287(&(Global_1362801[iVar32 /*5*/]));
	Global_1362962 = (Global_1362962 - 1);
}

void func_287(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_55();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x591AF4C50B46E014())
	{
		uParam0->f_3 = unk_0x11ABC381A58DD5AB();
	}
}

struct<4> func_288(int iParam0)
{
	struct<4> Var0;
	
	if (func_1072(iParam0, 0, 1))
	{
		Global_2484572 = { func_57(iParam0) };
		if (unk_0x97FFE0491AC179A2())
		{
			if (func_240(Global_2484572))
			{
				if (!unk_0xE1BD9BCF6A9D6793(&Global_2484572))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xE061CABF3B012AFB(0))
		{
			return Var0;
		}
		if (func_292(&Global_2484572))
		{
			Global_2484502 = { func_290(iParam0) };
			func_289(&Global_2484502, &Var0);
		}
	}
	return Var0;
}

void func_289(var uParam0, var uParam1)
{
	unk_0xB13BADEC9684E361(uParam0, 35, uParam1);
}

struct<35> func_290(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_291(iParam0))
	{
		return Global_1312884[unk_0x0FFED3E94261A832() /*35*/];
	}
	Var0 = { func_57(iParam0) };
	unk_0x78823C36BAC4791B(&Var13, 35, &Var0);
	return Var13;
}

int func_291(int iParam0)
{
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		return 1;
	}
	return 0;
}

int func_292(var uParam0)
{
	if (unk_0x72BFFF26648DA18C())
	{
		if (unk_0x591BB87E287F24DC() && unk_0x3BE1A7ECC62DB032(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_293(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_228(iParam0) || func_297(iParam0)) || func_296(iParam0))
		{
			return 0;
		}
	}
	if (!func_295(iParam0))
	{
		return 0;
	}
	if ((!func_294(iParam0) && Global_2422215[iParam0 /*387*/].f_245 == -1) && !func_307(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_294(int iParam0)
{
	if (func_1072(iParam0, 0, 1))
	{
		if (func_1072(unk_0x0FFED3E94261A832(), 0, 1))
		{
			if (unk_0x2985DBA93DA270F7(iParam0, unk_0x0FFED3E94261A832()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_295(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_140, 22);
}

bool func_296(int iParam0)
{
	if (func_228(iParam0))
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8);
}

int func_297(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 10) || unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 9));
	}
	return 0;
}

int func_298(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_34(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1592456[iVar0 /*635*/].f_140, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_299()
{
	switch (func_201(unk_0x0FFED3E94261A832()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_300(unk_0x0FFED3E94261A832()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_275(unk_0x0FFED3E94261A832()))
	{
		switch (func_201(unk_0x0FFED3E94261A832()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_300(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1622795[iVar0 /*431*/];
	}
	return -1;
}

int func_301(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_32 != -1 && func_302(Global_1622795[iParam0 /*431*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_31 != -1)
	{
		if (func_302(Global_1622795[iParam0 /*431*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_302(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_303(iParam0, 0);
	return 0;
}

int func_303(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_304(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1072(unk_0x7C214DA899F05536(iVar0), 0, 1))
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (!func_34(iVar1, 0))
			{
				if ((unk_0x2985DBA93DA270F7(iVar1, unk_0x0FFED3E94261A832()) || Global_2422215[iVar1 /*387*/].f_245 != -1) || func_307(iVar1))
				{
					if (func_305(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_305(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_55())
	{
		if (!bParam2)
		{
			if (func_306(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1622795[iParam0 /*431*/].f_11 != func_55())
		{
			return iParam1 == Global_1622795[iParam0 /*431*/].f_11;
		}
	}
	return 0;
}

int func_306(int iParam0, int iParam1)
{
	if (iParam1 != func_55())
	{
		if (iParam0 != func_55())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 != func_55())
			{
				if (Global_1622795[iParam0 /*431*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_307(int iParam0)
{
	return Global_1592456[iParam0 /*635*/].f_189 != 0;
}

void func_308(var uParam0)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4CECF13AF144A8F6(0);
		unk_0x8123397DC676E794();
	}
}

void func_309(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1351505.f_2 == 0)
		{
			Global_1351505.f_2 = 1;
		}
	}
	else if (Global_1351505.f_2 == 1)
	{
		Global_1351505.f_2 = 0;
	}
}

void func_310()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1))
	{
		if (func_312())
		{
			func_311();
		}
	}
}

void func_311()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2434604.f_2483[iVar0 /*76*/].f_2 != 0)
		{
			Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
			unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

bool func_312()
{
	return Global_2434604.f_2483[0 /*76*/].f_1 != 0;
}

int func_313()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0) && func_312())
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 1) && func_312())
	{
		return 1;
	}
	return 0;
}

int func_314()
{
	if (func_312())
	{
		if (func_315(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_316()
{
	if (func_312())
	{
		if (func_317(Global_2434604.f_2483[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_317(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_318(int iParam0)
{
	if (Global_1351505.f_1 != Global_1351505)
	{
		Global_1351505.f_1 = Global_1351505;
	}
	if (Global_1351505 != iParam0)
	{
		Global_1351505 = iParam0;
	}
}

int func_319(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_366(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_365();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_364())
		{
			if (func_363() > 0 && Global_1574110)
			{
				unk_0x891A3238A7E50954();
				unk_0x11CA0D8AE0C37B1C(fVar7);
				unk_0x47BFFB0507046AE3(18);
				if (unk_0x6235C49EA2DBA22D())
				{
					unk_0x8816A672BCF9F877();
				}
				unk_0x47BFFB0507046AE3(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_351())
		{
			func_350(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 26))
	{
		func_350(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_11(&(uParam2->f_19)))
	{
		if (func_363() == 1)
		{
			func_349(bVar6, uParam0, 0);
			func_10(&(uParam2->f_19), 0, 0);
			func_350(uParam0, uParam2, 0);
		}
	}
	if (func_11(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x6235C49EA2DBA22D())
		{
			unk_0x8816A672BCF9F877();
		}
		unk_0x47BFFB0507046AE3(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_363() == 0 && !bParam5))
		{
			func_350(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_348();
				if (iParam1 == 25 || iParam1 == 26)
				{
					unk_0x891A3238A7E50954();
				}
				unk_0x47BFFB0507046AE3(18);
			}
			if (!unk_0xAA4F14DA15DB0B51(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_348();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0x891A3238A7E50954();
					}
					unk_0x47BFFB0507046AE3(18);
				}
				unk_0x11CA0D8AE0C37B1C(fVar7);
				if (func_349(bVar6, uParam0, 0))
				{
					func_308(uParam0);
					sVar4 = func_346(iParam1, &(Global_1638223.f_93539), bParam4);
					Var0 = { func_344(iParam1) };
					if (bParam4)
					{
						func_341(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_334(uParam0, func_338(uParam2), func_335(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_325(uParam0, func_327(uParam2), func_326(), -1);
					}
					else if (func_254())
					{
						uParam2->f_34 = Global_1574109;
						func_341(uParam0, sVar4, &Var0, 1, -1, Global_1574109, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574109;
						func_341(uParam0, sVar4, "", 0, -1, Global_1574109, 1);
					}
					else
					{
						iVar8 = func_320(iParam1);
						func_341(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xF6082E2ADA1C795B(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xAA4F14DA15DB0B51(uParam2->f_33, 0))
			{
				Global_1574108 = uParam3;
				Global_1574107 = 1;
				unk_0x11CA0D8AE0C37B1C(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574109)
					{
						unk_0x507FE690B1271947(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_320(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_324())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 24:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 11:
		case 12:
		case 13:
		case 16:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 17;
			break;
		
		case 15:
			iVar0 = 18;
			break;
		
		case 17:
			if (func_323(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 20;
			}
			if (func_322(unk_0x0FFED3E94261A832()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_321(unk_0x0FFED3E94261A832()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_321(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 4;
}

bool func_322(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

bool func_323(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_324()
{
	return Global_1638223.f_1 == 0;
}

void func_325(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(sParam2))
		{
			func_251(sParam1);
		}
		else
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		func_251("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_326()
{
	switch (func_201(unk_0x0FFED3E94261A832()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_327(var uParam0)
{
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_201(unk_0x0FFED3E94261A832()))
	{
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_330())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_329(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_329(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_328(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_173))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_329(bool bParam0)
{
	return func_258(unk_0x0FFED3E94261A832(), bParam0);
}

bool func_330()
{
	return (func_333() && func_331(func_332()));
}

bool func_331(int iParam0)
{
	return func_260(iParam0, 1);
}

int func_332()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34;
}

bool func_333()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148;
}

void func_334(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (unk_0x58478145CAF8429C(sParam2))
		{
			func_251(sParam1);
		}
		else if (func_300(unk_0x0FFED3E94261A832()) == 133)
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT_C");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			unk_0xADBDBA2DF8443753("FM_AE_BRACKT");
			unk_0xD5DA3EC5EEC78358(sParam1);
			unk_0xD5DA3EC5EEC78358(sParam2);
			unk_0xF7D95CCE1364B5CE();
		}
		func_251("");
		if (iParam3 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam3);
		}
		unk_0x8123397DC676E794();
	}
}

char* func_335(var uParam0)
{
	int iVar0;
	
	iVar0 = func_300(unk_0x0FFED3E94261A832());
	if (func_337())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_336())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_336()
{
	if (func_300(unk_0x0FFED3E94261A832()) == 133)
	{
		return Global_2497344.f_4750;
	}
	return -1;
}

bool func_337()
{
	return Global_1592329;
}

char* func_338(var uParam0)
{
	int iVar0;
	
	iVar0 = func_300(unk_0x0FFED3E94261A832());
	if (func_337())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_340() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_340() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_336())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_339() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_339()
{
	return Global_2497344.f_4753;
}

int func_340()
{
	if (func_300(unk_0x0FFED3E94261A832()) == 132)
	{
		return Global_2497344.f_4748;
	}
	return -1;
}

void func_341(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0xD1FCC52F87A98873(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_264(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xADBDBA2DF8443753(sParam1);
			unk_0xEA97619D8B89D387(iParam5);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			func_251(sParam1);
		}
		if (func_364() && iParam6)
		{
			if (func_343())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xADBDBA2DF8443753("LBD_DPD_CNT");
			unk_0xEA97619D8B89D387(iVar0);
			unk_0xEA97619D8B89D387(iVar1);
			unk_0xF7D95CCE1364B5CE();
		}
		else
		{
			func_251(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4CECF13AF144A8F6(iParam4);
			if (func_342(unk_0x0FFED3E94261A832()))
			{
				unk_0x4CECF13AF144A8F6(166);
			}
		}
		unk_0x8123397DC676E794();
	}
}

int func_342(int iParam0)
{
	if (func_323(iParam0) || func_322(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_343()
{
	return Global_1574110;
}

struct<4> func_344(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_345(unk_0x0FFED3E94261A832()) || func_321(unk_0x0FFED3E94261A832()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 11:
		case 12:
		case 13:
		case 16:
		case 14:
		case 15:
		case 17:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1638223.f_30, 16);
			break;
	}
	if (func_254() && unk_0x1B154DE2D4606530())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1638223.f_30, 16);
	}
	return Var0;
}

bool func_345(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 5;
}

char* func_346(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_254() || unk_0x58478145CAF8429C(sParam1)))
	{
		uVar0 = func_347();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 23)
	{
		if (Global_1574309 == 0)
		{
			Global_1574309 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x58478145CAF8429C(sParam1))
	{
		if (Global_1574309 == 1)
		{
			Global_1574309 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574309 == 0)
		{
			Global_1574309 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 24:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 17:
			case 13:
			case 16:
			case 14:
			case 12:
			case 11:
			case 15:
			case 18:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 20:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_347()
{
	if (unk_0xAB1E825659B8A5D6())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xD2843F73FBE0F430())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x9149FCDCB650712D())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x7A1C6EE905C175E6())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_348()
{
	Global_36716 = 1;
}

bool func_349(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x4D6D22510A2467D9("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x4D6D22510A2467D9("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x4D6D22510A2467D9("mp_matchmaking_card");
	}
	return unk_0xA8AF99BD8D81CFB7(*uParam1);
}

void func_350(var uParam0, var uParam1, bool bParam2)
{
	unk_0x507FE690B1271947(&(uParam1->f_33), 7);
	Global_1574108 = 0;
	func_244();
	Global_1574107 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_11(&(uParam1->f_19)))
		{
			func_9(&(uParam1->f_19));
		}
	}
	if (unk_0xA8AF99BD8D81CFB7(*uParam0))
	{
		unk_0x73F5E7B6BB964839(uParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(uParam1->f_33, 0))
	{
		unk_0x507FE690B1271947(&(uParam1->f_33), 0);
	}
	unk_0x11CA0D8AE0C37B1C(0f);
}

int func_351()
{
	if (func_362())
	{
		return 0;
	}
	if (func_361())
	{
		return 0;
	}
	if (!func_359())
	{
		return 0;
	}
	if (!func_357())
	{
		return 0;
	}
	if (func_356(8, -1))
	{
		return 0;
	}
	if (func_363() == 2)
	{
		return 0;
	}
	if (Global_2497344.f_4464)
	{
		return 0;
	}
	if (func_355())
	{
		return 0;
	}
	else if (!func_97(unk_0x0FFED3E94261A832(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_354(1) || func_352(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (func_100(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (Global_1761104)
	{
		return 0;
	}
	if (func_182(0))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 4))
	{
		return 0;
	}
	if (Global_1345093)
	{
		return 0;
	}
	return 1;
}

int func_352(bool bParam0)
{
	if (unk_0xF0286A0AE859AD50())
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			if (func_353(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0x83F6A1E4E653AD75(0, 25) || unk_0x83F6A1E4E653AD75(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17151.f_130)
	{
		return 0;
	}
	if (unk_0x83F6A1E4E653AD75(0, 19) || (!bParam0 && unk_0xC20E8B2E17B46871(0, 19)))
	{
		return 1;
	}
	if (unk_0x5018862FF5D9F844())
	{
		if (((unk_0x83F6A1E4E653AD75(0, 166) || unk_0x83F6A1E4E653AD75(0, 167)) || unk_0x83F6A1E4E653AD75(0, 168)) || unk_0x83F6A1E4E653AD75(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xC20E8B2E17B46871(0, 166) || unk_0xC20E8B2E17B46871(0, 167)) || unk_0xC20E8B2E17B46871(0, 168)) || unk_0xC20E8B2E17B46871(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_353(int iParam0)
{
	int iVar0;
	
	if (unk_0xE71026F240213063())
	{
		if (!unk_0x769F0F6444C1ABE0(iParam0))
		{
			unk_0xE3B6C923999B844E(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_354(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_355()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189 != 0;
}

bool func_356(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

int func_357()
{
	if (func_358() == 0)
	{
		return 1;
	}
	return 0;
}

int func_358()
{
	return Global_1312466.f_18;
}

int func_359()
{
	if (func_360())
	{
		return 1;
	}
	if (unk_0xF4EE9D6C8E60AE22())
	{
		return 0;
	}
	if (unk_0xEF08C8E0C4679477() || unk_0x9AF3AC4F52023B45())
	{
		return 0;
	}
	if (unk_0x8F70BD179415A092())
	{
		return 0;
	}
	return 1;
}

bool func_360()
{
	return Global_1312438;
}

bool func_361()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 5;
}

bool func_362()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

int func_363()
{
	return Global_1351508.f_68;
}

int func_364()
{
	if (Global_1574109 > 16)
	{
		return 1;
	}
	return 0;
}

float func_365()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x161748EC0862E7CF()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 25:
		case 26:
			return 1;
			break;
	}
	return 0;
}

int func_367()
{
	if (func_368(unk_0x0FFED3E94261A832()))
	{
		return Global_1316425;
	}
	return 0;
}

int func_368(int iParam0)
{
	if (unk_0x591AF4C50B46E014())
	{
		if (func_34(iParam0, 0))
		{
			return unk_0x4133423A5B0B5FC4(iParam0);
		}
	}
	return 0;
}

int func_369()
{
	if (func_367())
	{
		return 1;
	}
	if (func_296(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_337())
	{
		return 1;
	}
	if (func_229(unk_0x0FFED3E94261A832()))
	{
		switch (func_300(unk_0x0FFED3E94261A832()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_370(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_370(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_370(unk_0x0FFED3E94261A832()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_370(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 4);
}

int func_371(int iParam0)
{
	if ((iParam0 == 26 && func_229(unk_0x0FFED3E94261A832())) && !func_275(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_202(unk_0x0FFED3E94261A832(), 0) && func_275(unk_0x0FFED3E94261A832()))
		{
			return 1;
		}
		if (func_372(unk_0x0FFED3E94261A832()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_372(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_229(iParam0) && !func_228(iParam0)) && !unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_1, 8));
	bVar2 = func_275(iParam0);
	uVar3 = func_380();
	uVar4 = func_374();
	if ((bVar1 && (func_227(iParam0) || func_226(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_223(iParam0)) && !func_373(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2497344.f_4828.f_31 != iVar0)
	{
		Global_2497344.f_4828.f_31 = iVar0;
	}
	return iVar0;
}

bool func_373(int iParam0)
{
	return func_205(iParam0, 19);
}

int func_374()
{
	if ((func_205(unk_0x0FFED3E94261A832(), 21) || func_205(unk_0x0FFED3E94261A832(), 22)) || func_377())
	{
		return 1;
	}
	if (func_375())
	{
		func_206(22);
		return 1;
	}
	return 0;
}

int func_375()
{
	if (func_202(unk_0x0FFED3E94261A832(), 0))
	{
		if ((func_380() && !func_376()) || func_220(unk_0x0FFED3E94261A832(), 21))
		{
			return 1;
		}
		else
		{
			func_204(27);
		}
	}
	return 0;
}

bool func_376()
{
	return Global_1312416.f_1;
}

bool func_377()
{
	return func_378(289, -1);
}

int func_378(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2526994[iParam0 /*3*/][func_379(iParam1)];
	if (unk_0x17DA8BAE529C4AC7(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_379(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

bool func_380()
{
	return Global_1312416;
}

int func_381()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_34(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = unk_0x88641E5BC172153A();
	}
	else
	{
		iVar0 = func_382();
	}
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Local_397[iVar0 /*11*/].f_1, 1);
	}
	return 0;
}

int func_382()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	if (unk_0x885F483F34E47503(iVar1))
	{
		if (unk_0x76BCE6C7B20502DA(iVar1))
		{
			iVar2 = unk_0x675E1E93DBDAF30B(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

bool func_383()
{
	return Local_127.f_196 == 99;
}

void func_384()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_385(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_385(int iParam0)
{
	struct<4> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<14> Var15;
	int iVar29;
	int iVar30;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 10))
	{
		iVar29 = 0;
		while (iVar29 < 10)
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_127.f_209, iVar29))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_6, iVar29))
				{
					if (unk_0x2137828D03306CAF(Var0.f_0))
					{
						if (unk_0x82DF3B947FC3E281(Var0.f_0))
						{
							if (!unk_0xAA4F14DA15DB0B51(Local_127.f_205, iVar29))
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_5, iVar29))
								{
									if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar29 /*10*/].f_2))
									{
										if (unk_0x2137828D03306CAF(unk_0xECBE9D2902B2B964(Local_127.f_2[iVar29 /*10*/].f_2)))
										{
											if (unk_0x761AC59E782D169D(Var0.f_0) == unk_0xECBE9D2902B2B964(Local_127.f_2[iVar29 /*10*/].f_2))
											{
												if (unk_0x2137828D03306CAF(Var0.f_1))
												{
													if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
													{
														if (unk_0xC3A7AD90290CA72E(Var0.f_1) == unk_0x2A5EB8B0FE590B91())
														{
															if (func_980() == Local_127.f_218)
															{
																unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_5), iVar29);
															}
														}
														else if (unk_0xDB61DD81432BD145(unk_0xC3A7AD90290CA72E(Var0.f_1)))
														{
															iVar30 = unk_0xB0BB7458627D389F(unk_0xC3A7AD90290CA72E(Var0.f_1));
															if (!unk_0x76BCE6C7B20502DA(iVar30))
															{
																unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_5), iVar29);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else if (unk_0xEE46DE31F43DCAF1(Var0.f_0))
						{
							iVar11 = unk_0xC3A7AD90290CA72E(Var0.f_0);
							if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar29 /*10*/].f_1))
							{
								if (iVar11 == unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar29 /*10*/].f_1))
								{
									if (unk_0x2137828D03306CAF(Var0.f_1))
									{
										if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
										{
											iVar10 = unk_0xC3A7AD90290CA72E(Var0.f_1);
											if (unk_0xDB61DD81432BD145(iVar10))
											{
												iVar13 = unk_0xB0BB7458627D389F(iVar10);
												if (unk_0x76BCE6C7B20502DA(iVar13))
												{
													if (Var0.f_3)
													{
														if (iVar13 == unk_0x0FFED3E94261A832())
														{
															unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_6), iVar29);
															if (!func_383())
															{
																Var15.f_2 = -1747062969;
																Var15.f_10 = unk_0x0FFED3E94261A832();
																func_391(Var15, func_392(0));
															}
														}
													}
												}
												else if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_7, iVar29))
												{
													if (Var0.f_3)
													{
														unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_7), iVar29);
													}
												}
											}
											else if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_8, iVar29))
											{
												if (Var0.f_3)
												{
													unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_8), iVar29);
												}
											}
										}
										else if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_8, iVar29))
										{
											if (Var0.f_3)
											{
												unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_8), iVar29);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iVar29++;
		}
		if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 15))
		{
			if (unk_0x2137828D03306CAF(Var0.f_0))
			{
				if (unk_0xEE46DE31F43DCAF1(Var0.f_0))
				{
					iVar11 = unk_0xC3A7AD90290CA72E(Var0.f_0);
					if (func_390(unk_0xD3B21CE53AA7BE51(iVar11)))
					{
						unk_0xF6082E2ADA1C795B(&iLocal_750, 15);
					}
				}
				else if (unk_0x82DF3B947FC3E281(Var0.f_0))
				{
					if (func_389(unk_0xD3B21CE53AA7BE51(Var0.f_0)))
					{
						if (!func_388(unk_0x2A5EB8B0FE590B91(), unk_0x761AC59E782D169D(Var0.f_0), 0))
						{
							if (!func_387(unk_0x761AC59E782D169D(Var0.f_0), 0))
							{
								unk_0xF6082E2ADA1C795B(&iLocal_750, 15);
							}
						}
					}
				}
			}
		}
	}
	if (func_381())
	{
		if (!func_205(unk_0x0FFED3E94261A832(), 20))
		{
			if (unk_0x2137828D03306CAF(Var0.f_0))
			{
				if (unk_0xEE46DE31F43DCAF1(Var0.f_0))
				{
					iVar11 = unk_0xC3A7AD90290CA72E(Var0.f_0);
					if (unk_0xDB61DD81432BD145(iVar11))
					{
						iVar12 = unk_0xB0BB7458627D389F(iVar11);
						if (unk_0x2137828D03306CAF(Var0.f_1))
						{
							if (unk_0xEE46DE31F43DCAF1(Var0.f_1))
							{
								iVar10 = unk_0xC3A7AD90290CA72E(Var0.f_1);
								if (unk_0xDB61DD81432BD145(iVar10))
								{
									iVar13 = unk_0xB0BB7458627D389F(iVar10);
									if (iVar13 == unk_0x0FFED3E94261A832())
									{
										if (unk_0x76BCE6C7B20502DA(iVar12))
										{
											if (func_269(iVar12, 1))
											{
												if (Local_127.f_218 > -1)
												{
													iVar14 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(Local_127.f_218));
													if (func_305(iVar12, iVar14, 1))
													{
														func_386(0);
														func_959();
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_386(int iParam0)
{
	if (!func_275(unk_0x0FFED3E94261A832()))
	{
		if (iParam0 || func_372(unk_0x0FFED3E94261A832()) != 0)
		{
			func_206(20);
			if (func_229(unk_0x0FFED3E94261A832()))
			{
				if (!unk_0xAA4F14DA15DB0B51(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1, 8))
				{
					unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 8);
				}
			}
		}
	}
}

int func_387(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xCBA4F77BB9D2F115(iParam0) + 1;
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x457D9E478E06E354(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0x8F8E5C33266ED978(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0x2137828D03306CAF(iVar2))
					{
						if (unk_0xDB61DD81432BD145(iVar2))
						{
							return 1;
						}
					}
				}
				else if (!unk_0x769F0F6444C1ABE0(iVar2))
				{
					if (unk_0xDB61DD81432BD145(iVar2))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_388(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x2137828D03306CAF(iParam0) && !unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		if (unk_0x2137828D03306CAF(iParam1) && !unk_0xA9A04898798AE9E6(iParam1, 0))
		{
			if (unk_0x5B9B499C707C2A95(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case joaat("s_m_y_cop_01"):
		case joaat("s_f_y_cop_01"):
		case joaat("s_m_y_swat_01"):
		case joaat("s_m_m_fiboffice_01"):
		case joaat("s_m_y_sheriff_01"):
		case joaat("s_f_y_sheriff_01"):
		case joaat("s_m_y_ranger_01"):
		case joaat("s_f_y_ranger_01"):
		case joaat("s_m_y_blackops_01"):
		case joaat("s_m_m_armoured_01"):
		case joaat("s_m_y_pilot_01"):
		case joaat("s_m_m_fibsec_01"):
			return 1;
			break;
	}
	return 0;
}

void func_391(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1913269625;
	Param0.f_1 = unk_0x0FFED3E94261A832();
	if (!iParam14 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Param0, 14, iParam14);
	}
}

int func_392(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x244673FE98A43CA3())
	{
		if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar1)))
		{
			iVar2 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar1));
			if (func_1072(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x0FFED3E94261A832() || iParam0)
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_393()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_34(unk_0x0FFED3E94261A832(), 0))
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_750, 10))
		{
			unk_0x507FE690B1271947(&iLocal_750, 10);
		}
		return;
	}
	iVar0 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 10))
	{
		if (Local_397[unk_0x88641E5BC172153A() /*11*/].f_1 != 0)
		{
			Local_397[unk_0x88641E5BC172153A() /*11*/].f_1 = 0;
		}
		unk_0xF6082E2ADA1C795B(&iLocal_750, 10);
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 11))
	{
		unk_0xF6082E2ADA1C795B(&iLocal_750, 11);
		func_873();
	}
	if (unk_0x885F483F34E47503(iVar0))
	{
		if (unk_0x76BCE6C7B20502DA(iVar0))
		{
			uVar1 = unk_0x675E1E93DBDAF30B(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_397[iVar2 /*11*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_745();
					func_730();
					func_721();
					func_394();
					break;
				
				case 2:
					func_394();
					break;
				
				case 3:
					func_993();
					break;
				}
			}
	}
}

void func_394()
{
	struct<10> Var0;
	int iVar16;
	char* sVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar16 = func_55();
	iVar19 = unk_0x88641E5BC172153A();
	iVar20 = unk_0x0FFED3E94261A832();
	if (func_34(unk_0x0FFED3E94261A832(), 0))
	{
		iVar19 = func_382();
		iVar20 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_397[iVar19 /*11*/].f_1, 4))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 3))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 1))
			{
				if (iVar19 == Local_127.f_218 || func_980() == Local_127.f_218)
				{
					if (func_372(unk_0x0FFED3E94261A832()) >= 2)
					{
						sVar17 = func_715(iVar20);
						uVar18 = func_714(iVar20);
						func_712(87, "BIGM_DEFENDED", "BIGM_CONTRAS", sVar17, uVar18, 0, -1, -1, -1, 2, -1);
					}
					if (iVar20 == unk_0x0FFED3E94261A832())
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 6))
						{
							func_678(1, 1, 0, 0, -1, -1, -1, -1);
							unk_0xF6082E2ADA1C795B(&iLocal_750, 6);
						}
						func_536(169, 1, &Var0, 0);
						unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
					}
				}
				else if (func_381())
				{
				}
				iLocal_759 = func_20();
				iLocal_760 = (func_20() - func_535(&(Local_127.f_226), 0, 0));
				unk_0xF6082E2ADA1C795B(&iLocal_750, 3);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 4))
			{
				if (unk_0xAA4F14DA15DB0B51(Local_397[iVar19 /*11*/].f_1, 14))
				{
					if (Local_127.f_221 >= 0)
					{
						iVar16 = unk_0x7C214DA899F05536(Local_127.f_221);
						if (iVar16 == iVar20)
						{
							func_505(87, "BIGM_SECURED", "BIGM_CONTRAYR", 1, -1, 2);
						}
						else if (func_372(iVar20) >= 2)
						{
							sVar17 = func_715(iVar20);
							uVar18 = func_714(iVar20);
							func_712(87, "BIGM_SECURED", "BIGM_CONTRAGR", sVar17, uVar18, 0, -1, -1, -1, 2, -1);
						}
					}
					if (iVar20 == unk_0x0FFED3E94261A832())
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 6))
						{
							func_678(1, 1, 0, 0, -1, -1, -1, -1);
							unk_0xF6082E2ADA1C795B(&iLocal_750, 6);
						}
						func_536(169, 1, &Var0, 0);
						unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
					}
					iLocal_759 = func_20();
					iLocal_760 = (func_20() - func_535(&(Local_127.f_226), 0, 0));
					unk_0xF6082E2ADA1C795B(&iLocal_750, 3);
				}
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 3))
			{
				if (unk_0x88641E5BC172153A() == Local_127.f_218 || func_980() == Local_127.f_218)
				{
					if (func_372(iVar20) >= 2)
					{
						sVar17 = func_715(iVar20);
						uVar18 = func_714(unk_0x0FFED3E94261A832());
						func_712(88, "BIGM_DCLOST", "BIGM_CONTRAFD", sVar17, uVar18, 0, -1, -1, -1, 2, -1);
					}
					if (iVar20 == unk_0x0FFED3E94261A832())
					{
						if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 6))
						{
							func_678(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0xF6082E2ADA1C795B(&iLocal_750, 6);
						}
						func_536(169, 0, &Var0, 0);
					}
				}
				iLocal_759 = func_20();
				iLocal_760 = (func_20() - func_535(&(Local_127.f_226), 0, 0));
				unk_0xF6082E2ADA1C795B(&iLocal_750, 3);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 9))
			{
				if (func_480())
				{
					if (func_372(iVar20) >= 2)
					{
						sVar17 = func_715(iVar20);
						uVar18 = func_714(iVar20);
						func_712(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar17, uVar18, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar20 == unk_0x0FFED3E94261A832())
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 6))
					{
						func_678(0, 2, 0, 0, -1, -1, -1, -1);
						unk_0xF6082E2ADA1C795B(&iLocal_750, 6);
					}
					func_536(169, 0, &Var0, 0);
				}
				iLocal_759 = func_20();
				iLocal_760 = (func_20() - func_535(&(Local_127.f_226), 0, 0));
				unk_0xF6082E2ADA1C795B(&iLocal_750, 3);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 8))
			{
				if (func_480())
				{
					if (func_372(iVar20) >= 2)
					{
						sVar17 = func_715(iVar20);
						uVar18 = func_714(iVar20);
						func_712(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar17, uVar18, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar20 == unk_0x0FFED3E94261A832())
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 6))
					{
						func_678(0, 2, 0, 0, -1, -1, -1, -1);
						unk_0xF6082E2ADA1C795B(&iLocal_750, 6);
					}
					func_536(169, 0, &Var0, 0);
				}
				iLocal_759 = func_20();
				iLocal_760 = (func_20() - func_535(&(Local_127.f_226), 0, 0));
				unk_0xF6082E2ADA1C795B(&iLocal_750, 3);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 15))
			{
				if (func_480())
				{
					if (func_372(iVar20) >= 2)
					{
						sVar17 = func_715(iVar20);
						uVar18 = func_714(iVar20);
						func_712(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar17, uVar18, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar20 == unk_0x0FFED3E94261A832())
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 6))
					{
						func_678(0, 2, 0, 0, -1, -1, -1, -1);
						unk_0xF6082E2ADA1C795B(&iLocal_750, 6);
					}
					func_536(169, 0, &Var0, 0);
				}
				iLocal_759 = func_20();
				iLocal_760 = (func_20() - func_535(&(Local_127.f_226), 0, 0));
				unk_0xF6082E2ADA1C795B(&iLocal_750, 3);
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 5))
			{
				if (func_480())
				{
					if (func_979())
					{
						if (func_372(iVar20) >= 2)
						{
						}
					}
					else if (func_372(iVar20) >= 2)
					{
						func_505(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2);
					}
				}
				if (iVar20 == unk_0x0FFED3E94261A832())
				{
					if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 6))
					{
						func_678(0, 8, 0, 0, -1, -1, -1, -1);
						unk_0xF6082E2ADA1C795B(&iLocal_750, 6);
					}
					func_536(169, 0, &Var0, 0);
				}
				unk_0xF6082E2ADA1C795B(&iLocal_750, 3);
			}
		}
		if (unk_0xAA4F14DA15DB0B51(iLocal_750, 3))
		{
			func_873();
			if (unk_0x88641E5BC172153A() == Local_127.f_218)
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 16) && !unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 13))
				{
					if ((((unk_0xAA4F14DA15DB0B51(Local_127.f_1, 15) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 8)) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 3)) || func_11(&(Local_127.f_226))) || (func_383() && unk_0xAA4F14DA15DB0B51(Local_127.f_1, 9)))
					{
						func_426();
					}
					else
					{
						unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 13);
						if (!func_425(38))
						{
							func_424(38);
						}
					}
					if (iLocal_761 == 2)
					{
						unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 13);
					}
					if (iLocal_761 == 3)
					{
						unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 13);
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 8))
			{
				func_422();
				func_420();
				unk_0xF6082E2ADA1C795B(&iLocal_751, 8);
			}
			if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 7))
			{
				if (Local_127.f_219 != -1)
				{
					if (unk_0xAA4F14DA15DB0B51(iLocal_750, 5))
					{
						if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(Local_127.f_219)))
						{
							func_418(unk_0x7C214DA899F05536(Local_127.f_219), 432, 0);
							func_416(unk_0x7C214DA899F05536(Local_127.f_219), 1, 0);
							func_415(unk_0x7C214DA899F05536(Local_127.f_219), 0, 0);
							func_414(unk_0x7C214DA899F05536(Local_127.f_219), 0);
							func_413(unk_0x7C214DA899F05536(Local_127.f_219), Global_262145.f_11007, 0);
							unk_0xF6082E2ADA1C795B(&iLocal_750, 7);
						}
					}
				}
			}
			if (func_395(&uLocal_762, 1, 0) && (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 16) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 5)))
			{
				if (iVar19 == unk_0x88641E5BC172153A())
				{
					unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 4);
				}
			}
		}
	}
}

int func_395(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_206(29);
	if ((*uParam0 > 0 && !func_312()) && func_372(unk_0x0FFED3E94261A832()) != 0)
	{
		if (!func_410())
		{
			func_409();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_11(&(uParam0->f_3)))
			{
				func_10(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 2);
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 0);
					func_10(&(uParam0->f_5), 0, 0);
				}
				func_10(&(uParam0->f_1), 0, 0);
				func_408(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_11(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_402(iParam2);
				func_408(uParam0, 2);
			}
			break;
		
		case 2:
			func_402(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_396(func_397(0)))
				{
					unk_0x7D53B6FFAEDA810A(1);
				}
				func_408(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x507FE690B1271947(&(Global_2497344.f_4504), 1);
				unk_0x507FE690B1271947(&(Global_1773245.f_3), 2);
				func_408(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x507FE690B1271947(&(Global_2497344.f_4504), 1);
			unk_0x507FE690B1271947(&(Global_1773245.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_396(char* sParam0)
{
	unk_0xCC4D66D4B9222F95(sParam0);
	return unk_0x95886DF60C19E1CC(0);
}

char* func_397(int iParam0)
{
	if (((func_400(unk_0x0FFED3E94261A832()) || func_399(unk_0x0FFED3E94261A832())) || func_330()) || iParam0)
	{
		if (func_399(unk_0x0FFED3E94261A832()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_302(func_398()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_398()
{
	return Global_1636589;
}

bool func_399(int iParam0)
{
	return func_303(func_201(iParam0), 0);
}

bool func_400(int iParam0)
{
	return func_401(func_201(iParam0));
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148 && func_260(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_34, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_402(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4504, 0))
	{
		if ((((((((((!unk_0x6B7E3D3B66456AA8() && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_772, 2)) && func_1072(unk_0x0FFED3E94261A832(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0xF4EE9D6C8E60AE22()) && !func_205(unk_0x0FFED3E94261A832(), 22)) && func_372(unk_0x0FFED3E94261A832()) != 0) && !func_406(func_407())) && !func_400(unk_0x0FFED3E94261A832())) && !func_405(func_201(unk_0x0FFED3E94261A832())))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4504), 1);
			func_404(func_397(iParam0), -1);
			func_403(1);
			unk_0x507FE690B1271947(&(Global_2497344.f_4504), 0);
		}
	}
}

void func_403(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_329(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_312())
	{
		unk_0x08BE237DBCD9CBD9(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_404(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 0, iParam1);
}

int func_405(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_406(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_407()
{
	var uVar0;
	
	uVar0 = unk_0xFABF5258A318B1DC();
	if (unk_0x35302CD5A5D37EED(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x35302CD5A5D37EED(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	return 0;
}

void func_408(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_409()
{
	Global_2456236 = 1;
}

int func_410()
{
	if (((((((func_201(unk_0x0FFED3E94261A832()) == 170 || func_201(unk_0x0FFED3E94261A832()) == 219) || func_201(unk_0x0FFED3E94261A832()) == 221) || func_201(unk_0x0FFED3E94261A832()) == 220) || func_201(unk_0x0FFED3E94261A832()) == 216) || func_201(unk_0x0FFED3E94261A832()) == 215) || func_201(unk_0x0FFED3E94261A832()) == 214) || func_201(unk_0x0FFED3E94261A832()) == 218)
	{
		return 1;
	}
	if (func_411(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

int func_411(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_412(Global_2422215[iParam0 /*387*/].f_318.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
	}
	return -1;
}

void func_413(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_212())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_772[iParam0]) || Global_2415029.f_772[iParam0] == unk_0xFF09208EC90C94CB())
	{
		if (bParam2)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_389), iVar0);
			Global_2415029.f_541[iVar0] = uParam1;
			Global_2415029.f_772[iParam0] = unk_0xFF09208EC90C94CB();
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_2415029.f_389), iVar0);
			Global_2415029.f_772[iParam0] = -1;
		}
	}
}

void func_414(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF6082E2ADA1C795B(&(Global_2415029.f_365), iParam0);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_2415029.f_365), iParam0);
	}
	if (unk_0xBDD3EABACAB97D09(Global_2415029[iParam0]))
	{
		if (bParam1)
		{
			unk_0x462AF05FA2053F74(Global_2415029[iParam0], 0);
		}
		else
		{
			unk_0x462AF05FA2053F74(Global_2415029[iParam0], 1);
		}
	}
}

void func_415(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_1072(iParam0, 1, 1))
		{
			Global_2415029.f_706[iParam0] = unk_0xFF09208EC90C94CB();
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_364), iParam0);
			func_414(iParam0, bParam2);
		}
	}
	else
	{
		func_414(iParam0, bParam2);
		unk_0x507FE690B1271947(&(Global_2415029.f_364), iParam0);
		Global_2415029.f_706[iParam0] = -1;
	}
}

void func_416(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_212())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_417(iParam0))
	{
		if (bParam2)
		{
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = unk_0xFF09208EC90C94CB();
			Global_2415029.f_442[iVar0] = iParam1;
		}
		else
		{
			unk_0x507FE690B1271947(&(Global_2415029.f_386), iVar0);
			Global_2415029.f_607[iParam0] = -1;
		}
	}
}

int func_417(int iParam0)
{
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_607[iParam0]) || Global_2415029.f_607[iParam0] == unk_0xFF09208EC90C94CB())
	{
		return 1;
	}
	return 0;
}

void func_418(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == func_212())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xE00BB08A385D5A25(Global_2415029.f_574[iParam0]) || Global_2415029.f_574[iParam0] == unk_0xFF09208EC90C94CB())
	{
		if (bParam2)
		{
			if (!unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_419();
			}
			unk_0xF6082E2ADA1C795B(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_409[iVar0] = uVar1;
			Global_2415029.f_574[iParam0] = unk_0xFF09208EC90C94CB();
		}
		else
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2415029.f_385, iVar0))
			{
				func_419();
			}
			unk_0x507FE690B1271947(&(Global_2415029.f_385), iVar0);
			Global_2415029.f_574[iParam0] = -1;
		}
	}
}

void func_419()
{
	Global_2415029.f_1002 = 1;
}

void func_420()
{
	int iVar0;
	int iVar1;
	
	if (!func_383())
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 9))
	{
		unk_0xF6082E2ADA1C795B(&iLocal_750, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x7C214DA899F05536(iVar0);
			if (unk_0x885F483F34E47503(iVar1))
			{
				if (iVar1 != unk_0x0FFED3E94261A832())
				{
					func_418(iVar1, 478, 0);
					func_416(iVar1, func_421(iLocal_864), 0);
				}
			}
			iVar0++;
		}
	}
}

int func_421(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xF9C830438D0097FD(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_422()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_850[iVar0]))
		{
			unk_0x789C84F1B8496AD0(&(uLocal_850[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_863))
	{
		unk_0x789C84F1B8496AD0(&uLocal_863);
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_861))
	{
		unk_0x789C84F1B8496AD0(&uLocal_861);
	}
	if (unk_0xBDD3EABACAB97D09(uLocal_862))
	{
		unk_0x789C84F1B8496AD0(&uLocal_862);
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_750, 12))
	{
		unk_0xDC0343058D861402(uLocal_758);
		unk_0xC7B777B06F98C301("ALARM_BELL_02");
		unk_0x507FE690B1271947(&iLocal_750, 12);
	}
	if (((func_396("DCONTRA_HLP1") || func_396("DCONTRA_HLP2")) || func_396("DCONTRA_HLPVCR")) || func_396("DCONTRA_HLPCR"))
	{
		unk_0x7D53B6FFAEDA810A(1);
	}
	func_423();
}

void func_423()
{
	if (unk_0xAA4F14DA15DB0B51(iLocal_750, 14))
	{
		func_194();
		func_189(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		unk_0x507FE690B1271947(&iLocal_750, 14);
	}
}

void func_424(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF6082E2ADA1C795B(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

bool func_425(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_7[iVar0], iVar1);
}

void func_426()
{
	float fVar0;
	
	if (func_383())
	{
		if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 9) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 8))
		{
			func_427(func_479());
			if (!func_425(36))
			{
				func_424(36);
			}
		}
	}
	else if (func_11(&(Local_127.f_226)))
	{
		if (iLocal_760 <= 0)
		{
			func_427(func_479());
			if (!func_425(36))
			{
				func_424(36);
			}
		}
		else
		{
			fVar0 = (unk_0xBBDA792448DB5A89((iLocal_759 - iLocal_760)) / unk_0xBBDA792448DB5A89(iLocal_759));
			fVar0 = (fVar0 * 0.5f);
			func_427(fVar0);
			if (!func_425(37))
			{
				func_424(37);
			}
		}
	}
}

void func_427(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Local_127.f_197 + 1;
	iVar1 = func_478(iVar0);
	if (iVar1 > 0)
	{
		iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * fParam0));
		if (unk_0xBBDA792448DB5A89(iVar2) > (unk_0xBBDA792448DB5A89(iVar1) / 2f))
		{
			iVar2 = (iVar2 - 1);
		}
		func_428(iVar0, iVar2, 0, 0, &iLocal_761, 0);
	}
	else
	{
		unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 13);
	}
}

void func_428(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam1 <= 0)
	{
		if (iParam1 == 0)
		{
		}
		*uParam4 = 3;
		return;
	}
	if (*uParam4 != 0 && *uParam4 != 1)
	{
		*uParam4 = 0;
	}
	iVar0 = func_478(iParam0);
	iVar1 = func_477(iParam0);
	if (!func_476())
	{
		if (iVar1 >= 0 && iVar0 >= iParam1)
		{
			iVar2 = (func_478(iParam0) - iParam1);
			iVar3 = 0;
			if (bParam5)
			{
				iVar3 = iParam1;
			}
			func_462(iParam0, iVar1, iVar2, iVar3, 0, 11);
			func_460(func_461(iVar1), iVar2, -1, 1);
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar1 /*3*/].f_1 = iVar2;
			if (iVar3 != 0)
			{
				func_456(iParam0, iVar3);
				func_452(iParam0, iVar3);
			}
			if (unk_0x1B154DE2D4606530())
			{
				unk_0xE2B7644E3374A901(10);
			}
			func_449(10, 0);
			*uParam4 = 2;
		}
		else
		{
			*uParam4 = 3;
		}
	}
	else if (iVar1 >= 0 && iVar0 >= iParam1)
	{
		iVar4 = (func_478(iParam0) - iParam1);
		iVar5 = 0;
		if (bParam5)
		{
			iVar5 = iParam1;
		}
		if (func_429(iVar1, iParam1, iVar5, iParam2, iParam3, uParam4))
		{
			if (*uParam4 == 2)
			{
				func_462(iParam0, iVar1, iVar4, iVar5, 0, 11);
				func_460(func_461(iVar1), iVar4, -1, 1);
				Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar1 /*3*/].f_1 = iVar4;
				if (iVar5 != 0)
				{
					func_452(iParam0, iVar5);
				}
				if (unk_0x1B154DE2D4606530())
				{
					unk_0xE2B7644E3374A901(10);
				}
				func_449(10, 0);
				*uParam4 = 2;
			}
			else if (*uParam4 == 3)
			{
				*uParam4 = 3;
			}
		}
	}
	else
	{
		*uParam4 = 3;
	}
}

bool func_429(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam5 != 0 && *uParam5 != 1)
	{
		*uParam5 = 0;
	}
	switch (*uParam5)
	{
		case 0:
			iVar0 = func_448(iParam0);
			uVar1 = func_446(0, iParam1, 0, -1);
			iVar2 = func_445(iParam0);
			uVar3 = func_444(iParam0);
			switch (iParam4)
			{
				case 0:
					iVar4 = -1003644442;
					break;
				
				case 1:
					iVar4 = 402112378;
					break;
				
				case 2:
					iVar4 = 1283718111;
					break;
				
				case 3:
					iVar4 = 1783677420;
					break;
			}
			if (iParam4 == 0 || func_440(78225582, -1799524201, uVar1, -788753717, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_440(78225582, 69656641, iVar2, -788753717, iParam1, 0, 1, 4, 0, 3))
				{
					if (iParam2 == 0 || func_440(78225582, 69656641, uVar3, -788753717, iParam2, 0, 1, 4, 0, 3))
					{
						if (func_440(78225582, -739932302, iVar4, -788753717, 1, iParam3, 0, 4, iVar2, 3))
						{
							*uParam5 = 1;
						}
						else
						{
							*uParam5 = 3;
						}
					}
					else
					{
						*uParam5 = 3;
					}
				}
				else
				{
					*uParam5 = 3;
				}
			}
			else
			{
				*uParam5 = 3;
			}
			if (*uParam5 == 1 && func_438())
			{
			}
			else
			{
				*uParam5 = 3;
				func_432(func_436());
			}
			break;
		
		case 1:
			if (func_431(func_436()))
			{
				if (func_430(func_436()) == 2)
				{
					*uParam5 = 2;
					func_432(func_436());
				}
				else
				{
					*uParam5 = 3;
					func_432(func_436());
				}
			}
			break;
	}
	return *uParam5 != 1;
}

int func_430(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_2;
	}
	return 0;
}

int func_431(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_2 != 1;
	}
	return 0;
}

void func_432(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_476())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_435(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9C51DBB1481E20AE();
			}
		}
		else if (!bVar0)
		{
			unk_0x2605CD7011F296C8(Global_2595364[iParam0 /*76*/]);
		}
		func_433(&(Global_2595364[iParam0 /*76*/]));
	}
}

void func_433(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_434(&(uParam0->f_8.f_3));
	func_434(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

void func_434(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_435(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/].f_5 == 1;
	}
	return 0;
}

int func_436()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_437(iVar0) != 2147483647)
		{
			if (func_435(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_437(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2595364[iParam0 /*76*/];
	}
	return -1;
}

int func_438()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (!func_476())
	{
		bVar0 = true;
	}
	iVar1 = func_436();
	if (iVar1 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_36()) || unk_0x3227E797058C3C9A())
		{
			if (func_439(Global_2595364[iVar1 /*76*/].f_6, Global_2595364[iVar1 /*76*/].f_4, Global_2595364[iVar1 /*76*/].f_1) == 1)
			{
				Global_2595874 = 1;
			}
			return 0;
		}
		if (Global_2455861)
		{
			if (Global_2595364[iVar1 /*76*/].f_6 == 1067618600 || Global_2595364[iVar1 /*76*/].f_6 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	iVar2 = func_437(iVar1);
	if (iVar2 != 2147483647)
	{
		if (bVar0 || unk_0xB7E932E3159B0B10(iVar2))
		{
			if (bVar0)
			{
				Global_2595364[iVar1 /*76*/].f_69 = 1;
			}
			Global_2595364[iVar1 /*76*/].f_75 = 0;
			Global_2595864 = 1;
			return 1;
		}
	}
	return 0;
}

int func_439(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_440(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_476())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_36()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	iVar1 = func_436();
	if (iVar1 == -1)
	{
		if (!func_442(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_441(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_2595364[iVar1 /*76*/].f_73 = Var2.f_0;
		Global_2595364[iVar1 /*76*/].f_74 = Var2.f_1;
		if (bVar0 || unk_0x70CDCB3891FCDCDA(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_441(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_442(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_476())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_36()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2595364[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_2595364[iVar1 /*76*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x923AFE55C7140DE8())
		{
			unk_0x9C51DBB1481E20AE();
		}
	}
	if (bVar0 || unk_0x51EFC5363ABAF281(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_443(iVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5);
		return 1;
	}
	return 0;
}

int func_443(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2595364[iVar0 /*76*/].f_2 == 0)
		{
			if (!func_476())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2595364[iVar0 /*76*/].f_2 = 1;
			Global_2595364[iVar0 /*76*/].f_1 = iParam5;
			Global_2595364[iVar0 /*76*/].f_3 = uParam1;
			Global_2595364[iVar0 /*76*/].f_4 = iParam2;
			Global_2595364[iVar0 /*76*/].f_7 = uParam3;
			Global_2595364[iVar0 /*76*/].f_5 = 0;
			Global_2595364[iVar0 /*76*/] = iParam0;
			Global_2595364[iVar0 /*76*/].f_6 = iParam4;
			Global_2595364[iVar0 /*76*/].f_72 = uParam8;
			Global_2595364[iVar0 /*76*/].f_71 = uParam7;
			Global_2595364[iVar0 /*76*/].f_75 = 0;
			Global_2595864 = 0;
			if (bParam6)
			{
				Global_2595364[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_444(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE4_v0", 64);
			break;
	}
	if (unk_0x58478145CAF8429C(&cVar0))
	{
		return -1;
	}
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

int func_445(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE4_v0", 64);
			break;
	}
	if (unk_0x58478145CAF8429C(&cVar0))
	{
		return -1;
	}
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

int func_446(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	
	func_447(&sVar0, bParam0, iParam1, bParam2, iParam3);
	return unk_0xCAEDBF30E3EA14FC(&sVar0);
}

void func_447(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam1)
	{
		if (iParam2 == -1)
		{
			StringCopy(sParam0, "CB_NONE_0_t0_v0", 64);
		}
		else if (bParam3)
		{
			StringCopy(sParam0, "CB_BUY_", 64);
			StringIntConCat(sParam0, iParam2, 64);
			StringConCat(sParam0, "_t1_v", 64);
			StringIntConCat(sParam0, iParam4, 64);
		}
		else
		{
			StringCopy(sParam0, "CB_BUY_", 64);
			StringIntConCat(sParam0, iParam2, 64);
			StringConCat(sParam0, "_t0_v0", 64);
		}
	}
	else
	{
		StringCopy(sParam0, "CB_SELL_0_t0_v0", 64);
	}
}

int func_448(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE4_v0", 64);
			break;
	}
	if (unk_0x58478145CAF8429C(&cVar0))
	{
		return -1;
	}
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

void func_449(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_451(iParam0, iParam1))
	{
		iVar0 = func_450();
		Global_2454613[iVar0] = iParam0;
	}
}

int func_450()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2454613[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_451(int iParam0, var uParam1)
{
	if (Global_1312840)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312852) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_452(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 5;
	while (iVar0 >= 0)
	{
		if (iVar1 < iParam1)
		{
			if (Global_1774546[iVar0] == iParam0)
			{
				Global_1774539[iVar0] = 0;
				Global_1774546[iVar0] = 0;
				iVar1++;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1774546[iVar0] == 0)
		{
			if (iVar2 == -1)
			{
				iVar2 = 0;
			}
		}
		else if (iVar2 != -1)
		{
			Global_1774539[iVar2] = Global_1774539[iVar0];
			Global_1774546[iVar2] = Global_1774546[iVar0];
			Global_1774539[iVar0] = 0;
			Global_1774546[iVar0] = 0;
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_454(func_455(iVar0), Global_1774539[iVar0], -1, 1);
		func_454(func_453(iVar0), Global_1774546[iVar0], -1, 1);
		iVar0++;
	}
}

int func_453(int iParam0)
{
	if (iParam0 == 0)
	{
		return 7648;
	}
	else if (iParam0 == 1)
	{
		return 7649;
	}
	else if (iParam0 == 2)
	{
		return 7650;
	}
	else if (iParam0 == 3)
	{
		return 7651;
	}
	else if (iParam0 == 4)
	{
		return 7652;
	}
	else if (iParam0 == 5)
	{
		return 7653;
	}
	return 7648;
}

var func_454(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x46377A59ACA37C91(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_455(int iParam0)
{
	if (iParam0 == 0)
	{
		return 7642;
	}
	else if (iParam0 == 1)
	{
		return 7643;
	}
	else if (iParam0 == 2)
	{
		return 7644;
	}
	else if (iParam0 == 3)
	{
		return 7645;
	}
	else if (iParam0 == 4)
	{
		return 7646;
	}
	else if (iParam0 == 5)
	{
		return 7647;
	}
	return 7642;
}

void func_456(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_459(func_477(iParam0));
	iVar1 = func_458(iVar0, -1, 0);
	if (iVar1 >= iParam1)
	{
		func_457(iVar0, (iVar1 - iParam1), -1, 1, 0);
	}
}

void func_457(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_379(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

int func_458(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_379(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_459(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3631;
	}
	else if (iParam0 == 1)
	{
		return 3632;
	}
	else if (iParam0 == 2)
	{
		return 3633;
	}
	else if (iParam0 == 3)
	{
		return 3634;
	}
	else if (iParam0 == 4)
	{
		return 3635;
	}
	return 3631;
}

void func_460(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2507378[iParam0 /*3*/][func_379(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 783:
			Global_1361948[func_379(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1361954[func_379(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1361960[func_379(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1361966[func_379(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1361924[func_379(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1361930[func_379(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1361936[func_379(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1361942[func_379(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1361900[func_379(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1361906[func_379(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1361912[func_379(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1361918[func_379(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1361972[func_379(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1361978[func_379(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1361984[func_379(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1361990[func_379(iParam2)] = iParam1;
			break;
		
		case 1299:
			Global_1361996[func_379(iParam2)] = iParam1;
			break;
		
		case 635:
			Global_1362002[func_379(iParam2)] = iParam1;
			break;
		
		case 1274:
			Global_1362008[func_379(iParam2)] = iParam1;
			break;
		
		case 1871:
			Global_2528699[0 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 2262:
			Global_2528699[1 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 2914:
			Global_2528699[2 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2528699[3 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6173:
			Global_2528770[func_379(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1362014[func_379(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1362020[func_379(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1362026[func_379(iParam2)] = iParam1;
			break;
		
		case 1232:
			Global_1362032[func_379(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2528733[0 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3039:
			Global_2528733[1 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2528733[2 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2528733[3 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2528733[4 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2528773[0 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2528773[1 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2528773[2 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2528773[3 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2528773[4 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2528789[0 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2528789[1 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2528789[2 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2528789[3 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2528789[4 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3206:
			Global_2528733[5 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2528699[4 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2528805[func_379(iParam2)] = iParam1;
			break;
		
		case 3649:
			Global_2528814[func_379(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2528808[func_379(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2528817[func_379(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2528811[func_379(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2528820[func_379(iParam2)] = iParam1;
			break;
		
		case 3674:
			Global_2528823[func_379(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2528733[6 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3215:
			Global_2528699[5 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2528733[7 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2528699[6 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3994:
			Global_2528733[8 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3995:
			Global_2528699[7 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3997:
			Global_2528733[9 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2528699[8 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4000:
			Global_2528733[10 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2528699[9 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2528733[11 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2528699[10 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3626;
		
		case 1:
			return 3627;
		
		case 2:
			return 3628;
		
		case 3:
			return 3629;
		
		case 4:
			return 3630;
		
		default:
	}
	return 6309;
}

void func_462(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	
	if (bParam4)
	{
		iVar0 = func_478(iParam0);
		while (iVar0 <= (iParam2 - 1))
		{
			if (iVar0 < func_475(iParam0))
			{
				if (iVar2 < iParam3)
				{
					if (func_473(func_474(iParam0), iVar0))
					{
						iVar3 = func_472(iParam5);
						func_470(iParam1, iVar0, func_471(iVar3), 1, -1);
						iVar2++;
					}
					else
					{
						iVar4 = 0;
						while (iVar4 <= (iParam2 - 1))
						{
							if (func_473(func_474(iParam0), iVar4))
							{
								if (!func_467(func_468(func_469(iParam1, iVar4, -1, -1))))
								{
									iVar5 = func_469(iParam1, iVar4, -1, -1);
									iVar6 = func_472(iParam5);
									func_470(iParam1, iVar4, func_471(iVar6), 1, -1);
									func_470(iParam1, (iParam2 - 1), iVar5, 1, -1);
									iVar2++;
									return;
								}
							}
							iVar4++;
						}
					}
				}
				else
				{
					iVar7 = 0;
					iVar8 = func_464(iParam0, iVar0, iParam5);
					if (iVar0 > 0 && !func_463(func_474(iParam0), iVar0))
					{
						while (iVar8 == func_468(func_469(iParam1, (iVar0 - 1), -1, -1)) && iVar7 < 10)
						{
							iVar8 = func_464(iParam0, iVar0, iParam5);
							iVar7++;
						}
					}
					if (iVar8 != 0)
					{
						if (func_469(iParam1, iVar0, -1, -1) == 0)
						{
							func_470(iParam1, iVar0, func_471(iVar8), 1, -1);
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= (func_478(iParam0) - 1))
		{
			if (iVar0 < func_475(iParam0))
			{
				if (iParam3 > 0)
				{
					iVar1 = 0;
					while (iVar1 <= (func_478(iParam0) - 1))
					{
						if (func_467(func_468(func_469(iParam1, iVar1, -1, -1))))
						{
							if (!func_467(func_468(func_469(iParam1, iVar0, -1, -1))))
							{
								iVar10 = func_469(iParam1, iVar1, -1, -1);
								func_470(iParam1, iVar1, func_469(iParam1, iVar0, -1, -1), 1, -1);
								func_470(iParam1, iVar0, iVar10, 1, -1);
							}
						}
						iVar1++;
					}
				}
				else if (func_467(func_468(func_469(iParam1, iVar0, -1, -1))))
				{
					bVar9 = false;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (!bVar9)
						{
							if (iParam2 >= iVar1)
							{
								if (func_473(func_474(iParam0), iVar1))
								{
									if (!func_467(func_468(func_469(iParam1, iVar1, -1, -1))))
									{
										iVar11 = func_469(iParam1, iVar1, -1, -1);
										func_470(iParam1, iVar1, func_469(iParam1, iVar0, -1, -1), 1, -1);
										func_470(iParam1, iVar0, iVar11, 1, -1);
										bVar9 = true;
									}
								}
							}
						}
						iVar1++;
					}
				}
			}
			iVar0++;
		}
		iVar0 = iParam2;
		while (iVar0 <= (func_478(iParam0) - 1))
		{
			if (iVar0 < func_475(iParam0))
			{
				func_470(iParam1, iVar0, func_471(0), 1, -1);
			}
			iVar0++;
		}
	}
	Global_1774669 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1774665[iVar0] = 0;
		iVar0++;
	}
}

int func_463(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_464(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = unk_0x895FB9FE885E36ED(0, 2);
	if (func_463(func_474(iParam0), iParam1))
	{
		iVar0 = unk_0x895FB9FE885E36ED(0, 4);
	}
	bVar1 = false;
	if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
	{
		bVar1 = true;
	}
	uVar2 = func_466(func_474(iParam0), iParam1);
	return func_465(uParam2, uVar2, bVar1);
}

int func_465(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x895FB9FE885E36ED(0, 2);
	iVar1 = uParam0;
	iVar2 = uParam1;
	if (bParam2)
	{
		switch (iVar1)
		{
			case 0:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							
							case 1:
								return joaat("ex_prop_crate_closed_ms");
							
							default:
						}
						break;
					
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			
			case 1:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							
							case 1:
								return -1958;
							
							default:
						}
						break;
					
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			
			case 4:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							
							case 1:
								return joaat("ex_prop_crate_closed_mw");
							
							default:
						}
						break;
					
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			}
	}
	switch (iVar1)
	{
		case 0:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_med_sc");
						
						case 1:
							return joaat("ex_prop_crate_biohazard_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_med_bc");
						
						case 1:
							return joaat("ex_prop_crate_biohazard_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_tob_sc");
				
				case 1:
					return joaat("ex_prop_crate_tob_bc");
				
				default:
			}
			break;
		
		case 2:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_art_sc");
						
						case 1:
							return joaat("ex_prop_crate_art_02_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_art_bc");
						
						case 1:
							return joaat("ex_prop_crate_art_02_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_elec_sc");
				
				case 1:
					return joaat("ex_prop_crate_elec_bc");
				
				default:
			}
			break;
		
		case 4:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_ammo_sc");
						
						case 1:
							return joaat("ex_prop_crate_expl_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_ammo_bc");
						
						case 1:
							return joaat("ex_prop_crate_expl_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 5:
			iVar0 = unk_0x895FB9FE885E36ED(0, 3);
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_narc_sc");
						
						case 1:
							return joaat("ex_prop_crate_pharma_sc");
						
						case 2:
							return joaat("ex_prop_crate_highend_pharma_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_narc_bc");
						
						case 1:
							return joaat("ex_prop_crate_pharma_bc");
						
						case 2:
							return joaat("ex_prop_crate_highend_pharma_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 6:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_gems_sc");
				
				case 1:
					return joaat("ex_prop_crate_gems_bc");
				
				default:
			}
			break;
		
		case 7:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_wlife_sc");
						
						case 1:
							return joaat("ex_prop_crate_furjacket_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_wlife_bc");
						
						case 1:
							return joaat("ex_prop_crate_furjacket_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 8:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_money_sc");
						
						case 1:
							return joaat("ex_prop_crate_clothing_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_money_bc");
						
						case 1:
							return joaat("ex_prop_crate_clothing_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 9:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_jewels_sc");
						
						case 1:
							return joaat("ex_prop_crate_jewels_racks_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_jewels_bc");
						
						case 1:
							return joaat("ex_prop_crate_jewels_racks_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 10:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_bull_sc_02");
				
				case 1:
					return joaat("ex_prop_crate_bull_bc_02");
				
				default:
			}
			break;
	}
	return 0;
}

int func_466(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return unk_0x895FB9FE885E36ED(0, 2);
		
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			else
			{
				return unk_0x895FB9FE885E36ED(0, 2);
			}
			break;
	}
	return -1;
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ex_prop_crate_oegg"):
		case joaat("ex_prop_crate_minig"):
		case joaat("ex_prop_crate_xldiam"):
		case joaat("ex_prop_crate_shide"):
		case joaat("ex_prop_crate_freel"):
		case joaat("ex_prop_crate_watch"):
			return 1;
		
		default:
	}
	return 0;
}

int func_468(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return joaat("ex_prop_crate_closed_sc");
		
		case 2:
			return joaat("ex_prop_crate_med_sc");
		
		case 3:
			return joaat("ex_prop_crate_tob_sc");
		
		case 4:
			return joaat("ex_prop_crate_art_sc");
		
		case 5:
			return joaat("ex_prop_crate_elec_sc");
		
		case 6:
			return joaat("ex_prop_crate_ammo_sc");
		
		case 7:
			return joaat("ex_prop_crate_narc_sc");
		
		case 8:
			return joaat("ex_prop_crate_gems_sc");
		
		case 9:
			return joaat("ex_prop_crate_wlife_sc");
		
		case 10:
			return joaat("ex_prop_crate_jewels_sc");
		
		case 11:
			return joaat("ex_prop_crate_bull_sc_02");
		
		case 12:
			return joaat("ex_prop_crate_closed_bc");
		
		case 13:
			return joaat("ex_prop_crate_med_bc");
		
		case 14:
			return joaat("ex_prop_crate_tob_bc");
		
		case 15:
			return joaat("ex_prop_crate_art_bc");
		
		case 16:
			return joaat("ex_prop_crate_elec_bc");
		
		case 17:
			return joaat("ex_prop_crate_ammo_bc");
		
		case 18:
			return joaat("ex_prop_crate_narc_bc");
		
		case 19:
			return joaat("ex_prop_crate_gems_bc");
		
		case 20:
			return joaat("ex_prop_crate_wlife_bc");
		
		case 21:
			return joaat("ex_prop_crate_jewels_bc");
		
		case 22:
			return joaat("ex_prop_crate_bull_bc_02");
		
		case 23:
			return joaat("ex_prop_crate_oegg");
		
		case 24:
			return joaat("ex_prop_crate_minig");
		
		case 25:
			return joaat("ex_prop_crate_xldiam");
		
		case 26:
			return joaat("ex_prop_crate_shide");
		
		case 27:
			return joaat("ex_prop_crate_freel");
		
		case 28:
			return joaat("ex_prop_crate_watch");
		
		case 29:
			return joaat("ex_prop_crate_expl_sc");
		
		case 30:
			return joaat("ex_prop_crate_expl_bc");
		
		case 31:
			return joaat("ex_prop_crate_jewels_racks_sc");
		
		case 32:
			return joaat("ex_prop_crate_jewels_racks_bc");
		
		case 33:
			return joaat("ex_prop_crate_furjacket_sc");
		
		case 34:
			return joaat("ex_prop_crate_furjacket_bc");
		
		case 35:
			return joaat("ex_prop_crate_pharma_sc");
		
		case 36:
			return joaat("ex_prop_crate_pharma_bc");
		
		case 37:
			return joaat("ex_prop_crate_highend_pharma_sc");
		
		case 38:
			return joaat("ex_prop_crate_highend_pharma_bc");
		
		case 39:
			return joaat("ex_prop_crate_biohazard_sc");
		
		case 40:
			return joaat("ex_prop_crate_biohazard_bc");
		
		case 41:
			return joaat("ex_prop_crate_clothing_sc");
		
		case 42:
			return joaat("ex_prop_crate_clothing_bc");
		
		case 43:
			return joaat("ex_prop_crate_money_sc");
		
		case 44:
			return joaat("ex_prop_crate_money_bc");
		
		case 45:
			return joaat("ex_prop_crate_closed_ms");
		
		case 46:
			return -1958;
		
		case 47:
			return joaat("ex_prop_crate_closed_mw");
		
		case 48:
			return joaat("ex_prop_crate_art_02_bc");
		
		case 49:
			return joaat("ex_prop_crate_art_02_sc");
		
		default:
	}
	return 0;
}

int func_469(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	int iVar18;
	int iVar19;
	
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			iParam1 += 111;
			break;
		
		case 2:
			iParam1 += 222;
			break;
		
		case 3:
			iParam1 += 333;
			break;
		
		case 4:
			iParam1 += 444;
			break;
	}
	iVar0 = 0;
	iVar1 = func_36();
	if (iParam3 > -1)
	{
		iVar1 = iParam3;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar18 = unk_0xCAEDBF30E3EA14FC(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (0 != iVar18)
	{
		if (!unk_0xF50DB4BA5DAF8F6F(iVar18, &iVar0, iVar19, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

var func_470(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	char cVar2[64];
	int iVar18;
	int iVar19;
	
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			iParam1 += 111;
			break;
		
		case 2:
			iParam1 += 222;
			break;
		
		case 3:
			iParam1 += 333;
			break;
		
		case 4:
			iParam1 += 444;
			break;
	}
	iVar1 = func_36();
	if (iParam4 > -1)
	{
		iVar1 = iParam4;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar18 = unk_0xCAEDBF30E3EA14FC(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (iParam2 < 0)
	{
		iParam2 = 255;
	}
	if (0 != iVar18)
	{
		uVar0 = unk_0x46377A59ACA37C91(iVar18, iParam2, iVar19, 8, iParam3);
	}
	return uVar0;
}

int func_471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case joaat("ex_prop_crate_closed_sc"):
			return 1;
		
		case joaat("ex_prop_crate_med_sc"):
			return 2;
		
		case joaat("ex_prop_crate_tob_sc"):
			return 3;
		
		case joaat("ex_prop_crate_art_sc"):
			return 4;
		
		case joaat("ex_prop_crate_elec_sc"):
			return 5;
		
		case joaat("ex_prop_crate_ammo_sc"):
			return 6;
		
		case joaat("ex_prop_crate_narc_sc"):
			return 7;
		
		case joaat("ex_prop_crate_gems_sc"):
			return 8;
		
		case joaat("ex_prop_crate_wlife_sc"):
			return 9;
		
		case joaat("ex_prop_crate_jewels_sc"):
			return 10;
		
		case joaat("ex_prop_crate_bull_sc_02"):
			return 11;
		
		case joaat("ex_prop_crate_closed_bc"):
			return 12;
		
		case joaat("ex_prop_crate_med_bc"):
			return 13;
		
		case joaat("ex_prop_crate_tob_bc"):
			return 14;
		
		case joaat("ex_prop_crate_art_bc"):
			return 15;
		
		case joaat("ex_prop_crate_elec_bc"):
			return 16;
		
		case joaat("ex_prop_crate_ammo_bc"):
			return 17;
		
		case joaat("ex_prop_crate_narc_bc"):
			return 18;
		
		case joaat("ex_prop_crate_gems_bc"):
			return 19;
		
		case joaat("ex_prop_crate_wlife_bc"):
			return 20;
		
		case joaat("ex_prop_crate_jewels_bc"):
			return 21;
		
		case joaat("ex_prop_crate_bull_bc_02"):
			return 22;
		
		case joaat("ex_prop_crate_oegg"):
			return 23;
		
		case joaat("ex_prop_crate_minig"):
			return 24;
		
		case joaat("ex_prop_crate_xldiam"):
			return 25;
		
		case joaat("ex_prop_crate_shide"):
			return 26;
		
		case joaat("ex_prop_crate_freel"):
			return 27;
		
		case joaat("ex_prop_crate_watch"):
			return 28;
		
		case joaat("ex_prop_crate_expl_sc"):
			return 29;
		
		case joaat("ex_prop_crate_expl_bc"):
			return 30;
		
		case joaat("ex_prop_crate_jewels_racks_sc"):
			return 31;
		
		case joaat("ex_prop_crate_jewels_racks_bc"):
			return 32;
		
		case joaat("ex_prop_crate_furjacket_sc"):
			return 33;
		
		case joaat("ex_prop_crate_furjacket_bc"):
			return 34;
		
		case joaat("ex_prop_crate_pharma_sc"):
			return 35;
		
		case joaat("ex_prop_crate_pharma_bc"):
			return 36;
		
		case joaat("ex_prop_crate_highend_pharma_sc"):
			return 37;
		
		case joaat("ex_prop_crate_highend_pharma_bc"):
			return 38;
		
		case joaat("ex_prop_crate_biohazard_sc"):
			return 39;
		
		case joaat("ex_prop_crate_biohazard_bc"):
			return 40;
		
		case joaat("ex_prop_crate_clothing_sc"):
			return 41;
		
		case joaat("ex_prop_crate_clothing_bc"):
			return 42;
		
		case joaat("ex_prop_crate_money_sc"):
			return 43;
		
		case joaat("ex_prop_crate_money_bc"):
			return 44;
		
		case joaat("ex_prop_crate_closed_ms"):
			return 45;
		
		case joaat("ex_prop_crate_closed_rw"):
			return 46;
		
		case joaat("ex_prop_crate_closed_mw"):
			return 47;
		
		case joaat("ex_prop_crate_art_02_bc"):
			return 48;
		
		case joaat("ex_prop_crate_art_02_sc"):
			return 49;
		
		default:
	}
	return 0;
}

int func_472(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 2:
			return joaat("ex_prop_crate_oegg");
		
		case 4:
			return joaat("ex_prop_crate_minig");
		
		case 6:
			return joaat("ex_prop_crate_xldiam");
		
		case 7:
			return joaat("ex_prop_crate_shide");
		
		case 8:
			return joaat("ex_prop_crate_freel");
		
		case 9:
			return joaat("ex_prop_crate_watch");
		
		default:
	}
	return 0;
}

int func_473(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		
		case 2:
			if ((((((iParam1 < 7 || (iParam1 > 20 && iParam1 < 28)) || (iParam1 > 41 && iParam1 < 49)) || (iParam1 > 62 && iParam1 < 70)) || (iParam1 > 83 && iParam1 < 87)) || (iParam1 > 92 && iParam1 < 96)) || (iParam1 > 101 && iParam1 < 105))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_474(int iParam0)
{
	if (func_42(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			}
		
		default:
	}
	return 3;
}

int func_475(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_474(iParam0);
		if (iVar0 == 0)
		{
			return 16;
		}
		else if (iVar0 == 1)
		{
			return 42;
		}
		else
		{
			return 111;
		}
	}
	return 0;
}

int func_476()
{
	if (unk_0x5018862FF5D9F844())
	{
		return 1;
	}
	return 0;
}

int func_477(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_478(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar0 /*3*/])
			{
				return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

float func_479()
{
	if (!func_383())
	{
		return (unk_0xBBDA792448DB5A89(Global_262145.f_14684) * 0.01f);
	}
	return (unk_0xBBDA792448DB5A89(Global_262145.f_14685) * 0.01f);
}

int func_480()
{
	int iVar0;
	
	if (!func_34(unk_0x0FFED3E94261A832(), 0))
	{
		if (!func_481(1))
		{
			if (unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 12))
			{
				unk_0x507FE690B1271947(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (func_374())
		{
			if (unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 12))
			{
				unk_0x507FE690B1271947(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 12))
		{
			unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 12);
		}
	}
	else
	{
		iVar0 = func_382();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0xAA4F14DA15DB0B51(Local_397[iVar0 /*11*/].f_1, 12))
		{
			return 0;
		}
	}
	return 1;
}

int func_481(bool bParam0)
{
	if (func_220(unk_0x0FFED3E94261A832(), 21))
	{
		return 0;
	}
	if (unk_0x1CF28DE85743D98B())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x45A42C7863C1A2B9())
		{
			return 0;
		}
	}
	if (func_504(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_503())
	{
		return 0;
	}
	if (func_361())
	{
		return 0;
	}
	if (func_502())
	{
		return 0;
	}
	if (func_355())
	{
		return 0;
	}
	if (unk_0x1B154DE2D4606530())
	{
		return 0;
	}
	if (func_98(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!func_357())
	{
		return 0;
	}
	if (func_220(unk_0x0FFED3E94261A832(), 0) || func_220(unk_0x0FFED3E94261A832(), 3))
	{
		return 0;
	}
	if ((func_220(unk_0x0FFED3E94261A832(), 12) || func_220(unk_0x0FFED3E94261A832(), 14)) || func_220(unk_0x0FFED3E94261A832(), 13))
	{
		return 0;
	}
	if (func_501(unk_0x0FFED3E94261A832(), 0, 0, 0, 0, 0))
	{
		if (!func_487())
		{
			return 0;
		}
	}
	if (func_486())
	{
		return 0;
	}
	if (Global_1761100)
	{
		return 0;
	}
	if (func_485(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (func_484())
	{
		return 0;
	}
	if (func_483(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_13, 4))
	{
		return 0;
	}
	if (func_482(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	return 1;
}

int func_482(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_270.f_4 != 0 || Global_2422215[iParam0 /*387*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

int func_483(int iParam0)
{
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 14))
	{
		return 1;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_484()
{
	if (Global_2588311.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_485(int iParam0)
{
	if (!func_1072(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_35;
}

bool func_486()
{
	return Global_91829.f_310 > 0;
}

int func_487()
{
	int iVar0;
	
	iVar0 = func_201(unk_0x0FFED3E94261A832());
	if (((func_500(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_15) || func_499(unk_0x0FFED3E94261A832())) || func_498(unk_0x0FFED3E94261A832())) || func_493(unk_0x0FFED3E94261A832()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_492(unk_0x0FFED3E94261A832()))
	{
		if (func_491(iVar0) || func_490(iVar0))
		{
			return 1;
		}
	}
	if (func_411(unk_0x0FFED3E94261A832()))
	{
		if (func_490(iVar0))
		{
			return 1;
		}
	}
	if (func_489(unk_0x0FFED3E94261A832()))
	{
		if (func_488(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_488(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_489(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_412(Global_2422215[iParam0 /*387*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_490(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_491(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_492(int iParam0)
{
	if (func_137(Global_1592456[iParam0 /*635*/].f_259.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_493(int iParam0)
{
	if (func_494(Global_1592456[iParam0 /*635*/].f_259.f_15, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_494(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_495(unk_0x0FFED3E94261A832(), 0);
	}
	if (bParam1)
	{
		if (func_495(unk_0x0FFED3E94261A832(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_495(int iParam0, bool bParam1)
{
	if (Global_1592303 != func_55())
	{
		if (!func_497(Global_1592303))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x0FFED3E94261A832() != Global_1592303)
			{
				if (unk_0xAA4F14DA15DB0B51(Global_2422215[Global_1592303 /*387*/].f_204, 24) || func_496(Global_1592303))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 24);
}

int func_496(int iParam0)
{
	if (iParam0 != func_55())
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_204, 9);
	}
	return 0;
}

int func_497(int iParam0)
{
	if (iParam0 != func_55())
	{
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 2);
	}
	return 0;
}

int func_498(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_412(Global_2422215[iParam0 /*387*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_499(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
			{
				return func_412(Global_2422215[iParam0 /*387*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_500(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_501(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (Global_1592456[iParam0 /*635*/].f_259.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_499(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_411(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_498(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_489(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_502()
{
	return Global_1312852;
}

bool func_503()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 0);
}

int func_504(int iParam0)
{
	if (func_97(iParam0, 1))
	{
		if (Global_1592456[iParam0 /*635*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_505(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_534(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_506(&Var0);
}

int func_506(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2434604.f_2789)
		{
			return 0;
		}
	}
	func_516(uParam0, uParam0->f_16);
	func_515(uParam0);
	if (func_514(uParam0->f_1))
	{
		func_507();
		if (Global_2434604.f_2483[0 /*76*/].f_2 == 0)
		{
			Global_2434604.f_2483[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2434604.f_2483[0 /*76*/].f_1 == 13 || Global_2434604.f_2483[0 /*76*/].f_1 == 53) || Global_2434604.f_2483[0 /*76*/].f_1 == 54) || Global_2434604.f_2483[0 /*76*/].f_1 == 58)
		{
			Global_2434604.f_2483[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2434604.f_2483[iVar0 + 1 /*76*/] = { Global_2434604.f_2483[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2434604.f_2483[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2434604.f_2483[iVar0 /*76*/].f_2 == 0)
		{
			Global_2434604.f_2483[iVar0 /*76*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_507();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 1);
				Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_315(Global_2434604.f_2483[iVar0 /*76*/].f_1))
				{
					Global_2434604.f_2483[iVar0 /*76*/].f_2 = 5;
					unk_0xF6082E2ADA1C795B(&(Global_2434604.f_2483[iVar0 /*76*/].f_67), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_507()
{
	bool bVar0;
	
	if (Global_2434604.f_2790)
	{
		return;
	}
	if (!Global_70068)
	{
		Global_70068 = 1;
		bVar0 = true;
	}
	func_508();
	if (bVar0)
	{
		Global_70068 = 0;
	}
}

void func_508()
{
	Global_2434604.f_2791 = 0;
	Global_2434604.f_2791.f_578 = 0;
	func_512(&(Global_2434604.f_2791.f_1));
	Global_2434604.f_2791.f_1.f_1 = 0;
	func_509(&(Global_2434604.f_2791.f_1));
}

void func_509(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x73F5E7B6BB964839(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x5018862FF5D9F844())
		{
			unk_0xD1FCC52F87A98873(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD426F7366505EADF(0);
			unk_0x8123397DC676E794();
		}
		unk_0x73F5E7B6BB964839(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x6F0F1C5EEC77F84A(0);
		uParam0->f_564 = 0;
	}
	if (!Global_70068)
	{
		if (!unk_0x859EE44BE17CBC0F(unk_0x8A41C463063AFC8E()))
		{
			if (!Global_70069)
			{
				if (unk_0xF4EE9D6C8E60AE22() && !func_511(0))
				{
					unk_0x9B0467159FAB9F56(800);
				}
			}
		}
	}
	func_510(0);
}

void func_510(int iParam0)
{
	Global_70060 = iParam0;
	Global_70061 = iParam0;
}

bool func_511(bool bParam0)
{
	if (!bParam0 && unk_0x09952BA662A7629B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xAA4F14DA15DB0B51(Global_70048, 0);
}

void func_512(var uParam0)
{
	func_513(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_513(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_514(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_515(var uParam0)
{
	if (func_317(uParam0->f_1))
	{
		uParam0->f_70 = func_274();
	}
}

void func_516(var uParam0, int iParam1)
{
	if (func_317(uParam0->f_1))
	{
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_55())
	{
		return;
	}
	if (func_315(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_517(iParam1, -2, 0, 0);
		}
	}
}

int func_517(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_100(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1638223.f_89044[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_100(unk_0x0FFED3E94261A832()) || (func_533() && func_532())) && !unk_0xAA4F14DA15DB0B51(Global_2497344.f_4507, 31))
	{
		uVar1 = func_531();
		if (unk_0x2137828D03306CAF(uVar1))
		{
			if (unk_0xDB61DD81432BD145(iVar1))
			{
				if (unk_0xB0BB7458627D389F(iVar1) != -1)
				{
					if (func_1072(unk_0xB0BB7458627D389F(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
						{
							if (Global_1638223.f_89044[iParam1] != -1)
							{
								return func_529(iParam1, iParam0, 0);
							}
							else
							{
								return func_524(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_524(iParam0, unk_0xB0BB7458627D389F(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
			{
				if (Global_1638223.f_89044[iParam1] != -1)
				{
					return func_529(iParam1, iParam0, 0);
				}
				else
				{
					return func_518(0, -1, 0);
				}
			}
			else
			{
				return func_518(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1B154DE2D4606530()) && iParam1 < 4)
	{
		if (Global_1638223.f_89044[iParam1] != -1)
		{
			return func_529(iParam1, iParam0, 0);
		}
		else
		{
			return func_524(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
		}
	}
	return func_524(iParam0, unk_0x0FFED3E94261A832(), iParam1, bParam2, bParam3);
}

int func_518(bool bParam0, int iParam1, bool bParam2)
{
	return func_519(unk_0x0FFED3E94261A832(), bParam0, iParam1, bParam2);
}

int func_519(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x885F483F34E47503(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x220AE8028FACE96A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_96(iVar0, iParam2, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_523(1);
				}
				else
				{
					return func_523(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 20))
			{
				return func_520(iVar0, iParam2, 1);
			}
			else
			{
				return func_520(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_523(1);
	}
	return func_523(0);
}

int func_520(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_522(iParam0, iParam1);
	if (func_521(Global_1638223.f_93532))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_521(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7854[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_522(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_96(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_523(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_524(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x220AE8028FACE96A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1592456[iVar2 /*635*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_527())
			{
				iVar3 = func_273(iParam0);
				if (!iVar3 == -1)
				{
					return func_271(iVar3);
				}
			}
			if ((func_526(iParam1, iParam0, iVar0, 0) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)) || ((func_96(unk_0x220AE8028FACE96A(iParam1), unk_0x220AE8028FACE96A(iParam0), 0) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 23)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 18)))
			{
				return func_523(1);
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 26))
			{
				return func_525(1);
			}
			else
			{
				return func_519(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574295 || Global_1574286) || Global_1592456[iParam0 /*635*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574295 == 1 && Global_1574305 == 0))
			{
				return func_523(1);
			}
			else
			{
				return func_519(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574290 && Global_1573830.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_273(iParam0);
	if (!iVar4 == -1)
	{
		return func_271(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_525(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_526(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && unk_0x220AE8028FACE96A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == unk_0x220AE8028FACE96A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x220AE8028FACE96A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x220AE8028FACE96A(iParam0) == iParam2;
	}
	return unk_0x220AE8028FACE96A(iParam0) == iParam2;
}

int func_527()
{
	if (func_141() || func_528())
	{
		return 1;
	}
	return 0;
}

var func_528()
{
	return Global_2445217.f_13;
}

int func_529(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_527())
	{
		iVar1 = func_273(iParam1);
		if (!iVar1 == -1)
		{
			return func_271(iVar1);
		}
	}
	if (Global_1638223.f_89044[iParam0] != -1 && Global_1638223.f_89044[iParam0] <= 4)
	{
		if (Global_1638223.f_89044[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1638223.f_89044[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1638223.f_89044[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1638223.f_89044[iParam0] == 4)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1638223.f_89044[iParam0];
		}
	}
	else
	{
		iVar0 = func_519(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_21, 13))
	{
		iVar0 = func_530(iParam0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_530(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1638223.f_112841;
			break;
		
		case 1:
			iVar0 = Global_1638223.f_112842;
			break;
		
		case 2:
			iVar0 = Global_1638223.f_112843;
			break;
		
		case 3:
			iVar0 = Global_1638223.f_112844;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_531()
{
	return Global_2359301.f_2;
}

bool func_532()
{
	return unk_0xAA4F14DA15DB0B51(Global_2359301, 4);
}

bool func_533()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 14);
}

void func_534(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_55();
	uParam1->f_17 = func_55();
	uParam1->f_18 = func_55();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_69 = 1;
	uParam1->f_72 = 1;
	uParam1->f_73 = 1;
	uParam1->f_71 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_535(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0);
		}
		else
		{
			return unk_0x2AA4F22517A69BB6(unk_0xFD0C6B49DA615791(), *uParam0);
		}
	}
	return unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0);
}

void func_536(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	func_676(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_16829);
		}
		else
		{
			iVar1 = (iVar1 + func_675(iParam0, uParam2->f_13));
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_674(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_16828);
		}
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_672(iParam0))
	{
		if (bParam1)
		{
			if (func_671(unk_0x0FFED3E94261A832()) > 0)
			{
				func_670();
			}
			else
			{
				func_669();
			}
		}
		else
		{
			func_668();
		}
	}
	func_655(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_652(iParam0, uParam2, &iVar0, &uVar5);
	func_614(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_332();
	if (iVar6 != func_55() && iParam0 != 148)
	{
		if (func_269(unk_0x0FFED3E94261A832(), 0))
		{
			if (!func_305(unk_0x0FFED3E94261A832(), iVar6, 1))
			{
				func_599(&iVar0, 1);
			}
		}
	}
	func_596(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1773254.f_10 = iVar1;
		func_595();
		func_557(0, unk_0x2A5EB8B0FE590B91(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1773254.f_9 = iVar0;
		iVar11 = func_556();
		if (iVar11 != func_55())
		{
			func_555(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_554(1);
		if (iParam0 == 168)
		{
			if (!func_476())
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_553())
			{
				if (!func_476())
				{
					unk_0x5FE93EFAFB01437D(iVar0, uVar5);
				}
			}
			else if (func_476())
			{
				func_549(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2595364[iVar13 /*76*/].f_8.f_54 = uVar9;
				Global_2595364[iVar13 /*76*/].f_8.f_55 = uVar10;
				Global_2595364[iVar13 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_548())
			{
				if (!func_476())
				{
					unk_0x5FE93EFAFB01437D(iVar0, uVar5);
				}
			}
			else if (func_476())
			{
				func_549(-856006867, iVar0, &iVar14, 0, 1, 0);
				Global_2595364[iVar14 /*76*/].f_8.f_54 = uVar9;
				Global_2595364[iVar14 /*76*/].f_8.f_55 = uVar10;
				Global_2595364[iVar14 /*76*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x5FE93EFAFB01437D(iVar0, uVar5);
			}
		}
		else if (func_476())
		{
			func_549(-856006867, iVar0, &iVar15, 0, 1, 0);
			Global_2595364[iVar15 /*76*/].f_8.f_54 = uVar9;
			Global_2595364[iVar15 /*76*/].f_8.f_55 = uVar10;
			Global_2595364[iVar15 /*76*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0xD2924B7B97D1AE97(uVar9, uVar10, iVar0, bVar12);
		}
		func_547(iParam0, iVar0);
		if (func_546(iParam0))
		{
			if (func_545(iParam0) > -1)
			{
				func_544(func_545(iParam0), iVar0);
			}
		}
		Global_2456893 = iVar0;
		func_543(&Global_2455167, 0, 0);
	}
	if (func_223(unk_0x0FFED3E94261A832()) || func_275(unk_0x0FFED3E94261A832()))
	{
		func_537(iParam0);
	}
	if (func_401(iParam0))
	{
		Global_1773272.f_13 = iVar0;
		Global_1773272.f_14 = iVar1;
	}
	if (func_405(iParam0))
	{
		Global_1773325.f_13 = iVar0;
		Global_1773325.f_14 = iVar1;
	}
	if (func_488(iParam0))
	{
		Global_1773387.f_12 = iVar0;
		Global_1773387.f_13 = iVar1;
	}
}

void func_537(int iParam0)
{
	if (func_542(unk_0x0FFED3E94261A832()) && func_553())
	{
		if (func_491(iParam0))
		{
			func_540(6303, -1);
		}
		else if (func_539(iParam0))
		{
			func_540(6305, -1);
		}
		else if (func_303(iParam0, 1))
		{
			func_540(6306, -1);
		}
		else if (func_538(iParam0))
		{
			func_540(6307, -1);
		}
	}
}

int func_538(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_539(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_540(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_458(iParam0, func_379(iParam1), 0);
	iVar0++;
	if (!func_541(iParam0))
	{
		func_457(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_460(iParam0, iVar0, iParam1, 1);
	}
}

int func_541(int iParam0)
{
	if (Global_1361881)
	{
		switch (iParam0)
		{
			case 783:
			case 784:
			case 785:
			case 786:
			case 773:
			case 774:
			case 775:
			case 776:
			case 763:
			case 764:
			case 765:
			case 766:
			case 753:
			case 754:
			case 755:
			case 756:
			case 1299:
			case 635:
			case 1274:
			case 760:
			case 761:
			case 762:
			case 1232:
			case 1871:
			case 2262:
			case 2914:
			case 3043:
			case 6173:
			case 3038:
			case 3039:
			case 3040:
			case 3041:
			case 3042:
			case 3217:
			case 3219:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3212:
			case 3206:
			case 3648:
			case 3649:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3674:
			case 3215:
			case 3214:
			case 3995:
			case 3994:
			case 3998:
			case 3997:
			case 4001:
			case 4000:
			case 4004:
			case 4003:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_542(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_97, 14);
}

void func_543(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x591AF4C50B46E014() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x11ABC381A58DD5AB();
		}
		else
		{
			*uParam0 = unk_0xFD0C6B49DA615791();
		}
	}
	else
	{
		*uParam0 = unk_0x3732B96D7A1859B4();
	}
	uParam0->f_1 = 1;
}

void func_544(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2497344.f_271 = iParam0;
		if (iParam1 > Global_262145.f_5500)
		{
			iParam1 = Global_262145.f_5500;
		}
		Global_2497344.f_272 = iParam1;
		Global_2497344.f_273 = 0;
	}
}

int func_545(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_546(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_547(int iParam0, int iParam1)
{
	if (func_542(unk_0x0FFED3E94261A832()) && func_553())
	{
		if (func_491(iParam0) && iParam1 > 0)
		{
			func_457(6304, (func_458(6304, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

bool func_548()
{
	return func_222(unk_0x0FFED3E94261A832());
}

void func_549(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_476())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
			if (iParam1 > 0)
			{
				func_550(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
			func_550(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_550(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_476())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x34C4AEAA38B25021(func_36()) || unk_0x3227E797058C3C9A())
		{
			Global_2595874 = 1;
			return 0;
		}
		if (Global_2455861)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2595875 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2595364[iVar1 /*76*/].f_2 == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk_0xA4924D1E6921DA1D(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xB7E932E3159B0B10(iVar3))
		{
			*uParam0 = func_443(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2595364[*uParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2595864 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2595873 = 1;
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2595876 = iParam4;
			Global_2595878 = iParam3;
			Global_2595879 = 1;
			Global_2595877 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_552(1, iParam4);
			Global_2595873 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_551(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_551(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_432(iParam0);
	}
}

void func_552(int iParam0, var uParam1)
{
	Global_2457026 = uParam1;
	Global_2457025 = iParam0;
}

bool func_553()
{
	return func_331(unk_0x0FFED3E94261A832());
}

bool func_554(bool bParam0)
{
	return func_269(unk_0x0FFED3E94261A832(), bParam0);
}

void func_555(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1622795[iParam0 /*431*/].f_11.f_7[0];
	*uParam2 = Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_556()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11;
}

int func_557(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_558(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_558(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_568(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x2137828D03306CAF(iParam1))
		{
			if (unk_0xEE46DE31F43DCAF1(iParam1))
			{
				uVar1 = unk_0xC3A7AD90290CA72E(iParam1);
				func_564(unk_0x585F703DF3E83B6E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_559(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_559(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_562(iParam0, 1) };
	if (iParam0 == func_561(unk_0x2A5EB8B0FE590B91()))
	{
		func_560(1);
	}
	func_564(Var0, iParam1, 0, sParam2, iParam3);
}

void func_560(int iParam0)
{
	Global_2434604.f_1666 = iParam0;
}

int func_561(int iParam0)
{
	return iParam0;
}

Vector3 func_562(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xC30ED45C83B62BDA())
	{
		Var3 = { unk_0x7635C19924563670(2) };
	}
	if (iParam0 == func_563(unk_0x2A5EB8B0FE590B91()) && unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
	{
		Var0 = { unk_0x82D9CF397BA8C885(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xD1EE0E9FCD74A37B(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		fVar6 = unk_0x6DAB28241B34DEED(iParam0);
		if (unk_0xC1A55CEDE7782B6F(unk_0x8EEB10CA57B82F27()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0xEBB6A451E594E1A8(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_563(int iParam0)
{
	return iParam0;
}

void func_564(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2434604.f_1065[iVar0 /*30*/].f_6 == 0 || Global_2434604.f_1065[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2434604.f_1065[iVar1 /*30*/] = { Param0 };
			Global_2434604.f_1065[iVar1 /*30*/].f_6 = 1;
			Global_2434604.f_1065[iVar1 /*30*/].f_4 = func_567(Global_2434604.f_1065[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2434604.f_1065[iVar1 /*30*/].f_7 = unk_0x11ABC381A58DD5AB();
			Global_2434604.f_1065[iVar1 /*30*/].f_3 = iParam3;
			Global_2434604.f_1065[iVar1 /*30*/].f_8 = iParam4;
			Global_2434604.f_1065[iVar1 /*30*/].f_9 = func_566();
			Global_2434604.f_1065[iVar1 /*30*/].f_10 = func_565();
			StringCopy(&(Global_2434604.f_1065[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2434604.f_1065[iVar1 /*30*/].f_26 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), iParam6);
		}
	}
}

int func_565()
{
	if (Global_2434604.f_1666)
	{
		Global_2434604.f_1666 = 0;
		return 1;
	}
	Global_2434604.f_1666 = 0;
	return 0;
}

var func_566()
{
	var uVar0;
	
	uVar0 = Global_2434604.f_1668;
	Global_2434604.f_1668 = 1;
	return uVar0;
}

float func_567(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4A2E6F541CD8C36E(unk_0x616AF251C179EE09(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_568(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_569(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_569(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_594(unk_0x0FFED3E94261A832()) || func_593(unk_0x0FFED3E94261A832()))
	{
		if (Global_262145.f_8301 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8301;
		}
	}
	else if (Global_262145.f_5551 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_5551;
	}
	if (func_592(uParam2))
	{
	}
	if (func_591())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_589(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_588(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_586(0, &iVar1);
					break;
				
				case 3:
					func_586(1, &iVar1);
					break;
				
				case 1:
					func_584(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1779834)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_583(1160, iVar1, -1);
			if (iParam1 == 0)
			{
				func_579((func_582(unk_0x0FFED3E94261A832()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5742D3A1BB73A77E(iVar1, iParam8, iParam9);
				if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_2 != -1)
				{
					func_583(1161, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_574(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_570((func_572(unk_0x0FFED3E94261A832()) + iVar1));
			}
			else
			{
				func_570((func_572(unk_0x0FFED3E94261A832()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_570(int iParam0)
{
	if (func_591())
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_5 = iParam0;
		func_571(joaat("mpply_globalxp"), iParam0);
	}
}

void func_571(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, 1);
	}
}

int func_572(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1072(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return func_573(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_5;
			}
		}
		else
		{
			return func_573(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_573(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_574(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_57(unk_0x0FFED3E94261A832()) };
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(&Var0))
		{
			iVar13 = func_577(func_578(&Var0));
			if (iVar13 == 0)
			{
				func_576(&Global_1361887, iParam0);
				func_575(joaat("mpply_crew_local_xp_0"), Global_1361887);
			}
			else if (iVar13 == 1)
			{
				func_576(&Global_1361888, iParam0);
				func_575(joaat("mpply_crew_local_xp_1"), Global_1361888);
			}
			else if (iVar13 == 2)
			{
				func_576(&Global_1361889, iParam0);
				func_575(joaat("mpply_crew_local_xp_2"), Global_1361889);
			}
			else if (iVar13 == 3)
			{
				func_576(&Global_1361890, iParam0);
				func_575(joaat("mpply_crew_local_xp_3"), Global_1361890);
			}
			else if (iVar13 == 4)
			{
				func_576(&Global_1361891, iParam0);
				func_575(joaat("mpply_crew_local_xp_4"), Global_1361891);
			}
		}
	}
}

void func_575(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1361882 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1361885 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1361886 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1361887 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1361888 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1361889 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1361890 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1361891 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1361892 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1361893 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1361894 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1361895 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1361896 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1361897 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1361898 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_576(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_577(int iParam0)
{
	if (iParam0 == Global_1361882)
	{
		return 0;
	}
	else if (iParam0 == Global_1361883)
	{
		return 1;
	}
	else if (iParam0 == Global_1361884)
	{
		return 2;
	}
	else if (iParam0 == Global_1361885)
	{
		return 3;
	}
	else if (iParam0 == Global_1361886)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_578(var uParam0)
{
	if (unk_0x591BB87E287F24DC())
	{
		if (unk_0x3BE1A7ECC62DB032(uParam0))
		{
			return Global_2454636;
		}
	}
	return Global_2454636;
}

void func_579(int iParam0, int iParam1, int iParam2)
{
	if (func_591())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8271 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1362002[func_379(-1)])
				{
					unk_0x5742D3A1BB73A77E(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1362002[func_379(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8270 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5742D3A1BB73A77E(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_156(unk_0x0FFED3E94261A832()))
		{
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_1 = iParam0;
			Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_204.f_6 = func_580(iParam0, 1);
		}
		func_460(635, iParam0, -1, 1);
		func_457(636, func_580(iParam0, 1), -1, 1, 0);
		Global_1362002[func_379(-1)] = iParam0;
		func_449(7, 0);
	}
}

int func_580(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_581(iParam0, 0);
}

int func_581(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_282038[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_282038[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_582(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return Global_1362002[func_379(-1)];
			}
			else if (func_156(iParam0))
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1362002[func_379(-1)];
	}
	return 0;
}

void func_583(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_458(iParam0, func_379(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_541(iParam0))
	{
		func_457(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_460(iParam0, iVar0, iParam2, 1);
	}
}

void func_584(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832());
	iVar0 = 0;
	while (iVar0 < unk_0x244673FE98A43CA3())
	{
		iVar4 = unk_0xBA948A9E34D09E6E(iVar0);
		if (unk_0x9E8AB4FC19962A90(iVar4))
		{
			iVar5 = unk_0x2AFA21CE4322B48D(iVar4);
			if (unk_0x220AE8028FACE96A(iVar5) != -1)
			{
				if (unk_0x220AE8028FACE96A(iVar5) == iVar1 || func_96(unk_0x220AE8028FACE96A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0FFED3E94261A832())
					{
						if (func_58(unk_0x0FFED3E94261A832(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_585(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_585(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_585(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_586(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x244673FE98A43CA3())
		{
			iVar3 = iVar0;
			if (unk_0x9E8AB4FC19962A90(iVar3))
			{
				iVar4 = unk_0x2AFA21CE4322B48D(iVar3);
				if (func_1072(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0FFED3E94261A832())
					{
						iVar1++;
						if (func_58(unk_0x0FFED3E94261A832(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_1072(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0FFED3E94261A832())
				{
					if (func_587(unk_0x0FFED3E94261A832(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_58(unk_0x0FFED3E94261A832(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_585(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_585(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_587(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_51(iParam0), func_51(iParam1));
	return 0f;
}

int func_588(int iParam0)
{
	int iVar0;
	
	if (unk_0x3D5BFF1808E7849A() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_585(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_589(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xEF76CA199A0C9035(iParam0) > func_582(unk_0x0FFED3E94261A832()))
		{
			iParam0 = -func_582(unk_0x0FFED3E94261A832());
		}
	}
	if (func_590(8000, 0, 0) > 0)
	{
		if (func_590(8000, 0, 0) < (iParam0 + func_582(unk_0x0FFED3E94261A832())))
		{
			iParam0 = (func_590(8000, 0, 0) - func_582(unk_0x0FFED3E94261A832()));
		}
	}
	return iParam0;
}

int func_590(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_282038[iParam0];
}

int func_591()
{
	return 1;
}

int func_592(var uParam0)
{
	if (unk_0x47988E04F8E2F0AD(uParam0))
	{
		return 1;
	}
	else if (unk_0x35302CD5A5D37EED(uParam0, "") || unk_0x35302CD5A5D37EED(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_593(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

bool func_594(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

void func_595()
{
	Global_2456235 = 1;
}

void func_596(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_182(7))
	{
		return;
	}
	iVar0 = func_598(iParam0);
	iVar1 = func_597(iParam0);
	iVar2 = unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(Global_2497344.f_4828.f_80, unk_0x11ABC381A58DD5AB()));
	if (iParam0 == 225)
	{
		if (iVar2 > Global_262145.f_19497)
		{
			iVar2 = Global_262145.f_19497;
		}
	}
	else if (iParam0 == 226)
	{
		if (iVar2 > Global_262145.f_19477)
		{
			iVar2 = Global_262145.f_19477;
		}
	}
	else if (iParam0 == 227)
	{
		if (iVar2 > Global_262145.f_19489)
		{
			iVar2 = Global_262145.f_19489;
		}
	}
	else if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_17031)
		{
			iVar2 = Global_262145.f_17031;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_17032)
		{
			iVar2 = Global_262145.f_17032;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_17030)
		{
			iVar2 = Global_262145.f_17030;
		}
	}
	else if (func_491(iParam0))
	{
		if (iVar2 > Global_262145.f_17033)
		{
			iVar2 = Global_262145.f_17033;
		}
	}
	else if (func_303(iParam0, 0) || func_539(iParam0))
	{
		if (iVar2 > Global_262145.f_17034)
		{
			iVar2 = Global_262145.f_17034;
		}
	}
	else if (iVar2 > Global_262145.f_11047)
	{
		iVar2 = Global_262145.f_11047;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_597(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11138;
		
		case 152:
			return Global_262145.f_11173;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11161;
		
		case 157:
			return Global_262145.f_11128;
		
		case 159:
			return Global_262145.f_11111;
		
		case 164:
			return Global_262145.f_11151;
		
		case 160:
			return Global_262145.f_11201;
		
		case 162:
			return Global_262145.f_11221;
		
		case 163:
			return Global_262145.f_11186;
		
		case 154:
			return Global_262145.f_11256;
		
		case 155:
			return Global_262145.f_11246;
		
		case 153:
			return Global_262145.f_11210;
		
		case 170:
			return Global_262145.f_13547;
		
		case 171:
			return Global_262145.f_13606;
		
		case 172:
			return Global_262145.f_13624;
		
		case 173:
			return Global_262145.f_13565;
		
		case 166:
			return Global_262145.f_13580;
		
		case 167:
			return Global_262145.f_13671;
		
		case 169:
			return Global_262145.f_13643;
		
		case 168:
			return Global_262145.f_13636;
		
		case 179:
			return Global_262145.f_16913;
		
		case 180:
			return Global_262145.f_16692;
		
		case 182:
			return Global_262145.f_16692;
		
		case 183:
			return Global_262145.f_16692;
		
		case 185:
			return Global_262145.f_16692;
		
		case 186:
			return Global_262145.f_16692;
		
		case 189:
			return Global_262145.f_16913;
		
		case 190:
			return Global_262145.f_16568;
		
		case 191:
			return Global_262145.f_16659;
		
		case 192:
			return Global_262145.f_16453;
		
		case 193:
			return Global_262145.f_16913;
		
		case 194:
			return Global_262145.f_16913;
		
		case 195:
			return Global_262145.f_16692;
		
		case 197:
			return Global_262145.f_16692;
		
		case 198:
			return Global_262145.f_16692;
		
		case 199:
			return Global_262145.f_16913;
		
		case 200:
			return Global_262145.f_16913;
		
		case 201:
			return Global_262145.f_16913;
		
		case 205:
			return Global_262145.f_16913;
		
		case 207:
			return Global_262145.f_16692;
		
		case 208:
			return Global_262145.f_16692;
		
		case 209:
			return Global_262145.f_16692;
		
		case 210:
			return Global_262145.f_16913;
		
		case 211:
			return Global_262145.f_16913;
		
		case 214:
			return Global_262145.f_17709;
		
		case 215:
			return Global_262145.f_17711;
		
		case 216:
			return Global_262145.f_17713;
		
		case 217:
			return Global_262145.f_17715;
		
		case 218:
			return Global_262145.f_17717;
		
		case 219:
			return Global_262145.f_17719;
		
		case 220:
			return Global_262145.f_17721;
		
		case 221:
			return Global_262145.f_17723;
		
		case 225:
			if (func_554(0) || func_329(0))
			{
				return Global_262145.f_19499;
			}
			break;
		
		case 226:
			if (func_554(0) || func_329(0))
			{
				return Global_262145.f_19479;
			}
			break;
		
		case 227:
			if (func_554(0) || func_329(0))
			{
				return Global_262145.f_19491;
			}
			break;
	}
	return 0;
}

int func_598(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11137;
		
		case 152:
			return Global_262145.f_11172;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11160;
		
		case 157:
			return Global_262145.f_11127;
		
		case 159:
			return Global_262145.f_11110;
		
		case 164:
			return Global_262145.f_11150;
		
		case 160:
			return Global_262145.f_11200;
		
		case 162:
			return Global_262145.f_11220;
		
		case 163:
			return Global_262145.f_11185;
		
		case 154:
			return Global_262145.f_11255;
		
		case 155:
			return Global_262145.f_11245;
		
		case 153:
			return Global_262145.f_11209;
		
		case 170:
			return Global_262145.f_13546;
		
		case 171:
			return Global_262145.f_13605;
		
		case 172:
			return Global_262145.f_13623;
		
		case 173:
			return Global_262145.f_13564;
		
		case 166:
			return Global_262145.f_13579;
		
		case 179:
			return Global_262145.f_16912;
		
		case 180:
			return Global_262145.f_16691;
		
		case 182:
			return Global_262145.f_16691;
		
		case 183:
			return Global_262145.f_16691;
		
		case 185:
			return Global_262145.f_16691;
		
		case 186:
			return Global_262145.f_16691;
		
		case 189:
			return Global_262145.f_16912;
		
		case 193:
			return Global_262145.f_16912;
		
		case 194:
			return Global_262145.f_16912;
		
		case 195:
			return Global_262145.f_16691;
		
		case 197:
			return Global_262145.f_16691;
		
		case 198:
			return Global_262145.f_16691;
		
		case 199:
			return Global_262145.f_16912;
		
		case 200:
			return Global_262145.f_16912;
		
		case 201:
			return Global_262145.f_16912;
		
		case 205:
			return Global_262145.f_16912;
		
		case 207:
			return Global_262145.f_16691;
		
		case 208:
			return Global_262145.f_16691;
		
		case 209:
			return Global_262145.f_16691;
		
		case 210:
			return Global_262145.f_16912;
		
		case 211:
			return Global_262145.f_16912;
		
		case 190:
			if (!func_548())
			{
				return Global_262145.f_16567;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_548())
			{
				return Global_262145.f_16658;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_548())
			{
				return Global_262145.f_16452;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_17708;
		
		case 215:
			return Global_262145.f_17710;
		
		case 216:
			return Global_262145.f_17712;
		
		case 217:
			return Global_262145.f_17714;
		
		case 218:
			return Global_262145.f_17716;
		
		case 219:
			return Global_262145.f_17718;
		
		case 220:
			return Global_262145.f_17720;
		
		case 221:
			return Global_262145.f_17722;
		
		case 225:
			if (func_329(0))
			{
				return Global_262145.f_19498;
			}
			break;
		
		case 226:
			if (func_329(0))
			{
				return Global_262145.f_19478;
			}
			break;
		
		case 227:
			if (func_329(0))
			{
				return Global_262145.f_19490;
			}
			break;
	}
	return 0;
}

void func_599(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_548())
		{
			if (func_554(0))
			{
				if (!func_329(0))
				{
					if (unk_0x885F483F34E47503(func_556()))
					{
						if (func_613() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_613());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_611(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_604("GB_BCUT_TICK1", func_556(), iVar0, 0, 0, 1, 1);
						}
						func_424(20);
						func_600(func_556(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_600(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1072(iParam0, 0, 1))
	{
		Var0.f_0 = -987452780;
		Var0.f_1 = unk_0x0FFED3E94261A832();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_603(iParam0);
		func_602(&(Var0.f_6), &(Var0.f_7));
		unk_0xA40CC53DF8E50837(1, &Var0, 8, func_601(iParam0));
	}
}

int func_601(int iParam0)
{
	var uVar0;
	
	unk_0xF6082E2ADA1C795B(&uVar0, iParam0);
	return uVar0;
}

void func_602(var uParam0, var uParam1)
{
	*uParam0 = Global_1636589.f_9;
	*uParam1 = Global_1636589.f_10;
}

var func_603(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_377;
}

int func_604(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		if (unk_0x58478145CAF8429C(&Var1))
		{
		}
		unk_0xD05F099FEF4ED10A(sParam0);
		unk_0x95CE6D748899618C(func_517(iParam1, -2, 1, 0));
		unk_0xCF6846167A5EFE98(func_609(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x95CE6D748899618C(iParam3);
		}
		unk_0xEA97619D8B89D387(iParam2);
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
		func_605(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_605(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_608() || !unk_0x1B154DE2D4606530()) || !func_34(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	iVar0 = func_606(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1769933.f_5[iVar0 /*53*/] = iParam0;
		Global_1769933.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1769933.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1769933.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1769933.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1769933.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1769933.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1769933.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_606(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1769933 - 1))
	{
		if (iParam0 > Global_1769933.f_5[iVar0 /*53*/].f_1)
		{
			func_607(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1769933++;
	if (Global_1769933 > 5)
	{
		Global_1769933 = 5;
		return Global_1769933;
	}
	return (Global_1769933 - 1);
}

void func_607(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1769933.f_5[iVar0 /*53*/] = { Global_1769933.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_608()
{
	return unk_0xA438D14FADC1185B(-1762644250);
}

var func_609(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_610(&cVar0);
}

var func_610(char[4] cParam0)
{
	return cParam0;
}

void func_611(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_612(1);
	}
	else
	{
		iVar1 = func_612(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_612(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11042;
}

int func_613()
{
	return Global_262145.f_11041;
}

void func_614(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_329(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_548())
		{
			iVar15 = unk_0x0FFED3E94261A832();
		}
		else
		{
			iVar15 = func_556();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_651(iVar15);
			iVar0 = (func_650(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = unk_0xBBDA792448DB5A89(uParam1->f_10);
				fVar11 = unk_0xBBDA792448DB5A89(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = unk_0x11E019C8F43ACC8A(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_645(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_19481));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_19480));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x0FFED3E94261A832())
			{
				func_640(iVar16, iVar2);
				if (func_636(iVar16) >= Global_262145.f_19038 || iVar2 >= Global_262145.f_19038)
				{
					func_626(5);
				}
				iVar6 = func_625(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_19483);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_19482));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_424(108);
					}
					else
					{
						func_424(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x244673FE98A43CA3())
						{
							iVar19 = iVar18;
							if (unk_0x9E8AB4FC19962A90(iVar19))
							{
								iVar20 = unk_0x2AFA21CE4322B48D(iVar19);
								if (func_624(iVar20))
								{
									func_615(iVar20, 1, 3, 0);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2497344.f_4828.f_192 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_19484;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_19485;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1779842 = *iParam2;
					func_424(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_615(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = func_618(iParam0);
	if (bParam3)
	{
		func_617(iParam0, uVar0, iParam1, iParam2);
	}
	else
	{
		func_616(iParam0, uVar0, iParam1, iParam2);
	}
}

void func_616(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1933223176;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_603(iParam0);
	func_602(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_55())
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_601(iParam0));
		}
	}
}

void func_617(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1933223176;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = func_603(iParam0);
	func_602(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_55())
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_601(iParam0));
		}
	}
}

int func_618(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_623();
	iVar0 = func_621(iParam0, iVar0);
	iVar1 = Global_1622795[func_556() /*431*/].f_11.f_316;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_13507));
	if (iVar0 < func_620())
	{
		iVar0 = func_620();
	}
	if (iVar0 > func_619())
	{
		iVar0 = func_619();
	}
	return iVar0;
}

int func_619()
{
	return Global_262145.f_13508;
}

int func_620()
{
	return Global_262145.f_14683;
}

int func_621(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_671(iParam0) * func_622());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_622()
{
	return Global_262145.f_14682;
}

var func_623()
{
	return Global_262145.f_11033;
}

int func_624(int iParam0)
{
	if (unk_0x885F483F34E47503(iParam0))
	{
		if (iParam0 != unk_0x0FFED3E94261A832())
		{
			if (func_305(iParam0, unk_0x0FFED3E94261A832(), 0))
			{
				if (!func_205(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_625(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(iVar0)))
		{
			iVar2 = unk_0x7C214DA899F05536(iVar0);
			if (!func_34(iVar2, 0) && !func_305(iVar2, unk_0x0FFED3E94261A832(), 1))
			{
				iVar1++;
			}
			else if (func_34(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_626(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19026)
			{
				if (func_629(Global_262145.f_19027))
				{
					func_628("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19028)
			{
				if (func_629(Global_262145.f_19029))
				{
					func_628("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19030)
			{
				if (func_629(Global_262145.f_19031))
				{
					func_628("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19032)
			{
				if (func_629(Global_262145.f_19033))
				{
					func_628("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19034)
			{
				if (func_629(Global_262145.f_19035))
				{
					func_628("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19036)
			{
				if (func_629(Global_262145.f_19037))
				{
					func_627("CLOTHAWDSTRAP3", Global_262145.f_19038, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19039)
			{
				if (func_629(Global_262145.f_19040))
				{
					func_627("CLOTHAWDSTRAP5", Global_262145.f_19168, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19042)
			{
				if (func_629(Global_262145.f_19043))
				{
					func_628("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19044)
			{
				if (func_629(Global_262145.f_19045))
				{
					func_628("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19046)
			{
				if (func_629(Global_262145.f_19047))
				{
					func_628("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19048)
			{
				if (func_629(Global_262145.f_19049))
				{
					func_628("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19050)
			{
				if (func_629(Global_262145.f_19051))
				{
					func_628("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19052)
			{
				if (func_629(Global_262145.f_19053))
				{
					func_628("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19054)
			{
				if (func_629(Global_262145.f_19055))
				{
					func_628("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19056)
			{
				if (func_629(Global_262145.f_19057))
				{
					func_628("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_627(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	unk_0xEA97619D8B89D387(iParam1);
	iVar0 = unk_0xEF731ED745A201C5(0, 1);
	func_605(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_628(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xD05F099FEF4ED10A(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x95CE6D748899618C(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x95CE6D748899618C(iParam3);
	}
	unk_0xD5DA3EC5EEC78358(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xEF731ED745A201C5(0, 1);
	}
	else
	{
		Global_2484572 = { func_57(unk_0x0FFED3E94261A832()) };
		if (unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572))
		{
			iVar1 = 0;
			if (unk_0x35302CD5A5D37EED(&(Global_2484502.f_22), "Leader") && Global_2484502.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2484502.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0xCFCC273DCA662841(iVar2, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar1, 0, Global_2484502, unk_0x4325D353D7D27B34(unk_0x0FFED3E94261A832()), Global_1314009, Global_1314010, Global_1314011);
		}
		else
		{
			iVar0 = unk_0xEF731ED745A201C5(0, 1);
		}
	}
	func_605(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_629(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_633(15417, -1, -1))
			{
				func_632(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_633(15418, -1, -1))
			{
				func_632(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_633(15425, -1, -1))
			{
				func_632(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_633(15405, -1, -1))
			{
				func_632(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_633(15393, -1, -1))
			{
				func_632(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_633(15409, -1, -1))
			{
				func_632(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_633(15396, -1, -1))
			{
				func_632(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_633(15412, -1, -1))
			{
				func_632(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_378(209, -1))
			{
				func_630(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_633(15403, -1, -1))
			{
				func_632(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_378(209, -1))
			{
				func_630(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_633(15389, -1, -1))
			{
				func_632(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_378(209, -1))
			{
				func_630(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_633(15398, -1, -1))
			{
				func_632(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_633(15400, -1, -1))
			{
				func_632(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_378(209, -1))
			{
				func_630(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_633(15408, -1, -1))
			{
				func_632(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_378(209, -1))
			{
				func_630(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_633(15411, -1, -1))
			{
				func_632(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_633(15397, -1, -1))
			{
				func_632(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_633(15413, -1, -1))
			{
				func_632(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_633(15391, -1, -1))
			{
				func_632(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_633(15388, -1, -1))
			{
				func_632(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_378(209, -1))
			{
				func_630(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_633(15401, -1, -1))
			{
				func_632(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_633(15394, -1, -1))
			{
				func_632(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_378(209, -1))
			{
				func_630(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_633(15406, -1, -1))
			{
				func_632(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_633(15395, -1, -1))
			{
				func_632(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_378(209, -1))
			{
				func_630(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_633(15410, -1, -1))
			{
				func_632(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_633(15407, -1, -1))
			{
				func_632(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_378(209, -1))
			{
				func_630(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_378(209, -1))
			{
				func_630(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_633(15414, -1, -1))
			{
				func_632(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_633(15415, -1, -1))
			{
				func_632(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_633(15399, -1, -1))
			{
				func_632(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_633(15404, -1, -1))
			{
				func_632(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_378(209, -1))
			{
				func_630(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_633(15392, -1, -1))
			{
				func_632(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_633(15390, -1, -1))
			{
				func_632(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_633(15402, -1, -1))
			{
				func_632(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_633(15416, -1, -1))
			{
				func_632(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_378(209, -1))
			{
				func_630(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_633(15426, -1, -1))
			{
				func_632(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_633(15422, -1, -1))
			{
				func_632(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_633(15423, -1, -1))
			{
				func_632(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_633(15421, -1, -1))
			{
				func_632(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_633(15427, -1, -1))
			{
				func_632(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_633(15419, -1, -1))
			{
				func_632(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_633(15420, -1, -1))
			{
				func_632(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_630(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_631())
	{
		iVar0 = Global_2526994[iParam0 /*3*/][func_379(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0D7634B211BCB8B0(iVar0, iParam1, iParam3);
		}
	}
}

int func_631()
{
	return 1;
	return 0;
}

int func_632(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
		iVar0 = unk_0xE74B1B5DFEEF688A(uVar15, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_633(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar1 = func_635(iParam0, iParam1);
	uVar2 = func_634(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x03C9AA3ADC1DEAF0(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_634(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x16FA54149C24857C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x16FA54149C24857C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x16FA54149C24857C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x16FA54149C24857C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x16FA54149C24857C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x16FA54149C24857C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x16FA54149C24857C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x16FA54149C24857C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x16FA54149C24857C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x16FA54149C24857C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x16FA54149C24857C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x16FA54149C24857C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x16FA54149C24857C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x16FA54149C24857C((iParam0 - 15562)) * 64);
	}
	return iVar0;
}

int func_635(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xB99811D18C405A4D((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xD245E95F7E576239((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xE34F679C8DB3AF93((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	return iVar0;
}

int func_636(int iParam0)
{
	int iVar0;
	
	iVar0 = func_638(iParam0);
	return func_458(func_637(iVar0), -1, 0);
}

int func_637(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3926;
		
		case 1:
			return 3927;
		
		case 2:
			return 3928;
		
		case 3:
			return 3929;
		
		case 4:
			return 3930;
		
		case 5:
			return 5431;
		
		default:
	}
	return 3926;
}

int func_638(int iParam0)
{
	int iVar0;
	
	if (func_639(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_639(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_640(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_638(iParam0);
	iVar1 = func_637(iVar0);
	iVar2 = (func_458(iVar1, -1, 0) + iParam1);
	func_457(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_642(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iVar0 /*12*/] != 0)
			{
				iVar1 = func_637(iVar0);
				iVar3 = (iVar3 + func_458(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_641(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_454(9357, iVar5, -1, 1);
	}
}

int func_641(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_642(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_644(iParam0, iParam1);
	uVar2 = func_643(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xF50DB4BA5DAF8F6F(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_643(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x0EA9159F0F27C2BE((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x0EA9159F0F27C2BE((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x0EA9159F0F27C2BE((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x0EA9159F0F27C2BE((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x0EA9159F0F27C2BE((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x0EA9159F0F27C2BE((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x0EA9159F0F27C2BE((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x0EA9159F0F27C2BE((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x0EA9159F0F27C2BE((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x0EA9159F0F27C2BE((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x0EA9159F0F27C2BE((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x0EA9159F0F27C2BE((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x0EA9159F0F27C2BE((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x0EA9159F0F27C2BE((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x0EA9159F0F27C2BE((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x0EA9159F0F27C2BE((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_644(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xF8FDEC9DA57D850C((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x3B9C9D33081D2A1B((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xDBEA9CE94304A76B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

int func_645(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_649(iParam1);
	if (func_639(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_15512;
				if (func_646(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15517);
				}
				if (func_646(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15522);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_15511;
				if (func_646(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15516);
				}
				if (func_646(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15521);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_15510;
				if (func_646(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15515);
				}
				if (func_646(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15520);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_15508;
				if (func_646(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15513);
				}
				if (func_646(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15518);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_15509;
				if (func_646(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_15514);
				}
				if (func_646(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_15519);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_19506;
				if (func_646(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_19508);
				}
				if (func_646(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_19507);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_646(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_648(iParam0, iParam1))
	{
		iVar0 = func_647(iParam0, iParam1);
		return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_647(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_639(iParam1) && iParam0 != func_55())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_648(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_639(iParam1) && iParam0 != func_55())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_649(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

int func_650(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_639(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_651(int iParam0)
{
	if (iParam0 == func_55())
	{
		return 0;
	}
	return Global_1592456[iParam0 /*635*/].f_259.f_152[5 /*12*/];
}

void func_652(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_553())
			{
				Var0 = { func_654() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_645(unk_0x0FFED3E94261A832(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17142);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17141);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_625(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_17132);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_17131));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_424(86);
				}
				Global_2497344.f_4828.f_192 = *iParam2;
			}
			else if (func_329(0))
			{
				Var15 = { func_653(func_556()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_645(func_556(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17142));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17141));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_17181;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_17182;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_653(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_185;
}

struct<2> func_654()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_185;
}

void func_655(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_222(unk_0x0FFED3E94261A832()))
		{
			if (bParam1)
			{
				func_667();
			}
			func_666();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_222(unk_0x0FFED3E94261A832()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_661(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_174));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_660(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_625(&uVar2);
					iVar4 = Global_262145.f_14693;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13902));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_424(44);
					}
				}
				func_658(*iParam3);
				func_657();
				Global_2497344.f_4828.f_192 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x244673FE98A43CA3())
				{
					iVar8 = iVar7;
					if (unk_0x9E8AB4FC19962A90(iVar8))
					{
						iVar9 = unk_0x2AFA21CE4322B48D(iVar8);
						if (func_624(iVar9))
						{
							func_615(iVar9, 1, 0, 0);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_222(unk_0x0FFED3E94261A832()))
		{
			func_656();
		}
	}
}

void func_656()
{
	int iVar0;
	
	iVar0 = Global_2528811[func_36()];
	iVar0++;
	func_460(3652, iVar0, -1, 1);
}

void func_657()
{
	int iVar0;
	
	iVar0 = Global_2528817[func_36()];
	iVar0++;
	func_460(3651, iVar0, -1, 1);
}

void func_658(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2528820[func_36()];
	iVar0 = (iVar0 + iParam0);
	func_460(3653, iVar0, -1, 1);
	if (func_642(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_659(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_454(7666, iVar2, -1, 1);
	}
}

int func_659(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14826;
			break;
		
		case 2:
			return Global_262145.f_14827;
			break;
		
		case 3:
			return Global_262145.f_14828;
			break;
		
		case 4:
			return Global_262145.f_14829;
			break;
		
		case 5:
			return Global_262145.f_14830;
			break;
		
		case 6:
			return Global_262145.f_14831;
			break;
		
		case 7:
			return Global_262145.f_14832;
			break;
		
		case 8:
			return Global_262145.f_14833;
			break;
		
		case 9:
			return Global_262145.f_14834;
			break;
		
		case 10:
			return Global_262145.f_14835;
			break;
		
		case 11:
			return Global_262145.f_14836;
			break;
		
		case 12:
			return Global_262145.f_14837;
			break;
		
		case 13:
			return Global_262145.f_14838;
			break;
		
		case 14:
			return Global_262145.f_14839;
			break;
		
		case 15:
			return Global_262145.f_14840;
			break;
		
		case 16:
			return Global_262145.f_14841;
			break;
		
		case 17:
			return Global_262145.f_14842;
			break;
		
		case 18:
			return Global_262145.f_14843;
			break;
		
		case 19:
			return Global_262145.f_14844;
			break;
		
		case 20:
			return Global_262145.f_14845;
			break;
		
		case 21:
			return Global_262145.f_14846;
			break;
		
		case 22:
			return Global_262145.f_14847;
			break;
		
		case 23:
			return Global_262145.f_14848;
			break;
		
		case 24:
			return Global_262145.f_14849;
			break;
	}
	return 0;
}

var func_660(int iParam0)
{
	if (iParam0 >= Global_262145.f_13880)
	{
		return Global_262145.f_13901;
	}
	else if (iParam0 >= Global_262145.f_13879)
	{
		return Global_262145.f_13900;
	}
	else if (iParam0 >= Global_262145.f_13878)
	{
		return Global_262145.f_13899;
	}
	else if (iParam0 >= Global_262145.f_13877)
	{
		return Global_262145.f_13898;
	}
	else if (iParam0 >= Global_262145.f_13876)
	{
		return Global_262145.f_13897;
	}
	else if (iParam0 >= Global_262145.f_13875)
	{
		return Global_262145.f_13896;
	}
	else if (iParam0 >= Global_262145.f_13874)
	{
		return Global_262145.f_13895;
	}
	else if (iParam0 >= Global_262145.f_13873)
	{
		return Global_262145.f_13894;
	}
	else if (iParam0 >= Global_262145.f_13872)
	{
		return Global_262145.f_13893;
	}
	else if (iParam0 >= Global_262145.f_13871)
	{
		return Global_262145.f_13892;
	}
	else if (iParam0 >= Global_262145.f_13870)
	{
		return Global_262145.f_13891;
	}
	else if (iParam0 >= Global_262145.f_13869)
	{
		return Global_262145.f_13890;
	}
	else if (iParam0 >= Global_262145.f_13868)
	{
		return Global_262145.f_13889;
	}
	else if (iParam0 >= Global_262145.f_13867)
	{
		return Global_262145.f_13888;
	}
	else if (iParam0 >= Global_262145.f_13866)
	{
		return Global_262145.f_13887;
	}
	else if (iParam0 >= Global_262145.f_13865)
	{
		return Global_262145.f_13886;
	}
	else if (iParam0 >= Global_262145.f_13864)
	{
		return Global_262145.f_13885;
	}
	else if (iParam0 >= Global_262145.f_13863)
	{
		return Global_262145.f_13884;
	}
	else if (iParam0 >= Global_262145.f_13862)
	{
		return Global_262145.f_13883;
	}
	else if (iParam0 >= Global_262145.f_13861)
	{
		return Global_262145.f_13882;
	}
	return Global_262145.f_13881;
}

int func_661(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_665(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_664(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_663(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_662(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_662(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_663(unk_0x895FB9FE885E36ED(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_662(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_459(func_477(iParam0));
		return func_458(iVar0, -1, 0);
	}
	return 0;
}

int func_663(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14080;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14078;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14082;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14076;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14074;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14084;
	}
	return 0;
}

int func_664(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1774539[iVar0] == iParam1 && Global_1774546[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_665(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_80[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_666()
{
	int iVar0;
	
	iVar0 = Global_2528808[func_36()];
	iVar0++;
	Global_2528808[func_36()] = iVar0;
	func_460(3650, iVar0, -1, 1);
}

void func_667()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2528805[func_36()];
	iVar1 = Global_2528814[func_36()];
	iVar0++;
	iVar1++;
	Global_2528805[func_36()] = iVar0;
	Global_2528814[func_36()] = iVar1;
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_102 = iVar1;
	func_460(3648, iVar0, -1, 1);
	func_460(3649, iVar1, -1, 1);
}

void func_668()
{
	if (func_548())
	{
		Global_2445989.f_3066.f_134 = 0;
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
	}
}

void func_669()
{
	if (func_548())
	{
		if (Global_2445989.f_3066.f_134 < 10)
		{
			Global_2445989.f_3066.f_134++;
			Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
		}
	}
}

void func_670()
{
	if (func_548())
	{
		if (Global_2445989.f_3066.f_134 > 0)
		{
			Global_2445989.f_3066.f_134 = (Global_2445989.f_3066.f_134 - 1);
			Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_316 = Global_2445989.f_3066.f_134;
		}
	}
}

int func_671(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_27;
}

int func_672(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
			if (func_554(1) && !func_329(1))
			{
				if (func_673(func_556()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_673(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 26);
}

int func_674(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11158) * Global_262145.f_11163));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11108) * Global_262145.f_11113));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11135) * Global_262145.f_11139));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11148) * Global_262145.f_11152));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11170) * Global_262145.f_11175));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11332) * Global_262145.f_11333));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11338) * Global_262145.f_11339));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11336) * Global_262145.f_11337));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11330) * Global_262145.f_11331));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11334) * Global_262145.f_11335));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11328) * Global_262145.f_11329));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_13603;
		
		case 172:
			return Global_262145.f_13619;
		
		case 173:
			return Global_262145.f_13562;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16836;
		
		case 180:
			return Global_262145.f_16712;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16720;
		
		case 185:
			return Global_262145.f_16729;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16924;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16941;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16789;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16972;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16850;
		
		case 205:
			return Global_262145.f_16959;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16817;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16954;
		
		case 211:
			return Global_262145.f_16918;
		
		case 214:
			return Global_262145.f_17458;
		
		case 215:
			return Global_262145.f_17468;
		
		case 216:
			return Global_262145.f_17478;
		
		case 217:
			return Global_262145.f_17487;
		
		case 218:
			return Global_262145.f_17496;
		
		case 219:
			return Global_262145.f_17512;
		
		default:
	}
	return 0;
}

int func_675(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11159) * Global_262145.f_11164));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11109) * Global_262145.f_11114));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11136) * Global_262145.f_11140));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11149) * Global_262145.f_11153));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11171) * Global_262145.f_11176));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11208) * Global_262145.f_11211));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11254) * Global_262145.f_11257));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11244) * Global_262145.f_11247));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11199) * Global_262145.f_11202));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11219) * Global_262145.f_11224));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11184) * Global_262145.f_11187));
		
		case 170:
			return Global_262145.f_13545;
		
		case 171:
			return Global_262145.f_13604;
		
		case 172:
			return Global_262145.f_13620;
		
		case 173:
			return Global_262145.f_13563;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_15640;
		
		case 168:
			return Global_262145.f_15639;
		
		case 179:
			return Global_262145.f_16837;
		
		case 180:
			return Global_262145.f_16713;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16721;
		
		case 185:
			return Global_262145.f_16730;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16925;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16942;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16790;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16973;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16851;
		
		case 205:
			return Global_262145.f_16960;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16818;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16955;
		
		case 211:
			return Global_262145.f_16919;
		
		case 214:
			return Global_262145.f_17459;
		
		case 215:
			return Global_262145.f_17469;
		
		case 216:
			return Global_262145.f_17479;
		
		case 217:
			return Global_262145.f_17488;
		
		case 218:
			return Global_262145.f_17497;
		
		case 219:
			return Global_262145.f_17513;
		
		case 178:
			if (func_548())
			{
				return Global_262145.f_17336;
			}
			else if (bParam1)
			{
				return Global_262145.f_17337;
			}
			break;
		
		case 188:
			if (func_548())
			{
				return Global_262145.f_17420;
			}
			else if (bParam1)
			{
				return Global_262145.f_17421;
			}
			break;
		
		case 225:
			if (func_548() && !func_553())
			{
				if (func_673(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19494;
				}
				else
				{
					return Global_262145.f_19495;
				}
			}
			else if (func_553())
			{
				return Global_262145.f_19496;
			}
			break;
		
		case 226:
			if (func_548() && !func_553())
			{
				if (func_673(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19474;
				}
				else
				{
					return Global_262145.f_19475;
				}
			}
			else if (func_553())
			{
				return Global_262145.f_19476;
			}
			break;
		
		case 227:
			if (func_548() && !func_553())
			{
				if (func_673(unk_0x0FFED3E94261A832()))
				{
					return Global_262145.f_19486;
				}
				else
				{
					return Global_262145.f_19487;
				}
			}
			else if (func_553())
			{
				return Global_262145.f_19488;
			}
			break;
	}
	return 0;
}

void func_676(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_677(iParam0))
	{
		if (!func_548())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11052;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_401(iParam0))
	{
		*uParam1 = (Global_262145.f_16690 / 100f);
		*uParam2 = (Global_262145.f_16690 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11051;
		*uParam2 = Global_262145.f_11050;
	}
	if (func_401(iParam0))
	{
		if (func_269(unk_0x0FFED3E94261A832(), 1))
		{
			*uParam1 = (Global_262145.f_16689 / 100f);
			*uParam2 = (Global_262145.f_16689 / 100f);
		}
	}
	else if (func_269(unk_0x0FFED3E94261A832(), 1))
	{
		*uParam1 = Global_262145.f_11049;
		*uParam2 = Global_262145.f_11048;
	}
	iVar0 = func_332();
	if (iVar0 != func_55())
	{
		if (func_305(unk_0x0FFED3E94261A832(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_678(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_201(unk_0x0FFED3E94261A832());
	if (func_401(iVar0))
	{
		Global_1773272.f_2 = func_711();
		Global_1773272.f_3 = func_710();
		Global_1773272.f_50 = iParam4;
		Global_1773272.f_51 = iParam5;
		Global_1773272.f_10 = unk_0xDA84A1E29323722E();
		Global_1773272.f_20 = (Global_1773272.f_10 - Global_1773272.f_9);
		Global_1773272.f_12 = iParam1;
		Global_1773272.f_19 = func_704(iVar0, bParam0, func_709(bParam3));
		if (bParam0)
		{
			Global_1773272.f_11 = 1;
		}
		else
		{
			Global_1773272.f_11 = 0;
		}
		if ((func_223(unk_0x0FFED3E94261A832()) || func_373(unk_0x0FFED3E94261A832())) || func_275(unk_0x0FFED3E94261A832()))
		{
			Global_1773272.f_8 = 1;
		}
		else
		{
			Global_1773272.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1773272.f_43 = 0;
			Global_1773272.f_45 = func_703(func_556(), iParam2);
			Global_1773272.f_47 = iParam7;
			Global_1773272.f_46 = iParam6;
			Global_1773272.f_52 = func_702(func_556(), iParam2);
		}
		func_700(iVar0);
	}
	else if (func_405(iVar0))
	{
		Global_1773325.f_2 = func_711();
		Global_1773325.f_3 = func_710();
		Global_1773325.f_10 = unk_0xDA84A1E29323722E();
		Global_1773325.f_19 = (Global_1773325.f_10 - Global_1773325.f_9);
		Global_1773325.f_12 = iParam1;
		if (bParam0)
		{
			Global_1773325.f_11 = 1;
		}
		else
		{
			Global_1773325.f_11 = 0;
		}
		if ((func_223(unk_0x0FFED3E94261A832()) || func_373(unk_0x0FFED3E94261A832())) || func_275(unk_0x0FFED3E94261A832()))
		{
			Global_1773325.f_8 = 1;
		}
		else
		{
			Global_1773325.f_8 = 0;
		}
		func_698(iVar0);
	}
	else if (func_488(iVar0))
	{
		Global_1773387.f_2 = func_711();
		Global_1773387.f_3 = func_710();
		Global_1773387.f_9 = unk_0xDA84A1E29323722E();
		Global_1773387.f_18 = (Global_1773387.f_9 - Global_1773387.f_8);
		Global_1773387.f_11 = iParam1;
		Global_1773387.f_7 = func_696();
		Global_1773387.f_42 = func_694(func_36(), 5);
		iVar1 = unk_0x0FFED3E94261A832();
		iVar2 = func_651(iVar1);
		Global_1773387.f_28 = iVar2;
		Global_1773387.f_29 = func_691((func_693(iVar1) || func_692(iVar1)));
		Global_1773387.f_30 = func_691(func_690(iVar1));
		Global_1773387.f_32 = func_691(func_689(iVar1));
		Global_1773387.f_33 = func_691(func_688(iVar1));
		Global_1773387.f_34 = func_691(func_687(iVar1));
		Global_1773387.f_35 = func_691(func_686(0, iVar1) == 1);
		Global_1773387.f_36 = func_691(func_685(iVar1));
		Global_1773387.f_37 = func_691(func_684(iVar1));
		Global_1773387.f_38 = func_691(func_683(iVar1));
		Global_1773387.f_39 = func_691(func_646(iVar1, iVar2, 0));
		Global_1773387.f_40 = func_691(func_646(iVar1, iVar2, 2));
		Global_1773387.f_41 = func_691(func_646(iVar1, iVar2, 1));
		if (func_682(iVar1))
		{
			Global_1773387.f_31 = 2;
		}
		else if (func_681(iVar1))
		{
			Global_1773387.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1773387.f_10 = 1;
		}
		else
		{
			Global_1773387.f_10 = 0;
		}
		if ((func_223(unk_0x0FFED3E94261A832()) || func_373(unk_0x0FFED3E94261A832())) || func_275(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_6 = 1;
		}
		else
		{
			Global_1773387.f_6 = 0;
		}
		Global_1773387.f_21 = -2;
		Global_1773387.f_22 = -2;
		func_679(iVar0);
	}
	else
	{
		Global_1773254.f_6 = unk_0xDA84A1E29323722E();
		if (bParam0)
		{
			Global_1773254.f_7 = 1;
		}
		else
		{
			Global_1773254.f_7 = 0;
		}
		Global_1773254.f_8 = iParam1;
		if (Global_1773254.f_4 == 0)
		{
			if ((func_223(unk_0x0FFED3E94261A832()) || func_373(unk_0x0FFED3E94261A832())) || func_275(unk_0x0FFED3E94261A832()))
			{
				Global_1773254.f_4 = 1;
			}
		}
	}
}

void func_679(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0EACDF8487D5155A(&Global_1773387);
	func_680();
}

void func_680()
{
	struct<43> Var0;
	
	Global_1773387 = { Var0 };
	Global_1773387.f_23 = 0;
	Global_1773387.f_24 = 0;
	Global_1773387.f_16 = 0;
}

bool func_681(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 12);
}

bool func_682(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 13);
}

int func_683(int iParam0)
{
	if (iParam0 != func_55())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 12) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 13)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_684(int iParam0)
{
	if (iParam0 != func_55())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 0) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 1)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_685(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (((((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 3) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 4)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 5)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 0)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 1)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_686(int iParam0, int iParam1)
{
	if (iParam1 == func_55())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 0))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 3))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 6))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 9))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 12))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 15))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 18))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 21))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 1))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 4))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 7))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 10))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 13))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 16))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 19))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 22))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 2))
			{
				return 3;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 5))
			{
				return 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 8))
			{
				return 4;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 11))
			{
				return 1;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 14))
			{
				return 7;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 17))
			{
				return 5;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 20))
			{
				return 6;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 23))
			{
				return 0;
			}
			else if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam1 /*635*/].f_259.f_228, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_687(int iParam0)
{
	if (iParam0 != func_55())
	{
		if ((unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 6) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 7)) || unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_228, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_688(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 8);
}

bool func_689(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 7);
}

bool func_690(int iParam0)
{
	if (iParam0 == func_55())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 9);
}

int func_691(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_692(int iParam0)
{
	if (iParam0 == func_55())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 11);
}

bool func_693(int iParam0)
{
	if (iParam0 == func_55())
	{
		return 0;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_235, 10);
}

int func_694(int iParam0, int iParam1)
{
	return func_458(func_695(iParam1), iParam0, 0);
}

int func_695(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3873;
		
		case 1:
			return 3902;
		
		case 2:
			return 3906;
		
		case 3:
			return 3910;
		
		case 4:
			return 3914;
		
		case 5:
			return 5425;
		
		default:
	}
	return 3873;
}

int func_696()
{
	int iVar0;
	
	if (func_553())
	{
		return 4;
	}
	else if (func_548())
	{
		if (func_673(unk_0x0FFED3E94261A832()))
		{
			return 8;
		}
		return 6;
	}
	if (func_329(1))
	{
		iVar0 = func_697(unk_0x0FFED3E94261A832());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_554(1))
	{
		if (func_673(func_556()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_697(int iParam0)
{
	if (func_269(iParam0, 1))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_318;
	}
	return -1;
}

void func_698(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x76C73F892FF4A48A(&Global_1773325);
	func_699();
}

void func_699()
{
	struct<62> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Global_1773325 = { Var0 };
	Global_1773325.f_24 = 0;
	Global_1773325.f_25 = 0;
	Global_1773325.f_17 = 0;
}

void func_700(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xEA5062924BF2F0F6(&Global_1773272);
	func_701();
}

void func_701()
{
	struct<53> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1773272 = { Var0 };
	Global_1773272.f_29 = 0;
	Global_1773272.f_30 = 0;
	Global_1773272.f_17 = 0;
}

int func_702(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_646(iParam0, iParam1, 2);
	bVar1 = func_646(iParam0, iParam1, 1);
	bVar2 = func_646(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_703(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_639(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_704(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_491(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16247;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16246;
		}
		else
		{
			iVar0 = Global_262145.f_16228;
		}
		iVar1 = 19;
	}
	else if (func_490(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_303(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_16227;
			iVar1 = 20;
		}
	}
	else if (func_401(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16247;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16246;
		}
		else
		{
			iVar0 = Global_262145.f_16228;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xEE4C451D799A4C78(func_708(func_556()), func_707(func_556()), func_711(), func_710(), iVar1, iVar0);
	}
	func_706(iVar0);
	func_705(iVar0);
	return iVar0;
}

void func_705(int iParam0)
{
	int iVar0;
	
	iVar0 = func_458(3943, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_357 = iVar0;
	func_457(3943, iVar0, -1, 1, 0);
}

void func_706(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	Global_1622795[iVar0 /*431*/].f_11.f_356 = (Global_1622795[iVar0 /*431*/].f_11.f_356 + iParam0);
	if (Global_1622795[iVar0 /*431*/].f_11.f_356 < -9999)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_356 = 9999;
	}
	else if (Global_1622795[iVar0 /*431*/].f_11.f_356 > 9999)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_356 = 9999;
	}
}

int func_707(int iParam0)
{
	if (iParam0 == func_55())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_708(int iParam0)
{
	if (iParam0 == func_55())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[0];
}

int func_709(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_223(unk_0x0FFED3E94261A832()) || func_275(unk_0x0FFED3E94261A832()))
	{
		return 1;
	}
	return 0;
}

int func_710()
{
	if (Global_1773254.f_3 != 0)
	{
		return Global_1773254.f_3;
	}
	return -1;
}

int func_711()
{
	if (Global_1773254.f_2 != 0)
	{
		return Global_1773254.f_2;
	}
	return -1;
}

int func_712(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_55();
	iVar1 = func_55();
	iVar2 = func_55();
	return func_713(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_713(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<76> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_69 = 1;
	Var0.f_70 = 2;
	Var0.f_75 = -1;
	func_534(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_69 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_70 = uParam12;
	unk_0xF6082E2ADA1C795B(&(Var0.f_67), 2);
	return func_506(&Var0);
}

int func_714(int iParam0)
{
	int iVar0;
	
	iVar0 = func_273(iParam0);
	if (iVar0 != -1)
	{
		return func_271(iVar0);
	}
	return 1;
}

char* func_715(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		sVar0 = func_720(&(Global_1622795[iParam0 /*431*/].f_11.f_98));
		return sVar0;
	}
	if (Global_1622795[iParam0 /*431*/].f_11.f_114 != Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_114)
	{
		sVar0 = func_718(iParam0, 0);
		return sVar0;
	}
	if (((func_205(iParam0, 28) || func_205(unk_0x0FFED3E94261A832(), 28)) || func_717(iParam0)) && !func_716(iParam0))
	{
		return func_718(iParam0, 0);
	}
	iVar1 = func_56(iParam0);
	if (iVar1 != func_55())
	{
		if (iVar1 != unk_0x0FFED3E94261A832())
		{
			if (!unk_0x97FFE0491AC179A2() && !unk_0x9F720A27787B5845(0, -1, 1))
			{
				return func_718(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_55())
	{
		sVar0 = func_720(&(Global_1622795[iVar1 /*431*/].f_11.f_98));
		if (unk_0x58478145CAF8429C(sVar0))
		{
			return func_718(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_716(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_57(iParam0) };
	if (unk_0x97FFE0491AC179A2())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			if (unk_0xE1BD9BCF6A9D6793(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_717(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_57(iParam0) };
	if (unk_0x429A1F8C699BEE23() || unk_0x5018862FF5D9F844())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			return 0;
		}
	}
	else if (unk_0x97FFE0491AC179A2())
	{
		if (unk_0xE061CABF3B012AFB(0))
		{
			if (unk_0xE1BD9BCF6A9D6793(&Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_718(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_258(iParam0, 1))
		{
			return func_719();
		}
	}
	return unk_0x91D2F083AE17E209("GB_REST_ACC");
}

var func_719()
{
	return unk_0x91D2F083AE17E209("GB_REST_ACCM");
}

var func_720(var uParam0)
{
	return uParam0;
}

void func_721()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (func_28())
	{
		return;
	}
	if (func_383())
	{
		if (func_11(&(Local_127.f_238)))
		{
			iVar1 = (func_18() - 300000);
			bVar0 = func_6(&(Local_127.f_238), iVar1, 0);
			if (bVar0)
			{
				func_729();
				if ((func_18() - func_535(&(Local_127.f_238), 0, 0)) > 0)
				{
					if ((func_18() - func_535(&(Local_127.f_238), 0, 0)) > 30000)
					{
						func_728((func_18() - func_535(&(Local_127.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0);
					}
					else
					{
						func_728((func_18() - func_535(&(Local_127.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
					}
				}
				else
				{
					func_728(0, "GB_WORK_END", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
				}
			}
		}
		return;
	}
	if (!func_979() && !func_381())
	{
		return;
	}
	if (!func_480())
	{
		return;
	}
	iVar2 = unk_0x0FFED3E94261A832();
	if (func_34(unk_0x0FFED3E94261A832(), 0))
	{
		iVar2 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	}
	iVar3 = func_372(iVar2);
	if (iVar3 < 3)
	{
		return;
	}
	iVar4 = (func_30() - Local_127.f_213);
	if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 13))
	{
		func_725(iVar4, "DCONTRA_HUD1", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	}
	if (func_11(&(Local_127.f_226)))
	{
		iVar5 = func_20();
		iVar6 = (func_20() - func_535(&(Local_127.f_226), 0, 0));
		func_722(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
	}
	else
	{
		iVar5 = func_20();
		iVar6 = func_20();
		func_722(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
	}
}

void func_722(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_724(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_723(0, iVar0);
		Global_1353013.f_1093[iVar0] = iParam0;
		Global_1353013.f_1093.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1353013.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1353013.f_1093.f_194[iVar0] = iParam3;
		Global_1353013.f_1093.f_183[iVar0] = iParam4;
		Global_1353013.f_1093.f_216[iVar0] = iParam5;
		Global_1353013.f_1093.f_227[iVar0 /*3*/] = iParam6;
		Global_1353013.f_1093.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1353013.f_1093.f_258[iVar0] = iParam8;
		Global_1353013.f_1093.f_269[iVar0] = iParam9;
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

void func_723(int iParam0, int iParam1)
{
	unk_0xF6082E2ADA1C795B(&(Global_1353013.f_5941[iParam0]), iParam1);
}

bool func_724(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1353013.f_5941[iParam0], iParam1);
}

void func_725(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_724(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_723(6, iVar0);
		Global_1353013.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1353013.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1353013.f_3770.f_183[iVar0] = iParam3;
		Global_1353013.f_3770.f_172[iVar0] = iParam2;
		Global_1353013.f_3770.f_260[iVar0] = iParam4;
		Global_1353013.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1353013.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1353013.f_3770.f_443[iVar0] = iParam7;
		Global_1353013.f_3770.f_454[iVar0] = iParam8;
		Global_1353013.f_3770.f_497[iVar0] = iParam9;
		Global_1353013.f_3770.f_508[iVar0] = iParam10;
		Global_1353013.f_3770.f_205[iVar0] = iParam11;
		Global_1353013.f_3770.f_216[iVar0] = iParam12;
		Global_1353013.f_3770.f_227[iVar0] = iParam13;
		Global_1353013.f_3770.f_238[iVar0] = iParam14;
		Global_1353013.f_3770.f_249[iVar0] = iParam15;
		Global_1353013.f_3770.f_519[iVar0] = iParam16;
		Global_1353013.f_3770.f_530[iVar0] = iParam17;
		Global_1353013.f_3770.f_541[iVar0] = iParam18;
		Global_1353013.f_3770.f_552[iVar0] = iParam19;
		Global_1353013.f_3770.f_563[iVar0] = iParam20;
		Global_1353013.f_3770.f_574[iVar0] = iParam21;
		Global_1353013.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_727())
		{
			Global_1353013.f_1088 = 1;
		}
		if (unk_0x5018862FF5D9F844())
		{
			iVar2 = 0;
			unk_0xEB51D9D737FD6BC1(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1353013.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1353013.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1353013.f_1088 = 1;
			}
			if (func_726())
			{
				Global_1353013.f_1092 = 1;
			}
		}
	}
}

int func_726()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x5018862FF5D9F844())
	{
		unk_0xEB51D9D737FD6BC1(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_727()
{
	if ((unk_0xBC8CC6C19B70E1C4() == 8 || unk_0xBC8CC6C19B70E1C4() == 9) || unk_0xBC8CC6C19B70E1C4() == 10)
	{
		return 1;
	}
	return 0;
}

void func_728(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_724(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1353013.f_1 = 1;
		func_723(7, iVar0);
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

void func_729()
{
	Global_1353013.f_1089 = 1;
}

void func_730()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar3 = unk_0x0FFED3E94261A832();
	iVar4 = unk_0x88641E5BC172153A();
	if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 1))
	{
		return;
	}
	if (func_34(unk_0x0FFED3E94261A832(), 0))
	{
		iVar4 = func_382();
		iVar3 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	}
	iVar5 = func_372(iVar3);
	if (!func_480())
	{
		if (func_173("DCONTRA_OBJ"))
		{
			func_873();
		}
		if (func_173("DCONTRA_OBJ2"))
		{
			func_873();
		}
		if (func_173("DCONTRA_OBJ3"))
		{
			func_873();
		}
		if (func_173("DCONTRA_OBJ4"))
		{
			func_873();
		}
		if (func_173("DCONTRA_TOBJ"))
		{
			func_873();
		}
		if (func_173("DCONTRA_TOBJ2"))
		{
			func_873();
		}
		if (func_173("DCONTRA_TOBJ3"))
		{
			func_873();
		}
		if (func_173("DCONTRA_WOBJ"))
		{
			func_873();
		}
		return;
	}
	if (iVar5 < 3)
	{
		if (func_173("DCONTRA_OBJ"))
		{
			func_873();
		}
		if (func_173("DCONTRA_OBJ2"))
		{
			func_873();
		}
		if (func_173("DCONTRA_OBJ3"))
		{
			func_873();
		}
		if (func_173("DCONTRA_OBJ4"))
		{
			func_873();
		}
		if (func_173("DCONTRA_TOBJ"))
		{
			func_873();
		}
		if (func_173("DCONTRA_TOBJ2"))
		{
			func_873();
		}
		if (func_173("DCONTRA_TOBJ3"))
		{
			func_873();
		}
		if (func_173("DCONTRA_WOBJ"))
		{
			func_873();
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!func_383())
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 13) && !unk_0xAA4F14DA15DB0B51(Local_397[iVar4 /*11*/].f_1, 11))
		{
			if (!func_173("DCONTRA_WOBJ"))
			{
				func_744("DCONTRA_WOBJ", 0);
			}
		}
		else if (iVar4 == Local_127.f_218)
		{
			if (!func_173("DCONTRA_OBJ"))
			{
				func_744("DCONTRA_OBJ", 0);
			}
		}
		else if (func_980() == Local_127.f_218)
		{
			if (!func_173("DCONTRA_OBJ"))
			{
				func_744("DCONTRA_OBJ", 0);
			}
		}
	}
	else if (func_743())
	{
		if (iVar4 == Local_127.f_218)
		{
			if (!func_173("DCONTRA_OBJ2"))
			{
				func_744("DCONTRA_OBJ2", 0);
			}
		}
		else if (func_980() == Local_127.f_218)
		{
			if (!func_173("DCONTRA_OBJ2"))
			{
				func_744("DCONTRA_OBJ2", 0);
			}
		}
	}
	else
	{
		if (func_173("DCONTRA_OBJ2"))
		{
			func_873();
		}
		if (func_173("DCONTRA_TOBJ2"))
		{
			func_873();
		}
		if (Local_127.f_216 < 0)
		{
			if (!func_173("DCONTRA_OBJ4"))
			{
				func_744("DCONTRA_OBJ4", 0);
			}
		}
		else
		{
			iVar2 = func_742();
			if (iVar2 != func_55())
			{
				if (unk_0x76BCE6C7B20502DA(iVar2))
				{
					if (iVar2 == iVar3)
					{
						if (!func_173("DCONTRA_OBJ3"))
						{
							func_744("DCONTRA_OBJ3", 0);
						}
					}
					else if (!func_173("DCONTRA_TOBJ3"))
					{
						iVar0 = func_273(iVar2);
						if (iVar0 > -1)
						{
							iVar1 = func_271(iVar0);
							func_731("DCONTRA_TOBJ3", "DCONTRA_CBAND", iVar1, 0);
						}
					}
				}
			}
		}
	}
}

void func_731(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_732(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312575 = 19;
		Global_1312575.f_56 = iParam2;
	}
}

int func_732(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam1))
	{
		return 0;
	}
	if (func_741(sParam0, sParam1) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	func_736();
	Global_1312575 = 3;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	Global_1312575.f_58 = uParam3;
	Global_1312575.f_56 = uParam3;
	func_735();
	func_734(bParam2);
	func_733();
	return 1;
}

void func_733()
{
	unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 1);
}

void func_734(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0x507FE690B1271947(&(Global_1312575.f_59), 0);
}

void func_735()
{
	Global_1312575.f_10 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 86400000);
	Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
}

void func_736()
{
	func_738();
	func_737(0);
}

void func_737(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x591AF4C50B46E014();
	Global_1312575 = 20;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
	if (bVar0)
	{
		Global_1312575.f_10 = unk_0x11ABC381A58DD5AB();
		Global_1312575.f_11 = unk_0x11ABC381A58DD5AB();
	}
	StringCopy(&(Global_1312575.f_12), "", 16);
	StringCopy(&(Global_1312575.f_16), "", 64);
	StringCopy(&(Global_1312575.f_32), "", 64);
	Global_1312575.f_52 = 0;
	Global_1312575.f_53 = 0;
	Global_1312575.f_54 = 0;
	Global_1312575.f_55 = -1;
	Global_1312575.f_56 = 0;
	Global_1312575.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_738()
{
	if (!func_740())
	{
	}
	if (func_176())
	{
		unk_0x2EDDA24620ABEEBA(&(Global_1312575.f_12));
		func_739();
		unk_0x3CBB1A3F50D6B58F();
	}
}

void func_739()
{
	switch (Global_1312575)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			return;
		
		case 2:
			unk_0xEA97619D8B89D387(Global_1312575.f_52);
			unk_0xEA97619D8B89D387(Global_1312575.f_53);
			return;
		
		case 3:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 4:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 5:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 6:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 7:
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 8:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 9:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 10:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		case 12:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 13:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 11:
			unk_0x0908F11F0F1C3172(&(Global_1312575.f_16));
			return;
		
		case 14:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 15:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_57);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_32));
			return;
		
		case 17:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			return;
		
		case 16:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			return;
		
		case 19:
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_16));
			return;
		
		case 18:
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_16));
			unk_0x95CE6D748899618C(Global_1312575.f_56);
			unk_0xD5DA3EC5EEC78358(&(Global_1312575.f_48));
			unk_0xCF6846167A5EFE98(&(Global_1312575.f_32));
			return;
		
		default:
	}
}

int func_740()
{
	if (!func_176())
	{
		return 0;
	}
	unk_0x7474291EEDB9BF12(&(Global_1312575.f_12));
	func_739();
	return unk_0x0D3452E263E036CA();
}

bool func_741(char* sParam0, char* sParam1)
{
	if (!func_176())
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam1))
	{
		return 0;
	}
	if (!unk_0xCAEDBF30E3EA14FC(sParam0) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_12)))
	{
		return 0;
	}
	return unk_0xCAEDBF30E3EA14FC(sParam1) == unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_16));
}

int func_742()
{
	int iVar0;
	
	iVar0 = func_55();
	if (Local_127.f_216 > -1)
	{
		iVar0 = unk_0x7C214DA899F05536(Local_127.f_216);
	}
	return iVar0;
}

int func_743()
{
	var uVar0;
	var uVar1;
	
	if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_127.f_2[0 /*10*/].f_2))
		{
			uVar0 = unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2);
			if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_1))
			{
				if (!func_24(Local_127.f_2[0 /*10*/].f_1))
				{
					uVar1 = unk_0xC09E9E2B61AD04E7(Local_127.f_2[0 /*10*/].f_1);
					if (unk_0x5B9B499C707C2A95(uVar1, uVar0, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[1 /*10*/].f_1))
			{
				if (!func_24(Local_127.f_2[1 /*10*/].f_1))
				{
					iVar1 = unk_0xC09E9E2B61AD04E7(Local_127.f_2[1 /*10*/].f_1);
					if (unk_0x5B9B499C707C2A95(iVar1, iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_744(char* sParam0, bool bParam1)
{
	if (unk_0x58478145CAF8429C(sParam0))
	{
		return;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam0) > 23)
	{
		return;
	}
	if (func_174(sParam0))
	{
		return;
	}
	func_736();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0xFABF5258A318B1DC(), 32);
	Global_1312575.f_9 = unk_0xCAEDBF30E3EA14FC(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_735();
	func_734(bParam1);
	func_733();
}

void func_745()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_979() && !func_381())
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 18))
	{
		iVar0 = func_372(unk_0x0FFED3E94261A832());
		if (iVar0 >= 2)
		{
			unk_0xF6082E2ADA1C795B(&iLocal_750, 18);
			func_847(-1, 0, 0, -1);
		}
	}
	if (!func_480())
	{
		return;
	}
	iVar1 = unk_0x88641E5BC172153A();
	iVar2 = unk_0x0FFED3E94261A832();
	if (func_34(unk_0x0FFED3E94261A832(), 0))
	{
		iVar1 = func_382();
		iVar2 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 1))
	{
		iVar0 = func_372(iVar2);
		if (iVar0 >= 2)
		{
			if (iVar1 == Local_127.f_218)
			{
				if (func_383())
				{
					if (func_768())
					{
						func_505(86, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2);
						unk_0xF6082E2ADA1C795B(&iLocal_750, 1);
					}
				}
				else if (func_768())
				{
					func_505(86, "BIGM_DEFEND", "BIGM_DEFEND2", 1, -1, 2);
					unk_0xF6082E2ADA1C795B(&iLocal_750, 1);
				}
				if (unk_0xAA4F14DA15DB0B51(iLocal_750, 1))
				{
					if (iVar2 == unk_0x0FFED3E94261A832())
					{
						func_767(1);
					}
				}
			}
			else if (func_980() == Local_127.f_218)
			{
				if (func_383())
				{
					if (func_746(func_763(1), "DCONTRA_TXT2", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_505(86, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2);
					}
				}
				else if (func_746(func_763(1), "DCONTRA_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_505(86, "BIGM_DEFEND", "BIGM_DEFEND4", 1, -1, 2);
				}
				if (iVar2 == unk_0x0FFED3E94261A832())
				{
					func_767(1);
				}
				unk_0xF6082E2ADA1C795B(&iLocal_750, 1);
			}
			else
			{
				unk_0xF6082E2ADA1C795B(&iLocal_750, 1);
			}
		}
		else
		{
			unk_0xF6082E2ADA1C795B(&iLocal_750, 1);
		}
	}
}

int func_746(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x507FE690B1271947(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_747(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xF6082E2ADA1C795B(&Global_2313, 1);
			unk_0xF6082E2ADA1C795B(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_747(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x35302CD5A5D37EED(sParam14, sParam15))
	{
	}
	func_757();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (unk_0xFBCC401A3A7C9E1C(unk_0x2A5EB8B0FE590B91()))
			{
				return 0;
			}
		}
		if (Global_103236.f_13832[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_756() == 0)
	{
		func_754();
		return 0;
	}
	func_753(Global_16812);
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/]), sParam1, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_103236.f_13922[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_25 = iParam7;
	Global_103236.f_13922[Global_16812 /*104*/].f_26 = uParam8;
	Global_103236.f_13922[Global_16812 /*104*/].f_29 = uParam9;
	Global_103236.f_13922[Global_16812 /*104*/].f_30 = uParam12;
	Global_103236.f_13922[Global_16812 /*104*/].f_31 = uParam11;
	Global_103236.f_13922[Global_16812 /*104*/].f_28 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_103236.f_13922[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_103236.f_13922[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0xAA4F14DA15DB0B51(Global_2313, 10))
	{
		Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 1;
		Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 1;
		Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_752(0);
		func_752(2);
		func_752(1);
	}
	else
	{
		func_757();
		switch (iParam16)
		{
			case 3:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_752(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_752(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_752(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_752(3);
					Global_3019 = 3;
					break;
				
				default:
					Global_3019 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_2313, 10))
		{
			Global_103236.f_13832[0 /*20*/].f_17 = 1;
			Global_103236.f_13832[1 /*20*/].f_17 = 1;
			Global_103236.f_13832[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_103236.f_13832[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_103236.f_13832[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_103236.f_13832[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_103236.f_13832[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_757();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_502())
			{
				unk_0x08BE237DBCD9CBD9(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_751(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_748(1);
			func_751(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_748(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_750(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_251(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar2);
								unk_0x8123397DC676E794();
							}
							if (Global_2454704)
							{
								if (iVar1 == 14)
								{
									func_749(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
					{
						if (Global_2882[iVar0] == 0)
						{
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_103236.f_13922[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_103236.f_13922[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_103236.f_13922[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_749(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69800)
								{
									iVar4 = 0;
									iVar4 = Global_2599419;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2599420[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2599420[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2599420[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_749(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36949;
											break;
										
										case 1:
											iVar6 = Global_36950;
											break;
										
										case 2:
											iVar6 = Global_36951;
											break;
										
										default:
											break;
									}
									func_749(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_749(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_251(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(Global_2319);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_251(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar7);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xAA4F14DA15DB0B51(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_251(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(iVar8);
								unk_0x8123397DC676E794();
							}
							else if (iVar1 == 8)
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_251(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if ((iVar1 == 23 && unk_0x35302CD5A5D37EED(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xAA4F14DA15DB0B51(Global_2314, 6))
							{
								unk_0xD1FCC52F87A98873(Global_14424, "SET_DATA_SLOT");
								unk_0x4CECF13AF144A8F6(1);
								unk_0x4CECF13AF144A8F6(iVar0);
								unk_0x4CECF13AF144A8F6(Global_2320[iVar1 /*15*/].f_10);
								unk_0x4CECF13AF144A8F6(0);
								func_251(&(Global_2320[iVar1 /*15*/]));
								unk_0x4CECF13AF144A8F6(42);
								unk_0x8123397DC676E794();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1621535.f_1;
								func_749(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_749(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_749(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x58478145CAF8429C(sParam7))
	{
		func_251(sParam7);
	}
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		func_251(sParam8);
	}
	if (!unk_0x58478145CAF8429C(sParam9))
	{
		func_251(sParam9);
	}
	if (!unk_0x58478145CAF8429C(sParam10))
	{
		func_251(sParam10);
	}
	if (!unk_0x58478145CAF8429C(sParam11))
	{
		func_251(sParam11);
	}
	unk_0x8123397DC676E794();
}

bool func_750(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_751(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xD1FCC52F87A98873(uParam0, sParam1);
	unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4CECF13AF144A8F6(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x8123397DC676E794();
}

void func_752(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_103236.f_13832[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_753(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xD887411BD4A4A92D();
	uVar1 = unk_0xA4EAAF8247A3A69E();
	uVar2 = unk_0xDA870B7547A455EA();
	uVar3 = unk_0x56E76B9CA4BBAA18();
	uVar4 = unk_0x0FD588FC21950895() + 1;
	uVar5 = unk_0x15C180E135C728D1();
	Global_103236.f_13922[iParam0 /*104*/].f_18 = uVar0;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_103236.f_13922[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_754()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_103236.f_13922[Global_16812 /*104*/].f_18 = -1;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_755(Global_103236.f_13922[iVar2 /*104*/].f_18, Global_103236.f_13922[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_24 = 1;
}

int func_755(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_756()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69800)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_103236.f_13922[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_103236.f_13922[Global_16812 /*104*/].f_18 = -1;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_103236.f_13922[iVar2 /*104*/].f_24 == 0 || Global_103236.f_13922[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_755(Global_103236.f_13922[iVar2 /*104*/].f_18, Global_103236.f_13922[Global_16812 /*104*/].f_18))
			{
				Global_16812 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16812 == 34)
	{
		return 0;
	}
	Global_103236.f_13922[Global_16812 /*104*/].f_99[0] = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_99[1] = 0;
	Global_103236.f_13922[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

void func_757()
{
	if (func_750(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_758();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_758()
{
	func_759();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_759()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_762(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_761(unk_0x2A5EB8B0FE590B91());
			if (func_760(iVar0) && (!func_750(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_760(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_760(int iParam0)
{
	return iParam0 < 3;
}

int func_761(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_762(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_762(int iParam0)
{
	if (func_760(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_763(bool bParam0)
{
	if (func_765(bParam0))
	{
		if (bParam0 && func_764())
		{
			Global_103236.f_27831[22 /*29*/].f_24[Global_14443] = 1;
			return 22;
		}
		else
		{
			return 75;
		}
	}
	if (bParam0 && func_764())
	{
		Global_103236.f_27831[22 /*29*/].f_24[Global_14443] = 1;
		return 22;
	}
	return 74;
}

int func_764()
{
	int iVar0;
	
	iVar0 = func_56(unk_0x0FFED3E94261A832());
	if (((iVar0 != unk_0x0FFED3E94261A832() && iVar0 != func_55()) && unk_0x885F483F34E47503(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_765(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = func_56(unk_0x0FFED3E94261A832());
		if (func_764())
		{
			if (func_766(iVar0))
			{
				return 1;
			}
			return 0;
		}
	}
	return func_458(3207, -1, 0) != 0;
}

bool func_766(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 29);
}

void func_767(bool bParam0)
{
	if (bParam0)
	{
		if (!func_205(unk_0x0FFED3E94261A832(), 9))
		{
			if (func_372(unk_0x0FFED3E94261A832()) != 0)
			{
				func_206(9);
			}
		}
	}
	else if (func_205(unk_0x0FFED3E94261A832(), 9))
	{
		func_204(9);
	}
}

int func_768()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_763(1);
	switch (iLocal_866)
	{
		case 0:
			sLocal_867 = func_846();
			if (func_765(1))
			{
				func_845(&uLocal_868, 3, 0, "EXECPA_MALE", 0, 1);
			}
			else
			{
				func_845(&uLocal_868, 2, 0, "EXECPA_FEMALE", 0, 1);
			}
			iLocal_866++;
			break;
		
		case 1:
			if (func_839(0, 1, 0, 1))
			{
				unk_0xF6082E2ADA1C795B(&uVar1, 4);
				if (func_769(&uLocal_868, iVar0, "EXCALAU", sLocal_867, uVar1, 0))
				{
					iLocal_866++;
					return 1;
				}
			}
			break;
		
		case 2:
			break;
	}
	return 0;
}

int func_769(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_837())
	{
		return 0;
	}
	if (func_836())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_770(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_770(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x58478145CAF8429C(sParam2))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x58478145CAF8429C(sParam3))
	{
		return 0;
	}
	if (unk_0x8A3FBC299F47ED6B(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC());
	iVar1 = func_835(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x58478145CAF8429C(iParam7))
	{
		iVar2 = unk_0xCAEDBF30E3EA14FC(iParam7);
	}
	if (func_834(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_829(uParam6))
	{
		return 0;
	}
	if (func_826(iVar0, iVar1, iVar2))
	{
		if (func_825())
		{
			return 0;
		}
		func_824();
		return func_777(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_776(iParam4))
	{
		return 0;
	}
	func_771(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_771(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1345111.f_40.f_1 = iParam0;
	Global_1345111.f_40.f_2 = iParam1;
	Global_1345111.f_40.f_3 = iParam2;
	StringCopy(&(Global_1345111.f_40.f_4), sParam3, 16);
	Global_1345111.f_40.f_8 = iParam4;
	Global_1345111.f_40.f_9 = iParam5;
	Global_1345111.f_40.f_14 = uParam6;
	func_772(iParam4);
	func_824();
	Global_1345111.f_40.f_13 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), 7000);
}

void func_772(int iParam0)
{
	if (func_775(iParam0))
	{
		func_774();
		return;
	}
	func_773();
}

void func_773()
{
	Global_1345111.f_40.f_10 = 0;
}

void func_774()
{
	Global_1345111.f_40.f_10 = 1;
}

int func_775(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_776(int iParam0)
{
	return iParam0 > Global_1345111.f_40.f_8;
}

int func_777(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_823();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_820(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_817(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_820(uParam0, sParam3, sParam4);
		}
		return func_801(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_800(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_796(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_795(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_778(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_778(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_794();
	bVar0 = true;
	if (func_780(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_779(120000);
		return 1;
	}
	return 0;
}

void func_779(int iParam0)
{
	Global_1345111.f_40.f_11 = unk_0x35CE5C26135C0313(unk_0x11ABC381A58DD5AB(), iParam0);
	Global_1345111.f_40.f_12 = 1;
}

int func_780(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_55();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x4325D353D7D27B34(iVar0);
		iVar1 = func_282(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x64168D046C8CFB0F(unk_0x11ABC381A58DD5AB(), Global_1345111.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_793(uParam5, bParam6, &iVar3);
	uVar5 = func_791(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		iVar6++;
		if (!unk_0x58478145CAF8429C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x35302CD5A5D37EED(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xAA4F14DA15DB0B51(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x58478145CAF8429C(sVar2))
	{
		bVar12 = func_790(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_784(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 0))
	{
		func_783();
	}
	func_794();
	func_782();
	func_781();
	return 1;
}

void func_781()
{
	Global_1345111.f_57 = 0;
	Global_1345111.f_57.f_1 = 0;
}

void func_782()
{
	Global_1345111.f_40 = 3;
}

void func_783()
{
	unk_0xF6082E2ADA1C795B(&Global_2313, 8);
}

int func_784(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_785(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0xF6082E2ADA1C795B(&Global_2600685, 0);
		}
		return 1;
	}
	return 0;
}

int func_785(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x35302CD5A5D37EED(sParam14, sParam15))
	{
	}
	func_757();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14443 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14443 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14443 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if (unk_0xFBCC401A3A7C9E1C(unk_0x2A5EB8B0FE590B91()))
			{
				return 0;
			}
		}
		if (Global_2600670 == 1)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x09952BA662A7629B(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_789() == 0)
	{
		func_787();
		return 0;
	}
	func_786(Global_2600669);
	StringCopy(&(Global_2599420[Global_2600669 /*104*/]), sParam1, 64);
	Global_2599420[Global_2600669 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2599420[Global_2600669 /*104*/].f_24 = iParam2;
	}
	Global_2599420[Global_2600669 /*104*/].f_25 = iParam7;
	Global_2599420[Global_2600669 /*104*/].f_26 = uParam8;
	Global_2599420[Global_2600669 /*104*/].f_29 = uParam9;
	Global_2599420[Global_2600669 /*104*/].f_30 = uParam12;
	Global_2599420[Global_2600669 /*104*/].f_31 = uParam11;
	Global_2599420[Global_2600669 /*104*/].f_28 = 0;
	Global_2599420[Global_2600669 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_33), sParam4, 64);
	Global_2599420[Global_2600669 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_50), sParam5, 64);
	Global_2599420[Global_2600669 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2599420[Global_2600669 /*104*/].f_83), sParam15, 64);
	func_757();
	switch (iParam16)
	{
		case 3:
			Global_2599420[Global_2600669 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2599420[Global_2600669 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2599420[Global_2600669 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2599420[Global_2600669 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_752(0);
				break;
			
			case 1:
				func_752(1);
				break;
			
			case 2:
				func_752(2);
				break;
			
			case 3:
				func_752(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2600670 = 1;
				break;
			
			case 0:
				Global_2600670 = 1;
				break;
			
			case 2:
				Global_2600670 = 1;
				break;
			
			case 1:
				Global_2600670 = 1;
				break;
			}
	}
	Global_16814[Global_2600669] = 0;
	if (bParam10)
	{
		func_757();
		if (Global_14386)
		{
			StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14443)
			{
				case 0:
					StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_502())
			{
				unk_0x08BE237DBCD9CBD9(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_751(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_748(1);
			func_751(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_786(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xD887411BD4A4A92D();
	uVar1 = unk_0xA4EAAF8247A3A69E();
	uVar2 = unk_0xDA870B7547A455EA();
	uVar3 = unk_0x56E76B9CA4BBAA18();
	uVar4 = unk_0x0FD588FC21950895() + 1;
	uVar5 = unk_0x15C180E135C728D1();
	Global_2599420[iParam0 /*104*/].f_18 = uVar0;
	Global_2599420[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2599420[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2599420[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2599420[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2599420[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_787()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2600669 = 11;
	Global_2599420[Global_2600669 /*104*/].f_18 = -1;
	Global_2599420[Global_2600669 /*104*/].f_18.f_1 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_2 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_3 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_788(Global_2599420[iVar2 /*104*/].f_18, Global_2599420[Global_2600669 /*104*/].f_18))
		{
			Global_2600669 = iVar2;
		}
		iVar2++;
	}
	Global_2599420[Global_2600669 /*104*/].f_24 = 1;
}

int func_788(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_789()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2599420[iVar2 /*104*/].f_24 == 0)
		{
			Global_2600669 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2600669 = 11;
	Global_2599420[Global_2600669 /*104*/].f_18 = -1;
	Global_2599420[Global_2600669 /*104*/].f_18.f_1 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_2 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_3 = 0;
	Global_2599420[Global_2600669 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2599420[iVar2 /*104*/].f_24 == 0 || Global_2599420[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_788(Global_2599420[iVar2 /*104*/].f_18, Global_2599420[Global_2600669 /*104*/].f_18))
			{
				Global_2600669 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2600669 == 11)
	{
		return 0;
	}
	Global_2599420[Global_2600669 /*104*/].f_99[0] = 0;
	Global_2599420[Global_2600669 /*104*/].f_99[1] = 0;
	Global_2599420[Global_2600669 /*104*/].f_99[2] = 0;
	return 1;
}

int func_790(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_785(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0xF6082E2ADA1C795B(&Global_2600685, 0);
		}
		return 1;
	}
	return 0;
}

int func_791(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_792(2, iParam1);
	return iParam0;
}

void func_792(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

var func_793(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x58478145CAF8429C(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0x35302CD5A5D37EED(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_792(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x91D2F083AE17E209(sParam0);
}

void func_794()
{
	Global_1345111.f_40.f_9 = 4;
}

int func_795(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_794();
	bVar0 = false;
	return func_780(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_796(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_797(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_797(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_55();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x4325D353D7D27B34(iVar0);
		iVar1 = func_282(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x64168D046C8CFB0F(unk_0x11ABC381A58DD5AB(), Global_1345111.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16806 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_793(uParam5, bParam6, &iVar3);
	uVar5 = func_791(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x58478145CAF8429C(sParam8))
	{
		iVar6++;
		if (!unk_0x58478145CAF8429C(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x35302CD5A5D37EED(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xAA4F14DA15DB0B51(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x58478145CAF8429C(sVar2))
	{
		bVar12 = func_799(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_746(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 0))
	{
		func_783();
	}
	func_798();
	func_782();
	func_781();
	return 1;
}

void func_798()
{
	Global_1345111.f_40.f_9 = 3;
}

int func_799(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x507FE690B1271947(&Global_2313, 10);
	iVar0 = 3;
	if (func_747(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_103236.f_27831[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0xF6082E2ADA1C795B(&Global_2313, 1);
			unk_0xF6082E2ADA1C795B(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_800(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
	}
	if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	func_798();
	bVar0 = true;
	if (func_797(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_779(120000);
		return 1;
	}
	return 0;
}

int func_801(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xAA4F14DA15DB0B51(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xAA4F14DA15DB0B51(iParam4, 4))
	{
		bVar0 = func_816(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_807(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xAA4F14DA15DB0B51(iParam4, 3))
		{
			func_806(1);
		}
		if (unk_0xAA4F14DA15DB0B51(iParam4, 5))
		{
			func_805(1);
		}
		func_804();
		func_782();
		func_803();
		func_802();
		return 1;
	}
	return 0;
}

void func_802()
{
	Global_2505523 = 0;
}

void func_803()
{
	Global_1345111.f_57 = 1;
	Global_1345111.f_57.f_1 = 0;
}

void func_804()
{
	Global_1345111.f_40.f_9 = 1;
}

void func_805(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2315, 0);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2315, 0);
	}
}

void func_806(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 20);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 20);
	}
}

int func_807(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_815(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_808(sParam3, iParam4, bParam7);
}

int func_808(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0xE40123A348A5FEDA(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_814();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_356(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_813();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_757();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_812())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
				}
			}
			if (func_811())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_810();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_809();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_814();
	}
	return 0;
}

void func_809()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_810()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_811()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_812()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
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

void func_813()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

void func_814()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_815(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

int func_816(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_815(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 1;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_808(sParam3, iParam4, bParam7);
}

int func_817(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
	}
	if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (func_819(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_818();
		func_804();
		func_782();
		func_803();
		func_802();
		return 1;
	}
	return 0;
}

void func_818()
{
	Global_16763 = 0;
}

bool func_819(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_815(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 1;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 1;
	Global_15799 = 0;
	StringCopy(&Global_15893, sParam5, 24);
	Global_2621441 = 0;
	return func_808(sParam3, iParam4, bParam8);
}

int func_820(var uParam0, char* sParam1, char* sParam2)
{
	if (func_822(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_821();
		func_782();
		func_803();
		return 1;
	}
	return 0;
}

void func_821()
{
	Global_1345111.f_40.f_9 = 2;
}

bool func_822(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_815(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_808(sParam2, iParam3, 0);
}

void func_823()
{
	Global_1345111.f_55 = Global_1345111.f_40.f_1;
	Global_1345111.f_55.f_1 = Global_1345111.f_40.f_10;
}

void func_824()
{
	Global_1345111.f_40 = 1;
}

bool func_825()
{
	return Global_1345111.f_40 == 1;
}

int func_826(int iParam0, int iParam1, int iParam2)
{
	if (!func_827(iParam0))
	{
		return 0;
	}
	if (Global_1345111.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1345111.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_827(int iParam0)
{
	if (!func_828())
	{
		return 0;
	}
	if (!Global_1345111.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_828()
{
	if (Global_1345111.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_829(int iParam0)
{
	if (func_833())
	{
		return 0;
	}
	if (func_832())
	{
		return 0;
	}
	if (func_831(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1761100 || func_484())
	{
		return 0;
	}
	if (!unk_0xAA4F14DA15DB0B51(uParam0, 6))
	{
		if (func_830())
		{
			return 0;
		}
	}
	return 1;
}

bool func_830()
{
	return unk_0x64168D046C8CFB0F(unk_0x11ABC381A58DD5AB(), Global_1361697);
}

int func_831(int iParam0)
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

bool func_832()
{
	return Global_1345111.f_40 == 3;
}

bool func_833()
{
	return func_811();
}

int func_834(int iParam0, int iParam1, int iParam2)
{
	if (!func_832())
	{
		return 0;
	}
	return func_826(iParam0, iParam1, iParam2);
}

int func_835(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0xCAEDBF30E3EA14FC(&cVar0);
}

bool func_836()
{
	return Global_2503090.f_1;
}

int func_837()
{
	if (Global_1345299.f_2)
	{
		return 1;
	}
	return func_838();
}

bool func_838()
{
	return func_833();
}

int func_839(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6235C49EA2DBA22D())
	{
		return 0;
	}
	if (func_844())
	{
		return 0;
	}
	if (!unk_0x0B21CC5276C2CE1B())
	{
		return 0;
	}
	if (func_362())
	{
		return 0;
	}
	if (func_503())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_97(unk_0x0FFED3E94261A832(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_843(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (func_842())
	{
		return 0;
	}
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (unk_0x9E5289F5D782437C())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
	}
	if (Global_1574107)
	{
		return 0;
	}
	if (func_841())
	{
		return 0;
	}
	if (func_840())
	{
		return 0;
	}
	if (func_355())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (Global_2506007)
	{
		return 0;
	}
	return 1;
}

bool func_840()
{
	return Global_2445217.f_571;
}

bool func_841()
{
	return Global_2445217.f_723;
}

bool func_842()
{
	return Global_2434604.f_2791.f_578;
}

int func_843(int iParam0)
{
	if (Global_2422215[iParam0 /*387*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

int func_844()
{
	if (Global_15745 != 0 || unk_0x4FF1AD2B1A443280())
	{
		return 1;
	}
	return 0;
}

void func_845(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
			}
		}
	}
}

char* func_846()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = !func_765(1);
	iVar1 = unk_0x895FB9FE885E36ED(0, 3);
	if (!func_383())
	{
		if (bVar0)
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_ATTAF";
				
				case 1:
					return "EXCAL_ATTAF2";
				
				default:
			}
			return "EXCAL_ATTAF3";
		}
		else
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_ATTAM";
				
				case 1:
					return "EXCAL_ATTAM2";
				
				default:
			}
			return "EXCAL_ATTAM3";
		}
	}
	else if (bVar0)
	{
		switch (iVar1)
		{
			case 0:
				return "EXCAL_STOLEF";
			
			case 1:
				return "EXCAL_STOLF2";
			
			default:
		}
		return "EXCAL_STOLF3";
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "EXCAL_STOLEM";
			
			case 1:
				return "EXCAL_STOLM2";
			
			default:
		}
		return "EXCAL_STOLM3";
	}
	return "";
}

void func_847(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_201(unk_0x0FFED3E94261A832());
	if (iParam2 || func_401(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1773272 = iVar0;
		if (func_491(iVar0))
		{
			Global_1773272.f_1 = 4;
		}
		else if (func_490(iVar0))
		{
			Global_1773272.f_1 = 5;
		}
		else if (func_303(iVar0, 0))
		{
			Global_1773272.f_1 = 2;
			if (func_538(iVar0))
			{
				Global_1773272.f_1 = 3;
			}
		}
		else
		{
			Global_1773272.f_1 = 1;
		}
		if (func_556() != func_55())
		{
			Global_1773272.f_4 = func_708(func_556());
			Global_1773272.f_5 = func_707(func_556());
		}
		if (func_332() != func_55())
		{
			func_555(func_332(), &(Global_1773272.f_6), &(Global_1773272.f_7));
		}
		Global_1773272.f_9 = unk_0xDA84A1E29323722E();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1773272.f_27 = 1;
			Global_1773272.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1773272.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1773272.f_40 = func_649(iParam1);
			Global_1773272.f_41 = func_872();
			Global_1773272.f_42 = func_650(unk_0x0FFED3E94261A832(), iParam1);
			Global_1773272.f_44 = func_703(unk_0x0FFED3E94261A832(), iParam1);
		}
	}
	else if (func_488(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1773387 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1773387 = iParam0 + 1;
		}
		else
		{
			Global_1773387 = func_871(unk_0x0FFED3E94261A832());
		}
		switch (iVar0)
		{
			case 225:
				if (func_870(unk_0x0FFED3E94261A832()) == 0)
				{
					Global_1773387.f_1 = 0;
				}
				else
				{
					Global_1773387.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1773387.f_1 = 2;
				break;
			
			case 227:
				Global_1773387.f_1 = 3;
				break;
		}
		Global_1773387.f_21 = 1;
		Global_1773387.f_22 = 1;
		if (func_556() != func_55())
		{
			Global_1773387.f_4 = func_708(func_556());
			Global_1773387.f_5 = func_707(func_556());
		}
		if (func_332() != func_55())
		{
			func_555(func_332(), &(Global_1773387.f_4), &(Global_1773387.f_5));
		}
		Global_1773387.f_8 = unk_0xDA84A1E29323722E();
		if (iParam0 != -1)
		{
			Global_1773387.f_20 = iParam0;
		}
	}
	else if (func_405(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1773325 = iVar0;
		Global_1773272.f_1 = 1;
		if (func_556() != func_55())
		{
			Global_1773325.f_4 = func_708(func_556());
			Global_1773325.f_5 = func_707(func_556());
		}
		if (func_332() != func_55())
		{
			func_555(func_332(), &(Global_1773325.f_6), &(Global_1773325.f_7));
		}
		Global_1773325.f_9 = unk_0xDA84A1E29323722E();
		if (iParam0 != -1)
		{
			Global_1773325.f_21 = iParam0;
		}
	}
	else
	{
		if (func_556() != func_55())
		{
			Global_1773254 = func_708(func_556());
			Global_1773254.f_1 = func_707(func_556());
		}
		Global_1773254.f_5 = unk_0xDA84A1E29323722E();
		Global_1773254.f_13 = func_869();
		Global_1773254.f_15 = 0;
		if (func_554(1))
		{
			if (func_332() == func_556())
			{
				Global_1773254.f_15 = 1;
			}
		}
		if (func_868())
		{
			Global_1773387.f_28 = 1;
		}
		if ((func_867() || func_866()) || func_865())
		{
			Global_1773387.f_30 = 1;
		}
		if (func_863(func_864(joaat("trailersmall2"))))
		{
			Global_1773387.f_32 = 1;
		}
		if (func_851(func_862(joaat("caddy"))))
		{
			Global_1773387.f_31 = 1;
		}
		if (func_693(unk_0x0FFED3E94261A832()) || func_692(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_29 = 1;
		}
		if (func_688(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_33 = 1;
			Global_1773387.f_34 = 1;
		}
		if (func_689(unk_0x0FFED3E94261A832()))
		{
			Global_1773387.f_36 = 1;
		}
		if (func_686(0, unk_0x0FFED3E94261A832()) == 1)
		{
			Global_1773387.f_35 = 1;
		}
		if (func_850(unk_0x0FFED3E94261A832(), 3, &uVar1))
		{
			Global_1773387.f_37 = 1;
		}
		if (func_850(unk_0x0FFED3E94261A832(), 7, &uVar1))
		{
			Global_1773387.f_38 = 1;
		}
		if (func_849(unk_0x0FFED3E94261A832()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_848(unk_0x0FFED3E94261A832(), iVar2);
				if (func_646(unk_0x0FFED3E94261A832(), iVar3, 0))
				{
					Global_1773387.f_39 = 1;
				}
				if (func_646(unk_0x0FFED3E94261A832(), iVar3, 2))
				{
					Global_1773387.f_40 = 1;
				}
				if (func_646(unk_0x0FFED3E94261A832(), iVar3, 1))
				{
					Global_1773387.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_848(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_639(Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/]))
	{
		uVar0 = Global_1592456[iParam0 /*635*/].f_259.f_152[iParam1 /*12*/];
	}
	return uVar0;
}

int func_849(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_850(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_55())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_686(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_851(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_861(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_859(11));
		func_858(iVar1, &iVar0, 1);
		iVar2 = func_861(func_853(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_458(func_852(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_852(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1625;
				
				case 1:
					return 1632;
				
				case 2:
					return 1639;
				
				case 3:
					return 1646;
				
				case 4:
					return 1653;
				
				case 5:
					return 1660;
				
				case 6:
					return 1667;
				
				case 7:
					return 1674;
				
				case 8:
					return 1681;
				
				case 9:
					return 1688;
				
				case 10:
					return 1695;
				
				case 11:
					return 1701;
				
				case 12:
					return 1707;
				
				case 13:
					return 1713;
				
				case 14:
					return 1790;
				
				case 15:
					return 1797;
				
				case 16:
					return 1804;
				
				case 17:
					return 1811;
				
				case 18:
					return 1818;
				
				case 19:
					return 1825;
				
				case 20:
					return 1832;
				
				case 21:
					return 1839;
				
				case 22:
					return 1846;
				
				case 23:
					return 1853;
				
				case 24:
					return 1859;
				
				case 25:
					return 1865;
				
				case 26:
					return 2160;
				
				case 27:
					return 2167;
				
				case 28:
					return 2174;
				
				case 29:
					return 2181;
				
				case 30:
					return 2188;
				
				case 31:
					return 2195;
				
				case 32:
					return 2202;
				
				case 33:
					return 2209;
				
				case 34:
					return 2216;
				
				case 35:
					return 2223;
				
				case 36:
					return 2230;
				
				case 37:
					return 2236;
				
				case 38:
					return 2242;
				
				case 39:
					return 2813;
				
				case 40:
					return 2820;
				
				case 41:
					return 2827;
				
				case 42:
					return 2834;
				
				case 43:
					return 2841;
				
				case 44:
					return 2848;
				
				case 45:
					return 2855;
				
				case 46:
					return 2862;
				
				case 47:
					return 2869;
				
				case 48:
					return 2876;
				
				case 49:
					return 2883;
				
				case 50:
					return 2889;
				
				case 51:
					return 2895;
				
				case 52:
					return 2937;
				
				case 53:
					return 2944;
				
				case 54:
					return 2951;
				
				case 55:
					return 2958;
				
				case 56:
					return 2965;
				
				case 57:
					return 2972;
				
				case 58:
					return 2979;
				
				case 59:
					return 2986;
				
				case 60:
					return 2993;
				
				case 61:
					return 3000;
				
				case 62:
					return 3007;
				
				case 63:
					return 3013;
				
				case 64:
					return 3019;
				
				case 65:
					return 3220;
				
				case 66:
					return 3228;
				
				case 67:
					return 3236;
				
				case 68:
					return 3244;
				
				case 69:
					return 3252;
				
				case 70:
					return 3260;
				
				case 71:
					return 3268;
				
				case 72:
					return 3276;
				
				case 73:
					return 3284;
				
				case 74:
					return 3292;
				
				case 75:
					return 3300;
				
				case 76:
					return 3308;
				
				case 77:
					return 3316;
				
				case 78:
					return 3324;
				
				case joaat("mpsv_lp0_31"):
					return 3332;
				
				case 80:
					return 3340;
				
				case 81:
					return 3348;
				
				case 82:
					return 3356;
				
				case 83:
					return 3364;
				
				case 84:
					return 3372;
				
				case 85:
					return 3380;
				
				case 86:
					return 3387;
				
				case 87:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4006;
				
				case 89:
					return 4014;
				
				case 90:
					return 4022;
				
				case 91:
					return 4030;
				
				case 92:
					return 4038;
				
				case 93:
					return 4046;
				
				case 94:
					return 4054;
				
				case 95:
					return 4062;
				
				case 96:
					return 4070;
				
				case 97:
					return 4078;
				
				case 98:
					return 4086;
				
				case 99:
					return 4094;
				
				case 100:
					return 4102;
				
				case 101:
					return 4110;
				
				case 102:
					return 4118;
				
				case 103:
					return 4126;
				
				case 104:
					return 4134;
				
				case 105:
					return 4142;
				
				case 106:
					return 4150;
				
				case 107:
					return 4158;
				
				case 108:
					return 4166;
				
				case 109:
					return 4174;
				
				case 110:
					return 4182;
				
				case 111:
					return 4190;
				
				case 112:
					return 4198;
				
				case 113:
					return 4206;
				
				case 114:
					return 4214;
				
				case 115:
					return 4222;
				
				case 116:
					return 4230;
				
				case 117:
					return 4238;
				
				case 118:
					return 4246;
				
				case 119:
					return 4254;
				
				case 120:
					return 4262;
				
				case 121:
					return 4270;
				
				case 122:
					return 4278;
				
				case 123:
					return 4286;
				
				case 124:
					return 4294;
				
				case 125:
					return 4302;
				
				case 126:
					return 4310;
				
				case 127:
					return 4318;
				
				case 128:
					return 4326;
				
				case 129:
					return 4334;
				
				case 130:
					return 4342;
				
				case 131:
					return 4350;
				
				case 132:
					return 4358;
				
				case 133:
					return 4366;
				
				case 134:
					return 4374;
				
				case 135:
					return 4382;
				
				case 136:
					return 4390;
				
				case 137:
					return 4398;
				
				case 138:
					return 4406;
				
				case 139:
					return 4414;
				
				case 140:
					return 4422;
				
				case 141:
					return 4430;
				
				case 142:
					return 4438;
				
				case 143:
					return 4446;
				
				case 144:
					return 4454;
				
				case 145:
					return 4462;
				
				case 146:
					return 4470;
				
				case 147:
					return 4478;
				
				case 148:
					return 4486;
				
				case 149:
					return 4494;
				
				case 150:
					return 4502;
				
				case 151:
					return 4510;
				
				case 152:
					return 4518;
				
				case 153:
					return 4526;
				
				case 154:
					return 4534;
				
				case 155:
					return 4542;
				
				case 156:
					return 4550;
				
				case 157:
					return 4558;
				
				case 158:
					return 5451;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1626;
				
				case 1:
					return 1633;
				
				case 2:
					return 1640;
				
				case 3:
					return 1647;
				
				case 4:
					return 1654;
				
				case 5:
					return 1661;
				
				case 6:
					return 1668;
				
				case 7:
					return 1675;
				
				case 8:
					return 1682;
				
				case 9:
					return 1689;
				
				case 10:
					return 1696;
				
				case 11:
					return 1702;
				
				case 12:
					return 1708;
				
				case 13:
					return 1714;
				
				case 14:
					return 1791;
				
				case 15:
					return 1798;
				
				case 16:
					return 1805;
				
				case 17:
					return 1812;
				
				case 18:
					return 1819;
				
				case 19:
					return 1826;
				
				case 20:
					return 1833;
				
				case 21:
					return 1840;
				
				case 22:
					return 1847;
				
				case 23:
					return 1854;
				
				case 24:
					return 1860;
				
				case 25:
					return 1866;
				
				case 26:
					return 2161;
				
				case 27:
					return 2168;
				
				case 28:
					return 2175;
				
				case 29:
					return 2182;
				
				case 30:
					return 2189;
				
				case 31:
					return 2196;
				
				case 32:
					return 2203;
				
				case 33:
					return 2210;
				
				case 34:
					return 2217;
				
				case 35:
					return 2224;
				
				case 36:
					return 2231;
				
				case 37:
					return 2237;
				
				case 38:
					return 2243;
				
				case 39:
					return 2814;
				
				case 40:
					return 2821;
				
				case 41:
					return 2828;
				
				case 42:
					return 2835;
				
				case 43:
					return 2842;
				
				case 44:
					return 2849;
				
				case 45:
					return 2856;
				
				case 46:
					return 2863;
				
				case 47:
					return 2870;
				
				case 48:
					return 2877;
				
				case 49:
					return 2884;
				
				case 50:
					return 2890;
				
				case 51:
					return 2896;
				
				case 52:
					return 2938;
				
				case 53:
					return 2945;
				
				case 54:
					return 2952;
				
				case 55:
					return 2959;
				
				case 56:
					return 2966;
				
				case 57:
					return 2973;
				
				case 58:
					return 2980;
				
				case 59:
					return 2987;
				
				case 60:
					return 2994;
				
				case 61:
					return 3001;
				
				case 62:
					return 3008;
				
				case 63:
					return 3014;
				
				case 64:
					return 3020;
				
				case 65:
					return 3221;
				
				case 66:
					return 3229;
				
				case 67:
					return 3237;
				
				case 68:
					return 3245;
				
				case 69:
					return 3253;
				
				case 70:
					return 3261;
				
				case 71:
					return 3269;
				
				case 72:
					return 3277;
				
				case 73:
					return 3285;
				
				case 74:
					return 3293;
				
				case 75:
					return 3301;
				
				case 76:
					return 3309;
				
				case 77:
					return 3317;
				
				case 78:
					return 3325;
				
				case joaat("mpsv_lp0_31"):
					return 3333;
				
				case 80:
					return 3341;
				
				case 81:
					return 3349;
				
				case 82:
					return 3357;
				
				case 83:
					return 3365;
				
				case 84:
					return 3373;
				
				case 85:
					return 3381;
				
				case 86:
					return 3388;
				
				case 87:
					return 3395;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4007;
				
				case 89:
					return 4015;
				
				case 90:
					return 4023;
				
				case 91:
					return 4031;
				
				case 92:
					return 4039;
				
				case 93:
					return 4047;
				
				case 94:
					return 4055;
				
				case 95:
					return 4063;
				
				case 96:
					return 4071;
				
				case 97:
					return 4079;
				
				case 98:
					return 4087;
				
				case 99:
					return 4095;
				
				case 100:
					return 4103;
				
				case 101:
					return 4111;
				
				case 102:
					return 4119;
				
				case 103:
					return 4127;
				
				case 104:
					return 4135;
				
				case 105:
					return 4143;
				
				case 106:
					return 4151;
				
				case 107:
					return 4159;
				
				case 108:
					return 4167;
				
				case 109:
					return 4175;
				
				case 110:
					return 4183;
				
				case 111:
					return 4191;
				
				case 112:
					return 4199;
				
				case 113:
					return 4207;
				
				case 114:
					return 4215;
				
				case 115:
					return 4223;
				
				case 116:
					return 4231;
				
				case 117:
					return 4239;
				
				case 118:
					return 4247;
				
				case 119:
					return 4255;
				
				case 120:
					return 4263;
				
				case 121:
					return 4271;
				
				case 122:
					return 4279;
				
				case 123:
					return 4287;
				
				case 124:
					return 4295;
				
				case 125:
					return 4303;
				
				case 126:
					return 4311;
				
				case 127:
					return 4319;
				
				case 128:
					return 4327;
				
				case 129:
					return 4335;
				
				case 130:
					return 4343;
				
				case 131:
					return 4351;
				
				case 132:
					return 4359;
				
				case 133:
					return 4367;
				
				case 134:
					return 4375;
				
				case 135:
					return 4383;
				
				case 136:
					return 4391;
				
				case 137:
					return 4399;
				
				case 138:
					return 4407;
				
				case 139:
					return 4415;
				
				case 140:
					return 4423;
				
				case 141:
					return 4431;
				
				case 142:
					return 4439;
				
				case 143:
					return 4447;
				
				case 144:
					return 4455;
				
				case 145:
					return 4463;
				
				case 146:
					return 4471;
				
				case 147:
					return 4479;
				
				case 148:
					return 4487;
				
				case 149:
					return 4495;
				
				case 150:
					return 4503;
				
				case 151:
					return 4511;
				
				case 152:
					return 4519;
				
				case 153:
					return 4527;
				
				case 154:
					return 4535;
				
				case 155:
					return 4543;
				
				case 156:
					return 4551;
				
				case 157:
					return 4559;
				
				case 158:
					return 5452;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1627;
				
				case 1:
					return 1634;
				
				case 2:
					return 1641;
				
				case 3:
					return 1648;
				
				case 4:
					return 1655;
				
				case 5:
					return 1662;
				
				case 6:
					return 1669;
				
				case 7:
					return 1676;
				
				case 8:
					return 1683;
				
				case 9:
					return 1690;
				
				case 10:
					return 1697;
				
				case 11:
					return 1703;
				
				case 12:
					return 1709;
				
				case 13:
					return 1715;
				
				case 14:
					return 1792;
				
				case 15:
					return 1799;
				
				case 16:
					return 1806;
				
				case 17:
					return 1813;
				
				case 18:
					return 1820;
				
				case 19:
					return 1827;
				
				case 20:
					return 1834;
				
				case 21:
					return 1841;
				
				case 22:
					return 1848;
				
				case 23:
					return 1855;
				
				case 24:
					return 1861;
				
				case 25:
					return 1867;
				
				case 26:
					return 2162;
				
				case 27:
					return 2169;
				
				case 28:
					return 2176;
				
				case 29:
					return 2183;
				
				case 30:
					return 2190;
				
				case 31:
					return 2197;
				
				case 32:
					return 2204;
				
				case 33:
					return 2211;
				
				case 34:
					return 2218;
				
				case 35:
					return 2225;
				
				case 36:
					return 2232;
				
				case 37:
					return 2238;
				
				case 38:
					return 2244;
				
				case 39:
					return 2815;
				
				case 40:
					return 2822;
				
				case 41:
					return 2829;
				
				case 42:
					return 2836;
				
				case 43:
					return 2843;
				
				case 44:
					return 2850;
				
				case 45:
					return 2857;
				
				case 46:
					return 2864;
				
				case 47:
					return 2871;
				
				case 48:
					return 2878;
				
				case 49:
					return 2885;
				
				case 50:
					return 2891;
				
				case 51:
					return 2897;
				
				case 52:
					return 2939;
				
				case 53:
					return 2946;
				
				case 54:
					return 2953;
				
				case 55:
					return 2960;
				
				case 56:
					return 2967;
				
				case 57:
					return 2974;
				
				case 58:
					return 2981;
				
				case 59:
					return 2988;
				
				case 60:
					return 2995;
				
				case 61:
					return 3002;
				
				case 62:
					return 3009;
				
				case 63:
					return 3015;
				
				case 64:
					return 3021;
				
				case 65:
					return 3222;
				
				case 66:
					return 3230;
				
				case 67:
					return 3238;
				
				case 68:
					return 3246;
				
				case 69:
					return 3254;
				
				case 70:
					return 3262;
				
				case 71:
					return 3270;
				
				case 72:
					return 3278;
				
				case 73:
					return 3286;
				
				case 74:
					return 3294;
				
				case 75:
					return 3302;
				
				case 76:
					return 3310;
				
				case 77:
					return 3318;
				
				case 78:
					return 3326;
				
				case joaat("mpsv_lp0_31"):
					return 3334;
				
				case 80:
					return 3342;
				
				case 81:
					return 3350;
				
				case 82:
					return 3358;
				
				case 83:
					return 3366;
				
				case 84:
					return 3374;
				
				case 85:
					return 3382;
				
				case 86:
					return 3389;
				
				case 87:
					return 3396;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4008;
				
				case 89:
					return 4016;
				
				case 90:
					return 4024;
				
				case 91:
					return 4032;
				
				case 92:
					return 4040;
				
				case 93:
					return 4048;
				
				case 94:
					return 4056;
				
				case 95:
					return 4064;
				
				case 96:
					return 4072;
				
				case 97:
					return 4080;
				
				case 98:
					return 4088;
				
				case 99:
					return 4096;
				
				case 100:
					return 4104;
				
				case 101:
					return 4112;
				
				case 102:
					return 4120;
				
				case 103:
					return 4128;
				
				case 104:
					return 4136;
				
				case 105:
					return 4144;
				
				case 106:
					return 4152;
				
				case 107:
					return 4160;
				
				case 108:
					return 4168;
				
				case 109:
					return 4176;
				
				case 110:
					return 4184;
				
				case 111:
					return 4192;
				
				case 112:
					return 4200;
				
				case 113:
					return 4208;
				
				case 114:
					return 4216;
				
				case 115:
					return 4224;
				
				case 116:
					return 4232;
				
				case 117:
					return 4240;
				
				case 118:
					return 4248;
				
				case 119:
					return 4256;
				
				case 120:
					return 4264;
				
				case 121:
					return 4272;
				
				case 122:
					return 4280;
				
				case 123:
					return 4288;
				
				case 124:
					return 4296;
				
				case 125:
					return 4304;
				
				case 126:
					return 4312;
				
				case 127:
					return 4320;
				
				case 128:
					return 4328;
				
				case 129:
					return 4336;
				
				case 130:
					return 4344;
				
				case 131:
					return 4352;
				
				case 132:
					return 4360;
				
				case 133:
					return 4368;
				
				case 134:
					return 4376;
				
				case 135:
					return 4384;
				
				case 136:
					return 4392;
				
				case 137:
					return 4400;
				
				case 138:
					return 4408;
				
				case 139:
					return 4416;
				
				case 140:
					return 4424;
				
				case 141:
					return 4432;
				
				case 142:
					return 4440;
				
				case 143:
					return 4448;
				
				case 144:
					return 4456;
				
				case 145:
					return 4464;
				
				case 146:
					return 4472;
				
				case 147:
					return 4480;
				
				case 148:
					return 4488;
				
				case 149:
					return 4496;
				
				case 150:
					return 4504;
				
				case 151:
					return 4512;
				
				case 152:
					return 4520;
				
				case 153:
					return 4528;
				
				case 154:
					return 4536;
				
				case 155:
					return 4544;
				
				case 156:
					return 4552;
				
				case 157:
					return 4560;
				
				case 158:
					return 5453;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1628;
				
				case 1:
					return 1635;
				
				case 2:
					return 1642;
				
				case 3:
					return 1649;
				
				case 4:
					return 1656;
				
				case 5:
					return 1663;
				
				case 6:
					return 1670;
				
				case 7:
					return 1677;
				
				case 8:
					return 1684;
				
				case 9:
					return 1691;
				
				case 10:
					return 1698;
				
				case 11:
					return 1704;
				
				case 12:
					return 1710;
				
				case 13:
					return 1716;
				
				case 14:
					return 1793;
				
				case 15:
					return 1800;
				
				case 16:
					return 1807;
				
				case 17:
					return 1814;
				
				case 18:
					return 1821;
				
				case 19:
					return 1828;
				
				case 20:
					return 1835;
				
				case 21:
					return 1842;
				
				case 22:
					return 1849;
				
				case 23:
					return 1856;
				
				case 24:
					return 1862;
				
				case 25:
					return 1868;
				
				case 26:
					return 2163;
				
				case 27:
					return 2170;
				
				case 28:
					return 2177;
				
				case 29:
					return 2184;
				
				case 30:
					return 2191;
				
				case 31:
					return 2198;
				
				case 32:
					return 2205;
				
				case 33:
					return 2212;
				
				case 34:
					return 2219;
				
				case 35:
					return 2226;
				
				case 36:
					return 2233;
				
				case 37:
					return 2239;
				
				case 38:
					return 2245;
				
				case 39:
					return 2816;
				
				case 40:
					return 2823;
				
				case 41:
					return 2830;
				
				case 42:
					return 2837;
				
				case 43:
					return 2844;
				
				case 44:
					return 2851;
				
				case 45:
					return 2858;
				
				case 46:
					return 2865;
				
				case 47:
					return 2872;
				
				case 48:
					return 2879;
				
				case 49:
					return 2886;
				
				case 50:
					return 2892;
				
				case 51:
					return 2898;
				
				case 52:
					return 2940;
				
				case 53:
					return 2947;
				
				case 54:
					return 2954;
				
				case 55:
					return 2961;
				
				case 56:
					return 2968;
				
				case 57:
					return 2975;
				
				case 58:
					return 2982;
				
				case 59:
					return 2989;
				
				case 60:
					return 2996;
				
				case 61:
					return 3003;
				
				case 62:
					return 3010;
				
				case 63:
					return 3016;
				
				case 64:
					return 3022;
				
				case 65:
					return 3223;
				
				case 66:
					return 3231;
				
				case 67:
					return 3239;
				
				case 68:
					return 3247;
				
				case 69:
					return 3255;
				
				case 70:
					return 3263;
				
				case 71:
					return 3271;
				
				case 72:
					return 3279;
				
				case 73:
					return 3287;
				
				case 74:
					return 3295;
				
				case 75:
					return 3303;
				
				case 76:
					return 3311;
				
				case 77:
					return 3319;
				
				case 78:
					return 3327;
				
				case joaat("mpsv_lp0_31"):
					return 3335;
				
				case 80:
					return 3343;
				
				case 81:
					return 3351;
				
				case 82:
					return 3359;
				
				case 83:
					return 3367;
				
				case 84:
					return 3375;
				
				case 85:
					return 3383;
				
				case 86:
					return 3390;
				
				case 87:
					return 3397;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4009;
				
				case 89:
					return 4017;
				
				case 90:
					return 4025;
				
				case 91:
					return 4033;
				
				case 92:
					return 4041;
				
				case 93:
					return 4049;
				
				case 94:
					return 4057;
				
				case 95:
					return 4065;
				
				case 96:
					return 4073;
				
				case 97:
					return 4081;
				
				case 98:
					return 4089;
				
				case 99:
					return 4097;
				
				case 100:
					return 4105;
				
				case 101:
					return 4113;
				
				case 102:
					return 4121;
				
				case 103:
					return 4129;
				
				case 104:
					return 4137;
				
				case 105:
					return 4145;
				
				case 106:
					return 4153;
				
				case 107:
					return 4161;
				
				case 108:
					return 4169;
				
				case 109:
					return 4177;
				
				case 110:
					return 4185;
				
				case 111:
					return 4193;
				
				case 112:
					return 4201;
				
				case 113:
					return 4209;
				
				case 114:
					return 4217;
				
				case 115:
					return 4225;
				
				case 116:
					return 4233;
				
				case 117:
					return 4241;
				
				case 118:
					return 4249;
				
				case 119:
					return 4257;
				
				case 120:
					return 4265;
				
				case 121:
					return 4273;
				
				case 122:
					return 4281;
				
				case 123:
					return 4289;
				
				case 124:
					return 4297;
				
				case 125:
					return 4305;
				
				case 126:
					return 4313;
				
				case 127:
					return 4321;
				
				case 128:
					return 4329;
				
				case 129:
					return 4337;
				
				case 130:
					return 4345;
				
				case 131:
					return 4353;
				
				case 132:
					return 4361;
				
				case 133:
					return 4369;
				
				case 134:
					return 4377;
				
				case 135:
					return 4385;
				
				case 136:
					return 4393;
				
				case 137:
					return 4401;
				
				case 138:
					return 4409;
				
				case 139:
					return 4417;
				
				case 140:
					return 4425;
				
				case 141:
					return 4433;
				
				case 142:
					return 4441;
				
				case 143:
					return 4449;
				
				case 144:
					return 4457;
				
				case 145:
					return 4465;
				
				case 146:
					return 4473;
				
				case 147:
					return 4481;
				
				case 148:
					return 4489;
				
				case 149:
					return 4497;
				
				case 150:
					return 4505;
				
				case 151:
					return 4513;
				
				case 152:
					return 4521;
				
				case 153:
					return 4529;
				
				case 154:
					return 4537;
				
				case 155:
					return 4545;
				
				case 156:
					return 4553;
				
				case 157:
					return 4561;
				
				case 158:
					return 5454;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1794;
				
				case 15:
					return 1801;
				
				case 16:
					return 1808;
				
				case 17:
					return 1815;
				
				case 18:
					return 1822;
				
				case 19:
					return 1829;
				
				case 20:
					return 1836;
				
				case 21:
					return 1843;
				
				case 22:
					return 1850;
				
				case 23:
					return 1857;
				
				case 24:
					return 1863;
				
				case 25:
					return 1869;
				
				case 26:
					return 2164;
				
				case 27:
					return 2171;
				
				case 28:
					return 2178;
				
				case 29:
					return 2185;
				
				case 30:
					return 2192;
				
				case 31:
					return 2199;
				
				case 32:
					return 2206;
				
				case 33:
					return 2213;
				
				case 34:
					return 2220;
				
				case 35:
					return 2227;
				
				case 36:
					return 2234;
				
				case 37:
					return 2240;
				
				case 38:
					return 2246;
				
				case 39:
					return 2817;
				
				case 40:
					return 2824;
				
				case 41:
					return 2831;
				
				case 42:
					return 2838;
				
				case 43:
					return 2845;
				
				case 44:
					return 2852;
				
				case 45:
					return 2859;
				
				case 46:
					return 2866;
				
				case 47:
					return 2873;
				
				case 48:
					return 2880;
				
				case 49:
					return 2887;
				
				case 50:
					return 2893;
				
				case 51:
					return 2899;
				
				case 52:
					return 2941;
				
				case 53:
					return 2948;
				
				case 54:
					return 2955;
				
				case 55:
					return 2962;
				
				case 56:
					return 2969;
				
				case 57:
					return 2976;
				
				case 58:
					return 2983;
				
				case 59:
					return 2990;
				
				case 60:
					return 2997;
				
				case 61:
					return 3004;
				
				case 62:
					return 3011;
				
				case 63:
					return 3017;
				
				case 64:
					return 3023;
				
				case 65:
					return 3224;
				
				case 66:
					return 3232;
				
				case 67:
					return 3240;
				
				case 68:
					return 3248;
				
				case 69:
					return 3256;
				
				case 70:
					return 3264;
				
				case 71:
					return 3272;
				
				case 72:
					return 3280;
				
				case 73:
					return 3288;
				
				case 74:
					return 3296;
				
				case 75:
					return 3304;
				
				case 76:
					return 3312;
				
				case 77:
					return 3320;
				
				case 78:
					return 3328;
				
				case joaat("mpsv_lp0_31"):
					return 3336;
				
				case 80:
					return 3344;
				
				case 81:
					return 3352;
				
				case 82:
					return 3360;
				
				case 83:
					return 3368;
				
				case 84:
					return 3376;
				
				case 85:
					return 3384;
				
				case 86:
					return 3391;
				
				case 87:
					return 3398;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4010;
				
				case 89:
					return 4018;
				
				case 90:
					return 4026;
				
				case 91:
					return 4034;
				
				case 92:
					return 4042;
				
				case 93:
					return 4050;
				
				case 94:
					return 4058;
				
				case 95:
					return 4066;
				
				case 96:
					return 4074;
				
				case 97:
					return 4082;
				
				case 98:
					return 4090;
				
				case 99:
					return 4098;
				
				case 100:
					return 4106;
				
				case 101:
					return 4114;
				
				case 102:
					return 4122;
				
				case 103:
					return 4130;
				
				case 104:
					return 4138;
				
				case 105:
					return 4146;
				
				case 106:
					return 4154;
				
				case 107:
					return 4162;
				
				case 108:
					return 4170;
				
				case 109:
					return 4178;
				
				case 110:
					return 4186;
				
				case 111:
					return 4194;
				
				case 112:
					return 4202;
				
				case 113:
					return 4210;
				
				case 114:
					return 4218;
				
				case 115:
					return 4226;
				
				case 116:
					return 4234;
				
				case 117:
					return 4242;
				
				case 118:
					return 4250;
				
				case 119:
					return 4258;
				
				case 120:
					return 4266;
				
				case 121:
					return 4274;
				
				case 122:
					return 4282;
				
				case 123:
					return 4290;
				
				case 124:
					return 4298;
				
				case 125:
					return 4306;
				
				case 126:
					return 4314;
				
				case 127:
					return 4322;
				
				case 128:
					return 4330;
				
				case 129:
					return 4338;
				
				case 130:
					return 4346;
				
				case 131:
					return 4354;
				
				case 132:
					return 4362;
				
				case 133:
					return 4370;
				
				case 134:
					return 4378;
				
				case 135:
					return 4386;
				
				case 136:
					return 4394;
				
				case 137:
					return 4402;
				
				case 138:
					return 4410;
				
				case 139:
					return 4418;
				
				case 140:
					return 4426;
				
				case 141:
					return 4434;
				
				case 142:
					return 4442;
				
				case 143:
					return 4450;
				
				case 144:
					return 4458;
				
				case 145:
					return 4466;
				
				case 146:
					return 4474;
				
				case 147:
					return 4482;
				
				case 148:
					return 4490;
				
				case 149:
					return 4498;
				
				case 150:
					return 4506;
				
				case 151:
					return 4514;
				
				case 152:
					return 4522;
				
				case 153:
					return 4530;
				
				case 154:
					return 4538;
				
				case 155:
					return 4546;
				
				case 156:
					return 4554;
				
				case 157:
					return 4562;
				
				case 158:
					return 5455;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 13:
					return 1719;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 39:
					return 2819;
				
				case 40:
					return 2826;
				
				case 41:
					return 2833;
				
				case 42:
					return 2840;
				
				case 43:
					return 2847;
				
				case 44:
					return 2854;
				
				case 45:
					return 2861;
				
				case 46:
					return 2868;
				
				case 47:
					return 2875;
				
				case 48:
					return 2882;
				
				case 52:
					return 2943;
				
				case 53:
					return 2950;
				
				case 54:
					return 2957;
				
				case 55:
					return 2964;
				
				case 56:
					return 2971;
				
				case 57:
					return 2978;
				
				case 58:
					return 2985;
				
				case 59:
					return 2992;
				
				case 60:
					return 2999;
				
				case 61:
					return 3006;
				
				case 65:
					return 3227;
				
				case 66:
					return 3235;
				
				case 67:
					return 3243;
				
				case 68:
					return 3251;
				
				case 69:
					return 3259;
				
				case 70:
					return 3267;
				
				case 71:
					return 3275;
				
				case 72:
					return 3283;
				
				case 73:
					return 3291;
				
				case 74:
					return 3299;
				
				case 75:
					return 3307;
				
				case 76:
					return 3315;
				
				case 77:
					return 3323;
				
				case 78:
					return 3331;
				
				case joaat("mpsv_lp0_31"):
					return 3339;
				
				case 80:
					return 3347;
				
				case 81:
					return 3355;
				
				case 82:
					return 3363;
				
				case 83:
					return 3371;
				
				case 84:
					return 3379;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4013;
				
				case 89:
					return 4021;
				
				case 90:
					return 4029;
				
				case 91:
					return 4037;
				
				case 92:
					return 4045;
				
				case 93:
					return 4053;
				
				case 94:
					return 4061;
				
				case 95:
					return 4069;
				
				case 96:
					return 4077;
				
				case 97:
					return 4085;
				
				case 98:
					return 4093;
				
				case 99:
					return 4101;
				
				case 100:
					return 4109;
				
				case 101:
					return 4117;
				
				case 102:
					return 4125;
				
				case 103:
					return 4133;
				
				case 104:
					return 4141;
				
				case 105:
					return 4149;
				
				case 106:
					return 4157;
				
				case 107:
					return 4165;
				
				case 108:
					return 4173;
				
				case 109:
					return 4181;
				
				case 110:
					return 4189;
				
				case 111:
					return 4197;
				
				case 112:
					return 4205;
				
				case 113:
					return 4213;
				
				case 114:
					return 4221;
				
				case 115:
					return 4229;
				
				case 116:
					return 4237;
				
				case 117:
					return 4245;
				
				case 118:
					return 4253;
				
				case 119:
					return 4261;
				
				case 120:
					return 4269;
				
				case 121:
					return 4277;
				
				case 122:
					return 4285;
				
				case 123:
					return 4293;
				
				case 124:
					return 4301;
				
				case 125:
					return 4309;
				
				case 126:
					return 4317;
				
				case 127:
					return 4325;
				
				case 128:
					return 4333;
				
				case 129:
					return 4341;
				
				case 130:
					return 4349;
				
				case 131:
					return 4357;
				
				case 132:
					return 4365;
				
				case 133:
					return 4373;
				
				case 134:
					return 4381;
				
				case 135:
					return 4389;
				
				case 136:
					return 4397;
				
				case 137:
					return 4405;
				
				case 138:
					return 4413;
				
				case 139:
					return 4421;
				
				case 140:
					return 4429;
				
				case 141:
					return 4437;
				
				case 142:
					return 4445;
				
				case 143:
					return 4453;
				
				case 144:
					return 4461;
				
				case 145:
					return 4469;
				
				case 146:
					return 4477;
				
				case 147:
					return 4485;
				
				case 148:
					return 4493;
				
				case 149:
					return 4501;
				
				case 150:
					return 4509;
				
				case 151:
					return 4517;
				
				case 152:
					return 4525;
				
				case 153:
					return 4533;
				
				case 154:
					return 4541;
				
				case 155:
					return 4549;
				
				case 156:
					return 4557;
				
				case 157:
					return 4565;
				
				case 158:
					return 5458;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2818;
				
				case 40:
					return 2825;
				
				case 41:
					return 2832;
				
				case 42:
					return 2839;
				
				case 43:
					return 2846;
				
				case 44:
					return 2853;
				
				case 45:
					return 2860;
				
				case 46:
					return 2867;
				
				case 47:
					return 2874;
				
				case 48:
					return 2881;
				
				case 49:
					return 2888;
				
				case 50:
					return 2894;
				
				case 51:
					return 2900;
				
				case 52:
					return 2942;
				
				case 53:
					return 2949;
				
				case 54:
					return 2956;
				
				case 55:
					return 2963;
				
				case 56:
					return 2970;
				
				case 57:
					return 2977;
				
				case 58:
					return 2984;
				
				case 59:
					return 2991;
				
				case 60:
					return 2998;
				
				case 61:
					return 3005;
				
				case 62:
					return 3012;
				
				case 63:
					return 3018;
				
				case 64:
					return 3024;
				
				case 65:
					return 3225;
				
				case 66:
					return 3233;
				
				case 67:
					return 3241;
				
				case 68:
					return 3249;
				
				case 69:
					return 3257;
				
				case 70:
					return 3265;
				
				case 71:
					return 3273;
				
				case 72:
					return 3281;
				
				case 73:
					return 3289;
				
				case 74:
					return 3297;
				
				case 75:
					return 3305;
				
				case 76:
					return 3313;
				
				case 77:
					return 3322;
				
				case 78:
					return 3330;
				
				case joaat("mpsv_lp0_31"):
					return 3337;
				
				case 80:
					return 3345;
				
				case 81:
					return 3353;
				
				case 82:
					return 3361;
				
				case 83:
					return 3369;
				
				case 84:
					return 3377;
				
				case 85:
					return 3385;
				
				case 86:
					return 3392;
				
				case 87:
					return 3399;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4011;
				
				case 89:
					return 4019;
				
				case 90:
					return 4027;
				
				case 91:
					return 4035;
				
				case 92:
					return 4043;
				
				case 93:
					return 4051;
				
				case 94:
					return 4059;
				
				case 95:
					return 4067;
				
				case 96:
					return 4075;
				
				case 97:
					return 4083;
				
				case 98:
					return 4091;
				
				case 99:
					return 4099;
				
				case 100:
					return 4108;
				
				case 101:
					return 4116;
				
				case 102:
					return 4123;
				
				case 103:
					return 4131;
				
				case 104:
					return 4139;
				
				case 105:
					return 4147;
				
				case 106:
					return 4155;
				
				case 107:
					return 4163;
				
				case 108:
					return 4171;
				
				case 109:
					return 4179;
				
				case 110:
					return 4187;
				
				case 111:
					return 4195;
				
				case 112:
					return 4203;
				
				case 113:
					return 4211;
				
				case 114:
					return 4219;
				
				case 115:
					return 4227;
				
				case 116:
					return 4235;
				
				case 117:
					return 4243;
				
				case 118:
					return 4251;
				
				case 119:
					return 4259;
				
				case 120:
					return 4268;
				
				case 121:
					return 4276;
				
				case 122:
					return 4283;
				
				case 123:
					return 4291;
				
				case 124:
					return 4299;
				
				case 125:
					return 4307;
				
				case 126:
					return 4315;
				
				case 127:
					return 4323;
				
				case 128:
					return 4331;
				
				case 129:
					return 4339;
				
				case 130:
					return 4347;
				
				case 131:
					return 4355;
				
				case 132:
					return 4363;
				
				case 133:
					return 4371;
				
				case 134:
					return 4379;
				
				case 135:
					return 4387;
				
				case 136:
					return 4395;
				
				case 137:
					return 4403;
				
				case 138:
					return 4411;
				
				case 139:
					return 4419;
				
				case 140:
					return 4428;
				
				case 141:
					return 4436;
				
				case 142:
					return 4443;
				
				case 143:
					return 4451;
				
				case 144:
					return 4459;
				
				case 145:
					return 4467;
				
				case 146:
					return 4475;
				
				case 147:
					return 4483;
				
				case 148:
					return 4491;
				
				case 149:
					return 4499;
				
				case 150:
					return 4507;
				
				case 151:
					return 4515;
				
				case 152:
					return 4523;
				
				case 153:
					return 4531;
				
				case 154:
					return 4539;
				
				case 155:
					return 4547;
				
				case 156:
					return 4555;
				
				case 157:
					return 4563;
				
				case 158:
					return 5456;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 6019;
				
				case 1:
					return 6020;
				
				case 2:
					return 6021;
				
				case 3:
					return 6022;
				
				case 4:
					return 6023;
				
				case 5:
					return 6024;
				
				case 6:
					return 6025;
				
				case 7:
					return 6026;
				
				case 8:
					return 6027;
				
				case 9:
					return 6028;
				
				case 10:
					return 6029;
				
				case 11:
					return 6030;
				
				case 12:
					return 6031;
				
				case 13:
					return 6032;
				
				case 14:
					return 6033;
				
				case 15:
					return 6034;
				
				case 16:
					return 6035;
				
				case 17:
					return 6036;
				
				case 18:
					return 6037;
				
				case 19:
					return 6038;
				
				case 20:
					return 6039;
				
				case 21:
					return 6040;
				
				case 22:
					return 6041;
				
				case 23:
					return 6042;
				
				case 24:
					return 6043;
				
				case 25:
					return 6044;
				
				case 26:
					return 2249;
				
				case 27:
					return 2250;
				
				case 28:
					return 2251;
				
				case 29:
					return 2252;
				
				case 30:
					return 2253;
				
				case 31:
					return 2254;
				
				case 32:
					return 2255;
				
				case 33:
					return 2256;
				
				case 34:
					return 2257;
				
				case 35:
					return 2258;
				
				case 36:
					return 2259;
				
				case 37:
					return 2260;
				
				case 38:
					return 2261;
				
				case 39:
					return 2901;
				
				case 40:
					return 2902;
				
				case 41:
					return 2903;
				
				case 42:
					return 2904;
				
				case 43:
					return 2905;
				
				case 44:
					return 2906;
				
				case 45:
					return 2907;
				
				case 46:
					return 2908;
				
				case 47:
					return 2909;
				
				case 48:
					return 2910;
				
				case 49:
					return 2911;
				
				case 50:
					return 2912;
				
				case 51:
					return 2913;
				
				case 52:
					return 3025;
				
				case 53:
					return 3026;
				
				case 54:
					return 3027;
				
				case 55:
					return 3028;
				
				case 56:
					return 3029;
				
				case 57:
					return 3030;
				
				case 58:
					return 3031;
				
				case 59:
					return 3032;
				
				case 60:
					return 3033;
				
				case 61:
					return 3034;
				
				case 62:
					return 3035;
				
				case 63:
					return 3036;
				
				case 64:
					return 3037;
				
				case 65:
					return 3226;
				
				case 66:
					return 3234;
				
				case 67:
					return 3242;
				
				case 68:
					return 3250;
				
				case 69:
					return 3258;
				
				case 70:
					return 3266;
				
				case 71:
					return 3274;
				
				case 72:
					return 3282;
				
				case 73:
					return 3290;
				
				case 74:
					return 3298;
				
				case 75:
					return 3306;
				
				case 76:
					return 3314;
				
				case 77:
					return 3321;
				
				case 78:
					return 3329;
				
				case joaat("mpsv_lp0_31"):
					return 3338;
				
				case 80:
					return 3346;
				
				case 81:
					return 3354;
				
				case 82:
					return 3362;
				
				case 83:
					return 3370;
				
				case 84:
					return 3378;
				
				case 85:
					return 3386;
				
				case 86:
					return 3393;
				
				case 87:
					return 3400;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4012;
				
				case 89:
					return 4020;
				
				case 90:
					return 4028;
				
				case 91:
					return 4036;
				
				case 92:
					return 4044;
				
				case 93:
					return 4052;
				
				case 94:
					return 4060;
				
				case 95:
					return 4068;
				
				case 96:
					return 4076;
				
				case 97:
					return 4084;
				
				case 98:
					return 4092;
				
				case 99:
					return 4100;
				
				case 100:
					return 4107;
				
				case 101:
					return 4115;
				
				case 102:
					return 4124;
				
				case 103:
					return 4132;
				
				case 104:
					return 4140;
				
				case 105:
					return 4148;
				
				case 106:
					return 4156;
				
				case 107:
					return 4164;
				
				case 108:
					return 4172;
				
				case 109:
					return 4180;
				
				case 110:
					return 4188;
				
				case 111:
					return 4196;
				
				case 112:
					return 4204;
				
				case 113:
					return 4212;
				
				case 114:
					return 4220;
				
				case 115:
					return 4228;
				
				case 116:
					return 4236;
				
				case 117:
					return 4244;
				
				case 118:
					return 4252;
				
				case 119:
					return 4260;
				
				case 120:
					return 4267;
				
				case 121:
					return 4275;
				
				case 122:
					return 4284;
				
				case 123:
					return 4292;
				
				case 124:
					return 4300;
				
				case 125:
					return 4308;
				
				case 126:
					return 4316;
				
				case 127:
					return 4324;
				
				case 128:
					return 4332;
				
				case 129:
					return 4340;
				
				case 130:
					return 4348;
				
				case 131:
					return 4356;
				
				case 132:
					return 4364;
				
				case 133:
					return 4372;
				
				case 134:
					return 4380;
				
				case 135:
					return 4388;
				
				case 136:
					return 4396;
				
				case 137:
					return 4404;
				
				case 138:
					return 4412;
				
				case 139:
					return 4420;
				
				case 140:
					return 4427;
				
				case 141:
					return 4435;
				
				case 142:
					return 4444;
				
				case 143:
					return 4452;
				
				case 144:
					return 4460;
				
				case 145:
					return 4468;
				
				case 146:
					return 4476;
				
				case 147:
					return 4484;
				
				case 148:
					return 4492;
				
				case 149:
					return 4500;
				
				case 150:
					return 4508;
				
				case 151:
					return 4516;
				
				case 152:
					return 4524;
				
				case 153:
					return 4532;
				
				case 154:
					return 4540;
				
				case 155:
					return 4548;
				
				case 156:
					return 4556;
				
				case 157:
					return 4564;
				
				case 158:
					return 5457;
				
				default:
			}
			break;
	}
	return 1625;
}

int func_853(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 159)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (iParam0 >= func_859(iVar0) && iParam0 < func_854(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_854(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_857(iParam0);
		return func_856(iVar0);
	}
	return (func_855(iParam0, -1) * iParam0 + 1);
}

int func_855(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_494(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_500(iParam1))
			{
				return 0;
			}
			else if (func_137(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 <= 115 && iParam1 > 0)
			{
				if (Global_1049460[iParam1 /*1943*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049460[iParam1 /*1943*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049460[iParam1 /*1943*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
	}
	return 0;
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_857(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

void func_858(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_8827)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1770284[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_859(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_857(iParam0);
		return func_860(iVar0);
	}
	return (func_855(iParam0, -1) * iParam0);
}

int func_860(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_861(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_36();
	}
	if (iParam0 == 7 && !Global_262145.f_15534)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_857(iParam0);
		if (iVar1 == 0 && func_458(5368, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1362008[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2528770[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 12)
		{
			return 0;
		}
		return Global_2528699[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_862(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_863(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_858(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_458(func_852(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_864(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_865()
{
	return func_458(5355, -1, 0) != 0;
}

bool func_866()
{
	return func_458(3803, -1, 0) != 0;
}

bool func_867()
{
	return func_458(3208, -1, 0) != 0;
}

bool func_868()
{
	return func_458(5354, -1, 0) != 0;
}

int func_869()
{
	int iVar0;
	
	iVar0 = func_556();
	if (iVar0 != func_55())
	{
		return Global_1622795[iVar0 /*431*/].f_11.f_92;
	}
	return 0;
}

int func_870(int iParam0)
{
	if (func_202(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_173;
	}
	return -1;
}

int func_871(int iParam0)
{
	if (func_201(iParam0) == 225 || func_201(iParam0) == 226)
	{
		return func_870(iParam0);
	}
	return -1;
}

var func_872()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_648(unk_0x0FFED3E94261A832(), iVar0))
		{
			unk_0xF6082E2ADA1C795B(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_873()
{
	if (!func_176())
	{
		return;
	}
	if (!unk_0xCAEDBF30E3EA14FC(unk_0xFABF5258A318B1DC()) == Global_1312575.f_9)
	{
		return;
	}
	func_736();
}

void func_874()
{
	if (func_34(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	switch (Local_397[unk_0x88641E5BC172153A() /*11*/].f_9)
	{
		case 0:
			func_918();
			func_394();
			if (Local_127.f_214 == 2)
			{
				Local_397[unk_0x88641E5BC172153A() /*11*/].f_9 = 2;
			}
			else if (Local_127.f_214 == 3)
			{
				Local_397[unk_0x88641E5BC172153A() /*11*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_875();
			func_394();
			if (Local_127.f_214 == 3)
			{
				Local_397[unk_0x88641E5BC172153A() /*11*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_993();
			break;
	}
}

void func_875()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = unk_0x88641E5BC172153A();
	iVar1 = Local_127.f_197 + 1;
	if (func_34(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = func_382();
	}
	if (!func_383())
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_397[iVar0 /*11*/].f_1, 14))
		{
			unk_0xF6082E2ADA1C795B(&(Local_397[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (!func_916())
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_397[iVar0 /*11*/].f_1, 14))
		{
			unk_0xF6082E2ADA1C795B(&(Local_397[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_127.f_2[0 /*10*/].f_2))
		{
			if (unk_0x5B9B499C707C2A95(unk_0x2A5EB8B0FE590B91(), unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 0))
			{
				return;
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_397[iVar0 /*11*/].f_1, 14))
	{
		if (!func_890(iVar1, unk_0x88641E5BC172153A()))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 13))
			{
				if (func_888(unk_0x0FFED3E94261A832(), iVar1))
				{
					unk_0xF6082E2ADA1C795B(&iLocal_750, 13);
				}
			}
			else
			{
				bVar4 = true;
				iVar2 = 0;
				while (iVar2 < unk_0x244673FE98A43CA3())
				{
					if (unk_0x9E8AB4FC19962A90(unk_0xBA948A9E34D09E6E(iVar2)))
					{
						iVar3 = unk_0x2AFA21CE4322B48D(unk_0xBA948A9E34D09E6E(iVar2));
						if (func_888(iVar3, iVar1))
						{
							if (!func_883(iVar3, iVar1))
							{
								bVar4 = false;
							}
						}
					}
					iVar2++;
				}
				if (bVar4)
				{
					func_876();
				}
			}
		}
		else
		{
			unk_0xF6082E2ADA1C795B(&(Local_397[iVar0 /*11*/].f_1), 14);
		}
	}
}

void func_876()
{
	func_877();
}

void func_877()
{
	int iVar0;
	
	if (func_882(unk_0x0FFED3E94261A832()))
	{
		iVar0 = func_881(unk_0x0FFED3E94261A832());
		if (!func_880(3, iVar0))
		{
			func_878(3, iVar0);
		}
	}
}

void func_878(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_879(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1115[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1119[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1123[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1461[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1465[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1656[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1660[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1664[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1678[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1682[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1469[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1668[iVar0]), iVar1);
			return;
			break;
		
		case 12:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1672[iVar0]), iVar1);
			return;
			break;
		
		case 13:
			unk_0xF6082E2ADA1C795B(&(Global_1774803.f_1474[iVar0]), iVar1);
			return;
			break;
	}
}

void func_879(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

int func_880(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_879(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1115[iVar0], iVar1);
			break;
		
		case 1:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1119[iVar0], iVar1);
			break;
		
		case 2:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1123[iVar0], iVar1);
			break;
		
		case 3:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1461[iVar0], iVar1);
			break;
		
		case 4:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1465[iVar0], iVar1);
			break;
		
		case 5:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1656[iVar0], iVar1);
			break;
		
		case 6:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1660[iVar0], iVar1);
			break;
		
		case 7:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1664[iVar0], iVar1);
			break;
		
		case 8:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1678[iVar0], iVar1);
			break;
		
		case 9:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1682[iVar0], iVar1);
			break;
		
		case 10:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1469[iVar0], iVar1);
			break;
		
		case 11:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1668[iVar0], iVar1);
			break;
		
		case 12:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1672[iVar0], iVar1);
			break;
		
		case 13:
			return unk_0xAA4F14DA15DB0B51(Global_1774803.f_1474[iVar0], iVar1);
			break;
	}
	return 0;
}

int func_881(int iParam0)
{
	if (iParam0 != func_55())
	{
		return Global_2422215[iParam0 /*387*/].f_318.f_10;
	}
	return -1;
}

int func_882(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_55() && (func_1072(iParam0, 1, 1) || Global_2404996.f_2463))
	{
		bVar0 = unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_318, 1);
		return bVar0;
	}
	return 0;
}

bool func_883(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_886(iParam1);
	return func_884(iParam0, iVar0);
}

int func_884(int iParam0, int iParam1)
{
	if (iParam0 != func_55() && func_1072(iParam0, 1, 1))
	{
		if (func_882(iParam0))
		{
			if (func_881(iParam0) == iParam1)
			{
				if (func_885(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_885(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_318, 2);
}

int func_886(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 83)
	{
		if (func_887(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_887(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 3;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
			return 6;
			break;
		
		case 6:
			return 7;
			break;
		
		case 7:
			return 8;
			break;
		
		case 8:
			return 9;
			break;
		
		case 9:
			return 10;
			break;
		
		case 10:
			return 11;
			break;
		
		case 11:
			return 12;
			break;
		
		case 12:
			return 13;
			break;
		
		case 13:
			return 14;
			break;
		
		case 14:
			return 15;
			break;
		
		case 15:
			return 16;
			break;
		
		case 16:
			return 17;
			break;
		
		case 17:
			return 18;
			break;
		
		case 18:
			return 19;
			break;
		
		case 19:
			return 20;
			break;
		
		case 20:
			return 21;
			break;
		
		case 21:
			return 22;
			break;
	}
	return 0;
}

bool func_888(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_886(iParam1);
	return func_889(iParam0, iVar0);
}

int func_889(int iParam0, int iParam1)
{
	if (iParam0 != func_55() && func_1072(iParam0, 1, 1))
	{
		if (func_882(iParam0))
		{
			if (func_881(iParam0) == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_890(int iParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	
	iVar0 = func_886(iParam0);
	if (func_880(4, iVar0))
	{
		return 1;
	}
	else if (!func_915(iVar0))
	{
		if (func_914(iParam0, iParam1, &Var1, &uVar4))
		{
			func_891(iVar0, 1, 1, Var1, uVar4, 0, 0, 0);
		}
		else
		{
			func_891(iVar0, 1, 0, Var1, 0, 0, 0, 0);
		}
	}
	return 0;
}

int func_891(int iParam0, bool bParam1, bool bParam2, struct<3> Param3, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	bParam7 = true;
	if (func_882(unk_0x0FFED3E94261A832()))
	{
		return 0;
	}
	if (!bParam7)
	{
		if (!(func_913(iParam0) || func_897(iParam0, 0, 1)))
		{
			func_895(iParam0);
			return 0;
		}
	}
	else
	{
		func_878(2, iParam0);
	}
	if (func_880(0, iParam0))
	{
		return 0;
	}
	func_878(0, iParam0);
	func_894(4, iParam0);
	func_893(iParam0);
	if (bParam2)
	{
		func_878(1, iParam0);
		Global_1774803.f_1127[iParam0 /*3*/] = { Param3 };
		Global_1774803.f_1377[iParam0] = iParam6;
	}
	else
	{
		func_894(1, iParam0);
		Global_1774803.f_1127[iParam0 /*3*/] = { 0f, 0f, 0f };
		Global_1774803.f_1377[iParam0] = 0f;
	}
	if (bParam1)
	{
		func_894(3, iParam0);
	}
	else
	{
		func_878(3, iParam0);
	}
	func_894(10, iParam0);
	if (bParam8)
	{
		func_878(10, iParam0);
	}
	func_894(13, iParam0);
	if (bParam9)
	{
		func_878(13, iParam0);
	}
	func_892(1, iParam0);
	return 1;
}

void func_892(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 1))
		{
			unk_0xF6082E2ADA1C795B(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 1);
			unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 2);
			Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_10 = iParam1;
			func_543(&(Global_1774803.f_1479), 0, 0);
		}
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 1);
		func_878(4, iParam1);
		Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_10 = -1;
		func_9(&(Global_1774803.f_1479));
	}
}

void func_893(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xCB705C0242571D84(unk_0x2A5EB8B0FE590B91());
	if (iVar0 != 0)
	{
		if (!unk_0xA9A04898798AE9E6(iVar0, 0) && !unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) == unk_0x2A5EB8B0FE590B91())
			{
				Global_1774803.f_1548 = iParam0;
				Global_1774803.f_1549 = iVar0;
				func_543(&(Global_1774803.f_1550), 0, 0);
				Global_1774803.f_1552 = 0;
			}
		}
	}
}

void func_894(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_879(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0x507FE690B1271947(&(Global_1774803.f_1115[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0x507FE690B1271947(&(Global_1774803.f_1119[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0x507FE690B1271947(&(Global_1774803.f_1123[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0x507FE690B1271947(&(Global_1774803.f_1461[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0x507FE690B1271947(&(Global_1774803.f_1465[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0x507FE690B1271947(&(Global_1774803.f_1656[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0x507FE690B1271947(&(Global_1774803.f_1660[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0x507FE690B1271947(&(Global_1774803.f_1664[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0x507FE690B1271947(&(Global_1774803.f_1678[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0x507FE690B1271947(&(Global_1774803.f_1682[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0x507FE690B1271947(&(Global_1774803.f_1469[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			unk_0x507FE690B1271947(&(Global_1774803.f_1668[iVar0]), iVar1);
			return;
			break;
		
		case 12:
			unk_0x507FE690B1271947(&(Global_1774803.f_1672[iVar0]), iVar1);
			return;
			break;
		
		case 13:
			unk_0x507FE690B1271947(&(Global_1774803.f_1474[iVar0]), iVar1);
			return;
			break;
	}
}

void func_895(int iParam0)
{
	if (!func_896(iParam0))
	{
		return;
	}
	func_894(0, iParam0);
	func_894(1, iParam0);
	func_894(2, iParam0);
	func_894(3, iParam0);
	func_894(4, iParam0);
	func_894(10, iParam0);
	Global_1774803.f_1127[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1774803.f_1377[iParam0] = 0f;
	if (Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_10 == iParam0)
	{
		Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318.f_10 = -1;
		unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 2);
		unk_0x507FE690B1271947(&(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318), 1);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1774803.f_1, 22))
	{
		unk_0x507FE690B1271947(&(Global_1774803.f_1), 22);
	}
}

int func_896(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 83)
	{
		return 1;
	}
	return 0;
}

int func_897(int iParam0, int iParam1, int iParam2)
{
	if ((func_1072(unk_0x0FFED3E94261A832(), 1, 1) || Global_2404996.f_2463) && (!func_912() || func_908()))
	{
		if (func_906(iParam0))
		{
			return 0;
		}
		if (Global_1774803.f_1706 == iParam0)
		{
			return 0;
		}
		if (func_412(iParam0) == 5)
		{
			if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
			{
				if (func_905())
				{
					if (unk_0xAA4F14DA15DB0B51(Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_318, 5))
					{
						return 1;
					}
				}
			}
			if (func_489(unk_0x0FFED3E94261A832()))
			{
				if (func_908())
				{
					return 1;
				}
			}
		}
		if (func_412(iParam0) == 4)
		{
			if (func_904(unk_0x0FFED3E94261A832()) || (func_903() && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0)))
			{
				if (func_908())
				{
					if (func_900(Global_1592304) == iParam0)
					{
						return 1;
					}
				}
			}
		}
		if (iParam2 && func_899(iParam0))
		{
			return 1;
		}
		else if (iParam1 && func_898(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_898(int iParam0)
{
	if (func_915(iParam0))
	{
		return func_880(2, iParam0);
	}
	return 0;
}

int func_899(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 210;
	Var1 = { Global_1774803.f_280[iParam0 /*3*/] };
	if (!func_39(Var1))
	{
		return unk_0x4A2E6F541CD8C36E(func_51(unk_0x0FFED3E94261A832()), Var1, 1) <= IntToFloat(iVar0);
	}
	return 0;
}

int func_900(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return -1;
	}
	iVar0 = func_651(iParam0);
	if (!iVar0 == 0)
	{
		return func_901(iVar0);
	}
	return -1;
}

int func_901(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 83)
	{
		if (func_902(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_902(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
		
		case 71:
			return 22;
		
		case 72:
			return 23;
		
		case 73:
			return 24;
		
		case 74:
			return 25;
		
		case 75:
			return 26;
		
		case 76:
			return 27;
		
		case 77:
			return 28;
		
		case 78:
			return 29;
		
		case joaat("mpsv_lp0_31"):
			return 30;
		
		case 80:
			return 31;
	}
	return 0;
}

bool func_903()
{
	return unk_0xAA4F14DA15DB0B51(Global_1774803, 17);
}

int func_904(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1 && Global_2422215[iParam0 /*387*/].f_318.f_4 != func_55())
			{
				return func_412(Global_2422215[iParam0 /*387*/].f_318.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_905()
{
	if (func_1072(unk_0x0FFED3E94261A832(), 1, 1))
	{
		if (unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0x8F8E5C33266ED978(unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0), -1, 0) != unk_0x2A5EB8B0FE590B91())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_906(int iParam0)
{
	if (unk_0x1B154DE2D4606530() && !func_907(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_907(int iParam0)
{
	if (func_412(iParam0) == 6 && Global_1774803.f_1724)
	{
		return 1;
	}
	return 0;
}

int func_908()
{
	if (func_1072(unk_0x0FFED3E94261A832(), 1, 1))
	{
		if (func_489(unk_0x0FFED3E94261A832()))
		{
			if (Global_1592305 != func_55())
			{
				if (func_689(Global_1592305))
				{
					if ((func_911(Global_1592305) && !func_910()) && !func_909())
					{
						return 1;
					}
				}
			}
		}
		else if (func_904(unk_0x0FFED3E94261A832()) || (func_903() && unk_0xC4A39E4229BD3ABE(unk_0x2A5EB8B0FE590B91(), 0)))
		{
			if (Global_1592304 != func_55())
			{
				if (func_689(Global_1592304))
				{
					if ((func_911(Global_1592304) && !func_909()) && !func_910())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_909()
{
	return unk_0xAA4F14DA15DB0B51(Global_1774803, 30);
}

bool func_910()
{
	return unk_0xAA4F14DA15DB0B51(Global_1774803, 31);
}

int func_911(int iParam0)
{
	if (iParam0 != func_55())
	{
		return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_318, 6);
	}
	return 0;
}

bool func_912()
{
	int iVar0;
	
	iVar0 = unk_0x09952BA662A7629B(joaat("am_mp_smpl_interior_int"));
	return (iVar0 > 0 || unk_0xAA8734FF6F62B60F("AM_MP_SMPL_INTERIOR_INT", Global_1774803.f_1561, 1, 0));
}

int func_913(int iParam0)
{
	if ((unk_0x7E810282244275E0(unk_0x0FFED3E94261A832(), "AM_MP_SMPL_INTERIOR_EXT", iParam0) || unk_0xAA8734FF6F62B60F("AM_MP_SMPL_INTERIOR_EXT", iParam0, 1, 0)) || func_880(12, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_914(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (func_474(iParam0))
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -4.3114f, 5.8923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -4.3114f, 4.3923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -2.8114f, 5.8923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -2.8114f, 4.3923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -6.1997f, 8.7449f, 0.0001f };
					*uParam3 = 260f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -6.6f, 7.345f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -6.6f, 5.7449f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -6.1997f, 4.2449f, 0.0001f };
					*uParam3 = 280f;
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -7.6002f, 5.7561f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -7.6002f, 3.7561f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -7.6002f, 1.7561f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -7.6002f, -0.2439f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_915(int iParam0)
{
	return func_880(0, iParam0);
}

int func_916()
{
	if (unk_0xAA4F14DA15DB0B51(iLocal_750, 13))
	{
		return 1;
	}
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	if (unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), func_917(Local_127.f_197 + 1), 1) > 100f)
	{
		return 0;
	}
	return 1;
}

Vector3 func_917(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_42(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 50.9205f, -2560.01f, 6f };
			break;
		
		case 2:
			Var0 = { -1074.852f, -1257.452f, 5.6938f };
			break;
		
		case 3:
			Var0 = { 901.936f, -1019.425f, 34.9666f };
			break;
		
		case 4:
			Var0 = { 253.9006f, -1955.933f, 22.9477f };
			break;
		
		case 5:
			Var0 = { -426.279f, 180.9043f, 80.6855f };
			break;
		
		case 6:
			Var0 = { -1050.36f, -2023.939f, 12.1616f };
			break;
		
		case 7:
			Var0 = { -1275.378f, -815.4295f, 17.1148f };
			break;
		
		case 8:
			Var0 = { -883.2906f, -2730.542f, 12.8285f };
			break;
		
		case 9:
			Var0 = { 269.6765f, -3016.279f, 5.7176f };
			break;
		
		case 10:
			Var0 = { 1561.402f, -2138.697f, 77.5275f };
			break;
		
		case 11:
			Var0 = { -303.7892f, -2698.39f, 6.0003f };
			break;
		
		case 12:
			Var0 = { 507.2061f, -649.5859f, 24.7512f };
			break;
		
		case 13:
			Var0 = { -525.8206f, -1775.87f, 21.3501f };
			break;
		
		case 14:
			Var0 = { -291.6372f, -1352.556f, 31.3146f };
			break;
		
		case 15:
			Var0 = { 348.6436f, 324.428f, 104.3185f };
			break;
		
		case 16:
			Var0 = { 922.0838f, -1561.299f, 29.7475f };
			break;
		
		case 17:
			Var0 = { 763.7448f, -885.2086f, 25.0869f };
			break;
		
		case 18:
			Var0 = { 1043.884f, -2172.603f, 30.471f };
			break;
		
		case 19:
			Var0 = { 1001.659f, -2511.88f, 28.302f };
			break;
		
		case 20:
			Var0 = { -263.138f, 194.3424f, 85.184f };
			break;
		
		case 21:
			Var0 = { 547.8112f, -1942.514f, 23.9851f };
			break;
		
		case 22:
			Var0 = { 88.9678f, -2216.882f, 6.0613f };
			break;
	}
	return Var0;
}

void func_918()
{
	func_946();
	func_745();
	func_945();
	func_942();
	func_730();
	func_939();
	func_923();
	func_920();
	func_721();
	func_919();
}

void func_919()
{
}

void func_920()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_383())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	Var0 = { func_917(Local_127.f_197 + 1) };
	fVar3 = unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var0);
	if (fVar3 < 62500f)
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 14))
		{
			func_189(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
			func_921();
			unk_0xF6082E2ADA1C795B(&iLocal_750, 14);
		}
	}
	else if (fVar3 > 250000f)
	{
		func_423();
	}
}

void func_921()
{
	int iVar0;
	
	if (func_383())
	{
		return;
	}
	iVar0 = Local_127.f_197 + 1;
	switch (iVar0)
	{
		case 1:
			func_922(93.9801f, -2532.177f, 5.0778f, 124.1404f, 1065353216);
			func_922(96.7817f, -2536.936f, 5f, 121.982f, 1065353216);
			func_922(106.1278f, -2539.717f, 5.0003f, 111.4201f, 1065353216);
			func_922(7.7245f, -2598.042f, 5.0075f, 283.2584f, 1065353216);
			func_922(13.7512f, -2602.234f, 5.0069f, 290.8908f, 1065353216);
			func_922(113.3588f, -2586.112f, 5.0121f, 88.5573f, 1065353216);
			func_922(111.6119f, -2592.456f, 5.0229f, 78.4188f, 1065353216);
			func_922(8.5363f, -2518.204f, 5.0163f, 213.3867f, 1065353216);
			break;
		
		case 2:
			func_922(-1150.759f, -1273.248f, 5.7478f, 282.4241f, 1065353216);
			func_922(-1019.696f, -1323.524f, 4.9009f, 45.7692f, 1065353216);
			func_922(-1012.756f, -1319.543f, 4.9001f, 43.138f, 1065353216);
			func_922(-1005.033f, -1315.236f, 4.941f, 58.4519f, 1065353216);
			func_922(-1014.173f, -1307.516f, 5.2364f, 52.7034f, 1065353216);
			func_922(-1022.801f, -1245.642f, 5.014f, 106.8874f, 1065353216);
			func_922(-1112.947f, -1296.568f, 4.258f, 298.12f, 1065353216);
			func_922(-1118.264f, -1218.13f, 1.5169f, 188.9163f, 1065353216);
			break;
		
		case 3:
			func_922(856.3708f, -1013.008f, 28.4203f, 271.5768f, 1065353216);
			func_922(863.5153f, -993.5998f, 29.2774f, 239.646f, 1065353216);
			func_922(933.4873f, -990.8866f, 37.0241f, 127.1206f, 1065353216);
			func_922(932.2711f, -1007.077f, 36.7075f, 90.5105f, 1065353216);
			func_922(867.5297f, -1076.188f, 27.7798f, 268.1065f, 1065353216);
			func_922(868.5233f, -1092.591f, 27.7269f, 302.3375f, 1065353216);
			func_922(927.5185f, -1092.741f, 33.1574f, 50.444f, 1065353216);
			func_922(936.7908f, -1078.382f, 34.7149f, 77.3112f, 1065353216);
			break;
		
		case 4:
			func_922(243.2832f, -1999.028f, 18.8177f, 341.0091f, 1065353216);
			func_922(273.1573f, -2010.138f, 18.6668f, 29.2809f, 1065353216);
			func_922(171.7093f, -1951.986f, 18.7677f, 286.1576f, 1065353216);
			func_922(186.7918f, -1911.818f, 21.7781f, 235.4626f, 1065353216);
			func_922(201.1726f, -1898.231f, 23.2412f, 220.1641f, 1065353216);
			func_922(223.3617f, -1889.273f, 24.4098f, 178.0541f, 1065353216);
			func_922(260.1144f, -1909.984f, 24.8323f, 142.8378f, 1065353216);
			func_922(289.037f, -1933.327f, 24.3999f, 148.1186f, 1065353216);
			break;
		
		case 5:
			func_922(-444.3442f, 229.0294f, 82.0416f, 232.9779f, 1065353216);
			func_922(-446.8376f, 224.1595f, 82.0175f, 236.8468f, 1065353216);
			func_922(-398.6772f, 227.0964f, 82.593f, 160.9651f, 1065353216);
			func_922(-412.1818f, 224.1092f, 82.5148f, 207.9725f, 1065353216);
			func_922(-368.4009f, 193.0408f, 82.6566f, 97.3058f, 1065353216);
			func_922(-471.0459f, 153.4937f, 77.0803f, 301.4885f, 1065353216);
			func_922(-492.4609f, 191.0608f, 69.9316f, 260.3055f, 1065353216);
			func_922(-492.152f, 185.6411f, 69.9316f, 267.4302f, 1065353216);
			break;
		
		case 6:
			func_922(-1119.86f, -2022.411f, 12.2297f, 292.6461f, 1065353216);
			func_922(-1102.049f, -1983.884f, 12.1406f, 223.9062f, 1065353216);
			func_922(-1084.243f, -1968.423f, 12.1514f, 204.0761f, 1065353216);
			func_922(-1033.419f, -2068.45f, 12.4615f, 33.9101f, 1065353216);
			func_922(-1037.025f, -2088.586f, 12.6459f, 21.4939f, 1065353216);
			func_922(-1056.915f, -2088.188f, 12.2919f, 8.2791f, 1065353216);
			func_922(-1020.213f, -2077.749f, 12.7601f, 40.6275f, 1065353216);
			func_922(-1032.6f, -2101.71f, 12.6309f, 20.9321f, 1065353216);
			break;
		
		case 7:
			func_922(-1323.561f, -801.4799f, 16.5991f, 309.0983f, 1065353216);
			func_922(-1334.537f, -788.2323f, 18.9061f, 263.1596f, 1065353216);
			func_922(-1333.08f, -758.4105f, 19.367f, 226.0109f, 1065353216);
			func_922(-1326.314f, -754.1177f, 19.367f, 215.8053f, 1065353216);
			func_922(-1252.46f, -880.908f, 11.1188f, 6.1107f, 1065353216);
			func_922(-1234.162f, -868.6242f, 11.821f, 83.8965f, 1065353216);
			func_922(-1234.714f, -903.713f, 11.0757f, 22.5172f, 1065353216);
			func_922(-1274.141f, -860.0457f, 11.2177f, 313.1372f, 1065353216);
			break;
		
		case 8:
			func_922(-954.9498f, -2765.854f, 12.9446f, 300.864f, 1065353216);
			func_922(-967.7481f, -2758.093f, 12.8166f, 282.6459f, 1065353216);
			func_922(-974.1952f, -2721.633f, 12.7566f, 258.5829f, 1065353216);
			func_922(-956.0557f, -2704.292f, 12.831f, 242.288f, 1065353216);
			func_922(-900.7191f, -2652.238f, 12.7618f, 177.695f, 1065353216);
			func_922(-870.0709f, -2643.078f, 12.9495f, 171.6949f, 1065353216);
			func_922(-837.4813f, -2697.67f, 12.8121f, 98.2582f, 1065353216);
			func_922(-830.3173f, -2716.68f, 12.9445f, 57.01767f, 1065353216);
			break;
		
		case 9:
			func_922(246.686f, -2954.608f, 4.8465f, 201.0552f, 1065353216);
			func_922(237.4989f, -2960.046f, 4.8401f, 219.4444f, 1065353216);
			func_922(278.0732f, -2933.848f, 4.6858f, 173.7103f, 1065353216);
			func_922(305.2663f, -2953.124f, 4.9916f, 152.1779f, 1065353216);
			func_922(306.9686f, -3051.72f, 4.8569f, 73.9139f, 1065353216);
			func_922(290.1032f, -3067.022f, 4.9168f, 22.2414f, 1065353216);
			func_922(248.4644f, -3081.733f, 4.8082f, 5.7888f, 1065353216);
			func_922(213.5583f, -3006.335f, 4.8585f, 281.9704f, 1065353216);
			break;
		
		case 10:
			func_922(1533.422f, -2207.716f, 76.5674f, 341.3423f, 1065353216);
			func_922(1518.683f, -2197.165f, 76.0905f, 323.85f, 1065353216);
			func_922(1505.83f, -2149.169f, 76.2134f, 287.7332f, 1065353216);
			func_922(1517.668f, -2071.069f, 76.2881f, 218.4776f, 1065353216);
			func_922(1513.971f, -2047.472f, 76.3438f, 229.7462f, 1065353216);
			func_922(1562.546f, -2050.737f, 76.4175f, 158.5163f, 1065353216);
			func_922(1571.823f, -2065.519f, 76.0999f, 139.3434f, 1065353216);
			func_922(1559.668f, -2212.969f, 77.2272f, 30.3786f, 1065353216);
			break;
		
		case 11:
			func_922(-244.4574f, -2679.464f, 5.0003f, 115.7166f, 1065353216);
			func_922(-247.8431f, -2669.538f, 5.0003f, 137.3239f, 1065353216);
			func_922(-273.936f, -2646.584f, 5.1595f, 138.4986f, 1065353216);
			func_922(-283.7866f, -2643.465f, 5.1536f, 145.8487f, 1065353216);
			func_922(-338.5266f, -2716.292f, 5.0016f, 353.4592f, 1065353216);
			func_922(-340.0283f, -2721.088f, 5.0015f, 349.123f, 1065353216);
			func_922(-284.5308f, -2623.301f, 5.0382f, 150.473f, 1065353216);
			func_922(-257.3565f, -2632.506f, 5.0221f, 131.679f, 1065353216);
			break;
		
		case 12:
			func_922(515.9905f, -720.5799f, 23.8387f, 5.6255f, 1065353216);
			func_922(497.1281f, -728.9662f, 23.8776f, 343.3149f, 1065353216);
			func_922(447.638f, -685.7243f, 27.4277f, 285.8884f, 1065353216);
			func_922(449.3201f, -668.7817f, 27.3296f, 271.4846f, 1065353216);
			func_922(498.4707f, -568.4258f, 23.747f, 193.0118f, 1065353216);
			func_922(514.7365f, -562.4415f, 23.7507f, 158.6247f, 1065353216);
			func_922(527.8929f, -562.6914f, 23.7997f, 164.4089f, 1065353216);
			func_922(544.1755f, -594.525f, 23.7432f, 152.6498f, 1065353216);
			break;
		
		case 13:
			func_922(-518.2458f, -1828.47f, 21.5839f, 6.9263f, 1065353216);
			func_922(-493.7525f, -1823.626f, 21.8486f, 29.4302f, 1065353216);
			func_922(-450.3873f, -1794.818f, 20.7743f, 85.0772f, 1065353216);
			func_922(-597.9962f, -1729.797f, 22.139f, 232.3263f, 1065353216);
			func_922(-581.0703f, -1718.014f, 21.9858f, 214.5117f, 1065353216);
			func_922(-449.3808f, -1766.115f, 19.5349f, 112.1522f, 1065353216);
			func_922(-541.6173f, -1821.735f, 21.9225f, 317.0811f, 1065353216);
			func_922(-618.6395f, -1711.974f, 23.0683f, 235.603f, 1065353216);
			break;
		
		case 14:
			func_922(-291.3686f, -1274.791f, 29.4583f, 184.0252f, 1065353216);
			func_922(-260.6114f, -1286.958f, 30.0291f, 148.6145f, 1065353216);
			func_922(-245.4854f, -1358.204f, 30.606f, 97.9413f, 1065353216);
			func_922(-258.2249f, -1408.08f, 30.2904f, 46.1851f, 1065353216);
			func_922(-293.8492f, -1408.819f, 30.2952f, 0.4148f, 1065353216);
			func_922(-335.4179f, -1371.286f, 30.2957f, 304.5049f, 1065353216);
			func_922(-337.6552f, -1333.524f, 30.3008f, 289.5995f, 1065353216);
			func_922(-339.4502f, -1311.185f, 30.2086f, 224.0032f, 1065353216);
			break;
		
		case 15:
			func_922(296.9105f, 339.6927f, 104.52f, 250.3169f, 1065353216);
			func_922(286.231f, 324.1514f, 104.6652f, 267.2802f, 1065353216);
			func_922(314.8456f, 295.4021f, 104.543f, 341.0804f, 1065353216);
			func_922(356.8475f, 275.1253f, 102.1478f, 349.9545f, 1065353216);
			func_922(403.6933f, 290.7596f, 101.9871f, 47.5594f, 1065353216);
			func_922(416.5997f, 309.7407f, 101.987f, 69.7807f, 1065353216);
			func_922(388.4496f, 357.7741f, 101.479f, 81.7557f, 1065353216);
			func_922(323.6804f, 367.7533f, 104.3807f, 251.082f, 1065353216);
			break;
		
		case 16:
			func_922(983.1635f, -1507.116f, 30.4318f, 115.3138f, 1065353216);
			func_922(976.6813f, -1462.792f, 30.4421f, 170.1272f, 1065353216);
			func_922(965.1019f, -1457.18f, 30.1302f, 187.7104f, 1065353216);
			func_922(954.3276f, -1500.289f, 29.9441f, 234.0993f, 1065353216);
			func_922(967.4816f, -1632.333f, 29.1107f, 353.4453f, 1065353216);
			func_922(890.0863f, -1572.723f, 29.84f, 281.6886f, 1065353216);
			func_922(905.2548f, -1543.512f, 29.5311f, 219.2688f, 1065353216);
			func_922(922.9328f, -1544.217f, 29.8062f, 181.6137f, 1065353216);
			break;
		
		case 17:
			func_922(754.465f, -835.6287f, 24.8675f, 202.5404f, 1065353216);
			func_922(760.689f, -821.2197f, 25.2721f, 185.6987f, 1065353216);
			func_922(799.4153f, -825.4905f, 25.19f, 155.4635f, 1065353216);
			func_922(833.3179f, -912.5907f, 24.5379f, 96.2594f, 1065353216);
			func_922(836.246f, -921.1563f, 25.0122f, 86.3203f, 1065353216);
			func_922(798.7469f, -975.9729f, 25.1518f, 41.5425f, 1065353216);
			func_922(753.8427f, -972.2688f, 23.9505f, 340.2511f, 1065353216);
			func_922(737.0633f, -940.94f, 23.8394f, 264.3263f, 1065353216);
			break;
		
		case 18:
			func_922(1021.727f, -2096.922f, 29.9949f, 131.5094f, 1065353216);
			func_922(1004.22f, -2097.619f, 30.1617f, 218.0245f, 1065353216);
			func_922(1048.305f, -2162.876f, 31.0285f, 17.1583f, 1065353216);
			func_922(1053.165f, -2138.979f, 31.6269f, 138.5871f, 1065353216);
			func_922(992.7523f, -2239.598f, 29.5519f, 335.4291f, 1065353216);
			func_922(975.8146f, -2201.123f, 29.5516f, 290.5504f, 1065353216);
			func_922(1035.371f, -2203.133f, 30.8934f, 77.8725f, 1065353216);
			func_922(1040.114f, -2203.875f, 30.8934f, 62.6027f, 1065353216);
			break;
		
		case 19:
			func_922(957.4448f, -2452.676f, 27.553f, 231.7168f, 1065353216);
			func_922(957.0999f, -2474.014f, 27.4957f, 267.1929f, 1065353216);
			func_922(945.7234f, -2497.031f, 27.453f, 256.6793f, 1065353216);
			func_922(946.9409f, -2478.706f, 27.3433f, 233.4717f, 1065353216);
			func_922(932.4327f, -2534.006f, 27.3027f, 231.8695f, 1065353216);
			func_922(900.2678f, -2552.213f, 27.4211f, 283.9405f, 1065353216);
			func_922(1028.407f, -2477.004f, 27.5034f, 91.0284f, 1065353216);
			func_922(1021.066f, -2459.521f, 27.5462f, 131.3309f, 1065353216);
			break;
		
		case 20:
			func_922(-237.7643f, 248.6469f, 91.0445f, 196.7769f, 1065353216);
			func_922(-202.8588f, 245.9139f, 91.0419f, 127.8667f, 1065353216);
			func_922(-199.1134f, 179.474f, 76.6409f, 79.199f, 1065353216);
			func_922(-217.1594f, 141.0364f, 68.6993f, 21.5726f, 1065353216);
			func_922(-240.5069f, 139.3272f, 68.6369f, 352.6409f, 1065353216);
			func_922(-280.1349f, 153.3907f, 74.2578f, 344.9672f, 1065353216);
			func_922(-177.5456f, 215.1789f, 87.8734f, 101.2481f, 1065353216);
			func_922(-174.6252f, 206.0641f, 87.426f, 84.7397f, 1065353216);
			break;
		
		case 21:
			func_922(578.9037f, -1883.818f, 24.4357f, 190.9878f, 1065353216);
			func_922(601.1657f, -1872.286f, 23.7783f, 136.6622f, 1065353216);
			func_922(573.7683f, -1869.375f, 24.1791f, 138.5911f, 1065353216);
			func_922(531.532f, -1858.341f, 24.332f, 211.7805f, 1065353216);
			func_922(542.208f, -1844.02f, 24.332f, 187.9743f, 1065353216);
			func_922(502.1498f, -1917.516f, 24.3684f, 289.8235f, 1065353216);
			func_922(512.4601f, -1985.896f, 23.9851f, 299.9174f, 1065353216);
			func_922(479.1975f, -1908.422f, 24.2436f, 282.8994f, 1065353216);
			break;
		
		case 22:
			func_922(172.8245f, -2183.052f, 5.0294f, 116.2516f, 1065353216);
			func_922(173.7597f, -2198.917f, 5.171f, 72.2949f, 1065353216);
			func_922(173.7982f, -2224.849f, 5.171f, 126.6793f, 1065353216);
			func_922(181.6316f, -2238.538f, 5.0035f, 61.6889f, 1065353216);
			func_922(147.6168f, -2252.883f, 5.0856f, 63.8371f, 1065353216);
			func_922(147.2348f, -2244.339f, 5.0856f, 70.1362f, 1065353216);
			func_922(178.0549f, -2206.273f, 5.0238f, 38.9746f, 1065353216);
			func_922(176.9219f, -2223.301f, 5.0329f, 133.7211f, 1065353216);
			break;
	}
}

void func_922(struct<3> Param0, float fParam3, int iParam4)
{
	if (!Global_2404996.f_1709)
	{
	}
	if (Global_2404996.f_676 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404996.f_676.f_1[Global_2404996.f_676 /*5*/] = { Param0 };
		Global_2404996.f_676.f_1[Global_2404996.f_676 /*5*/].f_3 = fParam3;
		Global_2404996.f_676.f_1[Global_2404996.f_676 /*5*/].f_4 = iParam4;
		Global_2404996.f_676++;
	}
}

void func_923()
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	
	if (!func_383())
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 19))
	{
		if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_127.f_2[0 /*10*/].f_2))
			{
				unk_0x1E8ACA6A3AC5264A(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 0, 0);
				unk_0xF6082E2ADA1C795B(&iLocal_750, 19);
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 8))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 9))
		{
			if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
			{
				if (!func_13(Local_127.f_2[0 /*10*/].f_2))
				{
					unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 9);
				}
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 6))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 7))
		{
			if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
			{
				Var1 = { unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 0) };
				if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var1) < 90000f)
				{
					unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 7);
				}
			}
		}
	}
	if (iLocal_753 == -2)
	{
		if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_127.f_2[0 /*10*/].f_2))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 8))
				{
					if (func_938(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2)))
					{
						unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 8);
					}
				}
				else if (!func_938(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2)))
				{
					unk_0x507FE690B1271947(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 8);
				}
			}
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 2) && !unk_0xAA4F14DA15DB0B51(Local_127.f_1, 4))
	{
		if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
		{
			iVar0 = unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2);
			if (unk_0x7FAC45D56235AB39(iVar0, 0))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					if (unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
					{
						if (unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0) == iVar0)
						{
							if (unk_0x8F8E5C33266ED978(iVar0, -1, 0) == unk_0x2A5EB8B0FE590B91())
							{
								if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 3))
								{
									unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 3);
								}
							}
							else if (unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 3))
							{
								unk_0x507FE690B1271947(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 3);
							}
						}
						else if (unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 3))
						{
							unk_0x507FE690B1271947(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 3);
						}
					}
					else if (unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 3))
					{
						unk_0x507FE690B1271947(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 3);
					}
				}
				else if (unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 3))
				{
					unk_0x507FE690B1271947(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 3);
				}
			}
		}
	}
	iVar4 = func_55();
	iVar5 = func_55();
	if (iLocal_753 != Local_127.f_215)
	{
		if (!func_28())
		{
			if (!func_743())
			{
				if (unk_0xBDD3EABACAB97D09(uLocal_863))
				{
					unk_0x789C84F1B8496AD0(&uLocal_863);
				}
				if (Local_127.f_215 == unk_0x88641E5BC172153A())
				{
					func_937(1);
				}
				else if (Local_127.f_215 > -1)
				{
					iVar4 = func_936();
					if (iVar4 != func_55())
					{
						if (func_554(1))
						{
							iVar5 = func_556();
							if (iVar5 != func_55())
							{
								if (func_305(iVar4, iVar5, 1))
								{
									func_418(iVar4, 478, 1);
									func_416(iVar4, func_421(iLocal_864), 1);
									func_937(1);
								}
							}
						}
						func_934("DCONTRA_TCKV", iVar4, 0, 0, 0, 1, 1, 0);
					}
				}
				else if (Local_127.f_215 == -1)
				{
					if (unk_0xBDD3EABACAB97D09(uLocal_861))
					{
						unk_0x789C84F1B8496AD0(&uLocal_861);
					}
					iVar4 = func_933();
					if (iVar4 != func_55())
					{
						func_418(iVar4, 478, 0);
						func_416(iVar4, func_421(iLocal_864), 0);
					}
					func_932(3, 1);
				}
				iLocal_753 = Local_127.f_215;
			}
			else
			{
				func_932(1, 0);
			}
		}
	}
	func_931();
	func_929(0);
	func_924();
}

void func_924()
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = func_936();
	Var1 = { func_40() };
	if (unk_0xBDD3EABACAB97D09(uLocal_861))
	{
		unk_0xF9C830438D0097FD(12, &uVar4, &uVar5, &uVar6, &uVar7);
		unk_0x47C0431D5D179992(1, Var1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, uVar4, uVar5, uVar6, 100, 0, 0, 2, 0, 0, 0, 0);
	}
	if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
	{
		if (unk_0x434105A1C45F1BED(Local_127.f_2[0 /*10*/].f_2))
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 2))
			{
				if (iVar0 == unk_0x0FFED3E94261A832())
				{
					if (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar0)))
					{
						if (unk_0x7DDA81F38FB30F23(unk_0x1E199569E0295838(iVar0), Var1, 6f, 6f, 2f, 0, 1, 0))
						{
							func_925(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), &uLocal_1033, 0, 1);
							if (unk_0x1979A7D1D0538188(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2)))
							{
								unk_0x650AA1AFE335239C(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2), 1);
							}
							unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 2);
						}
					}
				}
			}
		}
	}
}

int func_925(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_927(iParam0, 1, 1, 0, 0, 0, 1, 0))
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = unk_0x7C214DA899F05536(iVar0);
				if (func_1072(iVar1, 0, 1))
				{
					if (unk_0x5B9B499C707C2A95(unk_0x1E199569E0295838(iVar1), iParam0, 0))
					{
						func_926(func_601(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = unk_0x11ABC381A58DD5AB();
		}
	}
	else if (!unk_0x1979A7D1D0538188(iParam0))
	{
		unk_0xC620100105DBAFCF(iParam0);
	}
	else
	{
		if (bParam3)
		{
			unk_0x650AA1AFE335239C(iParam0, 1);
		}
		unk_0xA32D9C84C1A93920(iParam0, 0);
		if (bParam2)
		{
			unk_0xF65C7766FB8D4B2C(iParam0, 1);
		}
		return 1;
	}
	return 0;
}

void func_926(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0.f_0 = -1028011646;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = unk_0x5E60CE6A99DCBE0A();
	if (!iParam0 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 9, iParam0);
	}
}

int func_927(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xCBA4F77BB9D2F115(iParam0) + 1;
	if (iParam4 || !unk_0xA9A04898798AE9E6(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_928(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x2137828D03306CAF(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x2A5EB8B0FE590B91())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x769F0F6444C1ABE0(iVar2))
					{
						if (unk_0xDB61DD81432BD145(iVar2))
						{
							if (unk_0xEA49C7D4FDCF922C(unk_0xB0BB7458627D389F(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x769F0F6444C1ABE0(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_928(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x457D9E478E06E354(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x8F8E5C33266ED978(iParam0, iParam1, iParam3);
		iVar1 = unk_0xB0BB7458627D389F(iVar0);
		if (iVar1 != func_55())
		{
		}
	}
	if (bParam2)
	{
		if (!unk_0x2137828D03306CAF(iVar0) && !unk_0xA9A04898798AE9E6(iParam0, 0))
		{
			iVar0 = unk_0xB70DB151BB319BBB(iParam0, iParam1);
			if (!unk_0xA9A04898798AE9E6(iVar0, 0))
			{
				if (unk_0xE897E371352225D5(iVar0, 451360105) == 1 || unk_0xE897E371352225D5(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xD1EE0E9FCD74A37B(iParam0, 0), unk_0xD1EE0E9FCD74A37B(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_929(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_2())
	{
		return;
	}
	if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_127.f_2[iParam0 /*10*/].f_2))
		{
			if (unk_0xBDD3EABACAB97D09(uLocal_863))
			{
				if (Local_127.f_216 > -1)
				{
					unk_0xF9C830438D0097FD(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else if (iLocal_753 == -2)
				{
					unk_0xF9C830438D0097FD(6, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else
				{
					unk_0xF9C830438D0097FD(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				func_930(unk_0xECBE9D2902B2B964(Local_127.f_2[iParam0 /*10*/].f_2), uVar0, uVar1, uVar2, 0);
			}
		}
	}
}

void func_930(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0xDE3E0D9E2E663E9A(unk_0xD3B21CE53AA7BE51(uParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	fVar6 = (fVar6 + fParam4);
	unk_0x47C0431D5D179992(2, unk_0xD1EE0E9FCD74A37B(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_931()
{
	if (iLocal_753 == -2)
	{
		if (unk_0xBDD3EABACAB97D09(uLocal_863))
		{
			if (iLocal_754 != Local_127.f_222)
			{
				iLocal_754 = Local_127.f_222;
				unk_0x7FF3A84437112BB2(uLocal_863, iLocal_754);
			}
		}
	}
	else if (iLocal_754 != 255)
	{
		iLocal_754 = 255;
	}
}

void func_932(int iParam0, bool bParam1)
{
	if (!unk_0xBDD3EABACAB97D09(uLocal_863))
	{
		if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_127.f_2[0 /*10*/].f_2))
			{
				uLocal_863 = unk_0x9E3A324AB806771E(unk_0xECBE9D2902B2B964(Local_127.f_2[0 /*10*/].f_2));
				unk_0x697F84823ACFF84C(uLocal_863, 12);
				unk_0x9FD1808EF916E312(uLocal_863, 478);
				unk_0xEB5D36079067EBA5(uLocal_863, iParam0);
				if (bParam1)
				{
					unk_0xD42DEAFD12809447(uLocal_863, 1);
				}
			}
		}
	}
}

int func_933()
{
	int iVar0;
	
	iVar0 = func_55();
	if (iLocal_753 < 0)
	{
		return iVar0;
	}
	if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(iLocal_753)))
	{
		iVar0 = unk_0x7C214DA899F05536(iLocal_753);
	}
	return iVar0;
}

int func_934(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x220AE8028FACE96A(iParam1);
	if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x4325D353D7D27B34(iParam1), 64);
		}
		if (unk_0x58478145CAF8429C(&Var2))
		{
		}
		unk_0xD05F099FEF4ED10A(sParam0);
		if ((iVar1 != -1 && unk_0x1B154DE2D4606530()) && iVar1 < 4)
		{
			if (Global_1638223.f_89044[iVar1] != -1)
			{
				unk_0x95CE6D748899618C(func_529(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x95CE6D748899618C(func_517(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x95CE6D748899618C(func_517(iParam1, -2, 1, 0));
		}
		unk_0xCF6846167A5EFE98(func_609(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xEF731ED745A201C5(0, 1);
		}
		else
		{
			Global_2484572 = { func_57(iParam1) };
			if (unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572))
			{
				iVar18 = 0;
				if (unk_0x35302CD5A5D37EED(&(Global_2484502.f_22), "Leader") && Global_2484502.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2484502.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_935(&Var2) };
					}
					iVar0 = unk_0xCFCC273DCA662841(iVar19, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar18, 0, Global_2484502, &Var2, Global_1314009, Global_1314010, Global_1314011);
				}
				else
				{
					iVar0 = unk_0xA390BEE87F567563(iVar19, unk_0x7A879D71A2140CC4(&Global_2484502, 35), &(Global_2484502.f_17), Global_2484502.f_30, iVar18, 0, Global_2484502, Global_1314009, Global_1314010, Global_1314011);
				}
			}
			else
			{
				iVar0 = unk_0xEF731ED745A201C5(0, 1);
			}
		}
		func_605(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_935(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

int func_936()
{
	int iVar0;
	
	iVar0 = func_55();
	if (Local_127.f_216 > -1)
	{
		if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(Local_127.f_216)))
		{
			iVar0 = unk_0x7C214DA899F05536(Local_127.f_216);
		}
	}
	return iVar0;
}

void func_937(bool bParam0)
{
	struct<3> Var0;
	
	if (!unk_0xBDD3EABACAB97D09(uLocal_861))
	{
		Var0 = { func_40() };
		uLocal_861 = unk_0x9EDB165CAADCAB2C(Var0);
		if (bParam0)
		{
			unk_0xD42DEAFD12809447(uLocal_861, 1);
		}
	}
}

int func_938(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
	{
		return 0;
	}
	Var0 = { unk_0xD1EE0E9FCD74A37B(uParam0, 0) };
	if (unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Var0, 0) < 50f)
	{
		return 1;
	}
	if (unk_0x57F6052FCF93BCFF(iParam0))
	{
		if (unk_0x14CEA5D3B9541B99(Var0, 1f))
		{
			if (unk_0x2FF6D1D6A0790F5A(unk_0x2A5EB8B0FE590B91(), iParam0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_939()
{
	int iVar0;
	
	if (!func_480())
	{
		if (func_396("DCONTRA_HLP1"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		if (func_396("DCONTRA_HLP2"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		if (func_396("DCONTRA_HLPCR"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		if (func_396("DCONTRA_HLPVCR"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		return;
	}
	iVar0 = func_372(unk_0x0FFED3E94261A832());
	if (iVar0 < 2)
	{
		if (func_396("DCONTRA_HLP1"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		if (func_396("DCONTRA_HLP2"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		if (func_396("DCONTRA_HLPVCR"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		if (func_396("DCONTRA_HLPCR"))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 1))
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 2))
	{
		if (!func_941(86))
		{
			if (func_839(0, 1, 1, 1))
			{
				if (unk_0x88641E5BC172153A() == Local_127.f_218)
				{
					if (func_383())
					{
						func_404("DCONTRA_HLP3", -1);
					}
					else
					{
						func_404("DCONTRA_HLP1", -1);
					}
					func_403(1);
					unk_0xF6082E2ADA1C795B(&iLocal_750, 2);
				}
				else if (func_980() == Local_127.f_218)
				{
					if (func_383())
					{
						func_404("DCONTRA_HLP4", -1);
					}
					else
					{
						func_404("DCONTRA_HLP2", -1);
					}
					func_403(1);
					unk_0xF6082E2ADA1C795B(&iLocal_750, 2);
				}
			}
		}
	}
	else if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 8))
	{
		if (!func_383())
		{
			if (func_839(0, 1, 1, 1))
			{
				if (func_548())
				{
					func_404("DCONTRA_HLPVCR", -1);
				}
				else
				{
					func_404("DCONTRA_HLPCR", -1);
				}
				func_403(1);
				unk_0xF6082E2ADA1C795B(&iLocal_750, 8);
			}
		}
	}
	if (func_383())
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_750, 2))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 4))
			{
				if (func_839(0, 1, 1, 1))
				{
					func_940("DCONTRA_HLPLS", "DCONTRA_VBLP", -1);
					func_403(1);
					unk_0xF6082E2ADA1C795B(&iLocal_750, 4);
					unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 10);
				}
			}
		}
	}
}

void func_940(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xD5DA3EC5EEC78358(sParam1);
	unk_0xED95966D04271FDA(0, 0, 0, iParam2);
}

bool func_941(int iParam0)
{
	return Global_2434604.f_2483[0 /*76*/].f_1 == iParam0;
}

void func_942()
{
	struct<3> Var0;
	
	if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 12))
	{
		if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
		{
			Var0 = { func_943(func_886(Local_127.f_197 + 1)) };
			if (unk_0x4A2E6F541CD8C36E(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1), Var0, 1) <= 200f)
			{
				uLocal_758 = unk_0x9FF6FFD9EB30D086();
				unk_0x52EF42797AD5A36D(uLocal_758, "Bell_02", Var0, "ALARMS_SOUNDSET", 0, 0, 0);
				unk_0xF6082E2ADA1C795B(&iLocal_750, 12);
			}
		}
	}
}

Vector3 func_943(int iParam0)
{
	struct<3> Var0;
	
	func_944(iParam0, &Var0);
	return Var0;
}

void func_944(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 54.191f, -2569.248f, 5.0046f };
			break;
		
		case 1:
			*uParam1 = { -1083.054f, -1261.893f, 4.534f };
			break;
		
		case 2:
			*uParam1 = { 896.3665f, -1035.749f, 34.1096f };
			break;
		
		case 3:
			*uParam1 = { 247.473f, -1956.943f, 22.1908f };
			break;
		
		case 4:
			*uParam1 = { -424.828f, 185.825f, 79.775f };
			break;
		
		case 5:
			*uParam1 = { -1042.482f, -2023.516f, 12.1616f };
			break;
		
		case 6:
			*uParam1 = { -1268.119f, -812.2741f, 16.1075f };
			break;
		
		case 7:
			*uParam1 = { -873.65f, -2735.948f, 12.9438f };
			break;
		
		case 8:
			*uParam1 = { 274.5224f, -3015.413f, 4.6993f };
			break;
		
		case 9:
			*uParam1 = { 1569.69f, -2129.792f, 77.3351f };
			break;
		
		case 10:
			*uParam1 = { -315.551f, -2698.654f, 6.5495f };
			break;
		
		case 11:
			*uParam1 = { 499.81f, -651.982f, 23.909f };
			break;
		
		case 12:
			*uParam1 = { -528.5296f, -1784.573f, 20.5853f };
			break;
		
		case 13:
			*uParam1 = { -295.8596f, -1353.238f, 30.3138f };
			break;
		
		case 14:
			*uParam1 = { 349.839f, 328.889f, 103.272f };
			break;
		
		case 15:
			*uParam1 = { 926.2818f, -1560.311f, 29.7404f };
			break;
		
		case 16:
			*uParam1 = { 759.566f, -909.466f, 24.244f };
			break;
		
		case 17:
			*uParam1 = { 1037.813f, -2173.062f, 30.5334f };
			break;
		
		case 18:
			*uParam1 = { 1019.116f, -2511.69f, 27.302f };
			break;
		
		case 19:
			*uParam1 = { -245.3405f, 203.3286f, 82.818f };
			break;
		
		case 20:
			*uParam1 = { 539.346f, -1945.682f, 23.984f };
			break;
		
		case 21:
			*uParam1 = { 96.1538f, -2216.4f, 5.1712f };
			break;
	}
}

void func_945()
{
	struct<3> Var0;
	
	if (func_383())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 1))
	{
		return;
	}
	if (!unk_0xAA4F14DA15DB0B51(Local_127.f_1, 13))
	{
		if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 11))
		{
			Var0 = { func_40() };
			if (unk_0xB7A628320EFF8E47(unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 0), Var0) < 22500f)
			{
				unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 11);
			}
		}
		if (func_480())
		{
			if (!unk_0xBDD3EABACAB97D09(uLocal_862))
			{
				uLocal_862 = unk_0x9EDB165CAADCAB2C(func_40());
				unk_0xD42DEAFD12809447(uLocal_862, 1);
			}
		}
		else if (unk_0xBDD3EABACAB97D09(uLocal_862))
		{
			unk_0x789C84F1B8496AD0(&uLocal_862);
		}
	}
	else if (unk_0xBDD3EABACAB97D09(uLocal_862))
	{
		unk_0x789C84F1B8496AD0(&uLocal_862);
	}
}

void func_946()
{
	if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1, 1))
	{
		if (!func_979())
		{
			if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 6))
			{
				func_208(1);
				unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_1), 1);
			}
		}
	}
}

void func_947()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	var uVar5;
	
	if (func_28())
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 < 10)
	{
		if (func_383())
		{
			if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_2, iVar3))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_127.f_206, iVar3))
				{
					if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar3 /*10*/].f_1))
					{
						if (!func_24(Local_127.f_2[iVar3 /*10*/].f_1))
						{
							if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
							{
								if (func_980() == Local_127.f_218)
								{
									if (func_954(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1)))
									{
										unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_2), iVar3);
									}
								}
							}
						}
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_3, iVar3))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_127.f_208, iVar3))
				{
					if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar3 /*10*/].f_2))
					{
						if (func_953(iVar3))
						{
							unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_3), iVar3);
						}
					}
				}
			}
			if (!unk_0xAA4F14DA15DB0B51(Local_397[unk_0x88641E5BC172153A() /*11*/].f_4, iVar3))
			{
				if (!unk_0xAA4F14DA15DB0B51(Local_127.f_207, iVar3))
				{
					if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar3 /*10*/].f_1))
					{
						if (!func_24(Local_127.f_2[iVar3 /*10*/].f_1))
						{
							if (unk_0xD42AA0CF76AFB4D8(unk_0xD1EE0E9FCD74A37B(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), 1), 10f, 1))
							{
								unk_0xF6082E2ADA1C795B(&(Local_397[unk_0x88641E5BC172153A() /*11*/].f_4), iVar3);
							}
						}
					}
				}
			}
		}
		if (func_480())
		{
			if (!func_383())
			{
				if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 13))
				{
					func_949(Local_127.f_2[iVar3 /*10*/].f_1, &(Local_769[iVar3 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1);
				}
			}
			else if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar3 /*10*/].f_1))
			{
				if (!func_24(Local_127.f_2[iVar3 /*10*/].f_1))
				{
					if (!unk_0xC4A39E4229BD3ABE(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), 0))
					{
						func_949(Local_127.f_2[iVar3 /*10*/].f_1, &(Local_769[iVar3 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
					}
				}
				else
				{
					func_949(Local_127.f_2[iVar3 /*10*/].f_1, &(Local_769[iVar3 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
				}
			}
		}
		switch (Local_127.f_2[iVar3 /*10*/].f_9)
		{
			case 1:
				if (unk_0x62E688B72E3C57B0())
				{
					if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar3 /*10*/].f_2))
					{
						if (func_13(Local_127.f_2[iVar3 /*10*/].f_2))
						{
							if (!func_24(Local_127.f_2[iVar3 /*10*/].f_1))
							{
								if (unk_0xF8ED2D0629FE764D(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), unk_0xECBE9D2902B2B964(Local_127.f_2[iVar3 /*10*/].f_2)))
								{
									uVar5 = unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1);
									if (func_27(&uVar5))
									{
										if (unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), -258271821) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), -258271821) != 0)
										{
											unk_0x37959C6A7F431781(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), unk_0xECBE9D2902B2B964(Local_127.f_2[iVar3 /*10*/].f_2), 25f, 786603);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x62E688B72E3C57B0())
				{
					if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar3 /*10*/].f_2))
					{
						if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar3 /*10*/].f_1))
						{
							if (func_13(Local_127.f_2[iVar3 /*10*/].f_2))
							{
								if (!func_24(Local_127.f_2[iVar3 /*10*/].f_1))
								{
									if (unk_0xF8ED2D0629FE764D(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), unk_0xECBE9D2902B2B964(Local_127.f_2[iVar3 /*10*/].f_2)))
									{
										if ((unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), -258271821) != 1 && unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), -258271821) != 0) || unk_0xAA4F14DA15DB0B51(Local_127.f_204, iVar3))
										{
											unk_0x37959C6A7F431781(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), unk_0xECBE9D2902B2B964(Local_127.f_2[iVar3 /*10*/].f_2), 30f, 786469);
											if (unk_0xAA4F14DA15DB0B51(Local_127.f_204, iVar3))
											{
												unk_0x507FE690B1271947(&(Local_127.f_204), iVar3);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_127.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), -828834893);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_231(Local_127.f_2[iVar3 /*10*/].f_1))
							{
								unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), 1);
								unk_0x8F2751B831A7B303(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), 0, 0);
							}
						}
					}
				}
				break;
			
			case 5:
				break;
			
			case 4:
				break;
			
			case 7:
				if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_127.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), -1442466670);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_231(Local_127.f_2[iVar3 /*10*/].f_1))
							{
								if (unk_0x434105A1C45F1BED(Local_127.f_2[iVar3 /*10*/].f_1))
								{
									unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), 0);
									unk_0x874ACAE2C28FC66F(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_127.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0xE897E371352225D5(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), 1120685857);
						if (iVar4 != 1 && iVar4 != 0)
						{
							unk_0x4C47904AE69D7393(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), 0);
							Var0 = { func_167() };
							unk_0x9DF7AF5A3312F943(unk_0xC09E9E2B61AD04E7(Local_127.f_2[iVar3 /*10*/].f_1), Var0, 250f, 0);
						}
					}
				}
				break;
		}
		iVar3++;
	}
	func_948();
}

void func_948()
{
	if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iLocal_1035 /*10*/].f_1))
	{
		if (!func_24(Local_127.f_2[iLocal_1035 /*10*/].f_1))
		{
			if (!unk_0xAA4F14DA15DB0B51(uLocal_1034, iLocal_1035))
			{
				unk_0xE82E0BF24586F04D(Local_127.f_2[iLocal_1035 /*10*/].f_1, 1);
				unk_0xF6082E2ADA1C795B(&iLocal_1034, iLocal_1035);
			}
		}
	}
	iLocal_1035++;
	if (iLocal_1035 == 10)
	{
		iLocal_1035 = 0;
	}
}

void func_949(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		if (func_952())
		{
			Global_2434604 = unk_0x0FFED3E94261A832();
		}
		if (bParam3)
		{
			func_951(unk_0xC09E9E2B61AD04E7(uParam0), uParam1, 1, Global_2434604, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_951(unk_0xC09E9E2B61AD04E7(uParam0), uParam1, -1, Global_2434604, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xBDD3EABACAB97D09(*uParam1))
	{
		func_950(uParam1);
	}
}

void func_950(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		unk_0x789C84F1B8496AD0(uParam0);
		bVar0 = true;
	}
	if (unk_0xBDD3EABACAB97D09(uParam0->f_1))
	{
		unk_0x789C84F1B8496AD0(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x2137828D03306CAF(uParam0->f_7))
	{
		if (!unk_0x769F0F6444C1ABE0(uParam0->f_7))
		{
			if (unk_0x4C2C9007DF4A7DB6(uParam0->f_7))
			{
				unk_0x740D0745C06D2DDC(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_951(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x8A41C463063AFC8E();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x769F0F6444C1ABE0(uParam0))
	{
		if (!unk_0x4C2C9007DF4A7DB6(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x740D0745C06D2DDC(iParam0, 1);
			}
			else
			{
				unk_0xEC788EF0F7E0437A(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x958B0F67184F0A15(iParam0, iParam2);
			unk_0xE27A966E15A7110C(iParam0, fParam6);
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				unk_0x697F84823ACFF84C(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xA4130A6FADB516EE(iParam0, iParam9);
		}
		unk_0xEEFEA3C5BD4B4CEC(iParam0, uParam4);
		unk_0xFA67C6B6608350D2(iParam0, uParam5);
		*uParam1 = unk_0x964C09CA77A5150B(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xEB5D36079067EBA5(*uParam1, iParam8);
				}
				unk_0xCE515166115E0087("STRING");
				if (bParam10)
				{
					unk_0xCF6846167A5EFE98(uParam7);
				}
				else
				{
					unk_0xD5DA3EC5EEC78358(uParam7);
				}
				unk_0xC3EC4F430EC11854(*uParam1);
				unk_0x697F84823ACFF84C(*uParam1, 7);
			}
		}
		if (!unk_0xAA4F14DA15DB0B51(uParam1->f_6, 2))
		{
			if (unk_0xBDD3EABACAB97D09(*uParam1))
			{
				if (!unk_0x58478145CAF8429C(sParam7))
				{
					unk_0xCE515166115E0087("STRING");
					if (bParam10)
					{
						unk_0xCF6846167A5EFE98(sParam7);
					}
					else
					{
						unk_0xD5DA3EC5EEC78358(sParam7);
					}
					unk_0xC3EC4F430EC11854(*uParam1);
				}
				unk_0xF6082E2ADA1C795B(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xC4A39E4229BD3ABE(iParam0, 0))
		{
			uParam1->f_1 = unk_0x05DF223770EFF48B(iParam0);
			if (!unk_0xAA4F14DA15DB0B51(uParam1->f_6, 3))
			{
				if (unk_0xBDD3EABACAB97D09(uParam1->f_1))
				{
					unk_0x697F84823ACFF84C(uParam1->f_1, 7);
					unk_0xF6082E2ADA1C795B(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xBDD3EABACAB97D09(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x507FE690B1271947(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_952()
{
	return Global_1312829;
}

int func_953(int iParam0)
{
	if (unk_0xD0BCF9877CD72A3F(Local_127.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_127.f_2[iParam0 /*10*/].f_2))
		{
			if (unk_0x12CF5C6534A94BEE(unk_0xECBE9D2902B2B964(Local_127.f_2[iParam0 /*10*/].f_2), 0, 7000) || unk_0x12CF5C6534A94BEE(unk_0xECBE9D2902B2B964(Local_127.f_2[iParam0 /*10*/].f_2), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_954(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0xE97AF56371F08BE1(unk_0x0FFED3E94261A832(), uParam0))
	{
		return 1;
	}
	if (unk_0x1412638F67038751(unk_0x0FFED3E94261A832(), uParam0))
	{
		return 1;
	}
	if (func_955())
	{
		if (unk_0x25D7C3DEE2A69693(unk_0x0FFED3E94261A832(), &uVar0))
		{
			if (unk_0xEE46DE31F43DCAF1(uVar0))
			{
				uVar1 = unk_0xC3A7AD90290CA72E(iVar0);
				if (unk_0x2137828D03306CAF(uVar1))
				{
					if (!unk_0xA9A04898798AE9E6(iVar1, 0))
					{
						if (unk_0xC4A39E4229BD3ABE(iVar1, 0))
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

bool func_955()
{
	return Global_1574289;
}

int func_956(bool bParam0)
{
	if (func_957(1))
	{
		return 1;
	}
	if (Global_2497344.f_4828.f_23)
	{
		Global_2497344.f_4828.f_23 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_332() == func_55() || !func_1072(func_332(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_957(bool bParam0)
{
	bool bVar0;
	
	if (!func_554(1))
	{
		bVar0 = false;
		if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 != func_55())
		{
			if (func_1072(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56, 0, 1))
			{
				if ((Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 4 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 8) || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_23 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_958(func_201(unk_0x0FFED3E94261A832())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_424(31);
				if (func_401(func_201(unk_0x0FFED3E94261A832())))
				{
					func_424(81);
				}
				if (unk_0x885F483F34E47503(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56))
				{
					Global_1621379 = func_517(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56, -2, 0, 0);
					if (!func_331(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56))
					{
						func_424(88);
					}
				}
				else
				{
					Global_1621379 = 1;
				}
				Global_1621363 = { Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_98 };
			}
			return 1;
		}
	}
	return 0;
}

int func_958(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_959()
{
	if (!func_960(unk_0x0FFED3E94261A832()))
	{
		func_206(25);
	}
}

bool func_960(int iParam0)
{
	return func_205(iParam0, 25);
}

void func_961()
{
	int iVar0;
	
	iVar0 = func_273(unk_0x0FFED3E94261A832());
	iLocal_864 = func_271(iVar0);
}

void func_962(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 != iParam0)
	{
		func_976(-1);
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 = iParam0;
		if (func_975() != -1)
		{
			func_974(-1);
		}
		if (func_973() != -1)
		{
			func_972(-1);
		}
		func_971(iParam2);
		func_969(iParam0);
		if (!func_215(iParam0))
		{
			fVar0 = func_214(iParam0);
			if (fVar0 != 1f)
			{
				func_211(fVar0);
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 1);
			}
		}
		if (!func_218(iParam0) || iParam3)
		{
			if (func_216(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xE0125DCD8DB3EFC3(0);
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					unk_0x22B46CFA2D746C96(unk_0x0FFED3E94261A832(), 0, 0);
					unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
				}
				unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 0);
			}
			else if (unk_0xA0F7964BC7FD74A9() < 5)
			{
				unk_0xFBC4596E19752537(1f);
				unk_0xE0125DCD8DB3EFC3(5);
			}
		}
		if (func_380())
		{
			func_206(27);
		}
		if (bParam1)
		{
			if (!func_374())
			{
				func_208(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 1) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 4)) || unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 0))
			{
				func_424(6);
			}
			func_968();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0xBAD89C59C9871295(3, 0);
			unk_0xBAD89C59C9871295(5, 0);
		}
		if (func_229(unk_0x0FFED3E94261A832()) && func_223(unk_0x0FFED3E94261A832()))
		{
			unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_1), 8);
		}
		func_964();
		if (func_963(iParam0))
		{
			unk_0xBAD89C59C9871295(3, 0);
			unk_0xBAD89C59C9871295(5, 0);
			unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 6);
		}
	}
}

int func_963(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_964()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_967();
	iVar2 = func_56(unk_0x0FFED3E94261A832());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x7C214DA899F05536(iVar0);
		if (unk_0x885F483F34E47503(iVar1))
		{
			if (func_305(iVar1, iVar2, 1) || func_965(iVar1, unk_0x0FFED3E94261A832()))
			{
				unk_0x8D82B526E9E8D0BD(unk_0x0FFED3E94261A832(), iVar1, uVar3);
				unk_0x8D82B526E9E8D0BD(iVar1, unk_0x0FFED3E94261A832(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_965(int iParam0, int iParam1)
{
	if (func_269(iParam0, 1) && func_269(iParam1, 1))
	{
		return (func_966(iParam0) == func_56(iParam1) || func_966(iParam1) == func_56(iParam0));
	}
	return 0;
}

int func_966(int iParam0)
{
	if (func_269(iParam0, 1))
	{
		return Global_1622795[func_56(iParam0) /*431*/].f_11.f_351;
	}
	return func_55();
}

int func_967()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_556();
	if (iVar0 != func_55())
	{
		if (func_1072(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar1 /*431*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_968()
{
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 1))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 1);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 4))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 4);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_2497344.f_4476, 6))
	{
		unk_0x507FE690B1271947(&(Global_2497344.f_4476), 6);
	}
	unk_0x507FE690B1271947(&(Global_2497344.f_4476), 0);
	unk_0x507FE690B1271947(&(Global_2497344.f_4476), 2);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_544 = 0;
	if (Global_2497344.f_4478 > 0)
	{
		unk_0xE0125DCD8DB3EFC3(Global_2497344.f_4478);
	}
	Global_2497344.f_4477 = 0;
}

void func_969(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_458(3766, -1, 0);
	iVar1 = func_970(iParam0);
	if (iVar1 != -1)
	{
		unk_0xF6082E2ADA1C795B(&iVar0, iVar1);
		func_457(3766, iVar0, -1, 1, 0);
	}
}

int func_970(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_971(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	if (Global_1622795[iVar0 /*431*/].f_11.f_173 != iParam0)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_173 = iParam0;
	}
}

void func_972(int iParam0)
{
	if (Global_2497344.f_4828.f_151 != iParam0)
	{
		Global_2497344.f_4828.f_151 = iParam0;
	}
}

int func_973()
{
	return Global_2497344.f_4828.f_151;
}

void func_974(int iParam0)
{
	if (Global_2497344.f_4828.f_150 != iParam0)
	{
		Global_2497344.f_4828.f_150 = iParam0;
	}
}

int func_975()
{
	return Global_2497344.f_4828.f_150;
}

void func_976(int iParam0)
{
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_31 = iParam0;
}

int func_977()
{
	struct<4> Var0;
	int iVar4;
	
	if (Local_127.f_196 != -1)
	{
		return Local_127.f_196;
	}
	Var0 = { func_978() };
	Local_127.f_198 = func_478(Var0.f_0);
	Local_127.f_197 = (Var0.f_0 - 1);
	if (Local_127.f_197 < 0)
	{
		Local_127.f_197 = 0;
	}
	if (Local_127.f_196 == -1)
	{
		iVar4 = unk_0x895FB9FE885E36ED(0, 10);
		if (iVar4 > 7)
		{
			Local_127.f_196 = 99;
		}
		else
		{
			Local_127.f_196 = 0;
		}
		if (Global_262145.f_13771 && Local_127.f_196 == 0)
		{
			Local_127.f_196 = 99;
		}
		else if (Global_262145.f_13770 && Local_127.f_196 == 99)
		{
			Local_127.f_196 = 0;
		}
	}
	return Local_127.f_196;
}

struct<4> func_978()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_174;
}

int func_979()
{
	int iVar0;
	
	iVar0 = func_980();
	if (iVar0 > -1)
	{
		if (Local_127.f_218 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_980()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x88641E5BC172153A();
	iVar1 = unk_0x0FFED3E94261A832();
	if (func_34(unk_0x0FFED3E94261A832(), 0))
	{
		iVar0 = func_382();
		iVar1 = Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_534;
	}
	if (Local_397[iVar0 /*11*/].f_10 != -1)
	{
		return Local_397[iVar0 /*11*/].f_10;
	}
	if (func_222(iVar1))
	{
		Local_397[iVar0 /*11*/].f_10 = iVar0;
		if (iVar0 == Local_127.f_218)
		{
			func_767(1);
		}
	}
	else if (func_269(iVar1, 1))
	{
		iVar2 = func_556();
		if (iVar2 != func_55())
		{
			if (unk_0x76BCE6C7B20502DA(iVar2))
			{
				Local_397[iVar0 /*11*/].f_10 = unk_0x675E1E93DBDAF30B(iVar2);
			}
		}
	}
	return Local_397[iVar0 /*11*/].f_10;
}

int func_981()
{
	if (func_383())
	{
		if (!func_63())
		{
			return 0;
		}
	}
	return 1;
}

int func_982()
{
	return Local_127.f_0;
}

int func_983(int iParam0)
{
	return Local_397[iParam0 /*11*/];
}

int func_984()
{
	var uVar0;
	
	func_989(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_988())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_987())
	{
		return 1;
	}
	if (func_986(157))
	{
		if (!func_985())
		{
			return 1;
		}
	}
	if (func_986(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_212() != 0)
	{
		if (unk_0x09952BA662A7629B(func_212()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_985()
{
	return Global_2445217.f_578;
}

int func_986(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_987()
{
	return Global_2454709;
}

bool func_988()
{
	return Global_2445217.f_573;
}

void func_989(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xD9298AF91B40C8C4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1145922221:
					func_990(iVar0);
					break;
				
				case 232736570:
					unk_0xD9298AF91B40C8C4(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 679497545)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_990(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_1072(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(iVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(iVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_991(uVar4, &bVar5))
						{
							unk_0x43D817D6742248A4(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xFECCD8AF38671477(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_991(int iParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(iParam0))
		{
			if (unk_0x3321AFCAE6E141D4(iParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(iParam0)))
				{
					unk_0x216B434C1A609F5B(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(iParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_992()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_993()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (!func_34(unk_0x0FFED3E94261A832(), 0))
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_750, 18))
		{
			if (!unk_0xAA4F14DA15DB0B51(iLocal_750, 6))
			{
				if (unk_0x591AF4C50B46E014())
				{
					if (func_979() || func_381())
					{
						func_678(0, 4, 0, 0, -1, -1, -1, -1);
						unk_0xF6082E2ADA1C795B(&iLocal_750, 6);
					}
				}
			}
			uVar0 = Local_127.f_196;
			iVar1 = -1;
			iVar2 = -1;
			iVar3 = Local_127.f_197 + 1;
			iVar4 = Local_127.f_198;
			iVar5 = -1;
			bVar6 = !func_383();
			iVar7 = -1;
			iVar8 = 0;
			iVar9 = 0;
			iVar5 = Local_127.f_213;
			if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 1) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 4))
			{
				iVar7 = 2;
			}
			else if (unk_0xAA4F14DA15DB0B51(Local_127.f_1, 8))
			{
				iVar7 = 1;
			}
			else if (((unk_0xAA4F14DA15DB0B51(Local_127.f_1, 3) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 9)) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 15)) || unk_0xAA4F14DA15DB0B51(Local_127.f_1, 5))
			{
				iVar7 = 0;
			}
			if (unk_0x591AF4C50B46E014())
			{
				Global_1773254.f_2 = Local_127.f_267;
				Global_1773254.f_3 = Local_127.f_268;
				func_1041(uVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar7, iVar8, iVar9, bVar6);
			}
		}
	}
	func_423();
	if (unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91()) == iLocal_755)
	{
		unk_0x3C030E241A3543D2(unk_0x2A5EB8B0FE590B91(), uLocal_757);
	}
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0x62E688B72E3C57B0())
		{
			unk_0x6790C1CEA32DA629(Local_127.f_261, 1);
		}
		func_420();
	}
	func_1040();
	if (Local_127.f_219 != -1)
	{
		if (unk_0xAA4F14DA15DB0B51(iLocal_750, 5))
		{
			if (unk_0x885F483F34E47503(unk_0x7C214DA899F05536(Local_127.f_219)))
			{
				func_418(unk_0x7C214DA899F05536(Local_127.f_219), 432, 0);
				func_416(unk_0x7C214DA899F05536(Local_127.f_219), 1, 0);
				func_415(unk_0x7C214DA899F05536(Local_127.f_219), 0, 0);
				func_414(unk_0x7C214DA899F05536(Local_127.f_219), 0);
				func_413(unk_0x7C214DA899F05536(Local_127.f_219), Global_262145.f_11007, 0);
			}
		}
	}
	if (func_182(0))
	{
		func_181(0);
	}
	if (unk_0xAA4F14DA15DB0B51(iLocal_751, 0))
	{
		if (!unk_0xAA4F14DA15DB0B51(iLocal_751, 2))
		{
			unk_0x9B17C5A6F6836A83("DisableFlightMusic", 0);
			unk_0x9B17C5A6F6836A83("WantedMusicDisabled", 0);
		}
	}
	unk_0xF6082E2ADA1C795B(&iLocal_751, 8);
	func_177();
	unk_0x768882AFD4B41EEA(1);
	func_767(0);
	func_1039(&(Local_127.f_269));
	func_995(1, 0);
	if (!func_34(unk_0x0FFED3E94261A832(), 0))
	{
		unk_0xE0125DCD8DB3EFC3(5);
	}
	func_994();
}

void func_994()
{
	unk_0xA232817B0B36F2E5();
}

void func_995(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1341327.f_1.f_108 != 0)
	{
		Global_1341327.f_1.f_108 = 0;
	}
	Global_1341327.f_1.f_109 = -1;
	Global_1341327.f_1.f_110 = -1;
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 167 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 168)
	{
		func_1037();
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 4);
	}
	if ((func_553() && iParam1 != 0) && Global_262145.f_15531)
	{
		if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 190 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192)
		{
			func_1021(unk_0x0FFED3E94261A832(), iParam1, Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192, 0);
			if (func_1020(iParam1))
			{
				func_1021(unk_0x0FFED3E94261A832(), iParam1, Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 192, 1);
			}
		}
	}
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 164 || Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 == 208)
	{
		unk_0xBAD89C59C9871295(3, 1);
		unk_0xBAD89C59C9871295(5, 1);
	}
	if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 != -1)
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_32 = -1;
		if (!unk_0xAA4F14DA15DB0B51(Global_1574379.f_1, 14) && !func_229(unk_0x0FFED3E94261A832()))
		{
			func_208(0);
		}
	}
	else if (func_1018(unk_0x0FFED3E94261A832()) != -1)
	{
		func_976(-1);
	}
	func_1017(func_55());
	if (func_182(16))
	{
		func_181(16);
	}
	func_1013(0);
	func_971(-1);
	func_1012();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1011(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1009(iVar1);
		iVar1++;
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 0))
	{
		unk_0xFBC4596E19752537(1f);
		unk_0xE0125DCD8DB3EFC3(5);
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 0);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 5))
	{
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 5);
	}
	iVar2 = func_407();
	if ((func_302(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1008(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_491(iVar2))
	{
		func_1004(-1, 1);
	}
	else if (((func_406(iVar2) || func_1003(iVar2)) || func_1002(iVar2)) || func_488(iVar2))
	{
	}
	else
	{
		func_1004(-1, 1);
	}
	func_204(19);
	func_204(20);
	func_204(21);
	func_204(22);
	func_204(27);
	func_181(3);
	func_181(4);
	func_181(7);
	func_1001();
	if (func_223(unk_0x0FFED3E94261A832()))
	{
		func_767(0);
	}
	func_204(29);
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 = func_55();
	if (Global_2497344.f_4828.f_23 != 0)
	{
		Global_2497344.f_4828.f_23 = 0;
	}
	if (bParam0)
	{
		func_183();
	}
	if (!func_229(unk_0x0FFED3E94261A832()))
	{
		func_203();
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 1);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 6))
	{
		unk_0xBAD89C59C9871295(3, 1);
		unk_0xBAD89C59C9871295(5, 1);
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 6);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 7))
	{
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 7);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 8))
	{
		func_1000("IMPEXP_SELFDES", 0);
		func_998("IMPEXP_SELFDES");
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 8);
	}
	func_996(iVar2, 0);
}

void func_996(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 9))
		{
			unk_0xB0D390F8FEB78903(func_997(iParam0));
			unk_0xF6082E2ADA1C795B(&(Global_1773245.f_3), 9);
		}
	}
	else if (unk_0xAA4F14DA15DB0B51(Global_1773245.f_3, 9))
	{
		unk_0x40F160C3038ECAF5(func_997(iParam0));
		unk_0x507FE690B1271947(&(Global_1773245.f_3), 9);
	}
}

char* func_997(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_998(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x47988E04F8E2F0AD(&(Global_103236.f_13922[iVar0 /*104*/])))
		{
			if (unk_0x35302CD5A5D37EED(&(Global_103236.f_13922[iVar0 /*104*/]), sParam0))
			{
				if (Global_103236.f_13922[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_757();
					Global_103236.f_13922[iVar0 /*104*/].f_99[Global_14443] = 0;
					if (func_999(iVar0))
					{
					}
					else
					{
						Global_103236.f_13922[iVar0 /*104*/].f_24 = 0;
						Global_103236.f_13922[iVar0 /*104*/].f_28 = 0;
						Global_103236.f_13922[iVar0 /*104*/].f_29 = 0;
					}
					unk_0xA216C26603EB04E7(Global_103236.f_13922[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_999(int iParam0)
{
	if ((Global_103236.f_13922[iParam0 /*104*/].f_99[0] == 1 || Global_103236.f_13922[iParam0 /*104*/].f_99[1] == 1) || Global_103236.f_13922[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1000(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x47988E04F8E2F0AD(&(Global_103236.f_13922[iVar0 /*104*/])))
		{
			if (unk_0x35302CD5A5D37EED(&(Global_103236.f_13922[iVar0 /*104*/]), sParam0))
			{
				if (Global_103236.f_13922[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_103236.f_13922[iVar0 /*104*/].f_24 = 1;
				if (Global_103236.f_13922[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_103236.f_13832[0 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_103236.f_13832[1 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_103236.f_13832[2 /*20*/].f_17 = 0;
					}
					if (Global_103236.f_13922[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_103236.f_13832[3 /*20*/].f_17 = 0;
					}
					Global_103236.f_13922[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_103236.f_13922[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1001()
{
	if (func_960(unk_0x0FFED3E94261A832()))
	{
		func_204(25);
	}
}

int func_1002(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_1003(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_1004(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_407();
	}
	if (iParam0 > 0)
	{
		if (func_556() != func_55())
		{
			if (func_1007(unk_0x0FFED3E94261A832()) == unk_0x0FFED3E94261A832())
			{
				Global_2484845.f_93[func_1006(iParam0)] = 1;
			}
		}
		iVar0 = func_1006(159);
		if (func_1005(iVar0, Global_262145.f_11258, bParam1))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(157);
		if (func_1005(iVar0, Global_262145.f_11258, bParam1))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(148);
		if (func_1005(iVar0, Global_262145.f_11258, bParam1))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(164);
		if (func_1005(iVar0, Global_262145.f_11258, bParam1))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(142);
		if (func_1005(iVar0, Global_262145.f_11258, bParam1))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(152);
		if (func_1005(iVar0, Global_262145.f_11258, bParam1))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(166);
		if (func_1005(iVar0, Global_262145.f_11258, bParam1))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(170);
		if (func_1005(iVar0, Global_262145.f_11258, bParam1))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(173);
		if (func_1005(iVar0, Global_262145.f_11258, bParam1))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(179);
		if (func_1005(iVar0, Global_262145.f_11258, bParam1))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(200);
		if (func_1005(iVar0, Global_262145.f_11258, bParam1))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(201);
		if (func_1005(iVar0, Global_262145.f_11258, bParam1))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(182);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(183);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(185);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(186);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(180);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(195);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(197);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(198);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(207);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(208);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(209);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(214);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(215);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(216);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(217);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(218);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(219);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(220);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(221);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1005(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_205(unk_0x0FFED3E94261A832(), 19) && !func_205(unk_0x0FFED3E94261A832(), 20)) && !func_205(unk_0x0FFED3E94261A832(), 9))
		{
			return 0;
		}
	}
	if (Global_2484845.f_93[iParam0] == 1 && func_11(&(Global_2484845[iParam0 /*2*/])))
	{
		if (func_535(&(Global_2484845[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2484845.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1006(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

int func_1007(int iParam0)
{
	return Global_1622795[iParam0 /*431*/].f_11.f_34;
}

void func_1008(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_407();
	}
	if (iParam0 > 0)
	{
		if (func_556() != func_55())
		{
			Global_2484845.f_93[func_1006(iParam0)] = 1;
		}
		iVar0 = func_1006(155);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(163);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(160);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(153);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(162);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(154);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(171);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(172);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(199);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(194);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(193);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(210);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(205);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(189);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1006(211);
		if (func_1005(iVar0, Global_262145.f_11259, 0))
		{
			func_9(&(Global_2484845[iVar0 /*2*/]));
			func_10(&(Global_2484845[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1009(int iParam0)
{
	if (!func_59(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_239[iParam0 /*3*/], func_1010(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_239[iParam0 /*3*/] = { func_1010() };
	}
	if (!func_59(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_226[iParam0 /*3*/], func_1010(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_226[iParam0 /*3*/] = { func_1010() };
	}
}

Vector3 func_1010()
{
	struct<3> Var0;
	
	return Var0;
}

void func_1011(int iParam0)
{
	if (!func_59(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_144[iParam0 /*3*/], func_1010(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_144[iParam0 /*3*/] = { func_1010() };
	}
	if (!func_59(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_119[iParam0 /*3*/], func_1010(), 0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_119[iParam0 /*3*/] = { func_1010() };
	}
}

void func_1012()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573830 = { Var0 };
	Global_1573830.f_13 = func_55();
	if (unk_0xAA4F14DA15DB0B51(Global_1573334, 3))
	{
		unk_0x507FE690B1271947(&Global_1573334, 3);
	}
}

void func_1013(bool bParam0)
{
	if (bParam0)
	{
		if (!func_1016(unk_0x0FFED3E94261A832(), 14))
		{
			func_1015(14);
		}
	}
	else if (func_1016(unk_0x0FFED3E94261A832(), 14))
	{
		func_1014(14);
	}
}

void func_1014(int iParam0)
{
	unk_0x507FE690B1271947(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_5), iParam0);
}

void func_1015(int iParam0)
{
	unk_0xF6082E2ADA1C795B(&(Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_5), iParam0);
}

bool func_1016(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_1622795[iParam0 /*431*/].f_11.f_5, iParam1);
}

void func_1017(int iParam0)
{
	if (func_222(unk_0x0FFED3E94261A832()))
	{
		if (unk_0x0FFED3E94261A832() != iParam0)
		{
			if (Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_351 != iParam0)
			{
				Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_351 = iParam0;
				if (iParam0 != func_55())
				{
				}
			}
		}
	}
}

int func_1018(int iParam0)
{
	if (func_1019(iParam0, 0))
	{
		return Global_1622795[iParam0 /*431*/].f_11.f_31;
	}
	return -1;
}

int func_1019(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/].f_11.f_31 != -1 || (iParam1 && Global_1622795[iParam0 /*431*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_1020(int iParam0)
{
	return func_649(iParam0) == 5;
}

void func_1021(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_648(iParam0, iParam1) && func_1036(iParam0, iParam1))
	{
		iVar0 = func_647(iParam0, iParam1);
		func_1024(iVar0, bParam2, bParam3);
		func_1022(iVar0, 1);
	}
}

void func_1022(int iParam0, int iParam1)
{
	func_632(func_1023(iParam0), iParam1, -1, 1);
	Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_6 = iParam1;
}

int func_1023(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

void func_1024(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_848(unk_0x0FFED3E94261A832(), iParam0);
	if (!bParam1)
	{
		func_1035(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2484769[iParam0];
		iVar0 = func_1034(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1774683 = -1;
		}
		func_1033(iParam0, 0, bParam2);
	}
	else if (func_1031(iParam0, bParam2))
	{
		iVar0 = func_1030(iVar2, 0);
		iVar3 = func_703(unk_0x0FFED3E94261A832(), iVar2);
		iVar4 = func_1029(iVar2, bParam2);
		iVar5 = func_1030(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1020(iVar2) && func_1028(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1035(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1027(unk_0x0FFED3E94261A832(), iVar2) > 0)
		{
			func_1026(iParam0, (Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 - (func_1029(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1030(iVar2, bParam2) / func_1027(unk_0x0FFED3E94261A832(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1020(iVar2) && func_1028(unk_0x0FFED3E94261A832(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1025(unk_0x0FFED3E94261A832(), iVar2, iVar0, bParam2);
}

void func_1025(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (func_639(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1592456[iParam0 /*635*/].f_259.f_226 = iParam2;
				}
				else
				{
					Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1026(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2)
	{
		Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_259.f_152[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1027(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_639(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1028(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_639(iParam1) && func_1020(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/] == iParam1)
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1029(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_649(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_15502;
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15507;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_15501;
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15506;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_15500;
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15505;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_15498;
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15503;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_15499;
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				uVar0 = Global_262145.f_15504;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_19520;
				if (func_646(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19521;
				}
			}
			else
			{
				uVar0 = Global_262145.f_19504;
				if (func_646(unk_0x0FFED3E94261A832(), iParam0, 0))
				{
					uVar0 = Global_262145.f_19505;
				}
			}
			break;
	}
	return uVar0;
}

int func_1030(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_649(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_15483;
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15492);
			}
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15497);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_15484;
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15491);
			}
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15496);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_15485;
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15490);
			}
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15495);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_15486;
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15488);
			}
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15493);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_15487;
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_15489);
			}
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_15494);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_19517;
			}
			else
			{
				iVar0 = Global_262145.f_19501;
			}
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_19518);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_19502);
				}
			}
			if (func_646(unk_0x0FFED3E94261A832(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_19519);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_19503);
				}
			}
			if (func_1028(unk_0x0FFED3E94261A832(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1031(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_633(15384, -1, -1);
	}
	return func_633(func_1032(iParam0), -1, -1);
}

int func_1032(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_1033(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_632(15384, iParam1, -1, 1);
		return;
	}
	func_632(func_1032(iParam0), iParam1, -1, 1);
}

int func_1034(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2484769[iParam0];
	iVar1 = func_848(unk_0x0FFED3E94261A832(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2484776;
	}
	if (func_1020(iVar1))
	{
		if (func_1028(unk_0x0FFED3E94261A832(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1035(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2484776 = iParam1;
		return;
	}
	Global_2484769[iParam0] = iParam1;
}

int func_1036(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_648(iParam0, iParam1))
	{
		iVar0 = func_647(iParam0, iParam1);
		if (Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_4 > 0 && Global_1592456[iParam0 /*635*/].f_259.f_152[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1037()
{
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 28);
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 29);
	func_1038(24);
}

void func_1038(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_7[iVar0]), iVar1);
}

void func_1039(var uParam0)
{
	if (unk_0xCE8A2E4F71221F00(*uParam0))
	{
		unk_0x9434EAB8BC00A2F9(*uParam0, 1);
	}
}

void func_1040()
{
	unk_0x28BD561DA3E207B1(iLocal_756);
	unk_0x28BD561DA3E207B1(iLocal_755);
}

void func_1041(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	var uVar0;
	struct<23> Var1;
	int iVar24;
	struct<24> Var25;
	struct<24> Var49;
	struct<25> Var73;
	
	uVar0 = unk_0xFABF5258A318B1DC();
	iVar24 = func_56(unk_0x0FFED3E94261A832());
	Var1.f_0 = Global_1773254;
	Var1.f_1 = Global_1773254.f_1;
	Var1.f_4 = Global_1773254.f_4;
	Var1.f_5 = Global_1773254.f_5;
	Var1.f_6 = Global_1773254.f_6;
	Var1.f_7 = Global_1773254.f_7;
	Var1.f_8 = Global_1773254.f_8;
	Var1.f_9 = Global_1773254.f_9;
	Var1.f_10 = Global_1773254.f_10;
	Var1.f_2 = Global_1773254.f_2;
	Var1.f_3 = Global_1773254.f_3;
	Var1.f_11 = iParam3;
	Var1.f_12 = iParam2;
	Var1.f_13 = uParam0;
	Var1.f_14 = func_1048();
	Var1.f_16 = iParam1;
	Var1.f_21 = iParam7;
	Var1.f_22 = iParam8;
	if (iVar24 != func_55() && unk_0x885F483F34E47503(iVar24))
	{
		Var1.f_17 = iParam4;
		Var1.f_18 = func_1047(iVar24, iParam3);
		Var1.f_19 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iParam4) / unk_0xBBDA792448DB5A89(func_475(iParam3))) * 100f));
		Var1.f_20 = (100 - unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_1044(iParam3, iVar24)) / unk_0xBBDA792448DB5A89(func_475(iParam3))) * 100f)));
		Var1.f_15 = func_1043(iVar24);
	}
	if (unk_0x591AF4C50B46E014())
	{
		if (unk_0x35302CD5A5D37EED(uVar0, "GB_CONTRABAND_SELL"))
		{
			Var25 = { Var1 };
			Var25.f_23 = iParam5;
			unk_0x4CCF0A52E506AC25(&Var25);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CONTRABAND_BUY"))
		{
			unk_0xCA85D35A0BB3AB56(&Var1);
		}
		else if (unk_0x35302CD5A5D37EED(sVar0, "GB_CONTRABAND_DEFEND"))
		{
			if (bParam9 == 1)
			{
				Var49 = { Var1 };
				Var49.f_23 = iParam5;
				unk_0x05572722A8C3F1D8(&Var49);
			}
			else
			{
				Var73 = { Var1 };
				Var73.f_23 = iParam5;
				Var73.f_24 = iParam6;
				unk_0x315B65B994E377D7(&Var73);
			}
		}
	}
	func_1042();
}

void func_1042()
{
	struct<18> Var0;
	
	Global_1773254 = { Var0 };
}

int func_1043(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1592456[iParam0 /*635*/].f_259.f_80[iVar0 /*3*/] > 0 && Global_1592456[iParam0 /*635*/].f_259.f_80[iVar0 /*3*/] <= 22)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1044(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_1046(iParam1, iParam0))
	{
		iVar0 = func_1045(iParam0, iParam1);
		iVar1 = func_474(iParam0);
		if (iVar1 == 2)
		{
			return (111 - iVar0);
		}
		else if (iVar1 == 1)
		{
			return (42 - iVar0);
		}
		else
		{
			return (16 - iVar0);
		}
	}
	return 0;
}

int func_1045(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1592456[iParam1 /*635*/].f_259.f_80[iVar0 /*3*/])
			{
				return Global_1592456[iParam1 /*635*/].f_259.f_80[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1046(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_42(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1592456[iParam0 /*635*/].f_259.f_80[iVar0 /*3*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1047(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam1 == Global_1592456[iParam0 /*635*/].f_259.f_80[iVar0 /*3*/])
			{
				return Global_1592456[iParam0 /*635*/].f_259.f_80[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_1048()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_56(unk_0x0FFED3E94261A832());
	if (iVar2 != func_55())
	{
		iVar1 = 1;
		while (iVar1 <= 22)
		{
			if (func_1046(iVar2, iVar1))
			{
				unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	return uVar0;
}

void func_1049(struct<21> Param0)
{
	func_1070(func_1071(Param0.f_0), Param0);
	unk_0x20DC9856B13C398C(10);
	unk_0x7E04478E16257BA0(3);
	func_1069(0, -1, 0);
	unk_0x2D179B3FFCF1AADA(&Local_127, 270);
	unk_0xA5929B03CD847BE8(&Local_397, 353);
	if (!func_1068())
	{
		func_993();
	}
	if (unk_0x591AF4C50B46E014())
	{
		unk_0xAC09235E2065C253(0);
		if (unk_0x62E688B72E3C57B0())
		{
		}
		func_1065();
		func_1050(0, 0);
		Local_397[unk_0x88641E5BC172153A() /*11*/] = 0;
	}
	else
	{
		func_993();
	}
}

void func_1050(int iParam0, int iParam1)
{
	func_1064();
	func_1053(1);
	if ((iParam0 != 0 && unk_0x885F483F34E47503(iParam1)) && func_1052(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xF6082E2ADA1C795B(&Global_1773240, 0);
				break;
			}
	}
	if (!func_548() && !func_269(unk_0x0FFED3E94261A832(), 1))
	{
		if (func_377())
		{
			func_207(3);
		}
	}
	func_207(4);
	if (func_554(0))
	{
		Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_56 = func_556();
	}
	if (func_401(iParam0))
	{
		func_701();
		Global_1773272.f_18 = func_697(func_332());
	}
	else if (func_405(func_1018(unk_0x0FFED3E94261A832())))
	{
		func_699();
		Global_1773325.f_18 = func_697(func_332());
	}
	func_1051();
}

void func_1051()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1341327.f_529[iVar0 /*49*/].f_1 = func_55();
		Global_1341327.f_529[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_1052(int iParam0, bool bParam1)
{
	return func_305(unk_0x0FFED3E94261A832(), iParam0, bParam1);
}

void func_1053(bool bParam0)
{
	int iVar0;
	
	func_1038(33);
	func_1038(34);
	func_1038(35);
	func_1038(36);
	func_1038(37);
	func_1038(38);
	func_1038(39);
	func_1038(40);
	func_1038(43);
	func_1038(41);
	func_1038(54);
	func_1038(42);
	func_1038(47);
	func_1063(23);
	func_1063(24);
	func_1038(92);
	unk_0x507FE690B1271947(&(Global_2497344.f_1699), 2);
	func_1062();
	func_1055();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2497344.f_4828.f_12[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1054(3))
	{
		func_1063(3);
	}
	else if (func_1054(4))
	{
		func_1063(4);
	}
	else if (func_1054(5))
	{
		func_1063(5);
	}
	else if (func_1054(6))
	{
		func_1063(6);
	}
	else if (func_1054(7))
	{
		func_1063(7);
	}
	else if (((((((((((((((((func_1054(0) || func_1054(1)) || func_1054(2)) || func_1054(8)) || func_1054(9)) || func_1054(10)) || func_1054(11)) || func_1054(12)) || func_1054(13)) || func_1054(14)) || func_1054(15)) || func_1054(16)) || func_1054(17)) || func_1054(18)) || func_1054(19)) || func_1054(20)) || func_1054(21)) || func_1054(22))
	{
		func_1063(8);
		func_1063(0);
		func_1063(1);
		func_1063(2);
		func_1063(9);
		func_1063(10);
		func_1063(11);
		func_1063(12);
		func_1063(13);
		func_1063(14);
		func_1063(15);
		func_1063(16);
		func_1063(17);
		func_1063(18);
		func_1063(19);
		func_1063(20);
		func_1063(21);
		func_1063(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2497344.f_4828.f_12[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1054(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_12[iVar0], iVar1);
}

void func_1055()
{
	if (func_1061())
	{
		func_1060(0);
		func_1060(1);
		func_1060(2);
		func_1060(3);
		func_1060(4);
		func_1060(5);
		func_1060(6);
		func_1060(7);
		func_1060(8);
		func_1060(9);
		func_1060(10);
		func_1060(11);
		func_1060(12);
		if (func_1059(13))
		{
			if (func_1057(func_1058(), 3))
			{
				func_1056(func_1058(), 3);
			}
			func_1060(13);
		}
	}
}

void func_1056(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_103236.f_27831[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_1057(int iParam0, int iParam1)
{
	if (Global_103236.f_27831[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_1058()
{
	if (func_764())
	{
		Global_103236.f_27831[76 /*29*/].f_24[Global_14443] = 1;
	}
	return 76;
}

bool func_1059(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xAA4F14DA15DB0B51(Global_2497344.f_4828.f_17[iVar0], iVar1);
}

void func_1060(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_17[iVar0]), iVar1);
}

int func_1061()
{
	if ((((((((((((func_1059(0) || func_1059(1)) || func_1059(2)) || func_1059(3)) || func_1059(4)) || func_1059(5)) || func_1059(6)) || func_1059(7)) || func_1059(8)) || func_1059(9)) || func_1059(10)) || func_1059(11)) || func_1059(12))
	{
		return 1;
	}
	return 0;
}

void func_1062()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2497344.f_4828.f_15[iVar0] = 0;
		iVar0++;
	}
}

void func_1063(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x507FE690B1271947(&(Global_2497344.f_4828.f_12[iVar0]), iVar1);
}

void func_1064()
{
	struct<14> Var0;
	
	Global_1773254 = { Var0 };
	Global_1773254.f_14 = 0;
	Global_1773254.f_15 = 0;
}

void func_1065()
{
	int iVar0;
	
	unk_0xEE8231F61ED038B0("relDefendPlayer", &iLocal_755);
	unk_0xEE8231F61ED038B0("relDefendAI", &iLocal_756);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x3A8EFBE4AB457FE2(1, Global_1574695[iVar0], iLocal_755);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_755, Global_1574695[iVar0]);
		unk_0x3A8EFBE4AB457FE2(1, Global_1574695[iVar0], iLocal_756);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_756, Global_1574695[iVar0]);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_755, joaat("COP"));
		unk_0x3A8EFBE4AB457FE2(1, joaat("COP"), iLocal_755);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_755, Global_1574739[5]);
		unk_0x3A8EFBE4AB457FE2(1, Global_1574739[5], iLocal_755);
		unk_0x3A8EFBE4AB457FE2(1, iLocal_755, Global_1574728);
		unk_0x3A8EFBE4AB457FE2(1, Global_1574728, iLocal_755);
		iVar0++;
	}
	unk_0x3A8EFBE4AB457FE2(5, iLocal_755, iLocal_756);
	unk_0x3A8EFBE4AB457FE2(5, iLocal_756, iLocal_755);
	unk_0x3A8EFBE4AB457FE2(1, 2017343592, iLocal_756);
	unk_0x3A8EFBE4AB457FE2(5, 2017343592, iLocal_755);
	func_1067(1, &iLocal_756);
	func_1066(&iLocal_756);
	func_1066(&iLocal_755);
}

void func_1066(int iParam0)
{
	unk_0x3A8EFBE4AB457FE2(1, -1865950624, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1865950624);
	unk_0x3A8EFBE4AB457FE2(1, 296331235, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 296331235);
	unk_0x3A8EFBE4AB457FE2(1, 1166638144, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 1166638144);
	unk_0x3A8EFBE4AB457FE2(1, 2037579709, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 2037579709);
	unk_0x3A8EFBE4AB457FE2(1, 2017343592, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 2017343592);
	unk_0x3A8EFBE4AB457FE2(1, -1821475077, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1821475077);
	unk_0x3A8EFBE4AB457FE2(1, 1782292358, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, 1782292358);
	unk_0x3A8EFBE4AB457FE2(1, -1033021910, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1033021910);
	unk_0x3A8EFBE4AB457FE2(1, -1285976420, *iParam0);
	unk_0x3A8EFBE4AB457FE2(1, *iParam0, -1285976420);
}

void func_1067(int iParam0, int iParam1)
{
	unk_0x3A8EFBE4AB457FE2(iParam0, joaat("COP"), *iParam1);
	unk_0x3A8EFBE4AB457FE2(iParam0, *iParam1, joaat("COP"));
	unk_0x3A8EFBE4AB457FE2(iParam0, joaat("army"), *iParam1);
	unk_0x3A8EFBE4AB457FE2(iParam0, *iParam1, joaat("army"));
	unk_0x3A8EFBE4AB457FE2(iParam0, -183807561, *iParam1);
	unk_0x3A8EFBE4AB457FE2(iParam0, *iParam1, -183807561);
}

int func_1068()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x591AF4C50B46E014())
		{
			return 0;
		}
		if (unk_0x3F76B69AE9B695DD())
		{
			return 1;
		}
		if (func_988())
		{
			return 0;
		}
		if (func_986(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_1069(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_994();
			}
			else
			{
				return 0;
			}
		}
		if (!func_952())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_994();
					}
					else
					{
						return 0;
					}
				}
				if (func_988())
				{
					if (!bParam2)
					{
						func_994();
					}
					else
					{
						return 0;
					}
				}
				if (func_986(155))
				{
					if (!bParam2)
					{
						func_994();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAD61841DF357CB5C())
			{
				if (!bParam2)
				{
					func_994();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBC3BAD18EBEFD169();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			if (!bParam2)
			{
				func_994();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAD61841DF357CB5C())
	{
		if (!bParam2)
		{
			func_994();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1070(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_994();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_1071(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 109:
			return 32;
		
		case 110:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 2;
		
		case 132:
			return 1;
		
		case 128:
			return 2;
		
		case 129:
			return 4;
		
		case 130:
			return 2;
		
		case 131:
			return 2;
		
		case 113:
			return 1;
		
		case 133:
			return 2;
		
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return 0;
		
		case 143:
			return 1;
		
		case 140:
			return 4;
		
		case 141:
			return 16;
		
		case 142:
			return 32;
		
		default:
	}
	return 0;
}

int func_1072(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

