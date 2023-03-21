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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	var uLocal_102 = 0;
	struct<3> Local_103 = { 0, 0, 0 } ;
	float fLocal_106 = 0f;
	struct<3> Local_107 = { 0, 0, 0 } ;
	float fLocal_110 = 0f;
	struct<3> Local_111 = { 0, 0, 0 } ;
	float fLocal_114 = 0f;
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
	var uLocal_127 = 0;
	struct<270> Local_128 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	struct<11> Local_398[32];
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	struct<8> Local_770[10];
	var uLocal_851[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	int iLocal_865 = 0;
	var uLocal_866 = 0;
	int iLocal_867 = 0;
	char* sLocal_868 = NULL;
	var uLocal_869 = 16;
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
	var uLocal_1034 = 0;
	int iLocal_1035 = 0;
	int iLocal_1036 = 0;
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	fLocal_97 = -0.05f;
	fLocal_98 = 0.92f;
	fLocal_99 = 1.94f;
	fLocal_100 = 2.99f;
	fLocal_101 = 3.7f;
	Local_103 = { -0.4f, 0.96f, 0.85f };
	fLocal_106 = 0.95f;
	Local_107 = { 0f, 2f, 2.5f };
	fLocal_110 = 1.75f;
	Local_111 = { 0f, 0f, 120f };
	fLocal_114 = 35.5f;
	iLocal_754 = -2;
	iLocal_755 = -1;
	sLocal_868 = "";
	if (unk_0x27CA09C6DFAB1E79() && func_1124(unk_0x3D35F9864E4640B1(), 0, 1))
	{
		func_1096(ScriptParam_0);
	}
	else
	{
		func_1041();
	}
	while (true)
	{
		func_1040();
		if (func_1032())
		{
			func_1041();
		}
		Global_1779220.f_2 = Local_128.f_267;
		Global_1779220.f_3 = Local_128.f_268;
		switch (func_1031(unk_0x43B24C247F35B6BC()))
		{
			case 0:
				if (unk_0x1F1D255CB6501243("ALARM_BELL_02", 0, -1))
				{
					if (func_1030() == 1)
					{
						if (func_1029())
						{
							func_1028();
							if (func_1027())
							{
								func_1010(169, 1, func_1025(), 0);
								func_1009();
								func_1007();
							}
							else
							{
								func_1010(169, 0, func_1025(), 0);
							}
							Local_398[unk_0x43B24C247F35B6BC() /*11*/] = 1;
						}
					}
					else if (func_1030() == 4)
					{
						Local_398[unk_0x43B24C247F35B6BC() /*11*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_1004(1))
				{
					Local_398[unk_0x43B24C247F35B6BC() /*11*/] = 2;
				}
				if (func_1030() == 1)
				{
					func_995();
					func_922();
					func_405();
					func_396();
					if (!func_395())
					{
						if (func_1027() || func_393())
						{
							func_247(&(Global_1344830.f_531), &Global_1344830, 26, &(Global_1344830.f_1), &(Global_1344830.f_114), -1, 0);
						}
					}
					else
					{
						func_242();
					}
					func_191();
					func_190();
				}
				else if (func_1030() == 4)
				{
					Local_398[unk_0x43B24C247F35B6BC() /*11*/] = 3;
				}
				func_184();
				break;
			
			case 3:
				func_183(&(Local_128.f_224));
				if (func_182(&(Local_128.f_224)))
				{
					Local_398[unk_0x43B24C247F35B6BC() /*11*/] = 4;
				}
				break;
			
			case 2:
				Local_398[unk_0x43B24C247F35B6BC() /*11*/] = 4;
			
			case 4:
				func_1041();
				break;
		}
		if (unk_0xEF0CB8FF125B9F9C())
		{
			switch (func_1030())
			{
				case 0:
					if (func_1025() > -1)
					{
						func_180();
						func_178();
						func_177();
						func_174();
						if (func_43())
						{
							unk_0x2462B56C1A432B47(&(Local_128.f_267), &(Local_128.f_268));
							func_37();
							Local_128.f_0 = 1;
							Local_128.f_218 = unk_0x43B24C247F35B6BC();
							Local_128.f_219 = unk_0x3D35F9864E4640B1();
							func_1010(169, 1, func_1025(), 0);
						}
					}
					break;
				
				case 1:
					func_29();
					func_174();
					func_22();
					func_4();
					if (func_2())
					{
						Local_128.f_0 = 4;
					}
					else if (func_1())
					{
						Local_128.f_0 = 4;
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
	if (Global_2501777.f_4867.f_24)
	{
		Global_2501777.f_4867.f_24 = 0;
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
	if (unk_0x2A3398C6222EB190(Local_128.f_1, 2))
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
	switch (Local_128.f_214)
	{
		case 0:
			func_19();
			func_17();
			if (func_395())
			{
				func_15();
				func_5();
			}
			if (unk_0x2A3398C6222EB190(Local_128.f_1, 1))
			{
				Local_128.f_214 = 2;
			}
			else if (unk_0x2A3398C6222EB190(Local_128.f_1, 3))
			{
				Local_128.f_214 = 2;
			}
			else if (unk_0x2A3398C6222EB190(Local_128.f_1, 4))
			{
				Local_128.f_214 = 2;
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
	
	if (Local_128.f_215 > -1)
	{
		return;
	}
	if (!func_12())
	{
		return;
	}
	if (!func_11(&(Local_128.f_228)))
	{
		if (unk_0x2A3398C6222EB190(Local_128.f_1, 6))
		{
			if (unk_0x2A3398C6222EB190(Local_128.f_1, 11))
			{
				if (!unk_0x2A3398C6222EB190(Local_128.f_1, 7))
				{
					func_10(&(Local_128.f_228), 0, 0);
				}
			}
		}
	}
	if (func_11(&(Local_128.f_228)))
	{
		if (Local_128.f_222 > 0)
		{
			if (unk_0x2A3398C6222EB190(Local_128.f_1, 7))
			{
				func_9(&(Local_128.f_228));
				Local_128.f_222 = 255;
			}
			else
			{
				iVar0 = func_8();
				iVar1 = func_7();
				if (func_6(&(Local_128.f_228), iVar0, 0))
				{
					func_9(&(Local_128.f_228));
					Local_128.f_222 = (Local_128.f_222 - iVar1);
					if (Local_128.f_222 < 0)
					{
						Local_128.f_222 = 0;
					}
				}
			}
		}
		if (Local_128.f_222 <= 0)
		{
			if (!unk_0x2A3398C6222EB190(Local_128.f_1, 9))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 9);
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
	if (unk_0x27CA09C6DFAB1E79() && !bParam2)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0)) >= iParam1)
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
		if (unk_0x27CA09C6DFAB1E79() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x898811EA80D35DE2();
			}
			else
			{
				*uParam0 = unk_0x51A193745FDE917D();
			}
		}
		else
		{
			*uParam0 = unk_0x31CD6E9F83C10233();
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
	
	if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_128.f_2[0 /*10*/].f_2))
		{
			iVar0 = unk_0x3251C2B06497863C(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), -1, 0);
			if (iVar0 != 0)
			{
				if (!unk_0x8682D8A6269E52C9(iVar0))
				{
					if (!unk_0x972B5786EA49FE1A(iVar0))
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
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		return !func_14(unk_0xD7E2A160FD5DEEE1(uParam0));
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (unk_0x7A6C051038031EFA(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x432757A9E7AAFA96(iParam0, 0))
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
	if (!func_395())
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(Local_128.f_1, 6))
	{
		if (!func_11(&(Local_128.f_234)))
		{
			func_10(&(Local_128.f_234), 0, 0);
		}
		if (func_6(&(Local_128.f_234), func_16(), 0))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 6);
		}
	}
}

int func_16()
{
	return 60000;
}

void func_17()
{
	if (!func_395())
	{
		return;
	}
	if (!func_11(&(Local_128.f_238)))
	{
		func_10(&(Local_128.f_238), 0, 0);
	}
	else if (func_6(&(Local_128.f_238), func_18(), 0))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 15);
	}
}

int func_18()
{
	return 1800000;
}

void func_19()
{
	if (func_395())
	{
		return;
	}
	if (!func_11(&(Local_128.f_236)))
	{
		func_10(&(Local_128.f_236), 0, 0);
		return;
	}
	else if (!func_6(&(Local_128.f_236), func_21(), 0))
	{
		return;
	}
	if (!func_11(&(Local_128.f_226)))
	{
		func_10(&(Local_128.f_226), 0, 0);
	}
	else if (func_6(&(Local_128.f_226), func_20(), 0))
	{
		unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 3);
	}
}

int func_20()
{
	return Global_262145.f_15259;
}

int func_21()
{
	return Local_128.f_223;
}

void func_22()
{
	int iVar0;
	int iVar1;
	
	if (func_28())
	{
		return;
	}
	if (unk_0xEF0CB8FF125B9F9C())
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			switch (Local_128.f_2[iVar1 /*10*/].f_9)
			{
				case 0:
					if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar1 /*10*/].f_1))
					{
						if (func_395())
						{
							Local_128.f_2[iVar1 /*10*/].f_9 = 8;
						}
						else
						{
							Local_128.f_2[iVar1 /*10*/].f_9 = 6;
						}
					}
					break;
				
				case 8:
					if (unk_0x2A3398C6222EB190(Local_128.f_1, 6))
					{
						Local_128.f_2[iVar1 /*10*/].f_9 = 1;
					}
					else
					{
						func_25(iVar0, iVar1);
					}
					break;
				
				case 1:
					if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar1 /*10*/].f_1))
					{
						if (func_395())
						{
							func_25(iVar0, iVar1);
						}
					}
					break;
				
				case 2:
					break;
				
				case 3:
					if (func_395())
					{
						if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar1 /*10*/].f_1))
						{
							if (!func_24(Local_128.f_2[iVar1 /*10*/].f_1))
							{
								if (!unk_0x84432DB7C4069064(unk_0xECB7D3275586261E(Local_128.f_2[iVar1 /*10*/].f_1)))
								{
									Local_128.f_2[iVar1 /*10*/].f_9 = 7;
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
	if (func_395())
	{
		if (iParam0 == 1)
		{
			if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iParam0 /*10*/].f_1))
			{
				if (!func_24(Local_128.f_2[iParam0 /*10*/].f_1))
				{
					if (unk_0x84432DB7C4069064(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1)))
					{
						if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_1))
						{
							if (func_24(Local_128.f_2[0 /*10*/].f_1))
							{
								Local_128.f_2[iParam0 /*10*/].f_9 = 3;
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
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		return unk_0x8682D8A6269E52C9(unk_0xECB7D3275586261E(uParam0));
	}
	return 1;
}

void func_25(int iParam0, int iParam1)
{
	if (!func_24(Local_128.f_2[iParam1 /*10*/].f_1))
	{
		if (unk_0x84432DB7C4069064(unk_0xECB7D3275586261E(Local_128.f_2[iParam1 /*10*/].f_1)))
		{
			if (unk_0x2A3398C6222EB190(Local_128.f_205, iParam1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_204), iParam1);
				iParam0 = unk_0xECB7D3275586261E(Local_128.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_128.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_128.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (unk_0x2A3398C6222EB190(Local_128.f_206, iParam1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_204), iParam1);
				iParam0 = unk_0xECB7D3275586261E(Local_128.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_128.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_128.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (unk_0x2A3398C6222EB190(Local_128.f_207, iParam1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_204), iParam1);
				iParam0 = unk_0xECB7D3275586261E(Local_128.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_128.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_128.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (func_26())
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_204), iParam1);
				iParam0 = unk_0xECB7D3275586261E(Local_128.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_128.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_128.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else
			{
				func_23(iParam1);
			}
		}
		else if (Local_128.f_2[iParam1 /*10*/].f_9 != 7)
		{
			Local_128.f_2[iParam1 /*10*/].f_9 = 7;
		}
	}
}

int func_26()
{
	if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_1))
	{
		if (func_24(Local_128.f_2[0 /*10*/].f_1))
		{
			return 1;
		}
	}
	if (unk_0xAA55DF0CB38F413B(Local_128.f_2[1 /*10*/].f_1))
	{
		if (func_24(Local_128.f_2[1 /*10*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (unk_0x90219307C9D2728D(*iParam0, 0))
	{
		if (unk_0x3251C2B06497863C(unk_0x89A8BEEC1AA87D33(*iParam0), -1, 0) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_28()
{
	return ((((((unk_0x2A3398C6222EB190(Local_128.f_1, 1) || unk_0x2A3398C6222EB190(Local_128.f_1, 3)) || unk_0x2A3398C6222EB190(Local_128.f_1, 4)) || unk_0x2A3398C6222EB190(Local_128.f_1, 5)) || unk_0x2A3398C6222EB190(Local_128.f_1, 8)) || unk_0x2A3398C6222EB190(Local_128.f_1, 9)) || unk_0x2A3398C6222EB190(Local_128.f_1, 15));
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
	if (Local_128.f_0 != 4)
	{
		iLocal_753 = 0;
		while (iLocal_753 < unk_0x32C41AA379415932())
		{
			if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iLocal_753)))
			{
				iVar5 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iLocal_753));
				if (!func_34(iVar5, 0))
				{
					if (func_1124(iVar5, 1, 1))
					{
					}
					func_33(iLocal_753);
					func_32(iLocal_753);
					if (func_395())
					{
						if (!unk_0x2A3398C6222EB190(Local_128.f_1, 8))
						{
							if (unk_0x2A3398C6222EB190(Local_398[iLocal_753 /*11*/].f_1, 9))
							{
								unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 8);
							}
						}
						if (!unk_0x2A3398C6222EB190(Local_128.f_1, 6))
						{
							if (unk_0x2A3398C6222EB190(Local_398[iLocal_753 /*11*/].f_1, 7))
							{
								unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 6);
							}
						}
						if (!unk_0x2A3398C6222EB190(Local_128.f_1, 11))
						{
							if (unk_0x2A3398C6222EB190(Local_398[iLocal_753 /*11*/].f_1, 10))
							{
								unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 11);
							}
						}
						if (!unk_0x2A3398C6222EB190(Local_128.f_217, iLocal_753))
						{
							if (unk_0x2A3398C6222EB190(Local_398[iLocal_753 /*11*/].f_1, 8))
							{
								unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_217), iLocal_753);
							}
						}
						else if (!unk_0x2A3398C6222EB190(Local_398[iLocal_753 /*11*/].f_1, 8))
						{
							unk_0xD804ACF2A7171150(&(Local_128.f_217), iLocal_753);
						}
						if (iVar2 == -1)
						{
							if (unk_0x2A3398C6222EB190(Local_398[iLocal_753 /*11*/].f_1, 3))
							{
								iVar2 = iLocal_753;
							}
						}
						if (!unk_0x2A3398C6222EB190(Local_128.f_1, 4))
						{
							if (unk_0x2A3398C6222EB190(Local_398[iLocal_753 /*11*/].f_1, 2))
							{
								unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 4);
								Local_128.f_221 = Local_128.f_216;
							}
						}
						if (!unk_0x2A3398C6222EB190(Local_128.f_1, 17))
						{
							if (unk_0x2A3398C6222EB190(Local_398[iLocal_753 /*11*/].f_1, 15))
							{
								unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 17);
							}
						}
						if (bVar4)
						{
							if (unk_0x2A3398C6222EB190(Local_128.f_1, 4))
							{
								if (!unk_0x2A3398C6222EB190(Local_398[iLocal_753 /*11*/].f_1, 14))
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
					else if (!unk_0x2A3398C6222EB190(Local_128.f_1, 13))
					{
						if (unk_0x2A3398C6222EB190(Local_398[iLocal_753 /*11*/].f_1, 11))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 13);
						}
					}
					if (!unk_0x2A3398C6222EB190(Local_128.f_1, 2))
					{
						if (!bVar3)
						{
							if (func_28())
							{
								if (!unk_0x2A3398C6222EB190(Local_398[iLocal_753 /*11*/].f_1, 4))
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
					if (!unk_0x2A3398C6222EB190(Local_128.f_1, 16))
					{
						if (unk_0x2A3398C6222EB190(Local_398[iLocal_753 /*11*/].f_1, 13))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 16);
						}
					}
				}
			}
			else if (!unk_0x2A3398C6222EB190(Local_128.f_1, 5))
			{
				if (Local_128.f_218 > -1)
				{
					if (iLocal_753 == Local_128.f_218)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 5);
					}
				}
			}
			iLocal_753++;
		}
		func_31();
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (unk_0x2A3398C6222EB190(Local_128.f_209, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_128.f_213 != iVar0)
		{
			Local_128.f_213 = iVar0;
		}
		if (!unk_0x2A3398C6222EB190(Local_128.f_1, 1))
		{
			if (iVar0 >= func_30())
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 1);
			}
		}
		if (func_395())
		{
			if (!unk_0x2A3398C6222EB190(Local_128.f_1, 7))
			{
				if (Local_128.f_217 != 0)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 7);
				}
			}
			else if (Local_128.f_217 == 0)
			{
				unk_0xD804ACF2A7171150(&(Local_128.f_1), 7);
			}
			if (!func_28())
			{
				if (Local_128.f_215 != iVar2)
				{
					Local_128.f_215 = iVar2;
					if (Local_128.f_215 > -1)
					{
						uVar6 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(Local_128.f_215));
						Local_128.f_216 = uVar6;
					}
					else
					{
						Local_128.f_216 = -1;
					}
				}
			}
			if (!unk_0x2A3398C6222EB190(Local_128.f_1, 18))
			{
				if (bVar4)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 18);
				}
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_128.f_1, 2))
		{
			if (!bVar3)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 2);
			}
		}
	}
}

int func_30()
{
	switch (Local_128.f_197)
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
	
	if (func_395())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar0 /*10*/].f_1))
		{
			if (!unk_0x2A3398C6222EB190(Local_128.f_209, iVar0))
			{
				if (!func_11(&(Local_128.f_240[iVar0 /*2*/])))
				{
					if (func_24(Local_128.f_2[iVar0 /*10*/].f_1))
					{
						func_10(&(Local_128.f_240[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_128.f_240[iVar0 /*2*/]), 10000, 0))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_209), iVar0);
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
		if (!unk_0x2A3398C6222EB190(Local_128.f_205, iVar0))
		{
			if (unk_0x2A3398C6222EB190(Local_398[iParam0 /*11*/].f_5, iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_205), iVar0);
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_128.f_206, iVar0))
		{
			if (unk_0x2A3398C6222EB190(Local_398[iParam0 /*11*/].f_2, iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_206), iVar0);
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_128.f_208, iVar0))
		{
			if (unk_0x2A3398C6222EB190(Local_398[iParam0 /*11*/].f_3, iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_208), iVar0);
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_128.f_207, iVar0))
		{
			if (unk_0x2A3398C6222EB190(Local_398[iParam0 /*11*/].f_4, iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_207), iVar0);
			}
		}
		if (!unk_0x2A3398C6222EB190(Local_128.f_209, iVar0))
		{
			if (unk_0x2A3398C6222EB190(Local_398[iParam0 /*11*/].f_6, iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_209), iVar0);
			}
			else if (unk_0x2A3398C6222EB190(Local_398[iParam0 /*11*/].f_7, iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_209), iVar0);
			}
			else if (unk_0x2A3398C6222EB190(Local_398[iParam0 /*11*/].f_8, iVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_209), iVar0);
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	if (func_395())
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(Local_128.f_210, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar0 /*10*/].f_2))
			{
				if (func_13(Local_128.f_2[iVar0 /*10*/].f_2))
				{
					unk_0xA2A739A5B0AF6AEC(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[iVar0 /*10*/].f_2), unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iParam0)), 1);
					unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_210), iParam0);
				}
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_210), iParam0);
			}
			iVar0++;
		}
	}
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
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
	if (Global_1312833[iVar1] == 1)
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
		func_38(&(Local_128.f_269), Var0);
	}
}

void func_38(var uParam0, struct<3> Param1)
{
	if (!unk_0x8D1E00A3532AD265(*uParam0))
	{
		*uParam0 = unk_0x75C680354D53DD01(Param1 - Vector(25f, 25f, 25f), Param1 + Vector(25f, 25f, 25f), 1f, 0.25f, 1, 1);
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
	return func_41(Local_128.f_197 + 1);
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
	
	if (func_395())
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
			if (!unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar0 /*10*/].f_1))
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
	if (!unk_0xAA55DF0CB38F413B(Local_128.f_2[iParam0 /*10*/].f_1))
	{
		if (unk_0x163F08900ED3E103(1))
		{
			if (func_60(iVar0))
			{
				if (func_59(Local_128.f_2[iParam0 /*10*/].f_5, 0f, 0f, 0f, 0))
				{
					if (func_47(iParam0, &Var1, &uVar4))
					{
						Local_128.f_2[iParam0 /*10*/].f_5 = { Var1 };
						Local_128.f_2[iParam0 /*10*/].f_8 = uVar4;
					}
				}
				else if (func_46(&(Local_128.f_2[iParam0 /*10*/].f_1), 22, iVar0, Local_128.f_2[iParam0 /*10*/].f_5, Local_128.f_2[iParam0 /*10*/].f_8, 1, 1, 1))
				{
					unk_0x87A7451620C12125(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 1);
					unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x7F53E53C6F32D196(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), Global_1574737);
					unk_0x93A192D130FAAAE9(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 1);
					if ((iParam0 % 2) == 0)
					{
						iVar6 = unk_0x8DB158934E64B062(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1));
						fVar7 = unk_0xBBDA792448DB5A89(iVar6);
						if (fVar5 != 0f)
						{
							fVar7 = (fVar7 * fVar5);
						}
						iVar6 = unk_0xF2DB717A73826179(fVar7);
						unk_0x845D37CEF8F0ABAF(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), iVar6);
						unk_0x990879ED64ED4138(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), iVar6);
						unk_0x51290C3265C3BD04(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 100);
						unk_0xD5D9B48EB10FA2C0(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), joaat("weapon_assaultrifle"), 9999999, 0, 1);
					}
					else
					{
						unk_0xD5D9B48EB10FA2C0(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), joaat("weapon_assaultrifle"), 9999999, 0, 1);
					}
					unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 281, 1);
					unk_0x541B678DB67C7CF0(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 1);
					unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 42, 1);
					unk_0xF5A766CC3A8142D0(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 1);
					unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 43, 1);
					unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 44, 1);
					unk_0xA84451B91C2933E5(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 1);
					if (func_45(iParam0))
					{
						unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 0, 0);
					}
					unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 146, 1);
					unk_0xB3AC5619AC4F84DC(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), Local_128.f_2[iParam0 /*10*/].f_5, 7f, 0, 0);
					unk_0x390D16BCBFB23E1A(unk_0xECB7D3275586261E(Local_128.f_2[iParam0 /*10*/].f_1), 1);
					unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_203), iParam0);
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0)
{
	switch (Local_128.f_197)
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
	
	if (!unk_0x163F08900ED3E103(1))
	{
		return 0;
	}
	iVar0 = unk_0x5618B819E5B9C053(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0xC191BE4D610C22BA(iVar0);
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		unk_0x583AB626B1CF33F0(iVar0, iParam9);
		if (unk_0xAB304D33A5075BCC(iVar0))
		{
			if (bParam7)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
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
	if (!func_59(Local_128.f_103[iVar0 /*5*/], 0f, 0f, 0f, 0))
	{
		if (!Local_128.f_103[iVar0 /*5*/].f_4)
		{
			if (func_48(Local_128.f_103[iVar0 /*5*/], 1f, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam1 = { Local_128.f_103[iVar0 /*5*/] };
				*uParam2 = Local_128.f_103[iVar0 /*5*/].f_3;
				Local_128.f_103[iVar0 /*5*/].f_4 = 1;
				return 1;
			}
			else
			{
				if (unk_0x736668867F457F94(Local_128.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				else if (unk_0xDE23154833E5D069(Local_128.f_103[iVar0 /*5*/], Local_128.f_103[iVar0 /*5*/].f_1, (Local_128.f_103[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0xDE23154833E5D069(Local_128.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!unk_0x2A3398C6222EB190(Local_128.f_212, iVar0))
					{
						unk_0x963AAB0E6FFD7E02(Local_128.f_103[iVar0 /*5*/], 5f, 1, 0, 0, 1);
						unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_212), iVar0);
					}
				}
			}
		}
	}
	return 0;
}

int func_48(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404997.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x736668867F457F94(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xDE23154833E5D069(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xDE23154833E5D069(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDC9A6EA41577EFB6(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
	if (bParam13)
	{
		if (unk_0x9DC4BF239830A808(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
	if (fParam14 > 0f)
	{
		if (func_52(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
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
	Global_2404997.f_2++;
	return 1;
}

int func_49(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_1124(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			if (!unk_0x5114FCEE2A997B95())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x1410333E912D4EC6(func_51(unk_0x3D35F9864E4640B1()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xAD2B8127B12C130D(Param0, fParam3))
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
		if (func_1124(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x3D35F9864E4640B1()))
				{
					if ((func_50(iVar1) || !bParam10) && !Global_2422142[iVar1 /*399*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB5E2A107E006EC7A(iVar1) == -1)
							{
								if (unk_0xB5E2A107E006EC7A(iVar1) == unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB5E2A107E006EC7A(iVar1) != unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))) || unk_0xB5E2A107E006EC7A(iVar1) == -1)
							{
								if (unk_0x1410333E912D4EC6(func_51(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x7A245394A665CEE0(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB5E2A107E006EC7A(iVar1) != iParam8 || unk_0xB5E2A107E006EC7A(iVar1) == -1)
						{
							if (unk_0x1410333E912D4EC6(func_51(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x7A245394A665CEE0(iVar1, Param0, fParam3))
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
	if (unk_0xAF559C09CB5F80E7(unk_0xD33F4BC17EB987E5(iParam0)) || Global_2422142[iParam0 /*399*/].f_254)
	{
		return 1;
	}
	return 0;
}

Vector3 func_51(int iParam0)
{
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iParam0), 0);
}

int func_52(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x3D35F9864E4640B1() != iVar1) || iParam8 == 0)
		{
			if (func_1124(iVar1, bParam4, bParam5))
			{
				if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
				{
					if (!bParam7 || (!unk_0x8682D8A6269E52C9(unk_0xD33F4BC17EB987E5(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) != unk_0xB5E2A107E006EC7A(iVar1))) || unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1)
						{
							if (((unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1 && uParam9) && bParam6) && func_53(iVar1))
							{
							}
							else if (unk_0x76B3C79DE564AFC6(unk_0xD33F4BC17EB987E5(iVar1)))
							{
								if (unk_0x1410333E912D4EC6(func_51(iVar1), Param0, 1) < fParam3)
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
	if (func_58(unk_0x3D35F9864E4640B1(), iParam0))
	{
		return 1;
	}
	Global_2488575 = { func_57(iParam0) };
	if (unk_0x9EC1A7C50E0AB3CF(&Global_2488575))
	{
		return 1;
	}
	if (func_54(unk_0x3D35F9864E4640B1(), iParam0))
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
		return Global_1623799[iParam0 /*488*/].f_11;
	}
	return func_55();
}

struct<13> func_57(int iParam0)
{
	struct<13> Var0;
	
	unk_0xA82433D60351864D(iParam0, &Var0, 13);
	return Var0;
}

int func_58(int iParam0, int iParam1)
{
	if (unk_0x1AE803DF5F9B30C9())
	{
		Global_2488575 = { func_57(iParam0) };
		Global_2488588 = { func_57(iParam1) };
		if (unk_0xF3F1AD16A136B115(&Global_2488575))
		{
			if (unk_0xF3F1AD16A136B115(&Global_2488588))
			{
				unk_0x7838EB8661A32D68(&Global_2488505, 35, &Global_2488575);
				unk_0x7838EB8661A32D68(&Global_2488540, 35, &Global_2488588);
				if (Global_2488505 == Global_2488540)
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
	unk_0xBE91026C1FC72180(iParam0);
	return unk_0x772F801619C83779(iParam0);
}

float func_61()
{
	return 2f;
}

int func_62()
{
	int iVar0;
	
	switch (Local_128.f_195)
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
	if (!unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
	{
		return 0;
	}
	if (!unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_1))
	{
		return 0;
	}
	if (!unk_0xAA55DF0CB38F413B(Local_128.f_2[1 /*10*/].f_1))
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
	struct<3> Var33;
	
	iVar0 = func_173();
	iVar1 = func_62();
	if (!unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
	{
		if (unk_0x9447D7F8254F01B6(1))
		{
			if (func_60(iVar0))
			{
				if (!func_59(Local_128.f_262, 0f, 0f, 0f, 0))
				{
					Var2 = { Local_128.f_262 };
					uVar5 = Local_128.f_265;
					if (!unk_0x2A3398C6222EB190(Local_128.f_211, 0))
					{
						unk_0x963AAB0E6FFD7E02(Var2, 5f, 1, 0, 0, 1);
						unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_211), 0);
					}
					if (func_172(&(Local_128.f_2[0 /*10*/].f_2), iVar0, Var2, uVar5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0xDF8BB07E9C5FE5F9(unk_0xECB7D3275586261E(Local_128.f_2[0 /*10*/].f_2), 1);
						func_171(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2));
						unk_0xC587296050B2CA93(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 0);
						unk_0x5CBEDEFFD7D137BD(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 0, 0);
						unk_0x014C5648BA70BF8B(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 1);
						unk_0xB3460ED1DE6509A8(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 0);
						unk_0x9DFCC19370F919F3(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 1);
						unk_0x3B7685787E7CEC0B(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 0.08f);
						unk_0x990879ED64ED4138(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), Global_262145.f_14203);
						unk_0xDD73FD47AE17361B(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 1);
						unk_0x4D843768938087D4(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 1);
						unk_0x313C054C7E496E56(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 1);
						unk_0x017F0FC0497ABD02(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 2, 2);
						unk_0x017F0FC0497ABD02(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 3, 2);
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
					Var33 = { func_169(Local_128.f_2[0 /*10*/].f_5, Local_128.f_2[0 /*10*/].f_8, 20f) };
					if (func_66(Local_128.f_2[0 /*10*/].f_5, Var33, iVar0, 0, &(Local_128.f_262), &(Local_128.f_2[0 /*10*/].f_8), &Var6))
					{
						Local_128.f_265 = Local_128.f_2[0 /*10*/].f_8;
					}
				}
			}
		}
	}
	if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
	{
		if (!unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_1))
		{
			if (unk_0x163F08900ED3E103(1))
			{
				if (func_60(iVar1))
				{
					if (func_65(&(Local_128.f_2[0 /*10*/].f_1), Local_128.f_2[0 /*10*/].f_2, 22, iVar1, -1, 1, 1, 1))
					{
						unk_0x87A7451620C12125(unk_0xECB7D3275586261E(Local_128.f_2[0 /*10*/].f_1), 1);
						unk_0x319A53053E4361E9(unk_0xECB7D3275586261E(Local_128.f_2[0 /*10*/].f_1), 1, 0);
						unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_128.f_2[0 /*10*/].f_1), 1);
						unk_0x7F53E53C6F32D196(unk_0xECB7D3275586261E(Local_128.f_2[0 /*10*/].f_1), Global_1574737);
						unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_128.f_2[0 /*10*/].f_1), 42, 1);
						unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_128.f_2[0 /*10*/].f_1), 3, 0);
						unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_128.f_2[0 /*10*/].f_1), 2, 1);
					}
				}
			}
		}
	}
	if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_1))
	{
		if (!unk_0xAA55DF0CB38F413B(Local_128.f_2[1 /*10*/].f_1))
		{
			if (unk_0x163F08900ED3E103(1))
			{
				if (func_60(iVar1))
				{
					if (func_65(&(Local_128.f_2[1 /*10*/].f_1), Local_128.f_2[0 /*10*/].f_2, 22, iVar1, 0, 1, 1, 1))
					{
						unk_0x87A7451620C12125(unk_0xECB7D3275586261E(Local_128.f_2[1 /*10*/].f_1), 1);
						unk_0x319A53053E4361E9(unk_0xECB7D3275586261E(Local_128.f_2[1 /*10*/].f_1), 1, 0);
						unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_128.f_2[1 /*10*/].f_1), 1);
						unk_0x7F53E53C6F32D196(unk_0xECB7D3275586261E(Local_128.f_2[1 /*10*/].f_1), Global_1574737);
						unk_0xD6A092D1F1B9A9F1(unk_0xECB7D3275586261E(Local_128.f_2[1 /*10*/].f_1), 42, 1);
						unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_128.f_2[1 /*10*/].f_1), 3, 0);
						unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_128.f_2[1 /*10*/].f_1), 2, 1);
						unk_0xA8A16396F3E7CD41(unk_0xECB7D3275586261E(Local_128.f_2[1 /*10*/].f_1), 5, 1);
						unk_0xD5D9B48EB10FA2C0(unk_0xECB7D3275586261E(Local_128.f_2[1 /*10*/].f_1), joaat("weapon_microsmg"), 9999999, 0, 1);
						Local_128.f_2[1 /*10*/].f_2 = Local_128.f_2[0 /*10*/].f_2;
					}
				}
			}
		}
	}
	return 0;
}

int func_65(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x163F08900ED3E103(1))
	{
		return 0;
	}
	if (!unk_0x69DA17666D6E3F5A(uParam1))
	{
		return 0;
	}
	if (!unk_0x432757A9E7AAFA96(unk_0xD7E2A160FD5DEEE1(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xC191BE4D610C22BA(unk_0x4E2448BB7576232A(unk_0xD7E2A160FD5DEEE1(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		unk_0x583AB626B1CF33F0(unk_0xECB7D3275586261E(*uParam0), iParam7);
		if (unk_0xAB304D33A5075BCC(unk_0xECB7D3275586261E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
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
	float fVar2;
	float fVar3;
	float fVar4;
	struct<58> Var5;
	struct<58> Var64;
	
	bVar0 = false;
	if (uParam10->f_12)
	{
		if (uParam10->f_23)
		{
			uParam10->f_23 = 0;
		}
	}
	if (unk_0x003E46CBEF6CE07A())
	{
		if (!unk_0x3AA42F4BDAE68399() > 7 && !unk_0x3AA42F4BDAE68399() == 5)
		{
			return 0;
		}
	}
	if (Global_2404997.f_505)
	{
		Global_2404997.f_505 = 0;
		return 0;
	}
	if (!func_168(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (!Global_2404997.f_582 == 0 && unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_587) < func_167(0))
	{
		if (!Global_2404997.f_644 == 0)
		{
			Global_2404997.f_644 = 0;
			func_166();
			func_165();
		}
		return 0;
	}
	if (!unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_643)
	{
		if (!Global_2404997.f_644 == 0)
		{
			if (unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_647) < func_167(0))
			{
				return 0;
			}
			else
			{
				Global_2404997.f_644 = 0;
			}
		}
	}
	else
	{
		if (unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_645) > 30000)
		{
			Global_2404997.f_644 = 0;
		}
		if (!Global_2404997.f_644 == 0)
		{
			if (unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_647) > func_167(1))
			{
				Global_2404997.f_644 = 0;
			}
		}
	}
	if (uParam10->f_5)
	{
		if (func_159(Param0))
		{
			if (func_158(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2404997.f_644 == 0)
	{
		if (unk_0x2A488C176D52CCA5(Global_2404997.f_662, Param0) > 50f)
		{
			return 0;
		}
	}
	unk_0xC36E3F95FAF67A07((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2404997.f_644 == 0)
	{
		Global_2404997.f_649 = 0;
		Global_2404997.f_645 = unk_0x51A193745FDE917D();
		Global_2404997.f_643 = unk_0xFFDE6A3A0108B7CB();
		Global_2404997.f_647 = unk_0x51A193745FDE917D();
		Global_2404997.f_662 = { Param0 };
		Global_2404997.f_648 = unk_0x51A193745FDE917D();
		Global_2404997.f_644 = 2;
		func_157();
		func_166();
		if (!uParam10->f_25 || (((func_156(Param0, 1, 1133903872) && !uParam10->f_26) && !Global_2501777.f_858) && !Global_2501777.f_850))
		{
			func_140(Param0, iParam6);
		}
		if (func_135(Param0))
		{
			func_140(Param0, iParam6);
		}
	}
	switch (Global_2404997.f_644)
	{
		case 2:
			if (unk_0x63747B47D1B9DD81((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2404997.f_650 = { Param0 };
				Global_2404997.f_653 = 0f;
				if (Global_2501777.f_858)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam10->f_2 && func_48(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_6) && !func_132(Param0, *uParam9, iParam6, unk_0x3D35F9864E4640B1(), 0))
				{
					Global_2404997.f_650 = { Param0 };
					Global_2404997.f_653 = *uParam9;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam7;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam10->f_4;
					Var5.f_4 = *uParam10;
					Var5.f_13 = uParam10->f_1;
					Var5.f_5 = uParam10->f_3;
					Var5.f_15 = uParam10->f_5;
					Var5.f_11 = uParam10->f_6;
					Var5.f_6 = uParam10->f_7;
					Var5.f_16 = uParam10->f_8;
					Var5.f_17 = uParam10->f_9;
					Var5 = { Param3 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam6;
					Var5.f_31 = uParam10->f_11;
					Var5.f_30 = 1;
					Var5.f_48 = uParam10->f_12;
					Var5.f_56 = uParam10->f_23;
					Var5.f_57 = uParam10->f_24;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam10->f_13[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam10->f_20[iVar1];
						iVar1++;
					}
					func_85(&(Global_2404997.f_650), &(Global_2404997.f_653), &Var5);
				}
				func_83(Global_2404997.f_650, Global_2404997.f_653, iParam6);
				Global_2404997.f_641 = 0;
				Global_2404997.f_642 = 0;
				Global_2404997.f_649++;
				Global_2404997.f_646 = unk_0x51A193745FDE917D();
				Global_2404997.f_645 = unk_0x51A193745FDE917D();
				Global_2404997.f_644 = 3;
			}
			break;
		
		case 3:
			if (Global_2404997.f_641)
			{
				if (Global_2404997.f_642)
				{
					if (uParam10->f_10 && !uParam10->f_9)
					{
						func_82(Global_2404997.f_650, 2f);
						Global_2404997.f_644 = 4;
						Global_2404997.f_666 = unk_0x51A193745FDE917D();
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					func_80(Global_2404997.f_650, 0);
					func_79(-1);
				}
			}
			else if (unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_646) > 3000)
			{
				func_79(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_10 && !uParam10->f_9)
			{
				if (unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_666) < 10000)
				{
					if (unk_0xCFAEF2ECC4A6FB12(Global_2404997.f_665))
					{
						if (unk_0xB9C10CA0C0562C1B(Global_2404997.f_665))
						{
							if (!unk_0x259FA5215BE5B391(Global_2404997.f_665))
							{
								if (func_78(Global_2404997.f_650, Global_2404997.f_653, iParam6, unk_0x3D35F9864E4640B1(), 0) || func_68(Global_2404997.f_650, Global_2404997.f_653, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_80(Global_2404997.f_650, 0);
									func_79(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_80(Global_2404997.f_650, 0);
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
			Global_2404997.f_650 = { Param0 };
			Global_2404997.f_653 = 0f;
			Var64.f_6 = 1082130432;
			Var64.f_7 = 1176255488;
			Var64.f_8 = 1;
			Var64.f_10 = 1;
			Var64.f_13 = 1;
			Var64.f_15 = 1;
			Var64.f_16 = 1;
			Var64.f_31 = 1;
			Var64.f_34 = joaat("tailgater");
			Var64.f_38 = 2;
			Var64.f_45 = 2;
			Var64.f_49 = 1123024896;
			Var64.f_53 = 999;
			Var64.f_54 = 1176256410;
			Var64.f_55 = 1;
			Var64.f_56 = 1;
			Var64.f_57 = 1;
			Var64.f_9 = iParam7;
			Var64.f_3 = 3.5f;
			Var64.f_10 = uParam10->f_4;
			Var64.f_4 = *uParam10;
			Var64.f_12 = 1;
			Var64.f_13 = 0;
			Var64.f_15 = uParam10->f_5;
			Var64.f_11 = uParam10->f_6;
			Var64.f_6 = uParam10->f_7;
			Var64 = { Param3 };
			Var64.f_34 = iParam6;
			Var64.f_31 = uParam10->f_11;
			Var64.f_30 = 1;
			Var64.f_48 = uParam10->f_12;
			Var64.f_56 = uParam10->f_23;
			Var64.f_57 = uParam10->f_24;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var64.f_38[iVar1 /*3*/] = { uParam10->f_13[iVar1 /*3*/] };
				Var64.f_45[iVar1] = uParam10->f_20[iVar1];
				iVar1++;
			}
			func_85(&(Global_2404997.f_650), &(Global_2404997.f_653), &Var64);
			Global_2404997.f_644 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2404997.f_662 = { Param0 };
	Global_2404997.f_647 = unk_0x51A193745FDE917D();
	if (bVar0)
	{
		Global_2404997.f_504 = 0;
		*uParam8 = { Global_2404997.f_650 };
		*uParam9 = Global_2404997.f_653;
		func_67();
		return 1;
	}
	return 0;
}

void func_67()
{
	Global_2404997.f_644 = 0;
	func_157();
	func_166();
	func_165();
}

int func_68(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x3D35F9864E4640B1() != iVar1) || iParam9 == 0)
		{
			if (func_1124(iVar1, bParam5, bParam6))
			{
				if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
				{
					if (!bParam8 || (!unk_0x8682D8A6269E52C9(unk_0xD33F4BC17EB987E5(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) != unk_0xB5E2A107E006EC7A(iVar1))) || unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1)
						{
							if (((unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1 && iParam10) && bParam7) && func_53(iVar1))
							{
							}
							else if (unk_0x76B3C79DE564AFC6(unk_0xD33F4BC17EB987E5(iVar1)))
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
		if (unk_0x617C37A9A8C9C822(Param0, Var0, Var3, fVar6, 0, 1))
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
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x229F35E7CDDBF757((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x229F35E7CDDBF757((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x229F35E7CDDBF757((Var6.f_0 - Var3.f_0));
}

void func_71(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x43A90D5881106ECD(iParam0))
	{
		unk_0x9E360FFC6FB1DDFD(iParam0, fParam1, fParam2);
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
	
	func_73(iParam0, &Global_1315787);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x43A90D5881106ECD(Global_1315787[iVar0]))
		{
			unk_0x9E360FFC6FB1DDFD(Global_1315787[iVar0], &(Global_1315791[iVar0 /*3*/]), &(Global_1315798[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1315791[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1315798[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315791[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315798[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315791[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315798[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315791[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315798[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315805[iVar0] = (Global_1315798[iVar0 /*3*/] - Global_1315791[iVar0 /*3*/]);
		Global_1315808[iVar0] = (Global_1315798[iVar0 /*3*/].f_1 - Global_1315791[iVar0 /*3*/].f_1);
		Global_1315811[iVar0] = (Global_1315798[iVar0 /*3*/].f_2 - Global_1315791[iVar0 /*3*/].f_2);
		if (Global_1315805[iVar0] > Global_1315814)
		{
			Global_1315814 = Global_1315805[iVar0];
		}
		if (Global_1315811[iVar0] > Global_1315815)
		{
			Global_1315815 = Global_1315811[iVar0];
		}
		iVar0++;
	}
	Global_1315816 = (Global_1315814 * -0.5f);
	Global_1315819 = (Global_1315814 * 0.5f);
	Global_1315816.f_1 = ((((0.5f * Global_1315808[0]) + Global_1315808[1]) + Global_1315787.f_3) * -1f);
	Global_1315819.f_1 = (0.5f * Global_1315808[0]);
	Global_1315816.f_2 = (Global_1315811[0] * -0.5f);
	Global_1315819.f_2 = (Global_1315811[0] * 0.5f);
	*uParam1 = { Global_1315816 };
	*uParam2 = { Global_1315819 };
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
			if (func_1124(iVar1, 0, 1) && func_1124(iParam5, 0, 1))
			{
				if (Global_2416331.f_261[iVar0])
				{
					if (func_69(Global_2416331.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_69(func_51(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2416331.f_261[iVar0])
			{
				if (func_69(Global_2416331.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1124(iVar1, 0, 0))
			{
				if (unk_0x76B3C79DE564AFC6(unk_0xD33F4BC17EB987E5(iVar1)))
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
	if (Global_2404997.f_649 < 20 && unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), Global_2404997.f_648) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2404997.f_649 < iParam0))
		{
			Global_2404997.f_644 = 2;
		}
		else
		{
			Global_2404997.f_644 = 5;
		}
	}
	else
	{
		Global_2404997.f_644 = 5;
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
		Var0 = { Global_2404997.f_2635[iParam3 /*3*/] };
		Global_2404997.f_2635[iParam3 /*3*/] = { Param0 };
		func_80(Var0, iParam3 + 1);
	}
}

int func_81(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404997.f_2635[iVar0 /*3*/]) < fParam3)
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
	
	func_166();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2404997.f_654[iVar0] == -1)
		{
			Global_2404997.f_654[iVar0] = unk_0x0DDF50C5298CEBB6(Param0 - Vector(fParam3, fParam3, fParam3), Param0 + Vector(fParam3, fParam3, fParam3));
			Global_2404997.f_658[iVar0] = unk_0xFFDE6A3A0108B7CB();
			Global_2404997.f_665 = Global_2404997.f_654[iVar0];
			return;
		}
		iVar0++;
	}
}

void func_83(struct<3> Param0, var uParam3, int iParam4)
{
	struct<7> Var0;
	
	Var0.f_0 = -1809888727;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	unk_0xBD257D33BCFA529A(1, &Var0, 7, func_84(1, 1));
}

var func_84(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA7871E29B06DA901(iVar1);
		if (func_1124(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x3D35F9864E4640B1() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
				}
				else if (!func_34(iVar2, 0))
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_85(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404997.f_1714 > 0 && func_129(uParam0, uParam1, uParam2))
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
	Global_2411593.f_162 = 0;
	Global_2411593.f_163 = 0;
	Global_2411593.f_164 = -99;
	Global_2411593.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411593[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411593.f_121[iVar16] = 0f;
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
		iVar8 = unk_0x2AC941D76F1BFD7C(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xC383757A7B38CBC4(iVar8))
		{
			unk_0xF5894CF6DC532219(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411593.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411593.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xC76B698719C661A0(iVar8)) || unk_0x8EB0EE306342AA37(iVar8))
			{
				unk_0xFA2B8165E7D967F2(Var1, &uVar6, &uVar7);
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
																		if ((uParam2->f_12 && !func_102(Var1, fVar4, uParam2->f_34, unk_0x3D35F9864E4640B1(), 0, uParam2->f_56)) || !uParam2->f_12)
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
																										while (iVar16 < Global_2411593.f_162)
																										{
																											Global_2411593[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2411593.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2411593.f_162 = 0;
																										uParam2->f_53 = iVar23;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2411593.f_162 == 0)
																									{
																										Global_2411593[0 /*3*/] = { Var1 };
																										Global_2411593.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2411593.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411593[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_93(Var1, fVar4, iVar16);
																													iVar16 = Global_2411593.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2411593.f_162++;
																									if (Global_2411593.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411593.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2411593[Global_2411593.f_162 /*3*/] = { Var1 };
																									Global_2411593.f_121[Global_2411593.f_162] = fVar4;
																									Global_2411593.f_162++;
																									if (func_103(Var1, uParam2))
																									{
																										Global_2411593.f_163++;
																									}
																									if (Global_2411593.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2411593.f_162 == 40)
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
																						iVar0 = (iVar0 + 1);
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
				if (Global_2411593.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411593[0 /*3*/] };
						*uParam1 = Global_2411593.f_121[0];
						return;
					}
					else
					{
						if (Global_2411593.f_163 > 0 && !Global_2411593.f_163 == Global_2411593.f_162)
						{
							func_91(0, uParam2);
						}
						iVar25 = unk_0x3AF262D7332EEDF5(0, Global_2411593.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar25 = 0;
						}
						Var26 = { Global_2411593[0 /*3*/] };
						uVar29 = Global_2411593.f_121[0];
						Global_2411593[0 /*3*/] = { Global_2411593[iVar25 /*3*/] };
						Global_2411593.f_121[0] = Global_2411593.f_121[iVar25];
						Global_2411593[iVar25 /*3*/] = { Var26 };
						Global_2411593.f_121[iVar25] = uVar29;
						*uParam0 = { Global_2411593[0 /*3*/] };
						*uParam1 = Global_2411593.f_121[0];
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
						iVar0 = unk_0x3AF262D7332EEDF5((1 + iVar15), (40 + iVar15));
						unk_0x4FCCC68F5621C928(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
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
		Global_2411593.f_164 = iVar8;
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
			if (!func_88(*(uParam0[iVar2 /*4*/]), 5f, unk_0x3D35F9864E4640B1(), 0, 0))
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
			if (!Global_2416331.f_557[iVar0] == 0)
			{
				if (func_69(Param0, Global_2416331.f_427[iVar0 /*3*/], Global_2416331.f_524[iVar0], Global_2416331.f_557[iVar0], 1036831949))
				{
					if (func_1124(iVar1, 0, 1) && func_1124(iParam3, 0, 1))
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
				if (func_1124(iVar1, 0, 1) && func_1124(iParam4, 0, 1))
				{
					if (unk_0xB5E2A107E006EC7A(iVar1) == unk_0xB5E2A107E006EC7A(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1124(iVar1, 0, 1) && func_1124(iParam4, 0, 1))
				{
					if (Global_2416331.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2416331.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_51(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416331.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2416331.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_1124(iVar1, 0, 1))
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
	if (!func_103(Global_2411593[iParam0 /*3*/], uParam1))
	{
		Global_2411593.f_162 = (Global_2411593.f_162 - 1);
		func_92(iParam0);
		if (Global_2411593.f_162 > Global_2411593.f_163)
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
			Global_2411593[iParam0 /*3*/] = { Global_2411593[iParam0 + 1 /*3*/] };
			Global_2411593.f_121[iParam0] = Global_2411593.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_93(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411593[iParam4 /*3*/] };
	uVar3 = Global_2411593.f_121[iParam4];
	Global_2411593[iParam4 /*3*/] = { Param0 };
	Global_2411593.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411593.f_162 && iParam4 < 39)
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
	if (func_1124(iParam0, 0, 1))
	{
		if (!func_100(iParam0))
		{
			if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iParam0))
			{
				if (!unk_0xB5E2A107E006EC7A(iParam0) == unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))
				{
					if (func_97(unk_0x3D35F9864E4640B1(), 1))
					{
						if (!func_96(unk_0xB5E2A107E006EC7A(iParam0), unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xB5E2A107E006EC7A(iParam0) == -1 && unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1)
				{
					if (!func_97(unk_0x3D35F9864E4640B1(), 1))
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
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 0);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 1);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 2);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 4);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 5);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 6);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 8);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 9);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 10);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 12);
				
				case 1:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 13);
				
				case 2:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 14);
				
				case 3:
					return unk_0x2A3398C6222EB190(Global_1641087.f_48, 15);
				
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
	if (Global_1593076[iParam0 /*647*/] == -1)
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
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_13.f_1, 0);
}

int func_100(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_101())
	{
		if (iParam0 == unk_0x3D35F9864E4640B1())
		{
			return 1;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 2))
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 3);
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
				if (unk_0x617C37A9A8C9C822(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
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
	
	if (func_97(unk_0x3D35F9864E4640B1(), 1))
	{
		if (Global_1641087.f_49486 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1641087.f_49486)
			{
				if (Global_1641087.f_49487[iVar0 /*63*/].f_7 != 0)
				{
					if (func_69(Param0, Global_1641087.f_49487[iVar0 /*63*/], Global_1641087.f_49487[iVar0 /*63*/].f_6, Global_1641087.f_49487[iVar0 /*63*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1641087.f_47099 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1641087.f_47099)
			{
				if (Global_1641087.f_47102[iVar0 /*98*/].f_16 != 0)
				{
					if (func_69(Param0, Global_1641087.f_47102[iVar0 /*98*/], Global_1641087.f_47102[iVar0 /*98*/].f_3, Global_1641087.f_47102[iVar0 /*98*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1641087.f_62382 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1641087.f_62382)
			{
				if (Global_1641087.f_62386[iVar0 /*182*/].f_12 != 0)
				{
					if (func_69(Param0, Global_1641087.f_62386[iVar0 /*182*/], Global_1641087.f_62386[iVar0 /*182*/].f_3, Global_1641087.f_62386[iVar0 /*182*/].f_12, 0.5f))
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
	unk_0xFA2B8165E7D967F2(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x361A61A55A076700(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
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
	Var0 = { unk_0x261E7847B591A8DC(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x0F2965599B1DC23C(Param0, *fParam3, &Var21))
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
	while (iVar0 < Global_2411307[iVar1])
	{
		if (func_112(Param0, &(Global_2410604[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411307[8])
	{
		if (func_112(Param0, &(Global_2410604[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_112(struct<3> Param0, var uParam3)
{
	return unk_0x617C37A9A8C9C822(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_113(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410595[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410595[1])
	{
		if (Param0.f_0 < Global_2410599[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410595[2])
	{
		if (Param0.f_0 < Global_2410599[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410599[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410599[3])
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
			fVar4 = unk_0xDFF7E223DB3CBA25(0.01f, 360f);
			func_118(&Var1, Global_2404997.f_569, Global_2404997.f_572, 1036831949, 0, fVar4);
			if (func_115(Var1, &uVar0) || func_119(Var1))
			{
				Var1 = { *uParam0 };
				func_118(&Var1, Global_2404997.f_569, Global_2404997.f_572, 1036831949, 1, fVar4);
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
		if (Global_2404997.f_358[iVar0 /*12*/].f_9 == 1)
		{
			if (func_116(Param0, &(Global_2404997.f_358[iVar0 /*12*/]), 1008981770, 0, 0))
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
			return func_106(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404997.f_2633) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_104(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x617C37A9A8C9C822(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x617C37A9A8C9C822(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x617C37A9A8C9C822(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x617C37A9A8C9C822(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
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
		if (Global_2404997.f_358[iVar0 /*12*/].f_9)
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
			func_76(&Var0, 0f, 0f, unk_0xDFF7E223DB3CBA25(0f, 360f));
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
	
	if (Global_2404997.f_572 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404997.f_569);
		if (fVar0 < Global_2404997.f_572)
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
	if (Global_2404997.f_26.f_16)
	{
		switch (Global_2404997.f_26.f_15)
		{
			case 0:
				if (func_106(*uParam0, Global_2404997.f_26.f_8, Global_2404997.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_104(*uParam0, Global_2404997.f_26.f_8, Global_2404997.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x617C37A9A8C9C822(*uParam0, Global_2404997.f_26.f_8, Global_2404997.f_26.f_11, Global_2404997.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_121(*uParam0, Global_2404997.f_26.f_8, Global_2404997.f_26.f_11, Global_2404997.f_26.f_14, Global_2404997.f_26.f_15, 1036831949, 0) };
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
		unk_0x2C8CBD805D869412(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
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
				if (!unk_0x617C37A9A8C9C822(Var1, Param3, Param6, fParam9, 0, 1))
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x65543A6B8B143988(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x65543A6B8B143988(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
	
	if (func_159(Param0))
	{
		if (func_128(uParam3, bParam6, 0, 1, 1))
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
			func_127(&Var2, &(Global_2404997.f_358[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_115(Var2, &uVar1) || func_119(Var2))
			{
				Var2 = { *uParam0 };
				func_127(&Var2, &(Global_2404997.f_358[iVar0 /*12*/]), 1036831949, 1, bParam2);
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
				*uParam0 = { func_121(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404997.f_2633) * uParam1->f_8)), 0, fParam2, bParam3) };
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
				func_118(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404997.f_2633) * uParam1->f_8)), fParam2, bParam3, 0);
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

int func_128(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409619[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409619[iVar0 /*17*/].f_16))
			{
				if (func_116(*uParam0, &(Global_2409619[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409619[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409619[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_127(&Var1, &(Global_2409619[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_128(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_127(&Var1, &(Global_2409619[iVar0 /*17*/]), 1036831949, 1, 0);
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
	
	if (Global_2404997.f_1714 > 0)
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
		Global_2411593.f_162 = 0;
		Global_2411593.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2411593[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2411593.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_130(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2404997.f_1714)
		{
			iVar1 = Global_2404997.f_2080[iVar0];
			if (iVar1 > -1 && iVar1 < 91)
			{
				Var2 = { Global_2404997.f_1715[iVar1 /*4*/] };
				fVar5 = Global_2404997.f_1715[iVar1 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var2) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var2.f_0, Var2.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_102(Var2, fVar5, uParam2->f_34, unk_0x3D35F9864E4640B1(), 0, uParam2->f_56)) || !uParam2->f_12)
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
															while (iVar6 < Global_2411593.f_162)
															{
																Global_2411593[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2411593.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2411593.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2411593.f_162 == 0)
														{
															Global_2411593[0 /*3*/] = { Var2 };
															Global_2411593.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2411593.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var2, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411593[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_93(Var2, fVar5, iVar6);
																		iVar6 = Global_2411593.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2411593.f_162++;
														if (Global_2411593.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2404997.f_1714;
															}
															else if (Global_2411593.f_162 == 40)
															{
																iVar0 = Global_2404997.f_1714;
															}
														}
													}
													else
													{
														Global_2411593[Global_2411593.f_162 /*3*/] = { Var2 };
														Global_2411593.f_121[Global_2411593.f_162] = fVar5;
														Global_2411593.f_162++;
														if (Global_2411593.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2404997.f_1714;
															}
															else if (Global_2411593.f_162 == 40)
															{
																iVar0 = Global_2404997.f_1714;
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
		if (Global_2411593.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411593[0 /*3*/] };
				*uParam1 = Global_2411593.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411593.f_163 > 0 && !Global_2411593.f_163 == Global_2411593.f_162)
				{
					func_91(0, uParam2);
				}
				iVar14 = unk_0x3AF262D7332EEDF5(0, Global_2411593.f_162);
				Var15 = { Global_2411593[0 /*3*/] };
				uVar18 = Global_2411593.f_121[0];
				Global_2411593[0 /*3*/] = { Global_2411593[iVar14 /*3*/] };
				Global_2411593.f_121[0] = Global_2411593.f_121[iVar14];
				Global_2411593[iVar14 /*3*/] = { Var15 };
				Global_2411593.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2411593[0 /*3*/] };
				*uParam1 = Global_2411593.f_121[0];
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
	while (iVar2 < Global_2404997.f_1714)
	{
		uVar1 = func_131(Param0, fVar0, &fVar0);
		Global_2404997.f_2080[iVar2] = uVar1;
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
	while (iVar3 < Global_2404997.f_1714)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2404997.f_1715[iVar3 /*4*/]);
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
			if (func_134(Param0, iParam4, Global_2416331.f_427[iVar0 /*3*/], Global_2416331.f_557[iVar0]))
			{
				if (func_133(Param0, fParam3, iParam4, Global_2416331.f_427[iVar0 /*3*/], Global_2416331.f_524[iVar0], Global_2416331.f_557[iVar0], 0))
				{
					if (func_1124(iVar1, 0, 1) && func_1124(iParam5, 0, 1))
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
	Var26 = { (unk_0x229F35E7CDDBF757((Var17.f_0 - Var14.f_0)) * 0.5f), 0f, 0f };
	func_76(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var20 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * unk_0x229F35E7CDDBF757((Var17.f_2 - Var14.f_2))));
	Var1[1 /*3*/] = { Param0 + Var20 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * unk_0x229F35E7CDDBF757((Var17.f_2 - Var14.f_2))));
	Var1[2 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * unk_0x229F35E7CDDBF757((Var17.f_2 - Var14.f_2))));
	Var1[3 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * unk_0x229F35E7CDDBF757((Var17.f_2 - Var14.f_2))));
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

int func_135(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2501777.f_858 && func_136(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_136(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam3 = -1;
	iVar2 = func_139(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_137(iVar1))
			{
				if (func_139(Global_1780828.f_36[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam3 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_138(iParam0);
	if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_235 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11;
	if (iVar1 != func_55())
	{
		if (Global_1593076[iVar1 /*647*/].f_259.f_235 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_1 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 3;
		
		case 86:
			return 4;
		
		case 87:
			return 5;
		
		default:
	}
	return 0;
}

int func_139(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409619[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_116(Param0, &(Global_2409619[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_140(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];
	
	if (!func_155())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_154(Param0);
		if (iVar1 > -1)
		{
			func_165();
			switch (iVar1)
			{
				case 0:
					func_153(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_153(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_153(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_153(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_153(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_153(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_153(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_153(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_153(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_153(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_153(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_153(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_153(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_153(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_153(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_153(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_153(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_153(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_153(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_153(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_153(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_153(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_153(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_153(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_153(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_153(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_153(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_153(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_153(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_153(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_153(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_153(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_153(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_153(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_153(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_153(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_153(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_153(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_153(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_153(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_153(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_153(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_153(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_153(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_153(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_153(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_153(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_153(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_153(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_153(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_153(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_153(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_153(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_151(78);
					break;
				
				case 11:
					func_151(79);
					break;
				
				case 12:
					func_151(82);
					break;
				
				case 13:
					func_151(81);
					break;
				
				case 14:
					func_151(73);
					break;
				
				case 15:
					func_153(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_153(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_153(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_153(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_151(75);
					break;
				
				case 17:
					func_151(76);
					break;
				
				case 18:
					func_151(77);
					break;
				
				case 19:
					func_153(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_153(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_153(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_153(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_151(80);
					break;
				
				case 21:
				case 25:
					func_151(87);
					break;
				
				case 22:
				case 26:
					func_151(88);
					break;
				
				case 23:
				case 27:
					func_151(89);
					break;
				
				case 24:
				case 28:
					func_151(90);
					break;
				
				case 29:
				case 30:
					if (func_150(iParam3))
					{
						func_151(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_16);
					}
					break;
			}
		}
		else if (func_149(Param0, &iVar2, &iVar6) || (func_136(Param0, &(iVar2[0])) && (unk_0xF9CDF5CA6A1D6756(iParam3) || unk_0x1DBFCF939B3B47D0(iParam3))))
		{
			func_165();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar6[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2404997.f_504 = 1;
				}
				if (!iVar6[iVar0] && func_148(iVar2[iVar0], -1))
				{
					if (func_150(iParam3))
					{
						func_151(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_147(unk_0x0031992CA618A445()) || func_146(unk_0x0031992CA618A445())) && unk_0xF9CDF5CA6A1D6756(iParam3)) || unk_0x1DBFCF939B3B47D0(iParam3))
					{
						if (func_145(iParam3))
						{
							func_144(iVar2[iVar0]);
						}
						else if (func_143(iParam3))
						{
							func_142(iVar2[iVar0]);
							func_144(iVar2[iVar0]);
						}
						else
						{
							func_142(iVar2[iVar0]);
							func_144(iVar2[iVar0]);
						}
					}
					else
					{
						func_141(iVar2[iVar0]);
					}
				}
				else
				{
					func_151(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_141(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			func_153(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_153(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_153(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_153(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_153(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_153(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_153(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_153(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_153(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_153(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_153(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_153(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_153(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_153(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_153(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_153(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_153(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_153(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_153(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_153(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_153(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_153(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_153(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_153(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_153(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_153(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_153(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_153(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_153(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_153(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_153(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_153(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_153(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_153(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_153(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_153(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_153(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_153(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_153(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_153(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_153(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_153(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_153(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_153(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_153(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_153(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_153(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_153(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_153(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_153(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_153(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_153(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_153(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_153(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_153(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_153(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_153(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_153(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_153(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_153(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_153(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_153(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_153(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_153(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_153(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_153(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_153(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_153(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_153(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_153(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_153(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_153(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_153(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_153(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_153(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_153(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_153(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_153(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_153(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_153(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_153(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_153(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_153(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_153(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_153(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_153(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_153(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_153(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_153(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_153(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_153(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_153(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_153(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_153(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_153(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_153(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_153(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_153(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_153(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_153(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_153(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_153(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_153(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_153(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_153(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_153(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_153(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_153(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_153(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_153(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_153(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_153(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_153(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_153(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_153(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_153(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_153(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_153(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_153(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_153(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_153(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_153(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_153(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_153(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_153(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_153(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_153(142.7427f, -2536.147f, 5f, 205.0002f);
			func_153(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_153(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_153(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_153(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_153(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_153(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_153(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_153(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_153(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_153(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_153(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_153(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_153(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_153(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_153(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_153(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_153(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_153(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_153(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_153(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_153(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_153(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_153(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_153(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_153(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_153(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_153(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_153(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_153(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_153(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_153(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_153(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_153(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_153(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_153(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_153(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_153(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_153(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_153(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_153(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_153(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_153(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_153(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_153(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_153(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_153(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_153(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_153(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_153(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_153(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_153(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_153(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_153(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_153(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_153(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_153(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_153(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_153(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_153(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_153(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_153(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_153(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_153(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_153(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_153(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_153(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_153(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_153(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_153(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_153(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_153(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_153(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_153(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_153(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_153(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_153(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_153(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_153(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_153(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_153(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_153(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_153(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_153(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_153(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_153(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_153(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_153(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_153(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_153(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_153(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_153(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_153(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_153(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_153(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_153(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_153(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_153(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_153(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_153(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_153(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_153(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_153(-1823.414f, 3092.762f, 31.843f, 330f);
			func_153(-1819.045f, 3100.435f, 31.845f, 330f);
			func_153(-1833.313f, 3075.722f, 31.838f, 330f);
			func_153(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_153(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_153(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_153(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_153(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_153(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_153(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_153(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_153(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_153(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_153(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_153(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_153(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_153(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_153(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_153(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_153(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_153(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_153(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_153(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_153(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_153(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_153(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_153(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_153(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_153(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_153(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_153(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_153(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_153(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_153(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_153(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_153(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_153(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_153(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_153(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_153(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_153(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_153(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		default:
			break;
	}
}

void func_142(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_153(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_153(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_153(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_153(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_153(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_153(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_153(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_153(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_153(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_153(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_153(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_153(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_153(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_153(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_153(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_153(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_153(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_153(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_153(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_153(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_153(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_153(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_153(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_153(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_153(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_153(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_153(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_153(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_153(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_153(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_153(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_153(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_153(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_153(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_153(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_153(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_153(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_153(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_153(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_153(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_153(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_153(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_153(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_153(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_153(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_153(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_153(-1356.991f, -3242.228f, 12.945f, 330f);
			func_153(-1369.313f, -3234.758f, 12.945f, 330f);
			func_153(-1381.751f, -3227.408f, 12.945f, 330f);
			func_153(-1394.302f, -3220.021f, 12.945f, 330f);
			func_153(-1354.339f, -3223.129f, 12.945f, 330f);
			func_153(-1366.302f, -3215.809f, 12.945f, 330f);
			func_153(-1378.492f, -3208.645f, 12.945f, 330f);
			func_153(-1350.322f, -3203.405f, 12.945f, 330f);
			func_153(-1362.684f, -3196.451f, 12.945f, 330f);
			func_153(-1347.089f, -3182.69f, 12.945f, 330f);
			func_153(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_153(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_153(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_153(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_153(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_153(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_153(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_153(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_153(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_153(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_153(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_153(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_153(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_153(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_153(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_153(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_153(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_153(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_153(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_153(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_153(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_153(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_153(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_153(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_153(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_153(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_153(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_153(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_153(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_153(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_153(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_153(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_153(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_153(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_153(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_153(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_153(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_153(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_153(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_153(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_153(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_153(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_153(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_153(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_153(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_153(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_153(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_153(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_153(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_153(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_153(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_153(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_153(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_153(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_153(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_153(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_153(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_153(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_153(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_153(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_153(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_153(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_153(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_153(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_153(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_153(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_153(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_153(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_153(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_153(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_153(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_153(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_153(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_153(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_153(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_153(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_153(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_153(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_153(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_153(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_153(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_153(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_153(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_153(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_153(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_153(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_153(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_153(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_153(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_153(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_153(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_153(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_153(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_153(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_153(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_153(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_153(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_153(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_153(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_153(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_153(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_153(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_153(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_153(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_153(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_153(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_153(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_153(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_153(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_153(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_153(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_153(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_153(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_153(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_153(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_153(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_153(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_153(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_153(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_153(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_153(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_153(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_153(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_153(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_153(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_153(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_153(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_153(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_153(-2484.323f, 3249.294f, 31.828f, 151f);
			func_153(-2495.313f, 3255.746f, 31.828f, 151f);
			func_153(-2472.644f, 3242.684f, 31.828f, 151f);
			func_153(-2506.313f, 3262.27f, 31.823f, 151f);
			func_153(-2461.494f, 3235.93f, 31.828f, 151f);
			func_153(-2505.602f, 3238.049f, 31.828f, 151f);
			func_153(-2481.937f, 3224.8f, 31.828f, 151f);
			func_153(-2516.813f, 3244.266f, 31.823f, 151f);
			func_153(-2470.03f, 3217.899f, 31.828f, 151f);
			func_153(-2493.933f, 3231.308f, 31.828f, 151f);
			func_153(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_153(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_153(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_153(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_153(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_153(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_153(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_153(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_153(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_153(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_153(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_153(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_153(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_153(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_153(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_153(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_153(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_153(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_153(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_153(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_153(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_153(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_153(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_153(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_153(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_153(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_153(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_153(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_153(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_153(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_153(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_153(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_153(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_153(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_153(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_153(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
			return 1;
		
		default:
	}
	return 0;
}

void func_144(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_153(-947.712f, -3367.704f, 12.944f, 60f);
			func_153(-904.692f, -3293.072f, 12.944f, 60f);
			func_153(-863.71f, -3221.978f, 12.944f, 60f);
			func_153(-966.418f, -3162.773f, 12.944f, 60f);
			func_153(-1007.435f, -3233.93f, 12.944f, 60f);
			func_153(-1050.455f, -3308.559f, 12.944f, 60f);
			func_153(-1145.673f, -3253.456f, 12.944f, 60f);
			func_153(-1098.386f, -3181.428f, 12.944f, 60f);
			func_153(-1060.474f, -3108.903f, 12.944f, 60f);
			func_153(-1155.391f, -3053.632f, 12.944f, 60f);
			func_153(-1196.114f, -3125.146f, 12.948f, 60f);
			func_153(-1235.552f, -3201.86f, 12.944f, 60f);
			func_153(-1344.446f, -3139.177f, 12.944f, 60f);
			func_153(-1301.308f, -3064.341f, 12.944f, 60f);
			func_153(-1260.135f, -2992.912f, 12.944f, 60f);
			func_153(-1364.244f, -2932.9f, 12.98f, 60f);
			func_153(-1405.284f, -3004.108f, 12.96f, 60f);
			func_153(-1448.29f, -3078.72f, 12.95f, 60f);
			func_153(-1535.732f, -3028.318f, 12.945f, 60f);
			func_153(-1492.639f, -2953.558f, 12.945f, 60f);
			func_153(-1451.506f, -2882.2f, 12.944f, 60f);
			func_153(-1553.927f, -2823.12f, 13.002f, 60f);
			func_153(-1595.097f, -2894.571f, 12.944f, 60f);
			func_153(-1637.836f, -2968.714f, 12.945f, 60f);
			func_153(-1740.971f, -2911.484f, 12.944f, 330f);
			func_153(-1696.293f, -2833.978f, 12.944f, 330f);
			func_153(-1651.502f, -2756.273f, 12.945f, 330f);
			func_153(-1588.258f, -2647.575f, 12.944f, 330f);
			func_153(-1536.862f, -2681.378f, 12.945f, 330f);
			func_153(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_153(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_153(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_153(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_153(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_153(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_153(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_153(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_153(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_153(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_153(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_153(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_153(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_153(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_153(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_153(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_153(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_153(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_153(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_153(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_153(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_153(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_153(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_153(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_153(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_153(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_153(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_153(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_153(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_153(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_153(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
			return 1;
		
		default:
	}
	return 0;
}

int func_146(int iParam0)
{
	if (!unk_0x76B3C79DE564AFC6(iParam0))
	{
		return 0;
	}
	if (unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)
{
	if (!unk_0x76B3C79DE564AFC6(iParam0))
	{
		return 0;
	}
	if (unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_148(int iParam0, int iParam1)
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

int func_149(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 116)
	{
		if (iVar2 < *uParam3)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Global_1049495[iVar0 /*1943*/].f_3[iVar1 /*3*/], Global_1049495[iVar0 /*1943*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam3)[iVar2] = iVar0;
					(*uParam4)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_137(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar2 < *uParam3)
		{
			if (unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Global_1780828.f_36[iVar0 /*3*/], Global_1780828.f_36[iVar0 /*3*/].f_1, 0f) < fVar3)
			{
				(*uParam3)[iVar2] = iVar0;
				(*uParam4)[iVar2] = 1;
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

int func_150(int iParam0)
{
	if ((unk_0x34C854420D02F57B(iParam0) || unk_0x01301B632ADFA6CA(iParam0)) || unk_0x1B9B48622A4D3FC0(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_151(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_153(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_153(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_153(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_153(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_153(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_153(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_153(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_153(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_153(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_153(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_153(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_153(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_153(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_153(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_153(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_153(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_153(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_153(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_153(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_153(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_153(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_153(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_153(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_153(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_153(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_153(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_153(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_153(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_153(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_153(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_153(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_153(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_153(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_153(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_153(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_153(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_152())
			{
				func_153(-1608.297f, -556.875f, 33.406f, 310f);
				func_153(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_153(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_153(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_153(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_153(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_153(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_153(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_153(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_153(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_153(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_153(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_152())
			{
				func_153(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_153(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_153(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_153(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_153(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_153(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_153(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_153(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_153(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_153(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_153(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_153(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_152())
			{
				func_153(-102.737f, -597.379f, 35.053f, 160.999f);
				func_153(-97.793f, -589.568f, 35.082f, 134.799f);
				func_153(-110.357f, -619.402f, 35.055f, 160.599f);
				func_153(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_153(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_153(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_153(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_153(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_153(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_153(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_153(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_153(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_152())
			{
				func_153(-59.349f, -779.238f, 43.134f, 228.398f);
				func_153(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_153(-65.212f, -772.66f, 43.151f, 219.398f);
				func_153(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_153(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_153(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_153(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_153(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_153(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_153(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_153(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_153(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_153(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_153(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_153(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_153(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_153(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_153(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_153(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_153(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_153(-1464.5f, -927.9f, 9f, 296.7991f);
			func_153(-1466f, -926.1f, 9f, 296.7991f);
			func_153(-1467.9f, -924.7f, 9f, 296.7991f);
			func_153(-1469.7f, -923.7f, 9f, 296.7991f);
			func_153(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_153(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_153(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_153(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_153(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_153(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_153(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_153(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_153(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_153(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_153(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_153(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_153(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_153(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_153(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_153(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_153(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_153(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_153(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_153(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_153(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_153(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_153(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_153(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_153(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_153(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_153(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_153(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_153(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_153(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_153(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_153(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_153(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_153(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_153(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_153(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_153(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_153(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_153(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_153(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_153(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_153(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_153(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_153(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_153(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_153(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_153(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_153(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_153(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_153(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_153(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_153(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_153(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_153(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_153(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_153(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_153(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_153(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_153(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_153(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_153(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_153(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_153(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_153(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_153(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_153(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_153(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_153(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_153(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_153(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_153(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_153(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_153(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_153(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_153(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_153(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_153(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_153(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_153(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_153(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_153(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_153(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_153(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_153(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_152()
{
	return Global_2445582.f_12;
}

void func_153(struct<3> Param0, float fParam3)
{
	if (Global_2404997.f_1714 < 91)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404997.f_1715[Global_2404997.f_1714 /*4*/] = { Param0 };
		Global_2404997.f_1715[Global_2404997.f_1714 /*4*/].f_3 = fParam3;
		Global_2404997.f_1714++;
	}
}

int func_154(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2411361[iVar0 /*7*/].f_2 + Global_2411361[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_112(Param0, &(Global_2411361[iVar0 /*7*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_155()
{
	if (unk_0x2A3398C6222EB190(Global_1641087.f_13, 0) && !Global_2446355.f_6043)
	{
		return 0;
	}
	return 0;
}

int func_156(struct<2> Param0, var uParam2, bool bParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam3)
		{
			if (func_137(iVar0))
			{
				fVar1 = fParam4;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam4;
		}
		fVar2 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Global_1780828.f_36[iVar0 /*3*/], Global_1780828.f_36[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_157()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2404997.f_2635[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_158(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2411317[iVar0 /*7*/].f_2 + Global_2411317[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_112(Var1, &(Global_2411317[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_122(&Var1, Global_2411317[iVar0 /*7*/], Global_2411317[iVar0 /*7*/].f_3, Global_2411317[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_159(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404997.f_503 && !Global_2404997.f_504)
	{
		if (!Global_2404997.f_43.f_313)
		{
			if (!func_163(unk_0x3D35F9864E4640B1(), 1))
			{
				return 1;
			}
			if (!func_162(Param0, 1008981770))
			{
				if (!func_128(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_128(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_161(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_160(&(Global_2404997.f_43[iVar0 /*12*/])) };
					if (!func_128(&Var1, 0, 0, 0, 1))
					{
						if (!func_128(&Param0, 0, 0, 0, 1))
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

Vector3 func_160(var uParam0)
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

int func_161(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404997.f_43[iVar0 /*12*/].f_9)
		{
			if (func_116(Param0, &(Global_2404997.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_162(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404997.f_43[iVar0 /*12*/].f_9)
		{
			if (func_116(Param0, &(Global_2404997.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_163(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_164(iParam0) != 0;
	}
	return func_97(iParam0, bParam1);
}

int func_164(int iParam0)
{
	if (func_1124(iParam0, 0, 1))
	{
		return Global_2422142[iParam0 /*399*/].f_1;
	}
	return 0;
}

void func_165()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 91)
	{
		Global_2404997.f_1715[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2404997.f_1714 = 0;
}

void func_166()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE2F358F9F113BDF1(Global_2404997.f_658[iVar0]))
		{
			if (unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_658[iVar0])
			{
				if (!Global_2404997.f_654[iVar0] == -1)
				{
					if (unk_0xCFAEF2ECC4A6FB12(Global_2404997.f_654[iVar0]))
					{
						unk_0x297A5D086880A479(Global_2404997.f_654[iVar0]);
						Global_2404997.f_654[iVar0] = -1;
					}
					else
					{
						Global_2404997.f_654[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2404997.f_654[iVar0] == -1)
		{
			Global_2404997.f_654[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_167(bool bParam0)
{
	if (unk_0x5114FCEE2A997B95())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_168(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x2A3398C6222EB190(Global_2434915.f_1, iParam0);
	}
	return 1;
}

Vector3 func_169(struct<3> Param0, float fParam3, float fParam4)
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_170(Var0, fParam3);
	Var0.f_0 = (Var0.f_0 * fParam4);
	Var0.f_1 = (Var0.f_1 * fParam4);
	Var0.f_2 = (Var0.f_2 * fParam4);
	Var0 = { Var0 + Param0 };
	return Var0;
}

Vector3 func_170(struct<3> Param0, float fParam3)
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

void func_171(int iParam0)
{
	if (!func_395())
	{
		switch (Local_128.f_195)
		{
			case 0:
				unk_0x8D0385AF2136C38C(iParam0, 0);
				break;
			
			case 1:
				unk_0x8D0385AF2136C38C(iParam0, 2);
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		unk_0xBF9154ADAF4F11E1(iParam0, 15, 1);
		unk_0xD6B0D4015CC61FF4(iParam0, 0, 156);
	}
}

int func_172(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	var uVar0;
	float fVar1;
	
	if (!unk_0x9447D7F8254F01B6(1))
	{
		return 0;
	}
	fVar1 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar1 = 20f;
	}
	if (bParam11)
	{
		unk_0xE882E0C18562237F(Param2, fVar1, 0, 0, 0, 0, 0, 0);
	}
	uVar0 = unk_0x5129A9193468FF77(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0x23812D401DEBDCBC(uVar0);
	Global_2501777.f_5805 = uVar0;
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		if (bParam15)
		{
			unk_0x39F4D36D9852AC7E(uVar0, 1);
		}
		unk_0x583AB626B1CF33F0(uVar0, iParam10);
		if (unk_0xAB304D33A5075BCC(iVar0))
		{
			if (bParam8)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
			}
			else
			{
				unk_0x84143EEA447C3060(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0xB416BAE05AA22BA6(*uParam0, unk_0x3D35F9864E4640B1(), 1);
			}
		}
		unk_0x5028E664ECBD1407(iVar0, iParam9);
		unk_0xD19E428259B86D65(iVar0, 1);
		if (bParam12)
		{
			unk_0x1F9198D3132F6E4C(iVar0);
			unk_0x4E546CD1861E7F46(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_173()
{
	int iVar0;
	
	switch (Local_128.f_195)
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

void func_174()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xEF0CB8FF125B9F9C())
	{
		return;
	}
	if (func_395())
	{
		return;
	}
	if (Local_128.f_209 != 0)
	{
		return;
	}
	if (!func_11(&(Local_128.f_230)))
	{
		func_10(&(Local_128.f_230), 0, 0);
	}
	iVar1 = func_176();
	if (!func_6(&(Local_128.f_230), 15000, 0))
	{
		iVar0 = 0;
		while (iVar0 < func_175())
		{
			iVar2 = 0;
			if (!unk_0xAA55DF0CB38F413B(Local_128.f_199[iVar0]))
			{
				if (unk_0x9447D7F8254F01B6(1))
				{
					if (func_60(iVar1))
					{
						if (!func_59(Local_128.f_179[iVar0 /*5*/], 0f, 0f, 0f, 0))
						{
							if (func_48(Local_128.f_179[iVar0 /*5*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								if (!unk_0x2A3398C6222EB190(Local_128.f_211, iVar0))
								{
									unk_0x963AAB0E6FFD7E02(Local_128.f_179[iVar0 /*5*/], 5f, 1, 0, 0, 1);
									unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_211), iVar0);
								}
								if (func_172(&(Local_128.f_199[iVar0]), iVar1, Local_128.f_179[iVar0 /*5*/], Local_128.f_179[iVar0 /*5*/].f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									unk_0xDB34A3A6EA8B0901(unk_0xD7E2A160FD5DEEE1(Local_128.f_199[iVar0]), 1);
									func_171(unk_0xD7E2A160FD5DEEE1(Local_128.f_199[iVar0]));
								}
							}
							else
							{
								if (unk_0x736668867F457F94(Local_128.f_179[iVar0 /*5*/], 6f))
								{
									iVar2 = 1;
								}
								else if (unk_0xDE23154833E5D069(Local_128.f_179[iVar0 /*5*/], Local_128.f_179[iVar0 /*5*/].f_1, (Local_128.f_179[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0xDE23154833E5D069(Local_128.f_179[iVar0 /*5*/], 1f))
								{
									iVar2 = 1;
								}
								if (iVar2 == 1)
								{
									if (!unk_0x2A3398C6222EB190(Local_128.f_211, iVar0))
									{
										unk_0x963AAB0E6FFD7E02(Local_128.f_179[iVar0 /*5*/], 6f, 1, 0, 0, 1);
										unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_211), iVar0);
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

int func_175()
{
	switch (Local_128.f_197)
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

int func_176()
{
	int iVar0;
	
	switch (Local_128.f_195)
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

void func_177()
{
	if (unk_0x2A3398C6222EB190(Local_128.f_1, 12))
	{
		return;
	}
	switch (Local_128.f_197)
	{
		case 0:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(31.1862f, -2594.657f, -50f, 68.0247f, -2551.956f, 50f, 1, 1, 1, 1);
			break;
		
		case 1:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(-1109.664f, -1297.61f, -50f, -1074.653f, -1223.725f, 50f, 1, 1, 1, 1);
			break;
		
		case 2:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(859.394f, -1082.382f, -50f, 914.3219f, -1008.526f, 50f, 1, 1, 1, 1);
			break;
		
		case 3:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(240.8218f, -1997.975f, -50f, 243.8696f, -1933.894f, 50f, 1, 1, 1, 1);
			break;
		
		case 4:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(-451.6602f, 171.9769f, -50f, -397.3188f, 222.9419f, 50f, 1, 1, 1, 1);
			break;
		
		case 5:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(-1059.294f, -2044.054f, -50f, -1011.896f, -1884.057f, 140.3546f, 1, 1, 1, 1);
			break;
		
		case 6:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(-1284.743f, -836.3273f, -50f, -1246.317f, -774.2995f, 50f, 1, 1, 1, 1);
			break;
		
		case 7:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(-924.5807f, -2758.87f, -50.9462f, -789.014f, -2731.518f, 112.94f, 1, 1, 1, 1);
			break;
		
		case 8:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(253.779f, -3039.713f, -50f, 308.8536f, -2986.068f, 50f, 1, 1, 1, 1);
			break;
		
		case 9:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(1515.631f, -2191.266f, -50f, 1597.112f, -2059.625f, 150f, 1, 1, 1, 1);
			break;
		
		case 10:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(-348.6945f, -2731.759f, -50f, -230.5551f, -2670.349f, 50.0003f, 1, 1, 1, 1);
			break;
		
		case 11:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(464.591f, -669.6168f, -50f, 598.1423f, -499.8008f, 50f, 1, 1, 1, 1);
			break;
		
		case 12:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(-564.2241f, -1836.488f, -50f, -498.0586f, -1768.227f, 50f, 1, 1, 1, 1);
			break;
		
		case 13:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(-357.3719f, -1413.902f, -50f, -287.5592f, -1320.63f, 50f, 1, 1, 1, 1);
			break;
		
		case 14:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(302.4282f, 333.8127f, -50f, 359.9608f, 361.1776f, 150f, 1, 1, 1, 1);
			break;
		
		case 15:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(883.963f, -1600.535f, -50f, 980.0828f, -1532.579f, 50f, 1, 1, 1, 1);
			break;
		
		case 16:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(691.8906f, -946.6288f, -50f, 792.8187f, -856.2645f, 50f, 1, 1, 1, 1);
			break;
		
		case 17:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(931.0925f, -2203.321f, -50f, 1054.687f, -2104.696f, 50f, 1, 1, 1, 1);
			break;
		
		case 18:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(909.5201f, -2548.777f, -50f, 1079.576f, -2480.221f, 50f, 1, 1, 1, 1);
			break;
		
		case 19:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(-285.6858f, 169.6409f, -50f, -231.663f, 249.5953f, 150f, 1, 1, 1, 1);
			break;
		
		case 20:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(490.689f, -2005.857f, -50f, 557.8708f, -1886.362f, 124.4746f, 1, 1, 1, 1);
			break;
		
		case 21:
			Local_128.f_261 = unk_0x765BE154A2FACB3E(88.2044f, -2235.053f, -50f, 199.7525f, -2183.485f, 50f, 1, 1, 1, 1);
			break;
	}
	unk_0xCD7E92DE2BFA0B0D(&(Local_128.f_1), 12);
}

void func_178()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_128.f_223 == 0)
	{
		Var0 = { unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0) };
		Var3 = { func_179() };
		fVar6 = unk_0x1410333E912D4EC6(Var0, Var3, 0);
		if (fVar6 > 2500f)
		{
			Local_128.f_223 = Global_262145.f_15254;
		}
		else if (fVar6 > 2000f)
		{
			Local_128.f_223 = Global_262145.f_15255;
		}
		else if (fVar6 > 1500f)
		{
			Local_128.f_223 = Global_262145.f_15256;
		}
		else if (fVar6 > 1000f)
		{
			Local_128.f_223 = Global_262145.f_15257;
		}
		else
		{
			Local_128.f_223 = Global_262145.f_15258;
		}
	}
}

Vector3 func_179()
{
	switch (Local_128.f_197)
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

void func_180()
{
	int iVar0;
	
	if (!func_59(Local_128.f_103[0 /*5*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	func_181();
	iVar0 = func_1025();
	switch (iVar0)
	{
		case 99:
			switch (Local_128.f_197)
			{
				case 0:
					Local_128.f_2[0 /*10*/].f_5 = { 81.7918f, -2554.375f, 5f };
					Local_128.f_2[0 /*10*/].f_8 = 268.2536f;
					break;
				
				case 1:
					Local_128.f_2[0 /*10*/].f_5 = { -1065.693f, -1275.444f, 4.9818f };
					Local_128.f_2[0 /*10*/].f_8 = 120.7465f;
					break;
				
				case 2:
					Local_128.f_2[0 /*10*/].f_5 = { 905.6629f, -1003.347f, 33.8966f };
					Local_128.f_2[0 /*10*/].f_8 = 271.0984f;
					break;
				
				case 3:
					Local_128.f_2[0 /*10*/].f_5 = { 231.9853f, -1935.578f, 22.4437f };
					Local_128.f_2[0 /*10*/].f_8 = 322.2929f;
					break;
				
				case 4:
					Local_128.f_2[0 /*10*/].f_5 = { -399.3887f, 230.6774f, 82.492f };
					Local_128.f_2[0 /*10*/].f_8 = 270.2787f;
					break;
				
				case 5:
					Local_128.f_2[0 /*10*/].f_5 = { -1086.639f, -2005.462f, 12.0063f };
					Local_128.f_2[0 /*10*/].f_8 = 11.8952f;
					break;
				
				case 6:
					Local_128.f_2[0 /*10*/].f_5 = { -1244.429f, -884.493f, 11.165f };
					Local_128.f_2[0 /*10*/].f_8 = 126.962f;
					break;
				
				case 7:
					Local_128.f_2[0 /*10*/].f_5 = { -835.0118f, -2630.999f, 12.9249f };
					Local_128.f_2[0 /*10*/].f_8 = 328.7649f;
					break;
				
				case 8:
					Local_128.f_2[0 /*10*/].f_5 = { 296.2087f, -3013.953f, 4.9212f };
					Local_128.f_2[0 /*10*/].f_8 = 0.24f;
					break;
				
				case 9:
					Local_128.f_2[0 /*10*/].f_5 = { 1413.249f, -1954.944f, 64.6238f };
					Local_128.f_2[0 /*10*/].f_8 = 326.5977f;
					break;
				
				case 10:
					Local_128.f_2[0 /*10*/].f_5 = { -318.5519f, -2671.678f, 5.0502f };
					Local_128.f_2[0 /*10*/].f_8 = 318.3914f;
					break;
				
				case 11:
					Local_128.f_2[0 /*10*/].f_5 = { 504.8237f, -711.9799f, 23.9127f };
					Local_128.f_2[0 /*10*/].f_8 = 177.966f;
					break;
				
				case 12:
					Local_128.f_2[0 /*10*/].f_5 = { -524.3798f, -1770.964f, 20.3834f };
					Local_128.f_2[0 /*10*/].f_8 = 245.3696f;
					break;
				
				case 13:
					Local_128.f_2[0 /*10*/].f_5 = { -286.5591f, -1359.238f, 30.3043f };
					Local_128.f_2[0 /*10*/].f_8 = 180.1492f;
					break;
				
				case 14:
					Local_128.f_2[0 /*10*/].f_5 = { 343.9299f, 321.1165f, 103.4987f };
					Local_128.f_2[0 /*10*/].f_8 = 75.8829f;
					break;
				
				case 15:
					Local_128.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_128.f_2[0 /*10*/].f_8 = 4.069f;
					break;
				
				case 16:
					Local_128.f_2[0 /*10*/].f_5 = { 777.0914f, -937.4927f, 24.7044f };
					Local_128.f_2[0 /*10*/].f_8 = 186.7581f;
					break;
				
				case 17:
					Local_128.f_2[0 /*10*/].f_5 = { 997.4642f, -2087.759f, 30.2136f };
					Local_128.f_2[0 /*10*/].f_8 = 275.8696f;
					break;
				
				case 18:
					Local_128.f_2[0 /*10*/].f_5 = { 987.9297f, -2461.676f, 27.3773f };
					Local_128.f_2[0 /*10*/].f_8 = 85.6201f;
					break;
				
				case 19:
					Local_128.f_2[0 /*10*/].f_5 = { -227.6549f, 188.3366f, 78.676f };
					Local_128.f_2[0 /*10*/].f_8 = 178.634f;
					break;
				
				case 20:
					Local_128.f_2[0 /*10*/].f_5 = { 460.4135f, -1932.892f, 23.6765f };
					Local_128.f_2[0 /*10*/].f_8 = 295.2699f;
					break;
				
				case 21:
					Local_128.f_2[0 /*10*/].f_5 = { 241.4945f, -2093.446f, 16.3114f };
					Local_128.f_2[0 /*10*/].f_8 = 225.7471f;
					break;
				
				default:
					Local_128.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_128.f_2[0 /*10*/].f_8 = 4.069f;
					break;
			}
			break;
		
		case 0:
			switch (Local_128.f_197)
			{
				case 0:
					Local_128.f_103[0 /*5*/] = { 48.6581f, -2562.141f, 5f };
					Local_128.f_103[0 /*5*/].f_3 = 18.2728f;
					Local_128.f_103[1 /*5*/] = { 51.6031f, -2571.123f, 5.0046f };
					Local_128.f_103[1 /*5*/].f_3 = 345.3663f;
					Local_128.f_103[2 /*5*/] = { 56.6838f, -2564.757f, 5.0641f };
					Local_128.f_103[2 /*5*/].f_3 = 55.4785f;
					Local_128.f_103[3 /*5*/] = { 62.9447f, -2585.068f, 5.0046f };
					Local_128.f_103[3 /*5*/].f_3 = 271.0223f;
					Local_128.f_103[4 /*5*/] = { 65.0669f, -2563.442f, 5f };
					Local_128.f_103[4 /*5*/].f_3 = 316.6382f;
					Local_128.f_103[5 /*5*/] = { 47.7942f, -2575.388f, 9.0407f };
					Local_128.f_103[5 /*5*/].f_3 = 37.4409f;
					Local_128.f_179[0 /*5*/] = { 61.478f, -2560.506f, 5f };
					Local_128.f_179[0 /*5*/].f_3 = 238.6826f;
					Local_128.f_179[1 /*5*/] = { 49.6015f, -2564.766f, 5.0046f };
					Local_128.f_179[1 /*5*/].f_3 = 154.2891f;
					break;
				
				case 1:
					Local_128.f_103[0 /*5*/] = { -1078.744f, -1271.7f, 9.5625f };
					Local_128.f_103[0 /*5*/].f_3 = 274.4253f;
					Local_128.f_103[1 /*5*/] = { -1087.233f, -1257.104f, 9.5625f };
					Local_128.f_103[1 /*5*/].f_3 = 354.2453f;
					Local_128.f_103[2 /*5*/] = { -1072.724f, -1267.841f, 4.9577f };
					Local_128.f_103[2 /*5*/].f_3 = 193.2412f;
					Local_128.f_103[3 /*5*/] = { -1085.99f, -1254.825f, 4.431f };
					Local_128.f_103[3 /*5*/].f_3 = 304.0791f;
					Local_128.f_103[4 /*5*/] = { -1081.952f, -1259.029f, 4.5607f };
					Local_128.f_103[4 /*5*/].f_3 = 251.1138f;
					Local_128.f_103[5 /*5*/] = { -1063.538f, -1257.842f, 5.0206f };
					Local_128.f_103[5 /*5*/].f_3 = 31.8546f;
					Local_128.f_179[0 /*5*/] = { -1063.267f, -1260.492f, 5.0582f };
					Local_128.f_179[0 /*5*/].f_3 = 134.6062f;
					Local_128.f_179[1 /*5*/] = { -1080.071f, -1255.526f, 4.4927f };
					Local_128.f_179[1 /*5*/].f_3 = 282.3716f;
					break;
				
				case 2:
					Local_128.f_103[0 /*5*/] = { 902.5689f, -1021.511f, 33.9664f };
					Local_128.f_103[0 /*5*/].f_3 = 337.3475f;
					Local_128.f_103[1 /*5*/] = { 894.0451f, -1020.726f, 33.9665f };
					Local_128.f_103[1 /*5*/].f_3 = 303.745f;
					Local_128.f_103[2 /*5*/] = { 901.3245f, -1033.82f, 33.9661f };
					Local_128.f_103[2 /*5*/].f_3 = 343.5762f;
					Local_128.f_103[3 /*5*/] = { 909.4354f, -1035.19f, 33.9662f };
					Local_128.f_103[3 /*5*/].f_3 = 175.276f;
					Local_128.f_103[4 /*5*/] = { 900.9361f, -1044.508f, 38.9808f };
					Local_128.f_103[4 /*5*/].f_3 = 150.7164f;
					Local_128.f_103[5 /*5*/] = { 894.3841f, -1032.681f, 38.9808f };
					Local_128.f_103[5 /*5*/].f_3 = 327.9728f;
					Local_128.f_179[0 /*5*/] = { 900.9302f, -1019.053f, 33.967f };
					Local_128.f_179[0 /*5*/].f_3 = 294.1935f;
					Local_128.f_179[1 /*5*/] = { 905.7681f, -1034.471f, 33.9661f };
					Local_128.f_179[1 /*5*/].f_3 = 222.0787f;
					break;
				
				case 3:
					Local_128.f_103[0 /*5*/] = { 241.6933f, -1941.756f, 22.6063f };
					Local_128.f_103[0 /*5*/].f_3 = 54.0685f;
					Local_128.f_103[1 /*5*/] = { 247.0794f, -1955.052f, 22.2033f };
					Local_128.f_103[1 /*5*/].f_3 = 350.0075f;
					Local_128.f_103[2 /*5*/] = { 260.179f, -1959.165f, 22.0967f };
					Local_128.f_103[2 /*5*/].f_3 = 284.5439f;
					Local_128.f_103[3 /*5*/] = { 258.183f, -1967.262f, 21.487f };
					Local_128.f_103[3 /*5*/].f_3 = 173.9707f;
					Local_128.f_103[4 /*5*/] = { 248.7987f, -1959.507f, 27.2402f };
					Local_128.f_103[4 /*5*/].f_3 = 231.9236f;
					Local_128.f_103[5 /*5*/] = { 233.8911f, -1946.98f, 27.2402f };
					Local_128.f_103[5 /*5*/].f_3 = 342.0352f;
					Local_128.f_179[0 /*5*/] = { 260.5989f, -1964.07f, 21.7532f };
					Local_128.f_179[0 /*5*/].f_3 = 147.0433f;
					Local_128.f_179[1 /*5*/] = { 241.5964f, -1944.464f, 22.3678f };
					Local_128.f_179[1 /*5*/].f_3 = 73.2698f;
					break;
				
				case 4:
					Local_128.f_103[0 /*5*/] = { -405.6343f, 182.3138f, 79.2232f };
					Local_128.f_103[0 /*5*/].f_3 = 306.9303f;
					Local_128.f_103[1 /*5*/] = { -420.0244f, 184.8413f, 79.6851f };
					Local_128.f_103[1 /*5*/].f_3 = 228.321f;
					Local_128.f_103[2 /*5*/] = { -428.4716f, 185.8607f, 79.7578f };
					Local_128.f_103[2 /*5*/].f_3 = 44.5389f;
					Local_128.f_103[3 /*5*/] = { -435.6789f, 179.3023f, 74.3213f };
					Local_128.f_103[3 /*5*/].f_3 = 85.0906f;
					Local_128.f_103[4 /*5*/] = { -399.305f, 190.302f, 80.5987f };
					Local_128.f_103[4 /*5*/].f_3 = 85.1506f;
					Local_128.f_103[5 /*5*/] = { -438.713f, 183.3993f, 74.2764f };
					Local_128.f_103[5 /*5*/].f_3 = 351.0685f;
					Local_128.f_179[0 /*5*/] = { -436.8526f, 183.3829f, 74.3109f };
					Local_128.f_179[0 /*5*/].f_3 = 7.2644f;
					Local_128.f_179[1 /*5*/] = { -405.3793f, 187.1801f, 79.9864f };
					Local_128.f_179[1 /*5*/].f_3 = 354.7918f;
					break;
				
				case 5:
					Local_128.f_103[0 /*5*/] = { -1069.206f, -2014.558f, 12.1616f };
					Local_128.f_103[0 /*5*/].f_3 = 201.0558f;
					Local_128.f_103[1 /*5*/] = { -1063.069f, -2014.715f, 12.1616f };
					Local_128.f_103[1 /*5*/].f_3 = 141.4469f;
					Local_128.f_103[2 /*5*/] = { -1067.427f, -2023.773f, 12.2027f };
					Local_128.f_103[2 /*5*/].f_3 = 197.023f;
					Local_128.f_103[3 /*5*/] = { -1060.439f, -2024.766f, 12.1616f };
					Local_128.f_103[3 /*5*/].f_3 = 152.4942f;
					Local_128.f_103[4 /*5*/] = { -1052.16f, -2022.239f, 12.1616f };
					Local_128.f_103[4 /*5*/].f_3 = 146.7409f;
					Local_128.f_103[5 /*5*/] = { -1051.755f, -2029.141f, 12.1616f };
					Local_128.f_103[5 /*5*/].f_3 = 82.1706f;
					Local_128.f_103[6 /*5*/] = { -1073.135f, -2011.029f, 12.6172f };
					Local_128.f_103[6 /*5*/].f_3 = 214.1918f;
					Local_128.f_103[7 /*5*/] = { -1071.441f, -2002.931f, 14.7905f };
					Local_128.f_103[7 /*5*/].f_3 = 187.3056f;
					Local_128.f_179[0 /*5*/] = { -1052.354f, -2025.611f, 12.1616f };
					Local_128.f_179[0 /*5*/].f_3 = 358.8676f;
					Local_128.f_179[1 /*5*/] = { -1066.611f, -2016.299f, 12.1616f };
					Local_128.f_179[1 /*5*/].f_3 = 280.333f;
					Local_128.f_179[2 /*5*/] = { -1063.965f, -2024.623f, 12.1831f };
					Local_128.f_179[2 /*5*/].f_3 = 269.67f;
					break;
				
				case 6:
					Local_128.f_103[0 /*5*/] = { -1280.076f, -805.8421f, 16.508f };
					Local_128.f_103[0 /*5*/].f_3 = 57.9953f;
					Local_128.f_103[1 /*5*/] = { -1286.231f, -811.6383f, 16.4521f };
					Local_128.f_103[1 /*5*/].f_3 = 35.4979f;
					Local_128.f_103[2 /*5*/] = { -1277.371f, -821.9402f, 16.1003f };
					Local_128.f_103[2 /*5*/].f_3 = 239.3392f;
					Local_128.f_103[3 /*5*/] = { -1267.488f, -824.3138f, 16.0992f };
					Local_128.f_103[3 /*5*/].f_3 = 144.6389f;
					Local_128.f_103[4 /*5*/] = { -1262.181f, -824.9617f, 16.0996f };
					Local_128.f_103[4 /*5*/].f_3 = 39.795f;
					Local_128.f_103[5 /*5*/] = { -1287.23f, -791.7753f, 16.5858f };
					Local_128.f_103[5 /*5*/].f_3 = 140.3937f;
					Local_128.f_179[0 /*5*/] = { -1273.327f, -823.6479f, 16.0992f };
					Local_128.f_179[0 /*5*/].f_3 = 254.419f;
					Local_128.f_179[1 /*5*/] = { -1285.171f, -807.566f, 16.5295f };
					Local_128.f_179[1 /*5*/].f_3 = 146.8347f;
					break;
				
				case 7:
					Local_128.f_103[0 /*5*/] = { -886.5272f, -2713.691f, 12.8285f };
					Local_128.f_103[0 /*5*/].f_3 = 330.9706f;
					Local_128.f_103[1 /*5*/] = { -876.2014f, -2718.661f, 12.9446f };
					Local_128.f_103[1 /*5*/].f_3 = 335.853f;
					Local_128.f_103[2 /*5*/] = { -882.2947f, -2732.553f, 12.8285f };
					Local_128.f_103[2 /*5*/].f_3 = 33.564f;
					Local_128.f_103[3 /*5*/] = { -884.4581f, -2724.486f, 12.8285f };
					Local_128.f_103[3 /*5*/].f_3 = 22.4268f;
					Local_128.f_103[4 /*5*/] = { -887.4197f, -2737.267f, 12.8285f };
					Local_128.f_103[4 /*5*/].f_3 = 356.0724f;
					Local_128.f_103[5 /*5*/] = { -894.7762f, -2736.815f, 12.8285f };
					Local_128.f_103[5 /*5*/].f_3 = 164.3784f;
					Local_128.f_103[6 /*5*/] = { -897.211f, -2750.013f, 12.9445f };
					Local_128.f_103[6 /*5*/].f_3 = 321.2128f;
					Local_128.f_103[7 /*5*/] = { -882.6691f, -2745.853f, 12.9362f };
					Local_128.f_103[7 /*5*/].f_3 = 64.3587f;
					Local_128.f_103[8 /*5*/] = { -907.6017f, -2749.353f, 12.9445f };
					Local_128.f_103[8 /*5*/].f_3 = 335.7514f;
					Local_128.f_103[9 /*5*/] = { -869.9126f, -2715.025f, 12.9446f };
					Local_128.f_103[9 /*5*/].f_3 = 8.2036f;
					Local_128.f_179[0 /*5*/] = { -882.8745f, -2713.687f, 12.8285f };
					Local_128.f_179[0 /*5*/].f_3 = 239.8798f;
					Local_128.f_179[1 /*5*/] = { -883.874f, -2728.786f, 12.8285f };
					Local_128.f_179[1 /*5*/].f_3 = 201.2263f;
					Local_128.f_179[2 /*5*/] = { -891.2535f, -2737.411f, 12.8285f };
					Local_128.f_179[2 /*5*/].f_3 = 92.5365f;
					break;
				
				case 8:
					Local_128.f_103[0 /*5*/] = { 258.4958f, -3019.888f, 4.7612f };
					Local_128.f_103[0 /*5*/].f_3 = 190.0675f;
					Local_128.f_103[1 /*5*/] = { 273.9505f, -3013.159f, 4.7016f };
					Local_128.f_103[1 /*5*/].f_3 = 68.4427f;
					Local_128.f_103[2 /*5*/] = { 273.0544f, -3016.924f, 4.7049f };
					Local_128.f_103[2 /*5*/].f_3 = 136.0059f;
					Local_128.f_103[3 /*5*/] = { 274.0455f, -2995.704f, 4.7009f };
					Local_128.f_103[3 /*5*/].f_3 = 145.0681f;
					Local_128.f_103[4 /*5*/] = { 277.7727f, -3020.606f, 10.5614f };
					Local_128.f_103[4 /*5*/].f_3 = 59.5107f;
					Local_128.f_103[5 /*5*/] = { 277.1279f, -3034.719f, 10.5614f };
					Local_128.f_103[5 /*5*/].f_3 = 113.9025f;
					Local_128.f_179[0 /*5*/] = { 266.3998f, -3022.136f, 4.7302f };
					Local_128.f_179[0 /*5*/].f_3 = 14.1592f;
					Local_128.f_179[1 /*5*/] = { 270.9944f, -2999.383f, 4.7128f };
					Local_128.f_179[1 /*5*/].f_3 = 145.314f;
					break;
				
				case 9:
					Local_128.f_103[0 /*5*/] = { 1546.335f, -2124.289f, 76.1382f };
					Local_128.f_103[0 /*5*/].f_3 = 17.7805f;
					Local_128.f_103[1 /*5*/] = { 1554.385f, -2125.222f, 76.3125f };
					Local_128.f_103[1 /*5*/].f_3 = 10.9741f;
					Local_128.f_103[2 /*5*/] = { 1558.224f, -2118.532f, 76.3765f };
					Local_128.f_103[2 /*5*/].f_3 = 15.6854f;
					Local_128.f_103[3 /*5*/] = { 1547.75f, -2143.708f, 76.4844f };
					Local_128.f_103[3 /*5*/].f_3 = 154.3238f;
					Local_128.f_103[4 /*5*/] = { 1552.05f, -2147.172f, 76.5383f };
					Local_128.f_103[4 /*5*/].f_3 = 147.9245f;
					Local_128.f_103[5 /*5*/] = { 1563.341f, -2138.102f, 76.5841f };
					Local_128.f_103[5 /*5*/].f_3 = 149.5447f;
					Local_128.f_103[6 /*5*/] = { 1561.244f, -2133.029f, 76.4828f };
					Local_128.f_103[6 /*5*/].f_3 = 76.8144f;
					Local_128.f_103[7 /*5*/] = { 1569.277f, -2130.628f, 77.3351f };
					Local_128.f_103[7 /*5*/].f_3 = 112.2364f;
					Local_128.f_179[0 /*5*/] = { 1550.601f, -2145.957f, 76.5271f };
					Local_128.f_179[0 /*5*/].f_3 = 296.1894f;
					Local_128.f_179[1 /*5*/] = { 1563.138f, -2135.943f, 76.5206f };
					Local_128.f_179[1 /*5*/].f_3 = 260.3118f;
					Local_128.f_179[2 /*5*/] = { 1550.38f, -2123.159f, 76.2165f };
					Local_128.f_179[2 /*5*/].f_3 = 235.2799f;
					break;
				
				case 10:
					Local_128.f_103[0 /*5*/] = { -307.7643f, -2684.145f, 5.0079f };
					Local_128.f_103[0 /*5*/].f_3 = 10.2057f;
					Local_128.f_103[1 /*5*/] = { -298.4151f, -2685.329f, 5.1595f };
					Local_128.f_103[1 /*5*/].f_3 = 34.7011f;
					Local_128.f_103[2 /*5*/] = { -309.9699f, -2692.377f, 5.1532f };
					Local_128.f_103[2 /*5*/].f_3 = 231.6414f;
					Local_128.f_103[3 /*5*/] = { -315.5637f, -2698.447f, 6.55f };
					Local_128.f_103[3 /*5*/].f_3 = 279.1803f;
					Local_128.f_103[4 /*5*/] = { -307.4792f, -2699.072f, 5.0003f };
					Local_128.f_103[4 /*5*/].f_3 = 2.2931f;
					Local_128.f_103[5 /*5*/] = { -304.3626f, -2700.868f, 5.0003f };
					Local_128.f_103[5 /*5*/].f_3 = 253.2487f;
					Local_128.f_103[6 /*5*/] = { -306.5913f, -2707.836f, 5.1532f };
					Local_128.f_103[6 /*5*/].f_3 = 313.0547f;
					Local_128.f_103[7 /*5*/] = { -303.2011f, -2711.413f, 5.0003f };
					Local_128.f_103[7 /*5*/].f_3 = 288.4283f;
					Local_128.f_179[0 /*5*/] = { -304.9815f, -2709.62f, 5.0003f };
					Local_128.f_179[0 /*5*/].f_3 = 135.5251f;
					Local_128.f_179[1 /*5*/] = { -305.7259f, -2696.407f, 5.0003f };
					Local_128.f_179[1 /*5*/].f_3 = 207.3978f;
					Local_128.f_179[2 /*5*/] = { -303.8944f, -2685.304f, 5.0003f };
					Local_128.f_179[2 /*5*/].f_3 = 255.2084f;
					break;
				
				case 11:
					Local_128.f_103[0 /*5*/] = { 518.3859f, -657.3704f, 23.7512f };
					Local_128.f_103[0 /*5*/].f_3 = 138.1634f;
					Local_128.f_103[1 /*5*/] = { 519.1835f, -649.9944f, 23.7512f };
					Local_128.f_103[1 /*5*/].f_3 = 17.4978f;
					Local_128.f_103[2 /*5*/] = { 495.9756f, -648.6689f, 31.7074f };
					Local_128.f_103[2 /*5*/].f_3 = 283.3737f;
					Local_128.f_103[3 /*5*/] = { 504.1287f, -641.0121f, 23.7369f };
					Local_128.f_103[3 /*5*/].f_3 = 303.125f;
					Local_128.f_103[4 /*5*/] = { 498.1048f, -638.1683f, 23.9727f };
					Local_128.f_103[4 /*5*/].f_3 = 289.9783f;
					Local_128.f_103[5 /*5*/] = { 499.259f, -630.4283f, 23.7512f };
					Local_128.f_103[5 /*5*/].f_3 = 194.1317f;
					Local_128.f_103[6 /*5*/] = { 508.6016f, -626.3681f, 23.7571f };
					Local_128.f_103[6 /*5*/].f_3 = 343.9152f;
					Local_128.f_103[7 /*5*/] = { 497.44f, -661.5337f, 27.617f };
					Local_128.f_103[7 /*5*/].f_3 = 199.5863f;
					Local_128.f_179[0 /*5*/] = { 517.3517f, -654.2748f, 23.7512f };
					Local_128.f_179[0 /*5*/].f_3 = 150.2542f;
					Local_128.f_179[1 /*5*/] = { 505.3363f, -645.2184f, 23.7512f };
					Local_128.f_179[1 /*5*/].f_3 = 23.9108f;
					Local_128.f_179[2 /*5*/] = { 508.3529f, -630.1296f, 23.7512f };
					Local_128.f_179[2 /*5*/].f_3 = 127.1383f;
					break;
				
				case 12:
					Local_128.f_103[0 /*5*/] = { -546.3519f, -1769.694f, 20.5902f };
					Local_128.f_103[0 /*5*/].f_3 = 277.4846f;
					Local_128.f_103[1 /*5*/] = { -541.7958f, -1776.458f, 20.5973f };
					Local_128.f_103[1 /*5*/].f_3 = 356.3462f;
					Local_128.f_103[2 /*5*/] = { -534.571f, -1772.565f, 20.4432f };
					Local_128.f_103[2 /*5*/].f_3 = 23.1421f;
					Local_128.f_103[3 /*5*/] = { -527.7571f, -1776.274f, 20.367f };
					Local_128.f_103[3 /*5*/].f_3 = 255.9772f;
					Local_128.f_103[4 /*5*/] = { -531.6744f, -1781.516f, 20.4994f };
					Local_128.f_103[4 /*5*/].f_3 = 295.9945f;
					Local_128.f_103[5 /*5*/] = { -555.2966f, -1799.182f, 21.5471f };
					Local_128.f_103[5 /*5*/].f_3 = 327.6154f;
					Local_128.f_103[6 /*5*/] = { -549.1064f, -1786.567f, 21.012f };
					Local_128.f_103[6 /*5*/].f_3 = 334.4709f;
					Local_128.f_103[7 /*5*/] = { -518.8139f, -1785.754f, 20.6425f };
					Local_128.f_103[7 /*5*/].f_3 = 206.6088f;
					Local_128.f_179[0 /*5*/] = { -556.8245f, -1795.383f, 21.5195f };
					Local_128.f_179[0 /*5*/].f_3 = 204.3955f;
					Local_128.f_179[1 /*5*/] = { -531.0875f, -1774.35f, 20.4042f };
					Local_128.f_179[1 /*5*/].f_3 = 77.9003f;
					Local_128.f_179[2 /*5*/] = { -548.1949f, -1767.868f, 20.6224f };
					Local_128.f_179[2 /*5*/].f_3 = 102.3641f;
					break;
				
				case 13:
					Local_128.f_103[0 /*5*/] = { -295.7925f, -1366.301f, 30.3114f };
					Local_128.f_103[0 /*5*/].f_3 = 200.7773f;
					Local_128.f_103[1 /*5*/] = { -294.7914f, -1361.439f, 30.3099f };
					Local_128.f_103[1 /*5*/].f_3 = 280.8006f;
					Local_128.f_103[2 /*5*/] = { -294.8237f, -1355.167f, 30.3168f };
					Local_128.f_103[2 /*5*/].f_3 = 223.8718f;
					Local_128.f_103[3 /*5*/] = { -291.4968f, -1352.201f, 30.2753f };
					Local_128.f_103[3 /*5*/].f_3 = 205.2611f;
					Local_128.f_103[4 /*5*/] = { -294.7546f, -1345.713f, 30.3095f };
					Local_128.f_103[4 /*5*/].f_3 = 323.2399f;
					Local_128.f_103[5 /*5*/] = { -291.2322f, -1339.262f, 30.2775f };
					Local_128.f_103[5 /*5*/].f_3 = 257.2056f;
					Local_128.f_103[6 /*5*/] = { -295.7278f, -1331.49f, 30.3084f };
					Local_128.f_103[6 /*5*/].f_3 = 75.2552f;
					Local_128.f_103[7 /*5*/] = { -293.849f, -1328.756f, 30.2182f };
					Local_128.f_103[7 /*5*/].f_3 = 328.9491f;
					Local_128.f_179[0 /*5*/] = { -292.8152f, -1332.385f, 30.1537f };
					Local_128.f_179[0 /*5*/].f_3 = 29.6972f;
					Local_128.f_179[1 /*5*/] = { -291.6872f, -1348.131f, 30.282f };
					Local_128.f_179[1 /*5*/].f_3 = 166.5207f;
					Local_128.f_179[2 /*5*/] = { -295.23f, -1364.201f, 30.3097f };
					Local_128.f_179[2 /*5*/].f_3 = 108.2429f;
					break;
				
				case 14:
					Local_128.f_103[0 /*5*/] = { 344.5797f, 336.7456f, 104.1594f };
					Local_128.f_103[0 /*5*/].f_3 = 346.2658f;
					Local_128.f_103[1 /*5*/] = { 342.3423f, 332.3715f, 103.7572f };
					Local_128.f_103[1 /*5*/].f_3 = 102.4295f;
					Local_128.f_103[2 /*5*/] = { 341.1604f, 310.392f, 103.4193f };
					Local_128.f_103[2 /*5*/].f_3 = 61.0026f;
					Local_128.f_103[3 /*5*/] = { 346.6567f, 309.6925f, 103.1454f };
					Local_128.f_103[3 /*5*/].f_3 = 257.871f;
					Local_128.f_103[4 /*5*/] = { 350.7382f, 328.2918f, 103.2696f };
					Local_128.f_103[4 /*5*/].f_3 = 117.8644f;
					Local_128.f_103[5 /*5*/] = { 354.2978f, 327.3369f, 103.0974f };
					Local_128.f_103[5 /*5*/].f_3 = 177.6163f;
					Local_128.f_103[6 /*5*/] = { 366.9816f, 326.3944f, 102.6179f };
					Local_128.f_103[6 /*5*/].f_3 = 201.951f;
					Local_128.f_103[7 /*5*/] = { 363.9641f, 322.1239f, 102.6943f };
					Local_128.f_103[7 /*5*/].f_3 = 243.2871f;
					Local_128.f_179[0 /*5*/] = { 343.0425f, 312.0052f, 103.3437f };
					Local_128.f_179[0 /*5*/].f_3 = 258.1888f;
					Local_128.f_179[1 /*5*/] = { 360.5493f, 322.6658f, 102.7946f };
					Local_128.f_179[1 /*5*/].f_3 = 286.3943f;
					Local_128.f_179[2 /*5*/] = { 343.9996f, 332.1288f, 103.7176f };
					Local_128.f_179[2 /*5*/].f_3 = 7.4532f;
					break;
				
				case 15:
					Local_128.f_103[0 /*5*/] = { 962.8411f, -1572.776f, 29.5579f };
					Local_128.f_103[0 /*5*/].f_3 = 198.1588f;
					Local_128.f_103[1 /*5*/] = { 958.9659f, -1572.392f, 29.6097f };
					Local_128.f_103[1 /*5*/].f_3 = 93.0019f;
					Local_128.f_103[2 /*5*/] = { 974.9329f, -1566.858f, 29.5658f };
					Local_128.f_103[2 /*5*/].f_3 = 171.6639f;
					Local_128.f_103[3 /*5*/] = { 977.1616f, -1563.333f, 29.6385f };
					Local_128.f_103[3 /*5*/].f_3 = 4.8635f;
					Local_128.f_103[4 /*5*/] = { 961.7667f, -1559.233f, 29.8001f };
					Local_128.f_103[4 /*5*/].f_3 = 241.449f;
					Local_128.f_103[5 /*5*/] = { 961.8814f, -1556.363f, 29.807f };
					Local_128.f_103[5 /*5*/].f_3 = 275.0858f;
					Local_128.f_103[6 /*5*/] = { 968.3688f, -1552.087f, 29.6598f };
					Local_128.f_103[6 /*5*/].f_3 = 176.2653f;
					Local_128.f_103[7 /*5*/] = { 965.8116f, -1547.661f, 29.6223f };
					Local_128.f_103[7 /*5*/].f_3 = 333.7709f;
					Local_128.f_103[8 /*5*/] = { 957.9225f, -1553.855f, 33.7974f };
					Local_128.f_103[8 /*5*/].f_3 = 308.3917f;
					Local_128.f_103[9 /*5*/] = { 957.7077f, -1566.216f, 33.7974f };
					Local_128.f_103[9 /*5*/].f_3 = 219.3558f;
					Local_128.f_179[0 /*5*/] = { 965.2025f, -1549.952f, 29.6078f };
					Local_128.f_179[0 /*5*/].f_3 = 41.5896f;
					Local_128.f_179[1 /*5*/] = { 974.5963f, -1564.88f, 29.5937f };
					Local_128.f_179[1 /*5*/].f_3 = 251.9554f;
					Local_128.f_179[2 /*5*/] = { 960.7539f, -1572.775f, 29.6016f };
					Local_128.f_179[2 /*5*/].f_3 = 322.5412f;
					break;
				
				case 16:
					Local_128.f_103[0 /*5*/] = { 764.532f, -917.6445f, 24.3477f };
					Local_128.f_103[0 /*5*/].f_3 = 200.6824f;
					Local_128.f_103[1 /*5*/] = { 757.4073f, -914.5825f, 24.2703f };
					Local_128.f_103[1 /*5*/].f_3 = 268.7243f;
					Local_128.f_103[2 /*5*/] = { 763.8087f, -928.9955f, 24.4204f };
					Local_128.f_103[2 /*5*/].f_3 = 359.3907f;
					Local_128.f_103[3 /*5*/] = { 762.9298f, -935.2947f, 24.4307f };
					Local_128.f_103[3 /*5*/].f_3 = 337.1544f;
					Local_128.f_103[4 /*5*/] = { 720.5742f, -888.9393f, 23.2796f };
					Local_128.f_103[4 /*5*/].f_3 = 301.5278f;
					Local_128.f_103[5 /*5*/] = { 763.72f, -888.6782f, 24.0956f };
					Local_128.f_103[5 /*5*/].f_3 = 196.7567f;
					Local_128.f_103[6 /*5*/] = { 763.0903f, -884.3161f, 23.9395f };
					Local_128.f_103[6 /*5*/].f_3 = 321.9963f;
					Local_128.f_103[7 /*5*/] = { 743.7985f, -872.6409f, 24.0443f };
					Local_128.f_103[7 /*5*/].f_3 = 251.8575f;
					Local_128.f_103[8 /*5*/] = { 741.907f, -881.8726f, 24.0428f };
					Local_128.f_103[8 /*5*/].f_3 = 268.2814f;
					Local_128.f_103[9 /*5*/] = { 752.8027f, -884.268f, 24.1054f };
					Local_128.f_103[9 /*5*/].f_3 = 282.8442f;
					Local_128.f_179[0 /*5*/] = { 763.8987f, -886.4079f, 24.0887f };
					Local_128.f_179[0 /*5*/].f_3 = 85.7335f;
					Local_128.f_179[1 /*5*/] = { 744.0313f, -877.4133f, 24.0497f };
					Local_128.f_179[1 /*5*/].f_3 = 152.0251f;
					Local_128.f_179[2 /*5*/] = { 763.1165f, -916.4111f, 24.3315f };
					Local_128.f_179[2 /*5*/].f_3 = 133.3755f;
					break;
				
				case 17:
					Local_128.f_103[0 /*5*/] = { 1003.053f, -2149.714f, 37.3448f };
					Local_128.f_103[0 /*5*/].f_3 = 182.3138f;
					Local_128.f_103[1 /*5*/] = { 1010.169f, -2135.276f, 29.5516f };
					Local_128.f_103[1 /*5*/].f_3 = 349.7712f;
					Local_128.f_103[2 /*5*/] = { 1011.614f, -2142.546f, 29.5516f };
					Local_128.f_103[2 /*5*/].f_3 = 2.675f;
					Local_128.f_103[3 /*5*/] = { 1018.429f, -2145.479f, 29.5994f };
					Local_128.f_103[3 /*5*/].f_3 = 263.1569f;
					Local_128.f_103[4 /*5*/] = { 1020.569f, -2148.083f, 30.5334f };
					Local_128.f_103[4 /*5*/].f_3 = 259.3002f;
					Local_128.f_103[5 /*5*/] = { 1011.448f, -2146.674f, 29.5516f };
					Local_128.f_103[5 /*5*/].f_3 = 139.4625f;
					Local_128.f_103[6 /*5*/] = { 1013.688f, -2150.349f, 30.5334f };
					Local_128.f_103[6 /*5*/].f_3 = 91.3056f;
					Local_128.f_103[7 /*5*/] = { 1011.563f, -2153.055f, 29.5516f };
					Local_128.f_103[7 /*5*/].f_3 = 44.0468f;
					Local_128.f_103[8 /*5*/] = { 1008.21f, -2156.475f, 29.5516f };
					Local_128.f_103[8 /*5*/].f_3 = 347.5848f;
					Local_128.f_103[9 /*5*/] = { 1007.324f, -2161.736f, 29.5516f };
					Local_128.f_103[9 /*5*/].f_3 = 172.5634f;
					Local_128.f_179[0 /*5*/] = { 1007.872f, -2138.394f, 29.5516f };
					Local_128.f_179[0 /*5*/].f_3 = 139.8753f;
					Local_128.f_179[1 /*5*/] = { 1013.982f, -2145.138f, 29.5516f };
					Local_128.f_179[1 /*5*/].f_3 = 259.47f;
					Local_128.f_179[2 /*5*/] = { 1008.767f, -2160.593f, 29.5516f };
					Local_128.f_179[2 /*5*/].f_3 = 200.1719f;
					break;
				
				case 18:
					Local_128.f_103[0 /*5*/] = { 1016.825f, -2498.752f, 27.3493f };
					Local_128.f_103[0 /*5*/].f_3 = 61.8849f;
					Local_128.f_103[1 /*5*/] = { 996.0087f, -2540.799f, 27.3073f };
					Local_128.f_103[1 /*5*/].f_3 = 3.7927f;
					Local_128.f_103[2 /*5*/] = { 1017.77f, -2493.367f, 27.3879f };
					Local_128.f_103[2 /*5*/].f_3 = 88.4198f;
					Local_128.f_103[3 /*5*/] = { 1012.715f, -2506.288f, 27.302f };
					Local_128.f_103[3 /*5*/].f_3 = 27.7498f;
					Local_128.f_103[4 /*5*/] = { 996.7639f, -2512.485f, 27.302f };
					Local_128.f_103[4 /*5*/].f_3 = 40.6136f;
					Local_128.f_103[5 /*5*/] = { 1015.915f, -2514.646f, 27.3035f };
					Local_128.f_103[5 /*5*/].f_3 = 56.6315f;
					Local_128.f_103[6 /*5*/] = { 1011.236f, -2524.491f, 27.3083f };
					Local_128.f_103[6 /*5*/].f_3 = 15.7729f;
					Local_128.f_103[7 /*5*/] = { 1006.954f, -2527.826f, 27.3043f };
					Local_128.f_103[7 /*5*/].f_3 = 101.1154f;
					Local_128.f_103[8 /*5*/] = { 999.3998f, -2523.023f, 27.302f };
					Local_128.f_103[8 /*5*/].f_3 = 354.1063f;
					Local_128.f_103[9 /*5*/] = { 994.9509f, -2527.176f, 27.302f };
					Local_128.f_103[9 /*5*/].f_3 = 125.381f;
					Local_128.f_179[0 /*5*/] = { 1012.638f, -2502.169f, 27.302f };
					Local_128.f_179[0 /*5*/].f_3 = 316.6046f;
					Local_128.f_179[1 /*5*/] = { 1013.986f, -2523.53f, 27.3055f };
					Local_128.f_179[1 /*5*/].f_3 = 240.5153f;
					Local_128.f_179[2 /*5*/] = { 996.9083f, -2523.664f, 27.302f };
					Local_128.f_179[2 /*5*/].f_3 = 164.8845f;
					break;
				
				case 19:
					Local_128.f_103[0 /*5*/] = { -266.5881f, 190.2768f, 84.3252f };
					Local_128.f_103[0 /*5*/].f_3 = 121.811f;
					Local_128.f_103[1 /*5*/] = { -271.8751f, 195.5884f, 84.6149f };
					Local_128.f_103[1 /*5*/].f_3 = 274.2204f;
					Local_128.f_103[2 /*5*/] = { -265.1418f, 201.9027f, 84.4806f };
					Local_128.f_103[2 /*5*/].f_3 = 181.8879f;
					Local_128.f_103[3 /*5*/] = { -261.9281f, 201.8817f, 84.2857f };
					Local_128.f_103[3 /*5*/].f_3 = 253.3033f;
					Local_128.f_103[4 /*5*/] = { -260.6143f, 186.3196f, 84.0337f };
					Local_128.f_103[4 /*5*/].f_3 = 4.0892f;
					Local_128.f_103[5 /*5*/] = { -255.9788f, 194.8307f, 83.7181f };
					Local_128.f_103[5 /*5*/].f_3 = 103.808f;
					Local_128.f_103[6 /*5*/] = { -252.9307f, 192.114f, 82.7736f };
					Local_128.f_103[6 /*5*/].f_3 = 262.768f;
					Local_128.f_103[7 /*5*/] = { -242.0461f, 190.5416f, 79.3582f };
					Local_128.f_103[7 /*5*/].f_3 = 200.5955f;
					Local_128.f_103[8 /*5*/] = { -241.619f, 202.893f, 82.2432f };
					Local_128.f_103[8 /*5*/].f_3 = 209.8882f;
					Local_128.f_103[9 /*5*/] = { -235.1685f, 202.9628f, 82.1429f };
					Local_128.f_103[9 /*5*/].f_3 = 338.4766f;
					Local_128.f_179[0 /*5*/] = { -237.4442f, 203.1399f, 82.1887f };
					Local_128.f_179[0 /*5*/].f_3 = 159.4961f;
					Local_128.f_179[1 /*5*/] = { -251.6716f, 193.9603f, 82.6293f };
					Local_128.f_179[1 /*5*/].f_3 = 87.8942f;
					Local_128.f_179[2 /*5*/] = { -266.8874f, 193.015f, 84.3937f };
					Local_128.f_179[2 /*5*/].f_3 = 65.6299f;
					break;
				
				case 20:
					Local_128.f_103[0 /*5*/] = { 534.4465f, -1941.385f, 30.2292f };
					Local_128.f_103[0 /*5*/].f_3 = 311.177f;
					Local_128.f_103[1 /*5*/] = { 558.1476f, -1927.909f, 23.7833f };
					Local_128.f_103[1 /*5*/].f_3 = 342.9807f;
					Local_128.f_103[2 /*5*/] = { 546.3505f, -1928.6f, 23.8219f };
					Local_128.f_103[2 /*5*/].f_3 = 311.7955f;
					Local_128.f_103[3 /*5*/] = { 547.1193f, -1947.377f, 23.9851f };
					Local_128.f_103[3 /*5*/].f_3 = 250.7509f;
					Local_128.f_103[4 /*5*/] = { 572.5258f, -1930.575f, 23.7494f };
					Local_128.f_103[4 /*5*/].f_3 = 346.9088f;
					Local_128.f_103[5 /*5*/] = { 539.3912f, -1923.777f, 23.9851f };
					Local_128.f_103[5 /*5*/].f_3 = 316.7842f;
					Local_128.f_103[6 /*5*/] = { 563.26f, -1920.301f, 23.7598f };
					Local_128.f_103[6 /*5*/].f_3 = 325.4008f;
					Local_128.f_103[7 /*5*/] = { 533.5303f, -1938.4f, 23.9851f };
					Local_128.f_103[7 /*5*/].f_3 = 309.4188f;
					Local_128.f_179[0 /*5*/] = { 548.8199f, -1930.106f, 23.8175f };
					Local_128.f_179[0 /*5*/].f_3 = 159.5928f;
					Local_128.f_179[1 /*5*/] = { 551.0328f, -1946.83f, 23.9851f };
					Local_128.f_179[1 /*5*/].f_3 = 84.4521f;
					Local_128.f_179[2 /*5*/] = { 561.5193f, -1927.552f, 23.7627f };
					Local_128.f_179[2 /*5*/].f_3 = 80.685f;
					break;
				
				case 21:
					Local_128.f_103[0 /*5*/] = { 110.1075f, -2228.434f, 5.1712f };
					Local_128.f_103[0 /*5*/].f_3 = 265.3441f;
					Local_128.f_103[1 /*5*/] = { 109.2036f, -2234.949f, 5.0633f };
					Local_128.f_103[1 /*5*/].f_3 = 271.2665f;
					Local_128.f_103[2 /*5*/] = { 92.4692f, -2228.285f, 5.0333f };
					Local_128.f_103[2 /*5*/].f_3 = 246.2804f;
					Local_128.f_103[3 /*5*/] = { 89.8902f, -2221.848f, 5.0483f };
					Local_128.f_103[3 /*5*/].f_3 = 77.5276f;
					Local_128.f_103[4 /*5*/] = { 119.3045f, -2188.549f, 4.9608f };
					Local_128.f_103[4 /*5*/].f_3 = 260.6882f;
					Local_128.f_103[5 /*5*/] = { 135.5824f, -2185.041f, 5.0909f };
					Local_128.f_103[5 /*5*/].f_3 = 248.253f;
					Local_128.f_103[6 /*5*/] = { 102.5402f, -2183.203f, 4.953f };
					Local_128.f_103[6 /*5*/].f_3 = 254.5778f;
					Local_128.f_103[7 /*5*/] = { 93.2016f, -2199.761f, 5.0431f };
					Local_128.f_103[7 /*5*/].f_3 = 178.9871f;
					Local_128.f_103[8 /*5*/] = { 95.4634f, -2193.558f, 5.0313f };
					Local_128.f_103[8 /*5*/].f_3 = 283.6666f;
					Local_128.f_103[9 /*5*/] = { 99.6321f, -2203.004f, 5.181f };
					Local_128.f_103[9 /*5*/].f_3 = 312.4828f;
					Local_128.f_179[0 /*5*/] = { 95.909f, -2196.279f, 5.0431f };
					Local_128.f_179[0 /*5*/].f_3 = 139.258f;
					Local_128.f_179[1 /*5*/] = { 120.4857f, -2191.816f, 5.0209f };
					Local_128.f_179[1 /*5*/].f_3 = 159.3418f;
					Local_128.f_179[2 /*5*/] = { 109.2645f, -2231.557f, 5.0333f };
					Local_128.f_179[2 /*5*/].f_3 = 62.2714f;
					break;
				
				default:
					Local_128.f_103[0 /*5*/] = { 968.5941f, -1557.899f, 29.6842f };
					Local_128.f_103[0 /*5*/].f_3 = 114.28f;
					Local_128.f_103[1 /*5*/] = { 965.9659f, -1571.214f, 29.5878f };
					Local_128.f_103[1 /*5*/].f_3 = 62.3577f;
					Local_128.f_103[2 /*5*/] = { 951.7892f, -1575.491f, 29.434f };
					Local_128.f_103[2 /*5*/].f_3 = 41.1548f;
					Local_128.f_103[3 /*5*/] = { 939.3943f, -1575.787f, 29.345f };
					Local_128.f_103[3 /*5*/].f_3 = 85.4368f;
					Local_128.f_103[4 /*5*/] = { 928.4522f, -1577.374f, 29.4239f };
					Local_128.f_103[4 /*5*/].f_3 = 336.8404f;
					Local_128.f_103[5 /*5*/] = { 921.6147f, -1573.96f, 29.6373f };
					Local_128.f_103[5 /*5*/].f_3 = 337.606f;
					Local_128.f_103[6 /*5*/] = { 920.303f, -1564.142f, 29.7523f };
					Local_128.f_103[6 /*5*/].f_3 = 52.3963f;
					Local_128.f_103[7 /*5*/] = { 918.5511f, -1552.143f, 29.7808f };
					Local_128.f_103[7 /*5*/].f_3 = 244.4705f;
					Local_128.f_103[8 /*5*/] = { 922.5096f, -1543.686f, 29.8074f };
					Local_128.f_103[8 /*5*/].f_3 = 8.0474f;
					Local_128.f_103[9 /*5*/] = { 910.6829f, -1547.757f, 29.6528f };
					Local_128.f_103[9 /*5*/].f_3 = 217.9933f;
					Local_128.f_103[10 /*5*/] = { 910.2541f, -1557.902f, 29.7034f };
					Local_128.f_103[10 /*5*/].f_3 = 237.5501f;
					Local_128.f_103[11 /*5*/] = { 909.9764f, -1572.07f, 29.791f };
					Local_128.f_103[11 /*5*/].f_3 = 287.341f;
					Local_128.f_179[0 /*5*/] = { 912.0468f, -1562.435f, 29.7522f };
					Local_128.f_179[0 /*5*/].f_3 = 305.0547f;
					Local_128.f_179[1 /*5*/] = { 903.5677f, -1559.325f, 29.6796f };
					Local_128.f_179[1 /*5*/].f_3 = 301.2764f;
					Local_128.f_179[2 /*5*/] = { 970.6998f, -1558.555f, 29.6813f };
					Local_128.f_179[2 /*5*/].f_3 = 43.0116f;
					break;
			}
			break;
	}
}

var func_181()
{
	if (Local_128.f_195 != -1)
	{
		return Local_128.f_195;
	}
	Local_128.f_195 = unk_0x3AF262D7332EEDF5(0, 3);
	return Local_128.f_195;
}

int func_182(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_183(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xEF0CB8FF125B9F9C())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_184()
{
	char* sVar0;
	
	func_189();
	if (unk_0x2A3398C6222EB190(iLocal_752, 9))
	{
		return;
	}
	if (func_1027())
	{
		if (!unk_0x2A3398C6222EB190(iLocal_752, 0))
		{
			unk_0xEFA5EE6457AF6CFC("DisableFlightMusic", 1);
			unk_0xEFA5EE6457AF6CFC("WantedMusicDisabled", 1);
			unk_0xCD7E92DE2BFA0B0D(&iLocal_752, 0);
		}
		if (!unk_0x2A3398C6222EB190(iLocal_752, 1))
		{
			if (!func_395())
			{
				sVar0 = "EXEC1_UNDER_ATTACK_START";
			}
			else
			{
				sVar0 = "EXEC1_DEFEND_FLEEING_START";
			}
			if (unk_0x1E420F926A7BC4D2(sVar0))
			{
				unk_0xCD7E92DE2BFA0B0D(&iLocal_752, 1);
			}
		}
		if (!func_395())
		{
			if (!unk_0x2A3398C6222EB190(iLocal_752, 3))
			{
				if (unk_0x2A3398C6222EB190(Local_128.f_1, 13))
				{
					if (unk_0x1E420F926A7BC4D2("EXEC1_UNDER_ATTACK_ARRIVE_SMA"))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_752, 3);
					}
				}
			}
		}
		if (!func_395())
		{
			if (unk_0x2A3398C6222EB190(Local_128.f_1, 1))
			{
				if (!unk_0x2A3398C6222EB190(iLocal_752, 4))
				{
					if (unk_0x1E420F926A7BC4D2("EXEC1_UNDER_ATTACK_STOP"))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_752, 4);
					}
				}
			}
		}
		if (!unk_0x2A3398C6222EB190(iLocal_752, 6))
		{
			if ((((unk_0x2A3398C6222EB190(Local_128.f_1, 3) || unk_0x2A3398C6222EB190(Local_128.f_1, 15)) || unk_0x2A3398C6222EB190(Local_128.f_1, 5)) || unk_0x2A3398C6222EB190(Local_128.f_1, 9)) || unk_0x2A3398C6222EB190(Local_128.f_1, 8))
			{
				if (unk_0x1E420F926A7BC4D2("EXEC1_UNDER_ATTACK_FAIL"))
				{
					unk_0xCD7E92DE2BFA0B0D(&iLocal_752, 6);
				}
			}
		}
		if (func_395())
		{
			if (!unk_0x2A3398C6222EB190(iLocal_752, 16))
			{
				if (Local_128.f_215 == -1)
				{
					if (func_185("DCONTRA_OBJ4"))
					{
						if (unk_0x1E420F926A7BC4D2("EXEC1_DEFEND_FLEEING_RETRIEVE_SMA"))
						{
							unk_0xCD7E92DE2BFA0B0D(&iLocal_752, 16);
						}
					}
				}
			}
			if (!unk_0x2A3398C6222EB190(iLocal_752, 17))
			{
				if (Local_128.f_215 != -1)
				{
					if (unk_0x1E420F926A7BC4D2("EXEC1_DEFEND_FLEEING_RETURN_SMA"))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_752, 17);
					}
				}
			}
			if (!unk_0x2A3398C6222EB190(iLocal_752, 18))
			{
				if (unk_0x2A3398C6222EB190(Local_128.f_1, 4))
				{
					if (unk_0x1E420F926A7BC4D2("EXEC1_DEFEND_FLEEING_STOP"))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_752, 18);
					}
				}
			}
		}
	}
}

int func_185(char* sParam0)
{
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (!func_188())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		if (unk_0x3222F8FFDC06381F(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x3222F8FFDC06381F(sParam0) > 23)
	{
		return 0;
	}
	return func_186(sParam0);
}

bool func_186(char* sParam0)
{
	if (!func_188())
	{
		return 0;
	}
	if (Global_1312575 == 11)
	{
		return func_187(sParam0);
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	return unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(&(Global_1312575.f_12));
}

bool func_187(char* sParam0)
{
	if (!func_188())
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	return unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(&(Global_1312575.f_16));
}

int func_188()
{
	if (Global_1312575 == 20)
	{
		return 0;
	}
	return 1;
}

void func_189()
{
	if (unk_0x2A3398C6222EB190(iLocal_752, 8))
	{
		if (unk_0x2A3398C6222EB190(iLocal_752, 9))
		{
			if (!unk_0x2A3398C6222EB190(iLocal_752, 10))
			{
				if (unk_0x2A3398C6222EB190(iLocal_752, 11))
				{
					if (!unk_0x2A3398C6222EB190(iLocal_752, 12))
					{
						unk_0x62316D43A8F729C6(1);
						unk_0xEFA5EE6457AF6CFC("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0x2A3398C6222EB190(iLocal_752, 15))
				{
					if (unk_0x1E420F926A7BC4D2("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_752, 15);
					}
				}
				if (unk_0x2A3398C6222EB190(iLocal_752, 15))
				{
					if (!unk_0x2A3398C6222EB190(iLocal_752, 13))
					{
						if (unk_0x1E420F926A7BC4D2("APT_FADE_IN_RADIO"))
						{
							unk_0xCD7E92DE2BFA0B0D(&iLocal_752, 13);
						}
					}
					if (unk_0x2A3398C6222EB190(iLocal_752, 13))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_752, 10);
					}
				}
			}
		}
	}
}

void func_190()
{
	struct<3> Var0;
	float fVar3;
	
	if (!func_1027() && !func_393())
	{
		return;
	}
	if (unk_0x2A3398C6222EB190(iLocal_751, 15))
	{
		if (!unk_0x2A3398C6222EB190(iLocal_751, 16))
		{
			if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
			{
				if (unk_0x58288C08A90CC7D0() == 0)
				{
					unk_0x438B2E6B2BAD6A0D(5);
					unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 2, 0);
					unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 16);
				}
			}
		}
		return;
	}
	if (func_395())
	{
		if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
		{
			Var0 = { unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 0) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	fVar3 = unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Var0);
	if (!unk_0x2A3398C6222EB190(iLocal_751, 17))
	{
		if (fVar3 < 250000f)
		{
			unk_0x438B2E6B2BAD6A0D(0);
			unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 17);
		}
	}
	else if (fVar3 > 360000f)
	{
		unk_0x438B2E6B2BAD6A0D(5);
		unk_0xD804ACF2A7171150(&iLocal_751, 17);
	}
}

void func_191()
{
	struct<3> Var0;
	
	if (!func_1027() && !func_393())
	{
		return;
	}
	if (func_395())
	{
		if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
		{
			Var0 = { unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 0) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	if (!func_59(Var0, 0f, 0f, 0f, 0))
	{
		func_192(169, Var0, &uLocal_866, 1140457472, 1144750080, 0);
	}
}

void func_192(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_241(unk_0x3D35F9864E4640B1()) && !func_240(unk_0x3D35F9864E4640B1())) && !unk_0x2A3398C6222EB190(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1, 8)) && (func_239(unk_0x3D35F9864E4640B1()) || func_238(unk_0x3D35F9864E4640B1())))
	{
		return;
	}
	Global_1779211 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Param1);
	func_236(iParam0, fVar0);
	if (unk_0x957E53BB191CB24D() && unk_0xA095EFC51C188A82() == 15)
	{
		if (func_235(unk_0x3D35F9864E4640B1()) || func_233(unk_0x3D35F9864E4640B1()))
		{
			if (!unk_0xA7D65AEDCF363C6A(1344549371))
			{
				unk_0x72FE4F9355DA095B(1344549371);
			}
		}
		else if (unk_0xA7D65AEDCF363C6A(1344549371))
		{
			unk_0x812DD153A22D0357(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_232(unk_0x3D35F9864E4640B1(), 21))
		{
			func_231(Param1, 1, 0);
		}
		if (!*uParam4 && func_1124(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			*uParam4 = 1;
			if (func_230(iParam0))
			{
				unk_0x15007EAE63C7ECCF(func_229(iParam0));
				if (func_228(iParam0, -1))
				{
					unk_0x438B2E6B2BAD6A0D(0);
					if (unk_0x4347749EAD4D87DF(unk_0x3D35F9864E4640B1()) > 0)
					{
						unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 1);
						unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 1);
					}
					unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 0);
				}
			}
			if (func_227(iParam0))
			{
				fVar1 = func_226(iParam0);
				if (fVar1 != 1f)
				{
					func_223(fVar1);
					unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 1);
				}
			}
			if (!Global_2391044)
			{
				if (func_222(iParam0) && func_235(unk_0x3D35F9864E4640B1()))
				{
					func_220(1);
					func_219(2);
				}
			}
			func_218(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_217(unk_0x3D35F9864E4640B1(), 19))
			{
				func_216(19);
			}
		}
		if (*uParam4 && func_1124(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			*uParam4 = 0;
			if (func_230(iParam0))
			{
				if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 0))
				{
					unk_0x15007EAE63C7ECCF(1f);
					unk_0x438B2E6B2BAD6A0D(5);
					unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 0);
				}
			}
			if (func_227(iParam0))
			{
				func_215();
				unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 1);
			}
			if (iParam7 && !func_241(unk_0x3D35F9864E4640B1()))
			{
				if (func_213(unk_0x3D35F9864E4640B1()) != 152)
				{
					func_195();
				}
			}
			if (func_194(2))
			{
				func_220(0);
				func_193(2);
			}
		}
	}
}

void func_193(int iParam0)
{
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_29), iParam0);
}

bool func_194(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_29, iParam0);
}

void func_195()
{
	unk_0x44666CF18D6E211C(&(Global_2404997.f_24), &Global_2408969, 2);
	unk_0x44666CF18D6E211C(&(Global_2404997.f_26), &Global_2408971, 17);
	func_211();
	func_198(1, 1);
	func_196();
}

void func_196()
{
	func_197(0, 0);
}

void func_197(int iParam0, int iParam1)
{
	Global_2404997.f_22 = iParam0;
	Global_2404997.f_23 = iParam1;
}

void func_198(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x44666CF18D6E211C(&(Global_2404997.f_43), &Global_2408988, 315);
	}
	else
	{
		Global_2404997.f_43 = { Global_2408988 };
		Global_2404997.f_43.f_49 = { Global_2408988.f_49 };
		Global_2404997.f_43.f_52 = Global_2408988.f_52;
		Global_2404997.f_43.f_53 = Global_2408988.f_53;
	}
	if (bParam0)
	{
		func_210();
	}
	func_201(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_200(0);
	func_199();
}

void func_199()
{
	struct<6> Var0;
	
	if (Global_2404997.f_480.f_1 == unk_0xFFDE6A3A0108B7CB())
	{
		Global_2404997.f_480 = { Var0 };
	}
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		Global_2404997.f_679 = 0;
	}
	else
	{
		Global_2404997.f_679 = 1;
	}
}

void func_201(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_209())
		{
			func_208();
		}
		Global_2404997.f_680.f_515 = unk_0xFFDE6A3A0108B7CB();
		Global_2404997.f_680.f_504 = iParam1;
		Global_2404997.f_680.f_505 = iParam2;
		Global_2404997.f_680.f_506 = iParam10;
		func_206();
		func_205(8, 0, 0, 0, 0);
		Global_2404997.f_680.f_507 = iParam11;
		Global_2404997.f_680.f_510 = iParam3;
		Global_2404997.f_680.f_511 = iParam4;
		Global_2404997.f_680.f_508 = iParam5;
		Global_2404997.f_680.f_509 = iParam6;
		Global_2404997.f_680.f_512 = iParam7;
		Global_2404997.f_680.f_513 = iParam8;
		Global_2404997.f_680.f_514 = iParam9;
		Global_2404997.f_1713 = 1;
	}
	else
	{
		func_202();
	}
}

void func_202()
{
	if (func_209() && !func_204())
	{
		func_208();
	}
	if (func_204())
	{
		func_203();
	}
	else
	{
		func_206();
		func_205(0, 0, 0, 0, 0);
		Global_2404997.f_1713 = 0;
		Global_2404997.f_1712 = 0;
	}
}

void func_203()
{
	unk_0x44666CF18D6E211C(&(Global_2404997.f_680), &(Global_2404997.f_1196), 516);
	Global_2404997.f_480 = { Global_2404997.f_486 };
	if (unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_680.f_515)
	{
		Global_2404997.f_1712 = 0;
	}
}

int func_204()
{
	if ((Global_2404997.f_1712 && !unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_1196.f_515) && unk_0xE2F358F9F113BDF1(Global_2404997.f_1196.f_515))
	{
		return 1;
	}
	return 0;
}

void func_205(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411761 = 0;
	}
	Global_2404997.f_480 = iParam0;
	Global_2404997.f_480.f_1 = unk_0xFFDE6A3A0108B7CB();
	Global_2404997.f_480.f_2 = iParam1;
	Global_2404997.f_480.f_3 = iParam2;
	Global_2404997.f_480.f_4 = iParam3;
	Global_2404997.f_480.f_5 = iParam4;
}

void func_206()
{
	if (func_209() && !func_204())
	{
		func_208();
	}
	func_207();
	Global_2404997.f_680 = 0;
}

void func_207()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404997.f_680.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_208()
{
	if (func_204())
	{
		if (Global_2404997.f_680.f_515 == Global_2404997.f_1196.f_515)
		{
			return;
		}
	}
	if (!unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_680.f_515)
	{
		unk_0x44666CF18D6E211C(&(Global_2404997.f_1196), &(Global_2404997.f_680), 516);
		Global_2404997.f_486 = { Global_2404997.f_480 };
		Global_2404997.f_1712 = 1;
	}
}

int func_209()
{
	if ((Global_2404997.f_1713 && !unk_0xFFDE6A3A0108B7CB() == Global_2404997.f_680.f_515) && unk_0xE2F358F9F113BDF1(Global_2404997.f_680.f_515))
	{
		return 1;
	}
	return 0;
}

void func_210()
{
	unk_0x44666CF18D6E211C(&(Global_2404997.f_358), &Global_2409303, 121);
}

void func_211()
{
	func_212();
	Global_2404997.f_2172 = 0;
}

void func_212()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404997.f_2173[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_213(int iParam0)
{
	if (func_214(iParam0, 0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_32;
	}
	return -1;
}

int func_214(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_32 != -1 || (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

void func_215()
{
	if (unk_0xE2F358F9F113BDF1(Global_2501777.f_4863))
	{
		if (!Global_2501777.f_4863 == unk_0xFFDE6A3A0108B7CB() && Global_2501777.f_4862 < 1f)
		{
			return;
		}
	}
	Global_2501777.f_4863 = -1;
	Global_2501777.f_4862 = 1f;
}

void func_216(int iParam0)
{
	unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_4), iParam0);
}

bool func_217(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_11.f_4, iParam1);
}

void func_218(int iParam0)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_4), iParam0);
}

void func_219(int iParam0)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4867.f_29), iParam0);
}

void func_220(int iParam0)
{
	if (func_221() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391044)
	{
		return;
	}
	Global_2391044 = iParam0;
	Global_2391046 = 0;
	Global_2391047 = 0;
}

int func_221()
{
	if ((((Global_979818 != -1 && Global_979818 != 33) && Global_979818 != 35) && Global_979818 != 37) && Global_979818 != 21)
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
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

void func_223(float fParam0)
{
	float fVar0;
	
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_224())
	{
		return;
	}
	fVar0 = (Global_2501777.f_4862 - fParam0);
	if (unk_0xE2F358F9F113BDF1(Global_2501777.f_4863))
	{
		if (!Global_2501777.f_4863 == unk_0xFFDE6A3A0108B7CB() && unk_0x229F35E7CDDBF757(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2501777.f_4862 = fParam0;
	Global_2501777.f_4863 = unk_0xFFDE6A3A0108B7CB();
}

int func_224()
{
	switch (func_225())
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

int func_225()
{
	return Global_25222;
}

float func_226(int iParam0)
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
		case 229:
		case 230:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_227(int iParam0)
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

int func_228(int iParam0, int iParam1)
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

float func_229(int iParam0)
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

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
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

void func_231(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404997.f_43.f_49 = { Param0 };
	Global_2404997.f_43.f_52 = iParam3;
	Global_2404997.f_43.f_53 = iParam4;
}

bool func_232(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_217, iParam1);
}

int func_233(int iParam0)
{
	if (func_234(iParam0))
	{
		if (func_235(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_234(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_55())
		{
			return Global_1623799[iParam0 /*488*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_235(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_217(iParam0, 9);
	}
	return 0;
}

void func_236(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_237(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_1007();
	}
}

int func_237(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11711;
		
		case 142:
			return Global_262145.f_11699;
		
		case 157:
			return Global_262145.f_11666;
		
		case 159:
			return Global_262145.f_11649;
		
		case 162:
			return Global_262145.f_11760;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_238(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_1623799[iVar0 /*488*/].f_1, 0);
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x2A3398C6222EB190(Global_1623799[iVar0 /*488*/].f_1, 7);
	}
	return 0;
}

bool func_240(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 2);
}

int func_241(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1623799[iVar0 /*488*/] != -1;
	}
	return 0;
}

void func_242()
{
	if (!func_395())
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(Local_128.f_1, 4))
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(Local_128.f_1, 18))
	{
		return;
	}
	if (unk_0x2A3398C6222EB190(Local_128.f_1, 17))
	{
		if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2) && unk_0xA02DD6B5C8C02298(Local_128.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_128.f_2[0 /*10*/].f_2))
			{
				if (!unk_0x8CAADD2AA5EDCAAC(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2)))
				{
					func_246(&(Local_128.f_2[0 /*10*/].f_2));
				}
			}
		}
		return;
	}
	if (unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 15))
	{
		return;
	}
	if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_128.f_2[0 /*10*/].f_2))
		{
			if (func_243(Local_128.f_2[0 /*10*/].f_2))
			{
				if (unk_0xA02DD6B5C8C02298(Local_128.f_2[0 /*10*/].f_2))
				{
					unk_0xC3401989C687FB74(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 1, 1);
					unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 15);
				}
			}
		}
	}
}

int func_243(var uParam0)
{
	if (unk_0x9855654AB6D34651(uParam0))
	{
		return 1;
	}
	if (func_244(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_244(var uParam0)
{
	if (!unk_0xEF0CB8FF125B9F9C())
	{
		return 0;
	}
	if (!unk_0xAA55DF0CB38F413B(uParam0))
	{
		return 0;
	}
	if (func_245(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_245(var uParam0)
{
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		unk_0xED8E0F2F3151048A(uParam0);
		return unk_0xA02DD6B5C8C02298(uParam0);
	}
	return 0;
}

void func_246(var uParam0)
{
	var uVar0;
	
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		if (!unk_0xA02DD6B5C8C02298(*uParam0))
		{
		}
	}
	if (unk_0xAA55DF0CB38F413B(*uParam0))
	{
		uVar0 = unk_0xC42CA935BE72299D(*uParam0);
		unk_0x237D39B9E9EE9ADC(&uVar0);
	}
}

void func_247(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	struct<2> Var57;
	
	if (func_383(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_381() || iParam2 == 26)
	{
		if (func_331(uParam1, iParam2, uParam3, Global_1574110, 0, func_379()))
		{
			func_330(1);
			if ((!func_328() && !func_326()) || unk_0x2A3398C6222EB190(Global_2501777.f_4542, 1))
			{
				if (func_325())
				{
					func_322();
				}
				else
				{
					unk_0x661705F074A804D1(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_321(1);
						Global_1574110 = 0;
						iVar54 = -1;
						if (Global_1574293 != 1)
						{
							func_320(uParam1);
							if (unk_0x2A3398C6222EB190(uParam3->f_33, 7))
							{
								unk_0xD804ACF2A7171150(&(uParam3->f_33), 7);
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
								if (func_1124(unk_0xA7871E29B06DA901(iVar52), 0, 1))
								{
									iVar35 = unk_0xA7871E29B06DA901(iVar52);
									if (!func_34(iVar35, 0))
									{
										if ((unk_0x09C68D317F1B5143(iVar35, unk_0x3D35F9864E4640B1()) || Global_2422142[iVar35 /*399*/].f_245 != -1) || func_319(iVar35))
										{
											iVar44 = iVar35;
											if (func_234(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_316(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_313(unk_0x3D35F9864E4640B1(), 0) && func_213(unk_0x3D35F9864E4640B1()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_311())
							{
								if (func_1124(unk_0xA7871E29B06DA901(iVar52), 0, 1))
								{
									iVar35 = unk_0xA7871E29B06DA901(iVar52);
								}
								else
								{
									iVar35 = func_55();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_310(iVar35) && func_305(iVar35, iParam2)) && func_1124(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1593076[iVar44 /*647*/].f_204.f_6;
								Var38 = { func_300(iVar35) };
								if (iVar35 == unk_0x3D35F9864E4640B1())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x06D7899D9C1F422F(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_57(iVar35) };
								iVar37 = func_294(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x7EBBB7725601519D(iVar37);
								}
								Global_1574110++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_311())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_289(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_288(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_282(iVar35, 0);
								if (bVar34)
								{
									if (func_281(iVar35, 1) && iVar1[iVar44] != -1)
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
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_280(iParam5))
								{
									func_279(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_279(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0xCD7E92DE2BFA0B0D(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0xA7871E29B06DA901(iVar52);
							if (func_1124(iVar35, 0, 1) && !unk_0x2A3398C6222EB190(iVar49, iVar35))
							{
								iVar35 = unk_0xA7871E29B06DA901(iVar52);
							}
							else
							{
								iVar35 = func_55();
							}
							if (func_310(iVar35))
							{
								if (func_1124(unk_0xA7871E29B06DA901(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1593076[iVar44 /*647*/].f_204.f_6;
									Var38 = { func_300(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_57(iVar35) };
									iVar37 = func_294(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x7EBBB7725601519D(iVar37);
									}
									Global_1574110++;
									iVar51 = func_282(iVar35, 1);
									if (bVar34)
									{
										if (func_281(iVar35, 1))
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
									func_260(iVar35, unk_0x06D7899D9C1F422F(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x2A3398C6222EB190(uParam3->f_33, 11))
						{
							func_257(uParam3, uParam1);
						}
						func_9(&(uParam3->f_21));
						func_256();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x2A3398C6222EB190(uParam3->f_33, 7))
						{
							func_255(uParam3, uParam1);
							func_254(uParam1, 0, 1);
							unk_0xCD7E92DE2BFA0B0D(&(uParam3->f_33), 7);
						}
						func_255(uParam3, uParam1);
						if (!unk_0x2A3398C6222EB190(uParam3->f_33, 11))
						{
							unk_0xCD7E92DE2BFA0B0D(&(uParam3->f_33), 11);
						}
						if (func_250(uParam3))
						{
							Global_1574293 = 1;
						}
						func_248(uParam3);
						if (Global_1574293 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574293 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x77FA56883245AD26(*uParam1))
					{
						unk_0x38C75B31337B3454(7);
						unk_0x45822700F324A838(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x38C75B31337B3454(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_256();
			func_321(0);
			if (unk_0x2A3398C6222EB190(uParam3->f_33, 7))
			{
				unk_0xD804ACF2A7171150(&(uParam3->f_33), 7);
			}
			if (unk_0x2A3398C6222EB190(uParam3->f_33, 10))
			{
				unk_0xD804ACF2A7171150(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x26742F01C78031C2();
}

void func_248(var uParam0)
{
	if (!func_11(&(uParam0->f_21)))
	{
		func_10(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_9(&(uParam0->f_21));
		func_249(0);
	}
}

void func_249(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574293 != 2)
		{
			Global_1574293 = 2;
		}
	}
	else
	{
		switch (Global_1574293)
		{
			case 0:
				Global_1574293 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_250(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0xA7871E29B06DA901(uParam0->f_37);
	if (iVar15 != func_55() && func_1124(iVar15, 0, 1))
	{
		Var2 = { func_57(iVar15) };
		iVar1 = func_253(uParam0, uParam0->f_37);
		if (func_252(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4B822058AC820CFF(&Var2))
					{
						if (unk_0xFAF1C1B430374114(&Var2))
						{
							iVar16 = 1;
							func_251(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x07D2F212D68B29BB(&Var2))
					{
						iVar16 = 1;
						func_251(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4B822058AC820CFF(&Var2))
					{
						if (!unk_0xFAF1C1B430374114(&Var2))
						{
							iVar16 = 1;
							func_251(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_251(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4B822058AC820CFF(&Var2))
					{
						if (!unk_0x07D2F212D68B29BB(&Var2))
						{
							iVar16 = 1;
							func_251(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x07D2F212D68B29BB(&Var2))
					{
						iVar16 = 1;
						func_251(uParam0, iVar0, 0);
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

void func_251(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_252(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3E72C35EA9759781(&uParam0, 13);
}

var func_253(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_254(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xEBD23F68B1A617FC(*uParam0, "COLLAPSE"))
	{
		unk_0xE8240315678FDE8E(iParam1);
		unk_0x1C703A54AB4B12F6();
	}
	if (iParam2 == 1)
	{
		if (unk_0xEBD23F68B1A617FC(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x1C703A54AB4B12F6();
		}
	}
}

void func_255(var uParam0, var uParam1)
{
	if (!unk_0x2A3398C6222EB190(uParam0->f_33, 10))
	{
		unk_0xEBD23F68B1A617FC(*uParam1, "SET_HIGHLIGHT");
		unk_0x32F9127910F63DFA(uParam0->f_35);
		unk_0x1C703A54AB4B12F6();
		unk_0xCD7E92DE2BFA0B0D(&(uParam0->f_33), 10);
	}
}

void func_256()
{
	if (Global_1574293 != 0)
	{
		Global_1574293 = 0;
	}
}

void func_257(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xA7871E29B06DA901(iVar0);
		if (iVar2 != func_55())
		{
			if (func_1124(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_259(uParam0->f_38[iVar0 /*2*/], 0);
					func_258(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1593076[iVar0 /*647*/].f_204.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_258(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		if (unk_0xEBD23F68B1A617FC(*uParam0, "SET_ICON"))
		{
			unk_0x32F9127910F63DFA(iParam1);
			unk_0x32F9127910F63DFA(iParam2);
			if (iParam2 == 65)
			{
				unk_0x32F9127910F63DFA(iParam3);
			}
			unk_0x1C703A54AB4B12F6();
		}
	}
}

int func_259(int iParam0, bool bParam1)
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

void func_260(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_278() && iParam4 < func_277())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574112)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574293 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xEBD23F68B1A617FC(*uParam2, sVar1))
		{
			unk_0x32F9127910F63DFA(iParam4);
			if (unk_0x2A3398C6222EB190(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_276("");
			}
			else
			{
				unk_0x32F9127910F63DFA(iParam10);
			}
			func_276(sParam1);
			unk_0x32F9127910F63DFA(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_276("");
			}
			else
			{
				unk_0x32F9127910F63DFA(65);
			}
			unk_0x32F9127910F63DFA(-1);
			func_276("");
			if (uParam3->f_108 == 6)
			{
				func_276("");
			}
			else
			{
				func_276(&sParam5);
			}
			func_265(uParam3, iParam0);
			unk_0x58F4B3BE2B4DE520(sParam9);
			unk_0x58F4B3BE2B4DE520(sParam9);
			if (func_264(uParam3))
			{
				func_263("DPAD_FRIEND");
			}
			else if (func_262(uParam3))
			{
				func_263("DPAD_FRIEND");
			}
			else if (func_261(uParam3))
			{
				func_263("DPAD_CREW");
			}
			else
			{
				func_263("");
			}
			unk_0x1C703A54AB4B12F6();
		}
	}
}

bool func_261(var uParam0)
{
	return unk_0x2A3398C6222EB190(uParam0->f_33, 6);
}

bool func_262(var uParam0)
{
	return unk_0x2A3398C6222EB190(uParam0->f_33, 5);
}

void func_263(char* sParam0)
{
	unk_0x9BC6C9E77AAC792E(sParam0);
	unk_0xCC5EB3A492FB7D4B();
}

int func_264(var uParam0)
{
	if (func_262(uParam0) && func_261(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_265(var uParam0, int iParam1)
{
	if (func_275(iParam1))
	{
		unk_0x32F9127910F63DFA(121);
	}
	else if (func_269(iParam1))
	{
		unk_0x32F9127910F63DFA(122);
	}
	else
	{
		if (func_266())
		{
			uParam0->f_36 = 0;
		}
		unk_0xE8240315678FDE8E(uParam0->f_36);
	}
}

int func_266()
{
	if (unk_0xF4F91CD09D59F42E())
	{
		if (func_267() || func_152())
		{
			return 1;
		}
	}
	return 0;
}

bool func_267()
{
	if (unk_0xF4F91CD09D59F42E())
	{
		return func_152();
	}
	return func_268(Global_1641087.f_96810);
}

int func_268(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5143[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_269(int iParam0)
{
	if ((func_1124(iParam0, 0, 1) && func_273()) && func_270(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_270(int iParam0, bool bParam1)
{
	return func_271(iParam0, bParam1, 1);
}

int func_271(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_272(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1623799[iParam0 /*488*/].f_11;
	if (iVar0 != func_55() && Global_1623799[iVar0 /*488*/].f_11.f_370 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_272(int iParam0, int iParam1)
{
	if (iParam0 != func_55())
	{
		if (Global_1623799[iParam0 /*488*/].f_11 != func_55())
		{
			if (Global_1623799[iParam0 /*488*/].f_11 == iParam0 && Global_1623799[iParam0 /*488*/].f_11.f_370 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_273()
{
	if (func_241(unk_0x3D35F9864E4640B1()) || func_274())
	{
		return 0;
	}
	return 1;
}

int func_274()
{
	switch (func_213(unk_0x3D35F9864E4640B1()))
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

int func_275(int iParam0)
{
	if (func_266())
	{
		if (func_1124(iParam0, 0, 1))
		{
			return func_234(iParam0);
		}
	}
	if ((func_1124(iParam0, 0, 1) && func_273()) && func_272(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_276(char* sParam0)
{
	unk_0x8E394933209D820A(sParam0);
}

int func_277()
{
	int iVar0;
	
	if (Global_1574112)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_278()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574112)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_279(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_278() && iParam3 < func_277())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574112)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574293 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x77FA56883245AD26(*uParam1))
		{
			if (unk_0xEBD23F68B1A617FC(*uParam1, sVar1))
			{
				unk_0x32F9127910F63DFA(iParam3);
				if (unk_0x2A3398C6222EB190(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_276("");
				}
				else
				{
					unk_0x32F9127910F63DFA(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x0BD3CCFB6C6CFA91(sParam16))
				{
					func_263(sParam16);
				}
				else
				{
					func_276(&(uParam2->f_1));
				}
				unk_0x32F9127910F63DFA(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_276("");
				}
				else
				{
					unk_0x32F9127910F63DFA(65);
				}
				if (iParam12 == 1)
				{
					unk_0x32F9127910F63DFA(iVar0);
				}
				else
				{
					unk_0x32F9127910F63DFA(-1);
				}
				if (func_311())
				{
					func_276("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x0BD3CCFB6C6CFA91(sParam16))
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_ONE_INT");
					unk_0x7C8A7ECFBAD2C8C4(sParam16);
					unk_0x96577CAA1D1E72DB(iParam17);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 5 && !unk_0x0BD3CCFB6C6CFA91(sParam16))
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_ONE_INT");
					unk_0x7C8A7ECFBAD2C8C4(sParam16);
					unk_0x96577CAA1D1E72DB(iParam17);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 7 && !unk_0x0BD3CCFB6C6CFA91(sParam16))
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_TWO_INT");
					unk_0x7C8A7ECFBAD2C8C4(sParam16);
					unk_0x96577CAA1D1E72DB(iParam17);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 8 && !unk_0x0BD3CCFB6C6CFA91(&(uParam2->f_104)))
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x5E66471E79E6D3ED(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x96577CAA1D1E72DB(iParam10);
					}
					unk_0x7C8A7ECFBAD2C8C4(&(uParam2->f_104));
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x9BC6C9E77AAC792E("FM_AE_CASH");
					unk_0xCA44A68ABB26D497(iParam10, 1);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x9BC6C9E77AAC792E("FM_AE_CASH");
						unk_0xCA44A68ABB26D497(iParam10, 1);
						unk_0xCC5EB3A492FB7D4B();
					}
					else
					{
						unk_0x9BC6C9E77AAC792E("FM_NG_CASH");
						unk_0xCA44A68ABB26D497(iParam10, 1);
						unk_0xCC5EB3A492FB7D4B();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x0BD3CCFB6C6CFA91(&(uParam2->f_104)))
					{
						func_263(&(uParam2->f_104));
					}
					else
					{
						func_276("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x9BC6C9E77AAC792E("STRING");
					unk_0xC2D818A5754306C0(iParam14, 6);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (fParam13 != -1f)
				{
					unk_0x9BC6C9E77AAC792E("NUMBER");
					unk_0x5E66471E79E6D3ED(fParam13, 1);
					unk_0xCC5EB3A492FB7D4B();
				}
				else if (iParam10 != -1)
				{
					unk_0x32F9127910F63DFA(iParam10);
				}
				else
				{
					func_276("");
				}
				if (uParam2->f_108 == 6)
				{
					func_276("");
				}
				else
				{
					func_276(&sParam4);
				}
				func_265(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x0BD3CCFB6C6CFA91(sParam8))
				{
					func_276("");
					func_276("");
				}
				else
				{
					unk_0x58F4B3BE2B4DE520(sParam8);
					unk_0x58F4B3BE2B4DE520(sParam8);
				}
				if (func_264(uParam2))
				{
					func_263("DPAD_FRIEND");
				}
				else if (func_262(uParam2))
				{
					func_263("DPAD_FRIEND");
				}
				else if (func_261(uParam2))
				{
					func_263("DPAD_CREW");
				}
				else
				{
					func_263("");
				}
				unk_0x1C703A54AB4B12F6();
			}
		}
	}
}

int func_280(int iParam0)
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

bool func_281(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_234(iParam0))
		{
			return 0;
		}
	}
	return Global_1623799[iParam0 /*488*/].f_11 != func_55();
}

int func_282(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_241(iParam0)) && !func_287(iParam0))
	{
		iVar0 = func_286();
	}
	iVar1 = func_285(iParam0);
	if (!iVar1 == -1)
	{
		return func_283(iVar1);
	}
	return iVar0;
}

int func_283(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_284(iParam0);
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

var func_284(int iParam0)
{
	return Global_2416331.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_285(int iParam0)
{
	if (!iParam0 == func_55())
	{
		if (func_281(iParam0, 1))
		{
			return Global_2416331.f_1947.f_11[func_56(iParam0)];
		}
	}
	return -1;
}

int func_286()
{
	return 21;
}

bool func_287(int iParam0)
{
	return func_217(iParam0, 20);
}

char* func_288(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xE42DE35DC4399ED5())
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
			if (unk_0xE42DE35DC4399ED5())
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

int func_289(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_293(iParam3))
	{
		*fParam1 = (func_290(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_280(iParam3))
	{
		*fParam1 = (func_290(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_290(int iParam0, int iParam1)
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
			if (unk_0xE42DE35DC4399ED5())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_292(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xE42DE35DC4399ED5())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_291(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_291(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_292(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_293(int iParam0)
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

int func_294(int iParam0)
{
	int iVar0;
	
	iVar0 = func_297(iParam0);
	if (iVar0 == -1)
	{
		func_295(iParam0, 1);
		return 0;
	}
	Global_1365860[iVar0 /*5*/].f_4 = 1;
	return Global_1365860[iVar0 /*5*/].f_2;
}

void func_295(int iParam0, bool bParam1)
{
	if (!func_1124(iParam0, 0, 1))
	{
		return;
	}
	if (func_297(iParam0) != -1)
	{
		return;
	}
	if (Global_1366023)
	{
		if (iParam0 == Global_1366023.f_1)
		{
			return;
		}
	}
	if (func_296(iParam0))
	{
		return;
	}
	if (Global_1366061 >= 32)
	{
		return;
	}
	Global_1366028[Global_1366061] = iParam0;
	Global_1366061++;
	if (bParam1)
	{
	}
}

int func_296(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1366061)
	{
		if (Global_1366028[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_297(int iParam0)
{
	int iVar0;
	
	if (!func_1124(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1366021 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1366021)
	{
		if (Global_1365860[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x1F20678A3517FA33(Global_1365860[iVar0 /*5*/].f_2) && unk_0x484948706DA7FDE0(Global_1365860[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_298(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_298(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1366021)
	{
		return;
	}
	if (unk_0x1F20678A3517FA33(Global_1365860[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1365860[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x7EBBB7725601519D(Global_1365860[iParam0 /*5*/].f_2), 64);
			unk_0x24EBBC5B25484B08(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x3597EC3F7CA70174(Global_1365860[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1366021)
	{
		Global_1365860[iVar32 /*5*/] = { Global_1365860[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_299(&(Global_1365860[iVar32 /*5*/]));
	Global_1366021 = (Global_1366021 - 1);
}

void func_299(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_55();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x27CA09C6DFAB1E79())
	{
		uParam0->f_3 = unk_0x898811EA80D35DE2();
	}
}

struct<4> func_300(int iParam0)
{
	struct<4> Var0;
	
	if (func_1124(iParam0, 0, 1))
	{
		Global_2488575 = { func_57(iParam0) };
		if (unk_0x9D3EA2635512FD6B())
		{
			if (func_252(Global_2488575))
			{
				if (!unk_0xEFDB3CCA382D116E(&Global_2488575))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x4C69E6D9E2ED0169(0))
		{
			return Var0;
		}
		if (func_304(&Global_2488575))
		{
			Global_2488505 = { func_302(iParam0) };
			func_301(&Global_2488505, &Var0);
		}
	}
	return Var0;
}

void func_301(var uParam0, var uParam1)
{
	unk_0x0F370EC372A05844(uParam0, 35, uParam1);
}

struct<35> func_302(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_303(iParam0))
	{
		return Global_1312885[unk_0x3D35F9864E4640B1() /*35*/];
	}
	Var0 = { func_57(iParam0) };
	unk_0x7838EB8661A32D68(&Var13, 35, &Var0);
	return Var13;
}

int func_303(int iParam0)
{
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		return 1;
	}
	return 0;
}

int func_304(var uParam0)
{
	if (unk_0xED5FFF2E0422067E())
	{
		if (unk_0x1AE803DF5F9B30C9() && unk_0xF3F1AD16A136B115(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_305(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_240(iParam0) || func_309(iParam0)) || func_308(iParam0))
		{
			return 0;
		}
	}
	if (!func_307(iParam0))
	{
		return 0;
	}
	if ((!func_306(iParam0) && Global_2422142[iParam0 /*399*/].f_245 == -1) && !func_319(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_306(int iParam0)
{
	if (func_1124(iParam0, 0, 1))
	{
		if (func_1124(unk_0x3D35F9864E4640B1(), 0, 1))
		{
			if (unk_0x09C68D317F1B5143(iParam0, unk_0x3D35F9864E4640B1()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_307(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_140, 22);
}

bool func_308(int iParam0)
{
	if (func_240(iParam0))
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 8);
}

int func_309(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 10) || unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 9));
	}
	return 0;
}

int func_310(int iParam0)
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
		if (unk_0x2A3398C6222EB190(Global_1593076[iVar0 /*647*/].f_140, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_311()
{
	switch (func_213(unk_0x3D35F9864E4640B1()))
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
	switch (func_312(unk_0x3D35F9864E4640B1()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_287(unk_0x3D35F9864E4640B1()))
	{
		switch (func_213(unk_0x3D35F9864E4640B1()))
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

int func_312(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1623799[iVar0 /*488*/];
	}
	return -1;
}

int func_313(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_32 != -1 && func_314(Global_1623799[iParam0 /*488*/].f_11.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_31 != -1)
	{
		if (func_314(Global_1623799[iParam0 /*488*/].f_11.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_314(int iParam0)
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
	return func_315(iParam0, 0);
	return 0;
}

int func_315(int iParam0, int iParam1)
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

void func_316(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1124(unk_0xA7871E29B06DA901(iVar0), 0, 1))
		{
			iVar1 = unk_0xA7871E29B06DA901(iVar0);
			if (!func_34(iVar1, 0))
			{
				if ((unk_0x09C68D317F1B5143(iVar1, unk_0x3D35F9864E4640B1()) || Global_2422142[iVar1 /*399*/].f_245 != -1) || func_319(iVar1))
				{
					if (func_317(iVar1, iParam1, 0))
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

int func_317(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_55())
	{
		if (!bParam2)
		{
			if (func_318(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1623799[iParam0 /*488*/].f_11 != func_55())
		{
			return iParam1 == Global_1623799[iParam0 /*488*/].f_11;
		}
	}
	return 0;
}

int func_318(int iParam0, int iParam1)
{
	if (iParam1 != func_55())
	{
		if (iParam0 != func_55())
		{
			if (Global_1623799[iParam0 /*488*/].f_11 != func_55())
			{
				if (Global_1623799[iParam0 /*488*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_319(int iParam0)
{
	return Global_1593076[iParam0 /*647*/].f_189 != 0;
}

void func_320(var uParam0)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x32F9127910F63DFA(0);
		unk_0x1C703A54AB4B12F6();
	}
}

void func_321(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1354562.f_2 == 0)
		{
			Global_1354562.f_2 = 1;
		}
	}
	else if (Global_1354562.f_2 == 1)
	{
		Global_1354562.f_2 = 0;
	}
}

void func_322()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 1))
	{
		if (func_324())
		{
			func_323();
		}
	}
}

void func_323()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2434915.f_2484[iVar0 /*76*/].f_2 != 0)
		{
			Global_2434915.f_2484[iVar0 /*76*/].f_2 = 5;
			unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_2484[iVar0 /*76*/].f_67), 0);
		}
		iVar0++;
	}
}

bool func_324()
{
	return Global_2434915.f_2484[0 /*76*/].f_1 != 0;
}

int func_325()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 0) && func_324())
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 1) && func_324())
	{
		return 1;
	}
	return 0;
}

int func_326()
{
	if (func_324())
	{
		if (func_327(Global_2434915.f_2484[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_327(int iParam0)
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

int func_328()
{
	if (func_324())
	{
		if (func_329(Global_2434915.f_2484[0 /*76*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_329(int iParam0)
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

void func_330(int iParam0)
{
	if (Global_1354562.f_1 != Global_1354562)
	{
		Global_1354562.f_1 = Global_1354562;
	}
	if (Global_1354562 != iParam0)
	{
		Global_1354562 = iParam0;
	}
}

int func_331(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_378(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_377();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_376())
		{
			if (func_375() > 0 && Global_1574112)
			{
				unk_0xC8E49AC936A8E11E();
				unk_0x4288569892059474(fVar7);
				unk_0xBD1C47D856010F09(18);
				if (unk_0x068C69D0643C4B95())
				{
					unk_0x390920286F8D4571();
				}
				unk_0xBD1C47D856010F09(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_363())
		{
			func_362(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4545, 26))
	{
		func_362(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_11(&(uParam2->f_19)))
	{
		if (func_375() == 1)
		{
			func_361(bVar6, uParam0, 0);
			func_10(&(uParam2->f_19), 0, 0);
			func_362(uParam0, uParam2, 0);
		}
	}
	if (func_11(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x068C69D0643C4B95())
		{
			unk_0x390920286F8D4571();
		}
		unk_0xBD1C47D856010F09(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_375() == 0 && !bParam5))
		{
			func_362(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_360();
				if (iParam1 == 25 || iParam1 == 26)
				{
					unk_0xC8E49AC936A8E11E();
				}
				unk_0xBD1C47D856010F09(18);
			}
			if (!unk_0x2A3398C6222EB190(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_360();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0xC8E49AC936A8E11E();
					}
					unk_0xBD1C47D856010F09(18);
				}
				unk_0x4288569892059474(fVar7);
				if (func_361(bVar6, uParam0, 0))
				{
					func_320(uParam0);
					sVar4 = func_358(iParam1, &(Global_1641087.f_96817), bParam4);
					Var0 = { func_356(iParam1) };
					if (bParam4)
					{
						func_353(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_346(uParam0, func_350(uParam2), func_347(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_337(uParam0, func_339(uParam2), func_338(), -1);
					}
					else if (func_266())
					{
						uParam2->f_34 = Global_1574111;
						func_353(uParam0, sVar4, &Var0, 1, -1, Global_1574111, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574111;
						func_353(uParam0, sVar4, "", 0, -1, Global_1574111, 1);
					}
					else
					{
						iVar8 = func_332(iParam1);
						func_353(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xCD7E92DE2BFA0B0D(&(uParam2->f_33), 0);
				}
			}
			if (unk_0x2A3398C6222EB190(uParam2->f_33, 0))
			{
				Global_1574110 = uParam3;
				Global_1574109 = 1;
				unk_0x4288569892059474(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574111)
					{
						unk_0xD804ACF2A7171150(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_332(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_336())
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
			if (func_335(unk_0x3D35F9864E4640B1()))
			{
				iVar0 = 20;
			}
			if (func_334(unk_0x3D35F9864E4640B1()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_333(unk_0x3D35F9864E4640B1()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_333(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 4;
}

bool func_334(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 7;
}

bool func_335(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 2;
}

bool func_336()
{
	return Global_1641087.f_1 == 0;
}

void func_337(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_TITLE");
		if (unk_0x0BD3CCFB6C6CFA91(sParam2))
		{
			func_263(sParam1);
		}
		else
		{
			unk_0x9BC6C9E77AAC792E("FM_AE_BRACKT");
			unk_0x7C8A7ECFBAD2C8C4(sParam1);
			unk_0x7C8A7ECFBAD2C8C4(sParam2);
			unk_0xCC5EB3A492FB7D4B();
		}
		func_263("");
		if (iParam3 != -1)
		{
			unk_0x32F9127910F63DFA(iParam3);
		}
		unk_0x1C703A54AB4B12F6();
	}
}

char* func_338()
{
	switch (func_213(unk_0x3D35F9864E4640B1()))
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

char* func_339(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
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
	switch (func_213(unk_0x3D35F9864E4640B1()))
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
			if (func_342())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_341(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_341(1))
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
			if (func_340(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_173))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_340(int iParam0)
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

bool func_341(bool bParam0)
{
	return func_270(unk_0x3D35F9864E4640B1(), bParam0);
}

bool func_342()
{
	return (func_345() && func_343(func_344()));
}

bool func_343(int iParam0)
{
	return func_272(iParam0, 1);
}

int func_344()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_34;
}

bool func_345()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 148;
}

void func_346(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_TITLE");
		if (unk_0x0BD3CCFB6C6CFA91(sParam2))
		{
			func_263(sParam1);
		}
		else if (func_312(unk_0x3D35F9864E4640B1()) == 133)
		{
			unk_0x9BC6C9E77AAC792E("FM_AE_BRACKT_C");
			unk_0x7C8A7ECFBAD2C8C4(sParam1);
			unk_0x7C8A7ECFBAD2C8C4(sParam2);
			unk_0xCC5EB3A492FB7D4B();
		}
		else
		{
			unk_0x9BC6C9E77AAC792E("FM_AE_BRACKT");
			unk_0x7C8A7ECFBAD2C8C4(sParam1);
			unk_0x7C8A7ECFBAD2C8C4(sParam2);
			unk_0xCC5EB3A492FB7D4B();
		}
		func_263("");
		if (iParam3 != -1)
		{
			unk_0x32F9127910F63DFA(iParam3);
		}
		unk_0x1C703A54AB4B12F6();
	}
}

char* func_347(var uParam0)
{
	int iVar0;
	
	iVar0 = func_312(unk_0x3D35F9864E4640B1());
	if (func_349())
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
			switch (func_348())
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

int func_348()
{
	if (func_312(unk_0x3D35F9864E4640B1()) == 133)
	{
		return Global_2501777.f_4788;
	}
	return -1;
}

bool func_349()
{
	return Global_1592949;
}

char* func_350(var uParam0)
{
	int iVar0;
	
	iVar0 = func_312(unk_0x3D35F9864E4640B1());
	if (func_349())
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
			if (func_352() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_352() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_348())
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
			if (func_351() == 1)
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

int func_351()
{
	return Global_2501777.f_4791;
}

int func_352()
{
	if (func_312(unk_0x3D35F9864E4640B1()) == 132)
	{
		return Global_2501777.f_4786;
	}
	return -1;
}

void func_353(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0xEBD23F68B1A617FC(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_276(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x9BC6C9E77AAC792E(sParam1);
			unk_0x96577CAA1D1E72DB(iParam5);
			unk_0xCC5EB3A492FB7D4B();
		}
		else
		{
			func_263(sParam1);
		}
		if (func_376() && iParam6)
		{
			if (func_355())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x9BC6C9E77AAC792E("LBD_DPD_CNT");
			unk_0x96577CAA1D1E72DB(iVar0);
			unk_0x96577CAA1D1E72DB(iVar1);
			unk_0xCC5EB3A492FB7D4B();
		}
		else
		{
			func_263(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x32F9127910F63DFA(iParam4);
			if (func_354(unk_0x3D35F9864E4640B1()))
			{
				unk_0x32F9127910F63DFA(166);
			}
		}
		unk_0x1C703A54AB4B12F6();
	}
}

int func_354(int iParam0)
{
	if (func_335(iParam0) || func_334(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_355()
{
	return Global_1574112;
}

struct<4> func_356(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_357(unk_0x3D35F9864E4640B1()) || func_333(unk_0x3D35F9864E4640B1()))
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
			StringIntConCat(&Var0, Global_1641087.f_32, 16);
			break;
	}
	if (func_266() && unk_0xF4F91CD09D59F42E())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1641087.f_32, 16);
	}
	return Var0;
}

bool func_357(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 5;
}

char* func_358(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_266() || unk_0x0BD3CCFB6C6CFA91(sParam1)))
	{
		uVar0 = func_359();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 23)
	{
		if (Global_1574311 == 0)
		{
			Global_1574311 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		if (Global_1574311 == 1)
		{
			Global_1574311 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574311 == 0)
		{
			Global_1574311 = 1;
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

char* func_359()
{
	if (unk_0x1C44989578E5E069())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x942DDEDA3276C878())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xE11EF9B6E7CA5736())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xFCD198727E4728B4())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_360()
{
	Global_36716 = 1;
}

bool func_361(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xB1E69EFAB6CB45A3("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xB1E69EFAB6CB45A3("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xB1E69EFAB6CB45A3("mp_matchmaking_card");
	}
	return unk_0x77FA56883245AD26(*uParam1);
}

void func_362(var uParam0, var uParam1, bool bParam2)
{
	unk_0xD804ACF2A7171150(&(uParam1->f_33), 7);
	Global_1574110 = 0;
	func_256();
	Global_1574109 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_11(&(uParam1->f_19)))
		{
			func_9(&(uParam1->f_19));
		}
	}
	if (unk_0x77FA56883245AD26(*uParam0))
	{
		unk_0x7F165E259CFAC8B8(uParam0);
	}
	if (unk_0x2A3398C6222EB190(uParam1->f_33, 0))
	{
		unk_0xD804ACF2A7171150(&(uParam1->f_33), 0);
	}
	unk_0x4288569892059474(0f);
}

int func_363()
{
	if (func_374())
	{
		return 0;
	}
	if (func_373())
	{
		return 0;
	}
	if (!func_371())
	{
		return 0;
	}
	if (!func_369())
	{
		return 0;
	}
	if (func_368(8, -1))
	{
		return 0;
	}
	if (func_375() == 2)
	{
		return 0;
	}
	if (Global_2501777.f_4500)
	{
		return 0;
	}
	if (func_367())
	{
		return 0;
	}
	else if (!func_97(unk_0x3D35F9864E4640B1(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_366(1) || func_364(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (func_100(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (Global_1767039)
	{
		return 0;
	}
	if (Global_1767043)
	{
		return 0;
	}
	if (func_194(0))
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 4))
	{
		return 0;
	}
	if (Global_1348150)
	{
		return 0;
	}
	return 1;
}

int func_364(bool bParam0)
{
	if (unk_0x220490B94EE0AB33())
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			if (func_365(unk_0x0031992CA618A445()))
			{
				if (unk_0x9148803485DEDF45(0, 25) || unk_0x9148803485DEDF45(0, 68))
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
	if (unk_0x9148803485DEDF45(0, 19) || (!bParam0 && unk_0x59ABF4F2C485FC38(0, 19)))
	{
		return 1;
	}
	if (unk_0x20551D6D924ED04B())
	{
		if (((unk_0x9148803485DEDF45(0, 166) || unk_0x9148803485DEDF45(0, 167)) || unk_0x9148803485DEDF45(0, 168)) || unk_0x9148803485DEDF45(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x59ABF4F2C485FC38(0, 166) || unk_0x59ABF4F2C485FC38(0, 167)) || unk_0x59ABF4F2C485FC38(0, 168)) || unk_0x59ABF4F2C485FC38(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_365(int iParam0)
{
	int iVar0;
	
	if (unk_0x7C3C875B4842517A())
	{
		if (!unk_0x8682D8A6269E52C9(iParam0))
		{
			unk_0x1306828A757A10AC(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_366(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_367()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_189 != 0;
}

bool func_368(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

int func_369()
{
	if (func_370() == 0)
	{
		return 1;
	}
	return 0;
}

int func_370()
{
	return Global_1312466.f_18;
}

int func_371()
{
	if (func_372())
	{
		return 1;
	}
	if (unk_0x5114FCEE2A997B95())
	{
		return 0;
	}
	if (unk_0x229840854A80E0D9() || unk_0x4413A34F0AAF1146())
	{
		return 0;
	}
	if (unk_0xC19E9068E7E4F6B0())
	{
		return 0;
	}
	return 1;
}

bool func_372()
{
	return Global_1312438;
}

bool func_373()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 5;
}

bool func_374()
{
	return unk_0x31CD6E9F83C10233() <= Global_17290.f_5745 + 100;
}

int func_375()
{
	return Global_1354565.f_68;
}

int func_376()
{
	if (Global_1574111 > 16)
	{
		return 1;
	}
	return 0;
}

float func_377()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xFBBE93DE05521B5C()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_378(int iParam0)
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

int func_379()
{
	if (func_380(unk_0x3D35F9864E4640B1()))
	{
		return Global_1316427;
	}
	return 0;
}

int func_380(int iParam0)
{
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (func_34(iParam0, 0))
		{
			return unk_0xD629F5D6E3CE15E2(iParam0);
		}
	}
	return 0;
}

int func_381()
{
	if (func_379())
	{
		return 1;
	}
	if (func_308(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_349())
	{
		return 1;
	}
	if (func_241(unk_0x3D35F9864E4640B1()))
	{
		switch (func_312(unk_0x3D35F9864E4640B1()))
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
				if (!func_382(unk_0x3D35F9864E4640B1()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_382(unk_0x3D35F9864E4640B1()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_382(unk_0x3D35F9864E4640B1()))
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

bool func_382(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 4);
}

int func_383(int iParam0)
{
	if ((iParam0 == 26 && func_241(unk_0x3D35F9864E4640B1())) && !func_287(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_214(unk_0x3D35F9864E4640B1(), 0) && func_287(unk_0x3D35F9864E4640B1()))
		{
			return 1;
		}
		if (func_384(unk_0x3D35F9864E4640B1()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_384(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_241(iParam0) && !func_240(iParam0)) && !unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_1, 8));
	bVar2 = func_287(iParam0);
	uVar3 = func_392();
	uVar4 = func_386();
	if ((bVar1 && (func_239(iParam0) || func_238(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_235(iParam0)) && !func_385(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2501777.f_4867.f_33 != iVar0)
	{
		Global_2501777.f_4867.f_33 = iVar0;
	}
	return iVar0;
}

bool func_385(int iParam0)
{
	return func_217(iParam0, 19);
}

int func_386()
{
	if ((func_217(unk_0x3D35F9864E4640B1(), 21) || func_217(unk_0x3D35F9864E4640B1(), 22)) || func_389())
	{
		return 1;
	}
	if (func_387())
	{
		func_218(22);
		return 1;
	}
	return 0;
}

int func_387()
{
	if (func_214(unk_0x3D35F9864E4640B1(), 0))
	{
		if ((func_392() && !func_388()) || func_232(unk_0x3D35F9864E4640B1(), 21))
		{
			return 1;
		}
		else
		{
			func_216(27);
		}
	}
	return 0;
}

bool func_388()
{
	return Global_1312416.f_1;
}

bool func_389()
{
	return func_390(292, -1);
}

int func_390(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2534367[iParam0 /*3*/][func_391(iParam1)];
	if (unk_0xA617FFC40BC2D0D9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_391(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2511680 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2511680 = 1;
		}
	}
	return iVar0;
}

bool func_392()
{
	return Global_1312416;
}

int func_393()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_34(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar0 = unk_0x43B24C247F35B6BC();
	}
	else
	{
		iVar0 = func_394();
	}
	if (iVar0 != -1)
	{
		return unk_0x2A3398C6222EB190(Local_398[iVar0 /*11*/].f_1, 1);
	}
	return 0;
}

int func_394()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	if (unk_0x80BA8E3CC61A8625(iVar1))
	{
		if (unk_0x532CFF8D6B65E42F(iVar1))
		{
			iVar2 = unk_0x3DAB36F6FA9328A6(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

bool func_395()
{
	return Local_128.f_196 == 99;
}

void func_396()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_397(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_397(int iParam0)
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
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 10))
	{
		iVar29 = 0;
		while (iVar29 < 10)
		{
			if (!unk_0x2A3398C6222EB190(Local_128.f_209, iVar29))
			{
				if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_6, iVar29))
				{
					if (unk_0x76B3C79DE564AFC6(Var0.f_0))
					{
						if (unk_0x036E1D5EA494CEB2(Var0.f_0))
						{
							if (!unk_0x2A3398C6222EB190(Local_128.f_205, iVar29))
							{
								if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_5, iVar29))
								{
									if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar29 /*10*/].f_2))
									{
										if (unk_0x76B3C79DE564AFC6(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[iVar29 /*10*/].f_2)))
										{
											if (unk_0x89C1AD6422029361(Var0.f_0) == unk_0xD7E2A160FD5DEEE1(Local_128.f_2[iVar29 /*10*/].f_2))
											{
												if (unk_0x76B3C79DE564AFC6(Var0.f_1))
												{
													if (unk_0x269F274F1955DE87(Var0.f_1))
													{
														if (unk_0x4849801147A2BA1E(Var0.f_1) == unk_0x0031992CA618A445())
														{
															if (func_1028() == Local_128.f_218)
															{
																unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_5), iVar29);
															}
														}
														else if (unk_0x972B5786EA49FE1A(unk_0x4849801147A2BA1E(Var0.f_1)))
														{
															iVar30 = unk_0x46E9A8D99AF6D7BC(unk_0x4849801147A2BA1E(Var0.f_1));
															if (!unk_0x532CFF8D6B65E42F(iVar30))
															{
																unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_5), iVar29);
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
						else if (unk_0x269F274F1955DE87(Var0.f_0))
						{
							iVar11 = unk_0x4849801147A2BA1E(Var0.f_0);
							if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar29 /*10*/].f_1))
							{
								if (iVar11 == unk_0xECB7D3275586261E(Local_128.f_2[iVar29 /*10*/].f_1))
								{
									if (unk_0x76B3C79DE564AFC6(Var0.f_1))
									{
										if (unk_0x269F274F1955DE87(Var0.f_1))
										{
											iVar10 = unk_0x4849801147A2BA1E(Var0.f_1);
											if (unk_0x972B5786EA49FE1A(iVar10))
											{
												iVar13 = unk_0x46E9A8D99AF6D7BC(iVar10);
												if (unk_0x532CFF8D6B65E42F(iVar13))
												{
													if (Var0.f_3)
													{
														if (iVar13 == unk_0x3D35F9864E4640B1())
														{
															unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_6), iVar29);
															if (!func_395())
															{
																Var15.f_2 = 858527731;
																Var15.f_10 = unk_0x3D35F9864E4640B1();
																func_403(Var15, func_404(0));
															}
														}
													}
												}
												else if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_7, iVar29))
												{
													if (Var0.f_3)
													{
														unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_7), iVar29);
													}
												}
											}
											else if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_8, iVar29))
											{
												if (Var0.f_3)
												{
													unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_8), iVar29);
												}
											}
										}
										else if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_8, iVar29))
										{
											if (Var0.f_3)
											{
												unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_8), iVar29);
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
		if (!unk_0x2A3398C6222EB190(iLocal_751, 15))
		{
			if (unk_0x76B3C79DE564AFC6(Var0.f_0))
			{
				if (unk_0x269F274F1955DE87(Var0.f_0))
				{
					iVar11 = unk_0x4849801147A2BA1E(Var0.f_0);
					if (func_402(unk_0xE9559A12052415BE(iVar11)))
					{
						unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 15);
					}
				}
				else if (unk_0x036E1D5EA494CEB2(Var0.f_0))
				{
					if (func_401(unk_0xE9559A12052415BE(Var0.f_0)))
					{
						if (!func_400(unk_0x0031992CA618A445(), unk_0x89C1AD6422029361(Var0.f_0), 0))
						{
							if (!func_399(unk_0x89C1AD6422029361(Var0.f_0), 0))
							{
								unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 15);
							}
						}
					}
				}
			}
		}
	}
	if (func_393())
	{
		if (!func_217(unk_0x3D35F9864E4640B1(), 20))
		{
			if (unk_0x76B3C79DE564AFC6(Var0.f_0))
			{
				if (unk_0x269F274F1955DE87(Var0.f_0))
				{
					iVar11 = unk_0x4849801147A2BA1E(Var0.f_0);
					if (unk_0x972B5786EA49FE1A(iVar11))
					{
						iVar12 = unk_0x46E9A8D99AF6D7BC(iVar11);
						if (unk_0x76B3C79DE564AFC6(Var0.f_1))
						{
							if (unk_0x269F274F1955DE87(Var0.f_1))
							{
								iVar10 = unk_0x4849801147A2BA1E(Var0.f_1);
								if (unk_0x972B5786EA49FE1A(iVar10))
								{
									iVar13 = unk_0x46E9A8D99AF6D7BC(iVar10);
									if (iVar13 == unk_0x3D35F9864E4640B1())
									{
										if (unk_0x532CFF8D6B65E42F(iVar12))
										{
											if (func_281(iVar12, 1))
											{
												if (Local_128.f_218 > -1)
												{
													iVar14 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(Local_128.f_218));
													if (func_317(iVar12, iVar14, 1))
													{
														func_398(0);
														func_1007();
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

void func_398(int iParam0)
{
	if (!func_287(unk_0x3D35F9864E4640B1()))
	{
		if (iParam0 || func_384(unk_0x3D35F9864E4640B1()) != 0)
		{
			func_218(20);
			if (func_241(unk_0x3D35F9864E4640B1()))
			{
				if (!unk_0x2A3398C6222EB190(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1, 8))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 8);
				}
			}
		}
	}
}

int func_399(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xB8B31FD7EF092667(iParam0) + 1;
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x00E962E9D49FD6C4(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0x3251C2B06497863C(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0x76B3C79DE564AFC6(iVar2))
					{
						if (unk_0x972B5786EA49FE1A(iVar2))
						{
							return 1;
						}
					}
				}
				else if (!unk_0x8682D8A6269E52C9(iVar2))
				{
					if (unk_0x972B5786EA49FE1A(iVar2))
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

int func_400(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x76B3C79DE564AFC6(iParam0) && !unk_0x7A6C051038031EFA(iParam0, 0))
	{
		if (unk_0x76B3C79DE564AFC6(iParam1) && !unk_0x7A6C051038031EFA(iParam1, 0))
		{
			if (unk_0xA32DC7E16AD1DFB7(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_401(int iParam0)
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

int func_402(int iParam0)
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

void func_403(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1021925946;
	Param0.f_1 = unk_0x3D35F9864E4640B1();
	if (!iParam14 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Param0, 14, iParam14);
	}
}

int func_404(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x32C41AA379415932())
	{
		if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar1)))
		{
			iVar2 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar1));
			if (func_1124(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x3D35F9864E4640B1() || iParam0)
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_405()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_34(unk_0x3D35F9864E4640B1(), 0))
	{
		if (unk_0x2A3398C6222EB190(iLocal_751, 10))
		{
			unk_0xD804ACF2A7171150(&iLocal_751, 10);
		}
		return;
	}
	iVar0 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	if (!unk_0x2A3398C6222EB190(iLocal_751, 10))
	{
		if (Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1 != 0)
		{
			Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1 = 0;
		}
		unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 10);
	}
	if (!unk_0x2A3398C6222EB190(iLocal_751, 11))
	{
		unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 11);
		func_921();
	}
	if (unk_0x80BA8E3CC61A8625(iVar0))
	{
		if (unk_0x532CFF8D6B65E42F(iVar0))
		{
			uVar1 = unk_0x3DAB36F6FA9328A6(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_398[iVar2 /*11*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_798();
					func_783();
					func_774();
					func_406();
					break;
				
				case 2:
					func_406();
					break;
				
				case 3:
					func_1041();
					break;
				}
			}
	}
}

void func_406()
{
	struct<10> Var0;
	int iVar17;
	char* sVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar17 = func_55();
	iVar20 = unk_0x43B24C247F35B6BC();
	iVar21 = unk_0x3D35F9864E4640B1();
	if (func_34(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar20 = func_394();
		iVar21 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	}
	if (!unk_0x2A3398C6222EB190(Local_398[iVar20 /*11*/].f_1, 4))
	{
		if (!unk_0x2A3398C6222EB190(iLocal_751, 3))
		{
			if (unk_0x2A3398C6222EB190(Local_128.f_1, 1))
			{
				if (iVar20 == Local_128.f_218 || func_1028() == Local_128.f_218)
				{
					if (func_384(unk_0x3D35F9864E4640B1()) >= 2)
					{
						sVar18 = func_768(iVar21);
						uVar19 = func_767(iVar21);
						func_765(87, "BIGM_DEFENDED", "BIGM_CONTRAS", sVar18, uVar19, 0, -1, -1, -1, 2, -1);
					}
					if (iVar21 == unk_0x3D35F9864E4640B1())
					{
						if (!unk_0x2A3398C6222EB190(iLocal_751, 6))
						{
							func_710(1, 1, 0, 0, -1, -1, -1, -1, -1);
							unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 6);
						}
						func_552(169, 1, &Var0, 0);
						unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
					}
				}
				else if (func_393())
				{
				}
				iLocal_760 = func_20();
				iLocal_761 = (func_20() - func_551(&(Local_128.f_226), 0, 0));
				unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 3);
			}
			else if (unk_0x2A3398C6222EB190(Local_128.f_1, 4))
			{
				if (unk_0x2A3398C6222EB190(Local_398[iVar20 /*11*/].f_1, 14))
				{
					if (Local_128.f_221 >= 0)
					{
						iVar17 = unk_0xA7871E29B06DA901(Local_128.f_221);
						if (iVar17 == iVar21)
						{
							func_520(87, "BIGM_SECURED", "BIGM_CONTRAYR", 1, -1, 2);
						}
						else if (func_384(iVar21) >= 2)
						{
							sVar18 = func_768(iVar21);
							uVar19 = func_767(iVar21);
							func_765(87, "BIGM_SECURED", "BIGM_CONTRAGR", sVar18, uVar19, 0, -1, -1, -1, 2, -1);
						}
					}
					if (iVar21 == unk_0x3D35F9864E4640B1())
					{
						if (!unk_0x2A3398C6222EB190(iLocal_751, 6))
						{
							func_710(1, 1, 0, 0, -1, -1, -1, -1, -1);
							unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 6);
						}
						func_552(169, 1, &Var0, 0);
						unk_0x742F5A1F59CA4BC0(unk_0x3D35F9864E4640B1());
					}
					iLocal_760 = func_20();
					iLocal_761 = (func_20() - func_551(&(Local_128.f_226), 0, 0));
					unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 3);
				}
			}
			else if (unk_0x2A3398C6222EB190(Local_128.f_1, 3))
			{
				if (unk_0x43B24C247F35B6BC() == Local_128.f_218 || func_1028() == Local_128.f_218)
				{
					if (func_384(iVar21) >= 2)
					{
						sVar18 = func_768(iVar21);
						uVar19 = func_767(unk_0x3D35F9864E4640B1());
						func_765(88, "BIGM_DCLOST", "BIGM_CONTRAFD", sVar18, uVar19, 0, -1, -1, -1, 2, -1);
					}
					if (iVar21 == unk_0x3D35F9864E4640B1())
					{
						if (!unk_0x2A3398C6222EB190(iLocal_751, 6))
						{
							func_710(0, 2, 0, 0, -1, -1, -1, -1, -1);
							unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 6);
						}
						func_552(169, 0, &Var0, 0);
					}
				}
				iLocal_760 = func_20();
				iLocal_761 = (func_20() - func_551(&(Local_128.f_226), 0, 0));
				unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 3);
			}
			else if (unk_0x2A3398C6222EB190(Local_128.f_1, 9))
			{
				if (func_492())
				{
					if (func_384(iVar21) >= 2)
					{
						sVar18 = func_768(iVar21);
						uVar19 = func_767(iVar21);
						func_765(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar18, uVar19, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar21 == unk_0x3D35F9864E4640B1())
				{
					if (!unk_0x2A3398C6222EB190(iLocal_751, 6))
					{
						func_710(0, 2, 0, 0, -1, -1, -1, -1, -1);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 6);
					}
					func_552(169, 0, &Var0, 0);
				}
				iLocal_760 = func_20();
				iLocal_761 = (func_20() - func_551(&(Local_128.f_226), 0, 0));
				unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 3);
			}
			else if (unk_0x2A3398C6222EB190(Local_128.f_1, 8))
			{
				if (func_492())
				{
					if (func_384(iVar21) >= 2)
					{
						sVar18 = func_768(iVar21);
						uVar19 = func_767(iVar21);
						func_765(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar18, uVar19, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar21 == unk_0x3D35F9864E4640B1())
				{
					if (!unk_0x2A3398C6222EB190(iLocal_751, 6))
					{
						func_710(0, 2, 0, 0, -1, -1, -1, -1, -1);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 6);
					}
					func_552(169, 0, &Var0, 0);
				}
				iLocal_760 = func_20();
				iLocal_761 = (func_20() - func_551(&(Local_128.f_226), 0, 0));
				unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 3);
			}
			else if (unk_0x2A3398C6222EB190(Local_128.f_1, 15))
			{
				if (func_492())
				{
					if (func_384(iVar21) >= 2)
					{
						sVar18 = func_768(iVar21);
						uVar19 = func_767(iVar21);
						func_765(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar18, uVar19, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar21 == unk_0x3D35F9864E4640B1())
				{
					if (!unk_0x2A3398C6222EB190(iLocal_751, 6))
					{
						func_710(0, 2, 0, 0, -1, -1, -1, -1, -1);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 6);
					}
					func_552(169, 0, &Var0, 0);
				}
				iLocal_760 = func_20();
				iLocal_761 = (func_20() - func_551(&(Local_128.f_226), 0, 0));
				unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 3);
			}
			else if (unk_0x2A3398C6222EB190(Local_128.f_1, 5))
			{
				if (func_492())
				{
					if (func_1027())
					{
						if (func_384(iVar21) >= 2)
						{
						}
					}
					else if (func_384(iVar21) >= 2)
					{
						func_520(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2);
					}
				}
				if (iVar21 == unk_0x3D35F9864E4640B1())
				{
					if (!unk_0x2A3398C6222EB190(iLocal_751, 6))
					{
						func_710(0, 8, 0, 0, -1, -1, -1, -1, -1);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 6);
					}
					func_552(169, 0, &Var0, 0);
				}
				unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 3);
			}
		}
		if (unk_0x2A3398C6222EB190(iLocal_751, 3))
		{
			func_921();
			if (unk_0x43B24C247F35B6BC() == Local_128.f_218)
			{
				if (!unk_0x2A3398C6222EB190(Local_128.f_1, 16) && !unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 13))
				{
					if ((((unk_0x2A3398C6222EB190(Local_128.f_1, 15) || unk_0x2A3398C6222EB190(Local_128.f_1, 8)) || unk_0x2A3398C6222EB190(Local_128.f_1, 3)) || func_11(&(Local_128.f_226))) || (func_395() && unk_0x2A3398C6222EB190(Local_128.f_1, 9)))
					{
						func_438();
					}
					else
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 13);
						if (!func_437(38))
						{
							func_436(38);
						}
					}
					if (iLocal_762 == 2)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 13);
					}
					if (iLocal_762 == 3)
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 13);
					}
				}
			}
			if (!unk_0x2A3398C6222EB190(iLocal_752, 8))
			{
				func_434();
				func_432();
				unk_0xCD7E92DE2BFA0B0D(&iLocal_752, 8);
			}
			if (!unk_0x2A3398C6222EB190(iLocal_751, 7))
			{
				if (Local_128.f_219 != -1)
				{
					if (unk_0x2A3398C6222EB190(iLocal_751, 5))
					{
						if (unk_0x80BA8E3CC61A8625(unk_0xA7871E29B06DA901(Local_128.f_219)))
						{
							func_430(unk_0xA7871E29B06DA901(Local_128.f_219), 432, 0);
							func_428(unk_0xA7871E29B06DA901(Local_128.f_219), 1, 0);
							func_427(unk_0xA7871E29B06DA901(Local_128.f_219), 0, 0);
							func_426(unk_0xA7871E29B06DA901(Local_128.f_219), 0);
							func_425(unk_0xA7871E29B06DA901(Local_128.f_219), Global_262145.f_11544, 0);
							unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 7);
						}
					}
				}
			}
			if (func_407(&uLocal_763, 1, 0) && (unk_0x2A3398C6222EB190(Local_128.f_1, 16) || unk_0x2A3398C6222EB190(Local_128.f_1, 5)))
			{
				if (iVar20 == unk_0x43B24C247F35B6BC())
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 4);
				}
			}
		}
	}
}

int func_407(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_218(29);
	if ((*uParam0 > 0 && !func_324()) && func_384(unk_0x3D35F9864E4640B1()) != 0)
	{
		if (!func_422())
		{
			func_421();
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
				unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 2);
				if (bParam1)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4542), 0);
					func_10(&(uParam0->f_5), 0, 0);
				}
				func_10(&(uParam0->f_1), 0, 0);
				func_420(uParam0, 1);
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
				func_414(iParam2);
				func_420(uParam0, 2);
			}
			break;
		
		case 2:
			func_414(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_408(func_409(0)))
				{
					unk_0x8C361F37C04084F4(1);
				}
				func_420(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0xD804ACF2A7171150(&(Global_2501777.f_4542), 1);
				unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 2);
				func_420(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xD804ACF2A7171150(&(Global_2501777.f_4542), 1);
			unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_408(char* sParam0)
{
	unk_0x92C5C77953D80467(sParam0);
	return unk_0x602E6661A0F13A13(0);
}

char* func_409(int iParam0)
{
	if (((func_412(unk_0x3D35F9864E4640B1()) || func_411(unk_0x3D35F9864E4640B1())) || func_342()) || iParam0)
	{
		if (func_411(unk_0x3D35F9864E4640B1()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_314(func_410()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_410()
{
	return Global_1639417;
}

bool func_411(int iParam0)
{
	return func_315(func_213(iParam0), 0);
}

bool func_412(int iParam0)
{
	return func_413(func_213(iParam0));
}

int func_413(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 148 && func_272(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_34, 1))
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

void func_414(int iParam0)
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4542, 0))
	{
		if ((((((((((!unk_0x90EEDEFFBABEF36F() && !unk_0x2A3398C6222EB190(Global_2501777.f_773, 2)) && func_1124(unk_0x3D35F9864E4640B1(), 1, 1)) && !Global_68165) && !Global_53035) && !unk_0x5114FCEE2A997B95()) && !func_217(unk_0x3D35F9864E4640B1(), 22)) && func_384(unk_0x3D35F9864E4640B1()) != 0) && !func_418(func_419())) && !func_412(unk_0x3D35F9864E4640B1())) && !func_417(func_213(unk_0x3D35F9864E4640B1())))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4542), 1);
			func_416(func_409(iParam0), -1);
			func_415(1);
			unk_0xD804ACF2A7171150(&(Global_2501777.f_4542), 0);
		}
	}
}

void func_415(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_341(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_324())
	{
		unk_0x18F1BFAF88AC511B(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_416(char* sParam0, int iParam1)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0xF3AF8AF4E207A0FD(0, 0, 0, iParam1);
}

int func_417(int iParam0)
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

int func_418(int iParam0)
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

int func_419()
{
	var uVar0;
	
	uVar0 = unk_0x49CAADAD1ABAB70A();
	if (unk_0xB3404E397FF56B3B(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0xB3404E397FF56B3B(uVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	return 0;
}

void func_420(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_421()
{
	Global_2456642 = 1;
}

int func_422()
{
	if (((((((func_213(unk_0x3D35F9864E4640B1()) == 170 || func_213(unk_0x3D35F9864E4640B1()) == 219) || func_213(unk_0x3D35F9864E4640B1()) == 221) || func_213(unk_0x3D35F9864E4640B1()) == 220) || func_213(unk_0x3D35F9864E4640B1()) == 216) || func_213(unk_0x3D35F9864E4640B1()) == 215) || func_213(unk_0x3D35F9864E4640B1()) == 214) || func_213(unk_0x3D35F9864E4640B1()) == 218)
	{
		return 1;
	}
	if (func_423(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	return 0;
}

int func_423(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_1124(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_424(Global_2422142[iParam0 /*399*/].f_318.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_424(int iParam0)
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
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
	}
	return -1;
}

void func_425(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_224())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0xE2F358F9F113BDF1(Global_2415153.f_774[iParam0]) || Global_2415153.f_774[iParam0] == unk_0xFFDE6A3A0108B7CB())
	{
		if (bParam2)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_389), iVar0);
			Global_2415153.f_543[iVar0] = uParam1;
			Global_2415153.f_774[iParam0] = unk_0xFFDE6A3A0108B7CB();
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_2415153.f_389), iVar0);
			Global_2415153.f_774[iParam0] = -1;
		}
	}
}

void func_426(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_365), iParam0);
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_2415153.f_365), iParam0);
	}
	if (unk_0xA761A0B6072010C8(Global_2415153[iParam0]))
	{
		if (bParam1)
		{
			unk_0xC2001CECF808BD21(Global_2415153[iParam0], 0);
		}
		else
		{
			unk_0xC2001CECF808BD21(Global_2415153[iParam0], 1);
		}
	}
}

void func_427(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_1124(iParam0, 1, 1))
		{
			Global_2415153.f_708[iParam0] = unk_0xFFDE6A3A0108B7CB();
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_364), iParam0);
			func_426(iParam0, bParam2);
		}
	}
	else
	{
		func_426(iParam0, bParam2);
		unk_0xD804ACF2A7171150(&(Global_2415153.f_364), iParam0);
		Global_2415153.f_708[iParam0] = -1;
	}
}

void func_428(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_224())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_429(iParam0))
	{
		if (bParam2)
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_386), iVar0);
			Global_2415153.f_609[iParam0] = unk_0xFFDE6A3A0108B7CB();
			Global_2415153.f_444[iVar0] = iParam1;
		}
		else
		{
			unk_0xD804ACF2A7171150(&(Global_2415153.f_386), iVar0);
			Global_2415153.f_609[iParam0] = -1;
		}
	}
}

int func_429(int iParam0)
{
	if (!unk_0xE2F358F9F113BDF1(Global_2415153.f_609[iParam0]) || Global_2415153.f_609[iParam0] == unk_0xFFDE6A3A0108B7CB())
	{
		return 1;
	}
	return 0;
}

void func_430(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == func_224())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xE2F358F9F113BDF1(Global_2415153.f_576[iParam0]) || Global_2415153.f_576[iParam0] == unk_0xFFDE6A3A0108B7CB())
	{
		if (bParam2)
		{
			if (!unk_0x2A3398C6222EB190(Global_2415153.f_385, iVar0))
			{
				func_431();
			}
			unk_0xCD7E92DE2BFA0B0D(&(Global_2415153.f_385), iVar0);
			Global_2415153.f_411[iVar0] = uVar1;
			Global_2415153.f_576[iParam0] = unk_0xFFDE6A3A0108B7CB();
		}
		else
		{
			if (unk_0x2A3398C6222EB190(Global_2415153.f_385, iVar0))
			{
				func_431();
			}
			unk_0xD804ACF2A7171150(&(Global_2415153.f_385), iVar0);
			Global_2415153.f_576[iParam0] = -1;
		}
	}
}

void func_431()
{
	Global_2415153.f_1004 = 1;
}

void func_432()
{
	int iVar0;
	int iVar1;
	
	if (!func_395())
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_751, 9))
	{
		unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0xA7871E29B06DA901(iVar0);
			if (unk_0x80BA8E3CC61A8625(iVar1))
			{
				if (iVar1 != unk_0x3D35F9864E4640B1())
				{
					func_430(iVar1, 478, 0);
					func_428(iVar1, func_433(iLocal_865), 0);
				}
			}
			iVar0++;
		}
	}
}

int func_433(int iParam0)
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
	unk_0xB922891BFD232C45(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_434()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xA761A0B6072010C8(uLocal_851[iVar0]))
		{
			unk_0x0C4BDC77192798AE(&(uLocal_851[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xA761A0B6072010C8(uLocal_864))
	{
		unk_0x0C4BDC77192798AE(&uLocal_864);
	}
	if (unk_0xA761A0B6072010C8(uLocal_862))
	{
		unk_0x0C4BDC77192798AE(&uLocal_862);
	}
	if (unk_0xA761A0B6072010C8(uLocal_863))
	{
		unk_0x0C4BDC77192798AE(&uLocal_863);
	}
	if (unk_0x2A3398C6222EB190(iLocal_751, 12))
	{
		unk_0x03C4BA9F5A120DFE(uLocal_759);
		unk_0x0596A24631CF28DB("ALARM_BELL_02");
		unk_0xD804ACF2A7171150(&iLocal_751, 12);
	}
	if (((func_408("DCONTRA_HLP1") || func_408("DCONTRA_HLP2")) || func_408("DCONTRA_HLPVCR")) || func_408("DCONTRA_HLPCR"))
	{
		unk_0x8C361F37C04084F4(1);
	}
	func_435();
}

void func_435()
{
	if (unk_0x2A3398C6222EB190(iLocal_751, 14))
	{
		func_206();
		func_201(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		unk_0xD804ACF2A7171150(&iLocal_751, 14);
	}
}

void func_436(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4867.f_7[iVar0]), iVar1);
}

bool func_437(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_7[iVar0], iVar1);
}

void func_438()
{
	float fVar0;
	
	if (func_395())
	{
		if (unk_0x2A3398C6222EB190(Local_128.f_1, 9) || unk_0x2A3398C6222EB190(Local_128.f_1, 8))
		{
			func_439(func_491());
			if (!func_437(36))
			{
				func_436(36);
			}
		}
	}
	else if (func_11(&(Local_128.f_226)))
	{
		if (iLocal_761 <= 0)
		{
			func_439(func_491());
			if (!func_437(36))
			{
				func_436(36);
			}
		}
		else
		{
			fVar0 = (unk_0xBBDA792448DB5A89((iLocal_760 - iLocal_761)) / unk_0xBBDA792448DB5A89(iLocal_760));
			fVar0 = (fVar0 * 0.5f);
			func_439(fVar0);
			if (!func_437(37))
			{
				func_436(37);
			}
		}
	}
}

void func_439(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Local_128.f_197 + 1;
	iVar1 = func_490(iVar0);
	if (iVar1 > 0)
	{
		iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * fParam0));
		if (unk_0xBBDA792448DB5A89(iVar2) > (unk_0xBBDA792448DB5A89(iVar1) / 2f))
		{
			iVar2 = (iVar2 - 1);
		}
		func_440(iVar0, iVar2, 0, 0, &iLocal_762, 0);
	}
	else
	{
		unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 13);
	}
}

void func_440(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)
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
	iVar0 = func_490(iParam0);
	iVar1 = func_489(iParam0);
	if (!func_488())
	{
		if (iVar1 >= 0 && iVar0 >= iParam1)
		{
			iVar2 = (func_490(iParam0) - iParam1);
			iVar3 = 0;
			if (bParam5)
			{
				iVar3 = iParam1;
			}
			func_474(iParam0, iVar1, iVar2, iVar3, 0, 11);
			func_472(func_473(iVar1), iVar2, -1, 1);
			Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_82[iVar1 /*3*/].f_1 = iVar2;
			if (iVar3 != 0)
			{
				func_468(iParam0, iVar3);
				func_464(iParam0, iVar3);
			}
			if (unk_0xF4F91CD09D59F42E())
			{
				unk_0x83E9BBA98E526C4A(10);
			}
			func_461(10, 0);
			*uParam4 = 2;
		}
		else
		{
			*uParam4 = 3;
		}
	}
	else if (iVar1 >= 0 && iVar0 >= iParam1)
	{
		iVar4 = (func_490(iParam0) - iParam1);
		iVar5 = 0;
		if (bParam5)
		{
			iVar5 = iParam1;
		}
		if (func_441(iVar1, iParam1, iVar5, iParam2, iParam3, uParam4, Global_2501777.f_4867.f_195))
		{
			if (*uParam4 == 2)
			{
				func_474(iParam0, iVar1, iVar4, iVar5, 0, 11);
				func_472(func_473(iVar1), iVar4, -1, 1);
				Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_82[iVar1 /*3*/].f_1 = iVar4;
				if (iVar5 != 0)
				{
					func_464(iParam0, iVar5);
				}
				if (unk_0xF4F91CD09D59F42E())
				{
					unk_0x83E9BBA98E526C4A(10);
				}
				func_461(10, 0);
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

bool func_441(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)
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
			iVar0 = func_460(iParam0);
			uVar1 = func_458(0, iParam1, 0, -1);
			iVar2 = func_457(iParam0);
			uVar3 = func_456(iParam0);
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
			if (iParam4 == 0 || func_452(78225582, -1799524201, uVar1, -788753717, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_452(78225582, 69656641, iVar2, -788753717, iParam1, 0, 1, 4, 0, 3))
				{
					if (iParam2 == 0 || func_452(78225582, 69656641, uVar3, -788753717, iParam2, 0, 1, 4, 0, 3))
					{
						if (func_452(78225582, -739932302, iVar4, -788753717, 1, iParam3, 0, 4, iVar2, 3))
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
			if (*uParam5 == 1 && func_450())
			{
			}
			else
			{
				*uParam5 = 3;
				func_445(func_449());
			}
			break;
		
		case 1:
			if (func_444(func_449()))
			{
				if (func_443(func_449()) == 2)
				{
					if (iParam3 > 0)
					{
						unk_0xF7FF099167B0BC08(func_442(func_449()));
						unk_0x1E5E9AD6305D2AB0(iParam3, uParam6);
					}
					*uParam5 = 2;
					func_445(func_449());
				}
				else
				{
					*uParam5 = 3;
					func_445(func_449());
				}
			}
			break;
	}
	return *uParam5 != 1;
}

int func_442(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2602788[iParam0 /*80*/];
	}
	return -1;
}

int func_443(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2602788[iParam0 /*80*/].f_2;
	}
	return 0;
}

int func_444(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2602788[iParam0 /*80*/].f_2 != 1;
	}
	return 0;
}

void func_445(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_488())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_448(iParam0))
		{
			if (!bVar0)
			{
				unk_0x25AE737F7DFF42F9();
			}
		}
		else if (!bVar0)
		{
			unk_0xC03328D5D07806F1(Global_2602788[iParam0 /*80*/]);
		}
		func_446(&(Global_2602788[iParam0 /*80*/]));
	}
}

void func_446(var uParam0)
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
	func_447(&(uParam0->f_8.f_3));
	func_447(&(uParam0->f_8.f_16));
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
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_447(var uParam0)
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

int func_448(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2602788[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

int func_449()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_442(iVar0) != 2147483647)
		{
			if (func_448(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_450()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_488())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_449();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x47409804829F12E2(func_36()) || unk_0x00A30B9F92946C2D())
		{
			if (func_451(Global_2602788[iVar2 /*80*/].f_6, Global_2602788[iVar2 /*80*/].f_4, Global_2602788[iVar2 /*80*/].f_1) == 1)
			{
				Global_2603325 = 1;
			}
			return 0;
		}
		if (Global_2456267)
		{
			if (Global_2602788[iVar2 /*80*/].f_6 == 1067618600 || Global_2602788[iVar2 /*80*/].f_6 == -1303831698)
			{
				Global_2603326 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_442(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x0808743DD170F94B(iVar3))
		{
			Global_2602788[iVar2 /*80*/].f_74 = 1;
			Global_2602788[iVar2 /*80*/].f_73 = 0;
			Global_2602788[iVar2 /*80*/].f_75 = unk_0xA83FFA3FA7711E6D();
			if (bVar0)
			{
				Global_2602788[iVar2 /*80*/].f_69 = 1;
				Global_2602788[iVar2 /*80*/].f_73 = 1;
			}
			Global_2602788[iVar2 /*80*/].f_79 = 0;
			Global_2603312 = 1;
			return 1;
		}
	}
	return 0;
}

int func_451(int iParam0, int iParam1, int iParam2)
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
			case 463142405:
			case 1550217370:
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

int func_452(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_488())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x47409804829F12E2(func_36()) || unk_0x00A30B9F92946C2D())
		{
			Global_2603325 = 1;
			return 0;
		}
		if (Global_2456267)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2603326 = 1;
				return 0;
			}
		}
	}
	iVar1 = func_449();
	if (iVar1 == -1)
	{
		if (!func_454(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_453(iParam1))
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
		Global_2602788[iVar1 /*80*/].f_76 = Var2.f_0;
		Global_2602788[iVar1 /*80*/].f_77 = Var2.f_1;
		if (bVar0 || unk_0xEDA6CD7C58AC1AB9(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_453(int iParam0)
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

int func_454(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_488())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x47409804829F12E2(func_36()) || unk_0x00A30B9F92946C2D())
		{
			Global_2603325 = 1;
			return 0;
		}
		if (Global_2456267)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2603326 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2602788[iVar1 /*80*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_2602788[iVar1 /*80*/].f_5 == 1)
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
		if (unk_0x8F3C594DD94A6C38())
		{
			unk_0x25AE737F7DFF42F9();
		}
	}
	if (bVar0 || unk_0x3261CF8E16B2411D(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_455(iVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0);
		return 1;
	}
	return 0;
}

int func_455(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2602788[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_488())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2602788[iVar0 /*80*/].f_2 = 1;
			Global_2602788[iVar0 /*80*/].f_1 = iParam5;
			Global_2602788[iVar0 /*80*/].f_3 = uParam1;
			Global_2602788[iVar0 /*80*/].f_4 = iParam2;
			Global_2602788[iVar0 /*80*/].f_7 = uParam3;
			Global_2602788[iVar0 /*80*/].f_5 = 0;
			Global_2602788[iVar0 /*80*/] = iParam0;
			Global_2602788[iVar0 /*80*/].f_6 = iParam4;
			Global_2602788[iVar0 /*80*/].f_72 = uParam8;
			Global_2602788[iVar0 /*80*/].f_71 = uParam7;
			Global_2602788[iVar0 /*80*/].f_74 = iParam9;
			Global_2602788[iVar0 /*80*/].f_73 = 0;
			Global_2602788[iVar0 /*80*/].f_75 = unk_0xA83FFA3FA7711E6D();
			Global_2602788[iVar0 /*80*/].f_79 = 0;
			Global_2603312 = 0;
			if (bParam6)
			{
				Global_2602788[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_456(int iParam0)
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
	if (unk_0x0BD3CCFB6C6CFA91(&cVar0))
	{
		return -1;
	}
	return unk_0x50B7853132D8438E(&cVar0);
}

int func_457(int iParam0)
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
	if (unk_0x0BD3CCFB6C6CFA91(&cVar0))
	{
		return -1;
	}
	return unk_0x50B7853132D8438E(&cVar0);
}

int func_458(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	
	func_459(&sVar0, bParam0, iParam1, bParam2, iParam3);
	return unk_0x50B7853132D8438E(&sVar0);
}

void func_459(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
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

int func_460(int iParam0)
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
	if (unk_0x0BD3CCFB6C6CFA91(&cVar0))
	{
		return -1;
	}
	return unk_0x50B7853132D8438E(&cVar0);
}

void func_461(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_463(iParam0, iParam1))
	{
		iVar0 = func_462();
		Global_2455018[iVar0] = iParam0;
	}
}

int func_462()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2455018[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_463(int iParam0, var uParam1)
{
	if (Global_1312841)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312853) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_464(int iParam0, int iParam1)
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
			if (Global_1780565[iVar0] == iParam0)
			{
				Global_1780558[iVar0] = 0;
				Global_1780565[iVar0] = 0;
				iVar1++;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1780565[iVar0] == 0)
		{
			if (iVar2 == -1)
			{
				iVar2 = 0;
			}
		}
		else if (iVar2 != -1)
		{
			Global_1780558[iVar2] = Global_1780558[iVar0];
			Global_1780565[iVar2] = Global_1780565[iVar0];
			Global_1780558[iVar0] = 0;
			Global_1780565[iVar0] = 0;
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_466(func_467(iVar0), Global_1780558[iVar0], -1, 1);
		func_466(func_465(iVar0), Global_1780565[iVar0], -1, 1);
		iVar0++;
	}
}

int func_465(int iParam0)
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

var func_466(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x6E96BEFC52A9E22E(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_467(int iParam0)
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

void func_468(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_471(func_489(iParam0));
	iVar1 = func_470(iVar0, -1, 0);
	if (iVar1 >= iParam1)
	{
		func_469(iVar0, (iVar1 - iParam1), -1, 1, 0);
	}
}

void func_469(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2511967[iParam0 /*3*/][func_391(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
}

int func_470(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2511967[iParam0 /*3*/][func_391(iParam1)];
	if (unk_0x2553A7EB99AABF55(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_471(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3633;
	}
	else if (iParam0 == 1)
	{
		return 3634;
	}
	else if (iParam0 == 2)
	{
		return 3635;
	}
	else if (iParam0 == 3)
	{
		return 3636;
	}
	else if (iParam0 == 4)
	{
		return 3637;
	}
	return 3633;
}

void func_472(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2511967[iParam0 /*3*/][func_391(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1365005[func_391(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1365011[func_391(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1365017[func_391(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1365023[func_391(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1364981[func_391(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1364987[func_391(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1364993[func_391(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1364999[func_391(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1364957[func_391(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1364963[func_391(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1364969[func_391(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1364975[func_391(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1365029[func_391(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1365035[func_391(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1365041[func_391(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1365047[func_391(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1365053[func_391(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1365059[func_391(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1365065[func_391(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2536117[0 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2536117[1 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 2916:
			Global_2536117[2 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2536117[3 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 6671:
			Global_2536194[func_391(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1365071[func_391(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1365077[func_391(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1365083[func_391(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1365089[func_391(iParam2)] = iParam1;
			break;
		
		case 3040:
			Global_2536154[0 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3041:
			Global_2536154[1 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2536154[2 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2536154[3 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2536154[4 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2536197[0 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2536197[1 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2536197[2 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2536197[3 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2536197[4 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2536213[0 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2536213[1 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2536213[2 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2536213[3 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2536213[4 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3208:
			Global_2536154[5 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2536117[4 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3650:
			Global_2536229[func_391(iParam2)] = iParam1;
			break;
		
		case 3651:
			Global_2536238[func_391(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2536232[func_391(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2536241[func_391(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2536235[func_391(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2536244[func_391(iParam2)] = iParam1;
			break;
		
		case 3676:
			Global_2536247[func_391(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2536154[6 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2536117[5 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2536154[7 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2536117[6 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3998:
			Global_2536154[8 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 3999:
			Global_2536117[7 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 4001:
			Global_2536154[9 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2536117[8 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 4004:
			Global_2536154[10 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2536117[9 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 4007:
			Global_2536154[11 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2536117[10 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 6088:
			Global_2536154[12 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		case 6089:
			Global_2536117[11 /*3*/][func_391(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_473(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3628;
		
		case 1:
			return 3629;
		
		case 2:
			return 3630;
		
		case 3:
			return 3631;
		
		case 4:
			return 3632;
		
		default:
	}
	return 7237;
}

void func_474(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		iVar0 = func_490(iParam0);
		while (iVar0 <= (iParam2 - 1))
		{
			if (iVar0 < func_487(iParam0))
			{
				if (iVar2 < iParam3)
				{
					if (func_485(func_486(iParam0), iVar0))
					{
						iVar3 = func_484(iParam5);
						func_482(iParam1, iVar0, func_483(iVar3), 1, -1);
						iVar2++;
					}
					else
					{
						iVar4 = 0;
						while (iVar4 <= (iParam2 - 1))
						{
							if (func_485(func_486(iParam0), iVar4))
							{
								if (!func_479(func_480(func_481(iParam1, iVar4, -1, -1))))
								{
									iVar5 = func_481(iParam1, iVar4, -1, -1);
									iVar6 = func_484(iParam5);
									func_482(iParam1, iVar4, func_483(iVar6), 1, -1);
									func_482(iParam1, (iParam2 - 1), iVar5, 1, -1);
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
					iVar8 = func_476(iParam0, iVar0, iParam5);
					if (iVar0 > 0 && !func_475(func_486(iParam0), iVar0))
					{
						while (iVar8 == func_480(func_481(iParam1, (iVar0 - 1), -1, -1)) && iVar7 < 10)
						{
							iVar8 = func_476(iParam0, iVar0, iParam5);
							iVar7++;
						}
					}
					if (iVar8 != 0)
					{
						if (func_481(iParam1, iVar0, -1, -1) == 0)
						{
							func_482(iParam1, iVar0, func_483(iVar8), 1, -1);
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
		while (iVar0 <= (func_490(iParam0) - 1))
		{
			if (iVar0 < func_487(iParam0))
			{
				if (iParam3 > 0)
				{
					iVar1 = 0;
					while (iVar1 <= (func_490(iParam0) - 1))
					{
						if (func_479(func_480(func_481(iParam1, iVar1, -1, -1))))
						{
							if (!func_479(func_480(func_481(iParam1, iVar0, -1, -1))))
							{
								iVar10 = func_481(iParam1, iVar1, -1, -1);
								func_482(iParam1, iVar1, func_481(iParam1, iVar0, -1, -1), 1, -1);
								func_482(iParam1, iVar0, iVar10, 1, -1);
							}
						}
						iVar1++;
					}
				}
				else if (func_479(func_480(func_481(iParam1, iVar0, -1, -1))))
				{
					bVar9 = false;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (!bVar9)
						{
							if (iParam2 >= iVar1)
							{
								if (func_485(func_486(iParam0), iVar1))
								{
									if (!func_479(func_480(func_481(iParam1, iVar1, -1, -1))))
									{
										iVar11 = func_481(iParam1, iVar1, -1, -1);
										func_482(iParam1, iVar1, func_481(iParam1, iVar0, -1, -1), 1, -1);
										func_482(iParam1, iVar0, iVar11, 1, -1);
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
		while (iVar0 <= (func_490(iParam0) - 1))
		{
			if (iVar0 < func_487(iParam0))
			{
				func_482(iParam1, iVar0, func_483(0), 1, -1);
			}
			iVar0++;
		}
	}
	Global_1780688 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1780684[iVar0] = 0;
		iVar0++;
	}
}

int func_475(int iParam0, int iParam1)
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

int func_476(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = unk_0x3AF262D7332EEDF5(0, 2);
	if (func_475(func_486(iParam0), iParam1))
	{
		iVar0 = unk_0x3AF262D7332EEDF5(0, 4);
	}
	bVar1 = false;
	if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
	{
		bVar1 = true;
	}
	uVar2 = func_478(func_486(iParam0), iParam1);
	return func_477(uParam2, uVar2, bVar1);
}

int func_477(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x3AF262D7332EEDF5(0, 2);
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
			iVar0 = unk_0x3AF262D7332EEDF5(0, 3);
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

int func_478(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return unk_0x3AF262D7332EEDF5(0, 2);
		
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			else
			{
				return unk_0x3AF262D7332EEDF5(0, 2);
			}
			break;
	}
	return -1;
}

int func_479(int iParam0)
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

int func_480(int iParam0)
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

int func_481(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar18 = unk_0x50B7853132D8438E(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (0 != iVar18)
	{
		if (!unk_0x8105A63E77701FA4(iVar18, &iVar0, iVar19, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

var func_482(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	iVar18 = unk_0x50B7853132D8438E(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (iParam2 < 0)
	{
		iParam2 = 255;
	}
	if (0 != iVar18)
	{
		uVar0 = unk_0x6E96BEFC52A9E22E(iVar18, iParam2, iVar19, 8, iParam3);
	}
	return uVar0;
}

int func_483(int iParam0)
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

int func_484(var uParam0)
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

int func_485(int iParam0, int iParam1)
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

int func_486(int iParam0)
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

int func_487(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_486(iParam0);
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

int func_488()
{
	if (unk_0x20551D6D924ED04B())
	{
		return 1;
	}
	return 0;
}

int func_489(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_82[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_490(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_82[iVar0 /*3*/])
			{
				return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_82[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

float func_491()
{
	if (!func_395())
	{
		return (unk_0xBBDA792448DB5A89(Global_262145.f_15252) * 0.01f);
	}
	return (unk_0xBBDA792448DB5A89(Global_262145.f_15253) * 0.01f);
}

int func_492()
{
	int iVar0;
	
	if (!func_34(unk_0x3D35F9864E4640B1(), 0))
	{
		if (!func_493(1, 1))
		{
			if (unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 12))
			{
				unk_0xD804ACF2A7171150(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (func_386())
		{
			if (unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 12))
			{
				unk_0xD804ACF2A7171150(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 12))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 12);
		}
	}
	else
	{
		iVar0 = func_394();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0x2A3398C6222EB190(Local_398[iVar0 /*11*/].f_1, 12))
		{
			return 0;
		}
	}
	return 1;
}

int func_493(bool bParam0, bool bParam1)
{
	if (func_519(unk_0x3D35F9864E4640B1(), 29))
	{
		return 0;
	}
	if (func_232(unk_0x3D35F9864E4640B1(), 21))
	{
		return 0;
	}
	if (unk_0x12F270E0E3ED8AA1())
	{
		return 0;
	}
	if (!func_307(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x30758DD2AA5FF762())
		{
			return 0;
		}
	}
	if (func_518(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_517())
	{
		return 0;
	}
	if (func_373())
	{
		return 0;
	}
	if (func_516())
	{
		return 0;
	}
	if (func_367())
	{
		return 0;
	}
	if (unk_0xF4F91CD09D59F42E())
	{
		return 0;
	}
	if (func_98(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (!func_369())
	{
		return 0;
	}
	if (func_232(unk_0x3D35F9864E4640B1(), 0) || func_232(unk_0x3D35F9864E4640B1(), 3))
	{
		return 0;
	}
	if ((func_232(unk_0x3D35F9864E4640B1(), 12) || func_232(unk_0x3D35F9864E4640B1(), 14)) || func_232(unk_0x3D35F9864E4640B1(), 13))
	{
		return 0;
	}
	if (func_515(unk_0x3D35F9864E4640B1(), 0, 0, 0, 0, 0, 0))
	{
		if (!func_499())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_498())
		{
			return 0;
		}
	}
	if (Global_1767039)
	{
		return 0;
	}
	if (func_497(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (func_496())
	{
		return 0;
	}
	if (func_495(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_14, 4))
	{
		return 0;
	}
	if (func_494(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	return 1;
}

int func_494(int iParam0)
{
	if (Global_2422142[iParam0 /*399*/].f_270.f_4 != 0 || Global_2422142[iParam0 /*399*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

int func_495(int iParam0)
{
	if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 14))
	{
		return 1;
	}
	if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 11))
	{
		return 1;
	}
	return 0;
}

int func_496()
{
	if (Global_2595735.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_497(int iParam0)
{
	if (!func_1124(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1593076[iParam0 /*647*/].f_35;
}

bool func_498()
{
	return Global_92814.f_310 > 0;
}

int func_499()
{
	int iVar0;
	
	iVar0 = func_213(unk_0x3D35F9864E4640B1());
	if (((func_514(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_16) || func_513(unk_0x3D35F9864E4640B1())) || func_512(unk_0x3D35F9864E4640B1())) || func_507(unk_0x3D35F9864E4640B1()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_506(unk_0x3D35F9864E4640B1()))
	{
		if (func_505(iVar0) || func_504(iVar0))
		{
			return 1;
		}
	}
	if (func_423(unk_0x3D35F9864E4640B1()))
	{
		if (func_504(iVar0))
		{
			return 1;
		}
	}
	if (func_503(unk_0x3D35F9864E4640B1()))
	{
		if (func_502(iVar0))
		{
			return 1;
		}
	}
	if (func_501(unk_0x3D35F9864E4640B1()))
	{
		if (func_500(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_500(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_501(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_1124(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_424(Global_2422142[iParam0 /*399*/].f_318.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_502(int iParam0)
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

int func_503(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_1124(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_424(Global_2422142[iParam0 /*399*/].f_318.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_504(int iParam0)
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

int func_505(int iParam0)
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

int func_506(int iParam0)
{
	if (func_148(Global_1593076[iParam0 /*647*/].f_259.f_16, -1))
	{
		return 1;
	}
	return 0;
}

int func_507(int iParam0)
{
	if (func_508(Global_1593076[iParam0 /*647*/].f_259.f_16, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_508(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_509(unk_0x3D35F9864E4640B1(), 0);
	}
	if (bParam1)
	{
		if (func_509(unk_0x3D35F9864E4640B1(), 0))
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

bool func_509(int iParam0, bool bParam1)
{
	if (Global_1592922 != func_55())
	{
		if (!func_511(Global_1592922))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x3D35F9864E4640B1() != Global_1592922)
			{
				if (unk_0x2A3398C6222EB190(Global_2422142[Global_1592922 /*399*/].f_204, 24) || func_510(Global_1592922))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 24);
}

int func_510(int iParam0)
{
	if (iParam0 != func_55())
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 9);
	}
	return 0;
}

int func_511(int iParam0)
{
	if (iParam0 != func_55())
	{
		return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 2);
	}
	return 0;
}

int func_512(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_1124(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_424(Global_2422142[iParam0 /*399*/].f_318.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_513(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_1124(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
			{
				return func_424(Global_2422142[iParam0 /*399*/].f_318.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_514(int iParam0)
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

int func_515(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (Global_1593076[iParam0 /*647*/].f_259.f_16 > 0)
	{
		if (bParam1)
		{
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 0))
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
		if (func_513(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_423(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_512(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_503(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_501(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_516()
{
	return Global_1312853;
}

bool func_517()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 0);
}

int func_518(int iParam0)
{
	if (func_97(iParam0, 1))
	{
		if (Global_1593076[iParam0 /*647*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_519(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1623799[iParam0 /*488*/].f_11.f_5, iParam1);
}

int func_520(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_550(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_69 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_70 = iParam5;
	return func_521(&Var0);
}

int func_521(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2434915.f_2790)
		{
			return 0;
		}
	}
	func_531(uParam0, uParam0->f_16);
	func_530(uParam0);
	if (func_529(uParam0->f_1))
	{
		func_522();
		if (Global_2434915.f_2484[0 /*76*/].f_2 == 0)
		{
			Global_2434915.f_2484[0 /*76*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2434915.f_2484[0 /*76*/].f_1 == 13 || Global_2434915.f_2484[0 /*76*/].f_1 == 53) || Global_2434915.f_2484[0 /*76*/].f_1 == 54) || Global_2434915.f_2484[0 /*76*/].f_1 == 58)
		{
			Global_2434915.f_2484[0 /*76*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2434915.f_2484[iVar0 + 1 /*76*/] = { Global_2434915.f_2484[iVar0 /*76*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2434915.f_2484[1 /*76*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2434915.f_2484[iVar0 /*76*/].f_2 == 0)
		{
			Global_2434915.f_2484[iVar0 /*76*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_522();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_2484[iVar0 /*76*/].f_67), 1);
				Global_2434915.f_2484[iVar0 /*76*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_327(Global_2434915.f_2484[iVar0 /*76*/].f_1))
				{
					Global_2434915.f_2484[iVar0 /*76*/].f_2 = 5;
					unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_2484[iVar0 /*76*/].f_67), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_522()
{
	bool bVar0;
	
	if (Global_2434915.f_2791)
	{
		return;
	}
	if (!Global_71053)
	{
		Global_71053 = 1;
		bVar0 = true;
	}
	func_523();
	if (bVar0)
	{
		Global_71053 = 0;
	}
}

void func_523()
{
	Global_2434915.f_2792 = 0;
	Global_2434915.f_2792.f_578 = 0;
	func_527(&(Global_2434915.f_2792.f_1));
	Global_2434915.f_2792.f_1.f_1 = 0;
	func_524(&(Global_2434915.f_2792.f_1));
}

void func_524(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x7F165E259CFAC8B8(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0x20551D6D924ED04B())
		{
			unk_0xEBD23F68B1A617FC(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xE8240315678FDE8E(0);
			unk_0x1C703A54AB4B12F6();
		}
		unk_0x7F165E259CFAC8B8(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xCF304E352457AD63(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71053)
	{
		if (!unk_0xE33BF8B30BC14A7C(unk_0xED1168B8D2D313FA()))
		{
			if (!Global_71054)
			{
				if (unk_0x5114FCEE2A997B95() && !func_526(0))
				{
					unk_0x18D7C8000EDEAAB4(800);
				}
			}
		}
	}
	func_525(0);
}

void func_525(int iParam0)
{
	Global_71045 = iParam0;
	Global_71046 = iParam0;
}

bool func_526(bool bParam0)
{
	if (!bParam0 && unk_0x7832F791572D5809(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x2A3398C6222EB190(Global_71033, 0);
}

void func_527(var uParam0)
{
	func_528(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_528(var uParam0)
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

int func_529(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_530(var uParam0)
{
	if (func_329(uParam0->f_1))
	{
		uParam0->f_70 = func_286();
	}
}

void func_531(var uParam0, int iParam1)
{
	if (func_329(uParam0->f_1))
	{
		uParam0->f_71 = 1;
	}
	if (iParam1 == func_55())
	{
		return;
	}
	if (func_327(uParam0->f_1))
	{
		if (uParam0->f_69 == 1)
		{
			uParam0->f_71 = func_532(iParam1, -2, 0, 0);
		}
	}
}

int func_532(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
		iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1641087.f_92322[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_100(unk_0x3D35F9864E4640B1()) || (func_549() && func_548())) && !unk_0x2A3398C6222EB190(Global_2501777.f_4545, 31))
	{
		uVar1 = func_547();
		if (unk_0x76B3C79DE564AFC6(uVar1))
		{
			if (unk_0x972B5786EA49FE1A(iVar1))
			{
				if (unk_0x46E9A8D99AF6D7BC(iVar1) != -1)
				{
					if (func_1124(unk_0x46E9A8D99AF6D7BC(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
						{
							if (Global_1641087.f_92322[iParam1] != -1)
							{
								return func_545(iParam1, iParam0, 0);
							}
							else
							{
								return func_539(iParam0, unk_0x46E9A8D99AF6D7BC(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_539(iParam0, unk_0x46E9A8D99AF6D7BC(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
			{
				if (Global_1641087.f_92322[iParam1] != -1)
				{
					return func_545(iParam1, iParam0, 0);
				}
				else
				{
					return func_533(0, -1, 0);
				}
			}
			else
			{
				return func_533(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
	{
		if (Global_1641087.f_92322[iParam1] != -1)
		{
			return func_545(iParam1, iParam0, 0);
		}
		else
		{
			return func_539(iParam0, unk_0x3D35F9864E4640B1(), iParam1, bParam2, bParam3);
		}
	}
	return func_539(iParam0, unk_0x3D35F9864E4640B1(), iParam1, bParam2, bParam3);
}

int func_533(bool bParam0, int iParam1, bool bParam2)
{
	return func_534(unk_0x3D35F9864E4640B1(), bParam0, iParam1, bParam2);
}

int func_534(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x80BA8E3CC61A8625(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_96(iVar0, iParam2, 0) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_538(1);
				}
				else
				{
					return func_538(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x2A3398C6222EB190(Global_1641087.f_4, 20))
			{
				return func_535(iVar0, iParam2, 1);
			}
			else
			{
				return func_535(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_538(1);
	}
	return func_538(0);
}

int func_535(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_537(iParam0, iParam1);
	if (func_536(Global_1641087.f_96810))
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

int func_536(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8333[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_537(int iParam0, int iParam1)
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

int func_538(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_539(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1593076[iVar2 /*647*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_542())
			{
				iVar3 = func_285(iParam0);
				if (!iVar3 == -1)
				{
					return func_283(iVar3);
				}
			}
			if ((func_541(iParam1, iParam0, iVar0, 0) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18)) || ((func_96(unk_0xB5E2A107E006EC7A(iParam1), unk_0xB5E2A107E006EC7A(iParam0), 0) && unk_0x2A3398C6222EB190(Global_1641087.f_15, 23)) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18)))
			{
				return func_538(1);
			}
			else if (unk_0x2A3398C6222EB190(Global_1641087.f_15, 26))
			{
				return func_540(1);
			}
			else
			{
				return func_534(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574297 || Global_1574288) || Global_1593076[iParam0 /*647*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574297 == 1 && Global_1574307 == 0))
			{
				return func_538(1);
			}
			else
			{
				return func_534(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574292 && Global_1573831.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_285(iParam0);
	if (!iVar4 == -1)
	{
		return func_283(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_540(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_541(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xB5E2A107E006EC7A(iParam0) == -1 && unk_0xB5E2A107E006EC7A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xB5E2A107E006EC7A(iParam0) == unk_0xB5E2A107E006EC7A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xB5E2A107E006EC7A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xB5E2A107E006EC7A(iParam0) == iParam2;
	}
	return unk_0xB5E2A107E006EC7A(iParam0) == iParam2;
}

int func_542()
{
	if ((func_152() || func_544()) || func_543())
	{
		return 1;
	}
	return 0;
}

var func_543()
{
	return Global_2445582.f_14;
}

var func_544()
{
	return Global_2445582.f_13;
}

int func_545(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_542())
	{
		iVar1 = func_285(iParam1);
		if (!iVar1 == -1)
		{
			return func_283(iVar1);
		}
	}
	if (Global_1641087.f_92322[iParam0] != -1 && Global_1641087.f_92322[iParam0] <= 4)
	{
		if (Global_1641087.f_92322[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1641087.f_92322[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1641087.f_92322[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1641087.f_92322[iParam0] == 4)
		{
			if (unk_0x2A3398C6222EB190(Global_1641087.f_15, 29))
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
			iVar0 = Global_1641087.f_92322[iParam0];
		}
	}
	else
	{
		iVar0 = func_534(iParam1, !bParam2, iParam0, 0);
	}
	if (unk_0x2A3398C6222EB190(Global_1641087.f_21, 13))
	{
		iVar0 = func_546(iParam0);
	}
	if (unk_0x2A3398C6222EB190(Global_1641087.f_24, 29))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_546(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1641087.f_116131;
			break;
		
		case 1:
			iVar0 = Global_1641087.f_116132;
			break;
		
		case 2:
			iVar0 = Global_1641087.f_116133;
			break;
		
		case 3:
			iVar0 = Global_1641087.f_116134;
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

var func_547()
{
	return Global_2359302.f_2;
}

bool func_548()
{
	return unk_0x2A3398C6222EB190(Global_2359302, 4);
}

bool func_549()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

void func_550(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
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

int func_551(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x27CA09C6DFAB1E79() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0);
		}
		else
		{
			return unk_0xBC0BAC39A2995602(unk_0x51A193745FDE917D(), *uParam0);
		}
	}
	return unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0);
}

void func_552(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	struct<2> Var14;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	func_708(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_17397);
		}
		else
		{
			iVar1 = (iVar1 + func_707(iParam0, uParam2->f_13));
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_706(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_17396);
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
	if (func_704(iParam0))
	{
		if (bParam1)
		{
			if (func_703(unk_0x3D35F9864E4640B1()) > 0)
			{
				func_702();
			}
			else
			{
				func_701();
			}
		}
		else
		{
			func_700();
		}
	}
	func_687(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_685(iParam0, uParam2, &iVar0, &iVar5);
	func_664(iParam0, uParam2, &iVar0, &iVar5);
	func_638(iParam0, uParam2, &iVar0, &iVar5, &iVar6);
	if (iParam0 == 168)
	{
		Global_2501777.f_4867.f_195 = uVar4;
	}
	else
	{
		Global_2501777.f_4867.f_195 = iVar5;
	}
	iVar7 = func_344();
	if (iVar7 != func_55() && iParam0 != 148)
	{
		if (func_281(unk_0x3D35F9864E4640B1(), 0))
		{
			if (!func_317(unk_0x3D35F9864E4640B1(), iVar7, 1))
			{
				func_623(&iVar0, 1);
			}
		}
	}
	func_620(iParam0, &iVar8, &iVar9);
	iVar1 = (iVar1 + iVar8);
	iVar0 = (iVar0 + iVar9);
	if (iVar1 > 0)
	{
		Global_1779220.f_10 = iVar1;
		func_619();
		func_581(0, unk_0x0031992CA618A445(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1779220.f_9 = iVar0;
		iVar12 = func_580();
		if (iVar12 != func_55())
		{
			func_579(iVar12, &iVar10, &iVar11);
		}
		bVar13 = !func_578(1);
		if (iParam0 == 168)
		{
			if (!func_488())
			{
				unk_0x1E5E9AD6305D2AB0(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_577())
			{
				if (!func_488())
				{
					Var14 = { func_576() };
					unk_0xC6D2E2BF7D2C5624(iVar0, unk_0x50B7853132D8438E(func_575(Var14.f_0)), func_574(Var14.f_0), iVar5);
				}
			}
			else if (func_488())
			{
				func_570(-856006867, iVar0, &iVar16, 0, 1, 0);
				Global_2602788[iVar16 /*80*/].f_8.f_54 = iVar10;
				Global_2602788[iVar16 /*80*/].f_8.f_55 = iVar11;
				Global_2602788[iVar16 /*80*/].f_8.f_56 = bVar13;
			}
			else
			{
				unk_0x1E5E9AD6305D2AB0(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_569())
			{
				if (!func_488())
				{
					unk_0xC6D2E2BF7D2C5624(iVar0, unk_0x50B7853132D8438E(func_575(func_568(unk_0x3D35F9864E4640B1()))), 5, iVar5);
				}
			}
			else if (func_488())
			{
				func_570(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_2602788[iVar17 /*80*/].f_8.f_54 = iVar10;
				Global_2602788[iVar17 /*80*/].f_8.f_55 = iVar11;
				Global_2602788[iVar17 /*80*/].f_8.f_56 = bVar13;
			}
			else
			{
				unk_0x1E5E9AD6305D2AB0(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_569())
			{
				if (!func_488())
				{
					iVar18 = func_564(uParam2->f_16, iVar5);
					unk_0x6B7E4FB50D5F3D65(iVar0, iVar5, iVar6, iVar18, uParam2->f_16);
				}
			}
			else if (func_488())
			{
				func_570(463142405, iVar0, &iVar19, 0, 1, 0);
				Global_2602788[iVar19 /*80*/].f_8.f_54 = iVar10;
				Global_2602788[iVar19 /*80*/].f_8.f_55 = iVar11;
				Global_2602788[iVar19 /*80*/].f_8.f_56 = bVar13;
			}
			else
			{
				unk_0xDEE612F2D71B0308(iVar10, iVar11, iVar0, bVar13);
			}
		}
		else if (func_488())
		{
			func_570(-856006867, iVar0, &iVar20, 0, 1, 0);
			Global_2602788[iVar20 /*80*/].f_8.f_54 = iVar10;
			Global_2602788[iVar20 /*80*/].f_8.f_55 = iVar11;
			Global_2602788[iVar20 /*80*/].f_8.f_56 = bVar13;
		}
		else
		{
			unk_0x0BF2AFDC28BCEDE4(iVar10, iVar11, iVar0, bVar13);
		}
		func_563(iParam0, iVar0);
		if (func_562(iParam0))
		{
			if (func_561(iParam0) > -1)
			{
				func_560(func_561(iParam0), iVar0);
			}
		}
		Global_2457299 = iVar0;
		func_559(&Global_2455573, 0, 0);
	}
	if (func_235(unk_0x3D35F9864E4640B1()) || func_287(unk_0x3D35F9864E4640B1()))
	{
		func_553(iParam0);
	}
	if (func_413(iParam0))
	{
		Global_1779238.f_13 = iVar0;
		Global_1779238.f_14 = iVar1;
	}
	if (func_417(iParam0))
	{
		Global_1779291.f_13 = iVar0;
		Global_1779291.f_14 = iVar1;
	}
	if (func_502(iParam0))
	{
		Global_1779353.f_12 = iVar0;
		Global_1779353.f_13 = iVar1;
	}
	if (func_500(iParam0))
	{
		Global_1779396.f_12 = iVar0;
		Global_1779396.f_13 = iVar1;
	}
}

void func_553(int iParam0)
{
	if (func_558(unk_0x3D35F9864E4640B1()) && func_577())
	{
		if (func_505(iParam0))
		{
			func_556(6801, -1);
		}
		else if (func_555(iParam0))
		{
			func_556(6803, -1);
		}
		else if (func_315(iParam0, 1))
		{
			func_556(6804, -1);
		}
		else if (func_554(iParam0))
		{
			func_556(6805, -1);
		}
	}
}

int func_554(int iParam0)
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

int func_555(int iParam0)
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

void func_556(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_470(iParam0, func_391(iParam1), 0);
	iVar0++;
	if (!func_557(iParam0))
	{
		func_469(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_472(iParam0, iVar0, iParam1, 1);
	}
}

int func_557(int iParam0)
{
	if (Global_1364938)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2916:
			case 3045:
			case 6671:
			case 3040:
			case 3041:
			case 3042:
			case 3043:
			case 3044:
			case 3219:
			case 3221:
			case 3623:
			case 3624:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3214:
			case 3208:
			case 3650:
			case 3651:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3676:
			case 3217:
			case 3216:
			case 3999:
			case 3998:
			case 4002:
			case 4001:
			case 4005:
			case 4004:
			case 4008:
			case 4007:
			case 6089:
			case 6088:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_558(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_99, 14);
}

void func_559(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x27CA09C6DFAB1E79() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x898811EA80D35DE2();
		}
		else
		{
			*uParam0 = unk_0x51A193745FDE917D();
		}
	}
	else
	{
		*uParam0 = unk_0x31CD6E9F83C10233();
	}
	uParam0->f_1 = 1;
}

void func_560(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2501777.f_272 = iParam0;
		if (iParam1 > Global_262145.f_5979)
		{
			iParam1 = Global_262145.f_5979;
		}
		Global_2501777.f_273 = iParam1;
		Global_2501777.f_274 = 0;
	}
}

int func_561(int iParam0)
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

int func_562(int iParam0)
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

void func_563(int iParam0, int iParam1)
{
	if (func_558(unk_0x3D35F9864E4640B1()) && func_577())
	{
		if (func_505(iParam0) && iParam1 > 0)
		{
			func_469(6802, (func_470(6802, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_564(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_567(iParam0, iParam1);
	fVar1 = (unk_0xBBDA792448DB5A89(func_565(iParam0, iParam1)) * fVar0);
	return unk_0xF2DB717A73826179(fVar1);
}

int func_565(int iParam0, int iParam1)
{
	return (func_566(iParam0) * iParam1);
}

int func_566(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_21320;
		
		case 0:
			return Global_262145.f_21321;
		
		case 1:
			return Global_262145.f_21322;
		
		case 2:
			return Global_262145.f_21323;
		
		case 3:
			return Global_262145.f_21324;
		
		case 4:
			return Global_262145.f_21325;
		
		case 5:
			return Global_262145.f_21326;
		
		case 6:
			return Global_262145.f_21327;
		
		case 7:
			return Global_262145.f_21328;
		
		default:
	}
	return 0;
}

float func_567(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21330);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_21332;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21329);
			break;
		
		case 3:
			fVar0 = Global_262145.f_21332;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21329);
			break;
		
		case 0:
			fVar0 = Global_262145.f_21333;
			break;
		
		case 1:
			fVar0 = Global_262145.f_21333;
			break;
		
		case 4:
			fVar0 = Global_262145.f_21333;
			break;
		
		case 6:
			fVar0 = Global_262145.f_21334;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21331);
			break;
		
		case 2:
			fVar0 = Global_262145.f_21334;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21331);
			break;
		
		case 5:
			fVar0 = Global_262145.f_21334;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21331);
			break;
	}
	iVar2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / fVar1));
	return (unk_0xBBDA792448DB5A89(iVar2) * fVar0);
}

int func_568(int iParam0)
{
	if (iParam0 == func_55())
	{
		return 0;
	}
	return Global_1593076[iParam0 /*647*/].f_259.f_154[5 /*12*/];
}

bool func_569()
{
	return func_234(unk_0x3D35F9864E4640B1());
}

void func_570(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_488())
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
				func_571(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 463142405:
		case 1550217370:
		case -101307780:
			func_571(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_571(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_488())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x47409804829F12E2(func_36()) || unk_0x00A30B9F92946C2D())
		{
			Global_2603325 = 1;
			return 0;
		}
		if (Global_2456267)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2603326 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_2602788[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xF4CA95098478E685(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x0808743DD170F94B(iVar4))
		{
			*uParam0 = func_455(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2602788[*uParam0 /*80*/].f_69 = 1;
					Global_2602788[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_2603312 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2603324 = 1;
			Global_2603327 = iParam4;
			Global_2603329 = iParam3;
			Global_2603330 = 1;
			Global_2603328 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2603327 = iParam4;
			Global_2603329 = iParam3;
			Global_2603330 = 1;
			Global_2603328 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_573(1, iParam4);
			Global_2603324 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_572(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_572(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_131.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_445(iParam0);
	}
}

void func_573(int iParam0, var uParam1)
{
	Global_2457433 = uParam1;
	Global_2457432 = iParam0;
}

int func_574(int iParam0)
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

char* func_575(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_576()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_185;
}

bool func_577()
{
	return func_343(unk_0x3D35F9864E4640B1());
}

bool func_578(bool bParam0)
{
	return func_281(unk_0x3D35F9864E4640B1(), bParam0);
}

void func_579(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1623799[iParam0 /*488*/].f_11.f_7[0];
	*uParam2 = Global_1623799[iParam0 /*488*/].f_11.f_7[1];
}

int func_580()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11;
}

int func_581(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_582(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_582(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_592(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x76B3C79DE564AFC6(iParam1))
		{
			if (unk_0x269F274F1955DE87(iParam1))
			{
				uVar1 = unk_0x4849801147A2BA1E(iParam1);
				func_588(unk_0x616B55A822407A37(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_583(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_583(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_586(iParam0, 1) };
	if (iParam0 == func_585(unk_0x0031992CA618A445()))
	{
		func_584(1);
	}
	func_588(Var0, iParam1, 0, sParam2, iParam3);
}

void func_584(int iParam0)
{
	Global_2434915.f_1667 = iParam0;
}

int func_585(int iParam0)
{
	return iParam0;
}

Vector3 func_586(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x5B7BE6094290038A())
	{
		Var3 = { unk_0x74C3D05EEC4C701E(2) };
	}
	if (iParam0 == func_587(unk_0x0031992CA618A445()) && unk_0xE2378BA63E191ED9(unk_0x72A1F054E4BCA1A8()) == 4)
	{
		Var0 = { unk_0xCD59EF1D7098A4B4(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xF177E0DA126D71C8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x7A6C051038031EFA(iParam0, 0))
	{
		fVar6 = unk_0x69F9721375CE60CF(iParam0);
		if (unk_0xE2378BA63E191ED9(unk_0x72A1F054E4BCA1A8()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x9E360FFC6FB1DDFD(unk_0xE9559A12052415BE(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x261E7847B591A8DC(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_587(int iParam0)
{
	return iParam0;
}

void func_588(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2434915.f_1066[iVar0 /*30*/].f_6 == 0 || Global_2434915.f_1066[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2434915.f_1066[iVar1 /*30*/] = { Param0 };
			Global_2434915.f_1066[iVar1 /*30*/].f_6 = 1;
			Global_2434915.f_1066[iVar1 /*30*/].f_4 = func_591(Global_2434915.f_1066[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2434915.f_1066[iVar1 /*30*/].f_7 = unk_0x898811EA80D35DE2();
			Global_2434915.f_1066[iVar1 /*30*/].f_3 = iParam3;
			Global_2434915.f_1066[iVar1 /*30*/].f_8 = iParam4;
			Global_2434915.f_1066[iVar1 /*30*/].f_9 = func_590();
			Global_2434915.f_1066[iVar1 /*30*/].f_10 = func_589();
			StringCopy(&(Global_2434915.f_1066[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2434915.f_1066[iVar1 /*30*/].f_26 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), iParam6);
		}
	}
}

int func_589()
{
	if (Global_2434915.f_1667)
	{
		Global_2434915.f_1667 = 0;
		return 1;
	}
	Global_2434915.f_1667 = 0;
	return 0;
}

var func_590()
{
	var uVar0;
	
	uVar0 = Global_2434915.f_1669;
	Global_2434915.f_1669 = 1;
	return uVar0;
}

float func_591(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x1410333E912D4EC6(unk_0x98FACB31378E99D1(), Param0, 1);
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

var func_592(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_593(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_593(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_618(unk_0x3D35F9864E4640B1()) || func_617(unk_0x3D35F9864E4640B1()))
	{
		if (Global_262145.f_8836 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8836;
		}
	}
	else if (Global_262145.f_6030 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6030;
	}
	if (func_616(uParam2))
	{
	}
	if (func_615())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_613(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_612(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_610(0, &iVar1);
					break;
				
				case 3:
					func_610(1, &iVar1);
					break;
				
				case 1:
					func_608(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1788555)
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
			func_607(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_603((func_606(unk_0x3D35F9864E4640B1()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC0EC11F1BDB694AB(iVar1, iParam8, iParam9);
				if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_2 != -1)
				{
					func_607(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_598(iVar1);
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
				func_594((func_596(unk_0x3D35F9864E4640B1()) + iVar1));
			}
			else
			{
				func_594((func_596(unk_0x3D35F9864E4640B1()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_594(int iParam0)
{
	if (func_615())
	{
		Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_5 = iParam0;
		func_595(joaat("mpply_globalxp"), iParam0);
	}
}

void func_595(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, uParam1, 1);
	}
}

int func_596(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1124(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x3D35F9864E4640B1())
			{
				return func_597(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1593076[iParam0 /*647*/].f_204.f_5;
			}
		}
		else
		{
			return func_597(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_597(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x2553A7EB99AABF55(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_598(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_57(unk_0x3D35F9864E4640B1()) };
	if (unk_0x1AE803DF5F9B30C9())
	{
		if (unk_0xF3F1AD16A136B115(&Var0))
		{
			iVar13 = func_601(func_602(&Var0));
			if (iVar13 == 0)
			{
				func_600(&Global_1364944, iParam0);
				func_599(joaat("mpply_crew_local_xp_0"), Global_1364944);
			}
			else if (iVar13 == 1)
			{
				func_600(&Global_1364945, iParam0);
				func_599(joaat("mpply_crew_local_xp_1"), Global_1364945);
			}
			else if (iVar13 == 2)
			{
				func_600(&Global_1364946, iParam0);
				func_599(joaat("mpply_crew_local_xp_2"), Global_1364946);
			}
			else if (iVar13 == 3)
			{
				func_600(&Global_1364947, iParam0);
				func_599(joaat("mpply_crew_local_xp_3"), Global_1364947);
			}
			else if (iVar13 == 4)
			{
				func_600(&Global_1364948, iParam0);
				func_599(joaat("mpply_crew_local_xp_4"), Global_1364948);
			}
		}
	}
}

void func_599(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xE931A869061F7BD2(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1364939 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1364941 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1364941 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1364942 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1364943 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1364944 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1364945 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1364946 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1364947 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1364948 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1364949 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1364950 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1364951 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1364952 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1364953 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1364954 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1364955 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_600(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_601(int iParam0)
{
	if (iParam0 == Global_1364939)
	{
		return 0;
	}
	else if (iParam0 == Global_1364940)
	{
		return 1;
	}
	else if (iParam0 == Global_1364941)
	{
		return 2;
	}
	else if (iParam0 == Global_1364942)
	{
		return 3;
	}
	else if (iParam0 == Global_1364943)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_602(var uParam0)
{
	if (unk_0x1AE803DF5F9B30C9())
	{
		if (unk_0xF3F1AD16A136B115(uParam0))
		{
			return Global_2455041;
		}
	}
	return Global_2455041;
}

void func_603(int iParam0, int iParam1, int iParam2)
{
	if (func_615())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8806 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1365059[func_391(-1)])
				{
					unk_0xC0EC11F1BDB694AB(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1365059[func_391(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8805 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xC0EC11F1BDB694AB(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8805 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xC0EC11F1BDB694AB(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_168(unk_0x3D35F9864E4640B1()))
		{
			Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_1 = iParam0;
			Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_6 = func_604(iParam0, 1);
		}
		func_472(636, iParam0, -1, 1);
		func_469(637, func_604(iParam0, 1), -1, 1, 0);
		Global_1365059[func_391(-1)] = iParam0;
		func_461(7, 0);
	}
}

int func_604(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_605(iParam0, 0);
}

int func_605(int iParam0, int iParam1)
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
		if (Global_283571[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_283571[iVar3] < iParam0)
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

int func_606(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x3D35F9864E4640B1())
			{
				return Global_1365059[func_391(-1)];
			}
			else if (func_168(iParam0))
			{
				return Global_1593076[iParam0 /*647*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1365059[func_391(-1)];
	}
	return 0;
}

void func_607(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_470(iParam0, func_391(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_557(iParam0))
	{
		func_469(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_472(iParam0, iVar0, iParam2, 1);
	}
}

void func_608(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1());
	iVar0 = 0;
	while (iVar0 < unk_0x32C41AA379415932())
	{
		iVar4 = unk_0xDF6AF3C6DAF25A51(iVar0);
		if (unk_0xA3C5F17FDDF2701D(iVar4))
		{
			iVar5 = unk_0x3F3ED1FF7CF1C641(iVar4);
			if (unk_0xB5E2A107E006EC7A(iVar5) != -1)
			{
				if (unk_0xB5E2A107E006EC7A(iVar5) == iVar1 || func_96(unk_0xB5E2A107E006EC7A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x3D35F9864E4640B1())
					{
						if (func_58(unk_0x3D35F9864E4640B1(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_609(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_609(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_609(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_610(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x32C41AA379415932())
		{
			iVar3 = iVar0;
			if (unk_0xA3C5F17FDDF2701D(iVar3))
			{
				iVar4 = unk_0x3F3ED1FF7CF1C641(iVar3);
				if (func_1124(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x3D35F9864E4640B1())
					{
						iVar1++;
						if (func_58(unk_0x3D35F9864E4640B1(), iVar4))
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
			if (func_1124(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x3D35F9864E4640B1())
				{
					if (func_611(unk_0x3D35F9864E4640B1(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_58(unk_0x3D35F9864E4640B1(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_609(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_609(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_611(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_51(iParam0), func_51(iParam1));
	return 0f;
}

int func_612(int iParam0)
{
	int iVar0;
	
	if (unk_0x1DB8DA6E03DC888B() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_609(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_613(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x0C58CE21DE9AD283(iParam0) > func_606(unk_0x3D35F9864E4640B1()))
		{
			iParam0 = -func_606(unk_0x3D35F9864E4640B1());
		}
	}
	if (func_614(8000, 0, 0) > 0)
	{
		if (func_614(8000, 0, 0) < (iParam0 + func_606(unk_0x3D35F9864E4640B1())))
		{
			iParam0 = (func_614(8000, 0, 0) - func_606(unk_0x3D35F9864E4640B1()));
		}
	}
	return iParam0;
}

int func_614(int iParam0, bool bParam1, int iParam2)
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
	return Global_283571[iParam0];
}

int func_615()
{
	return 1;
}

int func_616(var uParam0)
{
	if (unk_0x996B09F758C57FBE(uParam0))
	{
		return 1;
	}
	else if (unk_0xB3404E397FF56B3B(uParam0, "") || unk_0xB3404E397FF56B3B(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_617(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 2;
}

bool func_618(int iParam0)
{
	return Global_2422142[iParam0 /*399*/].f_124 == 7;
}

void func_619()
{
	Global_2456641 = 1;
}

void func_620(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_194(7))
	{
		return;
	}
	iVar0 = func_622(iParam0);
	iVar1 = func_621(iParam0);
	iVar2 = unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(Global_2501777.f_4867.f_82, unk_0x898811EA80D35DE2()));
	if (iParam0 == 229)
	{
		if (iVar2 > Global_262145.f_21221)
		{
			iVar2 = Global_262145.f_21221;
		}
	}
	else if (iParam0 == 230)
	{
		if (iVar2 > Global_262145.f_21317)
		{
			iVar2 = Global_262145.f_21317;
		}
	}
	else if (iParam0 == 225)
	{
		if (iVar2 > Global_262145.f_20071)
		{
			iVar2 = Global_262145.f_20071;
		}
	}
	else if (iParam0 == 226)
	{
		if (iVar2 > Global_262145.f_20051)
		{
			iVar2 = Global_262145.f_20051;
		}
	}
	else if (iParam0 == 227)
	{
		if (iVar2 > Global_262145.f_20063)
		{
			iVar2 = Global_262145.f_20063;
		}
	}
	else if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_17599)
		{
			iVar2 = Global_262145.f_17599;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_17600)
		{
			iVar2 = Global_262145.f_17600;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_17598)
		{
			iVar2 = Global_262145.f_17598;
		}
	}
	else if (func_505(iParam0))
	{
		if (iVar2 > Global_262145.f_17601)
		{
			iVar2 = Global_262145.f_17601;
		}
	}
	else if (func_315(iParam0, 0) || func_555(iParam0))
	{
		if (iVar2 > Global_262145.f_17602)
		{
			iVar2 = Global_262145.f_17602;
		}
	}
	else if (iVar2 > Global_262145.f_11584)
	{
		iVar2 = Global_262145.f_11584;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11675;
		
		case 152:
			return Global_262145.f_11710;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11698;
		
		case 157:
			return Global_262145.f_11665;
		
		case 159:
			return Global_262145.f_11648;
		
		case 164:
			return Global_262145.f_11688;
		
		case 160:
			return Global_262145.f_11738;
		
		case 162:
			return Global_262145.f_11758;
		
		case 163:
			return Global_262145.f_11723;
		
		case 154:
			return Global_262145.f_11793;
		
		case 155:
			return Global_262145.f_11783;
		
		case 153:
			return Global_262145.f_11747;
		
		case 170:
			return Global_262145.f_14115;
		
		case 171:
			return Global_262145.f_14174;
		
		case 172:
			return Global_262145.f_14192;
		
		case 173:
			return Global_262145.f_14133;
		
		case 166:
			return Global_262145.f_14148;
		
		case 167:
			return Global_262145.f_14239;
		
		case 169:
			return Global_262145.f_14211;
		
		case 168:
			return Global_262145.f_14204;
		
		case 179:
			return Global_262145.f_17481;
		
		case 180:
			return Global_262145.f_17260;
		
		case 182:
			return Global_262145.f_17260;
		
		case 183:
			return Global_262145.f_17260;
		
		case 185:
			return Global_262145.f_17260;
		
		case 186:
			return Global_262145.f_17260;
		
		case 189:
			return Global_262145.f_17481;
		
		case 190:
			return Global_262145.f_17136;
		
		case 191:
			return Global_262145.f_17227;
		
		case 192:
			return Global_262145.f_17021;
		
		case 193:
			return Global_262145.f_17481;
		
		case 194:
			return Global_262145.f_17481;
		
		case 195:
			return Global_262145.f_17260;
		
		case 197:
			return Global_262145.f_17260;
		
		case 198:
			return Global_262145.f_17260;
		
		case 199:
			return Global_262145.f_17481;
		
		case 200:
			return Global_262145.f_17481;
		
		case 201:
			return Global_262145.f_17481;
		
		case 205:
			return Global_262145.f_17481;
		
		case 207:
			return Global_262145.f_17260;
		
		case 208:
			return Global_262145.f_17260;
		
		case 209:
			return Global_262145.f_17260;
		
		case 210:
			return Global_262145.f_17481;
		
		case 211:
			return Global_262145.f_17481;
		
		case 214:
			return Global_262145.f_18277;
		
		case 215:
			return Global_262145.f_18279;
		
		case 216:
			return Global_262145.f_18281;
		
		case 217:
			return Global_262145.f_18283;
		
		case 218:
			return Global_262145.f_18285;
		
		case 219:
			return Global_262145.f_18287;
		
		case 220:
			return Global_262145.f_18289;
		
		case 221:
			return Global_262145.f_18291;
		
		case 225:
			if (func_578(0) || func_341(0))
			{
				return Global_262145.f_20073;
			}
			break;
		
		case 226:
			if (func_578(0) || func_341(0))
			{
				return Global_262145.f_20053;
			}
			break;
		
		case 227:
			if (func_578(0) || func_341(0))
			{
				return Global_262145.f_20065;
			}
			break;
		
		case 229:
			if (func_578(0) || func_341(0))
			{
				return Global_262145.f_21223;
			}
			break;
		
		case 230:
			if (func_578(0) || func_341(0))
			{
				return Global_262145.f_21319;
			}
			break;
	}
	return 0;
}

int func_622(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11674;
		
		case 152:
			return Global_262145.f_11709;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11697;
		
		case 157:
			return Global_262145.f_11664;
		
		case 159:
			return Global_262145.f_11647;
		
		case 164:
			return Global_262145.f_11687;
		
		case 160:
			return Global_262145.f_11737;
		
		case 162:
			return Global_262145.f_11757;
		
		case 163:
			return Global_262145.f_11722;
		
		case 154:
			return Global_262145.f_11792;
		
		case 155:
			return Global_262145.f_11782;
		
		case 153:
			return Global_262145.f_11746;
		
		case 170:
			return Global_262145.f_14114;
		
		case 171:
			return Global_262145.f_14173;
		
		case 172:
			return Global_262145.f_14191;
		
		case 173:
			return Global_262145.f_14132;
		
		case 166:
			return Global_262145.f_14147;
		
		case 179:
			return Global_262145.f_17480;
		
		case 180:
			return Global_262145.f_17259;
		
		case 182:
			return Global_262145.f_17259;
		
		case 183:
			return Global_262145.f_17259;
		
		case 185:
			return Global_262145.f_17259;
		
		case 186:
			return Global_262145.f_17259;
		
		case 189:
			return Global_262145.f_17480;
		
		case 193:
			return Global_262145.f_17480;
		
		case 194:
			return Global_262145.f_17480;
		
		case 195:
			return Global_262145.f_17259;
		
		case 197:
			return Global_262145.f_17259;
		
		case 198:
			return Global_262145.f_17259;
		
		case 199:
			return Global_262145.f_17480;
		
		case 200:
			return Global_262145.f_17480;
		
		case 201:
			return Global_262145.f_17480;
		
		case 205:
			return Global_262145.f_17480;
		
		case 207:
			return Global_262145.f_17259;
		
		case 208:
			return Global_262145.f_17259;
		
		case 209:
			return Global_262145.f_17259;
		
		case 210:
			return Global_262145.f_17480;
		
		case 211:
			return Global_262145.f_17480;
		
		case 190:
			if (!func_569())
			{
				return Global_262145.f_17135;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_569())
			{
				return Global_262145.f_17226;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_569())
			{
				return Global_262145.f_17020;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_18276;
		
		case 215:
			return Global_262145.f_18278;
		
		case 216:
			return Global_262145.f_18280;
		
		case 217:
			return Global_262145.f_18282;
		
		case 218:
			return Global_262145.f_18284;
		
		case 219:
			return Global_262145.f_18286;
		
		case 220:
			return Global_262145.f_18288;
		
		case 221:
			return Global_262145.f_18290;
		
		case 225:
			if (func_341(0))
			{
				return Global_262145.f_20072;
			}
			break;
		
		case 226:
			if (func_341(0))
			{
				return Global_262145.f_20052;
			}
			break;
		
		case 227:
			if (func_341(0))
			{
				return Global_262145.f_20064;
			}
			break;
		
		case 229:
			if (func_341(0))
			{
				return Global_262145.f_21222;
			}
			break;
		
		case 230:
			if (func_341(0))
			{
				return Global_262145.f_21318;
			}
			break;
	}
	return 0;
}

void func_623(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_569())
		{
			if (func_578(0))
			{
				if (!func_341(0))
				{
					if (unk_0x80BA8E3CC61A8625(func_580()))
					{
						if (func_637() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_637());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_635(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_628("GB_BCUT_TICK1", func_580(), iVar0, 0, 0, 1, 1);
						}
						func_436(20);
						func_624(func_580(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_624(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1124(iParam0, 0, 1))
	{
		Var0.f_0 = -1983770473;
		Var0.f_1 = unk_0x3D35F9864E4640B1();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_627(iParam0);
		func_626(&(Var0.f_6), &(Var0.f_7));
		unk_0xBD257D33BCFA529A(1, &Var0, 8, func_625(iParam0));
	}
}

int func_625(int iParam0)
{
	var uVar0;
	
	unk_0xCD7E92DE2BFA0B0D(&uVar0, iParam0);
	return uVar0;
}

void func_626(var uParam0, var uParam1)
{
	*uParam0 = Global_1639417.f_9;
	*uParam1 = Global_1639417.f_10;
}

var func_627(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_430;
}

int func_628(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x06D7899D9C1F422F(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x06D7899D9C1F422F(iParam1), 64);
		}
		if (unk_0x0BD3CCFB6C6CFA91(&Var1))
		{
		}
		unk_0xC8EBA5D7FC75C1C0(sParam0);
		unk_0xDBB8FCB00B701798(func_532(iParam1, -2, 1, 0));
		unk_0x50B3C23D0902259F(func_633(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xDBB8FCB00B701798(iParam3);
		}
		unk_0x96577CAA1D1E72DB(iParam2);
		iVar0 = unk_0xC59BF654690FB5DC(0, 1);
		func_629(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_629(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_632() || !unk_0xF4F91CD09D59F42E()) || !func_34(unk_0x3D35F9864E4640B1(), 0))
	{
		return;
	}
	iVar0 = func_630(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1775874.f_5[iVar0 /*53*/] = iParam0;
		Global_1775874.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1775874.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1775874.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1775874.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1775874.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1775874.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_630(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1775874 - 1))
	{
		if (iParam0 > Global_1775874.f_5[iVar0 /*53*/].f_1)
		{
			func_631(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1775874++;
	if (Global_1775874 > 5)
	{
		Global_1775874 = 5;
		return Global_1775874;
	}
	return (Global_1775874 - 1);
}

void func_631(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1775874.f_5[iVar0 /*53*/] = { Global_1775874.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_632()
{
	return unk_0x43456EBBDC27D696(-1762644250);
}

var func_633(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_634(&cVar0);
}

var func_634(char[4] cParam0)
{
	return cParam0;
}

void func_635(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_636(1);
	}
	else
	{
		iVar1 = func_636(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_636(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11579;
}

int func_637()
{
	return Global_262145.f_11578;
}

void func_638(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_341(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_569())
		{
			iVar15 = unk_0x3D35F9864E4640B1();
		}
		else
		{
			iVar15 = func_580();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_662(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_653(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
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
			iVar2 = func_565(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_564(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_652(*iParam2) > 0)
			{
				if (iVar15 == unk_0x3D35F9864E4640B1())
				{
					func_651("SMTICK_RONCUT", func_652(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_652(*iParam2));
			}
			if (iVar15 == unk_0x3D35F9864E4640B1())
			{
				func_649(iVar2, iVar9);
				iVar6 = func_648(&uVar5);
				iVar7 = Global_262145.f_21336;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_21335));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_436(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x32C41AA379415932())
						{
							iVar19 = iVar18;
							if (unk_0xA3C5F17FDDF2701D(iVar19))
							{
								iVar20 = unk_0x3F3ED1FF7CF1C641(iVar19);
								if (func_647(iVar20))
								{
									func_639(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2501777.f_4867.f_194 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_21269;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21270;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1788563 = *iParam2;
					func_436(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_639(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_641(iParam0);
	func_640(iParam0, uVar0, iParam1, iParam2);
}

void func_640(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = 1095396841;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_627(iParam0);
	func_626(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_55())
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			unk_0xBD257D33BCFA529A(1, &Var0, 8, func_625(iParam0));
		}
	}
}

int func_641(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_646();
	iVar0 = func_644(iParam0, iVar0);
	iVar1 = Global_1623799[func_580() /*488*/].f_11.f_369;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14075));
	if (iVar0 < func_643())
	{
		iVar0 = func_643();
	}
	if (iVar0 > func_642())
	{
		iVar0 = func_642();
	}
	return iVar0;
}

int func_642()
{
	return Global_262145.f_14076;
}

int func_643()
{
	return Global_262145.f_15251;
}

int func_644(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_703(iParam0) * func_645());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_645()
{
	return Global_262145.f_15250;
}

var func_646()
{
	return Global_262145.f_11570;
}

int func_647(int iParam0)
{
	if (unk_0x80BA8E3CC61A8625(iParam0))
	{
		if (iParam0 != unk_0x3D35F9864E4640B1())
		{
			if (func_317(iParam0, unk_0x3D35F9864E4640B1(), 0))
			{
				if (!func_217(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_648(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x80BA8E3CC61A8625(unk_0xA7871E29B06DA901(iVar0)))
		{
			iVar2 = unk_0xA7871E29B06DA901(iVar0);
			if (!func_34(iVar2, 0) && !func_317(iVar2, unk_0x3D35F9864E4640B1(), 1))
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

void func_649(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_650(iParam0, 6095);
	}
	if (iParam1 > 0)
	{
		func_650(iParam0, 6095);
	}
}

void func_650(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_470(iParam1, -1, 0);
	func_469(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

int func_651(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	unk_0x96577CAA1D1E72DB(iParam1);
	iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	func_629(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_652(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = (fVar0 * Global_262145.f_21303);
	if (fVar1 > unk_0xBBDA792448DB5A89(Global_262145.f_21304))
	{
		fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21304);
	}
	return unk_0xF2DB717A73826179(fVar1);
}

int func_653(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_660())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_662(unk_0x3D35F9864E4640B1());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_655(func_656(func_659(iVar0), -1, -1));
		if (func_654(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_654(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_655(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

int func_656(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_658(iParam0, iParam1);
	uVar2 = func_657(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x8105A63E77701FA4(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_657(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xBCD63A9C1B29E64F((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xBCD63A9C1B29E64F((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xBCD63A9C1B29E64F((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xBCD63A9C1B29E64F((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xBCD63A9C1B29E64F((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xBCD63A9C1B29E64F((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xBCD63A9C1B29E64F((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xBCD63A9C1B29E64F((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xBCD63A9C1B29E64F((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xBCD63A9C1B29E64F((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xBCD63A9C1B29E64F((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xBCD63A9C1B29E64F((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xBCD63A9C1B29E64F((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xBCD63A9C1B29E64F((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xBCD63A9C1B29E64F((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xBCD63A9C1B29E64F((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xBCD63A9C1B29E64F((iParam0 - 16010)) * 8) * 8;
	}
	return iVar0;
}

int func_658(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x194BD82085774211((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xDD592FC20504697C((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x5836EE297EA1469B((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	return iVar0;
}

int func_659(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_660()
{
	return func_661() != 0;
}

int func_661()
{
	return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_235;
}

int func_662(int iParam0)
{
	if (iParam0 != func_55() && func_663(iParam0))
	{
		return Global_1593076[iParam0 /*647*/].f_259.f_235.f_3;
	}
	return 0;
}

int func_663(int iParam0)
{
	if (iParam0 != func_55())
	{
		return Global_1593076[iParam0 /*647*/].f_259.f_235 != 0;
	}
	return 0;
}

void func_664(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_341(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_569())
		{
			iVar15 = unk_0x3D35F9864E4640B1();
		}
		else
		{
			iVar15 = func_580();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_568(iVar15);
			iVar0 = (func_684(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_680(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20055));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20054));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x3D35F9864E4640B1())
			{
				func_678(iVar16, iVar2);
				if (func_674(iVar16) >= Global_262145.f_19608 || iVar2 >= Global_262145.f_19608)
				{
					func_665(5);
				}
				iVar6 = func_648(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_20057);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_20056));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_436(108);
					}
					else
					{
						func_436(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x32C41AA379415932())
						{
							iVar19 = iVar18;
							if (unk_0xA3C5F17FDDF2701D(iVar19))
							{
								iVar20 = unk_0x3F3ED1FF7CF1C641(iVar19);
								if (func_647(iVar20))
								{
									func_639(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2501777.f_4867.f_194 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20058;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20059;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1788563 = *iParam2;
					func_436(112);
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

void func_665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19596)
			{
				if (func_667(Global_262145.f_19597))
				{
					func_666("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19598)
			{
				if (func_667(Global_262145.f_19599))
				{
					func_666("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19600)
			{
				if (func_667(Global_262145.f_19601))
				{
					func_666("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19602)
			{
				if (func_667(Global_262145.f_19603))
				{
					func_666("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19604)
			{
				if (func_667(Global_262145.f_19605))
				{
					func_666("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19606)
			{
				if (func_667(Global_262145.f_19607))
				{
					func_651("CLOTHAWDSTRAP3", Global_262145.f_19608, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19609)
			{
				if (func_667(Global_262145.f_19610))
				{
					func_651("CLOTHAWDSTRAP5", Global_262145.f_19739, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19612)
			{
				if (func_667(Global_262145.f_19613))
				{
					func_666("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19614)
			{
				if (func_667(Global_262145.f_19615))
				{
					func_666("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19616)
			{
				if (func_667(Global_262145.f_19617))
				{
					func_666("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19618)
			{
				if (func_667(Global_262145.f_19619))
				{
					func_666("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19620)
			{
				if (func_667(Global_262145.f_19621))
				{
					func_666("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19622)
			{
				if (func_667(Global_262145.f_19623))
				{
					func_666("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19624)
			{
				if (func_667(Global_262145.f_19625))
				{
					func_666("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19626)
			{
				if (func_667(Global_262145.f_19627))
				{
					func_666("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_666(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xC8EBA5D7FC75C1C0(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0xDBB8FCB00B701798(iParam3);
	}
	unk_0x7C8A7ECFBAD2C8C4(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xC59BF654690FB5DC(0, 1);
	}
	else
	{
		Global_2488575 = { func_57(unk_0x3D35F9864E4640B1()) };
		if (unk_0x7838EB8661A32D68(&Global_2488505, 35, &Global_2488575))
		{
			iVar1 = 0;
			if (unk_0xB3404E397FF56B3B(&(Global_2488505.f_22), "Leader") && Global_2488505.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2488505.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0xAC2E222FB9C25D52(iVar2, unk_0xDEB7B1B6D2FD60C2(&Global_2488505, 35), &(Global_2488505.f_17), Global_2488505.f_30, iVar1, 0, Global_2488505, unk_0x06D7899D9C1F422F(unk_0x3D35F9864E4640B1()), Global_1314010, Global_1314011, Global_1314012);
		}
		else
		{
			iVar0 = unk_0xC59BF654690FB5DC(0, 1);
		}
	}
	func_629(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_667(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_671(15417, -1, -1))
			{
				func_670(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_671(15418, -1, -1))
			{
				func_670(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_671(15425, -1, -1))
			{
				func_670(15425, 1, -1, 1);
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
			if (!func_671(15405, -1, -1))
			{
				func_670(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_671(15393, -1, -1))
			{
				func_670(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_671(15409, -1, -1))
			{
				func_670(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_671(15396, -1, -1))
			{
				func_670(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_671(15412, -1, -1))
			{
				func_670(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_390(209, -1))
			{
				func_668(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_671(15403, -1, -1))
			{
				func_670(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_390(209, -1))
			{
				func_668(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_671(15389, -1, -1))
			{
				func_670(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_390(209, -1))
			{
				func_668(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_671(15398, -1, -1))
			{
				func_670(15398, 1, -1, 1);
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
			if (!func_671(15400, -1, -1))
			{
				func_670(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_390(209, -1))
			{
				func_668(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_671(15408, -1, -1))
			{
				func_670(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_390(209, -1))
			{
				func_668(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_671(15411, -1, -1))
			{
				func_670(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_671(15397, -1, -1))
			{
				func_670(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_671(15413, -1, -1))
			{
				func_670(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_671(15391, -1, -1))
			{
				func_670(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_671(15388, -1, -1))
			{
				func_670(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_390(209, -1))
			{
				func_668(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_671(15401, -1, -1))
			{
				func_670(15401, 1, -1, 1);
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
			if (!func_671(15394, -1, -1))
			{
				func_670(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_390(209, -1))
			{
				func_668(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_671(15406, -1, -1))
			{
				func_670(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_671(15395, -1, -1))
			{
				func_670(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_390(209, -1))
			{
				func_668(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_671(15410, -1, -1))
			{
				func_670(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_671(15407, -1, -1))
			{
				func_670(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_390(209, -1))
			{
				func_668(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_390(209, -1))
			{
				func_668(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_671(15414, -1, -1))
			{
				func_670(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_671(15415, -1, -1))
			{
				func_670(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_671(15399, -1, -1))
			{
				func_670(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_671(15404, -1, -1))
			{
				func_670(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_390(209, -1))
			{
				func_668(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_671(15392, -1, -1))
			{
				func_670(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_671(15390, -1, -1))
			{
				func_670(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_671(15402, -1, -1))
			{
				func_670(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_671(15416, -1, -1))
			{
				func_670(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_390(209, -1))
			{
				func_668(209, 1, -1, 1);
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
			if (!func_671(15426, -1, -1))
			{
				func_670(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_671(15422, -1, -1))
			{
				func_670(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_671(15423, -1, -1))
			{
				func_670(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_671(15421, -1, -1))
			{
				func_670(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_671(15427, -1, -1))
			{
				func_670(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_671(15419, -1, -1))
			{
				func_670(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_671(15420, -1, -1))
			{
				func_670(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_668(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_669())
	{
		iVar0 = Global_2534367[iParam0 /*3*/][func_391(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x356621BE3FFD87C4(iVar0, iParam1, iParam3);
		}
	}
}

int func_669()
{
	return 1;
	return 0;
}

int func_670(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar16;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
		iVar0 = unk_0x91CA295EE867AFA0(uVar16, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_671(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar1 = func_673(iParam0, iParam1);
	uVar2 = func_672(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xCADA079847403C94(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_672(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xE1499FF97BA2511E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xE1499FF97BA2511E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xE1499FF97BA2511E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xE1499FF97BA2511E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xE1499FF97BA2511E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xE1499FF97BA2511E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xE1499FF97BA2511E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xE1499FF97BA2511E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xE1499FF97BA2511E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xE1499FF97BA2511E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xE1499FF97BA2511E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xE1499FF97BA2511E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xE1499FF97BA2511E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xE1499FF97BA2511E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xE1499FF97BA2511E((iParam0 - 15946)) * 64);
	}
	return iVar0;
}

int func_673(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x6860BB4C0ABA6F86((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xA9C89DEEBE79CAD2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x001909FFC248179B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	return iVar0;
}

int func_674(int iParam0)
{
	int iVar0;
	
	iVar0 = func_676(iParam0);
	return func_470(func_675(iVar0), -1, 0);
}

int func_675(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3930;
		
		case 1:
			return 3931;
		
		case 2:
			return 3932;
		
		case 3:
			return 3933;
		
		case 4:
			return 3934;
		
		case 5:
			return 5435;
		
		default:
	}
	return 3930;
}

int func_676(int iParam0)
{
	int iVar0;
	
	if (func_677(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_677(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_678(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_676(iParam0);
	iVar1 = func_675(iVar0);
	iVar2 = (func_470(iVar1, -1, 0) + iParam1);
	func_469(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_656(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iVar0 /*12*/] != 0)
			{
				iVar1 = func_675(iVar0);
				iVar3 = (iVar3 + func_470(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_679(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_466(9357, iVar5, -1, 1);
	}
}

int func_679(int iParam0)
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

int func_680(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_574(iParam1);
	if (func_677(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16080;
				if (func_681(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16085);
				}
				if (func_681(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16090);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16079;
				if (func_681(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16084);
				}
				if (func_681(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16089);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16078;
				if (func_681(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16083);
				}
				if (func_681(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16088);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16076;
				if (func_681(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16081);
				}
				if (func_681(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16086);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16077;
				if (func_681(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16082);
				}
				if (func_681(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16087);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20080;
				if (func_681(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20082);
				}
				if (func_681(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20081);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_681(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_683(iParam0, iParam1))
	{
		iVar0 = func_682(iParam0, iParam1);
		return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_682(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_677(iParam1) && iParam0 != func_55())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_683(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_677(iParam1) && iParam0 != func_55())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_684(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_677(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_685(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_577())
			{
				Var0 = { func_576() };
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
				iVar7 = func_680(unk_0x3D35F9864E4640B1(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17710);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17709);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_648(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_17700);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_17699));
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
					func_436(86);
				}
				Global_2501777.f_4867.f_194 = *iParam2;
			}
			else if (func_341(0))
			{
				Var15 = { func_686(func_580()) };
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
				iVar22 = func_680(func_580(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17710));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17709));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_17749;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_17750;
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

struct<2> func_686(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_185;
}

void func_687(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_234(unk_0x3D35F9864E4640B1()))
		{
			if (bParam1)
			{
				func_699();
			}
			func_698();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_234(unk_0x3D35F9864E4640B1()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_693(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_174));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_692(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_648(&uVar2);
					iVar4 = Global_262145.f_15261;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_14470));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_436(44);
					}
				}
				func_690(*iParam3);
				func_689();
				Global_2501777.f_4867.f_194 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x32C41AA379415932())
				{
					iVar8 = iVar7;
					if (unk_0xA3C5F17FDDF2701D(iVar8))
					{
						iVar9 = unk_0x3F3ED1FF7CF1C641(iVar8);
						if (func_647(iVar9))
						{
							func_639(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_234(unk_0x3D35F9864E4640B1()))
		{
			func_688();
		}
	}
}

void func_688()
{
	int iVar0;
	
	iVar0 = Global_2536235[func_36()];
	iVar0++;
	func_472(3654, iVar0, -1, 1);
}

void func_689()
{
	int iVar0;
	
	iVar0 = Global_2536241[func_36()];
	iVar0++;
	func_472(3653, iVar0, -1, 1);
}

void func_690(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2536244[func_36()];
	iVar0 = (iVar0 + iParam0);
	func_472(3655, iVar0, -1, 1);
	if (func_656(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_691(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_466(7666, iVar2, -1, 1);
	}
}

int func_691(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15394;
			break;
		
		case 2:
			return Global_262145.f_15395;
			break;
		
		case 3:
			return Global_262145.f_15396;
			break;
		
		case 4:
			return Global_262145.f_15397;
			break;
		
		case 5:
			return Global_262145.f_15398;
			break;
		
		case 6:
			return Global_262145.f_15399;
			break;
		
		case 7:
			return Global_262145.f_15400;
			break;
		
		case 8:
			return Global_262145.f_15401;
			break;
		
		case 9:
			return Global_262145.f_15402;
			break;
		
		case 10:
			return Global_262145.f_15403;
			break;
		
		case 11:
			return Global_262145.f_15404;
			break;
		
		case 12:
			return Global_262145.f_15405;
			break;
		
		case 13:
			return Global_262145.f_15406;
			break;
		
		case 14:
			return Global_262145.f_15407;
			break;
		
		case 15:
			return Global_262145.f_15408;
			break;
		
		case 16:
			return Global_262145.f_15409;
			break;
		
		case 17:
			return Global_262145.f_15410;
			break;
		
		case 18:
			return Global_262145.f_15411;
			break;
		
		case 19:
			return Global_262145.f_15412;
			break;
		
		case 20:
			return Global_262145.f_15413;
			break;
		
		case 21:
			return Global_262145.f_15414;
			break;
		
		case 22:
			return Global_262145.f_15415;
			break;
		
		case 23:
			return Global_262145.f_15416;
			break;
		
		case 24:
			return Global_262145.f_15417;
			break;
	}
	return 0;
}

var func_692(int iParam0)
{
	if (iParam0 >= Global_262145.f_14448)
	{
		return Global_262145.f_14469;
	}
	else if (iParam0 >= Global_262145.f_14447)
	{
		return Global_262145.f_14468;
	}
	else if (iParam0 >= Global_262145.f_14446)
	{
		return Global_262145.f_14467;
	}
	else if (iParam0 >= Global_262145.f_14445)
	{
		return Global_262145.f_14466;
	}
	else if (iParam0 >= Global_262145.f_14444)
	{
		return Global_262145.f_14465;
	}
	else if (iParam0 >= Global_262145.f_14443)
	{
		return Global_262145.f_14464;
	}
	else if (iParam0 >= Global_262145.f_14442)
	{
		return Global_262145.f_14463;
	}
	else if (iParam0 >= Global_262145.f_14441)
	{
		return Global_262145.f_14462;
	}
	else if (iParam0 >= Global_262145.f_14440)
	{
		return Global_262145.f_14461;
	}
	else if (iParam0 >= Global_262145.f_14439)
	{
		return Global_262145.f_14460;
	}
	else if (iParam0 >= Global_262145.f_14438)
	{
		return Global_262145.f_14459;
	}
	else if (iParam0 >= Global_262145.f_14437)
	{
		return Global_262145.f_14458;
	}
	else if (iParam0 >= Global_262145.f_14436)
	{
		return Global_262145.f_14457;
	}
	else if (iParam0 >= Global_262145.f_14435)
	{
		return Global_262145.f_14456;
	}
	else if (iParam0 >= Global_262145.f_14434)
	{
		return Global_262145.f_14455;
	}
	else if (iParam0 >= Global_262145.f_14433)
	{
		return Global_262145.f_14454;
	}
	else if (iParam0 >= Global_262145.f_14432)
	{
		return Global_262145.f_14453;
	}
	else if (iParam0 >= Global_262145.f_14431)
	{
		return Global_262145.f_14452;
	}
	else if (iParam0 >= Global_262145.f_14430)
	{
		return Global_262145.f_14451;
	}
	else if (iParam0 >= Global_262145.f_14429)
	{
		return Global_262145.f_14450;
	}
	return Global_262145.f_14449;
}

int func_693(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_697(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_696(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_695(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_694(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_694(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_695(unk_0x3AF262D7332EEDF5(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_694(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_471(func_489(iParam0));
		return func_470(iVar0, -1, 0);
	}
	return 0;
}

int func_695(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14648;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14646;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14650;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14644;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14642;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14652;
	}
	return 0;
}

int func_696(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1780558[iVar0] == iParam1 && Global_1780565[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_697(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_82[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_698()
{
	int iVar0;
	
	iVar0 = Global_2536232[func_36()];
	iVar0++;
	Global_2536232[func_36()] = iVar0;
	func_472(3652, iVar0, -1, 1);
}

void func_699()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2536229[func_36()];
	iVar1 = Global_2536238[func_36()];
	iVar0++;
	iVar1++;
	Global_2536229[func_36()] = iVar0;
	Global_2536238[func_36()] = iVar1;
	Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_104 = iVar1;
	func_472(3650, iVar0, -1, 1);
	func_472(3651, iVar1, -1, 1);
}

void func_700()
{
	if (func_569())
	{
		Global_2446355.f_3066.f_134 = 0;
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_369 = Global_2446355.f_3066.f_134;
	}
}

void func_701()
{
	if (func_569())
	{
		if (Global_2446355.f_3066.f_134 < 10)
		{
			Global_2446355.f_3066.f_134++;
			Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_369 = Global_2446355.f_3066.f_134;
		}
	}
}

void func_702()
{
	if (func_569())
	{
		if (Global_2446355.f_3066.f_134 > 0)
		{
			Global_2446355.f_3066.f_134 = (Global_2446355.f_3066.f_134 - 1);
			Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_369 = Global_2446355.f_3066.f_134;
		}
	}
}

int func_703(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_27;
}

int func_704(int iParam0)
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
		case 229:
		case 230:
			if (func_578(1) && !func_341(1))
			{
				if (func_705(func_580()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_705(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 26);
}

int func_706(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11695) * Global_262145.f_11700));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11645) * Global_262145.f_11650));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11672) * Global_262145.f_11676));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11685) * Global_262145.f_11689));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11707) * Global_262145.f_11712));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11869) * Global_262145.f_11870));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11875) * Global_262145.f_11876));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11873) * Global_262145.f_11874));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11867) * Global_262145.f_11868));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11871) * Global_262145.f_11872));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11865) * Global_262145.f_11866));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14171;
		
		case 172:
			return Global_262145.f_14187;
		
		case 173:
			return Global_262145.f_14130;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_17404;
		
		case 180:
			return Global_262145.f_17280;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17288;
		
		case 185:
			return Global_262145.f_17297;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17492;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17509;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17357;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17540;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17418;
		
		case 205:
			return Global_262145.f_17527;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17385;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17522;
		
		case 211:
			return Global_262145.f_17486;
		
		case 214:
			return Global_262145.f_18026;
		
		case 215:
			return Global_262145.f_18036;
		
		case 216:
			return Global_262145.f_18046;
		
		case 217:
			return Global_262145.f_18055;
		
		case 218:
			return Global_262145.f_18064;
		
		case 219:
			return Global_262145.f_18080;
		
		default:
	}
	return 0;
}

int func_707(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11696) * Global_262145.f_11701));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11646) * Global_262145.f_11651));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11673) * Global_262145.f_11677));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11686) * Global_262145.f_11690));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11708) * Global_262145.f_11713));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11745) * Global_262145.f_11748));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11791) * Global_262145.f_11794));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11781) * Global_262145.f_11784));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11736) * Global_262145.f_11739));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11756) * Global_262145.f_11761));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11721) * Global_262145.f_11724));
		
		case 170:
			return Global_262145.f_14113;
		
		case 171:
			return Global_262145.f_14172;
		
		case 172:
			return Global_262145.f_14188;
		
		case 173:
			return Global_262145.f_14131;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16208;
		
		case 168:
			return Global_262145.f_16207;
		
		case 179:
			return Global_262145.f_17405;
		
		case 180:
			return Global_262145.f_17281;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17289;
		
		case 185:
			return Global_262145.f_17298;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17493;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17510;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17358;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17541;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17419;
		
		case 205:
			return Global_262145.f_17528;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17386;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17523;
		
		case 211:
			return Global_262145.f_17487;
		
		case 214:
			return Global_262145.f_18027;
		
		case 215:
			return Global_262145.f_18037;
		
		case 216:
			return Global_262145.f_18047;
		
		case 217:
			return Global_262145.f_18056;
		
		case 218:
			return Global_262145.f_18065;
		
		case 219:
			return Global_262145.f_18081;
		
		case 178:
			if (func_569())
			{
				return Global_262145.f_17904;
			}
			else if (bParam1)
			{
				return Global_262145.f_17905;
			}
			break;
		
		case 188:
			if (func_569())
			{
				return Global_262145.f_17988;
			}
			else if (bParam1)
			{
				return Global_262145.f_17989;
			}
			break;
		
		case 225:
			if (func_569() && !func_577())
			{
				if (func_705(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_20068;
				}
				else
				{
					return Global_262145.f_20069;
				}
			}
			else if (func_577())
			{
				return Global_262145.f_20070;
			}
			break;
		
		case 226:
			if (func_569() && !func_577())
			{
				if (func_705(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_20048;
				}
				else
				{
					return Global_262145.f_20049;
				}
			}
			else if (func_577())
			{
				return Global_262145.f_20050;
			}
			break;
		
		case 227:
			if (func_569() && !func_577())
			{
				if (func_705(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_20060;
				}
				else
				{
					return Global_262145.f_20061;
				}
			}
			else if (func_577())
			{
				return Global_262145.f_20062;
			}
			break;
		
		case 229:
			if (func_569() && !func_577())
			{
				if (func_705(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_21218;
				}
				else
				{
					return Global_262145.f_21219;
				}
			}
			else if (func_577())
			{
				return Global_262145.f_21220;
			}
			break;
		
		case 230:
			if (func_569() && !func_577())
			{
				if (func_705(unk_0x3D35F9864E4640B1()))
				{
					return Global_262145.f_21314;
				}
				else
				{
					return Global_262145.f_21315;
				}
			}
			else if (func_577())
			{
				return Global_262145.f_21316;
			}
			break;
	}
	return 0;
}

void func_708(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_709(iParam0))
	{
		if (!func_569())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11589;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_413(iParam0))
	{
		*uParam1 = (Global_262145.f_17258 / 100f);
		*uParam2 = (Global_262145.f_17258 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11588;
		*uParam2 = Global_262145.f_11587;
	}
	if (func_413(iParam0))
	{
		if (func_281(unk_0x3D35F9864E4640B1(), 1))
		{
			*uParam1 = (Global_262145.f_17257 / 100f);
			*uParam2 = (Global_262145.f_17257 / 100f);
		}
	}
	else if (func_281(unk_0x3D35F9864E4640B1(), 1))
	{
		*uParam1 = Global_262145.f_11586;
		*uParam2 = Global_262145.f_11585;
	}
	iVar0 = func_344();
	if (iVar0 != func_55())
	{
		if (func_317(unk_0x3D35F9864E4640B1(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_709(int iParam0)
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

void func_710(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_213(unk_0x3D35F9864E4640B1());
	if (func_413(iVar0))
	{
		Global_1779238.f_2 = func_764();
		Global_1779238.f_3 = func_763();
		Global_1779238.f_50 = iParam4;
		Global_1779238.f_51 = iParam5;
		Global_1779238.f_10 = unk_0x6239D1A379D387A4();
		Global_1779238.f_20 = (Global_1779238.f_10 - Global_1779238.f_9);
		Global_1779238.f_12 = iParam1;
		Global_1779238.f_19 = func_757(iVar0, bParam0, func_762(bParam3));
		if (bParam0)
		{
			Global_1779238.f_11 = 1;
		}
		else
		{
			Global_1779238.f_11 = 0;
		}
		if ((func_235(unk_0x3D35F9864E4640B1()) || func_385(unk_0x3D35F9864E4640B1())) || func_287(unk_0x3D35F9864E4640B1()))
		{
			Global_1779238.f_8 = 1;
		}
		else
		{
			Global_1779238.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1779238.f_43 = 0;
			Global_1779238.f_45 = func_756(func_580(), iParam2);
			Global_1779238.f_47 = iParam7;
			Global_1779238.f_46 = iParam6;
			Global_1779238.f_52 = func_755(func_580(), iParam2);
		}
		func_753(iVar0);
	}
	else if (func_417(iVar0))
	{
		Global_1779291.f_2 = func_764();
		Global_1779291.f_3 = func_763();
		Global_1779291.f_10 = unk_0x6239D1A379D387A4();
		Global_1779291.f_19 = (Global_1779291.f_10 - Global_1779291.f_9);
		Global_1779291.f_12 = iParam1;
		if (bParam0)
		{
			Global_1779291.f_11 = 1;
		}
		else
		{
			Global_1779291.f_11 = 0;
		}
		if ((func_235(unk_0x3D35F9864E4640B1()) || func_385(unk_0x3D35F9864E4640B1())) || func_287(unk_0x3D35F9864E4640B1()))
		{
			Global_1779291.f_8 = 1;
		}
		else
		{
			Global_1779291.f_8 = 0;
		}
		func_751(iVar0);
	}
	else if (func_502(iVar0))
	{
		Global_1779353.f_2 = func_764();
		Global_1779353.f_3 = func_763();
		Global_1779353.f_9 = unk_0x6239D1A379D387A4();
		Global_1779353.f_18 = (Global_1779353.f_9 - Global_1779353.f_8);
		Global_1779353.f_11 = iParam1;
		Global_1779353.f_7 = func_750();
		Global_1779353.f_42 = func_748(func_36(), 5);
		iVar1 = unk_0x3D35F9864E4640B1();
		iVar2 = func_568(iVar1);
		Global_1779353.f_28 = iVar2;
		Global_1779353.f_29 = func_745((func_747(iVar1) || func_746(iVar1)));
		Global_1779353.f_30 = func_745(func_744(iVar1));
		Global_1779353.f_32 = func_745(func_743(iVar1));
		Global_1779353.f_33 = func_745(func_742(iVar1));
		Global_1779353.f_34 = func_745(func_741(iVar1));
		Global_1779353.f_35 = func_745(func_740(0, iVar1) == 1);
		Global_1779353.f_36 = func_745(func_739(iVar1));
		Global_1779353.f_37 = func_745(func_738(iVar1));
		Global_1779353.f_38 = func_745(func_737(iVar1));
		Global_1779353.f_39 = func_745(func_681(iVar1, iVar2, 0));
		Global_1779353.f_40 = func_745(func_681(iVar1, iVar2, 2));
		Global_1779353.f_41 = func_745(func_681(iVar1, iVar2, 1));
		if (func_736(iVar1))
		{
			Global_1779353.f_31 = 2;
		}
		else if (func_735(iVar1))
		{
			Global_1779353.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1779353.f_10 = 1;
		}
		else
		{
			Global_1779353.f_10 = 0;
		}
		if ((func_235(unk_0x3D35F9864E4640B1()) || func_385(unk_0x3D35F9864E4640B1())) || func_287(unk_0x3D35F9864E4640B1()))
		{
			Global_1779353.f_6 = 1;
		}
		else
		{
			Global_1779353.f_6 = 0;
		}
		Global_1779353.f_21 = -2;
		Global_1779353.f_22 = -2;
		func_733(iVar0);
	}
	else if (func_500(iVar0))
	{
		Global_1779396.f_2 = func_764();
		Global_1779396.f_3 = func_763();
		if ((func_235(unk_0x3D35F9864E4640B1()) || func_385(unk_0x3D35F9864E4640B1())) || func_287(unk_0x3D35F9864E4640B1()))
		{
			Global_1779396.f_6 = 1;
		}
		else
		{
			Global_1779396.f_6 = 0;
		}
		Global_1779396.f_9 = unk_0x6239D1A379D387A4();
		Global_1779396.f_10 = func_745(bParam0);
		Global_1779396.f_11 = iParam1;
		Global_1779396.f_17 = func_732(func_344());
		Global_1779396.f_18 = (Global_1779396.f_9 - Global_1779396.f_8);
		Global_1779396.f_20 = iParam8;
		Global_1779396.f_21 = -2;
		Global_1779396.f_22 = -2;
		Global_1779396.f_27 = func_731();
		Global_1779396.f_29 = func_470(6086, -1, 0);
		Global_1779396.f_30 = func_470(6082, -1, 0);
		Global_1779396.f_31 = func_470(6083, -1, 0);
		Global_1779396.f_32 = func_470(6085, -1, 0);
		Global_1779396.f_33 = func_470(6084, -1, 0);
		Global_1779396.f_34 = func_470(6087, -1, 0);
		Global_1779396.f_36 = func_745(func_341(1));
		Global_1779396.f_37 = func_728();
		func_713();
		func_711(iVar0);
	}
	else
	{
		Global_1779220.f_6 = unk_0x6239D1A379D387A4();
		if (bParam0)
		{
			Global_1779220.f_7 = 1;
		}
		else
		{
			Global_1779220.f_7 = 0;
		}
		Global_1779220.f_8 = iParam1;
		if (Global_1779220.f_4 == 0)
		{
			if ((func_235(unk_0x3D35F9864E4640B1()) || func_385(unk_0x3D35F9864E4640B1())) || func_287(unk_0x3D35F9864E4640B1()))
			{
				Global_1779220.f_4 = 1;
			}
		}
	}
}

void func_711(int iParam0)
{
	switch (iParam0)
	{
		case 230:
		case default:
	}
	unk_0x320C35147D5B5DDD(&Global_1779396);
	func_712();
}

void func_712()
{
	struct<53> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Global_1779396 = { Var0 };
	Global_1779396.f_23 = 0;
	Global_1779396.f_24 = 0;
	Global_1779396.f_16 = 0;
}

void func_713()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_724(12));
		func_723(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1319069[iVar1 /*140*/].f_66 != 0 && func_715(Global_1319069[iVar1 /*140*/].f_66, 1))
			{
				if (Global_2501777.f_863 != iVar1)
				{
					if (func_714(Global_1319069[iVar1 /*140*/].f_66))
					{
						if (Global_1319069[iVar1 /*140*/].f_66 != 0)
						{
							iVar3 = Global_1319069[iVar1 /*140*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1779396.f_38 = iVar3;
								break;
							
							case 1:
								Global_1779396.f_39 = iVar3;
								break;
							
							case 2:
								Global_1779396.f_40 = iVar3;
								break;
							
							case 3:
								Global_1779396.f_41 = iVar3;
								break;
							
							case 4:
								Global_1779396.f_42 = iVar3;
								break;
							
							case 5:
								Global_1779396.f_43 = iVar3;
								break;
							
							case 6:
								Global_1779396.f_44 = iVar3;
								break;
							
							case 7:
								Global_1779396.f_45 = iVar3;
								break;
							
							case 8:
								Global_1779396.f_46 = iVar3;
								break;
							
							case 9:
								Global_1779396.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_714(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
			return 1;
		
		default:
	}
	return 0;
}

int func_715(int iParam0, bool bParam1)
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
		if (!func_722())
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
		if ((((!func_721() && !func_720()) && !func_719()) && !func_718()) && !func_722())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x9D3EA2635512FD6B() || unk_0x20551D6D924ED04B()) || unk_0x43F4A6D2081CC5ED())
		{
		}
		else if (!func_719())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_717(iParam0))
		{
			return 0;
		}
	}
	if (!func_716(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_716(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_488())
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

int func_717(int iParam0)
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

int func_718()
{
	return 0;
}

int func_719()
{
	return 1;
}

int func_720()
{
	return 1;
}

int func_721()
{
	if (unk_0x43456EBBDC27D696(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_722()
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
					iVar0 = unk_0x03CCEFDDDC599303(866);
					unk_0xCD7E92DE2BFA0B0D(&iVar0, 0);
					unk_0x5149EEBBCD305987(iVar0);
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

void func_723(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_9364)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1776225[iParam0] - 1);
		if (bParam2)
		{
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_724(int iParam0)
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
		
		case 12:
			return 159;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_727(iParam0);
		return func_726(iVar0);
	}
	return (func_725(iParam0, -1) * iParam0);
}

int func_725(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_508(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_514(iParam1))
			{
				return 0;
			}
			else if (func_148(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 <= 116 && iParam1 > 0)
			{
				if (Global_1049495[iParam1 /*1943*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049495[iParam1 /*1943*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049495[iParam1 /*1943*/].f_33 == 10)
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
		
		case 12:
			return 20;
			break;
	}
	return 0;
}

int func_726(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_727(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

var func_728()
{
	var uVar0;
	
	uVar0 = func_730();
	if (!func_569())
	{
		if (func_580() != func_55())
		{
			uVar0 = func_729(func_580()) + 1;
		}
	}
	return uVar0;
}

int func_729(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_18;
}

int func_730()
{
	return func_729(unk_0x3D35F9864E4640B1()) + 1;
}

int func_731()
{
	return func_470(6092, -1, 0);
}

int func_732(int iParam0)
{
	if (func_281(iParam0, 1))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_371;
	}
	return -1;
}

void func_733(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x868A7E5D770758C3(&Global_1779353);
	func_734();
}

void func_734()
{
	struct<43> Var0;
	
	Global_1779353 = { Var0 };
	Global_1779353.f_23 = 0;
	Global_1779353.f_24 = 0;
	Global_1779353.f_16 = 0;
}

bool func_735(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 12);
}

bool func_736(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 13);
}

int func_737(int iParam0)
{
	if (iParam0 != func_55())
	{
		if ((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 12) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 13)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_738(int iParam0)
{
	if (iParam0 != func_55())
	{
		if ((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 0) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 1)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_739(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (((((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 3) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 4)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 5)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 0)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 1)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_740(int iParam0, int iParam1)
{
	if (iParam1 == func_55())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 0))
			{
				return 3;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 3))
			{
				return 2;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 6))
			{
				return 4;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 9))
			{
				return 1;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 12))
			{
				return 7;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 15))
			{
				return 5;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 18))
			{
				return 6;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 21))
			{
				return 0;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 1))
			{
				return 3;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 4))
			{
				return 2;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 7))
			{
				return 4;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 10))
			{
				return 1;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 13))
			{
				return 7;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 16))
			{
				return 5;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 19))
			{
				return 6;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 22))
			{
				return 0;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 2))
			{
				return 3;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 5))
			{
				return 2;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 8))
			{
				return 4;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 11))
			{
				return 1;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 14))
			{
				return 7;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 17))
			{
				return 5;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 20))
			{
				return 6;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 23))
			{
				return 0;
			}
			else if (unk_0x2A3398C6222EB190(Global_1593076[iParam1 /*647*/].f_259.f_230, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_741(int iParam0)
{
	if (iParam0 != func_55())
	{
		if ((unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 6) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 7)) || unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_230, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_742(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 8);
}

bool func_743(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 7);
}

bool func_744(int iParam0)
{
	if (iParam0 == func_55())
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 9);
}

int func_745(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_746(int iParam0)
{
	if (iParam0 == func_55())
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 11);
}

bool func_747(int iParam0)
{
	if (iParam0 == func_55())
	{
		return 0;
	}
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_244, 10);
}

int func_748(int iParam0, int iParam1)
{
	return func_470(func_749(iParam1), iParam0, 0);
}

int func_749(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3877;
		
		case 1:
			return 3906;
		
		case 2:
			return 3910;
		
		case 3:
			return 3914;
		
		case 4:
			return 3918;
		
		case 5:
			return 5429;
		
		default:
	}
	return 3877;
}

int func_750()
{
	int iVar0;
	
	if (func_577())
	{
		return 4;
	}
	else if (func_569())
	{
		if (func_705(unk_0x3D35F9864E4640B1()))
		{
			return 8;
		}
		return 6;
	}
	if (func_341(1))
	{
		iVar0 = func_732(unk_0x3D35F9864E4640B1());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_578(1))
	{
		if (func_705(func_580()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

void func_751(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xA8F7390A60969E48(&Global_1779291);
	func_752();
}

void func_752()
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
	Global_1779291 = { Var0 };
	Global_1779291.f_24 = 0;
	Global_1779291.f_25 = 0;
	Global_1779291.f_17 = 0;
}

void func_753(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xA46325BE4A9EEE31(&Global_1779238);
	func_754();
}

void func_754()
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
	Global_1779238 = { Var0 };
	Global_1779238.f_29 = 0;
	Global_1779238.f_30 = 0;
	Global_1779238.f_17 = 0;
}

int func_755(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_681(iParam0, iParam1, 2);
	bVar1 = func_681(iParam0, iParam1, 1);
	bVar2 = func_681(iParam0, iParam1, 0);
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

int func_756(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_677(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_757(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_505(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16815;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16814;
		}
		else
		{
			iVar0 = Global_262145.f_16796;
		}
		iVar1 = 19;
	}
	else if (func_504(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_315(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_16795;
			iVar1 = 20;
		}
	}
	else if (func_413(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16815;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16814;
		}
		else
		{
			iVar0 = Global_262145.f_16796;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x83FF67474F030301(func_761(func_580()), func_760(func_580()), func_764(), func_763(), iVar1, iVar0);
	}
	func_759(iVar0);
	func_758(iVar0);
	return iVar0;
}

void func_758(int iParam0)
{
	int iVar0;
	
	iVar0 = func_470(3947, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_410 = iVar0;
	func_469(3947, iVar0, -1, 1, 0);
}

void func_759(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3D35F9864E4640B1();
	Global_1623799[iVar0 /*488*/].f_11.f_409 = (Global_1623799[iVar0 /*488*/].f_11.f_409 + iParam0);
	if (Global_1623799[iVar0 /*488*/].f_11.f_409 < -9999)
	{
		Global_1623799[iVar0 /*488*/].f_11.f_409 = 9999;
	}
	else if (Global_1623799[iVar0 /*488*/].f_11.f_409 > 9999)
	{
		Global_1623799[iVar0 /*488*/].f_11.f_409 = 9999;
	}
}

int func_760(int iParam0)
{
	if (iParam0 == func_55())
	{
		return -1;
	}
	return Global_1623799[iParam0 /*488*/].f_11.f_7[1];
}

int func_761(int iParam0)
{
	if (iParam0 == func_55())
	{
		return -1;
	}
	return Global_1623799[iParam0 /*488*/].f_11.f_7[0];
}

int func_762(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_235(unk_0x3D35F9864E4640B1()) || func_287(unk_0x3D35F9864E4640B1()))
	{
		return 1;
	}
	return 0;
}

int func_763()
{
	if (Global_1779220.f_3 != 0)
	{
		return Global_1779220.f_3;
	}
	return -1;
}

int func_764()
{
	if (Global_1779220.f_2 != 0)
	{
		return Global_1779220.f_2;
	}
	return -1;
}

int func_765(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_55();
	iVar1 = func_55();
	iVar2 = func_55();
	return func_766(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_766(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_550(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0xCD7E92DE2BFA0B0D(&(Var0.f_67), 2);
	return func_521(&Var0);
}

int func_767(int iParam0)
{
	int iVar0;
	
	iVar0 = func_285(iParam0);
	if (iVar0 != -1)
	{
		return func_283(iVar0);
	}
	return 1;
}

char* func_768(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		sVar0 = func_773(&(Global_1623799[iParam0 /*488*/].f_11.f_98));
		return sVar0;
	}
	if (Global_1623799[iParam0 /*488*/].f_11.f_114 != Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_114)
	{
		sVar0 = func_771(iParam0, 0);
		return sVar0;
	}
	if (((func_217(iParam0, 28) || func_217(unk_0x3D35F9864E4640B1(), 28)) || func_770(iParam0)) && !func_769(iParam0))
	{
		return func_771(iParam0, 0);
	}
	iVar1 = func_56(iParam0);
	if (iVar1 != func_55())
	{
		if (iVar1 != unk_0x3D35F9864E4640B1())
		{
			if (!unk_0x9D3EA2635512FD6B() && !unk_0x2792DE3D57C3435A(0, -1, 1))
			{
				return func_771(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_55())
	{
		sVar0 = func_773(&(Global_1623799[iVar1 /*488*/].f_11.f_98));
		if (unk_0x0BD3CCFB6C6CFA91(sVar0))
		{
			return func_771(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_769(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_57(iParam0) };
	if (unk_0x9D3EA2635512FD6B())
	{
		if (unk_0x4C69E6D9E2ED0169(0))
		{
			if (unk_0xEFDB3CCA382D116E(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_770(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_57(iParam0) };
	if (unk_0x43F4A6D2081CC5ED() || unk_0x20551D6D924ED04B())
	{
		if (unk_0x4C69E6D9E2ED0169(0))
		{
			return 0;
		}
	}
	else if (unk_0x9D3EA2635512FD6B())
	{
		if (unk_0x4C69E6D9E2ED0169(0))
		{
			if (unk_0xEFDB3CCA382D116E(&Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_771(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_270(iParam0, 1))
		{
			return func_772();
		}
	}
	return unk_0xC0D54565FC1032F4("GB_REST_ACC");
}

var func_772()
{
	return unk_0xC0D54565FC1032F4("GB_REST_ACCM");
}

var func_773(var uParam0)
{
	return uParam0;
}

void func_774()
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
	if (func_395())
	{
		if (func_11(&(Local_128.f_238)))
		{
			iVar1 = (func_18() - 300000);
			bVar0 = func_6(&(Local_128.f_238), iVar1, 0);
			if (bVar0)
			{
				func_782();
				if ((func_18() - func_551(&(Local_128.f_238), 0, 0)) > 0)
				{
					if ((func_18() - func_551(&(Local_128.f_238), 0, 0)) > 30000)
					{
						func_781((func_18() - func_551(&(Local_128.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0);
					}
					else
					{
						func_781((func_18() - func_551(&(Local_128.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
					}
				}
				else
				{
					func_781(0, "GB_WORK_END", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
				}
			}
		}
		return;
	}
	if (!func_1027() && !func_393())
	{
		return;
	}
	if (!func_492())
	{
		return;
	}
	iVar2 = unk_0x3D35F9864E4640B1();
	if (func_34(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar2 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	}
	iVar3 = func_384(iVar2);
	if (iVar3 < 3)
	{
		return;
	}
	iVar4 = (func_30() - Local_128.f_213);
	if (unk_0x2A3398C6222EB190(Local_128.f_1, 13))
	{
		func_778(iVar4, "DCONTRA_HUD1", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	}
	if (func_11(&(Local_128.f_226)))
	{
		iVar5 = func_20();
		iVar6 = (func_20() - func_551(&(Local_128.f_226), 0, 0));
		func_775(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
	}
	else
	{
		iVar5 = func_20();
		iVar6 = func_20();
		func_775(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
	}
}

void func_775(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_777(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_776(0, iVar0);
		Global_1356070.f_1093[iVar0] = iParam0;
		Global_1356070.f_1093.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1356070.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1356070.f_1093.f_194[iVar0] = iParam3;
		Global_1356070.f_1093.f_183[iVar0] = iParam4;
		Global_1356070.f_1093.f_216[iVar0] = iParam5;
		Global_1356070.f_1093.f_227[iVar0 /*3*/] = iParam6;
		Global_1356070.f_1093.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1356070.f_1093.f_258[iVar0] = iParam8;
		Global_1356070.f_1093.f_269[iVar0] = iParam9;
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

void func_776(int iParam0, int iParam1)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1356070.f_5941[iParam0]), iParam1);
}

bool func_777(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_1356070.f_5941[iParam0], iParam1);
}

void func_778(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
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
			if (func_777(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_776(6, iVar0);
		Global_1356070.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1356070.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1356070.f_3770.f_183[iVar0] = iParam3;
		Global_1356070.f_3770.f_172[iVar0] = iParam2;
		Global_1356070.f_3770.f_260[iVar0] = iParam4;
		Global_1356070.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1356070.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1356070.f_3770.f_443[iVar0] = iParam7;
		Global_1356070.f_3770.f_454[iVar0] = iParam8;
		Global_1356070.f_3770.f_497[iVar0] = iParam9;
		Global_1356070.f_3770.f_508[iVar0] = iParam10;
		Global_1356070.f_3770.f_205[iVar0] = iParam11;
		Global_1356070.f_3770.f_216[iVar0] = iParam12;
		Global_1356070.f_3770.f_227[iVar0] = iParam13;
		Global_1356070.f_3770.f_238[iVar0] = iParam14;
		Global_1356070.f_3770.f_249[iVar0] = iParam15;
		Global_1356070.f_3770.f_519[iVar0] = iParam16;
		Global_1356070.f_3770.f_530[iVar0] = iParam17;
		Global_1356070.f_3770.f_541[iVar0] = iParam18;
		Global_1356070.f_3770.f_552[iVar0] = iParam19;
		Global_1356070.f_3770.f_563[iVar0] = iParam20;
		Global_1356070.f_3770.f_574[iVar0] = iParam21;
		Global_1356070.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_780())
		{
			Global_1356070.f_1088 = 1;
		}
		if (unk_0x20551D6D924ED04B())
		{
			iVar2 = 0;
			unk_0xD9151D5BCEE2689C(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1356070.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1356070.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1356070.f_1088 = 1;
			}
			if (func_779())
			{
				Global_1356070.f_1092 = 1;
			}
		}
	}
}

int func_779()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x20551D6D924ED04B())
	{
		unk_0xD9151D5BCEE2689C(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_780()
{
	if ((unk_0x2DA8A432EC3C3D33() == 8 || unk_0x2DA8A432EC3C3D33() == 9) || unk_0x2DA8A432EC3C3D33() == 10)
	{
		return 1;
	}
	return 0;
}

void func_781(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_777(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1356070.f_1 = 1;
		func_776(7, iVar0);
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

void func_782()
{
	Global_1356070.f_1089 = 1;
}

void func_783()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar3 = unk_0x3D35F9864E4640B1();
	iVar4 = unk_0x43B24C247F35B6BC();
	if (!unk_0x2A3398C6222EB190(iLocal_751, 1))
	{
		return;
	}
	if (func_34(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar4 = func_394();
		iVar3 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	}
	iVar5 = func_384(iVar3);
	if (!func_492())
	{
		if (func_185("DCONTRA_OBJ"))
		{
			func_921();
		}
		if (func_185("DCONTRA_OBJ2"))
		{
			func_921();
		}
		if (func_185("DCONTRA_OBJ3"))
		{
			func_921();
		}
		if (func_185("DCONTRA_OBJ4"))
		{
			func_921();
		}
		if (func_185("DCONTRA_TOBJ"))
		{
			func_921();
		}
		if (func_185("DCONTRA_TOBJ2"))
		{
			func_921();
		}
		if (func_185("DCONTRA_TOBJ3"))
		{
			func_921();
		}
		if (func_185("DCONTRA_WOBJ"))
		{
			func_921();
		}
		return;
	}
	if (iVar5 < 3)
	{
		if (func_185("DCONTRA_OBJ"))
		{
			func_921();
		}
		if (func_185("DCONTRA_OBJ2"))
		{
			func_921();
		}
		if (func_185("DCONTRA_OBJ3"))
		{
			func_921();
		}
		if (func_185("DCONTRA_OBJ4"))
		{
			func_921();
		}
		if (func_185("DCONTRA_TOBJ"))
		{
			func_921();
		}
		if (func_185("DCONTRA_TOBJ2"))
		{
			func_921();
		}
		if (func_185("DCONTRA_TOBJ3"))
		{
			func_921();
		}
		if (func_185("DCONTRA_WOBJ"))
		{
			func_921();
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!func_395())
	{
		if (!unk_0x2A3398C6222EB190(Local_128.f_1, 13) && !unk_0x2A3398C6222EB190(Local_398[iVar4 /*11*/].f_1, 11))
		{
			if (!func_185("DCONTRA_WOBJ"))
			{
				func_797("DCONTRA_WOBJ", 0);
			}
		}
		else if (iVar4 == Local_128.f_218)
		{
			if (!func_185("DCONTRA_OBJ"))
			{
				func_797("DCONTRA_OBJ", 0);
			}
		}
		else if (func_1028() == Local_128.f_218)
		{
			if (!func_185("DCONTRA_OBJ"))
			{
				func_797("DCONTRA_OBJ", 0);
			}
		}
	}
	else if (func_796())
	{
		if (iVar4 == Local_128.f_218)
		{
			if (!func_185("DCONTRA_OBJ2"))
			{
				func_797("DCONTRA_OBJ2", 0);
			}
		}
		else if (func_1028() == Local_128.f_218)
		{
			if (!func_185("DCONTRA_OBJ2"))
			{
				func_797("DCONTRA_OBJ2", 0);
			}
		}
	}
	else
	{
		if (func_185("DCONTRA_OBJ2"))
		{
			func_921();
		}
		if (func_185("DCONTRA_TOBJ2"))
		{
			func_921();
		}
		if (Local_128.f_216 < 0)
		{
			if (!func_185("DCONTRA_OBJ4"))
			{
				func_797("DCONTRA_OBJ4", 0);
			}
		}
		else
		{
			iVar2 = func_795();
			if (iVar2 != func_55())
			{
				if (unk_0x532CFF8D6B65E42F(iVar2))
				{
					if (iVar2 == iVar3)
					{
						if (!func_185("DCONTRA_OBJ3"))
						{
							func_797("DCONTRA_OBJ3", 0);
						}
					}
					else if (!func_185("DCONTRA_TOBJ3"))
					{
						iVar0 = func_285(iVar2);
						if (iVar0 > -1)
						{
							iVar1 = func_283(iVar0);
							func_784("DCONTRA_TOBJ3", "DCONTRA_CBAND", iVar1, 0);
						}
					}
				}
			}
		}
	}
}

void func_784(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_785(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312575 = 19;
		Global_1312575.f_56 = iParam2;
	}
}

int func_785(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (unk_0x3222F8FFDC06381F(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		return 0;
	}
	if (func_794(sParam0, sParam1) && Global_1312575.f_56 == Global_1312575.f_58)
	{
		return 0;
	}
	func_789();
	Global_1312575 = 3;
	StringCopy(&(Global_1312575.f_1), unk_0x49CAADAD1ABAB70A(), 32);
	Global_1312575.f_9 = unk_0x50B7853132D8438E(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	StringCopy(&(Global_1312575.f_16), sParam1, 64);
	Global_1312575.f_58 = uParam3;
	Global_1312575.f_56 = uParam3;
	func_788();
	func_787(bParam2);
	func_786();
	return 1;
}

void func_786()
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1312575.f_59), 1);
}

void func_787(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCD7E92DE2BFA0B0D(&(Global_1312575.f_59), 0);
		return;
	}
	unk_0xD804ACF2A7171150(&(Global_1312575.f_59), 0);
}

void func_788()
{
	Global_1312575.f_10 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), 86400000);
	Global_1312575.f_11 = unk_0x898811EA80D35DE2();
}

void func_789()
{
	func_791();
	func_790(0);
}

void func_790(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x27CA09C6DFAB1E79();
	Global_1312575 = 20;
	StringCopy(&(Global_1312575.f_1), "", 32);
	Global_1312575.f_9 = 0;
	if (bVar0)
	{
		Global_1312575.f_10 = unk_0x898811EA80D35DE2();
		Global_1312575.f_11 = unk_0x898811EA80D35DE2();
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

void func_791()
{
	if (!func_793())
	{
	}
	if (func_188())
	{
		unk_0x256FC007473C96F4(&(Global_1312575.f_12));
		func_792();
		unk_0xDAB2310BAD5B9F5B();
	}
}

void func_792()
{
	switch (Global_1312575)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x96577CAA1D1E72DB(Global_1312575.f_52);
			return;
		
		case 2:
			unk_0x96577CAA1D1E72DB(Global_1312575.f_52);
			unk_0x96577CAA1D1E72DB(Global_1312575.f_53);
			return;
		
		case 3:
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			return;
		
		case 4:
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 5:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			return;
		
		case 6:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			return;
		
		case 7:
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			return;
		
		case 8:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			return;
		
		case 9:
			unk_0xA9895403BC230880(&(Global_1312575.f_16));
			return;
		
		case 10:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0x50B3C23D0902259F(&(Global_1312575.f_32));
			return;
		
		case 12:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 13:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			unk_0xDBB8FCB00B701798(Global_1312575.f_57);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 11:
			unk_0xA9895403BC230880(&(Global_1312575.f_16));
			return;
		
		case 14:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 15:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0xDBB8FCB00B701798(Global_1312575.f_57);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
			return;
		
		case 17:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0x50B3C23D0902259F(&(Global_1312575.f_32));
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_48));
			return;
		
		case 16:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			return;
		
		case 19:
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
			return;
		
		case 18:
			unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
			unk_0xDBB8FCB00B701798(Global_1312575.f_56);
			unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_48));
			unk_0x50B3C23D0902259F(&(Global_1312575.f_32));
			return;
		
		default:
	}
}

int func_793()
{
	if (!func_188())
	{
		return 0;
	}
	unk_0xDDF591880CC70341(&(Global_1312575.f_12));
	func_792();
	return unk_0xD140B300704DB2C2();
}

bool func_794(char* sParam0, char* sParam1)
{
	if (!func_188())
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam1))
	{
		return 0;
	}
	if (!unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(&(Global_1312575.f_12)))
	{
		return 0;
	}
	return unk_0x50B7853132D8438E(sParam1) == unk_0x50B7853132D8438E(&(Global_1312575.f_16));
}

int func_795()
{
	int iVar0;
	
	iVar0 = func_55();
	if (Local_128.f_216 > -1)
	{
		iVar0 = unk_0xA7871E29B06DA901(Local_128.f_216);
	}
	return iVar0;
}

int func_796()
{
	var uVar0;
	var uVar1;
	
	if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_128.f_2[0 /*10*/].f_2))
		{
			uVar0 = unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2);
			if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_1))
			{
				if (!func_24(Local_128.f_2[0 /*10*/].f_1))
				{
					uVar1 = unk_0xECB7D3275586261E(Local_128.f_2[0 /*10*/].f_1);
					if (unk_0xA32DC7E16AD1DFB7(uVar1, uVar0, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0xAA55DF0CB38F413B(Local_128.f_2[1 /*10*/].f_1))
			{
				if (!func_24(Local_128.f_2[1 /*10*/].f_1))
				{
					iVar1 = unk_0xECB7D3275586261E(Local_128.f_2[1 /*10*/].f_1);
					if (unk_0xA32DC7E16AD1DFB7(iVar1, iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_797(char* sParam0, bool bParam1)
{
	if (unk_0x0BD3CCFB6C6CFA91(sParam0))
	{
		return;
	}
	if (unk_0x3222F8FFDC06381F(sParam0) > 23)
	{
		return;
	}
	if (func_186(sParam0))
	{
		return;
	}
	func_789();
	Global_1312575 = 0;
	StringCopy(&(Global_1312575.f_1), unk_0x49CAADAD1ABAB70A(), 32);
	Global_1312575.f_9 = unk_0x50B7853132D8438E(&(Global_1312575.f_1));
	StringCopy(&(Global_1312575.f_12), sParam0, 16);
	func_788();
	func_787(bParam1);
	func_786();
}

void func_798()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_1027() && !func_393())
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_751, 18))
	{
		iVar0 = func_384(unk_0x3D35F9864E4640B1());
		if (iVar0 >= 2)
		{
			unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 18);
			func_900(-1, 0, 0, -1, 0);
		}
	}
	if (!func_492())
	{
		return;
	}
	iVar1 = unk_0x43B24C247F35B6BC();
	iVar2 = unk_0x3D35F9864E4640B1();
	if (func_34(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar1 = func_394();
		iVar2 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_751, 1))
	{
		iVar0 = func_384(iVar2);
		if (iVar0 >= 2)
		{
			if (iVar1 == Local_128.f_218)
			{
				if (func_395())
				{
					if (func_821())
					{
						func_520(86, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 1);
					}
				}
				else if (func_821())
				{
					func_520(86, "BIGM_DEFEND", "BIGM_DEFEND2", 1, -1, 2);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 1);
				}
				if (unk_0x2A3398C6222EB190(iLocal_751, 1))
				{
					if (iVar2 == unk_0x3D35F9864E4640B1())
					{
						func_820(1);
					}
				}
			}
			else if (func_1028() == Local_128.f_218)
			{
				if (func_395())
				{
					if (func_799(func_816(1), "DCONTRA_TXT2", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_520(86, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2);
					}
				}
				else if (func_799(func_816(1), "DCONTRA_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_520(86, "BIGM_DEFEND", "BIGM_DEFEND4", 1, -1, 2);
				}
				if (iVar2 == unk_0x3D35F9864E4640B1())
				{
					func_820(1);
				}
				unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 1);
			}
			else
			{
				unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 1);
			}
		}
		else
		{
			unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 1);
		}
	}
}

int func_799(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0xD804ACF2A7171150(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_800(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_104439.f_27911[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0xCD7E92DE2BFA0B0D(&Global_2313, 1);
			unk_0xCD7E92DE2BFA0B0D(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_800(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xB3404E397FF56B3B(sParam14, sParam15))
	{
	}
	func_810();
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
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if (unk_0x7863191A61EF8E4A(unk_0x0031992CA618A445()))
			{
				return 0;
			}
		}
		if (Global_104439.f_13912[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x7832F791572D5809(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x7832F791572D5809(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_809() == 0)
	{
		func_807();
		return 0;
	}
	func_806(Global_16812);
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/]), sParam1, 64);
	Global_104439.f_14002[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104439.f_14002[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_104439.f_14002[Global_16812 /*104*/].f_25 = iParam7;
	Global_104439.f_14002[Global_16812 /*104*/].f_26 = uParam8;
	Global_104439.f_14002[Global_16812 /*104*/].f_29 = uParam9;
	Global_104439.f_14002[Global_16812 /*104*/].f_30 = uParam12;
	Global_104439.f_14002[Global_16812 /*104*/].f_31 = uParam11;
	Global_104439.f_14002[Global_16812 /*104*/].f_28 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_104439.f_14002[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_104439.f_14002[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x2A3398C6222EB190(Global_2313, 10))
	{
		Global_104439.f_14002[Global_16812 /*104*/].f_99[0] = 1;
		Global_104439.f_14002[Global_16812 /*104*/].f_99[1] = 1;
		Global_104439.f_14002[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_805(0);
		func_805(2);
		func_805(1);
	}
	else
	{
		func_810();
		switch (iParam16)
		{
			case 3:
				Global_104439.f_14002[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_104439.f_14002[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104439.f_14002[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104439.f_14002[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_805(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_805(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_805(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_805(3);
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
		if (unk_0x2A3398C6222EB190(Global_2313, 10))
		{
			Global_104439.f_13912[0 /*20*/].f_17 = 1;
			Global_104439.f_13912[1 /*20*/].f_17 = 1;
			Global_104439.f_13912[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104439.f_13912[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104439.f_13912[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104439.f_13912[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104439.f_13912[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_810();
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
			if (!func_516())
			{
				unk_0x18F1BFAF88AC511B(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_804(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_801(1);
			func_804(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_801(int iParam0)
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
		if (func_803(14))
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
								if (unk_0x2A3398C6222EB190(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_263(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar2);
								unk_0x1C703A54AB4B12F6();
							}
							if (Global_2455109)
							{
								if (iVar1 == 14)
								{
									func_802(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_104439.f_14002[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104439.f_14002[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104439.f_14002[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_802(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70785)
								{
									iVar4 = 0;
									iVar4 = Global_2606876;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2606877[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2606877[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2606877[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_802(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_802(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_802(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_263(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(Global_2319);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_263(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar7);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x2A3398C6222EB190(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_263(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(iVar8);
								unk_0x1C703A54AB4B12F6();
							}
							else if (iVar1 == 8)
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_263(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(42);
								unk_0x1C703A54AB4B12F6();
							}
							else if ((iVar1 == 23 && unk_0xB3404E397FF56B3B(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x2A3398C6222EB190(Global_2314, 6))
							{
								unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
								unk_0x32F9127910F63DFA(1);
								unk_0x32F9127910F63DFA(iVar0);
								unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
								unk_0x32F9127910F63DFA(0);
								func_263(&(Global_2320[iVar1 /*15*/]));
								unk_0x32F9127910F63DFA(42);
								unk_0x1C703A54AB4B12F6();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1622539.f_1;
								func_802(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_802(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_802(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
	{
		func_263(sParam7);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam8))
	{
		func_263(sParam8);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam9))
	{
		func_263(sParam9);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam10))
	{
		func_263(sParam10);
	}
	if (!unk_0x0BD3CCFB6C6CFA91(sParam11))
	{
		func_263(sParam11);
	}
	unk_0x1C703A54AB4B12F6();
}

bool func_803(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_804(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEBD23F68B1A617FC(uParam0, sParam1);
	unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x32F9127910F63DFA(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x1C703A54AB4B12F6();
}

void func_805(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104439.f_13912[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_806(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x6676AD594A1E113E();
	uVar1 = unk_0xE647A8424B4399CE();
	uVar2 = unk_0x41413FABD538FC3A();
	uVar3 = unk_0xEC3E0DDCEEBF8A00();
	uVar4 = unk_0x1A7BD52C0A88E679() + 1;
	uVar5 = unk_0x760D3328FB0F48C5();
	Global_104439.f_14002[iParam0 /*104*/].f_18 = uVar0;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104439.f_14002[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_807()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70785)
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
	Global_104439.f_14002[Global_16812 /*104*/].f_18 = -1;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_808(Global_104439.f_14002[iVar2 /*104*/].f_18, Global_104439.f_14002[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_104439.f_14002[Global_16812 /*104*/].f_24 = 1;
}

int func_808(struct<6> Param0, struct<6> Param6)
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

int func_809()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70785)
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
		if (Global_104439.f_14002[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_104439.f_14002[Global_16812 /*104*/].f_18 = -1;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104439.f_14002[iVar2 /*104*/].f_24 == 0 || Global_104439.f_14002[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_808(Global_104439.f_14002[iVar2 /*104*/].f_18, Global_104439.f_14002[Global_16812 /*104*/].f_18))
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
	Global_104439.f_14002[Global_16812 /*104*/].f_99[0] = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_99[1] = 0;
	Global_104439.f_14002[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

void func_810()
{
	if (func_803(14))
	{
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
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
		Global_14443 = func_811();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_70785)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_811()
{
	func_812();
	return Global_104439.f_2244.f_539.f_4301;
}

void func_812()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_815(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_814(unk_0x0031992CA618A445());
			if (func_813(iVar0) && (!func_803(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_813(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_813(int iParam0)
{
	return iParam0 < 3;
}

int func_814(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_815(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_815(int iParam0)
{
	if (func_813(iParam0))
	{
		return Global_104439.f_27911[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_816(bool bParam0)
{
	if (func_818(bParam0))
	{
		if (bParam0 && func_817())
		{
			Global_104439.f_27911[22 /*29*/].f_24[Global_14443] = 1;
			return 22;
		}
		else
		{
			return 75;
		}
	}
	if (bParam0 && func_817())
	{
		Global_104439.f_27911[22 /*29*/].f_24[Global_14443] = 1;
		return 22;
	}
	return 74;
}

int func_817()
{
	int iVar0;
	
	iVar0 = func_56(unk_0x3D35F9864E4640B1());
	if (((iVar0 != unk_0x3D35F9864E4640B1() && iVar0 != func_55()) && unk_0x80BA8E3CC61A8625(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_818(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = func_56(unk_0x3D35F9864E4640B1());
		if (func_817())
		{
			if (func_819(iVar0))
			{
				return 1;
			}
			return 0;
		}
	}
	return func_470(3209, -1, 0) != 0;
}

bool func_819(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 29);
}

void func_820(bool bParam0)
{
	if (bParam0)
	{
		if (!func_217(unk_0x3D35F9864E4640B1(), 9))
		{
			if (func_384(unk_0x3D35F9864E4640B1()) != 0)
			{
				func_218(9);
			}
		}
	}
	else if (func_217(unk_0x3D35F9864E4640B1(), 9))
	{
		func_216(9);
	}
}

int func_821()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_816(1);
	switch (iLocal_867)
	{
		case 0:
			sLocal_868 = func_899();
			if (func_818(1))
			{
				func_898(&uLocal_869, 3, 0, "EXECPA_MALE", 0, 1);
			}
			else
			{
				func_898(&uLocal_869, 2, 0, "EXECPA_FEMALE", 0, 1);
			}
			iLocal_867++;
			break;
		
		case 1:
			if (func_892(0, 1, 0, 1))
			{
				unk_0xCD7E92DE2BFA0B0D(&uVar1, 4);
				if (func_822(&uLocal_869, iVar0, "EXCALAU", sLocal_868, uVar1, 0))
				{
					iLocal_867++;
					return 1;
				}
			}
			break;
		
		case 2:
			break;
	}
	return 0;
}

int func_822(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_890())
	{
		return 0;
	}
	if (func_889())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_823(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_823(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x0BD3CCFB6C6CFA91(sParam2))
	{
		return 0;
	}
	if (unk_0x3222F8FFDC06381F(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x0BD3CCFB6C6CFA91(sParam3))
	{
		return 0;
	}
	if (unk_0x3222F8FFDC06381F(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A());
	iVar1 = func_888(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x0BD3CCFB6C6CFA91(iParam7))
	{
		iVar2 = unk_0x50B7853132D8438E(iParam7);
	}
	if (func_887(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_882(uParam6))
	{
		return 0;
	}
	if (func_879(iVar0, iVar1, iVar2))
	{
		if (func_878())
		{
			return 0;
		}
		func_877();
		return func_830(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_829(iParam4))
	{
		return 0;
	}
	func_824(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_824(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1348168.f_40.f_1 = iParam0;
	Global_1348168.f_40.f_2 = iParam1;
	Global_1348168.f_40.f_3 = iParam2;
	StringCopy(&(Global_1348168.f_40.f_4), sParam3, 16);
	Global_1348168.f_40.f_8 = iParam4;
	Global_1348168.f_40.f_9 = iParam5;
	Global_1348168.f_40.f_14 = uParam6;
	func_825(iParam4);
	func_877();
	Global_1348168.f_40.f_13 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), 7000);
}

void func_825(int iParam0)
{
	if (func_828(iParam0))
	{
		func_827();
		return;
	}
	func_826();
}

void func_826()
{
	Global_1348168.f_40.f_10 = 0;
}

void func_827()
{
	Global_1348168.f_40.f_10 = 1;
}

int func_828(int iParam0)
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

bool func_829(int iParam0)
{
	return iParam0 > Global_1348168.f_40.f_8;
}

int func_830(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_876();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_873(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_870(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_873(uParam0, sParam3, sParam4);
		}
		return func_854(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_853(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_849(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_848(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_831(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_831(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_847();
	bVar0 = true;
	if (func_833(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_832(120000);
		return 1;
	}
	return 0;
}

void func_832(int iParam0)
{
	Global_1348168.f_40.f_11 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), iParam0);
	Global_1348168.f_40.f_12 = 1;
}

int func_833(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0x06D7899D9C1F422F(iVar0);
		iVar1 = func_294(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xBE8EFD00E9670F53(unk_0x898811EA80D35DE2(), Global_1348168.f_40.f_13))
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
	sVar4 = func_846(uParam5, bParam6, &iVar3);
	uVar5 = func_844(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x0BD3CCFB6C6CFA91(sParam8))
	{
		iVar6++;
		if (!unk_0x0BD3CCFB6C6CFA91(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xB3404E397FF56B3B(sVar4, " "))
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
		if (unk_0x2A3398C6222EB190(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x2A3398C6222EB190(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x0BD3CCFB6C6CFA91(sVar2))
	{
		bVar12 = func_843(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_837(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(iParam4, 0))
	{
		func_836();
	}
	func_847();
	func_835();
	func_834();
	return 1;
}

void func_834()
{
	Global_1348168.f_57 = 0;
	Global_1348168.f_57.f_1 = 0;
}

void func_835()
{
	Global_1348168.f_40 = 3;
}

void func_836()
{
	unk_0xCD7E92DE2BFA0B0D(&Global_2313, 8);
}

int func_837(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_838(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0xCD7E92DE2BFA0B0D(&Global_2608142, 0);
		}
		return 1;
	}
	return 0;
}

int func_838(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0xB3404E397FF56B3B(sParam14, sParam15))
	{
	}
	func_810();
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
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if (unk_0x7863191A61EF8E4A(unk_0x0031992CA618A445()))
			{
				return 0;
			}
		}
		if (Global_2608127 == 1)
		{
			return 0;
		}
		if (unk_0x7832F791572D5809(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x7832F791572D5809(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_842() == 0)
	{
		func_840();
		return 0;
	}
	func_839(Global_2608126);
	StringCopy(&(Global_2606877[Global_2608126 /*104*/]), sParam1, 64);
	Global_2606877[Global_2608126 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2606877[Global_2608126 /*104*/].f_24 = iParam2;
	}
	Global_2606877[Global_2608126 /*104*/].f_25 = iParam7;
	Global_2606877[Global_2608126 /*104*/].f_26 = uParam8;
	Global_2606877[Global_2608126 /*104*/].f_29 = uParam9;
	Global_2606877[Global_2608126 /*104*/].f_30 = uParam12;
	Global_2606877[Global_2608126 /*104*/].f_31 = uParam11;
	Global_2606877[Global_2608126 /*104*/].f_28 = 0;
	Global_2606877[Global_2608126 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2606877[Global_2608126 /*104*/].f_33), sParam4, 64);
	Global_2606877[Global_2608126 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2606877[Global_2608126 /*104*/].f_50), sParam5, 64);
	Global_2606877[Global_2608126 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2606877[Global_2608126 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2606877[Global_2608126 /*104*/].f_83), sParam15, 64);
	func_810();
	switch (iParam16)
	{
		case 3:
			Global_2606877[Global_2608126 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2606877[Global_2608126 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2606877[Global_2608126 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2606877[Global_2608126 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_805(0);
				break;
			
			case 1:
				func_805(1);
				break;
			
			case 2:
				func_805(2);
				break;
			
			case 3:
				func_805(3);
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
				Global_2608127 = 1;
				break;
			
			case 0:
				Global_2608127 = 1;
				break;
			
			case 2:
				Global_2608127 = 1;
				break;
			
			case 1:
				Global_2608127 = 1;
				break;
			}
	}
	Global_16814[Global_2608126] = 0;
	if (bParam10)
	{
		func_810();
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
			if (!func_516())
			{
				unk_0x18F1BFAF88AC511B(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_804(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_801(1);
			func_804(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_839(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x6676AD594A1E113E();
	uVar1 = unk_0xE647A8424B4399CE();
	uVar2 = unk_0x41413FABD538FC3A();
	uVar3 = unk_0xEC3E0DDCEEBF8A00();
	uVar4 = unk_0x1A7BD52C0A88E679() + 1;
	uVar5 = unk_0x760D3328FB0F48C5();
	Global_2606877[iParam0 /*104*/].f_18 = uVar0;
	Global_2606877[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2606877[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2606877[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2606877[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2606877[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_840()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2608126 = 11;
	Global_2606877[Global_2608126 /*104*/].f_18 = -1;
	Global_2606877[Global_2608126 /*104*/].f_18.f_1 = 0;
	Global_2606877[Global_2608126 /*104*/].f_18.f_2 = 0;
	Global_2606877[Global_2608126 /*104*/].f_18.f_3 = 0;
	Global_2606877[Global_2608126 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_841(Global_2606877[iVar2 /*104*/].f_18, Global_2606877[Global_2608126 /*104*/].f_18))
		{
			Global_2608126 = iVar2;
		}
		iVar2++;
	}
	Global_2606877[Global_2608126 /*104*/].f_24 = 1;
}

int func_841(struct<6> Param0, struct<6> Param6)
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

int func_842()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2606877[iVar2 /*104*/].f_24 == 0)
		{
			Global_2608126 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2608126 = 11;
	Global_2606877[Global_2608126 /*104*/].f_18 = -1;
	Global_2606877[Global_2608126 /*104*/].f_18.f_1 = 0;
	Global_2606877[Global_2608126 /*104*/].f_18.f_2 = 0;
	Global_2606877[Global_2608126 /*104*/].f_18.f_3 = 0;
	Global_2606877[Global_2608126 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2606877[iVar2 /*104*/].f_24 == 0 || Global_2606877[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_841(Global_2606877[iVar2 /*104*/].f_18, Global_2606877[Global_2608126 /*104*/].f_18))
			{
				Global_2608126 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2608126 == 11)
	{
		return 0;
	}
	Global_2606877[Global_2608126 /*104*/].f_99[0] = 0;
	Global_2606877[Global_2608126 /*104*/].f_99[1] = 0;
	Global_2606877[Global_2608126 /*104*/].f_99[2] = 0;
	return 1;
}

int func_843(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_838(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0xCD7E92DE2BFA0B0D(&Global_2608142, 0);
		}
		return 1;
	}
	return 0;
}

int func_844(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_845(2, iParam1);
	return iParam0;
}

void func_845(int iParam0, var uParam1)
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

var func_846(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x0BD3CCFB6C6CFA91(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0xB3404E397FF56B3B(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_845(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xC0D54565FC1032F4(sParam0);
}

void func_847()
{
	Global_1348168.f_40.f_9 = 4;
}

int func_848(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_847();
	bVar0 = false;
	return func_833(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_849(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_850(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_850(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0x06D7899D9C1F422F(iVar0);
		iVar1 = func_294(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xBE8EFD00E9670F53(unk_0x898811EA80D35DE2(), Global_1348168.f_40.f_13))
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
	sVar4 = func_846(uParam5, bParam6, &iVar3);
	uVar5 = func_844(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x0BD3CCFB6C6CFA91(sParam8))
	{
		iVar6++;
		if (!unk_0x0BD3CCFB6C6CFA91(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0xB3404E397FF56B3B(sVar4, " "))
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
		if (unk_0x2A3398C6222EB190(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x2A3398C6222EB190(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x0BD3CCFB6C6CFA91(sVar2))
	{
		bVar12 = func_852(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_799(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x2A3398C6222EB190(iParam4, 0))
	{
		func_836();
	}
	func_851();
	func_835();
	func_834();
	return 1;
}

void func_851()
{
	Global_1348168.f_40.f_9 = 3;
}

int func_852(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0xD804ACF2A7171150(&Global_2313, 10);
	iVar0 = 3;
	if (func_800(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_104439.f_27911[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0xCD7E92DE2BFA0B0D(&Global_2313, 1);
			unk_0xCD7E92DE2BFA0B0D(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_853(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
	}
	if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
	{
		return 0;
	}
	func_851();
	bVar0 = true;
	if (func_850(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_832(120000);
		return 1;
	}
	return 0;
}

int func_854(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x2A3398C6222EB190(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x2A3398C6222EB190(iParam4, 4))
	{
		bVar0 = func_869(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_860(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x2A3398C6222EB190(iParam4, 3))
		{
			func_859(1);
		}
		if (unk_0x2A3398C6222EB190(iParam4, 5))
		{
			func_858(1);
		}
		func_857();
		func_835();
		func_856();
		func_855();
		return 1;
	}
	return 0;
}

void func_855()
{
	Global_2510108 = 0;
}

void func_856()
{
	Global_1348168.f_57 = 1;
	Global_1348168.f_57.f_1 = 0;
}

void func_857()
{
	Global_1348168.f_40.f_9 = 1;
}

void func_858(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2315, 0);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2315, 0);
	}
}

void func_859(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCD7E92DE2BFA0B0D(&Global_2313, 20);
	}
	else
	{
		unk_0xD804ACF2A7171150(&Global_2313, 20);
	}
}

int func_860(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_868(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_861(sParam3, iParam4, bParam7);
}

int func_861(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x683F0CB6CA4C99D0(0);
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
					func_867();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x0065EA0CBFB686EA())
		{
			return 0;
		}
		if (func_368(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_866();
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
			unk_0xD804ACF2A7171150(&Global_2313, 20);
			unk_0xD804ACF2A7171150(&Global_2314, 17);
			unk_0xD804ACF2A7171150(&Global_2315, 0);
			if (bParam2)
			{
				func_810();
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
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (func_865())
				{
					return 0;
				}
				if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0x01A6FADA5CA10AE3(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xC3061CDBCFB63D2A(unk_0x0031992CA618A445(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70785)
				{
					if (unk_0x7019CC495F72B3AC(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
					if (unk_0x4409826A2E8B7CC7(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
				}
			}
			if (func_864())
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
				if (unk_0x2A3398C6222EB190(Global_2313, 9))
				{
					return 0;
				}
			}
			func_863();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_862();
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
		func_867();
	}
	return 0;
}

void func_862()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x683F0CB6CA4C99D0(0);
	Global_15745 = 1;
}

void func_863()
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
	unk_0xD804ACF2A7171150(&Global_2314, 16);
}

int func_864()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_865()
{
	int iVar0;
	int iVar1;
	
	if (Global_70785)
	{
		iVar0 = 0;
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar1, 1);
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5DA901F6AE7EB392() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x185D897EBE6F16F4(unk_0x0031992CA618A445(), 78, 1))
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

void func_866()
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

void func_867()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if ((unk_0xCAD6D8C85D0F329B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(1);
		Global_15745 = 6;
		return;
	}
}

void func_868(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_869(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_868(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_861(sParam3, iParam4, bParam7);
}

int func_870(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
	}
	if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
	{
		return 0;
	}
	if (func_872(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_871();
		func_857();
		func_835();
		func_856();
		func_855();
		return 1;
	}
	return 0;
}

void func_871()
{
	Global_16763 = 0;
}

bool func_872(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_868(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_861(sParam3, iParam4, bParam8);
}

int func_873(var uParam0, char* sParam1, char* sParam2)
{
	if (func_875(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_874();
		func_835();
		func_856();
		return 1;
	}
	return 0;
}

void func_874()
{
	Global_1348168.f_40.f_9 = 2;
}

bool func_875(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_868(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_861(sParam2, iParam3, 0);
}

void func_876()
{
	Global_1348168.f_55 = Global_1348168.f_40.f_1;
	Global_1348168.f_55.f_1 = Global_1348168.f_40.f_10;
}

void func_877()
{
	Global_1348168.f_40 = 1;
}

bool func_878()
{
	return Global_1348168.f_40 == 1;
}

int func_879(int iParam0, int iParam1, int iParam2)
{
	if (!func_880(iParam0))
	{
		return 0;
	}
	if (Global_1348168.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1348168.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_880(int iParam0)
{
	if (!func_881())
	{
		return 0;
	}
	if (!Global_1348168.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_881()
{
	if (Global_1348168.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_882(int iParam0)
{
	if (func_886())
	{
		return 0;
	}
	if (func_885())
	{
		return 0;
	}
	if (func_884(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1767039 || func_496())
	{
		return 0;
	}
	if (!unk_0x2A3398C6222EB190(uParam0, 6))
	{
		if (func_883())
		{
			return 0;
		}
	}
	return 1;
}

bool func_883()
{
	return unk_0xBE8EFD00E9670F53(unk_0x898811EA80D35DE2(), Global_1364754);
}

int func_884(int iParam0)
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

bool func_885()
{
	return Global_1348168.f_40 == 3;
}

bool func_886()
{
	return func_864();
}

int func_887(int iParam0, int iParam1, int iParam2)
{
	if (!func_885())
	{
		return 0;
	}
	return func_879(iParam0, iParam1, iParam2);
}

int func_888(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x50B7853132D8438E(&cVar0);
}

bool func_889()
{
	return Global_2507625.f_1;
}

int func_890()
{
	if (Global_1348356.f_2)
	{
		return 1;
	}
	return func_891();
}

bool func_891()
{
	return func_886();
}

int func_892(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x068C69D0643C4B95())
	{
		return 0;
	}
	if (func_897())
	{
		return 0;
	}
	if (!unk_0xF9FC07CC13402AEF())
	{
		return 0;
	}
	if (func_374())
	{
		return 0;
	}
	if (func_517())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_97(unk_0x3D35F9864E4640B1(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_896(unk_0x3D35F9864E4640B1()))
		{
			return 0;
		}
	}
	if (func_895())
	{
		return 0;
	}
	if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		return 0;
	}
	if (unk_0x957E53BB191CB24D())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
		{
			return 0;
		}
	}
	if (Global_1574109)
	{
		return 0;
	}
	if (func_894())
	{
		return 0;
	}
	if (func_893())
	{
		return 0;
	}
	if (func_367())
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (Global_2510592)
	{
		return 0;
	}
	return 1;
}

bool func_893()
{
	return Global_2445582.f_572;
}

bool func_894()
{
	return Global_2445582.f_724;
}

bool func_895()
{
	return Global_2434915.f_2792.f_578;
}

int func_896(int iParam0)
{
	if (Global_2422142[iParam0 /*399*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

int func_897()
{
	if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
	{
		return 1;
	}
	return 0;
}

void func_898(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9C8949CB342B3559(iParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(iParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(iParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(iParam2, 1);
			}
		}
	}
}

char* func_899()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = !func_818(1);
	iVar1 = unk_0x3AF262D7332EEDF5(0, 3);
	if (!func_395())
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

void func_900(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_213(unk_0x3D35F9864E4640B1());
	if (iParam2 || func_413(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1779238 = iVar0;
		if (func_505(iVar0))
		{
			Global_1779238.f_1 = 4;
		}
		else if (func_504(iVar0))
		{
			Global_1779238.f_1 = 5;
		}
		else if (func_315(iVar0, 0))
		{
			Global_1779238.f_1 = 2;
			if (func_554(iVar0))
			{
				Global_1779238.f_1 = 3;
			}
		}
		else
		{
			Global_1779238.f_1 = 1;
		}
		if (func_580() != func_55())
		{
			Global_1779238.f_4 = func_761(func_580());
			Global_1779238.f_5 = func_760(func_580());
		}
		if (func_344() != func_55())
		{
			func_579(func_344(), &(Global_1779238.f_6), &(Global_1779238.f_7));
		}
		Global_1779238.f_9 = unk_0x6239D1A379D387A4();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1779238.f_27 = 1;
			Global_1779238.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1779238.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1779238.f_40 = func_574(iParam1);
			Global_1779238.f_41 = func_920();
			Global_1779238.f_42 = func_684(unk_0x3D35F9864E4640B1(), iParam1);
			Global_1779238.f_44 = func_756(unk_0x3D35F9864E4640B1(), iParam1);
		}
	}
	else if (func_502(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1779353 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1779353 = iParam0 + 1;
		}
		else
		{
			Global_1779353 = func_919(unk_0x3D35F9864E4640B1());
		}
		switch (iVar0)
		{
			case 225:
				if (func_918(unk_0x3D35F9864E4640B1()) == 0)
				{
					Global_1779353.f_1 = 0;
				}
				else
				{
					Global_1779353.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1779353.f_1 = 2;
				break;
			
			case 227:
				Global_1779353.f_1 = 3;
				break;
		}
		Global_1779353.f_21 = 1;
		Global_1779353.f_22 = 1;
		if (func_580() != func_55())
		{
			Global_1779353.f_4 = func_761(func_580());
			Global_1779353.f_5 = func_760(func_580());
		}
		if (func_344() != func_55())
		{
			func_579(func_344(), &(Global_1779353.f_4), &(Global_1779353.f_5));
		}
		Global_1779353.f_8 = unk_0x6239D1A379D387A4();
		if (iParam0 != -1)
		{
			Global_1779353.f_20 = iParam0;
		}
	}
	else if (func_417(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1779291 = iVar0;
		Global_1779238.f_1 = 1;
		if (func_580() != func_55())
		{
			Global_1779291.f_4 = func_761(func_580());
			Global_1779291.f_5 = func_760(func_580());
		}
		if (func_344() != func_55())
		{
			func_579(func_344(), &(Global_1779291.f_6), &(Global_1779291.f_7));
		}
		Global_1779291.f_9 = unk_0x6239D1A379D387A4();
		if (iParam0 != -1)
		{
			Global_1779291.f_21 = iParam0;
		}
	}
	else if (func_500(iVar0))
	{
		Global_1779396 = iVar0;
		Global_1779396.f_1 = iParam0;
		Global_1779396.f_21 = 1;
		Global_1779396.f_22 = 1;
		if (func_580() != func_55())
		{
			Global_1779396.f_4 = func_761(func_580());
			Global_1779396.f_5 = func_760(func_580());
		}
		if (func_344() != func_55())
		{
			func_579(func_344(), &(Global_1779396.f_4), &(Global_1779396.f_5));
		}
		Global_1779396.f_8 = unk_0x6239D1A379D387A4();
		if (iParam0 != -1)
		{
			Global_1779396.f_20 = iParam0;
		}
		Global_1779396.f_27 = func_748(func_36(), 5);
		Global_1779396.f_28 = func_745(func_663(unk_0x3D35F9864E4640B1()));
		Global_1779396.f_29 = func_470(6086, -1, 0);
		Global_1779396.f_30 = func_470(6082, -1, 0);
		Global_1779396.f_31 = func_470(6083, -1, 0);
		Global_1779396.f_32 = func_470(6085, -1, 0);
		Global_1779396.f_33 = func_470(6084, -1, 0);
		Global_1779396.f_34 = func_470(6087, -1, 0);
		Global_1779396.f_7 = func_750();
		Global_1779396.f_51 = func_745(bParam4);
	}
	else
	{
		if (func_580() != func_55())
		{
			Global_1779220 = func_761(func_580());
			Global_1779220.f_1 = func_760(func_580());
		}
		Global_1779220.f_5 = unk_0x6239D1A379D387A4();
		Global_1779220.f_13 = func_917();
		Global_1779220.f_15 = 0;
		if (func_578(1))
		{
			if (func_344() == func_580())
			{
				Global_1779220.f_15 = 1;
			}
		}
		if (func_916())
		{
			Global_1779353.f_28 = 1;
		}
		if ((func_915() || func_914()) || func_913())
		{
			Global_1779353.f_30 = 1;
		}
		if (func_911(func_912(joaat("trailersmall2"))))
		{
			Global_1779353.f_32 = 1;
		}
		if (func_904(func_910(joaat("caddy"))))
		{
			Global_1779353.f_31 = 1;
		}
		if (func_747(unk_0x3D35F9864E4640B1()) || func_746(unk_0x3D35F9864E4640B1()))
		{
			Global_1779353.f_29 = 1;
		}
		if (func_742(unk_0x3D35F9864E4640B1()))
		{
			Global_1779353.f_33 = 1;
			Global_1779353.f_34 = 1;
		}
		if (func_743(unk_0x3D35F9864E4640B1()))
		{
			Global_1779353.f_36 = 1;
		}
		if (func_740(0, unk_0x3D35F9864E4640B1()) == 1)
		{
			Global_1779353.f_35 = 1;
		}
		if (func_903(unk_0x3D35F9864E4640B1(), 3, &uVar1))
		{
			Global_1779353.f_37 = 1;
		}
		if (func_903(unk_0x3D35F9864E4640B1(), 7, &uVar1))
		{
			Global_1779353.f_38 = 1;
		}
		if (func_902(unk_0x3D35F9864E4640B1()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_901(unk_0x3D35F9864E4640B1(), iVar2);
				if (func_681(unk_0x3D35F9864E4640B1(), iVar3, 0))
				{
					Global_1779353.f_39 = 1;
				}
				if (func_681(unk_0x3D35F9864E4640B1(), iVar3, 2))
				{
					Global_1779353.f_40 = 1;
				}
				if (func_681(unk_0x3D35F9864E4640B1(), iVar3, 1))
				{
					Global_1779353.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_901(int iParam0, int iParam1)
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
	if (func_677(Global_1593076[iParam0 /*647*/].f_259.f_154[iParam1 /*12*/]))
	{
		uVar0 = Global_1593076[iParam0 /*647*/].f_259.f_154[iParam1 /*12*/];
	}
	return uVar0;
}

int func_902(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_903(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_55())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_740(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_904(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_909(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_724(11));
		func_723(iVar1, &iVar0, 1);
		iVar2 = func_909(func_906(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_470(func_905(4, iVar0), -1, 0);
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

int func_905(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
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
			switch (iParam1)
			{
				case 159:
					return 5904;
				
				case 160:
					return 5911;
				
				case 161:
					return 5918;
				
				case 162:
					return 5925;
				
				case 163:
					return 5932;
				
				case 164:
					return 5939;
				
				case 165:
					return 5946;
				
				case 166:
					return 5953;
				
				case 167:
					return 5960;
				
				case 168:
					return 5967;
				
				case 169:
					return 5974;
				
				case 170:
					return 5981;
				
				case 171:
					return 5988;
				
				case 172:
					return 5995;
				
				case 173:
					return 6002;
				
				case 174:
					return 6009;
				
				case 175:
					return 6016;
				
				case 176:
					return 6023;
				
				case 177:
					return 6030;
				
				case 178:
					return 6037;
				
				case 179:
					return 6044;
				
				case 180:
					return 6051;
				
				case 181:
					return 6058;
				
				case 182:
					return 6065;
				
				case 183:
					return 6072;
				
				default:
			}
			break;
		
		case 2:
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
					return 4107;
				
				case 101:
					return 4115;
				
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
					return 4267;
				
				case 121:
					return 4275;
				
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
					return 4427;
				
				case 141:
					return 4435;
				
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
			switch (iParam1)
			{
				case 159:
					return 5905;
				
				case 160:
					return 5912;
				
				case 161:
					return 5919;
				
				case 162:
					return 5926;
				
				case 163:
					return 5933;
				
				case 164:
					return 5940;
				
				case 165:
					return 5947;
				
				case 166:
					return 5954;
				
				case 167:
					return 5961;
				
				case 168:
					return 5968;
				
				case 169:
					return 5975;
				
				case 170:
					return 5982;
				
				case 171:
					return 5989;
				
				case 172:
					return 5996;
				
				case 173:
					return 6003;
				
				case 174:
					return 6010;
				
				case 175:
					return 6017;
				
				case 176:
					return 6024;
				
				case 177:
					return 6031;
				
				case 178:
					return 6038;
				
				case 179:
					return 6045;
				
				case 180:
					return 6052;
				
				case 181:
					return 6059;
				
				case 182:
					return 6066;
				
				case 183:
					return 6073;
				
				default:
			}
			break;
		
		case 3:
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
					return 4108;
				
				case 101:
					return 4116;
				
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
					return 4268;
				
				case 121:
					return 4276;
				
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
					return 4428;
				
				case 141:
					return 4436;
				
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
			switch (iParam1)
			{
				case 159:
					return 5906;
				
				case 160:
					return 5913;
				
				case 161:
					return 5920;
				
				case 162:
					return 5927;
				
				case 163:
					return 5934;
				
				case 164:
					return 5941;
				
				case 165:
					return 5948;
				
				case 166:
					return 5955;
				
				case 167:
					return 5962;
				
				case 168:
					return 5969;
				
				case 169:
					return 5976;
				
				case 170:
					return 5983;
				
				case 171:
					return 5990;
				
				case 172:
					return 5997;
				
				case 173:
					return 6004;
				
				case 174:
					return 6011;
				
				case 175:
					return 6018;
				
				case 176:
					return 6025;
				
				case 177:
					return 6032;
				
				case 178:
					return 6039;
				
				case 179:
					return 6046;
				
				case 180:
					return 6053;
				
				case 181:
					return 6060;
				
				case 182:
					return 6067;
				
				case 183:
					return 6074;
				
				default:
			}
			break;
		
		case 4:
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
					return 3321;
				
				case 78:
					return 3329;
				
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
			switch (iParam1)
			{
				case 159:
					return 5907;
				
				case 160:
					return 5914;
				
				case 161:
					return 5921;
				
				case 162:
					return 5928;
				
				case 163:
					return 5935;
				
				case 164:
					return 5942;
				
				case 165:
					return 5949;
				
				case 166:
					return 5956;
				
				case 167:
					return 5963;
				
				case 168:
					return 5970;
				
				case 169:
					return 5977;
				
				case 170:
					return 5984;
				
				case 171:
					return 5991;
				
				case 172:
					return 5998;
				
				case 173:
					return 6005;
				
				case 174:
					return 6012;
				
				case 175:
					return 6019;
				
				case 176:
					return 6026;
				
				case 177:
					return 6033;
				
				case 178:
					return 6040;
				
				case 179:
					return 6047;
				
				case 180:
					return 6054;
				
				case 181:
					return 6061;
				
				case 182:
					return 6068;
				
				case 183:
					return 6075;
				
				default:
			}
			break;
		
		case 5:
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
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
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
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
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
				
				case 49:
					return 2889;
				
				case 50:
					return 2895;
				
				case 51:
					return 2901;
				
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
				
				case 62:
					return 3013;
				
				case 63:
					return 3019;
				
				case 64:
					return 3025;
				
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
					return 3322;
				
				case 78:
					return 3330;
				
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
					return 4014;
				
				case 89:
					return 4022;
				
				case 90:
					return 4030;
				
				case 91:
					return 4038;
				
				case 92:
					return 4046;
				
				case 93:
					return 4054;
				
				case 94:
					return 4062;
				
				case 95:
					return 4070;
				
				case 96:
					return 4078;
				
				case 97:
					return 4086;
				
				case 98:
					return 4094;
				
				case 99:
					return 4102;
				
				case 100:
					return 4110;
				
				case 101:
					return 4118;
				
				case 102:
					return 4126;
				
				case 103:
					return 4134;
				
				case 104:
					return 4142;
				
				case 105:
					return 4150;
				
				case 106:
					return 4158;
				
				case 107:
					return 4166;
				
				case 108:
					return 4174;
				
				case 109:
					return 4182;
				
				case 110:
					return 4190;
				
				case 111:
					return 4198;
				
				case 112:
					return 4206;
				
				case 113:
					return 4214;
				
				case 114:
					return 4222;
				
				case 115:
					return 4230;
				
				case 116:
					return 4238;
				
				case 117:
					return 4246;
				
				case 118:
					return 4254;
				
				case 119:
					return 4262;
				
				case 120:
					return 4270;
				
				case 121:
					return 4278;
				
				case 122:
					return 4286;
				
				case 123:
					return 4294;
				
				case 124:
					return 4302;
				
				case 125:
					return 4310;
				
				case 126:
					return 4318;
				
				case 127:
					return 4326;
				
				case 128:
					return 4334;
				
				case 129:
					return 4342;
				
				case 130:
					return 4350;
				
				case 131:
					return 4358;
				
				case 132:
					return 4366;
				
				case 133:
					return 4374;
				
				case 134:
					return 4382;
				
				case 135:
					return 4390;
				
				case 136:
					return 4398;
				
				case 137:
					return 4406;
				
				case 138:
					return 4414;
				
				case 139:
					return 4422;
				
				case 140:
					return 4430;
				
				case 141:
					return 4438;
				
				case 142:
					return 4446;
				
				case 143:
					return 4454;
				
				case 144:
					return 4462;
				
				case 145:
					return 4470;
				
				case 146:
					return 4478;
				
				case 147:
					return 4486;
				
				case 148:
					return 4494;
				
				case 149:
					return 4502;
				
				case 150:
					return 4510;
				
				case 151:
					return 4518;
				
				case 152:
					return 4526;
				
				case 153:
					return 4534;
				
				case 154:
					return 4542;
				
				case 155:
					return 4550;
				
				case 156:
					return 4558;
				
				case 157:
					return 4566;
				
				case 158:
					return 5459;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5908;
				
				case 160:
					return 5915;
				
				case 161:
					return 5922;
				
				case 162:
					return 5929;
				
				case 163:
					return 5936;
				
				case 164:
					return 5943;
				
				case 165:
					return 5950;
				
				case 166:
					return 5957;
				
				case 167:
					return 5964;
				
				case 168:
					return 5971;
				
				case 169:
					return 5978;
				
				case 170:
					return 5985;
				
				case 171:
					return 5992;
				
				case 172:
					return 5999;
				
				case 173:
					return 6006;
				
				case 174:
					return 6013;
				
				case 175:
					return 6020;
				
				case 176:
					return 6027;
				
				case 177:
					return 6034;
				
				case 178:
					return 6041;
				
				case 179:
					return 6048;
				
				case 180:
					return 6055;
				
				case 181:
					return 6062;
				
				case 182:
					return 6069;
				
				case 183:
					return 6076;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 39:
					return 2821;
				
				case 40:
					return 2828;
				
				case 41:
					return 2835;
				
				case 42:
					return 2842;
				
				case 43:
					return 2849;
				
				case 44:
					return 2856;
				
				case 45:
					return 2863;
				
				case 46:
					return 2870;
				
				case 47:
					return 2877;
				
				case 48:
					return 2884;
				
				case 52:
					return 2945;
				
				case 53:
					return 2952;
				
				case 54:
					return 2959;
				
				case 55:
					return 2966;
				
				case 56:
					return 2973;
				
				case 57:
					return 2980;
				
				case 58:
					return 2987;
				
				case 59:
					return 2994;
				
				case 60:
					return 3001;
				
				case 61:
					return 3008;
				
				case 65:
					return 3229;
				
				case 66:
					return 3237;
				
				case 67:
					return 3245;
				
				case 68:
					return 3253;
				
				case 69:
					return 3261;
				
				case 70:
					return 3269;
				
				case 71:
					return 3277;
				
				case 72:
					return 3285;
				
				case 73:
					return 3293;
				
				case 74:
					return 3301;
				
				case 75:
					return 3309;
				
				case 76:
					return 3317;
				
				case 77:
					return 3325;
				
				case 78:
					return 3333;
				
				case joaat("mpsv_lp0_31"):
					return 3341;
				
				case 80:
					return 3349;
				
				case 81:
					return 3357;
				
				case 82:
					return 3365;
				
				case 83:
					return 3373;
				
				case 84:
					return 3381;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4017;
				
				case 89:
					return 4025;
				
				case 90:
					return 4033;
				
				case 91:
					return 4041;
				
				case 92:
					return 4049;
				
				case 93:
					return 4057;
				
				case 94:
					return 4065;
				
				case 95:
					return 4073;
				
				case 96:
					return 4081;
				
				case 97:
					return 4089;
				
				case 98:
					return 4097;
				
				case 99:
					return 4105;
				
				case 100:
					return 4113;
				
				case 101:
					return 4121;
				
				case 102:
					return 4129;
				
				case 103:
					return 4137;
				
				case 104:
					return 4145;
				
				case 105:
					return 4153;
				
				case 106:
					return 4161;
				
				case 107:
					return 4169;
				
				case 108:
					return 4177;
				
				case 109:
					return 4185;
				
				case 110:
					return 4193;
				
				case 111:
					return 4201;
				
				case 112:
					return 4209;
				
				case 113:
					return 4217;
				
				case 114:
					return 4225;
				
				case 115:
					return 4233;
				
				case 116:
					return 4241;
				
				case 117:
					return 4249;
				
				case 118:
					return 4257;
				
				case 119:
					return 4265;
				
				case 120:
					return 4273;
				
				case 121:
					return 4281;
				
				case 122:
					return 4289;
				
				case 123:
					return 4297;
				
				case 124:
					return 4305;
				
				case 125:
					return 4313;
				
				case 126:
					return 4321;
				
				case 127:
					return 4329;
				
				case 128:
					return 4337;
				
				case 129:
					return 4345;
				
				case 130:
					return 4353;
				
				case 131:
					return 4361;
				
				case 132:
					return 4369;
				
				case 133:
					return 4377;
				
				case 134:
					return 4385;
				
				case 135:
					return 4393;
				
				case 136:
					return 4401;
				
				case 137:
					return 4409;
				
				case 138:
					return 4417;
				
				case 139:
					return 4425;
				
				case 140:
					return 4433;
				
				case 141:
					return 4441;
				
				case 142:
					return 4449;
				
				case 143:
					return 4457;
				
				case 144:
					return 4465;
				
				case 145:
					return 4473;
				
				case 146:
					return 4481;
				
				case 147:
					return 4489;
				
				case 148:
					return 4497;
				
				case 149:
					return 4505;
				
				case 150:
					return 4513;
				
				case 151:
					return 4521;
				
				case 152:
					return 4529;
				
				case 153:
					return 4537;
				
				case 154:
					return 4545;
				
				case 155:
					return 4553;
				
				case 156:
					return 4561;
				
				case 157:
					return 4569;
				
				case 158:
					return 5462;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5910;
				
				case 160:
					return 5917;
				
				case 161:
					return 5924;
				
				case 162:
					return 5931;
				
				case 163:
					return 5938;
				
				case 164:
					return 5945;
				
				case 165:
					return 5952;
				
				case 166:
					return 5959;
				
				case 167:
					return 5966;
				
				case 168:
					return 5973;
				
				case 169:
					return 5980;
				
				case 170:
					return 5987;
				
				case 171:
					return 5994;
				
				case 172:
					return 6001;
				
				case 173:
					return 6008;
				
				case 174:
					return 6015;
				
				case 175:
					return 6022;
				
				case 176:
					return 6029;
				
				case 177:
					return 6036;
				
				case 178:
					return 6043;
				
				case 179:
					return 6050;
				
				case 180:
					return 6057;
				
				case 181:
					return 6064;
				
				case 182:
					return 6071;
				
				case 183:
					return 6078;
				
				default:
			}
			break;
		
		case 7:
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
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2820;
				
				case 40:
					return 2827;
				
				case 41:
					return 2834;
				
				case 42:
					return 2841;
				
				case 43:
					return 2848;
				
				case 44:
					return 2855;
				
				case 45:
					return 2862;
				
				case 46:
					return 2869;
				
				case 47:
					return 2876;
				
				case 48:
					return 2883;
				
				case 49:
					return 2890;
				
				case 50:
					return 2896;
				
				case 51:
					return 2902;
				
				case 52:
					return 2944;
				
				case 53:
					return 2951;
				
				case 54:
					return 2958;
				
				case 55:
					return 2965;
				
				case 56:
					return 2972;
				
				case 57:
					return 2979;
				
				case 58:
					return 2986;
				
				case 59:
					return 2993;
				
				case 60:
					return 3000;
				
				case 61:
					return 3007;
				
				case 62:
					return 3014;
				
				case 63:
					return 3020;
				
				case 64:
					return 3026;
				
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
					return 3324;
				
				case 78:
					return 3332;
				
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
				
				case 85:
					return 3387;
				
				case 86:
					return 3394;
				
				case 87:
					return 3401;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4015;
				
				case 89:
					return 4023;
				
				case 90:
					return 4031;
				
				case 91:
					return 4039;
				
				case 92:
					return 4047;
				
				case 93:
					return 4055;
				
				case 94:
					return 4063;
				
				case 95:
					return 4071;
				
				case 96:
					return 4079;
				
				case 97:
					return 4087;
				
				case 98:
					return 4095;
				
				case 99:
					return 4103;
				
				case 100:
					return 4112;
				
				case 101:
					return 4120;
				
				case 102:
					return 4127;
				
				case 103:
					return 4135;
				
				case 104:
					return 4143;
				
				case 105:
					return 4151;
				
				case 106:
					return 4159;
				
				case 107:
					return 4167;
				
				case 108:
					return 4175;
				
				case 109:
					return 4183;
				
				case 110:
					return 4191;
				
				case 111:
					return 4199;
				
				case 112:
					return 4207;
				
				case 113:
					return 4215;
				
				case 114:
					return 4223;
				
				case 115:
					return 4231;
				
				case 116:
					return 4239;
				
				case 117:
					return 4247;
				
				case 118:
					return 4255;
				
				case 119:
					return 4263;
				
				case 120:
					return 4272;
				
				case 121:
					return 4280;
				
				case 122:
					return 4287;
				
				case 123:
					return 4295;
				
				case 124:
					return 4303;
				
				case 125:
					return 4311;
				
				case 126:
					return 4319;
				
				case 127:
					return 4327;
				
				case 128:
					return 4335;
				
				case 129:
					return 4343;
				
				case 130:
					return 4351;
				
				case 131:
					return 4359;
				
				case 132:
					return 4367;
				
				case 133:
					return 4375;
				
				case 134:
					return 4383;
				
				case 135:
					return 4391;
				
				case 136:
					return 4399;
				
				case 137:
					return 4407;
				
				case 138:
					return 4415;
				
				case 139:
					return 4423;
				
				case 140:
					return 4432;
				
				case 141:
					return 4440;
				
				case 142:
					return 4447;
				
				case 143:
					return 4455;
				
				case 144:
					return 4463;
				
				case 145:
					return 4471;
				
				case 146:
					return 4479;
				
				case 147:
					return 4487;
				
				case 148:
					return 4495;
				
				case 149:
					return 4503;
				
				case 150:
					return 4511;
				
				case 151:
					return 4519;
				
				case 152:
					return 4527;
				
				case 153:
					return 4535;
				
				case 154:
					return 4543;
				
				case 155:
					return 4551;
				
				case 156:
					return 4559;
				
				case 157:
					return 4567;
				
				case 158:
					return 5460;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5909;
				
				case 160:
					return 5916;
				
				case 161:
					return 5923;
				
				case 162:
					return 5930;
				
				case 163:
					return 5937;
				
				case 164:
					return 5944;
				
				case 165:
					return 5951;
				
				case 166:
					return 5958;
				
				case 167:
					return 5965;
				
				case 168:
					return 5972;
				
				case 169:
					return 5979;
				
				case 170:
					return 5986;
				
				case 171:
					return 5993;
				
				case 172:
					return 6000;
				
				case 173:
					return 6007;
				
				case 174:
					return 6014;
				
				case 175:
					return 6021;
				
				case 176:
					return 6028;
				
				case 177:
					return 6035;
				
				case 178:
					return 6042;
				
				case 179:
					return 6049;
				
				case 180:
					return 6056;
				
				case 181:
					return 6063;
				
				case 182:
					return 6070;
				
				case 183:
					return 6077;
				
				default:
			}
			break;
			break;
	}
	return 1626;
}

int func_906(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 184)
	{
		iVar0 = 0;
		while (iVar0 < 13)
		{
			if (iParam0 >= func_724(iVar0) && iParam0 < func_907(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_907(int iParam0)
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
		
		case 12:
			return 179;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_727(iParam0);
		return func_908(iVar0);
	}
	return (func_725(iParam0, -1) * iParam0 + 1);
}

int func_908(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_909(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_36();
	}
	if (iParam0 == 7 && !Global_262145.f_16102)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_727(iParam0);
		if (iVar1 == 0 && func_470(5372, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1365065[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2536194[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 13)
		{
			return 0;
		}
		return Global_2536117[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_910(int iParam0)
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

int func_911(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_723(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_470(func_905(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_912(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_913()
{
	return func_470(5359, -1, 0) != 0;
}

bool func_914()
{
	return func_470(3807, -1, 0) != 0;
}

bool func_915()
{
	return func_470(3210, -1, 0) != 0;
}

bool func_916()
{
	return func_470(5358, -1, 0) != 0;
}

int func_917()
{
	int iVar0;
	
	iVar0 = func_580();
	if (iVar0 != func_55())
	{
		return Global_1623799[iVar0 /*488*/].f_11.f_92;
	}
	return 0;
}

int func_918(int iParam0)
{
	if (func_214(iParam0, 0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_173;
	}
	return -1;
}

int func_919(int iParam0)
{
	if (func_213(iParam0) == 225 || func_213(iParam0) == 226)
	{
		return func_918(iParam0);
	}
	return -1;
}

var func_920()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_683(unk_0x3D35F9864E4640B1(), iVar0))
		{
			unk_0xCD7E92DE2BFA0B0D(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_921()
{
	if (!func_188())
	{
		return;
	}
	if (!unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == Global_1312575.f_9)
	{
		return;
	}
	func_789();
}

void func_922()
{
	if (func_34(unk_0x3D35F9864E4640B1(), 0))
	{
		return;
	}
	switch (Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_9)
	{
		case 0:
			func_966();
			func_406();
			if (Local_128.f_214 == 2)
			{
				Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_9 = 2;
			}
			else if (Local_128.f_214 == 3)
			{
				Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_923();
			func_406();
			if (Local_128.f_214 == 3)
			{
				Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_1041();
			break;
	}
}

void func_923()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = unk_0x43B24C247F35B6BC();
	iVar1 = Local_128.f_197 + 1;
	if (func_34(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar0 = func_394();
	}
	if (!func_395())
	{
		if (!unk_0x2A3398C6222EB190(Local_398[iVar0 /*11*/].f_1, 14))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_398[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (!func_964())
	{
		if (!unk_0x2A3398C6222EB190(Local_398[iVar0 /*11*/].f_1, 14))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_398[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_128.f_2[0 /*10*/].f_2))
		{
			if (unk_0xA32DC7E16AD1DFB7(unk_0x0031992CA618A445(), unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 0))
			{
				return;
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(Local_398[iVar0 /*11*/].f_1, 14))
	{
		if (!func_938(iVar1, unk_0x43B24C247F35B6BC()))
		{
			if (!unk_0x2A3398C6222EB190(iLocal_751, 13))
			{
				if (func_936(unk_0x3D35F9864E4640B1(), iVar1))
				{
					unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 13);
				}
			}
			else
			{
				bVar4 = true;
				iVar2 = 0;
				while (iVar2 < unk_0x32C41AA379415932())
				{
					if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar2)))
					{
						iVar3 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar2));
						if (func_936(iVar3, iVar1))
						{
							if (!func_931(iVar3, iVar1))
							{
								bVar4 = false;
							}
						}
					}
					iVar2++;
				}
				if (bVar4)
				{
					func_924();
				}
			}
		}
		else
		{
			unk_0xCD7E92DE2BFA0B0D(&(Local_398[iVar0 /*11*/].f_1), 14);
		}
	}
}

void func_924()
{
	func_925();
}

void func_925()
{
	int iVar0;
	
	if (func_930(unk_0x3D35F9864E4640B1()))
	{
		iVar0 = func_929(unk_0x3D35F9864E4640B1());
		if (!func_928(3, iVar0))
		{
			func_926(3, iVar0);
		}
	}
}

void func_926(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_927(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1186[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1190[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1194[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1552[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1556[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1752[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1756[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1760[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1774[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1778[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1560[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1764[iVar0]), iVar1);
			return;
			break;
		
		case 12:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1768[iVar0]), iVar1);
			return;
			break;
		
		case 13:
			unk_0xCD7E92DE2BFA0B0D(&(Global_1780828.f_1565[iVar0]), iVar1);
			return;
			break;
	}
}

void func_927(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

int func_928(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_927(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1186[iVar0], iVar1);
			break;
		
		case 1:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1190[iVar0], iVar1);
			break;
		
		case 2:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1194[iVar0], iVar1);
			break;
		
		case 3:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1552[iVar0], iVar1);
			break;
		
		case 4:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1556[iVar0], iVar1);
			break;
		
		case 5:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1752[iVar0], iVar1);
			break;
		
		case 6:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1756[iVar0], iVar1);
			break;
		
		case 7:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1760[iVar0], iVar1);
			break;
		
		case 8:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1774[iVar0], iVar1);
			break;
		
		case 9:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1778[iVar0], iVar1);
			break;
		
		case 10:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1560[iVar0], iVar1);
			break;
		
		case 11:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1764[iVar0], iVar1);
			break;
		
		case 12:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1768[iVar0], iVar1);
			break;
		
		case 13:
			return unk_0x2A3398C6222EB190(Global_1780828.f_1565[iVar0], iVar1);
			break;
	}
	return 0;
}

int func_929(int iParam0)
{
	if (iParam0 != func_55())
	{
		return Global_2422142[iParam0 /*399*/].f_318.f_11;
	}
	return -1;
}

int func_930(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_55() && (func_1124(iParam0, 1, 1) || Global_2404997.f_2583))
	{
		bVar0 = unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_318, 1);
		return bVar0;
	}
	return 0;
}

bool func_931(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_934(iParam1);
	return func_932(iParam0, iVar0);
}

int func_932(int iParam0, int iParam1)
{
	if (iParam0 != func_55() && func_1124(iParam0, 1, 1))
	{
		if (func_930(iParam0))
		{
			if (func_929(iParam0) == iParam1)
			{
				if (func_933(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_933(int iParam0)
{
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_318, 2);
}

int func_934(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (func_935(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_935(int iParam0)
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

bool func_936(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_934(iParam1);
	return func_937(iParam0, iVar0);
}

int func_937(int iParam0, int iParam1)
{
	if (iParam0 != func_55() && func_1124(iParam0, 1, 1))
	{
		if (func_930(iParam0))
		{
			if (func_929(iParam0) == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_938(int iParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	
	iVar0 = func_934(iParam0);
	if (func_928(4, iVar0))
	{
		return 1;
	}
	else if (!func_963(iVar0))
	{
		if (func_962(iParam0, iParam1, &Var1, &uVar4))
		{
			func_939(iVar0, 1, 1, Var1, uVar4, 0, 0, 0);
		}
		else
		{
			func_939(iVar0, 1, 0, Var1, 0, 0, 0, 0);
		}
	}
	return 0;
}

int func_939(int iParam0, bool bParam1, bool bParam2, struct<3> Param3, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	bParam7 = true;
	if (func_930(unk_0x3D35F9864E4640B1()))
	{
		return 0;
	}
	if (!bParam7)
	{
		if (!(func_961(iParam0) || func_945(iParam0, 0, 1)))
		{
			func_943(iParam0);
			return 0;
		}
	}
	else
	{
		func_926(2, iParam0);
	}
	if (func_928(0, iParam0))
	{
		return 0;
	}
	func_926(0, iParam0);
	func_942(4, iParam0);
	func_941(iParam0);
	if (bParam2)
	{
		func_926(1, iParam0);
		Global_1780828.f_1198[iParam0 /*3*/] = { Param3 };
		Global_1780828.f_1463[iParam0] = iParam6;
	}
	else
	{
		func_942(1, iParam0);
		Global_1780828.f_1198[iParam0 /*3*/] = { 0f, 0f, 0f };
		Global_1780828.f_1463[iParam0] = 0f;
	}
	if (bParam1)
	{
		func_942(3, iParam0);
	}
	else
	{
		func_926(3, iParam0);
	}
	func_942(10, iParam0);
	if (bParam8)
	{
		func_926(10, iParam0);
	}
	func_942(13, iParam0);
	if (bParam9)
	{
		func_926(13, iParam0);
	}
	func_940(1, iParam0);
	return 1;
}

void func_940(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 1))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 1);
			unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 2);
			Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_11 = iParam1;
			func_559(&(Global_1780828.f_1570), 0, 0);
		}
	}
	else
	{
		unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 1);
		func_926(4, iParam1);
		Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_11 = -1;
		func_9(&(Global_1780828.f_1570));
	}
}

void func_941(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x89A8BEEC1AA87D33(unk_0x0031992CA618A445());
	if (iVar0 != 0)
	{
		if (!unk_0x7A6C051038031EFA(iVar0, 0) && !unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0x3251C2B06497863C(iVar0, -1, 0) == unk_0x0031992CA618A445())
			{
				Global_1780828.f_1639 = iParam0;
				Global_1780828.f_1640 = iVar0;
				func_559(&(Global_1780828.f_1641), 0, 0);
				Global_1780828.f_1643 = 0;
			}
		}
	}
}

void func_942(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_927(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1186[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1190[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1194[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1552[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1556[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1752[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1756[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1760[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1774[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1778[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1560[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1764[iVar0]), iVar1);
			return;
			break;
		
		case 12:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1768[iVar0]), iVar1);
			return;
			break;
		
		case 13:
			unk_0xD804ACF2A7171150(&(Global_1780828.f_1565[iVar0]), iVar1);
			return;
			break;
	}
}

void func_943(int iParam0)
{
	if (!func_944(iParam0))
	{
		return;
	}
	func_942(0, iParam0);
	func_942(1, iParam0);
	func_942(2, iParam0);
	func_942(3, iParam0);
	func_942(4, iParam0);
	func_942(10, iParam0);
	Global_1780828.f_1198[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1780828.f_1463[iParam0] = 0f;
	if (Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_11 == iParam0)
	{
		Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318.f_11 = -1;
		unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 2);
		unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318), 1);
	}
	if (unk_0x2A3398C6222EB190(Global_1780828.f_2, 22))
	{
		unk_0xD804ACF2A7171150(&(Global_1780828.f_2), 22);
	}
}

int func_944(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 88)
	{
		return 1;
	}
	return 0;
}

int func_945(int iParam0, int iParam1, int iParam2)
{
	if ((func_1124(unk_0x3D35F9864E4640B1(), 1, 1) || Global_2404997.f_2583) && (!func_960() || func_956()))
	{
		if (func_954(iParam0))
		{
			return 0;
		}
		if (Global_1780828.f_1802 == iParam0)
		{
			return 0;
		}
		if (func_424(iParam0) == 5)
		{
			if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
			{
				if (func_953())
				{
					if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_318, 5))
					{
						return 1;
					}
				}
			}
			if (func_503(unk_0x3D35F9864E4640B1()))
			{
				if (func_956())
				{
					return 1;
				}
			}
		}
		if (func_424(iParam0) == 4)
		{
			if (func_952(unk_0x3D35F9864E4640B1()) || (func_951() && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0)))
			{
				if (func_956())
				{
					if (func_948(Global_1592923) == iParam0)
					{
						return 1;
					}
				}
			}
		}
		if (iParam2 && func_947(iParam0))
		{
			return 1;
		}
		else if (iParam1 && func_946(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_946(int iParam0)
{
	if (func_963(iParam0))
	{
		return func_928(2, iParam0);
	}
	return 0;
}

int func_947(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 210;
	Var1 = { Global_1780828.f_301[iParam0 /*3*/] };
	if (!func_39(Var1))
	{
		return unk_0x1410333E912D4EC6(func_51(unk_0x3D35F9864E4640B1()), Var1, 1) <= IntToFloat(iVar0);
	}
	return 0;
}

int func_948(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return -1;
	}
	iVar0 = func_568(iParam0);
	if (!iVar0 == 0)
	{
		return func_949(iVar0);
	}
	return -1;
}

int func_949(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 88)
	{
		if (func_950(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_950(int iParam0)
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

bool func_951()
{
	return unk_0x2A3398C6222EB190(Global_1780828, 17);
}

int func_952(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_1124(iParam0, 1, 1))
		{
			if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1 && Global_2422142[iParam0 /*399*/].f_318.f_4 != func_55())
			{
				return func_424(Global_2422142[iParam0 /*399*/].f_318.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_953()
{
	if (func_1124(unk_0x3D35F9864E4640B1(), 1, 1))
	{
		if (unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0x3251C2B06497863C(unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0), -1, 0) != unk_0x0031992CA618A445())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_954(int iParam0)
{
	if (unk_0xF4F91CD09D59F42E() && !func_955(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_955(int iParam0)
{
	if (func_424(iParam0) == 6 && Global_1780828.f_1820)
	{
		return 1;
	}
	return 0;
}

int func_956()
{
	if (func_1124(unk_0x3D35F9864E4640B1(), 1, 1))
	{
		if (func_503(unk_0x3D35F9864E4640B1()))
		{
			if (Global_1592924 != func_55())
			{
				if (func_743(Global_1592924))
				{
					if ((func_959(Global_1592924) && !func_958()) && !func_957())
					{
						return 1;
					}
				}
			}
		}
		else if (func_952(unk_0x3D35F9864E4640B1()) || (func_951() && unk_0x90219307C9D2728D(unk_0x0031992CA618A445(), 0)))
		{
			if (Global_1592923 != func_55())
			{
				if (func_743(Global_1592923))
				{
					if ((func_959(Global_1592923) && !func_957()) && !func_958())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_957()
{
	return unk_0x2A3398C6222EB190(Global_1780828, 30);
}

bool func_958()
{
	return unk_0x2A3398C6222EB190(Global_1780828, 31);
}

int func_959(int iParam0)
{
	if (iParam0 != func_55())
	{
		return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_318, 6);
	}
	return 0;
}

bool func_960()
{
	int iVar0;
	
	iVar0 = unk_0x7832F791572D5809(joaat("am_mp_smpl_interior_int"));
	return (iVar0 > 0 || unk_0xE55A601AD360484C("AM_MP_SMPL_INTERIOR_INT", Global_1780828.f_1652, 1, 0));
}

int func_961(int iParam0)
{
	if ((unk_0xBF7FC087B552791F(unk_0x3D35F9864E4640B1(), "AM_MP_SMPL_INTERIOR_EXT", iParam0) || unk_0xE55A601AD360484C("AM_MP_SMPL_INTERIOR_EXT", iParam0, 1, 0)) || func_928(12, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_962(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (func_486(iParam0))
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

bool func_963(int iParam0)
{
	return func_928(0, iParam0);
}

int func_964()
{
	if (unk_0x2A3398C6222EB190(iLocal_751, 13))
	{
		return 1;
	}
	if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		return 0;
	}
	if (unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), func_965(Local_128.f_197 + 1), 1) > 100f)
	{
		return 0;
	}
	return 1;
}

Vector3 func_965(int iParam0)
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

void func_966()
{
	func_994();
	func_798();
	func_993();
	func_990();
	func_783();
	func_987();
	func_971();
	func_968();
	func_774();
	func_967();
}

void func_967()
{
}

void func_968()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_395())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	Var0 = { func_965(Local_128.f_197 + 1) };
	fVar3 = unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Var0);
	if (fVar3 < 62500f)
	{
		if (!unk_0x2A3398C6222EB190(iLocal_751, 14))
		{
			func_201(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
			func_969();
			unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 14);
		}
	}
	else if (fVar3 > 250000f)
	{
		func_435();
	}
}

void func_969()
{
	int iVar0;
	
	if (func_395())
	{
		return;
	}
	iVar0 = Local_128.f_197 + 1;
	switch (iVar0)
	{
		case 1:
			func_970(93.9801f, -2532.177f, 5.0778f, 124.1404f, 1065353216);
			func_970(96.7817f, -2536.936f, 5f, 121.982f, 1065353216);
			func_970(106.1278f, -2539.717f, 5.0003f, 111.4201f, 1065353216);
			func_970(7.7245f, -2598.042f, 5.0075f, 283.2584f, 1065353216);
			func_970(13.7512f, -2602.234f, 5.0069f, 290.8908f, 1065353216);
			func_970(113.3588f, -2586.112f, 5.0121f, 88.5573f, 1065353216);
			func_970(111.6119f, -2592.456f, 5.0229f, 78.4188f, 1065353216);
			func_970(8.5363f, -2518.204f, 5.0163f, 213.3867f, 1065353216);
			break;
		
		case 2:
			func_970(-1150.759f, -1273.248f, 5.7478f, 282.4241f, 1065353216);
			func_970(-1019.696f, -1323.524f, 4.9009f, 45.7692f, 1065353216);
			func_970(-1012.756f, -1319.543f, 4.9001f, 43.138f, 1065353216);
			func_970(-1005.033f, -1315.236f, 4.941f, 58.4519f, 1065353216);
			func_970(-1014.173f, -1307.516f, 5.2364f, 52.7034f, 1065353216);
			func_970(-1022.801f, -1245.642f, 5.014f, 106.8874f, 1065353216);
			func_970(-1112.947f, -1296.568f, 4.258f, 298.12f, 1065353216);
			func_970(-1118.264f, -1218.13f, 1.5169f, 188.9163f, 1065353216);
			break;
		
		case 3:
			func_970(856.3708f, -1013.008f, 28.4203f, 271.5768f, 1065353216);
			func_970(863.5153f, -993.5998f, 29.2774f, 239.646f, 1065353216);
			func_970(933.4873f, -990.8866f, 37.0241f, 127.1206f, 1065353216);
			func_970(932.2711f, -1007.077f, 36.7075f, 90.5105f, 1065353216);
			func_970(867.5297f, -1076.188f, 27.7798f, 268.1065f, 1065353216);
			func_970(868.5233f, -1092.591f, 27.7269f, 302.3375f, 1065353216);
			func_970(927.5185f, -1092.741f, 33.1574f, 50.444f, 1065353216);
			func_970(936.7908f, -1078.382f, 34.7149f, 77.3112f, 1065353216);
			break;
		
		case 4:
			func_970(243.2832f, -1999.028f, 18.8177f, 341.0091f, 1065353216);
			func_970(273.1573f, -2010.138f, 18.6668f, 29.2809f, 1065353216);
			func_970(171.7093f, -1951.986f, 18.7677f, 286.1576f, 1065353216);
			func_970(186.7918f, -1911.818f, 21.7781f, 235.4626f, 1065353216);
			func_970(201.1726f, -1898.231f, 23.2412f, 220.1641f, 1065353216);
			func_970(223.3617f, -1889.273f, 24.4098f, 178.0541f, 1065353216);
			func_970(260.1144f, -1909.984f, 24.8323f, 142.8378f, 1065353216);
			func_970(289.037f, -1933.327f, 24.3999f, 148.1186f, 1065353216);
			break;
		
		case 5:
			func_970(-444.3442f, 229.0294f, 82.0416f, 232.9779f, 1065353216);
			func_970(-446.8376f, 224.1595f, 82.0175f, 236.8468f, 1065353216);
			func_970(-398.6772f, 227.0964f, 82.593f, 160.9651f, 1065353216);
			func_970(-412.1818f, 224.1092f, 82.5148f, 207.9725f, 1065353216);
			func_970(-368.4009f, 193.0408f, 82.6566f, 97.3058f, 1065353216);
			func_970(-471.0459f, 153.4937f, 77.0803f, 301.4885f, 1065353216);
			func_970(-492.4609f, 191.0608f, 69.9316f, 260.3055f, 1065353216);
			func_970(-492.152f, 185.6411f, 69.9316f, 267.4302f, 1065353216);
			break;
		
		case 6:
			func_970(-1119.86f, -2022.411f, 12.2297f, 292.6461f, 1065353216);
			func_970(-1102.049f, -1983.884f, 12.1406f, 223.9062f, 1065353216);
			func_970(-1084.243f, -1968.423f, 12.1514f, 204.0761f, 1065353216);
			func_970(-1033.419f, -2068.45f, 12.4615f, 33.9101f, 1065353216);
			func_970(-1037.025f, -2088.586f, 12.6459f, 21.4939f, 1065353216);
			func_970(-1056.915f, -2088.188f, 12.2919f, 8.2791f, 1065353216);
			func_970(-1020.213f, -2077.749f, 12.7601f, 40.6275f, 1065353216);
			func_970(-1032.6f, -2101.71f, 12.6309f, 20.9321f, 1065353216);
			break;
		
		case 7:
			func_970(-1323.561f, -801.4799f, 16.5991f, 309.0983f, 1065353216);
			func_970(-1334.537f, -788.2323f, 18.9061f, 263.1596f, 1065353216);
			func_970(-1333.08f, -758.4105f, 19.367f, 226.0109f, 1065353216);
			func_970(-1326.314f, -754.1177f, 19.367f, 215.8053f, 1065353216);
			func_970(-1252.46f, -880.908f, 11.1188f, 6.1107f, 1065353216);
			func_970(-1234.162f, -868.6242f, 11.821f, 83.8965f, 1065353216);
			func_970(-1234.714f, -903.713f, 11.0757f, 22.5172f, 1065353216);
			func_970(-1274.141f, -860.0457f, 11.2177f, 313.1372f, 1065353216);
			break;
		
		case 8:
			func_970(-954.9498f, -2765.854f, 12.9446f, 300.864f, 1065353216);
			func_970(-967.7481f, -2758.093f, 12.8166f, 282.6459f, 1065353216);
			func_970(-974.1952f, -2721.633f, 12.7566f, 258.5829f, 1065353216);
			func_970(-956.0557f, -2704.292f, 12.831f, 242.288f, 1065353216);
			func_970(-900.7191f, -2652.238f, 12.7618f, 177.695f, 1065353216);
			func_970(-870.0709f, -2643.078f, 12.9495f, 171.6949f, 1065353216);
			func_970(-837.4813f, -2697.67f, 12.8121f, 98.2582f, 1065353216);
			func_970(-830.3173f, -2716.68f, 12.9445f, 57.01767f, 1065353216);
			break;
		
		case 9:
			func_970(246.686f, -2954.608f, 4.8465f, 201.0552f, 1065353216);
			func_970(237.4989f, -2960.046f, 4.8401f, 219.4444f, 1065353216);
			func_970(278.0732f, -2933.848f, 4.6858f, 173.7103f, 1065353216);
			func_970(305.2663f, -2953.124f, 4.9916f, 152.1779f, 1065353216);
			func_970(306.9686f, -3051.72f, 4.8569f, 73.9139f, 1065353216);
			func_970(290.1032f, -3067.022f, 4.9168f, 22.2414f, 1065353216);
			func_970(248.4644f, -3081.733f, 4.8082f, 5.7888f, 1065353216);
			func_970(213.5583f, -3006.335f, 4.8585f, 281.9704f, 1065353216);
			break;
		
		case 10:
			func_970(1533.422f, -2207.716f, 76.5674f, 341.3423f, 1065353216);
			func_970(1518.683f, -2197.165f, 76.0905f, 323.85f, 1065353216);
			func_970(1505.83f, -2149.169f, 76.2134f, 287.7332f, 1065353216);
			func_970(1517.668f, -2071.069f, 76.2881f, 218.4776f, 1065353216);
			func_970(1513.971f, -2047.472f, 76.3438f, 229.7462f, 1065353216);
			func_970(1562.546f, -2050.737f, 76.4175f, 158.5163f, 1065353216);
			func_970(1571.823f, -2065.519f, 76.0999f, 139.3434f, 1065353216);
			func_970(1559.668f, -2212.969f, 77.2272f, 30.3786f, 1065353216);
			break;
		
		case 11:
			func_970(-244.4574f, -2679.464f, 5.0003f, 115.7166f, 1065353216);
			func_970(-247.8431f, -2669.538f, 5.0003f, 137.3239f, 1065353216);
			func_970(-273.936f, -2646.584f, 5.1595f, 138.4986f, 1065353216);
			func_970(-283.7866f, -2643.465f, 5.1536f, 145.8487f, 1065353216);
			func_970(-338.5266f, -2716.292f, 5.0016f, 353.4592f, 1065353216);
			func_970(-340.0283f, -2721.088f, 5.0015f, 349.123f, 1065353216);
			func_970(-284.5308f, -2623.301f, 5.0382f, 150.473f, 1065353216);
			func_970(-257.3565f, -2632.506f, 5.0221f, 131.679f, 1065353216);
			break;
		
		case 12:
			func_970(515.9905f, -720.5799f, 23.8387f, 5.6255f, 1065353216);
			func_970(497.1281f, -728.9662f, 23.8776f, 343.3149f, 1065353216);
			func_970(447.638f, -685.7243f, 27.4277f, 285.8884f, 1065353216);
			func_970(449.3201f, -668.7817f, 27.3296f, 271.4846f, 1065353216);
			func_970(498.4707f, -568.4258f, 23.747f, 193.0118f, 1065353216);
			func_970(514.7365f, -562.4415f, 23.7507f, 158.6247f, 1065353216);
			func_970(527.8929f, -562.6914f, 23.7997f, 164.4089f, 1065353216);
			func_970(544.1755f, -594.525f, 23.7432f, 152.6498f, 1065353216);
			break;
		
		case 13:
			func_970(-518.2458f, -1828.47f, 21.5839f, 6.9263f, 1065353216);
			func_970(-493.7525f, -1823.626f, 21.8486f, 29.4302f, 1065353216);
			func_970(-450.3873f, -1794.818f, 20.7743f, 85.0772f, 1065353216);
			func_970(-597.9962f, -1729.797f, 22.139f, 232.3263f, 1065353216);
			func_970(-581.0703f, -1718.014f, 21.9858f, 214.5117f, 1065353216);
			func_970(-449.3808f, -1766.115f, 19.5349f, 112.1522f, 1065353216);
			func_970(-541.6173f, -1821.735f, 21.9225f, 317.0811f, 1065353216);
			func_970(-618.6395f, -1711.974f, 23.0683f, 235.603f, 1065353216);
			break;
		
		case 14:
			func_970(-291.3686f, -1274.791f, 29.4583f, 184.0252f, 1065353216);
			func_970(-260.6114f, -1286.958f, 30.0291f, 148.6145f, 1065353216);
			func_970(-245.4854f, -1358.204f, 30.606f, 97.9413f, 1065353216);
			func_970(-258.2249f, -1408.08f, 30.2904f, 46.1851f, 1065353216);
			func_970(-293.8492f, -1408.819f, 30.2952f, 0.4148f, 1065353216);
			func_970(-335.4179f, -1371.286f, 30.2957f, 304.5049f, 1065353216);
			func_970(-337.6552f, -1333.524f, 30.3008f, 289.5995f, 1065353216);
			func_970(-339.4502f, -1311.185f, 30.2086f, 224.0032f, 1065353216);
			break;
		
		case 15:
			func_970(296.9105f, 339.6927f, 104.52f, 250.3169f, 1065353216);
			func_970(286.231f, 324.1514f, 104.6652f, 267.2802f, 1065353216);
			func_970(314.8456f, 295.4021f, 104.543f, 341.0804f, 1065353216);
			func_970(356.8475f, 275.1253f, 102.1478f, 349.9545f, 1065353216);
			func_970(403.6933f, 290.7596f, 101.9871f, 47.5594f, 1065353216);
			func_970(416.5997f, 309.7407f, 101.987f, 69.7807f, 1065353216);
			func_970(388.4496f, 357.7741f, 101.479f, 81.7557f, 1065353216);
			func_970(323.6804f, 367.7533f, 104.3807f, 251.082f, 1065353216);
			break;
		
		case 16:
			func_970(983.1635f, -1507.116f, 30.4318f, 115.3138f, 1065353216);
			func_970(976.6813f, -1462.792f, 30.4421f, 170.1272f, 1065353216);
			func_970(965.1019f, -1457.18f, 30.1302f, 187.7104f, 1065353216);
			func_970(954.3276f, -1500.289f, 29.9441f, 234.0993f, 1065353216);
			func_970(967.4816f, -1632.333f, 29.1107f, 353.4453f, 1065353216);
			func_970(890.0863f, -1572.723f, 29.84f, 281.6886f, 1065353216);
			func_970(905.2548f, -1543.512f, 29.5311f, 219.2688f, 1065353216);
			func_970(922.9328f, -1544.217f, 29.8062f, 181.6137f, 1065353216);
			break;
		
		case 17:
			func_970(754.465f, -835.6287f, 24.8675f, 202.5404f, 1065353216);
			func_970(760.689f, -821.2197f, 25.2721f, 185.6987f, 1065353216);
			func_970(799.4153f, -825.4905f, 25.19f, 155.4635f, 1065353216);
			func_970(833.3179f, -912.5907f, 24.5379f, 96.2594f, 1065353216);
			func_970(836.246f, -921.1563f, 25.0122f, 86.3203f, 1065353216);
			func_970(798.7469f, -975.9729f, 25.1518f, 41.5425f, 1065353216);
			func_970(753.8427f, -972.2688f, 23.9505f, 340.2511f, 1065353216);
			func_970(737.0633f, -940.94f, 23.8394f, 264.3263f, 1065353216);
			break;
		
		case 18:
			func_970(1021.727f, -2096.922f, 29.9949f, 131.5094f, 1065353216);
			func_970(1004.22f, -2097.619f, 30.1617f, 218.0245f, 1065353216);
			func_970(1048.305f, -2162.876f, 31.0285f, 17.1583f, 1065353216);
			func_970(1053.165f, -2138.979f, 31.6269f, 138.5871f, 1065353216);
			func_970(992.7523f, -2239.598f, 29.5519f, 335.4291f, 1065353216);
			func_970(975.8146f, -2201.123f, 29.5516f, 290.5504f, 1065353216);
			func_970(1035.371f, -2203.133f, 30.8934f, 77.8725f, 1065353216);
			func_970(1040.114f, -2203.875f, 30.8934f, 62.6027f, 1065353216);
			break;
		
		case 19:
			func_970(957.4448f, -2452.676f, 27.553f, 231.7168f, 1065353216);
			func_970(957.0999f, -2474.014f, 27.4957f, 267.1929f, 1065353216);
			func_970(945.7234f, -2497.031f, 27.453f, 256.6793f, 1065353216);
			func_970(946.9409f, -2478.706f, 27.3433f, 233.4717f, 1065353216);
			func_970(932.4327f, -2534.006f, 27.3027f, 231.8695f, 1065353216);
			func_970(900.2678f, -2552.213f, 27.4211f, 283.9405f, 1065353216);
			func_970(1028.407f, -2477.004f, 27.5034f, 91.0284f, 1065353216);
			func_970(1021.066f, -2459.521f, 27.5462f, 131.3309f, 1065353216);
			break;
		
		case 20:
			func_970(-237.7643f, 248.6469f, 91.0445f, 196.7769f, 1065353216);
			func_970(-202.8588f, 245.9139f, 91.0419f, 127.8667f, 1065353216);
			func_970(-199.1134f, 179.474f, 76.6409f, 79.199f, 1065353216);
			func_970(-217.1594f, 141.0364f, 68.6993f, 21.5726f, 1065353216);
			func_970(-240.5069f, 139.3272f, 68.6369f, 352.6409f, 1065353216);
			func_970(-280.1349f, 153.3907f, 74.2578f, 344.9672f, 1065353216);
			func_970(-177.5456f, 215.1789f, 87.8734f, 101.2481f, 1065353216);
			func_970(-174.6252f, 206.0641f, 87.426f, 84.7397f, 1065353216);
			break;
		
		case 21:
			func_970(578.9037f, -1883.818f, 24.4357f, 190.9878f, 1065353216);
			func_970(601.1657f, -1872.286f, 23.7783f, 136.6622f, 1065353216);
			func_970(573.7683f, -1869.375f, 24.1791f, 138.5911f, 1065353216);
			func_970(531.532f, -1858.341f, 24.332f, 211.7805f, 1065353216);
			func_970(542.208f, -1844.02f, 24.332f, 187.9743f, 1065353216);
			func_970(502.1498f, -1917.516f, 24.3684f, 289.8235f, 1065353216);
			func_970(512.4601f, -1985.896f, 23.9851f, 299.9174f, 1065353216);
			func_970(479.1975f, -1908.422f, 24.2436f, 282.8994f, 1065353216);
			break;
		
		case 22:
			func_970(172.8245f, -2183.052f, 5.0294f, 116.2516f, 1065353216);
			func_970(173.7597f, -2198.917f, 5.171f, 72.2949f, 1065353216);
			func_970(173.7982f, -2224.849f, 5.171f, 126.6793f, 1065353216);
			func_970(181.6316f, -2238.538f, 5.0035f, 61.6889f, 1065353216);
			func_970(147.6168f, -2252.883f, 5.0856f, 63.8371f, 1065353216);
			func_970(147.2348f, -2244.339f, 5.0856f, 70.1362f, 1065353216);
			func_970(178.0549f, -2206.273f, 5.0238f, 38.9746f, 1065353216);
			func_970(176.9219f, -2223.301f, 5.0329f, 133.7211f, 1065353216);
			break;
	}
}

void func_970(struct<3> Param0, float fParam3, int iParam4)
{
	if (!Global_2404997.f_1713)
	{
	}
	if (Global_2404997.f_680 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404997.f_680.f_1[Global_2404997.f_680 /*5*/] = { Param0 };
		Global_2404997.f_680.f_1[Global_2404997.f_680 /*5*/].f_3 = fParam3;
		Global_2404997.f_680.f_1[Global_2404997.f_680 /*5*/].f_4 = iParam4;
		Global_2404997.f_680++;
	}
}

void func_971()
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	
	if (!func_395())
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_751, 19))
	{
		if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_128.f_2[0 /*10*/].f_2))
			{
				unk_0x14E84B29590C740E(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 0, 0);
				unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 19);
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(Local_128.f_1, 8))
	{
		if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 9))
		{
			if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
			{
				if (!func_13(Local_128.f_2[0 /*10*/].f_2))
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 9);
				}
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(Local_128.f_1, 6))
	{
		if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 7))
		{
			if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
			{
				Var1 = { unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 0) };
				if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Var1) < 90000f)
				{
					unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 7);
				}
			}
		}
	}
	if (iLocal_754 == -2)
	{
		if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_128.f_2[0 /*10*/].f_2))
			{
				if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 8))
				{
					if (func_986(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2)))
					{
						unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 8);
					}
				}
				else if (!func_986(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2)))
				{
					unk_0xD804ACF2A7171150(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 8);
				}
			}
		}
	}
	if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 2) && !unk_0x2A3398C6222EB190(Local_128.f_1, 4))
	{
		if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
		{
			iVar0 = unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2);
			if (unk_0x432757A9E7AAFA96(iVar0, 0))
			{
				if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
				{
					if (unk_0x84432DB7C4069064(unk_0x0031992CA618A445()))
					{
						if (unk_0xCFA31F1E461A6BB5(unk_0x0031992CA618A445(), 0) == iVar0)
						{
							if (unk_0x3251C2B06497863C(iVar0, -1, 0) == unk_0x0031992CA618A445())
							{
								if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 3))
								{
									unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 3);
								}
							}
							else if (unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 3))
							{
								unk_0xD804ACF2A7171150(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 3);
							}
						}
						else if (unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 3))
						{
							unk_0xD804ACF2A7171150(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 3);
						}
					}
					else if (unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 3))
					{
						unk_0xD804ACF2A7171150(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 3);
					}
				}
				else if (unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 3))
				{
					unk_0xD804ACF2A7171150(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 3);
				}
			}
		}
	}
	iVar4 = func_55();
	iVar5 = func_55();
	if (iLocal_754 != Local_128.f_215)
	{
		if (!func_28())
		{
			if (!func_796())
			{
				if (unk_0xA761A0B6072010C8(uLocal_864))
				{
					unk_0x0C4BDC77192798AE(&uLocal_864);
				}
				if (Local_128.f_215 == unk_0x43B24C247F35B6BC())
				{
					func_985(1);
				}
				else if (Local_128.f_215 > -1)
				{
					iVar4 = func_984();
					if (iVar4 != func_55())
					{
						if (func_578(1))
						{
							iVar5 = func_580();
							if (iVar5 != func_55())
							{
								if (func_317(iVar4, iVar5, 1))
								{
									func_430(iVar4, 478, 1);
									func_428(iVar4, func_433(iLocal_865), 1);
									func_985(1);
								}
							}
						}
						func_982("DCONTRA_TCKV", iVar4, 0, 0, 0, 1, 1, 0);
					}
				}
				else if (Local_128.f_215 == -1)
				{
					if (unk_0xA761A0B6072010C8(uLocal_862))
					{
						unk_0x0C4BDC77192798AE(&uLocal_862);
					}
					iVar4 = func_981();
					if (iVar4 != func_55())
					{
						func_430(iVar4, 478, 0);
						func_428(iVar4, func_433(iLocal_865), 0);
					}
					func_980(3, 1);
				}
				iLocal_754 = Local_128.f_215;
			}
			else
			{
				func_980(1, 0);
			}
		}
	}
	func_979();
	func_977(0);
	func_972();
}

void func_972()
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = func_984();
	Var1 = { func_40() };
	if (unk_0xA761A0B6072010C8(uLocal_862))
	{
		unk_0xB922891BFD232C45(12, &uVar4, &uVar5, &uVar6, &uVar7);
		unk_0xB207C99FFC6234D4(1, Var1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, uVar4, uVar5, uVar6, 100, 0, 0, 2, 0, 0, 0, 0);
	}
	if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
	{
		if (unk_0xA02DD6B5C8C02298(Local_128.f_2[0 /*10*/].f_2))
		{
			if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 2))
			{
				if (iVar0 == unk_0x3D35F9864E4640B1())
				{
					if (!unk_0x8682D8A6269E52C9(unk_0xD33F4BC17EB987E5(iVar0)))
					{
						if (unk_0xF041E50CF58AF6F9(unk_0xD33F4BC17EB987E5(iVar0), Var1, 6f, 6f, 2f, 0, 1, 0))
						{
							func_973(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), &uLocal_1034, 0, 1);
							if (unk_0x3B077EBCBD1ABF1F(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2)))
							{
								unk_0xDB34A3A6EA8B0901(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2), 1);
							}
							unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 2);
						}
					}
				}
			}
		}
	}
}

int func_973(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_975(iParam0, 1, 1, 0, 0, 0, 1, 0))
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = unk_0xA7871E29B06DA901(iVar0);
				if (func_1124(iVar1, 0, 1))
				{
					if (unk_0xA32DC7E16AD1DFB7(unk_0xD33F4BC17EB987E5(iVar1), iParam0, 0))
					{
						func_974(func_625(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = unk_0x898811EA80D35DE2();
		}
	}
	else if (!unk_0x3B077EBCBD1ABF1F(iParam0))
	{
		unk_0xDE78E0A451F0CC44(iParam0);
	}
	else
	{
		if (bParam3)
		{
			unk_0xDB34A3A6EA8B0901(iParam0, 1);
		}
		unk_0x1F18D3C78C8C1A11(iParam0, 0);
		if (bParam2)
		{
			unk_0xC20B73867395D06D(iParam0, 1);
		}
		return 1;
	}
	return 0;
}

void func_974(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0.f_0 = 1171166686;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = unk_0xA83FFA3FA7711E6D();
	if (!iParam0 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Var0, 9, iParam0);
	}
}

int func_975(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xB8B31FD7EF092667(iParam0) + 1;
	if (iParam4 || !unk_0x7A6C051038031EFA(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_976(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x76B3C79DE564AFC6(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x0031992CA618A445())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x8682D8A6269E52C9(iVar2))
					{
						if (unk_0x972B5786EA49FE1A(iVar2))
						{
							if (unk_0x4347749EAD4D87DF(unk_0x46E9A8D99AF6D7BC(iVar2)) == 0)
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
				else if (!unk_0x8682D8A6269E52C9(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_976(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x00E962E9D49FD6C4(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x3251C2B06497863C(iParam0, iParam1, iParam3);
		iVar1 = unk_0x46E9A8D99AF6D7BC(iVar0);
		if (iVar1 != func_55())
		{
		}
	}
	if (bParam2)
	{
		if (!unk_0x76B3C79DE564AFC6(iVar0) && !unk_0x7A6C051038031EFA(iParam0, 0))
		{
			iVar0 = unk_0xB4ED2AD9365A5F9E(iParam0, iParam1);
			if (!unk_0x7A6C051038031EFA(iVar0, 0))
			{
				if (unk_0xF57D21B49780A7A8(iVar0, 451360105) == 1 || unk_0xF57D21B49780A7A8(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xF177E0DA126D71C8(iParam0, 0), unk_0xF177E0DA126D71C8(iVar0, 0)) < 10f)
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

void func_977(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_2())
	{
		return;
	}
	if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_128.f_2[iParam0 /*10*/].f_2))
		{
			if (unk_0xA761A0B6072010C8(uLocal_864))
			{
				if (Local_128.f_216 > -1)
				{
					unk_0xB922891BFD232C45(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else if (iLocal_754 == -2)
				{
					unk_0xB922891BFD232C45(6, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else
				{
					unk_0xB922891BFD232C45(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				func_978(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[iParam0 /*10*/].f_2), uVar0, uVar1, uVar2, 0);
			}
		}
	}
}

void func_978(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0x9E360FFC6FB1DDFD(unk_0xE9559A12052415BE(uParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	fVar6 = (fVar6 + fParam4);
	unk_0xB207C99FFC6234D4(2, unk_0xF177E0DA126D71C8(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_979()
{
	if (iLocal_754 == -2)
	{
		if (unk_0xA761A0B6072010C8(uLocal_864))
		{
			if (iLocal_755 != Local_128.f_222)
			{
				iLocal_755 = Local_128.f_222;
				unk_0x18EC814D577B92CE(uLocal_864, iLocal_755);
			}
		}
	}
	else if (iLocal_755 != 255)
	{
		iLocal_755 = 255;
	}
}

void func_980(int iParam0, bool bParam1)
{
	if (!unk_0xA761A0B6072010C8(uLocal_864))
	{
		if (unk_0xAA55DF0CB38F413B(Local_128.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_128.f_2[0 /*10*/].f_2))
			{
				uLocal_864 = unk_0xE80C2D6BF636C6C4(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[0 /*10*/].f_2));
				unk_0xC5B4383DA70A2C1A(uLocal_864, 12);
				unk_0x3B815A6E8530D3A5(uLocal_864, 478);
				unk_0xEB934A06DDA5027D(uLocal_864, iParam0);
				if (bParam1)
				{
					unk_0xE4E08EF8CF4469E9(uLocal_864, 1);
				}
			}
		}
	}
}

int func_981()
{
	int iVar0;
	
	iVar0 = func_55();
	if (iLocal_754 < 0)
	{
		return iVar0;
	}
	if (unk_0x80BA8E3CC61A8625(unk_0xA7871E29B06DA901(iLocal_754)))
	{
		iVar0 = unk_0xA7871E29B06DA901(iLocal_754);
	}
	return iVar0;
}

int func_982(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0xB5E2A107E006EC7A(iParam1);
	if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x06D7899D9C1F422F(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x06D7899D9C1F422F(iParam1), 64);
		}
		if (unk_0x0BD3CCFB6C6CFA91(&Var2))
		{
		}
		unk_0xC8EBA5D7FC75C1C0(sParam0);
		if ((iVar1 != -1 && unk_0xF4F91CD09D59F42E()) && iVar1 < 4)
		{
			if (Global_1641087.f_92322[iVar1] != -1)
			{
				unk_0xDBB8FCB00B701798(func_545(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xDBB8FCB00B701798(func_532(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0xDBB8FCB00B701798(func_532(iParam1, -2, 1, 0));
		}
		unk_0x50B3C23D0902259F(func_633(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xC59BF654690FB5DC(0, 1);
		}
		else
		{
			Global_2488575 = { func_57(iParam1) };
			if (unk_0x7838EB8661A32D68(&Global_2488505, 35, &Global_2488575))
			{
				iVar18 = 0;
				if (unk_0xB3404E397FF56B3B(&(Global_2488505.f_22), "Leader") && Global_2488505.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2488505.f_21 > 0)
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
						Var2 = { func_983(&Var2) };
					}
					iVar0 = unk_0xAC2E222FB9C25D52(iVar19, unk_0xDEB7B1B6D2FD60C2(&Global_2488505, 35), &(Global_2488505.f_17), Global_2488505.f_30, iVar18, 0, Global_2488505, &Var2, Global_1314010, Global_1314011, Global_1314012);
				}
				else
				{
					iVar0 = unk_0xA9762168447BC8F6(iVar19, unk_0xDEB7B1B6D2FD60C2(&Global_2488505, 35), &(Global_2488505.f_17), Global_2488505.f_30, iVar18, 0, Global_2488505, Global_1314010, Global_1314011, Global_1314012);
				}
			}
			else
			{
				iVar0 = unk_0xC59BF654690FB5DC(0, 1);
			}
		}
		func_629(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_983(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

int func_984()
{
	int iVar0;
	
	iVar0 = func_55();
	if (Local_128.f_216 > -1)
	{
		if (unk_0x80BA8E3CC61A8625(unk_0xA7871E29B06DA901(Local_128.f_216)))
		{
			iVar0 = unk_0xA7871E29B06DA901(Local_128.f_216);
		}
	}
	return iVar0;
}

void func_985(bool bParam0)
{
	struct<3> Var0;
	
	if (!unk_0xA761A0B6072010C8(uLocal_862))
	{
		Var0 = { func_40() };
		uLocal_862 = unk_0x97AC4FC1EEAC7A8B(Var0);
		if (bParam0)
		{
			unk_0xE4E08EF8CF4469E9(uLocal_862, 1);
		}
	}
}

int func_986(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
	{
		return 0;
	}
	Var0 = { unk_0xF177E0DA126D71C8(uParam0, 0) };
	if (unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Var0, 0) < 50f)
	{
		return 1;
	}
	if (unk_0x4096DB4B0B8A982B(iParam0))
	{
		if (unk_0xAD2B8127B12C130D(Var0, 1f))
		{
			if (unk_0x367C9FFCB04B45EF(unk_0x0031992CA618A445(), iParam0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_987()
{
	int iVar0;
	
	if (!func_492())
	{
		if (func_408("DCONTRA_HLP1"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		if (func_408("DCONTRA_HLP2"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		if (func_408("DCONTRA_HLPCR"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		if (func_408("DCONTRA_HLPVCR"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		return;
	}
	iVar0 = func_384(unk_0x3D35F9864E4640B1());
	if (iVar0 < 2)
	{
		if (func_408("DCONTRA_HLP1"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		if (func_408("DCONTRA_HLP2"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		if (func_408("DCONTRA_HLPVCR"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		if (func_408("DCONTRA_HLPCR"))
		{
			unk_0x8C361F37C04084F4(1);
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_751, 1))
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_751, 2))
	{
		if (!func_989(86))
		{
			if (func_892(0, 1, 1, 1))
			{
				if (unk_0x43B24C247F35B6BC() == Local_128.f_218)
				{
					if (func_395())
					{
						func_416("DCONTRA_HLP3", -1);
					}
					else
					{
						func_416("DCONTRA_HLP1", -1);
					}
					func_415(1);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 2);
				}
				else if (func_1028() == Local_128.f_218)
				{
					if (func_395())
					{
						func_416("DCONTRA_HLP4", -1);
					}
					else
					{
						func_416("DCONTRA_HLP2", -1);
					}
					func_415(1);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 2);
				}
			}
		}
	}
	else if (!unk_0x2A3398C6222EB190(iLocal_751, 8))
	{
		if (!func_395())
		{
			if (func_892(0, 1, 1, 1))
			{
				if (func_569())
				{
					func_416("DCONTRA_HLPVCR", -1);
				}
				else
				{
					func_416("DCONTRA_HLPCR", -1);
				}
				func_415(1);
				unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 8);
			}
		}
	}
	if (func_395())
	{
		if (unk_0x2A3398C6222EB190(iLocal_751, 2))
		{
			if (!unk_0x2A3398C6222EB190(iLocal_751, 4))
			{
				if (func_892(0, 1, 1, 1))
				{
					func_988("DCONTRA_HLPLS", "DCONTRA_VBLP", -1);
					func_415(1);
					unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 4);
					unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 10);
				}
			}
		}
	}
}

void func_988(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x5FFD0DFFE53FB210(sParam0);
	unk_0x7C8A7ECFBAD2C8C4(sParam1);
	unk_0xF3AF8AF4E207A0FD(0, 0, 0, iParam2);
}

bool func_989(int iParam0)
{
	return Global_2434915.f_2484[0 /*76*/].f_1 == iParam0;
}

void func_990()
{
	struct<3> Var0;
	
	if (!unk_0x2A3398C6222EB190(iLocal_751, 12))
	{
		if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
		{
			Var0 = { func_991(func_934(Local_128.f_197 + 1)) };
			if (unk_0x1410333E912D4EC6(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), Var0, 1) <= 200f)
			{
				uLocal_759 = unk_0x6307C3D1D866114A();
				unk_0x4DF52B0CF393442F(uLocal_759, "Bell_02", Var0, "ALARMS_SOUNDSET", 0, 0, 0);
				unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 12);
			}
		}
	}
}

Vector3 func_991(int iParam0)
{
	struct<3> Var0;
	
	func_992(iParam0, &Var0);
	return Var0;
}

void func_992(int iParam0, var uParam1)
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

void func_993()
{
	struct<3> Var0;
	
	if (func_395())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(iLocal_751, 1))
	{
		return;
	}
	if (!unk_0x2A3398C6222EB190(Local_128.f_1, 13))
	{
		if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 11))
		{
			Var0 = { func_40() };
			if (unk_0xB7A628320EFF8E47(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 0), Var0) < 22500f)
			{
				unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 11);
			}
		}
		if (func_492())
		{
			if (!unk_0xA761A0B6072010C8(uLocal_863))
			{
				uLocal_863 = unk_0x97AC4FC1EEAC7A8B(func_40());
				unk_0xE4E08EF8CF4469E9(uLocal_863, 1);
			}
		}
		else if (unk_0xA761A0B6072010C8(uLocal_863))
		{
			unk_0x0C4BDC77192798AE(&uLocal_863);
		}
	}
	else if (unk_0xA761A0B6072010C8(uLocal_863))
	{
		unk_0x0C4BDC77192798AE(&uLocal_863);
	}
}

void func_994()
{
	if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1, 1))
	{
		if (!func_1027())
		{
			if (unk_0x2A3398C6222EB190(Local_128.f_1, 6))
			{
				func_220(1);
				unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_1), 1);
			}
		}
	}
}

void func_995()
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
		if (func_395())
		{
			if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_2, iVar3))
			{
				if (!unk_0x2A3398C6222EB190(Local_128.f_206, iVar3))
				{
					if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar3 /*10*/].f_1))
					{
						if (!func_24(Local_128.f_2[iVar3 /*10*/].f_1))
						{
							if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
							{
								if (func_1028() == Local_128.f_218)
								{
									if (func_1002(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1)))
									{
										unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_2), iVar3);
									}
								}
							}
						}
					}
				}
			}
			if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_3, iVar3))
			{
				if (!unk_0x2A3398C6222EB190(Local_128.f_208, iVar3))
				{
					if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar3 /*10*/].f_2))
					{
						if (func_1001(iVar3))
						{
							unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_3), iVar3);
						}
					}
				}
			}
			if (!unk_0x2A3398C6222EB190(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_4, iVar3))
			{
				if (!unk_0x2A3398C6222EB190(Local_128.f_207, iVar3))
				{
					if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar3 /*10*/].f_1))
					{
						if (!func_24(Local_128.f_2[iVar3 /*10*/].f_1))
						{
							if (unk_0xA836CB82D16639AD(unk_0xF177E0DA126D71C8(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), 1), 10f, 1))
							{
								unk_0xCD7E92DE2BFA0B0D(&(Local_398[unk_0x43B24C247F35B6BC() /*11*/].f_4), iVar3);
							}
						}
					}
				}
			}
		}
		if (func_492())
		{
			if (!func_395())
			{
				if (unk_0x2A3398C6222EB190(Local_128.f_1, 13))
				{
					func_997(Local_128.f_2[iVar3 /*10*/].f_1, &(Local_770[iVar3 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1);
				}
			}
			else if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar3 /*10*/].f_1))
			{
				if (!func_24(Local_128.f_2[iVar3 /*10*/].f_1))
				{
					if (!unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), 0))
					{
						func_997(Local_128.f_2[iVar3 /*10*/].f_1, &(Local_770[iVar3 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
					}
				}
				else
				{
					func_997(Local_128.f_2[iVar3 /*10*/].f_1, &(Local_770[iVar3 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
				}
			}
		}
		switch (Local_128.f_2[iVar3 /*10*/].f_9)
		{
			case 1:
				if (unk_0xEF0CB8FF125B9F9C())
				{
					if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar3 /*10*/].f_2))
					{
						if (func_13(Local_128.f_2[iVar3 /*10*/].f_2))
						{
							if (!func_24(Local_128.f_2[iVar3 /*10*/].f_1))
							{
								if (unk_0x26D7BF365BA84F9C(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), unk_0xD7E2A160FD5DEEE1(Local_128.f_2[iVar3 /*10*/].f_2)))
								{
									uVar5 = unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1);
									if (func_27(&uVar5))
									{
										if (unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), -258271821) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), -258271821) != 0)
										{
											unk_0xF48F6EEC1EBEB012(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), unk_0xD7E2A160FD5DEEE1(Local_128.f_2[iVar3 /*10*/].f_2), 25f, 786603);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0xEF0CB8FF125B9F9C())
				{
					if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar3 /*10*/].f_2))
					{
						if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar3 /*10*/].f_1))
						{
							if (func_13(Local_128.f_2[iVar3 /*10*/].f_2))
							{
								if (!func_24(Local_128.f_2[iVar3 /*10*/].f_1))
								{
									if (unk_0x26D7BF365BA84F9C(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), unk_0xD7E2A160FD5DEEE1(Local_128.f_2[iVar3 /*10*/].f_2)))
									{
										if ((unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), -258271821) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), -258271821) != 0) || unk_0x2A3398C6222EB190(Local_128.f_204, iVar3))
										{
											unk_0xF48F6EEC1EBEB012(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), unk_0xD7E2A160FD5DEEE1(Local_128.f_2[iVar3 /*10*/].f_2), 30f, 786469);
											if (unk_0x2A3398C6222EB190(Local_128.f_204, iVar3))
											{
												unk_0xD804ACF2A7171150(&(Local_128.f_204), iVar3);
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
				if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_128.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), -828834893);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_243(Local_128.f_2[iVar3 /*10*/].f_1))
							{
								unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), 1);
								unk_0x471E558A661279DE(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), 0, 0);
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
				if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_128.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), -1442466670);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_243(Local_128.f_2[iVar3 /*10*/].f_1))
							{
								if (unk_0xA02DD6B5C8C02298(Local_128.f_2[iVar3 /*10*/].f_1))
								{
									unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), 0);
									unk_0x0C3078938F876AB9(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_128.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), 1120685857);
						if (iVar4 != 1 && iVar4 != 0)
						{
							unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), 0);
							Var0 = { func_179() };
							unk_0x43E810617A268E4A(unk_0xECB7D3275586261E(Local_128.f_2[iVar3 /*10*/].f_1), Var0, 250f, 0);
						}
					}
				}
				break;
		}
		iVar3++;
	}
	func_996();
}

void func_996()
{
	if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iLocal_1036 /*10*/].f_1))
	{
		if (!func_24(Local_128.f_2[iLocal_1036 /*10*/].f_1))
		{
			if (!unk_0x2A3398C6222EB190(uLocal_1035, iLocal_1036))
			{
				unk_0xCA038BB6D5C71F9C(Local_128.f_2[iLocal_1036 /*10*/].f_1, 1);
				unk_0xCD7E92DE2BFA0B0D(&iLocal_1035, iLocal_1036);
			}
		}
	}
	iLocal_1036++;
	if (iLocal_1036 == 10)
	{
		iLocal_1036 = 0;
	}
}

void func_997(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		if (func_1000())
		{
			Global_2434915 = unk_0x3D35F9864E4640B1();
		}
		if (bParam3)
		{
			func_999(unk_0xECB7D3275586261E(uParam0), uParam1, 1, Global_2434915, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_999(unk_0xECB7D3275586261E(uParam0), uParam1, -1, Global_2434915, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xA761A0B6072010C8(*uParam1))
	{
		func_998(uParam1);
	}
}

void func_998(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		unk_0x0C4BDC77192798AE(uParam0);
		bVar0 = true;
	}
	if (unk_0xA761A0B6072010C8(uParam0->f_1))
	{
		unk_0x0C4BDC77192798AE(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x76B3C79DE564AFC6(uParam0->f_7))
	{
		if (!unk_0x7A6C051038031EFA(uParam0->f_7, 0))
		{
			if (unk_0x8E124932BCA8337D(uParam0->f_7))
			{
				unk_0xFAE7EEA9EC6C8B59(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_999(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xED1168B8D2D313FA();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x8682D8A6269E52C9(uParam0))
	{
		if (!unk_0x8E124932BCA8337D(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xFAE7EEA9EC6C8B59(iParam0, 1);
			}
			else
			{
				unk_0xC1F8D3D339E714E3(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xCF88C2F9C02AE277(iParam0, iParam2);
			unk_0x7F39688B4D1E8A5B(iParam0, fParam6);
			if (unk_0xA761A0B6072010C8(*uParam1))
			{
				unk_0xC5B4383DA70A2C1A(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x042302634EF280A7(iParam0, iParam9);
		}
		unk_0xF856340FF6FF9351(iParam0, uParam4);
		unk_0x0F321108A38FDEEF(iParam0, uParam5);
		*uParam1 = unk_0x92EB201D24EEB65C(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xA761A0B6072010C8(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xEB934A06DDA5027D(*uParam1, iParam8);
				}
				if (!unk_0x0BD3CCFB6C6CFA91(uParam7))
				{
					unk_0xA23268A8852A45E8("STRING");
					if (bParam10)
					{
						unk_0x50B3C23D0902259F(sParam7);
					}
					else
					{
						unk_0x7C8A7ECFBAD2C8C4(sParam7);
					}
					unk_0x05064114393805B9(*uParam1);
				}
				unk_0xC5B4383DA70A2C1A(*uParam1, 7);
			}
		}
		if (!unk_0x2A3398C6222EB190(uParam1->f_6, 2))
		{
			if (unk_0xA761A0B6072010C8(*uParam1))
			{
				unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x90219307C9D2728D(iParam0, 0))
		{
			uParam1->f_1 = unk_0x44DF128826D07906(iParam0);
			if (!unk_0x2A3398C6222EB190(uParam1->f_6, 3))
			{
				if (unk_0xA761A0B6072010C8(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xEB934A06DDA5027D(uParam1->f_1, iParam8);
					}
					if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
					{
						unk_0xA23268A8852A45E8("STRING");
						if (bParam10)
						{
							unk_0x50B3C23D0902259F(sParam7);
						}
						else
						{
							unk_0x7C8A7ECFBAD2C8C4(sParam7);
						}
						unk_0x05064114393805B9(uParam1->f_1);
					}
					unk_0xC5B4383DA70A2C1A(uParam1->f_1, 7);
					unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xA761A0B6072010C8(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xD804ACF2A7171150(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xA761A0B6072010C8(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xD804ACF2A7171150(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1000()
{
	return Global_1312830;
}

int func_1001(int iParam0)
{
	if (unk_0xAA55DF0CB38F413B(Local_128.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_128.f_2[iParam0 /*10*/].f_2))
		{
			if (unk_0xDECC749CB8B5AAB6(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[iParam0 /*10*/].f_2), 0, 7000) || unk_0xDECC749CB8B5AAB6(unk_0xD7E2A160FD5DEEE1(Local_128.f_2[iParam0 /*10*/].f_2), 1, 40000))
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

int func_1002(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x35992691C50DF43E(unk_0x3D35F9864E4640B1(), uParam0))
	{
		return 1;
	}
	if (unk_0x14D51A9D0DDF4807(unk_0x3D35F9864E4640B1(), uParam0))
	{
		return 1;
	}
	if (func_1003())
	{
		if (unk_0x63683B42C74DE9C9(unk_0x3D35F9864E4640B1(), &uVar0))
		{
			if (unk_0x269F274F1955DE87(uVar0))
			{
				uVar1 = unk_0x4849801147A2BA1E(iVar0);
				if (unk_0x76B3C79DE564AFC6(uVar1))
				{
					if (!unk_0x7A6C051038031EFA(iVar1, 0))
					{
						if (unk_0x90219307C9D2728D(iVar1, 0))
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

bool func_1003()
{
	return Global_1574291;
}

int func_1004(bool bParam0)
{
	if (func_1005(1))
	{
		return 1;
	}
	if (Global_2501777.f_4867.f_25)
	{
		Global_2501777.f_4867.f_25 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_344() == func_55() || !func_1124(func_344(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1005(bool bParam0)
{
	bool bVar0;
	
	if (!func_578(1))
	{
		bVar0 = false;
		if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56 != func_55())
		{
			if (func_1124(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56, 0, 1))
			{
				if ((Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_23 == 4 || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_23 == 8) || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_23 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_1006(func_213(unk_0x3D35F9864E4640B1())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_436(31);
				if (func_413(func_213(unk_0x3D35F9864E4640B1())))
				{
					func_436(81);
				}
				if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56 != func_55() && unk_0x80BA8E3CC61A8625(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56))
				{
					Global_1622383 = func_532(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56, -2, 0, 0);
					if (!func_343(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56))
					{
						func_436(88);
					}
				}
				else
				{
					Global_1622383 = 1;
				}
				Global_1622367 = { Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_98 };
			}
			return 1;
		}
	}
	return 0;
}

int func_1006(int iParam0)
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
		case 229:
		case 230:
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

void func_1007()
{
	if (!func_1008(unk_0x3D35F9864E4640B1()))
	{
		func_218(25);
	}
}

bool func_1008(int iParam0)
{
	return func_217(iParam0, 25);
}

void func_1009()
{
	int iVar0;
	
	iVar0 = func_285(unk_0x3D35F9864E4640B1());
	iLocal_865 = func_283(iVar0);
}

void func_1010(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 != iParam0)
	{
		func_1024(-1);
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 = iParam0;
		if (func_1023() != -1)
		{
			func_1022(-1);
		}
		if (func_1021() != -1)
		{
			func_1020(-1);
		}
		func_1019(iParam2);
		func_1017(iParam0);
		if (!func_227(iParam0))
		{
			fVar0 = func_226(iParam0);
			if (fVar0 != 1f)
			{
				func_223(fVar0);
				unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 1);
			}
		}
		if (!func_230(iParam0) || iParam3)
		{
			if (func_228(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x438B2E6B2BAD6A0D(0);
				if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
				{
					unk_0xFA0C68E165E4E628(unk_0x3D35F9864E4640B1(), 0, 0);
					unk_0x1E0B5FFAC5A97BE8(unk_0x3D35F9864E4640B1(), 0);
				}
				unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 0);
			}
			else if (unk_0x58288C08A90CC7D0() < 5)
			{
				unk_0x15007EAE63C7ECCF(1f);
				unk_0x438B2E6B2BAD6A0D(5);
			}
		}
		if (func_392())
		{
			func_218(27);
		}
		if (bParam1)
		{
			if (!func_386())
			{
				func_220(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x2A3398C6222EB190(Global_2501777.f_4512, 1) || unk_0x2A3398C6222EB190(Global_2501777.f_4512, 4)) || unk_0x2A3398C6222EB190(Global_2501777.f_4512, 0))
			{
				func_436(6);
			}
			func_1016();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x326E498BE1EE12A8(3, 0);
			unk_0x326E498BE1EE12A8(5, 0);
		}
		if (func_241(unk_0x3D35F9864E4640B1()) && func_235(unk_0x3D35F9864E4640B1()))
		{
			unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_1), 8);
		}
		func_1012();
		if (func_1011(iParam0))
		{
			unk_0x326E498BE1EE12A8(3, 0);
			unk_0x326E498BE1EE12A8(5, 0);
			unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 6);
		}
	}
}

int func_1011(int iParam0)
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

void func_1012()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_1015();
	iVar2 = func_56(unk_0x3D35F9864E4640B1());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xA7871E29B06DA901(iVar0);
		if (unk_0x80BA8E3CC61A8625(iVar1))
		{
			if (func_317(iVar1, iVar2, 1) || func_1013(iVar1, unk_0x3D35F9864E4640B1()))
			{
				unk_0xEC03B416811242C7(unk_0x3D35F9864E4640B1(), iVar1, uVar3);
				unk_0xEC03B416811242C7(iVar1, unk_0x3D35F9864E4640B1(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_1013(int iParam0, int iParam1)
{
	if (func_281(iParam0, 1) && func_281(iParam1, 1))
	{
		return (func_1014(iParam0) == func_56(iParam1) || func_1014(iParam1) == func_56(iParam0));
	}
	return 0;
}

int func_1014(int iParam0)
{
	if (func_281(iParam0, 1))
	{
		return Global_1623799[func_56(iParam0) /*488*/].f_11.f_404;
	}
	return func_55();
}

int func_1015()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_580();
	if (iVar0 != func_55())
	{
		if (func_1124(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x2A3398C6222EB190(Global_1623799[iVar1 /*488*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_1016()
{
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4512, 1))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 1);
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4512, 4))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 4);
	}
	if (unk_0x2A3398C6222EB190(Global_2501777.f_4512, 6))
	{
		unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 6);
	}
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 0);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4512), 2);
	Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_553 = 0;
	if (Global_2501777.f_4514 > 0)
	{
		unk_0x438B2E6B2BAD6A0D(Global_2501777.f_4514);
	}
	Global_2501777.f_4513 = 0;
}

void func_1017(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_470(3770, -1, 0);
	iVar1 = func_1018(iParam0);
	if (iVar1 != -1)
	{
		unk_0xCD7E92DE2BFA0B0D(&iVar0, iVar1);
		func_469(3770, iVar0, -1, 1, 0);
	}
}

int func_1018(int iParam0)
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

void func_1019(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x3D35F9864E4640B1();
	if (Global_1623799[iVar0 /*488*/].f_11.f_173 != iParam0)
	{
		Global_1623799[iVar0 /*488*/].f_11.f_173 = iParam0;
	}
}

void func_1020(int iParam0)
{
	if (Global_2501777.f_4867.f_153 != iParam0)
	{
		Global_2501777.f_4867.f_153 = iParam0;
	}
}

int func_1021()
{
	return Global_2501777.f_4867.f_153;
}

void func_1022(int iParam0)
{
	if (Global_2501777.f_4867.f_152 != iParam0)
	{
		Global_2501777.f_4867.f_152 = iParam0;
	}
}

int func_1023()
{
	return Global_2501777.f_4867.f_152;
}

void func_1024(int iParam0)
{
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_31 = iParam0;
}

int func_1025()
{
	struct<4> Var0;
	int iVar4;
	
	if (Local_128.f_196 != -1)
	{
		return Local_128.f_196;
	}
	Var0 = { func_1026() };
	Local_128.f_198 = func_490(Var0.f_0);
	Local_128.f_197 = (Var0.f_0 - 1);
	if (Local_128.f_197 < 0)
	{
		Local_128.f_197 = 0;
	}
	if (Local_128.f_196 == -1)
	{
		iVar4 = unk_0x3AF262D7332EEDF5(0, 10);
		if (iVar4 > 7)
		{
			Local_128.f_196 = 99;
		}
		else
		{
			Local_128.f_196 = 0;
		}
		if (Global_262145.f_14339 && Local_128.f_196 == 0)
		{
			Local_128.f_196 = 99;
		}
		else if (Global_262145.f_14338 && Local_128.f_196 == 99)
		{
			Local_128.f_196 = 0;
		}
	}
	return Local_128.f_196;
}

struct<4> func_1026()
{
	return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_174;
}

int func_1027()
{
	int iVar0;
	
	iVar0 = func_1028();
	if (iVar0 > -1)
	{
		if (Local_128.f_218 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1028()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x43B24C247F35B6BC();
	iVar1 = unk_0x3D35F9864E4640B1();
	if (func_34(unk_0x3D35F9864E4640B1(), 0))
	{
		iVar0 = func_394();
		iVar1 = Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_543;
	}
	if (Local_398[iVar0 /*11*/].f_10 != -1)
	{
		return Local_398[iVar0 /*11*/].f_10;
	}
	if (func_234(iVar1))
	{
		Local_398[iVar0 /*11*/].f_10 = iVar0;
		if (iVar0 == Local_128.f_218)
		{
			func_820(1);
		}
	}
	else if (func_281(iVar1, 1))
	{
		iVar2 = func_580();
		if (iVar2 != func_55())
		{
			if (unk_0x532CFF8D6B65E42F(iVar2))
			{
				Local_398[iVar0 /*11*/].f_10 = unk_0x3DAB36F6FA9328A6(iVar2);
			}
		}
	}
	return Local_398[iVar0 /*11*/].f_10;
}

int func_1029()
{
	if (func_395())
	{
		if (!func_63())
		{
			return 0;
		}
	}
	return 1;
}

int func_1030()
{
	return Local_128.f_0;
}

int func_1031(int iParam0)
{
	return Local_398[iParam0 /*11*/];
}

int func_1032()
{
	var uVar0;
	
	func_1037(&uVar0);
	if (Global_1312830 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 1;
		}
	}
	if (func_1036())
	{
		return 1;
	}
	if (Global_2457338)
	{
		return 1;
	}
	if (func_1035())
	{
		return 1;
	}
	if (func_1034(157))
	{
		if (!func_1033())
		{
			return 1;
		}
	}
	if (func_1034(155))
	{
		return 1;
	}
	if (!unk_0xE096BC82D913B3DB())
	{
		return 1;
	}
	if (func_224() != 0)
	{
		if (unk_0x7832F791572D5809(func_224()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1033()
{
	return Global_2445582.f_579;
}

int func_1034(int iParam0)
{
	if (unk_0xB2481AAB46462A07(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1035()
{
	return Global_2455114;
}

bool func_1036()
{
	return Global_2445582.f_574;
}

void func_1037(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x4AE700F97F1781DC(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -614201546:
					func_1038(iVar0);
					break;
				
				case 1050640701:
					unk_0x4AE700F97F1781DC(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -959337465)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_1038(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		if (func_1124(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xD33F4BC17EB987E5(Var0.f_1);
			if (unk_0x76B3C79DE564AFC6(uVar3))
			{
				if (unk_0x90219307C9D2728D(iVar3, 0))
				{
					uVar4 = unk_0xCFA31F1E461A6BB5(iVar3, 0);
					if (unk_0x095622A3608A0D06(uVar4, Var0.f_2) && unk_0x93BDC21B9F2C5E43())
					{
						if (func_1039(uVar4, &bVar5))
						{
							unk_0xB54B438E5C15D5FB(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x28BB69BE14577487(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_1039(int iParam0, var uParam1)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (!unk_0xCC234795142FC2D2(iParam0))
		{
			if (unk_0x8D0F418585E0886B(iParam0))
			{
				if (!unk_0x22237535B3A68DF9(unk_0xE9559A12052415BE(iParam0)))
				{
					unk_0x1581691D748490F3(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xC9FBF92709010AC3(iParam0, 0))
		{
			if (unk_0x3B077EBCBD1ABF1F(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1040()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_1041()
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
	
	if (!func_34(unk_0x3D35F9864E4640B1(), 0))
	{
		if (unk_0x2A3398C6222EB190(iLocal_751, 18))
		{
			if (!unk_0x2A3398C6222EB190(iLocal_751, 6))
			{
				if (unk_0x27CA09C6DFAB1E79())
				{
					if (func_1027() || func_393())
					{
						func_710(0, 4, 0, 0, -1, -1, -1, -1, -1);
						unk_0xCD7E92DE2BFA0B0D(&iLocal_751, 6);
					}
				}
			}
			uVar0 = Local_128.f_196;
			iVar1 = -1;
			iVar2 = -1;
			iVar3 = Local_128.f_197 + 1;
			iVar4 = Local_128.f_198;
			iVar5 = -1;
			bVar6 = !func_395();
			iVar7 = -1;
			iVar8 = 0;
			iVar9 = 0;
			iVar5 = Local_128.f_213;
			if (unk_0x2A3398C6222EB190(Local_128.f_1, 1) || unk_0x2A3398C6222EB190(Local_128.f_1, 4))
			{
				iVar7 = 2;
			}
			else if (unk_0x2A3398C6222EB190(Local_128.f_1, 8))
			{
				iVar7 = 1;
			}
			else if (((unk_0x2A3398C6222EB190(Local_128.f_1, 3) || unk_0x2A3398C6222EB190(Local_128.f_1, 9)) || unk_0x2A3398C6222EB190(Local_128.f_1, 15)) || unk_0x2A3398C6222EB190(Local_128.f_1, 5))
			{
				iVar7 = 0;
			}
			if (unk_0x27CA09C6DFAB1E79())
			{
				Global_1779220.f_2 = Local_128.f_267;
				Global_1779220.f_3 = Local_128.f_268;
				func_1088(uVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar7, iVar8, iVar9, bVar6);
			}
		}
	}
	func_435();
	if (unk_0x834C6A3950A9090B(unk_0x0031992CA618A445()) == iLocal_756)
	{
		unk_0x7F53E53C6F32D196(unk_0x0031992CA618A445(), uLocal_758);
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0xEF0CB8FF125B9F9C())
		{
			unk_0x04021FF677078694(Local_128.f_261, 1);
		}
		func_432();
	}
	func_1087();
	if (Local_128.f_219 != -1)
	{
		if (unk_0x2A3398C6222EB190(iLocal_751, 5))
		{
			if (unk_0x80BA8E3CC61A8625(unk_0xA7871E29B06DA901(Local_128.f_219)))
			{
				func_430(unk_0xA7871E29B06DA901(Local_128.f_219), 432, 0);
				func_428(unk_0xA7871E29B06DA901(Local_128.f_219), 1, 0);
				func_427(unk_0xA7871E29B06DA901(Local_128.f_219), 0, 0);
				func_426(unk_0xA7871E29B06DA901(Local_128.f_219), 0);
				func_425(unk_0xA7871E29B06DA901(Local_128.f_219), Global_262145.f_11544, 0);
			}
		}
	}
	if (func_194(0))
	{
		func_193(0);
	}
	if (unk_0x2A3398C6222EB190(iLocal_752, 0))
	{
		if (!unk_0x2A3398C6222EB190(iLocal_752, 2))
		{
			unk_0xEFA5EE6457AF6CFC("DisableFlightMusic", 0);
			unk_0xEFA5EE6457AF6CFC("WantedMusicDisabled", 0);
		}
	}
	unk_0xCD7E92DE2BFA0B0D(&iLocal_752, 8);
	func_189();
	unk_0x9115CF03B53799D1(1);
	func_820(0);
	func_1086(&(Local_128.f_269));
	func_1043(1, 0);
	if (!func_34(unk_0x3D35F9864E4640B1(), 0))
	{
		unk_0x438B2E6B2BAD6A0D(5);
	}
	func_1042();
}

void func_1042()
{
	unk_0xBEE2834559A8897A();
}

void func_1043(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1344830.f_1.f_108 != 0)
	{
		Global_1344830.f_1.f_108 = 0;
	}
	Global_1344830.f_1.f_109 = -1;
	Global_1344830.f_1.f_110 = -1;
	if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 167 || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 168)
	{
		func_1084();
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 4);
	}
	if ((func_577() && iParam1 != 0) && Global_262145.f_16099)
	{
		if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 190 || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 192)
		{
			func_1068(unk_0x3D35F9864E4640B1(), iParam1, Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 192, 0);
			if (func_1067(iParam1))
			{
				func_1068(unk_0x3D35F9864E4640B1(), iParam1, Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 192, 1);
			}
		}
	}
	if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 164 || Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 == 208)
	{
		unk_0x326E498BE1EE12A8(3, 1);
		unk_0x326E498BE1EE12A8(5, 1);
	}
	if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 != -1)
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_32 = -1;
		if (!unk_0x2A3398C6222EB190(Global_1574385.f_1, 14) && !func_241(unk_0x3D35F9864E4640B1()))
		{
			func_220(0);
		}
	}
	else if (func_1065(unk_0x3D35F9864E4640B1()) != -1)
	{
		func_1024(-1);
	}
	func_1064(func_55());
	if (func_194(16))
	{
		func_193(16);
	}
	func_1061(0);
	func_1019(-1);
	func_1060();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1059(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1057(iVar1);
		iVar1++;
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 0))
	{
		unk_0x15007EAE63C7ECCF(1f);
		unk_0x438B2E6B2BAD6A0D(5);
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 0);
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 5))
	{
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 5);
	}
	iVar2 = func_419();
	if ((func_314(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1056(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_505(iVar2))
	{
		func_1052(-1, 1);
	}
	else if ((((func_418(iVar2) || func_1051(iVar2)) || func_1050(iVar2)) || func_502(iVar2)) || func_500(iVar2))
	{
	}
	else
	{
		func_1052(-1, 1);
	}
	func_216(19);
	func_216(20);
	func_216(21);
	func_216(22);
	func_216(27);
	func_193(3);
	func_193(4);
	func_193(7);
	func_1049();
	if (func_235(unk_0x3D35F9864E4640B1()))
	{
		func_820(0);
	}
	func_216(29);
	Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56 = func_55();
	if (Global_2501777.f_4867.f_25 != 0)
	{
		Global_2501777.f_4867.f_25 = 0;
	}
	if (bParam0)
	{
		func_195();
	}
	if (!func_241(unk_0x3D35F9864E4640B1()))
	{
		func_215();
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 1);
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 6))
	{
		unk_0x326E498BE1EE12A8(3, 1);
		unk_0x326E498BE1EE12A8(5, 1);
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 6);
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 7))
	{
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 7);
	}
	if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 8))
	{
		func_1048("IMPEXP_SELFDES", 0);
		func_1046("IMPEXP_SELFDES");
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 8);
	}
	func_1044(iVar2, 0);
}

void func_1044(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x2A3398C6222EB190(Global_1779211.f_3, 9))
		{
			unk_0xFD69BDF108B32E5B(func_1045(iParam0));
			unk_0xCD7E92DE2BFA0B0D(&(Global_1779211.f_3), 9);
		}
	}
	else if (unk_0x2A3398C6222EB190(Global_1779211.f_3, 9))
	{
		unk_0xB3E27A9E412BBDF8(func_1045(iParam0));
		unk_0xD804ACF2A7171150(&(Global_1779211.f_3), 9);
	}
}

char* func_1045(int iParam0)
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

void func_1046(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x996B09F758C57FBE(&(Global_104439.f_14002[iVar0 /*104*/])))
		{
			if (unk_0xB3404E397FF56B3B(&(Global_104439.f_14002[iVar0 /*104*/]), sParam0))
			{
				if (Global_104439.f_14002[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_810();
					Global_104439.f_14002[iVar0 /*104*/].f_99[Global_14443] = 0;
					if (func_1047(iVar0))
					{
					}
					else
					{
						Global_104439.f_14002[iVar0 /*104*/].f_24 = 0;
						Global_104439.f_14002[iVar0 /*104*/].f_28 = 0;
						Global_104439.f_14002[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x184D9974941265BF(Global_104439.f_14002[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1047(int iParam0)
{
	if ((Global_104439.f_14002[iParam0 /*104*/].f_99[0] == 1 || Global_104439.f_14002[iParam0 /*104*/].f_99[1] == 1) || Global_104439.f_14002[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1048(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x996B09F758C57FBE(&(Global_104439.f_14002[iVar0 /*104*/])))
		{
			if (unk_0xB3404E397FF56B3B(&(Global_104439.f_14002[iVar0 /*104*/]), sParam0))
			{
				if (Global_104439.f_14002[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_104439.f_14002[iVar0 /*104*/].f_24 = 1;
				if (Global_104439.f_14002[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_104439.f_14002[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_104439.f_13912[0 /*20*/].f_17 = 0;
					}
					if (Global_104439.f_14002[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_104439.f_13912[1 /*20*/].f_17 = 0;
					}
					if (Global_104439.f_14002[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_104439.f_13912[2 /*20*/].f_17 = 0;
					}
					if (Global_104439.f_14002[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_104439.f_13912[3 /*20*/].f_17 = 0;
					}
					Global_104439.f_14002[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_104439.f_14002[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1049()
{
	if (func_1008(unk_0x3D35F9864E4640B1()))
	{
		func_216(25);
	}
}

int func_1050(int iParam0)
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

int func_1051(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_1052(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_419();
	}
	if (iParam0 > 0)
	{
		if (func_580() != func_55())
		{
			if (func_1055(unk_0x3D35F9864E4640B1()) == unk_0x3D35F9864E4640B1())
			{
				Global_2488853.f_93[func_1054(iParam0)] = 1;
			}
		}
		iVar0 = func_1054(159);
		if (func_1053(iVar0, Global_262145.f_11795, bParam1))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(157);
		if (func_1053(iVar0, Global_262145.f_11795, bParam1))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(148);
		if (func_1053(iVar0, Global_262145.f_11795, bParam1))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(164);
		if (func_1053(iVar0, Global_262145.f_11795, bParam1))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(142);
		if (func_1053(iVar0, Global_262145.f_11795, bParam1))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(152);
		if (func_1053(iVar0, Global_262145.f_11795, bParam1))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(166);
		if (func_1053(iVar0, Global_262145.f_11795, bParam1))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(170);
		if (func_1053(iVar0, Global_262145.f_11795, bParam1))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(173);
		if (func_1053(iVar0, Global_262145.f_11795, bParam1))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(179);
		if (func_1053(iVar0, Global_262145.f_11795, bParam1))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(200);
		if (func_1053(iVar0, Global_262145.f_11795, bParam1))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(201);
		if (func_1053(iVar0, Global_262145.f_11795, bParam1))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(182);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(183);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(185);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(186);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(180);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(195);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(197);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(198);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(207);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(208);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(209);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(214);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(215);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(216);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(217);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(218);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(219);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(220);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(221);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1053(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_217(unk_0x3D35F9864E4640B1(), 19) && !func_217(unk_0x3D35F9864E4640B1(), 20)) && !func_217(unk_0x3D35F9864E4640B1(), 9))
		{
			return 0;
		}
	}
	if (Global_2488853.f_93[iParam0] == 1 && func_11(&(Global_2488853[iParam0 /*2*/])))
	{
		if (func_551(&(Global_2488853[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2488853.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1054(int iParam0)
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

int func_1055(int iParam0)
{
	return Global_1623799[iParam0 /*488*/].f_11.f_34;
}

void func_1056(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_419();
	}
	if (iParam0 > 0)
	{
		if (func_580() != func_55())
		{
			Global_2488853.f_93[func_1054(iParam0)] = 1;
		}
		iVar0 = func_1054(155);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(163);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(160);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(153);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(162);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(154);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(171);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(172);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(199);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(194);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(193);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(210);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(205);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(189);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1054(211);
		if (func_1053(iVar0, Global_262145.f_11796, 0))
		{
			func_9(&(Global_2488853[iVar0 /*2*/]));
			func_10(&(Global_2488853[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1057(int iParam0)
{
	if (!func_59(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_275[iParam0 /*3*/], func_1058(), 0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_275[iParam0 /*3*/] = { func_1058() };
	}
	if (!func_59(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_262[iParam0 /*3*/], func_1058(), 0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_262[iParam0 /*3*/] = { func_1058() };
	}
}

Vector3 func_1058()
{
	struct<3> Var0;
	
	return Var0;
}

void func_1059(int iParam0)
{
	if (!func_59(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_144[iParam0 /*3*/], func_1058(), 0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_144[iParam0 /*3*/] = { func_1058() };
	}
	if (!func_59(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_119[iParam0 /*3*/], func_1058(), 0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_119[iParam0 /*3*/] = { func_1058() };
	}
}

void func_1060()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573831 = { Var0 };
	Global_1573831.f_13 = func_55();
	if (unk_0x2A3398C6222EB190(Global_1573334, 3))
	{
		unk_0xD804ACF2A7171150(&Global_1573334, 3);
	}
}

void func_1061(bool bParam0)
{
	if (bParam0)
	{
		if (!func_519(unk_0x3D35F9864E4640B1(), 14))
		{
			func_1063(14);
		}
	}
	else if (func_519(unk_0x3D35F9864E4640B1(), 14))
	{
		func_1062(14);
	}
}

void func_1062(int iParam0)
{
	unk_0xD804ACF2A7171150(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_5), iParam0);
}

void func_1063(int iParam0)
{
	unk_0xCD7E92DE2BFA0B0D(&(Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_5), iParam0);
}

void func_1064(int iParam0)
{
	if (func_234(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x3D35F9864E4640B1() != iParam0)
		{
			if (Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_404 != iParam0)
			{
				Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_404 = iParam0;
				if (iParam0 != func_55())
				{
				}
			}
		}
	}
}

int func_1065(int iParam0)
{
	if (func_1066(iParam0, 0))
	{
		return Global_1623799[iParam0 /*488*/].f_11.f_31;
	}
	return -1;
}

int func_1066(int iParam0, int iParam1)
{
	if (Global_1623799[iParam0 /*488*/].f_11.f_31 != -1 || (iParam1 && Global_1623799[iParam0 /*488*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_1067(int iParam0)
{
	return func_574(iParam0) == 5;
}

void func_1068(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_683(iParam0, iParam1) && func_1083(iParam0, iParam1))
	{
		iVar0 = func_682(iParam0, iParam1);
		func_1071(iVar0, bParam2, bParam3);
		func_1069(iVar0, 1);
	}
}

void func_1069(int iParam0, int iParam1)
{
	func_670(func_1070(iParam0), iParam1, -1, 1);
	Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iParam0 /*12*/].f_6 = iParam1;
}

int func_1070(int iParam0)
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

void func_1071(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_901(unk_0x3D35F9864E4640B1(), iParam0);
	if (!bParam1)
	{
		func_1082(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2488772[iParam0];
		iVar0 = func_1081(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1780703 = -1;
		}
		func_1080(iParam0, 0, bParam2);
	}
	else if (func_1078(iParam0, bParam2))
	{
		iVar0 = func_1077(iVar2, 0);
		iVar3 = func_756(unk_0x3D35F9864E4640B1(), iVar2);
		iVar4 = func_1076(iVar2, bParam2);
		iVar5 = func_1077(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1067(iVar2) && func_1075(unk_0x3D35F9864E4640B1(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1082(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1074(unk_0x3D35F9864E4640B1(), iVar2) > 0)
		{
			func_1073(iParam0, (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iParam0 /*12*/].f_2 - (func_1076(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1077(iVar2, bParam2) / func_1074(unk_0x3D35F9864E4640B1(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1067(iVar2) && func_1075(unk_0x3D35F9864E4640B1(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1072(unk_0x3D35F9864E4640B1(), iVar2, iVar0, bParam2);
}

void func_1072(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (func_677(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1593076[iParam0 /*647*/].f_259.f_228 = iParam2;
				}
				else
				{
					Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1073(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iParam0 /*12*/].f_2)
	{
		Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_259.f_154[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1074(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_677(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1075(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_677(iParam1) && func_1067(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/] == iParam1)
			{
				return Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1076(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_574(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16070;
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16075;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16069;
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16074;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16068;
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16073;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16066;
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16071;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16067;
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16072;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20094;
				if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20095;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20078;
				if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20079;
				}
			}
			break;
	}
	return uVar0;
}

int func_1077(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_574(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16051;
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16060);
			}
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16065);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16052;
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16059);
			}
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16064);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16053;
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16058);
			}
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16063);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16054;
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16056);
			}
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16061);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16055;
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16057);
			}
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16062);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20091;
			}
			else
			{
				iVar0 = Global_262145.f_20075;
			}
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20092);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20076);
				}
			}
			if (func_681(unk_0x3D35F9864E4640B1(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20093);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20077);
				}
			}
			if (func_1075(unk_0x3D35F9864E4640B1(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1078(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_671(15384, -1, -1);
	}
	return func_671(func_1079(iParam0), -1, -1);
}

int func_1079(int iParam0)
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

void func_1080(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_670(15384, iParam1, -1, 1);
		return;
	}
	func_670(func_1079(iParam0), iParam1, -1, 1);
}

int func_1081(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2488772[iParam0];
	iVar1 = func_901(unk_0x3D35F9864E4640B1(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2488779;
	}
	if (func_1067(iVar1))
	{
		if (func_1075(unk_0x3D35F9864E4640B1(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1082(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2488779 = iParam1;
		return;
	}
	Global_2488772[iParam0] = iParam1;
}

int func_1083(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_683(iParam0, iParam1))
	{
		iVar0 = func_682(iParam0, iParam1);
		if (Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_4 > 0 && Global_1593076[iParam0 /*647*/].f_259.f_154[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1084()
{
	unk_0xD804ACF2A7171150(&(Global_2501777.f_1702), 28);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_1702), 29);
	func_1085(24);
}

void func_1085(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_7[iVar0]), iVar1);
}

void func_1086(var uParam0)
{
	if (unk_0x8D1E00A3532AD265(*uParam0))
	{
		unk_0xE5BEE04A55AD866C(*uParam0, 1);
	}
}

void func_1087()
{
	unk_0x15C7C9DD9A0BD58C(iLocal_757);
	unk_0x15C7C9DD9A0BD58C(iLocal_756);
}

void func_1088(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	var uVar0;
	struct<23> Var1;
	int iVar24;
	struct<24> Var25;
	struct<24> Var49;
	struct<25> Var73;
	
	uVar0 = unk_0x49CAADAD1ABAB70A();
	iVar24 = func_56(unk_0x3D35F9864E4640B1());
	Var1.f_0 = Global_1779220;
	Var1.f_1 = Global_1779220.f_1;
	Var1.f_4 = Global_1779220.f_4;
	Var1.f_5 = Global_1779220.f_5;
	Var1.f_6 = Global_1779220.f_6;
	Var1.f_7 = Global_1779220.f_7;
	Var1.f_8 = Global_1779220.f_8;
	Var1.f_9 = Global_1779220.f_9;
	Var1.f_10 = Global_1779220.f_10;
	Var1.f_2 = Global_1779220.f_2;
	Var1.f_3 = Global_1779220.f_3;
	Var1.f_11 = iParam3;
	Var1.f_12 = iParam2;
	Var1.f_13 = uParam0;
	Var1.f_14 = func_1095();
	Var1.f_16 = iParam1;
	Var1.f_21 = iParam7;
	Var1.f_22 = iParam8;
	if (iVar24 != func_55() && unk_0x80BA8E3CC61A8625(iVar24))
	{
		Var1.f_17 = iParam4;
		Var1.f_18 = func_1094(iVar24, iParam3);
		Var1.f_19 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iParam4) / unk_0xBBDA792448DB5A89(func_487(iParam3))) * 100f));
		Var1.f_20 = (100 - unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_1091(iParam3, iVar24)) / unk_0xBBDA792448DB5A89(func_487(iParam3))) * 100f)));
		Var1.f_15 = func_1090(iVar24);
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		if (unk_0xB3404E397FF56B3B(uVar0, "GB_CONTRABAND_SELL"))
		{
			Var25 = { Var1 };
			Var25.f_23 = iParam5;
			unk_0x774EB67955807026(&Var25);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_CONTRABAND_BUY"))
		{
			unk_0xBB02B6537AD55AC4(&Var1);
		}
		else if (unk_0xB3404E397FF56B3B(sVar0, "GB_CONTRABAND_DEFEND"))
		{
			if (bParam9 == 1)
			{
				Var49 = { Var1 };
				Var49.f_23 = iParam5;
				unk_0xFA7681B6C6719B90(&Var49);
			}
			else
			{
				Var73 = { Var1 };
				Var73.f_23 = iParam5;
				Var73.f_24 = iParam6;
				unk_0xC9F843BBFEDF6876(&Var73);
			}
		}
	}
	func_1089();
}

void func_1089()
{
	struct<18> Var0;
	
	Global_1779220 = { Var0 };
}

int func_1090(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1593076[iParam0 /*647*/].f_259.f_82[iVar0 /*3*/] > 0 && Global_1593076[iParam0 /*647*/].f_259.f_82[iVar0 /*3*/] <= 22)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1091(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_1093(iParam1, iParam0))
	{
		iVar0 = func_1092(iParam0, iParam1);
		iVar1 = func_486(iParam0);
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

int func_1092(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1593076[iParam1 /*647*/].f_259.f_82[iVar0 /*3*/])
			{
				return Global_1593076[iParam1 /*647*/].f_259.f_82[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1093(int iParam0, int iParam1)
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
			if (Global_1593076[iParam0 /*647*/].f_259.f_82[iVar0 /*3*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1094(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam1 == Global_1593076[iParam0 /*647*/].f_259.f_82[iVar0 /*3*/])
			{
				return Global_1593076[iParam0 /*647*/].f_259.f_82[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_1095()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_56(unk_0x3D35F9864E4640B1());
	if (iVar2 != func_55())
	{
		iVar1 = 1;
		while (iVar1 <= 22)
		{
			if (func_1093(iVar2, iVar1))
			{
				unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	return uVar0;
}

void func_1096(struct<21> Param0)
{
	func_1122(func_1123(Param0.f_0), Param0);
	unk_0x8A4541F891BF3B2B(10);
	unk_0x79C80114C0FC1BE7(3);
	func_1121(0, -1, 0);
	unk_0x158D750851ECBBF8(&Local_128, 270);
	unk_0xC0AFA7500AD40377(&Local_398, 353);
	if (!func_1120())
	{
		func_1041();
	}
	if (unk_0x27CA09C6DFAB1E79())
	{
		unk_0x0BDEAF4CD9510F40(0);
		if (unk_0xEF0CB8FF125B9F9C())
		{
		}
		func_1117();
		func_1097(0, 0);
		Local_398[unk_0x43B24C247F35B6BC() /*11*/] = 0;
	}
	else
	{
		func_1041();
	}
}

void func_1097(int iParam0, int iParam1)
{
	func_1116();
	func_1100(1);
	if ((iParam0 != 0 && unk_0x80BA8E3CC61A8625(iParam1)) && func_1099(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xCD7E92DE2BFA0B0D(&Global_1779206, 0);
				break;
			}
	}
	if (!func_569() && !func_281(unk_0x3D35F9864E4640B1(), 1))
	{
		if (func_389())
		{
			func_219(3);
		}
	}
	func_219(4);
	if (func_578(0))
	{
		Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11.f_56 = func_580();
	}
	if (func_413(iParam0))
	{
		func_754();
		Global_1779238.f_18 = func_732(func_344());
	}
	else if (func_417(func_1065(unk_0x3D35F9864E4640B1())))
	{
		func_752();
		Global_1779291.f_18 = func_732(func_344());
	}
	func_1098();
}

void func_1098()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1344830.f_531[iVar0 /*42*/].f_1 = func_55();
		Global_1344830.f_531[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_1099(int iParam0, bool bParam1)
{
	return func_317(unk_0x3D35F9864E4640B1(), iParam0, bParam1);
}

void func_1100(bool bParam0)
{
	int iVar0;
	
	func_1085(33);
	func_1085(34);
	func_1085(35);
	func_1085(36);
	func_1085(37);
	func_1085(38);
	func_1085(39);
	func_1085(40);
	func_1085(43);
	func_1085(41);
	func_1085(54);
	func_1085(42);
	func_1085(47);
	func_1115(23);
	func_1115(24);
	func_1085(92);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_1702), 2);
	func_1114();
	func_1109();
	func_1102();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2501777.f_4867.f_12[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1101(3))
	{
		func_1115(3);
	}
	else if (func_1101(4))
	{
		func_1115(4);
	}
	else if (func_1101(5))
	{
		func_1115(5);
	}
	else if (func_1101(6))
	{
		func_1115(6);
	}
	else if (func_1101(7))
	{
		func_1115(7);
	}
	else if (((((((((((((((((func_1101(0) || func_1101(1)) || func_1101(2)) || func_1101(8)) || func_1101(9)) || func_1101(10)) || func_1101(11)) || func_1101(12)) || func_1101(13)) || func_1101(14)) || func_1101(15)) || func_1101(16)) || func_1101(17)) || func_1101(18)) || func_1101(19)) || func_1101(20)) || func_1101(21)) || func_1101(22))
	{
		func_1115(8);
		func_1115(0);
		func_1115(1);
		func_1115(2);
		func_1115(9);
		func_1115(10);
		func_1115(11);
		func_1115(12);
		func_1115(13);
		func_1115(14);
		func_1115(15);
		func_1115(16);
		func_1115(17);
		func_1115(18);
		func_1115(19);
		func_1115(20);
		func_1115(21);
		func_1115(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2501777.f_4867.f_12[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1101(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_12[iVar0], iVar1);
}

void func_1102()
{
	if (func_1108())
	{
		func_1107(0);
		func_1107(1);
		func_1107(2);
		func_1107(3);
		func_1107(4);
		func_1107(5);
		func_1107(6);
		func_1107(7);
		if (func_1106(8))
		{
			func_1107(8);
		}
		if (func_1106(15))
		{
			if (func_1104(func_1105(), 3))
			{
				func_1103(func_1105(), 3);
			}
			func_1107(15);
		}
	}
}

void func_1103(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_104439.f_27911[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_104439.f_27911[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_1104(int iParam0, int iParam1)
{
	if (Global_104439.f_27911[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_1105()
{
	if (func_817())
	{
		Global_104439.f_27911[20 /*29*/].f_24[Global_14443] = 1;
	}
	return 20;
}

bool func_1106(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_19[iVar0], iVar1);
}

void func_1107(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_19[iVar0]), iVar1);
}

int func_1108()
{
	if ((((((((func_1106(0) || func_1106(1)) || func_1106(2)) || func_1106(3)) || func_1106(4)) || func_1106(5)) || func_1106(6)) || func_1106(7)) || func_1106(8))
	{
		return 1;
	}
	return 0;
}

void func_1109()
{
	if (func_1113())
	{
		func_1112(0);
		func_1112(1);
		func_1112(2);
		func_1112(3);
		func_1112(4);
		func_1112(5);
		func_1112(6);
		func_1112(7);
		func_1112(8);
		func_1112(9);
		func_1112(10);
		func_1112(11);
		func_1112(12);
		if (func_1111(13))
		{
			if (func_1104(func_1110(), 3))
			{
				func_1103(func_1110(), 3);
			}
			func_1112(13);
		}
	}
}

int func_1110()
{
	if (func_817())
	{
		Global_104439.f_27911[76 /*29*/].f_24[Global_14443] = 1;
	}
	return 76;
}

bool func_1111(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x2A3398C6222EB190(Global_2501777.f_4867.f_17[iVar0], iVar1);
}

void func_1112(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_17[iVar0]), iVar1);
}

int func_1113()
{
	if ((((((((((((func_1111(0) || func_1111(1)) || func_1111(2)) || func_1111(3)) || func_1111(4)) || func_1111(5)) || func_1111(6)) || func_1111(7)) || func_1111(8)) || func_1111(9)) || func_1111(10)) || func_1111(11)) || func_1111(12))
	{
		return 1;
	}
	return 0;
}

void func_1114()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2501777.f_4867.f_15[iVar0] = 0;
		iVar0++;
	}
}

void func_1115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD804ACF2A7171150(&(Global_2501777.f_4867.f_12[iVar0]), iVar1);
}

void func_1116()
{
	struct<14> Var0;
	
	Global_1779220 = { Var0 };
	Global_1779220.f_14 = 0;
	Global_1779220.f_15 = 0;
}

void func_1117()
{
	int iVar0;
	
	unk_0x659E5E147E8E6635("relDefendPlayer", &iLocal_756);
	unk_0x659E5E147E8E6635("relDefendAI", &iLocal_757);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x85F49C37BE784CD7(1, Global_1574701[iVar0], iLocal_756);
		unk_0x85F49C37BE784CD7(1, iLocal_756, Global_1574701[iVar0]);
		unk_0x85F49C37BE784CD7(1, Global_1574701[iVar0], iLocal_757);
		unk_0x85F49C37BE784CD7(1, iLocal_757, Global_1574701[iVar0]);
		unk_0x85F49C37BE784CD7(1, iLocal_756, joaat("COP"));
		unk_0x85F49C37BE784CD7(1, joaat("COP"), iLocal_756);
		unk_0x85F49C37BE784CD7(1, iLocal_756, Global_1574745[5]);
		unk_0x85F49C37BE784CD7(1, Global_1574745[5], iLocal_756);
		unk_0x85F49C37BE784CD7(1, iLocal_756, Global_1574734);
		unk_0x85F49C37BE784CD7(1, Global_1574734, iLocal_756);
		iVar0++;
	}
	unk_0x85F49C37BE784CD7(5, iLocal_756, iLocal_757);
	unk_0x85F49C37BE784CD7(5, iLocal_757, iLocal_756);
	unk_0x85F49C37BE784CD7(1, 2017343592, iLocal_757);
	unk_0x85F49C37BE784CD7(5, 2017343592, iLocal_756);
	func_1119(1, &iLocal_757);
	func_1118(&iLocal_757);
	func_1118(&iLocal_756);
}

void func_1118(int iParam0)
{
	unk_0x85F49C37BE784CD7(1, -1865950624, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, -1865950624);
	unk_0x85F49C37BE784CD7(1, 296331235, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 296331235);
	unk_0x85F49C37BE784CD7(1, 1166638144, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 1166638144);
	unk_0x85F49C37BE784CD7(1, 2037579709, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 2037579709);
	unk_0x85F49C37BE784CD7(1, 2017343592, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 2017343592);
	unk_0x85F49C37BE784CD7(1, -1821475077, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, -1821475077);
	unk_0x85F49C37BE784CD7(1, 1782292358, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, 1782292358);
	unk_0x85F49C37BE784CD7(1, -1033021910, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, -1033021910);
	unk_0x85F49C37BE784CD7(1, -1285976420, *iParam0);
	unk_0x85F49C37BE784CD7(1, *iParam0, -1285976420);
}

void func_1119(int iParam0, int iParam1)
{
	unk_0x85F49C37BE784CD7(iParam0, joaat("COP"), *iParam1);
	unk_0x85F49C37BE784CD7(iParam0, *iParam1, joaat("COP"));
	unk_0x85F49C37BE784CD7(iParam0, joaat("army"), *iParam1);
	unk_0x85F49C37BE784CD7(iParam0, *iParam1, joaat("army"));
	unk_0x85F49C37BE784CD7(iParam0, -183807561, *iParam1);
	unk_0x85F49C37BE784CD7(iParam0, *iParam1, -183807561);
}

int func_1120()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 0;
		}
		if (unk_0xCA641F91944A37DE())
		{
			return 1;
		}
		if (func_1036())
		{
			return 0;
		}
		if (func_1034(155))
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

int func_1121(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF5343104BDF6779F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1042();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1000())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x27CA09C6DFAB1E79())
				{
					if (!bParam2)
					{
						func_1042();
					}
					else
					{
						return 0;
					}
				}
				if (func_1036())
				{
					if (!bParam2)
					{
						func_1042();
					}
					else
					{
						return 0;
					}
				}
				if (func_1034(155))
				{
					if (!bParam2)
					{
						func_1042();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8B05DA934032590D())
			{
				if (!bParam2)
				{
					func_1042();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF5343104BDF6779F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			if (!bParam2)
			{
				func_1042();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8B05DA934032590D())
	{
		if (!bParam2)
		{
			func_1042();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1122(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		func_1042();
	}
	unk_0x3C5BEC9CD4A5F148(uParam0, 0, Param1.f_16);
}

int func_1123(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
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
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
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
		
		case 112:
			return 32;
		
		case 113:
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
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 2;
		
		case 135:
			return 1;
		
		case 131:
			return 2;
		
		case 132:
			return 4;
		
		case 133:
			return 2;
		
		case 134:
			return 2;
		
		case 116:
			return 1;
		
		case 136:
			return 2;
		
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
			return 0;
		
		case 146:
			return 1;
		
		case 143:
			return 4;
		
		case 144:
			return 16;
		
		case 145:
			return 32;
		
		default:
	}
	return 0;
}

int func_1124(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434915.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

